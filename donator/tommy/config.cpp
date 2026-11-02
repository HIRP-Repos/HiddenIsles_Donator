// ----------------------------------------------------------------------
// Donator: tommy  (Tommy)
// Textures: HIRP_Donator\donator\tommy\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Tommy
	{
		units[] = {"HiddenIsles_Donator_TommyMotoHelm","HiddenIsles_Donator_TommyMotoHelm2","HiddenIsles_Donator_TommyJacket","HiddenIsles_Donator_TommyJacketHeavyRiders"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Headgear","FOG_Shirt_UrbanUtilityJacket","FOG_HeavyRiders_Jacket_Shit"};
	};
};
class CfgVehicles
{
	// external base classes
	class DarkMotoHelmet_Black;
	class DarkMotoHelmet_YellowScarred;
	class FOG_Shirt_UrbanUtilityJacket_Black;
	class FOG_HeavyRiders_Jacket_Black;
	class HiddenIsles_Donator_TommyMotoHelm: DarkMotoHelmet_Black
	{
		scope = 2;
		displayName = "Tommy's Helmet";
		descriptionShort = "[DONATOR ITEM] Tommy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\tommy\data\motohelm_tommy.paa","dz\characters\headgear\data\motohelmetvisor_dark_co.paa"};
	};
	class HiddenIsles_Donator_TommyMotoHelm2: DarkMotoHelmet_YellowScarred
	{
		scope = 2;
		displayName = "Tommy's Helmet with Nails";
		descriptionShort = "[DONATOR ITEM] Tommy";
		itemSize[] = {2,2};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\motohelmetvisor_dark_co.paa","dz\characters\headgear\data\motohelmetvisor_scarred_co.paa","HIRP_Donator\donator\tommy\data\motohelm_tommy.paa","HIRP_Donator\donator\tommy\data\motohelm_tommy.paa"};
	};
	class HiddenIsles_Donator_TommyJacket: FOG_Shirt_UrbanUtilityJacket_Black
	{
		scope = 2;
		displayName = "Tommy's Jacket";
		descriptionShort = "[DONATOR ITEM] Tommy";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\tommy\data\urban_utility_jacket_dark_tommy.paa"};
	};
	class HiddenIsles_Donator_TommyJacketHeavyRiders: FOG_HeavyRiders_Jacket_Black
	{
		scope = 2;
		displayName = "Tommy's Heavy Rider Jacket";
		descriptionShort = "[DONATOR ITEM] Tommy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\tommy\data\fog_heavyrider_tommy.paa"};
	};
};
