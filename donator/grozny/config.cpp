// ----------------------------------------------------------------------
// Donator: grozny  (Grozny Battalion, Grozny)
// Textures: HIRP_Donator\donator\grozny\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Grozny
	{
		units[] = {"HiddenIsles_Donator_GroznyFlag","HiddenIsles_Donator_GroznyBigPatch","HiddenIsles_Donator_GroznyArmband"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Gear_Camping","FOG_Data_Patches","ACO_Other_Armband"};
	};
};
class CfgVehicles
{
	// external base classes
	class Flag_White;
	class FOG_Big_Patch_Base;
	class ALV_UpgradedArmband_Black;
	class HiddenIsles_Donator_GroznyFlag: Flag_White
	{
		scope = 2;
		displayName = "Grozny Battalion Flag";
		descriptionShort = "[DONATOR ITEM] Grozny Battalion";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\grozny\data\flag_grozny.paa"};
	};
	class HiddenIsles_Donator_GroznyBigPatch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Grozny Battalion Big FOG Patch";
		descriptionShort = "[DONATOR ITEM] Grozny Battalion";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\grozny\data\bigpatch_grozny.paa"};
	};
	class HiddenIsles_Donator_GroznyArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Grozny's Armband";
		descriptionShort = "[DONATOR ITEM] Grozny";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\grozny\data\upgradedarmband_grozny.paa"};
	};
};
