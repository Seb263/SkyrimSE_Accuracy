#pragma once

#include "DataHandler.hpp"

#include "Utils/GlobalValueUtils.hpp"

namespace SettingsIni
{
	// Initialization
	inline int iGeneral_VerboseMode = 1;
	inline bool bGeneral_ShouldIgnoreMaintenanceChecks = false;
	inline bool bGeneral_OverwriteInvalidScripts = true;
	inline bool bGeneral_ExtractScriptSources = false;

	// Localized Damage - Global
	inline bool bLocalizedDamage_Global_EnableFeatures = true;
	inline float fLocalizedDamage_Global_Head_PhysicalMult = 1.25f;
	inline float fLocalizedDamage_Global_Head_RangedMult = 1.5f;
	inline float fLocalizedDamage_Global_Head_MagicMult = 1.0f;
	inline float fLocalizedDamage_Global_Torso_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Global_Torso_RangedMult = 1.0f;
	inline float fLocalizedDamage_Global_Torso_MagicMult = 1.0f;
	inline float fLocalizedDamage_Global_Arms_PhysicalMult = 0.8f;
	inline float fLocalizedDamage_Global_Arms_RangedMult = 0.8f;
	inline float fLocalizedDamage_Global_Arms_MagicMult = 1.0f;
	inline float fLocalizedDamage_Global_Legs_PhysicalMult = 0.8f;
	inline float fLocalizedDamage_Global_Legs_RangedMult = 0.8f;
	inline float fLocalizedDamage_Global_Legs_MagicMult = 1.0f;

	// Localized Damage - Player
	inline bool bLocalizedDamage_Player_EnableFeatures = false;
	inline float fLocalizedDamage_Player_Head_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Player_Head_RangedMult = 1.0f;
	inline float fLocalizedDamage_Player_Head_MagicMult = 1.0f;
	inline float fLocalizedDamage_Player_Torso_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Player_Torso_RangedMult = 1.0f;
	inline float fLocalizedDamage_Player_Torso_MagicMult = 1.0f;
	inline float fLocalizedDamage_Player_Arms_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Player_Arms_RangedMult = 1.0f;
	inline float fLocalizedDamage_Player_Arms_MagicMult = 1.0f;
	inline float fLocalizedDamage_Player_Legs_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Player_Legs_RangedMult = 1.0f;
	inline float fLocalizedDamage_Player_Legs_MagicMult = 1.0f;

	// Localized Damage - Humanoid
	inline bool  bLocalizedDamage_Humanoid_EnableFeatures = false;
	inline float fLocalizedDamage_Humanoid_Head_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Head_RangedMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Head_MagicMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Torso_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Torso_RangedMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Torso_MagicMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Arms_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Arms_RangedMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Arms_MagicMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Legs_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Legs_RangedMult = 1.0f;
	inline float fLocalizedDamage_Humanoid_Legs_MagicMult = 1.0f;

	// Localized Damage - Creature
	inline bool  bLocalizedDamage_Creature_EnableFeatures = false;
	inline float fLocalizedDamage_Creature_Head_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Creature_Head_RangedMult = 1.0f;
	inline float fLocalizedDamage_Creature_Head_MagicMult = 1.0f;
	inline float fLocalizedDamage_Creature_Torso_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Creature_Torso_RangedMult = 1.0f;
	inline float fLocalizedDamage_Creature_Torso_MagicMult = 1.0f;
	inline float fLocalizedDamage_Creature_Arms_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Creature_Arms_RangedMult = 1.0f;
	inline float fLocalizedDamage_Creature_Arms_MagicMult = 1.0f;
	inline float fLocalizedDamage_Creature_Legs_PhysicalMult = 1.0f;
	inline float fLocalizedDamage_Creature_Legs_RangedMult = 1.0f;
	inline float fLocalizedDamage_Creature_Legs_MagicMult = 1.0f;

	// Weapon Modifiers - Global
	inline bool bWeaponModifiers_Global_EnableFeatures = true;
	inline float fWeaponModifiers_Global_OneHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Global_OneHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Global_OneHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Global_TwoHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Global_TwoHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Global_TwoHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Global_DaggerMult = 1.0f;
	inline float fWeaponModifiers_Global_HandToHandMult = 1.0f;
	inline float fWeaponModifiers_Global_BeastMult = 1.0f;
	inline float fWeaponModifiers_Global_RangedMult = 1.0f;
	inline float fWeaponModifiers_Global_MagicMult = 1.0f;
	inline float fWeaponModifiers_Global_OtherMult = 1.0f;

	// Weapon Modifiers - Player
	inline bool bWeaponModifiers_Player_EnableFeatures = false;
	inline float fWeaponModifiers_Player_OneHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Player_OneHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Player_OneHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Player_TwoHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Player_TwoHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Player_TwoHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Player_DaggerMult = 1.0f;
	inline float fWeaponModifiers_Player_HandToHandMult = 1.0f;
	inline float fWeaponModifiers_Player_BeastMult = 1.0f;
	inline float fWeaponModifiers_Player_RangedMult = 1.0f;
	inline float fWeaponModifiers_Player_MagicMult = 1.0f;
	inline float fWeaponModifiers_Player_OtherMult = 1.0f;

	// Weapon Modifiers - Humanoid
	inline bool bWeaponModifiers_Humanoid_EnableFeatures = false;
	inline float fWeaponModifiers_Humanoid_OneHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_OneHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_OneHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_TwoHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_TwoHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_TwoHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_DaggerMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_HandToHandMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_BeastMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_RangedMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_MagicMult = 1.0f;
	inline float fWeaponModifiers_Humanoid_OtherMult = 1.0f;

	// Weapon Modifiers - Creature
	inline bool bWeaponModifiers_Creature_EnableFeatures = false;
	inline float fWeaponModifiers_Creature_OneHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Creature_OneHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Creature_OneHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Creature_TwoHandSwordMult = 1.0f;
	inline float fWeaponModifiers_Creature_TwoHandAxeMult = 1.0f;
	inline float fWeaponModifiers_Creature_TwoHandMaceMult = 1.0f;
	inline float fWeaponModifiers_Creature_DaggerMult = 1.0f;
	inline float fWeaponModifiers_Creature_HandToHandMult = 1.0f;
	inline float fWeaponModifiers_Creature_BeastMult = 1.0f;
	inline float fWeaponModifiers_Creature_RangedMult = 1.0f;
	inline float fWeaponModifiers_Creature_MagicMult = 1.0f;
	inline float fWeaponModifiers_Creature_OtherMult = 1.0f;

	// Armor Modifiers - Global
	inline bool  bArmorModifiers_Global_EnableFeatures = true;
	inline float fArmorModifiers_Global_Cloth_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Global_Cloth_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Global_Light_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Global_Light_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Global_Heavy_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Global_Heavy_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Global_ExposedLocationPenalty = 1.0f;

	// Armor Modifiers - Player
	inline bool  bArmorModifiers_Player_EnableFeatures = true;
	inline float fArmorModifiers_Player_Cloth_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Player_Cloth_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Player_Light_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Player_Light_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Player_Heavy_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Player_Heavy_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Player_ExposedLocationPenalty = 1.25f;

	// Armor Modifiers - Humanoid
	inline bool  bArmorModifiers_Humanoid_EnableFeatures = true;
	inline float fArmorModifiers_Humanoid_Cloth_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Humanoid_Cloth_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Humanoid_Light_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Humanoid_Light_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Humanoid_Heavy_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Humanoid_Heavy_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Humanoid_ExposedLocationPenalty = 1.25f;

	// Armor Modifiers - Creature
	inline bool  bArmorModifiers_Creature_EnableFeatures = false;
	inline float fArmorModifiers_Creature_Cloth_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Creature_Cloth_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Creature_Light_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Creature_Light_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Creature_Heavy_EffectivenessMult = 1.0f;
	inline float fArmorModifiers_Creature_Heavy_LocationalBlend = 0.5f;
	inline float fArmorModifiers_Creature_ExposedLocationPenalty = 1.0f;

