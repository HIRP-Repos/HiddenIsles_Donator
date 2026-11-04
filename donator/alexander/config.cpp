// ----------------------------------------------------------------------
// Donator: alexander  (Alexander Adams, Alexander Adams / 310th, Alexander)
// Textures: HiddenIsles_Donator\donator\alexander\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Alexander
	{
		units[] = {"HiddenIsles_Donator_AlexanderGoggles","HiddenIsles_Donator_AlexanderSurgicalGloves","HiddenIsles_Donator_AlexanderHelmet","HiddenIsles_Donator_AlexanderBelt","HiddenIsles_Donator_AlexanderG3Shirt","HiddenIsles_Donator_AlexanderVest","HiddenIsles_Donator_AlexanderPants","HiddenIsles_Donator_AlexanderSmallPatch","HiddenIsles_Donator_AdamsVest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Glasses","DZ_Characters_Gloves","DZ_Characters_Headgear","FOG_MRB_Belt","FOG_Crye_G3_Shirt_Shit","FOG_Vest_MMAC_stuff","DZ_Characters_Pants","FOG_Data_Patches","FOG_Vest_Thor"};
	};
};
class CfgVehicles
{
	// external base classes
	class skigoggles_whitedark;
	class surgicalgloves_white;
	class ballistichelmet_bdu;
	class FOG_MRB_Belt_Black;
	class FOG_Crye_G3_Shirt_Black;
	class FOG_Vest_MMAC_MC;
	class CargoPants_ColorBase;
	class FOG_Small_Patch_Base;
	class FOG_Vest_Thor_Black;
	class HiddenIsles_Donator_AlexanderGoggles: skigoggles_whitedark
	{
		scope = 2;
		displayName = "Alexander's Ski Goggles";
		descriptionShort = "[DONATOR ITEM] Alexander Adams";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\skigoggles_alexander.paa","HiddenIsles_Donator\donator\alexander\data\skigoggles_alexander.paa","HiddenIsles_Donator\donator\alexander\data\skigoggles_alexander.paa"};
	};
	class HiddenIsles_Donator_AlexanderSurgicalGloves: surgicalgloves_white
	{
		scope = 2;
		displayName = "Alexander's Surgical Gloves";
		descriptionShort = "[DONATOR ITEM] Alexander Adams";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\surgicalgloves_alexander.paa","HiddenIsles_Donator\donator\alexander\data\surgicalgloves_alexander.paa","HiddenIsles_Donator\donator\alexander\data\surgicalgloves_alexander.paa"};
	};
	class HiddenIsles_Donator_AlexanderHelmet: ballistichelmet_bdu
	{
		scope = 2;
		displayName = "Alexander's Camo Helmet";
		descriptionShort = "[DONATOR ITEM] Alexander Adams";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\camohelmet_alexander.paa","HiddenIsles_Donator\donator\alexander\data\camohelmet_alexander.paa","HiddenIsles_Donator\donator\alexander\data\camohelmet_alexander.paa"};
	};
	class HiddenIsles_Donator_AlexanderBelt: FOG_MRB_Belt_Black
	{
		scope = 2;
		displayName = "Alexander's MRB Belt";
		descriptionShort = "[DONATOR ITEM] Alexander Adams";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\mrb_alexander.paa"};
	};
	class HiddenIsles_Donator_AlexanderG3Shirt: FOG_Crye_G3_Shirt_Black
	{
		scope = 2;
		displayName = "Alexander's G3 Combat Shirt";
		descriptionShort = "[DONATOR ITEM] Alexander Adams";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\g3_combatshirt_alexander.paa","HiddenIsles_Donator\donator\alexander\data\g3_combatshirt_alexander.paa","HiddenIsles_Donator\donator\alexander\data\g3_combatshirt_alexander.paa"};
	};
	class HiddenIsles_Donator_AlexanderVest: FOG_Vest_MMAC_MC
	{
		scope = 2;
		displayName = "Alexander's MMAC Vest";
		descriptionShort = "[DONATOR ITEM] Alexander Adams";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\mmac_alexander.paa","HiddenIsles_Donator\donator\alexander\data\mmac_alexander.paa"};
	};
	class HiddenIsles_Donator_AlexanderPants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "Alexander's Cargo Pants";
		descriptionShort = "[DONATOR ITEM] Alexander Adams";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\cargopants_alexander.paa","HiddenIsles_Donator\donator\alexander\data\cargopants_alexander.paa","HiddenIsles_Donator\donator\alexander\data\cargopants_alexander.paa"};
	};
	class HiddenIsles_Donator_AlexanderSmallPatch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Alexander Small FOG Patch";
		descriptionShort = "[DONATOR ITEM] Alexander Adams / 310th";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\smallpatch_alexander.paa"};
	};
	class HiddenIsles_Donator_AdamsVest: FOG_Vest_Thor_Black
	{
		scope = 2;
		displayName = "Alexander's Vest";
		descriptionShort = "[DONATOR ITEM] Alexander";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\alexander\data\thor_black_adams.paa","HiddenIsles_Donator\donator\alexander\data\thor_black_adams.paa"};
	};
};
