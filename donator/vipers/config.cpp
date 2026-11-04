// ----------------------------------------------------------------------
// Donator: vipers  (Vipers)
// Textures: HiddenIsles_Donator\donator\vipers\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Vipers
	{
		units[] = {"HiddenIsles_Donator_VipersFlag","HiddenIsles_Donator_VipersArmband"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Gear_Camping","ACO_Other_Armband"};
	};
};
class CfgVehicles
{
	// external base classes
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class HiddenIsles_Donator_VipersFlag: Flag_White
	{
		scope = 2;
		displayName = "Vipers Flag";
		descriptionShort = "[DONATOR ITEM] Vipers";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\vipers\data\flag_vipers.paa"};
	};
	class HiddenIsles_Donator_VipersArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Vipers Armband";
		descriptionShort = "[DONATOR ITEM] Vipers";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\vipers\data\upgradedarmband_vipers.paa"};
	};
};
