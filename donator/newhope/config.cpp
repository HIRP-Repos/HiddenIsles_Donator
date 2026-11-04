// ----------------------------------------------------------------------
// Donator: newhope  (Hank, Jester, Pillow, Rat, Six, Sweets, New Hope)
// Textures: HiddenIsles_Donator\donator\newhope\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Newhope
	{
		units[] = {"HiddenIsles_Donator_HankFaceMask","HiddenIsles_Donator_JesterFaceMask","HiddenIsles_Donator_PillowFaceMask","HiddenIsles_Donator_RatFaceMask","HiddenIsles_Donator_SixFaceMask","HiddenIsles_Donator_SweetsFaceMask","HiddenIsles_Donator_NewHopeFlag","HiddenIsles_Donator_NewHopeArmband","HiddenIsles_Donator_SweetsDress"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Masks_HalfMask","DZ_Gear_Camping","ACO_Other_Armband","DZ_Characters_Tops"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_HalfMask_Black;
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class NurseDress_White;
	class HiddenIsles_Donator_HankFaceMask: FOG_HalfMask_Black
	{
		scope = 2;
		displayName = "Hank's Face Mask";
		descriptionShort = "[DONATOR ITEM] Hank";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\halfmask_hank.paa"};
	};
	class HiddenIsles_Donator_JesterFaceMask: FOG_HalfMask_Black
	{
		scope = 2;
		displayName = "Jester's Face Mask";
		descriptionShort = "[DONATOR ITEM] Jester";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\halfmask_jester.paa"};
	};
	class HiddenIsles_Donator_PillowFaceMask: FOG_HalfMask_Black
	{
		scope = 2;
		displayName = "Pillow's Face Mask";
		descriptionShort = "[DONATOR ITEM] Pillow";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\halfmask_pillow.paa"};
	};
	class HiddenIsles_Donator_RatFaceMask: FOG_HalfMask_Black
	{
		scope = 2;
		displayName = "Rat's Face Mask";
		descriptionShort = "[DONATOR ITEM] Rat";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\halfmask_rat.paa"};
	};
	class HiddenIsles_Donator_SixFaceMask: FOG_HalfMask_Black
	{
		scope = 2;
		displayName = "Six's Face Mask";
		descriptionShort = "[DONATOR ITEM] Six";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\halfmask_six.paa"};
	};
	class HiddenIsles_Donator_SweetsFaceMask: FOG_HalfMask_Black
	{
		scope = 2;
		displayName = "Sweets' Face Mask";
		descriptionShort = "[DONATOR ITEM] Sweets";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\halfmask_sweets.paa"};
	};
	class HiddenIsles_Donator_NewHopeFlag: Flag_White
	{
		scope = 2;
		displayName = "New Hope Flag";
		descriptionShort = "[DONATOR ITEM] New Hope";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\flag_newhope.paa"};
	};
	class HiddenIsles_Donator_NewHopeArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "New Hope's Armband";
		descriptionShort = "[DONATOR ITEM] New Hope";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\upgradedarmband_newhope.paa"};
	};
	class HiddenIsles_Donator_SweetsDress: NurseDress_White
	{
		scope = 2;
		displayName = "Sweets Dress";
		descriptionShort = "[DONATOR ITEM] Sweets";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\newhope\data\sweetsnursedress.paa","HiddenIsles_Donator\donator\newhope\data\sweetsnursedress.paa","HiddenIsles_Donator\donator\newhope\data\sweetsnursedress.paa"};
	};
};
