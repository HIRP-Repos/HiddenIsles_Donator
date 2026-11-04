// ----------------------------------------------------------------------
// Donator: reaper  (Reaper)
// Textures: HiddenIsles_Donator\donator\reaper\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Reaper
	{
		units[] = {"HiddenIsles_Donator_ReaperPolo","HiddenIsles_Donator_ReaperMask"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Shirt_Polo_Shit","FOG_Ghost_Mask_New_Stuff"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Shirt_Polo_Blue;
	class FOG_Ghost_Mask_Black;
	class HiddenIsles_Donator_ReaperPolo: FOG_Shirt_Polo_Blue
	{
		scope = 2;
		displayName = "Reaper's Polo Shirt";
		descriptionShort = "[DONATOR ITEM] Reaper";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\reaper\data\polo_reaper.paa","HiddenIsles_Donator\donator\reaper\data\polo_reaper.paa"};
	};
	class HiddenIsles_Donator_ReaperMask: FOG_Ghost_Mask_Black
	{
		scope = 2;
		displayName = "Reaper's Mask";
		descriptionShort = "[DONATOR ITEM] Reaper";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\reaper\data\balaclava_reaper.paa","HiddenIsles_Donator\donator\reaper\data\skull_mask_reaper.paa","HiddenIsles_Donator\donator\reaper\data\skull_mask_reaper.paa"};
	};
};
