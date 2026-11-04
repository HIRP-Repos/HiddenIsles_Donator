// ----------------------------------------------------------------------
// Donator: io  (io)
// Textures: HiddenIsles_Donator\donator\io\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Io
	{
		units[] = {"HiddenIsles_IO_Armband","HiddenIsles_Seeker_Mask"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","FOG_Knight_Mask_Stuff"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class FOG_Knight_Mask_Black;
	class HiddenIsles_IO_Armband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Cult of IO Armband";
		descriptionShort = "Official Armband of the followers of IO";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\io\data\upgradedarmband_io.paa"};
	};
	class HiddenIsles_Seeker_Mask: FOG_Knight_Mask_Black
	{
		scope = 2;
		displayName = "Seeker's Mask";
		descriptionShort = "The Skull mask worn by The Seeker, one of IO's Chosen";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\io\data\fog_knight_mask_black_cult_co.paa"};
	};
};
