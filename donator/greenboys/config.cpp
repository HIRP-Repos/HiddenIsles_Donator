// ----------------------------------------------------------------------
// Donator: greenboys  (Greenboys)
// Textures: HIRP_Donator\donator\greenboys\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Greenboys
	{
		units[] = {"HiddenIsles_Donator_GreenboysArmband","HiddenIsles_Donator_GreenboysFlag"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","DZ_Gear_Camping"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class Flag_White;
	class HiddenIsles_Donator_GreenboysArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Green Boys Armband";
		descriptionShort = "[DONATOR ITEM] Greenboys";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\greenboys\data\upgradedarmband_greenboys.paa"};
	};
	class HiddenIsles_Donator_GreenboysFlag: Flag_White
	{
		scope = 2;
		displayName = "Green Boys Flag";
		descriptionShort = "[DONATOR ITEM] Greenboys";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\greenboys\data\flag_greenboys.paa"};
	};
};
