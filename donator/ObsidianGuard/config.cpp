// ----------------------------------------------------------------------
// Donator: obsidianguard  (Obsidian Guard)
// Textures: HIRP_Donator\donator\obsidianguard\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Obsidianguard
	{
		units[] = {"HiddenIsles_Donator_ObsidianArmband","HiddenIsles_Donator_ObsidianFlag"};
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
	class HiddenIsles_Donator_ObsidianArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Obsidian Armband";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\obsidianguard\data\armband_obsidian_co.paa"};
		hiddenSelectionsMaterial[] = {"HIRP_Donator\donator\obsidianguard\data\armband_obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianFlag: Flag_White
	{
		scope = 2;
		displayName = "Obsidian Flag";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\obsidianguard\data\flag_obsidian_co.paa"};
	};
};
