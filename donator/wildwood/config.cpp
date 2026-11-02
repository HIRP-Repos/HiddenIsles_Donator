// ----------------------------------------------------------------------
// Donator: wildwood  (Wildwood)
// Textures: HIRP_Donator\donator\wildwood\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Wildwood
	{
		units[] = {"HiddenIsles_Donator_WildwoodArmband","HiddenIsles_Donator_WildwoodFlag","HiddenIsles_Donator_WildwoodHeadgear","HiddenIsles_Donator_WildwoodBag_6ShBagT","HiddenIsles_Donator_WildwoodBag_LBT1475A","HiddenIsles_Donator_WildwoodMask","HiddenIsles_Donator_WildwoodJacket","HiddenIsles_Donator_WildwoodShoes","HiddenIsles_Donator_WildwoodGloves"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","DZ_Gear_Camping","ACO_Headgear_Headgear","FOG_Bag_6SHTBag","FOG_Characters_Backpacks_LBT1475A","FOG_Masks_HalfMask","FOG_Jacket_SoftShell_Shit","FOG_MOD_Shoes_Lerch","FOG_Tactical_Fingerless_Gloves_stuff"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class Flag_White;
	class ALV_Beanie_Colorbase;
	class FOG_Bag_6ShTBag_ColorBase;
	class FOG_Bag_LBT1475A_ColorBase;
	class FOG_HalfMask_ColorBase;
	class FOG_Jacket_SoftShell_ColorBase;
	class FOG_Lerch_Boots_ColorBase;
	class FOG_Tactical_Fingerless_Gloves_ColorBase;
	class HiddenIsles_Donator_WildwoodArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Wildwood Armband";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\upgradedarmband_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodFlag: Flag_White
	{
		scope = 2;
		displayName = "Wildwood Flag";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\flag_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodHeadgear: ALV_Beanie_Colorbase
	{
		scope = 2;
		displayName = "Wildwood Cap";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		headSelectionsToHide[] = {"Clipping_baseballcap"};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\alv_beanie_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodBag_6ShBagT: FOG_Bag_6ShTBag_ColorBase
	{
		scope = 2;
		displayName = "Wildwood 6ShBagT Bag";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\lbt_black_co_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodBag_LBT1475A: FOG_Bag_LBT1475A_ColorBase
	{
		scope = 2;
		displayName = "Wildwood LBT1475A Bag";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\lbt_black_co_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodMask: FOG_HalfMask_ColorBase
	{
		scope = 2;
		displayName = "Wildwood Mask";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\halfmask_black_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodJacket: FOG_Jacket_SoftShell_ColorBase
	{
		scope = 2;
		displayName = "Wildwood Jacket";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\fog_softshell_blk_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodShoes: FOG_Lerch_Boots_ColorBase
	{
		scope = 2;
		displayName = "Wildwood Boots";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\lerchboots_black_wildwood.paa"};
	};
	class HiddenIsles_Donator_WildwoodGloves: FOG_Tactical_Fingerless_Gloves_ColorBase
	{
		scope = 2;
		displayName = "Wildwood Gloves";
		descriptionShort = "[DONATOR ITEM] Wildwood";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\wildwood\data\fingerless_tactical_black_wildwood.paa",""};
	};
};
