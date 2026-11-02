// ----------------------------------------------------------------------
// Donator: norway  (Torvald)
// Textures: HIRP_Donator\donator\norway\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Norway
	{
		units[] = {"Torvald_Ghost_Mask","Torvald_Pants_Crye_G3","Torvald_G3_Hoodie","Torvald_WinterGloves","Torvald_MRB_Belt","Torvald_Pouch_Esstac","Torvald_Pouch_SingleMag","Torvald_Pouch_Dump","Torvald_SAS_Holster","Torvald_Pouch_LBT","Torvald_Operator_Boots","Torvald_Panel_FerroBanger","Torvald_Pouch_Tall_Spiritus","Torvald_Pouch_Mag_Kangaroo","Torvald_Glasses_ESS","Torvald_Vest_Thor","Torvald_Vest_JPC2","Torvald_BlackJack_Backpack","Torvald_GhillieBushrag_BearBrown","Torvald_Small_Patch","Torvald_Large_Patch"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Ghost_Mask_New_Stuff","FOG_Pants_Crye_G3_Shit","FOG_MOD_Shirts_G3Hoodie","FOG_Gear_Hands_WinterGloves","FOG_MRB_Belt","FOG_Ronin_Belt_Shit","FOG_Operator_Boots_shit","FOG_MOD_Vests_Accessories","FOG_MOD_Glasses_ESS","FOG_Vest_Thor","FOG_MOD_Vest_JPC2","FOG_Bag_BlackJack","DZ_Characters_Backpacks","FOG_Data_Patches"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Ghost_Mask_New_ColorBase;
	class FOG_Pants_Crye_G3_Black;
	class FOG_G3_Hoodie_Black;
	class FOG_WinterGloves_Black;
	class FOG_MRB_Belt_Black;
	class FOG_Pouch_Esstac_Black;
	class FOG_Pouch_SingleMag_Black;
	class FOG_Pouch_Dump_Black;
	class FOG_SAS_Holster_Black;
	class FOG_Pouch_LBT_Black;
	class FOG_Operator_Boots_Black;
	class FOG_Panel_FerroBanger_Black;
	class FOG_Pouch_Tall_Spiritus_Black;
	class FOG_Pouch_Mag_Kangaroo_Black;
	class FOG_Glasses_ESS_Black;
	class FOG_Vest_Thor_Black;
	class FOG_Vest_JPC2_Black;
	class FOG_Bag_BlackJack_Black;
	class GhillieBushrag_Tan;
	class FOG_Small_Patch_Base;
	class FOG_Big_Patch_Base;
	class Torvald_Ghost_Mask: FOG_Ghost_Mask_New_ColorBase
	{
		scope = 2;
		displayName = "Torvald Ghost Mask";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\balaclava_black_co.paa","HIRP_Donator\donator\norway\data\torvald_skull_mask_co.paa","HIRP_Donator\donator\norway\data\torvald_skull_mask_co.paa"};
	};
	class Torvald_Pants_Crye_G3: FOG_Pants_Crye_G3_Black
	{
		scope = 2;
		displayName = "Torvald Crye G3 Combat Pants";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_crye_g3_belt_co.paa","HIRP_Donator\donator\norway\data\torvald_crye_g3_pants_co.paa"};
	};
	class Torvald_G3_Hoodie: FOG_G3_Hoodie_Black
	{
		scope = 2;
		displayName = "Torvald G3 Combat Hoodie";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_g3_combat_hoodie_co.paa","FOG_MOD\Clothes\Shirts\FOG_Hoodie\data\FOG_Hoodie_black_co.paa"};
	};
	class Torvald_WinterGloves: FOG_WinterGloves_Black
	{
		scope = 2;
		displayName = "Torvald Winter Combat Gloves";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_winter_gloves_co.paa"};
	};
	class Torvald_MRB_Belt: FOG_MRB_Belt_Black
	{
		scope = 2;
		displayName = "Torvald MRB Battle Belt";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_mrb_battle_belt_co.paa"};
	};
	class Torvald_Pouch_Esstac: FOG_Pouch_Esstac_Black
	{
		scope = 2;
		displayName = "Torvald Esstac Magazine Pouch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_esstac_pouch_co.paa"};
	};
	class Torvald_Pouch_SingleMag: FOG_Pouch_SingleMag_Black
	{
		scope = 2;
		displayName = "Torvald Single Magazine Pouch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_single_mag_pouch_co.paa"};
	};
	class Torvald_Pouch_Dump: FOG_Pouch_Dump_Black
	{
		scope = 2;
		displayName = "Torvald Dump Pouch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_dump_pouch_co.paa"};
	};
	class Torvald_SAS_Holster: FOG_SAS_Holster_Black
	{
		scope = 2;
		displayName = "Torvald SAS Pistol Holster";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_sas_pistol_holster_co.paa","FOG_MOD\Gear\Belts\FOG_Ronin_Belt\Data\holster_blk_co.paa"};
	};
	class Torvald_Pouch_LBT: FOG_Pouch_LBT_Black
	{
		scope = 2;
		displayName = "Torvald LBT Medical Pouch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_lbt_medical_pouch_co.paa"};
	};
	class Torvald_Operator_Boots: FOG_Operator_Boots_Black
	{
		scope = 2;
		displayName = "Torvald Operator Boots";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_operator_boots_co.paa"};
	};
	class Torvald_Panel_FerroBanger: FOG_Panel_FerroBanger_Black
	{
		scope = 2;
		displayName = "Torvald Ferro Banger Panel";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_ferro_banger_panel_co.paa"};
	};
	class Torvald_Pouch_Tall_Spiritus: FOG_Pouch_Tall_Spiritus_Black
	{
		scope = 2;
		displayName = "Torvald Tall Spiritus Pouch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_spiritus_tall_pouch_co.paa"};
	};
	class Torvald_Pouch_Mag_Kangaroo: FOG_Pouch_Mag_Kangaroo_Black
	{
		scope = 2;
		displayName = "Torvald Kangaroo Magazine Pouch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_kangaroo_mag_pouch_co.paa"};
	};
	class Torvald_Glasses_ESS: FOG_Glasses_ESS_Black
	{
		scope = 2;
		displayName = "Torvald ESS Ballistic Glasses";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_ess_glasses_co.paa"};
	};
	class Torvald_Vest_Thor: FOG_Vest_Thor_Black
	{
		scope = 2;
		displayName = "Torvald Thor Plate Carrier";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_thor_plate_carrier_co.paa","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_Black_co.paa"};
	};
	class Torvald_Vest_JPC2: FOG_Vest_JPC2_Black
	{
		scope = 2;
		displayName = "Torvald JPC 2.0 Plate Carrier";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_jpc2_plate_carrier_co.paa","HIRP_Donator\donator\norway\data\torvald_jpc2_plate_carrier_co.paa"};
	};
	class Torvald_BlackJack_Backpack: FOG_Bag_BlackJack_Black
	{
		scope = 2;
		displayName = "Torvald BlackJack Backpack";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_blackjack_backpack_co.paa"};
	};
	class Torvald_GhillieBushrag_BearBrown: GhillieBushrag_Tan
	{
		scope = 2;
		displayName = "Torvald Bear-Brown Ghillie Bushrag";
		descriptionShort = "[DONATOR ITEM] Torvald";
		inventorySlot[] = {"Armband","Back"};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_ghilliebushrag_bearbrown_co.paa","HIRP_Donator\donator\norway\data\torvald_ghilliebushrag_bearbrown_co.paa","HIRP_Donator\donator\norway\data\torvald_ghilliebushrag_bearbrown_co.paa"};
	};
	class Torvald_Small_Patch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Torvald Small Patch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\torvald_smal_patch_co.paa"};
	};
	class Torvald_Large_Patch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Torvald Large Patch";
		descriptionShort = "[DONATOR ITEM] Torvald";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\norway\data\bigpatch_torvald_co.paa"};
	};
};
