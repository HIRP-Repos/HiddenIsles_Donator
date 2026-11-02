// ----------------------------------------------------------------------
// Donator: john  (John Callahan)
// Textures: HIRP_Donator\donator\john\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_John
	{
		units[] = {"HiddenIsles_Donator_JohnHelmet"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Headgear"};
	};
};
class CfgVehicles
{
	// external base classes
	class MotoHelmet_Black;
	class HiddenIsles_Donator_JohnHelmet: MotoHelmet_Black
	{
		scope = 2;
		displayName = "Helmet Of A Thousand Miles";
		descriptionShort = "[DONATOR ITEM] John Callahan";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\john\data\motohelmet_john.paa"};
	};
};
