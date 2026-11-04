// ----------------------------------------------------------------------
// Donator: wreckborn  (Wreck Born)
// Textures: HiddenIsles_Donator\donator\wreckborn\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Wreckborn
	{
		units[] = {"HiddenIsles_Donator_WreckbornFlag"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Gear_Camping"};
	};
};
class CfgVehicles
{
	// external base classes
	class Flag_White;
	class HiddenIsles_Donator_WreckbornFlag: Flag_White
	{
		scope = 2;
		displayName = "Wreckborn Flag";
		descriptionShort = "[DONATOR ITEM] Wreck Born";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wreckborn\data\flag_wreckborn.paa"};
	};
};
