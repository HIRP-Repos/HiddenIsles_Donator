// ----------------------------------------------------------------------
// Donator: moseby  (Jonas Moseby)
// Textures: HIRP_Donator\donator\moseby\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Moseby
	{
		units[] = {"HiddenIsles_Donator_MosebyPants","HiddenIsles_Donator_MosebyShirt","HiddenIsles_Donator_MosebyWatchCap"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Pants_FRACU","FOG_Crye_G3_Shirt_Shit","FOG_MOD_WatchCap"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Pants_FRACU_GRY;
	class FOG_Crye_G3_Shirt_Black;
	class FOG_Watchcap_Grey;
	class HiddenIsles_Donator_MosebyPants: FOG_Pants_FRACU_GRY
	{
		scope = 2;
		displayName = "Moseby's FRACU Pants";
		descriptionShort = "[DONATOR ITEM] Jonas Moseby";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\moseby\data\fracu_trousers_moseby.paa"};
	};
	class HiddenIsles_Donator_MosebyShirt: FOG_Crye_G3_Shirt_Black
	{
		scope = 2;
		displayName = "Moseby's Crye G3 Shirt";
		descriptionShort = "[DONATOR ITEM] Jonas Moseby";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\moseby\data\g3_combatshirt_moseby.paa","HIRP_Donator\donator\moseby\data\cuffs_moseby.paa"};
	};
	class HiddenIsles_Donator_MosebyWatchCap: FOG_Watchcap_Grey
	{
		scope = 2;
		displayName = "Moseby's Watch Cap";
		descriptionShort = "[DONATOR ITEM] Jonas Moseby";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\moseby\data\watchcap_moseby.paa"};
	};
};
