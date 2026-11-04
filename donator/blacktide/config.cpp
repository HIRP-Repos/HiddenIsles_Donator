// ----------------------------------------------------------------------
// Donator: blacktide  (Black Tide PMC / Cal, Black Tide PMC / Kaine)
// Textures: HiddenIsles_Donator\donator\blacktide\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Blacktide
	{
		units[] = {"HiddenIsles_Donator_BlacktideFlag","HiddenIsles_Donator_BlacktideArmband","HiddenIsles_Donator_GhostMask_Blacktide","HiddenIsles_Donator_BlacktideShirt","HiddenIsles_Donator_BlacktidePants","HiddenIsles_Donator_BlacktideHelmet","HiddenIsles_Donator_BlacktideSniperHood","HiddenIsles_Donator_BlacktideGloves","HiddenIsles_Donator_BlacktideShoes"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Gear_Camping","ACO_Other_Armband","FOG_Ghost_Mask_New_Stuff","FOG_Crye_G3_Shirt_Shit","FOG_Gorka_Pants_Shit","FOG_MOD_Helmet_HGU56","FOG_MOD_SniperHood","FOG_Gear_Hands_MechanixGloves","FOG_Gear_Shoes_XAForces"};
	};
};
class CfgVehicles
{
	// external base classes
	class Flag_White;
	class ALV_UpgradedArmband_Black;
	class FOG_Ghost_Mask_Black;
	class FOG_Crye_G3_Shirt_Black;
	class FOG_Gorka_Pants_ColorBase;
	class FOG_Helmet_HGU56_Black;
	class FOG_SniperHood_Black;
	class FOG_MechanixGloves_Black;
	class FOG_XAForces_Shoes_Black;
	class HiddenIsles_Donator_BlacktideFlag: Flag_White
	{
		scope = 2;
		displayName = "Blacktide Flag";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Cal";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\flag_blacktide.paa"};
	};
	class HiddenIsles_Donator_BlacktideArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Blacktide Armband";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Cal";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\upgradedarmband_blacktide.paa"};
	};
	class HiddenIsles_Donator_GhostMask_Blacktide: FOG_Ghost_Mask_Black
	{
		scope = 2;
		displayName = "Blacktide Ghost Mask";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\kaine_ghostmask_balcalava.paa","HiddenIsles_Donator\donator\blacktide\data\kaine_ghostmask.paa","HiddenIsles_Donator\donator\blacktide\data\kaine_ghostmask.paa"};
	};
	class HiddenIsles_Donator_BlacktideShirt: FOG_Crye_G3_Shirt_Black
	{
		scope = 2;
		displayName = "Blacktide G3 Shirt";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\b4m_crye_g3_shirt_kaine.paa","HiddenIsles_Donator\donator\blacktide\data\b4m_crye_g3_shirt_cuffs_kaine.paa"};
	};
	class HiddenIsles_Donator_BlacktidePants: FOG_Gorka_Pants_ColorBase
	{
		scope = 2;
		displayName = "Blacktide Gorka Pants";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\b4m_gorka_pants_kaine.paa","HiddenIsles_Donator\donator\blacktide\data\b4m_gorka_pants_kaine.paa"};
	};
	class HiddenIsles_Donator_BlacktideHelmet: FOG_Helmet_HGU56_Black
	{
		scope = 2;
		displayName = "Blacktide HGU56 Helmet";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\b4m_helmet_hgu56_kaine.paa"};
	};
	class HiddenIsles_Donator_BlacktideSniperHood: FOG_SniperHood_Black
	{
		scope = 2;
		displayName = "Blacktide Sniper Hood";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\b4m_sniperhood_kaine.paa"};
	};
	class HiddenIsles_Donator_BlacktideGloves: FOG_MechanixGloves_Black
	{
		scope = 2;
		displayName = "Blacktide Gloves";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\b4m_mechanixgloves_kaine.paa","HiddenIsles_Donator\donator\blacktide\data\b4m_mechanixgloves_kaine.paa"};
	};
	class HiddenIsles_Donator_BlacktideShoes: FOG_XAForces_Shoes_Black
	{
		scope = 2;
		displayName = "Blacktide XA Forces";
		descriptionShort = "[DONATOR ITEM] Black Tide PMC / Kaine";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\blacktide\data\b4m_xaforces_shoes_kaine.paa"};
	};
};
