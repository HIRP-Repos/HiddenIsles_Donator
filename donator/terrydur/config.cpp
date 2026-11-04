// ----------------------------------------------------------------------
// Donator: terrydur  (Terry/Dur)
// Textures: HiddenIsles_Donator\donator\terrydur\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Terrydur
	{
		units[] = {"HiddenIsles_Donator_TerryParka","HiddenIsles_Donator_TerryPants"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Upper_Jackets","ACO_Lower_Pants"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_Parka_Brown;
	class ALV_WW2Pants_Classic;
	class HiddenIsles_Donator_TerryParka: ALV_Parka_Brown
	{
		scope = 2;
		displayName = "Dur's Camo Parka";
		descriptionShort = "[DONATOR ITEM] Terry/Dur";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\terrydur\data\citizen_parka_terry.paa"};
	};
	class HiddenIsles_Donator_TerryPants: ALV_WW2Pants_Classic
	{
		scope = 2;
		displayName = "Dur's Camo Pants";
		descriptionShort = "[DONATOR ITEM] Terry/Dur";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\terrydur\data\ww2_pants_terry.paa","HiddenIsles_Donator\donator\terrydur\data\ww2_pants_terry.paa"};
	};
};