	// Context Modifiers - Global
	inline bool bContextModifiers_Global_EnableFeatures = true;
	inline float fContextModifiers_Global_SimpleAttackMult = 1.0f;
	inline float fContextModifiers_Global_PowerAttackMult = 1.0f;
	inline float fContextModifiers_Global_SneakAttackMult = 1.0f;
	inline float fContextModifiers_Global_BashAttackMult = 1.0f;
	inline float fContextModifiers_Global_BlockedShieldAttackMult = 1.0f;
	inline float fContextModifiers_Global_BlockedWeaponAttackMult = 1.0f;
	inline float fContextModifiers_Global_StaggeredMult = 1.25f;

	// Context Modifiers - Player
	inline bool bContextModifiers_Player_EnableFeatures = false;
	inline float fContextModifiers_Player_SimpleAttackMult = 1.0f;
	inline float fContextModifiers_Player_PowerAttackMult = 1.0f;
	inline float fContextModifiers_Player_SneakAttackMult = 1.0f;
	inline float fContextModifiers_Player_BashAttackMult = 1.0f;
	inline float fContextModifiers_Player_BlockedShieldAttackMult = 1.0f;
	inline float fContextModifiers_Player_BlockedWeaponAttackMult = 1.0f;
	inline float fContextModifiers_Player_StaggeredMult = 1.0f;

	// Context Modifiers - Humanoid
	inline bool bContextModifiers_Humanoid_EnableFeatures = false;
	inline float fContextModifiers_Humanoid_SimpleAttackMult = 1.0f;
	inline float fContextModifiers_Humanoid_PowerAttackMult = 1.0f;
	inline float fContextModifiers_Humanoid_SneakAttackMult = 1.0f;
	inline float fContextModifiers_Humanoid_BashAttackMult = 1.0f;
	inline float fContextModifiers_Humanoid_BlockedShieldAttackMult = 1.0f;
	inline float fContextModifiers_Humanoid_BlockedWeaponAttackMult = 1.0f;
	inline float fContextModifiers_Humanoid_StaggeredMult = 1.0f;

	// Context Modifiers - Creature
	inline bool bContextModifiers_Creature_EnableFeatures = false;
	inline float fContextModifiers_Creature_SimpleAttackMult = 1.0f;
	inline float fContextModifiers_Creature_PowerAttackMult = 1.0f;
	inline float fContextModifiers_Creature_SneakAttackMult = 1.0f;
	inline float fContextModifiers_Creature_BashAttackMult = 1.0f;
	inline float fContextModifiers_Creature_BlockedShieldAttackMult = 1.0f;
	inline float fContextModifiers_Creature_BlockedWeaponAttackMult = 1.0f;
	inline float fContextModifiers_Creature_StaggeredMult = 1.0f;

	// Misc
	inline bool bMisc_SSEFixesWorkaround = true;

	class SettingsManager
	{
	public:
		static SettingsManager& GetSingleton()
		{
			static SettingsManager instance;
			return instance;
		}

