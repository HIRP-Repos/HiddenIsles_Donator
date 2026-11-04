// ----------------------------------------------------------------------
// Donator: koden  (Koden, Koden/Smoke, Torchivik Holdings)
// Textures: HiddenIsles_Donator\donator\koden\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Koden
	{
		units[] = {"HiddenIsles_Donator_KodenPlagueMask","HiddenIsles_Donator_KodenVest","HiddenIsles_Donator_SmodenVest","HiddenIsles_Donator_SmodenVest2","HiddenIsles_Donator_KodenHoodedParka","HiddenIsles_Donator_KodenGloves","HiddenIsles_Donator_KodenBoots","HiddenIsles_Donator_KodenPants","HiddenIsles_Donator_HoldingsFlag","HiddenIsles_Donator_HoldingsArmband"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","Plague_Mask","FOG_Vest_AVS_stuff","FOG_Vest_Thor","FOG_Hooded_Parka_Shit","FOG_Gear_Hands_MechanixGloves","DZ_Characters_Shoes","FOG_Gorka_Pants_Shit","DZ_Gear_Camping","ACO_Other_Armband"};
	};
};
class CfgVehicles
{
	// external base classes
	class Plague_Mask;
	class FOG_Vest_AVS_Black;
	class FOG_Vest_Thor_Black;
	class FOG_Hooded_Parka_Black;
	class FOG_MechanixGloves_Skele;
	class MilitaryBoots_Redpunk;
	class FOG_Gorka_Pants_ColorBase;
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class HiddenIsles_Donator_KodenPlagueMask: Plague_Mask
	{
		scope = 2;
		displayName = "Koden's Plague Mask";
		descriptionShort = "[DONATOR ITEM] Koden";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\plaguemask_koden.paa","HiddenIsles_Donator\donator\koden\data\plaguemask_koden.paa","HiddenIsles_Donator\donator\koden\data\plaguemask_koden.paa"};
	};
	class HiddenIsles_Donator_KodenVest: FOG_Vest_AVS_Black
	{
		scope = 2;
		displayName = "Holdings Vest";
		descriptionShort = "[DONATOR ITEM] Koden";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\avs_a_holdings.paa","HiddenIsles_Donator\donator\koden\data\avs_a_holdings.paa"};
	};
	class HiddenIsles_Donator_SmodenVest: FOG_Vest_Thor_Black
	{
		scope = 2;
		displayName = "Smoden Vest";
		descriptionShort = "[DONATOR ITEM] Koden";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\irp_vest_thor_smoden.paa","HiddenIsles_Donator\donator\koden\data\irp_vest_thor_smoden.paa"};
	};
	class HiddenIsles_Donator_SmodenVest2: FOG_Vest_Thor_Black
	{
		scope = 2;
		displayName = "Smoden Vest";
		descriptionShort = "[DONATOR ITEM] Koden/Smoke";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\irp_vest_thor_smoden2.paa","HiddenIsles_Donator\donator\koden\data\irp_vest_thor_smoden2.paa"};
	};
	class HiddenIsles_Donator_KodenHoodedParka: FOG_Hooded_Parka_Black
	{
		scope = 2;
		displayName = "Koden's Hooded Parka";
		descriptionShort = "[DONATOR ITEM] Koden";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\hoodedparka_koden.paa"};
	};
	class HiddenIsles_Donator_KodenGloves: FOG_MechanixGloves_Skele
	{
		scope = 2;
		displayName = "Koden's Skeleton Gloves";
		descriptionShort = "[DONATOR ITEM] Koden";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\mechanixgloves_koden.paa","HiddenIsles_Donator\donator\koden\data\mechanixgloves_koden.paa"};
	};
	class HiddenIsles_Donator_KodenBoots: MilitaryBoots_Redpunk
	{
		scope = 2;
		displayName = "Koden's Anarchy Boots";
		descriptionShort = "[DONATOR ITEM] Koden";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\militaryboots_koden.paa","HiddenIsles_Donator\donator\koden\data\militaryboots_koden.paa","HiddenIsles_Donator\donator\koden\data\militaryboots_koden.paa"};
	};
	class HiddenIsles_Donator_KodenPants: FOG_Gorka_Pants_ColorBase
	{
		scope = 2;
		displayName = "Koden's Gorka Pants";
		descriptionShort = "[DONATOR ITEM] Koden";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\koden_pants.paa","HiddenIsles_Donator\donator\koden\data\koden_pants.paa"};
	};
	class HiddenIsles_Donator_HoldingsFlag: Flag_White
	{
		scope = 2;
		displayName = "Torchivik Holdings Flag";
		descriptionShort = "[DONATOR ITEM] Torchivik Holdings";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\flag_holdings.paa"};
	};
	class HiddenIsles_Donator_HoldingsArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Torchivik Holdings Armband";
		descriptionShort = "[DONATOR ITEM] Torchivik Holdings";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\koden\data\upgradedarmband_holdings.paa"};
	};
};
