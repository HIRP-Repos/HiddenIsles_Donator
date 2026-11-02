// ----------------------------------------------------------------------
// Donator: meridian  (Meridian)
// Textures: HIRP_Donator\donator\meridian\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Meridian
	{
		units[] = {"HiddenIsles_Donator_MeridianArmband","HiddenIsles_Donator_MeridianFlag","HiddenIsles_Donator_Meridian_Vest_Black","HiddenIsles_Donator_Meridian_Vest_Grey","HiddenIsles_Donator_Meridian_TShirt_Black","HiddenIsles_Donator_Meridian_TShirt_Grey","HiddenIsles_Donator_Meridian_TShirt_White","HiddenIsles_Donator_Meridian_TShirt_Red","HiddenIsles_Donator_Meridian_TShirt_Blue"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","DZ_Gear_Camping","FOG_Vest_MMAC_stuff","FOG_Tshirt_Black_Shit"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class Flag_White;
	class FOG_Vest_MMAC_Base;
	class FOG_Tshirt_ColorBase;
	class HiddenIsles_Donator_MeridianArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Meridian Armband";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\upgradedarmband_meridian.paa"};
	};
	class HiddenIsles_Donator_MeridianFlag: Flag_White
	{
		scope = 2;
		displayName = "Meridian Flag";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\flag_meridian.paa"};
	};
	class HiddenIsles_Donator_Meridian_Vest_Black: FOG_Vest_MMAC_Base
	{
		scope = 2;
		displayName = "Meridian Vest";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\mmac_black_meridian_co.paa","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"};
	};
	class HiddenIsles_Donator_Meridian_Vest_Grey: FOG_Vest_MMAC_Base
	{
		scope = 2;
		displayName = "Meridian Vest";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\mmac_grey_meridian_co.paa","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"};
	};
	class HiddenIsles_Donator_Meridian_TShirt_Black: FOG_Tshirt_ColorBase
	{
		scope = 2;
		displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\fog_tshirt_black_meridian.paa"};
	};
	class HiddenIsles_Donator_Meridian_TShirt_Grey: FOG_Tshirt_ColorBase
	{
		scope = 2;
		displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\fog_tshirt_grey_meridian.paa"};
	};
	class HiddenIsles_Donator_Meridian_TShirt_White: FOG_Tshirt_ColorBase
	{
		scope = 2;
		displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\fog_tshirt_white_meridian.paa"};
	};
	class HiddenIsles_Donator_Meridian_TShirt_Red: FOG_Tshirt_ColorBase
	{
		scope = 2;
		displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\fog_tshirt_red_meridian.paa"};
	};
	class HiddenIsles_Donator_Meridian_TShirt_Blue: FOG_Tshirt_ColorBase
	{
		scope = 2;
		displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\meridian\data\fog_tshirt_blue_meridian.paa"};
	};
};
