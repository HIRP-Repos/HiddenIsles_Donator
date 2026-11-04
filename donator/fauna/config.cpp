// ----------------------------------------------------------------------
// Donator: fauna  (August)
// Textures: HiddenIsles_Donator\donator\fauna\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Fauna
	{
		units[] = {"HiddenIsles_Donator_Augustglasses"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","Round_Glasses"};
	};
};
class CfgVehicles
{
	// external base classes
	class Round_glasses_black;
	class HiddenIsles_Donator_Augustglasses: Round_glasses_black
	{
		scope = 2;
		displayName = "August's Glasses";
		descriptionShort = "[DONATOR ITEM] August";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\fauna\data\round_glasses_fauna.paa","HiddenIsles_Donator\donator\fauna\data\round_glasses_fauna.paa"};
	};
};
