// ----------------------------------------------------------------------
// Donator: savior  (Savior)
// Textures: HiddenIsles_Donator\donator\savior\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Savior
	{
		units[] = {"HiddenIsles_Donator_SaviorUpgradedArmband","HiddenIsles_Donator_SaviorFlag","HiddenIsles_Donator_SaviorArmband","HiddenIsles_Donator_SaviorVest","HiddenIsles_Donator_SaviorShirt","HiddenIsles_Donator_SaviorPants","HiddenIsles_Donator_SaviorHeadgear","HiddenIsles_Donator_SaviorMask","HiddenIsles_Donator_SaviorGloves","HiddenIsles_Donator_SaviorShoes","HiddenIsles_Donator_SaviorBag"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","DZ_Gear_Camping","DZ_Characters_Tops","FOG_MOD_Vest_Plateframe","FOG_UFJ_Shirt_Shit","FOG_MOD_Pants_L9_Patagonia","FOG_Helmet_Exfil_shit","FOG_Ghost_Mask_New_Stuff","FOG_Gear_Hands_GunGloves","DZ_Characters_Shoes","FOG_Bag_6SHTBag"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class Flag_Base;
	class Armband_ColorBase;
	class FOG_Vest_Plateframe_ColorBase;
	class FOG_UFJ_Shirt_ColorBase;
	class FOG_L9_PatagoniaPants_ColorBase;
	class FOG_Helmet_Exfil_Base;
	class FOG_Ghost_Mask_New_ColorBase;
	class FOG_GunGloves_ColorBase;
	class JungleBoots_ColorBase;
	class FOG_Bag_6ShTBag_ColorBase;
	class HiddenIsles_Donator_SaviorUpgradedArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Savior Upgraded Armband";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\upgradedarmband_saviors.paa"};
	};
	class HiddenIsles_Donator_SaviorFlag: Flag_Base
	{
		scope = 2;
		displayName = "Savior Flag";
		descriptionShort = "[DONATOR ITEM] Savior";
		color = "Savior";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\flag_saviors.paa"};
	};
	class HiddenIsles_Donator_SaviorArmband: Armband_ColorBase
	{
		scope = 2;
		displayName = "Savior Armband";
		descriptionShort = "[DONATOR ITEM] Savior";
		visibilityModifier = 0.94999999;
		color = "Savior";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","HiddenIsles_Donator\donator\savior\data\flag_saviors.paa"};
	};
	class HiddenIsles_Donator_SaviorVest: FOG_Vest_Plateframe_ColorBase
	{
		scope = 2;
		displayName = "Savior Vest";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelections[] = {"camo","camo_comms"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\plateframe_savior_co.paa","HiddenIsles_Donator\donator\savior\data\plateframecomms_savior_co.paa"};
	};
	class HiddenIsles_Donator_SaviorShirt: FOG_UFJ_Shirt_ColorBase
	{
		scope = 2;
		displayName = "Savior Shirt";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelections[] = {"camo_base","camo_hood","camo_pads"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\ufj_savior_co.paa","FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa","FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_Black_co.paa"};
	};
	class HiddenIsles_Donator_SaviorPants: FOG_L9_PatagoniaPants_ColorBase
	{
		scope = 2;
		displayName = "Savior Pants";
		descriptionShort = "[DONATOR ITEM] Savior";
		visibilityModifier = 0.7;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\pants_patagonia_savior_co.paa"};
	};
	class HiddenIsles_Donator_SaviorHeadgear: FOG_Helmet_Exfil_Base
	{
		scope = 2;
		displayName = "Savior HeadGear";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\tw_exfil_savior_co.paa"};
	};
	class HiddenIsles_Donator_SaviorMask: FOG_Ghost_Mask_New_ColorBase
	{
		scope = 2;
		displayName = "Savior Mask";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelections[] = {"camo_balaclava","camo_head","camo_skull"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\balaclava_savior.paa","HiddenIsles_Donator\donator\savior\data\skull_mask_savior.paa","HiddenIsles_Donator\donator\savior\data\skull_mask_savior.paa"};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.rvmat","FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth.rvmat","FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask.rvmat"};
	};
	class HiddenIsles_Donator_SaviorGloves: FOG_GunGloves_ColorBase
	{
		scope = 2;
		displayName = "Savior Gloves";
		descriptionShort = "[DONATOR ITEM] Savior";
		visibilityModifier = 0.8;
		hiddenSelections[] = {"camo","personality"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\gunglove_savior_co.paa"};
	};
	class HiddenIsles_Donator_SaviorShoes: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "Savior Shoes";
		descriptionShort = "[DONATOR ITEM] Savior";
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\jungleboots_savior_co.paa","HiddenIsles_Donator\donator\savior\data\jungleboots_savior_co.paa","HiddenIsles_Donator\donator\savior\data\jungleboots_savior_co.paa"};
	};
	class HiddenIsles_Donator_SaviorBag: FOG_Bag_6ShTBag_ColorBase
	{
		scope = 2;
		displayName = "Savior Bag";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\savior\data\6sh118t_savior_co.paa"};
	};
};
