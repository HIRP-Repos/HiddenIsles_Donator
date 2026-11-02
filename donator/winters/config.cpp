// ----------------------------------------------------------------------
// Donator: winters  (Winters Cartel)
// Textures: HIRP_Donator\donator\winters\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Winters
	{
		units[] = {"HiddenIsles_Donator_WintersArmband","HiddenIsles_Donator_WintersFlag"};
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
	class HiddenIsles_Donator_WintersArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Winters Cartel Armband";
		descriptionShort = "[DONATOR ITEM] Winters Cartel";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\winters\data\upgradedarmband_winters.paa"};
	};
	class HiddenIsles_Donator_WintersFlag: Flag_White
	{
		scope = 2;
		displayName = "Winters Cartel Flag";
		descriptionShort = "[DONATOR ITEM] Winters Cartel";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\winters\data\irp_winters_flag.paa"};
	};
};
