// ----------------------------------------------------------------------
// Donator: trackyourtrauma  (trackyourtrauma)
// Textures: HIRP_Donator\donator\trackyourtrauma\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Trackyourtrauma
	{
		units[] = {"FENR_TrackYourTrauma_Hoodie","FENR_TrackYourTrauma_Jeans"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","Shabby_Hoodie","DZ_Characters_Pants"};
	};
};
class CfgVehicles
{
	// external base classes
	class Shabby_Hoodie_ColorBase;
	class Jeans_ColorBase;
	class FENR_TrackYourTrauma_Hoodie: Shabby_Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Track Your Trauma Hoodie";
		descriptionShort = "A heavily worn, dirty and bloodstained hoodie.";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\trackyourtrauma\data\dirty_hoodie_co.paa","HIRP_Donator\donator\_shared\data\skein_grey_ca.paa"};
	};
	class FENR_TrackYourTrauma_Jeans: Jeans_ColorBase
	{
		scope = 2;
		displayName = "Track Your Trauma Jeans";
		descriptionShort = "Grey jeans with grime and dried bloodstains.";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\trackyourtrauma\data\jeans_grey_co.paa","HIRP_Donator\donator\trackyourtrauma\data\jeans_grey_co.paa","HIRP_Donator\donator\trackyourtrauma\data\jeans_grey_co.paa"};
	};
};
