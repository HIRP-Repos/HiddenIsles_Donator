// ----------------------------------------------------------------------
// Donator: george  (George)
// Textures: HiddenIsles_Donator\donator\george\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_George
	{
		units[] = {"HiddenIsles_Donator_GeorgeVest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Vest_Thor"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Vest_Thor_Tan;
	class HiddenIsles_Donator_GeorgeVest: FOG_Vest_Thor_Tan
	{
		scope = 2;
		displayName = "George's Thor Vest";
		descriptionShort = "[DONATOR ITEM] George";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\george\data\georgethor_tan.paa","HiddenIsles_Donator\donator\george\data\georgethor_tan.paa"};
	};
};
