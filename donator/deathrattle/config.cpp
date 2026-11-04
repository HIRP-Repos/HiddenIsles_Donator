// ----------------------------------------------------------------------
// Donator: deathrattle  (Death Rattle / Russell)
// Textures: HiddenIsles_Donator\donator\deathrattle\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Deathrattle
	{
		units[] = {"HiddenIsles_Donator_DeathRattleFlag","HiddenIsles_Donator_DeathRattleArmband","HiddenIsles_Donator_DeathRattleVest","HiddenIsles_Donator_DeathRattleHelmet","HiddenIsles_Donator_DeathRattleHelmet2","HiddenIsles_Donator_DeathRattleMMACVest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Gear_Camping","ACO_Other_Armband","ACO_Upper_Vests","DZ_Characters_Headgear","FOG_Vest_MMAC_stuff"};
	};
};
class CfgVehicles
{
	// external base classes
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class ALV_BikerVest_Colorbase;
	class DirtBikeHelmet_Red;
	class FOG_Vest_MMAC_MC;
	class HiddenIsles_Donator_DeathRattleFlag: Flag_White
	{
		scope = 2;
		displayName = "Death Rattle Flag";
		descriptionShort = "[DONATOR ITEM] Death Rattle / Russell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\deathrattle\data\flag_drmc2.paa"};
	};
	class HiddenIsles_Donator_DeathRattleArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Death Rattle Armband";
		descriptionShort = "[DONATOR ITEM] Death Rattle / Russell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\deathrattle\data\upgradedarmband_dmrc.paa"};
	};
	class HiddenIsles_Donator_DeathRattleVest: ALV_BikerVest_Colorbase
	{
		scope = 2;
		displayName = "Death Rattle Vest";
		descriptionShort = "[DONATOR ITEM] Death Rattle / Russell";
		itemsCargoSize[] = {0,0};
		itemSize[] = {3,2};
		inventorySlot[] = {"Coat","Jacket1","Jacket2","Jacket3","Jacket4"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\deathrattle\data\alv_bikervest_drmc.paa"};
	};
	class HiddenIsles_Donator_DeathRattleHelmet: DirtBikeHelmet_Red
	{
		scope = 2;
		displayName = "Death Rattle Helmet";
		descriptionShort = "[DONATOR ITEM] Death Rattle / Russell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\deathrattle\data\mxhelmet_mc.paa","HiddenIsles_Donator\donator\deathrattle\data\mxhelmet_mc.paa"};
	};
	class HiddenIsles_Donator_DeathRattleHelmet2: DirtBikeHelmet_Red
	{
		scope = 2;
		displayName = "Death Rattle Helmet";
		descriptionShort = "[DONATOR ITEM] Death Rattle / Russell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\deathrattle\data\mxhelmet_mc2.paa","HiddenIsles_Donator\donator\deathrattle\data\mxhelmet_mc2.paa"};
	};
	class HiddenIsles_Donator_DeathRattleMMACVest: FOG_Vest_MMAC_MC
	{
		scope = 2;
		displayName = "Death Rattle MMAC Vest";
		descriptionShort = "[DONATOR ITEM] Death Rattle / Russell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\deathrattle\data\mmac_mc.paa","HiddenIsles_Donator\donator\deathrattle\data\mmac_mc.paa"};
	};
};
