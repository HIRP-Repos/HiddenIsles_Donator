// ----------------------------------------------------------------------
// Donator: dayton  (Dayton)
// Textures: HiddenIsles_Donator\donator\dayton\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Dayton
	{
		units[] = {"FOG_M50_Gasmask_Dayton"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Masks_M50Gasmask"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_M50_Gasmask_Base;
	class FOG_M50_Gasmask_Dayton: FOG_M50_Gasmask_Base
	{
		scope = 2;
		displayName = "Dayton Mask";
		descriptionShort = "[DONATOR ITEM] Dayton";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\dayton\data\m50_dayton_co.paa"};
	};
};
