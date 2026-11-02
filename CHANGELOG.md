# Changelog

## Rework (2026-10-29)

No classnames were renamed. Existing worn and stashed items keep working.

### Structure
- Added `$PBOPREFIX$` (`HIRP_Donator`). All 538 texture paths now use that prefix. Before, 534 used `HiddenIsles_Donator\` and 4 used `HIRP_Donator\`, so some textures broke with either prefix.
- One `config.cpp` and one `CfgPatches` per donator folder: `HIRP_Donator_<Folder>`. All of them require `HIRP_Donator_Core`, defined in the root config.
- Split the 152-item `donator\config.cpp` into one folder per donator.
- Merged the nested goblin_mod configs (10 files) into `donator\310`.
- Every texture now lives in `donator\<folder>\data\`, with lowercase file and folder names.
- Removed the root `CfgMods`. It pointed at script folders that only exist in the live HI Retextures mod, and it used that mod's class name.
- Added the README and this changelog.
- Added the validator, build script, types generator and donator template, kept outside the pack in `P:\HIRP_Donator_Tools\`.

### Conflicts fixed
- Duplicate CfgPatches names are gone: `HiddenIsles_Donator_Retextures` (×2), `310_Retextures` (×2), `GOBLIN_MOD_Clothes_Patch` (×9).
- The patch names no longer collide with `@Hidden Isles Retextures`.
- Copied the 3 skein textures this pack borrowed from HI Retextures into `donator\_shared\data`, so the pack no longer needs that mod.

### Dependencies
- `requiredAddons` now lists the exact patch that defines each base class (DZ, ACO, FOG sub-patches, Windstride sub-patches, SFP). This fixes load-order problems.
- Removed the patches that don't exist: `FOG_Retexture` and `GOBLIN_MOD_*`.
- Added the SFP dependency, which was missing (Smoke and Cole masks).

### Bugs fixed
- STAG jacket, jacket and pants had misspelled base classes (`FOG_AEMO1_Jacket_Black`, `FOG_Shirt_ArticJacket_Black`, `FOG_ArticPants_Black`), so they had no model.
- STAG skull mask, jacket and pants pointed at file names that don't exist.
- The 310 FRACU tops had 5 material paths that started with a nonexistent `FOG Mod pbo\` folder.
- The Ubici flag had a wrong texture path.
- Rebecca's mask used a FOG texture that doesn't exist (`balaclava_white_co`). It now uses `balaclava_black_co`.
- The Crow gas mask no longer copies the whole vanilla AirborneMask body. Only its real changes are kept: `noHelmet`, damage materials, protection and textures.
- Fixed the 4 "missing file" errors pboProject reported. Those files are in ACO and Windstride, which aren't extracted to P:\.
  - Copied `pads_black_co.paa` and `skein_grey_ca.paa` into `donator\_shared\data`.
  - Dropped the Mellyjane duster and Wildwood beanie rvmat lines. They repeated the parent's own material, so nothing changes in-game.
  - The validator now checks that every external path exists on P:\.
- Removed texture entries beyond the parent's selection count. What renders in-game is unchanged.
- Removed `scopeArsenal`, which does nothing in DayZ.

### Text
- Typos: Offical, pare of, An vest, stiched, Mandable, Remanant, Groznys, New Hopes, Sweets, Sniperhood.
- Removed a doubled `[DONATOR ITEM]` tag.
- Replaced curly quotes with plain ASCII.
- Removed trailing spaces and periods.
- Filled in the missing owner in `descriptionShort`: Dayton, Mellyjane, Obsidian Guard, Tommy, Wildwood, Savior and the 310 goblin items.
- Gave the Savior armband a display name.

### Removed
- `ubicipantsgrey.paa.paa` and `ubicishirtgrey.paa.paa` (byte-identical duplicates).
- Commented-out item blocks and unused forward declarations.
