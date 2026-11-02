// ----------------------------------------------------------------------
// Donator: harbinger  (John Dex Adams)
// Textures: HIRP_Donator\donator\harbinger\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Harbinger
	{
		units[] = {"HiddenIsles_Donator_HarbingerSkinnyJeans"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","Skinny_Jeans"};
	};
};
class CfgVehicles
{
	// external base classes
	class Skinny_Jeans_Colorbase;
	class HiddenIsles_Donator_HarbingerSkinnyJeans: Skinny_Jeans_Colorbase
	{
		scope = 2;
		displayName = "Harbinger Skinny Jeans";
		descriptionShort = "[DONATOR ITEM] John Dex Adams";
		itemsCargoSize[] = {6,5};
		itemSize[] = {2,2};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\harbinger\data\skinny_jeans_harbinger.paa","HIRP_Donator\donator\_shared\data\skein_ca.paa","HIRP_Donator\donator\_shared\data\skein2_ca.paa"};
	};
};
