// ----------------------------------------------------------------------
// Donator: remnant  (Remnant)
// Textures: HIRP_Donator\donator\remnant\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Remnant
	{
		units[] = {"HiddenIsles_Donator_RemanantFlag","HiddenIsles_Donator_RemanantArmband"};
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
	class HiddenIsles_Donator_RemanantFlag: Flag_White
	{
		scope = 2;
		displayName = "Remnant Flag";
		descriptionShort = "[DONATOR ITEM] Remnant";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\remnant\data\flag_remnant.paa"};
	};
	class HiddenIsles_Donator_RemanantArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Remnant's Armband";
		descriptionShort = "[DONATOR ITEM] Remnant";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\remnant\data\upgradedarmband_remnant.paa"};
	};
};
