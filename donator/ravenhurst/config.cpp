// ----------------------------------------------------------------------
// Donator: ravenhurst  (Ravenhurst)
// Textures: HiddenIsles_Donator\donator\ravenhurst\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Ravenhurst
	{
		units[] = {"HiddenIsles_Donator_RavenhurstArmband"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class HiddenIsles_Donator_RavenhurstArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Ravenhurst Armband";
		descriptionShort = "[DONATOR ITEM] Ravenhurst";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ravenhurst\data\upgradedarmband_ravenhurst.paa"};
	};
};
