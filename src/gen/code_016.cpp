#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// __DSP_debug_printf
void f_8017CEA0(Ctx* __restrict c) {
  trace_call(0x8017CEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017CEA0
  if (!crb(c,6)) { goto L_8017CEC8; } // 8017CEA4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8017CEA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8017CEAC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8017CEB0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8017CEB4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8017CEB8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8017CEBC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8017CEC0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8017CEC4
L_8017CEC8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8017CEC8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8017CECC
  W32(c->r[1]+0x00000010u,c->r[5]); // 8017CED0
  W32(c->r[1]+0x00000014u,c->r[6]); // 8017CED4
  W32(c->r[1]+0x00000018u,c->r[7]); // 8017CED8
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8017CEDC
  W32(c->r[1]+0x00000020u,c->r[9]); // 8017CEE0
  W32(c->r[1]+0x00000024u,c->r[10]); // 8017CEE4
  c->r[1]=c->r[1]+0x00000070u; // 8017CEE8
  return; // 8017CEEC
}

// __DSPHandler
void f_8017CEF0(Ctx* __restrict c) {
  trace_call(0x8017CEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017CEF0
  c->r[0]=c->lr; // 8017CEF4
  c->r[6]=0u+0xCC000000u; // 8017CEF8
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8017CEFC
  c->r[0]=0u+0xFFFFFFD7u; // 8017CF00
  c->r[3]=c->r[1]+0x00000008u; // 8017CF04
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8017CF08
  c->r[31]=c->r[4]|c->r[4]; // 8017CF0C
  c->r[5]=R16(c->r[6]+0x0000500Au); // 8017CF10
  c->r[0]=c->r[5]&c->r[0]; // 8017CF14
  c->r[0]=c->r[0]|0x00000080u; // 8017CF18
  W16(c->r[6]+0x0000500Au,c->r[0]); // 8017CF1C
  c->lr=0x8017CF24u; f_8015CACC(c); // 8017CF20
  c->r[3]=c->r[1]+0x00000008u; // 8017CF24
  c->lr=0x8017CF2Cu; f_8015C8A4(c); // 8017CF28
L_8017CF2C:;
  c->lr=0x8017CF30u; f_8017CC34(c); // 8017CF2C
  cmps(c,0,(int32_t)c->r[3],0); // 8017CF30
  if (crb(c,2)) { IRQCHK(c); goto L_8017CF2C; } // 8017CF34
  c->lr=0x8017CF3Cu; f_8017CC44(c); // 8017CF38
  c->r[5]=R32(c->r[13]+0xFFFFA01Cu); // 8017CF3C
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017CF40
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8017CF44
  if (crb(c,2)) { goto L_8017CF60; } // 8017CF48
  c->r[0]=c->r[3]+0x232F0000u; // 8017CF4C
  cmpu(c,0,c->r[0],0x00000002u); // 8017CF50
  if (!crb(c,2)) { goto L_8017CF60; } // 8017CF54
  c->r[3]=0u+0xDCD10000u; // 8017CF58
  c->r[3]=c->r[3]+0x00000003u; // 8017CF5C
L_8017CF60:;
  c->r[4]=0u+0xDCD10000u; // 8017CF60
  c->r[0]=c->r[4]+0x00000002u; // 8017CF64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8017CF68
  if (crb(c,2)) { goto L_8017CFE0; } // 8017CF6C
  if (!crb(c,0)) { goto L_8017CF84; } // 8017CF70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 8017CF74
  if (crb(c,2)) { goto L_8017CF98; } // 8017CF78
  if (!crb(c,0)) { goto L_8017CFBC; } // 8017CF7C
  goto L_8017D300; // 8017CF80
L_8017CF84:;
  c->r[0]=c->r[4]+0x00000004u; // 8017CF84
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8017CF88
  if (crb(c,2)) { goto L_8017D2E8; } // 8017CF8C
  if (!crb(c,0)) { goto L_8017D300; } // 8017CF90
  goto L_8017D148; // 8017CF94
L_8017CF98:;
  c->r[0]=0u+0x00000001u; // 8017CF98
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017CF9C
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017CFA0
  c->r[12]=R32(c->r[3]+0x00000028u); // 8017CFA4
  cmps(c,0,(int32_t)c->r[12],0); // 8017CFA8
  if (crb(c,2)) { goto L_8017D300; } // 8017CFAC
  c->ctr=c->r[12]; // 8017CFB0
  if (true) { c->lr=0x8017CFB8u; dispatch(c,c->ctr); } // 8017CFB4
  goto L_8017D300; // 8017CFB8
L_8017CFBC:;
  c->r[0]=0u+0x00000001u; // 8017CFBC
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017CFC0
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017CFC4
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 8017CFC8
  cmps(c,0,(int32_t)c->r[12],0); // 8017CFCC
  if (crb(c,2)) { goto L_8017D300; } // 8017CFD0
  c->ctr=c->r[12]; // 8017CFD4
  if (true) { c->lr=0x8017CFDCu; dispatch(c,c->ctr); } // 8017CFD8
  goto L_8017D300; // 8017CFDC
L_8017CFE0:;
  c->r[0]=R32(c->r[13]+0xFFFFA008u); // 8017CFE0
  cmps(c,0,(int32_t)c->r[0],0); // 8017CFE4
  if (crb(c,2)) { goto L_8017D080; } // 8017CFE8
  c->r[0]=R32(c->r[13]+0xFFFFA00Cu); // 8017CFEC
  cmpu(c,0,c->r[5],c->r[0]); // 8017CFF0
  if (!crb(c,2)) { goto L_8017D038; } // 8017CFF4
  c->r[3]=0u+0xCDD10000u; // 8017CFF8
  c->r[3]=c->r[3]+0x00000003u; // 8017CFFC
  c->lr=0x8017D004u; f_8017CC58(c); // 8017D000
L_8017D004:;
  c->lr=0x8017D008u; f_8017CC24(c); // 8017D004
  cmps(c,0,(int32_t)c->r[3],0); // 8017D008
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D004; } // 8017D00C
  c->r[0]=0u+0x00000000u; // 8017D010
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D014
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 8017D018
  W32(c->r[13]+0xFFFFA008u,c->r[0]); // 8017D01C
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 8017D020
  cmps(c,0,(int32_t)c->r[12],0); // 8017D024
  if (crb(c,2)) { goto L_8017D300; } // 8017D028
  c->ctr=c->r[12]; // 8017D02C
  if (true) { c->lr=0x8017D034u; dispatch(c,c->ctr); } // 8017D030
  goto L_8017D300; // 8017D034
L_8017D038:;
  c->r[3]=0u+0xCDD10000u; // 8017D038
  c->r[3]=c->r[3]+0x00000001u; // 8017D03C
  c->lr=0x8017D044u; f_8017CC58(c); // 8017D040
L_8017D044:;
  c->lr=0x8017D048u; f_8017CC24(c); // 8017D044
  cmps(c,0,(int32_t)c->r[3],0); // 8017D048
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D044; } // 8017D04C
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D050
  c->r[4]=R32(c->r[13]+0xFFFFA00Cu); // 8017D054
  c->lr=0x8017D05Cu; f_8017D324(c); // 8017D058
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D05C
  c->r[4]=0u+0x00000002u; // 8017D060
  c->r[0]=0u+0x00000000u; // 8017D064
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017D068
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 8017D06C
  W32(c->r[13]+0xFFFFA008u,c->r[0]); // 8017D070
  W32(c->r[13]+0xFFFFA01Cu,c->r[3]); // 8017D074
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 8017D078
  goto L_8017D300; // 8017D07C
L_8017D080:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 8017D080
  cmps(c,0,(int32_t)c->r[0],0); // 8017D084
  if (!crb(c,2)) { goto L_8017D108; } // 8017D088
  c->r[0]=R32(c->r[13]+0xFFFFA018u); // 8017D08C
  cmpu(c,0,c->r[5],c->r[0]); // 8017D090
  if (!crb(c,2)) { goto L_8017D0CC; } // 8017D094
  c->r[3]=0u+0xCDD10000u; // 8017D098
  c->r[3]=c->r[3]+0x00000003u; // 8017D09C
  c->lr=0x8017D0A4u; f_8017CC58(c); // 8017D0A0
L_8017D0A4:;
  c->lr=0x8017D0A8u; f_8017CC24(c); // 8017D0A4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D0A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D0A4; } // 8017D0AC
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D0B0
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 8017D0B4
  cmps(c,0,(int32_t)c->r[12],0); // 8017D0B8
  if (crb(c,2)) { goto L_8017D300; } // 8017D0BC
  c->ctr=c->r[12]; // 8017D0C0
  if (true) { c->lr=0x8017D0C8u; dispatch(c,c->ctr); } // 8017D0C4
  goto L_8017D300; // 8017D0C8
L_8017D0CC:;
  c->r[3]=0u+0xCDD10000u; // 8017D0CC
  c->r[3]=c->r[3]+0x00000001u; // 8017D0D0
  c->lr=0x8017D0D8u; f_8017CC58(c); // 8017D0D4
L_8017D0D8:;
  c->lr=0x8017D0DCu; f_8017CC24(c); // 8017D0D8
  cmps(c,0,(int32_t)c->r[3],0); // 8017D0DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D0D8; } // 8017D0E0
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D0E4
  c->r[4]=R32(c->r[13]+0xFFFFA018u); // 8017D0E8
  c->lr=0x8017D0F0u; f_8017D324(c); // 8017D0EC
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D0F0
  c->r[0]=0u+0x00000002u; // 8017D0F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017D0F8
  c->r[0]=R32(c->r[13]+0xFFFFA018u); // 8017D0FC
  W32(c->r[13]+0xFFFFA01Cu,c->r[0]); // 8017D100
  goto L_8017D300; // 8017D104
L_8017D108:;
  c->r[3]=0u+0xCDD10000u; // 8017D108
  c->r[3]=c->r[3]+0x00000001u; // 8017D10C
  c->lr=0x8017D114u; f_8017CC58(c); // 8017D110
L_8017D114:;
  c->lr=0x8017D118u; f_8017CC24(c); // 8017D114
  cmps(c,0,(int32_t)c->r[3],0); // 8017D118
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D114; } // 8017D11C
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D120
  c->r[4]=R32(c->r[3]+0x00000038u); // 8017D124
  c->lr=0x8017D12Cu; f_8017D324(c); // 8017D128
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D12C
  c->r[0]=0u+0x00000002u; // 8017D130
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017D134
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D138
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017D13C
  W32(c->r[13]+0xFFFFA01Cu,c->r[0]); // 8017D140
  goto L_8017D300; // 8017D144
L_8017D148:;
  c->r[0]=R32(c->r[13]+0xFFFFA008u); // 8017D148
  cmps(c,0,(int32_t)c->r[0],0); // 8017D14C
  if (crb(c,2)) { goto L_8017D1C8; } // 8017D150
  c->r[0]=R32(c->r[13]+0xFFFFA00Cu); // 8017D154
  cmpu(c,0,c->r[5],c->r[0]); // 8017D158
  if (crb(c,2)) { goto L_8017D1BC; } // 8017D15C
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D160
  cmps(c,0,(int32_t)c->r[12],0); // 8017D164
  if (crb(c,2)) { goto L_8017D178; } // 8017D168
  c->r[3]=c->r[5]|c->r[5]; // 8017D16C
  c->ctr=c->r[12]; // 8017D170
  if (true) { c->lr=0x8017D178u; dispatch(c,c->ctr); } // 8017D174
L_8017D178:;
  c->r[3]=0u+0xCDD10000u; // 8017D178
  c->r[3]=c->r[3]+0x00000001u; // 8017D17C
  c->lr=0x8017D184u; f_8017CC58(c); // 8017D180
L_8017D184:;
  c->lr=0x8017D188u; f_8017CC24(c); // 8017D184
  cmps(c,0,(int32_t)c->r[3],0); // 8017D188
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D184; } // 8017D18C
  c->r[4]=R32(c->r[13]+0xFFFFA00Cu); // 8017D190
  c->r[3]=0u+0x00000000u; // 8017D194
  c->lr=0x8017D19Cu; f_8017D324(c); // 8017D198
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D19C
  c->lr=0x8017D1A4u; f_8017D6F0(c); // 8017D1A0
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 8017D1A4
  c->r[0]=0u+0x00000000u; // 8017D1A8
  W32(c->r[13]+0xFFFFA008u,c->r[0]); // 8017D1AC
  W32(c->r[13]+0xFFFFA01Cu,c->r[3]); // 8017D1B0
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 8017D1B4
  goto L_8017D300; // 8017D1B8
L_8017D1BC:;
  c->r[0]=0u+0x00000000u; // 8017D1BC
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 8017D1C0
  W32(c->r[13]+0xFFFFA008u,c->r[0]); // 8017D1C4
L_8017D1C8:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 8017D1C8
  cmps(c,0,(int32_t)c->r[0],0); // 8017D1CC
  if (!crb(c,2)) { goto L_8017D284; } // 8017D1D0
  c->r[0]=R32(c->r[13]+0xFFFFA018u); // 8017D1D4
  cmpu(c,0,c->r[5],c->r[0]); // 8017D1D8
  if (!crb(c,2)) { goto L_8017D228; } // 8017D1DC
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D1E0
  cmps(c,0,(int32_t)c->r[12],0); // 8017D1E4
  if (crb(c,2)) { goto L_8017D1F8; } // 8017D1E8
  c->r[3]=c->r[5]|c->r[5]; // 8017D1EC
  c->ctr=c->r[12]; // 8017D1F0
  if (true) { c->lr=0x8017D1F8u; dispatch(c,c->ctr); } // 8017D1F4
L_8017D1F8:;
  c->r[3]=0u+0xCDD10000u; // 8017D1F8
  c->r[3]=c->r[3]+0x00000002u; // 8017D1FC
  c->lr=0x8017D204u; f_8017CC58(c); // 8017D200
L_8017D204:;
  c->lr=0x8017D208u; f_8017CC24(c); // 8017D204
  cmps(c,0,(int32_t)c->r[3],0); // 8017D208
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D204; } // 8017D20C
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D210
  c->r[0]=0u+0x00000003u; // 8017D214
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017D218
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D21C
  c->lr=0x8017D224u; f_8017D6F0(c); // 8017D220
  goto L_8017D300; // 8017D224
L_8017D228:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D228
  cmps(c,0,(int32_t)c->r[12],0); // 8017D22C
  if (crb(c,2)) { goto L_8017D240; } // 8017D230
  c->r[3]=c->r[5]|c->r[5]; // 8017D234
  c->ctr=c->r[12]; // 8017D238
  if (true) { c->lr=0x8017D240u; dispatch(c,c->ctr); } // 8017D23C
L_8017D240:;
  c->r[3]=0u+0xCDD10000u; // 8017D240
  c->r[3]=c->r[3]+0x00000001u; // 8017D244
  c->lr=0x8017D24Cu; f_8017CC58(c); // 8017D248
L_8017D24C:;
  c->lr=0x8017D250u; f_8017CC24(c); // 8017D24C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D250
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D24C; } // 8017D254
  c->r[4]=R32(c->r[13]+0xFFFFA01Cu); // 8017D258
  c->r[0]=0u+0x00000003u; // 8017D25C
  c->r[3]=0u+0x00000000u; // 8017D260
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017D264
  c->r[4]=R32(c->r[13]+0xFFFFA018u); // 8017D268
  c->lr=0x8017D270u; f_8017D324(c); // 8017D26C
  c->r[0]=R32(c->r[13]+0xFFFFA018u); // 8017D270
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 8017D274
  W32(c->r[13]+0xFFFFA01Cu,c->r[0]); // 8017D278
  c->lr=0x8017D280u; f_8017D6F0(c); // 8017D27C
  goto L_8017D300; // 8017D280
L_8017D284:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 8017D284
  cmps(c,0,(int32_t)c->r[12],0); // 8017D288
  if (crb(c,2)) { goto L_8017D29C; } // 8017D28C
  c->r[3]=c->r[5]|c->r[5]; // 8017D290
  c->ctr=c->r[12]; // 8017D294
  if (true) { c->lr=0x8017D29Cu; dispatch(c,c->ctr); } // 8017D298
L_8017D29C:;
  c->r[3]=0u+0xCDD10000u; // 8017D29C
  c->r[3]=c->r[3]+0x00000001u; // 8017D2A0
  c->lr=0x8017D2A8u; f_8017CC58(c); // 8017D2A4
L_8017D2A8:;
  c->lr=0x8017D2ACu; f_8017CC24(c); // 8017D2A8
  cmps(c,0,(int32_t)c->r[3],0); // 8017D2AC
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D2A8; } // 8017D2B0
  c->r[4]=R32(c->r[13]+0xFFFFA01Cu); // 8017D2B4
  c->r[0]=0u+0x00000003u; // 8017D2B8
  c->r[3]=0u+0x00000000u; // 8017D2BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017D2C0
  c->r[4]=R32(c->r[13]+0xFFFFA01Cu); // 8017D2C4
  c->r[4]=R32(c->r[4]+0x00000038u); // 8017D2C8
  c->lr=0x8017D2D0u; f_8017D324(c); // 8017D2CC
  c->r[3]=R32(c->r[13]+0xFFFFA01Cu); // 8017D2D0
  c->r[3]=R32(c->r[3]+0x00000038u); // 8017D2D4
  W32(c->r[13]+0xFFFFA01Cu,c->r[3]); // 8017D2D8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8017D2DC
  c->lr=0x8017D2E4u; f_8017D6F0(c); // 8017D2E0
  goto L_8017D300; // 8017D2E4
L_8017D2E8:;
  c->r[12]=R32(c->r[5]+0x00000034u); // 8017D2E8
  cmps(c,0,(int32_t)c->r[12],0); // 8017D2EC
  if (crb(c,2)) { goto L_8017D300; } // 8017D2F0
  c->r[3]=c->r[5]|c->r[5]; // 8017D2F4
  c->ctr=c->r[12]; // 8017D2F8
  if (true) { c->lr=0x8017D300u; dispatch(c,c->ctr); } // 8017D2FC
L_8017D300:;
  c->r[3]=c->r[1]+0x00000008u; // 8017D300
  c->lr=0x8017D308u; f_8015CACC(c); // 8017D304
  c->r[3]=c->r[31]|c->r[31]; // 8017D308
  c->lr=0x8017D310u; f_8015C8A4(c); // 8017D30C
  c->r[0]=R32(c->r[1]+0x000002E4u); // 8017D310
  c->r[31]=R32(c->r[1]+0x000002DCu); // 8017D314
  c->lr=c->r[0]; // 8017D318
  c->r[1]=c->r[1]+0x000002E0u; // 8017D31C
  return; // 8017D320
}

// __DSP_exec_task
void f_8017D324(Ctx* __restrict c) {
  trace_call(0x8017D324u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D324
  c->r[0]=c->lr; // 8017D328
  cmps(c,0,(int32_t)c->r[3],0); // 8017D32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D334
  c->r[31]=c->r[4]|c->r[4]; // 8017D338
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017D33C
  c->r[30]=c->r[3]|c->r[3]; // 8017D340
  if (crb(c,2)) { goto L_8017D388; } // 8017D344
  c->r[3]=R32(c->r[3]+0x00000018u); // 8017D348
  c->lr=0x8017D350u; f_8017CC58(c); // 8017D34C
L_8017D350:;
  c->lr=0x8017D354u; f_8017CC24(c); // 8017D350
  cmps(c,0,(int32_t)c->r[3],0); // 8017D354
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D350; } // 8017D358
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8017D35C
  c->lr=0x8017D364u; f_8017CC58(c); // 8017D360
L_8017D364:;
  c->lr=0x8017D368u; f_8017CC24(c); // 8017D364
  cmps(c,0,(int32_t)c->r[3],0); // 8017D368
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D364; } // 8017D36C
  c->r[3]=R32(c->r[30]+0x00000020u); // 8017D370
  c->lr=0x8017D378u; f_8017CC58(c); // 8017D374
L_8017D378:;
  c->lr=0x8017D37Cu; f_8017CC24(c); // 8017D378
  cmps(c,0,(int32_t)c->r[3],0); // 8017D37C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D378; } // 8017D380
  goto L_8017D3C4; // 8017D384
L_8017D388:;
  c->r[3]=0u+0x00000000u; // 8017D388
  c->lr=0x8017D390u; f_8017CC58(c); // 8017D38C
L_8017D390:;
  c->lr=0x8017D394u; f_8017CC24(c); // 8017D390
  cmps(c,0,(int32_t)c->r[3],0); // 8017D394
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D390; } // 8017D398
  c->r[3]=0u+0x00000000u; // 8017D39C
  c->lr=0x8017D3A4u; f_8017CC58(c); // 8017D3A0
L_8017D3A4:;
  c->lr=0x8017D3A8u; f_8017CC24(c); // 8017D3A4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D3A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D3A4; } // 8017D3AC
  c->r[3]=0u+0x00000000u; // 8017D3B0
  c->lr=0x8017D3B8u; f_8017CC58(c); // 8017D3B4
L_8017D3B8:;
  c->lr=0x8017D3BCu; f_8017CC24(c); // 8017D3B8
  cmps(c,0,(int32_t)c->r[3],0); // 8017D3BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D3B8; } // 8017D3C0
L_8017D3C4:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8017D3C4
  c->lr=0x8017D3CCu; f_8017CC58(c); // 8017D3C8
L_8017D3CC:;
  c->lr=0x8017D3D0u; f_8017CC24(c); // 8017D3CC
  cmps(c,0,(int32_t)c->r[3],0); // 8017D3D0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D3CC; } // 8017D3D4
  c->r[3]=R32(c->r[31]+0x00000010u); // 8017D3D8
  c->lr=0x8017D3E0u; f_8017CC58(c); // 8017D3DC
L_8017D3E0:;
  c->lr=0x8017D3E4u; f_8017CC24(c); // 8017D3E0
  cmps(c,0,(int32_t)c->r[3],0); // 8017D3E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D3E0; } // 8017D3E8
  c->r[3]=R32(c->r[31]+0x00000014u); // 8017D3EC
  c->lr=0x8017D3F4u; f_8017CC58(c); // 8017D3F0
L_8017D3F4:;
  c->lr=0x8017D3F8u; f_8017CC24(c); // 8017D3F4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D3F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D3F4; } // 8017D3FC
  c->r[0]=R32(c->r[31]+0x00000000u); // 8017D400
  cmps(c,0,(int32_t)c->r[0],0); // 8017D404
  if (!crb(c,2)) { goto L_8017D460; } // 8017D408
  c->r[3]=R16(c->r[31]+0x00000024u); // 8017D40C
  c->lr=0x8017D414u; f_8017CC58(c); // 8017D410
L_8017D414:;
  c->lr=0x8017D418u; f_8017CC24(c); // 8017D414
  cmps(c,0,(int32_t)c->r[3],0); // 8017D418
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D414; } // 8017D41C
  c->r[3]=0u+0x00000000u; // 8017D420
  c->lr=0x8017D428u; f_8017CC58(c); // 8017D424
L_8017D428:;
  c->lr=0x8017D42Cu; f_8017CC24(c); // 8017D428
  cmps(c,0,(int32_t)c->r[3],0); // 8017D42C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D428; } // 8017D430
  c->r[3]=0u+0x00000000u; // 8017D434
  c->lr=0x8017D43Cu; f_8017CC58(c); // 8017D438
L_8017D43C:;
  c->lr=0x8017D440u; f_8017CC24(c); // 8017D43C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D440
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D43C; } // 8017D444
  c->r[3]=0u+0x00000000u; // 8017D448
  c->lr=0x8017D450u; f_8017CC58(c); // 8017D44C
L_8017D450:;
  c->lr=0x8017D454u; f_8017CC24(c); // 8017D450
  cmps(c,0,(int32_t)c->r[3],0); // 8017D454
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D450; } // 8017D458
  goto L_8017D4B0; // 8017D45C
L_8017D460:;
  c->r[3]=R16(c->r[31]+0x00000026u); // 8017D460
  c->lr=0x8017D468u; f_8017CC58(c); // 8017D464
L_8017D468:;
  c->lr=0x8017D46Cu; f_8017CC24(c); // 8017D468
  cmps(c,0,(int32_t)c->r[3],0); // 8017D46C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D468; } // 8017D470
  c->r[3]=R32(c->r[31]+0x00000018u); // 8017D474
  c->lr=0x8017D47Cu; f_8017CC58(c); // 8017D478
L_8017D47C:;
  c->lr=0x8017D480u; f_8017CC24(c); // 8017D47C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D480
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D47C; } // 8017D484
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8017D488
  c->lr=0x8017D490u; f_8017CC58(c); // 8017D48C
L_8017D490:;
  c->lr=0x8017D494u; f_8017CC24(c); // 8017D490
  cmps(c,0,(int32_t)c->r[3],0); // 8017D494
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D490; } // 8017D498
  c->r[3]=R32(c->r[31]+0x00000020u); // 8017D49C
  c->lr=0x8017D4A4u; f_8017CC58(c); // 8017D4A0
L_8017D4A4:;
  c->lr=0x8017D4A8u; f_8017CC24(c); // 8017D4A4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D4A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D4A4; } // 8017D4AC
L_8017D4B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D4B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D4B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017D4B8
  c->lr=c->r[0]; // 8017D4BC
  c->r[1]=c->r[1]+0x00000010u; // 8017D4C0
  return; // 8017D4C4
}

// __DSP_boot_task
void f_8017D4C8(Ctx* __restrict c) {
  trace_call(0x8017D4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D4C8
  c->r[0]=c->lr; // 8017D4CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017D4D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017D4D4
  c->r[31]=0u+0x80330000u; // 8017D4D8
  c->r[31]=c->r[31]+0xFFFFF640u; // 8017D4DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017D4E0
  c->r[30]=c->r[3]|c->r[3]; // 8017D4E4
L_8017D4E8:;
  c->lr=0x8017D4ECu; f_8017CC34(c); // 8017D4E8
  cmps(c,0,(int32_t)c->r[3],0); // 8017D4EC
  if (crb(c,2)) { IRQCHK(c); goto L_8017D4E8; } // 8017D4F0
  c->lr=0x8017D4F8u; f_8017CC44(c); // 8017D4F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8017D4F8
  c->r[3]=0u+0x80F40000u; // 8017D4FC
  c->r[3]=c->r[3]+0xFFFFA001u; // 8017D500
  c->lr=0x8017D508u; f_8017CC58(c); // 8017D504
L_8017D508:;
  c->lr=0x8017D50Cu; f_8017CC24(c); // 8017D508
  cmps(c,0,(int32_t)c->r[3],0); // 8017D50C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D508; } // 8017D510
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8017D514
  c->lr=0x8017D51Cu; f_8017CC58(c); // 8017D518
L_8017D51C:;
  c->lr=0x8017D520u; f_8017CC24(c); // 8017D51C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D520
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D51C; } // 8017D524
  c->r[3]=0u+0x80F40000u; // 8017D528
  c->r[3]=c->r[3]+0xFFFFC002u; // 8017D52C
  c->lr=0x8017D534u; f_8017CC58(c); // 8017D530
L_8017D534:;
  c->lr=0x8017D538u; f_8017CC24(c); // 8017D534
  cmps(c,0,(int32_t)c->r[3],0); // 8017D538
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D534; } // 8017D53C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8017D540
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8017D544
  c->lr=0x8017D54Cu; f_8017CC58(c); // 8017D548
L_8017D54C:;
  c->lr=0x8017D550u; f_8017CC24(c); // 8017D54C
  cmps(c,0,(int32_t)c->r[3],0); // 8017D550
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D54C; } // 8017D554
  c->r[3]=0u+0x80F40000u; // 8017D558
  c->r[3]=c->r[3]+0xFFFFA002u; // 8017D55C
  c->lr=0x8017D564u; f_8017CC58(c); // 8017D560
L_8017D564:;
  c->lr=0x8017D568u; f_8017CC24(c); // 8017D564
  cmps(c,0,(int32_t)c->r[3],0); // 8017D568
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D564; } // 8017D56C
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017D570
  c->lr=0x8017D578u; f_8017CC58(c); // 8017D574
L_8017D578:;
  c->lr=0x8017D57Cu; f_8017CC24(c); // 8017D578
  cmps(c,0,(int32_t)c->r[3],0); // 8017D57C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D578; } // 8017D580
  c->r[3]=0u+0x80F40000u; // 8017D584
  c->r[3]=c->r[3]+0xFFFFB002u; // 8017D588
  c->lr=0x8017D590u; f_8017CC58(c); // 8017D58C
L_8017D590:;
  c->lr=0x8017D594u; f_8017CC24(c); // 8017D590
  cmps(c,0,(int32_t)c->r[3],0); // 8017D594
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D590; } // 8017D598
  c->r[3]=0u+0x00000000u; // 8017D59C
  c->lr=0x8017D5A4u; f_8017CC58(c); // 8017D5A0
L_8017D5A4:;
  c->lr=0x8017D5A8u; f_8017CC24(c); // 8017D5A4
  cmps(c,0,(int32_t)c->r[3],0); // 8017D5A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D5A4; } // 8017D5AC
  c->r[3]=0u+0x80F40000u; // 8017D5B0
  c->r[3]=c->r[3]+0xFFFFD001u; // 8017D5B4
  c->lr=0x8017D5BCu; f_8017CC58(c); // 8017D5B8
L_8017D5BC:;
  c->lr=0x8017D5C0u; f_8017CC24(c); // 8017D5BC
  cmps(c,0,(int32_t)c->r[3],0); // 8017D5C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D5BC; } // 8017D5C4
  c->r[3]=R16(c->r[30]+0x00000024u); // 8017D5C8
  c->lr=0x8017D5D0u; f_8017CC58(c); // 8017D5CC
L_8017D5D0:;
  c->lr=0x8017D5D4u; f_8017CC24(c); // 8017D5D0
  cmps(c,0,(int32_t)c->r[3],0); // 8017D5D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D5D0; } // 8017D5D8
  c->r[4]=c->r[30]|c->r[30]; // 8017D5DC
  c->r[3]=c->r[31]+0x00000000u; // 8017D5E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017D5E4
  c->lr=0x8017D5ECu; f_8017CEA0(c); // 8017D5E8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8017D5EC
  c->r[3]=c->r[31]+0x00000020u; // 8017D5F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017D5F4
  c->lr=0x8017D5FCu; f_8017CEA0(c); // 8017D5F8
  c->r[4]=R32(c->r[30]+0x00000014u); // 8017D5FC
  c->r[3]=c->r[31]+0x00000050u; // 8017D600
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017D604
  c->lr=0x8017D60Cu; f_8017CEA0(c); // 8017D608
  c->r[4]=R32(c->r[30]+0x00000010u); // 8017D60C
  c->r[3]=c->r[31]+0x00000080u; // 8017D610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017D614
  c->lr=0x8017D61Cu; f_8017CEA0(c); // 8017D618
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 8017D61C
  c->r[3]=c->r[31]+0x000000B0u; // 8017D620
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017D624
  c->lr=0x8017D62Cu; f_8017CEA0(c); // 8017D628
  c->r[4]=R16(c->r[30]+0x00000024u); // 8017D62C
  c->r[3]=c->r[31]+0x000000E0u; // 8017D630
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017D634
  c->lr=0x8017D63Cu; f_8017CEA0(c); // 8017D638
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017D63C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017D640
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017D644
  c->lr=c->r[0]; // 8017D648
  c->r[1]=c->r[1]+0x00000020u; // 8017D64C
  return; // 8017D650
}

// __DSP_insert_task
void f_8017D654(Ctx* __restrict c) {
  trace_call(0x8017D654u);
  c->r[5]=R32(c->r[13]+0xFFFFA018u); // 8017D654
  cmps(c,0,(int32_t)c->r[5],0); // 8017D658
  if (!crb(c,2)) { goto L_8017D6C0; } // 8017D65C
  W32(c->r[13]+0xFFFFA01Cu,c->r[3]); // 8017D660
  c->r[0]=0u+0x00000000u; // 8017D664
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 8017D668
  W32(c->r[13]+0xFFFFA018u,c->r[3]); // 8017D66C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017D670
  W32(c->r[3]+0x00000038u,c->r[0]); // 8017D674
  return; // 8017D678
  goto L_8017D6C0; // 8017D67C
L_8017D680:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017D680
  c->r[0]=R32(c->r[5]+0x00000004u); // 8017D684
  cmpu(c,0,c->r[4],c->r[0]); // 8017D688
  if (!crb(c,0)) { goto L_8017D6BC; } // 8017D68C
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 8017D690
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017D694
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 8017D698
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 8017D69C
  W32(c->r[3]+0x00000038u,c->r[5]); // 8017D6A0
  cmps(c,0,(int32_t)c->r[4],0); // 8017D6A4
  if (!crb(c,2)) { goto L_8017D6B4; } // 8017D6A8
  W32(c->r[13]+0xFFFFA018u,c->r[3]); // 8017D6AC
  goto L_8017D6C8; // 8017D6B0
L_8017D6B4:;
  W32(c->r[4]+0x00000038u,c->r[3]); // 8017D6B4
  goto L_8017D6C8; // 8017D6B8
L_8017D6BC:;
  c->r[5]=R32(c->r[5]+0x00000038u); // 8017D6BC
L_8017D6C0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017D6C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D680; } // 8017D6C4
L_8017D6C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017D6C8
  if (!crb(c,2)) return; // 8017D6CC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 8017D6D0
  c->r[0]=0u+0x00000000u; // 8017D6D4
  W32(c->r[4]+0x00000038u,c->r[3]); // 8017D6D8
  W32(c->r[3]+0x00000038u,c->r[0]); // 8017D6DC
  c->r[0]=R32(c->r[13]+0xFFFFA014u); // 8017D6E0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017D6E4
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 8017D6E8
  return; // 8017D6EC
}

// __DSP_remove_task
void f_8017D6F0(Ctx* __restrict c) {
  trace_call(0x8017D6F0u);
  c->r[4]=0u+0x00000000u; // 8017D6F0
  c->r[0]=0u+0x00000003u; // 8017D6F4
  W32(c->r[3]+0x00000008u,c->r[4]); // 8017D6F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017D6FC
  c->r[0]=R32(c->r[13]+0xFFFFA018u); // 8017D700
  cmpu(c,0,c->r[0],c->r[3]); // 8017D704
  if (!crb(c,2)) { goto L_8017D738; } // 8017D708
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017D70C
  cmps(c,0,(int32_t)c->r[0],0); // 8017D710
  if (crb(c,2)) { goto L_8017D728; } // 8017D714
  W32(c->r[13]+0xFFFFA018u,c->r[0]); // 8017D718
  c->r[3]=R32(c->r[3]+0x00000038u); // 8017D71C
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8017D720
  return; // 8017D724
L_8017D728:;
  W32(c->r[13]+0xFFFFA01Cu,c->r[4]); // 8017D728
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 8017D72C
  W32(c->r[13]+0xFFFFA018u,c->r[4]); // 8017D730
  return; // 8017D734
L_8017D738:;
  c->r[0]=R32(c->r[13]+0xFFFFA014u); // 8017D738
  cmpu(c,0,c->r[0],c->r[3]); // 8017D73C
  if (!crb(c,2)) { goto L_8017D760; } // 8017D740
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017D744
  W32(c->r[13]+0xFFFFA014u,c->r[0]); // 8017D748
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8017D74C
  W32(c->r[3]+0x00000038u,c->r[4]); // 8017D750
  c->r[0]=R32(c->r[13]+0xFFFFA018u); // 8017D754
  W32(c->r[13]+0xFFFFA01Cu,c->r[0]); // 8017D758
  return; // 8017D75C
L_8017D760:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017D760
  W32(c->r[13]+0xFFFFA01Cu,c->r[0]); // 8017D764
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017D768
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 8017D76C
  W32(c->r[4]+0x00000038u,c->r[0]); // 8017D770
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017D774
  c->r[3]=R32(c->r[3]+0x00000038u); // 8017D778
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8017D77C
  return; // 8017D780
}

// __GXDefaultTexRegionCallback
void f_8017D784(Ctx* __restrict c) {
  trace_call(0x8017D784u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D784
  c->r[0]=c->lr; // 8017D788
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017D78C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017D790
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017D794
  c->r[30]=c->r[4]|c->r[4]; // 8017D798
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017D79C
  c->r[29]=c->r[3]|c->r[3]; // 8017D7A0
  c->lr=0x8017D7A8u; f_801829A8(c); // 8017D7A4
  c->r[31]=c->r[3]|c->r[3]; // 8017D7A8
  c->r[3]=c->r[29]|c->r[29]; // 8017D7AC
  c->lr=0x8017D7B4u; f_801829C8(c); // 8017D7B0
  c->r[0]=rotl(c->r[30],29)&0xE0000000u; // 8017D7B4
  c->r[4]=rotl(c->r[30],1)&0x00000001u; // 8017D7B8
  c->r[0]=c->r[0]-c->r[4]; // 8017D7BC
  cmps(c,0,(int32_t)c->r[31],7); // 8017D7C0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8017D7C4
  c->r[30]=c->r[0]+c->r[4]; // 8017D7C8
  if (crb(c,2)) { goto L_8017D830; } // 8017D7CC
  if (!crb(c,0)) { goto L_8017D7E0; } // 8017D7D0
  cmps(c,0,(int32_t)c->r[31],6); // 8017D7D4
  if (!crb(c,0)) { goto L_8017D7EC; } // 8017D7D8
  goto L_8017D830; // 8017D7DC
L_8017D7E0:;
  cmps(c,0,(int32_t)c->r[31],11); // 8017D7E0
  if (!crb(c,0)) { goto L_8017D830; } // 8017D7E4
  goto L_8017D81C; // 8017D7E8
L_8017D7EC:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8017D7EC
  if (crb(c,2)) { goto L_8017D808; } // 8017D7F0
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017D7F4
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8017D7F8
  c->r[3]=c->r[3]+c->r[0]; // 8017D7FC
  c->r[3]=c->r[3]+0x00000358u; // 8017D800
  goto L_8017D85C; // 8017D804
L_8017D808:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017D808
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8017D80C
  c->r[3]=c->r[3]+c->r[0]; // 8017D810
  c->r[3]=c->r[3]+0x000002D8u; // 8017D814
  goto L_8017D85C; // 8017D818
L_8017D81C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017D81C
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8017D820
  c->r[3]=c->r[3]+c->r[0]; // 8017D824
  c->r[3]=c->r[3]+0x00000258u; // 8017D828
  goto L_8017D85C; // 8017D82C
L_8017D830:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8017D830
  if (crb(c,2)) { goto L_8017D84C; } // 8017D834
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017D838
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8017D83C
  c->r[3]=c->r[3]+c->r[0]; // 8017D840
  c->r[3]=c->r[3]+0x000002D8u; // 8017D844
  goto L_8017D85C; // 8017D848
L_8017D84C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017D84C
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8017D850
  c->r[3]=c->r[3]+c->r[0]; // 8017D854
  c->r[3]=c->r[3]+0x00000258u; // 8017D858
L_8017D85C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017D85C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017D860
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017D864
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017D868
  c->lr=c->r[0]; // 8017D86C
  c->r[1]=c->r[1]+0x00000020u; // 8017D870
  return; // 8017D874
}

// __GXDefaultTlutRegionCallback
void f_8017D878(Ctx* __restrict c) {
  trace_call(0x8017D878u);
  cmpu(c,0,c->r[3],0x00000014u); // 8017D878
  if (crb(c,0)) { goto L_8017D888; } // 8017D87C
  c->r[3]=0u+0x00000000u; // 8017D880
  return; // 8017D884
L_8017D888:;
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 8017D888
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8017D88C
  c->r[3]=c->r[4]+c->r[0]; // 8017D890
  c->r[3]=c->r[3]+0x000003D8u; // 8017D894
  return; // 8017D898
}

// __GXShutdown
void f_8017D89C(Ctx* __restrict c) {
  trace_call(0x8017D89Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017D89C
  c->r[0]=c->lr; // 8017D8A0
  cmps(c,0,(int32_t)c->r[3],0); // 8017D8A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017D8A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017D8AC
  if (!crb(c,2)) { goto L_8017D988; } // 8017D8B0
  c->r[0]=R32(c->r[13]+0xFFFFA040u); // 8017D8B4
  cmps(c,0,(int32_t)c->r[0],0); // 8017D8B8
  if (!crb(c,2)) { goto L_8017D904; } // 8017D8BC
  c->r[5]=R32(c->r[13]+0xFFFFA02Cu); // 8017D8C0
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 8017D8C4
L_8017D8C8:;
  c->r[0]=c->r[4]|c->r[4]; // 8017D8C8
  c->r[3]=R16(c->r[5]+0x00000050u); // 8017D8CC
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 8017D8D0
  cmpu(c,0,c->r[4],c->r[0]); // 8017D8D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D8C8; } // 8017D8D8
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 8017D8DC
  c->r[0]=c->r[0]|c->r[3]; // 8017D8E0
  W32(c->r[13]+0xFFFFA030u,c->r[0]); // 8017D8E4
  c->lr=0x8017D8ECu; f_80164DF4(c); // 8017D8E8
  c->r[0]=0u+0x00000001u; // 8017D8EC
  W32(c->r[13]+0xFFFFA038u,c->r[3]); // 8017D8F0
  c->r[3]=0u+0x00000000u; // 8017D8F4
  W32(c->r[13]+0xFFFFA03Cu,c->r[4]); // 8017D8F8
  W32(c->r[13]+0xFFFFA040u,c->r[0]); // 8017D8FC
  goto L_8017D9F4; // 8017D900
L_8017D904:;
  c->lr=0x8017D908u; f_80164DF4(c); // 8017D904
  c->r[5]=R32(c->r[13]+0xFFFFA02Cu); // 8017D908
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 8017D90C
L_8017D910:;
  c->r[0]=c->r[7]|c->r[7]; // 8017D910
  c->r[10]=R16(c->r[5]+0x00000050u); // 8017D914
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 8017D918
  cmpu(c,0,c->r[7],c->r[0]); // 8017D91C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017D910; } // 8017D920
  c->r[5]=R32(c->r[13]+0xFFFFA03Cu); // 8017D924
  c->r[0]=0u+0x00000000u; // 8017D928
  c->r[6]=R32(c->r[13]+0xFFFFA038u); // 8017D92C
  c->r[9]=rotl(c->r[7],16)&0xFFFF0000u; // 8017D930
  c->r[8]=addc(c,~c->r[5],c->r[4],1); // 8017D934
  c->r[5]=0u+0x0000000Au; // 8017D938
  c->r[7]=addc(c,~c->r[6],c->r[3],c->xer_ca); // 8017D93C
  c->r[6]=c->r[0]^0x80000000u; // 8017D940
  c->r[5]=addc(c,~c->r[5],c->r[8],1); // 8017D944
  c->r[0]=c->r[7]^0x80000000u; // 8017D948
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 8017D94C
  c->r[5]=c->r[9]|c->r[10]; // 8017D950
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8017D954
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8017D958
  if (crb(c,2)) { goto L_8017D968; } // 8017D95C
  c->r[3]=0u+0x00000000u; // 8017D960
  goto L_8017D9F4; // 8017D964
L_8017D968:;
  c->r[0]=R32(c->r[13]+0xFFFFA030u); // 8017D968
  cmpu(c,0,c->r[5],c->r[0]); // 8017D96C
  if (crb(c,2)) { goto L_8017D9F0; } // 8017D970
  W32(c->r[13]+0xFFFFA038u,c->r[3]); // 8017D974
  c->r[3]=0u+0x00000000u; // 8017D978
  W32(c->r[13]+0xFFFFA030u,c->r[5]); // 8017D97C
  W32(c->r[13]+0xFFFFA03Cu,c->r[4]); // 8017D980
  goto L_8017D9F4; // 8017D984
L_8017D988:;
  c->r[3]=0u+0x00000000u; // 8017D988
  c->lr=0x8017D990u; f_8017F0AC(c); // 8017D98C
  c->r[3]=0u+0x00000000u; // 8017D990
  c->lr=0x8017D998u; f_801809B0(c); // 8017D994
  c->r[3]=0u+0x00000000u; // 8017D998
  c->lr=0x8017D9A0u; f_80180A78(c); // 8017D99C
  c->r[31]=0u+0x00000000u; // 8017D9A0
  c->r[3]=0u+0xCC010000u; // 8017D9A4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9A8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9AC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9B0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9B4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9B8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9BC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9C0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8017D9C4
  c->lr=0x8017D9CCu; f_8015980C(c); // 8017D9C8
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017D9CC
  c->r[5]=0u+0x00000003u; // 8017D9D0
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017D9D4
  c->r[0]=0u+0x00000001u; // 8017D9D8
  W16(c->r[4]+0x00000002u,c->r[31]); // 8017D9DC
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017D9E0
  W16(c->r[4]+0x00000004u,c->r[5]); // 8017D9E4
  W8(c->r[3]+0x000005FAu,c->r[0]); // 8017D9E8
  c->lr=0x8017D9F0u; f_80180310(c); // 8017D9EC
L_8017D9F0:;
  c->r[3]=0u+0x00000001u; // 8017D9F0
L_8017D9F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017D9F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017D9F8
  c->lr=c->r[0]; // 8017D9FC
  c->r[1]=c->r[1]+0x00000010u; // 8017DA00
  return; // 8017DA04
}

// __GXInitRevisionBits
void f_8017DA08(Ctx* __restrict c) {
  trace_call(0x8017DA08u);
  c->r[0]=0u+0x00000002u; // 8017DA08
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 8017DA0C
  c->r[7]=0u+0x00000000u; // 8017DA10
  c->r[5]=0u+0x00000008u; // 8017DA14
  c->r[4]=0u+0xCC010000u; // 8017DA18
  c->ctr=c->r[0]; // 8017DA1C
L_8017DA20:;
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 8017DA20
  c->r[3]=c->r[7]|0x00000080u; // 8017DA24
  c->r[7]=c->r[7]+0x00000001u; // 8017DA28
  c->r[0]=c->r[0]|0x40000000u; // 8017DA2C
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 8017DA30
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 8017DA34
  c->r[0]=c->r[0]|0x80000000u; // 8017DA38
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 8017DA3C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8017DA40
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 8017DA44
  c->r[3]=c->r[7]|0x00000080u; // 8017DA48
  c->r[7]=c->r[7]+0x00000001u; // 8017DA4C
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 8017DA50
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8017DA54
  c->r[0]=R32(c->r[6]+0x00000020u); // 8017DA58
  c->r[0]=c->r[0]|0x40000000u; // 8017DA5C
  W32(c->r[6]+0x00000020u,c->r[0]); // 8017DA60
  c->r[0]=R32(c->r[6]+0x00000040u); // 8017DA64
  c->r[0]=c->r[0]|0x80000000u; // 8017DA68
  W32(c->r[6]+0x00000040u,c->r[0]); // 8017DA6C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8017DA70
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 8017DA74
  c->r[3]=c->r[7]|0x00000080u; // 8017DA78
  c->r[7]=c->r[7]+0x00000001u; // 8017DA7C
  c->r[0]=R32(c->r[6]+0x00000040u); // 8017DA80
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8017DA84
  c->r[0]=R32(c->r[6]+0x00000024u); // 8017DA88
  c->r[0]=c->r[0]|0x40000000u; // 8017DA8C
  W32(c->r[6]+0x00000024u,c->r[0]); // 8017DA90
  c->r[0]=R32(c->r[6]+0x00000044u); // 8017DA94
  c->r[0]=c->r[0]|0x80000000u; // 8017DA98
  W32(c->r[6]+0x00000044u,c->r[0]); // 8017DA9C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8017DAA0
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 8017DAA4
  c->r[3]=c->r[7]|0x00000080u; // 8017DAA8
  c->r[7]=c->r[7]+0x00000001u; // 8017DAAC
  c->r[0]=R32(c->r[6]+0x00000044u); // 8017DAB0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8017DAB4
  c->r[0]=R32(c->r[6]+0x00000028u); // 8017DAB8
  c->r[0]=c->r[0]|0x40000000u; // 8017DABC
  W32(c->r[6]+0x00000028u,c->r[0]); // 8017DAC0
  c->r[0]=R32(c->r[6]+0x00000048u); // 8017DAC4
  c->r[0]=c->r[0]|0x80000000u; // 8017DAC8
  W32(c->r[6]+0x00000048u,c->r[0]); // 8017DACC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8017DAD0
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 8017DAD4
  c->r[0]=R32(c->r[6]+0x00000048u); // 8017DAD8
  c->r[6]=c->r[6]+0x00000010u; // 8017DADC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8017DAE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017DA20; } // 8017DAE4
  c->r[7]=0u+0xCC010000u; // 8017DAE8
  c->r[8]=0u+0x00000010u; // 8017DAEC
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8017DAF0
  c->r[4]=0u+0x00000000u; // 8017DAF4
  c->r[0]=0u+0x00001000u; // 8017DAF8
  c->r[5]=0u+0x00001012u; // 8017DAFC
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 8017DB00
  c->r[3]=c->r[4]|0x0000003Fu; // 8017DB04
  c->r[6]=c->r[4]|0x00000001u; // 8017DB08
  c->r[0]=0u+0x00000061u; // 8017DB0C
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 8017DB10
  c->r[3]=0u+0x00000058u; // 8017DB14
  c->r[4]=c->r[4]|0x0000000Fu; // 8017DB18
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8017DB1C
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DB20
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 8017DB24
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 8017DB28
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 8017DB2C
  W32(c->r[7]+0xFFFF8000u,c->r[4]); // 8017DB30
  return; // 8017DB34
}

// GXInit
void f_8017DB38(Ctx* __restrict c) {
  trace_call(0x8017DB38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017DB38
  c->r[0]=c->lr; // 8017DB3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017DB40
  c->r[11]=c->r[1]+0x00000020u; // 8017DB44
  c->lr=0x8017DB4Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017DB48
  c->r[27]=c->r[3]|c->r[3]; // 8017DB4C
  c->r[3]=R32(c->r[13]+0xFFFF91A8u); // 8017DB50
  c->r[26]=c->r[4]|c->r[4]; // 8017DB54
  c->lr=0x8017DB5Cu; f_8015AE88(c); // 8017DB58
  c->r[31]=R32(c->r[2]+0xFFFF8DA0u); // 8017DB5C
  c->r[0]=0u+0x00000000u; // 8017DB60
  c->r[29]=0u+0x00000001u; // 8017DB64
  c->r[3]=0u+0x00000001u; // 8017DB68
  W8(c->r[31]+0x000005F8u,c->r[0]); // 8017DB6C
  c->r[4]=0u+0x00000000u; // 8017DB70
  W8(c->r[31]+0x000005F9u,c->r[29]); // 8017DB74
  W8(c->r[31]+0x000005FAu,c->r[29]); // 8017DB78
  W32(c->r[31]+0x000005E4u,c->r[0]); // 8017DB7C
  W32(c->r[31]+0x000005E8u,c->r[0]); // 8017DB80
  c->lr=0x8017DB88u; f_80180228(c); // 8017DB84
  c->r[4]=0u+0xCC000000u; // 8017DB88
  c->r[5]=c->r[4]+0x00003000u; // 8017DB8C
  W32(c->r[13]+0xFFFFA024u,c->r[4]); // 8017DB90
  c->r[3]=c->r[4]+0x00001000u; // 8017DB94
  c->r[0]=c->r[4]+0x00004000u; // 8017DB98
  W32(c->r[13]+0xFFFFA020u,c->r[5]); // 8017DB9C
  W32(c->r[13]+0xFFFFA028u,c->r[3]); // 8017DBA0
  W32(c->r[13]+0xFFFFA02Cu,c->r[0]); // 8017DBA4
  c->lr=0x8017DBACu; f_8017F0F0(c); // 8017DBA8
  c->r[28]=0u+0x80390000u; // 8017DBAC
  c->r[4]=c->r[27]|c->r[27]; // 8017DBB0
  c->r[5]=c->r[26]|c->r[26]; // 8017DBB4
  c->r[3]=c->r[28]+0xFFFFEF60u; // 8017DBB8
  c->lr=0x8017DBC0u; f_8017EAB0(c); // 8017DBBC
  c->r[3]=c->r[28]+0xFFFFEF60u; // 8017DBC0
  c->lr=0x8017DBC8u; f_8017EC34(c); // 8017DBC4
  c->r[3]=c->r[28]+0xFFFFEF60u; // 8017DBC8
  c->lr=0x8017DBD0u; f_8017EE14(c); // 8017DBCC
  c->r[0]=R32(c->r[13]+0xFFFFA044u); // 8017DBD0
  cmps(c,0,(int32_t)c->r[0],0); // 8017DBD4
  if (!crb(c,2)) { goto L_8017DBEC; } // 8017DBD8
  c->r[3]=0u+0x80330000u; // 8017DBDC
  c->r[3]=c->r[3]+0xFFFFF9B0u; // 8017DBE0
  c->lr=0x8017DBE8u; f_801621BC(c); // 8017DBE4
  W32(c->r[13]+0xFFFFA044u,c->r[29]); // 8017DBE8
L_8017DBEC:;
  c->lr=0x8017DBF0u; f_80180B3C(c); // 8017DBEC
  c->lr=0x8017DBF4u; f_801598A0(c); // 8017DBF0
  c->r[4]=0u+0x0C010000u; // 8017DBF4
  c->r[28]=c->r[3]|c->r[3]; // 8017DBF8
  c->r[3]=c->r[4]+0xFFFF8000u; // 8017DBFC
  c->lr=0x8017DC04u; f_801598B0(c); // 8017DC00
  c->r[3]=c->r[28]|0x40000000u; // 8017DC04
  c->lr=0x8017DC0Cu; f_801598A8(c); // 8017DC08
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017DC0C
  c->r[8]=0u+0x00000000u; // 8017DC10
  c->r[0]=0u+0x0000000Fu; // 8017DC14
  c->r[5]=0u+0x000000FFu; // 8017DC18
  W32(c->r[3]+0x00000254u,c->r[8]); // 8017DC1C
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8017DC20
  c->r[0]=0u+0x00000022u; // 8017DC24
  c->r[4]=0u+0x00000000u; // 8017DC28
  W32(c->r[3]+0x00000174u,c->r[5]); // 8017DC2C
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DC30
  c->r[0]=0u+0x00000008u; // 8017DC34
  c->r[9]=c->r[3]|c->r[3]; // 8017DC38
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 8017DC3C
  c->r[26]=0u+0x00000000u; // 8017DC40
  c->r[10]=0u+0x000000C0u; // 8017DC44
  c->r[6]=0u+0x000000FFu; // 8017DC48
  c->ctr=c->r[0]; // 8017DC4C
L_8017DC50:;
  W32(c->r[9]+0x00000180u,c->r[8]); // 8017DC50
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 8017DC54
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 8017DC58
  c->r[11]=c->r[10]+0x00000001u; // 8017DC5C
  W32(c->r[9]+0x000001C0u,c->r[8]); // 8017DC60
  c->r[27]=c->r[3]+c->r[7]; // 8017DC64
  c->r[26]=c->r[26]+0x00000001u; // 8017DC68
  c->r[5]=c->r[12]+0x000000F6u; // 8017DC6C
  W32(c->r[27]+0x00000150u,c->r[8]); // 8017DC70
  c->r[0]=c->r[12]+0x00000028u; // 8017DC74
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 8017DC78
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 8017DC7C
  W32(c->r[9]+0x000005A4u,c->r[6]); // 8017DC80
  c->r[26]=c->r[26]+0x00000001u; // 8017DC84
  c->r[4]=R32(c->r[9]+0x00000180u); // 8017DC88
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DC8C
  W32(c->r[9]+0x00000180u,c->r[4]); // 8017DC90
  c->r[4]=R32(c->r[9]+0x000001C0u); // 8017DC94
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DC98
  c->r[11]=c->r[10]+0x00000003u; // 8017DC9C
  c->r[10]=c->r[10]+0x00000002u; // 8017DCA0
  W32(c->r[9]+0x000001C0u,c->r[4]); // 8017DCA4
  c->r[4]=R32(c->r[27]+0x00000200u); // 8017DCA8
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DCAC
  c->r[5]=c->r[12]+0x000000F6u; // 8017DCB0
  W32(c->r[27]+0x00000200u,c->r[4]); // 8017DCB4
  c->r[4]=R32(c->r[27]+0x00000150u); // 8017DCB8
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DCBC
  c->r[0]=c->r[12]+0x00000028u; // 8017DCC0
  W32(c->r[27]+0x00000150u,c->r[4]); // 8017DCC4
  c->r[27]=c->r[3]+c->r[7]; // 8017DCC8
  W32(c->r[9]+0x00000184u,c->r[8]); // 8017DCCC
  W32(c->r[9]+0x000001C4u,c->r[8]); // 8017DCD0
  W32(c->r[27]+0x00000150u,c->r[8]); // 8017DCD4
  W32(c->r[9]+0x000005A8u,c->r[6]); // 8017DCD8
  c->r[4]=R32(c->r[9]+0x00000184u); // 8017DCDC
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DCE0
  c->r[10]=c->r[10]+0x00000002u; // 8017DCE4
  W32(c->r[9]+0x00000184u,c->r[4]); // 8017DCE8
  c->r[4]=R32(c->r[9]+0x000001C4u); // 8017DCEC
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DCF0
  W32(c->r[9]+0x000001C4u,c->r[4]); // 8017DCF4
  c->r[9]=c->r[9]+0x00000008u; // 8017DCF8
  c->r[4]=R32(c->r[27]+0x00000200u); // 8017DCFC
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DD00
  W32(c->r[27]+0x00000200u,c->r[4]); // 8017DD04
  c->r[4]=R32(c->r[27]+0x00000150u); // 8017DD08
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DD0C
  W32(c->r[27]+0x00000150u,c->r[4]); // 8017DD10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017DC50; } // 8017DD14
  c->r[0]=0u+0x00000027u; // 8017DD18
  c->r[4]=0u+0x00000000u; // 8017DD1C
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DD20
  c->r[5]=0u+0x00000030u; // 8017DD24
  c->r[0]=0u+0x00000002u; // 8017DD28
  W32(c->r[31]+0x00000170u,c->r[4]); // 8017DD2C
  c->ctr=c->r[0]; // 8017DD30
L_8017DD34:;
  c->r[4]=0u+0x00000000u; // 8017DD34
  c->r[6]=c->r[5]+0x00000001u; // 8017DD38
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DD3C
  c->r[0]=0u+0x00000000u; // 8017DD40
  W32(c->r[3]+0x00000108u,c->r[4]); // 8017DD44
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8017DD48
  c->r[6]=c->r[5]+0x00000003u; // 8017DD4C
  c->r[5]=c->r[5]+0x00000002u; // 8017DD50
  W32(c->r[3]+0x00000128u,c->r[0]); // 8017DD54
  c->r[4]=0u+0x00000000u; // 8017DD58
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DD5C
  c->r[0]=0u+0x00000000u; // 8017DD60
  W32(c->r[3]+0x0000010Cu,c->r[4]); // 8017DD64
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8017DD68
  c->r[6]=c->r[5]+0x00000003u; // 8017DD6C
  c->r[5]=c->r[5]+0x00000002u; // 8017DD70
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 8017DD74
  c->r[4]=0u+0x00000000u; // 8017DD78
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DD7C
  c->r[0]=0u+0x00000000u; // 8017DD80
  W32(c->r[3]+0x00000110u,c->r[4]); // 8017DD84
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8017DD88
  c->r[6]=c->r[5]+0x00000003u; // 8017DD8C
  c->r[5]=c->r[5]+0x00000002u; // 8017DD90
  W32(c->r[3]+0x00000130u,c->r[0]); // 8017DD94
  c->r[4]=0u+0x00000000u; // 8017DD98
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DD9C
  c->r[0]=0u+0x00000000u; // 8017DDA0
  W32(c->r[3]+0x00000114u,c->r[4]); // 8017DDA4
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8017DDA8
  c->r[5]=c->r[5]+0x00000002u; // 8017DDAC
  W32(c->r[3]+0x00000134u,c->r[0]); // 8017DDB0
  c->r[3]=c->r[3]+0x00000010u; // 8017DDB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017DD34; } // 8017DDB8
  c->r[30]=R32(c->r[2]+0xFFFF8DA0u); // 8017DDBC
  c->r[3]=0u+0x10620000u; // 8017DDC0
  c->r[4]=0u+0x00000020u; // 8017DDC4
  c->r[0]=0u+0x00000021u; // 8017DDC8
  c->r[5]=R32(c->r[30]+0x00000148u); // 8017DDCC
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8017DDD0
  c->r[8]=0u+0x00000041u; // 8017DDD4
  c->r[7]=0u+0x00000042u; // 8017DDD8
  W32(c->r[30]+0x00000148u,c->r[5]); // 8017DDDC
  c->r[6]=0u+0x00000040u; // 8017DDE0
  c->r[5]=0u+0x00000043u; // 8017DDE4
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017DDE8
  c->r[4]=R32(c->r[30]+0x0000014Cu); // 8017DDEC
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017DDF0
  {uint32_t ea=c->r[2]+0xFFFF8DA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017DDF4
  c->r[0]=0u+0x00000000u; // 8017DDF8
  W32(c->r[30]+0x0000014Cu,c->r[4]); // 8017DDFC
  c->r[4]=0u+0x80000000u; // 8017DE00
  c->r[3]=c->r[3]+0x00004DD3u; // 8017DE04
  c->r[9]=R32(c->r[30]+0x00000220u); // 8017DE08
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 8017DE0C
  W32(c->r[30]+0x00000220u,c->r[9]); // 8017DE10
  c->r[8]=R32(c->r[30]+0x00000224u); // 8017DE14
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8017DE18
  W32(c->r[30]+0x00000224u,c->r[8]); // 8017DE1C
  c->r[7]=R32(c->r[30]+0x00000228u); // 8017DE20
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8017DE24
  W32(c->r[30]+0x00000228u,c->r[7]); // 8017DE28
  c->r[6]=R32(c->r[30]+0x0000022Cu); // 8017DE2C
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8017DE30
  W32(c->r[30]+0x0000022Cu,c->r[6]); // 8017DE34
  c->r[5]=R32(c->r[30]+0x0000024Cu); // 8017DE38
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE7Fu; // 8017DE3C
  W32(c->r[30]+0x0000024Cu,c->r[5]); // 8017DE40
  {uint32_t ea=c->r[30]+0x00000560u; WF32(ea,c->f[1]);} // 8017DE44
  {uint32_t ea=c->r[30]+0x0000055Cu; WF32(ea,c->f[0]);} // 8017DE48
  W32(c->r[30]+0x000005FCu,c->r[0]); // 8017DE4C
  W8(c->r[30]+0x000005FBu,c->r[0]); // 8017DE50
  c->r[0]=R32(c->r[4]+0x000000F8u); // 8017DE54
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 8017DE58
  c->r[26]=rotl(c->r[0],27)&0x07FFFFFFu; // 8017DE5C
  c->lr=0x8017DE64u; f_801837EC(c); // 8017DE60
  c->r[0]=rotl(c->r[26],21)&0x001FFFFFu; // 8017DE64
  c->r[29]=0u+0xCC010000u; // 8017DE68
  c->r[28]=0u+0x00000061u; // 8017DE6C
  c->r[0]=c->r[0]|0x69000000u; // 8017DE70
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8017DE74
  c->r[0]=c->r[0]|0x00000400u; // 8017DE78
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 8017DE7C
  c->lr=0x8017DE84u; f_801837EC(c); // 8017DE80
  c->r[3]=0u+0x3E100000u; // 8017DE84
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8017DE88
  c->r[0]=c->r[3]+0xFFFF83E1u; // 8017DE8C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 8017DE90
  c->r[0]=rotl(c->r[0],22)&0x003FFFFFu; // 8017DE94
  c->r[0]=c->r[0]|0x46000000u; // 8017DE98
  c->r[0]=c->r[0]|0x00000200u; // 8017DE9C
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 8017DEA0
  c->lr=0x8017DEA8u; f_8017DA08(c); // 8017DEA4
  c->r[28]=0u+0x80330000u; // 8017DEA8
  c->r[29]=c->r[30]+0x00000258u; // 8017DEAC
  c->r[27]=c->r[30]+0x000002D8u; // 8017DEB0
  c->r[30]=c->r[30]+0x00000358u; // 8017DEB4
  c->r[28]=c->r[28]+0xFFFFF8F0u; // 8017DEB8
  c->r[26]=0u+0x00000000u; // 8017DEBC
L_8017DEC0:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 8017DEC0
  c->r[3]=c->r[29]|c->r[29]; // 8017DEC4
  c->r[7]=R32(c->r[28]+0x00000020u); // 8017DEC8
  c->r[4]=0u+0x00000000u; // 8017DECC
  c->r[6]=0u+0x00000000u; // 8017DED0
  c->r[8]=0u+0x00000000u; // 8017DED4
  c->lr=0x8017DEDCu; f_80182D34(c); // 8017DED8
  c->r[5]=R32(c->r[28]+0x00000040u); // 8017DEDC
  c->r[3]=c->r[27]|c->r[27]; // 8017DEE0
  c->r[7]=R32(c->r[28]+0x00000060u); // 8017DEE4
  c->r[4]=0u+0x00000000u; // 8017DEE8
  c->r[6]=0u+0x00000000u; // 8017DEEC
  c->r[8]=0u+0x00000000u; // 8017DEF0
  c->lr=0x8017DEF8u; f_80182D34(c); // 8017DEF4
  c->r[5]=R32(c->r[28]+0x00000080u); // 8017DEF8
  c->r[3]=c->r[30]|c->r[30]; // 8017DEFC
  c->r[7]=R32(c->r[28]+0x000000A0u); // 8017DF00
  c->r[4]=0u+0x00000001u; // 8017DF04
  c->r[6]=0u+0x00000000u; // 8017DF08
  c->r[8]=0u+0x00000000u; // 8017DF0C
  c->lr=0x8017DF14u; f_80182D34(c); // 8017DF10
  c->r[26]=c->r[26]+0x00000001u; // 8017DF14
  c->r[29]=c->r[29]+0x00000010u; // 8017DF18
  cmpu(c,0,c->r[26],0x00000008u); // 8017DF1C
  c->r[27]=c->r[27]+0x00000010u; // 8017DF20
  c->r[30]=c->r[30]+0x00000010u; // 8017DF24
  c->r[28]=c->r[28]+0x00000004u; // 8017DF28
  if (crb(c,0)) { IRQCHK(c); goto L_8017DEC0; } // 8017DF2C
  c->r[29]=c->r[31]+0x000003D8u; // 8017DF30
  c->r[27]=0u+0x00000000u; // 8017DF34
  c->r[28]=0u+0x000C0000u; // 8017DF38
L_8017DF3C:;
  c->r[3]=c->r[29]|c->r[29]; // 8017DF3C
  c->r[4]=c->r[28]|c->r[28]; // 8017DF40
  c->r[5]=0u+0x00000010u; // 8017DF44
  c->lr=0x8017DF4Cu; f_80182DE8(c); // 8017DF48
  c->r[27]=c->r[27]+0x00000001u; // 8017DF4C
  c->r[29]=c->r[29]+0x00000010u; // 8017DF50
  cmpu(c,0,c->r[27],0x00000010u); // 8017DF54
  c->r[28]=c->r[28]+0x00002000u; // 8017DF58
  if (crb(c,0)) { IRQCHK(c); goto L_8017DF3C; } // 8017DF5C
  c->r[29]=c->r[31]+0x000003D8u; // 8017DF60
  c->r[27]=0u+0x00000000u; // 8017DF64
  c->r[28]=0u+0x000E0000u; // 8017DF68
L_8017DF6C:;
  c->r[0]=c->r[27]+0x00000010u; // 8017DF6C
  c->r[4]=c->r[28]|c->r[28]; // 8017DF70
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8017DF74
  c->r[5]=0u+0x00000040u; // 8017DF78
  c->r[3]=c->r[29]+c->r[0]; // 8017DF7C
  c->lr=0x8017DF84u; f_80182DE8(c); // 8017DF80
  c->r[27]=c->r[27]+0x00000001u; // 8017DF84
  c->r[28]=c->r[28]+0x00010000u; // 8017DF88
  cmpu(c,0,c->r[27],0x00000004u); // 8017DF8C
  c->r[28]=c->r[28]+0xFFFF8000u; // 8017DF90
  if (crb(c,0)) { IRQCHK(c); goto L_8017DF6C; } // 8017DF94
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017DF98
  c->r[12]=0u+0x00000000u; // 8017DF9C
  c->r[9]=0u+0xCC010000u; // 8017DFA0
  c->r[10]=0u+0x00000008u; // 8017DFA4
  W16(c->r[3]+0x00000006u,c->r[12]); // 8017DFA8
  c->r[3]=0u+0x00000020u; // 8017DFAC
  c->r[8]=0u+0x00000010u; // 8017DFB0
  c->r[7]=0u+0x00001006u; // 8017DFB4
  c->r[0]=R32(c->r[31]+0x000005F4u); // 8017DFB8
  c->r[6]=0u+0x00000061u; // 8017DFBC
  c->r[5]=0u+0x23000000u; // 8017DFC0
  c->r[4]=0u+0x24000000u; // 8017DFC4
  c->r[11]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 8017DFC8
  c->r[0]=0u+0x67000000u; // 8017DFCC
  W32(c->r[31]+0x000005F4u,c->r[11]); // 8017DFD0
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 8017DFD4
  W8(c->r[9]+0xFFFF8000u,c->r[3]); // 8017DFD8
  c->r[3]=R32(c->r[31]+0x000005F4u); // 8017DFDC
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 8017DFE0
  c->r[3]=0u+0x00000000u; // 8017DFE4
  W8(c->r[9]+0xFFFF8000u,c->r[8]); // 8017DFE8
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 8017DFEC
  W32(c->r[9]+0xFFFF8000u,c->r[12]); // 8017DFF0
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 8017DFF4
  W32(c->r[9]+0xFFFF8000u,c->r[5]); // 8017DFF8
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 8017DFFC
  W32(c->r[9]+0xFFFF8000u,c->r[4]); // 8017E000
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 8017E004
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 8017E008
  c->lr=0x8017E010u; f_801837BC(c); // 8017E00C
  c->r[3]=0u+0x00000002u; // 8017E010
  c->lr=0x8017E018u; f_80183070(c); // 8017E014
  c->lr=0x8017E01Cu; f_8017E03C(c); // 8017E018
  c->r[3]=0u+0x80390000u; // 8017E01C
  c->r[11]=c->r[1]+0x00000020u; // 8017E020
  c->r[3]=c->r[3]+0xFFFFEF60u; // 8017E024
  c->lr=0x8017E02Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017E028
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E02C
  c->lr=c->r[0]; // 8017E030
  c->r[1]=c->r[1]+0x00000020u; // 8017E034
  return; // 8017E038
}

// __GXInitGX
void f_8017E03C(Ctx* __restrict c) {
  trace_call(0x8017E03Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E03C
  c->r[0]=c->lr; // 8017E040
  c->r[10]=0u+0x43300000u; // 8017E044
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8017E048
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8017E04C
  c->r[31]=0u+0x00000000u; // 8017E050
  W32(c->r[1]+0x00000098u,c->r[30]); // 8017E054
  c->r[30]=0u+0x80330000u; // 8017E058
  c->r[30]=c->r[30]+0xFFFFF780u; // 8017E05C
  W32(c->r[1]+0x00000094u,c->r[29]); // 8017E060
  W32(c->r[1]+0x00000090u,c->r[28]); // 8017E064
  c->r[9]=R8(c->r[2]+0xFFFF8DACu); // 8017E068
  c->r[8]=R8(c->r[2]+0xFFFF8DADu); // 8017E06C
  c->r[7]=R8(c->r[2]+0xFFFF8DAEu); // 8017E070
  c->r[6]=R8(c->r[2]+0xFFFF8DAFu); // 8017E074
  c->r[5]=R8(c->r[2]+0xFFFF8DB0u); // 8017E078
  c->r[4]=R8(c->r[2]+0xFFFF8DB1u); // 8017E07C
  c->r[3]=R8(c->r[2]+0xFFFF8DB2u); // 8017E080
  c->r[0]=R8(c->r[2]+0xFFFF8DB3u); // 8017E084
  W32(c->r[1]+0x00000078u,c->r[10]); // 8017E088
  W32(c->r[1]+0x00000080u,c->r[10]); // 8017E08C
  W8(c->r[1]+0x00000024u,c->r[9]); // 8017E090
  W8(c->r[1]+0x00000025u,c->r[8]); // 8017E094
  W8(c->r[1]+0x00000026u,c->r[7]); // 8017E098
  W8(c->r[1]+0x00000027u,c->r[6]); // 8017E09C
  W8(c->r[1]+0x00000020u,c->r[5]); // 8017E0A0
  W8(c->r[1]+0x00000021u,c->r[4]); // 8017E0A4
  W8(c->r[1]+0x00000022u,c->r[3]); // 8017E0A8
  W8(c->r[1]+0x00000023u,c->r[0]); // 8017E0AC
  c->lr=0x8017E0B4u; f_8017441C(c); // 8017E0B0
  cmps(c,0,(int32_t)c->r[3],2); // 8017E0B4
  if (crb(c,2)) { goto L_8017E100; } // 8017E0B8
  if (!crb(c,0)) { goto L_8017E0D0; } // 8017E0BC
  cmps(c,0,(int32_t)c->r[3],0); // 8017E0C0
  if (crb(c,2)) { goto L_8017E0DC; } // 8017E0C4
  if (!crb(c,0)) { goto L_8017E0E8; } // 8017E0C8
  goto L_8017E10C; // 8017E0CC
L_8017E0D0:;
  cmps(c,0,(int32_t)c->r[3],5); // 8017E0D0
  if (crb(c,2)) { goto L_8017E0F4; } // 8017E0D4
  goto L_8017E10C; // 8017E0D8
L_8017E0DC:;
  c->r[29]=0u+0x80330000u; // 8017E0DC
  c->r[29]=c->r[29]+0xFFFFFC00u; // 8017E0E0
  goto L_8017E114; // 8017E0E4
L_8017E0E8:;
  c->r[29]=0u+0x80330000u; // 8017E0E8
  c->r[29]=c->r[29]+0xFFFFFCF0u; // 8017E0EC
  goto L_8017E114; // 8017E0F0
L_8017E0F4:;
  c->r[29]=0u+0x80330000u; // 8017E0F4
  c->r[29]=c->r[29]+0xFFFFFD2Cu; // 8017E0F8
  goto L_8017E114; // 8017E0FC
L_8017E100:;
  c->r[29]=0u+0x80330000u; // 8017E100
  c->r[29]=c->r[29]+0xFFFFFC78u; // 8017E104
  goto L_8017E114; // 8017E108
L_8017E10C:;
  c->r[29]=0u+0x80330000u; // 8017E10C
  c->r[29]=c->r[29]+0xFFFFFC00u; // 8017E110
L_8017E114:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017E114
  c->r[4]=0u+0x01000000u; // 8017E118
  c->r[3]=c->r[1]+0x0000001Cu; // 8017E11C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017E120
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8017E124
  c->lr=0x8017E12Cu; f_801817A4(c); // 8017E128
  c->r[3]=0u+0x00000000u; // 8017E12C
  c->r[4]=0u+0x00000001u; // 8017E130
  c->r[5]=0u+0x00000004u; // 8017E134
  c->r[6]=0u+0x0000003Cu; // 8017E138
  c->r[7]=0u+0x00000000u; // 8017E13C
  c->r[8]=0u+0x0000007Du; // 8017E140
  c->lr=0x8017E148u; f_8017FFDC(c); // 8017E144
  c->r[3]=0u+0x00000001u; // 8017E148
  c->r[4]=0u+0x00000001u; // 8017E14C
  c->r[5]=0u+0x00000005u; // 8017E150
  c->r[6]=0u+0x0000003Cu; // 8017E154
  c->r[7]=0u+0x00000000u; // 8017E158
  c->r[8]=0u+0x0000007Du; // 8017E15C
  c->lr=0x8017E164u; f_8017FFDC(c); // 8017E160
  c->r[3]=0u+0x00000002u; // 8017E164
  c->r[4]=0u+0x00000001u; // 8017E168
  c->r[5]=0u+0x00000006u; // 8017E16C
  c->r[6]=0u+0x0000003Cu; // 8017E170
  c->r[7]=0u+0x00000000u; // 8017E174
  c->r[8]=0u+0x0000007Du; // 8017E178
  c->lr=0x8017E180u; f_8017FFDC(c); // 8017E17C
  c->r[3]=0u+0x00000003u; // 8017E180
  c->r[4]=0u+0x00000001u; // 8017E184
  c->r[5]=0u+0x00000007u; // 8017E188
  c->r[6]=0u+0x0000003Cu; // 8017E18C
  c->r[7]=0u+0x00000000u; // 8017E190
  c->r[8]=0u+0x0000007Du; // 8017E194
  c->lr=0x8017E19Cu; f_8017FFDC(c); // 8017E198
  c->r[3]=0u+0x00000004u; // 8017E19C
  c->r[4]=0u+0x00000001u; // 8017E1A0
  c->r[5]=0u+0x00000008u; // 8017E1A4
  c->r[6]=0u+0x0000003Cu; // 8017E1A8
  c->r[7]=0u+0x00000000u; // 8017E1AC
  c->r[8]=0u+0x0000007Du; // 8017E1B0
  c->lr=0x8017E1B8u; f_8017FFDC(c); // 8017E1B4
  c->r[3]=0u+0x00000005u; // 8017E1B8
  c->r[4]=0u+0x00000001u; // 8017E1BC
  c->r[5]=0u+0x00000009u; // 8017E1C0
  c->r[6]=0u+0x0000003Cu; // 8017E1C4
  c->r[7]=0u+0x00000000u; // 8017E1C8
  c->r[8]=0u+0x0000007Du; // 8017E1CC
  c->lr=0x8017E1D4u; f_8017FFDC(c); // 8017E1D0
  c->r[3]=0u+0x00000006u; // 8017E1D4
  c->r[4]=0u+0x00000001u; // 8017E1D8
  c->r[5]=0u+0x0000000Au; // 8017E1DC
  c->r[6]=0u+0x0000003Cu; // 8017E1E0
  c->r[7]=0u+0x00000000u; // 8017E1E4
  c->r[8]=0u+0x0000007Du; // 8017E1E8
  c->lr=0x8017E1F0u; f_8017FFDC(c); // 8017E1EC
  c->r[3]=0u+0x00000007u; // 8017E1F0
  c->r[4]=0u+0x00000001u; // 8017E1F4
  c->r[5]=0u+0x0000000Bu; // 8017E1F8
  c->r[6]=0u+0x0000003Cu; // 8017E1FC
  c->r[7]=0u+0x00000000u; // 8017E200
  c->r[8]=0u+0x0000007Du; // 8017E204
  c->lr=0x8017E20Cu; f_8017FFDC(c); // 8017E208
  c->r[3]=0u+0x00000001u; // 8017E20C
  c->lr=0x8017E214u; f_80180204(c); // 8017E210
  c->lr=0x8017E218u; f_8017F908(c); // 8017E214
  c->lr=0x8017E21Cu; f_8017FFCC(c); // 8017E218
  c->r[28]=0u+0x00000009u; // 8017E21C
L_8017E220:;
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 8017E220
  c->r[3]=c->r[28]|c->r[28]; // 8017E224
  c->r[5]=0u+0x00000000u; // 8017E228
  c->lr=0x8017E230u; f_8017FF8C(c); // 8017E22C
  c->r[28]=c->r[28]+0x00000001u; // 8017E230
  cmpu(c,0,c->r[28],0x00000018u); // 8017E234
  if (!crb(c,1)) { IRQCHK(c); goto L_8017E220; } // 8017E238
  c->r[28]=0u+0x00000000u; // 8017E23C
L_8017E240:;
  c->r[3]=c->r[28]|c->r[28]; // 8017E240
  c->r[4]=c->r[30]+0x00000080u; // 8017E244
  c->lr=0x8017E24Cu; f_8017FADC(c); // 8017E248
  c->r[28]=c->r[28]+0x00000001u; // 8017E24C
  cmpu(c,0,c->r[28],0x00000008u); // 8017E250
  if (crb(c,0)) { IRQCHK(c); goto L_8017E240; } // 8017E254
  c->r[3]=0u+0x00000006u; // 8017E258
  c->r[4]=0u+0x00000000u; // 8017E25C
  c->lr=0x8017E264u; f_8018103C(c); // 8017E260
  c->r[3]=0u+0x00000006u; // 8017E264
  c->r[4]=0u+0x00000000u; // 8017E268
  c->lr=0x8017E270u; f_80181070(c); // 8017E26C
  c->r[3]=0u+0x00000000u; // 8017E270
  c->r[4]=0u+0x00000000u; // 8017E274
  c->r[5]=0u+0x00000000u; // 8017E278
  c->lr=0x8017E280u; f_801810A4(c); // 8017E27C
  c->r[3]=0u+0x00000001u; // 8017E280
  c->r[4]=0u+0x00000000u; // 8017E284
  c->r[5]=0u+0x00000000u; // 8017E288
  c->lr=0x8017E290u; f_801810A4(c); // 8017E28C
  c->r[3]=0u+0x00000002u; // 8017E290
  c->r[4]=0u+0x00000000u; // 8017E294
  c->r[5]=0u+0x00000000u; // 8017E298
  c->lr=0x8017E2A0u; f_801810A4(c); // 8017E29C
  c->r[3]=0u+0x00000003u; // 8017E2A0
  c->r[4]=0u+0x00000000u; // 8017E2A4
  c->r[5]=0u+0x00000000u; // 8017E2A8
  c->lr=0x8017E2B0u; f_801810A4(c); // 8017E2AC
  c->r[3]=0u+0x00000004u; // 8017E2B0
  c->r[4]=0u+0x00000000u; // 8017E2B4
  c->r[5]=0u+0x00000000u; // 8017E2B8
  c->lr=0x8017E2C0u; f_801810A4(c); // 8017E2BC
  c->r[3]=0u+0x00000005u; // 8017E2C0
  c->r[4]=0u+0x00000000u; // 8017E2C4
  c->r[5]=0u+0x00000000u; // 8017E2C8
  c->lr=0x8017E2D0u; f_801810A4(c); // 8017E2CC
  c->r[3]=0u+0x00000006u; // 8017E2D0
  c->r[4]=0u+0x00000000u; // 8017E2D4
  c->r[5]=0u+0x00000000u; // 8017E2D8
  c->lr=0x8017E2E0u; f_801810A4(c); // 8017E2DC
  c->r[3]=0u+0x00000007u; // 8017E2E0
  c->r[4]=0u+0x00000000u; // 8017E2E4
  c->r[5]=0u+0x00000000u; // 8017E2E8
  c->lr=0x8017E2F0u; f_801810A4(c); // 8017E2EC
  {uint32_t ea=c->r[2]+0xFFFF8DA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017E2F0
  c->r[3]=c->r[1]+0x00000048u; // 8017E2F4
  {uint32_t ea=c->r[2]+0xFFFF8DB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E2F8
  c->r[4]=0u+0x00000000u; // 8017E2FC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8017E300
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8017E304
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8017E308
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8017E30C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8017E310
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8017E314
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8017E318
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8017E31C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8017E320
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8017E324
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8017E328
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8017E32C
  c->lr=0x8017E334u; f_80184924(c); // 8017E330
  c->r[3]=c->r[1]+0x00000048u; // 8017E334
  c->r[4]=0u+0x00000000u; // 8017E338
  c->lr=0x8017E340u; f_801849A0(c); // 8017E33C
  c->r[3]=0u+0x00000000u; // 8017E340
  c->lr=0x8017E348u; f_80184A2C(c); // 8017E344
  c->r[3]=c->r[1]+0x00000048u; // 8017E348
  c->r[4]=0u+0x0000003Cu; // 8017E34C
  c->r[5]=0u+0x00000000u; // 8017E350
  c->lr=0x8017E358u; f_80184A4C(c); // 8017E354
  c->r[3]=c->r[1]+0x00000048u; // 8017E358
  c->r[4]=0u+0x0000007Du; // 8017E35C
  c->r[5]=0u+0x00000000u; // 8017E360
  c->lr=0x8017E368u; f_80184A4C(c); // 8017E364
  c->r[3]=R16(c->r[29]+0x00000004u); // 8017E368
  c->r[0]=R16(c->r[29]+0x00000008u); // 8017E36C
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 8017E370
  {uint32_t ea=c->r[2]+0xFFFF8DA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E374
  W32(c->r[1]+0x00000084u,c->r[0]); // 8017E378
  {uint32_t ea=c->r[2]+0xFFFF8DC0u; c->f[4]=RF64(ea);} // 8017E37C
  c->f[2]=c->f[1]; // 8017E380
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=RF64(ea);} // 8017E384
  c->f[5]=c->f[1]; // 8017E388
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 8017E38C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8017E390
  {uint32_t ea=c->r[2]+0xFFFF8DB4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8017E394
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 8017E398
  c->lr=0x8017E3A0u; f_80184BCC(c); // 8017E39C
  c->r[3]=c->r[30]+0x00000150u; // 8017E3A0
  c->lr=0x8017E3A8u; f_80184898(c); // 8017E3A4
  c->lr=0x8017E3ACu; f_80181144(c); // 8017E3A8
  c->r[3]=0u+0x00000000u; // 8017E3AC
  c->lr=0x8017E3B4u; f_80181108(c); // 8017E3B0
  c->r[3]=0u+0x00000002u; // 8017E3B4
  c->lr=0x8017E3BCu; f_801810E0(c); // 8017E3B8
  c->r[3]=0u+0x00000000u; // 8017E3BC
  c->lr=0x8017E3C4u; f_80184C9C(c); // 8017E3C0
  c->r[5]=R16(c->r[29]+0x00000004u); // 8017E3C4
  c->r[3]=0u+0x00000000u; // 8017E3C8
  c->r[6]=R16(c->r[29]+0x00000006u); // 8017E3CC
  c->r[4]=0u+0x00000000u; // 8017E3D0
  c->lr=0x8017E3D8u; f_80184BF8(c); // 8017E3D4
  c->r[3]=0u+0x00000000u; // 8017E3D8
  c->r[4]=0u+0x00000000u; // 8017E3DC
  c->lr=0x8017E3E4u; f_80184C60(c); // 8017E3E0
  c->r[3]=0u+0x00000000u; // 8017E3E4
  c->lr=0x8017E3ECu; f_80182328(c); // 8017E3E8
  c->r[3]=0u+0x00000004u; // 8017E3EC
  c->r[4]=0u+0x00000000u; // 8017E3F0
  c->r[5]=0u+0x00000000u; // 8017E3F4
  c->r[6]=0u+0x00000001u; // 8017E3F8
  c->r[7]=0u+0x00000000u; // 8017E3FC
  c->r[8]=0u+0x00000000u; // 8017E400
  c->r[9]=0u+0x00000002u; // 8017E404
  c->lr=0x8017E40Cu; f_8018234C(c); // 8017E408
  W32(c->r[1]+0x00000018u,c->r[31]); // 8017E40C
  c->r[4]=c->r[1]+0x00000018u; // 8017E410
  c->r[3]=0u+0x00000004u; // 8017E414
  c->lr=0x8017E41Cu; f_80182178(c); // 8017E418
  c->r[0]=R32(c->r[1]+0x00000020u); // 8017E41C
  c->r[4]=c->r[1]+0x00000014u; // 8017E420
  c->r[3]=0u+0x00000004u; // 8017E424
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017E428
  c->lr=0x8017E430u; f_80182250(c); // 8017E42C
  c->r[3]=0u+0x00000005u; // 8017E430
  c->r[4]=0u+0x00000000u; // 8017E434
  c->r[5]=0u+0x00000000u; // 8017E438
  c->r[6]=0u+0x00000001u; // 8017E43C
  c->r[7]=0u+0x00000000u; // 8017E440
  c->r[8]=0u+0x00000000u; // 8017E444
  c->r[9]=0u+0x00000002u; // 8017E448
  c->lr=0x8017E450u; f_8018234C(c); // 8017E44C
  W32(c->r[1]+0x00000010u,c->r[31]); // 8017E450
  c->r[4]=c->r[1]+0x00000010u; // 8017E454
  c->r[3]=0u+0x00000005u; // 8017E458
  c->lr=0x8017E460u; f_80182178(c); // 8017E45C
  c->r[0]=R32(c->r[1]+0x00000020u); // 8017E460
  c->r[4]=c->r[1]+0x0000000Cu; // 8017E464
  c->r[3]=0u+0x00000005u; // 8017E468
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017E46C
  c->lr=0x8017E474u; f_80182250(c); // 8017E470
  c->lr=0x8017E478u; f_80182E08(c); // 8017E474
  c->r[3]=0u+0x80180000u; // 8017E478
  c->r[3]=c->r[3]+0xFFFFD784u; // 8017E47C
  c->lr=0x8017E484u; f_80182E50(c); // 8017E480
  c->r[3]=0u+0x80180000u; // 8017E484
  c->r[3]=c->r[3]+0xFFFFD878u; // 8017E488
  c->lr=0x8017E490u; f_80182E64(c); // 8017E48C
  c->r[3]=c->r[1]+0x00000028u; // 8017E490
  c->r[4]=c->r[30]+0x00000060u; // 8017E494
  c->r[5]=0u+0x00000004u; // 8017E498
  c->r[6]=0u+0x00000004u; // 8017E49C
  c->r[7]=0u+0x00000003u; // 8017E4A0
  c->r[8]=0u+0x00000000u; // 8017E4A4
  c->r[9]=0u+0x00000000u; // 8017E4A8
  c->r[10]=0u+0x00000000u; // 8017E4AC
  c->lr=0x8017E4B4u; f_801825D4(c); // 8017E4B0
  c->r[3]=c->r[1]+0x00000028u; // 8017E4B4
  c->r[4]=0u+0x00000000u; // 8017E4B8
  c->lr=0x8017E4C0u; f_80182C24(c); // 8017E4BC
  c->r[3]=c->r[1]+0x00000028u; // 8017E4C0
  c->r[4]=0u+0x00000001u; // 8017E4C4
  c->lr=0x8017E4CCu; f_80182C24(c); // 8017E4C8
  c->r[3]=c->r[1]+0x00000028u; // 8017E4CC
  c->r[4]=0u+0x00000002u; // 8017E4D0
  c->lr=0x8017E4D8u; f_80182C24(c); // 8017E4D4
  c->r[3]=c->r[1]+0x00000028u; // 8017E4D8
  c->r[4]=0u+0x00000003u; // 8017E4DC
  c->lr=0x8017E4E4u; f_80182C24(c); // 8017E4E0
  c->r[3]=c->r[1]+0x00000028u; // 8017E4E4
  c->r[4]=0u+0x00000004u; // 8017E4E8
  c->lr=0x8017E4F0u; f_80182C24(c); // 8017E4EC
  c->r[3]=c->r[1]+0x00000028u; // 8017E4F0
  c->r[4]=0u+0x00000005u; // 8017E4F4
  c->lr=0x8017E4FCu; f_80182C24(c); // 8017E4F8
  c->r[3]=c->r[1]+0x00000028u; // 8017E4FC
  c->r[4]=0u+0x00000006u; // 8017E500
  c->lr=0x8017E508u; f_80182C24(c); // 8017E504
  c->r[3]=c->r[1]+0x00000028u; // 8017E508
  c->r[4]=0u+0x00000007u; // 8017E50C
  c->lr=0x8017E514u; f_80182C24(c); // 8017E510
  c->r[3]=0u+0x00000000u; // 8017E514
  c->r[4]=0u+0x00000000u; // 8017E518
  c->r[5]=0u+0x00000000u; // 8017E51C
  c->r[6]=0u+0x00000004u; // 8017E520
  c->lr=0x8017E528u; f_80183D10(c); // 8017E524
  c->r[3]=0u+0x00000001u; // 8017E528
  c->r[4]=0u+0x00000001u; // 8017E52C
  c->r[5]=0u+0x00000001u; // 8017E530
  c->r[6]=0u+0x00000004u; // 8017E534
  c->lr=0x8017E53Cu; f_80183D10(c); // 8017E538
  c->r[3]=0u+0x00000002u; // 8017E53C
  c->r[4]=0u+0x00000002u; // 8017E540
  c->r[5]=0u+0x00000002u; // 8017E544
  c->r[6]=0u+0x00000004u; // 8017E548
  c->lr=0x8017E550u; f_80183D10(c); // 8017E54C
  c->r[3]=0u+0x00000003u; // 8017E550
  c->r[4]=0u+0x00000003u; // 8017E554
  c->r[5]=0u+0x00000003u; // 8017E558
  c->r[6]=0u+0x00000004u; // 8017E55C
  c->lr=0x8017E564u; f_80183D10(c); // 8017E560
  c->r[3]=0u+0x00000004u; // 8017E564
  c->r[4]=0u+0x00000004u; // 8017E568
  c->r[5]=0u+0x00000004u; // 8017E56C
  c->r[6]=0u+0x00000004u; // 8017E570
  c->lr=0x8017E578u; f_80183D10(c); // 8017E574
  c->r[3]=0u+0x00000005u; // 8017E578
  c->r[4]=0u+0x00000005u; // 8017E57C
  c->r[5]=0u+0x00000005u; // 8017E580
  c->r[6]=0u+0x00000004u; // 8017E584
  c->lr=0x8017E58Cu; f_80183D10(c); // 8017E588
  c->r[3]=0u+0x00000006u; // 8017E58C
  c->r[4]=0u+0x00000006u; // 8017E590
  c->r[5]=0u+0x00000006u; // 8017E594
  c->r[6]=0u+0x00000004u; // 8017E598
  c->lr=0x8017E5A0u; f_80183D10(c); // 8017E59C
  c->r[3]=0u+0x00000007u; // 8017E5A0
  c->r[4]=0u+0x00000007u; // 8017E5A4
  c->r[5]=0u+0x00000007u; // 8017E5A8
  c->r[6]=0u+0x00000004u; // 8017E5AC
  c->lr=0x8017E5B4u; f_80183D10(c); // 8017E5B0
  c->r[3]=0u+0x00000008u; // 8017E5B4
  c->r[4]=0u+0x000000FFu; // 8017E5B8
  c->r[5]=0u+0x000000FFu; // 8017E5BC
  c->r[6]=0u+0x000000FFu; // 8017E5C0
  c->lr=0x8017E5C8u; f_80183D10(c); // 8017E5C4
  c->r[3]=0u+0x00000009u; // 8017E5C8
  c->r[4]=0u+0x000000FFu; // 8017E5CC
  c->r[5]=0u+0x000000FFu; // 8017E5D0
  c->r[6]=0u+0x000000FFu; // 8017E5D4
  c->lr=0x8017E5DCu; f_80183D10(c); // 8017E5D8
  c->r[3]=0u+0x0000000Au; // 8017E5DC
  c->r[4]=0u+0x000000FFu; // 8017E5E0
  c->r[5]=0u+0x000000FFu; // 8017E5E4
  c->r[6]=0u+0x000000FFu; // 8017E5E8
  c->lr=0x8017E5F0u; f_80183D10(c); // 8017E5EC
  c->r[3]=0u+0x0000000Bu; // 8017E5F0
  c->r[4]=0u+0x000000FFu; // 8017E5F4
  c->r[5]=0u+0x000000FFu; // 8017E5F8
  c->r[6]=0u+0x000000FFu; // 8017E5FC
  c->lr=0x8017E604u; f_80183D10(c); // 8017E600
  c->r[3]=0u+0x0000000Cu; // 8017E604
  c->r[4]=0u+0x000000FFu; // 8017E608
  c->r[5]=0u+0x000000FFu; // 8017E60C
  c->r[6]=0u+0x000000FFu; // 8017E610
  c->lr=0x8017E618u; f_80183D10(c); // 8017E614
  c->r[3]=0u+0x0000000Du; // 8017E618
  c->r[4]=0u+0x000000FFu; // 8017E61C
  c->r[5]=0u+0x000000FFu; // 8017E620
  c->r[6]=0u+0x000000FFu; // 8017E624
  c->lr=0x8017E62Cu; f_80183D10(c); // 8017E628
  c->r[3]=0u+0x0000000Eu; // 8017E62C
  c->r[4]=0u+0x000000FFu; // 8017E630
  c->r[5]=0u+0x000000FFu; // 8017E634
  c->r[6]=0u+0x000000FFu; // 8017E638
  c->lr=0x8017E640u; f_80183D10(c); // 8017E63C
  c->r[3]=0u+0x0000000Fu; // 8017E640
  c->r[4]=0u+0x000000FFu; // 8017E644
  c->r[5]=0u+0x000000FFu; // 8017E648
  c->r[6]=0u+0x000000FFu; // 8017E64C
  c->lr=0x8017E654u; f_80183D10(c); // 8017E650
  c->r[3]=0u+0x00000001u; // 8017E654
  c->lr=0x8017E65Cu; f_80183E6C(c); // 8017E658
  c->r[3]=0u+0x00000000u; // 8017E65C
  c->r[4]=0u+0x00000003u; // 8017E660
  c->lr=0x8017E668u; f_80183810(c); // 8017E664
  c->r[3]=0u+0x00000007u; // 8017E668
  c->r[4]=0u+0x00000000u; // 8017E66C
  c->r[5]=0u+0x00000000u; // 8017E670
  c->r[6]=0u+0x00000007u; // 8017E674
  c->r[7]=0u+0x00000000u; // 8017E678
  c->lr=0x8017E680u; f_80183C4C(c); // 8017E67C
  c->r[3]=0u+0x00000000u; // 8017E680
  c->r[4]=0u+0x00000011u; // 8017E684
  c->r[5]=0u+0x00000000u; // 8017E688
  c->lr=0x8017E690u; f_80183C84(c); // 8017E68C
  c->r[28]=0u+0x00000000u; // 8017E690
L_8017E694:;
  c->r[3]=c->r[28]|c->r[28]; // 8017E694
  c->r[4]=0u+0x00000006u; // 8017E698
  c->lr=0x8017E6A0u; f_80183AF4(c); // 8017E69C
  c->r[3]=c->r[28]|c->r[28]; // 8017E6A0
  c->r[4]=0u+0x00000000u; // 8017E6A4
  c->lr=0x8017E6ACu; f_80183B44(c); // 8017E6A8
  c->r[3]=c->r[28]|c->r[28]; // 8017E6AC
  c->r[4]=0u+0x00000000u; // 8017E6B0
  c->r[5]=0u+0x00000000u; // 8017E6B4
  c->lr=0x8017E6BCu; f_80183B94(c); // 8017E6B8
  c->r[28]=c->r[28]+0x00000001u; // 8017E6BC
  cmpu(c,0,c->r[28],0x00000010u); // 8017E6C0
  if (crb(c,0)) { IRQCHK(c); goto L_8017E694; } // 8017E6C4
  c->r[3]=0u+0x00000000u; // 8017E6C8
  c->r[4]=0u+0x00000000u; // 8017E6CC
  c->r[5]=0u+0x00000001u; // 8017E6D0
  c->r[6]=0u+0x00000002u; // 8017E6D4
  c->r[7]=0u+0x00000003u; // 8017E6D8
  c->lr=0x8017E6E0u; f_80183BD0(c); // 8017E6DC
  c->r[3]=0u+0x00000001u; // 8017E6E0
  c->r[4]=0u+0x00000000u; // 8017E6E4
  c->r[5]=0u+0x00000000u; // 8017E6E8
  c->r[6]=0u+0x00000000u; // 8017E6EC
  c->r[7]=0u+0x00000003u; // 8017E6F0
  c->lr=0x8017E6F8u; f_80183BD0(c); // 8017E6F4
  c->r[3]=0u+0x00000002u; // 8017E6F8
  c->r[4]=0u+0x00000001u; // 8017E6FC
  c->r[5]=0u+0x00000001u; // 8017E700
  c->r[6]=0u+0x00000001u; // 8017E704
  c->r[7]=0u+0x00000003u; // 8017E708
  c->lr=0x8017E710u; f_80183BD0(c); // 8017E70C
  c->r[3]=0u+0x00000003u; // 8017E710
  c->r[4]=0u+0x00000002u; // 8017E714
  c->r[5]=0u+0x00000002u; // 8017E718
  c->r[6]=0u+0x00000002u; // 8017E71C
  c->r[7]=0u+0x00000003u; // 8017E720
  c->lr=0x8017E728u; f_80183BD0(c); // 8017E724
  c->r[28]=0u+0x00000000u; // 8017E728
L_8017E72C:;
  c->r[3]=c->r[28]|c->r[28]; // 8017E72C
  c->lr=0x8017E734u; f_80183770(c); // 8017E730
  c->r[28]=c->r[28]+0x00000001u; // 8017E734
  cmpu(c,0,c->r[28],0x00000010u); // 8017E738
  if (crb(c,0)) { IRQCHK(c); goto L_8017E72C; } // 8017E73C
  c->r[3]=0u+0x00000000u; // 8017E740
  c->lr=0x8017E748u; f_80183750(c); // 8017E744
  c->r[3]=0u+0x00000000u; // 8017E748
  c->r[4]=0u+0x00000000u; // 8017E74C
  c->r[5]=0u+0x00000000u; // 8017E750
  c->lr=0x8017E758u; f_80183580(c); // 8017E754
  c->r[3]=0u+0x00000001u; // 8017E758
  c->r[4]=0u+0x00000000u; // 8017E75C
  c->r[5]=0u+0x00000000u; // 8017E760
  c->lr=0x8017E768u; f_80183580(c); // 8017E764
  c->r[3]=0u+0x00000002u; // 8017E768
  c->r[4]=0u+0x00000000u; // 8017E76C
  c->r[5]=0u+0x00000000u; // 8017E770
  c->lr=0x8017E778u; f_80183580(c); // 8017E774
  c->r[3]=0u+0x00000003u; // 8017E778
  c->r[4]=0u+0x00000000u; // 8017E77C
  c->r[5]=0u+0x00000000u; // 8017E780
  c->lr=0x8017E788u; f_80183580(c); // 8017E784
  {uint32_t ea=c->r[2]+0xFFFF8DB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017E788
  c->r[4]=c->r[1]+0x00000008u; // 8017E78C
  W32(c->r[1]+0x00000008u,c->r[31]); // 8017E790
  c->r[3]=0u+0x00000000u; // 8017E794
  c->f[4]=c->f[2]; // 8017E798
  {uint32_t ea=c->r[2]+0xFFFF8DA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017E79C
  {uint32_t ea=c->r[2]+0xFFFF8DB8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017E7A0
  c->lr=0x8017E7A8u; f_80183E90(c); // 8017E7A4
  c->r[3]=0u+0x00000000u; // 8017E7A8
  c->r[4]=0u+0x00000000u; // 8017E7AC
  c->r[5]=0u+0x00000000u; // 8017E7B0
  c->lr=0x8017E7B8u; f_8018421C(c); // 8017E7B4
  c->r[3]=0u+0x00000000u; // 8017E7B8
  c->r[4]=0u+0x00000004u; // 8017E7BC
  c->r[5]=0u+0x00000005u; // 8017E7C0
  c->r[6]=0u+0x00000000u; // 8017E7C4
  c->lr=0x8017E7CCu; f_80184340(c); // 8017E7C8
  c->r[3]=0u+0x00000001u; // 8017E7CC
  c->lr=0x8017E7D4u; f_80184390(c); // 8017E7D0
  c->r[3]=0u+0x00000001u; // 8017E7D4
  c->lr=0x8017E7DCu; f_801843BC(c); // 8017E7D8
  c->r[3]=0u+0x00000001u; // 8017E7DC
  c->r[4]=0u+0x00000003u; // 8017E7E0
  c->r[5]=0u+0x00000001u; // 8017E7E4
  c->lr=0x8017E7ECu; f_801843E8(c); // 8017E7E8
  c->r[3]=0u+0x00000001u; // 8017E7EC
  c->lr=0x8017E7F4u; f_8018441C(c); // 8017E7F0
  c->r[3]=0u+0x00000001u; // 8017E7F4
  c->lr=0x8017E7FCu; f_801844F4(c); // 8017E7F8
  c->r[3]=0u+0x00000000u; // 8017E7FC
  c->r[4]=0u+0x00000000u; // 8017E800
  c->lr=0x8017E808u; f_80184520(c); // 8017E804
  c->r[3]=0u+0x00000000u; // 8017E808
  c->r[4]=0u+0x00000000u; // 8017E80C
  c->lr=0x8017E814u; f_8018444C(c); // 8017E810
  c->r[3]=0u+0x00000001u; // 8017E814
  c->r[4]=0u+0x00000001u; // 8017E818
  c->lr=0x8017E820u; f_80184550(c); // 8017E81C
  c->r[0]=R16(c->r[29]+0x00000008u); // 8017E820
  c->r[3]=R16(c->r[29]+0x00000010u); // 8017E824
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8017E828
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8017E82C
  if (!crb(c,2)) { goto L_8017E83C; } // 8017E830
  c->r[4]=0u+0x00000001u; // 8017E834
  goto L_8017E840; // 8017E838
L_8017E83C:;
  c->r[4]=0u+0x00000000u; // 8017E83C
L_8017E840:;
  c->r[3]=R8(c->r[29]+0x00000018u); // 8017E840
  c->lr=0x8017E848u; f_80184584(c); // 8017E844
  c->r[5]=R16(c->r[29]+0x00000004u); // 8017E848
  c->r[3]=0u+0x00000000u; // 8017E84C
  c->r[6]=R16(c->r[29]+0x00000006u); // 8017E850
  c->r[4]=0u+0x00000000u; // 8017E854
  c->lr=0x8017E85Cu; f_801812A0(c); // 8017E858
  c->r[3]=R16(c->r[29]+0x00000004u); // 8017E85C
  c->r[4]=R16(c->r[29]+0x00000006u); // 8017E860
  c->lr=0x8017E868u; f_80181320(c); // 8017E864
  c->r[3]=R16(c->r[29]+0x00000008u); // 8017E868
  c->r[0]=R16(c->r[29]+0x00000006u); // 8017E86C
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 8017E870
  {uint32_t ea=c->r[2]+0xFFFF8DC0u; c->f[2]=RF64(ea);} // 8017E874
  W32(c->r[1]+0x00000084u,c->r[0]); // 8017E878
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 8017E87C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 8017E880
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8017E884
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8017E888
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8017E88C
  c->lr=0x8017E894u; f_801816D8(c); // 8017E890
  c->r[3]=0u+0x00000003u; // 8017E894
  c->lr=0x8017E89Cu; f_80181480(c); // 8017E898
  c->r[3]=R8(c->r[29]+0x00000019u); // 8017E89C
  c->r[4]=c->r[29]+0x0000001Au; // 8017E8A0
  c->r[6]=c->r[29]+0x00000032u; // 8017E8A4
  c->r[5]=0u+0x00000001u; // 8017E8A8
  c->lr=0x8017E8B0u; f_8018181C(c); // 8017E8AC
  c->r[3]=0u+0x00000000u; // 8017E8B0
  c->lr=0x8017E8B8u; f_80181A00(c); // 8017E8B4
  c->r[3]=0u+0x00000000u; // 8017E8B8
  c->lr=0x8017E8C0u; f_80181460(c); // 8017E8BC
  c->lr=0x8017E8C4u; f_80181CA8(c); // 8017E8C0
  c->r[3]=0u+0x00000001u; // 8017E8C4
  c->lr=0x8017E8CCu; f_80180954(c); // 8017E8C8
  c->r[3]=0u+0x00000001u; // 8017E8CC
  c->lr=0x8017E8D4u; f_801808E4(c); // 8017E8D0
  c->r[3]=0u+0x00000000u; // 8017E8D4
  c->lr=0x8017E8DCu; f_80180980(c); // 8017E8D8
  c->r[3]=0u+0x00000000u; // 8017E8DC
  c->r[4]=0u+0x00000000u; // 8017E8E0
  c->r[5]=0u+0x00000001u; // 8017E8E4
  c->r[6]=0u+0x0000000Fu; // 8017E8E8
  c->lr=0x8017E8F0u; f_801808F8(c); // 8017E8EC
  c->r[3]=0u+0x00000007u; // 8017E8F0
  c->r[4]=0u+0x00000000u; // 8017E8F4
  c->lr=0x8017E8FCu; f_801808BC(c); // 8017E8F8
  c->r[3]=0u+0x00000001u; // 8017E8FC
  c->lr=0x8017E904u; f_801808CC(c); // 8017E900
  c->r[3]=0u+0x00000000u; // 8017E904
  c->r[4]=0u+0x00000000u; // 8017E908
  c->lr=0x8017E910u; f_80180968(c); // 8017E90C
  c->r[3]=0u+0x00000001u; // 8017E910
  c->r[4]=0u+0x00000007u; // 8017E914
  c->r[5]=0u+0x00000001u; // 8017E918
  c->lr=0x8017E920u; f_80180994(c); // 8017E91C
  c->r[3]=0u+0x00000023u; // 8017E920
  c->r[4]=0u+0x00000016u; // 8017E924
  c->lr=0x8017E92Cu; f_80184D4C(c); // 8017E928
  c->lr=0x8017E930u; f_80185578(c); // 8017E92C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8017E930
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8017E934
  c->r[30]=R32(c->r[1]+0x00000098u); // 8017E938
  c->r[29]=R32(c->r[1]+0x00000094u); // 8017E93C
  c->r[28]=R32(c->r[1]+0x00000090u); // 8017E940
  c->lr=c->r[0]; // 8017E944
  c->r[1]=c->r[1]+0x000000A0u; // 8017E948
  return; // 8017E94C
}

// GXCPInterruptHandler
void f_8017E950(Ctx* __restrict c) {
  trace_call(0x8017E950u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017E950
  c->r[0]=c->lr; // 8017E954
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8017E958
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8017E95C
  c->r[31]=R32(c->r[2]+0xFFFF8DA0u); // 8017E960
  W32(c->r[1]+0x000002D8u,c->r[30]); // 8017E964
  c->r[30]=c->r[4]|c->r[4]; // 8017E968
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017E96C
  c->r[0]=R16(c->r[3]+0x00000000u); // 8017E970
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017E974
  c->r[0]=R32(c->r[31]+0x00000008u); // 8017E978
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 8017E97C
  if (crb(c,2)) { goto L_8017E9D0; } // 8017E980
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8017E984
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 8017E988
  if (crb(c,2)) { goto L_8017E9D0; } // 8017E98C
  c->r[3]=R32(c->r[13]+0xFFFFA05Cu); // 8017E990
  c->lr=0x8017E998u; f_801645D4(c); // 8017E994
  c->r[0]=0u+0x00000000u; // 8017E998
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017E99C
  W32(c->r[13]+0xFFFFA058u,c->r[0]); // 8017E9A0
  c->r[0]=R32(c->r[3]+0x00000010u); // 8017E9A4
  c->r[0]=c->r[0]|0x00000003u; // 8017E9A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 8017E9AC
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017E9B0
  W16(c->r[3]+0x00000004u,c->r[0]); // 8017E9B4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8017E9B8
  c->r[0]=c->r[0]|0x00000004u; // 8017E9BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8017E9C0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8017E9C4
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017E9C8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017E9CC
L_8017E9D0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8017E9D0
  c->r[0]=rotl(c->r[0],30)&0x00000001u; cr0(c,c->r[0]); // 8017E9D4
  if (crb(c,2)) { goto L_8017EA38; } // 8017E9D8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8017E9DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8017E9E0
  if (crb(c,2)) { goto L_8017EA38; } // 8017E9E4
  c->r[3]=R32(c->r[13]+0xFFFFA04Cu); // 8017E9E8
  c->r[0]=0u+0x00000001u; // 8017E9EC
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017E9F0
  c->r[3]=c->r[3]+0x00000001u; // 8017E9F4
  W32(c->r[13]+0xFFFFA04Cu,c->r[3]); // 8017E9F8
  c->r[3]=R32(c->r[31]+0x00000008u); // 8017E9FC
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFBu; // 8017EA00
  c->r[4]=c->r[4]|0x00000008u; // 8017EA04
  W32(c->r[31]+0x00000008u,c->r[4]); // 8017EA08
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EA0C
  W16(c->r[3]+0x00000002u,c->r[4]); // 8017EA10
  c->r[3]=R32(c->r[5]+0x00000010u); // 8017EA14
  c->r[3]=c->r[3]|0x00000001u; // 8017EA18
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFDu; // 8017EA1C
  W32(c->r[5]+0x00000010u,c->r[4]); // 8017EA20
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EA24
  W16(c->r[3]+0x00000004u,c->r[4]); // 8017EA28
  W32(c->r[13]+0xFFFFA058u,c->r[0]); // 8017EA2C
  c->r[3]=R32(c->r[13]+0xFFFFA05Cu); // 8017EA30
  c->lr=0x8017EA38u; f_8016486C(c); // 8017EA34
L_8017EA38:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8017EA38
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 8017EA3C
  if (crb(c,2)) { goto L_8017EA98; } // 8017EA40
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8017EA44
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 8017EA48
  if (crb(c,2)) { goto L_8017EA98; } // 8017EA4C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFDFu; // 8017EA50
  W32(c->r[31]+0x00000008u,c->r[0]); // 8017EA54
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EA58
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017EA5C
  c->r[0]=R32(c->r[13]+0xFFFFA054u); // 8017EA60
  cmps(c,0,(int32_t)c->r[0],0); // 8017EA64
  if (crb(c,2)) { goto L_8017EA98; } // 8017EA68
  c->r[3]=c->r[1]+0x00000008u; // 8017EA6C
  c->lr=0x8017EA74u; f_8015CACC(c); // 8017EA70
  c->r[3]=c->r[1]+0x00000008u; // 8017EA74
  c->lr=0x8017EA7Cu; f_8015C8A4(c); // 8017EA78
  c->r[12]=R32(c->r[13]+0xFFFFA054u); // 8017EA7C
  c->ctr=c->r[12]; // 8017EA80
  if (true) { c->lr=0x8017EA88u; dispatch(c,c->ctr); } // 8017EA84
  c->r[3]=c->r[1]+0x00000008u; // 8017EA88
  c->lr=0x8017EA90u; f_8015CACC(c); // 8017EA8C
  c->r[3]=c->r[30]|c->r[30]; // 8017EA90
  c->lr=0x8017EA98u; f_8015C8A4(c); // 8017EA94
L_8017EA98:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 8017EA98
  c->r[31]=R32(c->r[1]+0x000002DCu); // 8017EA9C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 8017EAA0
  c->lr=c->r[0]; // 8017EAA4
  c->r[1]=c->r[1]+0x000002E0u; // 8017EAA8
  return; // 8017EAAC
}

// GXInitFifoBase
void f_8017EAB0(Ctx* __restrict c) {
  trace_call(0x8017EAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EAB0
  c->r[0]=c->lr; // 8017EAB4
  c->r[7]=c->r[4]+c->r[5]; // 8017EAB8
  c->r[6]=c->r[5]+0xFFFFC000u; // 8017EABC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017EAC0
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 8017EAC4
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFE0u; // 8017EAC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017EACC
  c->r[31]=0u+0x00000000u; // 8017EAD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017EAD4
  c->r[30]=c->r[4]|c->r[4]; // 8017EAD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017EADC
  c->r[29]=c->r[3]|c->r[3]; // 8017EAE0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017EAE4
  W32(c->r[3]+0x00000004u,c->r[7]); // 8017EAE8
  W32(c->r[3]+0x00000008u,c->r[5]); // 8017EAEC
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 8017EAF0
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8017EAF4
  W32(c->r[3]+0x00000010u,c->r[0]); // 8017EAF8
  c->lr=0x8017EB00u; f_80160C68(c); // 8017EAFC
  cmps(c,0,(int32_t)c->r[31],0); // 8017EB00
  W32(c->r[29]+0x00000014u,c->r[30]); // 8017EB04
  W32(c->r[29]+0x00000018u,c->r[30]); // 8017EB08
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 8017EB0C
  if (!crb(c,0)) { goto L_8017EB1C; } // 8017EB10
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017EB14
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8017EB18
L_8017EB1C:;
  c->lr=0x8017EB20u; f_80160C90(c); // 8017EB1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017EB20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017EB24
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017EB28
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017EB2C
  c->lr=c->r[0]; // 8017EB30
  c->r[1]=c->r[1]+0x00000020u; // 8017EB34
  return; // 8017EB38
}

// CPGPLinkCheck
void f_8017EB3C(Ctx* __restrict c) {
  trace_call(0x8017EB3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EB3C
  c->r[0]=c->lr; // 8017EB40
  c->r[7]=0u+0x00000000u; // 8017EB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017EB48
  c->r[0]=R8(c->r[13]+0xFFFFA048u); // 8017EB4C
  cmps(c,0,(int32_t)c->r[0],0); // 8017EB50
  if (crb(c,2)) { goto L_8017EB64; } // 8017EB54
  c->r[0]=R8(c->r[13]+0xFFFFA049u); // 8017EB58
  cmps(c,0,(int32_t)c->r[0],0); // 8017EB5C
  if (!crb(c,2)) { goto L_8017EB6C; } // 8017EB60
L_8017EB64:;
  c->r[3]=0u+0x00000000u; // 8017EB64
  goto L_8017EC24; // 8017EB68
L_8017EB6C:;
  c->r[4]=0u+0x80390000u; // 8017EB6C
  c->r[3]=0u+0x80390000u; // 8017EB70
  c->r[6]=R32(c->r[4]+0xFFFFF5E0u); // 8017EB74
  c->r[4]=R32(c->r[3]+0xFFFFF604u); // 8017EB78
  cmpu(c,0,c->r[4],c->r[6]); // 8017EB7C
  if (!crb(c,2)) { goto L_8017EB88; } // 8017EB80
  c->r[7]=0u+0x00000001u; // 8017EB84
L_8017EB88:;
  c->r[5]=0u+0x80390000u; // 8017EB88
  c->r[3]=0u+0x80390000u; // 8017EB8C
  c->r[5]=c->r[5]+0xFFFFF5E0u; // 8017EB90
  c->r[3]=c->r[3]+0xFFFFF604u; // 8017EB94
  c->r[0]=R32(c->r[5]+0x00000004u); // 8017EB98
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017EB9C
  cmpu(c,0,c->r[5],c->r[0]); // 8017EBA0
  if (!crb(c,2)) { goto L_8017EBAC; } // 8017EBA4
  c->r[7]=c->r[7]+0x00000001u; // 8017EBA8
L_8017EBAC:;
  cmpu(c,0,c->r[7],0x00000002u); // 8017EBAC
  if (!crb(c,2)) { goto L_8017EBBC; } // 8017EBB0
  c->r[3]=0u+0x00000001u; // 8017EBB4
  goto L_8017EC24; // 8017EBB8
L_8017EBBC:;
  c->r[3]=c->r[5]-c->r[6]; cr0(c,c->r[3]); // 8017EBBC
  c->r[6]=c->r[0]-c->r[4]; // 8017EBC0
  c->r[0]=0u+0x00000000u; // 8017EBC4
  if (!crb(c,1)) { goto L_8017EBD4; } // 8017EBC8
  cmps(c,0,(int32_t)c->r[6],0); // 8017EBCC
  if (crb(c,1)) { goto L_8017EBE4; } // 8017EBD0
L_8017EBD4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017EBD4
  if (!crb(c,0)) { goto L_8017EBE8; } // 8017EBD8
  cmps(c,0,(int32_t)c->r[6],0); // 8017EBDC
  if (!crb(c,0)) { goto L_8017EBE8; } // 8017EBE0
L_8017EBE4:;
  c->r[0]=0u+0x00000001u; // 8017EBE4
L_8017EBE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017EBE8
  if (crb(c,2)) { goto L_8017EC20; } // 8017EBEC
  c->r[3]=0u+0x80330000u; // 8017EBF0
  c->r[3]=c->r[3]+0xFFFFF9C0u; // 8017EBF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017EBF8
  c->lr=0x8017EC00u; f_8015CED8(c); // 8017EBFC
  c->r[4]=0u+0x80390000u; // 8017EC00
  c->r[3]=0u+0x80330000u; // 8017EC04
  c->r[5]=c->r[4]+0xFFFFF5E0u; // 8017EC08
  c->r[4]=R32(c->r[4]+0xFFFFF5E0u); // 8017EC0C
  c->r[5]=R32(c->r[5]+0x00000004u); // 8017EC10
  c->r[3]=c->r[3]+0xFFFFF9D8u; // 8017EC14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017EC18
  c->lr=0x8017EC20u; f_8015CED8(c); // 8017EC1C
L_8017EC20:;
  c->r[3]=0u+0x00000000u; // 8017EC20
L_8017EC24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017EC24
  c->lr=c->r[0]; // 8017EC28
  c->r[1]=c->r[1]+0x00000010u; // 8017EC2C
  return; // 8017EC30
}

// GXSetCPUFifo
void f_8017EC34(Ctx* __restrict c) {
  trace_call(0x8017EC34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EC34
  c->r[0]=c->lr; // 8017EC38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017EC3C
  c->r[11]=c->r[1]+0x00000020u; // 8017EC40
  c->lr=0x8017EC48u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017EC44
  c->r[27]=c->r[3]|c->r[3]; // 8017EC48
  c->lr=0x8017EC50u; f_80160C68(c); // 8017EC4C
  cmps(c,0,(int32_t)c->r[27],0); // 8017EC50
  c->r[30]=c->r[3]|c->r[3]; // 8017EC54
  if (!crb(c,2)) { goto L_8017EC80; } // 8017EC58
  c->r[4]=0u+0x80390000u; // 8017EC5C
  c->r[0]=0u+0x00000000u; // 8017EC60
  c->r[4]=c->r[4]+0xFFFFF604u; // 8017EC64
  W8(c->r[13]+0xFFFFA048u,c->r[0]); // 8017EC68
  W8(c->r[13]+0xFFFFA060u,c->r[0]); // 8017EC6C
  W8(c->r[4]+0x00000022u,c->r[0]); // 8017EC70
  W8(c->r[4]+0x00000021u,c->r[0]); // 8017EC74
  c->lr=0x8017EC7Cu; f_80160C90(c); // 8017EC78
  goto L_8017EDFC; // 8017EC7C
L_8017EC80:;
  c->r[28]=0u+0x80390000u; // 8017EC80
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017EC84
  c->r[0]=R32(c->r[27]+0x00000004u); // 8017EC88
  c->r[31]=c->r[28]+0xFFFFF604u; // 8017EC8C
  c->r[29]=0u+0x00000001u; // 8017EC90
  W32(c->r[31]+0x00000000u,c->r[3]); // 8017EC94
  W32(c->r[31]+0x00000004u,c->r[0]); // 8017EC98
  c->r[3]=R32(c->r[27]+0x00000008u); // 8017EC9C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8017ECA0
  W32(c->r[31]+0x00000008u,c->r[3]); // 8017ECA4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017ECA8
  c->r[3]=R32(c->r[27]+0x00000010u); // 8017ECAC
  c->r[0]=R32(c->r[27]+0x00000014u); // 8017ECB0
  W32(c->r[31]+0x00000010u,c->r[3]); // 8017ECB4
  W32(c->r[31]+0x00000014u,c->r[0]); // 8017ECB8
  c->r[3]=R32(c->r[27]+0x00000018u); // 8017ECBC
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 8017ECC0
  W32(c->r[31]+0x00000018u,c->r[3]); // 8017ECC4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8017ECC8
  c->r[0]=R32(c->r[27]+0x00000020u); // 8017ECCC
  W32(c->r[31]+0x00000020u,c->r[0]); // 8017ECD0
  W8(c->r[13]+0xFFFFA048u,c->r[29]); // 8017ECD4
  W8(c->r[31]+0x00000021u,c->r[29]); // 8017ECD8
  c->lr=0x8017ECE0u; f_8017EB3C(c); // 8017ECDC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8017ECE0
  if (crb(c,2)) { goto L_8017ED6C; } // 8017ECE4
  c->r[4]=R32(c->r[28]+0xFFFFF604u); // 8017ECE8
  c->r[0]=0u+0x00000000u; // 8017ECEC
  W8(c->r[13]+0xFFFFA060u,c->r[29]); // 8017ECF0
  c->r[3]=R32(c->r[13]+0xFFFFA020u); // 8017ECF4
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8017ECF8
  W8(c->r[31]+0x00000022u,c->r[29]); // 8017ECFC
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017ED00
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8017ED04
  c->r[4]=R32(c->r[31]+0x00000004u); // 8017ED08
  c->r[3]=R32(c->r[13]+0xFFFFA020u); // 8017ED0C
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8017ED10
  W32(c->r[3]+0x00000010u,c->r[4]); // 8017ED14
  c->r[4]=R32(c->r[31]+0x00000018u); // 8017ED18
  c->r[3]=R32(c->r[13]+0xFFFFA020u); // 8017ED1C
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 8017ED20
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017ED24
  c->r[0]=R32(c->r[5]+0x00000010u); // 8017ED28
  c->r[0]=c->r[0]|0x00000003u; // 8017ED2C
  W32(c->r[5]+0x00000010u,c->r[0]); // 8017ED30
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017ED34
  W16(c->r[3]+0x00000004u,c->r[0]); // 8017ED38
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017ED3C
  c->r[0]=c->r[0]|0x00000004u; // 8017ED40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8017ED44
  W32(c->r[5]+0x00000008u,c->r[0]); // 8017ED48
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017ED4C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017ED50
  c->r[0]=R32(c->r[5]+0x00000008u); // 8017ED54
  c->r[0]=c->r[0]|0x00000010u; // 8017ED58
  W32(c->r[5]+0x00000008u,c->r[0]); // 8017ED5C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017ED60
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017ED64
  goto L_8017EDF0; // 8017ED68
L_8017ED6C:;
  c->r[0]=R8(c->r[13]+0xFFFFA060u); // 8017ED6C
  c->r[4]=0u+0x00000000u; // 8017ED70
  W8(c->r[31]+0x00000022u,c->r[4]); // 8017ED74
  cmps(c,0,(int32_t)c->r[0],0); // 8017ED78
  if (crb(c,2)) { goto L_8017ED9C; } // 8017ED7C
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017ED80
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017ED84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8017ED88
  W32(c->r[3]+0x00000008u,c->r[0]); // 8017ED8C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017ED90
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017ED94
  W8(c->r[13]+0xFFFFA060u,c->r[4]); // 8017ED98
L_8017ED9C:;
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 8017ED9C
  c->r[3]=0u+0x80390000u; // 8017EDA0
  c->r[5]=c->r[3]+0xFFFFF604u; // 8017EDA4
  c->r[0]=0u+0x00000000u; // 8017EDA8
  c->r[4]=R32(c->r[7]+0x00000008u); // 8017EDAC
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFF3u; // 8017EDB0
  W32(c->r[7]+0x00000008u,c->r[6]); // 8017EDB4
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EDB8
  W16(c->r[4]+0x00000002u,c->r[6]); // 8017EDBC
  c->r[4]=R32(c->r[3]+0xFFFFF604u); // 8017EDC0
  c->r[3]=R32(c->r[13]+0xFFFFA020u); // 8017EDC4
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8017EDC8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8017EDCC
  c->r[4]=R32(c->r[5]+0x00000004u); // 8017EDD0
  c->r[3]=R32(c->r[13]+0xFFFFA020u); // 8017EDD4
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8017EDD8
  W32(c->r[3]+0x00000010u,c->r[4]); // 8017EDDC
  c->r[4]=R32(c->r[5]+0x00000018u); // 8017EDE0
  c->r[3]=R32(c->r[13]+0xFFFFA020u); // 8017EDE4
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 8017EDE8
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017EDEC
L_8017EDF0:;
  c->lr=0x8017EDF4u; f_8015980C(c); // 8017EDF0
  c->r[3]=c->r[30]|c->r[30]; // 8017EDF4
  c->lr=0x8017EDFCu; f_80160C90(c); // 8017EDF8
L_8017EDFC:;
  c->r[11]=c->r[1]+0x00000020u; // 8017EDFC
  c->lr=0x8017EE04u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017EE00
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017EE04
  c->lr=c->r[0]; // 8017EE08
  c->r[1]=c->r[1]+0x00000020u; // 8017EE0C
  return; // 8017EE10
}

// GXSetGPFifo
void f_8017EE14(Ctx* __restrict c) {
  trace_call(0x8017EE14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017EE14
  c->r[0]=c->lr; // 8017EE18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017EE1C
  c->r[11]=c->r[1]+0x00000020u; // 8017EE20
  c->lr=0x8017EE28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017EE24
  c->r[27]=c->r[3]|c->r[3]; // 8017EE28
  c->lr=0x8017EE30u; f_80160C68(c); // 8017EE2C
  c->r[29]=R32(c->r[2]+0xFFFF8DA0u); // 8017EE30
  cmps(c,0,(int32_t)c->r[27],0); // 8017EE34
  c->r[28]=c->r[3]|c->r[3]; // 8017EE38
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017EE3C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8017EE40
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017EE44
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EE48
  W16(c->r[4]+0x00000002u,c->r[0]); // 8017EE4C
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017EE50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 8017EE54
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017EE58
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EE5C
  W16(c->r[4]+0x00000002u,c->r[0]); // 8017EE60
  if (!crb(c,2)) { goto L_8017EEA0; } // 8017EE64
  c->r[6]=0u+0x00000000u; // 8017EE68
  c->r[4]=0u+0x80390000u; // 8017EE6C
  W8(c->r[13]+0xFFFFA049u,c->r[6]); // 8017EE70
  c->r[4]=c->r[4]+0xFFFFF5E0u; // 8017EE74
  W8(c->r[13]+0xFFFFA060u,c->r[6]); // 8017EE78
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017EE7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8017EE80
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017EE84
  c->r[5]=R32(c->r[13]+0xFFFFA024u); // 8017EE88
  W16(c->r[5]+0x00000002u,c->r[0]); // 8017EE8C
  W8(c->r[4]+0x00000021u,c->r[6]); // 8017EE90
  W8(c->r[4]+0x00000022u,c->r[6]); // 8017EE94
  c->lr=0x8017EE9Cu; f_80160C90(c); // 8017EE98
  goto L_8017F08C; // 8017EE9C
L_8017EEA0:;
  c->r[3]=0u+0x80390000u; // 8017EEA0
  c->r[6]=R32(c->r[27]+0x00000000u); // 8017EEA4
  c->r[0]=R32(c->r[27]+0x00000004u); // 8017EEA8
  c->r[30]=c->r[3]+0xFFFFF5E0u; // 8017EEAC
  c->r[31]=0u+0x00000001u; // 8017EEB0
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EEB4
  W32(c->r[30]+0x00000000u,c->r[6]); // 8017EEB8
  W32(c->r[30]+0x00000004u,c->r[0]); // 8017EEBC
  c->r[5]=R32(c->r[27]+0x00000008u); // 8017EEC0
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8017EEC4
  W32(c->r[30]+0x00000008u,c->r[5]); // 8017EEC8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8017EECC
  c->r[5]=R32(c->r[27]+0x00000010u); // 8017EED0
  c->r[0]=R32(c->r[27]+0x00000014u); // 8017EED4
  W32(c->r[30]+0x00000010u,c->r[5]); // 8017EED8
  W32(c->r[30]+0x00000014u,c->r[0]); // 8017EEDC
  c->r[5]=R32(c->r[27]+0x00000018u); // 8017EEE0
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 8017EEE4
  W32(c->r[30]+0x00000018u,c->r[5]); // 8017EEE8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8017EEEC
  c->r[0]=R32(c->r[27]+0x00000020u); // 8017EEF0
  W32(c->r[30]+0x00000020u,c->r[0]); // 8017EEF4
  W8(c->r[13]+0xFFFFA049u,c->r[31]); // 8017EEF8
  W8(c->r[30]+0x00000022u,c->r[31]); // 8017EEFC
  W16(c->r[4]+0x00000020u,c->r[6]); // 8017EF00
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017EF04
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EF08
  W16(c->r[4]+0x00000024u,c->r[0]); // 8017EF0C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017EF10
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EF14
  W16(c->r[4]+0x00000030u,c->r[0]); // 8017EF18
  c->r[0]=R32(c->r[30]+0x00000018u); // 8017EF1C
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EF20
  W16(c->r[4]+0x00000034u,c->r[0]); // 8017EF24
  c->r[0]=R32(c->r[30]+0x00000014u); // 8017EF28
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EF2C
  W16(c->r[4]+0x00000038u,c->r[0]); // 8017EF30
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017EF34
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EF38
  W16(c->r[4]+0x00000028u,c->r[0]); // 8017EF3C
  c->r[0]=R32(c->r[30]+0x00000010u); // 8017EF40
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017EF44
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 8017EF48
  c->r[0]=R32(c->r[3]+0xFFFFF5E0u); // 8017EF4C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EF50
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 8017EF54
  W16(c->r[3]+0x00000022u,c->r[0]); // 8017EF58
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017EF5C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EF60
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 8017EF64
  W16(c->r[3]+0x00000026u,c->r[0]); // 8017EF68
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017EF6C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EF70
  c->r[0]=sraw(c,c->r[0],16); // 8017EF74
  W16(c->r[3]+0x00000032u,c->r[0]); // 8017EF78
  c->r[0]=R32(c->r[30]+0x00000018u); // 8017EF7C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EF80
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 8017EF84
  W16(c->r[3]+0x00000036u,c->r[0]); // 8017EF88
  c->r[0]=R32(c->r[30]+0x00000014u); // 8017EF8C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EF90
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 8017EF94
  W16(c->r[3]+0x0000003Au,c->r[0]); // 8017EF98
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017EF9C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EFA0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 8017EFA4
  W16(c->r[3]+0x0000002Au,c->r[0]); // 8017EFA8
  c->r[0]=R32(c->r[30]+0x00000010u); // 8017EFAC
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EFB0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 8017EFB4
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 8017EFB8
  c->lr=0x8017EFC0u; f_8015980C(c); // 8017EFBC
  c->lr=0x8017EFC4u; f_8017EB3C(c); // 8017EFC0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8017EFC4
  if (crb(c,2)) { goto L_8017F004; } // 8017EFC8
  W8(c->r[13]+0xFFFFA060u,c->r[31]); // 8017EFCC
  W8(c->r[30]+0x00000021u,c->r[31]); // 8017EFD0
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017EFD4
  c->r[0]=c->r[0]|0x00000004u; // 8017EFD8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8017EFDC
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017EFE0
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EFE4
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017EFE8
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017EFEC
  c->r[0]=c->r[0]|0x00000010u; // 8017EFF0
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017EFF4
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017EFF8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017EFFC
  goto L_8017F038; // 8017F000
L_8017F004:;
  c->r[0]=0u+0x00000000u; // 8017F004
  W8(c->r[13]+0xFFFFA060u,c->r[0]); // 8017F008
  W8(c->r[30]+0x00000021u,c->r[0]); // 8017F00C
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F010
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 8017F014
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F018
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F01C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017F020
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F024
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8017F028
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F02C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F030
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017F034
L_8017F038:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F038
  c->r[3]=c->r[28]|c->r[28]; // 8017F03C
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017F040
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8017F044
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017F048
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 8017F04C
  W16(c->r[4]+0x00000002u,c->r[0]); // 8017F050
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F054
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017F058
  W16(c->r[4]+0x00000002u,c->r[0]); // 8017F05C
  c->r[0]=R32(c->r[5]+0x00000010u); // 8017F060
  c->r[0]=c->r[0]|0x00000003u; // 8017F064
  W32(c->r[5]+0x00000010u,c->r[0]); // 8017F068
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017F06C
  W16(c->r[4]+0x00000004u,c->r[0]); // 8017F070
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F074
  c->r[0]=c->r[0]|0x00000001u; // 8017F078
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F07C
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017F080
  W16(c->r[4]+0x00000002u,c->r[0]); // 8017F084
  c->lr=0x8017F08Cu; f_80160C90(c); // 8017F088
L_8017F08C:;
  c->r[11]=c->r[1]+0x00000020u; // 8017F08C
  c->lr=0x8017F094u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017F090
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F094
  c->lr=c->r[0]; // 8017F098
  c->r[1]=c->r[1]+0x00000020u; // 8017F09C
  return; // 8017F0A0
}

// fn_8017F0A4
void f_8017F0A4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFFA049u); // 8017F0A4
  return; // 8017F0A8
}

// fn_8017F0AC
void f_8017F0AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F0AC
  c->r[0]=c->lr; // 8017F0B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F0B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F0B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017F0BC
  c->r[30]=c->r[3]|c->r[3]; // 8017F0C0
  c->r[31]=R32(c->r[13]+0xFFFFA054u); // 8017F0C4
  c->lr=0x8017F0CCu; f_80160C68(c); // 8017F0C8
  W32(c->r[13]+0xFFFFA054u,c->r[30]); // 8017F0CC
  c->lr=0x8017F0D4u; f_80160C90(c); // 8017F0D0
  c->r[3]=c->r[31]|c->r[31]; // 8017F0D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F0D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017F0DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F0E0
  c->lr=c->r[0]; // 8017F0E4
  c->r[1]=c->r[1]+0x00000010u; // 8017F0E8
  return; // 8017F0EC
}

// __GXFifoInit
void f_8017F0F0(Ctx* __restrict c) {
  trace_call(0x8017F0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F0F0
  c->r[0]=c->lr; // 8017F0F4
  c->r[4]=0u+0x80180000u; // 8017F0F8
  c->r[3]=0u+0x00000011u; // 8017F0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017F100
  c->r[4]=c->r[4]+0xFFFFE950u; // 8017F104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F108
  c->lr=0x8017F110u; f_80160CB4(c); // 8017F10C
  c->r[3]=0u+0x00004000u; // 8017F110
  c->lr=0x8017F118u; f_80161078(c); // 8017F114
  c->lr=0x8017F11Cu; f_80163990(c); // 8017F118
  c->r[31]=0u+0x00000000u; // 8017F11C
  W32(c->r[13]+0xFFFFA05Cu,c->r[3]); // 8017F120
  c->r[3]=0u+0x80390000u; // 8017F124
  c->r[4]=0u+0x00000000u; // 8017F128
  W32(c->r[13]+0xFFFFA058u,c->r[31]); // 8017F12C
  c->r[3]=c->r[3]+0xFFFFF604u; // 8017F130
  c->r[5]=0u+0x00000024u; // 8017F134
  c->lr=0x8017F13Cu; f_80004688(c); // 8017F138
  c->r[3]=0u+0x80390000u; // 8017F13C
  c->r[4]=0u+0x00000000u; // 8017F140
  c->r[3]=c->r[3]+0xFFFFF5E0u; // 8017F144
  c->r[5]=0u+0x00000024u; // 8017F148
  c->lr=0x8017F150u; f_80004688(c); // 8017F14C
  W8(c->r[13]+0xFFFFA048u,c->r[31]); // 8017F150
  W8(c->r[13]+0xFFFFA049u,c->r[31]); // 8017F154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F158
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017F15C
  c->lr=c->r[0]; // 8017F160
  c->r[1]=c->r[1]+0x00000010u; // 8017F164
  return; // 8017F168
}

// __GXCleanGPFifo
void f_8017F16C(Ctx* __restrict c) {
  trace_call(0x8017F16Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F16C
  c->r[0]=c->lr; // 8017F170
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017F174
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017F178
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017F17C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017F180
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017F184
  c->r[0]=R8(c->r[13]+0xFFFFA049u); // 8017F188
  cmps(c,0,(int32_t)c->r[0],0); // 8017F18C
  if (crb(c,2)) { goto L_8017F2EC; } // 8017F190
  c->lr=0x8017F198u; f_80160C68(c); // 8017F194
  c->r[29]=R32(c->r[2]+0xFFFF8DA0u); // 8017F198
  c->r[30]=0u+0x80390000u; // 8017F19C
  c->r[28]=c->r[3]|c->r[3]; // 8017F1A0
  c->r[31]=0u+0x00000000u; // 8017F1A4
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F1A8
  c->r[30]=c->r[30]+0xFFFFF5E0u; // 8017F1AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8017F1B0
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F1B4
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F1B8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017F1BC
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F1C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 8017F1C4
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F1C8
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F1CC
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017F1D0
  c->r[0]=R32(c->r[30]+0x00000018u); // 8017F1D4
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 8017F1D8
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F1DC
  W32(c->r[30]+0x00000014u,c->r[0]); // 8017F1E0
  W16(c->r[3]+0x00000030u,c->r[31]); // 8017F1E4
  c->r[0]=R32(c->r[30]+0x00000018u); // 8017F1E8
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F1EC
  W16(c->r[3]+0x00000034u,c->r[0]); // 8017F1F0
  c->r[0]=R32(c->r[30]+0x00000014u); // 8017F1F4
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F1F8
  W16(c->r[3]+0x00000038u,c->r[0]); // 8017F1FC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017F200
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F204
  c->r[0]=sraw(c,c->r[0],16); // 8017F208
  W16(c->r[3]+0x00000032u,c->r[0]); // 8017F20C
  c->r[0]=R32(c->r[30]+0x00000018u); // 8017F210
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F214
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 8017F218
  W16(c->r[3]+0x00000036u,c->r[0]); // 8017F21C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8017F220
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F224
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 8017F228
  W16(c->r[3]+0x0000003Au,c->r[0]); // 8017F22C
  c->lr=0x8017F234u; f_8015980C(c); // 8017F230
  c->r[0]=R8(c->r[13]+0xFFFFA060u); // 8017F234
  cmps(c,0,(int32_t)c->r[0],0); // 8017F238
  if (crb(c,2)) { goto L_8017F298; } // 8017F23C
  c->r[5]=0u+0x80390000u; // 8017F240
  c->r[4]=R32(c->r[30]+0x00000018u); // 8017F244
  c->r[5]=c->r[5]+0xFFFFF604u; // 8017F248
  c->r[3]=R32(c->r[30]+0x00000014u); // 8017F24C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017F250
  c->r[31]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[31]&~0x1FFFFFE0u); // 8017F254
  W32(c->r[5]+0x00000014u,c->r[3]); // 8017F258
  c->r[3]=R32(c->r[13]+0xFFFFA020u); // 8017F25C
  W32(c->r[5]+0x00000018u,c->r[4]); // 8017F260
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 8017F264
  W32(c->r[3]+0x00000014u,c->r[31]); // 8017F268
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F26C
  c->r[0]=c->r[0]|0x00000004u; // 8017F270
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8017F274
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F278
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F27C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017F280
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F284
  c->r[0]=c->r[0]|0x00000010u; // 8017F288
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F28C
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 8017F290
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017F294
L_8017F298:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 8017F298
  c->r[0]=0u+0x00000000u; // 8017F29C
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 8017F2A0
  c->r[3]=c->r[28]|c->r[28]; // 8017F2A4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 8017F2A8
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFDFu; // 8017F2AC
  W32(c->r[29]+0x00000008u,c->r[5]); // 8017F2B0
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017F2B4
  W16(c->r[4]+0x00000002u,c->r[5]); // 8017F2B8
  W32(c->r[13]+0xFFFFA050u,c->r[0]); // 8017F2BC
  c->r[0]=R32(c->r[6]+0x00000010u); // 8017F2C0
  c->r[0]=c->r[0]|0x00000003u; // 8017F2C4
  W32(c->r[6]+0x00000010u,c->r[0]); // 8017F2C8
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017F2CC
  W16(c->r[4]+0x00000004u,c->r[0]); // 8017F2D0
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017F2D4
  c->r[0]=c->r[0]|0x00000001u; // 8017F2D8
  W32(c->r[29]+0x00000008u,c->r[0]); // 8017F2DC
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 8017F2E0
  W16(c->r[4]+0x00000002u,c->r[0]); // 8017F2E4
  c->lr=0x8017F2ECu; f_80160C90(c); // 8017F2E8
L_8017F2EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017F2EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017F2F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017F2F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017F2F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017F2FC
  c->lr=c->r[0]; // 8017F300
  c->r[1]=c->r[1]+0x00000020u; // 8017F304
  return; // 8017F308
}

// fn_8017F30C
void f_8017F30C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFA05Cu); // 8017F30C
  return; // 8017F310
}

// GXSetVtxDesc
void f_8017F314(Ctx* __restrict c) {
  trace_call(0x8017F314u);
  cmpu(c,0,c->r[3],0x00000019u); // 8017F314
  if (crb(c,1)) { goto L_8017F528; } // 8017F318
  c->r[5]=0u+0x80330000u; // 8017F31C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017F320
  c->r[5]=c->r[5]+0xFFFFF9F0u; // 8017F324
  c->r[5]=R32(c->r[5]+c->r[0]); // 8017F328
  c->ctr=c->r[5]; // 8017F32C
  if (true) { switch (c->ctr) { case 0x8017F334u: goto L_8017F334; case 0x8017F348u: goto L_8017F348; case 0x8017F35Cu: goto L_8017F35C; case 0x8017F370u: goto L_8017F370; case 0x8017F384u: goto L_8017F384; case 0x8017F398u: goto L_8017F398; case 0x8017F3ACu: goto L_8017F3AC; case 0x8017F3C0u: goto L_8017F3C0; case 0x8017F3D4u: goto L_8017F3D4; case 0x8017F3E8u: goto L_8017F3E8; case 0x8017F3FCu: goto L_8017F3FC; case 0x8017F430u: goto L_8017F430; case 0x8017F464u: goto L_8017F464; case 0x8017F478u: goto L_8017F478; case 0x8017F48Cu: goto L_8017F48C; case 0x8017F4A0u: goto L_8017F4A0; case 0x8017F4B4u: goto L_8017F4B4; case 0x8017F4C8u: goto L_8017F4C8; case 0x8017F4DCu: goto L_8017F4DC; case 0x8017F4F0u: goto L_8017F4F0; case 0x8017F504u: goto L_8017F504; case 0x8017F518u: goto L_8017F518; case 0x8017F528u: goto L_8017F528; default: break; } dispatch(c,c->ctr); return; } // 8017F330
L_8017F334:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F334
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F338
  c->r[0]=(rotl(c->r[4],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 8017F33C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F340
  goto L_8017F528; // 8017F344
L_8017F348:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F348
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F34C
  c->r[0]=(rotl(c->r[4],1)&0x00000002u)|(c->r[0]&~0x00000002u); // 8017F350
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F354
  goto L_8017F528; // 8017F358
L_8017F35C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F35C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F360
  c->r[0]=(rotl(c->r[4],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 8017F364
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F368
  goto L_8017F528; // 8017F36C
L_8017F370:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F370
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F374
  c->r[0]=(rotl(c->r[4],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 8017F378
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F37C
  goto L_8017F528; // 8017F380
L_8017F384:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F384
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F388
  c->r[0]=(rotl(c->r[4],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 8017F38C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F390
  goto L_8017F528; // 8017F394
L_8017F398:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F398
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F39C
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 8017F3A0
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F3A4
  goto L_8017F528; // 8017F3A8
L_8017F3AC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F3AC
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F3B0
  c->r[0]=(rotl(c->r[4],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 8017F3B4
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F3B8
  goto L_8017F528; // 8017F3BC
L_8017F3C0:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F3C0
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F3C4
  c->r[0]=(rotl(c->r[4],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 8017F3C8
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F3CC
  goto L_8017F528; // 8017F3D0
L_8017F3D4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F3D4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F3D8
  c->r[0]=(rotl(c->r[4],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 8017F3DC
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F3E0
  goto L_8017F528; // 8017F3E4
L_8017F3E8:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F3E8
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F3EC
  c->r[0]=(rotl(c->r[4],9)&0x00000600u)|(c->r[0]&~0x00000600u); // 8017F3F0
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F3F4
  goto L_8017F528; // 8017F3F8
L_8017F3FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017F3FC
  if (crb(c,2)) { goto L_8017F420; } // 8017F400
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017F404
  c->r[3]=0u+0x00000001u; // 8017F408
  c->r[0]=0u+0x00000000u; // 8017F40C
  W8(c->r[5]+0x00000524u,c->r[3]); // 8017F410
  W8(c->r[5]+0x00000525u,c->r[0]); // 8017F414
  W32(c->r[5]+0x00000520u,c->r[4]); // 8017F418
  goto L_8017F528; // 8017F41C
L_8017F420:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F420
  c->r[0]=0u+0x00000000u; // 8017F424
  W8(c->r[3]+0x00000524u,c->r[0]); // 8017F428
  goto L_8017F528; // 8017F42C
L_8017F430:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017F430
  if (crb(c,2)) { goto L_8017F454; } // 8017F434
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017F438
  c->r[3]=0u+0x00000001u; // 8017F43C
  c->r[0]=0u+0x00000000u; // 8017F440
  W8(c->r[5]+0x00000525u,c->r[3]); // 8017F444
  W8(c->r[5]+0x00000524u,c->r[0]); // 8017F448
  W32(c->r[5]+0x00000520u,c->r[4]); // 8017F44C
  goto L_8017F528; // 8017F450
L_8017F454:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F454
  c->r[0]=0u+0x00000000u; // 8017F458
  W8(c->r[3]+0x00000525u,c->r[0]); // 8017F45C
  goto L_8017F528; // 8017F460
L_8017F464:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F464
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F468
  c->r[0]=(rotl(c->r[4],13)&0x00006000u)|(c->r[0]&~0x00006000u); // 8017F46C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F470
  goto L_8017F528; // 8017F474
L_8017F478:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F478
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F47C
  c->r[0]=(rotl(c->r[4],15)&0x00018000u)|(c->r[0]&~0x00018000u); // 8017F480
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017F484
  goto L_8017F528; // 8017F488
L_8017F48C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F48C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F490
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 8017F494
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F498
  goto L_8017F528; // 8017F49C
L_8017F4A0:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F4A0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F4A4
  c->r[0]=(rotl(c->r[4],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 8017F4A8
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F4AC
  goto L_8017F528; // 8017F4B0
L_8017F4B4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F4B4
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F4B8
  c->r[0]=(rotl(c->r[4],4)&0x00000030u)|(c->r[0]&~0x00000030u); // 8017F4BC
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F4C0
  goto L_8017F528; // 8017F4C4
L_8017F4C8:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F4C8
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F4CC
  c->r[0]=(rotl(c->r[4],6)&0x000000C0u)|(c->r[0]&~0x000000C0u); // 8017F4D0
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F4D4
  goto L_8017F528; // 8017F4D8
L_8017F4DC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F4DC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F4E0
  c->r[0]=(rotl(c->r[4],8)&0x00000300u)|(c->r[0]&~0x00000300u); // 8017F4E4
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F4E8
  goto L_8017F528; // 8017F4EC
L_8017F4F0:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F4F0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F4F4
  c->r[0]=(rotl(c->r[4],10)&0x00000C00u)|(c->r[0]&~0x00000C00u); // 8017F4F8
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F4FC
  goto L_8017F528; // 8017F500
L_8017F504:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F504
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F508
  c->r[0]=(rotl(c->r[4],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 8017F50C
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F510
  goto L_8017F528; // 8017F514
L_8017F518:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F518
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F51C
  c->r[0]=(rotl(c->r[4],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 8017F520
  W32(c->r[3]+0x00000018u,c->r[0]); // 8017F524
L_8017F528:;
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 8017F528
  c->r[0]=R8(c->r[4]+0x00000524u); // 8017F52C
  cmps(c,0,(int32_t)c->r[0],0); // 8017F530
  if (!crb(c,2)) { goto L_8017F544; } // 8017F534
  c->r[0]=R8(c->r[4]+0x00000525u); // 8017F538
  cmps(c,0,(int32_t)c->r[0],0); // 8017F53C
  if (crb(c,2)) { goto L_8017F55C; } // 8017F540
L_8017F544:;
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017F544
  c->r[0]=R32(c->r[5]+0x00000520u); // 8017F548
  c->r[3]=R32(c->r[5]+0x00000014u); // 8017F54C
  c->r[3]=(rotl(c->r[0],11)&0x00001800u)|(c->r[3]&~0x00001800u); // 8017F550
  W32(c->r[5]+0x00000014u,c->r[3]); // 8017F554
  goto L_8017F568; // 8017F558
L_8017F55C:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 8017F55C
  c->r[0]=rotl(c->r[0],0)&0xFFFFE7FFu; // 8017F560
  W32(c->r[4]+0x00000014u,c->r[0]); // 8017F564
L_8017F568:;
  c->r[0]=R32(c->r[4]+0x000005FCu); // 8017F568
  c->r[0]=c->r[0]|0x00000008u; // 8017F56C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 8017F570
  return; // 8017F574
}

// __GXSetVCD
void f_8017F578(Ctx* __restrict c) {
  trace_call(0x8017F578u);
  c->r[5]=0u+0xCC010000u; // 8017F578
  c->r[6]=0u+0x00000008u; // 8017F57C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8017F580
  c->r[4]=0u+0x00000050u; // 8017F584
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F588
  c->r[0]=0u+0x00000060u; // 8017F58C
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8017F590
  c->r[4]=R32(c->r[3]+0x00000014u); // 8017F594
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8017F598
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8017F59C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8017F5A0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F5A4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8017F5A8
  c->r[0]=R8(c->r[3]+0x00000525u); // 8017F5AC
  cmps(c,0,(int32_t)c->r[0],0); // 8017F5B0
  if (crb(c,2)) { goto L_8017F5C0; } // 8017F5B4
  c->r[8]=0u+0x00000002u; // 8017F5B8
  goto L_8017F5D0; // 8017F5BC
L_8017F5C0:;
  c->r[4]=R8(c->r[3]+0x00000524u); // 8017F5C0
  c->r[0]=0u-c->r[4]; // 8017F5C4
  c->r[0]=c->r[0]|c->r[4]; // 8017F5C8
  c->r[8]=rotl(c->r[0],1)&0x00000001u; // 8017F5CC
L_8017F5D0:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 8017F5D0
  c->r[6]=0u+0xCC010000u; // 8017F5D4
  c->r[4]=R32(c->r[3]+0x00000018u); // 8017F5D8
  c->r[0]=0u+0x00000010u; // 8017F5DC
  c->r[7]=rotl(c->r[5],19)&0x0000000Fu; // 8017F5E0
  c->r[5]=0u+0x00001008u; // 8017F5E4
  c->r[7]=cntlz(c->r[7]); // 8017F5E8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8017F5EC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8017F5F0
  c->r[7]=addc(c,~c->r[7],0x00000021u,1); // 8017F5F4
  c->r[0]=cntlz(c->r[4]); // 8017F5F8
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8017F5FC
  c->r[0]=addc(c,~c->r[0],0x00000021u,1); // 8017F600
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 8017F604
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF0u; // 8017F608
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 8017F60C
  c->r[5]=c->r[0]|c->r[7]; // 8017F610
  c->r[4]=c->r[5]|c->r[4]; // 8017F614
  c->r[0]=0u+0x00000001u; // 8017F618
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 8017F61C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8017F620
  return; // 8017F624
}

// __GXCalculateVLim
void f_8017F628(Ctx* __restrict c) {
  trace_call(0x8017F628u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017F628
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F62C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017F630
  c->r[0]=R16(c->r[3]+0x00000004u); // 8017F634
  cmps(c,0,(int32_t)c->r[0],0); // 8017F638
  if (crb(c,2)) { goto L_8017F748; } // 8017F63C
  c->r[9]=R32(c->r[3]+0x00000014u); // 8017F640
  c->r[7]=c->r[13]+0xFFFF91B8u; // 8017F644
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 8017F648
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 8017F64C
  c->r[4]=rotl(c->r[9],31)&0x00000001u; // 8017F650
  c->r[0]=c->r[0]+c->r[4]; // 8017F654
  c->r[8]=rotl(c->r[5],23)&0x00000001u; // 8017F658
  c->r[4]=rotl(c->r[9],30)&0x00000001u; // 8017F65C
  c->r[5]=rotl(c->r[9],21)&0x00000003u; // 8017F660
  c->r[0]=c->r[0]+c->r[4]; // 8017F664
  cmps(c,0,(int32_t)c->r[8],1); // 8017F668
  c->r[4]=rotl(c->r[9],29)&0x00000001u; // 8017F66C
  c->r[6]=rotl(c->r[9],26)&0x00000001u; // 8017F670
  c->r[0]=c->r[0]+c->r[4]; // 8017F674
  c->r[8]=rotl(c->r[9],24)&0x00000001u; // 8017F678
  c->r[4]=rotl(c->r[9],28)&0x00000001u; // 8017F67C
  c->r[31]=R32(c->r[3]+0x00000018u); // 8017F680
  c->r[0]=c->r[0]+c->r[4]; // 8017F684
  c->r[5]=R8(c->r[7]+c->r[5]); // 8017F688
  c->r[4]=rotl(c->r[9],27)&0x00000001u; // 8017F68C
  c->r[0]=c->r[0]+c->r[4]; // 8017F690
  c->r[0]=c->r[0]+c->r[6]; // 8017F694
  c->r[6]=rotl(c->r[9],25)&0x00000001u; // 8017F698
  c->r[0]=c->r[0]+c->r[6]; // 8017F69C
  c->r[4]=rotl(c->r[9],23)&0x00000003u; // 8017F6A0
  c->r[6]=R8(c->r[7]+c->r[4]); // 8017F6A4
  c->r[0]=c->r[0]+c->r[8]; // 8017F6A8
  c->r[4]=0u+0x00000001u; // 8017F6AC
  c->r[0]=c->r[0]+c->r[6]; // 8017F6B0
  if (!crb(c,2)) { goto L_8017F6BC; } // 8017F6B4
  c->r[4]=0u+0x00000003u; // 8017F6B8
L_8017F6BC:;
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8017F6BC
  c->r[7]=c->r[13]+0xFFFF91B0u; // 8017F6C0
  c->r[4]=rotl(c->r[9],19)&0x00000003u; // 8017F6C4
  c->r[5]=rotl(c->r[9],17)&0x00000003u; // 8017F6C8
  c->r[6]=R8(c->r[7]+c->r[4]); // 8017F6CC
  c->r[5]=R8(c->r[7]+c->r[5]); // 8017F6D0
  c->r[0]=c->r[0]+c->r[8]; // 8017F6D4
  c->r[12]=c->r[13]+0xFFFF91B4u; // 8017F6D8
  c->r[0]=c->r[0]+c->r[6]; // 8017F6DC
  c->r[4]=rotl(c->r[31],0)&0x00000003u; // 8017F6E0
  c->r[10]=rotl(c->r[31],30)&0x00000003u; // 8017F6E4
  c->r[11]=R8(c->r[12]+c->r[4]); // 8017F6E8
  c->r[0]=c->r[0]+c->r[5]; // 8017F6EC
  c->r[9]=rotl(c->r[31],28)&0x00000003u; // 8017F6F0
  c->r[8]=rotl(c->r[31],26)&0x00000003u; // 8017F6F4
  c->r[7]=rotl(c->r[31],24)&0x00000003u; // 8017F6F8
  c->r[6]=rotl(c->r[31],22)&0x00000003u; // 8017F6FC
  c->r[5]=rotl(c->r[31],20)&0x00000003u; // 8017F700
  c->r[4]=rotl(c->r[31],18)&0x00000003u; // 8017F704
  c->r[10]=R8(c->r[12]+c->r[10]); // 8017F708
  c->r[0]=c->r[0]+c->r[11]; // 8017F70C
  c->r[9]=R8(c->r[12]+c->r[9]); // 8017F710
  c->r[0]=c->r[0]+c->r[10]; // 8017F714
  c->r[8]=R8(c->r[12]+c->r[8]); // 8017F718
  c->r[0]=c->r[0]+c->r[9]; // 8017F71C
  c->r[7]=R8(c->r[12]+c->r[7]); // 8017F720
  c->r[0]=c->r[0]+c->r[8]; // 8017F724
  c->r[6]=R8(c->r[12]+c->r[6]); // 8017F728
  c->r[0]=c->r[0]+c->r[7]; // 8017F72C
  c->r[5]=R8(c->r[12]+c->r[5]); // 8017F730
  c->r[0]=c->r[0]+c->r[6]; // 8017F734
  c->r[4]=R8(c->r[12]+c->r[4]); // 8017F738
  c->r[0]=c->r[0]+c->r[5]; // 8017F73C
  c->r[0]=c->r[0]+c->r[4]; // 8017F740
  W16(c->r[3]+0x00000006u,c->r[0]); // 8017F744
L_8017F748:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017F748
  c->r[1]=c->r[1]+0x00000010u; // 8017F74C
  return; // 8017F750
}

// fn_8017F754
void f_8017F754(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x00000019u); // 8017F754
  if (crb(c,1)) { goto L_8017F8FC; } // 8017F758
  c->r[5]=0u+0x80330000u; // 8017F75C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017F760
  c->r[5]=c->r[5]+0xFFFFFA58u; // 8017F764
  c->r[5]=R32(c->r[5]+c->r[0]); // 8017F768
  c->ctr=c->r[5]; // 8017F76C
  if (true) { switch (c->ctr) { case 0x8017F774u: goto L_8017F774; case 0x8017F784u: goto L_8017F784; case 0x8017F794u: goto L_8017F794; case 0x8017F7A4u: goto L_8017F7A4; case 0x8017F7B4u: goto L_8017F7B4; case 0x8017F7C4u: goto L_8017F7C4; case 0x8017F7D4u: goto L_8017F7D4; case 0x8017F7E4u: goto L_8017F7E4; case 0x8017F7F4u: goto L_8017F7F4; case 0x8017F804u: goto L_8017F804; case 0x8017F814u: goto L_8017F814; case 0x8017F838u: goto L_8017F838; case 0x8017F85Cu: goto L_8017F85C; case 0x8017F86Cu: goto L_8017F86C; case 0x8017F87Cu: goto L_8017F87C; case 0x8017F88Cu: goto L_8017F88C; case 0x8017F89Cu: goto L_8017F89C; case 0x8017F8ACu: goto L_8017F8AC; case 0x8017F8BCu: goto L_8017F8BC; case 0x8017F8CCu: goto L_8017F8CC; case 0x8017F8DCu: goto L_8017F8DC; case 0x8017F8ECu: goto L_8017F8EC; case 0x8017F8FCu: goto L_8017F8FC; default: break; } dispatch(c,c->ctr); return; } // 8017F770
L_8017F774:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F774
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F778
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8017F77C
  goto L_8017F900; // 8017F780
L_8017F784:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F784
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F788
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8017F78C
  goto L_8017F900; // 8017F790
L_8017F794:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F794
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F798
  c->r[0]=rotl(c->r[0],30)&0x00000001u; // 8017F79C
  goto L_8017F900; // 8017F7A0
L_8017F7A4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F7A4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F7A8
  c->r[0]=rotl(c->r[0],29)&0x00000001u; // 8017F7AC
  goto L_8017F900; // 8017F7B0
L_8017F7B4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F7B4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F7B8
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 8017F7BC
  goto L_8017F900; // 8017F7C0
L_8017F7C4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F7C4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F7C8
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8017F7CC
  goto L_8017F900; // 8017F7D0
L_8017F7D4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F7D4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F7D8
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 8017F7DC
  goto L_8017F900; // 8017F7E0
L_8017F7E4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F7E4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F7E8
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 8017F7EC
  goto L_8017F900; // 8017F7F0
L_8017F7F4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F7F4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F7F8
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 8017F7FC
  goto L_8017F900; // 8017F800
L_8017F804:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F804
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F808
  c->r[0]=rotl(c->r[0],23)&0x00000003u; // 8017F80C
  goto L_8017F900; // 8017F810
L_8017F814:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F814
  c->r[0]=R8(c->r[3]+0x00000524u); // 8017F818
  cmps(c,0,(int32_t)c->r[0],0); // 8017F81C
  if (crb(c,2)) { goto L_8017F830; } // 8017F820
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F824
  c->r[0]=rotl(c->r[0],21)&0x00000003u; // 8017F828
  goto L_8017F900; // 8017F82C
L_8017F830:;
  c->r[0]=0u+0x00000000u; // 8017F830
  goto L_8017F900; // 8017F834
L_8017F838:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F838
  c->r[0]=R8(c->r[3]+0x00000525u); // 8017F83C
  cmps(c,0,(int32_t)c->r[0],0); // 8017F840
  if (crb(c,2)) { goto L_8017F854; } // 8017F844
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F848
  c->r[0]=rotl(c->r[0],21)&0x00000003u; // 8017F84C
  goto L_8017F900; // 8017F850
L_8017F854:;
  c->r[0]=0u+0x00000000u; // 8017F854
  goto L_8017F900; // 8017F858
L_8017F85C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F85C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F860
  c->r[0]=rotl(c->r[0],19)&0x00000003u; // 8017F864
  goto L_8017F900; // 8017F868
L_8017F86C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F86C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8017F870
  c->r[0]=rotl(c->r[0],17)&0x00000003u; // 8017F874
  goto L_8017F900; // 8017F878
L_8017F87C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F87C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F880
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8017F884
  goto L_8017F900; // 8017F888
L_8017F88C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F88C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F890
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 8017F894
  goto L_8017F900; // 8017F898
L_8017F89C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F89C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F8A0
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 8017F8A4
  goto L_8017F900; // 8017F8A8
L_8017F8AC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F8AC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F8B0
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 8017F8B4
  goto L_8017F900; // 8017F8B8
L_8017F8BC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F8BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F8C0
  c->r[0]=rotl(c->r[0],24)&0x00000003u; // 8017F8C4
  goto L_8017F900; // 8017F8C8
L_8017F8CC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F8CC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F8D0
  c->r[0]=rotl(c->r[0],22)&0x00000003u; // 8017F8D4
  goto L_8017F900; // 8017F8D8
L_8017F8DC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F8DC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F8E0
  c->r[0]=rotl(c->r[0],20)&0x00000003u; // 8017F8E4
  goto L_8017F900; // 8017F8E8
L_8017F8EC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8017F8EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017F8F0
  c->r[0]=rotl(c->r[0],18)&0x00000003u; // 8017F8F4
  goto L_8017F900; // 8017F8F8
L_8017F8FC:;
  c->r[0]=0u+0x00000000u; // 8017F8FC
L_8017F900:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017F900
  return; // 8017F904
}

// GXClearVtxDesc
void f_8017F908(Ctx* __restrict c) {
  trace_call(0x8017F908u);
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017F908
  c->r[0]=0u+0x00000001u; // 8017F90C
  c->r[3]=0u+0x00000000u; // 8017F910
  c->r[4]=0u+0x00000000u; // 8017F914
  c->r[3]=(rotl(c->r[0],9)&0x00000600u)|(c->r[3]&~0x00000600u); // 8017F918
  W32(c->r[5]+0x00000014u,c->r[3]); // 8017F91C
  W32(c->r[5]+0x00000018u,c->r[4]); // 8017F920
  W8(c->r[5]+0x00000524u,c->r[4]); // 8017F924
  W8(c->r[5]+0x00000525u,c->r[4]); // 8017F928
  c->r[0]=R32(c->r[5]+0x000005FCu); // 8017F92C
  c->r[0]=c->r[0]|0x00000008u; // 8017F930
  W32(c->r[5]+0x000005FCu,c->r[0]); // 8017F934
  return; // 8017F938
}

// GXSetVtxAttrFmt
void f_8017F93C(Ctx* __restrict c) {
  trace_call(0x8017F93Cu);
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 8017F93C
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 8017F940
  cmpu(c,0,c->r[0],0x00000010u); // 8017F944
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017F948
  c->r[8]=c->r[8]+c->r[4]; // 8017F94C
  if (crb(c,1)) { goto L_8017FAAC; } // 8017F950
  c->r[4]=0u+0x80330000u; // 8017F954
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017F958
  c->r[4]=c->r[4]+0xFFFFFAC0u; // 8017F95C
  c->r[4]=R32(c->r[4]+c->r[0]); // 8017F960
  c->ctr=c->r[4]; // 8017F964
  if (true) { switch (c->ctr) { case 0x8017F96Cu: goto L_8017F96C; case 0x8017F984u: goto L_8017F984; case 0x8017F9C0u: goto L_8017F9C0; case 0x8017F9D4u: goto L_8017F9D4; case 0x8017F9E8u: goto L_8017F9E8; case 0x8017FA00u: goto L_8017FA00; case 0x8017FA18u: goto L_8017FA18; case 0x8017FA30u: goto L_8017FA30; case 0x8017FA48u: goto L_8017FA48; case 0x8017FA68u: goto L_8017FA68; case 0x8017FA80u: goto L_8017FA80; case 0x8017FA98u: goto L_8017FA98; case 0x8017FAACu: goto L_8017FAAC; default: break; } dispatch(c,c->ctr); return; } // 8017F968
L_8017F96C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017F96C
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 8017F970
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 8017F974
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 8017F978
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017F97C
  goto L_8017FAAC; // 8017F980
L_8017F984:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017F984
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 8017F988
  cmps(c,0,(int32_t)c->r[5],2); // 8017F98C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017F990
  if (!crb(c,2)) { goto L_8017F9AC; } // 8017F994
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017F998
  c->r[0]=c->r[0]|0x00000200u; // 8017F99C
  c->r[0]=c->r[0]|0x80000000u; // 8017F9A0
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017F9A4
  goto L_8017FAAC; // 8017F9A8
L_8017F9AC:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017F9AC
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 8017F9B0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8017F9B4
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017F9B8
  goto L_8017FAAC; // 8017F9BC
L_8017F9C0:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017F9C0
  c->r[0]=(rotl(c->r[5],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 8017F9C4
  c->r[0]=(rotl(c->r[6],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 8017F9C8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017F9CC
  goto L_8017FAAC; // 8017F9D0
L_8017F9D4:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017F9D4
  c->r[0]=(rotl(c->r[5],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 8017F9D8
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 8017F9DC
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017F9E0
  goto L_8017FAAC; // 8017F9E4
L_8017F9E8:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017F9E8
  c->r[0]=(rotl(c->r[5],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 8017F9EC
  c->r[0]=(rotl(c->r[6],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 8017F9F0
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 8017F9F4
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017F9F8
  goto L_8017FAAC; // 8017F9FC
L_8017FA00:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FA00
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 8017FA04
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 8017FA08
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 8017FA0C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FA10
  goto L_8017FAAC; // 8017FA14
L_8017FA18:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FA18
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 8017FA1C
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 8017FA20
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 8017FA24
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FA28
  goto L_8017FAAC; // 8017FA2C
L_8017FA30:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FA30
  c->r[0]=(rotl(c->r[5],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 8017FA34
  c->r[0]=(rotl(c->r[6],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 8017FA38
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 8017FA3C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FA40
  goto L_8017FAAC; // 8017FA44
L_8017FA48:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FA48
  c->r[0]=(rotl(c->r[5],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 8017FA4C
  c->r[0]=(rotl(c->r[6],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 8017FA50
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FA54
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FA58
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 8017FA5C
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FA60
  goto L_8017FAAC; // 8017FA64
L_8017FA68:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FA68
  c->r[0]=(rotl(c->r[5],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 8017FA6C
  c->r[0]=(rotl(c->r[6],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 8017FA70
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 8017FA74
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FA78
  goto L_8017FAAC; // 8017FA7C
L_8017FA80:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FA80
  c->r[0]=(rotl(c->r[5],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 8017FA84
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 8017FA88
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 8017FA8C
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FA90
  goto L_8017FAAC; // 8017FA94
L_8017FA98:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FA98
  c->r[0]=(rotl(c->r[5],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 8017FA9C
  c->r[0]=(rotl(c->r[6],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 8017FAA0
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 8017FAA4
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FAA8
L_8017FAAC:;
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017FAAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8017FAB0
  c->r[3]=0u+0x00000001u; // 8017FAB4
  c->r[4]=R32(c->r[5]+0x000005FCu); // 8017FAB8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8017FABC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8017FAC0
  c->r[3]=c->r[4]|0x00000010u; // 8017FAC4
  W32(c->r[5]+0x000005FCu,c->r[3]); // 8017FAC8
  c->r[3]=R8(c->r[5]+0x000005FBu); // 8017FACC
  c->r[0]=c->r[3]|c->r[0]; // 8017FAD0
  W8(c->r[5]+0x000005FBu,c->r[0]); // 8017FAD4
  return; // 8017FAD8
}

// fn_8017FADC
void f_8017FADC(Ctx* __restrict c) {
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 8017FADC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017FAE0
  c->r[5]=0u+0x80330000u; // 8017FAE4
  c->r[8]=c->r[6]+c->r[0]; // 8017FAE8
  goto L_8017FC64; // 8017FAEC
L_8017FAF0:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 8017FAF0
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 8017FAF4
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 8017FAF8
  c->r[10]=R32(c->r[4]+0x00000008u); // 8017FAFC
  cmpu(c,0,c->r[0],0x00000010u); // 8017FB00
  c->r[9]=R32(c->r[4]+0x00000004u); // 8017FB04
  if (crb(c,1)) { goto L_8017FC60; } // 8017FB08
  c->r[6]=c->r[5]+0xFFFFFB04u; // 8017FB0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017FB10
  c->r[6]=R32(c->r[6]+c->r[0]); // 8017FB14
  c->ctr=c->r[6]; // 8017FB18
  if (true) { switch (c->ctr) { case 0x8017FB20u: goto L_8017FB20; case 0x8017FB38u: goto L_8017FB38; case 0x8017FB74u: goto L_8017FB74; case 0x8017FB88u: goto L_8017FB88; case 0x8017FB9Cu: goto L_8017FB9C; case 0x8017FBB4u: goto L_8017FBB4; case 0x8017FBCCu: goto L_8017FBCC; case 0x8017FBE4u: goto L_8017FBE4; case 0x8017FBFCu: goto L_8017FBFC; case 0x8017FC1Cu: goto L_8017FC1C; case 0x8017FC34u: goto L_8017FC34; case 0x8017FC4Cu: goto L_8017FC4C; case 0x8017FC60u: goto L_8017FC60; default: break; } dispatch(c,c->ctr); return; } // 8017FB1C
L_8017FB20:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017FB20
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 8017FB24
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 8017FB28
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 8017FB2C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017FB30
  goto L_8017FC60; // 8017FB34
L_8017FB38:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017FB38
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 8017FB3C
  cmps(c,0,(int32_t)c->r[9],2); // 8017FB40
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017FB44
  if (!crb(c,2)) { goto L_8017FB60; } // 8017FB48
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017FB4C
  c->r[0]=c->r[0]|0x00000200u; // 8017FB50
  c->r[0]=c->r[0]|0x80000000u; // 8017FB54
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017FB58
  goto L_8017FC60; // 8017FB5C
L_8017FB60:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017FB60
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 8017FB64
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8017FB68
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017FB6C
  goto L_8017FC60; // 8017FB70
L_8017FB74:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017FB74
  c->r[0]=(rotl(c->r[9],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 8017FB78
  c->r[0]=(rotl(c->r[10],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 8017FB7C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017FB80
  goto L_8017FC60; // 8017FB84
L_8017FB88:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017FB88
  c->r[0]=(rotl(c->r[9],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 8017FB8C
  c->r[0]=(rotl(c->r[10],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 8017FB90
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017FB94
  goto L_8017FC60; // 8017FB98
L_8017FB9C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8017FB9C
  c->r[0]=(rotl(c->r[9],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 8017FBA0
  c->r[0]=(rotl(c->r[10],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 8017FBA4
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 8017FBA8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 8017FBAC
  goto L_8017FC60; // 8017FBB0
L_8017FBB4:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FBB4
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 8017FBB8
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 8017FBBC
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 8017FBC0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FBC4
  goto L_8017FC60; // 8017FBC8
L_8017FBCC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FBCC
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 8017FBD0
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 8017FBD4
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 8017FBD8
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FBDC
  goto L_8017FC60; // 8017FBE0
L_8017FBE4:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FBE4
  c->r[0]=(rotl(c->r[9],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 8017FBE8
  c->r[0]=(rotl(c->r[10],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 8017FBEC
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 8017FBF0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FBF4
  goto L_8017FC60; // 8017FBF8
L_8017FBFC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8017FBFC
  c->r[0]=(rotl(c->r[9],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 8017FC00
  c->r[0]=(rotl(c->r[10],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 8017FC04
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 8017FC08
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FC0C
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 8017FC10
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FC14
  goto L_8017FC60; // 8017FC18
L_8017FC1C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FC1C
  c->r[0]=(rotl(c->r[9],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 8017FC20
  c->r[0]=(rotl(c->r[10],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 8017FC24
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 8017FC28
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FC2C
  goto L_8017FC60; // 8017FC30
L_8017FC34:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FC34
  c->r[0]=(rotl(c->r[9],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 8017FC38
  c->r[0]=(rotl(c->r[10],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 8017FC3C
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 8017FC40
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FC44
  goto L_8017FC60; // 8017FC48
L_8017FC4C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 8017FC4C
  c->r[0]=(rotl(c->r[9],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 8017FC50
  c->r[0]=(rotl(c->r[10],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 8017FC54
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 8017FC58
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 8017FC5C
L_8017FC60:;
  c->r[4]=c->r[4]+0x00000010u; // 8017FC60
L_8017FC64:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017FC64
  cmps(c,0,(int32_t)c->r[0],255); // 8017FC68
  if (!crb(c,2)) { IRQCHK(c); goto L_8017FAF0; } // 8017FC6C
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8017FC70
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8017FC74
  c->r[3]=0u+0x00000001u; // 8017FC78
  c->r[4]=R32(c->r[5]+0x000005FCu); // 8017FC7C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8017FC80
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8017FC84
  c->r[3]=c->r[4]|0x00000010u; // 8017FC88
  W32(c->r[5]+0x000005FCu,c->r[3]); // 8017FC8C
  c->r[3]=R8(c->r[5]+0x000005FBu); // 8017FC90
  c->r[0]=c->r[3]|c->r[0]; // 8017FC94
  W8(c->r[5]+0x000005FBu,c->r[0]); // 8017FC98
  return; // 8017FC9C
}

// fn_8017FCA0
void f_8017FCA0(Ctx* __restrict c) {
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 8017FCA0
  c->r[9]=0u+0x00000000u; // 8017FCA4
  c->r[6]=0u+0x00000008u; // 8017FCA8
  c->r[5]=0u+0xCC010000u; // 8017FCAC
  c->r[10]=R8(c->r[8]+0x000005FBu); // 8017FCB0
  c->r[7]=c->r[8]|c->r[8]; // 8017FCB4
L_8017FCB8:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[0]); // 8017FCB8
  if (crb(c,2)) { goto L_8017FCFC; } // 8017FCBC
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8017FCC0
  c->r[4]=c->r[9]|0x00000070u; // 8017FCC4
  c->r[3]=c->r[9]|0x00000080u; // 8017FCC8
  c->r[0]=c->r[9]|0x00000090u; // 8017FCCC
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8017FCD0
  c->r[4]=R32(c->r[7]+0x0000001Cu); // 8017FCD4
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8017FCD8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8017FCDC
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 8017FCE0
  c->r[3]=R32(c->r[7]+0x0000003Cu); // 8017FCE4
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 8017FCE8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8017FCEC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8017FCF0
  c->r[0]=R32(c->r[7]+0x0000005Cu); // 8017FCF4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8017FCF8
L_8017FCFC:;
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; cr0(c,c->r[10]); // 8017FCFC
  c->r[9]=c->r[9]+0x00000001u; // 8017FD00
  c->r[7]=c->r[7]+0x00000004u; // 8017FD04
  if (!crb(c,2)) { IRQCHK(c); goto L_8017FCB8; } // 8017FD08
  c->r[0]=0u+0x00000000u; // 8017FD0C
  c->r[3]=0u+0xCC010000u; // 8017FD10
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8017FD14
  W8(c->r[8]+0x000005FBu,c->r[0]); // 8017FD18
  return; // 8017FD1C
}

// fn_8017FD20
void f_8017FD20(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 8017FD20
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 8017FD24
  cmpu(c,0,c->r[0],0x00000010u); // 8017FD28
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8017FD2C
  c->r[3]=c->r[4]+c->r[3]; // 8017FD30
  if (crb(c,1)) { goto L_8017FF74; } // 8017FD34
  c->r[4]=0u+0x80330000u; // 8017FD38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017FD3C
  c->r[4]=c->r[4]+0xFFFFFB48u; // 8017FD40
  c->r[4]=R32(c->r[4]+c->r[0]); // 8017FD44
  c->ctr=c->r[4]; // 8017FD48
  if (true) { switch (c->ctr) { case 0x8017FD50u: goto L_8017FD50; case 0x8017FD78u: goto L_8017FD78; case 0x8017FDECu: goto L_8017FDEC; case 0x8017FE10u: goto L_8017FE10; case 0x8017FE34u: goto L_8017FE34; case 0x8017FE5Cu: goto L_8017FE5C; case 0x8017FE84u: goto L_8017FE84; case 0x8017FEACu: goto L_8017FEAC; case 0x8017FED4u: goto L_8017FED4; case 0x8017FEFCu: goto L_8017FEFC; case 0x8017FF24u: goto L_8017FF24; case 0x8017FF4Cu: goto L_8017FF4C; case 0x8017FF74u: goto L_8017FF74; default: break; } dispatch(c,c->ctr); return; } // 8017FD4C
L_8017FD50:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FD50
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8017FD54
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FD58
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FD5C
  c->r[0]=rotl(c->r[0],31)&0x00000007u; // 8017FD60
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FD64
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FD68
  c->r[0]=rotl(c->r[0],28)&0x0000001Fu; // 8017FD6C
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FD70
  return; // 8017FD74
L_8017FD78:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FD78
  c->r[0]=rotl(c->r[0],23)&0x00000001u; // 8017FD7C
  cmps(c,0,(int32_t)c->r[0],1); // 8017FD80
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FD84
  if (!crb(c,2)) { goto L_8017FDA0; } // 8017FD88
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FD8C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8017FD90
  if (crb(c,2)) { goto L_8017FDA0; } // 8017FD94
  c->r[0]=0u+0x00000002u; // 8017FD98
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FD9C
L_8017FDA0:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FDA0
  c->r[0]=rotl(c->r[0],22)&0x00000007u; // 8017FDA4
  cmps(c,0,(int32_t)c->r[0],2); // 8017FDA8
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FDAC
  if (crb(c,2)) { goto L_8017FDE0; } // 8017FDB0
  if (!crb(c,0)) { goto L_8017FDC4; } // 8017FDB4
  cmps(c,0,(int32_t)c->r[0],1); // 8017FDB8
  if (!crb(c,0)) { goto L_8017FDD0; } // 8017FDBC
  goto L_8017FDE0; // 8017FDC0
L_8017FDC4:;
  cmps(c,0,(int32_t)c->r[0],4); // 8017FDC4
  if (!crb(c,0)) { goto L_8017FDE0; } // 8017FDC8
  goto L_8017FDD8; // 8017FDCC
L_8017FDD0:;
  c->r[0]=0u+0x00000006u; // 8017FDD0
  goto L_8017FDE4; // 8017FDD4
L_8017FDD8:;
  c->r[0]=0u+0x0000000Eu; // 8017FDD8
  goto L_8017FDE4; // 8017FDDC
L_8017FDE0:;
  c->r[0]=0u+0x00000000u; // 8017FDE0
L_8017FDE4:;
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FDE4
  return; // 8017FDE8
L_8017FDEC:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8017FDEC
  c->r[0]=0u+0x00000000u; // 8017FDF0
  c->r[4]=rotl(c->r[4],19)&0x00000001u; // 8017FDF4
  W32(c->r[5]+0x00000000u,c->r[4]); // 8017FDF8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8017FDFC
  c->r[3]=rotl(c->r[3],18)&0x00000007u; // 8017FE00
  W32(c->r[6]+0x00000000u,c->r[3]); // 8017FE04
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FE08
  return; // 8017FE0C
L_8017FE10:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8017FE10
  c->r[0]=0u+0x00000000u; // 8017FE14
  c->r[4]=rotl(c->r[4],15)&0x00000001u; // 8017FE18
  W32(c->r[5]+0x00000000u,c->r[4]); // 8017FE1C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8017FE20
  c->r[3]=rotl(c->r[3],14)&0x00000007u; // 8017FE24
  W32(c->r[6]+0x00000000u,c->r[3]); // 8017FE28
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FE2C
  return; // 8017FE30
L_8017FE34:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FE34
  c->r[0]=rotl(c->r[0],11)&0x00000001u; // 8017FE38
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FE3C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FE40
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 8017FE44
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FE48
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017FE4C
  c->r[0]=rotl(c->r[0],7)&0x0000001Fu; // 8017FE50
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FE54
  return; // 8017FE58
L_8017FE5C:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FE5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8017FE60
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FE64
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FE68
  c->r[0]=rotl(c->r[0],31)&0x00000007u; // 8017FE6C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FE70
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FE74
  c->r[0]=rotl(c->r[0],28)&0x0000001Fu; // 8017FE78
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FE7C
  return; // 8017FE80
L_8017FE84:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FE84
  c->r[0]=rotl(c->r[0],23)&0x00000001u; // 8017FE88
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FE8C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FE90
  c->r[0]=rotl(c->r[0],22)&0x00000007u; // 8017FE94
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FE98
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FE9C
  c->r[0]=rotl(c->r[0],19)&0x0000001Fu; // 8017FEA0
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FEA4
  return; // 8017FEA8
L_8017FEAC:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FEAC
  c->r[0]=rotl(c->r[0],14)&0x00000001u; // 8017FEB0
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FEB4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FEB8
  c->r[0]=rotl(c->r[0],13)&0x00000007u; // 8017FEBC
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FEC0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FEC4
  c->r[0]=rotl(c->r[0],10)&0x0000001Fu; // 8017FEC8
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FECC
  return; // 8017FED0
L_8017FED4:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FED4
  c->r[0]=rotl(c->r[0],5)&0x00000001u; // 8017FED8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FEDC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8017FEE0
  c->r[0]=rotl(c->r[0],4)&0x00000007u; // 8017FEE4
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FEE8
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FEEC
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8017FEF0
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FEF4
  return; // 8017FEF8
L_8017FEFC:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FEFC
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8017FF00
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FF04
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF08
  c->r[0]=rotl(c->r[0],26)&0x00000007u; // 8017FF0C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FF10
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF14
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 8017FF18
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FF1C
  return; // 8017FF20
L_8017FF24:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF24
  c->r[0]=rotl(c->r[0],18)&0x00000001u; // 8017FF28
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FF2C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF30
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 8017FF34
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FF38
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF3C
  c->r[0]=rotl(c->r[0],14)&0x0000001Fu; // 8017FF40
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FF44
  return; // 8017FF48
L_8017FF4C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF4C
  c->r[0]=rotl(c->r[0],9)&0x00000001u; // 8017FF50
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017FF54
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF58
  c->r[0]=rotl(c->r[0],8)&0x00000007u; // 8017FF5C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FF60
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8017FF64
  c->r[0]=rotl(c->r[0],5)&0x0000001Fu; // 8017FF68
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FF6C
  return; // 8017FF70
L_8017FF74:;
  c->r[3]=0u+0x00000001u; // 8017FF74
  c->r[0]=0u+0x00000000u; // 8017FF78
  W32(c->r[5]+0x00000000u,c->r[3]); // 8017FF7C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017FF80
  W8(c->r[7]+0x00000000u,c->r[0]); // 8017FF84
  return; // 8017FF88
}

// fn_8017FF8C
void f_8017FF8C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],25); // 8017FF8C
  if (!crb(c,2)) { goto L_8017FF98; } // 8017FF90
  c->r[3]=0u+0x0000000Au; // 8017FF94
L_8017FF98:;
  c->r[6]=0u+0xCC010000u; // 8017FF98
  c->r[7]=0u+0x00000008u; // 8017FF9C
  c->r[8]=c->r[3]+0xFFFFFFF7u; // 8017FFA0
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 8017FFA4
  c->r[0]=c->r[8]|0x000000A0u; // 8017FFA8
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8017FFAC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8017FFB0
  c->r[0]=c->r[8]|0x000000B0u; // 8017FFB4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8017FFB8
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 8017FFBC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8017FFC0
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 8017FFC4
  return; // 8017FFC8
}

// fn_8017FFCC
void f_8017FFCC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000048u; // 8017FFCC
  c->r[3]=0u+0xCC010000u; // 8017FFD0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8017FFD4
  return; // 8017FFD8
}

// fn_8017FFDC
void f_8017FFDC(Ctx* __restrict c) {
  cmpu(c,0,c->r[5],0x00000014u); // 8017FFDC
  c->r[11]=0u+0x00000000u; // 8017FFE0
  c->r[12]=0u+0x00000000u; // 8017FFE4
  c->r[10]=0u+0x00000005u; // 8017FFE8
  if (crb(c,1)) { goto L_80180084; } // 8017FFEC
  c->r[9]=0u+0x80330000u; // 8017FFF0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8017FFF4
  c->r[9]=c->r[9]+0xFFFFFBA8u; // 8017FFF8
  c->r[9]=R32(c->r[9]+c->r[0]); // 8017FFFC
  c->ctr=c->r[9]; // 80180000
  if (true) { switch (c->ctr) { case 0x80180008u: goto L_80180008; case 0x80180014u: goto L_80180014; case 0x80180020u: goto L_80180020; case 0x8018002Cu: goto L_8018002C; case 0x80180038u: goto L_80180038; case 0x80180040u: goto L_80180040; case 0x80180048u: goto L_80180048; case 0x80180050u: goto L_80180050; case 0x80180058u: goto L_80180058; case 0x80180060u: goto L_80180060; case 0x80180068u: goto L_80180068; case 0x80180070u: goto L_80180070; case 0x80180078u: goto L_80180078; case 0x80180080u: goto L_80180080; case 0x80180084u: goto L_80180084; case 0x80180178u: goto L_80180178; case 0x80180188u: goto L_80180188; case 0x80180198u: goto L_80180198; case 0x801801A8u: goto L_801801A8; case 0x801801B8u: goto L_801801B8; case 0x801801C8u: goto L_801801C8; case 0x801801D8u: goto L_801801D8; default: break; } dispatch(c,c->ctr); return; } // 80180004
L_80180008:;
  c->r[10]=0u+0x00000000u; // 80180008
  c->r[12]=0u+0x00000001u; // 8018000C
  goto L_80180084; // 80180010
L_80180014:;
  c->r[10]=0u+0x00000001u; // 80180014
  c->r[12]=0u+0x00000001u; // 80180018
  goto L_80180084; // 8018001C
L_80180020:;
  c->r[10]=0u+0x00000003u; // 80180020
  c->r[12]=0u+0x00000001u; // 80180024
  goto L_80180084; // 80180028
L_8018002C:;
  c->r[10]=0u+0x00000004u; // 8018002C
  c->r[12]=0u+0x00000001u; // 80180030
  goto L_80180084; // 80180034
L_80180038:;
  c->r[10]=0u+0x00000002u; // 80180038
  goto L_80180084; // 8018003C
L_80180040:;
  c->r[10]=0u+0x00000002u; // 80180040
  goto L_80180084; // 80180044
L_80180048:;
  c->r[10]=0u+0x00000005u; // 80180048
  goto L_80180084; // 8018004C
L_80180050:;
  c->r[10]=0u+0x00000006u; // 80180050
  goto L_80180084; // 80180054
L_80180058:;
  c->r[10]=0u+0x00000007u; // 80180058
  goto L_80180084; // 8018005C
L_80180060:;
  c->r[10]=0u+0x00000008u; // 80180060
  goto L_80180084; // 80180064
L_80180068:;
  c->r[10]=0u+0x00000009u; // 80180068
  goto L_80180084; // 8018006C
L_80180070:;
  c->r[10]=0u+0x0000000Au; // 80180070
  goto L_80180084; // 80180074
L_80180078:;
  c->r[10]=0u+0x0000000Bu; // 80180078
  goto L_80180084; // 8018007C
L_80180080:;
  c->r[10]=0u+0x0000000Cu; // 80180080
L_80180084:;
  cmps(c,0,(int32_t)c->r[4],1); // 80180084
  if (crb(c,2)) { goto L_801800AC; } // 80180088
  if (!crb(c,0)) { goto L_8018009C; } // 8018008C
  cmps(c,0,(int32_t)c->r[4],0); // 80180090
  if (!crb(c,0)) { goto L_801800BC; } // 80180094
  goto L_80180124; // 80180098
L_8018009C:;
  cmps(c,0,(int32_t)c->r[4],10); // 8018009C
  if (crb(c,2)) { goto L_801800F8; } // 801800A0
  if (!crb(c,0)) { goto L_80180124; } // 801800A4
  goto L_801800D0; // 801800A8
L_801800AC:;
  c->r[11]=0u+0x00000000u; // 801800AC
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801800B0
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801800B4
  goto L_80180124; // 801800B8
L_801800BC:;
  c->r[0]=0u+0x00000000u; // 801800BC
  c->r[11]=c->r[0]|0x00000002u; // 801800C0
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801800C4
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801800C8
  goto L_80180124; // 801800CC
L_801800D0:;
  c->r[9]=0u+0x00000001u; // 801800D0
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 801800D4
  c->r[11]=0u+0x00000000u; // 801800D8
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801800DC
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801800E0
  c->r[11]=(rotl(c->r[9],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 801800E4
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801800E8
  c->r[11]=(rotl(c->r[5],12)&0x00007000u)|(c->r[11]&~0x00007000u); // 801800EC
  c->r[11]=(rotl(c->r[0],15)&0x00038000u)|(c->r[11]&~0x00038000u); // 801800F0
  goto L_80180124; // 801800F4
L_801800F8:;
  cmps(c,0,(int32_t)c->r[5],19); // 801800F8
  c->r[11]=0u+0x00000000u; // 801800FC
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 80180100
  if (!crb(c,2)) { goto L_80180114; } // 80180104
  c->r[0]=0u+0x00000002u; // 80180108
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 8018010C
  goto L_8018011C; // 80180110
L_80180114:;
  c->r[0]=0u+0x00000003u; // 80180114
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 80180118
L_8018011C:;
  c->r[0]=0u+0x00000002u; // 8018011C
  c->r[11]=(rotl(c->r[0],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 80180120
L_80180124:;
  c->r[10]=R32(c->r[2]+0xFFFF8DA0u); // 80180124
  c->r[9]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80180128
  c->r[0]=c->r[8]+0xFFFFFFC0u; // 8018012C
  c->r[4]=0u+0x00000000u; // 80180130
  c->r[8]=c->r[10]+c->r[9]; // 80180134
  c->r[5]=0u+0x00010000u; // 80180138
  W32(c->r[8]+0x000000C8u,c->r[11]); // 8018013C
  c->r[4]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[4]&~0x0000003Fu); // 80180140
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 80180144
  cmpu(c,0,c->r[3],0x00000006u); // 80180148
  c->r[5]=R32(c->r[10]+0x000005FCu); // 8018014C
  c->r[4]=(rotl(c->r[7],8)&0x00000100u)|(c->r[4]&~0x00000100u); // 80180150
  c->r[0]=c->r[5]|c->r[0]; // 80180154
  W32(c->r[10]+0x000005FCu,c->r[0]); // 80180158
  W32(c->r[8]+0x000000E8u,c->r[4]); // 8018015C
  if (crb(c,1)) { goto L_801801E8; } // 80180160
  c->r[3]=0u+0x80330000u; // 80180164
  c->r[3]=c->r[3]+0xFFFFFB8Cu; // 80180168
  c->r[3]=R32(c->r[3]+c->r[9]); // 8018016C
  c->ctr=c->r[3]; // 80180170
  if (true) { switch (c->ctr) { case 0x80180008u: goto L_80180008; case 0x80180014u: goto L_80180014; case 0x80180020u: goto L_80180020; case 0x8018002Cu: goto L_8018002C; case 0x80180038u: goto L_80180038; case 0x80180040u: goto L_80180040; case 0x80180048u: goto L_80180048; case 0x80180050u: goto L_80180050; case 0x80180058u: goto L_80180058; case 0x80180060u: goto L_80180060; case 0x80180068u: goto L_80180068; case 0x80180070u: goto L_80180070; case 0x80180078u: goto L_80180078; case 0x80180080u: goto L_80180080; case 0x80180084u: goto L_80180084; case 0x80180178u: goto L_80180178; case 0x80180188u: goto L_80180188; case 0x80180198u: goto L_80180198; case 0x801801A8u: goto L_801801A8; case 0x801801B8u: goto L_801801B8; case 0x801801C8u: goto L_801801C8; case 0x801801D8u: goto L_801801D8; default: break; } dispatch(c,c->ctr); return; } // 80180174
L_80180178:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 80180178
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 8018017C
  W32(c->r[10]+0x00000080u,c->r[0]); // 80180180
  goto L_801801F4; // 80180184
L_80180188:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 80180188
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 8018018C
  W32(c->r[10]+0x00000080u,c->r[0]); // 80180190
  goto L_801801F4; // 80180194
L_80180198:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 80180198
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 8018019C
  W32(c->r[10]+0x00000080u,c->r[0]); // 801801A0
  goto L_801801F4; // 801801A4
L_801801A8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801801A8
  c->r[0]=(rotl(c->r[6],24)&0x3F000000u)|(c->r[0]&~0x3F000000u); // 801801AC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801801B0
  goto L_801801F4; // 801801B4
L_801801B8:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801801B8
  c->r[0]=(rotl(c->r[6],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 801801BC
  W32(c->r[10]+0x00000084u,c->r[0]); // 801801C0
  goto L_801801F4; // 801801C4
L_801801C8:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801801C8
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 801801CC
  W32(c->r[10]+0x00000084u,c->r[0]); // 801801D0
  goto L_801801F4; // 801801D4
L_801801D8:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801801D8
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 801801DC
  W32(c->r[10]+0x00000084u,c->r[0]); // 801801E0
  goto L_801801F4; // 801801E4
L_801801E8:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801801E8
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 801801EC
  W32(c->r[10]+0x00000084u,c->r[0]); // 801801F0
L_801801F4:;
  c->r[0]=R32(c->r[10]+0x000005FCu); // 801801F4
  c->r[0]=c->r[0]|0x04000000u; // 801801F8
  W32(c->r[10]+0x000005FCu,c->r[0]); // 801801FC
  return; // 80180200
}

// fn_80180204
void f_80180204(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80180204
  c->r[0]=R32(c->r[4]+0x00000254u); // 80180208
  c->r[0]=(rotl(c->r[3],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 8018020C
  W32(c->r[4]+0x00000254u,c->r[0]); // 80180210
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80180214
  c->r[0]=c->r[0]|0x02000000u; // 80180218
  c->r[0]=c->r[0]|0x00000004u; // 8018021C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80180220
  return; // 80180224
}

// GXSetMisc
void f_80180228(Ctx* __restrict c) {
  trace_call(0x80180228u);
  cmps(c,0,(int32_t)c->r[3],2); // 80180228
  if (crb(c,2)) { goto L_80180284; } // 8018022C
  if (!crb(c,0)) { goto L_80180244; } // 80180230
  cmps(c,0,(int32_t)c->r[3],0); // 80180234
  if (crb(c,2)) return; // 80180238
  if (!crb(c,0)) { goto L_80180250; } // 8018023C
  return; // 80180240
L_80180244:;
  cmps(c,0,(int32_t)c->r[3],4); // 80180244
  if (!crb(c,0)) return; // 80180248
  goto L_8018029C; // 8018024C
L_80180250:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80180250
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80180254
  W16(c->r[5]+0x00000004u,c->r[4]); // 80180258
  c->r[3]=cntlz(c->r[0]); // 8018025C
  c->r[0]=0u+0x00000001u; // 80180260
  c->r[3]=rotl(c->r[3],27)&0x0000FFFFu; // 80180264
  W16(c->r[5]+0x00000000u,c->r[3]); // 80180268
  W16(c->r[5]+0x00000002u,c->r[0]); // 8018026C
  if (crb(c,2)) return; // 80180270
  c->r[0]=R32(c->r[5]+0x000005FCu); // 80180274
  c->r[0]=c->r[0]|0x00000008u; // 80180278
  W32(c->r[5]+0x000005FCu,c->r[0]); // 8018027C
  return; // 80180280
L_80180284:;
  c->r[0]=0u-c->r[4]; // 80180284
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80180288
  c->r[0]=c->r[0]|c->r[4]; // 8018028C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80180290
  W8(c->r[3]+0x000005F9u,c->r[0]); // 80180294
  return; // 80180298
L_8018029C:;
  c->r[0]=0u-c->r[4]; // 8018029C
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801802A0
  c->r[0]=c->r[0]|c->r[4]; // 801802A4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801802A8
  W8(c->r[3]+0x000005FAu,c->r[0]); // 801802AC
  return; // 801802B0
}

// fn_801802B4
void f_801802B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801802B4
  c->r[0]=c->lr; // 801802B8
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801802BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801802C0
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801802C4
  cmps(c,0,(int32_t)c->r[0],0); // 801802C8
  if (crb(c,2)) { goto L_801802D4; } // 801802CC
  c->lr=0x801802D4u; f_80180BA0(c); // 801802D0
L_801802D4:;
  c->r[0]=0u+0x00000000u; // 801802D4
  c->r[3]=0u+0xCC010000u; // 801802D8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802DC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802E0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802E4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802E8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802EC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802F0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802F4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801802F8
  c->lr=0x80180300u; f_8015980C(c); // 801802FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180300
  c->lr=c->r[0]; // 80180304
  c->r[1]=c->r[1]+0x00000010u; // 80180308
  return; // 8018030C
}

// fn_80180310
void f_80180310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180310
  c->r[0]=c->lr; // 80180314
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180318
  c->r[11]=c->r[1]+0x00000020u; // 8018031C
  c->lr=0x80180324u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80180320
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80180324
  c->r[0]=R8(c->r[3]+0x000005FAu); // 80180328
  cmps(c,0,(int32_t)c->r[0],0); // 8018032C
  if (crb(c,2)) { goto L_801803D0; } // 80180330
  c->lr=0x80180338u; f_8017F0A4(c); // 80180334
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80180338
  if (crb(c,2)) { goto L_801803D0; } // 8018033C
  c->r[5]=R32(c->r[13]+0xFFFFA02Cu); // 80180340
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 80180344
L_80180348:;
  c->r[3]=c->r[0]|c->r[0]; // 80180348
  c->r[4]=R16(c->r[5]+0x00000050u); // 8018034C
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 80180350
  cmpu(c,0,c->r[0],c->r[3]); // 80180354
  if (!crb(c,2)) { IRQCHK(c); goto L_80180348; } // 80180358
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 8018035C
  c->r[0]=0u+0x00000000u; // 80180360
  c->r[27]=c->r[3]|c->r[4]; // 80180364
  c->r[29]=0u+0x00000008u; // 80180368
  c->r[28]=c->r[0]^0x80000000u; // 8018036C
L_80180370:;
  c->lr=0x80180374u; f_80164DF4(c); // 80180370
  c->r[31]=c->r[4]|c->r[4]; // 80180374
  c->r[30]=c->r[3]|c->r[3]; // 80180378
L_8018037C:;
  c->lr=0x80180380u; f_80164DF4(c); // 8018037C
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 80180380
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 80180384
  c->r[3]=c->r[0]^0x80000000u; // 80180388
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 8018038C
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 80180390
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 80180394
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80180398
  if (crb(c,2)) { IRQCHK(c); goto L_8018037C; } // 8018039C
  c->r[5]=R32(c->r[13]+0xFFFFA02Cu); // 801803A0
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801803A4
L_801803A8:;
  c->r[3]=c->r[0]|c->r[0]; // 801803A8
  c->r[4]=R16(c->r[5]+0x00000050u); // 801803AC
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801803B0
  cmpu(c,0,c->r[0],c->r[3]); // 801803B4
  if (!crb(c,2)) { IRQCHK(c); goto L_801803A8; } // 801803B8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801803BC
  c->r[0]=c->r[0]|c->r[4]; // 801803C0
  cmpu(c,0,c->r[0],c->r[27]); // 801803C4
  c->r[27]=c->r[0]|c->r[0]; // 801803C8
  if (!crb(c,2)) { IRQCHK(c); goto L_80180370; } // 801803CC
L_801803D0:;
  c->r[0]=0u+0x00000001u; // 801803D0
  c->r[3]=0u+0xCC000000u; // 801803D4
  W32(c->r[3]+0x00003018u,c->r[0]); // 801803D8
  c->lr=0x801803E0u; f_80164DF4(c); // 801803DC
  c->r[0]=0u+0x00000000u; // 801803E0
  c->r[31]=c->r[4]|c->r[4]; // 801803E4
  c->r[30]=c->r[3]|c->r[3]; // 801803E8
  c->r[29]=0u+0x00000032u; // 801803EC
  c->r[28]=c->r[0]^0x80000000u; // 801803F0
L_801803F4:;
  c->lr=0x801803F8u; f_80164DF4(c); // 801803F4
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 801803F8
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 801803FC
  c->r[3]=c->r[0]^0x80000000u; // 80180400
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 80180404
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 80180408
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 8018040C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80180410
  if (crb(c,2)) { IRQCHK(c); goto L_801803F4; } // 80180414
  c->r[30]=0u+0x00000000u; // 80180418
  c->r[3]=0u+0xCC000000u; // 8018041C
  W32(c->r[3]+0x00003018u,c->r[30]); // 80180420
  c->lr=0x80180428u; f_80164DF4(c); // 80180424
  c->r[31]=c->r[30]^0x80000000u; // 80180428
  c->r[28]=c->r[4]|c->r[4]; // 8018042C
  c->r[29]=c->r[3]|c->r[3]; // 80180430
  c->r[30]=0u+0x00000005u; // 80180434
L_80180438:;
  c->lr=0x8018043Cu; f_80164DF4(c); // 80180438
  c->r[4]=addc(c,~c->r[28],c->r[4],1); // 8018043C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 80180440
  c->r[3]=c->r[0]^0x80000000u; // 80180444
  c->r[0]=addc(c,~c->r[4],c->r[30],1); // 80180448
  c->r[3]=addc(c,~c->r[3],c->r[31],c->xer_ca); // 8018044C
  c->r[3]=addc(c,~c->r[31],c->r[31],c->xer_ca); // 80180450
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80180454
  if (crb(c,2)) { IRQCHK(c); goto L_80180438; } // 80180458
  c->r[11]=c->r[1]+0x00000020u; // 8018045C
  c->lr=0x80180464u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80180460
  c->r[0]=R32(c->r[1]+0x00000024u); // 80180464
  c->lr=c->r[0]; // 80180468
  c->r[1]=c->r[1]+0x00000020u; // 8018046C
  return; // 80180470
}

// fn_80180474
void f_80180474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180474
  c->r[0]=c->lr; // 80180478
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018047C
  c->r[11]=c->r[1]+0x00000020u; // 80180480
  c->lr=0x80180488u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80180484
  c->r[31]=R32(c->r[2]+0xFFFF8DA0u); // 80180488
  c->r[0]=R8(c->r[31]+0x000005FAu); // 8018048C
  cmps(c,0,(int32_t)c->r[0],0); // 80180490
  if (crb(c,2)) { goto L_80180534; } // 80180494
  c->lr=0x8018049Cu; f_8017F0A4(c); // 80180498
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8018049C
  if (crb(c,2)) { goto L_80180534; } // 801804A0
  c->r[5]=R32(c->r[13]+0xFFFFA02Cu); // 801804A4
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 801804A8
L_801804AC:;
  c->r[0]=c->r[3]|c->r[3]; // 801804AC
  c->r[4]=R16(c->r[5]+0x00000050u); // 801804B0
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 801804B4
  cmpu(c,0,c->r[3],c->r[0]); // 801804B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801804AC; } // 801804BC
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801804C0
  c->r[0]=0u+0x00000000u; // 801804C4
  c->r[26]=c->r[3]|c->r[4]; // 801804C8
  c->r[28]=0u+0x00000008u; // 801804CC
  c->r[27]=c->r[0]^0x80000000u; // 801804D0
L_801804D4:;
  c->lr=0x801804D8u; f_80164DF4(c); // 801804D4
  c->r[30]=c->r[4]|c->r[4]; // 801804D8
  c->r[29]=c->r[3]|c->r[3]; // 801804DC
L_801804E0:;
  c->lr=0x801804E4u; f_80164DF4(c); // 801804E0
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 801804E4
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 801804E8
  c->r[3]=c->r[0]^0x80000000u; // 801804EC
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 801804F0
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 801804F4
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 801804F8
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801804FC
  if (crb(c,2)) { IRQCHK(c); goto L_801804E0; } // 80180500
  c->r[5]=R32(c->r[13]+0xFFFFA02Cu); // 80180504
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 80180508
L_8018050C:;
  c->r[0]=c->r[4]|c->r[4]; // 8018050C
  c->r[3]=R16(c->r[5]+0x00000050u); // 80180510
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 80180514
  cmpu(c,0,c->r[4],c->r[0]); // 80180518
  if (!crb(c,2)) { IRQCHK(c); goto L_8018050C; } // 8018051C
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 80180520
  c->r[0]=c->r[0]|c->r[3]; // 80180524
  cmpu(c,0,c->r[0],c->r[26]); // 80180528
  c->r[26]=c->r[0]|c->r[0]; // 8018052C
  if (!crb(c,2)) { IRQCHK(c); goto L_801804D4; } // 80180530
L_80180534:;
  c->r[0]=0u+0x00000001u; // 80180534
  c->r[3]=0u+0xCC000000u; // 80180538
  W32(c->r[3]+0x00003018u,c->r[0]); // 8018053C
  c->lr=0x80180544u; f_80164DF4(c); // 80180540
  c->r[0]=0u+0x00000000u; // 80180544
  c->r[30]=c->r[4]|c->r[4]; // 80180548
  c->r[29]=c->r[3]|c->r[3]; // 8018054C
  c->r[28]=0u+0x00000032u; // 80180550
  c->r[27]=c->r[0]^0x80000000u; // 80180554
L_80180558:;
  c->lr=0x8018055Cu; f_80164DF4(c); // 80180558
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 8018055C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 80180560
  c->r[3]=c->r[0]^0x80000000u; // 80180564
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 80180568
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 8018056C
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 80180570
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80180574
  if (crb(c,2)) { IRQCHK(c); goto L_80180558; } // 80180578
  c->r[29]=0u+0x00000000u; // 8018057C
  c->r[3]=0u+0xCC000000u; // 80180580
  W32(c->r[3]+0x00003018u,c->r[29]); // 80180584
  c->lr=0x8018058Cu; f_80164DF4(c); // 80180588
  c->r[30]=c->r[29]^0x80000000u; // 8018058C
  c->r[27]=c->r[4]|c->r[4]; // 80180590
  c->r[28]=c->r[3]|c->r[3]; // 80180594
  c->r[29]=0u+0x00000005u; // 80180598
L_8018059C:;
  c->lr=0x801805A0u; f_80164DF4(c); // 8018059C
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 801805A0
  c->r[0]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 801805A4
  c->r[3]=c->r[0]^0x80000000u; // 801805A8
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 801805AC
  c->r[3]=addc(c,~c->r[3],c->r[30],c->xer_ca); // 801805B0
  c->r[3]=addc(c,~c->r[30],c->r[30],c->xer_ca); // 801805B4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801805B8
  if (crb(c,2)) { IRQCHK(c); goto L_8018059C; } // 801805BC
  c->lr=0x801805C4u; f_8017F0A4(c); // 801805C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801805C4
  if (crb(c,2)) { goto L_80180610; } // 801805C8
  c->lr=0x801805D0u; f_8017F16C(c); // 801805CC
  c->lr=0x801805D4u; f_8017DA08(c); // 801805D0
  c->r[0]=0u+0x00000000u; // 801805D4
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801805D8
  goto L_801805E4; // 801805DC
  c->lr=0x801805E4u; f_80180BA0(c); // 801805E0
L_801805E4:;
  c->r[0]=0u+0x00000000u; // 801805E4
  c->r[3]=0u+0xCC010000u; // 801805E8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801805EC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801805F0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801805F4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801805F8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801805FC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180600
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180604
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180608
  c->lr=0x80180610u; f_8015980C(c); // 8018060C
L_80180610:;
  c->r[11]=c->r[1]+0x00000020u; // 80180610
  c->lr=0x80180618u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80180614
  c->r[0]=R32(c->r[1]+0x00000024u); // 80180618
  c->lr=c->r[0]; // 8018061C
  c->r[1]=c->r[1]+0x00000020u; // 80180620
  return; // 80180624
}

// fn_80180628
void f_80180628(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180628
  c->r[0]=c->lr; // 8018062C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180630
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80180634
  W32(c->r[1]+0x00000018u,c->r[30]); // 80180638
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018063C
  c->r[29]=c->r[3]|c->r[3]; // 80180640
  c->lr=0x80180648u; f_80160C68(c); // 80180644
  c->r[4]=0u+0xCC010000u; // 80180648
  c->r[5]=0u+0x00000061u; // 8018064C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80180650
  c->r[6]=c->r[29]|0x48000000u; // 80180654
  c->r[0]=0u+0x00000047u; // 80180658
  c->r[30]=R32(c->r[2]+0xFFFF8DA0u); // 8018065C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80180660
  c->r[6]=(rotl(c->r[29],0)&0x0000FFFFu)|(c->r[6]&~0x0000FFFFu); // 80180664
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80180668
  c->r[29]=c->r[3]|c->r[3]; // 8018066C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80180670
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80180674
  c->r[0]=R32(c->r[30]+0x000005FCu); // 80180678
  cmps(c,0,(int32_t)c->r[0],0); // 8018067C
  if (crb(c,2)) { goto L_80180688; } // 80180680
  c->lr=0x80180688u; f_80180BA0(c); // 80180684
L_80180688:;
  c->r[31]=0u+0x00000000u; // 80180688
  c->r[3]=0u+0xCC010000u; // 8018068C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180690
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180694
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180698
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8018069C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801806A0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801806A4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801806A8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801806AC
  c->lr=0x801806B4u; f_8015980C(c); // 801806B0
  c->r[3]=c->r[29]|c->r[29]; // 801806B4
  c->lr=0x801806BCu; f_80160C90(c); // 801806B8
  W16(c->r[30]+0x00000002u,c->r[31]); // 801806BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801806C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801806C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801806C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801806CC
  c->lr=c->r[0]; // 801806D0
  c->r[1]=c->r[1]+0x00000020u; // 801806D4
  return; // 801806D8
}

// fn_801806DC
void f_801806DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801806DC
  c->r[0]=c->lr; // 801806E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801806E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801806E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801806EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801806F0
  c->lr=0x801806F8u; f_80160C68(c); // 801806F4
  c->r[5]=0u+0xCC010000u; // 801806F8
  c->r[0]=0u+0x00000061u; // 801806FC
  c->r[4]=0u+0x45000000u; // 80180700
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80180704
  c->r[0]=c->r[4]+0x00000002u; // 80180708
  c->r[30]=R32(c->r[2]+0xFFFF8DA0u); // 8018070C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80180710
  c->r[29]=c->r[3]|c->r[3]; // 80180714
  c->r[0]=R32(c->r[30]+0x000005FCu); // 80180718
  cmps(c,0,(int32_t)c->r[0],0); // 8018071C
  if (crb(c,2)) { goto L_80180728; } // 80180720
  c->lr=0x80180728u; f_80180BA0(c); // 80180724
L_80180728:;
  c->r[31]=0u+0x00000000u; // 80180728
  c->r[3]=0u+0xCC010000u; // 8018072C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180730
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180734
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180738
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8018073C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180740
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180744
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180748
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8018074C
  c->lr=0x80180754u; f_8015980C(c); // 80180750
  W8(c->r[13]+0xFFFFA070u,c->r[31]); // 80180754
  c->r[3]=c->r[29]|c->r[29]; // 80180758
  c->lr=0x80180760u; f_80160C90(c); // 8018075C
  W16(c->r[30]+0x00000002u,c->r[31]); // 80180760
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80180764
  c->r[30]=R32(c->r[1]+0x00000018u); // 80180768
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018076C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80180770
  c->lr=c->r[0]; // 80180774
  c->r[1]=c->r[1]+0x00000020u; // 80180778
  return; // 8018077C
}

// fn_80180780
void f_80180780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180780
  c->r[0]=c->lr; // 80180784
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018078C
  c->lr=0x80180794u; f_80160C68(c); // 80180790
  c->r[31]=c->r[3]|c->r[3]; // 80180794
  goto L_801807A4; // 80180798
L_8018079C:;
  c->r[3]=c->r[13]+0xFFFFA068u; // 8018079C
  c->lr=0x801807A4u; f_80164A00(c); // 801807A0
L_801807A4:;
  c->r[0]=R8(c->r[13]+0xFFFFA070u); // 801807A4
  cmps(c,0,(int32_t)c->r[0],0); // 801807A8
  if (crb(c,2)) { IRQCHK(c); goto L_8018079C; } // 801807AC
  c->r[3]=c->r[31]|c->r[31]; // 801807B0
  c->lr=0x801807B8u; f_80160C90(c); // 801807B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801807B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801807BC
  c->lr=c->r[0]; // 801807C0
  c->r[1]=c->r[1]+0x00000010u; // 801807C4
  return; // 801807C8
}

// fn_801807CC
void f_801807CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801807CC
  c->r[0]=c->lr; // 801807D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801807D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801807D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801807DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801807E0
  c->lr=0x801807E8u; f_80160C68(c); // 801807E4
  c->r[5]=0u+0xCC010000u; // 801807E8
  c->r[0]=0u+0x00000061u; // 801807EC
  c->r[4]=0u+0x45000000u; // 801807F0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801807F4
  c->r[0]=c->r[4]+0x00000002u; // 801807F8
  c->r[29]=R32(c->r[2]+0xFFFF8DA0u); // 801807FC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80180800
  c->r[30]=c->r[3]|c->r[3]; // 80180804
  c->r[0]=R32(c->r[29]+0x000005FCu); // 80180808
  cmps(c,0,(int32_t)c->r[0],0); // 8018080C
  if (crb(c,2)) { goto L_80180818; } // 80180810
  c->lr=0x80180818u; f_80180BA0(c); // 80180814
L_80180818:;
  c->r[31]=0u+0x00000000u; // 80180818
  c->r[3]=0u+0xCC010000u; // 8018081C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180820
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180824
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180828
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8018082C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180830
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180834
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80180838
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8018083C
  c->lr=0x80180844u; f_8015980C(c); // 80180840
  W8(c->r[13]+0xFFFFA070u,c->r[31]); // 80180844
  c->r[3]=c->r[30]|c->r[30]; // 80180848
  c->lr=0x80180850u; f_80160C90(c); // 8018084C
  W16(c->r[29]+0x00000002u,c->r[31]); // 80180850
  c->lr=0x80180858u; f_80160C68(c); // 80180854
  c->r[30]=c->r[3]|c->r[3]; // 80180858
  goto L_80180868; // 8018085C
L_80180860:;
  c->r[3]=c->r[13]+0xFFFFA068u; // 80180860
  c->lr=0x80180868u; f_80164A00(c); // 80180864
L_80180868:;
  c->r[0]=R8(c->r[13]+0xFFFFA070u); // 80180868
  cmps(c,0,(int32_t)c->r[0],0); // 8018086C
  if (crb(c,2)) { IRQCHK(c); goto L_80180860; } // 80180870
  c->r[3]=c->r[30]|c->r[30]; // 80180874
  c->lr=0x8018087Cu; f_80160C90(c); // 80180878
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018087C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80180880
  c->r[30]=R32(c->r[1]+0x00000018u); // 80180884
  c->r[29]=R32(c->r[1]+0x00000014u); // 80180888
  c->lr=c->r[0]; // 8018088C
  c->r[1]=c->r[1]+0x00000020u; // 80180890
  return; // 80180894
}

// GXTexModeSync
void f_80180898(Ctx* __restrict c) {
  trace_call(0x80180898u);
  c->r[4]=0u+0xCC010000u; // 80180898
  c->r[0]=0u+0x00000061u; // 8018089C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801808A0
  c->r[0]=0u+0x00000000u; // 801808A4
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 801808A8
  c->r[3]=R32(c->r[5]+0x0000022Cu); // 801808AC
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801808B0
  W16(c->r[5]+0x00000002u,c->r[0]); // 801808B4
  return; // 801808B8
}

// GXPokeAlphaMode
void f_801808BC(Ctx* __restrict c) {
  trace_call(0x801808BCu);
  c->r[5]=R32(c->r[13]+0xFFFFA028u); // 801808BC
  c->r[4]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[4]&~0xFFFFFF00u); // 801808C0
  W16(c->r[5]+0x00000006u,c->r[4]); // 801808C4
  return; // 801808C8
}

// GXPokeAlphaRead
void f_801808CC(Ctx* __restrict c) {
  trace_call(0x801808CCu);
  c->r[0]=0u+0x00000000u; // 801808CC
  c->r[4]=R32(c->r[13]+0xFFFFA028u); // 801808D0
  c->r[0]=(rotl(c->r[3],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 801808D4
  c->r[0]=c->r[0]|0x00000004u; // 801808D8
  W16(c->r[4]+0x00000008u,c->r[0]); // 801808DC
  return; // 801808E0
}

// GXPokeAlphaUpdate
void f_801808E4(Ctx* __restrict c) {
  trace_call(0x801808E4u);
  c->r[4]=R32(c->r[13]+0xFFFFA028u); // 801808E4
  c->r[0]=R16(c->r[4]+0x00000002u); // 801808E8
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 801808EC
  W16(c->r[4]+0x00000002u,c->r[0]); // 801808F0
  return; // 801808F4
}

// GXPokeBlendMode
void f_801808F8(Ctx* __restrict c) {
  trace_call(0x801808F8u);
  c->r[7]=R32(c->r[13]+0xFFFFA028u); // 801808F8
  cmps(c,0,(int32_t)c->r[3],1); // 801808FC
  c->r[0]=0u+0x00000000u; // 80180900
  c->r[9]=R16(c->r[7]+0x00000002u); // 80180904
  if (crb(c,2)) { goto L_80180914; } // 80180908
  cmps(c,0,(int32_t)c->r[3],3); // 8018090C
  if (!crb(c,2)) { goto L_80180918; } // 80180910
L_80180914:;
  c->r[0]=0u+0x00000001u; // 80180914
L_80180918:;
  c->r[7]=c->r[3]+0xFFFFFFFDu; // 80180918
  c->r[9]=(rotl(c->r[0],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 8018091C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80180920
  c->r[3]=R32(c->r[13]+0xFFFFA028u); // 80180924
  c->r[8]=cntlz(c->r[7]); // 80180928
  c->r[7]=cntlz(c->r[0]); // 8018092C
  c->r[0]=0u+0x00000041u; // 80180930
  c->r[9]=(rotl(c->r[8],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 80180934
  c->r[9]=(rotl(c->r[7],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 80180938
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 8018093C
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 80180940
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 80180944
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 80180948
  W16(c->r[3]+0x00000002u,c->r[9]); // 8018094C
  return; // 80180950
}

// GXPokeColorUpdate
void f_80180954(Ctx* __restrict c) {
  trace_call(0x80180954u);
  c->r[4]=R32(c->r[13]+0xFFFFA028u); // 80180954
  c->r[0]=R16(c->r[4]+0x00000002u); // 80180958
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 8018095C
  W16(c->r[4]+0x00000002u,c->r[0]); // 80180960
  return; // 80180964
}

// GXPokeDstAlpha
void f_80180968(Ctx* __restrict c) {
  trace_call(0x80180968u);
  c->r[5]=R32(c->r[13]+0xFFFFA028u); // 80180968
  c->r[0]=0u+0x00000000u; // 8018096C
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80180970
  c->r[0]=(rotl(c->r[3],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 80180974
  W16(c->r[5]+0x00000004u,c->r[0]); // 80180978
  return; // 8018097C
}

// GXPokeDither
void f_80180980(Ctx* __restrict c) {
  trace_call(0x80180980u);
  c->r[4]=R32(c->r[13]+0xFFFFA028u); // 80180980
  c->r[0]=R16(c->r[4]+0x00000002u); // 80180984
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 80180988
  W16(c->r[4]+0x00000002u,c->r[0]); // 8018098C
  return; // 80180990
}

// GXPokeZMode
void f_80180994(Ctx* __restrict c) {
  trace_call(0x80180994u);
  c->r[6]=R32(c->r[13]+0xFFFFA028u); // 80180994
  c->r[0]=0u+0x00000000u; // 80180998
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 8018099C
  c->r[0]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801809A0
  c->r[0]=(rotl(c->r[5],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 801809A4
  W16(c->r[6]+0x00000000u,c->r[0]); // 801809A8
  return; // 801809AC
}

// GXSetDrawSyncCallback
void f_801809B0(Ctx* __restrict c) {
  trace_call(0x801809B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801809B0
  c->r[0]=c->lr; // 801809B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801809B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801809BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801809C0
  c->r[30]=c->r[3]|c->r[3]; // 801809C4
  c->r[31]=R32(c->r[13]+0xFFFFA078u); // 801809C8
  c->lr=0x801809D0u; f_80160C68(c); // 801809CC
  W32(c->r[13]+0xFFFFA078u,c->r[30]); // 801809D0
  c->lr=0x801809D8u; f_80160C90(c); // 801809D4
  c->r[3]=c->r[31]|c->r[31]; // 801809D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801809DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801809E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801809E4
  c->lr=c->r[0]; // 801809E8
  c->r[1]=c->r[1]+0x00000010u; // 801809EC
  return; // 801809F0
}

// GXTokenInterruptHandler
void f_801809F4(Ctx* __restrict c) {
  trace_call(0x801809F4u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801809F4
  c->r[0]=c->lr; // 801809F8
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801809FC
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80180A00
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80180A04
  c->r[30]=c->r[4]|c->r[4]; // 80180A08
  c->r[0]=R32(c->r[13]+0xFFFFA078u); // 80180A0C
  c->r[3]=R32(c->r[13]+0xFFFFA028u); // 80180A10
  cmps(c,0,(int32_t)c->r[0],0); // 80180A14
  c->r[31]=R16(c->r[3]+0x0000000Eu); // 80180A18
  if (crb(c,2)) { goto L_80180A50; } // 80180A1C
  c->r[3]=c->r[1]+0x00000008u; // 80180A20
  c->lr=0x80180A28u; f_8015CACC(c); // 80180A24
  c->r[3]=c->r[1]+0x00000008u; // 80180A28
  c->lr=0x80180A30u; f_8015C8A4(c); // 80180A2C
  c->r[12]=R32(c->r[13]+0xFFFFA078u); // 80180A30
  c->r[3]=c->r[31]|c->r[31]; // 80180A34
  c->ctr=c->r[12]; // 80180A38
  if (true) { c->lr=0x80180A40u; dispatch(c,c->ctr); } // 80180A3C
  c->r[3]=c->r[1]+0x00000008u; // 80180A40
  c->lr=0x80180A48u; f_8015CACC(c); // 80180A44
  c->r[3]=c->r[30]|c->r[30]; // 80180A48
  c->lr=0x80180A50u; f_8015C8A4(c); // 80180A4C
L_80180A50:;
  c->r[3]=R32(c->r[13]+0xFFFFA028u); // 80180A50
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80180A54
  c->r[0]=c->r[0]|0x00000004u; // 80180A58
  W16(c->r[3]+0x0000000Au,c->r[0]); // 80180A5C
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80180A60
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80180A64
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80180A68
  c->lr=c->r[0]; // 80180A6C
  c->r[1]=c->r[1]+0x000002E0u; // 80180A70
  return; // 80180A74
}

// GXSetDrawDoneCallback
void f_80180A78(Ctx* __restrict c) {
  trace_call(0x80180A78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180A78
  c->r[0]=c->lr; // 80180A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80180A84
  W32(c->r[1]+0x00000008u,c->r[30]); // 80180A88
  c->r[30]=c->r[3]|c->r[3]; // 80180A8C
  c->r[31]=R32(c->r[13]+0xFFFFA074u); // 80180A90
  c->lr=0x80180A98u; f_80160C68(c); // 80180A94
  W32(c->r[13]+0xFFFFA074u,c->r[30]); // 80180A98
  c->lr=0x80180AA0u; f_80160C90(c); // 80180A9C
  c->r[3]=c->r[31]|c->r[31]; // 80180AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180AA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80180AA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180AAC
  c->lr=c->r[0]; // 80180AB0
  c->r[1]=c->r[1]+0x00000010u; // 80180AB4
  return; // 80180AB8
}

// GXFinishInterruptHandler
void f_80180ABC(Ctx* __restrict c) {
  trace_call(0x80180ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180ABC
  c->r[0]=c->lr; // 80180AC0
  c->r[3]=0u+0x00000001u; // 80180AC4
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80180AC8
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80180ACC
  c->r[31]=c->r[4]|c->r[4]; // 80180AD0
  c->r[5]=R32(c->r[13]+0xFFFFA028u); // 80180AD4
  c->r[0]=R16(c->r[5]+0x0000000Au); // 80180AD8
  c->r[0]=c->r[0]|0x00000008u; // 80180ADC
  W16(c->r[5]+0x0000000Au,c->r[0]); // 80180AE0
  c->r[0]=R32(c->r[13]+0xFFFFA074u); // 80180AE4
  W8(c->r[13]+0xFFFFA070u,c->r[3]); // 80180AE8
  cmps(c,0,(int32_t)c->r[0],0); // 80180AEC
  if (crb(c,2)) { goto L_80180B20; } // 80180AF0
  c->r[3]=c->r[1]+0x00000008u; // 80180AF4
  c->lr=0x80180AFCu; f_8015CACC(c); // 80180AF8
  c->r[3]=c->r[1]+0x00000008u; // 80180AFC
  c->lr=0x80180B04u; f_8015C8A4(c); // 80180B00
  c->r[12]=R32(c->r[13]+0xFFFFA074u); // 80180B04
  c->ctr=c->r[12]; // 80180B08
  if (true) { c->lr=0x80180B10u; dispatch(c,c->ctr); } // 80180B0C
  c->r[3]=c->r[1]+0x00000008u; // 80180B10
  c->lr=0x80180B18u; f_8015CACC(c); // 80180B14
  c->r[3]=c->r[31]|c->r[31]; // 80180B18
  c->lr=0x80180B20u; f_8015C8A4(c); // 80180B1C
L_80180B20:;
  c->r[3]=c->r[13]+0xFFFFA068u; // 80180B20
  c->lr=0x80180B28u; f_80164AEC(c); // 80180B24
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80180B28
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80180B2C
  c->lr=c->r[0]; // 80180B30
  c->r[1]=c->r[1]+0x000002E0u; // 80180B34
  return; // 80180B38
}

// __GXPEInit
void f_80180B3C(Ctx* __restrict c) {
  trace_call(0x80180B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180B3C
  c->r[0]=c->lr; // 80180B40
  c->r[4]=0u+0x80180000u; // 80180B44
  c->r[3]=0u+0x00000012u; // 80180B48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180B4C
  c->r[4]=c->r[4]+0x000009F4u; // 80180B50
  c->lr=0x80180B58u; f_80160CB4(c); // 80180B54
  c->r[4]=0u+0x80180000u; // 80180B58
  c->r[3]=0u+0x00000013u; // 80180B5C
  c->r[4]=c->r[4]+0x00000ABCu; // 80180B60
  c->lr=0x80180B68u; f_80160CB4(c); // 80180B64
  c->r[3]=c->r[13]+0xFFFFA068u; // 80180B68
  c->lr=0x80180B70u; f_80163980(c); // 80180B6C
  c->r[3]=0u+0x00002000u; // 80180B70
  c->lr=0x80180B78u; f_80161078(c); // 80180B74
  c->r[3]=0u+0x00001000u; // 80180B78
  c->lr=0x80180B80u; f_80161078(c); // 80180B7C
  c->r[3]=R32(c->r[13]+0xFFFFA028u); // 80180B80
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80180B84
  c->r[0]=c->r[0]|0x0000000Fu; // 80180B88
  W16(c->r[3]+0x0000000Au,c->r[0]); // 80180B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180B90
  c->lr=c->r[0]; // 80180B94
  c->r[1]=c->r[1]+0x00000010u; // 80180B98
  return; // 80180B9C
}

// __GXSetDirtyState
void f_80180BA0(Ctx* __restrict c) {
  trace_call(0x80180BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180BA0
  c->r[0]=c->lr; // 80180BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80180BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80180BAC
  c->r[31]=R32(c->r[2]+0xFFFF8DA0u); // 80180BB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80180BB4
  c->r[30]=R32(c->r[31]+0x000005FCu); // 80180BB8
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80180BBC
  if (crb(c,2)) { goto L_80180BC8; } // 80180BC0
  c->lr=0x80180BC8u; f_80182F08(c); // 80180BC4
L_80180BC8:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 80180BC8
  if (crb(c,2)) { goto L_80180BD4; } // 80180BCC
  c->lr=0x80180BD4u; f_801837B8(c); // 80180BD0
L_80180BD4:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 80180BD4
  if (crb(c,2)) { goto L_80180BFC; } // 80180BD8
  c->r[4]=0u+0xCC010000u; // 80180BDC
  c->r[0]=0u+0x00000061u; // 80180BE0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80180BE4
  c->r[0]=0u+0x00000000u; // 80180BE8
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80180BEC
  c->r[3]=R32(c->r[5]+0x00000254u); // 80180BF0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80180BF4
  W16(c->r[5]+0x00000002u,c->r[0]); // 80180BF8
L_80180BFC:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 80180BFC
  if (crb(c,2)) { goto L_80180C08; } // 80180C00
  c->lr=0x80180C08u; f_8017F578(c); // 80180C04
L_80180C08:;
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 80180C08
  if (crb(c,2)) { goto L_80180C14; } // 80180C0C
  c->lr=0x80180C14u; f_8017FCA0(c); // 80180C10
L_80180C14:;
  c->r[0]=rotl(c->r[30],0)&0x00000018u; cr0(c,c->r[0]); // 80180C14
  if (crb(c,2)) { goto L_80180C20; } // 80180C18
  c->lr=0x80180C20u; f_8017F628(c); // 80180C1C
L_80180C20:;
  c->r[30]=rotl(c->r[30],0)&0xFFFFFF00u; cr0(c,c->r[30]); // 80180C20
  if (crb(c,2)) { goto L_80180DF8; } // 80180C24
  c->r[4]=rotl(c->r[30],0)&0x00000F00u; cr0(c,c->r[4]); // 80180C28
  if (crb(c,2)) { goto L_80180CC0; } // 80180C2C
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 80180C30
  if (crb(c,2)) { goto L_80180C54; } // 80180C34
  c->r[3]=0u+0xCC010000u; // 80180C38
  c->r[0]=0u+0x00000010u; // 80180C3C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C40
  c->r[0]=0u+0x0000100Au; // 80180C44
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C48
  c->r[0]=R32(c->r[31]+0x000000A8u); // 80180C4C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C50
L_80180C54:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 80180C54
  if (crb(c,2)) { goto L_80180C78; } // 80180C58
  c->r[3]=0u+0xCC010000u; // 80180C5C
  c->r[0]=0u+0x00000010u; // 80180C60
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C64
  c->r[0]=0u+0x0000100Bu; // 80180C68
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C6C
  c->r[0]=R32(c->r[31]+0x000000ACu); // 80180C70
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C74
L_80180C78:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80180C78
  if (crb(c,2)) { goto L_80180C9C; } // 80180C7C
  c->r[3]=0u+0xCC010000u; // 80180C80
  c->r[0]=0u+0x00000010u; // 80180C84
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C88
  c->r[0]=0u+0x0000100Cu; // 80180C8C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C90
  c->r[0]=R32(c->r[31]+0x000000B0u); // 80180C94
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180C98
L_80180C9C:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 80180C9C
  if (crb(c,2)) { goto L_80180CC0; } // 80180CA0
  c->r[3]=0u+0xCC010000u; // 80180CA4
  c->r[0]=0u+0x00000010u; // 80180CA8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80180CAC
  c->r[0]=0u+0x0000100Du; // 80180CB0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180CB4
  c->r[0]=R32(c->r[31]+0x000000B4u); // 80180CB8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180CBC
L_80180CC0:;
  c->r[7]=rotl(c->r[30],0)&0x01000000u; // 80180CC0
  c->r[7]=(rotl(c->r[30],0)&0x0000F000u)|(c->r[7]&~0x0000F000u); cr0(c,c->r[7]); // 80180CC4
  if (crb(c,2)) { goto L_80180D38; } // 80180CC8
  c->r[0]=rotl(c->r[7],0)&0x01000000u; cr0(c,c->r[0]); // 80180CCC
  c->r[6]=0u+0x0000100Eu; // 80180CD0
  if (crb(c,2)) { goto L_80180CF8; } // 80180CD4
  c->r[5]=R32(c->r[31]+0x00000254u); // 80180CD8
  c->r[3]=0u+0xCC010000u; // 80180CDC
  c->r[4]=0u+0x00000010u; // 80180CE0
  c->r[0]=0u+0x00001009u; // 80180CE4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80180CE8
  c->r[4]=rotl(c->r[5],28)&0x00000007u; // 80180CEC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180CF0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180CF4
L_80180CF8:;
  c->r[5]=c->r[31]|c->r[31]; // 80180CF8
  c->r[7]=rotl(c->r[7],20)&0x0000000Fu; // 80180CFC
  c->r[4]=0u+0x00000010u; // 80180D00
  c->r[3]=0u+0xCC010000u; // 80180D04
  goto L_80180D30; // 80180D08
L_80180D0C:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 80180D0C
  if (crb(c,2)) { goto L_80180D24; } // 80180D10
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80180D14
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80180D18
  c->r[0]=R32(c->r[5]+0x000000B8u); // 80180D1C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180D20
L_80180D24:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 80180D24
  c->r[5]=c->r[5]+0x00000004u; // 80180D28
  c->r[6]=c->r[6]+0x00000001u; // 80180D2C
L_80180D30:;
  cmps(c,0,(int32_t)c->r[7],0); // 80180D30
  if (!crb(c,2)) { IRQCHK(c); goto L_80180D0C; } // 80180D34
L_80180D38:;
  c->r[8]=c->r[30]&0x02FF0000u; cr0(c,c->r[8]); // 80180D38
  if (crb(c,2)) { goto L_80180DC0; } // 80180D3C
  c->r[0]=rotl(c->r[8],0)&0x02000000u; cr0(c,c->r[0]); // 80180D40
  c->r[6]=0u+0x00001040u; // 80180D44
  if (crb(c,2)) { goto L_80180D6C; } // 80180D48
  c->r[5]=R32(c->r[31]+0x00000254u); // 80180D4C
  c->r[3]=0u+0xCC010000u; // 80180D50
  c->r[4]=0u+0x00000010u; // 80180D54
  c->r[0]=0u+0x0000103Fu; // 80180D58
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80180D5C
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 80180D60
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180D64
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180D68
L_80180D6C:;
  c->r[7]=c->r[31]|c->r[31]; // 80180D6C
  c->r[8]=rotl(c->r[8],16)&0x000000FFu; // 80180D70
  c->r[4]=0u+0x00000010u; // 80180D74
  c->r[3]=0u+0xCC010000u; // 80180D78
  goto L_80180DB8; // 80180D7C
L_80180D80:;
  c->r[0]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[0]); // 80180D80
  c->r[5]=c->r[6]+0x00000010u; // 80180D84
  if (crb(c,2)) { goto L_80180DAC; } // 80180D88
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80180D8C
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80180D90
  c->r[0]=R32(c->r[7]+0x000000C8u); // 80180D94
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180D98
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80180D9C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80180DA0
  c->r[0]=R32(c->r[7]+0x000000E8u); // 80180DA4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80180DA8
L_80180DAC:;
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 80180DAC
  c->r[6]=c->r[6]+0x00000001u; // 80180DB0
  c->r[7]=c->r[7]+0x00000004u; // 80180DB4
L_80180DB8:;
  cmps(c,0,(int32_t)c->r[8],0); // 80180DB8
  if (!crb(c,2)) { IRQCHK(c); goto L_80180D80; } // 80180DBC
L_80180DC0:;
  c->r[0]=rotl(c->r[30],0)&0x04000000u; cr0(c,c->r[0]); // 80180DC0
  if (crb(c,2)) { goto L_80180DD8; } // 80180DC4
  c->r[3]=0u+0x00000000u; // 80180DC8
  c->lr=0x80180DD0u; f_80184CC4(c); // 80180DCC
  c->r[3]=0u+0x00000005u; // 80180DD0
  c->lr=0x80180DD8u; f_80184CC4(c); // 80180DD4
L_80180DD8:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 80180DD8
  if (crb(c,2)) { goto L_80180DE4; } // 80180DDC
  c->lr=0x80180DE4u; f_80184B00(c); // 80180DE0
L_80180DE4:;
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 80180DE4
  if (crb(c,2)) { goto L_80180DF0; } // 80180DE8
  c->lr=0x80180DF0u; f_801847F0(c); // 80180DEC
L_80180DF0:;
  c->r[0]=0u+0x00000001u; // 80180DF0
  W16(c->r[31]+0x00000002u,c->r[0]); // 80180DF4
L_80180DF8:;
  c->r[0]=0u+0x00000000u; // 80180DF8
  W32(c->r[31]+0x000005FCu,c->r[0]); // 80180DFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80180E00
  c->r[30]=R32(c->r[1]+0x00000008u); // 80180E04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80180E08
  c->lr=c->r[0]; // 80180E0C
  c->r[1]=c->r[1]+0x00000010u; // 80180E10
  return; // 80180E14
}

// GXBegin
void f_80180E18(Ctx* __restrict c) {
  trace_call(0x80180E18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80180E18
  c->r[0]=c->lr; // 80180E1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80180E20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80180E24
  c->r[31]=R32(c->r[2]+0xFFFF8DA0u); // 80180E28
  W32(c->r[1]+0x00000018u,c->r[30]); // 80180E2C
  c->r[30]=c->r[5]|c->r[5]; // 80180E30
  W32(c->r[1]+0x00000014u,c->r[29]); // 80180E34
  c->r[29]=c->r[4]|c->r[4]; // 80180E38
  W32(c->r[1]+0x00000010u,c->r[28]); // 80180E3C
  c->r[28]=c->r[3]|c->r[3]; // 80180E40
  c->r[0]=R32(c->r[31]+0x000005FCu); // 80180E44
  cmps(c,0,(int32_t)c->r[0],0); // 80180E48
  if (crb(c,2)) { goto L_80180E54; } // 80180E4C
  c->lr=0x80180E54u; f_80180BA0(c); // 80180E50
L_80180E54:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80180E54
  cmps(c,0,(int32_t)c->r[0],0); // 80180E58
  if (!crb(c,2)) { goto L_80180F34; } // 80180E5C
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 80180E60
  c->r[3]=0u+0xCC010000u; // 80180E64
  c->r[0]=0u+0x00000098u; // 80180E68
  c->r[6]=0u+0x00000000u; // 80180E6C
  c->r[5]=R16(c->r[7]+0x00000004u); // 80180E70
  c->r[4]=R16(c->r[7]+0x00000006u); // 80180E74
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80180E78
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[5]); // 80180E7C
  c->r[0]=R16(c->r[7]+0x00000004u); // 80180E80
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80180E84
  if (crb(c,2)) { goto L_80180F2C; } // 80180E88
  c->r[3]=c->r[5]+0x00000003u; // 80180E8C
  c->r[7]=c->r[5]+0xFFFFFFE0u; // 80180E90
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 80180E94
  cmpu(c,0,c->r[0],0x00000008u); // 80180E98
  if (!crb(c,1)) { goto L_80180F04; } // 80180E9C
  cmpu(c,0,c->r[3],0x00000003u); // 80180EA0
  c->r[0]=0u+0x00000000u; // 80180EA4
  if (crb(c,0)) { goto L_80180EB8; } // 80180EA8
  cmpu(c,0,c->r[5],c->r[3]); // 80180EAC
  if (crb(c,1)) { goto L_80180EB8; } // 80180EB0
  c->r[0]=0u+0x00000001u; // 80180EB4
L_80180EB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180EB8
  if (crb(c,2)) { goto L_80180F04; } // 80180EBC
  c->r[0]=c->r[7]+0x0000001Fu; // 80180EC0
  c->r[4]=0u+0x00000000u; // 80180EC4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80180EC8
  c->r[3]=0u+0xCC010000u; // 80180ECC
  c->ctr=c->r[0]; // 80180ED0
  cmpu(c,0,c->r[7],0x00000000u); // 80180ED4
  if (!crb(c,1)) { goto L_80180F04; } // 80180ED8
L_80180EDC:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EDC
  c->r[6]=c->r[6]+0x00000020u; // 80180EE0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EE4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EE8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EEC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EF0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EF4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EF8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180EFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80180EDC; } // 80180F00
L_80180F04:;
  c->r[0]=c->r[5]+0x00000003u; // 80180F04
  c->r[4]=0u+0x00000000u; // 80180F08
  c->r[0]=c->r[0]-c->r[6]; // 80180F0C
  c->r[3]=0u+0xCC010000u; // 80180F10
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80180F14
  c->ctr=c->r[0]; // 80180F18
  cmpu(c,0,c->r[6],c->r[5]); // 80180F1C
  if (!crb(c,0)) { goto L_80180F2C; } // 80180F20
L_80180F24:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180F24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80180F24; } // 80180F28
L_80180F2C:;
  c->r[0]=0u+0x00000001u; // 80180F2C
  W16(c->r[31]+0x00000002u,c->r[0]); // 80180F30
L_80180F34:;
  c->r[3]=0u+0xCC010000u; // 80180F34
  c->r[0]=c->r[29]|c->r[28]; // 80180F38
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80180F3C
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 80180F40
  c->r[0]=R32(c->r[1]+0x00000024u); // 80180F44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80180F48
  c->r[30]=R32(c->r[1]+0x00000018u); // 80180F4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80180F50
  c->r[28]=R32(c->r[1]+0x00000010u); // 80180F54
  c->lr=c->r[0]; // 80180F58
  c->r[1]=c->r[1]+0x00000020u; // 80180F5C
  return; // 80180F60
}

// __GXSendFlushPrim
void f_80180F64(Ctx* __restrict c) {
  trace_call(0x80180F64u);
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 80180F64
  c->r[3]=0u+0xCC010000u; // 80180F68
  c->r[0]=0u+0x00000098u; // 80180F6C
  c->r[7]=0u+0x00000000u; // 80180F70
  c->r[5]=R16(c->r[6]+0x00000004u); // 80180F74
  c->r[4]=R16(c->r[6]+0x00000006u); // 80180F78
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80180F7C
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[8]); // 80180F80
  c->r[0]=R16(c->r[6]+0x00000004u); // 80180F84
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80180F88
  if (crb(c,2)) { goto L_80181030; } // 80180F8C
  c->r[3]=c->r[8]+0x00000003u; // 80180F90
  c->r[5]=c->r[8]+0xFFFFFFE0u; // 80180F94
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 80180F98
  cmpu(c,0,c->r[0],0x00000008u); // 80180F9C
  if (!crb(c,1)) { goto L_80181008; } // 80180FA0
  cmpu(c,0,c->r[3],0x00000003u); // 80180FA4
  c->r[0]=0u+0x00000000u; // 80180FA8
  if (crb(c,0)) { goto L_80180FBC; } // 80180FAC
  cmpu(c,0,c->r[8],c->r[3]); // 80180FB0
  if (crb(c,1)) { goto L_80180FBC; } // 80180FB4
  c->r[0]=0u+0x00000001u; // 80180FB8
L_80180FBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80180FBC
  if (crb(c,2)) { goto L_80181008; } // 80180FC0
  c->r[0]=c->r[5]+0x0000001Fu; // 80180FC4
  c->r[4]=0u+0x00000000u; // 80180FC8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80180FCC
  c->r[3]=0u+0xCC010000u; // 80180FD0
  c->ctr=c->r[0]; // 80180FD4
  cmpu(c,0,c->r[5],0x00000000u); // 80180FD8
  if (!crb(c,1)) { goto L_80181008; } // 80180FDC
L_80180FE0:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180FE0
  c->r[7]=c->r[7]+0x00000020u; // 80180FE4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180FE8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180FEC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180FF0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180FF4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180FF8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80180FFC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80181000
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80180FE0; } // 80181004
L_80181008:;
  c->r[0]=c->r[8]+0x00000003u; // 80181008
  c->r[4]=0u+0x00000000u; // 8018100C
  c->r[0]=c->r[0]-c->r[7]; // 80181010
  c->r[3]=0u+0xCC010000u; // 80181014
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80181018
  c->ctr=c->r[0]; // 8018101C
  cmpu(c,0,c->r[7],c->r[8]); // 80181020
  if (!crb(c,0)) { goto L_80181030; } // 80181024
L_80181028:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80181028
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80181028; } // 8018102C
L_80181030:;
  c->r[0]=0u+0x00000001u; // 80181030
  W16(c->r[6]+0x00000002u,c->r[0]); // 80181034
  return; // 80181038
}

// GXSetLineWidth
void f_8018103C(Ctx* __restrict c) {
  trace_call(0x8018103Cu);
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 8018103C
  c->r[5]=0u+0xCC010000u; // 80181040
  c->r[6]=0u+0x00000061u; // 80181044
  c->r[0]=0u+0x00000000u; // 80181048
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 8018104C
  c->r[7]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 80181050
  c->r[7]=(rotl(c->r[4],16)&0x00070000u)|(c->r[7]&~0x00070000u); // 80181054
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 80181058
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8018105C
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 80181060
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80181064
  W16(c->r[8]+0x00000002u,c->r[0]); // 80181068
  return; // 8018106C
}

// GXSetPointSize
void f_80181070(Ctx* __restrict c) {
  trace_call(0x80181070u);
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 80181070
  c->r[5]=0u+0xCC010000u; // 80181074
  c->r[6]=0u+0x00000061u; // 80181078
  c->r[0]=0u+0x00000000u; // 8018107C
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 80181080
  c->r[7]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80181084
  c->r[7]=(rotl(c->r[4],19)&0x00380000u)|(c->r[7]&~0x00380000u); // 80181088
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 8018108C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80181090
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 80181094
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80181098
  W16(c->r[8]+0x00000002u,c->r[0]); // 8018109C
  return; // 801810A0
}

// GXEnableTexOffsets
void f_801810A4(Ctx* __restrict c) {
  trace_call(0x801810A4u);
  c->r[9]=R32(c->r[2]+0xFFFF8DA0u); // 801810A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801810A8
  c->r[6]=0u+0xCC010000u; // 801810AC
  c->r[3]=0u+0x00000061u; // 801810B0
  c->r[8]=c->r[9]+c->r[0]; // 801810B4
  c->r[0]=0u+0x00000000u; // 801810B8
  c->r[7]=R32(c->r[8]+0x00000108u); // 801810BC
  c->r[7]=(rotl(c->r[4],18)&0x00040000u)|(c->r[7]&~0x00040000u); // 801810C0
  c->r[7]=(rotl(c->r[5],19)&0x00080000u)|(c->r[7]&~0x00080000u); // 801810C4
  W32(c->r[8]+0x00000108u,c->r[7]); // 801810C8
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 801810CC
  c->r[3]=R32(c->r[8]+0x00000108u); // 801810D0
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801810D4
  W16(c->r[9]+0x00000002u,c->r[0]); // 801810D8
  return; // 801810DC
}

// GXSetCullMode
void f_801810E0(Ctx* __restrict c) {
  trace_call(0x801810E0u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 801810E0
  c->r[5]=rotl(c->r[3],31)&0x00000001u; // 801810E4
  c->r[5]=(rotl(c->r[3],1)&0x00000002u)|(c->r[5]&~0x00000002u); // 801810E8
  c->r[0]=R32(c->r[4]+0x00000254u); // 801810EC
  c->r[0]=(rotl(c->r[5],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 801810F0
  W32(c->r[4]+0x00000254u,c->r[0]); // 801810F4
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801810F8
  c->r[0]=c->r[0]|0x00000004u; // 801810FC
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80181100
  return; // 80181104
}

// fn_80181108
void f_80181108(Ctx* __restrict c) {
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 80181108
  c->r[5]=0u+0xCC010000u; // 8018110C
  c->r[6]=0u+0x00000061u; // 80181110
  c->r[4]=0u+0xFE080000u; // 80181114
  c->r[7]=R32(c->r[8]+0x00000254u); // 80181118
  c->r[7]=(rotl(c->r[3],19)&0x00080000u)|(c->r[7]&~0x00080000u); // 8018111C
  c->r[0]=0u+0x00000000u; // 80181120
  W32(c->r[8]+0x00000254u,c->r[7]); // 80181124
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80181128
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8018112C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80181130
  c->r[3]=R32(c->r[8]+0x00000254u); // 80181134
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80181138
  W16(c->r[8]+0x00000002u,c->r[0]); // 8018113C
  return; // 80181140
}

// __GXSetGenMode
void f_80181144(Ctx* __restrict c) {
  trace_call(0x80181144u);
  c->r[4]=0u+0xCC010000u; // 80181144
  c->r[0]=0u+0x00000061u; // 80181148
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8018114C
  c->r[0]=0u+0x00000000u; // 80181150
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80181154
  c->r[3]=R32(c->r[5]+0x00000254u); // 80181158
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8018115C
  W16(c->r[5]+0x00000002u,c->r[0]); // 80181160
  return; // 80181164
}

// fn_80181168
void f_80181168(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],c->r[4]); // 80181168
  c->r[0]=rotl(c->r[5],1)&0x0000FFFEu; // 8018116C
  c->r[7]=rotl(c->r[6],1)&0x0000FFFEu; // 80181170
  if (crb(c,2)) { goto L_801811F0; } // 80181174
  c->r[9]=R32(c->r[3]+0x00000000u); // 80181178
  c->r[8]=R32(c->r[3]+0x00000004u); // 8018117C
  W32(c->r[4]+0x00000000u,c->r[9]); // 80181180
  W32(c->r[4]+0x00000004u,c->r[8]); // 80181184
  c->r[9]=R32(c->r[3]+0x00000008u); // 80181188
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 8018118C
  W32(c->r[4]+0x00000008u,c->r[9]); // 80181190
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 80181194
  c->r[9]=R32(c->r[3]+0x00000010u); // 80181198
  c->r[8]=R32(c->r[3]+0x00000014u); // 8018119C
  W32(c->r[4]+0x00000010u,c->r[9]); // 801811A0
  W32(c->r[4]+0x00000014u,c->r[8]); // 801811A4
  c->r[9]=R32(c->r[3]+0x00000018u); // 801811A8
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 801811AC
  W32(c->r[4]+0x00000018u,c->r[9]); // 801811B0
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 801811B4
  c->r[9]=R32(c->r[3]+0x00000020u); // 801811B8
  c->r[8]=R32(c->r[3]+0x00000024u); // 801811BC
  W32(c->r[4]+0x00000020u,c->r[9]); // 801811C0
  W32(c->r[4]+0x00000024u,c->r[8]); // 801811C4
  c->r[9]=R32(c->r[3]+0x00000028u); // 801811C8
  c->r[8]=R32(c->r[3]+0x0000002Cu); // 801811CC
  W32(c->r[4]+0x00000028u,c->r[9]); // 801811D0
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 801811D4
  c->r[9]=R32(c->r[3]+0x00000030u); // 801811D8
  c->r[8]=R32(c->r[3]+0x00000034u); // 801811DC
  W32(c->r[4]+0x00000030u,c->r[9]); // 801811E0
  W32(c->r[4]+0x00000034u,c->r[8]); // 801811E4
  c->r[8]=R32(c->r[3]+0x00000038u); // 801811E8
  W32(c->r[4]+0x00000038u,c->r[8]); // 801811EC
L_801811F0:;
  c->r[8]=R16(c->r[3]+0x00000004u); // 801811F0
  c->r[9]=R32(c->r[3]+0x00000000u); // 801811F4
  c->r[8]=c->r[8]-c->r[0]; // 801811F8
  W16(c->r[4]+0x00000004u,c->r[8]); // 801811FC
  c->r[11]=rotl(c->r[9],0)&0x00000003u; // 80181200
  c->r[10]=R16(c->r[3]+0x00000006u); // 80181204
  c->r[8]=R16(c->r[3]+0x00000008u); // 80181208
  c->r[9]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[10]); // 8018120C
  c->r[8]=divwu(c->r[9],c->r[8]); // 80181210
  c->r[8]=c->r[10]-c->r[8]; // 80181214
  W16(c->r[4]+0x00000006u,c->r[8]); // 80181218
  c->r[8]=R32(c->r[3]+0x00000014u); // 8018121C
  cmps(c,0,(int32_t)c->r[8],0); // 80181220
  if (!crb(c,2)) { goto L_80181244; } // 80181224
  cmps(c,0,(int32_t)c->r[11],0); // 80181228
  if (!crb(c,2)) { goto L_80181244; } // 8018122C
  c->r[8]=R16(c->r[3]+0x00000008u); // 80181230
  c->r[9]=rotl(c->r[7],31)&0x00007FFFu; // 80181234
  c->r[8]=c->r[8]-c->r[9]; // 80181238
  W16(c->r[4]+0x00000008u,c->r[8]); // 8018123C
  goto L_80181250; // 80181240
L_80181244:;
  c->r[8]=R16(c->r[3]+0x00000008u); // 80181244
  c->r[8]=c->r[8]-c->r[7]; // 80181248
  W16(c->r[4]+0x00000008u,c->r[8]); // 8018124C
L_80181250:;
  c->r[8]=R16(c->r[3]+0x0000000Eu); // 80181250
  cmpu(c,0,c->r[11],0x00000001u); // 80181254
  c->r[0]=c->r[8]-c->r[0]; // 80181258
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 8018125C
  if (!crb(c,2)) { goto L_80181278; } // 80181260
  c->r[0]=R16(c->r[3]+0x00000010u); // 80181264
  c->r[7]=rotl(c->r[7],1)&0x0001FFFEu; // 80181268
  c->r[0]=c->r[0]-c->r[7]; // 8018126C
  W16(c->r[4]+0x00000010u,c->r[0]); // 80181270
  goto L_80181284; // 80181274
L_80181278:;
  c->r[0]=R16(c->r[3]+0x00000010u); // 80181278
  c->r[0]=c->r[0]-c->r[7]; // 8018127C
  W16(c->r[4]+0x00000010u,c->r[0]); // 80181280
L_80181284:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80181284
  c->r[0]=c->r[0]+c->r[5]; // 80181288
  W16(c->r[4]+0x0000000Au,c->r[0]); // 8018128C
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 80181290
  c->r[0]=c->r[0]+c->r[6]; // 80181294
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 80181298
  return; // 8018129C
}

// GXSetDispCopySrc
void f_801812A0(Ctx* __restrict c) {
  trace_call(0x801812A0u);
  c->r[7]=0u+0x00000000u; // 801812A0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801812A4
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 801812A8
  c->r[3]=0u+0x00000000u; // 801812AC
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 801812B0
  c->r[4]=0u+0x00000049u; // 801812B4
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801812B8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801812BC
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 801812C0
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 801812C4
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801812C8
  c->r[0]=0u+0x0000004Au; // 801812CC
  W32(c->r[5]+0x00000230u,c->r[7]); // 801812D0
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801812D4
  W32(c->r[5]+0x00000234u,c->r[3]); // 801812D8
  return; // 801812DC
}

// fn_801812E0
void f_801812E0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 801812E0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801812E4
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 801812E8
  c->r[3]=0u+0x00000000u; // 801812EC
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 801812F0
  c->r[4]=0u+0x00000049u; // 801812F4
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801812F8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801812FC
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 80181300
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80181304
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80181308
  c->r[0]=0u+0x0000004Au; // 8018130C
  W32(c->r[5]+0x00000240u,c->r[7]); // 80181310
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80181314
  W32(c->r[5]+0x00000244u,c->r[3]); // 80181318
  return; // 8018131C
}

// GXSetDispCopyDst
void f_80181320(Ctx* __restrict c) {
  trace_call(0x80181320u);
  c->r[0]=rotl(c->r[3],1)&0x0000FFFEu; // 80181320
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80181324
  c->r[0]=sraw(c,c->r[0],5); // 80181328
  c->r[3]=0u+0x00000000u; // 8018132C
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 80181330
  c->r[0]=0u+0x0000004Du; // 80181334
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80181338
  W32(c->r[4]+0x00000238u,c->r[3]); // 8018133C
  return; // 80181340
}

// GXSetTexCopyDst
void f_80181344(Ctx* __restrict c) {
  trace_call(0x80181344u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181344
  c->r[0]=c->lr; // 80181348
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 8018134C
  cmps(c,0,(int32_t)c->r[5],19); // 80181350
  W32(c->r[1]+0x00000034u,c->r[0]); // 80181354
  c->r[0]=0u+0x00000000u; // 80181358
  c->r[9]=c->r[3]|c->r[3]; // 8018135C
  c->r[8]=c->r[4]|c->r[4]; // 80181360
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80181364
  c->r[31]=rotl(c->r[5],0)&0x0000000Fu; // 80181368
  W32(c->r[1]+0x00000028u,c->r[30]); // 8018136C
  c->r[30]=c->r[6]|c->r[6]; // 80181370
  W32(c->r[1]+0x00000024u,c->r[29]); // 80181374
  W32(c->r[1]+0x00000020u,c->r[28]); // 80181378
  W8(c->r[7]+0x00000250u,c->r[0]); // 8018137C
  if (!crb(c,2)) { goto L_80181388; } // 80181380
  c->r[31]=0u+0x0000000Bu; // 80181384
L_80181388:;
  cmps(c,0,(int32_t)c->r[5],38); // 80181388
  if (crb(c,2)) { goto L_801813A8; } // 8018138C
  if (!crb(c,0)) { goto L_801813C0; } // 80181390
  cmps(c,0,(int32_t)c->r[5],4); // 80181394
  if (!crb(c,0)) { goto L_801813C0; } // 80181398
  cmps(c,0,(int32_t)c->r[5],0); // 8018139C
  if (!crb(c,0)) { goto L_801813A8; } // 801813A0
  goto L_801813C0; // 801813A4
L_801813A8:;
  c->r[0]=0u+0x00000003u; // 801813A8
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 801813AC
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 801813B0
  c->r[29]=c->r[7]+0x0000024Cu; // 801813B4
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 801813B8
  goto L_801813D4; // 801813BC
L_801813C0:;
  c->r[0]=0u+0x00000002u; // 801813C0
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 801813C4
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 801813C8
  c->r[29]=c->r[7]+0x0000024Cu; // 801813CC
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 801813D0
L_801813D4:;
  c->r[0]=rotl(c->r[5],28)&0x00000001u; // 801813D4
  c->r[3]=c->r[5]|c->r[5]; // 801813D8
  W8(c->r[7]+0x00000250u,c->r[0]); // 801813DC
  c->r[5]=c->r[8]|c->r[8]; // 801813E0
  c->r[28]=R32(c->r[2]+0xFFFF8DA0u); // 801813E4
  c->r[4]=c->r[9]|c->r[9]; // 801813E8
  c->r[0]=R32(c->r[29]+0x00000000u); // 801813EC
  c->r[0]=(rotl(c->r[31],0)&0x00000008u)|(c->r[0]&~0x00000008u); // 801813F0
  c->r[6]=c->r[1]+0x00000010u; // 801813F4
  c->r[7]=c->r[1]+0x0000000Cu; // 801813F8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801813FC
  c->r[8]=c->r[1]+0x00000008u; // 80181400
  c->lr=0x80181408u; f_80182514(c); // 80181404
  c->r[0]=0u+0x00000000u; // 80181408
  c->r[3]=0u+0x00000000u; // 8018140C
  W32(c->r[28]+0x00000248u,c->r[0]); // 80181410
  c->r[0]=0u+0x0000004Du; // 80181414
  c->r[5]=R32(c->r[1]+0x00000010u); // 80181418
  c->r[4]=R32(c->r[1]+0x00000008u); // 8018141C
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 80181420
  c->r[3]=(rotl(c->r[4],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 80181424
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80181428
  W32(c->r[28]+0x00000248u,c->r[3]); // 8018142C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80181430
  c->r[0]=(rotl(c->r[30],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 80181434
  c->r[0]=(rotl(c->r[31],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 80181438
  W32(c->r[29]+0x00000000u,c->r[0]); // 8018143C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80181440
  c->r[30]=R32(c->r[1]+0x00000028u); // 80181444
  c->r[29]=R32(c->r[1]+0x00000024u); // 80181448
  c->r[28]=R32(c->r[1]+0x00000020u); // 8018144C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80181450
  c->lr=c->r[0]; // 80181454
  c->r[1]=c->r[1]+0x00000030u; // 80181458
  return; // 8018145C
}

// GXSetDispCopyFrame2Field
void f_80181460(Ctx* __restrict c) {
  trace_call(0x80181460u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80181460
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 80181464
  c->r[0]=(rotl(c->r[3],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 80181468
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 8018146C
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 80181470
  c->r[0]=rotl(c->r[0],0)&0xFFFFCFFFu; // 80181474
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 80181478
  return; // 8018147C
}

// GXSetCopyClamp
void f_80181480(Ctx* __restrict c) {
  trace_call(0x80181480u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80181480
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 80181484
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 80181488
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 8018148C
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 80181490
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 80181494
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 80181498
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 8018149C
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 801814A0
  return; // 801814A4
}

// GXGetYScaleFactor
void f_801814A8(Ctx* __restrict c) {
  trace_call(0x801814A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801814A8
  c->r[0]=c->lr; // 801814AC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801814B0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801814B4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801814B8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801814BC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801814C0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801814C4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801814C8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 801814CC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 801814D0
  c->r[0]=0u+0x43300000u; // 801814D4
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[3]=RF64(ea);} // 801814D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801814DC
  {uint32_t ea=c->r[2]+0xFFFF8DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801814E0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801814E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801814E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801814EC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801814F0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801814F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801814F8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801814FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80181500
  W32(c->r[1]+0x00000028u,c->r[30]); // 80181504
  c->f[28]=c->ps1[28]=S(c->f[2]/c->f[1]); // 80181508
  W32(c->r[1]+0x00000024u,c->r[29]); // 8018150C
  c->r[29]=c->r[4]|c->r[4]; // 80181510
  W32(c->r[1]+0x00000020u,c->r[28]); // 80181514
  c->r[28]=c->r[3]|c->r[3]; // 80181518
  c->r[30]=c->r[29]|c->r[29]; // 8018151C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[28]); // 80181520
  c->lr=0x80181528u; f_80185DAC(c); // 80181524
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 80181528
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 8018152C
  c->r[31]=rotl(c->r[0],8)&0xFFFFFF00u; // 80181530
  c->r[3]=divwu(c->r[31],c->r[4]); // 80181534
  cmpu(c,0,c->r[4],0x00000080u); // 80181538
  c->r[3]=c->r[3]+0x00000001u; // 8018153C
  if (!crb(c,1)) { goto L_80181570; } // 80181540
  cmpu(c,0,c->r[4],0x00000100u); // 80181544
  if (!crb(c,0)) { goto L_80181570; } // 80181548
  goto L_80181554; // 8018154C
L_80181550:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80181550
L_80181554:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80181554
  if (crb(c,2)) { IRQCHK(c); goto L_80181550; } // 80181558
  c->r[0]=divwu(c->r[28],c->r[4]); // 8018155C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80181560
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 80181564
  if (!crb(c,2)) { goto L_80181570; } // 80181568
  c->r[3]=c->r[3]+0x00000001u; // 8018156C
L_80181570:;
  cmpu(c,0,c->r[3],0x00000400u); // 80181570
  if (!crb(c,1)) { goto L_8018157C; } // 80181574
  c->r[3]=0u+0x00000400u; // 80181578
L_8018157C:;
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[31]=RF64(ea);} // 8018157C
  {uint32_t ea=c->r[2]+0xFFFF8DC8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80181580
  goto L_801815FC; // 80181584
L_80181588:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80181588
  W32(c->r[1]+0x00000014u,c->r[28]); // 8018158C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80181590
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80181594
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80181598
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8018159C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801815A0
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 801815A4
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[28]); // 801815A8
  c->lr=0x801815B0u; f_80185DAC(c); // 801815AC
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 801815B0
  c->r[3]=divwu(c->r[31],c->r[4]); // 801815B4
  cmpu(c,0,c->r[4],0x00000080u); // 801815B8
  c->r[3]=c->r[3]+0x00000001u; // 801815BC
  if (!crb(c,1)) { goto L_801815F0; } // 801815C0
  cmpu(c,0,c->r[4],0x00000100u); // 801815C4
  if (!crb(c,0)) { goto L_801815F0; } // 801815C8
  goto L_801815D4; // 801815CC
L_801815D0:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801815D0
L_801815D4:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801815D4
  if (crb(c,2)) { IRQCHK(c); goto L_801815D0; } // 801815D8
  c->r[0]=divwu(c->r[28],c->r[4]); // 801815DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801815E0
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 801815E4
  if (!crb(c,2)) { goto L_801815F0; } // 801815E8
  c->r[3]=c->r[3]+0x00000001u; // 801815EC
L_801815F0:;
  cmpu(c,0,c->r[3],0x00000400u); // 801815F0
  if (!crb(c,1)) { goto L_801815FC; } // 801815F4
  c->r[3]=0u+0x00000400u; // 801815F8
L_801815FC:;
  cmpu(c,0,c->r[3],c->r[29]); // 801815FC
  if (crb(c,1)) { IRQCHK(c); goto L_80181588; } // 80181600
  c->f[29]=c->f[28]; // 80181604
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[30]=RF64(ea);} // 80181608
  {uint32_t ea=c->r[2]+0xFFFF8DC8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8018160C
  goto L_8018168C; // 80181610
L_80181614:;
  c->r[30]=c->r[30]+0x00000001u; // 80181614
  W32(c->r[1]+0x00000014u,c->r[28]); // 80181618
  c->f[29]=c->f[28]; // 8018161C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80181620
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80181624
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80181628
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8018162C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80181630
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 80181634
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[28]); // 80181638
  c->lr=0x80181640u; f_80185DAC(c); // 8018163C
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 80181640
  c->r[3]=divwu(c->r[31],c->r[4]); // 80181644
  cmpu(c,0,c->r[4],0x00000080u); // 80181648
  c->r[3]=c->r[3]+0x00000001u; // 8018164C
  if (!crb(c,1)) { goto L_80181680; } // 80181650
  cmpu(c,0,c->r[4],0x00000100u); // 80181654
  if (!crb(c,0)) { goto L_80181680; } // 80181658
  goto L_80181664; // 8018165C
L_80181660:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80181660
L_80181664:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80181664
  if (crb(c,2)) { IRQCHK(c); goto L_80181660; } // 80181668
  c->r[0]=divwu(c->r[28],c->r[4]); // 8018166C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80181670
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 80181674
  if (!crb(c,2)) { goto L_80181680; } // 80181678
  c->r[3]=c->r[3]+0x00000001u; // 8018167C
L_80181680:;
  cmpu(c,0,c->r[3],0x00000400u); // 80181680
  if (!crb(c,1)) { goto L_8018168C; } // 80181684
  c->r[3]=0u+0x00000400u; // 80181688
L_8018168C:;
  cmpu(c,0,c->r[3],c->r[29]); // 8018168C
  if (crb(c,0)) { IRQCHK(c); goto L_80181614; } // 80181690
  c->f[1]=c->f[29]; // 80181694
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80181698
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8018169C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801816A0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801816A4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801816A8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801816AC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801816B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801816B4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801816B8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801816BC
  c->r[29]=R32(c->r[1]+0x00000024u); // 801816C0
  c->r[28]=R32(c->r[1]+0x00000020u); // 801816C4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801816C8
  c->lr=c->r[0]; // 801816CC
  c->r[1]=c->r[1]+0x00000070u; // 801816D0
  return; // 801816D4
}

// GXSetDispCopyYScale
void f_801816D8(Ctx* __restrict c) {
  trace_call(0x801816D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801816D8
  c->r[0]=c->lr; // 801816DC
  {uint32_t ea=c->r[2]+0xFFFF8DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801816E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801816E4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801816E8
  c->lr=0x801816F0u; f_80185DAC(c); // 801816EC
  c->r[4]=0u+0xCC010000u; // 801816F0
  c->r[0]=0u+0x00000061u; // 801816F4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801816F8
  c->r[0]=0u+0x0000004Eu; // 801816FC
  c->r[5]=0u+0x00000000u; // 80181700
  c->r[7]=rotl(c->r[3],0)&0x000001FFu; // 80181704
  c->r[5]=(rotl(c->r[3],0)&0x000001FFu)|(c->r[5]&~0x000001FFu); // 80181708
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 8018170C
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80181710
  c->r[0]=0u+0x00000000u; // 80181714
  W32(c->r[4]+0xFFFF8000u,c->r[5]); // 80181718
  c->r[3]=addc(c,~c->r[7],0x00000100u,1); // 8018171C
  cmpu(c,0,c->r[7],0x00000080u); // 80181720
  W16(c->r[6]+0x00000002u,c->r[0]); // 80181724
  c->r[0]=c->r[7]+0xFFFFFF00u; // 80181728
  c->r[3]=c->r[3]|c->r[0]; // 8018172C
  c->r[0]=R32(c->r[6]+0x0000023Cu); // 80181730
  c->r[0]=(rotl(c->r[3],11)&0x00000400u)|(c->r[0]&~0x00000400u); // 80181734
  W32(c->r[6]+0x0000023Cu,c->r[0]); // 80181738
  c->r[0]=R32(c->r[6]+0x00000234u); // 8018173C
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 80181740
  c->r[4]=c->r[3]+0x00000001u; // 80181744
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80181748
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8018174C
  c->r[3]=divwu(c->r[0],c->r[7]); // 80181750
  c->r[3]=c->r[3]+0x00000001u; // 80181754
  if (!crb(c,1)) { goto L_80181788; } // 80181758
  cmpu(c,0,c->r[7],0x00000100u); // 8018175C
  if (!crb(c,0)) { goto L_80181788; } // 80181760
  goto L_8018176C; // 80181764
L_80181768:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 80181768
L_8018176C:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 8018176C
  if (crb(c,2)) { IRQCHK(c); goto L_80181768; } // 80181770
  c->r[0]=divwu(c->r[4],c->r[7]); // 80181774
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80181778
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 8018177C
  if (!crb(c,2)) { goto L_80181788; } // 80181780
  c->r[3]=c->r[3]+0x00000001u; // 80181784
L_80181788:;
  cmpu(c,0,c->r[3],0x00000400u); // 80181788
  if (!crb(c,1)) { goto L_80181794; } // 8018178C
  c->r[3]=0u+0x00000400u; // 80181790
L_80181794:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181794
  c->lr=c->r[0]; // 80181798
  c->r[1]=c->r[1]+0x00000010u; // 8018179C
  return; // 801817A0
}

// GXSetCopyClear
void f_801817A4(Ctx* __restrict c) {
  trace_call(0x801817A4u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 801817A4
  c->r[7]=0u+0xCC010000u; // 801817A8
  c->r[8]=0u+0x00000061u; // 801817AC
  c->r[0]=R8(c->r[3]+0x00000003u); // 801817B0
  c->r[10]=0u+0x00000000u; // 801817B4
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801817B8
  c->r[10]=(rotl(c->r[6],0)&0x000000FFu)|(c->r[10]&~0x000000FFu); // 801817BC
  c->r[9]=0u+0x0000004Fu; // 801817C0
  c->r[10]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[10]&~0x0000FF00u); // 801817C4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801817C8
  c->r[10]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801817CC
  c->r[6]=0u+0x00000000u; // 801817D0
  W32(c->r[7]+0xFFFF8000u,c->r[10]); // 801817D4
  c->r[6]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801817D8
  c->r[3]=R8(c->r[3]+0x00000001u); // 801817DC
  c->r[0]=0u+0x00000050u; // 801817E0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801817E4
  c->r[5]=0u+0x00000000u; // 801817E8
  c->r[6]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801817EC
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801817F0
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801817F4
  c->r[0]=0u+0x00000051u; // 801817F8
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 801817FC
  c->r[5]=(rotl(c->r[4],0)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 80181800
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80181804
  c->r[0]=0u+0x00000000u; // 80181808
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8018180C
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 80181810
  W16(c->r[3]+0x00000002u,c->r[0]); // 80181814
  return; // 80181818
}

// GXSetCopyFilter
void f_8018181C(Ctx* __restrict c) {
  trace_call(0x8018181Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8018181C
  if (crb(c,2)) { goto L_80181918; } // 80181820
  c->r[8]=R8(c->r[4]+0x00000000u); // 80181824
  c->r[0]=0u+0x00000000u; // 80181828
  c->r[10]=R8(c->r[4]+0x00000001u); // 8018182C
  c->r[3]=0u+0x00000000u; // 80181830
  c->r[0]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 80181834
  c->r[7]=R8(c->r[4]+0x00000006u); // 80181838
  c->r[0]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8018183C
  c->r[8]=R8(c->r[4]+0x0000000Cu); // 80181840
  c->r[3]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[3]&~0x0000000Fu); // 80181844
  c->r[7]=0u+0x00000000u; // 80181848
  c->r[7]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 8018184C
  c->r[10]=R8(c->r[4]+0x0000000Du); // 80181850
  c->r[11]=R8(c->r[4]+0x00000007u); // 80181854
  c->r[8]=0u+0x00000000u; // 80181858
  c->r[7]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 8018185C
  c->r[10]=R8(c->r[4]+0x00000002u); // 80181860
  c->r[9]=R8(c->r[4]+0x00000012u); // 80181864
  c->r[3]=(rotl(c->r[11],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 80181868
  c->r[0]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[0]&~0x00000F00u); // 8018186C
  c->r[10]=R8(c->r[4]+0x0000000Eu); // 80181870
  c->r[8]=(rotl(c->r[9],0)&0x0000000Fu)|(c->r[8]&~0x0000000Fu); // 80181874
  c->r[9]=R8(c->r[4]+0x00000013u); // 80181878
  c->r[7]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 8018187C
  c->r[10]=R8(c->r[4]+0x00000003u); // 80181880
  c->r[8]=(rotl(c->r[9],4)&0x000000F0u)|(c->r[8]&~0x000000F0u); // 80181884
  c->r[9]=R8(c->r[4]+0x00000014u); // 80181888
  c->r[0]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 8018188C
  c->r[10]=R8(c->r[4]+0x0000000Fu); // 80181890
  c->r[8]=(rotl(c->r[9],8)&0x00000F00u)|(c->r[8]&~0x00000F00u); // 80181894
  c->r[9]=R8(c->r[4]+0x00000015u); // 80181898
  c->r[7]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 8018189C
  c->r[10]=R8(c->r[4]+0x00000004u); // 801818A0
  c->r[11]=R8(c->r[4]+0x00000008u); // 801818A4
  c->r[8]=(rotl(c->r[9],12)&0x0000F000u)|(c->r[8]&~0x0000F000u); // 801818A8
  c->r[0]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[0]&~0x000F0000u); // 801818AC
  c->r[10]=R8(c->r[4]+0x00000010u); // 801818B0
  c->r[9]=R8(c->r[4]+0x00000016u); // 801818B4
  c->r[3]=(rotl(c->r[11],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 801818B8
  c->r[11]=R8(c->r[4]+0x00000009u); // 801818BC
  c->r[7]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[7]&~0x000F0000u); // 801818C0
  c->r[10]=R8(c->r[4]+0x00000005u); // 801818C4
  c->r[8]=(rotl(c->r[9],16)&0x000F0000u)|(c->r[8]&~0x000F0000u); // 801818C8
  c->r[9]=R8(c->r[4]+0x00000011u); // 801818CC
  c->r[3]=(rotl(c->r[11],12)&0x0000F000u)|(c->r[3]&~0x0000F000u); // 801818D0
  c->r[11]=R8(c->r[4]+0x0000000Au); // 801818D4
  c->r[0]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 801818D8
  c->r[10]=R8(c->r[4]+0x0000000Bu); // 801818DC
  c->r[7]=(rotl(c->r[9],20)&0x00F00000u)|(c->r[7]&~0x00F00000u); // 801818E0
  c->r[4]=R8(c->r[4]+0x00000017u); // 801818E4
  c->r[9]=0u+0x00000001u; // 801818E8
  c->r[3]=(rotl(c->r[11],16)&0x000F0000u)|(c->r[3]&~0x000F0000u); // 801818EC
  c->r[3]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 801818F0
  c->r[8]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 801818F4
  c->r[0]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801818F8
  c->r[10]=0u+0x00000002u; // 801818FC
  c->r[9]=0u+0x00000003u; // 80181900
  c->r[4]=0u+0x00000004u; // 80181904
  c->r[3]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80181908
  c->r[7]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8018190C
  c->r[8]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80181910
  goto L_80181938; // 80181914
L_80181918:;
  c->r[8]=0u+0x01660000u; // 80181918
  c->r[3]=0u+0x02660000u; // 8018191C
  c->r[7]=0u+0x03660000u; // 80181920
  c->r[4]=0u+0x04660000u; // 80181924
  c->r[0]=c->r[8]+0x00006666u; // 80181928
  c->r[3]=c->r[3]+0x00006666u; // 8018192C
  c->r[7]=c->r[7]+0x00006666u; // 80181930
  c->r[8]=c->r[4]+0x00006666u; // 80181934
L_80181938:;
  c->r[9]=0u+0xCC010000u; // 80181938
  c->r[10]=0u+0x00000061u; // 8018193C
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 80181940
  cmps(c,0,(int32_t)c->r[5],0); // 80181944
  c->r[4]=0u+0x00000053u; // 80181948
  c->r[11]=0u+0x00000000u; // 8018194C
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 80181950
  c->r[0]=0u+0x00000054u; // 80181954
  c->r[12]=0u+0x00000000u; // 80181958
  c->r[11]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 8018195C
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 80181960
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 80181964
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 80181968
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 8018196C
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 80181970
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 80181974
  W32(c->r[9]+0xFFFF8000u,c->r[8]); // 80181978
  if (crb(c,2)) { goto L_801819BC; } // 8018197C
  c->r[4]=R8(c->r[6]+0x00000000u); // 80181980
  c->r[0]=R8(c->r[6]+0x00000004u); // 80181984
  c->r[11]=(rotl(c->r[4],0)&0x0000003Fu)|(c->r[11]&~0x0000003Fu); // 80181988
  c->r[3]=R8(c->r[6]+0x00000001u); // 8018198C
  c->r[12]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 80181990
  c->r[5]=R8(c->r[6]+0x00000002u); // 80181994
  c->r[11]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[11]&~0x00000FC0u); // 80181998
  c->r[3]=R8(c->r[6]+0x00000005u); // 8018199C
  c->r[4]=R8(c->r[6]+0x00000003u); // 801819A0
  c->r[11]=(rotl(c->r[5],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 801819A4
  c->r[0]=R8(c->r[6]+0x00000006u); // 801819A8
  c->r[12]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[12]&~0x00000FC0u); // 801819AC
  c->r[11]=(rotl(c->r[4],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 801819B0
  c->r[12]=(rotl(c->r[0],12)&0x0003F000u)|(c->r[12]&~0x0003F000u); // 801819B4
  goto L_801819D8; // 801819B8
L_801819BC:;
  c->r[3]=0u+0x00000015u; // 801819BC
  c->r[11]=rotl(c->r[11],0)&0xFFFFF000u; // 801819C0
  c->r[12]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 801819C4
  c->r[0]=0u+0x00000016u; // 801819C8
  c->r[11]=(rotl(c->r[3],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 801819CC
  c->r[11]=(rotl(c->r[0],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 801819D0
  c->r[12]=rotl(c->r[12],0)&0xFFFC003Fu; // 801819D4
L_801819D8:;
  c->r[4]=0u+0xCC010000u; // 801819D8
  c->r[5]=0u+0x00000061u; // 801819DC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801819E0
  c->r[0]=0u+0x00000000u; // 801819E4
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801819E8
  W32(c->r[4]+0xFFFF8000u,c->r[11]); // 801819EC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801819F0
  W32(c->r[4]+0xFFFF8000u,c->r[12]); // 801819F4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801819F8
  return; // 801819FC
}

// GXSetDispCopyGamma
void f_80181A00(Ctx* __restrict c) {
  trace_call(0x80181A00u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80181A00
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 80181A04
  c->r[0]=(rotl(c->r[3],7)&0x00000180u)|(c->r[0]&~0x00000180u); // 80181A08
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 80181A0C
  return; // 80181A10
}

// GXCopyDisp
void f_80181A14(Ctx* __restrict c) {
  trace_call(0x80181A14u);
  cmps(c,0,(int32_t)c->r[4],0); // 80181A14
  if (crb(c,2)) { goto L_80181A48; } // 80181A18
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 80181A1C
  c->r[5]=0u+0xCC010000u; // 80181A20
  c->r[0]=0u+0x00000061u; // 80181A24
  c->r[6]=R32(c->r[7]+0x00000228u); // 80181A28
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80181A2C
  c->r[6]=c->r[6]|0x0000000Fu; // 80181A30
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80181A34
  c->r[6]=R32(c->r[7]+0x00000220u); // 80181A38
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80181A3C
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 80181A40
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80181A44
L_80181A48:;
  cmps(c,0,(int32_t)c->r[4],0); // 80181A48
  c->r[12]=0u+0x00000000u; // 80181A4C
  if (!crb(c,2)) { goto L_80181A6C; } // 80181A50
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80181A54
  c->r[0]=R32(c->r[5]+0x0000022Cu); // 80181A58
  c->r[10]=c->r[5]+0x0000022Cu; // 80181A5C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 80181A60
  cmpu(c,0,c->r[0],0x00000003u); // 80181A64
  if (!crb(c,2)) { goto L_80181A9C; } // 80181A68
L_80181A6C:;
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80181A6C
  c->r[7]=R32(c->r[5]+0x0000022Cu); // 80181A70
  c->r[10]=c->r[5]+0x0000022Cu; // 80181A74
  c->r[0]=rotl(c->r[7],26)&0x00000001u; // 80181A78
  cmpu(c,0,c->r[0],0x00000001u); // 80181A7C
  if (!crb(c,2)) { goto L_80181A9C; } // 80181A80
  c->r[6]=0u+0xCC010000u; // 80181A84
  c->r[0]=0u+0x00000061u; // 80181A88
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80181A8C
  c->r[0]=rotl(c->r[7],0)&0xFFFFFFBFu; // 80181A90
  c->r[12]=0u+0x00000001u; // 80181A94
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80181A98
L_80181A9C:;
  c->r[8]=0u+0xCC010000u; // 80181A9C
  c->r[9]=0u+0x00000061u; // 80181AA0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80181AA4
  c->r[6]=0u+0x00000000u; // 80181AA8
  c->r[11]=R32(c->r[2]+0xFFFF8DA0u); // 80181AAC
  c->r[6]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 80181AB0
  c->r[3]=0u+0x0000004Bu; // 80181AB4
  c->r[0]=0u+0x00000052u; // 80181AB8
  c->r[7]=R32(c->r[11]+0x00000230u); // 80181ABC
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80181AC0
  cmps(c,0,(int32_t)c->r[4],0); // 80181AC4
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 80181AC8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80181ACC
  c->r[3]=R32(c->r[11]+0x00000234u); // 80181AD0
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80181AD4
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80181AD8
  c->r[3]=R32(c->r[11]+0x00000238u); // 80181ADC
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80181AE0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80181AE4
  W32(c->r[8]+0xFFFF8000u,c->r[6]); // 80181AE8
  c->r[3]=R32(c->r[11]+0x0000023Cu); // 80181AEC
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 80181AF0
  c->r[3]=c->r[3]|0x00004000u; // 80181AF4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80181AF8
  W32(c->r[11]+0x0000023Cu,c->r[3]); // 80181AFC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80181B00
  c->r[0]=R32(c->r[11]+0x0000023Cu); // 80181B04
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80181B08
  if (crb(c,2)) { goto L_80181B28; } // 80181B0C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80181B10
  c->r[0]=R32(c->r[11]+0x00000228u); // 80181B14
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80181B18
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80181B1C
  c->r[0]=R32(c->r[11]+0x00000220u); // 80181B20
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80181B24
L_80181B28:;
  cmps(c,0,(int32_t)c->r[12],0); // 80181B28
  if (crb(c,2)) { goto L_80181B44; } // 80181B2C
  c->r[3]=0u+0xCC010000u; // 80181B30
  c->r[0]=0u+0x00000061u; // 80181B34
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80181B38
  c->r[0]=R32(c->r[10]+0x00000000u); // 80181B3C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80181B40
L_80181B44:;
  c->r[0]=0u+0x00000000u; // 80181B44
  W16(c->r[5]+0x00000002u,c->r[0]); // 80181B48
  return; // 80181B4C
}

// GXCopyTex
void f_80181B50(Ctx* __restrict c) {
  trace_call(0x80181B50u);
  cmps(c,0,(int32_t)c->r[4],0); // 80181B50
  if (crb(c,2)) { goto L_80181B84; } // 80181B54
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 80181B58
  c->r[5]=0u+0xCC010000u; // 80181B5C
  c->r[0]=0u+0x00000061u; // 80181B60
  c->r[6]=R32(c->r[7]+0x00000228u); // 80181B64
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80181B68
  c->r[6]=c->r[6]|0x0000000Fu; // 80181B6C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80181B70
  c->r[6]=R32(c->r[7]+0x00000220u); // 80181B74
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80181B78
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 80181B7C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80181B80
L_80181B84:;
  c->r[9]=R32(c->r[2]+0xFFFF8DA0u); // 80181B84
  c->r[11]=0u+0x00000000u; // 80181B88
  c->r[0]=R8(c->r[9]+0x00000250u); // 80181B8C
  c->r[6]=R32(c->r[9]+0x0000022Cu); // 80181B90
  cmps(c,0,(int32_t)c->r[0],0); // 80181B94
  if (crb(c,2)) { goto L_80181BB4; } // 80181B98
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 80181B9C
  cmpu(c,0,c->r[0],0x00000003u); // 80181BA0
  if (crb(c,2)) { goto L_80181BB4; } // 80181BA4
  c->r[0]=0u+0x00000003u; // 80181BA8
  c->r[11]=0u+0x00000001u; // 80181BAC
  c->r[6]=(rotl(c->r[0],0)&0x00000007u)|(c->r[6]&~0x00000007u); // 80181BB0
L_80181BB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 80181BB4
  if (!crb(c,2)) { goto L_80181BC8; } // 80181BB8
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 80181BBC
  cmpu(c,0,c->r[0],0x00000003u); // 80181BC0
  if (!crb(c,2)) { goto L_80181BDC; } // 80181BC4
L_80181BC8:;
  c->r[0]=rotl(c->r[6],26)&0x00000001u; // 80181BC8
  cmpu(c,0,c->r[0],0x00000001u); // 80181BCC
  if (!crb(c,2)) { goto L_80181BDC; } // 80181BD0
  c->r[11]=0u+0x00000001u; // 80181BD4
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFBFu; // 80181BD8
L_80181BDC:;
  cmps(c,0,(int32_t)c->r[11],0); // 80181BDC
  if (crb(c,2)) { goto L_80181BF4; } // 80181BE0
  c->r[5]=0u+0xCC010000u; // 80181BE4
  c->r[0]=0u+0x00000061u; // 80181BE8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80181BEC
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80181BF0
L_80181BF4:;
  c->r[7]=0u+0xCC010000u; // 80181BF4
  c->r[8]=0u+0x00000061u; // 80181BF8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80181BFC
  c->r[5]=0u+0x00000000u; // 80181C00
  c->r[10]=R32(c->r[2]+0xFFFF8DA0u); // 80181C04
  c->r[5]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 80181C08
  c->r[3]=0u+0x0000004Bu; // 80181C0C
  c->r[0]=0u+0x00000052u; // 80181C10
  c->r[6]=R32(c->r[10]+0x00000240u); // 80181C14
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80181C18
  cmps(c,0,(int32_t)c->r[4],0); // 80181C1C
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 80181C20
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80181C24
  c->r[3]=R32(c->r[10]+0x00000244u); // 80181C28
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80181C2C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80181C30
  c->r[3]=R32(c->r[10]+0x00000248u); // 80181C34
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80181C38
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80181C3C
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 80181C40
  c->r[3]=R32(c->r[10]+0x0000024Cu); // 80181C44
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 80181C48
  c->r[3]=rotl(c->r[3],0)&0xFFFFBFFFu; // 80181C4C
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80181C50
  W32(c->r[10]+0x0000024Cu,c->r[3]); // 80181C54
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80181C58
  c->r[0]=R32(c->r[10]+0x0000024Cu); // 80181C5C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80181C60
  if (crb(c,2)) { goto L_80181C80; } // 80181C64
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80181C68
  c->r[0]=R32(c->r[10]+0x00000228u); // 80181C6C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80181C70
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80181C74
  c->r[0]=R32(c->r[10]+0x00000220u); // 80181C78
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80181C7C
L_80181C80:;
  cmps(c,0,(int32_t)c->r[11],0); // 80181C80
  if (crb(c,2)) { goto L_80181C9C; } // 80181C84
  c->r[3]=0u+0xCC010000u; // 80181C88
  c->r[0]=0u+0x00000061u; // 80181C8C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80181C90
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 80181C94
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80181C98
L_80181C9C:;
  c->r[0]=0u+0x00000000u; // 80181C9C
  W16(c->r[9]+0x00000002u,c->r[0]); // 80181CA0
  return; // 80181CA4
}

// GXClearBoundingBox
void f_80181CA8(Ctx* __restrict c) {
  trace_call(0x80181CA8u);
  c->r[5]=0u+0xCC010000u; // 80181CA8
  c->r[6]=0u+0x00000061u; // 80181CAC
  c->r[3]=0u+0x55000000u; // 80181CB0
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80181CB4
  c->r[0]=c->r[3]+0x000003FFu; // 80181CB8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80181CBC
  c->r[3]=0u+0x56000000u; // 80181CC0
  c->r[4]=c->r[3]+0x000003FFu; // 80181CC4
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80181CC8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80181CCC
  c->r[0]=0u+0x00000000u; // 80181CD0
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80181CD4
  W16(c->r[3]+0x00000002u,c->r[0]); // 80181CD8
  return; // 80181CDC
}

// GXInitLightAttn
void f_80181CE0(Ctx* __restrict c) {
  trace_call(0x80181CE0u);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80181CE0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 80181CE4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 80181CE8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 80181CEC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 80181CF0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[6]);} // 80181CF4
  return; // 80181CF8
}

// GXInitLightAttnA
void f_80181CFC(Ctx* __restrict c) {
  trace_call(0x80181CFCu);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80181CFC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 80181D00
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 80181D04
  return; // 80181D08
}

// GXInitLightAttnK
void f_80181D0C(Ctx* __restrict c) {
  trace_call(0x80181D0Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80181D0C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 80181D10
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[3]);} // 80181D14
  return; // 80181D18
}

// GXInitLightSpot
void f_80181D1C(Ctx* __restrict c) {
  trace_call(0x80181D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181D1C
  c->r[0]=c->lr; // 80181D20
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80181D28
  fcmp(c,0,c->f[1],c->f[0]); // 80181D2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80181D30
  c->r[31]=c->r[4]|c->r[4]; // 80181D34
  W32(c->r[1]+0x00000008u,c->r[30]); // 80181D38
  c->r[30]=c->r[3]|c->r[3]; // 80181D3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80181D40
  if (crb(c,2)) { goto L_80181D54; } // 80181D44
  {uint32_t ea=c->r[2]+0xFFFF8DDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80181D48
  fcmp(c,0,c->f[1],c->f[0]); // 80181D4C
  if (!crb(c,1)) { goto L_80181D58; } // 80181D50
L_80181D54:;
  c->r[31]=0u+0x00000000u; // 80181D54
L_80181D58:;
  {uint32_t ea=c->r[2]+0xFFFF8DE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80181D58
  {uint32_t ea=c->r[2]+0xFFFF8DE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181D5C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80181D60
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80181D64
  c->lr=0x80181D6Cu; f_8019627C(c); // 80181D68
  cmpu(c,0,c->r[31],0x00000006u); // 80181D6C
  c->f[5]=c->ps1[5]=S(c->f[1]); // 80181D70
  if (crb(c,1)) { goto L_80181E74; } // 80181D74
  c->r[3]=0u+0x80330000u; // 80181D78
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80181D7C
  c->r[3]=c->r[3]+0xFFFFFDA8u; // 80181D80
  c->r[3]=R32(c->r[3]+c->r[0]); // 80181D84
  c->ctr=c->r[3]; // 80181D88
  if (true) { switch (c->ctr) { case 0x80181D90u: goto L_80181D90; case 0x80181DA4u: goto L_80181DA4; case 0x80181DC0u: goto L_80181DC0; case 0x80181DDCu: goto L_80181DDC; case 0x80181E08u: goto L_80181E08; case 0x80181E38u: goto L_80181E38; case 0x80181E74u: goto L_80181E74; default: break; } dispatch(c,c->ctr); return; } // 80181D8C
L_80181D90:;
  {uint32_t ea=c->r[2]+0xFFFF8DE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181D90
  {uint32_t ea=c->r[2]+0xFFFF8DECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80181D94
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[5]); // 80181D98
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80181D9C
  goto L_80181E80; // 80181DA0
L_80181DA4:;
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80181DA4
  c->f[0]=-c->f[5]; // 80181DA8
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80181DAC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[5]); // 80181DB0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80181DB4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 80181DB8
  goto L_80181E80; // 80181DBC
L_80181DC0:;
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80181DC0
  c->f[0]=-c->f[5]; // 80181DC4
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181DC8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[5]); // 80181DCC
  c->f[6]=c->ps1[6]=S(c->f[2]/c->f[1]); // 80181DD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 80181DD4
  goto L_80181E80; // 80181DD8
L_80181DDC:;
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181DDC
  {uint32_t ea=c->r[2]+0xFFFF8DF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181DE0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[5]); // 80181DE4
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[1]); // 80181DE8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80181DEC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80181DF0
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80181DF4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[0]); // 80181DF8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80181DFC
  c->f[6]=-c->f[2]; // 80181E00
  goto L_80181E80; // 80181E04
L_80181E08:;
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80181E08
  {uint32_t ea=c->r[2]+0xFFFF8DFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80181E0C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 80181E10
  {uint32_t ea=c->r[2]+0xFFFF8DF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80181E14
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 80181E18
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80181E1C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80181E20
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[3]); // 80181E24
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[1]); // 80181E28
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80181E2C
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[5]); // 80181E30
  goto L_80181E80; // 80181E34
L_80181E38:;
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80181E38
  {uint32_t ea=c->r[2]+0xFFFF8DF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181E3C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 80181E40
  {uint32_t ea=c->r[2]+0xFFFF8DFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80181E44
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 80181E48
  {uint32_t ea=c->r[2]+0xFFFF8E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181E4C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 80181E50
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80181E54
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 80181E58
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 80181E5C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80181E60
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 80181E64
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[3]); // 80181E68
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[2]); // 80181E6C
  goto L_80181E80; // 80181E70
L_80181E74:;
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181E74
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181E78
  c->f[6]=c->f[1]; // 80181E7C
L_80181E80:;
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 80181E80
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 80181E84
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 80181E88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80181E8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80181E90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80181E94
  c->lr=c->r[0]; // 80181E98
  c->r[1]=c->r[1]+0x00000010u; // 80181E9C
  return; // 80181EA0
}

// GXInitLightDistAttn
void f_80181EA4(Ctx* __restrict c) {
  trace_call(0x80181EA4u);
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181EA4
  fcmp(c,0,c->f[1],c->f[0]); // 80181EA8
  if (!crb(c,0)) { goto L_80181EB4; } // 80181EAC
  c->r[4]=0u+0x00000000u; // 80181EB0
L_80181EB4:;
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181EB4
  fcmp(c,0,c->f[2],c->f[0]); // 80181EB8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80181EBC
  if (crb(c,2)) { goto L_80181ED4; } // 80181EC0
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181EC4
  fcmp(c,0,c->f[2],c->f[0]); // 80181EC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80181ECC
  if (!crb(c,2)) { goto L_80181ED8; } // 80181ED0
L_80181ED4:;
  c->r[4]=0u+0x00000000u; // 80181ED4
L_80181ED8:;
  cmps(c,0,(int32_t)c->r[4],2); // 80181ED8
  if (crb(c,2)) { goto L_80181F18; } // 80181EDC
  if (!crb(c,0)) { goto L_80181EF4; } // 80181EE0
  cmps(c,0,(int32_t)c->r[4],0); // 80181EE4
  if (crb(c,2)) { goto L_80181F58; } // 80181EE8
  if (!crb(c,0)) { goto L_80181F00; } // 80181EEC
  goto L_80181F58; // 80181EF0
L_80181EF4:;
  cmps(c,0,(int32_t)c->r[4],4); // 80181EF4
  if (!crb(c,0)) { goto L_80181F58; } // 80181EF8
  goto L_80181F3C; // 80181EFC
L_80181F00:;
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80181F00
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 80181F04
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80181F08
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[2]); // 80181F0C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 80181F10
  goto L_80181F64; // 80181F14
L_80181F18:;
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80181F18
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80181F1C
  {uint32_t ea=c->r[2]+0xFFFF8E04u; c->f[4]=c->ps1[4]=RF32(ea);} // 80181F20
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 80181F24
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[3]); // 80181F28
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 80181F2C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[3]); // 80181F30
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 80181F34
  goto L_80181F64; // 80181F38
L_80181F3C:;
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 80181F3C
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80181F40
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181F44
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 80181F48
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80181F4C
  c->f[4]=c->ps1[4]=S(c->f[2]/c->f[0]); // 80181F50
  goto L_80181F64; // 80181F54
L_80181F58:;
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80181F58
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80181F5C
  c->f[4]=c->f[3]; // 80181F60
L_80181F64:;
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[5]);} // 80181F64
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 80181F68
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[4]);} // 80181F6C
  return; // 80181F70
}

// GXInitLightPos
void f_80181F74(Ctx* __restrict c) {
  trace_call(0x80181F74u);
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 80181F74
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 80181F78
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 80181F7C
  return; // 80181F80
}

// GXGetLightPos
void f_80181F84(Ctx* __restrict c) {
  trace_call(0x80181F84u);
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181F84
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80181F88
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80181F8C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181F90
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80181F94
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80181F98
  return; // 80181F9C
}

// GXInitLightDir
void f_80181FA0(Ctx* __restrict c) {
  trace_call(0x80181FA0u);
  c->f[4]=-c->f[1]; // 80181FA0
  c->f[1]=-c->f[2]; // 80181FA4
  c->f[0]=-c->f[3]; // 80181FA8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[4]);} // 80181FAC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 80181FB0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80181FB4
  return; // 80181FB8
}

// GXGetLightDir
void f_80181FBC(Ctx* __restrict c) {
  trace_call(0x80181FBCu);
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80181FBC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80181FC0
  c->f[2]=-c->f[0]; // 80181FC4
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80181FC8
  c->f[1]=-c->f[1]; // 80181FCC
  c->f[0]=-c->f[0]; // 80181FD0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 80181FD4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80181FD8
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80181FDC
  return; // 80181FE0
}

// GXInitSpecularDir
void f_80181FE4(Ctx* __restrict c) {
  trace_call(0x80181FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80181FE4
  c->r[0]=c->lr; // 80181FE8
  W32(c->r[1]+0x00000074u,c->r[0]); // 80181FEC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80181FF0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80181FF4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80181FF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80181FFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80182000
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80182004
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 80182008
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 8018200C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[27]);} // 80182010
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,27,ea,0,0);} // 80182014
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[26]);} // 80182018
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,26,ea,0,0);} // 8018201C
  c->f[31]=-c->f[1]; // 80182020
  c->f[30]=-c->f[2]; // 80182024
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80182028
  c->f[6]=-c->f[3]; // 8018202C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80182030
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[31]); // 80182034
  c->f[26]=c->f[1]; // 80182038
  c->f[29]=c->ps1[29]=S(c->f[4]+c->f[6]); // 8018203C
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182040
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[30]); // 80182044
  c->r[31]=c->r[3]|c->r[3]; // 80182048
  c->f[27]=c->f[2]; // 8018204C
  c->f[6]=c->ps1[6]=S(c->f[29]*c->f[29]); // 80182050
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[4]); // 80182054
  c->f[28]=c->f[3]; // 80182058
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 8018205C
  fcmp(c,0,c->f[0],c->f[1]); // 80182060
  if (crb(c,2)) { goto L_80182078; } // 80182064
  c->lr=0x8018206Cu; f_80196B38(c); // 80182068
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8018206C
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182070
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 80182074
L_80182078:;
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182078
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[1]); // 8018207C
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[1]); // 80182080
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[1]); // 80182084
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[26]); // 80182088
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[5]);} // 8018208C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[27]); // 80182090
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 80182094
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[4]);} // 80182098
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[3]);} // 8018209C
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 801820A0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 801820A4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801820A8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801820AC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801820B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801820B4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801820B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801820BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801820C0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801820C4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801820C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,27,ea,0,0);} // 801820CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[27]=RF64(ea);} // 801820D0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,26,ea,0,0);} // 801820D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[26]=RF64(ea);} // 801820D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801820DC
  c->r[0]=R32(c->r[1]+0x00000074u); // 801820E0
  c->lr=c->r[0]; // 801820E4
  c->r[1]=c->r[1]+0x00000070u; // 801820E8
  return; // 801820EC
}

// GXInitLightColor
void f_801820F0(Ctx* __restrict c) {
  trace_call(0x801820F0u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 801820F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801820F4
  return; // 801820F8
}

// GXLoadLightObjImm
void f_801820FC(Ctx* __restrict c) {
  trace_call(0x801820FCu);
  c->r[0]=cntlz(c->r[4]); // 801820FC
  c->r[4]=0u+0xCC010000u; // 80182100
  c->r[5]=addc(c,~c->r[0],0x0000001Fu,1); // 80182104
  c->r[0]=0u+0x00000010u; // 80182108
  c->r[5]=rotl(c->r[5],4)&0x00000070u; // 8018210C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80182110
  c->r[0]=c->r[5]+0x00000600u; // 80182114
  c->r[0]=c->r[0]|0x000F0000u; // 80182118
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8018211C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80182120
  c->r[6]=c->r[6]^c->r[6]; // 80182124
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,5,ea,0,0);} // 80182128
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,4,ea,0,0);} // 8018212C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,3,ea,0,0);} // 80182130
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,2,ea,0,0);} // 80182134
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,1,ea,0,0);} // 80182138
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,0,ea,0,0);} // 8018213C
  {uint32_t ea=c->r[4]+0xFFFF8000u; W32(ea,c->r[6]); c->r[4]=ea;} // 80182140
  W32(c->r[4]+0x00000000u,c->r[6]); // 80182144
  W32(c->r[4]+0x00000000u,c->r[6]); // 80182148
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018214C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80182150
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 80182154
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80182158
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8018215C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80182160
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80182164
  c->r[0]=0u+0x00000001u; // 80182168
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8018216C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80182170
  return; // 80182174
}

// GXSetChanAmbColor
void f_80182178(Ctx* __restrict c) {
  trace_call(0x80182178u);
  cmps(c,0,(int32_t)c->r[3],3); // 80182178
  if (crb(c,2)) { goto L_801821F4; } // 8018217C
  if (!crb(c,0)) { goto L_8018219C; } // 80182180
  cmps(c,0,(int32_t)c->r[3],1); // 80182184
  if (crb(c,2)) { goto L_801821C4; } // 80182188
  if (!crb(c,0)) { goto L_801821DC; } // 8018218C
  cmps(c,0,(int32_t)c->r[3],0); // 80182190
  if (!crb(c,0)) { goto L_801821AC; } // 80182194
  return; // 80182198
L_8018219C:;
  cmps(c,0,(int32_t)c->r[3],5); // 8018219C
  if (crb(c,2)) { goto L_80182218; } // 801821A0
  if (!crb(c,0)) return; // 801821A4
  goto L_8018220C; // 801821A8
L_801821AC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801821AC
  c->r[8]=0u+0x00000000u; // 801821B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801821B4
  c->r[7]=R32(c->r[3]+0x000000A8u); // 801821B8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801821BC
  goto L_80182228; // 801821C0
L_801821C4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801821C4
  c->r[8]=0u+0x00000001u; // 801821C8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801821CC
  c->r[7]=R32(c->r[3]+0x000000ACu); // 801821D0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801821D4
  goto L_80182228; // 801821D8
L_801821DC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801821DC
  c->r[8]=0u+0x00000000u; // 801821E0
  c->r[0]=R8(c->r[4]+0x00000003u); // 801821E4
  c->r[7]=R32(c->r[3]+0x000000A8u); // 801821E8
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801821EC
  goto L_80182228; // 801821F0
L_801821F4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801821F4
  c->r[8]=0u+0x00000001u; // 801821F8
  c->r[0]=R8(c->r[4]+0x00000003u); // 801821FC
  c->r[7]=R32(c->r[3]+0x000000ACu); // 80182200
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 80182204
  goto L_80182228; // 80182208
L_8018220C:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 8018220C
  c->r[8]=0u+0x00000000u; // 80182210
  goto L_80182228; // 80182214
L_80182218:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 80182218
  c->r[8]=0u+0x00000001u; // 8018221C
  goto L_80182228; // 80182220
  return; // 80182224
L_80182228:;
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 80182228
  c->r[3]=0u+0x00000100u; // 8018222C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80182230
  c->r[5]=R32(c->r[6]+0x000005FCu); // 80182234
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 80182238
  c->r[3]=c->r[6]+c->r[0]; // 8018223C
  c->r[0]=c->r[5]|c->r[4]; // 80182240
  W32(c->r[6]+0x000005FCu,c->r[0]); // 80182244
  W32(c->r[3]+0x000000A8u,c->r[7]); // 80182248
  return; // 8018224C
}

// GXSetChanMatColor
void f_80182250(Ctx* __restrict c) {
  trace_call(0x80182250u);
  cmps(c,0,(int32_t)c->r[3],3); // 80182250
  if (crb(c,2)) { goto L_801822CC; } // 80182254
  if (!crb(c,0)) { goto L_80182274; } // 80182258
  cmps(c,0,(int32_t)c->r[3],1); // 8018225C
  if (crb(c,2)) { goto L_8018229C; } // 80182260
  if (!crb(c,0)) { goto L_801822B4; } // 80182264
  cmps(c,0,(int32_t)c->r[3],0); // 80182268
  if (!crb(c,0)) { goto L_80182284; } // 8018226C
  return; // 80182270
L_80182274:;
  cmps(c,0,(int32_t)c->r[3],5); // 80182274
  if (crb(c,2)) { goto L_801822F0; } // 80182278
  if (!crb(c,0)) return; // 8018227C
  goto L_801822E4; // 80182280
L_80182284:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80182284
  c->r[8]=0u+0x00000000u; // 80182288
  c->r[0]=R32(c->r[4]+0x00000000u); // 8018228C
  c->r[7]=R32(c->r[3]+0x000000B0u); // 80182290
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 80182294
  goto L_80182300; // 80182298
L_8018229C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8018229C
  c->r[8]=0u+0x00000001u; // 801822A0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801822A4
  c->r[7]=R32(c->r[3]+0x000000B4u); // 801822A8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801822AC
  goto L_80182300; // 801822B0
L_801822B4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801822B4
  c->r[8]=0u+0x00000000u; // 801822B8
  c->r[0]=R8(c->r[4]+0x00000003u); // 801822BC
  c->r[7]=R32(c->r[3]+0x000000B0u); // 801822C0
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801822C4
  goto L_80182300; // 801822C8
L_801822CC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801822CC
  c->r[8]=0u+0x00000001u; // 801822D0
  c->r[0]=R8(c->r[4]+0x00000003u); // 801822D4
  c->r[7]=R32(c->r[3]+0x000000B4u); // 801822D8
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801822DC
  goto L_80182300; // 801822E0
L_801822E4:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 801822E4
  c->r[8]=0u+0x00000000u; // 801822E8
  goto L_80182300; // 801822EC
L_801822F0:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 801822F0
  c->r[8]=0u+0x00000001u; // 801822F4
  goto L_80182300; // 801822F8
  return; // 801822FC
L_80182300:;
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 80182300
  c->r[3]=0u+0x00000400u; // 80182304
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80182308
  c->r[5]=R32(c->r[6]+0x000005FCu); // 8018230C
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 80182310
  c->r[3]=c->r[6]+c->r[0]; // 80182314
  c->r[0]=c->r[5]|c->r[4]; // 80182318
  W32(c->r[6]+0x000005FCu,c->r[0]); // 8018231C
  W32(c->r[3]+0x000000B0u,c->r[7]); // 80182320
  return; // 80182324
}

// GXSetNumChans
void f_80182328(Ctx* __restrict c) {
  trace_call(0x80182328u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80182328
  c->r[0]=R32(c->r[4]+0x00000254u); // 8018232C
  c->r[0]=(rotl(c->r[3],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 80182330
  W32(c->r[4]+0x00000254u,c->r[0]); // 80182334
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80182338
  c->r[0]=c->r[0]|0x01000000u; // 8018233C
  c->r[0]=c->r[0]|0x00000004u; // 80182340
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80182344
  return; // 80182348
}

// GXSetChanCtrl
void f_8018234C(Ctx* __restrict c) {
  trace_call(0x8018234Cu);
  cmps(c,0,(int32_t)c->r[9],0); // 8018234C
  c->r[10]=0u+0x00000000u; // 80182350
  c->r[10]=(rotl(c->r[4],1)&0x00000002u)|(c->r[10]&~0x00000002u); // 80182354
  c->r[11]=rotl(c->r[3],0)&0x00000003u; // 80182358
  c->r[10]=(rotl(c->r[6],0)&0x00000001u)|(c->r[10]&~0x00000001u); // 8018235C
  c->r[10]=(rotl(c->r[5],6)&0x00000040u)|(c->r[10]&~0x00000040u); // 80182360
  if (!crb(c,2)) { goto L_8018236C; } // 80182364
  c->r[8]=0u+0x00000000u; // 80182368
L_8018236C:;
  c->r[5]=addc(c,~c->r[9],0x00000002u,1); // 8018236C
  c->r[4]=c->r[9]+0xFFFFFFFEu; // 80182370
  c->r[0]=0u-c->r[9]; // 80182374
  c->r[10]=(rotl(c->r[8],7)&0x00000180u)|(c->r[10]&~0x00000180u); // 80182378
  c->r[4]=c->r[5]|c->r[4]; // 8018237C
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80182380
  c->r[10]=(rotl(c->r[4],10)&0x00000200u)|(c->r[10]&~0x00000200u); // 80182384
  c->r[0]=c->r[0]|c->r[9]; // 80182388
  c->r[10]=(rotl(c->r[0],11)&0x00000400u)|(c->r[10]&~0x00000400u); // 8018238C
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80182390
  c->r[10]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[10]&~0x0000003Cu); // 80182394
  c->r[0]=0u+0x00001000u; // 80182398
  c->r[4]=c->r[5]+c->r[4]; // 8018239C
  cmps(c,0,(int32_t)c->r[3],4); // 801823A0
  c->r[10]=(rotl(c->r[7],7)&0x00007800u)|(c->r[10]&~0x00007800u); // 801823A4
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 801823A8
  W32(c->r[4]+0x000000B8u,c->r[10]); // 801823AC
  c->r[4]=R32(c->r[5]+0x000005FCu); // 801823B0
  c->r[0]=c->r[4]|c->r[0]; // 801823B4
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801823B8
  if (!crb(c,2)) { goto L_801823D4; } // 801823BC
  W32(c->r[5]+0x000000C0u,c->r[10]); // 801823C0
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801823C4
  c->r[0]=c->r[0]|0x00005000u; // 801823C8
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801823CC
  return; // 801823D0
L_801823D4:;
  cmps(c,0,(int32_t)c->r[3],5); // 801823D4
  if (!crb(c,2)) return; // 801823D8
  W32(c->r[5]+0x000000C4u,c->r[10]); // 801823DC
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801823E0
  c->r[0]=c->r[0]|0x0000A000u; // 801823E4
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801823E8
  return; // 801823EC
}

// GXGetTexBufferSize
void f_801823F0(Ctx* __restrict c) {
  trace_call(0x801823F0u);
  cmpu(c,0,c->r[5],0x0000003Cu); // 801823F0
  if (crb(c,1)) { goto L_80182434; } // 801823F4
  c->r[8]=0u+0x80330000u; // 801823F8
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801823FC
  c->r[8]=c->r[8]+0xFFFFFDC8u; // 80182400
  c->r[8]=R32(c->r[8]+c->r[0]); // 80182404
  c->ctr=c->r[8]; // 80182408
  if (true) { switch (c->ctr) { case 0x80182410u: goto L_80182410; case 0x8018241Cu: goto L_8018241C; case 0x80182428u: goto L_80182428; case 0x80182434u: goto L_80182434; default: break; } dispatch(c,c->ctr); return; } // 8018240C
L_80182410:;
  c->r[10]=0u+0x00000003u; // 80182410
  c->r[0]=0u+0x00000003u; // 80182414
  goto L_8018243C; // 80182418
L_8018241C:;
  c->r[10]=0u+0x00000003u; // 8018241C
  c->r[0]=0u+0x00000002u; // 80182420
  goto L_8018243C; // 80182424
L_80182428:;
  c->r[10]=0u+0x00000002u; // 80182428
  c->r[0]=0u+0x00000002u; // 8018242C
  goto L_8018243C; // 80182430
L_80182434:;
  c->r[0]=0u+0x00000000u; // 80182434
  c->r[10]=0u+0x00000000u; // 80182438
L_8018243C:;
  cmpu(c,0,c->r[5],0x00000006u); // 8018243C
  if (crb(c,2)) { goto L_8018244C; } // 80182440
  cmpu(c,0,c->r[5],0x00000016u); // 80182444
  if (!crb(c,2)) { goto L_80182454; } // 80182448
L_8018244C:;
  c->r[11]=0u+0x00000040u; // 8018244C
  goto L_80182458; // 80182450
L_80182454:;
  c->r[11]=0u+0x00000020u; // 80182454
L_80182458:;
  cmpu(c,0,c->r[6],0x00000001u); // 80182458
  if (!crb(c,2)) { goto L_801824E0; } // 8018245C
  c->r[5]=0u+0x00000001u; // 80182460
  c->r[12]=0u+0x00000000u; // 80182464
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[5]<<((c->r[10])&31)); // 80182468
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 8018246C
  c->ctr=c->r[7]; // 80182470
  cmpu(c,0,c->r[7],0x00000000u); // 80182474
  if (!crb(c,1)) { goto L_8018250C; } // 80182478
L_8018247C:;
  c->r[6]=c->r[3]+c->r[8]; // 8018247C
  c->r[5]=c->r[4]+c->r[9]; // 80182480
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80182484
  cmpu(c,0,c->r[3],0x00000001u); // 80182488
  c->r[6]=sraw(c,c->r[6],(c->r[10])&63); // 8018248C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80182490
  c->r[6]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 80182494
  c->r[5]=sraw(c,c->r[5],(c->r[0])&63); // 80182498
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 8018249C
  c->r[12]=c->r[12]+c->r[5]; // 801824A0
  if (!crb(c,2)) { goto L_801824B0; } // 801824A4
  cmpu(c,0,c->r[4],0x00000001u); // 801824A8
  if (crb(c,2)) { goto L_8018250C; } // 801824AC
L_801824B0:;
  cmpu(c,0,c->r[3],0x00000001u); // 801824B0
  c->r[5]=0u+0x00000001u; // 801824B4
  if (!crb(c,1)) { goto L_801824C0; } // 801824B8
  c->r[5]=rotl(c->r[3],31)&0x00007FFFu; // 801824BC
L_801824C0:;
  cmpu(c,0,c->r[4],0x00000001u); // 801824C0
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801824C4
  c->r[5]=0u+0x00000001u; // 801824C8
  if (!crb(c,1)) { goto L_801824D4; } // 801824CC
  c->r[5]=rotl(c->r[4],31)&0x00007FFFu; // 801824D0
L_801824D4:;
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; // 801824D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018247C; } // 801824D8
  goto L_8018250C; // 801824DC
L_801824E0:;
  c->r[6]=0u+0x00000001u; // 801824E0
  c->r[5]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 801824E4
  c->r[5]=c->r[3]+c->r[5]; // 801824E8
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801824EC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801824F0
  c->r[5]=sraw(c,c->r[5],(c->r[10])&63); // 801824F4
  c->r[3]=c->r[4]+c->r[3]; // 801824F8
  c->r[4]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[5]); // 801824FC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80182500
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 80182504
  c->r[12]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80182508
L_8018250C:;
  c->r[3]=c->r[12]|c->r[12]; // 8018250C
  return; // 80182510
}

// __GetImageTileCount
void f_80182514(Ctx* __restrict c) {
  trace_call(0x80182514u);
  cmpu(c,0,c->r[3],0x0000003Cu); // 80182514
  if (crb(c,1)) { goto L_80182558; } // 80182518
  c->r[9]=0u+0x80330000u; // 8018251C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182520
  c->r[9]=c->r[9]+0xFFFFFEBCu; // 80182524
  c->r[9]=R32(c->r[9]+c->r[0]); // 80182528
  c->ctr=c->r[9]; // 8018252C
  if (true) { switch (c->ctr) { case 0x80182534u: goto L_80182534; case 0x80182540u: goto L_80182540; case 0x8018254Cu: goto L_8018254C; case 0x80182558u: goto L_80182558; default: break; } dispatch(c,c->ctr); return; } // 80182530
L_80182534:;
  c->r[11]=0u+0x00000003u; // 80182534
  c->r[12]=0u+0x00000003u; // 80182538
  goto L_80182560; // 8018253C
L_80182540:;
  c->r[11]=0u+0x00000003u; // 80182540
  c->r[12]=0u+0x00000002u; // 80182544
  goto L_80182560; // 80182548
L_8018254C:;
  c->r[11]=0u+0x00000002u; // 8018254C
  c->r[12]=0u+0x00000002u; // 80182550
  goto L_80182560; // 80182554
L_80182558:;
  c->r[12]=0u+0x00000000u; // 80182558
  c->r[11]=0u+0x00000000u; // 8018255C
L_80182560:;
  cmps(c,0,(int32_t)c->r[4],0); // 80182560
  if (!crb(c,2)) { goto L_8018256C; } // 80182564
  c->r[4]=0u+0x00000001u; // 80182568
L_8018256C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8018256C
  if (!crb(c,2)) { goto L_80182578; } // 80182570
  c->r[5]=0u+0x00000001u; // 80182574
L_80182578:;
  c->r[10]=0u+0x00000001u; // 80182578
  cmps(c,0,(int32_t)c->r[3],6); // 8018257C
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[10]<<((c->r[11])&31)); // 80182580
  c->r[9]=0u+0x00000000u; // 80182584
  c->r[4]=c->r[4]+c->r[0]; // 80182588
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[10]<<((c->r[12])&31)); // 8018258C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80182590
  c->r[10]=sraw(c,c->r[4],(c->r[11])&63); // 80182594
  c->r[4]=c->r[5]+c->r[0]; // 80182598
  W32(c->r[6]+0x00000000u,c->r[10]); // 8018259C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801825A0
  c->r[0]=sraw(c,c->r[0],(c->r[12])&63); // 801825A4
  W32(c->r[7]+0x00000000u,c->r[0]); // 801825A8
  if (crb(c,2)) { goto L_801825B8; } // 801825AC
  cmps(c,0,(int32_t)c->r[3],22); // 801825B0
  if (!crb(c,2)) { goto L_801825BC; } // 801825B4
L_801825B8:;
  c->r[9]=0u+0x00000001u; // 801825B8
L_801825BC:;
  c->r[0]=0u-c->r[9]; // 801825BC
  c->r[0]=c->r[0]|c->r[9]; // 801825C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801825C4
  c->r[0]=c->r[3]+0x00000001u; // 801825C8
  W32(c->r[8]+0x00000000u,c->r[0]); // 801825CC
  return; // 801825D0
}

// GXInitTexObj
void f_801825D4(Ctx* __restrict c) {
  trace_call(0x801825D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801825D4
  c->r[0]=c->lr; // 801825D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801825DC
  c->r[11]=c->r[1]+0x00000040u; // 801825E0
  c->lr=0x801825E8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801825E4
  c->r[27]=c->r[4]|c->r[4]; // 801825E8
  c->r[28]=c->r[5]|c->r[5]; // 801825EC
  c->r[31]=c->r[3]|c->r[3]; // 801825F0
  c->r[29]=c->r[6]|c->r[6]; // 801825F4
  c->r[30]=c->r[7]|c->r[7]; // 801825F8
  c->r[24]=c->r[8]|c->r[8]; // 801825FC
  c->r[25]=c->r[9]|c->r[9]; // 80182600
  c->r[26]=c->r[10]|c->r[10]; // 80182604
  c->r[4]=0u+0x00000000u; // 80182608
  c->r[5]=0u+0x00000020u; // 8018260C
  c->lr=0x80182614u; f_80004688(c); // 80182610
  c->r[0]=R32(c->r[31]+0x00000000u); // 80182614
  c->r[0]=(rotl(c->r[24],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 80182618
  c->r[0]=(rotl(c->r[25],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 8018261C
  cmps(c,0,(int32_t)c->r[26],0); // 80182620
  c->r[4]=c->r[0]|0x00000010u; // 80182624
  W32(c->r[31]+0x00000000u,c->r[4]); // 80182628
  if (crb(c,2)) { goto L_801826BC; } // 8018262C
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 80182630
  c->r[0]=c->r[30]+0xFFFFFFF8u; // 80182634
  cmpu(c,0,c->r[0],0x00000002u); // 80182638
  c->r[0]=c->r[3]|0x00000001u; // 8018263C
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 80182640
  if (crb(c,1)) { goto L_80182658; } // 80182644
  c->r[0]=0u+0x00000005u; // 80182648
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 8018264C
  W32(c->r[31]+0x00000000u,c->r[4]); // 80182650
  goto L_80182664; // 80182654
L_80182658:;
  c->r[0]=0u+0x00000006u; // 80182658
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 8018265C
  W32(c->r[31]+0x00000000u,c->r[4]); // 80182660
L_80182664:;
  cmpu(c,0,c->r[28],c->r[29]); // 80182664
  if (!crb(c,1)) { goto L_80182678; } // 80182668
  c->r[0]=cntlz(c->r[28]); // 8018266C
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 80182670
  goto L_80182680; // 80182674
L_80182678:;
  c->r[0]=cntlz(c->r[29]); // 80182678
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 8018267C
L_80182680:;
  c->r[0]=0u+0x43300000u; // 80182680
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80182684
  {uint32_t ea=c->r[2]+0xFFFF8E18u; c->f[2]=RF64(ea);} // 80182688
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018268C
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182690
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80182694
  c->r[0]=R32(c->r[31]+0x00000004u); // 80182698
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8018269C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801826A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801826A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801826A8
  c->r[3]=R32(c->r[1]+0x00000014u); // 801826AC
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801826B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801826B4
  goto L_801826C8; // 801826B8
L_801826BC:;
  c->r[0]=0u+0x00000004u; // 801826BC
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 801826C0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801826C4
L_801826C8:;
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 801826C8
  c->r[3]=R32(c->r[31]+0x00000008u); // 801826CC
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801826D0
  c->r[4]=rotl(c->r[30],0)&0x0000000Fu; // 801826D4
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 801826D8
  W32(c->r[31]+0x00000014u,c->r[30]); // 801826DC
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 801826E0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801826E4
  c->r[0]=(rotl(c->r[27],27)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 801826E8
  cmpu(c,0,c->r[4],0x0000000Eu); // 801826EC
  c->r[3]=(rotl(c->r[30],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 801826F0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801826F4
  W32(c->r[31]+0x00000008u,c->r[3]); // 801826F8
  if (crb(c,1)) { goto L_8018277C; } // 801826FC
  c->r[3]=0u+0x80330000u; // 80182700
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80182704
  c->r[3]=c->r[3]+0xFFFFFFB0u; // 80182708
  c->r[3]=R32(c->r[3]+c->r[0]); // 8018270C
  c->ctr=c->r[3]; // 80182710
  if (true) { switch (c->ctr) { case 0x80182718u: goto L_80182718; case 0x8018272Cu: goto L_8018272C; case 0x80182740u: goto L_80182740; case 0x80182754u: goto L_80182754; case 0x80182768u: goto L_80182768; case 0x8018277Cu: goto L_8018277C; default: break; } dispatch(c,c->ctr); return; } // 80182714
L_80182718:;
  c->r[0]=0u+0x00000001u; // 80182718
  c->r[6]=0u+0x00000003u; // 8018271C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80182720
  c->r[7]=0u+0x00000003u; // 80182724
  goto L_8018278C; // 80182728
L_8018272C:;
  c->r[0]=0u+0x00000002u; // 8018272C
  c->r[6]=0u+0x00000003u; // 80182730
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80182734
  c->r[7]=0u+0x00000002u; // 80182738
  goto L_8018278C; // 8018273C
L_80182740:;
  c->r[0]=0u+0x00000002u; // 80182740
  c->r[6]=0u+0x00000002u; // 80182744
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80182748
  c->r[7]=0u+0x00000002u; // 8018274C
  goto L_8018278C; // 80182750
L_80182754:;
  c->r[0]=0u+0x00000003u; // 80182754
  c->r[6]=0u+0x00000002u; // 80182758
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8018275C
  c->r[7]=0u+0x00000002u; // 80182760
  goto L_8018278C; // 80182764
L_80182768:;
  c->r[0]=0u+0x00000000u; // 80182768
  c->r[6]=0u+0x00000003u; // 8018276C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80182770
  c->r[7]=0u+0x00000003u; // 80182774
  goto L_8018278C; // 80182778
L_8018277C:;
  c->r[0]=0u+0x00000002u; // 8018277C
  c->r[6]=0u+0x00000002u; // 80182780
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80182784
  c->r[7]=0u+0x00000002u; // 80182788
L_8018278C:;
  c->r[5]=0u+0x00000001u; // 8018278C
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 80182790
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 80182794
  c->r[11]=c->r[1]+0x00000040u; // 80182798
  c->r[4]=c->r[28]+c->r[3]; // 8018279C
  c->r[0]=c->r[0]|0x00000002u; // 801827A0
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801827A4
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 801827A8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801827AC
  c->r[3]=c->r[29]+c->r[3]; // 801827B0
  c->r[4]=sraw(c,c->r[4],(c->r[6])&63); // 801827B4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801827B8
  c->r[0]=sraw(c,c->r[0],(c->r[7])&63); // 801827BC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801827C0
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801827C4
  W16(c->r[31]+0x0000001Cu,c->r[0]); // 801827C8
  c->lr=0x801827D0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801827CC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801827D0
  c->lr=c->r[0]; // 801827D4
  c->r[1]=c->r[1]+0x00000040u; // 801827D8
  return; // 801827DC
}

// GXInitTexObjCI
void f_801827E0(Ctx* __restrict c) {
  trace_call(0x801827E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801827E0
  c->r[0]=c->lr; // 801827E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801827E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801827EC
  c->r[31]=R32(c->r[1]+0x00000018u); // 801827F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801827F4
  c->r[30]=c->r[3]|c->r[3]; // 801827F8
  c->lr=0x80182800u; f_801825D4(c); // 801827FC
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 80182800
  W32(c->r[30]+0x00000018u,c->r[31]); // 80182804
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80182808
  W8(c->r[30]+0x0000001Fu,c->r[0]); // 8018280C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80182810
  c->r[30]=R32(c->r[1]+0x00000008u); // 80182814
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182818
  c->lr=c->r[0]; // 8018281C
  c->r[1]=c->r[1]+0x00000010u; // 80182820
  return; // 80182824
}

// GXInitTexObjLOD
void f_80182828(Ctx* __restrict c) {
  trace_call(0x80182828u);
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182828
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018282C
  fcmp(c,0,c->f[3],c->f[0]); // 80182830
  if (!crb(c,0)) { goto L_80182840; } // 80182834
  c->f[3]=c->f[0]; // 80182838
  goto L_80182854; // 8018283C
L_80182840:;
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182840
  fcmp(c,0,c->f[3],c->f[0]); // 80182844
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80182848
  if (!crb(c,2)) { goto L_80182854; } // 8018284C
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[3]=c->ps1[3]=RF32(ea);} // 80182850
L_80182854:;
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80182854
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80182858
  c->r[9]=cntlz(c->r[0]); // 8018285C
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182860
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80182864
  c->r[0]=cntlz(c->r[7]); // 80182868
  c->r[10]=R32(c->r[3]+0x00000000u); // 8018286C
  c->r[5]=c->r[13]+0xFFFF91F8u; // 80182870
  fcmp(c,0,c->f[1],c->f[0]); // 80182874
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80182878
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[3]);} // 8018287C
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80182880
  c->r[10]=(rotl(c->r[7],9)&0x0001FE00u)|(c->r[10]&~0x0001FE00u); // 80182884
  c->r[10]=(rotl(c->r[9],31)&0x00000010u)|(c->r[10]&~0x00000010u); // 80182888
  W32(c->r[3]+0x00000000u,c->r[10]); // 8018288C
  c->r[4]=R8(c->r[5]+c->r[4]); // 80182890
  c->r[10]=(rotl(c->r[4],5)&0x000000E0u)|(c->r[10]&~0x000000E0u); // 80182894
  c->r[10]=(rotl(c->r[0],3)&0x00000100u)|(c->r[10]&~0x00000100u); // 80182898
  c->r[0]=rotl(c->r[10],0)&0xFFF9FFFFu; // 8018289C
  c->r[0]=(rotl(c->r[8],19)&0x00180000u)|(c->r[0]&~0x00180000u); // 801828A0
  c->r[0]=(rotl(c->r[6],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 801828A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801828A8
  if (!crb(c,0)) { goto L_801828B8; } // 801828AC
  c->f[1]=c->f[0]; // 801828B0
  goto L_801828C8; // 801828B4
L_801828B8:;
  {uint32_t ea=c->r[2]+0xFFFF8E34u; c->f[0]=c->ps1[0]=RF32(ea);} // 801828B8
  fcmp(c,0,c->f[1],c->f[0]); // 801828BC
  if (!crb(c,1)) { goto L_801828C8; } // 801828C0
  c->f[1]=c->f[0]; // 801828C4
L_801828C8:;
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[3]=c->ps1[3]=RF32(ea);} // 801828C8
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801828CC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801828D0
  fcmp(c,0,c->f[2],c->f[0]); // 801828D4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801828D8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801828DC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801828E0
  if (!crb(c,0)) { goto L_801828F0; } // 801828E4
  c->f[2]=c->f[0]; // 801828E8
  goto L_80182900; // 801828EC
L_801828F0:;
  {uint32_t ea=c->r[2]+0xFFFF8E34u; c->f[0]=c->ps1[0]=RF32(ea);} // 801828F0
  fcmp(c,0,c->f[2],c->f[0]); // 801828F4
  if (!crb(c,1)) { goto L_80182900; } // 801828F8
  c->f[2]=c->f[0]; // 801828FC
L_80182900:;
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80182900
  c->r[0]=R32(c->r[3]+0x00000004u); // 80182904
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80182908
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8018290C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80182910
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80182914
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80182918
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8018291C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80182920
  c->r[1]=c->r[1]+0x00000010u; // 80182924
  return; // 80182928
}

// GXInitTexObjWrapMode
void f_8018292C(Ctx* __restrict c) {
  trace_call(0x8018292Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8018292C
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 80182930
  c->r[0]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 80182934
  W32(c->r[3]+0x00000000u,c->r[0]); // 80182938
  return; // 8018293C
}

// GXInitTexObjTlut
void f_80182940(Ctx* __restrict c) {
  trace_call(0x80182940u);
  W32(c->r[3]+0x00000018u,c->r[4]); // 80182940
  return; // 80182944
}

// GXInitTexObjFilter
void f_80182948(Ctx* __restrict c) {
  trace_call(0x80182948u);
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80182948
  c->r[6]=R32(c->r[3]+0x00000000u); // 8018294C
  c->r[0]=cntlz(c->r[0]); // 80182950
  c->r[5]=c->r[13]+0xFFFF91F8u; // 80182954
  c->r[6]=(rotl(c->r[0],31)&0x00000010u)|(c->r[6]&~0x00000010u); // 80182958
  W32(c->r[3]+0x00000000u,c->r[6]); // 8018295C
  c->r[0]=R8(c->r[5]+c->r[4]); // 80182960
  c->r[6]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[6]&~0x000000E0u); // 80182964
  W32(c->r[3]+0x00000000u,c->r[6]); // 80182968
  return; // 8018296C
}

// GXInitTexObjUserData
void f_80182970(Ctx* __restrict c) {
  trace_call(0x80182970u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 80182970
  return; // 80182974
}

// GXGetTexObjUserData
void f_80182978(Ctx* __restrict c) {
  trace_call(0x80182978u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80182978
  return; // 8018297C
}

// GXGetTexObjWidth
void f_80182980(Ctx* __restrict c) {
  trace_call(0x80182980u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 80182980
  c->r[3]=rotl(c->r[0],0)&0x000003FFu; // 80182984
  c->r[0]=c->r[3]+0x00000001u; // 80182988
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8018298C
  return; // 80182990
}

// GXGetTexObjHeight
void f_80182994(Ctx* __restrict c) {
  trace_call(0x80182994u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 80182994
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 80182998
  c->r[0]=c->r[3]+0x00000001u; // 8018299C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801829A0
  return; // 801829A4
}

// GXGetTexObjFmt
void f_801829A8(Ctx* __restrict c) {
  trace_call(0x801829A8u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 801829A8
  return; // 801829AC
}

// GXGetTexObjWrapS
void f_801829B0(Ctx* __restrict c) {
  trace_call(0x801829B0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801829B0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 801829B4
  return; // 801829B8
}

// GXGetTexObjWrapT
void f_801829BC(Ctx* __restrict c) {
  trace_call(0x801829BCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801829BC
  c->r[3]=rotl(c->r[0],30)&0x00000003u; // 801829C0
  return; // 801829C4
}

// GXGetTexObjMipMap
void f_801829C8(Ctx* __restrict c) {
  trace_call(0x801829C8u);
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 801829C8
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801829CC
  return; // 801829D0
}

// GXGetTexObjLODAll
void f_801829D4(Ctx* __restrict c) {
  trace_call(0x801829D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801829D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801829D8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801829DC
  c->r[31]=0u+0x43300000u; // 801829E0
  c->r[11]=rotl(c->r[0],0)&0x000000FFu; // 801829E4
  {uint32_t ea=c->r[2]+0xFFFF8E18u; c->f[5]=RF64(ea);} // 801829E8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801829EC
  {uint32_t ea=c->r[2]+0xFFFF8E38u; c->f[3]=c->ps1[3]=RF32(ea);} // 801829F0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801829F4
  c->r[29]=c->r[13]+0xFFFF9200u; // 801829F8
  {uint32_t ea=c->r[2]+0xFFFF8E40u; c->f[2]=RF64(ea);} // 801829FC
  W32(c->r[1]+0x00000020u,c->r[28]); // 80182A00
  c->r[28]=R32(c->r[3]+0x00000000u); // 80182A04
  c->r[3]=rotl(c->r[0],24)&0x000000FFu; // 80182A08
  W32(c->r[1]+0x0000000Cu,c->r[11]); // 80182A0C
  c->r[0]=rotl(c->r[28],23)&0x000000FFu; // 80182A10
  c->r[11]=rotl(c->r[28],27)&0x00000007u; // 80182A14
  W32(c->r[1]+0x00000008u,c->r[31]); // 80182A18
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80182A1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80182A20
  c->r[29]=R8(c->r[29]+c->r[11]); // 80182A24
  c->r[12]=c->r[0]^0x80000000u; // 80182A28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80182A2C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80182A30
  c->r[0]=rotl(c->r[28],24)&0x00000001u; // 80182A34
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 80182A38
  c->r[0]=cntlz(c->r[0]); // 80182A3C
  W32(c->r[1]+0x00000010u,c->r[31]); // 80182A40
  c->r[30]=rotl(c->r[28],28)&0x00000001u; // 80182A44
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 80182A48
  c->r[11]=rotl(c->r[28],11)&0x00000001u; // 80182A4C
  W32(c->r[4]+0x00000000u,c->r[29]); // 80182A50
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[3]); // 80182A54
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80182A58
  c->r[0]=rotl(c->r[28],13)&0x00000003u; // 80182A5C
  W32(c->r[5]+0x00000000u,c->r[30]); // 80182A60
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 80182A64
  {uint32_t ea=c->r[2]+0xFFFF8E3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80182A68
  W32(c->r[1]+0x0000001Cu,c->r[12]); // 80182A6C
  c->r[4]=R32(c->r[1]+0x00000038u); // 80182A70
  W32(c->r[1]+0x00000018u,c->r[31]); // 80182A74
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80182A78
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80182A7C
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[4]);} // 80182A80
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80182A84
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[3]);} // 80182A88
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80182A8C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 80182A90
  W8(c->r[9]+0x00000000u,c->r[11]); // 80182A94
  W8(c->r[10]+0x00000000u,c->r[3]); // 80182A98
  W32(c->r[4]+0x00000000u,c->r[0]); // 80182A9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80182AA0
  c->r[30]=R32(c->r[1]+0x00000028u); // 80182AA4
  c->r[29]=R32(c->r[1]+0x00000024u); // 80182AA8
  c->r[28]=R32(c->r[1]+0x00000020u); // 80182AAC
  c->r[1]=c->r[1]+0x00000030u; // 80182AB0
  return; // 80182AB4
}

// GXGetTexObjTlut
void f_80182AB8(Ctx* __restrict c) {
  trace_call(0x80182AB8u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80182AB8
  return; // 80182ABC
}

// GXLoadTexObjPreLoaded
void f_80182AC0(Ctx* __restrict c) {
  trace_call(0x80182AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182AC0
  c->r[0]=c->lr; // 80182AC4
  c->r[11]=c->r[13]+0xFFFF91C0u; // 80182AC8
  c->r[10]=c->r[13]+0xFFFF91C8u; // 80182ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80182AD0
  c->r[9]=c->r[13]+0xFFFF91D0u; // 80182AD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80182AD8
  c->r[8]=c->r[13]+0xFFFF91D8u; // 80182ADC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80182AE0
  c->r[7]=c->r[13]+0xFFFF91E0u; // 80182AE4
  c->r[6]=c->r[13]+0xFFFF91E8u; // 80182AE8
  c->r[31]=c->r[5]|c->r[5]; // 80182AEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80182AF0
  c->r[30]=c->r[3]|c->r[3]; // 80182AF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80182AF8
  c->r[29]=0u+0xCC010000u; // 80182AFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80182B00
  c->r[28]=0u+0x00000061u; // 80182B04
  c->r[0]=R8(c->r[11]+c->r[5]); // 80182B08
  c->r[11]=R32(c->r[3]+0x00000004u); // 80182B0C
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 80182B10
  c->r[0]=R8(c->r[10]+c->r[5]); // 80182B14
  c->r[10]=R8(c->r[9]+c->r[5]); // 80182B18
  c->r[11]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 80182B1C
  c->r[0]=R8(c->r[7]+c->r[5]); // 80182B20
  c->r[8]=R8(c->r[8]+c->r[5]); // 80182B24
  c->r[5]=R8(c->r[6]+c->r[5]); // 80182B28
  c->r[9]=R32(c->r[3]+0x00000008u); // 80182B2C
  c->r[9]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 80182B30
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80182B34
  c->r[7]=R32(c->r[4]+0x00000000u); // 80182B38
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80182B3C
  W32(c->r[29]+0xFFFF8000u,c->r[12]); // 80182B40
  c->r[6]=R32(c->r[4]+0x00000004u); // 80182B44
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80182B48
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80182B4C
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 80182B50
  W32(c->r[29]+0xFFFF8000u,c->r[11]); // 80182B54
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80182B58
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80182B5C
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80182B60
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80182B64
  W32(c->r[29]+0xFFFF8000u,c->r[9]); // 80182B68
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80182B6C
  W32(c->r[29]+0xFFFF8000u,c->r[7]); // 80182B70
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80182B74
  W32(c->r[29]+0xFFFF8000u,c->r[6]); // 80182B78
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80182B7C
  W32(c->r[3]+0x00000000u,c->r[12]); // 80182B80
  W32(c->r[3]+0x00000004u,c->r[11]); // 80182B84
  W32(c->r[3]+0x00000008u,c->r[9]); // 80182B88
  W32(c->r[4]+0x00000000u,c->r[7]); // 80182B8C
  W32(c->r[4]+0x00000004u,c->r[6]); // 80182B90
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80182B94
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 80182B98
  if (!crb(c,2)) { goto L_80182BD4; } // 80182B9C
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80182BA0
  c->r[3]=R32(c->r[3]+0x00000018u); // 80182BA4
  c->r[12]=R32(c->r[4]+0x0000051Cu); // 80182BA8
  c->ctr=c->r[12]; // 80182BAC
  if (true) { c->lr=0x80182BB4u; dispatch(c,c->ctr); } // 80182BB0
  c->r[4]=c->r[13]+0xFFFF91F0u; // 80182BB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80182BB8
  c->r[4]=R8(c->r[4]+c->r[31]); // 80182BBC
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80182BC0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80182BC4
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80182BC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80182BCC
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 80182BD0
L_80182BD4:;
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 80182BD4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80182BD8
  c->r[5]=R32(c->r[30]+0x00000008u); // 80182BDC
  c->r[0]=0u+0x00000000u; // 80182BE0
  c->r[4]=c->r[6]+c->r[3]; // 80182BE4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80182BE8
  W32(c->r[4]+0x00000564u,c->r[5]); // 80182BEC
  W32(c->r[4]+0x00000584u,c->r[3]); // 80182BF0
  c->r[3]=R32(c->r[6]+0x000005FCu); // 80182BF4
  c->r[3]=c->r[3]|0x00000001u; // 80182BF8
  W32(c->r[6]+0x000005FCu,c->r[3]); // 80182BFC
  W16(c->r[6]+0x00000002u,c->r[0]); // 80182C00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80182C04
  c->r[30]=R32(c->r[1]+0x00000018u); // 80182C08
  c->r[29]=R32(c->r[1]+0x00000014u); // 80182C0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80182C10
  c->r[0]=R32(c->r[1]+0x00000024u); // 80182C14
  c->lr=c->r[0]; // 80182C18
  c->r[1]=c->r[1]+0x00000020u; // 80182C1C
  return; // 80182C20
}

// GXLoadTexObj
void f_80182C24(Ctx* __restrict c) {
  trace_call(0x80182C24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182C24
  c->r[0]=c->lr; // 80182C28
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80182C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182C30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80182C34
  c->r[31]=c->r[4]|c->r[4]; // 80182C38
  W32(c->r[1]+0x00000008u,c->r[30]); // 80182C3C
  c->r[30]=c->r[3]|c->r[3]; // 80182C40
  c->r[12]=R32(c->r[5]+0x00000518u); // 80182C44
  c->ctr=c->r[12]; // 80182C48
  if (true) { c->lr=0x80182C50u; dispatch(c,c->ctr); } // 80182C4C
  c->r[4]=c->r[3]|c->r[3]; // 80182C50
  c->r[3]=c->r[30]|c->r[30]; // 80182C54
  c->r[5]=c->r[31]|c->r[31]; // 80182C58
  c->lr=0x80182C60u; f_80182AC0(c); // 80182C5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182C60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80182C64
  c->r[30]=R32(c->r[1]+0x00000008u); // 80182C68
  c->lr=c->r[0]; // 80182C6C
  c->r[1]=c->r[1]+0x00000010u; // 80182C70
  return; // 80182C74
}

// GXInitTlutObj
void f_80182C78(Ctx* __restrict c) {
  trace_call(0x80182C78u);
  c->r[7]=R32(c->r[3]+0x00000004u); // 80182C78
  c->r[0]=0u+0x00000064u; // 80182C7C
  c->r[7]=(rotl(c->r[4],27)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 80182C80
  c->r[4]=0u+0x00000000u; // 80182C84
  c->r[4]=(rotl(c->r[5],10)&0x00000C00u)|(c->r[4]&~0x00000C00u); // 80182C88
  W16(c->r[3]+0x00000008u,c->r[6]); // 80182C8C
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80182C90
  W32(c->r[3]+0x00000000u,c->r[4]); // 80182C94
  W32(c->r[3]+0x00000004u,c->r[7]); // 80182C98
  return; // 80182C9C
}

// GXLoadTlut
void f_80182CA0(Ctx* __restrict c) {
  trace_call(0x80182CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182CA0
  c->r[0]=c->lr; // 80182CA4
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80182CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80182CB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80182CB4
  c->r[30]=c->r[3]|c->r[3]; // 80182CB8
  c->r[3]=c->r[4]|c->r[4]; // 80182CBC
  c->r[12]=R32(c->r[5]+0x0000051Cu); // 80182CC0
  c->ctr=c->r[12]; // 80182CC4
  if (true) { c->lr=0x80182CCCu; dispatch(c,c->ctr); } // 80182CC8
  c->r[31]=c->r[3]|c->r[3]; // 80182CCC
  c->lr=0x80182CD4u; f_801837EC(c); // 80182CD0
  c->r[3]=0u+0xCC010000u; // 80182CD4
  c->r[4]=0u+0x00000061u; // 80182CD8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80182CDC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80182CE0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80182CE4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80182CE8
  c->r[0]=R32(c->r[31]+0x00000000u); // 80182CEC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80182CF0
  c->lr=0x80182CF8u; f_801837EC(c); // 80182CF4
  c->r[0]=R32(c->r[31]+0x00000000u); // 80182CF8
  c->r[4]=R32(c->r[30]+0x00000000u); // 80182CFC
  c->r[4]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 80182D00
  c->r[3]=R32(c->r[30]+0x00000004u); // 80182D04
  W32(c->r[31]+0x00000004u,c->r[4]); // 80182D08
  c->r[0]=R32(c->r[30]+0x00000008u); // 80182D0C
  W32(c->r[31]+0x00000008u,c->r[3]); // 80182D10
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80182D14
  W32(c->r[30]+0x00000000u,c->r[4]); // 80182D18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80182D1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80182D20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182D24
  c->lr=c->r[0]; // 80182D28
  c->r[1]=c->r[1]+0x00000010u; // 80182D2C
  return; // 80182D30
}

// GXInitTexCacheRegion
void f_80182D34(Ctx* __restrict c) {
  trace_call(0x80182D34u);
  cmps(c,0,(int32_t)c->r[6],1); // 80182D34
  if (crb(c,2)) { goto L_80182D60; } // 80182D38
  if (!crb(c,0)) { goto L_80182D4C; } // 80182D3C
  cmps(c,0,(int32_t)c->r[6],0); // 80182D40
  if (!crb(c,0)) { goto L_80182D58; } // 80182D44
  goto L_80182D6C; // 80182D48
L_80182D4C:;
  cmps(c,0,(int32_t)c->r[6],3); // 80182D4C
  if (!crb(c,0)) { goto L_80182D6C; } // 80182D50
  goto L_80182D68; // 80182D54
L_80182D58:;
  c->r[6]=0u+0x00000003u; // 80182D58
  goto L_80182D6C; // 80182D5C
L_80182D60:;
  c->r[6]=0u+0x00000004u; // 80182D60
  goto L_80182D6C; // 80182D64
L_80182D68:;
  c->r[6]=0u+0x00000005u; // 80182D68
L_80182D6C:;
  c->r[0]=0u+0x00000000u; // 80182D6C
  cmps(c,0,(int32_t)c->r[8],2); // 80182D70
  c->r[0]=(rotl(c->r[5],27)&0x00007FFFu)|(c->r[0]&~0x00007FFFu); // 80182D74
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80182D78
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 80182D7C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80182D80
  if (crb(c,2)) { goto L_80182DB8; } // 80182D84
  if (!crb(c,0)) { goto L_80182D9C; } // 80182D88
  cmps(c,0,(int32_t)c->r[8],0); // 80182D8C
  if (crb(c,2)) { goto L_80182DA8; } // 80182D90
  if (!crb(c,0)) { goto L_80182DB0; } // 80182D94
  goto L_80182DC4; // 80182D98
L_80182D9C:;
  cmps(c,0,(int32_t)c->r[8],4); // 80182D9C
  if (!crb(c,0)) { goto L_80182DC4; } // 80182DA0
  goto L_80182DC0; // 80182DA4
L_80182DA8:;
  c->r[6]=0u+0x00000003u; // 80182DA8
  goto L_80182DC4; // 80182DAC
L_80182DB0:;
  c->r[6]=0u+0x00000004u; // 80182DB0
  goto L_80182DC4; // 80182DB4
L_80182DB8:;
  c->r[6]=0u+0x00000005u; // 80182DB8
  goto L_80182DC4; // 80182DBC
L_80182DC0:;
  c->r[6]=0u+0x00000000u; // 80182DC0
L_80182DC4:;
  c->r[5]=0u+0x00000000u; // 80182DC4
  c->r[0]=0u+0x00000001u; // 80182DC8
  c->r[5]=(rotl(c->r[7],27)&0x00007FFFu)|(c->r[5]&~0x00007FFFu); // 80182DCC
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 80182DD0
  c->r[5]=(rotl(c->r[6],15)&0x00038000u)|(c->r[5]&~0x00038000u); // 80182DD4
  c->r[5]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[5]&~0x001C0000u); // 80182DD8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 80182DDC
  W32(c->r[3]+0x00000004u,c->r[5]); // 80182DE0
  return; // 80182DE4
}

// GXInitTlutRegion
void f_80182DE8(Ctx* __restrict c) {
  trace_call(0x80182DE8u);
  c->r[0]=c->r[4]+0xFFF80000u; // 80182DE8
  c->r[4]=0u+0x00000000u; // 80182DEC
  c->r[4]=(rotl(c->r[0],23)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 80182DF0
  c->r[0]=0u+0x00000065u; // 80182DF4
  c->r[4]=(rotl(c->r[5],10)&0x001FFC00u)|(c->r[4]&~0x001FFC00u); // 80182DF8
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80182DFC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80182E00
  return; // 80182E04
}

// GXInvalidateTexAll
void f_80182E08(Ctx* __restrict c) {
  trace_call(0x80182E08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182E08
  c->r[0]=c->lr; // 80182E0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80182E10
  c->lr=0x80182E18u; f_801837EC(c); // 80182E14
  c->r[4]=0u+0xCC010000u; // 80182E18
  c->r[5]=0u+0x00000061u; // 80182E1C
  c->r[3]=0u+0x66000000u; // 80182E20
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80182E24
  c->r[0]=c->r[3]+0x00001000u; // 80182E28
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80182E2C
  c->r[0]=c->r[3]+0x00001100u; // 80182E30
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80182E34
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80182E38
  c->lr=0x80182E40u; f_801837EC(c); // 80182E3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80182E40
  c->lr=c->r[0]; // 80182E44
  c->r[1]=c->r[1]+0x00000010u; // 80182E48
  return; // 80182E4C
}

// GXSetTexRegionCallback
void f_80182E50(Ctx* __restrict c) {
  trace_call(0x80182E50u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80182E50
  c->r[0]=c->r[3]|c->r[3]; // 80182E54
  c->r[3]=R32(c->r[4]+0x00000518u); // 80182E58
  W32(c->r[4]+0x00000518u,c->r[0]); // 80182E5C
  return; // 80182E60
}

// GXSetTlutRegionCallback
void f_80182E64(Ctx* __restrict c) {
  trace_call(0x80182E64u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80182E64
  c->r[0]=c->r[3]|c->r[3]; // 80182E68
  c->r[3]=R32(c->r[4]+0x0000051Cu); // 80182E6C
  W32(c->r[4]+0x0000051Cu,c->r[0]); // 80182E70
  return; // 80182E74
}

// __SetSURegs
void f_80182E78(Ctx* __restrict c) {
  trace_call(0x80182E78u);
  c->r[11]=R32(c->r[2]+0xFFFF8DA0u); // 80182E78
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80182E7C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80182E80
  c->r[5]=0u+0xCC010000u; // 80182E84
  c->r[10]=c->r[11]+c->r[0]; // 80182E88
  c->r[9]=c->r[11]+c->r[6]; // 80182E8C
  c->r[3]=R32(c->r[10]+0x00000564u); // 80182E90
  c->r[4]=0u+0x00000061u; // 80182E94
  c->r[8]=R32(c->r[9]+0x00000108u); // 80182E98
  c->r[0]=0u+0x00000000u; // 80182E9C
  c->r[6]=rotl(c->r[3],0)&0x000003FFu; // 80182EA0
  c->r[3]=rotl(c->r[3],22)&0x000003FFu; // 80182EA4
  c->r[8]=(rotl(c->r[6],0)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 80182EA8
  W32(c->r[9]+0x00000108u,c->r[8]); // 80182EAC
  c->r[7]=R32(c->r[9]+0x00000128u); // 80182EB0
  c->r[7]=(rotl(c->r[3],0)&0x0000FFFFu)|(c->r[7]&~0x0000FFFFu); // 80182EB4
  W32(c->r[9]+0x00000128u,c->r[7]); // 80182EB8
  c->r[3]=R32(c->r[10]+0x00000584u); // 80182EBC
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 80182EC0
  c->r[3]=rotl(c->r[3],30)&0x00000003u; // 80182EC4
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80182EC8
  c->r[6]=cntlz(c->r[6]); // 80182ECC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80182ED0
  c->r[8]=(rotl(c->r[6],11)&0x00010000u)|(c->r[8]&~0x00010000u); // 80182ED4
  c->r[3]=cntlz(c->r[3]); // 80182ED8
  W32(c->r[9]+0x00000108u,c->r[8]); // 80182EDC
  c->r[7]=(rotl(c->r[3],11)&0x00010000u)|(c->r[7]&~0x00010000u); // 80182EE0
  W32(c->r[9]+0x00000128u,c->r[7]); // 80182EE4
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 80182EE8
  c->r[3]=R32(c->r[9]+0x00000108u); // 80182EEC
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80182EF0
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 80182EF4
  c->r[3]=R32(c->r[9]+0x00000128u); // 80182EF8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80182EFC
  W16(c->r[11]+0x00000002u,c->r[0]); // 80182F00
  return; // 80182F04
}

// __GXSetSUTexRegs
void f_80182F08(Ctx* __restrict c) {
  trace_call(0x80182F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80182F08
  c->r[0]=c->lr; // 80182F0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80182F10
  c->r[11]=c->r[1]+0x00000030u; // 80182F14
  c->lr=0x80182F1Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80182F18
  c->r[29]=R32(c->r[2]+0xFFFF8DA0u); // 80182F1C
  c->r[0]=R32(c->r[29]+0x000005E4u); // 80182F20
  cmpu(c,0,c->r[0],0x000000FFu); // 80182F24
  if (crb(c,2)) { goto L_80183058; } // 80182F28
  c->r[0]=R32(c->r[29]+0x00000254u); // 80182F2C
  c->r[28]=0u+0x00000000u; // 80182F30
  c->r[23]=0u+0x00000001u; // 80182F34
  c->r[3]=rotl(c->r[0],22)&0x0000000Fu; // 80182F38
  c->r[27]=rotl(c->r[0],16)&0x00000007u; // 80182F3C
  c->r[26]=c->r[3]+0x00000001u; // 80182F40
  goto L_80182FCC; // 80182F44
L_80182F48:;
  cmps(c,0,(int32_t)c->r[28],2); // 80182F48
  if (crb(c,2)) { goto L_80182F90; } // 80182F4C
  if (!crb(c,0)) { goto L_80182F64; } // 80182F50
  cmps(c,0,(int32_t)c->r[28],0); // 80182F54
  if (crb(c,2)) { goto L_80182F70; } // 80182F58
  if (!crb(c,0)) { goto L_80182F80; } // 80182F5C
  goto L_80182FAC; // 80182F60
L_80182F64:;
  cmps(c,0,(int32_t)c->r[28],4); // 80182F64
  if (!crb(c,0)) { goto L_80182FAC; } // 80182F68
  goto L_80182FA0; // 80182F6C
L_80182F70:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80182F70
  c->r[25]=rotl(c->r[0],0)&0x00000007u; // 80182F74
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 80182F78
  goto L_80182FAC; // 80182F7C
L_80182F80:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80182F80
  c->r[25]=rotl(c->r[0],26)&0x00000007u; // 80182F84
  c->r[24]=rotl(c->r[0],23)&0x00000007u; // 80182F88
  goto L_80182FAC; // 80182F8C
L_80182F90:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80182F90
  c->r[25]=rotl(c->r[0],20)&0x00000007u; // 80182F94
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 80182F98
  goto L_80182FAC; // 80182F9C
L_80182FA0:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80182FA0
  c->r[25]=rotl(c->r[0],14)&0x00000007u; // 80182FA4
  c->r[24]=rotl(c->r[0],11)&0x00000007u; // 80182FA8
L_80182FAC:;
  c->r[3]=R32(c->r[29]+0x000005E4u); // 80182FAC
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 80182FB0
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80182FB4
  if (!crb(c,2)) { goto L_80182FC8; } // 80182FB8
  c->r[3]=c->r[25]|c->r[25]; // 80182FBC
  c->r[4]=c->r[24]|c->r[24]; // 80182FC0
  c->lr=0x80182FC8u; f_80182E78(c); // 80182FC4
L_80182FC8:;
  c->r[28]=c->r[28]+0x00000001u; // 80182FC8
L_80182FCC:;
  cmpu(c,0,c->r[28],c->r[27]); // 80182FCC
  if (crb(c,0)) { IRQCHK(c); goto L_80182F48; } // 80182FD0
  c->r[28]=R32(c->r[2]+0xFFFF8DA0u); // 80182FD4
  c->r[27]=0u+0x00000000u; // 80182FD8
  c->r[23]=0u+0x00000001u; // 80182FDC
  c->r[31]=c->r[28]|c->r[28]; // 80182FE0
  c->r[30]=c->r[28]+0x00000150u; // 80182FE4
  goto L_80183050; // 80182FE8
L_80182FEC:;
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 80182FEC
  c->r[0]=R32(c->r[31]+0x000005A4u); // 80182FF0
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFCu; // 80182FF4
  c->r[25]=rotl(c->r[0],0)&0xFFFFFEFFu; // 80182FF8
  if (crb(c,2)) { goto L_8018300C; } // 80182FFC
  c->r[0]=R32(c->r[30]+c->r[3]); // 80183000
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 80183004
  goto L_80183014; // 80183008
L_8018300C:;
  c->r[0]=R32(c->r[30]+c->r[3]); // 8018300C
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 80183010
L_80183014:;
  cmpu(c,0,c->r[25],0x000000FFu); // 80183014
  if (crb(c,2)) { goto L_80183048; } // 80183018
  c->r[3]=R32(c->r[29]+0x000005E4u); // 8018301C
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 80183020
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80183024
  if (!crb(c,2)) { goto L_80183048; } // 80183028
  c->r[3]=R32(c->r[28]+0x000005E8u); // 8018302C
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[23]<<((c->r[27])&31)); // 80183030
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80183034
  if (crb(c,2)) { goto L_80183048; } // 80183038
  c->r[3]=c->r[25]|c->r[25]; // 8018303C
  c->r[4]=c->r[24]|c->r[24]; // 80183040
  c->lr=0x80183048u; f_80182E78(c); // 80183044
L_80183048:;
  c->r[31]=c->r[31]+0x00000004u; // 80183048
  c->r[27]=c->r[27]+0x00000001u; // 8018304C
L_80183050:;
  cmpu(c,0,c->r[27],c->r[26]); // 80183050
  if (crb(c,0)) { IRQCHK(c); goto L_80182FEC; } // 80183054
L_80183058:;
  c->r[11]=c->r[1]+0x00000030u; // 80183058
  c->lr=0x80183060u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018305C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80183060
  c->lr=c->r[0]; // 80183064
  c->r[1]=c->r[1]+0x00000030u; // 80183068
  return; // 8018306C
}

// __GXSetTmemConfig
void f_80183070(Ctx* __restrict c) {
  trace_call(0x80183070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183070
  cmps(c,0,(int32_t)c->r[3],1); // 80183074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80183078
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018307C
  if (crb(c,2)) { goto L_801831A0; } // 80183080
  if (!crb(c,0)) { goto L_8018308C; } // 80183084
  goto L_801832AC; // 80183088
L_8018308C:;
  cmps(c,0,(int32_t)c->r[3],3); // 8018308C
  if (!crb(c,0)) { goto L_801832AC; } // 80183090
  c->r[3]=0u+0xCC010000u; // 80183094
  c->r[0]=0u+0x00000061u; // 80183098
  c->r[4]=0u+0x8C0E0000u; // 8018309C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801830A0
  c->r[4]=c->r[4]+0xFFFF8000u; // 801830A4
  c->r[5]=0u+0x900E0000u; // 801830A8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801830AC
  c->r[4]=0u+0x8D0E0000u; // 801830B0
  c->r[31]=0u+0x910E0000u; // 801830B4
  c->r[30]=0u+0x8E0E0000u; // 801830B8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801830BC
  c->r[5]=c->r[5]+0xFFFFC000u; // 801830C0
  c->r[12]=0u+0x920E0000u; // 801830C4
  c->r[11]=0u+0x8F0E0000u; // 801830C8
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801830CC
  c->r[10]=0u+0x930E0000u; // 801830D0
  c->r[9]=0u+0xAC0E0000u; // 801830D4
  c->r[8]=0u+0xB00E0000u; // 801830D8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801830DC
  c->r[4]=c->r[4]+0xFFFF8800u; // 801830E0
  c->r[7]=0u+0xAD0E0000u; // 801830E4
  c->r[6]=0u+0xB10E0000u; // 801830E8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801830EC
  c->r[5]=0u+0xAE0E0000u; // 801830F0
  c->r[4]=0u+0xB20E0000u; // 801830F4
  c->r[31]=c->r[31]+0xFFFFC800u; // 801830F8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801830FC
  c->r[30]=c->r[30]+0xFFFF9000u; // 80183100
  c->r[12]=c->r[12]+0xFFFFD000u; // 80183104
  c->r[11]=c->r[11]+0xFFFF9800u; // 80183108
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8018310C
  c->r[10]=c->r[10]+0xFFFFD800u; // 80183110
  c->r[9]=c->r[9]+0xFFFFA000u; // 80183114
  c->r[8]=c->r[8]+0xFFFFC400u; // 80183118
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018311C
  c->r[7]=c->r[7]+0xFFFFA800u; // 80183120
  c->r[6]=c->r[6]+0xFFFFCC00u; // 80183124
  c->r[5]=c->r[5]+0xFFFFB000u; // 80183128
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 8018312C
  c->r[4]=c->r[4]+0xFFFFD400u; // 80183130
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183134
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 80183138
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018313C
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 80183140
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183144
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 80183148
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018314C
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 80183150
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183154
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 80183158
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018315C
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 80183160
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183164
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80183168
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018316C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80183170
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183174
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80183178
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018317C
  c->r[5]=0u+0xAF0E0000u; // 80183180
  c->r[4]=0u+0xB30E0000u; // 80183184
  c->r[5]=c->r[5]+0xFFFFB800u; // 80183188
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8018318C
  c->r[4]=c->r[4]+0xFFFFDC00u; // 80183190
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183194
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80183198
  goto L_801833B4; // 8018319C
L_801831A0:;
  c->r[3]=0u+0xCC010000u; // 801831A0
  c->r[0]=0u+0x00000061u; // 801831A4
  c->r[4]=0u+0x8C0E0000u; // 801831A8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801831AC
  c->r[4]=c->r[4]+0xFFFF8000u; // 801831B0
  c->r[5]=0u+0x900E0000u; // 801831B4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801831B8
  c->r[4]=0u+0x8D0E0000u; // 801831BC
  c->r[31]=0u+0x910E0000u; // 801831C0
  c->r[30]=0u+0x8E0E0000u; // 801831C4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801831C8
  c->r[5]=c->r[5]+0xFFFFC000u; // 801831CC
  c->r[12]=0u+0x920E0000u; // 801831D0
  c->r[11]=0u+0x8F0E0000u; // 801831D4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801831D8
  c->r[10]=0u+0x930E0000u; // 801831DC
  c->r[9]=0u+0xAC0E0000u; // 801831E0
  c->r[8]=0u+0xB00E0000u; // 801831E4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801831E8
  c->r[4]=c->r[4]+0xFFFF8800u; // 801831EC
  c->r[7]=0u+0xAD0E0000u; // 801831F0
  c->r[6]=0u+0xB10E0000u; // 801831F4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801831F8
  c->r[5]=0u+0xAE0E0000u; // 801831FC
  c->r[4]=0u+0xB20E0000u; // 80183200
  c->r[31]=c->r[31]+0xFFFFC800u; // 80183204
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183208
  c->r[30]=c->r[30]+0xFFFF9000u; // 8018320C
  c->r[12]=c->r[12]+0xFFFFD000u; // 80183210
  c->r[11]=c->r[11]+0xFFFF9800u; // 80183214
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80183218
  c->r[10]=c->r[10]+0xFFFFD800u; // 8018321C
  c->r[9]=c->r[9]+0xFFFFA000u; // 80183220
  c->r[8]=c->r[8]+0xFFFFE000u; // 80183224
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183228
  c->r[7]=c->r[7]+0xFFFFA800u; // 8018322C
  c->r[6]=c->r[6]+0xFFFFE800u; // 80183230
  c->r[5]=c->r[5]+0xFFFFB000u; // 80183234
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 80183238
  c->r[4]=c->r[4]+0xFFFFF000u; // 8018323C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183240
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 80183244
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183248
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8018324C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183250
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 80183254
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183258
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 8018325C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183260
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 80183264
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183268
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 8018326C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183270
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80183274
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183278
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8018327C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183280
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80183284
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183288
  c->r[5]=0u+0xAF0E0000u; // 8018328C
  c->r[4]=0u+0xB30E0000u; // 80183290
  c->r[5]=c->r[5]+0xFFFFB800u; // 80183294
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80183298
  c->r[4]=c->r[4]+0xFFFFF800u; // 8018329C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801832A0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801832A4
  goto L_801833B4; // 801832A8
L_801832AC:;
  c->r[3]=0u+0xCC010000u; // 801832AC
  c->r[0]=0u+0x00000061u; // 801832B0
  c->r[4]=0u+0x8C0E0000u; // 801832B4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801832B8
  c->r[4]=c->r[4]+0xFFFF8000u; // 801832BC
  c->r[5]=0u+0x900E0000u; // 801832C0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801832C4
  c->r[4]=0u+0x8D0E0000u; // 801832C8
  c->r[30]=0u+0x910E0000u; // 801832CC
  c->r[31]=0u+0x8E0E0000u; // 801832D0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801832D4
  c->r[5]=c->r[5]+0xFFFFC000u; // 801832D8
  c->r[12]=0u+0x920E0000u; // 801832DC
  c->r[11]=0u+0x8F0E0000u; // 801832E0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801832E4
  c->r[10]=0u+0x930E0000u; // 801832E8
  c->r[9]=0u+0xAC0E0000u; // 801832EC
  c->r[8]=0u+0xB00E0000u; // 801832F0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801832F4
  c->r[4]=c->r[4]+0xFFFF8400u; // 801832F8
  c->r[7]=0u+0xAD0E0000u; // 801832FC
  c->r[6]=0u+0xB10E0000u; // 80183300
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80183304
  c->r[5]=0u+0xAE0E0000u; // 80183308
  c->r[4]=0u+0xB20E0000u; // 8018330C
  c->r[30]=c->r[30]+0xFFFFC400u; // 80183310
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183314
  c->r[31]=c->r[31]+0xFFFF8800u; // 80183318
  c->r[12]=c->r[12]+0xFFFFC800u; // 8018331C
  c->r[11]=c->r[11]+0xFFFF8C00u; // 80183320
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 80183324
  c->r[10]=c->r[10]+0xFFFFCC00u; // 80183328
  c->r[9]=c->r[9]+0xFFFF9000u; // 8018332C
  c->r[8]=c->r[8]+0xFFFFD000u; // 80183330
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183334
  c->r[7]=c->r[7]+0xFFFF9400u; // 80183338
  c->r[6]=c->r[6]+0xFFFFD400u; // 8018333C
  c->r[5]=c->r[5]+0xFFFF9800u; // 80183340
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80183344
  c->r[4]=c->r[4]+0xFFFFD800u; // 80183348
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018334C
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 80183350
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183354
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 80183358
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018335C
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 80183360
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183364
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 80183368
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018336C
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 80183370
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183374
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 80183378
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018337C
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80183380
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183384
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80183388
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018338C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80183390
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183394
  c->r[5]=0u+0xAF0E0000u; // 80183398
  c->r[4]=0u+0xB30E0000u; // 8018339C
  c->r[5]=c->r[5]+0xFFFF9C00u; // 801833A0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801833A4
  c->r[4]=c->r[4]+0xFFFFDC00u; // 801833A8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801833AC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801833B0
L_801833B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801833B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801833B8
  c->r[1]=c->r[1]+0x00000010u; // 801833BC
  return; // 801833C0
}

// GXSetTevIndirect
void f_801833C4(Ctx* __restrict c) {
  trace_call(0x801833C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801833C4
  c->r[12]=0u+0x00000000u; // 801833C8
  c->r[12]=(rotl(c->r[4],0)&0x00000003u)|(c->r[12]&~0x00000003u); // 801833CC
  c->r[4]=c->r[3]+0x00000010u; // 801833D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801833D4
  c->r[12]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[12]&~0x0000000Cu); // 801833D8
  c->r[11]=0u+0xCC010000u; // 801833DC
  c->r[0]=0u+0x00000061u; // 801833E0
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801833E4
  c->r[12]=(rotl(c->r[6],4)&0x00000070u)|(c->r[12]&~0x00000070u); // 801833E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801833EC
  c->r[0]=0u+0x00000000u; // 801833F0
  c->r[5]=R8(c->r[1]+0x0000001Bu); // 801833F4
  c->r[12]=(rotl(c->r[31],7)&0x00000180u)|(c->r[12]&~0x00000180u); // 801833F8
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801833FC
  c->r[12]=(rotl(c->r[7],9)&0x00001E00u)|(c->r[12]&~0x00001E00u); // 80183400
  c->r[12]=(rotl(c->r[8],13)&0x0000E000u)|(c->r[12]&~0x0000E000u); // 80183404
  c->r[12]=(rotl(c->r[9],16)&0x00070000u)|(c->r[12]&~0x00070000u); // 80183408
  c->r[12]=(rotl(c->r[5],19)&0x00080000u)|(c->r[12]&~0x00080000u); // 8018340C
  c->r[12]=(rotl(c->r[10],20)&0x00100000u)|(c->r[12]&~0x00100000u); // 80183410
  c->r[12]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 80183414
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 80183418
  W16(c->r[3]+0x00000002u,c->r[0]); // 8018341C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80183420
  c->r[1]=c->r[1]+0x00000010u; // 80183424
  return; // 80183428
}

// GXSetIndTexMtx
void f_8018342C(Ctx* __restrict c) {
  trace_call(0x8018342Cu);
  cmps(c,0,(int32_t)c->r[3],8); // 8018342C
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183430
  if (crb(c,2)) { goto L_80183478; } // 80183434
  if (!crb(c,0)) { goto L_80183454; } // 80183438
  cmps(c,0,(int32_t)c->r[3],4); // 8018343C
  if (crb(c,2)) { goto L_80183478; } // 80183440
  if (!crb(c,0)) { goto L_80183468; } // 80183444
  cmps(c,0,(int32_t)c->r[3],1); // 80183448
  if (!crb(c,0)) { goto L_80183460; } // 8018344C
  goto L_80183478; // 80183450
L_80183454:;
  cmps(c,0,(int32_t)c->r[3],12); // 80183454
  if (!crb(c,0)) { goto L_80183478; } // 80183458
  goto L_80183470; // 8018345C
L_80183460:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80183460
  goto L_8018347C; // 80183464
L_80183468:;
  c->r[3]=c->r[3]+0xFFFFFFFBu; // 80183468
  goto L_8018347C; // 8018346C
L_80183470:;
  c->r[3]=c->r[3]+0xFFFFFFF7u; // 80183470
  goto L_8018347C; // 80183474
L_80183478:;
  c->r[3]=0u+0x00000000u; // 80183478
L_8018347C:;
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[6]=c->ps1[6]=RF32(ea);} // 8018347C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183480
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183484
  c->r[9]=c->r[0]-c->r[3]; // 80183488
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8018348C
  c->r[8]=c->r[5]+0x00000011u; // 80183490
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 80183494
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80183498
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 8018349C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801834A0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 801834A4
  c->r[6]=0u+0xCC010000u; // 801834A8
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801834AC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801834B0
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801834B4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801834B8
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 801834BC
  c->r[7]=0u+0x00000061u; // 801834C0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[5]);} // 801834C4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801834C8
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 801834CC
  c->r[5]=0u+0x00000000u; // 801834D0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801834D4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801834D8
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 801834DC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801834E0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 801834E4
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 801834E8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801834EC
  c->r[3]=c->r[9]+0x00000006u; // 801834F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801834F4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 801834F8
  c->r[4]=0u+0x00000000u; // 801834FC
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 80183500
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80183504
  c->r[5]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 80183508
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8018350C
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80183510
  c->r[4]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 80183514
  c->r[3]=c->r[9]+0x00000007u; // 80183518
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 8018351C
  c->r[5]=0u+0x00000000u; // 80183520
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 80183524
  c->r[0]=R32(c->r[1]+0x00000024u); // 80183528
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8018352C
  c->r[4]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[4]&~0x003FF800u); // 80183530
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80183534
  c->r[4]=(rotl(c->r[8],20)&0x00C00000u)|(c->r[4]&~0x00C00000u); // 80183538
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8018353C
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80183540
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 80183544
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80183548
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 8018354C
  c->r[4]=c->r[9]+0x00000008u; // 80183550
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80183554
  c->r[0]=R32(c->r[1]+0x00000034u); // 80183558
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 8018355C
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 80183560
  c->r[0]=0u+0x00000000u; // 80183564
  c->r[5]=(rotl(c->r[8],18)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 80183568
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8018356C
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 80183570
  W16(c->r[3]+0x00000002u,c->r[0]); // 80183574
  c->r[1]=c->r[1]+0x00000040u; // 80183578
  return; // 8018357C
}

// GXSetIndTexCoordScale
void f_80183580(Ctx* __restrict c) {
  trace_call(0x80183580u);
  cmps(c,0,(int32_t)c->r[3],2); // 80183580
  if (crb(c,2)) { goto L_80183610; } // 80183584
  if (!crb(c,0)) { goto L_8018359C; } // 80183588
  cmps(c,0,(int32_t)c->r[3],0); // 8018358C
  if (crb(c,2)) { goto L_801835A8; } // 80183590
  if (!crb(c,0)) { goto L_801835DC; } // 80183594
  goto L_80183674; // 80183598
L_8018359C:;
  cmps(c,0,(int32_t)c->r[3],4); // 8018359C
  if (!crb(c,0)) { goto L_80183674; } // 801835A0
  goto L_80183644; // 801835A4
L_801835A8:;
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 801835A8
  c->r[6]=0u+0x00000025u; // 801835AC
  c->r[3]=0u+0xCC010000u; // 801835B0
  c->r[0]=0u+0x00000061u; // 801835B4
  c->r[7]=R32(c->r[8]+0x00000178u); // 801835B8
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 801835BC
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 801835C0
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801835C4
  W32(c->r[8]+0x00000178u,c->r[7]); // 801835C8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801835CC
  c->r[0]=R32(c->r[8]+0x00000178u); // 801835D0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801835D4
  goto L_80183674; // 801835D8
L_801835DC:;
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 801835DC
  c->r[6]=0u+0x00000025u; // 801835E0
  c->r[3]=0u+0xCC010000u; // 801835E4
  c->r[0]=0u+0x00000061u; // 801835E8
  c->r[7]=R32(c->r[8]+0x00000178u); // 801835EC
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 801835F0
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 801835F4
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801835F8
  W32(c->r[8]+0x00000178u,c->r[7]); // 801835FC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183600
  c->r[0]=R32(c->r[8]+0x00000178u); // 80183604
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80183608
  goto L_80183674; // 8018360C
L_80183610:;
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 80183610
  c->r[6]=0u+0x00000026u; // 80183614
  c->r[3]=0u+0xCC010000u; // 80183618
  c->r[0]=0u+0x00000061u; // 8018361C
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 80183620
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 80183624
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 80183628
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8018362C
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 80183630
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183634
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 80183638
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8018363C
  goto L_80183674; // 80183640
L_80183644:;
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 80183644
  c->r[6]=0u+0x00000026u; // 80183648
  c->r[3]=0u+0xCC010000u; // 8018364C
  c->r[0]=0u+0x00000061u; // 80183650
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 80183654
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 80183658
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 8018365C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80183660
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 80183664
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80183668
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 8018366C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80183670
L_80183674:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80183674
  c->r[0]=0u+0x00000000u; // 80183678
  W16(c->r[3]+0x00000002u,c->r[0]); // 8018367C
  return; // 80183680
}

// GXSetIndTexOrder
void f_80183684(Ctx* __restrict c) {
  trace_call(0x80183684u);
  cmps(c,0,(int32_t)c->r[5],255); // 80183684
  if (!crb(c,2)) { goto L_80183690; } // 80183688
  c->r[5]=0u+0x00000000u; // 8018368C
L_80183690:;
  cmps(c,0,(int32_t)c->r[4],255); // 80183690
  if (!crb(c,2)) { goto L_8018369C; } // 80183694
  c->r[4]=0u+0x00000000u; // 80183698
L_8018369C:;
  cmps(c,0,(int32_t)c->r[3],2); // 8018369C
  if (crb(c,2)) { goto L_801836F4; } // 801836A0
  if (!crb(c,0)) { goto L_801836B8; } // 801836A4
  cmps(c,0,(int32_t)c->r[3],0); // 801836A8
  if (crb(c,2)) { goto L_801836C4; } // 801836AC
  if (!crb(c,0)) { goto L_801836DC; } // 801836B0
  goto L_80183720; // 801836B4
L_801836B8:;
  cmps(c,0,(int32_t)c->r[3],4); // 801836B8
  if (!crb(c,0)) { goto L_80183720; } // 801836BC
  goto L_8018370C; // 801836C0
L_801836C4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801836C4
  c->r[0]=R32(c->r[3]+0x00000170u); // 801836C8
  c->r[0]=(rotl(c->r[5],0)&0x00000007u)|(c->r[0]&~0x00000007u); // 801836CC
  c->r[0]=(rotl(c->r[4],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 801836D0
  W32(c->r[3]+0x00000170u,c->r[0]); // 801836D4
  goto L_80183720; // 801836D8
L_801836DC:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801836DC
  c->r[0]=R32(c->r[3]+0x00000170u); // 801836E0
  c->r[0]=(rotl(c->r[5],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 801836E4
  c->r[0]=(rotl(c->r[4],9)&0x00000E00u)|(c->r[0]&~0x00000E00u); // 801836E8
  W32(c->r[3]+0x00000170u,c->r[0]); // 801836EC
  goto L_80183720; // 801836F0
L_801836F4:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 801836F4
  c->r[0]=R32(c->r[3]+0x00000170u); // 801836F8
  c->r[0]=(rotl(c->r[5],12)&0x00007000u)|(c->r[0]&~0x00007000u); // 801836FC
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80183700
  W32(c->r[3]+0x00000170u,c->r[0]); // 80183704
  goto L_80183720; // 80183708
L_8018370C:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8018370C
  c->r[0]=R32(c->r[3]+0x00000170u); // 80183710
  c->r[0]=(rotl(c->r[5],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 80183714
  c->r[0]=(rotl(c->r[4],21)&0x00E00000u)|(c->r[0]&~0x00E00000u); // 80183718
  W32(c->r[3]+0x00000170u,c->r[0]); // 8018371C
L_80183720:;
  c->r[4]=0u+0xCC010000u; // 80183720
  c->r[0]=0u+0x00000061u; // 80183724
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80183728
  c->r[0]=0u+0x00000000u; // 8018372C
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80183730
  c->r[3]=R32(c->r[5]+0x00000170u); // 80183734
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80183738
  c->r[3]=R32(c->r[5]+0x000005FCu); // 8018373C
  c->r[3]=c->r[3]|0x00000003u; // 80183740
  W32(c->r[5]+0x000005FCu,c->r[3]); // 80183744
  W16(c->r[5]+0x00000002u,c->r[0]); // 80183748
  return; // 8018374C
}

// GXSetNumIndStages
void f_80183750(Ctx* __restrict c) {
  trace_call(0x80183750u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80183750
  c->r[0]=R32(c->r[4]+0x00000254u); // 80183754
  c->r[0]=(rotl(c->r[3],16)&0x00070000u)|(c->r[0]&~0x00070000u); // 80183758
  W32(c->r[4]+0x00000254u,c->r[0]); // 8018375C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80183760
  c->r[0]=c->r[0]|0x00000006u; // 80183764
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80183768
  return; // 8018376C
}

// GXSetTevDirect
void f_80183770(Ctx* __restrict c) {
  trace_call(0x80183770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183770
  c->r[0]=c->lr; // 80183774
  c->r[4]=0u+0x00000000u; // 80183778
  c->r[5]=0u+0x00000000u; // 8018377C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80183780
  c->r[0]=0u+0x00000000u; // 80183784
  c->r[6]=0u+0x00000000u; // 80183788
  c->r[7]=0u+0x00000000u; // 8018378C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80183790
  c->r[8]=0u+0x00000000u; // 80183794
  c->r[9]=0u+0x00000000u; // 80183798
  c->r[10]=0u+0x00000000u; // 8018379C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801837A0
  c->lr=0x801837A8u; f_801833C4(c); // 801837A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801837A8
  c->lr=c->r[0]; // 801837AC
  c->r[1]=c->r[1]+0x00000010u; // 801837B0
  return; // 801837B4
}

// fn_801837B8
void f_801837B8(Ctx* __restrict c) {
  return; // 801837B8
}

// __GXSetIndirectMask
void f_801837BC(Ctx* __restrict c) {
  trace_call(0x801837BCu);
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 801837BC
  c->r[4]=0u+0xCC010000u; // 801837C0
  c->r[5]=0u+0x00000061u; // 801837C4
  c->r[0]=0u+0x00000000u; // 801837C8
  c->r[6]=R32(c->r[7]+0x00000174u); // 801837CC
  c->r[6]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801837D0
  W32(c->r[7]+0x00000174u,c->r[6]); // 801837D4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801837D8
  c->r[3]=R32(c->r[7]+0x00000174u); // 801837DC
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801837E0
  W16(c->r[7]+0x00000002u,c->r[0]); // 801837E4
  return; // 801837E8
}

// __GXFlushTextureState
void f_801837EC(Ctx* __restrict c) {
  trace_call(0x801837ECu);
  c->r[4]=0u+0xCC010000u; // 801837EC
  c->r[0]=0u+0x00000061u; // 801837F0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801837F4
  c->r[0]=0u+0x00000000u; // 801837F8
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 801837FC
  c->r[3]=R32(c->r[5]+0x00000174u); // 80183800
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80183804
  W16(c->r[5]+0x00000002u,c->r[0]); // 80183808
  return; // 8018380C
}

// GXSetTevOp
void f_80183810(Ctx* __restrict c) {
  trace_call(0x80183810u);
  cmps(c,0,(int32_t)c->r[3],0); // 80183810
  c->r[5]=0u+0x80330000u; // 80183814
  c->r[5]=c->r[5]+0xFFFFFFF0u; // 80183818
  if (!crb(c,2)) { goto L_80183838; } // 8018381C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80183820
  c->r[4]=c->r[5]+0x00000000u; // 80183824
  c->r[0]=c->r[5]+0x00000028u; // 80183828
  c->r[8]=c->r[4]+c->r[6]; // 8018382C
  c->r[9]=c->r[0]+c->r[6]; // 80183830
  goto L_8018384C; // 80183834
L_80183838:;
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80183838
  c->r[4]=c->r[5]+0x00000014u; // 8018383C
  c->r[0]=c->r[5]+0x0000003Cu; // 80183840
  c->r[8]=c->r[4]+c->r[6]; // 80183844
  c->r[9]=c->r[0]+c->r[6]; // 80183848
L_8018384C:;
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 8018384C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183850
  c->r[3]=R32(c->r[8]+0x00000000u); // 80183854
  c->r[4]=0u+0xCC010000u; // 80183858
  c->r[6]=c->r[7]+c->r[0]; // 8018385C
  c->r[5]=0u+0x00000061u; // 80183860
  c->r[8]=R32(c->r[6]+0x00000180u); // 80183864
  c->r[0]=0u+0x00000000u; // 80183868
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8018386C
  c->r[8]=rotl(c->r[8],0)&0xFF000000u; // 80183870
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 80183874
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 80183878
  W32(c->r[6]+0x00000180u,c->r[8]); // 8018387C
  c->r[8]=R32(c->r[6]+0x000001C0u); // 80183880
  c->r[3]=R32(c->r[9]+0x00000000u); // 80183884
  c->r[8]=rotl(c->r[8],0)&0xFF00000Fu; // 80183888
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8018388C
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFF0u)|(c->r[8]&~0x00FFFFF0u); // 80183890
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 80183894
  W32(c->r[6]+0x000001C0u,c->r[8]); // 80183898
  W16(c->r[7]+0x00000002u,c->r[0]); // 8018389C
  return; // 801838A0
}

// GXSetTevColorIn
void f_801838A4(Ctx* __restrict c) {
  trace_call(0x801838A4u);
  c->r[11]=R32(c->r[2]+0xFFFF8DA0u); // 801838A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801838A8
  c->r[3]=0u+0xCC010000u; // 801838AC
  c->r[8]=0u+0x00000061u; // 801838B0
  c->r[10]=c->r[11]+c->r[0]; // 801838B4
  c->r[0]=0u+0x00000000u; // 801838B8
  c->r[9]=R32(c->r[10]+0x00000180u); // 801838BC
  c->r[9]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 801838C0
  c->r[9]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[9]&~0x00000F00u); // 801838C4
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 801838C8
  c->r[9]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[9]&~0x000000F0u); // 801838CC
  c->r[9]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[9]&~0x0000000Fu); // 801838D0
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 801838D4
  W32(c->r[10]+0x00000180u,c->r[9]); // 801838D8
  W16(c->r[11]+0x00000002u,c->r[0]); // 801838DC
  return; // 801838E0
}

// GXSetTevAlphaIn
void f_801838E4(Ctx* __restrict c) {
  trace_call(0x801838E4u);
  c->r[11]=R32(c->r[2]+0xFFFF8DA0u); // 801838E4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801838E8
  c->r[3]=0u+0xCC010000u; // 801838EC
  c->r[8]=0u+0x00000061u; // 801838F0
  c->r[10]=c->r[11]+c->r[0]; // 801838F4
  c->r[0]=0u+0x00000000u; // 801838F8
  c->r[9]=R32(c->r[10]+0x000001C0u); // 801838FC
  c->r[9]=(rotl(c->r[4],13)&0x0000E000u)|(c->r[9]&~0x0000E000u); // 80183900
  c->r[9]=(rotl(c->r[5],10)&0x00001C00u)|(c->r[9]&~0x00001C00u); // 80183904
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 80183908
  c->r[9]=(rotl(c->r[6],7)&0x00000380u)|(c->r[9]&~0x00000380u); // 8018390C
  c->r[9]=(rotl(c->r[7],4)&0x00000070u)|(c->r[9]&~0x00000070u); // 80183910
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 80183914
  W32(c->r[10]+0x000001C0u,c->r[9]); // 80183918
  W16(c->r[11]+0x00000002u,c->r[0]); // 8018391C
  return; // 80183920
}

// GXSetTevColorOp
void f_80183924(Ctx* __restrict c) {
  trace_call(0x80183924u);
  c->r[10]=R32(c->r[2]+0xFFFF8DA0u); // 80183924
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183928
  cmps(c,0,(int32_t)c->r[4],1); // 8018392C
  c->r[9]=c->r[10]+c->r[0]; // 80183930
  c->r[11]=R32(c->r[9]+0x00000180u); // 80183934
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 80183938
  if (crb(c,1)) { goto L_8018394C; } // 8018393C
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 80183940
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 80183944
  goto L_80183954; // 80183948
L_8018394C:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 8018394C
  c->r[11]=c->r[11]|0x00030000u; // 80183950
L_80183954:;
  c->r[3]=0u+0xCC010000u; // 80183954
  c->r[0]=0u+0x00000061u; // 80183958
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8018395C
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 80183960
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 80183964
  c->r[0]=0u+0x00000000u; // 80183968
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8018396C
  W32(c->r[9]+0x00000180u,c->r[11]); // 80183970
  W16(c->r[10]+0x00000002u,c->r[0]); // 80183974
  return; // 80183978
}

// GXSetTevAlphaOp
void f_8018397C(Ctx* __restrict c) {
  trace_call(0x8018397Cu);
  c->r[10]=R32(c->r[2]+0xFFFF8DA0u); // 8018397C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183980
  cmps(c,0,(int32_t)c->r[4],1); // 80183984
  c->r[9]=c->r[10]+c->r[0]; // 80183988
  c->r[11]=R32(c->r[9]+0x000001C0u); // 8018398C
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 80183990
  if (crb(c,1)) { goto L_801839A4; } // 80183994
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 80183998
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 8018399C
  goto L_801839AC; // 801839A0
L_801839A4:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 801839A4
  c->r[11]=c->r[11]|0x00030000u; // 801839A8
L_801839AC:;
  c->r[3]=0u+0xCC010000u; // 801839AC
  c->r[0]=0u+0x00000061u; // 801839B0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801839B4
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 801839B8
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 801839BC
  c->r[0]=0u+0x00000000u; // 801839C0
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 801839C4
  W32(c->r[9]+0x000001C0u,c->r[11]); // 801839C8
  W16(c->r[10]+0x00000002u,c->r[0]); // 801839CC
  return; // 801839D0
}

// GXSetTevColor
void f_801839D4(Ctx* __restrict c) {
  trace_call(0x801839D4u);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801839D4
  c->r[8]=R32(c->r[4]+0x00000000u); // 801839D8
  c->r[0]=c->r[3]+0x000000E0u; // 801839DC
  c->r[4]=0u+0xCC010000u; // 801839E0
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 801839E4
  c->r[5]=0u+0x00000061u; // 801839E8
  c->r[7]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801839EC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801839F0
  c->r[7]=(rotl(c->r[8],12)&0x000FF000u)|(c->r[7]&~0x000FF000u); // 801839F4
  c->r[0]=c->r[3]+0x000000E1u; // 801839F8
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 801839FC
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 80183A00
  c->r[6]=(rotl(c->r[8],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 80183A04
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80183A08
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80183A0C
  c->r[6]=(rotl(c->r[8],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 80183A10
  c->r[0]=0u+0x00000000u; // 80183A14
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80183A18
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80183A1C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80183A20
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80183A24
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80183A28
  W16(c->r[3]+0x00000002u,c->r[0]); // 80183A2C
  return; // 80183A30
}

// GXSetTevColorS10
void f_80183A34(Ctx* __restrict c) {
  trace_call(0x80183A34u);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80183A34
  c->r[8]=R32(c->r[4]+0x00000000u); // 80183A38
  c->r[0]=c->r[3]+0x000000E0u; // 80183A3C
  c->r[5]=0u+0xCC010000u; // 80183A40
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 80183A44
  c->r[6]=0u+0x00000061u; // 80183A48
  c->r[9]=R32(c->r[4]+0x00000004u); // 80183A4C
  c->r[7]=(rotl(c->r[8],16)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 80183A50
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80183A54
  c->r[0]=c->r[3]+0x000000E1u; // 80183A58
  c->r[7]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[7]&~0x007FF000u); // 80183A5C
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80183A60
  c->r[4]=rotl(c->r[0],24)&0xFF000000u; // 80183A64
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 80183A68
  c->r[4]=(rotl(c->r[9],16)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 80183A6C
  c->r[0]=0u+0x00000000u; // 80183A70
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80183A74
  c->r[4]=(rotl(c->r[8],12)&0x007FF000u)|(c->r[4]&~0x007FF000u); // 80183A78
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80183A7C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80183A80
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80183A84
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80183A88
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80183A8C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80183A90
  return; // 80183A94
}

// GXSetTevKColor
void f_80183A98(Ctx* __restrict c) {
  trace_call(0x80183A98u);
  c->r[6]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80183A98
  c->r[9]=R32(c->r[4]+0x00000000u); // 80183A9C
  c->r[3]=c->r[6]+0x000000E0u; // 80183AA0
  c->r[4]=0u+0xCC010000u; // 80183AA4
  c->r[8]=rotl(c->r[3],24)&0xFF000000u; // 80183AA8
  c->r[5]=0u+0x00000061u; // 80183AAC
  c->r[8]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 80183AB0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80183AB4
  c->r[7]=0u+0x00000008u; // 80183AB8
  c->r[0]=c->r[6]+0x000000E1u; // 80183ABC
  c->r[8]=(rotl(c->r[9],12)&0x000FF000u)|(c->r[8]&~0x000FF000u); // 80183AC0
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80183AC4
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 80183AC8
  c->r[0]=0u+0x00000000u; // 80183ACC
  c->r[8]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 80183AD0
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 80183AD4
  c->r[6]=(rotl(c->r[9],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 80183AD8
  c->r[6]=(rotl(c->r[9],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 80183ADC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80183AE0
  c->r[6]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[6]&~0x00F00000u); // 80183AE4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80183AE8
  W16(c->r[3]+0x00000002u,c->r[0]); // 80183AEC
  return; // 80183AF0
}

// GXSetTevKColorSel
void f_80183AF4(Ctx* __restrict c) {
  trace_call(0x80183AF4u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80183AF4
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80183AF8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 80183AFC
  c->r[3]=c->r[5]+c->r[0]; // 80183B00
  if (crb(c,2)) { goto L_80183B18; } // 80183B04
  c->r[0]=R32(c->r[3]+0x00000200u); // 80183B08
  c->r[0]=(rotl(c->r[4],14)&0x0007C000u)|(c->r[0]&~0x0007C000u); // 80183B0C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80183B10
  goto L_80183B24; // 80183B14
L_80183B18:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 80183B18
  c->r[0]=(rotl(c->r[4],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 80183B1C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80183B20
L_80183B24:;
  c->r[4]=0u+0xCC010000u; // 80183B24
  c->r[0]=0u+0x00000061u; // 80183B28
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80183B2C
  c->r[0]=0u+0x00000000u; // 80183B30
  c->r[3]=R32(c->r[3]+0x00000200u); // 80183B34
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80183B38
  W16(c->r[5]+0x00000002u,c->r[0]); // 80183B3C
  return; // 80183B40
}

// GXSetTevKAlphaSel
void f_80183B44(Ctx* __restrict c) {
  trace_call(0x80183B44u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80183B44
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80183B48
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 80183B4C
  c->r[3]=c->r[5]+c->r[0]; // 80183B50
  if (crb(c,2)) { goto L_80183B68; } // 80183B54
  c->r[0]=R32(c->r[3]+0x00000200u); // 80183B58
  c->r[0]=(rotl(c->r[4],19)&0x00F80000u)|(c->r[0]&~0x00F80000u); // 80183B5C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80183B60
  goto L_80183B74; // 80183B64
L_80183B68:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 80183B68
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80183B6C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80183B70
L_80183B74:;
  c->r[4]=0u+0xCC010000u; // 80183B74
  c->r[0]=0u+0x00000061u; // 80183B78
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80183B7C
  c->r[0]=0u+0x00000000u; // 80183B80
  c->r[3]=R32(c->r[3]+0x00000200u); // 80183B84
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80183B88
  W16(c->r[5]+0x00000002u,c->r[0]); // 80183B8C
  return; // 80183B90
}

// GXSetTevSwapMode
void f_80183B94(Ctx* __restrict c) {
  trace_call(0x80183B94u);
  c->r[9]=R32(c->r[2]+0xFFFF8DA0u); // 80183B94
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183B98
  c->r[6]=0u+0xCC010000u; // 80183B9C
  c->r[3]=0u+0x00000061u; // 80183BA0
  c->r[8]=c->r[9]+c->r[0]; // 80183BA4
  c->r[0]=0u+0x00000000u; // 80183BA8
  c->r[7]=R32(c->r[8]+0x000001C0u); // 80183BAC
  c->r[7]=(rotl(c->r[4],0)&0x00000003u)|(c->r[7]&~0x00000003u); // 80183BB0
  c->r[7]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[7]&~0x0000000Cu); // 80183BB4
  W32(c->r[8]+0x000001C0u,c->r[7]); // 80183BB8
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 80183BBC
  c->r[3]=R32(c->r[8]+0x000001C0u); // 80183BC0
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80183BC4
  W16(c->r[9]+0x00000002u,c->r[0]); // 80183BC8
  return; // 80183BCC
}

// GXSetTevSwapModeTable
void f_80183BD0(Ctx* __restrict c) {
  trace_call(0x80183BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183BD0
  c->r[11]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80183BD4
  c->r[12]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80183BD8
  c->r[8]=0u+0xCC010000u; // 80183BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80183BE0
  c->r[9]=0u+0x00000061u; // 80183BE4
  c->r[3]=c->r[12]+0x00000001u; // 80183BE8
  c->r[0]=0u+0x00000000u; // 80183BEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80183BF0
  c->r[30]=R32(c->r[2]+0xFFFF8DA0u); // 80183BF4
  c->r[31]=c->r[30]+0x00000200u; // 80183BF8
  c->r[10]=R32(c->r[31]+c->r[11]); // 80183BFC
  c->r[10]=(rotl(c->r[4],0)&0x00000003u)|(c->r[10]&~0x00000003u); // 80183C00
  c->r[10]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[10]&~0x0000000Cu); // 80183C04
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183C08
  W32(c->r[31]+c->r[11],c->r[10]); // 80183C0C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80183C10
  c->r[3]=R32(c->r[31]+c->r[11]); // 80183C14
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80183C18
  c->r[3]=R32(c->r[31]+c->r[4]); // 80183C1C
  c->r[3]=(rotl(c->r[6],0)&0x00000003u)|(c->r[3]&~0x00000003u); // 80183C20
  c->r[3]=(rotl(c->r[7],2)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 80183C24
  W32(c->r[31]+c->r[4],c->r[3]); // 80183C28
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80183C2C
  c->r[3]=R32(c->r[31]+c->r[4]); // 80183C30
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80183C34
  W16(c->r[30]+0x00000002u,c->r[0]); // 80183C38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80183C3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80183C40
  c->r[1]=c->r[1]+0x00000010u; // 80183C44
  return; // 80183C48
}

// GXSetAlphaCompare
void f_80183C4C(Ctx* __restrict c) {
  trace_call(0x80183C4Cu);
  c->r[8]=0u+0xCC010000u; // 80183C4C
  c->r[0]=0u+0x00000061u; // 80183C50
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 80183C54
  c->r[9]=0u+0xF3000000u; // 80183C58
  c->r[9]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 80183C5C
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80183C60
  c->r[9]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 80183C64
  c->r[0]=0u+0x00000000u; // 80183C68
  c->r[9]=(rotl(c->r[3],16)&0x00070000u)|(c->r[9]&~0x00070000u); // 80183C6C
  c->r[9]=(rotl(c->r[6],19)&0x00380000u)|(c->r[9]&~0x00380000u); // 80183C70
  c->r[9]=(rotl(c->r[5],22)&0x00C00000u)|(c->r[9]&~0x00C00000u); // 80183C74
  W32(c->r[8]+0xFFFF8000u,c->r[9]); // 80183C78
  W16(c->r[4]+0x00000002u,c->r[0]); // 80183C7C
  return; // 80183C80
}

// GXSetZTexture
void f_80183C84(Ctx* __restrict c) {
  trace_call(0x80183C84u);
  cmps(c,0,(int32_t)c->r[4],19); // 80183C84
  c->r[7]=0u+0x00000000u; // 80183C88
  c->r[0]=0u+0x000000F4u; // 80183C8C
  c->r[7]=(rotl(c->r[5],0)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 80183C90
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80183C94
  if (crb(c,2)) { goto L_80183CC0; } // 80183C98
  if (!crb(c,0)) { goto L_80183CAC; } // 80183C9C
  cmps(c,0,(int32_t)c->r[4],17); // 80183CA0
  if (crb(c,2)) { goto L_80183CB8; } // 80183CA4
  goto L_80183CD0; // 80183CA8
L_80183CAC:;
  cmps(c,0,(int32_t)c->r[4],22); // 80183CAC
  if (crb(c,2)) { goto L_80183CC8; } // 80183CB0
  goto L_80183CD0; // 80183CB4
L_80183CB8:;
  c->r[5]=0u+0x00000000u; // 80183CB8
  goto L_80183CD4; // 80183CBC
L_80183CC0:;
  c->r[5]=0u+0x00000001u; // 80183CC0
  goto L_80183CD4; // 80183CC4
L_80183CC8:;
  c->r[5]=0u+0x00000002u; // 80183CC8
  goto L_80183CD4; // 80183CCC
L_80183CD0:;
  c->r[5]=0u+0x00000002u; // 80183CD0
L_80183CD4:;
  c->r[4]=0u+0xCC010000u; // 80183CD4
  c->r[0]=0u+0x00000061u; // 80183CD8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80183CDC
  c->r[6]=0u+0x00000000u; // 80183CE0
  c->r[6]=(rotl(c->r[5],0)&0x00000003u)|(c->r[6]&~0x00000003u); // 80183CE4
  c->r[5]=0u+0x000000F5u; // 80183CE8
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 80183CEC
  c->r[6]=(rotl(c->r[3],2)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 80183CF0
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80183CF4
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80183CF8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80183CFC
  c->r[0]=0u+0x00000000u; // 80183D00
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80183D04
  W16(c->r[3]+0x00000002u,c->r[0]); // 80183D08
  return; // 80183D0C
}

// GXSetTevOrder
void f_80183D10(Ctx* __restrict c) {
  trace_call(0x80183D10u);
  c->r[11]=rotl(c->r[5],0)&0xFFFFFEFFu; // 80183D10
  c->r[7]=0u+0x00000008u; // 80183D14
  c->r[9]=rotl(c->r[3],1)&0x00000001u; // 80183D18
  c->r[10]=R32(c->r[2]+0xFFFF8DA0u); // 80183D1C
  c->r[0]=addc(c,~c->r[7],c->r[11],1); // 80183D20
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80183D24
  c->r[0]=addc(c,c->r[7],0,c->xer_ca); // 80183D28
  c->r[9]=c->r[9]+c->r[3]; // 80183D2C
  c->r[7]=c->r[10]+c->r[8]; // 80183D30
  cmps(c,0,(int32_t)c->r[4],8); // 80183D34
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFCu; // 80183D38
  c->r[0]=addc(c,~c->r[0],0x00000008u,1); // 80183D3C
  W32(c->r[7]+0x000005A4u,c->r[5]); // 80183D40
  c->r[7]=c->r[10]+c->r[8]; // 80183D44
  c->r[9]=c->r[11]&~c->r[0]; // 80183D48
  if (crb(c,0)) { goto L_80183D6C; } // 80183D4C
  c->r[0]=0u+0x00000001u; // 80183D50
  c->r[8]=R32(c->r[10]+0x000005E8u); // 80183D54
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80183D58
  c->r[4]=0u+0x00000000u; // 80183D5C
  c->r[0]=c->r[8]&~c->r[0]; // 80183D60
  W32(c->r[10]+0x000005E8u,c->r[0]); // 80183D64
  goto L_80183D80; // 80183D68
L_80183D6C:;
  c->r[0]=0u+0x00000001u; // 80183D6C
  c->r[8]=R32(c->r[10]+0x000005E8u); // 80183D70
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80183D74
  c->r[0]=c->r[8]|c->r[0]; // 80183D78
  W32(c->r[10]+0x000005E8u,c->r[0]); // 80183D7C
L_80183D80:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80183D80
  if (crb(c,2)) { goto L_80183DE4; } // 80183D84
  c->r[8]=R32(c->r[7]+0x00000150u); // 80183D88
  c->r[8]=(rotl(c->r[9],12)&0x00007000u)|(c->r[8]&~0x00007000u); // 80183D8C
  c->r[8]=(rotl(c->r[4],15)&0x00038000u)|(c->r[8]&~0x00038000u); // 80183D90
  cmps(c,0,(int32_t)c->r[6],255); // 80183D94
  W32(c->r[7]+0x00000150u,c->r[8]); // 80183D98
  if (!crb(c,2)) { goto L_80183DA8; } // 80183D9C
  c->r[0]=0u+0x00000007u; // 80183DA0
  goto L_80183DB8; // 80183DA4
L_80183DA8:;
  c->r[3]=0u+0x80330000u; // 80183DA8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80183DAC
  c->r[3]=c->r[3]+0x00000040u; // 80183DB0
  c->r[0]=R32(c->r[3]+c->r[0]); // 80183DB4
L_80183DB8:;
  c->r[8]=(rotl(c->r[0],19)&0x00380000u)|(c->r[8]&~0x00380000u); // 80183DB8
  cmps(c,0,(int32_t)c->r[5],255); // 80183DBC
  W32(c->r[7]+0x00000150u,c->r[8]); // 80183DC0
  c->r[3]=0u+0x00000000u; // 80183DC4
  if (crb(c,2)) { goto L_80183DD8; } // 80183DC8
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 80183DCC
  if (!crb(c,2)) { goto L_80183DD8; } // 80183DD0
  c->r[3]=0u+0x00000001u; // 80183DD4
L_80183DD8:;
  c->r[8]=(rotl(c->r[3],18)&0x00040000u)|(c->r[8]&~0x00040000u); // 80183DD8
  W32(c->r[7]+0x00000150u,c->r[8]); // 80183DDC
  goto L_80183E3C; // 80183DE0
L_80183DE4:;
  c->r[8]=R32(c->r[7]+0x00000150u); // 80183DE4
  c->r[8]=(rotl(c->r[9],0)&0x00000007u)|(c->r[8]&~0x00000007u); // 80183DE8
  c->r[8]=(rotl(c->r[4],3)&0x00000038u)|(c->r[8]&~0x00000038u); // 80183DEC
  cmps(c,0,(int32_t)c->r[6],255); // 80183DF0
  W32(c->r[7]+0x00000150u,c->r[8]); // 80183DF4
  if (!crb(c,2)) { goto L_80183E04; } // 80183DF8
  c->r[0]=0u+0x00000007u; // 80183DFC
  goto L_80183E14; // 80183E00
L_80183E04:;
  c->r[3]=0u+0x80330000u; // 80183E04
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80183E08
  c->r[3]=c->r[3]+0x00000040u; // 80183E0C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80183E10
L_80183E14:;
  c->r[8]=(rotl(c->r[0],7)&0x00000380u)|(c->r[8]&~0x00000380u); // 80183E14
  cmps(c,0,(int32_t)c->r[5],255); // 80183E18
  W32(c->r[7]+0x00000150u,c->r[8]); // 80183E1C
  c->r[3]=0u+0x00000000u; // 80183E20
  if (crb(c,2)) { goto L_80183E34; } // 80183E24
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 80183E28
  if (!crb(c,2)) { goto L_80183E34; } // 80183E2C
  c->r[3]=0u+0x00000001u; // 80183E30
L_80183E34:;
  c->r[8]=(rotl(c->r[3],6)&0x00000040u)|(c->r[8]&~0x00000040u); // 80183E34
  W32(c->r[7]+0x00000150u,c->r[8]); // 80183E38
L_80183E3C:;
  c->r[4]=0u+0xCC010000u; // 80183E3C
  c->r[0]=0u+0x00000061u; // 80183E40
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80183E44
  c->r[0]=0u+0x00000000u; // 80183E48
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80183E4C
  c->r[3]=R32(c->r[7]+0x00000150u); // 80183E50
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80183E54
  W16(c->r[5]+0x00000002u,c->r[0]); // 80183E58
  c->r[0]=R32(c->r[5]+0x000005FCu); // 80183E5C
  c->r[0]=c->r[0]|0x00000001u; // 80183E60
  W32(c->r[5]+0x000005FCu,c->r[0]); // 80183E64
  return; // 80183E68
}

// GXSetNumTevStages
void f_80183E6C(Ctx* __restrict c) {
  trace_call(0x80183E6Cu);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80183E6C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80183E70
  c->r[3]=R32(c->r[4]+0x00000254u); // 80183E74
  c->r[3]=(rotl(c->r[0],10)&0x00003C00u)|(c->r[3]&~0x00003C00u); // 80183E78
  W32(c->r[4]+0x00000254u,c->r[3]); // 80183E7C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80183E80
  c->r[0]=c->r[0]|0x00000004u; // 80183E84
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80183E88
  return; // 80183E8C
}

// fn_80183E90
void f_80183E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80183E90
  c->r[0]=c->lr; // 80183E94
  W32(c->r[1]+0x00000044u,c->r[0]); // 80183E98
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80183E9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80183EA0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80183EA4
  c->r[31]=rotl(c->r[3],0)&0x00000007u; // 80183EA8
  W32(c->r[1]+0x00000028u,c->r[30]); // 80183EAC
  c->r[30]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[30]); // 80183EB0
  W32(c->r[1]+0x00000024u,c->r[29]); // 80183EB4
  c->r[29]=c->r[4]|c->r[4]; // 80183EB8
  W32(c->r[1]+0x00000020u,c->r[28]); // 80183EBC
  if (crb(c,2)) { goto L_80183F0C; } // 80183EC0
  fcmp(c,0,c->f[4],c->f[3]); // 80183EC4
  if (crb(c,2)) { goto L_80183ED4; } // 80183EC8
  fcmp(c,0,c->f[2],c->f[1]); // 80183ECC
  if (!crb(c,2)) { goto L_80183EE4; } // 80183ED0
L_80183ED4:;
  {uint32_t ea=c->r[2]+0xFFFF8E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80183ED4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80183ED8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80183EDC
  goto L_80184014; // 80183EE0
L_80183EE4:;
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[1]); // 80183EE4
  {uint32_t ea=c->r[2]+0xFFFF8E54u; c->f[5]=c->ps1[5]=RF32(ea);} // 80183EE8
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 80183EEC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 80183EF0
  c->f[3]=c->ps1[3]=S(c->f[5]/c->f[6]); // 80183EF4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 80183EF8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80183EFC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80183F00
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80183F04
  goto L_80184014; // 80183F08
L_80183F0C:;
  fcmp(c,0,c->f[4],c->f[3]); // 80183F0C
  if (crb(c,2)) { goto L_80183F1C; } // 80183F10
  fcmp(c,0,c->f[2],c->f[1]); // 80183F14
  if (!crb(c,2)) { goto L_80183F2C; } // 80183F18
L_80183F1C:;
  {uint32_t ea=c->r[2]+0xFFFF8E50u; c->f[3]=c->ps1[3]=RF32(ea);} // 80183F1C
  {uint32_t ea=c->r[2]+0xFFFF8E58u; c->f[4]=c->ps1[4]=RF32(ea);} // 80183F20
  c->f[31]=c->f[3]; // 80183F24
  goto L_80183F48; // 80183F28
L_80183F2C:;
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 80183F2C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 80183F30
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80183F34
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[0]); // 80183F38
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80183F3C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[2]); // 80183F40
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 80183F44
L_80183F48:;
  {uint32_t ea=c->r[2]+0xFFFF8E58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183F48
  c->r[28]=0u+0x00000000u; // 80183F4C
  {uint32_t ea=c->r[2]+0xFFFF8E60u; c->f[0]=RF64(ea);} // 80183F50
  goto L_80183F60; // 80183F54
L_80183F58:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80183F58
  c->r[28]=c->r[28]+0x00000001u; // 80183F5C
L_80183F60:;
  fcmp(c,0,c->f[4],c->f[0]); // 80183F60
  if (crb(c,1)) { IRQCHK(c); goto L_80183F58; } // 80183F64
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[0]=RF64(ea);} // 80183F68
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[2]=c->ps1[2]=RF32(ea);} // 80183F6C
  {uint32_t ea=c->r[2]+0xFFFF8E50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80183F70
  goto L_80183F80; // 80183F74
L_80183F78:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 80183F78
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80183F7C
L_80183F80:;
  fcmp(c,0,c->f[4],c->f[1]); // 80183F80
  c->r[0]=c->cr; // 80183F84
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80183F88
  if (crb(c,2)) { goto L_80183F98; } // 80183F8C
  fcmp(c,0,c->f[4],c->f[0]); // 80183F90
  if (crb(c,0)) { IRQCHK(c); goto L_80183F78; } // 80183F94
L_80183F98:;
  c->r[0]=c->r[28]+0x00000001u; // 80183F98
  c->r[3]=0u+0x00000001u; // 80183F9C
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80183FA0
  {uint32_t ea=c->r[2]+0xFFFF8E78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80183FA4
  c->r[0]=0u+0x43300000u; // 80183FA8
  {uint32_t ea=c->r[2]+0xFFFF8E80u; c->f[2]=RF64(ea);} // 80183FAC
  c->r[3]=c->r[3]^0x80000000u; // 80183FB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 80183FB4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 80183FB8
  W32(c->r[1]+0x00000014u,c->r[3]); // 80183FBC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80183FC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80183FC4
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 80183FC8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80183FCC
  c->lr=0x80183FD4u; f_80185DAC(c); // 80183FD0
  c->r[4]=0u+0xCC010000u; // 80183FD4
  c->r[0]=0u+0x00000061u; // 80183FD8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80183FDC
  c->r[5]=0u+0x000000EFu; // 80183FE0
  c->r[6]=0u+0x00000000u; // 80183FE4
  c->r[6]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 80183FE8
  c->r[3]=c->r[28]+0x00000001u; // 80183FEC
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80183FF0
  c->r[5]=0u+0x00000000u; // 80183FF4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80183FF8
  c->r[5]=(rotl(c->r[3],0)&0x0000001Fu)|(c->r[5]&~0x0000001Fu); // 80183FFC
  c->r[3]=0u+0x000000F0u; // 80184000
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80184004
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80184008
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8018400C
  W32(c->r[4]+0xFFFF8000u,c->r[5]); // 80184010
L_80184014:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80184014
  c->r[3]=0u+0x00000000u; // 80184018
  c->r[4]=0u+0xCC010000u; // 8018401C
  c->r[5]=0u+0x00000061u; // 80184020
  c->r[3]=(rotl(c->r[0],20)&0x000007FFu)|(c->r[3]&~0x000007FFu); // 80184024
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80184028
  c->r[3]=(rotl(c->r[0],20)&0x0007F800u)|(c->r[3]&~0x0007F800u); // 8018402C
  c->r[6]=R32(c->r[1]+0x00000008u); // 80184030
  c->r[3]=(rotl(c->r[0],20)&0x00080000u)|(c->r[3]&~0x00080000u); // 80184034
  c->r[0]=0u+0x000000EEu; // 80184038
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8018403C
  c->r[9]=0u+0x00000000u; // 80184040
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80184044
  c->r[8]=0u+0x000000F1u; // 80184048
  c->r[9]=(rotl(c->r[6],20)&0x000007FFu)|(c->r[9]&~0x000007FFu); // 8018404C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80184050
  c->r[9]=(rotl(c->r[6],20)&0x0007F800u)|(c->r[9]&~0x0007F800u); // 80184054
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80184058
  c->r[9]=(rotl(c->r[6],20)&0x00080000u)|(c->r[9]&~0x00080000u); // 8018405C
  c->r[7]=0u+0x00000000u; // 80184060
  c->r[9]=(rotl(c->r[30],20)&0x00100000u)|(c->r[9]&~0x00100000u); // 80184064
  c->r[6]=0u+0x000000F2u; // 80184068
  c->r[7]=(rotl(c->r[0],24)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 8018406C
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80184070
  c->r[9]=(rotl(c->r[31],21)&0x00E00000u)|(c->r[9]&~0x00E00000u); // 80184074
  c->r[0]=0u+0x00000000u; // 80184078
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 8018407C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80184080
  W32(c->r[4]+0xFFFF8000u,c->r[9]); // 80184084
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80184088
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 8018408C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80184090
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80184094
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80184098
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8018409C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801840A0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801840A4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801840A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801840AC
  c->lr=c->r[0]; // 801840B0
  c->r[1]=c->r[1]+0x00000040u; // 801840B4
  return; // 801840B8
}

// GXInitFogAdjTable
void f_801840BC(Ctx* __restrict c) {
  trace_call(0x801840BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801840BC
  c->r[0]=c->lr; // 801840C0
  W32(c->r[1]+0x00000084u,c->r[0]); // 801840C4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801840C8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801840CC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801840D0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801840D4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801840D8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801840DC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801840E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801840E4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801840E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801840EC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 801840F0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 801840F4
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=RF64(ea);} // 801840F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801840FC
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80184100
  W32(c->r[1]+0x00000018u,c->r[30]); // 80184104
  fcmp(c,0,c->f[1],c->f[0]); // 80184108
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018410C
  if (!crb(c,2)) { goto L_80184134; } // 80184110
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184114
  {uint32_t ea=c->r[2]+0xFFFF8E54u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184118
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018411C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80184120
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184124
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 80184128
  c->f[26]=c->ps1[26]=S(c->f[1]/c->f[0]); // 8018412C
  goto L_80184148; // 80184130
L_80184134:;
  {uint32_t ea=c->r[2]+0xFFFF8E54u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184134
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184138
  {uint32_t ea=c->r[2]+0xFFFF8E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 8018413C
  c->f[26]=c->ps1[26]=S(c->f[2]/c->f[1]); // 80184140
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[26]); // 80184144
L_80184148:;
  c->r[31]=0u+0x43300000u; // 80184148
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8018414C
  {uint32_t ea=c->r[2]+0xFFFF8E98u; c->f[28]=RF64(ea);} // 80184150
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[1]); // 80184154
  W32(c->r[1]+0x00000008u,c->r[31]); // 80184158
  c->r[30]=c->r[3]|c->r[3]; // 8018415C
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184160
  c->r[29]=0u+0x00000000u; // 80184164
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80184168
  {uint32_t ea=c->r[2]+0xFFFF8E54u; c->f[30]=c->ps1[30]=RF32(ea);} // 8018416C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 80184170
  {uint32_t ea=c->r[2]+0xFFFF8E94u; c->f[31]=c->ps1[31]=RF32(ea);} // 80184174
  c->f[27]=c->ps1[27]=S(c->f[0]/c->f[1]); // 80184178
L_8018417C:;
  c->r[0]=c->r[29]+0x00000001u; // 8018417C
  W32(c->r[1]+0x00000008u,c->r[31]); // 80184180
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80184184
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80184188
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8018418C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 80184190
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 80184194
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[26]); // 80184198
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 8018419C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 801841A0
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 801841A4
  c->lr=0x801841ACu; f_80196B38(c); // 801841A8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801841AC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801841B0
  c->lr=0x801841B8u; f_80185DAC(c); // 801841B4
  c->r[29]=c->r[29]+0x00000001u; // 801841B8
  c->r[0]=rotl(c->r[3],0)&0x00000FFFu; // 801841BC
  cmpu(c,0,c->r[29],0x0000000Au); // 801841C0
  W16(c->r[30]+0x00000000u,c->r[0]); // 801841C4
  c->r[30]=c->r[30]+0x00000002u; // 801841C8
  if (crb(c,0)) { IRQCHK(c); goto L_8018417C; } // 801841CC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801841D0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801841D4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801841D8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801841DC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801841E0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801841E4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801841E8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801841EC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801841F0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801841F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 801841F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 801841FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80184200
  c->r[30]=R32(c->r[1]+0x00000018u); // 80184204
  c->r[0]=R32(c->r[1]+0x00000084u); // 80184208
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018420C
  c->lr=c->r[0]; // 80184210
  c->r[1]=c->r[1]+0x00000080u; // 80184214
  return; // 80184218
}

// GXSetFogRangeAdj
void f_8018421C(Ctx* __restrict c) {
  trace_call(0x8018421Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8018421C
  if (crb(c,2)) { goto L_80184308; } // 80184220
  c->r[12]=R16(c->r[5]+0x00000000u); // 80184224
  c->r[11]=0u+0x00000000u; // 80184228
  c->r[10]=R16(c->r[5]+0x00000002u); // 8018422C
  c->r[6]=0u+0xCC010000u; // 80184230
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 80184234
  c->r[0]=0u+0x00000061u; // 80184238
  c->r[9]=c->r[11]|c->r[11]; // 8018423C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184240
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 80184244
  c->r[7]=0u+0x000000E9u; // 80184248
  c->r[8]=c->r[9]|c->r[9]; // 8018424C
  c->r[12]=R16(c->r[5]+0x00000004u); // 80184250
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80184254
  c->r[11]=0u+0x00000000u; // 80184258
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 8018425C
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 80184260
  c->r[9]=c->r[11]|c->r[11]; // 80184264
  c->r[10]=R16(c->r[5]+0x00000006u); // 80184268
  c->r[7]=0u+0x000000EAu; // 8018426C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184270
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 80184274
  c->r[12]=R16(c->r[5]+0x00000008u); // 80184278
  c->r[8]=c->r[9]|c->r[9]; // 8018427C
  c->r[11]=0u+0x00000000u; // 80184280
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80184284
  c->r[10]=R16(c->r[5]+0x0000000Au); // 80184288
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 8018428C
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 80184290
  c->r[9]=c->r[11]|c->r[11]; // 80184294
  c->r[7]=0u+0x000000EBu; // 80184298
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 8018429C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801842A0
  c->r[8]=c->r[9]|c->r[9]; // 801842A4
  c->r[12]=R16(c->r[5]+0x0000000Cu); // 801842A8
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801842AC
  c->r[11]=0u+0x00000000u; // 801842B0
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801842B4
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801842B8
  c->r[9]=c->r[11]|c->r[11]; // 801842BC
  c->r[10]=R16(c->r[5]+0x0000000Eu); // 801842C0
  c->r[7]=0u+0x000000ECu; // 801842C4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801842C8
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801842CC
  c->r[12]=R16(c->r[5]+0x00000010u); // 801842D0
  c->r[8]=c->r[9]|c->r[9]; // 801842D4
  c->r[11]=0u+0x00000000u; // 801842D8
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801842DC
  c->r[10]=R16(c->r[5]+0x00000012u); // 801842E0
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801842E4
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801842E8
  c->r[9]=c->r[11]|c->r[11]; // 801842EC
  c->r[7]=0u+0x000000EDu; // 801842F0
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801842F4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801842F8
  c->r[8]=c->r[9]|c->r[9]; // 801842FC
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80184300
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 80184304
L_80184308:;
  c->r[0]=c->r[4]+0x00000156u; // 80184308
  c->r[6]=0u+0x00000000u; // 8018430C
  c->r[6]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 80184310
  c->r[4]=0u+0xCC010000u; // 80184314
  c->r[0]=0u+0x00000061u; // 80184318
  c->r[5]=0u+0x000000E8u; // 8018431C
  c->r[6]=(rotl(c->r[3],10)&0x00000400u)|(c->r[6]&~0x00000400u); // 80184320
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80184324
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80184328
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8018432C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80184330
  c->r[0]=0u+0x00000000u; // 80184334
  W16(c->r[3]+0x00000002u,c->r[0]); // 80184338
  return; // 8018433C
}

// GXSetBlendMode
void f_80184340(Ctx* __restrict c) {
  trace_call(0x80184340u);
  c->r[10]=R32(c->r[2]+0xFFFF8DA0u); // 80184340
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80184344
  c->r[8]=c->r[3]+0xFFFFFFFEu; // 80184348
  c->r[7]=0u+0xCC010000u; // 8018434C
  c->r[0]=cntlz(c->r[0]); // 80184350
  c->r[9]=R32(c->r[10]+0x00000220u); // 80184354
  c->r[9]=(rotl(c->r[0],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 80184358
  c->r[8]=cntlz(c->r[8]); // 8018435C
  c->r[0]=0u+0x00000061u; // 80184360
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 80184364
  c->r[9]=(rotl(c->r[3],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 80184368
  c->r[9]=(rotl(c->r[8],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 8018436C
  c->r[0]=0u+0x00000000u; // 80184370
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 80184374
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 80184378
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 8018437C
  W32(c->r[7]+0xFFFF8000u,c->r[9]); // 80184380
  W32(c->r[10]+0x00000220u,c->r[9]); // 80184384
  W16(c->r[10]+0x00000002u,c->r[0]); // 80184388
  return; // 8018438C
}

// GXSetColorUpdate
void f_80184390(Ctx* __restrict c) {
  trace_call(0x80184390u);
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 80184390
  c->r[4]=0u+0xCC010000u; // 80184394
  c->r[5]=0u+0x00000061u; // 80184398
  c->r[0]=0u+0x00000000u; // 8018439C
  c->r[6]=R32(c->r[7]+0x00000220u); // 801843A0
  c->r[6]=(rotl(c->r[3],3)&0x00000008u)|(c->r[6]&~0x00000008u); // 801843A4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801843A8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801843AC
  W32(c->r[7]+0x00000220u,c->r[6]); // 801843B0
  W16(c->r[7]+0x00000002u,c->r[0]); // 801843B4
  return; // 801843B8
}

// GXSetAlphaUpdate
void f_801843BC(Ctx* __restrict c) {
  trace_call(0x801843BCu);
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 801843BC
  c->r[4]=0u+0xCC010000u; // 801843C0
  c->r[5]=0u+0x00000061u; // 801843C4
  c->r[0]=0u+0x00000000u; // 801843C8
  c->r[6]=R32(c->r[7]+0x00000220u); // 801843CC
  c->r[6]=(rotl(c->r[3],4)&0x00000010u)|(c->r[6]&~0x00000010u); // 801843D0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801843D4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801843D8
  W32(c->r[7]+0x00000220u,c->r[6]); // 801843DC
  W16(c->r[7]+0x00000002u,c->r[0]); // 801843E0
  return; // 801843E4
}

// GXSetZMode
void f_801843E8(Ctx* __restrict c) {
  trace_call(0x801843E8u);
  c->r[9]=R32(c->r[2]+0xFFFF8DA0u); // 801843E8
  c->r[6]=0u+0xCC010000u; // 801843EC
  c->r[7]=0u+0x00000061u; // 801843F0
  c->r[0]=0u+0x00000000u; // 801843F4
  c->r[8]=R32(c->r[9]+0x00000228u); // 801843F8
  c->r[8]=(rotl(c->r[3],0)&0x00000001u)|(c->r[8]&~0x00000001u); // 801843FC
  c->r[8]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[8]&~0x0000000Eu); // 80184400
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80184404
  c->r[8]=(rotl(c->r[5],4)&0x00000010u)|(c->r[8]&~0x00000010u); // 80184408
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8018440C
  W32(c->r[9]+0x00000228u,c->r[8]); // 80184410
  W16(c->r[9]+0x00000002u,c->r[0]); // 80184414
  return; // 80184418
}

// GXSetZCompLoc
void f_8018441C(Ctx* __restrict c) {
  trace_call(0x8018441Cu);
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 8018441C
  c->r[4]=0u+0xCC010000u; // 80184420
  c->r[5]=0u+0x00000061u; // 80184424
  c->r[0]=0u+0x00000000u; // 80184428
  c->r[6]=R32(c->r[7]+0x0000022Cu); // 8018442C
  c->r[6]=(rotl(c->r[3],6)&0x00000040u)|(c->r[6]&~0x00000040u); // 80184430
  W32(c->r[7]+0x0000022Cu,c->r[6]); // 80184434
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80184438
  c->r[3]=R32(c->r[7]+0x0000022Cu); // 8018443C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80184440
  W16(c->r[7]+0x00000002u,c->r[0]); // 80184444
  return; // 80184448
}

// GXSetPixelFmt
void f_8018444C(Ctx* __restrict c) {
  trace_call(0x8018444Cu);
  c->r[9]=R32(c->r[2]+0xFFFF8DA0u); // 8018444C
  c->r[6]=0u+0x80330000u; // 80184450
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80184454
  c->r[6]=c->r[6]+0x00000068u; // 80184458
  c->r[8]=R32(c->r[9]+0x0000022Cu); // 8018445C
  c->r[0]=R32(c->r[6]+c->r[7]); // 80184460
  c->r[5]=c->r[8]|c->r[8]; // 80184464
  c->r[5]=(rotl(c->r[0],0)&0x00000007u)|(c->r[5]&~0x00000007u); // 80184468
  c->r[5]=(rotl(c->r[4],3)&0x00000038u)|(c->r[5]&~0x00000038u); // 8018446C
  cmpu(c,0,c->r[8],c->r[5]); // 80184470
  W32(c->r[9]+0x0000022Cu,c->r[5]); // 80184474
  if (crb(c,2)) { goto L_801844B0; } // 80184478
  c->r[5]=0u+0xCC010000u; // 8018447C
  c->r[0]=0u+0x00000061u; // 80184480
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184484
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80184488
  c->r[4]=cntlz(c->r[0]); // 8018448C
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 80184490
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80184494
  c->r[0]=R32(c->r[9]+0x00000254u); // 80184498
  c->r[0]=(rotl(c->r[4],4)&0x00000200u)|(c->r[0]&~0x00000200u); // 8018449C
  W32(c->r[9]+0x00000254u,c->r[0]); // 801844A0
  c->r[0]=R32(c->r[9]+0x000005FCu); // 801844A4
  c->r[0]=c->r[0]|0x00000004u; // 801844A8
  W32(c->r[9]+0x000005FCu,c->r[0]); // 801844AC
L_801844B0:;
  c->r[0]=R32(c->r[6]+c->r[7]); // 801844B0
  cmpu(c,0,c->r[0],0x00000004u); // 801844B4
  if (!crb(c,2)) { goto L_801844E8; } // 801844B8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801844BC
  c->r[4]=R32(c->r[9]+0x00000224u); // 801844C0
  c->r[4]=(rotl(c->r[0],9)&0x00000600u)|(c->r[4]&~0x00000600u); // 801844C4
  c->r[3]=0u+0xCC010000u; // 801844C8
  c->r[0]=0u+0x00000042u; // 801844CC
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801844D0
  W32(c->r[9]+0x00000224u,c->r[4]); // 801844D4
  c->r[0]=0u+0x00000061u; // 801844D8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801844DC
  c->r[0]=R32(c->r[9]+0x00000224u); // 801844E0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801844E4
L_801844E8:;
  c->r[0]=0u+0x00000000u; // 801844E8
  W16(c->r[9]+0x00000002u,c->r[0]); // 801844EC
  return; // 801844F0
}

// GXSetDither
void f_801844F4(Ctx* __restrict c) {
  trace_call(0x801844F4u);
  c->r[7]=R32(c->r[2]+0xFFFF8DA0u); // 801844F4
  c->r[4]=0u+0xCC010000u; // 801844F8
  c->r[5]=0u+0x00000061u; // 801844FC
  c->r[0]=0u+0x00000000u; // 80184500
  c->r[6]=R32(c->r[7]+0x00000220u); // 80184504
  c->r[6]=(rotl(c->r[3],2)&0x00000004u)|(c->r[6]&~0x00000004u); // 80184508
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8018450C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80184510
  W32(c->r[7]+0x00000220u,c->r[6]); // 80184514
  W16(c->r[7]+0x00000002u,c->r[0]); // 80184518
  return; // 8018451C
}

// GXSetDstAlpha
void f_80184520(Ctx* __restrict c) {
  trace_call(0x80184520u);
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 80184520
  c->r[5]=0u+0xCC010000u; // 80184524
  c->r[6]=0u+0x00000061u; // 80184528
  c->r[0]=0u+0x00000000u; // 8018452C
  c->r[7]=R32(c->r[8]+0x00000224u); // 80184530
  c->r[7]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 80184534
  c->r[7]=(rotl(c->r[3],8)&0x00000100u)|(c->r[7]&~0x00000100u); // 80184538
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8018453C
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 80184540
  W32(c->r[8]+0x00000224u,c->r[7]); // 80184544
  W16(c->r[8]+0x00000002u,c->r[0]); // 80184548
  return; // 8018454C
}

// GXSetFieldMask
void f_80184550(Ctx* __restrict c) {
  trace_call(0x80184550u);
  c->r[5]=0u+0xCC010000u; // 80184550
  c->r[0]=0u+0x00000061u; // 80184554
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184558
  c->r[0]=0u+0x00000044u; // 8018455C
  c->r[6]=0u+0x00000000u; // 80184560
  c->r[6]=(rotl(c->r[4],0)&0x00000001u)|(c->r[6]&~0x00000001u); // 80184564
  c->r[6]=(rotl(c->r[3],1)&0x00000002u)|(c->r[6]&~0x00000002u); // 80184568
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 8018456C
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80184570
  c->r[0]=0u+0x00000000u; // 80184574
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80184578
  W16(c->r[3]+0x00000002u,c->r[0]); // 8018457C
  return; // 80184580
}

// GXSetFieldMode
void f_80184584(Ctx* __restrict c) {
  trace_call(0x80184584u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80184584
  c->r[0]=c->lr; // 80184588
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 8018458C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80184590
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80184594
  c->r[31]=0u+0xCC010000u; // 80184598
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018459C
  c->r[30]=0u+0x00000061u; // 801845A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801845A4
  c->r[29]=c->r[3]|c->r[3]; // 801845A8
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 801845AC
  c->r[0]=(rotl(c->r[4],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 801845B0
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 801845B4
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 801845B8
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 801845BC
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 801845C0
  c->lr=0x801845C8u; f_801837EC(c); // 801845C4
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 801845C8
  c->r[0]=c->r[29]|0x68000000u; // 801845CC
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 801845D0
  c->lr=0x801845D8u; f_801837EC(c); // 801845D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801845D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801845DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801845E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801845E4
  c->lr=c->r[0]; // 801845E8
  c->r[1]=c->r[1]+0x00000020u; // 801845EC
  return; // 801845F0
}

// GXCallDisplayList
void f_801845F4(Ctx* __restrict c) {
  trace_call(0x801845F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801845F4
  c->r[0]=c->lr; // 801845F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801845FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80184600
  c->r[31]=R32(c->r[2]+0xFFFF8DA0u); // 80184604
  W32(c->r[1]+0x00000018u,c->r[30]); // 80184608
  c->r[30]=c->r[4]|c->r[4]; // 8018460C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80184610
  c->r[29]=c->r[3]|c->r[3]; // 80184614
  c->r[0]=R32(c->r[31]+0x000005FCu); // 80184618
  cmps(c,0,(int32_t)c->r[0],0); // 8018461C
  if (crb(c,2)) { goto L_80184628; } // 80184620
  c->lr=0x80184628u; f_80180BA0(c); // 80184624
L_80184628:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80184628
  cmps(c,0,(int32_t)c->r[0],0); // 8018462C
  if (!crb(c,2)) { goto L_80184638; } // 80184630
  c->lr=0x80184638u; f_80180F64(c); // 80184634
L_80184638:;
  c->r[3]=0u+0xCC010000u; // 80184638
  c->r[0]=0u+0x00000040u; // 8018463C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80184640
  W32(c->r[3]+0xFFFF8000u,c->r[29]); // 80184644
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 80184648
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018464C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80184650
  c->r[30]=R32(c->r[1]+0x00000018u); // 80184654
  c->r[29]=R32(c->r[1]+0x00000014u); // 80184658
  c->lr=c->r[0]; // 8018465C
  c->r[1]=c->r[1]+0x00000020u; // 80184660
  return; // 80184664
}

// GXProject
void f_80184668(Ctx* __restrict c) {
  trace_call(0x80184668u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80184668
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8018466C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184670
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[1]); // 80184674
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80184678
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[2]); // 8018467C
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[1]); // 80184680
  {uint32_t ea=c->r[3]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80184684
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[2]); // 80184688
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[1]); // 8018468C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184690
  {uint32_t ea=c->r[3]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 80184694
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[2]); // 80184698
  {uint32_t ea=c->r[3]+0x00000018u; c->f[10]=c->ps1[10]=RF32(ea);} // 8018469C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 801846A0
  c->f[13]=c->ps1[13]=S(c->f[11]*c->f[3]); // 801846A4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 801846A8
  c->f[0]=c->ps1[0]=S(c->f[12]+c->f[7]); // 801846AC
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801846B0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801846B4
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[3]); // 801846B8
  c->f[9]=c->ps1[9]=S(c->f[13]+c->f[0]); // 801846BC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801846C0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[3]); // 801846C4
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[4]); // 801846C8
  {uint32_t ea=c->r[2]+0xFFFF8EA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801846CC
  c->f[4]=c->ps1[4]=S(c->f[10]+c->f[8]); // 801846D0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801846D4
  c->f[9]=c->ps1[9]=S(c->f[11]+c->f[9]); // 801846D8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801846DC
  c->f[8]=c->ps1[8]=S(c->f[7]+c->f[4]); // 801846E0
  c->f[3]=c->ps1[3]=S(c->f[6]+c->f[3]); // 801846E4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 801846E8
  fcmp(c,0,c->f[1],c->f[0]); // 801846EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 801846F0
  c->f[7]=c->ps1[7]=S(c->f[2]+c->f[3]); // 801846F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 801846F8
  if (!crb(c,2)) { goto L_80184748; } // 801846FC
  c->f[1]=-c->f[7]; // 80184700
  {uint32_t ea=c->r[2]+0xFFFF8EA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184704
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 80184708
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8018470C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80184710
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80184714
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80184718
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8018471C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184720
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 80184724
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[6]); // 80184728
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[5]); // 8018472C
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[3]); // 80184730
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[4]); // 80184734
  c->f[7]=c->ps1[7]=S(c->f[6]+c->f[5]); // 80184738
  c->f[10]=c->ps1[10]=S(c->f[1]+c->f[2]); // 8018473C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80184740
  goto L_8018477C; // 80184744
L_80184748:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184748
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018474C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184750
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[2]); // 80184754
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[1]); // 80184758
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8018475C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[0]); // 80184760
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80184764
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184768
  c->f[7]=c->ps1[7]=S(c->f[5]+c->f[6]); // 8018476C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 80184770
  {uint32_t ea=c->r[2]+0xFFFF8EA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184774
  c->f[10]=c->ps1[10]=S(c->f[1]+c->f[2]); // 80184778
L_8018477C:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8018477C
  c->f[1]=-c->f[3]; // 80184780
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80184784
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[6]); // 80184788
  {uint32_t ea=c->r[2]+0xFFFF8EA8u; c->f[9]=c->ps1[9]=RF32(ea);} // 8018478C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[5]); // 80184790
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184794
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184798
  c->f[8]=c->ps1[8]=S(c->f[6]*c->f[9]); // 8018479C
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[9]); // 801847A0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 801847A4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[9]); // 801847A8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801847AC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801847B0
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 801847B4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 801847B8
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[1]); // 801847BC
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[7]); // 801847C0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 801847C4
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 801847C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801847CC
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[6]); // 801847D0
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[3]); // 801847D4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801847D8
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[4]);} // 801847DC
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 801847E0
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 801847E4
  c->r[1]=c->r[1]+0x00000020u; // 801847E8
  return; // 801847EC
}

// __GXSetProjection
void f_801847F0(Ctx* __restrict c) {
  trace_call(0x801847F0u);
  c->r[4]=0u+0xCC010000u; // 801847F0
  c->r[0]=0u+0x00000010u; // 801847F4
  c->r[3]=0u+0x00060000u; // 801847F8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801847FC
  c->r[0]=c->r[3]+0x00001020u; // 80184800
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80184804
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80184808
  c->r[5]=c->r[4]+0xFFFF8000u; // 8018480C
  {uint32_t ea=c->r[3]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 80184810
  {uint32_t ea=c->r[3]+0x00000534u; psq_load(c,1,ea,0,0);} // 80184814
  {uint32_t ea=c->r[3]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 80184818
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 8018481C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 80184820
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 80184824
  c->r[0]=R32(c->r[3]+0x00000528u); // 80184828
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8018482C
  return; // 80184830
}

// GXSetProjection
void f_80184834(Ctx* __restrict c) {
  trace_call(0x80184834u);
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80184834
  cmps(c,0,(int32_t)c->r[4],1); // 80184838
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018483C
  W32(c->r[5]+0x00000528u,c->r[4]); // 80184840
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184844
  {uint32_t ea=c->r[5]+0x0000052Cu; WF32(ea,c->f[1]);} // 80184848
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018484C
  {uint32_t ea=c->r[5]+0x00000534u; WF32(ea,c->f[0]);} // 80184850
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80184854
  {uint32_t ea=c->r[5]+0x0000053Cu; WF32(ea,c->f[1]);} // 80184858
  {uint32_t ea=c->r[5]+0x00000540u; WF32(ea,c->f[0]);} // 8018485C
  if (!crb(c,2)) { goto L_80184878; } // 80184860
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80184864
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80184868
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 8018486C
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 80184870
  goto L_80184888; // 80184874
L_80184878:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184878
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8018487C
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 80184880
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 80184884
L_80184888:;
  c->r[0]=R32(c->r[5]+0x000005FCu); // 80184888
  c->r[0]=c->r[0]|0x08000000u; // 8018488C
  W32(c->r[5]+0x000005FCu,c->r[0]); // 80184890
  return; // 80184894
}

// GXSetProjectionv
void f_80184898(Ctx* __restrict c) {
  trace_call(0x80184898u);
  {uint32_t ea=c->r[2]+0xFFFF8EA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184898
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8018489C
  fcmp(c,0,c->f[1],c->f[0]); // 801848A0
  if (!crb(c,2)) { goto L_801848B0; } // 801848A4
  c->r[0]=0u+0x00000000u; // 801848A8
  goto L_801848B4; // 801848AC
L_801848B0:;
  c->r[0]=0u+0x00000001u; // 801848B0
L_801848B4:;
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 801848B4
  W32(c->r[4]+0x00000528u,c->r[0]); // 801848B8
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 801848BC
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 801848C0
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,0,ea,0,0);} // 801848C4
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_store(c,2,ea,0,0);} // 801848C8
  {uint32_t ea=c->r[4]+0x00000534u; psq_store(c,1,ea,0,0);} // 801848CC
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_store(c,0,ea,0,0);} // 801848D0
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801848D4
  c->r[0]=c->r[0]|0x08000000u; // 801848D8
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801848DC
  return; // 801848E0
}

// GXGetProjectionv
void f_801848E4(Ctx* __restrict c) {
  trace_call(0x801848E4u);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 801848E4
  c->r[0]=R32(c->r[4]+0x00000528u); // 801848E8
  cmps(c,0,(int32_t)c->r[0],0); // 801848EC
  if (crb(c,2)) { goto L_801848FC; } // 801848F0
  {uint32_t ea=c->r[2]+0xFFFF8EA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801848F4
  goto L_80184900; // 801848F8
L_801848FC:;
  {uint32_t ea=c->r[2]+0xFFFF8EA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801848FC
L_80184900:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80184900
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80184904
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 80184908
  {uint32_t ea=c->r[4]+0x00000534u; psq_load(c,1,ea,0,0);} // 8018490C
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 80184910
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,2,ea,0,0);} // 80184914
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,1,ea,0,0);} // 80184918
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,0,ea,0,0);} // 8018491C
  return; // 80184920
}

// GXLoadPosMtxImm
void f_80184924(Ctx* __restrict c) {
  trace_call(0x80184924u);
  c->r[5]=0u+0xCC010000u; // 80184924
  c->r[0]=0u+0x00000010u; // 80184928
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8018492C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184930
  c->r[0]=c->r[4]|0x000B0000u; // 80184934
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80184938
  c->r[4]=c->r[5]+0xFFFF8000u; // 8018493C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 80184940
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 80184944
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 80184948
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8018494C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 80184950
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 80184954
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80184958
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 8018495C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80184960
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80184964
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80184968
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8018496C
  return; // 80184970
}

// GXLoadPosMtxIndx
void f_80184974(Ctx* __restrict c) {
  trace_call(0x80184974u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80184974
  c->r[6]=0u+0x00000000u; // 80184978
  c->r[6]=(rotl(c->r[0],0)&0x00000FFFu)|(c->r[6]&~0x00000FFFu); // 8018497C
  c->r[4]=0u+0xCC010000u; // 80184980
  c->r[0]=0u+0x00000020u; // 80184984
  c->r[5]=0u+0x0000000Bu; // 80184988
  c->r[6]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[6]&~0x0000F000u); // 8018498C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80184990
  c->r[6]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 80184994
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80184998
  return; // 8018499C
}

// GXLoadNrmMtxImm
void f_801849A0(Ctx* __restrict c) {
  trace_call(0x801849A0u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801849A0
  c->r[5]=0u+0xCC010000u; // 801849A4
  c->r[4]=c->r[0]-c->r[4]; // 801849A8
  c->r[0]=0u+0x00000010u; // 801849AC
  c->r[4]=c->r[4]+0x00000400u; // 801849B0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801849B4
  c->r[0]=c->r[4]|0x00080000u; // 801849B8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801849BC
  c->r[4]=c->r[5]+0xFFFF8000u; // 801849C0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 801849C4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801849C8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 801849CC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801849D0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 801849D4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801849D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 801849DC
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[4]);} // 801849E0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 801849E4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801849E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801849EC
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801849F0
  return; // 801849F4
}

// GXLoadNrmMtxIndx3x3
void f_801849F8(Ctx* __restrict c) {
  trace_call(0x801849F8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801849F8
  c->r[5]=0u+0xCC010000u; // 801849FC
  c->r[4]=c->r[0]-c->r[4]; // 80184A00
  c->r[6]=0u+0x00000000u; // 80184A04
  c->r[0]=0u+0x00000028u; // 80184A08
  c->r[4]=c->r[4]+0x00000400u; // 80184A0C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184A10
  c->r[6]=(rotl(c->r[4],0)&0x00000FFFu)|(c->r[6]&~0x00000FFFu); // 80184A14
  c->r[4]=0u+0x00000008u; // 80184A18
  c->r[6]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[6]&~0x0000F000u); // 80184A1C
  c->r[6]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 80184A20
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80184A24
  return; // 80184A28
}

// GXSetCurrentMtx
void f_80184A2C(Ctx* __restrict c) {
  trace_call(0x80184A2Cu);
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80184A2C
  c->r[0]=R32(c->r[4]+0x00000080u); // 80184A30
  c->r[0]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 80184A34
  W32(c->r[4]+0x00000080u,c->r[0]); // 80184A38
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80184A3C
  c->r[0]=c->r[0]|0x04000000u; // 80184A40
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80184A44
  return; // 80184A48
}

// GXLoadTexMtxImm
void f_80184A4C(Ctx* __restrict c) {
  trace_call(0x80184A4Cu);
  cmpu(c,0,c->r[4],0x00000040u); // 80184A4C
  if (crb(c,0)) { goto L_80184A64; } // 80184A50
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 80184A54
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80184A58
  c->r[7]=c->r[4]+0x00000500u; // 80184A5C
  goto L_80184A68; // 80184A60
L_80184A64:;
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80184A64
L_80184A68:;
  cmps(c,0,(int32_t)c->r[5],1); // 80184A68
  if (!crb(c,2)) { goto L_80184A78; } // 80184A6C
  c->r[4]=0u+0x00000008u; // 80184A70
  goto L_80184A7C; // 80184A74
L_80184A78:;
  c->r[4]=0u+0x0000000Cu; // 80184A78
L_80184A7C:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 80184A7C
  c->r[4]=0u+0xCC010000u; // 80184A80
  c->r[0]=0u+0x00000010u; // 80184A84
  cmps(c,0,(int32_t)c->r[5],0); // 80184A88
  c->r[5]=rotl(c->r[6],16)&0xFFFF0000u; // 80184A8C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80184A90
  c->r[0]=c->r[7]|c->r[5]; // 80184A94
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80184A98
  if (!crb(c,2)) { goto L_80184AD8; } // 80184A9C
  c->r[4]=c->r[4]+0xFFFF8000u; // 80184AA0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 80184AA4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 80184AA8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 80184AAC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 80184AB0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 80184AB4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 80184AB8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80184ABC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 80184AC0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80184AC4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80184AC8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80184ACC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80184AD0
  return; // 80184AD4
L_80184AD8:;
  c->r[4]=c->r[4]+0xFFFF8000u; // 80184AD8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 80184ADC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 80184AE0
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 80184AE4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 80184AE8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80184AEC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80184AF0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80184AF4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80184AF8
  return; // 80184AFC
}

// __GXSetViewport
void f_80184B00(Ctx* __restrict c) {
  trace_call(0x80184B00u);
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 80184B00
  c->r[3]=0u+0x00050000u; // 80184B04
  {uint32_t ea=c->r[2]+0xFFFF8EA8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80184B08
  c->r[4]=0u+0xCC010000u; // 80184B0C
  {uint32_t ea=c->r[6]+0x00000550u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184B10
  c->r[5]=0u+0x00000010u; // 80184B14
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80184B18
  c->r[0]=c->r[3]+0x0000101Au; // 80184B1C
  c->f[1]=-c->f[2]; // 80184B20
  {uint32_t ea=c->r[6]+0x00000544u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184B24
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[6]); // 80184B28
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 80184B2C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[6]); // 80184B30
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 80184B34
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[6]); // 80184B38
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 80184B3C
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 80184B40
  c->f[6]=c->ps1[6]=S(c->f[0]+c->f[7]); // 80184B44
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80184B48
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 80184B4C
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[2]); // 80184B50
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80184B54
  {uint32_t ea=c->r[2]+0xFFFF8EACu; c->f[2]=c->ps1[2]=RF32(ea);} // 80184B58
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 80184B5C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80184B60
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[3]); // 80184B64
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 80184B68
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 80184B6C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80184B70
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 80184B74
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[0]); // 80184B78
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 80184B7C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 80184B80
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80184B84
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80184B88
  return; // 80184B8C
}

// GXSetViewportJitter
void f_80184B90(Ctx* __restrict c) {
  trace_call(0x80184B90u);
  cmps(c,0,(int32_t)c->r[3],0); // 80184B90
  if (!crb(c,2)) { goto L_80184BA0; } // 80184B94
  {uint32_t ea=c->r[2]+0xFFFF8EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80184B98
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80184B9C
L_80184BA0:;
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80184BA0
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 80184BA4
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 80184BA8
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 80184BAC
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 80184BB0
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 80184BB4
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 80184BB8
  c->r[0]=R32(c->r[3]+0x000005FCu); // 80184BBC
  c->r[0]=c->r[0]|0x10000000u; // 80184BC0
  W32(c->r[3]+0x000005FCu,c->r[0]); // 80184BC4
  return; // 80184BC8
}

// GXSetViewport
void f_80184BCC(Ctx* __restrict c) {
  trace_call(0x80184BCCu);
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80184BCC
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 80184BD0
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 80184BD4
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 80184BD8
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 80184BDC
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 80184BE0
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 80184BE4
  c->r[0]=R32(c->r[3]+0x000005FCu); // 80184BE8
  c->r[0]=c->r[0]|0x10000000u; // 80184BEC
  W32(c->r[3]+0x000005FCu,c->r[0]); // 80184BF0
  return; // 80184BF4
}

// GXSetScissor
void f_80184BF8(Ctx* __restrict c) {
  trace_call(0x80184BF8u);
  c->r[8]=R32(c->r[2]+0xFFFF8DA0u); // 80184BF8
  c->r[4]=c->r[4]+0x00000156u; // 80184BFC
  c->r[9]=c->r[3]+0x00000156u; // 80184C00
  c->r[7]=0u+0xCC010000u; // 80184C04
  c->r[0]=R32(c->r[8]+0x00000148u); // 80184C08
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80184C0C
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 80184C10
  c->r[6]=c->r[4]+c->r[6]; // 80184C14
  W32(c->r[8]+0x00000148u,c->r[0]); // 80184C18
  c->r[3]=c->r[9]+c->r[5]; // 80184C1C
  c->r[5]=c->r[6]+0xFFFFFFFFu; // 80184C20
  c->r[4]=0u+0x00000061u; // 80184C24
  c->r[6]=R32(c->r[8]+0x0000014Cu); // 80184C28
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80184C2C
  c->r[6]=(rotl(c->r[5],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 80184C30
  c->r[0]=0u+0x00000000u; // 80184C34
  c->r[6]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 80184C38
  W32(c->r[8]+0x0000014Cu,c->r[6]); // 80184C3C
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80184C40
  c->r[3]=R32(c->r[8]+0x00000148u); // 80184C44
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80184C48
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80184C4C
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 80184C50
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80184C54
  W16(c->r[8]+0x00000002u,c->r[0]); // 80184C58
  return; // 80184C5C
}

// GXSetScissorBoxOffset
void f_80184C60(Ctx* __restrict c) {
  trace_call(0x80184C60u);
  c->r[0]=c->r[3]+0x00000156u; // 80184C60
  c->r[6]=0u+0x00000000u; // 80184C64
  c->r[6]=(rotl(c->r[0],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 80184C68
  c->r[5]=0u+0xCC010000u; // 80184C6C
  c->r[0]=0u+0x00000061u; // 80184C70
  c->r[3]=c->r[4]+0x00000156u; // 80184C74
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184C78
  c->r[6]=(rotl(c->r[3],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 80184C7C
  c->r[0]=0u+0x00000059u; // 80184C80
  c->r[3]=R32(c->r[2]+0xFFFF8DA0u); // 80184C84
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80184C88
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80184C8C
  c->r[0]=0u+0x00000000u; // 80184C90
  W16(c->r[3]+0x00000002u,c->r[0]); // 80184C94
  return; // 80184C98
}

// GXSetClipMode
void f_80184C9C(Ctx* __restrict c) {
  trace_call(0x80184C9Cu);
  c->r[6]=0u+0xCC010000u; // 80184C9C
  c->r[0]=0u+0x00000010u; // 80184CA0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184CA4
  c->r[5]=0u+0x00001005u; // 80184CA8
  c->r[4]=R32(c->r[2]+0xFFFF8DA0u); // 80184CAC
  c->r[0]=0u+0x00000001u; // 80184CB0
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 80184CB4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184CB8
  W16(c->r[4]+0x00000002u,c->r[0]); // 80184CBC
  return; // 80184CC0
}

// __GXSetMatrixIndex
void f_80184CC4(Ctx* __restrict c) {
  trace_call(0x80184CC4u);
  cmps(c,0,(int32_t)c->r[3],5); // 80184CC4
  if (!crb(c,0)) { goto L_80184D08; } // 80184CC8
  c->r[5]=0u+0xCC010000u; // 80184CCC
  c->r[0]=0u+0x00000008u; // 80184CD0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184CD4
  c->r[0]=0u+0x00000030u; // 80184CD8
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 80184CDC
  c->r[3]=0u+0x00000010u; // 80184CE0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184CE4
  c->r[0]=0u+0x00001018u; // 80184CE8
  c->r[4]=R32(c->r[6]+0x00000080u); // 80184CEC
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80184CF0
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80184CF4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80184CF8
  c->r[0]=R32(c->r[6]+0x00000080u); // 80184CFC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80184D00
  goto L_80184D40; // 80184D04
L_80184D08:;
  c->r[5]=0u+0xCC010000u; // 80184D08
  c->r[0]=0u+0x00000008u; // 80184D0C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184D10
  c->r[0]=0u+0x00000040u; // 80184D14
  c->r[6]=R32(c->r[2]+0xFFFF8DA0u); // 80184D18
  c->r[3]=0u+0x00000010u; // 80184D1C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80184D20
  c->r[0]=0u+0x00001019u; // 80184D24
  c->r[4]=R32(c->r[6]+0x00000084u); // 80184D28
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80184D2C
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80184D30
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80184D34
  c->r[0]=R32(c->r[6]+0x00000084u); // 80184D38
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80184D3C
L_80184D40:;
  c->r[0]=0u+0x00000001u; // 80184D40
  W16(c->r[6]+0x00000002u,c->r[0]); // 80184D44
  return; // 80184D48
}

// GXSetGPMetric
void f_80184D4C(Ctx* __restrict c) {
  trace_call(0x80184D4Cu);
  c->r[5]=R32(c->r[2]+0xFFFF8DA0u); // 80184D4C
  c->r[0]=R32(c->r[5]+0x000005ECu); // 80184D50
  cmps(c,0,(int32_t)c->r[0],34); // 80184D54
  if (crb(c,2)) { goto L_80184D84; } // 80184D58
  if (!crb(c,0)) { goto L_80184DD0; } // 80184D5C
  cmps(c,0,(int32_t)c->r[0],11); // 80184D60
  if (!crb(c,0)) { goto L_80184D74; } // 80184D64
  cmps(c,0,(int32_t)c->r[0],0); // 80184D68
  if (!crb(c,0)) { goto L_80184D84; } // 80184D6C
  goto L_80184DD0; // 80184D70
L_80184D74:;
  cmps(c,0,(int32_t)c->r[0],27); // 80184D74
  if (!crb(c,0)) { goto L_80184DBC; } // 80184D78
  goto L_80184DA4; // 80184D7C
  goto L_80184DD0; // 80184D80
L_80184D84:;
  c->r[7]=0u+0xCC010000u; // 80184D84
  c->r[0]=0u+0x00000010u; // 80184D88
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 80184D8C
  c->r[6]=0u+0x00001006u; // 80184D90
  c->r[0]=0u+0x00000000u; // 80184D94
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 80184D98
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80184D9C
  goto L_80184DD0; // 80184DA0
L_80184DA4:;
  c->r[6]=0u+0xCC010000u; // 80184DA4
  c->r[0]=0u+0x00000061u; // 80184DA8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184DAC
  c->r[0]=0u+0x23000000u; // 80184DB0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184DB4
  goto L_80184DD0; // 80184DB8
L_80184DBC:;
  c->r[6]=0u+0xCC010000u; // 80184DBC
  c->r[0]=0u+0x00000061u; // 80184DC0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184DC4
  c->r[0]=0u+0x24000000u; // 80184DC8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184DCC
L_80184DD0:;
  c->r[0]=R32(c->r[5]+0x000005F0u); // 80184DD0
  cmps(c,0,(int32_t)c->r[0],21); // 80184DD4
  if (crb(c,2)) { goto L_80184E04; } // 80184DD8
  if (!crb(c,0)) { goto L_80184E54; } // 80184DDC
  cmps(c,0,(int32_t)c->r[0],9); // 80184DE0
  if (!crb(c,0)) { goto L_80184DF4; } // 80184DE4
  cmps(c,0,(int32_t)c->r[0],0); // 80184DE8
  if (!crb(c,0)) { goto L_80184E04; } // 80184DEC
  goto L_80184E54; // 80184DF0
L_80184DF4:;
  cmps(c,0,(int32_t)c->r[0],17); // 80184DF4
  if (!crb(c,0)) { goto L_80184E48; } // 80184DF8
  goto L_80184E1C; // 80184DFC
  goto L_80184E54; // 80184E00
L_80184E04:;
  c->r[6]=0u+0xCC010000u; // 80184E04
  c->r[0]=0u+0x00000061u; // 80184E08
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184E0C
  c->r[0]=0u+0x67000000u; // 80184E10
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184E14
  goto L_80184E54; // 80184E18
L_80184E1C:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 80184E1C
  c->r[6]=0u+0xCC010000u; // 80184E20
  c->r[7]=0u+0x00000008u; // 80184E24
  c->r[0]=0u+0x00000020u; // 80184E28
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 80184E2C
  W32(c->r[5]+0x000005F4u,c->r[8]); // 80184E30
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80184E34
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184E38
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80184E3C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184E40
  goto L_80184E54; // 80184E44
L_80184E48:;
  c->r[6]=R32(c->r[13]+0xFFFFA024u); // 80184E48
  c->r[0]=0u+0x00000000u; // 80184E4C
  W16(c->r[6]+0x00000006u,c->r[0]); // 80184E50
L_80184E54:;
  cmpu(c,0,c->r[3],0x00000023u); // 80184E54
  W32(c->r[5]+0x000005ECu,c->r[3]); // 80184E58
  if (crb(c,1)) { goto L_80185278; } // 80184E5C
  c->r[6]=0u+0x80330000u; // 80184E60
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80184E64
  c->r[6]=c->r[6]+0x000000E4u; // 80184E68
  c->r[6]=R32(c->r[6]+c->r[0]); // 80184E6C
  c->ctr=c->r[6]; // 80184E70
  if (true) { switch (c->ctr) { case 0x80184E78u: goto L_80184E78; case 0x80184E98u: goto L_80184E98; case 0x80184EB8u: goto L_80184EB8; case 0x80184ED8u: goto L_80184ED8; case 0x80184EF8u: goto L_80184EF8; case 0x80184F18u: goto L_80184F18; case 0x80184F38u: goto L_80184F38; case 0x80184F58u: goto L_80184F58; case 0x80184F78u: goto L_80184F78; case 0x80184F98u: goto L_80184F98; case 0x80184FB8u: goto L_80184FB8; case 0x80184FD8u: goto L_80184FD8; case 0x80184FF8u: goto L_80184FF8; case 0x80185014u: goto L_80185014; case 0x80185030u: goto L_80185030; case 0x8018504Cu: goto L_8018504C; case 0x80185068u: goto L_80185068; case 0x80185084u: goto L_80185084; case 0x801850A0u: goto L_801850A0; case 0x801850BCu: goto L_801850BC; case 0x801850D8u: goto L_801850D8; case 0x801850F4u: goto L_801850F4; case 0x80185110u: goto L_80185110; case 0x8018512Cu: goto L_8018512C; case 0x80185148u: goto L_80185148; case 0x80185164u: goto L_80185164; case 0x80185180u: goto L_80185180; case 0x8018519Cu: goto L_8018519C; case 0x801851B8u: goto L_801851B8; case 0x801851D4u: goto L_801851D4; case 0x801851F0u: goto L_801851F0; case 0x8018520Cu: goto L_8018520C; case 0x80185228u: goto L_80185228; case 0x80185244u: goto L_80185244; case 0x80185260u: goto L_80185260; case 0x80185278u: goto L_80185278; case 0x8018529Cu: goto L_8018529C; case 0x801852B8u: goto L_801852B8; case 0x801852D4u: goto L_801852D4; case 0x801852F0u: goto L_801852F0; case 0x8018530Cu: goto L_8018530C; case 0x80185328u: goto L_80185328; case 0x80185344u: goto L_80185344; case 0x80185360u: goto L_80185360; case 0x8018537Cu: goto L_8018537C; case 0x80185398u: goto L_80185398; case 0x801853B4u: goto L_801853B4; case 0x801853E4u: goto L_801853E4; case 0x80185414u: goto L_80185414; case 0x80185444u: goto L_80185444; case 0x80185474u: goto L_80185474; case 0x801854A4u: goto L_801854A4; case 0x801854D4u: goto L_801854D4; case 0x80185504u: goto L_80185504; case 0x80185530u: goto L_80185530; case 0x80185540u: goto L_80185540; case 0x80185550u: goto L_80185550; case 0x80185560u: goto L_80185560; case 0x8018556Cu: goto L_8018556C; default: break; } dispatch(c,c->ctr); return; } // 80184E74
L_80184E78:;
  c->r[6]=0u+0xCC010000u; // 80184E78
  c->r[0]=0u+0x00000010u; // 80184E7C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184E80
  c->r[3]=0u+0x00001006u; // 80184E84
  c->r[0]=0u+0x00000273u; // 80184E88
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184E8C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184E90
  goto L_80185278; // 80184E94
L_80184E98:;
  c->r[6]=0u+0xCC010000u; // 80184E98
  c->r[0]=0u+0x00000010u; // 80184E9C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184EA0
  c->r[3]=0u+0x00001006u; // 80184EA4
  c->r[0]=0u+0x0000014Au; // 80184EA8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184EAC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184EB0
  goto L_80185278; // 80184EB4
L_80184EB8:;
  c->r[6]=0u+0xCC010000u; // 80184EB8
  c->r[0]=0u+0x00000010u; // 80184EBC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184EC0
  c->r[3]=0u+0x00001006u; // 80184EC4
  c->r[0]=0u+0x0000016Bu; // 80184EC8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184ECC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184ED0
  goto L_80185278; // 80184ED4
L_80184ED8:;
  c->r[6]=0u+0xCC010000u; // 80184ED8
  c->r[0]=0u+0x00000010u; // 80184EDC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184EE0
  c->r[3]=0u+0x00001006u; // 80184EE4
  c->r[0]=0u+0x00000084u; // 80184EE8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184EEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184EF0
  goto L_80185278; // 80184EF4
L_80184EF8:;
  c->r[6]=0u+0xCC010000u; // 80184EF8
  c->r[0]=0u+0x00000010u; // 80184EFC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F00
  c->r[3]=0u+0x00001006u; // 80184F04
  c->r[0]=0u+0x000000C6u; // 80184F08
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184F0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F10
  goto L_80185278; // 80184F14
L_80184F18:;
  c->r[6]=0u+0xCC010000u; // 80184F18
  c->r[0]=0u+0x00000010u; // 80184F1C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F20
  c->r[3]=0u+0x00001006u; // 80184F24
  c->r[0]=0u+0x00000210u; // 80184F28
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184F2C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F30
  goto L_80185278; // 80184F34
L_80184F38:;
  c->r[6]=0u+0xCC010000u; // 80184F38
  c->r[0]=0u+0x00000010u; // 80184F3C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F40
  c->r[3]=0u+0x00001006u; // 80184F44
  c->r[0]=0u+0x00000252u; // 80184F48
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184F4C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F50
  goto L_80185278; // 80184F54
L_80184F58:;
  c->r[6]=0u+0xCC010000u; // 80184F58
  c->r[0]=0u+0x00000010u; // 80184F5C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F60
  c->r[3]=0u+0x00001006u; // 80184F64
  c->r[0]=0u+0x00000231u; // 80184F68
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184F6C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F70
  goto L_80185278; // 80184F74
L_80184F78:;
  c->r[6]=0u+0xCC010000u; // 80184F78
  c->r[0]=0u+0x00000010u; // 80184F7C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F80
  c->r[3]=0u+0x00001006u; // 80184F84
  c->r[0]=0u+0x000001ADu; // 80184F88
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184F8C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184F90
  goto L_80185278; // 80184F94
L_80184F98:;
  c->r[6]=0u+0xCC010000u; // 80184F98
  c->r[0]=0u+0x00000010u; // 80184F9C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184FA0
  c->r[3]=0u+0x00001006u; // 80184FA4
  c->r[0]=0u+0x000001CEu; // 80184FA8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184FAC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184FB0
  goto L_80185278; // 80184FB4
L_80184FB8:;
  c->r[6]=0u+0xCC010000u; // 80184FB8
  c->r[0]=0u+0x00000010u; // 80184FBC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184FC0
  c->r[3]=0u+0x00001006u; // 80184FC4
  c->r[0]=0u+0x00000021u; // 80184FC8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184FCC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184FD0
  goto L_80185278; // 80184FD4
L_80184FD8:;
  c->r[6]=0u+0xCC010000u; // 80184FD8
  c->r[0]=0u+0x00000010u; // 80184FDC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80184FE0
  c->r[3]=0u+0x00001006u; // 80184FE4
  c->r[0]=0u+0x00000153u; // 80184FE8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80184FEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80184FF0
  goto L_80185278; // 80184FF4
L_80184FF8:;
  c->r[6]=0u+0xCC010000u; // 80184FF8
  c->r[0]=0u+0x00000061u; // 80184FFC
  c->r[3]=0u+0x23010000u; // 80185000
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185004
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 80185008
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8018500C
  goto L_80185278; // 80185010
L_80185014:;
  c->r[6]=0u+0xCC010000u; // 80185014
  c->r[0]=0u+0x00000061u; // 80185018
  c->r[3]=0u+0x23010000u; // 8018501C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185020
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 80185024
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185028
  goto L_80185278; // 8018502C
L_80185030:;
  c->r[6]=0u+0xCC010000u; // 80185030
  c->r[0]=0u+0x00000061u; // 80185034
  c->r[3]=0u+0x23010000u; // 80185038
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8018503C
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 80185040
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185044
  goto L_80185278; // 80185048
L_8018504C:;
  c->r[6]=0u+0xCC010000u; // 8018504C
  c->r[0]=0u+0x00000061u; // 80185050
  c->r[3]=0u+0x23000000u; // 80185054
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185058
  c->r[0]=c->r[3]+0x00001E7Fu; // 8018505C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185060
  goto L_80185278; // 80185064
L_80185068:;
  c->r[6]=0u+0xCC010000u; // 80185068
  c->r[0]=0u+0x00000061u; // 8018506C
  c->r[3]=0u+0x23010000u; // 80185070
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185074
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 80185078
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8018507C
  goto L_80185278; // 80185080
L_80185084:;
  c->r[6]=0u+0xCC010000u; // 80185084
  c->r[0]=0u+0x00000061u; // 80185088
  c->r[3]=0u+0x23010000u; // 8018508C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185090
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 80185094
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185098
  goto L_80185278; // 8018509C
L_801850A0:;
  c->r[6]=0u+0xCC010000u; // 801850A0
  c->r[0]=0u+0x00000061u; // 801850A4
  c->r[3]=0u+0x23010000u; // 801850A8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801850AC
  c->r[0]=c->r[3]+0xFFFFACBFu; // 801850B0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801850B4
  goto L_80185278; // 801850B8
L_801850BC:;
  c->r[6]=0u+0xCC010000u; // 801850BC
  c->r[0]=0u+0x00000061u; // 801850C0
  c->r[3]=0u+0x23010000u; // 801850C4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801850C8
  c->r[0]=c->r[3]+0xFFFFACFFu; // 801850CC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801850D0
  goto L_80185278; // 801850D4
L_801850D8:;
  c->r[6]=0u+0xCC010000u; // 801850D8
  c->r[0]=0u+0x00000061u; // 801850DC
  c->r[3]=0u+0x23010000u; // 801850E0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801850E4
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 801850E8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801850EC
  goto L_80185278; // 801850F0
L_801850F4:;
  c->r[6]=0u+0xCC010000u; // 801850F4
  c->r[0]=0u+0x00000061u; // 801850F8
  c->r[3]=0u+0x23010000u; // 801850FC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185100
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 80185104
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185108
  goto L_80185278; // 8018510C
L_80185110:;
  c->r[6]=0u+0xCC010000u; // 80185110
  c->r[0]=0u+0x00000061u; // 80185114
  c->r[3]=0u+0x23010000u; // 80185118
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8018511C
  c->r[0]=c->r[3]+0xFFFFADBFu; // 80185120
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185124
  goto L_80185278; // 80185128
L_8018512C:;
  c->r[6]=0u+0xCC010000u; // 8018512C
  c->r[0]=0u+0x00000061u; // 80185130
  c->r[3]=0u+0x23010000u; // 80185134
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185138
  c->r[0]=c->r[3]+0xFFFFADFFu; // 8018513C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185140
  goto L_80185278; // 80185144
L_80185148:;
  c->r[6]=0u+0xCC010000u; // 80185148
  c->r[0]=0u+0x00000061u; // 8018514C
  c->r[3]=0u+0x23010000u; // 80185150
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185154
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 80185158
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8018515C
  goto L_80185278; // 80185160
L_80185164:;
  c->r[6]=0u+0xCC010000u; // 80185164
  c->r[0]=0u+0x00000061u; // 80185168
  c->r[3]=0u+0x23010000u; // 8018516C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185170
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 80185174
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185178
  goto L_80185278; // 8018517C
L_80185180:;
  c->r[6]=0u+0xCC010000u; // 80185180
  c->r[0]=0u+0x00000061u; // 80185184
  c->r[3]=0u+0x23010000u; // 80185188
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8018518C
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 80185190
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185194
  goto L_80185278; // 80185198
L_8018519C:;
  c->r[6]=0u+0xCC010000u; // 8018519C
  c->r[0]=0u+0x00000061u; // 801851A0
  c->r[3]=0u+0x23010000u; // 801851A4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801851A8
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 801851AC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801851B0
  goto L_80185278; // 801851B4
L_801851B8:;
  c->r[6]=0u+0xCC010000u; // 801851B8
  c->r[0]=0u+0x00000061u; // 801851BC
  c->r[3]=0u+0x24030000u; // 801851C0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801851C4
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 801851C8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801851CC
  goto L_80185278; // 801851D0
L_801851D4:;
  c->r[6]=0u+0xCC010000u; // 801851D4
  c->r[0]=0u+0x00000061u; // 801851D8
  c->r[3]=0u+0x24030000u; // 801851DC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801851E0
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 801851E4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801851E8
  goto L_80185278; // 801851EC
L_801851F0:;
  c->r[6]=0u+0xCC010000u; // 801851F0
  c->r[0]=0u+0x00000061u; // 801851F4
  c->r[3]=0u+0x24030000u; // 801851F8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801851FC
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 80185200
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185204
  goto L_80185278; // 80185208
L_8018520C:;
  c->r[6]=0u+0xCC010000u; // 8018520C
  c->r[0]=0u+0x00000061u; // 80185210
  c->r[3]=0u+0x24030000u; // 80185214
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185218
  c->r[0]=c->r[3]+0xFFFFC108u; // 8018521C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185220
  goto L_80185278; // 80185224
L_80185228:;
  c->r[6]=0u+0xCC010000u; // 80185228
  c->r[0]=0u+0x00000061u; // 8018522C
  c->r[3]=0u+0x24030000u; // 80185230
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185234
  c->r[0]=c->r[3]+0xFFFFC129u; // 80185238
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8018523C
  goto L_80185278; // 80185240
L_80185244:;
  c->r[6]=0u+0xCC010000u; // 80185244
  c->r[0]=0u+0x00000061u; // 80185248
  c->r[3]=0u+0x24030000u; // 8018524C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80185250
  c->r[0]=c->r[3]+0xFFFFC14Au; // 80185254
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185258
  goto L_80185278; // 8018525C
L_80185260:;
  c->r[6]=0u+0xCC010000u; // 80185260
  c->r[0]=0u+0x00000061u; // 80185264
  c->r[3]=0u+0x24030000u; // 80185268
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8018526C
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 80185270
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80185274
L_80185278:;
  cmpu(c,0,c->r[4],0x00000016u); // 80185278
  W32(c->r[5]+0x000005F0u,c->r[4]); // 8018527C
  if (crb(c,1)) { goto L_8018556C; } // 80185280
  c->r[3]=0u+0x80330000u; // 80185284
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80185288
  c->r[3]=c->r[3]+0x00000088u; // 8018528C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80185290
  c->ctr=c->r[3]; // 80185294
  if (true) { switch (c->ctr) { case 0x80184E78u: goto L_80184E78; case 0x80184E98u: goto L_80184E98; case 0x80184EB8u: goto L_80184EB8; case 0x80184ED8u: goto L_80184ED8; case 0x80184EF8u: goto L_80184EF8; case 0x80184F18u: goto L_80184F18; case 0x80184F38u: goto L_80184F38; case 0x80184F58u: goto L_80184F58; case 0x80184F78u: goto L_80184F78; case 0x80184F98u: goto L_80184F98; case 0x80184FB8u: goto L_80184FB8; case 0x80184FD8u: goto L_80184FD8; case 0x80184FF8u: goto L_80184FF8; case 0x80185014u: goto L_80185014; case 0x80185030u: goto L_80185030; case 0x8018504Cu: goto L_8018504C; case 0x80185068u: goto L_80185068; case 0x80185084u: goto L_80185084; case 0x801850A0u: goto L_801850A0; case 0x801850BCu: goto L_801850BC; case 0x801850D8u: goto L_801850D8; case 0x801850F4u: goto L_801850F4; case 0x80185110u: goto L_80185110; case 0x8018512Cu: goto L_8018512C; case 0x80185148u: goto L_80185148; case 0x80185164u: goto L_80185164; case 0x80185180u: goto L_80185180; case 0x8018519Cu: goto L_8018519C; case 0x801851B8u: goto L_801851B8; case 0x801851D4u: goto L_801851D4; case 0x801851F0u: goto L_801851F0; case 0x8018520Cu: goto L_8018520C; case 0x80185228u: goto L_80185228; case 0x80185244u: goto L_80185244; case 0x80185260u: goto L_80185260; case 0x80185278u: goto L_80185278; case 0x8018529Cu: goto L_8018529C; case 0x801852B8u: goto L_801852B8; case 0x801852D4u: goto L_801852D4; case 0x801852F0u: goto L_801852F0; case 0x8018530Cu: goto L_8018530C; case 0x80185328u: goto L_80185328; case 0x80185344u: goto L_80185344; case 0x80185360u: goto L_80185360; case 0x8018537Cu: goto L_8018537C; case 0x80185398u: goto L_80185398; case 0x801853B4u: goto L_801853B4; case 0x801853E4u: goto L_801853E4; case 0x80185414u: goto L_80185414; case 0x80185444u: goto L_80185444; case 0x80185474u: goto L_80185474; case 0x801854A4u: goto L_801854A4; case 0x801854D4u: goto L_801854D4; case 0x80185504u: goto L_80185504; case 0x80185530u: goto L_80185530; case 0x80185540u: goto L_80185540; case 0x80185550u: goto L_80185550; case 0x80185560u: goto L_80185560; case 0x8018556Cu: goto L_8018556C; default: break; } dispatch(c,c->ctr); return; } // 80185298
L_8018529C:;
  c->r[4]=0u+0xCC010000u; // 8018529C
  c->r[0]=0u+0x00000061u; // 801852A0
  c->r[3]=0u+0x67000000u; // 801852A4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801852A8
  c->r[0]=c->r[3]+0x00000042u; // 801852AC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801852B0
  goto L_8018556C; // 801852B4
L_801852B8:;
  c->r[4]=0u+0xCC010000u; // 801852B8
  c->r[0]=0u+0x00000061u; // 801852BC
  c->r[3]=0u+0x67000000u; // 801852C0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801852C4
  c->r[0]=c->r[3]+0x00000084u; // 801852C8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801852CC
  goto L_8018556C; // 801852D0
L_801852D4:;
  c->r[4]=0u+0xCC010000u; // 801852D4
  c->r[0]=0u+0x00000061u; // 801852D8
  c->r[3]=0u+0x67000000u; // 801852DC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801852E0
  c->r[0]=c->r[3]+0x00000063u; // 801852E4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801852E8
  goto L_8018556C; // 801852EC
L_801852F0:;
  c->r[4]=0u+0xCC010000u; // 801852F0
  c->r[0]=0u+0x00000061u; // 801852F4
  c->r[3]=0u+0x67000000u; // 801852F8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801852FC
  c->r[0]=c->r[3]+0x00000129u; // 80185300
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80185304
  goto L_8018556C; // 80185308
L_8018530C:;
  c->r[4]=0u+0xCC010000u; // 8018530C
  c->r[0]=0u+0x00000061u; // 80185310
  c->r[3]=0u+0x67000000u; // 80185314
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80185318
  c->r[0]=c->r[3]+0x00000252u; // 8018531C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80185320
  goto L_8018556C; // 80185324
L_80185328:;
  c->r[4]=0u+0xCC010000u; // 80185328
  c->r[0]=0u+0x00000061u; // 8018532C
  c->r[3]=0u+0x67000000u; // 80185330
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80185334
  c->r[0]=c->r[3]+0x00000021u; // 80185338
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8018533C
  goto L_8018556C; // 80185340
L_80185344:;
  c->r[4]=0u+0xCC010000u; // 80185344
  c->r[0]=0u+0x00000061u; // 80185348
  c->r[3]=0u+0x67000000u; // 8018534C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80185350
  c->r[0]=c->r[3]+0x0000014Bu; // 80185354
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80185358
  goto L_8018556C; // 8018535C
L_80185360:;
  c->r[4]=0u+0xCC010000u; // 80185360
  c->r[0]=0u+0x00000061u; // 80185364
  c->r[3]=0u+0x67000000u; // 80185368
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8018536C
  c->r[0]=c->r[3]+0x0000018Du; // 80185370
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80185374
  goto L_8018556C; // 80185378
L_8018537C:;
  c->r[4]=0u+0xCC010000u; // 8018537C
  c->r[0]=0u+0x00000061u; // 80185380
  c->r[3]=0u+0x67000000u; // 80185384
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80185388
  c->r[0]=c->r[3]+0x000001CFu; // 8018538C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80185390
  goto L_8018556C; // 80185394
L_80185398:;
  c->r[4]=0u+0xCC010000u; // 80185398
  c->r[0]=0u+0x00000061u; // 8018539C
  c->r[3]=0u+0x67000000u; // 801853A0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801853A4
  c->r[0]=c->r[3]+0x00000211u; // 801853A8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801853AC
  goto L_8018556C; // 801853B0
L_801853B4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801853B4
  c->r[0]=0u+0x00000002u; // 801853B8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801853BC
  c->r[3]=0u+0xCC010000u; // 801853C0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801853C4
  c->r[4]=0u+0x00000008u; // 801853C8
  c->r[0]=0u+0x00000020u; // 801853CC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801853D0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801853D4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801853D8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801853DC
  goto L_8018556C; // 801853E0
L_801853E4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801853E4
  c->r[0]=0u+0x00000003u; // 801853E8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801853EC
  c->r[3]=0u+0xCC010000u; // 801853F0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801853F4
  c->r[4]=0u+0x00000008u; // 801853F8
  c->r[0]=0u+0x00000020u; // 801853FC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80185400
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80185404
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80185408
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8018540C
  goto L_8018556C; // 80185410
L_80185414:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 80185414
  c->r[0]=0u+0x00000004u; // 80185418
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8018541C
  c->r[3]=0u+0xCC010000u; // 80185420
  W32(c->r[5]+0x000005F4u,c->r[4]); // 80185424
  c->r[4]=0u+0x00000008u; // 80185428
  c->r[0]=0u+0x00000020u; // 8018542C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80185430
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80185434
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80185438
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8018543C
  goto L_8018556C; // 80185440
L_80185444:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 80185444
  c->r[0]=0u+0x00000005u; // 80185448
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8018544C
  c->r[3]=0u+0xCC010000u; // 80185450
  W32(c->r[5]+0x000005F4u,c->r[4]); // 80185454
  c->r[4]=0u+0x00000008u; // 80185458
  c->r[0]=0u+0x00000020u; // 8018545C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80185460
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80185464
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80185468
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8018546C
  goto L_8018556C; // 80185470
L_80185474:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 80185474
  c->r[0]=0u+0x00000006u; // 80185478
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8018547C
  c->r[3]=0u+0xCC010000u; // 80185480
  W32(c->r[5]+0x000005F4u,c->r[4]); // 80185484
  c->r[4]=0u+0x00000008u; // 80185488
  c->r[0]=0u+0x00000020u; // 8018548C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80185490
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80185494
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80185498
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8018549C
  goto L_8018556C; // 801854A0
L_801854A4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801854A4
  c->r[0]=0u+0x00000007u; // 801854A8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801854AC
  c->r[3]=0u+0xCC010000u; // 801854B0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801854B4
  c->r[4]=0u+0x00000008u; // 801854B8
  c->r[0]=0u+0x00000020u; // 801854BC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801854C0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801854C4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801854C8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801854CC
  goto L_8018556C; // 801854D0
L_801854D4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801854D4
  c->r[0]=0u+0x00000009u; // 801854D8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801854DC
  c->r[3]=0u+0xCC010000u; // 801854E0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801854E4
  c->r[4]=0u+0x00000008u; // 801854E8
  c->r[0]=0u+0x00000020u; // 801854EC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801854F0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801854F4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801854F8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801854FC
  goto L_8018556C; // 80185500
L_80185504:;
  c->r[4]=0u+0x00000008u; // 80185504
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80185508
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8018550C
  c->r[3]=0u+0xCC010000u; // 80185510
  W32(c->r[5]+0x000005F4u,c->r[0]); // 80185514
  c->r[0]=0u+0x00000020u; // 80185518
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8018551C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80185520
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80185524
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80185528
  goto L_8018556C; // 8018552C
L_80185530:;
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 80185530
  c->r[0]=0u+0x00000002u; // 80185534
  W16(c->r[3]+0x00000006u,c->r[0]); // 80185538
  goto L_8018556C; // 8018553C
L_80185540:;
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 80185540
  c->r[0]=0u+0x00000003u; // 80185544
  W16(c->r[3]+0x00000006u,c->r[0]); // 80185548
  goto L_8018556C; // 8018554C
L_80185550:;
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 80185550
  c->r[0]=0u+0x00000004u; // 80185554
  W16(c->r[3]+0x00000006u,c->r[0]); // 80185558
  goto L_8018556C; // 8018555C
L_80185560:;
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 80185560
  c->r[0]=0u+0x00000005u; // 80185564
  W16(c->r[3]+0x00000006u,c->r[0]); // 80185568
L_8018556C:;
  c->r[0]=0u+0x00000000u; // 8018556C
  W16(c->r[5]+0x00000002u,c->r[0]); // 80185570
  return; // 80185574
}

// GXClearGPMetric
void f_80185578(Ctx* __restrict c) {
  trace_call(0x80185578u);
  c->r[3]=R32(c->r[13]+0xFFFFA024u); // 80185578
  c->r[0]=0u+0x00000004u; // 8018557C
  W16(c->r[3]+0x00000004u,c->r[0]); // 80185580
  return; // 80185584
}

// strlen
void f_80185588(Ctx* __restrict c) {
  trace_call(0x80185588u);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 80185588
  c->r[3]=0u+0xFFFFFFFFu; // 8018558C
L_80185590:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 80185590
  c->r[3]=c->r[3]+0x00000001u; // 80185594
  cmps(c,0,(int32_t)c->r[0],0); // 80185598
  if (!crb(c,2)) { IRQCHK(c); goto L_80185590; } // 8018559C
  return; // 801855A0
}

// __va_arg
void f_801855A4(Ctx* __restrict c) {
  trace_call(0x801855A4u);
  c->r[7]=R8(c->r[3]+0x00000000u); // 801855A4
  cmps(c,0,(int32_t)c->r[4],3); // 801855A8
  c->r[6]=c->r[3]|c->r[3]; // 801855AC
  c->r[0]=0u+0x00000008u; // 801855B0
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801855B4
  c->r[8]=0u+0x00000004u; // 801855B8
  c->r[9]=0u+0x00000001u; // 801855BC
  c->r[5]=0u+0x00000000u; // 801855C0
  c->r[10]=0u+0x00000000u; // 801855C4
  c->r[11]=0u+0x00000004u; // 801855C8
  if (!crb(c,2)) { goto L_801855E8; } // 801855CC
  c->r[7]=R8(c->r[3]+0x00000001u); // 801855D0
  c->r[6]=c->r[3]+0x00000001u; // 801855D4
  c->r[8]=0u+0x00000008u; // 801855D8
  c->r[10]=0u+0x00000020u; // 801855DC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801855E0
  c->r[11]=0u+0x00000008u; // 801855E4
L_801855E8:;
  cmps(c,0,(int32_t)c->r[4],2); // 801855E8
  if (!crb(c,2)) { goto L_80185608; } // 801855EC
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 801855F0
  c->r[8]=0u+0x00000008u; // 801855F4
  c->r[0]=0u+0x00000007u; // 801855F8
  if (crb(c,2)) { goto L_80185604; } // 801855FC
  c->r[5]=0u+0x00000001u; // 80185600
L_80185604:;
  c->r[9]=0u+0x00000002u; // 80185604
L_80185608:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80185608
  if (!crb(c,0)) { goto L_80185630; } // 8018560C
  c->r[7]=c->r[7]+c->r[5]; // 80185610
  c->r[0]=R32(c->r[3]+0x00000008u); // 80185614
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[11]); // 80185618
  c->r[3]=c->r[0]+c->r[10]; // 8018561C
  c->r[0]=c->r[7]+c->r[9]; // 80185620
  W8(c->r[6]+0x00000000u,c->r[0]); // 80185624
  c->r[5]=c->r[5]+c->r[3]; // 80185628
  goto L_80185658; // 8018562C
L_80185630:;
  c->r[0]=0u+0x00000008u; // 80185630
  W8(c->r[6]+0x00000000u,c->r[0]); // 80185634
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 80185638
  c->r[5]=R32(c->r[3]+0x00000004u); // 8018563C
  c->r[6]=~(c->r[0]|c->r[0]); // 80185640
  c->r[5]=c->r[8]+c->r[5]; // 80185644
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80185648
  c->r[5]=c->r[6]&c->r[0]; // 8018564C
  c->r[0]=c->r[5]+c->r[8]; // 80185650
  W32(c->r[3]+0x00000004u,c->r[0]); // 80185654
L_80185658:;
  cmps(c,0,(int32_t)c->r[4],0); // 80185658
  if (!crb(c,2)) { goto L_80185664; } // 8018565C
  c->r[5]=R32(c->r[5]+0x00000000u); // 80185660
L_80185664:;
  c->r[3]=c->r[5]|c->r[5]; // 80185664
  return; // 80185668
}

// __register_global_object
void f_8018566C(Ctx* __restrict c) {
  trace_call(0x8018566Cu);
  c->r[0]=R32(c->r[13]+0xFFFFA080u); // 8018566C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80185670
  W32(c->r[5]+0x00000004u,c->r[4]); // 80185674
  W32(c->r[5]+0x00000008u,c->r[3]); // 80185678
  W32(c->r[13]+0xFFFFA080u,c->r[5]); // 8018567C
  return; // 80185680
}

// __destroy_global_chain
void f_80185684(Ctx* __restrict c) {
  trace_call(0x80185684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185684
  c->r[0]=c->lr; // 80185688
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018568C
  goto L_801856B0; // 80185690
L_80185694:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80185694
  c->r[4]=0u+0xFFFFFFFFu; // 80185698
  W32(c->r[13]+0xFFFFA080u,c->r[0]); // 8018569C
  c->r[12]=R32(c->r[3]+0x00000004u); // 801856A0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801856A4
  c->ctr=c->r[12]; // 801856A8
  if (true) { c->lr=0x801856B0u; dispatch(c,c->ctr); } // 801856AC
L_801856B0:;
  c->r[3]=R32(c->r[13]+0xFFFFA080u); // 801856B0
  cmps(c,0,(int32_t)c->r[3],0); // 801856B4
  if (!crb(c,2)) { IRQCHK(c); goto L_80185694; } // 801856B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801856BC
  c->lr=c->r[0]; // 801856C0
  c->r[1]=c->r[1]+0x00000010u; // 801856C4
  return; // 801856C8
}

// dtor_801856CC
void f_801856CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801856CC
  c->r[0]=c->lr; // 801856D0
  cmps(c,0,(int32_t)c->r[3],0); // 801856D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801856D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801856DC
  c->r[31]=c->r[3]|c->r[3]; // 801856E0
  if (crb(c,2)) { goto L_801856F4; } // 801856E4
  cmps(c,0,(int32_t)c->r[4],0); // 801856E8
  if (!crb(c,1)) { goto L_801856F4; } // 801856EC
  c->lr=0x801856F4u; f_800D6AD0(c); // 801856F0
L_801856F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801856F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801856F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801856FC
  c->lr=c->r[0]; // 80185700
  c->r[1]=c->r[1]+0x00000010u; // 80185704
  return; // 80185708
}

// fn_8018570C
void f_8018570C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018570C
  c->r[0]=c->lr; // 80185710
  cmps(c,0,(int32_t)c->r[3],0); // 80185714
  W32(c->r[1]+0x00000014u,c->r[0]); // 80185718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018571C
  c->r[31]=c->r[3]|c->r[3]; // 80185720
  if (crb(c,2)) { goto L_80185734; } // 80185724
  cmps(c,0,(int32_t)c->r[4],0); // 80185728
  if (!crb(c,1)) { goto L_80185734; } // 8018572C
  c->lr=0x80185734u; f_800D6AD0(c); // 80185730
L_80185734:;
  c->r[3]=c->r[31]|c->r[31]; // 80185734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80185738
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018573C
  c->lr=c->r[0]; // 80185740
  c->r[1]=c->r[1]+0x00000010u; // 80185744
  return; // 80185748
}

// fn_8018574C
void f_8018574C(Ctx* __restrict c) {
  c->r[3]=0u+0x80330000u; // 8018574C
  c->r[3]=c->r[3]+0x00000194u; // 80185750
  return; // 80185754
}

// fn_80185758
void f_80185758(Ctx* __restrict c) {
  f_80188094(c); return; // 80185758
}

// fn_8018575C
void f_8018575C(Ctx* __restrict c) {
  f_80185760(c); return; // 8018575C
}

// fn_80185760
void f_80185760(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF9218u); // 80185760
  c->ctr=c->r[12]; // 80185764
  if (true) { dispatch(c,c->ctr); return; } // 80185768
}

// fn_8018576C
void f_8018576C(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF921Cu); // 8018576C
  c->ctr=c->r[12]; // 80185770
  if (true) { dispatch(c,c->ctr); return; } // 80185774
}

// fn_80185778
void f_80185778(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80185778
  c->r[0]=0u+0x00000000u; // 8018577C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80185780
  c->r[7]=c->r[4]|c->r[4]; // 80185784
  if (!crb(c,2)) { goto L_80185794; } // 80185788
  c->r[3]=0u+0x00000001u; // 8018578C
  return; // 80185790
L_80185794:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80185794
  c->r[6]=c->r[3]|c->r[3]; // 80185798
  cmps(c,0,(int32_t)c->r[0],80); // 8018579C
  if (!crb(c,2)) { goto L_801857F8; } // 801857A0
  c->r[0]=R8(c->r[4]+0x00000001u); // 801857A4
  c->r[7]=c->r[4]+0x00000001u; // 801857A8
  cmps(c,0,(int32_t)c->r[0],67); // 801857AC
  if (!crb(c,2)) { goto L_801857B8; } // 801857B0
  c->r[7]=c->r[7]+0x00000001u; // 801857B4
L_801857B8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801857B8
  cmps(c,0,(int32_t)c->r[0],86); // 801857BC
  if (!crb(c,2)) { goto L_801857C8; } // 801857C0
  c->r[7]=c->r[7]+0x00000001u; // 801857C4
L_801857C8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801857C8
  cmps(c,0,(int32_t)c->r[0],118); // 801857CC
  if (!crb(c,2)) { goto L_801857F4; } // 801857D0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801857D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801857D8
  cmps(c,0,(int32_t)c->r[0],80); // 801857DC
  if (crb(c,2)) { goto L_801857EC; } // 801857E0
  cmps(c,0,(int32_t)c->r[0],42); // 801857E4
  if (!crb(c,2)) { goto L_801857F4; } // 801857E8
L_801857EC:;
  c->r[3]=0u+0x00000001u; // 801857EC
  return; // 801857F0
L_801857F4:;
  c->r[7]=c->r[4]|c->r[4]; // 801857F4
L_801857F8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801857F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801857FC
  cmps(c,0,(int32_t)c->r[0],42); // 80185800
  if (crb(c,2)) { goto L_80185810; } // 80185804
  cmps(c,0,(int32_t)c->r[0],33); // 80185808
  if (!crb(c,2)) { goto L_80185944; } // 8018580C
L_80185810:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80185810
  c->r[6]=c->r[3]+0x00000001u; // 80185814
  c->r[3]=R8(c->r[3]+0x00000000u); // 80185818
  c->r[7]=c->r[7]+0x00000001u; // 8018581C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80185820
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80185824
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80185828
  if (crb(c,2)) { goto L_80185838; } // 8018582C
  c->r[3]=0u+0x00000000u; // 80185830
  return; // 80185834
L_80185838:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80185838
  c->r[7]=c->r[7]+0x00000001u; // 8018583C
  c->r[3]=R8(c->r[6]+0x00000000u); // 80185840
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80185844
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80185848
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018584C
  if (!crb(c,2)) { goto L_80185898; } // 80185850
  cmps(c,0,(int32_t)c->r[3],33); // 80185854
  c->r[6]=c->r[6]+0x00000001u; // 80185858
  if (!crb(c,2)) { IRQCHK(c); goto L_80185838; } // 8018585C
  c->r[4]=0u+0x00000000u; // 80185860
  goto L_80185880; // 80185864
L_80185868:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 80185868
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 8018586C
  c->r[6]=c->r[6]+0x00000001u; // 80185870
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80185874
  c->r[4]=c->r[3]+c->r[0]; // 80185878
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 8018587C
L_80185880:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 80185880
  cmps(c,0,(int32_t)c->r[0],33); // 80185884
  if (!crb(c,2)) { IRQCHK(c); goto L_80185868; } // 80185888
  W32(c->r[5]+0x00000000u,c->r[4]); // 8018588C
  c->r[3]=0u+0x00000001u; // 80185890
  return; // 80185894
L_80185898:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 80185898
  c->r[6]=c->r[6]+0x00000001u; // 8018589C
  cmps(c,0,(int32_t)c->r[0],33); // 801858A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80185898; } // 801858A4
L_801858A8:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801858A8
  c->r[6]=c->r[6]+0x00000001u; // 801858AC
  cmps(c,0,(int32_t)c->r[0],33); // 801858B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801858A8; } // 801858B4
  c->r[0]=R8(c->r[6]+0x00000000u); // 801858B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801858BC
  if (!crb(c,2)) { goto L_801858CC; } // 801858C0
  c->r[3]=0u+0x00000000u; // 801858C4
  return; // 801858C8
L_801858CC:;
  c->r[7]=c->r[4]+0x00000001u; // 801858CC
  IRQCHK(c); goto L_80185838; // 801858D0
  goto L_80185944; // 801858D4
L_801858D8:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 801858D8
  c->r[6]=c->r[6]+0x00000001u; // 801858DC
  cmps(c,0,(int32_t)c->r[0],67); // 801858E0
  if (!crb(c,2)) { goto L_801858FC; } // 801858E4
  c->r[0]=R8(c->r[6]+0x00000000u); // 801858E8
  cmps(c,0,(int32_t)c->r[0],67); // 801858EC
  if (!crb(c,2)) { goto L_801858F8; } // 801858F0
  c->r[6]=c->r[6]+0x00000001u; // 801858F4
L_801858F8:;
  c->r[7]=c->r[7]+0x00000001u; // 801858F8
L_801858FC:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801858FC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80185900
  cmps(c,0,(int32_t)c->r[3],67); // 80185904
  if (!crb(c,2)) { goto L_80185914; } // 80185908
  c->r[3]=0u+0x00000000u; // 8018590C
  return; // 80185910
L_80185914:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80185914
  cmps(c,0,(int32_t)c->r[0],86); // 80185918
  if (!crb(c,2)) { goto L_80185930; } // 8018591C
  cmps(c,0,(int32_t)c->r[3],86); // 80185920
  if (!crb(c,2)) { goto L_8018592C; } // 80185924
  c->r[6]=c->r[6]+0x00000001u; // 80185928
L_8018592C:;
  c->r[7]=c->r[7]+0x00000001u; // 8018592C
L_80185930:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 80185930
  cmps(c,0,(int32_t)c->r[0],86); // 80185934
  if (!crb(c,2)) { goto L_80185944; } // 80185938
  c->r[3]=0u+0x00000000u; // 8018593C
  return; // 80185940
L_80185944:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 80185944
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80185948
  cmps(c,0,(int32_t)c->r[0],80); // 8018594C
  if (crb(c,2)) { goto L_8018595C; } // 80185950
  cmps(c,0,(int32_t)c->r[0],82); // 80185954
  if (!crb(c,2)) { goto L_8018598C; } // 80185958
L_8018595C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8018595C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80185960
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80185964
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80185968
  if (crb(c,2)) { IRQCHK(c); goto L_801858D8; } // 8018596C
  goto L_8018598C; // 80185970
L_80185974:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 80185974
  if (!crb(c,2)) { goto L_80185984; } // 80185978
  c->r[3]=0u+0x00000001u; // 8018597C
  return; // 80185980
L_80185984:;
  c->r[6]=c->r[6]+0x00000001u; // 80185984
  c->r[7]=c->r[7]+0x00000001u; // 80185988
L_8018598C:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 8018598C
  c->r[0]=R8(c->r[7]+0x00000000u); // 80185990
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80185994
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80185998
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018599C
  if (crb(c,2)) { IRQCHK(c); goto L_80185974; } // 801859A0
  c->r[3]=0u+0x00000000u; // 801859A4
  return; // 801859A8
}

// __construct_new_array
void f_801859AC(Ctx* __restrict c) {
  trace_call(0x801859ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801859AC
  c->r[0]=c->lr; // 801859B0
  cmps(c,0,(int32_t)c->r[3],0); // 801859B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801859B8
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801859BC
  c->r[30]=c->r[3]|c->r[3]; // 801859C0
  c->r[27]=c->r[4]|c->r[4]; // 801859C4
  c->r[28]=c->r[6]|c->r[6]; // 801859C8
  c->r[29]=c->r[7]|c->r[7]; // 801859CC
  if (crb(c,2)) { goto L_80185A98; } // 801859D0
  cmps(c,0,(int32_t)c->r[4],0); // 801859D4
  W32(c->r[3]+0x00000000u,c->r[6]); // 801859D8
  c->r[30]=c->r[3]+0x00000010u; // 801859DC
  W32(c->r[3]+0x00000004u,c->r[7]); // 801859E0
  if (crb(c,2)) { goto L_80185A98; } // 801859E4
  c->r[0]=0u+0x00000000u; // 801859E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801859EC
  c->r[31]=c->r[30]|c->r[30]; // 801859F0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801859F4
  W32(c->r[1]+0x00000010u,c->r[7]); // 801859F8
  W32(c->r[1]+0x00000014u,c->r[5]); // 801859FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 80185A00
  goto L_80185A2C; // 80185A04
L_80185A08:;
  c->r[12]=c->r[27]|c->r[27]; // 80185A08
  c->r[3]=c->r[31]|c->r[31]; // 80185A0C
  c->r[4]=0u+0x00000001u; // 80185A10
  c->ctr=c->r[12]; // 80185A14
  if (true) { c->lr=0x80185A1Cu; dispatch(c,c->ctr); } // 80185A18
  c->r[3]=R32(c->r[1]+0x00000018u); // 80185A1C
  c->r[31]=c->r[31]+c->r[28]; // 80185A20
  c->r[0]=c->r[3]+0x00000001u; // 80185A24
  W32(c->r[1]+0x00000018u,c->r[0]); // 80185A28
L_80185A2C:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 80185A2C
  cmpu(c,0,c->r[4],c->r[29]); // 80185A30
  if (crb(c,0)) { IRQCHK(c); goto L_80185A08; } // 80185A34
  c->r[0]=R32(c->r[1]+0x00000010u); // 80185A38
  cmpu(c,0,c->r[4],c->r[0]); // 80185A3C
  if (!crb(c,0)) { goto L_80185A98; } // 80185A40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185A44
  cmps(c,0,(int32_t)c->r[0],0); // 80185A48
  if (crb(c,2)) { goto L_80185A98; } // 80185A4C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80185A50
  c->r[3]=R32(c->r[1]+0x00000008u); // 80185A54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80185A58
  c->r[31]=c->r[3]+c->r[0]; // 80185A5C
  goto L_80185A8C; // 80185A60
L_80185A64:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80185A64
  c->r[4]=0u+0xFFFFFFFFu; // 80185A68
  c->r[12]=R32(c->r[1]+0x00000014u); // 80185A6C
  c->r[31]=c->r[31]-c->r[0]; // 80185A70
  c->r[3]=c->r[31]|c->r[31]; // 80185A74
  c->ctr=c->r[12]; // 80185A78
  if (true) { c->lr=0x80185A80u; dispatch(c,c->ctr); } // 80185A7C
  c->r[3]=R32(c->r[1]+0x00000018u); // 80185A80
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80185A84
  W32(c->r[1]+0x00000018u,c->r[0]); // 80185A88
L_80185A8C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 80185A8C
  cmps(c,0,(int32_t)c->r[0],0); // 80185A90
  if (!crb(c,2)) { IRQCHK(c); goto L_80185A64; } // 80185A94
L_80185A98:;
  c->r[3]=c->r[30]|c->r[30]; // 80185A98
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80185A9C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80185AA0
  c->lr=c->r[0]; // 80185AA4
  c->r[1]=c->r[1]+0x00000040u; // 80185AA8
  return; // 80185AAC
}

// dtor_80185AB0
void f_80185AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185AB0
  c->r[0]=c->lr; // 80185AB4
  cmps(c,0,(int32_t)c->r[3],0); // 80185AB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185ABC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80185AC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80185AC4
  c->r[30]=c->r[4]|c->r[4]; // 80185AC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80185ACC
  c->r[29]=c->r[3]|c->r[3]; // 80185AD0
  if (crb(c,2)) { goto L_80185B4C; } // 80185AD4
  c->r[4]=R32(c->r[3]+0x00000010u); // 80185AD8
  c->r[0]=R32(c->r[3]+0x00000008u); // 80185ADC
  cmpu(c,0,c->r[4],c->r[0]); // 80185AE0
  if (!crb(c,0)) { goto L_80185B3C; } // 80185AE4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80185AE8
  cmps(c,0,(int32_t)c->r[0],0); // 80185AEC
  if (crb(c,2)) { goto L_80185B3C; } // 80185AF0
  c->r[0]=R32(c->r[3]+0x00000004u); // 80185AF4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80185AF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80185AFC
  c->r[31]=c->r[3]+c->r[0]; // 80185B00
  goto L_80185B30; // 80185B04
L_80185B08:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80185B08
  c->r[4]=0u+0xFFFFFFFFu; // 80185B0C
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 80185B10
  c->r[31]=c->r[31]-c->r[0]; // 80185B14
  c->r[3]=c->r[31]|c->r[31]; // 80185B18
  c->ctr=c->r[12]; // 80185B1C
  if (true) { c->lr=0x80185B24u; dispatch(c,c->ctr); } // 80185B20
  c->r[3]=R32(c->r[29]+0x00000010u); // 80185B24
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80185B28
  W32(c->r[29]+0x00000010u,c->r[0]); // 80185B2C
L_80185B30:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80185B30
  cmps(c,0,(int32_t)c->r[0],0); // 80185B34
  if (!crb(c,2)) { IRQCHK(c); goto L_80185B08; } // 80185B38
L_80185B3C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80185B3C
  if (!crb(c,1)) { goto L_80185B4C; } // 80185B40
  c->r[3]=c->r[29]|c->r[29]; // 80185B44
  c->lr=0x80185B4Cu; f_800D6AD0(c); // 80185B48
L_80185B4C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80185B4C
  c->r[3]=c->r[29]|c->r[29]; // 80185B50
  c->r[30]=R32(c->r[1]+0x00000018u); // 80185B54
  c->r[29]=R32(c->r[1]+0x00000014u); // 80185B58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185B5C
  c->lr=c->r[0]; // 80185B60
  c->r[1]=c->r[1]+0x00000020u; // 80185B64
  return; // 80185B68
}

// __construct_array
void f_80185B6C(Ctx* __restrict c) {
  trace_call(0x80185B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185B6C
  c->r[0]=c->lr; // 80185B70
  W32(c->r[1]+0x00000034u,c->r[0]); // 80185B74
  c->r[0]=0u+0x00000000u; // 80185B78
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80185B7C
  c->r[31]=c->r[3]|c->r[3]; // 80185B80
  W32(c->r[1]+0x00000028u,c->r[30]); // 80185B84
  c->r[30]=c->r[7]|c->r[7]; // 80185B88
  W32(c->r[1]+0x00000024u,c->r[29]); // 80185B8C
  c->r[29]=c->r[6]|c->r[6]; // 80185B90
  W32(c->r[1]+0x00000020u,c->r[28]); // 80185B94
  c->r[28]=c->r[4]|c->r[4]; // 80185B98
  W32(c->r[1]+0x00000008u,c->r[3]); // 80185B9C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80185BA0
  W32(c->r[1]+0x00000010u,c->r[7]); // 80185BA4
  W32(c->r[1]+0x00000014u,c->r[5]); // 80185BA8
  W32(c->r[1]+0x00000018u,c->r[0]); // 80185BAC
  goto L_80185BD8; // 80185BB0
L_80185BB4:;
  c->r[12]=c->r[28]|c->r[28]; // 80185BB4
  c->r[3]=c->r[31]|c->r[31]; // 80185BB8
  c->r[4]=0u+0x00000001u; // 80185BBC
  c->ctr=c->r[12]; // 80185BC0
  if (true) { c->lr=0x80185BC8u; dispatch(c,c->ctr); } // 80185BC4
  c->r[3]=R32(c->r[1]+0x00000018u); // 80185BC8
  c->r[31]=c->r[31]+c->r[29]; // 80185BCC
  c->r[0]=c->r[3]+0x00000001u; // 80185BD0
  W32(c->r[1]+0x00000018u,c->r[0]); // 80185BD4
L_80185BD8:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 80185BD8
  cmpu(c,0,c->r[4],c->r[30]); // 80185BDC
  if (crb(c,0)) { IRQCHK(c); goto L_80185BB4; } // 80185BE0
  c->r[0]=R32(c->r[1]+0x00000010u); // 80185BE4
  cmpu(c,0,c->r[4],c->r[0]); // 80185BE8
  if (!crb(c,0)) { goto L_80185C44; } // 80185BEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80185BF0
  cmps(c,0,(int32_t)c->r[0],0); // 80185BF4
  if (crb(c,2)) { goto L_80185C44; } // 80185BF8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80185BFC
  c->r[3]=R32(c->r[1]+0x00000008u); // 80185C00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80185C04
  c->r[31]=c->r[3]+c->r[0]; // 80185C08
  goto L_80185C38; // 80185C0C
L_80185C10:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80185C10
  c->r[4]=0u+0xFFFFFFFFu; // 80185C14
  c->r[12]=R32(c->r[1]+0x00000014u); // 80185C18
  c->r[31]=c->r[31]-c->r[0]; // 80185C1C
  c->r[3]=c->r[31]|c->r[31]; // 80185C20
  c->ctr=c->r[12]; // 80185C24
  if (true) { c->lr=0x80185C2Cu; dispatch(c,c->ctr); } // 80185C28
  c->r[3]=R32(c->r[1]+0x00000018u); // 80185C2C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80185C30
  W32(c->r[1]+0x00000018u,c->r[0]); // 80185C34
L_80185C38:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 80185C38
  cmps(c,0,(int32_t)c->r[0],0); // 80185C3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80185C10; } // 80185C40
L_80185C44:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80185C44
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80185C48
  c->r[30]=R32(c->r[1]+0x00000028u); // 80185C4C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80185C50
  c->r[28]=R32(c->r[1]+0x00000020u); // 80185C54
  c->lr=c->r[0]; // 80185C58
  c->r[1]=c->r[1]+0x00000030u; // 80185C5C
  return; // 80185C60
}

// __destroy_arr
void f_80185C64(Ctx* __restrict c) {
  trace_call(0x80185C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185C64
  c->r[0]=c->lr; // 80185C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185C6C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 80185C70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80185C74
  W32(c->r[1]+0x00000018u,c->r[30]); // 80185C78
  c->r[30]=c->r[6]|c->r[6]; // 80185C7C
  c->r[31]=c->r[3]+c->r[0]; // 80185C80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80185C84
  c->r[29]=c->r[5]|c->r[5]; // 80185C88
  W32(c->r[1]+0x00000010u,c->r[28]); // 80185C8C
  c->r[28]=c->r[4]|c->r[4]; // 80185C90
  goto L_80185CB4; // 80185C94
L_80185C98:;
  c->r[31]=c->r[31]-c->r[29]; // 80185C98
  c->r[12]=c->r[28]|c->r[28]; // 80185C9C
  c->r[3]=c->r[31]|c->r[31]; // 80185CA0
  c->r[4]=0u+0xFFFFFFFFu; // 80185CA4
  c->ctr=c->r[12]; // 80185CA8
  if (true) { c->lr=0x80185CB0u; dispatch(c,c->ctr); } // 80185CAC
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80185CB0
L_80185CB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80185CB4
  if (!crb(c,2)) { IRQCHK(c); goto L_80185C98; } // 80185CB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185CBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80185CC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80185CC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80185CC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80185CCC
  c->lr=c->r[0]; // 80185CD0
  c->r[1]=c->r[1]+0x00000020u; // 80185CD4
  return; // 80185CD8
}

// fn_80185CDC
void f_80185CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185CDC
  c->r[0]=c->lr; // 80185CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80185CE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80185CE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80185CEC
  c->r[26]=c->r[3]|c->r[3]; // 80185CF0
  c->r[27]=c->r[4]|c->r[4]; // 80185CF4
  if (crb(c,2)) { goto L_80185D48; } // 80185CF8
  cmps(c,0,(int32_t)c->r[4],0); // 80185CFC
  if (crb(c,2)) { goto L_80185D40; } // 80185D00
  c->r[29]=R32(c->r[3]+0xFFFFFFF0u); // 80185D04
  c->r[31]=0u+0x00000000u; // 80185D08
  c->r[30]=R32(c->r[3]+0xFFFFFFF4u); // 80185D0C
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[30]); // 80185D10
  c->r[28]=c->r[3]+c->r[0]; // 80185D14
  goto L_80185D38; // 80185D18
L_80185D1C:;
  c->r[28]=c->r[28]-c->r[29]; // 80185D1C
  c->r[12]=c->r[27]|c->r[27]; // 80185D20
  c->r[3]=c->r[28]|c->r[28]; // 80185D24
  c->r[4]=0u+0xFFFFFFFFu; // 80185D28
  c->ctr=c->r[12]; // 80185D2C
  if (true) { c->lr=0x80185D34u; dispatch(c,c->ctr); } // 80185D30
  c->r[31]=c->r[31]+0x00000001u; // 80185D34
L_80185D38:;
  cmpu(c,0,c->r[31],c->r[30]); // 80185D38
  if (crb(c,0)) { IRQCHK(c); goto L_80185D1C; } // 80185D3C
L_80185D40:;
  c->r[3]=c->r[26]+0xFFFFFFF0u; // 80185D40
  c->lr=0x80185D48u; f_800D6AE0(c); // 80185D44
L_80185D48:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80185D48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80185D4C
  c->lr=c->r[0]; // 80185D50
  c->r[1]=c->r[1]+0x00000020u; // 80185D54
  return; // 80185D58
}

// __ptmf_scall
void f_80185D5C(Ctx* __restrict c) {
  trace_call(0x80185D5Cu);
  c->r[0]=R32(c->r[12]+0x00000000u); // 80185D5C
  c->r[11]=R32(c->r[12]+0x00000004u); // 80185D60
  c->r[12]=R32(c->r[12]+0x00000008u); // 80185D64
  c->r[3]=c->r[3]+c->r[0]; // 80185D68
  cmps(c,0,(int32_t)c->r[11],0); // 80185D6C
  if (crb(c,0)) { goto L_80185D7C; } // 80185D70
  c->r[12]=R32(c->r[3]+c->r[12]); // 80185D74
  c->r[12]=R32(c->r[12]+c->r[11]); // 80185D78
L_80185D7C:;
  c->ctr=c->r[12]; // 80185D7C
  if (true) { dispatch(c,c->ctr); return; } // 80185D80
}

// __ptmf_scall_80185D84
void f_80185D84(Ctx* __restrict c) {
  trace_call(0x80185D84u);
  c->r[0]=R32(c->r[12]+0x00000000u); // 80185D84
  c->r[11]=R32(c->r[12]+0x00000004u); // 80185D88
  c->r[12]=R32(c->r[12]+0x00000008u); // 80185D8C
  c->r[4]=c->r[4]+c->r[0]; // 80185D90
  cmps(c,0,(int32_t)c->r[11],0); // 80185D94
  if (crb(c,0)) { goto L_80185DA4; } // 80185D98
  c->r[12]=R32(c->r[4]+c->r[12]); // 80185D9C
  c->r[12]=R32(c->r[12]+c->r[11]); // 80185DA0
L_80185DA4:;
  c->ctr=c->r[12]; // 80185DA4
  if (true) { dispatch(c,c->ctr); return; } // 80185DA8
}

// __cvt_fp2unsigned
void f_80185DAC(Ctx* __restrict c) {
  trace_call(0x80185DACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80185DAC
  c->r[4]=0u+0x802E0000u; // 80185DB0
  c->r[4]=c->r[4]+0xFFFFFC58u; // 80185DB4
  c->r[3]=0u+0x00000000u; // 80185DB8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 80185DBC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=RF64(ea);} // 80185DC0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=RF64(ea);} // 80185DC4
  fcmp(c,0,c->f[1],c->f[0]); // 80185DC8
  fcmp(c,6,c->f[1],c->f[3]); // 80185DCC
  if (crb(c,0)) { goto L_80185E00; } // 80185DD0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80185DD4
  if (!crb(c,24)) { goto L_80185E00; } // 80185DD8
  fcmp(c,7,c->f[1],c->f[4]); // 80185DDC
  c->f[2]=c->f[1]; // 80185DE0
  if (crb(c,28)) { goto L_80185DEC; } // 80185DE4
  c->f[2]=c->f[1]-c->f[4]; // 80185DE8
L_80185DEC:;
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80185DEC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 80185DF0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80185DF4
  if (crb(c,28)) { goto L_80185E00; } // 80185DF8
  c->r[3]=c->r[3]+0x80000000u; // 80185DFC
L_80185E00:;
  c->r[1]=c->r[1]+0x00000010u; // 80185E00
  return; // 80185E04
}

// __save_fpr
void f_80185E08(Ctx* __restrict c) {
  trace_call(0x80185E08u);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; WF64(ea,c->f[14]);} // 80185E08
  {uint32_t ea=c->r[11]+0xFFFFFF78u; WF64(ea,c->f[15]);} // 80185E0C
  {uint32_t ea=c->r[11]+0xFFFFFF80u; WF64(ea,c->f[16]);} // 80185E10
  {uint32_t ea=c->r[11]+0xFFFFFF88u; WF64(ea,c->f[17]);} // 80185E14
  {uint32_t ea=c->r[11]+0xFFFFFF90u; WF64(ea,c->f[18]);} // 80185E18
  {uint32_t ea=c->r[11]+0xFFFFFF98u; WF64(ea,c->f[19]);} // 80185E1C
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; WF64(ea,c->f[20]);} // 80185E20
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; WF64(ea,c->f[21]);} // 80185E24
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; WF64(ea,c->f[22]);} // 80185E28
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} // 80185E2C
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} // 80185E30
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} // 80185E34
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} // 80185E38
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} // 80185E3C
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} // 80185E40
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} // 80185E44
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} // 80185E48
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} // 80185E4C
  return; // 80185E50
}

// __restore_fpr
void f_80185E54(Ctx* __restrict c) {
  trace_call(0x80185E54u);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; c->f[14]=RF64(ea);} // 80185E54
  {uint32_t ea=c->r[11]+0xFFFFFF78u; c->f[15]=RF64(ea);} // 80185E58
  {uint32_t ea=c->r[11]+0xFFFFFF80u; c->f[16]=RF64(ea);} // 80185E5C
  {uint32_t ea=c->r[11]+0xFFFFFF88u; c->f[17]=RF64(ea);} // 80185E60
  {uint32_t ea=c->r[11]+0xFFFFFF90u; c->f[18]=RF64(ea);} // 80185E64
  {uint32_t ea=c->r[11]+0xFFFFFF98u; c->f[19]=RF64(ea);} // 80185E68
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; c->f[20]=RF64(ea);} // 80185E6C
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; c->f[21]=RF64(ea);} // 80185E70
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; c->f[22]=RF64(ea);} // 80185E74
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} // 80185E78
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} // 80185E7C
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} // 80185E80
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} // 80185E84
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} // 80185E88
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} // 80185E8C
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} // 80185E90
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} // 80185E94
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} // 80185E98
  return; // 80185E9C
}

// __save_gpr
void f_80185EA0(Ctx* __restrict c) {
  trace_call(0x80185EA0u);
  W32(c->r[11]+0xFFFFFFB8u,c->r[14]); // 80185EA0
  W32(c->r[11]+0xFFFFFFBCu,c->r[15]); // 80185EA4
  W32(c->r[11]+0xFFFFFFC0u,c->r[16]); // 80185EA8
  W32(c->r[11]+0xFFFFFFC4u,c->r[17]); // 80185EAC
  W32(c->r[11]+0xFFFFFFC8u,c->r[18]); // 80185EB0
  W32(c->r[11]+0xFFFFFFCCu,c->r[19]); // 80185EB4
  W32(c->r[11]+0xFFFFFFD0u,c->r[20]); // 80185EB8
  W32(c->r[11]+0xFFFFFFD4u,c->r[21]); // 80185EBC
  W32(c->r[11]+0xFFFFFFD8u,c->r[22]); // 80185EC0
  W32(c->r[11]+0xFFFFFFDCu,c->r[23]); // 80185EC4
  W32(c->r[11]+0xFFFFFFE0u,c->r[24]); // 80185EC8
  W32(c->r[11]+0xFFFFFFE4u,c->r[25]); // 80185ECC
  W32(c->r[11]+0xFFFFFFE8u,c->r[26]); // 80185ED0
  W32(c->r[11]+0xFFFFFFECu,c->r[27]); // 80185ED4
  W32(c->r[11]+0xFFFFFFF0u,c->r[28]); // 80185ED8
  W32(c->r[11]+0xFFFFFFF4u,c->r[29]); // 80185EDC
  W32(c->r[11]+0xFFFFFFF8u,c->r[30]); // 80185EE0
  W32(c->r[11]+0xFFFFFFFCu,c->r[31]); // 80185EE4
  return; // 80185EE8
}

// __restore_gpr
void f_80185EEC(Ctx* __restrict c) {
  trace_call(0x80185EECu);
  c->r[14]=R32(c->r[11]+0xFFFFFFB8u); // 80185EEC
  c->r[15]=R32(c->r[11]+0xFFFFFFBCu); // 80185EF0
  c->r[16]=R32(c->r[11]+0xFFFFFFC0u); // 80185EF4
  c->r[17]=R32(c->r[11]+0xFFFFFFC4u); // 80185EF8
  c->r[18]=R32(c->r[11]+0xFFFFFFC8u); // 80185EFC
  c->r[19]=R32(c->r[11]+0xFFFFFFCCu); // 80185F00
  c->r[20]=R32(c->r[11]+0xFFFFFFD0u); // 80185F04
  c->r[21]=R32(c->r[11]+0xFFFFFFD4u); // 80185F08
  c->r[22]=R32(c->r[11]+0xFFFFFFD8u); // 80185F0C
  c->r[23]=R32(c->r[11]+0xFFFFFFDCu); // 80185F10
  c->r[24]=R32(c->r[11]+0xFFFFFFE0u); // 80185F14
  c->r[25]=R32(c->r[11]+0xFFFFFFE4u); // 80185F18
  c->r[26]=R32(c->r[11]+0xFFFFFFE8u); // 80185F1C
  c->r[27]=R32(c->r[11]+0xFFFFFFECu); // 80185F20
  c->r[28]=R32(c->r[11]+0xFFFFFFF0u); // 80185F24
  c->r[29]=R32(c->r[11]+0xFFFFFFF4u); // 80185F28
  c->r[30]=R32(c->r[11]+0xFFFFFFF8u); // 80185F2C
  c->r[31]=R32(c->r[11]+0xFFFFFFFCu); // 80185F30
  return; // 80185F34
}

// __div2u
void f_80185F38(Ctx* __restrict c) {
  trace_call(0x80185F38u);
  cmps(c,0,(int32_t)c->r[3],0); // 80185F38
  c->r[0]=cntlz(c->r[3]); // 80185F3C
  c->r[9]=cntlz(c->r[4]); // 80185F40
  if (!crb(c,2)) { goto L_80185F4C; } // 80185F44
  c->r[0]=c->r[9]+0x00000020u; // 80185F48
L_80185F4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80185F4C
  c->r[9]=cntlz(c->r[5]); // 80185F50
  c->r[10]=cntlz(c->r[6]); // 80185F54
  if (!crb(c,2)) { goto L_80185F60; } // 80185F58
  c->r[9]=c->r[10]+0x00000020u; // 80185F5C
L_80185F60:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 80185F60
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 80185F64
  if (crb(c,1)) { goto L_80186018; } // 80185F68
  c->r[9]=c->r[9]+0x00000001u; // 80185F6C
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 80185F70
  c->r[0]=c->r[0]+c->r[9]; // 80185F74
  c->r[9]=c->r[10]-c->r[9]; // 80185F78
  c->ctr=c->r[9]; // 80185F7C
  cmps(c,0,(int32_t)c->r[9],32); // 80185F80
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 80185F84
  if (crb(c,0)) { goto L_80185F98; } // 80185F88
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 80185F8C
  c->r[7]=0u+0x00000000u; // 80185F90
  goto L_80185FAC; // 80185F94
L_80185F98:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 80185F98
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 80185F9C
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 80185FA0
  c->r[8]=c->r[8]|c->r[7]; // 80185FA4
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 80185FA8
L_80185FAC:;
  cmps(c,0,(int32_t)c->r[0],32); // 80185FAC
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 80185FB0
  if (crb(c,0)) { goto L_80185FC4; } // 80185FB4
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 80185FB8
  c->r[4]=0u+0x00000000u; // 80185FBC
  goto L_80185FD8; // 80185FC0
L_80185FC4:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80185FC4
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 80185FC8
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 80185FCC
  c->r[3]=c->r[3]|c->r[9]; // 80185FD0
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 80185FD4
L_80185FD8:;
  c->r[10]=0u+0xFFFFFFFFu; // 80185FD8
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 80185FDC
L_80185FE0:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 80185FE0
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 80185FE4
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 80185FE8
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 80185FEC
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 80185FF0
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 80185FF4
  if (crb(c,0)) { goto L_80186008; } // 80185FF8
  c->r[8]=c->r[0]|c->r[0]; // 80185FFC
  c->r[7]=c->r[9]|c->r[9]; // 80186000
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 80186004
L_80186008:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80185FE0; } // 80186008
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 8018600C
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 80186010
  return; // 80186014
L_80186018:;
  c->r[4]=0u+0x00000000u; // 80186018
  c->r[3]=0u+0x00000000u; // 8018601C
  return; // 80186020
}

// __div2i
void f_80186024(Ctx* __restrict c) {
  trace_call(0x80186024u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186024
  c->r[9]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[9]); // 80186028
  if (crb(c,2)) { goto L_80186038; } // 8018602C
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 80186030
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 80186034
L_80186038:;
  W32(c->r[1]+0x00000008u,c->r[9]); // 80186038
  c->r[10]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[10]); // 8018603C
  if (crb(c,2)) { goto L_8018604C; } // 80186040
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 80186044
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 80186048
L_8018604C:;
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8018604C
  cmps(c,0,(int32_t)c->r[3],0); // 80186050
  c->r[0]=cntlz(c->r[3]); // 80186054
  c->r[9]=cntlz(c->r[4]); // 80186058
  if (!crb(c,2)) { goto L_80186064; } // 8018605C
  c->r[0]=c->r[9]+0x00000020u; // 80186060
L_80186064:;
  cmps(c,0,(int32_t)c->r[5],0); // 80186064
  c->r[9]=cntlz(c->r[5]); // 80186068
  c->r[10]=cntlz(c->r[6]); // 8018606C
  if (!crb(c,2)) { goto L_80186078; } // 80186070
  c->r[9]=c->r[10]+0x00000020u; // 80186074
L_80186078:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 80186078
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 8018607C
  if (crb(c,1)) { goto L_8018614C; } // 80186080
  c->r[9]=c->r[9]+0x00000001u; // 80186084
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 80186088
  c->r[0]=c->r[0]+c->r[9]; // 8018608C
  c->r[9]=c->r[10]-c->r[9]; // 80186090
  c->ctr=c->r[9]; // 80186094
  cmps(c,0,(int32_t)c->r[9],32); // 80186098
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 8018609C
  if (crb(c,0)) { goto L_801860B0; } // 801860A0
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801860A4
  c->r[7]=0u+0x00000000u; // 801860A8
  goto L_801860C4; // 801860AC
L_801860B0:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801860B0
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801860B4
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801860B8
  c->r[8]=c->r[8]|c->r[7]; // 801860BC
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801860C0
L_801860C4:;
  cmps(c,0,(int32_t)c->r[0],32); // 801860C4
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801860C8
  if (crb(c,0)) { goto L_801860DC; } // 801860CC
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801860D0
  c->r[4]=0u+0x00000000u; // 801860D4
  goto L_801860F0; // 801860D8
L_801860DC:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801860DC
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801860E0
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801860E4
  c->r[3]=c->r[3]|c->r[9]; // 801860E8
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801860EC
L_801860F0:;
  c->r[10]=0u+0xFFFFFFFFu; // 801860F0
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801860F4
L_801860F8:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801860F8
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801860FC
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 80186100
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 80186104
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 80186108
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 8018610C
  if (crb(c,0)) { goto L_80186120; } // 80186110
  c->r[8]=c->r[0]|c->r[0]; // 80186114
  c->r[7]=c->r[9]|c->r[9]; // 80186118
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 8018611C
L_80186120:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801860F8; } // 80186120
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 80186124
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 80186128
  c->r[9]=R32(c->r[1]+0x00000008u); // 8018612C
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 80186130
  c->r[7]=c->r[9]^c->r[10]; cr0(c,c->r[7]); // 80186134
  if (crb(c,2)) { goto L_80186148; } // 80186138
  cmps(c,0,(int32_t)c->r[9],0); // 8018613C
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 80186140
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 80186144
L_80186148:;
  goto L_80186154; // 80186148
L_8018614C:;
  c->r[4]=0u+0x00000000u; // 8018614C
  c->r[3]=0u+0x00000000u; // 80186150
L_80186154:;
  c->r[1]=c->r[1]+0x00000010u; // 80186154
  return; // 80186158
}

// __mod2u
void f_8018615C(Ctx* __restrict c) {
  trace_call(0x8018615Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8018615C
  c->r[0]=cntlz(c->r[3]); // 80186160
  c->r[9]=cntlz(c->r[4]); // 80186164
  if (!crb(c,2)) { goto L_80186170; } // 80186168
  c->r[0]=c->r[9]+0x00000020u; // 8018616C
L_80186170:;
  cmps(c,0,(int32_t)c->r[5],0); // 80186170
  c->r[9]=cntlz(c->r[5]); // 80186174
  c->r[10]=cntlz(c->r[6]); // 80186178
  if (!crb(c,2)) { goto L_80186184; } // 8018617C
  c->r[9]=c->r[10]+0x00000020u; // 80186180
L_80186184:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 80186184
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 80186188
  if (crb(c,1)) { goto L_8018623C; } // 8018618C
  c->r[9]=c->r[9]+0x00000001u; // 80186190
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 80186194
  c->r[0]=c->r[0]+c->r[9]; // 80186198
  c->r[9]=c->r[10]-c->r[9]; // 8018619C
  c->ctr=c->r[9]; // 801861A0
  cmps(c,0,(int32_t)c->r[9],32); // 801861A4
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801861A8
  if (crb(c,0)) { goto L_801861BC; } // 801861AC
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801861B0
  c->r[7]=0u+0x00000000u; // 801861B4
  goto L_801861D0; // 801861B8
L_801861BC:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801861BC
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801861C0
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801861C4
  c->r[8]=c->r[8]|c->r[7]; // 801861C8
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801861CC
L_801861D0:;
  cmps(c,0,(int32_t)c->r[0],32); // 801861D0
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801861D4
  if (crb(c,0)) { goto L_801861E8; } // 801861D8
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801861DC
  c->r[4]=0u+0x00000000u; // 801861E0
  goto L_801861FC; // 801861E4
L_801861E8:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801861E8
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801861EC
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801861F0
  c->r[3]=c->r[3]|c->r[9]; // 801861F4
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801861F8
L_801861FC:;
  c->r[10]=0u+0xFFFFFFFFu; // 801861FC
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 80186200
L_80186204:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 80186204
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 80186208
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 8018620C
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 80186210
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 80186214
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 80186218
  if (crb(c,0)) { goto L_8018622C; } // 8018621C
  c->r[8]=c->r[0]|c->r[0]; // 80186220
  c->r[7]=c->r[9]|c->r[9]; // 80186224
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 80186228
L_8018622C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80186204; } // 8018622C
  c->r[4]=c->r[8]|c->r[8]; // 80186230
  c->r[3]=c->r[7]|c->r[7]; // 80186234
  return; // 80186238
L_8018623C:;
  return; // 8018623C
}

// __mod2i
void f_80186240(Ctx* __restrict c) {
  trace_call(0x80186240u);
  cmps(c,7,(int32_t)c->r[3],0); // 80186240
  if (!crb(c,28)) { goto L_80186250; } // 80186244
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 80186248
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8018624C
L_80186250:;
  cmps(c,0,(int32_t)c->r[5],0); // 80186250
  if (!crb(c,0)) { goto L_80186260; } // 80186254
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 80186258
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 8018625C
L_80186260:;
  cmps(c,0,(int32_t)c->r[3],0); // 80186260
  c->r[0]=cntlz(c->r[3]); // 80186264
  c->r[9]=cntlz(c->r[4]); // 80186268
  if (!crb(c,2)) { goto L_80186274; } // 8018626C
  c->r[0]=c->r[9]+0x00000020u; // 80186270
L_80186274:;
  cmps(c,0,(int32_t)c->r[5],0); // 80186274
  c->r[9]=cntlz(c->r[5]); // 80186278
  c->r[10]=cntlz(c->r[6]); // 8018627C
  if (!crb(c,2)) { goto L_80186288; } // 80186280
  c->r[9]=c->r[10]+0x00000020u; // 80186284
L_80186288:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 80186288
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 8018628C
  if (crb(c,1)) { goto L_8018633C; } // 80186290
  c->r[9]=c->r[9]+0x00000001u; // 80186294
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 80186298
  c->r[0]=c->r[0]+c->r[9]; // 8018629C
  c->r[9]=c->r[10]-c->r[9]; // 801862A0
  c->ctr=c->r[9]; // 801862A4
  cmps(c,0,(int32_t)c->r[9],32); // 801862A8
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801862AC
  if (crb(c,0)) { goto L_801862C0; } // 801862B0
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801862B4
  c->r[7]=0u+0x00000000u; // 801862B8
  goto L_801862D4; // 801862BC
L_801862C0:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801862C0
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801862C4
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801862C8
  c->r[8]=c->r[8]|c->r[7]; // 801862CC
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801862D0
L_801862D4:;
  cmps(c,0,(int32_t)c->r[0],32); // 801862D4
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801862D8
  if (crb(c,0)) { goto L_801862EC; } // 801862DC
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801862E0
  c->r[4]=0u+0x00000000u; // 801862E4
  goto L_80186300; // 801862E8
L_801862EC:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801862EC
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801862F0
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801862F4
  c->r[3]=c->r[3]|c->r[9]; // 801862F8
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801862FC
L_80186300:;
  c->r[10]=0u+0xFFFFFFFFu; // 80186300
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 80186304
L_80186308:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 80186308
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 8018630C
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 80186310
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 80186314
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 80186318
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 8018631C
  if (crb(c,0)) { goto L_80186330; } // 80186320
  c->r[8]=c->r[0]|c->r[0]; // 80186324
  c->r[7]=c->r[9]|c->r[9]; // 80186328
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 8018632C
L_80186330:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80186308; } // 80186330
  c->r[4]=c->r[8]|c->r[8]; // 80186334
  c->r[3]=c->r[7]|c->r[7]; // 80186338
L_8018633C:;
  if (!crb(c,28)) { goto L_80186348; } // 8018633C
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 80186340
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 80186344
L_80186348:;
  return; // 80186348
}

// __shl2i
void f_8018634C(Ctx* __restrict c) {
  trace_call(0x8018634Cu);
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 8018634C
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 80186350
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 80186354
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 80186358
  c->r[3]=c->r[3]|c->r[10]; // 8018635C
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 80186360
  c->r[3]=c->r[3]|c->r[10]; // 80186364
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 80186368
  return; // 8018636C
}

// fn_80186370
void f_80186370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186370
  c->r[5]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[5]); // 80186374
  if (crb(c,2)) { goto L_80186384; } // 80186378
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8018637C
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 80186380
L_80186384:;
  c->r[7]=c->r[3]|c->r[4]; cr0(c,c->r[7]); // 80186384
  c->r[6]=0u+0x00000000u; // 80186388
  if (crb(c,2)) { goto L_8018640C; } // 8018638C
  c->r[7]=cntlz(c->r[3]); // 80186390
  c->r[8]=cntlz(c->r[4]); // 80186394
  c->r[9]=rotl(c->r[7],26)&0xF8000000u; // 80186398
  c->r[9]=sraw(c,c->r[9],31); // 8018639C
  c->r[9]=c->r[9]&c->r[8]; // 801863A0
  c->r[7]=c->r[7]+c->r[9]; // 801863A4
  c->r[8]=addc(c,~c->r[7],0x00000020u,1); // 801863A8
  c->r[9]=addc(c,c->r[7],0xFFFFFFE0u,0); // 801863AC
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801863B0
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801863B4
  c->r[3]=c->r[3]|c->r[10]; // 801863B8
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801863BC
  c->r[3]=c->r[3]|c->r[10]; // 801863C0
  c->r[4]=((c->r[7])&0x20)?0u:(c->r[4]<<((c->r[7])&31)); // 801863C4
  c->r[6]=c->r[6]-c->r[7]; // 801863C8
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 801863CC
  cmps(c,0,(int32_t)c->r[7],1024); // 801863D0
  c->r[6]=c->r[6]+0x0000043Eu; // 801863D4
  if (crb(c,0)) { goto L_801863F4; } // 801863D8
  if (crb(c,1)) { goto L_801863E8; } // 801863DC
  c->r[7]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[7]); // 801863E0
  if (crb(c,2)) { goto L_801863F4; } // 801863E4
L_801863E8:;
  c->r[4]=addc(c,c->r[4],0x00000800u,0); // 801863E8
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801863EC
  c->r[6]=addc(c,c->r[6],0,c->xer_ca); // 801863F0
L_801863F4:;
  c->r[4]=rotl(c->r[4],21)&0xFFFFFFFFu; // 801863F4
  c->r[4]=(rotl(c->r[3],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 801863F8
  c->r[3]=rotl(c->r[3],21)&0x000FFFFFu; // 801863FC
  c->r[6]=rotl(c->r[6],20)&0xFFF00000u; // 80186400
  c->r[3]=c->r[6]|c->r[3]; // 80186404
  c->r[3]=c->r[5]|c->r[3]; // 80186408
L_8018640C:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018640C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80186410
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80186414
  c->r[1]=c->r[1]+0x00000010u; // 80186418
  return; // 8018641C
}

// fn_80186420
void f_80186420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186420
  c->r[5]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[5]); // 80186424
  if (crb(c,2)) { goto L_80186434; } // 80186428
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8018642C
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 80186430
L_80186434:;
  c->r[7]=c->r[3]|c->r[4]; cr0(c,c->r[7]); // 80186434
  c->r[6]=0u+0x00000000u; // 80186438
  if (crb(c,2)) { goto L_801864BC; } // 8018643C
  c->r[7]=cntlz(c->r[3]); // 80186440
  c->r[8]=cntlz(c->r[4]); // 80186444
  c->r[9]=rotl(c->r[7],26)&0xF8000000u; // 80186448
  c->r[9]=sraw(c,c->r[9],31); // 8018644C
  c->r[9]=c->r[9]&c->r[8]; // 80186450
  c->r[7]=c->r[7]+c->r[9]; // 80186454
  c->r[8]=addc(c,~c->r[7],0x00000020u,1); // 80186458
  c->r[9]=addc(c,c->r[7],0xFFFFFFE0u,0); // 8018645C
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 80186460
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 80186464
  c->r[3]=c->r[3]|c->r[10]; // 80186468
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8018646C
  c->r[3]=c->r[3]|c->r[10]; // 80186470
  c->r[4]=((c->r[7])&0x20)?0u:(c->r[4]<<((c->r[7])&31)); // 80186474
  c->r[6]=c->r[6]-c->r[7]; // 80186478
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 8018647C
  cmps(c,0,(int32_t)c->r[7],1024); // 80186480
  c->r[6]=c->r[6]+0x0000043Eu; // 80186484
  if (crb(c,0)) { goto L_801864A4; } // 80186488
  if (crb(c,1)) { goto L_80186498; } // 8018648C
  c->r[7]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[7]); // 80186490
  if (crb(c,2)) { goto L_801864A4; } // 80186494
L_80186498:;
  c->r[4]=addc(c,c->r[4],0x00000800u,0); // 80186498
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8018649C
  c->r[6]=addc(c,c->r[6],0,c->xer_ca); // 801864A0
L_801864A4:;
  c->r[4]=rotl(c->r[4],21)&0xFFFFFFFFu; // 801864A4
  c->r[4]=(rotl(c->r[3],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 801864A8
  c->r[3]=rotl(c->r[3],21)&0x000FFFFFu; // 801864AC
  c->r[6]=rotl(c->r[6],20)&0xFFF00000u; // 801864B0
  c->r[3]=c->r[6]|c->r[3]; // 801864B4
  c->r[3]=c->r[5]|c->r[3]; // 801864B8
L_801864BC:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801864BC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801864C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801864C4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801864C8
  c->r[1]=c->r[1]+0x00000010u; // 801864CC
  return; // 801864D0
}

// __cvt_dbl_ull
void f_801864D4(Ctx* __restrict c) {
  trace_call(0x801864D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801864D4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801864D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801864DC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801864E0
  c->r[5]=rotl(c->r[3],12)&0x000007FFu; // 801864E4
  cmpu(c,0,c->r[5],0x000003FFu); // 801864E8
  if (!crb(c,0)) { goto L_801864FC; } // 801864EC
L_801864F0:;
  c->r[3]=0u+0x00000000u; // 801864F0
  c->r[4]=0u+0x00000000u; // 801864F4
  goto L_80186574; // 801864F8
L_801864FC:;
  c->r[6]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[6]); // 801864FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801864F0; } // 80186500
  c->r[3]=rotl(c->r[3],0)&0x000FFFFFu; // 80186504
  c->r[3]=c->r[3]|0x00100000u; // 80186508
  c->r[5]=c->r[5]+0xFFFFFBCDu; // 8018650C
  cmps(c,0,(int32_t)c->r[5],0); // 80186510
  if (!crb(c,0)) { goto L_80186540; } // 80186514
  c->r[5]=0u-c->r[5]; // 80186518
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 8018651C
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 80186520
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 80186524
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 80186528
  c->r[4]=c->r[4]|c->r[10]; // 8018652C
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 80186530
  c->r[4]=c->r[4]|c->r[10]; // 80186534
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 80186538
  goto L_80186574; // 8018653C
L_80186540:;
  cmps(c,0,(int32_t)c->r[5],11); // 80186540
  if (!crb(c,1)) { goto L_80186554; } // 80186544
  c->r[3]=0u+0xFFFFFFFFu; // 80186548
  c->r[4]=0u+0xFFFFFFFFu; // 8018654C
  goto L_80186574; // 80186550
L_80186554:;
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 80186554
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 80186558
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8018655C
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 80186560
  c->r[3]=c->r[3]|c->r[10]; // 80186564
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 80186568
  c->r[3]=c->r[3]|c->r[10]; // 8018656C
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 80186570
L_80186574:;
  c->r[1]=c->r[1]+0x00000010u; // 80186574
  return; // 80186578
}

// __init_cpp_exceptions
void f_8018657C(Ctx* __restrict c) {
  trace_call(0x8018657Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018657C
  c->r[0]=c->lr; // 80186580
  W32(c->r[1]+0x00000014u,c->r[0]); // 80186584
  c->r[0]=R32(c->r[13]+0xFFFF9220u); // 80186588
  cmps(c,0,(int32_t)c->r[0],-2); // 8018658C
  if (!crb(c,2)) { goto L_801865A8; } // 80186590
  c->r[3]=0u+0x80010000u; // 80186594
  c->r[4]=c->r[2]|c->r[2]; // 80186598
  c->r[3]=c->r[3]+0xFFFFAD00u; // 8018659C
  c->lr=0x801865A4u; f_80186800(c); // 801865A0
  W32(c->r[13]+0xFFFF9220u,c->r[3]); // 801865A4
L_801865A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801865A8
  c->lr=c->r[0]; // 801865AC
  c->r[1]=c->r[1]+0x00000010u; // 801865B0
  return; // 801865B4
}

// __fini_cpp_exceptions
void f_801865B8(Ctx* __restrict c) {
  trace_call(0x801865B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801865B8
  c->r[0]=c->lr; // 801865BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801865C0
  c->r[3]=R32(c->r[13]+0xFFFF9220u); // 801865C4
  cmps(c,0,(int32_t)c->r[3],-2); // 801865C8
  if (crb(c,2)) { goto L_801865DC; } // 801865CC
  c->lr=0x801865D4u; f_80186834(c); // 801865D0
  c->r[0]=0u+0xFFFFFFFEu; // 801865D4
  W32(c->r[13]+0xFFFF9220u,c->r[0]); // 801865D8
L_801865DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801865DC
  c->lr=c->r[0]; // 801865E0
  c->r[1]=c->r[1]+0x00000010u; // 801865E4
  return; // 801865E8
}

// fn_801865EC
void f_801865EC(Ctx* __restrict c) {
  c->r[5]=c->lr; // 801865EC
  c->r[6]=c->cr; // 801865F0
  W32(c->r[3]+0x00000000u,c->r[5]); // 801865F4
  W32(c->r[3]+0x00000004u,c->r[6]); // 801865F8
  W32(c->r[3]+0x00000008u,c->r[1]); // 801865FC
  W32(c->r[3]+0x0000000Cu,c->r[2]); // 80186600
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=13;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80186604
  c->f[0]=u2d((uint64_t)c->fpscr); // 80186608
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[14]);} // 8018660C
  c->r[4]=c->r[3]+0x00000068u; // 80186610
  {uint32_t ea=0u+c->r[4]; psq_store(c,14,ea,0,0);} // 80186614
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[15]);} // 80186618
  c->r[4]=c->r[3]+0x00000078u; // 8018661C
  {uint32_t ea=0u+c->r[4]; psq_store(c,15,ea,0,0);} // 80186620
  {uint32_t ea=c->r[3]+0x00000080u; WF64(ea,c->f[16]);} // 80186624
  c->r[4]=c->r[3]+0x00000088u; // 80186628
  {uint32_t ea=0u+c->r[4]; psq_store(c,16,ea,0,0);} // 8018662C
  {uint32_t ea=c->r[3]+0x00000090u; WF64(ea,c->f[17]);} // 80186630
  c->r[4]=c->r[3]+0x00000098u; // 80186634
  {uint32_t ea=0u+c->r[4]; psq_store(c,17,ea,0,0);} // 80186638
  {uint32_t ea=c->r[3]+0x000000A0u; WF64(ea,c->f[18]);} // 8018663C
  c->r[4]=c->r[3]+0x000000A8u; // 80186640
  {uint32_t ea=0u+c->r[4]; psq_store(c,18,ea,0,0);} // 80186644
  {uint32_t ea=c->r[3]+0x000000B0u; WF64(ea,c->f[19]);} // 80186648
  c->r[4]=c->r[3]+0x000000B8u; // 8018664C
  {uint32_t ea=0u+c->r[4]; psq_store(c,19,ea,0,0);} // 80186650
  {uint32_t ea=c->r[3]+0x000000C0u; WF64(ea,c->f[20]);} // 80186654
  c->r[4]=c->r[3]+0x000000C8u; // 80186658
  {uint32_t ea=0u+c->r[4]; psq_store(c,20,ea,0,0);} // 8018665C
  {uint32_t ea=c->r[3]+0x000000D0u; WF64(ea,c->f[21]);} // 80186660
  c->r[4]=c->r[3]+0x000000D8u; // 80186664
  {uint32_t ea=0u+c->r[4]; psq_store(c,21,ea,0,0);} // 80186668
  {uint32_t ea=c->r[3]+0x000000E0u; WF64(ea,c->f[22]);} // 8018666C
  c->r[4]=c->r[3]+0x000000E8u; // 80186670
  {uint32_t ea=0u+c->r[4]; psq_store(c,22,ea,0,0);} // 80186674
  {uint32_t ea=c->r[3]+0x000000F0u; WF64(ea,c->f[23]);} // 80186678
  c->r[4]=c->r[3]+0x000000F8u; // 8018667C
  {uint32_t ea=0u+c->r[4]; psq_store(c,23,ea,0,0);} // 80186680
  {uint32_t ea=c->r[3]+0x00000100u; WF64(ea,c->f[24]);} // 80186684
  c->r[4]=c->r[3]+0x00000108u; // 80186688
  {uint32_t ea=0u+c->r[4]; psq_store(c,24,ea,0,0);} // 8018668C
  {uint32_t ea=c->r[3]+0x00000110u; WF64(ea,c->f[25]);} // 80186690
  c->r[4]=c->r[3]+0x00000118u; // 80186694
  {uint32_t ea=0u+c->r[4]; psq_store(c,25,ea,0,0);} // 80186698
  {uint32_t ea=c->r[3]+0x00000120u; WF64(ea,c->f[26]);} // 8018669C
  c->r[4]=c->r[3]+0x00000128u; // 801866A0
  {uint32_t ea=0u+c->r[4]; psq_store(c,26,ea,0,0);} // 801866A4
  {uint32_t ea=c->r[3]+0x00000130u; WF64(ea,c->f[27]);} // 801866A8
  c->r[4]=c->r[3]+0x00000138u; // 801866AC
  {uint32_t ea=0u+c->r[4]; psq_store(c,27,ea,0,0);} // 801866B0
  {uint32_t ea=c->r[3]+0x00000140u; WF64(ea,c->f[28]);} // 801866B4
  c->r[4]=c->r[3]+0x00000148u; // 801866B8
  {uint32_t ea=0u+c->r[4]; psq_store(c,28,ea,0,0);} // 801866BC
  {uint32_t ea=c->r[3]+0x00000150u; WF64(ea,c->f[29]);} // 801866C0
  c->r[4]=c->r[3]+0x00000158u; // 801866C4
  {uint32_t ea=0u+c->r[4]; psq_store(c,29,ea,0,0);} // 801866C8
  {uint32_t ea=c->r[3]+0x00000160u; WF64(ea,c->f[30]);} // 801866CC
  c->r[4]=c->r[3]+0x00000168u; // 801866D0
  {uint32_t ea=0u+c->r[4]; psq_store(c,30,ea,0,0);} // 801866D4
  {uint32_t ea=c->r[3]+0x00000170u; WF64(ea,c->f[31]);} // 801866D8
  c->r[4]=c->r[3]+0x00000178u; // 801866DC
  {uint32_t ea=0u+c->r[4]; psq_store(c,31,ea,0,0);} // 801866E0
  {uint32_t ea=c->r[3]+0x00000180u; WF64(ea,c->f[0]);} // 801866E4
  c->r[3]=0u+0x00000000u; // 801866E8
  return; // 801866EC
}

// fn_801866F0
void f_801866F0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 801866F0
  c->r[6]=R32(c->r[3]+0x00000004u); // 801866F4
  c->lr=c->r[5]; // 801866F8
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[6]&0xFFFFFFFFu); // 801866FC
  c->r[1]=R32(c->r[3]+0x00000008u); // 80186700
  c->r[2]=R32(c->r[3]+0x0000000Cu); // 80186704
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80186708
  {uint32_t ea=c->r[3]+0x00000060u; c->f[14]=RF64(ea);} // 8018670C
  c->r[7]=c->r[3]+0x00000068u; // 80186710
  {uint32_t ea=0u+c->r[7]; psq_load(c,14,ea,0,0);} // 80186714
  {uint32_t ea=c->r[3]+0x00000070u; c->f[15]=RF64(ea);} // 80186718
  c->r[7]=c->r[3]+0x00000078u; // 8018671C
  {uint32_t ea=0u+c->r[7]; psq_load(c,15,ea,0,0);} // 80186720
  {uint32_t ea=c->r[3]+0x00000080u; c->f[16]=RF64(ea);} // 80186724
  c->r[7]=c->r[3]+0x00000088u; // 80186728
  {uint32_t ea=0u+c->r[7]; psq_load(c,16,ea,0,0);} // 8018672C
  {uint32_t ea=c->r[3]+0x00000090u; c->f[17]=RF64(ea);} // 80186730
  c->r[7]=c->r[3]+0x00000098u; // 80186734
  {uint32_t ea=0u+c->r[7]; psq_load(c,17,ea,0,0);} // 80186738
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[18]=RF64(ea);} // 8018673C
  c->r[7]=c->r[3]+0x000000A8u; // 80186740
  {uint32_t ea=0u+c->r[7]; psq_load(c,18,ea,0,0);} // 80186744
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[19]=RF64(ea);} // 80186748
  c->r[7]=c->r[3]+0x000000B8u; // 8018674C
  {uint32_t ea=0u+c->r[7]; psq_load(c,19,ea,0,0);} // 80186750
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[20]=RF64(ea);} // 80186754
  c->r[7]=c->r[3]+0x000000C8u; // 80186758
  {uint32_t ea=0u+c->r[7]; psq_load(c,20,ea,0,0);} // 8018675C
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[21]=RF64(ea);} // 80186760
  c->r[7]=c->r[3]+0x000000D8u; // 80186764
  {uint32_t ea=0u+c->r[7]; psq_load(c,21,ea,0,0);} // 80186768
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[22]=RF64(ea);} // 8018676C
  c->r[7]=c->r[3]+0x000000E8u; // 80186770
  {uint32_t ea=0u+c->r[7]; psq_load(c,22,ea,0,0);} // 80186774
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[23]=RF64(ea);} // 80186778
  c->r[7]=c->r[3]+0x000000F8u; // 8018677C
  {uint32_t ea=0u+c->r[7]; psq_load(c,23,ea,0,0);} // 80186780
  {uint32_t ea=c->r[3]+0x00000100u; c->f[24]=RF64(ea);} // 80186784
  c->r[7]=c->r[3]+0x00000108u; // 80186788
  {uint32_t ea=0u+c->r[7]; psq_load(c,24,ea,0,0);} // 8018678C
  {uint32_t ea=c->r[3]+0x00000110u; c->f[25]=RF64(ea);} // 80186790
  c->r[7]=c->r[3]+0x00000118u; // 80186794
  {uint32_t ea=0u+c->r[7]; psq_load(c,25,ea,0,0);} // 80186798
  {uint32_t ea=c->r[3]+0x00000120u; c->f[26]=RF64(ea);} // 8018679C
  c->r[7]=c->r[3]+0x00000128u; // 801867A0
  {uint32_t ea=0u+c->r[7]; psq_load(c,26,ea,0,0);} // 801867A4
  {uint32_t ea=c->r[3]+0x00000130u; c->f[27]=RF64(ea);} // 801867A8
  c->r[7]=c->r[3]+0x00000138u; // 801867AC
  {uint32_t ea=0u+c->r[7]; psq_load(c,27,ea,0,0);} // 801867B0
  {uint32_t ea=c->r[3]+0x00000140u; c->f[28]=RF64(ea);} // 801867B4
  c->r[7]=c->r[3]+0x00000148u; // 801867B8
  {uint32_t ea=0u+c->r[7]; psq_load(c,28,ea,0,0);} // 801867BC
  {uint32_t ea=c->r[3]+0x00000150u; c->f[29]=RF64(ea);} // 801867C0
  c->r[7]=c->r[3]+0x00000158u; // 801867C4
  {uint32_t ea=0u+c->r[7]; psq_load(c,29,ea,0,0);} // 801867C8
  {uint32_t ea=c->r[3]+0x00000160u; c->f[30]=RF64(ea);} // 801867CC
  c->r[7]=c->r[3]+0x00000168u; // 801867D0
  {uint32_t ea=0u+c->r[7]; psq_load(c,30,ea,0,0);} // 801867D4
  {uint32_t ea=c->r[3]+0x00000170u; c->f[31]=RF64(ea);} // 801867D8
  c->r[7]=c->r[3]+0x00000178u; // 801867DC
  {uint32_t ea=0u+c->r[7]; psq_load(c,31,ea,0,0);} // 801867E0
  {uint32_t ea=c->r[3]+0x00000180u; c->f[0]=RF64(ea);} // 801867E4
  cmps(c,0,(int32_t)c->r[4],0); // 801867E8
  c->r[3]=c->r[4]|c->r[4]; // 801867EC
  c->fpscr=(uint32_t)d2u(c->f[0]); // 801867F0
  if (!crb(c,2)) return; // 801867F4
  c->r[3]=0u+0x00000001u; // 801867F8
  return; // 801867FC
}

// __register_fragment
void f_80186800(Ctx* __restrict c) {
  trace_call(0x80186800u);
  c->r[5]=0u+0x80390000u; // 80186800
  c->r[5]=c->r[5]+0xFFFFF628u; // 80186804
  c->r[0]=R32(c->r[5]+0x00000008u); // 80186808
  cmps(c,0,(int32_t)c->r[0],0); // 8018680C
  if (!crb(c,2)) { goto L_8018682C; } // 80186810
  W32(c->r[5]+0x00000000u,c->r[3]); // 80186814
  c->r[0]=0u+0x00000001u; // 80186818
  c->r[3]=0u+0x00000000u; // 8018681C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80186820
  W32(c->r[5]+0x00000008u,c->r[0]); // 80186824
  return; // 80186828
L_8018682C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8018682C
  return; // 80186830
}

// __unregister_fragment
void f_80186834(Ctx* __restrict c) {
  trace_call(0x80186834u);
  cmps(c,0,(int32_t)c->r[3],0); // 80186834
  if (!crb(c,2)) return; // 80186838
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8018683C
  c->r[3]=0u+0x80390000u; // 80186840
  c->r[0]=0u+0x00000000u; // 80186844
  c->r[3]=c->r[3]+0xFFFFF628u; // 80186848
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 8018684C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80186850
  W32(c->r[3]+0x00000008u,c->r[0]); // 80186854
  return; // 80186858
}

// fn_8018685C
void f_8018685C(Ctx* __restrict c) {
  c->r[6]=0u+0x80390000u; // 8018685C
  c->r[6]=c->r[6]+0xFFFFF628u; // 80186860
  c->r[0]=R32(c->r[6]+0x00000008u); // 80186864
  cmps(c,0,(int32_t)c->r[0],0); // 80186868
  if (crb(c,2)) { goto L_801868DC; } // 8018686C
  c->r[7]=R32(c->r[6]+0x00000000u); // 80186870
L_80186874:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 80186874
  cmps(c,0,(int32_t)c->r[0],0); // 80186878
  if (crb(c,2)) { goto L_801868DC; } // 8018687C
  c->r[5]=R32(c->r[7]+0x00000008u); // 80186880
  cmpu(c,0,c->r[3],c->r[5]); // 80186884
  if (crb(c,0)) { goto L_801868D4; } // 80186888
  c->r[0]=c->r[5]+c->r[0]; // 8018688C
  cmpu(c,0,c->r[3],c->r[0]); // 80186890
  if (!crb(c,0)) { goto L_801868D4; } // 80186894
  c->r[3]=R32(c->r[7]+0x00000000u); // 80186898
  c->r[0]=0u+0x00000000u; // 8018689C
  W32(c->r[4]+0x00000000u,c->r[3]); // 801868A0
  c->r[3]=0u+0x00000001u; // 801868A4
  c->r[5]=R32(c->r[7]+0x00000004u); // 801868A8
  W32(c->r[4]+0x00000004u,c->r[5]); // 801868AC
  W32(c->r[4]+0x00000008u,c->r[0]); // 801868B0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801868B4
  W32(c->r[4]+0x00000010u,c->r[0]); // 801868B8
  W32(c->r[4]+0x00000014u,c->r[0]); // 801868BC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801868C0
  W32(c->r[4]+0x00000018u,c->r[0]); // 801868C4
  c->r[0]=R32(c->r[6]+0x00000008u); // 801868C8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801868CC
  return; // 801868D0
L_801868D4:;
  c->r[7]=c->r[7]+0x00000010u; // 801868D4
  IRQCHK(c); goto L_80186874; // 801868D8
L_801868DC:;
  c->r[3]=0u+0x00000000u; // 801868DC
  return; // 801868E0
}

// fn_801868E4
void f_801868E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801868E4
  c->r[0]=c->lr; // 801868E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801868EC
  c->r[0]=0u+0x00000000u; // 801868F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801868F4
  c->r[31]=c->r[4]|c->r[4]; // 801868F8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801868FC
  c->r[30]=c->r[3]|c->r[3]; // 80186900
  W32(c->r[4]+0x00000000u,c->r[0]); // 80186904
  W32(c->r[4]+0x00000008u,c->r[0]); // 80186908
  c->r[4]=c->r[1]+0x00000008u; // 8018690C
  c->lr=0x80186914u; f_8018685C(c); // 80186910
  cmps(c,0,(int32_t)c->r[3],0); // 80186914
  if (crb(c,2)) { goto L_80186A7C; } // 80186918
  c->r[0]=R32(c->r[1]+0x00000010u); // 8018691C
  c->r[3]=0u+0x2AAB0000u; // 80186920
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80186924
  c->r[3]=c->r[3]+0xFFFFAAABu; // 80186928
  c->r[7]=0u+0x00000000u; // 8018692C
  c->r[0]=R32(c->r[1]+0x00000018u); // 80186930
  W32(c->r[31]+0x00000010u,c->r[0]); // 80186934
  c->r[0]=R32(c->r[1]+0x00000020u); // 80186938
  W32(c->r[31]+0x00000014u,c->r[0]); // 8018693C
  c->r[5]=R32(c->r[1]+0x00000008u); // 80186940
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80186944
  c->r[4]=R32(c->r[1]+0x00000010u); // 80186948
  c->r[0]=c->r[0]-c->r[5]; // 8018694C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80186950
  c->r[0]=c->r[30]-c->r[4]; // 80186954
  c->r[3]=sraw(c,c->r[3],1); // 80186958
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8018695C
  c->r[9]=c->r[3]+c->r[4]; // 80186960
L_80186964:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[9]); // 80186964
  if (crb(c,1)) { goto L_80186A7C; } // 80186968
  c->r[4]=c->r[7]+c->r[9]; // 8018696C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 80186970
  c->r[3]=c->r[3]+c->r[4]; // 80186974
  c->r[8]=sraw(c,c->r[3],1); // 80186978
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 8018697C
  c->r[4]=R32(c->r[5]+c->r[3]); // 80186980
  c->r[6]=c->r[5]+c->r[3]; // 80186984
  cmpu(c,0,c->r[0],c->r[4]); // 80186988
  if (!crb(c,0)) { goto L_80186998; } // 8018698C
  c->r[9]=c->r[8]+0xFFFFFFFFu; // 80186990
  IRQCHK(c); goto L_80186964; // 80186994
L_80186998:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 80186998
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8018699C
  c->r[3]=c->r[4]+c->r[3]; // 801869A0
  cmpu(c,0,c->r[0],c->r[3]); // 801869A4
  if (!crb(c,1)) { goto L_801869B4; } // 801869A8
  c->r[7]=c->r[8]+0x00000001u; // 801869AC
  IRQCHK(c); goto L_80186964; // 801869B0
L_801869B4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801869B4
  c->r[3]=c->r[3]+c->r[4]; // 801869B8
  W32(c->r[31]+0x00000004u,c->r[3]); // 801869BC
  c->r[3]=R32(c->r[6]+0x00000004u); // 801869C0
  c->r[3]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[3]); // 801869C4
  if (crb(c,2)) { goto L_801869D4; } // 801869C8
  c->r[5]=c->r[6]+0x00000008u; // 801869CC
  goto L_801869E0; // 801869D0
L_801869D4:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801869D4
  c->r[3]=R32(c->r[6]+0x00000008u); // 801869D8
  c->r[5]=c->r[4]+c->r[3]; // 801869DC
L_801869E0:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801869E0
  c->r[3]=R16(c->r[5]+0x00000000u); // 801869E4
  c->r[4]=R32(c->r[6]+0x00000000u); // 801869E8
  c->r[3]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[3]); // 801869EC
  c->r[0]=c->r[0]-c->r[4]; // 801869F0
  if (crb(c,2)) { goto L_80186A40; } // 801869F4
  c->r[6]=c->r[5]+0x00000004u; // 801869F8
  goto L_80186A30; // 801869FC
L_80186A00:;
  c->r[3]=R16(c->r[6]+0x00000004u); // 80186A00
  cmpu(c,0,c->r[4],c->r[0]); // 80186A04
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80186A08
  c->r[3]=c->r[4]+c->r[3]; // 80186A0C
  if (crb(c,1)) { goto L_80186A2C; } // 80186A10
  cmpu(c,0,c->r[3],c->r[0]); // 80186A14
  if (crb(c,0)) { goto L_80186A2C; } // 80186A18
  c->r[0]=R16(c->r[6]+0x00000006u); // 80186A1C
  c->r[0]=c->r[5]+c->r[0]; // 80186A20
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186A24
  goto L_80186A7C; // 80186A28
L_80186A2C:;
  c->r[6]=c->r[6]+0x00000008u; // 80186A2C
L_80186A30:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80186A30
  cmps(c,0,(int32_t)c->r[4],0); // 80186A34
  if (!crb(c,2)) { IRQCHK(c); goto L_80186A00; } // 80186A38
  goto L_80186A7C; // 80186A3C
L_80186A40:;
  c->r[4]=c->r[5]+0x00000002u; // 80186A40
  goto L_80186A70; // 80186A44
L_80186A48:;
  cmpu(c,0,c->r[3],c->r[0]); // 80186A48
  if (crb(c,1)) { goto L_80186A6C; } // 80186A4C
  c->r[3]=R16(c->r[4]+0x00000002u); // 80186A50
  cmpu(c,0,c->r[3],c->r[0]); // 80186A54
  if (crb(c,0)) { goto L_80186A6C; } // 80186A58
  c->r[0]=R16(c->r[4]+0x00000004u); // 80186A5C
  c->r[0]=c->r[5]+c->r[0]; // 80186A60
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186A64
  goto L_80186A7C; // 80186A68
L_80186A6C:;
  c->r[4]=c->r[4]+0x00000006u; // 80186A6C
L_80186A70:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 80186A70
  cmps(c,0,(int32_t)c->r[3],0); // 80186A74
  if (!crb(c,2)) { IRQCHK(c); goto L_80186A48; } // 80186A78
L_80186A7C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80186A7C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80186A80
  c->r[30]=R32(c->r[1]+0x00000028u); // 80186A84
  c->lr=c->r[0]; // 80186A88
  c->r[1]=c->r[1]+0x00000030u; // 80186A8C
  return; // 80186A90
}

// fn_80186A94
void f_80186A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186A94
  c->r[0]=c->lr; // 80186A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80186A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80186AA0
  c->r[31]=c->r[3]|c->r[3]; // 80186AA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80186AA8
L_80186AAC:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 80186AAC
  cmps(c,0,(int32_t)c->r[4],0); // 80186AB0
  if (crb(c,2)) { goto L_80186AC4; } // 80186AB4
  c->r[5]=R8(c->r[4]+0x00000000u); // 80186AB8
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 80186ABC
  if (crb(c,2)) { goto L_80186B34; } // 80186AC0
L_80186AC4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80186AC4
  c->r[4]=R32(c->r[31]+0x00000018u); // 80186AC8
  c->r[3]=R16(c->r[3]+0x00000000u); // 80186ACC
  c->r[30]=R32(c->r[4]+0x00000000u); // 80186AD0
  c->r[0]=sraw(c,c->r[3],11); cr0(c,c->r[0]); // 80186AD4
  if (crb(c,2)) { goto L_80186AEC; } // 80186AD8
  c->r[0]=rotl(c->r[3],29)&0x000000F8u; // 80186ADC
  c->r[3]=c->r[30]-c->r[0]; // 80186AE0
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 80186AE4
  W32(c->r[31]+0x00000020u,c->r[0]); // 80186AE8
L_80186AEC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80186AEC
  c->r[4]=c->r[31]|c->r[31]; // 80186AF0
  c->lr=0x80186AF8u; f_801868E4(c); // 80186AF4
  c->r[0]=R32(c->r[31]+0x00000000u); // 80186AF8
  cmps(c,0,(int32_t)c->r[0],0); // 80186AFC
  if (!crb(c,2)) { goto L_80186B08; } // 80186B00
  c->lr=0x80186B08u; f_80185760(c); // 80186B04
L_80186B08:;
  W32(c->r[31]+0x00000018u,c->r[30]); // 80186B08
  c->r[3]=R32(c->r[31]+0x00000000u); // 80186B0C
  c->r[0]=R16(c->r[3]+0x00000000u); // 80186B10
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 80186B14
  if (crb(c,2)) { goto L_80186B20; } // 80186B18
  c->r[30]=R32(c->r[31]+0x00000020u); // 80186B1C
L_80186B20:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80186B20
  W32(c->r[31]+0x0000001Cu,c->r[30]); // 80186B24
  cmps(c,0,(int32_t)c->r[0],0); // 80186B28
  if (crb(c,2)) { IRQCHK(c); goto L_80186AAC; } // 80186B2C
  goto L_80186C00; // 80186B30
L_80186B34:;
  cmpu(c,0,c->r[5],0x00000010u); // 80186B34
  if (crb(c,1)) { goto L_80186BFC; } // 80186B38
  c->r[3]=0u+0x80330000u; // 80186B3C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80186B40
  c->r[3]=c->r[3]+0x000001A0u; // 80186B44
  c->r[3]=R32(c->r[3]+c->r[0]); // 80186B48
  c->ctr=c->r[3]; // 80186B4C
  if (true) { switch (c->ctr) { case 0x80186B54u: goto L_80186B54; case 0x80186B60u: goto L_80186B60; case 0x80186B6Cu: goto L_80186B6C; case 0x80186B78u: goto L_80186B78; case 0x80186B84u: goto L_80186B84; case 0x80186B90u: goto L_80186B90; case 0x80186B9Cu: goto L_80186B9C; case 0x80186BA8u: goto L_80186BA8; case 0x80186BB4u: goto L_80186BB4; case 0x80186BC0u: goto L_80186BC0; case 0x80186BCCu: goto L_80186BCC; case 0x80186BD8u: goto L_80186BD8; case 0x80186BE4u: goto L_80186BE4; case 0x80186BFCu: goto L_80186BFC; default: break; } dispatch(c,c->ctr); return; } // 80186B50
L_80186B54:;
  c->r[0]=c->r[4]+0x00000008u; // 80186B54
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186B58
  goto L_80186C00; // 80186B5C
L_80186B60:;
  c->r[0]=c->r[4]+0x0000000Cu; // 80186B60
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186B64
  goto L_80186C00; // 80186B68
L_80186B6C:;
  c->r[0]=c->r[4]+0x00000008u; // 80186B6C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186B70
  goto L_80186C00; // 80186B74
L_80186B78:;
  c->r[0]=c->r[4]+0x0000000Cu; // 80186B78
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186B7C
  goto L_80186C00; // 80186B80
L_80186B84:;
  c->r[0]=c->r[4]+0x0000000Cu; // 80186B84
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186B88
  goto L_80186C00; // 80186B8C
L_80186B90:;
  c->r[0]=c->r[4]+0x00000010u; // 80186B90
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186B94
  goto L_80186C00; // 80186B98
L_80186B9C:;
  c->r[0]=c->r[4]+0x00000014u; // 80186B9C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186BA0
  goto L_80186C00; // 80186BA4
L_80186BA8:;
  c->r[0]=c->r[4]+0x00000008u; // 80186BA8
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186BAC
  goto L_80186C00; // 80186BB0
L_80186BB4:;
  c->r[0]=c->r[4]+0x0000000Cu; // 80186BB4
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186BB8
  goto L_80186C00; // 80186BBC
L_80186BC0:;
  c->r[0]=c->r[4]+0x0000000Cu; // 80186BC0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186BC4
  goto L_80186C00; // 80186BC8
L_80186BCC:;
  c->r[0]=c->r[4]+0x00000010u; // 80186BCC
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186BD0
  goto L_80186C00; // 80186BD4
L_80186BD8:;
  c->r[0]=c->r[4]+0x00000004u; // 80186BD8
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186BDC
  goto L_80186C00; // 80186BE0
L_80186BE4:;
  c->r[0]=R16(c->r[4]+0x00000002u); // 80186BE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80186BE8
  c->r[3]=c->r[0]+c->r[4]; // 80186BEC
  c->r[0]=c->r[3]+0x0000000Cu; // 80186BF0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80186BF4
  goto L_80186C00; // 80186BF8
L_80186BFC:;
  c->lr=0x80186C00u; f_80185760(c); // 80186BFC
L_80186C00:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 80186C00
  c->r[0]=R8(c->r[4]+0x00000000u); // 80186C04
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 80186C08
  cmpu(c,0,c->r[3],0x00000001u); // 80186C0C
  if (!crb(c,2)) { goto L_80186C2C; } // 80186C10
  c->r[3]=R32(c->r[31]+0x00000000u); // 80186C14
  c->r[0]=R16(c->r[4]+0x00000002u); // 80186C18
  c->r[3]=c->r[3]+c->r[0]; // 80186C1C
  W32(c->r[31]+0x00000008u,c->r[3]); // 80186C20
  c->r[0]=R8(c->r[3]+0x00000000u); // 80186C24
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 80186C28
L_80186C2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80186C2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80186C30
  c->r[30]=R32(c->r[1]+0x00000008u); // 80186C34
  c->lr=c->r[0]; // 80186C38
  c->r[1]=c->r[1]+0x00000010u; // 80186C3C
  return; // 80186C40
}

// fn_80186C44
void f_80186C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80186C44
  c->r[0]=c->lr; // 80186C48
  W32(c->r[1]+0x00000024u,c->r[0]); // 80186C4C
  c->r[11]=c->r[1]+0x00000020u; // 80186C50
  c->lr=0x80186C58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80186C54
  c->r[5]=R32(c->r[4]+0x00000000u); // 80186C58
  c->r[6]=R32(c->r[3]+0x00000284u); // 80186C5C
  c->r[0]=R16(c->r[5]+0x00000000u); // 80186C60
  c->r[7]=R32(c->r[6]+0x00000000u); // 80186C64
  c->r[5]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[5]); // 80186C68
  c->r[12]=rotl(c->r[0],26)&0x0000001Fu; // 80186C6C
  if (crb(c,2)) { goto L_80186C80; } // 80186C70
  c->r[0]=rotl(c->r[12],4)&0xFFFFFFF0u; // 80186C74
  c->r[8]=c->r[7]-c->r[0]; // 80186C78
  goto L_80186C88; // 80186C7C
L_80186C80:;
  c->r[0]=rotl(c->r[12],3)&0xFFFFFFF8u; // 80186C80
  c->r[8]=c->r[7]-c->r[0]; // 80186C84
L_80186C88:;
  cmps(c,0,(int32_t)c->r[5],0); // 80186C88
  if (crb(c,2)) { goto L_80186EA4; } // 80186C8C
  c->r[5]=addc(c,~c->r[12],0x00000020u,1); // 80186C90
  c->r[6]=0u+0x00000000u; // 80186C94
  cmps(c,0,(int32_t)c->r[5],32); // 80186C98
  c->r[9]=0u+0x00000000u; // 80186C9C
  if (!crb(c,0)) { goto L_80187004; } // 80186CA0
  cmps(c,0,(int32_t)c->r[12],8); // 80186CA4
  if (!crb(c,1)) { goto L_80186E5C; } // 80186CA8
  cmps(c,0,(int32_t)c->r[5],33); // 80186CAC
  c->r[10]=0u+0x00000000u; // 80186CB0
  c->r[11]=0u+0x00000000u; // 80186CB4
  c->r[0]=0u+0x00000000u; // 80186CB8
  if (!crb(c,0)) { goto L_80186CC4; } // 80186CBC
  c->r[0]=0u+0x00000001u; // 80186CC0
L_80186CC4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80186CC4
  if (crb(c,2)) { goto L_80186CDC; } // 80186CC8
  c->r[0]=c->r[5]+0x80000000u; // 80186CCC
  cmpu(c,0,c->r[0],0x00000000u); // 80186CD0
  if (crb(c,2)) { goto L_80186CDC; } // 80186CD4
  c->r[11]=0u+0x00000001u; // 80186CD8
L_80186CDC:;
  cmps(c,0,(int32_t)c->r[11],0); // 80186CDC
  if (crb(c,2)) { goto L_80186D0C; } // 80186CE0
  c->r[0]=0u-c->r[5]; // 80186CE4
  c->r[11]=0u+0x00000001u; // 80186CE8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80186CEC
  if (!crb(c,2)) { goto L_80186D00; } // 80186CF0
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 80186CF4
  if (crb(c,2)) { goto L_80186D00; } // 80186CF8
  c->r[11]=0u+0x00000000u; // 80186CFC
L_80186D00:;
  cmps(c,0,(int32_t)c->r[11],0); // 80186D00
  if (crb(c,2)) { goto L_80186D0C; } // 80186D04
  c->r[10]=0u+0x00000001u; // 80186D08
L_80186D0C:;
  cmps(c,0,(int32_t)c->r[10],0); // 80186D0C
  if (crb(c,2)) { goto L_80186E5C; } // 80186D10
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 80186D14
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80186D18
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80186D1C
  c->r[29]=c->r[3]+c->r[10]; // 80186D20
  c->ctr=c->r[0]; // 80186D24
  cmps(c,0,(int32_t)c->r[5],24); // 80186D28
  if (!crb(c,0)) { goto L_80186E5C; } // 80186D2C
L_80186D30:;
  c->r[11]=c->r[8]+c->r[9]; // 80186D30
  c->r[0]=c->r[6]+0x00000001u; // 80186D34
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186D38
  c->r[10]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80186D3C
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80186D40
  c->r[28]=c->r[8]+c->r[10]; // 80186D44
  c->r[0]=c->r[6]+0x00000002u; // 80186D48
  c->r[10]=c->r[6]+0x00000006u; // 80186D4C
  {uint32_t ea=c->r[11]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186D50
  c->r[31]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80186D54
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 80186D58
  c->r[0]=c->r[6]+0x00000003u; // 80186D5C
  c->r[30]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80186D60
  c->r[10]=rotl(c->r[10],4)&0xFFFFFFF0u; // 80186D64
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 80186D68
  c->r[0]=c->r[6]+0x00000004u; // 80186D6C
  {uint32_t ea=c->r[29]+0x00000000u; WF64(ea,c->f[0]);} // 80186D70
  c->r[12]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80186D74
  c->r[0]=c->r[6]+0x00000005u; // 80186D78
  c->r[31]=c->r[8]+c->r[31]; // 80186D7C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186D80
  c->r[11]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80186D84
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[0]);} // 80186D88
  c->r[0]=c->r[6]+0x00000007u; // 80186D8C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80186D90
  c->r[30]=c->r[8]+c->r[30]; // 80186D94
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186D98
  c->r[12]=c->r[8]+c->r[12]; // 80186D9C
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 80186DA0
  c->r[11]=c->r[8]+c->r[11]; // 80186DA4
  c->r[10]=c->r[8]+c->r[10]; // 80186DA8
  c->r[27]=c->r[8]+c->r[0]; // 80186DAC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=RF64(ea);} // 80186DB0
  c->r[6]=c->r[6]+0x00000008u; // 80186DB4
  {uint32_t ea=c->r[29]+0x00000010u; WF64(ea,c->f[0]);} // 80186DB8
  c->r[9]=c->r[9]+0x00000080u; // 80186DBC
  c->r[5]=c->r[5]+0x00000008u; // 80186DC0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186DC4
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 80186DC8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186DCC
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 80186DD0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=RF64(ea);} // 80186DD4
  {uint32_t ea=c->r[29]+0x00000020u; WF64(ea,c->f[0]);} // 80186DD8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186DDC
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 80186DE0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186DE4
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 80186DE8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=RF64(ea);} // 80186DEC
  {uint32_t ea=c->r[29]+0x00000030u; WF64(ea,c->f[0]);} // 80186DF0
  {uint32_t ea=c->r[12]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186DF4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 80186DF8
  {uint32_t ea=c->r[12]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186DFC
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[0]);} // 80186E00
  {uint32_t ea=c->r[12]+0x00000000u; c->f[0]=RF64(ea);} // 80186E04
  {uint32_t ea=c->r[29]+0x00000040u; WF64(ea,c->f[0]);} // 80186E08
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E0C
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 80186E10
  {uint32_t ea=c->r[11]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E14
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 80186E18
  {uint32_t ea=c->r[11]+0x00000000u; c->f[0]=RF64(ea);} // 80186E1C
  {uint32_t ea=c->r[29]+0x00000050u; WF64(ea,c->f[0]);} // 80186E20
  {uint32_t ea=c->r[10]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E24
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 80186E28
  {uint32_t ea=c->r[10]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E2C
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 80186E30
  {uint32_t ea=c->r[10]+0x00000000u; c->f[0]=RF64(ea);} // 80186E34
  {uint32_t ea=c->r[29]+0x00000060u; WF64(ea,c->f[0]);} // 80186E38
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E3C
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 80186E40
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E44
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 80186E48
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 80186E4C
  {uint32_t ea=c->r[29]+0x00000070u; WF64(ea,c->f[0]);} // 80186E50
  c->r[29]=c->r[29]+0x00000080u; // 80186E54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80186D30; } // 80186E58
L_80186E5C:;
  c->r[9]=rotl(c->r[6],4)&0xFFFFFFF0u; // 80186E5C
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80186E60
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 80186E64
  c->r[9]=c->r[8]+c->r[9]; // 80186E68
  c->r[6]=c->r[3]+c->r[6]; // 80186E6C
  c->ctr=c->r[0]; // 80186E70
  cmps(c,0,(int32_t)c->r[5],32); // 80186E74
  if (!crb(c,0)) { goto L_80187004; } // 80186E78
L_80186E7C:;
  {uint32_t ea=c->r[9]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E7C
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 80186E80
  {uint32_t ea=c->r[9]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80186E84
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 80186E88
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 80186E8C
  c->r[9]=c->r[9]+0x00000010u; // 80186E90
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 80186E94
  c->r[6]=c->r[6]+0x00000010u; // 80186E98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80186E7C; } // 80186E9C
  goto L_80187004; // 80186EA0
L_80186EA4:;
  c->r[5]=addc(c,~c->r[12],0x00000020u,1); // 80186EA4
  c->r[6]=0u+0x00000000u; // 80186EA8
  cmps(c,0,(int32_t)c->r[5],32); // 80186EAC
  c->r[9]=0u+0x00000000u; // 80186EB0
  if (!crb(c,0)) { goto L_80187004; } // 80186EB4
  cmps(c,0,(int32_t)c->r[12],8); // 80186EB8
  if (!crb(c,1)) { goto L_80186FD0; } // 80186EBC
  cmps(c,0,(int32_t)c->r[5],33); // 80186EC0
  c->r[10]=0u+0x00000000u; // 80186EC4
  c->r[11]=0u+0x00000000u; // 80186EC8
  c->r[0]=0u+0x00000000u; // 80186ECC
  if (!crb(c,0)) { goto L_80186ED8; } // 80186ED0
  c->r[0]=0u+0x00000001u; // 80186ED4
L_80186ED8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80186ED8
  if (crb(c,2)) { goto L_80186EF0; } // 80186EDC
  c->r[0]=c->r[5]+0x80000000u; // 80186EE0
  cmpu(c,0,c->r[0],0x00000000u); // 80186EE4
  if (crb(c,2)) { goto L_80186EF0; } // 80186EE8
  c->r[11]=0u+0x00000001u; // 80186EEC
L_80186EF0:;
  cmps(c,0,(int32_t)c->r[11],0); // 80186EF0
  if (crb(c,2)) { goto L_80186F20; } // 80186EF4
  c->r[0]=0u-c->r[5]; // 80186EF8
  c->r[11]=0u+0x00000001u; // 80186EFC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80186F00
  if (!crb(c,2)) { goto L_80186F14; } // 80186F04
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 80186F08
  if (crb(c,2)) { goto L_80186F14; } // 80186F0C
  c->r[11]=0u+0x00000000u; // 80186F10
L_80186F14:;
  cmps(c,0,(int32_t)c->r[11],0); // 80186F14
  if (crb(c,2)) { goto L_80186F20; } // 80186F18
  c->r[10]=0u+0x00000001u; // 80186F1C
L_80186F20:;
  cmps(c,0,(int32_t)c->r[10],0); // 80186F20
  if (crb(c,2)) { goto L_80186FD0; } // 80186F24
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 80186F28
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80186F2C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80186F30
  c->r[31]=c->r[3]+c->r[10]; // 80186F34
  c->ctr=c->r[0]; // 80186F38
  cmps(c,0,(int32_t)c->r[5],24); // 80186F3C
  if (!crb(c,0)) { goto L_80186FD0; } // 80186F40
L_80186F44:;
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 80186F44
  c->r[0]=c->r[6]+0x00000001u; // 80186F48
  {uint32_t ea=c->r[31]+0x00000000u; WF64(ea,c->f[0]);} // 80186F4C
  c->r[10]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80186F50
  c->r[0]=c->r[6]+0x00000002u; // 80186F54
  c->r[30]=c->r[6]+0x00000003u; // 80186F58
  {uint32_t ea=c->r[8]+c->r[10]; c->f[0]=RF64(ea);} // 80186F5C
  c->r[12]=c->r[6]+0x00000004u; // 80186F60
  {uint32_t ea=c->r[31]+0x00000010u; WF64(ea,c->f[0]);} // 80186F64
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80186F68
  c->r[11]=c->r[6]+0x00000005u; // 80186F6C
  c->r[10]=c->r[6]+0x00000006u; // 80186F70
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 80186F74
  c->r[0]=c->r[6]+0x00000007u; // 80186F78
  {uint32_t ea=c->r[31]+0x00000020u; WF64(ea,c->f[0]);} // 80186F7C
  c->r[30]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80186F80
  c->r[12]=rotl(c->r[12],3)&0xFFFFFFF8u; // 80186F84
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80186F88
  {uint32_t ea=c->r[8]+c->r[30]; c->f[0]=RF64(ea);} // 80186F8C
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 80186F90
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[0]);} // 80186F94
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80186F98
  c->r[6]=c->r[6]+0x00000008u; // 80186F9C
  c->r[9]=c->r[9]+0x00000040u; // 80186FA0
  {uint32_t ea=c->r[8]+c->r[12]; c->f[0]=RF64(ea);} // 80186FA4
  c->r[5]=c->r[5]+0x00000008u; // 80186FA8
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[0]);} // 80186FAC
  {uint32_t ea=c->r[8]+c->r[11]; c->f[0]=RF64(ea);} // 80186FB0
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[0]);} // 80186FB4
  {uint32_t ea=c->r[8]+c->r[10]; c->f[0]=RF64(ea);} // 80186FB8
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[0]);} // 80186FBC
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 80186FC0
  {uint32_t ea=c->r[31]+0x00000070u; WF64(ea,c->f[0]);} // 80186FC4
  c->r[31]=c->r[31]+0x00000080u; // 80186FC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80186F44; } // 80186FCC
L_80186FD0:;
  c->r[9]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80186FD0
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80186FD4
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 80186FD8
  c->r[9]=c->r[8]+c->r[9]; // 80186FDC
  c->r[6]=c->r[3]+c->r[6]; // 80186FE0
  c->ctr=c->r[0]; // 80186FE4
  cmps(c,0,(int32_t)c->r[5],32); // 80186FE8
  if (!crb(c,0)) { goto L_80187004; } // 80186FEC
L_80186FF0:;
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 80186FF0
  c->r[9]=c->r[9]+0x00000008u; // 80186FF4
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 80186FF8
  c->r[6]=c->r[6]+0x00000010u; // 80186FFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80186FF0; } // 80187000
L_80187004:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80187004
  c->r[6]=0u+0x00000000u; // 80187008
  c->r[9]=0u+0x00000000u; // 8018700C
  c->r[0]=R16(c->r[4]+0x00000000u); // 80187010
  c->r[11]=sraw(c,c->r[0],11); // 80187014
  c->r[5]=addc(c,~c->r[11],0x00000020u,1); // 80187018
  cmps(c,0,(int32_t)c->r[5],32); // 8018701C
  c->r[0]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80187020
  c->r[8]=c->r[8]-c->r[0]; // 80187024
  if (!crb(c,0)) { goto L_80187178; } // 80187028
  cmps(c,0,(int32_t)c->r[11],8); // 8018702C
  if (!crb(c,1)) { goto L_80187144; } // 80187030
  cmps(c,0,(int32_t)c->r[5],33); // 80187034
  c->r[4]=0u+0x00000000u; // 80187038
  c->r[10]=0u+0x00000000u; // 8018703C
  c->r[0]=0u+0x00000000u; // 80187040
  if (!crb(c,0)) { goto L_8018704C; } // 80187044
  c->r[0]=0u+0x00000001u; // 80187048
L_8018704C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018704C
  if (crb(c,2)) { goto L_80187064; } // 80187050
  c->r[0]=c->r[5]+0x80000000u; // 80187054
  cmpu(c,0,c->r[0],0x00000000u); // 80187058
  if (crb(c,2)) { goto L_80187064; } // 8018705C
  c->r[10]=0u+0x00000001u; // 80187060
L_80187064:;
  cmps(c,0,(int32_t)c->r[10],0); // 80187064
  if (crb(c,2)) { goto L_80187094; } // 80187068
  c->r[0]=0u-c->r[5]; // 8018706C
  c->r[10]=0u+0x00000001u; // 80187070
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80187074
  if (!crb(c,2)) { goto L_80187088; } // 80187078
  c->r[0]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[0]); // 8018707C
  if (crb(c,2)) { goto L_80187088; } // 80187080
  c->r[10]=0u+0x00000000u; // 80187084
L_80187088:;
  cmps(c,0,(int32_t)c->r[10],0); // 80187088
  if (crb(c,2)) { goto L_80187094; } // 8018708C
  c->r[4]=0u+0x00000001u; // 80187090
L_80187094:;
  cmps(c,0,(int32_t)c->r[4],0); // 80187094
  if (crb(c,2)) { goto L_80187144; } // 80187098
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 8018709C
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801870A0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801870A4
  c->r[4]=c->r[3]+c->r[4]; // 801870A8
  c->ctr=c->r[0]; // 801870AC
  cmps(c,0,(int32_t)c->r[5],24); // 801870B0
  if (!crb(c,0)) { goto L_80187144; } // 801870B4
L_801870B8:;
  c->r[10]=R32(c->r[8]+c->r[9]); // 801870B8
  c->r[31]=c->r[6]+0x00000003u; // 801870BC
  c->r[0]=c->r[6]+0x00000001u; // 801870C0
  W32(c->r[4]+0x00000200u,c->r[10]); // 801870C4
  c->r[10]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801870C8
  c->r[12]=c->r[6]+0x00000004u; // 801870CC
  c->r[10]=R32(c->r[8]+c->r[10]); // 801870D0
  c->r[0]=c->r[6]+0x00000002u; // 801870D4
  W32(c->r[4]+0x00000204u,c->r[10]); // 801870D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801870DC
  c->r[11]=c->r[6]+0x00000005u; // 801870E0
  c->r[10]=c->r[6]+0x00000006u; // 801870E4
  c->r[30]=R32(c->r[8]+c->r[0]); // 801870E8
  c->r[0]=c->r[6]+0x00000007u; // 801870EC
  W32(c->r[4]+0x00000208u,c->r[30]); // 801870F0
  c->r[31]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801870F4
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801870F8
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801870FC
  c->r[31]=R32(c->r[8]+c->r[31]); // 80187100
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80187104
  W32(c->r[4]+0x0000020Cu,c->r[31]); // 80187108
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018710C
  c->r[6]=c->r[6]+0x00000008u; // 80187110
  c->r[9]=c->r[9]+0x00000020u; // 80187114
  c->r[12]=R32(c->r[8]+c->r[12]); // 80187118
  c->r[5]=c->r[5]+0x00000008u; // 8018711C
  W32(c->r[4]+0x00000210u,c->r[12]); // 80187120
  c->r[11]=R32(c->r[8]+c->r[11]); // 80187124
  W32(c->r[4]+0x00000214u,c->r[11]); // 80187128
  c->r[10]=R32(c->r[8]+c->r[10]); // 8018712C
  W32(c->r[4]+0x00000218u,c->r[10]); // 80187130
  c->r[0]=R32(c->r[8]+c->r[0]); // 80187134
  W32(c->r[4]+0x0000021Cu,c->r[0]); // 80187138
  c->r[4]=c->r[4]+0x00000020u; // 8018713C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801870B8; } // 80187140
L_80187144:;
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80187144
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80187148
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 8018714C
  c->r[6]=c->r[8]+c->r[6]; // 80187150
  c->r[4]=c->r[3]+c->r[4]; // 80187154
  c->ctr=c->r[0]; // 80187158
  cmps(c,0,(int32_t)c->r[5],32); // 8018715C
  if (!crb(c,0)) { goto L_80187178; } // 80187160
L_80187164:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80187164
  c->r[6]=c->r[6]+0x00000004u; // 80187168
  W32(c->r[4]+0x00000200u,c->r[0]); // 8018716C
  c->r[4]=c->r[4]+0x00000004u; // 80187170
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80187164; } // 80187174
L_80187178:;
  W32(c->r[3]+0x00000284u,c->r[7]); // 80187178
  c->r[11]=c->r[1]+0x00000020u; // 8018717C
  c->r[3]=R32(c->r[7]+0x00000004u); // 80187180
  c->lr=0x80187188u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80187184
  c->r[0]=R32(c->r[1]+0x00000024u); // 80187188
  c->lr=c->r[0]; // 8018718C
  c->r[1]=c->r[1]+0x00000020u; // 80187190
  return; // 80187194
}

// fn_80187198
void f_80187198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187198
  c->r[0]=c->lr; // 8018719C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801871A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801871A4
  c->r[26]=c->r[3]|c->r[3]; // 801871A8
  c->r[27]=c->r[4]|c->r[4]; // 801871AC
  c->r[28]=c->r[5]|c->r[5]; // 801871B0
  c->r[31]=0u+0x80330000u; // 801871B4
  c->r[25]=0u+0x00000000u; // 801871B8
L_801871BC:;
  c->r[30]=R32(c->r[27]+0x00000008u); // 801871BC
  cmps(c,0,(int32_t)c->r[30],0); // 801871C0
  if (!crb(c,2)) { goto L_80187210; } // 801871C4
  c->r[3]=c->r[26]|c->r[26]; // 801871C8
  c->r[4]=c->r[27]|c->r[27]; // 801871CC
  c->lr=0x801871D4u; f_80186C44(c); // 801871D0
  c->r[4]=c->r[27]|c->r[27]; // 801871D4
  c->lr=0x801871DCu; f_801868E4(c); // 801871D8
  c->r[0]=R32(c->r[27]+0x00000000u); // 801871DC
  cmps(c,0,(int32_t)c->r[0],0); // 801871E0
  if (!crb(c,2)) { goto L_801871EC; } // 801871E4
  c->lr=0x801871ECu; f_80185760(c); // 801871E8
L_801871EC:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801871EC
  c->r[0]=R16(c->r[3]+0x00000000u); // 801871F0
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801871F4
  if (crb(c,2)) { goto L_80187204; } // 801871F8
  c->r[0]=R32(c->r[26]+0x0000027Cu); // 801871FC
  goto L_80187208; // 80187200
L_80187204:;
  c->r[0]=R32(c->r[26]+0x00000284u); // 80187204
L_80187208:;
  W32(c->r[26]+0x00000288u,c->r[0]); // 80187208
  IRQCHK(c); goto L_801871BC; // 8018720C
L_80187210:;
  c->r[29]=R8(c->r[30]+0x00000000u); // 80187210
  c->r[0]=rotl(c->r[29],0)&0x0000007Fu; // 80187214
  cmpu(c,0,c->r[0],0x00000010u); // 80187218
  if (crb(c,1)) { goto L_8018767C; } // 8018721C
  c->r[3]=c->r[31]+0x000001E4u; // 80187220
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187224
  c->r[3]=R32(c->r[3]+c->r[0]); // 80187228
  c->ctr=c->r[3]; // 8018722C
  if (true) { switch (c->ctr) { case 0x80187234u: goto L_80187234; case 0x80187248u: goto L_80187248; case 0x80187274u: goto L_80187274; case 0x801872D8u: goto L_801872D8; case 0x80187324u: goto L_80187324; case 0x80187378u: goto L_80187378; case 0x801873CCu: goto L_801873CC; case 0x80187420u: goto L_80187420; case 0x801874A8u: goto L_801874A8; case 0x80187524u: goto L_80187524; case 0x8018756Cu: goto L_8018756C; case 0x801875E8u: goto L_801875E8; case 0x801875FCu: goto L_801875FC; case 0x80187610u: goto L_80187610; case 0x8018765Cu: goto L_8018765C; case 0x8018767Cu: goto L_8018767C; default: break; } dispatch(c,c->ctr); return; } // 80187230
L_80187234:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80187234
  c->r[0]=R16(c->r[30]+0x00000002u); // 80187238
  c->r[0]=c->r[3]+c->r[0]; // 8018723C
  W32(c->r[27]+0x00000008u,c->r[0]); // 80187240
  goto L_80187680; // 80187244
L_80187248:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 80187248
  c->r[4]=0u+0xFFFFFFFFu; // 8018724C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187250
  c->r[12]=R32(c->r[30]+0x00000004u); // 80187254
  c->r[3]=c->r[3]+c->r[0]; // 80187258
  c->ctr=c->r[12]; // 8018725C
  if (true) { c->lr=0x80187264u; dispatch(c,c->ctr); } // 80187260
  c->r[3]=R32(c->r[27]+0x00000008u); // 80187264
  c->r[0]=c->r[3]+0x00000008u; // 80187268
  W32(c->r[27]+0x00000008u,c->r[0]); // 8018726C
  goto L_80187680; // 80187270
L_80187274:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 80187274
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 80187278
  if (crb(c,2)) { goto L_80187298; } // 8018727C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187280
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187284
  c->r[3]=c->r[26]+c->r[0]; // 80187288
  c->r[0]=R32(c->r[3]+0x00000200u); // 8018728C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80187290
  goto L_801872A4; // 80187294
L_80187298:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 80187298
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 8018729C
  c->r[0]=R8(c->r[3]+c->r[0]); // 801872A0
L_801872A4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801872A4
  if (crb(c,2)) { goto L_801872C8; } // 801872A8
  c->r[3]=R32(c->r[26]+0x00000288u); // 801872AC
  c->r[4]=0u+0xFFFFFFFFu; // 801872B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 801872B4
  c->r[12]=R32(c->r[30]+0x00000008u); // 801872B8
  c->r[3]=c->r[3]+c->r[0]; // 801872BC
  c->ctr=c->r[12]; // 801872C0
  if (true) { c->lr=0x801872C8u; dispatch(c,c->ctr); } // 801872C4
L_801872C8:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801872C8
  c->r[0]=c->r[3]+0x0000000Cu; // 801872CC
  W32(c->r[27]+0x00000008u,c->r[0]); // 801872D0
  goto L_80187680; // 801872D4
L_801872D8:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801872D8
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801872DC
  if (crb(c,2)) { goto L_801872F8; } // 801872E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801872E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801872E8
  c->r[3]=c->r[26]+c->r[0]; // 801872EC
  c->r[3]=R32(c->r[3]+0x00000200u); // 801872F0
  goto L_80187304; // 801872F4
L_801872F8:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801872F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801872FC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80187300
L_80187304:;
  c->r[12]=R32(c->r[30]+0x00000004u); // 80187304
  c->r[4]=0u+0xFFFFFFFFu; // 80187308
  c->ctr=c->r[12]; // 8018730C
  if (true) { c->lr=0x80187314u; dispatch(c,c->ctr); } // 80187310
  c->r[3]=R32(c->r[27]+0x00000008u); // 80187314
  c->r[0]=c->r[3]+0x00000008u; // 80187318
  W32(c->r[27]+0x00000008u,c->r[0]); // 8018731C
  goto L_80187680; // 80187320
L_80187324:;
  c->r[23]=R16(c->r[30]+0x00000004u); // 80187324
  c->r[24]=R16(c->r[30]+0x00000006u); // 80187328
  c->r[4]=R32(c->r[26]+0x00000288u); // 8018732C
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[23]); // 80187330
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187334
  c->r[22]=c->r[4]+c->r[3]; // 80187338
  c->r[22]=c->r[22]+c->r[0]; // 8018733C
  goto L_80187360; // 80187340
L_80187344:;
  c->r[12]=R32(c->r[30]+0x00000008u); // 80187344
  c->r[22]=c->r[22]-c->r[24]; // 80187348
  c->r[3]=c->r[22]|c->r[22]; // 8018734C
  c->r[4]=0u+0xFFFFFFFFu; // 80187350
  c->ctr=c->r[12]; // 80187354
  if (true) { c->lr=0x8018735Cu; dispatch(c,c->ctr); } // 80187358
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 8018735C
L_80187360:;
  cmps(c,0,(int32_t)c->r[23],0); // 80187360
  if (crb(c,1)) { IRQCHK(c); goto L_80187344; } // 80187364
  c->r[3]=R32(c->r[27]+0x00000008u); // 80187368
  c->r[0]=c->r[3]+0x0000000Cu; // 8018736C
  W32(c->r[27]+0x00000008u,c->r[0]); // 80187370
  goto L_80187680; // 80187374
L_80187378:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 80187378
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 8018737C
  if (crb(c,2)) { goto L_80187398; } // 80187380
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187384
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187388
  c->r[3]=c->r[26]+c->r[0]; // 8018738C
  c->r[3]=R32(c->r[3]+0x00000200u); // 80187390
  goto L_801873A4; // 80187394
L_80187398:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 80187398
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 8018739C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801873A0
L_801873A4:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801873A4
  c->r[4]=0u+0x00000000u; // 801873A8
  c->r[12]=R32(c->r[30]+0x00000008u); // 801873AC
  c->r[3]=c->r[3]+c->r[0]; // 801873B0
  c->ctr=c->r[12]; // 801873B4
  if (true) { c->lr=0x801873BCu; dispatch(c,c->ctr); } // 801873B8
  c->r[3]=R32(c->r[27]+0x00000008u); // 801873BC
  c->r[0]=c->r[3]+0x0000000Cu; // 801873C0
  W32(c->r[27]+0x00000008u,c->r[0]); // 801873C4
  goto L_80187680; // 801873C8
L_801873CC:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801873CC
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801873D0
  if (crb(c,2)) { goto L_801873EC; } // 801873D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801873D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801873DC
  c->r[3]=c->r[26]+c->r[0]; // 801873E0
  c->r[3]=R32(c->r[3]+0x00000200u); // 801873E4
  goto L_801873F8; // 801873E8
L_801873EC:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801873EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801873F0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801873F4
L_801873F8:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801873F8
  c->r[4]=0u+0xFFFFFFFFu; // 801873FC
  c->r[12]=R32(c->r[30]+0x00000008u); // 80187400
  c->r[3]=c->r[3]+c->r[0]; // 80187404
  c->ctr=c->r[12]; // 80187408
  if (true) { c->lr=0x80187410u; dispatch(c,c->ctr); } // 8018740C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80187410
  c->r[0]=c->r[3]+0x0000000Cu; // 80187414
  W32(c->r[27]+0x00000008u,c->r[0]); // 80187418
  goto L_80187680; // 8018741C
L_80187420:;
  c->r[4]=R8(c->r[30]+0x00000001u); // 80187420
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 80187424
  if (crb(c,2)) { goto L_80187440; } // 80187428
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 8018742C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187430
  c->r[3]=c->r[26]+c->r[0]; // 80187434
  c->r[5]=R32(c->r[3]+0x00000200u); // 80187438
  goto L_8018744C; // 8018743C
L_80187440:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 80187440
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 80187444
  c->r[5]=R32(c->r[3]+c->r[0]); // 80187448
L_8018744C:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 8018744C
  if (crb(c,2)) { goto L_8018746C; } // 80187450
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187454
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187458
  c->r[3]=c->r[26]+c->r[0]; // 8018745C
  c->r[0]=R32(c->r[3]+0x00000200u); // 80187460
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80187464
  goto L_80187478; // 80187468
L_8018746C:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 8018746C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187470
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[0]); // 80187474
L_80187478:;
  cmps(c,0,(int32_t)c->r[0],0); // 80187478
  if (crb(c,2)) { goto L_80187498; } // 8018747C
  c->r[0]=R32(c->r[30]+0x00000008u); // 80187480
  c->r[4]=0u+0x00000000u; // 80187484
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80187488
  c->r[3]=c->r[5]+c->r[0]; // 8018748C
  c->ctr=c->r[12]; // 80187490
  if (true) { c->lr=0x80187498u; dispatch(c,c->ctr); } // 80187494
L_80187498:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 80187498
  c->r[0]=c->r[3]+0x00000010u; // 8018749C
  W32(c->r[27]+0x00000008u,c->r[0]); // 801874A0
  goto L_80187680; // 801874A4
L_801874A8:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801874A8
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801874AC
  if (crb(c,2)) { goto L_801874C8; } // 801874B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801874B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801874B8
  c->r[3]=c->r[26]+c->r[0]; // 801874BC
  c->r[24]=R32(c->r[3]+0x00000200u); // 801874C0
  goto L_801874D4; // 801874C4
L_801874C8:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801874C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801874CC
  c->r[24]=R32(c->r[3]+c->r[0]); // 801874D0
L_801874D4:;
  c->r[23]=R32(c->r[30]+0x00000008u); // 801874D4
  c->r[22]=R32(c->r[30]+0x0000000Cu); // 801874D8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801874DC
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[23]); // 801874E0
  c->r[24]=c->r[24]+c->r[3]; // 801874E4
  c->r[24]=c->r[24]+c->r[0]; // 801874E8
  goto L_8018750C; // 801874EC
L_801874F0:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801874F0
  c->r[24]=c->r[24]-c->r[22]; // 801874F4
  c->r[3]=c->r[24]|c->r[24]; // 801874F8
  c->r[4]=0u+0xFFFFFFFFu; // 801874FC
  c->ctr=c->r[12]; // 80187500
  if (true) { c->lr=0x80187508u; dispatch(c,c->ctr); } // 80187504
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 80187508
L_8018750C:;
  cmps(c,0,(int32_t)c->r[23],0); // 8018750C
  if (crb(c,1)) { IRQCHK(c); goto L_801874F0; } // 80187510
  c->r[3]=R32(c->r[27]+0x00000008u); // 80187514
  c->r[0]=c->r[3]+0x00000014u; // 80187518
  W32(c->r[27]+0x00000008u,c->r[0]); // 8018751C
  goto L_80187680; // 80187520
L_80187524:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 80187524
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 80187528
  if (crb(c,2)) { goto L_80187544; } // 8018752C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187530
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187534
  c->r[3]=c->r[26]+c->r[0]; // 80187538
  c->r[3]=R32(c->r[3]+0x00000200u); // 8018753C
  goto L_80187550; // 80187540
L_80187544:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 80187544
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187548
  c->r[3]=R32(c->r[3]+c->r[0]); // 8018754C
L_80187550:;
  c->r[12]=R32(c->r[30]+0x00000004u); // 80187550
  c->ctr=c->r[12]; // 80187554
  if (true) { c->lr=0x8018755Cu; dispatch(c,c->ctr); } // 80187558
  c->r[3]=R32(c->r[27]+0x00000008u); // 8018755C
  c->r[0]=c->r[3]+0x00000008u; // 80187560
  W32(c->r[27]+0x00000008u,c->r[0]); // 80187564
  goto L_80187680; // 80187568
L_8018756C:;
  c->r[4]=R8(c->r[30]+0x00000001u); // 8018756C
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 80187570
  if (crb(c,2)) { goto L_8018758C; } // 80187574
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 80187578
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018757C
  c->r[3]=c->r[26]+c->r[0]; // 80187580
  c->r[3]=R32(c->r[3]+0x00000200u); // 80187584
  goto L_80187598; // 80187588
L_8018758C:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 8018758C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 80187590
  c->r[3]=R32(c->r[3]+c->r[0]); // 80187594
L_80187598:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 80187598
  if (crb(c,2)) { goto L_801875B8; } // 8018759C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801875A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801875A4
  c->r[4]=c->r[26]+c->r[0]; // 801875A8
  c->r[0]=R32(c->r[4]+0x00000200u); // 801875AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801875B0
  goto L_801875C4; // 801875B4
L_801875B8:;
  c->r[4]=R32(c->r[26]+0x00000288u); // 801875B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801875BC
  c->r[0]=R8(c->r[4]+c->r[0]); // 801875C0
L_801875C4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801875C4
  if (crb(c,2)) { goto L_801875D8; } // 801875C8
  c->r[12]=R32(c->r[30]+0x00000008u); // 801875CC
  c->ctr=c->r[12]; // 801875D0
  if (true) { c->lr=0x801875D8u; dispatch(c,c->ctr); } // 801875D4
L_801875D8:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801875D8
  c->r[0]=c->r[3]+0x0000000Cu; // 801875DC
  W32(c->r[27]+0x00000008u,c->r[0]); // 801875E0
  goto L_80187680; // 801875E4
L_801875E8:;
  cmpu(c,0,c->r[28],c->r[30]); // 801875E8
  if (crb(c,2)) { goto L_80187690; } // 801875EC
  c->r[0]=c->r[30]+0x0000000Cu; // 801875F0
  W32(c->r[27]+0x00000008u,c->r[0]); // 801875F4
  goto L_80187680; // 801875F8
L_801875FC:;
  cmpu(c,0,c->r[28],c->r[30]); // 801875FC
  if (crb(c,2)) { goto L_80187690; } // 80187600
  c->r[0]=c->r[30]+0x00000010u; // 80187604
  W32(c->r[27]+0x00000008u,c->r[0]); // 80187608
  goto L_80187680; // 8018760C
L_80187610:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 80187610
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 80187614
  c->r[3]=c->r[3]+c->r[0]; // 80187618
  c->r[12]=R32(c->r[3]+0x00000008u); // 8018761C
  cmps(c,0,(int32_t)c->r[12],0); // 80187620
  if (crb(c,2)) { goto L_8018764C; } // 80187624
  c->r[3]=R32(c->r[3]+0x00000000u); // 80187628
  c->r[0]=R32(c->r[26]+0x00000298u); // 8018762C
  cmpu(c,0,c->r[0],c->r[3]); // 80187630
  if (!crb(c,2)) { goto L_80187640; } // 80187634
  W32(c->r[26]+0x0000029Cu,c->r[12]); // 80187638
  goto L_8018764C; // 8018763C
L_80187640:;
  c->r[4]=0u+0xFFFFFFFFu; // 80187640
  c->ctr=c->r[12]; // 80187644
  if (true) { c->lr=0x8018764Cu; dispatch(c,c->ctr); } // 80187648
L_8018764C:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 8018764C
  c->r[0]=c->r[3]+0x00000004u; // 80187650
  W32(c->r[27]+0x00000008u,c->r[0]); // 80187654
  goto L_80187680; // 80187658
L_8018765C:;
  cmpu(c,0,c->r[28],c->r[30]); // 8018765C
  if (crb(c,2)) { goto L_80187690; } // 80187660
  c->r[0]=R16(c->r[30]+0x00000002u); // 80187664
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80187668
  c->r[3]=c->r[0]+c->r[30]; // 8018766C
  c->r[0]=c->r[3]+0x0000000Cu; // 80187670
  W32(c->r[27]+0x00000008u,c->r[0]); // 80187674
  goto L_80187680; // 80187678
L_8018767C:;
  c->lr=0x80187680u; f_80185760(c); // 8018767C
L_80187680:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 80187680
  if (crb(c,2)) { IRQCHK(c); goto L_801871BC; } // 80187684
  W32(c->r[27]+0x00000008u,c->r[25]); // 80187688
  IRQCHK(c); goto L_801871BC; // 8018768C
L_80187690:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80187690
  c->r[0]=R32(c->r[1]+0x00000034u); // 80187694
  c->lr=c->r[0]; // 80187698
  c->r[1]=c->r[1]+0x00000030u; // 8018769C
  return; // 801876A0
}

// fn_801876A4
void f_801876A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801876A4
  c->r[0]=c->lr; // 801876A8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801876AC
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801876B0
  c->r[31]=c->r[1]|c->r[1]; // 801876B4
  c->r[30]=R32(c->r[3]+0x00000014u); // 801876B8
  W32(c->r[1]+0x00000034u,c->r[1]); // 801876BC
  c->lr=0x801876C4u; f_8018576C(c); // 801876C0
  goto L_8018783C; // 801876C4
  c->r[29]=R32(c->r[31]+0x00000024u); // 801876C8
  c->r[27]=c->r[30]|c->r[30]; // 801876CC
  c->r[28]=0u+0x00000000u; // 801876D0
  goto L_80187700; // 801876D4
L_801876D8:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801876D8
  c->r[3]=c->r[29]|c->r[29]; // 801876DC
  c->r[5]=c->r[31]+0x00000010u; // 801876E0
  c->lr=0x801876E8u; f_80185778(c); // 801876E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801876E8
  if (crb(c,2)) { goto L_801876F8; } // 801876EC
  c->r[0]=0u+0x00000001u; // 801876F0
  goto L_80187710; // 801876F4
L_801876F8:;
  c->r[27]=c->r[27]+0x00000004u; // 801876F8
  c->r[28]=c->r[28]+0x00000001u; // 801876FC
L_80187700:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 80187700
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80187704
  if (crb(c,0)) { IRQCHK(c); goto L_801876D8; } // 80187708
  c->r[0]=0u+0x00000000u; // 8018770C
L_80187710:;
  cmps(c,0,(int32_t)c->r[0],0); // 80187710
  if (crb(c,2)) { goto L_80187728; } // 80187714
  c->r[3]=0u+0x00000000u; // 80187718
  c->r[4]=0u+0x00000000u; // 8018771C
  c->r[5]=0u+0x00000000u; // 80187720
  c->lr=0x80187728u; f_80187DA8(c); // 80187724
L_80187728:;
  c->r[28]=0u+0x802E0000u; // 80187728
  c->r[27]=c->r[30]|c->r[30]; // 8018772C
  c->r[28]=c->r[28]+0xFFFFFC84u; // 80187730
  c->r[29]=0u+0x00000000u; // 80187734
  goto L_80187764; // 80187738
L_8018773C:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 8018773C
  c->r[3]=c->r[28]|c->r[28]; // 80187740
  c->r[5]=c->r[31]+0x0000000Cu; // 80187744
  c->lr=0x8018774Cu; f_80185778(c); // 80187748
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 8018774C
  if (crb(c,2)) { goto L_8018775C; } // 80187750
  c->r[0]=0u+0x00000001u; // 80187754
  goto L_80187774; // 80187758
L_8018775C:;
  c->r[27]=c->r[27]+0x00000004u; // 8018775C
  c->r[29]=c->r[29]+0x00000001u; // 80187760
L_80187764:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 80187764
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80187768
  if (crb(c,0)) { IRQCHK(c); goto L_8018773C; } // 8018776C
  c->r[0]=0u+0x00000000u; // 80187770
L_80187774:;
  cmps(c,0,(int32_t)c->r[0],0); // 80187774
  if (crb(c,2)) { goto L_801877A4; } // 80187778
  c->r[4]=0u+0x80330000u; // 8018777C
  c->r[3]=0u+0x802E0000u; // 80187780
  c->r[4]=c->r[4]+0x00000228u; // 80187784
  c->r[5]=0u+0x80180000u; // 80187788
  c->r[3]=c->r[3]+0xFFFFFC84u; // 8018778C
  W32(c->r[31]+0x00000018u,c->r[4]); // 80187790
  c->r[3]=c->r[3]+0x00000011u; // 80187794
  c->r[4]=c->r[31]+0x00000018u; // 80187798
  c->r[5]=c->r[5]+0x0000785Cu; // 8018779C
  c->lr=0x801877A4u; f_80187DA8(c); // 801877A0
L_801877A4:;
  c->r[3]=0u+0x802E0000u; // 801877A4
  c->r[27]=c->r[30]|c->r[30]; // 801877A8
  c->r[3]=c->r[3]+0xFFFFFC84u; // 801877AC
  c->r[29]=0u+0x00000000u; // 801877B0
  c->r[28]=c->r[3]+0x00000037u; // 801877B4
  goto L_801877E4; // 801877B8
L_801877BC:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801877BC
  c->r[3]=c->r[28]|c->r[28]; // 801877C0
  c->r[5]=c->r[31]+0x00000008u; // 801877C4
  c->lr=0x801877CCu; f_80185778(c); // 801877C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801877CC
  if (crb(c,2)) { goto L_801877DC; } // 801877D0
  c->r[0]=0u+0x00000001u; // 801877D4
  goto L_801877F4; // 801877D8
L_801877DC:;
  c->r[27]=c->r[27]+0x00000004u; // 801877DC
  c->r[29]=c->r[29]+0x00000001u; // 801877E0
L_801877E4:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801877E4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801877E8
  if (crb(c,0)) { IRQCHK(c); goto L_801877BC; } // 801877EC
  c->r[0]=0u+0x00000000u; // 801877F0
L_801877F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801877F4
  if (crb(c,2)) { goto L_80187824; } // 801877F8
  c->r[4]=0u+0x80330000u; // 801877FC
  c->r[3]=0u+0x802E0000u; // 80187800
  c->r[4]=c->r[4]+0x00000228u; // 80187804
  c->r[5]=0u+0x80180000u; // 80187808
  c->r[3]=c->r[3]+0xFFFFFC84u; // 8018780C
  W32(c->r[31]+0x00000014u,c->r[4]); // 80187810
  c->r[3]=c->r[3]+0x00000011u; // 80187814
  c->r[4]=c->r[31]+0x00000014u; // 80187818
  c->r[5]=c->r[5]+0x0000785Cu; // 8018781C
  c->lr=0x80187824u; f_80187DA8(c); // 80187820
L_80187824:;
  c->r[3]=c->r[31]+0x00000020u; // 80187824
  c->lr=0x8018782Cu; f_80187EEC(c); // 80187828
  c->r[0]=c->r[0]|0x00000000u; // 8018782C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80187830
  c->r[1]=R32(c->r[31]+0x00000034u); // 80187834
  W32(c->r[1]+0x00000000u,c->r[0]); // 80187838
L_8018783C:;
  c->lr=0x80187840u; f_80185760(c); // 8018783C
  c->r[10]=c->r[31]|c->r[31]; // 80187840
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80187844
  c->r[10]=R32(c->r[1]+0x00000000u); // 80187848
  c->r[0]=R32(c->r[10]+0x00000004u); // 8018784C
  c->r[1]=c->r[10]|c->r[10]; // 80187850
  c->lr=c->r[0]; // 80187854
  return; // 80187858
}

// fn_8018785C
void f_8018785C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018785C
  c->r[0]=c->lr; // 80187860
  cmps(c,0,(int32_t)c->r[3],0); // 80187864
  W32(c->r[1]+0x00000014u,c->r[0]); // 80187868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018786C
  c->r[31]=c->r[3]|c->r[3]; // 80187870
  if (crb(c,2)) { goto L_80187884; } // 80187874
  cmps(c,0,(int32_t)c->r[4],0); // 80187878
  if (!crb(c,1)) { goto L_80187884; } // 8018787C
  c->lr=0x80187884u; f_800D6AD0(c); // 80187880
L_80187884:;
  c->r[3]=c->r[31]|c->r[31]; // 80187884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80187888
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018788C
  c->lr=c->r[0]; // 80187890
  c->r[1]=c->r[1]+0x00000010u; // 80187894
  return; // 80187898
}

// fn_8018789C
void f_8018789C(Ctx* __restrict c) {
  c->r[8]=c->r[5]|c->r[5]; // 8018789C
  c->r[2]=c->r[4]|c->r[4]; // 801878A0
  c->r[0]=R32(c->r[3]+0x00000280u); // 801878A4
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[0]&0xFFFFFFFFu); // 801878A8
  {uint32_t ea=c->r[3]+0x00000234u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801878AC
  c->r[7]=c->r[3]+0x000000E8u; // 801878B0
  {uint32_t ea=0u+c->r[7]; psq_load(c,14,ea,0,0);} // 801878B4
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[14]=RF64(ea);} // 801878B8
  c->r[7]=c->r[3]+0x000000F8u; // 801878BC
  {uint32_t ea=0u+c->r[7]; psq_load(c,15,ea,0,0);} // 801878C0
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[15]=RF64(ea);} // 801878C4
  c->r[7]=c->r[3]+0x00000108u; // 801878C8
  {uint32_t ea=0u+c->r[7]; psq_load(c,16,ea,0,0);} // 801878CC
  {uint32_t ea=c->r[3]+0x00000100u; c->f[16]=RF64(ea);} // 801878D0
  c->r[7]=c->r[3]+0x00000118u; // 801878D4
  {uint32_t ea=0u+c->r[7]; psq_load(c,17,ea,0,0);} // 801878D8
  {uint32_t ea=c->r[3]+0x00000110u; c->f[17]=RF64(ea);} // 801878DC
  c->r[7]=c->r[3]+0x00000128u; // 801878E0
  {uint32_t ea=0u+c->r[7]; psq_load(c,18,ea,0,0);} // 801878E4
  {uint32_t ea=c->r[3]+0x00000120u; c->f[18]=RF64(ea);} // 801878E8
  c->r[7]=c->r[3]+0x00000138u; // 801878EC
  {uint32_t ea=0u+c->r[7]; psq_load(c,19,ea,0,0);} // 801878F0
  {uint32_t ea=c->r[3]+0x00000130u; c->f[19]=RF64(ea);} // 801878F4
  c->r[7]=c->r[3]+0x00000148u; // 801878F8
  {uint32_t ea=0u+c->r[7]; psq_load(c,20,ea,0,0);} // 801878FC
  {uint32_t ea=c->r[3]+0x00000140u; c->f[20]=RF64(ea);} // 80187900
  c->r[7]=c->r[3]+0x00000158u; // 80187904
  {uint32_t ea=0u+c->r[7]; psq_load(c,21,ea,0,0);} // 80187908
  {uint32_t ea=c->r[3]+0x00000150u; c->f[21]=RF64(ea);} // 8018790C
  c->r[7]=c->r[3]+0x00000168u; // 80187910
  {uint32_t ea=0u+c->r[7]; psq_load(c,22,ea,0,0);} // 80187914
  {uint32_t ea=c->r[3]+0x00000160u; c->f[22]=RF64(ea);} // 80187918
  c->r[7]=c->r[3]+0x00000178u; // 8018791C
  {uint32_t ea=0u+c->r[7]; psq_load(c,23,ea,0,0);} // 80187920
  {uint32_t ea=c->r[3]+0x00000170u; c->f[23]=RF64(ea);} // 80187924
  c->r[7]=c->r[3]+0x00000188u; // 80187928
  {uint32_t ea=0u+c->r[7]; psq_load(c,24,ea,0,0);} // 8018792C
  {uint32_t ea=c->r[3]+0x00000180u; c->f[24]=RF64(ea);} // 80187930
  c->r[7]=c->r[3]+0x00000198u; // 80187934
  {uint32_t ea=0u+c->r[7]; psq_load(c,25,ea,0,0);} // 80187938
  {uint32_t ea=c->r[3]+0x00000190u; c->f[25]=RF64(ea);} // 8018793C
  c->r[7]=c->r[3]+0x000001A8u; // 80187940
  {uint32_t ea=0u+c->r[7]; psq_load(c,26,ea,0,0);} // 80187944
  {uint32_t ea=c->r[3]+0x000001A0u; c->f[26]=RF64(ea);} // 80187948
  c->r[7]=c->r[3]+0x000001B8u; // 8018794C
  {uint32_t ea=0u+c->r[7]; psq_load(c,27,ea,0,0);} // 80187950
  {uint32_t ea=c->r[3]+0x000001B0u; c->f[27]=RF64(ea);} // 80187954
  c->r[7]=c->r[3]+0x000001C8u; // 80187958
  {uint32_t ea=0u+c->r[7]; psq_load(c,28,ea,0,0);} // 8018795C
  {uint32_t ea=c->r[3]+0x000001C0u; c->f[28]=RF64(ea);} // 80187960
  c->r[7]=c->r[3]+0x000001D8u; // 80187964
  {uint32_t ea=0u+c->r[7]; psq_load(c,29,ea,0,0);} // 80187968
  {uint32_t ea=c->r[3]+0x000001D0u; c->f[29]=RF64(ea);} // 8018796C
  c->r[7]=c->r[3]+0x000001E8u; // 80187970
  {uint32_t ea=0u+c->r[7]; psq_load(c,30,ea,0,0);} // 80187974
  {uint32_t ea=c->r[3]+0x000001E0u; c->f[30]=RF64(ea);} // 80187978
  c->r[7]=c->r[3]+0x000001F8u; // 8018797C
  {uint32_t ea=0u+c->r[7]; psq_load(c,31,ea,0,0);} // 80187980
  {uint32_t ea=c->r[3]+0x000001F0u; c->f[31]=RF64(ea);} // 80187984
  c->lr=c->r[8]; // 80187988
  c->r[1]=R32(c->r[3]+0x0000028Cu); // 8018798C
  c->r[3]=R32(c->r[3]+0x00000284u); // 80187990
  c->r[3]=R32(c->r[3]+0x00000000u); // 80187994
  W32(c->r[1]+0x00000000u,c->r[3]); // 80187998
  return; // 8018799C
}

// fn_801879A0
void f_801879A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801879A0
  c->r[0]=c->lr; // 801879A4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801879A8
  c->r[4]=c->r[1]+0x00000010u; // 801879AC
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801879B0
  c->r[30]=c->r[3]|c->r[3]; // 801879B4
  c->r[3]=R32(c->r[3]+0x00000290u); // 801879B8
  c->lr=0x801879C0u; f_801868E4(c); // 801879BC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801879C0
  cmps(c,0,(int32_t)c->r[0],0); // 801879C4
  if (!crb(c,2)) { goto L_801879D0; } // 801879C8
  c->lr=0x801879D0u; f_80185760(c); // 801879CC
L_801879D0:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801879D0
  c->r[0]=R16(c->r[3]+0x00000000u); // 801879D4
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801879D8
  if (crb(c,2)) { goto L_801879E8; } // 801879DC
  c->r[8]=R32(c->r[30]+0x0000027Cu); // 801879E0
  goto L_801879EC; // 801879E4
L_801879E8:;
  c->r[8]=R32(c->r[30]+0x00000284u); // 801879E8
L_801879EC:;
  c->r[0]=R32(c->r[30]+0x00000294u); // 801879EC
  W32(c->r[30]+0x00000288u,c->r[8]); // 801879F0
  cmps(c,0,(int32_t)c->r[0],0); // 801879F4
  if (!crb(c,2)) { goto L_80187AC8; } // 801879F8
  c->r[5]=R32(c->r[1]+0x00000018u); // 801879FC
  c->r[7]=R32(c->r[1]+0x00000010u); // 80187A00
  c->r[6]=R32(c->r[1]+0x00000014u); // 80187A04
  cmps(c,0,(int32_t)c->r[5],0); // 80187A08
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80187A0C
  c->r[3]=R32(c->r[1]+0x00000020u); // 80187A10
  c->r[0]=R32(c->r[1]+0x00000024u); // 80187A14
  W32(c->r[1]+0x00000028u,c->r[7]); // 80187A18
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80187A1C
  W32(c->r[1]+0x00000030u,c->r[5]); // 80187A20
  W32(c->r[1]+0x00000034u,c->r[4]); // 80187A24
  W32(c->r[1]+0x00000038u,c->r[3]); // 80187A28
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80187A2C
  c->r[0]=R32(c->r[30]+0x00000284u); // 80187A30
  W32(c->r[1]+0x00000040u,c->r[0]); // 80187A34
  W32(c->r[1]+0x00000044u,c->r[8]); // 80187A38
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 80187A3C
  W32(c->r[1]+0x00000048u,c->r[0]); // 80187A40
  if (!crb(c,2)) { goto L_80187A50; } // 80187A44
  c->r[3]=0u+0x00000000u; // 80187A48
  goto L_80187A58; // 80187A4C
L_80187A50:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80187A50
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 80187A54
L_80187A58:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80187A58
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80187A5C
  cmpu(c,0,c->r[0],0x0000000Au); // 80187A60
  if (!crb(c,1)) { goto L_80187A8C; } // 80187A64
  c->r[0]=c->r[3]+0xFFFFFFF1u; // 80187A68
  cmpu(c,0,c->r[0],0x00000001u); // 80187A6C
  if (!crb(c,1)) { goto L_80187A8C; } // 80187A70
  cmps(c,0,(int32_t)c->r[3],13); // 80187A74
  if (crb(c,2)) { goto L_80187A98; } // 80187A78
  cmps(c,0,(int32_t)c->r[3],0); // 80187A7C
  if (crb(c,2)) { goto L_80187A8C; } // 80187A80
  c->lr=0x80187A88u; f_80185760(c); // 80187A84
  goto L_80187A98; // 80187A88
L_80187A8C:;
  c->r[3]=c->r[1]+0x00000028u; // 80187A8C
  c->lr=0x80187A94u; f_80186A94(c); // 80187A90
  IRQCHK(c); goto L_80187A58; // 80187A94
L_80187A98:;
  c->r[3]=R32(c->r[1]+0x00000030u); // 80187A98
  c->r[0]=0u+0x00000000u; // 80187A9C
  c->r[4]=R32(c->r[1]+0x00000044u); // 80187AA0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80187AA4
  c->r[4]=c->r[4]+c->r[3]; // 80187AA8
  c->r[3]=R32(c->r[4]+0x00000004u); // 80187AAC
  W32(c->r[30]+0x00000294u,c->r[3]); // 80187AB0
  c->r[3]=R32(c->r[4]+0x00000000u); // 80187AB4
  W32(c->r[30]+0x00000298u,c->r[3]); // 80187AB8
  W32(c->r[30]+0x0000029Cu,c->r[0]); // 80187ABC
  W32(c->r[30]+0x000002A0u,c->r[4]); // 80187AC0
  goto L_80187AD0; // 80187AC4
L_80187AC8:;
  c->r[0]=0u+0x00000000u; // 80187AC8
  W32(c->r[30]+0x000002A0u,c->r[0]); // 80187ACC
L_80187AD0:;
  c->r[5]=R32(c->r[1]+0x00000018u); // 80187AD0
  c->r[7]=R32(c->r[1]+0x00000010u); // 80187AD4
  c->r[6]=R32(c->r[1]+0x00000014u); // 80187AD8
  cmps(c,0,(int32_t)c->r[5],0); // 80187ADC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80187AE0
  c->r[3]=R32(c->r[1]+0x00000020u); // 80187AE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80187AE8
  W32(c->r[1]+0x00000028u,c->r[7]); // 80187AEC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80187AF0
  W32(c->r[1]+0x00000030u,c->r[5]); // 80187AF4
  W32(c->r[1]+0x00000034u,c->r[4]); // 80187AF8
  W32(c->r[1]+0x00000038u,c->r[3]); // 80187AFC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80187B00
  c->r[0]=R32(c->r[30]+0x00000284u); // 80187B04
  W32(c->r[1]+0x00000040u,c->r[0]); // 80187B08
  c->r[0]=R32(c->r[30]+0x00000288u); // 80187B0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80187B10
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 80187B14
  W32(c->r[1]+0x00000048u,c->r[0]); // 80187B18
  if (!crb(c,2)) { goto L_80187B28; } // 80187B1C
  c->r[27]=0u+0x00000000u; // 80187B20
  goto L_80187B30; // 80187B24
L_80187B28:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80187B28
  c->r[27]=rotl(c->r[0],0)&0x0000007Fu; // 80187B2C
L_80187B30:;
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 80187B30
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80187B34
  cmpu(c,0,c->r[0],0x00000009u); // 80187B38
  if (!crb(c,1)) { goto L_80187C5C; } // 80187B3C
  cmps(c,0,(int32_t)c->r[3],16); // 80187B40
  if (crb(c,2)) { goto L_80187B6C; } // 80187B44
  cmps(c,0,(int32_t)c->r[3],12); // 80187B48
  if (crb(c,2)) { goto L_80187B8C; } // 80187B4C
  cmps(c,0,(int32_t)c->r[3],15); // 80187B50
  if (crb(c,2)) { goto L_80187BAC; } // 80187B54
  cmps(c,0,(int32_t)c->r[3],0); // 80187B58
  if (crb(c,2)) { goto L_80187C5C; } // 80187B5C
  cmps(c,0,(int32_t)c->r[3],13); // 80187B60
  if (crb(c,2)) { goto L_80187C5C; } // 80187B64
  goto L_80187C54; // 80187B68
L_80187B6C:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 80187B6C
  c->r[5]=c->r[1]+0x0000000Cu; // 80187B70
  c->r[3]=R32(c->r[30]+0x00000294u); // 80187B74
  c->r[4]=R32(c->r[4]+0x00000004u); // 80187B78
  c->lr=0x80187B80u; f_80185778(c); // 80187B7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80187B80
  if (!crb(c,2)) { goto L_80187C6C; } // 80187B84
  goto L_80187C5C; // 80187B88
L_80187B8C:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 80187B8C
  c->r[5]=c->r[1]+0x0000000Cu; // 80187B90
  c->r[3]=R32(c->r[30]+0x00000294u); // 80187B94
  c->r[4]=R32(c->r[4]+0x00000004u); // 80187B98
  c->lr=0x80187BA0u; f_80185778(c); // 80187B9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80187BA0
  if (!crb(c,2)) { goto L_80187C6C; } // 80187BA4
  goto L_80187C5C; // 80187BA8
L_80187BAC:;
  c->r[29]=R32(c->r[1]+0x00000030u); // 80187BAC
  c->r[28]=0u+0x00000000u; // 80187BB0
  c->r[31]=R32(c->r[30]+0x00000294u); // 80187BB4
  c->r[27]=c->r[29]|c->r[29]; // 80187BB8
  goto L_80187BE8; // 80187BBC
L_80187BC0:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 80187BC0
  c->r[3]=c->r[31]|c->r[31]; // 80187BC4
  c->r[5]=c->r[1]+0x00000008u; // 80187BC8
  c->lr=0x80187BD0u; f_80185778(c); // 80187BCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80187BD0
  if (crb(c,2)) { goto L_80187BE0; } // 80187BD4
  c->r[0]=0u+0x00000001u; // 80187BD8
  goto L_80187BF8; // 80187BDC
L_80187BE0:;
  c->r[27]=c->r[27]+0x00000004u; // 80187BE0
  c->r[28]=c->r[28]+0x00000001u; // 80187BE4
L_80187BE8:;
  c->r[0]=R16(c->r[29]+0x00000002u); // 80187BE8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80187BEC
  if (crb(c,0)) { IRQCHK(c); goto L_80187BC0; } // 80187BF0
  c->r[0]=0u+0x00000000u; // 80187BF4
L_80187BF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80187BF8
  if (!crb(c,2)) { goto L_80187C5C; } // 80187BFC
  c->r[28]=R32(c->r[1]+0x00000030u); // 80187C00
  c->r[3]=c->r[30]|c->r[30]; // 80187C04
  c->r[4]=c->r[1]+0x00000010u; // 80187C08
  c->r[5]=c->r[28]|c->r[28]; // 80187C0C
  c->lr=0x80187C14u; f_80187198(c); // 80187C10
  c->r[5]=R32(c->r[30]+0x00000288u); // 80187C14
  c->r[3]=c->r[30]|c->r[30]; // 80187C18
  c->r[4]=R32(c->r[28]+0x00000008u); // 80187C1C
  c->r[0]=R32(c->r[30]+0x00000298u); // 80187C20
  {uint32_t ea=c->r[4]+c->r[5]; W32(ea,c->r[0]); c->r[4]=ea;} // 80187C24
  c->r[0]=R32(c->r[30]+0x00000294u); // 80187C28
  W32(c->r[4]+0x00000004u,c->r[0]); // 80187C2C
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 80187C30
  W32(c->r[4]+0x00000008u,c->r[0]); // 80187C34
  W32(c->r[4]+0x00000014u,c->r[28]); // 80187C38
  c->r[5]=R32(c->r[1]+0x00000014u); // 80187C3C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80187C40
  c->r[4]=R32(c->r[1]+0x00000024u); // 80187C44
  c->r[5]=c->r[5]+c->r[0]; // 80187C48
  c->lr=0x80187C50u; f_8018789C(c); // 80187C4C
  goto L_80187C5C; // 80187C50
L_80187C54:;
  c->lr=0x80187C58u; f_80185760(c); // 80187C54
  goto L_80187C6C; // 80187C58
L_80187C5C:;
  c->r[3]=c->r[1]+0x00000028u; // 80187C5C
  c->lr=0x80187C64u; f_80186A94(c); // 80187C60
  c->r[27]=c->r[3]|c->r[3]; // 80187C64
  IRQCHK(c); goto L_80187B30; // 80187C68
L_80187C6C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 80187C6C
  cmpu(c,0,c->r[0],0x00000010u); // 80187C70
  if (!crb(c,2)) { goto L_80187D08; } // 80187C74
  c->r[31]=R32(c->r[1]+0x00000030u); // 80187C78
  c->r[3]=c->r[30]|c->r[30]; // 80187C7C
  c->r[4]=c->r[1]+0x00000010u; // 80187C80
  c->r[5]=c->r[31]|c->r[31]; // 80187C84
  c->lr=0x80187C8Cu; f_80187198(c); // 80187C88
  c->r[4]=R32(c->r[30]+0x00000288u); // 80187C8C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80187C90
  c->r[0]=R32(c->r[30]+0x00000298u); // 80187C94
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 80187C98
  c->r[0]=R32(c->r[30]+0x00000294u); // 80187C9C
  W32(c->r[4]+0x00000004u,c->r[0]); // 80187CA0
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 80187CA4
  W32(c->r[4]+0x00000008u,c->r[0]); // 80187CA8
  c->r[3]=R32(c->r[30]+0x00000294u); // 80187CAC
  c->r[0]=R8(c->r[3]+0x00000000u); // 80187CB0
  cmps(c,0,(int32_t)c->r[0],42); // 80187CB4
  if (!crb(c,2)) { goto L_80187CDC; } // 80187CB8
  c->r[0]=c->r[4]+0x00000010u; // 80187CBC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80187CC0
  c->r[3]=R32(c->r[30]+0x00000298u); // 80187CC4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80187CC8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80187CCC
  c->r[0]=c->r[3]+c->r[0]; // 80187CD0
  W32(c->r[4]+0x00000010u,c->r[0]); // 80187CD4
  goto L_80187CEC; // 80187CD8
L_80187CDC:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 80187CDC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80187CE0
  c->r[0]=c->r[3]+c->r[0]; // 80187CE4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80187CE8
L_80187CEC:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 80187CEC
  c->r[3]=c->r[30]|c->r[30]; // 80187CF0
  c->r[0]=R32(c->r[31]+0x00000008u); // 80187CF4
  c->r[4]=R32(c->r[1]+0x00000024u); // 80187CF8
  c->r[5]=c->r[5]+c->r[0]; // 80187CFC
  c->lr=0x80187D04u; f_8018789C(c); // 80187D00
  goto L_80187D94; // 80187D04
L_80187D08:;
  c->r[31]=R32(c->r[1]+0x00000030u); // 80187D08
  c->r[3]=c->r[30]|c->r[30]; // 80187D0C
  c->r[4]=c->r[1]+0x00000010u; // 80187D10
  c->r[5]=c->r[31]|c->r[31]; // 80187D14
  c->lr=0x80187D1Cu; f_80187198(c); // 80187D18
  c->r[4]=R32(c->r[30]+0x00000288u); // 80187D1C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 80187D20
  c->r[0]=R32(c->r[30]+0x00000298u); // 80187D24
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 80187D28
  c->r[0]=R32(c->r[30]+0x00000294u); // 80187D2C
  W32(c->r[4]+0x00000004u,c->r[0]); // 80187D30
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 80187D34
  W32(c->r[4]+0x00000008u,c->r[0]); // 80187D38
  c->r[3]=R32(c->r[30]+0x00000294u); // 80187D3C
  c->r[0]=R8(c->r[3]+0x00000000u); // 80187D40
  cmps(c,0,(int32_t)c->r[0],42); // 80187D44
  if (!crb(c,2)) { goto L_80187D6C; } // 80187D48
  c->r[0]=c->r[4]+0x00000010u; // 80187D4C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80187D50
  c->r[3]=R32(c->r[30]+0x00000298u); // 80187D54
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80187D58
  c->r[3]=R32(c->r[3]+0x00000000u); // 80187D5C
  c->r[0]=c->r[3]+c->r[0]; // 80187D60
  W32(c->r[4]+0x00000010u,c->r[0]); // 80187D64
  goto L_80187D7C; // 80187D68
L_80187D6C:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 80187D6C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80187D70
  c->r[0]=c->r[3]+c->r[0]; // 80187D74
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80187D78
L_80187D7C:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 80187D7C
  c->r[3]=c->r[30]|c->r[30]; // 80187D80
  c->r[0]=R16(c->r[31]+0x00000008u); // 80187D84
  c->r[4]=R32(c->r[1]+0x00000024u); // 80187D88
  c->r[5]=c->r[5]+c->r[0]; // 80187D8C
  c->lr=0x80187D94u; f_8018789C(c); // 80187D90
L_80187D94:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80187D94
  c->r[0]=R32(c->r[1]+0x00000074u); // 80187D98
  c->lr=c->r[0]; // 80187D9C
  c->r[1]=c->r[1]+0x00000070u; // 80187DA0
  return; // 80187DA4
}

// fn_80187DA8
void f_80187DA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187DA8
  c->r[0]=c->lr; // 80187DAC
  W32(c->r[1]+0x000002C4u,c->r[0]); // 80187DB0
  W32(c->r[1]+0x00000008u,c->r[3]); // 80187DB4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80187DB8
  W32(c->r[1]+0x00000010u,c->r[5]); // 80187DBC
  {uint32_t ea=c->r[1]+0x0000024Cu; for(int i=13;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80187DC0
  {uint32_t ea=c->r[1]+0x000000F8u; WF64(ea,c->f[14]);} // 80187DC4
  c->r[3]=c->r[1]+0x00000100u; // 80187DC8
  {uint32_t ea=0u+c->r[3]; psq_store(c,14,ea,0,0);} // 80187DCC
  {uint32_t ea=c->r[1]+0x00000108u; WF64(ea,c->f[15]);} // 80187DD0
  c->r[3]=c->r[1]+0x00000110u; // 80187DD4
  {uint32_t ea=0u+c->r[3]; psq_store(c,15,ea,0,0);} // 80187DD8
  {uint32_t ea=c->r[1]+0x00000118u; WF64(ea,c->f[16]);} // 80187DDC
  c->r[3]=c->r[1]+0x00000120u; // 80187DE0
  {uint32_t ea=0u+c->r[3]; psq_store(c,16,ea,0,0);} // 80187DE4
  {uint32_t ea=c->r[1]+0x00000128u; WF64(ea,c->f[17]);} // 80187DE8
  c->r[3]=c->r[1]+0x00000130u; // 80187DEC
  {uint32_t ea=0u+c->r[3]; psq_store(c,17,ea,0,0);} // 80187DF0
  {uint32_t ea=c->r[1]+0x00000138u; WF64(ea,c->f[18]);} // 80187DF4
  c->r[3]=c->r[1]+0x00000140u; // 80187DF8
  {uint32_t ea=0u+c->r[3]; psq_store(c,18,ea,0,0);} // 80187DFC
  {uint32_t ea=c->r[1]+0x00000148u; WF64(ea,c->f[19]);} // 80187E00
  c->r[3]=c->r[1]+0x00000150u; // 80187E04
  {uint32_t ea=0u+c->r[3]; psq_store(c,19,ea,0,0);} // 80187E08
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[20]);} // 80187E0C
  c->r[3]=c->r[1]+0x00000160u; // 80187E10
  {uint32_t ea=0u+c->r[3]; psq_store(c,20,ea,0,0);} // 80187E14
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[21]);} // 80187E18
  c->r[3]=c->r[1]+0x00000170u; // 80187E1C
  {uint32_t ea=0u+c->r[3]; psq_store(c,21,ea,0,0);} // 80187E20
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[22]);} // 80187E24
  c->r[3]=c->r[1]+0x00000180u; // 80187E28
  {uint32_t ea=0u+c->r[3]; psq_store(c,22,ea,0,0);} // 80187E2C
  {uint32_t ea=c->r[1]+0x00000188u; WF64(ea,c->f[23]);} // 80187E30
  c->r[3]=c->r[1]+0x00000190u; // 80187E34
  {uint32_t ea=0u+c->r[3]; psq_store(c,23,ea,0,0);} // 80187E38
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[24]);} // 80187E3C
  c->r[3]=c->r[1]+0x000001A0u; // 80187E40
  {uint32_t ea=0u+c->r[3]; psq_store(c,24,ea,0,0);} // 80187E44
  {uint32_t ea=c->r[1]+0x000001A8u; WF64(ea,c->f[25]);} // 80187E48
  c->r[3]=c->r[1]+0x000001B0u; // 80187E4C
  {uint32_t ea=0u+c->r[3]; psq_store(c,25,ea,0,0);} // 80187E50
  {uint32_t ea=c->r[1]+0x000001B8u; WF64(ea,c->f[26]);} // 80187E54
  c->r[3]=c->r[1]+0x000001C0u; // 80187E58
  {uint32_t ea=0u+c->r[3]; psq_store(c,26,ea,0,0);} // 80187E5C
  {uint32_t ea=c->r[1]+0x000001C8u; WF64(ea,c->f[27]);} // 80187E60
  c->r[3]=c->r[1]+0x000001D0u; // 80187E64
  {uint32_t ea=0u+c->r[3]; psq_store(c,27,ea,0,0);} // 80187E68
  {uint32_t ea=c->r[1]+0x000001D8u; WF64(ea,c->f[28]);} // 80187E6C
  c->r[3]=c->r[1]+0x000001E0u; // 80187E70
  {uint32_t ea=0u+c->r[3]; psq_store(c,28,ea,0,0);} // 80187E74
  {uint32_t ea=c->r[1]+0x000001E8u; WF64(ea,c->f[29]);} // 80187E78
  c->r[3]=c->r[1]+0x000001F0u; // 80187E7C
  {uint32_t ea=0u+c->r[3]; psq_store(c,29,ea,0,0);} // 80187E80
  {uint32_t ea=c->r[1]+0x000001F8u; WF64(ea,c->f[30]);} // 80187E84
  c->r[3]=c->r[1]+0x00000200u; // 80187E88
  {uint32_t ea=0u+c->r[3]; psq_store(c,30,ea,0,0);} // 80187E8C
  {uint32_t ea=c->r[1]+0x00000208u; WF64(ea,c->f[31]);} // 80187E90
  c->r[3]=c->r[1]+0x00000210u; // 80187E94
  {uint32_t ea=0u+c->r[3]; psq_store(c,31,ea,0,0);} // 80187E98
  c->r[3]=c->cr; // 80187E9C
  W32(c->r[1]+0x00000298u,c->r[3]); // 80187EA0
  c->r[3]=R32(c->r[1]+0x00000000u); // 80187EA4
  c->r[4]=R32(c->r[3]+0x00000004u); // 80187EA8
  W32(c->r[1]+0x0000029Cu,c->r[3]); // 80187EAC
  W32(c->r[1]+0x000002A4u,c->r[3]); // 80187EB0
  W32(c->r[1]+0x000002A8u,c->r[4]); // 80187EB4
  c->r[3]=R32(c->r[1]+0x00000008u); // 80187EB8
  W32(c->r[1]+0x000002ACu,c->r[3]); // 80187EBC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80187EC0
  W32(c->r[1]+0x000002B0u,c->r[3]); // 80187EC4
  c->r[3]=R32(c->r[1]+0x00000010u); // 80187EC8
  W32(c->r[1]+0x000002B4u,c->r[3]); // 80187ECC
  c->r[3]=c->r[1]+0x00000018u; // 80187ED0
  c->lr=0x80187ED8u; f_801879A0(c); // 80187ED4
  c->r[0]=c->r[0]|0x00000000u; // 80187ED8
  c->r[0]=R32(c->r[1]+0x000002C4u); // 80187EDC
  c->lr=c->r[0]; // 80187EE0
  c->r[1]=c->r[1]+0x000002C0u; // 80187EE4
  return; // 80187EE8
}

// fn_80187EEC
void f_80187EEC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80187EEC
  cmps(c,0,(int32_t)c->r[0],0); // 80187EF0
  if (crb(c,2)) return; // 80187EF4
  c->r[12]=R32(c->r[3]+0x00000008u); // 80187EF8
  cmps(c,0,(int32_t)c->r[12],0); // 80187EFC
  if (crb(c,2)) return; // 80187F00
  c->r[3]=c->r[0]|c->r[0]; // 80187F04
  c->r[4]=0u+0xFFFFFFFFu; // 80187F08
  c->ctr=c->r[12]; // 80187F0C
  if (true) { dispatch(c,c->ctr); return; } // 80187F10
  return; // 80187F14
}

// fn_80187F18
void f_80187F18(Ctx* __restrict c) {
  c->r[3]=0u+0x80330000u; // 80187F18
  c->r[3]=c->r[3]+0x00000244u; // 80187F1C
  return; // 80187F20
}

// fn_80187F24
void f_80187F24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187F24
  c->r[0]=c->lr; // 80187F28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80187F2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80187F30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80187F34
  W32(c->r[1]+0x00000014u,c->r[29]); // 80187F38
  c->r[29]=c->r[3]|c->r[3]; // 80187F3C
  c->r[0]=R32(c->r[13]+0xFFFF9068u); // 80187F40
  cmps(c,0,(int32_t)c->r[0],-1); // 80187F44
  if (!crb(c,2)) { goto L_80187FB4; } // 80187F48
  c->r[31]=0u+0x802E0000u; // 80187F4C
  c->r[3]=c->r[31]+0xFFFFFCD8u; // 80187F50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80187F54
  c->lr=0x80187F5Cu; f_8015CED8(c); // 80187F58
  c->r[3]=c->r[31]+0xFFFFFCD8u; // 80187F5C
  c->r[3]=c->r[3]+0x00000036u; // 80187F60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80187F64
  c->lr=0x80187F6Cu; f_8015CED8(c); // 80187F68
  c->lr=0x80187F70u; f_8015BB00(c); // 80187F6C
  c->r[30]=c->r[3]|c->r[3]; // 80187F70
  c->lr=0x80187F78u; f_8015BAE8(c); // 80187F74
  c->r[31]=c->r[3]|c->r[3]; // 80187F78
  c->r[3]=c->r[30]|c->r[30]; // 80187F7C
  c->r[4]=c->r[31]|c->r[31]; // 80187F80
  c->r[5]=0u+0x00000001u; // 80187F84
  c->lr=0x80187F8Cu; f_8015B9FC(c); // 80187F88
  c->r[30]=c->r[3]|c->r[3]; // 80187F8C
  c->lr=0x80187F94u; f_8015BB30(c); // 80187F90
  c->r[0]=c->r[30]+0x0000001Fu; // 80187F94
  c->r[30]=rotl(c->r[31],0)&0xFFFFFFE0u; // 80187F98
  c->r[4]=c->r[30]|c->r[30]; // 80187F9C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80187FA0
  c->lr=0x80187FA8u; f_8015BA6C(c); // 80187FA4
  c->lr=0x80187FACu; f_8015B9EC(c); // 80187FA8
  c->r[3]=c->r[30]|c->r[30]; // 80187FAC
  c->lr=0x80187FB4u; f_8015BB30(c); // 80187FB0
L_80187FB4:;
  c->r[3]=R32(c->r[13]+0xFFFF9068u); // 80187FB4
  c->r[4]=c->r[29]|c->r[29]; // 80187FB8
  c->lr=0x80187FC0u; f_8015B87C(c); // 80187FBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80187FC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80187FC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80187FC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80187FCC
  c->lr=c->r[0]; // 80187FD0
  c->r[1]=c->r[1]+0x00000020u; // 80187FD4
  return; // 80187FD8
}

// fn_80187FDC
void f_80187FDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80187FDC
  c->r[0]=c->lr; // 80187FE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80187FE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80187FE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80187FEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80187FF0
  c->r[29]=c->r[3]|c->r[3]; // 80187FF4
  c->r[0]=R32(c->r[13]+0xFFFF9068u); // 80187FF8
  cmps(c,0,(int32_t)c->r[0],-1); // 80187FFC
  if (!crb(c,2)) { goto L_8018806C; } // 80188000
  c->r[31]=0u+0x802E0000u; // 80188004
  c->r[3]=c->r[31]+0xFFFFFCD8u; // 80188008
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018800C
  c->lr=0x80188014u; f_8015CED8(c); // 80188010
  c->r[3]=c->r[31]+0xFFFFFCD8u; // 80188014
  c->r[3]=c->r[3]+0x00000036u; // 80188018
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8018801C
  c->lr=0x80188024u; f_8015CED8(c); // 80188020
  c->lr=0x80188028u; f_8015BB00(c); // 80188024
  c->r[30]=c->r[3]|c->r[3]; // 80188028
  c->lr=0x80188030u; f_8015BAE8(c); // 8018802C
  c->r[31]=c->r[3]|c->r[3]; // 80188030
  c->r[3]=c->r[30]|c->r[30]; // 80188034
  c->r[4]=c->r[31]|c->r[31]; // 80188038
  c->r[5]=0u+0x00000001u; // 8018803C
  c->lr=0x80188044u; f_8015B9FC(c); // 80188040
  c->r[30]=c->r[3]|c->r[3]; // 80188044
  c->lr=0x8018804Cu; f_8015BB30(c); // 80188048
  c->r[0]=c->r[30]+0x0000001Fu; // 8018804C
  c->r[30]=rotl(c->r[31],0)&0xFFFFFFE0u; // 80188050
  c->r[4]=c->r[30]|c->r[30]; // 80188054
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80188058
  c->lr=0x80188060u; f_8015BA6C(c); // 8018805C
  c->lr=0x80188064u; f_8015B9EC(c); // 80188060
  c->r[3]=c->r[30]|c->r[30]; // 80188064
  c->lr=0x8018806Cu; f_8015BB30(c); // 80188068
L_8018806C:;
  c->r[3]=R32(c->r[13]+0xFFFF9068u); // 8018806C
  c->r[4]=c->r[29]|c->r[29]; // 80188070
  c->lr=0x80188078u; f_8015B974(c); // 80188074
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188078
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018807C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80188080
  c->r[29]=R32(c->r[1]+0x00000014u); // 80188084
  c->lr=c->r[0]; // 80188088
  c->r[1]=c->r[1]+0x00000020u; // 8018808C
  return; // 80188090
}

// fn_80188094
void f_80188094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188094
  c->r[0]=c->lr; // 80188098
  c->r[3]=0u+0x00000001u; // 8018809C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801880A0
  c->lr=0x801880A8u; f_8018FF3C(c); // 801880A4
  c->r[0]=0u+0x00000001u; // 801880A8
  W32(c->r[13]+0xFFFFA088u,c->r[0]); // 801880AC
  c->r[3]=0u+0x00000001u; // 801880B0
  c->lr=0x801880B8u; f_80167F4C(c); // 801880B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801880B8
  c->lr=c->r[0]; // 801880BC
  c->r[1]=c->r[1]+0x00000010u; // 801880C0
  return; // 801880C4
}

// __msl_runtime_constraint_violation_s
void f_801880C8(Ctx* __restrict c) {
  trace_call(0x801880C8u);
  c->r[12]=R32(c->r[13]+0xFFFFA090u); // 801880C8
  cmps(c,0,(int32_t)c->r[12],0); // 801880CC
  if (crb(c,2)) return; // 801880D0
  c->ctr=c->r[12]; // 801880D4
  if (true) { dispatch(c,c->ctr); return; } // 801880D8
  return; // 801880DC
}

// fn_801880E0
void f_801880E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801880E0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801880E4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801880E8
  c->r[4]=rotl(c->r[3],0)&0x7F800000u; // 801880EC
  c->r[0]=c->r[4]+0x80800000u; // 801880F0
  cmpu(c,0,c->r[0],0x00000000u); // 801880F4
  if (crb(c,2)) { goto L_80188108; } // 801880F8
  cmps(c,0,(int32_t)c->r[4],0); // 801880FC
  if (crb(c,2)) { goto L_80188120; } // 80188100
  goto L_80188134; // 80188104
L_80188108:;
  c->r[3]=rotl(c->r[3],0)&0x007FFFFFu; // 80188108
  c->r[0]=0u-c->r[3]; // 8018810C
  c->r[0]=c->r[0]|c->r[3]; // 80188110
  c->r[3]=sraw(c,c->r[0],31); // 80188114
  c->r[3]=c->r[3]+0x00000002u; // 80188118
  goto L_80188138; // 8018811C
L_80188120:;
  c->r[0]=rotl(c->r[3],0)&0x007FFFFFu; cr0(c,c->r[0]); // 80188120
  c->r[3]=0u+0x00000003u; // 80188124
  if (crb(c,2)) { goto L_80188138; } // 80188128
  c->r[3]=0u+0x00000005u; // 8018812C
  goto L_80188138; // 80188130
L_80188134:;
  c->r[3]=0u+0x00000004u; // 80188134
L_80188138:;
  c->r[1]=c->r[1]+0x00000010u; // 80188138
  return; // 8018813C
}

// __signbitd
void f_80188140(Ctx* __restrict c) {
  trace_call(0x80188140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188140
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80188144
  c->r[0]=R32(c->r[1]+0x00000008u); // 80188148
  c->r[3]=rotl(c->r[0],0)&0x80000000u; // 8018814C
  c->r[1]=c->r[1]+0x00000010u; // 80188150
  return; // 80188154
}

// fn_80188158
void f_80188158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188158
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8018815C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80188160
  c->r[4]=rotl(c->r[3],0)&0x7FF00000u; // 80188164
  c->r[0]=c->r[4]+0x80100000u; // 80188168
  cmpu(c,0,c->r[0],0x00000000u); // 8018816C
  if (crb(c,2)) { goto L_80188180; } // 80188170
  cmps(c,0,(int32_t)c->r[4],0); // 80188174
  if (crb(c,2)) { goto L_801881A4; } // 80188178
  goto L_801881C8; // 8018817C
L_80188180:;
  c->r[0]=rotl(c->r[3],0)&0x000FFFFFu; cr0(c,c->r[0]); // 80188180
  if (!crb(c,2)) { goto L_80188194; } // 80188184
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80188188
  cmps(c,0,(int32_t)c->r[0],0); // 8018818C
  if (crb(c,2)) { goto L_8018819C; } // 80188190
L_80188194:;
  c->r[3]=0u+0x00000001u; // 80188194
  goto L_801881CC; // 80188198
L_8018819C:;
  c->r[3]=0u+0x00000002u; // 8018819C
  goto L_801881CC; // 801881A0
L_801881A4:;
  c->r[0]=rotl(c->r[3],0)&0x000FFFFFu; cr0(c,c->r[0]); // 801881A4
  if (!crb(c,2)) { goto L_801881B8; } // 801881A8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801881AC
  cmps(c,0,(int32_t)c->r[0],0); // 801881B0
  if (crb(c,2)) { goto L_801881C0; } // 801881B4
L_801881B8:;
  c->r[3]=0u+0x00000005u; // 801881B8
  goto L_801881CC; // 801881BC
L_801881C0:;
  c->r[3]=0u+0x00000003u; // 801881C0
  goto L_801881CC; // 801881C4
L_801881C8:;
  c->r[3]=0u+0x00000004u; // 801881C8
L_801881CC:;
  c->r[1]=c->r[1]+0x00000010u; // 801881CC
  return; // 801881D0
}

// fn_801881D4
void f_801881D4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801881D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801881D8
  c->r[6]=c->r[3]+c->r[0]; // 801881DC
  c->r[6]=R32(c->r[6]+0xFFFFFFFCu); // 801881E0
  cmps(c,0,(int32_t)c->r[6],0); // 801881E4
  if (!crb(c,2)) { goto L_801881FC; } // 801881E8
  c->r[0]=0u+0x00000000u; // 801881EC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801881F0
  c->r[3]=0u+0x00000000u; // 801881F4
  return; // 801881F8
L_801881FC:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801881FC
  c->r[7]=c->r[6]|c->r[6]; // 80188200
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188204
  c->r[8]=c->r[0]|c->r[0]; // 80188208
  goto L_8018824C; // 8018820C
L_80188210:;
  c->r[7]=R32(c->r[7]+0x0000000Cu); // 80188210
  c->r[0]=R32(c->r[7]+0x00000000u); // 80188214
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188218
  cmpu(c,0,c->r[8],c->r[0]); // 8018821C
  if (!crb(c,0)) { goto L_80188228; } // 80188220
  c->r[8]=c->r[0]|c->r[0]; // 80188224
L_80188228:;
  cmpu(c,0,c->r[7],c->r[6]); // 80188228
  if (!crb(c,2)) { goto L_8018824C; } // 8018822C
  cmps(c,0,(int32_t)c->r[5],0); // 80188230
  W32(c->r[3]+0x00000008u,c->r[8]); // 80188234
  if (crb(c,2)) { goto L_80188244; } // 80188238
  c->r[0]=c->r[8]+0xFFFFFFF8u; // 8018823C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80188240
L_80188244:;
  c->r[3]=0u+0x00000000u; // 80188244
  return; // 80188248
L_8018824C:;
  cmpu(c,0,c->r[0],c->r[4]); // 8018824C
  if (crb(c,0)) { IRQCHK(c); goto L_80188210; } // 80188250
  c->r[0]=c->r[0]-c->r[4]; // 80188254
  cmpu(c,0,c->r[0],0x00000050u); // 80188258
  if (crb(c,0)) { goto L_80188334; } // 8018825C
  c->r[0]=R32(c->r[7]+0x00000004u); // 80188260
  c->r[6]=c->r[7]+c->r[4]; // 80188264
  c->r[8]=R32(c->r[7]+0x00000000u); // 80188268
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8018826C
  c->r[11]=c->r[0]|0x00000001u; // 80188270
  W32(c->r[7]+0x00000004u,c->r[11]); // 80188274
  c->r[0]=rotl(c->r[8],0)&0x00000004u; cr0(c,c->r[0]); // 80188278
  c->r[10]=rotl(c->r[8],0)&0xFFFFFFF8u; // 8018827C
  c->r[0]=rotl(c->r[8],0)&0x00000002u; // 80188280
  W32(c->r[7]+0x00000000u,c->r[4]); // 80188284
  c->r[0]=cntlz(c->r[0]); // 80188288
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 8018828C
  if (crb(c,2)) { goto L_801882A0; } // 80188290
  c->r[0]=R32(c->r[7]+0x00000000u); // 80188294
  c->r[0]=c->r[0]|0x00000004u; // 80188298
  W32(c->r[7]+0x00000000u,c->r[0]); // 8018829C
L_801882A0:;
  c->r[0]=cntlz(c->r[9]); // 801882A0
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[8]); // 801882A4
  if (crb(c,2)) { goto L_801882C8; } // 801882A8
  c->r[0]=R32(c->r[7]+0x00000000u); // 801882AC
  c->r[0]=c->r[0]|0x00000002u; // 801882B0
  W32(c->r[7]+0x00000000u,c->r[0]); // 801882B4
  c->r[0]=R32(c->r[6]+0x00000000u); // 801882B8
  c->r[0]=c->r[0]|0x00000004u; // 801882BC
  W32(c->r[6]+0x00000000u,c->r[0]); // 801882C0
  goto L_801882CC; // 801882C4
L_801882C8:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[4]); // 801882C8
L_801882CC:;
  W32(c->r[6]+0x00000004u,c->r[11]); // 801882CC
  c->r[10]=c->r[10]-c->r[4]; // 801882D0
  cmps(c,0,(int32_t)c->r[8],0); // 801882D4
  W32(c->r[6]+0x00000000u,c->r[10]); // 801882D8
  if (crb(c,2)) { goto L_801882EC; } // 801882DC
  c->r[0]=R32(c->r[6]+0x00000000u); // 801882E0
  c->r[0]=c->r[0]|0x00000004u; // 801882E4
  W32(c->r[6]+0x00000000u,c->r[0]); // 801882E8
L_801882EC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801882EC
  if (crb(c,2)) { goto L_80188310; } // 801882F0
  c->r[0]=R32(c->r[6]+0x00000000u); // 801882F4
  c->r[0]=c->r[0]|0x00000002u; // 801882F8
  W32(c->r[6]+0x00000000u,c->r[0]); // 801882FC
  c->r[0]=R32(c->r[6]+c->r[10]); // 80188300
  c->r[0]=c->r[0]|0x00000004u; // 80188304
  W32(c->r[6]+c->r[10],c->r[0]); // 80188308
  goto L_80188318; // 8018830C
L_80188310:;
  c->r[4]=c->r[6]+c->r[10]; // 80188310
  W32(c->r[4]+0xFFFFFFFCu,c->r[10]); // 80188314
L_80188318:;
  cmps(c,0,(int32_t)c->r[9],0); // 80188318
  if (crb(c,2)) { goto L_80188334; } // 8018831C
  c->r[4]=R32(c->r[7]+0x0000000Cu); // 80188320
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 80188324
  W32(c->r[4]+0x00000008u,c->r[6]); // 80188328
  W32(c->r[6]+0x00000008u,c->r[7]); // 8018832C
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 80188330
L_80188334:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188334
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 80188338
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 8018833C
  c->r[4]=c->r[3]+c->r[0]; // 80188340
  W32(c->r[4]+0xFFFFFFFCu,c->r[6]); // 80188344
  c->r[4]=R32(c->r[7]+0x00000000u); // 80188348
  c->r[0]=c->r[4]|0x00000002u; // 8018834C
  W32(c->r[7]+0x00000000u,c->r[0]); // 80188350
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF8u; // 80188354
  c->r[0]=R32(c->r[7]+c->r[4]); // 80188358
  c->r[0]=c->r[0]|0x00000004u; // 8018835C
  W32(c->r[7]+c->r[4],c->r[0]); // 80188360
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188364
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188368
  c->r[4]=c->r[3]+c->r[0]; // 8018836C
  c->r[0]=R32(c->r[4]+0xFFFFFFFCu); // 80188370
  cmpu(c,0,c->r[0],c->r[7]); // 80188374
  if (!crb(c,2)) { goto L_80188384; } // 80188378
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 8018837C
  W32(c->r[4]+0xFFFFFFFCu,c->r[0]); // 80188380
L_80188384:;
  c->r[0]=R32(c->r[4]+0xFFFFFFFCu); // 80188384
  cmpu(c,0,c->r[0],c->r[7]); // 80188388
  if (!crb(c,2)) { goto L_801883A0; } // 8018838C
  c->r[0]=0u+0x00000000u; // 80188390
  W32(c->r[4]+0xFFFFFFFCu,c->r[0]); // 80188394
  W32(c->r[3]+0x00000008u,c->r[0]); // 80188398
  goto L_801883B8; // 8018839C
L_801883A0:;
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 801883A0
  c->r[0]=R32(c->r[7]+0x00000008u); // 801883A4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801883A8
  c->r[3]=R32(c->r[7]+0x00000008u); // 801883AC
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801883B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801883B4
L_801883B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801883B8
  if (crb(c,2)) { goto L_801883D0; } // 801883BC
  c->r[0]=R32(c->r[7]+0x00000000u); // 801883C0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801883C4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801883C8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801883CC
L_801883D0:;
  c->r[3]=c->r[7]|c->r[7]; // 801883D0
  return; // 801883D4
}

// fn_801883D8
void f_801883D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801883D8
  c->r[0]=c->lr; // 801883DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801883E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801883E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801883E8
  c->r[30]=c->r[3]|c->r[3]; // 801883EC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801883F0
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801883F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801883F8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801883FC
  c->r[5]=c->r[4]+c->r[6]; // 80188400
  c->r[0]=R32(c->r[4]+c->r[6]); // 80188404
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80188408
  W32(c->r[4]+c->r[6],c->r[0]); // 8018840C
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 80188410
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188414
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188418
  c->r[31]=c->r[3]+c->r[0]; // 8018841C
  {uint32_t ea=c->r[31]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[31]=ea;} // 80188420
  cmps(c,0,(int32_t)c->r[3],0); // 80188424
  if (crb(c,2)) { goto L_801884E8; } // 80188428
  c->r[5]=R32(c->r[3]+0x00000008u); // 8018842C
  c->r[3]=c->r[4]|c->r[4]; // 80188430
  W32(c->r[4]+0x00000008u,c->r[5]); // 80188434
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80188438
  c->r[0]=R32(c->r[31]+0x00000000u); // 8018843C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80188440
  c->r[5]=R32(c->r[31]+0x00000000u); // 80188444
  W32(c->r[5]+0x00000008u,c->r[4]); // 80188448
  W32(c->r[31]+0x00000000u,c->r[4]); // 8018844C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80188450
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80188454
  if (!crb(c,2)) { goto L_801884D8; } // 80188458
  c->r[6]=R32(c->r[4]+0xFFFFFFFCu); // 8018845C
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 80188460
  if (crb(c,2)) { goto L_8018846C; } // 80188464
  goto L_801884D8; // 80188468
L_8018846C:;
  c->r[3]=c->r[4]-c->r[6]; // 8018846C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80188470
  c->r[5]=rotl(c->r[0],0)&0x00000007u; // 80188474
  W32(c->r[3]+0x00000000u,c->r[5]); // 80188478
  c->r[0]=R32(c->r[4]+0x00000000u); // 8018847C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188480
  c->r[0]=c->r[6]+c->r[0]; // 80188484
  c->r[5]=(rotl(c->r[0],0)&0xFFFFFFF8u)|(c->r[5]&~0xFFFFFFF8u); // 80188488
  W32(c->r[3]+0x00000000u,c->r[5]); // 8018848C
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80188490
  if (!crb(c,2)) { goto L_801884AC; } // 80188494
  c->r[0]=R32(c->r[4]+0x00000000u); // 80188498
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 8018849C
  c->r[0]=c->r[6]+c->r[0]; // 801884A0
  c->r[5]=c->r[3]+c->r[0]; // 801884A4
  W32(c->r[5]+0xFFFFFFFCu,c->r[0]); // 801884A8
L_801884AC:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 801884AC
  cmpu(c,0,c->r[5],c->r[4]); // 801884B0
  if (!crb(c,2)) { goto L_801884C0; } // 801884B4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801884B8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801884BC
L_801884C0:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801884C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801884C4
  W32(c->r[5]+0x00000008u,c->r[0]); // 801884C8
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801884CC
  c->r[4]=R32(c->r[5]+0x00000008u); // 801884D0
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 801884D4
L_801884D8:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 801884D8
  c->r[4]=c->r[31]|c->r[31]; // 801884DC
  c->lr=0x801884E4u; f_80188528(c); // 801884E0
  goto L_801884F4; // 801884E4
L_801884E8:;
  W32(c->r[31]+0x00000000u,c->r[4]); // 801884E8
  W32(c->r[4]+0x00000008u,c->r[4]); // 801884EC
  W32(c->r[4]+0x0000000Cu,c->r[4]); // 801884F0
L_801884F4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801884F4
  c->r[0]=R32(c->r[30]+0x00000008u); // 801884F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801884FC
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFF8u; // 80188500
  cmpu(c,0,c->r[0],c->r[3]); // 80188504
  if (!crb(c,0)) { goto L_80188510; } // 80188508
  W32(c->r[30]+0x00000008u,c->r[3]); // 8018850C
L_80188510:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80188510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80188514
  c->r[30]=R32(c->r[1]+0x00000008u); // 80188518
  c->lr=c->r[0]; // 8018851C
  c->r[1]=c->r[1]+0x00000010u; // 80188520
  return; // 80188524
}

// fn_80188528
void f_80188528(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000000u); // 80188528
  c->r[7]=rotl(c->r[6],0)&0xFFFFFFF8u; // 8018852C
  c->r[5]=R32(c->r[3]+c->r[7]); // 80188530
  c->r[8]=c->r[3]+c->r[7]; // 80188534
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80188538
  if (!crb(c,2)) return; // 8018853C
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF8u; // 80188540
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 80188544
  c->r[6]=c->r[7]+c->r[5]; // 80188548
  c->r[0]=(rotl(c->r[6],0)&0xFFFFFFF8u)|(c->r[0]&~0xFFFFFFF8u); // 8018854C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80188550
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80188554
  if (!crb(c,2)) { goto L_80188564; } // 80188558
  c->r[5]=c->r[3]+c->r[6]; // 8018855C
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 80188560
L_80188564:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80188564
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80188568
  if (!crb(c,2)) { goto L_80188580; } // 8018856C
  c->r[0]=R32(c->r[3]+c->r[6]); // 80188570
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80188574
  W32(c->r[3]+c->r[6],c->r[0]); // 80188578
  goto L_8018858C; // 8018857C
L_80188580:;
  c->r[0]=R32(c->r[3]+c->r[6]); // 80188580
  c->r[0]=c->r[0]|0x00000004u; // 80188584
  W32(c->r[3]+c->r[6],c->r[0]); // 80188588
L_8018858C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8018858C
  cmpu(c,0,c->r[3],c->r[8]); // 80188590
  if (!crb(c,2)) { goto L_801885A0; } // 80188594
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188598
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018859C
L_801885A0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801885A0
  cmpu(c,0,c->r[0],c->r[8]); // 801885A4
  if (!crb(c,2)) { goto L_801885B4; } // 801885A8
  c->r[0]=0u+0x00000000u; // 801885AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801885B0
L_801885B4:;
  c->r[3]=R32(c->r[8]+0x0000000Cu); // 801885B4
  c->r[0]=R32(c->r[8]+0x00000008u); // 801885B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801885BC
  c->r[3]=R32(c->r[8]+0x00000008u); // 801885C0
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 801885C4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801885C8
  return; // 801885CC
}

// fn_801885D0
void f_801885D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801885D0
  c->r[0]=c->lr; // 801885D4
  cmps(c,0,(int32_t)c->r[5],0); // 801885D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801885DC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801885E0
  c->r[28]=c->r[3]|c->r[3]; // 801885E4
  c->r[30]=c->r[5]|c->r[5]; // 801885E8
  if (crb(c,2)) { goto L_801885F8; } // 801885EC
  c->r[0]=0u+0x00000000u; // 801885F0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801885F4
L_801885F8:;
  c->r[0]=c->r[4]+0x0000000Fu; // 801885F8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801885FC
  cmpu(c,0,c->r[29],0x00000050u); // 80188600
  if (!crb(c,0)) { goto L_8018860C; } // 80188604
  c->r[29]=0u+0x00000050u; // 80188608
L_8018860C:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018860C
  cmps(c,0,(int32_t)c->r[31],0); // 80188610
  if (crb(c,2)) { goto L_8018861C; } // 80188614
  goto L_801886D4; // 80188618
L_8018861C:;
  c->r[3]=c->r[29]+0x0000001Fu; // 8018861C
  c->r[0]=0u+0x00010000u; // 80188620
  c->r[27]=rotl(c->r[3],0)&0xFFFFFFF8u; // 80188624
  cmpu(c,0,c->r[27],c->r[0]); // 80188628
  if (!crb(c,0)) { goto L_80188634; } // 8018862C
  c->r[27]=0u+0x00010000u; // 80188630
L_80188634:;
  c->r[3]=c->r[27]|c->r[27]; // 80188634
  c->lr=0x8018863Cu; f_80187F24(c); // 80188638
  cmps(c,0,(int32_t)c->r[3],0); // 8018863C
  c->r[31]=c->r[3]|c->r[3]; // 80188640
  if (!crb(c,2)) { goto L_80188650; } // 80188644
  c->r[31]=0u+0x00000000u; // 80188648
  goto L_801886D4; // 8018864C
L_80188650:;
  c->r[0]=c->r[27]|0x00000003u; // 80188650
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80188654
  c->r[5]=c->r[3]+c->r[27]; // 80188658
  c->r[6]=c->r[3]|0x00000001u; // 8018865C
  W32(c->r[5]+0xFFFFFFF8u,c->r[0]); // 80188660
  c->r[4]=c->r[3]+0x00000010u; // 80188664
  c->r[0]=c->r[27]+0xFFFFFFE8u; // 80188668
  W32(c->r[3]+0x00000014u,c->r[6]); // 8018866C
  c->r[5]=c->r[27]+c->r[4]; // 80188670
  c->r[6]=0u+0x00000000u; // 80188674
  W32(c->r[3]+0x00000010u,c->r[0]); // 80188678
  W32(c->r[5]+0xFFFFFFE4u,c->r[0]); // 8018867C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80188680
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188684
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188688
  c->r[5]=c->r[3]+c->r[0]; // 8018868C
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 80188690
  c->lr=0x80188698u; f_801883D8(c); // 80188694
  c->r[3]=R32(c->r[28]+0x00000000u); // 80188698
  cmps(c,0,(int32_t)c->r[3],0); // 8018869C
  if (crb(c,2)) { goto L_801886C8; } // 801886A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801886A4
  W32(c->r[31]+0x00000000u,c->r[3]); // 801886A8
  W32(c->r[3]+0x00000004u,c->r[31]); // 801886AC
  c->r[0]=R32(c->r[28]+0x00000000u); // 801886B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801886B4
  c->r[3]=R32(c->r[28]+0x00000000u); // 801886B8
  W32(c->r[3]+0x00000000u,c->r[31]); // 801886BC
  W32(c->r[28]+0x00000000u,c->r[31]); // 801886C0
  goto L_801886D4; // 801886C4
L_801886C8:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 801886C8
  W32(c->r[31]+0x00000000u,c->r[31]); // 801886CC
  W32(c->r[31]+0x00000004u,c->r[31]); // 801886D0
L_801886D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801886D4
  if (!crb(c,2)) { goto L_801886E4; } // 801886D8
  c->r[3]=0u+0x00000000u; // 801886DC
  goto L_801887FC; // 801886E0
L_801886E4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801886E4
  cmpu(c,0,c->r[29],c->r[0]); // 801886E8
  if (crb(c,1)) { goto L_80188710; } // 801886EC
  c->r[3]=c->r[31]|c->r[31]; // 801886F0
  c->r[4]=c->r[29]|c->r[29]; // 801886F4
  c->r[5]=c->r[30]|c->r[30]; // 801886F8
  c->lr=0x80188700u; f_801881D4(c); // 801886FC
  cmps(c,0,(int32_t)c->r[3],0); // 80188700
  if (crb(c,2)) { goto L_80188710; } // 80188704
  W32(c->r[28]+0x00000000u,c->r[31]); // 80188708
  goto L_801887F8; // 8018870C
L_80188710:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 80188710
  c->r[0]=R32(c->r[28]+0x00000000u); // 80188714
  cmpu(c,0,c->r[31],c->r[0]); // 80188718
  if (!crb(c,2)) { IRQCHK(c); goto L_801886E4; } // 8018871C
  c->r[3]=c->r[29]+0x0000001Fu; // 80188720
  c->r[0]=0u+0x00010000u; // 80188724
  c->r[27]=rotl(c->r[3],0)&0xFFFFFFF8u; // 80188728
  cmpu(c,0,c->r[27],c->r[0]); // 8018872C
  if (!crb(c,0)) { goto L_80188738; } // 80188730
  c->r[27]=0u+0x00010000u; // 80188734
L_80188738:;
  c->r[3]=c->r[27]|c->r[27]; // 80188738
  c->lr=0x80188740u; f_80187F24(c); // 8018873C
  cmps(c,0,(int32_t)c->r[3],0); // 80188740
  c->r[31]=c->r[3]|c->r[3]; // 80188744
  if (!crb(c,2)) { goto L_80188754; } // 80188748
  c->r[31]=0u+0x00000000u; // 8018874C
  goto L_801887D8; // 80188750
L_80188754:;
  c->r[0]=c->r[27]|0x00000003u; // 80188754
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80188758
  c->r[5]=c->r[3]+c->r[27]; // 8018875C
  c->r[6]=c->r[3]|0x00000001u; // 80188760
  W32(c->r[5]+0xFFFFFFF8u,c->r[0]); // 80188764
  c->r[4]=c->r[3]+0x00000010u; // 80188768
  c->r[0]=c->r[27]+0xFFFFFFE8u; // 8018876C
  W32(c->r[3]+0x00000014u,c->r[6]); // 80188770
  c->r[5]=c->r[27]+c->r[4]; // 80188774
  c->r[6]=0u+0x00000000u; // 80188778
  W32(c->r[3]+0x00000010u,c->r[0]); // 8018877C
  W32(c->r[5]+0xFFFFFFE4u,c->r[0]); // 80188780
  W32(c->r[3]+0x00000008u,c->r[0]); // 80188784
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188788
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 8018878C
  c->r[5]=c->r[3]+c->r[0]; // 80188790
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 80188794
  c->lr=0x8018879Cu; f_801883D8(c); // 80188798
  c->r[3]=R32(c->r[28]+0x00000000u); // 8018879C
  cmps(c,0,(int32_t)c->r[3],0); // 801887A0
  if (crb(c,2)) { goto L_801887CC; } // 801887A4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801887A8
  W32(c->r[31]+0x00000000u,c->r[3]); // 801887AC
  W32(c->r[3]+0x00000004u,c->r[31]); // 801887B0
  c->r[0]=R32(c->r[28]+0x00000000u); // 801887B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801887B8
  c->r[3]=R32(c->r[28]+0x00000000u); // 801887BC
  W32(c->r[3]+0x00000000u,c->r[31]); // 801887C0
  W32(c->r[28]+0x00000000u,c->r[31]); // 801887C4
  goto L_801887D8; // 801887C8
L_801887CC:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 801887CC
  W32(c->r[31]+0x00000000u,c->r[31]); // 801887D0
  W32(c->r[31]+0x00000004u,c->r[31]); // 801887D4
L_801887D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801887D8
  if (!crb(c,2)) { goto L_801887E8; } // 801887DC
  c->r[3]=0u+0x00000000u; // 801887E0
  goto L_801887FC; // 801887E4
L_801887E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801887E8
  c->r[4]=c->r[29]|c->r[29]; // 801887EC
  c->r[5]=c->r[30]|c->r[30]; // 801887F0
  c->lr=0x801887F8u; f_801881D4(c); // 801887F4
L_801887F8:;
  c->r[3]=c->r[3]+0x00000008u; // 801887F8
L_801887FC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801887FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80188800
  c->lr=c->r[0]; // 80188804
  c->r[1]=c->r[1]+0x00000020u; // 80188808
  return; // 8018880C
}

// fn_80188810
void f_80188810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188810
  c->r[0]=c->lr; // 80188814
  W32(c->r[1]+0x00000024u,c->r[0]); // 80188818
  c->r[0]=c->r[4]+0x0000000Fu; // 8018881C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80188820
  W32(c->r[1]+0x00000018u,c->r[30]); // 80188824
  c->r[30]=c->r[5]|c->r[5]; // 80188828
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018882C
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188830
  cmpu(c,0,c->r[29],0x00000050u); // 80188834
  W32(c->r[1]+0x00000010u,c->r[28]); // 80188838
  c->r[28]=c->r[3]|c->r[3]; // 8018883C
  if (!crb(c,0)) { goto L_80188848; } // 80188840
  c->r[29]=0u+0x00000050u; // 80188844
L_80188848:;
  c->r[0]=0u+0x00000000u; // 80188848
  W32(c->r[5]+0x00000000u,c->r[0]); // 8018884C
  c->r[31]=R32(c->r[3]+0x00000000u); // 80188850
  cmps(c,0,(int32_t)c->r[31],0); // 80188854
  if (!crb(c,2)) { goto L_80188864; } // 80188858
  c->r[3]=0u+0x00000000u; // 8018885C
  goto L_801888CC; // 80188860
L_80188864:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80188864
  cmpu(c,0,c->r[29],c->r[0]); // 80188868
  if (crb(c,1)) { goto L_80188890; } // 8018886C
  c->r[3]=c->r[31]|c->r[31]; // 80188870
  c->r[4]=c->r[29]|c->r[29]; // 80188874
  c->r[5]=0u+0x00000000u; // 80188878
  c->lr=0x80188880u; f_801881D4(c); // 8018887C
  cmps(c,0,(int32_t)c->r[3],0); // 80188880
  if (crb(c,2)) { goto L_80188890; } // 80188884
  W32(c->r[28]+0x00000000u,c->r[31]); // 80188888
  goto L_801888C8; // 8018888C
L_80188890:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80188890
  cmpu(c,0,c->r[3],0x00000008u); // 80188894
  if (!crb(c,1)) { goto L_801888B0; } // 80188898
  c->r[0]=R32(c->r[30]+0x00000000u); // 8018889C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801888A0
  cmpu(c,0,c->r[0],c->r[3]); // 801888A4
  if (!crb(c,0)) { goto L_801888B0; } // 801888A8
  W32(c->r[30]+0x00000000u,c->r[3]); // 801888AC
L_801888B0:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 801888B0
  c->r[0]=R32(c->r[28]+0x00000000u); // 801888B4
  cmpu(c,0,c->r[31],c->r[0]); // 801888B8
  if (!crb(c,2)) { IRQCHK(c); goto L_80188864; } // 801888BC
  c->r[3]=0u+0x00000000u; // 801888C0
  goto L_801888CC; // 801888C4
L_801888C8:;
  c->r[3]=c->r[3]+0x00000008u; // 801888C8
L_801888CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801888CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801888D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801888D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801888D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801888DC
  c->lr=c->r[0]; // 801888E0
  c->r[1]=c->r[1]+0x00000020u; // 801888E4
  return; // 801888E8
}

// fn_801888EC
void f_801888EC(Ctx* __restrict c) {
  c->r[9]=0u+0x802E0000u; // 801888EC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801888F0
  c->r[9]=c->r[9]+0xFFFFFD48u; // 801888F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801888F8
  c->r[6]=R32(c->r[9]+c->r[0]); // 801888FC
  c->r[10]=c->r[7]|c->r[7]; // 80188900
  W32(c->r[3]+0x00000004u,c->r[5]); // 80188904
  c->r[11]=0u+0x00000000u; // 80188908
  c->r[9]=c->r[6]+0x00000004u; // 8018890C
  c->r[8]=divwu(c->r[8],c->r[9]); // 80188910
  W32(c->r[4]+0x00000004u,c->r[3]); // 80188914
  W32(c->r[5]+0x00000000u,c->r[3]); // 80188918
  W32(c->r[3]+0x00000008u,c->r[6]); // 8018891C
  c->r[0]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80188920
  if (crb(c,2)) { goto L_801889F8; } // 80188924
  cmpu(c,0,c->r[0],0x00000008u); // 80188928
  c->r[4]=c->r[8]+0xFFFFFFF7u; // 8018892C
  if (!crb(c,1)) { goto L_801889D0; } // 80188930
  c->r[0]=c->r[4]+0x00000007u; // 80188934
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80188938
  c->ctr=c->r[0]; // 8018893C
  cmpu(c,0,c->r[4],0x00000000u); // 80188940
  if (!crb(c,1)) { goto L_801889D0; } // 80188944
L_80188948:;
  W32(c->r[10]+0x00000000u,c->r[3]); // 80188948
  c->r[0]=c->r[10]+c->r[9]; // 8018894C
  c->r[4]=c->r[0]|c->r[0]; // 80188950
  c->r[11]=c->r[11]+0x00000008u; // 80188954
  W32(c->r[10]+0x00000004u,c->r[0]); // 80188958
  c->r[0]=c->r[0]+c->r[9]; // 8018895C
  c->r[5]=c->r[0]|c->r[0]; // 80188960
  W32(c->r[4]+0x00000000u,c->r[3]); // 80188964
  W32(c->r[4]+0x00000004u,c->r[0]); // 80188968
  c->r[0]=c->r[0]+c->r[9]; // 8018896C
  c->r[4]=c->r[0]|c->r[0]; // 80188970
  W32(c->r[5]+0x00000000u,c->r[3]); // 80188974
  W32(c->r[5]+0x00000004u,c->r[0]); // 80188978
  c->r[0]=c->r[0]+c->r[9]; // 8018897C
  c->r[5]=c->r[0]|c->r[0]; // 80188980
  W32(c->r[4]+0x00000000u,c->r[3]); // 80188984
  W32(c->r[4]+0x00000004u,c->r[0]); // 80188988
  c->r[0]=c->r[0]+c->r[9]; // 8018898C
  c->r[4]=c->r[0]|c->r[0]; // 80188990
  W32(c->r[5]+0x00000000u,c->r[3]); // 80188994
  W32(c->r[5]+0x00000004u,c->r[0]); // 80188998
  c->r[0]=c->r[0]+c->r[9]; // 8018899C
  c->r[5]=c->r[0]|c->r[0]; // 801889A0
  W32(c->r[4]+0x00000000u,c->r[3]); // 801889A4
  W32(c->r[4]+0x00000004u,c->r[0]); // 801889A8
  c->r[0]=c->r[0]+c->r[9]; // 801889AC
  c->r[4]=c->r[0]|c->r[0]; // 801889B0
  W32(c->r[5]+0x00000000u,c->r[3]); // 801889B4
  W32(c->r[5]+0x00000004u,c->r[0]); // 801889B8
  c->r[0]=c->r[0]+c->r[9]; // 801889BC
  c->r[10]=c->r[0]|c->r[0]; // 801889C0
  W32(c->r[4]+0x00000000u,c->r[3]); // 801889C4
  W32(c->r[4]+0x00000004u,c->r[0]); // 801889C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80188948; } // 801889CC
L_801889D0:;
  c->r[4]=c->r[8]+0xFFFFFFFFu; // 801889D0
  c->r[0]=c->r[4]-c->r[11]; // 801889D4
  c->ctr=c->r[0]; // 801889D8
  cmpu(c,0,c->r[11],c->r[4]); // 801889DC
  if (!crb(c,0)) { goto L_801889F8; } // 801889E0
L_801889E4:;
  W32(c->r[10]+0x00000000u,c->r[3]); // 801889E4
  c->r[0]=c->r[10]+c->r[9]; // 801889E8
  W32(c->r[10]+0x00000004u,c->r[0]); // 801889EC
  c->r[10]=c->r[0]|c->r[0]; // 801889F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801889E4; } // 801889F4
L_801889F8:;
  W32(c->r[10]+0x00000000u,c->r[3]); // 801889F8
  c->r[0]=0u+0x00000000u; // 801889FC
  W32(c->r[10]+0x00000004u,c->r[0]); // 80188A00
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 80188A04
  W32(c->r[3]+0x00000010u,c->r[0]); // 80188A08
  return; // 80188A0C
}

// fn_80188A10
void f_80188A10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188A10
  c->r[0]=c->lr; // 80188A14
  c->r[6]=0u+0x802E0000u; // 80188A18
  W32(c->r[1]+0x00000044u,c->r[0]); // 80188A1C
  c->r[6]=c->r[6]+0xFFFFFD48u; // 80188A20
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80188A24
  c->r[27]=c->r[3]|c->r[3]; // 80188A28
  c->r[28]=c->r[5]|c->r[5]; // 80188A2C
  c->r[30]=0u+0x00000000u; // 80188A30
  goto L_80188A40; // 80188A34
L_80188A38:;
  c->r[6]=c->r[6]+0x00000004u; // 80188A38
  c->r[30]=c->r[30]+0x00000001u; // 80188A3C
L_80188A40:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80188A40
  cmpu(c,0,c->r[4],c->r[0]); // 80188A44
  if (crb(c,1)) { IRQCHK(c); goto L_80188A38; } // 80188A48
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80188A4C
  c->r[31]=c->r[3]+c->r[0]; // 80188A50
  c->r[3]=R32(c->r[31]+0x00000008u); // 80188A54
  cmps(c,0,(int32_t)c->r[3],0); // 80188A58
  if (crb(c,2)) { goto L_80188A6C; } // 80188A5C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188A60
  cmps(c,0,(int32_t)c->r[0],0); // 80188A64
  if (!crb(c,2)) { goto L_80188BA0; } // 80188A68
L_80188A6C:;
  c->r[3]=0u+0x802E0000u; // 80188A6C
  c->r[24]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80188A70
  c->r[3]=c->r[3]+0xFFFFFD48u; // 80188A74
  c->r[4]=0u+0x00000FECu; // 80188A78
  c->r[3]=R32(c->r[3]+c->r[24]); // 80188A7C
  c->r[0]=c->r[3]+0x00000004u; // 80188A80
  c->r[0]=divwu(c->r[4],c->r[0]); // 80188A84
  cmpu(c,0,c->r[0],0x00000100u); // 80188A88
  if (!crb(c,1)) { goto L_80188A94; } // 80188A8C
  c->r[0]=0u+0x00000100u; // 80188A90
L_80188A94:;
  c->r[25]=0u+0x802E0000u; // 80188A94
  c->r[23]=c->r[0]|c->r[0]; // 80188A98
  c->r[25]=c->r[25]+0xFFFFFD48u; // 80188A9C
  c->r[3]=R32(c->r[25]+c->r[24]); // 80188AA0
  c->r[26]=c->r[3]+0x00000004u; // 80188AA4
  goto L_80188AE8; // 80188AA8
L_80188AAC:;
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[26]); // 80188AAC
  c->r[3]=c->r[27]|c->r[27]; // 80188AB0
  c->r[5]=c->r[1]+0x0000000Cu; // 80188AB4
  c->r[4]=c->r[4]+0x00000014u; // 80188AB8
  c->lr=0x80188AC0u; f_80188810(c); // 80188ABC
  cmps(c,0,(int32_t)c->r[3],0); // 80188AC0
  c->r[29]=c->r[3]|c->r[3]; // 80188AC4
  if (!crb(c,2)) { goto L_80188AF0; } // 80188AC8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80188ACC
  cmpu(c,0,c->r[3],0x00000014u); // 80188AD0
  if (!crb(c,1)) { goto L_80188AE4; } // 80188AD4
  c->r[0]=c->r[3]+0xFFFFFFECu; // 80188AD8
  c->r[0]=divwu(c->r[0],c->r[26]); // 80188ADC
  goto L_80188AE8; // 80188AE0
L_80188AE4:;
  c->r[0]=0u+0x00000000u; // 80188AE4
L_80188AE8:;
  cmpu(c,0,c->r[0],0x0000000Au); // 80188AE8
  if (!crb(c,0)) { IRQCHK(c); goto L_80188AAC; } // 80188AEC
L_80188AF0:;
  cmps(c,0,(int32_t)c->r[29],0); // 80188AF0
  if (!crb(c,2)) { goto L_80188B4C; } // 80188AF4
  c->r[3]=R32(c->r[25]+c->r[24]); // 80188AF8
  c->r[25]=c->r[3]+0x00000004u; // 80188AFC
  c->r[26]=c->r[3]+0x00000018u; // 80188B00
L_80188B04:;
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[25]); // 80188B04
  c->r[3]=c->r[27]|c->r[27]; // 80188B08
  c->r[5]=c->r[1]+0x00000008u; // 80188B0C
  c->r[4]=c->r[4]+0x00000014u; // 80188B10
  c->lr=0x80188B18u; f_801885D0(c); // 80188B14
  cmps(c,0,(int32_t)c->r[3],0); // 80188B18
  c->r[29]=c->r[3]|c->r[3]; // 80188B1C
  if (!crb(c,2)) { goto L_80188B4C; } // 80188B20
  c->r[0]=R32(c->r[1]+0x00000008u); // 80188B24
  c->r[23]=divwu(c->r[0],c->r[26]); // 80188B28
  cmpu(c,0,c->r[23],0x0000000Au); // 80188B2C
  if (!crb(c,0)) { IRQCHK(c); goto L_80188B04; } // 80188B30
  cmps(c,0,(int32_t)c->r[28],0); // 80188B34
  if (crb(c,2)) { goto L_80188B44; } // 80188B38
  c->r[0]=0u+0x00000000u; // 80188B3C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80188B40
L_80188B44:;
  c->r[3]=0u+0x00000000u; // 80188B44
  goto L_80188C04; // 80188B48
L_80188B4C:;
  c->r[3]=R32(c->r[29]+0xFFFFFFFCu); // 80188B4C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80188B50
  if (!crb(c,2)) { goto L_80188B60; } // 80188B54
  c->r[8]=R32(c->r[3]+0x00000008u); // 80188B58
  goto L_80188B6C; // 80188B5C
L_80188B60:;
  c->r[0]=R32(c->r[29]+0xFFFFFFF8u); // 80188B60
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188B64
  c->r[8]=c->r[3]+0xFFFFFFF8u; // 80188B68
L_80188B6C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80188B6C
  cmps(c,0,(int32_t)c->r[0],0); // 80188B70
  if (!crb(c,2)) { goto L_80188B80; } // 80188B74
  W32(c->r[31]+0x00000008u,c->r[29]); // 80188B78
  W32(c->r[31]+0x00000004u,c->r[29]); // 80188B7C
L_80188B80:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 80188B80
  c->r[3]=c->r[29]|c->r[29]; // 80188B84
  c->r[5]=R32(c->r[31]+0x00000008u); // 80188B88
  c->r[6]=c->r[30]|c->r[30]; // 80188B8C
  c->r[7]=c->r[29]+0x00000014u; // 80188B90
  c->r[8]=c->r[8]+0xFFFFFFECu; // 80188B94
  c->lr=0x80188B9Cu; f_801888EC(c); // 80188B98
  W32(c->r[31]+0x00000008u,c->r[29]); // 80188B9C
L_80188BA0:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80188BA0
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80188BA4
  c->r[0]=R32(c->r[5]+0x00000004u); // 80188BA8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80188BAC
  c->r[4]=R32(c->r[31]+0x00000008u); // 80188BB0
  c->r[3]=R32(c->r[4]+0x00000010u); // 80188BB4
  c->r[0]=c->r[3]+0x00000001u; // 80188BB8
  W32(c->r[4]+0x00000010u,c->r[0]); // 80188BBC
  c->r[3]=R32(c->r[31]+0x00000008u); // 80188BC0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80188BC4
  cmps(c,0,(int32_t)c->r[0],0); // 80188BC8
  if (!crb(c,2)) { goto L_80188BE4; } // 80188BCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 80188BD0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80188BD4
  c->r[3]=R32(c->r[31]+0x00000004u); // 80188BD8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80188BDC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80188BE0
L_80188BE4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80188BE4
  if (crb(c,2)) { goto L_80188C00; } // 80188BE8
  c->r[3]=0u+0x802E0000u; // 80188BEC
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80188BF0
  c->r[3]=c->r[3]+0xFFFFFD48u; // 80188BF4
  c->r[0]=R32(c->r[3]+c->r[0]); // 80188BF8
  W32(c->r[28]+0x00000000u,c->r[0]); // 80188BFC
L_80188C00:;
  c->r[3]=c->r[5]+0x00000004u; // 80188C00
L_80188C04:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80188C04
  c->r[0]=R32(c->r[1]+0x00000044u); // 80188C08
  c->lr=c->r[0]; // 80188C0C
  c->r[1]=c->r[1]+0x00000040u; // 80188C10
  return; // 80188C14
}

// fn_80188C18
void f_80188C18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188C18
  c->r[0]=c->lr; // 80188C1C
  c->r[6]=0u+0x802E0000u; // 80188C20
  c->r[7]=0u+0x00000000u; // 80188C24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80188C28
  c->r[6]=c->r[6]+0xFFFFFD48u; // 80188C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80188C30
  c->r[31]=c->r[3]|c->r[3]; // 80188C34
  W32(c->r[1]+0x00000008u,c->r[30]); // 80188C38
  goto L_80188C48; // 80188C3C
L_80188C40:;
  c->r[6]=c->r[6]+0x00000004u; // 80188C40
  c->r[7]=c->r[7]+0x00000001u; // 80188C44
L_80188C48:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80188C48
  cmpu(c,0,c->r[5],c->r[0]); // 80188C4C
  if (crb(c,1)) { IRQCHK(c); goto L_80188C40; } // 80188C50
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 80188C54
  c->r[4]=R32(c->r[4]+0xFFFFFFFCu); // 80188C58
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80188C5C
  c->r[3]=c->r[3]+c->r[0]; // 80188C60
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80188C64
  cmps(c,0,(int32_t)c->r[0],0); // 80188C68
  if (!crb(c,2)) { goto L_80188CD8; } // 80188C6C
  c->r[5]=R32(c->r[3]+0x00000008u); // 80188C70
  cmpu(c,0,c->r[5],c->r[4]); // 80188C74
  if (crb(c,2)) { goto L_80188CD8; } // 80188C78
  c->r[0]=R32(c->r[3]+0x00000004u); // 80188C7C
  cmpu(c,0,c->r[0],c->r[4]); // 80188C80
  if (!crb(c,2)) { goto L_80188CA0; } // 80188C84
  c->r[0]=R32(c->r[5]+0x00000000u); // 80188C88
  W32(c->r[3]+0x00000008u,c->r[0]); // 80188C8C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80188C90
  c->r[0]=R32(c->r[5]+0x00000000u); // 80188C94
  W32(c->r[3]+0x00000004u,c->r[0]); // 80188C98
  goto L_80188CD8; // 80188C9C
L_80188CA0:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80188CA0
  c->r[0]=R32(c->r[4]+0x00000004u); // 80188CA4
  W32(c->r[5]+0x00000004u,c->r[0]); // 80188CA8
  c->r[5]=R32(c->r[4]+0x00000004u); // 80188CAC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80188CB0
  W32(c->r[5]+0x00000000u,c->r[0]); // 80188CB4
  c->r[5]=R32(c->r[3]+0x00000008u); // 80188CB8
  W32(c->r[4]+0x00000004u,c->r[5]); // 80188CBC
  c->r[5]=R32(c->r[5]+0x00000000u); // 80188CC0
  W32(c->r[4]+0x00000000u,c->r[5]); // 80188CC4
  W32(c->r[5]+0x00000004u,c->r[4]); // 80188CC8
  c->r[5]=R32(c->r[4]+0x00000004u); // 80188CCC
  W32(c->r[5]+0x00000000u,c->r[4]); // 80188CD0
  W32(c->r[3]+0x00000008u,c->r[4]); // 80188CD4
L_80188CD8:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80188CD8
  W32(c->r[6]+0x00000004u,c->r[0]); // 80188CDC
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 80188CE0
  c->r[0]=R32(c->r[4]+0x00000010u); // 80188CE4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80188CE8
  W32(c->r[4]+0x00000010u,c->r[0]); // 80188CEC
  if (!crb(c,2)) { goto L_80188DEC; } // 80188CF0
  c->r[0]=R32(c->r[3]+0x00000008u); // 80188CF4
  cmpu(c,0,c->r[0],c->r[4]); // 80188CF8
  if (!crb(c,2)) { goto L_80188D08; } // 80188CFC
  c->r[0]=R32(c->r[4]+0x00000004u); // 80188D00
  W32(c->r[3]+0x00000008u,c->r[0]); // 80188D04
L_80188D08:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80188D08
  cmpu(c,0,c->r[0],c->r[4]); // 80188D0C
  if (!crb(c,2)) { goto L_80188D1C; } // 80188D10
  c->r[0]=R32(c->r[4]+0x00000000u); // 80188D14
  W32(c->r[3]+0x00000004u,c->r[0]); // 80188D18
L_80188D1C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80188D1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80188D20
  W32(c->r[5]+0x00000004u,c->r[0]); // 80188D24
  c->r[5]=R32(c->r[4]+0x00000004u); // 80188D28
  c->r[0]=R32(c->r[4]+0x00000000u); // 80188D2C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80188D30
  c->r[0]=R32(c->r[3]+0x00000008u); // 80188D34
  cmpu(c,0,c->r[0],c->r[4]); // 80188D38
  if (!crb(c,2)) { goto L_80188D48; } // 80188D3C
  c->r[0]=0u+0x00000000u; // 80188D40
  W32(c->r[3]+0x00000008u,c->r[0]); // 80188D44
L_80188D48:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80188D48
  cmpu(c,0,c->r[0],c->r[4]); // 80188D4C
  if (!crb(c,2)) { goto L_80188D5C; } // 80188D50
  c->r[0]=0u+0x00000000u; // 80188D54
  W32(c->r[3]+0x00000004u,c->r[0]); // 80188D58
L_80188D5C:;
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 80188D5C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80188D60
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80188D64
  c->r[3]=c->r[30]|c->r[30]; // 80188D68
  c->lr=0x80188D70u; f_801883D8(c); // 80188D6C
  c->r[3]=R32(c->r[30]+0x00000010u); // 80188D70
  c->r[5]=0u+0x00000000u; // 80188D74
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80188D78
  if (!crb(c,2)) { goto L_80188D9C; } // 80188D7C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80188D80
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFF8u; // 80188D84
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188D88
  c->r[0]=c->r[3]+0xFFFFFFE8u; // 80188D8C
  cmpu(c,0,c->r[4],c->r[0]); // 80188D90
  if (!crb(c,2)) { goto L_80188D9C; } // 80188D94
  c->r[5]=0u+0x00000001u; // 80188D98
L_80188D9C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80188D9C
  if (crb(c,2)) { goto L_80188DEC; } // 80188DA0
  c->r[4]=R32(c->r[30]+0x00000004u); // 80188DA4
  cmpu(c,0,c->r[4],c->r[30]); // 80188DA8
  if (!crb(c,2)) { goto L_80188DB4; } // 80188DAC
  c->r[4]=0u+0x00000000u; // 80188DB0
L_80188DB4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80188DB4
  cmpu(c,0,c->r[0],c->r[30]); // 80188DB8
  if (!crb(c,2)) { goto L_80188DC4; } // 80188DBC
  W32(c->r[31]+0x00000000u,c->r[4]); // 80188DC0
L_80188DC4:;
  cmps(c,0,(int32_t)c->r[4],0); // 80188DC4
  if (crb(c,2)) { goto L_80188DD8; } // 80188DC8
  c->r[3]=R32(c->r[30]+0x00000000u); // 80188DCC
  W32(c->r[4]+0x00000000u,c->r[3]); // 80188DD0
  W32(c->r[3]+0x00000004u,c->r[4]); // 80188DD4
L_80188DD8:;
  c->r[0]=0u+0x00000000u; // 80188DD8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80188DDC
  c->r[3]=c->r[30]|c->r[30]; // 80188DE0
  W32(c->r[30]+0x00000000u,c->r[0]); // 80188DE4
  c->lr=0x80188DECu; f_80187FDC(c); // 80188DE8
L_80188DEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80188DEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80188DF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80188DF4
  c->lr=c->r[0]; // 80188DF8
  c->r[1]=c->r[1]+0x00000010u; // 80188DFC
  return; // 80188E00
}

// fn_80188E04
void f_80188E04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188E04
  c->r[0]=c->lr; // 80188E08
  cmps(c,0,(int32_t)c->r[3],0); // 80188E0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80188E10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80188E14
  c->r[31]=c->r[3]|c->r[3]; // 80188E18
  if (crb(c,2)) { goto L_80188E8C; } // 80188E1C
  c->r[0]=R8(c->r[13]+0xFFFFA098u); // 80188E20
  cmps(c,0,(int32_t)c->r[0],0); // 80188E24
  if (!crb(c,2)) { goto L_80188E48; } // 80188E28
  c->r[3]=0u+0x80390000u; // 80188E2C
  c->r[4]=0u+0x00000000u; // 80188E30
  c->r[3]=c->r[3]+0xFFFFF638u; // 80188E34
  c->r[5]=0u+0x00000034u; // 80188E38
  c->lr=0x80188E40u; f_80004688(c); // 80188E3C
  c->r[0]=0u+0x00000001u; // 80188E40
  W8(c->r[13]+0xFFFFA098u,c->r[0]); // 80188E44
L_80188E48:;
  c->r[0]=0u+0xFFFFFFCFu; // 80188E48
  c->r[3]=0u+0x80390000u; // 80188E4C
  cmpu(c,0,c->r[31],c->r[0]); // 80188E50
  c->r[3]=c->r[3]+0xFFFFF638u; // 80188E54
  if (!crb(c,1)) { goto L_80188E64; } // 80188E58
  c->r[3]=0u+0x00000000u; // 80188E5C
  goto L_80188E90; // 80188E60
L_80188E64:;
  cmpu(c,0,c->r[31],0x00000044u); // 80188E64
  if (crb(c,1)) { goto L_80188E7C; } // 80188E68
  c->r[4]=c->r[31]|c->r[31]; // 80188E6C
  c->r[5]=0u+0x00000000u; // 80188E70
  c->lr=0x80188E78u; f_80188A10(c); // 80188E74
  goto L_80188E90; // 80188E78
L_80188E7C:;
  c->r[4]=c->r[31]|c->r[31]; // 80188E7C
  c->r[5]=0u+0x00000000u; // 80188E80
  c->lr=0x80188E88u; f_801885D0(c); // 80188E84
  goto L_80188E90; // 80188E88
L_80188E8C:;
  c->r[3]=0u+0x00000000u; // 80188E8C
L_80188E90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80188E90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80188E94
  c->lr=c->r[0]; // 80188E98
  c->r[1]=c->r[1]+0x00000010u; // 80188E9C
  return; // 80188EA0
}

// fn_80188EA4
void f_80188EA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188EA4
  c->r[0]=c->lr; // 80188EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80188EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80188EB0
  c->r[31]=c->r[3]|c->r[3]; // 80188EB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80188EB8
  c->r[0]=R8(c->r[13]+0xFFFFA098u); // 80188EBC
  cmps(c,0,(int32_t)c->r[0],0); // 80188EC0
  if (!crb(c,2)) { goto L_80188EE4; } // 80188EC4
  c->r[3]=0u+0x80390000u; // 80188EC8
  c->r[4]=0u+0x00000000u; // 80188ECC
  c->r[3]=c->r[3]+0xFFFFF638u; // 80188ED0
  c->r[5]=0u+0x00000034u; // 80188ED4
  c->lr=0x80188EDCu; f_80004688(c); // 80188ED8
  c->r[0]=0u+0x00000001u; // 80188EDC
  W8(c->r[13]+0xFFFFA098u,c->r[0]); // 80188EE0
L_80188EE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80188EE4
  c->r[30]=0u+0x80390000u; // 80188EE8
  c->r[30]=c->r[30]+0xFFFFF638u; // 80188EEC
  if (crb(c,2)) { goto L_80188FBC; } // 80188EF0
  c->r[3]=R32(c->r[31]+0xFFFFFFFCu); // 80188EF4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80188EF8
  if (!crb(c,2)) { goto L_80188F08; } // 80188EFC
  c->r[5]=R32(c->r[3]+0x00000008u); // 80188F00
  goto L_80188F14; // 80188F04
L_80188F08:;
  c->r[0]=R32(c->r[31]+0xFFFFFFF8u); // 80188F08
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188F0C
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 80188F10
L_80188F14:;
  cmpu(c,0,c->r[5],0x00000044u); // 80188F14
  if (crb(c,1)) { goto L_80188F2C; } // 80188F18
  c->r[3]=c->r[30]|c->r[30]; // 80188F1C
  c->r[4]=c->r[31]|c->r[31]; // 80188F20
  c->lr=0x80188F28u; f_80188C18(c); // 80188F24
  goto L_80188FBC; // 80188F28
L_80188F2C:;
  c->r[0]=R32(c->r[31]+0xFFFFFFFCu); // 80188F2C
  c->r[4]=c->r[31]+0xFFFFFFF8u; // 80188F30
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80188F34
  c->r[3]=c->r[31]|c->r[31]; // 80188F38
  c->lr=0x80188F40u; f_801883D8(c); // 80188F3C
  c->r[3]=R32(c->r[31]+0x00000010u); // 80188F40
  c->r[5]=0u+0x00000000u; // 80188F44
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80188F48
  if (!crb(c,2)) { goto L_80188F6C; } // 80188F4C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80188F50
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFF8u; // 80188F54
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80188F58
  c->r[0]=c->r[3]+0xFFFFFFE8u; // 80188F5C
  cmpu(c,0,c->r[4],c->r[0]); // 80188F60
  if (!crb(c,2)) { goto L_80188F6C; } // 80188F64
  c->r[5]=0u+0x00000001u; // 80188F68
L_80188F6C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80188F6C
  if (crb(c,2)) { goto L_80188FBC; } // 80188F70
  c->r[4]=R32(c->r[31]+0x00000004u); // 80188F74
  cmpu(c,0,c->r[4],c->r[31]); // 80188F78
  if (!crb(c,2)) { goto L_80188F84; } // 80188F7C
  c->r[4]=0u+0x00000000u; // 80188F80
L_80188F84:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80188F84
  cmpu(c,0,c->r[0],c->r[31]); // 80188F88
  if (!crb(c,2)) { goto L_80188F94; } // 80188F8C
  W32(c->r[30]+0x00000000u,c->r[4]); // 80188F90
L_80188F94:;
  cmps(c,0,(int32_t)c->r[4],0); // 80188F94
  if (crb(c,2)) { goto L_80188FA8; } // 80188F98
  c->r[3]=R32(c->r[31]+0x00000000u); // 80188F9C
  W32(c->r[4]+0x00000000u,c->r[3]); // 80188FA0
  W32(c->r[3]+0x00000004u,c->r[4]); // 80188FA4
L_80188FA8:;
  c->r[0]=0u+0x00000000u; // 80188FA8
  W32(c->r[31]+0x00000004u,c->r[0]); // 80188FAC
  c->r[3]=c->r[31]|c->r[31]; // 80188FB0
  W32(c->r[31]+0x00000000u,c->r[0]); // 80188FB4
  c->lr=0x80188FBCu; f_80187FDC(c); // 80188FB8
L_80188FBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80188FBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80188FC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80188FC4
  c->lr=c->r[0]; // 80188FC8
  c->r[1]=c->r[1]+0x00000010u; // 80188FCC
  return; // 80188FD0
}

// fn_80188FD4
void f_80188FD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80188FD4
  c->r[0]=c->lr; // 80188FD8
  c->r[3]=0u+0x80330000u; // 80188FDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80188FE0
  c->r[3]=c->r[3]+0x00000258u; // 80188FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80188FE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80188FEC
  c->r[3]=R32(c->r[3]+0x000000ECu); // 80188FF0
  goto L_80189010; // 80188FF4
L_80188FF8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80188FF8
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 80188FFC
  if (!crb(c,2)) { goto L_80189008; } // 80189000
  goto L_80189050; // 80189004
L_80189008:;
  c->r[30]=c->r[3]|c->r[3]; // 80189008
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8018900C
L_80189010:;
  cmps(c,0,(int32_t)c->r[3],0); // 80189010
  if (!crb(c,2)) { IRQCHK(c); goto L_80188FF8; } // 80189014
  c->r[3]=0u+0x00000050u; // 80189018
  c->lr=0x80189020u; f_80188E04(c); // 8018901C
  cmps(c,0,(int32_t)c->r[3],0); // 80189020
  c->r[31]=c->r[3]|c->r[3]; // 80189024
  if (crb(c,2)) { goto L_8018904C; } // 80189028
  c->r[4]=0u+0x00000000u; // 8018902C
  c->r[5]=0u+0x00000050u; // 80189030
  c->lr=0x80189038u; f_80004688(c); // 80189034
  c->r[0]=0u+0x00000001u; // 80189038
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 8018903C
  c->r[3]=c->r[31]|c->r[31]; // 80189040
  W32(c->r[30]+0x0000004Cu,c->r[31]); // 80189044
  goto L_80189050; // 80189048
L_8018904C:;
  c->r[3]=0u+0x00000000u; // 8018904C
L_80189050:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80189050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80189054
  c->r[30]=R32(c->r[1]+0x00000008u); // 80189058
  c->lr=c->r[0]; // 8018905C
  c->r[1]=c->r[1]+0x00000010u; // 80189060
  return; // 80189064
}

// fn_80189068
void f_80189068(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189068
  c->r[0]=c->lr; // 8018906C
  c->r[7]=0u+0x00000000u; // 80189070
  cmps(c,0,(int32_t)c->r[6],0); // 80189074
  W32(c->r[1]+0x00000014u,c->r[0]); // 80189078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018907C
  c->r[31]=c->r[3]|c->r[3]; // 80189080
  W32(c->r[3]+0x00000000u,c->r[7]); // 80189084
  c->r[0]=R32(c->r[3]+0x00000008u); // 80189088
  c->r[4]=R32(c->r[4]+0x00000000u); // 8018908C
  c->r[0]=rotl(c->r[0],0)&0x0FFFFFFFu; // 80189090
  W32(c->r[3]+0x00000004u,c->r[4]); // 80189094
  W32(c->r[3]+0x00000008u,c->r[0]); // 80189098
  W8(c->r[3]+0x00000009u,c->r[7]); // 8018909C
  W8(c->r[3]+0x0000000Au,c->r[7]); // 801890A0
  W32(c->r[3]+0x00000018u,c->r[7]); // 801890A4
  if (crb(c,2)) { goto L_801890BC; } // 801890A8
  c->r[4]=c->r[5]|c->r[5]; // 801890AC
  c->r[5]=0u+0x00000002u; // 801890B0
  c->lr=0x801890B8u; f_8018AD40(c); // 801890B4
  goto L_801890CC; // 801890B8
L_801890BC:;
  c->r[4]=0u+0x00000000u; // 801890BC
  c->r[5]=0u+0x00000000u; // 801890C0
  c->r[6]=0u+0x00000000u; // 801890C4
  c->lr=0x801890CCu; f_8018AD40(c); // 801890C8
L_801890CC:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801890CC
  c->r[3]=0u+0x00000000u; // 801890D0
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801890D4
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 801890D8
  W32(c->r[31]+0x00000024u,c->r[4]); // 801890DC
  cmpu(c,0,c->r[0],0x00000001u); // 801890E0
  W32(c->r[31]+0x00000028u,c->r[3]); // 801890E4
  if (!crb(c,2)) { goto L_8018911C; } // 801890E8
  c->r[6]=0u+0x801A0000u; // 801890EC
  c->r[5]=0u+0x801A0000u; // 801890F0
  c->r[4]=0u+0x801A0000u; // 801890F4
  c->r[3]=0u+0x801A0000u; // 801890F8
  c->r[6]=c->r[6]+0xFFFFDB54u; // 801890FC
  c->r[5]=c->r[5]+0xFFFFDA38u; // 80189100
  c->r[4]=c->r[4]+0xFFFFDA40u; // 80189104
  c->r[3]=c->r[3]+0xFFFFDAE4u; // 80189108
  W32(c->r[31]+0x00000038u,c->r[6]); // 8018910C
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 80189110
  W32(c->r[31]+0x00000040u,c->r[4]); // 80189114
  W32(c->r[31]+0x00000044u,c->r[3]); // 80189118
L_8018911C:;
  c->r[0]=0u+0x00000000u; // 8018911C
  W32(c->r[31]+0x00000048u,c->r[0]); // 80189120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80189124
  c->r[0]=R32(c->r[1]+0x00000014u); // 80189128
  c->lr=c->r[0]; // 8018912C
  c->r[1]=c->r[1]+0x00000010u; // 80189130
  return; // 80189134
}

// __close_all
void f_80189138(Ctx* __restrict c) {
  trace_call(0x80189138u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189138
  c->r[0]=c->lr; // 8018913C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80189140
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80189144
  c->r[31]=0u+0x00000000u; // 80189148
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018914C
  c->r[30]=0u+0x00000003u; // 80189150
  W32(c->r[1]+0x00000014u,c->r[29]); // 80189154
  c->r[29]=0u+0x80330000u; // 80189158
  c->r[29]=c->r[29]+0x00000258u; // 8018915C
  goto L_801891B8; // 80189160
L_80189164:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80189164
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 80189168
  if (crb(c,2)) { goto L_80189178; } // 8018916C
  c->r[3]=c->r[29]|c->r[29]; // 80189170
  c->lr=0x80189178u; f_8018B7E8(c); // 80189174
L_80189178:;
  c->r[3]=c->r[29]|c->r[29]; // 80189178
  c->r[29]=R32(c->r[29]+0x0000004Cu); // 8018917C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80189180
  cmps(c,0,(int32_t)c->r[0],0); // 80189184
  if (crb(c,2)) { goto L_80189194; } // 80189188
  c->lr=0x80189190u; f_80188EA4(c); // 8018918C
  goto L_801891B8; // 80189190
L_80189194:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80189194
  cmps(c,0,(int32_t)c->r[29],0); // 80189198
  c->r[0]=(rotl(c->r[30],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 8018919C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801891A0
  if (crb(c,2)) { goto L_801891B8; } // 801891A4
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 801891A8
  cmps(c,0,(int32_t)c->r[0],0); // 801891AC
  if (crb(c,2)) { goto L_801891B8; } // 801891B0
  W32(c->r[3]+0x0000004Cu,c->r[31]); // 801891B4
L_801891B8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801891B8
  if (!crb(c,2)) { IRQCHK(c); goto L_80189164; } // 801891BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801891C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801891C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801891C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801891CC
  c->lr=c->r[0]; // 801891D0
  c->r[1]=c->r[1]+0x00000020u; // 801891D4
  return; // 801891D8
}

// __flush_line_buffered_output_files
void f_801891DC(Ctx* __restrict c) {
  trace_call(0x801891DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801891DC
  c->r[0]=c->lr; // 801891E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801891E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801891E8
  c->r[31]=0u+0x00000000u; // 801891EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801891F0
  c->r[30]=0u+0x80330000u; // 801891F4
  c->r[30]=c->r[30]+0x00000258u; // 801891F8
  goto L_8018923C; // 801891FC
L_80189200:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80189200
  c->r[0]=rotl(c->r[3],10)&0x00000007u; cr0(c,c->r[0]); // 80189204
  if (crb(c,2)) { goto L_80189238; } // 80189208
  c->r[0]=rotl(c->r[3],7)&0x00000001u; cr0(c,c->r[0]); // 8018920C
  if (crb(c,2)) { goto L_80189238; } // 80189210
  c->r[0]=R32(c->r[30]+0x00000008u); // 80189214
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 80189218
  cmpu(c,0,c->r[0],0x00000001u); // 8018921C
  if (!crb(c,2)) { goto L_80189238; } // 80189220
  c->r[3]=c->r[30]|c->r[30]; // 80189224
  c->lr=0x8018922Cu; f_8018B8A4(c); // 80189228
  cmps(c,0,(int32_t)c->r[3],0); // 8018922C
  if (crb(c,2)) { goto L_80189238; } // 80189230
  c->r[31]=0u+0xFFFFFFFFu; // 80189234
L_80189238:;
  c->r[30]=R32(c->r[30]+0x0000004Cu); // 80189238
L_8018923C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018923C
  if (!crb(c,2)) { IRQCHK(c); goto L_80189200; } // 80189240
  c->r[3]=c->r[31]|c->r[31]; // 80189244
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80189248
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018924C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80189250
  c->lr=c->r[0]; // 80189254
  c->r[1]=c->r[1]+0x00000010u; // 80189258
  return; // 8018925C
}

// __flush_all
void f_80189260(Ctx* __restrict c) {
  trace_call(0x80189260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189260
  c->r[0]=c->lr; // 80189264
  W32(c->r[1]+0x00000014u,c->r[0]); // 80189268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018926C
  c->r[31]=0u+0x00000000u; // 80189270
  W32(c->r[1]+0x00000008u,c->r[30]); // 80189274
  c->r[30]=0u+0x80330000u; // 80189278
  c->r[30]=c->r[30]+0x00000258u; // 8018927C
  goto L_801892A8; // 80189280
L_80189284:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80189284
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 80189288
  if (crb(c,2)) { goto L_801892A4; } // 8018928C
  c->r[3]=c->r[30]|c->r[30]; // 80189290
  c->lr=0x80189298u; f_8018B8A4(c); // 80189294
  cmps(c,0,(int32_t)c->r[3],0); // 80189298
  if (crb(c,2)) { goto L_801892A4; } // 8018929C
  c->r[31]=0u+0xFFFFFFFFu; // 801892A0
L_801892A4:;
  c->r[30]=R32(c->r[30]+0x0000004Cu); // 801892A4
L_801892A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801892A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80189284; } // 801892AC
  c->r[3]=c->r[31]|c->r[31]; // 801892B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801892B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801892B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801892BC
  c->lr=c->r[0]; // 801892C0
  c->r[1]=c->r[1]+0x00000010u; // 801892C4
  return; // 801892C8
}

// __ull2dec
void f_801892CC(Ctx* __restrict c) {
  trace_call(0x801892CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801892CC
  c->r[0]=c->lr; // 801892D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801892D4
  c->r[0]=0u+0x00000000u; // 801892D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801892DC
  c->r[31]=c->r[5]|c->r[5]; // 801892E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801892E4
  c->r[30]=c->r[6]|c->r[6]; // 801892E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801892EC
  c->r[29]=c->r[3]|c->r[3]; // 801892F0
  W8(c->r[3]+0x00000000u,c->r[0]); // 801892F4
  W8(c->r[3]+0x00000004u,c->r[0]); // 801892F8
  goto L_80189344; // 801892FC
L_80189300:;
  c->r[3]=c->r[31]|c->r[31]; // 80189300
  c->r[4]=c->r[30]|c->r[30]; // 80189304
  c->r[6]=0u+0x0000000Au; // 80189308
  c->r[5]=0u+0x00000000u; // 8018930C
  c->lr=0x80189314u; f_8018615C(c); // 80189310
  c->r[8]=R8(c->r[29]+0x00000004u); // 80189314
  c->r[3]=c->r[31]|c->r[31]; // 80189318
  c->r[6]=0u+0x0000000Au; // 8018931C
  c->r[5]=0u+0x00000000u; // 80189320
  c->r[7]=c->r[29]+c->r[8]; // 80189324
  c->r[0]=c->r[8]+0x00000001u; // 80189328
  W8(c->r[7]+0x00000005u,c->r[4]); // 8018932C
  c->r[4]=c->r[30]|c->r[30]; // 80189330
  W8(c->r[29]+0x00000004u,c->r[0]); // 80189334
  c->lr=0x8018933Cu; f_80185F38(c); // 80189338
  c->r[30]=c->r[4]|c->r[4]; // 8018933C
  c->r[31]=c->r[3]|c->r[3]; // 80189340
L_80189344:;
  c->r[0]=c->r[30]|c->r[31]; cr0(c,c->r[0]); // 80189344
  if (!crb(c,2)) { IRQCHK(c); goto L_80189300; } // 80189348
  c->r[0]=R8(c->r[29]+0x00000004u); // 8018934C
  c->r[4]=c->r[29]+0x00000005u; // 80189350
  c->r[3]=c->r[29]+c->r[0]; // 80189354
  c->r[3]=c->r[3]+0x00000005u; // 80189358
  goto L_80189374; // 8018935C
L_80189360:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 80189360
  c->r[0]=R8(c->r[3]+0x00000000u); // 80189364
  W8(c->r[4]+0x00000000u,c->r[0]); // 80189368
  c->r[4]=c->r[4]+0x00000001u; // 8018936C
  W8(c->r[3]+0x00000000u,c->r[5]); // 80189370
L_80189374:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80189374
  cmpu(c,0,c->r[4],c->r[3]); // 80189378
  if (crb(c,0)) { IRQCHK(c); goto L_80189360; } // 8018937C
  c->r[3]=R8(c->r[29]+0x00000004u); // 80189380
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80189384
  W16(c->r[29]+0x00000002u,c->r[0]); // 80189388
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018938C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80189390
  c->r[29]=R32(c->r[1]+0x00000014u); // 80189394
  c->r[0]=R32(c->r[1]+0x00000024u); // 80189398
  c->lr=c->r[0]; // 8018939C
  c->r[1]=c->r[1]+0x00000020u; // 801893A0
  return; // 801893A4
}

// fn_801893A8
void f_801893A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801893A8
  c->r[6]=0u+0xCCCD0000u; // 801893AC
  c->r[8]=R8(c->r[4]+0x00000004u); // 801893B0
  c->r[9]=c->r[6]+0xFFFFCCCDu; // 801893B4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801893B8
  c->r[0]=c->r[1]+0x00000008u; // 801893BC
  c->r[7]=R8(c->r[5]+0x00000004u); // 801893C0
  c->r[11]=0u+0x00000000u; // 801893C4
  W32(c->r[1]+0x00000058u,c->r[30]); // 801893C8
  c->r[12]=c->r[8]+c->r[7]; // 801893CC
  W32(c->r[1]+0x00000054u,c->r[29]); // 801893D0
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 801893D4
  c->r[6]=c->r[0]+c->r[12]; // 801893D8
  c->r[6]=c->r[6]+0x00000001u; // 801893DC
  W8(c->r[3]+0x00000000u,c->r[11]); // 801893E0
  c->r[0]=c->r[6]|c->r[6]; // 801893E4
  goto L_80189518; // 801893E8
L_801893EC:;
  c->r[7]=R8(c->r[5]+0x00000004u); // 801893EC
  c->r[31]=c->r[7]+0xFFFFFFFFu; // 801893F0
  c->r[7]=c->r[12]-c->r[31]; // 801893F4
  c->r[30]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 801893F8
  if (!crb(c,0)) { goto L_80189408; } // 801893FC
  c->r[30]=0u+0x00000000u; // 80189400
  c->r[31]=c->r[12]+0xFFFFFFFFu; // 80189404
L_80189408:;
  c->r[7]=R8(c->r[4]+0x00000004u); // 80189408
  c->r[8]=c->r[5]+c->r[31]; // 8018940C
  c->r[31]=c->r[31]+0x00000001u; // 80189410
  c->r[10]=c->r[4]+c->r[30]; // 80189414
  c->r[7]=c->r[7]-c->r[30]; // 80189418
  c->r[29]=c->r[8]+0x00000005u; // 8018941C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[7]); // 80189420
  c->r[30]=c->r[10]+0x00000005u; // 80189424
  if (!crb(c,1)) { goto L_80189430; } // 80189428
  c->r[31]=c->r[7]|c->r[7]; // 8018942C
L_80189430:;
  cmps(c,0,(int32_t)c->r[31],0); // 80189430
  if (!crb(c,1)) { goto L_801894F8; } // 80189434
  c->r[7]=rotl(c->r[31],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 80189438
  c->ctr=c->r[7]; // 8018943C
  if (crb(c,2)) { goto L_801894D8; } // 80189440
L_80189444:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 80189444
  c->r[8]=R8(c->r[29]+0x00000000u); // 80189448
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 8018944C
  c->r[10]=R8(c->r[30]+0x00000001u); // 80189450
  c->r[8]=R8(c->r[29]+0xFFFFFFFFu); // 80189454
  c->r[11]=c->r[11]+c->r[7]; // 80189458
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 8018945C
  c->r[10]=R8(c->r[30]+0x00000002u); // 80189460
  c->r[8]=R8(c->r[29]+0xFFFFFFFEu); // 80189464
  c->r[11]=c->r[11]+c->r[7]; // 80189468
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 8018946C
  c->r[10]=R8(c->r[30]+0x00000003u); // 80189470
  c->r[8]=R8(c->r[29]+0xFFFFFFFDu); // 80189474
  c->r[11]=c->r[11]+c->r[7]; // 80189478
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 8018947C
  c->r[10]=R8(c->r[30]+0x00000004u); // 80189480
  c->r[8]=R8(c->r[29]+0xFFFFFFFCu); // 80189484
  c->r[11]=c->r[11]+c->r[7]; // 80189488
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 8018948C
  c->r[10]=R8(c->r[30]+0x00000005u); // 80189490
  c->r[8]=R8(c->r[29]+0xFFFFFFFBu); // 80189494
  c->r[11]=c->r[11]+c->r[7]; // 80189498
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 8018949C
  c->r[10]=R8(c->r[30]+0x00000006u); // 801894A0
  c->r[8]=R8(c->r[29]+0xFFFFFFFAu); // 801894A4
  c->r[11]=c->r[11]+c->r[7]; // 801894A8
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801894AC
  c->r[10]=R8(c->r[30]+0x00000007u); // 801894B0
  c->r[8]=R8(c->r[29]+0xFFFFFFF9u); // 801894B4
  c->r[30]=c->r[30]+0x00000008u; // 801894B8
  c->r[29]=c->r[29]+0xFFFFFFF8u; // 801894BC
  c->r[11]=c->r[11]+c->r[7]; // 801894C0
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801894C4
  c->r[11]=c->r[11]+c->r[7]; // 801894C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189444; } // 801894CC
  c->r[31]=c->r[31]&0x00000007u; cr0(c,c->r[31]); // 801894D0
  if (crb(c,2)) { goto L_801894F8; } // 801894D4
L_801894D8:;
  c->ctr=c->r[31]; // 801894D8
L_801894DC:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 801894DC
  c->r[30]=c->r[30]+0x00000001u; // 801894E0
  c->r[8]=R8(c->r[29]+0x00000000u); // 801894E4
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 801894E8
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801894EC
  c->r[11]=c->r[11]+c->r[7]; // 801894F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801894DC; } // 801894F4
L_801894F8:;
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[11])>>32); // 801894F8
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 801894FC
  c->r[7]=c->r[8]|c->r[8]; // 80189500
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 80189504
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)10); // 80189508
  c->r[8]=c->r[11]-c->r[8]; // 8018950C
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[8]); c->r[6]=ea;} // 80189510
  c->r[11]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80189514
L_80189518:;
  cmps(c,0,(int32_t)c->r[12],0); // 80189518
  if (crb(c,1)) { IRQCHK(c); goto L_801893EC; } // 8018951C
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80189520
  cmps(c,0,(int32_t)c->r[11],0); // 80189524
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 80189528
  c->r[4]=c->r[7]+c->r[4]; // 8018952C
  W16(c->r[3]+0x00000002u,c->r[4]); // 80189530
  if (crb(c,2)) { goto L_80189548; } // 80189534
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[11]); c->r[6]=ea;} // 80189538
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 8018953C
  c->r[4]=c->r[4]+0x00000001u; // 80189540
  W16(c->r[3]+0x00000002u,c->r[4]); // 80189544
L_80189548:;
  c->r[7]=0u+0x00000000u; // 80189548
  goto L_80189564; // 8018954C
L_80189550:;
  c->r[4]=c->r[3]+c->r[7]; // 80189550
  c->r[5]=R8(c->r[6]+0x00000000u); // 80189554
  W8(c->r[4]+0x00000005u,c->r[5]); // 80189558
  c->r[7]=c->r[7]+0x00000001u; // 8018955C
  c->r[6]=c->r[6]+0x00000001u; // 80189560
L_80189564:;
  cmps(c,0,(int32_t)c->r[7],36); // 80189564
  if (!crb(c,0)) { goto L_80189574; } // 80189568
  cmpu(c,0,c->r[6],c->r[0]); // 8018956C
  if (crb(c,0)) { IRQCHK(c); goto L_80189550; } // 80189570
L_80189574:;
  cmpu(c,0,c->r[6],c->r[0]); // 80189574
  W8(c->r[3]+0x00000004u,c->r[7]); // 80189578
  if (!crb(c,0)) { goto L_8018961C; } // 8018957C
  c->r[4]=R8(c->r[6]+0x00000000u); // 80189580
  cmpu(c,0,c->r[4],0x00000005u); // 80189584
  if (crb(c,0)) { goto L_8018961C; } // 80189588
  if (!crb(c,2)) { goto L_801895C4; } // 8018958C
  c->r[5]=c->r[6]+0x00000001u; // 80189590
  c->r[4]=c->r[0]-c->r[5]; // 80189594
  c->ctr=c->r[4]; // 80189598
  cmpu(c,0,c->r[5],c->r[0]); // 8018959C
  if (!crb(c,0)) { goto L_801895B8; } // 801895A0
L_801895A4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801895A4
  cmps(c,0,(int32_t)c->r[0],0); // 801895A8
  if (!crb(c,2)) { goto L_801895C4; } // 801895AC
  c->r[5]=c->r[5]+0x00000001u; // 801895B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801895A4; } // 801895B4
L_801895B8:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 801895B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801895BC
  if (crb(c,2)) { goto L_8018961C; } // 801895C0
L_801895C4:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801895C4
  c->r[6]=c->r[3]+0x00000005u; // 801895C8
  c->r[0]=0u+0x00000000u; // 801895CC
  c->r[5]=c->r[6]+c->r[4]; // 801895D0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801895D4
L_801895D8:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801895D8
  cmpu(c,0,c->r[4],0x00000009u); // 801895DC
  if (!crb(c,0)) { goto L_801895F0; } // 801895E0
  c->r[0]=c->r[4]+0x00000001u; // 801895E4
  W8(c->r[5]+0x00000000u,c->r[0]); // 801895E8
  goto L_8018961C; // 801895EC
L_801895F0:;
  cmpu(c,0,c->r[5],c->r[6]); // 801895F0
  if (!crb(c,2)) { goto L_80189610; } // 801895F4
  c->r[0]=0u+0x00000001u; // 801895F8
  W8(c->r[5]+0x00000000u,c->r[0]); // 801895FC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80189600
  c->r[0]=c->r[4]+0x00000001u; // 80189604
  W16(c->r[3]+0x00000002u,c->r[0]); // 80189608
  goto L_8018961C; // 8018960C
L_80189610:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 80189610
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80189614
  IRQCHK(c); goto L_801895D8; // 80189618
L_8018961C:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8018961C
  c->r[30]=R32(c->r[1]+0x00000058u); // 80189620
  c->r[29]=R32(c->r[1]+0x00000054u); // 80189624
  c->r[1]=c->r[1]+0x00000060u; // 80189628
  return; // 8018962C
}

// __str2dec
void f_80189630(Ctx* __restrict c) {
  trace_call(0x80189630u);
  c->r[0]=0u+0x00000000u; // 80189630
  W16(c->r[3]+0x00000002u,c->r[5]); // 80189634
  c->r[7]=0u+0x00000000u; // 80189638
  W8(c->r[3]+0x00000000u,c->r[0]); // 8018963C
  goto L_8018965C; // 80189640
L_80189644:;
  c->r[6]=R8(c->r[4]+0x00000000u); // 80189644
  c->r[5]=c->r[3]+c->r[7]; // 80189648
  c->r[4]=c->r[4]+0x00000001u; // 8018964C
  c->r[7]=c->r[7]+0x00000001u; // 80189650
  c->r[0]=c->r[6]+0xFFFFFFD0u; // 80189654
  W8(c->r[5]+0x00000005u,c->r[0]); // 80189658
L_8018965C:;
  cmps(c,0,(int32_t)c->r[7],36); // 8018965C
  if (!crb(c,0)) { goto L_80189670; } // 80189660
  c->r[0]=R8(c->r[4]+0x00000000u); // 80189664
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80189668
  if (!crb(c,2)) { IRQCHK(c); goto L_80189644; } // 8018966C
L_80189670:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80189670
  W8(c->r[3]+0x00000004u,c->r[7]); // 80189674
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80189678
  if (crb(c,2)) return; // 8018967C
  cmps(c,0,(int32_t)c->r[0],5); // 80189680
  if (crb(c,0)) return; // 80189684
  if (crb(c,1)) { goto L_801896C0; } // 80189688
  c->r[5]=c->r[4]+0x00000001u; // 8018968C
  goto L_801896A4; // 80189690
L_80189694:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80189694
  cmps(c,0,(int32_t)c->r[0],48); // 80189698
  if (!crb(c,2)) { goto L_801896C0; } // 8018969C
  c->r[5]=c->r[5]+0x00000001u; // 801896A0
L_801896A4:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801896A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801896A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80189694; } // 801896AC
  c->r[4]=c->r[7]+c->r[3]; // 801896B0
  c->r[0]=R8(c->r[4]+0x00000004u); // 801896B4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801896B8
  if (crb(c,2)) return; // 801896BC
L_801896C0:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801896C0
  c->r[6]=c->r[3]+0x00000005u; // 801896C4
  c->r[0]=0u+0x00000000u; // 801896C8
  c->r[5]=c->r[6]+c->r[4]; // 801896CC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801896D0
L_801896D4:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801896D4
  cmpu(c,0,c->r[4],0x00000009u); // 801896D8
  if (!crb(c,0)) { goto L_801896EC; } // 801896DC
  c->r[0]=c->r[4]+0x00000001u; // 801896E0
  W8(c->r[5]+0x00000000u,c->r[0]); // 801896E4
  return; // 801896E8
L_801896EC:;
  cmpu(c,0,c->r[5],c->r[6]); // 801896EC
  if (!crb(c,2)) { goto L_8018970C; } // 801896F0
  c->r[0]=0u+0x00000001u; // 801896F4
  W8(c->r[5]+0x00000000u,c->r[0]); // 801896F8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801896FC
  c->r[0]=c->r[4]+0x00000001u; // 80189700
  W16(c->r[3]+0x00000002u,c->r[0]); // 80189704
  return; // 80189708
L_8018970C:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 8018970C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80189710
  IRQCHK(c); goto L_801896D4; // 80189714
  return; // 80189718
}

// fn_8018971C
void f_8018971C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018971C
  c->r[0]=c->lr; // 80189720
  W32(c->r[1]+0x00000074u,c->r[0]); // 80189724
  c->r[0]=c->r[4]+0x00000040u; // 80189728
  cmpu(c,0,c->r[0],0x00000048u); // 8018972C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80189730
  c->r[31]=c->r[3]|c->r[3]; // 80189734
  W32(c->r[1]+0x00000068u,c->r[30]); // 80189738
  c->r[30]=c->r[4]|c->r[4]; // 8018973C
  if (crb(c,1)) { goto L_80189950; } // 80189740
  c->r[5]=0u+0x80330000u; // 80189744
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80189748
  c->r[5]=c->r[5]+0x00000398u; // 8018974C
  c->r[5]=R32(c->r[5]+c->r[0]); // 80189750
  c->ctr=c->r[5]; // 80189754
  if (true) { switch (c->ctr) { case 0x8018975Cu: goto L_8018975C; case 0x80189770u: goto L_80189770; case 0x80189788u: goto L_80189788; case 0x801897A0u: goto L_801897A0; case 0x801897B8u: goto L_801897B8; case 0x801897D0u: goto L_801897D0; case 0x801897E8u: goto L_801897E8; case 0x80189800u: goto L_80189800; case 0x80189818u: goto L_80189818; case 0x80189830u: goto L_80189830; case 0x80189848u: goto L_80189848; case 0x80189860u: goto L_80189860; case 0x80189878u: goto L_80189878; case 0x80189890u: goto L_80189890; case 0x801898A8u: goto L_801898A8; case 0x801898C0u: goto L_801898C0; case 0x801898D8u: goto L_801898D8; case 0x801898F0u: goto L_801898F0; case 0x80189908u: goto L_80189908; case 0x80189920u: goto L_80189920; case 0x80189938u: goto L_80189938; case 0x80189950u: goto L_80189950; default: break; } dispatch(c,c->ctr); return; } // 80189758
L_8018975C:;
  c->r[4]=0u+0x802E0000u; // 8018975C
  c->r[5]=0u+0xFFFFFFECu; // 80189760
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189764
  c->lr=0x8018976Cu; f_80189630(c); // 80189768
  goto L_80189A20; // 8018976C
L_80189770:;
  c->r[4]=0u+0x802E0000u; // 80189770
  c->r[5]=0u+0xFFFFFFF0u; // 80189774
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189778
  c->r[4]=c->r[4]+0x0000002Eu; // 8018977C
  c->lr=0x80189784u; f_80189630(c); // 80189780
  goto L_80189A20; // 80189784
L_80189788:;
  c->r[4]=0u+0x802E0000u; // 80189788
  c->r[5]=0u+0xFFFFFFF6u; // 8018978C
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189790
  c->r[4]=c->r[4]+0x00000055u; // 80189794
  c->lr=0x8018979Cu; f_80189630(c); // 80189798
  goto L_80189A20; // 8018979C
L_801897A0:;
  c->r[4]=0u+0x802E0000u; // 801897A0
  c->r[5]=0u+0xFFFFFFFBu; // 801897A4
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801897A8
  c->r[4]=c->r[4]+0x0000006Du; // 801897AC
  c->lr=0x801897B4u; f_80189630(c); // 801897B0
  goto L_80189A20; // 801897B4
L_801897B8:;
  c->r[4]=0u+0x802E0000u; // 801897B8
  c->r[5]=0u+0xFFFFFFFDu; // 801897BC
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801897C0
  c->r[4]=c->r[4]+0x0000007Au; // 801897C4
  c->lr=0x801897CCu; f_80189630(c); // 801897C8
  goto L_80189A20; // 801897CC
L_801897D0:;
  c->r[4]=0u+0x802E0000u; // 801897D0
  c->r[5]=0u+0xFFFFFFFDu; // 801897D4
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801897D8
  c->r[4]=c->r[4]+0x00000081u; // 801897DC
  c->lr=0x801897E4u; f_80189630(c); // 801897E0
  goto L_80189A20; // 801897E4
L_801897E8:;
  c->r[4]=0u+0x802E0000u; // 801897E8
  c->r[5]=0u+0xFFFFFFFEu; // 801897EC
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801897F0
  c->r[4]=c->r[4]+0x00000087u; // 801897F4
  c->lr=0x801897FCu; f_80189630(c); // 801897F8
  goto L_80189A20; // 801897FC
L_80189800:;
  c->r[4]=0u+0x802E0000u; // 80189800
  c->r[5]=0u+0xFFFFFFFEu; // 80189804
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189808
  c->r[4]=c->r[4]+0x0000008Du; // 8018980C
  c->lr=0x80189814u; f_80189630(c); // 80189810
  goto L_80189A20; // 80189814
L_80189818:;
  c->r[4]=0u+0x802E0000u; // 80189818
  c->r[5]=0u+0xFFFFFFFEu; // 8018981C
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189820
  c->r[4]=c->r[4]+0x00000092u; // 80189824
  c->lr=0x8018982Cu; f_80189630(c); // 80189828
  goto L_80189A20; // 8018982C
L_80189830:;
  c->r[4]=0u+0x802E0000u; // 80189830
  c->r[5]=0u+0xFFFFFFFFu; // 80189834
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189838
  c->r[4]=c->r[4]+0x00000096u; // 8018983C
  c->lr=0x80189844u; f_80189630(c); // 80189840
  goto L_80189A20; // 80189844
L_80189848:;
  c->r[4]=0u+0x802E0000u; // 80189848
  c->r[5]=0u+0xFFFFFFFFu; // 8018984C
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189850
  c->r[4]=c->r[4]+0x0000009Au; // 80189854
  c->lr=0x8018985Cu; f_80189630(c); // 80189858
  goto L_80189A20; // 8018985C
L_80189860:;
  c->r[4]=0u+0x802E0000u; // 80189860
  c->r[5]=0u+0xFFFFFFFFu; // 80189864
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189868
  c->r[4]=c->r[4]+0x0000009Du; // 8018986C
  c->lr=0x80189874u; f_80189630(c); // 80189870
  goto L_80189A20; // 80189874
L_80189878:;
  c->r[4]=0u+0x802E0000u; // 80189878
  c->r[5]=0u+0x00000000u; // 8018987C
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189880
  c->r[4]=c->r[4]+0x0000009Fu; // 80189884
  c->lr=0x8018988Cu; f_80189630(c); // 80189888
  goto L_80189A20; // 8018988C
L_80189890:;
  c->r[4]=0u+0x802E0000u; // 80189890
  c->r[5]=0u+0x00000000u; // 80189894
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189898
  c->r[4]=c->r[4]+0x000000A1u; // 8018989C
  c->lr=0x801898A4u; f_80189630(c); // 801898A0
  goto L_80189A20; // 801898A4
L_801898A8:;
  c->r[4]=0u+0x802E0000u; // 801898A8
  c->r[5]=0u+0x00000000u; // 801898AC
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801898B0
  c->r[4]=c->r[4]+0x000000A3u; // 801898B4
  c->lr=0x801898BCu; f_80189630(c); // 801898B8
  goto L_80189A20; // 801898BC
L_801898C0:;
  c->r[4]=0u+0x802E0000u; // 801898C0
  c->r[5]=0u+0x00000000u; // 801898C4
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801898C8
  c->r[4]=c->r[4]+0x000000A5u; // 801898CC
  c->lr=0x801898D4u; f_80189630(c); // 801898D0
  goto L_80189A20; // 801898D4
L_801898D8:;
  c->r[4]=0u+0x802E0000u; // 801898D8
  c->r[5]=0u+0x00000001u; // 801898DC
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801898E0
  c->r[4]=c->r[4]+0x000000A7u; // 801898E4
  c->lr=0x801898ECu; f_80189630(c); // 801898E8
  goto L_80189A20; // 801898EC
L_801898F0:;
  c->r[4]=0u+0x802E0000u; // 801898F0
  c->r[5]=0u+0x00000001u; // 801898F4
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801898F8
  c->r[4]=c->r[4]+0x000000AAu; // 801898FC
  c->lr=0x80189904u; f_80189630(c); // 80189900
  goto L_80189A20; // 80189904
L_80189908:;
  c->r[4]=0u+0x802E0000u; // 80189908
  c->r[5]=0u+0x00000001u; // 8018990C
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189910
  c->r[4]=c->r[4]+0x000000ADu; // 80189914
  c->lr=0x8018991Cu; f_80189630(c); // 80189918
  goto L_80189A20; // 8018991C
L_80189920:;
  c->r[4]=0u+0x802E0000u; // 80189920
  c->r[5]=0u+0x00000002u; // 80189924
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189928
  c->r[4]=c->r[4]+0x000000B0u; // 8018992C
  c->lr=0x80189934u; f_80189630(c); // 80189930
  goto L_80189A20; // 80189934
L_80189938:;
  c->r[4]=0u+0x802E0000u; // 80189938
  c->r[5]=0u+0x00000002u; // 8018993C
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189940
  c->r[4]=c->r[4]+0x000000B4u; // 80189944
  c->lr=0x8018994Cu; f_80189630(c); // 80189948
  goto L_80189A20; // 8018994C
L_80189950:;
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80189950
  c->r[3]=c->r[1]+0x00000034u; // 80189954
  c->r[0]=c->r[0]+c->r[4]; // 80189958
  c->r[4]=sraw(c,c->r[0],1); // 8018995C
  c->lr=0x80189964u; f_8018971C(c); // 80189960
  c->r[4]=c->r[1]+0x00000034u; // 80189964
  c->r[3]=c->r[31]|c->r[31]; // 80189968
  c->r[5]=c->r[4]|c->r[4]; // 8018996C
  c->lr=0x80189974u; f_801893A8(c); // 80189970
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80189974
  if (crb(c,2)) { goto L_80189A20; } // 80189978
  c->r[3]=R32(c->r[31]+0x00000000u); // 8018997C
  cmps(c,0,(int32_t)c->r[30],0); // 80189980
  c->r[0]=R32(c->r[31]+0x00000004u); // 80189984
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80189988
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018998C
  c->r[3]=R32(c->r[31]+0x00000008u); // 80189990
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80189994
  W32(c->r[1]+0x00000014u,c->r[0]); // 80189998
  W32(c->r[1]+0x00000010u,c->r[3]); // 8018999C
  c->r[3]=R32(c->r[31]+0x00000010u); // 801899A0
  c->r[0]=R32(c->r[31]+0x00000014u); // 801899A4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801899A8
  W32(c->r[1]+0x00000018u,c->r[3]); // 801899AC
  c->r[3]=R32(c->r[31]+0x00000018u); // 801899B0
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801899B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801899B8
  W32(c->r[1]+0x00000020u,c->r[3]); // 801899BC
  c->r[3]=R32(c->r[31]+0x00000020u); // 801899C0
  c->r[0]=R32(c->r[31]+0x00000024u); // 801899C4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801899C8
  W32(c->r[1]+0x00000028u,c->r[3]); // 801899CC
  c->r[0]=R16(c->r[31]+0x00000028u); // 801899D0
  W16(c->r[1]+0x00000030u,c->r[0]); // 801899D4
  if (!crb(c,1)) { goto L_801899F8; } // 801899D8
  c->r[4]=0u+0x802E0000u; // 801899DC
  c->r[3]=c->r[1]+0x00000034u; // 801899E0
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801899E4
  c->r[5]=0u+0x00000000u; // 801899E8
  c->r[4]=c->r[4]+0x000000A1u; // 801899EC
  c->lr=0x801899F4u; f_80189630(c); // 801899F0
  goto L_80189A10; // 801899F4
L_801899F8:;
  c->r[4]=0u+0x802E0000u; // 801899F8
  c->r[3]=c->r[1]+0x00000034u; // 801899FC
  c->r[4]=c->r[4]+0xFFFFFD60u; // 80189A00
  c->r[5]=0u+0xFFFFFFFFu; // 80189A04
  c->r[4]=c->r[4]+0x0000009Du; // 80189A08
  c->lr=0x80189A10u; f_80189630(c); // 80189A0C
L_80189A10:;
  c->r[3]=c->r[31]|c->r[31]; // 80189A10
  c->r[4]=c->r[1]+0x00000008u; // 80189A14
  c->r[5]=c->r[1]+0x00000034u; // 80189A18
  c->lr=0x80189A20u; f_801893A8(c); // 80189A1C
L_80189A20:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80189A20
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80189A24
  c->r[30]=R32(c->r[1]+0x00000068u); // 80189A28
  c->lr=c->r[0]; // 80189A2C
  c->r[1]=c->r[1]+0x00000070u; // 80189A30
  return; // 80189A34
}

// __equals_dec
void f_80189A38(Ctx* __restrict c) {
  trace_call(0x80189A38u);
  c->r[5]=R8(c->r[3]+0x00000005u); // 80189A38
  cmps(c,0,(int32_t)c->r[5],0); // 80189A3C
  if (!crb(c,2)) { goto L_80189A54; } // 80189A40
  c->r[0]=R8(c->r[4]+0x00000005u); // 80189A44
  c->r[0]=cntlz(c->r[0]); // 80189A48
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80189A4C
  return; // 80189A50
L_80189A54:;
  c->r[0]=R8(c->r[4]+0x00000005u); // 80189A54
  cmps(c,0,(int32_t)c->r[0],0); // 80189A58
  if (!crb(c,2)) { goto L_80189A6C; } // 80189A5C
  c->r[0]=cntlz(c->r[5]); // 80189A60
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80189A64
  return; // 80189A68
L_80189A6C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80189A6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80189A70
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80189A74
  if (!crb(c,2)) { goto L_80189B14; } // 80189A78
  c->r[7]=R8(c->r[3]+0x00000004u); // 80189A7C
  c->r[0]=R8(c->r[4]+0x00000004u); // 80189A80
  c->r[9]=c->r[7]|c->r[7]; // 80189A84
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80189A88
  if (!crb(c,1)) { goto L_80189A94; } // 80189A8C
  c->r[9]=c->r[0]|c->r[0]; // 80189A90
L_80189A94:;
  c->r[8]=0u+0x00000000u; // 80189A94
  c->ctr=c->r[9]; // 80189A98
  cmps(c,0,(int32_t)c->r[9],0); // 80189A9C
  if (!crb(c,1)) { goto L_80189ACC; } // 80189AA0
L_80189AA4:;
  c->r[6]=c->r[3]+c->r[8]; // 80189AA4
  c->r[5]=c->r[4]+c->r[8]; // 80189AA8
  c->r[6]=R8(c->r[6]+0x00000005u); // 80189AAC
  c->r[0]=R8(c->r[5]+0x00000005u); // 80189AB0
  cmpu(c,0,c->r[6],c->r[0]); // 80189AB4
  if (crb(c,2)) { goto L_80189AC4; } // 80189AB8
  c->r[3]=0u+0x00000000u; // 80189ABC
  return; // 80189AC0
L_80189AC4:;
  c->r[8]=c->r[8]+0x00000001u; // 80189AC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189AA4; } // 80189AC8
L_80189ACC:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 80189ACC
  if (!crb(c,2)) { goto L_80189AD8; } // 80189AD0
  c->r[3]=c->r[4]|c->r[4]; // 80189AD4
L_80189AD8:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 80189AD8
  c->r[0]=c->r[4]-c->r[8]; // 80189ADC
  c->ctr=c->r[0]; // 80189AE0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 80189AE4
  if (!crb(c,0)) { goto L_80189B0C; } // 80189AE8
L_80189AEC:;
  c->r[4]=c->r[3]+c->r[8]; // 80189AEC
  c->r[0]=R8(c->r[4]+0x00000005u); // 80189AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80189AF4
  if (crb(c,2)) { goto L_80189B04; } // 80189AF8
  c->r[3]=0u+0x00000000u; // 80189AFC
  return; // 80189B00
L_80189B04:;
  c->r[8]=c->r[8]+0x00000001u; // 80189B04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189AEC; } // 80189B08
L_80189B0C:;
  c->r[3]=0u+0x00000001u; // 80189B0C
  return; // 80189B10
L_80189B14:;
  c->r[3]=0u+0x00000000u; // 80189B14
  return; // 80189B18
}

// __less_dec
void f_80189B1C(Ctx* __restrict c) {
  trace_call(0x80189B1Cu);
  c->r[0]=R8(c->r[3]+0x00000005u); // 80189B1C
  cmps(c,0,(int32_t)c->r[0],0); // 80189B20
  if (!crb(c,2)) { goto L_80189B3C; } // 80189B24
  c->r[3]=R8(c->r[4]+0x00000005u); // 80189B28
  c->r[0]=0u-c->r[3]; // 80189B2C
  c->r[0]=c->r[0]|c->r[3]; // 80189B30
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80189B34
  return; // 80189B38
L_80189B3C:;
  c->r[0]=R8(c->r[4]+0x00000005u); // 80189B3C
  cmps(c,0,(int32_t)c->r[0],0); // 80189B40
  if (!crb(c,2)) { goto L_80189B50; } // 80189B44
  c->r[3]=0u+0x00000000u; // 80189B48
  return; // 80189B4C
L_80189B50:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80189B50
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80189B54
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80189B58
  if (!crb(c,2)) { goto L_80189C04; } // 80189B5C
  c->r[7]=R8(c->r[3]+0x00000004u); // 80189B60
  c->r[0]=R8(c->r[4]+0x00000004u); // 80189B64
  c->r[9]=c->r[7]|c->r[7]; // 80189B68
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80189B6C
  if (!crb(c,1)) { goto L_80189B78; } // 80189B70
  c->r[9]=c->r[0]|c->r[0]; // 80189B74
L_80189B78:;
  c->r[8]=0u+0x00000000u; // 80189B78
  c->ctr=c->r[9]; // 80189B7C
  cmps(c,0,(int32_t)c->r[9],0); // 80189B80
  if (!crb(c,1)) { goto L_80189BC0; } // 80189B84
L_80189B88:;
  c->r[6]=c->r[4]+c->r[8]; // 80189B88
  c->r[5]=c->r[3]+c->r[8]; // 80189B8C
  c->r[6]=R8(c->r[6]+0x00000005u); // 80189B90
  c->r[0]=R8(c->r[5]+0x00000005u); // 80189B94
  cmpu(c,0,c->r[0],c->r[6]); // 80189B98
  if (!crb(c,0)) { goto L_80189BA8; } // 80189B9C
  c->r[3]=0u+0x00000001u; // 80189BA0
  return; // 80189BA4
L_80189BA8:;
  cmpu(c,0,c->r[6],c->r[0]); // 80189BA8
  if (!crb(c,0)) { goto L_80189BB8; } // 80189BAC
  c->r[3]=0u+0x00000000u; // 80189BB0
  return; // 80189BB4
L_80189BB8:;
  c->r[8]=c->r[8]+0x00000001u; // 80189BB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189B88; } // 80189BBC
L_80189BC0:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 80189BC0
  if (!crb(c,2)) { goto L_80189BFC; } // 80189BC4
  c->r[3]=R8(c->r[4]+0x00000004u); // 80189BC8
  c->r[0]=c->r[3]-c->r[8]; // 80189BCC
  c->ctr=c->r[0]; // 80189BD0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 80189BD4
  if (!crb(c,0)) { goto L_80189BFC; } // 80189BD8
L_80189BDC:;
  c->r[3]=c->r[4]+c->r[8]; // 80189BDC
  c->r[0]=R8(c->r[3]+0x00000005u); // 80189BE0
  cmps(c,0,(int32_t)c->r[0],0); // 80189BE4
  if (crb(c,2)) { goto L_80189BF4; } // 80189BE8
  c->r[3]=0u+0x00000001u; // 80189BEC
  return; // 80189BF0
L_80189BF4:;
  c->r[8]=c->r[8]+0x00000001u; // 80189BF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189BDC; } // 80189BF8
L_80189BFC:;
  c->r[3]=0u+0x00000000u; // 80189BFC
  return; // 80189C00
L_80189C04:;
  c->r[0]=c->r[5]^c->r[0]; // 80189C04
  c->r[3]=sraw(c,c->r[0],1); // 80189C08
  c->r[0]=c->r[0]&c->r[5]; // 80189C0C
  c->r[0]=c->r[3]-c->r[0]; // 80189C10
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80189C14
  return; // 80189C18
}

// fn_80189C1C
void f_80189C1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80189C1C
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80189C20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80189C24
  c->r[31]=R32(c->r[4]+0x00000008u); // 80189C28
  W32(c->r[1]+0x00000018u,c->r[30]); // 80189C2C
  c->r[30]=R32(c->r[4]+0x00000004u); // 80189C30
  W32(c->r[1]+0x00000014u,c->r[29]); // 80189C34
  c->r[29]=R32(c->r[4]+0x00000000u); // 80189C38
  c->r[11]=R32(c->r[4]+0x00000010u); // 80189C3C
  c->r[10]=R32(c->r[4]+0x00000014u); // 80189C40
  c->r[9]=R32(c->r[4]+0x00000018u); // 80189C44
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 80189C48
  c->r[7]=R32(c->r[4]+0x00000020u); // 80189C4C
  c->r[6]=R32(c->r[4]+0x00000024u); // 80189C50
  c->r[0]=R16(c->r[4]+0x00000028u); // 80189C54
  W32(c->r[3]+0x00000000u,c->r[29]); // 80189C58
  W32(c->r[3]+0x00000004u,c->r[30]); // 80189C5C
  W32(c->r[3]+0x00000008u,c->r[31]); // 80189C60
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 80189C64
  W32(c->r[3]+0x00000010u,c->r[11]); // 80189C68
  W32(c->r[3]+0x00000014u,c->r[10]); // 80189C6C
  W32(c->r[3]+0x00000018u,c->r[9]); // 80189C70
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 80189C74
  W32(c->r[3]+0x00000020u,c->r[7]); // 80189C78
  W32(c->r[3]+0x00000024u,c->r[6]); // 80189C7C
  W16(c->r[3]+0x00000028u,c->r[0]); // 80189C80
  c->r[0]=R8(c->r[5]+0x00000005u); // 80189C84
  cmps(c,0,(int32_t)c->r[0],0); // 80189C88
  if (crb(c,2)) { goto L_8018A0E4; } // 80189C8C
  c->r[8]=R8(c->r[3]+0x00000004u); // 80189C90
  c->r[0]=R8(c->r[5]+0x00000004u); // 80189C94
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80189C98
  if (!crb(c,0)) { goto L_80189CA4; } // 80189C9C
  c->r[8]=c->r[0]|c->r[0]; // 80189CA0
L_80189CA4:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 80189CA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80189CA8
  c->r[0]=c->r[0]-c->r[4]; // 80189CAC
  c->r[8]=c->r[8]+c->r[0]; // 80189CB0
  cmps(c,0,(int32_t)c->r[8],36); // 80189CB4
  if (!crb(c,1)) { goto L_80189CC0; } // 80189CB8
  c->r[8]=0u+0x00000024u; // 80189CBC
L_80189CC0:;
  c->r[7]=0u+0x00000000u; // 80189CC0
  goto L_80189CDC; // 80189CC4
L_80189CC8:;
  c->r[6]=R8(c->r[3]+0x00000004u); // 80189CC8
  c->r[4]=c->r[3]+c->r[6]; // 80189CCC
  c->r[6]=c->r[6]+0x00000001u; // 80189CD0
  W8(c->r[4]+0x00000005u,c->r[7]); // 80189CD4
  W8(c->r[3]+0x00000004u,c->r[6]); // 80189CD8
L_80189CDC:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 80189CDC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 80189CE0
  if (crb(c,0)) { IRQCHK(c); goto L_80189CC8; } // 80189CE4
  c->r[7]=R8(c->r[5]+0x00000004u); // 80189CE8
  c->r[4]=c->r[3]+0x00000005u; // 80189CEC
  c->r[6]=c->r[4]+c->r[8]; // 80189CF0
  c->r[7]=c->r[7]+c->r[0]; // 80189CF4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 80189CF8
  if (!crb(c,0)) { goto L_80189D04; } // 80189CFC
  c->r[6]=c->r[4]+c->r[7]; // 80189D00
L_80189D04:;
  c->r[7]=c->r[6]-c->r[4]; // 80189D04
  c->r[9]=c->r[5]+0x00000005u; // 80189D08
  c->r[7]=c->r[7]-c->r[0]; // 80189D0C
  c->r[10]=c->r[9]+c->r[7]; // 80189D10
  c->r[11]=c->r[10]|c->r[10]; // 80189D14
  goto L_80189E3C; // 80189D18
L_80189D1C:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[8]=R8(ea); c->r[6]=ea;} // 80189D1C
  {uint32_t ea=c->r[10]+0xFFFFFFFFu; c->r[7]=R8(ea); c->r[10]=ea;} // 80189D20
  cmpu(c,0,c->r[8],c->r[7]); // 80189D24
  if (!crb(c,0)) { goto L_80189E2C; } // 80189D28
  c->r[12]=c->r[6]+0xFFFFFFFFu; // 80189D2C
  goto L_80189D38; // 80189D30
L_80189D34:;
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 80189D34
L_80189D38:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 80189D38
  cmps(c,0,(int32_t)c->r[7],0); // 80189D3C
  if (crb(c,2)) { IRQCHK(c); goto L_80189D34; } // 80189D40
  cmpu(c,0,c->r[12],c->r[6]); // 80189D44
  c->r[8]=c->r[6]-c->r[12]; // 80189D48
  if (crb(c,2)) { goto L_80189E2C; } // 80189D4C
  c->r[7]=rotl(c->r[8],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 80189D50
  c->ctr=c->r[7]; // 80189D54
  if (crb(c,2)) { goto L_80189E0C; } // 80189D58
L_80189D5C:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 80189D5C
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189D60
  W8(c->r[12]+0x00000000u,c->r[7]); // 80189D64
  c->r[7]=R8(c->r[12]+0x00000001u); // 80189D68
  c->r[7]=c->r[7]+0x0000000Au; // 80189D6C
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80189D70
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189D74
  W8(c->r[12]+0x00000001u,c->r[7]); // 80189D78
  c->r[7]=R8(c->r[12]+0x00000002u); // 80189D7C
  c->r[7]=c->r[7]+0x0000000Au; // 80189D80
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80189D84
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189D88
  W8(c->r[12]+0x00000002u,c->r[7]); // 80189D8C
  c->r[7]=R8(c->r[12]+0x00000003u); // 80189D90
  c->r[7]=c->r[7]+0x0000000Au; // 80189D94
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80189D98
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189D9C
  W8(c->r[12]+0x00000003u,c->r[7]); // 80189DA0
  c->r[7]=R8(c->r[12]+0x00000004u); // 80189DA4
  c->r[7]=c->r[7]+0x0000000Au; // 80189DA8
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80189DAC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189DB0
  W8(c->r[12]+0x00000004u,c->r[7]); // 80189DB4
  c->r[7]=R8(c->r[12]+0x00000005u); // 80189DB8
  c->r[7]=c->r[7]+0x0000000Au; // 80189DBC
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80189DC0
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189DC4
  W8(c->r[12]+0x00000005u,c->r[7]); // 80189DC8
  c->r[7]=R8(c->r[12]+0x00000006u); // 80189DCC
  c->r[7]=c->r[7]+0x0000000Au; // 80189DD0
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80189DD4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189DD8
  W8(c->r[12]+0x00000006u,c->r[7]); // 80189DDC
  c->r[7]=R8(c->r[12]+0x00000007u); // 80189DE0
  c->r[7]=c->r[7]+0x0000000Au; // 80189DE4
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 80189DE8
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189DEC
  W8(c->r[12]+0x00000007u,c->r[7]); // 80189DF0
  c->r[7]=R8(c->r[12]+0x00000008u); // 80189DF4
  c->r[7]=c->r[7]+0x0000000Au; // 80189DF8
  {uint32_t ea=c->r[12]+0x00000008u; W8(ea,c->r[7]); c->r[12]=ea;} // 80189DFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189D5C; } // 80189E00
  c->r[8]=c->r[8]&0x00000007u; cr0(c,c->r[8]); // 80189E04
  if (crb(c,2)) { goto L_80189E2C; } // 80189E08
L_80189E0C:;
  c->ctr=c->r[8]; // 80189E0C
L_80189E10:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 80189E10
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80189E14
  W8(c->r[12]+0x00000000u,c->r[7]); // 80189E18
  c->r[7]=R8(c->r[12]+0x00000001u); // 80189E1C
  c->r[7]=c->r[7]+0x0000000Au; // 80189E20
  {uint32_t ea=c->r[12]+0x00000001u; W8(ea,c->r[7]); c->r[12]=ea;} // 80189E24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189E10; } // 80189E28
L_80189E2C:;
  c->r[8]=R8(c->r[10]+0x00000000u); // 80189E2C
  c->r[7]=R8(c->r[6]+0x00000000u); // 80189E30
  c->r[7]=c->r[7]-c->r[8]; // 80189E34
  W8(c->r[6]+0x00000000u,c->r[7]); // 80189E38
L_80189E3C:;
  cmpu(c,0,c->r[6],c->r[4]); // 80189E3C
  if (!crb(c,1)) { goto L_80189E4C; } // 80189E40
  cmpu(c,0,c->r[10],c->r[9]); // 80189E44
  if (crb(c,1)) { IRQCHK(c); goto L_80189D1C; } // 80189E48
L_80189E4C:;
  c->r[8]=R8(c->r[5]+0x00000004u); // 80189E4C
  c->r[9]=c->r[11]-c->r[9]; // 80189E50
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 80189E54
  if (!crb(c,0)) { goto L_80189FE0; } // 80189E58
  c->r[7]=R8(c->r[11]+0x00000000u); // 80189E5C
  c->r[10]=0u+0x00000000u; // 80189E60
  cmpu(c,0,c->r[7],0x00000005u); // 80189E64
  if (!crb(c,0)) { goto L_80189E74; } // 80189E68
  c->r[10]=0u+0x00000001u; // 80189E6C
  goto L_80189EC0; // 80189E70
L_80189E74:;
  if (!crb(c,2)) { goto L_80189EC0; } // 80189E74
  c->r[5]=c->r[5]+c->r[8]; // 80189E78
  c->r[6]=c->r[11]+0x00000001u; // 80189E7C
  c->r[7]=c->r[5]+0x00000005u; // 80189E80
  c->r[5]=c->r[7]-c->r[6]; // 80189E84
  c->ctr=c->r[5]; // 80189E88
  cmpu(c,0,c->r[6],c->r[7]); // 80189E8C
  if (!crb(c,0)) { goto L_80189EA8; } // 80189E90
L_80189E94:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 80189E94
  cmps(c,0,(int32_t)c->r[5],0); // 80189E98
  if (!crb(c,2)) { goto L_80189FE0; } // 80189E9C
  c->r[6]=c->r[6]+0x00000001u; // 80189EA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189E94; } // 80189EA4
L_80189EA8:;
  c->r[5]=c->r[4]+c->r[9]; // 80189EA8
  c->r[6]=c->r[0]+c->r[5]; // 80189EAC
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 80189EB0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80189EB4
  if (crb(c,2)) { goto L_80189EC0; } // 80189EB8
  c->r[10]=0u+0x00000001u; // 80189EBC
L_80189EC0:;
  cmps(c,0,(int32_t)c->r[10],0); // 80189EC0
  if (crb(c,2)) { goto L_80189FE0; } // 80189EC4
  c->r[0]=R8(c->r[6]+0x00000000u); // 80189EC8
  cmpu(c,0,c->r[0],0x00000001u); // 80189ECC
  if (!crb(c,0)) { goto L_80189FD4; } // 80189ED0
  c->r[8]=c->r[6]+0xFFFFFFFFu; // 80189ED4
  goto L_80189EE0; // 80189ED8
L_80189EDC:;
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 80189EDC
L_80189EE0:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 80189EE0
  cmps(c,0,(int32_t)c->r[0],0); // 80189EE4
  if (crb(c,2)) { IRQCHK(c); goto L_80189EDC; } // 80189EE8
  cmpu(c,0,c->r[8],c->r[6]); // 80189EEC
  c->r[5]=c->r[6]-c->r[8]; // 80189EF0
  if (crb(c,2)) { goto L_80189FD4; } // 80189EF4
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80189EF8
  c->ctr=c->r[0]; // 80189EFC
  if (crb(c,2)) { goto L_80189FB4; } // 80189F00
L_80189F04:;
  c->r[7]=R8(c->r[8]+0x00000000u); // 80189F04
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F08
  W8(c->r[8]+0x00000000u,c->r[0]); // 80189F0C
  c->r[7]=R8(c->r[8]+0x00000001u); // 80189F10
  c->r[0]=c->r[7]+0x0000000Au; // 80189F14
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80189F18
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F1C
  W8(c->r[8]+0x00000001u,c->r[0]); // 80189F20
  c->r[7]=R8(c->r[8]+0x00000002u); // 80189F24
  c->r[0]=c->r[7]+0x0000000Au; // 80189F28
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80189F2C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F30
  W8(c->r[8]+0x00000002u,c->r[0]); // 80189F34
  c->r[7]=R8(c->r[8]+0x00000003u); // 80189F38
  c->r[0]=c->r[7]+0x0000000Au; // 80189F3C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80189F40
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F44
  W8(c->r[8]+0x00000003u,c->r[0]); // 80189F48
  c->r[7]=R8(c->r[8]+0x00000004u); // 80189F4C
  c->r[0]=c->r[7]+0x0000000Au; // 80189F50
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80189F54
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F58
  W8(c->r[8]+0x00000004u,c->r[0]); // 80189F5C
  c->r[7]=R8(c->r[8]+0x00000005u); // 80189F60
  c->r[0]=c->r[7]+0x0000000Au; // 80189F64
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80189F68
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F6C
  W8(c->r[8]+0x00000005u,c->r[0]); // 80189F70
  c->r[7]=R8(c->r[8]+0x00000006u); // 80189F74
  c->r[0]=c->r[7]+0x0000000Au; // 80189F78
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80189F7C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F80
  W8(c->r[8]+0x00000006u,c->r[0]); // 80189F84
  c->r[7]=R8(c->r[8]+0x00000007u); // 80189F88
  c->r[0]=c->r[7]+0x0000000Au; // 80189F8C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80189F90
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189F94
  W8(c->r[8]+0x00000007u,c->r[0]); // 80189F98
  c->r[7]=R8(c->r[8]+0x00000008u); // 80189F9C
  c->r[0]=c->r[7]+0x0000000Au; // 80189FA0
  {uint32_t ea=c->r[8]+0x00000008u; W8(ea,c->r[0]); c->r[8]=ea;} // 80189FA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189F04; } // 80189FA8
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 80189FAC
  if (crb(c,2)) { goto L_80189FD4; } // 80189FB0
L_80189FB4:;
  c->ctr=c->r[5]; // 80189FB4
L_80189FB8:;
  c->r[7]=R8(c->r[8]+0x00000000u); // 80189FB8
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 80189FBC
  W8(c->r[8]+0x00000000u,c->r[0]); // 80189FC0
  c->r[7]=R8(c->r[8]+0x00000001u); // 80189FC4
  c->r[0]=c->r[7]+0x0000000Au; // 80189FC8
  {uint32_t ea=c->r[8]+0x00000001u; W8(ea,c->r[0]); c->r[8]=ea;} // 80189FCC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80189FB8; } // 80189FD0
L_80189FD4:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 80189FD4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80189FD8
  W8(c->r[6]+0x00000000u,c->r[0]); // 80189FDC
L_80189FE0:;
  c->r[7]=c->r[4]|c->r[4]; // 80189FE0
  goto L_80189FEC; // 80189FE4
L_80189FE8:;
  c->r[7]=c->r[7]+0x00000001u; // 80189FE8
L_80189FEC:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80189FEC
  cmps(c,0,(int32_t)c->r[0],0); // 80189FF0
  if (crb(c,2)) { IRQCHK(c); goto L_80189FE8; } // 80189FF4
  cmpu(c,0,c->r[7],c->r[4]); // 80189FF8
  if (!crb(c,1)) { goto L_8018A0AC; } // 80189FFC
  c->r[0]=R8(c->r[3]+0x00000004u); // 8018A000
  c->r[6]=c->r[7]-c->r[4]; // 8018A004
  c->r[8]=rotl(c->r[6],0)&0x000000FFu; // 8018A008
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 8018A00C
  c->r[6]=c->r[4]+c->r[0]; // 8018A010
  cmpu(c,0,c->r[7],c->r[6]); // 8018A014
  c->r[0]=c->r[5]-c->r[8]; // 8018A018
  W16(c->r[3]+0x00000002u,c->r[0]); // 8018A01C
  c->r[5]=c->r[6]-c->r[7]; // 8018A020
  if (!crb(c,0)) { goto L_8018A0A0; } // 8018A024
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8018A028
  c->ctr=c->r[0]; // 8018A02C
  if (crb(c,2)) { goto L_8018A088; } // 8018A030
L_8018A034:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8018A034
  W8(c->r[4]+0x00000000u,c->r[0]); // 8018A038
  c->r[0]=R8(c->r[7]+0x00000001u); // 8018A03C
  W8(c->r[4]+0x00000001u,c->r[0]); // 8018A040
  c->r[0]=R8(c->r[7]+0x00000002u); // 8018A044
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018A048
  c->r[0]=R8(c->r[7]+0x00000003u); // 8018A04C
  W8(c->r[4]+0x00000003u,c->r[0]); // 8018A050
  c->r[0]=R8(c->r[7]+0x00000004u); // 8018A054
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018A058
  c->r[0]=R8(c->r[7]+0x00000005u); // 8018A05C
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A060
  c->r[0]=R8(c->r[7]+0x00000006u); // 8018A064
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018A068
  c->r[0]=R8(c->r[7]+0x00000007u); // 8018A06C
  c->r[7]=c->r[7]+0x00000008u; // 8018A070
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018A074
  c->r[4]=c->r[4]+0x00000008u; // 8018A078
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A034; } // 8018A07C
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 8018A080
  if (crb(c,2)) { goto L_8018A0A0; } // 8018A084
L_8018A088:;
  c->ctr=c->r[5]; // 8018A088
L_8018A08C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8018A08C
  c->r[7]=c->r[7]+0x00000001u; // 8018A090
  W8(c->r[4]+0x00000000u,c->r[0]); // 8018A094
  c->r[4]=c->r[4]+0x00000001u; // 8018A098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A08C; } // 8018A09C
L_8018A0A0:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 8018A0A0
  c->r[0]=c->r[0]-c->r[8]; // 8018A0A4
  W8(c->r[3]+0x00000004u,c->r[0]); // 8018A0A8
L_8018A0AC:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 8018A0AC
  c->r[4]=c->r[3]+0x00000005u; // 8018A0B0
  c->r[5]=c->r[4]+c->r[0]; // 8018A0B4
  c->r[0]=c->r[5]-c->r[4]; // 8018A0B8
  c->ctr=c->r[0]; // 8018A0BC
  cmpu(c,0,c->r[5],c->r[4]); // 8018A0C0
  if (!crb(c,1)) { goto L_8018A0D8; } // 8018A0C4
L_8018A0C8:;
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 8018A0C8
  cmps(c,0,(int32_t)c->r[0],0); // 8018A0CC
  if (!crb(c,2)) { goto L_8018A0D8; } // 8018A0D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A0C8; } // 8018A0D4
L_8018A0D8:;
  c->r[4]=c->r[5]-c->r[4]; // 8018A0D8
  c->r[0]=c->r[4]+0x00000001u; // 8018A0DC
  W8(c->r[3]+0x00000004u,c->r[0]); // 8018A0E0
L_8018A0E4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018A0E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018A0E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018A0EC
  c->r[1]=c->r[1]+0x00000020u; // 8018A0F0
  return; // 8018A0F4
}

// fn_8018A0F8
void f_8018A0F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018A0F8
  c->r[0]=c->lr; // 8018A0FC
  W32(c->r[1]+0x00000094u,c->r[0]); // 8018A100
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[31]);} // 8018A104
  c->f[31]=c->f[1]; // 8018A108
  W32(c->r[1]+0x00000084u,c->r[31]); // 8018A10C
  W32(c->r[1]+0x00000080u,c->r[30]); // 8018A110
  c->r[30]=c->r[3]|c->r[3]; // 8018A114
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 8018A118
  c->lr=0x8018A120u; f_80188140(c); // 8018A11C
  {uint32_t ea=c->r[2]+0xFFFF8EB0u; c->f[0]=RF64(ea);} // 8018A120
  c->r[0]=0u-c->r[3]; // 8018A124
  c->r[0]=c->r[0]|c->r[3]; // 8018A128
  fcmp(c,0,c->f[0],c->f[31]); // 8018A12C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8018A130
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018A134
  if (!crb(c,2)) { goto L_8018A158; } // 8018A138
  c->r[3]=0u+0x00000000u; // 8018A13C
  c->r[0]=0u+0x00000001u; // 8018A140
  W8(c->r[30]+0x00000000u,c->r[31]); // 8018A144
  W16(c->r[30]+0x00000002u,c->r[3]); // 8018A148
  W8(c->r[30]+0x00000004u,c->r[0]); // 8018A14C
  W8(c->r[30]+0x00000005u,c->r[3]); // 8018A150
  goto L_8018A23C; // 8018A154
L_8018A158:;
  c->f[1]=c->f[31]; // 8018A158
  c->lr=0x8018A160u; f_80188158(c); // 8018A15C
  cmps(c,0,(int32_t)c->r[3],2); // 8018A160
  if (crb(c,1)) { goto L_8018A19C; } // 8018A164
  c->f[1]=c->f[31]; // 8018A168
  c->r[3]=0u+0x00000000u; // 8018A16C
  c->r[0]=0u+0x00000001u; // 8018A170
  W8(c->r[30]+0x00000000u,c->r[31]); // 8018A174
  W16(c->r[30]+0x00000002u,c->r[3]); // 8018A178
  W8(c->r[30]+0x00000004u,c->r[0]); // 8018A17C
  c->lr=0x8018A184u; f_80188158(c); // 8018A180
  cmps(c,0,(int32_t)c->r[3],1); // 8018A184
  c->r[0]=0u+0x00000049u; // 8018A188
  if (!crb(c,2)) { goto L_8018A194; } // 8018A18C
  c->r[0]=0u+0x0000004Eu; // 8018A190
L_8018A194:;
  W8(c->r[30]+0x00000005u,c->r[0]); // 8018A194
  goto L_8018A23C; // 8018A198
L_8018A19C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8018A19C
  if (crb(c,2)) { goto L_8018A1A8; } // 8018A1A0
  c->f[31]=-c->f[31]; // 8018A1A4
L_8018A1A8:;
  c->f[1]=c->f[31]; // 8018A1A8
  c->r[3]=c->r[1]+0x00000008u; // 8018A1AC
  c->lr=0x8018A1B4u; f_80196494(c); // 8018A1B0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 8018A1B4
  c->f[31]=c->f[1]; // 8018A1B8
  c->r[4]=R32(c->r[1]+0x00000014u); // 8018A1BC
  c->r[3]=R32(c->r[1]+0x00000010u); // 8018A1C0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8018A1C4
  cmps(c,0,(int32_t)c->r[4],0); // 8018A1C8
  c->r[0]=c->r[0]&~c->r[4]; // 8018A1CC
  c->r[3]=c->r[3]|0x00100000u; // 8018A1D0
  c->r[0]=cntlz(c->r[0]); // 8018A1D4
  c->r[4]=addc(c,~c->r[0],0x00000020u,1); // 8018A1D8
  if (!crb(c,2)) { goto L_8018A1F4; } // 8018A1DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018A1E0
  c->r[0]=c->r[0]&~c->r[3]; // 8018A1E4
  c->r[0]=cntlz(c->r[0]); // 8018A1E8
  c->r[3]=addc(c,~c->r[0],0x00000020u,1); // 8018A1EC
  c->r[4]=c->r[3]+0x00000020u; // 8018A1F0
L_8018A1F4:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018A1F4
  c->r[29]=addc(c,~c->r[4],0x00000035u,1); // 8018A1F8
  c->r[3]=c->r[1]+0x00000018u; // 8018A1FC
  c->r[4]=c->r[0]-c->r[29]; // 8018A200
  c->lr=0x8018A208u; f_8018971C(c); // 8018A204
  c->f[1]=c->f[31]; // 8018A208
  c->r[3]=c->r[29]|c->r[29]; // 8018A20C
  c->lr=0x8018A214u; f_8019651C(c); // 8018A210
  c->lr=0x8018A218u; f_801864D4(c); // 8018A214
  c->r[5]=c->r[3]|c->r[3]; // 8018A218
  c->r[6]=c->r[4]|c->r[4]; // 8018A21C
  c->r[3]=c->r[1]+0x00000044u; // 8018A220
  c->lr=0x8018A228u; f_801892CC(c); // 8018A224
  c->r[3]=c->r[30]|c->r[30]; // 8018A228
  c->r[4]=c->r[1]+0x00000044u; // 8018A22C
  c->r[5]=c->r[1]+0x00000018u; // 8018A230
  c->lr=0x8018A238u; f_801893A8(c); // 8018A234
  W8(c->r[30]+0x00000000u,c->r[31]); // 8018A238
L_8018A23C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8018A23C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[31]=RF64(ea);} // 8018A240
  c->r[31]=R32(c->r[1]+0x00000084u); // 8018A244
  c->r[30]=R32(c->r[1]+0x00000080u); // 8018A248
  c->r[29]=R32(c->r[1]+0x0000007Cu); // 8018A24C
  c->lr=c->r[0]; // 8018A250
  c->r[1]=c->r[1]+0x00000090u; // 8018A254
  return; // 8018A258
}

// __num2dec
void f_8018A25C(Ctx* __restrict c) {
  trace_call(0x8018A25Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018A25C
  c->r[0]=c->lr; // 8018A260
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018A264
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018A268
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 8018A26C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018A270
  c->r[30]=c->r[4]|c->r[4]; // 8018A274
  c->r[3]=c->r[30]|c->r[30]; // 8018A278
  c->lr=0x8018A280u; f_8018A0F8(c); // 8018A27C
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018A280
  cmpu(c,0,c->r[0],0x00000009u); // 8018A284
  if (crb(c,1)) { goto L_8018A3E4; } // 8018A288
  cmps(c,0,(int32_t)c->r[31],36); // 8018A28C
  if (!crb(c,1)) { goto L_8018A298; } // 8018A290
  c->r[31]=0u+0x00000024u; // 8018A294
L_8018A298:;
  cmps(c,0,(int32_t)c->r[31],0); // 8018A298
  if (!crb(c,1)) { goto L_8018A384; } // 8018A29C
  c->r[0]=R8(c->r[30]+0x00000004u); // 8018A2A0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8018A2A4
  if (!crb(c,0)) { goto L_8018A384; } // 8018A2A8
  c->r[4]=c->r[30]+0x00000005u; // 8018A2AC
  c->r[0]=R8(c->r[4]+c->r[31]); // 8018A2B0
  c->r[3]=c->r[4]+c->r[31]; // 8018A2B4
  cmpu(c,0,c->r[0],0x00000005u); // 8018A2B8
  if (!crb(c,1)) { goto L_8018A2C8; } // 8018A2BC
  c->r[4]=0u+0x00000001u; // 8018A2C0
  goto L_8018A324; // 8018A2C4
L_8018A2C8:;
  if (!crb(c,0)) { goto L_8018A2D4; } // 8018A2C8
  c->r[4]=0u+0xFFFFFFFFu; // 8018A2CC
  goto L_8018A324; // 8018A2D0
L_8018A2D4:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 8018A2D4
  c->r[3]=c->r[3]+0x00000001u; // 8018A2D8
  c->r[4]=c->r[4]+c->r[0]; // 8018A2DC
  c->r[0]=c->r[4]-c->r[3]; // 8018A2E0
  c->ctr=c->r[0]; // 8018A2E4
  cmpu(c,0,c->r[3],c->r[4]); // 8018A2E8
  if (!crb(c,0)) { goto L_8018A30C; } // 8018A2EC
L_8018A2F0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018A2F0
  cmps(c,0,(int32_t)c->r[0],0); // 8018A2F4
  if (crb(c,2)) { goto L_8018A304; } // 8018A2F8
  c->r[4]=0u+0x00000001u; // 8018A2FC
  goto L_8018A324; // 8018A300
L_8018A304:;
  c->r[3]=c->r[3]+0x00000001u; // 8018A304
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A2F0; } // 8018A308
L_8018A30C:;
  c->r[3]=c->r[31]+c->r[30]; // 8018A30C
  c->r[4]=0u+0xFFFFFFFFu; // 8018A310
  c->r[0]=R8(c->r[3]+0x00000004u); // 8018A314
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8018A318
  if (crb(c,2)) { goto L_8018A324; } // 8018A31C
  c->r[4]=0u+0x00000001u; // 8018A320
L_8018A324:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018A324
  W8(c->r[30]+0x00000004u,c->r[31]); // 8018A328
  if (crb(c,0)) { goto L_8018A384; } // 8018A32C
  c->r[4]=c->r[30]+0x00000005u; // 8018A330
  c->r[0]=0u+0x00000000u; // 8018A334
  c->r[5]=c->r[4]+c->r[31]; // 8018A338
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8018A33C
L_8018A340:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 8018A340
  cmpu(c,0,c->r[3],0x00000009u); // 8018A344
  if (!crb(c,0)) { goto L_8018A358; } // 8018A348
  c->r[0]=c->r[3]+0x00000001u; // 8018A34C
  W8(c->r[5]+0x00000000u,c->r[0]); // 8018A350
  goto L_8018A384; // 8018A354
L_8018A358:;
  cmpu(c,0,c->r[5],c->r[4]); // 8018A358
  if (!crb(c,2)) { goto L_8018A378; } // 8018A35C
  c->r[0]=0u+0x00000001u; // 8018A360
  W8(c->r[5]+0x00000000u,c->r[0]); // 8018A364
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 8018A368
  c->r[0]=c->r[3]+0x00000001u; // 8018A36C
  W16(c->r[30]+0x00000002u,c->r[0]); // 8018A370
  goto L_8018A384; // 8018A374
L_8018A378:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 8018A378
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8018A37C
  IRQCHK(c); goto L_8018A340; // 8018A380
L_8018A384:;
  c->r[5]=0u+0x00000000u; // 8018A384
  goto L_8018A3A0; // 8018A388
L_8018A38C:;
  c->r[4]=R8(c->r[30]+0x00000004u); // 8018A38C
  c->r[3]=c->r[30]+c->r[4]; // 8018A390
  c->r[0]=c->r[4]+0x00000001u; // 8018A394
  W8(c->r[3]+0x00000005u,c->r[5]); // 8018A398
  W8(c->r[30]+0x00000004u,c->r[0]); // 8018A39C
L_8018A3A0:;
  c->r[3]=R8(c->r[30]+0x00000004u); // 8018A3A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 8018A3A4
  if (crb(c,0)) { IRQCHK(c); goto L_8018A38C; } // 8018A3A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 8018A3AC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018A3B0
  c->r[5]=0u+0x00000000u; // 8018A3B4
  c->r[0]=c->r[0]-c->r[3]; // 8018A3B8
  W16(c->r[30]+0x00000002u,c->r[0]); // 8018A3BC
  goto L_8018A3D8; // 8018A3C0
L_8018A3C4:;
  c->r[4]=c->r[30]+c->r[5]; // 8018A3C4
  c->r[5]=c->r[5]+0x00000001u; // 8018A3C8
  c->r[3]=R8(c->r[4]+0x00000005u); // 8018A3CC
  c->r[0]=c->r[3]+0x00000030u; // 8018A3D0
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A3D4
L_8018A3D8:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 8018A3D8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8018A3DC
  if (crb(c,0)) { IRQCHK(c); goto L_8018A3C4; } // 8018A3E0
L_8018A3E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018A3E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018A3E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018A3EC
  c->lr=c->r[0]; // 8018A3F0
  c->r[1]=c->r[1]+0x00000010u; // 8018A3F4
  return; // 8018A3F8
}

// fn_8018A3FC
void f_8018A3FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018A3FC
  c->r[0]=c->lr; // 8018A400
  W32(c->r[1]+0x00000184u,c->r[0]); // 8018A404
  c->r[11]=c->r[1]+0x00000170u; // 8018A408
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 8018A40C
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 8018A410
  c->lr=0x8018A418u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018A414
  c->r[0]=R8(c->r[3]+0x00000004u); // 8018A418
  c->r[4]=0u+0x43300000u; // 8018A41C
  W32(c->r[1]+0x00000128u,c->r[4]); // 8018A420
  c->r[27]=c->r[3]|c->r[3]; // 8018A424
  cmps(c,0,(int32_t)c->r[0],0); // 8018A428
  W32(c->r[1]+0x00000130u,c->r[4]); // 8018A42C
  if (!crb(c,2)) { goto L_8018A458; } // 8018A430
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018A434
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018A438
  if (!crb(c,2)) { goto L_8018A448; } // 8018A43C
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[2]=RF64(ea);} // 8018A440
  goto L_8018A44C; // 8018A444
L_8018A448:;
  {uint32_t ea=c->r[2]+0xFFFF8EC0u; c->f[2]=RF64(ea);} // 8018A448
L_8018A44C:;
  {uint32_t ea=c->r[2]+0xFFFF8EB0u; c->f[1]=RF64(ea);} // 8018A44C
  c->lr=0x8018A454u; f_80196250(c); // 8018A450
  goto L_8018AB24; // 8018A454
L_8018A458:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8018A458
  cmps(c,0,(int32_t)c->r[0],48); // 8018A45C
  if (crb(c,2)) { goto L_8018A478; } // 8018A460
  cmps(c,0,(int32_t)c->r[0],73); // 8018A464
  if (crb(c,2)) { goto L_8018A49C; } // 8018A468
  cmps(c,0,(int32_t)c->r[0],78); // 8018A46C
  if (crb(c,2)) { goto L_8018A4C4; } // 8018A470
  goto L_8018A504; // 8018A474
L_8018A478:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018A478
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018A47C
  if (!crb(c,2)) { goto L_8018A48C; } // 8018A480
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[2]=RF64(ea);} // 8018A484
  goto L_8018A490; // 8018A488
L_8018A48C:;
  {uint32_t ea=c->r[2]+0xFFFF8EC0u; c->f[2]=RF64(ea);} // 8018A48C
L_8018A490:;
  {uint32_t ea=c->r[2]+0xFFFF8EB0u; c->f[1]=RF64(ea);} // 8018A490
  c->lr=0x8018A498u; f_80196250(c); // 8018A494
  goto L_8018AB24; // 8018A498
L_8018A49C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018A49C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018A4A0
  if (!crb(c,2)) { goto L_8018A4B0; } // 8018A4A4
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[2]=RF64(ea);} // 8018A4A8
  goto L_8018A4B4; // 8018A4AC
L_8018A4B0:;
  {uint32_t ea=c->r[2]+0xFFFF8EC0u; c->f[2]=RF64(ea);} // 8018A4B0
L_8018A4B4:;
  c->r[3]=0u+0x80440000u; // 8018A4B4
  {uint32_t ea=c->r[3]+0xFFFF8A6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018A4B8
  c->lr=0x8018A4C0u; f_80196250(c); // 8018A4BC
  goto L_8018AB24; // 8018A4C0
L_8018A4C4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018A4C4
  c->r[4]=0u+0x00000000u; // 8018A4C8
  c->r[3]=0u+0x7FF00000u; // 8018A4CC
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8018A4D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018A4D4
  W32(c->r[1]+0x00000018u,c->r[3]); // 8018A4D8
  if (crb(c,2)) { goto L_8018A4F0; } // 8018A4DC
  c->r[0]=0u+0x80000000u; // 8018A4E0
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8018A4E4
  c->r[0]=c->r[0]|0x7FF00000u; // 8018A4E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018A4EC
L_8018A4F0:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 8018A4F0
  c->r[0]=c->r[0]|0x00080000u; // 8018A4F4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018A4F8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 8018A4FC
  goto L_8018AB24; // 8018A500
L_8018A504:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018A504
  c->r[4]=c->r[1]+0x00000101u; // 8018A508
  W32(c->r[1]+0x00000100u,c->r[0]); // 8018A50C
  c->r[21]=R32(c->r[3]+0x00000000u); // 8018A510
  c->r[0]=R8(c->r[1]+0x00000100u); // 8018A514
  c->r[12]=R32(c->r[3]+0x00000008u); // 8018A518
  c->r[28]=c->r[4]+c->r[0]; // 8018A51C
  c->r[11]=R32(c->r[3]+0x0000000Cu); // 8018A520
  c->r[10]=R32(c->r[3]+0x00000010u); // 8018A524
  cmpu(c,1,c->r[4],c->r[28]); // 8018A528
  c->r[9]=R32(c->r[3]+0x00000014u); // 8018A52C
  c->r[8]=R32(c->r[3]+0x00000018u); // 8018A530
  c->r[7]=R32(c->r[3]+0x0000001Cu); // 8018A534
  c->r[6]=R32(c->r[3]+0x00000020u); // 8018A538
  c->r[5]=R32(c->r[3]+0x00000024u); // 8018A53C
  c->r[0]=R16(c->r[3]+0x00000028u); // 8018A540
  W32(c->r[1]+0x000000FCu,c->r[21]); // 8018A544
  W32(c->r[1]+0x00000104u,c->r[12]); // 8018A548
  W32(c->r[1]+0x00000108u,c->r[11]); // 8018A54C
  W32(c->r[1]+0x0000010Cu,c->r[10]); // 8018A550
  W32(c->r[1]+0x00000110u,c->r[9]); // 8018A554
  W32(c->r[1]+0x00000114u,c->r[8]); // 8018A558
  W32(c->r[1]+0x00000118u,c->r[7]); // 8018A55C
  W32(c->r[1]+0x0000011Cu,c->r[6]); // 8018A560
  W32(c->r[1]+0x00000120u,c->r[5]); // 8018A564
  W16(c->r[1]+0x00000124u,c->r[0]); // 8018A568
  if (!crb(c,4)) { goto L_8018A628; } // 8018A56C
  c->r[0]=c->r[28]-c->r[4]; // 8018A570
  c->r[3]=c->r[28]+0xFFFFFFF8u; // 8018A574
  cmps(c,0,(int32_t)c->r[0],8); // 8018A578
  if (!crb(c,1)) { goto L_8018A604; } // 8018A57C
  if (crb(c,5)) { goto L_8018A604; } // 8018A580
  c->r[0]=c->r[3]+0x00000007u; // 8018A584
  c->r[0]=c->r[0]-c->r[4]; // 8018A588
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8018A58C
  c->ctr=c->r[0]; // 8018A590
  cmpu(c,0,c->r[4],c->r[3]); // 8018A594
  if (!crb(c,0)) { goto L_8018A604; } // 8018A598
L_8018A59C:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 8018A59C
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5A0
  W8(c->r[4]+0x00000000u,c->r[0]); // 8018A5A4
  c->r[3]=R8(c->r[4]+0x00000001u); // 8018A5A8
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5AC
  W8(c->r[4]+0x00000001u,c->r[0]); // 8018A5B0
  c->r[3]=R8(c->r[4]+0x00000002u); // 8018A5B4
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5B8
  W8(c->r[4]+0x00000002u,c->r[0]); // 8018A5BC
  c->r[3]=R8(c->r[4]+0x00000003u); // 8018A5C0
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5C4
  W8(c->r[4]+0x00000003u,c->r[0]); // 8018A5C8
  c->r[3]=R8(c->r[4]+0x00000004u); // 8018A5CC
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5D0
  W8(c->r[4]+0x00000004u,c->r[0]); // 8018A5D4
  c->r[3]=R8(c->r[4]+0x00000005u); // 8018A5D8
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5DC
  W8(c->r[4]+0x00000005u,c->r[0]); // 8018A5E0
  c->r[3]=R8(c->r[4]+0x00000006u); // 8018A5E4
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5E8
  W8(c->r[4]+0x00000006u,c->r[0]); // 8018A5EC
  c->r[3]=R8(c->r[4]+0x00000007u); // 8018A5F0
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A5F4
  W8(c->r[4]+0x00000007u,c->r[0]); // 8018A5F8
  c->r[4]=c->r[4]+0x00000008u; // 8018A5FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A59C; } // 8018A600
L_8018A604:;
  c->r[0]=c->r[28]-c->r[4]; // 8018A604
  c->ctr=c->r[0]; // 8018A608
  cmpu(c,0,c->r[4],c->r[28]); // 8018A60C
  if (!crb(c,0)) { goto L_8018A628; } // 8018A610
L_8018A614:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 8018A614
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018A618
  W8(c->r[4]+0x00000000u,c->r[0]); // 8018A61C
  c->r[4]=c->r[4]+0x00000001u; // 8018A620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A614; } // 8018A624
L_8018A628:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x000000FEu); // 8018A628
  c->r[4]=0u+0x802E0000u; // 8018A62C
  c->r[0]=R8(c->r[1]+0x00000100u); // 8018A630
  c->r[4]=c->r[4]+0xFFFFFD60u; // 8018A634
  c->r[3]=c->r[1]+0x000000D0u; // 8018A638
  c->r[5]=0u+0x00000134u; // 8018A63C
  c->r[6]=c->r[0]+c->r[6]; // 8018A640
  c->r[4]=c->r[4]+0x000000B8u; // 8018A644
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8018A648
  W16(c->r[1]+0x000000FEu,c->r[0]); // 8018A64C
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8018A650
  c->lr=0x8018A658u; f_80189630(c); // 8018A654
  c->r[3]=c->r[1]+0x000000D0u; // 8018A658
  c->r[4]=c->r[1]+0x000000FCu; // 8018A65C
  c->lr=0x8018A664u; f_80189B1C(c); // 8018A660
  cmps(c,0,(int32_t)c->r[3],0); // 8018A664
  if (crb(c,2)) { goto L_8018A694; } // 8018A668
  c->r[0]=R8(c->r[27]+0x00000000u); // 8018A66C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018A670
  if (!crb(c,2)) { goto L_8018A680; } // 8018A674
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[2]=RF64(ea);} // 8018A678
  goto L_8018A684; // 8018A67C
L_8018A680:;
  {uint32_t ea=c->r[2]+0xFFFF8EC0u; c->f[2]=RF64(ea);} // 8018A680
L_8018A684:;
  c->r[3]=0u+0x80440000u; // 8018A684
  {uint32_t ea=c->r[3]+0xFFFF8A6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8018A688
  c->lr=0x8018A690u; f_80196250(c); // 8018A68C
  goto L_8018AB24; // 8018A690
L_8018A694:;
  c->r[0]=R8(c->r[1]+0x00000101u); // 8018A694
  c->r[7]=0u+0x80330000u; // 8018A698
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8018A69C
  c->r[4]=c->r[1]+0x00000102u; // 8018A6A0
  {uint32_t ea=c->r[2]+0xFFFF8ED8u; c->f[2]=RF64(ea);} // 8018A6A4
  c->r[7]=c->r[7]+0x000004C0u; // 8018A6A8
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 8018A6AC
  c->r[3]=0u+0x80000000u; // 8018A6B0
  c->f[31]=c->f[0]-c->f[2]; // 8018A6B4
  goto L_8018A7F8; // 8018A6B8
L_8018A6BC:;
  c->r[5]=c->r[28]-c->r[4]; // 8018A6BC
  c->r[10]=0u+0x00000000u; // 8018A6C0
  c->r[0]=rotl(c->r[5],29)&0xE0000000u; // 8018A6C4
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 8018A6C8
  c->r[0]=c->r[0]-c->r[5]; // 8018A6CC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8018A6D0
  c->r[6]=c->r[0]+c->r[5]; cr0(c,c->r[6]); // 8018A6D4
  if (!crb(c,2)) { goto L_8018A6E0; } // 8018A6D8
  c->r[6]=0u+0x00000008u; // 8018A6DC
L_8018A6E0:;
  cmps(c,1,(int32_t)c->r[6],0); // 8018A6E0
  c->r[5]=0u+0x00000000u; // 8018A6E4
  if (!crb(c,5)) { goto L_8018A7C0; } // 8018A6E8
  cmps(c,0,(int32_t)c->r[6],8); // 8018A6EC
  c->r[8]=c->r[6]+0xFFFFFFF8u; // 8018A6F0
  if (!crb(c,1)) { goto L_8018A798; } // 8018A6F4
  c->r[9]=0u+0x00000000u; // 8018A6F8
  if (crb(c,4)) { goto L_8018A710; } // 8018A6FC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8018A700
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8018A704
  if (crb(c,1)) { goto L_8018A710; } // 8018A708
  c->r[9]=0u+0x00000001u; // 8018A70C
L_8018A710:;
  cmps(c,0,(int32_t)c->r[9],0); // 8018A710
  if (crb(c,2)) { goto L_8018A798; } // 8018A714
  c->r[0]=c->r[8]+0x00000007u; // 8018A718
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8018A71C
  c->ctr=c->r[0]; // 8018A720
  cmps(c,0,(int32_t)c->r[8],0); // 8018A724
  if (!crb(c,1)) { goto L_8018A798; } // 8018A728
L_8018A72C:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)10); // 8018A72C
  c->r[9]=R8(c->r[4]+0x00000000u); // 8018A730
  c->r[8]=R8(c->r[4]+0x00000001u); // 8018A734
  c->r[5]=c->r[5]+0x00000008u; // 8018A738
  c->r[21]=R8(c->r[4]+0x00000002u); // 8018A73C
  c->r[0]=c->r[9]+c->r[0]; // 8018A740
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018A744
  c->r[12]=R8(c->r[4]+0x00000003u); // 8018A748
  c->r[11]=R8(c->r[4]+0x00000004u); // 8018A74C
  c->r[10]=R8(c->r[4]+0x00000005u); // 8018A750
  c->r[0]=c->r[8]+c->r[0]; // 8018A754
  c->r[9]=R8(c->r[4]+0x00000006u); // 8018A758
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018A75C
  c->r[8]=R8(c->r[4]+0x00000007u); // 8018A760
  c->r[4]=c->r[4]+0x00000008u; // 8018A764
  c->r[0]=c->r[21]+c->r[0]; // 8018A768
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018A76C
  c->r[0]=c->r[12]+c->r[0]; // 8018A770
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018A774
  c->r[0]=c->r[11]+c->r[0]; // 8018A778
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018A77C
  c->r[0]=c->r[10]+c->r[0]; // 8018A780
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018A784
  c->r[0]=c->r[9]+c->r[0]; // 8018A788
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018A78C
  c->r[10]=c->r[8]+c->r[0]; // 8018A790
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A72C; } // 8018A794
L_8018A798:;
  c->r[0]=c->r[6]-c->r[5]; // 8018A798
  c->ctr=c->r[0]; // 8018A79C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 8018A7A0
  if (!crb(c,0)) { goto L_8018A7C0; } // 8018A7A4
L_8018A7A8:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)10); // 8018A7A8
  c->r[8]=R8(c->r[4]+0x00000000u); // 8018A7AC
  c->r[5]=c->r[5]+0x00000001u; // 8018A7B0
  c->r[4]=c->r[4]+0x00000001u; // 8018A7B4
  c->r[10]=c->r[8]+c->r[0]; // 8018A7B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018A7A8; } // 8018A7BC
L_8018A7C0:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8018A7C0
  W32(c->r[1]+0x00000134u,c->r[10]); // 8018A7C4
  c->r[5]=c->r[7]+c->r[0]; // 8018A7C8
  cmps(c,0,(int32_t)c->r[10],0); // 8018A7CC
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=RF64(ea);} // 8018A7D0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=RF64(ea);} // 8018A7D4
  c->f[1]=c->f[31]*c->f[1]; // 8018A7D8
  c->f[0]=c->f[0]-c->f[2]; // 8018A7DC
  c->f[0]=c->f[1]+c->f[0]; // 8018A7E0
  if (crb(c,2)) { goto L_8018A7F0; } // 8018A7E4
  fcmp(c,0,c->f[1],c->f[0]); // 8018A7E8
  if (crb(c,2)) { goto L_8018A800; } // 8018A7EC
L_8018A7F0:;
  c->f[31]=c->f[0]; // 8018A7F0
  c->r[29]=c->r[29]-c->r[6]; // 8018A7F4
L_8018A7F8:;
  cmpu(c,0,c->r[4],c->r[28]); // 8018A7F8
  if (crb(c,0)) { IRQCHK(c); goto L_8018A6BC; } // 8018A7FC
L_8018A800:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018A800
  if (!crb(c,0)) { goto L_8018A830; } // 8018A804
  c->r[0]=0u-c->r[29]; // 8018A808
  {uint32_t ea=c->r[2]+0xFFFF8EE0u; c->f[2]=RF64(ea);} // 8018A80C
  c->r[0]=c->r[0]^0x80000000u; // 8018A810
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8018A814
  {uint32_t ea=c->r[2]+0xFFFF8EC8u; c->f[1]=RF64(ea);} // 8018A818
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 8018A81C
  c->f[2]=c->f[0]-c->f[2]; // 8018A820
  c->lr=0x8018A828u; f_801968E4(c); // 8018A824
  c->f[31]=c->f[31]/c->f[1]; // 8018A828
  goto L_8018A850; // 8018A82C
L_8018A830:;
  c->r[0]=c->r[29]^0x80000000u; // 8018A830
  W32(c->r[1]+0x00000134u,c->r[0]); // 8018A834
  {uint32_t ea=c->r[2]+0xFFFF8EE0u; c->f[2]=RF64(ea);} // 8018A838
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=RF64(ea);} // 8018A83C
  {uint32_t ea=c->r[2]+0xFFFF8EC8u; c->f[1]=RF64(ea);} // 8018A840
  c->f[2]=c->f[0]-c->f[2]; // 8018A844
  c->lr=0x8018A84Cu; f_801968E4(c); // 8018A848
  c->f[31]=c->f[31]*c->f[1]; // 8018A84C
L_8018A850:;
  c->f[1]=c->f[31]; // 8018A850
  c->r[3]=c->r[29]|c->r[29]; // 8018A854
  c->lr=0x8018A85Cu; f_8019651C(c); // 8018A858
  c->f[31]=c->f[1]; // 8018A85C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 8018A860
  c->lr=0x8018A868u; f_80188158(c); // 8018A864
  cmps(c,0,(int32_t)c->r[3],2); // 8018A868
  if (!crb(c,2)) { goto L_8018A878; } // 8018A86C
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[31]=RF64(ea);} // 8018A870
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8018A874
L_8018A878:;
  c->f[1]=c->f[31]; // 8018A878
  c->r[3]=c->r[1]+0x000000A4u; // 8018A87C
  c->r[27]=0u+0x00000000u; // 8018A880
  c->lr=0x8018A888u; f_8018A0F8(c); // 8018A884
  c->r[3]=c->r[1]+0x000000A4u; // 8018A888
  c->r[4]=c->r[1]+0x000000FCu; // 8018A88C
  c->lr=0x8018A894u; f_80189A38(c); // 8018A890
  cmps(c,0,(int32_t)c->r[3],0); // 8018A894
  if (!crb(c,2)) { goto L_8018AB10; } // 8018A898
  c->r[3]=c->r[1]+0x000000A4u; // 8018A89C
  c->r[4]=c->r[1]+0x000000FCu; // 8018A8A0
  c->lr=0x8018A8A8u; f_80189B1C(c); // 8018A8A4
  cmps(c,0,(int32_t)c->r[3],0); // 8018A8A8
  if (crb(c,2)) { goto L_8018A8B4; } // 8018A8AC
  c->r[27]=0u+0x00000001u; // 8018A8B0
L_8018A8B4:;
  c->r[0]=cntlz(c->r[27]); // 8018A8B4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8018A8B8
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 8018A8BC
  c->r[29]=0u+0x00000001u; // 8018A8C0
  c->r[30]=0u+0x00000000u; // 8018A8C4
  c->r[31]=0u+0xFFFFFFFFu; // 8018A8C8
L_8018A8CC:;
  cmps(c,0,(int32_t)c->r[28],0); // 8018A8CC
  if (!crb(c,2)) { goto L_8018A900; } // 8018A8D0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018A8D4
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018A8D8
  c->r[0]=addc(c,c->r[0],c->r[29],0); // 8018A8DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8018A8E0
  c->r[0]=addc(c,c->r[3],c->r[30],c->xer_ca); // 8018A8E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018A8E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8018A8EC
  c->lr=0x8018A8F4u; f_80188158(c); // 8018A8F0
  cmps(c,0,(int32_t)c->r[3],2); // 8018A8F4
  if (crb(c,2)) { goto L_8018AB10; } // 8018A8F8
  goto L_8018A918; // 8018A8FC
L_8018A900:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018A900
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018A904
  c->r[0]=addc(c,c->r[0],c->r[31],0); // 8018A908
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8018A90C
  c->r[0]=addc(c,c->r[3],c->r[31],c->xer_ca); // 8018A910
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018A914
L_8018A918:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8018A918
  c->r[3]=c->r[1]+0x00000078u; // 8018A91C
  c->lr=0x8018A924u; f_8018A0F8(c); // 8018A920
  cmps(c,0,(int32_t)c->r[27],0); // 8018A924
  if (crb(c,2)) { goto L_8018A940; } // 8018A928
  c->r[3]=c->r[1]+0x00000078u; // 8018A92C
  c->r[4]=c->r[1]+0x000000FCu; // 8018A930
  c->lr=0x8018A938u; f_80189B1C(c); // 8018A934
  cmps(c,0,(int32_t)c->r[3],0); // 8018A938
  if (crb(c,2)) { goto L_8018AAB0; } // 8018A93C
L_8018A940:;
  cmps(c,0,(int32_t)c->r[27],0); // 8018A940
  if (!crb(c,2)) { goto L_8018AA4C; } // 8018A944
  c->r[3]=c->r[1]+0x000000FCu; // 8018A948
  c->r[4]=c->r[1]+0x00000078u; // 8018A94C
  c->lr=0x8018A954u; f_80189B1C(c); // 8018A950
  cmps(c,0,(int32_t)c->r[3],0); // 8018A954
  if (!crb(c,2)) { goto L_8018AA4C; } // 8018A958
  c->f[0]=c->f[31]; // 8018A95C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8018A960
  c->r[21]=R32(c->r[1]+0x000000A4u); // 8018A964
  c->r[12]=R32(c->r[1]+0x00000078u); // 8018A968
  c->r[22]=R32(c->r[1]+0x000000A8u); // 8018A96C
  c->r[11]=R32(c->r[1]+0x0000007Cu); // 8018A970
  c->r[23]=R32(c->r[1]+0x000000ACu); // 8018A974
  c->r[10]=R32(c->r[1]+0x00000080u); // 8018A978
  c->r[24]=R32(c->r[1]+0x000000B0u); // 8018A97C
  c->r[9]=R32(c->r[1]+0x00000084u); // 8018A980
  c->r[25]=R32(c->r[1]+0x000000B4u); // 8018A984
  c->r[8]=R32(c->r[1]+0x00000088u); // 8018A988
  c->r[26]=R32(c->r[1]+0x000000B8u); // 8018A98C
  c->r[7]=R32(c->r[1]+0x0000008Cu); // 8018A990
  c->r[31]=R32(c->r[1]+0x000000BCu); // 8018A994
  c->r[6]=R32(c->r[1]+0x00000090u); // 8018A998
  c->r[30]=R32(c->r[1]+0x000000C0u); // 8018A99C
  c->r[5]=R32(c->r[1]+0x00000094u); // 8018A9A0
  c->r[29]=R32(c->r[1]+0x000000C4u); // 8018A9A4
  c->r[4]=R32(c->r[1]+0x00000098u); // 8018A9A8
  c->r[28]=R32(c->r[1]+0x000000C8u); // 8018A9AC
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 8018A9B0
  c->r[27]=R16(c->r[1]+0x000000CCu); // 8018A9B4
  c->r[0]=R16(c->r[1]+0x000000A0u); // 8018A9B8
  W32(c->r[1]+0x0000004Cu,c->r[21]); // 8018A9BC
  W32(c->r[1]+0x00000050u,c->r[22]); // 8018A9C0
  W32(c->r[1]+0x00000054u,c->r[23]); // 8018A9C4
  W32(c->r[1]+0x00000058u,c->r[24]); // 8018A9C8
  W32(c->r[1]+0x0000005Cu,c->r[25]); // 8018A9CC
  W32(c->r[1]+0x00000060u,c->r[26]); // 8018A9D0
  W32(c->r[1]+0x00000064u,c->r[31]); // 8018A9D4
  W32(c->r[1]+0x00000068u,c->r[30]); // 8018A9D8
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 8018A9DC
  W32(c->r[1]+0x00000070u,c->r[28]); // 8018A9E0
  W16(c->r[1]+0x00000074u,c->r[27]); // 8018A9E4
  W32(c->r[1]+0x000000A4u,c->r[12]); // 8018A9E8
  W32(c->r[1]+0x000000A8u,c->r[11]); // 8018A9EC
  W32(c->r[1]+0x000000ACu,c->r[10]); // 8018A9F0
  W32(c->r[1]+0x000000B0u,c->r[9]); // 8018A9F4
  W32(c->r[1]+0x000000B4u,c->r[8]); // 8018A9F8
  W32(c->r[1]+0x000000B8u,c->r[7]); // 8018A9FC
  W32(c->r[1]+0x000000BCu,c->r[6]); // 8018AA00
  W32(c->r[1]+0x000000C0u,c->r[5]); // 8018AA04
  W32(c->r[1]+0x000000C4u,c->r[4]); // 8018AA08
  W32(c->r[1]+0x000000C8u,c->r[3]); // 8018AA0C
  W16(c->r[1]+0x000000CCu,c->r[0]); // 8018AA10
  W32(c->r[1]+0x00000078u,c->r[21]); // 8018AA14
  W32(c->r[1]+0x0000007Cu,c->r[22]); // 8018AA18
  W32(c->r[1]+0x00000080u,c->r[23]); // 8018AA1C
  W32(c->r[1]+0x00000084u,c->r[24]); // 8018AA20
  W32(c->r[1]+0x00000088u,c->r[25]); // 8018AA24
  W32(c->r[1]+0x0000008Cu,c->r[26]); // 8018AA28
  W32(c->r[1]+0x00000090u,c->r[31]); // 8018AA2C
  W32(c->r[1]+0x00000094u,c->r[30]); // 8018AA30
  W32(c->r[1]+0x00000098u,c->r[29]); // 8018AA34
  W32(c->r[1]+0x0000009Cu,c->r[28]); // 8018AA38
  W16(c->r[1]+0x000000A0u,c->r[27]); // 8018AA3C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8018AA40
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8018AA44
  goto L_8018AAB0; // 8018AA48
L_8018AA4C:;
  c->r[12]=R32(c->r[1]+0x00000078u); // 8018AA4C
  c->r[11]=R32(c->r[1]+0x0000007Cu); // 8018AA50
  c->r[10]=R32(c->r[1]+0x00000080u); // 8018AA54
  c->r[9]=R32(c->r[1]+0x00000084u); // 8018AA58
  c->r[8]=R32(c->r[1]+0x00000088u); // 8018AA5C
  c->r[7]=R32(c->r[1]+0x0000008Cu); // 8018AA60
  c->r[6]=R32(c->r[1]+0x00000090u); // 8018AA64
  c->r[5]=R32(c->r[1]+0x00000094u); // 8018AA68
  c->r[4]=R32(c->r[1]+0x00000098u); // 8018AA6C
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 8018AA70
  c->r[0]=R16(c->r[1]+0x000000A0u); // 8018AA74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8018AA78
  W32(c->r[1]+0x000000A4u,c->r[12]); // 8018AA7C
  W32(c->r[1]+0x000000A8u,c->r[11]); // 8018AA80
  W32(c->r[1]+0x000000ACu,c->r[10]); // 8018AA84
  W32(c->r[1]+0x000000B0u,c->r[9]); // 8018AA88
  W32(c->r[1]+0x000000B4u,c->r[8]); // 8018AA8C
  W32(c->r[1]+0x000000B8u,c->r[7]); // 8018AA90
  W32(c->r[1]+0x000000BCu,c->r[6]); // 8018AA94
  W32(c->r[1]+0x000000C0u,c->r[5]); // 8018AA98
  W32(c->r[1]+0x000000C4u,c->r[4]); // 8018AA9C
  W32(c->r[1]+0x000000C8u,c->r[3]); // 8018AAA0
  W16(c->r[1]+0x000000CCu,c->r[0]); // 8018AAA4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8018AAA8
  IRQCHK(c); goto L_8018A8CC; // 8018AAAC
L_8018AAB0:;
  c->r[3]=c->r[1]+0x0000004Cu; // 8018AAB0
  c->r[4]=c->r[1]+0x000000FCu; // 8018AAB4
  c->r[5]=c->r[1]+0x000000A4u; // 8018AAB8
  c->lr=0x8018AAC0u; f_80189C1C(c); // 8018AABC
  c->r[3]=c->r[1]+0x00000020u; // 8018AAC0
  c->r[4]=c->r[1]+0x00000078u; // 8018AAC4
  c->r[5]=c->r[1]+0x000000FCu; // 8018AAC8
  c->lr=0x8018AAD0u; f_80189C1C(c); // 8018AACC
  c->r[3]=c->r[1]+0x0000004Cu; // 8018AAD0
  c->r[4]=c->r[1]+0x00000020u; // 8018AAD4
  c->lr=0x8018AADCu; f_80189A38(c); // 8018AAD8
  cmps(c,0,(int32_t)c->r[3],0); // 8018AADC
  if (crb(c,2)) { goto L_8018AAF8; } // 8018AAE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018AAE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8018AAE8
  if (crb(c,2)) { goto L_8018AB10; } // 8018AAEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8018AAF0
  goto L_8018AB10; // 8018AAF4
L_8018AAF8:;
  c->r[3]=c->r[1]+0x0000004Cu; // 8018AAF8
  c->r[4]=c->r[1]+0x00000020u; // 8018AAFC
  c->lr=0x8018AB04u; f_80189B1C(c); // 8018AB00
  cmps(c,0,(int32_t)c->r[3],0); // 8018AB04
  if (!crb(c,2)) { goto L_8018AB10; } // 8018AB08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8018AB0C
L_8018AB10:;
  c->r[0]=R8(c->r[1]+0x000000FCu); // 8018AB10
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018AB14
  if (crb(c,2)) { goto L_8018AB20; } // 8018AB18
  c->f[31]=-c->f[31]; // 8018AB1C
L_8018AB20:;
  c->f[1]=c->f[31]; // 8018AB20
L_8018AB24:;
  c->r[11]=c->r[1]+0x00000170u; // 8018AB24
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 8018AB28
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 8018AB2C
  c->lr=0x8018AB34u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018AB30
  c->r[0]=R32(c->r[1]+0x00000184u); // 8018AB34
  c->lr=c->r[0]; // 8018AB38
  c->r[1]=c->r[1]+0x00000180u; // 8018AB3C
  return; // 8018AB40
}

// abs
void f_8018AB44(Ctx* __restrict c) {
  trace_call(0x8018AB44u);
  c->r[4]=sraw(c,c->r[3],31); // 8018AB44
  c->r[0]=c->r[4]^c->r[3]; // 8018AB48
  c->r[3]=c->r[0]-c->r[4]; // 8018AB4C
  return; // 8018AB50
}

// fn_8018AB54
void f_8018AB54(Ctx* __restrict c) {
  c->r[4]=sraw(c,c->r[3],31); // 8018AB54
  c->r[0]=c->r[4]^c->r[3]; // 8018AB58
  c->r[3]=c->r[0]-c->r[4]; // 8018AB5C
  return; // 8018AB60
}

// __prep_buffer
void f_8018AB64(Ctx* __restrict c) {
  trace_call(0x8018AB64u);
  c->r[4]=R32(c->r[3]+0x00000018u); // 8018AB64
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8018AB68
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8018AB6C
  c->r[5]=R32(c->r[3]+0x00000020u); // 8018AB70
  c->r[0]=c->r[4]&c->r[0]; // 8018AB74
  W32(c->r[3]+0x00000024u,c->r[6]); // 8018AB78
  c->r[0]=c->r[5]-c->r[0]; // 8018AB7C
  W32(c->r[3]+0x00000028u,c->r[0]); // 8018AB80
  W32(c->r[3]+0x00000034u,c->r[4]); // 8018AB84
  return; // 8018AB88
}

// fn_8018AB8C
void f_8018AB8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AB8C
  c->r[0]=c->lr; // 8018AB90
  cmps(c,0,(int32_t)c->r[5],1); // 8018AB94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018AB98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018AB9C
  c->r[31]=c->r[3]|c->r[3]; // 8018ABA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018ABA4
  c->r[30]=c->r[4]|c->r[4]; // 8018ABA8
  c->r[6]=R32(c->r[3]+0x00000018u); // 8018ABAC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8018ABB0
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 8018ABB4
  c->r[4]=R32(c->r[3]+0x00000020u); // 8018ABB8
  c->r[0]=c->r[6]&c->r[0]; // 8018ABBC
  W32(c->r[3]+0x00000024u,c->r[5]); // 8018ABC0
  c->r[0]=c->r[4]-c->r[0]; // 8018ABC4
  W32(c->r[3]+0x00000028u,c->r[0]); // 8018ABC8
  W32(c->r[3]+0x00000034u,c->r[6]); // 8018ABCC
  if (!crb(c,2)) { goto L_8018ABD8; } // 8018ABD0
  W32(c->r[3]+0x00000028u,c->r[4]); // 8018ABD4
L_8018ABD8:;
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8018ABD8
  c->r[5]=c->r[31]+0x00000028u; // 8018ABDC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8018ABE0
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8018ABE4
  c->r[6]=R32(c->r[31]+0x00000048u); // 8018ABE8
  c->ctr=c->r[12]; // 8018ABEC
  if (true) { c->lr=0x8018ABF4u; dispatch(c,c->ctr); } // 8018ABF0
  cmps(c,0,(int32_t)c->r[3],2); // 8018ABF4
  if (!crb(c,2)) { goto L_8018AC04; } // 8018ABF8
  c->r[0]=0u+0x00000000u; // 8018ABFC
  W32(c->r[31]+0x00000028u,c->r[0]); // 8018AC00
L_8018AC04:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018AC04
  if (crb(c,2)) { goto L_8018AC14; } // 8018AC08
  c->r[0]=R32(c->r[31]+0x00000028u); // 8018AC0C
  W32(c->r[30]+0x00000000u,c->r[0]); // 8018AC10
L_8018AC14:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018AC14
  if (crb(c,2)) { goto L_8018AC20; } // 8018AC18
  goto L_8018AC70; // 8018AC1C
L_8018AC20:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8018AC20
  c->r[4]=R32(c->r[31]+0x00000018u); // 8018AC24
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 8018AC28
  c->r[3]=R32(c->r[31]+0x00000028u); // 8018AC2C
  c->r[0]=c->r[4]+c->r[3]; // 8018AC30
  W32(c->r[31]+0x00000018u,c->r[0]); // 8018AC34
  if (!crb(c,2)) { goto L_8018AC6C; } // 8018AC38
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8018AC3C
  c->ctr=c->r[3]; // 8018AC40
  cmps(c,0,(int32_t)c->r[3],0); // 8018AC44
  if (crb(c,2)) { goto L_8018AC6C; } // 8018AC48
L_8018AC4C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8018AC4C
  c->r[4]=c->r[4]+0x00000001u; // 8018AC50
  cmpu(c,0,c->r[0],0x0000000Au); // 8018AC54
  if (!crb(c,2)) { goto L_8018AC68; } // 8018AC58
  c->r[3]=R32(c->r[31]+0x00000018u); // 8018AC5C
  c->r[0]=c->r[3]+0x00000001u; // 8018AC60
  W32(c->r[31]+0x00000018u,c->r[0]); // 8018AC64
L_8018AC68:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018AC4C; } // 8018AC68
L_8018AC6C:;
  c->r[3]=0u+0x00000000u; // 8018AC6C
L_8018AC70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018AC70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018AC74
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018AC78
  c->lr=c->r[0]; // 8018AC7C
  c->r[1]=c->r[1]+0x00000010u; // 8018AC80
  return; // 8018AC84
}

// __flush_buffer
void f_8018AC88(Ctx* __restrict c) {
  trace_call(0x8018AC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AC88
  c->r[0]=c->lr; // 8018AC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018AC90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018AC94
  c->r[31]=c->r[4]|c->r[4]; // 8018AC98
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018AC9C
  c->r[30]=c->r[3]|c->r[3]; // 8018ACA0
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 8018ACA4
  c->r[0]=R32(c->r[3]+0x00000024u); // 8018ACA8
  c->r[0]=c->r[0]-c->r[5]; cr0(c,c->r[0]); // 8018ACAC
  if (crb(c,2)) { goto L_8018AD00; } // 8018ACB0
  c->r[12]=R32(c->r[30]+0x00000040u); // 8018ACB4
  c->r[4]=c->r[5]|c->r[5]; // 8018ACB8
  W32(c->r[3]+0x00000028u,c->r[0]); // 8018ACBC
  c->r[5]=c->r[30]+0x00000028u; // 8018ACC0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8018ACC4
  c->r[6]=R32(c->r[30]+0x00000048u); // 8018ACC8
  c->ctr=c->r[12]; // 8018ACCC
  if (true) { c->lr=0x8018ACD4u; dispatch(c,c->ctr); } // 8018ACD0
  cmps(c,0,(int32_t)c->r[31],0); // 8018ACD4
  if (crb(c,2)) { goto L_8018ACE4; } // 8018ACD8
  c->r[0]=R32(c->r[30]+0x00000028u); // 8018ACDC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8018ACE0
L_8018ACE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018ACE4
  if (crb(c,2)) { goto L_8018ACF0; } // 8018ACE8
  goto L_8018AD28; // 8018ACEC
L_8018ACF0:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 8018ACF0
  c->r[0]=R32(c->r[30]+0x00000028u); // 8018ACF4
  c->r[0]=c->r[3]+c->r[0]; // 8018ACF8
  W32(c->r[30]+0x00000018u,c->r[0]); // 8018ACFC
L_8018AD00:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 8018AD00
  c->r[3]=0u+0x00000000u; // 8018AD04
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 8018AD08
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 8018AD0C
  c->r[5]=R32(c->r[30]+0x00000020u); // 8018AD10
  c->r[0]=c->r[4]&c->r[0]; // 8018AD14
  W32(c->r[30]+0x00000024u,c->r[6]); // 8018AD18
  c->r[0]=c->r[5]-c->r[0]; // 8018AD1C
  W32(c->r[30]+0x00000028u,c->r[0]); // 8018AD20
  W32(c->r[30]+0x00000034u,c->r[4]); // 8018AD24
L_8018AD28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018AD28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018AD2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018AD30
  c->lr=c->r[0]; // 8018AD34
  c->r[1]=c->r[1]+0x00000010u; // 8018AD38
  return; // 8018AD3C
}

// fn_8018AD40
void f_8018AD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AD40
  c->r[0]=c->lr; // 8018AD44
  cmps(c,0,(int32_t)c->r[5],0); // 8018AD48
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018AD4C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018AD50
  c->r[27]=c->r[3]|c->r[3]; // 8018AD54
  c->r[28]=c->r[4]|c->r[4]; // 8018AD58
  c->r[29]=c->r[5]|c->r[5]; // 8018AD5C
  c->r[30]=c->r[6]|c->r[6]; // 8018AD60
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018AD64
  c->r[31]=rotl(c->r[0],10)&0x00000007u; // 8018AD68
  if (!crb(c,2)) { goto L_8018AD74; } // 8018AD6C
  c->lr=0x8018AD74u; f_8018B8A4(c); // 8018AD70
L_8018AD74:;
  c->r[4]=R32(c->r[27]+0x00000008u); // 8018AD74
  c->r[0]=rotl(c->r[4],3)&0x00000007u; cr0(c,c->r[0]); // 8018AD78
  if (!crb(c,2)) { goto L_8018AD88; } // 8018AD7C
  cmps(c,0,(int32_t)c->r[31],0); // 8018AD80
  if (!crb(c,2)) { goto L_8018AD90; } // 8018AD84
L_8018AD88:;
  c->r[3]=0u+0xFFFFFFFFu; // 8018AD88
  goto L_8018AE5C; // 8018AD8C
L_8018AD90:;
  cmpu(c,0,c->r[29],0x00000002u); // 8018AD90
  if (!crb(c,1)) { goto L_8018ADA0; } // 8018AD94
  c->r[3]=0u+0xFFFFFFFFu; // 8018AD98
  goto L_8018AE5C; // 8018AD9C
L_8018ADA0:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 8018ADA0
  cmps(c,0,(int32_t)c->r[3],0); // 8018ADA4
  if (crb(c,2)) { goto L_8018ADB8; } // 8018ADA8
  c->r[0]=rotl(c->r[4],4)&0x00000001u; cr0(c,c->r[0]); // 8018ADAC
  if (crb(c,2)) { goto L_8018ADB8; } // 8018ADB0
  c->lr=0x8018ADB8u; f_80188EA4(c); // 8018ADB4
L_8018ADB8:;
  c->r[4]=R32(c->r[27]+0x00000008u); // 8018ADB8
  c->r[3]=c->r[27]+0x0000000Du; // 8018ADBC
  c->r[6]=R32(c->r[27]+0x00000004u); // 8018ADC0
  cmps(c,0,(int32_t)c->r[29],0); // 8018ADC4
  c->r[5]=0u+0x00000000u; // 8018ADC8
  c->r[6]=(rotl(c->r[29],25)&0x06000000u)|(c->r[6]&~0x06000000u); // 8018ADCC
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 8018ADD0
  c->r[0]=0u+0x00000001u; // 8018ADD4
  W32(c->r[27]+0x00000004u,c->r[6]); // 8018ADD8
  W32(c->r[27]+0x00000008u,c->r[4]); // 8018ADDC
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 8018ADE0
  W32(c->r[27]+0x00000024u,c->r[3]); // 8018ADE4
  W32(c->r[27]+0x00000020u,c->r[0]); // 8018ADE8
  W32(c->r[27]+0x00000028u,c->r[5]); // 8018ADEC
  W32(c->r[27]+0x0000002Cu,c->r[5]); // 8018ADF0
  if (crb(c,2)) { goto L_8018AE00; } // 8018ADF4
  cmpu(c,0,c->r[30],0x00000001u); // 8018ADF8
  if (!crb(c,0)) { goto L_8018AE14; } // 8018ADFC
L_8018AE00:;
  c->r[4]=R32(c->r[27]+0x00000024u); // 8018AE00
  c->r[0]=0u+0x00000000u; // 8018AE04
  c->r[3]=0u+0x00000000u; // 8018AE08
  W8(c->r[4]+0x00000000u,c->r[0]); // 8018AE0C
  goto L_8018AE5C; // 8018AE10
L_8018AE14:;
  cmps(c,0,(int32_t)c->r[28],0); // 8018AE14
  if (!crb(c,2)) { goto L_8018AE44; } // 8018AE18
  c->r[3]=c->r[30]|c->r[30]; // 8018AE1C
  c->lr=0x8018AE24u; f_80188E04(c); // 8018AE20
  cmps(c,0,(int32_t)c->r[3],0); // 8018AE24
  c->r[28]=c->r[3]|c->r[3]; // 8018AE28
  if (!crb(c,2)) { goto L_8018AE38; } // 8018AE2C
  c->r[3]=0u+0xFFFFFFFFu; // 8018AE30
  goto L_8018AE5C; // 8018AE34
L_8018AE38:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 8018AE38
  c->r[0]=c->r[0]|0x10000000u; // 8018AE3C
  W32(c->r[27]+0x00000008u,c->r[0]); // 8018AE40
L_8018AE44:;
  c->r[0]=0u+0x00000000u; // 8018AE44
  W32(c->r[27]+0x0000001Cu,c->r[28]); // 8018AE48
  c->r[3]=0u+0x00000000u; // 8018AE4C
  W32(c->r[27]+0x00000024u,c->r[28]); // 8018AE50
  W32(c->r[27]+0x00000020u,c->r[30]); // 8018AE54
  W32(c->r[27]+0x0000002Cu,c->r[0]); // 8018AE58
L_8018AE5C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018AE5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018AE60
  c->lr=c->r[0]; // 8018AE64
  c->r[1]=c->r[1]+0x00000020u; // 8018AE68
  return; // 8018AE6C
}

// fn_8018AE70
void f_8018AE70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018AE70
  c->r[0]=c->lr; // 8018AE74
  c->r[5]=0u+0x00000000u; // 8018AE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018AE7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018AE80
  c->r[31]=c->r[4]|c->r[4]; // 8018AE84
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018AE88
  c->r[30]=c->r[3]|c->r[3]; // 8018AE8C
  c->r[0]=R8(c->r[4]+0x0000000Au); // 8018AE90
  c->r[6]=R32(c->r[4]+0x00000004u); // 8018AE94
  cmps(c,0,(int32_t)c->r[0],0); // 8018AE98
  W32(c->r[4]+0x00000028u,c->r[5]); // 8018AE9C
  c->r[0]=rotl(c->r[6],10)&0x00000007u; // 8018AEA0
  if (!crb(c,2)) { goto L_8018AEB0; } // 8018AEA4
  cmps(c,0,(int32_t)c->r[0],0); // 8018AEA8
  if (!crb(c,2)) { goto L_8018AEB8; } // 8018AEAC
L_8018AEB0:;
  c->r[3]=0u+0xFFFFFFFFu; // 8018AEB0
  goto L_8018B010; // 8018AEB4
L_8018AEB8:;
  cmps(c,0,(int32_t)c->r[0],2); // 8018AEB8
  if (!crb(c,2)) { goto L_8018AEC4; } // 8018AEBC
  c->lr=0x8018AEC4u; f_8018C49C(c); // 8018AEC0
L_8018AEC4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8018AEC4
  c->r[0]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[0]); // 8018AEC8
  if (!crb(c,2)) { goto L_8018AF20; } // 8018AECC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8018AED0
  c->r[0]=rotl(c->r[3],5)&0x00000002u; cr0(c,c->r[0]); // 8018AED4
  c->r[0]=rotl(c->r[3],5)&0x00000007u; // 8018AED8
  if (crb(c,2)) { goto L_8018AF20; } // 8018AEDC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8018AEE0
  if (crb(c,2)) { goto L_8018AF08; } // 8018AEE4
  c->r[3]=c->r[31]|c->r[31]; // 8018AEE8
  c->r[4]=0u+0x00000000u; // 8018AEEC
  c->r[5]=0u+0x00000002u; // 8018AEF0
  c->lr=0x8018AEF8u; f_8018BD4C(c); // 8018AEF4
  cmps(c,0,(int32_t)c->r[3],0); // 8018AEF8
  if (crb(c,2)) { goto L_8018AF08; } // 8018AEFC
  c->r[3]=0u+0x00000000u; // 8018AF00
  goto L_8018B010; // 8018AF04
L_8018AF08:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8018AF08
  c->r[3]=0u+0x00000001u; // 8018AF0C
  c->r[0]=(rotl(c->r[3],29)&0xE0000000u)|(c->r[0]&~0xE0000000u); // 8018AF10
  W32(c->r[31]+0x00000008u,c->r[0]); // 8018AF14
  c->r[3]=c->r[31]|c->r[31]; // 8018AF18
  c->lr=0x8018AF20u; f_8018AB64(c); // 8018AF1C
L_8018AF20:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8018AF20
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018AF24
  cmpu(c,0,c->r[0],0x00000001u); // 8018AF28
  if (crb(c,2)) { goto L_8018AF48; } // 8018AF2C
  c->r[3]=0u+0x00000001u; // 8018AF30
  c->r[0]=0u+0x00000000u; // 8018AF34
  W8(c->r[31]+0x0000000Au,c->r[3]); // 8018AF38
  c->r[3]=0u+0xFFFFFFFFu; // 8018AF3C
  W32(c->r[31]+0x00000028u,c->r[0]); // 8018AF40
  goto L_8018B010; // 8018AF44
L_8018AF48:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8018AF48
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 8018AF4C
  cmpu(c,0,c->r[0],0x00000002u); // 8018AF50
  if (crb(c,2)) { goto L_8018AF70; } // 8018AF54
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8018AF58
  c->r[0]=R32(c->r[31]+0x00000024u); // 8018AF5C
  c->r[4]=R32(c->r[31]+0x00000020u); // 8018AF60
  c->r[0]=c->r[0]-c->r[3]; // 8018AF64
  cmpu(c,0,c->r[4],c->r[0]); // 8018AF68
  if (!crb(c,2)) { goto L_8018AF9C; } // 8018AF6C
L_8018AF70:;
  c->r[3]=c->r[31]|c->r[31]; // 8018AF70
  c->r[4]=0u+0x00000000u; // 8018AF74
  c->lr=0x8018AF7Cu; f_8018AC88(c); // 8018AF78
  cmps(c,0,(int32_t)c->r[3],0); // 8018AF7C
  if (crb(c,2)) { goto L_8018AF9C; } // 8018AF80
  c->r[3]=0u+0x00000001u; // 8018AF84
  c->r[0]=0u+0x00000000u; // 8018AF88
  W8(c->r[31]+0x0000000Au,c->r[3]); // 8018AF8C
  c->r[3]=0u+0xFFFFFFFFu; // 8018AF90
  W32(c->r[31]+0x00000028u,c->r[0]); // 8018AF94
  goto L_8018B010; // 8018AF98
L_8018AF9C:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8018AF9C
  c->r[4]=R32(c->r[31]+0x00000024u); // 8018AFA0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018AFA4
  W32(c->r[31]+0x00000028u,c->r[0]); // 8018AFA8
  c->r[3]=c->r[4]+0x00000001u; // 8018AFAC
  W8(c->r[4]+0x00000000u,c->r[30]); // 8018AFB0
  c->r[0]=R32(c->r[31]+0x00000004u); // 8018AFB4
  W32(c->r[31]+0x00000024u,c->r[3]); // 8018AFB8
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 8018AFBC
  cmpu(c,0,c->r[0],0x00000002u); // 8018AFC0
  if (crb(c,2)) { goto L_8018B00C; } // 8018AFC4
  cmps(c,0,(int32_t)c->r[0],0); // 8018AFC8
  if (crb(c,2)) { goto L_8018AFD8; } // 8018AFCC
  cmps(c,0,(int32_t)c->r[30],10); // 8018AFD0
  if (!crb(c,2)) { goto L_8018B004; } // 8018AFD4
L_8018AFD8:;
  c->r[3]=c->r[31]|c->r[31]; // 8018AFD8
  c->r[4]=0u+0x00000000u; // 8018AFDC
  c->lr=0x8018AFE4u; f_8018AC88(c); // 8018AFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8018AFE4
  if (crb(c,2)) { goto L_8018B004; } // 8018AFE8
  c->r[3]=0u+0x00000001u; // 8018AFEC
  c->r[0]=0u+0x00000000u; // 8018AFF0
  W8(c->r[31]+0x0000000Au,c->r[3]); // 8018AFF4
  c->r[3]=0u+0xFFFFFFFFu; // 8018AFF8
  W32(c->r[31]+0x00000028u,c->r[0]); // 8018AFFC
  goto L_8018B010; // 8018B000
L_8018B004:;
  c->r[0]=0u+0x00000000u; // 8018B004
  W32(c->r[31]+0x00000028u,c->r[0]); // 8018B008
L_8018B00C:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 8018B00C
L_8018B010:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018B010
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018B014
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018B018
  c->lr=c->r[0]; // 8018B01C
  c->r[1]=c->r[1]+0x00000010u; // 8018B020
  return; // 8018B024
}

// fn_8018B028
void f_8018B028(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018B028
  c->r[0]=c->lr; // 8018B02C
  c->r[4]=0u+0x80330000u; // 8018B030
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018B034
  c->r[4]=c->r[4]+0x00000258u; // 8018B038
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018B03C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018B040
  c->r[30]=0u+0x00000000u; // 8018B044
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018B048
  c->r[29]=c->r[4]+0x00000050u; // 8018B04C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8018B050
  c->r[28]=c->r[3]|c->r[3]; // 8018B054
  goto L_8018B0C0; // 8018B058
L_8018B05C:;
  c->r[3]=c->r[29]|c->r[29]; // 8018B05C
  c->r[4]=0u+0xFFFFFFFFu; // 8018B060
  c->lr=0x8018B068u; f_801925DC(c); // 8018B064
  cmps(c,0,(int32_t)c->r[3],0); // 8018B068
  if (crb(c,0)) { goto L_8018B078; } // 8018B06C
  c->r[3]=0u+0xFFFFFFFFu; // 8018B070
  goto L_8018B0B0; // 8018B074
L_8018B078:;
  c->r[3]=R32(c->r[29]+0x00000028u); // 8018B078
  cmps(c,0,(int32_t)c->r[3],0); // 8018B07C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018B080
  W32(c->r[29]+0x00000028u,c->r[0]); // 8018B084
  if (crb(c,2)) { goto L_8018B0A4; } // 8018B088
  c->r[4]=R32(c->r[29]+0x00000024u); // 8018B08C
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8018B090
  W8(c->r[4]+0x00000000u,c->r[31]); // 8018B094
  c->r[0]=c->r[4]+0x00000001u; // 8018B098
  W32(c->r[29]+0x00000024u,c->r[0]); // 8018B09C
  goto L_8018B0B0; // 8018B0A0
L_8018B0A4:;
  c->r[3]=c->r[31]|c->r[31]; // 8018B0A4
  c->r[4]=c->r[29]|c->r[29]; // 8018B0A8
  c->lr=0x8018B0B0u; f_8018AE70(c); // 8018B0AC
L_8018B0B0:;
  cmps(c,0,(int32_t)c->r[3],-1); // 8018B0B0
  if (!crb(c,2)) { goto L_8018B0C0; } // 8018B0B4
  c->r[30]=0u+0xFFFFFFFFu; // 8018B0B8
  goto L_8018B0D0; // 8018B0BC
L_8018B0C0:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 8018B0C0
  c->r[28]=c->r[28]+0x00000001u; // 8018B0C4
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[31]); // 8018B0C8
  if (!crb(c,2)) { IRQCHK(c); goto L_8018B05C; } // 8018B0CC
L_8018B0D0:;
  cmps(c,0,(int32_t)c->r[30],-1); // 8018B0D0
  if (crb(c,2)) { goto L_8018B130; } // 8018B0D4
  c->r[3]=c->r[29]|c->r[29]; // 8018B0D8
  c->r[4]=0u+0xFFFFFFFFu; // 8018B0DC
  c->lr=0x8018B0E4u; f_801925DC(c); // 8018B0E0
  cmps(c,0,(int32_t)c->r[3],0); // 8018B0E4
  if (crb(c,0)) { goto L_8018B0F4; } // 8018B0E8
  c->r[3]=0u+0xFFFFFFFFu; // 8018B0EC
  goto L_8018B12C; // 8018B0F0
L_8018B0F4:;
  c->r[3]=R32(c->r[29]+0x00000028u); // 8018B0F4
  cmps(c,0,(int32_t)c->r[3],0); // 8018B0F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018B0FC
  W32(c->r[29]+0x00000028u,c->r[0]); // 8018B100
  if (crb(c,2)) { goto L_8018B120; } // 8018B104
  c->r[4]=R32(c->r[29]+0x00000024u); // 8018B108
  c->r[3]=0u+0x0000000Au; // 8018B10C
  W8(c->r[4]+0x00000000u,c->r[3]); // 8018B110
  c->r[0]=c->r[4]+0x00000001u; // 8018B114
  W32(c->r[29]+0x00000024u,c->r[0]); // 8018B118
  goto L_8018B12C; // 8018B11C
L_8018B120:;
  c->r[4]=c->r[29]|c->r[29]; // 8018B120
  c->r[3]=0u+0x0000000Au; // 8018B124
  c->lr=0x8018B12Cu; f_8018AE70(c); // 8018B128
L_8018B12C:;
  c->r[30]=c->r[3]|c->r[3]; // 8018B12C
L_8018B130:;
  c->r[3]=c->r[30]|c->r[30]; // 8018B130
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018B134
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018B138
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018B13C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8018B140
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018B144
  c->lr=c->r[0]; // 8018B148
  c->r[1]=c->r[1]+0x00000020u; // 8018B14C
  return; // 8018B150
}

// fn_8018B154
void f_8018B154(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x000000FFu); // 8018B154
  c->r[0]=0u+0x00000001u; // 8018B158
  if (crb(c,1)) { goto L_8018B164; } // 8018B15C
  c->r[0]=0u+0x00000000u; // 8018B160
L_8018B164:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018B164
  if (crb(c,2)) { goto L_8018B174; } // 8018B168
  c->r[3]=0u+0x00000000u; // 8018B16C
  return; // 8018B170
L_8018B174:;
  c->r[4]=0u+0x80330000u; // 8018B174
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8018B178
  c->r[4]=c->r[4]+0x000006B0u; // 8018B17C
  c->r[3]=R32(c->r[4]+0x00000038u); // 8018B180
  c->r[3]=R32(c->r[3]+0x00000008u); // 8018B184
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018B188
  c->r[3]=rotl(c->r[0],0)&0x00000008u; // 8018B18C
  return; // 8018B190
}

// fn_8018B194
void f_8018B194(Ctx* __restrict c) {
  f_8018B198(c); return; // 8018B194
}

// fn_8018B198
void f_8018B198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018B198
  c->r[0]=c->lr; // 8018B19C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018B1A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018B1A4
  c->r[27]=c->r[4]|c->r[4]; // 8018B1A8
  c->r[28]=c->r[6]|c->r[6]; // 8018B1AC
  c->r[26]=c->r[3]|c->r[3]; // 8018B1B0
  c->r[25]=c->r[5]|c->r[5]; // 8018B1B4
  c->r[4]=0u+0x00000000u; // 8018B1B8
  c->r[3]=c->r[28]|c->r[28]; // 8018B1BC
  c->lr=0x8018B1C4u; f_801925E0(c); // 8018B1C0
  cmps(c,0,(int32_t)c->r[3],0); // 8018B1C4
  if (!crb(c,2)) { goto L_8018B1D8; } // 8018B1C8
  c->r[3]=c->r[28]|c->r[28]; // 8018B1CC
  c->r[4]=0u+0xFFFFFFFFu; // 8018B1D0
  c->lr=0x8018B1D8u; f_801925E0(c); // 8018B1D4
L_8018B1D8:;
  c->r[30]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[25]); cr0(c,c->r[30]); // 8018B1D8
  if (crb(c,2)) { goto L_8018B1F8; } // 8018B1DC
  c->r[0]=R8(c->r[28]+0x0000000Au); // 8018B1E0
  cmps(c,0,(int32_t)c->r[0],0); // 8018B1E4
  if (!crb(c,2)) { goto L_8018B1F8; } // 8018B1E8
  c->r[3]=R32(c->r[28]+0x00000004u); // 8018B1EC
  c->r[0]=rotl(c->r[3],10)&0x00000007u; cr0(c,c->r[0]); // 8018B1F0
  if (!crb(c,2)) { goto L_8018B200; } // 8018B1F4
L_8018B1F8:;
  c->r[3]=0u+0x00000000u; // 8018B1F8
  goto L_8018B4C4; // 8018B1FC
L_8018B200:;
  c->r[0]=rotl(c->r[3],13)&0x00000001u; cr0(c,c->r[0]); // 8018B200
  c->r[31]=0u+0x00000001u; // 8018B204
  if (crb(c,2)) { goto L_8018B21C; } // 8018B208
  c->r[0]=rotl(c->r[3],7)&0x00000003u; // 8018B20C
  cmpu(c,0,c->r[0],0x00000002u); // 8018B210
  if (crb(c,2)) { goto L_8018B21C; } // 8018B214
  c->r[31]=0u+0x00000000u; // 8018B218
L_8018B21C:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8018B21C
  c->r[0]=rotl(c->r[3],3)&0x00000007u; cr0(c,c->r[0]); // 8018B220
  if (!crb(c,2)) { goto L_8018B248; } // 8018B224
  c->r[0]=R32(c->r[28]+0x00000004u); // 8018B228
  c->r[0]=rotl(c->r[0],5)&0x00000001u; cr0(c,c->r[0]); // 8018B22C
  if (crb(c,2)) { goto L_8018B248; } // 8018B230
  c->r[0]=0u+0x00000002u; // 8018B234
  c->r[3]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[3]&~0xE0000000u); // 8018B238
  W32(c->r[28]+0x00000008u,c->r[3]); // 8018B23C
  c->r[0]=0u+0x00000000u; // 8018B240
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B244
L_8018B248:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B248
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018B24C
  cmpu(c,0,c->r[0],0x00000002u); // 8018B250
  if (!crb(c,0)) { goto L_8018B270; } // 8018B254
  c->r[3]=0u+0x00000001u; // 8018B258
  c->r[0]=0u+0x00000000u; // 8018B25C
  W8(c->r[28]+0x0000000Au,c->r[3]); // 8018B260
  c->r[3]=0u+0x00000000u; // 8018B264
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B268
  goto L_8018B4C4; // 8018B26C
L_8018B270:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8018B270
  c->r[0]=rotl(c->r[0],7)&0x00000001u; cr0(c,c->r[0]); // 8018B274
  if (crb(c,2)) { goto L_8018B2A0; } // 8018B278
  c->lr=0x8018B280u; f_801891DC(c); // 8018B27C
  cmps(c,0,(int32_t)c->r[3],0); // 8018B280
  if (crb(c,2)) { goto L_8018B2A0; } // 8018B284
  c->r[3]=0u+0x00000001u; // 8018B288
  c->r[0]=0u+0x00000000u; // 8018B28C
  W8(c->r[28]+0x0000000Au,c->r[3]); // 8018B290
  c->r[3]=0u+0x00000000u; // 8018B294
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B298
  goto L_8018B4C4; // 8018B29C
L_8018B2A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018B2A0
  c->r[29]=0u+0x00000000u; // 8018B2A4
  if (crb(c,2)) { goto L_8018B354; } // 8018B2A8
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B2AC
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018B2B0
  cmpu(c,0,c->r[0],0x00000003u); // 8018B2B4
  if (crb(c,0)) { goto L_8018B354; } // 8018B2B8
L_8018B2BC:;
  c->r[3]=c->r[28]|c->r[28]; // 8018B2BC
  c->r[4]=0u+0x00000000u; // 8018B2C0
  c->lr=0x8018B2C8u; f_801925E0(c); // 8018B2C4
  cmps(c,0,(int32_t)c->r[3],1); // 8018B2C8
  if (!crb(c,2)) { goto L_8018B2F4; } // 8018B2CC
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B2D0
  c->r[29]=c->r[29]+0x00000002u; // 8018B2D4
  c->r[30]=c->r[30]+0xFFFFFFFEu; // 8018B2D8
  c->r[0]=rotl(c->r[0],4)&0x0000000Eu; // 8018B2DC
  c->r[3]=c->r[28]+c->r[0]; // 8018B2E0
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 8018B2E4
  W16(c->r[26]+0x00000000u,c->r[0]); // 8018B2E8
  c->r[26]=c->r[26]+0x00000002u; // 8018B2EC
  goto L_8018B314; // 8018B2F0
L_8018B2F4:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B2F4
  c->r[29]=c->r[29]+0x00000001u; // 8018B2F8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8018B2FC
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018B300
  c->r[3]=c->r[28]+c->r[0]; // 8018B304
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8018B308
  W8(c->r[26]+0x00000000u,c->r[0]); // 8018B30C
  c->r[26]=c->r[26]+0x00000001u; // 8018B310
L_8018B314:;
  c->r[4]=R32(c->r[28]+0x00000008u); // 8018B314
  cmps(c,0,(int32_t)c->r[30],0); // 8018B318
  c->r[3]=rotl(c->r[4],3)&0x00000007u; // 8018B31C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018B320
  c->r[4]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 8018B324
  W32(c->r[28]+0x00000008u,c->r[4]); // 8018B328
  if (crb(c,2)) { goto L_8018B33C; } // 8018B32C
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 8018B330
  cmpu(c,0,c->r[0],0x00000003u); // 8018B334
  if (!crb(c,0)) { IRQCHK(c); goto L_8018B2BC; } // 8018B338
L_8018B33C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B33C
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018B340
  cmpu(c,0,c->r[0],0x00000002u); // 8018B344
  if (!crb(c,2)) { goto L_8018B354; } // 8018B348
  c->r[0]=R32(c->r[28]+0x00000030u); // 8018B34C
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B350
L_8018B354:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018B354
  if (crb(c,2)) { goto L_8018B430; } // 8018B358
  c->r[0]=R32(c->r[28]+0x00000028u); // 8018B35C
  cmps(c,0,(int32_t)c->r[0],0); // 8018B360
  if (!crb(c,2)) { goto L_8018B370; } // 8018B364
  cmps(c,0,(int32_t)c->r[31],0); // 8018B368
  if (crb(c,2)) { goto L_8018B430; } // 8018B36C
L_8018B370:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 8018B370
  cmps(c,0,(int32_t)c->r[0],0); // 8018B374
  if (!crb(c,2)) { goto L_8018B3D4; } // 8018B378
  c->r[3]=c->r[28]|c->r[28]; // 8018B37C
  c->r[4]=0u+0x00000000u; // 8018B380
  c->r[5]=0u+0x00000000u; // 8018B384
  c->lr=0x8018B38Cu; f_8018AB8C(c); // 8018B388
  cmps(c,0,(int32_t)c->r[3],0); // 8018B38C
  if (crb(c,2)) { goto L_8018B3D4; } // 8018B390
  cmps(c,0,(int32_t)c->r[3],1); // 8018B394
  if (!crb(c,2)) { goto L_8018B3B0; } // 8018B398
  c->r[3]=0u+0x00000001u; // 8018B39C
  c->r[0]=0u+0x00000000u; // 8018B3A0
  W8(c->r[28]+0x0000000Au,c->r[3]); // 8018B3A4
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B3A8
  goto L_8018B3CC; // 8018B3AC
L_8018B3B0:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8018B3B0
  c->r[0]=0u+0x00000000u; // 8018B3B4
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B3B8
  c->r[0]=0u+0x00000001u; // 8018B3BC
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 8018B3C0
  W32(c->r[28]+0x00000008u,c->r[3]); // 8018B3C4
  W8(c->r[28]+0x00000009u,c->r[0]); // 8018B3C8
L_8018B3CC:;
  c->r[30]=0u+0x00000000u; // 8018B3CC
  goto L_8018B430; // 8018B3D0
L_8018B3D4:;
  c->r[5]=R32(c->r[28]+0x00000028u); // 8018B3D4
  W32(c->r[1]+0x00000008u,c->r[5]); // 8018B3D8
  cmpu(c,0,c->r[5],c->r[30]); // 8018B3DC
  if (!crb(c,1)) { goto L_8018B3EC; } // 8018B3E0
  c->r[5]=c->r[30]|c->r[30]; // 8018B3E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018B3E8
L_8018B3EC:;
  c->r[4]=R32(c->r[28]+0x00000024u); // 8018B3EC
  c->r[3]=c->r[26]|c->r[26]; // 8018B3F0
  c->lr=0x8018B3F8u; f_80004338(c); // 8018B3F4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8018B3F8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8018B3FC
  c->r[0]=R32(c->r[28]+0x00000028u); // 8018B400
  c->r[30]=c->r[30]-c->r[4]; cr0(c,c->r[30]); // 8018B404
  c->r[3]=c->r[3]+c->r[4]; // 8018B408
  W32(c->r[28]+0x00000024u,c->r[3]); // 8018B40C
  c->r[26]=c->r[26]+c->r[4]; // 8018B410
  c->r[29]=c->r[29]+c->r[4]; // 8018B414
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018B418
  c->r[0]=c->r[0]-c->r[3]; // 8018B41C
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B420
  if (crb(c,2)) { goto L_8018B430; } // 8018B424
  cmps(c,0,(int32_t)c->r[31],0); // 8018B428
  if (!crb(c,2)) { IRQCHK(c); goto L_8018B370; } // 8018B42C
L_8018B430:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018B430
  if (crb(c,2)) { goto L_8018B4C0; } // 8018B434
  cmps(c,0,(int32_t)c->r[31],0); // 8018B438
  if (!crb(c,2)) { goto L_8018B4C0; } // 8018B43C
  c->r[31]=R32(c->r[28]+0x0000001Cu); // 8018B440
  c->r[3]=c->r[28]|c->r[28]; // 8018B444
  c->r[25]=R32(c->r[28]+0x00000020u); // 8018B448
  c->r[4]=c->r[1]+0x00000008u; // 8018B44C
  W32(c->r[28]+0x0000001Cu,c->r[26]); // 8018B450
  c->r[5]=0u+0x00000001u; // 8018B454
  W32(c->r[28]+0x00000020u,c->r[30]); // 8018B458
  c->lr=0x8018B460u; f_8018AB8C(c); // 8018B45C
  cmps(c,0,(int32_t)c->r[3],0); // 8018B460
  if (crb(c,2)) { goto L_8018B4A0; } // 8018B464
  cmps(c,0,(int32_t)c->r[3],1); // 8018B468
  if (!crb(c,2)) { goto L_8018B484; } // 8018B46C
  c->r[3]=0u+0x00000001u; // 8018B470
  c->r[0]=0u+0x00000000u; // 8018B474
  W8(c->r[28]+0x0000000Au,c->r[3]); // 8018B478
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B47C
  goto L_8018B4A0; // 8018B480
L_8018B484:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8018B484
  c->r[0]=0u+0x00000000u; // 8018B488
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B48C
  c->r[0]=0u+0x00000001u; // 8018B490
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 8018B494
  W32(c->r[28]+0x00000008u,c->r[3]); // 8018B498
  W8(c->r[28]+0x00000009u,c->r[0]); // 8018B49C
L_8018B4A0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018B4A0
  c->r[3]=c->r[28]|c->r[28]; // 8018B4A4
  W32(c->r[28]+0x0000001Cu,c->r[31]); // 8018B4A8
  c->r[29]=c->r[29]+c->r[0]; // 8018B4AC
  W32(c->r[28]+0x00000020u,c->r[25]); // 8018B4B0
  c->lr=0x8018B4B8u; f_8018AB64(c); // 8018B4B4
  c->r[0]=0u+0x00000000u; // 8018B4B8
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B4BC
L_8018B4C0:;
  c->r[3]=divwu(c->r[29],c->r[27]); // 8018B4C0
L_8018B4C4:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018B4C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018B4C8
  c->lr=c->r[0]; // 8018B4CC
  c->r[1]=c->r[1]+0x00000030u; // 8018B4D0
  return; // 8018B4D4
}

// fn_8018B4D8
void f_8018B4D8(Ctx* __restrict c) {
  f_8018B4DC(c); return; // 8018B4D8
}

// __fwrite
void f_8018B4DC(Ctx* __restrict c) {
  trace_call(0x8018B4DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018B4DC
  c->r[0]=c->lr; // 8018B4E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018B4E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018B4E8
  c->r[27]=c->r[4]|c->r[4]; // 8018B4EC
  c->r[28]=c->r[6]|c->r[6]; // 8018B4F0
  c->r[26]=c->r[3]|c->r[3]; // 8018B4F4
  c->r[25]=c->r[5]|c->r[5]; // 8018B4F8
  c->r[4]=0u+0x00000000u; // 8018B4FC
  c->r[3]=c->r[28]|c->r[28]; // 8018B500
  c->lr=0x8018B508u; f_801925E0(c); // 8018B504
  cmps(c,0,(int32_t)c->r[3],0); // 8018B508
  if (!crb(c,2)) { goto L_8018B51C; } // 8018B50C
  c->r[3]=c->r[28]|c->r[28]; // 8018B510
  c->r[4]=0u+0xFFFFFFFFu; // 8018B514
  c->lr=0x8018B51Cu; f_801925E0(c); // 8018B518
L_8018B51C:;
  c->r[30]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[25]); cr0(c,c->r[30]); // 8018B51C
  if (crb(c,2)) { goto L_8018B53C; } // 8018B520
  c->r[0]=R8(c->r[28]+0x0000000Au); // 8018B524
  cmps(c,0,(int32_t)c->r[0],0); // 8018B528
  if (!crb(c,2)) { goto L_8018B53C; } // 8018B52C
  c->r[0]=R32(c->r[28]+0x00000004u); // 8018B530
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 8018B534
  if (!crb(c,2)) { goto L_8018B544; } // 8018B538
L_8018B53C:;
  c->r[3]=0u+0x00000000u; // 8018B53C
  goto L_8018B7D4; // 8018B540
L_8018B544:;
  cmpu(c,0,c->r[0],0x00000002u); // 8018B544
  if (!crb(c,2)) { goto L_8018B550; } // 8018B548
  c->lr=0x8018B550u; f_8018C49C(c); // 8018B54C
L_8018B550:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8018B550
  c->r[31]=0u+0x00000001u; // 8018B554
  c->r[4]=0u+0x00000000u; // 8018B558
  c->r[0]=rotl(c->r[3],13)&0x00000001u; cr0(c,c->r[0]); // 8018B55C
  if (crb(c,2)) { goto L_8018B570; } // 8018B560
  c->r[0]=rotl(c->r[3],7)&0x00000003u; // 8018B564
  cmpu(c,0,c->r[0],0x00000002u); // 8018B568
  if (!crb(c,2)) { goto L_8018B574; } // 8018B56C
L_8018B570:;
  c->r[4]=0u+0x00000001u; // 8018B570
L_8018B574:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018B574
  if (!crb(c,2)) { goto L_8018B590; } // 8018B578
  c->r[0]=R32(c->r[28]+0x00000004u); // 8018B57C
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 8018B580
  cmpu(c,0,c->r[0],0x00000001u); // 8018B584
  if (crb(c,2)) { goto L_8018B590; } // 8018B588
  c->r[31]=0u+0x00000000u; // 8018B58C
L_8018B590:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B590
  c->r[0]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[0]); // 8018B594
  if (!crb(c,2)) { goto L_8018B5EC; } // 8018B598
  c->r[3]=R32(c->r[28]+0x00000004u); // 8018B59C
  c->r[0]=rotl(c->r[3],5)&0x00000002u; cr0(c,c->r[0]); // 8018B5A0
  c->r[0]=rotl(c->r[3],5)&0x00000007u; // 8018B5A4
  if (crb(c,2)) { goto L_8018B5EC; } // 8018B5A8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8018B5AC
  if (crb(c,2)) { goto L_8018B5D4; } // 8018B5B0
  c->r[3]=c->r[28]|c->r[28]; // 8018B5B4
  c->r[4]=0u+0x00000000u; // 8018B5B8
  c->r[5]=0u+0x00000002u; // 8018B5BC
  c->lr=0x8018B5C4u; f_8018BD4C(c); // 8018B5C0
  cmps(c,0,(int32_t)c->r[3],0); // 8018B5C4
  if (crb(c,2)) { goto L_8018B5D4; } // 8018B5C8
  c->r[3]=0u+0x00000000u; // 8018B5CC
  goto L_8018B7D4; // 8018B5D0
L_8018B5D4:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B5D4
  c->r[3]=0u+0x00000001u; // 8018B5D8
  c->r[0]=(rotl(c->r[3],29)&0xE0000000u)|(c->r[0]&~0xE0000000u); // 8018B5DC
  W32(c->r[28]+0x00000008u,c->r[0]); // 8018B5E0
  c->r[3]=c->r[28]|c->r[28]; // 8018B5E4
  c->lr=0x8018B5ECu; f_8018AB64(c); // 8018B5E8
L_8018B5EC:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8018B5EC
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018B5F0
  cmpu(c,0,c->r[0],0x00000001u); // 8018B5F4
  if (crb(c,2)) { goto L_8018B614; } // 8018B5F8
  c->r[3]=0u+0x00000001u; // 8018B5FC
  c->r[0]=0u+0x00000000u; // 8018B600
  W8(c->r[28]+0x0000000Au,c->r[3]); // 8018B604
  c->r[3]=0u+0x00000000u; // 8018B608
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B60C
  goto L_8018B7D4; // 8018B610
L_8018B614:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018B614
  c->r[29]=0u+0x00000000u; // 8018B618
  if (crb(c,2)) { goto L_8018B748; } // 8018B61C
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 8018B620
  c->r[4]=R32(c->r[28]+0x00000024u); // 8018B624
  cmpu(c,0,c->r[4],c->r[3]); // 8018B628
  if (!crb(c,2)) { goto L_8018B638; } // 8018B62C
  cmps(c,0,(int32_t)c->r[31],0); // 8018B630
  if (crb(c,2)) { goto L_8018B748; } // 8018B634
L_8018B638:;
  c->r[0]=R32(c->r[28]+0x00000020u); // 8018B638
  c->r[3]=c->r[4]-c->r[3]; // 8018B63C
  c->r[0]=c->r[0]-c->r[3]; // 8018B640
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B644
L_8018B648:;
  c->r[5]=R32(c->r[28]+0x00000028u); // 8018B648
  c->r[25]=0u+0x00000000u; // 8018B64C
  W32(c->r[1]+0x00000008u,c->r[5]); // 8018B650
  cmpu(c,0,c->r[5],c->r[30]); // 8018B654
  if (!crb(c,1)) { goto L_8018B664; } // 8018B658
  c->r[5]=c->r[30]|c->r[30]; // 8018B65C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018B660
L_8018B664:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8018B664
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 8018B668
  cmpu(c,0,c->r[0],0x00000001u); // 8018B66C
  if (!crb(c,2)) { goto L_8018B6A0; } // 8018B670
  cmps(c,0,(int32_t)c->r[5],0); // 8018B674
  if (crb(c,2)) { goto L_8018B6A0; } // 8018B678
  c->r[3]=c->r[26]|c->r[26]; // 8018B67C
  c->r[4]=0u+0x0000000Au; // 8018B680
  c->lr=0x8018B688u; f_8018C144(c); // 8018B684
  cmps(c,0,(int32_t)c->r[3],0); // 8018B688
  c->r[25]=c->r[3]|c->r[3]; // 8018B68C
  if (crb(c,2)) { goto L_8018B6A0; } // 8018B690
  c->r[0]=c->r[3]+0x00000001u; // 8018B694
  c->r[5]=c->r[0]-c->r[26]; // 8018B698
  W32(c->r[1]+0x00000008u,c->r[5]); // 8018B69C
L_8018B6A0:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 8018B6A0
  cmps(c,0,(int32_t)c->r[5],0); // 8018B6A4
  if (crb(c,2)) { goto L_8018B6E0; } // 8018B6A8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8018B6AC
  c->r[4]=c->r[26]|c->r[26]; // 8018B6B0
  c->lr=0x8018B6B8u; f_80004338(c); // 8018B6B4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8018B6B8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8018B6BC
  c->r[0]=R32(c->r[28]+0x00000028u); // 8018B6C0
  c->r[26]=c->r[26]+c->r[4]; // 8018B6C4
  c->r[3]=c->r[3]+c->r[4]; // 8018B6C8
  W32(c->r[28]+0x00000024u,c->r[3]); // 8018B6CC
  c->r[30]=c->r[30]-c->r[4]; // 8018B6D0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018B6D4
  c->r[0]=c->r[0]-c->r[3]; // 8018B6D8
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B6DC
L_8018B6E0:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 8018B6E0
  cmps(c,0,(int32_t)c->r[0],0); // 8018B6E4
  if (crb(c,2)) { goto L_8018B704; } // 8018B6E8
  cmps(c,1,(int32_t)c->r[25],0); // 8018B6EC
  if (!crb(c,6)) { goto L_8018B704; } // 8018B6F0
  c->r[0]=R32(c->r[28]+0x00000004u); // 8018B6F4
  c->r[0]=rotl(c->r[0],7)&0x00000003u; cr0(c,c->r[0]); // 8018B6F8
  if (crb(c,2)) { goto L_8018B704; } // 8018B6FC
  if (!crb(c,6)) { goto L_8018B730; } // 8018B700
L_8018B704:;
  c->r[3]=c->r[28]|c->r[28]; // 8018B704
  c->r[4]=0u+0x00000000u; // 8018B708
  c->lr=0x8018B710u; f_8018AC88(c); // 8018B70C
  cmps(c,0,(int32_t)c->r[3],0); // 8018B710
  if (crb(c,2)) { goto L_8018B730; } // 8018B714
  c->r[3]=0u+0x00000001u; // 8018B718
  c->r[0]=0u+0x00000000u; // 8018B71C
  W8(c->r[28]+0x0000000Au,c->r[3]); // 8018B720
  c->r[30]=0u+0x00000000u; // 8018B724
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B728
  goto L_8018B748; // 8018B72C
L_8018B730:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018B730
  cmps(c,0,(int32_t)c->r[30],0); // 8018B734
  c->r[29]=c->r[29]+c->r[0]; // 8018B738
  if (crb(c,2)) { goto L_8018B748; } // 8018B73C
  cmps(c,0,(int32_t)c->r[31],0); // 8018B740
  if (!crb(c,2)) { IRQCHK(c); goto L_8018B648; } // 8018B744
L_8018B748:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018B748
  if (crb(c,2)) { goto L_8018B7B8; } // 8018B74C
  cmps(c,0,(int32_t)c->r[31],0); // 8018B750
  if (!crb(c,2)) { goto L_8018B7B8; } // 8018B754
  c->r[25]=R32(c->r[28]+0x0000001Cu); // 8018B758
  c->r[0]=c->r[26]+c->r[30]; // 8018B75C
  c->r[31]=R32(c->r[28]+0x00000020u); // 8018B760
  c->r[3]=c->r[28]|c->r[28]; // 8018B764
  W32(c->r[28]+0x0000001Cu,c->r[26]); // 8018B768
  c->r[4]=c->r[1]+0x00000008u; // 8018B76C
  W32(c->r[28]+0x00000020u,c->r[30]); // 8018B770
  W32(c->r[28]+0x00000024u,c->r[0]); // 8018B774
  c->lr=0x8018B77Cu; f_8018AC88(c); // 8018B778
  cmps(c,0,(int32_t)c->r[3],0); // 8018B77C
  if (crb(c,2)) { goto L_8018B798; } // 8018B780
  c->r[3]=0u+0x00000001u; // 8018B784
  c->r[0]=0u+0x00000000u; // 8018B788
  W8(c->r[28]+0x0000000Au,c->r[3]); // 8018B78C
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B790
  goto L_8018B7A0; // 8018B794
L_8018B798:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018B798
  c->r[29]=c->r[29]+c->r[0]; // 8018B79C
L_8018B7A0:;
  W32(c->r[28]+0x0000001Cu,c->r[25]); // 8018B7A0
  c->r[3]=c->r[28]|c->r[28]; // 8018B7A4
  W32(c->r[28]+0x00000020u,c->r[31]); // 8018B7A8
  c->lr=0x8018B7B0u; f_8018AB64(c); // 8018B7AC
  c->r[0]=0u+0x00000000u; // 8018B7B0
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B7B4
L_8018B7B8:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8018B7B8
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 8018B7BC
  cmpu(c,0,c->r[0],0x00000002u); // 8018B7C0
  if (crb(c,2)) { goto L_8018B7D0; } // 8018B7C4
  c->r[0]=0u+0x00000000u; // 8018B7C8
  W32(c->r[28]+0x00000028u,c->r[0]); // 8018B7CC
L_8018B7D0:;
  c->r[3]=divwu(c->r[29],c->r[27]); // 8018B7D0
L_8018B7D4:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018B7D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018B7D8
  c->lr=c->r[0]; // 8018B7DC
  c->r[1]=c->r[1]+0x00000030u; // 8018B7E0
  return; // 8018B7E4
}

// fclose
void f_8018B7E8(Ctx* __restrict c) {
  trace_call(0x8018B7E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018B7E8
  c->r[0]=c->lr; // 8018B7EC
  cmps(c,0,(int32_t)c->r[3],0); // 8018B7F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018B7F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018B7F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018B7FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018B800
  c->r[29]=c->r[3]|c->r[3]; // 8018B804
  if (!crb(c,2)) { goto L_8018B814; } // 8018B808
  c->r[3]=0u+0xFFFFFFFFu; // 8018B80C
  goto L_8018B888; // 8018B810
L_8018B814:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018B814
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 8018B818
  if (!crb(c,2)) { goto L_8018B828; } // 8018B81C
  c->r[3]=0u+0x00000000u; // 8018B820
  goto L_8018B888; // 8018B824
L_8018B828:;
  c->lr=0x8018B82Cu; f_8018B8A4(c); // 8018B828
  c->r[12]=R32(c->r[29]+0x00000044u); // 8018B82C
  c->r[30]=c->r[3]|c->r[3]; // 8018B830
  c->r[3]=R32(c->r[29]+0x00000000u); // 8018B834
  c->ctr=c->r[12]; // 8018B838
  if (true) { c->lr=0x8018B840u; dispatch(c,c->ctr); } // 8018B83C
  c->r[0]=R32(c->r[29]+0x00000008u); // 8018B840
  c->r[5]=0u+0x00000000u; // 8018B844
  c->r[4]=R32(c->r[29]+0x00000004u); // 8018B848
  c->r[31]=c->r[3]|c->r[3]; // 8018B84C
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 8018B850
  W32(c->r[29]+0x00000000u,c->r[5]); // 8018B854
  c->r[4]=rotl(c->r[4],0)&0xFE3FFFFFu; // 8018B858
  W32(c->r[29]+0x00000004u,c->r[4]); // 8018B85C
  if (crb(c,2)) { goto L_8018B86C; } // 8018B860
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8018B864
  c->lr=0x8018B86Cu; f_80188EA4(c); // 8018B868
L_8018B86C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018B86C
  c->r[0]=0u+0x00000000u; // 8018B870
  if (!crb(c,2)) { goto L_8018B880; } // 8018B874
  cmps(c,0,(int32_t)c->r[31],0); // 8018B878
  if (crb(c,2)) { goto L_8018B884; } // 8018B87C
L_8018B880:;
  c->r[0]=0u+0x00000001u; // 8018B880
L_8018B884:;
  c->r[3]=0u-c->r[0]; // 8018B884
L_8018B888:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018B888
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018B88C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018B890
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018B894
  c->lr=c->r[0]; // 8018B898
  c->r[1]=c->r[1]+0x00000020u; // 8018B89C
  return; // 8018B8A0
}

// fflush
void f_8018B8A4(Ctx* __restrict c) {
  trace_call(0x8018B8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018B8A4
  c->r[0]=c->lr; // 8018B8A8
  cmps(c,0,(int32_t)c->r[3],0); // 8018B8AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018B8B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018B8B4
  c->r[31]=c->r[3]|c->r[3]; // 8018B8B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018B8BC
  if (!crb(c,2)) { goto L_8018B8CC; } // 8018B8C0
  c->lr=0x8018B8C8u; f_80189260(c); // 8018B8C4
  goto L_8018B9C0; // 8018B8C8
L_8018B8CC:;
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8018B8CC
  cmps(c,0,(int32_t)c->r[0],0); // 8018B8D0
  if (!crb(c,2)) { goto L_8018B8E4; } // 8018B8D4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8018B8D8
  c->r[0]=rotl(c->r[4],10)&0x00000007u; cr0(c,c->r[0]); // 8018B8DC
  if (!crb(c,2)) { goto L_8018B8EC; } // 8018B8E0
L_8018B8E4:;
  c->r[3]=0u+0xFFFFFFFFu; // 8018B8E4
  goto L_8018B9C0; // 8018B8E8
L_8018B8EC:;
  c->r[0]=rotl(c->r[4],5)&0x00000007u; // 8018B8EC
  cmpu(c,0,c->r[0],0x00000001u); // 8018B8F0
  if (!crb(c,2)) { goto L_8018B900; } // 8018B8F4
  c->r[3]=0u+0x00000000u; // 8018B8F8
  goto L_8018B9C0; // 8018B8FC
L_8018B900:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8018B900
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 8018B904
  cmpu(c,0,c->r[0],0x00000003u); // 8018B908
  if (crb(c,0)) { goto L_8018B91C; } // 8018B90C
  c->r[0]=0u+0x00000002u; // 8018B910
  c->r[4]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 8018B914
  W32(c->r[3]+0x00000008u,c->r[4]); // 8018B918
L_8018B91C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8018B91C
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018B920
  cmpu(c,0,c->r[0],0x00000002u); // 8018B924
  if (!crb(c,2)) { goto L_8018B934; } // 8018B928
  c->r[0]=0u+0x00000000u; // 8018B92C
  W32(c->r[3]+0x00000028u,c->r[0]); // 8018B930
L_8018B934:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8018B934
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 8018B938
  cmpu(c,0,c->r[0],0x00000001u); // 8018B93C
  if (crb(c,2)) { goto L_8018B954; } // 8018B940
  c->r[0]=rotl(c->r[4],0)&0x1FFFFFFFu; // 8018B944
  W32(c->r[3]+0x00000008u,c->r[0]); // 8018B948
  c->r[3]=0u+0x00000000u; // 8018B94C
  goto L_8018B9C0; // 8018B950
L_8018B954:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018B954
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 8018B958
  cmpu(c,0,c->r[0],0x00000001u); // 8018B95C
  if (crb(c,2)) { goto L_8018B96C; } // 8018B960
  c->r[30]=0u+0x00000000u; // 8018B964
  goto L_8018B978; // 8018B968
L_8018B96C:;
  c->r[3]=c->r[31]|c->r[31]; // 8018B96C
  c->lr=0x8018B974u; f_8018BD48(c); // 8018B970
  c->r[30]=c->r[3]|c->r[3]; // 8018B974
L_8018B978:;
  c->r[3]=c->r[31]|c->r[31]; // 8018B978
  c->r[4]=0u+0x00000000u; // 8018B97C
  c->lr=0x8018B984u; f_8018AC88(c); // 8018B980
  cmps(c,0,(int32_t)c->r[3],0); // 8018B984
  if (crb(c,2)) { goto L_8018B9A4; } // 8018B988
  c->r[3]=0u+0x00000001u; // 8018B98C
  c->r[0]=0u+0x00000000u; // 8018B990
  W8(c->r[31]+0x0000000Au,c->r[3]); // 8018B994
  c->r[3]=0u+0xFFFFFFFFu; // 8018B998
  W32(c->r[31]+0x00000028u,c->r[0]); // 8018B99C
  goto L_8018B9C0; // 8018B9A0
L_8018B9A4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8018B9A4
  c->r[4]=0u+0x00000000u; // 8018B9A8
  W32(c->r[31]+0x00000018u,c->r[30]); // 8018B9AC
  c->r[3]=0u+0x00000000u; // 8018B9B0
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 8018B9B4
  W32(c->r[31]+0x00000008u,c->r[0]); // 8018B9B8
  W32(c->r[31]+0x00000028u,c->r[4]); // 8018B9BC
L_8018B9C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018B9C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018B9C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018B9C8
  c->lr=c->r[0]; // 8018B9CC
  c->r[1]=c->r[1]+0x00000010u; // 8018B9D0
  return; // 8018B9D4
}

// fn_8018B9D8
void f_8018B9D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018B9D8
  c->r[0]=c->lr; // 8018B9DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018B9E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018B9E4
  c->r[31]=c->r[4]|c->r[4]; // 8018B9E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018B9EC
  c->r[30]=c->r[3]|c->r[3]; // 8018B9F0
  c->lr=0x8018B9F8u; f_80188FD4(c); // 8018B9F4
  c->r[5]=c->r[3]|c->r[3]; // 8018B9F8
  c->r[3]=c->r[30]|c->r[30]; // 8018B9FC
  c->r[4]=c->r[31]|c->r[31]; // 8018BA00
  c->lr=0x8018BA08u; f_8018BA20(c); // 8018BA04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018BA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018BA0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018BA10
  c->lr=c->r[0]; // 8018BA14
  c->r[1]=c->r[1]+0x00000010u; // 8018BA18
  return; // 8018BA1C
}

// fn_8018BA20
void f_8018BA20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018BA20
  c->r[0]=c->lr; // 8018BA24
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018BA28
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8018BA2C
  c->r[31]=c->r[5]|c->r[5]; // 8018BA30
  W32(c->r[1]+0x00000028u,c->r[30]); // 8018BA34
  c->r[30]=c->r[4]|c->r[4]; // 8018BA38
  W32(c->r[1]+0x00000024u,c->r[29]); // 8018BA3C
  c->r[29]=c->r[3]|c->r[3]; // 8018BA40
  c->lr=0x8018BA48u; f_8018C49C(c); // 8018BA44
  cmps(c,0,(int32_t)c->r[31],0); // 8018BA48
  if (!crb(c,2)) { goto L_8018BA58; } // 8018BA4C
  c->r[3]=0u+0x00000000u; // 8018BA50
  goto L_8018BB50; // 8018BA54
L_8018BA58:;
  if (crb(c,2)) { goto L_8018BAA8; } // 8018BA58
  c->r[0]=R32(c->r[31]+0x00000004u); // 8018BA5C
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 8018BA60
  if (crb(c,2)) { goto L_8018BAA8; } // 8018BA64
  c->r[3]=c->r[31]|c->r[31]; // 8018BA68
  c->lr=0x8018BA70u; f_8018B8A4(c); // 8018BA6C
  c->r[12]=R32(c->r[31]+0x00000044u); // 8018BA70
  c->r[3]=R32(c->r[31]+0x00000000u); // 8018BA74
  c->ctr=c->r[12]; // 8018BA78
  if (true) { c->lr=0x8018BA80u; dispatch(c,c->ctr); } // 8018BA7C
  c->r[0]=R32(c->r[31]+0x00000008u); // 8018BA80
  c->r[4]=0u+0x00000000u; // 8018BA84
  c->r[3]=R32(c->r[31]+0x00000004u); // 8018BA88
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 8018BA8C
  W32(c->r[31]+0x00000000u,c->r[4]); // 8018BA90
  c->r[3]=rotl(c->r[3],0)&0xFE3FFFFFu; // 8018BA94
  W32(c->r[31]+0x00000004u,c->r[3]); // 8018BA98
  if (crb(c,2)) { goto L_8018BAA8; } // 8018BA9C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8018BAA0
  c->lr=0x8018BAA8u; f_80188EA4(c); // 8018BAA4
L_8018BAA8:;
  c->r[3]=c->r[31]|c->r[31]; // 8018BAA8
  c->lr=0x8018BAB0u; f_8018C48C(c); // 8018BAAC
  c->r[3]=c->r[30]|c->r[30]; // 8018BAB0
  c->r[4]=c->r[1]+0x00000010u; // 8018BAB4
  c->lr=0x8018BABCu; f_8018BB6C(c); // 8018BAB8
  cmps(c,0,(int32_t)c->r[3],0); // 8018BABC
  if (!crb(c,2)) { goto L_8018BACC; } // 8018BAC0
  c->r[3]=0u+0x00000000u; // 8018BAC4
  goto L_8018BB50; // 8018BAC8
L_8018BACC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8018BACC
  c->r[3]=c->r[31]|c->r[31]; // 8018BAD0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8018BAD4
  c->r[4]=c->r[1]+0x0000000Cu; // 8018BAD8
  c->r[5]=0u+0x00000000u; // 8018BADC
  c->r[6]=0u+0x00000400u; // 8018BAE0
  c->lr=0x8018BAE8u; f_80189068(c); // 8018BAE4
  c->r[0]=R32(c->r[1]+0x00000010u); // 8018BAE8
  c->r[3]=c->r[29]|c->r[29]; // 8018BAEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018BAF0
  c->r[5]=c->r[31]|c->r[31]; // 8018BAF4
  c->r[4]=c->r[1]+0x00000008u; // 8018BAF8
  c->lr=0x8018BB00u; f_8019DA48(c); // 8018BAFC
  cmps(c,0,(int32_t)c->r[3],0); // 8018BB00
  if (crb(c,2)) { goto L_8018BB30; } // 8018BB04
  c->r[0]=R32(c->r[31]+0x00000008u); // 8018BB08
  c->r[3]=R32(c->r[31]+0x00000004u); // 8018BB0C
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 8018BB10
  c->r[3]=rotl(c->r[3],0)&0xFE3FFFFFu; // 8018BB14
  W32(c->r[31]+0x00000004u,c->r[3]); // 8018BB18
  if (crb(c,2)) { goto L_8018BB28; } // 8018BB1C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8018BB20
  c->lr=0x8018BB28u; f_80188EA4(c); // 8018BB24
L_8018BB28:;
  c->r[3]=0u+0x00000000u; // 8018BB28
  goto L_8018BB50; // 8018BB2C
L_8018BB30:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8018BB30
  c->r[0]=rotl(c->r[0],5)&0x00000004u; cr0(c,c->r[0]); // 8018BB34
  if (crb(c,2)) { goto L_8018BB4C; } // 8018BB38
  c->r[3]=c->r[31]|c->r[31]; // 8018BB3C
  c->r[4]=0u+0x00000000u; // 8018BB40
  c->r[5]=0u+0x00000002u; // 8018BB44
  c->lr=0x8018BB4Cu; f_8018BF10(c); // 8018BB48
L_8018BB4C:;
  c->r[3]=c->r[31]|c->r[31]; // 8018BB4C
L_8018BB50:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018BB50
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8018BB54
  c->r[30]=R32(c->r[1]+0x00000028u); // 8018BB58
  c->r[29]=R32(c->r[1]+0x00000024u); // 8018BB5C
  c->lr=c->r[0]; // 8018BB60
  c->r[1]=c->r[1]+0x00000030u; // 8018BB64
  return; // 8018BB68
}

// fn_8018BB6C
void f_8018BB6C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018BB6C
  c->r[6]=0u+0x00000001u; // 8018BB70
  c->r[5]=R32(c->r[4]+0x00000000u); // 8018BB74
  c->r[5]=(rotl(c->r[6],22)&0x01C00000u)|(c->r[5]&~0x01C00000u); // 8018BB78
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018BB7C
  cmpu(c,0,c->r[6],0x00000072u); // 8018BB80
  c->r[0]=rotl(c->r[5],0)&0xFFC7FFFFu; // 8018BB84
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018BB88
  if (crb(c,2)) { goto L_8018BBA4; } // 8018BB8C
  cmpu(c,0,c->r[6],0x00000077u); // 8018BB90
  if (crb(c,2)) { goto L_8018BBAC; } // 8018BB94
  cmpu(c,0,c->r[6],0x00000061u); // 8018BB98
  if (crb(c,2)) { goto L_8018BBB4; } // 8018BB9C
  goto L_8018BBBC; // 8018BBA0
L_8018BBA4:;
  c->r[7]=0u+0x00000000u; // 8018BBA4
  goto L_8018BBC4; // 8018BBA8
L_8018BBAC:;
  c->r[7]=0u+0x00000002u; // 8018BBAC
  goto L_8018BBC4; // 8018BBB0
L_8018BBB4:;
  c->r[7]=0u+0x00000001u; // 8018BBB4
  goto L_8018BBC4; // 8018BBB8
L_8018BBBC:;
  c->r[3]=0u+0x00000000u; // 8018BBBC
  return; // 8018BBC0
L_8018BBC4:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 8018BBC4
  c->r[3]=c->r[3]+0x00000002u; // 8018BBC8
  c->r[5]=R32(c->r[4]+0x00000000u); // 8018BBCC
  c->r[5]=(rotl(c->r[7],30)&0xC0000000u)|(c->r[5]&~0xC0000000u); // 8018BBD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018BBD4
  W32(c->r[4]+0x00000000u,c->r[5]); // 8018BBD8
  cmps(c,0,(int32_t)c->r[0],98); // 8018BBDC
  if (crb(c,2)) { goto L_8018BBF0; } // 8018BBE0
  cmps(c,0,(int32_t)c->r[0],43); // 8018BBE4
  if (crb(c,2)) { goto L_8018BC10; } // 8018BBE8
  goto L_8018BC2C; // 8018BBEC
L_8018BBF0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018BBF0
  c->r[3]=c->r[5]|0x00080000u; // 8018BBF4
  W32(c->r[4]+0x00000000u,c->r[3]); // 8018BBF8
  cmps(c,0,(int32_t)c->r[0],43); // 8018BBFC
  if (!crb(c,2)) { goto L_8018BC2C; } // 8018BC00
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 8018BC04
  c->r[6]=c->r[0]|0x0000002Bu; // 8018BC08
  goto L_8018BC2C; // 8018BC0C
L_8018BC10:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018BC10
  c->r[3]=rotl(c->r[6],8)&0xFFFFFF00u; // 8018BC14
  c->r[6]=c->r[3]|0x0000002Bu; // 8018BC18
  cmps(c,0,(int32_t)c->r[0],98); // 8018BC1C
  if (!crb(c,2)) { goto L_8018BC2C; } // 8018BC20
  c->r[0]=c->r[5]|0x00080000u; // 8018BC24
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018BC28
L_8018BC2C:;
  cmpu(c,0,c->r[6],0x00000072u); // 8018BC2C
  if (crb(c,2)) { goto L_8018BC60; } // 8018BC30
  cmpu(c,0,c->r[6],0x00000077u); // 8018BC34
  if (crb(c,2)) { goto L_8018BC68; } // 8018BC38
  cmpu(c,0,c->r[6],0x00000061u); // 8018BC3C
  if (crb(c,2)) { goto L_8018BC70; } // 8018BC40
  cmpu(c,0,c->r[6],0x0000722Bu); // 8018BC44
  if (crb(c,2)) { goto L_8018BC78; } // 8018BC48
  cmpu(c,0,c->r[6],0x0000772Bu); // 8018BC4C
  if (crb(c,2)) { goto L_8018BC80; } // 8018BC50
  cmpu(c,0,c->r[6],0x0000612Bu); // 8018BC54
  if (crb(c,2)) { goto L_8018BC88; } // 8018BC58
  goto L_8018BC8C; // 8018BC5C
L_8018BC60:;
  c->r[7]=0u+0x00000001u; // 8018BC60
  goto L_8018BC8C; // 8018BC64
L_8018BC68:;
  c->r[7]=0u+0x00000002u; // 8018BC68
  goto L_8018BC8C; // 8018BC6C
L_8018BC70:;
  c->r[7]=0u+0x00000006u; // 8018BC70
  goto L_8018BC8C; // 8018BC74
L_8018BC78:;
  c->r[7]=0u+0x00000003u; // 8018BC78
  goto L_8018BC8C; // 8018BC7C
L_8018BC80:;
  c->r[7]=0u+0x00000003u; // 8018BC80
  goto L_8018BC8C; // 8018BC84
L_8018BC88:;
  c->r[7]=0u+0x00000007u; // 8018BC88
L_8018BC8C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8018BC8C
  c->r[0]=(rotl(c->r[7],27)&0x38000000u)|(c->r[0]&~0x38000000u); // 8018BC90
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018BC94
  c->r[3]=0u+0x00000001u; // 8018BC98
  return; // 8018BC9C
}

// fn_8018BCA0
void f_8018BCA0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018BCA0
  c->r[6]=0u+0x00000000u; // 8018BCA4
  c->r[4]=rotl(c->r[0],10)&0x00000007u; // 8018BCA8
  c->r[0]=c->r[4]+0x000000FFu; // 8018BCAC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018BCB0
  cmpu(c,0,c->r[0],0x00000001u); // 8018BCB4
  if (crb(c,1)) { goto L_8018BCC8; } // 8018BCB8
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8018BCBC
  cmps(c,0,(int32_t)c->r[0],0); // 8018BCC0
  if (crb(c,2)) { goto L_8018BCD8; } // 8018BCC4
L_8018BCC8:;
  c->r[0]=0u+0x00000028u; // 8018BCC8
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 8018BCCC
  c->r[3]=0u+0xFFFFFFFFu; // 8018BCD0
  return; // 8018BCD4
L_8018BCD8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8018BCD8
  c->r[5]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[5]); // 8018BCDC
  if (!crb(c,2)) { goto L_8018BCEC; } // 8018BCE0
  c->r[3]=R32(c->r[3]+0x00000018u); // 8018BCE4
  return; // 8018BCE8
L_8018BCEC:;
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 8018BCEC
  cmpu(c,0,c->r[5],0x00000003u); // 8018BCF0
  c->r[4]=R32(c->r[3]+0x00000024u); // 8018BCF4
  c->r[0]=R32(c->r[3]+0x00000034u); // 8018BCF8
  c->r[4]=c->r[4]-c->r[8]; // 8018BCFC
  c->r[7]=c->r[0]+c->r[4]; // 8018BD00
  if (crb(c,0)) { goto L_8018BD10; } // 8018BD04
  c->r[6]=c->r[5]+0xFFFFFFFEu; // 8018BD08
  c->r[7]=c->r[7]-c->r[6]; // 8018BD0C
L_8018BD10:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018BD10
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 8018BD14
  if (!crb(c,2)) { goto L_8018BD40; } // 8018BD18
  c->r[0]=c->r[4]-c->r[6]; cr0(c,c->r[0]); // 8018BD1C
  c->ctr=c->r[0]; // 8018BD20
  if (crb(c,2)) { goto L_8018BD40; } // 8018BD24
L_8018BD28:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 8018BD28
  c->r[8]=c->r[8]+0x00000001u; // 8018BD2C
  cmpu(c,0,c->r[0],0x0000000Au); // 8018BD30
  if (!crb(c,2)) { goto L_8018BD3C; } // 8018BD34
  c->r[7]=c->r[7]+0x00000001u; // 8018BD38
L_8018BD3C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018BD28; } // 8018BD3C
L_8018BD40:;
  c->r[3]=c->r[7]|c->r[7]; // 8018BD40
  return; // 8018BD44
}

// fn_8018BD48
void f_8018BD48(Ctx* __restrict c) {
  f_8018BCA0(c); return; // 8018BD48
}

// _fseek
void f_8018BD4C(Ctx* __restrict c) {
  trace_call(0x8018BD4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018BD4C
  c->r[0]=c->lr; // 8018BD50
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018BD54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018BD58
  c->r[31]=c->r[5]|c->r[5]; // 8018BD5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018BD60
  c->r[30]=c->r[3]|c->r[3]; // 8018BD64
  W32(c->r[1]+0x00000008u,c->r[4]); // 8018BD68
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018BD6C
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 8018BD70
  cmpu(c,0,c->r[0],0x00000001u); // 8018BD74
  if (!crb(c,2)) { goto L_8018BD88; } // 8018BD78
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8018BD7C
  cmps(c,0,(int32_t)c->r[0],0); // 8018BD80
  if (crb(c,2)) { goto L_8018BD98; } // 8018BD84
L_8018BD88:;
  c->r[0]=0u+0x00000028u; // 8018BD88
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 8018BD8C
  c->r[3]=0u+0xFFFFFFFFu; // 8018BD90
  goto L_8018BEF8; // 8018BD94
L_8018BD98:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8018BD98
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 8018BD9C
  cmpu(c,0,c->r[0],0x00000001u); // 8018BDA0
  if (!crb(c,2)) { goto L_8018BDD8; } // 8018BDA4
  c->r[4]=0u+0x00000000u; // 8018BDA8
  c->lr=0x8018BDB0u; f_8018AC88(c); // 8018BDAC
  cmps(c,0,(int32_t)c->r[3],0); // 8018BDB0
  if (crb(c,2)) { goto L_8018BDD8; } // 8018BDB4
  c->r[4]=0u+0x00000000u; // 8018BDB8
  W32(c->r[30]+0x00000028u,c->r[4]); // 8018BDBC
  c->r[0]=0u+0x00000001u; // 8018BDC0
  c->r[3]=0u+0xFFFFFFFFu; // 8018BDC4
  W8(c->r[30]+0x0000000Au,c->r[0]); // 8018BDC8
  c->r[0]=0u+0x00000028u; // 8018BDCC
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 8018BDD0
  goto L_8018BEF8; // 8018BDD4
L_8018BDD8:;
  cmps(c,0,(int32_t)c->r[31],1); // 8018BDD8
  if (!crb(c,2)) { goto L_8018BDF8; } // 8018BDDC
  c->r[3]=c->r[30]|c->r[30]; // 8018BDE0
  c->r[31]=0u+0x00000000u; // 8018BDE4
  c->lr=0x8018BDECu; f_8018BCA0(c); // 8018BDE8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018BDEC
  c->r[0]=c->r[0]+c->r[3]; // 8018BDF0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018BDF4
L_8018BDF8:;
  cmps(c,0,(int32_t)c->r[31],2); // 8018BDF8
  if (crb(c,2)) { goto L_8018BE7C; } // 8018BDFC
  c->r[0]=R32(c->r[30]+0x00000004u); // 8018BE00
  c->r[0]=rotl(c->r[0],5)&0x00000007u; // 8018BE04
  cmpu(c,0,c->r[0],0x00000003u); // 8018BE08
  if (crb(c,2)) { goto L_8018BE7C; } // 8018BE0C
  c->r[6]=R32(c->r[30]+0x00000008u); // 8018BE10
  c->r[3]=rotl(c->r[6],3)&0x00000007u; // 8018BE14
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8018BE18
  cmpu(c,0,c->r[0],0x00000001u); // 8018BE1C
  if (crb(c,1)) { goto L_8018BE7C; } // 8018BE20
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018BE24
  c->r[5]=R32(c->r[30]+0x00000018u); // 8018BE28
  cmpu(c,0,c->r[0],c->r[5]); // 8018BE2C
  if (!crb(c,0)) { goto L_8018BE40; } // 8018BE30
  c->r[3]=R32(c->r[30]+0x00000034u); // 8018BE34
  cmpu(c,0,c->r[0],c->r[3]); // 8018BE38
  if (!crb(c,0)) { goto L_8018BE50; } // 8018BE3C
L_8018BE40:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8018BE40
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 8018BE44
  W32(c->r[30]+0x00000008u,c->r[0]); // 8018BE48
  goto L_8018BE88; // 8018BE4C
L_8018BE50:;
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 8018BE50
  c->r[3]=c->r[0]-c->r[3]; // 8018BE54
  c->r[0]=0u+0x00000002u; // 8018BE58
  c->r[3]=c->r[4]+c->r[3]; // 8018BE5C
  W32(c->r[30]+0x00000024u,c->r[3]); // 8018BE60
  c->r[6]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[6]&~0xE0000000u); // 8018BE64
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018BE68
  c->r[0]=c->r[5]-c->r[0]; // 8018BE6C
  W32(c->r[30]+0x00000028u,c->r[0]); // 8018BE70
  W32(c->r[30]+0x00000008u,c->r[6]); // 8018BE74
  goto L_8018BE88; // 8018BE78
L_8018BE7C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8018BE7C
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 8018BE80
  W32(c->r[30]+0x00000008u,c->r[0]); // 8018BE84
L_8018BE88:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8018BE88
  c->r[0]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[0]); // 8018BE8C
  if (!crb(c,2)) { goto L_8018BEF4; } // 8018BE90
  c->r[12]=R32(c->r[30]+0x00000038u); // 8018BE94
  cmps(c,0,(int32_t)c->r[12],0); // 8018BE98
  if (crb(c,2)) { goto L_8018BEE0; } // 8018BE9C
  c->r[5]=c->r[31]|c->r[31]; // 8018BEA0
  c->r[4]=c->r[1]+0x00000008u; // 8018BEA4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8018BEA8
  c->r[6]=R32(c->r[30]+0x00000048u); // 8018BEAC
  c->ctr=c->r[12]; // 8018BEB0
  if (true) { c->lr=0x8018BEB8u; dispatch(c,c->ctr); } // 8018BEB4
  cmps(c,0,(int32_t)c->r[3],0); // 8018BEB8
  if (crb(c,2)) { goto L_8018BEE0; } // 8018BEBC
  c->r[4]=0u+0x00000000u; // 8018BEC0
  W32(c->r[30]+0x00000028u,c->r[4]); // 8018BEC4
  c->r[0]=0u+0x00000001u; // 8018BEC8
  c->r[3]=0u+0xFFFFFFFFu; // 8018BECC
  W8(c->r[30]+0x0000000Au,c->r[0]); // 8018BED0
  c->r[0]=0u+0x00000028u; // 8018BED4
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 8018BED8
  goto L_8018BEF8; // 8018BEDC
L_8018BEE0:;
  c->r[3]=0u+0x00000000u; // 8018BEE0
  W8(c->r[30]+0x00000009u,c->r[3]); // 8018BEE4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018BEE8
  W32(c->r[30]+0x00000018u,c->r[0]); // 8018BEEC
  W32(c->r[30]+0x00000028u,c->r[3]); // 8018BEF0
L_8018BEF4:;
  c->r[3]=0u+0x00000000u; // 8018BEF4
L_8018BEF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018BEF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018BEFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018BF00
  c->lr=c->r[0]; // 8018BF04
  c->r[1]=c->r[1]+0x00000020u; // 8018BF08
  return; // 8018BF0C
}

// fn_8018BF10
void f_8018BF10(Ctx* __restrict c) {
  f_8018BD4C(c); return; // 8018BF10
}

// fn_8018BF14
void f_8018BF14(Ctx* __restrict c) {
  c->r[6]=0u+0x80330000u; // 8018BF14
  c->r[6]=c->r[6]+0x000006B0u; // 8018BF18
  c->r[6]=R32(c->r[6]+0x00000038u); // 8018BF1C
  c->r[12]=R32(c->r[6]+0x00000020u); // 8018BF20
  c->ctr=c->r[12]; // 8018BF24
  if (true) { dispatch(c,c->ctr); return; } // 8018BF28
}

// fn_8018BF2C
void f_8018BF2C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8018BF2C
  if (!crb(c,2)) { goto L_8018BF3C; } // 8018BF30
  c->r[3]=0u+0x00000000u; // 8018BF34
  return; // 8018BF38
L_8018BF3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8018BF3C
  if (!crb(c,2)) { goto L_8018BF4C; } // 8018BF40
  c->r[3]=0u+0xFFFFFFFFu; // 8018BF44
  return; // 8018BF48
L_8018BF4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018BF4C
  if (crb(c,2)) { goto L_8018BF5C; } // 8018BF50
  c->r[0]=R8(c->r[4]+0x00000000u); // 8018BF54
  W16(c->r[3]+0x00000000u,c->r[0]); // 8018BF58
L_8018BF5C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8018BF5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018BF60
  if (!crb(c,2)) { goto L_8018BF70; } // 8018BF64
  c->r[3]=0u+0x00000000u; // 8018BF68
  return; // 8018BF6C
L_8018BF70:;
  c->r[3]=0u+0x00000001u; // 8018BF70
  return; // 8018BF74
}

// fn_8018BF78
void f_8018BF78(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 8018BF78
  if (!crb(c,2)) { goto L_8018BF88; } // 8018BF7C
  c->r[3]=0u+0x00000000u; // 8018BF80
  return; // 8018BF84
L_8018BF88:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 8018BF88
  c->r[3]=0u+0x00000001u; // 8018BF8C
  return; // 8018BF90
}

// wcstombs
void f_8018BF94(Ctx* __restrict c) {
  trace_call(0x8018BF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018BF94
  c->r[0]=c->lr; // 8018BF98
  cmps(c,0,(int32_t)c->r[3],0); // 8018BF9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018BFA0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018BFA4
  c->r[26]=c->r[3]|c->r[3]; // 8018BFA8
  c->r[27]=c->r[5]|c->r[5]; // 8018BFAC
  c->r[29]=0u+0x00000000u; // 8018BFB0
  if (crb(c,2)) { goto L_8018BFC0; } // 8018BFB4
  cmps(c,0,(int32_t)c->r[4],0); // 8018BFB8
  if (!crb(c,2)) { goto L_8018BFC8; } // 8018BFBC
L_8018BFC0:;
  c->r[3]=0u+0x00000000u; // 8018BFC0
  goto L_8018C038; // 8018BFC4
L_8018BFC8:;
  c->r[31]=0u+0x80330000u; // 8018BFC8
  c->r[28]=c->r[4]|c->r[4]; // 8018BFCC
  c->r[31]=c->r[31]+0x000006B0u; // 8018BFD0
  goto L_8018C02C; // 8018BFD4
L_8018BFD8:;
  c->r[4]=R16(c->r[28]+0x00000000u); // 8018BFD8
  cmps(c,0,(int32_t)c->r[4],0); // 8018BFDC
  if (!crb(c,2)) { goto L_8018BFF0; } // 8018BFE0
  c->r[0]=0u+0x00000000u; // 8018BFE4
  W8(c->r[26]+c->r[29],c->r[0]); // 8018BFE8
  goto L_8018C034; // 8018BFEC
L_8018BFF0:;
  c->r[5]=R32(c->r[31]+0x00000038u); // 8018BFF0
  c->r[3]=c->r[1]+0x00000008u; // 8018BFF4
  c->r[12]=R32(c->r[5]+0x00000024u); // 8018BFF8
  c->ctr=c->r[12]; // 8018BFFC
  c->r[28]=c->r[28]+0x00000002u; // 8018C000
  if (true) { c->lr=0x8018C008u; dispatch(c,c->ctr); } // 8018C004
  c->r[0]=c->r[29]+c->r[3]; // 8018C008
  c->r[30]=c->r[3]|c->r[3]; // 8018C00C
  cmpu(c,0,c->r[0],c->r[27]); // 8018C010
  if (crb(c,1)) { goto L_8018C034; } // 8018C014
  c->r[5]=c->r[30]|c->r[30]; // 8018C018
  c->r[3]=c->r[26]+c->r[29]; // 8018C01C
  c->r[4]=c->r[1]+0x00000008u; // 8018C020
  c->lr=0x8018C028u; f_801900A4(c); // 8018C024
  c->r[29]=c->r[29]+c->r[30]; // 8018C028
L_8018C02C:;
  cmpu(c,0,c->r[29],c->r[27]); // 8018C02C
  if (!crb(c,1)) { IRQCHK(c); goto L_8018BFD8; } // 8018C030
L_8018C034:;
  c->r[3]=c->r[29]|c->r[29]; // 8018C034
L_8018C038:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018C038
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018C03C
  c->lr=c->r[0]; // 8018C040
  c->r[1]=c->r[1]+0x00000030u; // 8018C044
  return; // 8018C048
}

// memmove
void f_8018C04C(Ctx* __restrict c) {
  trace_call(0x8018C04Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018C04C
  c->r[0]=c->lr; // 8018C050
  c->r[6]=c->r[3]^c->r[4]; // 8018C054
  cmpu(c,0,c->r[5],0x00000020u); // 8018C058
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C05C
  c->r[0]=cntlz(c->r[6]); // 8018C060
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8018C064
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018C068
  c->r[31]=c->r[3]|c->r[3]; // 8018C06C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 8018C070
  if (crb(c,0)) { goto L_8018C0B4; } // 8018C074
  c->r[0]=rotl(c->r[6],0)&0x00000003u; cr0(c,c->r[0]); // 8018C078
  if (crb(c,2)) { goto L_8018C098; } // 8018C07C
  cmps(c,0,(int32_t)c->r[7],0); // 8018C080
  if (!crb(c,2)) { goto L_8018C090; } // 8018C084
  c->lr=0x8018C08Cu; f_8018C320(c); // 8018C088
  goto L_8018C0AC; // 8018C08C
L_8018C090:;
  c->lr=0x8018C094u; f_8018C3E0(c); // 8018C090
  goto L_8018C0AC; // 8018C094
L_8018C098:;
  cmps(c,0,(int32_t)c->r[7],0); // 8018C098
  if (!crb(c,2)) { goto L_8018C0A8; } // 8018C09C
  c->lr=0x8018C0A4u; f_8018C1BC(c); // 8018C0A0
  goto L_8018C0AC; // 8018C0A4
L_8018C0A8:;
  c->lr=0x8018C0ACu; f_8018C278(c); // 8018C0A8
L_8018C0AC:;
  c->r[3]=c->r[31]|c->r[31]; // 8018C0AC
  goto L_8018C104; // 8018C0B0
L_8018C0B4:;
  cmps(c,0,(int32_t)c->r[7],0); // 8018C0B4
  if (!crb(c,2)) { goto L_8018C0E0; } // 8018C0B8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018C0BC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018C0C0
  c->r[5]=c->r[5]+0x00000001u; // 8018C0C4
  goto L_8018C0D4; // 8018C0C8
L_8018C0CC:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 8018C0CC
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 8018C0D0
L_8018C0D4:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C0D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C0CC; } // 8018C0D8
  goto L_8018C100; // 8018C0DC
L_8018C0E0:;
  c->r[4]=c->r[4]+c->r[5]; // 8018C0E0
  c->r[3]=c->r[3]+c->r[5]; // 8018C0E4
  c->r[5]=c->r[5]+0x00000001u; // 8018C0E8
  goto L_8018C0F8; // 8018C0EC
L_8018C0F0:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 8018C0F0
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018C0F4
L_8018C0F8:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C0F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C0F0; } // 8018C0FC
L_8018C100:;
  c->r[3]=c->r[31]|c->r[31]; // 8018C100
L_8018C104:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018C104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018C108
  c->lr=c->r[0]; // 8018C10C
  c->r[1]=c->r[1]+0x00000010u; // 8018C110
  return; // 8018C114
}

// memchr
void f_8018C118(Ctx* __restrict c) {
  trace_call(0x8018C118u);
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 8018C118
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018C11C
  c->r[5]=c->r[5]+0x00000001u; // 8018C120
  goto L_8018C134; // 8018C124
L_8018C128:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[0]=R8(ea); c->r[3]=ea;} // 8018C128
  cmpu(c,0,c->r[0],c->r[4]); // 8018C12C
  if (crb(c,2)) return; // 8018C130
L_8018C134:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C134
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C128; } // 8018C138
  c->r[3]=0u+0x00000000u; // 8018C13C
  return; // 8018C140
}

// __memrchr
void f_8018C144(Ctx* __restrict c) {
  trace_call(0x8018C144u);
  c->r[3]=c->r[3]+c->r[5]; // 8018C144
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 8018C148
  c->r[5]=c->r[5]+0x00000001u; // 8018C14C
  goto L_8018C160; // 8018C150
L_8018C154:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[3]=ea;} // 8018C154
  cmpu(c,0,c->r[0],c->r[4]); // 8018C158
  if (crb(c,2)) return; // 8018C15C
L_8018C160:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C160
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C154; } // 8018C164
  c->r[3]=0u+0x00000000u; // 8018C168
  return; // 8018C16C
}

// memcmp
void f_8018C170(Ctx* __restrict c) {
  trace_call(0x8018C170u);
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 8018C170
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 8018C174
  c->r[4]=c->r[5]+0x00000001u; // 8018C178
  goto L_8018C1AC; // 8018C17C
L_8018C180:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[3]=R8(ea); c->r[6]=ea;} // 8018C180
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 8018C184
  cmpu(c,0,c->r[3],c->r[0]); // 8018C188
  if (crb(c,2)) { goto L_8018C1AC; } // 8018C18C
  c->r[4]=R8(c->r[6]+0x00000000u); // 8018C190
  c->r[3]=0u+0x00000001u; // 8018C194
  c->r[0]=R8(c->r[7]+0x00000000u); // 8018C198
  cmpu(c,0,c->r[4],c->r[0]); // 8018C19C
  if (!crb(c,0)) return; // 8018C1A0
  c->r[3]=0u+0xFFFFFFFFu; // 8018C1A4
  return; // 8018C1A8
L_8018C1AC:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 8018C1AC
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C180; } // 8018C1B0
  c->r[3]=0u+0x00000000u; // 8018C1B4
  return; // 8018C1B8
}

// fn_8018C1BC
void f_8018C1BC(Ctx* __restrict c) {
  c->r[0]=0u-c->r[3]; // 8018C1BC
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 8018C1C0
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 8018C1C4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018C1C8
  if (crb(c,2)) { goto L_8018C1E4; } // 8018C1CC
  c->r[5]=c->r[5]-c->r[6]; // 8018C1D0
L_8018C1D4:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 8018C1D4
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 8018C1D8
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 8018C1DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C1D4; } // 8018C1E0
L_8018C1E4:;
  c->r[4]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 8018C1E4
  c->r[6]=c->r[7]+0xFFFFFFFDu; // 8018C1E8
  c->r[3]=c->r[3]+0xFFFFFFFDu; // 8018C1EC
  if (crb(c,2)) { goto L_8018C23C; } // 8018C1F0
L_8018C1F4:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 8018C1F4
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 8018C1F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8018C1FC
  c->r[0]=R32(c->r[6]+0x00000008u); // 8018C200
  W32(c->r[3]+0x00000008u,c->r[0]); // 8018C204
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8018C208
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8018C20C
  c->r[0]=R32(c->r[6]+0x00000010u); // 8018C210
  W32(c->r[3]+0x00000010u,c->r[0]); // 8018C214
  c->r[0]=R32(c->r[6]+0x00000014u); // 8018C218
  W32(c->r[3]+0x00000014u,c->r[0]); // 8018C21C
  c->r[0]=R32(c->r[6]+0x00000018u); // 8018C220
  W32(c->r[3]+0x00000018u,c->r[0]); // 8018C224
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 8018C228
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8018C22C
  {uint32_t ea=c->r[6]+0x00000020u; c->r[0]=R32(ea); c->r[6]=ea;} // 8018C230
  {uint32_t ea=c->r[3]+0x00000020u; W32(ea,c->r[0]); c->r[3]=ea;} // 8018C234
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C1F4; } // 8018C238
L_8018C23C:;
  c->r[4]=rotl(c->r[5],30)&0x00000007u; cr0(c,c->r[4]); // 8018C23C
  if (crb(c,2)) { goto L_8018C254; } // 8018C240
L_8018C244:;
  {uint32_t ea=c->r[6]+0x00000004u; c->r[0]=R32(ea); c->r[6]=ea;} // 8018C244
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 8018C248
  {uint32_t ea=c->r[3]+0x00000004u; W32(ea,c->r[0]); c->r[3]=ea;} // 8018C24C
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C244; } // 8018C250
L_8018C254:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 8018C254
  c->r[4]=c->r[6]+0x00000003u; // 8018C258
  c->r[3]=c->r[3]+0x00000003u; // 8018C25C
  if (crb(c,2)) return; // 8018C260
L_8018C264:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 8018C264
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C268
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 8018C26C
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C264; } // 8018C270
  return; // 8018C274
}

// fn_8018C278
void f_8018C278(Ctx* __restrict c) {
  c->r[6]=c->r[3]+c->r[5]; // 8018C278
  c->r[4]=c->r[4]+c->r[5]; // 8018C27C
  c->r[3]=rotl(c->r[6],0)&0x00000003u; cr0(c,c->r[3]); // 8018C280
  if (crb(c,2)) { goto L_8018C29C; } // 8018C284
  c->r[5]=c->r[5]-c->r[3]; // 8018C288
L_8018C28C:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 8018C28C
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8018C290
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 8018C294
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C28C; } // 8018C298
L_8018C29C:;
  c->r[3]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[3]); // 8018C29C
  if (crb(c,2)) { goto L_8018C2EC; } // 8018C2A0
L_8018C2A4:;
  c->r[0]=R32(c->r[4]+0xFFFFFFFCu); // 8018C2A4
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8018C2A8
  W32(c->r[6]+0xFFFFFFFCu,c->r[0]); // 8018C2AC
  c->r[0]=R32(c->r[4]+0xFFFFFFF8u); // 8018C2B0
  W32(c->r[6]+0xFFFFFFF8u,c->r[0]); // 8018C2B4
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8018C2B8
  W32(c->r[6]+0xFFFFFFF4u,c->r[0]); // 8018C2BC
  c->r[0]=R32(c->r[4]+0xFFFFFFF0u); // 8018C2C0
  W32(c->r[6]+0xFFFFFFF0u,c->r[0]); // 8018C2C4
  c->r[0]=R32(c->r[4]+0xFFFFFFECu); // 8018C2C8
  W32(c->r[6]+0xFFFFFFECu,c->r[0]); // 8018C2CC
  c->r[0]=R32(c->r[4]+0xFFFFFFE8u); // 8018C2D0
  W32(c->r[6]+0xFFFFFFE8u,c->r[0]); // 8018C2D4
  c->r[0]=R32(c->r[4]+0xFFFFFFE4u); // 8018C2D8
  W32(c->r[6]+0xFFFFFFE4u,c->r[0]); // 8018C2DC
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->r[0]=R32(ea); c->r[4]=ea;} // 8018C2E0
  {uint32_t ea=c->r[6]+0xFFFFFFE0u; W32(ea,c->r[0]); c->r[6]=ea;} // 8018C2E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C2A4; } // 8018C2E8
L_8018C2EC:;
  c->r[3]=rotl(c->r[5],30)&0x00000007u; cr0(c,c->r[3]); // 8018C2EC
  if (crb(c,2)) { goto L_8018C304; } // 8018C2F0
L_8018C2F4:;
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; c->r[0]=R32(ea); c->r[4]=ea;} // 8018C2F4
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8018C2F8
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; W32(ea,c->r[0]); c->r[6]=ea;} // 8018C2FC
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C2F4; } // 8018C300
L_8018C304:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 8018C304
  if (crb(c,2)) return; // 8018C308
L_8018C30C:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 8018C30C
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C310
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 8018C314
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C30C; } // 8018C318
  return; // 8018C31C
}

