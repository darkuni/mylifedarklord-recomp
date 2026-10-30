# Final Fantasy Crystal Chronicles: My Life as a Darklord (WiiWare, NTSC-U) - native recompilation

A static recompilation of **Final Fantasy Crystal Chronicles: My Life as a Darklord** (WiiWare, NTSC-U, title `WF2E`)
and its add-on content to native code. The game's PowerPC executable is translated to C++ and runs on Windows
(and Linux) with a small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game (and optionally the DLC) as WAD files. The build
turns your WADs into a `game` folder and generates the C++ from the executable inside it.

## Status (v0.1)

- Started from the [mylifeking-recomp](https://github.com/darkuni/mylifeking-recomp) v0.4 tree (same engine,
  same runtime). Plays on Windows (tester-confirmed). Prebuilt Windows builds are on the
  [Releases](https://github.com/darkuni/mylifedarklord-recomp/releases) page.
- DLC: all 39 items of the add-on pack (`00010005-WF2E`) are installed as add-on content (`game/dlc`) and the
  game loads its packages. "Purchase Add-on Content" needs the Wii Shop and does not work.
- Controls: the game is played with the Wii Remote held sideways (prompts show 1/2), so `controls = sideways`
  is the default.

Shares its recompiler and runtime with [mylifeking-recomp](https://github.com/darkuni/mylifeking-recomp),
[chocobo-dungeon-recomp](https://github.com/darkuni/chocobo-dungeon-recomp) and the ReBirth ports; per-game
addresses are in `src/runtime/game.h` and the idle loop in `src/recomp.py`. See [NOTES.md](NOTES.md).

## Controls

`controls = sideways | nunchuk | classic` in `mylifedarklord.ini`, or the F1 settings menu. Use sideways.

- Gamepad: d-pad / left stick = remote d-pad (rotated for the sideways grip), A = 2 (confirm), B = 1 (cancel),
  X = remote A, Y = remote B, Start = +, Back = -.
- Keyboard: arrows = d-pad, X = 2, Z = 1, A = remote A, S = remote B, Enter = +, Backspace = -, H = Home.

Hold Tab (or click the right stick) for fast-forward, F1 / Esc for settings, F11 / Alt+Enter for fullscreen.

## Layout

| Path | What it is |
| --- | --- |
| `tools/prepare_wad.py` | Unpacks the game WAD (and the DLC WAD into `game/dlc`) |
| `tools/xmatch.py`, `tools/*.json` | Function naming against My Life as a King (`xmatch_king.json`) plus manual names |
| `tools/sqdis.py` | Squirrel 2 bytecode disassembler for the game scripts |
| `src/recomp.py` | Recompiler: `main.dol` + symbols -> `src/gen/*.cpp` |
| `src/runtime/` | Runtime: CPU context and memory, threads, IOS/ES, GX -> OpenGL 3.3, AX audio, input |
| `src/runtime/game.h` | Game-specific addresses the runtime needs |
| `src/hle.txt` | Guest functions replaced by host code or stubbed |
| `config/` | Symbols and decomp-toolkit (dtk) project files |
| `dist/` | Batch files shipped with the Windows build (game folder setup, audio recording) |

## Building

Requirements: Python 3.11+, `pip install libWiiPy`, CMake, Ninja, a C++17 compiler; Windows builds are
cross-compiled with mingw-w64 (posix threads) and the SDL2 mingw development package.

```sh
python3 tools/prepare_wad.py <game>.wad game [<dlc>.wad]
cd src
python3 recomp.py ../game/main.dol symbols.txt gen 300
cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake \
      -DSDL2_DIR=/path/to/SDL2-2.30.x/x86_64-w64-mingw32
ninja -C build-win
# Linux headless test build:
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build
SHOT_EVERY=100 SHOT_DIR=shots TIMEOUT=120 ./build/mylifedarklord ../game
```

Ship `mylifedarklord.exe` with `SDL2.dll`, `libwinpthread-1.dll`, `src/runtime/ipl-font-licenses.txt`, the files in
`dist/` and `tools/prepare_wad.py` + `tools/lz11.py`.

## Disclaimer

This is an unofficial fan project. It is **not affiliated with, endorsed by, or sponsored by** Square Enix or
Nintendo. *Final Fantasy Crystal Chronicles: My Life as a Darklord* and all related names and marks belong to their
respective owners. This repository contains no game code or game data; you need your own legally obtained copy.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components (fonts,
OpenGL headers) keep their own licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