		SettingsManager()
		{
			bindings = {
				// General
				{ "General", "iVerboseMode", &iGeneral_VerboseMode },
				{ "General", "bShouldIgnoreMaintenanceChecks", &bGeneral_ShouldIgnoreMaintenanceChecks },
				{ "General", "bOverwriteInvalidScripts", &bGeneral_OverwriteInvalidScripts },
				{ "General", "bExtractScriptSources", &bGeneral_ExtractScriptSources },

				// Localized Damage - Global
				{ "LocalizedDamage:Global", "bEnableFeatures", &bLocalizedDamage_Global_EnableFeatures, true },
				{ "LocalizedDamage:Global:Head", "fPhysicalMult", &fLocalizedDamage_Global_Head_PhysicalMult, true },
				{ "LocalizedDamage:Global:Head", "fRangedMult", &fLocalizedDamage_Global_Head_RangedMult, true },
				{ "LocalizedDamage:Global:Head", "fMagicMult", &fLocalizedDamage_Global_Head_MagicMult, true },
				{ "LocalizedDamage:Global:Torso", "fPhysicalMult", &fLocalizedDamage_Global_Torso_PhysicalMult, true },
				{ "LocalizedDamage:Global:Torso", "fRangedMult", &fLocalizedDamage_Global_Torso_RangedMult, true },
				{ "LocalizedDamage:Global:Torso", "fMagicMult", &fLocalizedDamage_Global_Torso_MagicMult, true },
				{ "LocalizedDamage:Global:Arms", "fPhysicalMult", &fLocalizedDamage_Global_Arms_PhysicalMult, true },
				{ "LocalizedDamage:Global:Arms", "fRangedMult", &fLocalizedDamage_Global_Arms_RangedMult, true },
				{ "LocalizedDamage:Global:Arms", "fMagicMult", &fLocalizedDamage_Global_Arms_MagicMult, true },
				{ "LocalizedDamage:Global:Legs", "fPhysicalMult", &fLocalizedDamage_Global_Legs_PhysicalMult, true },
				{ "LocalizedDamage:Global:Legs", "fRangedMult", &fLocalizedDamage_Global_Legs_RangedMult, true },
				{ "LocalizedDamage:Global:Legs", "fMagicMult", &fLocalizedDamage_Global_Legs_MagicMult, true },

				// Localized Damage - Player
				{ "LocalizedDamage:Player", "bEnableFeatures", &bLocalizedDamage_Player_EnableFeatures, true },
				{ "LocalizedDamage:Player:Head", "fPhysicalMult", &fLocalizedDamage_Player_Head_PhysicalMult, true },
				{ "LocalizedDamage:Player:Head", "fRangedMult", &fLocalizedDamage_Player_Head_RangedMult, true },
				{ "LocalizedDamage:Player:Head", "fMagicMult", &fLocalizedDamage_Player_Head_MagicMult, true },
				{ "LocalizedDamage:Player:Torso", "fPhysicalMult", &fLocalizedDamage_Player_Torso_PhysicalMult, true },
				{ "LocalizedDamage:Player:Torso", "fRangedMult", &fLocalizedDamage_Player_Torso_RangedMult, true },
				{ "LocalizedDamage:Player:Torso", "fMagicMult", &fLocalizedDamage_Player_Torso_MagicMult, true },
				{ "LocalizedDamage:Player:Arms", "fPhysicalMult", &fLocalizedDamage_Player_Arms_PhysicalMult, true },
				{ "LocalizedDamage:Player:Arms", "fRangedMult", &fLocalizedDamage_Player_Arms_RangedMult, true },
				{ "LocalizedDamage:Player:Arms", "fMagicMult", &fLocalizedDamage_Player_Arms_MagicMult, true },
				{ "LocalizedDamage:Player:Legs", "fPhysicalMult", &fLocalizedDamage_Player_Legs_PhysicalMult, true },
				{ "LocalizedDamage:Player:Legs", "fRangedMult", &fLocalizedDamage_Player_Legs_RangedMult, true },
				{ "LocalizedDamage:Player:Legs", "fMagicMult", &fLocalizedDamage_Player_Legs_MagicMult, true },

				// Localized Damage - Humanoid
				{ "LocalizedDamage:Humanoid", "bEnableFeatures", &bLocalizedDamage_Humanoid_EnableFeatures, true },
				{ "LocalizedDamage:Humanoid:Head", "fPhysicalMult", &fLocalizedDamage_Humanoid_Head_PhysicalMult, true },
				{ "LocalizedDamage:Humanoid:Head", "fRangedMult", &fLocalizedDamage_Humanoid_Head_RangedMult, true },
				{ "LocalizedDamage:Humanoid:Head", "fMagicMult", &fLocalizedDamage_Humanoid_Head_MagicMult, true },
				{ "LocalizedDamage:Humanoid:Torso", "fPhysicalMult", &fLocalizedDamage_Humanoid_Torso_PhysicalMult, true },
				{ "LocalizedDamage:Humanoid:Torso", "fRangedMult", &fLocalizedDamage_Humanoid_Torso_RangedMult, true },
				{ "LocalizedDamage:Humanoid:Torso", "fMagicMult", &fLocalizedDamage_Humanoid_Torso_MagicMult, true },
				{ "LocalizedDamage:Humanoid:Arms", "fPhysicalMult", &fLocalizedDamage_Humanoid_Arms_PhysicalMult, true },
				{ "LocalizedDamage:Humanoid:Arms", "fRangedMult", &fLocalizedDamage_Humanoid_Arms_RangedMult, true },
				{ "LocalizedDamage:Humanoid:Arms", "fMagicMult", &fLocalizedDamage_Humanoid_Arms_MagicMult, true },
				{ "LocalizedDamage:Humanoid:Legs", "fPhysicalMult", &fLocalizedDamage_Humanoid_Legs_PhysicalMult, true },
				{ "LocalizedDamage:Humanoid:Legs", "fRangedMult", &fLocalizedDamage_Humanoid_Legs_RangedMult, true },
				{ "LocalizedDamage:Humanoid:Legs", "fMagicMult", &fLocalizedDamage_Humanoid_Legs_MagicMult, true },

				// Localized Damage - Creature
				{ "LocalizedDamage:Creature", "bEnableFeatures", &bLocalizedDamage_Creature_EnableFeatures, true },
				{ "LocalizedDamage:Creature:Head", "fPhysicalMult", &fLocalizedDamage_Creature_Head_PhysicalMult, true },
				{ "LocalizedDamage:Creature:Head", "fRangedMult", &fLocalizedDamage_Creature_Head_RangedMult, true },
				{ "LocalizedDamage:Creature:Head", "fMagicMult", &fLocalizedDamage_Creature_Head_MagicMult, true },
				{ "LocalizedDamage:Creature:Torso", "fPhysicalMult", &fLocalizedDamage_Creature_Torso_PhysicalMult, true },
				{ "LocalizedDamage:Creature:Torso", "fRangedMult", &fLocalizedDamage_Creature_Torso_RangedMult, true },
				{ "LocalizedDamage:Creature:Torso", "fMagicMult", &fLocalizedDamage_Creature_Torso_MagicMult, true },
				{ "LocalizedDamage:Creature:Arms", "fPhysicalMult", &fLocalizedDamage_Creature_Arms_PhysicalMult, true },
				{ "LocalizedDamage:Creature:Arms", "fRangedMult", &fLocalizedDamage_Creature_Arms_RangedMult, true },
				{ "LocalizedDamage:Creature:Arms", "fMagicMult", &fLocalizedDamage_Creature_Arms_MagicMult, true },
				{ "LocalizedDamage:Creature:Legs", "fPhysicalMult", &fLocalizedDamage_Creature_Legs_PhysicalMult, true },
				{ "LocalizedDamage:Creature:Legs", "fRangedMult", &fLocalizedDamage_Creature_Legs_RangedMult, true },
				{ "LocalizedDamage:Creature:Legs", "fMagicMult", &fLocalizedDamage_Creature_Legs_MagicMult, true },

				// Weapon Modifiers - Global
				{ "WeaponModifiers:Global", "bEnableFeatures", &bWeaponModifiers_Global_EnableFeatures, true },
				{ "WeaponModifiers:Global", "fOneHandSwordMult", &fWeaponModifiers_Global_OneHandSwordMult, true },
				{ "WeaponModifiers:Global", "fOneHandAxeMult", &fWeaponModifiers_Global_OneHandAxeMult, true },
				{ "WeaponModifiers:Global", "fOneHandMaceMult", &fWeaponModifiers_Global_OneHandMaceMult, true },
				{ "WeaponModifiers:Global", "fTwoHandSwordMult", &fWeaponModifiers_Global_TwoHandSwordMult, true },
				{ "WeaponModifiers:Global", "fTwoHandAxeMult", &fWeaponModifiers_Global_TwoHandAxeMult, true },
				{ "WeaponModifiers:Global", "fTwoHandMaceMult", &fWeaponModifiers_Global_TwoHandMaceMult, true },
				{ "WeaponModifiers:Global", "fDaggerMult", &fWeaponModifiers_Global_DaggerMult, true },
				{ "WeaponModifiers:Global", "fHandToHandMult", &fWeaponModifiers_Global_HandToHandMult, true },
				{ "WeaponModifiers:Global", "fBeastMult", &fWeaponModifiers_Global_BeastMult, true },
				{ "WeaponModifiers:Global", "fRangedMult", &fWeaponModifiers_Global_RangedMult, true },
				{ "WeaponModifiers:Global", "fMagicMult", &fWeaponModifiers_Global_MagicMult, true },
				{ "WeaponModifiers:Global", "fOtherMult", &fWeaponModifiers_Global_OtherMult, true },

				// Weapon Modifiers - Player
				{ "WeaponModifiers:Player", "bEnableFeatures", &bWeaponModifiers_Player_EnableFeatures, true },
				{ "WeaponModifiers:Player", "fOneHandSwordMult", &fWeaponModifiers_Player_OneHandSwordMult, true },
				{ "WeaponModifiers:Player", "fOneHandAxeMult", &fWeaponModifiers_Player_OneHandAxeMult, true },
				{ "WeaponModifiers:Player", "fOneHandMaceMult", &fWeaponModifiers_Player_OneHandMaceMult, true },
				{ "WeaponModifiers:Player", "fTwoHandSwordMult", &fWeaponModifiers_Player_TwoHandSwordMult, true },
				{ "WeaponModifiers:Player", "fTwoHandAxeMult", &fWeaponModifiers_Player_TwoHandAxeMult, true },
				{ "WeaponModifiers:Player", "fTwoHandMaceMult", &fWeaponModifiers_Player_TwoHandMaceMult, true },
				{ "WeaponModifiers:Player", "fDaggerMult", &fWeaponModifiers_Player_DaggerMult, true },
				{ "WeaponModifiers:Player", "fHandToHandMult", &fWeaponModifiers_Player_HandToHandMult, true },
				{ "WeaponModifiers:Player", "fBeastMult", &fWeaponModifiers_Player_BeastMult, true },
				{ "WeaponModifiers:Player", "fRangedMult", &fWeaponModifiers_Player_RangedMult, true },
				{ "WeaponModifiers:Player", "fMagicMult", &fWeaponModifiers_Player_MagicMult, true },
				{ "WeaponModifiers:Player", "fOtherMult", &fWeaponModifiers_Player_OtherMult, true },

				// Weapon Modifiers - Humanoid
				{ "WeaponModifiers:Humanoid", "bEnableFeatures", &bWeaponModifiers_Humanoid_EnableFeatures, true },
				{ "WeaponModifiers:Humanoid", "fOneHandSwordMult", &fWeaponModifiers_Humanoid_OneHandSwordMult, true },
				{ "WeaponModifiers:Humanoid", "fOneHandAxeMult", &fWeaponModifiers_Humanoid_OneHandAxeMult, true },
				{ "WeaponModifiers:Humanoid", "fOneHandMaceMult", &fWeaponModifiers_Humanoid_OneHandMaceMult, true },
				{ "WeaponModifiers:Humanoid", "fTwoHandSwordMult", &fWeaponModifiers_Humanoid_TwoHandSwordMult, true },
				{ "WeaponModifiers:Humanoid", "fTwoHandAxeMult", &fWeaponModifiers_Humanoid_TwoHandAxeMult, true },
				{ "WeaponModifiers:Humanoid", "fTwoHandMaceMult", &fWeaponModifiers_Humanoid_TwoHandMaceMult, true },
				{ "WeaponModifiers:Humanoid", "fDaggerMult", &fWeaponModifiers_Humanoid_DaggerMult, true },
				{ "WeaponModifiers:Humanoid", "fHandToHandMult", &fWeaponModifiers_Humanoid_HandToHandMult, true },
				{ "WeaponModifiers:Humanoid", "fBeastMult", &fWeaponModifiers_Humanoid_BeastMult, true },
				{ "WeaponModifiers:Humanoid", "fRangedMult", &fWeaponModifiers_Humanoid_RangedMult, true },
				{ "WeaponModifiers:Humanoid", "fMagicMult", &fWeaponModifiers_Humanoid_MagicMult, true },
				{ "WeaponModifiers:Humanoid", "fOtherMult", &fWeaponModifiers_Humanoid_OtherMult, true },

				// Weapon Modifiers - Creature
				{ "WeaponModifiers:Creature", "bEnableFeatures", &bWeaponModifiers_Creature_EnableFeatures, true },
				{ "WeaponModifiers:Creature", "fOneHandSwordMult", &fWeaponModifiers_Creature_OneHandSwordMult, true },
				{ "WeaponModifiers:Creature", "fOneHandAxeMult", &fWeaponModifiers_Creature_OneHandAxeMult, true },
				{ "WeaponModifiers:Creature", "fOneHandMaceMult", &fWeaponModifiers_Creature_OneHandMaceMult, true },
				{ "WeaponModifiers:Creature", "fTwoHandSwordMult", &fWeaponModifiers_Creature_TwoHandSwordMult, true },
				{ "WeaponModifiers:Creature", "fTwoHandAxeMult", &fWeaponModifiers_Creature_TwoHandAxeMult, true },
				{ "WeaponModifiers:Creature", "fTwoHandMaceMult", &fWeaponModifiers_Creature_TwoHandMaceMult, true },
				{ "WeaponModifiers:Creature", "fDaggerMult", &fWeaponModifiers_Creature_DaggerMult, true },
				{ "WeaponModifiers:Creature", "fHandToHandMult", &fWeaponModifiers_Creature_HandToHandMult, true },
				{ "WeaponModifiers:Creature", "fBeastMult", &fWeaponModifiers_Creature_BeastMult, true },
				{ "WeaponModifiers:Creature", "fRangedMult", &fWeaponModifiers_Creature_RangedMult, true },
				{ "WeaponModifiers:Creature", "fMagicMult", &fWeaponModifiers_Creature_MagicMult, true },
				{ "WeaponModifiers:Creature", "fOtherMult", &fWeaponModifiers_Creature_OtherMult, true },

				// Armor Modifiers - Global
				{ "ArmorModifiers:Global", "bEnableFeatures", &bArmorModifiers_Global_EnableFeatures },
				{ "ArmorModifiers:Global", "fClothEffectivenessMult", &fArmorModifiers_Global_Cloth_EffectivenessMult },
				{ "ArmorModifiers:Global", "fClothLocationalBlend", &fArmorModifiers_Global_Cloth_LocationalBlend },
				{ "ArmorModifiers:Global", "fLightEffectivenessMult", &fArmorModifiers_Global_Light_EffectivenessMult },
				{ "ArmorModifiers:Global", "fLightLocationalBlend", &fArmorModifiers_Global_Light_LocationalBlend },
				{ "ArmorModifiers:Global", "fHeavyEffectivenessMult", &fArmorModifiers_Global_Heavy_EffectivenessMult },
				{ "ArmorModifiers:Global", "fHeavyLocationalBlend", &fArmorModifiers_Global_Heavy_LocationalBlend },
				{ "ArmorModifiers:Global", "fExposedLocationPenalty", &fArmorModifiers_Global_ExposedLocationPenalty },

				// Armor Modifiers - Player
				{ "ArmorModifiers:Player", "bEnableFeatures", &bArmorModifiers_Player_EnableFeatures },
				{ "ArmorModifiers:Player", "fClothEffectivenessMult", &fArmorModifiers_Player_Cloth_EffectivenessMult },
				{ "ArmorModifiers:Player", "fClothLocationalBlend", &fArmorModifiers_Player_Cloth_LocationalBlend },
				{ "ArmorModifiers:Player", "fLightEffectivenessMult", &fArmorModifiers_Player_Light_EffectivenessMult },
				{ "ArmorModifiers:Player", "fLightLocationalBlend", &fArmorModifiers_Player_Light_LocationalBlend },
				{ "ArmorModifiers:Player", "fHeavyEffectivenessMult", &fArmorModifiers_Player_Heavy_EffectivenessMult },
				{ "ArmorModifiers:Player", "fHeavyLocationalBlend", &fArmorModifiers_Player_Heavy_LocationalBlend },
				{ "ArmorModifiers:Player", "fExposedLocationPenalty", &fArmorModifiers_Player_ExposedLocationPenalty },

				// Armor Modifiers - Humanoid
				{ "ArmorModifiers:Humanoid", "bEnableFeatures", &bArmorModifiers_Humanoid_EnableFeatures },
				{ "ArmorModifiers:Humanoid", "fClothEffectivenessMult", &fArmorModifiers_Humanoid_Cloth_EffectivenessMult },
				{ "ArmorModifiers:Humanoid", "fClothLocationalBlend", &fArmorModifiers_Humanoid_Cloth_LocationalBlend },
				{ "ArmorModifiers:Humanoid", "fLightEffectivenessMult", &fArmorModifiers_Humanoid_Light_EffectivenessMult },
				{ "ArmorModifiers:Humanoid", "fLightLocationalBlend", &fArmorModifiers_Humanoid_Light_LocationalBlend },
				{ "ArmorModifiers:Humanoid", "fHeavyEffectivenessMult", &fArmorModifiers_Humanoid_Heavy_EffectivenessMult },
				{ "ArmorModifiers:Humanoid", "fHeavyLocationalBlend", &fArmorModifiers_Humanoid_Heavy_LocationalBlend },
				{ "ArmorModifiers:Humanoid", "fExposedLocationPenalty", &fArmorModifiers_Humanoid_ExposedLocationPenalty },

				// Armor Modifiers - Creature
				{ "ArmorModifiers:Creature", "bEnableFeatures", &bArmorModifiers_Creature_EnableFeatures },
				{ "ArmorModifiers:Creature", "fClothEffectivenessMult", &fArmorModifiers_Creature_Cloth_EffectivenessMult },
				{ "ArmorModifiers:Creature", "fClothLocationalBlend", &fArmorModifiers_Creature_Cloth_LocationalBlend },
				{ "ArmorModifiers:Creature", "fLightEffectivenessMult", &fArmorModifiers_Creature_Light_EffectivenessMult },
				{ "ArmorModifiers:Creature", "fLightLocationalBlend", &fArmorModifiers_Creature_Light_LocationalBlend },
				{ "ArmorModifiers:Creature", "fHeavyEffectivenessMult", &fArmorModifiers_Creature_Heavy_EffectivenessMult },
				{ "ArmorModifiers:Creature", "fHeavyLocationalBlend", &fArmorModifiers_Creature_Heavy_LocationalBlend },
				{ "ArmorModifiers:Creature", "fExposedLocationPenalty", &fArmorModifiers_Creature_ExposedLocationPenalty },

				// Context Modifiers - Global
				{ "ContextModifiers:Global", "bEnableFeatures", &bContextModifiers_Global_EnableFeatures, true },
				{ "ContextModifiers:Global", "fSimpleAttackMult", &fContextModifiers_Global_SimpleAttackMult, true },
				{ "ContextModifiers:Global", "fPowerAttackMult", &fContextModifiers_Global_PowerAttackMult, true },
				{ "ContextModifiers:Global", "fSneakAttackMult", &fContextModifiers_Global_SneakAttackMult, true },
				{ "ContextModifiers:Global", "fBashAttackMult", &fContextModifiers_Global_BashAttackMult, true },
				{ "ContextModifiers:Global", "fBlockedShieldAttackMult", &fContextModifiers_Global_BlockedShieldAttackMult, true },
				{ "ContextModifiers:Global", "fBlockedWeaponAttackMult", &fContextModifiers_Global_BlockedWeaponAttackMult, true },
				{ "ContextModifiers:Global", "fStaggeredMult", &fContextModifiers_Global_StaggeredMult },

				// Context Modifiers - Player
				{ "ContextModifiers:Player", "bEnableFeatures", &bContextModifiers_Player_EnableFeatures, true },
				{ "ContextModifiers:Player", "fSimpleAttackMult", &fContextModifiers_Player_SimpleAttackMult, true },
				{ "ContextModifiers:Player", "fPowerAttackMult", &fContextModifiers_Player_PowerAttackMult, true },
				{ "ContextModifiers:Player", "fSneakAttackMult", &fContextModifiers_Player_SneakAttackMult, true },
				{ "ContextModifiers:Player", "fBashAttackMult", &fContextModifiers_Player_BashAttackMult, true },
				{ "ContextModifiers:Player", "fBlockedShieldAttackMult", &fContextModifiers_Player_BlockedShieldAttackMult, true },
				{ "ContextModifiers:Player", "fBlockedWeaponAttackMult", &fContextModifiers_Player_BlockedWeaponAttackMult, true },
				{ "ContextModifiers:Player", "fStaggeredMult", &fContextModifiers_Player_StaggeredMult },

				// Context Modifiers - Humanoid
				{ "ContextModifiers:Humanoid", "bEnableFeatures", &bContextModifiers_Humanoid_EnableFeatures, true },
				{ "ContextModifiers:Humanoid", "fSimpleAttackMult", &fContextModifiers_Humanoid_SimpleAttackMult, true },
				{ "ContextModifiers:Humanoid", "fPowerAttackMult", &fContextModifiers_Humanoid_PowerAttackMult, true },
				{ "ContextModifiers:Humanoid", "fSneakAttackMult", &fContextModifiers_Humanoid_SneakAttackMult, true },
				{ "ContextModifiers:Humanoid", "fBashAttackMult", &fContextModifiers_Humanoid_BashAttackMult, true },
				{ "ContextModifiers:Humanoid", "fBlockedShieldAttackMult", &fContextModifiers_Humanoid_BlockedShieldAttackMult, true },
				{ "ContextModifiers:Humanoid", "fBlockedWeaponAttackMult", &fContextModifiers_Humanoid_BlockedWeaponAttackMult, true },
				{ "ContextModifiers:Humanoid", "fStaggeredMult", &fContextModifiers_Humanoid_StaggeredMult },

				// Context Modifiers - Creature
				{ "ContextModifiers:Creature", "bEnableFeatures", &bContextModifiers_Creature_EnableFeatures, true },
				{ "ContextModifiers:Creature", "fSimpleAttackMult", &fContextModifiers_Creature_SimpleAttackMult, true },
				{ "ContextModifiers:Creature", "fPowerAttackMult", &fContextModifiers_Creature_PowerAttackMult, true },
				{ "ContextModifiers:Creature", "fSneakAttackMult", &fContextModifiers_Creature_SneakAttackMult, true },
				{ "ContextModifiers:Creature", "fBashAttackMult", &fContextModifiers_Creature_BashAttackMult, true },
				{ "ContextModifiers:Creature", "fBlockedShieldAttackMult", &fContextModifiers_Creature_BlockedShieldAttackMult, true },
				{ "ContextModifiers:Creature", "fBlockedWeaponAttackMult", &fContextModifiers_Creature_BlockedWeaponAttackMult, true },
				{ "ContextModifiers:Creature", "fStaggeredMult", &fContextModifiers_Creature_StaggeredMult },
				
				{ "Misc", "bSSEFixesWorkaround", &bMisc_SSEFixesWorkaround }
			};

			for (auto& bind : bindings) {
				std::visit([&](auto* ptr) {
					bind.defaultValue = *ptr;
				}, bind.var);
			}
		}

