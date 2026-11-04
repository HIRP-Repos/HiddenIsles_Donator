// ----------------------------------------------------------------------
// Donator: atomic  (Atomic/Daz)
// Textures: HiddenIsles_Donator\donator\atomic\data\
// Classnames are persistent (worn/stashed items, types.xml): never rename them.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Atomic
	{
		units[] = {"HiddenIsles_Donator_AtomicJacket"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HIRP_Donator_Core","ACO_Upper_Jackets"};
	};
};
class CfgVehicles
{
	// external base classes
	class ALV_DenimJacket_Blue;
	class HiddenIsles_Donator_AtomicJacket: ALV_DenimJacket_Blue
	{
		scope = 2;
		displayName = "Daz's Denim Jacket";
		descriptionShort = "[DONATOR ITEM] Atomic/Daz";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\atomic\data\denimjacket_atomic.paa"};
	};
};
