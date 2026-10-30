# My Life as a Darklord (WF2E) - recomp notes

Started from the mylifeking-recomp v0.4 tree (commit 43b1d08): same recompiler and runtime. Changes for this game are
listed below; runtime fixes here that also matter for King are marked (shared).

## Source
- Base WAD sha1 c7f03cff0fe881cb4620f678983fa21b4e8088c3: title 00010001-57463245 (WF2E), IOS 37, 9 contents, boot
  index 8. Content 1 = main.dol, not compressed (3,452,096 bytes, sha1 afa37072ad22b303e7dc1ea55b873363e2ea4621).
  Content 2 = U8 data; contents 3/4/5/7 are shared contents (type 0x8001: HOME button menu data) - libWiiPy
  decrypts them like the others.
- DLC WAD sha1 7fde35342bb8ea90c536fec876e6d8bd62ab41a4: 00010005-57463245, 40 contents (index 0 + 39 items).
- SDK: OS/DVD Feb 2009, NAND Sep 2008, KPAD/WPAD newer than King's (see Input).

## Binary
- Entry 0x8000403C, .text 0x8000AD20-0x802D2400; dtk 1.8.4: 10,248 functions.
- Naming: `tools/xmatch.py` against King's main.dol + config/symbols.txt -> `tools/xmatch_king.json` (4,523 exact
  matches), then `tools/manual_dl.json` for the WPAD/KPAD build that differs (found by module order and disassembly;
  `tools/callmatch.py` gives call-graph votes, `tools/callers.py` lists callers).
- game.h: __AXDSPResumeCallback 0x8017A424, DecrementerExceptionCallback 0x8015B400, iosFree 0x801A4820,
  OSExitThread 0x801641D0, interrupt table r13-0x6440, IOS heap r13-0x6D4C. SelectThread idle loop 0x80163E3C.

## Input
- WPADRead (0x801DC210) is the newer build: copies a per-format status size from a table (fn_801D8AD8). The HLE is
  unchanged. KPADRead (0x801EE6E8) and KPADInit (0x801EEFFC) are 3-/0-argument wrappers around KPADiRead
  (5 arguments) and KPADInitEx; the game calls only the wrappers.
- The game reads raw WPADRead from fn_8006FDF0 (core / Nunchuk / Classic formats like King) but its prompts and menus
  use the remote's 1/2 buttons: the remote is held sideways. Default `controls = sideways`, GAME_REMOTE_UPRIGHT
  is not set (d-pad rotated: screen up = remote RIGHT). In Classic mode the core buttons are empty, so the
  game cannot be confirmed - keep sideways.
- Button table 0x802DC588 (game bit <- WPAD bit), same layout as King's 0x8025F018.

## NAND
- Game logic is Squirrel 2 bytecode (script/ProgramSystemCompR.cnb, script/ProgramArchlordCompR.cnb.press = LZ11).
  `tools/sqdis.py file.cnb funcName` disassembles a function. Native functions are registered by name through
  fn_80082240 (e.g. CNandCheck = fn_8011764C, CCreateBannerFile = fn_801176E4).
- Save flow (stepMain): STEP_FREEAREACHECK -> nandCheck(14 blocks, 2 inodes) -> STEP_CREATEFILE shows
  TXT_MENU_NAND_CREATE ("Creating save data.") and waits for the confirm button (2) before creating
  banner.bin + DARK.SAV.
- NANDCheck is replaced (hle_fs.cpp): always enough room. ISFS GetUsage on a missing folder returns 0/0 instead
  of ENOENT, since /meta, /ticket and /title/0001000x always exist on a real NAND (shared).
- The game also opens My Life as a King's save, /title/00010001/57464345/data/ARCH.SAV.

## Debugging added here (shared)
- `TRACE_ALL=1 python3 recomp.py ...` puts trace_call() in every function (not only named ones);
  `TRACE_AFTER=<hex>` then counts every call after that function first runs and prints the counts on exit.
- The exit/timeout status prints the guest OSThread list (state, priority, wait queue).

## Testing
- Headless: `AUTOPRESS_FRAMES=1 AUTOPRESS="2@300-304,RIGHT@335-338,..."` (remote names; times in rendered frames),
  `SHOT_EVERY`/`SHOT_DIR`, `FS_LOG=1`, `ES_LOG=1`, `INPUTLOG=1`, `PERF=1`. The settings file is written next to the
  executable on first run (src/build/mylifedarklord.ini) and wins over the game.h default.
- Software GL (llvmpipe, 2 cores): ~18 fps in menus, ~7 fps in the tower.
