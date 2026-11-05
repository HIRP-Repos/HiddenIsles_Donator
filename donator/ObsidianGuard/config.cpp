// ----------------------------------------------------------------------
// Donator: obsidianguard  (Obsidian Guard)
// Textures: HiddenIsles_Donator\donator\obsidianguard\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Obsidianguard
	{
		units[] = {"HiddenIsles_Donator_ObsidianArmband","HiddenIsles_Donator_ObsidianFlag"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","DZ_Gear_Camping"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class Flag_White;
	class FOG_Helmet_AJs_FAST_SF_Base;
	class FOG_TV110T_ColorBase;
	class FOG_Shirt_ArcticJacket_ColorBase;
	class FOG_ArcticPants_ColorBase;
	class FOG_Bag_BlackJack_ColorBase;
	class FOG_Arcteryx_Balaclava_ColorBase;
	class MilitaryBoots_ColorBase;
	
	class HiddenIsles_Donator_ObsidianArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Obsidian Armband";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\obsidianguard\data\armband_obsidian_co.paa"};
		hiddenSelectionsMaterial[] = {"HiddenIsles_Donator\donator\obsidianguard\data\armband_obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianFlag: Flag_White
	{
		scope = 2;
		displayName = "Obsidian Flag";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\obsidianguard\data\flag_obsidian_co.paa"};
	};

	class HiddenIsles_Donator_ObsidianHeadgear: FOG_Helmet_AJs_FAST_SF_Base
	{
		scope = 2;
		displayName = "Obsidian Helmet";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\SF_Obsidian_co.paa","HiddenIsles_Donator\donator\ObsidianGuard\data\SF_Mount_Obsidian_co.paa","HiddenIsles_Donator\donator\ObsidianGuard\data\SF_Rail_Obsidian_co.paa","HiddenIsles_Donator\donator\ObsidianGuard\data\airframe_Obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianVest: FOG_TV110T_ColorBase
	{
		scope = 2;
		displayName = "Obsidian Vest";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\FOG_TV110_Obsidian_co.paa","HiddenIsles_Donator\donator\ObsidianGuard\data\Radio_PTT_Obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianShirt: FOG_Shirt_ArcticJacket_ColorBase
	{
		scope = 2;
		displayName = "Obsidian Shirt";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\FOG_ArcticJacket_Obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianPants: FOG_ArcticPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		displayName = "Obsidian Pants";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\ArcticPants_Obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianBag: FOG_Bag_BlackJack_ColorBase
	{
		scope = 2;
		displayName = "Obsidian Bag";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\BlackJack_Obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianMask: FOG_Arcteryx_Balaclava_ColorBase
	{
		scope = 2;
		displayName = "Obsidian Mask";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\arc_bala_Obsidian_co.paa"};
	};
	class HiddenIsles_Donator_ObsidianBoots: MilitaryBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		displayName = "Obsidian Boots";
		descriptionShort = "[DONATOR ITEM] Obsidian Guard";
		hiddenSelectionsTextures[]= {"HiddenIsles_Donator\donator\ObsidianGuard\data\MilitaryBoots_Obsidian_co.paa","HiddenIsles_Donator\donator\ObsidianGuard\data\MilitaryBoots_Obsidian_co.paa","HiddenIsles_Donator\donator\ObsidianGuard\data\MilitaryBoots_Obsidian_co.paa"};
	};
};
