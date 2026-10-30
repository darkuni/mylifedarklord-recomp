// Per-game constants for Final Fantasy Crystal Chronicles: My Life as a Darklord (WF2E, WiiWare, NTSC-U)
// with its DLC title (00010005-57463245) loaded from game/dlc.
// Addresses come from config/symbols.txt (dtk + naming pass vs My Life as a King, tools/xmatch_king.json,
// plus tools/manual_dl.json for the newer WPAD/KPAD build);
// r13 offsets were read from the instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "My Life as a Darklord"
#define GAME_EXE         "mylifedarklord"
#define GAME_INI         "mylifedarklord.ini"
#define GAME_DEFAULT_CONTROLS "sideways"   // the game is played with the Wii Remote held sideways (prompts show the 1/2 buttons)
// Unlike My Life as a King, the remote is held sideways, so GAME_REMOTE_UPRIGHT is not set (d-pad rotated as in the
// ReBirth ports).

#define G_AX_RESUME_CB          0x8017A424u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x8015B400u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x801A4820u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x801641D0u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x6440u       // __OSGetInterruptHandler: lwz r4,-0x6440(r13)
#define G_SDA_IOS_HEAP          0x6D4Cu       // __ios_Ipc2: lwz r3,-0x6D4C(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_801641D0
#define G_FN_IOS_FREE           f_801A4820
