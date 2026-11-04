// ----------------------------------------------------------------------
// Donator: ubici  (Ubici)
// Textures: HiddenIsles_Donator\donator\ubici\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Ubici
	{
		units[] = {"HiddenIsles_Donator_UbiciArmband","HiddenIsles_Donator_UbiciFlag","HiddenIsles_Donator_Ubici_PantsGreen","HiddenIsles_Donator_UbiciJacketGreen","HiddenIsles_Donator_Ubici_PantsGrey","HiddenIsles_Donator_UbiciJacketGrey","HiddenIsles_Donator_UbiciVest","HiddenIsles_Donator_UbiciHeadgear","HiddenIsles_Donator_UbiciAdminPouch","HiddenIsles_Donator_UbiciUtilityPouch","HiddenIsles_Donator_UbiciBelt","HiddenIsles_Donator_UbiciBag","Ubici_Gorka_Pants_WinterCamo","Ubici_Gorka_Pants_Camo","Ubici_Gorka_Jacket_WinterCamo","Ubici_Gorka_Jacket_Camo","Ubici_SmershVest_WinterCamo","Ubici_SmershVest_Camo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","DZ_Gear_Camping","FOG_UFP_Pants_Shit","FOG_Shirts_ArcteryxGryphon","FOG_Vest_MMAC_stuff","DZ_Characters_Headgear","FOG_MOD_Vests_Accessories","ACO_Core_Attachments","ACO_Lower_Belts","FOG_Bag_Trizip","DZ_Characters_Vests"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class Flag_White;
	class FOG_UFP_Pants_Urban;
	class FOG_Jacket_ArcteryxGryphon_Black;
	class FOG_Vest_MMAC_CB;
	class GorkaHelmet_Green;
	class FOG_Pouch_Admin_Small_RG;
	class ALV_Pouch_Utility_Black;
	class ALV_Smersh_Black;
	class FOG_Bag_Trizip_Black;
	class FOG_Gorka_Pants_ColorBase;
	class FOG_Gorka_Jacket_ColorBase;
	class SmershVest;
	class HiddenIsles_Donator_UbiciArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Ubici Armband";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\upgradedarmband_ubici.paa"};
	};
	class HiddenIsles_Donator_UbiciFlag: Flag_White
	{
		scope = 2;
		displayName = "Ubici Flag";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\flag_ubici.paa"};
	};
	class HiddenIsles_Donator_Ubici_PantsGreen: FOG_UFP_Pants_Urban
	{
		scope = 2;
		displayName = "Ubici UFP Pants";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa","HiddenIsles_Donator\donator\ubici\data\ufp_black_ubici.paa"};
	};
	class HiddenIsles_Donator_UbiciJacketGreen: FOG_Jacket_ArcteryxGryphon_Black
	{
		scope = 2;
		displayName = "Ubici's Arcteryx Jacket";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\arcteryx_gryphon_ubici.paa"};
	};
	class HiddenIsles_Donator_Ubici_PantsGrey: FOG_UFP_Pants_Urban
	{
		scope = 2;
		displayName = "Ubici UFP Pants";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa","HiddenIsles_Donator\donator\ubici\data\ubicipantsgrey.paa"};
	};
	class HiddenIsles_Donator_UbiciJacketGrey: FOG_Jacket_ArcteryxGryphon_Black
	{
		scope = 2;
		displayName = "Ubici's Arcteryx Jacket";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\ubicishirtgrey.paa"};
	};
	class HiddenIsles_Donator_UbiciVest: FOG_Vest_MMAC_CB
	{
		scope = 2;
		displayName = "Ubici's MMAC Vest";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\mmac_black_co_olive.paa","HiddenIsles_Donator\donator\ubici\data\mmac_black_co_olive.paa"};
	};
	class HiddenIsles_Donator_UbiciHeadgear: GorkaHelmet_Green
	{
		scope = 2;
		displayName = "Ubici's Gorka Helmet";
		descriptionShort = "[DONATOR ITEM] Ubici";
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\maska_co_olive.paa","HiddenIsles_Donator\donator\ubici\data\maska_co_olive.paa","HiddenIsles_Donator\donator\ubici\data\maska_co_olive.paa"};
	};
	class HiddenIsles_Donator_UbiciAdminPouch: FOG_Pouch_Admin_Small_RG
	{
		scope = 2;
		displayName = "Ubici's Admin Pouch";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\pouch_small_ronin_black_co_olive.paa"};
	};
	class HiddenIsles_Donator_UbiciUtilityPouch: ALV_Pouch_Utility_Black
	{
		scope = 2;
		displayName = "Ubici's Utility Pouch";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\spritus_pouches_black_co_olive.paa"};
	};
	class HiddenIsles_Donator_UbiciBelt: ALV_Smersh_Black
	{
		scope = 2;
		displayName = "Ubici's Belt";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\smersh_olive_co.paa","HiddenIsles_Donator\donator\ubici\data\pouches_olive_co.paa","HiddenIsles_Donator\donator\ubici\data\dropleg_belt_olive_co.paa"};
	};
	class HiddenIsles_Donator_UbiciBag: FOG_Bag_Trizip_Black
	{
		scope = 2;
		displayName = "Ubici's Trizip Bag";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\data\trizip_black_co_olive.paa"};
	};
	// ------------------------------------------------------------------
	// Ubici Gorka / Smersh retextures (new classes; existing classes unchanged)
	// NOTE: Texture filenames below are placeholders until actual .paa filenames are supplied.
	// NOTE: Add the two FOG Gorka addons' exact CfgPatches names to
	//       requiredAddons[] if they are not covered by existing dependencies.
	// ------------------------------------------------------------------
	class Ubici_Gorka_Pants_WinterCamo: FOG_Gorka_Pants_ColorBase
	{
		scope = 2;
		displayName = "Ubici Gorka Pants - Winter Camo";
		descriptionShort = "[DONATOR ITEM] Ubici";
		// camo_pants, camo_pads
		hiddenSelectionsTextures[] =
		{
			"HiddenIsles_Donator\donator\ubici\data\gorka_pants_winter_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\gorka_pants_pads_winter_camo_co.paa"
		};
	};
	class Ubici_Gorka_Pants_Camo: FOG_Gorka_Pants_ColorBase
	{
		scope = 2;
		displayName = "Ubici Gorka Pants - Camo";
		descriptionShort = "[DONATOR ITEM] Ubici";
		// camo_pants, camo_pads
		hiddenSelectionsTextures[] =
		{
			"HiddenIsles_Donator\donator\ubici\data\gorka_pants_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\gorka_pants_pads_camo_co.paa"
		};
	};
	class Ubici_Gorka_Jacket_WinterCamo: FOG_Gorka_Jacket_ColorBase
	{
		scope = 2;
		displayName = "Ubici Gorka Jacket - Winter Camo";
		descriptionShort = "[DONATOR ITEM] Ubici";
		// camo_shirt, camo_pads
		hiddenSelectionsTextures[] =
		{
			"HiddenIsles_Donator\donator\ubici\data\gorka_jacket_winter_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\gorka_jacket_pads_winter_camo_co.paa"
		};
	};
	class Ubici_Gorka_Jacket_Camo: FOG_Gorka_Jacket_ColorBase
	{
		scope = 2;
		displayName = "Ubici Gorka Jacket - Camo";
		descriptionShort = "[DONATOR ITEM] Ubici";
		// camo_shirt, camo_pads
		hiddenSelectionsTextures[] =
		{
			"HiddenIsles_Donator\donator\ubici\data\gorka_jacket_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\gorka_jacket_pads_camo_co.paa"
		};
	};
	class Ubici_SmershVest_WinterCamo: SmershVest
	{
		scope = 2;
		displayName = "Ubici Smersh Vest - Winter Camo";
		descriptionShort = "[DONATOR ITEM] Ubici";
		// camoGround, camoMale, camoFemale
		hiddenSelectionsTextures[] =
		{
			"HiddenIsles_Donator\donator\ubici\data\smersh_ground_winter_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\smersh_winter_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\smersh_winter_camo_co.paa"
		};
	};
	class Ubici_SmershVest_Camo: SmershVest
	{
		scope = 2;
		displayName = "Ubici Smersh Vest - Camo";
		descriptionShort = "[DONATOR ITEM] Ubici";
		// camoGround, camoMale, camoFemale
		hiddenSelectionsTextures[] =
		{
			"HiddenIsles_Donator\donator\ubici\data\smersh_ground_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\smersh_camo_co.paa",
			"HiddenIsles_Donator\donator\ubici\data\smersh_camo_co.paa"
		};
	};

};
