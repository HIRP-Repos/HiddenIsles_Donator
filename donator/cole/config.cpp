// ----------------------------------------------------------------------
// Donator: cole  (Cole Tracy)
// Textures: HIRP_Donator\donator\cole\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Cole
	{
		units[] = {"HiddenIsles_Donator_ColePants","HiddenIsles_Donator_ColeJacket","HiddenIsles_Donator_ColeVest","HiddenIsles_Donator_ColeGloves","HiddenIsles_Donator_ColeBag","HiddenIsles_Donator_ColeMask"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Gorka_Pants_Shit","FOG_Gorka_Jacket_Shit","FOG_Vest_Gen4_stuff","FOG_Gear_Hands_GunGloves","FOG_Bag_6SHTBag","SFP_S_SFP3_1_smot_TacticalMask_618804"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Gorka_Pants_Black;
	class FOG_Gorka_Jacket_Black;
	class FOG_Vest_Gen4_Black;
	class FOG_GunGloves_Black;
	class FOG_Bag_6ShBagT_Black;
	class SFP_TacticalMask_Base;
	class HiddenIsles_Donator_ColePants: FOG_Gorka_Pants_Black
	{
		scope = 2;
		displayName = "Cole's Gorka Pants";
		descriptionShort = "[DONATOR ITEM] Cole Tracy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\cole\data\spetsnaz_pants_cole.paa","HIRP_Donator\donator\cole\data\spetsnaz_pants_cole.paa"};
	};
	class HiddenIsles_Donator_ColeJacket: FOG_Gorka_Jacket_Black
	{
		scope = 2;
		displayName = "Cole's Gorka Jacket";
		descriptionShort = "[DONATOR ITEM] Cole Tracy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\cole\data\spetsnaz_shirt_cole.paa","HIRP_Donator\donator\cole\data\spetsnaz_shirt_cole.paa"};
	};
	class HiddenIsles_Donator_ColeVest: FOG_Vest_Gen4_Black
	{
		scope = 2;
		displayName = "Cole's Gen4 Vest";
		descriptionShort = "[DONATOR ITEM] Cole Tracy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\cole\data\gen4_cole.paa","HIRP_Donator\donator\cole\data\gen4_cole.paa"};
	};
	class HiddenIsles_Donator_ColeGloves: FOG_GunGloves_Black
	{
		scope = 2;
		displayName = "Cole's Gun Gloves";
		descriptionShort = "[DONATOR ITEM] Cole Tracy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\cole\data\gunglove_cole.paa","HIRP_Donator\donator\cole\data\gunglove_cole.paa"};
	};
	class HiddenIsles_Donator_ColeBag: FOG_Bag_6ShBagT_Black
	{
		scope = 2;
		displayName = "Cole's Backpack";
		descriptionShort = "[DONATOR ITEM] Cole Tracy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\cole\data\6sh118t_cole.paa"};
	};
	class HiddenIsles_Donator_ColeMask: SFP_TacticalMask_Base
	{
		scope = 2;
		displayName = "Cole's Tactical Mask";
		descriptionShort = "[DONATOR ITEM] Cole Tracy";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\cole\data\tacticalmask_cole.paa"};
	};
};
