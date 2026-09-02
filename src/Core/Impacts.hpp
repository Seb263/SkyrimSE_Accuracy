#pragma once

#include "DataHandler.hpp"
#include "SettingsIni.hpp"

#include "Utils/MiscUtils.hpp"

#include "API/CIF-API.h"

namespace ModCore
{
    class Impacts
    {
    public:
        static void RegisterImpacts()
        {
            ModData::CIF_API_Interface->RegisterPreHitCallback((std::string)ModData::MOD_NAME, 100,
                [](const std::string& eventName, RE::HitData& hitData) {
                    RE::Actor* victim = MiscUtils::ResolveHandle<RE::Actor>(hitData.target);
                    if (!victim) return;

                    const ActorCategory category = GetActorCategory(victim);

                    HandleArmorDamage(victim, category, hitData);

                    const float staggerMultiplier = victim->IsStaggering() ? GetStaggeredMultiplier(victim, category) : 1.0f;
                    ApplyStaggerMultiplier(hitData, staggerMultiplier);
                });
        }

    private:

        enum class ActorCategory { kPlayer, kHumanoid, kCreature };
        enum class ArmorClass { kCloth, kLight, kHeavy };

		static void HandleArmorDamage(RE::Actor* victim, ActorCategory category, RE::HitData& hitData)
		{
			const bool globalEnabledFeatures = SettingsIni::bArmorModifiers_Global_EnableFeatures;
			const bool categoryEnabledFeatures = IsCategoryEnabled(category);

			const float initialPhysicalDamage = hitData.physicalDamage;
			const float initialTotalDamage = hitData.totalDamage;
			const float initialResistedDamage = hitData.resistedPhysicalDamage;

			TRACE("\n"
				"=== HandleArmorDamage START ===\n"
				"  Input:\n"
				"    Physical Damage        : {}\n"
				"    Total Damage           : {}\n"
				"    Resisted Damage        : {}\n"
				"    Category               : {}",
				initialPhysicalDamage, initialTotalDamage, initialResistedDamage, magic_enum::enum_name(category)
			);

			if (!globalEnabledFeatures && !categoryEnabledFeatures) {
				TRACE("  Armor modifiers disabled.");
				return;
			}

			if (hitData.physicalDamage <= 0.0f) {
				TRACE("  Ignored: physical damage <= 0.");
				return;
			}

			const float rawVanillaAR = SumArmorRating(victim, nullptr);
			if (rawVanillaAR <= 0.0f) {
				TRACE("  No armor detected. Continuing for exposed location handling.");
			}

			const float rMeasured = 1.0f - (hitData.totalDamage / hitData.physicalDamage);
			const float C = rawVanillaAR > 0.0f ? rawVanillaAR * (1.0f - rMeasured) / rMeasured : 0.0f;
			const float adjustedVanillaAR = SumWeightedArmorRating(victim, category, nullptr);

			const RE::NiPoint3 hitPosition = hitData.hitPosition;

			const auto bipedEntry = ModData::CIF_API_Interface->GetBipedEntry(victim, hitPosition);

			const bool hasLocation = !bipedEntry.bipedSlots.empty();

			float adjustedLocationalAR = adjustedVanillaAR;
			float blend = GetFallbackBlend(victim, category);
			bool locationIsExposed = false;

			if (hasLocation) {
				float localWeight = 0.0f;
				float localBlendNumerator = 0.0f;

				adjustedLocationalAR = SumWeightedArmorRating(victim, category, &bipedEntry.bipedSlots, &localWeight, &localBlendNumerator);

				if (localWeight > 0.0f) {
					blend = localBlendNumerator / localWeight;
				} else {
					adjustedLocationalAR = 0.0f;
					locationIsExposed = true;
				}
			}

			blend = std::clamp(blend, 0.0f, 1.0f);

			const float rVanillaAdjusted = adjustedVanillaAR > 0.0f ? adjustedVanillaAR / (adjustedVanillaAR + C) : 0.0f;
			const float rLocationalAdjusted = adjustedLocationalAR > 0.0f ? adjustedLocationalAR / (adjustedLocationalAR + C) : 0.0f;
			const float rBlended = std::lerp(rVanillaAdjusted, rLocationalAdjusted, blend);
			float newTotalDamage = hitData.physicalDamage * (1.0f - rBlended);

			if (locationIsExposed) {
				newTotalDamage *= std::max(0.0f, GetExposedLocationMultiplier(category));
			}

			const float resistScale = rMeasured > 0.0f ? (rBlended / rMeasured) : 1.0f;

			hitData.resistedPhysicalDamage = std::max(0.0f, hitData.resistedPhysicalDamage * resistScale);
			hitData.totalDamage = std::max(0.0f, newTotalDamage);

			TRACE("\n"
				"  Armor:\n"
				"    Vanilla AR             : {}\n"
				"    Adjusted Global AR     : {}\n"
				"    Adjusted Location AR   : {}\n"
				"    Location Found         : {}\n"
				"    Location Exposed       : {}\n"
				"    Blend                  : {}",
				rawVanillaAR, adjustedVanillaAR, adjustedLocationalAR, hasLocation, locationIsExposed, blend
			);

			TRACE("\n"
				"  Resistance:\n"
				"    Measured               : {}\n"
				"    Vanilla Adjusted       : {}\n"
				"    Location Adjusted      : {}\n"
				"    Final                  : {}\n"
				"    Scale                  : {}",
				rMeasured, rVanillaAdjusted, rLocationalAdjusted, rBlended, resistScale
			);

			TRACE("\n"
				"  Output:\n"
				"    Physical Damage        : {} -> {}\n"
				"    Total Damage           : {} -> {}\n"
				"    Resisted Damage        : {} -> {}\n"
				"=== HandleArmorDamage END ===",
				initialPhysicalDamage, hitData.physicalDamage, initialTotalDamage,
				hitData.totalDamage, initialResistedDamage, hitData.resistedPhysicalDamage
			);
		}

