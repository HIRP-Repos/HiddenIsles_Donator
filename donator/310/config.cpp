// ----------------------------------------------------------------------
// Donator: 310  (310)
// Textures: HiddenIsles_Donator\donator\310\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_310
	{
		units[] = {"HiddenIsles_Donator_310th_z_autumn_beret","HiddenIsles_Donator_310th_z_autumn_softcap","HiddenIsles_Donator_310th_Z_Autumn_Pants","HiddenIsles_Donator_310th_Z_Autumn_Coat","HiddenIsles_Donator_310th_McMannCap","HiddenIsles_Donator_310th_McMann_Coat","HiddenIsles_Donator_310th_Jimmy_Cap","HiddenIsles_Donator_FOG_BigPatch_310th_Norway","HiddenIsles_Donator_FOG_SmallPatch_310th_Norway","HiddenIsles_Donator_310th_BDU","HiddenIsles_Donator_310th_pants","HiddenIsles_Donator_310th_custom_armband","HiddenIsles_Donator_310th_upgradedArmband","HiddenIsles_Donator_FOG_BigPatch_310th","HiddenIsles_Donator_FOG_BigPatch_310th_MP","HiddenIsles_Donator_FOG_BigPatch_310th_Unit","HiddenIsles_Donator_FOG_SmallPatch_310th_CO","HiddenIsles_Donator_FOG_SmallPatch_310th_SL","HiddenIsles_Donator_310th_FOG_Vest_AVS_Black","HiddenIsles_Donator_FOG_BigPatch_310th_MED","HiddenIsles_Donator_FOG_SmallPatch_310th_MED","HiddenIsles_Donator_FOG_BigPatch_310th_LOG","HiddenIsles_Donator_FOG_SmallPatch_310th_LOG","HiddenIsles_Donator_310th_Custom_beret_NCO","HiddenIsles_Donator_310th_Custom_Beret","HiddenIsles_Donator_310th_Custom_Beret_Officer","HiddenIsles_Donator_310th_FLAG","HiddenIsles_Donator_310th_Unite_FLAG","HiddenIsles_Donator_310th_DOA_FLAG","HiddenIsles_Donator_310th_General_FLAG","HiddenIsles_Donator_Custom_Berret_310th_CROW","HiddenIsles_Donator_310th_CROW_Jacket","HiddenIsles_Donator_310th_CROW_Pants","HiddenIsles_Donator_310th_Crow_gasmask","HiddenIsles_Donator_FOG_BigPatch_310th_CROW","HiddenIsles_Donator_FOG_SmallPatch_310th_CROW","HiddenIsles_Donator_FOG_BigPatch_310th_CID","HiddenIsles_Donator_FOG_BigPatch_310th_SRT","HiddenIsles_Donator_FOG_SmallPatch_310th_SRT","HiddenIsles_Donator_310th_CJVest","HiddenIsles_Donator_310th_CJSmartJacket","HiddenIsles_Donator_310th_CJSmartPants","HiddenIsles_Donator_310th_310CIDJacket","HiddenIsles_Donator_310th_CJTie","HiddenIsles_Donator_310th_CJTie_red","HiddenIsles_Donator_310th_CJSmartJacket_black","HiddenIsles_Donator_310th_CJSmartPants_Black","HiddenIsles_Donator_FOG_BigPatch_310th_ONI","HiddenIsles_Donator_FOG_SmallPatch_310th_ONI","HiddenIsles_Donator_310th_ONI_FLAG","HiddenIsles_Donator_310th_Custom_Beret_CID","HiddenIsles_Donator_310th_softcap","HiddenIsles_Donator_FOGR_Pants_FRACU_310","HiddenIsles_Donator_FOGR_UFP_Pants_310_v2","HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310","HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_BG","HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_CSM","HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_CPT","HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_LTC","HiddenIsles_Donator_WinterMilitaryCoat_310","HiddenIsles_Donator_WinterMilitaryCoat_310_autumn"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Headgear","FOG_MOD_SoftCap","DZ_Characters_Pants","Wool_GreatCoat","FOG_Data_Patches","DZ_Characters_Tops","ACO_Lower_Pants","ACO_Other_Armband","FOG_Vest_AVS_stuff","DZ_Gear_Camping","DZ_Characters_Masks","FOG_MOD_Vest_JPC2","ACO_Upper_Jackets","ACO_Headgear_Scarves","FOG_Pants_FRACU","FOG_UFP_Pants_Shit","FOG_Shirts_FRACU_Top"};
	};
};
class CfgVehicles
{
	// external base classes
	class MilitaryBeret_Red;
	class FOG_SoftCap_MC;
	class NavyUniformPants;
	class Wool_Greatcoat_Navy;
	class FOG_Big_Patch_Base;
	class FOG_Small_Patch_Base;
	class BDUJacket;
	class ALV_Jeans_ColorBase_Kneepads;
	class Armband_ColorBase;
	class ALV_UpgradedArmband_Black;
	class FOG_Vest_AVS_Base;
	class Flag_Base;
	class ALV_HunterPants_Kneepads_Black;
	class AirborneMask;
	class FOG_Vest_JPC2_Black;
	class ALV_TweedJacket_Grey;
	class ALV_SmartPants_Grey;
	class PoliceJacket;
	class ALV_Tie_Black;
	class FOG_Pants_FRACU_ColorBase;
	class FOG_UFP_Pants_ColorBase;
	class FOG_Shirt_FRACU_Top_ColorBase;
	class WinterMilitaryCoat_ColorBase;
	class HiddenIsles_Donator_310th_z_autumn_beret: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "Autumn Beret";
		descriptionShort = "[DONATOR ITEM] 310 - Black military beret with a blue flash... bearing a silver Colonel's eagle. Tag inside says 'Z, Autumn'.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\autumn\z_autumn_v2.paa"};
	};
	class HiddenIsles_Donator_310th_z_autumn_softcap: FOG_SoftCap_MC
	{
		scope = 2;
		displayName = "Autumn's Patrol Cap";
		descriptionShort = "[DONATOR ITEM] 310 - A weathered patrol cap bearing the single star of a brigadier general, with 'AUTUMN' stitched across the back like a final reminder that the old Army still stands";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\autumn\softcap_autumn.paa"};
	};
	class HiddenIsles_Donator_310th_Z_Autumn_Pants: NavyUniformPants
	{
		scope = 2;
		displayName = "Z Autumn Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A Pristine Army Service Uniform set of Slacks";
		itemsCargoSize[] = {6,5};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\autumn\z_autumn_pants_co.paa"};
	};
	class HiddenIsles_Donator_310th_Z_Autumn_Coat: Wool_Greatcoat_Navy
	{
		scope = 2;
		displayName = "Z Autumn's Coat";
		descriptionShort = "[DONATOR ITEM] 310 - A Black modified great coat with the Insignia of the Military Police General on it";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\autumn\z_autumn_coat_co.paa"};
	};
	class HiddenIsles_Donator_310th_McMannCap: FOG_SoftCap_MC
	{
		scope = 2;
		displayName = "Tyler McMann's Cap";
		descriptionShort = "[DONATOR ITEM] 310 - A weathered patrol cap";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\mcmann\softcap_mcmann.paa"};
	};
	class HiddenIsles_Donator_310th_McMann_Coat: Wool_Greatcoat_Navy
	{
		scope = 2;
		displayName = "Tyler McMann's Coat";
		descriptionShort = "[DONATOR ITEM] 310 - A Black modified great coat with the Insignia of the Military Police on it";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\mcmann\mcmann_coat.paa","HiddenIsles_Donator\donator\310\data\mcmann\mcmann_coat.paa"};
	};
	class HiddenIsles_Donator_310th_Jimmy_Cap: FOG_SoftCap_MC
	{
		scope = 2;
		displayName = "CSM. Jimmy Caldwell's Cap";
		descriptionShort = "[DONATOR ITEM] 310 - Jimmy Caldwell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\jimmy\softcap_caldwell.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_Norway: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Norway's Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch worn by Norway of the 310th";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\norway\bigpatch_fog_norway_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_Norway: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Norway's Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch worn by Norway of the 310th";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\norway\fog_small_patch_norway_co.paa"};
	};
	class HiddenIsles_Donator_310th_BDU: BDUJacket
	{
		scope = 2;
		displayName = "310th MP BDU";
		descriptionShort = "[DONATOR ITEM] 310 - A Jacket with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		heatIsolation = 0.9;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\310th_jacket_co.paa"};
	};
	class HiddenIsles_Donator_310th_pants: ALV_Jeans_ColorBase_Kneepads
	{
		scope = 2;
		displayName = "310th MP Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A pair of pants worn by the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		itemsCargoSize[] = {6,5};
		heatIsolation = 0.9;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\310th_pants_co.paa"};
	};
	class HiddenIsles_Donator_310th_custom_armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "310th Armband";
		descriptionShort = "[DONATOR ITEM] 310 - An Armband worn by the 310th Military Police Brigade, a unit of the United States Army. On the inside tag it reads, Property of 310th Military Police Brigade, United States Department of the Army.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\310th_upgradedarmband_co.paa"};
	};
	class HiddenIsles_Donator_310th_upgradedArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "310th Upgraded Armband";
		descriptionShort = "[DONATOR ITEM] 310 - An Armband worn by the 310th Military Police Brigade, a unit of the United States Army. On the inside tag it reads, Property of 310th Military Police Brigade, United States Department of the Army.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\upgradedarmband_310th.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th Flag Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique flag belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\bigpatch_fog_310th_flag_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_MP: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th MP Flag Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique flag belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\bigpatch_fog_310th_mp_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_Unit: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th Unit Flag Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique flag belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\bigpatch_fog_310th_unite_flag_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_CO: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th CO Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the letter CO belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\co_fog_small_patch_co_template.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_SL: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th SL Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the letter SL belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\sl_fog_small_patch_co_template.paa"};
	};
	class HiddenIsles_Donator_310th_FOG_Vest_AVS_Black: FOG_Vest_AVS_Base
	{
		scope = 2;
		displayName = "310th Plate Carrier";
		descriptionShort = "[DONATOR ITEM] 310 - Black AVS plate carrier in serviceable condition, bearing a Military Police badge prominently on the chest for identification and authority. Simple, functional, and mission-ready.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\310th_avs_co.paa","HiddenIsles_Donator\donator\310\data\clothing\310th_avs_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_MED: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th MED Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Medical insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\bigpatch_fog_med_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_MED: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th MED Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Medical insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\fog_small_patch_med_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_LOG: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th LOG Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Logistics insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\bigpatch_fog_log_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_LOG: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th LOG Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Logistics insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\fog_small_patch_log_co.paa"};
	};
	class HiddenIsles_Donator_310th_Custom_beret_NCO: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "310th Green beret";
		descriptionShort = "[DONATOR ITEM] 310 - Green military beret for the 310th";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\310th_militaryberet_green_co.paa"};
	};
	class HiddenIsles_Donator_310th_Custom_Beret: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "310th Black Beret";
		descriptionShort = "[DONATOR ITEM] 310 - Black military beret for the 310th";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\310th_beret_black_co.paa"};
	};
	class HiddenIsles_Donator_310th_Custom_Beret_Officer: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "310th Red Beret";
		descriptionShort = "[DONATOR ITEM] 310 - Red military beret for the 310th";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\clothing\310th_beret_red_co.paa"};
	};
	class HiddenIsles_Donator_310th_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th Flag";
		descriptionShort = "[DONATOR ITEM] 310 - The Flag of 310th";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\flags\310tn_flag_co.paa"};
	};
	class HiddenIsles_Donator_310th_Unite_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th Unit Flag";
		descriptionShort = "[DONATOR ITEM] 310 - The Unit Flag of the 310th";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\flags\310tn_unite_flag_co.paa"};
	};
	class HiddenIsles_Donator_310th_DOA_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th Department of the Army";
		descriptionShort = "[DONATOR ITEM] 310 - The Flag of the department of the Army";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cid\310tn_cid_1_co.paa"};
	};
	class HiddenIsles_Donator_310th_General_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th One Star General Flag";
		descriptionShort = "[DONATOR ITEM] 310 - A red command flag bearing the single white star of a brigadier general, flown as a quiet reminder that the Army's authority still remains along the coast";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cid\310tn_cid_2_co.paa"};
	};
	class HiddenIsles_Donator_Custom_Berret_310th_CROW: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "C.R.O.W Beret";
		descriptionShort = "[DONATOR ITEM] 310 - A beret with unique insignia belonging to [Redacted] Army Unit";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\crow\310th_militaryberet_crow_co.paa"};
	};
	class HiddenIsles_Donator_310th_CROW_Jacket: BDUJacket
	{
		scope = 2;
		displayName = "C.R.O.W Jacket";
		descriptionShort = "[DONATOR ITEM] 310 - A jacket with unique insignia belonging to a [Redacted] Army Unit";
		heatIsolation = 0.9;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\crow\crow_jacket_co.paa"};
	};
	class HiddenIsles_Donator_310th_CROW_Pants: ALV_HunterPants_Kneepads_Black
	{
		scope = 2;
		displayName = "C.R.O.W. Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A pair of pants worn by a [Redacted] Army Unit";
		heatIsolation = 0.9;
		itemsCargoSize[] = {6,5};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\crow\crow_pants_co.paa"};
	};
	class HiddenIsles_Donator_310th_Crow_gasmask: AirborneMask
	{
		scope = 2;
		displayName = "C.R.O.W Gas Mask";
		descriptionShort = "[DONATOR ITEM] 310 - A unique gas mask belonging to a [Redacted] Army Unit";
		noHelmet = 0;
		hiddenSelectionsTextures[] = {"dz\characters\masks\data\airborne_mask_co.paa","dz\characters\masks\data\airborne_mask_co.paa","dz\characters\masks\data\airborne_mask_co.paa","dz\characters\masks\data\gp5gasmask_white_co.paa","HiddenIsles_Donator\donator\310\data\crow\crow_glass_ca.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"dz\characters\masks\data\airborne_mask.rvmat","dz\characters\masks\data\airborne_mask_glass.rvmat","dz\characters\masks\data\gp5gasmask.rvmat"}},{0.7,{}},{0.5,{"dz\characters\masks\data\airborne_mask_damage.rvmat","dz\characters\masks\data\airborne_mask_glass.rvmat","dz\characters\masks\data\gp5gasmask_damage.rvmat"}},{0.3,{}},{0,{"dz\characters\masks\data\airborne_mask_destruct.rvmat","dz\characters\masks\data\airborne_mask_glass.rvmat","dz\characters\masks\data\gp5gasmask_destruct.rvmat"}}};
				};
			};
		};
		class Protection
		{
			biological = 1;
		};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_CROW: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Crow Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique insignia belonging to [Redacted] Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\crow\bigpatch_fog_crow_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_CROW: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th CROW Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique insignia belonging to [Redacted] Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\crow\fog_small_patch_crow_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_CID: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "CID Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - 310th Criminal Investigation Division patch";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cid\bigpatch_fog_cid_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_SRT: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th SRT Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army SRT insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\srt\bigpatch_fog_srt_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_SRT: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th SRT Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army SRT insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\srt\small_fog_patch_srt_co.paa"};
	};
	class HiddenIsles_Donator_310th_CJVest: FOG_Vest_JPC2_Black
	{
		scope = 2;
		displayName = "CJ's JPC Vest";
		descriptionShort = "[DONATOR ITEM] 310 - A vest worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\jpc_2_vest_cj.paa","HiddenIsles_Donator\donator\310\data\cj\jpc_2_vest_cj.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartJacket: ALV_TweedJacket_Grey
	{
		scope = 2;
		displayName = "CJ's Navy Suit Jacket";
		descriptionShort = "[DONATOR ITEM] 310 - A suit jacket worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\smartjacket_cj.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartPants: ALV_SmartPants_Grey
	{
		scope = 2;
		displayName = "CJ's Navy Suit Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A pair of suit pants worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\smartpants_cj.paa","HiddenIsles_Donator\donator\310\data\cj\smartpants_cj.paa"};
	};
	class HiddenIsles_Donator_310th_310CIDJacket: PoliceJacket
	{
		scope = 2;
		displayName = "310th CID Jacket";
		descriptionShort = "[DONATOR ITEM] 310 - A jacket worn by the CID department of the 310th";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\310th_cid_jacket.paa","HiddenIsles_Donator\donator\310\data\cj\310th_cid_jacket.paa","HiddenIsles_Donator\donator\310\data\cj\310th_cid_jacket.paa"};
	};
	class HiddenIsles_Donator_310th_CJTie: ALV_Tie_Black
	{
		scope = 2;
		displayName = "CJ's Tie";
		descriptionShort = "[DONATOR ITEM] 310 - A tie worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\tie_cj.paa"};
	};
	class HiddenIsles_Donator_310th_CJTie_red: ALV_Tie_Black
	{
		scope = 2;
		displayName = "CJ's Tie";
		descriptionShort = "[DONATOR ITEM] 310 - A tie worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\tie_cj_red.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartJacket_black: ALV_TweedJacket_Grey
	{
		scope = 2;
		displayName = "CJ's Black Suit Jacket";
		descriptionShort = "[DONATOR ITEM] 310 - A suit jacket worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\310th_smartjacket_cj_black_co.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartPants_Black: ALV_SmartPants_Grey
	{
		scope = 2;
		displayName = "CJ's Black Suit Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A pair of suit pants worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\smartpants_cj_black_co.paa","HiddenIsles_Donator\donator\310\data\cj\smartpants_cj_black_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_ONI: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "ONI Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the ONI insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\bigpatch_fog_oni_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_ONI: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th ONI Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the ONI insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cj\fog_small_patch_oni_co.paa"};
	};
	class HiddenIsles_Donator_310th_ONI_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "ONI flag";
		descriptionShort = "[DONATOR ITEM] 310 - Flag of the ONI";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\cid\oni_flag_co.paa"};
	};
	class HiddenIsles_Donator_310th_Custom_Beret_CID: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "CID Beret";
		descriptionShort = "[DONATOR ITEM] 310 - Black military beret with a stitched patch of Criminal Investigations Division";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\310th_beret_black_cid_co.paa"};
	};
	class HiddenIsles_Donator_310th_softcap: FOG_SoftCap_MC
	{
		scope = 2;
		displayName = "310th's Patrol Cap";
		descriptionShort = "[DONATOR ITEM] 310 - A weathered patrol cap bearing the 310th's blue patch";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\softcap_mc_310th_co.paa"};
	};
	class HiddenIsles_Donator_FOGR_Pants_FRACU_310: FOG_Pants_FRACU_ColorBase
	{
		scope = 2;
		displayName = "310th Brigadier General's USGI FRACU Trousers";
		descriptionShort = "[DONATOR ITEM] 310";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\fracu_trousers_mc_310_autumn_co.paa"};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Pants\FRACU_Pants\data\FRACU_Pants.rvmat"};
	};
	class HiddenIsles_Donator_FOGR_UFP_Pants_310_v2: FOG_UFP_Pants_ColorBase
	{
		scope = 2;
		displayName = "310th's Urban Fighter Pants v.2";
		descriptionShort = "[DONATOR ITEM] 310";
		hiddenSelectionsTextures[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa","HiddenIsles_Donator\donator\310\data\goblin\310_new_camo_pants.paa"};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat"};
	};
	class HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope = 2;
		displayName = "310th soldier's USGI FRACU Top";
		descriptionShort = "[DONATOR ITEM] 310 - A uniform top with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\fracu_blouse_mc_310_co_v2.paa","",""};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat","",""};
	};
	class HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_BG: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope = 2;
		displayName = "310th Brigadier General's USGI FRACU Top";
		descriptionShort = "[DONATOR ITEM] 310 - A uniform top with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\fracu_blouse_mc_310_autumn_co_v2.paa","",""};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat","",""};
	};
	class HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_CSM: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope = 2;
		displayName = "310th Command Sergeant Major's USGI FRACU Top";
		descriptionShort = "[DONATOR ITEM] 310 - A uniform top with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\fracu_blouse_mc_310_caldwell_co_v2.paa","",""};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat","",""};
	};
	class HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_CPT: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope = 2;
		displayName = "310th Captain's USGI FRACU Top";
		descriptionShort = "[DONATOR ITEM] 310 - A uniform top with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\fracu_blouse_mc_310_loss_co.paa","",""};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat","",""};
	};
	class HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_LTC: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope = 2;
		displayName = "310th Lieutenant Colonel's USGI FRACU Top";
		descriptionShort = "[DONATOR ITEM] 310 - A uniform top with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\fracu_blouse_mc_310_mcmann_co_v2.paa","",""};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Shirts\FRACU_Top\data\FRACU_Top.rvmat","",""};
	};
	class HiddenIsles_Donator_WinterMilitaryCoat_310: WinterMilitaryCoat_ColorBase
	{
		scope = 2;
		displayName = "310th Winter Coat";
		descriptionShort = "[DONATOR ITEM] 310 - A military winter coat with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		itemsCargoSize[] = {6,5};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\wintermilitarycoat_grey_310_co.paa","HiddenIsles_Donator\donator\310\data\goblin\wintermilitarycoat_grey_310_co.paa","HiddenIsles_Donator\donator\310\data\goblin\wintermilitarycoat_grey_310_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\tops\data\wintermilitarycoat.rvmat","dz\characters\tops\data\wintermilitarycoat.rvmat","dz\characters\tops\data\wintermilitarycoat.rvmat"};
	};
	class HiddenIsles_Donator_WinterMilitaryCoat_310_autumn: WinterMilitaryCoat_ColorBase
	{
		scope = 2;
		displayName = "310th Winter Brigadier General's Coat";
		descriptionShort = "[DONATOR ITEM] 310 - A military winter coat with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		itemsCargoSize[] = {6,5};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin\wintermilitarycoat_brown_310_co.paa","HiddenIsles_Donator\donator\310\data\goblin\wintermilitarycoat_brown_310_co.paa","HiddenIsles_Donator\donator\310\data\goblin\wintermilitarycoat_brown_310_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\tops\data\wintermilitarycoat.rvmat","dz\characters\tops\data\wintermilitarycoat.rvmat","dz\characters\tops\data\wintermilitarycoat.rvmat"};
	};
};
