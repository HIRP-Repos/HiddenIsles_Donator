# HIRP_Donator

Donator retextures for Hidden Isles RP. One PBO, prefix `HIRP_Donator`.

## Layout

```
HIRP_Donator\
  $PBOPREFIX$              HIRP_Donator
  config.cpp               HIRP_Donator_Core (every donator patch requires it)
  donator\
    <folder>\
      config.cpp           CfgPatches HIRP_Donator_<Folder> + that donator's items
      data\*.paa           that donator's textures (lowercase names)
    _shared\data\          textures used by more than one donator
  README.md, CHANGELOG.md
```

Build tools are kept outside the pack in `P:\HIRP_Donator_Tools\`, so they
never end up in the PBO:

```
P:\HIRP_Donator_Tools\
  validate.py / .bat       checks the whole pack - run before every build
  build.bat                validate + build (+ "sign") with AddonBuilder
  gen_types.py             regenerates server\types.xml
  server\types.xml         CE entries for every item (copy into your mission)
  template\config.template starting point for a new donator
  deps.txt                 where validate.py looks for DayZ / mod configs
```

Each donator folder is self-contained. Its `config.cpp` defines one
`CfgPatches` that lists `HIRP_Donator_Core` and the exact patches its base
classes come from, so adding a folder never touches another, and deleting a
folder removes that donator cleanly.

## Adding a donator

1. Create `donator\<folder>\` (lowercase, no spaces) and `donator\<folder>\data\`.
2. Drop the `.paa` files in `data\`, named `<item>_<folder>[_<variant>]_co.paa`, all lowercase.
3. Copy `P:\HIRP_Donator_Tools\template\config.template` to `donator\<folder>\config.cpp` and fill it in:
   - patch name `HIRP_Donator_<Folder>`
   - every scope=2 class in `units[]`
   - `descriptionShort = "[DONATOR ITEM] <Owner>"`
   - texture paths `HIRP_Donator\donator\<folder>\data\<file>.paa`
4. Run `P:\HIRP_Donator_Tools\validate.bat`. It tells you:
   - which patch to add to `requiredAddons` for each base class
   - texture paths that don't exist
   - duplicate class or patch names
   - misspelled base classes
5. Run `python P:\HIRP_Donator_Tools\gen_types.py` and copy the new entries from `P:\HIRP_Donator_Tools\server\types.xml` into the server's types.
6. Build with pboProject, or with `P:\HIRP_Donator_Tools\build.bat` (add `sign` to sign it).

Adding an item to an existing donator is the same: add the class to that
folder's `config.cpp`, add it to `units[]`, then validate.

### Naming for new items

- Classes: `HIRP_Donator_<Folder>_<Item>[_<Variant>]`, e.g. `HIRP_Donator_Koden_Vest_Black`.
- Textures: lowercase, `_co` suffix, inside the donator's own `data\`.

### Never rename an existing class

Classnames are what the server saves for worn and stashed items and what
types.xml and trader files refer to. Renaming one deletes that item from every
player who owns it. That is why older classes keep their historic names
(`HiddenIsles_Donator_*`, `Torvald_*`, `FENR_*`, even typos like
`Custom_Berret_310th_CROW`). Display names, textures, folders and patch names
are safe to change.

## How many textures an item takes

Most clothing has 3 selections (`camoGround`, `camoMale`, `camoFemale`) and
takes 3 textures. Flags, patches and many FOG items have 1 or 2. The validator
warns when you pass more textures than the parent has selections.

## Donators

| Folder | Owner(s) | Items |
|---|---|---|
| `310` | 310th MP Brigade (incl. the former goblin_mod FRACU/coats) | 61 |
| `alexander` | Alexander Adams | 9 |
| `atomic` | Atomic / Daz | 1 |
| `blacktide` | Black Tide PMC (Cal, Kaine) | 9 |
| `boone` | Boone | 6 |
| `carter` | Carter / MR W | 1 |
| `cole` | Cole Tracy | 6 |
| `dayton` | Dayton | 1 |
| `deathrattle` | Death Rattle / Russell | 6 |
| `fauna` | August | 1 |
| `geister` | Geister Bataillon / Vicious | 1 |
| `george` | George | 1 |
| `greenboys` | Greenboys | 2 |
| `grozny` | Grozny Battalion | 3 |
| `happycampers` | Happy Campers / Lo | 8 |
| `harbinger` | John Dex Adams | 1 |
| `io` | Cult of IO (Seeker) | 2 |
| `john` | John Callahan | 1 |
| `kaine` | Elias Kaine | 10 |
| `koden` | Koden, Smoke, Torchivik Holdings | 10 |
| `mellyjane` | Mellyjane | 5 |
| `meridian` | Meridian | 9 |
| `moseby` | Jonas Moseby | 3 |
| `moves` | Moves | 4 |
| `newdawn` | New Dawn / Sylvester McDowell | 4 |
| `newhope` | New Hope (Hank, Jester, Pillow, Rat, Six, Sweets) | 9 |
| `norway` | Torvald | 21 |
| `obsidianguard` | Obsidian Guard | 2 |
| `rain` | Rain Williams / Honeypot | 10 |
| `ravenhurst` | Ravenhurst | 1 |
| `reaper` | Reaper | 2 |
| `rebecca` | Rebecca Hawthorne | 6 |
| `remnant` | Remnant | 2 |
| `savior` | Savior | 11 |
| `smoke` | Smoke | 5 |
| `stag` | STAG Corporation | 8 |
| `terrydur` | Terry / Dur | 2 |
| `tommy` | Tommy | 4 |
| `trackyourtrauma` | Track Your Trauma | 2 |
| `ubici` | Ubici | 12 |
| `vipers` | Vipers | 2 |
| `wildwood` | Wildwood | 9 |
| `winters` | Winters Cartel | 2 |
| `wreckborn` | Wreck Born | 1 |

## Dependencies

DayZ, Alevaric's Clothing Overhaul (ACO), Forward Operator Gear (FOG),
Windstride's Clothing Pack and SFP. The exact patches are listed per donator
in its `requiredAddons`.

## Known overlap

`@Hidden Isles Retextures` (`HiddenIsles_Retextures_files\clothing\donator`)
still defines 159 of these classnames. Run
`python P:\HIRP_Donator_Tools\validate.py --conflicts "<path to that mod>"` to list them. Only
one of the two mods should ship each class.
