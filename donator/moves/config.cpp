// ----------------------------------------------------------------------
// Donator: moves  (Moves)
// Textures: HIRP_Donator\donator\moves\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Moves
	{
		units[] = {"HiddenIsles_Donator_MovesVest","HiddenIsles_Donator_MovesPouch","HiddenIsles_Donator_MovesHolster","HiddenIsles_Donator_GhostMask_Moves"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Vests","DZ_Gear_Containers","FOG_Ghost_Mask_New_Stuff"};
	};
};
class CfgVehicles
{
	// external base classes
	class PlateCarrierVest;
	class PlateCarrierPouches;
	class PlateCarrierHolster;
	class FOG_Ghost_Mask_Black;
	class HiddenIsles_Donator_MovesVest: PlateCarrierVest
	{
		scope = 2;
		displayName = "Echos Plate Carrier";
		descriptionShort = "[DONATOR ITEM] Moves";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\moves\data\platecarriervest_moves.paa","HIRP_Donator\donator\moves\data\platecarriervest_moves.paa","HIRP_Donator\donator\moves\data\platecarriervest_moves.paa"};
	};
	class HiddenIsles_Donator_MovesPouch: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Echo's Vest Pouch";
		descriptionShort = "[DONATOR ITEM] Moves";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\moves\data\pouches_moves.paa"};
	};
	class HiddenIsles_Donator_MovesHolster: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Echo's Vest Holster";
		descriptionShort = "[DONATOR ITEM] Moves";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\moves\data\holster_moves.paa"};
	};
	class HiddenIsles_Donator_GhostMask_Moves: FOG_Ghost_Mask_Black
	{
		scope = 2;
		displayName = "Echo's Mask";
		descriptionShort = "[DONATOR ITEM] Moves";
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_black_co.paa","HIRP_Donator\donator\moves\data\skull_mask_moves.paa","HIRP_Donator\donator\moves\data\skull_mask_moves.paa"};
	};
};
