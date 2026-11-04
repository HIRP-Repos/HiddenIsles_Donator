// ----------------------------------------------------------------------
// Donator: stag  (stag)
// Textures: HiddenIsles_Donator\donator\stag\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Stag
	{
		units[] = {"HiddenIsles_GhostMask_STAG","HiddenIsles_STAGBigPatch","HiddenIsles_STAGSmallPatch","HiddenIsles_STAGArmband","HiddenIsles_STAGALVPatch","HiddenIsles_STAG_AEMO1Jacket","HiddenIsles_STAG_ArticJacket","HiddenIsles_STAG_ArticPants"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Ghost_Mask_New_Stuff","FOG_Data_Patches","ACO_Other_Armband","ACO_Core_Attachments","FOG_Shirts_AEM01_Jacket","FOG_Shirt_ArcticJacket","FOG_MOD_Pants_ArcticPants"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Ghost_Mask_New_ColorBase;
	class FOG_Big_Patch_Base;
	class FOG_Small_Patch_Base;
	class ALV_UpgradedArmband_Black;
	class ALV_Patch_USA;
	class FOG_AEM01_Jacket_Black;
	class FOG_Shirt_ArcticJacket_Black;
	class FOG_ArcticPants_Black;
	class HiddenIsles_GhostMask_STAG: FOG_Ghost_Mask_New_ColorBase
	{
		scope = 2;
		displayName = "STAG Face Mask";
		descriptionShort = "A combat facemask worn by STAG operatives";
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_black_co.paa","HiddenIsles_Donator\donator\stag\data\skull_mask_black_stag_co.paa","HiddenIsles_Donator\donator\stag\data\skull_mask_black_stag_co.paa"};
	};
	class HiddenIsles_STAGBigPatch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "STAG Big FOG Patch";
		descriptionShort = "A patch used by STAG operatives";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\stag\data\bigpatch_stag.paa"};
	};
	class HiddenIsles_STAGSmallPatch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "STAG Small FOG Patch";
		descriptionShort = "A patch used by STAG operatives";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\stag\data\smallpatch_stag.paa"};
	};
	class HiddenIsles_STAGArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "STAG Armband";
		descriptionShort = "Official Armband of STAG Corporation";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\stag\data\upgradedarmband_stag.paa"};
	};
	class HiddenIsles_STAGALVPatch: ALV_Patch_USA
	{
		scope = 2;
		displayName = "STAG ALV Patch";
		descriptionShort = "A patch used by STAG operatives";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\stag\data\patch_stag.paa"};
	};
	class HiddenIsles_STAG_AEMO1Jacket: FOG_AEM01_Jacket_Black
	{
		scope = 2;
		displayName = "STAG AEM-1 Jacket";
		descriptionShort = "Official Stag Uniform";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\stag\data\aem_1_jacket_black_stag_co.paa"};
	};
	class HiddenIsles_STAG_ArticJacket: FOG_Shirt_ArcticJacket_Black
	{
		scope = 2;
		displayName = "STAG Site-4 Jacket";
		descriptionShort = "The Official Jacket used by Site-4 Operatives";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\stag\data\fog_arcticjacket_black_stag_co.paa"};
	};
	class HiddenIsles_STAG_ArticPants: FOG_ArcticPants_Black
	{
		scope = 2;
		displayName = "STAG Site-4 Pants";
		descriptionShort = "The Official Pants used by Site-4 Operatives";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\stag\data\arcticpants_black_stag_co.paa"};
	};
};
