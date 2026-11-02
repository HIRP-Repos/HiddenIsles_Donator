// ----------------------------------------------------------------------
// Donator: boone  (Boone)
// Textures: HIRP_Donator\donator\boone\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Boone
	{
		units[] = {"HiddenIsles_Donator_BooneVest","HiddenIsles_Donator_BooneFlag","HiddenIsles_Donator_BooneArmband","HiddenIsles_Donator_BooneALVPatch","HiddenIsles_Donator_BooneBigPatch","HiddenIsles_Donator_BooneSmallPatch"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Vests","DZ_Gear_Camping","ACO_Other_Armband","ACO_Core_Attachments","FOG_Data_Patches"};
	};
};
class CfgVehicles
{
	// external base classes
	class PlateCarrierVest;
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class ALV_Patch_USA;
	class FOG_Big_Patch_Base;
	class FOG_Small_Patch_Base;
	class HiddenIsles_Donator_BooneVest: PlateCarrierVest
	{
		scope = 2;
		displayName = "Boone's Plate Carrier";
		descriptionShort = "[DONATOR ITEM] Boone";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\boone\data\platecarriervest_boone.paa","HIRP_Donator\donator\boone\data\platecarriervest_boone.paa","HIRP_Donator\donator\boone\data\platecarriervest_boone.paa"};
	};
	class HiddenIsles_Donator_BooneFlag: Flag_White
	{
		scope = 2;
		displayName = "Bangers & Bangers Flag";
		descriptionShort = "[DONATOR ITEM] Boone";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\boone\data\flag_bangers.paa"};
	};
	class HiddenIsles_Donator_BooneArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Bangers & Bangers Armband";
		descriptionShort = "[DONATOR ITEM] Boone";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\boone\data\upgradedarmband_bangers.paa"};
	};
	class HiddenIsles_Donator_BooneALVPatch: ALV_Patch_USA
	{
		scope = 2;
		displayName = "Bangers & Bangers ALV Patch";
		descriptionShort = "[DONATOR ITEM] Boone";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\boone\data\patch_bangers.paa"};
	};
	class HiddenIsles_Donator_BooneBigPatch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Bangers & Bangers Big FOG Patch";
		descriptionShort = "[DONATOR ITEM] Boone";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\boone\data\bigpatch_bangers.paa"};
	};
	class HiddenIsles_Donator_BooneSmallPatch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Bangers & Bangers Small FOG Patch";
		descriptionShort = "[DONATOR ITEM] Boone";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\boone\data\smallpatch_bangers.paa"};
	};
};
