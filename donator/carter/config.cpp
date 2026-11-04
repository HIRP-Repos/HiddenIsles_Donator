// ----------------------------------------------------------------------
// Donator: carter  (Carter / MR W)
// Textures: HiddenIsles_Donator\donator\carter\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Carter
	{
		units[] = {"HiddenIsles_Donator_Balaclava_MrW"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","DZ_Characters_Masks"};
	};
};
class CfgVehicles
{
	// external base classes
	class BalaclavaMask_Black;
	class HiddenIsles_Donator_Balaclava_MrW: BalaclavaMask_Black
	{
		scope = 2;
		displayName = "Mr W Balaclava";
		descriptionShort = "[DONATOR ITEM] Carter / MR W";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\carter\data\wmd_keegan_balaclava4.paa","HiddenIsles_Donator\donator\carter\data\wmd_keegan_balaclava4.paa","HiddenIsles_Donator\donator\carter\data\wmd_keegan_balaclava4.paa"};
	};
};
