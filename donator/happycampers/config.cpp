// ----------------------------------------------------------------------
// Donator: happycampers  (Happy Campers / Lo)
// Textures: HIRP_Donator\donator\happycampers\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Happycampers
	{
		units[] = {"HiddenIsles_Donator_ZypherBoots_Camper","HiddenIsles_Donator_CronenShirt_Camper","HiddenIsles_Donator_FieldShorts_Camper","HiddenIsles_Donator_RoninHat_Camper","HiddenIsles_Donator_Flag_TheHappyCampers","HiddenIsles_Donator_ALV_UpgradedArmband_Camper","HiddenIsles_Donator_BagLBT1475A_Camper","HiddenIsles_Donator_VestJPC2_Camper"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_MOD_Boots_Zypher","FOG_Cronen_Shirt_Shit","FOG_MOD_Pants_FieldShorts","FOG_Ronin_Hat_Stuff","DZ_Gear_Camping","ACO_Other_Armband","FOG_Characters_Backpacks_LBT1475A","FOG_MOD_Vest_JPC2"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Zypher_Boots_Base;
	class FOG_Cronen_Shirt_ColorBase;
	class FOG_FieldShorts_ColorBase;
	class FOG_Ronin_Hat_ColorBase;
	class Flag_Base;
	class ALV_UpgradedArmband_Colorbase;
	class FOG_Bag_LBT1475A_ColorBase;
	class FOG_Vest_JPC2_ColorBase;
	class HiddenIsles_Donator_ZypherBoots_Camper: FOG_Zypher_Boots_Base
	{
		scope = 2;
		displayName = "Happy Campers Zypher Boots";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\zephyrboots_tan_co.paa","HIRP_Donator\donator\happycampers\data\socks_whiteblue_co.paa"};
	};
	class HiddenIsles_Donator_CronenShirt_Camper: FOG_Cronen_Shirt_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers Cronen Shirt";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\cronen_shirt_bsbl_campkodiak_co.paa",""};
	};
	class HiddenIsles_Donator_FieldShorts_Camper: FOG_FieldShorts_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers Field Shorts";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\fog_fieldpants_thc_co.paa"};
	};
	class HiddenIsles_Donator_RoninHat_Camper: FOG_Ronin_Hat_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers Ronin Hat";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\ronin_hat_campers.paa"};
	};
	class HiddenIsles_Donator_Flag_TheHappyCampers: Flag_Base
	{
		scope = 2;
		displayName = "Happy Campers Flag";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\flag_campkodiak_co.paa"};
	};
	class HiddenIsles_Donator_ALV_UpgradedArmband_Camper: ALV_UpgradedArmband_Colorbase
	{
		scope = 2;
		displayName = "Happy Campers Armband";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\upgradedarmband_campers_co.paa"};
	};
	class HiddenIsles_Donator_BagLBT1475A_Camper: FOG_Bag_LBT1475A_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers LBT1475A Bag";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\lbt1476a_bag_campers_co.paa"};
	};
	class HiddenIsles_Donator_VestJPC2_Camper: FOG_Vest_JPC2_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers JPC2 Vest";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\happycampers\data\jpc_2_vest_camper_co.paa","HIRP_Donator\donator\happycampers\data\jpc_2_misccommsattachments_cb_co.paa"};
	};
};
