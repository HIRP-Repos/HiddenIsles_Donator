// ----------------------------------------------------------------------
// Donator: smoke  (Smoke)
// Textures: HIRP_Donator\donator\smoke\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Smoke
	{
		units[] = {"HiddenIsles_Donator_SmokeBigPatch","HiddenIsles_Donator_SmokeSmallPatch","HiddenIsles_Donator_SmokeALVPatch","HiddenIsles_Donator_SmokeMask","HiddenIsles_Donator_SmokeBeanie"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","FOG_Data_Patches","ACO_Core_Attachments","SFP_S_SFP3_1_smot_TacticalMask_618804","FOG_MOD_FleeceCap"};
	};
};
class CfgVehicles
{
	// external base classes
	class FOG_Big_Patch_Base;
	class FOG_Small_Patch_Base;
	class ALV_Patch_USA;
	class SFP_TacticalMask_Base;
	class FOG_Fleececap_ColorBase;
	class HiddenIsles_Donator_SmokeBigPatch: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Smoke Big FOG Patch";
		descriptionShort = "[DONATOR ITEM] Smoke";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\smoke\data\bigpatch_smoke.paa"};
	};
	class HiddenIsles_Donator_SmokeSmallPatch: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Smoke Small FOG Patch";
		descriptionShort = "[DONATOR ITEM] Smoke";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\smoke\data\smallpatch_smoke.paa"};
	};
	class HiddenIsles_Donator_SmokeALVPatch: ALV_Patch_USA
	{
		scope = 2;
		displayName = "Smoke ALV Patch";
		descriptionShort = "[DONATOR ITEM] Smoke";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\smoke\data\patch_smoke.paa"};
	};
	class HiddenIsles_Donator_SmokeMask: SFP_TacticalMask_Base
	{
		scope = 2;
		displayName = "Smoke's Tactical Mask";
		descriptionShort = "[DONATOR ITEM] Smoke";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\smoke\data\tacticalmask_smoke.paa"};
	};
	class HiddenIsles_Donator_SmokeBeanie: FOG_Fleececap_ColorBase
	{
		scope = 2;
		displayName = "Smoke's Fleece Cap";
		descriptionShort = "[DONATOR ITEM] Smoke";
		hiddenSelectionsTextures[] = {"HIRP_Donator\donator\smoke\data\fleececap_smoke.paa"};
	};
};