        static ActorCategory GetActorCategory(RE::Actor* actor)
        {
            if (actor->IsPlayerRef()) return ActorCategory::kPlayer;

            static auto* actorTypeNPC = RE::TESForm::LookupByEditorID<RE::BGSKeyword>("ActorTypeNPC");
            if (actorTypeNPC && actor->HasKeyword(actorTypeNPC)) return ActorCategory::kHumanoid;

            return ActorCategory::kCreature;
        }

        static bool IsCategoryEnabled(ActorCategory category)
        {
            switch (category) {
                case ActorCategory::kPlayer: return SettingsIni::bArmorModifiers_Player_EnableFeatures;
                case ActorCategory::kHumanoid: return SettingsIni::bArmorModifiers_Humanoid_EnableFeatures;
                case ActorCategory::kCreature: return SettingsIni::bArmorModifiers_Creature_EnableFeatures;
            }
            return false;
        }

        static ArmorClass GetArmorClass(RE::TESObjectARMO* armor)
        {
            switch (armor->GetArmorType()) {
                case RE::BIPED_MODEL::ArmorType::kLightArmor: return ArmorClass::kLight;
                case RE::BIPED_MODEL::ArmorType::kHeavyArmor: return ArmorClass::kHeavy;
                default: return ArmorClass::kCloth;
            }
        }

        static float GetGlobalMultForClass(ArmorClass armorClass)
        {
            switch (armorClass) {
                case ArmorClass::kCloth: return SettingsIni::fArmorModifiers_Global_Cloth_EffectivenessMult;
                case ArmorClass::kLight: return SettingsIni::fArmorModifiers_Global_Light_EffectivenessMult;
                case ArmorClass::kHeavy: return SettingsIni::fArmorModifiers_Global_Heavy_EffectivenessMult;
            }
            return 1.0f;
        }

        static float GetCategoryMultForClass(ActorCategory category, ArmorClass armorClass)
        {
            switch (category) {
                case ActorCategory::kPlayer:
                    return (armorClass == ArmorClass::kCloth) ? SettingsIni::fArmorModifiers_Player_Cloth_EffectivenessMult
                         : (armorClass == ArmorClass::kLight) ? SettingsIni::fArmorModifiers_Player_Light_EffectivenessMult
                                                              : SettingsIni::fArmorModifiers_Player_Heavy_EffectivenessMult;
                case ActorCategory::kHumanoid:
                    return (armorClass == ArmorClass::kCloth) ? SettingsIni::fArmorModifiers_Humanoid_Cloth_EffectivenessMult
                         : (armorClass == ArmorClass::kLight) ? SettingsIni::fArmorModifiers_Humanoid_Light_EffectivenessMult
                                                              : SettingsIni::fArmorModifiers_Humanoid_Heavy_EffectivenessMult;
                case ActorCategory::kCreature:
                    return (armorClass == ArmorClass::kCloth) ? SettingsIni::fArmorModifiers_Creature_Cloth_EffectivenessMult
                         : (armorClass == ArmorClass::kLight) ? SettingsIni::fArmorModifiers_Creature_Light_EffectivenessMult
                                                              : SettingsIni::fArmorModifiers_Creature_Heavy_EffectivenessMult;
            }
            return 1.0f;
        }

