Final Fantasy Crystal Chronicles: My Life as a Darklord + DLC - native Windows build (static recompilation)
@VERSION@
https://github.com/darkuni/mylifedarklord-recomp

No game data is included. You need your own copy of the game (and optionally the DLC) as WAD files.

Setup
  Put your WAD(s) in this folder and run mylifedarklord.exe:
       FFCC My Life as a Darklord NTSC-U.wad              (base game, required - any file name works)
       FFCC My Life as a Dark Lord NTSC-U DLC Complete.wad (DLC pack, optional)
  On the first start it builds the "game" folder (and game\dlc) from them in a few seconds.
  The WADs aren't needed after that. Nothing else to install.

Folder layout (portable)
  mylifedarklord.exe, SDL2.dll, libwinpthread-1.dll   the program
  mylifedarklord.ini                                   settings (created on first run)
  mylifedarklord.log                                   log of the last run - send this with bug reports
  game\                                                base game (made on the first start)
  game\dlc\                                            DLC pack (39 items), loaded as installed add-on content
  nand\                                                saves (created on first run)

Requirements: 64-bit Windows 10/11, a GPU with OpenGL 3.3.

Controls - the game is played with the Wii Remote held sideways ("controls = sideways", the default).
On-screen prompts show the remote's 2 (confirm) and 1 (cancel) buttons.
  Gamepad:  d-pad / left stick = remote d-pad (rotated for the sideways grip, so up is up),
            A = 2 (confirm), B = 1 (cancel), X = remote A, Y = remote B, Start = +, Back = -
  Keyboard: arrows = d-pad, X = 2 (confirm), Z = 1 (cancel), A = remote A, S = remote B,
            Enter = +, Backspace = -, H = Home
  Hold Tab (or click the right stick) for fast-forward. F1 / Esc or Start+Back = settings menu.
  F11 / Alt+Enter = fullscreen.

Add-on content: all 39 items in the DLC pack are installed and readable by the game.
"Purchase Add-on Content" on the title menu needs the Wii Shop, which is offline here (error 50299).

My Life as a King save: the game looks for the King save (nand\title\00010001\57464345\data\ARCH.SAV).
To let it find yours, copy the King port's nand\title\00010001\57464345 folder into this nand\title\00010001\.

Sound problems: run record-audio.bat instead of the exe; it also saves what the game sends to the
sound card as mld_audio.wav - send that with mylifedarklord.log.

Unofficial fan project, not affiliated with Square Enix or Nintendo. The exe contains code
machine-translated from the game's executable; game data comes from your own WADs.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
