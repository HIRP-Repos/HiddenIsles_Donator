// ----------------------------------------------------------------------
// Donator: rain  (Rain Williams, Honeypot / Rain)
// Textures: HIRP_Donator\donator\rain\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Rain
	{
		units[] = {"HiddenIsles_Donator_LeggingsRain","HiddenIsles_Donator_LeatherLeggingsRain","HiddenIsles_Donator_Shabby_Hoodie_Rain","HiddenIsles_Donator_HeavyRidersJacket_Rain","HiddenIsles_Donator_HoneypotBigPatch","HiddenIsles_Donator_HoneypotSmallPatch","HiddenIsles_Donator_HoneypotALVPatch","HiddenIsles_Donator_HoneypotFlag","HiddenIsles_Donator_HoneypotFlag2","HiddenIsles_Donator_HoneypotArmband"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","Leggings","ACO_Lower_Pants","Shabby_Hoodie","FOG_HeavyRiders_Jacket_Shit","FOG_Data_Patches","ACO_Core_Attachments","DZ_Gear_Camping","ACO_Other_Armband"};
	};
};
class CfgVehicles
{
	// external base classes
	class Leggings_ColorBase;
	class ALV_LeatherLeggings_Black;
	class Shabby_Hoodie_ColorBase;
	class FOG_HeavyRiders_Jacket_Black;
	class FOG_Big_Patch_Base;
	class FOG_Small_Patch_Base;
	class ALV_Patch_USA;
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class HiddenIsles_Donator_LeggingsRain: Leggings_ColorBase
	{
		scope = 2;
		displayName = "Rain's Leggings";
		descriptionShort = "[DONATOR ITEM] Rain Williams";
		itemsCargoSize[] = {5,4};
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\leggings_rain.paa","HIRP_Donator\donator\rain\data\leggings_rain.paa"};
	};
	class HiddenIsles_Donator_LeatherLeggingsRain: ALV_LeatherLeggings_Black
	{
		scope = 2;
		displayName = "Rain's Leggings";
		descriptionShort = "[DONATOR ITEM] Rain Williams";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\leatherleggings_rain.paa","HIRP_Donator\donator\_shared\data\pads_black_co.paa"};
	};
	class HiddenIsles_Donator_Shabby_Hoodie_Rain: Shabby_Hoodie_ColorBase
	{
		scope = 2;
		displayName = "The Honeypot Shabby Hoodie";
		descriptionShort = "[DONATOR ITEM] Rain Williams";
		itemsCargoSize[] = {6,5};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\shabby_hoodie_rain.paa","HIRP_Donator\donator\_shared\data\skein_black.paa"};
	};
	class HiddenIsles_Donator_HeavyRidersJacket_Rain: FOG_HeavyRiders_Jacket_Black
	{
		scope = 2;
		displayName = "The Honeypot Heavy Riders Jacket";
		descriptionShort = "[DONATOR ITEM] Rain Williams";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\fog_heavyrider_rain.paa"};
	};
	class HiddenIsles_Donator_HoneypotBigPatch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Honeypot Big FOG Patch";
		descriptionShort = "[DONATOR ITEM] Honeypot / Rain";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\bigpatch_honeypot.paa"};
	};
	class HiddenIsles_Donator_HoneypotSmallPatch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Honeypot Small FOG Patch";
		descriptionShort = "[DONATOR ITEM] Honeypot / Rain";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\smallpatch_honeypot.paa"};
	};
	class HiddenIsles_Donator_HoneypotALVPatch: ALV_Patch_USA
	{
		scope = 2;
		displayName = "Honeypot ALV Patch";
		descriptionShort = "[DONATOR ITEM] Honeypot / Rain";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\patch_honeypot.paa"};
	};
	class HiddenIsles_Donator_HoneypotFlag: Flag_White
	{
		scope = 2;
		displayName = "Honeypot Flag";
		descriptionShort = "[DONATOR ITEM] Honeypot / Rain";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\flag_honeypot.paa"};
	};
	class HiddenIsles_Donator_HoneypotFlag2: Flag_White
	{
		scope = 2;
		displayName = "The Honeypot Flag";
		descriptionShort = "[DONATOR ITEM] Honeypot / Rain";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\flag_honeypot2.paa"};
	};
	class HiddenIsles_Donator_HoneypotArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "The Honeypot Armband";
		descriptionShort = "[DONATOR ITEM] Honeypot / Rain";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\rain\data\upgradedarmband_honeypot.paa"};
	};
};