		bool ReadSettings()
		{
			std::wstring   wpath_str(path.begin(), path.end());
			const wchar_t* wpath = wpath_str.c_str();

			bool readStatus = false;

			logger::info("Trying to read INI file at path: {}", path);

			if (std::filesystem::exists(path)) {
				CSimpleIniA ini;
				ini.SetUnicode();

				if (ini.LoadFile(wpath) >= 0) {
					for (const auto& bind : bindings) {
						std::visit([&](auto* ptr) {
							using T = std::decay_t<decltype(*ptr)>;
							if constexpr (std::is_same_v<T, bool>) {
								*ptr = ini.GetBoolValue(bind.section, bind.key, *ptr);
							} else if constexpr (std::is_same_v<T, int>) {
								*ptr = static_cast<int>(ini.GetLongValue(bind.section, bind.key, *ptr));
							} else if constexpr (std::is_same_v<T, float>) {
								*ptr = static_cast<float>(ini.GetDoubleValue(bind.section, bind.key, *ptr));
							} else if constexpr (std::is_same_v<T, std::string>) {
								*ptr = ini.GetValue(bind.section, bind.key, ptr->c_str());
							}
						},
							bind.var);
					}
					readStatus = true;
				} else {
					logger::error("Failed to load INI file at {}", path);
				}
			} else {
				logger::warn("INI file does not exist at {}", path);
			}

			// Clamping logic
			iGeneral_VerboseMode = std::clamp(iGeneral_VerboseMode, 0, 2);

			// Localized Damage - Global Clamps
			fLocalizedDamage_Global_Head_PhysicalMult = std::clamp(fLocalizedDamage_Global_Head_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Head_RangedMult = std::clamp(fLocalizedDamage_Global_Head_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Head_MagicMult = std::clamp(fLocalizedDamage_Global_Head_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Torso_PhysicalMult = std::clamp(fLocalizedDamage_Global_Torso_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Torso_RangedMult = std::clamp(fLocalizedDamage_Global_Torso_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Torso_MagicMult = std::clamp(fLocalizedDamage_Global_Torso_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Arms_PhysicalMult = std::clamp(fLocalizedDamage_Global_Arms_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Arms_RangedMult = std::clamp(fLocalizedDamage_Global_Arms_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Arms_MagicMult = std::clamp(fLocalizedDamage_Global_Arms_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Legs_PhysicalMult = std::clamp(fLocalizedDamage_Global_Legs_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Legs_RangedMult = std::clamp(fLocalizedDamage_Global_Legs_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Global_Legs_MagicMult = std::clamp(fLocalizedDamage_Global_Legs_MagicMult, 0.0f, 10.0f);

			// Localized Damage - Player Clamps
			fLocalizedDamage_Player_Head_PhysicalMult = std::clamp(fLocalizedDamage_Player_Head_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Head_RangedMult = std::clamp(fLocalizedDamage_Player_Head_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Head_MagicMult = std::clamp(fLocalizedDamage_Player_Head_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Torso_PhysicalMult = std::clamp(fLocalizedDamage_Player_Torso_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Torso_RangedMult = std::clamp(fLocalizedDamage_Player_Torso_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Torso_MagicMult = std::clamp(fLocalizedDamage_Player_Torso_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Arms_PhysicalMult = std::clamp(fLocalizedDamage_Player_Arms_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Arms_RangedMult = std::clamp(fLocalizedDamage_Player_Arms_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Arms_MagicMult = std::clamp(fLocalizedDamage_Player_Arms_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Legs_PhysicalMult = std::clamp(fLocalizedDamage_Player_Legs_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Legs_RangedMult = std::clamp(fLocalizedDamage_Player_Legs_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Player_Legs_MagicMult = std::clamp(fLocalizedDamage_Player_Legs_MagicMult, 0.0f, 10.0f);

			// Localized Damage - Humanoid Clamps
			fLocalizedDamage_Humanoid_Head_PhysicalMult = std::clamp(fLocalizedDamage_Humanoid_Head_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Head_RangedMult = std::clamp(fLocalizedDamage_Humanoid_Head_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Head_MagicMult = std::clamp(fLocalizedDamage_Humanoid_Head_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Torso_PhysicalMult = std::clamp(fLocalizedDamage_Humanoid_Torso_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Torso_RangedMult = std::clamp(fLocalizedDamage_Humanoid_Torso_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Torso_MagicMult = std::clamp(fLocalizedDamage_Humanoid_Torso_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Arms_PhysicalMult = std::clamp(fLocalizedDamage_Humanoid_Arms_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Arms_RangedMult = std::clamp(fLocalizedDamage_Humanoid_Arms_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Arms_MagicMult = std::clamp(fLocalizedDamage_Humanoid_Arms_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Legs_PhysicalMult = std::clamp(fLocalizedDamage_Humanoid_Legs_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Legs_RangedMult = std::clamp(fLocalizedDamage_Humanoid_Legs_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Humanoid_Legs_MagicMult = std::clamp(fLocalizedDamage_Humanoid_Legs_MagicMult, 0.0f, 10.0f);

			// Localized Damage - Creature Clamps
			fLocalizedDamage_Creature_Head_PhysicalMult = std::clamp(fLocalizedDamage_Creature_Head_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Head_RangedMult = std::clamp(fLocalizedDamage_Creature_Head_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Head_MagicMult = std::clamp(fLocalizedDamage_Creature_Head_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Torso_PhysicalMult = std::clamp(fLocalizedDamage_Creature_Torso_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Torso_RangedMult = std::clamp(fLocalizedDamage_Creature_Torso_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Torso_MagicMult = std::clamp(fLocalizedDamage_Creature_Torso_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Arms_PhysicalMult = std::clamp(fLocalizedDamage_Creature_Arms_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Arms_RangedMult = std::clamp(fLocalizedDamage_Creature_Arms_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Arms_MagicMult = std::clamp(fLocalizedDamage_Creature_Arms_MagicMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Legs_PhysicalMult = std::clamp(fLocalizedDamage_Creature_Legs_PhysicalMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Legs_RangedMult = std::clamp(fLocalizedDamage_Creature_Legs_RangedMult, 0.0f, 10.0f);
			fLocalizedDamage_Creature_Legs_MagicMult = std::clamp(fLocalizedDamage_Creature_Legs_MagicMult, 0.0f, 10.0f);

			// Weapon Modifiers - Global Clamps
			fWeaponModifiers_Global_OneHandSwordMult = std::clamp(fWeaponModifiers_Global_OneHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_OneHandAxeMult = std::clamp(fWeaponModifiers_Global_OneHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_OneHandMaceMult = std::clamp(fWeaponModifiers_Global_OneHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_TwoHandSwordMult = std::clamp(fWeaponModifiers_Global_TwoHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_TwoHandAxeMult = std::clamp(fWeaponModifiers_Global_TwoHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_TwoHandMaceMult = std::clamp(fWeaponModifiers_Global_TwoHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_DaggerMult = std::clamp(fWeaponModifiers_Global_DaggerMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_HandToHandMult = std::clamp(fWeaponModifiers_Global_HandToHandMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_BeastMult = std::clamp(fWeaponModifiers_Global_BeastMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_RangedMult = std::clamp(fWeaponModifiers_Global_RangedMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_MagicMult = std::clamp(fWeaponModifiers_Global_MagicMult, 0.0f, 10.0f);
			fWeaponModifiers_Global_OtherMult = std::clamp(fWeaponModifiers_Global_OtherMult, 0.0f, 10.0f);

			// Weapon Modifiers - Player Clamps
			fWeaponModifiers_Player_OneHandSwordMult = std::clamp(fWeaponModifiers_Player_OneHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_OneHandAxeMult = std::clamp(fWeaponModifiers_Player_OneHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_OneHandMaceMult = std::clamp(fWeaponModifiers_Player_OneHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_TwoHandSwordMult = std::clamp(fWeaponModifiers_Player_TwoHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_TwoHandAxeMult = std::clamp(fWeaponModifiers_Player_TwoHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_TwoHandMaceMult = std::clamp(fWeaponModifiers_Player_TwoHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_DaggerMult = std::clamp(fWeaponModifiers_Player_DaggerMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_HandToHandMult = std::clamp(fWeaponModifiers_Player_HandToHandMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_BeastMult = std::clamp(fWeaponModifiers_Player_BeastMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_RangedMult = std::clamp(fWeaponModifiers_Player_RangedMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_MagicMult = std::clamp(fWeaponModifiers_Player_MagicMult, 0.0f, 10.0f);
			fWeaponModifiers_Player_OtherMult = std::clamp(fWeaponModifiers_Player_OtherMult, 0.0f, 10.0f);

			// Weapon Modifiers - Humanoid Clamps
			fWeaponModifiers_Humanoid_OneHandSwordMult = std::clamp(fWeaponModifiers_Humanoid_OneHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_OneHandAxeMult = std::clamp(fWeaponModifiers_Humanoid_OneHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_OneHandMaceMult = std::clamp(fWeaponModifiers_Humanoid_OneHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_TwoHandSwordMult = std::clamp(fWeaponModifiers_Humanoid_TwoHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_TwoHandAxeMult = std::clamp(fWeaponModifiers_Humanoid_TwoHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_TwoHandMaceMult = std::clamp(fWeaponModifiers_Humanoid_TwoHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_DaggerMult = std::clamp(fWeaponModifiers_Humanoid_DaggerMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_HandToHandMult = std::clamp(fWeaponModifiers_Humanoid_HandToHandMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_BeastMult = std::clamp(fWeaponModifiers_Humanoid_BeastMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_RangedMult = std::clamp(fWeaponModifiers_Humanoid_RangedMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_MagicMult = std::clamp(fWeaponModifiers_Humanoid_MagicMult, 0.0f, 10.0f);
			fWeaponModifiers_Humanoid_OtherMult = std::clamp(fWeaponModifiers_Humanoid_OtherMult, 0.0f, 10.0f);

			// Weapon Modifiers - Creature Clamps
			fWeaponModifiers_Creature_OneHandSwordMult = std::clamp(fWeaponModifiers_Creature_OneHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_OneHandAxeMult = std::clamp(fWeaponModifiers_Creature_OneHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_OneHandMaceMult = std::clamp(fWeaponModifiers_Creature_OneHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_TwoHandSwordMult = std::clamp(fWeaponModifiers_Creature_TwoHandSwordMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_TwoHandAxeMult = std::clamp(fWeaponModifiers_Creature_TwoHandAxeMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_TwoHandMaceMult = std::clamp(fWeaponModifiers_Creature_TwoHandMaceMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_DaggerMult = std::clamp(fWeaponModifiers_Creature_DaggerMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_HandToHandMult = std::clamp(fWeaponModifiers_Creature_HandToHandMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_BeastMult = std::clamp(fWeaponModifiers_Creature_BeastMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_RangedMult = std::clamp(fWeaponModifiers_Creature_RangedMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_MagicMult = std::clamp(fWeaponModifiers_Creature_MagicMult, 0.0f, 10.0f);
			fWeaponModifiers_Creature_OtherMult = std::clamp(fWeaponModifiers_Creature_OtherMult, 0.0f, 10.0f);

			// Armor Modifiers - Global Clamps
			fArmorModifiers_Global_Cloth_EffectivenessMult = std::clamp(fArmorModifiers_Global_Cloth_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Global_Cloth_LocationalBlend = std::clamp(fArmorModifiers_Global_Cloth_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Global_Light_EffectivenessMult = std::clamp(fArmorModifiers_Global_Light_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Global_Light_LocationalBlend = std::clamp(fArmorModifiers_Global_Light_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Global_Heavy_EffectivenessMult = std::clamp(fArmorModifiers_Global_Heavy_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Global_Heavy_LocationalBlend = std::clamp(fArmorModifiers_Global_Heavy_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Global_ExposedLocationPenalty = std::clamp(fArmorModifiers_Global_ExposedLocationPenalty, 0.0f, 10.0f);

			// Armor Modifiers - Player Clamps
			fArmorModifiers_Player_Cloth_EffectivenessMult = std::clamp(fArmorModifiers_Player_Cloth_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Player_Cloth_LocationalBlend = std::clamp(fArmorModifiers_Player_Cloth_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Player_Light_EffectivenessMult = std::clamp(fArmorModifiers_Player_Light_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Player_Light_LocationalBlend = std::clamp(fArmorModifiers_Player_Light_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Player_Heavy_EffectivenessMult = std::clamp(fArmorModifiers_Player_Heavy_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Player_Heavy_LocationalBlend = std::clamp(fArmorModifiers_Player_Heavy_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Player_ExposedLocationPenalty = std::clamp(fArmorModifiers_Player_ExposedLocationPenalty, 0.0f, 10.0f);

			// Armor Modifiers - Humanoid Clamps
			fArmorModifiers_Humanoid_Cloth_EffectivenessMult = std::clamp(fArmorModifiers_Humanoid_Cloth_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Humanoid_Cloth_LocationalBlend = std::clamp(fArmorModifiers_Humanoid_Cloth_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Humanoid_Light_EffectivenessMult = std::clamp(fArmorModifiers_Humanoid_Light_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Humanoid_Light_LocationalBlend = std::clamp(fArmorModifiers_Humanoid_Light_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Humanoid_Heavy_EffectivenessMult = std::clamp(fArmorModifiers_Humanoid_Heavy_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Humanoid_Heavy_LocationalBlend = std::clamp(fArmorModifiers_Humanoid_Heavy_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Humanoid_ExposedLocationPenalty = std::clamp(fArmorModifiers_Humanoid_ExposedLocationPenalty, 0.0f, 10.0f);

			// Armor Modifiers - Creature Clamps
			fArmorModifiers_Creature_Cloth_EffectivenessMult = std::clamp(fArmorModifiers_Creature_Cloth_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Creature_Cloth_LocationalBlend = std::clamp(fArmorModifiers_Creature_Cloth_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Creature_Light_EffectivenessMult = std::clamp(fArmorModifiers_Creature_Light_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Creature_Light_LocationalBlend = std::clamp(fArmorModifiers_Creature_Light_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Creature_Heavy_EffectivenessMult = std::clamp(fArmorModifiers_Creature_Heavy_EffectivenessMult, 0.0f, 10.0f);
			fArmorModifiers_Creature_Heavy_LocationalBlend = std::clamp(fArmorModifiers_Creature_Heavy_LocationalBlend, 0.0f, 1.0f);
			fArmorModifiers_Creature_ExposedLocationPenalty = std::clamp(fArmorModifiers_Creature_ExposedLocationPenalty, 0.0f, 10.0f);

			// Context Modifiers - Global Clamps
			fContextModifiers_Global_SimpleAttackMult = std::clamp(fContextModifiers_Global_SimpleAttackMult, 0.0f, 10.0f);
			fContextModifiers_Global_PowerAttackMult = std::clamp(fContextModifiers_Global_PowerAttackMult, 0.0f, 10.0f);
			fContextModifiers_Global_SneakAttackMult = std::clamp(fContextModifiers_Global_SneakAttackMult, 0.0f, 10.0f);
			fContextModifiers_Global_BashAttackMult = std::clamp(fContextModifiers_Global_BashAttackMult, 0.0f, 10.0f);
			fContextModifiers_Global_BlockedShieldAttackMult = std::clamp(fContextModifiers_Global_BlockedShieldAttackMult, 0.0f, 10.0f);
			fContextModifiers_Global_BlockedWeaponAttackMult = std::clamp(fContextModifiers_Global_BlockedWeaponAttackMult, 0.0f, 10.0f);
			fContextModifiers_Global_StaggeredMult = std::clamp(fContextModifiers_Global_StaggeredMult, 0.0f, 10.0f);

			// Context Modifiers - Player Clamps
			fContextModifiers_Player_SimpleAttackMult = std::clamp(fContextModifiers_Player_SimpleAttackMult, 0.0f, 10.0f);
			fContextModifiers_Player_PowerAttackMult = std::clamp(fContextModifiers_Player_PowerAttackMult, 0.0f, 10.0f);
			fContextModifiers_Player_SneakAttackMult = std::clamp(fContextModifiers_Player_SneakAttackMult, 0.0f, 10.0f);
			fContextModifiers_Player_BashAttackMult = std::clamp(fContextModifiers_Player_BashAttackMult, 0.0f, 10.0f);
			fContextModifiers_Player_BlockedShieldAttackMult = std::clamp(fContextModifiers_Player_BlockedShieldAttackMult, 0.0f, 10.0f);
			fContextModifiers_Player_BlockedWeaponAttackMult = std::clamp(fContextModifiers_Player_BlockedWeaponAttackMult, 0.0f, 10.0f);
			fContextModifiers_Player_StaggeredMult = std::clamp(fContextModifiers_Player_StaggeredMult, 0.0f, 10.0f);

			// Context Modifiers - Humanoid Clamps
			fContextModifiers_Humanoid_SimpleAttackMult = std::clamp(fContextModifiers_Humanoid_SimpleAttackMult, 0.0f, 10.0f);
			fContextModifiers_Humanoid_PowerAttackMult = std::clamp(fContextModifiers_Humanoid_PowerAttackMult, 0.0f, 10.0f);
			fContextModifiers_Humanoid_SneakAttackMult = std::clamp(fContextModifiers_Humanoid_SneakAttackMult, 0.0f, 10.0f);
			fContextModifiers_Humanoid_BashAttackMult = std::clamp(fContextModifiers_Humanoid_BashAttackMult, 0.0f, 10.0f);
			fContextModifiers_Humanoid_BlockedShieldAttackMult = std::clamp(fContextModifiers_Humanoid_BlockedShieldAttackMult, 0.0f, 10.0f);
			fContextModifiers_Humanoid_BlockedWeaponAttackMult = std::clamp(fContextModifiers_Humanoid_BlockedWeaponAttackMult, 0.0f, 10.0f);
			fContextModifiers_Humanoid_StaggeredMult = std::clamp(fContextModifiers_Humanoid_StaggeredMult, 0.0f, 10.0f);

			// Context Modifiers - Creature Clamps
			fContextModifiers_Creature_SimpleAttackMult = std::clamp(fContextModifiers_Creature_SimpleAttackMult, 0.0f, 10.0f);
			fContextModifiers_Creature_PowerAttackMult = std::clamp(fContextModifiers_Creature_PowerAttackMult, 0.0f, 10.0f);
			fContextModifiers_Creature_SneakAttackMult = std::clamp(fContextModifiers_Creature_SneakAttackMult, 0.0f, 10.0f);
			fContextModifiers_Creature_BashAttackMult = std::clamp(fContextModifiers_Creature_BashAttackMult, 0.0f, 10.0f);
			fContextModifiers_Creature_BlockedShieldAttackMult = std::clamp(fContextModifiers_Creature_BlockedShieldAttackMult, 0.0f, 10.0f);
			fContextModifiers_Creature_BlockedWeaponAttackMult = std::clamp(fContextModifiers_Creature_BlockedWeaponAttackMult, 0.0f, 10.0f);
			fContextModifiers_Creature_StaggeredMult = std::clamp(fContextModifiers_Creature_StaggeredMult, 0.0f, 10.0f);

			// External data
			[&]() {
				using namespace ModData;

				debugVerboseMode = iGeneral_VerboseMode;
			}();

			return readStatus;
		}

		std::optional<std::variant<bool, int, float, std::string>> GetValueVariant(const std::string& key_section)
		{
			auto sep = key_section.rfind(':');
			if (sep == std::string::npos) {
				logger::error("GetValueVariant: Invalid key_section format: '{}'", key_section);
				return std::nullopt;
			}
			std::string section = key_section.substr(0, sep);
			std::string key     = key_section.substr(sep + 1);
			for (const auto& bind : bindings) {
				if (key == bind.key && section == bind.section) {
					if (auto v = std::get_if<bool*>        (&bind.var)) return **v;
					if (auto v = std::get_if<int*>         (&bind.var)) return **v;
					if (auto v = std::get_if<float*>       (&bind.var)) return **v;
					if (auto v = std::get_if<std::string*> (&bind.var)) return **v;
				}
			}
			return std::nullopt;
		}

		template <typename T>
		T GetValue(const std::string& key_section, const T& defaultValue = T{})
		{
			auto opt = GetValueVariant(key_section);
			if (!opt) {
				logger::error("GetValue: No binding found for '{}'", key_section);
				return defaultValue;
			}

			return std::visit([&](auto&& val) -> T {
				using V = std::decay_t<decltype(val)>;
				if constexpr (std::is_same_v<T, std::string>) {
					if constexpr (std::is_same_v<V, std::string>) return val;
				} else if constexpr (std::is_same_v<T, bool>) {
					if constexpr (std::is_same_v<V, bool>)  return val;
					if constexpr (std::is_same_v<V, int>)   return val != 0;
					if constexpr (std::is_same_v<V, float>) return val != 0.0f;
				} else if constexpr (std::is_same_v<T, int>) {
					if constexpr (std::is_same_v<V, int>)   return val;
					if constexpr (std::is_same_v<V, float>) return static_cast<int>(val);
					if constexpr (std::is_same_v<V, bool>)  return val ? 1 : 0;
				} else if constexpr (std::is_same_v<T, float>) {
					if constexpr (std::is_same_v<V, float>) return val;
					if constexpr (std::is_same_v<V, int>)   return static_cast<float>(val);
					if constexpr (std::is_same_v<V, bool>)  return val ? 1.0f : 0.0f;
				}
				logger::error("GetValue: Type mismatch for '{}'", key_section);
				return defaultValue;
			}, *opt);
		}

		std::optional<std::variant<bool, int, float, std::string>> GetDefaultValueVariant(const std::string& key_section)
		{
			auto sep = key_section.rfind(':');
			if (sep == std::string::npos) {
				logger::error("GetDefaultValueVariant: Invalid key_section format: '{}'", key_section);
				return std::nullopt;
			}
			std::string section = key_section.substr(0, sep);
			std::string key = key_section.substr(sep + 1);

			for (const auto& bind : bindings) {
				if (key == bind.key && section == bind.section) {
					return bind.defaultValue;
				}
			}
			return std::nullopt;
		}

		template <typename T>
		T GetDefaultValue(const std::string& key_section, const T& fallback = T{})
		{
			auto opt = GetDefaultValueVariant(key_section);
			if (!opt) {
				logger::error("GetDefaultValue: No binding found for '{}'", key_section);
				return fallback;
			}

			return std::visit([&](auto&& val) -> T {
				using V = std::decay_t<decltype(val)>;
				if constexpr (std::is_same_v<T, bool>) {
					if constexpr (std::is_same_v<V, bool>)  return val;
					if constexpr (std::is_same_v<V, int>)   return val != 0;
					if constexpr (std::is_same_v<V, float>) return val != 0.0f;
				} else if constexpr (std::is_same_v<T, int>) {
					if constexpr (std::is_same_v<V, int>)   return val;
					if constexpr (std::is_same_v<V, float>) return static_cast<int>(val);
					if constexpr (std::is_same_v<V, bool>)  return val ? 1 : 0;
				} else if constexpr (std::is_same_v<T, float>) {
					if constexpr (std::is_same_v<V, float>) return val;
					if constexpr (std::is_same_v<V, int>)   return static_cast<float>(val);
					if constexpr (std::is_same_v<V, bool>)  return val ? 1.0f : 0.0f;
				} else if constexpr (std::is_same_v<T, std::string>) {
					if constexpr (std::is_same_v<V, std::string>) return val;
				}
				logger::error("GetDefaultValue: Type mismatch for '{}'", key_section);
				return fallback;
			}, *opt);
		}

		template <typename T>
		bool SetValue(const std::string& key_section, const T& value)
		{
			auto sep = key_section.rfind(':');
			if (sep == std::string::npos) {
				logger::error("SetValue: Invalid key_section format: '{}'", key_section);
				return false;
			}

			std::string section = key_section.substr(0, sep);
			std::string key = key_section.substr(sep + 1);

			if (section.empty() || key.empty()) {
				logger::error("SetValue: Empty section or key in '{}'", key_section);
				return false;
			}

			for (auto& bind : bindings) {
				if (section == bind.section && key == bind.key) {
					bool matched = std::visit([&](auto* ptr) -> bool {
						using PtrType = std::decay_t<decltype(*ptr)>;
						if constexpr (std::is_same_v<PtrType, T>) {
							*ptr = value;
							return true;
						}
						return false;
					}, bind.var);

					if (!matched) {
						logger::error("SetValue: Type mismatch for '{}:{}'", section, key);
						return false;
					}

					CSimpleIniA ini;
					ini.SetUnicode();
					if (std::filesystem::exists(path)) ini.LoadFile(path.c_str());

					if constexpr (std::is_same_v<T, bool>) {
						ini.SetBoolValue(section.c_str(), key.c_str(), value);
					} else if constexpr (std::is_same_v<T, int>) {
						ini.SetLongValue(section.c_str(), key.c_str(), value);
					} else if constexpr (std::is_same_v<T, float>) {
						ini.SetDoubleValue(section.c_str(), key.c_str(), value);
					} else if constexpr (std::is_same_v<T, std::string>) {
						ini.SetValue(section.c_str(), key.c_str(), value.c_str());
					} else {
						return false;
					}

					if (ini.SaveFile(path.c_str()) < 0) {
						logger::error("SetValue: Failed to save INI file at '{}'", path);
						return false;
					}

					return true;
				}
			}

			logger::error("SetValue: No binding found for '{}:{}'", section, key);
			return false;
		}

		void SyncToGlobals()
		{
			for (const auto& bind : bindings) {
				if (!bind.syncGlobal) continue;
					
				const std::string id = GlobalValueUtils::MakeGlobalEditorID(prefix, std::string(bind.section) + "_" + bind.key);

				std::visit([&](auto* ptr) {
					using T = std::decay_t<decltype(*ptr)>;

					if constexpr (std::is_same_v<T, bool>) {
						GlobalValueUtils::MakeGlobalValue(id, static_cast<float>(*ptr));
					} else if constexpr (std::is_same_v<T, int>) {
						GlobalValueUtils::MakeGlobalValue(id, static_cast<int>(*ptr));
					} else if constexpr (std::is_same_v<T, float>) {
						GlobalValueUtils::MakeGlobalValue(id, *ptr);
					}
				}, bind.var);
			}

			constexpr auto SSEFixesPath = L"Data/DLLPlugins/FPSFixPlugin.dll";
			auto isSSEFixesPresent = [](const wchar_t* SSEFixesPath) -> bool {
				return std::filesystem::exists(SSEFixesPath);
			};

			if (bMisc_SSEFixesWorkaround && isSSEFixesPresent(SSEFixesPath)) return;

			GlobalValueUtils::RegisterCachedGlobals();
		}

	private:
		inline static std::string path = "Data/SKSE/Plugins/Accuracy.ini";
		inline static std::string prefix = "AC";

		using IniValue = std::variant<bool*, int*, float*, std::string*>;

		struct IniBinding
		{
			const char* section;
			const char* key;
			IniValue var;
			bool syncGlobal = false;
			std::variant<bool, int, float, std::string> defaultValue;
		};

		std::vector<IniBinding> bindings;
	};
}
