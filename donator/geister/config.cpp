// ----------------------------------------------------------------------
// Donator: geister  (Geister Bataillon / Vicious)
// Textures: HIRP_Donator\donator\geister\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Geister
	{
		units[] = {"HiddenIsles_Donator_GeisterbataillonLabCoat"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Tops"};
	};
};
class CfgVehicles
{
	// external base classes
	class LabCoat;
	class HiddenIsles_Donator_GeisterbataillonLabCoat: LabCoat
	{
		scope = 2;
		displayName = "Dr. Neumann's Labcoat";
		descriptionShort = "[DONATOR ITEM] Geister Bataillon / Vicious";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\geister\data\geisterbataillonlabcoat.paa","HIRP_Donator\donator\geister\data\geisterbataillonlabcoat.paa","HIRP_Donator\donator\geister\data\geisterbataillonlabcoat.paa"};
	};
};
