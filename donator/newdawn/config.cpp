// ----------------------------------------------------------------------
// Donator: newdawn  (New Dawn / Sylvester McDowell)
// Textures: HiddenIsles_Donator\donator\newdawn\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Newdawn
	{
		units[] = {"HiddenIsles_Donator_NewDawnFlag","HiddenIsles_Donator_NewDawnArmband","HiddenIsles_Donator_NewDawnBigPatch","HiddenIsles_Donator_NewDawnSmallPatch"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Gear_Camping","ACO_Other_Armband","FOG_Data_Patches"};
	};
};
class CfgVehicles
{
	// external base classes
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class FOG_Big_Patch_Base;
	class FOG_Small_Patch_Base;
	class HiddenIsles_Donator_NewDawnFlag: Flag_White
	{
		scope = 2;
		displayName = "New Dawn Flag";
		descriptionShort = "[DONATOR ITEM] New Dawn / Sylvester McDowell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newdawn\data\flag_newdawn.paa"};
	};
	class HiddenIsles_Donator_NewDawnArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "New Dawn Armband";
		descriptionShort = "[DONATOR ITEM] New Dawn / Sylvester McDowell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newdawn\data\upgradedarmband_newdawn.paa"};
	};
	class HiddenIsles_Donator_NewDawnBigPatch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "New Dawn Big FOG Patch";
		descriptionShort = "[DONATOR ITEM] New Dawn / Sylvester McDowell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newdawn\data\bigpatch_newdawn.paa"};
	};
	class HiddenIsles_Donator_NewDawnSmallPatch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "New Dawn Small FOG Patch";
		descriptionShort = "[DONATOR ITEM] New Dawn / Sylvester McDowell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newdawn\data\smallpatch_newdawn.paa"};
	};
};