        static float GetGlobalBlendForClass(ArmorClass armorClass)
        {
            switch (armorClass) {
                case ArmorClass::kCloth: return SettingsIni::fArmorModifiers_Global_Cloth_LocationalBlend;
                case ArmorClass::kLight: return SettingsIni::fArmorModifiers_Global_Light_LocationalBlend;
                case ArmorClass::kHeavy: return SettingsIni::fArmorModifiers_Global_Heavy_LocationalBlend;
            }
            return 1.0f;
        }

        static float GetCategoryBlendForClass(ActorCategory category, ArmorClass armorClass)
        {
            switch (category) {
                case ActorCategory::kPlayer:
                    return (armorClass == ArmorClass::kCloth) ? SettingsIni::fArmorModifiers_Player_Cloth_LocationalBlend
                         : (armorClass == ArmorClass::kLight) ? SettingsIni::fArmorModifiers_Player_Light_LocationalBlend
                                                              : SettingsIni::fArmorModifiers_Player_Heavy_LocationalBlend;
                case ActorCategory::kHumanoid:
                    return (armorClass == ArmorClass::kCloth) ? SettingsIni::fArmorModifiers_Humanoid_Cloth_LocationalBlend
                         : (armorClass == ArmorClass::kLight) ? SettingsIni::fArmorModifiers_Humanoid_Light_LocationalBlend
                                                              : SettingsIni::fArmorModifiers_Humanoid_Heavy_LocationalBlend;
                case ActorCategory::kCreature:
                    return (armorClass == ArmorClass::kCloth) ? SettingsIni::fArmorModifiers_Creature_Cloth_LocationalBlend
                         : (armorClass == ArmorClass::kLight) ? SettingsIni::fArmorModifiers_Creature_Light_LocationalBlend
                                                              : SettingsIni::fArmorModifiers_Creature_Heavy_LocationalBlend;
            }
            return 1.0f;
        }

        static float GetClassMultiplier(ArmorClass armorClass, ActorCategory category)
        {
            const float globalMult = SettingsIni::bArmorModifiers_Global_EnableFeatures
                ? GetGlobalMultForClass(armorClass) : 1.0f;

            if (!IsCategoryEnabled(category)) {
                return std::max(0.0f, globalMult);
            }

            const float categoryMult = GetCategoryMultForClass(category, armorClass);
            return std::max(0.0f, globalMult * categoryMult);
        }

        static float GetClassBlend(ArmorClass armorClass, ActorCategory category)
        {
            const float globalBlend = SettingsIni::bArmorModifiers_Global_EnableFeatures
                ? GetGlobalBlendForClass(armorClass) : 1.0f;

            if (!IsCategoryEnabled(category)) {
                return std::clamp(globalBlend, 0.0f, 1.0f);
            }

            const float categoryBlend = GetCategoryBlendForClass(category, armorClass);
            return std::clamp((globalBlend + categoryBlend) * 0.5f, 0.0f, 1.0f);
        }

        static float GetExposedLocationMultiplier(ActorCategory category)
        {
            const float globalPenalty = SettingsIni::bArmorModifiers_Global_EnableFeatures ? SettingsIni::fArmorModifiers_Global_ExposedLocationPenalty : 1.0f;
            
			float categoryPenalty = 1.0f;
            switch (category) {
                case ActorCategory::kPlayer:
					categoryPenalty = SettingsIni::bArmorModifiers_Player_EnableFeatures ? SettingsIni::fArmorModifiers_Player_ExposedLocationPenalty : 1.0f;
                    break;
                case ActorCategory::kHumanoid:
					categoryPenalty = SettingsIni::bArmorModifiers_Humanoid_EnableFeatures ? SettingsIni::fArmorModifiers_Humanoid_ExposedLocationPenalty : 1.0f;
					break;
                case ActorCategory::kCreature:
					categoryPenalty = SettingsIni::bArmorModifiers_Creature_EnableFeatures ? SettingsIni::fArmorModifiers_Creature_ExposedLocationPenalty : 1.0f;
                    break;
            }

            return globalPenalty * categoryPenalty;
        }

