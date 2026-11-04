// ----------------------------------------------------------------------
// Donator: rebecca  (Rebecca Hawthorne)
// Textures: HiddenIsles_Donator\donator\rebecca\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Rebecca
	{
		units[] = {"HiddenIsles_Donator_RebeccaPants","HiddenIsles_Donator_RebeccaJacket","HiddenIsles_Donator_RebeccaBag","HiddenIsles_Donator_RebeccaGloves","HiddenIsles_Donator_RebeccaVest","HiddenIsles_Donator_GhostMask_Rebecca"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Clothing_Pants_G99","FOG_Shirts_ArcteryxGryphon","FOG_Characters_Backpacks_Bergen","FOG_Gear_Hands_WinterGloves","FOG_TV110T_Stuff","FOG_Ghost_Mask_New_Stuff"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_G99_Pants_Black;
	class FOG_Jacket_ArcteryxGryphon_Black;
	class FOG_Bergen_Rucksack_Black;
	class FOG_WinterGloves_White;
	class FOG_Vest_TV110T_Black;
	class FOG_Ghost_Mask_Black;
	class HiddenIsles_Donator_RebeccaPants: FOG_G99_Pants_Black
	{
		scope = 2;
		displayName = "Rebecca's Pants";
		descriptionShort = "[DONATOR ITEM] Rebecca Hawthorne";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\rebecca\data\g99_rebecca.paa"};
	};
	class HiddenIsles_Donator_RebeccaJacket: FOG_Jacket_ArcteryxGryphon_Black
	{
		scope = 2;
		displayName = "Rebecca's Jacket";
		descriptionShort = "[DONATOR ITEM] Rebecca Hawthorne";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\rebecca\data\arcteryx_gryphon_rebecca.paa"};
	};
	class HiddenIsles_Donator_RebeccaBag: FOG_Bergen_Rucksack_Black
	{
		scope = 2;
		displayName = "Rebecca's Rucksack";
		descriptionShort = "[DONATOR ITEM] Rebecca Hawthorne";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\rebecca\data\bergen_rebecca.paa"};
	};
	class HiddenIsles_Donator_RebeccaGloves: FOG_WinterGloves_White
	{
		scope = 2;
		displayName = "Rebecca's Gloves";
		descriptionShort = "[DONATOR ITEM] Rebecca Hawthorne";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\rebecca\data\wintergloves_rebecca.paa","HiddenIsles_Donator\donator\rebecca\data\wintergloves_rebecca.paa"};
	};
	class HiddenIsles_Donator_RebeccaVest: FOG_Vest_TV110T_Black
	{
		scope = 2;
		displayName = "Rebecca's Vest";
		descriptionShort = "[DONATOR ITEM] Rebecca Hawthorne";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\rebecca\data\fog_tv110_rebecca.paa","HiddenIsles_Donator\donator\rebecca\data\fog_tv110_rebecca.paa"};
	};
	class HiddenIsles_Donator_GhostMask_Rebecca: FOG_Ghost_Mask_Black
	{
		scope = 2;
		displayName = "Rebecca's Mask";
		descriptionShort = "[DONATOR ITEM] Rebecca Hawthorne";
		hiddenSelectionsTextures[] = {"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava_black_co.paa","HiddenIsles_Donator\donator\rebecca\data\skullmask_rebecca.paa","HiddenIsles_Donator\donator\rebecca\data\skullmask_rebecca.paa"};
	};
};
