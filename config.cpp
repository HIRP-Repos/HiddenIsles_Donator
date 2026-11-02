// ----------------------------------------------------------------------
// HIRP_Donator - Hidden Isles RP donator retextures
//
// This is the core patch. Every donator folder under donator\ has its own
// config.cpp with its own CfgPatches (HIRP_Donator_<Folder>) that requires
// HIRP_Donator_Core plus the exact patches its base classes come from.
//
// To add a donator: follow README.md.
// ----------------------------------------------------------------------
class CfgPatches
{
	class HIRP_Donator_Core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters"};
	};
};