        static bool CoversAnySlot(RE::TESObjectARMO* armor, const std::vector<int>& targetSlots)
        {
            const auto mask = static_cast<std::uint32_t>(armor->GetSlotMask().get());

            for (int slot : targetSlots) {
                const std::uint32_t bit = 1u << (slot - 30);
                if ((mask & bit) != 0) return true;
            }

            return false;
        }

        static float SumArmorRating(RE::Actor* victim, const std::vector<int>* targetSlots)
        {
            float total = 0.0f;

            RE::TESRace* victimRace = nullptr;
            if (auto* victimBase = victim->GetActorBase()) {
                victimRace = victimBase->race;
            }

            auto inventory = victim->GetInventory([](RE::TESBoundObject& obj) {
                return obj.Is(RE::FormType::Armor);
            });

            for (auto& [item, data] : inventory) {
                auto& [count, entry] = data;
                if (count <= 0 || !entry->IsWorn()) continue;

                auto* armor = item->As<RE::TESObjectARMO>();
                if (!armor || (victimRace && armor == victimRace->skin)) continue;

                if (targetSlots && !CoversAnySlot(armor, *targetSlots)) continue;

                total += armor->GetArmorRating();
            }

            return total;
        }

        static float SumWeightedArmorRating(RE::Actor* victim, ActorCategory category,
            const std::vector<int>* targetSlots, float* outWeight = nullptr, float* outBlendNumerator = nullptr)
        {
            float total = 0.0f;
            float weight = 0.0f;
            float blendNumerator = 0.0f;

            RE::TESRace* victimRace = nullptr;
            if (auto* victimBase = victim->GetActorBase()) {
                victimRace = victimBase->race;
            }

            auto inventory = victim->GetInventory([](RE::TESBoundObject& obj) {
                return obj.Is(RE::FormType::Armor);
            });

            for (auto& [item, data] : inventory) {
                auto& [count, entry] = data;
                if (count <= 0 || !entry->IsWorn()) continue;

                auto* armor = item->As<RE::TESObjectARMO>();
                if (!armor || (victimRace && armor == victimRace->skin)) continue;

                if (targetSlots && !CoversAnySlot(armor, *targetSlots)) continue;

                const float rawAR = armor->GetArmorRating();
                const ArmorClass armorClass = GetArmorClass(armor);
                const float classMultiplier = GetClassMultiplier(armorClass, category);
                const float classBlend = GetClassBlend(armorClass, category);

                total += rawAR * classMultiplier;
                weight += rawAR;
                blendNumerator += rawAR * classBlend;
            }

            if (outWeight) *outWeight = weight;
            if (outBlendNumerator) *outBlendNumerator = blendNumerator;

            return total;
        }

        static float GetFallbackBlend(RE::Actor* victim, ActorCategory category)
        {
            float weight = 0.0f;
            float blendNumerator = 0.0f;
            SumWeightedArmorRating(victim, category, nullptr, &weight, &blendNumerator);

            if (weight <= 0.0f) return 1.0f;
            return blendNumerator / weight;
        }

        static float GetStaggeredMultiplier(RE::Actor* actor, ActorCategory category)
		{
			const float globalMult = SettingsIni::bContextModifiers_Global_EnableFeatures ? SettingsIni::fContextModifiers_Global_StaggeredMult : 1.0f;

			float categoryMult = 1.0f;
			switch (category) {
				case ActorCategory::kPlayer:
					categoryMult = SettingsIni::bContextModifiers_Player_EnableFeatures ? SettingsIni::fContextModifiers_Player_StaggeredMult : 1.0f;
					break;
				case ActorCategory::kHumanoid:
					categoryMult = SettingsIni::bContextModifiers_Humanoid_EnableFeatures ? SettingsIni::fContextModifiers_Humanoid_StaggeredMult : 1.0f;
					break;
				case ActorCategory::kCreature:
					categoryMult = SettingsIni::bContextModifiers_Creature_EnableFeatures ? SettingsIni::fContextModifiers_Creature_StaggeredMult : 1.0f;
					break;
			}

			return std::max(0.0f, globalMult * categoryMult);
		}

		static void ApplyStaggerMultiplier(RE::HitData& hitData, float staggerMultiplier)
		{
			if (staggerMultiplier != 1.0f) {
				hitData.totalDamage *= staggerMultiplier;
				hitData.physicalDamage *= staggerMultiplier;
			}
		}
    };
}
