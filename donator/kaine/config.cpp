// ----------------------------------------------------------------------
// Donator: kaine  (Elias Kaine)
// Textures: HiddenIsles_Donator\donator\kaine\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Kaine
	{
		units[] = {"HiddenIsles_Donator_KaineFlag","HiddenIsles_Donator_kaineBigPatch","HiddenIsles_Donator_kaineSmallPatch","HiddenIsles_Donator_FASTMTKaine","HiddenIsles_Donator_MandableKaine","HiddenIsles_Donator_OspreyKaine","HiddenIsles_Donator_G3ShirtKaine","HiddenIsles_Donator_G3PantsKaine","HiddenIsles_Donator_LBootsKaine","HiddenIsles_Donator_ArcteryxLEAFKaine"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Gear_Camping","FOG_Data_Patches","FOG_Helmet_FASTMT_shit","FOG_Helmet_Accessories_MTMand","FOG_Vest_Osprey_stuff","FOG_Crye_G3_Shirt_Shit","FOG_Pants_Crye_G3_Shit","FOG_MOD_Shoes_Lerch","FOG_Characters_Backpacks_ArcteryxLEAF"};
	};
};
class CfgVehicles
{
	// external base classes
	class Flag_White;
	class FOG_Big_Patch_Base;
	class FOG_Small_Patch_Base;
	class FOG_Helmet_FASTMT_Base;
	class FOG_FastMT_Mandable_Base;
	class FOG_Vest_Osprey_Grey;
	class FOG_Crye_G3_Shirt_Black;
	class FOG_Pants_Crye_G3_Black;
	class FOG_Lerch_Boots_ColorBase;
	class FOG_Bag_ArcteryxLEAF_ColorBase;
	class HiddenIsles_Donator_KaineFlag: Flag_White
	{
		scope = 2;
		displayName = "Iron Ridge Flag";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\flag_kaine.paa"};
	};
	class HiddenIsles_Donator_kaineBigPatch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Iron Ridge Big FOG Patch";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\bigpatch_kaine.paa"};
	};
	class HiddenIsles_Donator_kaineSmallPatch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Iron Ridge Small FOG Patch";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\smallpatch_kaine.paa"};
	};
	class HiddenIsles_Donator_FASTMTKaine: FOG_Helmet_FASTMT_Base
	{
		scope = 2;
		displayName = "Kaine's Fast MT Super HighCut Helmet";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelections[] = {"camo_acc","camo_helmet"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\kaine_fastmt_arcrails_co.paa","HiddenIsles_Donator\donator\kaine\data\kaine_fastmt_helmet_co.paa"};
	};
	class HiddenIsles_Donator_MandableKaine: FOG_FastMT_Mandable_Base
	{
		scope = 2;
		displayName = "Kaine's Fast MT Mandible";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\kaine_fastmt_helmet_man_co.paa"};
	};
	class HiddenIsles_Donator_OspreyKaine: FOG_Vest_Osprey_Grey
	{
		scope = 2;
		displayName = "Kaine's CQC Osprey MK4A";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelections[] = {"camo_radiopouch","camo_vest"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\kaine_radioptt_co.paa","HiddenIsles_Donator\donator\kaine\data\kaine_osprey_co.paa"};
	};
	class HiddenIsles_Donator_G3ShirtKaine: FOG_Crye_G3_Shirt_Black
	{
		scope = 2;
		displayName = "Kaine's Crye G3 Combat Shirt";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelections[] = {"camo","cuffs","personality"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\kaine_g3_combatshirt_co.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_blk_co.paa"};
	};
	class HiddenIsles_Donator_G3PantsKaine: FOG_Pants_Crye_G3_Black
	{
		scope = 2;
		displayName = "Kaine's Crye G3 Combat Pants";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelections[] = {"camo_belt","camo_pants"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\kaine_g3_belt_co.paa","HiddenIsles_Donator\donator\kaine\data\kaine_g3_combatpants_co.paa"};
	};
	class HiddenIsles_Donator_LBootsKaine: FOG_Lerch_Boots_ColorBase
	{
		scope = 2;
		displayName = "Kaine's Lerch Boots";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\kaine_lerchboots_co.paa"};
	};
	class HiddenIsles_Donator_ArcteryxLEAFKaine: FOG_Bag_ArcteryxLEAF_ColorBase
	{
		scope = 2;
		displayName = "Kaine's Arcteryx LEAF Rucksack";
		descriptionShort = "[DONATOR ITEM] Elias Kaine";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\kaine\data\kaine_arcteryx_leaf_co.paa"};
	};
};
