// ----------------------------------------------------------------------
// Donator: mellyjane  (Mellyjane)
// Textures: HIRP_Donator\donator\mellyjane\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Mellyjane
	{
		units[] = {"HiddenIsles_Donator_MellyjaneArmband","HiddenIsles_Donator_MellyjaneFlag","HiddenIsles_Donator_MellyjaneGloves","HiddenIsles_Donator_MellyjaneDuster","HiddenIsles_Donator_MellyjaneBag"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Other_Armband","DZ_Gear_Camping","FOG_Gear_Hands_MechanixGloves","ACO_Upper_Jackets","FOG_Bag_BlackJack"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_UpgradedArmband_Black;
	class Flag_White;
	class FOG_MechanixGloves_ColorBase;
	class ALV_Duster_Colorbase;
	class FOG_Bag_BlackJack_ColorBase;
	class HiddenIsles_Donator_MellyjaneArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Mellyjane Armband";
		descriptionShort = "[DONATOR ITEM] Mellyjane";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\mellyjane\data\armband_mellyjane_co.paa"};
	};
	class HiddenIsles_Donator_MellyjaneFlag: Flag_White
	{
		scope = 2;
		displayName = "Mellyjane Flag";
		descriptionShort = "[DONATOR ITEM] Mellyjane";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\mellyjane\data\flag_mellyjane_co.paa"};
	};
	class HiddenIsles_Donator_MellyjaneGloves: FOG_MechanixGloves_ColorBase
	{
		scope = 2;
		displayName = "Mellyjane Gloves";
		descriptionShort = "[DONATOR ITEM] Mellyjane";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\mellyjane\data\glove_mellyjane.paa"};
	};
	class HiddenIsles_Donator_MellyjaneDuster: ALV_Duster_Colorbase
	{
		scope = 2;
		displayName = "Mellyjane Duster";
		descriptionShort = "[DONATOR ITEM] Mellyjane";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\mellyjane\data\duster_mellyjane.paa"};
	};
	class HiddenIsles_Donator_MellyjaneBag: FOG_Bag_BlackJack_ColorBase
	{
		scope = 2;
		displayName = "Mellyjane Bag";
		descriptionShort = "[DONATOR ITEM] Mellyjane";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\mellyjane\data\mysterybag_mellyjane.paa"};
	};
};
