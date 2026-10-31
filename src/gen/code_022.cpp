#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801F09F8
void f_801F09F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F09F8
  c->r[0]=c->lr; // 801F09FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0A00
  c->r[0]=R32(c->r[13]+0xFFFFA320u); // 801F0A04
  cmps(c,0,(int32_t)c->r[0],0); // 801F0A08
  if (!crb(c,2)) { goto L_801F0A20; } // 801F0A0C
  c->r[3]=R32(c->r[13]+0xFFFF95B0u); // 801F0A10
  c->lr=0x801F0A18u; f_8015AE88(c); // 801F0A14
  c->r[0]=0u+0x00000001u; // 801F0A18
  W32(c->r[13]+0xFFFFA320u,c->r[0]); // 801F0A1C
L_801F0A20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0A20
  c->lr=c->r[0]; // 801F0A24
  c->r[1]=c->r[1]+0x00000010u; // 801F0A28
  return; // 801F0A2C
}

// fn_801F0A30
void f_801F0A30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0A30
  c->r[0]=c->lr; // 801F0A34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F0A38
  c->r[11]=c->r[1]+0x00000030u; // 801F0A3C
  c->lr=0x801F0A44u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0A40
  c->r[0]=R32(c->r[13]+0xFFFFA320u); // 801F0A44
  c->r[23]=c->r[3]|c->r[3]; // 801F0A48
  c->r[31]=c->r[4]|c->r[4]; // 801F0A4C
  c->r[24]=c->r[5]|c->r[5]; // 801F0A50
  cmps(c,0,(int32_t)c->r[0],0); // 801F0A54
  c->r[25]=c->r[6]|c->r[6]; // 801F0A58
  c->r[26]=c->r[7]|c->r[7]; // 801F0A5C
  c->r[27]=c->r[8]|c->r[8]; // 801F0A60
  c->r[28]=c->r[9]|c->r[9]; // 801F0A64
  c->r[29]=c->r[10]|c->r[10]; // 801F0A68
  c->r[30]=0u+0x00000000u; // 801F0A6C
  if (!crb(c,2)) { goto L_801F0A84; } // 801F0A70
  c->r[3]=R32(c->r[13]+0xFFFF95B0u); // 801F0A74
  c->lr=0x801F0A7Cu; f_8015AE88(c); // 801F0A78
  c->r[0]=0u+0x00000001u; // 801F0A7C
  W32(c->r[13]+0xFFFFA320u,c->r[0]); // 801F0A80
L_801F0A84:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F0A84
  if (crb(c,2)) { goto L_801F0A98; } // 801F0A88
  c->r[0]=R32(c->r[27]+0x00000000u); // 801F0A8C
  W32(c->r[28]+0x00000000u,c->r[0]); // 801F0A90
  goto L_801F0AA0; // 801F0A94
L_801F0A98:;
  c->r[0]=0u+0xFFFFFFFFu; // 801F0A98
  W32(c->r[28]+0x00000000u,c->r[0]); // 801F0A9C
L_801F0AA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801F0AA0
  if (crb(c,2)) { goto L_801F0AB4; } // 801F0AA4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801F0AA8
  W32(c->r[24]+0x00000000u,c->r[0]); // 801F0AAC
  goto L_801F0AC0; // 801F0AB0
L_801F0AB4:;
  c->r[0]=0u+0xFFFFFFFFu; // 801F0AB4
  c->r[30]=0u+0xFFFFFFFDu; // 801F0AB8
  W32(c->r[24]+0x00000000u,c->r[0]); // 801F0ABC
L_801F0AC0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F0AC0
  if (!crb(c,2)) { goto L_801F0ACC; } // 801F0AC4
  c->r[30]=0u+0xFFFFFFFDu; // 801F0AC8
L_801F0ACC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F0ACC
  if (!crb(c,2)) { goto L_801F0AE4; } // 801F0AD0
  c->r[3]=0u+0x00000000u; // 801F0AD4
  c->r[0]=0u+0xFFFFFFFFu; // 801F0AD8
  W32(c->r[25]+0x00000000u,c->r[3]); // 801F0ADC
  W32(c->r[24]+0x00000000u,c->r[0]); // 801F0AE0
L_801F0AE4:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801F0AE4
  cmps(c,0,(int32_t)c->r[0],0); // 801F0AE8
  if (!crb(c,0)) { goto L_801F0AF8; } // 801F0AEC
  c->r[0]=0u+0x00000000u; // 801F0AF0
  W32(c->r[29]+0x00000000u,c->r[0]); // 801F0AF4
L_801F0AF8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F0AF8
  if (crb(c,2)) { goto L_801F0B0C; } // 801F0AFC
  c->r[0]=0u+0x00000000u; // 801F0B00
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F0B04
  W32(c->r[27]+0x00000000u,c->r[0]); // 801F0B08
L_801F0B0C:;
  c->r[11]=c->r[1]+0x00000030u; // 801F0B0C
  c->r[3]=c->r[30]|c->r[30]; // 801F0B10
  c->lr=0x801F0B18u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F0B14
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F0B18
  c->lr=c->r[0]; // 801F0B1C
  c->r[1]=c->r[1]+0x00000030u; // 801F0B20
  return; // 801F0B24
}

// fn_801F0B28
void f_801F0B28(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x0000000Au); // 801F0B28
  if (!crb(c,2)) { goto L_801F0B38; } // 801F0B2C
  c->r[3]=0u+0x00000001u; // 801F0B30
  return; // 801F0B34
L_801F0B38:;
  cmpu(c,0,c->r[3],0x0000000Du); // 801F0B38
  if (!crb(c,2)) { goto L_801F0B54; } // 801F0B3C
  c->r[0]=c->r[4]+0xFFFFFFF6u; // 801F0B40
  c->r[0]=cntlz(c->r[0]); // 801F0B44
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801F0B48
  c->r[3]=c->r[3]+0x00000001u; // 801F0B4C
  return; // 801F0B50
L_801F0B54:;
  c->r[3]=0u+0x00000000u; // 801F0B54
  return; // 801F0B58
}

// fn_801F0B5C
void f_801F0B5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0B5C
  c->r[0]=c->lr; // 801F0B60
  cmps(c,0,(int32_t)c->r[6],0); // 801F0B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0B68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F0B6C
  c->r[31]=c->r[5]|c->r[5]; // 801F0B70
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F0B74
  c->r[30]=c->r[4]|c->r[4]; // 801F0B78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F0B7C
  c->r[29]=c->r[3]|c->r[3]; // 801F0B80
  if (crb(c,2)) { goto L_801F0C10; } // 801F0B84
  c->r[5]=c->r[30]+0xFFFFFFFFu; // 801F0B88
  c->r[4]=0u+0x00000000u; // 801F0B8C
  c->lr=0x801F0B94u; f_80004688(c); // 801F0B90
  cmps(c,0,(int32_t)c->r[31],2); // 801F0B94
  if (crb(c,2)) { goto L_801F0BE8; } // 801F0B98
  if (!crb(c,0)) { goto L_801F0BAC; } // 801F0B9C
  cmps(c,0,(int32_t)c->r[31],1); // 801F0BA0
  if (!crb(c,0)) { goto L_801F0BB8; } // 801F0BA4
  goto L_801F0C4C; // 801F0BA8
L_801F0BAC:;
  cmps(c,0,(int32_t)c->r[31],4); // 801F0BAC
  if (!crb(c,0)) { goto L_801F0C4C; } // 801F0BB0
  goto L_801F0BFC; // 801F0BB4
L_801F0BB8:;
  c->r[3]=c->r[29]+c->r[30]; // 801F0BB8
  c->r[0]=0u+0x0000000Du; // 801F0BBC
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 801F0BC0
  c->r[5]=c->r[30]+0xFFFFFFFFu; // 801F0BC4
  c->r[4]=0u+0x00000000u; // 801F0BC8
  c->lr=0x801F0BD0u; f_80004688(c); // 801F0BCC
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801F0BD0
  c->r[5]=0u+0x0000000Au; // 801F0BD4
  c->r[4]=c->r[29]+c->r[0]; // 801F0BD8
  c->r[3]=0u+0x00000002u; // 801F0BDC
  W8(c->r[4]+0xFFFFFFFFu,c->r[5]); // 801F0BE0
  goto L_801F0C50; // 801F0BE4
L_801F0BE8:;
  c->r[3]=c->r[29]+c->r[30]; // 801F0BE8
  c->r[0]=0u+0x0000000Du; // 801F0BEC
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 801F0BF0
  c->r[3]=0u+0x00000001u; // 801F0BF4
  goto L_801F0C50; // 801F0BF8
L_801F0BFC:;
  c->r[3]=c->r[29]+c->r[30]; // 801F0BFC
  c->r[0]=0u+0x0000000Au; // 801F0C00
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 801F0C04
  c->r[3]=0u+0x00000001u; // 801F0C08
  goto L_801F0C50; // 801F0C0C
L_801F0C10:;
  cmps(c,0,(int32_t)c->r[5],2); // 801F0C10
  if (crb(c,2)) { goto L_801F0C3C; } // 801F0C14
  if (!crb(c,0)) { goto L_801F0C28; } // 801F0C18
  cmps(c,0,(int32_t)c->r[5],1); // 801F0C1C
  if (!crb(c,0)) { goto L_801F0C34; } // 801F0C20
  goto L_801F0C4C; // 801F0C24
L_801F0C28:;
  cmps(c,0,(int32_t)c->r[5],4); // 801F0C28
  if (!crb(c,0)) { goto L_801F0C4C; } // 801F0C2C
  goto L_801F0C44; // 801F0C30
L_801F0C34:;
  c->r[3]=0u+0x00000002u; // 801F0C34
  goto L_801F0C50; // 801F0C38
L_801F0C3C:;
  c->r[3]=0u+0x00000001u; // 801F0C3C
  goto L_801F0C50; // 801F0C40
L_801F0C44:;
  c->r[3]=0u+0x00000001u; // 801F0C44
  goto L_801F0C50; // 801F0C48
L_801F0C4C:;
  c->r[3]=0u+0x00000000u; // 801F0C4C
L_801F0C50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0C50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F0C54
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F0C58
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F0C5C
  c->lr=c->r[0]; // 801F0C60
  c->r[1]=c->r[1]+0x00000020u; // 801F0C64
  return; // 801F0C68
}

// fn_801F0C6C
void f_801F0C6C(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 801F0C6C
  f_801F18E8(c); return; // 801F0C70
}

// fn_801F0C74
void f_801F0C74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0C74
  c->r[0]=c->lr; // 801F0C78
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F0C7C
  c->r[11]=c->r[1]+0x00000040u; // 801F0C80
  c->lr=0x801F0C88u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0C84
  c->r[26]=c->r[5]|c->r[5]; // 801F0C88
  c->r[8]=0u+0xFFFFFFFFu; // 801F0C8C
  c->r[9]=0u+0x00000001u; // 801F0C90
  c->r[5]=0u-c->r[3]; // 801F0C94
  c->r[0]=0u-c->r[26]; // 801F0C98
  c->r[27]=c->r[6]|c->r[6]; // 801F0C9C
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F0CA0
  c->r[5]=c->r[5]|c->r[3]; // 801F0CA4
  c->r[24]=c->r[3]|c->r[3]; // 801F0CA8
  c->r[0]=c->r[0]|c->r[26]; // 801F0CAC
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F0CB0
  c->r[28]=c->r[7]|c->r[7]; // 801F0CB4
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F0CB8
  c->r[25]=c->r[4]|c->r[4]; // 801F0CBC
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F0CC0
  c->r[8]=c->r[27]|c->r[27]; // 801F0CC4
  c->r[5]=c->r[1]+0x00000010u; // 801F0CC8
  c->r[6]=c->r[1]+0x0000000Cu; // 801F0CCC
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F0CD0
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F0CD4
  c->r[9]=c->r[1]+0x00000014u; // 801F0CD8
  c->r[10]=c->r[1]+0x00000008u; // 801F0CDC
  c->r[31]=0u+0x00000000u; // 801F0CE0
  c->r[30]=0u+0x00000000u; // 801F0CE4
  c->lr=0x801F0CECu; f_801F0A30(c); // 801F0CE8
  cmps(c,0,(int32_t)c->r[3],0); // 801F0CEC
  c->r[29]=c->r[3]|c->r[3]; // 801F0CF0
  if (crb(c,2)) { goto L_801F0CFC; } // 801F0CF4
  goto L_801F0E98; // 801F0CF8
L_801F0CFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0CFC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0D00
  if (crb(c,1)) { goto L_801F0D14; } // 801F0D04
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F0D08
  cmps(c,0,(int32_t)c->r[0],0); // 801F0D0C
  if (!crb(c,2)) { goto L_801F0E58; } // 801F0D10
L_801F0D14:;
  c->r[0]=R16(c->r[26]+0x00000000u); // 801F0D14
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F0D18
  if (!crb(c,2)) { goto L_801F0D2C; } // 801F0D1C
  c->r[31]=0u+0x00000001u; // 801F0D20
  c->r[26]=c->r[26]+0x00000002u; // 801F0D24
  goto L_801F0E58; // 801F0D28
L_801F0D2C:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F0D2C
  if (!crb(c,2)) { goto L_801F0E58; } // 801F0D30
  cmps(c,0,(int32_t)c->r[25],0); // 801F0D34
  if (crb(c,2)) { goto L_801F0D44; } // 801F0D38
  c->r[0]=0u+0x00000000u; // 801F0D3C
  W32(c->r[25]+0x00000000u,c->r[0]); // 801F0D40
L_801F0D44:;
  c->r[0]=0u+0x00000000u; // 801F0D44
  c->r[3]=0u+0xFFFFFFFCu; // 801F0D48
  W32(c->r[27]+0x00000000u,c->r[0]); // 801F0D4C
  goto L_801F0E98; // 801F0D50
  goto L_801F0E58; // 801F0D54
L_801F0D58:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F0D58
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F0D5C
  if (crb(c,0)) { goto L_801F0D78; } // 801F0D60
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0D64
  cmps(c,0,(int32_t)c->r[0],0); // 801F0D68
  if (crb(c,2)) { goto L_801F0D78; } // 801F0D6C
  c->r[29]=0u+0xFFFFFFFFu; // 801F0D70
  goto L_801F0E7C; // 801F0D74
L_801F0D78:;
  cmps(c,0,(int32_t)c->r[28],0); // 801F0D78
  if (!crb(c,1)) { goto L_801F0E24; } // 801F0D7C
  c->r[0]=c->r[3]-c->r[31]; // 801F0D80
  c->r[3]=c->r[22]|c->r[22]; // 801F0D84
  cmps(c,0,(int32_t)c->r[0],1); // 801F0D88
  c->r[4]=0u+0x00000000u; // 801F0D8C
  if (crb(c,1)) { goto L_801F0DA0; } // 801F0D90
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F0D94
  cmps(c,0,(int32_t)c->r[0],0); // 801F0D98
  if (!crb(c,2)) { goto L_801F0DA4; } // 801F0D9C
L_801F0DA0:;
  c->r[4]=0u+0x00000001u; // 801F0DA0
L_801F0DA4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F0DA4
  if (crb(c,2)) { goto L_801F0DB4; } // 801F0DA8
  c->r[4]=R16(c->r[26]+0x00000002u); // 801F0DAC
  goto L_801F0DB8; // 801F0DB0
L_801F0DB4:;
  c->r[4]=0u+0x00000000u; // 801F0DB4
L_801F0DB8:;
  c->lr=0x801F0DBCu; f_801F0B28(c); // 801F0DB8
  cmps(c,0,(int32_t)c->r[3],0); // 801F0DBC
  c->r[23]=c->r[3]|c->r[3]; // 801F0DC0
  if (!crb(c,1)) { goto L_801F0E24; } // 801F0DC4
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F0DC8
  c->r[3]=c->r[24]|c->r[24]; // 801F0DCC
  c->r[5]=c->r[28]|c->r[28]; // 801F0DD0
  c->r[4]=0u+0x00000001u; // 801F0DD4
  c->lr=0x801F0DDCu; f_801F0B5C(c); // 801F0DD8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F0DDC
  c->r[0]=c->r[0]-c->r[30]; // 801F0DE0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F0DE4
  if (!crb(c,0)) { goto L_801F0E00; } // 801F0DE8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0DF0
  if (crb(c,2)) { goto L_801F0E00; } // 801F0DF4
  c->r[29]=0u+0xFFFFFFFFu; // 801F0DF8
  goto L_801F0E7C; // 801F0DFC
L_801F0E00:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0E00
  c->r[4]=rotl(c->r[23],1)&0xFFFFFFFEu; // 801F0E04
  c->r[26]=c->r[26]+c->r[4]; // 801F0E08
  c->r[31]=c->r[31]+c->r[23]; // 801F0E0C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0E10
  c->r[30]=c->r[30]+c->r[3]; // 801F0E14
  if (crb(c,2)) { goto L_801F0E58; } // 801F0E18
  c->r[24]=c->r[24]+c->r[3]; // 801F0E1C
  goto L_801F0E58; // 801F0E20
L_801F0E24:;
  cmpu(c,0,c->r[22],0x00000080u); // 801F0E24
  if (!crb(c,0)) { goto L_801F0E50; } // 801F0E28
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0E2C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0E30
  if (crb(c,2)) { goto L_801F0E40; } // 801F0E34
  W8(c->r[24]+0x00000000u,c->r[22]); // 801F0E38
  c->r[24]=c->r[24]+0x00000001u; // 801F0E3C
L_801F0E40:;
  c->r[30]=c->r[30]+0x00000001u; // 801F0E40
  c->r[26]=c->r[26]+0x00000002u; // 801F0E44
  c->r[31]=c->r[31]+0x00000001u; // 801F0E48
  goto L_801F0E58; // 801F0E4C
L_801F0E50:;
  c->r[29]=0u+0xFFFFFFFEu; // 801F0E50
  goto L_801F0E7C; // 801F0E54
L_801F0E58:;
  c->r[22]=R16(c->r[26]+0x00000000u); // 801F0E58
  cmps(c,0,(int32_t)c->r[22],0); // 801F0E5C
  if (crb(c,2)) { goto L_801F0E7C; } // 801F0E60
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F0E64
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801F0E68
  if (crb(c,0)) { IRQCHK(c); goto L_801F0D58; } // 801F0E6C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F0E70
  cmps(c,0,(int32_t)c->r[0],0); // 801F0E74
  if (crb(c,2)) { IRQCHK(c); goto L_801F0D58; } // 801F0E78
L_801F0E7C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F0E7C
  if (crb(c,2)) { goto L_801F0E88; } // 801F0E80
  W32(c->r[27]+0x00000000u,c->r[31]); // 801F0E84
L_801F0E88:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F0E88
  if (crb(c,2)) { goto L_801F0E94; } // 801F0E8C
  W32(c->r[25]+0x00000000u,c->r[30]); // 801F0E90
L_801F0E94:;
  c->r[3]=c->r[29]|c->r[29]; // 801F0E94
L_801F0E98:;
  c->r[11]=c->r[1]+0x00000040u; // 801F0E98
  c->lr=0x801F0EA0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F0E9C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F0EA0
  c->lr=c->r[0]; // 801F0EA4
  c->r[1]=c->r[1]+0x00000040u; // 801F0EA8
  return; // 801F0EAC
}

// fn_801F0EB0
void f_801F0EB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0EB0
  c->r[0]=c->lr; // 801F0EB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F0EB8
  c->r[11]=c->r[1]+0x00000040u; // 801F0EBC
  c->lr=0x801F0EC4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0EC0
  c->r[26]=c->r[5]|c->r[5]; // 801F0EC4
  c->r[8]=0u+0xFFFFFFFFu; // 801F0EC8
  c->r[9]=0u+0x00000001u; // 801F0ECC
  c->r[5]=0u-c->r[3]; // 801F0ED0
  c->r[0]=0u-c->r[26]; // 801F0ED4
  c->r[27]=c->r[6]|c->r[6]; // 801F0ED8
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F0EDC
  c->r[5]=c->r[5]|c->r[3]; // 801F0EE0
  c->r[24]=c->r[3]|c->r[3]; // 801F0EE4
  c->r[0]=c->r[0]|c->r[26]; // 801F0EE8
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F0EEC
  c->r[28]=c->r[7]|c->r[7]; // 801F0EF0
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F0EF4
  c->r[25]=c->r[4]|c->r[4]; // 801F0EF8
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F0EFC
  c->r[8]=c->r[27]|c->r[27]; // 801F0F00
  c->r[5]=c->r[1]+0x00000010u; // 801F0F04
  c->r[6]=c->r[1]+0x0000000Cu; // 801F0F08
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F0F0C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F0F10
  c->r[9]=c->r[1]+0x00000014u; // 801F0F14
  c->r[10]=c->r[1]+0x00000008u; // 801F0F18
  c->r[31]=0u+0x00000000u; // 801F0F1C
  c->r[30]=0u+0x00000000u; // 801F0F20
  c->lr=0x801F0F28u; f_801F0A30(c); // 801F0F24
  cmps(c,0,(int32_t)c->r[3],0); // 801F0F28
  c->r[29]=c->r[3]|c->r[3]; // 801F0F2C
  if (crb(c,2)) { goto L_801F1038; } // 801F0F30
  goto L_801F1078; // 801F0F34
  goto L_801F1038; // 801F0F38
L_801F0F3C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F0F3C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F0F40
  if (crb(c,0)) { goto L_801F0F5C; } // 801F0F44
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0F48
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F4C
  if (crb(c,2)) { goto L_801F0F5C; } // 801F0F50
  c->r[29]=0u+0xFFFFFFFFu; // 801F0F54
  goto L_801F105C; // 801F0F58
L_801F0F5C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801F0F5C
  if (!crb(c,1)) { goto L_801F1004; } // 801F0F60
  c->r[0]=c->r[4]-c->r[31]; // 801F0F64
  c->r[4]=0u+0x00000000u; // 801F0F68
  cmps(c,0,(int32_t)c->r[0],1); // 801F0F6C
  if (crb(c,1)) { goto L_801F0F80; } // 801F0F70
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F0F74
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F78
  if (!crb(c,2)) { goto L_801F0F84; } // 801F0F7C
L_801F0F80:;
  c->r[4]=0u+0x00000001u; // 801F0F80
L_801F0F84:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F0F84
  if (crb(c,2)) { goto L_801F0F94; } // 801F0F88
  c->r[4]=R8(c->r[26]+0x00000001u); // 801F0F8C
  goto L_801F0F98; // 801F0F90
L_801F0F94:;
  c->r[4]=0u+0x00000000u; // 801F0F94
L_801F0F98:;
  c->lr=0x801F0F9Cu; f_801F0B28(c); // 801F0F98
  cmps(c,0,(int32_t)c->r[3],0); // 801F0F9C
  c->r[23]=c->r[3]|c->r[3]; // 801F0FA0
  if (!crb(c,1)) { goto L_801F1004; } // 801F0FA4
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F0FA8
  c->r[3]=c->r[24]|c->r[24]; // 801F0FAC
  c->r[5]=c->r[28]|c->r[28]; // 801F0FB0
  c->r[4]=0u+0x00000002u; // 801F0FB4
  c->lr=0x801F0FBCu; f_801F0B5C(c); // 801F0FB8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F0FBC
  c->r[0]=c->r[0]-c->r[30]; // 801F0FC0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F0FC4
  if (!crb(c,0)) { goto L_801F0FE0; } // 801F0FC8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0FCC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0FD0
  if (crb(c,2)) { goto L_801F0FE0; } // 801F0FD4
  c->r[29]=0u+0xFFFFFFFFu; // 801F0FD8
  goto L_801F105C; // 801F0FDC
L_801F0FE0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0FE0
  c->r[26]=c->r[26]+c->r[23]; // 801F0FE4
  c->r[31]=c->r[31]+c->r[23]; // 801F0FE8
  c->r[30]=c->r[30]+c->r[3]; // 801F0FEC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0FF0
  if (crb(c,2)) { goto L_801F1038; } // 801F0FF4
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F0FF8
  c->r[24]=c->r[24]+c->r[0]; // 801F0FFC
  goto L_801F1038; // 801F1000
L_801F1004:;
  c->r[3]=R8(c->r[26]+0x00000000u); // 801F1004
  cmpu(c,0,c->r[3],0x00000080u); // 801F1008
  if (crb(c,0)) { goto L_801F1018; } // 801F100C
  c->r[29]=0u+0xFFFFFFFCu; // 801F1010
  goto L_801F105C; // 801F1014
L_801F1018:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1018
  cmps(c,0,(int32_t)c->r[0],0); // 801F101C
  if (crb(c,2)) { goto L_801F102C; } // 801F1020
  W16(c->r[24]+0x00000000u,c->r[3]); // 801F1024
  c->r[24]=c->r[24]+0x00000002u; // 801F1028
L_801F102C:;
  c->r[30]=c->r[30]+0x00000001u; // 801F102C
  c->r[26]=c->r[26]+0x00000001u; // 801F1030
  c->r[31]=c->r[31]+0x00000001u; // 801F1034
L_801F1038:;
  c->r[3]=R8(c->r[26]+0x00000000u); // 801F1038
  cmps(c,0,(int32_t)c->r[3],0); // 801F103C
  if (crb(c,2)) { goto L_801F105C; } // 801F1040
  c->r[4]=R32(c->r[1]+0x00000014u); // 801F1044
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[4]); // 801F1048
  if (crb(c,0)) { IRQCHK(c); goto L_801F0F3C; } // 801F104C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1050
  cmps(c,0,(int32_t)c->r[0],0); // 801F1054
  if (crb(c,2)) { IRQCHK(c); goto L_801F0F3C; } // 801F1058
L_801F105C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F105C
  if (crb(c,2)) { goto L_801F1068; } // 801F1060
  W32(c->r[27]+0x00000000u,c->r[31]); // 801F1064
L_801F1068:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F1068
  if (crb(c,2)) { goto L_801F1074; } // 801F106C
  W32(c->r[25]+0x00000000u,c->r[30]); // 801F1070
L_801F1074:;
  c->r[3]=c->r[29]|c->r[29]; // 801F1074
L_801F1078:;
  c->r[11]=c->r[1]+0x00000040u; // 801F1078
  c->lr=0x801F1080u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F107C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F1080
  c->lr=c->r[0]; // 801F1084
  c->r[1]=c->r[1]+0x00000040u; // 801F1088
  return; // 801F108C
}

// fn_801F1090
void f_801F1090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1090
  c->r[0]=c->lr; // 801F1094
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F1098
  c->r[11]=c->r[1]+0x00000050u; // 801F109C
  c->lr=0x801F10A4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F10A0
  c->r[24]=c->r[5]|c->r[5]; // 801F10A4
  c->r[8]=0u+0xFFFFFFFFu; // 801F10A8
  c->r[9]=0u+0x00000001u; // 801F10AC
  c->r[5]=0u-c->r[3]; // 801F10B0
  c->r[0]=0u-c->r[24]; // 801F10B4
  c->r[25]=c->r[6]|c->r[6]; // 801F10B8
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F10BC
  c->r[5]=c->r[5]|c->r[3]; // 801F10C0
  c->r[22]=c->r[3]|c->r[3]; // 801F10C4
  c->r[0]=c->r[0]|c->r[24]; // 801F10C8
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F10CC
  c->r[26]=c->r[7]|c->r[7]; // 801F10D0
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F10D4
  c->r[23]=c->r[4]|c->r[4]; // 801F10D8
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F10DC
  c->r[8]=c->r[25]|c->r[25]; // 801F10E0
  c->r[5]=c->r[1]+0x00000010u; // 801F10E4
  c->r[6]=c->r[1]+0x0000000Cu; // 801F10E8
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F10EC
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F10F0
  c->r[9]=c->r[1]+0x00000014u; // 801F10F4
  c->r[10]=c->r[1]+0x00000008u; // 801F10F8
  c->r[29]=0u+0x00000000u; // 801F10FC
  c->r[28]=0u+0x00000000u; // 801F1100
  c->lr=0x801F1108u; f_801F0A30(c); // 801F1104
  cmps(c,0,(int32_t)c->r[3],0); // 801F1108
  c->r[27]=c->r[3]|c->r[3]; // 801F110C
  if (crb(c,2)) { goto L_801F1118; } // 801F1110
  goto L_801F1334; // 801F1114
L_801F1118:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1118
  cmps(c,0,(int32_t)c->r[0],0); // 801F111C
  if (crb(c,1)) { goto L_801F1130; } // 801F1120
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1124
  cmps(c,0,(int32_t)c->r[0],0); // 801F1128
  if (!crb(c,2)) { goto L_801F1174; } // 801F112C
L_801F1130:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 801F1130
  cmpu(c,0,c->r[3],0x0000FEFFu); // 801F1134
  if (!crb(c,2)) { goto L_801F1148; } // 801F1138
  c->r[29]=0u+0x00000001u; // 801F113C
  c->r[24]=c->r[24]+0x00000004u; // 801F1140
  goto L_801F1174; // 801F1144
L_801F1148:;
  c->r[0]=c->r[3]+0x00020000u; // 801F1148
  cmpu(c,0,c->r[0],0x00000000u); // 801F114C
  if (!crb(c,2)) { goto L_801F1174; } // 801F1150
  cmps(c,0,(int32_t)c->r[23],0); // 801F1154
  if (crb(c,2)) { goto L_801F1164; } // 801F1158
  c->r[0]=0u+0x00000000u; // 801F115C
  W32(c->r[23]+0x00000000u,c->r[0]); // 801F1160
L_801F1164:;
  c->r[0]=0u+0x00000000u; // 801F1164
  c->r[3]=0u+0xFFFFFFFCu; // 801F1168
  W32(c->r[25]+0x00000000u,c->r[0]); // 801F116C
  goto L_801F1334; // 801F1170
L_801F1174:;
  c->r[31]=0u+0x00110000u; // 801F1174
  goto L_801F12F4; // 801F1178
L_801F117C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F117C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801F1180
  if (crb(c,0)) { goto L_801F119C; } // 801F1184
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1188
  cmps(c,0,(int32_t)c->r[0],0); // 801F118C
  if (crb(c,2)) { goto L_801F119C; } // 801F1190
  c->r[27]=0u+0xFFFFFFFFu; // 801F1194
  goto L_801F1318; // 801F1198
L_801F119C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F119C
  if (!crb(c,1)) { goto L_801F124C; } // 801F11A0
  c->r[0]=c->r[3]-c->r[29]; // 801F11A4
  c->r[3]=c->r[30]|c->r[30]; // 801F11A8
  cmps(c,0,(int32_t)c->r[0],1); // 801F11AC
  c->r[4]=0u+0x00000000u; // 801F11B0
  if (crb(c,1)) { goto L_801F11C4; } // 801F11B4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F11B8
  cmps(c,0,(int32_t)c->r[0],0); // 801F11BC
  if (!crb(c,2)) { goto L_801F11C8; } // 801F11C0
L_801F11C4:;
  c->r[4]=0u+0x00000001u; // 801F11C4
L_801F11C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F11C8
  if (crb(c,2)) { goto L_801F11D8; } // 801F11CC
  c->r[4]=R32(c->r[24]+0x00000004u); // 801F11D0
  goto L_801F11DC; // 801F11D4
L_801F11D8:;
  c->r[4]=0u+0x00000000u; // 801F11D8
L_801F11DC:;
  c->lr=0x801F11E0u; f_801F0B28(c); // 801F11DC
  cmps(c,0,(int32_t)c->r[3],0); // 801F11E0
  c->r[21]=c->r[3]|c->r[3]; // 801F11E4
  if (!crb(c,1)) { goto L_801F124C; } // 801F11E8
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F11EC
  c->r[3]=c->r[22]|c->r[22]; // 801F11F0
  c->r[5]=c->r[26]|c->r[26]; // 801F11F4
  c->r[4]=0u+0x00000002u; // 801F11F8
  c->lr=0x801F1200u; f_801F0B5C(c); // 801F11FC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1200
  c->r[0]=c->r[0]-c->r[28]; // 801F1204
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F1208
  if (!crb(c,0)) { goto L_801F1224; } // 801F120C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1210
  cmps(c,0,(int32_t)c->r[0],0); // 801F1214
  if (crb(c,2)) { goto L_801F1224; } // 801F1218
  c->r[27]=0u+0xFFFFFFFFu; // 801F121C
  goto L_801F1318; // 801F1220
L_801F1224:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1224
  c->r[4]=rotl(c->r[21],2)&0xFFFFFFFCu; // 801F1228
  c->r[24]=c->r[24]+c->r[4]; // 801F122C
  c->r[29]=c->r[29]+c->r[21]; // 801F1230
  cmps(c,0,(int32_t)c->r[0],0); // 801F1234
  c->r[28]=c->r[28]+c->r[3]; // 801F1238
  if (crb(c,2)) { goto L_801F12F4; } // 801F123C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F1240
  c->r[22]=c->r[22]+c->r[0]; // 801F1244
  goto L_801F12F4; // 801F1248
L_801F124C:;
  cmpu(c,0,c->r[30],0x0000FFFFu); // 801F124C
  if (!crb(c,1)) { goto L_801F12B4; } // 801F1250
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801F1254
  cmpu(c,0,c->r[30],c->r[0]); // 801F1258
  if (!crb(c,1)) { goto L_801F1268; } // 801F125C
  c->r[27]=0u+0xFFFFFFFCu; // 801F1260
  goto L_801F1318; // 801F1264
L_801F1268:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1268
  cmps(c,0,(int32_t)c->r[0],0); // 801F126C
  if (crb(c,2)) { goto L_801F12AC; } // 801F1270
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1274
  c->r[0]=c->r[0]-c->r[28]; // 801F1278
  cmps(c,0,(int32_t)c->r[0],2); // 801F127C
  if (!crb(c,0)) { goto L_801F128C; } // 801F1280
  c->r[27]=0u+0xFFFFFFFFu; // 801F1284
  goto L_801F1318; // 801F1288
L_801F128C:;
  c->r[4]=rotl(c->r[30],22)&0x003FFFFFu; // 801F128C
  c->r[3]=rotl(c->r[30],0)&0x000003FFu; // 801F1290
  c->r[4]=c->r[4]+0x00010000u; // 801F1294
  c->r[0]=c->r[4]+0xFFFFD7C0u; // 801F1298
  c->r[3]=c->r[3]+0x00010000u; // 801F129C
  W16(c->r[22]+0x00000000u,c->r[0]); // 801F12A0
  c->r[0]=c->r[3]+0xFFFFDC00u; // 801F12A4
  {uint32_t ea=c->r[22]+0x00000002u; W16(ea,c->r[0]); c->r[22]=ea;} // 801F12A8
L_801F12AC:;
  c->r[28]=c->r[28]+0x00000001u; // 801F12AC
  goto L_801F12D8; // 801F12B0
L_801F12B4:;
  c->r[0]=rotl(c->r[30],0)&0x0000F800u; // 801F12B4
  cmpu(c,0,c->r[0],0x0000D800u); // 801F12B8
  if (!crb(c,2)) { goto L_801F12C8; } // 801F12BC
  c->r[27]=0u+0xFFFFFFFCu; // 801F12C0
  goto L_801F1318; // 801F12C4
L_801F12C8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F12C8
  cmps(c,0,(int32_t)c->r[0],0); // 801F12CC
  if (crb(c,2)) { goto L_801F12D8; } // 801F12D0
  W16(c->r[22]+0x00000000u,c->r[30]); // 801F12D4
L_801F12D8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F12D8
  cmps(c,0,(int32_t)c->r[0],0); // 801F12DC
  if (crb(c,2)) { goto L_801F12E8; } // 801F12E0
  c->r[22]=c->r[22]+0x00000002u; // 801F12E4
L_801F12E8:;
  c->r[28]=c->r[28]+0x00000001u; // 801F12E8
  c->r[24]=c->r[24]+0x00000004u; // 801F12EC
  c->r[29]=c->r[29]+0x00000001u; // 801F12F0
L_801F12F4:;
  c->r[30]=R32(c->r[24]+0x00000000u); // 801F12F4
  cmps(c,0,(int32_t)c->r[30],0); // 801F12F8
  if (crb(c,2)) { goto L_801F1318; } // 801F12FC
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F1300
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801F1304
  if (crb(c,0)) { IRQCHK(c); goto L_801F117C; } // 801F1308
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F130C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1310
  if (crb(c,2)) { IRQCHK(c); goto L_801F117C; } // 801F1314
L_801F1318:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F1318
  if (crb(c,2)) { goto L_801F1324; } // 801F131C
  W32(c->r[25]+0x00000000u,c->r[29]); // 801F1320
L_801F1324:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F1324
  if (crb(c,2)) { goto L_801F1330; } // 801F1328
  W32(c->r[23]+0x00000000u,c->r[28]); // 801F132C
L_801F1330:;
  c->r[3]=c->r[27]|c->r[27]; // 801F1330
L_801F1334:;
  c->r[11]=c->r[1]+0x00000050u; // 801F1334
  c->lr=0x801F133Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F1338
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F133C
  c->lr=c->r[0]; // 801F1340
  c->r[1]=c->r[1]+0x00000050u; // 801F1344
  return; // 801F1348
}

// fn_801F134C
void f_801F134C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F134C
  c->r[0]=c->lr; // 801F1350
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F1354
  c->r[11]=c->r[1]+0x00000040u; // 801F1358
  c->lr=0x801F1360u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F135C
  c->r[25]=c->r[5]|c->r[5]; // 801F1360
  c->r[8]=0u+0xFFFFFFFFu; // 801F1364
  c->r[9]=0u+0x00000001u; // 801F1368
  c->r[5]=0u-c->r[3]; // 801F136C
  c->r[0]=0u-c->r[25]; // 801F1370
  c->r[26]=c->r[6]|c->r[6]; // 801F1374
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F1378
  c->r[5]=c->r[5]|c->r[3]; // 801F137C
  c->r[23]=c->r[3]|c->r[3]; // 801F1380
  c->r[0]=c->r[0]|c->r[25]; // 801F1384
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F1388
  c->r[27]=c->r[7]|c->r[7]; // 801F138C
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F1390
  c->r[24]=c->r[4]|c->r[4]; // 801F1394
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F1398
  c->r[8]=c->r[26]|c->r[26]; // 801F139C
  c->r[5]=c->r[1]+0x00000010u; // 801F13A0
  c->r[6]=c->r[1]+0x0000000Cu; // 801F13A4
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F13A8
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F13AC
  c->r[9]=c->r[1]+0x00000014u; // 801F13B0
  c->r[10]=c->r[1]+0x00000008u; // 801F13B4
  c->r[30]=0u+0x00000000u; // 801F13B8
  c->r[29]=0u+0x00000000u; // 801F13BC
  c->lr=0x801F13C4u; f_801F0A30(c); // 801F13C0
  cmps(c,0,(int32_t)c->r[3],0); // 801F13C4
  c->r[28]=c->r[3]|c->r[3]; // 801F13C8
  if (crb(c,2)) { goto L_801F13D4; } // 801F13CC
  goto L_801F15CC; // 801F13D0
L_801F13D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F13D4
  cmps(c,0,(int32_t)c->r[0],0); // 801F13D8
  if (crb(c,1)) { goto L_801F13EC; } // 801F13DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F13E0
  cmps(c,0,(int32_t)c->r[0],0); // 801F13E4
  if (!crb(c,2)) { goto L_801F158C; } // 801F13E8
L_801F13EC:;
  c->r[0]=R16(c->r[25]+0x00000000u); // 801F13EC
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F13F0
  if (!crb(c,2)) { goto L_801F1404; } // 801F13F4
  c->r[30]=0u+0x00000001u; // 801F13F8
  c->r[25]=c->r[25]+0x00000002u; // 801F13FC
  goto L_801F158C; // 801F1400
L_801F1404:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F1404
  if (!crb(c,2)) { goto L_801F158C; } // 801F1408
  cmps(c,0,(int32_t)c->r[24],0); // 801F140C
  if (crb(c,2)) { goto L_801F141C; } // 801F1410
  c->r[0]=0u+0x00000000u; // 801F1414
  W32(c->r[24]+0x00000000u,c->r[0]); // 801F1418
L_801F141C:;
  c->r[0]=0u+0x00000000u; // 801F141C
  c->r[3]=0u+0xFFFFFFFCu; // 801F1420
  W32(c->r[26]+0x00000000u,c->r[0]); // 801F1424
  goto L_801F15CC; // 801F1428
  goto L_801F158C; // 801F142C
L_801F1430:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1430
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F1434
  if (crb(c,0)) { goto L_801F1450; } // 801F1438
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F143C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1440
  if (crb(c,2)) { goto L_801F1450; } // 801F1444
  c->r[28]=0u+0xFFFFFFFFu; // 801F1448
  goto L_801F15B0; // 801F144C
L_801F1450:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F1450
  if (!crb(c,1)) { goto L_801F1500; } // 801F1454
  c->r[0]=c->r[3]-c->r[30]; // 801F1458
  c->r[3]=c->r[31]|c->r[31]; // 801F145C
  cmps(c,0,(int32_t)c->r[0],1); // 801F1460
  c->r[4]=0u+0x00000000u; // 801F1464
  if (crb(c,1)) { goto L_801F1478; } // 801F1468
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F146C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1470
  if (!crb(c,2)) { goto L_801F147C; } // 801F1474
L_801F1478:;
  c->r[4]=0u+0x00000001u; // 801F1478
L_801F147C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F147C
  if (crb(c,2)) { goto L_801F148C; } // 801F1480
  c->r[4]=R16(c->r[25]+0x00000002u); // 801F1484
  goto L_801F1490; // 801F1488
L_801F148C:;
  c->r[4]=0u+0x00000000u; // 801F148C
L_801F1490:;
  c->lr=0x801F1494u; f_801F0B28(c); // 801F1490
  cmps(c,0,(int32_t)c->r[3],0); // 801F1494
  c->r[22]=c->r[3]|c->r[3]; // 801F1498
  if (!crb(c,1)) { goto L_801F1500; } // 801F149C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F14A0
  c->r[3]=c->r[23]|c->r[23]; // 801F14A4
  c->r[5]=c->r[27]|c->r[27]; // 801F14A8
  c->r[4]=0u+0x00000004u; // 801F14AC
  c->lr=0x801F14B4u; f_801F0B5C(c); // 801F14B0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F14B4
  c->r[0]=c->r[0]-c->r[29]; // 801F14B8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F14BC
  if (!crb(c,0)) { goto L_801F14D8; } // 801F14C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F14C4
  cmps(c,0,(int32_t)c->r[0],0); // 801F14C8
  if (crb(c,2)) { goto L_801F14D8; } // 801F14CC
  c->r[28]=0u+0xFFFFFFFFu; // 801F14D0
  goto L_801F15B0; // 801F14D4
L_801F14D8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F14D8
  c->r[4]=rotl(c->r[22],1)&0xFFFFFFFEu; // 801F14DC
  c->r[25]=c->r[25]+c->r[4]; // 801F14E0
  c->r[30]=c->r[30]+c->r[22]; // 801F14E4
  cmps(c,0,(int32_t)c->r[0],0); // 801F14E8
  c->r[29]=c->r[29]+c->r[3]; // 801F14EC
  if (crb(c,2)) { goto L_801F158C; } // 801F14F0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801F14F4
  c->r[23]=c->r[23]+c->r[0]; // 801F14F8
  goto L_801F158C; // 801F14FC
L_801F1500:;
  c->r[0]=rotl(c->r[31],0)&0x0000F800u; // 801F1500
  cmpu(c,0,c->r[0],0x0000D800u); // 801F1504
  if (crb(c,2)) { goto L_801F1520; } // 801F1508
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F150C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1510
  if (crb(c,2)) { goto L_801F1570; } // 801F1514
  W32(c->r[23]+0x00000000u,c->r[31]); // 801F1518
  goto L_801F1570; // 801F151C
L_801F1520:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1520
  c->r[0]=c->r[0]-c->r[30]; // 801F1524
  cmps(c,0,(int32_t)c->r[0],2); // 801F1528
  if (!crb(c,0)) { goto L_801F153C; } // 801F152C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1530
  cmps(c,0,(int32_t)c->r[0],0); // 801F1534
  if (!crb(c,2)) { goto L_801F15B0; } // 801F1538
L_801F153C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F153C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1540
  if (crb(c,2)) { goto L_801F1568; } // 801F1544
  c->r[3]=R16(c->r[25]+0x00000000u); // 801F1548
  c->r[0]=R16(c->r[25]+0x00000002u); // 801F154C
  c->r[3]=c->r[3]+0xFFFF0000u; // 801F1550
  c->r[3]=c->r[3]+0x00002840u; // 801F1554
  c->r[0]=c->r[0]&0x000003EFu; cr0(c,c->r[0]); // 801F1558
  c->r[3]=rotl(c->r[3],10)&0xFFFFFC00u; // 801F155C
  c->r[3]=c->r[3]+c->r[0]; // 801F1560
  W32(c->r[23]+0x00000000u,c->r[3]); // 801F1564
L_801F1568:;
  c->r[25]=c->r[25]+0x00000002u; // 801F1568
  c->r[30]=c->r[30]+0x00000001u; // 801F156C
L_801F1570:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1570
  cmps(c,0,(int32_t)c->r[0],0); // 801F1574
  if (crb(c,2)) { goto L_801F1580; } // 801F1578
  c->r[23]=c->r[23]+0x00000004u; // 801F157C
L_801F1580:;
  c->r[29]=c->r[29]+0x00000001u; // 801F1580
  c->r[25]=c->r[25]+0x00000002u; // 801F1584
  c->r[30]=c->r[30]+0x00000001u; // 801F1588
L_801F158C:;
  c->r[31]=R16(c->r[25]+0x00000000u); // 801F158C
  cmps(c,0,(int32_t)c->r[31],0); // 801F1590
  if (crb(c,2)) { goto L_801F15B0; } // 801F1594
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F1598
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801F159C
  if (crb(c,0)) { IRQCHK(c); goto L_801F1430; } // 801F15A0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F15A4
  cmps(c,0,(int32_t)c->r[0],0); // 801F15A8
  if (crb(c,2)) { IRQCHK(c); goto L_801F1430; } // 801F15AC
L_801F15B0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F15B0
  if (crb(c,2)) { goto L_801F15BC; } // 801F15B4
  W32(c->r[26]+0x00000000u,c->r[30]); // 801F15B8
L_801F15BC:;
  cmps(c,0,(int32_t)c->r[24],0); // 801F15BC
  if (crb(c,2)) { goto L_801F15C8; } // 801F15C0
  W32(c->r[24]+0x00000000u,c->r[29]); // 801F15C4
L_801F15C8:;
  c->r[3]=c->r[28]|c->r[28]; // 801F15C8
L_801F15CC:;
  c->r[11]=c->r[1]+0x00000040u; // 801F15CC
  c->lr=0x801F15D4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F15D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F15D4
  c->lr=c->r[0]; // 801F15D8
  c->r[1]=c->r[1]+0x00000040u; // 801F15DC
  return; // 801F15E0
}

// fn_801F15E4
void f_801F15E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F15E4
  c->r[0]=c->lr; // 801F15E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F15EC
  c->r[11]=c->r[1]+0x00000040u; // 801F15F0
  c->lr=0x801F15F8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F15F4
  c->r[24]=c->r[5]|c->r[5]; // 801F15F8
  c->r[8]=0u+0xFFFFFFFFu; // 801F15FC
  c->r[9]=0u+0x00000001u; // 801F1600
  c->r[5]=0u-c->r[3]; // 801F1604
  c->r[0]=0u-c->r[24]; // 801F1608
  c->r[25]=c->r[6]|c->r[6]; // 801F160C
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F1610
  c->r[5]=c->r[5]|c->r[3]; // 801F1614
  c->r[22]=c->r[3]|c->r[3]; // 801F1618
  c->r[0]=c->r[0]|c->r[24]; // 801F161C
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F1620
  c->r[26]=c->r[7]|c->r[7]; // 801F1624
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F1628
  c->r[23]=c->r[4]|c->r[4]; // 801F162C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F1630
  c->r[8]=c->r[25]|c->r[25]; // 801F1634
  c->r[5]=c->r[1]+0x00000010u; // 801F1638
  c->r[6]=c->r[1]+0x0000000Cu; // 801F163C
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F1640
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F1644
  c->r[9]=c->r[1]+0x00000014u; // 801F1648
  c->r[10]=c->r[1]+0x00000008u; // 801F164C
  c->r[31]=0u+0x00000000u; // 801F1650
  c->r[30]=0u+0x00000000u; // 801F1654
  c->lr=0x801F165Cu; f_801F0A30(c); // 801F1658
  cmps(c,0,(int32_t)c->r[3],0); // 801F165C
  c->r[29]=c->r[3]|c->r[3]; // 801F1660
  if (crb(c,2)) { goto L_801F166C; } // 801F1664
  goto L_801F18D0; // 801F1668
L_801F166C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F166C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1670
  if (crb(c,1)) { goto L_801F1684; } // 801F1674
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1678
  cmps(c,0,(int32_t)c->r[0],0); // 801F167C
  if (!crb(c,2)) { goto L_801F1890; } // 801F1680
L_801F1684:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 801F1684
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F1688
  if (!crb(c,2)) { goto L_801F169C; } // 801F168C
  c->r[31]=0u+0x00000001u; // 801F1690
  c->r[24]=c->r[24]+0x00000002u; // 801F1694
  goto L_801F1890; // 801F1698
L_801F169C:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F169C
  if (!crb(c,2)) { goto L_801F1890; } // 801F16A0
  cmps(c,0,(int32_t)c->r[23],0); // 801F16A4
  if (crb(c,2)) { goto L_801F16B4; } // 801F16A8
  c->r[0]=0u+0x00000000u; // 801F16AC
  W32(c->r[23]+0x00000000u,c->r[0]); // 801F16B0
L_801F16B4:;
  c->r[0]=0u+0x00000000u; // 801F16B4
  c->r[3]=0u+0xFFFFFFFCu; // 801F16B8
  W32(c->r[25]+0x00000000u,c->r[0]); // 801F16BC
  goto L_801F18D0; // 801F16C0
  goto L_801F1890; // 801F16C4
L_801F16C8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F16C8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F16CC
  if (crb(c,0)) { goto L_801F16E8; } // 801F16D0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F16D4
  cmps(c,0,(int32_t)c->r[0],0); // 801F16D8
  if (crb(c,2)) { goto L_801F16E8; } // 801F16DC
  c->r[29]=0u+0xFFFFFFFFu; // 801F16E0
  goto L_801F18B4; // 801F16E4
L_801F16E8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F16E8
  if (!crb(c,1)) { goto L_801F1794; } // 801F16EC
  c->r[0]=c->r[3]-c->r[31]; // 801F16F0
  c->r[3]=c->r[28]|c->r[28]; // 801F16F4
  cmps(c,0,(int32_t)c->r[0],1); // 801F16F8
  c->r[4]=0u+0x00000000u; // 801F16FC
  if (crb(c,1)) { goto L_801F1710; } // 801F1700
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1704
  cmps(c,0,(int32_t)c->r[0],0); // 801F1708
  if (!crb(c,2)) { goto L_801F1714; } // 801F170C
L_801F1710:;
  c->r[4]=0u+0x00000001u; // 801F1710
L_801F1714:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F1714
  if (crb(c,2)) { goto L_801F1724; } // 801F1718
  c->r[4]=R16(c->r[24]+0x00000002u); // 801F171C
  goto L_801F1728; // 801F1720
L_801F1724:;
  c->r[4]=0u+0x00000000u; // 801F1724
L_801F1728:;
  c->lr=0x801F172Cu; f_801F0B28(c); // 801F1728
  cmps(c,0,(int32_t)c->r[3],0); // 801F172C
  c->r[27]=c->r[3]|c->r[3]; // 801F1730
  if (!crb(c,1)) { goto L_801F1794; } // 801F1734
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F1738
  c->r[3]=c->r[22]|c->r[22]; // 801F173C
  c->r[5]=c->r[26]|c->r[26]; // 801F1740
  c->r[4]=0u+0x00000001u; // 801F1744
  c->lr=0x801F174Cu; f_801F0B5C(c); // 801F1748
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F174C
  c->r[0]=c->r[0]-c->r[30]; // 801F1750
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F1754
  if (!crb(c,0)) { goto L_801F1770; } // 801F1758
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F175C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1760
  if (crb(c,2)) { goto L_801F1770; } // 801F1764
  c->r[29]=0u+0xFFFFFFFFu; // 801F1768
  goto L_801F18B4; // 801F176C
L_801F1770:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1770
  c->r[4]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801F1774
  c->r[24]=c->r[24]+c->r[4]; // 801F1778
  c->r[31]=c->r[31]+c->r[27]; // 801F177C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1780
  c->r[30]=c->r[30]+c->r[3]; // 801F1784
  if (crb(c,2)) { goto L_801F1890; } // 801F1788
  c->r[22]=c->r[22]+c->r[3]; // 801F178C
  goto L_801F1890; // 801F1790
L_801F1794:;
  cmpu(c,0,c->r[28],0x00000080u); // 801F1794
  if (!crb(c,0)) { goto L_801F17C0; } // 801F1798
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F179C
  cmps(c,0,(int32_t)c->r[0],0); // 801F17A0
  if (crb(c,2)) { goto L_801F17B0; } // 801F17A4
  W8(c->r[22]+0x00000000u,c->r[28]); // 801F17A8
  c->r[22]=c->r[22]+0x00000001u; // 801F17AC
L_801F17B0:;
  c->r[30]=c->r[30]+0x00000001u; // 801F17B0
  c->r[24]=c->r[24]+0x00000002u; // 801F17B4
  c->r[31]=c->r[31]+0x00000001u; // 801F17B8
  goto L_801F1890; // 801F17BC
L_801F17C0:;
  cmpu(c,0,c->r[28],0x00000800u); // 801F17C0
  if (!crb(c,0)) { goto L_801F17D4; } // 801F17C4
  c->r[28]=0u+0x00000001u; // 801F17C8
  c->r[27]=0u+0x00000002u; // 801F17CC
  goto L_801F17F4; // 801F17D0
L_801F17D4:;
  c->r[0]=rotl(c->r[28],0)&0x0000F800u; // 801F17D4
  cmpu(c,0,c->r[0],0x0000D800u); // 801F17D8
  if (crb(c,2)) { goto L_801F17EC; } // 801F17DC
  c->r[28]=0u+0x00000001u; // 801F17E0
  c->r[27]=0u+0x00000003u; // 801F17E4
  goto L_801F17F4; // 801F17E8
L_801F17EC:;
  c->r[28]=0u+0x00000002u; // 801F17EC
  c->r[27]=0u+0x00000004u; // 801F17F0
L_801F17F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F17F4
  c->r[0]=c->r[0]-c->r[31]; // 801F17F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801F17FC
  if (!crb(c,0)) { goto L_801F1810; } // 801F1800
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1804
  cmps(c,0,(int32_t)c->r[0],0); // 801F1808
  if (!crb(c,2)) { goto L_801F18B4; } // 801F180C
L_801F1810:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1810
  cmps(c,0,(int32_t)c->r[0],0); // 801F1814
  if (crb(c,2)) { goto L_801F1880; } // 801F1818
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F181C
  c->r[0]=c->r[0]-c->r[30]; // 801F1820
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 801F1824
  if (!crb(c,0)) { goto L_801F1834; } // 801F1828
  c->r[29]=0u+0xFFFFFFFFu; // 801F182C
  goto L_801F18B4; // 801F1830
L_801F1834:;
  cmps(c,0,(int32_t)c->r[28],1); // 801F1834
  if (!crb(c,2)) { goto L_801F1844; } // 801F1838
  c->r[5]=R16(c->r[24]+0x00000000u); // 801F183C
  goto L_801F1870; // 801F1840
L_801F1844:;
  cmps(c,0,(int32_t)c->r[28],2); // 801F1844
  if (!crb(c,2)) { goto L_801F186C; } // 801F1848
  c->r[3]=R16(c->r[24]+0x00000000u); // 801F184C
  c->r[0]=R16(c->r[24]+0x00000002u); // 801F1850
  c->r[3]=c->r[3]+0xFFFF0000u; // 801F1854
  c->r[3]=c->r[3]+0x00002840u; // 801F1858
  c->r[0]=c->r[0]&0x000003EFu; cr0(c,c->r[0]); // 801F185C
  c->r[3]=rotl(c->r[3],10)&0xFFFFFC00u; // 801F1860
  c->r[5]=c->r[3]+c->r[0]; // 801F1864
  goto L_801F1870; // 801F1868
L_801F186C:;
  c->r[5]=0u+0x00000000u; // 801F186C
L_801F1870:;
  c->r[3]=c->r[22]|c->r[22]; // 801F1870
  c->r[4]=c->r[27]|c->r[27]; // 801F1874
  c->lr=0x801F187Cu; f_801F2228(c); // 801F1878
  c->r[22]=c->r[22]+c->r[27]; // 801F187C
L_801F1880:;
  c->r[0]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801F1880
  c->r[31]=c->r[31]+c->r[28]; // 801F1884
  c->r[24]=c->r[24]+c->r[0]; // 801F1888
  c->r[30]=c->r[30]+c->r[27]; // 801F188C
L_801F1890:;
  c->r[28]=R16(c->r[24]+0x00000000u); // 801F1890
  cmps(c,0,(int32_t)c->r[28],0); // 801F1894
  if (crb(c,2)) { goto L_801F18B4; } // 801F1898
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F189C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801F18A0
  if (crb(c,0)) { IRQCHK(c); goto L_801F16C8; } // 801F18A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F18A8
  cmps(c,0,(int32_t)c->r[0],0); // 801F18AC
  if (crb(c,2)) { IRQCHK(c); goto L_801F16C8; } // 801F18B0
L_801F18B4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F18B4
  if (crb(c,2)) { goto L_801F18C0; } // 801F18B8
  W32(c->r[25]+0x00000000u,c->r[31]); // 801F18BC
L_801F18C0:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F18C0
  if (crb(c,2)) { goto L_801F18CC; } // 801F18C4
  W32(c->r[23]+0x00000000u,c->r[30]); // 801F18C8
L_801F18CC:;
  c->r[3]=c->r[29]|c->r[29]; // 801F18CC
L_801F18D0:;
  c->r[11]=c->r[1]+0x00000040u; // 801F18D0
  c->lr=0x801F18D8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F18D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F18D8
  c->lr=c->r[0]; // 801F18DC
  c->r[1]=c->r[1]+0x00000040u; // 801F18E0
  return; // 801F18E4
}

// fn_801F18E8
void f_801F18E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F18E8
  c->r[0]=c->lr; // 801F18EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F18F0
  c->r[11]=c->r[1]+0x00000040u; // 801F18F4
  c->lr=0x801F18FCu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F18F8
  c->r[24]=c->r[5]|c->r[5]; // 801F18FC
  c->r[8]=0u+0xFFFFFFFFu; // 801F1900
  c->r[9]=0u+0x00000001u; // 801F1904
  c->r[5]=0u-c->r[3]; // 801F1908
  c->r[0]=0u-c->r[24]; // 801F190C
  c->r[25]=c->r[6]|c->r[6]; // 801F1910
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F1914
  c->r[5]=c->r[5]|c->r[3]; // 801F1918
  c->r[22]=c->r[3]|c->r[3]; // 801F191C
  c->r[0]=c->r[0]|c->r[24]; // 801F1920
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F1924
  c->r[26]=c->r[7]|c->r[7]; // 801F1928
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F192C
  c->r[23]=c->r[4]|c->r[4]; // 801F1930
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F1934
  c->r[8]=c->r[25]|c->r[25]; // 801F1938
  c->r[5]=c->r[1]+0x00000010u; // 801F193C
  c->r[6]=c->r[1]+0x0000000Cu; // 801F1940
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F1944
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F1948
  c->r[9]=c->r[1]+0x00000014u; // 801F194C
  c->r[10]=c->r[1]+0x00000008u; // 801F1950
  c->r[30]=0u+0x00000000u; // 801F1954
  c->r[29]=0u+0x00000000u; // 801F1958
  c->lr=0x801F1960u; f_801F0A30(c); // 801F195C
  cmps(c,0,(int32_t)c->r[3],0); // 801F1960
  c->r[28]=c->r[3]|c->r[3]; // 801F1964
  if (crb(c,2)) { goto L_801F1970; } // 801F1968
  goto L_801F1BE4; // 801F196C
L_801F1970:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1970
  cmps(c,0,(int32_t)c->r[0],3); // 801F1974
  if (!crb(c,0)) { goto L_801F1988; } // 801F1978
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F197C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1980
  if (!crb(c,2)) { goto L_801F1BA4; } // 801F1984
L_801F1988:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801F1988
  cmpu(c,0,c->r[0],0x000000EFu); // 801F198C
  if (!crb(c,2)) { goto L_801F1BA4; } // 801F1990
  c->r[0]=R8(c->r[24]+0x00000001u); // 801F1994
  cmpu(c,0,c->r[0],0x000000BBu); // 801F1998
  if (!crb(c,2)) { goto L_801F1BA4; } // 801F199C
  c->r[0]=R8(c->r[24]+0x00000002u); // 801F19A0
  cmpu(c,0,c->r[0],0x000000BFu); // 801F19A4
  if (!crb(c,2)) { goto L_801F1BA4; } // 801F19A8
  c->r[30]=0u+0x00000003u; // 801F19AC
  c->r[24]=c->r[24]+0x00000003u; // 801F19B0
  goto L_801F1BA4; // 801F19B4
L_801F19B8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F19B8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F19BC
  if (crb(c,0)) { goto L_801F19D8; } // 801F19C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F19C4
  cmps(c,0,(int32_t)c->r[0],0); // 801F19C8
  if (crb(c,2)) { goto L_801F19D8; } // 801F19CC
  c->r[28]=0u+0xFFFFFFFFu; // 801F19D0
  goto L_801F1BC8; // 801F19D4
L_801F19D8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F19D8
  if (!crb(c,1)) { goto L_801F1A84; } // 801F19DC
  c->r[0]=c->r[3]-c->r[30]; // 801F19E0
  c->r[3]=c->r[31]|c->r[31]; // 801F19E4
  cmps(c,0,(int32_t)c->r[0],1); // 801F19E8
  c->r[4]=0u+0x00000000u; // 801F19EC
  if (crb(c,1)) { goto L_801F1A00; } // 801F19F0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F19F4
  cmps(c,0,(int32_t)c->r[0],0); // 801F19F8
  if (!crb(c,2)) { goto L_801F1A04; } // 801F19FC
L_801F1A00:;
  c->r[4]=0u+0x00000001u; // 801F1A00
L_801F1A04:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F1A04
  if (crb(c,2)) { goto L_801F1A14; } // 801F1A08
  c->r[4]=R8(c->r[24]+0x00000001u); // 801F1A0C
  goto L_801F1A18; // 801F1A10
L_801F1A14:;
  c->r[4]=0u+0x00000000u; // 801F1A14
L_801F1A18:;
  c->lr=0x801F1A1Cu; f_801F0B28(c); // 801F1A18
  cmps(c,0,(int32_t)c->r[3],0); // 801F1A1C
  c->r[27]=c->r[3]|c->r[3]; // 801F1A20
  if (!crb(c,1)) { goto L_801F1A84; } // 801F1A24
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F1A28
  c->r[3]=c->r[22]|c->r[22]; // 801F1A2C
  c->r[5]=c->r[26]|c->r[26]; // 801F1A30
  c->r[4]=0u+0x00000002u; // 801F1A34
  c->lr=0x801F1A3Cu; f_801F0B5C(c); // 801F1A38
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1A3C
  c->r[0]=c->r[0]-c->r[29]; // 801F1A40
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F1A44
  if (!crb(c,0)) { goto L_801F1A60; } // 801F1A48
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1A4C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1A50
  if (crb(c,2)) { goto L_801F1A60; } // 801F1A54
  c->r[28]=0u+0xFFFFFFFFu; // 801F1A58
  goto L_801F1BC8; // 801F1A5C
L_801F1A60:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1A60
  c->r[24]=c->r[24]+c->r[27]; // 801F1A64
  c->r[30]=c->r[30]+c->r[27]; // 801F1A68
  c->r[29]=c->r[29]+c->r[3]; // 801F1A6C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1A70
  if (crb(c,2)) { goto L_801F1BA4; } // 801F1A74
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F1A78
  c->r[22]=c->r[22]+c->r[0]; // 801F1A7C
  goto L_801F1BA4; // 801F1A80
L_801F1A84:;
  cmpu(c,0,c->r[31],0x00000080u); // 801F1A84
  if (!crb(c,0)) { goto L_801F1AB0; } // 801F1A88
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1A8C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1A90
  if (crb(c,2)) { goto L_801F1AA0; } // 801F1A94
  W16(c->r[22]+0x00000000u,c->r[31]); // 801F1A98
  c->r[22]=c->r[22]+0x00000002u; // 801F1A9C
L_801F1AA0:;
  c->r[29]=c->r[29]+0x00000001u; // 801F1AA0
  c->r[24]=c->r[24]+0x00000001u; // 801F1AA4
  c->r[30]=c->r[30]+0x00000001u; // 801F1AA8
  goto L_801F1BA4; // 801F1AAC
L_801F1AB0:;
  c->r[0]=rotl(c->r[31],0)&0x000000E0u; // 801F1AB0
  cmpu(c,0,c->r[0],0x000000C0u); // 801F1AB4
  if (!crb(c,2)) { goto L_801F1AC8; } // 801F1AB8
  c->r[31]=0u+0x00000002u; // 801F1ABC
  c->r[27]=0u+0x00000001u; // 801F1AC0
  goto L_801F1B00; // 801F1AC4
L_801F1AC8:;
  c->r[0]=rotl(c->r[31],0)&0x000000F0u; // 801F1AC8
  cmpu(c,0,c->r[0],0x000000E0u); // 801F1ACC
  if (!crb(c,2)) { goto L_801F1AE0; } // 801F1AD0
  c->r[31]=0u+0x00000003u; // 801F1AD4
  c->r[27]=0u+0x00000001u; // 801F1AD8
  goto L_801F1B00; // 801F1ADC
L_801F1AE0:;
  c->r[0]=rotl(c->r[31],0)&0x000000F8u; // 801F1AE0
  cmpu(c,0,c->r[0],0x000000F0u); // 801F1AE4
  if (!crb(c,2)) { goto L_801F1AF8; } // 801F1AE8
  c->r[31]=0u+0x00000004u; // 801F1AEC
  c->r[27]=0u+0x00000002u; // 801F1AF0
  goto L_801F1B00; // 801F1AF4
L_801F1AF8:;
  c->r[28]=0u+0xFFFFFFFCu; // 801F1AF8
  goto L_801F1BC8; // 801F1AFC
L_801F1B00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1B00
  c->r[0]=c->r[0]-c->r[30]; // 801F1B04
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801F1B08
  if (!crb(c,0)) { goto L_801F1B1C; } // 801F1B0C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1B10
  cmps(c,0,(int32_t)c->r[0],0); // 801F1B14
  if (!crb(c,2)) { goto L_801F1BC8; } // 801F1B18
L_801F1B1C:;
  c->r[3]=c->r[24]|c->r[24]; // 801F1B1C
  c->r[4]=c->r[31]|c->r[31]; // 801F1B20
  c->lr=0x801F1B28u; f_801F2184(c); // 801F1B24
  cmps(c,0,(int32_t)c->r[3],0); // 801F1B28
  if (!crb(c,2)) { goto L_801F1B38; } // 801F1B2C
  c->r[28]=0u+0xFFFFFFFCu; // 801F1B30
  goto L_801F1BC8; // 801F1B34
L_801F1B38:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1B38
  cmps(c,0,(int32_t)c->r[0],0); // 801F1B3C
  if (crb(c,2)) { goto L_801F1B98; } // 801F1B40
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1B44
  c->r[0]=c->r[0]-c->r[29]; // 801F1B48
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 801F1B4C
  if (!crb(c,0)) { goto L_801F1B5C; } // 801F1B50
  c->r[28]=0u+0xFFFFFFFFu; // 801F1B54
  goto L_801F1BC8; // 801F1B58
L_801F1B5C:;
  cmps(c,0,(int32_t)c->r[27],1); // 801F1B5C
  if (!crb(c,2)) { goto L_801F1B68; } // 801F1B60
  W16(c->r[22]+0x00000000u,c->r[3]); // 801F1B64
L_801F1B68:;
  cmps(c,0,(int32_t)c->r[27],2); // 801F1B68
  if (!crb(c,2)) { goto L_801F1B90; } // 801F1B6C
  c->r[4]=rotl(c->r[3],22)&0x003FFFFFu; // 801F1B70
  c->r[3]=rotl(c->r[3],0)&0x000003FFu; // 801F1B74
  c->r[4]=c->r[4]+0x00010000u; // 801F1B78
  c->r[0]=c->r[4]+0xFFFFD7C0u; // 801F1B7C
  c->r[3]=c->r[3]+0x00010000u; // 801F1B80
  W16(c->r[22]+0x00000000u,c->r[0]); // 801F1B84
  c->r[0]=c->r[3]+0xFFFFDC00u; // 801F1B88
  W16(c->r[22]+0x00000002u,c->r[0]); // 801F1B8C
L_801F1B90:;
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801F1B90
  c->r[22]=c->r[22]+c->r[0]; // 801F1B94
L_801F1B98:;
  c->r[29]=c->r[29]+c->r[27]; // 801F1B98
  c->r[24]=c->r[24]+c->r[31]; // 801F1B9C
  c->r[30]=c->r[30]+c->r[31]; // 801F1BA0
L_801F1BA4:;
  c->r[31]=R8(c->r[24]+0x00000000u); // 801F1BA4
  cmps(c,0,(int32_t)c->r[31],0); // 801F1BA8
  if (crb(c,2)) { goto L_801F1BC8; } // 801F1BAC
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F1BB0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801F1BB4
  if (crb(c,0)) { IRQCHK(c); goto L_801F19B8; } // 801F1BB8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1BBC
  cmps(c,0,(int32_t)c->r[0],0); // 801F1BC0
  if (crb(c,2)) { IRQCHK(c); goto L_801F19B8; } // 801F1BC4
L_801F1BC8:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F1BC8
  if (crb(c,2)) { goto L_801F1BD4; } // 801F1BCC
  W32(c->r[25]+0x00000000u,c->r[30]); // 801F1BD0
L_801F1BD4:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F1BD4
  if (crb(c,2)) { goto L_801F1BE0; } // 801F1BD8
  W32(c->r[23]+0x00000000u,c->r[29]); // 801F1BDC
L_801F1BE0:;
  c->r[3]=c->r[28]|c->r[28]; // 801F1BE0
L_801F1BE4:;
  c->r[11]=c->r[1]+0x00000040u; // 801F1BE4
  c->lr=0x801F1BECu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F1BE8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F1BEC
  c->lr=c->r[0]; // 801F1BF0
  c->r[1]=c->r[1]+0x00000040u; // 801F1BF4
  return; // 801F1BF8
}

// fn_801F1BFC
void f_801F1BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1BFC
  c->r[0]=c->lr; // 801F1C00
  W32(c->r[1]+0x00000064u,c->r[0]); // 801F1C04
  c->r[11]=c->r[1]+0x00000060u; // 801F1C08
  c->lr=0x801F1C10u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F1C0C
  c->r[19]=c->r[5]|c->r[5]; // 801F1C10
  c->r[10]=0u+0xFFFFFFFFu; // 801F1C14
  c->r[9]=0u+0x00000001u; // 801F1C18
  c->r[5]=0u-c->r[3]; // 801F1C1C
  c->r[0]=0u-c->r[19]; // 801F1C20
  c->r[20]=c->r[6]|c->r[6]; // 801F1C24
  c->r[22]=c->r[8]|c->r[8]; // 801F1C28
  W32(c->r[1]+0x00000014u,c->r[10]); // 801F1C2C
  c->r[5]=c->r[5]|c->r[3]; // 801F1C30
  c->r[17]=c->r[3]|c->r[3]; // 801F1C34
  W32(c->r[1]+0x00000010u,c->r[10]); // 801F1C38
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F1C3C
  c->r[0]=c->r[0]|c->r[19]; // 801F1C40
  c->r[21]=c->r[7]|c->r[7]; // 801F1C44
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F1C48
  c->r[18]=c->r[4]|c->r[4]; // 801F1C4C
  c->r[8]=c->r[20]|c->r[20]; // 801F1C50
  c->r[5]=c->r[1]+0x00000010u; // 801F1C54
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F1C58
  c->r[6]=c->r[1]+0x0000000Cu; // 801F1C5C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F1C60
  c->r[9]=c->r[1]+0x00000014u; // 801F1C64
  c->r[10]=c->r[1]+0x00000008u; // 801F1C68
  c->r[28]=0u+0x00000000u; // 801F1C6C
  c->r[27]=0u+0x00000000u; // 801F1C70
  c->r[26]=0u+0x00000000u; // 801F1C74
  c->r[25]=0u+0x00000000u; // 801F1C78
  c->r[24]=0u+0x00000000u; // 801F1C7C
  c->lr=0x801F1C84u; f_801F0A30(c); // 801F1C80
  cmps(c,0,(int32_t)c->r[3],0); // 801F1C84
  c->r[23]=c->r[3]|c->r[3]; // 801F1C88
  if (crb(c,2)) { goto L_801F1C94; } // 801F1C8C
  goto L_801F1EF8; // 801F1C90
L_801F1C94:;
  cmps(c,0,(int32_t)c->r[22],0); // 801F1C94
  if (crb(c,2)) { goto L_801F1CB4; } // 801F1C98
  c->r[3]=R32(c->r[22]+0x00000000u); // 801F1C9C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801F1CA0
  if (crb(c,2)) { goto L_801F1CB4; } // 801F1CA4
  c->r[25]=rotl(c->r[3],0)&0xFFFC0000u; // 801F1CA8
  c->r[24]=rotl(c->r[3],1)&0x0000000Eu; // 801F1CAC
  c->r[26]=0u+0x00000001u; // 801F1CB0
L_801F1CB4:;
  c->r[30]=0u+0x80340000u; // 801F1CB4
  c->r[30]=c->r[30]+0xFFFFA778u; // 801F1CB8
  goto L_801F1E8C; // 801F1CBC
L_801F1CC0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F1CC0
  if (crb(c,2)) { goto L_801F1D78; } // 801F1CC4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1CC8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801F1CCC
  if (crb(c,0)) { goto L_801F1CF0; } // 801F1CD0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1CD4
  cmps(c,0,(int32_t)c->r[0],0); // 801F1CD8
  if (crb(c,2)) { goto L_801F1CF0; } // 801F1CDC
  cmpu(c,0,c->r[29],0x0000002Du); // 801F1CE0
  if (crb(c,2)) { goto L_801F1CF0; } // 801F1CE4
  c->r[23]=0u+0xFFFFFFFFu; // 801F1CE8
  goto L_801F1EB0; // 801F1CEC
L_801F1CF0:;
  cmpu(c,0,c->r[29],0x0000002Du); // 801F1CF0
  if (!crb(c,2)) { goto L_801F1D08; } // 801F1CF4
  c->r[26]=0u+0x00000000u; // 801F1CF8
  c->r[19]=c->r[19]+0x00000001u; // 801F1CFC
  c->r[28]=c->r[28]+0x00000001u; // 801F1D00
  goto L_801F1E8C; // 801F1D04
L_801F1D08:;
  cmpu(c,0,c->r[29],0x0000007Fu); // 801F1D08
  if (!crb(c,1)) { goto L_801F1D18; } // 801F1D0C
  c->r[3]=0u+0x000000FFu; // 801F1D10
  goto L_801F1D1C; // 801F1D14
L_801F1D18:;
  c->r[3]=R8(c->r[30]+c->r[29]); // 801F1D18
L_801F1D1C:;
  cmpu(c,0,c->r[3],0x0000003Fu); // 801F1D1C
  if (!crb(c,1)) { goto L_801F1D2C; } // 801F1D20
  c->r[23]=0u+0xFFFFFFFCu; // 801F1D24
  goto L_801F1EB0; // 801F1D28
L_801F1D2C:;
  c->r[0]=addc(c,~c->r[24],0x0000001Au,1); // 801F1D2C
  cmpu(c,0,c->r[24],0x0000000Au); // 801F1D30
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801F1D34
  c->r[25]=c->r[25]|c->r[0]; // 801F1D38
  if (!crb(c,0)) { goto L_801F1D48; } // 801F1D3C
  c->r[24]=c->r[24]+0x00000006u; // 801F1D40
  goto L_801F1D6C; // 801F1D44
L_801F1D48:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1D48
  cmps(c,0,(int32_t)c->r[0],0); // 801F1D4C
  if (crb(c,2)) { goto L_801F1D60; } // 801F1D50
  c->r[0]=rotl(c->r[25],16)&0x0000FFFFu; // 801F1D54
  W16(c->r[17]+0x00000000u,c->r[0]); // 801F1D58
  c->r[17]=c->r[17]+0x00000002u; // 801F1D5C
L_801F1D60:;
  c->r[25]=rotl(c->r[25],16)&0xFFFF0000u; // 801F1D60
  c->r[24]=c->r[24]+0xFFFFFFF6u; // 801F1D64
  c->r[27]=c->r[27]+0x00000001u; // 801F1D68
L_801F1D6C:;
  c->r[19]=c->r[19]+0x00000001u; // 801F1D6C
  c->r[28]=c->r[28]+0x00000001u; // 801F1D70
  goto L_801F1E8C; // 801F1D74
L_801F1D78:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1D78
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801F1D7C
  if (crb(c,0)) { goto L_801F1DA0; } // 801F1D80
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1D84
  cmps(c,0,(int32_t)c->r[0],0); // 801F1D88
  if (crb(c,2)) { goto L_801F1DA0; } // 801F1D8C
  cmpu(c,0,c->r[29],0x0000002Bu); // 801F1D90
  if (crb(c,2)) { goto L_801F1DA0; } // 801F1D94
  c->r[23]=0u+0xFFFFFFFFu; // 801F1D98
  goto L_801F1EB0; // 801F1D9C
L_801F1DA0:;
  cmpu(c,0,c->r[29],0x0000002Bu); // 801F1DA0
  if (!crb(c,2)) { goto L_801F1DC0; } // 801F1DA4
  c->r[26]=0u+0x00000001u; // 801F1DA8
  c->r[25]=0u+0x00000000u; // 801F1DAC
  c->r[24]=0u+0x00000000u; // 801F1DB0
  c->r[19]=c->r[19]+0x00000001u; // 801F1DB4
  c->r[28]=c->r[28]+0x00000001u; // 801F1DB8
  goto L_801F1E8C; // 801F1DBC
L_801F1DC0:;
  cmps(c,0,(int32_t)c->r[21],0); // 801F1DC0
  if (!crb(c,1)) { goto L_801F1E6C; } // 801F1DC4
  c->r[0]=c->r[3]-c->r[28]; // 801F1DC8
  c->r[3]=c->r[29]|c->r[29]; // 801F1DCC
  cmps(c,0,(int32_t)c->r[0],1); // 801F1DD0
  c->r[4]=0u+0x00000000u; // 801F1DD4
  if (crb(c,1)) { goto L_801F1DE8; } // 801F1DD8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1DDC
  cmps(c,0,(int32_t)c->r[0],0); // 801F1DE0
  if (!crb(c,2)) { goto L_801F1DEC; } // 801F1DE4
L_801F1DE8:;
  c->r[4]=0u+0x00000001u; // 801F1DE8
L_801F1DEC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F1DEC
  if (crb(c,2)) { goto L_801F1DFC; } // 801F1DF0
  c->r[4]=R8(c->r[19]+0x00000001u); // 801F1DF4
  goto L_801F1E00; // 801F1DF8
L_801F1DFC:;
  c->r[4]=0u+0x00000000u; // 801F1DFC
L_801F1E00:;
  c->lr=0x801F1E04u; f_801F0B28(c); // 801F1E00
  cmps(c,0,(int32_t)c->r[3],0); // 801F1E04
  c->r[31]=c->r[3]|c->r[3]; // 801F1E08
  if (!crb(c,1)) { goto L_801F1E6C; } // 801F1E0C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F1E10
  c->r[3]=c->r[17]|c->r[17]; // 801F1E14
  c->r[5]=c->r[21]|c->r[21]; // 801F1E18
  c->r[4]=0u+0x00000002u; // 801F1E1C
  c->lr=0x801F1E24u; f_801F0B5C(c); // 801F1E20
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F1E24
  c->r[0]=c->r[0]-c->r[27]; // 801F1E28
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F1E2C
  if (!crb(c,0)) { goto L_801F1E48; } // 801F1E30
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1E34
  cmps(c,0,(int32_t)c->r[0],0); // 801F1E38
  if (crb(c,2)) { goto L_801F1E48; } // 801F1E3C
  c->r[23]=0u+0xFFFFFFFFu; // 801F1E40
  goto L_801F1EB0; // 801F1E44
L_801F1E48:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1E48
  c->r[19]=c->r[19]+c->r[31]; // 801F1E4C
  c->r[28]=c->r[28]+c->r[31]; // 801F1E50
  c->r[27]=c->r[27]+c->r[3]; // 801F1E54
  cmps(c,0,(int32_t)c->r[0],0); // 801F1E58
  if (crb(c,2)) { goto L_801F1E8C; } // 801F1E5C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F1E60
  c->r[17]=c->r[17]+c->r[0]; // 801F1E64
  goto L_801F1E8C; // 801F1E68
L_801F1E6C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F1E6C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1E70
  if (crb(c,2)) { goto L_801F1E80; } // 801F1E74
  W16(c->r[17]+0x00000000u,c->r[29]); // 801F1E78
  c->r[17]=c->r[17]+0x00000002u; // 801F1E7C
L_801F1E80:;
  c->r[27]=c->r[27]+0x00000001u; // 801F1E80
  c->r[19]=c->r[19]+0x00000001u; // 801F1E84
  c->r[28]=c->r[28]+0x00000001u; // 801F1E88
L_801F1E8C:;
  c->r[29]=R8(c->r[19]+0x00000000u); // 801F1E8C
  cmps(c,0,(int32_t)c->r[29],0); // 801F1E90
  if (crb(c,2)) { goto L_801F1EB0; } // 801F1E94
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F1E98
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801F1E9C
  if (crb(c,0)) { IRQCHK(c); goto L_801F1CC0; } // 801F1EA0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1EA4
  cmps(c,0,(int32_t)c->r[0],0); // 801F1EA8
  if (crb(c,2)) { IRQCHK(c); goto L_801F1CC0; } // 801F1EAC
L_801F1EB0:;
  cmps(c,0,(int32_t)c->r[22],0); // 801F1EB0
  if (crb(c,2)) { goto L_801F1EDC; } // 801F1EB4
  cmps(c,0,(int32_t)c->r[26],0); // 801F1EB8
  if (crb(c,2)) { goto L_801F1ED4; } // 801F1EBC
  c->r[0]=rotl(c->r[25],0)&0xFFFC0000u; // 801F1EC0
  c->r[0]=c->r[0]|0x00000008u; // 801F1EC4
  c->r[0]=(rotl(c->r[24],31)&0x00000007u)|(c->r[0]&~0x00000007u); // 801F1EC8
  W32(c->r[22]+0x00000000u,c->r[0]); // 801F1ECC
  goto L_801F1EDC; // 801F1ED0
L_801F1ED4:;
  c->r[0]=0u+0x00000000u; // 801F1ED4
  W32(c->r[22]+0x00000000u,c->r[0]); // 801F1ED8
L_801F1EDC:;
  cmps(c,0,(int32_t)c->r[20],0); // 801F1EDC
  if (crb(c,2)) { goto L_801F1EE8; } // 801F1EE0
  W32(c->r[20]+0x00000000u,c->r[28]); // 801F1EE4
L_801F1EE8:;
  cmps(c,0,(int32_t)c->r[18],0); // 801F1EE8
  if (crb(c,2)) { goto L_801F1EF4; } // 801F1EEC
  W32(c->r[18]+0x00000000u,c->r[27]); // 801F1EF0
L_801F1EF4:;
  c->r[3]=c->r[23]|c->r[23]; // 801F1EF4
L_801F1EF8:;
  c->r[11]=c->r[1]+0x00000060u; // 801F1EF8
  c->lr=0x801F1F00u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F1EFC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801F1F00
  c->lr=c->r[0]; // 801F1F04
  c->r[1]=c->r[1]+0x00000060u; // 801F1F08
  return; // 801F1F0C
}

// fn_801F1F10
void f_801F1F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1F10
  c->r[0]=c->lr; // 801F1F14
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F1F18
  c->r[11]=c->r[1]+0x00000050u; // 801F1F1C
  c->lr=0x801F1F24u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F1F20
  c->r[24]=c->r[5]|c->r[5]; // 801F1F24
  c->r[10]=0u+0xFFFFFFFFu; // 801F1F28
  c->r[9]=0u+0x00000001u; // 801F1F2C
  c->r[5]=0u-c->r[3]; // 801F1F30
  c->r[0]=0u-c->r[24]; // 801F1F34
  c->r[25]=c->r[6]|c->r[6]; // 801F1F38
  c->r[27]=c->r[8]|c->r[8]; // 801F1F3C
  W32(c->r[1]+0x00000014u,c->r[10]); // 801F1F40
  c->r[5]=c->r[5]|c->r[3]; // 801F1F44
  c->r[22]=c->r[3]|c->r[3]; // 801F1F48
  W32(c->r[1]+0x00000010u,c->r[10]); // 801F1F4C
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F1F50
  c->r[0]=c->r[0]|c->r[24]; // 801F1F54
  c->r[26]=c->r[7]|c->r[7]; // 801F1F58
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F1F5C
  c->r[23]=c->r[4]|c->r[4]; // 801F1F60
  c->r[8]=c->r[25]|c->r[25]; // 801F1F64
  c->r[5]=c->r[1]+0x00000010u; // 801F1F68
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F1F6C
  c->r[6]=c->r[1]+0x0000000Cu; // 801F1F70
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F1F74
  c->r[9]=c->r[1]+0x00000014u; // 801F1F78
  c->r[10]=c->r[1]+0x00000008u; // 801F1F7C
  c->r[31]=0u+0x00000000u; // 801F1F80
  c->r[30]=0u+0x00000000u; // 801F1F84
  c->r[29]=0u+0x00000000u; // 801F1F88
  c->lr=0x801F1F90u; f_801F0A30(c); // 801F1F8C
  cmps(c,0,(int32_t)c->r[3],0); // 801F1F90
  c->r[28]=c->r[3]|c->r[3]; // 801F1F94
  if (crb(c,2)) { goto L_801F1FA0; } // 801F1F98
  goto L_801F216C; // 801F1F9C
L_801F1FA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1FA0
  cmps(c,0,(int32_t)c->r[0],0); // 801F1FA4
  if (crb(c,1)) { goto L_801F1FB8; } // 801F1FA8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F1FAC
  cmps(c,0,(int32_t)c->r[0],0); // 801F1FB0
  if (!crb(c,2)) { goto L_801F212C; } // 801F1FB4
L_801F1FB8:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 801F1FB8
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F1FBC
  if (!crb(c,2)) { goto L_801F1FE0; } // 801F1FC0
  cmps(c,0,(int32_t)c->r[27],0); // 801F1FC4
  if (crb(c,2)) { goto L_801F1FD4; } // 801F1FC8
  c->r[0]=0u+0x00000000u; // 801F1FCC
  W32(c->r[27]+0x00000000u,c->r[0]); // 801F1FD0
L_801F1FD4:;
  c->r[31]=0u+0x00000001u; // 801F1FD4
  c->r[24]=c->r[24]+0x00000002u; // 801F1FD8
  goto L_801F212C; // 801F1FDC
L_801F1FE0:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F1FE0
  if (!crb(c,2)) { goto L_801F2008; } // 801F1FE4
  cmps(c,0,(int32_t)c->r[27],0); // 801F1FE8
  if (crb(c,2)) { goto L_801F1FF8; } // 801F1FEC
  c->r[0]=0u+0x00000001u; // 801F1FF0
  W32(c->r[27]+0x00000000u,c->r[0]); // 801F1FF4
L_801F1FF8:;
  c->r[29]=0u+0x00000001u; // 801F1FF8
  c->r[31]=0u+0x00000001u; // 801F1FFC
  c->r[24]=c->r[24]+0x00000002u; // 801F2000
  goto L_801F212C; // 801F2004
L_801F2008:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F2008
  if (crb(c,2)) { goto L_801F212C; } // 801F200C
  c->r[0]=R32(c->r[27]+0x00000000u); // 801F2010
  cmps(c,0,(int32_t)c->r[0],1); // 801F2014
  if (!crb(c,2)) { goto L_801F212C; } // 801F2018
  c->r[29]=0u+0x00000001u; // 801F201C
  goto L_801F212C; // 801F2020
L_801F2024:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F2024
  if (crb(c,2)) { goto L_801F2038; } // 801F2028
  c->r[0]=rotl(c->r[27],8)&0x0000FF00u; // 801F202C
  c->r[0]=(rotl(c->r[27],24)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F2030
  c->r[27]=c->r[0]|c->r[0]; // 801F2034
L_801F2038:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F2038
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F203C
  if (crb(c,0)) { goto L_801F2058; } // 801F2040
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2044
  cmps(c,0,(int32_t)c->r[0],0); // 801F2048
  if (crb(c,2)) { goto L_801F2058; } // 801F204C
  c->r[28]=0u+0xFFFFFFFFu; // 801F2050
  goto L_801F2150; // 801F2054
L_801F2058:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F2058
  if (!crb(c,1)) { goto L_801F210C; } // 801F205C
  c->r[0]=c->r[3]-c->r[31]; // 801F2060
  c->r[4]=0u+0x00000000u; // 801F2064
  cmps(c,0,(int32_t)c->r[0],1); // 801F2068
  if (crb(c,1)) { goto L_801F207C; } // 801F206C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F2070
  cmps(c,0,(int32_t)c->r[0],0); // 801F2074
  if (!crb(c,2)) { goto L_801F2094; } // 801F2078
L_801F207C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F207C
  c->r[4]=R16(c->r[24]+0x00000002u); // 801F2080
  if (crb(c,2)) { goto L_801F2094; } // 801F2084
  c->r[0]=rotl(c->r[4],8)&0x0000FF00u; // 801F2088
  c->r[0]=(rotl(c->r[4],24)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F208C
  c->r[4]=c->r[0]|c->r[0]; // 801F2090
L_801F2094:;
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 801F2094
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801F2098
  c->lr=0x801F20A0u; f_801F0B28(c); // 801F209C
  cmps(c,0,(int32_t)c->r[3],0); // 801F20A0
  c->r[21]=c->r[3]|c->r[3]; // 801F20A4
  if (!crb(c,1)) { goto L_801F210C; } // 801F20A8
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F20AC
  c->r[3]=c->r[22]|c->r[22]; // 801F20B0
  c->r[5]=c->r[26]|c->r[26]; // 801F20B4
  c->r[4]=0u+0x00000002u; // 801F20B8
  c->lr=0x801F20C0u; f_801F0B5C(c); // 801F20BC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F20C0
  c->r[0]=c->r[0]-c->r[30]; // 801F20C4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F20C8
  if (!crb(c,0)) { goto L_801F20E4; } // 801F20CC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F20D0
  cmps(c,0,(int32_t)c->r[0],0); // 801F20D4
  if (crb(c,2)) { goto L_801F20E4; } // 801F20D8
  c->r[28]=0u+0xFFFFFFFFu; // 801F20DC
  goto L_801F2150; // 801F20E0
L_801F20E4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F20E4
  c->r[4]=rotl(c->r[21],1)&0xFFFFFFFEu; // 801F20E8
  c->r[24]=c->r[24]+c->r[4]; // 801F20EC
  c->r[31]=c->r[31]+c->r[21]; // 801F20F0
  cmps(c,0,(int32_t)c->r[0],0); // 801F20F4
  c->r[30]=c->r[30]+c->r[3]; // 801F20F8
  if (crb(c,2)) { goto L_801F212C; } // 801F20FC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F2100
  c->r[22]=c->r[22]+c->r[0]; // 801F2104
  goto L_801F212C; // 801F2108
L_801F210C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F210C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2110
  if (crb(c,2)) { goto L_801F2120; } // 801F2114
  W16(c->r[22]+0x00000000u,c->r[27]); // 801F2118
  c->r[22]=c->r[22]+0x00000002u; // 801F211C
L_801F2120:;
  c->r[30]=c->r[30]+0x00000001u; // 801F2120
  c->r[24]=c->r[24]+0x00000002u; // 801F2124
  c->r[31]=c->r[31]+0x00000001u; // 801F2128
L_801F212C:;
  c->r[27]=R16(c->r[24]+0x00000000u); // 801F212C
  cmps(c,0,(int32_t)c->r[27],0); // 801F2130
  if (crb(c,2)) { goto L_801F2150; } // 801F2134
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F2138
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801F213C
  if (crb(c,0)) { IRQCHK(c); goto L_801F2024; } // 801F2140
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F2144
  cmps(c,0,(int32_t)c->r[0],0); // 801F2148
  if (crb(c,2)) { IRQCHK(c); goto L_801F2024; } // 801F214C
L_801F2150:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F2150
  if (crb(c,2)) { goto L_801F215C; } // 801F2154
  W32(c->r[25]+0x00000000u,c->r[31]); // 801F2158
L_801F215C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F215C
  if (crb(c,2)) { goto L_801F2168; } // 801F2160
  W32(c->r[23]+0x00000000u,c->r[30]); // 801F2164
L_801F2168:;
  c->r[3]=c->r[28]|c->r[28]; // 801F2168
L_801F216C:;
  c->r[11]=c->r[1]+0x00000050u; // 801F216C
  c->lr=0x801F2174u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F2170
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F2174
  c->lr=c->r[0]; // 801F2178
  c->r[1]=c->r[1]+0x00000050u; // 801F217C
  return; // 801F2180
}

// fn_801F2184
void f_801F2184(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],3); // 801F2184
  if (crb(c,2)) { goto L_801F21C0; } // 801F2188
  if (!crb(c,0)) { goto L_801F21A0; } // 801F218C
  cmps(c,0,(int32_t)c->r[4],1); // 801F2190
  if (crb(c,2)) { goto L_801F21AC; } // 801F2194
  if (!crb(c,0)) { goto L_801F21B4; } // 801F2198
  goto L_801F21D8; // 801F219C
L_801F21A0:;
  cmps(c,0,(int32_t)c->r[4],5); // 801F21A0
  if (!crb(c,0)) { goto L_801F21D8; } // 801F21A4
  goto L_801F21CC; // 801F21A8
L_801F21AC:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 801F21AC
  goto L_801F21E0; // 801F21B0
L_801F21B4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F21B4
  c->r[5]=rotl(c->r[0],0)&0x0000001Fu; // 801F21B8
  goto L_801F21E0; // 801F21BC
L_801F21C0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F21C0
  c->r[5]=rotl(c->r[0],0)&0x0000000Fu; // 801F21C4
  goto L_801F21E0; // 801F21C8
L_801F21CC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F21CC
  c->r[5]=rotl(c->r[0],0)&0x00000007u; // 801F21D0
  goto L_801F21E0; // 801F21D4
L_801F21D8:;
  c->r[3]=0u+0x00000000u; // 801F21D8
  return; // 801F21DC
L_801F21E0:;
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801F21E0
  c->r[3]=c->r[3]+0x00000001u; // 801F21E4
  c->ctr=c->r[0]; // 801F21E8
  cmps(c,0,(int32_t)c->r[4],1); // 801F21EC
  if (!crb(c,1)) { goto L_801F2220; } // 801F21F0
L_801F21F4:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 801F21F4
  c->r[0]=rotl(c->r[4],0)&0x000000C0u; // 801F21F8
  cmpu(c,0,c->r[0],0x00000080u); // 801F21FC
  if (crb(c,2)) { goto L_801F220C; } // 801F2200
  c->r[3]=0u+0x00000000u; // 801F2204
  return; // 801F2208
L_801F220C:;
  c->r[5]=rotl(c->r[5],6)&0xFFFFFFC0u; // 801F220C
  c->r[0]=rotl(c->r[4],0)&0x0000003Fu; // 801F2210
  c->r[5]=c->r[5]+c->r[0]; // 801F2214
  c->r[3]=c->r[3]+0x00000001u; // 801F2218
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F21F4; } // 801F221C
L_801F2220:;
  c->r[3]=c->r[5]|c->r[5]; // 801F2220
  return; // 801F2224
}

// fn_801F2228
void f_801F2228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2228
  cmps(c,0,(int32_t)c->r[4],3); // 801F222C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F2230
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F2234
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F2238
  if (crb(c,2)) { goto L_801F2278; } // 801F223C
  if (!crb(c,0)) { goto L_801F2254; } // 801F2240
  cmps(c,0,(int32_t)c->r[4],1); // 801F2244
  if (crb(c,2)) { goto L_801F2260; } // 801F2248
  if (!crb(c,0)) { goto L_801F2268; } // 801F224C
  goto L_801F2470; // 801F2250
L_801F2254:;
  cmps(c,0,(int32_t)c->r[4],5); // 801F2254
  if (!crb(c,0)) { goto L_801F2470; } // 801F2258
  goto L_801F2288; // 801F225C
L_801F2260:;
  W8(c->r[3]+0x00000000u,c->r[5]); // 801F2260
  goto L_801F229C; // 801F2264
L_801F2268:;
  c->r[6]=rotl(c->r[5],26)&0x03FFFFFFu; // 801F2268
  c->r[0]=c->r[6]+0x000000C0u; // 801F226C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F2270
  goto L_801F229C; // 801F2274
L_801F2278:;
  c->r[6]=rotl(c->r[5],20)&0x000FFFFFu; // 801F2278
  c->r[0]=c->r[6]+0x000000E0u; // 801F227C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F2280
  goto L_801F229C; // 801F2284
L_801F2288:;
  c->r[6]=rotl(c->r[5],14)&0x00003FFFu; // 801F2288
  c->r[0]=c->r[6]+0x000000F0u; // 801F228C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F2290
  goto L_801F229C; // 801F2294
  goto L_801F2470; // 801F2298
L_801F229C:;
  cmps(c,1,(int32_t)c->r[4],1); // 801F229C
  c->r[10]=0u+0x00000001u; // 801F22A0
  if (!crb(c,5)) { goto L_801F2470; } // 801F22A4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801F22A8
  c->r[7]=c->r[4]+0xFFFFFFF8u; // 801F22AC
  cmps(c,0,(int32_t)c->r[0],8); // 801F22B0
  if (!crb(c,1)) { goto L_801F2434; } // 801F22B4
  c->r[8]=0u+0x00000000u; // 801F22B8
  c->r[9]=0u+0x00000000u; // 801F22BC
  if (crb(c,4)) { goto L_801F22D8; } // 801F22C0
  c->r[6]=0u+0x80000000u; // 801F22C4
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 801F22C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801F22CC
  if (crb(c,1)) { goto L_801F22D8; } // 801F22D0
  c->r[9]=0u+0x00000001u; // 801F22D4
L_801F22D8:;
  cmps(c,0,(int32_t)c->r[9],0); // 801F22D8
  if (crb(c,2)) { goto L_801F2314; } // 801F22DC
  c->r[9]=rotl(c->r[4],0)&0x80000000u; // 801F22E0
  c->r[6]=0u+0x00000001u; // 801F22E4
  c->r[0]=c->r[9]+0x80000000u; // 801F22E8
  cmpu(c,0,c->r[0],0x00000000u); // 801F22EC
  if (!crb(c,2)) { goto L_801F2308; } // 801F22F0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801F22F4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801F22F8
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801F22FC
  if (crb(c,2)) { goto L_801F2308; } // 801F2300
  c->r[6]=0u+0x00000000u; // 801F2304
L_801F2308:;
  cmps(c,0,(int32_t)c->r[6],0); // 801F2308
  if (crb(c,2)) { goto L_801F2314; } // 801F230C
  c->r[8]=0u+0x00000001u; // 801F2310
L_801F2314:;
  cmps(c,0,(int32_t)c->r[8],0); // 801F2314
  if (crb(c,2)) { goto L_801F2434; } // 801F2318
  c->r[0]=c->r[7]+0x00000006u; // 801F231C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801F2320
  c->ctr=c->r[0]; // 801F2324
  cmps(c,0,(int32_t)c->r[7],1); // 801F2328
  if (!crb(c,1)) { goto L_801F2434; } // 801F232C
L_801F2330:;
  c->r[7]=c->r[4]-c->r[10]; // 801F2330
  c->r[6]=addc(c,~c->r[10],0xFFFFFFFEu,1); // 801F2334
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801F2338
  c->r[0]=c->r[10]+0x00000002u; // 801F233C
  c->r[8]=(uint32_t)((int32_t)c->r[7]*(int32_t)6); // 801F2340
  c->r[7]=c->r[6]+c->r[4]; // 801F2344
  c->r[6]=c->r[4]-c->r[0]; // 801F2348
  c->r[11]=(uint32_t)((int32_t)c->r[7]*(int32_t)6); // 801F234C
  c->r[0]=c->r[10]+0x00000003u; // 801F2350
  c->r[7]=c->r[6]+0xFFFFFFFFu; // 801F2354
  c->r[6]=c->r[4]-c->r[0]; // 801F2358
  c->r[9]=(uint32_t)((int32_t)c->r[7]*(int32_t)6); // 801F235C
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[5]>>((c->r[8])&31)); // 801F2360
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 801F2364
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801F2368
  c->r[12]=(uint32_t)((int32_t)c->r[6]*(int32_t)6); // 801F236C
  c->r[0]=c->r[10]+0x00000004u; // 801F2370
  c->r[8]=rotl(c->r[8],0)&0x0000003Fu; // 801F2374
  c->r[6]=c->r[4]-c->r[0]; // 801F2378
  c->r[11]=((c->r[9])&0x20)?0u:(c->r[5]>>((c->r[9])&31)); // 801F237C
  c->r[29]=c->r[8]+0x00000080u; // 801F2380
  c->r[9]=c->r[6]+0xFFFFFFFFu; // 801F2384
  c->r[12]=((c->r[12])&0x20)?0u:(c->r[5]>>((c->r[12])&31)); // 801F2388
  c->r[6]=rotl(c->r[11],0)&0x0000003Fu; // 801F238C
  c->r[0]=c->r[10]+0x00000005u; // 801F2390
  c->r[11]=(uint32_t)((int32_t)c->r[9]*(int32_t)6); // 801F2394
  c->r[7]=rotl(c->r[7],0)&0x0000003Fu; // 801F2398
  c->r[9]=c->r[4]-c->r[0]; // 801F239C
  W8(c->r[3]+c->r[10],c->r[29]); // 801F23A0
  c->r[0]=c->r[10]+0x00000006u; // 801F23A4
  c->r[31]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 801F23A8
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 801F23AC
  c->r[30]=rotl(c->r[12],0)&0x0000003Fu; // 801F23B0
  c->r[12]=(uint32_t)((int32_t)c->r[9]*(int32_t)6); // 801F23B4
  c->r[29]=c->r[7]+0x00000080u; // 801F23B8
  c->r[9]=c->r[4]-c->r[0]; // 801F23BC
  c->r[0]=c->r[10]+0x00000007u; // 801F23C0
  c->r[11]=c->r[9]+0xFFFFFFFFu; // 801F23C4
  c->r[9]=c->r[3]+c->r[10]; // 801F23C8
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)6); // 801F23CC
  c->r[8]=c->r[4]-c->r[0]; // 801F23D0
  W8(c->r[9]+0x00000001u,c->r[29]); // 801F23D4
  c->r[6]=c->r[6]+0x00000080u; // 801F23D8
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801F23DC
  W8(c->r[9]+0x00000002u,c->r[6]); // 801F23E0
  c->r[6]=c->r[30]+0x00000080u; // 801F23E4
  c->r[12]=((c->r[12])&0x20)?0u:(c->r[5]>>((c->r[12])&31)); // 801F23E8
  c->r[8]=rotl(c->r[12],0)&0x0000003Fu; // 801F23EC
  c->r[7]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 801F23F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801F23F4
  c->r[31]=rotl(c->r[31],0)&0x0000003Fu; // 801F23F8
  W8(c->r[9]+0x00000003u,c->r[6]); // 801F23FC
  c->r[7]=rotl(c->r[7],0)&0x0000003Fu; // 801F2400
  c->r[6]=c->r[31]+0x00000080u; // 801F2404
  W8(c->r[9]+0x00000004u,c->r[6]); // 801F2408
  c->r[8]=c->r[8]+0x00000080u; // 801F240C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 801F2410
  c->r[6]=rotl(c->r[0],0)&0x0000003Fu; // 801F2414
  W8(c->r[9]+0x00000005u,c->r[8]); // 801F2418
  c->r[7]=c->r[7]+0x00000080u; // 801F241C
  c->r[10]=c->r[10]+0x00000008u; // 801F2420
  W8(c->r[9]+0x00000006u,c->r[7]); // 801F2424
  c->r[0]=c->r[6]+0x00000080u; // 801F2428
  W8(c->r[9]+0x00000007u,c->r[0]); // 801F242C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F2330; } // 801F2430
L_801F2434:;
  c->r[0]=c->r[4]-c->r[10]; // 801F2434
  c->r[3]=c->r[3]+c->r[10]; // 801F2438
  c->ctr=c->r[0]; // 801F243C
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[4]); // 801F2440
  if (!crb(c,0)) { goto L_801F2470; } // 801F2444
L_801F2448:;
  c->r[6]=c->r[4]-c->r[10]; // 801F2448
  c->r[10]=c->r[10]+0x00000001u; // 801F244C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801F2450
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801F2454
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 801F2458
  c->r[6]=rotl(c->r[0],0)&0x0000003Fu; // 801F245C
  c->r[0]=c->r[6]+0x00000080u; // 801F2460
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F2464
  c->r[3]=c->r[3]+0x00000001u; // 801F2468
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F2448; } // 801F246C
L_801F2470:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F2470
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F2474
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F2478
  c->r[1]=c->r[1]+0x00000020u; // 801F247C
  return; // 801F2480
}

// fn_801F2484
void f_801F2484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2484
  c->r[0]=c->lr; // 801F2488
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F248C
  c->r[11]=c->r[1]+0x00000050u; // 801F2490
  c->lr=0x801F2498u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F2494
  c->r[23]=c->r[5]|c->r[5]; // 801F2498
  c->r[8]=0u+0xFFFFFFFFu; // 801F249C
  c->r[9]=0u+0x00000001u; // 801F24A0
  c->r[5]=0u-c->r[3]; // 801F24A4
  c->r[0]=0u-c->r[23]; // 801F24A8
  c->r[24]=c->r[6]|c->r[6]; // 801F24AC
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F24B0
  c->r[5]=c->r[5]|c->r[3]; // 801F24B4
  c->r[21]=c->r[3]|c->r[3]; // 801F24B8
  c->r[0]=c->r[0]|c->r[23]; // 801F24BC
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F24C0
  c->r[25]=c->r[7]|c->r[7]; // 801F24C4
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F24C8
  c->r[22]=c->r[4]|c->r[4]; // 801F24CC
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F24D0
  c->r[8]=c->r[24]|c->r[24]; // 801F24D4
  c->r[5]=c->r[1]+0x00000010u; // 801F24D8
  c->r[6]=c->r[1]+0x0000000Cu; // 801F24DC
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F24E0
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F24E4
  c->r[9]=c->r[1]+0x00000014u; // 801F24E8
  c->r[10]=c->r[1]+0x00000008u; // 801F24EC
  c->r[29]=0u+0x00000000u; // 801F24F0
  c->r[28]=0u+0x00000000u; // 801F24F4
  c->lr=0x801F24FCu; f_801F0A30(c); // 801F24F8
  cmps(c,0,(int32_t)c->r[3],0); // 801F24FC
  c->r[27]=c->r[3]|c->r[3]; // 801F2500
  if (crb(c,2)) { goto L_801F250C; } // 801F2504
  goto L_801F27C8; // 801F2508
L_801F250C:;
  c->r[0]=R32(c->r[13]+0xFFFF95B8u); // 801F250C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2510
  if (!crb(c,2)) { goto L_801F2520; } // 801F2514
  c->r[3]=0u+0xFFFFFFFEu; // 801F2518
  goto L_801F27C8; // 801F251C
L_801F2520:;
  c->r[3]=0u+0x802E0000u; // 801F2520
  c->r[31]=0u+0x00010000u; // 801F2524
  c->r[30]=c->r[3]+0x000014C8u; // 801F2528
  goto L_801F2788; // 801F252C
L_801F2530:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F2530
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801F2534
  if (crb(c,0)) { goto L_801F2550; } // 801F2538
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F253C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2540
  if (crb(c,2)) { goto L_801F2550; } // 801F2544
  c->r[27]=0u+0xFFFFFFFFu; // 801F2548
  goto L_801F27AC; // 801F254C
L_801F2550:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F2550
  if (!crb(c,1)) { goto L_801F25FC; } // 801F2554
  c->r[0]=c->r[3]-c->r[29]; // 801F2558
  c->r[3]=c->r[26]|c->r[26]; // 801F255C
  cmps(c,0,(int32_t)c->r[0],1); // 801F2560
  c->r[4]=0u+0x00000000u; // 801F2564
  if (crb(c,1)) { goto L_801F2578; } // 801F2568
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F256C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2570
  if (!crb(c,2)) { goto L_801F257C; } // 801F2574
L_801F2578:;
  c->r[4]=0u+0x00000001u; // 801F2578
L_801F257C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F257C
  if (crb(c,2)) { goto L_801F258C; } // 801F2580
  c->r[4]=R8(c->r[23]+0x00000001u); // 801F2584
  goto L_801F2590; // 801F2588
L_801F258C:;
  c->r[4]=0u+0x00000000u; // 801F258C
L_801F2590:;
  c->lr=0x801F2594u; f_801F0B28(c); // 801F2590
  cmps(c,0,(int32_t)c->r[3],0); // 801F2594
  c->r[20]=c->r[3]|c->r[3]; // 801F2598
  if (!crb(c,1)) { goto L_801F25FC; } // 801F259C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F25A0
  c->r[3]=c->r[21]|c->r[21]; // 801F25A4
  c->r[5]=c->r[25]|c->r[25]; // 801F25A8
  c->r[4]=0u+0x00000002u; // 801F25AC
  c->lr=0x801F25B4u; f_801F0B5C(c); // 801F25B0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F25B4
  c->r[0]=c->r[0]-c->r[28]; // 801F25B8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F25BC
  if (!crb(c,0)) { goto L_801F25D8; } // 801F25C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F25C4
  cmps(c,0,(int32_t)c->r[0],0); // 801F25C8
  if (crb(c,2)) { goto L_801F25D8; } // 801F25CC
  c->r[27]=0u+0xFFFFFFFFu; // 801F25D0
  goto L_801F27AC; // 801F25D4
L_801F25D8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F25D8
  c->r[23]=c->r[23]+c->r[20]; // 801F25DC
  c->r[29]=c->r[29]+c->r[20]; // 801F25E0
  c->r[28]=c->r[28]+c->r[3]; // 801F25E4
  cmps(c,0,(int32_t)c->r[0],0); // 801F25E8
  if (crb(c,2)) { goto L_801F2788; } // 801F25EC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F25F0
  c->r[21]=c->r[21]+c->r[0]; // 801F25F4
  goto L_801F2788; // 801F25F8
L_801F25FC:;
  cmpu(c,0,c->r[26],0x00000081u); // 801F25FC
  if (crb(c,0)) { goto L_801F260C; } // 801F2600
  cmpu(c,0,c->r[26],0x0000009Fu); // 801F2604
  if (!crb(c,1)) { goto L_801F261C; } // 801F2608
L_801F260C:;
  cmpu(c,0,c->r[26],0x000000E0u); // 801F260C
  if (crb(c,0)) { goto L_801F2704; } // 801F2610
  cmpu(c,0,c->r[26],0x000000FCu); // 801F2614
  if (crb(c,1)) { goto L_801F2704; } // 801F2618
L_801F261C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F261C
  c->r[0]=c->r[0]-c->r[29]; // 801F2620
  cmps(c,0,(int32_t)c->r[0],2); // 801F2624
  if (!crb(c,0)) { goto L_801F2638; } // 801F2628
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F262C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2630
  if (!crb(c,2)) { goto L_801F27AC; } // 801F2634
L_801F2638:;
  {uint32_t ea=c->r[23]+0x00000001u; c->r[4]=R8(ea); c->r[23]=ea;} // 801F2638
  cmpu(c,0,c->r[4],0x00000040u); // 801F263C
  if (crb(c,0)) { goto L_801F264C; } // 801F2640
  cmpu(c,0,c->r[4],0x0000007Eu); // 801F2644
  if (!crb(c,1)) { goto L_801F265C; } // 801F2648
L_801F264C:;
  cmpu(c,0,c->r[4],0x00000080u); // 801F264C
  if (crb(c,0)) { goto L_801F26F4; } // 801F2650
  cmpu(c,0,c->r[4],0x000000FCu); // 801F2654
  if (crb(c,1)) { goto L_801F26F4; } // 801F2658
L_801F265C:;
  cmpu(c,0,c->r[26],0x000000F0u); // 801F265C
  if (!crb(c,0)) { goto L_801F2698; } // 801F2660
  cmpu(c,0,c->r[26],0x000000A0u); // 801F2664
  c->r[3]=c->r[26]+0xFFFFFF3Fu; // 801F2668
  if (!crb(c,0)) { goto L_801F2674; } // 801F266C
  c->r[3]=c->r[26]+0xFFFFFF7Fu; // 801F2670
L_801F2674:;
  cmpu(c,0,c->r[4],0x0000007Fu); // 801F2674
  c->r[0]=c->r[4]+0xFFFFFFBFu; // 801F2678
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 801F267C
  if (!crb(c,0)) { goto L_801F2688; } // 801F2680
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801F2684
L_801F2688:;
  c->r[0]=c->r[3]+c->r[0]; // 801F2688
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F268C
  c->r[26]=R16(c->r[30]+c->r[0]); // 801F2690
  goto L_801F26FC; // 801F2694
L_801F2698:;
  cmpu(c,0,c->r[26],0x000000FAu); // 801F2698
  if (crb(c,0)) { goto L_801F26C8; } // 801F269C
  c->r[0]=c->r[26]+0xFFFFFF35u; // 801F26A0
  cmpu(c,0,c->r[4],0x0000007Fu); // 801F26A4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 801F26A8
  c->r[0]=c->r[4]+0xFFFFFFBFu; // 801F26AC
  if (!crb(c,0)) { goto L_801F26B8; } // 801F26B0
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801F26B4
L_801F26B8:;
  c->r[0]=c->r[3]+c->r[0]; // 801F26B8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F26BC
  c->r[26]=R16(c->r[30]+c->r[0]); // 801F26C0
  goto L_801F26FC; // 801F26C4
L_801F26C8:;
  c->r[0]=c->r[26]+0xFFFFFF10u; // 801F26C8
  cmpu(c,0,c->r[4],0x0000007Fu); // 801F26CC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 801F26D0
  c->r[0]=c->r[4]+0xFFFFFFBFu; // 801F26D4
  if (!crb(c,0)) { goto L_801F26E0; } // 801F26D8
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801F26DC
L_801F26E0:;
  c->r[3]=c->r[3]+c->r[0]; // 801F26E0
  c->r[3]=c->r[3]+0x00010000u; // 801F26E4
  c->r[0]=c->r[3]+0xFFFFE000u; // 801F26E8
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801F26EC
  goto L_801F26FC; // 801F26F0
L_801F26F4:;
  c->r[27]=0u+0xFFFFFFFCu; // 801F26F4
  goto L_801F27AC; // 801F26F8
L_801F26FC:;
  c->r[29]=c->r[29]+0x00000001u; // 801F26FC
  goto L_801F2758; // 801F2700
L_801F2704:;
  cmpu(c,0,c->r[26],0x00000080u); // 801F2704
  if (crb(c,1)) { goto L_801F2710; } // 801F2708
  goto L_801F2758; // 801F270C
L_801F2710:;
  cmpu(c,0,c->r[26],0x000000A0u); // 801F2710
  if (!crb(c,2)) { goto L_801F2720; } // 801F2714
  c->r[26]=c->r[31]+0xFFFFF8F0u; // 801F2718
  goto L_801F2758; // 801F271C
L_801F2720:;
  cmpu(c,0,c->r[26],0x000000E0u); // 801F2720
  if (!crb(c,0)) { goto L_801F2738; } // 801F2724
  c->r[3]=c->r[26]+0x00010000u; // 801F2728
  c->r[0]=c->r[3]+0xFFFFFEC0u; // 801F272C
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801F2730
  goto L_801F2758; // 801F2734
L_801F2738:;
  cmpu(c,0,c->r[26],0x000000FDu); // 801F2738
  if (crb(c,0)) { goto L_801F2750; } // 801F273C
  c->r[3]=c->r[26]+0x00010000u; // 801F2740
  c->r[0]=c->r[3]+0xFFFFF7F4u; // 801F2744
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801F2748
  goto L_801F2758; // 801F274C
L_801F2750:;
  c->r[27]=0u+0xFFFFFFFCu; // 801F2750
  goto L_801F27AC; // 801F2754
L_801F2758:;
  c->r[0]=rotl(c->r[26],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801F2758
  if (!crb(c,2)) { goto L_801F2768; } // 801F275C
  c->r[27]=0u+0xFFFFFFFEu; // 801F2760
  goto L_801F27AC; // 801F2764
L_801F2768:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2768
  cmps(c,0,(int32_t)c->r[0],0); // 801F276C
  if (crb(c,2)) { goto L_801F277C; } // 801F2770
  W16(c->r[21]+0x00000000u,c->r[26]); // 801F2774
  c->r[21]=c->r[21]+0x00000002u; // 801F2778
L_801F277C:;
  c->r[28]=c->r[28]+0x00000001u; // 801F277C
  c->r[23]=c->r[23]+0x00000001u; // 801F2780
  c->r[29]=c->r[29]+0x00000001u; // 801F2784
L_801F2788:;
  c->r[26]=R8(c->r[23]+0x00000000u); // 801F2788
  cmps(c,0,(int32_t)c->r[26],0); // 801F278C
  if (crb(c,2)) { goto L_801F27AC; } // 801F2790
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F2794
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801F2798
  if (crb(c,0)) { IRQCHK(c); goto L_801F2530; } // 801F279C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F27A0
  cmps(c,0,(int32_t)c->r[0],0); // 801F27A4
  if (crb(c,2)) { IRQCHK(c); goto L_801F2530; } // 801F27A8
L_801F27AC:;
  cmps(c,0,(int32_t)c->r[24],0); // 801F27AC
  if (crb(c,2)) { goto L_801F27B8; } // 801F27B0
  W32(c->r[24]+0x00000000u,c->r[29]); // 801F27B4
L_801F27B8:;
  cmps(c,0,(int32_t)c->r[22],0); // 801F27B8
  if (crb(c,2)) { goto L_801F27C4; } // 801F27BC
  W32(c->r[22]+0x00000000u,c->r[28]); // 801F27C0
L_801F27C4:;
  c->r[3]=c->r[27]|c->r[27]; // 801F27C4
L_801F27C8:;
  c->r[11]=c->r[1]+0x00000050u; // 801F27C8
  c->lr=0x801F27D0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F27CC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F27D0
  c->lr=c->r[0]; // 801F27D4
  c->r[1]=c->r[1]+0x00000050u; // 801F27D8
  return; // 801F27DC
}

// fn_801F27E0
void f_801F27E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F27E0
  c->r[0]=c->lr; // 801F27E4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F27E8
  c->r[11]=c->r[1]+0x00000050u; // 801F27EC
  c->lr=0x801F27F4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F27F0
  c->r[26]=c->r[5]|c->r[5]; // 801F27F4
  c->r[8]=0u+0xFFFFFFFFu; // 801F27F8
  c->r[9]=0u+0x00000001u; // 801F27FC
  c->r[5]=0u-c->r[3]; // 801F2800
  c->r[0]=0u-c->r[26]; // 801F2804
  c->r[27]=c->r[6]|c->r[6]; // 801F2808
  W32(c->r[1]+0x00000018u,c->r[8]); // 801F280C
  c->r[5]=c->r[5]|c->r[3]; // 801F2810
  c->r[24]=c->r[3]|c->r[3]; // 801F2814
  c->r[0]=c->r[0]|c->r[26]; // 801F2818
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F281C
  c->r[28]=c->r[7]|c->r[7]; // 801F2820
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F2824
  c->r[25]=c->r[4]|c->r[4]; // 801F2828
  W32(c->r[1]+0x00000010u,c->r[9]); // 801F282C
  c->r[8]=c->r[27]|c->r[27]; // 801F2830
  c->r[5]=c->r[1]+0x00000014u; // 801F2834
  c->r[6]=c->r[1]+0x00000010u; // 801F2838
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F283C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F2840
  c->r[9]=c->r[1]+0x00000018u; // 801F2844
  c->r[10]=c->r[1]+0x0000000Cu; // 801F2848
  c->r[31]=0u+0x00000000u; // 801F284C
  c->r[30]=0u+0x00000000u; // 801F2850
  c->lr=0x801F2858u; f_801F0A30(c); // 801F2854
  cmps(c,0,(int32_t)c->r[3],0); // 801F2858
  c->r[29]=c->r[3]|c->r[3]; // 801F285C
  if (crb(c,2)) { goto L_801F2868; } // 801F2860
  goto L_801F2A70; // 801F2864
L_801F2868:;
  c->r[0]=R32(c->r[13]+0xFFFF95B8u); // 801F2868
  cmps(c,0,(int32_t)c->r[0],0); // 801F286C
  if (!crb(c,2)) { goto L_801F287C; } // 801F2870
  c->r[3]=0u+0xFFFFFFFEu; // 801F2874
  goto L_801F2A70; // 801F2878
L_801F287C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F287C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2880
  if (crb(c,1)) { goto L_801F2894; } // 801F2884
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2888
  cmps(c,0,(int32_t)c->r[0],0); // 801F288C
  if (!crb(c,2)) { goto L_801F2A30; } // 801F2890
L_801F2894:;
  c->r[0]=R16(c->r[26]+0x00000000u); // 801F2894
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F2898
  if (!crb(c,2)) { goto L_801F28AC; } // 801F289C
  c->r[31]=0u+0x00000001u; // 801F28A0
  c->r[26]=c->r[26]+0x00000002u; // 801F28A4
  goto L_801F2A30; // 801F28A8
L_801F28AC:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F28AC
  if (!crb(c,2)) { goto L_801F2A30; } // 801F28B0
  cmps(c,0,(int32_t)c->r[25],0); // 801F28B4
  if (crb(c,2)) { goto L_801F28C4; } // 801F28B8
  c->r[0]=0u+0x00000000u; // 801F28BC
  W32(c->r[25]+0x00000000u,c->r[0]); // 801F28C0
L_801F28C4:;
  c->r[0]=0u+0x00000000u; // 801F28C4
  c->r[3]=0u+0xFFFFFFFCu; // 801F28C8
  W32(c->r[27]+0x00000000u,c->r[0]); // 801F28CC
  goto L_801F2A70; // 801F28D0
  goto L_801F2A30; // 801F28D4
L_801F28D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F28D8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F28DC
  if (crb(c,0)) { goto L_801F28F8; } // 801F28E0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F28E4
  cmps(c,0,(int32_t)c->r[0],0); // 801F28E8
  if (crb(c,2)) { goto L_801F28F8; } // 801F28EC
  c->r[29]=0u+0xFFFFFFFFu; // 801F28F0
  goto L_801F2A54; // 801F28F4
L_801F28F8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801F28F8
  if (!crb(c,1)) { goto L_801F29A4; } // 801F28FC
  c->r[0]=c->r[3]-c->r[31]; // 801F2900
  c->r[3]=c->r[22]|c->r[22]; // 801F2904
  cmps(c,0,(int32_t)c->r[0],1); // 801F2908
  c->r[4]=0u+0x00000000u; // 801F290C
  if (crb(c,1)) { goto L_801F2920; } // 801F2910
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2914
  cmps(c,0,(int32_t)c->r[0],0); // 801F2918
  if (!crb(c,2)) { goto L_801F2924; } // 801F291C
L_801F2920:;
  c->r[4]=0u+0x00000001u; // 801F2920
L_801F2924:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F2924
  if (crb(c,2)) { goto L_801F2934; } // 801F2928
  c->r[4]=R16(c->r[26]+0x00000002u); // 801F292C
  goto L_801F2938; // 801F2930
L_801F2934:;
  c->r[4]=0u+0x00000000u; // 801F2934
L_801F2938:;
  c->lr=0x801F293Cu; f_801F0B28(c); // 801F2938
  cmps(c,0,(int32_t)c->r[3],0); // 801F293C
  c->r[23]=c->r[3]|c->r[3]; // 801F2940
  if (!crb(c,1)) { goto L_801F29A4; } // 801F2944
  c->r[6]=R32(c->r[1]+0x00000010u); // 801F2948
  c->r[3]=c->r[24]|c->r[24]; // 801F294C
  c->r[5]=c->r[28]|c->r[28]; // 801F2950
  c->r[4]=0u+0x00000001u; // 801F2954
  c->lr=0x801F295Cu; f_801F0B5C(c); // 801F2958
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F295C
  c->r[0]=c->r[0]-c->r[30]; // 801F2960
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F2964
  if (!crb(c,0)) { goto L_801F2980; } // 801F2968
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F296C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2970
  if (crb(c,2)) { goto L_801F2980; } // 801F2974
  c->r[29]=0u+0xFFFFFFFFu; // 801F2978
  goto L_801F2A54; // 801F297C
L_801F2980:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F2980
  c->r[4]=rotl(c->r[23],1)&0xFFFFFFFEu; // 801F2984
  c->r[26]=c->r[26]+c->r[4]; // 801F2988
  c->r[31]=c->r[31]+c->r[23]; // 801F298C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2990
  c->r[30]=c->r[30]+c->r[3]; // 801F2994
  if (crb(c,2)) { goto L_801F2A30; } // 801F2998
  c->r[24]=c->r[24]+c->r[3]; // 801F299C
  goto L_801F2A30; // 801F29A0
L_801F29A4:;
  c->r[4]=c->r[22]|c->r[22]; // 801F29A4
  c->r[3]=c->r[1]+0x00000008u; // 801F29A8
  c->lr=0x801F29B0u; f_801F33B0(c); // 801F29AC
  c->r[3]=R8(c->r[1]+0x00000008u); // 801F29B0
  c->r[4]=R8(c->r[1]+0x00000009u); // 801F29B4
  cmps(c,0,(int32_t)c->r[3],0); // 801F29B8
  if (!crb(c,2)) { goto L_801F29C8; } // 801F29BC
  c->r[29]=0u+0xFFFFFFFEu; // 801F29C0
  goto L_801F2A54; // 801F29C4
L_801F29C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F29C8
  if (!crb(c,2)) { goto L_801F29E8; } // 801F29CC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F29D0
  cmps(c,0,(int32_t)c->r[0],0); // 801F29D4
  if (crb(c,2)) { goto L_801F2A24; } // 801F29D8
  W8(c->r[24]+0x00000000u,c->r[3]); // 801F29DC
  c->r[24]=c->r[24]+0x00000001u; // 801F29E0
  goto L_801F2A24; // 801F29E4
L_801F29E8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F29E8
  cmps(c,0,(int32_t)c->r[0],0); // 801F29EC
  if (crb(c,2)) { goto L_801F2A20; } // 801F29F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F29F4
  c->r[0]=c->r[0]-c->r[30]; // 801F29F8
  cmps(c,0,(int32_t)c->r[0],2); // 801F29FC
  if (!crb(c,0)) { goto L_801F2A0C; } // 801F2A00
  c->r[29]=0u+0xFFFFFFFFu; // 801F2A04
  goto L_801F2A54; // 801F2A08
L_801F2A0C:;
  W8(c->r[24]+0x00000000u,c->r[3]); // 801F2A0C
  c->r[30]=c->r[30]+0x00000001u; // 801F2A10
  W8(c->r[24]+0x00000001u,c->r[4]); // 801F2A14
  c->r[24]=c->r[24]+0x00000002u; // 801F2A18
  goto L_801F2A24; // 801F2A1C
L_801F2A20:;
  c->r[30]=c->r[30]+0x00000001u; // 801F2A20
L_801F2A24:;
  c->r[30]=c->r[30]+0x00000001u; // 801F2A24
  c->r[26]=c->r[26]+0x00000002u; // 801F2A28
  c->r[31]=c->r[31]+0x00000001u; // 801F2A2C
L_801F2A30:;
  c->r[22]=R16(c->r[26]+0x00000000u); // 801F2A30
  cmps(c,0,(int32_t)c->r[22],0); // 801F2A34
  if (crb(c,2)) { goto L_801F2A54; } // 801F2A38
  c->r[3]=R32(c->r[1]+0x00000018u); // 801F2A3C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801F2A40
  if (crb(c,0)) { IRQCHK(c); goto L_801F28D8; } // 801F2A44
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2A48
  cmps(c,0,(int32_t)c->r[0],0); // 801F2A4C
  if (crb(c,2)) { IRQCHK(c); goto L_801F28D8; } // 801F2A50
L_801F2A54:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F2A54
  if (crb(c,2)) { goto L_801F2A60; } // 801F2A58
  W32(c->r[27]+0x00000000u,c->r[31]); // 801F2A5C
L_801F2A60:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F2A60
  if (crb(c,2)) { goto L_801F2A6C; } // 801F2A64
  W32(c->r[25]+0x00000000u,c->r[30]); // 801F2A68
L_801F2A6C:;
  c->r[3]=c->r[29]|c->r[29]; // 801F2A6C
L_801F2A70:;
  c->r[11]=c->r[1]+0x00000050u; // 801F2A70
  c->lr=0x801F2A78u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F2A74
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F2A78
  c->lr=c->r[0]; // 801F2A7C
  c->r[1]=c->r[1]+0x00000050u; // 801F2A80
  return; // 801F2A84
}

// fn_801F2A88
void f_801F2A88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2A88
  c->r[0]=c->lr; // 801F2A8C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801F2A90
  c->r[11]=c->r[1]+0x00000060u; // 801F2A94
  c->lr=0x801F2A9Cu; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F2A98
  c->r[22]=c->r[5]|c->r[5]; // 801F2A9C
  c->r[10]=0u+0x00000001u; // 801F2AA0
  c->r[9]=0u+0xFFFFFFFFu; // 801F2AA4
  c->r[5]=0u-c->r[3]; // 801F2AA8
  c->r[0]=0u-c->r[22]; // 801F2AAC
  c->r[23]=c->r[6]|c->r[6]; // 801F2AB0
  c->r[25]=c->r[8]|c->r[8]; // 801F2AB4
  W32(c->r[1]+0x00000018u,c->r[10]); // 801F2AB8
  c->r[5]=c->r[5]|c->r[3]; // 801F2ABC
  c->r[20]=c->r[3]|c->r[3]; // 801F2AC0
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F2AC4
  W32(c->r[1]+0x00000014u,c->r[9]); // 801F2AC8
  c->r[0]=c->r[0]|c->r[22]; // 801F2ACC
  c->r[24]=c->r[7]|c->r[7]; // 801F2AD0
  W32(c->r[1]+0x00000010u,c->r[9]); // 801F2AD4
  c->r[21]=c->r[4]|c->r[4]; // 801F2AD8
  c->r[8]=c->r[23]|c->r[23]; // 801F2ADC
  c->r[5]=c->r[1]+0x00000010u; // 801F2AE0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 801F2AE4
  c->r[6]=c->r[1]+0x0000000Cu; // 801F2AE8
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F2AEC
  c->r[9]=c->r[1]+0x00000014u; // 801F2AF0
  W32(c->r[1]+0x00000008u,c->r[10]); // 801F2AF4
  c->r[10]=c->r[1]+0x00000008u; // 801F2AF8
  c->r[29]=0u+0x00000000u; // 801F2AFC
  c->r[28]=0u+0x00000000u; // 801F2B00
  c->r[27]=0u+0x00000000u; // 801F2B04
  c->lr=0x801F2B0Cu; f_801F0A30(c); // 801F2B08
  cmps(c,0,(int32_t)c->r[3],0); // 801F2B0C
  c->r[26]=c->r[3]|c->r[3]; // 801F2B10
  if (crb(c,2)) { goto L_801F2B1C; } // 801F2B14
  goto L_801F2EDC; // 801F2B18
L_801F2B1C:;
  c->r[0]=R32(c->r[13]+0xFFFF95B8u); // 801F2B1C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2B20
  if (!crb(c,2)) { goto L_801F2B30; } // 801F2B24
  c->r[3]=0u+0xFFFFFFFEu; // 801F2B28
  goto L_801F2EDC; // 801F2B2C
L_801F2B30:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F2B30
  if (crb(c,2)) { goto L_801F2B40; } // 801F2B34
  c->r[0]=R32(c->r[25]+0x00000000u); // 801F2B38
  W32(c->r[1]+0x00000018u,c->r[0]); // 801F2B3C
L_801F2B40:;
  c->r[3]=0u+0x802E0000u; // 801F2B40
  c->r[30]=0u+0x00000001u; // 801F2B44
  c->r[31]=c->r[3]+0x000014C8u; // 801F2B48
  goto L_801F2E8C; // 801F2B4C
L_801F2B50:;
  cmps(c,0,(int32_t)c->r[24],0); // 801F2B50
  if (!crb(c,1)) { goto L_801F2BFC; } // 801F2B54
  c->r[0]=c->r[4]-c->r[29]; // 801F2B58
  c->r[4]=0u+0x00000000u; // 801F2B5C
  cmps(c,0,(int32_t)c->r[0],1); // 801F2B60
  if (crb(c,1)) { goto L_801F2B74; } // 801F2B64
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F2B68
  cmps(c,0,(int32_t)c->r[0],0); // 801F2B6C
  if (!crb(c,2)) { goto L_801F2B78; } // 801F2B70
L_801F2B74:;
  c->r[4]=0u+0x00000001u; // 801F2B74
L_801F2B78:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F2B78
  if (crb(c,2)) { goto L_801F2B88; } // 801F2B7C
  c->r[4]=R8(c->r[22]+0x00000001u); // 801F2B80
  goto L_801F2B8C; // 801F2B84
L_801F2B88:;
  c->r[4]=0u+0x00000000u; // 801F2B88
L_801F2B8C:;
  c->lr=0x801F2B90u; f_801F0B28(c); // 801F2B8C
  cmps(c,0,(int32_t)c->r[3],0); // 801F2B90
  c->r[19]=c->r[3]|c->r[3]; // 801F2B94
  if (!crb(c,1)) { goto L_801F2BFC; } // 801F2B98
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F2B9C
  c->r[3]=c->r[20]|c->r[20]; // 801F2BA0
  c->r[5]=c->r[24]|c->r[24]; // 801F2BA4
  c->r[4]=0u+0x00000002u; // 801F2BA8
  c->lr=0x801F2BB0u; f_801F0B5C(c); // 801F2BAC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F2BB0
  c->r[0]=c->r[0]-c->r[28]; // 801F2BB4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F2BB8
  if (!crb(c,0)) { goto L_801F2BD4; } // 801F2BBC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2BC0
  cmps(c,0,(int32_t)c->r[0],0); // 801F2BC4
  if (crb(c,2)) { goto L_801F2BD4; } // 801F2BC8
  c->r[26]=0u+0xFFFFFFFFu; // 801F2BCC
  goto L_801F2EB0; // 801F2BD0
L_801F2BD4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2BD4
  c->r[22]=c->r[22]+c->r[19]; // 801F2BD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F2BDC
  c->r[29]=c->r[29]+c->r[19]; // 801F2BE0
  cmps(c,0,(int32_t)c->r[0],0); // 801F2BE4
  c->r[28]=c->r[28]+c->r[3]; // 801F2BE8
  if (crb(c,2)) { goto L_801F2E8C; } // 801F2BEC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F2BF0
  c->r[20]=c->r[20]+c->r[0]; // 801F2BF4
  goto L_801F2E8C; // 801F2BF8
L_801F2BFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2BFC
  c->r[4]=c->r[22]|c->r[22]; // 801F2C00
  c->r[6]=R32(c->r[1]+0x00000008u); // 801F2C04
  c->r[3]=c->r[1]+0x00000018u; // 801F2C08
  c->r[5]=c->r[0]-c->r[29]; // 801F2C0C
  c->lr=0x801F2C14u; f_801F35C4(c); // 801F2C10
  cmps(c,0,(int32_t)c->r[3],0); // 801F2C14
  if (crb(c,0)) { goto L_801F2EB0; } // 801F2C18
  if (!crb(c,1)) { goto L_801F2C2C; } // 801F2C1C
  c->r[22]=c->r[22]+c->r[3]; // 801F2C20
  c->r[29]=c->r[29]+c->r[3]; // 801F2C24
  goto L_801F2E8C; // 801F2C28
L_801F2C2C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F2C2C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801F2C30
  if (crb(c,0)) { goto L_801F2C4C; } // 801F2C34
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2C38
  cmps(c,0,(int32_t)c->r[0],0); // 801F2C3C
  if (crb(c,2)) { goto L_801F2C4C; } // 801F2C40
  c->r[26]=0u+0xFFFFFFFFu; // 801F2C44
  goto L_801F2EB0; // 801F2C48
L_801F2C4C:;
  c->r[3]=R8(c->r[22]+0x00000000u); // 801F2C4C
  cmpu(c,1,c->r[3],0x00000020u); // 801F2C50
  if (!crb(c,4)) { goto L_801F2C84; } // 801F2C54
  cmpu(c,0,c->r[3],0x0000000Au); // 801F2C58
  if (crb(c,2)) { goto L_801F2C68; } // 801F2C5C
  cmpu(c,0,c->r[3],0x0000000Du); // 801F2C60
  if (!crb(c,2)) { goto L_801F2C6C; } // 801F2C64
L_801F2C68:;
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F2C68
L_801F2C6C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2C6C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2C70
  if (crb(c,2)) { goto L_801F2E70; } // 801F2C74
  W16(c->r[20]+0x00000000u,c->r[3]); // 801F2C78
  c->r[20]=c->r[20]+0x00000002u; // 801F2C7C
  goto L_801F2E70; // 801F2C80
L_801F2C84:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F2C84
  cmps(c,0,(int32_t)c->r[0],3); // 801F2C88
  if (crb(c,2)) { goto L_801F2CD8; } // 801F2C8C
  if (!crb(c,0)) { goto L_801F2CA4; } // 801F2C90
  cmps(c,0,(int32_t)c->r[0],0); // 801F2C94
  if (crb(c,2)) { goto L_801F2E6C; } // 801F2C98
  if (!crb(c,0)) { goto L_801F2CB0; } // 801F2C9C
  goto L_801F2E6C; // 801F2CA0
L_801F2CA4:;
  cmps(c,0,(int32_t)c->r[0],5); // 801F2CA4
  if (crb(c,2)) { goto L_801F2D0C; } // 801F2CA8
  goto L_801F2E6C; // 801F2CAC
L_801F2CB0:;
  cmpu(c,0,c->r[3],0x00000080u); // 801F2CB0
  if (crb(c,0)) { goto L_801F2CC0; } // 801F2CB4
  c->r[26]=0u+0xFFFFFFFCu; // 801F2CB8
  goto L_801F2E70; // 801F2CBC
L_801F2CC0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2CC0
  cmps(c,0,(int32_t)c->r[0],0); // 801F2CC4
  if (crb(c,2)) { goto L_801F2E70; } // 801F2CC8
  W16(c->r[20]+0x00000000u,c->r[3]); // 801F2CCC
  c->r[20]=c->r[20]+0x00000002u; // 801F2CD0
  goto L_801F2E70; // 801F2CD4
L_801F2CD8:;
  if (crb(c,6)) { goto L_801F2CE4; } // 801F2CD8
  cmpu(c,0,c->r[3],0x00000060u); // 801F2CDC
  if (crb(c,0)) { goto L_801F2CEC; } // 801F2CE0
L_801F2CE4:;
  c->r[26]=0u+0xFFFFFFFCu; // 801F2CE4
  goto L_801F2E70; // 801F2CE8
L_801F2CEC:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2CEC
  cmps(c,0,(int32_t)c->r[0],0); // 801F2CF0
  if (crb(c,2)) { goto L_801F2E70; } // 801F2CF4
  c->r[3]=c->r[3]+0x00010000u; // 801F2CF8
  c->r[0]=c->r[3]+0xFFFFFF40u; // 801F2CFC
  W16(c->r[20]+0x00000000u,c->r[0]); // 801F2D00
  c->r[20]=c->r[20]+0x00000002u; // 801F2D04
  goto L_801F2E70; // 801F2D08
L_801F2D0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2D0C
  c->r[0]=c->r[0]-c->r[29]; // 801F2D10
  cmps(c,0,(int32_t)c->r[0],2); // 801F2D14
  if (!crb(c,0)) { goto L_801F2D30; } // 801F2D18
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F2D1C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2D20
  if (crb(c,2)) { goto L_801F2D30; } // 801F2D24
  c->r[27]=0u+0x00000001u; // 801F2D28
  goto L_801F2E70; // 801F2D2C
L_801F2D30:;
  cmpu(c,0,c->r[3],0x00000020u); // 801F2D30
  {uint32_t ea=c->r[22]+0x00000001u; c->r[6]=R8(ea); c->r[22]=ea;} // 801F2D34
  if (crb(c,2)) { goto L_801F2D54; } // 801F2D38
  cmpu(c,0,c->r[3],0x00000098u); // 801F2D3C
  if (crb(c,1)) { goto L_801F2D54; } // 801F2D40
  cmpu(c,0,c->r[6],0x00000021u); // 801F2D44
  if (crb(c,0)) { goto L_801F2D54; } // 801F2D48
  cmpu(c,0,c->r[6],0x0000007Eu); // 801F2D4C
  if (!crb(c,1)) { goto L_801F2D5C; } // 801F2D50
L_801F2D54:;
  c->r[26]=0u+0xFFFFFFFCu; // 801F2D54
  goto L_801F2E70; // 801F2D58
L_801F2D5C:;
  cmpu(c,0,c->r[3],0x0000005Fu); // 801F2D5C
  c->r[5]=0u+0x000000B0u; // 801F2D60
  if (!crb(c,0)) { goto L_801F2D6C; } // 801F2D64
  c->r[5]=0u+0x00000070u; // 801F2D68
L_801F2D6C:;
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801F2D6C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801F2D70
  c->r[0]=c->r[0]^c->r[4]; // 801F2D74
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 801F2D78
  if (crb(c,2)) { goto L_801F2D90; } // 801F2D7C
  c->r[0]=addc(c,~c->r[6],0x0000005Fu,1); // 801F2D80
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801F2D84
  c->r[0]=c->r[4]+0x0000001Fu; // 801F2D88
  goto L_801F2D94; // 801F2D8C
L_801F2D90:;
  c->r[0]=0u+0x0000007Eu; // 801F2D90
L_801F2D94:;
  c->r[3]=c->r[3]+0x00000001u; // 801F2D94
  c->r[0]=c->r[6]+c->r[0]; // 801F2D98
  c->r[3]=sraw(c,c->r[3],1); // 801F2D9C
  c->r[3]=c->r[3]+c->r[5]; // 801F2DA0
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801F2DA4
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801F2DA8
  cmpu(c,0,c->r[4],0x000000F0u); // 801F2DAC
  if (!crb(c,0)) { goto L_801F2DE8; } // 801F2DB0
  cmpu(c,0,c->r[4],0x000000A0u); // 801F2DB4
  c->r[3]=c->r[4]+0xFFFFFF3Fu; // 801F2DB8
  if (!crb(c,0)) { goto L_801F2DC4; } // 801F2DBC
  c->r[3]=c->r[4]+0xFFFFFF7Fu; // 801F2DC0
L_801F2DC4:;
  cmpu(c,0,c->r[5],0x0000007Fu); // 801F2DC4
  c->r[0]=c->r[5]+0xFFFFFFBFu; // 801F2DC8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 801F2DCC
  if (!crb(c,0)) { goto L_801F2DD8; } // 801F2DD0
  c->r[0]=c->r[5]+0xFFFFFFC0u; // 801F2DD4
L_801F2DD8:;
  c->r[0]=c->r[3]+c->r[0]; // 801F2DD8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F2DDC
  c->r[3]=R16(c->r[31]+c->r[0]); // 801F2DE0
  goto L_801F2E40; // 801F2DE4
L_801F2DE8:;
  cmpu(c,0,c->r[4],0x000000FAu); // 801F2DE8
  if (crb(c,0)) { goto L_801F2E18; } // 801F2DEC
  c->r[0]=c->r[4]+0xFFFFFF35u; // 801F2DF0
  cmpu(c,0,c->r[5],0x0000007Fu); // 801F2DF4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 801F2DF8
  c->r[0]=c->r[5]+0xFFFFFFBFu; // 801F2DFC
  if (!crb(c,0)) { goto L_801F2E08; } // 801F2E00
  c->r[0]=c->r[5]+0xFFFFFFC0u; // 801F2E04
L_801F2E08:;
  c->r[0]=c->r[3]+c->r[0]; // 801F2E08
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F2E0C
  c->r[3]=R16(c->r[31]+c->r[0]); // 801F2E10
  goto L_801F2E40; // 801F2E14
L_801F2E18:;
  c->r[0]=c->r[4]+0xFFFFFF10u; // 801F2E18
  cmpu(c,0,c->r[5],0x0000007Fu); // 801F2E1C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 801F2E20
  c->r[0]=c->r[5]+0xFFFFFFBFu; // 801F2E24
  if (!crb(c,0)) { goto L_801F2E30; } // 801F2E28
  c->r[0]=c->r[5]+0xFFFFFFC0u; // 801F2E2C
L_801F2E30:;
  c->r[3]=c->r[3]+c->r[0]; // 801F2E30
  c->r[3]=c->r[3]+0x00010000u; // 801F2E34
  c->r[0]=c->r[3]+0xFFFFE000u; // 801F2E38
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801F2E3C
L_801F2E40:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F2E40
  if (!crb(c,2)) { goto L_801F2E50; } // 801F2E44
  c->r[26]=0u+0xFFFFFFFEu; // 801F2E48
  goto L_801F2E70; // 801F2E4C
L_801F2E50:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F2E50
  cmps(c,0,(int32_t)c->r[0],0); // 801F2E54
  if (crb(c,2)) { goto L_801F2E64; } // 801F2E58
  W16(c->r[20]+0x00000000u,c->r[3]); // 801F2E5C
  c->r[20]=c->r[20]+0x00000002u; // 801F2E60
L_801F2E64:;
  c->r[29]=c->r[29]+0x00000001u; // 801F2E64
  goto L_801F2E70; // 801F2E68
L_801F2E6C:;
  c->r[26]=0u+0xFFFFFFFCu; // 801F2E6C
L_801F2E70:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F2E70
  if (!crb(c,2)) { goto L_801F2EB0; } // 801F2E74
  cmps(c,0,(int32_t)c->r[27],0); // 801F2E78
  if (!crb(c,2)) { goto L_801F2EB0; } // 801F2E7C
  c->r[28]=c->r[28]+0x00000001u; // 801F2E80
  c->r[22]=c->r[22]+0x00000001u; // 801F2E84
  c->r[29]=c->r[29]+0x00000001u; // 801F2E88
L_801F2E8C:;
  c->r[3]=R8(c->r[22]+0x00000000u); // 801F2E8C
  cmps(c,0,(int32_t)c->r[3],0); // 801F2E90
  if (crb(c,2)) { goto L_801F2EB0; } // 801F2E94
  c->r[4]=R32(c->r[1]+0x00000014u); // 801F2E98
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 801F2E9C
  if (crb(c,0)) { IRQCHK(c); goto L_801F2B50; } // 801F2EA0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F2EA4
  cmps(c,0,(int32_t)c->r[0],0); // 801F2EA8
  if (crb(c,2)) { IRQCHK(c); goto L_801F2B50; } // 801F2EAC
L_801F2EB0:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F2EB0
  if (crb(c,2)) { goto L_801F2EC0; } // 801F2EB4
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F2EB8
  W32(c->r[25]+0x00000000u,c->r[0]); // 801F2EBC
L_801F2EC0:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F2EC0
  if (crb(c,2)) { goto L_801F2ECC; } // 801F2EC4
  W32(c->r[23]+0x00000000u,c->r[29]); // 801F2EC8
L_801F2ECC:;
  cmps(c,0,(int32_t)c->r[21],0); // 801F2ECC
  if (crb(c,2)) { goto L_801F2ED8; } // 801F2ED0
  W32(c->r[21]+0x00000000u,c->r[28]); // 801F2ED4
L_801F2ED8:;
  c->r[3]=c->r[26]|c->r[26]; // 801F2ED8
L_801F2EDC:;
  c->r[11]=c->r[1]+0x00000060u; // 801F2EDC
  c->lr=0x801F2EE4u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F2EE0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801F2EE4
  c->lr=c->r[0]; // 801F2EE8
  c->r[1]=c->r[1]+0x00000060u; // 801F2EEC
  return; // 801F2EF0
}

// fn_801F2EF4
void f_801F2EF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2EF4
  c->r[0]=c->lr; // 801F2EF8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801F2EFC
  c->r[11]=c->r[1]+0x00000060u; // 801F2F00
  c->lr=0x801F2F08u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F2F04
  c->r[20]=c->r[5]|c->r[5]; // 801F2F08
  c->r[10]=0u+0x00000001u; // 801F2F0C
  c->r[9]=0u+0xFFFFFFFFu; // 801F2F10
  c->r[5]=0u-c->r[3]; // 801F2F14
  c->r[0]=0u-c->r[20]; // 801F2F18
  c->r[21]=c->r[6]|c->r[6]; // 801F2F1C
  c->r[23]=c->r[8]|c->r[8]; // 801F2F20
  W32(c->r[1]+0x00000024u,c->r[10]); // 801F2F24
  c->r[5]=c->r[5]|c->r[3]; // 801F2F28
  c->r[18]=c->r[3]|c->r[3]; // 801F2F2C
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F2F30
  W32(c->r[1]+0x00000020u,c->r[9]); // 801F2F34
  c->r[0]=c->r[0]|c->r[20]; // 801F2F38
  c->r[22]=c->r[7]|c->r[7]; // 801F2F3C
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 801F2F40
  c->r[19]=c->r[4]|c->r[4]; // 801F2F44
  c->r[8]=c->r[21]|c->r[21]; // 801F2F48
  c->r[5]=c->r[1]+0x0000001Cu; // 801F2F4C
  W32(c->r[1]+0x00000018u,c->r[10]); // 801F2F50
  c->r[6]=c->r[1]+0x00000018u; // 801F2F54
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F2F58
  c->r[9]=c->r[1]+0x00000020u; // 801F2F5C
  W32(c->r[1]+0x00000014u,c->r[10]); // 801F2F60
  c->r[10]=c->r[1]+0x00000014u; // 801F2F64
  c->r[27]=0u+0x00000001u; // 801F2F68
  c->r[26]=0u+0x00000000u; // 801F2F6C
  c->r[25]=0u+0x00000000u; // 801F2F70
  c->lr=0x801F2F78u; f_801F0A30(c); // 801F2F74
  cmps(c,0,(int32_t)c->r[3],0); // 801F2F78
  c->r[24]=c->r[3]|c->r[3]; // 801F2F7C
  if (crb(c,2)) { goto L_801F2F88; } // 801F2F80
  goto L_801F3398; // 801F2F84
L_801F2F88:;
  c->r[0]=R32(c->r[13]+0xFFFF95B8u); // 801F2F88
  cmps(c,0,(int32_t)c->r[0],0); // 801F2F8C
  if (!crb(c,2)) { goto L_801F2F9C; } // 801F2F90
  c->r[3]=0u+0xFFFFFFFEu; // 801F2F94
  goto L_801F3398; // 801F2F98
L_801F2F9C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F2F9C
  if (crb(c,2)) { goto L_801F2FAC; } // 801F2FA0
  c->r[0]=R32(c->r[23]+0x00000000u); // 801F2FA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F2FA8
L_801F2FAC:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F2FAC
  cmps(c,0,(int32_t)c->r[0],0); // 801F2FB0
  if (crb(c,1)) { goto L_801F2FC4; } // 801F2FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2FB8
  cmps(c,0,(int32_t)c->r[0],0); // 801F2FBC
  if (!crb(c,2)) { goto L_801F3004; } // 801F2FC0
L_801F2FC4:;
  c->r[0]=R16(c->r[20]+0x00000000u); // 801F2FC4
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F2FC8
  if (!crb(c,2)) { goto L_801F2FDC; } // 801F2FCC
  c->r[26]=0u+0x00000001u; // 801F2FD0
  c->r[20]=c->r[20]+0x00000002u; // 801F2FD4
  goto L_801F3004; // 801F2FD8
L_801F2FDC:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F2FDC
  if (!crb(c,2)) { goto L_801F3004; } // 801F2FE0
  cmps(c,0,(int32_t)c->r[19],0); // 801F2FE4
  if (crb(c,2)) { goto L_801F2FF4; } // 801F2FE8
  c->r[0]=0u+0x00000000u; // 801F2FEC
  W32(c->r[19]+0x00000000u,c->r[0]); // 801F2FF0
L_801F2FF4:;
  c->r[0]=0u+0x00000000u; // 801F2FF4
  c->r[3]=0u+0xFFFFFFFCu; // 801F2FF8
  W32(c->r[21]+0x00000000u,c->r[0]); // 801F2FFC
  goto L_801F3398; // 801F3000
L_801F3004:;
  c->r[31]=0u+0x802F0000u; // 801F3004
  c->r[29]=0u+0x00000000u; // 801F3008
  c->r[31]=c->r[31]+0xFFFFB730u; // 801F300C
  c->r[30]=0u+0x0000007Eu; // 801F3010
  goto L_801F32CC; // 801F3014
L_801F3018:;
  c->r[27]=R32(c->r[1]+0x00000024u); // 801F3018
  c->r[4]=c->r[20]|c->r[20]; // 801F301C
  c->r[3]=c->r[1]+0x00000024u; // 801F3020
  c->lr=0x801F3028u; f_801F382C(c); // 801F3024
  cmps(c,0,(int32_t)c->r[3],0); // 801F3028
  if (!crb(c,0)) { goto L_801F3038; } // 801F302C
  c->r[24]=0u+0xFFFFFFFEu; // 801F3030
  goto L_801F32F0; // 801F3034
L_801F3038:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801F3038
  c->r[3]=c->r[18]|c->r[18]; // 801F303C
  c->r[5]=R32(c->r[1]+0x00000024u); // 801F3040
  c->r[6]=c->r[27]|c->r[27]; // 801F3044
  c->r[7]=R32(c->r[1]+0x00000018u); // 801F3048
  c->r[4]=c->r[0]-c->r[25]; // 801F304C
  c->lr=0x801F3054u; f_801F372C(c); // 801F3050
  cmps(c,0,(int32_t)c->r[3],0); // 801F3054
  if (!crb(c,0)) { goto L_801F3064; } // 801F3058
  c->r[24]=0u+0xFFFFFFFFu; // 801F305C
  goto L_801F32F0; // 801F3060
L_801F3064:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F3064
  cmps(c,0,(int32_t)c->r[0],0); // 801F3068
  if (crb(c,2)) { goto L_801F3074; } // 801F306C
  c->r[18]=c->r[18]+c->r[3]; // 801F3070
L_801F3074:;
  cmps(c,0,(int32_t)c->r[22],0); // 801F3074
  c->r[25]=c->r[25]+c->r[3]; // 801F3078
  if (!crb(c,1)) { goto L_801F3128; } // 801F307C
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F3080
  c->r[4]=0u+0x00000000u; // 801F3084
  c->r[3]=R16(c->r[20]+0x00000000u); // 801F3088
  c->r[0]=c->r[0]-c->r[26]; // 801F308C
  cmps(c,0,(int32_t)c->r[0],1); // 801F3090
  if (crb(c,1)) { goto L_801F30A4; } // 801F3094
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F3098
  cmps(c,0,(int32_t)c->r[0],0); // 801F309C
  if (!crb(c,2)) { goto L_801F30A8; } // 801F30A0
L_801F30A4:;
  c->r[4]=0u+0x00000001u; // 801F30A4
L_801F30A8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F30A8
  if (crb(c,2)) { goto L_801F30B8; } // 801F30AC
  c->r[4]=R16(c->r[20]+0x00000002u); // 801F30B0
  goto L_801F30BC; // 801F30B4
L_801F30B8:;
  c->r[4]=0u+0x00000000u; // 801F30B8
L_801F30BC:;
  c->lr=0x801F30C0u; f_801F0B28(c); // 801F30BC
  cmps(c,0,(int32_t)c->r[3],0); // 801F30C0
  c->r[28]=c->r[3]|c->r[3]; // 801F30C4
  if (!crb(c,1)) { goto L_801F3128; } // 801F30C8
  c->r[6]=R32(c->r[1]+0x00000018u); // 801F30CC
  c->r[3]=c->r[18]|c->r[18]; // 801F30D0
  c->r[5]=c->r[22]|c->r[22]; // 801F30D4
  c->r[4]=0u+0x00000001u; // 801F30D8
  c->lr=0x801F30E0u; f_801F0B5C(c); // 801F30DC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801F30E0
  c->r[0]=c->r[0]-c->r[25]; // 801F30E4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F30E8
  if (!crb(c,0)) { goto L_801F3104; } // 801F30EC
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F30F0
  cmps(c,0,(int32_t)c->r[0],0); // 801F30F4
  if (crb(c,2)) { goto L_801F3104; } // 801F30F8
  c->r[24]=0u+0xFFFFFFFFu; // 801F30FC
  goto L_801F32F0; // 801F3100
L_801F3104:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F3104
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801F3108
  c->r[20]=c->r[20]+c->r[4]; // 801F310C
  c->r[26]=c->r[26]+c->r[28]; // 801F3110
  cmps(c,0,(int32_t)c->r[0],0); // 801F3114
  c->r[25]=c->r[25]+c->r[3]; // 801F3118
  if (crb(c,2)) { goto L_801F32CC; } // 801F311C
  c->r[18]=c->r[18]+c->r[3]; // 801F3120
  goto L_801F32CC; // 801F3124
L_801F3128:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F3128
  c->r[4]=R16(c->r[20]+0x00000000u); // 801F312C
  cmps(c,0,(int32_t)c->r[0],1); // 801F3130
  W8(c->r[1]+0x00000011u,c->r[29]); // 801F3134
  W8(c->r[1]+0x00000010u,c->r[29]); // 801F3138
  if (crb(c,2)) { goto L_801F3154; } // 801F313C
  if (!crb(c,0)) { goto L_801F3148; } // 801F3140
  goto L_801F3278; // 801F3144
L_801F3148:;
  cmps(c,0,(int32_t)c->r[0],5); // 801F3148
  if (crb(c,2)) { goto L_801F3194; } // 801F314C
  goto L_801F3278; // 801F3150
L_801F3154:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F3154
  cmps(c,0,(int32_t)c->r[0],0); // 801F3158
  if (crb(c,2)) { goto L_801F327C; } // 801F315C
  cmpu(c,0,c->r[4],0x00000080u); // 801F3160
  if (!crb(c,0)) { goto L_801F3170; } // 801F3164
  W8(c->r[1]+0x00000010u,c->r[4]); // 801F3168
  goto L_801F327C; // 801F316C
L_801F3170:;
  cmpu(c,0,c->r[4],0x0000203Eu); // 801F3170
  if (!crb(c,2)) { goto L_801F3180; } // 801F3174
  W8(c->r[1]+0x00000010u,c->r[30]); // 801F3178
  goto L_801F327C; // 801F317C
L_801F3180:;
  cmpu(c,0,c->r[4],0x00000100u); // 801F3180
  if (!crb(c,0)) { goto L_801F327C; } // 801F3184
  c->r[3]=c->r[1]+0x00000010u; // 801F3188
  c->lr=0x801F3190u; f_801F34A8(c); // 801F318C
  goto L_801F327C; // 801F3190
L_801F3194:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801F3194
  c->lr=0x801F319Cu; f_801F33B0(c); // 801F3198
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 801F319C
  c->r[5]=R8(c->r[1]+0x0000000Du); // 801F31A0
  cmps(c,0,(int32_t)c->r[4],0); // 801F31A4
  if (!crb(c,2)) { goto L_801F31B4; } // 801F31A8
  c->r[24]=0u+0xFFFFFFFEu; // 801F31AC
  goto L_801F327C; // 801F31B0
L_801F31B4:;
  cmpu(c,0,c->r[4],0x000000A0u); // 801F31B4
  if (crb(c,0)) { goto L_801F31E4; } // 801F31B8
  cmpu(c,0,c->r[4],0x000000E0u); // 801F31BC
  if (!crb(c,0)) { goto L_801F31E4; } // 801F31C0
  c->r[0]=c->r[4]+0xFFFFFF5Fu; // 801F31C4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F31C8
  c->r[4]=c->r[31]+c->r[0]; // 801F31CC
  c->r[3]=R8(c->r[31]+c->r[0]); // 801F31D0
  c->r[0]=R8(c->r[4]+0x00000001u); // 801F31D4
  W8(c->r[1]+0x00000010u,c->r[3]); // 801F31D8
  W8(c->r[1]+0x00000011u,c->r[0]); // 801F31DC
  goto L_801F327C; // 801F31E0
L_801F31E4:;
  cmpu(c,0,c->r[4],0x000000FAu); // 801F31E4
  if (crb(c,0)) { goto L_801F3214; } // 801F31E8
  c->r[3]=c->r[1]+0x00000008u; // 801F31EC
  c->lr=0x801F31F4u; f_801F3900(c); // 801F31F0
  c->r[4]=R8(c->r[1]+0x00000008u); // 801F31F4
  cmps(c,0,(int32_t)c->r[4],0); // 801F31F8
  if (crb(c,2)) { goto L_801F320C; } // 801F31FC
  c->r[5]=R8(c->r[1]+0x00000009u); // 801F3200
  cmps(c,0,(int32_t)c->r[5],0); // 801F3204
  if (!crb(c,2)) { goto L_801F3214; } // 801F3208
L_801F320C:;
  c->r[24]=0u+0xFFFFFFFEu; // 801F320C
  goto L_801F327C; // 801F3210
L_801F3214:;
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801F3214
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 801F3218
  cmpu(c,0,c->r[0],0x000000A0u); // 801F321C
  c->r[6]=0u+0x000000B0u; // 801F3220
  c->r[0]=c->r[3]+0xFFFFFF61u; // 801F3224
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F3228
  if (!crb(c,0)) { goto L_801F3234; } // 801F322C
  c->r[6]=0u+0x00000070u; // 801F3230
L_801F3234:;
  cmps(c,0,(int32_t)c->r[7],0); // 801F3234
  if (crb(c,2)) { goto L_801F3250; } // 801F3238
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 801F323C
  c->r[0]=addc(c,~c->r[0],0x0000007Fu,1); // 801F3240
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F3244
  c->r[8]=c->r[3]+0x0000001Fu; // 801F3248
  goto L_801F3254; // 801F324C
L_801F3250:;
  c->r[8]=0u+0x0000007Eu; // 801F3250
L_801F3254:;
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 801F3254
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 801F3258
  c->r[3]=c->r[3]-c->r[6]; // 801F325C
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F3260
  c->r[0]=c->r[0]-c->r[8]; // 801F3264
  c->r[3]=c->r[3]-c->r[7]; // 801F3268
  W8(c->r[1]+0x00000011u,c->r[0]); // 801F326C
  W8(c->r[1]+0x00000010u,c->r[3]); // 801F3270
  goto L_801F327C; // 801F3274
L_801F3278:;
  c->r[24]=0u+0xFFFFFFFEu; // 801F3278
L_801F327C:;
  cmps(c,0,(int32_t)c->r[24],0); // 801F327C
  if (!crb(c,2)) { goto L_801F32F0; } // 801F3280
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F3284
  c->r[20]=c->r[20]+0x00000002u; // 801F3288
  c->r[26]=c->r[26]+0x00000001u; // 801F328C
  c->r[25]=c->r[25]+0x00000001u; // 801F3290
  cmps(c,0,(int32_t)c->r[0],0); // 801F3294
  if (crb(c,2)) { goto L_801F32A8; } // 801F3298
  c->r[0]=R8(c->r[1]+0x00000010u); // 801F329C
  W8(c->r[18]+0x00000000u,c->r[0]); // 801F32A0
  c->r[18]=c->r[18]+0x00000001u; // 801F32A4
L_801F32A8:;
  c->r[3]=R8(c->r[1]+0x00000011u); // 801F32A8
  cmps(c,0,(int32_t)c->r[3],0); // 801F32AC
  if (crb(c,2)) { goto L_801F32CC; } // 801F32B0
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F32B4
  c->r[25]=c->r[25]+0x00000001u; // 801F32B8
  cmps(c,0,(int32_t)c->r[0],0); // 801F32BC
  if (crb(c,2)) { goto L_801F32CC; } // 801F32C0
  W8(c->r[18]+0x00000000u,c->r[3]); // 801F32C4
  c->r[18]=c->r[18]+0x00000001u; // 801F32C8
L_801F32CC:;
  c->r[0]=R16(c->r[20]+0x00000000u); // 801F32CC
  cmps(c,0,(int32_t)c->r[0],0); // 801F32D0
  if (crb(c,2)) { goto L_801F32F0; } // 801F32D4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F32D8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801F32DC
  if (crb(c,0)) { IRQCHK(c); goto L_801F3018; } // 801F32E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F32E4
  cmps(c,0,(int32_t)c->r[0],0); // 801F32E8
  if (crb(c,2)) { IRQCHK(c); goto L_801F3018; } // 801F32EC
L_801F32F0:;
  cmps(c,0,(int32_t)c->r[24],0); // 801F32F0
  if (crb(c,2)) { goto L_801F32FC; } // 801F32F4
  W32(c->r[1]+0x00000024u,c->r[27]); // 801F32F8
L_801F32FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F32FC
  cmps(c,0,(int32_t)c->r[0],1); // 801F3300
  if (crb(c,2)) { goto L_801F336C; } // 801F3304
  cmps(c,0,(int32_t)c->r[26],0); // 801F3308
  if (!crb(c,1)) { goto L_801F336C; } // 801F330C
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F3310
  c->r[3]=0u+0x00000001u; // 801F3314
  W32(c->r[1]+0x00000024u,c->r[3]); // 801F3318
  cmps(c,0,(int32_t)c->r[0],0); // 801F331C
  if (crb(c,2)) { goto L_801F334C; } // 801F3320
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801F3324
  c->r[0]=c->r[0]-c->r[25]; // 801F3328
  cmps(c,0,(int32_t)c->r[0],3); // 801F332C
  if (crb(c,0)) { goto L_801F334C; } // 801F3330
  c->r[0]=0u+0x0000001Bu; // 801F3334
  c->r[3]=0u+0x00000028u; // 801F3338
  W8(c->r[18]+0x00000000u,c->r[0]); // 801F333C
  c->r[0]=0u+0x00000042u; // 801F3340
  W8(c->r[18]+0x00000001u,c->r[3]); // 801F3344
  W8(c->r[18]+0x00000002u,c->r[0]); // 801F3348
L_801F334C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F334C
  cmps(c,0,(int32_t)c->r[0],0); // 801F3350
  if (crb(c,2)) { goto L_801F3368; } // 801F3354
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801F3358
  c->r[0]=c->r[0]-c->r[25]; // 801F335C
  cmps(c,0,(int32_t)c->r[0],3); // 801F3360
  if (crb(c,0)) { goto L_801F336C; } // 801F3364
L_801F3368:;
  c->r[25]=c->r[25]+0x00000003u; // 801F3368
L_801F336C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F336C
  if (crb(c,2)) { goto L_801F337C; } // 801F3370
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F3374
  W32(c->r[23]+0x00000000u,c->r[0]); // 801F3378
L_801F337C:;
  cmps(c,0,(int32_t)c->r[21],0); // 801F337C
  if (crb(c,2)) { goto L_801F3388; } // 801F3380
  W32(c->r[21]+0x00000000u,c->r[26]); // 801F3384
L_801F3388:;
  cmps(c,0,(int32_t)c->r[19],0); // 801F3388
  if (crb(c,2)) { goto L_801F3394; } // 801F338C
  W32(c->r[19]+0x00000000u,c->r[25]); // 801F3390
L_801F3394:;
  c->r[3]=c->r[24]|c->r[24]; // 801F3394
L_801F3398:;
  c->r[11]=c->r[1]+0x00000060u; // 801F3398
  c->lr=0x801F33A0u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F339C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801F33A0
  c->lr=c->r[0]; // 801F33A4
  c->r[1]=c->r[1]+0x00000060u; // 801F33A8
  return; // 801F33AC
}

// fn_801F33B0
void f_801F33B0(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000080u); // 801F33B0
  if (!crb(c,0)) { goto L_801F33C8; } // 801F33B4
  c->r[0]=0u+0x00000000u; // 801F33B8
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F33BC
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F33C0
  return; // 801F33C4
L_801F33C8:;
  cmpu(c,0,c->r[4],0x0000FF61u); // 801F33C8
  if (crb(c,0)) { goto L_801F33F0; } // 801F33CC
  cmpu(c,0,c->r[4],0x0000FF9Fu); // 801F33D0
  if (crb(c,1)) { goto L_801F33F0; } // 801F33D4
  c->r[4]=c->r[4]+0xFFFF0000u; // 801F33D8
  c->r[0]=0u+0x00000000u; // 801F33DC
  c->r[4]=c->r[4]+0x00000140u; // 801F33E0
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F33E4
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F33E8
  return; // 801F33EC
L_801F33F0:;
  cmpu(c,0,c->r[4],0x0000D800u); // 801F33F0
  if (crb(c,0)) { goto L_801F3400; } // 801F33F4
  cmpu(c,0,c->r[4],0x0000F900u); // 801F33F8
  if (crb(c,0)) { goto L_801F3404; } // 801F33FC
L_801F3400:;
  f_801F34A8(c); return; // 801F3400
L_801F3404:;
  cmpu(c,0,c->r[4],0x0000E000u); // 801F3404
  if (crb(c,0)) { goto L_801F3460; } // 801F3408
  cmpu(c,0,c->r[4],0x0000E757u); // 801F340C
  if (crb(c,1)) { goto L_801F3460; } // 801F3410
  c->r[5]=c->r[4]+0xFFFF0000u; // 801F3414
  c->r[4]=0u+0xAE4C0000u; // 801F3418
  c->r[4]=c->r[4]+0x0000415Du; // 801F341C
  c->r[5]=c->r[5]+0x00002000u; // 801F3420
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[5])>>32); // 801F3424
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 801F3428
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 801F342C
  c->r[6]=c->r[5]-c->r[0]; // 801F3430
  c->r[0]=c->r[5]-c->r[6]; // 801F3434
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801F3438
  cmpu(c,0,c->r[6],0x0000003Fu); // 801F343C
  c->r[0]=c->r[6]+0x00000041u; // 801F3440
  c->r[4]=rotl(c->r[4],25)&0x01FFFFFFu; // 801F3444
  c->r[4]=c->r[4]+0x000000F0u; // 801F3448
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F344C
  if (!crb(c,0)) { goto L_801F3458; } // 801F3450
  c->r[0]=c->r[6]+0x00000040u; // 801F3454
L_801F3458:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3458
  return; // 801F345C
L_801F3460:;
  cmpu(c,1,c->r[4],0x0000F8F0u); // 801F3460
  if (crb(c,4)) { goto L_801F3498; } // 801F3464
  cmpu(c,0,c->r[4],0x0000F8F3u); // 801F3468
  if (crb(c,1)) { goto L_801F3498; } // 801F346C
  if (!crb(c,6)) { goto L_801F3480; } // 801F3470
  c->r[0]=0u+0x000000A0u; // 801F3474
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F3478
  goto L_801F348C; // 801F347C
L_801F3480:;
  c->r[4]=c->r[4]+0xFFFF0000u; // 801F3480
  c->r[0]=c->r[4]+0x0000080Cu; // 801F3484
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F3488
L_801F348C:;
  c->r[0]=0u+0x00000000u; // 801F348C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3490
  return; // 801F3494
L_801F3498:;
  c->r[0]=0u+0x00000000u; // 801F3498
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F349C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F34A0
  return; // 801F34A4
}

// fn_801F34A8
void f_801F34A8(Ctx* __restrict c) {
  c->r[7]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[7]); // 801F34A8
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801F34AC
  if (crb(c,2)) { goto L_801F34CC; } // 801F34B0
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801F34B4
  c->r[4]=0u+0x802F0000u; // 801F34B8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F34BC
  c->r[4]=c->r[4]+0xFFFFB530u; // 801F34C0
  c->r[8]=R16(c->r[4]+c->r[0]); // 801F34C4
  goto L_801F34D0; // 801F34C8
L_801F34CC:;
  c->r[8]=0u+0x00000000u; // 801F34CC
L_801F34D0:;
  c->r[5]=0u+0x802F0000u; // 801F34D0
  c->r[4]=0u+0x802E0000u; // 801F34D4
  c->r[0]=rotl(c->r[7],1)&0x000001FEu; // 801F34D8
  c->r[5]=c->r[5]+0xFFFFB530u; // 801F34DC
  c->r[4]=c->r[4]+0x00005E38u; // 801F34E0
  c->r[5]=R16(c->r[5]+c->r[0]); // 801F34E4
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 801F34E8
  goto L_801F3548; // 801F34EC
L_801F34F0:;
  c->r[5]=c->r[8]+c->r[7]; // 801F34F0
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801F34F4
  c->r[0]=c->r[0]+c->r[5]; // 801F34F8
  c->r[9]=sraw(c,c->r[0],1); // 801F34FC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801F3500
  c->r[0]=c->r[0]-c->r[9]; // 801F3504
  c->r[5]=c->r[4]+c->r[0]; // 801F3508
  c->r[10]=R8(c->r[4]+c->r[0]); // 801F350C
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F3510
  cmpu(c,0,c->r[0],c->r[6]); // 801F3514
  if (!crb(c,2)) { goto L_801F3530; } // 801F3518
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F351C
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F3520
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F3524
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3528
  return; // 801F352C
L_801F3530:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 801F3530
  if (!crb(c,1)) { goto L_801F3540; } // 801F3534
  c->r[7]=c->r[9]|c->r[9]; // 801F3538
  goto L_801F3548; // 801F353C
L_801F3540:;
  if (!crb(c,0)) { goto L_801F3548; } // 801F3540
  c->r[8]=c->r[9]|c->r[9]; // 801F3544
L_801F3548:;
  c->r[0]=c->r[7]-c->r[8]; // 801F3548
  cmps(c,0,(int32_t)c->r[0],1); // 801F354C
  if (crb(c,1)) { IRQCHK(c); goto L_801F34F0; } // 801F3550
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801F3554
  c->r[4]=0u+0x802E0000u; // 801F3558
  c->r[0]=c->r[0]-c->r[8]; // 801F355C
  c->r[4]=c->r[4]+0x00005E38u; // 801F3560
  c->r[5]=c->r[4]+c->r[0]; // 801F3564
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F3568
  cmpu(c,0,c->r[0],c->r[6]); // 801F356C
  if (!crb(c,2)) { goto L_801F3588; } // 801F3570
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F3574
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F3578
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F357C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3580
  return; // 801F3584
L_801F3588:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801F3588
  c->r[0]=c->r[0]-c->r[7]; // 801F358C
  c->r[5]=c->r[4]+c->r[0]; // 801F3590
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F3594
  cmpu(c,0,c->r[0],c->r[6]); // 801F3598
  if (!crb(c,2)) { goto L_801F35B4; } // 801F359C
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F35A0
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F35A4
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F35A8
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F35AC
  return; // 801F35B0
L_801F35B4:;
  c->r[0]=0u+0x00000000u; // 801F35B4
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F35B8
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F35BC
  return; // 801F35C0
}

// fn_801F35C4
void f_801F35C4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F35C4
  cmpu(c,0,c->r[0],0x0000001Bu); // 801F35C8
  if (!crb(c,2)) { goto L_801F3724; } // 801F35CC
  cmps(c,0,(int32_t)c->r[5],1); // 801F35D0
  if (!crb(c,0)) { goto L_801F35E8; } // 801F35D4
  cmps(c,0,(int32_t)c->r[6],0); // 801F35D8
  if (crb(c,2)) { goto L_801F35E8; } // 801F35DC
  c->r[3]=0u+0xFFFFFFFFu; // 801F35E0
  return; // 801F35E4
L_801F35E8:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 801F35E8
  cmps(c,0,(int32_t)c->r[0],0); // 801F35EC
  if (!crb(c,2)) { goto L_801F35FC; } // 801F35F0
  c->r[3]=0u+0xFFFFFFFFu; // 801F35F4
  return; // 801F35F8
L_801F35FC:;
  cmpu(c,0,c->r[0],0x00000024u); // 801F35FC
  if (!crb(c,2)) { goto L_801F3688; } // 801F3600
  cmps(c,0,(int32_t)c->r[5],2); // 801F3604
  if (!crb(c,0)) { goto L_801F361C; } // 801F3608
  cmps(c,0,(int32_t)c->r[6],0); // 801F360C
  if (crb(c,2)) { goto L_801F361C; } // 801F3610
  c->r[3]=0u+0xFFFFFFFFu; // 801F3614
  return; // 801F3618
L_801F361C:;
  c->r[0]=R8(c->r[4]+0x00000002u); // 801F361C
  cmps(c,0,(int32_t)c->r[0],0); // 801F3620
  if (!crb(c,2)) { goto L_801F3630; } // 801F3624
  c->r[3]=0u+0xFFFFFFFFu; // 801F3628
  return; // 801F362C
L_801F3630:;
  cmpu(c,0,c->r[0],0x00000040u); // 801F3630
  if (!crb(c,2)) { goto L_801F3648; } // 801F3634
  c->r[0]=0u+0x00000004u; // 801F3638
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F363C
  c->r[3]=0u+0x00000003u; // 801F3640
  return; // 801F3644
L_801F3648:;
  cmpu(c,0,c->r[0],0x00000042u); // 801F3648
  if (!crb(c,2)) { goto L_801F3660; } // 801F364C
  c->r[0]=0u+0x00000005u; // 801F3650
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F3654
  c->r[3]=0u+0x00000003u; // 801F3658
  return; // 801F365C
L_801F3660:;
  cmpu(c,0,c->r[0],0x00000044u); // 801F3660
  if (!crb(c,2)) { goto L_801F3678; } // 801F3664
  c->r[0]=0u+0x00000006u; // 801F3668
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F366C
  c->r[3]=0u+0x00000003u; // 801F3670
  return; // 801F3674
L_801F3678:;
  c->r[0]=0u+0x00000000u; // 801F3678
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F367C
  c->r[3]=0u+0x00000001u; // 801F3680
  return; // 801F3684
L_801F3688:;
  cmpu(c,0,c->r[0],0x00000028u); // 801F3688
  if (!crb(c,2)) { goto L_801F3714; } // 801F368C
  cmps(c,0,(int32_t)c->r[5],2); // 801F3690
  if (!crb(c,0)) { goto L_801F36A8; } // 801F3694
  cmps(c,0,(int32_t)c->r[6],0); // 801F3698
  if (crb(c,2)) { goto L_801F36A8; } // 801F369C
  c->r[3]=0u+0xFFFFFFFFu; // 801F36A0
  return; // 801F36A4
L_801F36A8:;
  c->r[0]=R8(c->r[4]+0x00000002u); // 801F36A8
  cmps(c,0,(int32_t)c->r[0],0); // 801F36AC
  if (!crb(c,2)) { goto L_801F36BC; } // 801F36B0
  c->r[3]=0u+0xFFFFFFFFu; // 801F36B4
  return; // 801F36B8
L_801F36BC:;
  cmpu(c,0,c->r[0],0x00000042u); // 801F36BC
  if (!crb(c,2)) { goto L_801F36D4; } // 801F36C0
  c->r[0]=0u+0x00000001u; // 801F36C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F36C8
  c->r[3]=0u+0x00000003u; // 801F36CC
  return; // 801F36D0
L_801F36D4:;
  cmpu(c,0,c->r[0],0x0000004Au); // 801F36D4
  if (!crb(c,2)) { goto L_801F36EC; } // 801F36D8
  c->r[0]=0u+0x00000002u; // 801F36DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F36E0
  c->r[3]=0u+0x00000003u; // 801F36E4
  return; // 801F36E8
L_801F36EC:;
  cmpu(c,0,c->r[0],0x00000049u); // 801F36EC
  if (!crb(c,2)) { goto L_801F3704; } // 801F36F0
  c->r[0]=0u+0x00000003u; // 801F36F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F36F8
  c->r[3]=0u+0x00000003u; // 801F36FC
  return; // 801F3700
L_801F3704:;
  c->r[0]=0u+0x00000000u; // 801F3704
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F3708
  c->r[3]=0u+0x00000001u; // 801F370C
  return; // 801F3710
L_801F3714:;
  c->r[0]=0u+0x00000000u; // 801F3714
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F3718
  c->r[3]=0u+0x00000001u; // 801F371C
  return; // 801F3720
L_801F3724:;
  c->r[3]=0u+0x00000000u; // 801F3724
  return; // 801F3728
}

// fn_801F372C
void f_801F372C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],4); // 801F372C
  if (crb(c,2)) { goto L_801F381C; } // 801F3730
  if (!crb(c,0)) { goto L_801F3748; } // 801F3734
  cmps(c,0,(int32_t)c->r[5],1); // 801F3738
  if (crb(c,2)) { goto L_801F3754; } // 801F373C
  if (!crb(c,0)) { goto L_801F37B4; } // 801F3740
  goto L_801F381C; // 801F3744
L_801F3748:;
  cmps(c,0,(int32_t)c->r[5],6); // 801F3748
  if (!crb(c,0)) { goto L_801F381C; } // 801F374C
  goto L_801F37BC; // 801F3750
L_801F3754:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 801F3754
  if (crb(c,2)) { goto L_801F379C; } // 801F3758
  cmps(c,0,(int32_t)c->r[4],4); // 801F375C
  if (!crb(c,0)) { goto L_801F3774; } // 801F3760
  cmps(c,0,(int32_t)c->r[7],0); // 801F3764
  if (crb(c,2)) { goto L_801F3774; } // 801F3768
  c->r[3]=0u+0xFFFFFFFFu; // 801F376C
  return; // 801F3770
L_801F3774:;
  cmps(c,0,(int32_t)c->r[7],0); // 801F3774
  if (crb(c,2)) { goto L_801F3794; } // 801F3778
  c->r[5]=0u+0x0000001Bu; // 801F377C
  c->r[4]=0u+0x00000028u; // 801F3780
  c->r[0]=0u+0x00000042u; // 801F3784
  W8(c->r[3]+0x00000000u,c->r[5]); // 801F3788
  W8(c->r[3]+0x00000001u,c->r[4]); // 801F378C
  W8(c->r[3]+0x00000002u,c->r[0]); // 801F3790
L_801F3794:;
  c->r[3]=0u+0x00000003u; // 801F3794
  return; // 801F3798
L_801F379C:;
  cmps(c,0,(int32_t)c->r[4],1); // 801F379C
  if (!crb(c,0)) { goto L_801F3824; } // 801F37A0
  cmps(c,0,(int32_t)c->r[7],0); // 801F37A4
  if (crb(c,2)) { goto L_801F3824; } // 801F37A8
  c->r[3]=0u+0xFFFFFFFFu; // 801F37AC
  return; // 801F37B0
L_801F37B4:;
  c->r[3]=0u+0x00000000u; // 801F37B4
  return; // 801F37B8
L_801F37BC:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 801F37BC
  if (crb(c,2)) { goto L_801F3804; } // 801F37C0
  cmps(c,0,(int32_t)c->r[4],8); // 801F37C4
  if (!crb(c,0)) { goto L_801F37DC; } // 801F37C8
  cmps(c,0,(int32_t)c->r[7],0); // 801F37CC
  if (crb(c,2)) { goto L_801F37DC; } // 801F37D0
  c->r[3]=0u+0xFFFFFFFFu; // 801F37D4
  return; // 801F37D8
L_801F37DC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801F37DC
  if (crb(c,2)) { goto L_801F37FC; } // 801F37E0
  c->r[5]=0u+0x0000001Bu; // 801F37E4
  c->r[4]=0u+0x00000024u; // 801F37E8
  c->r[0]=0u+0x00000042u; // 801F37EC
  W8(c->r[3]+0x00000000u,c->r[5]); // 801F37F0
  W8(c->r[3]+0x00000001u,c->r[4]); // 801F37F4
  W8(c->r[3]+0x00000002u,c->r[0]); // 801F37F8
L_801F37FC:;
  c->r[3]=0u+0x00000003u; // 801F37FC
  return; // 801F3800
L_801F3804:;
  cmps(c,0,(int32_t)c->r[4],5); // 801F3804
  if (!crb(c,0)) { goto L_801F3824; } // 801F3808
  cmps(c,0,(int32_t)c->r[7],0); // 801F380C
  if (crb(c,2)) { goto L_801F3824; } // 801F3810
  c->r[3]=0u+0xFFFFFFFFu; // 801F3814
  return; // 801F3818
L_801F381C:;
  c->r[3]=0u+0x00000000u; // 801F381C
  return; // 801F3820
L_801F3824:;
  c->r[3]=0u+0x00000000u; // 801F3824
  return; // 801F3828
}

// fn_801F382C
void f_801F382C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F382C
  c->r[0]=c->lr; // 801F3830
  c->r[4]=R16(c->r[4]+0x00000000u); // 801F3834
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F3838
  cmpu(c,1,c->r[4],0x00000080u); // 801F383C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F3840
  c->r[31]=c->r[3]|c->r[3]; // 801F3844
  if (crb(c,4)) { goto L_801F3854; } // 801F3848
  cmpu(c,0,c->r[4],0x0000203Eu); // 801F384C
  if (!crb(c,2)) { goto L_801F3864; } // 801F3850
L_801F3854:;
  c->r[0]=0u+0x00000001u; // 801F3854
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F3858
  c->r[3]=0u+0x00000000u; // 801F385C
  goto L_801F38EC; // 801F3860
L_801F3864:;
  if (crb(c,6)) { goto L_801F3878; } // 801F3864
  cmpu(c,0,c->r[4],0x0000E000u); // 801F3868
  if (crb(c,0)) { goto L_801F3888; } // 801F386C
  cmpu(c,0,c->r[4],0x0000F900u); // 801F3870
  if (!crb(c,0)) { goto L_801F3888; } // 801F3874
L_801F3878:;
  c->r[0]=0u+0x00000000u; // 801F3878
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F387C
  c->r[3]=0u+0xFFFFFFFFu; // 801F3880
  goto L_801F38EC; // 801F3884
L_801F3888:;
  cmpu(c,0,c->r[4],0x00000100u); // 801F3888
  if (!crb(c,0)) { goto L_801F38E0; } // 801F388C
  c->r[3]=c->r[1]+0x00000008u; // 801F3890
  c->lr=0x801F3898u; f_801F34A8(c); // 801F3894
  c->r[0]=R8(c->r[1]+0x00000008u); // 801F3898
  cmps(c,0,(int32_t)c->r[0],0); // 801F389C
  if (!crb(c,2)) { goto L_801F38B4; } // 801F38A0
  c->r[0]=0u+0x00000000u; // 801F38A4
  c->r[3]=0u+0xFFFFFFFFu; // 801F38A8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F38AC
  goto L_801F38EC; // 801F38B0
L_801F38B4:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801F38B4
  cmps(c,0,(int32_t)c->r[0],0); // 801F38B8
  if (!crb(c,2)) { goto L_801F38D0; } // 801F38BC
  c->r[0]=0u+0x00000001u; // 801F38C0
  c->r[3]=0u+0x00000000u; // 801F38C4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F38C8
  goto L_801F38EC; // 801F38CC
L_801F38D0:;
  c->r[0]=0u+0x00000005u; // 801F38D0
  c->r[3]=0u+0x00000000u; // 801F38D4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F38D8
  goto L_801F38EC; // 801F38DC
L_801F38E0:;
  c->r[0]=0u+0x00000005u; // 801F38E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F38E4
  c->r[3]=0u+0x00000000u; // 801F38E8
L_801F38EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F38EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F38F0
  c->lr=c->r[0]; // 801F38F4
  c->r[1]=c->r[1]+0x00000020u; // 801F38F8
  return; // 801F38FC
}

// fn_801F3900
void f_801F3900(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x000000FCu); // 801F3900
  if (!crb(c,2)) { goto L_801F3920; } // 801F3904
  cmpu(c,0,c->r[5],0x0000004Bu); // 801F3908
  if (!crb(c,1)) { goto L_801F3920; } // 801F390C
  c->r[0]=0u+0x00000000u; // 801F3910
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F3914
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3918
  return; // 801F391C
L_801F3920:;
  cmpu(c,0,c->r[4],0x000000FAu); // 801F3920
  if (!crb(c,2)) { goto L_801F3A18; } // 801F3924
  cmpu(c,0,c->r[5],0x00000049u); // 801F3928
  if (crb(c,1)) { goto L_801F3944; } // 801F392C
  c->r[0]=c->r[5]+0x000000AFu; // 801F3930
  c->r[4]=0u+0x000000EEu; // 801F3934
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F3938
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F393C
  return; // 801F3940
L_801F3944:;
  cmpu(c,0,c->r[5],0x00000053u); // 801F3944
  if (crb(c,1)) { goto L_801F3960; } // 801F3948
  c->r[0]=c->r[5]+0x0000000Au; // 801F394C
  c->r[4]=0u+0x00000087u; // 801F3950
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F3954
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3958
  return; // 801F395C
L_801F3960:;
  cmpu(c,0,c->r[5],0x0000005Bu); // 801F3960
  if (crb(c,1)) { goto L_801F3A18; } // 801F3964
  c->r[0]=c->r[5]+0xFFFFFFACu; // 801F3968
  cmps(c,0,(int32_t)c->r[0],5); // 801F396C
  if (crb(c,2)) { goto L_801F39DC; } // 801F3970
  if (!crb(c,0)) { goto L_801F3990; } // 801F3974
  cmps(c,0,(int32_t)c->r[0],0); // 801F3978
  if (crb(c,2)) { goto L_801F39A0; } // 801F397C
  if (crb(c,0)) { goto L_801F3A18; } // 801F3980
  cmps(c,0,(int32_t)c->r[0],4); // 801F3984
  if (!crb(c,0)) { goto L_801F39C8; } // 801F3988
  goto L_801F39B4; // 801F398C
L_801F3990:;
  cmps(c,0,(int32_t)c->r[0],7); // 801F3990
  if (crb(c,2)) { goto L_801F3A04; } // 801F3994
  if (!crb(c,0)) { goto L_801F3A18; } // 801F3998
  goto L_801F39F0; // 801F399C
L_801F39A0:;
  c->r[4]=0u+0x00000081u; // 801F39A0
  c->r[0]=0u+0x000000CAu; // 801F39A4
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F39A8
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F39AC
  return; // 801F39B0
L_801F39B4:;
  c->r[0]=c->r[5]+0x000000A5u; // 801F39B4
  c->r[4]=0u+0x000000EEu; // 801F39B8
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F39BC
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F39C0
  return; // 801F39C4
L_801F39C8:;
  c->r[4]=0u+0x00000087u; // 801F39C8
  c->r[0]=0u+0x0000008Au; // 801F39CC
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F39D0
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F39D4
  return; // 801F39D8
L_801F39DC:;
  c->r[4]=0u+0x00000087u; // 801F39DC
  c->r[0]=0u+0x00000082u; // 801F39E0
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F39E4
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F39E8
  return; // 801F39EC
L_801F39F0:;
  c->r[4]=0u+0x00000087u; // 801F39F0
  c->r[0]=0u+0x00000084u; // 801F39F4
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F39F8
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F39FC
  return; // 801F3A00
L_801F3A04:;
  c->r[4]=0u+0x00000081u; // 801F3A04
  c->r[0]=0u+0x000000E6u; // 801F3A08
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F3A0C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3A10
  return; // 801F3A14
L_801F3A18:;
  cmpu(c,0,c->r[5],0x0000005Cu); // 801F3A18
  c->r[0]=c->r[4]+0xFFFFFFF3u; // 801F3A1C
  if (!crb(c,0)) { goto L_801F3A28; } // 801F3A20
  c->r[0]=c->r[4]+0xFFFFFFF2u; // 801F3A24
L_801F3A28:;
  cmpu(c,0,c->r[5],0x0000007Fu); // 801F3A28
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F3A2C
  if (!crb(c,0)) { goto L_801F3A4C; } // 801F3A30
  cmpu(c,0,c->r[5],0x0000005Cu); // 801F3A34
  c->r[0]=c->r[5]+0xFFFFFFE4u; // 801F3A38
  if (!crb(c,0)) { goto L_801F3A44; } // 801F3A3C
  c->r[0]=c->r[5]+0x000000A1u; // 801F3A40
L_801F3A44:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3A44
  return; // 801F3A48
L_801F3A4C:;
  cmpu(c,0,c->r[5],0x0000009Cu); // 801F3A4C
  c->r[0]=c->r[5]+0xFFFFFFE4u; // 801F3A50
  if (!crb(c,0)) { goto L_801F3A5C; } // 801F3A54
  c->r[0]=c->r[5]+0xFFFFFFE3u; // 801F3A58
L_801F3A5C:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F3A5C
  return; // 801F3A60
}

// fn_801F3A64
void f_801F3A64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3A64
  c->r[0]=c->lr; // 801F3A68
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F3A6C
  c->r[11]=c->r[1]+0x00000050u; // 801F3A70
  c->lr=0x801F3A78u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F3A74
  c->r[24]=c->r[5]|c->r[5]; // 801F3A78
  c->r[10]=0u+0xFFFFFFFFu; // 801F3A7C
  c->r[9]=0u+0x00000001u; // 801F3A80
  c->r[5]=0u-c->r[3]; // 801F3A84
  c->r[0]=0u-c->r[24]; // 801F3A88
  c->r[25]=c->r[6]|c->r[6]; // 801F3A8C
  c->r[27]=c->r[8]|c->r[8]; // 801F3A90
  W32(c->r[1]+0x00000014u,c->r[10]); // 801F3A94
  c->r[5]=c->r[5]|c->r[3]; // 801F3A98
  c->r[22]=c->r[3]|c->r[3]; // 801F3A9C
  W32(c->r[1]+0x00000010u,c->r[10]); // 801F3AA0
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F3AA4
  c->r[0]=c->r[0]|c->r[24]; // 801F3AA8
  c->r[26]=c->r[7]|c->r[7]; // 801F3AAC
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F3AB0
  c->r[23]=c->r[4]|c->r[4]; // 801F3AB4
  c->r[8]=c->r[25]|c->r[25]; // 801F3AB8
  c->r[5]=c->r[1]+0x00000010u; // 801F3ABC
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F3AC0
  c->r[6]=c->r[1]+0x0000000Cu; // 801F3AC4
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F3AC8
  c->r[9]=c->r[1]+0x00000014u; // 801F3ACC
  c->r[10]=c->r[1]+0x00000008u; // 801F3AD0
  c->r[31]=0u+0x00000000u; // 801F3AD4
  c->r[30]=0u+0x00000000u; // 801F3AD8
  c->lr=0x801F3AE0u; f_801F0A30(c); // 801F3ADC
  cmps(c,0,(int32_t)c->r[3],0); // 801F3AE0
  c->r[29]=c->r[3]|c->r[3]; // 801F3AE4
  if (crb(c,2)) { goto L_801F3C04; } // 801F3AE8
  goto L_801F3C44; // 801F3AEC
  goto L_801F3C04; // 801F3AF0
L_801F3AF4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F3AF4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F3AF8
  if (crb(c,0)) { goto L_801F3B14; } // 801F3AFC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3B00
  cmps(c,0,(int32_t)c->r[0],0); // 801F3B04
  if (crb(c,2)) { goto L_801F3B14; } // 801F3B08
  c->r[29]=0u+0xFFFFFFFFu; // 801F3B0C
  goto L_801F3C28; // 801F3B10
L_801F3B14:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F3B14
  if (!crb(c,1)) { goto L_801F3BC0; } // 801F3B18
  c->r[0]=c->r[3]-c->r[31]; // 801F3B1C
  c->r[3]=c->r[28]|c->r[28]; // 801F3B20
  cmps(c,0,(int32_t)c->r[0],1); // 801F3B24
  c->r[4]=0u+0x00000000u; // 801F3B28
  if (crb(c,1)) { goto L_801F3B3C; } // 801F3B2C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F3B30
  cmps(c,0,(int32_t)c->r[0],0); // 801F3B34
  if (!crb(c,2)) { goto L_801F3B40; } // 801F3B38
L_801F3B3C:;
  c->r[4]=0u+0x00000001u; // 801F3B3C
L_801F3B40:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F3B40
  if (crb(c,2)) { goto L_801F3B50; } // 801F3B44
  c->r[4]=R8(c->r[24]+0x00000001u); // 801F3B48
  goto L_801F3B54; // 801F3B4C
L_801F3B50:;
  c->r[4]=0u+0x00000000u; // 801F3B50
L_801F3B54:;
  c->lr=0x801F3B58u; f_801F0B28(c); // 801F3B54
  cmps(c,0,(int32_t)c->r[3],0); // 801F3B58
  c->r[21]=c->r[3]|c->r[3]; // 801F3B5C
  if (!crb(c,1)) { goto L_801F3BC0; } // 801F3B60
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F3B64
  c->r[3]=c->r[22]|c->r[22]; // 801F3B68
  c->r[5]=c->r[26]|c->r[26]; // 801F3B6C
  c->r[4]=0u+0x00000002u; // 801F3B70
  c->lr=0x801F3B78u; f_801F0B5C(c); // 801F3B74
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F3B78
  c->r[0]=c->r[0]-c->r[30]; // 801F3B7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F3B80
  if (!crb(c,0)) { goto L_801F3B9C; } // 801F3B84
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3B88
  cmps(c,0,(int32_t)c->r[0],0); // 801F3B8C
  if (crb(c,2)) { goto L_801F3B9C; } // 801F3B90
  c->r[29]=0u+0xFFFFFFFFu; // 801F3B94
  goto L_801F3C28; // 801F3B98
L_801F3B9C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3B9C
  c->r[24]=c->r[24]+c->r[21]; // 801F3BA0
  c->r[31]=c->r[31]+c->r[21]; // 801F3BA4
  c->r[30]=c->r[30]+c->r[3]; // 801F3BA8
  cmps(c,0,(int32_t)c->r[0],0); // 801F3BAC
  if (crb(c,2)) { goto L_801F3C04; } // 801F3BB0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F3BB4
  c->r[22]=c->r[22]+c->r[0]; // 801F3BB8
  goto L_801F3C04; // 801F3BBC
L_801F3BC0:;
  cmpu(c,0,c->r[28],0x00000080u); // 801F3BC0
  if (crb(c,0)) { goto L_801F3BD4; } // 801F3BC4
  c->r[0]=rotl(c->r[28],1)&0x000001FEu; // 801F3BC8
  c->r[3]=c->r[27]+c->r[0]; // 801F3BCC
  c->r[28]=R16(c->r[3]+0xFFFFFF00u); // 801F3BD0
L_801F3BD4:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801F3BD4
  if (!crb(c,2)) { goto L_801F3BE4; } // 801F3BD8
  c->r[29]=0u+0xFFFFFFFEu; // 801F3BDC
  goto L_801F3C28; // 801F3BE0
L_801F3BE4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3BE4
  cmps(c,0,(int32_t)c->r[0],0); // 801F3BE8
  if (crb(c,2)) { goto L_801F3BF8; } // 801F3BEC
  W16(c->r[22]+0x00000000u,c->r[28]); // 801F3BF0
  c->r[22]=c->r[22]+0x00000002u; // 801F3BF4
L_801F3BF8:;
  c->r[30]=c->r[30]+0x00000001u; // 801F3BF8
  c->r[24]=c->r[24]+0x00000001u; // 801F3BFC
  c->r[31]=c->r[31]+0x00000001u; // 801F3C00
L_801F3C04:;
  c->r[28]=R8(c->r[24]+0x00000000u); // 801F3C04
  cmps(c,0,(int32_t)c->r[28],0); // 801F3C08
  if (crb(c,2)) { goto L_801F3C28; } // 801F3C0C
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F3C10
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801F3C14
  if (crb(c,0)) { IRQCHK(c); goto L_801F3AF4; } // 801F3C18
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F3C1C
  cmps(c,0,(int32_t)c->r[0],0); // 801F3C20
  if (crb(c,2)) { IRQCHK(c); goto L_801F3AF4; } // 801F3C24
L_801F3C28:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F3C28
  if (crb(c,2)) { goto L_801F3C34; } // 801F3C2C
  W32(c->r[25]+0x00000000u,c->r[31]); // 801F3C30
L_801F3C34:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F3C34
  if (crb(c,2)) { goto L_801F3C40; } // 801F3C38
  W32(c->r[23]+0x00000000u,c->r[30]); // 801F3C3C
L_801F3C40:;
  c->r[3]=c->r[29]|c->r[29]; // 801F3C40
L_801F3C44:;
  c->r[11]=c->r[1]+0x00000050u; // 801F3C44
  c->lr=0x801F3C4Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F3C48
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F3C4C
  c->lr=c->r[0]; // 801F3C50
  c->r[1]=c->r[1]+0x00000050u; // 801F3C54
  return; // 801F3C58
}

// fn_801F3C5C
void f_801F3C5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3C5C
  c->r[0]=c->lr; // 801F3C60
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F3C64
  c->r[11]=c->r[1]+0x00000050u; // 801F3C68
  c->lr=0x801F3C70u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F3C6C
  c->r[24]=c->r[5]|c->r[5]; // 801F3C70
  c->r[10]=0u+0xFFFFFFFFu; // 801F3C74
  c->r[9]=0u+0x00000001u; // 801F3C78
  c->r[5]=0u-c->r[3]; // 801F3C7C
  c->r[0]=0u-c->r[24]; // 801F3C80
  c->r[25]=c->r[6]|c->r[6]; // 801F3C84
  c->r[27]=c->r[8]|c->r[8]; // 801F3C88
  W32(c->r[1]+0x00000014u,c->r[10]); // 801F3C8C
  c->r[5]=c->r[5]|c->r[3]; // 801F3C90
  c->r[22]=c->r[3]|c->r[3]; // 801F3C94
  W32(c->r[1]+0x00000010u,c->r[10]); // 801F3C98
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F3C9C
  c->r[0]=c->r[0]|c->r[24]; // 801F3CA0
  c->r[26]=c->r[7]|c->r[7]; // 801F3CA4
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F3CA8
  c->r[23]=c->r[4]|c->r[4]; // 801F3CAC
  c->r[8]=c->r[25]|c->r[25]; // 801F3CB0
  c->r[5]=c->r[1]+0x00000010u; // 801F3CB4
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F3CB8
  c->r[6]=c->r[1]+0x0000000Cu; // 801F3CBC
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F3CC0
  c->r[9]=c->r[1]+0x00000014u; // 801F3CC4
  c->r[10]=c->r[1]+0x00000008u; // 801F3CC8
  c->r[30]=0u+0x00000000u; // 801F3CCC
  c->r[29]=0u+0x00000000u; // 801F3CD0
  c->lr=0x801F3CD8u; f_801F0A30(c); // 801F3CD4
  cmps(c,0,(int32_t)c->r[3],0); // 801F3CD8
  c->r[28]=c->r[3]|c->r[3]; // 801F3CDC
  if (crb(c,2)) { goto L_801F3CE8; } // 801F3CE0
  goto L_801F3EDC; // 801F3CE4
L_801F3CE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F3CE8
  cmps(c,0,(int32_t)c->r[0],0); // 801F3CEC
  if (crb(c,1)) { goto L_801F3D00; } // 801F3CF0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F3CF4
  cmps(c,0,(int32_t)c->r[0],0); // 801F3CF8
  if (!crb(c,2)) { goto L_801F3E9C; } // 801F3CFC
L_801F3D00:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 801F3D00
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F3D04
  if (!crb(c,2)) { goto L_801F3D18; } // 801F3D08
  c->r[30]=0u+0x00000001u; // 801F3D0C
  c->r[24]=c->r[24]+0x00000002u; // 801F3D10
  goto L_801F3E9C; // 801F3D14
L_801F3D18:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F3D18
  if (!crb(c,2)) { goto L_801F3E9C; } // 801F3D1C
  cmps(c,0,(int32_t)c->r[23],0); // 801F3D20
  if (crb(c,2)) { goto L_801F3D30; } // 801F3D24
  c->r[0]=0u+0x00000000u; // 801F3D28
  W32(c->r[23]+0x00000000u,c->r[0]); // 801F3D2C
L_801F3D30:;
  c->r[0]=0u+0x00000000u; // 801F3D30
  c->r[3]=0u+0xFFFFFFFCu; // 801F3D34
  W32(c->r[25]+0x00000000u,c->r[0]); // 801F3D38
  goto L_801F3EDC; // 801F3D3C
  goto L_801F3E9C; // 801F3D40
L_801F3D44:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F3D44
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F3D48
  if (crb(c,0)) { goto L_801F3D64; } // 801F3D4C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3D50
  cmps(c,0,(int32_t)c->r[0],0); // 801F3D54
  if (crb(c,2)) { goto L_801F3D64; } // 801F3D58
  c->r[28]=0u+0xFFFFFFFFu; // 801F3D5C
  goto L_801F3EC0; // 801F3D60
L_801F3D64:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F3D64
  if (!crb(c,1)) { goto L_801F3E10; } // 801F3D68
  c->r[0]=c->r[3]-c->r[30]; // 801F3D6C
  c->r[3]=c->r[31]|c->r[31]; // 801F3D70
  cmps(c,0,(int32_t)c->r[0],1); // 801F3D74
  c->r[4]=0u+0x00000000u; // 801F3D78
  if (crb(c,1)) { goto L_801F3D8C; } // 801F3D7C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F3D80
  cmps(c,0,(int32_t)c->r[0],0); // 801F3D84
  if (!crb(c,2)) { goto L_801F3D90; } // 801F3D88
L_801F3D8C:;
  c->r[4]=0u+0x00000001u; // 801F3D8C
L_801F3D90:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F3D90
  if (crb(c,2)) { goto L_801F3DA0; } // 801F3D94
  c->r[4]=R16(c->r[24]+0x00000002u); // 801F3D98
  goto L_801F3DA4; // 801F3D9C
L_801F3DA0:;
  c->r[4]=0u+0x00000000u; // 801F3DA0
L_801F3DA4:;
  c->lr=0x801F3DA8u; f_801F0B28(c); // 801F3DA4
  cmps(c,0,(int32_t)c->r[3],0); // 801F3DA8
  c->r[21]=c->r[3]|c->r[3]; // 801F3DAC
  if (!crb(c,1)) { goto L_801F3E10; } // 801F3DB0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F3DB4
  c->r[3]=c->r[22]|c->r[22]; // 801F3DB8
  c->r[5]=c->r[26]|c->r[26]; // 801F3DBC
  c->r[4]=0u+0x00000001u; // 801F3DC0
  c->lr=0x801F3DC8u; f_801F0B5C(c); // 801F3DC4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F3DC8
  c->r[0]=c->r[0]-c->r[29]; // 801F3DCC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F3DD0
  if (!crb(c,0)) { goto L_801F3DEC; } // 801F3DD4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3DD8
  cmps(c,0,(int32_t)c->r[0],0); // 801F3DDC
  if (crb(c,2)) { goto L_801F3DEC; } // 801F3DE0
  c->r[28]=0u+0xFFFFFFFFu; // 801F3DE4
  goto L_801F3EC0; // 801F3DE8
L_801F3DEC:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3DEC
  c->r[4]=rotl(c->r[21],1)&0xFFFFFFFEu; // 801F3DF0
  c->r[24]=c->r[24]+c->r[4]; // 801F3DF4
  c->r[30]=c->r[30]+c->r[21]; // 801F3DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801F3DFC
  c->r[29]=c->r[29]+c->r[3]; // 801F3E00
  if (crb(c,2)) { goto L_801F3E9C; } // 801F3E04
  c->r[22]=c->r[22]+c->r[3]; // 801F3E08
  goto L_801F3E9C; // 801F3E0C
L_801F3E10:;
  cmpu(c,0,c->r[31],0x00000080u); // 801F3E10
  if (!crb(c,0)) { goto L_801F3E20; } // 801F3E14
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801F3E18
  goto L_801F3E6C; // 801F3E1C
L_801F3E20:;
  c->r[0]=rotl(c->r[31],25)&0xFE000000u; // 801F3E20
  c->r[3]=rotl(c->r[31],1)&0x00000001u; // 801F3E24
  c->r[0]=c->r[0]-c->r[3]; // 801F3E28
  c->r[0]=rotl(c->r[0],7)&0xFFFFFFFFu; // 801F3E2C
  c->r[0]=c->r[0]+c->r[3]; // 801F3E30
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801F3E34
  goto L_801F3E54; // 801F3E38
L_801F3E3C:;
  c->r[0]=R8(c->r[4]+0x00000003u); // 801F3E3C
  cmpu(c,0,c->r[3],c->r[0]); // 801F3E40
  if (!crb(c,2)) { goto L_801F3E50; } // 801F3E44
  c->r[3]=0u+0x00000000u; // 801F3E48
  goto L_801F3E6C; // 801F3E4C
L_801F3E50:;
  c->r[3]=c->r[0]|c->r[0]; // 801F3E50
L_801F3E54:;
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801F3E54
  c->r[4]=c->r[27]+c->r[0]; // 801F3E58
  c->r[0]=R16(c->r[27]+c->r[0]); // 801F3E5C
  cmpu(c,0,c->r[31],c->r[0]); // 801F3E60
  if (!crb(c,2)) { IRQCHK(c); goto L_801F3E3C; } // 801F3E64
  c->r[3]=R8(c->r[4]+0x00000002u); // 801F3E68
L_801F3E6C:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801F3E6C
  if (!crb(c,2)) { goto L_801F3E7C; } // 801F3E70
  c->r[28]=0u+0xFFFFFFFEu; // 801F3E74
  goto L_801F3EC0; // 801F3E78
L_801F3E7C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F3E7C
  cmps(c,0,(int32_t)c->r[0],0); // 801F3E80
  if (crb(c,2)) { goto L_801F3E90; } // 801F3E84
  W8(c->r[22]+0x00000000u,c->r[3]); // 801F3E88
  c->r[22]=c->r[22]+0x00000001u; // 801F3E8C
L_801F3E90:;
  c->r[29]=c->r[29]+0x00000001u; // 801F3E90
  c->r[24]=c->r[24]+0x00000002u; // 801F3E94
  c->r[30]=c->r[30]+0x00000001u; // 801F3E98
L_801F3E9C:;
  c->r[31]=R16(c->r[24]+0x00000000u); // 801F3E9C
  cmps(c,0,(int32_t)c->r[31],0); // 801F3EA0
  if (crb(c,2)) { goto L_801F3EC0; } // 801F3EA4
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F3EA8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801F3EAC
  if (crb(c,0)) { IRQCHK(c); goto L_801F3D44; } // 801F3EB0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F3EB4
  cmps(c,0,(int32_t)c->r[0],0); // 801F3EB8
  if (crb(c,2)) { IRQCHK(c); goto L_801F3D44; } // 801F3EBC
L_801F3EC0:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F3EC0
  if (crb(c,2)) { goto L_801F3ECC; } // 801F3EC4
  W32(c->r[25]+0x00000000u,c->r[30]); // 801F3EC8
L_801F3ECC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F3ECC
  if (crb(c,2)) { goto L_801F3ED8; } // 801F3ED0
  W32(c->r[23]+0x00000000u,c->r[29]); // 801F3ED4
L_801F3ED8:;
  c->r[3]=c->r[28]|c->r[28]; // 801F3ED8
L_801F3EDC:;
  c->r[11]=c->r[1]+0x00000050u; // 801F3EDC
  c->lr=0x801F3EE4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F3EE0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F3EE4
  c->lr=c->r[0]; // 801F3EE8
  c->r[1]=c->r[1]+0x00000050u; // 801F3EEC
  return; // 801F3EF0
}

// fn_801F3EF4
void f_801F3EF4(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3EF4
  c->r[8]=c->r[8]+0xFFFFB7B0u; // 801F3EF8
  f_801F3A64(c); return; // 801F3EFC
}

// fn_801F3F00
void f_801F3F00(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F00
  c->r[8]=c->r[8]+0xFFFFC4B0u; // 801F3F04
  f_801F3C5C(c); return; // 801F3F08
}

// fn_801F3F0C
void f_801F3F0C(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F0C
  c->r[8]=c->r[8]+0xFFFFB8B0u; // 801F3F10
  f_801F3A64(c); return; // 801F3F14
}

// fn_801F3F18
void f_801F3F18(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F18
  c->r[8]=c->r[8]+0xFFFFC6B0u; // 801F3F1C
  f_801F3C5C(c); return; // 801F3F20
}

// fn_801F3F24
void f_801F3F24(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F24
  c->r[8]=c->r[8]+0xFFFFB9B0u; // 801F3F28
  f_801F3A64(c); return; // 801F3F2C
}

// fn_801F3F30
void f_801F3F30(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F30
  c->r[8]=c->r[8]+0xFFFFC8B0u; // 801F3F34
  f_801F3C5C(c); return; // 801F3F38
}

// fn_801F3F3C
void f_801F3F3C(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F3C
  c->r[8]=c->r[8]+0xFFFFBAB0u; // 801F3F40
  f_801F3A64(c); return; // 801F3F44
}

// fn_801F3F48
void f_801F3F48(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F48
  c->r[8]=c->r[8]+0xFFFFCAB0u; // 801F3F4C
  f_801F3C5C(c); return; // 801F3F50
}

// fn_801F3F54
void f_801F3F54(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F54
  c->r[8]=c->r[8]+0xFFFFBBB0u; // 801F3F58
  f_801F3A64(c); return; // 801F3F5C
}

// fn_801F3F60
void f_801F3F60(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F60
  c->r[8]=c->r[8]+0xFFFFCCB0u; // 801F3F64
  f_801F3C5C(c); return; // 801F3F68
}

// fn_801F3F6C
void f_801F3F6C(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F6C
  c->r[8]=c->r[8]+0xFFFFBCB0u; // 801F3F70
  f_801F3A64(c); return; // 801F3F74
}

// fn_801F3F78
void f_801F3F78(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F78
  c->r[8]=c->r[8]+0xFFFFCEB0u; // 801F3F7C
  f_801F3C5C(c); return; // 801F3F80
}

// fn_801F3F84
void f_801F3F84(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F84
  c->r[8]=c->r[8]+0xFFFFD0B0u; // 801F3F88
  f_801F3C5C(c); return; // 801F3F8C
}

// fn_801F3F90
void f_801F3F90(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F90
  c->r[8]=c->r[8]+0xFFFFBDB0u; // 801F3F94
  f_801F3A64(c); return; // 801F3F98
}

// fn_801F3F9C
void f_801F3F9C(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3F9C
  c->r[8]=c->r[8]+0xFFFFBEB0u; // 801F3FA0
  f_801F3A64(c); return; // 801F3FA4
}

// fn_801F3FA8
void f_801F3FA8(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3FA8
  c->r[8]=c->r[8]+0xFFFFBFB0u; // 801F3FAC
  f_801F3A64(c); return; // 801F3FB0
}

// fn_801F3FB4
void f_801F3FB4(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3FB4
  c->r[8]=c->r[8]+0xFFFFC0B0u; // 801F3FB8
  f_801F3A64(c); return; // 801F3FBC
}

// fn_801F3FC0
void f_801F3FC0(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3FC0
  c->r[8]=c->r[8]+0xFFFFC1B0u; // 801F3FC4
  f_801F3A64(c); return; // 801F3FC8
}

// fn_801F3FCC
void f_801F3FCC(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3FCC
  c->r[8]=c->r[8]+0xFFFFC2B0u; // 801F3FD0
  f_801F3A64(c); return; // 801F3FD4
}

// fn_801F3FD8
void f_801F3FD8(Ctx* __restrict c) {
  c->r[8]=0u+0x802F0000u; // 801F3FD8
  c->r[8]=c->r[8]+0xFFFFC3B0u; // 801F3FDC
  f_801F3A64(c); return; // 801F3FE0
}

// fn_801F3FE4
void f_801F3FE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3FE4
  c->r[0]=c->lr; // 801F3FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3FEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F3FF0
  c->r[31]=c->r[3]|c->r[3]; // 801F3FF4
  c->lr=0x801F3FFCu; f_801F09F8(c); // 801F3FF8
  cmps(c,0,(int32_t)c->r[31],0); // 801F3FFC
  if (!crb(c,2)) { goto L_801F400C; } // 801F4000
  c->r[3]=0u+0xFFFFFFFDu; // 801F4004
  goto L_801F4028; // 801F4008
L_801F400C:;
  c->r[0]=0u+0x00000000u; // 801F400C
  c->r[3]=0u+0x00000000u; // 801F4010
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F4014
  W32(c->r[31]+0x00000004u,c->r[0]); // 801F4018
  W32(c->r[31]+0x00000008u,c->r[0]); // 801F401C
  W16(c->r[31]+0x0000000Cu,c->r[0]); // 801F4020
  W16(c->r[31]+0x0000000Eu,c->r[0]); // 801F4024
L_801F4028:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4028
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F402C
  c->lr=c->r[0]; // 801F4030
  c->r[1]=c->r[1]+0x00000010u; // 801F4034
  return; // 801F4038
}

// fn_801F403C
void f_801F403C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F403C
  c->r[0]=c->lr; // 801F4040
  cmps(c,0,(int32_t)c->r[3],0); // 801F4044
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F4048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F404C
  c->r[31]=c->r[3]|c->r[3]; // 801F4050
  if (crb(c,2)) { goto L_801F4060; } // 801F4054
  cmps(c,0,(int32_t)c->r[4],0); // 801F4058
  if (!crb(c,2)) { goto L_801F4068; } // 801F405C
L_801F4060:;
  c->r[3]=0u+0xFFFFFFFDu; // 801F4060
  goto L_801F4144; // 801F4064
L_801F4068:;
  c->r[3]=0u+0x802F0000u; // 801F4068
  c->r[5]=c->r[4]|c->r[4]; // 801F406C
  c->r[3]=c->r[3]+0xFFFFD520u; // 801F4070
  c->r[4]=0u+0x00000081u; // 801F4074
  c->lr=0x801F407Cu; f_801F4690(c); // 801F4078
  cmps(c,0,(int32_t)c->r[3],0); // 801F407C
  W32(c->r[31]+0x00000000u,c->r[3]); // 801F4080
  if (!crb(c,2)) { goto L_801F4090; } // 801F4084
  c->r[3]=0u+0xFFFFFFFBu; // 801F4088
  goto L_801F4144; // 801F408C
L_801F4090:;
  c->r[0]=R32(c->r[13]+0xFFFF95B8u); // 801F4090
  cmps(c,0,(int32_t)c->r[0],0); // 801F4094
  if (!crb(c,2)) { goto L_801F40B0; } // 801F4098
  c->r[0]=c->r[3]+0xFFFFFFF5u; // 801F409C
  cmpu(c,0,c->r[0],0x00000001u); // 801F40A0
  if (crb(c,1)) { goto L_801F40B0; } // 801F40A4
  c->r[3]=0u+0xFFFFFFFAu; // 801F40A8
  goto L_801F4144; // 801F40AC
L_801F40B0:;
  c->r[0]=R32(c->r[13]+0xFFFF95C0u); // 801F40B0
  cmps(c,0,(int32_t)c->r[0],0); // 801F40B4
  if (!crb(c,2)) { goto L_801F40D8; } // 801F40B8
  c->r[0]=R32(c->r[13]+0xFFFF95C4u); // 801F40BC
  cmps(c,0,(int32_t)c->r[0],0); // 801F40C0
  if (!crb(c,2)) { goto L_801F40D8; } // 801F40C4
  cmps(c,0,(int32_t)c->r[3],14); // 801F40C8
  if (!crb(c,2)) { goto L_801F40D8; } // 801F40CC
  c->r[3]=0u+0xFFFFFFFAu; // 801F40D0
  goto L_801F4144; // 801F40D4
L_801F40D8:;
  c->r[0]=R32(c->r[13]+0xFFFF95C8u); // 801F40D8
  cmps(c,0,(int32_t)c->r[0],0); // 801F40DC
  if (!crb(c,2)) { goto L_801F40F4; } // 801F40E0
  cmps(c,0,(int32_t)c->r[3],15); // 801F40E4
  if (!crb(c,2)) { goto L_801F40F4; } // 801F40E8
  c->r[3]=0u+0xFFFFFFFAu; // 801F40EC
  goto L_801F4144; // 801F40F0
L_801F40F4:;
  cmps(c,0,(int32_t)c->r[3],3); // 801F40F4
  if (crb(c,2)) { goto L_801F4104; } // 801F40F8
  cmps(c,0,(int32_t)c->r[3],17); // 801F40FC
  if (!crb(c,2)) { goto L_801F4110; } // 801F4100
L_801F4104:;
  c->r[0]=0u+0x00000000u; // 801F4104
  W32(c->r[31]+0x00000008u,c->r[0]); // 801F4108
  goto L_801F4140; // 801F410C
L_801F4110:;
  cmps(c,0,(int32_t)c->r[3],18); // 801F4110
  if (!crb(c,2)) { goto L_801F4124; } // 801F4114
  c->r[0]=0u+0x00000001u; // 801F4118
  W32(c->r[31]+0x00000008u,c->r[0]); // 801F411C
  goto L_801F4140; // 801F4120
L_801F4124:;
  cmps(c,0,(int32_t)c->r[3],11); // 801F4124
  if (!crb(c,2)) { goto L_801F4138; } // 801F4128
  c->r[0]=0u+0x00000001u; // 801F412C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801F4130
  goto L_801F4140; // 801F4134
L_801F4138:;
  c->r[0]=0u+0x00000000u; // 801F4138
  W32(c->r[31]+0x00000008u,c->r[0]); // 801F413C
L_801F4140:;
  c->r[3]=0u+0x00000000u; // 801F4140
L_801F4144:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F4148
  c->lr=c->r[0]; // 801F414C
  c->r[1]=c->r[1]+0x00000010u; // 801F4150
  return; // 801F4154
}

// fn_801F4158
void f_801F4158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4158
  c->r[0]=c->lr; // 801F415C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F4160
  c->r[11]=c->r[1]+0x00000040u; // 801F4164
  c->lr=0x801F416Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F4168
  cmps(c,0,(int32_t)c->r[3],0); // 801F416C
  c->r[22]=c->r[3]|c->r[3]; // 801F4170
  c->r[23]=c->r[4]|c->r[4]; // 801F4174
  c->r[24]=c->r[5]|c->r[5]; // 801F4178
  c->r[25]=c->r[6]|c->r[6]; // 801F417C
  c->r[26]=c->r[7]|c->r[7]; // 801F4180
  if (crb(c,2)) { goto L_801F419C; } // 801F4184
  c->r[0]=R32(c->r[3]+0x00000004u); // 801F4188
  cmps(c,0,(int32_t)c->r[0],0); // 801F418C
  if (crb(c,0)) { goto L_801F419C; } // 801F4190
  cmps(c,0,(int32_t)c->r[0],3); // 801F4194
  if (!crb(c,1)) { goto L_801F41A4; } // 801F4198
L_801F419C:;
  c->r[3]=0u+0xFFFFFFFDu; // 801F419C
  goto L_801F43D0; // 801F41A0
L_801F41A4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F41A4
  cmps(c,0,(int32_t)c->r[0],0); // 801F41A8
  if (!crb(c,1)) { goto L_801F41B8; } // 801F41AC
  cmps(c,0,(int32_t)c->r[0],24); // 801F41B0
  if (crb(c,0)) { goto L_801F41C0; } // 801F41B4
L_801F41B8:;
  c->r[3]=0u+0xFFFFFFFBu; // 801F41B8
  goto L_801F43D0; // 801F41BC
L_801F41C0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F41C0
  if (crb(c,2)) { goto L_801F41D0; } // 801F41C4
  cmps(c,0,(int32_t)c->r[7],0); // 801F41C8
  if (!crb(c,2)) { goto L_801F41D8; } // 801F41CC
L_801F41D0:;
  c->r[3]=0u+0xFFFFFFFDu; // 801F41D0
  goto L_801F43D0; // 801F41D4
L_801F41D8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801F41D8
  c->r[3]=0u+0x802F0000u; // 801F41DC
  cmps(c,0,(int32_t)c->r[4],0); // 801F41E0
  c->r[3]=c->r[3]+0xFFFFD2B0u; // 801F41E4
  c->r[30]=R32(c->r[3]+c->r[0]); // 801F41E8
  if (crb(c,2)) { goto L_801F4204; } // 801F41EC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801F41F0
  cmps(c,0,(int32_t)c->r[0],0); // 801F41F4
  if (!crb(c,1)) { goto L_801F4204; } // 801F41F8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801F41FC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4200
L_801F4204:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 801F4204
  cmps(c,0,(int32_t)c->r[0],0); // 801F4208
  if (!crb(c,1)) { goto L_801F4218; } // 801F420C
  c->r[0]=divwu(c->r[0],c->r[30]); // 801F4210
  W32(c->r[7]+0x00000000u,c->r[0]); // 801F4214
L_801F4218:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801F4218
  c->r[3]=c->r[22]|c->r[22]; // 801F421C
  c->r[4]=c->r[23]|c->r[23]; // 801F4220
  c->r[6]=c->r[25]|c->r[25]; // 801F4224
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F4228
  c->r[5]=c->r[1]+0x00000010u; // 801F422C
  c->r[29]=0u+0x00000000u; // 801F4230
  c->r[28]=0u+0x00000000u; // 801F4234
  c->r[0]=R32(c->r[7]+0x00000000u); // 801F4238
  c->r[7]=c->r[1]+0x0000000Cu; // 801F423C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F4240
  c->lr=0x801F4248u; f_801F4AAC(c); // 801F4244
  c->r[31]=c->r[3]|c->r[3]; // 801F4248
  goto L_801F437C; // 801F424C
L_801F4250:;
  cmps(c,0,(int32_t)c->r[31],-2); // 801F4250
  c->r[27]=0u+0x00000000u; // 801F4254
  if (!crb(c,2)) { goto L_801F4268; } // 801F4258
  c->r[0]=R16(c->r[22]+0x0000000Cu); // 801F425C
  cmps(c,0,(int32_t)c->r[0],0); // 801F4260
  if (!crb(c,2)) { goto L_801F427C; } // 801F4264
L_801F4268:;
  cmps(c,0,(int32_t)c->r[31],-4); // 801F4268
  if (!crb(c,2)) { goto L_801F4384; } // 801F426C
  c->r[0]=R16(c->r[22]+0x0000000Eu); // 801F4270
  cmps(c,0,(int32_t)c->r[0],0); // 801F4274
  if (crb(c,2)) { goto L_801F4384; } // 801F4278
L_801F427C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801F427C
  c->r[0]=R32(c->r[24]+0x00000000u); // 801F4280
  c->r[29]=c->r[29]+c->r[3]; // 801F4284
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801F4288
  c->r[0]=c->r[0]-c->r[29]; // 801F428C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F4290
  c->r[28]=c->r[28]+c->r[3]; // 801F4294
  c->r[0]=R32(c->r[26]+0x00000000u); // 801F4298
  cmps(c,0,(int32_t)c->r[0],0); // 801F429C
  if (!crb(c,1)) { goto L_801F42A8; } // 801F42A0
  c->r[0]=c->r[0]-c->r[28]; // 801F42A4
L_801F42A8:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F42A8
  c->r[3]=c->r[22]|c->r[22]; // 801F42AC
  c->r[4]=c->r[25]+c->r[28]; // 801F42B0
  c->r[5]=c->r[1]+0x00000008u; // 801F42B4
  c->lr=0x801F42BCu; f_801F48CC(c); // 801F42B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F42BC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801F42C0
  c->r[0]=divwu(c->r[0],c->r[30]); // 801F42C4
  cmps(c,0,(int32_t)c->r[3],0); // 801F42C8
  c->r[28]=c->r[28]+c->r[0]; // 801F42CC
  if (!crb(c,1)) { goto L_801F42D8; } // 801F42D0
  c->r[3]=c->r[3]-c->r[0]; // 801F42D4
L_801F42D8:;
  cmps(c,0,(int32_t)c->r[31],-4); // 801F42D8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801F42DC
  if (!crb(c,2)) { goto L_801F42F8; } // 801F42E0
  c->r[0]=R16(c->r[22]+0x0000000Eu); // 801F42E4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801F42E8
  if (crb(c,2)) { goto L_801F42F8; } // 801F42EC
  c->r[27]=c->r[0]|c->r[0]; // 801F42F0
  goto L_801F4310; // 801F42F4
L_801F42F8:;
  cmps(c,0,(int32_t)c->r[31],-2); // 801F42F8
  if (!crb(c,2)) { goto L_801F4310; } // 801F42FC
  c->r[0]=R16(c->r[22]+0x0000000Cu); // 801F4300
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801F4304
  if (crb(c,2)) { goto L_801F4310; } // 801F4308
  c->r[27]=c->r[0]|c->r[0]; // 801F430C
L_801F4310:;
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801F4310
  if (crb(c,2)) { goto L_801F4338; } // 801F4314
  cmps(c,0,(int32_t)c->r[23],0); // 801F4318
  if (crb(c,2)) { goto L_801F4334; } // 801F431C
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 801F4320
  W16(c->r[23]+c->r[0],c->r[27]); // 801F4324
  c->r[3]=R32(c->r[1]+0x00000010u); // 801F4328
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801F432C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F4330
L_801F4334:;
  c->r[29]=c->r[29]+0x00000001u; // 801F4334
L_801F4338:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F4338
  if (crb(c,2)) { goto L_801F4360; } // 801F433C
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 801F4340
  c->r[3]=c->r[22]|c->r[22]; // 801F4344
  c->r[4]=c->r[23]+c->r[0]; // 801F4348
  c->r[5]=c->r[1]+0x00000010u; // 801F434C
  c->r[6]=c->r[25]+c->r[28]; // 801F4350
  c->r[7]=c->r[1]+0x0000000Cu; // 801F4354
  c->lr=0x801F435Cu; f_801F4AAC(c); // 801F4358
  goto L_801F4378; // 801F435C
L_801F4360:;
  c->r[3]=c->r[22]|c->r[22]; // 801F4360
  c->r[5]=c->r[1]+0x00000010u; // 801F4364
  c->r[6]=c->r[25]+c->r[28]; // 801F4368
  c->r[7]=c->r[1]+0x0000000Cu; // 801F436C
  c->r[4]=0u+0x00000000u; // 801F4370
  c->lr=0x801F4378u; f_801F4AAC(c); // 801F4374
L_801F4378:;
  c->r[31]=c->r[3]|c->r[3]; // 801F4378
L_801F437C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801F437C
  if (!crb(c,2)) { IRQCHK(c); goto L_801F4250; } // 801F4380
L_801F4384:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F4384
  c->r[0]=c->r[29]+c->r[0]; // 801F4388
  W32(c->r[24]+0x00000000u,c->r[0]); // 801F438C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F4390
  c->r[0]=c->r[28]+c->r[0]; // 801F4394
  W32(c->r[26]+0x00000000u,c->r[0]); // 801F4398
  c->r[0]=R32(c->r[24]+0x00000000u); // 801F439C
  cmps(c,0,(int32_t)c->r[0],0); // 801F43A0
  if (!crb(c,1)) { goto L_801F43B0; } // 801F43A4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F43A8
  W32(c->r[24]+0x00000000u,c->r[0]); // 801F43AC
L_801F43B0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F43B0
  if (crb(c,2)) { goto L_801F43CC; } // 801F43B4
  c->r[0]=R32(c->r[26]+0x00000000u); // 801F43B8
  cmps(c,0,(int32_t)c->r[0],0); // 801F43BC
  if (!crb(c,1)) { goto L_801F43CC; } // 801F43C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[30]); // 801F43C4
  W32(c->r[26]+0x00000000u,c->r[0]); // 801F43C8
L_801F43CC:;
  c->r[3]=c->r[31]|c->r[31]; // 801F43CC
L_801F43D0:;
  c->r[11]=c->r[1]+0x00000040u; // 801F43D0
  c->lr=0x801F43D8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F43D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F43D8
  c->lr=c->r[0]; // 801F43DC
  c->r[1]=c->r[1]+0x00000040u; // 801F43E0
  return; // 801F43E4
}

// fn_801F43E8
void f_801F43E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F43E8
  c->r[0]=c->lr; // 801F43EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F43F0
  c->r[11]=c->r[1]+0x00000040u; // 801F43F4
  c->lr=0x801F43FCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F43F8
  cmps(c,0,(int32_t)c->r[3],0); // 801F43FC
  c->r[24]=c->r[3]|c->r[3]; // 801F4400
  c->r[25]=c->r[4]|c->r[4]; // 801F4404
  c->r[26]=c->r[5]|c->r[5]; // 801F4408
  c->r[27]=c->r[6]|c->r[6]; // 801F440C
  c->r[28]=c->r[7]|c->r[7]; // 801F4410
  if (crb(c,2)) { goto L_801F442C; } // 801F4414
  c->r[0]=R32(c->r[3]+0x00000004u); // 801F4418
  cmps(c,0,(int32_t)c->r[0],0); // 801F441C
  if (crb(c,0)) { goto L_801F442C; } // 801F4420
  cmps(c,0,(int32_t)c->r[0],3); // 801F4424
  if (!crb(c,1)) { goto L_801F4434; } // 801F4428
L_801F442C:;
  c->r[3]=0u+0xFFFFFFFDu; // 801F442C
  goto L_801F4678; // 801F4430
L_801F4434:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F4434
  cmps(c,0,(int32_t)c->r[0],0); // 801F4438
  if (!crb(c,1)) { goto L_801F4448; } // 801F443C
  cmps(c,0,(int32_t)c->r[0],24); // 801F4440
  if (crb(c,0)) { goto L_801F4450; } // 801F4444
L_801F4448:;
  c->r[3]=0u+0xFFFFFFFBu; // 801F4448
  goto L_801F4678; // 801F444C
L_801F4450:;
  cmps(c,0,(int32_t)c->r[0],16); // 801F4450
  if (crb(c,0)) { goto L_801F4460; } // 801F4454
  c->r[3]=0u+0xFFFFFFFAu; // 801F4458
  goto L_801F4678; // 801F445C
L_801F4460:;
  cmps(c,0,(int32_t)c->r[7],0); // 801F4460
  if (!crb(c,2)) { goto L_801F4470; } // 801F4464
  c->r[3]=0u+0xFFFFFFFDu; // 801F4468
  goto L_801F4678; // 801F446C
L_801F4470:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801F4470
  c->r[3]=0u+0x802F0000u; // 801F4474
  cmps(c,0,(int32_t)c->r[4],0); // 801F4478
  c->r[3]=c->r[3]+0xFFFFD2B0u; // 801F447C
  c->r[31]=R32(c->r[3]+c->r[0]); // 801F4480
  if (crb(c,2)) { goto L_801F449C; } // 801F4484
  c->r[0]=R32(c->r[5]+0x00000000u); // 801F4488
  cmps(c,0,(int32_t)c->r[0],0); // 801F448C
  if (!crb(c,1)) { goto L_801F449C; } // 801F4490
  c->r[0]=divwu(c->r[0],c->r[31]); // 801F4494
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4498
L_801F449C:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 801F449C
  cmps(c,0,(int32_t)c->r[0],0); // 801F44A0
  if (!crb(c,1)) { goto L_801F44B0; } // 801F44A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801F44A8
  W32(c->r[7]+0x00000000u,c->r[0]); // 801F44AC
L_801F44B0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801F44B0
  c->r[3]=c->r[24]|c->r[24]; // 801F44B4
  c->r[4]=c->r[25]|c->r[25]; // 801F44B8
  c->r[6]=c->r[27]|c->r[27]; // 801F44BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F44C0
  c->r[5]=c->r[1]+0x00000014u; // 801F44C4
  c->r[30]=0u+0x00000000u; // 801F44C8
  c->r[29]=0u+0x00000000u; // 801F44CC
  c->r[0]=R32(c->r[7]+0x00000000u); // 801F44D0
  c->r[7]=c->r[1]+0x00000010u; // 801F44D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F44D8
  c->lr=0x801F44E0u; f_801F4D54(c); // 801F44DC
  c->r[23]=0u+0x00000001u; // 801F44E0
  goto L_801F4608; // 801F44E4
L_801F44E8:;
  c->r[0]=0u+0x00000000u; // 801F44E8
  c->r[4]=R32(c->r[1]+0x00000014u); // 801F44EC
  W16(c->r[1]+0x00000008u,c->r[0]); // 801F44F0
  c->r[30]=c->r[30]+c->r[4]; // 801F44F4
  c->r[5]=R32(c->r[1]+0x00000010u); // 801F44F8
  c->r[4]=R32(c->r[26]+0x00000000u); // 801F44FC
  c->r[29]=c->r[29]+c->r[5]; // 801F4500
  c->r[4]=c->r[4]-c->r[30]; // 801F4504
  W32(c->r[1]+0x00000014u,c->r[4]); // 801F4508
  c->r[29]=c->r[29]+0x00000001u; // 801F450C
  c->r[4]=R32(c->r[28]+0x00000000u); // 801F4510
  cmps(c,0,(int32_t)c->r[4],0); // 801F4514
  if (!crb(c,1)) { goto L_801F4520; } // 801F4518
  c->r[4]=c->r[4]-c->r[29]; // 801F451C
L_801F4520:;
  cmps(c,0,(int32_t)c->r[3],-4); // 801F4520
  W32(c->r[1]+0x00000010u,c->r[4]); // 801F4524
  if (!crb(c,2)) { goto L_801F4544; } // 801F4528
  c->r[4]=R16(c->r[24]+0x0000000Eu); // 801F452C
  cmpu(c,0,c->r[4],0x0000FFFFu); // 801F4530
  if (crb(c,2)) { goto L_801F4544; } // 801F4534
  W16(c->r[1]+0x00000008u,c->r[4]); // 801F4538
  c->r[0]=c->r[4]|c->r[4]; // 801F453C
  goto L_801F4560; // 801F4540
L_801F4544:;
  cmps(c,0,(int32_t)c->r[3],-2); // 801F4544
  if (!crb(c,2)) { goto L_801F4560; } // 801F4548
  c->r[3]=R16(c->r[24]+0x0000000Cu); // 801F454C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801F4550
  if (crb(c,2)) { goto L_801F4560; } // 801F4554
  c->r[0]=c->r[3]|c->r[3]; // 801F4558
  W16(c->r[1]+0x00000008u,c->r[3]); // 801F455C
L_801F4560:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801F4560
  if (crb(c,2)) { goto L_801F45C4; } // 801F4564
  cmps(c,0,(int32_t)c->r[25],0); // 801F4568
  W32(c->r[1]+0x0000000Cu,c->r[23]); // 801F456C
  if (crb(c,2)) { goto L_801F4590; } // 801F4570
  c->r[3]=c->r[24]|c->r[24]; // 801F4574
  c->r[4]=c->r[25]+c->r[30]; // 801F4578
  c->r[5]=c->r[1]+0x00000014u; // 801F457C
  c->r[6]=c->r[1]+0x00000008u; // 801F4580
  c->r[7]=c->r[1]+0x0000000Cu; // 801F4584
  c->lr=0x801F458Cu; f_801F4D54(c); // 801F4588
  goto L_801F45A8; // 801F458C
L_801F4590:;
  c->r[3]=c->r[24]|c->r[24]; // 801F4590
  c->r[5]=c->r[1]+0x00000014u; // 801F4594
  c->r[6]=c->r[1]+0x00000008u; // 801F4598
  c->r[7]=c->r[1]+0x0000000Cu; // 801F459C
  c->r[4]=0u+0x00000000u; // 801F45A0
  c->lr=0x801F45A8u; f_801F4D54(c); // 801F45A4
L_801F45A8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801F45A8
  if (!crb(c,2)) { goto L_801F4630; } // 801F45AC
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F45B0
  c->r[0]=R32(c->r[26]+0x00000000u); // 801F45B4
  c->r[30]=c->r[30]+c->r[3]; // 801F45B8
  c->r[0]=c->r[0]-c->r[30]; // 801F45BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F45C0
L_801F45C4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F45C4
  if (crb(c,2)) { goto L_801F45EC; } // 801F45C8
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 801F45CC
  c->r[3]=c->r[24]|c->r[24]; // 801F45D0
  c->r[4]=c->r[25]+c->r[30]; // 801F45D4
  c->r[5]=c->r[1]+0x00000014u; // 801F45D8
  c->r[6]=c->r[27]+c->r[0]; // 801F45DC
  c->r[7]=c->r[1]+0x00000010u; // 801F45E0
  c->lr=0x801F45E8u; f_801F4D54(c); // 801F45E4
  goto L_801F4608; // 801F45E8
L_801F45EC:;
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 801F45EC
  c->r[3]=c->r[24]|c->r[24]; // 801F45F0
  c->r[5]=c->r[1]+0x00000014u; // 801F45F4
  c->r[7]=c->r[1]+0x00000010u; // 801F45F8
  c->r[6]=c->r[27]+c->r[0]; // 801F45FC
  c->r[4]=0u+0x00000000u; // 801F4600
  c->lr=0x801F4608u; f_801F4D54(c); // 801F4604
L_801F4608:;
  cmps(c,0,(int32_t)c->r[3],-2); // 801F4608
  if (!crb(c,2)) { goto L_801F461C; } // 801F460C
  c->r[0]=R16(c->r[24]+0x0000000Cu); // 801F4610
  cmps(c,0,(int32_t)c->r[0],0); // 801F4614
  if (!crb(c,2)) { IRQCHK(c); goto L_801F44E8; } // 801F4618
L_801F461C:;
  cmps(c,0,(int32_t)c->r[3],-4); // 801F461C
  if (!crb(c,2)) { goto L_801F4630; } // 801F4620
  c->r[0]=R16(c->r[24]+0x0000000Eu); // 801F4624
  cmps(c,0,(int32_t)c->r[0],0); // 801F4628
  if (!crb(c,2)) { IRQCHK(c); goto L_801F44E8; } // 801F462C
L_801F4630:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4630
  c->r[0]=c->r[30]+c->r[0]; // 801F4634
  W32(c->r[26]+0x00000000u,c->r[0]); // 801F4638
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F463C
  c->r[0]=c->r[29]+c->r[0]; // 801F4640
  W32(c->r[28]+0x00000000u,c->r[0]); // 801F4644
  c->r[0]=R32(c->r[26]+0x00000000u); // 801F4648
  cmps(c,0,(int32_t)c->r[0],0); // 801F464C
  if (!crb(c,1)) { goto L_801F465C; } // 801F4650
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801F4654
  W32(c->r[26]+0x00000000u,c->r[0]); // 801F4658
L_801F465C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801F465C
  if (crb(c,2)) { goto L_801F4678; } // 801F4660
  c->r[0]=R32(c->r[28]+0x00000000u); // 801F4664
  cmps(c,0,(int32_t)c->r[0],0); // 801F4668
  if (!crb(c,1)) { goto L_801F4678; } // 801F466C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F4670
  W32(c->r[28]+0x00000000u,c->r[0]); // 801F4674
L_801F4678:;
  c->r[11]=c->r[1]+0x00000040u; // 801F4678
  c->lr=0x801F4680u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F467C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F4680
  c->lr=c->r[0]; // 801F4684
  c->r[1]=c->r[1]+0x00000040u; // 801F4688
  return; // 801F468C
}

// fn_801F4690
void f_801F4690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4690
  c->r[0]=c->lr; // 801F4694
  c->r[7]=R8(c->r[5]+0x00000000u); // 801F4698
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F469C
  c->r[0]=0u+0x00000000u; // 801F46A0
  cmpu(c,0,c->r[7],0x00000078u); // 801F46A4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801F46A8
  c->r[31]=c->r[3]|c->r[3]; // 801F46AC
  c->r[3]=0u+0x00000000u; // 801F46B0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801F46B4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801F46B8
  if (crb(c,2)) { goto L_801F46C8; } // 801F46BC
  cmpu(c,0,c->r[7],0x00000058u); // 801F46C0
  if (!crb(c,2)) { goto L_801F46D4; } // 801F46C4
L_801F46C8:;
  c->r[6]=R8(c->r[5]+0x00000001u); // 801F46C8
  cmpu(c,0,c->r[6],0x0000002Du); // 801F46CC
  if (crb(c,2)) { goto L_801F46F8; } // 801F46D0
L_801F46D4:;
  cmpu(c,0,c->r[7],0x00000063u); // 801F46D4
  if (crb(c,2)) { goto L_801F46E4; } // 801F46D8
  cmpu(c,0,c->r[7],0x00000043u); // 801F46DC
  if (!crb(c,2)) { goto L_801F4700; } // 801F46E0
L_801F46E4:;
  c->r[6]=R8(c->r[5]+0x00000001u); // 801F46E4
  cmpu(c,0,c->r[6],0x00000073u); // 801F46E8
  if (crb(c,2)) { goto L_801F46F8; } // 801F46EC
  cmpu(c,0,c->r[6],0x00000053u); // 801F46F0
  if (!crb(c,2)) { goto L_801F4700; } // 801F46F4
L_801F46F8:;
  c->r[7]=0u+0x00000002u; // 801F46F8
  goto L_801F4704; // 801F46FC
L_801F4700:;
  c->r[7]=0u+0x00000000u; // 801F4700
L_801F4704:;
  c->r[6]=c->r[1]+0x00000008u; // 801F4704
  c->r[7]=c->r[5]+c->r[7]; // 801F4708
  c->r[5]=c->r[6]|c->r[6]; // 801F470C
  goto L_801F4790; // 801F4710
L_801F4714:;
  c->r[8]=R8(c->r[7]+0x00000000u); // 801F4714
  cmps(c,0,(int32_t)c->r[8],0); // 801F4718
  if (!crb(c,2)) { goto L_801F4734; } // 801F471C
  c->r[5]=c->r[1]+0x00000008u; // 801F4720
  c->r[6]=0u+0x00000000u; // 801F4724
  W8(c->r[5]+c->r[3],c->r[6]); // 801F4728
  c->r[3]=c->r[3]+0x00000001u; // 801F472C
  goto L_801F4798; // 801F4730
L_801F4734:;
  cmpu(c,0,c->r[8],0x00000030u); // 801F4734
  if (crb(c,0)) { goto L_801F4744; } // 801F4738
  cmpu(c,0,c->r[8],0x0000003Au); // 801F473C
  if (crb(c,0)) { goto L_801F4754; } // 801F4740
L_801F4744:;
  cmpu(c,0,c->r[8],0x00000060u); // 801F4744
  if (!crb(c,1)) { goto L_801F4768; } // 801F4748
  cmpu(c,0,c->r[8],0x0000007Au); // 801F474C
  if (crb(c,1)) { goto L_801F4768; } // 801F4750
L_801F4754:;
  W8(c->r[6]+0x00000000u,c->r[8]); // 801F4754
  c->r[3]=c->r[3]+0x00000001u; // 801F4758
  c->r[5]=c->r[5]+0x00000001u; // 801F475C
  c->r[6]=c->r[6]+0x00000001u; // 801F4760
  goto L_801F478C; // 801F4764
L_801F4768:;
  cmpu(c,0,c->r[8],0x00000040u); // 801F4768
  if (!crb(c,1)) { goto L_801F478C; } // 801F476C
  cmpu(c,0,c->r[8],0x0000005Au); // 801F4770
  if (crb(c,1)) { goto L_801F478C; } // 801F4774
  c->r[8]=c->r[8]+0x00000020u; // 801F4778
  c->r[6]=c->r[6]+0x00000001u; // 801F477C
  W8(c->r[5]+0x00000000u,c->r[8]); // 801F4780
  c->r[5]=c->r[5]+0x00000001u; // 801F4784
  c->r[3]=c->r[3]+0x00000001u; // 801F4788
L_801F478C:;
  c->r[7]=c->r[7]+0x00000001u; // 801F478C
L_801F4790:;
  cmps(c,0,(int32_t)c->r[3],24); // 801F4790
  if (crb(c,0)) { IRQCHK(c); goto L_801F4714; } // 801F4794
L_801F4798:;
  cmps(c,1,(int32_t)c->r[3],0); // 801F4798
  c->r[8]=0u+0x00000000u; // 801F479C
  if (!crb(c,5)) { goto L_801F4860; } // 801F47A0
  cmps(c,0,(int32_t)c->r[3],8); // 801F47A4
  c->r[6]=c->r[3]+0xFFFFFFF8u; // 801F47A8
  if (!crb(c,1)) { goto L_801F4838; } // 801F47AC
  c->r[7]=0u+0x00000000u; // 801F47B0
  if (crb(c,4)) { goto L_801F47CC; } // 801F47B4
  c->r[5]=0u+0x80000000u; // 801F47B8
  c->r[5]=c->r[5]+0xFFFFFFFEu; // 801F47BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 801F47C0
  if (crb(c,1)) { goto L_801F47CC; } // 801F47C4
  c->r[7]=0u+0x00000001u; // 801F47C8
L_801F47CC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801F47CC
  if (crb(c,2)) { goto L_801F4838; } // 801F47D0
  c->r[5]=c->r[6]+0x00000007u; // 801F47D4
  c->r[7]=c->r[1]+0x00000008u; // 801F47D8
  c->r[5]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801F47DC
  c->ctr=c->r[5]; // 801F47E0
  cmps(c,0,(int32_t)c->r[6],0); // 801F47E4
  if (!crb(c,1)) { goto L_801F4838; } // 801F47E8
L_801F47EC:;
  c->r[6]=R8(c->r[7]+0x00000000u); // 801F47EC
  c->r[8]=c->r[8]+0x00000008u; // 801F47F0
  c->r[5]=R8(c->r[7]+0x00000001u); // 801F47F4
  c->r[0]=c->r[0]+c->r[6]; // 801F47F8
  c->r[6]=R8(c->r[7]+0x00000002u); // 801F47FC
  c->r[0]=c->r[0]+c->r[5]; // 801F4800
  c->r[5]=R8(c->r[7]+0x00000003u); // 801F4804
  c->r[0]=c->r[0]+c->r[6]; // 801F4808
  c->r[6]=R8(c->r[7]+0x00000004u); // 801F480C
  c->r[0]=c->r[0]+c->r[5]; // 801F4810
  c->r[5]=R8(c->r[7]+0x00000005u); // 801F4814
  c->r[0]=c->r[0]+c->r[6]; // 801F4818
  c->r[6]=R8(c->r[7]+0x00000006u); // 801F481C
  c->r[0]=c->r[0]+c->r[5]; // 801F4820
  c->r[5]=R8(c->r[7]+0x00000007u); // 801F4824
  c->r[0]=c->r[0]+c->r[6]; // 801F4828
  c->r[7]=c->r[7]+0x00000008u; // 801F482C
  c->r[0]=c->r[0]+c->r[5]; // 801F4830
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F47EC; } // 801F4834
L_801F4838:;
  c->r[6]=c->r[1]+0x00000008u; // 801F4838
  c->r[5]=c->r[3]-c->r[8]; // 801F483C
  c->r[6]=c->r[6]+c->r[8]; // 801F4840
  c->ctr=c->r[5]; // 801F4844
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 801F4848
  if (!crb(c,0)) { goto L_801F4860; } // 801F484C
L_801F4850:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801F4850
  c->r[6]=c->r[6]+0x00000001u; // 801F4854
  c->r[0]=c->r[0]+c->r[3]; // 801F4858
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F4850; } // 801F485C
L_801F4860:;
  c->r[3]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801F4860
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 801F4864
  c->r[29]=c->r[0]-c->r[3]; // 801F4868
  goto L_801F488C; // 801F486C
L_801F4870:;
  c->r[3]=c->r[31]+c->r[30]; // 801F4870
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801F4874
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F4878
  if (!crb(c,2)) { goto L_801F4888; } // 801F487C
  c->r[3]=0u+0x00000000u; // 801F4880
  goto L_801F48B0; // 801F4884
L_801F4888:;
  c->r[29]=c->r[0]|c->r[0]; // 801F4888
L_801F488C:;
  c->r[30]=rotl(c->r[29],5)&0xFFFFFFE0u; // 801F488C
  c->r[3]=c->r[1]+0x00000008u; // 801F4890
  c->r[4]=c->r[31]+c->r[30]; // 801F4894
  c->r[5]=0u+0x00000018u; // 801F4898
  c->lr=0x801F48A0u; f_8019027C(c); // 801F489C
  cmps(c,0,(int32_t)c->r[3],0); // 801F48A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801F4870; } // 801F48A4
  c->r[3]=c->r[31]+c->r[30]; // 801F48A8
  c->r[3]=R32(c->r[3]+0x00000018u); // 801F48AC
L_801F48B0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F48B0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801F48B4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801F48B8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801F48BC
  c->lr=c->r[0]; // 801F48C0
  c->r[1]=c->r[1]+0x00000030u; // 801F48C4
  return; // 801F48C8
}

// fn_801F48CC
void f_801F48CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F48CC
  c->r[0]=c->lr; // 801F48D0
  cmps(c,0,(int32_t)c->r[3],0); // 801F48D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F48D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F48DC
  c->r[31]=c->r[5]|c->r[5]; // 801F48E0
  if (crb(c,2)) { goto L_801F48F8; } // 801F48E4
  cmps(c,0,(int32_t)c->r[4],0); // 801F48E8
  if (crb(c,2)) { goto L_801F48F8; } // 801F48EC
  cmps(c,0,(int32_t)c->r[5],0); // 801F48F0
  if (!crb(c,2)) { goto L_801F4900; } // 801F48F4
L_801F48F8:;
  c->r[3]=0u+0xFFFFFFFDu; // 801F48F8
  goto L_801F4A98; // 801F48FC
L_801F4900:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F4900
  cmps(c,0,(int32_t)c->r[0],0); // 801F4904
  if (!crb(c,1)) { goto L_801F4914; } // 801F4908
  cmps(c,0,(int32_t)c->r[0],24); // 801F490C
  if (crb(c,0)) { goto L_801F491C; } // 801F4910
L_801F4914:;
  c->r[3]=0u+0xFFFFFFFBu; // 801F4914
  goto L_801F4A98; // 801F4918
L_801F491C:;
  cmpu(c,0,c->r[0],0x00000019u); // 801F491C
  if (crb(c,1)) { goto L_801F4A8C; } // 801F4920
  c->r[6]=0u+0x80340000u; // 801F4924
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F4928
  c->r[6]=c->r[6]+0xFFFFA7F8u; // 801F492C
  c->r[6]=R32(c->r[6]+c->r[0]); // 801F4930
  c->ctr=c->r[6]; // 801F4934
  if (true) { switch (c->ctr) { case 0x801F493Cu: goto L_801F493C; case 0x801F4944u: goto L_801F4944; case 0x801F4950u: goto L_801F4950; case 0x801F495Cu: goto L_801F495C; case 0x801F4974u: goto L_801F4974; case 0x801F4980u: goto L_801F4980; case 0x801F498Cu: goto L_801F498C; case 0x801F49ECu: goto L_801F49EC; case 0x801F4A18u: goto L_801F4A18; case 0x801F4A24u: goto L_801F4A24; case 0x801F4A30u: goto L_801F4A30; case 0x801F4A54u: goto L_801F4A54; case 0x801F4A60u: goto L_801F4A60; default: break; } dispatch(c,c->ctr); return; } // 801F4938
L_801F493C:;
  c->r[3]=0u+0xFFFFFFFBu; // 801F493C
  goto L_801F4A98; // 801F4940
L_801F4944:;
  c->r[0]=0u+0x00000001u; // 801F4944
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4948
  goto L_801F4A94; // 801F494C
L_801F4950:;
  c->r[0]=0u+0x00000001u; // 801F4950
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4954
  goto L_801F4A94; // 801F4958
L_801F495C:;
  c->r[3]=c->r[1]+0x0000000Au; // 801F495C
  c->r[5]=0u+0x00000002u; // 801F4960
  c->lr=0x801F4968u; f_80004338(c); // 801F4964
  c->r[0]=0u+0x00000002u; // 801F4968
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F496C
  goto L_801F4A94; // 801F4970
L_801F4974:;
  c->r[0]=0u+0x00000004u; // 801F4974
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4978
  goto L_801F4A94; // 801F497C
L_801F4980:;
  c->r[0]=0u+0x00000001u; // 801F4980
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4984
  goto L_801F4A94; // 801F4988
L_801F498C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F498C
  cmpu(c,0,c->r[0],0x0000001Bu); // 801F4990
  if (!crb(c,2)) { goto L_801F49A4; } // 801F4994
  c->r[0]=0u+0x00000000u; // 801F4998
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F499C
  goto L_801F4A94; // 801F49A0
L_801F49A4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801F49A4
  cmps(c,0,(int32_t)c->r[0],4); // 801F49A8
  if (!crb(c,0)) { goto L_801F49BC; } // 801F49AC
  cmps(c,0,(int32_t)c->r[0],0); // 801F49B0
  if (!crb(c,0)) { goto L_801F49C8; } // 801F49B4
  goto L_801F49E0; // 801F49B8
L_801F49BC:;
  cmps(c,0,(int32_t)c->r[0],8); // 801F49BC
  if (!crb(c,0)) { goto L_801F49E0; } // 801F49C0
  goto L_801F49D4; // 801F49C4
L_801F49C8:;
  c->r[0]=0u+0x00000001u; // 801F49C8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F49CC
  goto L_801F4A94; // 801F49D0
L_801F49D4:;
  c->r[0]=0u+0x00000002u; // 801F49D4
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F49D8
  goto L_801F4A94; // 801F49DC
L_801F49E0:;
  c->r[0]=0u+0x00000001u; // 801F49E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F49E4
  goto L_801F4A94; // 801F49E8
L_801F49EC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F49EC
  cmpu(c,0,c->r[0],0x00000081u); // 801F49F0
  if (crb(c,0)) { goto L_801F4A0C; } // 801F49F4
  cmpu(c,0,c->r[0],0x000000FCu); // 801F49F8
  if (crb(c,1)) { goto L_801F4A0C; } // 801F49FC
  c->r[0]=0u+0x00000002u; // 801F4A00
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4A04
  goto L_801F4A94; // 801F4A08
L_801F4A0C:;
  c->r[0]=0u+0x00000001u; // 801F4A0C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4A10
  goto L_801F4A94; // 801F4A14
L_801F4A18:;
  c->r[0]=0u+0x00000001u; // 801F4A18
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4A1C
  goto L_801F4A94; // 801F4A20
L_801F4A24:;
  c->r[0]=0u+0x00000001u; // 801F4A24
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4A28
  goto L_801F4A94; // 801F4A2C
L_801F4A30:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801F4A30
  cmps(c,0,(int32_t)c->r[0],0); // 801F4A34
  if (!crb(c,2)) { goto L_801F4A48; } // 801F4A38
  c->r[3]=c->r[1]+0x00000008u; // 801F4A3C
  c->r[5]=0u+0x00000002u; // 801F4A40
  c->lr=0x801F4A48u; f_80004338(c); // 801F4A44
L_801F4A48:;
  c->r[0]=0u+0x00000002u; // 801F4A48
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F4A4C
  goto L_801F4A94; // 801F4A50
L_801F4A54:;
  c->r[0]=0u+0x00000001u; // 801F4A54
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4A58
  goto L_801F4A94; // 801F4A5C
L_801F4A60:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F4A60
  cmpu(c,0,c->r[0],0x00000081u); // 801F4A64
  if (crb(c,0)) { goto L_801F4A80; } // 801F4A68
  cmpu(c,0,c->r[0],0x000000FEu); // 801F4A6C
  if (crb(c,1)) { goto L_801F4A80; } // 801F4A70
  c->r[0]=0u+0x00000002u; // 801F4A74
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4A78
  goto L_801F4A94; // 801F4A7C
L_801F4A80:;
  c->r[0]=0u+0x00000001u; // 801F4A80
  W32(c->r[5]+0x00000000u,c->r[0]); // 801F4A84
  goto L_801F4A94; // 801F4A88
L_801F4A8C:;
  c->r[3]=0u+0xFFFFFFFAu; // 801F4A8C
  goto L_801F4A98; // 801F4A90
L_801F4A94:;
  c->r[3]=0u+0x00000000u; // 801F4A94
L_801F4A98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F4A98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F4A9C
  c->lr=c->r[0]; // 801F4AA0
  c->r[1]=c->r[1]+0x00000020u; // 801F4AA4
  return; // 801F4AA8
}

// fn_801F4AAC
void f_801F4AAC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F4AAC
  c->r[9]=c->r[3]|c->r[3]; // 801F4AB0
  c->r[8]=c->r[7]|c->r[7]; // 801F4AB4
  cmpu(c,0,c->r[0],0x00000019u); // 801F4AB8
  if (crb(c,1)) { goto L_801F4D4C; } // 801F4ABC
  c->r[3]=0u+0x80340000u; // 801F4AC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F4AC4
  c->r[3]=c->r[3]+0xFFFFA860u; // 801F4AC8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801F4ACC
  c->ctr=c->r[3]; // 801F4AD0
  if (true) { switch (c->ctr) { case 0x801F4AD8u: goto L_801F4AD8; case 0x801F4AE0u: goto L_801F4AE0; case 0x801F4AF8u: goto L_801F4AF8; case 0x801F4B10u: goto L_801F4B10; case 0x801F4B2Cu: goto L_801F4B2C; case 0x801F4B44u: goto L_801F4B44; case 0x801F4B5Cu: goto L_801F4B5C; case 0x801F4B74u: goto L_801F4B74; case 0x801F4B8Cu: goto L_801F4B8C; case 0x801F4BA4u: goto L_801F4BA4; case 0x801F4BBCu: goto L_801F4BBC; case 0x801F4BD4u: goto L_801F4BD4; case 0x801F4BF0u: goto L_801F4BF0; case 0x801F4C08u: goto L_801F4C08; case 0x801F4C20u: goto L_801F4C20; case 0x801F4C38u: goto L_801F4C38; case 0x801F4C50u: goto L_801F4C50; case 0x801F4C6Cu: goto L_801F4C6C; case 0x801F4C88u: goto L_801F4C88; case 0x801F4CA4u: goto L_801F4CA4; case 0x801F4CBCu: goto L_801F4CBC; case 0x801F4CD4u: goto L_801F4CD4; case 0x801F4CECu: goto L_801F4CEC; case 0x801F4D04u: goto L_801F4D04; case 0x801F4D1Cu: goto L_801F4D1C; case 0x801F4D34u: goto L_801F4D34; default: break; } dispatch(c,c->ctr); return; } // 801F4AD4
L_801F4AD8:;
  c->r[3]=0u+0xFFFFFFFBu; // 801F4AD8
  return; // 801F4ADC
L_801F4AE0:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4AE0
  c->r[3]=c->r[4]|c->r[4]; // 801F4AE4
  c->r[4]=c->r[5]|c->r[5]; // 801F4AE8
  c->r[5]=c->r[6]|c->r[6]; // 801F4AEC
  c->r[6]=c->r[8]|c->r[8]; // 801F4AF0
  f_801F0EB0(c); return; // 801F4AF4
L_801F4AF8:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4AF8
  c->r[3]=c->r[4]|c->r[4]; // 801F4AFC
  c->r[4]=c->r[5]|c->r[5]; // 801F4B00
  c->r[5]=c->r[6]|c->r[6]; // 801F4B04
  c->r[6]=c->r[8]|c->r[8]; // 801F4B08
  f_801F18E8(c); return; // 801F4B0C
L_801F4B10:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4B10
  c->r[3]=c->r[4]|c->r[4]; // 801F4B14
  c->r[4]=c->r[5]|c->r[5]; // 801F4B18
  c->r[5]=c->r[6]|c->r[6]; // 801F4B1C
  c->r[6]=c->r[8]|c->r[8]; // 801F4B20
  c->r[8]=c->r[9]+0x00000008u; // 801F4B24
  f_801F1F10(c); return; // 801F4B28
L_801F4B2C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4B2C
  c->r[3]=c->r[4]|c->r[4]; // 801F4B30
  c->r[4]=c->r[5]|c->r[5]; // 801F4B34
  c->r[5]=c->r[6]|c->r[6]; // 801F4B38
  c->r[6]=c->r[8]|c->r[8]; // 801F4B3C
  f_801F1090(c); return; // 801F4B40
L_801F4B44:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4B44
  c->r[3]=c->r[4]|c->r[4]; // 801F4B48
  c->r[4]=c->r[5]|c->r[5]; // 801F4B4C
  c->r[5]=c->r[6]|c->r[6]; // 801F4B50
  c->r[6]=c->r[8]|c->r[8]; // 801F4B54
  f_801F3EF4(c); return; // 801F4B58
L_801F4B5C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4B5C
  c->r[3]=c->r[4]|c->r[4]; // 801F4B60
  c->r[4]=c->r[5]|c->r[5]; // 801F4B64
  c->r[5]=c->r[6]|c->r[6]; // 801F4B68
  c->r[6]=c->r[8]|c->r[8]; // 801F4B6C
  f_801F3F0C(c); return; // 801F4B70
L_801F4B74:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4B74
  c->r[3]=c->r[4]|c->r[4]; // 801F4B78
  c->r[4]=c->r[5]|c->r[5]; // 801F4B7C
  c->r[5]=c->r[6]|c->r[6]; // 801F4B80
  c->r[6]=c->r[8]|c->r[8]; // 801F4B84
  f_801F3F24(c); return; // 801F4B88
L_801F4B8C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4B8C
  c->r[3]=c->r[4]|c->r[4]; // 801F4B90
  c->r[4]=c->r[5]|c->r[5]; // 801F4B94
  c->r[5]=c->r[6]|c->r[6]; // 801F4B98
  c->r[6]=c->r[8]|c->r[8]; // 801F4B9C
  f_801F3F3C(c); return; // 801F4BA0
L_801F4BA4:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4BA4
  c->r[3]=c->r[4]|c->r[4]; // 801F4BA8
  c->r[4]=c->r[5]|c->r[5]; // 801F4BAC
  c->r[5]=c->r[6]|c->r[6]; // 801F4BB0
  c->r[6]=c->r[8]|c->r[8]; // 801F4BB4
  f_801F3F54(c); return; // 801F4BB8
L_801F4BBC:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4BBC
  c->r[3]=c->r[4]|c->r[4]; // 801F4BC0
  c->r[4]=c->r[5]|c->r[5]; // 801F4BC4
  c->r[5]=c->r[6]|c->r[6]; // 801F4BC8
  c->r[6]=c->r[8]|c->r[8]; // 801F4BCC
  f_801F3F6C(c); return; // 801F4BD0
L_801F4BD4:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4BD4
  c->r[3]=c->r[4]|c->r[4]; // 801F4BD8
  c->r[4]=c->r[5]|c->r[5]; // 801F4BDC
  c->r[5]=c->r[6]|c->r[6]; // 801F4BE0
  c->r[6]=c->r[8]|c->r[8]; // 801F4BE4
  c->r[8]=c->r[9]+0x00000008u; // 801F4BE8
  f_801F2A88(c); return; // 801F4BEC
L_801F4BF0:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4BF0
  c->r[3]=c->r[4]|c->r[4]; // 801F4BF4
  c->r[4]=c->r[5]|c->r[5]; // 801F4BF8
  c->r[5]=c->r[6]|c->r[6]; // 801F4BFC
  c->r[6]=c->r[8]|c->r[8]; // 801F4C00
  f_801F2484(c); return; // 801F4C04
L_801F4C08:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4C08
  c->r[3]=c->r[4]|c->r[4]; // 801F4C0C
  c->r[4]=c->r[5]|c->r[5]; // 801F4C10
  c->r[5]=c->r[6]|c->r[6]; // 801F4C14
  c->r[6]=c->r[8]|c->r[8]; // 801F4C18
  f_801F3EF4(c); return; // 801F4C1C
L_801F4C20:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4C20
  c->r[3]=c->r[4]|c->r[4]; // 801F4C24
  c->r[4]=c->r[5]|c->r[5]; // 801F4C28
  c->r[5]=c->r[6]|c->r[6]; // 801F4C2C
  c->r[6]=c->r[8]|c->r[8]; // 801F4C30
  f_801F5754(c); return; // 801F4C34
L_801F4C38:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4C38
  c->r[3]=c->r[4]|c->r[4]; // 801F4C3C
  c->r[4]=c->r[5]|c->r[5]; // 801F4C40
  c->r[5]=c->r[6]|c->r[6]; // 801F4C44
  c->r[6]=c->r[8]|c->r[8]; // 801F4C48
  f_801F4F00(c); return; // 801F4C4C
L_801F4C50:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4C50
  c->r[3]=c->r[4]|c->r[4]; // 801F4C54
  c->r[4]=c->r[5]|c->r[5]; // 801F4C58
  c->r[5]=c->r[6]|c->r[6]; // 801F4C5C
  c->r[6]=c->r[8]|c->r[8]; // 801F4C60
  c->r[8]=c->r[9]+0x00000008u; // 801F4C64
  f_801F1BFC(c); return; // 801F4C68
L_801F4C6C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4C6C
  c->r[3]=c->r[4]|c->r[4]; // 801F4C70
  c->r[4]=c->r[5]|c->r[5]; // 801F4C74
  c->r[5]=c->r[6]|c->r[6]; // 801F4C78
  c->r[6]=c->r[8]|c->r[8]; // 801F4C7C
  c->r[8]=c->r[9]+0x00000008u; // 801F4C80
  f_801F1F10(c); return; // 801F4C84
L_801F4C88:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4C88
  c->r[3]=c->r[4]|c->r[4]; // 801F4C8C
  c->r[4]=c->r[5]|c->r[5]; // 801F4C90
  c->r[5]=c->r[6]|c->r[6]; // 801F4C94
  c->r[6]=c->r[8]|c->r[8]; // 801F4C98
  c->r[8]=c->r[9]+0x00000008u; // 801F4C9C
  f_801F1F10(c); return; // 801F4CA0
L_801F4CA4:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4CA4
  c->r[3]=c->r[4]|c->r[4]; // 801F4CA8
  c->r[4]=c->r[5]|c->r[5]; // 801F4CAC
  c->r[5]=c->r[6]|c->r[6]; // 801F4CB0
  c->r[6]=c->r[8]|c->r[8]; // 801F4CB4
  f_801F3F90(c); return; // 801F4CB8
L_801F4CBC:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4CBC
  c->r[3]=c->r[4]|c->r[4]; // 801F4CC0
  c->r[4]=c->r[5]|c->r[5]; // 801F4CC4
  c->r[5]=c->r[6]|c->r[6]; // 801F4CC8
  c->r[6]=c->r[8]|c->r[8]; // 801F4CCC
  f_801F3F9C(c); return; // 801F4CD0
L_801F4CD4:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4CD4
  c->r[3]=c->r[4]|c->r[4]; // 801F4CD8
  c->r[4]=c->r[5]|c->r[5]; // 801F4CDC
  c->r[5]=c->r[6]|c->r[6]; // 801F4CE0
  c->r[6]=c->r[8]|c->r[8]; // 801F4CE4
  f_801F3FA8(c); return; // 801F4CE8
L_801F4CEC:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4CEC
  c->r[3]=c->r[4]|c->r[4]; // 801F4CF0
  c->r[4]=c->r[5]|c->r[5]; // 801F4CF4
  c->r[5]=c->r[6]|c->r[6]; // 801F4CF8
  c->r[6]=c->r[8]|c->r[8]; // 801F4CFC
  f_801F3FB4(c); return; // 801F4D00
L_801F4D04:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4D04
  c->r[3]=c->r[4]|c->r[4]; // 801F4D08
  c->r[4]=c->r[5]|c->r[5]; // 801F4D0C
  c->r[5]=c->r[6]|c->r[6]; // 801F4D10
  c->r[6]=c->r[8]|c->r[8]; // 801F4D14
  f_801F3FC0(c); return; // 801F4D18
L_801F4D1C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4D1C
  c->r[3]=c->r[4]|c->r[4]; // 801F4D20
  c->r[4]=c->r[5]|c->r[5]; // 801F4D24
  c->r[5]=c->r[6]|c->r[6]; // 801F4D28
  c->r[6]=c->r[8]|c->r[8]; // 801F4D2C
  f_801F3FCC(c); return; // 801F4D30
L_801F4D34:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4D34
  c->r[3]=c->r[4]|c->r[4]; // 801F4D38
  c->r[4]=c->r[5]|c->r[5]; // 801F4D3C
  c->r[5]=c->r[6]|c->r[6]; // 801F4D40
  c->r[6]=c->r[8]|c->r[8]; // 801F4D44
  f_801F3FD8(c); return; // 801F4D48
L_801F4D4C:;
  c->r[3]=0u+0xFFFFFFFAu; // 801F4D4C
  return; // 801F4D50
}

// fn_801F4D54
void f_801F4D54(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F4D54
  c->r[9]=c->r[3]|c->r[3]; // 801F4D58
  c->r[8]=c->r[7]|c->r[7]; // 801F4D5C
  cmpu(c,0,c->r[0],0x0000000Fu); // 801F4D60
  if (crb(c,1)) { goto L_801F4EF8; } // 801F4D64
  c->r[3]=0u+0x80340000u; // 801F4D68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F4D6C
  c->r[3]=c->r[3]+0xFFFFA8C8u; // 801F4D70
  c->r[3]=R32(c->r[3]+c->r[0]); // 801F4D74
  c->ctr=c->r[3]; // 801F4D78
  if (true) { switch (c->ctr) { case 0x801F4D80u: goto L_801F4D80; case 0x801F4D88u: goto L_801F4D88; case 0x801F4DA0u: goto L_801F4DA0; case 0x801F4DB8u: goto L_801F4DB8; case 0x801F4DD4u: goto L_801F4DD4; case 0x801F4DECu: goto L_801F4DEC; case 0x801F4E04u: goto L_801F4E04; case 0x801F4E1Cu: goto L_801F4E1C; case 0x801F4E34u: goto L_801F4E34; case 0x801F4E4Cu: goto L_801F4E4C; case 0x801F4E64u: goto L_801F4E64; case 0x801F4E7Cu: goto L_801F4E7C; case 0x801F4E98u: goto L_801F4E98; case 0x801F4EB0u: goto L_801F4EB0; case 0x801F4EC8u: goto L_801F4EC8; case 0x801F4EE0u: goto L_801F4EE0; default: break; } dispatch(c,c->ctr); return; } // 801F4D7C
L_801F4D80:;
  c->r[3]=0u+0xFFFFFFFBu; // 801F4D80
  return; // 801F4D84
L_801F4D88:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4D88
  c->r[3]=c->r[4]|c->r[4]; // 801F4D8C
  c->r[4]=c->r[5]|c->r[5]; // 801F4D90
  c->r[5]=c->r[6]|c->r[6]; // 801F4D94
  c->r[6]=c->r[8]|c->r[8]; // 801F4D98
  f_801F0C74(c); return; // 801F4D9C
L_801F4DA0:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4DA0
  c->r[3]=c->r[4]|c->r[4]; // 801F4DA4
  c->r[4]=c->r[5]|c->r[5]; // 801F4DA8
  c->r[5]=c->r[6]|c->r[6]; // 801F4DAC
  c->r[6]=c->r[8]|c->r[8]; // 801F4DB0
  f_801F15E4(c); return; // 801F4DB4
L_801F4DB8:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4DB8
  c->r[3]=c->r[4]|c->r[4]; // 801F4DBC
  c->r[4]=c->r[5]|c->r[5]; // 801F4DC0
  c->r[5]=c->r[6]|c->r[6]; // 801F4DC4
  c->r[6]=c->r[8]|c->r[8]; // 801F4DC8
  c->r[8]=c->r[9]+0x00000008u; // 801F4DCC
  f_801F1F10(c); return; // 801F4DD0
L_801F4DD4:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4DD4
  c->r[3]=c->r[4]|c->r[4]; // 801F4DD8
  c->r[4]=c->r[5]|c->r[5]; // 801F4DDC
  c->r[5]=c->r[6]|c->r[6]; // 801F4DE0
  c->r[6]=c->r[8]|c->r[8]; // 801F4DE4
  f_801F134C(c); return; // 801F4DE8
L_801F4DEC:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4DEC
  c->r[3]=c->r[4]|c->r[4]; // 801F4DF0
  c->r[4]=c->r[5]|c->r[5]; // 801F4DF4
  c->r[5]=c->r[6]|c->r[6]; // 801F4DF8
  c->r[6]=c->r[8]|c->r[8]; // 801F4DFC
  f_801F3F00(c); return; // 801F4E00
L_801F4E04:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4E04
  c->r[3]=c->r[4]|c->r[4]; // 801F4E08
  c->r[4]=c->r[5]|c->r[5]; // 801F4E0C
  c->r[5]=c->r[6]|c->r[6]; // 801F4E10
  c->r[6]=c->r[8]|c->r[8]; // 801F4E14
  f_801F3F18(c); return; // 801F4E18
L_801F4E1C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4E1C
  c->r[3]=c->r[4]|c->r[4]; // 801F4E20
  c->r[4]=c->r[5]|c->r[5]; // 801F4E24
  c->r[5]=c->r[6]|c->r[6]; // 801F4E28
  c->r[6]=c->r[8]|c->r[8]; // 801F4E2C
  f_801F3F30(c); return; // 801F4E30
L_801F4E34:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4E34
  c->r[3]=c->r[4]|c->r[4]; // 801F4E38
  c->r[4]=c->r[5]|c->r[5]; // 801F4E3C
  c->r[5]=c->r[6]|c->r[6]; // 801F4E40
  c->r[6]=c->r[8]|c->r[8]; // 801F4E44
  f_801F3F48(c); return; // 801F4E48
L_801F4E4C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4E4C
  c->r[3]=c->r[4]|c->r[4]; // 801F4E50
  c->r[4]=c->r[5]|c->r[5]; // 801F4E54
  c->r[5]=c->r[6]|c->r[6]; // 801F4E58
  c->r[6]=c->r[8]|c->r[8]; // 801F4E5C
  f_801F3F60(c); return; // 801F4E60
L_801F4E64:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4E64
  c->r[3]=c->r[4]|c->r[4]; // 801F4E68
  c->r[4]=c->r[5]|c->r[5]; // 801F4E6C
  c->r[5]=c->r[6]|c->r[6]; // 801F4E70
  c->r[6]=c->r[8]|c->r[8]; // 801F4E74
  f_801F3F78(c); return; // 801F4E78
L_801F4E7C:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4E7C
  c->r[3]=c->r[4]|c->r[4]; // 801F4E80
  c->r[4]=c->r[5]|c->r[5]; // 801F4E84
  c->r[5]=c->r[6]|c->r[6]; // 801F4E88
  c->r[6]=c->r[8]|c->r[8]; // 801F4E8C
  c->r[8]=c->r[9]+0x00000008u; // 801F4E90
  f_801F2EF4(c); return; // 801F4E94
L_801F4E98:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4E98
  c->r[3]=c->r[4]|c->r[4]; // 801F4E9C
  c->r[4]=c->r[5]|c->r[5]; // 801F4EA0
  c->r[5]=c->r[6]|c->r[6]; // 801F4EA4
  c->r[6]=c->r[8]|c->r[8]; // 801F4EA8
  f_801F27E0(c); return; // 801F4EAC
L_801F4EB0:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4EB0
  c->r[3]=c->r[4]|c->r[4]; // 801F4EB4
  c->r[4]=c->r[5]|c->r[5]; // 801F4EB8
  c->r[5]=c->r[6]|c->r[6]; // 801F4EBC
  c->r[6]=c->r[8]|c->r[8]; // 801F4EC0
  f_801F3F84(c); return; // 801F4EC4
L_801F4EC8:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4EC8
  c->r[3]=c->r[4]|c->r[4]; // 801F4ECC
  c->r[4]=c->r[5]|c->r[5]; // 801F4ED0
  c->r[5]=c->r[6]|c->r[6]; // 801F4ED4
  c->r[6]=c->r[8]|c->r[8]; // 801F4ED8
  f_801F5B48(c); return; // 801F4EDC
L_801F4EE0:;
  c->r[7]=R32(c->r[9]+0x00000004u); // 801F4EE0
  c->r[3]=c->r[4]|c->r[4]; // 801F4EE4
  c->r[4]=c->r[5]|c->r[5]; // 801F4EE8
  c->r[5]=c->r[6]|c->r[6]; // 801F4EEC
  c->r[6]=c->r[8]|c->r[8]; // 801F4EF0
  f_801F51C0(c); return; // 801F4EF4
L_801F4EF8:;
  c->r[3]=0u+0xFFFFFFFAu; // 801F4EF8
  return; // 801F4EFC
}

// fn_801F4F00
void f_801F4F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4F00
  c->r[0]=c->lr; // 801F4F04
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F4F08
  c->r[11]=c->r[1]+0x00000050u; // 801F4F0C
  c->lr=0x801F4F14u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F4F10
  c->r[25]=c->r[5]|c->r[5]; // 801F4F14
  c->r[8]=0u+0xFFFFFFFFu; // 801F4F18
  c->r[9]=0u+0x00000001u; // 801F4F1C
  c->r[5]=0u-c->r[3]; // 801F4F20
  c->r[0]=0u-c->r[25]; // 801F4F24
  c->r[26]=c->r[6]|c->r[6]; // 801F4F28
  W32(c->r[1]+0x00000018u,c->r[8]); // 801F4F2C
  c->r[5]=c->r[5]|c->r[3]; // 801F4F30
  c->r[23]=c->r[3]|c->r[3]; // 801F4F34
  c->r[0]=c->r[0]|c->r[25]; // 801F4F38
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F4F3C
  c->r[27]=c->r[7]|c->r[7]; // 801F4F40
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F4F44
  c->r[24]=c->r[4]|c->r[4]; // 801F4F48
  W32(c->r[1]+0x00000010u,c->r[9]); // 801F4F4C
  c->r[8]=c->r[26]|c->r[26]; // 801F4F50
  c->r[5]=c->r[1]+0x00000014u; // 801F4F54
  c->r[6]=c->r[1]+0x00000010u; // 801F4F58
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F4F5C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F4F60
  c->r[9]=c->r[1]+0x00000018u; // 801F4F64
  c->r[10]=c->r[1]+0x0000000Cu; // 801F4F68
  c->r[30]=0u+0x00000000u; // 801F4F6C
  c->r[29]=0u+0x00000000u; // 801F4F70
  c->lr=0x801F4F78u; f_801F0A30(c); // 801F4F74
  cmps(c,0,(int32_t)c->r[3],0); // 801F4F78
  c->r[28]=c->r[3]|c->r[3]; // 801F4F7C
  if (crb(c,2)) { goto L_801F4F88; } // 801F4F80
  goto L_801F51A8; // 801F4F84
L_801F4F88:;
  c->r[0]=R32(c->r[13]+0xFFFF95C8u); // 801F4F88
  cmps(c,0,(int32_t)c->r[0],0); // 801F4F8C
  if (!crb(c,2)) { goto L_801F4F9C; } // 801F4F90
  c->r[3]=0u+0xFFFFFFFEu; // 801F4F94
  goto L_801F51A8; // 801F4F98
L_801F4F9C:;
  c->r[21]=0u+0x802F0000u; // 801F4F9C
  c->r[22]=0u+0x000020ACu; // 801F4FA0
  c->r[21]=c->r[21]+0xFFFFE540u; // 801F4FA4
  goto L_801F5168; // 801F4FA8
L_801F4FAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4FAC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F4FB0
  if (crb(c,0)) { goto L_801F4FCC; } // 801F4FB4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F4FB8
  cmps(c,0,(int32_t)c->r[0],0); // 801F4FBC
  if (crb(c,2)) { goto L_801F4FCC; } // 801F4FC0
  c->r[28]=0u+0xFFFFFFFFu; // 801F4FC4
  goto L_801F518C; // 801F4FC8
L_801F4FCC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F4FCC
  if (!crb(c,1)) { goto L_801F5078; } // 801F4FD0
  c->r[0]=c->r[3]-c->r[30]; // 801F4FD4
  c->r[3]=c->r[31]|c->r[31]; // 801F4FD8
  cmps(c,0,(int32_t)c->r[0],1); // 801F4FDC
  c->r[4]=0u+0x00000000u; // 801F4FE0
  if (crb(c,1)) { goto L_801F4FF4; } // 801F4FE4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F4FE8
  cmps(c,0,(int32_t)c->r[0],0); // 801F4FEC
  if (!crb(c,2)) { goto L_801F4FF8; } // 801F4FF0
L_801F4FF4:;
  c->r[4]=0u+0x00000001u; // 801F4FF4
L_801F4FF8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F4FF8
  if (crb(c,2)) { goto L_801F5008; } // 801F4FFC
  c->r[4]=R8(c->r[25]+0x00000001u); // 801F5000
  goto L_801F500C; // 801F5004
L_801F5008:;
  c->r[4]=0u+0x00000000u; // 801F5008
L_801F500C:;
  c->lr=0x801F5010u; f_801F0B28(c); // 801F500C
  cmps(c,0,(int32_t)c->r[3],0); // 801F5010
  c->r[20]=c->r[3]|c->r[3]; // 801F5014
  if (!crb(c,1)) { goto L_801F5078; } // 801F5018
  c->r[6]=R32(c->r[1]+0x00000010u); // 801F501C
  c->r[3]=c->r[23]|c->r[23]; // 801F5020
  c->r[5]=c->r[27]|c->r[27]; // 801F5024
  c->r[4]=0u+0x00000002u; // 801F5028
  c->lr=0x801F5030u; f_801F0B5C(c); // 801F502C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5030
  c->r[0]=c->r[0]-c->r[29]; // 801F5034
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F5038
  if (!crb(c,0)) { goto L_801F5054; } // 801F503C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5040
  cmps(c,0,(int32_t)c->r[0],0); // 801F5044
  if (crb(c,2)) { goto L_801F5054; } // 801F5048
  c->r[28]=0u+0xFFFFFFFFu; // 801F504C
  goto L_801F518C; // 801F5050
L_801F5054:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5054
  c->r[25]=c->r[25]+c->r[20]; // 801F5058
  c->r[30]=c->r[30]+c->r[20]; // 801F505C
  c->r[29]=c->r[29]+c->r[3]; // 801F5060
  cmps(c,0,(int32_t)c->r[0],0); // 801F5064
  if (crb(c,2)) { goto L_801F5168; } // 801F5068
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F506C
  c->r[23]=c->r[23]+c->r[0]; // 801F5070
  goto L_801F5168; // 801F5074
L_801F5078:;
  cmpu(c,0,c->r[31],0x00000081u); // 801F5078
  if (crb(c,0)) { goto L_801F5110; } // 801F507C
  cmpu(c,0,c->r[31],0x000000FEu); // 801F5080
  if (crb(c,1)) { goto L_801F5110; } // 801F5084
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F5088
  c->r[0]=c->r[0]-c->r[30]; // 801F508C
  cmps(c,0,(int32_t)c->r[0],2); // 801F5090
  if (!crb(c,0)) { goto L_801F50A4; } // 801F5094
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5098
  cmps(c,0,(int32_t)c->r[0],0); // 801F509C
  if (!crb(c,2)) { goto L_801F518C; } // 801F50A0
L_801F50A4:;
  cmpu(c,0,c->r[31],0x000000A1u); // 801F50A4
  {uint32_t ea=c->r[25]+0x00000001u; c->r[3]=R8(ea); c->r[25]=ea;} // 801F50A8
  if (crb(c,0)) { goto L_801F50E0; } // 801F50AC
  cmpu(c,0,c->r[3],0x000000A1u); // 801F50B0
  if (crb(c,0)) { goto L_801F50E0; } // 801F50B4
  cmpu(c,0,c->r[3],0x000000FEu); // 801F50B8
  if (crb(c,1)) { goto L_801F50E0; } // 801F50BC
  c->r[0]=c->r[31]+0xFFFFFF5Fu; // 801F50C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)94); // 801F50C4
  c->r[3]=c->r[3]+c->r[0]; // 801F50C8
  c->r[0]=c->r[3]+0xFFFFFF5Fu; // 801F50CC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F50D0
  c->r[0]=R16(c->r[21]+c->r[0]); // 801F50D4
  W16(c->r[1]+0x00000008u,c->r[0]); // 801F50D8
  goto L_801F5108; // 801F50DC
L_801F50E0:;
  c->r[0]=rotl(c->r[31],8)&0x0000FF00u; // 801F50E0
  c->r[4]=c->r[1]+0x00000008u; // 801F50E4
  c->r[0]=c->r[3]+c->r[0]; // 801F50E8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801F50EC
  c->lr=0x801F50F4u; f_801F55DC(c); // 801F50F0
  c->r[0]=R16(c->r[1]+0x00000008u); // 801F50F4
  cmps(c,0,(int32_t)c->r[0],0); // 801F50F8
  if (!crb(c,2)) { goto L_801F5108; } // 801F50FC
  c->r[28]=0u+0xFFFFFFFCu; // 801F5100
  goto L_801F518C; // 801F5104
L_801F5108:;
  c->r[30]=c->r[30]+0x00000001u; // 801F5108
  goto L_801F5134; // 801F510C
L_801F5110:;
  cmpu(c,0,c->r[31],0x00000080u); // 801F5110
  if (!crb(c,0)) { goto L_801F5120; } // 801F5114
  W16(c->r[1]+0x00000008u,c->r[31]); // 801F5118
  goto L_801F5134; // 801F511C
L_801F5120:;
  if (!crb(c,2)) { goto L_801F512C; } // 801F5120
  W16(c->r[1]+0x00000008u,c->r[22]); // 801F5124
  goto L_801F5134; // 801F5128
L_801F512C:;
  c->r[28]=0u+0xFFFFFFFCu; // 801F512C
  goto L_801F518C; // 801F5130
L_801F5134:;
  c->r[3]=R16(c->r[1]+0x00000008u); // 801F5134
  cmps(c,0,(int32_t)c->r[3],0); // 801F5138
  if (!crb(c,2)) { goto L_801F5148; } // 801F513C
  c->r[28]=0u+0xFFFFFFFEu; // 801F5140
  goto L_801F518C; // 801F5144
L_801F5148:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5148
  cmps(c,0,(int32_t)c->r[0],0); // 801F514C
  if (crb(c,2)) { goto L_801F515C; } // 801F5150
  W16(c->r[23]+0x00000000u,c->r[3]); // 801F5154
  c->r[23]=c->r[23]+0x00000002u; // 801F5158
L_801F515C:;
  c->r[29]=c->r[29]+0x00000001u; // 801F515C
  c->r[25]=c->r[25]+0x00000001u; // 801F5160
  c->r[30]=c->r[30]+0x00000001u; // 801F5164
L_801F5168:;
  c->r[31]=R8(c->r[25]+0x00000000u); // 801F5168
  cmps(c,0,(int32_t)c->r[31],0); // 801F516C
  if (crb(c,2)) { goto L_801F518C; } // 801F5170
  c->r[3]=R32(c->r[1]+0x00000018u); // 801F5174
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801F5178
  if (crb(c,0)) { IRQCHK(c); goto L_801F4FAC; } // 801F517C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5180
  cmps(c,0,(int32_t)c->r[0],0); // 801F5184
  if (crb(c,2)) { IRQCHK(c); goto L_801F4FAC; } // 801F5188
L_801F518C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F518C
  if (crb(c,2)) { goto L_801F5198; } // 801F5190
  W32(c->r[26]+0x00000000u,c->r[30]); // 801F5194
L_801F5198:;
  cmps(c,0,(int32_t)c->r[24],0); // 801F5198
  if (crb(c,2)) { goto L_801F51A4; } // 801F519C
  W32(c->r[24]+0x00000000u,c->r[29]); // 801F51A0
L_801F51A4:;
  c->r[3]=c->r[28]|c->r[28]; // 801F51A4
L_801F51A8:;
  c->r[11]=c->r[1]+0x00000050u; // 801F51A8
  c->lr=0x801F51B0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F51AC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F51B0
  c->lr=c->r[0]; // 801F51B4
  c->r[1]=c->r[1]+0x00000050u; // 801F51B8
  return; // 801F51BC
}

// fn_801F51C0
void f_801F51C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F51C0
  c->r[0]=c->lr; // 801F51C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F51C8
  c->r[11]=c->r[1]+0x00000050u; // 801F51CC
  c->lr=0x801F51D4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F51D0
  c->r[25]=c->r[5]|c->r[5]; // 801F51D4
  c->r[8]=0u+0xFFFFFFFFu; // 801F51D8
  c->r[9]=0u+0x00000001u; // 801F51DC
  c->r[5]=0u-c->r[3]; // 801F51E0
  c->r[0]=0u-c->r[25]; // 801F51E4
  c->r[26]=c->r[6]|c->r[6]; // 801F51E8
  W32(c->r[1]+0x00000018u,c->r[8]); // 801F51EC
  c->r[5]=c->r[5]|c->r[3]; // 801F51F0
  c->r[23]=c->r[3]|c->r[3]; // 801F51F4
  c->r[0]=c->r[0]|c->r[25]; // 801F51F8
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F51FC
  c->r[27]=c->r[7]|c->r[7]; // 801F5200
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F5204
  c->r[24]=c->r[4]|c->r[4]; // 801F5208
  W32(c->r[1]+0x00000010u,c->r[9]); // 801F520C
  c->r[8]=c->r[26]|c->r[26]; // 801F5210
  c->r[5]=c->r[1]+0x00000014u; // 801F5214
  c->r[6]=c->r[1]+0x00000010u; // 801F5218
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F521C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F5220
  c->r[9]=c->r[1]+0x00000018u; // 801F5224
  c->r[10]=c->r[1]+0x0000000Cu; // 801F5228
  c->r[30]=0u+0x00000000u; // 801F522C
  c->r[29]=0u+0x00000000u; // 801F5230
  c->lr=0x801F5238u; f_801F0A30(c); // 801F5234
  cmps(c,0,(int32_t)c->r[3],0); // 801F5238
  c->r[28]=c->r[3]|c->r[3]; // 801F523C
  if (crb(c,2)) { goto L_801F5248; } // 801F5240
  goto L_801F54A8; // 801F5244
L_801F5248:;
  c->r[0]=R32(c->r[13]+0xFFFF95C8u); // 801F5248
  cmps(c,0,(int32_t)c->r[0],0); // 801F524C
  if (!crb(c,2)) { goto L_801F525C; } // 801F5250
  c->r[3]=0u+0xFFFFFFFEu; // 801F5254
  goto L_801F54A8; // 801F5258
L_801F525C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F525C
  cmps(c,0,(int32_t)c->r[0],0); // 801F5260
  if (crb(c,1)) { goto L_801F5274; } // 801F5264
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5268
  cmps(c,0,(int32_t)c->r[0],0); // 801F526C
  if (!crb(c,2)) { goto L_801F52B4; } // 801F5270
L_801F5274:;
  c->r[0]=R16(c->r[25]+0x00000000u); // 801F5274
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F5278
  if (!crb(c,2)) { goto L_801F528C; } // 801F527C
  c->r[30]=0u+0x00000001u; // 801F5280
  c->r[25]=c->r[25]+0x00000002u; // 801F5284
  goto L_801F52B4; // 801F5288
L_801F528C:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F528C
  if (!crb(c,2)) { goto L_801F52B4; } // 801F5290
  cmps(c,0,(int32_t)c->r[24],0); // 801F5294
  if (crb(c,2)) { goto L_801F52A4; } // 801F5298
  c->r[0]=0u+0x00000000u; // 801F529C
  W32(c->r[24]+0x00000000u,c->r[0]); // 801F52A0
L_801F52A4:;
  c->r[0]=0u+0x00000000u; // 801F52A4
  c->r[3]=0u+0xFFFFFFFCu; // 801F52A8
  W32(c->r[26]+0x00000000u,c->r[0]); // 801F52AC
  goto L_801F54A8; // 801F52B0
L_801F52B4:;
  c->r[22]=0u+0x00000000u; // 801F52B4
  goto L_801F5468; // 801F52B8
L_801F52BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F52BC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F52C0
  if (crb(c,0)) { goto L_801F52DC; } // 801F52C4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F52C8
  cmps(c,0,(int32_t)c->r[0],0); // 801F52CC
  if (crb(c,2)) { goto L_801F52DC; } // 801F52D0
  c->r[28]=0u+0xFFFFFFFFu; // 801F52D4
  goto L_801F548C; // 801F52D8
L_801F52DC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F52DC
  if (!crb(c,1)) { goto L_801F5388; } // 801F52E0
  c->r[0]=c->r[3]-c->r[30]; // 801F52E4
  c->r[3]=c->r[31]|c->r[31]; // 801F52E8
  cmps(c,0,(int32_t)c->r[0],1); // 801F52EC
  c->r[4]=0u+0x00000000u; // 801F52F0
  if (crb(c,1)) { goto L_801F5304; } // 801F52F4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F52F8
  cmps(c,0,(int32_t)c->r[0],0); // 801F52FC
  if (!crb(c,2)) { goto L_801F5308; } // 801F5300
L_801F5304:;
  c->r[4]=0u+0x00000001u; // 801F5304
L_801F5308:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F5308
  if (crb(c,2)) { goto L_801F5318; } // 801F530C
  c->r[4]=R16(c->r[25]+0x00000002u); // 801F5310
  goto L_801F531C; // 801F5314
L_801F5318:;
  c->r[4]=0u+0x00000000u; // 801F5318
L_801F531C:;
  c->lr=0x801F5320u; f_801F0B28(c); // 801F531C
  cmps(c,0,(int32_t)c->r[3],0); // 801F5320
  c->r[21]=c->r[3]|c->r[3]; // 801F5324
  if (!crb(c,1)) { goto L_801F5388; } // 801F5328
  c->r[6]=R32(c->r[1]+0x00000010u); // 801F532C
  c->r[3]=c->r[23]|c->r[23]; // 801F5330
  c->r[5]=c->r[27]|c->r[27]; // 801F5334
  c->r[4]=0u+0x00000001u; // 801F5338
  c->lr=0x801F5340u; f_801F0B5C(c); // 801F533C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5340
  c->r[0]=c->r[0]-c->r[29]; // 801F5344
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F5348
  if (!crb(c,0)) { goto L_801F5364; } // 801F534C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5350
  cmps(c,0,(int32_t)c->r[0],0); // 801F5354
  if (crb(c,2)) { goto L_801F5364; } // 801F5358
  c->r[28]=0u+0xFFFFFFFFu; // 801F535C
  goto L_801F548C; // 801F5360
L_801F5364:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5364
  c->r[4]=rotl(c->r[21],1)&0xFFFFFFFEu; // 801F5368
  c->r[25]=c->r[25]+c->r[4]; // 801F536C
  c->r[30]=c->r[30]+c->r[21]; // 801F5370
  cmps(c,0,(int32_t)c->r[0],0); // 801F5374
  c->r[29]=c->r[29]+c->r[3]; // 801F5378
  if (crb(c,2)) { goto L_801F5468; } // 801F537C
  c->r[23]=c->r[23]+c->r[3]; // 801F5380
  goto L_801F5468; // 801F5384
L_801F5388:;
  cmpu(c,0,c->r[31],0x00000080u); // 801F5388
  if (!crb(c,0)) { goto L_801F539C; } // 801F538C
  W8(c->r[1]+0x00000008u,c->r[31]); // 801F5390
  W8(c->r[1]+0x00000009u,c->r[22]); // 801F5394
  goto L_801F53E8; // 801F5398
L_801F539C:;
  cmpu(c,0,c->r[31],0x0000D800u); // 801F539C
  if (crb(c,0)) { goto L_801F53AC; } // 801F53A0
  cmpu(c,0,c->r[31],0x0000F900u); // 801F53A4
  if (crb(c,0)) { goto L_801F53E0; } // 801F53A8
L_801F53AC:;
  c->r[4]=c->r[31]|c->r[31]; // 801F53AC
  c->r[3]=c->r[1]+0x00000008u; // 801F53B0
  c->lr=0x801F53B8u; f_801F54C0(c); // 801F53B4
  c->r[0]=R8(c->r[1]+0x00000008u); // 801F53B8
  cmps(c,0,(int32_t)c->r[0],0); // 801F53BC
  if (!crb(c,2)) { goto L_801F53E8; } // 801F53C0
  c->r[0]=R8(c->r[1]+0x00000009u); // 801F53C4
  cmps(c,0,(int32_t)c->r[0],0); // 801F53C8
  if (!crb(c,2)) { goto L_801F53E8; } // 801F53CC
  c->r[4]=c->r[31]|c->r[31]; // 801F53D0
  c->r[3]=c->r[1]+0x00000008u; // 801F53D4
  c->lr=0x801F53DCu; f_801F5698(c); // 801F53D8
  goto L_801F53E8; // 801F53DC
L_801F53E0:;
  W8(c->r[1]+0x00000009u,c->r[22]); // 801F53E0
  W8(c->r[1]+0x00000008u,c->r[22]); // 801F53E4
L_801F53E8:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801F53E8
  c->r[4]=R8(c->r[1]+0x00000009u); // 801F53EC
  cmps(c,0,(int32_t)c->r[3],0); // 801F53F0
  if (!crb(c,2)) { goto L_801F5400; } // 801F53F4
  c->r[28]=0u+0xFFFFFFFEu; // 801F53F8
  goto L_801F548C; // 801F53FC
L_801F5400:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F5400
  if (!crb(c,2)) { goto L_801F5420; } // 801F5404
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5408
  cmps(c,0,(int32_t)c->r[0],0); // 801F540C
  if (crb(c,2)) { goto L_801F545C; } // 801F5410
  W8(c->r[23]+0x00000000u,c->r[3]); // 801F5414
  c->r[23]=c->r[23]+0x00000001u; // 801F5418
  goto L_801F545C; // 801F541C
L_801F5420:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5420
  cmps(c,0,(int32_t)c->r[0],0); // 801F5424
  if (crb(c,2)) { goto L_801F5458; } // 801F5428
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F542C
  c->r[0]=c->r[0]-c->r[29]; // 801F5430
  cmps(c,0,(int32_t)c->r[0],2); // 801F5434
  if (!crb(c,0)) { goto L_801F5444; } // 801F5438
  c->r[28]=0u+0xFFFFFFFFu; // 801F543C
  goto L_801F548C; // 801F5440
L_801F5444:;
  W8(c->r[23]+0x00000000u,c->r[3]); // 801F5444
  c->r[29]=c->r[29]+0x00000001u; // 801F5448
  W8(c->r[23]+0x00000001u,c->r[4]); // 801F544C
  c->r[23]=c->r[23]+0x00000002u; // 801F5450
  goto L_801F545C; // 801F5454
L_801F5458:;
  c->r[29]=c->r[29]+0x00000001u; // 801F5458
L_801F545C:;
  c->r[29]=c->r[29]+0x00000001u; // 801F545C
  c->r[25]=c->r[25]+0x00000002u; // 801F5460
  c->r[30]=c->r[30]+0x00000001u; // 801F5464
L_801F5468:;
  c->r[31]=R16(c->r[25]+0x00000000u); // 801F5468
  cmps(c,0,(int32_t)c->r[31],0); // 801F546C
  if (crb(c,2)) { goto L_801F548C; } // 801F5470
  c->r[3]=R32(c->r[1]+0x00000018u); // 801F5474
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801F5478
  if (crb(c,0)) { IRQCHK(c); goto L_801F52BC; } // 801F547C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5480
  cmps(c,0,(int32_t)c->r[0],0); // 801F5484
  if (crb(c,2)) { IRQCHK(c); goto L_801F52BC; } // 801F5488
L_801F548C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801F548C
  if (crb(c,2)) { goto L_801F5498; } // 801F5490
  W32(c->r[26]+0x00000000u,c->r[30]); // 801F5494
L_801F5498:;
  cmps(c,0,(int32_t)c->r[24],0); // 801F5498
  if (crb(c,2)) { goto L_801F54A4; } // 801F549C
  W32(c->r[24]+0x00000000u,c->r[29]); // 801F54A0
L_801F54A4:;
  c->r[3]=c->r[28]|c->r[28]; // 801F54A4
L_801F54A8:;
  c->r[11]=c->r[1]+0x00000050u; // 801F54A8
  c->lr=0x801F54B0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F54AC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F54B0
  c->lr=c->r[0]; // 801F54B4
  c->r[1]=c->r[1]+0x00000050u; // 801F54B8
  return; // 801F54BC
}

// fn_801F54C0
void f_801F54C0(Ctx* __restrict c) {
  c->r[7]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[7]); // 801F54C0
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801F54C4
  if (crb(c,2)) { goto L_801F54E4; } // 801F54C8
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801F54CC
  c->r[4]=0u+0x80300000u; // 801F54D0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F54D4
  c->r[4]=c->r[4]+0xFFFF81A8u; // 801F54D8
  c->r[8]=R16(c->r[4]+c->r[0]); // 801F54DC
  goto L_801F54E8; // 801F54E0
L_801F54E4:;
  c->r[8]=0u+0x00000000u; // 801F54E4
L_801F54E8:;
  c->r[5]=0u+0x80300000u; // 801F54E8
  c->r[4]=0u+0x802F0000u; // 801F54EC
  c->r[0]=rotl(c->r[7],1)&0x000001FEu; // 801F54F0
  c->r[5]=c->r[5]+0xFFFF81A8u; // 801F54F4
  c->r[4]=c->r[4]+0x00002A48u; // 801F54F8
  c->r[5]=R16(c->r[5]+c->r[0]); // 801F54FC
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 801F5500
  goto L_801F5560; // 801F5504
L_801F5508:;
  c->r[5]=c->r[8]+c->r[7]; // 801F5508
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801F550C
  c->r[0]=c->r[0]+c->r[5]; // 801F5510
  c->r[9]=sraw(c,c->r[0],1); // 801F5514
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801F5518
  c->r[0]=c->r[0]-c->r[9]; // 801F551C
  c->r[5]=c->r[4]+c->r[0]; // 801F5520
  c->r[10]=R8(c->r[4]+c->r[0]); // 801F5524
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F5528
  cmpu(c,0,c->r[0],c->r[6]); // 801F552C
  if (!crb(c,2)) { goto L_801F5548; } // 801F5530
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F5534
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F5538
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F553C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F5540
  return; // 801F5544
L_801F5548:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 801F5548
  if (!crb(c,1)) { goto L_801F5558; } // 801F554C
  c->r[7]=c->r[9]|c->r[9]; // 801F5550
  goto L_801F5560; // 801F5554
L_801F5558:;
  if (!crb(c,0)) { goto L_801F5560; } // 801F5558
  c->r[8]=c->r[9]|c->r[9]; // 801F555C
L_801F5560:;
  c->r[0]=c->r[7]-c->r[8]; // 801F5560
  cmps(c,0,(int32_t)c->r[0],1); // 801F5564
  if (crb(c,1)) { IRQCHK(c); goto L_801F5508; } // 801F5568
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801F556C
  c->r[4]=0u+0x802F0000u; // 801F5570
  c->r[0]=c->r[0]-c->r[8]; // 801F5574
  c->r[4]=c->r[4]+0x00002A48u; // 801F5578
  c->r[5]=c->r[4]+c->r[0]; // 801F557C
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F5580
  cmpu(c,0,c->r[0],c->r[6]); // 801F5584
  if (!crb(c,2)) { goto L_801F55A0; } // 801F5588
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F558C
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F5590
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F5594
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F5598
  return; // 801F559C
L_801F55A0:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801F55A0
  c->r[0]=c->r[0]-c->r[7]; // 801F55A4
  c->r[5]=c->r[4]+c->r[0]; // 801F55A8
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F55AC
  cmpu(c,0,c->r[0],c->r[6]); // 801F55B0
  if (!crb(c,2)) { goto L_801F55CC; } // 801F55B4
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F55B8
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F55BC
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F55C0
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F55C4
  return; // 801F55C8
L_801F55CC:;
  c->r[0]=0u+0x00000000u; // 801F55CC
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F55D0
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F55D4
  return; // 801F55D8
}

// fn_801F55DC
void f_801F55DC(Ctx* __restrict c) {
  c->r[5]=0u+0x80300000u; // 801F55DC
  c->r[7]=0u+0x00000000u; // 801F55E0
  c->r[5]=c->r[5]+0xFFFF83A8u; // 801F55E4
  c->r[8]=0u+0x000000F8u; // 801F55E8
  goto L_801F5638; // 801F55EC
L_801F55F0:;
  c->r[6]=c->r[7]+c->r[8]; // 801F55F0
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 801F55F4
  c->r[0]=c->r[0]+c->r[6]; // 801F55F8
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801F55FC
  c->r[9]=R16(c->r[5]+c->r[6]); // 801F5600
  c->r[0]=sraw(c,c->r[0],1); // 801F5604
  cmpu(c,0,c->r[3],c->r[9]); // 801F5608
  if (!crb(c,2)) { goto L_801F5620; } // 801F560C
  c->r[3]=c->r[5]+c->r[6]; // 801F5610
  c->r[0]=R16(c->r[3]+0x00000002u); // 801F5614
  W16(c->r[4]+0x00000000u,c->r[0]); // 801F5618
  return; // 801F561C
L_801F5620:;
  cmpu(c,0,c->r[9],c->r[3]); // 801F5620
  if (!crb(c,1)) { goto L_801F5630; } // 801F5624
  c->r[8]=c->r[0]|c->r[0]; // 801F5628
  goto L_801F5638; // 801F562C
L_801F5630:;
  if (!crb(c,0)) { goto L_801F5638; } // 801F5630
  c->r[7]=c->r[0]|c->r[0]; // 801F5634
L_801F5638:;
  c->r[0]=c->r[8]-c->r[7]; // 801F5638
  cmps(c,0,(int32_t)c->r[0],1); // 801F563C
  if (crb(c,1)) { IRQCHK(c); goto L_801F55F0; } // 801F5640
  c->r[5]=0u+0x80300000u; // 801F5644
  c->r[6]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801F5648
  c->r[5]=c->r[5]+0xFFFF83A8u; // 801F564C
  c->r[0]=R16(c->r[5]+c->r[6]); // 801F5650
  cmpu(c,0,c->r[3],c->r[0]); // 801F5654
  if (!crb(c,2)) { goto L_801F566C; } // 801F5658
  c->r[3]=c->r[5]+c->r[6]; // 801F565C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801F5660
  W16(c->r[4]+0x00000000u,c->r[0]); // 801F5664
  return; // 801F5668
L_801F566C:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801F566C
  c->r[0]=R16(c->r[5]+c->r[6]); // 801F5670
  cmpu(c,0,c->r[3],c->r[0]); // 801F5674
  if (!crb(c,2)) { goto L_801F568C; } // 801F5678
  c->r[3]=c->r[5]+c->r[6]; // 801F567C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801F5680
  W16(c->r[4]+0x00000000u,c->r[0]); // 801F5684
  return; // 801F5688
L_801F568C:;
  c->r[0]=0u+0x00000000u; // 801F568C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801F5690
  return; // 801F5694
}

// fn_801F5698
void f_801F5698(Ctx* __restrict c) {
  c->r[6]=0u+0x80300000u; // 801F5698
  c->r[8]=0u+0x00000000u; // 801F569C
  c->r[6]=c->r[6]+0xFFFF83A8u; // 801F56A0
  c->r[9]=0u+0x000000F8u; // 801F56A4
  goto L_801F56F4; // 801F56A8
L_801F56AC:;
  c->r[5]=c->r[8]+c->r[9]; // 801F56AC
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801F56B0
  c->r[0]=c->r[0]+c->r[5]; // 801F56B4
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801F56B8
  c->r[5]=c->r[6]+c->r[7]; // 801F56BC
  c->r[0]=sraw(c,c->r[0],1); // 801F56C0
  c->r[5]=R16(c->r[5]+0x00000002u); // 801F56C4
  cmpu(c,0,c->r[4],c->r[5]); // 801F56C8
  if (!crb(c,2)) { goto L_801F56DC; } // 801F56CC
  c->r[0]=R16(c->r[6]+c->r[7]); // 801F56D0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801F56D4
  return; // 801F56D8
L_801F56DC:;
  cmpu(c,0,c->r[5],c->r[4]); // 801F56DC
  if (!crb(c,1)) { goto L_801F56EC; } // 801F56E0
  c->r[9]=c->r[0]|c->r[0]; // 801F56E4
  goto L_801F56F4; // 801F56E8
L_801F56EC:;
  if (!crb(c,0)) { goto L_801F56F4; } // 801F56EC
  c->r[8]=c->r[0]|c->r[0]; // 801F56F0
L_801F56F4:;
  c->r[0]=c->r[9]-c->r[8]; // 801F56F4
  cmps(c,0,(int32_t)c->r[0],1); // 801F56F8
  if (crb(c,1)) { IRQCHK(c); goto L_801F56AC; } // 801F56FC
  c->r[6]=0u+0x80300000u; // 801F5700
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801F5704
  c->r[6]=c->r[6]+0xFFFF83A8u; // 801F5708
  c->r[5]=c->r[6]+c->r[7]; // 801F570C
  c->r[0]=R16(c->r[5]+0x00000002u); // 801F5710
  cmpu(c,0,c->r[4],c->r[0]); // 801F5714
  if (!crb(c,2)) { goto L_801F5728; } // 801F5718
  c->r[0]=R16(c->r[6]+c->r[7]); // 801F571C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801F5720
  return; // 801F5724
L_801F5728:;
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801F5728
  c->r[5]=c->r[6]+c->r[7]; // 801F572C
  c->r[0]=R16(c->r[5]+0x00000002u); // 801F5730
  cmpu(c,0,c->r[4],c->r[0]); // 801F5734
  if (!crb(c,2)) { goto L_801F5748; } // 801F5738
  c->r[0]=R16(c->r[6]+c->r[7]); // 801F573C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801F5740
  return; // 801F5744
L_801F5748:;
  c->r[0]=0u+0x00000000u; // 801F5748
  W16(c->r[3]+0x00000000u,c->r[0]); // 801F574C
  return; // 801F5750
}

// fn_801F5754
void f_801F5754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5754
  c->r[0]=c->lr; // 801F5758
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F575C
  c->r[11]=c->r[1]+0x00000050u; // 801F5760
  c->lr=0x801F5768u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F5764
  c->r[21]=c->r[5]|c->r[5]; // 801F5768
  c->r[8]=0u+0xFFFFFFFFu; // 801F576C
  c->r[9]=0u+0x00000001u; // 801F5770
  c->r[5]=0u-c->r[3]; // 801F5774
  c->r[0]=0u-c->r[21]; // 801F5778
  c->r[22]=c->r[6]|c->r[6]; // 801F577C
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F5780
  c->r[5]=c->r[5]|c->r[3]; // 801F5784
  c->r[19]=c->r[3]|c->r[3]; // 801F5788
  c->r[0]=c->r[0]|c->r[21]; // 801F578C
  W32(c->r[1]+0x00000010u,c->r[8]); // 801F5790
  c->r[23]=c->r[7]|c->r[7]; // 801F5794
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F5798
  c->r[20]=c->r[4]|c->r[4]; // 801F579C
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F57A0
  c->r[8]=c->r[22]|c->r[22]; // 801F57A4
  c->r[5]=c->r[1]+0x00000010u; // 801F57A8
  c->r[6]=c->r[1]+0x0000000Cu; // 801F57AC
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F57B0
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F57B4
  c->r[9]=c->r[1]+0x00000014u; // 801F57B8
  c->r[10]=c->r[1]+0x00000008u; // 801F57BC
  c->r[27]=0u+0x00000000u; // 801F57C0
  c->r[26]=0u+0x00000000u; // 801F57C4
  c->lr=0x801F57CCu; f_801F0A30(c); // 801F57C8
  cmps(c,0,(int32_t)c->r[3],0); // 801F57CC
  c->r[25]=c->r[3]|c->r[3]; // 801F57D0
  if (crb(c,2)) { goto L_801F57DC; } // 801F57D4
  goto L_801F5B30; // 801F57D8
L_801F57DC:;
  c->r[0]=R32(c->r[13]+0xFFFF95C0u); // 801F57DC
  cmps(c,0,(int32_t)c->r[0],0); // 801F57E0
  if (!crb(c,2)) { goto L_801F57FC; } // 801F57E4
  c->r[0]=R32(c->r[13]+0xFFFF95C4u); // 801F57E8
  cmps(c,0,(int32_t)c->r[0],0); // 801F57EC
  if (!crb(c,2)) { goto L_801F57FC; } // 801F57F0
  c->r[3]=0u+0xFFFFFFFEu; // 801F57F4
  goto L_801F5B30; // 801F57F8
L_801F57FC:;
  c->r[18]=0u+0x80300000u; // 801F57FC
  c->r[30]=0u+0x80300000u; // 801F5800
  c->r[29]=0u+0x80300000u; // 801F5804
  c->r[31]=0u+0x00010000u; // 801F5808
  c->r[18]=c->r[18]+0x00003498u; // 801F580C
  c->r[30]=c->r[30]+0xFFFFA4E8u; // 801F5810
  c->r[29]=c->r[29]+0xFFFF8788u; // 801F5814
  goto L_801F5AF0; // 801F5818
L_801F581C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F581C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801F5820
  if (crb(c,0)) { goto L_801F583C; } // 801F5824
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5828
  cmps(c,0,(int32_t)c->r[0],0); // 801F582C
  if (crb(c,2)) { goto L_801F583C; } // 801F5830
  c->r[25]=0u+0xFFFFFFFFu; // 801F5834
  goto L_801F5B14; // 801F5838
L_801F583C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801F583C
  if (!crb(c,1)) { goto L_801F58E8; } // 801F5840
  c->r[0]=c->r[3]-c->r[27]; // 801F5844
  c->r[3]=c->r[24]|c->r[24]; // 801F5848
  cmps(c,0,(int32_t)c->r[0],1); // 801F584C
  c->r[4]=0u+0x00000000u; // 801F5850
  if (crb(c,1)) { goto L_801F5864; } // 801F5854
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F5858
  cmps(c,0,(int32_t)c->r[0],0); // 801F585C
  if (!crb(c,2)) { goto L_801F5868; } // 801F5860
L_801F5864:;
  c->r[4]=0u+0x00000001u; // 801F5864
L_801F5868:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F5868
  if (crb(c,2)) { goto L_801F5878; } // 801F586C
  c->r[4]=R8(c->r[21]+0x00000001u); // 801F5870
  goto L_801F587C; // 801F5874
L_801F5878:;
  c->r[4]=0u+0x00000000u; // 801F5878
L_801F587C:;
  c->lr=0x801F5880u; f_801F0B28(c); // 801F587C
  cmps(c,0,(int32_t)c->r[3],0); // 801F5880
  c->r[28]=c->r[3]|c->r[3]; // 801F5884
  if (!crb(c,1)) { goto L_801F58E8; } // 801F5888
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801F588C
  c->r[3]=c->r[19]|c->r[19]; // 801F5890
  c->r[5]=c->r[23]|c->r[23]; // 801F5894
  c->r[4]=0u+0x00000002u; // 801F5898
  c->lr=0x801F58A0u; f_801F0B5C(c); // 801F589C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F58A0
  c->r[0]=c->r[0]-c->r[26]; // 801F58A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F58A8
  if (!crb(c,0)) { goto L_801F58C4; } // 801F58AC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F58B0
  cmps(c,0,(int32_t)c->r[0],0); // 801F58B4
  if (crb(c,2)) { goto L_801F58C4; } // 801F58B8
  c->r[25]=0u+0xFFFFFFFFu; // 801F58BC
  goto L_801F5B14; // 801F58C0
L_801F58C4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F58C4
  c->r[21]=c->r[21]+c->r[28]; // 801F58C8
  c->r[27]=c->r[27]+c->r[28]; // 801F58CC
  c->r[26]=c->r[26]+c->r[3]; // 801F58D0
  cmps(c,0,(int32_t)c->r[0],0); // 801F58D4
  if (crb(c,2)) { goto L_801F5AF0; } // 801F58D8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F58DC
  c->r[19]=c->r[19]+c->r[0]; // 801F58E0
  goto L_801F5AF0; // 801F58E4
L_801F58E8:;
  cmpu(c,0,c->r[24],0x00000081u); // 801F58E8
  if (crb(c,0)) { goto L_801F5AA0; } // 801F58EC
  cmpu(c,0,c->r[24],0x000000FDu); // 801F58F0
  if (crb(c,1)) { goto L_801F5AA0; } // 801F58F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F58F8
  c->r[0]=c->r[0]-c->r[27]; // 801F58FC
  cmps(c,0,(int32_t)c->r[0],2); // 801F5900
  if (!crb(c,0)) { goto L_801F5914; } // 801F5904
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F5908
  cmps(c,0,(int32_t)c->r[0],0); // 801F590C
  if (!crb(c,2)) { goto L_801F5B14; } // 801F5910
L_801F5914:;
  cmpu(c,0,c->r[24],0x000000A1u); // 801F5914
  {uint32_t ea=c->r[21]+0x00000001u; c->r[4]=R8(ea); c->r[21]=ea;} // 801F5918
  if (crb(c,0)) { goto L_801F5954; } // 801F591C
  cmpu(c,0,c->r[24],0x000000C8u); // 801F5920
  if (crb(c,1)) { goto L_801F5954; } // 801F5924
  cmpu(c,0,c->r[4],0x000000A1u); // 801F5928
  if (crb(c,0)) { goto L_801F5954; } // 801F592C
  cmpu(c,0,c->r[4],0x000000FEu); // 801F5930
  if (crb(c,1)) { goto L_801F5954; } // 801F5934
  c->r[0]=c->r[24]+0xFFFFFF5Fu; // 801F5938
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)94); // 801F593C
  c->r[3]=c->r[4]+c->r[0]; // 801F5940
  c->r[0]=c->r[3]+0xFFFFFF5Fu; // 801F5944
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F5948
  c->r[24]=R16(c->r[29]+c->r[0]); // 801F594C
  goto L_801F5A98; // 801F5950
L_801F5954:;
  cmpu(c,0,c->r[24],0x000000CAu); // 801F5954
  if (crb(c,0)) { goto L_801F599C; } // 801F5958
  cmpu(c,0,c->r[4],0x000000A1u); // 801F595C
  if (crb(c,0)) { goto L_801F599C; } // 801F5960
  cmpu(c,0,c->r[4],0x000000FEu); // 801F5964
  if (crb(c,1)) { goto L_801F599C; } // 801F5968
  c->r[0]=R32(c->r[13]+0xFFFF95C0u); // 801F596C
  cmps(c,0,(int32_t)c->r[0],0); // 801F5970
  if (!crb(c,2)) { goto L_801F5980; } // 801F5974
  c->r[25]=0u+0xFFFFFFFEu; // 801F5978
  goto L_801F5B14; // 801F597C
L_801F5980:;
  c->r[0]=c->r[24]+0xFFFFFF36u; // 801F5980
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)94); // 801F5984
  c->r[3]=c->r[4]+c->r[0]; // 801F5988
  c->r[0]=c->r[3]+0xFFFFFF5Fu; // 801F598C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F5990
  c->r[24]=R16(c->r[30]+c->r[0]); // 801F5994
  goto L_801F5A98; // 801F5998
L_801F599C:;
  cmpu(c,0,c->r[4],0x00000041u); // 801F599C
  if (crb(c,0)) { goto L_801F59AC; } // 801F59A0
  cmpu(c,0,c->r[4],0x0000005Au); // 801F59A4
  if (!crb(c,1)) { goto L_801F59CC; } // 801F59A8
L_801F59AC:;
  cmpu(c,0,c->r[4],0x00000061u); // 801F59AC
  if (crb(c,0)) { goto L_801F59BC; } // 801F59B0
  cmpu(c,0,c->r[4],0x0000007Au); // 801F59B4
  if (!crb(c,1)) { goto L_801F59CC; } // 801F59B8
L_801F59BC:;
  cmpu(c,0,c->r[4],0x00000081u); // 801F59BC
  if (crb(c,0)) { goto L_801F5A90; } // 801F59C0
  cmpu(c,0,c->r[4],0x000000FEu); // 801F59C4
  if (crb(c,1)) { goto L_801F5A90; } // 801F59C8
L_801F59CC:;
  c->r[0]=R32(c->r[13]+0xFFFF95C4u); // 801F59CC
  cmps(c,0,(int32_t)c->r[0],0); // 801F59D0
  if (!crb(c,2)) { goto L_801F59E0; } // 801F59D4
  c->r[25]=0u+0xFFFFFFFEu; // 801F59D8
  goto L_801F5B14; // 801F59DC
L_801F59E0:;
  cmpu(c,0,c->r[24],0x000000A1u); // 801F59E0
  if (crb(c,0)) { goto L_801F5A44; } // 801F59E4
  cmpu(c,0,c->r[4],0x000000A1u); // 801F59E8
  if (!crb(c,0)) { goto L_801F5A44; } // 801F59EC
  c->r[3]=rotl(c->r[24],8)&0x0000FF00u; // 801F59F0
  c->r[0]=c->r[31]+0xFFFFC652u; // 801F59F4
  c->r[3]=c->r[4]+c->r[3]; // 801F59F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801F59FC
  if (crb(c,1)) { goto L_801F5A44; } // 801F5A00
  c->r[0]=c->r[24]+0xFFFFFF5Fu; // 801F5A04
  cmpu(c,0,c->r[4],0x0000005Au); // 801F5A08
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)84); // 801F5A0C
  c->r[0]=c->r[3]+0x00001640u; // 801F5A10
  if (crb(c,1)) { goto L_801F5A24; } // 801F5A14
  c->r[3]=c->r[4]+c->r[0]; // 801F5A18
  c->r[0]=c->r[3]+0xFFFFFFBFu; // 801F5A1C
  goto L_801F5A38; // 801F5A20
L_801F5A24:;
  cmpu(c,0,c->r[4],0x0000007Au); // 801F5A24
  c->r[3]=c->r[4]+c->r[0]; // 801F5A28
  c->r[0]=c->r[3]+0xFFFFFFB3u; // 801F5A2C
  if (crb(c,1)) { goto L_801F5A38; } // 801F5A30
  c->r[0]=c->r[3]+0xFFFFFFB9u; // 801F5A34
L_801F5A38:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F5A38
  c->r[24]=R16(c->r[18]+c->r[0]); // 801F5A3C
  goto L_801F5A98; // 801F5A40
L_801F5A44:;
  cmpu(c,0,c->r[24],0x000000A1u); // 801F5A44
  if (!crb(c,0)) { goto L_801F5A88; } // 801F5A48
  c->r[0]=c->r[24]+0xFFFFFF7Fu; // 801F5A4C
  cmpu(c,0,c->r[4],0x0000005Au); // 801F5A50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)178); // 801F5A54
  if (crb(c,1)) { goto L_801F5A68; } // 801F5A58
  c->r[3]=c->r[4]+c->r[0]; // 801F5A5C
  c->r[0]=c->r[3]+0xFFFFFFBFu; // 801F5A60
  goto L_801F5A7C; // 801F5A64
L_801F5A68:;
  cmpu(c,0,c->r[4],0x0000007Au); // 801F5A68
  c->r[3]=c->r[4]+c->r[0]; // 801F5A6C
  c->r[0]=c->r[3]+0xFFFFFFB3u; // 801F5A70
  if (crb(c,1)) { goto L_801F5A7C; } // 801F5A74
  c->r[0]=c->r[3]+0xFFFFFFB9u; // 801F5A78
L_801F5A7C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F5A7C
  c->r[24]=R16(c->r[18]+c->r[0]); // 801F5A80
  goto L_801F5A98; // 801F5A84
L_801F5A88:;
  c->r[24]=0u+0x00000000u; // 801F5A88
  goto L_801F5A98; // 801F5A8C
L_801F5A90:;
  c->r[25]=0u+0xFFFFFFFCu; // 801F5A90
  goto L_801F5B14; // 801F5A94
L_801F5A98:;
  c->r[27]=c->r[27]+0x00000001u; // 801F5A98
  goto L_801F5AC0; // 801F5A9C
L_801F5AA0:;
  cmpu(c,0,c->r[24],0x00000080u); // 801F5AA0
  if (!crb(c,0)) { goto L_801F5AAC; } // 801F5AA4
  goto L_801F5AC0; // 801F5AA8
L_801F5AAC:;
  if (!crb(c,2)) { goto L_801F5AB8; } // 801F5AAC
  c->r[24]=0u+0x000020ACu; // 801F5AB0
  goto L_801F5AC0; // 801F5AB4
L_801F5AB8:;
  c->r[25]=0u+0xFFFFFFFCu; // 801F5AB8
  goto L_801F5B14; // 801F5ABC
L_801F5AC0:;
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801F5AC0
  if (!crb(c,2)) { goto L_801F5AD0; } // 801F5AC4
  c->r[25]=0u+0xFFFFFFFEu; // 801F5AC8
  goto L_801F5B14; // 801F5ACC
L_801F5AD0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5AD0
  cmps(c,0,(int32_t)c->r[0],0); // 801F5AD4
  if (crb(c,2)) { goto L_801F5AE4; } // 801F5AD8
  W16(c->r[19]+0x00000000u,c->r[24]); // 801F5ADC
  c->r[19]=c->r[19]+0x00000002u; // 801F5AE0
L_801F5AE4:;
  c->r[26]=c->r[26]+0x00000001u; // 801F5AE4
  c->r[21]=c->r[21]+0x00000001u; // 801F5AE8
  c->r[27]=c->r[27]+0x00000001u; // 801F5AEC
L_801F5AF0:;
  c->r[24]=R8(c->r[21]+0x00000000u); // 801F5AF0
  cmps(c,0,(int32_t)c->r[24],0); // 801F5AF4
  if (crb(c,2)) { goto L_801F5B14; } // 801F5AF8
  c->r[3]=R32(c->r[1]+0x00000014u); // 801F5AFC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 801F5B00
  if (crb(c,0)) { IRQCHK(c); goto L_801F581C; } // 801F5B04
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F5B08
  cmps(c,0,(int32_t)c->r[0],0); // 801F5B0C
  if (crb(c,2)) { IRQCHK(c); goto L_801F581C; } // 801F5B10
L_801F5B14:;
  cmps(c,0,(int32_t)c->r[22],0); // 801F5B14
  if (crb(c,2)) { goto L_801F5B20; } // 801F5B18
  W32(c->r[22]+0x00000000u,c->r[27]); // 801F5B1C
L_801F5B20:;
  cmps(c,0,(int32_t)c->r[20],0); // 801F5B20
  if (crb(c,2)) { goto L_801F5B2C; } // 801F5B24
  W32(c->r[20]+0x00000000u,c->r[26]); // 801F5B28
L_801F5B2C:;
  c->r[3]=c->r[25]|c->r[25]; // 801F5B2C
L_801F5B30:;
  c->r[11]=c->r[1]+0x00000050u; // 801F5B30
  c->lr=0x801F5B38u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F5B34
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F5B38
  c->lr=c->r[0]; // 801F5B3C
  c->r[1]=c->r[1]+0x00000050u; // 801F5B40
  return; // 801F5B44
}

// fn_801F5B48
void f_801F5B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5B48
  c->r[0]=c->lr; // 801F5B4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F5B50
  c->r[11]=c->r[1]+0x00000050u; // 801F5B54
  c->lr=0x801F5B5Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F5B58
  c->r[26]=c->r[5]|c->r[5]; // 801F5B5C
  c->r[8]=0u+0xFFFFFFFFu; // 801F5B60
  c->r[9]=0u+0x00000001u; // 801F5B64
  c->r[5]=0u-c->r[3]; // 801F5B68
  c->r[0]=0u-c->r[26]; // 801F5B6C
  c->r[27]=c->r[6]|c->r[6]; // 801F5B70
  W32(c->r[1]+0x00000018u,c->r[8]); // 801F5B74
  c->r[5]=c->r[5]|c->r[3]; // 801F5B78
  c->r[24]=c->r[3]|c->r[3]; // 801F5B7C
  c->r[0]=c->r[0]|c->r[26]; // 801F5B80
  W32(c->r[1]+0x00000014u,c->r[8]); // 801F5B84
  c->r[28]=c->r[7]|c->r[7]; // 801F5B88
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 801F5B8C
  c->r[25]=c->r[4]|c->r[4]; // 801F5B90
  W32(c->r[1]+0x00000010u,c->r[9]); // 801F5B94
  c->r[8]=c->r[27]|c->r[27]; // 801F5B98
  c->r[5]=c->r[1]+0x00000014u; // 801F5B9C
  c->r[6]=c->r[1]+0x00000010u; // 801F5BA0
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801F5BA4
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F5BA8
  c->r[9]=c->r[1]+0x00000018u; // 801F5BAC
  c->r[10]=c->r[1]+0x0000000Cu; // 801F5BB0
  c->r[31]=0u+0x00000000u; // 801F5BB4
  c->r[30]=0u+0x00000000u; // 801F5BB8
  c->lr=0x801F5BC0u; f_801F0A30(c); // 801F5BBC
  cmps(c,0,(int32_t)c->r[3],0); // 801F5BC0
  c->r[29]=c->r[3]|c->r[3]; // 801F5BC4
  if (crb(c,2)) { goto L_801F5BD0; } // 801F5BC8
  goto L_801F5DE4; // 801F5BCC
L_801F5BD0:;
  c->r[0]=R32(c->r[13]+0xFFFF95C0u); // 801F5BD0
  cmps(c,0,(int32_t)c->r[0],0); // 801F5BD4
  if (!crb(c,2)) { goto L_801F5BF0; } // 801F5BD8
  c->r[0]=R32(c->r[13]+0xFFFF95C4u); // 801F5BDC
  cmps(c,0,(int32_t)c->r[0],0); // 801F5BE0
  if (!crb(c,2)) { goto L_801F5BF0; } // 801F5BE4
  c->r[3]=0u+0xFFFFFFFEu; // 801F5BE8
  goto L_801F5DE4; // 801F5BEC
L_801F5BF0:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801F5BF0
  cmps(c,0,(int32_t)c->r[0],0); // 801F5BF4
  if (crb(c,1)) { goto L_801F5C08; } // 801F5BF8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5BFC
  cmps(c,0,(int32_t)c->r[0],0); // 801F5C00
  if (!crb(c,2)) { goto L_801F5DA4; } // 801F5C04
L_801F5C08:;
  c->r[0]=R16(c->r[26]+0x00000000u); // 801F5C08
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801F5C0C
  if (!crb(c,2)) { goto L_801F5C20; } // 801F5C10
  c->r[31]=0u+0x00000001u; // 801F5C14
  c->r[26]=c->r[26]+0x00000002u; // 801F5C18
  goto L_801F5DA4; // 801F5C1C
L_801F5C20:;
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801F5C20
  if (!crb(c,2)) { goto L_801F5DA4; } // 801F5C24
  cmps(c,0,(int32_t)c->r[25],0); // 801F5C28
  if (crb(c,2)) { goto L_801F5C38; } // 801F5C2C
  c->r[0]=0u+0x00000000u; // 801F5C30
  W32(c->r[25]+0x00000000u,c->r[0]); // 801F5C34
L_801F5C38:;
  c->r[0]=0u+0x00000000u; // 801F5C38
  c->r[3]=0u+0xFFFFFFFCu; // 801F5C3C
  W32(c->r[27]+0x00000000u,c->r[0]); // 801F5C40
  goto L_801F5DE4; // 801F5C44
  goto L_801F5DA4; // 801F5C48
L_801F5C4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5C4C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801F5C50
  if (crb(c,0)) { goto L_801F5C6C; } // 801F5C54
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5C58
  cmps(c,0,(int32_t)c->r[0],0); // 801F5C5C
  if (crb(c,2)) { goto L_801F5C6C; } // 801F5C60
  c->r[29]=0u+0xFFFFFFFFu; // 801F5C64
  goto L_801F5DC8; // 801F5C68
L_801F5C6C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801F5C6C
  if (!crb(c,1)) { goto L_801F5D18; } // 801F5C70
  c->r[0]=c->r[3]-c->r[31]; // 801F5C74
  c->r[3]=c->r[22]|c->r[22]; // 801F5C78
  cmps(c,0,(int32_t)c->r[0],1); // 801F5C7C
  c->r[4]=0u+0x00000000u; // 801F5C80
  if (crb(c,1)) { goto L_801F5C94; } // 801F5C84
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5C88
  cmps(c,0,(int32_t)c->r[0],0); // 801F5C8C
  if (!crb(c,2)) { goto L_801F5C98; } // 801F5C90
L_801F5C94:;
  c->r[4]=0u+0x00000001u; // 801F5C94
L_801F5C98:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F5C98
  if (crb(c,2)) { goto L_801F5CA8; } // 801F5C9C
  c->r[4]=R16(c->r[26]+0x00000002u); // 801F5CA0
  goto L_801F5CAC; // 801F5CA4
L_801F5CA8:;
  c->r[4]=0u+0x00000000u; // 801F5CA8
L_801F5CAC:;
  c->lr=0x801F5CB0u; f_801F0B28(c); // 801F5CAC
  cmps(c,0,(int32_t)c->r[3],0); // 801F5CB0
  c->r[23]=c->r[3]|c->r[3]; // 801F5CB4
  if (!crb(c,1)) { goto L_801F5D18; } // 801F5CB8
  c->r[6]=R32(c->r[1]+0x00000010u); // 801F5CBC
  c->r[3]=c->r[24]|c->r[24]; // 801F5CC0
  c->r[5]=c->r[28]|c->r[28]; // 801F5CC4
  c->r[4]=0u+0x00000001u; // 801F5CC8
  c->lr=0x801F5CD0u; f_801F0B5C(c); // 801F5CCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5CD0
  c->r[0]=c->r[0]-c->r[30]; // 801F5CD4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801F5CD8
  if (!crb(c,0)) { goto L_801F5CF4; } // 801F5CDC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5CE0
  cmps(c,0,(int32_t)c->r[0],0); // 801F5CE4
  if (crb(c,2)) { goto L_801F5CF4; } // 801F5CE8
  c->r[29]=0u+0xFFFFFFFFu; // 801F5CEC
  goto L_801F5DC8; // 801F5CF0
L_801F5CF4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5CF4
  c->r[4]=rotl(c->r[23],1)&0xFFFFFFFEu; // 801F5CF8
  c->r[26]=c->r[26]+c->r[4]; // 801F5CFC
  c->r[31]=c->r[31]+c->r[23]; // 801F5D00
  cmps(c,0,(int32_t)c->r[0],0); // 801F5D04
  c->r[30]=c->r[30]+c->r[3]; // 801F5D08
  if (crb(c,2)) { goto L_801F5DA4; } // 801F5D0C
  c->r[24]=c->r[24]+c->r[3]; // 801F5D10
  goto L_801F5DA4; // 801F5D14
L_801F5D18:;
  c->r[4]=c->r[22]|c->r[22]; // 801F5D18
  c->r[3]=c->r[1]+0x00000008u; // 801F5D1C
  c->lr=0x801F5D24u; f_801F5DFC(c); // 801F5D20
  c->r[3]=R8(c->r[1]+0x00000008u); // 801F5D24
  c->r[4]=R8(c->r[1]+0x00000009u); // 801F5D28
  cmps(c,0,(int32_t)c->r[3],0); // 801F5D2C
  if (!crb(c,2)) { goto L_801F5D3C; } // 801F5D30
  c->r[29]=0u+0xFFFFFFFEu; // 801F5D34
  goto L_801F5DC8; // 801F5D38
L_801F5D3C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F5D3C
  if (!crb(c,2)) { goto L_801F5D5C; } // 801F5D40
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5D44
  cmps(c,0,(int32_t)c->r[0],0); // 801F5D48
  if (crb(c,2)) { goto L_801F5D98; } // 801F5D4C
  W8(c->r[24]+0x00000000u,c->r[3]); // 801F5D50
  c->r[24]=c->r[24]+0x00000001u; // 801F5D54
  goto L_801F5D98; // 801F5D58
L_801F5D5C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801F5D5C
  cmps(c,0,(int32_t)c->r[0],0); // 801F5D60
  if (crb(c,2)) { goto L_801F5D94; } // 801F5D64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5D68
  c->r[0]=c->r[0]-c->r[30]; // 801F5D6C
  cmps(c,0,(int32_t)c->r[0],2); // 801F5D70
  if (!crb(c,0)) { goto L_801F5D80; } // 801F5D74
  c->r[29]=0u+0xFFFFFFFFu; // 801F5D78
  goto L_801F5DC8; // 801F5D7C
L_801F5D80:;
  W8(c->r[24]+0x00000000u,c->r[3]); // 801F5D80
  c->r[30]=c->r[30]+0x00000001u; // 801F5D84
  W8(c->r[24]+0x00000001u,c->r[4]); // 801F5D88
  c->r[24]=c->r[24]+0x00000002u; // 801F5D8C
  goto L_801F5D98; // 801F5D90
L_801F5D94:;
  c->r[30]=c->r[30]+0x00000001u; // 801F5D94
L_801F5D98:;
  c->r[30]=c->r[30]+0x00000001u; // 801F5D98
  c->r[26]=c->r[26]+0x00000002u; // 801F5D9C
  c->r[31]=c->r[31]+0x00000001u; // 801F5DA0
L_801F5DA4:;
  c->r[22]=R16(c->r[26]+0x00000000u); // 801F5DA4
  cmps(c,0,(int32_t)c->r[22],0); // 801F5DA8
  if (crb(c,2)) { goto L_801F5DC8; } // 801F5DAC
  c->r[3]=R32(c->r[1]+0x00000018u); // 801F5DB0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801F5DB4
  if (crb(c,0)) { IRQCHK(c); goto L_801F5C4C; } // 801F5DB8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F5DBC
  cmps(c,0,(int32_t)c->r[0],0); // 801F5DC0
  if (crb(c,2)) { IRQCHK(c); goto L_801F5C4C; } // 801F5DC4
L_801F5DC8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F5DC8
  if (crb(c,2)) { goto L_801F5DD4; } // 801F5DCC
  W32(c->r[27]+0x00000000u,c->r[31]); // 801F5DD0
L_801F5DD4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801F5DD4
  if (crb(c,2)) { goto L_801F5DE0; } // 801F5DD8
  W32(c->r[25]+0x00000000u,c->r[30]); // 801F5DDC
L_801F5DE0:;
  c->r[3]=c->r[29]|c->r[29]; // 801F5DE0
L_801F5DE4:;
  c->r[11]=c->r[1]+0x00000050u; // 801F5DE4
  c->lr=0x801F5DECu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F5DE8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F5DEC
  c->lr=c->r[0]; // 801F5DF0
  c->r[1]=c->r[1]+0x00000050u; // 801F5DF4
  return; // 801F5DF8
}

// fn_801F5DFC
void f_801F5DFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5DFC
  c->r[0]=c->lr; // 801F5E00
  cmpu(c,0,c->r[4],0x00000080u); // 801F5E04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F5E08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F5E0C
  c->r[31]=c->r[4]|c->r[4]; // 801F5E10
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F5E14
  c->r[30]=c->r[3]|c->r[3]; // 801F5E18
  if (!crb(c,0)) { goto L_801F5E30; } // 801F5E1C
  c->r[0]=0u+0x00000000u; // 801F5E20
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F5E24
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F5E28
  goto L_801F5EEC; // 801F5E2C
L_801F5E30:;
  cmpu(c,0,c->r[4],0x0000AC00u); // 801F5E30
  if (crb(c,0)) { goto L_801F5E6C; } // 801F5E34
  cmpu(c,0,c->r[4],0x0000D7A3u); // 801F5E38
  if (crb(c,1)) { goto L_801F5E6C; } // 801F5E3C
  c->lr=0x801F5E44u; f_801F5F04(c); // 801F5E40
  c->r[0]=R8(c->r[30]+0x00000000u); // 801F5E44
  cmps(c,0,(int32_t)c->r[0],0); // 801F5E48
  if (!crb(c,2)) { goto L_801F5EEC; } // 801F5E4C
  c->r[0]=R8(c->r[30]+0x00000001u); // 801F5E50
  cmps(c,0,(int32_t)c->r[0],0); // 801F5E54
  if (!crb(c,2)) { goto L_801F5EEC; } // 801F5E58
  c->r[3]=c->r[30]|c->r[30]; // 801F5E5C
  c->r[4]=c->r[31]|c->r[31]; // 801F5E60
  c->lr=0x801F5E68u; f_801F6158(c); // 801F5E64
  goto L_801F5EEC; // 801F5E68
L_801F5E6C:;
  cmpu(c,0,c->r[4],0x00004E00u); // 801F5E6C
  if (crb(c,0)) { goto L_801F5E7C; } // 801F5E70
  cmpu(c,0,c->r[4],0x00009FFFu); // 801F5E74
  if (!crb(c,1)) { goto L_801F5E8C; } // 801F5E78
L_801F5E7C:;
  cmpu(c,0,c->r[4],0x0000F900u); // 801F5E7C
  if (crb(c,0)) { goto L_801F5E9C; } // 801F5E80
  cmpu(c,0,c->r[4],0x0000FAFFu); // 801F5E84
  if (crb(c,1)) { goto L_801F5E9C; } // 801F5E88
L_801F5E8C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F5E8C
  c->r[4]=c->r[31]|c->r[31]; // 801F5E90
  c->lr=0x801F5E98u; f_801F6020(c); // 801F5E94
  goto L_801F5EEC; // 801F5E98
L_801F5E9C:;
  cmpu(c,0,c->r[4],0x0000D800u); // 801F5E9C
  if (crb(c,0)) { goto L_801F5EAC; } // 801F5EA0
  cmpu(c,0,c->r[4],0x0000F900u); // 801F5EA4
  if (crb(c,0)) { goto L_801F5EE0; } // 801F5EA8
L_801F5EAC:;
  c->r[3]=c->r[30]|c->r[30]; // 801F5EAC
  c->r[4]=c->r[31]|c->r[31]; // 801F5EB0
  c->lr=0x801F5EB8u; f_801F5F04(c); // 801F5EB4
  c->r[0]=R8(c->r[30]+0x00000000u); // 801F5EB8
  cmps(c,0,(int32_t)c->r[0],0); // 801F5EBC
  if (!crb(c,2)) { goto L_801F5EEC; } // 801F5EC0
  c->r[0]=R8(c->r[30]+0x00000001u); // 801F5EC4
  cmps(c,0,(int32_t)c->r[0],0); // 801F5EC8
  if (!crb(c,2)) { goto L_801F5EEC; } // 801F5ECC
  c->r[3]=c->r[30]|c->r[30]; // 801F5ED0
  c->r[4]=c->r[31]|c->r[31]; // 801F5ED4
  c->lr=0x801F5EDCu; f_801F6020(c); // 801F5ED8
  goto L_801F5EEC; // 801F5EDC
L_801F5EE0:;
  c->r[0]=0u+0x00000000u; // 801F5EE0
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F5EE4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F5EE8
L_801F5EEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5EEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F5EF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F5EF4
  c->lr=c->r[0]; // 801F5EF8
  c->r[1]=c->r[1]+0x00000010u; // 801F5EFC
  return; // 801F5F00
}

// fn_801F5F04
void f_801F5F04(Ctx* __restrict c) {
  c->r[7]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[7]); // 801F5F04
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801F5F08
  if (crb(c,2)) { goto L_801F5F28; } // 801F5F0C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801F5F10
  c->r[4]=0u+0x80300000u; // 801F5F14
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F5F18
  c->r[4]=c->r[4]+0x00003098u; // 801F5F1C
  c->r[8]=R16(c->r[4]+c->r[0]); // 801F5F20
  goto L_801F5F2C; // 801F5F24
L_801F5F28:;
  c->r[8]=0u+0x00000000u; // 801F5F28
L_801F5F2C:;
  c->r[5]=0u+0x80300000u; // 801F5F2C
  c->r[4]=0u+0x80300000u; // 801F5F30
  c->r[0]=rotl(c->r[7],1)&0x000001FEu; // 801F5F34
  c->r[5]=c->r[5]+0x00003098u; // 801F5F38
  c->r[4]=c->r[4]+0xFFFFCB18u; // 801F5F3C
  c->r[5]=R16(c->r[5]+c->r[0]); // 801F5F40
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 801F5F44
  goto L_801F5FA4; // 801F5F48
L_801F5F4C:;
  c->r[5]=c->r[8]+c->r[7]; // 801F5F4C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801F5F50
  c->r[0]=c->r[0]+c->r[5]; // 801F5F54
  c->r[9]=sraw(c,c->r[0],1); // 801F5F58
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801F5F5C
  c->r[0]=c->r[0]-c->r[9]; // 801F5F60
  c->r[5]=c->r[4]+c->r[0]; // 801F5F64
  c->r[10]=R8(c->r[4]+c->r[0]); // 801F5F68
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F5F6C
  cmpu(c,0,c->r[0],c->r[6]); // 801F5F70
  if (!crb(c,2)) { goto L_801F5F8C; } // 801F5F74
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F5F78
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F5F7C
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F5F80
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F5F84
  return; // 801F5F88
L_801F5F8C:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 801F5F8C
  if (!crb(c,1)) { goto L_801F5F9C; } // 801F5F90
  c->r[7]=c->r[9]|c->r[9]; // 801F5F94
  goto L_801F5FA4; // 801F5F98
L_801F5F9C:;
  if (!crb(c,0)) { goto L_801F5FA4; } // 801F5F9C
  c->r[8]=c->r[9]|c->r[9]; // 801F5FA0
L_801F5FA4:;
  c->r[0]=c->r[7]-c->r[8]; // 801F5FA4
  cmps(c,0,(int32_t)c->r[0],1); // 801F5FA8
  if (crb(c,1)) { IRQCHK(c); goto L_801F5F4C; } // 801F5FAC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801F5FB0
  c->r[4]=0u+0x80300000u; // 801F5FB4
  c->r[0]=c->r[0]-c->r[8]; // 801F5FB8
  c->r[4]=c->r[4]+0xFFFFCB18u; // 801F5FBC
  c->r[5]=c->r[4]+c->r[0]; // 801F5FC0
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F5FC4
  cmpu(c,0,c->r[0],c->r[6]); // 801F5FC8
  if (!crb(c,2)) { goto L_801F5FE4; } // 801F5FCC
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F5FD0
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F5FD4
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F5FD8
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F5FDC
  return; // 801F5FE0
L_801F5FE4:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801F5FE4
  c->r[0]=c->r[0]-c->r[7]; // 801F5FE8
  c->r[5]=c->r[4]+c->r[0]; // 801F5FEC
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F5FF0
  cmpu(c,0,c->r[0],c->r[6]); // 801F5FF4
  if (!crb(c,2)) { goto L_801F6010; } // 801F5FF8
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F5FFC
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F6000
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F6004
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F6008
  return; // 801F600C
L_801F6010:;
  c->r[0]=0u+0x00000000u; // 801F6010
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F6014
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F6018
  return; // 801F601C
}

// fn_801F6020
void f_801F6020(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[5]); // 801F6020
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801F6024
  if (crb(c,2)) { goto L_801F6044; } // 801F6028
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801F602C
  c->r[4]=0u+0x80300000u; // 801F6030
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F6034
  c->r[4]=c->r[4]+0x00003298u; // 801F6038
  c->r[7]=R16(c->r[4]+c->r[0]); // 801F603C
  goto L_801F6048; // 801F6040
L_801F6044:;
  c->r[7]=0u+0x00000000u; // 801F6044
L_801F6048:;
  c->r[0]=R32(c->r[13]+0xFFFF95C0u); // 801F6048
  c->r[4]=0u+0x80300000u; // 801F604C
  c->r[5]=rotl(c->r[5],1)&0x000001FEu; // 801F6050
  c->r[4]=c->r[4]+0x00003298u; // 801F6054
  cmps(c,0,(int32_t)c->r[0],0); // 801F6058
  c->r[4]=R16(c->r[4]+c->r[5]); // 801F605C
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 801F6060
  if (!crb(c,2)) { goto L_801F6078; } // 801F6064
  c->r[0]=0u+0x00000000u; // 801F6068
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F606C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F6070
  return; // 801F6074
L_801F6078:;
  c->r[4]=0u+0x80300000u; // 801F6078
  c->r[4]=c->r[4]+0xFFFFF5F0u; // 801F607C
  goto L_801F60DC; // 801F6080
L_801F6084:;
  c->r[5]=c->r[7]+c->r[8]; // 801F6084
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801F6088
  c->r[0]=c->r[0]+c->r[5]; // 801F608C
  c->r[9]=sraw(c,c->r[0],1); // 801F6090
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801F6094
  c->r[0]=c->r[0]-c->r[9]; // 801F6098
  c->r[5]=c->r[4]+c->r[0]; // 801F609C
  c->r[10]=R8(c->r[4]+c->r[0]); // 801F60A0
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F60A4
  cmpu(c,0,c->r[0],c->r[6]); // 801F60A8
  if (!crb(c,2)) { goto L_801F60C4; } // 801F60AC
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F60B0
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F60B4
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F60B8
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F60BC
  return; // 801F60C0
L_801F60C4:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 801F60C4
  if (!crb(c,1)) { goto L_801F60D4; } // 801F60C8
  c->r[8]=c->r[9]|c->r[9]; // 801F60CC
  goto L_801F60DC; // 801F60D0
L_801F60D4:;
  if (!crb(c,0)) { goto L_801F60DC; } // 801F60D4
  c->r[7]=c->r[9]|c->r[9]; // 801F60D8
L_801F60DC:;
  c->r[0]=c->r[8]-c->r[7]; // 801F60DC
  cmps(c,0,(int32_t)c->r[0],1); // 801F60E0
  if (crb(c,1)) { IRQCHK(c); goto L_801F6084; } // 801F60E4
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801F60E8
  c->r[4]=0u+0x80300000u; // 801F60EC
  c->r[0]=c->r[0]-c->r[7]; // 801F60F0
  c->r[4]=c->r[4]+0xFFFFF5F0u; // 801F60F4
  c->r[5]=c->r[4]+c->r[0]; // 801F60F8
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F60FC
  cmpu(c,0,c->r[0],c->r[6]); // 801F6100
  if (!crb(c,2)) { goto L_801F611C; } // 801F6104
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F6108
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F610C
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F6110
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F6114
  return; // 801F6118
L_801F611C:;
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801F611C
  c->r[0]=c->r[0]-c->r[8]; // 801F6120
  c->r[5]=c->r[4]+c->r[0]; // 801F6124
  c->r[0]=R8(c->r[4]+c->r[0]); // 801F6128
  cmpu(c,0,c->r[0],c->r[6]); // 801F612C
  if (!crb(c,2)) { goto L_801F6148; } // 801F6130
  c->r[4]=R8(c->r[5]+0x00000001u); // 801F6134
  c->r[0]=R8(c->r[5]+0x00000002u); // 801F6138
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F613C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F6140
  return; // 801F6144
L_801F6148:;
  c->r[0]=0u+0x00000000u; // 801F6148
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F614C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F6150
  return; // 801F6154
}

// fn_801F6158
void f_801F6158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6158
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 801F615C
  W16(c->r[1]+0x00000008u,c->r[4]); // 801F6160
  c->r[4]=R8(c->r[1]+0x00000008u); // 801F6164
  c->r[0]=c->r[4]+0xFFFFFF54u; // 801F6168
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[5]); // 801F616C
  if (crb(c,2)) { goto L_801F618C; } // 801F6170
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801F6174
  c->r[4]=0u+0x80300000u; // 801F6178
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F617C
  c->r[4]=c->r[4]+0x00007988u; // 801F6180
  c->r[7]=R16(c->r[4]+c->r[0]); // 801F6184
  goto L_801F6190; // 801F6188
L_801F618C:;
  c->r[7]=0u+0x00000000u; // 801F618C
L_801F6190:;
  c->r[0]=R32(c->r[13]+0xFFFF95C4u); // 801F6190
  c->r[4]=0u+0x80300000u; // 801F6194
  c->r[5]=rotl(c->r[5],1)&0x000001FEu; // 801F6198
  c->r[4]=c->r[4]+0x00007988u; // 801F619C
  cmps(c,0,(int32_t)c->r[0],0); // 801F61A0
  c->r[4]=R16(c->r[4]+c->r[5]); // 801F61A4
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 801F61A8
  if (!crb(c,2)) { goto L_801F61C0; } // 801F61AC
  c->r[0]=0u+0x00000000u; // 801F61B0
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F61B4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F61B8
  goto L_801F6530; // 801F61BC
L_801F61C0:;
  c->r[4]=0u+0x80300000u; // 801F61C0
  c->r[4]=c->r[4]+0x00003498u; // 801F61C4
  goto L_801F62F8; // 801F61C8
L_801F61CC:;
  c->r[5]=c->r[7]+c->r[8]; // 801F61CC
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801F61D0
  c->r[5]=c->r[0]+c->r[5]; // 801F61D4
  c->r[0]=rotl(c->r[5],0)&0x0001FFFEu; // 801F61D8
  c->r[0]=R16(c->r[4]+c->r[0]); // 801F61DC
  c->r[9]=rotl(c->r[5],31)&0x0000FFFFu; // 801F61E0
  cmpu(c,0,c->r[0],c->r[6]); // 801F61E4
  if (!crb(c,2)) { goto L_801F62E4; } // 801F61E8
  cmpu(c,0,c->r[9],0x00001640u); // 801F61EC
  if (!crb(c,0)) { goto L_801F6240; } // 801F61F0
  c->r[4]=0u+0xB8170000u; // 801F61F4
  c->r[5]=0u+0x00000000u; // 801F61F8
  c->r[0]=c->r[4]+0x000002E1u; // 801F61FC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 801F6200
  c->r[7]=c->r[5]+0x00010000u; // 801F6204
  c->r[0]=c->r[0]+c->r[9]; // 801F6208
  c->r[5]=sraw(c,c->r[0],7); // 801F620C
  c->r[0]=sraw(c,c->r[0],7); // 801F6210
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801F6214
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801F6218
  c->r[0]=c->r[0]+c->r[4]; // 801F621C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)178); // 801F6220
  c->r[4]=c->r[5]+c->r[6]; // 801F6224
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801F6228
  c->r[5]=c->r[7]+c->r[4]; // 801F622C
  c->r[4]=c->r[9]-c->r[0]; // 801F6230
  c->r[0]=c->r[5]+0xFFFF8141u; // 801F6234
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801F6238
  goto L_801F6288; // 801F623C
L_801F6240:;
  c->r[4]=0u+0x30C30000u; // 801F6240
  c->r[5]=0u+0x00000000u; // 801F6244
  c->r[8]=c->r[9]+0xFFFFE9C0u; // 801F6248
  c->r[0]=c->r[4]+0x00000C31u; // 801F624C
  c->r[7]=c->r[5]+0x00010000u; // 801F6250
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 801F6254
  c->r[5]=sraw(c,c->r[0],4); // 801F6258
  c->r[0]=sraw(c,c->r[0],4); // 801F625C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801F6260
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801F6264
  c->r[0]=c->r[0]+c->r[4]; // 801F6268
  c->r[4]=c->r[5]+c->r[6]; // 801F626C
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801F6270
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)84); // 801F6274
  c->r[5]=c->r[7]+c->r[4]; // 801F6278
  c->r[4]=c->r[8]-c->r[0]; // 801F627C
  c->r[0]=c->r[5]+0xFFFFA141u; // 801F6280
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801F6284
L_801F6288:;
  cmpu(c,0,c->r[4],0x0000001Au); // 801F6288
  if (!crb(c,0)) { goto L_801F62A0; } // 801F628C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F6290
  c->r[0]=c->r[0]+c->r[4]; // 801F6294
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801F6298
  goto L_801F62D0; // 801F629C
L_801F62A0:;
  cmpu(c,0,c->r[4],0x00000034u); // 801F62A0
  if (!crb(c,0)) { goto L_801F62BC; } // 801F62A4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F62A8
  c->r[4]=c->r[0]+c->r[4]; // 801F62AC
  c->r[0]=c->r[4]+0x00000006u; // 801F62B0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F62B4
  goto L_801F62CC; // 801F62B8
L_801F62BC:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F62BC
  c->r[4]=c->r[0]+c->r[4]; // 801F62C0
  c->r[0]=c->r[4]+0x0000000Cu; // 801F62C4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F62C8
L_801F62CC:;
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801F62CC
L_801F62D0:;
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 801F62D0
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801F62D4
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F62D8
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F62DC
  goto L_801F6530; // 801F62E0
L_801F62E4:;
  if (!crb(c,1)) { goto L_801F62F0; } // 801F62E4
  c->r[8]=c->r[9]|c->r[9]; // 801F62E8
  goto L_801F62F8; // 801F62EC
L_801F62F0:;
  if (!crb(c,0)) { goto L_801F62F8; } // 801F62F0
  c->r[7]=c->r[9]|c->r[9]; // 801F62F4
L_801F62F8:;
  c->r[0]=c->r[8]-c->r[7]; // 801F62F8
  cmps(c,0,(int32_t)c->r[0],1); // 801F62FC
  if (crb(c,1)) { IRQCHK(c); goto L_801F61CC; } // 801F6300
  c->r[4]=0u+0x80300000u; // 801F6304
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801F6308
  c->r[4]=c->r[4]+0x00003498u; // 801F630C
  c->r[0]=R16(c->r[4]+c->r[0]); // 801F6310
  cmpu(c,0,c->r[0],c->r[6]); // 801F6314
  if (!crb(c,2)) { goto L_801F6418; } // 801F6318
  c->r[8]=rotl(c->r[7],0)&0x0000FFFFu; // 801F631C
  cmpu(c,0,c->r[8],0x00001640u); // 801F6320
  if (!crb(c,0)) { goto L_801F6374; } // 801F6324
  c->r[4]=0u+0xB8170000u; // 801F6328
  c->r[5]=0u+0x00000000u; // 801F632C
  c->r[0]=c->r[4]+0x000002E1u; // 801F6330
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 801F6334
  c->r[7]=c->r[5]+0x00010000u; // 801F6338
  c->r[0]=c->r[0]+c->r[8]; // 801F633C
  c->r[5]=sraw(c,c->r[0],7); // 801F6340
  c->r[0]=sraw(c,c->r[0],7); // 801F6344
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801F6348
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801F634C
  c->r[0]=c->r[0]+c->r[4]; // 801F6350
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)178); // 801F6354
  c->r[4]=c->r[5]+c->r[6]; // 801F6358
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801F635C
  c->r[5]=c->r[7]+c->r[4]; // 801F6360
  c->r[4]=c->r[8]-c->r[0]; // 801F6364
  c->r[0]=c->r[5]+0xFFFF8141u; // 801F6368
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801F636C
  goto L_801F63BC; // 801F6370
L_801F6374:;
  c->r[4]=0u+0x30C30000u; // 801F6374
  c->r[5]=0u+0x00000000u; // 801F6378
  c->r[8]=c->r[8]+0xFFFFE9C0u; // 801F637C
  c->r[0]=c->r[4]+0x00000C31u; // 801F6380
  c->r[7]=c->r[5]+0x00010000u; // 801F6384
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 801F6388
  c->r[5]=sraw(c,c->r[0],4); // 801F638C
  c->r[0]=sraw(c,c->r[0],4); // 801F6390
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801F6394
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801F6398
  c->r[0]=c->r[0]+c->r[4]; // 801F639C
  c->r[4]=c->r[5]+c->r[6]; // 801F63A0
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801F63A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)84); // 801F63A8
  c->r[5]=c->r[7]+c->r[4]; // 801F63AC
  c->r[4]=c->r[8]-c->r[0]; // 801F63B0
  c->r[0]=c->r[5]+0xFFFFA141u; // 801F63B4
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801F63B8
L_801F63BC:;
  cmpu(c,0,c->r[4],0x0000001Au); // 801F63BC
  if (!crb(c,0)) { goto L_801F63D4; } // 801F63C0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F63C4
  c->r[0]=c->r[0]+c->r[4]; // 801F63C8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801F63CC
  goto L_801F6404; // 801F63D0
L_801F63D4:;
  cmpu(c,0,c->r[4],0x00000034u); // 801F63D4
  if (!crb(c,0)) { goto L_801F63F0; } // 801F63D8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F63DC
  c->r[4]=c->r[0]+c->r[4]; // 801F63E0
  c->r[0]=c->r[4]+0x00000006u; // 801F63E4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F63E8
  goto L_801F6400; // 801F63EC
L_801F63F0:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F63F0
  c->r[4]=c->r[0]+c->r[4]; // 801F63F4
  c->r[0]=c->r[4]+0x0000000Cu; // 801F63F8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F63FC
L_801F6400:;
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801F6400
L_801F6404:;
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 801F6404
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801F6408
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F640C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F6410
  goto L_801F6530; // 801F6414
L_801F6418:;
  c->r[0]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801F6418
  c->r[0]=R16(c->r[4]+c->r[0]); // 801F641C
  cmpu(c,0,c->r[0],c->r[6]); // 801F6420
  if (!crb(c,2)) { goto L_801F6524; } // 801F6424
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; // 801F6428
  cmpu(c,0,c->r[8],0x00001640u); // 801F642C
  if (!crb(c,0)) { goto L_801F6480; } // 801F6430
  c->r[4]=0u+0xB8170000u; // 801F6434
  c->r[5]=0u+0x00000000u; // 801F6438
  c->r[0]=c->r[4]+0x000002E1u; // 801F643C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 801F6440
  c->r[7]=c->r[5]+0x00010000u; // 801F6444
  c->r[0]=c->r[0]+c->r[8]; // 801F6448
  c->r[5]=sraw(c,c->r[0],7); // 801F644C
  c->r[0]=sraw(c,c->r[0],7); // 801F6450
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801F6454
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801F6458
  c->r[0]=c->r[0]+c->r[4]; // 801F645C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)178); // 801F6460
  c->r[4]=c->r[5]+c->r[6]; // 801F6464
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801F6468
  c->r[5]=c->r[7]+c->r[4]; // 801F646C
  c->r[4]=c->r[8]-c->r[0]; // 801F6470
  c->r[0]=c->r[5]+0xFFFF8141u; // 801F6474
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801F6478
  goto L_801F64C8; // 801F647C
L_801F6480:;
  c->r[4]=0u+0x30C30000u; // 801F6480
  c->r[5]=0u+0x00000000u; // 801F6484
  c->r[8]=c->r[8]+0xFFFFE9C0u; // 801F6488
  c->r[0]=c->r[4]+0x00000C31u; // 801F648C
  c->r[7]=c->r[5]+0x00010000u; // 801F6490
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 801F6494
  c->r[5]=sraw(c,c->r[0],4); // 801F6498
  c->r[0]=sraw(c,c->r[0],4); // 801F649C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801F64A0
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801F64A4
  c->r[0]=c->r[0]+c->r[4]; // 801F64A8
  c->r[4]=c->r[5]+c->r[6]; // 801F64AC
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801F64B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)84); // 801F64B4
  c->r[5]=c->r[7]+c->r[4]; // 801F64B8
  c->r[4]=c->r[8]-c->r[0]; // 801F64BC
  c->r[0]=c->r[5]+0xFFFFA141u; // 801F64C0
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801F64C4
L_801F64C8:;
  cmpu(c,0,c->r[4],0x0000001Au); // 801F64C8
  if (!crb(c,0)) { goto L_801F64E0; } // 801F64CC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F64D0
  c->r[0]=c->r[0]+c->r[4]; // 801F64D4
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801F64D8
  goto L_801F6510; // 801F64DC
L_801F64E0:;
  cmpu(c,0,c->r[4],0x00000034u); // 801F64E0
  if (!crb(c,0)) { goto L_801F64FC; } // 801F64E4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F64E8
  c->r[4]=c->r[0]+c->r[4]; // 801F64EC
  c->r[0]=c->r[4]+0x00000006u; // 801F64F0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F64F4
  goto L_801F650C; // 801F64F8
L_801F64FC:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F64FC
  c->r[4]=c->r[0]+c->r[4]; // 801F6500
  c->r[0]=c->r[4]+0x0000000Cu; // 801F6504
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F6508
L_801F650C:;
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801F650C
L_801F6510:;
  c->r[4]=R8(c->r[1]+0x0000000Au); // 801F6510
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801F6514
  W8(c->r[3]+0x00000000u,c->r[4]); // 801F6518
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F651C
  goto L_801F6530; // 801F6520
L_801F6524:;
  c->r[0]=0u+0x00000000u; // 801F6524
  W8(c->r[3]+0x00000001u,c->r[0]); // 801F6528
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F652C
L_801F6530:;
  c->r[1]=c->r[1]+0x00000010u; // 801F6530
  return; // 801F6534
}

// fn_801F6538
void f_801F6538(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6538
  c->r[0]=c->lr; // 801F653C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801F6540
  c->r[11]=c->r[1]+0x00000090u; // 801F6544
  c->lr=0x801F654Cu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F6548
  c->r[10]=0u+0x80300000u; // 801F654C
  {uint32_t ea=c->r[10]+0x000079E0u; c->r[9]=R32(ea); c->r[10]=ea;} // 801F6550
  c->r[11]=c->r[6]+0x00000001u; // 801F6554
  c->r[25]=c->r[4]|c->r[4]; // 801F6558
  c->r[4]=rotl(c->r[11],1)&0x00000001u; // 801F655C
  c->r[8]=R32(c->r[10]+0x00000004u); // 801F6560
  c->r[31]=c->r[7]|c->r[7]; // 801F6564
  c->r[0]=R32(c->r[10]+0x00000008u); // 801F6568
  c->r[4]=c->r[4]+c->r[11]; // 801F656C
  c->r[18]=R32(c->r[10]+0x0000000Cu); // 801F6570
  c->r[27]=R32(c->r[10]+0x00000010u); // 801F6574
  c->r[30]=c->r[6]|c->r[6]; // 801F6578
  c->r[26]=R32(c->r[10]+0x00000014u); // 801F657C
  c->r[28]=c->r[3]|c->r[3]; // 801F6580
  c->r[24]=R32(c->r[10]+0x00000018u); // 801F6584
  c->r[29]=c->r[5]|c->r[5]; // 801F6588
  c->r[23]=R32(c->r[10]+0x0000001Cu); // 801F658C
  c->r[5]=sraw(c,c->r[4],1); // 801F6590
  c->r[22]=R32(c->r[10]+0x00000020u); // 801F6594
  c->r[3]=c->r[31]|c->r[31]; // 801F6598
  c->r[21]=R32(c->r[10]+0x00000024u); // 801F659C
  c->r[4]=0u+0x00000000u; // 801F65A0
  c->r[20]=R32(c->r[10]+0x00000028u); // 801F65A4
  c->r[19]=R32(c->r[10]+0x0000002Cu); // 801F65A8
  c->r[12]=R32(c->r[10]+0x00000030u); // 801F65AC
  c->r[11]=R32(c->r[10]+0x00000034u); // 801F65B0
  c->r[7]=R32(c->r[10]+0x00000038u); // 801F65B4
  c->r[6]=R32(c->r[10]+0x0000003Cu); // 801F65B8
  W32(c->r[1]+0x00000008u,c->r[9]); // 801F65BC
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 801F65C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F65C4
  W32(c->r[1]+0x00000014u,c->r[18]); // 801F65C8
  W32(c->r[1]+0x00000018u,c->r[27]); // 801F65CC
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 801F65D0
  W32(c->r[1]+0x00000020u,c->r[24]); // 801F65D4
  W32(c->r[1]+0x00000024u,c->r[23]); // 801F65D8
  W32(c->r[1]+0x00000028u,c->r[22]); // 801F65DC
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 801F65E0
  W32(c->r[1]+0x00000030u,c->r[20]); // 801F65E4
  W32(c->r[1]+0x00000034u,c->r[19]); // 801F65E8
  W32(c->r[1]+0x00000038u,c->r[12]); // 801F65EC
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 801F65F0
  W32(c->r[1]+0x00000040u,c->r[7]); // 801F65F4
  W32(c->r[1]+0x00000044u,c->r[6]); // 801F65F8
  c->lr=0x801F6600u; f_80004688(c); // 801F65FC
  c->r[0]=rotl(c->r[25],0)&0x00000001u; cr0(c,c->r[0]); // 801F6600
  if (!crb(c,2)) { goto L_801F6624; } // 801F6604
  c->r[11]=0u+0x00000000u; // 801F6608
  c->r[12]=0u+0x0000007Fu; // 801F660C
  c->r[5]=0u+0x00000000u; // 801F6610
  c->r[27]=0u+0x00000000u; // 801F6614
  c->r[26]=0u+0x00000000u; // 801F6618
  c->r[25]=0u+0x00000000u; // 801F661C
  goto L_801F663C; // 801F6620
L_801F6624:;
  c->r[11]=R32(c->r[28]+0x00000000u); // 801F6624
  c->r[12]=R32(c->r[28]+0x00000004u); // 801F6628
  c->r[5]=R32(c->r[28]+0x00000008u); // 801F662C
  c->r[27]=R32(c->r[28]+0x0000000Cu); // 801F6630
  c->r[26]=R32(c->r[28]+0x00000010u); // 801F6634
  c->r[25]=R32(c->r[28]+0x00000014u); // 801F6638
L_801F663C:;
  c->r[3]=0u+0x00010000u; // 801F663C
  c->r[24]=c->r[1]+0x00000008u; // 801F6640
  {uint32_t ea=c->r[2]+0xFFFF9638u; c->f[2]=RF64(ea);} // 801F6644
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801F6648
  c->r[6]=0u+0x00000000u; // 801F664C
  c->r[0]=0u+0xFFFF0000u; // 801F6650
  c->r[23]=0u+0x43300000u; // 801F6654
  c->ctr=c->r[30]; // 801F6658
  cmps(c,0,(int32_t)c->r[30],0); // 801F665C
  if (!crb(c,1)) { goto L_801F67DC; } // 801F6660
L_801F6664:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801F6664
  c->r[10]=0u+0x00000000u; // 801F6668
  c->r[9]=0u+0x00000000u; // 801F666C
  c->r[8]=0u+0x00000000u; // 801F6670
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[11]); // 801F6674
  c->r[7]=0u+0x00000000u; // 801F6678
  c->r[29]=c->r[29]+0x00000002u; // 801F667C
  if (!crb(c,0)) { goto L_801F6688; } // 801F6680
  c->r[7]=0u+0x00000001u; // 801F6684
L_801F6688:;
  c->r[19]=c->r[5]-c->r[11]; // 801F6688
  c->r[5]=sraw(c,c->r[19],31); // 801F668C
  c->r[27]=c->r[5]^c->r[19]; // 801F6690
  c->r[27]=c->r[27]-c->r[5]; // 801F6694
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[12]); // 801F6698
  if (crb(c,0)) { goto L_801F66A8; } // 801F669C
  c->r[8]=0u+0x00000001u; // 801F66A0
  c->r[27]=c->r[27]-c->r[12]; // 801F66A4
L_801F66A8:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 801F66A8
  c->r[5]=c->r[5]+c->r[12]; // 801F66AC
  c->r[26]=sraw(c,c->r[5],1); // 801F66B0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 801F66B4
  if (crb(c,0)) { goto L_801F66C4; } // 801F66B8
  c->r[9]=0u+0x00000001u; // 801F66BC
  c->r[27]=c->r[27]-c->r[26]; // 801F66C0
L_801F66C4:;
  c->r[5]=rotl(c->r[26],1)&0x00000001u; // 801F66C4
  c->r[5]=c->r[5]+c->r[26]; // 801F66C8
  c->r[25]=sraw(c,c->r[5],1); // 801F66CC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[25]); // 801F66D0
  if (crb(c,0)) { goto L_801F66E0; } // 801F66D4
  c->r[10]=0u+0x00000001u; // 801F66D8
  c->r[27]=c->r[27]-c->r[25]; // 801F66DC
L_801F66E0:;
  c->r[20]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 801F66E0
  c->r[5]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801F66E4
  c->r[19]=rotl(c->r[25],1)&0x00000001u; // 801F66E8
  c->r[5]=addc(c,~c->r[5],0x00000001u,1); // 801F66EC
  c->r[19]=c->r[19]+c->r[25]; // 801F66F0
  c->r[21]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 801F66F4
  c->r[19]=sraw(c,c->r[19],1); // 801F66F8
  c->r[22]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[9]); // 801F66FC
  c->r[21]=c->r[20]+c->r[21]; // 801F6700
  c->r[22]=c->r[19]+c->r[22]; // 801F6704
  c->r[22]=c->r[21]+c->r[22]; // 801F6708
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 801F670C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801F6710
  if (!crb(c,1)) { goto L_801F671C; } // 801F6714
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801F6718
L_801F671C:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801F671C
  if (!crb(c,0)) { goto L_801F6728; } // 801F6720
  c->r[5]=0u+0xFFFF0000u; // 801F6724
L_801F6728:;
  c->r[11]=c->r[11]+c->r[5]; // 801F6728
  cmps(c,0,(int32_t)c->r[11],32767); // 801F672C
  if (!crb(c,1)) { goto L_801F6738; } // 801F6730
  c->r[11]=0u+0x00007FFFu; // 801F6734
L_801F6738:;
  cmps(c,0,(int32_t)c->r[11],-32768); // 801F6738
  if (!crb(c,0)) { goto L_801F6744; } // 801F673C
  c->r[11]=0u+0xFFFF8000u; // 801F6740
L_801F6744:;
  c->r[12]=c->r[12]^0x80000000u; // 801F6744
  c->r[18]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801F6748
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 801F674C
  c->r[22]=rotl(c->r[6],0)&0x00000001u; // 801F6750
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801F6754
  c->r[8]=c->r[10]+c->r[18]; // 801F6758
  W32(c->r[1]+0x00000048u,c->r[23]); // 801F675C
  c->r[8]=c->r[9]+c->r[8]; // 801F6760
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801F6764
  c->r[12]=rotl(c->r[6],1)&0x00000001u; // 801F6768
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 801F676C
  c->r[9]=c->r[9]+c->r[18]; // 801F6770
  {uint32_t ea=c->r[24]+c->r[8]; c->f[0]=RF64(ea);} // 801F6774
  c->r[8]=c->r[12]+c->r[6]; // 801F6778
  c->f[1]=c->f[1]-c->f[2]; // 801F677C
  c->r[12]=sraw(c,c->r[8],1); // 801F6780
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801F6784
  c->r[7]=c->r[10]+c->r[9]; // 801F6788
  c->r[7]=c->r[8]+c->r[7]; // 801F678C
  c->r[22]=c->r[22]+0xFFFFFFFFu; // 801F6790
  c->f[0]=c->f[1]*c->f[0]; // 801F6794
  c->r[9]=rotl(c->r[22],0)&0x00000004u; // 801F6798
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801F679C
  c->r[8]=R8(c->r[31]+c->r[12]); // 801F67A0
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[7]<<((c->r[9])&31)); // 801F67A4
  c->r[7]=c->r[8]|c->r[7]; // 801F67A8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801F67AC
  W8(c->r[31]+c->r[12],c->r[7]); // 801F67B0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 801F67B4
  c->r[12]=R32(c->r[1]+0x00000054u); // 801F67B8
  cmps(c,0,(int32_t)c->r[12],127); // 801F67BC
  if (crb(c,1)) { goto L_801F67C8; } // 801F67C0
  c->r[12]=0u+0x0000007Fu; // 801F67C4
L_801F67C8:;
  cmps(c,0,(int32_t)c->r[12],24576); // 801F67C8
  if (crb(c,0)) { goto L_801F67D4; } // 801F67CC
  c->r[12]=0u+0x00006000u; // 801F67D0
L_801F67D4:;
  c->r[6]=c->r[6]+0x00000001u; // 801F67D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F6664; } // 801F67D8
L_801F67DC:;
  W32(c->r[28]+0x00000000u,c->r[11]); // 801F67DC
  c->r[11]=c->r[1]+0x00000090u; // 801F67E0
  c->r[3]=c->r[30]|c->r[30]; // 801F67E4
  W32(c->r[28]+0x00000004u,c->r[12]); // 801F67E8
  W32(c->r[28]+0x00000008u,c->r[5]); // 801F67EC
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 801F67F0
  W32(c->r[28]+0x00000010u,c->r[26]); // 801F67F4
  W32(c->r[28]+0x00000014u,c->r[25]); // 801F67F8
  c->lr=0x801F6800u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F67FC
  c->r[0]=R32(c->r[1]+0x00000094u); // 801F6800
  c->lr=c->r[0]; // 801F6804
  c->r[1]=c->r[1]+0x00000090u; // 801F6808
  return; // 801F680C
}

// fn_801F6810
void f_801F6810(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 801F6810
  c->r[5]=c->r[3]+0x00000020u; // 801F6814
  c->r[6]=0u+0xFFFFFFFFu; // 801F6818
  c->r[0]=0u+0x00000008u; // 801F681C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801F6820
  W32(c->r[3]+0x00000004u,c->r[7]); // 801F6824
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 801F6828
  W16(c->r[3]+0x00000018u,c->r[6]); // 801F682C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801F6830
  W32(c->r[3]+0x00000014u,c->r[7]); // 801F6834
  W8(c->r[3]+0x0000001Bu,c->r[7]); // 801F6838
  W32(c->r[3]+0x00000010u,c->r[7]); // 801F683C
  W8(c->r[3]+0x0000001Au,c->r[7]); // 801F6840
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801F6844
  W32(c->r[3]+0x00000008u,c->r[7]); // 801F6848
  return; // 801F684C
}

// fn_801F6850
void f_801F6850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6850
  c->r[0]=c->lr; // 801F6854
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F6858
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F685C
  c->r[31]=c->r[4]|c->r[4]; // 801F6860
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F6864
  c->r[30]=c->r[5]|c->r[5]; // 801F6868
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F686C
  c->r[29]=c->r[3]|c->r[3]; // 801F6870
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F6874
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801F6878
  cmps(c,0,(int32_t)c->r[0],0); // 801F687C
  if (crb(c,2)) { goto L_801F69B8; } // 801F6880
  cmpu(c,0,c->r[0],0x00000008u); // 801F6884
  if (!crb(c,2)) { goto L_801F68C4; } // 801F6888
  c->r[6]=R8(c->r[4]+0x00000000u); // 801F688C
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 801F6890
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 801F6894
  cmps(c,0,(int32_t)c->r[0],32); // 801F6898
  W8(c->r[3]+0x0000001Cu,c->r[6]); // 801F689C
  if (crb(c,2)) { goto L_801F68AC; } // 801F68A0
  c->r[3]=0u+0xFFFFFFFFu; // 801F68A4
  goto L_801F6BEC; // 801F68A8
L_801F68AC:;
  cmpu(c,0,c->r[6],0x00000004u); // 801F68AC
  if (crb(c,2)) { goto L_801F68C4; } // 801F68B0
  cmpu(c,0,c->r[6],0x00000008u); // 801F68B4
  if (crb(c,2)) { goto L_801F68C4; } // 801F68B8
  c->r[3]=0u+0xFFFFFFFFu; // 801F68BC
  goto L_801F6BEC; // 801F68C0
L_801F68C4:;
  c->r[10]=R32(c->r[3]+0x00000008u); // 801F68C4
  c->r[6]=0u+0x00000000u; // 801F68C8
  c->r[7]=0u+0x00000000u; // 801F68CC
  goto L_801F696C; // 801F68D0
L_801F68D4:;
  c->r[8]=R8(c->r[3]+0x0000001Du); // 801F68D4
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801F68D8
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 801F68DC
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801F68E0
  cmpu(c,0,c->r[8],0x00000003u); // 801F68E4
  if (crb(c,1)) { goto L_801F690C; } // 801F68E8
  c->r[0]=addc(c,~c->r[8],0x00000003u,1); // 801F68EC
  c->r[8]=R8(c->r[31]+0x00000000u); // 801F68F0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801F68F4
  c->r[9]=R32(c->r[3]+0x00000004u); // 801F68F8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801F68FC
  c->r[0]=c->r[9]|c->r[0]; // 801F6900
  W32(c->r[3]+0x00000004u,c->r[0]); // 801F6904
  goto L_801F6930; // 801F6908
L_801F690C:;
  cmpu(c,0,c->r[8],0x00000006u); // 801F690C
  if (crb(c,1)) { goto L_801F6930; } // 801F6910
  c->r[0]=addc(c,~c->r[8],0x00000006u,1); // 801F6914
  c->r[8]=R8(c->r[31]+0x00000000u); // 801F6918
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801F691C
  c->r[9]=R32(c->r[3]+0x00000004u); // 801F6920
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801F6924
  c->r[0]=c->r[9]|c->r[0]; // 801F6928
  W32(c->r[3]+0x00000004u,c->r[0]); // 801F692C
L_801F6930:;
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801F6930
  c->r[31]=c->r[31]+0x00000001u; // 801F6934
  c->r[6]=c->r[6]+0x00000001u; // 801F6938
  cmpu(c,0,c->r[0],0x00000004u); // 801F693C
  if (!crb(c,2)) { goto L_801F6954; } // 801F6940
  c->r[0]=R32(c->r[3]+0x00000004u); // 801F6944
  cmps(c,0,(int32_t)c->r[0],0); // 801F6948
  if (!crb(c,1)) { goto L_801F6954; } // 801F694C
  W8(c->r[3]+0x0000001Du,c->r[7]); // 801F6950
L_801F6954:;
  c->r[30]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 801F6954
  if (!crb(c,2)) { goto L_801F696C; } // 801F6958
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801F695C
  cmps(c,0,(int32_t)c->r[0],0); // 801F6960
  if (crb(c,2)) { goto L_801F696C; } // 801F6964
  goto L_801F6990; // 801F6968
L_801F696C:;
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801F696C
  cmps(c,0,(int32_t)c->r[0],0); // 801F6970
  if (!crb(c,2)) { IRQCHK(c); goto L_801F68D4; } // 801F6974
  cmps(c,0,(int32_t)c->r[10],0); // 801F6978
  if (!crb(c,1)) { goto L_801F6990; } // 801F697C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801F6980
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 801F6984
  if (!crb(c,0)) { goto L_801F6990; } // 801F6988
  W32(c->r[3]+0x00000004u,c->r[10]); // 801F698C
L_801F6990:;
  c->r[30]=c->r[5]-c->r[6]; cr0(c,c->r[30]); // 801F6990
  c->r[31]=c->r[4]+c->r[6]; // 801F6994
  if (!crb(c,2)) { goto L_801F69B8; } // 801F6998
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801F699C
  cmps(c,0,(int32_t)c->r[0],0); // 801F69A0
  if (!crb(c,2)) { goto L_801F69B0; } // 801F69A4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801F69A8
  goto L_801F6BEC; // 801F69AC
L_801F69B0:;
  c->r[3]=0u+0xFFFFFFFFu; // 801F69B0
  goto L_801F6BEC; // 801F69B4
L_801F69B8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000018u); // 801F69B8
  cmps(c,0,(int32_t)c->r[0],0); // 801F69BC
  if (!crb(c,0)) { goto L_801F69F0; } // 801F69C0
  c->r[6]=R8(c->r[31]+0x00000000u); // 801F69C4
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801F69C8
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801F69CC
  c->r[31]=c->r[31]+0x00000001u; // 801F69D0
  c->r[0]=c->r[6]+0x00000001u; // 801F69D4
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F69D8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801F69DC
  c->r[0]=c->r[4]+0x00000001u; // 801F69E0
  W16(c->r[3]+0x00000018u,c->r[5]); // 801F69E4
  W8(c->r[4]+0x00000000u,c->r[6]); // 801F69E8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801F69EC
L_801F69F0:;
  c->r[28]=c->r[3]+0x00000021u; // 801F69F0
  goto L_801F6A58; // 801F69F4
L_801F69F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F69F8
  if (!crb(c,2)) { goto L_801F6A08; } // 801F69FC
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F6A00
  goto L_801F6BEC; // 801F6A04
L_801F6A08:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801F6A08
  c->r[31]=c->r[31]+0x00000001u; // 801F6A0C
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801F6A10
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801F6A14
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F6A18
  c->r[0]=c->r[3]+0x00000001u; // 801F6A1C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000018u); // 801F6A20
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801F6A24
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801F6A28
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; cr0(c,c->r[0]); // 801F6A2C
  W16(c->r[29]+0x00000018u,c->r[3]); // 801F6A30
  if (!crb(c,2)) { goto L_801F6A58; } // 801F6A34
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 801F6A38
  c->r[3]=c->r[29]+0x00000020u; // 801F6A3C
  c->r[4]=R8(c->r[29]+0x0000001Cu); // 801F6A40
  c->lr=0x801F6A48u; f_801F72B8(c); // 801F6A44
  cmps(c,0,(int32_t)c->r[3],0); // 801F6A48
  if (!crb(c,2)) { goto L_801F6A58; } // 801F6A4C
  c->r[3]=0u+0xFFFFFFFBu; // 801F6A50
  goto L_801F6BEC; // 801F6A54
L_801F6A58:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000018u); // 801F6A58
  cmps(c,0,(int32_t)c->r[0],0); // 801F6A5C
  if (crb(c,1)) { IRQCHK(c); goto L_801F69F8; } // 801F6A60
  c->r[6]=0u+0x00000020u; // 801F6A64
  c->r[3]=0u+0x00000000u; // 801F6A68
  goto L_801F6BC0; // 801F6A6C
  goto L_801F6AAC; // 801F6A70
L_801F6A74:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F6A74
  if (!crb(c,2)) { goto L_801F6A84; } // 801F6A78
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F6A7C
  goto L_801F6BEC; // 801F6A80
L_801F6A84:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801F6A84
  c->r[31]=c->r[31]+0x00000001u; // 801F6A88
  c->r[4]=R8(c->r[29]+0x0000001Au); // 801F6A8C
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801F6A90
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801F6A94
  c->r[7]=R32(c->r[29]+0x00000010u); // 801F6A98
  c->r[0]=c->r[4]+0x00000008u; // 801F6A9C
  c->r[4]=c->r[7]|c->r[5]; // 801F6AA0
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801F6AA4
  W32(c->r[29]+0x00000010u,c->r[4]); // 801F6AA8
L_801F6AAC:;
  c->r[5]=R8(c->r[29]+0x0000001Au); // 801F6AAC
  cmpu(c,0,c->r[5],0x00000020u); // 801F6AB0
  if (crb(c,0)) { IRQCHK(c); goto L_801F6A74; } // 801F6AB4
  goto L_801F6BB4; // 801F6AB8
L_801F6ABC:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801F6ABC
  c->r[8]=R32(c->r[29]+0x00000010u); // 801F6AC0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F6AC4
  c->r[9]=rotl(c->r[4],0)&0xFFFFFFFEu; // 801F6AC8
  c->r[5]=R8(c->r[4]+0x00000000u); // 801F6ACC
  c->r[10]=rotl(c->r[8],1)&0x00000001u; // 801F6AD0
  c->r[7]=rotl(c->r[0],0)&0x0000003Fu; // 801F6AD4
  c->r[4]=R8(c->r[29]+0x0000001Au); // 801F6AD8
  c->r[0]=((c->r[10])&0x20)?0u:(c->r[5]<<((c->r[10])&31)); // 801F6ADC
  c->r[5]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801F6AE0
  c->r[8]=c->r[7]+0x00000001u; // 801F6AE4
  c->r[7]=c->r[10]+c->r[9]; // 801F6AE8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801F6AEC
  W32(c->r[29]+0x00000010u,c->r[5]); // 801F6AF0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801F6AF4
  c->r[4]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801F6AF8
  c->r[9]=c->r[4]+c->r[7]; // 801F6AFC
  W32(c->r[29]+0x0000000Cu,c->r[9]); // 801F6B00
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801F6B04
  if (crb(c,2)) { goto L_801F6BB4; } // 801F6B08
  c->r[5]=R8(c->r[29]+0x0000001Cu); // 801F6B0C
  c->r[7]=c->r[29]+0x00000021u; // 801F6B10
  c->r[4]=R32(c->r[29]+0x00000014u); // 801F6B14
  c->r[0]=R8(c->r[29]+0x0000001Bu); // 801F6B18
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801F6B1C
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 801F6B20
  c->r[4]=R32(c->r[29]+0x00000004u); // 801F6B24
  W32(c->r[29]+0x00000014u,c->r[10]); // 801F6B28
  c->r[5]=c->r[0]+c->r[5]; // 801F6B2C
  c->r[0]=rotl(c->r[5],29)&0x0000001Fu; // 801F6B30
  c->r[9]=R8(c->r[9]+0x00000000u); // 801F6B34
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801F6B38
  c->r[11]=rotl(c->r[5],0)&0x000000FFu; // 801F6B3C
  c->r[0]=((c->r[8])&0x20)?0u:(c->r[9]<<((c->r[8])&31)); // 801F6B40
  W32(c->r[29]+0x0000000Cu,c->r[7]); // 801F6B44
  c->r[4]=c->r[10]|c->r[0]; // 801F6B48
  W32(c->r[29]+0x00000014u,c->r[4]); // 801F6B4C
  W8(c->r[29]+0x0000001Bu,c->r[5]); // 801F6B50
  if (crb(c,1)) { goto L_801F6B68; } // 801F6B54
  c->r[0]=addc(c,~c->r[11],0x00000020u,1); // 801F6B58
  W8(c->r[29]+0x0000001Bu,c->r[6]); // 801F6B5C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]>>((c->r[0])&31)); // 801F6B60
  W32(c->r[29]+0x00000014u,c->r[0]); // 801F6B64
L_801F6B68:;
  c->r[0]=R8(c->r[29]+0x0000001Bu); // 801F6B68
  cmpu(c,0,c->r[0],0x00000020u); // 801F6B6C
  if (!crb(c,2)) { goto L_801F6BB4; } // 801F6B70
  c->r[7]=R32(c->r[29]+0x00000014u); // 801F6B74
  c->r[4]=R32(c->r[29]+0x00000000u); // 801F6B78
  c->r[5]=rotl(c->r[7],8)&0x00FF0000u; // 801F6B7C
  c->r[0]=rotl(c->r[7],24)&0x0000FF00u; // 801F6B80
  c->r[5]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801F6B84
  c->r[0]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F6B88
  c->r[0]=c->r[5]|c->r[0]; // 801F6B8C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801F6B90
  c->r[4]=R32(c->r[29]+0x00000004u); // 801F6B94
  c->r[5]=R32(c->r[29]+0x00000000u); // 801F6B98
  c->r[0]=addc(c,c->r[4],0xFFFFFFFCu,0); cr0(c,c->r[0]); // 801F6B9C
  W8(c->r[29]+0x0000001Bu,c->r[3]); // 801F6BA0
  c->r[4]=c->r[5]+0x00000004u; // 801F6BA4
  W32(c->r[29]+0x00000000u,c->r[4]); // 801F6BA8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801F6BAC
  if (!crb(c,1)) { goto L_801F6BCC; } // 801F6BB0
L_801F6BB4:;
  c->r[0]=R8(c->r[29]+0x0000001Au); // 801F6BB4
  cmps(c,0,(int32_t)c->r[0],0); // 801F6BB8
  if (!crb(c,2)) { IRQCHK(c); goto L_801F6ABC; } // 801F6BBC
L_801F6BC0:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801F6BC0
  cmps(c,0,(int32_t)c->r[0],0); // 801F6BC4
  if (crb(c,1)) { IRQCHK(c); goto L_801F6AAC; } // 801F6BC8
L_801F6BCC:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801F6BCC
  cmps(c,0,(int32_t)c->r[0],0); // 801F6BD0
  if (!crb(c,2)) { goto L_801F6BE8; } // 801F6BD4
  cmpu(c,0,c->r[30],0x00000020u); // 801F6BD8
  if (!crb(c,1)) { goto L_801F6BE8; } // 801F6BDC
  c->r[3]=0u+0xFFFFFFFDu; // 801F6BE0
  goto L_801F6BEC; // 801F6BE4
L_801F6BE8:;
  c->r[3]=0u+0x00000000u; // 801F6BE8
L_801F6BEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F6BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F6BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F6BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F6BF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F6BFC
  c->lr=c->r[0]; // 801F6C00
  c->r[1]=c->r[1]+0x00000020u; // 801F6C04
  return; // 801F6C08
}

// fn_801F6C0C
void f_801F6C0C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 801F6C0C
  c->r[4]=rotl(c->r[5],8)&0x00FF0000u; // 801F6C10
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 801F6C14
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801F6C18
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F6C1C
  c->r[0]=c->r[4]|c->r[0]; // 801F6C20
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[0]); // 801F6C24
  if (!crb(c,2)) { goto L_801F6C44; } // 801F6C28
  c->r[4]=R32(c->r[3]+0x00000004u); // 801F6C2C
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801F6C30
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801F6C34
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801F6C38
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F6C3C
  c->r[0]=c->r[3]|c->r[0]; // 801F6C40
L_801F6C44:;
  c->r[3]=c->r[0]|c->r[0]; // 801F6C44
  return; // 801F6C48
}

// fn_801F6C4C
void f_801F6C4C(Ctx* __restrict c) {
  c->r[7]=R32(c->r[3]+0x00000000u); // 801F6C4C
  c->r[8]=c->r[3]+0x00000004u; // 801F6C50
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F6C54
  c->r[6]=rotl(c->r[7],8)&0x00FF0000u; // 801F6C58
  c->r[5]=rotl(c->r[7],24)&0x0000FF00u; // 801F6C5C
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 801F6C60
  c->r[0]=0u-c->r[3]; // 801F6C64
  c->r[6]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801F6C68
  c->r[5]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[5]&~0x000000FFu); // 801F6C6C
  c->r[5]=c->r[6]|c->r[5]; // 801F6C70
  c->r[0]=c->r[0]|c->r[3]; // 801F6C74
  c->r[9]=rotl(c->r[5],24)&0x00FFFFFFu; cr0(c,c->r[9]); // 801F6C78
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801F6C7C
  if (!crb(c,2)) { goto L_801F6CA0; } // 801F6C80
  c->r[5]=R32(c->r[8]+0x00000000u); // 801F6C84
  c->r[8]=c->r[8]+0x00000004u; // 801F6C88
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 801F6C8C
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 801F6C90
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801F6C94
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F6C98
  c->r[9]=c->r[3]|c->r[0]; // 801F6C9C
L_801F6CA0:;
  c->r[0]=0u+0x00000008u; // 801F6CA0
  goto L_801F6D80; // 801F6CA4
L_801F6CA8:;
  c->r[10]=R8(c->r[8]+0x00000000u); // 801F6CA8
  c->ctr=c->r[0]; // 801F6CAC
  c->r[8]=c->r[8]+0x00000001u; // 801F6CB0
L_801F6CB4:;
  c->r[3]=rotl(c->r[10],0)&0x00000080u; cr0(c,c->r[3]); // 801F6CB4
  if (!crb(c,2)) { goto L_801F6CD4; } // 801F6CB8
  c->r[3]=R8(c->r[8]+0x00000000u); // 801F6CBC
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 801F6CC0
  c->r[8]=c->r[8]+0x00000001u; // 801F6CC4
  W8(c->r[4]+0x00000000u,c->r[3]); // 801F6CC8
  c->r[4]=c->r[4]+0x00000001u; // 801F6CCC
  goto L_801F6D70; // 801F6CD0
L_801F6CD4:;
  c->r[6]=R8(c->r[8]+0x00000000u); // 801F6CD4
  cmps(c,0,(int32_t)c->r[7],0); // 801F6CD8
  c->r[11]=sraw(c,c->r[6],4); // 801F6CDC
  if (!crb(c,2)) { goto L_801F6CEC; } // 801F6CE0
  c->r[11]=c->r[11]+0x00000003u; // 801F6CE4
  goto L_801F6D34; // 801F6CE8
L_801F6CEC:;
  cmps(c,0,(int32_t)c->r[11],1); // 801F6CEC
  if (!crb(c,2)) { goto L_801F6D14; } // 801F6CF0
  c->r[5]=R8(c->r[8]+0x00000001u); // 801F6CF4
  {uint32_t ea=c->r[8]+0x00000002u; c->r[3]=R8(ea); c->r[8]=ea;} // 801F6CF8
  c->r[11]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801F6CFC
  c->r[11]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[11]&~0x0000F000u); // 801F6D00
  c->r[3]=sraw(c,c->r[3],4); // 801F6D04
  c->r[11]=c->r[11]|c->r[3]; // 801F6D08
  c->r[11]=c->r[11]+0x00000111u; // 801F6D0C
  goto L_801F6D34; // 801F6D10
L_801F6D14:;
  cmps(c,0,(int32_t)c->r[11],0); // 801F6D14
  if (!crb(c,2)) { goto L_801F6D30; } // 801F6D18
  {uint32_t ea=c->r[8]+0x00000001u; c->r[3]=R8(ea); c->r[8]=ea;} // 801F6D1C
  c->r[11]=sraw(c,c->r[3],4); // 801F6D20
  c->r[11]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[11]&~0x000000F0u); // 801F6D24
  c->r[11]=c->r[11]+0x00000011u; // 801F6D28
  goto L_801F6D34; // 801F6D2C
L_801F6D30:;
  c->r[11]=c->r[11]+0x00000001u; // 801F6D30
L_801F6D34:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 801F6D34
  cmpu(c,0,c->r[11],c->r[9]); // 801F6D38
  c->r[3]=R8(c->r[8]+0x00000001u); // 801F6D3C
  c->r[8]=c->r[8]+0x00000002u; // 801F6D40
  c->r[3]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 801F6D44
  c->r[5]=c->r[3]+0x00000001u; // 801F6D48
  if (!crb(c,1)) { goto L_801F6D54; } // 801F6D4C
  c->r[11]=c->r[9]|c->r[9]; // 801F6D50
L_801F6D54:;
  c->r[9]=c->r[9]-c->r[11]; // 801F6D54
L_801F6D58:;
  c->r[3]=c->r[4]-c->r[5]; // 801F6D58
  c->r[11]=addc(c,c->r[11],0xFFFFFFFFu,0); cr0(c,c->r[11]); // 801F6D5C
  c->r[3]=R8(c->r[3]+0x00000000u); // 801F6D60
  W8(c->r[4]+0x00000000u,c->r[3]); // 801F6D64
  c->r[4]=c->r[4]+0x00000001u; // 801F6D68
  if (crb(c,1)) { IRQCHK(c); goto L_801F6D58; } // 801F6D6C
L_801F6D70:;
  cmps(c,0,(int32_t)c->r[9],0); // 801F6D70
  if (crb(c,2)) { goto L_801F6D80; } // 801F6D74
  c->r[10]=rotl(c->r[10],1)&0xFFFFFFFEu; // 801F6D78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F6CB4; } // 801F6D7C
L_801F6D80:;
  cmps(c,0,(int32_t)c->r[9],0); // 801F6D80
  if (!crb(c,2)) { IRQCHK(c); goto L_801F6CA8; } // 801F6D84
  return; // 801F6D88
}

// fn_801F6D8C
void f_801F6D8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6D8C
  c->r[0]=c->lr; // 801F6D90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F6D94
  c->r[11]=c->r[1]+0x00000020u; // 801F6D98
  c->lr=0x801F6DA0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F6D9C
  c->r[6]=R32(c->r[3]+0x00000000u); // 801F6DA0
  c->r[5]=rotl(c->r[6],8)&0x00FF0000u; // 801F6DA4
  c->r[0]=rotl(c->r[6],24)&0x0000FF00u; // 801F6DA8
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801F6DAC
  c->r[0]=(rotl(c->r[6],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F6DB0
  c->r[0]=c->r[5]|c->r[0]; // 801F6DB4
  c->r[5]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[5]); // 801F6DB8
  if (crb(c,2)) { goto L_801F6DC8; } // 801F6DBC
  c->r[11]=c->r[3]+0x00000004u; // 801F6DC0
  goto L_801F6DCC; // 801F6DC4
L_801F6DC8:;
  c->r[11]=c->r[3]+0x00000008u; // 801F6DC8
L_801F6DCC:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 801F6DCC
  cmps(c,0,(int32_t)c->r[5],0); // 801F6DD0
  c->r[0]=c->r[11]+0x00000001u; // 801F6DD4
  c->r[7]=0u+0x00000000u; // 801F6DD8
  c->r[8]=rotl(c->r[6],0)&0x00000007u; // 801F6DDC
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 801F6DE0
  c->r[9]=c->r[8]+0x00000004u; // 801F6DE4
  c->r[8]=0u+0x00000000u; // 801F6DE8
  if (!crb(c,2)) { goto L_801F6E08; } // 801F6DEC
  c->r[10]=R32(c->r[3]+0x00000004u); // 801F6DF0
  c->r[5]=rotl(c->r[10],8)&0x00FF0000u; // 801F6DF4
  c->r[3]=rotl(c->r[10],24)&0x0000FF00u; // 801F6DF8
  c->r[5]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801F6DFC
  c->r[3]=(rotl(c->r[10],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 801F6E00
  c->r[5]=c->r[5]|c->r[3]; // 801F6E04
L_801F6E08:;
  c->r[3]=R8(c->r[11]+0x00000000u); // 801F6E08
  c->r[30]=c->r[0]|c->r[0]; // 801F6E0C
  c->r[12]=addc(c,~c->r[6],0x00000020u,1); // 801F6E10
  c->r[3]=c->r[3]+0x00000001u; // 801F6E14
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801F6E18
  c->r[31]=c->r[11]+c->r[3]; // 801F6E1C
  goto L_801F6ECC; // 801F6E20
L_801F6E24:;
  c->r[11]=R32(c->r[31]+0x00000000u); // 801F6E24
  c->r[29]=0u+0x00000020u; // 801F6E28
  c->r[31]=c->r[31]+0x00000004u; // 801F6E2C
  c->r[10]=rotl(c->r[11],8)&0x00FF0000u; // 801F6E30
  c->r[3]=rotl(c->r[11],24)&0x0000FF00u; // 801F6E34
  c->r[10]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801F6E38
  c->r[3]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 801F6E3C
  c->r[28]=c->r[10]|c->r[3]; // 801F6E40
  goto L_801F6EC4; // 801F6E44
L_801F6E48:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801F6E48
  c->r[27]=rotl(c->r[28],1)&0x00000001u; // 801F6E4C
  c->r[11]=rotl(c->r[30],0)&0xFFFFFFFEu; // 801F6E50
  c->r[30]=((c->r[27])&0x20)?0u:(c->r[3]<<((c->r[27])&31)); // 801F6E54
  c->r[10]=rotl(c->r[3],0)&0x0000003Fu; // 801F6E58
  c->r[3]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[3]); // 801F6E5C
  c->r[10]=c->r[10]+0x00000001u; // 801F6E60
  c->r[3]=c->r[27]+c->r[11]; // 801F6E64
  c->r[10]=rotl(c->r[10],1)&0xFFFFFFFEu; // 801F6E68
  c->r[30]=c->r[10]+c->r[3]; // 801F6E6C
  if (crb(c,2)) { goto L_801F6EB8; } // 801F6E70
  c->r[3]=R8(c->r[30]+0x00000000u); // 801F6E74
  c->r[8]=c->r[8]+0x00000001u; // 801F6E78
  cmpu(c,0,c->r[8],c->r[9]); // 801F6E7C
  c->r[7]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 801F6E80
  c->r[3]=((c->r[12])&0x20)?0u:(c->r[3]<<((c->r[12])&31)); // 801F6E84
  c->r[30]=c->r[0]|c->r[0]; // 801F6E88
  c->r[7]=c->r[7]|c->r[3]; // 801F6E8C
  if (!crb(c,2)) { goto L_801F6EB8; } // 801F6E90
  c->r[10]=rotl(c->r[7],8)&0x00FF0000u; // 801F6E94
  c->r[3]=rotl(c->r[7],24)&0x0000FF00u; // 801F6E98
  c->r[10]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801F6E9C
  c->r[8]=0u+0x00000000u; // 801F6EA0
  c->r[3]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 801F6EA4
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 801F6EA8
  c->r[3]=c->r[10]|c->r[3]; // 801F6EAC
  W32(c->r[4]+0x00000000u,c->r[3]); // 801F6EB0
  c->r[4]=c->r[4]+0x00000004u; // 801F6EB4
L_801F6EB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F6EB8
  if (!crb(c,1)) { goto L_801F6ECC; } // 801F6EBC
  c->r[28]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801F6EC0
L_801F6EC4:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFFu,0); cr0(c,c->r[29]); // 801F6EC4
  if (!crb(c,0)) { IRQCHK(c); goto L_801F6E48; } // 801F6EC8
L_801F6ECC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F6ECC
  if (crb(c,1)) { IRQCHK(c); goto L_801F6E24; } // 801F6ED0
  c->r[11]=c->r[1]+0x00000020u; // 801F6ED4
  c->lr=0x801F6EDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F6ED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F6EDC
  c->lr=c->r[0]; // 801F6EE0
  c->r[1]=c->r[1]+0x00000020u; // 801F6EE4
  return; // 801F6EE8
}

// fn_801F6EEC
void f_801F6EEC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F6EEC
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 801F6EF0
  cmps(c,0,(int32_t)c->r[0],48); // 801F6EF4
  if (crb(c,2)) { goto L_801F6F24; } // 801F6EF8
  if (!crb(c,0)) { goto L_801F6F18; } // 801F6EFC
  cmps(c,0,(int32_t)c->r[0],32); // 801F6F00
  if (crb(c,2)) { goto L_801F6F2C; } // 801F6F04
  if (!crb(c,0)) { goto L_801F6F34; } // 801F6F08
  cmps(c,0,(int32_t)c->r[0],16); // 801F6F0C
  if (crb(c,2)) { goto L_801F6F28; } // 801F6F10
  goto L_801F6F34; // 801F6F14
L_801F6F18:;
  cmps(c,0,(int32_t)c->r[0],128); // 801F6F18
  if (crb(c,2)) { goto L_801F6F30; } // 801F6F1C
  goto L_801F6F34; // 801F6F20
L_801F6F24:;
  goto L_801F6F3C; // 801F6F24
L_801F6F28:;
  goto L_801F70A0; // 801F6F28
L_801F6F2C:;
  f_801F7468(c); return; // 801F6F2C
L_801F6F30:;
  f_801F76C4(c); return; // 801F6F30
L_801F6F34:;
  c->r[3]=0u+0xFFFFFFFFu; // 801F6F34
  return; // 801F6F38
L_801F6F3C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F6F3C
  c->r[6]=rotl(c->r[0],8)&0x000000FFu; // 801F6F40
  c->r[6]=(rotl(c->r[0],24)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801F6F44
  c->r[6]=(rotl(c->r[0],8)&0x00FF0000u)|(c->r[6]&~0x00FF0000u); // 801F6F48
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801F6F4C
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 801F6F50
  cmps(c,0,(int32_t)c->r[0],48); // 801F6F54
  c->r[7]=rotl(c->r[6],24)&0x00FFFFFFu; // 801F6F58
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801F6F5C
  if (crb(c,2)) { goto L_801F6F6C; } // 801F6F60
  c->r[3]=0u+0xFFFFFFFFu; // 801F6F64
  return; // 801F6F68
L_801F6F6C:;
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 801F6F6C
  if (crb(c,2)) { goto L_801F6F7C; } // 801F6F70
  c->r[3]=0u+0xFFFFFFFFu; // 801F6F74
  return; // 801F6F78
L_801F6F7C:;
  cmpu(c,0,c->r[4],0x00000004u); // 801F6F7C
  if (crb(c,1)) { goto L_801F6F8C; } // 801F6F80
  c->r[3]=0u+0xFFFFFFFEu; // 801F6F84
  return; // 801F6F88
L_801F6F8C:;
  cmps(c,0,(int32_t)c->r[7],0); // 801F6F8C
  c->r[6]=c->r[3]+0x00000004u; // 801F6F90
  c->r[8]=c->r[4]+0xFFFFFFFCu; // 801F6F94
  if (!crb(c,2)) { goto L_801F7078; } // 801F6F98
  cmps(c,0,(int32_t)c->r[8],4); // 801F6F9C
  if (!crb(c,0)) { goto L_801F6FAC; } // 801F6FA0
  c->r[3]=0u+0xFFFFFFFEu; // 801F6FA4
  return; // 801F6FA8
L_801F6FAC:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 801F6FAC
  c->r[6]=c->r[6]+0x00000004u; // 801F6FB0
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 801F6FB4
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801F6FB8
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801F6FBC
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801F6FC0
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F6FC4
  c->r[7]=c->r[3]|c->r[0]; // 801F6FC8
  goto L_801F7078; // 801F6FCC
L_801F6FD0:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801F6FD0
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 801F6FD4
  c->r[6]=c->r[6]+0x00000001u; // 801F6FD8
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801F6FDC
  if (!crb(c,0)) { goto L_801F6FEC; } // 801F6FE0
  c->r[3]=0u+0xFFFFFFFEu; // 801F6FE4
  return; // 801F6FE8
L_801F6FEC:;
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801F6FEC
  if (!crb(c,2)) { goto L_801F7038; } // 801F6FF0
  c->r[3]=c->r[3]+0x00000001u; // 801F6FF4
  cmpu(c,0,c->r[3],c->r[7]); // 801F6FF8
  if (!crb(c,1)) { goto L_801F7008; } // 801F6FFC
  c->r[3]=0u+0xFFFFFFFCu; // 801F7000
  return; // 801F7004
L_801F7008:;
  c->r[8]=c->r[8]-c->r[3]; cr0(c,c->r[8]); // 801F7008
  if (!crb(c,0)) { goto L_801F7018; } // 801F700C
  c->r[3]=0u+0xFFFFFFFEu; // 801F7010
  return; // 801F7014
L_801F7018:;
  c->r[7]=c->r[7]-c->r[3]; // 801F7018
L_801F701C:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801F701C
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801F7020
  c->r[6]=c->r[6]+0x00000001u; // 801F7024
  W8(c->r[5]+0x00000000u,c->r[0]); // 801F7028
  c->r[5]=c->r[5]+0x00000001u; // 801F702C
  if (crb(c,1)) { IRQCHK(c); goto L_801F701C; } // 801F7030
  goto L_801F7078; // 801F7034
L_801F7038:;
  c->r[3]=c->r[3]+0x00000003u; // 801F7038
  cmpu(c,0,c->r[3],c->r[7]); // 801F703C
  if (!crb(c,1)) { goto L_801F704C; } // 801F7040
  c->r[3]=0u+0xFFFFFFFCu; // 801F7044
  return; // 801F7048
L_801F704C:;
  c->r[8]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 801F704C
  c->r[0]=R8(c->r[6]+0x00000000u); // 801F7050
  c->r[7]=c->r[7]-c->r[3]; // 801F7054
  c->r[6]=c->r[6]+0x00000001u; // 801F7058
  if (!crb(c,0)) { goto L_801F7068; } // 801F705C
  c->r[3]=0u+0xFFFFFFFEu; // 801F7060
  return; // 801F7064
L_801F7068:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801F7068
  W8(c->r[5]+0x00000000u,c->r[0]); // 801F706C
  c->r[5]=c->r[5]+0x00000001u; // 801F7070
  if (crb(c,1)) { IRQCHK(c); goto L_801F7068; } // 801F7074
L_801F7078:;
  cmps(c,0,(int32_t)c->r[7],0); // 801F7078
  if (!crb(c,2)) { IRQCHK(c); goto L_801F6FD0; } // 801F707C
  c->r[0]=0u+0x00000020u; // 801F7080
  c->r[3]=rotl(c->r[8],1)&0x00000001u; // 801F7084
  c->r[0]=addc(c,~c->r[8],c->r[0],1); // 801F7088
  c->r[0]=0u+0x00000000u; // 801F708C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801F7090
  c->r[0]=0u+0xFFFFFFFDu; // 801F7094
  c->r[3]=c->r[0]&c->r[3]; // 801F7098
  return; // 801F709C
L_801F70A0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F70A0
  c->r[6]=c->r[5]|c->r[5]; // 801F70A4
  c->r[8]=R32(c->r[3]+0x00000000u); // 801F70A8
  c->r[7]=rotl(c->r[0],0)&0x0000000Fu; // 801F70AC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F70B0
  c->r[9]=rotl(c->r[8],8)&0x000000FFu; // 801F70B4
  c->r[9]=(rotl(c->r[8],24)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 801F70B8
  c->r[0]=0u-c->r[7]; // 801F70BC
  c->r[9]=(rotl(c->r[8],8)&0x00FF0000u)|(c->r[9]&~0x00FF0000u); // 801F70C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F70C4
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 801F70C8
  c->r[7]=c->r[0]|c->r[7]; // 801F70CC
  c->r[0]=rotl(c->r[9],0)&0x000000F0u; // 801F70D0
  cmps(c,0,(int32_t)c->r[0],16); // 801F70D4
  c->r[10]=rotl(c->r[9],24)&0x00FFFFFFu; // 801F70D8
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 801F70DC
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 801F70E0
  if (crb(c,2)) { goto L_801F70F0; } // 801F70E4
  c->r[3]=0u+0xFFFFFFFFu; // 801F70E8
  goto L_801F72AC; // 801F70EC
L_801F70F0:;
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 801F70F0
  if (crb(c,2)) { goto L_801F7108; } // 801F70F4
  cmps(c,0,(int32_t)c->r[0],1); // 801F70F8
  if (crb(c,2)) { goto L_801F7108; } // 801F70FC
  c->r[3]=0u+0xFFFFFFFFu; // 801F7100
  goto L_801F72AC; // 801F7104
L_801F7108:;
  cmpu(c,0,c->r[4],0x00000004u); // 801F7108
  if (crb(c,1)) { goto L_801F7118; } // 801F710C
  c->r[3]=0u+0xFFFFFFFEu; // 801F7110
  goto L_801F72AC; // 801F7114
L_801F7118:;
  cmps(c,0,(int32_t)c->r[10],0); // 801F7118
  c->r[9]=c->r[3]+0x00000004u; // 801F711C
  c->r[11]=c->r[4]+0xFFFFFFFCu; // 801F7120
  if (!crb(c,2)) { goto L_801F7158; } // 801F7124
  cmps(c,0,(int32_t)c->r[11],4); // 801F7128
  if (!crb(c,0)) { goto L_801F7138; } // 801F712C
  c->r[3]=0u+0xFFFFFFFEu; // 801F7130
  goto L_801F72AC; // 801F7134
L_801F7138:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 801F7138
  c->r[9]=c->r[9]+0x00000004u; // 801F713C
  c->r[11]=c->r[11]+0xFFFFFFFCu; // 801F7140
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801F7144
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801F7148
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801F714C
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F7150
  c->r[10]=c->r[3]|c->r[0]; // 801F7154
L_801F7158:;
  c->r[0]=0u+0x00000008u; // 801F7158
  goto L_801F7288; // 801F715C
L_801F7160:;
  c->r[11]=addc(c,c->r[11],0xFFFFFFFFu,0); cr0(c,c->r[11]); // 801F7160
  c->r[12]=R8(c->r[9]+0x00000000u); // 801F7164
  c->r[9]=c->r[9]+0x00000001u; // 801F7168
  if (!crb(c,0)) { goto L_801F7178; } // 801F716C
  c->r[3]=0u+0xFFFFFFFEu; // 801F7170
  goto L_801F72AC; // 801F7174
L_801F7178:;
  c->ctr=c->r[0]; // 801F7178
L_801F717C:;
  c->r[3]=rotl(c->r[12],0)&0x00000080u; cr0(c,c->r[3]); // 801F717C
  if (!crb(c,2)) { goto L_801F71AC; } // 801F7180
  c->r[3]=R8(c->r[9]+0x00000000u); // 801F7184
  c->r[11]=addc(c,c->r[11],0xFFFFFFFFu,0); cr0(c,c->r[11]); // 801F7188
  c->r[9]=c->r[9]+0x00000001u; // 801F718C
  W8(c->r[6]+0x00000000u,c->r[3]); // 801F7190
  c->r[6]=c->r[6]+0x00000001u; // 801F7194
  if (!crb(c,0)) { goto L_801F71A4; } // 801F7198
  c->r[3]=0u+0xFFFFFFFEu; // 801F719C
  goto L_801F72AC; // 801F71A0
L_801F71A4:;
  c->r[10]=c->r[10]+0xFFFFFFFFu; // 801F71A4
  goto L_801F7278; // 801F71A8
L_801F71AC:;
  c->r[7]=R8(c->r[9]+0x00000000u); // 801F71AC
  cmps(c,0,(int32_t)c->r[8],0); // 801F71B0
  c->r[31]=sraw(c,c->r[7],4); // 801F71B4
  if (!crb(c,2)) { goto L_801F71C4; } // 801F71B8
  c->r[31]=c->r[31]+0x00000003u; // 801F71BC
  goto L_801F7214; // 801F71C0
L_801F71C4:;
  cmps(c,0,(int32_t)c->r[31],1); // 801F71C4
  if (!crb(c,2)) { goto L_801F71F0; } // 801F71C8
  c->r[4]=R8(c->r[9]+0x00000001u); // 801F71CC
  c->r[11]=c->r[11]+0xFFFFFFFEu; // 801F71D0
  {uint32_t ea=c->r[9]+0x00000002u; c->r[3]=R8(ea); c->r[9]=ea;} // 801F71D4
  c->r[31]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801F71D8
  c->r[31]=(rotl(c->r[7],12)&0x0000F000u)|(c->r[31]&~0x0000F000u); // 801F71DC
  c->r[3]=sraw(c,c->r[3],4); // 801F71E0
  c->r[31]=c->r[31]|c->r[3]; // 801F71E4
  c->r[31]=c->r[31]+0x00000111u; // 801F71E8
  goto L_801F7214; // 801F71EC
L_801F71F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801F71F0
  if (!crb(c,2)) { goto L_801F7210; } // 801F71F4
  {uint32_t ea=c->r[9]+0x00000001u; c->r[3]=R8(ea); c->r[9]=ea;} // 801F71F8
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 801F71FC
  c->r[31]=sraw(c,c->r[3],4); // 801F7200
  c->r[31]=(rotl(c->r[7],4)&0x000000F0u)|(c->r[31]&~0x000000F0u); // 801F7204
  c->r[31]=c->r[31]+0x00000011u; // 801F7208
  goto L_801F7214; // 801F720C
L_801F7210:;
  c->r[31]=c->r[31]+0x00000001u; // 801F7210
L_801F7214:;
  c->r[4]=R8(c->r[9]+0x00000000u); // 801F7214
  c->r[11]=addc(c,c->r[11],0xFFFFFFFEu,0); cr0(c,c->r[11]); // 801F7218
  c->r[3]=R8(c->r[9]+0x00000001u); // 801F721C
  c->r[9]=c->r[9]+0x00000002u; // 801F7220
  c->r[3]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 801F7224
  c->r[4]=c->r[3]+0x00000001u; // 801F7228
  if (!crb(c,0)) { goto L_801F7238; } // 801F722C
  c->r[3]=0u+0xFFFFFFFEu; // 801F7230
  goto L_801F72AC; // 801F7234
L_801F7238:;
  cmpu(c,0,c->r[31],c->r[10]); // 801F7238
  if (!crb(c,1)) { goto L_801F7248; } // 801F723C
  c->r[3]=0u+0xFFFFFFFCu; // 801F7240
  goto L_801F72AC; // 801F7244
L_801F7248:;
  c->r[3]=c->r[6]-c->r[4]; // 801F7248
  cmpu(c,0,c->r[3],c->r[5]); // 801F724C
  if (!crb(c,0)) { goto L_801F725C; } // 801F7250
  c->r[3]=0u+0xFFFFFFFCu; // 801F7254
  goto L_801F72AC; // 801F7258
L_801F725C:;
  c->r[10]=c->r[10]-c->r[31]; // 801F725C
L_801F7260:;
  c->r[3]=c->r[6]-c->r[4]; // 801F7260
  c->r[31]=addc(c,c->r[31],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 801F7264
  c->r[3]=R8(c->r[3]+0x00000000u); // 801F7268
  W8(c->r[6]+0x00000000u,c->r[3]); // 801F726C
  c->r[6]=c->r[6]+0x00000001u; // 801F7270
  if (crb(c,1)) { IRQCHK(c); goto L_801F7260; } // 801F7274
L_801F7278:;
  cmps(c,0,(int32_t)c->r[10],0); // 801F7278
  if (crb(c,2)) { goto L_801F7288; } // 801F727C
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 801F7280
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F717C; } // 801F7284
L_801F7288:;
  cmps(c,0,(int32_t)c->r[10],0); // 801F7288
  if (!crb(c,2)) { IRQCHK(c); goto L_801F7160; } // 801F728C
  c->r[0]=0u+0x00000020u; // 801F7290
  c->r[3]=rotl(c->r[11],1)&0x00000001u; // 801F7294
  c->r[0]=addc(c,~c->r[11],c->r[0],1); // 801F7298
  c->r[0]=0u+0x00000000u; // 801F729C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801F72A0
  c->r[0]=0u+0xFFFFFFFDu; // 801F72A4
  c->r[3]=c->r[0]&c->r[3]; // 801F72A8
L_801F72AC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F72AC
  c->r[1]=c->r[1]+0x00000010u; // 801F72B0
  return; // 801F72B4
}

// fn_801F72B8
void f_801F72B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F72B8
  c->r[0]=0u+0x00000002u; // 801F72BC
  c->r[5]=c->r[3]+0x00000001u; // 801F72C0
  c->r[9]=R8(c->r[3]+0x00000000u); // 801F72C4
  c->r[8]=c->r[1]+0x00000008u; // 801F72C8
  c->r[6]=c->r[9]+0x00000001u; // 801F72CC
  c->r[7]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801F72D0
  c->r[6]=0u+0x00000000u; // 801F72D4
  c->r[3]=c->r[3]+c->r[7]; // 801F72D8
  c->ctr=c->r[0]; // 801F72DC
L_801F72E0:;
  W8(c->r[8]+0x00000000u,c->r[6]); // 801F72E0
  W8(c->r[8]+0x00000001u,c->r[6]); // 801F72E4
  W8(c->r[8]+0x00000002u,c->r[6]); // 801F72E8
  W8(c->r[8]+0x00000003u,c->r[6]); // 801F72EC
  W8(c->r[8]+0x00000004u,c->r[6]); // 801F72F0
  W8(c->r[8]+0x00000005u,c->r[6]); // 801F72F4
  W8(c->r[8]+0x00000006u,c->r[6]); // 801F72F8
  W8(c->r[8]+0x00000007u,c->r[6]); // 801F72FC
  W8(c->r[8]+0x00000008u,c->r[6]); // 801F7300
  W8(c->r[8]+0x00000009u,c->r[6]); // 801F7304
  W8(c->r[8]+0x0000000Au,c->r[6]); // 801F7308
  W8(c->r[8]+0x0000000Bu,c->r[6]); // 801F730C
  W8(c->r[8]+0x0000000Cu,c->r[6]); // 801F7310
  W8(c->r[8]+0x0000000Du,c->r[6]); // 801F7314
  W8(c->r[8]+0x0000000Eu,c->r[6]); // 801F7318
  W8(c->r[8]+0x0000000Fu,c->r[6]); // 801F731C
  W8(c->r[8]+0x00000010u,c->r[6]); // 801F7320
  W8(c->r[8]+0x00000011u,c->r[6]); // 801F7324
  W8(c->r[8]+0x00000012u,c->r[6]); // 801F7328
  W8(c->r[8]+0x00000013u,c->r[6]); // 801F732C
  W8(c->r[8]+0x00000014u,c->r[6]); // 801F7330
  W8(c->r[8]+0x00000015u,c->r[6]); // 801F7334
  W8(c->r[8]+0x00000016u,c->r[6]); // 801F7338
  W8(c->r[8]+0x00000017u,c->r[6]); // 801F733C
  W8(c->r[8]+0x00000018u,c->r[6]); // 801F7340
  W8(c->r[8]+0x00000019u,c->r[6]); // 801F7344
  W8(c->r[8]+0x0000001Au,c->r[6]); // 801F7348
  W8(c->r[8]+0x0000001Bu,c->r[6]); // 801F734C
  W8(c->r[8]+0x0000001Cu,c->r[6]); // 801F7350
  W8(c->r[8]+0x0000001Du,c->r[6]); // 801F7354
  W8(c->r[8]+0x0000001Eu,c->r[6]); // 801F7358
  W8(c->r[8]+0x0000001Fu,c->r[6]); // 801F735C
  c->r[8]=c->r[8]+0x00000020u; // 801F7360
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F72E0; } // 801F7364
  cmpu(c,0,c->r[4],0x00000004u); // 801F7368
  if (!crb(c,2)) { goto L_801F7380; } // 801F736C
  cmpu(c,0,c->r[9],0x00000010u); // 801F7370
  if (crb(c,0)) { goto L_801F7380; } // 801F7374
  c->r[3]=0u+0x00000000u; // 801F7378
  goto L_801F7460; // 801F737C
L_801F7380:;
  c->r[6]=c->r[3]-c->r[5]; // 801F7380
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801F7384
  c->r[10]=c->r[1]+0x00000008u; // 801F7388
  c->r[4]=0u+0x00000001u; // 801F738C
  c->r[9]=0u+0x00000001u; // 801F7390
  c->ctr=c->r[6]; // 801F7394
  cmpu(c,0,c->r[5],c->r[3]); // 801F7398
  if (!crb(c,0)) { goto L_801F745C; } // 801F739C
L_801F73A0:;
  c->r[7]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801F73A0
  c->r[6]=rotl(c->r[4],0)&0x00000007u; // 801F73A4
  c->r[7]=R8(c->r[10]+c->r[7]); // 801F73A8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 801F73AC
  c->r[6]=c->r[7]&c->r[6]; cr0(c,c->r[6]); // 801F73B0
  if (!crb(c,2)) { goto L_801F7450; } // 801F73B4
  c->r[8]=R8(c->r[5]+0x00000000u); // 801F73B8
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFFEu; // 801F73BC
  c->r[7]=rotl(c->r[8],0)&0x0000003Fu; // 801F73C0
  cmps(c,0,(int32_t)c->r[8],0); // 801F73C4
  c->r[7]=c->r[7]+0x00000001u; // 801F73C8
  c->r[11]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801F73CC
  c->r[6]=c->r[6]+c->r[11]; // 801F73D0
  if (!crb(c,2)) { goto L_801F73E0; } // 801F73D4
  cmpu(c,0,c->r[4],c->r[0]); // 801F73D8
  if (!crb(c,0)) { goto L_801F7450; } // 801F73DC
L_801F73E0:;
  cmpu(c,0,c->r[6],c->r[3]); // 801F73E0
  if (crb(c,0)) { goto L_801F73F0; } // 801F73E4
  c->r[3]=0u+0x00000000u; // 801F73E8
  goto L_801F7460; // 801F73EC
L_801F73F0:;
  c->r[6]=rotl(c->r[8],0)&0x00000080u; cr0(c,c->r[6]); // 801F73F0
  if (crb(c,2)) { goto L_801F741C; } // 801F73F4
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFEu; // 801F73F8
  c->r[6]=c->r[6]+c->r[11]; // 801F73FC
  c->r[8]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801F7400
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 801F7404
  c->r[7]=R8(c->r[10]+c->r[8]); // 801F7408
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 801F740C
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801F7410
  c->r[6]=c->r[7]|c->r[6]; // 801F7414
  W8(c->r[10]+c->r[8],c->r[6]); // 801F7418
L_801F741C:;
  c->r[6]=R8(c->r[5]+0x00000000u); // 801F741C
  c->r[6]=rotl(c->r[6],0)&0x00000040u; cr0(c,c->r[6]); // 801F7420
  if (crb(c,2)) { goto L_801F7450; } // 801F7424
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFEu; // 801F7428
  c->r[6]=c->r[11]+c->r[6]; // 801F742C
  c->r[6]=c->r[6]+0x00000001u; // 801F7430
  c->r[8]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801F7434
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 801F7438
  c->r[7]=R8(c->r[10]+c->r[8]); // 801F743C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 801F7440
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801F7444
  c->r[6]=c->r[7]|c->r[6]; // 801F7448
  W8(c->r[10]+c->r[8],c->r[6]); // 801F744C
L_801F7450:;
  c->r[4]=c->r[4]+0x00000001u; // 801F7450
  c->r[5]=c->r[5]+0x00000001u; // 801F7454
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F73A0; } // 801F7458
L_801F745C:;
  c->r[3]=0u+0x00000001u; // 801F745C
L_801F7460:;
  c->r[1]=c->r[1]+0x00000050u; // 801F7460
  return; // 801F7464
}

// fn_801F7468
void f_801F7468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7468
  c->r[0]=c->lr; // 801F746C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F7470
  c->r[11]=c->r[1]+0x00000040u; // 801F7474
  c->lr=0x801F747Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F7478
  c->r[7]=R32(c->r[3]+0x00000000u); // 801F747C
  c->r[22]=c->r[3]|c->r[3]; // 801F7480
  c->r[9]=R32(c->r[3]+0x00000000u); // 801F7484
  c->r[23]=c->r[4]|c->r[4]; // 801F7488
  c->r[6]=rotl(c->r[7],8)&0x00FF0000u; // 801F748C
  c->r[0]=rotl(c->r[7],24)&0x0000FF00u; // 801F7490
  c->r[6]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801F7494
  c->r[8]=rotl(c->r[9],8)&0x00FF0000u; // 801F7498
  c->r[0]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F749C
  c->r[7]=rotl(c->r[9],24)&0x0000FF00u; // 801F74A0
  c->r[0]=c->r[6]|c->r[0]; // 801F74A4
  c->r[8]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801F74A8
  c->r[29]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[29]); // 801F74AC
  c->r[7]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801F74B0
  c->r[0]=c->r[8]|c->r[7]; // 801F74B4
  c->r[30]=c->r[5]|c->r[5]; // 801F74B8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801F74BC
  if (crb(c,2)) { goto L_801F74CC; } // 801F74C0
  c->r[31]=c->r[3]+0x00000004u; // 801F74C4
  goto L_801F74D0; // 801F74C8
L_801F74CC:;
  c->r[31]=c->r[3]+0x00000008u; // 801F74CC
L_801F74D0:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 801F74D0
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 801F74D4
  c->r[5]=R8(c->r[31]+0x00000000u); // 801F74D8
  cmps(c,0,(int32_t)c->r[0],32); // 801F74DC
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 801F74E0
  c->r[28]=c->r[31]+0x00000001u; // 801F74E4
  c->r[0]=c->r[5]+0x00000001u; // 801F74E8
  c->r[27]=rotl(c->r[7],0)&0x0000000Fu; // 801F74EC
  c->r[24]=c->r[6]+0x00000004u; // 801F74F0
  c->r[26]=0u+0x00000000u; // 801F74F4
  c->r[21]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801F74F8
  c->r[25]=0u+0x00000000u; // 801F74FC
  if (crb(c,2)) { goto L_801F750C; } // 801F7500
  c->r[3]=0u+0xFFFFFFFFu; // 801F7504
  goto L_801F76AC; // 801F7508
L_801F750C:;
  cmpu(c,0,c->r[27],0x00000004u); // 801F750C
  if (crb(c,2)) { goto L_801F7524; } // 801F7510
  cmpu(c,0,c->r[27],0x00000008u); // 801F7514
  if (crb(c,2)) { goto L_801F7524; } // 801F7518
  c->r[3]=0u+0xFFFFFFFFu; // 801F751C
  goto L_801F76AC; // 801F7520
L_801F7524:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F7524
  if (!crb(c,2)) { goto L_801F755C; } // 801F7528
  c->r[0]=c->r[21]+0x00000008u; // 801F752C
  cmpu(c,0,c->r[4],c->r[0]); // 801F7530
  if (!crb(c,0)) { goto L_801F7540; } // 801F7534
  c->r[3]=0u+0xFFFFFFFEu; // 801F7538
  goto L_801F76AC; // 801F753C
L_801F7540:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801F7540
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801F7544
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801F7548
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801F754C
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F7550
  c->r[29]=c->r[3]|c->r[0]; // 801F7554
  goto L_801F7570; // 801F7558
L_801F755C:;
  c->r[0]=c->r[21]+0x00000004u; // 801F755C
  cmpu(c,0,c->r[4],c->r[0]); // 801F7560
  if (!crb(c,0)) { goto L_801F7570; } // 801F7564
  c->r[3]=0u+0xFFFFFFFEu; // 801F7568
  goto L_801F76AC; // 801F756C
L_801F7570:;
  c->r[3]=c->r[31]|c->r[31]; // 801F7570
  c->r[4]=c->r[27]|c->r[27]; // 801F7574
  c->lr=0x801F757Cu; f_801F72B8(c); // 801F7578
  cmps(c,0,(int32_t)c->r[3],0); // 801F757C
  if (!crb(c,2)) { goto L_801F758C; } // 801F7580
  c->r[3]=0u+0xFFFFFFFBu; // 801F7584
  goto L_801F76AC; // 801F7588
L_801F758C:;
  c->r[3]=c->r[31]+c->r[21]; // 801F758C
  c->r[0]=c->r[3]-c->r[22]; // 801F7590
  c->r[4]=c->r[23]-c->r[0]; cr0(c,c->r[4]); // 801F7594
  if (!crb(c,0)) { goto L_801F75A4; } // 801F7598
  c->r[3]=0u+0xFFFFFFFEu; // 801F759C
  goto L_801F76AC; // 801F75A0
L_801F75A4:;
  c->r[9]=c->r[28]|c->r[28]; // 801F75A4
  c->r[0]=addc(c,~c->r[27],0x00000020u,1); // 801F75A8
  goto L_801F7688; // 801F75AC
L_801F75B0:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 801F75B0
  c->r[4]=addc(c,c->r[4],0xFFFFFFFCu,0); cr0(c,c->r[4]); // 801F75B4
  c->r[5]=0u+0x00000020u; // 801F75B8
  c->r[3]=c->r[3]+0x00000004u; // 801F75BC
  c->r[7]=rotl(c->r[8],8)&0x00FF0000u; // 801F75C0
  c->r[6]=rotl(c->r[8],24)&0x0000FF00u; // 801F75C4
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801F75C8
  c->r[6]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801F75CC
  c->r[6]=c->r[7]|c->r[6]; // 801F75D0
  if (!crb(c,0)) { goto L_801F7680; } // 801F75D4
  c->r[3]=0u+0xFFFFFFFEu; // 801F75D8
  goto L_801F76AC; // 801F75DC
  goto L_801F7680; // 801F75E0
L_801F75E4:;
  c->r[7]=R8(c->r[9]+0x00000000u); // 801F75E4
  c->r[10]=rotl(c->r[6],1)&0x00000001u; // 801F75E8
  c->r[9]=rotl(c->r[9],0)&0xFFFFFFFEu; // 801F75EC
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[7]<<((c->r[10])&31)); // 801F75F0
  c->r[8]=rotl(c->r[7],0)&0x0000003Fu; // 801F75F4
  c->r[7]=rotl(c->r[11],0)&0x00000080u; cr0(c,c->r[7]); // 801F75F8
  c->r[8]=c->r[8]+0x00000001u; // 801F75FC
  c->r[7]=c->r[10]+c->r[9]; // 801F7600
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801F7604
  c->r[9]=c->r[8]+c->r[7]; // 801F7608
  if (crb(c,2)) { goto L_801F7674; } // 801F760C
  c->r[25]=c->r[25]+0x00000001u; // 801F7610
  c->r[8]=R8(c->r[9]+0x00000000u); // 801F7614
  c->r[7]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[27]); // 801F7618
  c->r[26]=((c->r[27])&0x20)?0u:(c->r[26]>>((c->r[27])&31)); // 801F761C
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801F7620
  c->r[9]=c->r[28]|c->r[28]; // 801F7624
  c->r[26]=c->r[26]|c->r[8]; // 801F7628
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 801F762C
  cmpu(c,0,c->r[29],c->r[7]); // 801F7630
  if (crb(c,1)) { goto L_801F7648; } // 801F7634
  c->r[7]=c->r[24]-c->r[25]; // 801F7638
  c->r[25]=c->r[24]|c->r[24]; // 801F763C
  c->r[7]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[7]); // 801F7640
  c->r[26]=((c->r[7])&0x20)?0u:(c->r[26]>>((c->r[7])&31)); // 801F7644
L_801F7648:;
  cmpu(c,0,c->r[25],c->r[24]); // 801F7648
  if (!crb(c,2)) { goto L_801F7674; } // 801F764C
  c->r[8]=rotl(c->r[26],8)&0x00FF0000u; // 801F7650
  c->r[7]=rotl(c->r[26],24)&0x0000FF00u; // 801F7654
  c->r[8]=(rotl(c->r[26],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801F7658
  c->r[25]=0u+0x00000000u; // 801F765C
  c->r[7]=(rotl(c->r[26],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801F7660
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 801F7664
  c->r[7]=c->r[8]|c->r[7]; // 801F7668
  W32(c->r[30]+0x00000000u,c->r[7]); // 801F766C
  c->r[30]=c->r[30]+0x00000004u; // 801F7670
L_801F7674:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F7674
  if (!crb(c,1)) { goto L_801F7688; } // 801F7678
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801F767C
L_801F7680:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801F7680
  if (!crb(c,0)) { IRQCHK(c); goto L_801F75E4; } // 801F7684
L_801F7688:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F7688
  if (crb(c,1)) { IRQCHK(c); goto L_801F75B0; } // 801F768C
  c->r[0]=0u+0x00000020u; // 801F7690
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801F7694
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 801F7698
  c->r[0]=0u+0x00000000u; // 801F769C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801F76A0
  c->r[0]=0u+0xFFFFFFFDu; // 801F76A4
  c->r[3]=c->r[0]&c->r[3]; // 801F76A8
L_801F76AC:;
  c->r[11]=c->r[1]+0x00000040u; // 801F76AC
  c->lr=0x801F76B4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F76B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F76B4
  c->lr=c->r[0]; // 801F76B8
  c->r[1]=c->r[1]+0x00000040u; // 801F76BC
  return; // 801F76C0
}

// fn_801F76C4
void f_801F76C4(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000000u); // 801F76C4
  c->r[9]=0u+0x00000000u; // 801F76C8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801F76CC
  c->r[7]=rotl(c->r[6],8)&0x000000FFu; // 801F76D0
  c->r[7]=(rotl(c->r[6],24)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801F76D4
  c->r[8]=rotl(c->r[0],0)&0x0000000Fu; // 801F76D8
  c->r[7]=(rotl(c->r[6],8)&0x00FF0000u)|(c->r[7]&~0x00FF0000u); // 801F76DC
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801F76E0
  c->r[0]=rotl(c->r[7],0)&0x000000F0u; // 801F76E4
  cmps(c,0,(int32_t)c->r[0],128); // 801F76E8
  c->r[7]=rotl(c->r[7],24)&0x00FFFFFFu; // 801F76EC
  if (crb(c,2)) { goto L_801F76FC; } // 801F76F0
  c->r[3]=0u+0xFFFFFFFFu; // 801F76F4
  return; // 801F76F8
L_801F76FC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801F76FC
  if (crb(c,2)) { goto L_801F7714; } // 801F7700
  cmpu(c,0,c->r[8],0x00000001u); // 801F7704
  if (crb(c,2)) { goto L_801F7714; } // 801F7708
  c->r[3]=0u+0xFFFFFFFFu; // 801F770C
  return; // 801F7710
L_801F7714:;
  cmpu(c,0,c->r[4],0x00000004u); // 801F7714
  if (crb(c,1)) { goto L_801F7724; } // 801F7718
  c->r[3]=0u+0xFFFFFFFEu; // 801F771C
  return; // 801F7720
L_801F7724:;
  cmpu(c,0,c->r[8],0x00000001u); // 801F7724
  c->r[6]=c->r[3]+0x00000004u; // 801F7728
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 801F772C
  if (crb(c,2)) { goto L_801F7764; } // 801F7730
L_801F7734:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801F7734
  c->r[0]=R8(c->r[6]+0x00000000u); // 801F7738
  c->r[6]=c->r[6]+0x00000001u; // 801F773C
  if (!crb(c,0)) { goto L_801F774C; } // 801F7740
  c->r[3]=0u+0xFFFFFFFEu; // 801F7744
  return; // 801F7748
L_801F774C:;
  c->r[9]=c->r[9]+c->r[0]; // 801F774C
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 801F7750
  W8(c->r[5]+0x00000000u,c->r[9]); // 801F7754
  c->r[5]=c->r[5]+0x00000001u; // 801F7758
  if (crb(c,1)) { IRQCHK(c); goto L_801F7734; } // 801F775C
  goto L_801F779C; // 801F7760
L_801F7764:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 801F7764
  c->r[4]=addc(c,c->r[4],0xFFFFFFFEu,0); cr0(c,c->r[4]); // 801F7768
  c->r[6]=c->r[6]+0x00000002u; // 801F776C
  c->r[0]=rotl(c->r[3],8)&0x0000FF00u; // 801F7770
  c->r[0]=(rotl(c->r[3],24)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801F7774
  if (!crb(c,0)) { goto L_801F7784; } // 801F7778
  c->r[3]=0u+0xFFFFFFFEu; // 801F777C
  return; // 801F7780
L_801F7784:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801F7784
  c->r[7]=addc(c,c->r[7],0xFFFFFFFEu,0); cr0(c,c->r[7]); // 801F7788
  c->r[9]=c->r[9]+c->r[0]; // 801F778C
  W16(0u+c->r[5],__builtin_bswap16((uint16_t)c->r[9])); // 801F7790
  c->r[5]=c->r[5]+0x00000002u; // 801F7794
  if (crb(c,1)) { IRQCHK(c); goto L_801F7764; } // 801F7798
L_801F779C:;
  cmps(c,0,(int32_t)c->r[4],32); // 801F779C
  if (!crb(c,1)) { goto L_801F77AC; } // 801F77A0
  c->r[3]=0u+0xFFFFFFFDu; // 801F77A4
  return; // 801F77A8
L_801F77AC:;
  c->r[3]=0u+0x00000000u; // 801F77AC
  return; // 801F77B0
}

// fn_801F77B4
void f_801F77B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F77B4
  c->r[0]=c->lr; // 801F77B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F77BC
  c->r[0]=R32(c->r[13]+0xFFFFA328u); // 801F77C0
  cmps(c,0,(int32_t)c->r[0],0); // 801F77C4
  if (!crb(c,2)) { goto L_801F77E8; } // 801F77C8
  c->lr=0x801F77D0u; f_801F85F0(c); // 801F77CC
  c->lr=0x801F77D4u; f_80160C68(c); // 801F77D0
  c->r[0]=0u+0x00000001u; // 801F77D4
  W32(c->r[13]+0xFFFFA328u,c->r[0]); // 801F77D8
  c->lr=0x801F77E0u; f_80160C90(c); // 801F77DC
  c->r[3]=R32(c->r[13]+0xFFFF95D0u); // 801F77E0
  c->lr=0x801F77E8u; f_8015AE88(c); // 801F77E4
L_801F77E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F77E8
  c->lr=c->r[0]; // 801F77EC
  c->r[1]=c->r[1]+0x00000010u; // 801F77F0
  return; // 801F77F4
}

// fn_801F77F8
void f_801F77F8(Ctx* __restrict c) {
  f_801F8644(c); return; // 801F77F8
}

// fn_801F77FC
void f_801F77FC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F77FC
  c->r[12]=c->r[1]|c->r[1]; // 801F7800
  c->r[11]=addc(c,~c->r[11],0xFFFFFF80u,1); // 801F7804
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7808
  c->r[0]=c->lr; // 801F780C
  c->r[11]=c->r[12]|c->r[12]; // 801F7810
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F7814
  c->lr=0x801F781Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F7818
  c->r[27]=c->r[4]|c->r[4]; // 801F781C
  c->r[28]=c->r[5]|c->r[5]; // 801F7820
  c->lr=0x801F7828u; f_801F8BAC(c); // 801F7824
  cmps(c,0,(int32_t)c->r[3],0); // 801F7828
  c->r[29]=c->r[3]|c->r[3]; // 801F782C
  if (!crb(c,0)) { goto L_801F783C; } // 801F7830
  c->lr=0x801F7838u; f_801F7DF0(c); // 801F7834
  goto L_801F7904; // 801F7838
L_801F783C:;
  c->r[4]=c->r[1]+0x00000040u; // 801F783C
  c->r[5]=0u+0x00000020u; // 801F7840
  c->lr=0x801F7848u; f_801F8CB0(c); // 801F7844
  cmps(c,0,(int32_t)c->r[3],0); // 801F7848
  if (!crb(c,0)) { goto L_801F7858; } // 801F784C
  c->lr=0x801F7854u; f_801F7DF0(c); // 801F7850
  goto L_801F7904; // 801F7854
L_801F7858:;
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 801F7858
  c->r[3]=c->r[29]|c->r[29]; // 801F785C
  c->r[4]=0u+0x00000000u; // 801F7860
  c->r[5]=0u+0x00000000u; // 801F7864
  c->r[0]=c->r[6]+0x0000001Fu; // 801F7868
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801F786C
  c->lr=0x801F7874u; f_801F8D50(c); // 801F7870
  cmps(c,0,(int32_t)c->r[3],0); // 801F7874
  if (!crb(c,0)) { goto L_801F7884; } // 801F7878
  c->lr=0x801F7880u; f_801F7DF0(c); // 801F787C
  goto L_801F7904; // 801F7880
L_801F7884:;
  c->r[3]=c->r[28]|c->r[28]; // 801F7884
  c->r[4]=c->r[30]|c->r[30]; // 801F7888
  c->lr=0x801F7890u; f_801A0EF8(c); // 801F788C
  c->r[0]=0u+0x00000000u; // 801F7890
  c->r[31]=c->r[3]|c->r[3]; // 801F7894
  cmpu(c,0,c->r[3],c->r[0]); // 801F7898
  if (!crb(c,2)) { goto L_801F78A8; } // 801F789C
  c->r[3]=0u+0xFFFFEC77u; // 801F78A0
  goto L_801F7904; // 801F78A4
L_801F78A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801F78A8
  c->r[4]=c->r[31]|c->r[31]; // 801F78AC
  c->r[5]=c->r[30]|c->r[30]; // 801F78B0
  c->lr=0x801F78B8u; f_801F8CB0(c); // 801F78B4
  cmps(c,0,(int32_t)c->r[3],0); // 801F78B8
  c->r[30]=c->r[3]|c->r[3]; // 801F78BC
  if (!crb(c,0)) { goto L_801F78DC; } // 801F78C0
  c->r[3]=c->r[28]|c->r[28]; // 801F78C4
  c->r[4]=c->r[31]|c->r[31]; // 801F78C8
  c->lr=0x801F78D0u; f_801A0F08(c); // 801F78CC
  c->r[3]=c->r[30]|c->r[30]; // 801F78D0
  c->lr=0x801F78D8u; f_801F7DF0(c); // 801F78D4
  goto L_801F7904; // 801F78D8
L_801F78DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801F78DC
  c->r[4]=c->r[1]+0x00000020u; // 801F78E0
  c->lr=0x801F78E8u; f_801EFD18(c); // 801F78E4
  c->r[3]=c->r[27]|c->r[27]; // 801F78E8
  c->r[4]=c->r[1]+0x00000020u; // 801F78EC
  c->r[5]=0u+0x0000001Cu; // 801F78F0
  c->lr=0x801F78F8u; f_80004338(c); // 801F78F4
  W32(c->r[27]+0x0000001Cu,c->r[29]); // 801F78F8
  c->r[3]=0u+0x00000000u; // 801F78FC
  W32(c->r[27]+0x00000020u,c->r[28]); // 801F7900
L_801F7904:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F7904
  c->r[11]=c->r[10]|c->r[10]; // 801F7908
  c->lr=0x801F7910u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F790C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F7910
  c->lr=c->r[0]; // 801F7914
  c->r[1]=c->r[10]|c->r[10]; // 801F7918
  return; // 801F791C
}

// fn_801F7920
void f_801F7920(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F7920
  c->r[12]=c->r[1]|c->r[1]; // 801F7924
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 801F7928
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F792C
  c->r[0]=c->lr; // 801F7930
  c->r[11]=c->r[12]|c->r[12]; // 801F7934
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F7938
  c->lr=0x801F7940u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F793C
  c->r[25]=c->r[5]|c->r[5]; // 801F7940
  c->r[30]=c->r[6]|c->r[6]; // 801F7944
  c->r[24]=c->r[3]|c->r[3]; // 801F7948
  c->r[23]=c->r[4]|c->r[4]; // 801F794C
  c->r[31]=c->r[7]|c->r[7]; // 801F7950
  c->r[6]=c->r[1]+0x00000020u; // 801F7954
  c->r[5]=0u+0x00000000u; // 801F7958
  c->lr=0x801F7960u; f_801F9274(c); // 801F795C
  cmps(c,0,(int32_t)c->r[3],0); // 801F7960
  if (!crb(c,0)) { goto L_801F7970; } // 801F7964
  c->lr=0x801F796Cu; f_801F7DF0(c); // 801F7968
  goto L_801F7B34; // 801F796C
L_801F7970:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F7970
  cmps(c,0,(int32_t)c->r[0],0); // 801F7974
  if (!crb(c,2)) { goto L_801F7988; } // 801F7978
  c->r[3]=0u+0xFFFFFBFCu; // 801F797C
  c->lr=0x801F7984u; f_801F7DF0(c); // 801F7980
  goto L_801F7B34; // 801F7984
L_801F7988:;
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 801F7988
  c->r[3]=c->r[31]|c->r[31]; // 801F798C
  c->r[0]=c->r[4]+0x0000001Fu; // 801F7990
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801F7994
  c->lr=0x801F799Cu; f_801A0EF8(c); // 801F7998
  c->r[29]=0u+0x00000000u; // 801F799C
  c->r[26]=c->r[3]|c->r[3]; // 801F79A0
  cmpu(c,0,c->r[3],c->r[29]); // 801F79A4
  if (!crb(c,2)) { goto L_801F79B4; } // 801F79A8
  c->r[3]=0u+0xFFFFEC77u; // 801F79AC
  goto L_801F7B34; // 801F79B0
L_801F79B4:;
  c->r[4]=c->r[23]|c->r[23]; // 801F79B4
  c->r[3]=c->r[24]|c->r[24]; // 801F79B8
  c->r[5]=c->r[26]|c->r[26]; // 801F79BC
  c->r[6]=c->r[1]+0x00000020u; // 801F79C0
  c->lr=0x801F79C8u; f_801F9274(c); // 801F79C4
  cmps(c,0,(int32_t)c->r[3],0); // 801F79C8
  if (!crb(c,0)) { goto L_801F79D8; } // 801F79CC
  c->lr=0x801F79D4u; f_801F7DF0(c); // 801F79D0
  goto L_801F7B34; // 801F79D4
L_801F79D8:;
  c->r[28]=0u+0x00000000u; // 801F79D8
  goto L_801F7A34; // 801F79DC
L_801F79E0:;
  c->r[4]=c->r[23]|c->r[23]; // 801F79E0
  c->r[3]=c->r[24]|c->r[24]; // 801F79E4
  c->r[6]=c->r[25]|c->r[25]; // 801F79E8
  c->r[5]=c->r[26]+c->r[29]; // 801F79EC
  c->lr=0x801F79F4u; f_801F8C18(c); // 801F79F0
  cmps(c,0,(int32_t)c->r[3],0); // 801F79F4
  c->r[27]=c->r[3]|c->r[3]; // 801F79F8
  if (!crb(c,0)) { goto L_801F7A24; } // 801F79FC
  c->lr=0x801F7A04u; f_801F7DF0(c); // 801F7A00
  cmps(c,0,(int32_t)c->r[3],-5010); // 801F7A04
  if (crb(c,2)) { goto L_801F7A24; } // 801F7A08
  c->r[3]=c->r[31]|c->r[31]; // 801F7A0C
  c->r[4]=c->r[26]|c->r[26]; // 801F7A10
  c->lr=0x801F7A18u; f_801A0F08(c); // 801F7A14
  c->r[3]=c->r[27]|c->r[27]; // 801F7A18
  c->lr=0x801F7A20u; f_801F7DF0(c); // 801F7A1C
  goto L_801F7B34; // 801F7A20
L_801F7A24:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F7A24
  if (!crb(c,0)) { goto L_801F7A40; } // 801F7A28
  c->r[28]=c->r[28]+0x00000001u; // 801F7A2C
  c->r[29]=c->r[29]+0x000000D8u; // 801F7A30
L_801F7A34:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F7A34
  cmpu(c,0,c->r[28],c->r[0]); // 801F7A38
  if (crb(c,0)) { IRQCHK(c); goto L_801F79E0; } // 801F7A3C
L_801F7A40:;
  c->r[3]=c->r[31]|c->r[31]; // 801F7A40
  c->r[4]=c->r[26]|c->r[26]; // 801F7A44
  c->lr=0x801F7A4Cu; f_801A0F08(c); // 801F7A48
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F7A4C
  cmpu(c,0,c->r[28],c->r[0]); // 801F7A50
  if (!crb(c,2)) { goto L_801F7A60; } // 801F7A54
  c->r[3]=0u+0xFFFFEC6Eu; // 801F7A58
  goto L_801F7B34; // 801F7A5C
L_801F7A60:;
  c->r[3]=c->r[27]|c->r[27]; // 801F7A60
  c->r[4]=c->r[1]+0x00000040u; // 801F7A64
  c->r[5]=0u+0x00000020u; // 801F7A68
  c->lr=0x801F7A70u; f_801F8CB0(c); // 801F7A6C
  cmps(c,0,(int32_t)c->r[3],0); // 801F7A70
  if (!crb(c,0)) { goto L_801F7A80; } // 801F7A74
  c->lr=0x801F7A7Cu; f_801F7DF0(c); // 801F7A78
  goto L_801F7B34; // 801F7A7C
L_801F7A80:;
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 801F7A80
  c->r[3]=c->r[27]|c->r[27]; // 801F7A84
  c->r[4]=0u+0x00000000u; // 801F7A88
  c->r[5]=0u+0x00000000u; // 801F7A8C
  c->r[0]=c->r[6]+0x0000001Fu; // 801F7A90
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801F7A94
  c->lr=0x801F7A9Cu; f_801F8D50(c); // 801F7A98
  cmps(c,0,(int32_t)c->r[3],0); // 801F7A9C
  if (!crb(c,0)) { goto L_801F7AAC; } // 801F7AA0
  c->lr=0x801F7AA8u; f_801F7DF0(c); // 801F7AA4
  goto L_801F7B34; // 801F7AA8
L_801F7AAC:;
  c->r[3]=c->r[31]|c->r[31]; // 801F7AAC
  c->r[4]=c->r[28]|c->r[28]; // 801F7AB0
  c->lr=0x801F7AB8u; f_801A0EF8(c); // 801F7AB4
  c->r[0]=0u+0x00000000u; // 801F7AB8
  c->r[29]=c->r[3]|c->r[3]; // 801F7ABC
  cmpu(c,0,c->r[3],c->r[0]); // 801F7AC0
  if (!crb(c,2)) { goto L_801F7AD0; } // 801F7AC4
  c->r[3]=0u+0xFFFFEC77u; // 801F7AC8
  goto L_801F7B34; // 801F7ACC
L_801F7AD0:;
  c->r[3]=c->r[27]|c->r[27]; // 801F7AD0
  c->r[4]=c->r[29]|c->r[29]; // 801F7AD4
  c->r[5]=c->r[28]|c->r[28]; // 801F7AD8
  c->lr=0x801F7AE0u; f_801F8CB0(c); // 801F7ADC
  cmps(c,0,(int32_t)c->r[3],0); // 801F7AE0
  c->r[28]=c->r[3]|c->r[3]; // 801F7AE4
  if (!crb(c,0)) { goto L_801F7B04; } // 801F7AE8
  c->r[3]=c->r[31]|c->r[31]; // 801F7AEC
  c->r[4]=c->r[29]|c->r[29]; // 801F7AF0
  c->lr=0x801F7AF8u; f_801A0F08(c); // 801F7AF4
  c->r[3]=c->r[28]|c->r[28]; // 801F7AF8
  c->lr=0x801F7B00u; f_801F7DF0(c); // 801F7AFC
  goto L_801F7B34; // 801F7B00
L_801F7B04:;
  c->r[3]=c->r[29]|c->r[29]; // 801F7B04
  c->r[4]=c->r[1]+0x00000024u; // 801F7B08
  c->lr=0x801F7B10u; f_801EFD18(c); // 801F7B0C
  c->r[3]=c->r[30]|c->r[30]; // 801F7B10
  c->r[4]=c->r[1]+0x00000024u; // 801F7B14
  c->r[5]=0u+0x0000001Cu; // 801F7B18
  c->lr=0x801F7B20u; f_80004338(c); // 801F7B1C
  c->r[0]=0u+0x00000001u; // 801F7B20
  W32(c->r[30]+0x0000001Cu,c->r[27]); // 801F7B24
  c->r[3]=0u+0x00000000u; // 801F7B28
  W32(c->r[30]+0x00000020u,c->r[31]); // 801F7B2C
  W8(c->r[30]+0x00000024u,c->r[0]); // 801F7B30
L_801F7B34:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F7B34
  c->r[11]=c->r[10]|c->r[10]; // 801F7B38
  c->lr=0x801F7B40u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F7B3C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F7B40
  c->lr=c->r[0]; // 801F7B44
  c->r[1]=c->r[10]|c->r[10]; // 801F7B48
  return; // 801F7B4C
}

// fn_801F7B50
void f_801F7B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7B50
  c->r[0]=c->lr; // 801F7B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F7B58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F7B5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F7B60
  c->r[30]=c->r[4]|c->r[4]; // 801F7B64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F7B68
  c->r[29]=c->r[3]|c->r[3]; // 801F7B6C
  c->r[31]=R32(c->r[3]+0x00000008u); // 801F7B70
  c->lr=0x801F7B78u; f_80169CB8(c); // 801F7B74
  c->r[0]=R32(c->r[3]+0x00000008u); // 801F7B78
  c->r[4]=0u+0x80330000u; // 801F7B7C
  c->r[4]=c->r[4]+0x000006B0u; // 801F7B80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801F7B84
  c->r[5]=R32(c->r[4]+0x00000038u); // 801F7B88
  c->r[7]=c->r[3]+c->r[0]; // 801F7B8C
L_801F7B90:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801F7B90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801F7B94
  if (!crb(c,2)) { goto L_801F7BA4; } // 801F7B98
  c->r[3]=c->r[31]|c->r[31]; // 801F7B9C
  goto L_801F7DD4; // 801F7BA0
L_801F7BA4:;
  cmps(c,0,(int32_t)c->r[0],47); // 801F7BA4
  if (!crb(c,2)) { goto L_801F7BB8; } // 801F7BA8
  c->r[31]=R32(c->r[29]+0x00000004u); // 801F7BAC
  c->r[30]=c->r[30]+0x00000001u; // 801F7BB0
  IRQCHK(c); goto L_801F7B90; // 801F7BB4
L_801F7BB8:;
  cmps(c,0,(int32_t)c->r[0],46); // 801F7BB8
  if (!crb(c,2)) { goto L_801F7C40; } // 801F7BBC
  c->r[0]=R8(c->r[30]+0x00000001u); // 801F7BC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801F7BC4
  cmps(c,0,(int32_t)c->r[0],46); // 801F7BC8
  if (!crb(c,2)) { goto L_801F7C20; } // 801F7BCC
  c->r[0]=R8(c->r[30]+0x00000002u); // 801F7BD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801F7BD4
  cmps(c,0,(int32_t)c->r[0],47); // 801F7BD8
  if (!crb(c,2)) { goto L_801F7C08; } // 801F7BDC
  c->r[0]=R32(c->r[29]+0x00000004u); // 801F7BE0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801F7BE4
  if (!crb(c,2)) { goto L_801F7BF4; } // 801F7BE8
  c->r[3]=0u+0xFFFFFFFFu; // 801F7BEC
  goto L_801F7DD4; // 801F7BF0
L_801F7BF4:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801F7BF4
  c->r[30]=c->r[30]+0x00000003u; // 801F7BF8
  c->r[4]=c->r[3]+c->r[0]; // 801F7BFC
  c->r[31]=R32(c->r[4]+0x00000004u); // 801F7C00
  IRQCHK(c); goto L_801F7B90; // 801F7C04
L_801F7C08:;
  cmps(c,0,(int32_t)c->r[0],0); // 801F7C08
  if (!crb(c,2)) { goto L_801F7C40; } // 801F7C0C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801F7C10
  c->r[3]=c->r[3]+c->r[0]; // 801F7C14
  c->r[3]=R32(c->r[3]+0x00000004u); // 801F7C18
  goto L_801F7DD4; // 801F7C1C
L_801F7C20:;
  cmps(c,0,(int32_t)c->r[0],47); // 801F7C20
  if (!crb(c,2)) { goto L_801F7C30; } // 801F7C24
  c->r[30]=c->r[30]+0x00000002u; // 801F7C28
  IRQCHK(c); goto L_801F7B90; // 801F7C2C
L_801F7C30:;
  cmps(c,0,(int32_t)c->r[0],0); // 801F7C30
  if (!crb(c,2)) { goto L_801F7C40; } // 801F7C34
  c->r[3]=c->r[31]|c->r[31]; // 801F7C38
  goto L_801F7DD4; // 801F7C3C
L_801F7C40:;
  c->r[6]=c->r[30]|c->r[30]; // 801F7C40
  goto L_801F7C4C; // 801F7C44
L_801F7C48:;
  c->r[6]=c->r[6]+0x00000001u; // 801F7C48
L_801F7C4C:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 801F7C4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801F7C50
  if (crb(c,2)) { goto L_801F7C60; } // 801F7C54
  cmps(c,0,(int32_t)c->r[0],47); // 801F7C58
  if (!crb(c,2)) { IRQCHK(c); goto L_801F7C48; } // 801F7C5C
L_801F7C60:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801F7C60
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801F7C64
  c->r[6]=c->r[6]-c->r[30]; // 801F7C68
  c->r[8]=0u-c->r[9]; // 801F7C6C
  c->r[4]=c->r[3]+c->r[0]; // 801F7C70
  c->r[31]=c->r[31]+0x00000001u; // 801F7C74
  c->r[0]=c->r[8]|c->r[9]; // 801F7C78
  c->r[4]=R32(c->r[4]+0x00000008u); // 801F7C7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801F7C80
  goto L_801F7DA8; // 801F7C84
L_801F7C88:;
  c->r[8]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801F7C88
  c->r[9]=c->r[3]+c->r[8]; // 801F7C8C
L_801F7C90:;
  c->r[10]=R32(c->r[9]+0x00000000u); // 801F7C90
  c->r[8]=rotl(c->r[10],0)&0xFF000000u; cr0(c,c->r[8]); // 801F7C94
  if (!crb(c,2)) { goto L_801F7CA4; } // 801F7C98
  cmps(c,0,(int32_t)c->r[0],1); // 801F7C9C
  if (crb(c,2)) { goto L_801F7D88; } // 801F7CA0
L_801F7CA4:;
  c->r[8]=rotl(c->r[10],0)&0x00FFFFFFu; // 801F7CA4
  c->r[12]=c->r[7]+c->r[8]; // 801F7CA8
  c->r[8]=R8(c->r[7]+c->r[8]); // 801F7CAC
  cmps(c,0,(int32_t)c->r[8],46); // 801F7CB0
  if (!crb(c,2)) { goto L_801F7CD0; } // 801F7CB4
  c->r[8]=R8(c->r[12]+0x00000001u); // 801F7CB8
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[8]); // 801F7CBC
  if (!crb(c,2)) { goto L_801F7CD0; } // 801F7CC0
  c->r[9]=c->r[9]+0x0000000Cu; // 801F7CC4
  c->r[31]=c->r[31]+0x00000001u; // 801F7CC8
  IRQCHK(c); goto L_801F7C90; // 801F7CCC
L_801F7CD0:;
  c->r[10]=c->r[30]|c->r[30]; // 801F7CD0
  goto L_801F7D50; // 801F7CD4
L_801F7CD8:;
  c->r[9]=R8(c->r[12]+0x00000000u); // 801F7CD8
  c->r[8]=0u+0x00000000u; // 801F7CDC
  c->r[12]=c->r[12]+0x00000001u; // 801F7CE0
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[11]); // 801F7CE4
  if (crb(c,0)) { goto L_801F7CF4; } // 801F7CE8
  cmps(c,0,(int32_t)c->r[11],256); // 801F7CEC
  if (crb(c,0)) { goto L_801F7CF8; } // 801F7CF0
L_801F7CF4:;
  c->r[8]=0u+0x00000001u; // 801F7CF4
L_801F7CF8:;
  cmps(c,0,(int32_t)c->r[8],0); // 801F7CF8
  if (crb(c,2)) { goto L_801F7D04; } // 801F7CFC
  goto L_801F7D0C; // 801F7D00
L_801F7D04:;
  c->r[8]=R32(c->r[5]+0x00000010u); // 801F7D04
  c->r[11]=R8(c->r[8]+c->r[11]); // 801F7D08
L_801F7D0C:;
  c->r[9]=R8(c->r[10]+0x00000000u); // 801F7D0C
  c->r[8]=0u+0x00000000u; // 801F7D10
  c->r[10]=c->r[10]+0x00000001u; // 801F7D14
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[9]); // 801F7D18
  if (crb(c,0)) { goto L_801F7D28; } // 801F7D1C
  cmps(c,0,(int32_t)c->r[9],256); // 801F7D20
  if (crb(c,0)) { goto L_801F7D2C; } // 801F7D24
L_801F7D28:;
  c->r[8]=0u+0x00000001u; // 801F7D28
L_801F7D2C:;
  cmps(c,0,(int32_t)c->r[8],0); // 801F7D2C
  if (crb(c,2)) { goto L_801F7D38; } // 801F7D30
  goto L_801F7D40; // 801F7D34
L_801F7D38:;
  c->r[8]=R32(c->r[5]+0x00000010u); // 801F7D38
  c->r[9]=R8(c->r[8]+c->r[9]); // 801F7D3C
L_801F7D40:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[11]); // 801F7D40
  if (crb(c,2)) { goto L_801F7D50; } // 801F7D44
  c->r[8]=0u+0x00000000u; // 801F7D48
  goto L_801F7D80; // 801F7D4C
L_801F7D50:;
  c->r[8]=R8(c->r[12]+0x00000000u); // 801F7D50
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[8]); // 801F7D54
  if (!crb(c,2)) { IRQCHK(c); goto L_801F7CD8; } // 801F7D58
  c->r[8]=R8(c->r[10]+0x00000000u); // 801F7D5C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801F7D60
  cmps(c,0,(int32_t)c->r[8],47); // 801F7D64
  if (crb(c,2)) { goto L_801F7D74; } // 801F7D68
  cmps(c,0,(int32_t)c->r[8],0); // 801F7D6C
  if (!crb(c,2)) { goto L_801F7D7C; } // 801F7D70
L_801F7D74:;
  c->r[8]=0u+0x00000001u; // 801F7D74
  goto L_801F7D80; // 801F7D78
L_801F7D7C:;
  c->r[8]=0u+0x00000000u; // 801F7D7C
L_801F7D80:;
  cmps(c,0,(int32_t)c->r[8],1); // 801F7D80
  if (crb(c,2)) { goto L_801F7DB8; } // 801F7D84
L_801F7D88:;
  c->r[8]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801F7D88
  c->r[9]=c->r[3]+c->r[8]; // 801F7D8C
  c->r[8]=R32(c->r[3]+c->r[8]); // 801F7D90
  c->r[8]=rotl(c->r[8],0)&0xFF000000u; cr0(c,c->r[8]); // 801F7D94
  if (crb(c,2)) { goto L_801F7DA4; } // 801F7D98
  c->r[31]=R32(c->r[9]+0x00000008u); // 801F7D9C
  goto L_801F7DA8; // 801F7DA0
L_801F7DA4:;
  c->r[31]=c->r[31]+0x00000001u; // 801F7DA4
L_801F7DA8:;
  cmpu(c,0,c->r[31],c->r[4]); // 801F7DA8
  if (crb(c,0)) { IRQCHK(c); goto L_801F7C88; } // 801F7DAC
  c->r[3]=0u+0xFFFFFFFFu; // 801F7DB0
  goto L_801F7DD4; // 801F7DB4
L_801F7DB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801F7DB8
  if (!crb(c,2)) { goto L_801F7DC8; } // 801F7DBC
  c->r[3]=c->r[31]|c->r[31]; // 801F7DC0
  goto L_801F7DD4; // 801F7DC4
L_801F7DC8:;
  c->r[4]=c->r[6]+c->r[30]; // 801F7DC8
  c->r[30]=c->r[4]+0x00000001u; // 801F7DCC
  IRQCHK(c); goto L_801F7B90; // 801F7DD0
L_801F7DD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F7DD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F7DD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F7DDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F7DE0
  c->lr=c->r[0]; // 801F7DE4
  c->r[1]=c->r[1]+0x00000020u; // 801F7DE8
  return; // 801F7DEC
}

// fn_801F7DF0
void f_801F7DF0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000003Fu; // 801F7DF0
  c->r[12]=c->r[1]|c->r[1]; // 801F7DF4
  c->r[11]=addc(c,~c->r[11],0xFFFFFC00u,1); // 801F7DF8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7DFC
  c->r[0]=c->lr; // 801F7E00
  c->r[4]=0u+0x80300000u; // 801F7E04
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F7E08
  c->r[4]=c->r[4]+0x00007A20u; // 801F7E0C
  c->r[0]=0u+0x0000004Fu; // 801F7E10
  c->r[6]=c->r[1]+0x0000013Cu; // 801F7E14
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F7E18
  c->r[31]=0u+0x80340000u; // 801F7E1C
  c->r[31]=c->r[31]+0xFFFFA908u; // 801F7E20
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801F7E24
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801F7E28
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 801F7E2C
  c->r[29]=c->r[3]|c->r[3]; // 801F7E30
  c->ctr=c->r[0]; // 801F7E34
L_801F7E38:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801F7E38
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801F7E3C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801F7E40
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801F7E44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F7E38; } // 801F7E48
  cmps(c,0,(int32_t)c->r[3],0); // 801F7E4C
  c->r[30]=0u+0x00000000u; // 801F7E50
  c->r[4]=0u+0x00000000u; // 801F7E54
  if (crb(c,0)) { goto L_801F7E64; } // 801F7E58
  c->r[3]=c->r[29]|c->r[29]; // 801F7E5C
  goto L_801F7F20; // 801F7E60
L_801F7E64:;
  c->r[0]=0u+0x0000004Fu; // 801F7E64
  c->r[5]=c->r[1]+0x00000140u; // 801F7E68
  c->ctr=c->r[0]; // 801F7E6C
L_801F7E70:;
  c->r[0]=R32(c->r[5]+c->r[4]); // 801F7E70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801F7E74
  if (!crb(c,2)) { goto L_801F7EDC; } // 801F7E78
  cmps(c,0,(int32_t)c->r[3],-114); // 801F7E7C
  if (crb(c,2)) { goto L_801F7EA4; } // 801F7E80
  cmps(c,0,(int32_t)c->r[3],-116); // 801F7E84
  if (crb(c,2)) { goto L_801F7EA4; } // 801F7E88
  cmps(c,0,(int32_t)c->r[3],-117); // 801F7E8C
  if (crb(c,2)) { goto L_801F7EA4; } // 801F7E90
  cmps(c,0,(int32_t)c->r[3],-9); // 801F7E94
  if (crb(c,2)) { goto L_801F7EA4; } // 801F7E98
  cmps(c,0,(int32_t)c->r[3],-12); // 801F7E9C
  if (!crb(c,2)) { goto L_801F7EC8; } // 801F7EA0
L_801F7EA4:;
  c->r[5]=c->r[29]|c->r[29]; // 801F7EA4
  c->r[3]=c->r[1]+0x000000C0u; // 801F7EA8
  c->r[4]=c->r[31]+0x00000124u; // 801F7EAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F7EB0
  c->lr=0x801F7EB8u; f_8018E968(c); // 801F7EB4
  c->r[4]=c->r[1]+0x000000C0u; // 801F7EB8
  c->r[3]=0u+0x00000000u; // 801F7EBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F7EC0
  c->lr=0x801F7EC8u; f_801A7274(c); // 801F7EC4
L_801F7EC8:;
  c->r[0]=c->r[30]+0x00000001u; // 801F7EC8
  c->r[3]=c->r[1]+0x00000140u; // 801F7ECC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F7ED0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801F7ED4
  goto L_801F7F20; // 801F7ED8
L_801F7EDC:;
  c->r[30]=c->r[30]+0x00000002u; // 801F7EDC
  c->r[4]=c->r[4]+0x00000008u; // 801F7EE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F7E70; } // 801F7EE4
  c->r[4]=c->r[29]|c->r[29]; // 801F7EE8
  c->r[3]=c->r[31]+0x00000138u; // 801F7EEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F7EF0
  c->lr=0x801F7EF8u; f_8015CED8(c); // 801F7EF4
  c->r[5]=c->r[29]|c->r[29]; // 801F7EF8
  c->r[3]=c->r[1]+0x00000040u; // 801F7EFC
  c->r[4]=c->r[31]+0x0000016Cu; // 801F7F00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F7F04
  c->lr=0x801F7F0Cu; f_8018E968(c); // 801F7F08
  c->r[4]=c->r[1]+0x00000040u; // 801F7F0C
  c->r[3]=0u+0x00000000u; // 801F7F10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F7F14
  c->lr=0x801F7F1Cu; f_801A7274(c); // 801F7F18
  c->r[3]=0u+0xFFFFEC39u; // 801F7F1C
L_801F7F20:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F7F20
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F7F24
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F7F28
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801F7F2C
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 801F7F30
  c->lr=c->r[0]; // 801F7F34
  c->r[1]=c->r[10]|c->r[10]; // 801F7F38
  return; // 801F7F3C
}

// fn_801F7F40
void f_801F7F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7F40
  c->r[0]=c->lr; // 801F7F44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F7F48
  c->r[11]=c->r[1]+0x00000020u; // 801F7F4C
  c->lr=0x801F7F54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F7F50
  c->r[28]=c->r[3]|c->r[3]; // 801F7F54
  c->r[27]=c->r[4]|c->r[4]; // 801F7F58
  c->r[29]=c->r[5]|c->r[5]; // 801F7F5C
  c->r[30]=c->r[6]|c->r[6]; // 801F7F60
  c->lr=0x801F7F68u; f_80169CB8(c); // 801F7F64
  c->r[4]=R32(c->r[3]+0x00000008u); // 801F7F68
  c->r[0]=R32(c->r[28]+0x00000004u); // 801F7F6C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F7F70
  cmpu(c,0,c->r[27],c->r[0]); // 801F7F74
  c->r[5]=c->r[3]+c->r[4]; // 801F7F78
  if (!crb(c,2)) { goto L_801F7F88; } // 801F7F7C
  c->r[3]=0u+0x00000000u; // 801F7F80
  goto L_801F80A4; // 801F7F84
L_801F7F88:;
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 801F7F88
  c->r[0]=R32(c->r[3]+c->r[4]); // 801F7F8C
  c->r[3]=c->r[3]+c->r[4]; // 801F7F90
  c->r[27]=R32(c->r[3]+0x00000004u); // 801F7F94
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801F7F98
  c->r[31]=c->r[5]+c->r[0]; // 801F7F9C
  c->lr=0x801F7FA4u; f_80169CB8(c); // 801F7FA0
  c->r[4]=R32(c->r[3]+0x00000008u); // 801F7FA4
  c->r[0]=R32(c->r[28]+0x00000004u); // 801F7FA8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F7FAC
  cmpu(c,0,c->r[27],c->r[0]); // 801F7FB0
  c->r[7]=c->r[3]+c->r[4]; // 801F7FB4
  if (!crb(c,2)) { goto L_801F7FC4; } // 801F7FB8
  c->r[4]=0u+0x00000000u; // 801F7FBC
  goto L_801F8048; // 801F7FC0
L_801F7FC4:;
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 801F7FC4
  c->r[5]=c->r[29]|c->r[29]; // 801F7FC8
  c->r[6]=c->r[30]|c->r[30]; // 801F7FCC
  c->r[0]=R32(c->r[3]+c->r[4]); // 801F7FD0
  c->r[3]=c->r[3]+c->r[4]; // 801F7FD4
  c->r[4]=R32(c->r[3]+0x00000004u); // 801F7FD8
  c->r[3]=c->r[28]|c->r[28]; // 801F7FDC
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801F7FE0
  c->r[27]=c->r[7]+c->r[0]; // 801F7FE4
  c->lr=0x801F7FECu; f_801F7F40(c); // 801F7FE8
  cmpu(c,0,c->r[3],c->r[30]); // 801F7FEC
  c->r[4]=c->r[3]|c->r[3]; // 801F7FF0
  if (!crb(c,2)) { goto L_801F7FFC; } // 801F7FF4
  goto L_801F8048; // 801F7FF8
L_801F7FFC:;
  c->r[4]=c->r[3]+0x00000001u; // 801F7FFC
  c->r[0]=0u+0x0000002Fu; // 801F8000
  c->r[6]=c->r[30]-c->r[4]; // 801F8004
  W8(c->r[29]+c->r[3],c->r[0]); // 801F8008
  c->r[3]=c->r[29]+c->r[4]; // 801F800C
  c->r[5]=c->r[6]|c->r[6]; // 801F8010
  goto L_801F802C; // 801F8014
L_801F8018:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801F8018
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801F801C
  c->r[27]=c->r[27]+0x00000001u; // 801F8020
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F8024
  c->r[3]=c->r[3]+0x00000001u; // 801F8028
L_801F802C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F802C
  if (crb(c,2)) { goto L_801F8040; } // 801F8030
  c->r[0]=R8(c->r[27]+0x00000000u); // 801F8034
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801F8038
  if (!crb(c,2)) { IRQCHK(c); goto L_801F8018; } // 801F803C
L_801F8040:;
  c->r[0]=c->r[6]-c->r[5]; // 801F8040
  c->r[4]=c->r[4]+c->r[0]; // 801F8044
L_801F8048:;
  cmpu(c,0,c->r[4],c->r[30]); // 801F8048
  if (!crb(c,2)) { goto L_801F8058; } // 801F804C
  c->r[3]=c->r[4]|c->r[4]; // 801F8050
  goto L_801F80A4; // 801F8054
L_801F8058:;
  c->r[6]=c->r[4]+0x00000001u; // 801F8058
  c->r[0]=0u+0x0000002Fu; // 801F805C
  c->r[5]=c->r[30]-c->r[6]; // 801F8060
  W8(c->r[29]+c->r[4],c->r[0]); // 801F8064
  c->r[3]=c->r[29]+c->r[6]; // 801F8068
  c->r[4]=c->r[5]|c->r[5]; // 801F806C
  goto L_801F8088; // 801F8070
L_801F8074:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801F8074
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801F8078
  c->r[31]=c->r[31]+0x00000001u; // 801F807C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F8080
  c->r[3]=c->r[3]+0x00000001u; // 801F8084
L_801F8088:;
  cmps(c,0,(int32_t)c->r[4],0); // 801F8088
  if (crb(c,2)) { goto L_801F809C; } // 801F808C
  c->r[0]=R8(c->r[31]+0x00000000u); // 801F8090
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801F8094
  if (!crb(c,2)) { IRQCHK(c); goto L_801F8074; } // 801F8098
L_801F809C:;
  c->r[0]=c->r[5]-c->r[4]; // 801F809C
  c->r[3]=c->r[6]+c->r[0]; // 801F80A0
L_801F80A4:;
  c->r[11]=c->r[1]+0x00000020u; // 801F80A4
  c->lr=0x801F80ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F80A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F80AC
  c->lr=c->r[0]; // 801F80B0
  c->r[1]=c->r[1]+0x00000020u; // 801F80B4
  return; // 801F80B8
}

// fn_801F80BC
void f_801F80BC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801F80BC
  W8(c->r[4]+0x00000024u,c->r[0]); // 801F80C0
  f_801F77FC(c); return; // 801F80C4
}

// fn_801F80C8
void f_801F80C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F80C8
  c->r[0]=c->lr; // 801F80CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F80D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F80D4
  c->r[31]=c->r[3]|c->r[3]; // 801F80D8
  c->r[0]=R8(c->r[3]+0x00000024u); // 801F80DC
  cmps(c,0,(int32_t)c->r[0],2); // 801F80E0
  if (crb(c,2)) { goto L_801F8114; } // 801F80E4
  if (!crb(c,0)) { goto L_801F811C; } // 801F80E8
  cmps(c,0,(int32_t)c->r[0],1); // 801F80EC
  if (!crb(c,0)) { goto L_801F80F8; } // 801F80F0
  goto L_801F811C; // 801F80F4
L_801F80F8:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 801F80F8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801F80FC
  c->lr=0x801F8104u; f_801A0F08(c); // 801F8100
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801F8104
  c->lr=0x801F810Cu; f_801F8DDC(c); // 801F8108
  c->lr=0x801F8110u; f_801F7DF0(c); // 801F810C
  goto L_801F8120; // 801F8110
L_801F8114:;
  c->r[3]=0u+0x00000000u; // 801F8114
  goto L_801F8120; // 801F8118
L_801F811C:;
  c->r[3]=0u+0xFFFFEC39u; // 801F811C
L_801F8120:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F8124
  c->lr=c->r[0]; // 801F8128
  c->r[1]=c->r[1]+0x00000010u; // 801F812C
  return; // 801F8130
}

// fn_801F8134
void f_801F8134(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8134
  c->r[0]=c->lr; // 801F8138
  W32(c->r[1]+0x00000134u,c->r[0]); // 801F813C
  c->r[11]=c->r[1]+0x00000130u; // 801F8140
  c->lr=0x801F8148u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F8144
  c->r[0]=R8(c->r[3]+0x00000024u); // 801F8148
  c->r[27]=c->r[3]|c->r[3]; // 801F814C
  c->r[28]=c->r[4]|c->r[4]; // 801F8150
  c->r[26]=c->r[5]|c->r[5]; // 801F8154
  cmps(c,0,(int32_t)c->r[0],2); // 801F8158
  if (crb(c,2)) { goto L_801F8248; } // 801F815C
  if (!crb(c,0)) { goto L_801F844C; } // 801F8160
  cmps(c,0,(int32_t)c->r[0],1); // 801F8164
  if (!crb(c,0)) { goto L_801F8170; } // 801F8168
  goto L_801F844C; // 801F816C
L_801F8170:;
  c->r[0]=0u+0x00000001u; // 801F8170
  W8(c->r[5]+0x00000040u,c->r[0]); // 801F8174
  c->lr=0x801F817Cu; f_801F00AC(c); // 801F8178
  cmps(c,0,(int32_t)c->r[3],0); // 801F817C
  c->r[4]=c->r[3]|c->r[3]; // 801F8180
  if (!crb(c,0)) { goto L_801F8208; } // 801F8184
  c->r[3]=c->r[27]|c->r[27]; // 801F8188
  c->r[4]=c->r[1]+0x00000098u; // 801F818C
  c->r[5]=0u+0x00000080u; // 801F8190
  c->lr=0x801F8198u; f_801F04D8(c); // 801F8194
  cmps(c,0,(int32_t)c->r[3],0); // 801F8198
  if (crb(c,2)) { goto L_801F81E8; } // 801F819C
  c->r[3]=c->r[1]+0x00000098u; // 801F81A0
  c->r[4]=c->r[13]+0xFFFF95D4u; // 801F81A4
  c->r[5]=0u+0x00000003u; // 801F81A8
  c->lr=0x801F81B0u; f_8019027C(c); // 801F81AC
  cmps(c,0,(int32_t)c->r[3],0); // 801F81B0
  if (!crb(c,2)) { goto L_801F81E8; } // 801F81B4
  c->r[3]=c->r[1]+0x00000098u; // 801F81B8
  c->r[4]=c->r[1]+0x0000009Au; // 801F81BC
  goto L_801F81D4; // 801F81C0
L_801F81C4:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F81C4
  c->r[4]=c->r[4]+0x00000001u; // 801F81C8
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F81CC
  c->r[3]=c->r[3]+0x00000001u; // 801F81D0
L_801F81D4:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801F81D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801F81D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801F81C4; } // 801F81DC
  c->r[0]=0u+0x00000000u; // 801F81E0
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F81E4
L_801F81E8:;
  c->r[3]=0u+0x80340000u; // 801F81E8
  c->r[4]=c->r[28]|c->r[28]; // 801F81EC
  c->r[3]=c->r[3]+0xFFFFAA00u; // 801F81F0
  c->r[5]=c->r[1]+0x00000098u; // 801F81F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F81F8
  c->lr=0x801F8200u; f_8015CED8(c); // 801F81FC
  c->r[3]=0u+0xFFFFEC6Fu; // 801F8200
  goto L_801F8450; // 801F8204
L_801F8208:;
  c->r[3]=c->r[27]|c->r[27]; // 801F8208
  c->r[5]=c->r[1]+0x00000008u; // 801F820C
  c->lr=0x801F8214u; f_801F005C(c); // 801F8210
  cmps(c,0,(int32_t)c->r[3],0); // 801F8214
  if (!crb(c,2)) { goto L_801F8224; } // 801F8218
  c->r[3]=0u+0xFFFFEC6Fu; // 801F821C
  goto L_801F8450; // 801F8220
L_801F8224:;
  W32(c->r[26]+0x00000000u,c->r[27]); // 801F8224
  c->r[0]=0u+0x00000000u; // 801F8228
  c->r[3]=0u+0x00000000u; // 801F822C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801F8230
  W32(c->r[26]+0x00000004u,c->r[4]); // 801F8234
  c->r[4]=R32(c->r[1]+0x00000010u); // 801F8238
  W32(c->r[26]+0x00000008u,c->r[4]); // 801F823C
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 801F8240
  goto L_801F8450; // 801F8244
L_801F8248:;
  c->r[0]=0u+0x00000002u; // 801F8248
  W8(c->r[5]+0x00000040u,c->r[0]); // 801F824C
  c->lr=0x801F8254u; f_801F7B50(c); // 801F8250
  cmps(c,0,(int32_t)c->r[3],0); // 801F8254
  if (!crb(c,0)) { goto L_801F8424; } // 801F8258
  c->r[30]=R32(c->r[27]+0x00000008u); // 801F825C
  c->lr=0x801F8264u; f_80169CB8(c); // 801F8260
  c->r[31]=c->r[3]|c->r[3]; // 801F8264
  c->lr=0x801F826Cu; f_80169CB8(c); // 801F8268
  c->r[4]=R32(c->r[3]+0x00000008u); // 801F826C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801F8270
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F8274
  cmpu(c,0,c->r[30],c->r[0]); // 801F8278
  c->r[4]=c->r[3]+c->r[4]; // 801F827C
  if (!crb(c,2)) { goto L_801F828C; } // 801F8280
  c->r[6]=0u+0x00000000u; // 801F8284
  goto L_801F83AC; // 801F8288
L_801F828C:;
  c->r[5]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801F828C
  c->r[0]=R32(c->r[3]+c->r[5]); // 801F8290
  c->r[3]=c->r[3]+c->r[5]; // 801F8294
  c->r[26]=R32(c->r[3]+0x00000004u); // 801F8298
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801F829C
  c->r[29]=c->r[4]+c->r[0]; // 801F82A0
  c->lr=0x801F82A8u; f_80169CB8(c); // 801F82A4
  c->r[4]=R32(c->r[3]+0x00000008u); // 801F82A8
  c->r[0]=R32(c->r[27]+0x00000004u); // 801F82AC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F82B0
  cmpu(c,0,c->r[26],c->r[0]); // 801F82B4
  c->r[7]=c->r[3]+c->r[4]; // 801F82B8
  if (!crb(c,2)) { goto L_801F82C8; } // 801F82BC
  c->r[6]=0u+0x00000000u; // 801F82C0
  goto L_801F8350; // 801F82C4
L_801F82C8:;
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 801F82C8
  c->r[5]=c->r[1]+0x00000018u; // 801F82CC
  c->r[6]=0u+0x00000080u; // 801F82D0
  c->r[0]=R32(c->r[3]+c->r[4]); // 801F82D4
  c->r[3]=c->r[3]+c->r[4]; // 801F82D8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801F82DC
  c->r[3]=c->r[27]|c->r[27]; // 801F82E0
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801F82E4
  c->r[26]=c->r[7]+c->r[0]; // 801F82E8
  c->lr=0x801F82F0u; f_801F7F40(c); // 801F82EC
  cmpu(c,0,c->r[3],0x00000080u); // 801F82F0
  c->r[6]=c->r[3]|c->r[3]; // 801F82F4
  if (!crb(c,2)) { goto L_801F8300; } // 801F82F8
  goto L_801F8350; // 801F82FC
L_801F8300:;
  c->r[6]=c->r[3]+0x00000001u; // 801F8300
  c->r[4]=c->r[1]+0x00000018u; // 801F8304
  c->r[0]=0u+0x0000002Fu; // 801F8308
  c->r[7]=addc(c,~c->r[6],0x00000080u,1); // 801F830C
  W8(c->r[4]+c->r[3],c->r[0]); // 801F8310
  c->r[5]=c->r[7]|c->r[7]; // 801F8314
  c->r[3]=c->r[4]+c->r[6]; // 801F8318
  goto L_801F8334; // 801F831C
L_801F8320:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801F8320
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801F8324
  c->r[26]=c->r[26]+0x00000001u; // 801F8328
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F832C
  c->r[3]=c->r[3]+0x00000001u; // 801F8330
L_801F8334:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F8334
  if (crb(c,2)) { goto L_801F8348; } // 801F8338
  c->r[0]=R8(c->r[26]+0x00000000u); // 801F833C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801F8340
  if (!crb(c,2)) { IRQCHK(c); goto L_801F8320; } // 801F8344
L_801F8348:;
  c->r[0]=c->r[7]-c->r[5]; // 801F8348
  c->r[6]=c->r[6]+c->r[0]; // 801F834C
L_801F8350:;
  cmpu(c,0,c->r[6],0x00000080u); // 801F8350
  if (!crb(c,2)) { goto L_801F835C; } // 801F8354
  goto L_801F83AC; // 801F8358
L_801F835C:;
  c->r[4]=c->r[6]+0x00000001u; // 801F835C
  c->r[3]=c->r[1]+0x00000018u; // 801F8360
  c->r[0]=0u+0x0000002Fu; // 801F8364
  c->r[7]=addc(c,~c->r[4],0x00000080u,1); // 801F8368
  W8(c->r[3]+c->r[6],c->r[0]); // 801F836C
  c->r[5]=c->r[7]|c->r[7]; // 801F8370
  c->r[3]=c->r[3]+c->r[4]; // 801F8374
  goto L_801F8390; // 801F8378
L_801F837C:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801F837C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801F8380
  c->r[29]=c->r[29]+0x00000001u; // 801F8384
  W8(c->r[3]+0x00000000u,c->r[0]); // 801F8388
  c->r[3]=c->r[3]+0x00000001u; // 801F838C
L_801F8390:;
  cmps(c,0,(int32_t)c->r[5],0); // 801F8390
  if (crb(c,2)) { goto L_801F83A4; } // 801F8394
  c->r[0]=R8(c->r[29]+0x00000000u); // 801F8398
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801F839C
  if (!crb(c,2)) { IRQCHK(c); goto L_801F837C; } // 801F83A0
L_801F83A4:;
  c->r[0]=c->r[7]-c->r[5]; // 801F83A4
  c->r[6]=c->r[4]+c->r[0]; // 801F83A8
L_801F83AC:;
  cmpu(c,0,c->r[6],0x00000080u); // 801F83AC
  if (!crb(c,2)) { goto L_801F83C0; } // 801F83B0
  c->r[0]=0u+0x00000000u; // 801F83B4
  W8(c->r[1]+0x00000097u,c->r[0]); // 801F83B8
  goto L_801F8404; // 801F83BC
L_801F83C0:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801F83C0
  c->r[0]=R32(c->r[31]+c->r[0]); // 801F83C4
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801F83C8
  if (crb(c,2)) { goto L_801F83F8; } // 801F83CC
  cmpu(c,0,c->r[6],0x0000007Fu); // 801F83D0
  if (!crb(c,2)) { goto L_801F83E8; } // 801F83D4
  c->r[3]=c->r[1]+0x00000018u; // 801F83D8
  c->r[0]=0u+0x00000000u; // 801F83DC
  W8(c->r[3]+c->r[6],c->r[0]); // 801F83E0
  goto L_801F8404; // 801F83E4
L_801F83E8:;
  c->r[3]=c->r[1]+0x00000018u; // 801F83E8
  c->r[0]=0u+0x0000002Fu; // 801F83EC
  W8(c->r[3]+c->r[6],c->r[0]); // 801F83F0
  c->r[6]=c->r[6]+0x00000001u; // 801F83F4
L_801F83F8:;
  c->r[3]=c->r[1]+0x00000018u; // 801F83F8
  c->r[0]=0u+0x00000000u; // 801F83FC
  W8(c->r[3]+c->r[6],c->r[0]); // 801F8400
L_801F8404:;
  c->r[3]=0u+0x80340000u; // 801F8404
  c->r[4]=c->r[28]|c->r[28]; // 801F8408
  c->r[3]=c->r[3]+0xFFFFAA00u; // 801F840C
  c->r[5]=c->r[1]+0x00000018u; // 801F8410
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F8414
  c->lr=0x801F841Cu; f_8015CED8(c); // 801F8418
  c->r[3]=0u+0xFFFFEC6Fu; // 801F841C
  goto L_801F8450; // 801F8420
L_801F8424:;
  c->r[4]=c->r[26]|c->r[26]; // 801F8424
  c->lr=0x801F842Cu; f_80169690(c); // 801F8428
  cmps(c,0,(int32_t)c->r[3],0); // 801F842C
  if (!crb(c,2)) { goto L_801F843C; } // 801F8430
  c->r[3]=0u+0xFFFFEC6Fu; // 801F8434
  goto L_801F8450; // 801F8438
L_801F843C:;
  c->r[0]=0u+0x00000000u; // 801F843C
  c->r[3]=0u+0x00000000u; // 801F8440
  W32(c->r[26]+0x0000003Cu,c->r[0]); // 801F8444
  goto L_801F8450; // 801F8448
L_801F844C:;
  c->r[3]=0u+0xFFFFEC39u; // 801F844C
L_801F8450:;
  c->r[11]=c->r[1]+0x00000130u; // 801F8450
  c->lr=0x801F8458u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F8454
  c->r[0]=R32(c->r[1]+0x00000134u); // 801F8458
  c->lr=c->r[0]; // 801F845C
  c->r[1]=c->r[1]+0x00000130u; // 801F8460
  return; // 801F8464
}

// fn_801F8468
void f_801F8468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8468
  c->r[0]=c->lr; // 801F846C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F8470
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F8474
  c->r[31]=c->r[5]|c->r[5]; // 801F8478
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F847C
  c->r[30]=c->r[4]|c->r[4]; // 801F8480
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F8484
  c->r[29]=c->r[3]|c->r[3]; // 801F8488
  c->r[0]=R8(c->r[3]+0x00000040u); // 801F848C
  cmps(c,0,(int32_t)c->r[0],2); // 801F8490
  if (crb(c,2)) { goto L_801F850C; } // 801F8494
  if (!crb(c,0)) { goto L_801F853C; } // 801F8498
  cmps(c,0,(int32_t)c->r[0],1); // 801F849C
  if (!crb(c,0)) { goto L_801F84A8; } // 801F84A0
  goto L_801F853C; // 801F84A4
L_801F84A8:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801F84A8
  c->r[4]=c->r[0]+c->r[6]; cr0(c,c->r[4]); // 801F84AC
  if (crb(c,0)) { goto L_801F84C0; } // 801F84B0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801F84B4
  cmpu(c,0,c->r[4],c->r[0]); // 801F84B8
  if (!crb(c,1)) { goto L_801F84C8; } // 801F84BC
L_801F84C0:;
  c->r[3]=0u+0xFFFFEC6Fu; // 801F84C0
  goto L_801F8540; // 801F84C4
L_801F84C8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801F84C8
  c->r[5]=0u+0x00000000u; // 801F84CC
  c->r[0]=R32(c->r[29]+0x00000004u); // 801F84D0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801F84D4
  c->r[4]=c->r[0]+c->r[4]; // 801F84D8
  c->lr=0x801F84E0u; f_801F8D50(c); // 801F84DC
  cmps(c,0,(int32_t)c->r[3],0); // 801F84E0
  if (!crb(c,0)) { goto L_801F84F0; } // 801F84E4
  c->lr=0x801F84ECu; f_801F7DF0(c); // 801F84E8
  goto L_801F8540; // 801F84EC
L_801F84F0:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801F84F0
  c->r[4]=c->r[30]|c->r[30]; // 801F84F4
  c->r[5]=c->r[31]|c->r[31]; // 801F84F8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 801F84FC
  c->lr=0x801F8504u; f_801F8CB0(c); // 801F8500
  c->lr=0x801F8508u; f_801F7DF0(c); // 801F8504
  goto L_801F8540; // 801F8508
L_801F850C:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801F850C
  c->r[7]=0u+0x00000002u; // 801F8510
  c->r[6]=c->r[6]+c->r[0]; // 801F8514
  c->lr=0x801F851Cu; f_80169B88(c); // 801F8518
  cmps(c,0,(int32_t)c->r[3],0); // 801F851C
  if (!crb(c,0)) { goto L_801F8540; } // 801F8520
  cmps(c,0,(int32_t)c->r[3],-3); // 801F8524
  if (!crb(c,2)) { goto L_801F8534; } // 801F8528
  c->r[3]=0u+0xFFFFEC6Au; // 801F852C
  goto L_801F8540; // 801F8530
L_801F8534:;
  c->r[3]=0u+0xFFFFEC75u; // 801F8534
  goto L_801F8540; // 801F8538
L_801F853C:;
  c->r[3]=0u+0xFFFFEC39u; // 801F853C
L_801F8540:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F8540
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F8544
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F8548
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F854C
  c->lr=c->r[0]; // 801F8550
  c->r[1]=c->r[1]+0x00000020u; // 801F8554
  return; // 801F8558
}

// fn_801F855C
void f_801F855C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000040u); // 801F855C
  cmps(c,0,(int32_t)c->r[0],2); // 801F8560
  if (crb(c,2)) { goto L_801F8580; } // 801F8564
  if (!crb(c,0)) { goto L_801F8588; } // 801F8568
  cmps(c,0,(int32_t)c->r[0],1); // 801F856C
  if (!crb(c,0)) { goto L_801F8578; } // 801F8570
  goto L_801F8588; // 801F8574
L_801F8578:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 801F8578
  return; // 801F857C
L_801F8580:;
  c->r[3]=R32(c->r[3]+0x00000034u); // 801F8580
  return; // 801F8584
L_801F8588:;
  c->r[3]=0u+0x00000000u; // 801F8588
  return; // 801F858C
}

// fn_801F8590
void f_801F8590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8590
  c->r[0]=c->lr; // 801F8594
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F8598
  c->r[0]=R8(c->r[3]+0x00000040u); // 801F859C
  cmps(c,0,(int32_t)c->r[0],2); // 801F85A0
  if (crb(c,2)) { goto L_801F85C0; } // 801F85A4
  if (!crb(c,0)) { goto L_801F85DC; } // 801F85A8
  cmps(c,0,(int32_t)c->r[0],1); // 801F85AC
  if (!crb(c,0)) { goto L_801F85B8; } // 801F85B0
  goto L_801F85DC; // 801F85B4
L_801F85B8:;
  c->r[3]=0u+0x00000000u; // 801F85B8
  goto L_801F85E0; // 801F85BC
L_801F85C0:;
  c->lr=0x801F85C4u; f_801699A4(c); // 801F85C0
  c->r[4]=0u-c->r[3]; // 801F85C4
  c->r[0]=0u+0xFFFFEC73u; // 801F85C8
  c->r[3]=c->r[4]|c->r[3]; // 801F85CC
  c->r[3]=sraw(c,c->r[3],31); // 801F85D0
  c->r[3]=c->r[0]&~c->r[3]; // 801F85D4
  goto L_801F85E0; // 801F85D8
L_801F85DC:;
  c->r[3]=0u+0xFFFFEC39u; // 801F85DC
L_801F85E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F85E0
  c->lr=c->r[0]; // 801F85E4
  c->r[1]=c->r[1]+0x00000010u; // 801F85E8
  return; // 801F85EC
}

// ESP_InitLib
void f_801F85F0(Ctx* __restrict c) {
  trace_call(0x801F85F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F85F0
  c->r[0]=c->lr; // 801F85F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F85F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F85FC
  c->r[31]=0u+0x00000000u; // 801F8600
  c->r[0]=R32(c->r[13]+0xFFFF95D8u); // 801F8604
  cmps(c,0,(int32_t)c->r[0],0); // 801F8608
  if (!crb(c,0)) { goto L_801F862C; } // 801F860C
  c->r[3]=c->r[13]+0xFFFF95E0u; // 801F8610
  c->r[4]=0u+0x00000000u; // 801F8614
  c->lr=0x801F861Cu; f_801A3510(c); // 801F8618
  cmps(c,0,(int32_t)c->r[3],0); // 801F861C
  W32(c->r[13]+0xFFFF95D8u,c->r[3]); // 801F8620
  if (!crb(c,0)) { goto L_801F862C; } // 801F8624
  c->r[31]=c->r[3]|c->r[3]; // 801F8628
L_801F862C:;
  c->r[3]=c->r[31]|c->r[31]; // 801F862C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F8630
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8634
  c->lr=c->r[0]; // 801F8638
  c->r[1]=c->r[1]+0x00000010u; // 801F863C
  return; // 801F8640
}

// ESP_CloseLib
void f_801F8644(Ctx* __restrict c) {
  trace_call(0x801F8644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8644
  c->r[0]=c->lr; // 801F8648
  c->r[4]=0u+0x00000000u; // 801F864C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F8650
  c->r[3]=R32(c->r[13]+0xFFFF95D8u); // 801F8654
  cmps(c,0,(int32_t)c->r[3],0); // 801F8658
  if (crb(c,0)) { goto L_801F8678; } // 801F865C
  c->lr=0x801F8664u; f_801A36F0(c); // 801F8660
  cmps(c,0,(int32_t)c->r[3],0); // 801F8664
  c->r[4]=c->r[3]|c->r[3]; // 801F8668
  if (!crb(c,2)) { goto L_801F8678; } // 801F866C
  c->r[0]=0u+0xFFFFFFFFu; // 801F8670
  W32(c->r[13]+0xFFFF95D8u,c->r[0]); // 801F8674
L_801F8678:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8678
  c->r[3]=c->r[4]|c->r[4]; // 801F867C
  c->lr=c->r[0]; // 801F8680
  c->r[1]=c->r[1]+0x00000010u; // 801F8684
  return; // 801F8688
}

// fn_801F868C
void f_801F868C(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F868C
  c->r[12]=c->r[1]|c->r[1]; // 801F8690
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8694
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8698
  c->r[0]=c->lr; // 801F869C
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F86A0
  c->r[0]=0u+0x00000000u; // 801F86A4
  cmpu(c,0,c->r[3],c->r[0]); // 801F86A8
  c->r[10]=c->r[1]+0x000000F0u; // 801F86AC
  if (crb(c,2)) { goto L_801F86C8; } // 801F86B0
  c->r[0]=0u+0x00000000u; // 801F86B4
  cmpu(c,0,c->r[4],c->r[0]); // 801F86B8
  if (crb(c,2)) { goto L_801F86C8; } // 801F86BC
  cmps(c,0,(int32_t)c->r[5],0); // 801F86C0
  if (!crb(c,2)) { goto L_801F86D0; } // 801F86C4
L_801F86C8:;
  c->r[0]=0u+0xFFFFFC07u; // 801F86C8
  goto L_801F874C; // 801F86CC
L_801F86D0:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F86D0
  if (!crb(c,2)) { goto L_801F86E8; } // 801F86D4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F86D8
  if (!crb(c,2)) { goto L_801F86E8; } // 801F86DC
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F86E0
  if (crb(c,2)) { goto L_801F86F0; } // 801F86E4
L_801F86E8:;
  c->r[0]=0u+0xFFFFFC07u; // 801F86E8
  goto L_801F874C; // 801F86EC
L_801F86F0:;
  c->r[9]=R32(c->r[13]+0xFFFF95D8u); // 801F86F0
  cmps(c,0,(int32_t)c->r[9],0); // 801F86F4
  if (!crb(c,0)) { goto L_801F8704; } // 801F86F8
  c->r[0]=0u+0xFFFFFC07u; // 801F86FC
  goto L_801F874C; // 801F8700
L_801F8704:;
  c->r[0]=0u+0x000002A4u; // 801F8704
  cmps(c,0,(int32_t)c->r[8],0); // 801F8708
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F870C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8710
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801F8714
  W32(c->r[1]+0x000000FCu,c->r[5]); // 801F8718
  W32(c->r[1]+0x00000100u,c->r[6]); // 801F871C
  W32(c->r[1]+0x00000104u,c->r[7]); // 801F8720
  if (!crb(c,2)) { goto L_801F8748; } // 801F8724
  c->r[3]=c->r[9]|c->r[9]; // 801F8728
  c->r[7]=c->r[10]|c->r[10]; // 801F872C
  c->r[4]=0u+0x00000001u; // 801F8730
  c->r[5]=0u+0x00000003u; // 801F8734
  c->r[6]=0u+0x00000000u; // 801F8738
  c->lr=0x801F8740u; f_801A4110(c); // 801F873C
  c->r[0]=c->r[3]|c->r[3]; // 801F8740
  goto L_801F874C; // 801F8744
L_801F8748:;
  c->r[0]=0u+0xFFFFFC05u; // 801F8748
L_801F874C:;
  c->r[3]=c->r[0]|c->r[0]; // 801F874C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8750
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8754
  c->lr=c->r[0]; // 801F8758
  c->r[1]=c->r[10]|c->r[10]; // 801F875C
  return; // 801F8760
}

// fn_801F8764
void f_801F8764(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8764
  c->r[12]=c->r[1]|c->r[1]; // 801F8768
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F876C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8770
  c->r[0]=c->lr; // 801F8774
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8778
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F877C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F8780
  c->r[12]=c->r[1]+0x000000F0u; // 801F8784
  c->r[31]=c->r[1]+0x00000020u; // 801F8788
  if (!crb(c,2)) { goto L_801F87A0; } // 801F878C
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8790
  if (!crb(c,2)) { goto L_801F87A0; } // 801F8794
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8798
  if (crb(c,2)) { goto L_801F87A8; } // 801F879C
L_801F87A0:;
  c->r[3]=0u+0xFFFFFC07u; // 801F87A0
  goto L_801F88B8; // 801F87A4
L_801F87A8:;
  c->r[11]=R32(c->r[13]+0xFFFF95D8u); // 801F87A8
  cmps(c,0,(int32_t)c->r[11],0); // 801F87AC
  if (!crb(c,0)) { goto L_801F87BC; } // 801F87B0
  c->r[3]=0u+0xFFFFFC07u; // 801F87B4
  goto L_801F88B8; // 801F87B8
L_801F87BC:;
  cmps(c,0,(int32_t)c->r[9],1); // 801F87BC
  if (crb(c,2)) { goto L_801F88B4; } // 801F87C0
  if (!crb(c,0)) { goto L_801F87D4; } // 801F87C4
  cmps(c,0,(int32_t)c->r[9],0); // 801F87C8
  if (!crb(c,0)) { goto L_801F87E0; } // 801F87CC
  goto L_801F88B4; // 801F87D0
L_801F87D4:;
  cmps(c,0,(int32_t)c->r[9],3); // 801F87D4
  if (!crb(c,0)) { goto L_801F88B4; } // 801F87D8
  goto L_801F8850; // 801F87DC
L_801F87E0:;
  c->r[0]=0u+0x00000000u; // 801F87E0
  cmpu(c,0,c->r[3],c->r[0]); // 801F87E4
  if (crb(c,2)) { goto L_801F8804; } // 801F87E8
  cmps(c,0,(int32_t)c->r[4],0); // 801F87EC
  if (crb(c,2)) { goto L_801F8804; } // 801F87F0
  cmpu(c,0,c->r[5],c->r[0]); // 801F87F4
  if (crb(c,2)) { goto L_801F8804; } // 801F87F8
  cmps(c,0,(int32_t)c->r[6],0); // 801F87FC
  if (!crb(c,2)) { goto L_801F880C; } // 801F8800
L_801F8804:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8804
  goto L_801F88B8; // 801F8808
L_801F880C:;
  c->r[0]=0u+0x00000004u; // 801F880C
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F8810
  c->r[3]=c->r[11]|c->r[11]; // 801F8814
  W32(c->r[1]+0x000000F4u,c->r[4]); // 801F8818
  c->r[4]=0u+0x00000002u; // 801F881C
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801F8820
  c->r[5]=0u+0x00000004u; // 801F8824
  W32(c->r[1]+0x000000FCu,c->r[6]); // 801F8828
  c->r[6]=0u+0x00000000u; // 801F882C
  W32(c->r[1]+0x00000100u,c->r[7]); // 801F8830
  c->r[7]=c->r[12]|c->r[12]; // 801F8834
  W32(c->r[1]+0x00000020u,c->r[10]); // 801F8838
  W32(c->r[1]+0x00000104u,c->r[8]); // 801F883C
  W32(c->r[1]+0x00000108u,c->r[31]); // 801F8840
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 801F8844
  c->lr=0x801F884Cu; f_801A4110(c); // 801F8848
  goto L_801F88B8; // 801F884C
L_801F8850:;
  c->r[0]=0u+0x00000000u; // 801F8850
  cmpu(c,0,c->r[3],c->r[0]); // 801F8854
  if (!crb(c,2)) { goto L_801F8864; } // 801F8858
  c->r[3]=0u+0xFFFFFC07u; // 801F885C
  goto L_801F88B8; // 801F8860
L_801F8864:;
  c->r[0]=0u+0x00000000u; // 801F8864
  cmpu(c,0,c->r[3],c->r[0]); // 801F8868
  if (!crb(c,2)) { goto L_801F8874; } // 801F886C
  goto L_801F8880; // 801F8870
L_801F8874:;
  c->r[0]=R16(c->r[3]+0x000001DEu); // 801F8874
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801F8878
  c->r[0]=c->r[5]+0x000001E4u; // 801F887C
L_801F8880:;
  cmpu(c,0,c->r[4],c->r[0]); // 801F8880
  if (crb(c,2)) { goto L_801F8890; } // 801F8884
  c->r[3]=0u+0xFFFFFC07u; // 801F8888
  goto L_801F88B8; // 801F888C
L_801F8890:;
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F8890
  c->r[7]=c->r[12]|c->r[12]; // 801F8894
  c->r[3]=R32(c->r[13]+0xFFFF95D8u); // 801F8898
  c->r[5]=0u+0x00000001u; // 801F889C
  W32(c->r[1]+0x000000F4u,c->r[4]); // 801F88A0
  c->r[4]=0u+0x0000002Bu; // 801F88A4
  c->r[6]=0u+0x00000000u; // 801F88A8
  c->lr=0x801F88B0u; f_801A4110(c); // 801F88AC
  goto L_801F88B8; // 801F88B0
L_801F88B4:;
  c->r[3]=0u+0xFFFFFC05u; // 801F88B4
L_801F88B8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F88B8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F88BC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F88C0
  c->lr=c->r[0]; // 801F88C4
  c->r[1]=c->r[10]|c->r[10]; // 801F88C8
  return; // 801F88CC
}

// fn_801F88D0
void f_801F88D0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F88D0
  c->r[12]=c->r[1]|c->r[1]; // 801F88D4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F88D8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F88DC
  c->r[0]=c->lr; // 801F88E0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F88E4
  c->r[7]=c->r[1]+0x000000F0u; // 801F88E8
  c->r[10]=c->r[1]+0x00000020u; // 801F88EC
  c->r[11]=c->r[1]+0x00000040u; // 801F88F0
  c->r[9]=R32(c->r[13]+0xFFFF95D8u); // 801F88F4
  cmps(c,0,(int32_t)c->r[9],0); // 801F88F8
  if (!crb(c,0)) { goto L_801F8908; } // 801F88FC
  c->r[3]=0u+0xFFFFFC07u; // 801F8900
  goto L_801F8940; // 801F8904
L_801F8908:;
  c->r[8]=0u+0x00000008u; // 801F8908
  c->r[0]=0u+0x00000004u; // 801F890C
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F8910
  c->r[4]=0u+0x00000003u; // 801F8914
  c->r[6]=0u+0x00000000u; // 801F8918
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F891C
  c->r[3]=c->r[9]|c->r[9]; // 801F8920
  W32(c->r[1]+0x00000040u,c->r[5]); // 801F8924
  c->r[5]=0u+0x00000002u; // 801F8928
  W32(c->r[1]+0x000000F0u,c->r[10]); // 801F892C
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F8930
  W32(c->r[1]+0x000000F8u,c->r[11]); // 801F8934
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F8938
  c->lr=0x801F8940u; f_801A4110(c); // 801F893C
L_801F8940:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8940
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8944
  c->lr=c->r[0]; // 801F8948
  c->r[1]=c->r[10]|c->r[10]; // 801F894C
  return; // 801F8950
}

// fn_801F8954
void f_801F8954(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8954
  c->r[12]=c->r[1]|c->r[1]; // 801F8958
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F895C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8960
  c->r[0]=c->lr; // 801F8964
  cmps(c,0,(int32_t)c->r[3],0); // 801F8968
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F896C
  c->r[7]=c->r[1]+0x000000F0u; // 801F8970
  c->r[8]=c->r[1]+0x00000020u; // 801F8974
  if (crb(c,0)) { goto L_801F8990; } // 801F8978
  c->r[0]=0u+0x00000000u; // 801F897C
  cmpu(c,0,c->r[4],c->r[0]); // 801F8980
  if (crb(c,2)) { goto L_801F8990; } // 801F8984
  cmps(c,0,(int32_t)c->r[5],0); // 801F8988
  if (!crb(c,2)) { goto L_801F8998; } // 801F898C
L_801F8990:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8990
  goto L_801F89E8; // 801F8994
L_801F8998:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8998
  if (crb(c,2)) { goto L_801F89A8; } // 801F899C
  c->r[3]=0u+0xFFFFFC07u; // 801F89A0
  goto L_801F89E8; // 801F89A4
L_801F89A8:;
  c->r[6]=R32(c->r[13]+0xFFFF95D8u); // 801F89A8
  cmps(c,0,(int32_t)c->r[6],0); // 801F89AC
  if (!crb(c,0)) { goto L_801F89BC; } // 801F89B0
  c->r[3]=0u+0xFFFFFC07u; // 801F89B4
  goto L_801F89E8; // 801F89B8
L_801F89BC:;
  c->r[0]=0u+0x00000004u; // 801F89BC
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F89C0
  c->r[3]=c->r[6]|c->r[6]; // 801F89C4
  c->r[6]=0u+0x00000000u; // 801F89C8
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801F89CC
  c->r[4]=0u+0x00000004u; // 801F89D0
  W32(c->r[1]+0x000000FCu,c->r[5]); // 801F89D4
  c->r[5]=0u+0x00000002u; // 801F89D8
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F89DC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F89E0
  c->lr=0x801F89E8u; f_801A4110(c); // 801F89E4
L_801F89E8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F89E8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F89EC
  c->lr=c->r[0]; // 801F89F0
  c->r[1]=c->r[10]|c->r[10]; // 801F89F4
  return; // 801F89F8
}

// fn_801F89FC
void f_801F89FC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F89FC
  c->r[12]=c->r[1]|c->r[1]; // 801F8A00
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8A04
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8A08
  c->r[0]=c->lr; // 801F8A0C
  cmps(c,0,(int32_t)c->r[3],0); // 801F8A10
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8A14
  c->r[7]=c->r[1]+0x000000F0u; // 801F8A18
  c->r[5]=c->r[1]+0x00000020u; // 801F8A1C
  if (crb(c,0)) { goto L_801F8A30; } // 801F8A20
  c->r[4]=R32(c->r[13]+0xFFFF95D8u); // 801F8A24
  cmps(c,0,(int32_t)c->r[4],0); // 801F8A28
  if (!crb(c,0)) { goto L_801F8A38; } // 801F8A2C
L_801F8A30:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8A30
  goto L_801F8A5C; // 801F8A34
L_801F8A38:;
  c->r[0]=0u+0x00000004u; // 801F8A38
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F8A3C
  c->r[3]=c->r[4]|c->r[4]; // 801F8A40
  c->r[4]=0u+0x00000005u; // 801F8A44
  W32(c->r[1]+0x000000F0u,c->r[5]); // 801F8A48
  c->r[5]=0u+0x00000001u; // 801F8A4C
  c->r[6]=0u+0x00000000u; // 801F8A50
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8A54
  c->lr=0x801F8A5Cu; f_801A4110(c); // 801F8A58
L_801F8A5C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8A5C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8A60
  c->lr=c->r[0]; // 801F8A64
  c->r[1]=c->r[10]|c->r[10]; // 801F8A68
  return; // 801F8A6C
}

// fn_801F8A70
void f_801F8A70(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8A70
  c->r[12]=c->r[1]|c->r[1]; // 801F8A74
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8A78
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8A7C
  c->r[0]=c->lr; // 801F8A80
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8A84
  c->r[7]=c->r[1]+0x000000F0u; // 801F8A88
  c->r[3]=R32(c->r[13]+0xFFFF95D8u); // 801F8A8C
  cmps(c,0,(int32_t)c->r[3],0); // 801F8A90
  if (!crb(c,0)) { goto L_801F8AA0; } // 801F8A94
  c->r[3]=0u+0xFFFFFC07u; // 801F8A98
  goto L_801F8AB0; // 801F8A9C
L_801F8AA0:;
  c->r[4]=0u+0x00000006u; // 801F8AA0
  c->r[5]=0u+0x00000000u; // 801F8AA4
  c->r[6]=0u+0x00000000u; // 801F8AA8
  c->lr=0x801F8AB0u; f_801A4110(c); // 801F8AAC
L_801F8AB0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8AB0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8AB4
  c->lr=c->r[0]; // 801F8AB8
  c->r[1]=c->r[10]|c->r[10]; // 801F8ABC
  return; // 801F8AC0
}

// fn_801F8AC4
void f_801F8AC4(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8AC4
  c->r[12]=c->r[1]|c->r[1]; // 801F8AC8
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8ACC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8AD0
  c->r[0]=c->lr; // 801F8AD4
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8AD8
  c->r[7]=c->r[1]+0x000000F0u; // 801F8ADC
  c->r[3]=R32(c->r[13]+0xFFFF95D8u); // 801F8AE0
  cmps(c,0,(int32_t)c->r[3],0); // 801F8AE4
  if (!crb(c,0)) { goto L_801F8AF4; } // 801F8AE8
  c->r[3]=0u+0xFFFFFC07u; // 801F8AEC
  goto L_801F8B04; // 801F8AF0
L_801F8AF4:;
  c->r[4]=0u+0x0000002Fu; // 801F8AF4
  c->r[5]=0u+0x00000000u; // 801F8AF8
  c->r[6]=0u+0x00000000u; // 801F8AFC
  c->lr=0x801F8B04u; f_801A4110(c); // 801F8B00
L_801F8B04:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8B04
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8B08
  c->lr=c->r[0]; // 801F8B0C
  c->r[1]=c->r[10]|c->r[10]; // 801F8B10
  return; // 801F8B14
}

// fn_801F8B18
void f_801F8B18(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8B18
  c->r[12]=c->r[1]|c->r[1]; // 801F8B1C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8B20
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8B24
  c->r[0]=c->lr; // 801F8B28
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8B2C
  c->r[7]=c->r[1]+0x000000F0u; // 801F8B30
  c->r[10]=c->r[1]+0x00000020u; // 801F8B34
  c->r[9]=R32(c->r[13]+0xFFFF95D8u); // 801F8B38
  cmps(c,0,(int32_t)c->r[9],0); // 801F8B3C
  if (!crb(c,0)) { goto L_801F8B4C; } // 801F8B40
  c->r[3]=0u+0xFFFFFC07u; // 801F8B44
  goto L_801F8B98; // 801F8B48
L_801F8B4C:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8B4C
  if (crb(c,2)) { goto L_801F8B5C; } // 801F8B50
  c->r[3]=0u+0xFFFFFC07u; // 801F8B54
  goto L_801F8B98; // 801F8B58
L_801F8B5C:;
  c->r[8]=0u+0x00000008u; // 801F8B5C
  c->r[0]=0u+0x000000D8u; // 801F8B60
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F8B64
  c->r[4]=0u+0x00000008u; // 801F8B68
  c->r[6]=0u+0x00000000u; // 801F8B6C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F8B70
  c->r[3]=c->r[9]|c->r[9]; // 801F8B74
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801F8B78
  c->r[5]=0u+0x00000002u; // 801F8B7C
  W32(c->r[1]+0x000000F0u,c->r[10]); // 801F8B80
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F8B84
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F8B88
  c->lr=0x801F8B90u; f_801A41EC(c); // 801F8B8C
  c->r[0]=0u+0xFFFFFFFFu; // 801F8B90
  W32(c->r[13]+0xFFFF95D8u,c->r[0]); // 801F8B94
L_801F8B98:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8B98
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8B9C
  c->lr=c->r[0]; // 801F8BA0
  c->r[1]=c->r[10]|c->r[10]; // 801F8BA4
  return; // 801F8BA8
}

// fn_801F8BAC
void f_801F8BAC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8BAC
  c->r[12]=c->r[1]|c->r[1]; // 801F8BB0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8BB4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8BB8
  c->r[0]=c->lr; // 801F8BBC
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8BC0
  c->r[7]=c->r[1]+0x000000F0u; // 801F8BC4
  c->r[5]=c->r[1]+0x00000020u; // 801F8BC8
  c->r[4]=R32(c->r[13]+0xFFFF95D8u); // 801F8BCC
  cmps(c,0,(int32_t)c->r[4],0); // 801F8BD0
  if (!crb(c,0)) { goto L_801F8BE0; } // 801F8BD4
  c->r[3]=0u+0xFFFFFC07u; // 801F8BD8
  goto L_801F8C04; // 801F8BDC
L_801F8BE0:;
  c->r[0]=0u+0x00000004u; // 801F8BE0
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F8BE4
  c->r[3]=c->r[4]|c->r[4]; // 801F8BE8
  c->r[4]=0u+0x00000009u; // 801F8BEC
  W32(c->r[1]+0x000000F0u,c->r[5]); // 801F8BF0
  c->r[5]=0u+0x00000001u; // 801F8BF4
  c->r[6]=0u+0x00000000u; // 801F8BF8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8BFC
  c->lr=0x801F8C04u; f_801A4110(c); // 801F8C00
L_801F8C04:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8C04
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8C08
  c->lr=c->r[0]; // 801F8C0C
  c->r[1]=c->r[10]|c->r[10]; // 801F8C10
  return; // 801F8C14
}

// fn_801F8C18
void f_801F8C18(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8C18
  c->r[12]=c->r[1]|c->r[1]; // 801F8C1C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8C20
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8C24
  c->r[0]=c->lr; // 801F8C28
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8C2C
  c->r[7]=c->r[1]+0x000000F0u; // 801F8C30
  c->r[11]=c->r[1]+0x00000020u; // 801F8C34
  c->r[12]=c->r[1]+0x00000040u; // 801F8C38
  c->r[10]=R32(c->r[13]+0xFFFF95D8u); // 801F8C3C
  cmps(c,0,(int32_t)c->r[10],0); // 801F8C40
  if (crb(c,0)) { goto L_801F8C50; } // 801F8C44
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8C48
  if (crb(c,2)) { goto L_801F8C58; } // 801F8C4C
L_801F8C50:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8C50
  goto L_801F8C9C; // 801F8C54
L_801F8C58:;
  c->r[9]=0u+0x00000008u; // 801F8C58
  c->r[8]=0u+0x000000D8u; // 801F8C5C
  c->r[0]=0u+0x00000004u; // 801F8C60
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F8C64
  c->r[4]=0u+0x00000024u; // 801F8C68
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F8C6C
  c->r[3]=c->r[10]|c->r[10]; // 801F8C70
  W32(c->r[1]+0x00000040u,c->r[6]); // 801F8C74
  c->r[6]=0u+0x00000000u; // 801F8C78
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801F8C7C
  c->r[5]=0u+0x00000003u; // 801F8C80
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F8C84
  W32(c->r[1]+0x000000F4u,c->r[9]); // 801F8C88
  W32(c->r[1]+0x000000FCu,c->r[8]); // 801F8C8C
  W32(c->r[1]+0x00000100u,c->r[12]); // 801F8C90
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F8C94
  c->lr=0x801F8C9Cu; f_801A4110(c); // 801F8C98
L_801F8C9C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8C9C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8CA0
  c->lr=c->r[0]; // 801F8CA4
  c->r[1]=c->r[10]|c->r[10]; // 801F8CA8
  return; // 801F8CAC
}

// fn_801F8CB0
void f_801F8CB0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8CB0
  c->r[12]=c->r[1]|c->r[1]; // 801F8CB4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8CB8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8CBC
  c->r[0]=c->lr; // 801F8CC0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8CC4
  c->r[7]=c->r[1]+0x000000F0u; // 801F8CC8
  c->r[8]=c->r[1]+0x00000020u; // 801F8CCC
  c->r[6]=R32(c->r[13]+0xFFFF95D8u); // 801F8CD0
  cmps(c,0,(int32_t)c->r[6],0); // 801F8CD4
  if (crb(c,0)) { goto L_801F8CF8; } // 801F8CD8
  cmps(c,0,(int32_t)c->r[3],0); // 801F8CDC
  if (crb(c,0)) { goto L_801F8CF8; } // 801F8CE0
  c->r[0]=0u+0x00000000u; // 801F8CE4
  cmpu(c,0,c->r[4],c->r[0]); // 801F8CE8
  if (crb(c,2)) { goto L_801F8CF8; } // 801F8CEC
  cmps(c,0,(int32_t)c->r[5],0); // 801F8CF0
  if (!crb(c,2)) { goto L_801F8D00; } // 801F8CF4
L_801F8CF8:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8CF8
  goto L_801F8D3C; // 801F8CFC
L_801F8D00:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8D00
  if (crb(c,2)) { goto L_801F8D10; } // 801F8D04
  c->r[3]=0u+0xFFFFFC07u; // 801F8D08
  goto L_801F8D3C; // 801F8D0C
L_801F8D10:;
  c->r[0]=0u+0x00000004u; // 801F8D10
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F8D14
  c->r[3]=c->r[6]|c->r[6]; // 801F8D18
  c->r[6]=0u+0x00000001u; // 801F8D1C
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801F8D20
  c->r[4]=0u+0x0000000Au; // 801F8D24
  W32(c->r[1]+0x000000FCu,c->r[5]); // 801F8D28
  c->r[5]=0u+0x00000001u; // 801F8D2C
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F8D30
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8D34
  c->lr=0x801F8D3Cu; f_801A4110(c); // 801F8D38
L_801F8D3C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8D3C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8D40
  c->lr=c->r[0]; // 801F8D44
  c->r[1]=c->r[10]|c->r[10]; // 801F8D48
  return; // 801F8D4C
}

// fn_801F8D50
void f_801F8D50(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8D50
  c->r[12]=c->r[1]|c->r[1]; // 801F8D54
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8D58
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8D5C
  c->r[0]=c->lr; // 801F8D60
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8D64
  c->r[7]=c->r[1]+0x000000F0u; // 801F8D68
  c->r[8]=c->r[1]+0x00000020u; // 801F8D6C
  c->r[9]=c->r[1]+0x00000040u; // 801F8D70
  c->r[6]=R32(c->r[13]+0xFFFF95D8u); // 801F8D74
  c->r[10]=c->r[1]+0x00000060u; // 801F8D78
  cmps(c,0,(int32_t)c->r[6],0); // 801F8D7C
  if (!crb(c,0)) { goto L_801F8D8C; } // 801F8D80
  c->r[3]=0u+0xFFFFFC07u; // 801F8D84
  goto L_801F8DC8; // 801F8D88
L_801F8D8C:;
  c->r[0]=0u+0x00000004u; // 801F8D8C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F8D90
  c->r[3]=c->r[6]|c->r[6]; // 801F8D94
  c->r[6]=0u+0x00000000u; // 801F8D98
  W32(c->r[1]+0x00000040u,c->r[4]); // 801F8D9C
  c->r[4]=0u+0x00000023u; // 801F8DA0
  W32(c->r[1]+0x00000060u,c->r[5]); // 801F8DA4
  c->r[5]=0u+0x00000003u; // 801F8DA8
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F8DAC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8DB0
  W32(c->r[1]+0x000000F8u,c->r[9]); // 801F8DB4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F8DB8
  W32(c->r[1]+0x00000100u,c->r[10]); // 801F8DBC
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F8DC0
  c->lr=0x801F8DC8u; f_801A4110(c); // 801F8DC4
L_801F8DC8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8DC8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8DCC
  c->lr=c->r[0]; // 801F8DD0
  c->r[1]=c->r[10]|c->r[10]; // 801F8DD4
  return; // 801F8DD8
}

// fn_801F8DDC
void f_801F8DDC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8DDC
  c->r[12]=c->r[1]|c->r[1]; // 801F8DE0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F8DE4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8DE8
  c->r[0]=c->lr; // 801F8DEC
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8DF0
  c->r[7]=c->r[1]+0x000000F0u; // 801F8DF4
  c->r[5]=c->r[1]+0x00000020u; // 801F8DF8
  c->r[4]=R32(c->r[13]+0xFFFF95D8u); // 801F8DFC
  cmps(c,0,(int32_t)c->r[4],0); // 801F8E00
  if (crb(c,0)) { goto L_801F8E10; } // 801F8E04
  cmps(c,0,(int32_t)c->r[3],0); // 801F8E08
  if (!crb(c,0)) { goto L_801F8E18; } // 801F8E0C
L_801F8E10:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8E10
  goto L_801F8E3C; // 801F8E14
L_801F8E18:;
  c->r[0]=0u+0x00000004u; // 801F8E18
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F8E1C
  c->r[3]=c->r[4]|c->r[4]; // 801F8E20
  c->r[4]=0u+0x0000000Bu; // 801F8E24
  W32(c->r[1]+0x000000F0u,c->r[5]); // 801F8E28
  c->r[5]=0u+0x00000001u; // 801F8E2C
  c->r[6]=0u+0x00000000u; // 801F8E30
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8E34
  c->lr=0x801F8E3Cu; f_801A4110(c); // 801F8E38
L_801F8E3C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8E3C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8E40
  c->lr=c->r[0]; // 801F8E44
  c->r[1]=c->r[10]|c->r[10]; // 801F8E48
  return; // 801F8E4C
}

// fn_801F8E50
void f_801F8E50(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8E50
  c->r[12]=c->r[1]|c->r[1]; // 801F8E54
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F8E58
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8E5C
  c->r[0]=c->lr; // 801F8E60
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8E64
  c->r[7]=c->r[1]+0x000000F0u; // 801F8E68
  c->r[8]=c->r[1]+0x00000020u; // 801F8E6C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F8E70
  c->r[31]=c->r[4]|c->r[4]; // 801F8E74
  c->r[6]=R32(c->r[13]+0xFFFF95D8u); // 801F8E78
  cmps(c,0,(int32_t)c->r[6],0); // 801F8E7C
  if (crb(c,0)) { goto L_801F8E90; } // 801F8E80
  c->r[5]=0u+0x00000000u; // 801F8E84
  cmpu(c,0,c->r[4],c->r[5]); // 801F8E88
  if (!crb(c,2)) { goto L_801F8E98; } // 801F8E8C
L_801F8E90:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8E90
  goto L_801F8F2C; // 801F8E94
L_801F8E98:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8E98
  if (crb(c,2)) { goto L_801F8EA8; } // 801F8E9C
  c->r[3]=0u+0xFFFFFC07u; // 801F8EA0
  goto L_801F8F2C; // 801F8EA4
L_801F8EA8:;
  cmpu(c,0,c->r[3],c->r[5]); // 801F8EA8
  if (!crb(c,2)) { goto L_801F8EE4; } // 801F8EAC
  c->r[0]=0u+0x00000004u; // 801F8EB0
  c->r[3]=c->r[6]|c->r[6]; // 801F8EB4
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F8EB8
  c->r[4]=0u+0x0000000Cu; // 801F8EBC
  c->r[5]=0u+0x00000000u; // 801F8EC0
  c->r[6]=0u+0x00000001u; // 801F8EC4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8EC8
  c->lr=0x801F8ED0u; f_801A4110(c); // 801F8ECC
  cmps(c,0,(int32_t)c->r[3],0); // 801F8ED0
  if (!crb(c,2)) { goto L_801F8F2C; } // 801F8ED4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F8ED8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F8EDC
  goto L_801F8F2C; // 801F8EE0
L_801F8EE4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801F8EE4
  cmps(c,0,(int32_t)c->r[5],0); // 801F8EE8
  if (!crb(c,2)) { goto L_801F8EF8; } // 801F8EEC
  c->r[3]=0u+0xFFFFFC07u; // 801F8EF0
  goto L_801F8F2C; // 801F8EF4
L_801F8EF8:;
  c->r[0]=0u+0x00000004u; // 801F8EF8
  W32(c->r[1]+0x000000F8u,c->r[3]); // 801F8EFC
  c->r[3]=c->r[6]|c->r[6]; // 801F8F00
  c->r[6]=0u+0x00000001u; // 801F8F04
  W32(c->r[1]+0x00000020u,c->r[5]); // 801F8F08
  c->r[5]=0u+0x00000001u; // 801F8F0C
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F8F10
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8F14
  c->r[0]=R32(c->r[4]+0x00000000u); // 801F8F18
  c->r[4]=0u+0x0000000Du; // 801F8F1C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801F8F20
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F8F24
  c->lr=0x801F8F2Cu; f_801A4110(c); // 801F8F28
L_801F8F2C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F8F2C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F8F30
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F8F34
  c->lr=c->r[0]; // 801F8F38
  c->r[1]=c->r[10]|c->r[10]; // 801F8F3C
  return; // 801F8F40
}

// fn_801F8F44
void f_801F8F44(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F8F44
  c->r[12]=c->r[1]|c->r[1]; // 801F8F48
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F8F4C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8F50
  c->r[0]=c->lr; // 801F8F54
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F8F58
  c->r[7]=c->r[1]+0x000000F0u; // 801F8F5C
  c->r[8]=c->r[1]+0x00000020u; // 801F8F60
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F8F64
  c->r[31]=c->r[4]|c->r[4]; // 801F8F68
  c->r[6]=R32(c->r[13]+0xFFFF95D8u); // 801F8F6C
  cmps(c,0,(int32_t)c->r[6],0); // 801F8F70
  if (crb(c,0)) { goto L_801F8F84; } // 801F8F74
  c->r[5]=0u+0x00000000u; // 801F8F78
  cmpu(c,0,c->r[4],c->r[5]); // 801F8F7C
  if (!crb(c,2)) { goto L_801F8F8C; } // 801F8F80
L_801F8F84:;
  c->r[3]=0u+0xFFFFFC07u; // 801F8F84
  goto L_801F9020; // 801F8F88
L_801F8F8C:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F8F8C
  if (crb(c,2)) { goto L_801F8F9C; } // 801F8F90
  c->r[3]=0u+0xFFFFFC07u; // 801F8F94
  goto L_801F9020; // 801F8F98
L_801F8F9C:;
  cmpu(c,0,c->r[3],c->r[5]); // 801F8F9C
  if (!crb(c,2)) { goto L_801F8FD8; } // 801F8FA0
  c->r[0]=0u+0x00000004u; // 801F8FA4
  c->r[3]=c->r[6]|c->r[6]; // 801F8FA8
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F8FAC
  c->r[4]=0u+0x0000000Eu; // 801F8FB0
  c->r[5]=0u+0x00000000u; // 801F8FB4
  c->r[6]=0u+0x00000001u; // 801F8FB8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F8FBC
  c->lr=0x801F8FC4u; f_801A4110(c); // 801F8FC0
  cmps(c,0,(int32_t)c->r[3],0); // 801F8FC4
  if (!crb(c,2)) { goto L_801F9020; } // 801F8FC8
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F8FCC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F8FD0
  goto L_801F9020; // 801F8FD4
L_801F8FD8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801F8FD8
  cmps(c,0,(int32_t)c->r[5],0); // 801F8FDC
  if (!crb(c,2)) { goto L_801F8FEC; } // 801F8FE0
  c->r[3]=0u+0xFFFFFC07u; // 801F8FE4
  goto L_801F9020; // 801F8FE8
L_801F8FEC:;
  c->r[0]=0u+0x00000004u; // 801F8FEC
  W32(c->r[1]+0x000000F8u,c->r[3]); // 801F8FF0
  c->r[3]=c->r[6]|c->r[6]; // 801F8FF4
  c->r[6]=0u+0x00000001u; // 801F8FF8
  W32(c->r[1]+0x00000020u,c->r[5]); // 801F8FFC
  c->r[5]=0u+0x00000001u; // 801F9000
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F9004
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F9008
  c->r[0]=R32(c->r[4]+0x00000000u); // 801F900C
  c->r[4]=0u+0x0000000Fu; // 801F9010
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801F9014
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9018
  c->lr=0x801F9020u; f_801A4110(c); // 801F901C
L_801F9020:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9020
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9024
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F9028
  c->lr=c->r[0]; // 801F902C
  c->r[1]=c->r[10]|c->r[10]; // 801F9030
  return; // 801F9034
}

// fn_801F9038
void f_801F9038(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9038
  c->r[12]=c->r[1]|c->r[1]; // 801F903C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F9040
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9044
  c->r[0]=c->lr; // 801F9048
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F904C
  c->r[7]=c->r[1]+0x000000F0u; // 801F9050
  c->r[11]=c->r[1]+0x00000020u; // 801F9054
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F9058
  c->r[31]=c->r[6]|c->r[6]; // 801F905C
  c->r[12]=c->r[1]+0x00000040u; // 801F9060
  c->r[10]=R32(c->r[13]+0xFFFF95D8u); // 801F9064
  cmps(c,0,(int32_t)c->r[10],0); // 801F9068
  if (crb(c,0)) { goto L_801F907C; } // 801F906C
  c->r[8]=0u+0x00000000u; // 801F9070
  cmpu(c,0,c->r[6],c->r[8]); // 801F9074
  if (!crb(c,2)) { goto L_801F9084; } // 801F9078
L_801F907C:;
  c->r[3]=0u+0xFFFFFC07u; // 801F907C
  goto L_801F9138; // 801F9080
L_801F9084:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9084
  if (crb(c,2)) { goto L_801F9094; } // 801F9088
  c->r[3]=0u+0xFFFFFC07u; // 801F908C
  goto L_801F9138; // 801F9090
L_801F9094:;
  cmpu(c,0,c->r[5],c->r[8]); // 801F9094
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F9098
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F909C
  if (!crb(c,2)) { goto L_801F90E4; } // 801F90A0
  c->r[5]=0u+0x00000008u; // 801F90A4
  c->r[0]=0u+0x00000004u; // 801F90A8
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801F90AC
  c->r[3]=c->r[10]|c->r[10]; // 801F90B0
  c->r[4]=0u+0x00000010u; // 801F90B4
  c->r[5]=0u+0x00000001u; // 801F90B8
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F90BC
  c->r[6]=0u+0x00000001u; // 801F90C0
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F90C4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F90C8
  c->lr=0x801F90D0u; f_801A4110(c); // 801F90CC
  cmps(c,0,(int32_t)c->r[3],0); // 801F90D0
  if (!crb(c,2)) { goto L_801F9138; } // 801F90D4
  c->r[0]=R32(c->r[1]+0x00000040u); // 801F90D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F90DC
  goto L_801F9138; // 801F90E0
L_801F90E4:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 801F90E4
  cmps(c,0,(int32_t)c->r[9],0); // 801F90E8
  if (!crb(c,2)) { goto L_801F90F8; } // 801F90EC
  c->r[3]=0u+0xFFFFFC07u; // 801F90F0
  goto L_801F9138; // 801F90F4
L_801F90F8:;
  c->r[8]=0u+0x00000008u; // 801F90F8
  c->r[0]=0u+0x00000004u; // 801F90FC
  W32(c->r[1]+0x00000100u,c->r[5]); // 801F9100
  c->r[3]=c->r[10]|c->r[10]; // 801F9104
  c->r[4]=0u+0x00000011u; // 801F9108
  c->r[5]=0u+0x00000002u; // 801F910C
  W32(c->r[1]+0x00000040u,c->r[9]); // 801F9110
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F9114
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F9118
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F911C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9120
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F9124
  c->r[6]=0u+0x00000001u; // 801F9128
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F912C
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F9130
  c->lr=0x801F9138u; f_801A4110(c); // 801F9134
L_801F9138:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9138
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F913C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F9140
  c->lr=c->r[0]; // 801F9144
  c->r[1]=c->r[10]|c->r[10]; // 801F9148
  return; // 801F914C
}

// fn_801F9150
void f_801F9150(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9150
  c->r[12]=c->r[1]|c->r[1]; // 801F9154
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F9158
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F915C
  c->r[0]=c->lr; // 801F9160
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9164
  c->r[7]=c->r[1]+0x000000F0u; // 801F9168
  c->r[10]=c->r[1]+0x00000020u; // 801F916C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F9170
  c->r[31]=c->r[6]|c->r[6]; // 801F9174
  c->r[9]=R32(c->r[13]+0xFFFF95D8u); // 801F9178
  cmps(c,0,(int32_t)c->r[9],0); // 801F917C
  if (crb(c,0)) { goto L_801F91A8; } // 801F9180
  c->r[8]=0u+0x00000000u; // 801F9184
  cmpu(c,0,c->r[3],c->r[8]); // 801F9188
  if (crb(c,2)) { goto L_801F91A8; } // 801F918C
  cmps(c,0,(int32_t)c->r[4],0); // 801F9190
  if (crb(c,2)) { goto L_801F91A8; } // 801F9194
  cmpu(c,0,c->r[4],0x000049E4u); // 801F9198
  if (crb(c,1)) { goto L_801F91A8; } // 801F919C
  cmpu(c,0,c->r[6],c->r[8]); // 801F91A0
  if (!crb(c,2)) { goto L_801F91B0; } // 801F91A4
L_801F91A8:;
  c->r[3]=0u+0xFFFFFC07u; // 801F91A8
  goto L_801F925C; // 801F91AC
L_801F91B0:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F91B0
  if (!crb(c,2)) { goto L_801F91C0; } // 801F91B4
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F91B8
  if (crb(c,2)) { goto L_801F91C8; } // 801F91BC
L_801F91C0:;
  c->r[3]=0u+0xFFFFFC07u; // 801F91C0
  goto L_801F925C; // 801F91C4
L_801F91C8:;
  cmpu(c,0,c->r[5],c->r[8]); // 801F91C8
  if (!crb(c,2)) { goto L_801F920C; } // 801F91CC
  c->r[0]=0u+0x00000004u; // 801F91D0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F91D4
  c->r[3]=c->r[9]|c->r[9]; // 801F91D8
  c->r[5]=0u+0x00000001u; // 801F91DC
  W32(c->r[1]+0x000000F4u,c->r[4]); // 801F91E0
  c->r[4]=0u+0x00000032u; // 801F91E4
  c->r[6]=0u+0x00000001u; // 801F91E8
  W32(c->r[1]+0x000000F8u,c->r[10]); // 801F91EC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F91F0
  c->lr=0x801F91F8u; f_801A4110(c); // 801F91F4
  cmps(c,0,(int32_t)c->r[3],0); // 801F91F8
  if (!crb(c,2)) { goto L_801F925C; } // 801F91FC
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F9200
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F9204
  goto L_801F925C; // 801F9208
L_801F920C:;
  c->r[8]=R32(c->r[6]+0x00000000u); // 801F920C
  cmps(c,0,(int32_t)c->r[8],0); // 801F9210
  if (!crb(c,2)) { goto L_801F9220; } // 801F9214
  c->r[3]=0u+0xFFFFFC07u; // 801F9218
  goto L_801F925C; // 801F921C
L_801F9220:;
  c->r[0]=0u+0x00000004u; // 801F9220
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F9224
  c->r[3]=c->r[9]|c->r[9]; // 801F9228
  W32(c->r[1]+0x000000F4u,c->r[4]); // 801F922C
  c->r[4]=0u+0x00000033u; // 801F9230
  W32(c->r[1]+0x00000100u,c->r[5]); // 801F9234
  c->r[5]=0u+0x00000002u; // 801F9238
  W32(c->r[1]+0x00000020u,c->r[8]); // 801F923C
  W32(c->r[1]+0x000000F8u,c->r[10]); // 801F9240
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9244
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F9248
  c->r[6]=0u+0x00000001u; // 801F924C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F9250
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F9254
  c->lr=0x801F925Cu; f_801A4110(c); // 801F9258
L_801F925C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F925C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9260
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F9264
  c->lr=c->r[0]; // 801F9268
  c->r[1]=c->r[10]|c->r[10]; // 801F926C
  return; // 801F9270
}

// ESP_GetTicketViews
void f_801F9274(Ctx* __restrict c) {
  trace_call(0x801F9274u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9274
  c->r[12]=c->r[1]|c->r[1]; // 801F9278
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F927C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9280
  c->r[0]=c->lr; // 801F9284
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9288
  c->r[7]=c->r[1]+0x000000F0u; // 801F928C
  c->r[11]=c->r[1]+0x00000020u; // 801F9290
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F9294
  c->r[31]=c->r[6]|c->r[6]; // 801F9298
  c->r[12]=c->r[1]+0x00000040u; // 801F929C
  c->r[10]=R32(c->r[13]+0xFFFF95D8u); // 801F92A0
  cmps(c,0,(int32_t)c->r[10],0); // 801F92A4
  if (crb(c,0)) { goto L_801F92B8; } // 801F92A8
  c->r[8]=0u+0x00000000u; // 801F92AC
  cmpu(c,0,c->r[6],c->r[8]); // 801F92B0
  if (!crb(c,2)) { goto L_801F92C0; } // 801F92B4
L_801F92B8:;
  c->r[3]=0u+0xFFFFFC07u; // 801F92B8
  goto L_801F9374; // 801F92BC
L_801F92C0:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F92C0
  if (crb(c,2)) { goto L_801F92D0; } // 801F92C4
  c->r[3]=0u+0xFFFFFC07u; // 801F92C8
  goto L_801F9374; // 801F92CC
L_801F92D0:;
  cmpu(c,0,c->r[5],c->r[8]); // 801F92D0
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F92D4
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F92D8
  if (!crb(c,2)) { goto L_801F9320; } // 801F92DC
  c->r[5]=0u+0x00000008u; // 801F92E0
  c->r[0]=0u+0x00000004u; // 801F92E4
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801F92E8
  c->r[3]=c->r[10]|c->r[10]; // 801F92EC
  c->r[4]=0u+0x00000012u; // 801F92F0
  c->r[5]=0u+0x00000001u; // 801F92F4
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F92F8
  c->r[6]=0u+0x00000001u; // 801F92FC
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F9300
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9304
  c->lr=0x801F930Cu; f_801A4110(c); // 801F9308
  cmps(c,0,(int32_t)c->r[3],0); // 801F930C
  if (!crb(c,2)) { goto L_801F9374; } // 801F9310
  c->r[0]=R32(c->r[1]+0x00000040u); // 801F9314
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F9318
  goto L_801F9374; // 801F931C
L_801F9320:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 801F9320
  cmps(c,0,(int32_t)c->r[9],0); // 801F9324
  if (!crb(c,2)) { goto L_801F9334; } // 801F9328
  c->r[3]=0u+0xFFFFFC07u; // 801F932C
  goto L_801F9374; // 801F9330
L_801F9334:;
  c->r[8]=0u+0x00000008u; // 801F9334
  c->r[0]=0u+0x00000004u; // 801F9338
  W32(c->r[1]+0x00000100u,c->r[5]); // 801F933C
  c->r[3]=c->r[10]|c->r[10]; // 801F9340
  c->r[4]=0u+0x00000013u; // 801F9344
  c->r[5]=0u+0x00000002u; // 801F9348
  W32(c->r[1]+0x00000040u,c->r[9]); // 801F934C
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F9350
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F9354
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F9358
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F935C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F9360
  c->r[6]=0u+0x00000001u; // 801F9364
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 801F9368
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F936C
  c->lr=0x801F9374u; f_801A4110(c); // 801F9370
L_801F9374:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9374
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9378
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F937C
  c->lr=c->r[0]; // 801F9380
  c->r[1]=c->r[10]|c->r[10]; // 801F9384
  return; // 801F9388
}

// ESP_DiGetTicketView
void f_801F938C(Ctx* __restrict c) {
  trace_call(0x801F938Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F938C
  c->r[12]=c->r[1]|c->r[1]; // 801F9390
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F9394
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9398
  c->r[0]=c->lr; // 801F939C
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F93A0
  c->r[7]=c->r[1]+0x000000F0u; // 801F93A4
  c->r[0]=R32(c->r[13]+0xFFFF95D8u); // 801F93A8
  cmps(c,0,(int32_t)c->r[0],0); // 801F93AC
  if (crb(c,0)) { goto L_801F93C0; } // 801F93B0
  c->r[5]=0u+0x00000000u; // 801F93B4
  cmpu(c,0,c->r[4],c->r[5]); // 801F93B8
  if (!crb(c,2)) { goto L_801F93C8; } // 801F93BC
L_801F93C0:;
  c->r[3]=0u+0xFFFFFC07u; // 801F93C0
  goto L_801F941C; // 801F93C4
L_801F93C8:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F93C8
  if (!crb(c,2)) { goto L_801F93D8; } // 801F93CC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F93D0
  if (crb(c,2)) { goto L_801F93E0; } // 801F93D4
L_801F93D8:;
  c->r[3]=0u+0xFFFFFC07u; // 801F93D8
  goto L_801F941C; // 801F93DC
L_801F93E0:;
  cmpu(c,0,c->r[3],c->r[5]); // 801F93E0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F93E4
  if (!crb(c,2)) { goto L_801F93F4; } // 801F93E8
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801F93EC
  goto L_801F93FC; // 801F93F0
L_801F93F4:;
  c->r[0]=0u+0x000002A4u; // 801F93F4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F93F8
L_801F93FC:;
  c->r[0]=0u+0x000000D8u; // 801F93FC
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801F9400
  c->r[3]=R32(c->r[13]+0xFFFF95D8u); // 801F9404
  c->r[4]=0u+0x0000001Bu; // 801F9408
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F940C
  c->r[5]=0u+0x00000001u; // 801F9410
  c->r[6]=0u+0x00000001u; // 801F9414
  c->lr=0x801F941Cu; f_801A4110(c); // 801F9418
L_801F941C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F941C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9420
  c->lr=c->r[0]; // 801F9424
  c->r[1]=c->r[10]|c->r[10]; // 801F9428
  return; // 801F942C
}

// ESP_DiGetTmd
void f_801F9430(Ctx* __restrict c) {
  trace_call(0x801F9430u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9430
  c->r[12]=c->r[1]|c->r[1]; // 801F9434
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F9438
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F943C
  c->r[0]=c->lr; // 801F9440
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9444
  c->r[7]=c->r[1]+0x000000F0u; // 801F9448
  c->r[8]=c->r[1]+0x00000020u; // 801F944C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F9450
  c->r[31]=c->r[4]|c->r[4]; // 801F9454
  c->r[6]=R32(c->r[13]+0xFFFF95D8u); // 801F9458
  cmps(c,0,(int32_t)c->r[6],0); // 801F945C
  if (crb(c,0)) { goto L_801F9470; } // 801F9460
  c->r[5]=0u+0x00000000u; // 801F9464
  cmpu(c,0,c->r[4],c->r[5]); // 801F9468
  if (!crb(c,2)) { goto L_801F9478; } // 801F946C
L_801F9470:;
  c->r[3]=0u+0xFFFFFC07u; // 801F9470
  goto L_801F9508; // 801F9474
L_801F9478:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9478
  if (crb(c,2)) { goto L_801F9488; } // 801F947C
  c->r[3]=0u+0xFFFFFC07u; // 801F9480
  goto L_801F9508; // 801F9484
L_801F9488:;
  cmpu(c,0,c->r[3],c->r[5]); // 801F9488
  if (!crb(c,2)) { goto L_801F94C4; } // 801F948C
  c->r[0]=0u+0x00000004u; // 801F9490
  c->r[3]=c->r[6]|c->r[6]; // 801F9494
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F9498
  c->r[4]=0u+0x00000039u; // 801F949C
  c->r[5]=0u+0x00000000u; // 801F94A0
  c->r[6]=0u+0x00000001u; // 801F94A4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F94A8
  c->lr=0x801F94B0u; f_801A4110(c); // 801F94AC
  cmps(c,0,(int32_t)c->r[3],0); // 801F94B0
  if (!crb(c,2)) { goto L_801F9508; } // 801F94B4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F94B8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F94BC
  goto L_801F9508; // 801F94C0
L_801F94C4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801F94C4
  cmps(c,0,(int32_t)c->r[5],0); // 801F94C8
  if (!crb(c,2)) { goto L_801F94D8; } // 801F94CC
  c->r[3]=0u+0xFFFFFC07u; // 801F94D0
  goto L_801F9508; // 801F94D4
L_801F94D8:;
  c->r[0]=0u+0x00000004u; // 801F94D8
  W32(c->r[1]+0x000000F8u,c->r[3]); // 801F94DC
  c->r[3]=c->r[6]|c->r[6]; // 801F94E0
  c->r[6]=0u+0x00000001u; // 801F94E4
  W32(c->r[1]+0x00000020u,c->r[5]); // 801F94E8
  c->r[5]=0u+0x00000001u; // 801F94EC
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F94F0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F94F4
  c->r[0]=R32(c->r[4]+0x00000000u); // 801F94F8
  c->r[4]=0u+0x0000003Au; // 801F94FC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9500
  c->lr=0x801F9508u; f_801A4110(c); // 801F9504
L_801F9508:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9508
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F950C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F9510
  c->lr=c->r[0]; // 801F9514
  c->r[1]=c->r[10]|c->r[10]; // 801F9518
  return; // 801F951C
}

// fn_801F9520
void f_801F9520(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9520
  c->r[12]=c->r[1]|c->r[1]; // 801F9524
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F9528
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F952C
  c->r[0]=c->lr; // 801F9530
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9534
  c->r[7]=c->r[1]+0x000000F0u; // 801F9538
  c->r[11]=c->r[1]+0x00000020u; // 801F953C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F9540
  c->r[31]=c->r[6]|c->r[6]; // 801F9544
  c->r[12]=c->r[1]+0x00000040u; // 801F9548
  c->r[10]=R32(c->r[13]+0xFFFF95D8u); // 801F954C
  cmps(c,0,(int32_t)c->r[10],0); // 801F9550
  if (crb(c,0)) { goto L_801F9564; } // 801F9554
  c->r[8]=0u+0x00000000u; // 801F9558
  cmpu(c,0,c->r[6],c->r[8]); // 801F955C
  if (!crb(c,2)) { goto L_801F956C; } // 801F9560
L_801F9564:;
  c->r[3]=0u+0xFFFFFC07u; // 801F9564
  goto L_801F961C; // 801F9568
L_801F956C:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F956C
  if (crb(c,2)) { goto L_801F957C; } // 801F9570
  c->r[3]=0u+0xFFFFFC07u; // 801F9574
  goto L_801F961C; // 801F9578
L_801F957C:;
  cmpu(c,0,c->r[5],c->r[8]); // 801F957C
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F9580
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F9584
  if (!crb(c,2)) { goto L_801F95CC; } // 801F9588
  c->r[5]=0u+0x00000008u; // 801F958C
  c->r[0]=0u+0x00000004u; // 801F9590
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801F9594
  c->r[3]=c->r[10]|c->r[10]; // 801F9598
  c->r[4]=0u+0x00000034u; // 801F959C
  c->r[5]=0u+0x00000001u; // 801F95A0
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F95A4
  c->r[6]=0u+0x00000001u; // 801F95A8
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F95AC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F95B0
  c->lr=0x801F95B8u; f_801A4110(c); // 801F95B4
  cmps(c,0,(int32_t)c->r[3],0); // 801F95B8
  if (!crb(c,2)) { goto L_801F961C; } // 801F95BC
  c->r[0]=R32(c->r[1]+0x00000040u); // 801F95C0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F95C4
  goto L_801F961C; // 801F95C8
L_801F95CC:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 801F95CC
  cmps(c,0,(int32_t)c->r[9],0); // 801F95D0
  if (!crb(c,2)) { goto L_801F95E0; } // 801F95D4
  c->r[3]=0u+0xFFFFFC07u; // 801F95D8
  goto L_801F961C; // 801F95DC
L_801F95E0:;
  c->r[8]=0u+0x00000008u; // 801F95E0
  c->r[0]=0u+0x00000004u; // 801F95E4
  W32(c->r[1]+0x00000100u,c->r[5]); // 801F95E8
  c->r[3]=c->r[10]|c->r[10]; // 801F95EC
  c->r[4]=0u+0x00000035u; // 801F95F0
  c->r[5]=0u+0x00000002u; // 801F95F4
  W32(c->r[1]+0x00000040u,c->r[9]); // 801F95F8
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F95FC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F9600
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F9604
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9608
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F960C
  c->r[6]=0u+0x00000001u; // 801F9610
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F9614
  c->lr=0x801F961Cu; f_801A4110(c); // 801F9618
L_801F961C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F961C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9620
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F9624
  c->lr=c->r[0]; // 801F9628
  c->r[1]=c->r[10]|c->r[10]; // 801F962C
  return; // 801F9630
}

// ESP_GetTmdView
void f_801F9634(Ctx* __restrict c) {
  trace_call(0x801F9634u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9634
  c->r[12]=c->r[1]|c->r[1]; // 801F9638
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F963C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9640
  c->r[0]=c->lr; // 801F9644
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9648
  c->r[7]=c->r[1]+0x000000F0u; // 801F964C
  c->r[11]=c->r[1]+0x00000020u; // 801F9650
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F9654
  c->r[31]=c->r[6]|c->r[6]; // 801F9658
  c->r[12]=c->r[1]+0x00000040u; // 801F965C
  c->r[10]=R32(c->r[13]+0xFFFF95D8u); // 801F9660
  cmps(c,0,(int32_t)c->r[10],0); // 801F9664
  if (crb(c,0)) { goto L_801F9678; } // 801F9668
  c->r[8]=0u+0x00000000u; // 801F966C
  cmpu(c,0,c->r[6],c->r[8]); // 801F9670
  if (!crb(c,2)) { goto L_801F9680; } // 801F9674
L_801F9678:;
  c->r[3]=0u+0xFFFFFC07u; // 801F9678
  goto L_801F9730; // 801F967C
L_801F9680:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9680
  if (crb(c,2)) { goto L_801F9690; } // 801F9684
  c->r[3]=0u+0xFFFFFC07u; // 801F9688
  goto L_801F9730; // 801F968C
L_801F9690:;
  cmpu(c,0,c->r[5],c->r[8]); // 801F9690
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F9694
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F9698
  if (!crb(c,2)) { goto L_801F96E0; } // 801F969C
  c->r[5]=0u+0x00000008u; // 801F96A0
  c->r[0]=0u+0x00000004u; // 801F96A4
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801F96A8
  c->r[3]=c->r[10]|c->r[10]; // 801F96AC
  c->r[4]=0u+0x00000014u; // 801F96B0
  c->r[5]=0u+0x00000001u; // 801F96B4
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F96B8
  c->r[6]=0u+0x00000001u; // 801F96BC
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F96C0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F96C4
  c->lr=0x801F96CCu; f_801A4110(c); // 801F96C8
  cmps(c,0,(int32_t)c->r[3],0); // 801F96CC
  if (!crb(c,2)) { goto L_801F9730; } // 801F96D0
  c->r[0]=R32(c->r[1]+0x00000040u); // 801F96D4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F96D8
  goto L_801F9730; // 801F96DC
L_801F96E0:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 801F96E0
  cmps(c,0,(int32_t)c->r[9],0); // 801F96E4
  if (!crb(c,2)) { goto L_801F96F4; } // 801F96E8
  c->r[3]=0u+0xFFFFFC07u; // 801F96EC
  goto L_801F9730; // 801F96F0
L_801F96F4:;
  c->r[8]=0u+0x00000008u; // 801F96F4
  c->r[0]=0u+0x00000004u; // 801F96F8
  W32(c->r[1]+0x00000100u,c->r[5]); // 801F96FC
  c->r[3]=c->r[10]|c->r[10]; // 801F9700
  c->r[4]=0u+0x00000015u; // 801F9704
  c->r[5]=0u+0x00000002u; // 801F9708
  W32(c->r[1]+0x00000040u,c->r[9]); // 801F970C
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801F9710
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F9714
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801F9718
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F971C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F9720
  c->r[6]=0u+0x00000001u; // 801F9724
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F9728
  c->lr=0x801F9730u; f_801A4110(c); // 801F972C
L_801F9730:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9730
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9734
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F9738
  c->lr=c->r[0]; // 801F973C
  c->r[1]=c->r[10]|c->r[10]; // 801F9740
  return; // 801F9744
}

// ESP_GetDataDir
void f_801F9748(Ctx* __restrict c) {
  trace_call(0x801F9748u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9748
  c->r[12]=c->r[1]|c->r[1]; // 801F974C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F9750
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9754
  c->r[0]=c->lr; // 801F9758
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F975C
  c->r[7]=c->r[1]+0x000000F0u; // 801F9760
  c->r[10]=c->r[1]+0x00000020u; // 801F9764
  c->r[9]=R32(c->r[13]+0xFFFF95D8u); // 801F9768
  cmps(c,0,(int32_t)c->r[9],0); // 801F976C
  if (crb(c,0)) { goto L_801F9780; } // 801F9770
  c->r[0]=0u+0x00000000u; // 801F9774
  cmpu(c,0,c->r[5],c->r[0]); // 801F9778
  if (!crb(c,2)) { goto L_801F9788; } // 801F977C
L_801F9780:;
  c->r[3]=0u+0xFFFFFC07u; // 801F9780
  goto L_801F97CC; // 801F9784
L_801F9788:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9788
  if (crb(c,2)) { goto L_801F9798; } // 801F978C
  c->r[3]=0u+0xFFFFFC07u; // 801F9790
  goto L_801F97CC; // 801F9794
L_801F9798:;
  c->r[8]=0u+0x00000008u; // 801F9798
  c->r[0]=0u+0x0000001Eu; // 801F979C
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F97A0
  c->r[4]=0u+0x0000001Du; // 801F97A4
  c->r[6]=0u+0x00000001u; // 801F97A8
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F97AC
  c->r[3]=c->r[9]|c->r[9]; // 801F97B0
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801F97B4
  c->r[5]=0u+0x00000001u; // 801F97B8
  W32(c->r[1]+0x000000F0u,c->r[10]); // 801F97BC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F97C0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F97C4
  c->lr=0x801F97CCu; f_801A4110(c); // 801F97C8
L_801F97CC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F97CC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F97D0
  c->lr=c->r[0]; // 801F97D4
  c->r[1]=c->r[10]|c->r[10]; // 801F97D8
  return; // 801F97DC
}

// ESP_GetTitleId
void f_801F97E0(Ctx* __restrict c) {
  trace_call(0x801F97E0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F97E0
  c->r[12]=c->r[1]|c->r[1]; // 801F97E4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F97E8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F97EC
  c->r[0]=c->lr; // 801F97F0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F97F4
  c->r[7]=c->r[1]+0x000000F0u; // 801F97F8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F97FC
  c->r[31]=c->r[3]|c->r[3]; // 801F9800
  c->r[4]=R32(c->r[13]+0xFFFF95D8u); // 801F9804
  cmps(c,0,(int32_t)c->r[4],0); // 801F9808
  if (crb(c,0)) { goto L_801F981C; } // 801F980C
  c->r[0]=0u+0x00000000u; // 801F9810
  cmpu(c,0,c->r[3],c->r[0]); // 801F9814
  if (!crb(c,2)) { goto L_801F9824; } // 801F9818
L_801F981C:;
  c->r[3]=0u+0xFFFFFC07u; // 801F981C
  goto L_801F9860; // 801F9820
L_801F9824:;
  c->r[3]=c->r[1]+0x00000020u; // 801F9824
  c->r[0]=0u+0x00000008u; // 801F9828
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F982C
  c->r[3]=c->r[4]|c->r[4]; // 801F9830
  c->r[4]=0u+0x00000020u; // 801F9834
  c->r[5]=0u+0x00000000u; // 801F9838
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F983C
  c->r[6]=0u+0x00000001u; // 801F9840
  c->lr=0x801F9848u; f_801A4110(c); // 801F9844
  cmps(c,0,(int32_t)c->r[3],0); // 801F9848
  if (!crb(c,2)) { goto L_801F9860; } // 801F984C
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F9850
  c->r[4]=R32(c->r[1]+0x00000024u); // 801F9854
  W32(c->r[31]+0x00000004u,c->r[4]); // 801F9858
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F985C
L_801F9860:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9860
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9864
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F9868
  c->lr=c->r[0]; // 801F986C
  c->r[1]=c->r[10]|c->r[10]; // 801F9870
  return; // 801F9874
}

// fn_801F9878
void f_801F9878(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9878
  c->r[12]=c->r[1]|c->r[1]; // 801F987C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F9880
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9884
  c->r[0]=c->lr; // 801F9888
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F988C
  c->r[7]=c->r[1]+0x000000F0u; // 801F9890
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F9894
  c->r[31]=c->r[3]|c->r[3]; // 801F9898
  c->r[4]=R32(c->r[13]+0xFFFF95D8u); // 801F989C
  cmps(c,0,(int32_t)c->r[4],0); // 801F98A0
  if (crb(c,0)) { goto L_801F98B4; } // 801F98A4
  c->r[0]=0u+0x00000000u; // 801F98A8
  cmpu(c,0,c->r[3],c->r[0]); // 801F98AC
  if (!crb(c,2)) { goto L_801F98BC; } // 801F98B0
L_801F98B4:;
  c->r[3]=0u+0xFFFFFC07u; // 801F98B4
  goto L_801F98F0; // 801F98B8
L_801F98BC:;
  c->r[3]=c->r[1]+0x00000020u; // 801F98BC
  c->r[0]=0u+0x00000004u; // 801F98C0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F98C4
  c->r[3]=c->r[4]|c->r[4]; // 801F98C8
  c->r[4]=0u+0x00000007u; // 801F98CC
  c->r[5]=0u+0x00000000u; // 801F98D0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F98D4
  c->r[6]=0u+0x00000001u; // 801F98D8
  c->lr=0x801F98E0u; f_801A4110(c); // 801F98DC
  cmps(c,0,(int32_t)c->r[3],0); // 801F98E0
  if (!crb(c,2)) { goto L_801F98F0; } // 801F98E4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801F98E8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F98EC
L_801F98F0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F98F0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F98F4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F98F8
  c->lr=c->r[0]; // 801F98FC
  c->r[1]=c->r[10]|c->r[10]; // 801F9900
  return; // 801F9904
}

// ESP_GetConsumption
void f_801F9908(Ctx* __restrict c) {
  trace_call(0x801F9908u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9908
  c->r[12]=c->r[1]|c->r[1]; // 801F990C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801F9910
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9914
  c->r[0]=c->lr; // 801F9918
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F991C
  c->r[7]=c->r[1]+0x000000F0u; // 801F9920
  c->r[9]=c->r[1]+0x00000020u; // 801F9924
  c->r[10]=c->r[1]+0x00000040u; // 801F9928
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801F992C
  c->r[31]=c->r[6]|c->r[6]; // 801F9930
  c->r[0]=R32(c->r[13]+0xFFFF95D8u); // 801F9934
  cmps(c,0,(int32_t)c->r[0],0); // 801F9938
  if (!crb(c,0)) { goto L_801F9948; } // 801F993C
  c->r[3]=0u+0xFFFFFC07u; // 801F9940
  goto L_801F99C4; // 801F9944
L_801F9948:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9948
  if (crb(c,2)) { goto L_801F9958; } // 801F994C
  c->r[3]=0u+0xFFFFFC07u; // 801F9950
  goto L_801F99C4; // 801F9954
L_801F9958:;
  c->r[0]=0u+0x00000000u; // 801F9958
  c->r[8]=0u+0x00000008u; // 801F995C
  cmpu(c,0,c->r[5],c->r[0]); // 801F9960
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F9964
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F9968
  W32(c->r[1]+0x000000F0u,c->r[9]); // 801F996C
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F9970
  if (!crb(c,2)) { goto L_801F9984; } // 801F9974
  W32(c->r[1]+0x000000F8u,c->r[0]); // 801F9978
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F997C
  goto L_801F999C; // 801F9980
L_801F9984:;
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801F9984
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F9988
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801F998C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9990
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F9994
  W32(c->r[1]+0x00000040u,c->r[0]); // 801F9998
L_801F999C:;
  c->r[0]=0u+0x00000004u; // 801F999C
  W32(c->r[1]+0x00000100u,c->r[10]); // 801F99A0
  c->r[3]=R32(c->r[13]+0xFFFF95D8u); // 801F99A4
  c->r[4]=0u+0x00000016u; // 801F99A8
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F99AC
  c->r[5]=0u+0x00000001u; // 801F99B0
  c->r[6]=0u+0x00000002u; // 801F99B4
  c->lr=0x801F99BCu; f_801A4110(c); // 801F99B8
  c->r[0]=R32(c->r[1]+0x00000040u); // 801F99BC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F99C0
L_801F99C4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F99C4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F99C8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801F99CC
  c->lr=c->r[0]; // 801F99D0
  c->r[1]=c->r[10]|c->r[10]; // 801F99D4
  return; // 801F99D8
}

// fn_801F99DC
void f_801F99DC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F99DC
  c->r[12]=c->r[1]|c->r[1]; // 801F99E0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F99E4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F99E8
  c->r[0]=c->lr; // 801F99EC
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F99F0
  c->r[7]=c->r[1]+0x000000F0u; // 801F99F4
  c->r[4]=R32(c->r[13]+0xFFFF95D8u); // 801F99F8
  cmps(c,0,(int32_t)c->r[4],0); // 801F99FC
  if (crb(c,0)) { goto L_801F9A10; } // 801F9A00
  c->r[0]=0u+0x00000000u; // 801F9A04
  cmpu(c,0,c->r[3],c->r[0]); // 801F9A08
  if (!crb(c,2)) { goto L_801F9A18; } // 801F9A0C
L_801F9A10:;
  c->r[3]=0u+0xFFFFFC07u; // 801F9A10
  goto L_801F9A48; // 801F9A14
L_801F9A18:;
  c->r[0]=rotl(c->r[3],0)&0x0000003Fu; cr0(c,c->r[0]); // 801F9A18
  if (crb(c,2)) { goto L_801F9A28; } // 801F9A1C
  c->r[3]=0u+0xFFFFFC07u; // 801F9A20
  goto L_801F9A48; // 801F9A24
L_801F9A28:;
  c->r[0]=0u+0x00000180u; // 801F9A28
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F9A2C
  c->r[3]=c->r[4]|c->r[4]; // 801F9A30
  c->r[4]=0u+0x0000001Eu; // 801F9A34
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F9A38
  c->r[5]=0u+0x00000000u; // 801F9A3C
  c->r[6]=0u+0x00000001u; // 801F9A40
  c->lr=0x801F9A48u; f_801A4110(c); // 801F9A44
L_801F9A48:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9A48
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9A4C
  c->lr=c->r[0]; // 801F9A50
  c->r[1]=c->r[10]|c->r[10]; // 801F9A54
  return; // 801F9A58
}

// fn_801F9A5C
void f_801F9A5C(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9A5C
  c->r[12]=c->r[1]|c->r[1]; // 801F9A60
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F9A64
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9A68
  c->r[0]=c->lr; // 801F9A6C
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9A70
  c->r[7]=c->r[1]+0x000000F0u; // 801F9A74
  c->r[9]=R32(c->r[13]+0xFFFF95D8u); // 801F9A78
  cmps(c,0,(int32_t)c->r[9],0); // 801F9A7C
  if (crb(c,0)) { goto L_801F9AA0; } // 801F9A80
  c->r[0]=0u+0x00000000u; // 801F9A84
  cmpu(c,0,c->r[3],c->r[0]); // 801F9A88
  if (crb(c,2)) { goto L_801F9AA0; } // 801F9A8C
  cmpu(c,0,c->r[5],c->r[0]); // 801F9A90
  if (crb(c,2)) { goto L_801F9AA0; } // 801F9A94
  cmpu(c,0,c->r[6],c->r[0]); // 801F9A98
  if (!crb(c,2)) { goto L_801F9AA8; } // 801F9A9C
L_801F9AA0:;
  c->r[3]=0u+0xFFFFFC07u; // 801F9AA0
  goto L_801F9AFC; // 801F9AA4
L_801F9AA8:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9AA8
  if (!crb(c,2)) { goto L_801F9AC0; } // 801F9AAC
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9AB0
  if (!crb(c,2)) { goto L_801F9AC0; } // 801F9AB4
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801F9AB8
  if (crb(c,2)) { goto L_801F9AC8; } // 801F9ABC
L_801F9AC0:;
  c->r[3]=0u+0xFFFFFC07u; // 801F9AC0
  goto L_801F9AFC; // 801F9AC4
L_801F9AC8:;
  c->r[8]=0u+0x0000003Cu; // 801F9AC8
  c->r[0]=0u+0x00000180u; // 801F9ACC
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801F9AD0
  c->r[3]=c->r[9]|c->r[9]; // 801F9AD4
  W32(c->r[1]+0x000000F4u,c->r[4]); // 801F9AD8
  c->r[4]=0u+0x00000030u; // 801F9ADC
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801F9AE0
  c->r[5]=0u+0x00000001u; // 801F9AE4
  W32(c->r[1]+0x00000100u,c->r[6]); // 801F9AE8
  c->r[6]=0u+0x00000002u; // 801F9AEC
  W32(c->r[1]+0x000000FCu,c->r[8]); // 801F9AF0
  W32(c->r[1]+0x00000104u,c->r[0]); // 801F9AF4
  c->lr=0x801F9AFCu; f_801A4110(c); // 801F9AF8
L_801F9AFC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9AFC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9B00
  c->lr=c->r[0]; // 801F9B04
  c->r[1]=c->r[10]|c->r[10]; // 801F9B08
  return; // 801F9B0C
}

// fn_801F9B10
void f_801F9B10(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9B10
  c->r[12]=c->r[1]|c->r[1]; // 801F9B14
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F9B18
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9B1C
  c->r[0]=c->lr; // 801F9B20
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9B24
  c->r[7]=c->r[1]+0x000000F0u; // 801F9B28
  c->r[8]=c->r[1]+0x00000020u; // 801F9B2C
  c->r[5]=R32(c->r[13]+0xFFFF95D8u); // 801F9B30
  cmps(c,0,(int32_t)c->r[5],0); // 801F9B34
  if (!crb(c,0)) { goto L_801F9B44; } // 801F9B38
  c->r[3]=0u+0xFFFFFC07u; // 801F9B3C
  goto L_801F9B6C; // 801F9B40
L_801F9B44:;
  c->r[0]=0u+0x00000008u; // 801F9B44
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F9B48
  c->r[4]=0u+0x00000022u; // 801F9B4C
  c->r[6]=0u+0x00000000u; // 801F9B50
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F9B54
  c->r[3]=c->r[5]|c->r[5]; // 801F9B58
  c->r[5]=0u+0x00000001u; // 801F9B5C
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801F9B60
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801F9B64
  c->lr=0x801F9B6Cu; f_801A4110(c); // 801F9B68
L_801F9B6C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9B6C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9B70
  c->lr=c->r[0]; // 801F9B74
  c->r[1]=c->r[10]|c->r[10]; // 801F9B78
  return; // 801F9B7C
}

// fn_801F9B80
void f_801F9B80(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801F9B80
  c->r[12]=c->r[1]|c->r[1]; // 801F9B84
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801F9B88
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9B8C
  c->r[0]=c->lr; // 801F9B90
  W32(c->r[12]+0x00000004u,c->r[0]); // 801F9B94
  c->r[7]=c->r[1]+0x000000F0u; // 801F9B98
  c->r[10]=c->r[1]+0x00000020u; // 801F9B9C
  c->r[11]=c->r[1]+0x00000040u; // 801F9BA0
  c->r[9]=R32(c->r[13]+0xFFFF95D8u); // 801F9BA4
  cmps(c,0,(int32_t)c->r[9],0); // 801F9BA8
  if (!crb(c,0)) { goto L_801F9BB8; } // 801F9BAC
  c->r[3]=0u+0xFFFFFC07u; // 801F9BB0
  goto L_801F9BF0; // 801F9BB4
L_801F9BB8:;
  c->r[8]=0u+0x00000008u; // 801F9BB8
  c->r[0]=0u+0x00000004u; // 801F9BBC
  W32(c->r[1]+0x00000024u,c->r[4]); // 801F9BC0
  c->r[4]=0u+0x0000003Eu; // 801F9BC4
  c->r[6]=0u+0x00000000u; // 801F9BC8
  W32(c->r[1]+0x00000020u,c->r[3]); // 801F9BCC
  c->r[3]=c->r[9]|c->r[9]; // 801F9BD0
  W32(c->r[1]+0x00000040u,c->r[5]); // 801F9BD4
  c->r[5]=0u+0x00000002u; // 801F9BD8
  W32(c->r[1]+0x000000F0u,c->r[10]); // 801F9BDC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801F9BE0
  W32(c->r[1]+0x000000F8u,c->r[11]); // 801F9BE4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801F9BE8
  c->lr=0x801F9BF0u; f_801A4110(c); // 801F9BEC
L_801F9BF0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F9BF0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F9BF4
  c->lr=c->r[0]; // 801F9BF8
  c->r[1]=c->r[10]|c->r[10]; // 801F9BFC
  return; // 801F9C00
}

// fn_801F9C04
void f_801F9C04(Ctx* __restrict c) {
  c->r[7]=0u+0x67450000u; // 801F9C04
  c->r[6]=0u+0xEFCE0000u; // 801F9C08
  c->r[8]=0u+0x00000000u; // 801F9C0C
  c->r[5]=0u+0x98BB0000u; // 801F9C10
  c->r[4]=0u+0x10320000u; // 801F9C14
  c->r[7]=c->r[7]+0x00002301u; // 801F9C18
  c->r[6]=c->r[6]+0xFFFFAB89u; // 801F9C1C
  c->r[5]=c->r[5]+0xFFFFDCFEu; // 801F9C20
  c->r[0]=c->r[4]+0x00005476u; // 801F9C24
  W32(c->r[3]+0x00000014u,c->r[8]); // 801F9C28
  W32(c->r[3]+0x00000010u,c->r[8]); // 801F9C2C
  W32(c->r[3]+0x00000000u,c->r[7]); // 801F9C30
  W32(c->r[3]+0x00000004u,c->r[6]); // 801F9C34
  W32(c->r[3]+0x00000008u,c->r[5]); // 801F9C38
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801F9C3C
  return; // 801F9C40
}

// fn_801F9C44
void f_801F9C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9C44
  c->r[0]=c->lr; // 801F9C48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F9C4C
  c->r[11]=c->r[1]+0x00000020u; // 801F9C50
  c->lr=0x801F9C58u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F9C54
  c->r[6]=R32(c->r[3]+0x00000010u); // 801F9C58
  c->r[7]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801F9C5C
  c->r[28]=c->r[3]|c->r[3]; // 801F9C60
  c->r[29]=c->r[4]|c->r[4]; // 801F9C64
  c->r[0]=c->r[6]+c->r[7]; // 801F9C68
  c->r[30]=c->r[5]|c->r[5]; // 801F9C6C
  cmpu(c,0,c->r[0],c->r[7]); // 801F9C70
  W32(c->r[3]+0x00000010u,c->r[0]); // 801F9C74
  c->r[6]=rotl(c->r[6],29)&0x0000003Fu; // 801F9C78
  if (!crb(c,0)) { goto L_801F9C8C; } // 801F9C7C
  c->r[4]=R32(c->r[3]+0x00000014u); // 801F9C80
  c->r[0]=c->r[4]+0x00000001u; // 801F9C84
  W32(c->r[3]+0x00000014u,c->r[0]); // 801F9C88
L_801F9C8C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 801F9C8C
  c->r[0]=rotl(c->r[5],3)&0x00000007u; // 801F9C90
  c->r[31]=addc(c,~c->r[6],0x00000040u,1); // 801F9C94
  c->r[0]=c->r[4]+c->r[0]; // 801F9C98
  cmpu(c,0,c->r[5],c->r[31]); // 801F9C9C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801F9CA0
  if (crb(c,0)) { goto L_801F9CF0; } // 801F9CA4
  c->r[3]=c->r[3]+c->r[6]; // 801F9CA8
  c->r[4]=c->r[29]|c->r[29]; // 801F9CAC
  c->r[5]=c->r[31]|c->r[31]; // 801F9CB0
  c->r[3]=c->r[3]+0x00000018u; // 801F9CB4
  c->lr=0x801F9CBCu; f_801FA7B0(c); // 801F9CB8
  c->r[3]=c->r[28]|c->r[28]; // 801F9CBC
  c->r[4]=c->r[28]+0x00000018u; // 801F9CC0
  c->lr=0x801F9CC8u; f_801F9DBC(c); // 801F9CC4
  goto L_801F9CDC; // 801F9CC8
L_801F9CCC:;
  c->r[3]=c->r[28]|c->r[28]; // 801F9CCC
  c->r[4]=c->r[29]+c->r[31]; // 801F9CD0
  c->lr=0x801F9CD8u; f_801F9DBC(c); // 801F9CD4
  c->r[31]=c->r[31]+0x00000040u; // 801F9CD8
L_801F9CDC:;
  c->r[0]=c->r[31]+0x0000003Fu; // 801F9CDC
  cmpu(c,0,c->r[0],c->r[30]); // 801F9CE0
  if (crb(c,0)) { IRQCHK(c); goto L_801F9CCC; } // 801F9CE4
  c->r[6]=0u+0x00000000u; // 801F9CE8
  goto L_801F9CF4; // 801F9CEC
L_801F9CF0:;
  c->r[31]=0u+0x00000000u; // 801F9CF0
L_801F9CF4:;
  c->r[3]=c->r[28]+c->r[6]; // 801F9CF4
  c->r[4]=c->r[29]+c->r[31]; // 801F9CF8
  c->r[3]=c->r[3]+0x00000018u; // 801F9CFC
  c->r[5]=c->r[30]-c->r[31]; // 801F9D00
  c->lr=0x801F9D08u; f_801FA7B0(c); // 801F9D04
  c->r[11]=c->r[1]+0x00000020u; // 801F9D08
  c->lr=0x801F9D10u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F9D0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F9D10
  c->lr=c->r[0]; // 801F9D14
  c->r[1]=c->r[1]+0x00000020u; // 801F9D18
  return; // 801F9D1C
}

// fn_801F9D20
void f_801F9D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9D20
  c->r[0]=c->lr; // 801F9D24
  c->r[5]=0u+0x00000008u; // 801F9D28
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F9D2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F9D30
  c->r[31]=c->r[4]|c->r[4]; // 801F9D34
  c->r[4]=c->r[4]+0x00000010u; // 801F9D38
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F9D3C
  c->r[30]=c->r[3]|c->r[3]; // 801F9D40
  c->r[3]=c->r[1]+0x00000008u; // 801F9D44
  c->lr=0x801F9D4Cu; f_801FA754(c); // 801F9D48
  c->r[0]=R32(c->r[31]+0x00000010u); // 801F9D4C
  c->r[4]=0u+0x80340000u; // 801F9D50
  c->r[3]=c->r[31]|c->r[31]; // 801F9D54
  c->r[0]=rotl(c->r[0],29)&0x0000003Fu; // 801F9D58
  c->r[4]=c->r[4]+0xFFFFAA98u; // 801F9D5C
  cmpu(c,0,c->r[0],0x00000038u); // 801F9D60
  c->r[5]=addc(c,~c->r[0],0x00000078u,1); // 801F9D64
  if (!crb(c,0)) { goto L_801F9D70; } // 801F9D68
  c->r[5]=addc(c,~c->r[0],0x00000038u,1); // 801F9D6C
L_801F9D70:;
  c->lr=0x801F9D74u; f_801F9C44(c); // 801F9D70
  c->r[3]=c->r[31]|c->r[31]; // 801F9D74
  c->r[4]=c->r[1]+0x00000008u; // 801F9D78
  c->r[5]=0u+0x00000008u; // 801F9D7C
  c->lr=0x801F9D84u; f_801F9C44(c); // 801F9D80
  c->r[3]=c->r[30]|c->r[30]; // 801F9D84
  c->r[4]=c->r[31]|c->r[31]; // 801F9D88
  c->r[5]=0u+0x00000010u; // 801F9D8C
  c->lr=0x801F9D94u; f_801FA754(c); // 801F9D90
  c->r[3]=c->r[31]|c->r[31]; // 801F9D94
  c->r[4]=0u+0x00000000u; // 801F9D98
  c->r[5]=0u+0x00000058u; // 801F9D9C
  c->lr=0x801F9DA4u; f_801FA7D4(c); // 801F9DA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F9DA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F9DA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F9DAC
  c->lr=c->r[0]; // 801F9DB0
  c->r[1]=c->r[1]+0x00000020u; // 801F9DB4
  return; // 801F9DB8
}

// fn_801F9DBC
void f_801F9DBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9DBC
  c->r[0]=c->lr; // 801F9DC0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801F9DC4
  c->r[11]=c->r[1]+0x000000A0u; // 801F9DC8
  c->lr=0x801F9DD0u; f_80185EA0(c); // 801F9DCC
  c->r[0]=0u+0x00000010u; // 801F9DD0
  c->r[7]=c->r[1]+0x00000008u; // 801F9DD4
  c->r[15]=R32(c->r[3]+0x00000000u); // 801F9DD8
  c->r[5]=0u+0x00000000u; // 801F9DDC
  c->r[6]=R32(c->r[3]+0x00000004u); // 801F9DE0
  c->r[12]=0u+0x00000000u; // 801F9DE4
  c->r[8]=R32(c->r[3]+0x00000008u); // 801F9DE8
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 801F9DEC
  c->ctr=c->r[0]; // 801F9DF0
L_801F9DF4:;
  c->r[14]=c->r[4]+c->r[12]; // 801F9DF4
  c->r[0]=R8(c->r[4]+c->r[12]); // 801F9DF8
  c->r[10]=R8(c->r[14]+0x00000001u); // 801F9DFC
  c->r[12]=c->r[12]+0x00000004u; // 801F9E00
  c->r[11]=R8(c->r[14]+0x00000002u); // 801F9E04
  c->r[0]=(rotl(c->r[10],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801F9E08
  c->r[10]=R8(c->r[14]+0x00000003u); // 801F9E0C
  c->r[0]=(rotl(c->r[11],16)&0x00FF0000u)|(c->r[0]&~0x00FF0000u); // 801F9E10
  c->r[0]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801F9E14
  W32(c->r[7]+c->r[5],c->r[0]); // 801F9E18
  c->r[5]=c->r[5]+0x00000004u; // 801F9E1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F9DF4; } // 801F9E20
  c->r[25]=R32(c->r[1]+0x00000008u); // 801F9E24
  c->r[5]=c->r[6]&c->r[8]; // 801F9E28
  c->r[0]=c->r[9]&~c->r[6]; // 801F9E2C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801F9E30
  c->r[7]=c->r[25]+0xD76B0000u; // 801F9E34
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F9E38
  c->r[7]=c->r[7]+c->r[15]; // 801F9E3C
  c->r[0]=c->r[5]|c->r[0]; // 801F9E40
  c->r[5]=c->r[7]+c->r[0]; // 801F9E44
  c->r[11]=c->r[4]+0xE8C80000u; // 801F9E48
  c->r[15]=c->r[5]+0xFFFFA478u; // 801F9E4C
  c->r[16]=c->r[28]+0x24200000u; // 801F9E50
  c->r[0]=rotl(c->r[15],7)&0xFFFFFFFFu; // 801F9E54
  c->r[31]=R32(c->r[1]+0x00000014u); // 801F9E58
  c->r[0]=c->r[0]+c->r[6]; // 801F9E5C
  c->r[10]=R32(c->r[1]+0x00000018u); // 801F9E60
  c->r[7]=c->r[0]&c->r[6]; // 801F9E64
  c->r[14]=c->r[31]+0xC1BE0000u; // 801F9E68
  c->r[5]=c->r[8]&~c->r[0]; // 801F9E6C
  c->r[9]=c->r[11]+c->r[9]; // 801F9E70
  c->r[5]=c->r[7]|c->r[5]; // 801F9E74
  c->r[12]=c->r[10]+0xF57C0000u; // 801F9E78
  c->r[5]=c->r[9]+c->r[5]; // 801F9E7C
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 801F9E80
  c->r[9]=c->r[5]+0xFFFFB756u; // 801F9E84
  c->r[16]=c->r[16]+c->r[8]; // 801F9E88
  c->r[9]=rotl(c->r[9],12)&0xFFFFFFFFu; // 801F9E8C
  c->r[18]=c->r[14]+c->r[6]; // 801F9E90
  c->r[9]=c->r[9]+c->r[0]; // 801F9E94
  c->r[5]=R32(c->r[1]+0x00000020u); // 801F9E98
  c->r[15]=c->r[9]&c->r[0]; // 801F9E9C
  c->r[17]=c->r[12]+c->r[0]; // 801F9EA0
  c->r[8]=c->r[6]&~c->r[9]; // 801F9EA4
  c->r[27]=R32(c->r[1]+0x00000024u); // 801F9EA8
  c->r[8]=c->r[15]|c->r[8]; // 801F9EAC
  c->r[11]=c->r[7]+0x47880000u; // 801F9EB0
  c->r[6]=c->r[16]+c->r[8]; // 801F9EB4
  c->r[12]=c->r[27]+0xFD470000u; // 801F9EB8
  c->r[8]=c->r[6]+0x000070DBu; // 801F9EBC
  c->r[15]=c->r[11]+c->r[9]; // 801F9EC0
  c->r[8]=rotl(c->r[8],17)&0xFFFFFFFFu; // 801F9EC4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801F9EC8
  c->r[8]=c->r[8]+c->r[9]; // 801F9ECC
  c->r[6]=c->r[5]+0xA8300000u; // 801F9ED0
  c->r[16]=c->r[8]&c->r[9]; // 801F9ED4
  c->r[11]=c->r[30]+0x69810000u; // 801F9ED8
  c->r[0]=c->r[0]&~c->r[8]; // 801F9EDC
  c->r[14]=c->r[6]+c->r[8]; // 801F9EE0
  c->r[0]=c->r[16]|c->r[0]; // 801F9EE4
  c->r[6]=c->r[18]+c->r[0]; // 801F9EE8
  c->r[6]=c->r[6]+0xFFFFCEEEu; // 801F9EEC
  c->r[6]=rotl(c->r[6],22)&0xFFFFFFFFu; // 801F9EF0
  c->r[6]=c->r[6]+c->r[8]; // 801F9EF4
  c->r[16]=c->r[6]&c->r[8]; // 801F9EF8
  c->r[0]=c->r[9]&~c->r[6]; // 801F9EFC
  c->r[12]=c->r[12]+c->r[6]; // 801F9F00
  c->r[0]=c->r[16]|c->r[0]; // 801F9F04
  c->r[9]=c->r[17]+c->r[0]; // 801F9F08
  c->r[0]=c->r[9]+0x00000FAFu; // 801F9F0C
  c->r[0]=rotl(c->r[0],7)&0xFFFFFFFFu; // 801F9F10
  c->r[0]=c->r[0]+c->r[6]; // 801F9F14
  c->r[9]=c->r[0]&c->r[6]; // 801F9F18
  c->r[8]=c->r[8]&~c->r[0]; // 801F9F1C
  c->r[11]=c->r[11]+c->r[0]; // 801F9F20
  c->r[8]=c->r[9]|c->r[8]; // 801F9F24
  c->r[8]=c->r[15]+c->r[8]; // 801F9F28
  c->r[9]=c->r[8]+0xFFFFC62Au; // 801F9F2C
  c->r[9]=rotl(c->r[9],12)&0xFFFFFFFFu; // 801F9F30
  c->r[9]=c->r[9]+c->r[0]; // 801F9F34
  c->r[8]=c->r[9]&c->r[0]; // 801F9F38
  c->r[6]=c->r[6]&~c->r[9]; // 801F9F3C
  c->r[6]=c->r[8]|c->r[6]; // 801F9F40
  c->r[6]=c->r[14]+c->r[6]; // 801F9F44
  c->r[8]=c->r[6]+0x00004613u; // 801F9F48
  c->r[15]=rotl(c->r[8],17)&0xFFFFFFFFu; // 801F9F4C
  c->r[15]=c->r[15]+c->r[9]; // 801F9F50
  c->r[6]=c->r[15]&c->r[9]; // 801F9F54
  c->r[0]=c->r[0]&~c->r[15]; // 801F9F58
  c->r[0]=c->r[6]|c->r[0]; // 801F9F5C
  c->r[6]=c->r[12]+c->r[0]; // 801F9F60
  c->r[6]=c->r[6]+0xFFFF9501u; // 801F9F64
  c->r[14]=rotl(c->r[6],22)&0xFFFFFFFFu; // 801F9F68
  c->r[14]=c->r[14]+c->r[15]; // 801F9F6C
  c->r[6]=c->r[14]&c->r[15]; // 801F9F70
  c->r[0]=c->r[9]&~c->r[14]; // 801F9F74
  c->r[0]=c->r[6]|c->r[0]; // 801F9F78
  c->r[6]=c->r[11]+c->r[0]; // 801F9F7C
  c->r[0]=c->r[6]+0xFFFF98D8u; // 801F9F80
  c->r[18]=rotl(c->r[0],7)&0xFFFFFFFFu; // 801F9F84
  c->r[11]=R32(c->r[1]+0x0000002Cu); // 801F9F88
  c->r[18]=c->r[18]+c->r[14]; // 801F9F8C
  c->r[6]=R32(c->r[1]+0x00000034u); // 801F9F90
  c->r[12]=c->r[11]+0x8B450000u; // 801F9F94
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 801F9F98
  c->r[16]=c->r[18]&c->r[14]; // 801F9F9C
  c->r[0]=c->r[15]&~c->r[18]; // 801F9FA0
  c->r[9]=c->r[12]+c->r[9]; // 801F9FA4
  c->r[8]=R32(c->r[1]+0x00000030u); // 801F9FA8
  c->r[0]=c->r[16]|c->r[0]; // 801F9FAC
  c->r[26]=R32(c->r[1]+0x00000038u); // 801F9FB0
  c->r[9]=c->r[9]+c->r[0]; // 801F9FB4
  c->r[12]=c->r[8]+0xFFFF0000u; // 801F9FB8
  c->r[9]=c->r[9]+0xFFFFF7AFu; // 801F9FBC
  c->r[0]=c->r[26]+0x6B900000u; // 801F9FC0
  c->r[16]=rotl(c->r[9],12)&0xFFFFFFFFu; // 801F9FC4
  c->r[20]=c->r[12]+c->r[15]; // 801F9FC8
  c->r[16]=c->r[16]+c->r[18]; // 801F9FCC
  c->r[17]=c->r[29]+0xFD980000u; // 801F9FD0
  c->r[15]=c->r[16]&c->r[18]; // 801F9FD4
  c->r[19]=c->r[6]+0x895D0000u; // 801F9FD8
  c->r[9]=c->r[14]&~c->r[16]; // 801F9FDC
  c->r[0]=c->r[0]+c->r[18]; // 801F9FE0
  c->r[15]=c->r[15]|c->r[9]; // 801F9FE4
  c->r[14]=c->r[19]+c->r[14]; // 801F9FE8
  c->r[15]=c->r[20]+c->r[15]; // 801F9FEC
  c->r[9]=R32(c->r[1]+0x00000044u); // 801F9FF0
  c->r[15]=c->r[15]+0x00005BB1u; // 801F9FF4
  c->r[21]=c->r[17]+c->r[16]; // 801F9FF8
  c->r[15]=rotl(c->r[15],17)&0xFFFFFFFFu; // 801F9FFC
  c->r[12]=R32(c->r[1]+0x00000040u); // 801FA000
  c->r[15]=c->r[15]+c->r[16]; // 801FA004
  c->r[19]=c->r[9]+0x49B40000u; // 801FA008
  c->r[22]=c->r[15]&c->r[16]; // 801FA00C
  c->r[17]=c->r[12]+0xA6790000u; // 801FA010
  c->r[18]=c->r[18]&~c->r[15]; // 801FA014
  c->r[18]=c->r[22]|c->r[18]; // 801FA018
  c->r[20]=c->r[17]+c->r[15]; // 801FA01C
  c->r[14]=c->r[14]+c->r[18]; // 801FA020
  c->r[17]=c->r[4]+0xF61E0000u; // 801FA024
  c->r[14]=c->r[14]+0xFFFFD7BEu; // 801FA028
  c->r[14]=rotl(c->r[14],22)&0xFFFFFFFFu; // 801FA02C
  c->r[14]=c->r[14]+c->r[15]; // 801FA030
  c->r[18]=c->r[14]&c->r[15]; // 801FA034
  c->r[16]=c->r[16]&~c->r[14]; // 801FA038
  c->r[19]=c->r[19]+c->r[14]; // 801FA03C
  c->r[16]=c->r[18]|c->r[16]; // 801FA040
  c->r[16]=c->r[0]+c->r[16]; // 801FA044
  c->r[18]=c->r[16]+0x00001122u; // 801FA048
  c->r[0]=rotl(c->r[18],7)&0xFFFFFFFFu; // 801FA04C
  c->r[0]=c->r[0]+c->r[14]; // 801FA050
  c->r[16]=c->r[0]&c->r[14]; // 801FA054
  c->r[15]=c->r[15]&~c->r[0]; // 801FA058
  c->r[18]=c->r[17]+c->r[0]; // 801FA05C
  c->r[15]=c->r[16]|c->r[15]; // 801FA060
  c->r[15]=c->r[21]+c->r[15]; // 801FA064
  c->r[16]=c->r[15]+0x00007193u; // 801FA068
  c->r[17]=rotl(c->r[16],12)&0xFFFFFFFFu; // 801FA06C
  c->r[17]=c->r[17]+c->r[0]; // 801FA070
  c->r[21]=~(c->r[17]|c->r[17]); // 801FA074
  c->r[15]=c->r[17]&c->r[0]; // 801FA078
  c->r[14]=c->r[21]&c->r[14]; // 801FA07C
  c->r[14]=c->r[15]|c->r[14]; // 801FA080
  c->r[14]=c->r[20]+c->r[14]; // 801FA084
  c->r[15]=c->r[14]+0x0000438Eu; // 801FA088
  c->r[16]=rotl(c->r[15],17)&0xFFFFFFFFu; // 801FA08C
  c->r[16]=c->r[16]+c->r[17]; // 801FA090
  c->r[15]=~(c->r[16]|c->r[16]); // 801FA094
  c->r[14]=c->r[16]&c->r[17]; // 801FA098
  c->r[20]=c->r[16]&c->r[21]; // 801FA09C
  c->r[0]=c->r[15]&c->r[0]; // 801FA0A0
  c->r[0]=c->r[14]|c->r[0]; // 801FA0A4
  c->r[14]=c->r[19]+c->r[0]; // 801FA0A8
  c->r[14]=c->r[14]+0x00000821u; // 801FA0AC
  c->r[22]=rotl(c->r[14],22)&0xFFFFFFFFu; // 801FA0B0
  c->r[22]=c->r[22]+c->r[16]; // 801FA0B4
  c->r[0]=c->r[22]&c->r[17]; // 801FA0B8
  c->r[0]=c->r[0]|c->r[20]; // 801FA0BC
  c->r[14]=c->r[18]+c->r[0]; // 801FA0C0
  c->r[0]=c->r[14]+0x00002562u; // 801FA0C4
  c->r[20]=rotl(c->r[0],5)&0xFFFFFFFFu; // 801FA0C8
  c->r[20]=c->r[20]+c->r[22]; // 801FA0CC
  c->r[18]=c->r[5]+0xC0410000u; // 801FA0D0
  c->r[0]=c->r[22]&c->r[15]; // 801FA0D4
  c->r[19]=c->r[20]&c->r[16]; // 801FA0D8
  c->r[14]=c->r[6]+0x265E0000u; // 801FA0DC
  c->r[15]=c->r[18]+c->r[17]; // 801FA0E0
  c->r[18]=c->r[25]+0xE9B70000u; // 801FA0E4
  c->r[0]=c->r[19]|c->r[0]; // 801FA0E8
  c->r[19]=c->r[7]+0xD62F0000u; // 801FA0EC
  c->r[15]=c->r[15]+c->r[0]; // 801FA0F0
  c->r[18]=c->r[18]+c->r[22]; // 801FA0F4
  c->r[17]=c->r[15]+0xFFFFB340u; // 801FA0F8
  c->r[0]=c->r[20]&~c->r[22]; // 801FA0FC
  c->r[15]=c->r[14]+c->r[16]; // 801FA100
  c->r[16]=c->r[8]+0x02440000u; // 801FA104
  c->r[14]=rotl(c->r[17],9)&0xFFFFFFFFu; // 801FA108
  c->r[21]=c->r[19]+c->r[20]; // 801FA10C
  c->r[14]=c->r[14]+c->r[20]; // 801FA110
  c->r[23]=c->r[12]+0xC3370000u; // 801FA114
  c->r[17]=c->r[14]&c->r[22]; // 801FA118
  c->r[0]=c->r[17]|c->r[0]; // 801FA11C
  c->r[19]=c->r[16]+c->r[14]; // 801FA120
  c->r[15]=c->r[15]+c->r[0]; // 801FA124
  c->r[22]=c->r[14]&~c->r[20]; // 801FA128
  c->r[16]=c->r[15]+0x00005A51u; // 801FA12C
  c->r[17]=c->r[10]+0xE7D40000u; // 801FA130
  c->r[0]=rotl(c->r[16],14)&0xFFFFFFFFu; // 801FA134
  c->r[15]=c->r[9]+0xD8A20000u; // 801FA138
  c->r[0]=c->r[0]+c->r[14]; // 801FA13C
  c->r[16]=c->r[11]+0x21E20000u; // 801FA140
  c->r[20]=c->r[0]&c->r[20]; // 801FA144
  c->r[22]=c->r[20]|c->r[22]; // 801FA148
  c->r[22]=c->r[18]+c->r[22]; // 801FA14C
  c->r[18]=c->r[15]+c->r[0]; // 801FA150
  c->r[22]=c->r[22]+0xFFFFC7AAu; // 801FA154
  c->r[20]=c->r[0]&~c->r[14]; // 801FA158
  c->r[22]=rotl(c->r[22],20)&0xFFFFFFFFu; // 801FA15C
  c->r[15]=c->r[31]+0xF4D50000u; // 801FA160
  c->r[22]=c->r[22]+c->r[0]; // 801FA164
  c->r[14]=c->r[22]&c->r[14]; // 801FA168
  c->r[20]=c->r[14]|c->r[20]; // 801FA16C
  c->r[17]=c->r[17]+c->r[22]; // 801FA170
  c->r[20]=c->r[21]+c->r[20]; // 801FA174
  c->r[14]=c->r[22]&~c->r[0]; // 801FA178
  c->r[20]=c->r[20]+0x0000105Du; // 801FA17C
  c->r[20]=rotl(c->r[20],5)&0xFFFFFFFFu; // 801FA180
  c->r[20]=c->r[20]+c->r[22]; // 801FA184
  c->r[0]=c->r[20]&c->r[0]; // 801FA188
  c->r[14]=c->r[0]|c->r[14]; // 801FA18C
  c->r[16]=c->r[16]+c->r[20]; // 801FA190
  c->r[14]=c->r[19]+c->r[14]; // 801FA194
  c->r[0]=c->r[20]&~c->r[22]; // 801FA198
  c->r[14]=c->r[14]+0x00001453u; // 801FA19C
  c->r[14]=rotl(c->r[14],9)&0xFFFFFFFFu; // 801FA1A0
  c->r[14]=c->r[14]+c->r[20]; // 801FA1A4
  c->r[19]=c->r[14]&c->r[22]; // 801FA1A8
  c->r[0]=c->r[19]|c->r[0]; // 801FA1AC
  c->r[21]=c->r[14]&~c->r[20]; // 801FA1B0
  c->r[19]=c->r[18]+c->r[0]; // 801FA1B4
  c->r[18]=c->r[23]+c->r[14]; // 801FA1B8
  c->r[0]=c->r[19]+0xFFFFE681u; // 801FA1BC
  c->r[19]=rotl(c->r[0],14)&0xFFFFFFFFu; // 801FA1C0
  c->r[19]=c->r[19]+c->r[14]; // 801FA1C4
  c->r[0]=c->r[19]&c->r[20]; // 801FA1C8
  c->r[20]=c->r[0]|c->r[21]; // 801FA1CC
  c->r[20]=c->r[17]+c->r[20]; // 801FA1D0
  c->r[17]=c->r[15]+c->r[19]; // 801FA1D4
  c->r[22]=c->r[20]+0xFFFFFBC8u; // 801FA1D8
  c->r[0]=c->r[19]&~c->r[14]; // 801FA1DC
  c->r[15]=rotl(c->r[22],20)&0xFFFFFFFFu; // 801FA1E0
  c->r[15]=c->r[15]+c->r[19]; // 801FA1E4
  c->r[14]=c->r[15]&c->r[14]; // 801FA1E8
  c->r[0]=c->r[14]|c->r[0]; // 801FA1EC
  c->r[16]=c->r[16]+c->r[0]; // 801FA1F0
  c->r[14]=c->r[15]&~c->r[19]; // 801FA1F4
  c->r[20]=c->r[16]+0xFFFFCDE6u; // 801FA1F8
  c->r[0]=rotl(c->r[20],5)&0xFFFFFFFFu; // 801FA1FC
  c->r[0]=c->r[0]+c->r[15]; // 801FA200
  c->r[16]=c->r[0]&c->r[19]; // 801FA204
  c->r[14]=c->r[16]|c->r[14]; // 801FA208
  c->r[14]=c->r[18]+c->r[14]; // 801FA20C
  c->r[16]=c->r[0]&~c->r[15]; // 801FA210
  c->r[14]=c->r[14]+0x000007D6u; // 801FA214
  c->r[22]=rotl(c->r[14],9)&0xFFFFFFFFu; // 801FA218
  c->r[22]=c->r[22]+c->r[0]; // 801FA21C
  c->r[14]=c->r[22]&c->r[15]; // 801FA220
  c->r[14]=c->r[14]|c->r[16]; // 801FA224
  c->r[14]=c->r[17]+c->r[14]; // 801FA228
  c->r[19]=c->r[14]+0x00000D87u; // 801FA22C
  c->r[17]=rotl(c->r[19],14)&0xFFFFFFFFu; // 801FA230
  c->r[18]=c->r[30]+0x455A0000u; // 801FA234
  c->r[17]=c->r[17]+c->r[22]; // 801FA238
  c->r[14]=c->r[22]&~c->r[0]; // 801FA23C
  c->r[16]=c->r[17]&c->r[0]; // 801FA240
  c->r[15]=c->r[18]+c->r[15]; // 801FA244
  c->r[14]=c->r[16]|c->r[14]; // 801FA248
  c->r[19]=c->r[29]+0xA9E40000u; // 801FA24C
  c->r[15]=c->r[15]+c->r[14]; // 801FA250
  c->r[18]=c->r[28]+0xFCF00000u; // 801FA254
  c->r[15]=c->r[15]+0x000014EDu; // 801FA258
  c->r[0]=c->r[19]+c->r[0]; // 801FA25C
  c->r[21]=rotl(c->r[15],20)&0xFFFFFFFFu; // 801FA260
  c->r[14]=c->r[17]&~c->r[22]; // 801FA264
  c->r[21]=c->r[21]+c->r[17]; // 801FA268
  c->r[16]=c->r[27]+0x676F0000u; // 801FA26C
  c->r[20]=c->r[21]&c->r[22]; // 801FA270
  c->r[19]=c->r[18]+c->r[22]; // 801FA274
  c->r[14]=c->r[20]|c->r[14]; // 801FA278
  c->r[18]=c->r[16]+c->r[17]; // 801FA27C
  c->r[14]=c->r[0]+c->r[14]; // 801FA280
  c->r[15]=c->r[26]+0x8D2A0000u; // 801FA284
  c->r[0]=c->r[14]+0xFFFFE905u; // 801FA288
  c->r[22]=c->r[21]&~c->r[17]; // 801FA28C
  c->r[20]=rotl(c->r[0],5)&0xFFFFFFFFu; // 801FA290
  c->r[16]=c->r[15]+c->r[21]; // 801FA294
  c->r[20]=c->r[20]+c->r[21]; // 801FA298
  c->r[15]=c->r[7]+0xFFFA0000u; // 801FA29C
  c->r[17]=c->r[20]&c->r[17]; // 801FA2A0
  c->r[14]=c->r[30]+0x87720000u; // 801FA2A4
  c->r[22]=c->r[17]|c->r[22]; // 801FA2A8
  c->r[0]=c->r[6]+0x6D9D0000u; // 801FA2AC
  c->r[19]=c->r[19]+c->r[22]; // 801FA2B0
  c->r[17]=c->r[20]&~c->r[21]; // 801FA2B4
  c->r[22]=c->r[19]+0xFFFFA3F8u; // 801FA2B8
  c->r[23]=c->r[12]+0xFDE50000u; // 801FA2BC
  c->r[19]=rotl(c->r[22],9)&0xFFFFFFFFu; // 801FA2C0
  c->r[24]=c->r[4]+0xA4BF0000u; // 801FA2C4
  c->r[19]=c->r[19]+c->r[20]; // 801FA2C8
  c->r[21]=c->r[19]&c->r[21]; // 801FA2CC
  c->r[17]=c->r[21]|c->r[17]; // 801FA2D0
  c->r[17]=c->r[18]+c->r[17]; // 801FA2D4
  c->r[21]=c->r[19]&~c->r[20]; // 801FA2D8
  c->r[17]=c->r[17]+0x000002D9u; // 801FA2DC
  c->r[17]=rotl(c->r[17],14)&0xFFFFFFFFu; // 801FA2E0
  c->r[17]=c->r[17]+c->r[19]; // 801FA2E4
  c->r[18]=c->r[17]&c->r[20]; // 801FA2E8
  c->r[18]=c->r[18]|c->r[21]; // 801FA2EC
  c->r[16]=c->r[16]+c->r[18]; // 801FA2F0
  c->r[21]=c->r[16]+0x00004C8Au; // 801FA2F4
  c->r[16]=rotl(c->r[21],20)&0xFFFFFFFFu; // 801FA2F8
  c->r[16]=c->r[16]+c->r[17]; // 801FA2FC
  c->r[18]=c->r[19]^c->r[16]; // 801FA300
  c->r[18]=c->r[18]^c->r[17]; // 801FA304
  c->r[18]=c->r[20]+c->r[18]; // 801FA308
  c->r[20]=c->r[18]+c->r[15]; // 801FA30C
  c->r[20]=c->r[20]+0x00003942u; // 801FA310
  c->r[15]=rotl(c->r[20],4)&0xFFFFFFFFu; // 801FA314
  c->r[15]=c->r[15]+c->r[16]; // 801FA318
  c->r[18]=c->r[17]^c->r[15]; // 801FA31C
  c->r[18]=c->r[18]^c->r[16]; // 801FA320
  c->r[18]=c->r[19]+c->r[18]; // 801FA324
  c->r[19]=c->r[18]+c->r[14]; // 801FA328
  c->r[19]=c->r[19]+0xFFFFF681u; // 801FA32C
  c->r[14]=rotl(c->r[19],11)&0xFFFFFFFFu; // 801FA330
  c->r[14]=c->r[14]+c->r[15]; // 801FA334
  c->r[18]=c->r[16]^c->r[14]; // 801FA338
  c->r[18]=c->r[18]^c->r[15]; // 801FA33C
  c->r[17]=c->r[17]+c->r[18]; // 801FA340
  c->r[17]=c->r[17]+c->r[0]; // 801FA344
  c->r[17]=c->r[17]+0x00006122u; // 801FA348
  c->r[22]=rotl(c->r[17],16)&0xFFFFFFFFu; // 801FA34C
  c->r[22]=c->r[22]+c->r[14]; // 801FA350
  c->r[0]=c->r[15]^c->r[22]; // 801FA354
  c->r[0]=c->r[0]^c->r[14]; // 801FA358
  c->r[0]=c->r[16]+c->r[0]; // 801FA35C
  c->r[16]=c->r[0]+c->r[23]; // 801FA360
  c->r[16]=c->r[16]+0x0000380Cu; // 801FA364
  c->r[23]=rotl(c->r[16],23)&0xFFFFFFFFu; // 801FA368
  c->r[23]=c->r[23]+c->r[22]; // 801FA36C
  c->r[0]=c->r[14]^c->r[23]; // 801FA370
  c->r[0]=c->r[0]^c->r[22]; // 801FA374
  c->r[0]=c->r[15]+c->r[0]; // 801FA378
  c->r[15]=c->r[0]+c->r[24]; // 801FA37C
  c->r[15]=c->r[15]+0xFFFFEA44u; // 801FA380
  c->r[24]=rotl(c->r[15],4)&0xFFFFFFFFu; // 801FA384
  c->r[15]=c->r[10]+0x4BDF0000u; // 801FA388
  c->r[24]=c->r[24]+c->r[23]; // 801FA38C
  c->r[16]=c->r[27]+0xF6BB0000u; // 801FA390
  c->r[0]=c->r[22]^c->r[24]; // 801FA394
  c->r[17]=c->r[8]+0xBEC00000u; // 801FA398
  c->r[0]=c->r[0]^c->r[23]; // 801FA39C
  c->r[18]=c->r[29]+0x289B0000u; // 801FA3A0
  c->r[0]=c->r[14]+c->r[0]; // 801FA3A4
  c->r[19]=c->r[25]+0xEAA10000u; // 801FA3A8
  c->r[14]=c->r[0]+c->r[15]; // 801FA3AC
  c->r[20]=c->r[11]+0xD9D50000u; // 801FA3B0
  c->r[14]=c->r[14]+0xFFFFCFA9u; // 801FA3B4
  c->r[0]=c->r[31]+0xD4EF0000u; // 801FA3B8
  c->r[21]=rotl(c->r[14],11)&0xFFFFFFFFu; // 801FA3BC
  W32(c->r[1]+0x00000048u,c->r[0]); // 801FA3C0
  c->r[21]=c->r[21]+c->r[24]; // 801FA3C4
  c->r[0]=c->r[5]+0x04880000u; // 801FA3C8
  c->r[15]=c->r[23]^c->r[21]; // 801FA3CC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801FA3D0
  c->r[15]=c->r[15]^c->r[24]; // 801FA3D4
  c->r[0]=c->r[26]+0xE6DC0000u; // 801FA3D8
  c->r[15]=c->r[22]+c->r[15]; // 801FA3DC
  c->r[14]=c->r[9]+0x1FA20000u; // 801FA3E0
  c->r[22]=c->r[15]+c->r[16]; // 801FA3E4
  c->r[22]=c->r[22]+0x00004B60u; // 801FA3E8
  c->r[15]=rotl(c->r[22],16)&0xFFFFFFFFu; // 801FA3EC
  c->r[15]=c->r[15]+c->r[21]; // 801FA3F0
  c->r[16]=c->r[24]^c->r[15]; // 801FA3F4
  c->r[16]=c->r[16]^c->r[21]; // 801FA3F8
  c->r[16]=c->r[23]+c->r[16]; // 801FA3FC
  c->r[23]=c->r[16]+c->r[17]; // 801FA400
  c->r[23]=c->r[23]+0xFFFFBC70u; // 801FA404
  c->r[17]=rotl(c->r[23],23)&0xFFFFFFFFu; // 801FA408
  c->r[17]=c->r[17]+c->r[15]; // 801FA40C
  c->r[16]=c->r[21]^c->r[17]; // 801FA410
  c->r[16]=c->r[16]^c->r[15]; // 801FA414
  c->r[16]=c->r[24]+c->r[16]; // 801FA418
  c->r[24]=c->r[16]+c->r[18]; // 801FA41C
  c->r[24]=c->r[24]+0x00007EC6u; // 801FA420
  c->r[16]=rotl(c->r[24],4)&0xFFFFFFFFu; // 801FA424
  c->r[16]=c->r[16]+c->r[17]; // 801FA428
  c->r[18]=c->r[15]^c->r[16]; // 801FA42C
  c->r[18]=c->r[18]^c->r[17]; // 801FA430
  c->r[18]=c->r[21]+c->r[18]; // 801FA434
  c->r[21]=c->r[18]+c->r[19]; // 801FA438
  c->r[21]=c->r[21]+0x000027FAu; // 801FA43C
  c->r[19]=rotl(c->r[21],11)&0xFFFFFFFFu; // 801FA440
  c->r[19]=c->r[19]+c->r[16]; // 801FA444
  c->r[18]=c->r[17]^c->r[19]; // 801FA448
  c->r[18]=c->r[18]^c->r[16]; // 801FA44C
  c->r[18]=c->r[15]+c->r[18]; // 801FA450
  c->r[15]=R32(c->r[1]+0x00000048u); // 801FA454
  c->r[15]=c->r[18]+c->r[15]; // 801FA458
  c->r[15]=c->r[15]+0x00003085u; // 801FA45C
  c->r[18]=rotl(c->r[15],16)&0xFFFFFFFFu; // 801FA460
  c->r[18]=c->r[18]+c->r[19]; // 801FA464
  c->r[15]=c->r[16]^c->r[18]; // 801FA468
  c->r[15]=c->r[15]^c->r[19]; // 801FA46C
  c->r[17]=c->r[17]+c->r[15]; // 801FA470
  c->r[15]=R32(c->r[1]+0x0000004Cu); // 801FA474
  c->r[17]=c->r[17]+c->r[15]; // 801FA478
  c->r[17]=c->r[17]+0x00001D05u; // 801FA47C
  c->r[17]=rotl(c->r[17],23)&0xFFFFFFFFu; // 801FA480
  c->r[17]=c->r[17]+c->r[18]; // 801FA484
  c->r[15]=c->r[19]^c->r[17]; // 801FA488
  c->r[15]=c->r[15]^c->r[18]; // 801FA48C
  c->r[15]=c->r[16]+c->r[15]; // 801FA490
  c->r[16]=c->r[15]+c->r[20]; // 801FA494
  c->r[16]=c->r[16]+0xFFFFD039u; // 801FA498
  c->r[15]=rotl(c->r[16],4)&0xFFFFFFFFu; // 801FA49C
  c->r[15]=c->r[15]+c->r[17]; // 801FA4A0
  c->r[16]=c->r[18]^c->r[15]; // 801FA4A4
  c->r[16]=c->r[16]^c->r[17]; // 801FA4A8
  c->r[16]=c->r[19]+c->r[16]; // 801FA4AC
  c->r[19]=c->r[16]+c->r[0]; // 801FA4B0
  c->r[19]=c->r[19]+0xFFFF99E5u; // 801FA4B4
  c->r[0]=rotl(c->r[19],11)&0xFFFFFFFFu; // 801FA4B8
  c->r[0]=c->r[0]+c->r[15]; // 801FA4BC
  c->r[16]=c->r[17]^c->r[0]; // 801FA4C0
  c->r[16]=c->r[16]^c->r[15]; // 801FA4C4
  c->r[16]=c->r[18]+c->r[16]; // 801FA4C8
  c->r[18]=c->r[16]+c->r[14]; // 801FA4CC
  c->r[18]=c->r[18]+0x00007CF8u; // 801FA4D0
  c->r[18]=rotl(c->r[18],16)&0xFFFFFFFFu; // 801FA4D4
  c->r[18]=c->r[18]+c->r[0]; // 801FA4D8
  c->r[14]=c->r[27]+0x432B0000u; // 801FA4DC
  c->r[19]=c->r[15]^c->r[18]; // 801FA4E0
  c->r[16]=c->r[25]+0xF4290000u; // 801FA4E4
  c->r[20]=c->r[19]^c->r[0]; // 801FA4E8
  c->r[12]=c->r[12]+0xAB940000u; // 801FA4EC
  c->r[15]=c->r[16]+c->r[15]; // 801FA4F0
  c->r[19]=c->r[28]+0xC4AC0000u; // 801FA4F4
  c->r[16]=c->r[17]+c->r[20]; // 801FA4F8
  c->r[14]=c->r[14]+c->r[0]; // 801FA4FC
  c->r[17]=c->r[16]+c->r[19]; // 801FA500
  c->r[20]=c->r[8]+0xFFF00000u; // 801FA504
  c->r[17]=c->r[17]+0x00005665u; // 801FA508
  c->r[19]=c->r[4]+0x85840000u; // 801FA50C
  c->r[16]=rotl(c->r[17],23)&0xFFFFFFFFu; // 801FA510
  c->r[12]=c->r[12]+c->r[18]; // 801FA514
  c->r[16]=c->r[16]+c->r[18]; // 801FA518
  c->r[7]=c->r[7]+0xFC940000u; // 801FA51C
  c->r[0]=c->r[16]|~c->r[0]; // 801FA520
  c->r[22]=c->r[26]+0x655B0000u; // 801FA524
  c->r[0]=c->r[18]^c->r[0]; // 801FA528
  c->r[7]=c->r[7]+c->r[16]; // 801FA52C
  c->r[8]=c->r[15]+c->r[0]; // 801FA530
  c->r[21]=c->r[31]+0x8F0D0000u; // 801FA534
  c->r[15]=c->r[8]+0x00002244u; // 801FA538
  c->r[17]=c->r[30]+0x6FA80000u; // 801FA53C
  c->r[4]=rotl(c->r[15],6)&0xFFFFFFFFu; // 801FA540
  c->r[4]=c->r[4]+c->r[16]; // 801FA544
  c->r[0]=c->r[4]|~c->r[18]; // 801FA548
  c->r[0]=c->r[16]^c->r[0]; // 801FA54C
  c->r[22]=c->r[22]+c->r[4]; // 801FA550
  c->r[8]=c->r[14]+c->r[0]; // 801FA554
  c->r[0]=c->r[8]+0xFFFFFF97u; // 801FA558
  c->r[8]=rotl(c->r[0],10)&0xFFFFFFFFu; // 801FA55C
  c->r[8]=c->r[8]+c->r[4]; // 801FA560
  c->r[0]=c->r[8]|~c->r[16]; // 801FA564
  c->r[0]=c->r[4]^c->r[0]; // 801FA568
  c->r[15]=c->r[21]+c->r[8]; // 801FA56C
  c->r[12]=c->r[12]+c->r[0]; // 801FA570
  c->r[18]=c->r[12]+0x000023A7u; // 801FA574
  c->r[0]=rotl(c->r[18],15)&0xFFFFFFFFu; // 801FA578
  c->r[0]=c->r[0]+c->r[8]; // 801FA57C
  c->r[4]=c->r[0]|~c->r[4]; // 801FA580
  c->r[4]=c->r[8]^c->r[4]; // 801FA584
  c->r[14]=c->r[20]+c->r[0]; // 801FA588
  c->r[4]=c->r[7]+c->r[4]; // 801FA58C
  c->r[16]=c->r[4]+0xFFFFA039u; // 801FA590
  c->r[18]=rotl(c->r[16],21)&0xFFFFFFFFu; // 801FA594
  c->r[18]=c->r[18]+c->r[0]; // 801FA598
  c->r[4]=c->r[18]|~c->r[8]; // 801FA59C
  c->r[4]=c->r[0]^c->r[4]; // 801FA5A0
  c->r[7]=c->r[19]+c->r[18]; // 801FA5A4
  c->r[4]=c->r[22]+c->r[4]; // 801FA5A8
  c->r[4]=c->r[4]+0x000059C3u; // 801FA5AC
  c->r[16]=rotl(c->r[4],6)&0xFFFFFFFFu; // 801FA5B0
  c->r[16]=c->r[16]+c->r[18]; // 801FA5B4
  c->r[0]=c->r[16]|~c->r[0]; // 801FA5B8
  c->r[0]=c->r[18]^c->r[0]; // 801FA5BC
  c->r[12]=c->r[17]+c->r[16]; // 801FA5C0
  c->r[4]=c->r[15]+c->r[0]; // 801FA5C4
  c->r[8]=c->r[4]+0xFFFFCC92u; // 801FA5C8
  c->r[8]=rotl(c->r[8],10)&0xFFFFFFFFu; // 801FA5CC
  c->r[8]=c->r[8]+c->r[16]; // 801FA5D0
  c->r[0]=c->r[8]|~c->r[18]; // 801FA5D4
  c->r[0]=c->r[16]^c->r[0]; // 801FA5D8
  c->r[4]=c->r[14]+c->r[0]; // 801FA5DC
  c->r[0]=c->r[4]+0xFFFFF47Du; // 801FA5E0
  c->r[4]=rotl(c->r[0],15)&0xFFFFFFFFu; // 801FA5E4
  c->r[4]=c->r[4]+c->r[8]; // 801FA5E8
  c->r[0]=c->r[4]|~c->r[16]; // 801FA5EC
  c->r[0]=c->r[8]^c->r[0]; // 801FA5F0
  c->r[7]=c->r[7]+c->r[0]; // 801FA5F4
  c->r[18]=c->r[7]+0x00005DD1u; // 801FA5F8
  c->r[7]=rotl(c->r[18],21)&0xFFFFFFFFu; // 801FA5FC
  c->r[7]=c->r[7]+c->r[4]; // 801FA600
  c->r[0]=c->r[7]|~c->r[8]; // 801FA604
  c->r[0]=c->r[4]^c->r[0]; // 801FA608
  c->r[12]=c->r[12]+c->r[0]; // 801FA60C
  c->r[16]=c->r[12]+0x00007E4Fu; // 801FA610
  c->r[0]=rotl(c->r[16],6)&0xFFFFFFFFu; // 801FA614
  c->r[0]=c->r[0]+c->r[7]; // 801FA618
  c->r[12]=c->r[9]+0xFE2D0000u; // 801FA61C
  c->r[9]=c->r[0]|~c->r[4]; // 801FA620
  c->r[8]=c->r[12]+c->r[8]; // 801FA624
  c->r[12]=c->r[5]+0xA3010000u; // 801FA628
  c->r[5]=c->r[7]^c->r[9]; // 801FA62C
  c->r[8]=c->r[8]+c->r[5]; // 801FA630
  c->r[9]=c->r[29]+0x4E080000u; // 801FA634
  c->r[8]=c->r[8]+0xFFFFE6E0u; // 801FA638
  c->r[5]=c->r[10]+0xF7530000u; // 801FA63C
  c->r[8]=rotl(c->r[8],10)&0xFFFFFFFFu; // 801FA640
  c->r[10]=c->r[12]+c->r[4]; // 801FA644
  c->r[8]=c->r[8]+c->r[0]; // 801FA648
  c->r[4]=c->r[6]+0xBD3B0000u; // 801FA64C
  c->r[6]=c->r[8]|~c->r[7]; // 801FA650
  c->r[16]=c->r[5]+c->r[0]; // 801FA654
  c->r[5]=c->r[0]^c->r[6]; // 801FA658
  c->r[15]=c->r[4]+c->r[8]; // 801FA65C
  c->r[4]=c->r[10]+c->r[5]; // 801FA660
  c->r[17]=c->r[9]+c->r[7]; // 801FA664
  c->r[4]=c->r[4]+0x00004314u; // 801FA668
  c->r[12]=c->r[11]+0xEB870000u; // 801FA66C
  c->r[18]=rotl(c->r[4],15)&0xFFFFFFFFu; // 801FA670
  c->r[11]=R32(c->r[3]+0x00000000u); // 801FA674
  c->r[18]=c->r[18]+c->r[8]; // 801FA678
  c->r[5]=c->r[28]+0x2AD80000u; // 801FA67C
  c->r[0]=c->r[18]|~c->r[0]; // 801FA680
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801FA684
  c->r[0]=c->r[8]^c->r[0]; // 801FA688
  c->r[14]=c->r[5]+c->r[18]; // 801FA68C
  c->r[4]=c->r[17]+c->r[0]; // 801FA690
  c->r[9]=R32(c->r[3]+0x00000008u); // 801FA694
  c->r[7]=c->r[4]+0x000011A1u; // 801FA698
  c->r[10]=R32(c->r[3]+0x00000004u); // 801FA69C
  c->r[17]=rotl(c->r[7],21)&0xFFFFFFFFu; // 801FA6A0
  c->r[4]=0u+0x00000000u; // 801FA6A4
  c->r[17]=c->r[17]+c->r[18]; // 801FA6A8
  c->r[5]=0u+0x00000040u; // 801FA6AC
  c->r[0]=c->r[17]|~c->r[8]; // 801FA6B0
  c->r[0]=c->r[18]^c->r[0]; // 801FA6B4
  c->r[7]=c->r[12]+c->r[17]; // 801FA6B8
  c->r[8]=c->r[16]+c->r[0]; // 801FA6BC
  c->r[0]=c->r[8]+0x00007E82u; // 801FA6C0
  c->r[12]=rotl(c->r[0],6)&0xFFFFFFFFu; // 801FA6C4
  c->r[12]=c->r[12]+c->r[17]; // 801FA6C8
  c->r[0]=c->r[12]|~c->r[18]; // 801FA6CC
  c->r[8]=c->r[17]^c->r[0]; // 801FA6D0
  c->r[8]=c->r[15]+c->r[8]; // 801FA6D4
  c->r[0]=c->r[11]+c->r[12]; // 801FA6D8
  c->r[8]=c->r[8]+0xFFFFF235u; // 801FA6DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FA6E0
  c->r[11]=rotl(c->r[8],10)&0xFFFFFFFFu; // 801FA6E4
  c->r[11]=c->r[11]+c->r[12]; // 801FA6E8
  c->r[0]=c->r[11]|~c->r[17]; // 801FA6EC
  c->r[8]=c->r[12]^c->r[0]; // 801FA6F0
  c->r[0]=c->r[6]+c->r[11]; // 801FA6F4
  c->r[6]=c->r[14]+c->r[8]; // 801FA6F8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801FA6FC
  c->r[18]=c->r[6]+0xFFFFD2BBu; // 801FA700
  c->r[8]=rotl(c->r[18],15)&0xFFFFFFFFu; // 801FA704
  c->r[8]=c->r[8]+c->r[11]; // 801FA708
  c->r[0]=c->r[8]|~c->r[12]; // 801FA70C
  c->r[6]=c->r[11]^c->r[0]; // 801FA710
  c->r[6]=c->r[7]+c->r[6]; // 801FA714
  c->r[0]=c->r[9]+c->r[8]; // 801FA718
  c->r[17]=c->r[6]+0xFFFFD391u; // 801FA71C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801FA720
  c->r[0]=rotl(c->r[17],21)&0xFFFFFFFFu; // 801FA724
  c->r[0]=c->r[0]+c->r[8]; // 801FA728
  c->r[0]=c->r[10]+c->r[0]; // 801FA72C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FA730
  c->r[3]=c->r[1]+0x00000008u; // 801FA734
  c->lr=0x801FA73Cu; f_801FA7D4(c); // 801FA738
  c->r[11]=c->r[1]+0x000000A0u; // 801FA73C
  c->lr=0x801FA744u; f_80185EEC(c); // 801FA740
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801FA744
  c->lr=c->r[0]; // 801FA748
  c->r[1]=c->r[1]+0x000000A0u; // 801FA74C
  return; // 801FA750
}

// fn_801FA754
void f_801FA754(Ctx* __restrict c) {
  c->r[0]=c->r[5]+0x00000003u; // 801FA754
  c->r[6]=0u+0x00000000u; // 801FA758
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FA75C
  c->r[7]=0u+0x00000000u; // 801FA760
  c->ctr=c->r[0]; // 801FA764
  cmpu(c,0,c->r[5],0x00000000u); // 801FA768
  if (!crb(c,1)) return; // 801FA76C
L_801FA770:;
  c->r[0]=R32(c->r[4]+c->r[6]); // 801FA770
  c->r[5]=c->r[3]+c->r[7]; // 801FA774
  W8(c->r[3]+c->r[7],c->r[0]); // 801FA778
  c->r[7]=c->r[7]+0x00000004u; // 801FA77C
  c->r[0]=R32(c->r[4]+c->r[6]); // 801FA780
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801FA784
  W8(c->r[5]+0x00000001u,c->r[0]); // 801FA788
  c->r[0]=R32(c->r[4]+c->r[6]); // 801FA78C
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801FA790
  W8(c->r[5]+0x00000002u,c->r[0]); // 801FA794
  c->r[0]=R32(c->r[4]+c->r[6]); // 801FA798
  c->r[6]=c->r[6]+0x00000004u; // 801FA79C
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801FA7A0
  W8(c->r[5]+0x00000003u,c->r[0]); // 801FA7A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FA770; } // 801FA7A8
  return; // 801FA7AC
}

// fn_801FA7B0
void f_801FA7B0(Ctx* __restrict c) {
  c->ctr=c->r[5]; // 801FA7B0
  cmpu(c,0,c->r[5],0x00000000u); // 801FA7B4
  if (!crb(c,1)) return; // 801FA7B8
L_801FA7BC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FA7BC
  c->r[4]=c->r[4]+0x00000001u; // 801FA7C0
  W8(c->r[3]+0x00000000u,c->r[0]); // 801FA7C4
  c->r[3]=c->r[3]+0x00000001u; // 801FA7C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FA7BC; } // 801FA7CC
  return; // 801FA7D0
}

// fn_801FA7D4
void f_801FA7D4(Ctx* __restrict c) {
  c->ctr=c->r[5]; // 801FA7D4
  cmpu(c,0,c->r[5],0x00000000u); // 801FA7D8
  if (!crb(c,1)) return; // 801FA7DC
L_801FA7E0:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 801FA7E0
  c->r[3]=c->r[3]+0x00000001u; // 801FA7E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FA7E0; } // 801FA7E8
  return; // 801FA7EC
}

// fn_801FA7F0
void f_801FA7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA7F0
  c->r[0]=c->lr; // 801FA7F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA7F8
  c->r[11]=c->r[1]+0x00000020u; // 801FA7FC
  c->lr=0x801FA804u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FA800
  c->r[29]=c->r[3]|c->r[3]; // 801FA804
  c->r[30]=c->r[4]|c->r[4]; // 801FA808
  c->r[31]=c->r[6]|c->r[6]; // 801FA80C
  c->lr=0x801FA814u; f_80161E10(c); // 801FA810
  cmps(c,0,(int32_t)c->r[31],0); // 801FA814
  W32(c->r[29]+0x00000018u,c->r[30]); // 801FA818
  if (crb(c,2)) { goto L_801FA828; } // 801FA81C
  c->lr=0x801FA824u; f_80163990(c); // 801FA820
  goto L_801FA82C; // 801FA824
L_801FA828:;
  c->r[3]=0u+0x00000000u; // 801FA828
L_801FA82C:;
  c->r[0]=addc(c,c->r[31],0xFFFFFFFFu,0); // 801FA82C
  cmps(c,0,(int32_t)c->r[31],0); // 801FA830
  c->r[0]=addc(c,~c->r[0],c->r[31],c->xer_ca); // 801FA834
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801FA838
  W32(c->r[29]+0x00000020u,c->r[0]); // 801FA83C
  if (crb(c,2)) { goto L_801FA84C; } // 801FA840
  c->r[3]=c->r[29]|c->r[29]; // 801FA844
  c->lr=0x801FA84Cu; f_80161E48(c); // 801FA848
L_801FA84C:;
  c->r[11]=c->r[1]+0x00000020u; // 801FA84C
  c->r[3]=0u+0x00000000u; // 801FA850
  c->lr=0x801FA858u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FA854
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA858
  c->lr=c->r[0]; // 801FA85C
  c->r[1]=c->r[1]+0x00000020u; // 801FA860
  return; // 801FA864
}

// fn_801FA868
void f_801FA868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA868
  c->r[0]=c->lr; // 801FA86C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA870
  c->r[11]=c->r[1]+0x00000020u; // 801FA874
  c->lr=0x801FA87Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FA878
  c->r[29]=c->r[3]|c->r[3]; // 801FA87C
  c->r[30]=0u+0x00000000u; // 801FA880
  c->lr=0x801FA888u; f_80163990(c); // 801FA884
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801FA888
  c->r[31]=c->r[3]|c->r[3]; // 801FA88C
  cmpu(c,0,c->r[0],c->r[3]); // 801FA890
  if (!crb(c,2)) { goto L_801FA8AC; } // 801FA894
  c->r[0]=R32(c->r[29]+0x00000018u); // 801FA898
  cmpu(c,0,c->r[0],0x00000001u); // 801FA89C
  if (crb(c,2)) { goto L_801FA8AC; } // 801FA8A0
  c->r[30]=0u+0xFFFFFFDDu; // 801FA8A4
  goto L_801FA8C4; // 801FA8A8
L_801FA8AC:;
  c->r[3]=c->r[29]|c->r[29]; // 801FA8AC
  c->lr=0x801FA8B4u; f_80161E48(c); // 801FA8B0
  c->r[3]=R32(c->r[29]+0x00000020u); // 801FA8B4
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 801FA8B8
  c->r[0]=c->r[3]+0x00000001u; // 801FA8BC
  W32(c->r[29]+0x00000020u,c->r[0]); // 801FA8C0
L_801FA8C4:;
  c->r[11]=c->r[1]+0x00000020u; // 801FA8C4
  c->r[3]=c->r[30]|c->r[30]; // 801FA8C8
  c->lr=0x801FA8D0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FA8CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA8D0
  c->lr=c->r[0]; // 801FA8D4
  c->r[1]=c->r[1]+0x00000020u; // 801FA8D8
  return; // 801FA8DC
}

// fn_801FA8E0
void f_801FA8E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA8E0
  c->r[0]=c->lr; // 801FA8E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA8E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA8EC
  c->r[31]=0u+0x00000000u; // 801FA8F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FA8F4
  c->r[30]=c->r[3]|c->r[3]; // 801FA8F8
  c->lr=0x801FA900u; f_80163990(c); // 801FA8FC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801FA900
  cmpu(c,0,c->r[0],c->r[3]); // 801FA904
  if (crb(c,2)) { goto L_801FA924; } // 801FA908
  c->r[3]=0u+0x80340000u; // 801FA90C
  c->r[3]=c->r[3]+0xFFFFAAD8u; // 801FA910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FA914
  c->lr=0x801FA91Cu; f_8018E558(c); // 801FA918
  c->r[31]=0u+0xFFFFFFFFu; // 801FA91C
  goto L_801FA944; // 801FA920
L_801FA924:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 801FA924
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801FA928
  W32(c->r[30]+0x00000020u,c->r[0]); // 801FA92C
  if (!crb(c,2)) { goto L_801FA93C; } // 801FA930
  c->r[0]=0u+0x00000000u; // 801FA934
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801FA938
L_801FA93C:;
  c->r[3]=c->r[30]|c->r[30]; // 801FA93C
  c->lr=0x801FA944u; f_80161F24(c); // 801FA940
L_801FA944:;
  c->r[3]=c->r[31]|c->r[31]; // 801FA944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA948
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FA94C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA950
  c->lr=c->r[0]; // 801FA954
  c->r[1]=c->r[1]+0x00000010u; // 801FA958
  return; // 801FA95C
}

// fn_801FA960
void f_801FA960(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801FA960
  return; // 801FA964
}

// fn_801FA968
void f_801FA968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA968
  c->r[0]=c->lr; // 801FA96C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA970
  c->lr=0x801FA978u; f_80161404(c); // 801FA974
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA978
  c->r[3]=0u+0x00000000u; // 801FA97C
  c->lr=c->r[0]; // 801FA980
  c->r[1]=c->r[1]+0x00000010u; // 801FA984
  return; // 801FA988
}

// fn_801FA98C
void f_801FA98C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA98C
  c->r[0]=c->lr; // 801FA990
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA994
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA998
  c->r[31]=0u+0x00000000u; // 801FA99C
  c->lr=0x801FA9A4u; f_80161464(c); // 801FA9A0
  cmps(c,0,(int32_t)c->r[3],0); // 801FA9A4
  if (!crb(c,2)) { goto L_801FA9B0; } // 801FA9A8
  c->r[31]=0u+0xFFFFFF01u; // 801FA9AC
L_801FA9B0:;
  c->r[3]=c->r[31]|c->r[31]; // 801FA9B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA9B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA9B8
  c->lr=c->r[0]; // 801FA9BC
  c->r[1]=c->r[1]+0x00000010u; // 801FA9C0
  return; // 801FA9C4
}

// fn_801FA9C8
void f_801FA9C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA9C8
  c->r[0]=c->lr; // 801FA9CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA9D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA9D4
  c->r[31]=0u+0x00000000u; // 801FA9D8
  c->lr=0x801FA9E0u; f_8016152C(c); // 801FA9DC
  cmps(c,0,(int32_t)c->r[3],0); // 801FA9E0
  if (!crb(c,2)) { goto L_801FA9EC; } // 801FA9E4
  c->r[31]=0u+0xFFFFFF01u; // 801FA9E8
L_801FA9EC:;
  c->r[3]=c->r[31]|c->r[31]; // 801FA9EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA9F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA9F4
  c->lr=c->r[0]; // 801FA9F8
  c->r[1]=c->r[1]+0x00000010u; // 801FA9FC
  return; // 801FAA00
}

// fn_801FAA04
void f_801FAA04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAA04
  c->r[0]=c->lr; // 801FAA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FAA0C
  c->r[11]=c->r[1]+0x00000020u; // 801FAA10
  c->lr=0x801FAA18u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FAA14
  cmps(c,0,(int32_t)c->r[4],0); // 801FAA18
  c->r[29]=c->r[3]|c->r[3]; // 801FAA1C
  c->r[30]=c->r[4]|c->r[4]; // 801FAA20
  c->r[31]=0u+0x00000000u; // 801FAA24
  if (crb(c,2)) { goto L_801FAA3C; } // 801FAA28
  c->r[7]=R32(c->r[4]+0x00000004u); // 801FAA2C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FAA30
  c->r[0]=c->r[0]+c->r[7]; // 801FAA34
  goto L_801FAA54; // 801FAA38
L_801FAA3C:;
  c->r[3]=0u+0x80340000u; // 801FAA3C
  c->r[3]=c->r[3]+0xFFFFAB0Du; // 801FAA40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FAA44
  c->lr=0x801FAA4Cu; f_8018E558(c); // 801FAA48
  c->r[31]=0u+0xFFFFFF01u; // 801FAA4C
  goto L_801FAA80; // 801FAA50
L_801FAA54:;
  c->r[8]=R32(c->r[30]+0x00000008u); // 801FAA54
  c->r[4]=c->r[5]|c->r[5]; // 801FAA58
  c->r[5]=c->r[6]|c->r[6]; // 801FAA5C
  c->r[6]=c->r[0]|c->r[0]; // 801FAA60
  c->r[9]=0u+0x00000000u; // 801FAA64
  c->lr=0x801FAA6Cu; f_80163F64(c); // 801FAA68
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801FAA6C
  cmps(c,0,(int32_t)c->r[0],0); // 801FAA70
  if (crb(c,2)) { goto L_801FAA80; } // 801FAA74
  c->r[3]=c->r[29]|c->r[29]; // 801FAA78
  c->lr=0x801FAA80u; f_801645D4(c); // 801FAA7C
L_801FAA80:;
  c->r[11]=c->r[1]+0x00000020u; // 801FAA80
  c->r[3]=c->r[31]|c->r[31]; // 801FAA84
  c->lr=0x801FAA8Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FAA88
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FAA8C
  c->lr=c->r[0]; // 801FAA90
  c->r[1]=c->r[1]+0x00000020u; // 801FAA94
  return; // 801FAA98
}

// fn_801FAA9C
void f_801FAA9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAA9C
  c->r[0]=c->lr; // 801FAAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAAA4
  c->lr=0x801FAAACu; f_80164494(c); // 801FAAA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAAAC
  c->r[3]=0u+0x00000000u; // 801FAAB0
  c->lr=c->r[0]; // 801FAAB4
  c->r[1]=c->r[1]+0x00000010u; // 801FAAB8
  return; // 801FAABC
}

// fn_801FAAC0
void f_801FAAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAAC0
  c->r[0]=c->lr; // 801FAAC4
  c->r[4]=0u+0x80000000u; // 801FAAC8
  c->r[6]=0u+0x00000000u; // 801FAACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAAD0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[6]); // 801FAAD4
  c->r[5]=R32(c->r[4]+0x000000F8u); // 801FAAD8
  c->r[4]=0u+0x000003E8u; // 801FAADC
  c->r[5]=rotl(c->r[5],30)&0x3FFFFFFFu; // 801FAAE0
  c->r[4]=divwu(c->r[5],c->r[4]); // 801FAAE4
  c->r[5]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 801FAAE8
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 801FAAEC
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 801FAAF0
  c->r[3]=c->r[5]+c->r[6]; // 801FAAF4
  c->r[3]=c->r[3]+c->r[0]; // 801FAAF8
  c->lr=0x801FAB00u; f_80164D4C(c); // 801FAAFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAB00
  c->r[3]=0u+0x00000000u; // 801FAB04
  c->lr=c->r[0]; // 801FAB08
  c->r[1]=c->r[1]+0x00000010u; // 801FAB0C
  return; // 801FAB10
}

// fn_801FAB14
void f_801FAB14(Ctx* __restrict c) {
  f_80164DF4(c); return; // 801FAB14
}

// fn_801FAB18
void f_801FAB18(Ctx* __restrict c) {
  c->r[5]=0u+0x80000000u; // 801FAB18
  c->r[0]=0u+0x000003E8u; // 801FAB1C
  c->r[6]=R32(c->r[5]+0x000000F8u); // 801FAB20
  c->r[5]=0u+0x00000000u; // 801FAB24
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 801FAB28
  c->r[6]=divwu(c->r[6],c->r[0]); // 801FAB2C
  f_80185F38(c); return; // 801FAB30
}

// fn_801FAB34
void f_801FAB34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAB34
  c->r[0]=c->lr; // 801FAB38
  W32(c->r[1]+0x00000054u,c->r[0]); // 801FAB3C
  c->r[11]=c->r[1]+0x00000050u; // 801FAB40
  c->lr=0x801FAB48u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FAB44
  c->r[31]=c->r[1]|c->r[1]; // 801FAB48
  c->r[30]=0u+0x80340000u; // 801FAB4C
  W32(c->r[31]+0x00000038u,c->r[1]); // 801FAB50
  c->r[29]=c->r[3]|c->r[3]; // 801FAB54
  c->r[30]=c->r[30]+0xFFFFAB38u; // 801FAB58
L_801FAB5C:;
  c->r[3]=0u+0x803D0000u; // 801FAB5C
  c->r[4]=c->r[31]+0x00000008u; // 801FAB60
  c->r[3]=c->r[3]+0x00007428u; // 801FAB64
  c->r[5]=0u+0x00000001u; // 801FAB68
  c->lr=0x801FAB70u; f_801FA9C8(c); // 801FAB6C
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 801FAB70
  cmps(c,0,(int32_t)c->r[0],0); // 801FAB74
  if (crb(c,2)) { goto L_801FAB90; } // 801FAB78
  c->r[4]=c->r[30]+0x00000011u; // 801FAB7C
  c->r[3]=0u+0x00000003u; // 801FAB80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FAB84
  c->lr=0x801FAB8Cu; f_801FE6E4(c); // 801FAB88
  goto L_801FAC44; // 801FAB8C
L_801FAB90:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801FAB90
  c->r[3]=c->r[3]+0x00000008u; // 801FAB94
  c->lr=0x801FAB9Cu; f_801FACC0(c); // 801FAB98
  c->r[5]=c->r[3]|c->r[3]; // 801FAB9C
  c->r[4]=c->r[30]+0x00000035u; // 801FABA0
  c->r[3]=0u+0x00000004u; // 801FABA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FABA8
  c->lr=0x801FABB0u; f_801FE6E4(c); // 801FABAC
  c->r[3]=0u+0x803D0000u; // 801FABB0
  c->r[3]=c->r[3]+0x000073E0u; // 801FABB4
  c->lr=0x801FABBCu; f_801FA868(c); // 801FABB8
  W32(c->r[31]+0x00000020u,c->r[1]); // 801FABBC
  c->r[3]=c->r[29]|c->r[29]; // 801FABC0
  c->r[4]=R32(c->r[31]+0x00000008u); // 801FABC4
  c->lr=0x801FABCCu; f_801FB688(c); // 801FABC8
  goto L_801FAC14; // 801FABCC
  c->r[4]=c->r[30]+0x00000058u; // 801FABD0
  c->r[3]=0u+0x00000001u; // 801FABD4
  c->r[5]=0u+0x00000049u; // 801FABD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FABDC
  c->lr=0x801FABE4u; f_801FE6E4(c); // 801FABE0
  goto L_801FABFC; // 801FABE4
  c->r[4]=c->r[30]+0x000000B9u; // 801FABE8
  c->r[3]=0u+0x00000001u; // 801FABEC
  c->r[5]=0u+0x00000049u; // 801FABF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FABF4
  c->lr=0x801FABFCu; f_801FE6E4(c); // 801FABF8
L_801FABFC:;
  c->r[3]=c->r[31]+0x0000000Cu; // 801FABFC
  c->lr=0x801FAC04u; f_80187EEC(c); // 801FAC00
  c->r[0]=c->r[0]|0x00000000u; // 801FAC04
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FAC08
  c->r[1]=R32(c->r[31]+0x00000020u); // 801FAC0C
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FAC10
L_801FAC14:;
  c->r[3]=0u+0x803D0000u; // 801FAC14
  c->r[3]=c->r[3]+0x000073E0u; // 801FAC18
  c->lr=0x801FAC20u; f_801FA8E0(c); // 801FAC1C
  c->r[3]=R32(c->r[31]+0x00000008u); // 801FAC20
  c->r[3]=c->r[3]+0x00000008u; // 801FAC24
  c->lr=0x801FAC2Cu; f_801FACC0(c); // 801FAC28
  c->r[5]=c->r[3]|c->r[3]; // 801FAC2C
  c->r[4]=c->r[30]+0x00000110u; // 801FAC30
  c->r[3]=0u+0x00000004u; // 801FAC34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FAC38
  c->lr=0x801FAC40u; f_801FE6E4(c); // 801FAC3C
  IRQCHK(c); goto L_801FAB5C; // 801FAC40
L_801FAC44:;
  c->r[4]=c->r[30]+0x00000132u; // 801FAC44
  c->r[3]=0u+0x00000004u; // 801FAC48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FAC4C
  c->lr=0x801FAC54u; f_801FE6E4(c); // 801FAC50
  goto L_801FAC9C; // 801FAC54
  c->r[4]=c->r[30]+0x00000058u; // 801FAC58
  c->r[3]=0u+0x00000001u; // 801FAC5C
  c->r[5]=0u+0x00000050u; // 801FAC60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FAC64
  c->lr=0x801FAC6Cu; f_801FE6E4(c); // 801FAC68
  goto L_801FAC84; // 801FAC6C
  c->r[4]=c->r[30]+0x000000B9u; // 801FAC70
  c->r[3]=0u+0x00000001u; // 801FAC74
  c->r[5]=0u+0x00000050u; // 801FAC78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FAC7C
  c->lr=0x801FAC84u; f_801FE6E4(c); // 801FAC80
L_801FAC84:;
  c->r[3]=c->r[31]+0x00000024u; // 801FAC84
  c->lr=0x801FAC8Cu; f_80187EEC(c); // 801FAC88
  c->r[0]=c->r[0]|0x00000000u; // 801FAC8C
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FAC90
  c->r[1]=R32(c->r[31]+0x00000038u); // 801FAC94
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FAC98
L_801FAC9C:;
  c->r[10]=c->r[31]|c->r[31]; // 801FAC9C
  c->r[3]=0u+0x00000000u; // 801FACA0
  c->r[11]=c->r[10]+0x00000050u; // 801FACA4
  c->lr=0x801FACACu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FACA8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FACAC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FACB0
  c->r[1]=c->r[10]|c->r[10]; // 801FACB4
  c->lr=c->r[0]; // 801FACB8
  return; // 801FACBC
}

// fn_801FACC0
void f_801FACC0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FACC0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801FACC4
  if (!crb(c,2)) { goto L_801FACD4; } // 801FACC8
  c->r[3]=c->r[3]+0x00000001u; // 801FACCC
  return; // 801FACD0
L_801FACD4:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 801FACD4
  return; // 801FACD8
}

// fn_801FACDC
void f_801FACDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FACDC
  c->r[0]=c->lr; // 801FACE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FACE4
  c->r[11]=c->r[1]+0x00000020u; // 801FACE8
  c->lr=0x801FACF0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FACEC
  c->r[29]=0u+0x803D0000u; // 801FACF0
  c->r[28]=c->r[3]|c->r[3]; // 801FACF4
  c->r[29]=c->r[29]+0x000073D8u; // 801FACF8
  c->r[3]=c->r[3]+0x00000010u; // 801FACFC
  c->lr=0x801FAD04u; f_801FAF28(c); // 801FAD00
  c->r[3]=c->r[28]+0x0000001Cu; // 801FAD04
  c->lr=0x801FAD0Cu; f_801FAF28(c); // 801FAD08
  c->r[3]=c->r[28]+0x00000028u; // 801FAD0C
  c->lr=0x801FAD14u; f_801FAF28(c); // 801FAD10
  c->r[3]=c->r[28]+0x00000034u; // 801FAD14
  c->lr=0x801FAD1Cu; f_801FAF28(c); // 801FAD18
  c->r[3]=c->r[28]+0x00000040u; // 801FAD1C
  c->lr=0x801FAD24u; f_801FAF28(c); // 801FAD20
  c->r[3]=c->r[28]+0x00000068u; // 801FAD24
  c->lr=0x801FAD2Cu; f_801FAF28(c); // 801FAD28
  c->r[3]=c->r[28]+0x00000074u; // 801FAD2C
  c->lr=0x801FAD34u; f_801FAF28(c); // 801FAD30
  c->r[30]=0u+0x00000000u; // 801FAD34
  c->r[3]=c->r[28]+0x000000BCu; // 801FAD38
  W32(c->r[28]+0x00000080u,c->r[30]); // 801FAD3C
  W32(c->r[28]+0x00000084u,c->r[30]); // 801FAD40
  W32(c->r[28]+0x00000088u,c->r[30]); // 801FAD44
  c->lr=0x801FAD4Cu; f_801FAF28(c); // 801FAD48
  c->r[3]=c->r[28]+0x000000C8u; // 801FAD4C
  c->lr=0x801FAD54u; f_801FAF28(c); // 801FAD50
  c->r[3]=c->r[28]+0x000000D4u; // 801FAD54
  c->lr=0x801FAD5Cu; f_801FAF28(c); // 801FAD58
  c->r[3]=c->r[28]+0x000000E0u; // 801FAD5C
  c->lr=0x801FAD64u; f_801FAF28(c); // 801FAD60
  c->r[3]=c->r[28]+0x000000ECu; // 801FAD64
  c->lr=0x801FAD6Cu; f_801FAF28(c); // 801FAD68
  c->r[3]=c->r[28]+0x000000F8u; // 801FAD6C
  c->lr=0x801FAD74u; f_801FAF28(c); // 801FAD70
  c->r[3]=c->r[28]+0x00000104u; // 801FAD74
  c->lr=0x801FAD7Cu; f_801FAF28(c); // 801FAD78
  c->r[3]=c->r[28]+0x00000110u; // 801FAD7C
  c->lr=0x801FAD84u; f_801FAF28(c); // 801FAD80
  c->r[3]=c->r[28]+0x0000011Cu; // 801FAD84
  c->lr=0x801FAD8Cu; f_801FAF28(c); // 801FAD88
  c->r[3]=c->r[28]+0x00000128u; // 801FAD8C
  c->lr=0x801FAD94u; f_801FAF28(c); // 801FAD90
  c->r[3]=c->r[28]+0x00000134u; // 801FAD94
  c->lr=0x801FAD9Cu; f_801FAF28(c); // 801FAD98
  c->r[3]=c->r[28]+0x00000140u; // 801FAD9C
  c->lr=0x801FADA4u; f_801FAF28(c); // 801FADA0
  c->r[3]=c->r[28]+0x00000178u; // 801FADA4
  c->lr=0x801FADACu; f_801FAF28(c); // 801FADA8
  c->r[3]=c->r[28]+0x00000184u; // 801FADAC
  c->lr=0x801FADB4u; f_801FAF28(c); // 801FADB0
  c->r[3]=c->r[28]+0x000001A0u; // 801FADB4
  c->lr=0x801FADBCu; f_801FAF28(c); // 801FADB8
  c->r[3]=c->r[28]+0x000001ACu; // 801FADBC
  c->lr=0x801FADC4u; f_801FAF28(c); // 801FADC0
  c->r[3]=c->r[28]+0x000001C0u; // 801FADC4
  c->lr=0x801FADCCu; f_801FAF28(c); // 801FADC8
  c->r[3]=c->r[28]+0x0000020Cu; // 801FADCC
  c->lr=0x801FADD4u; f_801FAF28(c); // 801FADD0
  c->r[3]=c->r[28]+0x00000218u; // 801FADD4
  c->lr=0x801FADDCu; f_801FAF28(c); // 801FADD8
  c->r[3]=c->r[28]+0x00000224u; // 801FADDC
  c->lr=0x801FADE4u; f_801FAF28(c); // 801FADE0
  c->r[3]=c->r[28]|c->r[28]; // 801FADE4
  c->r[4]=0u+0x00000000u; // 801FADE8
  c->r[5]=0u+0x00000248u; // 801FADEC
  c->lr=0x801FADF4u; f_80004688(c); // 801FADF0
  c->r[31]=0u+0x00000001u; // 801FADF4
  c->r[5]=c->r[29]+0x00000080u; // 801FADF8
  c->r[0]=0u+0x80000000u; // 801FADFC
  c->r[4]=0u+0x80340000u; // 801FAE00
  W32(c->r[28]+0x00000000u,c->r[31]); // 801FAE04
  c->r[3]=c->r[28]+0x00000224u; // 801FAE08
  c->r[4]=c->r[4]+0xFFFFAC97u; // 801FAE0C
  W32(c->r[28]+0x00000004u,c->r[30]); // 801FAE10
  W32(c->r[28]+0x00000008u,c->r[5]); // 801FAE14
  W8(c->r[28]+0x0000000Cu,c->r[30]); // 801FAE18
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 801FAE1C
  W8(c->r[28]+0x00000050u,c->r[30]); // 801FAE20
  W32(c->r[28]+0x0000005Cu,c->r[30]); // 801FAE24
  W32(c->r[28]+0x00000058u,c->r[30]); // 801FAE28
  W32(c->r[28]+0x00000064u,c->r[30]); // 801FAE2C
  W32(c->r[28]+0x00000060u,c->r[30]); // 801FAE30
  W32(c->r[28]+0x000000B8u,c->r[31]); // 801FAE34
  W32(c->r[28]+0x00000154u,c->r[30]); // 801FAE38
  W32(c->r[28]+0x00000150u,c->r[30]); // 801FAE3C
  W32(c->r[28]+0x0000015Cu,c->r[30]); // 801FAE40
  W32(c->r[28]+0x00000158u,c->r[30]); // 801FAE44
  W32(c->r[28]+0x00000164u,c->r[30]); // 801FAE48
  W32(c->r[28]+0x00000160u,c->r[30]); // 801FAE4C
  W32(c->r[28]+0x0000016Cu,c->r[30]); // 801FAE50
  W32(c->r[28]+0x00000168u,c->r[30]); // 801FAE54
  W8(c->r[28]+0x00000170u,c->r[30]); // 801FAE58
  W8(c->r[28]+0x00000171u,c->r[30]); // 801FAE5C
  W8(c->r[28]+0x00000172u,c->r[30]); // 801FAE60
  W8(c->r[28]+0x00000173u,c->r[30]); // 801FAE64
  W8(c->r[28]+0x00000198u,c->r[30]); // 801FAE68
  W32(c->r[28]+0x000001E0u,c->r[30]); // 801FAE6C
  W32(c->r[28]+0x000001E4u,c->r[30]); // 801FAE70
  W32(c->r[28]+0x000001E8u,c->r[30]); // 801FAE74
  W8(c->r[28]+0x00000208u,c->r[30]); // 801FAE78
  W8(c->r[28]+0x00000209u,c->r[30]); // 801FAE7C
  c->lr=0x801FAE84u; f_801FB0B8(c); // 801FAE80
  W32(c->r[28]+0x00000230u,c->r[30]); // 801FAE84
  c->r[3]=c->r[29]+0x00000008u; // 801FAE88
  c->r[4]=0u+0x00000001u; // 801FAE8C
  c->r[5]=0u+0x00000000u; // 801FAE90
  W32(c->r[28]+0x00000234u,c->r[30]); // 801FAE94
  c->r[6]=0u+0x00000000u; // 801FAE98
  W32(c->r[28]+0x00000238u,c->r[30]); // 801FAE9C
  W32(c->r[28]+0x0000023Cu,c->r[30]); // 801FAEA0
  W8(c->r[28]+0x00000240u,c->r[30]); // 801FAEA4
  W8(c->r[28]+0x00000241u,c->r[30]); // 801FAEA8
  W8(c->r[28]+0x00000245u,c->r[30]); // 801FAEAC
  W8(c->r[28]+0x00000246u,c->r[30]); // 801FAEB0
  W8(c->r[28]+0x00000247u,c->r[30]); // 801FAEB4
  W32(c->r[28]+0x0000008Cu,c->r[30]); // 801FAEB8
  W32(c->r[28]+0x00000090u,c->r[30]); // 801FAEBC
  W32(c->r[28]+0x00000094u,c->r[30]); // 801FAEC0
  W32(c->r[28]+0x00000098u,c->r[30]); // 801FAEC4
  W32(c->r[28]+0x0000009Cu,c->r[30]); // 801FAEC8
  W32(c->r[28]+0x000000A0u,c->r[30]); // 801FAECC
  W32(c->r[28]+0x000000A4u,c->r[30]); // 801FAED0
  W32(c->r[28]+0x000000A8u,c->r[30]); // 801FAED4
  W32(c->r[28]+0x000000ACu,c->r[30]); // 801FAED8
  W32(c->r[28]+0x000000B0u,c->r[30]); // 801FAEDC
  W8(c->r[28]+0x00000174u,c->r[31]); // 801FAEE0
  W8(c->r[28]+0x00000242u,c->r[30]); // 801FAEE4
  W8(c->r[28]+0x00000243u,c->r[31]); // 801FAEE8
  W8(c->r[28]+0x00000244u,c->r[30]); // 801FAEEC
  W8(c->r[28]+0x000000B4u,c->r[30]); // 801FAEF0
  c->lr=0x801FAEF8u; f_801FA7F0(c); // 801FAEF4
  c->r[3]=c->r[29]+0x0000002Cu; // 801FAEF8
  c->r[4]=0u+0x00000001u; // 801FAEFC
  c->r[5]=0u+0x00000000u; // 801FAF00
  c->r[6]=0u+0x00000000u; // 801FAF04
  c->lr=0x801FAF0Cu; f_801FA7F0(c); // 801FAF08
  c->r[11]=c->r[1]+0x00000020u; // 801FAF0C
  c->r[3]=c->r[28]|c->r[28]; // 801FAF10
  c->lr=0x801FAF18u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FAF14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FAF18
  c->lr=c->r[0]; // 801FAF1C
  c->r[1]=c->r[1]+0x00000020u; // 801FAF20
  return; // 801FAF24
}

// fn_801FAF28
void f_801FAF28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAF28
  c->r[0]=c->lr; // 801FAF2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAF30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAF34
  c->r[31]=c->r[3]|c->r[3]; // 801FAF38
  c->lr=0x801FAF40u; f_801FAF60(c); // 801FAF3C
  c->r[3]=c->r[31]|c->r[31]; // 801FAF40
  c->lr=0x801FAF48u; f_801FAFA4(c); // 801FAF44
  c->r[3]=c->r[31]|c->r[31]; // 801FAF48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAF4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAF50
  c->lr=c->r[0]; // 801FAF54
  c->r[1]=c->r[1]+0x00000010u; // 801FAF58
  return; // 801FAF5C
}

// fn_801FAF60
void f_801FAF60(Ctx* __restrict c) {
  return; // 801FAF60
}

// dtor_801FAF64
void f_801FAF64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAF64
  c->r[0]=c->lr; // 801FAF68
  cmps(c,0,(int32_t)c->r[3],0); // 801FAF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAF70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAF74
  c->r[31]=c->r[3]|c->r[3]; // 801FAF78
  if (crb(c,2)) { goto L_801FAF8C; } // 801FAF7C
  cmps(c,0,(int32_t)c->r[4],0); // 801FAF80
  if (!crb(c,1)) { goto L_801FAF8C; } // 801FAF84
  c->lr=0x801FAF8Cu; f_800D6AD0(c); // 801FAF88
L_801FAF8C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FAF8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAF90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAF94
  c->lr=c->r[0]; // 801FAF98
  c->r[1]=c->r[1]+0x00000010u; // 801FAF9C
  return; // 801FAFA0
}

// fn_801FAFA4
void f_801FAFA4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000003u; // 801FAFA4
  c->r[5]=0u+0x00000000u; // 801FAFA8
  c->r[4]=0u+0x00000000u; // 801FAFAC
  c->ctr=c->r[0]; // 801FAFB0
L_801FAFB4:;
  W32(c->r[3]+c->r[4],c->r[5]); // 801FAFB4
  c->r[4]=c->r[4]+0x00000004u; // 801FAFB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FAFB4; } // 801FAFBC
  return; // 801FAFC0
}

// fn_801FAFC4
void f_801FAFC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAFC4
  c->r[0]=c->lr; // 801FAFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801FAFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAFD4
  c->r[31]=c->r[3]|c->r[3]; // 801FAFD8
  if (crb(c,2)) { goto L_801FAFEC; } // 801FAFDC
  cmps(c,0,(int32_t)c->r[4],0); // 801FAFE0
  if (!crb(c,1)) { goto L_801FAFEC; } // 801FAFE4
  c->lr=0x801FAFECu; f_800D6AD0(c); // 801FAFE8
L_801FAFEC:;
  c->r[3]=c->r[31]|c->r[31]; // 801FAFEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAFF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAFF4
  c->lr=c->r[0]; // 801FAFF8
  c->r[1]=c->r[1]+0x00000010u; // 801FAFFC
  return; // 801FB000
}

// fn_801FB004
void f_801FB004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB004
  c->r[0]=c->lr; // 801FB008
  cmps(c,0,(int32_t)c->r[3],0); // 801FB00C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB014
  c->r[31]=c->r[4]|c->r[4]; // 801FB018
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB01C
  c->r[30]=c->r[3]|c->r[3]; // 801FB020
  if (crb(c,2)) { goto L_801FB044; } // 801FB024
  if (crb(c,2)) { goto L_801FB034; } // 801FB028
  c->r[4]=0u+0x00000000u; // 801FB02C
  c->lr=0x801FB034u; f_801FD818(c); // 801FB030
L_801FB034:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FB034
  if (!crb(c,1)) { goto L_801FB044; } // 801FB038
  c->r[3]=c->r[30]|c->r[30]; // 801FB03C
  c->lr=0x801FB044u; f_800D6AD0(c); // 801FB040
L_801FB044:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB044
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB048
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB050
  c->lr=c->r[0]; // 801FB054
  c->r[1]=c->r[1]+0x00000010u; // 801FB058
  return; // 801FB05C
}

// dtor_801FB060
void f_801FB060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB060
  c->r[0]=c->lr; // 801FB064
  cmps(c,0,(int32_t)c->r[3],0); // 801FB068
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB06C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB070
  c->r[31]=c->r[4]|c->r[4]; // 801FB074
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB078
  c->r[30]=c->r[3]|c->r[3]; // 801FB07C
  if (crb(c,2)) { goto L_801FB09C; } // 801FB080
  c->r[4]=0u+0x00000000u; // 801FB084
  c->lr=0x801FB08Cu; f_801FB004(c); // 801FB088
  cmps(c,0,(int32_t)c->r[31],0); // 801FB08C
  if (!crb(c,1)) { goto L_801FB09C; } // 801FB090
  c->r[3]=c->r[30]|c->r[30]; // 801FB094
  c->lr=0x801FB09Cu; f_800D6AD0(c); // 801FB098
L_801FB09C:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB09C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB0A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB0A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB0A8
  c->lr=c->r[0]; // 801FB0AC
  c->r[1]=c->r[1]+0x00000010u; // 801FB0B0
  return; // 801FB0B4
}

// fn_801FB0B8
void f_801FB0B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB0B8
  c->r[0]=c->lr; // 801FB0BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FB0C0
  c->r[11]=c->r[1]+0x00000020u; // 801FB0C4
  c->lr=0x801FB0CCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FB0C8
  c->r[29]=c->r[3]|c->r[3]; // 801FB0CC
  c->r[30]=c->r[4]|c->r[4]; // 801FB0D0
  c->lr=0x801FB0D8u; f_801FBAA0(c); // 801FB0D4
  c->r[0]=R8(c->r[1]+0x00000008u); // 801FB0D8
  c->r[31]=c->r[3]|c->r[3]; // 801FB0DC
  c->r[3]=c->r[30]|c->r[30]; // 801FB0E0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801FB0E4
  c->lr=0x801FB0ECu; f_80185588(c); // 801FB0E8
  c->r[0]=c->r[3]|c->r[3]; // 801FB0EC
  c->r[3]=c->r[29]|c->r[29]; // 801FB0F0
  c->r[5]=c->r[31]|c->r[31]; // 801FB0F4
  c->r[6]=c->r[30]|c->r[30]; // 801FB0F8
  c->r[7]=c->r[30]+c->r[0]; // 801FB0FC
  c->r[8]=c->r[1]+0x00000009u; // 801FB100
  c->r[4]=0u+0x00000000u; // 801FB104
  c->lr=0x801FB10Cu; f_801FDDF4(c); // 801FB108
  c->r[11]=c->r[1]+0x00000020u; // 801FB10C
  c->lr=0x801FB114u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FB110
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FB114
  c->lr=c->r[0]; // 801FB118
  c->r[1]=c->r[1]+0x00000020u; // 801FB11C
  return; // 801FB120
}

// fn_801FB124
void f_801FB124(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB124
  c->r[0]=c->lr; // 801FB128
  cmps(c,0,(int32_t)c->r[3],0); // 801FB12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB134
  c->r[31]=c->r[4]|c->r[4]; // 801FB138
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB13C
  c->r[30]=c->r[3]|c->r[3]; // 801FB140
  if (crb(c,2)) { goto L_801FB2C0; } // 801FB144
  c->r[3]=0u+0x803D0000u; // 801FB148
  c->r[3]=c->r[3]+0x000073E0u; // 801FB14C
  c->lr=0x801FB154u; f_801FA960(c); // 801FB150
  c->r[3]=0u+0x803D0000u; // 801FB154
  c->r[3]=c->r[3]+0x00007404u; // 801FB158
  c->lr=0x801FB160u; f_801FA960(c); // 801FB15C
  c->r[3]=c->r[30]+0x00000224u; // 801FB160
  c->r[4]=0u+0xFFFFFFFFu; // 801FB164
  c->lr=0x801FB16Cu; f_801FD984(c); // 801FB168
  c->r[3]=c->r[30]+0x00000218u; // 801FB16C
  c->r[4]=0u+0xFFFFFFFFu; // 801FB170
  c->lr=0x801FB178u; f_801FD984(c); // 801FB174
  c->r[3]=c->r[30]+0x0000020Cu; // 801FB178
  c->r[4]=0u+0xFFFFFFFFu; // 801FB17C
  c->lr=0x801FB184u; f_801FD984(c); // 801FB180
  c->r[3]=c->r[30]+0x000001C0u; // 801FB184
  c->r[4]=0u+0xFFFFFFFFu; // 801FB188
  c->lr=0x801FB190u; f_801FD984(c); // 801FB18C
  c->r[3]=c->r[30]+0x000001ACu; // 801FB190
  c->r[4]=0u+0xFFFFFFFFu; // 801FB194
  c->lr=0x801FB19Cu; f_801FD984(c); // 801FB198
  c->r[3]=c->r[30]+0x000001A0u; // 801FB19C
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1A0
  c->lr=0x801FB1A8u; f_801FD984(c); // 801FB1A4
  c->r[3]=c->r[30]+0x00000184u; // 801FB1A8
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1AC
  c->lr=0x801FB1B4u; f_801FD984(c); // 801FB1B0
  c->r[3]=c->r[30]+0x00000178u; // 801FB1B4
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1B8
  c->lr=0x801FB1C0u; f_801FD984(c); // 801FB1BC
  c->r[3]=c->r[30]+0x00000140u; // 801FB1C0
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1C4
  c->lr=0x801FB1CCu; f_801FD984(c); // 801FB1C8
  c->r[3]=c->r[30]+0x00000134u; // 801FB1CC
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1D0
  c->lr=0x801FB1D8u; f_801FD984(c); // 801FB1D4
  c->r[3]=c->r[30]+0x00000128u; // 801FB1D8
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1DC
  c->lr=0x801FB1E4u; f_801FD984(c); // 801FB1E0
  c->r[3]=c->r[30]+0x0000011Cu; // 801FB1E4
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1E8
  c->lr=0x801FB1F0u; f_801FD984(c); // 801FB1EC
  c->r[3]=c->r[30]+0x00000110u; // 801FB1F0
  c->r[4]=0u+0xFFFFFFFFu; // 801FB1F4
  c->lr=0x801FB1FCu; f_801FD984(c); // 801FB1F8
  c->r[3]=c->r[30]+0x00000104u; // 801FB1FC
  c->r[4]=0u+0xFFFFFFFFu; // 801FB200
  c->lr=0x801FB208u; f_801FD984(c); // 801FB204
  c->r[3]=c->r[30]+0x000000F8u; // 801FB208
  c->r[4]=0u+0xFFFFFFFFu; // 801FB20C
  c->lr=0x801FB214u; f_801FD984(c); // 801FB210
  c->r[3]=c->r[30]+0x000000ECu; // 801FB214
  c->r[4]=0u+0xFFFFFFFFu; // 801FB218
  c->lr=0x801FB220u; f_801FD984(c); // 801FB21C
  c->r[3]=c->r[30]+0x000000E0u; // 801FB220
  c->r[4]=0u+0xFFFFFFFFu; // 801FB224
  c->lr=0x801FB22Cu; f_801FD984(c); // 801FB228
  c->r[3]=c->r[30]+0x000000D4u; // 801FB22C
  c->r[4]=0u+0xFFFFFFFFu; // 801FB230
  c->lr=0x801FB238u; f_801FD984(c); // 801FB234
  c->r[3]=c->r[30]+0x000000C8u; // 801FB238
  c->r[4]=0u+0xFFFFFFFFu; // 801FB23C
  c->lr=0x801FB244u; f_801FD984(c); // 801FB240
  c->r[3]=c->r[30]+0x000000BCu; // 801FB244
  c->r[4]=0u+0xFFFFFFFFu; // 801FB248
  c->lr=0x801FB250u; f_801FD984(c); // 801FB24C
  c->r[3]=c->r[30]+0x00000080u; // 801FB250
  c->r[4]=0u+0xFFFFFFFFu; // 801FB254
  c->lr=0x801FB25Cu; f_801FB060(c); // 801FB258
  c->r[3]=c->r[30]+0x00000074u; // 801FB25C
  c->r[4]=0u+0xFFFFFFFFu; // 801FB260
  c->lr=0x801FB268u; f_801FD984(c); // 801FB264
  c->r[3]=c->r[30]+0x00000068u; // 801FB268
  c->r[4]=0u+0xFFFFFFFFu; // 801FB26C
  c->lr=0x801FB274u; f_801FD984(c); // 801FB270
  c->r[3]=c->r[30]+0x00000040u; // 801FB274
  c->r[4]=0u+0xFFFFFFFFu; // 801FB278
  c->lr=0x801FB280u; f_801FD984(c); // 801FB27C
  c->r[3]=c->r[30]+0x00000034u; // 801FB280
  c->r[4]=0u+0xFFFFFFFFu; // 801FB284
  c->lr=0x801FB28Cu; f_801FD984(c); // 801FB288
  c->r[3]=c->r[30]+0x00000028u; // 801FB28C
  c->r[4]=0u+0xFFFFFFFFu; // 801FB290
  c->lr=0x801FB298u; f_801FD984(c); // 801FB294
  c->r[3]=c->r[30]+0x0000001Cu; // 801FB298
  c->r[4]=0u+0xFFFFFFFFu; // 801FB29C
  c->lr=0x801FB2A4u; f_801FD984(c); // 801FB2A0
  c->r[3]=c->r[30]+0x00000010u; // 801FB2A4
  c->r[4]=0u+0xFFFFFFFFu; // 801FB2A8
  c->lr=0x801FB2B0u; f_801FD984(c); // 801FB2AC
  cmps(c,0,(int32_t)c->r[31],0); // 801FB2B0
  if (!crb(c,1)) { goto L_801FB2C0; } // 801FB2B4
  c->r[3]=c->r[30]|c->r[30]; // 801FB2B8
  c->lr=0x801FB2C0u; f_8020224C(c); // 801FB2BC
L_801FB2C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB2C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB2C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB2C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB2CC
  c->lr=c->r[0]; // 801FB2D0
  c->r[1]=c->r[1]+0x00000010u; // 801FB2D4
  return; // 801FB2D8
}

// fn_801FB2DC
void f_801FB2DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB2DC
  c->r[0]=c->lr; // 801FB2E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801FB2E4
  c->r[11]=c->r[1]+0x00000040u; // 801FB2E8
  c->lr=0x801FB2F0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FB2EC
  c->r[31]=c->r[1]|c->r[1]; // 801FB2F0
  c->r[29]=0u+0x803D0000u; // 801FB2F4
  c->r[30]=0u+0x80340000u; // 801FB2F8
  c->r[29]=c->r[29]+0x000073D8u; // 801FB2FC
  c->r[28]=c->r[3]|c->r[3]; // 801FB300
  c->r[0]=R8(c->r[29]+0x00000004u); // 801FB304
  c->r[30]=c->r[30]+0xFFFFAB38u; // 801FB308
  cmps(c,0,(int32_t)c->r[0],0); // 801FB30C
  if (crb(c,2)) { goto L_801FB31C; } // 801FB310
  c->r[3]=0u+0xFFFFF039u; // 801FB314
  goto L_801FB48C; // 801FB318
L_801FB31C:;
  c->r[0]=0u+0x00000001u; // 801FB31C
  c->r[3]=c->r[29]+0x00000008u; // 801FB320
  W8(c->r[29]+0x00000004u,c->r[0]); // 801FB324
  c->lr=0x801FB32Cu; f_801FA868(c); // 801FB328
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 801FB32C
  c->r[3]=c->r[28]|c->r[28]; // 801FB330
  c->lr=0x801FB338u; f_801FB994(c); // 801FB334
  c->r[5]=R32(c->r[28]+0x00000190u); // 801FB338
  c->r[4]=c->r[30]+0x00000170u; // 801FB33C
  c->r[6]=R32(c->r[28]+0x00000194u); // 801FB340
  c->r[3]=0u+0x00000003u; // 801FB344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB348
  c->lr=0x801FB350u; f_801FE6E4(c); // 801FB34C
  c->r[3]=c->r[28]+0x00000010u; // 801FB350
  c->lr=0x801FB358u; f_801FACC0(c); // 801FB354
  c->r[5]=c->r[3]|c->r[3]; // 801FB358
  c->r[4]=c->r[30]+0x00000190u; // 801FB35C
  c->r[3]=0u+0x00000004u; // 801FB360
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB364
  c->lr=0x801FB36Cu; f_801FE6E4(c); // 801FB368
  c->r[3]=c->r[28]+0x0000001Cu; // 801FB36C
  c->lr=0x801FB374u; f_801FACC0(c); // 801FB370
  c->r[5]=c->r[3]|c->r[3]; // 801FB374
  c->r[4]=c->r[30]+0x000001A3u; // 801FB378
  c->r[3]=0u+0x00000004u; // 801FB37C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB380
  c->lr=0x801FB388u; f_801FE6E4(c); // 801FB384
  c->r[3]=c->r[28]+0x00000028u; // 801FB388
  c->lr=0x801FB390u; f_801FACC0(c); // 801FB38C
  c->r[5]=c->r[3]|c->r[3]; // 801FB390
  c->r[4]=c->r[30]+0x000001B6u; // 801FB394
  c->r[3]=0u+0x00000004u; // 801FB398
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB39C
  c->lr=0x801FB3A4u; f_801FE6E4(c); // 801FB3A0
  c->r[3]=c->r[28]+0x00000034u; // 801FB3A4
  c->lr=0x801FB3ACu; f_801FACC0(c); // 801FB3A8
  c->r[5]=c->r[3]|c->r[3]; // 801FB3AC
  c->r[4]=c->r[30]+0x000001C9u; // 801FB3B0
  c->r[3]=0u+0x00000004u; // 801FB3B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB3B8
  c->lr=0x801FB3C0u; f_801FE6E4(c); // 801FB3BC
  c->r[3]=c->r[28]+0x00000040u; // 801FB3C0
  c->lr=0x801FB3C8u; f_801FACC0(c); // 801FB3C4
  c->r[5]=c->r[3]|c->r[3]; // 801FB3C8
  c->r[4]=c->r[30]+0x000001DCu; // 801FB3CC
  c->r[3]=0u+0x00000004u; // 801FB3D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB3D4
  c->lr=0x801FB3DCu; f_801FE6E4(c); // 801FB3D8
  c->r[3]=c->r[29]+0x00000050u; // 801FB3DC
  c->r[4]=c->r[29]+0x00000070u; // 801FB3E0
  c->r[5]=0u+0x00000003u; // 801FB3E4
  c->lr=0x801FB3ECu; f_801FA968(c); // 801FB3E8
  c->r[3]=c->r[31]+0x00000008u; // 801FB3EC
  c->lr=0x801FB3F4u; f_80210250(c); // 801FB3F0
  c->r[5]=0u+0x80200000u; // 801FB3F4
  c->r[3]=R32(c->r[28]+0x00000008u); // 801FB3F8
  c->r[6]=c->r[28]|c->r[28]; // 801FB3FC
  c->r[4]=c->r[31]+0x00000008u; // 801FB400
  c->r[5]=c->r[5]+0xFFFFAB34u; // 801FB404
  c->lr=0x801FB40Cu; f_801FAA04(c); // 801FB408
  cmps(c,0,(int32_t)c->r[3],0); // 801FB40C
  c->r[28]=c->r[3]|c->r[3]; // 801FB410
  if (crb(c,2)) { goto L_801FB480; } // 801FB414
  c->r[5]=c->r[28]|c->r[28]; // 801FB418
  c->r[4]=c->r[30]+0x000001EFu; // 801FB41C
  c->r[3]=0u+0x00000001u; // 801FB420
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB424
  c->lr=0x801FB42Cu; f_801FE6E4(c); // 801FB428
  c->r[28]=0u+0xFFFFF05Fu; // 801FB42C
  goto L_801FB480; // 801FB430
  c->r[4]=c->r[30]+0x00000058u; // 801FB434
  c->r[3]=0u+0x00000001u; // 801FB438
  c->r[5]=0u+0x000000CCu; // 801FB43C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB440
  c->lr=0x801FB448u; f_801FE6E4(c); // 801FB444
  c->r[28]=0u+0xFFFFF05Bu; // 801FB448
  goto L_801FB468; // 801FB44C
  c->r[4]=c->r[30]+0x000000B9u; // 801FB450
  c->r[3]=0u+0x00000001u; // 801FB454
  c->r[5]=0u+0x000000CCu; // 801FB458
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB45C
  c->lr=0x801FB464u; f_801FE6E4(c); // 801FB460
  c->r[28]=0u+0xFFFFF05Fu; // 801FB464
L_801FB468:;
  c->r[3]=c->r[31]+0x00000018u; // 801FB468
  c->lr=0x801FB470u; f_80187EEC(c); // 801FB46C
  c->r[0]=c->r[0]|0x00000000u; // 801FB470
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FB474
  c->r[1]=R32(c->r[31]+0x0000002Cu); // 801FB478
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FB47C
L_801FB480:;
  c->r[3]=c->r[29]+0x00000008u; // 801FB480
  c->lr=0x801FB488u; f_801FA8E0(c); // 801FB484
  c->r[3]=c->r[28]|c->r[28]; // 801FB488
L_801FB48C:;
  c->r[10]=c->r[31]|c->r[31]; // 801FB48C
  c->r[11]=c->r[10]+0x00000040u; // 801FB490
  c->lr=0x801FB498u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FB494
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FB498
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FB49C
  c->r[1]=c->r[10]|c->r[10]; // 801FB4A0
  c->lr=c->r[0]; // 801FB4A4
  return; // 801FB4A8
}

// fn_801FB4AC
void f_801FB4AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB4AC
  c->r[0]=c->lr; // 801FB4B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FB4B4
  c->r[0]=0u+0x00000001u; // 801FB4B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FB4BC
  c->r[31]=0u+0x00000000u; // 801FB4C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FB4C4
  c->r[30]=c->r[3]|c->r[3]; // 801FB4C8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801FB4CC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801FB4D0
  cmps(c,0,(int32_t)c->r[4],0); // 801FB4D4
  if (crb(c,2)) { goto L_801FB4E0; } // 801FB4D8
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 801FB4DC
L_801FB4E0:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801FB4E0
  cmps(c,0,(int32_t)c->r[0],0); // 801FB4E4
  if (crb(c,2)) { goto L_801FB560; } // 801FB4E8
  c->r[3]=0u+0x803D0000u; // 801FB4EC
  c->r[4]=0u+0x00000000u; // 801FB4F0
  c->r[3]=c->r[3]+0x00007428u; // 801FB4F4
  c->r[5]=0u+0x00000000u; // 801FB4F8
  c->lr=0x801FB500u; f_801FA98C(c); // 801FB4FC
  cmps(c,0,(int32_t)c->r[3],0); // 801FB500
  if (crb(c,2)) { goto L_801FB524; } // 801FB504
  c->r[4]=0u+0x80340000u; // 801FB508
  c->r[3]=0u+0x00000001u; // 801FB50C
  c->r[4]=c->r[4]+0xFFFFAD58u; // 801FB510
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB514
  c->lr=0x801FB51Cu; f_801FE6E4(c); // 801FB518
  c->r[31]=0u+0xFFFFF05Fu; // 801FB51C
  goto L_801FB5BC; // 801FB520
L_801FB524:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 801FB524
  c->r[4]=c->r[1]+0x00000008u; // 801FB528
  c->r[5]=0u+0x00000000u; // 801FB52C
  c->lr=0x801FB534u; f_801FAA9C(c); // 801FB530
  cmps(c,0,(int32_t)c->r[3],0); // 801FB534
  c->r[31]=c->r[3]|c->r[3]; // 801FB538
  if (crb(c,2)) { goto L_801FB560; } // 801FB53C
  c->r[4]=0u+0x80340000u; // 801FB540
  c->r[5]=c->r[31]|c->r[31]; // 801FB544
  c->r[4]=c->r[4]+0xFFFFAD78u; // 801FB548
  c->r[3]=0u+0x00000001u; // 801FB54C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB550
  c->lr=0x801FB558u; f_801FE6E4(c); // 801FB554
  c->r[31]=0u+0xFFFFF05Fu; // 801FB558
  goto L_801FB5BC; // 801FB55C
L_801FB560:;
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 801FB560
  cmps(c,0,(int32_t)c->r[3],0); // 801FB564
  if (crb(c,2)) { goto L_801FB578; } // 801FB568
  c->r[0]=0u+0x00000000u; // 801FB56C
  W32(c->r[30]+0x00000090u,c->r[0]); // 801FB570
  c->lr=0x801FB578u; f_80202098(c); // 801FB574
L_801FB578:;
  c->r[3]=R32(c->r[30]+0x00000098u); // 801FB578
  cmps(c,0,(int32_t)c->r[3],0); // 801FB57C
  if (crb(c,2)) { goto L_801FB590; } // 801FB580
  c->r[0]=0u+0x00000000u; // 801FB584
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 801FB588
  c->lr=0x801FB590u; f_80202098(c); // 801FB58C
L_801FB590:;
  c->r[3]=R32(c->r[30]+0x000000A4u); // 801FB590
  cmps(c,0,(int32_t)c->r[3],0); // 801FB594
  if (crb(c,2)) { goto L_801FB5A8; } // 801FB598
  c->r[0]=0u+0x00000000u; // 801FB59C
  W32(c->r[30]+0x000000A8u,c->r[0]); // 801FB5A0
  c->lr=0x801FB5A8u; f_80202098(c); // 801FB5A4
L_801FB5A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB5A8
  c->lr=0x801FB5B0u; f_801FB94C(c); // 801FB5AC
  c->r[0]=0u+0x00000000u; // 801FB5B0
  c->r[3]=0u+0x803D0000u; // 801FB5B4
  W8(c->r[3]+0x000073DCu,c->r[0]); // 801FB5B8
L_801FB5BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801FB5BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FB5C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FB5C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FB5C8
  c->lr=c->r[0]; // 801FB5CC
  c->r[1]=c->r[1]+0x00000020u; // 801FB5D0
  return; // 801FB5D4
}

// fn_801FB5D8
void f_801FB5D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB5D8
  c->r[0]=c->lr; // 801FB5DC
  c->r[3]=0u+0x803D0000u; // 801FB5E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB5E4
  c->r[3]=c->r[3]+0x000073E0u; // 801FB5E8
  c->lr=0x801FB5F0u; f_801FA868(c); // 801FB5EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB5F0
  c->r[3]=0u+0x00000000u; // 801FB5F4
  c->lr=c->r[0]; // 801FB5F8
  c->r[1]=c->r[1]+0x00000010u; // 801FB5FC
  return; // 801FB600
}

// fn_801FB604
void f_801FB604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB604
  c->r[0]=c->lr; // 801FB608
  c->r[3]=0u+0x803D0000u; // 801FB60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB610
  c->r[3]=c->r[3]+0x000073E0u; // 801FB614
  c->lr=0x801FB61Cu; f_801FA8E0(c); // 801FB618
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB61C
  c->r[3]=0u+0x00000000u; // 801FB620
  c->lr=c->r[0]; // 801FB624
  c->r[1]=c->r[1]+0x00000010u; // 801FB628
  return; // 801FB62C
}

// fn_801FB630
void f_801FB630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB630
  c->r[0]=c->lr; // 801FB634
  c->r[3]=0u+0x803D0000u; // 801FB638
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB63C
  c->r[3]=c->r[3]+0x00007404u; // 801FB640
  c->lr=0x801FB648u; f_801FA868(c); // 801FB644
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB648
  c->r[3]=0u+0x00000000u; // 801FB64C
  c->lr=c->r[0]; // 801FB650
  c->r[1]=c->r[1]+0x00000010u; // 801FB654
  return; // 801FB658
}

// fn_801FB65C
void f_801FB65C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB65C
  c->r[0]=c->lr; // 801FB660
  c->r[3]=0u+0x803D0000u; // 801FB664
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB668
  c->r[3]=c->r[3]+0x00007404u; // 801FB66C
  c->lr=0x801FB674u; f_801FA8E0(c); // 801FB670
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB674
  c->r[3]=0u+0x00000000u; // 801FB678
  c->lr=c->r[0]; // 801FB67C
  c->r[1]=c->r[1]+0x00000010u; // 801FB680
  return; // 801FB684
}

// fn_801FB688
void f_801FB688(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB688
  c->r[0]=c->lr; // 801FB68C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FB690
  c->r[11]=c->r[1]+0x00000030u; // 801FB694
  c->lr=0x801FB69Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FB698
  c->r[31]=c->r[1]|c->r[1]; // 801FB69C
  c->r[5]=R32(c->r[3]+0x00000004u); // 801FB6A0
  c->r[28]=c->r[3]|c->r[3]; // 801FB6A4
  c->r[29]=c->r[4]|c->r[4]; // 801FB6A8
  cmpu(c,0,c->r[5],c->r[4]); // 801FB6AC
  if (crb(c,2)) { goto L_801FB6BC; } // 801FB6B0
  c->r[3]=0u+0xFFFFF05Au; // 801FB6B4
  goto L_801FB774; // 801FB6B8
L_801FB6BC:;
  c->r[0]=0u+0x00000002u; // 801FB6BC
  c->r[30]=0u+0x803D0000u; // 801FB6C0
  W32(c->r[5]+0x00000014u,c->r[0]); // 801FB6C4
  c->r[3]=c->r[30]+0x00007404u; // 801FB6C8
  c->lr=0x801FB6D0u; f_801FA868(c); // 801FB6CC
  c->r[4]=R32(c->r[28]+0x00000004u); // 801FB6D0
  c->r[3]=c->r[30]+0x00007404u; // 801FB6D4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801FB6D8
  W32(c->r[4]+0x00000028u,c->r[0]); // 801FB6DC
  c->r[4]=R32(c->r[28]+0x00000004u); // 801FB6E0
  c->r[0]=R32(c->r[4]+0x00000018u); // 801FB6E4
  W32(c->r[4]+0x00000024u,c->r[0]); // 801FB6E8
  c->lr=0x801FB6F0u; f_801FA8E0(c); // 801FB6EC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801FB6F0
  c->r[3]=R32(c->r[28]+0x00000004u); // 801FB6F4
  c->r[12]=R32(c->r[3]+0x000000C0u); // 801FB6F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801FB6FC
  c->ctr=c->r[12]; // 801FB700
  if (true) { c->lr=0x801FB708u; dispatch(c,c->ctr); } // 801FB704
  c->r[30]=c->r[3]|c->r[3]; // 801FB708
  goto L_801FB764; // 801FB70C
  c->r[4]=0u+0x80340000u; // 801FB710
  c->r[3]=0u+0x00000001u; // 801FB714
  c->r[4]=c->r[4]+0xFFFFAB90u; // 801FB718
  c->r[5]=0u+0x0000014Bu; // 801FB71C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB720
  c->lr=0x801FB728u; f_801FE6E4(c); // 801FB724
  c->r[30]=0u+0xFFFFF05Bu; // 801FB728
  goto L_801FB74C; // 801FB72C
  c->r[4]=0u+0x80340000u; // 801FB730
  c->r[3]=0u+0x00000001u; // 801FB734
  c->r[4]=c->r[4]+0xFFFFABF1u; // 801FB738
  c->r[5]=0u+0x0000014Bu; // 801FB73C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB740
  c->lr=0x801FB748u; f_801FE6E4(c); // 801FB744
  c->r[30]=0u+0xFFFFF05Fu; // 801FB748
L_801FB74C:;
  c->r[3]=c->r[31]+0x00000008u; // 801FB74C
  c->lr=0x801FB754u; f_80187EEC(c); // 801FB750
  c->r[0]=c->r[0]|0x00000000u; // 801FB754
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FB758
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 801FB75C
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FB760
L_801FB764:;
  c->r[3]=c->r[29]|c->r[29]; // 801FB764
  c->r[4]=c->r[30]|c->r[30]; // 801FB768
  c->lr=0x801FB770u; f_801FD5FC(c); // 801FB76C
  c->r[3]=0u+0x00000000u; // 801FB770
L_801FB774:;
  c->r[10]=c->r[31]|c->r[31]; // 801FB774
  c->r[11]=c->r[10]+0x00000030u; // 801FB778
  c->lr=0x801FB780u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FB77C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FB780
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FB784
  c->r[1]=c->r[10]|c->r[10]; // 801FB788
  c->lr=c->r[0]; // 801FB78C
  return; // 801FB790
}

// fn_801FB794
void f_801FB794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB794
  c->r[0]=c->lr; // 801FB798
  c->r[3]=0u+0x803D0000u; // 801FB79C
  c->r[5]=0u+0x00000000u; // 801FB7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB7A4
  c->r[3]=c->r[3]+0x00007428u; // 801FB7A8
  c->lr=0x801FB7B0u; f_801FA98C(c); // 801FB7AC
  cmps(c,0,(int32_t)c->r[3],0); // 801FB7B0
  if (crb(c,2)) { goto L_801FB7D4; } // 801FB7B4
  c->r[4]=0u+0x80340000u; // 801FB7B8
  c->r[3]=0u+0x00000001u; // 801FB7BC
  c->r[4]=c->r[4]+0xFFFFAD58u; // 801FB7C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB7C4
  c->lr=0x801FB7CCu; f_801FE6E4(c); // 801FB7C8
  c->r[3]=0u+0xFFFFF05Fu; // 801FB7CC
  goto L_801FB7D8; // 801FB7D0
L_801FB7D4:;
  c->r[3]=0u+0x00000000u; // 801FB7D4
L_801FB7D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB7D8
  c->lr=c->r[0]; // 801FB7DC
  c->r[1]=c->r[1]+0x00000010u; // 801FB7E0
  return; // 801FB7E4
}

// fn_801FB7E8
void f_801FB7E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB7E8
  c->r[0]=c->lr; // 801FB7EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FB7F0
  c->r[11]=c->r[1]+0x00000030u; // 801FB7F4
  c->lr=0x801FB7FCu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FB7F8
  c->r[31]=c->r[1]|c->r[1]; // 801FB7FC
  c->r[6]=0u+0x803D0000u; // 801FB800
  c->r[28]=c->r[3]|c->r[3]; // 801FB804
  c->r[29]=c->r[4]|c->r[4]; // 801FB808
  c->r[30]=c->r[5]|c->r[5]; // 801FB80C
  c->r[3]=c->r[6]+0x000073E0u; // 801FB810
  c->lr=0x801FB818u; f_801FA868(c); // 801FB814
  cmps(c,0,(int32_t)c->r[29],0); // 801FB818
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801FB81C
  if (!crb(c,2)) { goto L_801FB82C; } // 801FB820
  c->r[30]=0u+0xFFFFF05Eu; // 801FB824
  goto L_801FB91C; // 801FB828
L_801FB82C:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801FB82C
  cmps(c,0,(int32_t)c->r[3],0); // 801FB830
  if (crb(c,2)) { goto L_801FB84C; } // 801FB834
  c->r[0]=R32(c->r[3]+0x00000014u); // 801FB838
  cmps(c,0,(int32_t)c->r[0],3); // 801FB83C
  if (crb(c,2)) { goto L_801FB84C; } // 801FB840
  c->r[30]=0u+0xFFFFF058u; // 801FB844
  goto L_801FB91C; // 801FB848
L_801FB84C:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801FB84C
  c->r[3]=c->r[29]|c->r[29]; // 801FB850
  c->r[5]=c->r[30]|c->r[30]; // 801FB854
  c->r[0]=c->r[4]+0x00000001u; // 801FB858
  W32(c->r[28]+0x00000000u,c->r[0]); // 801FB85C
  c->r[12]=R32(c->r[29]+0x000000C0u); // 801FB860
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801FB864
  c->ctr=c->r[12]; // 801FB868
  if (true) { c->lr=0x801FB870u; dispatch(c,c->ctr); } // 801FB86C
  cmps(c,0,(int32_t)c->r[3],0); // 801FB870
  c->r[30]=c->r[3]|c->r[3]; // 801FB874
  if (crb(c,0)) { goto L_801FB8BC; } // 801FB878
  c->r[3]=c->r[28]|c->r[28]; // 801FB87C
  c->lr=0x801FB884u; f_801FB94C(c); // 801FB880
  W32(c->r[28]+0x00000004u,c->r[29]); // 801FB884
  c->r[3]=c->r[28]|c->r[28]; // 801FB888
  c->r[4]=c->r[29]|c->r[29]; // 801FB88C
  c->lr=0x801FB894u; f_801FB794(c); // 801FB890
  cmps(c,0,(int32_t)c->r[3],0); // 801FB894
  c->r[30]=c->r[3]|c->r[3]; // 801FB898
  if (!crb(c,0)) { goto L_801FB8B0; } // 801FB89C
  c->r[3]=c->r[29]|c->r[29]; // 801FB8A0
  c->r[4]=c->r[30]|c->r[30]; // 801FB8A4
  c->lr=0x801FB8ACu; f_801FD5FC(c); // 801FB8A8
  goto L_801FB91C; // 801FB8AC
L_801FB8B0:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801FB8B0
  c->r[30]=R32(c->r[3]+0x00000004u); // 801FB8B4
  goto L_801FB91C; // 801FB8B8
L_801FB8BC:;
  c->r[3]=c->r[28]|c->r[28]; // 801FB8BC
  c->lr=0x801FB8C4u; f_801FB94C(c); // 801FB8C0
  goto L_801FB91C; // 801FB8C4
  c->r[4]=0u+0x80340000u; // 801FB8C8
  c->r[3]=0u+0x00000001u; // 801FB8CC
  c->r[4]=c->r[4]+0xFFFFAB90u; // 801FB8D0
  c->r[5]=0u+0x00000181u; // 801FB8D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB8D8
  c->lr=0x801FB8E0u; f_801FE6E4(c); // 801FB8DC
  c->r[30]=0u+0xFFFFF05Bu; // 801FB8E0
  goto L_801FB904; // 801FB8E4
  c->r[4]=0u+0x80340000u; // 801FB8E8
  c->r[3]=0u+0x00000001u; // 801FB8EC
  c->r[4]=c->r[4]+0xFFFFABF1u; // 801FB8F0
  c->r[5]=0u+0x00000181u; // 801FB8F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB8F8
  c->lr=0x801FB900u; f_801FE6E4(c); // 801FB8FC
  c->r[30]=0u+0xFFFFF05Fu; // 801FB900
L_801FB904:;
  c->r[3]=c->r[31]+0x00000008u; // 801FB904
  c->lr=0x801FB90Cu; f_80187EEC(c); // 801FB908
  c->r[0]=c->r[0]|0x00000000u; // 801FB90C
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FB910
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 801FB914
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FB918
L_801FB91C:;
  c->r[3]=0u+0x803D0000u; // 801FB91C
  c->r[3]=c->r[3]+0x000073E0u; // 801FB920
  c->lr=0x801FB928u; f_801FA8E0(c); // 801FB924
  c->r[10]=c->r[31]|c->r[31]; // 801FB928
  c->r[3]=c->r[30]|c->r[30]; // 801FB92C
  c->r[11]=c->r[10]+0x00000030u; // 801FB930
  c->lr=0x801FB938u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FB934
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FB938
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FB93C
  c->r[1]=c->r[10]|c->r[10]; // 801FB940
  c->lr=c->r[0]; // 801FB944
  return; // 801FB948
}

// fn_801FB94C
void f_801FB94C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB94C
  c->r[0]=c->lr; // 801FB950
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB958
  c->r[31]=c->r[3]|c->r[3]; // 801FB95C
  c->r[0]=R32(c->r[3]+0x000000B0u); // 801FB960
  cmps(c,0,(int32_t)c->r[0],0); // 801FB964
  if (crb(c,2)) { goto L_801FB97C; } // 801FB968
  c->r[3]=c->r[0]|c->r[0]; // 801FB96C
  c->lr=0x801FB974u; f_80202098(c); // 801FB970
  c->r[0]=0u+0x00000000u; // 801FB974
  W32(c->r[31]+0x000000B0u,c->r[0]); // 801FB978
L_801FB97C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB97C
  c->r[3]=0u+0x00000000u; // 801FB980
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB984
  c->lr=c->r[0]; // 801FB988
  c->r[1]=c->r[1]+0x00000010u; // 801FB98C
  return; // 801FB990
}

// fn_801FB994
void f_801FB994(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB994
  c->r[0]=c->lr; // 801FB998
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB99C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB9A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB9A4
  c->r[30]=c->r[3]|c->r[3]; // 801FB9A8
  c->lr=0x801FB9B0u; f_801FBAC0(c); // 801FB9AC
  c->r[3]=c->r[30]|c->r[30]; // 801FB9B0
  c->lr=0x801FB9B8u; f_801FC448(c); // 801FB9B4
  c->r[0]=R8(c->r[30]+0x00000198u); // 801FB9B8
  cmps(c,0,(int32_t)c->r[0],0); // 801FB9BC
  if (crb(c,2)) { goto L_801FBA38; } // 801FB9C0
  c->r[3]=c->r[30]|c->r[30]; // 801FB9C4
  c->lr=0x801FB9CCu; f_801FC5A4(c); // 801FB9C8
  cmps(c,0,(int32_t)c->r[3],0); // 801FB9CC
  c->r[31]=c->r[3]|c->r[3]; // 801FB9D0
  if (crb(c,2)) { goto L_801FB9F4; } // 801FB9D4
  c->r[4]=0u+0x80340000u; // 801FB9D8
  c->r[5]=c->r[31]|c->r[31]; // 801FB9DC
  c->r[4]=c->r[4]+0xFFFFADA2u; // 801FB9E0
  c->r[3]=0u+0x00000001u; // 801FB9E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB9E8
  c->lr=0x801FB9F0u; f_801FE6E4(c); // 801FB9EC
  goto L_801FBA84; // 801FB9F0
L_801FB9F4:;
  c->r[3]=c->r[30]+0x0000020Cu; // 801FB9F4
  c->lr=0x801FB9FCu; f_801FBAA0(c); // 801FB9F8
  c->r[0]=cntlz(c->r[3]); // 801FB9FC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801FBA00
  if (crb(c,2)) { goto L_801FBA38; } // 801FBA04
  c->r[3]=c->r[30]|c->r[30]; // 801FBA08
  c->lr=0x801FBA10u; f_801FC660(c); // 801FBA0C
  cmps(c,0,(int32_t)c->r[3],0); // 801FBA10
  c->r[31]=c->r[3]|c->r[3]; // 801FBA14
  if (crb(c,2)) { goto L_801FBA38; } // 801FBA18
  c->r[4]=0u+0x80340000u; // 801FBA1C
  c->r[5]=c->r[31]|c->r[31]; // 801FBA20
  c->r[4]=c->r[4]+0xFFFFADC4u; // 801FBA24
  c->r[3]=0u+0x00000001u; // 801FBA28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBA2C
  c->lr=0x801FBA34u; f_801FE6E4(c); // 801FBA30
  goto L_801FBA84; // 801FBA34
L_801FBA38:;
  c->r[3]=c->r[30]+0x00000190u; // 801FBA38
  c->lr=0x801FBA40u; f_801F97E0(c); // 801FBA3C
  cmps(c,0,(int32_t)c->r[3],0); // 801FBA40
  c->r[31]=c->r[3]|c->r[3]; // 801FBA44
  if (!crb(c,2)) { goto L_801FBA84; } // 801FBA48
  c->r[3]=c->r[30]|c->r[30]; // 801FBA4C
  c->lr=0x801FBA54u; f_801FCD98(c); // 801FBA50
  c->r[3]=c->r[30]|c->r[30]; // 801FBA54
  c->lr=0x801FBA5Cu; f_801FCE0C(c); // 801FBA58
  c->r[3]=c->r[30]|c->r[30]; // 801FBA5C
  c->lr=0x801FBA64u; f_801FCE80(c); // 801FBA60
  c->r[3]=c->r[30]|c->r[30]; // 801FBA64
  c->lr=0x801FBA6Cu; f_801FCCFC(c); // 801FBA68
  c->r[3]=c->r[30]|c->r[30]; // 801FBA6C
  c->lr=0x801FBA74u; f_801FCEF4(c); // 801FBA70
  c->r[3]=c->r[30]|c->r[30]; // 801FBA74
  c->lr=0x801FBA7Cu; f_801FD140(c); // 801FBA78
  c->r[3]=c->r[30]|c->r[30]; // 801FBA7C
  c->lr=0x801FBA84u; f_801FCF84(c); // 801FBA80
L_801FBA84:;
  c->r[3]=c->r[31]|c->r[31]; // 801FBA84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBA88
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FBA8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBA90
  c->lr=c->r[0]; // 801FBA94
  c->r[1]=c->r[1]+0x00000010u; // 801FBA98
  return; // 801FBA9C
}

// fn_801FBAA0
void f_801FBAA0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FBAA0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801FBAA4
  if (!crb(c,2)) { goto L_801FBAB8; } // 801FBAA8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FBAAC
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801FBAB0
  return; // 801FBAB4
L_801FBAB8:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801FBAB8
  return; // 801FBABC
}

// fn_801FBAC0
void f_801FBAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBAC0
  c->r[0]=c->lr; // 801FBAC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBAC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FBACC
  c->r[31]=c->r[3]|c->r[3]; // 801FBAD0
  c->lr=0x801FBAD8u; f_80213198(c); // 801FBAD4
  cmps(c,0,(int32_t)c->r[3],0); // 801FBAD8
  if (!crb(c,2)) { goto L_801FBAEC; } // 801FBADC
  c->r[0]=0u+0x00000001u; // 801FBAE0
  W8(c->r[31]+0x00000198u,c->r[0]); // 801FBAE4
  goto L_801FBAF4; // 801FBAE8
L_801FBAEC:;
  c->r[0]=0u+0x00000000u; // 801FBAEC
  W8(c->r[31]+0x00000198u,c->r[0]); // 801FBAF0
L_801FBAF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBAF8
  c->lr=c->r[0]; // 801FBAFC
  c->r[1]=c->r[1]+0x00000010u; // 801FBB00
  return; // 801FBB04
}

// fn_801FBB08
void f_801FBB08(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801FBB08
  cmps(c,0,(int32_t)c->r[7],0); // 801FBB0C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801FBB10
  W32(c->r[6]+0x00000000u,c->r[0]); // 801FBB14
  if (crb(c,2)) { goto L_801FBB20; } // 801FBB18
  W32(c->r[7]+0x00000000u,c->r[0]); // 801FBB1C
L_801FBB20:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FBB20
  c->r[8]=c->r[3]|c->r[3]; // 801FBB24
  c->r[9]=c->r[3]+c->r[0]; // 801FBB28
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 801FBB2C
  goto L_801FBB38; // 801FBB30
L_801FBB34:;
  c->r[8]=c->r[8]+0x00000001u; // 801FBB34
L_801FBB38:;
  cmpu(c,0,c->r[8],c->r[9]); // 801FBB38
  if (!crb(c,0)) { goto L_801FBB4C; } // 801FBB3C
  c->r[0]=R8(c->r[8]+0x00000000u); // 801FBB40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FBB44
  if (!crb(c,2)) { IRQCHK(c); goto L_801FBB34; } // 801FBB48
L_801FBB4C:;
  cmpu(c,0,c->r[8],c->r[9]); // 801FBB4C
  if (crb(c,2)) { goto L_801FBB60; } // 801FBB50
  c->r[0]=R8(c->r[8]+0x00000001u); // 801FBB54
  cmps(c,0,(int32_t)c->r[0],61); // 801FBB58
  if (crb(c,2)) { goto L_801FBB68; } // 801FBB5C
L_801FBB60:;
  c->r[3]=0u+0x00000000u; // 801FBB60
  return; // 801FBB64
L_801FBB68:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 801FBB68
  c->r[8]=c->r[8]+0x00000002u; // 801FBB6C
  c->r[3]=c->r[8]|c->r[8]; // 801FBB70
  goto L_801FBB7C; // 801FBB74
L_801FBB78:;
  c->r[8]=c->r[8]+0x00000001u; // 801FBB78
L_801FBB7C:;
  cmpu(c,0,c->r[8],c->r[9]); // 801FBB7C
  if (!crb(c,0)) { goto L_801FBB90; } // 801FBB80
  c->r[0]=R8(c->r[8]+0x00000000u); // 801FBB84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FBB88
  if (!crb(c,2)) { IRQCHK(c); goto L_801FBB78; } // 801FBB8C
L_801FBB90:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801FBB90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FBB94
  if (crb(c,2)) { goto L_801FBBAC; } // 801FBB98
  c->r[0]=0u+0x00000000u; // 801FBB9C
  c->r[3]=0u+0x00000000u; // 801FBBA0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801FBBA4
  return; // 801FBBA8
L_801FBBAC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801FBBAC
  W32(c->r[6]+0x00000000u,c->r[3]); // 801FBBB0
  if (crb(c,2)) { goto L_801FBBC4; } // 801FBBB4
  c->r[0]=c->r[8]+0x00000001u; // 801FBBB8
  c->r[0]=c->r[0]-c->r[3]; // 801FBBBC
  W32(c->r[7]+0x00000000u,c->r[0]); // 801FBBC0
L_801FBBC4:;
  c->r[3]=c->r[8]+0x00000001u; // 801FBBC4
  c->r[5]=c->r[9]-c->r[3]; // 801FBBC8
  c->r[0]=c->r[5]+0x00000001u; // 801FBBCC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801FBBD0
  return; // 801FBBD4
}

// fn_801FBBD8
void f_801FBBD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBBD8
  c->r[0]=c->lr; // 801FBBDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FBBE0
  c->r[11]=c->r[1]+0x00000030u; // 801FBBE4
  c->lr=0x801FBBECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FBBE8
  c->r[30]=0u+0x80340000u; // 801FBBEC
  c->r[29]=c->r[3]|c->r[3]; // 801FBBF0
  c->r[30]=c->r[30]+0xFFFFAB38u; // 801FBBF4
  c->r[31]=0u+0x00000000u; // 801FBBF8
  c->r[3]=c->r[3]+0x000000C8u; // 801FBBFC
  c->lr=0x801FBC04u; f_801FB0B8(c); // 801FBC00
  c->r[3]=c->r[29]+0x000000D4u; // 801FBC04
  c->lr=0x801FBC0Cu; f_801FBDD8(c); // 801FBC08
  c->r[3]=c->r[29]+0x000000E0u; // 801FBC0C
  c->lr=0x801FBC14u; f_801FBDD8(c); // 801FBC10
  c->r[3]=c->r[29]+0x000000ECu; // 801FBC14
  c->lr=0x801FBC1Cu; f_801FBDD8(c); // 801FBC18
  c->r[3]=c->r[29]+0x000000C8u; // 801FBC1C
  c->lr=0x801FBC24u; f_801FBAA0(c); // 801FBC20
  c->r[0]=cntlz(c->r[3]); // 801FBC24
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801FBC28
  if (!crb(c,2)) { goto L_801FBCD0; } // 801FBC2C
  c->r[3]=c->r[1]+0x00000014u; // 801FBC30
  c->r[4]=c->r[30]+0x000002B0u; // 801FBC34
  c->r[5]=c->r[29]+0x000000C8u; // 801FBC38
  c->lr=0x801FBC40u; f_801FBCEC(c); // 801FBC3C
  c->r[3]=c->r[29]+0x000000D4u; // 801FBC40
  c->r[4]=c->r[1]+0x00000014u; // 801FBC44
  c->lr=0x801FBC4Cu; f_801FBE10(c); // 801FBC48
  c->r[3]=c->r[1]+0x00000014u; // 801FBC4C
  c->r[4]=0u+0xFFFFFFFFu; // 801FBC50
  c->lr=0x801FBC58u; f_801FD984(c); // 801FBC54
  c->r[3]=c->r[29]+0x000000C8u; // 801FBC58
  c->lr=0x801FBC60u; f_801FBAA0(c); // 801FBC5C
  c->r[31]=c->r[3]|c->r[3]; // 801FBC60
  c->r[3]=c->r[29]+0x000000C8u; // 801FBC64
  c->lr=0x801FBC6Cu; f_801FACC0(c); // 801FBC68
  c->r[4]=c->r[31]|c->r[31]; // 801FBC6C
  c->r[5]=c->r[29]+0x000000E0u; // 801FBC70
  c->lr=0x801FBC78u; f_80209B90(c); // 801FBC74
  cmps(c,0,(int32_t)c->r[3],0); // 801FBC78
  c->r[31]=c->r[3]|c->r[3]; // 801FBC7C
  if (!crb(c,2)) { goto L_801FBCB0; } // 801FBC80
  c->r[3]=c->r[1]+0x00000008u; // 801FBC84
  c->r[4]=c->r[30]+0x000002B4u; // 801FBC88
  c->r[5]=c->r[29]+0x000000E0u; // 801FBC8C
  c->lr=0x801FBC94u; f_801FBCEC(c); // 801FBC90
  c->r[3]=c->r[29]+0x000000ECu; // 801FBC94
  c->r[4]=c->r[1]+0x00000008u; // 801FBC98
  c->lr=0x801FBCA0u; f_801FBE10(c); // 801FBC9C
  c->r[3]=c->r[1]+0x00000008u; // 801FBCA0
  c->r[4]=0u+0xFFFFFFFFu; // 801FBCA4
  c->lr=0x801FBCACu; f_801FD984(c); // 801FBCA8
  goto L_801FBCD0; // 801FBCAC
L_801FBCB0:;
  c->r[4]=c->r[30]+0x000002B8u; // 801FBCB0
  c->r[31]=0u+0xFFFFF05Fu; // 801FBCB4
  c->r[3]=0u+0x00000001u; // 801FBCB8
  c->r[5]=0u+0xFFFFF05Fu; // 801FBCBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBCC0
  c->lr=0x801FBCC8u; f_801FE6E4(c); // 801FBCC4
  c->r[3]=c->r[29]+0x000000E0u; // 801FBCC8
  c->lr=0x801FBCD0u; f_801FBDD8(c); // 801FBCCC
L_801FBCD0:;
  c->r[11]=c->r[1]+0x00000030u; // 801FBCD0
  c->r[3]=c->r[31]|c->r[31]; // 801FBCD4
  c->lr=0x801FBCDCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FBCD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FBCDC
  c->lr=c->r[0]; // 801FBCE0
  c->r[1]=c->r[1]+0x00000030u; // 801FBCE4
  return; // 801FBCE8
}

// fn_801FBCEC
void f_801FBCEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBCEC
  c->r[0]=c->lr; // 801FBCF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FBCF4
  c->r[11]=c->r[1]+0x00000030u; // 801FBCF8
  c->lr=0x801FBD00u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FBCFC
  c->r[28]=c->r[3]|c->r[3]; // 801FBD00
  c->r[31]=c->r[4]|c->r[4]; // 801FBD04
  c->r[30]=c->r[5]|c->r[5]; // 801FBD08
  c->lr=0x801FBD10u; f_801FAF28(c); // 801FBD0C
  c->r[3]=c->r[31]|c->r[31]; // 801FBD10
  c->lr=0x801FBD18u; f_80185588(c); // 801FBD14
  c->r[29]=c->r[3]|c->r[3]; // 801FBD18
  c->r[3]=c->r[30]|c->r[30]; // 801FBD1C
  c->r[4]=c->r[1]+0x0000000Cu; // 801FBD20
  c->r[5]=c->r[1]+0x00000010u; // 801FBD24
  c->lr=0x801FBD2Cu; f_801FBDA0(c); // 801FBD28
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FBD2C
  c->r[3]=c->r[28]|c->r[28]; // 801FBD30
  c->r[4]=c->r[29]+c->r[0]; // 801FBD34
  c->lr=0x801FBD3Cu; f_801FDA1C(c); // 801FBD38
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801FBD3C
  c->r[6]=c->r[31]|c->r[31]; // 801FBD40
  c->r[7]=c->r[31]+c->r[29]; // 801FBD44
  c->r[30]=R32(c->r[1]+0x00000010u); // 801FBD48
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801FBD4C
  c->r[3]=c->r[28]|c->r[28]; // 801FBD50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBD54
  c->r[8]=c->r[1]+0x0000000Au; // 801FBD58
  c->r[4]=0u+0x00000000u; // 801FBD5C
  c->r[5]=0u+0x00000000u; // 801FBD60
  c->lr=0x801FBD68u; f_801FDDF4(c); // 801FBD64
  c->r[0]=R8(c->r[1]+0x00000009u); // 801FBD68
  c->r[4]=c->r[29]|c->r[29]; // 801FBD6C
  c->r[6]=c->r[31]|c->r[31]; // 801FBD70
  c->r[7]=c->r[31]+c->r[30]; // 801FBD74
  W8(c->r[1]+0x00000008u,c->r[0]); // 801FBD78
  c->r[8]=c->r[1]+0x00000008u; // 801FBD7C
  c->r[5]=0u+0x00000000u; // 801FBD80
  c->lr=0x801FBD88u; f_801FDDF4(c); // 801FBD84
  c->r[11]=c->r[1]+0x00000030u; // 801FBD88
  c->lr=0x801FBD90u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FBD8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FBD90
  c->lr=c->r[0]; // 801FBD94
  c->r[1]=c->r[1]+0x00000030u; // 801FBD98
  return; // 801FBD9C
}

// fn_801FBDA0
void f_801FBDA0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FBDA0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801FBDA4
  if (!crb(c,2)) { goto L_801FBDC4; } // 801FBDA8
  c->r[6]=c->r[3]+0x00000001u; // 801FBDAC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FBDB0
  W32(c->r[4]+0x00000000u,c->r[6]); // 801FBDB4
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 801FBDB8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801FBDBC
  return; // 801FBDC0
L_801FBDC4:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 801FBDC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801FBDC8
  W32(c->r[4]+0x00000000u,c->r[6]); // 801FBDCC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801FBDD0
  return; // 801FBDD4
}

// fn_801FBDD8
void f_801FBDD8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FBDD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801FBDDC
  if (!crb(c,2)) { goto L_801FBDFC; } // 801FBDE0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FBDE4
  c->r[4]=0u+0x00000000u; // 801FBDE8
  W8(c->r[3]+0x00000001u,c->r[4]); // 801FBDEC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF80u; // 801FBDF0
  W8(c->r[3]+0x00000000u,c->r[0]); // 801FBDF4
  return; // 801FBDF8
L_801FBDFC:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 801FBDFC
  c->r[0]=0u+0x00000000u; // 801FBE00
  W8(c->r[4]+0x00000000u,c->r[0]); // 801FBE04
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FBE08
  return; // 801FBE0C
}

// fn_801FBE10
void f_801FBE10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBE10
  c->r[0]=c->lr; // 801FBE14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FBE18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FBE1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FBE20
  c->r[30]=c->r[3]|c->r[3]; // 801FBE24
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FBE28
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 801FBE2C
  if (!crb(c,2)) { goto L_801FBE58; } // 801FBE30
  c->r[6]=R32(c->r[4]+0x00000000u); // 801FBE34
  c->r[0]=rotl(c->r[6],1)&0x00000001u; cr0(c,c->r[0]); // 801FBE38
  if (!crb(c,2)) { goto L_801FBE58; } // 801FBE3C
  c->r[5]=R32(c->r[4]+0x00000004u); // 801FBE40
  c->r[0]=R32(c->r[4]+0x00000008u); // 801FBE44
  W32(c->r[3]+0x00000000u,c->r[6]); // 801FBE48
  W32(c->r[3]+0x00000004u,c->r[5]); // 801FBE4C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801FBE50
  goto L_801FBEAC; // 801FBE54
L_801FBE58:;
  cmps(c,0,(int32_t)c->r[5],0); // 801FBE58
  if (crb(c,2)) { goto L_801FBE68; } // 801FBE5C
  c->r[31]=R32(c->r[3]+0x00000004u); // 801FBE60
  goto L_801FBE70; // 801FBE64
L_801FBE68:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FBE68
  c->r[31]=rotl(c->r[0],0)&0x0000007Fu; // 801FBE6C
L_801FBE70:;
  c->r[3]=c->r[4]|c->r[4]; // 801FBE70
  c->r[4]=c->r[1]+0x00000010u; // 801FBE74
  c->r[5]=c->r[1]+0x0000000Cu; // 801FBE78
  c->lr=0x801FBE80u; f_801FBDA0(c); // 801FBE7C
  c->r[4]=R8(c->r[1]+0x00000008u); // 801FBE80
  c->r[3]=c->r[30]|c->r[30]; // 801FBE84
  c->r[6]=R32(c->r[1]+0x00000010u); // 801FBE88
  c->r[5]=c->r[31]|c->r[31]; // 801FBE8C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801FBE90
  c->r[8]=c->r[1]+0x00000009u; // 801FBE94
  W8(c->r[1]+0x00000009u,c->r[4]); // 801FBE98
  c->r[4]=0u+0x00000000u; // 801FBE9C
  c->r[7]=c->r[6]+c->r[0]; // 801FBEA0
  c->lr=0x801FBEA8u; f_801FDDF4(c); // 801FBEA4
  c->r[30]=c->r[3]|c->r[3]; // 801FBEA8
L_801FBEAC:;
  c->r[3]=c->r[30]|c->r[30]; // 801FBEAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FBEB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FBEB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FBEB8
  c->lr=c->r[0]; // 801FBEBC
  c->r[1]=c->r[1]+0x00000020u; // 801FBEC0
  return; // 801FBEC4
}

// fn_801FBEC8
void f_801FBEC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBEC8
  c->r[0]=c->lr; // 801FBECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FBED4
  c->r[31]=c->r[3]|c->r[3]; // 801FBED8
  c->r[3]=c->r[4]|c->r[4]; // 801FBEDC
  c->lr=0x801FBEE4u; f_801FACC0(c); // 801FBEE0
  c->r[4]=c->r[3]|c->r[3]; // 801FBEE4
  c->r[3]=c->r[31]|c->r[31]; // 801FBEE8
  c->lr=0x801FBEF0u; f_801FBBD8(c); // 801FBEEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBEF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBEF4
  c->lr=c->r[0]; // 801FBEF8
  c->r[1]=c->r[1]+0x00000010u; // 801FBEFC
  return; // 801FBF00
}

// fn_801FBF04
void f_801FBF04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBF04
  c->r[0]=c->lr; // 801FBF08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FBF0C
  c->r[11]=c->r[1]+0x00000020u; // 801FBF10
  c->lr=0x801FBF18u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FBF14
  c->r[31]=0u+0x80340000u; // 801FBF18
  c->r[28]=c->r[4]|c->r[4]; // 801FBF1C
  c->r[31]=c->r[31]+0xFFFFAB38u; // 801FBF20
  c->r[27]=c->r[3]|c->r[3]; // 801FBF24
  c->r[29]=c->r[5]|c->r[5]; // 801FBF28
  c->r[3]=c->r[28]|c->r[28]; // 801FBF2C
  c->r[4]=c->r[31]+0x000002DAu; // 801FBF30
  c->r[30]=0u+0x00000000u; // 801FBF34
  c->lr=0x801FBF3Cu; f_80190160(c); // 801FBF38
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF3C
  if (!crb(c,2)) { goto L_801FBF54; } // 801FBF40
  c->r[4]=c->r[29]|c->r[29]; // 801FBF44
  c->r[3]=c->r[27]+0x000000BCu; // 801FBF48
  c->lr=0x801FBF50u; f_801FB0B8(c); // 801FBF4C
  goto L_801FC130; // 801FBF50
L_801FBF54:;
  c->r[3]=c->r[28]|c->r[28]; // 801FBF54
  c->r[4]=c->r[31]+0x000002E4u; // 801FBF58
  c->lr=0x801FBF60u; f_80190160(c); // 801FBF5C
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF60
  if (!crb(c,2)) { goto L_801FBF7C; } // 801FBF64
  c->r[3]=c->r[27]|c->r[27]; // 801FBF68
  c->r[4]=c->r[29]|c->r[29]; // 801FBF6C
  c->lr=0x801FBF74u; f_801FBBD8(c); // 801FBF70
  c->r[30]=c->r[3]|c->r[3]; // 801FBF74
  goto L_801FC130; // 801FBF78
L_801FBF7C:;
  c->r[3]=c->r[28]|c->r[28]; // 801FBF7C
  c->r[4]=c->r[31]+0x000002F0u; // 801FBF80
  c->lr=0x801FBF88u; f_80190160(c); // 801FBF84
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF88
  if (!crb(c,2)) { goto L_801FBFA0; } // 801FBF8C
  c->r[4]=c->r[29]|c->r[29]; // 801FBF90
  c->r[3]=c->r[27]+0x0000011Cu; // 801FBF94
  c->lr=0x801FBF9Cu; f_801FB0B8(c); // 801FBF98
  goto L_801FC130; // 801FBF9C
L_801FBFA0:;
  c->r[3]=c->r[28]|c->r[28]; // 801FBFA0
  c->r[4]=c->r[31]+0x000002F8u; // 801FBFA4
  c->lr=0x801FBFACu; f_80190160(c); // 801FBFA8
  cmps(c,0,(int32_t)c->r[3],0); // 801FBFAC
  if (!crb(c,2)) { goto L_801FBFC4; } // 801FBFB0
  c->r[4]=c->r[29]|c->r[29]; // 801FBFB4
  c->r[3]=c->r[27]+0x00000128u; // 801FBFB8
  c->lr=0x801FBFC0u; f_801FB0B8(c); // 801FBFBC
  goto L_801FC130; // 801FBFC0
L_801FBFC4:;
  c->r[3]=c->r[28]|c->r[28]; // 801FBFC4
  c->r[4]=c->r[31]+0x00000307u; // 801FBFC8
  c->lr=0x801FBFD0u; f_80190160(c); // 801FBFCC
  cmps(c,0,(int32_t)c->r[3],0); // 801FBFD0
  if (!crb(c,2)) { goto L_801FBFE8; } // 801FBFD4
  c->r[4]=c->r[29]|c->r[29]; // 801FBFD8
  c->r[3]=c->r[27]+0x00000134u; // 801FBFDC
  c->lr=0x801FBFE4u; f_801FB0B8(c); // 801FBFE0
  goto L_801FC130; // 801FBFE4
L_801FBFE8:;
  c->r[3]=c->r[28]|c->r[28]; // 801FBFE8
  c->r[4]=c->r[31]+0x00000319u; // 801FBFEC
  c->lr=0x801FBFF4u; f_80190160(c); // 801FBFF0
  cmps(c,0,(int32_t)c->r[3],0); // 801FBFF4
  if (!crb(c,2)) { goto L_801FC018; } // 801FBFF8
  c->r[3]=c->r[29]|c->r[29]; // 801FBFFC
  c->r[4]=0u+0x00000000u; // 801FC000
  c->r[5]=0u+0x0000000Au; // 801FC004
  c->lr=0x801FC00Cu; f_8019236C(c); // 801FC008
  W32(c->r[27]+0x0000016Cu,c->r[4]); // 801FC00C
  W32(c->r[27]+0x00000168u,c->r[3]); // 801FC010
  goto L_801FC130; // 801FC014
L_801FC018:;
  c->r[3]=c->r[28]|c->r[28]; // 801FC018
  c->r[4]=c->r[31]+0x0000032Cu; // 801FC01C
  c->lr=0x801FC024u; f_80190160(c); // 801FC020
  cmps(c,0,(int32_t)c->r[3],0); // 801FC024
  if (!crb(c,2)) { goto L_801FC048; } // 801FC028
  c->r[0]=R8(c->r[29]+0x00000000u); // 801FC02C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FC030
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 801FC034
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FC038
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801FC03C
  W8(c->r[27]+0x00000170u,c->r[0]); // 801FC040
  goto L_801FC130; // 801FC044
L_801FC048:;
  c->r[3]=c->r[28]|c->r[28]; // 801FC048
  c->r[4]=c->r[31]+0x0000033Du; // 801FC04C
  c->lr=0x801FC054u; f_80190160(c); // 801FC050
  cmps(c,0,(int32_t)c->r[3],0); // 801FC054
  if (!crb(c,2)) { goto L_801FC078; } // 801FC058
  c->r[0]=R8(c->r[29]+0x00000000u); // 801FC05C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FC060
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 801FC064
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FC068
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801FC06C
  W8(c->r[27]+0x00000171u,c->r[0]); // 801FC070
  goto L_801FC130; // 801FC074
L_801FC078:;
  c->r[3]=c->r[28]|c->r[28]; // 801FC078
  c->r[4]=c->r[31]+0x00000357u; // 801FC07C
  c->lr=0x801FC084u; f_80190160(c); // 801FC080
  cmps(c,0,(int32_t)c->r[3],0); // 801FC084
  if (!crb(c,2)) { goto L_801FC09C; } // 801FC088
  c->r[4]=c->r[29]|c->r[29]; // 801FC08C
  c->r[3]=c->r[27]+0x00000110u; // 801FC090
  c->lr=0x801FC098u; f_801FB0B8(c); // 801FC094
  goto L_801FC130; // 801FC098
L_801FC09C:;
  c->r[3]=c->r[28]|c->r[28]; // 801FC09C
  c->r[4]=c->r[31]+0x00000364u; // 801FC0A0
  c->lr=0x801FC0A8u; f_80190160(c); // 801FC0A4
  cmps(c,0,(int32_t)c->r[3],0); // 801FC0A8
  if (!crb(c,2)) { goto L_801FC0CC; } // 801FC0AC
  c->r[3]=c->r[29]|c->r[29]; // 801FC0B0
  c->r[4]=0u+0x00000000u; // 801FC0B4
  c->r[5]=0u+0x0000000Au; // 801FC0B8
  c->lr=0x801FC0C0u; f_8019236C(c); // 801FC0BC
  W32(c->r[27]+0x00000154u,c->r[4]); // 801FC0C0
  W32(c->r[27]+0x00000150u,c->r[3]); // 801FC0C4
  goto L_801FC130; // 801FC0C8
L_801FC0CC:;
  c->r[3]=c->r[28]|c->r[28]; // 801FC0CC
  c->r[4]=c->r[31]+0x00000372u; // 801FC0D0
  c->lr=0x801FC0D8u; f_80190160(c); // 801FC0D4
  cmps(c,0,(int32_t)c->r[3],0); // 801FC0D8
  if (!crb(c,2)) { goto L_801FC0FC; } // 801FC0DC
  c->r[3]=c->r[29]|c->r[29]; // 801FC0E0
  c->r[4]=0u+0x00000000u; // 801FC0E4
  c->r[5]=0u+0x0000000Au; // 801FC0E8
  c->lr=0x801FC0F0u; f_8019236C(c); // 801FC0EC
  W32(c->r[27]+0x0000015Cu,c->r[4]); // 801FC0F0
  W32(c->r[27]+0x00000158u,c->r[3]); // 801FC0F4
  goto L_801FC130; // 801FC0F8
L_801FC0FC:;
  c->r[3]=c->r[28]|c->r[28]; // 801FC0FC
  c->r[4]=c->r[31]+0x00000380u; // 801FC100
  c->lr=0x801FC108u; f_80190160(c); // 801FC104
  cmps(c,0,(int32_t)c->r[3],0); // 801FC108
  if (!crb(c,2)) { goto L_801FC12C; } // 801FC10C
  c->r[3]=c->r[29]|c->r[29]; // 801FC110
  c->r[4]=0u+0x00000000u; // 801FC114
  c->r[5]=0u+0x0000000Au; // 801FC118
  c->lr=0x801FC120u; f_8019236C(c); // 801FC11C
  W32(c->r[27]+0x00000164u,c->r[4]); // 801FC120
  W32(c->r[27]+0x00000160u,c->r[3]); // 801FC124
  goto L_801FC130; // 801FC128
L_801FC12C:;
  c->r[30]=0u+0xFFFFF05Au; // 801FC12C
L_801FC130:;
  c->r[11]=c->r[1]+0x00000020u; // 801FC130
  c->r[3]=c->r[30]|c->r[30]; // 801FC134
  c->lr=0x801FC13Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FC138
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FC13C
  c->lr=c->r[0]; // 801FC140
  c->r[1]=c->r[1]+0x00000020u; // 801FC144
  return; // 801FC148
}

// fn_801FC14C
void f_801FC14C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC14C
  c->r[0]=c->lr; // 801FC150
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FC154
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801FC158
  c->r[31]=0u+0x80340000u; // 801FC15C
  c->r[31]=c->r[31]+0xFFFFAB38u; // 801FC160
  W32(c->r[1]+0x00000028u,c->r[30]); // 801FC164
  c->r[30]=c->r[3]|c->r[3]; // 801FC168
  c->r[3]=c->r[1]+0x00000014u; // 801FC16C
  c->lr=0x801FC174u; f_801FAF28(c); // 801FC170
  c->r[3]=c->r[1]+0x00000014u; // 801FC174
  c->r[4]=c->r[31]+0x00000389u; // 801FC178
  c->lr=0x801FC180u; f_80208974(c); // 801FC17C
  c->r[4]=0u+0x00000000u; // 801FC180
  c->lr=0x801FC188u; f_802089E4(c); // 801FC184
  c->r[4]=c->r[31]+0x00000394u; // 801FC188
  c->lr=0x801FC190u; f_80208974(c); // 801FC18C
  c->r[4]=c->r[31]+0x00000396u; // 801FC190
  c->lr=0x801FC198u; f_80208974(c); // 801FC194
  c->r[4]=0u+0x00000000u; // 801FC198
  c->lr=0x801FC1A0u; f_802089E4(c); // 801FC19C
  c->r[4]=c->r[31]+0x000002DAu; // 801FC1A0
  c->lr=0x801FC1A8u; f_80208974(c); // 801FC1A4
  c->r[4]=0u+0x00000000u; // 801FC1A8
  c->lr=0x801FC1B0u; f_802089E4(c); // 801FC1AC
  c->r[4]=c->r[31]+0x00000394u; // 801FC1B0
  c->lr=0x801FC1B8u; f_80208974(c); // 801FC1B4
  c->r[4]=c->r[30]+0x000000BCu; // 801FC1B8
  c->lr=0x801FC1C0u; f_80208944(c); // 801FC1BC
  c->r[4]=0u+0x00000000u; // 801FC1C0
  c->lr=0x801FC1C8u; f_802089E4(c); // 801FC1C4
  c->r[4]=c->r[31]+0x000002E4u; // 801FC1C8
  c->lr=0x801FC1D0u; f_80208974(c); // 801FC1CC
  c->r[4]=0u+0x00000000u; // 801FC1D0
  c->lr=0x801FC1D8u; f_802089E4(c); // 801FC1D4
  c->r[4]=c->r[31]+0x00000394u; // 801FC1D8
  c->lr=0x801FC1E0u; f_80208974(c); // 801FC1DC
  c->r[4]=c->r[30]+0x000000C8u; // 801FC1E0
  c->lr=0x801FC1E8u; f_80208944(c); // 801FC1E4
  c->r[4]=0u+0x00000000u; // 801FC1E8
  c->lr=0x801FC1F0u; f_802089E4(c); // 801FC1EC
  c->r[4]=c->r[31]+0x000002F0u; // 801FC1F0
  c->lr=0x801FC1F8u; f_80208974(c); // 801FC1F4
  c->r[4]=0u+0x00000000u; // 801FC1F8
  c->lr=0x801FC200u; f_802089E4(c); // 801FC1FC
  c->r[4]=c->r[31]+0x00000394u; // 801FC200
  c->lr=0x801FC208u; f_80208974(c); // 801FC204
  c->r[4]=c->r[30]+0x0000011Cu; // 801FC208
  c->lr=0x801FC210u; f_80208944(c); // 801FC20C
  c->r[4]=0u+0x00000000u; // 801FC210
  c->lr=0x801FC218u; f_802089E4(c); // 801FC214
  c->r[4]=c->r[31]+0x000002F8u; // 801FC218
  c->lr=0x801FC220u; f_80208974(c); // 801FC21C
  c->r[4]=0u+0x00000000u; // 801FC220
  c->lr=0x801FC228u; f_802089E4(c); // 801FC224
  c->r[4]=c->r[31]+0x00000394u; // 801FC228
  c->lr=0x801FC230u; f_80208974(c); // 801FC22C
  c->r[4]=c->r[30]+0x00000128u; // 801FC230
  c->lr=0x801FC238u; f_80208944(c); // 801FC234
  c->r[4]=0u+0x00000000u; // 801FC238
  c->lr=0x801FC240u; f_802089E4(c); // 801FC23C
  c->r[4]=c->r[31]+0x00000307u; // 801FC240
  c->lr=0x801FC248u; f_80208974(c); // 801FC244
  c->r[4]=0u+0x00000000u; // 801FC248
  c->lr=0x801FC250u; f_802089E4(c); // 801FC24C
  c->r[4]=c->r[31]+0x00000394u; // 801FC250
  c->lr=0x801FC258u; f_80208974(c); // 801FC254
  c->r[4]=c->r[30]+0x00000134u; // 801FC258
  c->lr=0x801FC260u; f_80208944(c); // 801FC25C
  c->r[4]=0u+0x00000000u; // 801FC260
  c->lr=0x801FC268u; f_802089E4(c); // 801FC264
  c->r[4]=c->r[31]+0x00000319u; // 801FC268
  c->lr=0x801FC270u; f_80208974(c); // 801FC26C
  c->r[4]=0u+0x00000000u; // 801FC270
  c->lr=0x801FC278u; f_802089E4(c); // 801FC274
  c->r[4]=c->r[31]+0x00000394u; // 801FC278
  c->lr=0x801FC280u; f_80208974(c); // 801FC27C
  c->r[5]=R32(c->r[30]+0x00000168u); // 801FC280
  c->r[6]=R32(c->r[30]+0x0000016Cu); // 801FC284
  c->lr=0x801FC28Cu; f_80208D98(c); // 801FC288
  c->r[4]=0u+0x00000000u; // 801FC28C
  c->lr=0x801FC294u; f_802089E4(c); // 801FC290
  c->r[4]=c->r[31]+0x0000032Cu; // 801FC294
  c->lr=0x801FC29Cu; f_80208974(c); // 801FC298
  c->r[4]=0u+0x00000000u; // 801FC29C
  c->lr=0x801FC2A4u; f_802089E4(c); // 801FC2A0
  c->r[4]=c->r[31]+0x00000394u; // 801FC2A4
  c->lr=0x801FC2ACu; f_80208974(c); // 801FC2A8
  c->r[4]=R8(c->r[30]+0x00000170u); // 801FC2AC
  c->lr=0x801FC2B4u; f_80208C24(c); // 801FC2B0
  c->r[4]=0u+0x00000000u; // 801FC2B4
  c->lr=0x801FC2BCu; f_802089E4(c); // 801FC2B8
  c->r[4]=c->r[31]+0x0000033Du; // 801FC2BC
  c->lr=0x801FC2C4u; f_80208974(c); // 801FC2C0
  c->r[4]=0u+0x00000000u; // 801FC2C4
  c->lr=0x801FC2CCu; f_802089E4(c); // 801FC2C8
  c->r[4]=c->r[31]+0x00000394u; // 801FC2CC
  c->lr=0x801FC2D4u; f_80208974(c); // 801FC2D0
  c->r[4]=R8(c->r[30]+0x00000171u); // 801FC2D4
  c->lr=0x801FC2DCu; f_80208C24(c); // 801FC2D8
  c->r[4]=0u+0x00000000u; // 801FC2DC
  c->lr=0x801FC2E4u; f_802089E4(c); // 801FC2E0
  c->r[4]=c->r[31]+0x00000357u; // 801FC2E4
  c->lr=0x801FC2ECu; f_80208974(c); // 801FC2E8
  c->r[4]=0u+0x00000000u; // 801FC2EC
  c->lr=0x801FC2F4u; f_802089E4(c); // 801FC2F0
  c->r[4]=c->r[31]+0x00000394u; // 801FC2F4
  c->lr=0x801FC2FCu; f_80208974(c); // 801FC2F8
  c->r[4]=c->r[30]+0x00000110u; // 801FC2FC
  c->lr=0x801FC304u; f_80208944(c); // 801FC300
  c->r[4]=0u+0x00000000u; // 801FC304
  c->lr=0x801FC30Cu; f_802089E4(c); // 801FC308
  c->r[4]=c->r[31]+0x00000364u; // 801FC30C
  c->lr=0x801FC314u; f_80208974(c); // 801FC310
  c->r[4]=0u+0x00000000u; // 801FC314
  c->lr=0x801FC31Cu; f_802089E4(c); // 801FC318
  c->r[4]=c->r[31]+0x00000394u; // 801FC31C
  c->lr=0x801FC324u; f_80208974(c); // 801FC320
  c->r[5]=R32(c->r[30]+0x00000150u); // 801FC324
  c->r[6]=R32(c->r[30]+0x00000154u); // 801FC328
  c->lr=0x801FC330u; f_80208D98(c); // 801FC32C
  c->r[4]=0u+0x00000000u; // 801FC330
  c->lr=0x801FC338u; f_802089E4(c); // 801FC334
  c->r[4]=c->r[31]+0x00000372u; // 801FC338
  c->lr=0x801FC340u; f_80208974(c); // 801FC33C
  c->r[4]=0u+0x00000000u; // 801FC340
  c->lr=0x801FC348u; f_802089E4(c); // 801FC344
  c->r[4]=c->r[31]+0x00000394u; // 801FC348
  c->lr=0x801FC350u; f_80208974(c); // 801FC34C
  c->r[5]=R32(c->r[30]+0x00000158u); // 801FC350
  c->r[6]=R32(c->r[30]+0x0000015Cu); // 801FC354
  c->lr=0x801FC35Cu; f_80208D98(c); // 801FC358
  c->r[4]=0u+0x00000000u; // 801FC35C
  c->lr=0x801FC364u; f_802089E4(c); // 801FC360
  c->r[4]=c->r[31]+0x00000380u; // 801FC364
  c->lr=0x801FC36Cu; f_80208974(c); // 801FC368
  c->r[4]=0u+0x00000000u; // 801FC36C
  c->lr=0x801FC374u; f_802089E4(c); // 801FC370
  c->r[4]=c->r[31]+0x00000394u; // 801FC374
  c->lr=0x801FC37Cu; f_80208974(c); // 801FC378
  c->r[5]=R32(c->r[30]+0x00000160u); // 801FC37C
  c->r[6]=R32(c->r[30]+0x00000164u); // 801FC380
  c->lr=0x801FC388u; f_80208D98(c); // 801FC384
  c->r[4]=0u+0x00000000u; // 801FC388
  c->lr=0x801FC390u; f_802089E4(c); // 801FC38C
  c->r[3]=c->r[1]+0x00000008u; // 801FC390
  c->r[4]=c->r[1]+0x00000014u; // 801FC394
  c->lr=0x801FC39Cu; f_801FC3EC(c); // 801FC398
  c->r[3]=c->r[1]+0x00000008u; // 801FC39C
  c->lr=0x801FC3A4u; f_802130B4(c); // 801FC3A0
  c->r[31]=c->r[3]|c->r[3]; // 801FC3A4
  c->r[3]=c->r[1]+0x00000008u; // 801FC3A8
  c->r[4]=0u+0xFFFFFFFFu; // 801FC3AC
  c->lr=0x801FC3B4u; f_801FD984(c); // 801FC3B0
  cmps(c,0,(int32_t)c->r[31],0); // 801FC3B4
  if (!crb(c,2)) { goto L_801FC3C4; } // 801FC3B8
  c->r[0]=0u+0x00000001u; // 801FC3BC
  W8(c->r[30]+0x000000B4u,c->r[0]); // 801FC3C0
L_801FC3C4:;
  c->r[3]=c->r[1]+0x00000014u; // 801FC3C4
  c->r[4]=0u+0x00000000u; // 801FC3C8
  c->lr=0x801FC3D0u; f_801FD984(c); // 801FC3CC
  c->r[3]=c->r[31]|c->r[31]; // 801FC3D0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801FC3D4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801FC3D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FC3DC
  c->lr=c->r[0]; // 801FC3E0
  c->r[1]=c->r[1]+0x00000030u; // 801FC3E4
  return; // 801FC3E8
}

// fn_801FC3EC
void f_801FC3EC(Ctx* __restrict c) {
  f_801FD8E8(c); return; // 801FC3EC
}

// dtor_801FC3F0
void f_801FC3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC3F0
  c->r[0]=c->lr; // 801FC3F4
  cmps(c,0,(int32_t)c->r[3],0); // 801FC3F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FC3FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FC400
  c->r[31]=c->r[4]|c->r[4]; // 801FC404
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FC408
  c->r[30]=c->r[3]|c->r[3]; // 801FC40C
  if (crb(c,2)) { goto L_801FC42C; } // 801FC410
  c->r[4]=0u+0x00000000u; // 801FC414
  c->lr=0x801FC41Cu; f_801FD984(c); // 801FC418
  cmps(c,0,(int32_t)c->r[31],0); // 801FC41C
  if (!crb(c,1)) { goto L_801FC42C; } // 801FC420
  c->r[3]=c->r[30]|c->r[30]; // 801FC424
  c->lr=0x801FC42Cu; f_800D6AD0(c); // 801FC428
L_801FC42C:;
  c->r[3]=c->r[30]|c->r[30]; // 801FC42C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FC430
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FC434
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC438
  c->lr=c->r[0]; // 801FC43C
  c->r[1]=c->r[1]+0x00000010u; // 801FC440
  return; // 801FC444
}

// fn_801FC448
void f_801FC448(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC448
  c->r[0]=c->lr; // 801FC44C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801FC450
  c->r[11]=c->r[1]+0x00000040u; // 801FC454
  c->lr=0x801FC45Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FC458
  c->r[31]=0u+0x80340000u; // 801FC45C
  c->r[29]=c->r[3]|c->r[3]; // 801FC460
  c->r[31]=c->r[31]+0xFFFFAB38u; // 801FC464
  c->r[3]=c->r[1]+0x00000018u; // 801FC468
  c->lr=0x801FC470u; f_801FAF28(c); // 801FC46C
  c->r[3]=c->r[1]+0x00000018u; // 801FC470
  c->lr=0x801FC478u; f_802130A4(c); // 801FC474
  cmps(c,0,(int32_t)c->r[3],0); // 801FC478
  c->r[30]=c->r[3]|c->r[3]; // 801FC47C
  if (crb(c,2)) { goto L_801FC4B8; } // 801FC480
  cmps(c,0,(int32_t)c->r[3],-4006); // 801FC484
  if (!crb(c,2)) { goto L_801FC4A4; } // 801FC488
  c->r[4]=c->r[31]+0x00000398u; // 801FC48C
  c->r[3]=0u+0x00000003u; // 801FC490
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC494
  c->lr=0x801FC49Cu; f_801FE6E4(c); // 801FC498
  c->r[0]=0u+0x00000000u; // 801FC49C
  W8(c->r[29]+0x000000B4u,c->r[0]); // 801FC4A0
L_801FC4A4:;
  c->r[3]=c->r[1]+0x00000018u; // 801FC4A4
  c->r[4]=0u+0xFFFFFFFFu; // 801FC4A8
  c->lr=0x801FC4B0u; f_801FD984(c); // 801FC4AC
  c->r[3]=c->r[30]|c->r[30]; // 801FC4B0
  goto L_801FC58C; // 801FC4B4
L_801FC4B8:;
  c->r[0]=0u+0x00000001u; // 801FC4B8
  c->r[3]=c->r[1]+0x00000018u; // 801FC4BC
  W8(c->r[29]+0x000000B4u,c->r[0]); // 801FC4C0
  c->lr=0x801FC4C8u; f_801FACC0(c); // 801FC4C4
  c->r[30]=c->r[3]|c->r[3]; // 801FC4C8
  c->r[3]=c->r[1]+0x00000018u; // 801FC4CC
  c->lr=0x801FC4D4u; f_801FBAA0(c); // 801FC4D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801FC4D4
  c->r[3]=c->r[30]|c->r[30]; // 801FC4D8
  c->r[4]=c->r[1]+0x00000008u; // 801FC4DC
  c->r[5]=c->r[1]+0x00000014u; // 801FC4E0
  c->r[6]=c->r[1]+0x00000010u; // 801FC4E4
  c->r[7]=c->r[1]+0x0000000Cu; // 801FC4E8
  c->lr=0x801FC4F0u; f_801FBB08(c); // 801FC4EC
  cmps(c,0,(int32_t)c->r[3],0); // 801FC4F0
  c->r[30]=c->r[3]|c->r[3]; // 801FC4F4
  if (crb(c,2)) { goto L_801FC530; } // 801FC4F8
  c->r[3]=R32(c->r[1]+0x00000014u); // 801FC4FC
  c->r[4]=c->r[31]+0x00000389u; // 801FC500
  c->lr=0x801FC508u; f_80190160(c); // 801FC504
  cmps(c,0,(int32_t)c->r[3],0); // 801FC508
  if (!crb(c,2)) { goto L_801FC530; } // 801FC50C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801FC510
  cmpu(c,0,c->r[5],0x00000002u); // 801FC514
  if (!crb(c,2)) { goto L_801FC530; } // 801FC518
  c->r[3]=R32(c->r[1]+0x00000010u); // 801FC51C
  c->r[4]=c->r[31]+0x00000396u; // 801FC520
  c->lr=0x801FC528u; f_8018C170(c); // 801FC524
  cmps(c,0,(int32_t)c->r[3],0); // 801FC528
  if (crb(c,2)) { goto L_801FC558; } // 801FC52C
L_801FC530:;
  c->r[3]=c->r[1]+0x00000018u; // 801FC530
  c->r[4]=0u+0xFFFFFFFFu; // 801FC534
  c->lr=0x801FC53Cu; f_801FD984(c); // 801FC538
  c->r[3]=0u+0xFFFFF05Fu; // 801FC53C
  goto L_801FC58C; // 801FC540
  goto L_801FC558; // 801FC544
L_801FC548:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 801FC548
  c->r[3]=c->r[29]|c->r[29]; // 801FC54C
  c->r[5]=R32(c->r[1]+0x00000010u); // 801FC550
  c->lr=0x801FC558u; f_801FBF04(c); // 801FC554
L_801FC558:;
  c->r[3]=c->r[30]|c->r[30]; // 801FC558
  c->r[4]=c->r[1]+0x00000008u; // 801FC55C
  c->r[5]=c->r[1]+0x00000014u; // 801FC560
  c->r[6]=c->r[1]+0x00000010u; // 801FC564
  c->r[7]=0u+0x00000000u; // 801FC568
  c->lr=0x801FC570u; f_801FBB08(c); // 801FC56C
  cmps(c,0,(int32_t)c->r[3],0); // 801FC570
  c->r[30]=c->r[3]|c->r[3]; // 801FC574
  if (!crb(c,2)) { IRQCHK(c); goto L_801FC548; } // 801FC578
  c->r[3]=c->r[1]+0x00000018u; // 801FC57C
  c->r[4]=0u+0xFFFFFFFFu; // 801FC580
  c->lr=0x801FC588u; f_801FD984(c); // 801FC584
  c->r[3]=0u+0x00000000u; // 801FC588
L_801FC58C:;
  c->r[11]=c->r[1]+0x00000040u; // 801FC58C
  c->lr=0x801FC594u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FC590
  c->r[0]=R32(c->r[1]+0x00000044u); // 801FC594
  c->lr=c->r[0]; // 801FC598
  c->r[1]=c->r[1]+0x00000040u; // 801FC59C
  return; // 801FC5A0
}

// fn_801FC5A4
void f_801FC5A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC5A4
  c->r[0]=c->lr; // 801FC5A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FC5AC
  c->r[11]=c->r[1]+0x00000030u; // 801FC5B0
  c->lr=0x801FC5B8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FC5B4
  c->r[28]=c->r[3]|c->r[3]; // 801FC5B8
  c->r[3]=c->r[1]+0x00000008u; // 801FC5BC
  c->lr=0x801FC5C4u; f_80213D68(c); // 801FC5C0
  cmps(c,0,(int32_t)c->r[3],0); // 801FC5C4
  c->r[31]=c->r[3]|c->r[3]; // 801FC5C8
  if (!crb(c,2)) { goto L_801FC644; } // 801FC5CC
  c->r[3]=c->r[28]+0x0000019Cu; // 801FC5D0
  c->lr=0x801FC5D8u; f_801F9878(c); // 801FC5D4
  cmps(c,0,(int32_t)c->r[3],0); // 801FC5D8
  c->r[31]=c->r[3]|c->r[3]; // 801FC5DC
  if (crb(c,2)) { goto L_801FC600; } // 801FC5E0
  c->r[4]=0u+0x80340000u; // 801FC5E4
  c->r[5]=c->r[31]|c->r[31]; // 801FC5E8
  c->r[4]=c->r[4]+0xFFFFAEECu; // 801FC5EC
  c->r[3]=0u+0x00000001u; // 801FC5F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC5F4
  c->lr=0x801FC5FCu; f_801FE6E4(c); // 801FC5F8
  goto L_801FC644; // 801FC5FC
L_801FC600:;
  c->r[0]=R32(c->r[28]+0x0000019Cu); // 801FC600
  c->r[4]=0u+0x00000000u; // 801FC604
  c->r[5]=R32(c->r[1]+0x00000008u); // 801FC608
  c->r[3]=c->r[28]+0x000001A0u; // 801FC60C
  c->r[29]=addc(c,c->r[4],c->r[0],0); // 801FC610
  c->r[30]=addc(c,c->r[5],0,c->xer_ca); // 801FC614
  c->lr=0x801FC61Cu; f_801FBDD8(c); // 801FC618
  c->r[6]=c->r[29]|c->r[29]; // 801FC61C
  c->r[5]=c->r[30]|c->r[30]; // 801FC620
  c->r[3]=c->r[1]+0x0000000Cu; // 801FC624
  c->lr=0x801FC62Cu; f_80208E94(c); // 801FC628
  c->r[3]=c->r[28]+0x000001A0u; // 801FC62C
  c->r[4]=c->r[1]+0x0000000Cu; // 801FC630
  c->lr=0x801FC638u; f_801FBE10(c); // 801FC634
  c->r[3]=c->r[1]+0x0000000Cu; // 801FC638
  c->r[4]=0u+0xFFFFFFFFu; // 801FC63C
  c->lr=0x801FC644u; f_801FD984(c); // 801FC640
L_801FC644:;
  c->r[11]=c->r[1]+0x00000030u; // 801FC644
  c->r[3]=c->r[31]|c->r[31]; // 801FC648
  c->lr=0x801FC650u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FC64C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FC650
  c->lr=c->r[0]; // 801FC654
  c->r[1]=c->r[1]+0x00000030u; // 801FC658
  return; // 801FC65C
}

// fn_801FC660
void f_801FC660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC660
  c->r[0]=c->lr; // 801FC664
  W32(c->r[1]+0x000001F4u,c->r[0]); // 801FC668
  c->r[11]=c->r[1]+0x000001F0u; // 801FC66C
  c->lr=0x801FC674u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FC670
  c->r[0]=c->r[1]+0x00000053u; // 801FC674
  c->r[29]=c->r[3]|c->r[3]; // 801FC678
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFC0u; // 801FC67C
  c->r[3]=c->r[1]+0x00000008u; // 801FC680
  c->lr=0x801FC688u; f_801FAF28(c); // 801FC684
  c->r[3]=c->r[30]|c->r[30]; // 801FC688
  c->lr=0x801FC690u; f_801F99DC(c); // 801FC68C
  cmps(c,0,(int32_t)c->r[3],0); // 801FC690
  c->r[31]=c->r[3]|c->r[3]; // 801FC694
  if (crb(c,2)) { goto L_801FC6B8; } // 801FC698
  c->r[4]=0u+0x80340000u; // 801FC69C
  c->r[5]=c->r[31]|c->r[31]; // 801FC6A0
  c->r[4]=c->r[4]+0xFFFFAF08u; // 801FC6A4
  c->r[3]=0u+0x00000001u; // 801FC6A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC6AC
  c->lr=0x801FC6B4u; f_801FE6E4(c); // 801FC6B0
  goto L_801FC6E4; // 801FC6B4
L_801FC6B8:;
  c->r[4]=0u+0x80340000u; // 801FC6B8
  c->r[3]=0u+0x00000004u; // 801FC6BC
  c->r[4]=c->r[4]+0xFFFFAF26u; // 801FC6C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC6C4
  c->lr=0x801FC6CCu; f_801FE6E4(c); // 801FC6C8
  c->r[3]=c->r[29]+0x0000020Cu; // 801FC6CC
  c->lr=0x801FC6D4u; f_801FBDD8(c); // 801FC6D0
  c->r[3]=c->r[30]|c->r[30]; // 801FC6D4
  c->r[5]=c->r[29]+0x0000020Cu; // 801FC6D8
  c->r[4]=0u+0x00000180u; // 801FC6DC
  c->lr=0x801FC6E4u; f_80208794(c); // 801FC6E0
L_801FC6E4:;
  c->r[3]=c->r[1]+0x00000008u; // 801FC6E4
  c->r[4]=0u+0xFFFFFFFFu; // 801FC6E8
  c->lr=0x801FC6F0u; f_801FD984(c); // 801FC6EC
  c->r[11]=c->r[1]+0x000001F0u; // 801FC6F0
  c->r[3]=c->r[31]|c->r[31]; // 801FC6F4
  c->lr=0x801FC6FCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FC6F8
  c->r[0]=R32(c->r[1]+0x000001F4u); // 801FC6FC
  c->lr=c->r[0]; // 801FC700
  c->r[1]=c->r[1]+0x000001F0u; // 801FC704
  return; // 801FC708
}

// fn_801FC70C
void f_801FC70C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC70C
  c->r[0]=c->lr; // 801FC710
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FC714
  c->r[11]=c->r[1]+0x000000F0u; // 801FC718
  c->lr=0x801FC720u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FC71C
  c->r[30]=c->r[3]|c->r[3]; // 801FC720
  c->r[25]=c->r[4]|c->r[4]; // 801FC724
  c->r[3]=c->r[1]+0x00000048u; // 801FC728
  c->r[31]=0u+0x00000000u; // 801FC72C
  c->lr=0x801FC734u; f_801FAF28(c); // 801FC730
  cmps(c,0,(int32_t)c->r[25],0); // 801FC734
  if (!crb(c,2)) { goto L_801FC75C; } // 801FC738
  c->r[0]=R8(c->r[30]+0x00000240u); // 801FC73C
  cmps(c,0,(int32_t)c->r[0],0); // 801FC740
  if (crb(c,2)) { goto L_801FC75C; } // 801FC744
  c->r[3]=c->r[1]+0x00000048u; // 801FC748
  c->r[4]=0u+0xFFFFFFFFu; // 801FC74C
  c->lr=0x801FC754u; f_801FD984(c); // 801FC750
  c->r[3]=0u+0x00000000u; // 801FC754
  goto L_801FC9F4; // 801FC758
L_801FC75C:;
  c->r[29]=0u+0x00000000u; // 801FC75C
  c->r[27]=0u+0x80340000u; // 801FC760
  W32(c->r[30]+0x0000023Cu,c->r[29]); // 801FC764
  c->r[0]=c->r[1]+0x00000048u; // 801FC768
  c->r[27]=c->r[27]+0xFFFFAF40u; // 801FC76C
  c->r[28]=c->r[1]+0x00000054u; // 801FC770
  W32(c->r[30]+0x00000238u,c->r[29]); // 801FC774
  c->r[3]=c->r[1]+0x00000064u; // 801FC778
  c->r[4]=c->r[30]+0x00000224u; // 801FC77C
  W8(c->r[30]+0x00000240u,c->r[29]); // 801FC780
  W32(c->r[1]+0x00000054u,c->r[30]); // 801FC784
  W32(c->r[1]+0x00000058u,c->r[0]); // 801FC788
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 801FC78C
  W32(c->r[1]+0x00000060u,c->r[29]); // 801FC790
  c->lr=0x801FC798u; f_801FD8E8(c); // 801FC794
  c->r[26]=c->r[1]+0x00000070u; // 801FC798
  c->r[3]=c->r[26]|c->r[26]; // 801FC79C
  c->lr=0x801FC7A4u; f_801FAF60(c); // 801FC7A0
  c->r[3]=c->r[26]|c->r[26]; // 801FC7A4
  c->lr=0x801FC7ACu; f_801FAFA4(c); // 801FC7A8
  c->r[3]=c->r[27]|c->r[27]; // 801FC7AC
  c->lr=0x801FC7B4u; f_80185588(c); // 801FC7B0
  c->r[25]=c->r[3]|c->r[3]; // 801FC7B4
  c->r[3]=c->r[26]|c->r[26]; // 801FC7B8
  c->r[4]=c->r[25]|c->r[25]; // 801FC7BC
  c->lr=0x801FC7C4u; f_801FDA1C(c); // 801FC7C0
  c->r[0]=R8(c->r[1]+0x00000008u); // 801FC7C4
  c->r[3]=c->r[26]|c->r[26]; // 801FC7C8
  c->r[6]=c->r[27]|c->r[27]; // 801FC7CC
  c->r[7]=c->r[27]+c->r[25]; // 801FC7D0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801FC7D4
  c->r[8]=c->r[1]+0x00000009u; // 801FC7D8
  c->r[4]=0u+0x00000000u; // 801FC7DC
  c->r[5]=0u+0x00000000u; // 801FC7E0
  c->lr=0x801FC7E8u; f_801FDDF4(c); // 801FC7E4
  c->r[3]=c->r[28]+0x00000028u; // 801FC7E8
  c->lr=0x801FC7F0u; f_801FAF28(c); // 801FC7EC
  W32(c->r[1]+0x00000088u,c->r[29]); // 801FC7F0
  c->r[3]=c->r[28]+0x00000038u; // 801FC7F4
  c->lr=0x801FC7FCu; f_801FAF28(c); // 801FC7F8
  c->r[3]=c->r[28]+0x00000044u; // 801FC7FC
  c->lr=0x801FC804u; f_801FAF28(c); // 801FC800
  c->r[3]=c->r[28]+0x00000050u; // 801FC804
  c->lr=0x801FC80Cu; f_801FAF28(c); // 801FC808
  W32(c->r[1]+0x000000B0u,c->r[29]); // 801FC80C
  c->r[3]=c->r[1]+0x0000000Cu; // 801FC810
  W32(c->r[1]+0x000000B8u,c->r[29]); // 801FC814
  W32(c->r[1]+0x000000BCu,c->r[29]); // 801FC818
  W8(c->r[1]+0x000000C0u,c->r[29]); // 801FC81C
  W8(c->r[1]+0x000000C1u,c->r[29]); // 801FC820
  c->lr=0x801FC828u; f_801FAF28(c); // 801FC824
  c->r[0]=R8(c->r[27]+0x00000000u); // 801FC828
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FC82C
  if (crb(c,0)) { goto L_801FC83C; } // 801FC830
  cmps(c,0,(int32_t)c->r[0],256); // 801FC834
  if (crb(c,0)) { goto L_801FC840; } // 801FC838
L_801FC83C:;
  c->r[29]=0u+0x00000001u; // 801FC83C
L_801FC840:;
  cmps(c,0,(int32_t)c->r[29],0); // 801FC840
  if (crb(c,2)) { goto L_801FC850; } // 801FC844
  c->r[0]=0u+0x00000000u; // 801FC848
  goto L_801FC86C; // 801FC84C
L_801FC850:;
  c->r[3]=0u+0x80330000u; // 801FC850
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FC854
  c->r[3]=c->r[3]+0x000006B0u; // 801FC858
  c->r[3]=R32(c->r[3]+0x00000038u); // 801FC85C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801FC860
  c->r[0]=R16(c->r[3]+c->r[0]); // 801FC864
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801FC868
L_801FC86C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801FC86C
  if (crb(c,2)) { goto L_801FC884; } // 801FC870
  c->r[3]=c->r[1]+0x0000000Cu; // 801FC874
  c->r[4]=c->r[30]+0x00000034u; // 801FC878
  c->lr=0x801FC880u; f_801FBE10(c); // 801FC87C
  goto L_801FC890; // 801FC880
L_801FC884:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801FC884
  c->r[4]=c->r[30]+0x00000040u; // 801FC888
  c->lr=0x801FC890u; f_801FBE10(c); // 801FC88C
L_801FC890:;
  c->r[5]=0u+0x80340000u; // 801FC890
  c->r[3]=c->r[1]+0x00000018u; // 801FC894
  c->r[4]=c->r[1]+0x0000000Cu; // 801FC898
  c->r[5]=c->r[5]+0xFFFFB4EAu; // 801FC89C
  c->lr=0x801FC8A4u; f_801FCACC(c); // 801FC8A0
  c->r[3]=c->r[1]+0x00000024u; // 801FC8A4
  c->r[4]=c->r[1]+0x00000018u; // 801FC8A8
  c->r[5]=c->r[30]+0x00000224u; // 801FC8AC
  c->lr=0x801FC8B4u; f_801FCA0C(c); // 801FC8B0
  c->r[5]=0u+0x80340000u; // 801FC8B4
  c->r[3]=c->r[1]+0x00000030u; // 801FC8B8
  c->r[4]=c->r[1]+0x00000024u; // 801FC8BC
  c->r[5]=c->r[5]+0xFFFFB4E8u; // 801FC8C0
  c->lr=0x801FC8C8u; f_801FCACC(c); // 801FC8C4
  c->r[5]=c->r[27]|c->r[27]; // 801FC8C8
  c->r[3]=c->r[1]+0x0000003Cu; // 801FC8CC
  c->r[4]=c->r[1]+0x00000030u; // 801FC8D0
  c->lr=0x801FC8D8u; f_801FCACC(c); // 801FC8D4
  c->r[3]=c->r[28]+0x00000028u; // 801FC8D8
  c->r[4]=c->r[1]+0x0000003Cu; // 801FC8DC
  c->lr=0x801FC8E4u; f_801FBE10(c); // 801FC8E0
  c->r[3]=c->r[1]+0x0000003Cu; // 801FC8E4
  c->r[4]=0u+0xFFFFFFFFu; // 801FC8E8
  c->lr=0x801FC8F0u; f_801FD984(c); // 801FC8EC
  c->r[3]=c->r[1]+0x00000030u; // 801FC8F0
  c->r[4]=0u+0xFFFFFFFFu; // 801FC8F4
  c->lr=0x801FC8FCu; f_801FD984(c); // 801FC8F8
  c->r[3]=c->r[1]+0x00000024u; // 801FC8FC
  c->r[4]=0u+0xFFFFFFFFu; // 801FC900
  c->lr=0x801FC908u; f_801FD984(c); // 801FC904
  c->r[3]=c->r[1]+0x00000018u; // 801FC908
  c->r[4]=0u+0xFFFFFFFFu; // 801FC90C
  c->lr=0x801FC914u; f_801FD984(c); // 801FC910
  c->r[3]=R32(c->r[1]+0x00000058u); // 801FC914
  c->lr=0x801FC91Cu; f_801FBAA0(c); // 801FC918
  W32(c->r[1]+0x000000B4u,c->r[3]); // 801FC91C
  c->r[3]=c->r[1]+0x0000000Cu; // 801FC920
  c->r[4]=0u+0xFFFFFFFFu; // 801FC924
  c->lr=0x801FC92Cu; f_801FD984(c); // 801FC928
  c->r[3]=c->r[1]+0x00000054u; // 801FC92C
  c->lr=0x801FC934u; f_8020B860(c); // 801FC930
  cmps(c,0,(int32_t)c->r[3],0); // 801FC934
  if (crb(c,2)) { goto L_801FC95C; } // 801FC938
  c->r[4]=0u+0x80340000u; // 801FC93C
  c->r[5]=R32(c->r[1]+0x0000005Cu); // 801FC940
  c->r[4]=c->r[4]+0xFFFFAF44u; // 801FC944
  c->r[3]=0u+0x00000002u; // 801FC948
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC94C
  c->lr=0x801FC954u; f_801FE6E4(c); // 801FC950
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801FC954
  goto L_801FC9C8; // 801FC958
L_801FC95C:;
  c->r[3]=c->r[1]+0x00000048u; // 801FC95C
  c->lr=0x801FC964u; f_801FBAA0(c); // 801FC960
  cmps(c,0,(int32_t)c->r[3],0); // 801FC964
  if (crb(c,2)) { goto L_801FC9C0; } // 801FC968
  c->r[3]=c->r[1]+0x00000048u; // 801FC96C
  c->lr=0x801FC974u; f_801FBAA0(c); // 801FC970
  c->r[4]=0u+0x00000020u; // 801FC974
  c->lr=0x801FC97Cu; f_80201FC4(c); // 801FC978
  cmps(c,0,(int32_t)c->r[3],0); // 801FC97C
  W32(c->r[30]+0x00000238u,c->r[3]); // 801FC980
  if (!crb(c,2)) { goto L_801FC990; } // 801FC984
  c->r[31]=0u+0xFFFFF05Bu; // 801FC988
  goto L_801FC9C8; // 801FC98C
L_801FC990:;
  c->r[3]=c->r[1]+0x00000048u; // 801FC990
  c->lr=0x801FC998u; f_801FBAA0(c); // 801FC994
  c->r[29]=c->r[3]|c->r[3]; // 801FC998
  c->r[3]=c->r[1]+0x00000048u; // 801FC99C
  c->lr=0x801FC9A4u; f_801FACC0(c); // 801FC9A0
  c->r[4]=c->r[3]|c->r[3]; // 801FC9A4
  c->r[3]=R32(c->r[30]+0x00000238u); // 801FC9A8
  c->r[5]=c->r[29]|c->r[29]; // 801FC9AC
  c->lr=0x801FC9B4u; f_80004338(c); // 801FC9B0
  c->r[3]=c->r[1]+0x00000048u; // 801FC9B4
  c->lr=0x801FC9BCu; f_801FBAA0(c); // 801FC9B8
  W32(c->r[30]+0x0000023Cu,c->r[3]); // 801FC9BC
L_801FC9C0:;
  c->r[0]=0u+0x00000001u; // 801FC9C0
  W8(c->r[30]+0x00000240u,c->r[0]); // 801FC9C4
L_801FC9C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FC9C8
  if (crb(c,2)) { goto L_801FC9D8; } // 801FC9CC
  c->r[3]=c->r[1]+0x00000048u; // 801FC9D0
  c->lr=0x801FC9D8u; f_801FBDD8(c); // 801FC9D4
L_801FC9D8:;
  c->r[3]=c->r[1]+0x00000054u; // 801FC9D8
  c->r[4]=0u+0xFFFFFFFFu; // 801FC9DC
  c->lr=0x801FC9E4u; f_801FCB7C(c); // 801FC9E0
  c->r[3]=c->r[1]+0x00000048u; // 801FC9E4
  c->r[4]=0u+0xFFFFFFFFu; // 801FC9E8
  c->lr=0x801FC9F0u; f_801FD984(c); // 801FC9EC
  c->r[3]=c->r[31]|c->r[31]; // 801FC9F0
L_801FC9F4:;
  c->r[11]=c->r[1]+0x000000F0u; // 801FC9F4
  c->lr=0x801FC9FCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FC9F8
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801FC9FC
  c->lr=c->r[0]; // 801FCA00
  c->r[1]=c->r[1]+0x000000F0u; // 801FCA04
  return; // 801FCA08
}

// fn_801FCA0C
void f_801FCA0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCA0C
  c->r[0]=c->lr; // 801FCA10
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FCA14
  c->r[11]=c->r[1]+0x00000030u; // 801FCA18
  c->lr=0x801FCA20u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FCA1C
  c->r[28]=c->r[3]|c->r[3]; // 801FCA20
  c->r[30]=c->r[4]|c->r[4]; // 801FCA24
  c->r[29]=c->r[5]|c->r[5]; // 801FCA28
  c->lr=0x801FCA30u; f_801FAF28(c); // 801FCA2C
  c->r[3]=c->r[30]|c->r[30]; // 801FCA30
  c->r[4]=c->r[1]+0x00000010u; // 801FCA34
  c->r[5]=c->r[1]+0x00000018u; // 801FCA38
  c->lr=0x801FCA40u; f_801FBDA0(c); // 801FCA3C
  c->r[3]=c->r[29]|c->r[29]; // 801FCA40
  c->r[4]=c->r[1]+0x0000000Cu; // 801FCA44
  c->r[5]=c->r[1]+0x00000014u; // 801FCA48
  c->lr=0x801FCA50u; f_801FBDA0(c); // 801FCA4C
  c->r[4]=R32(c->r[1]+0x00000018u); // 801FCA50
  c->r[3]=c->r[28]|c->r[28]; // 801FCA54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FCA58
  c->r[4]=c->r[4]+c->r[0]; // 801FCA5C
  c->lr=0x801FCA64u; f_801FDA1C(c); // 801FCA60
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801FCA64
  c->r[3]=c->r[28]|c->r[28]; // 801FCA68
  c->r[6]=R32(c->r[1]+0x00000010u); // 801FCA6C
  c->r[8]=c->r[1]+0x0000000Au; // 801FCA70
  c->r[29]=R32(c->r[1]+0x00000018u); // 801FCA74
  c->r[4]=0u+0x00000000u; // 801FCA78
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801FCA7C
  c->r[5]=0u+0x00000000u; // 801FCA80
  c->r[30]=R32(c->r[1]+0x00000014u); // 801FCA84
  c->r[7]=c->r[6]+c->r[29]; // 801FCA88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FCA8C
  c->lr=0x801FCA94u; f_801FDDF4(c); // 801FCA90
  c->r[0]=R8(c->r[1]+0x00000009u); // 801FCA94
  c->r[4]=c->r[29]|c->r[29]; // 801FCA98
  c->r[6]=c->r[31]|c->r[31]; // 801FCA9C
  c->r[7]=c->r[31]+c->r[30]; // 801FCAA0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801FCAA4
  c->r[8]=c->r[1]+0x00000008u; // 801FCAA8
  c->r[5]=0u+0x00000000u; // 801FCAAC
  c->lr=0x801FCAB4u; f_801FDDF4(c); // 801FCAB0
  c->r[11]=c->r[1]+0x00000030u; // 801FCAB4
  c->lr=0x801FCABCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FCAB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FCABC
  c->lr=c->r[0]; // 801FCAC0
  c->r[1]=c->r[1]+0x00000030u; // 801FCAC4
  return; // 801FCAC8
}

// fn_801FCACC
void f_801FCACC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCACC
  c->r[0]=c->lr; // 801FCAD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FCAD4
  c->r[11]=c->r[1]+0x00000030u; // 801FCAD8
  c->lr=0x801FCAE0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FCADC
  c->r[28]=c->r[3]|c->r[3]; // 801FCAE0
  c->r[30]=c->r[4]|c->r[4]; // 801FCAE4
  c->r[29]=c->r[5]|c->r[5]; // 801FCAE8
  c->lr=0x801FCAF0u; f_801FAF28(c); // 801FCAEC
  c->r[3]=c->r[29]|c->r[29]; // 801FCAF0
  c->lr=0x801FCAF8u; f_80185588(c); // 801FCAF4
  c->r[31]=c->r[3]|c->r[3]; // 801FCAF8
  c->r[3]=c->r[30]|c->r[30]; // 801FCAFC
  c->r[4]=c->r[1]+0x0000000Cu; // 801FCB00
  c->r[5]=c->r[1]+0x00000010u; // 801FCB04
  c->lr=0x801FCB0Cu; f_801FBDA0(c); // 801FCB08
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FCB0C
  c->r[3]=c->r[28]|c->r[28]; // 801FCB10
  c->r[4]=c->r[0]+c->r[31]; // 801FCB14
  c->lr=0x801FCB1Cu; f_801FDA1C(c); // 801FCB18
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801FCB1C
  c->r[3]=c->r[28]|c->r[28]; // 801FCB20
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801FCB24
  c->r[8]=c->r[1]+0x0000000Au; // 801FCB28
  c->r[30]=R32(c->r[1]+0x00000010u); // 801FCB2C
  c->r[4]=0u+0x00000000u; // 801FCB30
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801FCB34
  c->r[5]=0u+0x00000000u; // 801FCB38
  c->r[7]=c->r[6]+c->r[30]; // 801FCB3C
  c->lr=0x801FCB44u; f_801FDDF4(c); // 801FCB40
  c->r[0]=R8(c->r[1]+0x00000009u); // 801FCB44
  c->r[4]=c->r[30]|c->r[30]; // 801FCB48
  c->r[6]=c->r[29]|c->r[29]; // 801FCB4C
  c->r[7]=c->r[29]+c->r[31]; // 801FCB50
  W8(c->r[1]+0x00000008u,c->r[0]); // 801FCB54
  c->r[8]=c->r[1]+0x00000008u; // 801FCB58
  c->r[5]=0u+0x00000000u; // 801FCB5C
  c->lr=0x801FCB64u; f_801FDDF4(c); // 801FCB60
  c->r[11]=c->r[1]+0x00000030u; // 801FCB64
  c->lr=0x801FCB6Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FCB68
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FCB6C
  c->lr=c->r[0]; // 801FCB70
  c->r[1]=c->r[1]+0x00000030u; // 801FCB74
  return; // 801FCB78
}

// dtor_801FCB7C
void f_801FCB7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCB7C
  c->r[0]=c->lr; // 801FCB80
  cmps(c,0,(int32_t)c->r[3],0); // 801FCB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FCB88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FCB8C
  c->r[31]=c->r[4]|c->r[4]; // 801FCB90
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FCB94
  c->r[30]=c->r[3]|c->r[3]; // 801FCB98
  if (crb(c,2)) { goto L_801FCBF8; } // 801FCB9C
  c->r[4]=0u+0xFFFFFFFFu; // 801FCBA0
  c->r[3]=c->r[3]+0x00000050u; // 801FCBA4
  c->lr=0x801FCBACu; f_801FD984(c); // 801FCBA8
  c->r[3]=c->r[30]+0x00000044u; // 801FCBAC
  c->r[4]=0u+0xFFFFFFFFu; // 801FCBB0
  c->lr=0x801FCBB8u; f_801FD984(c); // 801FCBB4
  c->r[3]=c->r[30]+0x00000038u; // 801FCBB8
  c->r[4]=0u+0xFFFFFFFFu; // 801FCBBC
  c->lr=0x801FCBC4u; f_801FD984(c); // 801FCBC0
  c->r[3]=c->r[30]+0x00000028u; // 801FCBC4
  c->r[4]=0u+0xFFFFFFFFu; // 801FCBC8
  c->lr=0x801FCBD0u; f_801FD984(c); // 801FCBCC
  c->r[3]=c->r[30]+0x0000001Cu; // 801FCBD0
  c->r[4]=0u+0xFFFFFFFFu; // 801FCBD4
  c->lr=0x801FCBDCu; f_801FD984(c); // 801FCBD8
  c->r[3]=c->r[30]+0x00000010u; // 801FCBDC
  c->r[4]=0u+0xFFFFFFFFu; // 801FCBE0
  c->lr=0x801FCBE8u; f_801FD984(c); // 801FCBE4
  cmps(c,0,(int32_t)c->r[31],0); // 801FCBE8
  if (!crb(c,1)) { goto L_801FCBF8; } // 801FCBEC
  c->r[3]=c->r[30]|c->r[30]; // 801FCBF0
  c->lr=0x801FCBF8u; f_800D6AD0(c); // 801FCBF4
L_801FCBF8:;
  c->r[3]=c->r[30]|c->r[30]; // 801FCBF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FCBFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FCC00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FCC04
  c->lr=c->r[0]; // 801FCC08
  c->r[1]=c->r[1]+0x00000010u; // 801FCC0C
  return; // 801FCC10
}

// fn_801FCC14
void f_801FCC14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCC14
  c->r[0]=c->lr; // 801FCC18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FCC1C
  c->r[11]=c->r[1]+0x00000020u; // 801FCC20
  c->lr=0x801FCC28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FCC24
  c->r[0]=0u+0x00000000u; // 801FCC28
  c->r[27]=c->r[3]|c->r[3]; // 801FCC2C
  W8(c->r[3]+0x00000209u,c->r[0]); // 801FCC30
  c->r[28]=c->r[4]|c->r[4]; // 801FCC34
  c->r[29]=c->r[5]|c->r[5]; // 801FCC38
  c->lr=0x801FCC40u; f_801FCCFC(c); // 801FCC3C
  cmps(c,0,(int32_t)c->r[3],0); // 801FCC40
  c->r[30]=c->r[3]|c->r[3]; // 801FCC44
  if (!crb(c,2)) { goto L_801FCCB4; } // 801FCC48
  c->r[0]=R8(c->r[27]+0x00000208u); // 801FCC4C
  cmps(c,0,(int32_t)c->r[0],0); // 801FCC50
  if (!crb(c,2)) { goto L_801FCC60; } // 801FCC54
  c->r[30]=0u+0xFFFFF015u; // 801FCC58
  goto L_801FCCB4; // 801FCC5C
L_801FCC60:;
  cmps(c,0,(int32_t)c->r[28],0); // 801FCC60
  if (crb(c,2)) { goto L_801FCC80; } // 801FCC64
  c->r[31]=R32(c->r[27]+0x00000204u); // 801FCC68
  c->r[3]=c->r[28]|c->r[28]; // 801FCC6C
  c->r[4]=c->r[31]+0x00000001u; // 801FCC70
  c->lr=0x801FCC78u; f_801FCCD0(c); // 801FCC74
  cmpu(c,0,c->r[31],c->r[3]); // 801FCC78
  if (crb(c,2)) { goto L_801FCC8C; } // 801FCC7C
L_801FCC80:;
  c->r[0]=0u+0x00000000u; // 801FCC80
  W32(c->r[29]+0x00000000u,c->r[0]); // 801FCC84
  goto L_801FCCB4; // 801FCC88
L_801FCC8C:;
  c->r[3]=c->r[28]|c->r[28]; // 801FCC8C
  c->r[5]=c->r[31]|c->r[31]; // 801FCC90
  c->r[4]=c->r[27]+0x000001F2u; // 801FCC94
  c->lr=0x801FCC9Cu; f_8019027C(c); // 801FCC98
  c->r[0]=cntlz(c->r[3]); // 801FCC9C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801FCCA0
  W32(c->r[29]+0x00000000u,c->r[0]); // 801FCCA4
  if (crb(c,2)) { goto L_801FCCB4; } // 801FCCA8
  c->r[0]=0u+0x00000001u; // 801FCCAC
  W8(c->r[27]+0x00000209u,c->r[0]); // 801FCCB0
L_801FCCB4:;
  c->r[11]=c->r[1]+0x00000020u; // 801FCCB4
  c->r[3]=c->r[30]|c->r[30]; // 801FCCB8
  c->lr=0x801FCCC0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FCCBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FCCC0
  c->lr=c->r[0]; // 801FCCC4
  c->r[1]=c->r[1]+0x00000020u; // 801FCCC8
  return; // 801FCCCC
}

// fn_801FCCD0
void f_801FCCD0(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801FCCD0
  c->r[4]=c->r[3]+c->r[4]; // 801FCCD4
  goto L_801FCCE0; // 801FCCD8
L_801FCCDC:;
  c->r[5]=c->r[5]+0x00000001u; // 801FCCDC
L_801FCCE0:;
  cmpu(c,0,c->r[5],c->r[4]); // 801FCCE0
  if (crb(c,2)) { goto L_801FCCF4; } // 801FCCE4
  c->r[0]=R8(c->r[5]+0x00000000u); // 801FCCE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FCCEC
  if (!crb(c,2)) { IRQCHK(c); goto L_801FCCDC; } // 801FCCF0
L_801FCCF4:;
  c->r[3]=c->r[5]-c->r[3]; // 801FCCF4
  return; // 801FCCF8
}

// fn_801FCCFC
void f_801FCCFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCCFC
  c->r[0]=c->lr; // 801FCD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FCD04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FCD08
  c->r[31]=c->r[3]|c->r[3]; // 801FCD0C
  c->r[3]=c->r[3]+0x000001ECu; // 801FCD10
  c->r[4]=c->r[31]+0x00000208u; // 801FCD14
  c->lr=0x801FCD1Cu; f_80213DC8(c); // 801FCD18
  cmps(c,0,(int32_t)c->r[3],0); // 801FCD1C
  if (!crb(c,2)) { goto L_801FCD64; } // 801FCD20
  c->r[4]=0u+0x80340000u; // 801FCD24
  c->r[5]=R8(c->r[31]+0x00000208u); // 801FCD28
  c->r[6]=R32(c->r[31]+0x000001ECu); // 801FCD2C
  c->r[4]=c->r[4]+0xFFFFAF5Eu; // 801FCD30
  c->r[7]=R8(c->r[31]+0x000001F1u); // 801FCD34
  c->r[3]=0u+0x00000004u; // 801FCD38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCD3C
  c->lr=0x801FCD44u; f_801FE6E4(c); // 801FCD40
  c->r[3]=c->r[31]+0x000001E8u; // 801FCD44
  c->lr=0x801FCD4Cu; f_80213EA0(c); // 801FCD48
  cmps(c,0,(int32_t)c->r[3],0); // 801FCD4C
  if (crb(c,2)) { goto L_801FCD84; } // 801FCD50
  c->r[0]=0u+0x00000000u; // 801FCD54
  c->r[3]=0u+0x00000000u; // 801FCD58
  W32(c->r[31]+0x000001E8u,c->r[0]); // 801FCD5C
  goto L_801FCD84; // 801FCD60
L_801FCD64:;
  c->r[3]=c->r[31]+0x000001ECu; // 801FCD64
  c->r[4]=0u+0x00000000u; // 801FCD68
  c->r[5]=0u+0x0000001Cu; // 801FCD6C
  c->lr=0x801FCD74u; f_80004688(c); // 801FCD70
  c->r[0]=0u+0x00000000u; // 801FCD74
  c->r[3]=0u+0x00000000u; // 801FCD78
  W8(c->r[31]+0x00000208u,c->r[0]); // 801FCD7C
  W32(c->r[31]+0x000001E8u,c->r[0]); // 801FCD80
L_801FCD84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FCD84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FCD88
  c->lr=c->r[0]; // 801FCD8C
  c->r[1]=c->r[1]+0x00000010u; // 801FCD90
  return; // 801FCD94
}

// fn_801FCD98
void f_801FCD98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCD98
  c->r[0]=c->lr; // 801FCD9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FCDA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FCDA4
  c->r[31]=0u+0x00000000u; // 801FCDA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FCDAC
  c->r[30]=c->r[3]|c->r[3]; // 801FCDB0
  c->r[0]=R8(c->r[3]+0x00000246u); // 801FCDB4
  cmps(c,0,(int32_t)c->r[0],0); // 801FCDB8
  if (!crb(c,2)) { goto L_801FCDF0; } // 801FCDBC
  c->lr=0x801FCDC4u; f_80213AFC(c); // 801FCDC0
  cmps(c,0,(int32_t)c->r[3],0); // 801FCDC4
  if (crb(c,2)) { goto L_801FCDDC; } // 801FCDC8
  c->r[4]=c->r[3]|c->r[3]; // 801FCDCC
  c->r[3]=c->r[30]+0x0000011Cu; // 801FCDD0
  c->lr=0x801FCDD8u; f_801FB0B8(c); // 801FCDD4
  goto L_801FCDF0; // 801FCDD8
L_801FCDDC:;
  c->r[4]=0u+0x80340000u; // 801FCDDC
  c->r[3]=c->r[30]+0x0000011Cu; // 801FCDE0
  c->r[4]=c->r[4]+0xFFFFAF94u; // 801FCDE4
  c->lr=0x801FCDECu; f_801FB0B8(c); // 801FCDE8
  c->r[31]=0u+0xFFFFF05Au; // 801FCDEC
L_801FCDF0:;
  c->r[3]=c->r[31]|c->r[31]; // 801FCDF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FCDF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FCDF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FCDFC
  c->lr=c->r[0]; // 801FCE00
  c->r[1]=c->r[1]+0x00000010u; // 801FCE04
  return; // 801FCE08
}

// fn_801FCE0C
void f_801FCE0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCE0C
  c->r[0]=c->lr; // 801FCE10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FCE14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FCE18
  c->r[31]=0u+0x00000000u; // 801FCE1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FCE20
  c->r[30]=c->r[3]|c->r[3]; // 801FCE24
  c->r[0]=R8(c->r[3]+0x00000247u); // 801FCE28
  cmps(c,0,(int32_t)c->r[0],0); // 801FCE2C
  if (!crb(c,2)) { goto L_801FCE64; } // 801FCE30
  c->lr=0x801FCE38u; f_80213B58(c); // 801FCE34
  cmps(c,0,(int32_t)c->r[3],0); // 801FCE38
  if (crb(c,2)) { goto L_801FCE50; } // 801FCE3C
  c->r[4]=c->r[3]|c->r[3]; // 801FCE40
  c->r[3]=c->r[30]+0x000001C0u; // 801FCE44
  c->lr=0x801FCE4Cu; f_801FB0B8(c); // 801FCE48
  goto L_801FCE64; // 801FCE4C
L_801FCE50:;
  c->r[4]=0u+0x80340000u; // 801FCE50
  c->r[3]=c->r[30]+0x0000011Cu; // 801FCE54
  c->r[4]=c->r[4]+0xFFFFAF94u; // 801FCE58
  c->lr=0x801FCE60u; f_801FB0B8(c); // 801FCE5C
  c->r[31]=0u+0xFFFFF05Au; // 801FCE60
L_801FCE64:;
  c->r[3]=c->r[31]|c->r[31]; // 801FCE64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FCE68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FCE6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FCE70
  c->lr=c->r[0]; // 801FCE74
  c->r[1]=c->r[1]+0x00000010u; // 801FCE78
  return; // 801FCE7C
}

// fn_801FCE80
void f_801FCE80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCE80
  c->r[0]=c->lr; // 801FCE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FCE88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FCE8C
  c->r[31]=0u+0x00000000u; // 801FCE90
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FCE94
  c->r[30]=c->r[3]|c->r[3]; // 801FCE98
  c->r[0]=R8(c->r[3]+0x00000245u); // 801FCE9C
  cmps(c,0,(int32_t)c->r[0],0); // 801FCEA0
  if (!crb(c,2)) { goto L_801FCED8; } // 801FCEA4
  c->lr=0x801FCEACu; f_80213A6C(c); // 801FCEA8
  cmps(c,0,(int32_t)c->r[3],0); // 801FCEAC
  if (crb(c,2)) { goto L_801FCEC4; } // 801FCEB0
  c->r[4]=c->r[3]|c->r[3]; // 801FCEB4
  c->r[3]=c->r[30]+0x00000140u; // 801FCEB8
  c->lr=0x801FCEC0u; f_801FB0B8(c); // 801FCEBC
  goto L_801FCED8; // 801FCEC0
L_801FCEC4:;
  c->r[4]=0u+0x80340000u; // 801FCEC4
  c->r[3]=c->r[30]+0x00000140u; // 801FCEC8
  c->r[4]=c->r[4]+0xFFFFAF94u; // 801FCECC
  c->lr=0x801FCED4u; f_801FB0B8(c); // 801FCED0
  c->r[31]=0u+0xFFFFF05Au; // 801FCED4
L_801FCED8:;
  c->r[3]=c->r[31]|c->r[31]; // 801FCED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FCEDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FCEE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FCEE4
  c->lr=c->r[0]; // 801FCEE8
  c->r[1]=c->r[1]+0x00000010u; // 801FCEEC
  return; // 801FCEF0
}

// fn_801FCEF4
void f_801FCEF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCEF4
  c->r[0]=c->lr; // 801FCEF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801FCEFC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801FCF00
  W32(c->r[1]+0x00000038u,c->r[30]); // 801FCF04
  c->r[30]=c->r[3]|c->r[3]; // 801FCF08
  c->r[3]=c->r[3]+0x00000218u; // 801FCF0C
  c->lr=0x801FCF14u; f_801FBDD8(c); // 801FCF10
  c->r[3]=c->r[1]+0x00000014u; // 801FCF14
  c->lr=0x801FCF1Cu; f_80213C1C(c); // 801FCF18
  cmps(c,0,(int32_t)c->r[3],0); // 801FCF1C
  c->r[31]=c->r[3]|c->r[3]; // 801FCF20
  if (crb(c,2)) { goto L_801FCF5C; } // 801FCF24
  c->r[4]=0u+0x80340000u; // 801FCF28
  c->r[3]=c->r[1]+0x00000008u; // 801FCF2C
  c->r[4]=c->r[4]+0xFFFFAF95u; // 801FCF30
  c->r[5]=c->r[30]+0x000001A0u; // 801FCF34
  c->lr=0x801FCF3Cu; f_801FBCEC(c); // 801FCF38
  c->r[3]=c->r[30]+0x00000218u; // 801FCF3C
  c->r[4]=c->r[1]+0x00000008u; // 801FCF40
  c->lr=0x801FCF48u; f_801FBE10(c); // 801FCF44
  c->r[3]=c->r[1]+0x00000008u; // 801FCF48
  c->r[4]=0u+0xFFFFFFFFu; // 801FCF4C
  c->lr=0x801FCF54u; f_801FD984(c); // 801FCF50
  c->r[31]=0u+0xFFFFF05Au; // 801FCF54
  goto L_801FCF68; // 801FCF58
L_801FCF5C:;
  c->r[3]=c->r[30]+0x00000218u; // 801FCF5C
  c->r[4]=c->r[1]+0x00000014u; // 801FCF60
  c->lr=0x801FCF68u; f_801FB0B8(c); // 801FCF64
L_801FCF68:;
  c->r[3]=c->r[31]|c->r[31]; // 801FCF68
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801FCF6C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801FCF70
  c->r[0]=R32(c->r[1]+0x00000044u); // 801FCF74
  c->lr=c->r[0]; // 801FCF78
  c->r[1]=c->r[1]+0x00000040u; // 801FCF7C
  return; // 801FCF80
}

// fn_801FCF84
void f_801FCF84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FCF84
  c->r[0]=c->lr; // 801FCF88
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FCF8C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801FCF90
  c->r[31]=c->r[3]|c->r[3]; // 801FCF94
  c->r[3]=c->r[1]+0x00000008u; // 801FCF98
  c->lr=0x801FCFA0u; f_802131A0(c); // 801FCF9C
  cmps(c,0,(int32_t)c->r[3],0); // 801FCFA0
  if (!crb(c,2)) { goto L_801FCFF0; } // 801FCFA4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801FCFA8
  W32(c->r[31]+0x000001CCu,c->r[0]); // 801FCFAC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801FCFB0
  W32(c->r[31]+0x000001D4u,c->r[0]); // 801FCFB4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FCFB8
  W32(c->r[31]+0x000001DCu,c->r[0]); // 801FCFBC
  c->r[4]=R32(c->r[1]+0x00000014u); // 801FCFC0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801FCFC4
  c->r[0]=c->r[0]-c->r[4]; // 801FCFC8
  W32(c->r[31]+0x000001D0u,c->r[0]); // 801FCFCC
  c->r[4]=R32(c->r[1]+0x00000018u); // 801FCFD0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FCFD4
  c->r[0]=c->r[0]-c->r[4]; // 801FCFD8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 801FCFDC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801FCFE0
  W32(c->r[31]+0x000001E0u,c->r[0]); // 801FCFE4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801FCFE8
  W32(c->r[31]+0x000001E4u,c->r[0]); // 801FCFEC
L_801FCFF0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FCFF0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801FCFF4
  c->lr=c->r[0]; // 801FCFF8
  c->r[1]=c->r[1]+0x00000030u; // 801FCFFC
  return; // 801FD000
}

// fn_801FD004
void f_801FD004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD004
  c->r[0]=c->lr; // 801FD008
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FD00C
  c->r[11]=c->r[1]+0x00000030u; // 801FD010
  c->lr=0x801FD018u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD014
  c->r[0]=R32(c->r[3]+0x00000230u); // 801FD018
  c->r[27]=c->r[3]|c->r[3]; // 801FD01C
  c->r[28]=c->r[4]|c->r[4]; // 801FD020
  c->r[30]=0u+0x00000000u; // 801FD024
  cmps(c,0,(int32_t)c->r[0],0); // 801FD028
  c->r[29]=0u+0x00000000u; // 801FD02C
  if (crb(c,2)) { goto L_801FD03C; } // 801FD030
  c->r[29]=c->r[0]|c->r[0]; // 801FD034
  goto L_801FD05C; // 801FD038
L_801FD03C:;
  c->r[31]=0u+0x803D0000u; // 801FD03C
  c->r[3]=c->r[31]+0x00007770u; // 801FD040
  c->lr=0x801FD048u; f_80213BD0(c); // 801FD044
  cmps(c,0,(int32_t)c->r[3],0); // 801FD048
  c->r[30]=c->r[3]|c->r[3]; // 801FD04C
  if (!crb(c,2)) { goto L_801FD05C; } // 801FD050
  c->r[29]=c->r[31]+0x00007770u; // 801FD054
  W32(c->r[27]+0x00000230u,c->r[29]); // 801FD058
L_801FD05C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801FD05C
  if (crb(c,2)) { goto L_801FD09C; } // 801FD060
  c->r[0]=R8(c->r[29]+0x00000005u); // 801FD064
  c->r[5]=0u+0x80340000u; // 801FD068
  c->r[3]=c->r[28]|c->r[28]; // 801FD06C
  c->r[4]=0u+0x00000012u; // 801FD070
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FD074
  c->r[5]=c->r[5]+0xFFFFAF9Cu; // 801FD078
  c->r[6]=R8(c->r[29]+0x00000000u); // 801FD07C
  c->r[7]=R8(c->r[29]+0x00000001u); // 801FD080
  c->r[8]=R8(c->r[29]+0x00000002u); // 801FD084
  c->r[9]=R8(c->r[29]+0x00000003u); // 801FD088
  c->r[10]=R8(c->r[29]+0x00000004u); // 801FD08C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD090
  c->lr=0x801FD098u; f_8018E874(c); // 801FD094
  goto L_801FD0A8; // 801FD098
L_801FD09C:;
  c->r[0]=0u+0x00000000u; // 801FD09C
  c->r[30]=0u+0xFFFFF05Au; // 801FD0A0
  W8(c->r[28]+0x00000000u,c->r[0]); // 801FD0A4
L_801FD0A8:;
  c->r[11]=c->r[1]+0x00000030u; // 801FD0A8
  c->r[3]=c->r[30]|c->r[30]; // 801FD0AC
  c->lr=0x801FD0B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD0B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FD0B4
  c->lr=c->r[0]; // 801FD0B8
  c->r[1]=c->r[1]+0x00000030u; // 801FD0BC
  return; // 801FD0C0
}

// fn_801FD0C4
void f_801FD0C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD0C4
  c->r[0]=c->lr; // 801FD0C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD0CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FD0D0
  c->r[31]=0u+0x00000000u; // 801FD0D4
  c->r[10]=R32(c->r[3]+0x00000234u); // 801FD0D8
  cmps(c,0,(int32_t)c->r[10],0); // 801FD0DC
  if (crb(c,2)) { goto L_801FD11C; } // 801FD0E0
  c->r[0]=R8(c->r[10]+0x00000005u); // 801FD0E4
  c->r[5]=0u+0x80340000u; // 801FD0E8
  c->r[3]=c->r[4]|c->r[4]; // 801FD0EC
  c->r[4]=0u+0x00000012u; // 801FD0F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FD0F4
  c->r[5]=c->r[5]+0xFFFFAF9Cu; // 801FD0F8
  c->r[6]=R8(c->r[10]+0x00000000u); // 801FD0FC
  c->r[7]=R8(c->r[10]+0x00000001u); // 801FD100
  c->r[8]=R8(c->r[10]+0x00000002u); // 801FD104
  c->r[9]=R8(c->r[10]+0x00000003u); // 801FD108
  c->r[10]=R8(c->r[10]+0x00000004u); // 801FD10C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD110
  c->lr=0x801FD118u; f_8018E874(c); // 801FD114
  goto L_801FD128; // 801FD118
L_801FD11C:;
  c->r[0]=0u+0x00000000u; // 801FD11C
  c->r[31]=0u+0xFFFFF05Au; // 801FD120
  W8(c->r[4]+0x00000000u,c->r[0]); // 801FD124
L_801FD128:;
  c->r[3]=c->r[31]|c->r[31]; // 801FD128
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FD12C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD130
  c->lr=c->r[0]; // 801FD134
  c->r[1]=c->r[1]+0x00000020u; // 801FD138
  return; // 801FD13C
}

// fn_801FD140
void f_801FD140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD140
  c->r[0]=c->lr; // 801FD144
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD14C
  c->r[31]=c->r[3]|c->r[3]; // 801FD150
  c->r[3]=c->r[3]+0x000001BCu; // 801FD154
  c->lr=0x801FD15Cu; f_80213D78(c); // 801FD158
  cmps(c,0,(int32_t)c->r[3],0); // 801FD15C
  if (crb(c,2)) { goto L_801FD170; } // 801FD160
  c->r[0]=0u+0x00000000u; // 801FD164
  c->r[3]=0u+0xFFFFF05Au; // 801FD168
  W32(c->r[31]+0x000001BCu,c->r[0]); // 801FD16C
L_801FD170:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD174
  c->lr=c->r[0]; // 801FD178
  c->r[1]=c->r[1]+0x00000010u; // 801FD17C
  return; // 801FD180
}

// fn_801FD184
void f_801FD184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD184
  c->r[0]=c->lr; // 801FD188
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD18C
  c->r[11]=c->r[1]+0x00000020u; // 801FD190
  c->lr=0x801FD198u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD194
  c->r[31]=0u+0x80340000u; // 801FD198
  cmps(c,0,(int32_t)c->r[4],0); // 801FD19C
  c->r[31]=c->r[31]+0xFFFFAB38u; // 801FD1A0
  c->r[27]=c->r[3]|c->r[3]; // 801FD1A4
  c->r[30]=c->r[31]+0x0000045Cu; // 801FD1A8
  c->r[29]=c->r[30]|c->r[30]; // 801FD1AC
  c->r[28]=c->r[30]|c->r[30]; // 801FD1B0
  if (crb(c,2)) { goto L_801FD1BC; } // 801FD1B4
  c->r[30]=c->r[4]|c->r[4]; // 801FD1B8
L_801FD1BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801FD1BC
  if (crb(c,2)) { goto L_801FD1C8; } // 801FD1C0
  c->r[29]=c->r[5]|c->r[5]; // 801FD1C4
L_801FD1C8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801FD1C8
  if (crb(c,2)) { goto L_801FD1D4; } // 801FD1CC
  c->r[28]=c->r[6]|c->r[6]; // 801FD1D0
L_801FD1D4:;
  c->r[4]=c->r[30]|c->r[30]; // 801FD1D4
  c->r[3]=c->r[3]+0x00000010u; // 801FD1D8
  c->lr=0x801FD1E0u; f_801FDCE0(c); // 801FD1DC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FD1E0
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 801FD1E4
  if (crb(c,2)) { goto L_801FD20C; } // 801FD1E8
  c->r[5]=c->r[30]|c->r[30]; // 801FD1EC
  c->r[4]=c->r[31]+0x000004A2u; // 801FD1F0
  c->r[3]=0u+0x00000003u; // 801FD1F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD1F8
  c->lr=0x801FD200u; f_801FE6E4(c); // 801FD1FC
  c->r[4]=c->r[30]|c->r[30]; // 801FD200
  c->r[3]=c->r[27]+0x00000010u; // 801FD204
  c->lr=0x801FD20Cu; f_801FB0B8(c); // 801FD208
L_801FD20C:;
  c->r[4]=c->r[29]|c->r[29]; // 801FD20C
  c->r[3]=c->r[27]+0x0000001Cu; // 801FD210
  c->lr=0x801FD218u; f_801FDCE0(c); // 801FD214
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FD218
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 801FD21C
  if (crb(c,2)) { goto L_801FD244; } // 801FD220
  c->r[5]=c->r[29]|c->r[29]; // 801FD224
  c->r[4]=c->r[31]+0x000004B2u; // 801FD228
  c->r[3]=0u+0x00000003u; // 801FD22C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD230
  c->lr=0x801FD238u; f_801FE6E4(c); // 801FD234
  c->r[4]=c->r[29]|c->r[29]; // 801FD238
  c->r[3]=c->r[27]+0x0000001Cu; // 801FD23C
  c->lr=0x801FD244u; f_801FB0B8(c); // 801FD240
L_801FD244:;
  c->r[4]=c->r[28]|c->r[28]; // 801FD244
  c->r[3]=c->r[27]+0x00000028u; // 801FD248
  c->lr=0x801FD250u; f_801FDCE0(c); // 801FD24C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FD250
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 801FD254
  if (crb(c,2)) { goto L_801FD27C; } // 801FD258
  c->r[5]=c->r[28]|c->r[28]; // 801FD25C
  c->r[4]=c->r[31]+0x000004C2u; // 801FD260
  c->r[3]=0u+0x00000003u; // 801FD264
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD268
  c->lr=0x801FD270u; f_801FE6E4(c); // 801FD26C
  c->r[4]=c->r[28]|c->r[28]; // 801FD270
  c->r[3]=c->r[27]+0x00000028u; // 801FD274
  c->lr=0x801FD27Cu; f_801FB0B8(c); // 801FD278
L_801FD27C:;
  c->r[11]=c->r[1]+0x00000020u; // 801FD27C
  c->r[3]=0u+0x00000000u; // 801FD280
  c->lr=0x801FD288u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD284
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD288
  c->lr=c->r[0]; // 801FD28C
  c->r[1]=c->r[1]+0x00000020u; // 801FD290
  return; // 801FD294
}

// fn_801FD298
void f_801FD298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD298
  c->r[0]=c->lr; // 801FD29C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD2A0
  c->r[11]=c->r[1]+0x00000020u; // 801FD2A4
  c->lr=0x801FD2ACu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD2A8
  c->r[31]=0u+0x80340000u; // 801FD2AC
  cmps(c,0,(int32_t)c->r[4],0); // 801FD2B0
  c->r[31]=c->r[31]+0xFFFFAB38u; // 801FD2B4
  c->r[28]=c->r[3]|c->r[3]; // 801FD2B8
  c->r[30]=c->r[31]+0x0000045Cu; // 801FD2BC
  c->r[29]=c->r[30]|c->r[30]; // 801FD2C0
  if (crb(c,2)) { goto L_801FD2CC; } // 801FD2C4
  c->r[30]=c->r[4]|c->r[4]; // 801FD2C8
L_801FD2CC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801FD2CC
  if (crb(c,2)) { goto L_801FD2D8; } // 801FD2D0
  c->r[29]=c->r[5]|c->r[5]; // 801FD2D4
L_801FD2D8:;
  c->r[4]=c->r[30]|c->r[30]; // 801FD2D8
  c->r[3]=c->r[3]+0x00000034u; // 801FD2DC
  c->lr=0x801FD2E4u; f_801FDCE0(c); // 801FD2E0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FD2E4
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 801FD2E8
  if (crb(c,2)) { goto L_801FD310; } // 801FD2EC
  c->r[5]=c->r[30]|c->r[30]; // 801FD2F0
  c->r[4]=c->r[31]+0x000004D2u; // 801FD2F4
  c->r[3]=0u+0x00000003u; // 801FD2F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD2FC
  c->lr=0x801FD304u; f_801FE6E4(c); // 801FD300
  c->r[4]=c->r[30]|c->r[30]; // 801FD304
  c->r[3]=c->r[28]+0x00000034u; // 801FD308
  c->lr=0x801FD310u; f_801FB0B8(c); // 801FD30C
L_801FD310:;
  c->r[4]=c->r[29]|c->r[29]; // 801FD310
  c->r[3]=c->r[28]+0x00000040u; // 801FD314
  c->lr=0x801FD31Cu; f_801FDCE0(c); // 801FD318
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FD31C
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 801FD320
  if (crb(c,2)) { goto L_801FD348; } // 801FD324
  c->r[5]=c->r[29]|c->r[29]; // 801FD328
  c->r[4]=c->r[31]+0x000004E2u; // 801FD32C
  c->r[3]=0u+0x00000003u; // 801FD330
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD334
  c->lr=0x801FD33Cu; f_801FE6E4(c); // 801FD338
  c->r[4]=c->r[29]|c->r[29]; // 801FD33C
  c->r[3]=c->r[28]+0x00000040u; // 801FD340
  c->lr=0x801FD348u; f_801FB0B8(c); // 801FD344
L_801FD348:;
  c->r[11]=c->r[1]+0x00000020u; // 801FD348
  c->r[3]=0u+0x00000000u; // 801FD34C
  c->lr=0x801FD354u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD350
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD354
  c->lr=c->r[0]; // 801FD358
  c->r[1]=c->r[1]+0x00000020u; // 801FD35C
  return; // 801FD360
}

// fn_801FD364
void f_801FD364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD364
  c->r[0]=c->lr; // 801FD368
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FD36C
  c->r[11]=c->r[1]+0x00000030u; // 801FD370
  c->lr=0x801FD378u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD374
  c->r[31]=c->r[1]|c->r[1]; // 801FD378
  c->r[5]=0u+0x803D0000u; // 801FD37C
  c->r[29]=c->r[3]|c->r[3]; // 801FD380
  c->r[30]=c->r[4]|c->r[4]; // 801FD384
  c->r[3]=c->r[5]+0x00007404u; // 801FD388
  c->lr=0x801FD390u; f_801FA868(c); // 801FD38C
  cmps(c,0,(int32_t)c->r[30],0); // 801FD390
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801FD394
  if (crb(c,2)) { goto L_801FD3C4; } // 801FD398
  c->r[0]=R8(c->r[30]+0x00000000u); // 801FD39C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FD3A0
  if (crb(c,2)) { goto L_801FD3C4; } // 801FD3A4
  c->r[4]=c->r[30]|c->r[30]; // 801FD3A8
  c->r[3]=c->r[29]+0x0000003Cu; // 801FD3AC
  c->r[5]=0u+0x00000080u; // 801FD3B0
  c->lr=0x801FD3B8u; f_801900A4(c); // 801FD3B4
  c->r[0]=0u+0x00000000u; // 801FD3B8
  W8(c->r[29]+0x000000BBu,c->r[0]); // 801FD3BC
  goto L_801FD3CC; // 801FD3C0
L_801FD3C4:;
  c->r[0]=0u+0x00000000u; // 801FD3C4
  W8(c->r[29]+0x0000003Cu,c->r[0]); // 801FD3C8
L_801FD3CC:;
  c->r[3]=0u+0x803D0000u; // 801FD3CC
  c->r[3]=c->r[3]+0x00007404u; // 801FD3D0
  c->lr=0x801FD3D8u; f_801FA8E0(c); // 801FD3D4
  c->r[10]=c->r[31]|c->r[31]; // 801FD3D8
  c->r[11]=c->r[10]+0x00000030u; // 801FD3DC
  c->lr=0x801FD3E4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD3E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FD3E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FD3E8
  c->r[1]=c->r[10]|c->r[10]; // 801FD3EC
  c->lr=c->r[0]; // 801FD3F0
  return; // 801FD3F4
}

// fn_801FD3F8
void f_801FD3F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD3F8
  c->r[0]=c->lr; // 801FD3FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FD400
  c->r[11]=c->r[1]+0x00000030u; // 801FD404
  c->lr=0x801FD40Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD408
  c->r[31]=c->r[1]|c->r[1]; // 801FD40C
  c->r[6]=0u+0x803D0000u; // 801FD410
  c->r[28]=c->r[3]|c->r[3]; // 801FD414
  c->r[29]=c->r[4]|c->r[4]; // 801FD418
  c->r[30]=c->r[5]|c->r[5]; // 801FD41C
  c->r[3]=c->r[6]+0x00007404u; // 801FD420
  c->lr=0x801FD428u; f_801FA868(c); // 801FD424
  cmps(c,0,(int32_t)c->r[29],0); // 801FD428
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801FD42C
  if (crb(c,2)) { goto L_801FD454; } // 801FD430
  c->r[0]=R8(c->r[29]+0x00000000u); // 801FD434
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FD438
  if (crb(c,2)) { goto L_801FD454; } // 801FD43C
  c->r[3]=c->r[29]|c->r[29]; // 801FD440
  c->r[4]=0u+0x00000000u; // 801FD444
  c->r[5]=0u+0x00000000u; // 801FD448
  c->lr=0x801FD450u; f_80192280(c); // 801FD44C
  W32(c->r[28]+0x00000038u,c->r[3]); // 801FD450
L_801FD454:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FD454
  if (crb(c,2)) { goto L_801FD484; } // 801FD458
  c->r[0]=R8(c->r[30]+0x00000000u); // 801FD45C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FD460
  if (crb(c,2)) { goto L_801FD484; } // 801FD464
  c->r[4]=c->r[30]|c->r[30]; // 801FD468
  c->r[3]=c->r[28]+0x0000003Cu; // 801FD46C
  c->r[5]=0u+0x00000080u; // 801FD470
  c->lr=0x801FD478u; f_801900A4(c); // 801FD474
  c->r[0]=0u+0x00000000u; // 801FD478
  W8(c->r[28]+0x000000BBu,c->r[0]); // 801FD47C
  goto L_801FD48C; // 801FD480
L_801FD484:;
  c->r[0]=0u+0x00000000u; // 801FD484
  W8(c->r[28]+0x0000003Cu,c->r[0]); // 801FD488
L_801FD48C:;
  c->r[3]=0u+0x803D0000u; // 801FD48C
  c->r[3]=c->r[3]+0x00007404u; // 801FD490
  c->lr=0x801FD498u; f_801FA8E0(c); // 801FD494
  c->r[10]=c->r[31]|c->r[31]; // 801FD498
  c->r[11]=c->r[10]+0x00000030u; // 801FD49C
  c->lr=0x801FD4A4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD4A0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FD4A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FD4A8
  c->r[1]=c->r[10]|c->r[10]; // 801FD4AC
  c->lr=c->r[0]; // 801FD4B0
  return; // 801FD4B4
}

// fn_801FD4B8
void f_801FD4B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD4B8
  c->r[0]=c->lr; // 801FD4BC
  c->r[5]=0u+0x803D0000u; // 801FD4C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD4C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD4C8
  c->r[31]=c->r[4]|c->r[4]; // 801FD4CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FD4D0
  c->r[30]=c->r[3]|c->r[3]; // 801FD4D4
  c->r[3]=c->r[5]+0x00007404u; // 801FD4D8
  c->lr=0x801FD4E0u; f_801FA868(c); // 801FD4DC
  c->r[3]=R32(c->r[30]+0x000000BCu); // 801FD4E0
  c->r[0]=0u+0x00000000u; // 801FD4E4
  W32(c->r[30]+0x00000034u,c->r[0]); // 801FD4E8
  cmps(c,0,(int32_t)c->r[3],1); // 801FD4EC
  if (!crb(c,2)) { goto L_801FD4FC; } // 801FD4F0
  W32(c->r[30]+0x00000030u,c->r[31]); // 801FD4F4
  goto L_801FD508; // 801FD4F8
L_801FD4FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FD4FC
  if (!crb(c,2)) { goto L_801FD508; } // 801FD500
  W32(c->r[30]+0x00000030u,c->r[0]); // 801FD504
L_801FD508:;
  c->r[3]=0u+0x803D0000u; // 801FD508
  c->r[3]=c->r[3]+0x00007404u; // 801FD50C
  c->lr=0x801FD514u; f_801FA8E0(c); // 801FD510
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD518
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FD51C
  c->lr=c->r[0]; // 801FD520
  c->r[1]=c->r[1]+0x00000010u; // 801FD524
  return; // 801FD528
}

// fn_801FD52C
void f_801FD52C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD52C
  c->r[0]=c->lr; // 801FD530
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD534
  c->r[11]=c->r[1]+0x00000020u; // 801FD538
  c->lr=0x801FD540u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD53C
  c->r[31]=0u+0x803D0000u; // 801FD540
  c->r[29]=c->r[3]|c->r[3]; // 801FD544
  c->r[30]=c->r[4]|c->r[4]; // 801FD548
  c->r[3]=c->r[31]+0x00007404u; // 801FD54C
  c->lr=0x801FD554u; f_801FA868(c); // 801FD550
  c->r[0]=R32(c->r[29]+0x00000034u); // 801FD554
  c->r[3]=c->r[31]+0x00007404u; // 801FD558
  c->r[0]=c->r[0]+c->r[30]; // 801FD55C
  W32(c->r[29]+0x00000034u,c->r[0]); // 801FD560
  c->lr=0x801FD568u; f_801FA8E0(c); // 801FD564
  c->r[11]=c->r[1]+0x00000020u; // 801FD568
  c->lr=0x801FD570u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD56C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD570
  c->lr=c->r[0]; // 801FD574
  c->r[1]=c->r[1]+0x00000020u; // 801FD578
  return; // 801FD57C
}

// fn_801FD580
void f_801FD580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD580
  c->r[0]=c->lr; // 801FD584
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD588
  c->r[11]=c->r[1]+0x00000020u; // 801FD58C
  c->lr=0x801FD594u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD590
  c->r[30]=0u+0x00000001u; // 801FD594
  W32(c->r[3]+0x00000004u,c->r[4]); // 801FD598
  c->r[31]=0u+0x803D0000u; // 801FD59C
  c->r[29]=c->r[3]|c->r[3]; // 801FD5A0
  W32(c->r[3]+0x00000014u,c->r[30]); // 801FD5A4
  c->r[3]=c->r[31]+0x00007404u; // 801FD5A8
  c->lr=0x801FD5B0u; f_801FA868(c); // 801FD5AC
  c->r[3]=c->r[29]+0x00000020u; // 801FD5B0
  c->r[4]=0u+0x00000000u; // 801FD5B4
  c->r[5]=0u+0x0000009Cu; // 801FD5B8
  c->lr=0x801FD5C0u; f_80004688(c); // 801FD5BC
  c->r[3]=0u+0xFFFFF057u; // 801FD5C0
  c->r[0]=0u+0x00000000u; // 801FD5C4
  W32(c->r[29]+0x00000020u,c->r[3]); // 801FD5C8
  c->r[3]=c->r[31]+0x00007404u; // 801FD5CC
  W32(c->r[29]+0x00000028u,c->r[30]); // 801FD5D0
  W32(c->r[29]+0x000000BCu,c->r[0]); // 801FD5D4
  c->lr=0x801FD5DCu; f_801FA8E0(c); // 801FD5D8
  c->lr=0x801FD5E0u; f_80201FC0(c); // 801FD5DC
  c->r[11]=c->r[1]+0x00000020u; // 801FD5E0
  c->r[3]=0u+0x00000000u; // 801FD5E4
  c->lr=0x801FD5ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD5E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD5EC
  c->lr=c->r[0]; // 801FD5F0
  c->r[1]=c->r[1]+0x00000020u; // 801FD5F4
  return; // 801FD5F8
}

// fn_801FD5FC
void f_801FD5FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD5FC
  c->r[0]=c->lr; // 801FD600
  c->r[5]=0u+0x803D0000u; // 801FD604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD60C
  c->r[31]=c->r[4]|c->r[4]; // 801FD610
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FD614
  c->r[30]=c->r[3]|c->r[3]; // 801FD618
  c->r[3]=c->r[5]+0x00007404u; // 801FD61C
  c->lr=0x801FD624u; f_801FA868(c); // 801FD620
  c->r[0]=0u+0x00000002u; // 801FD624
  cmps(c,0,(int32_t)c->r[31],0); // 801FD628
  W32(c->r[30]+0x00000020u,c->r[31]); // 801FD62C
  W32(c->r[30]+0x00000028u,c->r[0]); // 801FD630
  if (!crb(c,0)) { goto L_801FD684; } // 801FD634
  c->r[0]=R32(c->r[30]+0x00000038u); // 801FD638
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801FD63C
  if (!crb(c,2)) { goto L_801FD64C; } // 801FD640
  c->r[0]=0u+0x00000000u; // 801FD644
  W32(c->r[30]+0x00000038u,c->r[0]); // 801FD648
L_801FD64C:;
  c->r[3]=c->r[30]+0x00000008u; // 801FD64C
  c->lr=0x801FD654u; f_801FACC0(c); // 801FD650
  c->r[4]=0u+0x80340000u; // 801FD654
  c->r[5]=c->r[3]|c->r[3]; // 801FD658
  c->r[6]=c->r[31]|c->r[31]; // 801FD65C
  c->r[3]=0u+0x00000003u; // 801FD660
  c->r[4]=c->r[4]+0xFFFFB02Au; // 801FD664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD668
  c->lr=0x801FD670u; f_801FE6E4(c); // 801FD66C
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801FD670
  c->r[3]=c->r[30]|c->r[30]; // 801FD674
  c->r[12]=R32(c->r[12]+0x00000008u); // 801FD678
  c->ctr=c->r[12]; // 801FD67C
  if (true) { c->lr=0x801FD684u; dispatch(c,c->ctr); } // 801FD680
L_801FD684:;
  c->r[3]=0u+0x803D0000u; // 801FD684
  c->r[3]=c->r[3]+0x00007404u; // 801FD688
  c->lr=0x801FD690u; f_801FA8E0(c); // 801FD68C
  c->lr=0x801FD694u; f_80201FC0(c); // 801FD690
  c->r[0]=0u+0x00000003u; // 801FD694
  W32(c->r[30]+0x00000014u,c->r[0]); // 801FD698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD69C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FD6A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD6A4
  c->lr=c->r[0]; // 801FD6A8
  c->r[1]=c->r[1]+0x00000010u; // 801FD6AC
  return; // 801FD6B0
}

// fn_801FD6B4
void f_801FD6B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD6B4
  c->r[0]=c->lr; // 801FD6B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FD6BC
  c->r[11]=c->r[1]+0x00000030u; // 801FD6C0
  c->lr=0x801FD6C8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD6C4
  c->r[4]=R32(c->r[3]+0x00000000u); // 801FD6C8
  c->r[26]=c->r[3]|c->r[3]; // 801FD6CC
  c->r[3]=c->r[4]+0x00000040u; // 801FD6D0
  c->lr=0x801FD6D8u; f_801FACC0(c); // 801FD6D4
  c->r[4]=R32(c->r[26]+0x00000000u); // 801FD6D8
  c->r[31]=c->r[3]|c->r[3]; // 801FD6DC
  c->r[3]=c->r[4]+0x00000034u; // 801FD6E0
  c->lr=0x801FD6E8u; f_801FACC0(c); // 801FD6E4
  c->r[4]=R32(c->r[26]+0x00000000u); // 801FD6E8
  c->r[30]=c->r[3]|c->r[3]; // 801FD6EC
  c->r[3]=c->r[4]+0x00000028u; // 801FD6F0
  c->lr=0x801FD6F8u; f_801FACC0(c); // 801FD6F4
  c->r[4]=R32(c->r[26]+0x00000000u); // 801FD6F8
  c->r[29]=c->r[3]|c->r[3]; // 801FD6FC
  c->r[3]=c->r[4]+0x0000001Cu; // 801FD700
  c->lr=0x801FD708u; f_801FACC0(c); // 801FD704
  c->r[4]=R32(c->r[26]+0x00000000u); // 801FD708
  c->r[28]=c->r[3]|c->r[3]; // 801FD70C
  c->r[3]=c->r[4]+0x00000010u; // 801FD710
  c->lr=0x801FD718u; f_801FACC0(c); // 801FD714
  c->r[27]=c->r[3]|c->r[3]; // 801FD718
  c->r[3]=c->r[26]+0x00000008u; // 801FD71C
  c->lr=0x801FD724u; f_801FACC0(c); // 801FD720
  c->r[4]=0u+0x80340000u; // 801FD724
  c->r[5]=c->r[3]|c->r[3]; // 801FD728
  c->r[6]=c->r[27]|c->r[27]; // 801FD72C
  c->r[7]=c->r[28]|c->r[28]; // 801FD730
  c->r[8]=c->r[29]|c->r[29]; // 801FD734
  c->r[9]=c->r[30]|c->r[30]; // 801FD738
  c->r[10]=c->r[31]|c->r[31]; // 801FD73C
  c->r[4]=c->r[4]+0xFFFFB038u; // 801FD740
  c->r[3]=0u+0x00000003u; // 801FD744
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD748
  c->lr=0x801FD750u; f_801FE6E4(c); // 801FD74C
  c->r[6]=R32(c->r[26]+0x00000014u); // 801FD750
  c->r[4]=0u+0x80340000u; // 801FD754
  c->r[3]=R32(c->r[26]+0x00000030u); // 801FD758
  c->r[5]=c->r[26]+0x0000003Cu; // 801FD75C
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 801FD760
  c->r[4]=c->r[4]+0xFFFFB083u; // 801FD764
  W32(c->r[1]+0x00000008u,c->r[3]); // 801FD768
  c->r[0]=cntlz(c->r[0]); // 801FD76C
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 801FD770
  c->r[3]=0u+0x00000003u; // 801FD774
  c->r[7]=R32(c->r[26]+0x0000002Cu); // 801FD778
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801FD77C
  c->r[0]=R32(c->r[26]+0x00000038u); // 801FD780
  W32(c->r[1]+0x00000010u,c->r[0]); // 801FD784
  W32(c->r[1]+0x00000014u,c->r[5]); // 801FD788
  c->r[5]=R32(c->r[26]+0x00000004u); // 801FD78C
  c->r[7]=R32(c->r[26]+0x00000028u); // 801FD790
  c->r[8]=R32(c->r[26]+0x00000020u); // 801FD794
  c->r[10]=R32(c->r[26]+0x00000034u); // 801FD798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD79C
  c->lr=0x801FD7A4u; f_801FE6E4(c); // 801FD7A0
  c->r[11]=c->r[1]+0x00000030u; // 801FD7A4
  c->lr=0x801FD7ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD7A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FD7AC
  c->lr=c->r[0]; // 801FD7B0
  c->r[1]=c->r[1]+0x00000030u; // 801FD7B4
  return; // 801FD7B8
}

// fn_801FD7BC
void f_801FD7BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD7BC
  c->r[0]=c->lr; // 801FD7C0
  cmps(c,0,(int32_t)c->r[3],0); // 801FD7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD7C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD7CC
  c->r[31]=c->r[4]|c->r[4]; // 801FD7D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FD7D4
  c->r[30]=c->r[3]|c->r[3]; // 801FD7D8
  if (crb(c,2)) { goto L_801FD7FC; } // 801FD7DC
  c->r[4]=0u+0xFFFFFFFFu; // 801FD7E0
  c->r[3]=c->r[3]+0x00000008u; // 801FD7E4
  c->lr=0x801FD7ECu; f_801FD984(c); // 801FD7E8
  cmps(c,0,(int32_t)c->r[31],0); // 801FD7EC
  if (!crb(c,1)) { goto L_801FD7FC; } // 801FD7F0
  c->r[3]=c->r[30]|c->r[30]; // 801FD7F4
  c->lr=0x801FD7FCu; f_8020224C(c); // 801FD7F8
L_801FD7FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801FD7FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD800
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FD804
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD808
  c->lr=c->r[0]; // 801FD80C
  c->r[1]=c->r[1]+0x00000010u; // 801FD810
  return; // 801FD814
}

// dtor_801FD818
void f_801FD818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD818
  c->r[0]=c->lr; // 801FD81C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD820
  c->r[11]=c->r[1]+0x00000020u; // 801FD824
  c->lr=0x801FD82Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD828
  cmps(c,0,(int32_t)c->r[3],0); // 801FD82C
  c->r[28]=c->r[3]|c->r[3]; // 801FD830
  c->r[29]=c->r[4]|c->r[4]; // 801FD834
  if (crb(c,2)) { goto L_801FD8CC; } // 801FD838
  c->r[5]=R32(c->r[3]+0x00000000u); // 801FD83C
  cmps(c,0,(int32_t)c->r[5],0); // 801FD840
  if (crb(c,2)) { goto L_801FD8B0; } // 801FD844
  c->r[30]=R32(c->r[3]+0x00000004u); // 801FD848
  c->r[0]=c->r[30]-c->r[30]; // 801FD84C
  c->r[4]=rotl(c->r[30],5)&0xFFFFFFE0u; // 801FD850
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FD854
  c->r[31]=c->r[5]+c->r[4]; // 801FD858
  goto L_801FD878; // 801FD85C
L_801FD860:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE0u,0); cr0(c,c->r[31]); // 801FD860
  if (crb(c,2)) { goto L_801FD874; } // 801FD864
  c->r[3]=c->r[31]+0x00000010u; // 801FD868
  c->r[4]=0u+0xFFFFFFFFu; // 801FD86C
  c->lr=0x801FD874u; f_801FD984(c); // 801FD870
L_801FD874:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801FD874
L_801FD878:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FD878
  if (!crb(c,2)) { IRQCHK(c); goto L_801FD860; } // 801FD87C
  c->r[5]=R32(c->r[28]+0x00000008u); // 801FD880
  c->r[4]=0u+0x80340000u; // 801FD884
  c->r[30]=R32(c->r[28]+0x00000000u); // 801FD888
  c->r[4]=c->r[4]+0xFFFFB2A8u; // 801FD88C
  c->r[7]=rotl(c->r[5],5)&0xFFFFFFE0u; // 801FD890
  c->r[3]=0u+0x00000006u; // 801FD894
  c->r[8]=c->r[30]|c->r[30]; // 801FD898
  c->r[6]=0u+0x00000020u; // 801FD89C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD8A0
  c->lr=0x801FD8A8u; f_801FE6E4(c); // 801FD8A4
  c->r[3]=c->r[30]|c->r[30]; // 801FD8A8
  c->lr=0x801FD8B0u; f_80202098(c); // 801FD8AC
L_801FD8B0:;
  c->r[3]=c->r[28]+0x00000008u; // 801FD8B0
  c->r[4]=0u+0xFFFFFFFFu; // 801FD8B4
  c->lr=0x801FD8BCu; f_801FAFC4(c); // 801FD8B8
  cmps(c,0,(int32_t)c->r[29],0); // 801FD8BC
  if (!crb(c,1)) { goto L_801FD8CC; } // 801FD8C0
  c->r[3]=c->r[28]|c->r[28]; // 801FD8C4
  c->lr=0x801FD8CCu; f_800D6AD0(c); // 801FD8C8
L_801FD8CC:;
  c->r[11]=c->r[1]+0x00000020u; // 801FD8CC
  c->r[3]=c->r[28]|c->r[28]; // 801FD8D0
  c->lr=0x801FD8D8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FD8D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD8D8
  c->lr=c->r[0]; // 801FD8DC
  c->r[1]=c->r[1]+0x00000020u; // 801FD8E0
  return; // 801FD8E4
}

// fn_801FD8E8
void f_801FD8E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD8E8
  c->r[0]=c->lr; // 801FD8EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD8F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FD8F4
  c->r[31]=c->r[4]|c->r[4]; // 801FD8F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FD8FC
  c->r[30]=c->r[3]|c->r[3]; // 801FD900
  c->lr=0x801FD908u; f_801FE0C4(c); // 801FD904
  c->r[4]=R32(c->r[31]+0x00000000u); // 801FD908
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 801FD90C
  if (!crb(c,2)) { goto L_801FD92C; } // 801FD910
  c->r[3]=R32(c->r[31]+0x00000004u); // 801FD914
  c->r[0]=R32(c->r[31]+0x00000008u); // 801FD918
  W32(c->r[30]+0x00000000u,c->r[4]); // 801FD91C
  W32(c->r[30]+0x00000004u,c->r[3]); // 801FD920
  W32(c->r[30]+0x00000008u,c->r[0]); // 801FD924
  goto L_801FD968; // 801FD928
L_801FD92C:;
  c->r[3]=c->r[30]|c->r[30]; // 801FD92C
  c->lr=0x801FD934u; f_801FAFA4(c); // 801FD930
  c->r[4]=R32(c->r[31]+0x00000004u); // 801FD934
  c->r[3]=c->r[30]|c->r[30]; // 801FD938
  c->lr=0x801FD940u; f_801FDA1C(c); // 801FD93C
  c->r[5]=R8(c->r[1]+0x00000008u); // 801FD940
  c->r[3]=c->r[30]|c->r[30]; // 801FD944
  c->r[6]=R32(c->r[31]+0x00000008u); // 801FD948
  c->r[8]=c->r[1]+0x00000009u; // 801FD94C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801FD950
  c->r[4]=0u+0x00000000u; // 801FD954
  W8(c->r[1]+0x00000009u,c->r[5]); // 801FD958
  c->r[5]=0u+0x00000000u; // 801FD95C
  c->r[7]=c->r[6]+c->r[0]; // 801FD960
  c->lr=0x801FD968u; f_801FDDF4(c); // 801FD964
L_801FD968:;
  c->r[3]=c->r[30]|c->r[30]; // 801FD968
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FD96C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FD970
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FD974
  c->lr=c->r[0]; // 801FD978
  c->r[1]=c->r[1]+0x00000020u; // 801FD97C
  return; // 801FD980
}

// dtor_801FD984
void f_801FD984(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD984
  c->r[0]=c->lr; // 801FD988
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FD98C
  c->r[11]=c->r[1]+0x00000020u; // 801FD990
  c->lr=0x801FD998u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD994
  cmps(c,0,(int32_t)c->r[3],0); // 801FD998
  c->r[29]=c->r[3]|c->r[3]; // 801FD99C
  c->r[30]=c->r[4]|c->r[4]; // 801FD9A0
  if (crb(c,2)) { goto L_801FDA00; } // 801FD9A4
  c->r[4]=R32(c->r[3]+0x00000000u); // 801FD9A8
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 801FD9AC
  if (crb(c,2)) { goto L_801FD9E4; } // 801FD9B0
  c->r[31]=R32(c->r[3]+0x00000008u); // 801FD9B4
  c->r[5]=rotl(c->r[4],0)&0x7FFFFFFFu; // 801FD9B8
  c->r[4]=0u+0x80340000u; // 801FD9BC
  c->r[3]=0u+0x00000006u; // 801FD9C0
  c->r[7]=c->r[5]|c->r[5]; // 801FD9C4
  c->r[8]=c->r[31]|c->r[31]; // 801FD9C8
  c->r[4]=c->r[4]+0xFFFFB2A8u; // 801FD9CC
  c->r[6]=0u+0x00000001u; // 801FD9D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD9D4
  c->lr=0x801FD9DCu; f_801FE6E4(c); // 801FD9D8
  c->r[3]=c->r[31]|c->r[31]; // 801FD9DC
  c->lr=0x801FD9E4u; f_80202098(c); // 801FD9E0
L_801FD9E4:;
  c->r[3]=c->r[29]|c->r[29]; // 801FD9E4
  c->r[4]=0u+0xFFFFFFFFu; // 801FD9E8
  c->lr=0x801FD9F0u; f_801FAF64(c); // 801FD9EC
  cmps(c,0,(int32_t)c->r[30],0); // 801FD9F0
  if (!crb(c,1)) { goto L_801FDA00; } // 801FD9F4
  c->r[3]=c->r[29]|c->r[29]; // 801FD9F8
  c->lr=0x801FDA00u; f_800D6AD0(c); // 801FD9FC
L_801FDA00:;
  c->r[11]=c->r[1]+0x00000020u; // 801FDA00
  c->r[3]=c->r[29]|c->r[29]; // 801FDA04
  c->lr=0x801FDA0Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FDA08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FDA0C
  c->lr=c->r[0]; // 801FDA10
  c->r[1]=c->r[1]+0x00000020u; // 801FDA14
  return; // 801FDA18
}

// fn_801FDA1C
void f_801FDA1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDA1C
  c->r[0]=c->lr; // 801FDA20
  W32(c->r[1]+0x00000064u,c->r[0]); // 801FDA24
  c->r[11]=c->r[1]+0x00000060u; // 801FDA28
  c->lr=0x801FDA30u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FDA2C
  c->r[31]=c->r[1]|c->r[1]; // 801FDA30
  c->r[5]=0u+0x80000000u; // 801FDA34
  c->r[27]=0u+0x80340000u; // 801FDA38
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 801FDA3C
  c->r[30]=c->r[3]|c->r[3]; // 801FDA40
  cmpu(c,0,c->r[4],c->r[0]); // 801FDA44
  c->r[22]=c->r[4]|c->r[4]; // 801FDA48
  c->r[27]=c->r[27]+0xFFFFAB38u; // 801FDA4C
  if (!crb(c,1)) { goto L_801FDA74; } // 801FDA50
  c->r[3]=c->r[31]+0x00000008u; // 801FDA54
  c->r[4]=c->r[27]+0x000007DDu; // 801FDA58
  c->lr=0x801FDA60u; f_801FDBE4(c); // 801FDA5C
  c->r[5]=0u+0x80190000u; // 801FDA60
  c->r[4]=c->r[3]|c->r[3]; // 801FDA64
  c->r[3]=c->r[27]+0x000007A6u; // 801FDA68
  c->r[5]=c->r[5]+0x00006CC8u; // 801FDA6C
  c->lr=0x801FDA74u; f_80187DA8(c); // 801FDA70
L_801FDA74:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801FDA74
  c->r[28]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[28]); // 801FDA78
  if (!crb(c,2)) { goto L_801FDA90; } // 801FDA7C
  c->r[0]=R8(c->r[30]+0x00000000u); // 801FDA80
  c->r[25]=0u+0x0000000Bu; // 801FDA84
  c->r[26]=rotl(c->r[0],0)&0x0000007Fu; // 801FDA88
  goto L_801FDA98; // 801FDA8C
L_801FDA90:;
  c->r[26]=R32(c->r[30]+0x00000004u); // 801FDA90
  c->r[25]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801FDA94
L_801FDA98:;
  cmpu(c,0,c->r[22],c->r[26]); // 801FDA98
  if (!crb(c,0)) { goto L_801FDAA4; } // 801FDA9C
  c->r[22]=c->r[26]|c->r[26]; // 801FDAA0
L_801FDAA4:;
  c->r[0]=c->r[22]+0x00000001u; // 801FDAA4
  c->r[29]=0u+0x0000000Bu; // 801FDAA8
  cmpu(c,0,c->r[0],0x0000000Bu); // 801FDAAC
  if (!crb(c,1)) { goto L_801FDABC; } // 801FDAB0
  c->r[0]=c->r[22]+0x00000010u; // 801FDAB4
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFF0u; // 801FDAB8
L_801FDABC:;
  cmpu(c,1,c->r[29],c->r[25]); // 801FDABC
  if (crb(c,6)) { goto L_801FDBC4; } // 801FDAC0
  cmpu(c,0,c->r[29],0x0000000Bu); // 801FDAC4
  if (!crb(c,2)) { goto L_801FDADC; } // 801FDAC8
  c->r[23]=R32(c->r[30]+0x00000008u); // 801FDACC
  c->r[24]=c->r[30]+0x00000001u; // 801FDAD0
  c->r[22]=0u+0x00000000u; // 801FDAD4
  goto L_801FDB48; // 801FDAD8
L_801FDADC:;
  if (!crb(c,5)) { goto L_801FDAF8; } // 801FDADC
  c->r[3]=c->r[30]|c->r[30]; // 801FDAE0
  c->r[4]=c->r[29]|c->r[29]; // 801FDAE4
  c->r[5]=0u+0x00000000u; // 801FDAE8
  c->lr=0x801FDAF0u; f_801FE0C8(c); // 801FDAEC
  c->r[24]=c->r[3]|c->r[3]; // 801FDAF0
  goto L_801FDB30; // 801FDAF4
L_801FDAF8:;
  W32(c->r[31]+0x00000028u,c->r[1]); // 801FDAF8
  c->r[3]=c->r[30]|c->r[30]; // 801FDAFC
  c->r[4]=c->r[29]|c->r[29]; // 801FDB00
  c->r[5]=0u+0x00000000u; // 801FDB04
  c->lr=0x801FDB0Cu; f_801FE0C8(c); // 801FDB08
  c->r[24]=c->r[3]|c->r[3]; // 801FDB0C
  goto L_801FDB30; // 801FDB10
  c->r[3]=c->r[31]+0x00000014u; // 801FDB14
  c->lr=0x801FDB1Cu; f_80187EEC(c); // 801FDB18
  c->r[0]=c->r[0]|0x00000000u; // 801FDB1C
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FDB20
  c->r[1]=R32(c->r[31]+0x00000028u); // 801FDB24
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FDB28
  goto L_801FDBC4; // 801FDB2C
L_801FDB30:;
  cmps(c,0,(int32_t)c->r[28],0); // 801FDB30
  c->r[22]=0u+0x00000001u; // 801FDB34
  if (crb(c,2)) { goto L_801FDB44; } // 801FDB38
  c->r[23]=R32(c->r[30]+0x00000008u); // 801FDB3C
  goto L_801FDB48; // 801FDB40
L_801FDB44:;
  c->r[23]=c->r[30]+0x00000001u; // 801FDB44
L_801FDB48:;
  c->r[3]=c->r[24]|c->r[24]; // 801FDB48
  c->r[4]=c->r[23]|c->r[23]; // 801FDB4C
  c->r[5]=c->r[26]|c->r[26]; // 801FDB50
  c->lr=0x801FDB58u; f_8018C04C(c); // 801FDB54
  c->r[0]=0u+0x00000000u; // 801FDB58
  cmps(c,0,(int32_t)c->r[28],0); // 801FDB5C
  W8(c->r[24]+c->r[26],c->r[0]); // 801FDB60
  if (crb(c,2)) { goto L_801FDB90; } // 801FDB64
  c->r[5]=c->r[25]|c->r[25]; // 801FDB68
  c->r[7]=c->r[25]|c->r[25]; // 801FDB6C
  c->r[8]=c->r[23]|c->r[23]; // 801FDB70
  c->r[4]=c->r[27]+0x00000770u; // 801FDB74
  c->r[3]=0u+0x00000006u; // 801FDB78
  c->r[6]=0u+0x00000001u; // 801FDB7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDB80
  c->lr=0x801FDB88u; f_801FE6E4(c); // 801FDB84
  c->r[3]=c->r[23]|c->r[23]; // 801FDB88
  c->lr=0x801FDB90u; f_80202098(c); // 801FDB8C
L_801FDB90:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801FDB90
  c->r[0]=(rotl(c->r[22],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 801FDB94
  cmps(c,0,(int32_t)c->r[22],0); // 801FDB98
  W32(c->r[30]+0x00000000u,c->r[0]); // 801FDB9C
  if (!crb(c,2)) { goto L_801FDBB4; } // 801FDBA0
  c->r[0]=R8(c->r[30]+0x00000000u); // 801FDBA4
  c->r[0]=(rotl(c->r[26],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 801FDBA8
  W8(c->r[30]+0x00000000u,c->r[0]); // 801FDBAC
  goto L_801FDBC4; // 801FDBB0
L_801FDBB4:;
  c->r[0]=(rotl(c->r[29],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 801FDBB4
  W32(c->r[30]+0x00000008u,c->r[24]); // 801FDBB8
  W32(c->r[30]+0x00000004u,c->r[26]); // 801FDBBC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801FDBC0
L_801FDBC4:;
  c->r[10]=c->r[31]|c->r[31]; // 801FDBC4
  c->r[11]=c->r[10]+0x00000060u; // 801FDBC8
  c->lr=0x801FDBD0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FDBCC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FDBD0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FDBD4
  c->r[1]=c->r[10]|c->r[10]; // 801FDBD8
  c->lr=c->r[0]; // 801FDBDC
  return; // 801FDBE0
}

// fn_801FDBE4
void f_801FDBE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDBE4
  c->r[0]=c->lr; // 801FDBE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FDBEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FDBF0
  c->r[31]=c->r[3]|c->r[3]; // 801FDBF4
  c->lr=0x801FDBFCu; f_801FDC20(c); // 801FDBF8
  c->r[4]=0u+0x80330000u; // 801FDBFC
  c->r[3]=c->r[31]|c->r[31]; // 801FDC00
  c->r[4]=c->r[4]+0x00000BE0u; // 801FDC04
  W32(c->r[31]+0x00000000u,c->r[4]); // 801FDC08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FDC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FDC10
  c->lr=c->r[0]; // 801FDC14
  c->r[1]=c->r[1]+0x00000010u; // 801FDC18
  return; // 801FDC1C
}

// fn_801FDC20
void f_801FDC20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDC20
  c->r[0]=c->lr; // 801FDC24
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FDC28
  c->r[11]=c->r[1]+0x00000030u; // 801FDC2C
  c->lr=0x801FDC34u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FDC30
  c->r[5]=0u+0x80330000u; // 801FDC34
  c->r[0]=0u+0x00000000u; // 801FDC38
  c->r[5]=c->r[5]+0x00000C08u; // 801FDC3C
  c->r[30]=c->r[4]|c->r[4]; // 801FDC40
  W32(c->r[3]+0x00000000u,c->r[5]); // 801FDC44
  c->r[29]=c->r[3]|c->r[3]; // 801FDC48
  c->r[3]=c->r[30]|c->r[30]; // 801FDC4C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801FDC50
  c->lr=0x801FDC58u; f_80185588(c); // 801FDC54
  c->r[3]=c->r[3]+0x00000001u; // 801FDC58
  c->lr=0x801FDC60u; f_800D6A64(c); // 801FDC5C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801FDC60
  c->r[0]=c->r[1]+0x00000008u; // 801FDC64
  c->r[31]=c->r[3]|c->r[3]; // 801FDC68
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801FDC6C
  c->r[3]=0u+0x00000010u; // 801FDC70
  W32(c->r[1]+0x00000010u,c->r[0]); // 801FDC74
  c->lr=0x801FDC7Cu; f_800D6A50(c); // 801FDC78
  cmps(c,0,(int32_t)c->r[3],0); // 801FDC7C
  if (crb(c,2)) { goto L_801FDCA0; } // 801FDC80
  c->r[0]=0u+0x00000001u; // 801FDC84
  c->r[4]=0u+0x80330000u; // 801FDC88
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FDC8C
  c->r[4]=c->r[4]+0x00000B98u; // 801FDC90
  W32(c->r[3]+0x00000008u,c->r[0]); // 801FDC94
  W32(c->r[3]+0x00000000u,c->r[4]); // 801FDC98
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801FDC9C
L_801FDCA0:;
  W32(c->r[29]+0x00000008u,c->r[3]); // 801FDCA0
  c->r[0]=0u+0x00000000u; // 801FDCA4
  c->r[3]=c->r[1]+0x0000000Cu; // 801FDCA8
  c->r[4]=0u+0xFFFFFFFFu; // 801FDCAC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801FDCB0
  c->lr=0x801FDCB8u; f_80196B90(c); // 801FDCB4
  c->r[3]=R32(c->r[29]+0x00000004u); // 801FDCB8
  c->r[4]=c->r[30]|c->r[30]; // 801FDCBC
  c->lr=0x801FDCC4u; f_8018FFE4(c); // 801FDCC0
  c->r[11]=c->r[1]+0x00000030u; // 801FDCC4
  c->r[3]=c->r[29]|c->r[29]; // 801FDCC8
  c->lr=0x801FDCD0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FDCCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FDCD0
  c->lr=c->r[0]; // 801FDCD4
  c->r[1]=c->r[1]+0x00000030u; // 801FDCD8
  return; // 801FDCDC
}

// fn_801FDCE0
void f_801FDCE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDCE0
  c->r[0]=c->lr; // 801FDCE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FDCE8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801FDCEC
  c->r[31]=c->r[4]|c->r[4]; // 801FDCF0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801FDCF4
  c->r[30]=c->r[3]|c->r[3]; // 801FDCF8
  c->r[3]=c->r[31]|c->r[31]; // 801FDCFC
  c->lr=0x801FDD04u; f_80185588(c); // 801FDD00
  W32(c->r[1]+0x00000018u,c->r[3]); // 801FDD04
  c->r[3]=c->r[30]|c->r[30]; // 801FDD08
  c->lr=0x801FDD10u; f_801FBAA0(c); // 801FDD0C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801FDD10
  c->r[3]=c->r[30]|c->r[30]; // 801FDD14
  c->r[4]=c->r[1]+0x00000008u; // 801FDD18
  c->r[5]=c->r[1]+0x0000000Cu; // 801FDD1C
  c->lr=0x801FDD24u; f_801FBDA0(c); // 801FDD20
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801FDD24
  c->r[4]=c->r[1]+0x00000014u; // 801FDD28
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801FDD2C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801FDD30
  cmpu(c,0,c->r[3],c->r[0]); // 801FDD34
  W32(c->r[1]+0x00000014u,c->r[5]); // 801FDD38
  if (!crb(c,0)) { goto L_801FDD44; } // 801FDD3C
  c->r[4]=c->r[1]+0x0000001Cu; // 801FDD40
L_801FDD44:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801FDD44
  c->r[4]=c->r[31]|c->r[31]; // 801FDD48
  c->r[0]=R32(c->r[1]+0x00000018u); // 801FDD4C
  c->r[5]=c->r[1]+0x00000010u; // 801FDD50
  W32(c->r[1]+0x00000010u,c->r[3]); // 801FDD54
  cmpu(c,0,c->r[0],c->r[3]); // 801FDD58
  c->r[3]=R32(c->r[1]+0x00000008u); // 801FDD5C
  if (!crb(c,0)) { goto L_801FDD68; } // 801FDD60
  c->r[5]=c->r[1]+0x00000018u; // 801FDD64
L_801FDD68:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801FDD68
  c->lr=0x801FDD70u; f_8018C170(c); // 801FDD6C
  cmps(c,0,(int32_t)c->r[3],0); // 801FDD70
  if (!crb(c,2)) { goto L_801FDDA0; } // 801FDD74
  c->r[0]=R32(c->r[1]+0x00000018u); // 801FDD78
  c->r[3]=R32(c->r[1]+0x00000010u); // 801FDD7C
  cmpu(c,0,c->r[3],c->r[0]); // 801FDD80
  if (!crb(c,0)) { goto L_801FDD90; } // 801FDD84
  c->r[3]=0u+0xFFFFFFFFu; // 801FDD88
  goto L_801FDDA0; // 801FDD8C
L_801FDD90:;
  if (!crb(c,2)) { goto L_801FDD9C; } // 801FDD90
  c->r[3]=0u+0x00000000u; // 801FDD94
  goto L_801FDDA0; // 801FDD98
L_801FDD9C:;
  c->r[3]=0u+0x00000001u; // 801FDD9C
L_801FDDA0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FDDA0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801FDDA4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801FDDA8
  c->lr=c->r[0]; // 801FDDAC
  c->r[1]=c->r[1]+0x00000030u; // 801FDDB0
  return; // 801FDDB4
}

// fn_801FDDB8
void f_801FDDB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDDB8
  c->r[0]=c->lr; // 801FDDBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FDDC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FDDC4
  c->r[31]=c->r[3]|c->r[3]; // 801FDDC8
  c->lr=0x801FDDD0u; f_801FDC20(c); // 801FDDCC
  c->r[4]=0u+0x80330000u; // 801FDDD0
  c->r[3]=c->r[31]|c->r[31]; // 801FDDD4
  c->r[4]=c->r[4]+0x00000BB8u; // 801FDDD8
  W32(c->r[31]+0x00000000u,c->r[4]); // 801FDDDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FDDE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FDDE4
  c->lr=c->r[0]; // 801FDDE8
  c->r[1]=c->r[1]+0x00000010u; // 801FDDEC
  return; // 801FDDF0
}

// fn_801FDDF4
void f_801FDDF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDDF4
  c->r[0]=c->lr; // 801FDDF8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801FDDFC
  c->r[11]=c->r[1]+0x00000080u; // 801FDE00
  c->lr=0x801FDE08u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FDE04
  W32(c->r[1]+0x00000008u,c->r[5]); // 801FDE08
  c->r[30]=0u+0x80340000u; // 801FDE0C
  c->r[19]=c->r[3]|c->r[3]; // 801FDE10
  c->r[20]=c->r[4]|c->r[4]; // 801FDE14
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801FDE18
  c->r[21]=c->r[7]|c->r[7]; // 801FDE1C
  c->r[30]=c->r[30]+0xFFFFAB38u; // 801FDE20
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FDE24
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 801FDE28
  if (!crb(c,2)) { goto L_801FDE44; } // 801FDE2C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FDE30
  c->r[29]=c->r[3]+0x00000001u; // 801FDE34
  c->r[27]=0u+0x0000000Bu; // 801FDE38
  c->r[28]=rotl(c->r[0],0)&0x0000007Fu; // 801FDE3C
  goto L_801FDE50; // 801FDE40
L_801FDE44:;
  c->r[29]=R32(c->r[3]+0x00000008u); // 801FDE44
  c->r[27]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801FDE48
  c->r[28]=R32(c->r[3]+0x00000004u); // 801FDE4C
L_801FDE50:;
  cmpu(c,0,c->r[4],c->r[28]); // 801FDE50
  if (!crb(c,1)) { goto L_801FDE78; } // 801FDE54
  c->r[3]=c->r[1]+0x00000034u; // 801FDE58
  c->r[4]=c->r[30]+0x00000839u; // 801FDE5C
  c->lr=0x801FDE64u; f_801FDDB8(c); // 801FDE60
  c->r[5]=0u+0x80190000u; // 801FDE64
  c->r[4]=c->r[3]|c->r[3]; // 801FDE68
  c->r[3]=c->r[30]+0x00000802u; // 801FDE6C
  c->r[5]=c->r[5]+0x00006D5Cu; // 801FDE70
  c->lr=0x801FDE78u; f_80187DA8(c); // 801FDE74
L_801FDE78:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801FDE78
  c->r[3]=c->r[28]-c->r[20]; // 801FDE7C
  W32(c->r[1]+0x00000014u,c->r[3]); // 801FDE80
  c->r[5]=c->r[1]+0x00000008u; // 801FDE84
  cmpu(c,0,c->r[3],c->r[0]); // 801FDE88
  if (!crb(c,0)) { goto L_801FDE94; } // 801FDE8C
  c->r[5]=c->r[1]+0x00000014u; // 801FDE90
L_801FDE94:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801FDE94
  c->r[3]=0u+0x80000000u; // 801FDE98
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801FDE9C
  c->r[26]=R32(c->r[5]+0x00000000u); // 801FDEA0
  c->r[25]=c->r[21]-c->r[4]; // 801FDEA4
  cmpu(c,0,c->r[25],c->r[0]); // 801FDEA8
  if (crb(c,1)) { goto L_801FDEC0; } // 801FDEAC
  c->r[3]=c->r[28]-c->r[26]; // 801FDEB0
  c->r[0]=c->r[0]-c->r[25]; // 801FDEB4
  cmpu(c,0,c->r[3],c->r[0]); // 801FDEB8
  if (!crb(c,1)) { goto L_801FDEE0; } // 801FDEBC
L_801FDEC0:;
  c->r[3]=c->r[1]+0x00000028u; // 801FDEC0
  c->r[4]=c->r[30]+0x00000854u; // 801FDEC4
  c->lr=0x801FDECCu; f_801FDBE4(c); // 801FDEC8
  c->r[5]=0u+0x80190000u; // 801FDECC
  c->r[4]=c->r[3]|c->r[3]; // 801FDED0
  c->r[3]=c->r[30]+0x000007A6u; // 801FDED4
  c->r[5]=c->r[5]+0x00006CC8u; // 801FDED8
  c->lr=0x801FDEE0u; f_80187DA8(c); // 801FDEDC
L_801FDEE0:;
  c->r[3]=c->r[28]-c->r[26]; // 801FDEE0
  c->r[0]=c->r[20]+c->r[26]; // 801FDEE4
  c->r[24]=c->r[25]+c->r[3]; // 801FDEE8
  cmpu(c,0,c->r[24],c->r[27]); // 801FDEEC
  c->r[23]=c->r[28]-c->r[0]; // 801FDEF0
  if (crb(c,0)) { goto L_801FDFD4; } // 801FDEF4
  c->r[3]=c->r[27]+0x0000000Fu; // 801FDEF8
  c->r[0]=c->r[24]+0x00000001u; // 801FDEFC
  c->r[28]=rotl(c->r[3],0)&0xFFFFFFF0u; // 801FDF00
  goto L_801FDF14; // 801FDF04
L_801FDF08:;
  c->r[3]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801FDF08
  c->r[3]=c->r[3]+0x0000000Fu; // 801FDF0C
  c->r[28]=rotl(c->r[3],0)&0xFFFFFFF0u; // 801FDF10
L_801FDF14:;
  cmpu(c,0,c->r[28],c->r[0]); // 801FDF14
  if (crb(c,0)) { IRQCHK(c); goto L_801FDF08; } // 801FDF18
  c->r[3]=c->r[19]|c->r[19]; // 801FDF1C
  c->r[4]=c->r[28]|c->r[28]; // 801FDF20
  c->r[5]=0u+0x00000000u; // 801FDF24
  c->lr=0x801FDF2Cu; f_801FE0C8(c); // 801FDF28
  cmps(c,0,(int32_t)c->r[20],0); // 801FDF2C
  c->r[22]=c->r[3]|c->r[3]; // 801FDF30
  if (crb(c,2)) { goto L_801FDF44; } // 801FDF34
  c->r[4]=c->r[29]|c->r[29]; // 801FDF38
  c->r[5]=c->r[20]|c->r[20]; // 801FDF3C
  c->lr=0x801FDF44u; f_80004338(c); // 801FDF40
L_801FDF44:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801FDF44
  c->r[18]=c->r[22]+c->r[20]; // 801FDF48
  c->r[3]=c->r[18]|c->r[18]; // 801FDF4C
  c->r[5]=c->r[21]-c->r[4]; // 801FDF50
  c->lr=0x801FDF58u; f_8018C04C(c); // 801FDF54
  cmps(c,0,(int32_t)c->r[23],0); // 801FDF58
  if (crb(c,2)) { goto L_801FDF74; } // 801FDF5C
  c->r[0]=c->r[29]+c->r[20]; // 801FDF60
  c->r[5]=c->r[23]|c->r[23]; // 801FDF64
  c->r[3]=c->r[18]+c->r[25]; // 801FDF68
  c->r[4]=c->r[26]+c->r[0]; // 801FDF6C
  c->lr=0x801FDF74u; f_80004338(c); // 801FDF70
L_801FDF74:;
  c->r[0]=R8(c->r[30]+0x00000800u); // 801FDF74
  cmps(c,0,(int32_t)c->r[31],0); // 801FDF78
  W8(c->r[22]+c->r[24],c->r[0]); // 801FDF7C
  if (crb(c,2)) { goto L_801FDFB0; } // 801FDF80
  c->r[5]=c->r[27]|c->r[27]; // 801FDF84
  c->r[7]=c->r[27]|c->r[27]; // 801FDF88
  c->r[8]=c->r[29]|c->r[29]; // 801FDF8C
  c->r[4]=c->r[30]+0x00000770u; // 801FDF90
  c->r[3]=0u+0x00000006u; // 801FDF94
  c->r[6]=0u+0x00000001u; // 801FDF98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDF9C
  c->lr=0x801FDFA4u; f_801FE6E4(c); // 801FDFA0
  c->r[3]=c->r[29]|c->r[29]; // 801FDFA4
  c->lr=0x801FDFACu; f_80202098(c); // 801FDFA8
  goto L_801FDFBC; // 801FDFAC
L_801FDFB0:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 801FDFB0
  c->r[0]=c->r[0]|0x80000000u; // 801FDFB4
  W32(c->r[19]+0x00000000u,c->r[0]); // 801FDFB8
L_801FDFBC:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 801FDFBC
  c->r[0]=(rotl(c->r[28],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 801FDFC0
  W32(c->r[19]+0x00000008u,c->r[22]); // 801FDFC4
  W32(c->r[19]+0x00000004u,c->r[24]); // 801FDFC8
  W32(c->r[19]+0x00000000u,c->r[0]); // 801FDFCC
  goto L_801FE0A8; // 801FDFD0
L_801FDFD4:;
  c->r[4]=c->r[19]|c->r[19]; // 801FDFD4
  c->r[3]=c->r[1]+0x0000001Cu; // 801FDFD8
  c->lr=0x801FDFE0u; f_801FE0C4(c); // 801FDFDC
  c->r[3]=c->r[1]+0x0000001Cu; // 801FDFE0
  c->lr=0x801FDFE8u; f_801FAFA4(c); // 801FDFE4
  cmps(c,0,(int32_t)c->r[23],0); // 801FDFE8
  if (crb(c,2)) { goto L_801FE04C; } // 801FDFEC
  c->r[0]=c->r[29]+c->r[20]; // 801FDFF0
  c->r[0]=c->r[25]+c->r[0]; // 801FDFF4
  cmpu(c,0,c->r[0],c->r[21]); // 801FDFF8
  if (!crb(c,0)) { goto L_801FE04C; } // 801FDFFC
  c->r[0]=c->r[29]+c->r[28]; // 801FE000
  cmpu(c,0,c->r[21],c->r[0]); // 801FE004
  if (crb(c,1)) { goto L_801FE04C; } // 801FE008
  c->r[22]=R32(c->r[1]+0x0000000Cu); // 801FE00C
  c->r[3]=c->r[1]+0x0000001Cu; // 801FE010
  c->lr=0x801FE018u; f_801FBAA0(c); // 801FE014
  c->r[0]=R8(c->r[1]+0x00000010u); // 801FE018
  c->r[5]=c->r[3]|c->r[3]; // 801FE01C
  c->r[6]=c->r[22]|c->r[22]; // 801FE020
  c->r[7]=c->r[21]|c->r[21]; // 801FE024
  W8(c->r[1]+0x00000011u,c->r[0]); // 801FE028
  c->r[3]=c->r[1]+0x0000001Cu; // 801FE02C
  c->r[8]=c->r[1]+0x00000011u; // 801FE030
  c->r[4]=0u+0x00000000u; // 801FE034
  c->lr=0x801FE03Cu; f_801FDDF4(c); // 801FE038
  c->r[3]=c->r[1]+0x0000001Cu; // 801FE03C
  c->r[4]=c->r[1]+0x0000000Cu; // 801FE040
  c->r[5]=c->r[1]+0x00000018u; // 801FE044
  c->lr=0x801FE04Cu; f_801FBDA0(c); // 801FE048
L_801FE04C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801FE04C
  if (crb(c,2)) { goto L_801FE068; } // 801FE050
  c->r[0]=c->r[29]+c->r[20]; // 801FE054
  c->r[5]=c->r[23]|c->r[23]; // 801FE058
  c->r[3]=c->r[0]+c->r[25]; // 801FE05C
  c->r[4]=c->r[0]+c->r[26]; // 801FE060
  c->lr=0x801FE068u; f_8018C04C(c); // 801FE064
L_801FE068:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801FE068
  c->r[5]=c->r[25]|c->r[25]; // 801FE06C
  c->r[3]=c->r[29]+c->r[20]; // 801FE070
  c->lr=0x801FE078u; f_8018C04C(c); // 801FE074
  c->r[0]=R8(c->r[30]+0x00000801u); // 801FE078
  cmps(c,0,(int32_t)c->r[31],0); // 801FE07C
  W8(c->r[29]+c->r[24],c->r[0]); // 801FE080
  if (!crb(c,2)) { goto L_801FE098; } // 801FE084
  c->r[0]=R8(c->r[19]+0x00000000u); // 801FE088
  c->r[0]=(rotl(c->r[24],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 801FE08C
  W8(c->r[19]+0x00000000u,c->r[0]); // 801FE090
  goto L_801FE09C; // 801FE094
L_801FE098:;
  W32(c->r[19]+0x00000004u,c->r[24]); // 801FE098
L_801FE09C:;
  c->r[3]=c->r[1]+0x0000001Cu; // 801FE09C
  c->r[4]=0u+0xFFFFFFFFu; // 801FE0A0
  c->lr=0x801FE0A8u; f_801FD984(c); // 801FE0A4
L_801FE0A8:;
  c->r[11]=c->r[1]+0x00000080u; // 801FE0A8
  c->r[3]=c->r[19]|c->r[19]; // 801FE0AC
  c->lr=0x801FE0B4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE0B0
  c->r[0]=R32(c->r[1]+0x00000084u); // 801FE0B4
  c->lr=c->r[0]; // 801FE0B8
  c->r[1]=c->r[1]+0x00000080u; // 801FE0BC
  return; // 801FE0C0
}

// fn_801FE0C4
void f_801FE0C4(Ctx* __restrict c) {
  return; // 801FE0C4
}

// fn_801FE0C8
void f_801FE0C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE0C8
  c->r[0]=c->lr; // 801FE0CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FE0D0
  c->r[11]=c->r[1]+0x00000020u; // 801FE0D4
  c->lr=0x801FE0DCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE0D8
  c->r[31]=0u+0x80340000u; // 801FE0DC
  c->r[29]=c->r[4]|c->r[4]; // 801FE0E0
  c->r[31]=c->r[31]+0xFFFFAB38u; // 801FE0E4
  c->r[3]=0u+0x00000006u; // 801FE0E8
  c->r[5]=c->r[29]|c->r[29]; // 801FE0EC
  c->r[7]=c->r[29]|c->r[29]; // 801FE0F0
  c->r[4]=c->r[31]+0x000008E8u; // 801FE0F4
  c->r[6]=0u+0x00000001u; // 801FE0F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE0FC
  c->lr=0x801FE104u; f_801FE6E4(c); // 801FE100
  c->r[3]=c->r[29]|c->r[29]; // 801FE104
  c->lr=0x801FE10Cu; f_80202030(c); // 801FE108
  cmps(c,0,(int32_t)c->r[3],0); // 801FE10C
  c->r[30]=c->r[3]|c->r[3]; // 801FE110
  if (!crb(c,2)) { goto L_801FE154; } // 801FE114
  c->r[5]=c->r[29]|c->r[29]; // 801FE118
  c->r[7]=c->r[29]|c->r[29]; // 801FE11C
  c->r[4]=c->r[31]+0x00000914u; // 801FE120
  c->r[3]=0u+0x00000001u; // 801FE124
  c->r[6]=0u+0x00000001u; // 801FE128
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE12C
  c->lr=0x801FE134u; f_801FE6E4(c); // 801FE130
  c->r[4]=0u+0x80330000u; // 801FE134
  c->r[5]=0u+0x80180000u; // 801FE138
  c->r[4]=c->r[4]+0x00000178u; // 801FE13C
  c->r[3]=c->r[31]+0x0000094Du; // 801FE140
  W32(c->r[1]+0x00000008u,c->r[4]); // 801FE144
  c->r[4]=c->r[1]+0x00000008u; // 801FE148
  c->r[5]=c->r[5]+0x0000570Cu; // 801FE14C
  c->lr=0x801FE154u; f_80187DA8(c); // 801FE150
L_801FE154:;
  c->r[5]=c->r[30]|c->r[30]; // 801FE154
  c->r[4]=c->r[31]+0x0000096Fu; // 801FE158
  c->r[3]=0u+0x00000006u; // 801FE15C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE160
  c->lr=0x801FE168u; f_801FE6E4(c); // 801FE164
  c->r[11]=c->r[1]+0x00000020u; // 801FE168
  c->r[3]=c->r[30]|c->r[30]; // 801FE16C
  c->lr=0x801FE174u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE170
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FE174
  c->lr=c->r[0]; // 801FE178
  c->r[1]=c->r[1]+0x00000020u; // 801FE17C
  return; // 801FE180
}

// fn_801FE184
void f_801FE184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE184
  c->r[0]=c->lr; // 801FE188
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FE18C
  c->r[11]=c->r[1]+0x000000F0u; // 801FE190
  c->lr=0x801FE198u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE194
  c->r[30]=c->r[3]|c->r[3]; // 801FE198
  c->r[27]=c->r[4]|c->r[4]; // 801FE19C
  c->r[28]=c->r[5]|c->r[5]; // 801FE1A0
  c->r[29]=c->r[6]|c->r[6]; // 801FE1A4
  c->lr=0x801FE1ACu; f_801FACC0(c); // 801FE1A8
  c->r[31]=c->r[3]|c->r[3]; // 801FE1AC
  c->r[5]=c->r[3]+0x0000001Cu; // 801FE1B0
  c->r[4]=c->r[31]|c->r[31]; // 801FE1B4
  goto L_801FE1C0; // 801FE1B8
L_801FE1BC:;
  c->r[4]=c->r[4]+0x00000001u; // 801FE1BC
L_801FE1C0:;
  cmpu(c,0,c->r[4],c->r[5]); // 801FE1C0
  if (crb(c,2)) { goto L_801FE1D4; } // 801FE1C4
  c->r[0]=R8(c->r[4]+0x00000000u); // 801FE1C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801FE1CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801FE1BC; } // 801FE1D0
L_801FE1D4:;
  c->r[5]=c->r[4]-c->r[3]; // 801FE1D4
  cmpu(c,0,c->r[5],0x0000001Au); // 801FE1D8
  if (!crb(c,2)) { goto L_801FE1F8; } // 801FE1DC
  c->r[4]=c->r[31]|c->r[31]; // 801FE1E0
  c->r[3]=c->r[1]+0x00000058u; // 801FE1E4
  c->r[5]=0u+0x0000001Cu; // 801FE1E8
  c->lr=0x801FE1F0u; f_80004338(c); // 801FE1EC
  c->r[0]=0u+0x00000001u; // 801FE1F0
  goto L_801FE25C; // 801FE1F4
L_801FE1F8:;
  cmpu(c,0,c->r[5],0x00000010u); // 801FE1F8
  if (crb(c,2)) { goto L_801FE21C; } // 801FE1FC
  c->r[4]=0u+0x80340000u; // 801FE200
  c->r[3]=0u+0x00000001u; // 801FE204
  c->r[4]=c->r[4]+0xFFFFB58Cu; // 801FE208
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE20C
  c->lr=0x801FE214u; f_801FE6E4(c); // 801FE210
  c->r[0]=0u+0x00000000u; // 801FE214
  goto L_801FE25C; // 801FE218
L_801FE21C:;
  c->r[3]=c->r[1]+0x00000058u; // 801FE21C
  c->r[4]=0u+0x00000000u; // 801FE220
  c->r[5]=0u+0x00000004u; // 801FE224
  c->lr=0x801FE22Cu; f_80004688(c); // 801FE228
  c->r[3]=c->r[1]+0x00000058u; // 801FE22C
  c->r[4]=0u+0x00000030u; // 801FE230
  c->r[5]=0u+0x00000012u; // 801FE234
  c->lr=0x801FE23Cu; f_80004688(c); // 801FE238
  c->r[3]=c->r[1]+0x0000006Au; // 801FE23C
  c->r[4]=c->r[31]+0x00000008u; // 801FE240
  c->lr=0x801FE248u; f_8018FFE4(c); // 801FE244
  c->r[4]=c->r[31]|c->r[31]; // 801FE248
  c->r[3]=c->r[1]+0x00000060u; // 801FE24C
  c->r[5]=0u+0x00000008u; // 801FE250
  c->lr=0x801FE258u; f_80004338(c); // 801FE254
  c->r[0]=0u+0x00000001u; // 801FE258
L_801FE25C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801FE25C
  if (!crb(c,2)) { goto L_801FE28C; } // 801FE260
  c->r[3]=c->r[30]|c->r[30]; // 801FE264
  c->lr=0x801FE26Cu; f_801FACC0(c); // 801FE268
  c->r[4]=0u+0x80340000u; // 801FE26C
  c->r[5]=c->r[3]|c->r[3]; // 801FE270
  c->r[4]=c->r[4]+0xFFFFB5A2u; // 801FE274
  c->r[3]=0u+0x00000003u; // 801FE278
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE27C
  c->lr=0x801FE284u; f_801FE6E4(c); // 801FE280
  c->r[3]=0u+0xFFFFF04Fu; // 801FE284
  goto L_801FE3CC; // 801FE288
L_801FE28C:;
  c->r[31]=c->r[1]+0x0000004Cu; // 801FE28C
  c->r[3]=c->r[31]|c->r[31]; // 801FE290
  c->lr=0x801FE298u; f_801FAF60(c); // 801FE294
  c->r[3]=c->r[31]|c->r[31]; // 801FE298
  c->lr=0x801FE2A0u; f_801FAFA4(c); // 801FE29C
  c->r[3]=c->r[1]+0x00000058u; // 801FE2A0
  c->lr=0x801FE2A8u; f_80185588(c); // 801FE2A4
  c->r[30]=c->r[3]|c->r[3]; // 801FE2A8
  c->r[3]=c->r[31]|c->r[31]; // 801FE2AC
  c->r[4]=c->r[30]|c->r[30]; // 801FE2B0
  c->lr=0x801FE2B8u; f_801FDA1C(c); // 801FE2B4
  c->r[0]=R8(c->r[1]+0x00000009u); // 801FE2B8
  c->r[6]=c->r[1]+0x00000058u; // 801FE2BC
  c->r[7]=c->r[6]|c->r[6]; // 801FE2C0
  c->r[3]=c->r[31]|c->r[31]; // 801FE2C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801FE2C8
  c->r[7]=c->r[7]+c->r[30]; // 801FE2CC
  c->r[8]=c->r[1]+0x00000008u; // 801FE2D0
  c->r[4]=0u+0x00000000u; // 801FE2D4
  c->r[5]=0u+0x00000000u; // 801FE2D8
  c->lr=0x801FE2E0u; f_801FDDF4(c); // 801FE2DC
  c->r[4]=c->r[31]|c->r[31]; // 801FE2E0
  c->r[3]=c->r[1]+0x00000018u; // 801FE2E4
  c->r[5]=0u+0x00000000u; // 801FE2E8
  c->r[6]=0u+0x00000006u; // 801FE2EC
  c->lr=0x801FE2F4u; f_801FE3E4(c); // 801FE2F0
  c->r[3]=c->r[27]|c->r[27]; // 801FE2F4
  c->r[4]=c->r[1]+0x00000018u; // 801FE2F8
  c->lr=0x801FE300u; f_801FBE10(c); // 801FE2FC
  c->r[3]=c->r[1]+0x00000018u; // 801FE300
  c->r[4]=0u+0xFFFFFFFFu; // 801FE304
  c->lr=0x801FE30Cu; f_801FD984(c); // 801FE308
  c->r[4]=c->r[31]|c->r[31]; // 801FE30C
  c->r[3]=c->r[1]+0x0000000Cu; // 801FE310
  c->r[5]=0u+0x00000006u; // 801FE314
  c->r[6]=0u+0x0000000Au; // 801FE318
  c->lr=0x801FE320u; f_801FE3E4(c); // 801FE31C
  c->r[3]=c->r[28]|c->r[28]; // 801FE320
  c->r[4]=c->r[1]+0x0000000Cu; // 801FE324
  c->lr=0x801FE32Cu; f_801FBE10(c); // 801FE328
  c->r[3]=c->r[1]+0x0000000Cu; // 801FE32C
  c->r[4]=0u+0xFFFFFFFFu; // 801FE330
  c->lr=0x801FE338u; f_801FD984(c); // 801FE334
  c->r[4]=c->r[31]|c->r[31]; // 801FE338
  c->r[3]=c->r[1]+0x00000040u; // 801FE33C
  c->r[5]=0u+0x00000010u; // 801FE340
  c->r[6]=0u+0x0000000Au; // 801FE344
  c->lr=0x801FE34Cu; f_801FE3E4(c); // 801FE348
  c->r[3]=c->r[1]+0x00000034u; // 801FE34C
  c->lr=0x801FE354u; f_801FAF60(c); // 801FE350
  c->r[3]=c->r[1]+0x00000034u; // 801FE354
  c->lr=0x801FE35Cu; f_801FAFA4(c); // 801FE358
  c->r[3]=c->r[1]+0x00000074u; // 801FE35C
  c->lr=0x801FE364u; f_801F9C04(c); // 801FE360
  c->r[3]=c->r[1]+0x00000040u; // 801FE364
  c->lr=0x801FE36Cu; f_801FACC0(c); // 801FE368
  c->r[4]=c->r[3]|c->r[3]; // 801FE36C
  c->r[3]=c->r[1]+0x00000074u; // 801FE370
  c->r[5]=0u+0x0000000Au; // 801FE374
  c->lr=0x801FE37Cu; f_801F9C44(c); // 801FE378
  c->r[3]=c->r[1]+0x00000024u; // 801FE37C
  c->r[4]=c->r[1]+0x00000074u; // 801FE380
  c->lr=0x801FE388u; f_801F9D20(c); // 801FE384
  c->r[3]=c->r[1]+0x00000024u; // 801FE388
  c->r[5]=c->r[1]+0x00000034u; // 801FE38C
  c->r[4]=0u+0x00000010u; // 801FE390
  c->lr=0x801FE398u; f_80209038(c); // 801FE394
  c->r[3]=c->r[29]|c->r[29]; // 801FE398
  c->r[4]=c->r[1]+0x00000034u; // 801FE39C
  c->lr=0x801FE3A4u; f_801FBE10(c); // 801FE3A0
  c->r[3]=c->r[1]+0x00000034u; // 801FE3A4
  c->r[4]=0u+0xFFFFFFFFu; // 801FE3A8
  c->lr=0x801FE3B0u; f_801FD984(c); // 801FE3AC
  c->r[3]=c->r[1]+0x00000040u; // 801FE3B0
  c->r[4]=0u+0xFFFFFFFFu; // 801FE3B4
  c->lr=0x801FE3BCu; f_801FD984(c); // 801FE3B8
  c->r[3]=c->r[31]|c->r[31]; // 801FE3BC
  c->r[4]=0u+0xFFFFFFFFu; // 801FE3C0
  c->lr=0x801FE3C8u; f_801FD984(c); // 801FE3C4
  c->r[3]=0u+0x00000000u; // 801FE3C8
L_801FE3CC:;
  c->r[11]=c->r[1]+0x000000F0u; // 801FE3CC
  c->lr=0x801FE3D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE3D0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801FE3D4
  c->lr=c->r[0]; // 801FE3D8
  c->r[1]=c->r[1]+0x000000F0u; // 801FE3DC
  return; // 801FE3E0
}

// fn_801FE3E4
void f_801FE3E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE3E4
  c->r[0]=c->lr; // 801FE3E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801FE3EC
  c->r[11]=c->r[1]+0x00000040u; // 801FE3F0
  c->lr=0x801FE3F8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE3F4
  W32(c->r[1]+0x00000020u,c->r[6]); // 801FE3F8
  c->r[31]=c->r[3]|c->r[3]; // 801FE3FC
  c->r[29]=c->r[4]|c->r[4]; // 801FE400
  c->r[30]=c->r[5]|c->r[5]; // 801FE404
  c->lr=0x801FE40Cu; f_801FE0C4(c); // 801FE408
  c->r[3]=c->r[31]|c->r[31]; // 801FE40C
  c->lr=0x801FE414u; f_801FAFA4(c); // 801FE410
  c->r[3]=c->r[29]|c->r[29]; // 801FE414
  c->lr=0x801FE41Cu; f_801FBAA0(c); // 801FE418
  cmpu(c,0,c->r[30],c->r[3]); // 801FE41C
  if (crb(c,1)) { goto L_801FE448; } // 801FE420
  c->r[0]=R32(c->r[1]+0x00000020u); // 801FE424
  c->r[4]=c->r[3]-c->r[30]; // 801FE428
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801FE42C
  c->r[3]=c->r[1]+0x00000020u; // 801FE430
  cmpu(c,0,c->r[4],c->r[0]); // 801FE434
  if (!crb(c,0)) { goto L_801FE440; } // 801FE438
  c->r[3]=c->r[1]+0x0000000Cu; // 801FE43C
L_801FE440:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801FE440
  goto L_801FE44C; // 801FE444
L_801FE448:;
  c->r[4]=0u+0x00000000u; // 801FE448
L_801FE44C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FE44C
  c->lr=0x801FE454u; f_801FDA1C(c); // 801FE450
  c->r[0]=R32(c->r[1]+0x00000020u); // 801FE454
  c->r[3]=c->r[29]|c->r[29]; // 801FE458
  c->r[4]=c->r[1]+0x0000001Cu; // 801FE45C
  c->r[5]=c->r[1]+0x00000018u; // 801FE460
  W32(c->r[1]+0x00000010u,c->r[0]); // 801FE464
  c->lr=0x801FE46Cu; f_801FBDA0(c); // 801FE468
  c->r[0]=R32(c->r[1]+0x00000018u); // 801FE46C
  cmpu(c,0,c->r[30],c->r[0]); // 801FE470
  if (!crb(c,1)) { goto L_801FE4A0; } // 801FE474
  c->r[4]=0u+0x80340000u; // 801FE478
  c->r[3]=c->r[1]+0x00000024u; // 801FE47C
  c->r[4]=c->r[4]+0xFFFFB5FAu; // 801FE480
  c->lr=0x801FE488u; f_801FDDB8(c); // 801FE484
  c->r[5]=0u+0x80190000u; // 801FE488
  c->r[6]=0u+0x80340000u; // 801FE48C
  c->r[4]=c->r[3]|c->r[3]; // 801FE490
  c->r[3]=c->r[6]+0xFFFFB5C3u; // 801FE494
  c->r[5]=c->r[5]+0x00006D5Cu; // 801FE498
  c->lr=0x801FE4A0u; f_80187DA8(c); // 801FE49C
L_801FE4A0:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801FE4A0
  c->r[3]=c->r[1]+0x00000010u; // 801FE4A4
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801FE4A8
  c->r[4]=c->r[0]-c->r[30]; // 801FE4AC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE4B0
  c->r[6]=c->r[5]+c->r[30]; // 801FE4B4
  W32(c->r[1]+0x00000014u,c->r[4]); // 801FE4B8
  cmpu(c,0,c->r[4],c->r[0]); // 801FE4BC
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 801FE4C0
  if (!crb(c,0)) { goto L_801FE4CC; } // 801FE4C4
  c->r[3]=c->r[1]+0x00000014u; // 801FE4C8
L_801FE4CC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801FE4CC
  c->r[3]=c->r[31]|c->r[31]; // 801FE4D0
  c->r[0]=R8(c->r[1]+0x00000008u); // 801FE4D4
  c->r[8]=c->r[1]+0x00000009u; // 801FE4D8
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FE4DC
  c->r[7]=c->r[6]+c->r[4]; // 801FE4E0
  c->r[4]=0u+0x00000000u; // 801FE4E4
  c->r[5]=0u+0x00000000u; // 801FE4E8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801FE4EC
  c->lr=0x801FE4F4u; f_801FDDF4(c); // 801FE4F0
  c->r[11]=c->r[1]+0x00000040u; // 801FE4F4
  c->lr=0x801FE4FCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE4F8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801FE4FC
  c->lr=c->r[0]; // 801FE500
  c->r[1]=c->r[1]+0x00000040u; // 801FE504
  return; // 801FE508
}

// fn_801FE50C
void f_801FE50C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE50C
  c->r[0]=c->lr; // 801FE510
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FE514
  c->r[11]=c->r[1]+0x00000030u; // 801FE518
  c->lr=0x801FE520u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE51C
  c->r[31]=c->r[4]|c->r[4]; // 801FE520
  c->r[25]=c->r[3]|c->r[3]; // 801FE524
  c->r[26]=c->r[5]|c->r[5]; // 801FE528
  c->r[27]=c->r[6]|c->r[6]; // 801FE52C
  c->r[3]=c->r[31]|c->r[31]; // 801FE530
  c->r[4]=0u+0x00000040u; // 801FE534
  c->lr=0x801FE53Cu; f_80201FC4(c); // 801FE538
  c->r[30]=c->r[3]|c->r[3]; // 801FE53C
  c->r[3]=0u+0x0000003Cu; // 801FE540
  c->r[4]=0u+0x00000020u; // 801FE544
  c->lr=0x801FE54Cu; f_80201FC4(c); // 801FE548
  c->r[29]=c->r[3]|c->r[3]; // 801FE54C
  c->r[3]=0u+0x00000180u; // 801FE550
  c->r[4]=0u+0x00000040u; // 801FE554
  c->lr=0x801FE55Cu; f_80201FC4(c); // 801FE558
  cmps(c,0,(int32_t)c->r[30],0); // 801FE55C
  c->r[28]=c->r[3]|c->r[3]; // 801FE560
  if (crb(c,2)) { goto L_801FE578; } // 801FE564
  cmps(c,0,(int32_t)c->r[29],0); // 801FE568
  if (crb(c,2)) { goto L_801FE578; } // 801FE56C
  cmps(c,0,(int32_t)c->r[3],0); // 801FE570
  if (!crb(c,2)) { goto L_801FE594; } // 801FE574
L_801FE578:;
  c->r[4]=0u+0x80340000u; // 801FE578
  c->r[31]=0u+0xFFFFF05Bu; // 801FE57C
  c->r[4]=c->r[4]+0xFFFFB615u; // 801FE580
  c->r[3]=0u+0x00000001u; // 801FE584
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE588
  c->lr=0x801FE590u; f_801FE6E4(c); // 801FE58C
  goto L_801FE600; // 801FE590
L_801FE594:;
  c->r[3]=c->r[30]|c->r[30]; // 801FE594
  c->r[4]=c->r[25]|c->r[25]; // 801FE598
  c->r[5]=c->r[31]|c->r[31]; // 801FE59C
  c->lr=0x801FE5A4u; f_80004338(c); // 801FE5A0
  c->r[3]=c->r[30]|c->r[30]; // 801FE5A4
  c->r[4]=c->r[31]|c->r[31]; // 801FE5A8
  c->r[5]=c->r[29]|c->r[29]; // 801FE5AC
  c->r[6]=c->r[28]|c->r[28]; // 801FE5B0
  c->lr=0x801FE5B8u; f_801F9A5C(c); // 801FE5B4
  cmps(c,0,(int32_t)c->r[3],0); // 801FE5B8
  c->r[31]=c->r[3]|c->r[3]; // 801FE5BC
  if (crb(c,2)) { goto L_801FE5E0; } // 801FE5C0
  c->r[4]=0u+0x80340000u; // 801FE5C4
  c->r[5]=c->r[31]|c->r[31]; // 801FE5C8
  c->r[4]=c->r[4]+0xFFFFB632u; // 801FE5CC
  c->r[3]=0u+0x00000001u; // 801FE5D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE5D4
  c->lr=0x801FE5DCu; f_801FE6E4(c); // 801FE5D8
  goto L_801FE600; // 801FE5DC
L_801FE5E0:;
  c->r[3]=c->r[26]|c->r[26]; // 801FE5E0
  c->r[4]=c->r[29]|c->r[29]; // 801FE5E4
  c->r[5]=0u+0x0000003Cu; // 801FE5E8
  c->lr=0x801FE5F0u; f_80004338(c); // 801FE5EC
  c->r[3]=c->r[27]|c->r[27]; // 801FE5F0
  c->r[4]=c->r[28]|c->r[28]; // 801FE5F4
  c->r[5]=0u+0x00000180u; // 801FE5F8
  c->lr=0x801FE600u; f_80004338(c); // 801FE5FC
L_801FE600:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FE600
  if (crb(c,2)) { goto L_801FE610; } // 801FE604
  c->r[3]=c->r[30]|c->r[30]; // 801FE608
  c->lr=0x801FE610u; f_80202098(c); // 801FE60C
L_801FE610:;
  cmps(c,0,(int32_t)c->r[29],0); // 801FE610
  if (crb(c,2)) { goto L_801FE620; } // 801FE614
  c->r[3]=c->r[29]|c->r[29]; // 801FE618
  c->lr=0x801FE620u; f_80202098(c); // 801FE61C
L_801FE620:;
  cmps(c,0,(int32_t)c->r[28],0); // 801FE620
  if (crb(c,2)) { goto L_801FE630; } // 801FE624
  c->r[3]=c->r[28]|c->r[28]; // 801FE628
  c->lr=0x801FE630u; f_80202098(c); // 801FE62C
L_801FE630:;
  c->r[11]=c->r[1]+0x00000030u; // 801FE630
  c->r[3]=c->r[31]|c->r[31]; // 801FE634
  c->lr=0x801FE63Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE638
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FE63C
  c->lr=c->r[0]; // 801FE640
  c->r[1]=c->r[1]+0x00000030u; // 801FE644
  return; // 801FE648
}

// fn_801FE64C
void f_801FE64C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE64C
  c->r[0]=c->lr; // 801FE650
  W32(c->r[1]+0x000001E4u,c->r[0]); // 801FE654
  c->r[11]=c->r[1]+0x000001E0u; // 801FE658
  c->lr=0x801FE660u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE65C
  c->r[28]=c->r[3]|c->r[3]; // 801FE660
  c->r[29]=c->r[4]|c->r[4]; // 801FE664
  c->r[30]=c->r[5]|c->r[5]; // 801FE668
  c->lr=0x801FE670u; f_801FBAA0(c); // 801FE66C
  c->r[31]=c->r[3]|c->r[3]; // 801FE670
  c->r[3]=c->r[28]|c->r[28]; // 801FE674
  c->lr=0x801FE67Cu; f_801FACC0(c); // 801FE678
  c->r[4]=c->r[31]|c->r[31]; // 801FE67C
  c->r[5]=c->r[1]+0x00000008u; // 801FE680
  c->r[6]=c->r[1]+0x00000044u; // 801FE684
  c->lr=0x801FE68Cu; f_801FE50C(c); // 801FE688
  cmps(c,0,(int32_t)c->r[3],0); // 801FE68C
  c->r[31]=c->r[3]|c->r[3]; // 801FE690
  if (!crb(c,2)) { goto L_801FE6C8; } // 801FE694
  c->r[3]=c->r[29]|c->r[29]; // 801FE698
  c->lr=0x801FE6A0u; f_801FBDD8(c); // 801FE69C
  c->r[3]=c->r[30]|c->r[30]; // 801FE6A0
  c->lr=0x801FE6A8u; f_801FBDD8(c); // 801FE6A4
  c->r[5]=c->r[29]|c->r[29]; // 801FE6A8
  c->r[3]=c->r[1]+0x00000008u; // 801FE6AC
  c->r[4]=0u+0x0000003Cu; // 801FE6B0
  c->lr=0x801FE6B8u; f_80208794(c); // 801FE6B4
  c->r[5]=c->r[30]|c->r[30]; // 801FE6B8
  c->r[3]=c->r[1]+0x00000044u; // 801FE6BC
  c->r[4]=0u+0x00000180u; // 801FE6C0
  c->lr=0x801FE6C8u; f_80208794(c); // 801FE6C4
L_801FE6C8:;
  c->r[11]=c->r[1]+0x000001E0u; // 801FE6C8
  c->r[3]=c->r[31]|c->r[31]; // 801FE6CC
  c->lr=0x801FE6D4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE6D0
  c->r[0]=R32(c->r[1]+0x000001E4u); // 801FE6D4
  c->lr=c->r[0]; // 801FE6D8
  c->r[1]=c->r[1]+0x000001E0u; // 801FE6DC
  return; // 801FE6E0
}

// fn_801FE6E4
void f_801FE6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE6E4
  c->r[0]=c->lr; // 801FE6E8
  W32(c->r[1]+0x00000194u,c->r[0]); // 801FE6EC
  c->r[11]=c->r[1]+0x00000190u; // 801FE6F0
  c->lr=0x801FE6F8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE6F4
  c->r[28]=c->r[3]|c->r[3]; // 801FE6F8
  c->r[29]=c->r[4]|c->r[4]; // 801FE6FC
  if (!crb(c,6)) { goto L_801FE724; } // 801FE700
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801FE704
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801FE708
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801FE70C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801FE710
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801FE714
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801FE718
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801FE71C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801FE720
L_801FE724:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FE724
  c->r[30]=0u+0x803D0000u; // 801FE728
  c->r[31]=0u+0x80340000u; // 801FE72C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801FE730
  c->r[30]=c->r[30]+0x00007778u; // 801FE734
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801FE738
  c->r[31]=c->r[31]+0xFFFFB500u; // 801FE73C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801FE740
  W32(c->r[1]+0x00000014u,c->r[6]); // 801FE744
  W32(c->r[1]+0x00000018u,c->r[7]); // 801FE748
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801FE74C
  W32(c->r[1]+0x00000020u,c->r[9]); // 801FE750
  W32(c->r[1]+0x00000024u,c->r[10]); // 801FE754
  if (crb(c,2)) { goto L_801FE84C; } // 801FE758
  c->r[0]=R32(c->r[30]+0x00000004u); // 801FE75C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801FE760
  if (!crb(c,1)) { goto L_801FE774; } // 801FE764
  c->r[0]=R32(c->r[30]+0x00000000u); // 801FE768
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801FE76C
  if (crb(c,1)) { goto L_801FE84C; } // 801FE770
L_801FE774:;
  c->r[3]=c->r[31]+0x00000190u; // 801FE774
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801FE778
  c->r[3]=c->r[3]+c->r[0]; // 801FE77C
  c->r[7]=c->r[29]|c->r[29]; // 801FE780
  c->r[6]=R32(c->r[3]+0xFFFFFFFCu); // 801FE784
  c->r[3]=c->r[1]+0x00000074u; // 801FE788
  c->r[5]=c->r[31]+0x000001A8u; // 801FE78C
  c->r[4]=0u+0x00000100u; // 801FE790
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE794
  c->lr=0x801FE79Cu; f_8018E874(c); // 801FE798
  cmps(c,0,(int32_t)c->r[3],0); // 801FE79C
  if (crb(c,0)) { goto L_801FE7AC; } // 801FE7A0
  cmpu(c,0,c->r[3],0x00000100u); // 801FE7A4
  if (!crb(c,2)) { goto L_801FE7DC; } // 801FE7A8
L_801FE7AC:;
  c->r[4]=c->r[29]|c->r[29]; // 801FE7AC
  c->r[3]=c->r[1]+0x00000074u; // 801FE7B0
  c->r[5]=0u+0x00000100u; // 801FE7B4
  c->lr=0x801FE7BCu; f_80004338(c); // 801FE7B8
  c->r[0]=0u+0x00000000u; // 801FE7BC
  c->r[4]=R32(c->r[31]+0x00000190u); // 801FE7C0
  W8(c->r[1]+0x00000173u,c->r[0]); // 801FE7C4
  c->r[6]=c->r[29]|c->r[29]; // 801FE7C8
  c->r[3]=c->r[31]+0x000001ADu; // 801FE7CC
  c->r[5]=0u+0x000000FFu; // 801FE7D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE7D4
  c->lr=0x801FE7DCu; f_8018E558(c); // 801FE7D8
L_801FE7DC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801FE7DC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801FE7E0
  if (crb(c,1)) { goto L_801FE80C; } // 801FE7E4
  c->r[5]=c->r[1]+0x00000198u; // 801FE7E8
  c->r[0]=c->r[1]+0x00000008u; // 801FE7EC
  c->r[3]=0u+0x02000000u; // 801FE7F0
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 801FE7F4
  c->r[4]=c->r[1]+0x00000068u; // 801FE7F8
  W32(c->r[1]+0x00000068u,c->r[3]); // 801FE7FC
  c->r[3]=c->r[1]+0x00000074u; // 801FE800
  W32(c->r[1]+0x00000070u,c->r[0]); // 801FE804
  c->lr=0x801FE80Cu; f_8018E6EC(c); // 801FE808
L_801FE80C:;
  c->r[12]=R32(c->r[30]+0x00000008u); // 801FE80C
  cmps(c,0,(int32_t)c->r[12],0); // 801FE810
  if (crb(c,2)) { goto L_801FE84C; } // 801FE814
  c->r[0]=R32(c->r[30]+0x00000000u); // 801FE818
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801FE81C
  if (crb(c,1)) { goto L_801FE84C; } // 801FE820
  c->r[5]=c->r[1]+0x00000198u; // 801FE824
  c->r[0]=c->r[1]+0x00000008u; // 801FE828
  c->r[3]=0u+0x02000000u; // 801FE82C
  c->r[4]=c->r[1]+0x00000068u; // 801FE830
  W32(c->r[1]+0x00000068u,c->r[3]); // 801FE834
  c->r[3]=c->r[1]+0x00000074u; // 801FE838
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 801FE83C
  W32(c->r[1]+0x00000070u,c->r[0]); // 801FE840
  c->ctr=c->r[12]; // 801FE844
  if (true) { c->lr=0x801FE84Cu; dispatch(c,c->ctr); } // 801FE848
L_801FE84C:;
  c->r[11]=c->r[1]+0x00000190u; // 801FE84C
  c->lr=0x801FE854u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FE850
  c->r[0]=R32(c->r[1]+0x00000194u); // 801FE854
  c->lr=c->r[0]; // 801FE858
  c->r[1]=c->r[1]+0x00000190u; // 801FE85C
  return; // 801FE860
}

// fn_801FE864
void f_801FE864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE864
  c->r[0]=c->lr; // 801FE868
  cmps(c,0,(int32_t)c->r[3],6); // 801FE86C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FE870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FE874
  c->r[31]=0u+0x00000000u; // 801FE878
  if (!crb(c,1)) { goto L_801FE888; } // 801FE87C
  c->r[31]=0u+0xFFFFF05Cu; // 801FE880
  goto L_801FE8A4; // 801FE884
L_801FE888:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FE888
  if (!crb(c,0)) { goto L_801FE894; } // 801FE88C
  c->r[31]=0u+0xFFFFF05Cu; // 801FE890
L_801FE894:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FE894
  if (crb(c,0)) { goto L_801FE8A4; } // 801FE898
  c->r[4]=0u+0x803D0000u; // 801FE89C
  W32(c->r[4]+0x0000777Cu,c->r[3]); // 801FE8A0
L_801FE8A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FE8A4
  if (crb(c,2)) { goto L_801FE8C8; } // 801FE8A8
  c->r[4]=0u+0x80340000u; // 801FE8AC
  c->r[5]=c->r[3]|c->r[3]; // 801FE8B0
  c->r[4]=c->r[4]+0xFFFFB6D2u; // 801FE8B4
  c->r[3]=0u+0x00000001u; // 801FE8B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE8BC
  c->lr=0x801FE8C4u; f_801FE6E4(c); // 801FE8C0
  goto L_801FE8E8; // 801FE8C4
L_801FE8C8:;
  c->r[5]=0u+0x803D0000u; // 801FE8C8
  c->r[4]=0u+0x80340000u; // 801FE8CC
  c->r[6]=R32(c->r[5]+0x0000777Cu); // 801FE8D0
  c->r[5]=c->r[3]|c->r[3]; // 801FE8D4
  c->r[4]=c->r[4]+0xFFFFB6E8u; // 801FE8D8
  c->r[3]=0u+0x00000003u; // 801FE8DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE8E0
  c->lr=0x801FE8E8u; f_801FE6E4(c); // 801FE8E4
L_801FE8E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801FE8E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FE8EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FE8F0
  c->lr=c->r[0]; // 801FE8F4
  c->r[1]=c->r[1]+0x00000010u; // 801FE8F8
  return; // 801FE8FC
}

// fn_801FE900
void f_801FE900(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 801FE900
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801FE904
  c->r[3]=c->r[3]&c->r[0]; // 801FE908
  return; // 801FE90C
}

// fn_801FE910
void f_801FE910(Ctx* __restrict c) {
  c->r[0]=cntlz(c->r[4]); // 801FE910
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801FE914
  return; // 801FE918
}

// fn_801FE91C
void f_801FE91C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FE91C
  c->r[0]=c->lr; // 801FE920
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FE924
  c->r[11]=c->r[1]+0x00000030u; // 801FE928
  c->lr=0x801FE930u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FE92C
  c->r[29]=0u+0x00000000u; // 801FE930
  c->r[31]=0u+0x80340000u; // 801FE934
  W32(c->r[1]+0x00000008u,c->r[29]); // 801FE938
  c->r[27]=c->r[5]|c->r[5]; // 801FE93C
  c->r[28]=c->r[6]|c->r[6]; // 801FE940
  c->r[26]=c->r[3]|c->r[3]; // 801FE944
  c->r[25]=c->r[4]|c->r[4]; // 801FE948
  c->r[31]=c->r[31]+0xFFFFB500u; // 801FE94C
  c->r[6]=c->r[1]+0x00000008u; // 801FE950
  c->r[5]=0u+0x00000000u; // 801FE954
  c->lr=0x801FE95Cu; f_801F9274(c); // 801FE958
  cmps(c,0,(int32_t)c->r[3],0); // 801FE95C
  c->r[30]=c->r[3]|c->r[3]; // 801FE960
  if (!crb(c,2)) { goto L_801FE974; } // 801FE964
  c->r[0]=R32(c->r[1]+0x00000008u); // 801FE968
  cmps(c,0,(int32_t)c->r[0],0); // 801FE96C
  if (!crb(c,2)) { goto L_801FE998; } // 801FE970
L_801FE974:;
  c->r[8]=R32(c->r[1]+0x00000008u); // 801FE974
  c->r[6]=c->r[25]|c->r[25]; // 801FE978
  c->r[5]=c->r[26]|c->r[26]; // 801FE97C
  c->r[7]=c->r[30]|c->r[30]; // 801FE980
  c->r[4]=c->r[31]+0x00000212u; // 801FE984
  c->r[3]=0u+0x00000003u; // 801FE988
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE98C
  c->lr=0x801FE994u; f_801FE6E4(c); // 801FE990
  goto L_801FEA10; // 801FE994
L_801FE998:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 801FE998
  c->r[4]=0u+0x00000020u; // 801FE99C
  c->lr=0x801FE9A4u; f_80201FC4(c); // 801FE9A0
  cmps(c,0,(int32_t)c->r[3],0); // 801FE9A4
  c->r[29]=c->r[3]|c->r[3]; // 801FE9A8
  if (!crb(c,2)) { goto L_801FE9B8; } // 801FE9AC
  c->r[30]=0u+0xFFFFF05Bu; // 801FE9B0
  goto L_801FEA10; // 801FE9B4
L_801FE9B8:;
  c->r[7]=R32(c->r[1]+0x00000008u); // 801FE9B8
  c->r[6]=c->r[25]|c->r[25]; // 801FE9BC
  c->r[5]=c->r[26]|c->r[26]; // 801FE9C0
  c->r[4]=c->r[31]+0x00000250u; // 801FE9C4
  c->r[3]=0u+0x00000004u; // 801FE9C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE9CC
  c->lr=0x801FE9D4u; f_801FE6E4(c); // 801FE9D0
  c->r[4]=c->r[25]|c->r[25]; // 801FE9D4
  c->r[3]=c->r[26]|c->r[26]; // 801FE9D8
  c->r[5]=c->r[29]|c->r[29]; // 801FE9DC
  c->r[6]=c->r[1]+0x00000008u; // 801FE9E0
  c->lr=0x801FE9E8u; f_801F9274(c); // 801FE9E4
  cmps(c,0,(int32_t)c->r[3],0); // 801FE9E8
  c->r[30]=c->r[3]|c->r[3]; // 801FE9EC
  if (crb(c,2)) { goto L_801FEA10; } // 801FE9F0
  c->r[6]=c->r[25]|c->r[25]; // 801FE9F4
  c->r[5]=c->r[26]|c->r[26]; // 801FE9F8
  c->r[7]=c->r[30]|c->r[30]; // 801FE9FC
  c->r[4]=c->r[31]+0x0000028Du; // 801FEA00
  c->r[3]=0u+0x00000001u; // 801FEA04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEA08
  c->lr=0x801FEA10u; f_801FE6E4(c); // 801FEA0C
L_801FEA10:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FEA10
  if (!crb(c,2)) { goto L_801FEA28; } // 801FEA14
  W32(c->r[27]+0x00000000u,c->r[29]); // 801FEA18
  c->r[0]=R32(c->r[1]+0x00000008u); // 801FEA1C
  W32(c->r[28]+0x00000000u,c->r[0]); // 801FEA20
  goto L_801FEA44; // 801FEA24
L_801FEA28:;
  c->r[0]=0u+0x00000000u; // 801FEA28
  cmps(c,0,(int32_t)c->r[29],0); // 801FEA2C
  W32(c->r[27]+0x00000000u,c->r[0]); // 801FEA30
  W32(c->r[28]+0x00000000u,c->r[0]); // 801FEA34
  if (crb(c,2)) { goto L_801FEA44; } // 801FEA38
  c->r[3]=c->r[29]|c->r[29]; // 801FEA3C
  c->lr=0x801FEA44u; f_80202098(c); // 801FEA40
L_801FEA44:;
  c->r[11]=c->r[1]+0x00000030u; // 801FEA44
  c->r[3]=c->r[30]|c->r[30]; // 801FEA48
  c->lr=0x801FEA50u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FEA4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FEA50
  c->lr=c->r[0]; // 801FEA54
  c->r[1]=c->r[1]+0x00000030u; // 801FEA58
  return; // 801FEA5C
}

// fn_801FEA60
void f_801FEA60(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801FEA60
  cmpu(c,0,c->r[0],0x00000040u); // 801FEA64
  if (crb(c,0)) { goto L_801FEA74; } // 801FEA68
  c->r[3]=0u+0x00000000u; // 801FEA6C
  return; // 801FEA70
L_801FEA74:;
  c->r[4]=rotl(c->r[4],0)&0x00000007u; // 801FEA74
  c->r[5]=0u+0x00000001u; // 801FEA78
  c->r[0]=R8(c->r[3]+c->r[0]); // 801FEA7C
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801FEA80
  c->r[3]=c->r[3]&c->r[0]; // 801FEA84
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801FEA88
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801FEA8C
  return; // 801FEA90
}

// fn_801FEA94
void f_801FEA94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEA94
  c->r[0]=c->lr; // 801FEA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FEA9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FEAA0
  c->r[31]=0u+0x00000000u; // 801FEAA4
  goto L_801FEAC8; // 801FEAA8
L_801FEAAC:;
  c->r[4]=R16(c->r[5]+0x00000004u); // 801FEAAC
  c->r[3]=c->r[3]+0x00000056u; // 801FEAB0
  c->lr=0x801FEAB8u; f_801FEA60(c); // 801FEAB4
  cmps(c,0,(int32_t)c->r[3],0); // 801FEAB8
  if (crb(c,2)) { goto L_801FEAD0; } // 801FEABC
  c->r[31]=0u+0x00000001u; // 801FEAC0
  goto L_801FEAD0; // 801FEAC4
L_801FEAC8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801FEAC8
  if (!crb(c,2)) { IRQCHK(c); goto L_801FEAAC; } // 801FEACC
L_801FEAD0:;
  c->r[3]=c->r[31]|c->r[31]; // 801FEAD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FEAD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FEAD8
  c->lr=c->r[0]; // 801FEADC
  c->r[1]=c->r[1]+0x00000010u; // 801FEAE0
  return; // 801FEAE4
}

// fn_801FEAE8
void f_801FEAE8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 801FEAE8
  c->r[5]=0u+0x00000000u; // 801FEAEC
  if (!crb(c,2)) { goto L_801FEAFC; } // 801FEAF0
  c->r[5]=0u+0xFFFFF05Fu; // 801FEAF4
  goto L_801FEB0C; // 801FEAF8
L_801FEAFC:;
  c->r[0]=R16(c->r[3]+0x000001DEu); // 801FEAFC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801FEB00
  c->r[0]=c->r[3]+0x000001E4u; // 801FEB04
  W32(c->r[4]+0x00000000u,c->r[0]); // 801FEB08
L_801FEB0C:;
  c->r[3]=c->r[5]|c->r[5]; // 801FEB0C
  return; // 801FEB10
}

// fn_801FEB14
void f_801FEB14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEB14
  c->r[0]=c->lr; // 801FEB18
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FEB1C
  c->r[11]=c->r[1]+0x00000030u; // 801FEB20
  c->lr=0x801FEB28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FEB24
  c->r[29]=c->r[5]|c->r[5]; // 801FEB28
  c->r[31]=c->r[6]|c->r[6]; // 801FEB2C
  c->r[28]=c->r[3]|c->r[3]; // 801FEB30
  c->r[27]=c->r[4]|c->r[4]; // 801FEB34
  c->r[6]=c->r[1]+0x00000008u; // 801FEB38
  c->r[30]=0u+0x00000000u; // 801FEB3C
  c->r[5]=0u+0x00000000u; // 801FEB40
  c->lr=0x801FEB48u; f_801F9520(c); // 801FEB44
  cmps(c,0,(int32_t)c->r[3],0); // 801FEB48
  c->r[7]=c->r[3]|c->r[3]; // 801FEB4C
  if (crb(c,2)) { goto L_801FEB84; } // 801FEB50
  cmps(c,0,(int32_t)c->r[3],-106); // 801FEB54
  c->r[3]=0u+0x00000001u; // 801FEB58
  if (!crb(c,2)) { goto L_801FEB64; } // 801FEB5C
  c->r[3]=0u+0x00000003u; // 801FEB60
L_801FEB64:;
  c->r[4]=0u+0x80340000u; // 801FEB64
  c->r[6]=c->r[27]|c->r[27]; // 801FEB68
  c->r[5]=c->r[28]|c->r[28]; // 801FEB6C
  c->r[4]=c->r[4]+0xFFFFB7BEu; // 801FEB70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEB74
  c->lr=0x801FEB7Cu; f_801FE6E4(c); // 801FEB78
  c->r[31]=0u+0xFFFFF01Au; // 801FEB7C
  goto L_801FEC10; // 801FEB80
L_801FEB84:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801FEB84
  c->r[4]=0u+0x00000020u; // 801FEB88
  c->lr=0x801FEB90u; f_80201FC4(c); // 801FEB8C
  cmps(c,0,(int32_t)c->r[3],0); // 801FEB90
  c->r[30]=c->r[3]|c->r[3]; // 801FEB94
  if (!crb(c,2)) { goto L_801FEBB8; } // 801FEB98
  c->r[4]=0u+0x80340000u; // 801FEB9C
  c->r[3]=0u+0x00000001u; // 801FEBA0
  c->r[4]=c->r[4]+0xFFFFB7DFu; // 801FEBA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEBA8
  c->lr=0x801FEBB0u; f_801FE6E4(c); // 801FEBAC
  c->r[31]=0u+0xFFFFF05Bu; // 801FEBB0
  goto L_801FEC10; // 801FEBB4
L_801FEBB8:;
  c->r[4]=c->r[27]|c->r[27]; // 801FEBB8
  c->r[3]=c->r[28]|c->r[28]; // 801FEBBC
  c->r[5]=c->r[30]|c->r[30]; // 801FEBC0
  c->r[6]=c->r[1]+0x00000008u; // 801FEBC4
  c->lr=0x801FEBCCu; f_801F9520(c); // 801FEBC8
  cmps(c,0,(int32_t)c->r[3],0); // 801FEBCC
  if (crb(c,2)) { goto L_801FEBFC; } // 801FEBD0
  c->r[4]=0u+0x80340000u; // 801FEBD4
  c->r[7]=c->r[3]|c->r[3]; // 801FEBD8
  c->r[6]=c->r[27]|c->r[27]; // 801FEBDC
  c->r[5]=c->r[28]|c->r[28]; // 801FEBE0
  c->r[4]=c->r[4]+0xFFFFB7BEu; // 801FEBE4
  c->r[3]=0u+0x00000001u; // 801FEBE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEBEC
  c->lr=0x801FEBF4u; f_801FE6E4(c); // 801FEBF0
  c->r[31]=0u+0xFFFFF01Au; // 801FEBF4
  goto L_801FEC10; // 801FEBF8
L_801FEBFC:;
  c->r[3]=c->r[30]|c->r[30]; // 801FEBFC
  c->r[4]=c->r[29]|c->r[29]; // 801FEC00
  c->r[5]=c->r[31]|c->r[31]; // 801FEC04
  c->lr=0x801FEC0Cu; f_801FEC3C(c); // 801FEC08
  c->r[31]=c->r[3]|c->r[3]; // 801FEC0C
L_801FEC10:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FEC10
  if (crb(c,2)) { goto L_801FEC20; } // 801FEC14
  c->r[3]=c->r[30]|c->r[30]; // 801FEC18
  c->lr=0x801FEC20u; f_80202098(c); // 801FEC1C
L_801FEC20:;
  c->r[11]=c->r[1]+0x00000030u; // 801FEC20
  c->r[3]=c->r[31]|c->r[31]; // 801FEC24
  c->lr=0x801FEC2Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FEC28
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FEC2C
  c->lr=c->r[0]; // 801FEC30
  c->r[1]=c->r[1]+0x00000030u; // 801FEC34
  return; // 801FEC38
}

// fn_801FEC3C
void f_801FEC3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEC3C
  c->r[0]=c->lr; // 801FEC40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEC44
  c->r[11]=c->r[1]+0x00000020u; // 801FEC48
  c->lr=0x801FEC50u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FEC4C
  cmps(c,0,(int32_t)c->r[3],0); // 801FEC50
  c->r[27]=c->r[3]|c->r[3]; // 801FEC54
  c->r[28]=c->r[4]|c->r[4]; // 801FEC58
  c->r[29]=c->r[5]|c->r[5]; // 801FEC5C
  c->r[31]=0u+0x00000000u; // 801FEC60
  if (!crb(c,2)) { goto L_801FEC70; } // 801FEC64
  c->r[31]=0u+0xFFFFF05Fu; // 801FEC68
  goto L_801FED5C; // 801FEC6C
L_801FEC70:;
  c->r[0]=R16(c->r[3]+0x000001DEu); // 801FEC70
  cmps(c,0,(int32_t)c->r[4],0); // 801FEC74
  c->r[3]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801FEC78
  c->r[30]=c->r[3]+0x00000060u; // 801FEC7C
  if (crb(c,2)) { goto L_801FED58; } // 801FEC80
  c->r[0]=R32(c->r[5]+0x00000000u); // 801FEC84
  cmpu(c,0,c->r[30],c->r[0]); // 801FEC88
  if (!crb(c,1)) { goto L_801FEC98; } // 801FEC8C
  c->r[31]=0u+0xFFFFF05Fu; // 801FEC90
  goto L_801FED5C; // 801FEC94
L_801FEC98:;
  c->r[3]=c->r[28]|c->r[28]; // 801FEC98
  c->r[5]=c->r[30]|c->r[30]; // 801FEC9C
  c->r[4]=0u+0x00000000u; // 801FECA0
  c->lr=0x801FECA8u; f_80004688(c); // 801FECA4
  c->r[0]=R8(c->r[27]+0x00000180u); // 801FECA8
  c->r[3]=c->r[28]+0x0000001Eu; // 801FECAC
  c->r[4]=c->r[27]+0x0000019Au; // 801FECB0
  c->r[5]=0u+0x0000003Eu; // 801FECB4
  W8(c->r[28]+0x00000000u,c->r[0]); // 801FECB8
  c->r[0]=R32(c->r[27]+0x00000184u); // 801FECBC
  c->r[6]=R32(c->r[27]+0x00000188u); // 801FECC0
  W32(c->r[28]+0x0000000Cu,c->r[6]); // 801FECC4
  W32(c->r[28]+0x00000008u,c->r[0]); // 801FECC8
  c->r[0]=R32(c->r[27]+0x0000018Cu); // 801FECCC
  c->r[6]=R32(c->r[27]+0x00000190u); // 801FECD0
  W32(c->r[28]+0x00000014u,c->r[6]); // 801FECD4
  W32(c->r[28]+0x00000010u,c->r[0]); // 801FECD8
  c->r[0]=R32(c->r[27]+0x00000194u); // 801FECDC
  W32(c->r[28]+0x00000018u,c->r[0]); // 801FECE0
  c->r[0]=R16(c->r[27]+0x00000198u); // 801FECE4
  W16(c->r[28]+0x0000001Cu,c->r[0]); // 801FECE8
  c->lr=0x801FECF0u; f_80004338(c); // 801FECEC
  c->r[0]=R16(c->r[27]+0x000001DCu); // 801FECF0
  c->r[7]=0u+0x00000000u; // 801FECF4
  c->r[3]=0u+0x00000000u; // 801FECF8
  c->r[4]=0u+0x00000000u; // 801FECFC
  W16(c->r[28]+0x0000005Cu,c->r[0]); // 801FED00
  c->r[0]=R16(c->r[27]+0x000001DEu); // 801FED04
  W16(c->r[28]+0x0000005Eu,c->r[0]); // 801FED08
  goto L_801FED4C; // 801FED0C
L_801FED10:;
  c->r[5]=c->r[27]+c->r[3]; // 801FED10
  c->r[6]=c->r[28]+c->r[4]; // 801FED14
  c->r[0]=R32(c->r[5]+0x000001E4u); // 801FED18
  c->r[7]=c->r[7]+0x00000001u; // 801FED1C
  c->r[3]=c->r[3]+0x00000024u; // 801FED20
  c->r[4]=c->r[4]+0x00000010u; // 801FED24
  W32(c->r[6]+0x00000060u,c->r[0]); // 801FED28
  c->r[0]=R16(c->r[5]+0x000001E8u); // 801FED2C
  W16(c->r[6]+0x00000064u,c->r[0]); // 801FED30
  c->r[0]=R16(c->r[5]+0x000001EAu); // 801FED34
  W16(c->r[6]+0x00000066u,c->r[0]); // 801FED38
  c->r[0]=R32(c->r[5]+0x000001ECu); // 801FED3C
  c->r[5]=R32(c->r[5]+0x000001F0u); // 801FED40
  W32(c->r[6]+0x0000006Cu,c->r[5]); // 801FED44
  W32(c->r[6]+0x00000068u,c->r[0]); // 801FED48
L_801FED4C:;
  c->r[0]=R16(c->r[28]+0x0000005Eu); // 801FED4C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801FED50
  if (crb(c,0)) { IRQCHK(c); goto L_801FED10; } // 801FED54
L_801FED58:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801FED58
L_801FED5C:;
  c->r[11]=c->r[1]+0x00000020u; // 801FED5C
  c->r[3]=c->r[31]|c->r[31]; // 801FED60
  c->lr=0x801FED68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FED64
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FED68
  c->lr=c->r[0]; // 801FED6C
  c->r[1]=c->r[1]+0x00000020u; // 801FED70
  return; // 801FED74
}

// fn_801FED78
void f_801FED78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FED78
  c->r[0]=c->lr; // 801FED7C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FED80
  c->r[11]=c->r[1]+0x00000030u; // 801FED84
  c->lr=0x801FED8Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FED88
  c->r[29]=0u+0x00000000u; // 801FED8C
  c->r[31]=0u+0x80340000u; // 801FED90
  W32(c->r[4]+0x00000000u,c->r[29]); // 801FED94
  c->r[26]=c->r[4]|c->r[4]; // 801FED98
  c->r[28]=R32(c->r[3]+0x0000018Cu); // 801FED9C
  c->r[25]=c->r[3]|c->r[3]; // 801FEDA0
  c->r[27]=R32(c->r[3]+0x00000190u); // 801FEDA4
  c->r[31]=c->r[31]+0xFFFFB500u; // 801FEDA8
  c->r[5]=c->r[1]+0x00000008u; // 801FEDAC
  c->r[4]=0u+0x00000000u; // 801FEDB0
  c->lr=0x801FEDB8u; f_801FEC3C(c); // 801FEDB4
  cmps(c,0,(int32_t)c->r[3],0); // 801FEDB8
  c->r[30]=c->r[3]|c->r[3]; // 801FEDBC
  if (crb(c,2)) { goto L_801FEDE4; } // 801FEDC0
  c->r[6]=c->r[27]|c->r[27]; // 801FEDC4
  c->r[5]=c->r[28]|c->r[28]; // 801FEDC8
  c->r[7]=c->r[30]|c->r[30]; // 801FEDCC
  c->r[4]=c->r[31]+0x000003AFu; // 801FEDD0
  c->r[3]=0u+0x00000003u; // 801FEDD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEDD8
  c->lr=0x801FEDE0u; f_801FE6E4(c); // 801FEDDC
  goto L_801FEE58; // 801FEDE0
L_801FEDE4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801FEDE4
  c->r[4]=0u+0x00000020u; // 801FEDE8
  c->lr=0x801FEDF0u; f_80201FC4(c); // 801FEDEC
  cmps(c,0,(int32_t)c->r[3],0); // 801FEDF0
  c->r[29]=c->r[3]|c->r[3]; // 801FEDF4
  if (!crb(c,2)) { goto L_801FEE20; } // 801FEDF8
  c->r[6]=c->r[27]|c->r[27]; // 801FEDFC
  c->r[5]=c->r[28]|c->r[28]; // 801FEE00
  c->r[4]=c->r[31]+0x00000341u; // 801FEE04
  c->r[30]=0u+0xFFFFF05Bu; // 801FEE08
  c->r[3]=0u+0x00000001u; // 801FEE0C
  c->r[7]=0u+0xFFFFF05Bu; // 801FEE10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEE14
  c->lr=0x801FEE1Cu; f_801FE6E4(c); // 801FEE18
  goto L_801FEE58; // 801FEE1C
L_801FEE20:;
  c->r[3]=c->r[25]|c->r[25]; // 801FEE20
  c->r[4]=c->r[29]|c->r[29]; // 801FEE24
  c->r[5]=c->r[1]+0x00000008u; // 801FEE28
  c->lr=0x801FEE30u; f_801FEC3C(c); // 801FEE2C
  cmps(c,0,(int32_t)c->r[3],0); // 801FEE30
  c->r[30]=c->r[3]|c->r[3]; // 801FEE34
  if (crb(c,2)) { goto L_801FEE58; } // 801FEE38
  c->r[6]=c->r[27]|c->r[27]; // 801FEE3C
  c->r[5]=c->r[28]|c->r[28]; // 801FEE40
  c->r[7]=c->r[30]|c->r[30]; // 801FEE44
  c->r[4]=c->r[31]+0x0000037Eu; // 801FEE48
  c->r[3]=0u+0x00000001u; // 801FEE4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEE50
  c->lr=0x801FEE58u; f_801FE6E4(c); // 801FEE54
L_801FEE58:;
  cmps(c,0,(int32_t)c->r[30],0); // 801FEE58
  if (!crb(c,0)) { goto L_801FEE74; } // 801FEE5C
  cmps(c,0,(int32_t)c->r[29],0); // 801FEE60
  if (crb(c,2)) { goto L_801FEE74; } // 801FEE64
  c->r[3]=c->r[29]|c->r[29]; // 801FEE68
  c->lr=0x801FEE70u; f_80202098(c); // 801FEE6C
  c->r[29]=0u+0x00000000u; // 801FEE70
L_801FEE74:;
  W32(c->r[26]+0x00000000u,c->r[29]); // 801FEE74
  c->r[11]=c->r[1]+0x00000030u; // 801FEE78
  c->r[3]=c->r[30]|c->r[30]; // 801FEE7C
  c->lr=0x801FEE84u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FEE80
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FEE84
  c->lr=c->r[0]; // 801FEE88
  c->r[1]=c->r[1]+0x00000030u; // 801FEE8C
  return; // 801FEE90
}

// fn_801FEE94
void f_801FEE94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEE94
  c->r[0]=c->lr; // 801FEE98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEE9C
  c->r[11]=c->r[1]+0x00000020u; // 801FEEA0
  c->lr=0x801FEEA8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FEEA4
  c->r[30]=c->r[3]|c->r[3]; // 801FEEA8
  c->r[29]=c->r[4]|c->r[4]; // 801FEEAC
  c->lr=0x801FEEB4u; f_802140C0(c); // 801FEEB0
  cmps(c,0,(int32_t)c->r[3],0); // 801FEEB4
  if (!crb(c,2)) { goto L_801FEEE0; } // 801FEEB8
  c->r[4]=0u+0x80340000u; // 801FEEBC
  c->r[6]=c->r[29]|c->r[29]; // 801FEEC0
  c->r[5]=c->r[30]|c->r[30]; // 801FEEC4
  c->r[3]=0u+0x00000001u; // 801FEEC8
  c->r[4]=c->r[4]+0xFFFFB94Bu; // 801FEECC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEED0
  c->lr=0x801FEED8u; f_801FE6E4(c); // 801FEED4
  c->r[31]=0u+0xFFFFF05Cu; // 801FEED8
  goto L_801FEF30; // 801FEEDC
L_801FEEE0:;
  c->r[4]=c->r[29]|c->r[29]; // 801FEEE0
  c->r[3]=c->r[30]|c->r[30]; // 801FEEE4
  c->lr=0x801FEEECu; f_801F9B10(c); // 801FEEE8
  cmps(c,0,(int32_t)c->r[3],0); // 801FEEEC
  c->r[31]=c->r[3]|c->r[3]; // 801FEEF0
  if (crb(c,2)) { goto L_801FEF30; } // 801FEEF4
  c->r[4]=0u+0x80340000u; // 801FEEF8
  c->r[5]=c->r[31]|c->r[31]; // 801FEEFC
  c->r[8]=c->r[29]|c->r[29]; // 801FEF00
  c->r[7]=c->r[30]|c->r[30]; // 801FEF04
  c->r[4]=c->r[4]+0xFFFFB979u; // 801FEF08
  c->r[3]=0u+0x00000001u; // 801FEF0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEF10
  c->lr=0x801FEF18u; f_801FE6E4(c); // 801FEF14
  cmps(c,0,(int32_t)c->r[31],-1017); // 801FEF18
  if (!crb(c,2)) { goto L_801FEF24; } // 801FEF1C
  c->r[31]=0u+0xFFFFF05Cu; // 801FEF20
L_801FEF24:;
  cmps(c,0,(int32_t)c->r[31],-106); // 801FEF24
  if (!crb(c,2)) { goto L_801FEF30; } // 801FEF28
  c->r[31]=0u+0xFFFFF05Au; // 801FEF2C
L_801FEF30:;
  c->r[11]=c->r[1]+0x00000020u; // 801FEF30
  c->r[3]=c->r[31]|c->r[31]; // 801FEF34
  c->lr=0x801FEF3Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FEF38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEF3C
  c->lr=c->r[0]; // 801FEF40
  c->r[1]=c->r[1]+0x00000020u; // 801FEF44
  return; // 801FEF48
}

// fn_801FEF4C
void f_801FEF4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEF4C
  c->r[0]=c->lr; // 801FEF50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FEF54
  c->r[11]=c->r[1]+0x00000020u; // 801FEF58
  c->lr=0x801FEF60u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FEF5C
  c->r[5]=0u+0x80340000u; // 801FEF60
  c->r[30]=0u+0x80340000u; // 801FEF64
  c->r[29]=R32(c->r[5]+0xFFFFB544u); // 801FEF68
  c->r[26]=c->r[3]|c->r[3]; // 801FEF6C
  c->r[27]=c->r[4]|c->r[4]; // 801FEF70
  c->r[30]=c->r[30]+0xFFFFB514u; // 801FEF74
  c->r[28]=0u+0x00000000u; // 801FEF78
  c->r[31]=0u+0x00000000u; // 801FEF7C
  goto L_801FEFB4; // 801FEF80
L_801FEF84:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 801FEF84
  c->r[4]=c->r[27]|c->r[27]; // 801FEF88
  c->lr=0x801FEF90u; f_80190160(c); // 801FEF8C
  cmps(c,0,(int32_t)c->r[3],0); // 801FEF90
  if (!crb(c,2)) { goto L_801FEFAC; } // 801FEF94
  c->r[4]=c->r[30]+c->r[31]; // 801FEF98
  c->r[3]=0u+0x00000000u; // 801FEF9C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801FEFA0
  W32(c->r[26]+0x00000000u,c->r[0]); // 801FEFA4
  goto L_801FEFC0; // 801FEFA8
L_801FEFAC:;
  c->r[28]=c->r[28]+0x00000001u; // 801FEFAC
  c->r[31]=c->r[31]+0x00000008u; // 801FEFB0
L_801FEFB4:;
  cmpu(c,0,c->r[28],c->r[29]); // 801FEFB4
  if (crb(c,0)) { IRQCHK(c); goto L_801FEF84; } // 801FEFB8
  c->r[3]=0u+0xFFFFF05Au; // 801FEFBC
L_801FEFC0:;
  c->r[11]=c->r[1]+0x00000020u; // 801FEFC0
  c->lr=0x801FEFC8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FEFC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FEFC8
  c->lr=c->r[0]; // 801FEFCC
  c->r[1]=c->r[1]+0x00000020u; // 801FEFD0
  return; // 801FEFD4
}

// fn_801FEFD8
void f_801FEFD8(Ctx* __restrict c) {
  c->r[4]=0u+0x80340000u; // 801FEFD8
  c->r[5]=0u+0x80340000u; // 801FEFDC
  c->r[0]=R32(c->r[4]+0xFFFFB544u); // 801FEFE0
  c->r[5]=c->r[5]+0xFFFFB514u; // 801FEFE4
  c->r[4]=0u+0x00000000u; // 801FEFE8
  c->ctr=c->r[0]; // 801FEFEC
  cmpu(c,0,c->r[0],0x00000000u); // 801FEFF0
  if (!crb(c,1)) { goto L_801FF018; } // 801FEFF4
L_801FEFF8:;
  c->r[6]=c->r[5]+c->r[4]; // 801FEFF8
  c->r[0]=R32(c->r[6]+0x00000004u); // 801FEFFC
  cmpu(c,0,c->r[3],c->r[0]); // 801FF000
  if (!crb(c,2)) { goto L_801FF010; } // 801FF004
  c->r[3]=R32(c->r[6]+0x00000000u); // 801FF008
  return; // 801FF00C
L_801FF010:;
  c->r[4]=c->r[4]+0x00000008u; // 801FF010
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FEFF8; } // 801FF014
L_801FF018:;
  c->r[3]=0u+0x00000000u; // 801FF018
  return; // 801FF01C
}

// fn_801FF020
void f_801FF020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF020
  c->r[0]=c->lr; // 801FF024
  W32(c->r[1]+0x00000184u,c->r[0]); // 801FF028
  c->r[11]=c->r[1]+0x00000180u; // 801FF02C
  c->lr=0x801FF034u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FF030
  c->r[31]=c->r[1]|c->r[1]; // 801FF034
  c->r[6]=0u+0x00000000u; // 801FF038
  c->r[29]=0u+0x80340000u; // 801FF03C
  c->r[17]=c->r[4]|c->r[4]; // 801FF040
  c->r[0]=0u+0x0000000Au; // 801FF044
  c->r[30]=c->r[3]|c->r[3]; // 801FF048
  c->r[18]=c->r[5]|c->r[5]; // 801FF04C
  W16(c->r[31]+0x00000032u,c->r[6]); // 801FF050
  c->r[29]=c->r[29]+0xFFFFBD88u; // 801FF054
  c->r[4]=c->r[31]+0x000000E4u; // 801FF058
  c->r[28]=0u+0x00000000u; // 801FF05C
  W32(c->r[31]+0x00000040u,c->r[6]); // 801FF060
  c->r[26]=0u+0x00000000u; // 801FF064
  c->r[24]=0u+0x00000000u; // 801FF068
  c->r[23]=0u+0x00000000u; // 801FF06C
  W32(c->r[31]+0x0000003Cu,c->r[6]); // 801FF070
  c->r[22]=0u+0x00000000u; // 801FF074
  c->r[27]=0u+0x00000000u; // 801FF078
  c->r[21]=0u+0x00000000u; // 801FF07C
  W32(c->r[31]+0x00000038u,c->r[6]); // 801FF080
  W32(c->r[31]+0x00000034u,c->r[6]); // 801FF084
  W8(c->r[31]+0x00000031u,c->r[6]); // 801FF088
  W8(c->r[31]+0x00000030u,c->r[6]); // 801FF08C
  c->ctr=c->r[0]; // 801FF090
L_801FF094:;
  W32(c->r[4]+0x00000004u,c->r[6]); // 801FF094
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[6]); c->r[4]=ea;} // 801FF098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF094; } // 801FF09C
  c->r[0]=0u+0x0000000Au; // 801FF0A0
  c->r[5]=c->r[31]+0x00000094u; // 801FF0A4
  c->r[4]=0u+0x00000000u; // 801FF0A8
  c->ctr=c->r[0]; // 801FF0AC
L_801FF0B0:;
  W32(c->r[5]+0x00000004u,c->r[4]); // 801FF0B0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[4]); c->r[5]=ea;} // 801FF0B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF0B0; } // 801FF0B8
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801FF0BC
  c->r[4]=0u+0x00000000u; // 801FF0C0
  W32(c->r[31]+0x00000070u,c->r[4]); // 801FF0C4
  cmps(c,0,(int32_t)c->r[0],3); // 801FF0C8
  W32(c->r[31]+0x00000074u,c->r[4]); // 801FF0CC
  W32(c->r[31]+0x00000078u,c->r[4]); // 801FF0D0
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 801FF0D4
  if (crb(c,2)) { goto L_801FF130; } // 801FF0D8
  if (!crb(c,0)) { goto L_801FF0F8; } // 801FF0DC
  cmps(c,0,(int32_t)c->r[0],1); // 801FF0E0
  if (crb(c,2)) { goto L_801FF140; } // 801FF0E4
  if (!crb(c,0)) { goto L_801FF120; } // 801FF0E8
  cmps(c,0,(int32_t)c->r[0],0); // 801FF0EC
  if (!crb(c,0)) { goto L_801FF110; } // 801FF0F0
  goto L_801FF19C; // 801FF0F4
L_801FF0F8:;
  cmps(c,0,(int32_t)c->r[0],16416); // 801FF0F8
  if (crb(c,2)) { goto L_801FF170; } // 801FF0FC
  if (!crb(c,0)) { goto L_801FF19C; } // 801FF100
  cmps(c,0,(int32_t)c->r[0],16400); // 801FF104
  if (crb(c,2)) { goto L_801FF150; } // 801FF108
  goto L_801FF19C; // 801FF10C
L_801FF110:;
  c->r[6]=c->r[29]+0x00000012u; // 801FF110
  c->r[20]=0u+0x00000004u; // 801FF114
  c->r[19]=0u+0x00000000u; // 801FF118
  goto L_801FF1B8; // 801FF11C
L_801FF120:;
  c->r[6]=c->r[29]+0x0000002Du; // 801FF120
  c->r[20]=0u+0x00000004u; // 801FF124
  c->r[19]=0u+0x00000002u; // 801FF128
  goto L_801FF1B8; // 801FF12C
L_801FF130:;
  c->r[6]=c->r[29]+0x00000048u; // 801FF130
  c->r[20]=0u+0x00000000u; // 801FF134
  c->r[19]=0u+0x00000000u; // 801FF138
  goto L_801FF1B8; // 801FF13C
L_801FF140:;
  c->r[6]=c->r[29]+0x00000055u; // 801FF140
  c->r[20]=0u+0x00000004u; // 801FF144
  c->r[19]=0u+0x00000003u; // 801FF148
  goto L_801FF1B8; // 801FF14C
L_801FF150:;
  c->r[24]=c->r[17]|c->r[17]; // 801FF150
  c->r[23]=c->r[18]|c->r[18]; // 801FF154
  c->r[6]=c->r[29]+0x0000006Du; // 801FF158
  c->r[20]=0u+0x00000002u; // 801FF15C
  c->r[19]=0u+0x00000002u; // 801FF160
  c->r[27]=0u+0x00000001u; // 801FF164
  c->r[21]=0u+0x00000001u; // 801FF168
  goto L_801FF1B8; // 801FF16C
L_801FF170:;
  c->r[0]=R8(c->r[3]+0x000000E0u); // 801FF170
  c->r[6]=c->r[29]+0x000000A0u; // 801FF174
  cmps(c,0,(int32_t)c->r[0],0); // 801FF178
  if (!crb(c,2)) { goto L_801FF188; } // 801FF17C
  c->r[3]=0u+0xFFFFF05Fu; // 801FF180
  goto L_801FFB84; // 801FF184
L_801FF188:;
  c->r[24]=c->r[17]|c->r[17]; // 801FF188
  c->r[23]=c->r[18]|c->r[18]; // 801FF18C
  c->r[20]=0u+0x00000002u; // 801FF190
  c->r[19]=0u+0x00000002u; // 801FF194
  goto L_801FF1B8; // 801FF198
L_801FF19C:;
  c->r[5]=R32(c->r[30]+0x000000DCu); // 801FF19C
  c->r[4]=c->r[29]+0x000000CCu; // 801FF1A0
  c->r[3]=0u+0x00000001u; // 801FF1A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF1A8
  c->lr=0x801FF1B0u; f_801FE6E4(c); // 801FF1AC
  c->r[3]=0u+0xFFFFF05Cu; // 801FF1B0
  goto L_801FFB84; // 801FF1B4
L_801FF1B8:;
  c->r[0]=R8(c->r[3]+0x000000E0u); // 801FF1B8
  cmps(c,0,(int32_t)c->r[0],0); // 801FF1BC
  if (crb(c,2)) { goto L_801FF1CC; } // 801FF1C0
  c->r[5]=c->r[29]+0x000000EDu; // 801FF1C4
  goto L_801FF1D0; // 801FF1C8
L_801FF1CC:;
  c->r[5]=c->r[29]+0x00000011u; // 801FF1CC
L_801FF1D0:;
  c->r[7]=R32(c->r[30]+0x000000C8u); // 801FF1D0
  c->r[4]=c->r[29]+0x00000106u; // 801FF1D4
  c->r[8]=R32(c->r[30]+0x000000CCu); // 801FF1D8
  c->r[3]=0u+0x00000003u; // 801FF1DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF1E0
  c->lr=0x801FF1E8u; f_801FE6E4(c); // 801FF1E4
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801FF1E8
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801FF1EC
  c->lr=0x801FF1F4u; f_80213F98(c); // 801FF1F0
  cmps(c,0,(int32_t)c->r[3],0); // 801FF1F4
  if (!crb(c,2)) { goto L_801FF204; } // 801FF1F8
  c->r[3]=0u+0xFFFFF05Cu; // 801FF1FC
  goto L_801FFB84; // 801FF200
L_801FF204:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801FF204
  c->r[6]=c->r[31]+0x00000034u; // 801FF208
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801FF20C
  c->r[5]=0u+0x00000000u; // 801FF210
  c->lr=0x801FF218u; f_801F9274(c); // 801FF214
  cmps(c,0,(int32_t)c->r[3],0); // 801FF218
  if (!crb(c,0)) { goto L_801FF224; } // 801FF21C
  goto L_801FFB84; // 801FF220
L_801FF224:;
  c->r[0]=R8(c->r[30]+0x000000E0u); // 801FF224
  cmps(c,0,(int32_t)c->r[0],0); // 801FF228
  if (crb(c,2)) { goto L_801FF238; } // 801FF22C
  cmps(c,0,(int32_t)c->r[27],0); // 801FF230
  if (crb(c,2)) { goto L_801FF24C; } // 801FF234
L_801FF238:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 801FF238
  cmps(c,0,(int32_t)c->r[0],0); // 801FF23C
  if (!crb(c,2)) { goto L_801FF24C; } // 801FF240
  c->r[3]=0u+0xFFFFF02Eu; // 801FF244
  goto L_801FFB84; // 801FF248
L_801FF24C:;
  c->r[0]=R8(c->r[30]+0x000000E0u); // 801FF24C
  cmps(c,0,(int32_t)c->r[0],0); // 801FF250
  if (!crb(c,2)) { goto L_801FF260; } // 801FF254
  c->r[0]=0u+0x00000005u; // 801FF258
  W32(c->r[30]+0x00000028u,c->r[0]); // 801FF25C
L_801FF260:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF260
  c->lr=0x801FF268u; f_801FB604(c); // 801FF264
  c->r[4]=0u+0x803E0000u; // 801FF268
  c->r[3]=0u+0x00010000u; // 801FF26C
  c->r[4]=c->r[4]+0xFFFFC200u; // 801FF270
  W32(c->r[31]+0x00000094u,c->r[1]); // 801FF274
  c->r[0]=c->r[3]+0xFFFF8000u; // 801FF278
  c->r[6]=c->r[31]+0x00000054u; // 801FF27C
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 801FF280
  c->r[5]=0u+0x00000000u; // 801FF284
  W32(c->r[31]+0x00000054u,c->r[0]); // 801FF288
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801FF28C
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801FF290
  c->lr=0x801FF298u; f_801F9520(c); // 801FF294
  cmps(c,0,(int32_t)c->r[3],0); // 801FF298
  c->r[25]=c->r[3]|c->r[3]; // 801FF29C
  if (!crb(c,2)) { goto L_801FF2BC; } // 801FF2A0
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801FF2A4
  c->r[6]=c->r[31]+0x00000054u; // 801FF2A8
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801FF2AC
  c->r[5]=R32(c->r[31]+0x0000005Cu); // 801FF2B0
  c->lr=0x801FF2B8u; f_801F9520(c); // 801FF2B4
  c->r[25]=c->r[3]|c->r[3]; // 801FF2B8
L_801FF2BC:;
  cmps(c,0,(int32_t)c->r[25],0); // 801FF2BC
  if (!crb(c,2)) { goto L_801FF2D0; } // 801FF2C0
  c->r[0]=R32(c->r[31]+0x00000054u); // 801FF2C4
  cmps(c,0,(int32_t)c->r[0],0); // 801FF2C8
  if (!crb(c,2)) { goto L_801FF314; } // 801FF2CC
L_801FF2D0:;
  c->r[5]=c->r[25]|c->r[25]; // 801FF2D0
  c->r[4]=c->r[29]+0x00000117u; // 801FF2D4
  c->r[3]=0u+0x00000003u; // 801FF2D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF2DC
  c->lr=0x801FF2E4u; f_801FE6E4(c); // 801FF2E0
  cmps(c,0,(int32_t)c->r[21],0); // 801FF2E4
  if (crb(c,2)) { goto L_801FF2F4; } // 801FF2E8
  c->r[25]=0u+0xFFFFF01Au; // 801FF2EC
  goto L_801FFB68; // 801FF2F0
L_801FF2F4:;
  c->r[3]=c->r[31]+0x000000E8u; // 801FF2F4
  c->r[4]=0u+0x00000000u; // 801FF2F8
  c->r[5]=0u+0x00000050u; // 801FF2FC
  c->lr=0x801FF304u; f_80004688(c); // 801FF300
  c->r[0]=0u+0x00000000u; // 801FF304
  W32(c->r[31]+0x00000040u,c->r[0]); // 801FF308
  W32(c->r[31]+0x00000054u,c->r[0]); // 801FF30C
  goto L_801FF404; // 801FF310
L_801FF314:;
  c->r[0]=0u+0x00002060u; // 801FF314
  c->r[16]=0u+0x803E0000u; // 801FF318
  W32(c->r[31]+0x00000060u,c->r[0]); // 801FF31C
  c->r[5]=c->r[16]+0xFFFF8140u; // 801FF320
  c->r[6]=c->r[31]+0x00000060u; // 801FF324
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801FF328
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801FF32C
  c->lr=0x801FF334u; f_801FEB14(c); // 801FF330
  cmps(c,0,(int32_t)c->r[3],0); // 801FF334
  c->r[25]=c->r[3]|c->r[3]; // 801FF338
  if (crb(c,2)) { goto L_801FF37C; } // 801FF33C
  c->r[5]=c->r[25]|c->r[25]; // 801FF340
  c->r[4]=c->r[29]+0x00000139u; // 801FF344
  c->r[3]=0u+0x00000001u; // 801FF348
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF34C
  c->lr=0x801FF354u; f_801FE6E4(c); // 801FF350
  cmps(c,0,(int32_t)c->r[21],0); // 801FF354
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF358
  c->r[3]=c->r[31]+0x000000E8u; // 801FF35C
  c->r[4]=0u+0x00000000u; // 801FF360
  c->r[5]=0u+0x00000050u; // 801FF364
  c->lr=0x801FF36Cu; f_80004688(c); // 801FF368
  c->r[0]=0u+0x00000000u; // 801FF36C
  W32(c->r[31]+0x00000040u,c->r[0]); // 801FF370
  W32(c->r[31]+0x00000054u,c->r[0]); // 801FF374
  goto L_801FF404; // 801FF378
L_801FF37C:;
  c->r[4]=c->r[16]+0xFFFF8140u; // 801FF37C
  c->r[8]=0u+0x803D0000u; // 801FF380
  c->r[5]=R16(c->r[4]+0x0000005Cu); // 801FF384
  c->r[11]=0u+0x803D0000u; // 801FF388
  c->r[3]=c->r[31]+0x00000031u; // 801FF38C
  c->r[0]=c->r[31]+0x00000030u; // 801FF390
  W16(c->r[31]+0x00000032u,c->r[5]); // 801FF394
  c->r[8]=c->r[8]+0x0000778Cu; // 801FF398
  c->r[12]=c->r[31]+0x00000040u; // 801FF39C
  c->r[11]=c->r[11]+0x00007B8Cu; // 801FF3A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801FF3A4
  c->r[6]=c->r[31]+0x0000003Cu; // 801FF3A8
  c->r[5]=c->r[31]+0x00000038u; // 801FF3AC
  c->r[3]=c->r[31]+0x000000E8u; // 801FF3B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801FF3B4
  c->r[0]=c->r[31]+0x00000110u; // 801FF3B8
  c->r[7]=0u+0x00000000u; // 801FF3BC
  c->r[9]=0u+0x00000000u; // 801FF3C0
  W32(c->r[1]+0x00000010u,c->r[8]); // 801FF3C4
  c->r[8]=0u+0x00000000u; // 801FF3C8
  c->r[10]=0u+0x00000000u; // 801FF3CC
  W32(c->r[1]+0x00000014u,c->r[12]); // 801FF3D0
  W32(c->r[1]+0x00000018u,c->r[11]); // 801FF3D4
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 801FF3D8
  W32(c->r[1]+0x00000020u,c->r[5]); // 801FF3DC
  W32(c->r[1]+0x00000024u,c->r[3]); // 801FF3E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801FF3E4
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF3E8
  c->r[5]=R32(c->r[31]+0x0000005Cu); // 801FF3EC
  c->r[6]=R32(c->r[31]+0x00000054u); // 801FF3F0
  c->lr=0x801FF3F8u; f_8020A4C4(c); // 801FF3F4
  cmps(c,0,(int32_t)c->r[3],0); // 801FF3F8
  c->r[25]=c->r[3]|c->r[3]; // 801FF3FC
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF400
L_801FF404:;
  cmps(c,0,(int32_t)c->r[27],0); // 801FF404
  if (crb(c,2)) { goto L_801FF410; } // 801FF408
  c->r[28]=c->r[31]+0x00000032u; // 801FF40C
L_801FF410:;
  c->r[3]=0u+0x00010000u; // 801FF410
  c->r[5]=c->r[28]|c->r[28]; // 801FF414
  c->r[0]=c->r[3]+0xFFFF8000u; // 801FF418
  c->r[4]=c->r[30]+0x000000D0u; // 801FF41C
  W32(c->r[31]+0x00000058u,c->r[0]); // 801FF420
  c->r[6]=c->r[31]+0x0000005Cu; // 801FF424
  c->r[7]=c->r[31]+0x00000058u; // 801FF428
  c->r[8]=c->r[31]+0x00000050u; // 801FF42C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF430
  c->r[9]=c->r[31]+0x0000004Cu; // 801FF434
  c->lr=0x801FF43Cu; f_8020A08C(c); // 801FF438
  cmps(c,0,(int32_t)c->r[3],0); // 801FF43C
  c->r[25]=c->r[3]|c->r[3]; // 801FF440
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF444
  c->r[0]=0u+0x00002060u; // 801FF448
  c->r[4]=0u+0x803E0000u; // 801FF44C
  W32(c->r[31]+0x00000060u,c->r[0]); // 801FF450
  c->r[4]=c->r[4]+0xFFFF8140u; // 801FF454
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 801FF458
  c->r[5]=c->r[31]+0x00000060u; // 801FF45C
  c->lr=0x801FF464u; f_801FEC3C(c); // 801FF460
  cmps(c,0,(int32_t)c->r[3],0); // 801FF464
  c->r[25]=c->r[3]|c->r[3]; // 801FF468
  if (crb(c,2)) { goto L_801FF488; } // 801FF46C
  c->r[5]=c->r[25]|c->r[25]; // 801FF470
  c->r[4]=c->r[29]+0x0000015Cu; // 801FF474
  c->r[3]=0u+0x00000001u; // 801FF478
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF47C
  c->lr=0x801FF484u; f_801FE6E4(c); // 801FF480
  goto L_801FFB68; // 801FF484
L_801FF488:;
  c->r[0]=R8(c->r[30]+0x000000E0u); // 801FF488
  cmps(c,0,(int32_t)c->r[0],0); // 801FF48C
  if (crb(c,2)) { goto L_801FF4A4; } // 801FF490
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF494
  c->r[0]=R8(c->r[3]+0x00000242u); // 801FF498
  cmps(c,0,(int32_t)c->r[0],0); // 801FF49C
  if (crb(c,2)) { goto L_801FF4EC; } // 801FF4A0
L_801FF4A4:;
  c->r[3]=0u+0x803E0000u; // 801FF4A4
  c->r[3]=c->r[3]+0xFFFF8140u; // 801FF4A8
  c->lr=0x801FF4B0u; f_80214144(c); // 801FF4AC
  cmps(c,0,(int32_t)c->r[3],0); // 801FF4B0
  c->r[25]=c->r[3]|c->r[3]; // 801FF4B4
  if (crb(c,0)) { goto L_801FFB68; } // 801FF4B8
  if (!crb(c,1)) { goto L_801FF4C8; } // 801FF4BC
  c->r[22]=0u+0x00000001u; // 801FF4C0
  goto L_801FF4CC; // 801FF4C4
L_801FF4C8:;
  c->r[22]=0u+0x00000000u; // 801FF4C8
L_801FF4CC:;
  cmps(c,0,(int32_t)c->r[22],0); // 801FF4CC
  if (crb(c,2)) { goto L_801FF4EC; } // 801FF4D0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF4D4
  c->r[0]=R8(c->r[3]+0x00000242u); // 801FF4D8
  cmps(c,0,(int32_t)c->r[0],0); // 801FF4DC
  if (crb(c,2)) { goto L_801FF4EC; } // 801FF4E0
  c->r[25]=0u+0xFFFFF019u; // 801FF4E4
  goto L_801FFB68; // 801FF4E8
L_801FF4EC:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 801FF4EC
  cmps(c,0,(int32_t)c->r[0],2); // 801FF4F0
  if (!crb(c,2)) { goto L_801FF504; } // 801FF4F4
  c->r[24]=0u+0x803D0000u; // 801FF4F8
  c->r[23]=R32(c->r[31]+0x00000040u); // 801FF4FC
  c->r[24]=c->r[24]+0x0000778Cu; // 801FF500
L_801FF504:;
  cmps(c,0,(int32_t)c->r[17],0); // 801FF504
  if (crb(c,2)) { goto L_801FF58C; } // 801FF508
  cmps(c,0,(int32_t)c->r[18],0); // 801FF50C
  if (crb(c,2)) { goto L_801FF58C; } // 801FF510
  cmps(c,0,(int32_t)c->r[23],0); // 801FF514
  if (!crb(c,2)) { goto L_801FF528; } // 801FF518
  c->r[24]=c->r[17]|c->r[17]; // 801FF51C
  c->r[23]=c->r[18]|c->r[18]; // 801FF520
  goto L_801FF58C; // 801FF524
L_801FF528:;
  c->r[4]=0u+0x00000000u; // 801FF528
  goto L_801FF584; // 801FF52C
L_801FF530:;
  c->r[5]=0u+0x00000000u; // 801FF530
  goto L_801FF554; // 801FF534
L_801FF538:;
  c->r[3]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801FF538
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FF53C
  c->r[3]=R16(c->r[24]+c->r[3]); // 801FF540
  c->r[0]=R16(c->r[17]+c->r[0]); // 801FF544
  cmpu(c,0,c->r[3],c->r[0]); // 801FF548
  if (crb(c,2)) { goto L_801FF55C; } // 801FF54C
  c->r[5]=c->r[5]+0x00000001u; // 801FF550
L_801FF554:;
  cmpu(c,0,c->r[5],c->r[23]); // 801FF554
  if (crb(c,0)) { IRQCHK(c); goto L_801FF538; } // 801FF558
L_801FF55C:;
  cmpu(c,0,c->r[5],c->r[23]); // 801FF55C
  if (!crb(c,2)) { goto L_801FF580; } // 801FF560
  cmpu(c,0,c->r[23],0x00000200u); // 801FF564
  if (!crb(c,0)) { goto L_801FF580; } // 801FF568
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FF56C
  c->r[0]=rotl(c->r[23],1)&0xFFFFFFFEu; // 801FF570
  c->r[3]=R16(c->r[17]+c->r[3]); // 801FF574
  c->r[23]=c->r[23]+0x00000001u; // 801FF578
  W16(c->r[24]+c->r[0],c->r[3]); // 801FF57C
L_801FF580:;
  c->r[4]=c->r[4]+0x00000001u; // 801FF580
L_801FF584:;
  cmpu(c,0,c->r[4],c->r[18]); // 801FF584
  if (crb(c,0)) { IRQCHK(c); goto L_801FF530; } // 801FF588
L_801FF58C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF58C
  c->r[5]=0u+0x00000000u; // 801FF590
  c->r[4]=R32(c->r[31]+0x00000058u); // 801FF594
  c->r[0]=0u+0xFFFFFFFFu; // 801FF598
  c->r[6]=R32(c->r[3]+0x000001CCu); // 801FF59C
  c->r[4]=addc(c,c->r[4],c->r[6],0); // 801FF5A0
  c->r[3]=addc(c,c->r[5],0,c->xer_ca); // 801FF5A4
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 801FF5A8
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 801FF5AC
  c->lr=0x801FF5B4u; f_80185F38(c); // 801FF5B0
  c->r[0]=R32(c->r[30]+0x000000DCu); // 801FF5B4
  c->r[27]=0u+0x00000000u; // 801FF5B8
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 801FF5BC
  c->r[28]=0u+0x00000000u; // 801FF5C0
  cmps(c,0,(int32_t)c->r[0],3); // 801FF5C4
  if (!crb(c,2)) { goto L_801FF5F0; } // 801FF5C8
  c->r[0]=R32(c->r[31]+0x00000054u); // 801FF5CC
  cmps(c,0,(int32_t)c->r[0],0); // 801FF5D0
  if (crb(c,2)) { goto L_801FF5E4; } // 801FF5D4
  c->r[0]=0u+0x00000002u; // 801FF5D8
  W32(c->r[31]+0x00000078u,c->r[0]); // 801FF5DC
  goto L_801FF610; // 801FF5E0
L_801FF5E4:;
  c->r[0]=0u+0x00000006u; // 801FF5E4
  W32(c->r[31]+0x00000078u,c->r[0]); // 801FF5E8
  goto L_801FF610; // 801FF5EC
L_801FF5F0:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 801FF5F0
  cmps(c,0,(int32_t)c->r[0],0); // 801FF5F4
  if (crb(c,2)) { goto L_801FF608; } // 801FF5F8
  c->r[0]=0u+0x00000002u; // 801FF5FC
  W32(c->r[31]+0x00000078u,c->r[0]); // 801FF600
  goto L_801FF610; // 801FF604
L_801FF608:;
  c->r[0]=0u+0x00000006u; // 801FF608
  W32(c->r[31]+0x00000078u,c->r[0]); // 801FF60C
L_801FF610:;
  c->r[0]=R8(c->r[30]+0x000000E0u); // 801FF610
  cmps(c,0,(int32_t)c->r[0],0); // 801FF614
  if (crb(c,2)) { goto L_801FF640; } // 801FF618
  c->r[0]=R32(c->r[31]+0x00000034u); // 801FF61C
  cmps(c,0,(int32_t)c->r[0],0); // 801FF620
  if (!crb(c,2)) { goto L_801FF640; } // 801FF624
  c->r[4]=R32(c->r[31]+0x0000007Cu); // 801FF628
  c->r[3]=R32(c->r[31]+0x00000078u); // 801FF62C
  c->r[4]=c->r[4]+0x00000001u; // 801FF630
  c->r[0]=c->r[3]+0x00000002u; // 801FF634
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 801FF638
  W32(c->r[31]+0x00000078u,c->r[0]); // 801FF63C
L_801FF640:;
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 801FF640
  c->r[4]=c->r[31]+0x00000044u; // 801FF644
  c->r[5]=c->r[31]+0x00000048u; // 801FF648
  c->lr=0x801FF650u; f_802132B8(c); // 801FF64C
  cmps(c,0,(int32_t)c->r[3],0); // 801FF650
  c->r[25]=c->r[3]|c->r[3]; // 801FF654
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF658
  c->r[0]=R8(c->r[30]+0x000000E0u); // 801FF65C
  c->r[5]=R32(c->r[31]+0x0000007Cu); // 801FF660
  c->r[4]=R32(c->r[31]+0x00000044u); // 801FF664
  cmps(c,0,(int32_t)c->r[0],0); // 801FF668
  c->r[3]=R32(c->r[31]+0x00000078u); // 801FF66C
  c->r[0]=R32(c->r[31]+0x00000048u); // 801FF670
  c->r[4]=c->r[5]+c->r[4]; // 801FF674
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 801FF678
  c->r[0]=c->r[3]+c->r[0]; // 801FF67C
  W32(c->r[31]+0x00000078u,c->r[0]); // 801FF680
  if (crb(c,2)) { goto L_801FF6C8; } // 801FF684
  c->r[0]=R32(c->r[30]+0x000000DCu); // 801FF688
  cmps(c,0,(int32_t)c->r[0],16416); // 801FF68C
  if (!crb(c,2)) { goto L_801FF6C8; } // 801FF690
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF694
  c->r[5]=0u+0x00000000u; // 801FF698
  c->r[4]=R32(c->r[31]+0x00000058u); // 801FF69C
  c->r[0]=0u+0xFFFFFFFFu; // 801FF6A0
  c->r[6]=R32(c->r[3]+0x000001CCu); // 801FF6A4
  c->r[4]=addc(c,c->r[4],c->r[6],0); // 801FF6A8
  c->r[3]=addc(c,c->r[5],0,c->xer_ca); // 801FF6AC
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 801FF6B0
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 801FF6B4
  c->lr=0x801FF6BCu; f_80185F38(c); // 801FF6B8
  c->r[0]=0u+0x00000001u; // 801FF6BC
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 801FF6C0
  W32(c->r[31]+0x00000078u,c->r[0]); // 801FF6C4
L_801FF6C8:;
  c->r[0]=c->r[31]+0x00000031u; // 801FF6C8
  c->r[11]=0u+0x803D0000u; // 801FF6CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FF6D0
  c->r[0]=c->r[31]+0x00000030u; // 801FF6D4
  c->r[4]=0u+0x803E0000u; // 801FF6D8
  c->r[8]=0u+0x00000000u; // 801FF6DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801FF6E0
  c->r[11]=c->r[11]+0x00007B8Cu; // 801FF6E4
  c->r[6]=c->r[31]+0x0000003Cu; // 801FF6E8
  c->r[5]=c->r[31]+0x00000038u; // 801FF6EC
  W32(c->r[1]+0x00000010u,c->r[8]); // 801FF6F0
  c->r[3]=c->r[31]+0x00000098u; // 801FF6F4
  c->r[0]=c->r[31]+0x000000C0u; // 801FF6F8
  c->r[7]=c->r[20]|c->r[20]; // 801FF6FC
  W32(c->r[1]+0x00000014u,c->r[8]); // 801FF700
  c->r[8]=c->r[19]|c->r[19]; // 801FF704
  c->r[9]=c->r[24]|c->r[24]; // 801FF708
  c->r[10]=c->r[23]|c->r[23]; // 801FF70C
  W32(c->r[1]+0x00000018u,c->r[11]); // 801FF710
  c->r[4]=c->r[4]+0xFFFF8140u; // 801FF714
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 801FF718
  W32(c->r[1]+0x00000020u,c->r[5]); // 801FF71C
  W32(c->r[1]+0x00000024u,c->r[3]); // 801FF720
  W32(c->r[1]+0x00000028u,c->r[0]); // 801FF724
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF728
  c->r[5]=R32(c->r[31]+0x0000005Cu); // 801FF72C
  c->r[6]=R32(c->r[31]+0x00000058u); // 801FF730
  c->lr=0x801FF738u; f_8020A4C4(c); // 801FF734
  cmps(c,0,(int32_t)c->r[3],0); // 801FF738
  c->r[25]=c->r[3]|c->r[3]; // 801FF73C
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF740
  c->r[4]=R32(c->r[31]+0x000000B8u); // 801FF744
  c->r[3]=R32(c->r[31]+0x000000B0u); // 801FF748
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 801FF74C
  c->r[7]=R32(c->r[31]+0x000000A4u); // 801FF750
  c->r[4]=c->r[4]+c->r[3]; // 801FF754
  c->r[3]=R32(c->r[31]+0x0000007Cu); // 801FF758
  c->r[0]=c->r[0]+c->r[7]; // 801FF75C
  c->r[6]=R32(c->r[31]+0x000000BCu); // 801FF760
  c->r[9]=c->r[4]+c->r[0]; // 801FF764
  c->r[5]=R32(c->r[31]+0x000000B4u); // 801FF768
  c->r[4]=c->r[7]+c->r[3]; // 801FF76C
  c->r[10]=R32(c->r[31]+0x000000ECu); // 801FF770
  c->r[7]=c->r[6]+c->r[5]; // 801FF774
  c->r[0]=R32(c->r[31]+0x000000A0u); // 801FF778
  c->r[8]=R32(c->r[31]+0x000000A8u); // 801FF77C
  c->r[5]=c->r[9]-c->r[10]; // 801FF780
  c->r[9]=R32(c->r[31]+0x00000100u); // 801FF784
  c->r[6]=c->r[0]+c->r[8]; // 801FF788
  c->r[0]=R32(c->r[31]+0x00000078u); // 801FF78C
  c->r[5]=c->r[5]-c->r[9]; // 801FF790
  c->r[9]=R32(c->r[31]+0x000000F0u); // 801FF794
  c->r[5]=c->r[5]+c->r[3]; // 801FF798
  c->r[3]=c->r[7]+c->r[6]; // 801FF79C
  c->r[6]=R32(c->r[31]+0x00000104u); // 801FF7A0
  c->r[3]=c->r[3]-c->r[9]; // 801FF7A4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801FF7A8
  W32(c->r[31]+0x00000074u,c->r[5]); // 801FF7AC
  c->r[6]=c->r[3]-c->r[6]; // 801FF7B0
  c->r[3]=c->r[8]+c->r[0]; // 801FF7B4
  c->r[0]=c->r[6]+c->r[0]; // 801FF7B8
  W32(c->r[31]+0x00000070u,c->r[0]); // 801FF7BC
  if (!crb(c,1)) { goto L_801FF7CC; } // 801FF7C0
  c->r[4]=c->r[5]|c->r[5]; // 801FF7C4
  goto L_801FF7D0; // 801FF7C8
L_801FF7CC:;
  W32(c->r[31]+0x00000074u,c->r[4]); // 801FF7CC
L_801FF7D0:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801FF7D0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801FF7D4
  if (!crb(c,1)) { goto L_801FF7E4; } // 801FF7D8
  c->r[3]=c->r[0]|c->r[0]; // 801FF7DC
  goto L_801FF7E8; // 801FF7E0
L_801FF7E4:;
  W32(c->r[31]+0x00000070u,c->r[3]); // 801FF7E4
L_801FF7E8:;
  c->r[0]=R8(c->r[30]+0x000000E0u); // 801FF7E8
  c->r[5]=R32(c->r[31]+0x000000CCu); // 801FF7EC
  c->r[6]=R32(c->r[31]+0x000000D0u); // 801FF7F0
  cmps(c,0,(int32_t)c->r[0],0); // 801FF7F4
  c->r[7]=c->r[27]+c->r[5]; // 801FF7F8
  c->r[8]=R32(c->r[31]+0x000000E0u); // 801FF7FC
  c->r[5]=R32(c->r[31]+0x000000E4u); // 801FF800
  c->r[0]=c->r[28]+c->r[6]; // 801FF804
  c->r[27]=c->r[8]+c->r[7]; // 801FF808
  c->r[28]=c->r[5]+c->r[0]; // 801FF80C
  if (crb(c,2)) { goto L_801FF83C; } // 801FF810
  c->r[4]=R32(c->r[30]+0x000000E4u); // 801FF814
  c->r[3]=R32(c->r[31]+0x00000070u); // 801FF818
  c->r[0]=R32(c->r[31]+0x00000074u); // 801FF81C
  W32(c->r[4]+0x00000000u,c->r[3]); // 801FF820
  c->r[3]=R32(c->r[31]+0x00000078u); // 801FF824
  W32(c->r[4]+0x00000004u,c->r[0]); // 801FF828
  c->r[0]=R32(c->r[31]+0x0000007Cu); // 801FF82C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801FF830
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801FF834
  goto L_801FFB68; // 801FF838
L_801FF83C:;
  c->lr=0x801FF840u; f_802132CC(c); // 801FF83C
  cmps(c,0,(int32_t)c->r[3],0); // 801FF840
  c->r[25]=c->r[3]|c->r[3]; // 801FF844
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF848
  c->r[3]=c->r[28]|c->r[28]; // 801FF84C
  c->r[4]=c->r[27]|c->r[27]; // 801FF850
  c->lr=0x801FF858u; f_80213394(c); // 801FF854
  cmps(c,0,(int32_t)c->r[3],0); // 801FF858
  c->r[25]=c->r[3]|c->r[3]; // 801FF85C
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF860
  cmps(c,0,(int32_t)c->r[22],0); // 801FF864
  c->r[3]=R32(c->r[31]+0x00000038u); // 801FF868
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801FF86C
  c->r[28]=0u+0x00000000u; // 801FF870
  c->r[27]=c->r[0]-c->r[3]; // 801FF874
  if (crb(c,2)) { goto L_801FF890; } // 801FF878
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF87C
  c->r[0]=R8(c->r[3]+0x00000242u); // 801FF880
  cmps(c,0,(int32_t)c->r[0],0); // 801FF884
  if (!crb(c,2)) { goto L_801FF890; } // 801FF888
  c->r[28]=0u+0x00000001u; // 801FF88C
L_801FF890:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 801FF890
  c->r[3]=0u+0x00000001u; // 801FF894
  cmps(c,0,(int32_t)c->r[0],3); // 801FF898
  if (crb(c,2)) { goto L_801FF8C8; } // 801FF89C
  cmps(c,0,(int32_t)c->r[27],0); // 801FF8A0
  c->r[4]=0u+0x00000000u; // 801FF8A4
  if (crb(c,2)) { goto L_801FF8BC; } // 801FF8A8
  c->r[0]=R32(c->r[31]+0x00000038u); // 801FF8AC
  cmps(c,0,(int32_t)c->r[0],0); // 801FF8B0
  if (!crb(c,2)) { goto L_801FF8BC; } // 801FF8B4
  c->r[4]=0u+0x00000001u; // 801FF8B8
L_801FF8BC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801FF8BC
  if (!crb(c,2)) { goto L_801FF8C8; } // 801FF8C0
  c->r[3]=0u+0x00000000u; // 801FF8C4
L_801FF8C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FF8C8
  if (crb(c,2)) { goto L_801FF8F4; } // 801FF8CC
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF8D0
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 801FF8D4
  c->r[5]=R32(c->r[31]+0x00000058u); // 801FF8D8
  c->r[6]=R32(c->r[31]+0x00000050u); // 801FF8DC
  c->r[7]=R32(c->r[31]+0x0000004Cu); // 801FF8E0
  c->r[8]=R32(c->r[3]+0x00000238u); // 801FF8E4
  c->r[9]=R32(c->r[3]+0x0000023Cu); // 801FF8E8
  c->lr=0x801FF8F0u; f_8020A300(c); // 801FF8EC
  c->r[25]=c->r[3]|c->r[3]; // 801FF8F0
L_801FF8F4:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 801FF8F4
  cmps(c,0,(int32_t)c->r[0],3); // 801FF8F8
  if (crb(c,2)) { goto L_801FFB68; } // 801FF8FC
  c->r[5]=R32(c->r[31]+0x000000D4u); // 801FF900
  cmps(c,0,(int32_t)c->r[28],0); // 801FF904
  c->r[0]=R32(c->r[31]+0x000000ACu); // 801FF908
  c->r[4]=R32(c->r[31]+0x000000C0u); // 801FF90C
  c->r[3]=R32(c->r[31]+0x00000098u); // 801FF910
  c->r[0]=c->r[5]+c->r[0]; // 801FF914
  c->r[3]=c->r[4]+c->r[3]; // 801FF918
  c->r[16]=c->r[3]+c->r[0]; // 801FF91C
  if (!crb(c,2)) { goto L_801FF938; } // 801FF920
  c->r[0]=R32(c->r[31]+0x00000038u); // 801FF924
  cmps(c,0,(int32_t)c->r[0],0); // 801FF928
  if (crb(c,2)) { goto L_801FF9B4; } // 801FF92C
  cmps(c,0,(int32_t)c->r[27],0); // 801FF930
  if (crb(c,2)) { goto L_801FF9B4; } // 801FF934
L_801FF938:;
  c->r[3]=R32(c->r[31]+0x00000058u); // 801FF938
  c->r[4]=0u+0x00000040u; // 801FF93C
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 801FF940
  c->r[3]=c->r[3]+c->r[0]; // 801FF944
  c->lr=0x801FF94Cu; f_80201FC4(c); // 801FF948
  cmps(c,0,(int32_t)c->r[3],0); // 801FF94C
  c->r[26]=c->r[3]|c->r[3]; // 801FF950
  if (!crb(c,2)) { goto L_801FF994; } // 801FF954
  c->r[3]=c->r[31]+0x00000064u; // 801FF958
  c->r[4]=c->r[30]+0x000000D0u; // 801FF95C
  c->lr=0x801FF964u; f_801FD8E8(c); // 801FF960
  c->r[25]=0u+0xFFFFF05Bu; // 801FF964
  c->r[4]=c->r[29]+0x00000186u; // 801FF968
  c->r[6]=c->r[25]|c->r[25]; // 801FF96C
  c->r[5]=c->r[31]+0x00000064u; // 801FF970
  c->r[3]=0u+0x00000001u; // 801FF974
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF978
  c->lr=0x801FF980u; f_801FE6E4(c); // 801FF97C
  c->r[0]=0u+0xFFFFFFFFu; // 801FF980
  c->r[3]=c->r[31]+0x00000064u; // 801FF984
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FF988
  c->lr=0x801FF990u; f_801FD984(c); // 801FF98C
  goto L_801FFB68; // 801FF990
L_801FF994:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 801FF994
  c->r[5]=R32(c->r[31]+0x00000058u); // 801FF998
  c->lr=0x801FF9A0u; f_80004338(c); // 801FF99C
  c->r[0]=R32(c->r[31]+0x00000058u); // 801FF9A0
  c->r[4]=R32(c->r[31]+0x00000050u); // 801FF9A4
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 801FF9A8
  c->r[3]=c->r[26]+c->r[0]; // 801FF9AC
  c->lr=0x801FF9B4u; f_80004338(c); // 801FF9B0
L_801FF9B4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801FF9B4
  if (crb(c,2)) { goto L_801FFA0C; } // 801FF9B8
  c->r[4]=0u+0x803E0000u; // 801FF9BC
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FF9C0
  c->r[4]=c->r[4]+0xFFFF8140u; // 801FF9C4
  c->r[7]=c->r[16]|c->r[16]; // 801FF9C8
  c->r[5]=R32(c->r[4]+0x00000008u); // 801FF9CC
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 801FF9D0
  c->lr=0x801FF9D8u; f_8020B640(c); // 801FF9D4
  cmps(c,0,(int32_t)c->r[3],0); // 801FF9D8
  c->r[25]=c->r[3]|c->r[3]; // 801FF9DC
  if (!crb(c,2)) { goto L_801FFB68; } // 801FF9E0
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 801FF9E4
  c->r[4]=c->r[26]|c->r[26]; // 801FF9E8
  c->r[5]=R32(c->r[31]+0x00000058u); // 801FF9EC
  c->lr=0x801FF9F4u; f_80004338(c); // 801FF9F0
  c->r[0]=R32(c->r[31]+0x00000058u); // 801FF9F4
  c->r[3]=R32(c->r[31]+0x00000050u); // 801FF9F8
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 801FF9FC
  c->r[4]=c->r[26]+c->r[0]; // 801FFA00
  c->lr=0x801FFA08u; f_80004338(c); // 801FFA04
  goto L_801FFA38; // 801FFA08
L_801FFA0C:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801FFA0C
  cmps(c,0,(int32_t)c->r[0],0); // 801FFA10
  if (crb(c,2)) { goto L_801FFA38; } // 801FFA14
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FFA18
  c->r[0]=0u+0x00000001u; // 801FFA1C
  c->r[4]=c->r[16]|c->r[16]; // 801FFA20
  c->r[3]=R32(c->r[3]+0x00000004u); // 801FFA24
  W32(c->r[3]+0x000000BCu,c->r[0]); // 801FFA28
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FFA2C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801FFA30
  c->lr=0x801FFA38u; f_801FD4B8(c); // 801FFA34
L_801FFA38:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 801FFA38
  cmps(c,0,(int32_t)c->r[0],0); // 801FFA3C
  if (crb(c,2)) { goto L_801FFA8C; } // 801FFA40
  c->r[3]=0u+0x803D0000u; // 801FFA44
  c->r[4]=0u+0x803E0000u; // 801FFA48
  c->r[3]=c->r[3]+0x00007B8Cu; // 801FFA4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801FFA50
  c->r[4]=c->r[4]+0xFFFF8140u; // 801FFA54
  c->r[0]=R32(c->r[31]+0x00000038u); // 801FFA58
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801FFA5C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FFA60
  c->r[5]=R32(c->r[31]+0x0000005Cu); // 801FFA64
  c->r[6]=R32(c->r[31]+0x00000058u); // 801FFA68
  c->r[7]=R32(c->r[31]+0x00000050u); // 801FFA6C
  c->r[8]=R32(c->r[31]+0x0000004Cu); // 801FFA70
  c->r[9]=R32(c->r[3]+0x00000238u); // 801FFA74
  c->r[10]=R32(c->r[3]+0x0000023Cu); // 801FFA78
  c->lr=0x801FFA80u; f_8020A9D8(c); // 801FFA7C
  cmps(c,0,(int32_t)c->r[3],0); // 801FFA80
  c->r[25]=c->r[3]|c->r[3]; // 801FFA84
  if (!crb(c,2)) { goto L_801FFB68; } // 801FFA88
L_801FFA8C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801FFA8C
  if (crb(c,2)) { goto L_801FFB68; } // 801FFA90
  c->r[0]=R32(c->r[31]+0x00000038u); // 801FFA94
  cmps(c,0,(int32_t)c->r[0],0); // 801FFA98
  if (crb(c,2)) { goto L_801FFAD0; } // 801FFA9C
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 801FFAA0
  c->r[4]=c->r[26]|c->r[26]; // 801FFAA4
  c->r[5]=R32(c->r[31]+0x00000058u); // 801FFAA8
  c->lr=0x801FFAB0u; f_80004338(c); // 801FFAAC
  c->r[0]=R32(c->r[31]+0x00000058u); // 801FFAB0
  c->r[3]=R32(c->r[31]+0x00000050u); // 801FFAB4
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 801FFAB8
  c->r[4]=c->r[26]+c->r[0]; // 801FFABC
  c->lr=0x801FFAC4u; f_80004338(c); // 801FFAC0
  c->r[3]=c->r[26]|c->r[26]; // 801FFAC4
  c->lr=0x801FFACCu; f_80202098(c); // 801FFAC8
  c->r[26]=0u+0x00000000u; // 801FFACC
L_801FFAD0:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 801FFAD0
  c->r[3]=0u+0x803D0000u; // 801FFAD4
  c->r[4]=0u+0x803E0000u; // 801FFAD8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FFADC
  c->r[3]=c->r[3]+0x00007B8Cu; // 801FFAE0
  c->r[0]=c->r[3]+c->r[0]; // 801FFAE4
  c->r[4]=c->r[4]+0xFFFF8140u; // 801FFAE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801FFAEC
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 801FFAF0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FFAF4
  c->r[5]=R32(c->r[31]+0x0000005Cu); // 801FFAF8
  c->r[6]=R32(c->r[31]+0x00000058u); // 801FFAFC
  c->r[7]=R32(c->r[31]+0x00000050u); // 801FFB00
  c->r[8]=R32(c->r[31]+0x0000004Cu); // 801FFB04
  c->r[9]=R32(c->r[3]+0x00000238u); // 801FFB08
  c->r[10]=R32(c->r[3]+0x0000023Cu); // 801FFB0C
  c->lr=0x801FFB14u; f_8020A9D8(c); // 801FFB10
  c->r[25]=c->r[3]|c->r[3]; // 801FFB14
  goto L_801FFB68; // 801FFB18
  c->r[4]=c->r[29]+0x000001C1u; // 801FFB1C
  c->r[3]=0u+0x00000001u; // 801FFB20
  c->r[5]=0u+0x0000027Au; // 801FFB24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFB28
  c->lr=0x801FFB30u; f_801FE6E4(c); // 801FFB2C
  c->r[25]=0u+0xFFFFF05Bu; // 801FFB30
  goto L_801FFB50; // 801FFB34
  c->r[4]=c->r[29]+0x00000223u; // 801FFB38
  c->r[3]=0u+0x00000001u; // 801FFB3C
  c->r[5]=0u+0x0000027Au; // 801FFB40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFB44
  c->lr=0x801FFB4Cu; f_801FE6E4(c); // 801FFB48
  c->r[25]=0u+0xFFFFF05Fu; // 801FFB4C
L_801FFB50:;
  c->r[3]=c->r[31]+0x00000080u; // 801FFB50
  c->lr=0x801FFB58u; f_80187EEC(c); // 801FFB54
  c->r[0]=c->r[0]|0x00000000u; // 801FFB58
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FFB5C
  c->r[1]=R32(c->r[31]+0x00000094u); // 801FFB60
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FFB64
L_801FFB68:;
  cmps(c,0,(int32_t)c->r[26],0); // 801FFB68
  if (crb(c,2)) { goto L_801FFB78; } // 801FFB6C
  c->r[3]=c->r[26]|c->r[26]; // 801FFB70
  c->lr=0x801FFB78u; f_80202098(c); // 801FFB74
L_801FFB78:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801FFB78
  c->lr=0x801FFB80u; f_801FB5D8(c); // 801FFB7C
  c->r[3]=c->r[25]|c->r[25]; // 801FFB80
L_801FFB84:;
  c->r[10]=c->r[31]|c->r[31]; // 801FFB84
  c->r[11]=c->r[10]+0x00000180u; // 801FFB88
  c->lr=0x801FFB90u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FFB8C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFB90
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFB94
  c->r[1]=c->r[10]|c->r[10]; // 801FFB98
  c->lr=c->r[0]; // 801FFB9C
  return; // 801FFBA0
}

// fn_801FFBA4
void f_801FFBA4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801FFBA4
  c->r[5]=0u+0x00000000u; // 801FFBA8
  f_801FF020(c); return; // 801FFBAC
}

// fn_801FFBB0
void f_801FFBB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFBB0
  c->r[0]=c->lr; // 801FFBB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FFBB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FFBBC
  c->r[31]=c->r[3]|c->r[3]; // 801FFBC0
  c->lr=0x801FFBC8u; f_801FD6B4(c); // 801FFBC4
  c->r[0]=R32(c->r[31]+0x000000D0u); // 801FFBC8
  c->r[4]=0u+0x80340000u; // 801FFBCC
  c->r[4]=c->r[4]+0xFFFFC003u; // 801FFBD0
  c->r[3]=0u+0x00000003u; // 801FFBD4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801FFBD8
  if (!crb(c,2)) { goto L_801FFBE8; } // 801FFBDC
  c->r[5]=c->r[31]+0x000000D1u; // 801FFBE0
  goto L_801FFBEC; // 801FFBE4
L_801FFBE8:;
  c->r[5]=R32(c->r[31]+0x000000D8u); // 801FFBE8
L_801FFBEC:;
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFBEC
  c->lr=0x801FFBF4u; f_801FE6E4(c); // 801FFBF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FFBF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FFBF8
  c->lr=c->r[0]; // 801FFBFC
  c->r[1]=c->r[1]+0x00000010u; // 801FFC00
  return; // 801FFC04
}

// fn_801FFC08
void f_801FFC08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFC08
  c->r[0]=c->lr; // 801FFC0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FFC10
  c->r[11]=c->r[1]+0x00000030u; // 801FFC14
  c->lr=0x801FFC1Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FFC18
  c->r[28]=c->r[3]|c->r[3]; // 801FFC1C
  c->r[29]=c->r[5]|c->r[5]; // 801FFC20
  c->lr=0x801FFC28u; f_801FD580(c); // 801FFC24
  c->r[0]=R32(c->r[28]+0x000000D0u); // 801FFC28
  c->r[30]=c->r[3]|c->r[3]; // 801FFC2C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[4]); // 801FFC30
  if (!crb(c,2)) { goto L_801FFC5C; } // 801FFC34
  c->r[3]=R32(c->r[29]+0x00000008u); // 801FFC38
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 801FFC3C
  if (!crb(c,2)) { goto L_801FFC5C; } // 801FFC40
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801FFC44
  W32(c->r[28]+0x000000D0u,c->r[3]); // 801FFC48
  W32(c->r[28]+0x000000D4u,c->r[0]); // 801FFC4C
  c->r[0]=R32(c->r[29]+0x00000010u); // 801FFC50
  W32(c->r[28]+0x000000D8u,c->r[0]); // 801FFC54
  goto L_801FFCAC; // 801FFC58
L_801FFC5C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801FFC5C
  if (crb(c,2)) { goto L_801FFC6C; } // 801FFC60
  c->r[31]=R32(c->r[28]+0x000000D4u); // 801FFC64
  goto L_801FFC74; // 801FFC68
L_801FFC6C:;
  c->r[0]=R8(c->r[28]+0x000000D0u); // 801FFC6C
  c->r[31]=rotl(c->r[0],0)&0x0000007Fu; // 801FFC70
L_801FFC74:;
  c->r[3]=c->r[29]+0x00000008u; // 801FFC74
  c->r[4]=c->r[1]+0x0000000Cu; // 801FFC78
  c->r[5]=c->r[1]+0x00000010u; // 801FFC7C
  c->lr=0x801FFC84u; f_801FBDA0(c); // 801FFC80
  c->r[4]=R8(c->r[1]+0x00000009u); // 801FFC84
  c->r[5]=c->r[31]|c->r[31]; // 801FFC88
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801FFC8C
  c->r[3]=c->r[28]+0x000000D0u; // 801FFC90
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FFC94
  c->r[8]=c->r[1]+0x00000008u; // 801FFC98
  W8(c->r[1]+0x00000008u,c->r[4]); // 801FFC9C
  c->r[4]=0u+0x00000000u; // 801FFCA0
  c->r[7]=c->r[6]+c->r[0]; // 801FFCA4
  c->lr=0x801FFCACu; f_801FDDF4(c); // 801FFCA8
L_801FFCAC:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 801FFCAC
  c->r[0]=0u+0x00000000u; // 801FFCB0
  c->r[5]=R32(c->r[29]+0x00000004u); // 801FFCB4
  c->r[11]=c->r[1]+0x00000030u; // 801FFCB8
  c->r[3]=c->r[30]|c->r[30]; // 801FFCBC
  W32(c->r[28]+0x000000CCu,c->r[5]); // 801FFCC0
  W32(c->r[28]+0x000000C8u,c->r[4]); // 801FFCC4
  c->r[4]=R32(c->r[29]+0x00000014u); // 801FFCC8
  W32(c->r[28]+0x000000DCu,c->r[4]); // 801FFCCC
  W8(c->r[28]+0x000000E0u,c->r[0]); // 801FFCD0
  W32(c->r[28]+0x000000E4u,c->r[0]); // 801FFCD4
  c->lr=0x801FFCDCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FFCD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FFCDC
  c->lr=c->r[0]; // 801FFCE0
  c->r[1]=c->r[1]+0x00000030u; // 801FFCE4
  return; // 801FFCE8
}

// fn_801FFCEC
void f_801FFCEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFCEC
  c->r[0]=c->lr; // 801FFCF0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801FFCF4
  c->r[11]=c->r[1]+0x00000060u; // 801FFCF8
  c->lr=0x801FFD00u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FFCFC
  c->r[31]=c->r[1]|c->r[1]; // 801FFD00
  W32(c->r[31]+0x00000018u,c->r[3]); // 801FFD04
  c->r[28]=c->r[5]|c->r[5]; // 801FFD08
  c->r[5]=c->r[3]|c->r[3]; // 801FFD0C
  c->r[6]=c->r[4]|c->r[4]; // 801FFD10
  W32(c->r[31]+0x00000044u,c->r[1]); // 801FFD14
  c->r[29]=c->r[31]+0x00000018u; // 801FFD18
  c->r[3]=c->r[31]+0x00000008u; // 801FFD1C
  c->r[7]=0u+0x00000010u; // 801FFD20
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 801FFD24
  c->lr=0x801FFD2Cu; f_80208EFC(c); // 801FFD28
  c->r[3]=c->r[29]+0x00000008u; // 801FFD2C
  c->r[4]=c->r[31]+0x00000008u; // 801FFD30
  c->lr=0x801FFD38u; f_801FD8E8(c); // 801FFD34
  c->r[30]=0u+0xFFFFFFFFu; // 801FFD38
  c->r[3]=c->r[31]+0x00000008u; // 801FFD3C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801FFD40
  c->lr=0x801FFD48u; f_801FD984(c); // 801FFD44
  c->r[3]=0u+0x803D0000u; // 801FFD48
  W32(c->r[29]+0x00000014u,c->r[28]); // 801FFD4C
  c->r[3]=R32(c->r[3]+0x000073D8u); // 801FFD50
  cmps(c,0,(int32_t)c->r[3],0); // 801FFD54
  if (!crb(c,2)) { goto L_801FFD70; } // 801FFD58
  c->r[3]=c->r[31]+0x00000020u; // 801FFD5C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801FFD60
  c->lr=0x801FFD68u; f_801FD984(c); // 801FFD64
  c->r[3]=0u+0xFFFFF037u; // 801FFD68
  goto L_801FFE78; // 801FFD6C
L_801FFD70:;
  c->r[0]=R8(c->r[3]+0x00000174u); // 801FFD70
  cmps(c,0,(int32_t)c->r[0],0); // 801FFD74
  if (!crb(c,2)) { goto L_801FFD90; } // 801FFD78
  c->r[3]=c->r[31]+0x00000020u; // 801FFD7C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801FFD80
  c->lr=0x801FFD88u; f_801FD984(c); // 801FFD84
  c->r[3]=0u+0xFFFFF01Bu; // 801FFD88
  goto L_801FFE78; // 801FFD8C
L_801FFD90:;
  c->r[3]=c->r[3]+0x000000BCu; // 801FFD90
  c->lr=0x801FFD98u; f_801FBAA0(c); // 801FFD94
  c->r[0]=cntlz(c->r[3]); // 801FFD98
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801FFD9C
  if (crb(c,2)) { goto L_801FFDB8; } // 801FFDA0
  c->r[3]=c->r[31]+0x00000020u; // 801FFDA4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801FFDA8
  c->lr=0x801FFDB0u; f_801FD984(c); // 801FFDAC
  c->r[3]=0u+0xFFFFF036u; // 801FFDB0
  goto L_801FFE78; // 801FFDB4
L_801FFDB8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801FFDB8
  if (crb(c,2)) { goto L_801FFDEC; } // 801FFDBC
  cmps(c,0,(int32_t)c->r[28],1); // 801FFDC0
  if (crb(c,2)) { goto L_801FFDEC; } // 801FFDC4
  cmps(c,0,(int32_t)c->r[28],2); // 801FFDC8
  if (crb(c,2)) { goto L_801FFDEC; } // 801FFDCC
  cmps(c,0,(int32_t)c->r[28],3); // 801FFDD0
  if (crb(c,2)) { goto L_801FFDEC; } // 801FFDD4
  c->r[3]=c->r[31]+0x00000020u; // 801FFDD8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801FFDDC
  c->lr=0x801FFDE4u; f_801FD984(c); // 801FFDE0
  c->r[3]=0u+0xFFFFF05Cu; // 801FFDE4
  goto L_801FFE78; // 801FFDE8
L_801FFDEC:;
  c->r[3]=0u+0x803D0000u; // 801FFDEC
  c->r[4]=0u+0x803D0000u; // 801FFDF0
  c->r[3]=R32(c->r[3]+0x000073D8u); // 801FFDF4
  c->r[5]=c->r[31]+0x00000018u; // 801FFDF8
  c->r[4]=R32(c->r[4]+0x00007788u); // 801FFDFC
  c->lr=0x801FFE04u; f_801FB7E8(c); // 801FFE00
  c->r[0]=0u+0xFFFFFFFFu; // 801FFE04
  c->r[30]=c->r[3]|c->r[3]; // 801FFE08
  c->r[3]=c->r[31]+0x00000020u; // 801FFE0C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FFE10
  c->lr=0x801FFE18u; f_801FD984(c); // 801FFE14
  c->r[3]=c->r[30]|c->r[30]; // 801FFE18
  goto L_801FFE78; // 801FFE1C
  c->r[4]=0u+0x80340000u; // 801FFE20
  c->r[3]=0u+0x00000001u; // 801FFE24
  c->r[4]=c->r[4]+0xFFFFBF49u; // 801FFE28
  c->r[5]=0u+0x000002C5u; // 801FFE2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFE30
  c->lr=0x801FFE38u; f_801FE6E4(c); // 801FFE34
  c->r[29]=0u+0xFFFFF05Bu; // 801FFE38
  goto L_801FFE5C; // 801FFE3C
  c->r[4]=0u+0x80340000u; // 801FFE40
  c->r[3]=0u+0x00000001u; // 801FFE44
  c->r[4]=c->r[4]+0xFFFFBFABu; // 801FFE48
  c->r[5]=0u+0x000002C5u; // 801FFE4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFE50
  c->lr=0x801FFE58u; f_801FE6E4(c); // 801FFE54
  c->r[29]=0u+0xFFFFF05Fu; // 801FFE58
L_801FFE5C:;
  c->r[3]=c->r[31]+0x00000030u; // 801FFE5C
  c->lr=0x801FFE64u; f_80187EEC(c); // 801FFE60
  c->r[0]=c->r[0]|0x00000000u; // 801FFE64
  c->r[0]=R32(c->r[1]+0x00000000u); // 801FFE68
  c->r[1]=R32(c->r[31]+0x00000044u); // 801FFE6C
  W32(c->r[1]+0x00000000u,c->r[0]); // 801FFE70
  c->r[3]=c->r[29]|c->r[29]; // 801FFE74
L_801FFE78:;
  c->r[10]=c->r[31]|c->r[31]; // 801FFE78
  c->r[11]=c->r[10]+0x00000060u; // 801FFE7C
  c->lr=0x801FFE84u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FFE80
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFE84
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFE88
  c->r[1]=c->r[10]|c->r[10]; // 801FFE8C
  c->lr=c->r[0]; // 801FFE90
  return; // 801FFE94
}

// dtor_801FFE98
void f_801FFE98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFE98
  c->r[0]=c->lr; // 801FFE9C
  cmps(c,0,(int32_t)c->r[3],0); // 801FFEA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FFEA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FFEA8
  c->r[31]=c->r[4]|c->r[4]; // 801FFEAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FFEB0
  c->r[30]=c->r[3]|c->r[3]; // 801FFEB4
  if (crb(c,2)) { goto L_801FFED8; } // 801FFEB8
  c->r[4]=0u+0xFFFFFFFFu; // 801FFEBC
  c->r[3]=c->r[3]+0x00000008u; // 801FFEC0
  c->lr=0x801FFEC8u; f_801FD984(c); // 801FFEC4
  cmps(c,0,(int32_t)c->r[31],0); // 801FFEC8
  if (!crb(c,1)) { goto L_801FFED8; } // 801FFECC
  c->r[3]=c->r[30]|c->r[30]; // 801FFED0
  c->lr=0x801FFED8u; f_800D6AD0(c); // 801FFED4
L_801FFED8:;
  c->r[3]=c->r[30]|c->r[30]; // 801FFED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FFEDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FFEE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FFEE4
  c->lr=c->r[0]; // 801FFEE8
  c->r[1]=c->r[1]+0x00000010u; // 801FFEEC
  return; // 801FFEF0
}

// fn_801FFEF4
void f_801FFEF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFEF4
  c->r[0]=c->lr; // 801FFEF8
  cmps(c,0,(int32_t)c->r[3],0); // 801FFEFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FFF00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FFF04
  c->r[31]=c->r[4]|c->r[4]; // 801FFF08
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FFF0C
  c->r[30]=c->r[3]|c->r[3]; // 801FFF10
  if (crb(c,2)) { goto L_801FFF48; } // 801FFF14
  c->r[4]=0u+0xFFFFFFFFu; // 801FFF18
  c->r[3]=c->r[3]+0x000000D0u; // 801FFF1C
  c->lr=0x801FFF24u; f_801FD984(c); // 801FFF20
  cmps(c,0,(int32_t)c->r[30],0); // 801FFF24
  if (crb(c,2)) { goto L_801FFF38; } // 801FFF28
  c->r[3]=c->r[30]+0x00000008u; // 801FFF2C
  c->r[4]=0u+0xFFFFFFFFu; // 801FFF30
  c->lr=0x801FFF38u; f_801FD984(c); // 801FFF34
L_801FFF38:;
  cmps(c,0,(int32_t)c->r[31],0); // 801FFF38
  if (!crb(c,1)) { goto L_801FFF48; } // 801FFF3C
  c->r[3]=c->r[30]|c->r[30]; // 801FFF40
  c->lr=0x801FFF48u; f_8020224C(c); // 801FFF44
L_801FFF48:;
  c->r[3]=c->r[30]|c->r[30]; // 801FFF48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FFF4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FFF50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FFF54
  c->lr=c->r[0]; // 801FFF58
  c->r[1]=c->r[1]+0x00000010u; // 801FFF5C
  return; // 801FFF60
}

// fn_801FFF64
void f_801FFF64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFF64
  c->r[0]=c->lr; // 801FFF68
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FFF6C
  c->r[11]=c->r[1]+0x00000030u; // 801FFF70
  c->lr=0x801FFF78u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FFF74
  c->r[31]=c->r[1]|c->r[1]; // 801FFF78
  c->r[28]=c->r[3]|c->r[3]; // 801FFF7C
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801FFF80
  c->r[4]=R32(c->r[28]+0x000000CCu); // 801FFF84
  c->r[29]=0u+0x00000000u; // 801FFF88
  c->lr=0x801FFF90u; f_80213F98(c); // 801FFF8C
  cmps(c,0,(int32_t)c->r[3],0); // 801FFF90
  if (!crb(c,2)) { goto L_801FFFA0; } // 801FFF94
  c->r[3]=0u+0xFFFFF05Cu; // 801FFF98
  goto L_80200208; // 801FFF9C
L_801FFFA0:;
  c->r[12]=R32(c->r[28]+0x000000C0u); // 801FFFA0
  c->r[3]=c->r[28]|c->r[28]; // 801FFFA4
  c->r[12]=R32(c->r[12]+0x00000018u); // 801FFFA8
  c->ctr=c->r[12]; // 801FFFAC
  if (true) { c->lr=0x801FFFB4u; dispatch(c,c->ctr); } // 801FFFB0
  cmps(c,0,(int32_t)c->r[3],0); // 801FFFB4
  if (crb(c,2)) { goto L_801FFFC0; } // 801FFFB8
  goto L_80200208; // 801FFFBC
L_801FFFC0:;
  c->r[3]=0u+0x00000002u; // 801FFFC0
  c->r[4]=0u+0x00000001u; // 801FFFC4
  c->lr=0x801FFFCCu; f_802132CC(c); // 801FFFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801FFFCC
  if (crb(c,2)) { goto L_801FFFD8; } // 801FFFD0
  goto L_80200208; // 801FFFD4
L_801FFFD8:;
  c->r[3]=c->r[28]+0x000000F0u; // 801FFFD8
  c->lr=0x801FFFE0u; f_801FBDD8(c); // 801FFFDC
  c->r[3]=c->r[28]+0x000000FCu; // 801FFFE0
  c->lr=0x801FFFE8u; f_801FBDD8(c); // 801FFFE4
  c->r[3]=R32(c->r[28]+0x00000000u); // 801FFFE8
  c->r[0]=R8(c->r[3]+0x00000170u); // 801FFFEC
  W8(c->r[28]+0x000000ECu,c->r[0]); // 801FFFF0
  c->r[0]=R8(c->r[3]+0x00000170u); // 801FFFF4
  cmps(c,0,(int32_t)c->r[0],0); // 801FFFF8
  if (!crb(c,2)) { goto L_80200010; } // 801FFFFC
  c->r[0]=0u+0x00000001u; // 80200000
  W8(c->r[3]+0x00000170u,c->r[0]); // 80200004
  c->r[3]=R32(c->r[28]+0x00000000u); // 80200008
  c->lr=0x80200010u; f_801FC14C(c); // 8020000C
L_80200010:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 80200010
  c->r[0]=R8(c->r[4]+0x00000242u); // 80200014
  cmps(c,0,(int32_t)c->r[0],0); // 80200018
  if (crb(c,2)) { goto L_80200048; } // 8020001C
  c->r[3]=R32(c->r[4]+0x00000190u); // 80200020
  c->r[4]=R32(c->r[4]+0x00000194u); // 80200024
  c->lr=0x8020002Cu; f_80213A3C(c); // 80200028
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8020002C
  W8(c->r[28]+0x000000EDu,c->r[3]); // 80200030
  if (!crb(c,2)) { goto L_80200048; } // 80200034
  c->r[4]=R32(c->r[28]+0x00000000u); // 80200038
  c->r[3]=R32(c->r[4]+0x00000190u); // 8020003C
  c->r[4]=R32(c->r[4]+0x00000194u); // 80200040
  c->lr=0x80200048u; f_802139EC(c); // 80200044
L_80200048:;
  c->r[12]=R32(c->r[28]+0x000000C0u); // 80200048
  c->r[3]=c->r[28]|c->r[28]; // 8020004C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80200050
  c->ctr=c->r[12]; // 80200054
  if (true) { c->lr=0x8020005Cu; dispatch(c,c->ctr); } // 80200058
  cmps(c,0,(int32_t)c->r[3],0); // 8020005C
  c->r[30]=c->r[3]|c->r[3]; // 80200060
  if (!crb(c,2)) { goto L_802001A4; } // 80200064
  c->r[3]=R32(c->r[28]+0x00000000u); // 80200068
  c->lr=0x80200070u; f_801FB604(c); // 8020006C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80200070
  c->r[4]=0u+0x00000000u; // 80200074
  c->r[3]=R32(c->r[28]+0x00000000u); // 80200078
  c->lr=0x80200080u; f_801FC70C(c); // 8020007C
  c->r[3]=R32(c->r[28]+0x00000000u); // 80200080
  c->r[4]=c->r[28]+0x0000010Cu; // 80200084
  c->r[5]=c->r[28]+0x00000118u; // 80200088
  c->r[6]=R32(c->r[3]+0x00000238u); // 8020008C
  c->r[7]=R32(c->r[3]+0x0000023Cu); // 80200090
  c->lr=0x80200098u; f_8020B440(c); // 80200094
  c->r[30]=c->r[3]|c->r[3]; // 80200098
  goto L_802000F4; // 8020009C
  c->r[4]=0u+0x80340000u; // 802000A0
  c->r[3]=0u+0x00000001u; // 802000A4
  c->r[4]=c->r[4]+0xFFFFC46Du; // 802000A8
  c->r[5]=0u+0x0000007Au; // 802000AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802000B0
  c->lr=0x802000B8u; f_801FE6E4(c); // 802000B4
  c->r[30]=0u+0xFFFFF05Bu; // 802000B8
  goto L_802000DC; // 802000BC
  c->r[4]=0u+0x80340000u; // 802000C0
  c->r[3]=0u+0x00000001u; // 802000C4
  c->r[4]=c->r[4]+0xFFFFC4D4u; // 802000C8
  c->r[5]=0u+0x0000007Au; // 802000CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802000D0
  c->lr=0x802000D8u; f_801FE6E4(c); // 802000D4
  c->r[30]=0u+0xFFFFF05Fu; // 802000D8
L_802000DC:;
  c->r[3]=c->r[31]+0x00000008u; // 802000DC
  c->lr=0x802000E4u; f_80187EEC(c); // 802000E0
  c->r[0]=c->r[0]|0x00000000u; // 802000E4
  c->r[0]=R32(c->r[1]+0x00000000u); // 802000E8
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 802000EC
  W32(c->r[1]+0x00000000u,c->r[0]); // 802000F0
L_802000F4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802000F4
  c->lr=0x802000FCu; f_801FB5D8(c); // 802000F8
  cmps(c,0,(int32_t)c->r[30],0); // 802000FC
  if (crb(c,0)) { goto L_802001A4; } // 80200100
  c->r[4]=R32(c->r[28]+0x00000000u); // 80200104
  c->r[0]=R8(c->r[4]+0x00000242u); // 80200108
  cmps(c,0,(int32_t)c->r[0],0); // 8020010C
  if (crb(c,2)) { goto L_8020012C; } // 80200110
  c->r[0]=R8(c->r[28]+0x000000EDu); // 80200114
  cmps(c,0,(int32_t)c->r[0],0); // 80200118
  if (!crb(c,2)) { goto L_8020012C; } // 8020011C
  c->r[3]=R32(c->r[4]+0x00000190u); // 80200120
  c->r[4]=R32(c->r[4]+0x00000194u); // 80200124
  c->lr=0x8020012Cu; f_80213A30(c); // 80200128
L_8020012C:;
  c->r[0]=R8(c->r[28]+0x000000ECu); // 8020012C
  c->r[3]=R32(c->r[28]+0x00000000u); // 80200130
  W8(c->r[3]+0x00000170u,c->r[0]); // 80200134
  c->r[4]=R32(c->r[28]+0x00000000u); // 80200138
  c->r[0]=R8(c->r[4]+0x00000170u); // 8020013C
  cmps(c,0,(int32_t)c->r[0],0); // 80200140
  if (!crb(c,2)) { goto L_80200170; } // 80200144
  c->r[0]=R8(c->r[4]+0x00000173u); // 80200148
  cmps(c,0,(int32_t)c->r[0],0); // 8020014C
  if (crb(c,2)) { goto L_80200164; } // 80200150
  c->r[0]=R32(c->r[28]+0x00000128u); // 80200154
  c->r[3]=R32(c->r[28]+0x0000012Cu); // 80200158
  W32(c->r[4]+0x00000164u,c->r[3]); // 8020015C
  W32(c->r[4]+0x00000160u,c->r[0]); // 80200160
L_80200164:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80200164
  c->lr=0x8020016Cu; f_801FC14C(c); // 80200168
  c->r[29]=0u+0x00000001u; // 8020016C
L_80200170:;
  c->r[0]=R32(c->r[28]+0x000000E8u); // 80200170
  cmps(c,0,(int32_t)c->r[0],0); // 80200174
  if (crb(c,2)) { goto L_802001A4; } // 80200178
  c->r[3]=c->r[28]+0x000000F0u; // 8020017C
  c->lr=0x80200184u; f_801FBAA0(c); // 80200180
  c->r[0]=cntlz(c->r[3]); // 80200184
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80200188
  if (crb(c,2)) { goto L_802001A4; } // 8020018C
  c->r[3]=c->r[28]|c->r[28]; // 80200190
  c->r[4]=0u+0x00000000u; // 80200194
  c->r[5]=0u+0x00000000u; // 80200198
  c->lr=0x802001A0u; f_801FF020(c); // 8020019C
  c->r[30]=c->r[3]|c->r[3]; // 802001A0
L_802001A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802001A4
  if (!crb(c,2)) { goto L_802001C0; } // 802001A8
  c->r[3]=R32(c->r[28]+0x00000000u); // 802001AC
  c->r[0]=R8(c->r[3]+0x00000170u); // 802001B0
  cmps(c,0,(int32_t)c->r[0],0); // 802001B4
  if (!crb(c,2)) { goto L_802001C0; } // 802001B8
  c->lr=0x802001C0u; f_801FC14C(c); // 802001BC
L_802001C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 802001C0
  if (!crb(c,2)) { goto L_80200204; } // 802001C4
  c->r[3]=c->r[28]+0x000000F0u; // 802001C8
  c->lr=0x802001D0u; f_801FBAA0(c); // 802001CC
  cmps(c,0,(int32_t)c->r[3],0); // 802001D0
  if (crb(c,2)) { goto L_80200204; } // 802001D4
  c->r[3]=c->r[28]+0x000000FCu; // 802001D8
  c->r[30]=0u+0xFFFFF011u; // 802001DC
  c->lr=0x802001E4u; f_80200228(c); // 802001E0
  c->r[29]=c->r[3]|c->r[3]; // 802001E4
  c->r[3]=c->r[28]+0x000000F0u; // 802001E8
  c->lr=0x802001F0u; f_80200228(c); // 802001EC
  c->r[6]=R32(c->r[28]+0x00000000u); // 802001F0
  c->r[4]=c->r[3]|c->r[3]; // 802001F4
  c->r[5]=c->r[29]|c->r[29]; // 802001F8
  c->r[3]=R32(c->r[6]+0x00000004u); // 802001FC
  c->lr=0x80200204u; f_801FD3F8(c); // 80200200
L_80200204:;
  c->r[3]=c->r[30]|c->r[30]; // 80200204
L_80200208:;
  c->r[10]=c->r[31]|c->r[31]; // 80200208
  c->r[11]=c->r[10]+0x00000030u; // 8020020C
  c->lr=0x80200214u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200210
  c->r[10]=R32(c->r[1]+0x00000000u); // 80200214
  c->r[0]=R32(c->r[10]+0x00000004u); // 80200218
  c->r[1]=c->r[10]|c->r[10]; // 8020021C
  c->lr=c->r[0]; // 80200220
  return; // 80200224
}

// fn_80200228
void f_80200228(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80200228
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020022C
  if (!crb(c,2)) { goto L_8020023C; } // 80200230
  c->r[3]=c->r[3]+0x00000001u; // 80200234
  return; // 80200238
L_8020023C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8020023C
  return; // 80200240
}

// fn_80200244
void f_80200244(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200244
  c->r[0]=c->lr; // 80200248
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020024C
  c->r[11]=c->r[1]+0x00000060u; // 80200250
  c->lr=0x80200258u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200254
  W32(c->r[3]+0x00000004u,c->r[6]); // 80200258
  c->r[23]=c->r[7]|c->r[7]; // 8020025C
  c->r[27]=R32(c->r[1]+0x00000068u); // 80200260
  c->r[22]=c->r[3]|c->r[3]; // 80200264
  W32(c->r[3]+0x00000000u,c->r[5]); // 80200268
  c->r[24]=c->r[8]|c->r[8]; // 8020026C
  c->r[28]=R32(c->r[1]+0x0000006Cu); // 80200270
  c->r[25]=c->r[9]|c->r[9]; // 80200274
  c->r[29]=R32(c->r[1]+0x00000070u); // 80200278
  c->r[26]=c->r[10]|c->r[10]; // 8020027C
  c->r[30]=R32(c->r[1]+0x00000074u); // 80200280
  c->r[3]=c->r[1]+0x0000000Cu; // 80200284
  c->r[31]=R32(c->r[1]+0x00000078u); // 80200288
  c->r[7]=0u+0x00000010u; // 8020028C
  c->lr=0x80200294u; f_80208EFC(c); // 80200290
  c->r[21]=c->r[22]+0x00000008u; // 80200294
  c->r[4]=c->r[1]+0x0000000Cu; // 80200298
  c->r[3]=c->r[21]|c->r[21]; // 8020029C
  c->lr=0x802002A4u; f_801FE0C4(c); // 802002A0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 802002A4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 802002A8
  if (!crb(c,2)) { goto L_802002C8; } // 802002AC
  c->r[0]=R32(c->r[1]+0x00000010u); // 802002B0
  W32(c->r[21]+0x00000000u,c->r[3]); // 802002B4
  W32(c->r[21]+0x00000004u,c->r[0]); // 802002B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802002BC
  W32(c->r[21]+0x00000008u,c->r[0]); // 802002C0
  goto L_80200304; // 802002C4
L_802002C8:;
  c->r[3]=c->r[21]|c->r[21]; // 802002C8
  c->lr=0x802002D0u; f_801FAFA4(c); // 802002CC
  c->r[4]=R32(c->r[1]+0x00000010u); // 802002D0
  c->r[3]=c->r[21]|c->r[21]; // 802002D4
  c->lr=0x802002DCu; f_801FDA1C(c); // 802002D8
  c->r[5]=R8(c->r[1]+0x00000009u); // 802002DC
  c->r[3]=c->r[21]|c->r[21]; // 802002E0
  c->r[6]=R32(c->r[1]+0x00000014u); // 802002E4
  c->r[8]=c->r[1]+0x00000008u; // 802002E8
  c->r[0]=R32(c->r[1]+0x00000010u); // 802002EC
  c->r[4]=0u+0x00000000u; // 802002F0
  W8(c->r[1]+0x00000008u,c->r[5]); // 802002F4
  c->r[5]=0u+0x00000000u; // 802002F8
  c->r[7]=c->r[6]+c->r[0]; // 802002FC
  c->lr=0x80200304u; f_801FDDF4(c); // 80200300
L_80200304:;
  c->r[3]=c->r[1]+0x0000000Cu; // 80200304
  c->r[4]=0u+0xFFFFFFFFu; // 80200308
  c->lr=0x80200310u; f_801FD984(c); // 8020030C
  c->r[3]=0u+0x00000000u; // 80200310
  c->r[0]=0u+0x00000020u; // 80200314
  W32(c->r[22]+0x00000014u,c->r[3]); // 80200318
  c->r[5]=c->r[22]+0x0000001Fu; // 8020031C
  c->r[4]=c->r[24]+0xFFFFFFFFu; // 80200320
  W32(c->r[22]+0x00000018u,c->r[28]); // 80200324
  W32(c->r[22]+0x0000001Cu,c->r[23]); // 80200328
  c->ctr=c->r[0]; // 8020032C
L_80200330:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 80200330
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 80200334
  W8(c->r[5]+0x00000001u,c->r[3]); // 80200338
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 8020033C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80200330; } // 80200340
  W32(c->r[22]+0x000000A4u,c->r[27]); // 80200344
  c->r[3]=c->r[22]+0x000000F4u; // 80200348
  W32(c->r[22]+0x000000E8u,c->r[29]); // 8020034C
  W32(c->r[22]+0x000000ECu,c->r[30]); // 80200350
  W32(c->r[22]+0x000000F0u,c->r[31]); // 80200354
  c->lr=0x8020035Cu; f_801FAF28(c); // 80200358
  c->r[3]=c->r[22]+0x00000100u; // 8020035C
  c->lr=0x80200364u; f_801FAF28(c); // 80200360
  c->r[3]=c->r[22]+0x0000010Cu; // 80200364
  c->lr=0x8020036Cu; f_801FAF28(c); // 80200368
  c->r[0]=0u+0x00000000u; // 8020036C
  c->r[3]=c->r[22]+0x000000A8u; // 80200370
  W32(c->r[22]+0x00000118u,c->r[0]); // 80200374
  c->r[4]=0u+0x00000000u; // 80200378
  c->r[5]=0u+0x00000040u; // 8020037C
  c->lr=0x80200384u; f_80004688(c); // 80200380
  c->r[3]=c->r[22]+0x00000060u; // 80200384
  c->r[4]=0u+0x00000000u; // 80200388
  c->r[5]=0u+0x00000044u; // 8020038C
  c->lr=0x80200394u; f_80004688(c); // 80200390
  cmps(c,0,(int32_t)c->r[27],0); // 80200394
  if (crb(c,2)) { goto L_802003A4; } // 80200398
  c->r[0]=addc(c,c->r[22],0x000000A8u,0); cr0(c,c->r[0]); // 8020039C
  if (crb(c,2)) { goto L_802003AC; } // 802003A0
L_802003A4:;
  cmpu(c,0,c->r[27],0x00000008u); // 802003A4
  if (!crb(c,1)) { goto L_802003B8; } // 802003A8
L_802003AC:;
  c->r[0]=0u+0xFFFFF05Cu; // 802003AC
  W32(c->r[22]+0x00000118u,c->r[0]); // 802003B0
  goto L_80200400; // 802003B4
L_802003B8:;
  c->r[21]=0u+0x00000000u; // 802003B8
  c->r[23]=0u+0x00000000u; // 802003BC
  goto L_802003F8; // 802003C0
L_802003C4:;
  c->r[3]=R32(c->r[26]+c->r[23]); // 802003C4
  c->lr=0x802003CCu; f_801FEFD8(c); // 802003C8
  cmps(c,0,(int32_t)c->r[3],0); // 802003CC
  if (!crb(c,2)) { goto L_802003E0; } // 802003D0
  c->r[0]=0u+0xFFFFF05Cu; // 802003D4
  W32(c->r[22]+0x00000118u,c->r[0]); // 802003D8
  goto L_80200400; // 802003DC
L_802003E0:;
  c->r[3]=c->r[22]+c->r[23]; // 802003E0
  c->r[4]=c->r[26]+c->r[23]; // 802003E4
  c->r[3]=c->r[3]+0x000000A8u; // 802003E8
  c->lr=0x802003F0u; f_8020050C(c); // 802003EC
  c->r[21]=c->r[21]+0x00000001u; // 802003F0
  c->r[23]=c->r[23]+0x00000008u; // 802003F4
L_802003F8:;
  cmpu(c,0,c->r[21],c->r[27]); // 802003F8
  if (crb(c,0)) { IRQCHK(c); goto L_802003C4; } // 802003FC
L_80200400:;
  c->r[0]=R32(c->r[22]+0x00000118u); // 80200400
  cmps(c,0,(int32_t)c->r[0],0); // 80200404
  if (crb(c,2)) { goto L_80200414; } // 80200408
  c->r[3]=c->r[22]|c->r[22]; // 8020040C
  goto L_80200494; // 80200410
L_80200414:;
  cmps(c,0,(int32_t)c->r[25],0); // 80200414
  if (crb(c,2)) { goto L_80200488; } // 80200418
  c->r[3]=0u+0x80340000u; // 8020041C
  c->r[4]=R32(c->r[25]+0x00000000u); // 80200420
  c->r[0]=R32(c->r[3]+0xFFFFC458u); // 80200424
  cmpu(c,0,c->r[4],c->r[0]); // 80200428
  if (crb(c,0)) { goto L_8020043C; } // 8020042C
  c->r[0]=0u+0xFFFFF05Cu; // 80200430
  W32(c->r[22]+0x00000118u,c->r[0]); // 80200434
  goto L_80200490; // 80200438
L_8020043C:;
  c->r[4]=c->r[25]|c->r[25]; // 8020043C
  c->r[3]=c->r[22]+0x00000060u; // 80200440
  c->lr=0x80200448u; f_80200520(c); // 80200444
  c->r[0]=R32(c->r[22]+0x00000060u); // 80200448
  cmps(c,0,(int32_t)c->r[0],0); // 8020044C
  if (!crb(c,2)) { goto L_80200490; } // 80200450
  c->r[3]=c->r[1]+0x00000018u; // 80200454
  c->r[4]=c->r[22]+0x00000064u; // 80200458
  c->lr=0x80200460u; f_80201AF4(c); // 8020045C
  c->r[3]=c->r[1]+0x00000018u; // 80200460
  c->r[4]=c->r[22]+0x000000F4u; // 80200464
  c->r[5]=c->r[22]+0x00000100u; // 80200468
  c->r[6]=c->r[22]+0x0000010Cu; // 8020046C
  c->lr=0x80200474u; f_801FE184(c); // 80200470
  W32(c->r[22]+0x00000118u,c->r[3]); // 80200474
  c->r[3]=c->r[1]+0x00000018u; // 80200478
  c->r[4]=0u+0xFFFFFFFFu; // 8020047C
  c->lr=0x80200484u; f_801FD984(c); // 80200480
  goto L_80200490; // 80200484
L_80200488:;
  c->r[0]=0u+0x00000001u; // 80200488
  W32(c->r[22]+0x00000060u,c->r[0]); // 8020048C
L_80200490:;
  c->r[3]=c->r[22]|c->r[22]; // 80200490
L_80200494:;
  c->r[11]=c->r[1]+0x00000060u; // 80200494
  c->lr=0x8020049Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200498
  c->r[0]=R32(c->r[1]+0x00000064u); // 8020049C
  c->lr=c->r[0]; // 802004A0
  c->r[1]=c->r[1]+0x00000060u; // 802004A4
  return; // 802004A8
}

// dtor_802004AC
void f_802004AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802004AC
  c->r[0]=c->lr; // 802004B0
  cmps(c,0,(int32_t)c->r[3],0); // 802004B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802004B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802004BC
  c->r[31]=c->r[4]|c->r[4]; // 802004C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802004C4
  c->r[30]=c->r[3]|c->r[3]; // 802004C8
  if (crb(c,2)) { goto L_802004F0; } // 802004CC
  if (crb(c,2)) { goto L_802004E0; } // 802004D0
  c->r[4]=0u+0xFFFFFFFFu; // 802004D4
  c->r[3]=c->r[3]+0x00000008u; // 802004D8
  c->lr=0x802004E0u; f_801FD984(c); // 802004DC
L_802004E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802004E0
  if (!crb(c,1)) { goto L_802004F0; } // 802004E4
  c->r[3]=c->r[30]|c->r[30]; // 802004E8
  c->lr=0x802004F0u; f_800D6AD0(c); // 802004EC
L_802004F0:;
  c->r[3]=c->r[30]|c->r[30]; // 802004F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802004F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802004F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802004FC
  c->lr=c->r[0]; // 80200500
  c->r[1]=c->r[1]+0x00000010u; // 80200504
  return; // 80200508
}

// fn_8020050C
void f_8020050C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000000u); // 8020050C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80200510
  W32(c->r[3]+0x00000000u,c->r[5]); // 80200514
  W32(c->r[3]+0x00000004u,c->r[0]); // 80200518
  return; // 8020051C
}

// fn_80200520
void f_80200520(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000000u); // 80200520
  c->r[0]=0u+0x00000020u; // 80200524
  c->r[6]=c->r[3]+0x00000003u; // 80200528
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020052C
  c->r[5]=c->r[4]+0x00000003u; // 80200530
  c->ctr=c->r[0]; // 80200534
L_80200538:;
  c->r[4]=R8(c->r[5]+0x00000001u); // 80200538
  {uint32_t ea=c->r[5]+0x00000002u; c->r[0]=R8(ea); c->r[5]=ea;} // 8020053C
  W8(c->r[6]+0x00000001u,c->r[4]); // 80200540
  {uint32_t ea=c->r[6]+0x00000002u; W8(ea,c->r[0]); c->r[6]=ea;} // 80200544
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80200538; } // 80200548
  return; // 8020054C
}

// fn_80200550
void f_80200550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200550
  c->r[0]=c->lr; // 80200554
  W32(c->r[1]+0x00000024u,c->r[0]); // 80200558
  c->r[11]=c->r[1]+0x00000020u; // 8020055C
  c->lr=0x80200564u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200560
  c->r[29]=c->r[3]|c->r[3]; // 80200564
  c->r[30]=c->r[5]|c->r[5]; // 80200568
  c->lr=0x80200570u; f_801FFC08(c); // 8020056C
  c->r[4]=R32(c->r[30]+0x00000018u); // 80200570
  c->r[31]=c->r[3]|c->r[3]; // 80200574
  c->r[0]=0u+0x00000010u; // 80200578
  c->r[5]=c->r[29]+0x00000133u; // 8020057C
  W32(c->r[29]+0x000000E8u,c->r[4]); // 80200580
  c->r[4]=c->r[30]+0x0000001Fu; // 80200584
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80200588
  W32(c->r[29]+0x00000130u,c->r[3]); // 8020058C
  c->ctr=c->r[0]; // 80200590
L_80200594:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 80200594
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 80200598
  W8(c->r[5]+0x00000001u,c->r[3]); // 8020059C
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 802005A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80200594; } // 802005A4
  c->r[0]=0u+0x00000010u; // 802005A8
  c->r[5]=c->r[29]+0x00000153u; // 802005AC
  c->r[4]=c->r[30]+0x0000003Fu; // 802005B0
  c->ctr=c->r[0]; // 802005B4
L_802005B8:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 802005B8
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 802005BC
  W8(c->r[5]+0x00000001u,c->r[3]); // 802005C0
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 802005C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802005B8; } // 802005C8
  c->r[3]=c->r[29]+0x00000174u; // 802005CC
  c->r[4]=c->r[30]+0x00000060u; // 802005D0
  c->lr=0x802005D8u; f_80200520(c); // 802005D4
  c->r[0]=R32(c->r[30]+0x000000A4u); // 802005D8
  c->r[27]=0u+0x00000000u; // 802005DC
  c->r[28]=0u+0x00000000u; // 802005E0
  W32(c->r[29]+0x00000200u,c->r[0]); // 802005E4
  goto L_80200608; // 802005E8
L_802005EC:;
  c->r[3]=c->r[29]+c->r[28]; // 802005EC
  c->r[4]=c->r[30]+c->r[28]; // 802005F0
  c->r[3]=c->r[3]+0x00000210u; // 802005F4
  c->r[4]=c->r[4]+0x000000A8u; // 802005F8
  c->lr=0x80200600u; f_8020050C(c); // 802005FC
  c->r[27]=c->r[27]+0x00000001u; // 80200600
  c->r[28]=c->r[28]+0x00000008u; // 80200604
L_80200608:;
  c->r[0]=R32(c->r[29]+0x00000200u); // 80200608
  cmpu(c,0,c->r[27],c->r[0]); // 8020060C
  if (crb(c,0)) { IRQCHK(c); goto L_802005EC; } // 80200610
  c->r[3]=c->r[29]+0x0000010Cu; // 80200614
  c->lr=0x8020061Cu; f_8020071C(c); // 80200618
  c->r[3]=c->r[29]+0x00000118u; // 8020061C
  c->lr=0x80200624u; f_801FBDD8(c); // 80200620
  c->r[0]=0u+0x00000000u; // 80200624
  c->r[3]=c->r[29]+0x000001DCu; // 80200628
  W32(c->r[29]+0x00000124u,c->r[0]); // 8020062C
  c->r[4]=c->r[30]+0x000000F4u; // 80200630
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 80200634
  W32(c->r[29]+0x00000128u,c->r[0]); // 80200638
  c->lr=0x80200640u; f_801FBE10(c); // 8020063C
  c->r[3]=c->r[29]+0x000001E8u; // 80200640
  c->r[4]=c->r[30]+0x00000100u; // 80200644
  c->lr=0x8020064Cu; f_801FBE10(c); // 80200648
  c->r[3]=c->r[29]+0x000001F4u; // 8020064C
  c->r[4]=c->r[30]+0x0000010Cu; // 80200650
  c->lr=0x80200658u; f_801FBE10(c); // 80200654
  c->r[3]=c->r[29]+0x000001B8u; // 80200658
  c->lr=0x80200660u; f_801FBDD8(c); // 8020065C
  c->r[3]=c->r[29]+0x000001C4u; // 80200660
  c->lr=0x80200668u; f_801FBDD8(c); // 80200664
  c->r[3]=c->r[29]+0x000001D0u; // 80200668
  c->lr=0x80200670u; f_801FBDD8(c); // 8020066C
  c->r[4]=R32(c->r[30]+0x000000E8u); // 80200670
  cmps(c,0,(int32_t)c->r[4],0); // 80200674
  if (crb(c,2)) { goto L_80200684; } // 80200678
  c->r[3]=c->r[29]+0x000001B8u; // 8020067C
  c->lr=0x80200684u; f_801FB0B8(c); // 80200680
L_80200684:;
  c->r[4]=R32(c->r[30]+0x000000ECu); // 80200684
  cmps(c,0,(int32_t)c->r[4],0); // 80200688
  if (crb(c,2)) { goto L_80200698; } // 8020068C
  c->r[3]=c->r[29]+0x000001C4u; // 80200690
  c->lr=0x80200698u; f_801FB0B8(c); // 80200694
L_80200698:;
  c->r[4]=R32(c->r[30]+0x000000F0u); // 80200698
  cmps(c,0,(int32_t)c->r[4],0); // 8020069C
  if (crb(c,2)) { goto L_802006AC; } // 802006A0
  c->r[3]=c->r[29]+0x000001D0u; // 802006A4
  c->lr=0x802006ACu; f_801FB0B8(c); // 802006A8
L_802006AC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 802006AC
  c->r[3]=c->r[3]+0x00000074u; // 802006B0
  c->lr=0x802006B8u; f_801FBDD8(c); // 802006B4
  c->r[5]=R32(c->r[29]+0x00000000u); // 802006B8
  c->r[30]=R32(c->r[5]+0x00000084u); // 802006BC
  c->r[4]=R32(c->r[5]+0x00000080u); // 802006C0
  c->r[0]=c->r[30]-c->r[30]; // 802006C4
  c->r[3]=rotl(c->r[30],5)&0xFFFFFFE0u; // 802006C8
  W32(c->r[5]+0x00000084u,c->r[0]); // 802006CC
  c->r[28]=c->r[4]+c->r[3]; // 802006D0
  goto L_802006F0; // 802006D4
L_802006D8:;
  c->r[28]=addc(c,c->r[28],0xFFFFFFE0u,0); cr0(c,c->r[28]); // 802006D8
  if (crb(c,2)) { goto L_802006EC; } // 802006DC
  c->r[3]=c->r[28]+0x00000010u; // 802006E0
  c->r[4]=0u+0xFFFFFFFFu; // 802006E4
  c->lr=0x802006ECu; f_801FD984(c); // 802006E8
L_802006EC:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 802006EC
L_802006F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 802006F0
  if (!crb(c,2)) { IRQCHK(c); goto L_802006D8; } // 802006F4
  c->r[0]=0u+0x00000000u; // 802006F8
  c->r[11]=c->r[1]+0x00000020u; // 802006FC
  W8(c->r[29]+0x000000EEu,c->r[0]); // 80200700
  c->r[3]=c->r[31]|c->r[31]; // 80200704
  c->lr=0x8020070Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200708
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020070C
  c->lr=c->r[0]; // 80200710
  c->r[1]=c->r[1]+0x00000020u; // 80200714
  return; // 80200718
}

// fn_8020071C
void f_8020071C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020071C
  c->r[0]=c->lr; // 80200720
  W32(c->r[1]+0x00000014u,c->r[0]); // 80200724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80200728
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020072C
  c->r[30]=R32(c->r[3]+0x00000004u); // 80200730
  c->r[5]=R32(c->r[3]+0x00000000u); // 80200734
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 80200738
  c->r[0]=c->r[30]-c->r[30]; // 8020073C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80200740
  c->r[31]=c->r[5]+c->r[4]; // 80200744
  goto L_80200760; // 80200748
L_8020074C:;
  c->r[31]=c->r[31]+0xFFFFFFF4u; // 8020074C
  c->r[4]=0u+0xFFFFFFFFu; // 80200750
  c->r[3]=c->r[31]|c->r[31]; // 80200754
  c->lr=0x8020075Cu; f_801FD984(c); // 80200758
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8020075C
L_80200760:;
  cmps(c,0,(int32_t)c->r[30],0); // 80200760
  if (!crb(c,2)) { IRQCHK(c); goto L_8020074C; } // 80200764
  c->r[0]=R32(c->r[1]+0x00000014u); // 80200768
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020076C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80200770
  c->lr=c->r[0]; // 80200774
  c->r[1]=c->r[1]+0x00000010u; // 80200778
  return; // 8020077C
}

// fn_80200780
void f_80200780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200780
  c->r[0]=c->lr; // 80200784
  W32(c->r[1]+0x00000064u,c->r[0]); // 80200788
  c->r[11]=c->r[1]+0x00000060u; // 8020078C
  c->lr=0x80200794u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200790
  c->r[31]=0u+0x80340000u; // 80200794
  c->r[30]=c->r[4]|c->r[4]; // 80200798
  c->r[29]=c->r[3]|c->r[3]; // 8020079C
  c->r[3]=c->r[30]|c->r[30]; // 802007A0
  c->r[31]=c->r[31]+0xFFFFC438u; // 802007A4
  c->lr=0x802007ACu; f_8020235C(c); // 802007A8
  c->r[6]=R32(c->r[29]+0x00000130u); // 802007AC
  c->r[28]=c->r[31]+0x000000F9u; // 802007B0
  c->r[3]=c->r[1]+0x0000002Cu; // 802007B4
  c->r[5]=sraw(c,c->r[6],31); // 802007B8
  c->lr=0x802007C0u; f_80208E2C(c); // 802007BC
  c->r[3]=c->r[1]+0x0000002Cu; // 802007C0
  c->lr=0x802007C8u; f_80200228(c); // 802007C4
  c->r[5]=c->r[3]|c->r[3]; // 802007C8
  c->r[3]=c->r[30]|c->r[30]; // 802007CC
  c->r[4]=c->r[28]|c->r[28]; // 802007D0
  c->lr=0x802007D8u; f_80203128(c); // 802007D4
  c->r[3]=c->r[1]+0x0000002Cu; // 802007D8
  c->r[4]=0u+0xFFFFFFFFu; // 802007DC
  c->lr=0x802007E4u; f_801FD984(c); // 802007E0
  c->r[3]=c->r[30]|c->r[30]; // 802007E4
  c->r[4]=c->r[31]+0x00000100u; // 802007E8
  c->lr=0x802007F0u; f_80203208(c); // 802007EC
  c->r[3]=c->r[30]|c->r[30]; // 802007F0
  c->r[4]=c->r[31]+0x00000106u; // 802007F4
  c->r[5]=c->r[29]+0x00000134u; // 802007F8
  c->lr=0x80200800u; f_80203128(c); // 802007FC
  c->r[3]=c->r[30]|c->r[30]; // 80200800
  c->r[4]=c->r[31]+0x0000010Du; // 80200804
  c->r[5]=c->r[29]+0x00000154u; // 80200808
  c->lr=0x80200810u; f_80203128(c); // 8020080C
  c->r[3]=c->r[30]|c->r[30]; // 80200810
  c->lr=0x80200818u; f_802032D8(c); // 80200814
  c->r[3]=c->r[29]+0x000001D0u; // 80200818
  c->lr=0x80200820u; f_801FBAA0(c); // 8020081C
  c->r[0]=cntlz(c->r[3]); // 80200820
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80200824
  if (!crb(c,2)) { goto L_80200848; } // 80200828
  c->r[28]=c->r[31]+0x00000116u; // 8020082C
  c->r[3]=c->r[29]+0x000001D0u; // 80200830
  c->lr=0x80200838u; f_80200228(c); // 80200834
  c->r[5]=c->r[3]|c->r[3]; // 80200838
  c->r[3]=c->r[30]|c->r[30]; // 8020083C
  c->r[4]=c->r[28]|c->r[28]; // 80200840
  c->lr=0x80200848u; f_80203128(c); // 80200844
L_80200848:;
  c->r[3]=c->r[29]+0x000001B8u; // 80200848
  c->lr=0x80200850u; f_801FBAA0(c); // 8020084C
  c->r[0]=cntlz(c->r[3]); // 80200850
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80200854
  if (!crb(c,2)) { goto L_80200878; } // 80200858
  c->r[28]=c->r[31]+0x0000011Fu; // 8020085C
  c->r[3]=c->r[29]+0x000001B8u; // 80200860
  c->lr=0x80200868u; f_80200228(c); // 80200864
  c->r[5]=c->r[3]|c->r[3]; // 80200868
  c->r[3]=c->r[30]|c->r[30]; // 8020086C
  c->r[4]=c->r[28]|c->r[28]; // 80200870
  c->lr=0x80200878u; f_80203128(c); // 80200874
L_80200878:;
  c->r[3]=c->r[30]|c->r[30]; // 80200878
  c->r[4]=c->r[31]+0x00000125u; // 8020087C
  c->lr=0x80200884u; f_80203208(c); // 80200880
  c->r[0]=R32(c->r[29]+0x00000174u); // 80200884
  c->r[5]=c->r[31]+0x00000014u; // 80200888
  c->r[3]=c->r[30]|c->r[30]; // 8020088C
  c->r[4]=c->r[31]+0x0000012Du; // 80200890
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80200894
  c->r[5]=R32(c->r[5]+c->r[0]); // 80200898
  c->lr=0x802008A0u; f_80203128(c); // 8020089C
  c->r[0]=R32(c->r[29]+0x00000174u); // 802008A0
  cmps(c,0,(int32_t)c->r[0],1); // 802008A4
  if (!crb(c,2)) { goto L_80200968; } // 802008A8
  c->r[3]=c->r[30]|c->r[30]; // 802008AC
  c->r[4]=c->r[31]+0x0000013Bu; // 802008B0
  c->lr=0x802008B8u; f_80203208(c); // 802008B4
  c->r[0]=R8(c->r[29]+0x00000178u); // 802008B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802008BC
  if (!crb(c,2)) { goto L_80200910; } // 802008C0
  c->r[3]=R32(c->r[29]+0x00000000u); // 802008C4
  c->r[28]=c->r[31]+0x0000014Au; // 802008C8
  c->r[3]=c->r[3]+0x000000BCu; // 802008CC
  c->lr=0x802008D4u; f_80200228(c); // 802008D0
  c->r[5]=c->r[3]|c->r[3]; // 802008D4
  c->r[3]=c->r[30]|c->r[30]; // 802008D8
  c->r[4]=c->r[28]|c->r[28]; // 802008DC
  c->lr=0x802008E4u; f_80203128(c); // 802008E0
  c->r[3]=R32(c->r[29]+0x00000000u); // 802008E4
  c->r[28]=c->r[31]+0x00000158u; // 802008E8
  c->r[3]=c->r[3]+0x000000C8u; // 802008EC
  c->lr=0x802008F4u; f_80200228(c); // 802008F0
  c->r[5]=c->r[3]|c->r[3]; // 802008F4
  c->r[3]=c->r[30]|c->r[30]; // 802008F8
  c->r[4]=c->r[28]|c->r[28]; // 802008FC
  c->lr=0x80200904u; f_80203128(c); // 80200900
  c->r[0]=0u+0x00000001u; // 80200904
  W8(c->r[29]+0x000000EEu,c->r[0]); // 80200908
  goto L_8020095C; // 8020090C
L_80200910:;
  c->r[3]=c->r[30]|c->r[30]; // 80200910
  c->r[4]=c->r[31]+0x0000014Au; // 80200914
  c->r[5]=c->r[29]+0x00000178u; // 80200918
  c->lr=0x80200920u; f_80203128(c); // 8020091C
  c->r[3]=c->r[30]|c->r[30]; // 80200920
  c->r[4]=c->r[31]+0x00000158u; // 80200924
  c->r[5]=c->r[29]+0x00000198u; // 80200928
  c->lr=0x80200930u; f_80203128(c); // 8020092C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80200930
  c->r[4]=c->r[29]+0x00000178u; // 80200934
  c->r[3]=c->r[3]+0x000000BCu; // 80200938
  c->lr=0x80200940u; f_80200BF0(c); // 8020093C
  cmps(c,0,(int32_t)c->r[3],0); // 80200940
  if (crb(c,2)) { goto L_80200954; } // 80200944
  c->r[0]=0u+0x00000001u; // 80200948
  W8(c->r[29]+0x000000EEu,c->r[0]); // 8020094C
  goto L_8020095C; // 80200950
L_80200954:;
  c->r[0]=0u+0x00000000u; // 80200954
  W8(c->r[29]+0x000000EEu,c->r[0]); // 80200958
L_8020095C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020095C
  c->lr=0x80200964u; f_802032D8(c); // 80200960
  goto L_80200A08; // 80200964
L_80200968:;
  cmps(c,0,(int32_t)c->r[0],0); // 80200968
  if (!crb(c,2)) { goto L_802009DC; } // 8020096C
  c->r[3]=c->r[30]|c->r[30]; // 80200970
  c->r[4]=c->r[31]+0x00000164u; // 80200974
  c->lr=0x8020097Cu; f_80203208(c); // 80200978
  c->r[28]=c->r[31]+0x00000171u; // 8020097C
  c->r[3]=c->r[29]+0x000001E8u; // 80200980
  c->lr=0x80200988u; f_80200228(c); // 80200984
  c->r[5]=c->r[3]|c->r[3]; // 80200988
  c->r[3]=c->r[30]|c->r[30]; // 8020098C
  c->r[4]=c->r[28]|c->r[28]; // 80200990
  c->lr=0x80200998u; f_80203128(c); // 80200994
  c->r[28]=c->r[31]+0x0000017Du; // 80200998
  c->r[3]=c->r[29]+0x000001DCu; // 8020099C
  c->lr=0x802009A4u; f_80200228(c); // 802009A0
  c->r[5]=c->r[3]|c->r[3]; // 802009A4
  c->r[3]=c->r[30]|c->r[30]; // 802009A8
  c->r[4]=c->r[28]|c->r[28]; // 802009AC
  c->lr=0x802009B4u; f_80203128(c); // 802009B0
  c->r[28]=c->r[31]+0x00000187u; // 802009B4
  c->r[3]=c->r[29]+0x000001F4u; // 802009B8
  c->lr=0x802009C0u; f_80200228(c); // 802009BC
  c->r[5]=c->r[3]|c->r[3]; // 802009C0
  c->r[3]=c->r[30]|c->r[30]; // 802009C4
  c->r[4]=c->r[28]|c->r[28]; // 802009C8
  c->lr=0x802009D0u; f_80203128(c); // 802009CC
  c->r[3]=c->r[30]|c->r[30]; // 802009D0
  c->lr=0x802009D8u; f_802032D8(c); // 802009D4
  goto L_80200A08; // 802009D8
L_802009DC:;
  cmps(c,0,(int32_t)c->r[0],2); // 802009DC
  if (!crb(c,2)) { goto L_80200A08; } // 802009E0
  c->r[3]=c->r[30]|c->r[30]; // 802009E4
  c->r[4]=c->r[31]+0x00000191u; // 802009E8
  c->lr=0x802009F0u; f_80203208(c); // 802009EC
  c->r[3]=c->r[30]|c->r[30]; // 802009F0
  c->r[4]=c->r[31]+0x000001A3u; // 802009F4
  c->r[5]=c->r[29]+0x00000178u; // 802009F8
  c->lr=0x80200A00u; f_80203128(c); // 802009FC
  c->r[3]=c->r[30]|c->r[30]; // 80200A00
  c->lr=0x80200A08u; f_802032D8(c); // 80200A04
L_80200A08:;
  c->r[3]=c->r[30]|c->r[30]; // 80200A08
  c->lr=0x80200A10u; f_802032D8(c); // 80200A0C
  c->r[3]=c->r[29]+0x000001C4u; // 80200A10
  c->lr=0x80200A18u; f_801FBAA0(c); // 80200A14
  c->r[0]=cntlz(c->r[3]); // 80200A18
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80200A1C
  if (!crb(c,2)) { goto L_80200A40; } // 80200A20
  c->r[28]=c->r[31]+0x000001B4u; // 80200A24
  c->r[3]=c->r[29]+0x000001C4u; // 80200A28
  c->lr=0x80200A30u; f_80200228(c); // 80200A2C
  c->r[5]=c->r[3]|c->r[3]; // 80200A30
  c->r[3]=c->r[30]|c->r[30]; // 80200A34
  c->r[4]=c->r[28]|c->r[28]; // 80200A38
  c->lr=0x80200A40u; f_80203128(c); // 80200A3C
L_80200A40:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80200A40
  c->r[28]=c->r[31]+0x000001C1u; // 80200A44
  c->r[3]=c->r[3]+0x0000020Cu; // 80200A48
  c->lr=0x80200A50u; f_80200228(c); // 80200A4C
  c->r[5]=c->r[3]|c->r[3]; // 80200A50
  c->r[3]=c->r[30]|c->r[30]; // 80200A54
  c->r[4]=c->r[28]|c->r[28]; // 80200A58
  c->lr=0x80200A60u; f_80203128(c); // 80200A5C
  c->r[28]=c->r[31]+0x000001CCu; // 80200A60
  c->r[3]=c->r[29]+0x000000D0u; // 80200A64
  c->lr=0x80200A6Cu; f_80200228(c); // 80200A68
  c->r[5]=c->r[3]|c->r[3]; // 80200A6C
  c->r[3]=c->r[30]|c->r[30]; // 80200A70
  c->r[4]=c->r[28]|c->r[28]; // 80200A74
  c->lr=0x80200A7Cu; f_80203128(c); // 80200A78
  c->r[0]=R32(c->r[29]+0x00000200u); // 80200A7C
  cmps(c,0,(int32_t)c->r[0],0); // 80200A80
  if (!crb(c,2)) { goto L_80200AE8; } // 80200A84
  c->r[3]=c->r[30]|c->r[30]; // 80200A88
  c->r[4]=c->r[31]+0x000001D4u; // 80200A8C
  c->lr=0x80200A94u; f_80203208(c); // 80200A90
  c->r[28]=c->r[31]+0x000001D4u; // 80200A94
  c->r[3]=c->r[1]+0x00000020u; // 80200A98
  c->r[6]=0u+0x00000000u; // 80200A9C
  c->r[5]=0u+0x00000000u; // 80200AA0
  c->lr=0x80200AA8u; f_80208E2C(c); // 80200AA4
  c->r[3]=c->r[1]+0x00000020u; // 80200AA8
  c->lr=0x80200AB0u; f_80200228(c); // 80200AAC
  c->r[5]=c->r[3]|c->r[3]; // 80200AB0
  c->r[3]=c->r[30]|c->r[30]; // 80200AB4
  c->r[4]=c->r[28]|c->r[28]; // 80200AB8
  c->lr=0x80200AC0u; f_80203128(c); // 80200ABC
  c->r[3]=c->r[1]+0x00000020u; // 80200AC0
  c->r[4]=0u+0xFFFFFFFFu; // 80200AC4
  c->lr=0x80200ACCu; f_801FD984(c); // 80200AC8
  c->r[3]=c->r[30]|c->r[30]; // 80200ACC
  c->r[4]=c->r[31]+0x000001DBu; // 80200AD0
  c->r[5]=c->r[31]+0x000001E5u; // 80200AD4
  c->lr=0x80200ADCu; f_80203128(c); // 80200AD8
  c->r[3]=c->r[30]|c->r[30]; // 80200ADC
  c->lr=0x80200AE4u; f_802032D8(c); // 80200AE0
  goto L_80200B74; // 80200AE4
L_80200AE8:;
  c->r[25]=0u+0x00000000u; // 80200AE8
  c->r[28]=0u+0x00000000u; // 80200AEC
  if (crb(c,2)) { goto L_80200B74; } // 80200AF0
  c->r[27]=c->r[31]+0x000001D4u; // 80200AF4
  goto L_80200B68; // 80200AF8
L_80200AFC:;
  c->r[3]=c->r[30]|c->r[30]; // 80200AFC
  c->r[4]=c->r[31]+0x000001D4u; // 80200B00
  c->lr=0x80200B08u; f_80203208(c); // 80200B04
  c->r[26]=c->r[29]+c->r[28]; // 80200B08
  c->r[3]=c->r[1]+0x00000014u; // 80200B0C
  c->r[6]=R32(c->r[26]+0x00000214u); // 80200B10
  c->r[5]=0u+0x00000000u; // 80200B14
  c->lr=0x80200B1Cu; f_80208E2C(c); // 80200B18
  c->r[3]=c->r[1]+0x00000014u; // 80200B1C
  c->lr=0x80200B24u; f_80200228(c); // 80200B20
  c->r[5]=c->r[3]|c->r[3]; // 80200B24
  c->r[3]=c->r[30]|c->r[30]; // 80200B28
  c->r[4]=c->r[27]|c->r[27]; // 80200B2C
  c->lr=0x80200B34u; f_80203128(c); // 80200B30
  c->r[3]=c->r[1]+0x00000014u; // 80200B34
  c->r[4]=0u+0xFFFFFFFFu; // 80200B38
  c->lr=0x80200B40u; f_801FD984(c); // 80200B3C
  c->r[3]=R32(c->r[26]+0x00000210u); // 80200B40
  c->lr=0x80200B48u; f_801FEFD8(c); // 80200B44
  c->r[5]=c->r[3]|c->r[3]; // 80200B48
  c->r[3]=c->r[30]|c->r[30]; // 80200B4C
  c->r[4]=c->r[31]+0x000001DBu; // 80200B50
  c->lr=0x80200B58u; f_80203128(c); // 80200B54
  c->r[3]=c->r[30]|c->r[30]; // 80200B58
  c->lr=0x80200B60u; f_802032D8(c); // 80200B5C
  c->r[25]=c->r[25]+0x00000001u; // 80200B60
  c->r[28]=c->r[28]+0x00000008u; // 80200B64
L_80200B68:;
  c->r[0]=R32(c->r[29]+0x00000200u); // 80200B68
  cmpu(c,0,c->r[25],c->r[0]); // 80200B6C
  if (crb(c,0)) { IRQCHK(c); goto L_80200AFC; } // 80200B70
L_80200B74:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80200B74
  c->r[0]=R8(c->r[3]+0x00000242u); // 80200B78
  cmps(c,0,(int32_t)c->r[0],0); // 80200B7C
  if (crb(c,2)) { goto L_80200BD4; } // 80200B80
  c->r[0]=R8(c->r[3]+0x00000208u); // 80200B84
  cmps(c,0,(int32_t)c->r[0],0); // 80200B88
  if (crb(c,2)) { goto L_80200BD4; } // 80200B8C
  c->r[0]=R8(c->r[3]+0x00000209u); // 80200B90
  cmps(c,0,(int32_t)c->r[0],0); // 80200B94
  if (!crb(c,2)) { goto L_80200BD4; } // 80200B98
  c->r[6]=R8(c->r[3]+0x000001F1u); // 80200B9C
  c->r[27]=c->r[31]+0x000001E8u; // 80200BA0
  c->r[3]=c->r[1]+0x00000008u; // 80200BA4
  c->r[5]=0u+0x00000000u; // 80200BA8
  c->lr=0x80200BB0u; f_80208E2C(c); // 80200BAC
  c->r[3]=c->r[1]+0x00000008u; // 80200BB0
  c->lr=0x80200BB8u; f_80200228(c); // 80200BB4
  c->r[5]=c->r[3]|c->r[3]; // 80200BB8
  c->r[3]=c->r[30]|c->r[30]; // 80200BBC
  c->r[4]=c->r[27]|c->r[27]; // 80200BC0
  c->lr=0x80200BC8u; f_80203128(c); // 80200BC4
  c->r[3]=c->r[1]+0x00000008u; // 80200BC8
  c->r[4]=0u+0xFFFFFFFFu; // 80200BCC
  c->lr=0x80200BD4u; f_801FD984(c); // 80200BD0
L_80200BD4:;
  c->r[11]=c->r[1]+0x00000060u; // 80200BD4
  c->r[3]=0u+0x00000000u; // 80200BD8
  c->lr=0x80200BE0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200BDC
  c->r[0]=R32(c->r[1]+0x00000064u); // 80200BE0
  c->lr=c->r[0]; // 80200BE4
  c->r[1]=c->r[1]+0x00000060u; // 80200BE8
  return; // 80200BEC
}

// fn_80200BF0
void f_80200BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200BF0
  c->r[0]=c->lr; // 80200BF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80200BF8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80200BFC
  c->r[31]=c->r[4]|c->r[4]; // 80200C00
  W32(c->r[1]+0x00000028u,c->r[30]); // 80200C04
  c->r[30]=c->r[3]|c->r[3]; // 80200C08
  c->r[3]=c->r[31]|c->r[31]; // 80200C0C
  c->lr=0x80200C14u; f_80185588(c); // 80200C10
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80200C14
  c->r[3]=c->r[30]|c->r[30]; // 80200C18
  c->lr=0x80200C20u; f_801FBAA0(c); // 80200C1C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80200C20
  c->r[3]=c->r[30]|c->r[30]; // 80200C24
  c->r[4]=c->r[1]+0x0000001Cu; // 80200C28
  c->r[5]=c->r[1]+0x00000018u; // 80200C2C
  c->lr=0x80200C34u; f_801FBDA0(c); // 80200C30
  c->r[3]=R32(c->r[1]+0x00000008u); // 80200C34
  c->r[4]=c->r[1]+0x00000010u; // 80200C38
  c->r[0]=R32(c->r[1]+0x00000018u); // 80200C3C
  c->r[5]=R32(c->r[1]+0x00000018u); // 80200C40
  cmpu(c,0,c->r[3],c->r[0]); // 80200C44
  W32(c->r[1]+0x00000010u,c->r[5]); // 80200C48
  if (!crb(c,0)) { goto L_80200C54; } // 80200C4C
  c->r[4]=c->r[1]+0x00000008u; // 80200C50
L_80200C54:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80200C54
  c->r[4]=c->r[31]|c->r[31]; // 80200C58
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80200C5C
  c->r[5]=c->r[1]+0x00000014u; // 80200C60
  W32(c->r[1]+0x00000014u,c->r[3]); // 80200C64
  cmpu(c,0,c->r[0],c->r[3]); // 80200C68
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 80200C6C
  if (!crb(c,0)) { goto L_80200C78; } // 80200C70
  c->r[5]=c->r[1]+0x0000000Cu; // 80200C74
L_80200C78:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 80200C78
  c->lr=0x80200C80u; f_8018C170(c); // 80200C7C
  cmps(c,0,(int32_t)c->r[3],0); // 80200C80
  if (!crb(c,2)) { goto L_80200CB0; } // 80200C84
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80200C88
  c->r[3]=R32(c->r[1]+0x00000014u); // 80200C8C
  cmpu(c,0,c->r[3],c->r[0]); // 80200C90
  if (!crb(c,0)) { goto L_80200CA0; } // 80200C94
  c->r[3]=0u+0xFFFFFFFFu; // 80200C98
  goto L_80200CB0; // 80200C9C
L_80200CA0:;
  if (!crb(c,2)) { goto L_80200CAC; } // 80200CA0
  c->r[3]=0u+0x00000000u; // 80200CA4
  goto L_80200CB0; // 80200CA8
L_80200CAC:;
  c->r[3]=0u+0x00000001u; // 80200CAC
L_80200CB0:;
  c->r[0]=cntlz(c->r[3]); // 80200CB0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80200CB4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80200CB8
  c->r[30]=R32(c->r[1]+0x00000028u); // 80200CBC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80200CC0
  c->lr=c->r[0]; // 80200CC4
  c->r[1]=c->r[1]+0x00000030u; // 80200CC8
  return; // 80200CCC
}

// fn_80200CD0
void f_80200CD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200CD0
  c->r[0]=c->lr; // 80200CD4
  W32(c->r[1]+0x00000124u,c->r[0]); // 80200CD8
  c->r[11]=c->r[1]+0x00000120u; // 80200CDC
  c->lr=0x80200CE4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200CE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 80200CE4
  c->r[29]=0u+0x00000000u; // 80200CE8
  c->r[31]=0u+0x80340000u; // 80200CEC
  c->r[30]=c->r[3]|c->r[3]; // 80200CF0
  c->r[31]=c->r[31]+0xFFFFC438u; // 80200CF4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80200CF8
  c->r[27]=c->r[31]+0x000001ECu; // 80200CFC
  c->r[28]=c->r[1]+0x0000002Cu; // 80200D00
  W32(c->r[1]+0x00000030u,c->r[29]); // 80200D04
  c->r[3]=c->r[1]+0x0000003Cu; // 80200D08
  W32(c->r[1]+0x00000034u,c->r[29]); // 80200D0C
  W32(c->r[1]+0x00000038u,c->r[29]); // 80200D10
  c->lr=0x80200D18u; f_801FAF28(c); // 80200D14
  c->r[3]=c->r[1]+0x00000048u; // 80200D18
  c->lr=0x80200D20u; f_801FAF28(c); // 80200D1C
  c->r[3]=c->r[1]+0x00000054u; // 80200D20
  c->lr=0x80200D28u; f_801FAF28(c); // 80200D24
  c->r[3]=c->r[1]+0x00000060u; // 80200D28
  c->lr=0x80200D30u; f_801FAF28(c); // 80200D2C
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 80200D30
  c->r[3]=c->r[1]+0x0000007Cu; // 80200D34
  W32(c->r[1]+0x00000070u,c->r[29]); // 80200D38
  W32(c->r[1]+0x00000074u,c->r[29]); // 80200D3C
  W8(c->r[1]+0x00000078u,c->r[29]); // 80200D40
  W8(c->r[1]+0x00000079u,c->r[29]); // 80200D44
  c->lr=0x80200D4Cu; f_801FAF28(c); // 80200D48
  c->r[3]=c->r[1]+0x00000088u; // 80200D4C
  c->lr=0x80200D54u; f_801FAF28(c); // 80200D50
  c->r[3]=c->r[1]+0x00000094u; // 80200D54
  c->lr=0x80200D5Cu; f_801FAF28(c); // 80200D58
  c->r[3]=c->r[1]+0x000000A0u; // 80200D5C
  c->lr=0x80200D64u; f_801FAF28(c); // 80200D60
  c->r[5]=0u+0x80300000u; // 80200D64
  c->r[4]=0u+0x80340000u; // 80200D68
  c->r[5]=c->r[5]+0x00007CD8u; // 80200D6C
  c->r[3]=0u+0x00000001u; // 80200D70
  c->r[4]=c->r[4]+0xFFFFCB05u; // 80200D74
  c->r[0]=0u+0xFFFFFFFFu; // 80200D78
  W8(c->r[1]+0x000000ACu,c->r[3]); // 80200D7C
  c->r[3]=c->r[1]+0x000000DCu; // 80200D80
  W32(c->r[1]+0x000000B0u,c->r[27]); // 80200D84
  W32(c->r[1]+0x000000B4u,c->r[5]); // 80200D88
  W32(c->r[1]+0x000000B8u,c->r[4]); // 80200D8C
  W32(c->r[1]+0x000000BCu,c->r[0]); // 80200D90
  W32(c->r[1]+0x000000C4u,c->r[29]); // 80200D94
  W32(c->r[1]+0x000000C8u,c->r[29]); // 80200D98
  W32(c->r[1]+0x000000CCu,c->r[29]); // 80200D9C
  W32(c->r[1]+0x000000D0u,c->r[29]); // 80200DA0
  W32(c->r[1]+0x000000D4u,c->r[29]); // 80200DA4
  W32(c->r[1]+0x000000D8u,c->r[29]); // 80200DA8
  c->lr=0x80200DB0u; f_801FAF28(c); // 80200DAC
  c->r[3]=c->r[1]+0x000000E8u; // 80200DB0
  c->lr=0x80200DB8u; f_801FAF28(c); // 80200DB4
  c->r[3]=0u+0x80340000u; // 80200DB8
  c->r[0]=0u+0x00000002u; // 80200DBC
  c->r[3]=c->r[3]+0xFFFFCB02u; // 80200DC0
  cmps(c,0,(int32_t)c->r[27],0); // 80200DC4
  W32(c->r[1]+0x000000F4u,c->r[3]); // 80200DC8
  c->r[25]=0u+0x00000000u; // 80200DCC
  c->r[26]=0u+0x00000000u; // 80200DD0
  c->r[29]=0u+0x00000000u; // 80200DD4
  W32(c->r[1]+0x000000F8u,c->r[0]); // 80200DD8
  if (crb(c,2)) { goto L_80200E10; } // 80200DDC
  c->r[4]=c->r[27]|c->r[27]; // 80200DE0
  c->r[3]=c->r[1]+0x00000008u; // 80200DE4
  c->lr=0x80200DECu; f_80201AF4(c); // 80200DE8
  c->r[5]=0u+0x80340000u; // 80200DEC
  c->r[3]=c->r[1]+0x00000014u; // 80200DF0
  c->r[4]=c->r[1]+0x00000008u; // 80200DF4
  c->r[25]=0u+0x00000001u; // 80200DF8
  c->r[5]=c->r[5]+0xFFFFCAF9u; // 80200DFC
  c->lr=0x80200E04u; f_801FCACC(c); // 80200E00
  c->r[4]=c->r[1]+0x00000014u; // 80200E04
  c->r[26]=0u+0x00000001u; // 80200E08
  goto L_80200E28; // 80200E0C
L_80200E10:;
  c->r[4]=0u+0x80340000u; // 80200E10
  c->r[3]=c->r[1]+0x00000020u; // 80200E14
  c->r[4]=c->r[4]+0xFFFFCAF8u; // 80200E18
  c->lr=0x80200E20u; f_80201AF4(c); // 80200E1C
  c->r[29]=0u+0x00000001u; // 80200E20
  c->r[4]=c->r[1]+0x00000020u; // 80200E24
L_80200E28:;
  c->r[3]=c->r[28]+0x000000B0u; // 80200E28
  c->lr=0x80200E30u; f_801FBE10(c); // 80200E2C
  cmps(c,0,(int32_t)c->r[29],0); // 80200E30
  if (crb(c,2)) { goto L_80200E44; } // 80200E34
  c->r[3]=c->r[1]+0x00000020u; // 80200E38
  c->r[4]=0u+0xFFFFFFFFu; // 80200E3C
  c->lr=0x80200E44u; f_801FD984(c); // 80200E40
L_80200E44:;
  cmps(c,0,(int32_t)c->r[26],0); // 80200E44
  if (crb(c,2)) { goto L_80200E58; } // 80200E48
  c->r[3]=c->r[1]+0x00000014u; // 80200E4C
  c->r[4]=0u+0xFFFFFFFFu; // 80200E50
  c->lr=0x80200E58u; f_801FD984(c); // 80200E54
L_80200E58:;
  cmps(c,0,(int32_t)c->r[25],0); // 80200E58
  if (crb(c,2)) { goto L_80200E6C; } // 80200E5C
  c->r[3]=c->r[1]+0x00000008u; // 80200E60
  c->r[4]=0u+0xFFFFFFFFu; // 80200E64
  c->lr=0x80200E6Cu; f_801FD984(c); // 80200E68
L_80200E6C:;
  c->r[3]=c->r[30]|c->r[30]; // 80200E6C
  c->r[4]=c->r[1]+0x0000002Cu; // 80200E70
  c->lr=0x80200E78u; f_80200780(c); // 80200E74
  c->r[3]=c->r[1]+0x0000002Cu; // 80200E78
  c->lr=0x80200E80u; f_80202F78(c); // 80200E7C
  c->r[4]=R32(c->r[30]+0x00000000u); // 80200E80
  c->r[3]=c->r[1]+0x0000002Cu; // 80200E84
  c->r[4]=c->r[4]+0x00000010u; // 80200E88
  c->lr=0x80200E90u; f_80203418(c); // 80200E8C
  c->r[3]=R32(c->r[1]+0x00000070u); // 80200E90
  cmps(c,0,(int32_t)c->r[3],0); // 80200E94
  if (crb(c,2)) { goto L_80200EF0; } // 80200E98
  c->r[0]=R8(c->r[1]+0x00000078u); // 80200E9C
  cmps(c,0,(int32_t)c->r[0],0); // 80200EA0
  if (crb(c,2)) { goto L_80200EB0; } // 80200EA4
  cmps(c,0,(int32_t)c->r[3],-4015); // 80200EA8
  if (!crb(c,2)) { goto L_80200EE4; } // 80200EAC
L_80200EB0:;
  c->r[0]=R8(c->r[30]+0x000000ECu); // 80200EB0
  c->r[3]=R32(c->r[30]+0x00000000u); // 80200EB4
  W8(c->r[3]+0x00000170u,c->r[0]); // 80200EB8
  c->r[4]=R32(c->r[30]+0x00000000u); // 80200EBC
  c->r[0]=R8(c->r[4]+0x00000242u); // 80200EC0
  cmps(c,0,(int32_t)c->r[0],0); // 80200EC4
  if (crb(c,2)) { goto L_80200EE4; } // 80200EC8
  c->r[0]=R8(c->r[30]+0x000000EDu); // 80200ECC
  cmps(c,0,(int32_t)c->r[0],0); // 80200ED0
  if (!crb(c,2)) { goto L_80200EE4; } // 80200ED4
  c->r[3]=R32(c->r[4]+0x00000190u); // 80200ED8
  c->r[4]=R32(c->r[4]+0x00000194u); // 80200EDC
  c->lr=0x80200EE4u; f_80213A30(c); // 80200EE0
L_80200EE4:;
  c->r[0]=R32(c->r[1]+0x00000070u); // 80200EE4
  cmps(c,0,(int32_t)c->r[0],-4015); // 80200EE8
  if (!crb(c,2)) { goto L_80200F50; } // 80200EEC
L_80200EF0:;
  c->r[12]=R32(c->r[30]+0x000000C0u); // 80200EF0
  c->r[3]=c->r[30]|c->r[30]; // 80200EF4
  c->r[4]=c->r[1]+0x0000002Cu; // 80200EF8
  c->r[12]=R32(c->r[12]+0x00000020u); // 80200EFC
  c->ctr=c->r[12]; // 80200F00
  if (true) { c->lr=0x80200F08u; dispatch(c,c->ctr); } // 80200F04
  c->r[0]=R32(c->r[1]+0x00000070u); // 80200F08
  cmps(c,0,(int32_t)c->r[0],-4015); // 80200F0C
  if (!crb(c,2)) { goto L_80200F50; } // 80200F10
  c->r[3]=c->r[1]+0x00000088u; // 80200F14
  c->r[4]=c->r[31]+0x000001FAu; // 80200F18
  c->lr=0x80200F20u; f_80200BF0(c); // 80200F1C
  cmps(c,0,(int32_t)c->r[3],0); // 80200F20
  if (crb(c,2)) { goto L_80200F34; } // 80200F24
  c->r[0]=0u+0xFFFFF013u; // 80200F28
  W32(c->r[1]+0x00000070u,c->r[0]); // 80200F2C
  goto L_80200F50; // 80200F30
L_80200F34:;
  c->r[3]=c->r[1]+0x00000088u; // 80200F34
  c->r[4]=c->r[31]+0x000001FEu; // 80200F38
  c->lr=0x80200F40u; f_80200BF0(c); // 80200F3C
  cmps(c,0,(int32_t)c->r[3],0); // 80200F40
  if (crb(c,2)) { goto L_80200F50; } // 80200F44
  c->r[0]=0u+0xFFFFF00Fu; // 80200F48
  W32(c->r[1]+0x00000070u,c->r[0]); // 80200F4C
L_80200F50:;
  c->r[29]=R32(c->r[1]+0x00000070u); // 80200F50
  c->r[3]=c->r[1]+0x0000002Cu; // 80200F54
  c->r[4]=0u+0xFFFFFFFFu; // 80200F58
  c->lr=0x80200F60u; f_8020125C(c); // 80200F5C
  c->r[11]=c->r[1]+0x00000120u; // 80200F60
  c->r[3]=c->r[29]|c->r[29]; // 80200F64
  c->lr=0x80200F6Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80200F68
  c->r[0]=R32(c->r[1]+0x00000124u); // 80200F6C
  c->lr=c->r[0]; // 80200F70
  c->r[1]=c->r[1]+0x00000120u; // 80200F74
  return; // 80200F78
}

// fn_80200F7C
void f_80200F7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200F7C
  c->r[0]=c->lr; // 80200F80
  cmps(c,0,(int32_t)c->r[3],0); // 80200F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80200F88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80200F8C
  c->r[31]=c->r[3]|c->r[3]; // 80200F90
  if (crb(c,2)) { goto L_80200FA4; } // 80200F94
  cmps(c,0,(int32_t)c->r[4],0); // 80200F98
  if (!crb(c,1)) { goto L_80200FA4; } // 80200F9C
  c->lr=0x80200FA4u; f_800D6AD0(c); // 80200FA0
L_80200FA4:;
  c->r[3]=c->r[31]|c->r[31]; // 80200FA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80200FA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80200FAC
  c->lr=c->r[0]; // 80200FB0
  c->r[1]=c->r[1]+0x00000010u; // 80200FB4
  return; // 80200FB8
}

// fn_80200FBC
void f_80200FBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200FBC
  c->r[0]=c->lr; // 80200FC0
  cmps(c,0,(int32_t)c->r[3],0); // 80200FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80200FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80200FCC
  c->r[31]=c->r[4]|c->r[4]; // 80200FD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80200FD4
  c->r[30]=c->r[3]|c->r[3]; // 80200FD8
  if (crb(c,2)) { goto L_80200FFC; } // 80200FDC
  if (crb(c,2)) { goto L_80200FEC; } // 80200FE0
  c->r[4]=0u+0x00000000u; // 80200FE4
  c->lr=0x80200FECu; f_80201A18(c); // 80200FE8
L_80200FEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80200FEC
  if (!crb(c,1)) { goto L_80200FFC; } // 80200FF0
  c->r[3]=c->r[30]|c->r[30]; // 80200FF4
  c->lr=0x80200FFCu; f_800D6AD0(c); // 80200FF8
L_80200FFC:;
  c->r[3]=c->r[30]|c->r[30]; // 80200FFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201000
  c->r[30]=R32(c->r[1]+0x00000008u); // 80201004
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201008
  c->lr=c->r[0]; // 8020100C
  c->r[1]=c->r[1]+0x00000010u; // 80201010
  return; // 80201014
}

// dtor_80201018
void f_80201018(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201018
  c->r[0]=c->lr; // 8020101C
  cmps(c,0,(int32_t)c->r[3],0); // 80201020
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201028
  c->r[31]=c->r[4]|c->r[4]; // 8020102C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80201030
  c->r[30]=c->r[3]|c->r[3]; // 80201034
  if (crb(c,2)) { goto L_80201054; } // 80201038
  c->r[4]=0u+0x00000000u; // 8020103C
  c->lr=0x80201044u; f_80200FBC(c); // 80201040
  cmps(c,0,(int32_t)c->r[31],0); // 80201044
  if (!crb(c,1)) { goto L_80201054; } // 80201048
  c->r[3]=c->r[30]|c->r[30]; // 8020104C
  c->lr=0x80201054u; f_800D6AD0(c); // 80201050
L_80201054:;
  c->r[3]=c->r[30]|c->r[30]; // 80201054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201058
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020105C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201060
  c->lr=c->r[0]; // 80201064
  c->r[1]=c->r[1]+0x00000010u; // 80201068
  return; // 8020106C
}

// fn_80201070
void f_80201070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201070
  c->r[0]=c->lr; // 80201074
  cmps(c,0,(int32_t)c->r[3],0); // 80201078
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020107C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201080
  c->r[31]=c->r[3]|c->r[3]; // 80201084
  if (crb(c,2)) { goto L_80201098; } // 80201088
  cmps(c,0,(int32_t)c->r[4],0); // 8020108C
  if (!crb(c,1)) { goto L_80201098; } // 80201090
  c->lr=0x80201098u; f_800D6AD0(c); // 80201094
L_80201098:;
  c->r[3]=c->r[31]|c->r[31]; // 80201098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020109C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802010A0
  c->lr=c->r[0]; // 802010A4
  c->r[1]=c->r[1]+0x00000010u; // 802010A8
  return; // 802010AC
}

// fn_802010B0
void f_802010B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802010B0
  c->r[0]=c->lr; // 802010B4
  cmps(c,0,(int32_t)c->r[3],0); // 802010B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802010BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802010C0
  c->r[31]=c->r[4]|c->r[4]; // 802010C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802010C8
  c->r[30]=c->r[3]|c->r[3]; // 802010CC
  if (crb(c,2)) { goto L_802010F0; } // 802010D0
  if (crb(c,2)) { goto L_802010E0; } // 802010D4
  c->r[4]=0u+0x00000000u; // 802010D8
  c->lr=0x802010E0u; f_80201978(c); // 802010DC
L_802010E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802010E0
  if (!crb(c,1)) { goto L_802010F0; } // 802010E4
  c->r[3]=c->r[30]|c->r[30]; // 802010E8
  c->lr=0x802010F0u; f_800D6AD0(c); // 802010EC
L_802010F0:;
  c->r[3]=c->r[30]|c->r[30]; // 802010F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802010F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802010F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802010FC
  c->lr=c->r[0]; // 80201100
  c->r[1]=c->r[1]+0x00000010u; // 80201104
  return; // 80201108
}

// dtor_8020110C
void f_8020110C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020110C
  c->r[0]=c->lr; // 80201110
  cmps(c,0,(int32_t)c->r[3],0); // 80201114
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020111C
  c->r[31]=c->r[4]|c->r[4]; // 80201120
  W32(c->r[1]+0x00000008u,c->r[30]); // 80201124
  c->r[30]=c->r[3]|c->r[3]; // 80201128
  if (crb(c,2)) { goto L_8020114C; } // 8020112C
  if (crb(c,2)) { goto L_8020113C; } // 80201130
  c->r[4]=0u+0x00000000u; // 80201134
  c->lr=0x8020113Cu; f_802010B0(c); // 80201138
L_8020113C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020113C
  if (!crb(c,1)) { goto L_8020114C; } // 80201140
  c->r[3]=c->r[30]|c->r[30]; // 80201144
  c->lr=0x8020114Cu; f_800D6AD0(c); // 80201148
L_8020114C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020114C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201150
  c->r[30]=R32(c->r[1]+0x00000008u); // 80201154
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201158
  c->lr=c->r[0]; // 8020115C
  c->r[1]=c->r[1]+0x00000010u; // 80201160
  return; // 80201164
}

// fn_80201168
void f_80201168(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201168
  c->r[0]=c->lr; // 8020116C
  cmps(c,0,(int32_t)c->r[3],0); // 80201170
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201174
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201178
  c->r[31]=c->r[3]|c->r[3]; // 8020117C
  if (crb(c,2)) { goto L_80201190; } // 80201180
  cmps(c,0,(int32_t)c->r[4],0); // 80201184
  if (!crb(c,1)) { goto L_80201190; } // 80201188
  c->lr=0x80201190u; f_800D6AD0(c); // 8020118C
L_80201190:;
  c->r[3]=c->r[31]|c->r[31]; // 80201190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201194
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201198
  c->lr=c->r[0]; // 8020119C
  c->r[1]=c->r[1]+0x00000010u; // 802011A0
  return; // 802011A4
}

// fn_802011A8
void f_802011A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802011A8
  c->r[0]=c->lr; // 802011AC
  cmps(c,0,(int32_t)c->r[3],0); // 802011B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802011B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802011B8
  c->r[31]=c->r[4]|c->r[4]; // 802011BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802011C0
  c->r[30]=c->r[3]|c->r[3]; // 802011C4
  if (crb(c,2)) { goto L_802011E8; } // 802011C8
  if (crb(c,2)) { goto L_802011D8; } // 802011CC
  c->r[4]=0u+0x00000000u; // 802011D0
  c->lr=0x802011D8u; f_802018DC(c); // 802011D4
L_802011D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802011D8
  if (!crb(c,1)) { goto L_802011E8; } // 802011DC
  c->r[3]=c->r[30]|c->r[30]; // 802011E0
  c->lr=0x802011E8u; f_800D6AD0(c); // 802011E4
L_802011E8:;
  c->r[3]=c->r[30]|c->r[30]; // 802011E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802011EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802011F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802011F4
  c->lr=c->r[0]; // 802011F8
  c->r[1]=c->r[1]+0x00000010u; // 802011FC
  return; // 80201200
}

// dtor_80201204
void f_80201204(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201204
  c->r[0]=c->lr; // 80201208
  cmps(c,0,(int32_t)c->r[3],0); // 8020120C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201210
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201214
  c->r[31]=c->r[4]|c->r[4]; // 80201218
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020121C
  c->r[30]=c->r[3]|c->r[3]; // 80201220
  if (crb(c,2)) { goto L_80201240; } // 80201224
  c->r[4]=0u+0x00000000u; // 80201228
  c->lr=0x80201230u; f_802011A8(c); // 8020122C
  cmps(c,0,(int32_t)c->r[31],0); // 80201230
  if (!crb(c,1)) { goto L_80201240; } // 80201234
  c->r[3]=c->r[30]|c->r[30]; // 80201238
  c->lr=0x80201240u; f_800D6AD0(c); // 8020123C
L_80201240:;
  c->r[3]=c->r[30]|c->r[30]; // 80201240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201244
  c->r[30]=R32(c->r[1]+0x00000008u); // 80201248
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020124C
  c->lr=c->r[0]; // 80201250
  c->r[1]=c->r[1]+0x00000010u; // 80201254
  return; // 80201258
}

// dtor_8020125C
void f_8020125C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020125C
  c->r[0]=c->lr; // 80201260
  cmps(c,0,(int32_t)c->r[3],0); // 80201264
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020126C
  c->r[31]=c->r[4]|c->r[4]; // 80201270
  W32(c->r[1]+0x00000008u,c->r[30]); // 80201274
  c->r[30]=c->r[3]|c->r[3]; // 80201278
  if (crb(c,2)) { goto L_8020132C; } // 8020127C
  c->r[4]=0u+0xFFFFFFFFu; // 80201280
  c->r[3]=c->r[3]+0x000000BCu; // 80201284
  c->lr=0x8020128Cu; f_801FD984(c); // 80201288
  c->r[3]=c->r[30]+0x000000B0u; // 8020128C
  c->r[4]=0u+0xFFFFFFFFu; // 80201290
  c->lr=0x80201298u; f_801FD984(c); // 80201294
  c->r[3]=c->r[30]+0x000000A4u; // 80201298
  c->r[4]=0u+0xFFFFFFFFu; // 8020129C
  c->lr=0x802012A4u; f_80201204(c); // 802012A0
  c->r[3]=c->r[30]+0x00000098u; // 802012A4
  c->r[4]=0u+0xFFFFFFFFu; // 802012A8
  c->lr=0x802012B0u; f_8020110C(c); // 802012AC
  c->r[3]=c->r[30]+0x00000074u; // 802012B0
  c->r[4]=0u+0xFFFFFFFFu; // 802012B4
  c->lr=0x802012BCu; f_801FD984(c); // 802012B8
  c->r[3]=c->r[30]+0x00000068u; // 802012BC
  c->r[4]=0u+0xFFFFFFFFu; // 802012C0
  c->lr=0x802012C8u; f_801FD984(c); // 802012C4
  c->r[3]=c->r[30]+0x0000005Cu; // 802012C8
  c->r[4]=0u+0xFFFFFFFFu; // 802012CC
  c->lr=0x802012D4u; f_801FD984(c); // 802012D0
  c->r[3]=c->r[30]+0x00000050u; // 802012D4
  c->r[4]=0u+0xFFFFFFFFu; // 802012D8
  c->lr=0x802012E0u; f_801FD984(c); // 802012DC
  c->r[3]=c->r[30]+0x00000034u; // 802012E0
  c->r[4]=0u+0xFFFFFFFFu; // 802012E4
  c->lr=0x802012ECu; f_801FD984(c); // 802012E8
  c->r[3]=c->r[30]+0x00000028u; // 802012EC
  c->r[4]=0u+0xFFFFFFFFu; // 802012F0
  c->lr=0x802012F8u; f_801FD984(c); // 802012F4
  c->r[3]=c->r[30]+0x0000001Cu; // 802012F8
  c->r[4]=0u+0xFFFFFFFFu; // 802012FC
  c->lr=0x80201304u; f_801FC3F0(c); // 80201300
  c->r[3]=c->r[30]+0x00000010u; // 80201304
  c->r[4]=0u+0xFFFFFFFFu; // 80201308
  c->lr=0x80201310u; f_801FC3F0(c); // 8020130C
  c->r[3]=c->r[30]+0x00000004u; // 80201310
  c->r[4]=0u+0xFFFFFFFFu; // 80201314
  c->lr=0x8020131Cu; f_80201018(c); // 80201318
  cmps(c,0,(int32_t)c->r[31],0); // 8020131C
  if (!crb(c,1)) { goto L_8020132C; } // 80201320
  c->r[3]=c->r[30]|c->r[30]; // 80201324
  c->lr=0x8020132Cu; f_800D6AD0(c); // 80201328
L_8020132C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020132C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201330
  c->r[30]=R32(c->r[1]+0x00000008u); // 80201334
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201338
  c->lr=c->r[0]; // 8020133C
  c->r[1]=c->r[1]+0x00000010u; // 80201340
  return; // 80201344
}

// fn_80201348
void f_80201348(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201348
  c->r[0]=c->lr; // 8020134C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80201350
  c->r[11]=c->r[1]+0x00000030u; // 80201354
  c->lr=0x8020135Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201358
  c->r[31]=c->r[3]|c->r[3]; // 8020135C
  c->r[29]=c->r[4]|c->r[4]; // 80201360
  c->lr=0x80201368u; f_802013D0(c); // 80201364
  cmps(c,0,(int32_t)c->r[3],0); // 80201368
  c->r[30]=c->r[3]|c->r[3]; // 8020136C
  if (!crb(c,2)) { goto L_802013B4; } // 80201370
  c->r[4]=0u+0x80340000u; // 80201374
  c->r[3]=c->r[1]+0x00000008u; // 80201378
  c->r[4]=c->r[4]+0xFFFFC604u; // 8020137C
  c->lr=0x80201384u; f_80201AF4(c); // 80201380
  c->r[3]=c->r[29]|c->r[29]; // 80201384
  c->r[4]=c->r[1]+0x00000008u; // 80201388
  c->r[5]=c->r[31]+0x00000204u; // 8020138C
  c->r[6]=0u+0x00000000u; // 80201390
  c->lr=0x80201398u; f_80203E20(c); // 80201394
  c->r[31]=c->r[3]|c->r[3]; // 80201398
  c->r[3]=c->r[1]+0x00000008u; // 8020139C
  c->r[4]=0u+0xFFFFFFFFu; // 802013A0
  c->lr=0x802013A8u; f_801FD984(c); // 802013A4
  cmps(c,0,(int32_t)c->r[31],0); // 802013A8
  if (crb(c,2)) { goto L_802013B4; } // 802013AC
  c->r[30]=R32(c->r[29]+0x00000044u); // 802013B0
L_802013B4:;
  c->r[11]=c->r[1]+0x00000030u; // 802013B4
  c->r[3]=c->r[30]|c->r[30]; // 802013B8
  c->lr=0x802013C0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802013BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802013C0
  c->lr=c->r[0]; // 802013C4
  c->r[1]=c->r[1]+0x00000030u; // 802013C8
  return; // 802013CC
}

// fn_802013D0
void f_802013D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802013D0
  c->r[0]=c->lr; // 802013D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802013D8
  c->r[11]=c->r[1]+0x00000020u; // 802013DC
  c->lr=0x802013E4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802013E0
  c->r[29]=c->r[4]|c->r[4]; // 802013E4
  c->r[31]=0u+0x80340000u; // 802013E8
  c->r[4]=R8(c->r[3]+0x000000EEu); // 802013EC
  c->r[28]=c->r[3]|c->r[3]; // 802013F0
  c->r[30]=c->r[3]+0x00000128u; // 802013F4
  c->r[3]=c->r[29]|c->r[29]; // 802013F8
  c->r[31]=c->r[31]+0xFFFFC438u; // 802013FC
  c->lr=0x80201404u; f_8020667C(c); // 80201400
  c->r[0]=R32(c->r[29]+0x00000044u); // 80201404
  cmps(c,0,(int32_t)c->r[0],-4015); // 80201408
  if (!crb(c,2)) { goto L_80201480; } // 8020140C
  c->r[3]=c->r[29]+0x0000005Cu; // 80201410
  c->r[4]=c->r[31]+0x00000202u; // 80201414
  c->lr=0x8020141Cu; f_80200BF0(c); // 80201418
  cmps(c,0,(int32_t)c->r[3],0); // 8020141C
  if (!crb(c,2)) { goto L_80201438; } // 80201420
  c->r[3]=c->r[29]+0x0000005Cu; // 80201424
  c->r[4]=c->r[31]+0x00000206u; // 80201428
  c->lr=0x80201430u; f_80200BF0(c); // 8020142C
  cmps(c,0,(int32_t)c->r[3],0); // 80201430
  if (crb(c,2)) { goto L_80201480; } // 80201434
L_80201438:;
  c->r[3]=c->r[28]+0x000000F0u; // 80201438
  c->r[4]=c->r[29]+0x0000005Cu; // 8020143C
  c->lr=0x80201444u; f_801FBE10(c); // 80201440
  c->r[3]=c->r[28]+0x000000FCu; // 80201444
  c->r[4]=c->r[29]+0x00000068u; // 80201448
  c->lr=0x80201450u; f_801FBE10(c); // 8020144C
  c->r[30]=0u+0x00000000u; // 80201450
  c->r[3]=c->r[29]+0x0000005Cu; // 80201454
  W32(c->r[29]+0x00000044u,c->r[30]); // 80201458
  c->lr=0x80201460u; f_801FBDD8(c); // 8020145C
  c->r[3]=c->r[29]+0x00000068u; // 80201460
  c->lr=0x80201468u; f_801FBDD8(c); // 80201464
  c->r[3]=R32(c->r[28]+0x00000000u); // 80201468
  c->r[4]=c->r[31]+0x0000020Au; // 8020146C
  c->r[5]=0u+0x00000000u; // 80201470
  c->r[3]=R32(c->r[3]+0x00000004u); // 80201474
  c->lr=0x8020147Cu; f_801FD3F8(c); // 80201478
  goto L_8020148C; // 8020147C
L_80201480:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 80201480
  cmps(c,0,(int32_t)c->r[0],0); // 80201484
  if (!crb(c,2)) { goto L_802014B4; } // 80201488
L_8020148C:;
  c->r[0]=R8(c->r[28]+0x00000108u); // 8020148C
  cmps(c,0,(int32_t)c->r[0],0); // 80201490
  if (crb(c,2)) { goto L_802014B4; } // 80201494
  c->r[3]=c->r[29]|c->r[29]; // 80201498
  c->r[5]=c->r[30]|c->r[30]; // 8020149C
  c->r[6]=c->r[28]+0x0000010Cu; // 802014A0
  c->r[7]=c->r[28]+0x00000118u; // 802014A4
  c->r[8]=c->r[28]+0x00000124u; // 802014A8
  c->r[4]=0u+0x00000001u; // 802014AC
  c->lr=0x802014B4u; f_80204634(c); // 802014B0
L_802014B4:;
  c->r[11]=c->r[1]+0x00000020u; // 802014B4
  c->r[3]=R32(c->r[29]+0x00000044u); // 802014B8
  c->lr=0x802014C0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802014BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802014C0
  c->lr=c->r[0]; // 802014C4
  c->r[1]=c->r[1]+0x00000020u; // 802014C8
  return; // 802014CC
}

// fn_802014D0
void f_802014D0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 802014D0
  c->r[3]=0u+0x00000000u; // 802014D4
  c->r[6]=0u+0x00000001u; // 802014D8
  c->r[0]=R8(c->r[5]+0x00000242u); // 802014DC
  cmps(c,0,(int32_t)c->r[0],0); // 802014E0
  if (crb(c,2)) return; // 802014E4
  c->r[0]=R8(c->r[5]+0x00000208u); // 802014E8
  cmps(c,0,(int32_t)c->r[0],0); // 802014EC
  if (crb(c,2)) return; // 802014F0
  c->r[0]=R8(c->r[5]+0x00000209u); // 802014F4
  cmps(c,0,(int32_t)c->r[0],0); // 802014F8
  if (!crb(c,2)) return; // 802014FC
  c->r[0]=R32(c->r[5]+0x000001E8u); // 80201500
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80201504
  if (crb(c,2)) return; // 80201508
  c->r[7]=0u+0x00000000u; // 8020150C
  goto L_80201538; // 80201510
L_80201514:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80201514
  cmps(c,0,(int32_t)c->r[0],48); // 80201518
  if (crb(c,2)) { goto L_80201530; } // 8020151C
  cmps(c,0,(int32_t)c->r[0],46); // 80201520
  if (crb(c,2)) { goto L_80201530; } // 80201524
  c->r[6]=0u+0x00000000u; // 80201528
  goto L_8020154C; // 8020152C
L_80201530:;
  c->r[7]=c->r[7]+0x00000001u; // 80201530
  c->r[4]=c->r[4]+0x00000001u; // 80201534
L_80201538:;
  cmpu(c,0,c->r[7],0x00000020u); // 80201538
  if (!crb(c,0)) { goto L_8020154C; } // 8020153C
  c->r[5]=R8(c->r[4]+0x00000000u); // 80201540
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 80201544
  if (!crb(c,2)) { IRQCHK(c); goto L_80201514; } // 80201548
L_8020154C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8020154C
  if (!crb(c,2)) return; // 80201550
  c->r[3]=0u+0xFFFFF012u; // 80201554
  return; // 80201558
}

// fn_8020155C
void f_8020155C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8020155C
  return; // 80201560
}

// fn_80201564
void f_80201564(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000134u; // 80201564
  f_802014D0(c); return; // 80201568
}

// fn_8020156C
void f_8020156C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020156C
  c->r[0]=c->lr; // 80201570
  W32(c->r[1]+0x00000204u,c->r[0]); // 80201574
  c->r[11]=c->r[1]+0x00000200u; // 80201578
  c->lr=0x80201580u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020157C
  c->r[31]=c->r[1]|c->r[1]; // 80201580
  c->r[9]=0u+0x80300000u; // 80201584
  c->r[30]=0u+0x80340000u; // 80201588
  c->r[9]=c->r[9]+0x00007C98u; // 8020158C
  c->r[0]=0u+0x00000020u; // 80201590
  c->r[25]=c->r[4]|c->r[4]; // 80201594
  c->r[27]=c->r[5]|c->r[5]; // 80201598
  c->r[26]=c->r[3]|c->r[3]; // 8020159C
  c->r[28]=c->r[7]|c->r[7]; // 802015A0
  c->r[29]=c->r[8]|c->r[8]; // 802015A4
  W32(c->r[31]+0x00000034u,c->r[1]); // 802015A8
  c->r[30]=c->r[30]+0xFFFFC438u; // 802015AC
  c->r[5]=c->r[31]+0x00000077u; // 802015B0
  c->r[4]=c->r[9]+0xFFFFFFFFu; // 802015B4
  c->ctr=c->r[0]; // 802015B8
L_802015BC:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 802015BC
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 802015C0
  W8(c->r[5]+0x00000001u,c->r[3]); // 802015C4
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 802015C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802015BC; } // 802015CC
  c->r[3]=c->r[31]+0x00000078u; // 802015D0
  c->r[5]=c->r[30]+0x0000020Cu; // 802015D4
  c->r[4]=0u+0x00000020u; // 802015D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802015DC
  c->lr=0x802015E4u; f_8018E874(c); // 802015E0
  c->r[3]=0u+0x00000000u; // 802015E4
  c->r[0]=0u+0x00000020u; // 802015E8
  W8(c->r[31]+0x00000097u,c->r[3]); // 802015EC
  c->r[5]=c->r[31]+0x00000037u; // 802015F0
  c->r[4]=c->r[31]+0x00000077u; // 802015F4
  c->ctr=c->r[0]; // 802015F8
L_802015FC:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 802015FC
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 80201600
  W8(c->r[5]+0x00000001u,c->r[3]); // 80201604
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 80201608
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802015FC; } // 8020160C
  W32(c->r[1]+0x00000008u,c->r[29]); // 80201610
  c->r[0]=0u+0x00000000u; // 80201614
  c->r[6]=c->r[25]|c->r[25]; // 80201618
  c->r[5]=c->r[26]|c->r[26]; // 8020161C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80201620
  c->r[7]=c->r[27]|c->r[27]; // 80201624
  c->r[10]=c->r[28]|c->r[28]; // 80201628
  c->r[3]=c->r[31]+0x000000B8u; // 8020162C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80201630
  c->r[8]=c->r[31]+0x00000038u; // 80201634
  c->r[9]=0u+0x00000000u; // 80201638
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020163C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80201640
  c->lr=0x80201648u; f_80200244(c); // 80201644
  c->r[25]=0u+0x803D0000u; // 80201648
  c->r[3]=R32(c->r[25]+0x000073D8u); // 8020164C
  cmps(c,0,(int32_t)c->r[3],0); // 80201650
  if (!crb(c,2)) { goto L_80201670; } // 80201654
  c->r[0]=0u+0xFFFFFFFFu; // 80201658
  c->r[3]=c->r[31]+0x000000B8u; // 8020165C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80201660
  c->lr=0x80201668u; f_802017A8(c); // 80201664
  c->r[3]=0u+0xFFFFF037u; // 80201668
  goto L_80201788; // 8020166C
L_80201670:;
  c->r[0]=R8(c->r[3]+0x00000198u); // 80201670
  cmps(c,0,(int32_t)c->r[0],0); // 80201674
  if (!crb(c,2)) { goto L_80201694; } // 80201678
  c->r[0]=0u+0xFFFFFFFFu; // 8020167C
  c->r[3]=c->r[31]+0x000000B8u; // 80201680
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80201684
  c->lr=0x8020168Cu; f_802017A8(c); // 80201688
  c->r[3]=0u+0xFFFFF018u; // 8020168C
  goto L_80201788; // 80201690
L_80201694:;
  c->r[0]=R8(c->r[3]+0x00000174u); // 80201694
  cmps(c,0,(int32_t)c->r[0],0); // 80201698
  if (!crb(c,2)) { goto L_802016B8; } // 8020169C
  c->r[0]=0u+0xFFFFFFFFu; // 802016A0
  c->r[3]=c->r[31]+0x000000B8u; // 802016A4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802016A8
  c->lr=0x802016B0u; f_802017A8(c); // 802016AC
  c->r[3]=0u+0xFFFFF01Bu; // 802016B0
  goto L_80201788; // 802016B4
L_802016B8:;
  c->r[3]=c->r[3]+0x000000BCu; // 802016B8
  c->lr=0x802016C0u; f_801FBAA0(c); // 802016BC
  c->r[0]=cntlz(c->r[3]); // 802016C0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802016C4
  if (crb(c,2)) { goto L_802016E4; } // 802016C8
  c->r[0]=0u+0xFFFFFFFFu; // 802016CC
  c->r[3]=c->r[31]+0x000000B8u; // 802016D0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802016D4
  c->lr=0x802016DCu; f_802017A8(c); // 802016D8
  c->r[3]=0u+0xFFFFF036u; // 802016DC
  goto L_80201788; // 802016E0
L_802016E4:;
  c->r[26]=R32(c->r[31]+0x000001D0u); // 802016E4
  cmps(c,0,(int32_t)c->r[26],0); // 802016E8
  if (crb(c,2)) { goto L_80201708; } // 802016EC
  c->r[0]=0u+0xFFFFFFFFu; // 802016F0
  c->r[3]=c->r[31]+0x000000B8u; // 802016F4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802016F8
  c->lr=0x80201700u; f_802017A8(c); // 802016FC
  c->r[3]=c->r[26]|c->r[26]; // 80201700
  goto L_80201788; // 80201704
L_80201708:;
  c->r[4]=0u+0x803D0000u; // 80201708
  c->r[3]=R32(c->r[25]+0x000073D8u); // 8020170C
  c->r[4]=R32(c->r[4]+0x00007F90u); // 80201710
  c->r[5]=c->r[31]+0x000000B8u; // 80201714
  c->lr=0x8020171Cu; f_801FB7E8(c); // 80201718
  c->r[0]=0u+0xFFFFFFFFu; // 8020171C
  c->r[25]=c->r[3]|c->r[3]; // 80201720
  c->r[3]=c->r[31]+0x000000B8u; // 80201724
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80201728
  c->lr=0x80201730u; f_802017A8(c); // 8020172C
  c->r[3]=c->r[25]|c->r[25]; // 80201730
  goto L_80201788; // 80201734
  c->r[4]=c->r[30]+0x00000035u; // 80201738
  c->r[3]=0u+0x00000001u; // 8020173C
  c->r[5]=0u+0x0000025Fu; // 80201740
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201744
  c->lr=0x8020174Cu; f_801FE6E4(c); // 80201748
  c->r[25]=0u+0xFFFFF05Bu; // 8020174C
  goto L_8020176C; // 80201750
  c->r[4]=c->r[30]+0x0000009Cu; // 80201754
  c->r[3]=0u+0x00000001u; // 80201758
  c->r[5]=0u+0x0000025Fu; // 8020175C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201760
  c->lr=0x80201768u; f_801FE6E4(c); // 80201764
  c->r[25]=0u+0xFFFFF05Fu; // 80201768
L_8020176C:;
  c->r[3]=c->r[31]+0x00000020u; // 8020176C
  c->lr=0x80201774u; f_80187EEC(c); // 80201770
  c->r[0]=c->r[0]|0x00000000u; // 80201774
  c->r[0]=R32(c->r[1]+0x00000000u); // 80201778
  c->r[1]=R32(c->r[31]+0x00000034u); // 8020177C
  W32(c->r[1]+0x00000000u,c->r[0]); // 80201780
  c->r[3]=c->r[25]|c->r[25]; // 80201784
L_80201788:;
  c->r[10]=c->r[31]|c->r[31]; // 80201788
  c->r[11]=c->r[10]+0x00000200u; // 8020178C
  c->lr=0x80201794u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201790
  c->r[10]=R32(c->r[1]+0x00000000u); // 80201794
  c->r[0]=R32(c->r[10]+0x00000004u); // 80201798
  c->r[1]=c->r[10]|c->r[10]; // 8020179C
  c->lr=c->r[0]; // 802017A0
  return; // 802017A4
}

// dtor_802017A8
void f_802017A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802017A8
  c->r[0]=c->lr; // 802017AC
  cmps(c,0,(int32_t)c->r[3],0); // 802017B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802017B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802017B8
  c->r[31]=c->r[4]|c->r[4]; // 802017BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802017C0
  c->r[30]=c->r[3]|c->r[3]; // 802017C4
  if (crb(c,2)) { goto L_8020180C; } // 802017C8
  c->r[4]=0u+0xFFFFFFFFu; // 802017CC
  c->r[3]=c->r[3]+0x0000010Cu; // 802017D0
  c->lr=0x802017D8u; f_801FD984(c); // 802017D4
  c->r[3]=c->r[30]+0x00000100u; // 802017D8
  c->r[4]=0u+0xFFFFFFFFu; // 802017DC
  c->lr=0x802017E4u; f_801FD984(c); // 802017E0
  c->r[3]=c->r[30]+0x000000F4u; // 802017E4
  c->r[4]=0u+0xFFFFFFFFu; // 802017E8
  c->lr=0x802017F0u; f_801FD984(c); // 802017EC
  c->r[3]=c->r[30]|c->r[30]; // 802017F0
  c->r[4]=0u+0x00000000u; // 802017F4
  c->lr=0x802017FCu; f_802004AC(c); // 802017F8
  cmps(c,0,(int32_t)c->r[31],0); // 802017FC
  if (!crb(c,1)) { goto L_8020180C; } // 80201800
  c->r[3]=c->r[30]|c->r[30]; // 80201804
  c->lr=0x8020180Cu; f_800D6AD0(c); // 80201808
L_8020180C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020180C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201810
  c->r[30]=R32(c->r[1]+0x00000008u); // 80201814
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201818
  c->lr=c->r[0]; // 8020181C
  c->r[1]=c->r[1]+0x00000010u; // 80201820
  return; // 80201824
}

// fn_80201828
void f_80201828(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 80201828
  c->r[8]=0u+0x00000000u; // 8020182C
  f_8020156C(c); return; // 80201830
}

// fn_80201834
void f_80201834(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201834
  c->r[0]=c->lr; // 80201838
  cmps(c,0,(int32_t)c->r[3],0); // 8020183C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201840
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201844
  c->r[31]=c->r[4]|c->r[4]; // 80201848
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020184C
  c->r[30]=c->r[3]|c->r[3]; // 80201850
  if (crb(c,2)) { goto L_802018C0; } // 80201854
  c->r[4]=0u+0xFFFFFFFFu; // 80201858
  c->r[3]=c->r[3]+0x00000118u; // 8020185C
  c->lr=0x80201864u; f_801FD984(c); // 80201860
  c->r[3]=c->r[30]+0x0000010Cu; // 80201864
  c->r[4]=0u+0xFFFFFFFFu; // 80201868
  c->lr=0x80201870u; f_80201204(c); // 8020186C
  c->r[3]=c->r[30]+0x000000FCu; // 80201870
  c->r[4]=0u+0xFFFFFFFFu; // 80201874
  c->lr=0x8020187Cu; f_801FD984(c); // 80201878
  c->r[3]=c->r[30]+0x000000F0u; // 8020187C
  c->r[4]=0u+0xFFFFFFFFu; // 80201880
  c->lr=0x80201888u; f_801FD984(c); // 80201884
  cmps(c,0,(int32_t)c->r[30],0); // 80201888
  if (crb(c,2)) { goto L_802018B0; } // 8020188C
  c->r[3]=c->r[30]+0x000000D0u; // 80201890
  c->r[4]=0u+0xFFFFFFFFu; // 80201894
  c->lr=0x8020189Cu; f_801FD984(c); // 80201898
  cmps(c,0,(int32_t)c->r[30],0); // 8020189C
  if (crb(c,2)) { goto L_802018B0; } // 802018A0
  c->r[3]=c->r[30]+0x00000008u; // 802018A4
  c->r[4]=0u+0xFFFFFFFFu; // 802018A8
  c->lr=0x802018B0u; f_801FD984(c); // 802018AC
L_802018B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802018B0
  if (!crb(c,1)) { goto L_802018C0; } // 802018B4
  c->r[3]=c->r[30]|c->r[30]; // 802018B8
  c->lr=0x802018C0u; f_8020224C(c); // 802018BC
L_802018C0:;
  c->r[3]=c->r[30]|c->r[30]; // 802018C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802018C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802018C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802018CC
  c->lr=c->r[0]; // 802018D0
  c->r[1]=c->r[1]+0x00000010u; // 802018D4
  return; // 802018D8
}

// fn_802018DC
void f_802018DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802018DC
  c->r[0]=c->lr; // 802018E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802018E4
  c->r[11]=c->r[1]+0x00000020u; // 802018E8
  c->lr=0x802018F0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802018EC
  cmps(c,0,(int32_t)c->r[3],0); // 802018F0
  c->r[29]=c->r[3]|c->r[3]; // 802018F4
  c->r[30]=c->r[4]|c->r[4]; // 802018F8
  if (crb(c,2)) { goto L_8020195C; } // 802018FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80201900
  cmps(c,0,(int32_t)c->r[0],0); // 80201904
  if (crb(c,2)) { goto L_80201940; } // 80201908
  c->lr=0x80201910u; f_8020071C(c); // 8020190C
  c->r[5]=R32(c->r[29]+0x00000008u); // 80201910
  c->r[4]=0u+0x80340000u; // 80201914
  c->r[31]=R32(c->r[29]+0x00000000u); // 80201918
  c->r[4]=c->r[4]+0xFFFFC8B8u; // 8020191C
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80201920
  c->r[3]=0u+0x00000006u; // 80201924
  c->r[8]=c->r[31]|c->r[31]; // 80201928
  c->r[6]=0u+0x0000000Cu; // 8020192C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201930
  c->lr=0x80201938u; f_801FE6E4(c); // 80201934
  c->r[3]=c->r[31]|c->r[31]; // 80201938
  c->lr=0x80201940u; f_80202098(c); // 8020193C
L_80201940:;
  c->r[3]=c->r[29]+0x00000008u; // 80201940
  c->r[4]=0u+0xFFFFFFFFu; // 80201944
  c->lr=0x8020194Cu; f_80201168(c); // 80201948
  cmps(c,0,(int32_t)c->r[30],0); // 8020194C
  if (!crb(c,1)) { goto L_8020195C; } // 80201950
  c->r[3]=c->r[29]|c->r[29]; // 80201954
  c->lr=0x8020195Cu; f_800D6AD0(c); // 80201958
L_8020195C:;
  c->r[11]=c->r[1]+0x00000020u; // 8020195C
  c->r[3]=c->r[29]|c->r[29]; // 80201960
  c->lr=0x80201968u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201964
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201968
  c->lr=c->r[0]; // 8020196C
  c->r[1]=c->r[1]+0x00000020u; // 80201970
  return; // 80201974
}

// fn_80201978
void f_80201978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201978
  c->r[0]=c->lr; // 8020197C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201980
  c->r[11]=c->r[1]+0x00000020u; // 80201984
  c->lr=0x8020198Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201988
  cmps(c,0,(int32_t)c->r[3],0); // 8020198C
  c->r[29]=c->r[3]|c->r[3]; // 80201990
  c->r[30]=c->r[4]|c->r[4]; // 80201994
  if (crb(c,2)) { goto L_802019FC; } // 80201998
  c->r[31]=R32(c->r[3]+0x00000000u); // 8020199C
  cmps(c,0,(int32_t)c->r[31],0); // 802019A0
  if (crb(c,2)) { goto L_802019E0; } // 802019A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 802019A8
  c->r[4]=0u+0x80340000u; // 802019AC
  c->r[5]=R32(c->r[3]+0x00000008u); // 802019B0
  c->r[8]=c->r[31]|c->r[31]; // 802019B4
  c->r[0]=c->r[0]-c->r[0]; // 802019B8
  c->r[4]=c->r[4]+0xFFFFC8B8u; // 802019BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 802019C0
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802019C4
  c->r[3]=0u+0x00000006u; // 802019C8
  c->r[6]=0u+0x00000004u; // 802019CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802019D0
  c->lr=0x802019D8u; f_801FE6E4(c); // 802019D4
  c->r[3]=c->r[31]|c->r[31]; // 802019D8
  c->lr=0x802019E0u; f_80202098(c); // 802019DC
L_802019E0:;
  c->r[3]=c->r[29]+0x00000008u; // 802019E0
  c->r[4]=0u+0xFFFFFFFFu; // 802019E4
  c->lr=0x802019ECu; f_80201070(c); // 802019E8
  cmps(c,0,(int32_t)c->r[30],0); // 802019EC
  if (!crb(c,1)) { goto L_802019FC; } // 802019F0
  c->r[3]=c->r[29]|c->r[29]; // 802019F4
  c->lr=0x802019FCu; f_800D6AD0(c); // 802019F8
L_802019FC:;
  c->r[11]=c->r[1]+0x00000020u; // 802019FC
  c->r[3]=c->r[29]|c->r[29]; // 80201A00
  c->lr=0x80201A08u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201A04
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201A08
  c->lr=c->r[0]; // 80201A0C
  c->r[1]=c->r[1]+0x00000020u; // 80201A10
  return; // 80201A14
}

// fn_80201A18
void f_80201A18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201A18
  c->r[0]=c->lr; // 80201A1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201A20
  c->r[11]=c->r[1]+0x00000020u; // 80201A24
  c->lr=0x80201A2Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201A28
  cmps(c,0,(int32_t)c->r[3],0); // 80201A2C
  c->r[28]=c->r[3]|c->r[3]; // 80201A30
  c->r[29]=c->r[4]|c->r[4]; // 80201A34
  if (crb(c,2)) { goto L_80201AD8; } // 80201A38
  c->r[5]=R32(c->r[3]+0x00000000u); // 80201A3C
  cmps(c,0,(int32_t)c->r[5],0); // 80201A40
  if (crb(c,2)) { goto L_80201ABC; } // 80201A44
  c->r[30]=R32(c->r[3]+0x00000004u); // 80201A48
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 80201A4C
  c->r[0]=c->r[30]-c->r[30]; // 80201A50
  W32(c->r[3]+0x00000004u,c->r[0]); // 80201A54
  c->r[31]=c->r[5]+c->r[4]; // 80201A58
  goto L_80201A84; // 80201A5C
L_80201A60:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE8u,0); cr0(c,c->r[31]); // 80201A60
  if (crb(c,2)) { goto L_80201A80; } // 80201A64
  c->r[3]=c->r[31]+0x0000000Cu; // 80201A68
  c->r[4]=0u+0xFFFFFFFFu; // 80201A6C
  c->lr=0x80201A74u; f_801FD984(c); // 80201A70
  c->r[3]=c->r[31]|c->r[31]; // 80201A74
  c->r[4]=0u+0xFFFFFFFFu; // 80201A78
  c->lr=0x80201A80u; f_801FD984(c); // 80201A7C
L_80201A80:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80201A80
L_80201A84:;
  cmps(c,0,(int32_t)c->r[30],0); // 80201A84
  if (!crb(c,2)) { IRQCHK(c); goto L_80201A60; } // 80201A88
  c->r[5]=R32(c->r[28]+0x00000008u); // 80201A8C
  c->r[4]=0u+0x80340000u; // 80201A90
  c->r[30]=R32(c->r[28]+0x00000000u); // 80201A94
  c->r[4]=c->r[4]+0xFFFFC8B8u; // 80201A98
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 80201A9C
  c->r[3]=0u+0x00000006u; // 80201AA0
  c->r[8]=c->r[30]|c->r[30]; // 80201AA4
  c->r[6]=0u+0x00000018u; // 80201AA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201AAC
  c->lr=0x80201AB4u; f_801FE6E4(c); // 80201AB0
  c->r[3]=c->r[30]|c->r[30]; // 80201AB4
  c->lr=0x80201ABCu; f_80202098(c); // 80201AB8
L_80201ABC:;
  c->r[3]=c->r[28]+0x00000008u; // 80201ABC
  c->r[4]=0u+0xFFFFFFFFu; // 80201AC0
  c->lr=0x80201AC8u; f_80200F7C(c); // 80201AC4
  cmps(c,0,(int32_t)c->r[29],0); // 80201AC8
  if (!crb(c,1)) { goto L_80201AD8; } // 80201ACC
  c->r[3]=c->r[28]|c->r[28]; // 80201AD0
  c->lr=0x80201AD8u; f_800D6AD0(c); // 80201AD4
L_80201AD8:;
  c->r[11]=c->r[1]+0x00000020u; // 80201AD8
  c->r[3]=c->r[28]|c->r[28]; // 80201ADC
  c->lr=0x80201AE4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201AE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201AE4
  c->lr=c->r[0]; // 80201AE8
  c->r[1]=c->r[1]+0x00000020u; // 80201AEC
  return; // 80201AF0
}

// fn_80201AF4
void f_80201AF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201AF4
  c->r[0]=c->lr; // 80201AF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201AFC
  c->r[11]=c->r[1]+0x00000020u; // 80201B00
  c->lr=0x80201B08u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201B04
  c->r[29]=c->r[3]|c->r[3]; // 80201B08
  c->r[30]=c->r[4]|c->r[4]; // 80201B0C
  c->lr=0x80201B14u; f_801FAF60(c); // 80201B10
  c->r[3]=c->r[29]|c->r[29]; // 80201B14
  c->lr=0x80201B1Cu; f_801FAFA4(c); // 80201B18
  c->r[3]=c->r[30]|c->r[30]; // 80201B1C
  c->lr=0x80201B24u; f_80185588(c); // 80201B20
  c->r[31]=c->r[3]|c->r[3]; // 80201B24
  c->r[3]=c->r[29]|c->r[29]; // 80201B28
  c->r[4]=c->r[31]|c->r[31]; // 80201B2C
  c->lr=0x80201B34u; f_801FDA1C(c); // 80201B30
  c->r[0]=R8(c->r[1]+0x00000008u); // 80201B34
  c->r[3]=c->r[29]|c->r[29]; // 80201B38
  c->r[6]=c->r[30]|c->r[30]; // 80201B3C
  c->r[7]=c->r[30]+c->r[31]; // 80201B40
  W8(c->r[1]+0x00000009u,c->r[0]); // 80201B44
  c->r[8]=c->r[1]+0x00000009u; // 80201B48
  c->r[4]=0u+0x00000000u; // 80201B4C
  c->r[5]=0u+0x00000000u; // 80201B50
  c->lr=0x80201B58u; f_801FDDF4(c); // 80201B54
  c->r[11]=c->r[1]+0x00000020u; // 80201B58
  c->r[3]=c->r[29]|c->r[29]; // 80201B5C
  c->lr=0x80201B64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201B60
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201B64
  c->lr=c->r[0]; // 80201B68
  c->r[1]=c->r[1]+0x00000020u; // 80201B6C
  return; // 80201B70
}

// fn_80201B74
void f_80201B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201B74
  c->r[0]=c->lr; // 80201B78
  cmps(c,0,(int32_t)c->r[3],0); // 80201B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201B84
  c->r[31]=c->r[4]|c->r[4]; // 80201B88
  W32(c->r[1]+0x00000008u,c->r[30]); // 80201B8C
  c->r[30]=c->r[3]|c->r[3]; // 80201B90
  if (crb(c,2)) { goto L_80201C08; } // 80201B94
  c->r[4]=0u+0xFFFFFFFFu; // 80201B98
  c->r[3]=c->r[3]+0x00000204u; // 80201B9C
  c->lr=0x80201BA4u; f_801FD984(c); // 80201BA0
  c->r[3]=c->r[30]+0x000001F4u; // 80201BA4
  c->r[4]=0u+0xFFFFFFFFu; // 80201BA8
  c->lr=0x80201BB0u; f_801FD984(c); // 80201BAC
  c->r[3]=c->r[30]+0x000001E8u; // 80201BB0
  c->r[4]=0u+0xFFFFFFFFu; // 80201BB4
  c->lr=0x80201BBCu; f_801FD984(c); // 80201BB8
  c->r[3]=c->r[30]+0x000001DCu; // 80201BBC
  c->r[4]=0u+0xFFFFFFFFu; // 80201BC0
  c->lr=0x80201BC8u; f_801FD984(c); // 80201BC4
  c->r[3]=c->r[30]+0x000001D0u; // 80201BC8
  c->r[4]=0u+0xFFFFFFFFu; // 80201BCC
  c->lr=0x80201BD4u; f_801FD984(c); // 80201BD0
  c->r[3]=c->r[30]+0x000001C4u; // 80201BD4
  c->r[4]=0u+0xFFFFFFFFu; // 80201BD8
  c->lr=0x80201BE0u; f_801FD984(c); // 80201BDC
  c->r[3]=c->r[30]+0x000001B8u; // 80201BE0
  c->r[4]=0u+0xFFFFFFFFu; // 80201BE4
  c->lr=0x80201BECu; f_801FD984(c); // 80201BE8
  c->r[3]=c->r[30]|c->r[30]; // 80201BEC
  c->r[4]=0u+0x00000000u; // 80201BF0
  c->lr=0x80201BF8u; f_80201834(c); // 80201BF4
  cmps(c,0,(int32_t)c->r[31],0); // 80201BF8
  if (!crb(c,1)) { goto L_80201C08; } // 80201BFC
  c->r[3]=c->r[30]|c->r[30]; // 80201C00
  c->lr=0x80201C08u; f_8020224C(c); // 80201C04
L_80201C08:;
  c->r[3]=c->r[30]|c->r[30]; // 80201C08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201C0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80201C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201C14
  c->lr=c->r[0]; // 80201C18
  c->r[1]=c->r[1]+0x00000010u; // 80201C1C
  return; // 80201C20
}

// fn_80201C24
void f_80201C24(Ctx* __restrict c) {
  f_80201C2C(c); return; // 80201C24
}

// fn_80201C28
void f_80201C28(Ctx* __restrict c) {
  f_801FD580(c); return; // 80201C28
}

// fn_80201C2C
void f_80201C2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201C2C
  c->r[0]=c->lr; // 80201C30
  W32(c->r[1]+0x00000124u,c->r[0]); // 80201C34
  c->r[11]=c->r[1]+0x00000120u; // 80201C38
  c->lr=0x80201C40u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201C3C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80201C40
  c->r[30]=0u+0x00000000u; // 80201C44
  c->r[28]=0u+0x80340000u; // 80201C48
  c->r[31]=c->r[3]|c->r[3]; // 80201C4C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80201C50
  c->r[28]=c->r[28]+0xFFFFCB20u; // 80201C54
  c->r[29]=c->r[1]+0x0000002Cu; // 80201C58
  c->r[3]=c->r[1]+0x0000003Cu; // 80201C5C
  W32(c->r[1]+0x00000030u,c->r[30]); // 80201C60
  W32(c->r[1]+0x00000034u,c->r[30]); // 80201C64
  W32(c->r[1]+0x00000038u,c->r[30]); // 80201C68
  c->lr=0x80201C70u; f_801FAF28(c); // 80201C6C
  c->r[3]=c->r[1]+0x00000048u; // 80201C70
  c->lr=0x80201C78u; f_801FAF28(c); // 80201C74
  c->r[3]=c->r[1]+0x00000054u; // 80201C78
  c->lr=0x80201C80u; f_801FAF28(c); // 80201C7C
  c->r[3]=c->r[1]+0x00000060u; // 80201C80
  c->lr=0x80201C88u; f_801FAF28(c); // 80201C84
  W32(c->r[1]+0x0000006Cu,c->r[30]); // 80201C88
  c->r[3]=c->r[1]+0x0000007Cu; // 80201C8C
  W32(c->r[1]+0x00000070u,c->r[30]); // 80201C90
  W32(c->r[1]+0x00000074u,c->r[30]); // 80201C94
  W8(c->r[1]+0x00000078u,c->r[30]); // 80201C98
  W8(c->r[1]+0x00000079u,c->r[30]); // 80201C9C
  c->lr=0x80201CA4u; f_801FAF28(c); // 80201CA0
  c->r[3]=c->r[1]+0x00000088u; // 80201CA4
  c->lr=0x80201CACu; f_801FAF28(c); // 80201CA8
  c->r[3]=c->r[1]+0x00000094u; // 80201CAC
  c->lr=0x80201CB4u; f_801FAF28(c); // 80201CB0
  c->r[3]=c->r[1]+0x000000A0u; // 80201CB4
  c->lr=0x80201CBCu; f_801FAF28(c); // 80201CB8
  c->r[5]=0u+0x80300000u; // 80201CBC
  c->r[4]=0u+0x80340000u; // 80201CC0
  c->r[5]=c->r[5]+0x00007CDCu; // 80201CC4
  c->r[0]=0u+0xFFFFFFFFu; // 80201CC8
  c->r[4]=c->r[4]+0xFFFFCB05u; // 80201CCC
  W8(c->r[1]+0x000000ACu,c->r[30]); // 80201CD0
  c->r[3]=c->r[1]+0x000000DCu; // 80201CD4
  W32(c->r[1]+0x000000B0u,c->r[28]); // 80201CD8
  W32(c->r[1]+0x000000B4u,c->r[5]); // 80201CDC
  W32(c->r[1]+0x000000B8u,c->r[4]); // 80201CE0
  W32(c->r[1]+0x000000BCu,c->r[0]); // 80201CE4
  W32(c->r[1]+0x000000C4u,c->r[30]); // 80201CE8
  W32(c->r[1]+0x000000C8u,c->r[30]); // 80201CEC
  W32(c->r[1]+0x000000CCu,c->r[30]); // 80201CF0
  W32(c->r[1]+0x000000D0u,c->r[30]); // 80201CF4
  W32(c->r[1]+0x000000D4u,c->r[30]); // 80201CF8
  W32(c->r[1]+0x000000D8u,c->r[30]); // 80201CFC
  c->lr=0x80201D04u; f_801FAF28(c); // 80201D00
  c->r[3]=c->r[1]+0x000000E8u; // 80201D04
  c->lr=0x80201D0Cu; f_801FAF28(c); // 80201D08
  c->r[3]=0u+0x80340000u; // 80201D0C
  c->r[0]=0u+0x00000002u; // 80201D10
  c->r[3]=c->r[3]+0xFFFFCB02u; // 80201D14
  cmps(c,0,(int32_t)c->r[28],0); // 80201D18
  W32(c->r[1]+0x000000F4u,c->r[3]); // 80201D1C
  c->r[26]=0u+0x00000000u; // 80201D20
  c->r[27]=0u+0x00000000u; // 80201D24
  c->r[30]=0u+0x00000000u; // 80201D28
  W32(c->r[1]+0x000000F8u,c->r[0]); // 80201D2C
  if (crb(c,2)) { goto L_80201D64; } // 80201D30
  c->r[4]=c->r[28]|c->r[28]; // 80201D34
  c->r[3]=c->r[1]+0x00000008u; // 80201D38
  c->lr=0x80201D40u; f_80201AF4(c); // 80201D3C
  c->r[5]=0u+0x80340000u; // 80201D40
  c->r[3]=c->r[1]+0x00000014u; // 80201D44
  c->r[4]=c->r[1]+0x00000008u; // 80201D48
  c->r[26]=0u+0x00000001u; // 80201D4C
  c->r[5]=c->r[5]+0xFFFFCAF9u; // 80201D50
  c->lr=0x80201D58u; f_801FCACC(c); // 80201D54
  c->r[4]=c->r[1]+0x00000014u; // 80201D58
  c->r[27]=0u+0x00000001u; // 80201D5C
  goto L_80201D7C; // 80201D60
L_80201D64:;
  c->r[4]=0u+0x80340000u; // 80201D64
  c->r[3]=c->r[1]+0x00000020u; // 80201D68
  c->r[4]=c->r[4]+0xFFFFCAF8u; // 80201D6C
  c->lr=0x80201D74u; f_80201AF4(c); // 80201D70
  c->r[30]=0u+0x00000001u; // 80201D74
  c->r[4]=c->r[1]+0x00000020u; // 80201D78
L_80201D7C:;
  c->r[3]=c->r[29]+0x000000B0u; // 80201D7C
  c->lr=0x80201D84u; f_801FBE10(c); // 80201D80
  cmps(c,0,(int32_t)c->r[30],0); // 80201D84
  if (crb(c,2)) { goto L_80201D98; } // 80201D88
  c->r[3]=c->r[1]+0x00000020u; // 80201D8C
  c->r[4]=0u+0xFFFFFFFFu; // 80201D90
  c->lr=0x80201D98u; f_801FD984(c); // 80201D94
L_80201D98:;
  cmps(c,0,(int32_t)c->r[27],0); // 80201D98
  if (crb(c,2)) { goto L_80201DAC; } // 80201D9C
  c->r[3]=c->r[1]+0x00000014u; // 80201DA0
  c->r[4]=0u+0xFFFFFFFFu; // 80201DA4
  c->lr=0x80201DACu; f_801FD984(c); // 80201DA8
L_80201DAC:;
  cmps(c,0,(int32_t)c->r[26],0); // 80201DAC
  if (crb(c,2)) { goto L_80201DC0; } // 80201DB0
  c->r[3]=c->r[1]+0x00000008u; // 80201DB4
  c->r[4]=0u+0xFFFFFFFFu; // 80201DB8
  c->lr=0x80201DC0u; f_801FD984(c); // 80201DBC
L_80201DC0:;
  c->r[3]=c->r[1]+0x0000002Cu; // 80201DC0
  c->lr=0x80201DC8u; f_8020235C(c); // 80201DC4
  c->r[5]=R32(c->r[31]+0x00000000u); // 80201DC8
  c->r[4]=0u+0x80340000u; // 80201DCC
  c->r[4]=c->r[4]+0xFFFFCB32u; // 80201DD0
  c->r[3]=c->r[1]+0x0000002Cu; // 80201DD4
  c->r[0]=R32(c->r[5]+0x00000218u); // 80201DD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80201DDC
  if (!crb(c,2)) { goto L_80201DEC; } // 80201DE0
  c->r[5]=c->r[5]+0x00000219u; // 80201DE4
  goto L_80201DF0; // 80201DE8
L_80201DEC:;
  c->r[5]=R32(c->r[5]+0x00000220u); // 80201DEC
L_80201DF0:;
  c->lr=0x80201DF4u; f_80203128(c); // 80201DF0
  c->r[3]=c->r[1]+0x0000002Cu; // 80201DF4
  c->lr=0x80201DFCu; f_80202F78(c); // 80201DF8
  c->r[4]=R32(c->r[31]+0x00000000u); // 80201DFC
  c->r[3]=c->r[1]+0x0000002Cu; // 80201E00
  c->r[4]=c->r[4]+0x0000001Cu; // 80201E04
  c->lr=0x80201E0Cu; f_80203418(c); // 80201E08
  c->r[0]=R32(c->r[1]+0x00000070u); // 80201E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80201E10
  if (!crb(c,2)) { goto L_80201E24; } // 80201E14
  c->r[3]=c->r[31]|c->r[31]; // 80201E18
  c->r[4]=c->r[1]+0x0000002Cu; // 80201E1C
  c->lr=0x80201E24u; f_80201E50(c); // 80201E20
L_80201E24:;
  c->r[30]=R32(c->r[1]+0x00000070u); // 80201E24
  c->r[3]=c->r[1]+0x0000002Cu; // 80201E28
  c->r[4]=0u+0xFFFFFFFFu; // 80201E2C
  c->lr=0x80201E34u; f_8020125C(c); // 80201E30
  c->r[11]=c->r[1]+0x00000120u; // 80201E34
  c->r[3]=c->r[30]|c->r[30]; // 80201E38
  c->lr=0x80201E40u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201E3C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80201E40
  c->lr=c->r[0]; // 80201E44
  c->r[1]=c->r[1]+0x00000120u; // 80201E48
  return; // 80201E4C
}

// fn_80201E50
void f_80201E50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201E50
  c->r[0]=c->lr; // 80201E54
  W32(c->r[1]+0x00000054u,c->r[0]); // 80201E58
  c->r[11]=c->r[1]+0x00000050u; // 80201E5C
  c->lr=0x80201E64u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201E60
  c->r[29]=c->r[3]|c->r[3]; // 80201E64
  c->r[30]=c->r[4]|c->r[4]; // 80201E68
  c->r[3]=c->r[1]+0x0000002Cu; // 80201E6C
  c->lr=0x80201E74u; f_801FAF28(c); // 80201E70
  c->r[3]=c->r[1]+0x00000020u; // 80201E74
  c->lr=0x80201E7Cu; f_801FAF28(c); // 80201E78
  c->r[4]=0u+0x80340000u; // 80201E7C
  c->r[3]=c->r[1]+0x00000014u; // 80201E80
  c->r[4]=c->r[4]+0xFFFFCB3Fu; // 80201E84
  c->lr=0x80201E8Cu; f_80201AF4(c); // 80201E88
  c->r[3]=c->r[30]|c->r[30]; // 80201E8C
  c->r[4]=c->r[1]+0x00000014u; // 80201E90
  c->r[5]=c->r[1]+0x0000002Cu; // 80201E94
  c->r[6]=0u+0x00000000u; // 80201E98
  c->lr=0x80201EA0u; f_80203DD4(c); // 80201E9C
  c->r[31]=c->r[3]|c->r[3]; // 80201EA0
  c->r[3]=c->r[1]+0x00000014u; // 80201EA4
  c->r[4]=0u+0xFFFFFFFFu; // 80201EA8
  c->lr=0x80201EB0u; f_801FD984(c); // 80201EAC
  cmps(c,0,(int32_t)c->r[31],0); // 80201EB0
  if (!crb(c,2)) { goto L_80201F28; } // 80201EB4
  c->r[4]=0u+0x80340000u; // 80201EB8
  c->r[3]=c->r[1]+0x00000008u; // 80201EBC
  c->r[4]=c->r[4]+0xFFFFCB54u; // 80201EC0
  c->lr=0x80201EC8u; f_80201AF4(c); // 80201EC4
  c->r[3]=c->r[30]|c->r[30]; // 80201EC8
  c->r[4]=c->r[1]+0x00000008u; // 80201ECC
  c->r[5]=c->r[1]+0x00000020u; // 80201ED0
  c->r[6]=0u+0x00000000u; // 80201ED4
  c->lr=0x80201EDCu; f_80203E20(c); // 80201ED8
  c->r[31]=c->r[3]|c->r[3]; // 80201EDC
  c->r[3]=c->r[1]+0x00000008u; // 80201EE0
  c->r[4]=0u+0xFFFFFFFFu; // 80201EE4
  c->lr=0x80201EECu; f_801FD984(c); // 80201EE8
  cmps(c,0,(int32_t)c->r[31],0); // 80201EEC
  if (!crb(c,2)) { goto L_80201F28; } // 80201EF0
  c->r[3]=R32(c->r[29]+0x00000000u); // 80201EF4
  c->r[4]=c->r[1]+0x00000020u; // 80201EF8
  c->r[3]=c->r[3]+0x00000104u; // 80201EFC
  c->lr=0x80201F04u; f_801FBE10(c); // 80201F00
  c->r[3]=c->r[1]+0x0000002Cu; // 80201F04
  c->lr=0x80201F0Cu; f_801FBAA0(c); // 80201F08
  c->r[0]=cntlz(c->r[3]); // 80201F0C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80201F10
  if (!crb(c,2)) { goto L_80201F28; } // 80201F14
  c->r[3]=R32(c->r[29]+0x00000000u); // 80201F18
  c->r[4]=c->r[1]+0x0000002Cu; // 80201F1C
  c->r[3]=c->r[3]+0x000000F8u; // 80201F20
  c->lr=0x80201F28u; f_801FBE10(c); // 80201F24
L_80201F28:;
  c->r[31]=R32(c->r[30]+0x00000044u); // 80201F28
  c->r[3]=c->r[1]+0x00000020u; // 80201F2C
  c->r[4]=0u+0xFFFFFFFFu; // 80201F30
  c->lr=0x80201F38u; f_801FD984(c); // 80201F34
  c->r[3]=c->r[1]+0x0000002Cu; // 80201F38
  c->r[4]=0u+0xFFFFFFFFu; // 80201F3C
  c->lr=0x80201F44u; f_801FD984(c); // 80201F40
  c->r[11]=c->r[1]+0x00000050u; // 80201F44
  c->r[3]=c->r[31]|c->r[31]; // 80201F48
  c->lr=0x80201F50u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201F4C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80201F50
  c->lr=c->r[0]; // 80201F54
  c->r[1]=c->r[1]+0x00000050u; // 80201F58
  return; // 80201F5C
}

// fn_80201F60
void f_80201F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201F60
  c->r[0]=c->lr; // 80201F64
  cmps(c,0,(int32_t)c->r[3],0); // 80201F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201F70
  c->r[31]=c->r[4]|c->r[4]; // 80201F74
  W32(c->r[1]+0x00000008u,c->r[30]); // 80201F78
  c->r[30]=c->r[3]|c->r[3]; // 80201F7C
  if (crb(c,2)) { goto L_80201FA4; } // 80201F80
  if (crb(c,2)) { goto L_80201F94; } // 80201F84
  c->r[4]=0u+0xFFFFFFFFu; // 80201F88
  c->r[3]=c->r[3]+0x00000008u; // 80201F8C
  c->lr=0x80201F94u; f_801FD984(c); // 80201F90
L_80201F94:;
  cmps(c,0,(int32_t)c->r[31],0); // 80201F94
  if (!crb(c,1)) { goto L_80201FA4; } // 80201F98
  c->r[3]=c->r[30]|c->r[30]; // 80201F9C
  c->lr=0x80201FA4u; f_8020224C(c); // 80201FA0
L_80201FA4:;
  c->r[3]=c->r[30]|c->r[30]; // 80201FA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201FA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80201FAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201FB0
  c->lr=c->r[0]; // 80201FB4
  c->r[1]=c->r[1]+0x00000010u; // 80201FB8
  return; // 80201FBC
}

// fn_80201FC0
void f_80201FC0(Ctx* __restrict c) {
  return; // 80201FC0
}

// fn_80201FC4
void f_80201FC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201FC4
  c->r[0]=c->lr; // 80201FC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201FCC
  c->r[11]=c->r[1]+0x00000020u; // 80201FD0
  c->lr=0x80201FD8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201FD4
  c->r[31]=0u+0x803D0000u; // 80201FD8
  c->r[29]=c->r[3]|c->r[3]; // 80201FDC
  c->r[30]=c->r[4]|c->r[4]; // 80201FE0
  c->r[3]=c->r[31]+0x00007FA8u; // 80201FE4
  c->lr=0x80201FECu; f_801FA868(c); // 80201FE8
  c->r[3]=0u+0x803D0000u; // 80201FEC
  c->r[0]=c->r[29]+0x0000001Fu; // 80201FF0
  c->r[12]=R32(c->r[3]+0x00007FA0u); // 80201FF4
  c->r[4]=c->r[30]|c->r[30]; // 80201FF8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80201FFC
  c->ctr=c->r[12]; // 80202000
  if (true) { c->lr=0x80202008u; dispatch(c,c->ctr); } // 80202004
  c->r[30]=c->r[3]|c->r[3]; // 80202008
  c->r[3]=c->r[31]+0x00007FA8u; // 8020200C
  c->lr=0x80202014u; f_801FA8E0(c); // 80202010
  c->r[11]=c->r[1]+0x00000020u; // 80202014
  c->r[3]=c->r[30]|c->r[30]; // 80202018
  c->lr=0x80202020u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020201C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80202020
  c->lr=c->r[0]; // 80202024
  c->r[1]=c->r[1]+0x00000020u; // 80202028
  return; // 8020202C
}

// fn_80202030
void f_80202030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202030
  c->r[0]=c->lr; // 80202034
  W32(c->r[1]+0x00000014u,c->r[0]); // 80202038
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020203C
  c->r[31]=0u+0x803D0000u; // 80202040
  W32(c->r[1]+0x00000008u,c->r[30]); // 80202044
  c->r[30]=c->r[3]|c->r[3]; // 80202048
  c->r[3]=c->r[31]+0x00007FA8u; // 8020204C
  c->lr=0x80202054u; f_801FA868(c); // 80202050
  c->r[3]=0u+0x803D0000u; // 80202054
  c->r[0]=c->r[30]+0x0000001Fu; // 80202058
  c->r[12]=R32(c->r[3]+0x00007FA0u); // 8020205C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80202060
  c->r[4]=0u+0x00000020u; // 80202064
  c->ctr=c->r[12]; // 80202068
  if (true) { c->lr=0x80202070u; dispatch(c,c->ctr); } // 8020206C
  c->r[30]=c->r[3]|c->r[3]; // 80202070
  c->r[3]=c->r[31]+0x00007FA8u; // 80202074
  c->lr=0x8020207Cu; f_801FA8E0(c); // 80202078
  c->r[3]=c->r[30]|c->r[30]; // 8020207C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80202080
  c->r[30]=R32(c->r[1]+0x00000008u); // 80202084
  c->r[0]=R32(c->r[1]+0x00000014u); // 80202088
  c->lr=c->r[0]; // 8020208C
  c->r[1]=c->r[1]+0x00000010u; // 80202090
  return; // 80202094
}

// fn_80202098
void f_80202098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202098
  c->r[0]=c->lr; // 8020209C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802020A0
  c->r[11]=c->r[1]+0x00000030u; // 802020A4
  c->lr=0x802020ACu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802020A8
  c->r[31]=c->r[1]|c->r[1]; // 802020AC
  cmps(c,0,(int32_t)c->r[3],0); // 802020B0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 802020B4
  c->r[29]=c->r[3]|c->r[3]; // 802020B8
  if (crb(c,2)) { goto L_80202138; } // 802020BC
  c->r[30]=0u+0x803D0000u; // 802020C0
  c->r[3]=c->r[30]+0x00007FA8u; // 802020C4
  c->lr=0x802020CCu; f_801FA868(c); // 802020C8
  c->r[4]=0u+0x803D0000u; // 802020CC
  c->r[3]=c->r[29]|c->r[29]; // 802020D0
  c->r[12]=R32(c->r[4]+0x00007FA4u); // 802020D4
  c->ctr=c->r[12]; // 802020D8
  if (true) { c->lr=0x802020E0u; dispatch(c,c->ctr); } // 802020DC
  c->r[3]=c->r[30]+0x00007FA8u; // 802020E0
  c->lr=0x802020E8u; f_801FA8E0(c); // 802020E4
  goto L_80202138; // 802020E8
  c->r[4]=0u+0x80340000u; // 802020EC
  c->r[3]=0u+0x00000001u; // 802020F0
  c->r[4]=c->r[4]+0xFFFFCBC1u; // 802020F4
  c->r[5]=0u+0x00000056u; // 802020F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802020FC
  c->lr=0x80202104u; f_801FE6E4(c); // 80202100
  goto L_80202120; // 80202104
  c->r[4]=0u+0x80340000u; // 80202108
  c->r[3]=0u+0x00000001u; // 8020210C
  c->r[4]=c->r[4]+0xFFFFCC1Eu; // 80202110
  c->r[5]=0u+0x00000056u; // 80202114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202118
  c->lr=0x80202120u; f_801FE6E4(c); // 8020211C
L_80202120:;
  c->r[3]=c->r[31]+0x00000008u; // 80202120
  c->lr=0x80202128u; f_80187EEC(c); // 80202124
  c->r[0]=c->r[0]|0x00000000u; // 80202128
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020212C
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 80202130
  W32(c->r[1]+0x00000000u,c->r[0]); // 80202134
L_80202138:;
  c->r[10]=c->r[31]|c->r[31]; // 80202138
  c->r[11]=c->r[10]+0x00000030u; // 8020213C
  c->lr=0x80202144u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202140
  c->r[10]=R32(c->r[1]+0x00000000u); // 80202144
  c->r[0]=R32(c->r[10]+0x00000004u); // 80202148
  c->r[1]=c->r[10]|c->r[10]; // 8020214C
  c->lr=c->r[0]; // 80202150
  return; // 80202154
}

// fn_80202158
void f_80202158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202158
  c->r[0]=c->lr; // 8020215C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80202160
  c->r[11]=c->r[1]+0x00000020u; // 80202164
  c->lr=0x8020216Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202168
  c->r[31]=0u+0x803D0000u; // 8020216C
  c->r[30]=c->r[4]|c->r[4]; // 80202170
  c->r[31]=c->r[31]+0x00007FA0u; // 80202174
  c->r[29]=c->r[3]|c->r[3]; // 80202178
  c->r[3]=c->r[31]+0x00000008u; // 8020217C
  c->r[4]=0u+0x00000001u; // 80202180
  c->r[5]=0u+0x00000000u; // 80202184
  c->r[6]=0u+0x00000000u; // 80202188
  c->lr=0x80202190u; f_801FA7F0(c); // 8020218C
  W32(c->r[31]+0x00000000u,c->r[29]); // 80202190
  c->r[11]=c->r[1]+0x00000020u; // 80202194
  c->r[3]=0u+0x00000000u; // 80202198
  W32(c->r[31]+0x00000004u,c->r[30]); // 8020219C
  c->lr=0x802021A4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802021A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802021A4
  c->lr=c->r[0]; // 802021A8
  c->r[1]=c->r[1]+0x00000020u; // 802021AC
  return; // 802021B0
}

// fn_802021B4
void f_802021B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802021B4
  c->r[0]=c->lr; // 802021B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802021BC
  c->r[11]=c->r[1]+0x00000020u; // 802021C0
  c->lr=0x802021C8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802021C4
  c->r[31]=0u+0x80340000u; // 802021C8
  c->r[29]=c->r[3]|c->r[3]; // 802021CC
  c->r[31]=c->r[31]+0xFFFFCBB0u; // 802021D0
  c->lr=0x802021D8u; f_80202030(c); // 802021D4
  cmps(c,0,(int32_t)c->r[3],0); // 802021D8
  c->r[30]=c->r[3]|c->r[3]; // 802021DC
  if (!crb(c,2)) { goto L_80202218; } // 802021E0
  c->r[5]=c->r[29]|c->r[29]; // 802021E4
  c->r[4]=c->r[31]+0x000000C1u; // 802021E8
  c->r[3]=0u+0x00000001u; // 802021EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802021F0
  c->lr=0x802021F8u; f_801FE6E4(c); // 802021F4
  c->r[4]=0u+0x80330000u; // 802021F8
  c->r[5]=0u+0x80180000u; // 802021FC
  c->r[4]=c->r[4]+0x00000178u; // 80202200
  c->r[3]=c->r[31]+0x000000D9u; // 80202204
  W32(c->r[1]+0x00000008u,c->r[4]); // 80202208
  c->r[4]=c->r[1]+0x00000008u; // 8020220C
  c->r[5]=c->r[5]+0x0000570Cu; // 80202210
  c->lr=0x80202218u; f_80187DA8(c); // 80202214
L_80202218:;
  c->r[5]=c->r[29]|c->r[29]; // 80202218
  c->r[6]=c->r[30]|c->r[30]; // 8020221C
  c->r[4]=c->r[31]+0x000000FBu; // 80202220
  c->r[3]=0u+0x00000006u; // 80202224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202228
  c->lr=0x80202230u; f_801FE6E4(c); // 8020222C
  c->r[11]=c->r[1]+0x00000020u; // 80202230
  c->r[3]=c->r[30]|c->r[30]; // 80202234
  c->lr=0x8020223Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202238
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020223C
  c->lr=c->r[0]; // 80202240
  c->r[1]=c->r[1]+0x00000020u; // 80202244
  return; // 80202248
}

// dtor_8020224C
void f_8020224C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020224C
  c->r[0]=c->lr; // 80202250
  c->r[4]=0u+0x80340000u; // 80202254
  W32(c->r[1]+0x00000014u,c->r[0]); // 80202258
  c->r[4]=c->r[4]+0xFFFFCCBFu; // 8020225C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80202260
  c->r[31]=c->r[3]|c->r[3]; // 80202264
  c->r[5]=c->r[31]|c->r[31]; // 80202268
  c->r[3]=0u+0x00000006u; // 8020226C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202270
  c->lr=0x80202278u; f_801FE6E4(c); // 80202274
  c->r[3]=c->r[31]|c->r[31]; // 80202278
  c->lr=0x80202280u; f_80202098(c); // 8020227C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80202280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80202284
  c->lr=c->r[0]; // 80202288
  c->r[1]=c->r[1]+0x00000010u; // 8020228C
  return; // 80202290
}

// fn_80202294
void f_80202294(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 80202294
  if (crb(c,2)) { goto L_802022A4; } // 80202298
  cmpu(c,0,c->r[4],0x00000040u); // 8020229C
  if (!crb(c,0)) { goto L_802022AC; } // 802022A0
L_802022A4:;
  c->r[3]=0u+0xFFFFF05Cu; // 802022A4
  return; // 802022A8
L_802022AC:;
  c->r[5]=c->r[3]+0x0000001Fu; // 802022AC
  c->r[0]=c->r[3]+c->r[4]; // 802022B0
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFE0u; // 802022B4
  c->r[3]=0u+0x00000000u; // 802022B8
  c->r[5]=c->r[6]+0x0000002Bu; // 802022BC
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFE0u; // 802022C0
  c->r[0]=c->r[0]-c->r[5]; // 802022C4
  W32(c->r[6]+0x00000000u,c->r[5]); // 802022C8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802022CC
  W32(c->r[6]+0x00000004u,c->r[0]); // 802022D0
  W32(c->r[6]+0x00000008u,c->r[4]); // 802022D4
  return; // 802022D8
}

// fn_802022DC
void f_802022DC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 802022DC
  if (!crb(c,2)) { goto L_802022EC; } // 802022E0
  c->r[3]=0u+0x00000000u; // 802022E4
  return; // 802022E8
L_802022EC:;
  c->r[0]=c->r[3]+0x0000001Fu; // 802022EC
  c->r[3]=c->r[4]+c->r[6]; // 802022F0
  c->r[8]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802022F4
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 802022F8
  c->r[9]=R32(c->r[8]+0x00000000u); // 802022FC
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 80202300
  c->r[3]=c->r[6]+0xFFFFFFFFu; // 80202304
  c->r[0]=R32(c->r[8]+0x00000004u); // 80202308
  c->r[5]=c->r[9]+c->r[5]; // 8020230C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80202310
  c->r[4]=c->r[4]&~c->r[3]; // 80202314
  c->r[3]=c->r[5]&~c->r[7]; // 80202318
  c->r[5]=c->r[3]-c->r[9]; // 8020231C
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 80202320
  c->r[5]=sraw(c,c->r[5],2); // 80202324
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 80202328
  c->r[4]=c->r[5]+c->r[4]; // 8020232C
  cmpu(c,0,c->r[4],c->r[0]); // 80202330
  if (!crb(c,1)) { goto L_80202340; } // 80202334
  c->r[3]=0u+0x00000000u; // 80202338
  return; // 8020233C
L_80202340:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80202340
  c->r[0]=c->r[9]+c->r[0]; // 80202344
  W32(c->r[8]+0x00000000u,c->r[0]); // 80202348
  c->r[0]=R32(c->r[8]+0x00000004u); // 8020234C
  c->r[0]=c->r[0]-c->r[4]; // 80202350
  W32(c->r[8]+0x00000004u,c->r[0]); // 80202354
  return; // 80202358
}

// fn_8020235C
void f_8020235C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020235C
  c->r[0]=c->lr; // 80202360
  W32(c->r[1]+0x00000434u,c->r[0]); // 80202364
  c->r[11]=c->r[1]+0x00000430u; // 80202368
  c->lr=0x80202370u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020236C
  c->r[0]=R32(c->r[3]+0x00000084u); // 80202370
  c->r[30]=0u+0x80300000u; // 80202374
  c->r[31]=0u+0x80340000u; // 80202378
  c->r[29]=c->r[3]|c->r[3]; // 8020237C
  cmps(c,0,(int32_t)c->r[0],0); // 80202380
  c->r[30]=c->r[30]+0x00007CD8u; // 80202384
  c->r[31]=c->r[31]+0xFFFFCD40u; // 80202388
  if (crb(c,2)) { goto L_8020239C; } // 8020238C
  c->r[0]=R32(c->r[3]+0x00000088u); // 80202390
  cmps(c,0,(int32_t)c->r[0],0); // 80202394
  if (!crb(c,2)) { goto L_802023A8; } // 80202398
L_8020239C:;
  c->r[0]=0u+0xFFFFF05Fu; // 8020239C
  W32(c->r[3]+0x00000044u,c->r[0]); // 802023A0
  goto L_802029E8; // 802023A4
L_802023A8:;
  c->lr=0x802023ACu; f_801FAB14(c); // 802023A8
  c->r[0]=0u+0x00000000u; // 802023AC
  c->r[26]=c->r[4]|c->r[4]; // 802023B0
  W8(c->r[1]+0x0000010Bu,c->r[0]); // 802023B4
  c->r[27]=c->r[3]|c->r[3]; // 802023B8
  c->r[25]=c->r[1]+0x0000010Bu; // 802023BC
  c->r[28]=0u+0x00000030u; // 802023C0
L_802023C4:;
  c->r[3]=c->r[27]|c->r[27]; // 802023C4
  c->r[4]=c->r[26]|c->r[26]; // 802023C8
  c->r[6]=0u+0x0000000Au; // 802023CC
  c->r[5]=0u+0x00000000u; // 802023D0
  c->lr=0x802023D8u; f_8018615C(c); // 802023D4
  c->r[0]=addc(c,c->r[4],c->r[28],0); // 802023D8
  c->r[3]=c->r[27]|c->r[27]; // 802023DC
  {uint32_t ea=c->r[25]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[25]=ea;} // 802023E0
  c->r[4]=c->r[26]|c->r[26]; // 802023E4
  c->r[5]=0u+0x00000000u; // 802023E8
  c->r[6]=0u+0x0000000Au; // 802023EC
  c->lr=0x802023F4u; f_80185F38(c); // 802023F0
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 802023F4
  c->r[26]=c->r[4]|c->r[4]; // 802023F8
  c->r[27]=c->r[3]|c->r[3]; // 802023FC
  if (!crb(c,2)) { IRQCHK(c); goto L_802023C4; } // 80202400
  c->r[3]=R32(c->r[29]+0x00000000u); // 80202404
  c->r[3]=c->r[3]+0x000001A0u; // 80202408
  c->lr=0x80202410u; f_80200228(c); // 8020240C
  c->r[4]=0u+0x80340000u; // 80202410
  c->r[28]=0u+0x803E0000u; // 80202414
  c->r[6]=R32(c->r[4]+0xFFFFF7A4u); // 80202418
  c->r[7]=c->r[3]|c->r[3]; // 8020241C
  c->r[8]=c->r[25]|c->r[25]; // 80202420
  c->r[3]=c->r[28]+0x00004220u; // 80202424
  c->r[5]=c->r[31]+0x00000000u; // 80202428
  c->r[4]=0u+0x00000080u; // 8020242C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202430
  c->lr=0x80202438u; f_8018E874(c); // 80202434
  c->r[3]=c->r[29]+0x00000074u; // 80202438
  c->r[4]=c->r[28]+0x00004220u; // 8020243C
  c->lr=0x80202444u; f_801FB0B8(c); // 80202440
  c->r[6]=R32(c->r[29]+0x00000088u); // 80202444
  c->r[0]=c->r[28]+0x00004220u; // 80202448
  c->r[9]=R32(c->r[29]+0x00000084u); // 8020244C
  c->r[3]=c->r[1]+0x0000010Cu; // 80202450
  c->r[7]=c->r[6]|c->r[6]; // 80202454
  c->r[8]=c->r[6]|c->r[6]; // 80202458
  W32(c->r[1]+0x00000008u,c->r[9]); // 8020245C
  c->r[10]=c->r[6]|c->r[6]; // 80202460
  c->r[5]=c->r[30]+0x0000000Cu; // 80202464
  c->r[4]=0u+0x000002F9u; // 80202468
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8020246C
  c->r[11]=R32(c->r[29]+0x0000008Cu); // 80202470
  W32(c->r[1]+0x00000010u,c->r[11]); // 80202474
  W32(c->r[1]+0x00000014u,c->r[6]); // 80202478
  W32(c->r[1]+0x00000018u,c->r[6]); // 8020247C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80202480
  W32(c->r[1]+0x00000020u,c->r[6]); // 80202484
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202488
  c->lr=0x80202490u; f_8018E874(c); // 8020248C
  c->r[3]=c->r[1]+0x00000070u; // 80202490
  c->r[4]=c->r[31]+0x00000009u; // 80202494
  c->lr=0x8020249Cu; f_80201AF4(c); // 80202498
  c->r[3]=c->r[29]+0x0000001Cu; // 8020249C
  c->r[4]=c->r[1]+0x00000070u; // 802024A0
  c->lr=0x802024A8u; f_80202A00(c); // 802024A4
  c->r[3]=c->r[1]+0x00000070u; // 802024A8
  c->r[4]=0u+0xFFFFFFFFu; // 802024AC
  c->lr=0x802024B4u; f_801FD984(c); // 802024B0
  c->r[3]=c->r[29]+0x0000001Cu; // 802024B4
  c->r[4]=c->r[1]+0x0000010Cu; // 802024B8
  c->lr=0x802024C0u; f_80208974(c); // 802024BC
  c->r[25]=R32(c->r[29]+0x00000000u); // 802024C0
  c->r[0]=R8(c->r[25]+0x00000198u); // 802024C4
  cmps(c,0,(int32_t)c->r[0],0); // 802024C8
  if (crb(c,2)) { goto L_80202510; } // 802024CC
  c->r[26]=R32(c->r[29]+0x00000088u); // 802024D0
  c->r[3]=c->r[29]+0x0000001Cu; // 802024D4
  c->r[4]=c->r[31]+0x0000000Au; // 802024D8
  c->lr=0x802024E0u; f_80208974(c); // 802024DC
  c->r[4]=c->r[26]|c->r[26]; // 802024E0
  c->lr=0x802024E8u; f_80208974(c); // 802024E4
  c->r[4]=c->r[31]+0x0000000Eu; // 802024E8
  c->lr=0x802024F0u; f_80208974(c); // 802024EC
  c->r[4]=c->r[25]+0x000001A0u; // 802024F0
  c->lr=0x802024F8u; f_80208944(c); // 802024F4
  c->r[4]=c->r[31]+0x00000019u; // 802024F8
  c->lr=0x80202500u; f_80208974(c); // 802024FC
  c->r[4]=c->r[26]|c->r[26]; // 80202500
  c->lr=0x80202508u; f_80208974(c); // 80202504
  c->r[4]=c->r[31]+0x0000001Cu; // 80202508
  c->lr=0x80202510u; f_80208974(c); // 8020250C
L_80202510:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80202510
  c->r[3]=c->r[3]+0x000000C8u; // 80202514
  c->lr=0x8020251Cu; f_801FBAA0(c); // 80202518
  c->r[0]=cntlz(c->r[3]); // 8020251C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80202520
  if (!crb(c,2)) { goto L_80202590; } // 80202524
  c->r[3]=c->r[29]+0x0000001Cu; // 80202528
  c->r[4]=c->r[31]+0x0000000Au; // 8020252C
  c->lr=0x80202534u; f_80208974(c); // 80202530
  c->r[4]=R32(c->r[29]+0x00000088u); // 80202534
  c->lr=0x8020253Cu; f_80208974(c); // 80202538
  c->r[4]=c->r[31]+0x00000028u; // 8020253C
  c->lr=0x80202544u; f_80208974(c); // 80202540
  c->r[0]=R8(c->r[29]+0x00000080u); // 80202544
  cmps(c,0,(int32_t)c->r[0],0); // 80202548
  if (crb(c,2)) { goto L_80202564; } // 8020254C
  c->r[4]=R32(c->r[29]+0x00000000u); // 80202550
  c->r[3]=c->r[29]+0x0000001Cu; // 80202554
  c->r[4]=c->r[4]+0x000000D4u; // 80202558
  c->lr=0x80202560u; f_80208944(c); // 8020255C
  goto L_80202574; // 80202560
L_80202564:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 80202564
  c->r[3]=c->r[29]+0x0000001Cu; // 80202568
  c->r[4]=c->r[4]+0x000000ECu; // 8020256C
  c->lr=0x80202574u; f_80208944(c); // 80202570
L_80202574:;
  c->r[3]=c->r[29]+0x0000001Cu; // 80202574
  c->r[4]=c->r[31]+0x00000019u; // 80202578
  c->lr=0x80202580u; f_80208974(c); // 8020257C
  c->r[4]=R32(c->r[29]+0x00000088u); // 80202580
  c->lr=0x80202588u; f_80208974(c); // 80202584
  c->r[4]=c->r[31]+0x00000036u; // 80202588
  c->lr=0x80202590u; f_80208974(c); // 8020258C
L_80202590:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80202590
  c->r[3]=c->r[3]+0x000000BCu; // 80202594
  c->lr=0x8020259Cu; f_801FBAA0(c); // 80202598
  c->r[0]=cntlz(c->r[3]); // 8020259C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802025A0
  if (!crb(c,2)) { goto L_802025EC; } // 802025A4
  c->r[25]=R32(c->r[29]+0x00000088u); // 802025A8
  c->r[3]=c->r[29]+0x0000001Cu; // 802025AC
  c->r[4]=c->r[31]+0x0000000Au; // 802025B0
  c->lr=0x802025B8u; f_80208974(c); // 802025B4
  c->r[4]=c->r[25]|c->r[25]; // 802025B8
  c->lr=0x802025C0u; f_80208974(c); // 802025BC
  c->r[4]=c->r[31]+0x00000045u; // 802025C0
  c->lr=0x802025C8u; f_80208974(c); // 802025C4
  c->r[4]=R32(c->r[29]+0x00000000u); // 802025C8
  c->r[4]=c->r[4]+0x000000BCu; // 802025CC
  c->lr=0x802025D4u; f_80208944(c); // 802025D0
  c->r[4]=c->r[31]+0x00000019u; // 802025D4
  c->lr=0x802025DCu; f_80208974(c); // 802025D8
  c->r[4]=c->r[25]|c->r[25]; // 802025DC
  c->lr=0x802025E4u; f_80208974(c); // 802025E0
  c->r[4]=c->r[31]+0x00000051u; // 802025E4
  c->lr=0x802025ECu; f_80208974(c); // 802025E8
L_802025EC:;
  c->r[25]=R32(c->r[29]+0x00000088u); // 802025EC
  c->r[4]=c->r[30]+0x00000008u; // 802025F0
  c->r[3]=c->r[25]|c->r[25]; // 802025F4
  c->lr=0x802025FCu; f_80190160(c); // 802025F8
  cmps(c,0,(int32_t)c->r[3],0); // 802025FC
  if (crb(c,2)) { goto L_80202618; } // 80202600
  c->r[3]=c->r[25]|c->r[25]; // 80202604
  c->r[4]=c->r[30]+0x00000000u; // 80202608
  c->lr=0x80202610u; f_80190160(c); // 8020260C
  cmps(c,0,(int32_t)c->r[3],0); // 80202610
  if (!crb(c,2)) { goto L_802026D0; } // 80202614
L_80202618:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80202618
  c->r[3]=c->r[3]+0x00000178u; // 8020261C
  c->lr=0x80202624u; f_801FBAA0(c); // 80202620
  c->r[0]=cntlz(c->r[3]); // 80202624
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80202628
  if (!crb(c,2)) { goto L_80202674; } // 8020262C
  c->r[25]=R32(c->r[29]+0x00000088u); // 80202630
  c->r[3]=c->r[29]+0x0000001Cu; // 80202634
  c->r[4]=c->r[31]+0x0000000Au; // 80202638
  c->lr=0x80202640u; f_80208974(c); // 8020263C
  c->r[4]=c->r[25]|c->r[25]; // 80202640
  c->lr=0x80202648u; f_80208974(c); // 80202644
  c->r[4]=c->r[31]+0x0000005Eu; // 80202648
  c->lr=0x80202650u; f_80208974(c); // 8020264C
  c->r[4]=R32(c->r[29]+0x00000000u); // 80202650
  c->r[4]=c->r[4]+0x00000178u; // 80202654
  c->lr=0x8020265Cu; f_80208944(c); // 80202658
  c->r[4]=c->r[31]+0x00000019u; // 8020265C
  c->lr=0x80202664u; f_80208974(c); // 80202660
  c->r[4]=c->r[25]|c->r[25]; // 80202664
  c->lr=0x8020266Cu; f_80208974(c); // 80202668
  c->r[4]=c->r[31]+0x0000006Eu; // 8020266C
  c->lr=0x80202674u; f_80208974(c); // 80202670
L_80202674:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80202674
  c->r[3]=c->r[3]+0x00000184u; // 80202678
  c->lr=0x80202680u; f_801FBAA0(c); // 8020267C
  c->r[0]=cntlz(c->r[3]); // 80202680
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80202684
  if (!crb(c,2)) { goto L_802026D0; } // 80202688
  c->r[25]=R32(c->r[29]+0x00000088u); // 8020268C
  c->r[3]=c->r[29]+0x0000001Cu; // 80202690
  c->r[4]=c->r[31]+0x0000000Au; // 80202694
  c->lr=0x8020269Cu; f_80208974(c); // 80202698
  c->r[4]=c->r[25]|c->r[25]; // 8020269C
  c->lr=0x802026A4u; f_80208974(c); // 802026A0
  c->r[4]=c->r[31]+0x0000007Fu; // 802026A4
  c->lr=0x802026ACu; f_80208974(c); // 802026A8
  c->r[4]=R32(c->r[29]+0x00000000u); // 802026AC
  c->r[4]=c->r[4]+0x00000184u; // 802026B0
  c->lr=0x802026B8u; f_80208944(c); // 802026B4
  c->r[4]=c->r[31]+0x00000019u; // 802026B8
  c->lr=0x802026C0u; f_80208974(c); // 802026BC
  c->r[4]=c->r[25]|c->r[25]; // 802026C0
  c->lr=0x802026C8u; f_80208974(c); // 802026C4
  c->r[4]=c->r[31]+0x00000085u; // 802026C8
  c->lr=0x802026D0u; f_80208974(c); // 802026CC
L_802026D0:;
  c->r[25]=R32(c->r[29]+0x00000088u); // 802026D0
  c->r[3]=c->r[29]+0x0000001Cu; // 802026D4
  c->r[4]=c->r[31]+0x0000000Au; // 802026D8
  c->lr=0x802026E0u; f_80208974(c); // 802026DC
  c->r[4]=c->r[25]|c->r[25]; // 802026E0
  c->lr=0x802026E8u; f_80208974(c); // 802026E4
  c->r[4]=c->r[31]+0x0000008Cu; // 802026E8
  c->lr=0x802026F0u; f_80208974(c); // 802026EC
  c->r[4]=R32(c->r[29]+0x00000000u); // 802026F0
  c->r[4]=c->r[4]+0x000001C0u; // 802026F4
  c->lr=0x802026FCu; f_80208944(c); // 802026F8
  c->r[4]=c->r[31]+0x00000019u; // 802026FC
  c->lr=0x80202704u; f_80208974(c); // 80202700
  c->r[4]=c->r[25]|c->r[25]; // 80202704
  c->lr=0x8020270Cu; f_80208974(c); // 80202708
  c->r[4]=c->r[31]+0x00000095u; // 8020270C
  c->lr=0x80202714u; f_80208974(c); // 80202710
  c->r[25]=R32(c->r[29]+0x00000088u); // 80202714
  c->r[3]=c->r[29]+0x0000001Cu; // 80202718
  c->r[4]=c->r[31]+0x0000000Au; // 8020271C
  c->lr=0x80202724u; f_80208974(c); // 80202720
  c->r[4]=c->r[25]|c->r[25]; // 80202724
  c->lr=0x8020272Cu; f_80208974(c); // 80202728
  c->r[4]=c->r[31]+0x0000009Fu; // 8020272C
  c->lr=0x80202734u; f_80208974(c); // 80202730
  c->r[4]=R32(c->r[29]+0x00000000u); // 80202734
  c->r[4]=c->r[4]+0x0000011Cu; // 80202738
  c->lr=0x80202740u; f_80208944(c); // 8020273C
  c->r[4]=c->r[31]+0x00000019u; // 80202740
  c->lr=0x80202748u; f_80208974(c); // 80202744
  c->r[4]=c->r[25]|c->r[25]; // 80202748
  c->lr=0x80202750u; f_80208974(c); // 8020274C
  c->r[4]=c->r[31]+0x000000A9u; // 80202750
  c->lr=0x80202758u; f_80208974(c); // 80202754
  c->r[25]=R32(c->r[29]+0x00000088u); // 80202758
  c->r[3]=c->r[29]+0x0000001Cu; // 8020275C
  c->r[4]=c->r[31]+0x0000000Au; // 80202760
  c->lr=0x80202768u; f_80208974(c); // 80202764
  c->r[4]=c->r[25]|c->r[25]; // 80202768
  c->lr=0x80202770u; f_80208974(c); // 8020276C
  c->r[4]=c->r[31]+0x000000B4u; // 80202770
  c->lr=0x80202778u; f_80208974(c); // 80202774
  c->r[4]=R32(c->r[29]+0x00000000u); // 80202778
  c->r[4]=c->r[4]+0x00000140u; // 8020277C
  c->lr=0x80202784u; f_80208944(c); // 80202780
  c->r[4]=c->r[31]+0x00000019u; // 80202784
  c->lr=0x8020278Cu; f_80208974(c); // 80202788
  c->r[4]=c->r[25]|c->r[25]; // 8020278C
  c->lr=0x80202794u; f_80208974(c); // 80202790
  c->r[4]=c->r[31]+0x000000BFu; // 80202794
  c->lr=0x8020279Cu; f_80208974(c); // 80202798
  c->r[25]=R32(c->r[29]+0x00000088u); // 8020279C
  c->r[4]=c->r[30]+0x00000000u; // 802027A0
  c->r[3]=c->r[25]|c->r[25]; // 802027A4
  c->lr=0x802027ACu; f_80190160(c); // 802027A8
  cmps(c,0,(int32_t)c->r[3],0); // 802027AC
  if (!crb(c,2)) { goto L_802027D8; } // 802027B0
  c->r[3]=c->r[29]+0x0000001Cu; // 802027B4
  c->r[4]=c->r[31]+0x000000CBu; // 802027B8
  c->lr=0x802027C0u; f_80208974(c); // 802027BC
  c->r[4]=R32(c->r[29]+0x00000000u); // 802027C0
  c->r[4]=c->r[4]+0x00000218u; // 802027C4
  c->lr=0x802027CCu; f_80208944(c); // 802027C8
  c->r[4]=c->r[31]+0x000000DCu; // 802027CC
  c->lr=0x802027D4u; f_80208974(c); // 802027D0
  goto L_8020283C; // 802027D4
L_802027D8:;
  c->r[3]=c->r[25]|c->r[25]; // 802027D8
  c->r[4]=c->r[30]+0x00000008u; // 802027DC
  c->lr=0x802027E4u; f_80190160(c); // 802027E0
  cmps(c,0,(int32_t)c->r[3],0); // 802027E4
  if (!crb(c,2)) { goto L_8020283C; } // 802027E8
  c->r[3]=R32(c->r[29]+0x00000000u); // 802027EC
  c->r[0]=R8(c->r[3]+0x00000208u); // 802027F0
  cmps(c,0,(int32_t)c->r[0],0); // 802027F4
  if (crb(c,2)) { goto L_8020283C; } // 802027F8
  c->r[0]=R8(c->r[3]+0x00000209u); // 802027FC
  cmps(c,0,(int32_t)c->r[0],0); // 80202800
  if (!crb(c,2)) { goto L_8020283C; } // 80202804
  c->r[6]=R8(c->r[3]+0x000001F1u); // 80202808
  c->r[3]=c->r[1]+0x000000E8u; // 8020280C
  c->r[5]=c->r[31]+0x000000EDu; // 80202810
  c->r[4]=0u+0x00000024u; // 80202814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202818
  c->lr=0x80202820u; f_8018E874(c); // 8020281C
  c->r[3]=c->r[29]+0x0000001Cu; // 80202820
  c->r[4]=c->r[31]+0x000000F0u; // 80202824
  c->lr=0x8020282Cu; f_80208974(c); // 80202828
  c->r[4]=c->r[1]+0x000000E8u; // 8020282C
  c->lr=0x80202834u; f_80208974(c); // 80202830
  c->r[4]=c->r[31]+0x000000FCu; // 80202834
  c->lr=0x8020283Cu; f_80208974(c); // 80202838
L_8020283C:;
  c->r[3]=c->r[29]+0x000000A4u; // 8020283C
  c->lr=0x80202844u; f_80202A4C(c); // 80202840
  c->r[4]=R32(c->r[29]+0x00000084u); // 80202844
  c->r[3]=c->r[1]+0x00000064u; // 80202848
  c->lr=0x80202850u; f_80201AF4(c); // 8020284C
  c->r[3]=c->r[29]+0x000000A4u; // 80202850
  c->r[4]=c->r[1]+0x00000064u; // 80202854
  c->lr=0x8020285Cu; f_80202AB0(c); // 80202858
  c->r[3]=c->r[1]+0x00000064u; // 8020285C
  c->r[4]=0u+0xFFFFFFFFu; // 80202860
  c->lr=0x80202868u; f_801FD984(c); // 80202864
  c->r[4]=R32(c->r[29]+0x000000C8u); // 80202868
  c->r[3]=c->r[29]+0x000000BCu; // 8020286C
  c->lr=0x80202874u; f_801FB0B8(c); // 80202870
  c->r[3]=c->r[1]+0x000000D0u; // 80202874
  c->r[4]=c->r[31]+0x00000108u; // 80202878
  c->r[5]=c->r[31]+0x0000010Fu; // 8020287C
  c->lr=0x80202884u; f_80202A04(c); // 80202880
  c->r[3]=c->r[29]+0x00000004u; // 80202884
  c->r[4]=c->r[1]+0x000000D0u; // 80202888
  c->lr=0x80202890u; f_80202D48(c); // 8020288C
  c->r[3]=c->r[1]+0x000000D0u; // 80202890
  c->r[4]=0u+0xFFFFFFFFu; // 80202894
  c->lr=0x8020289Cu; f_80202CE0(c); // 80202898
  c->r[3]=c->r[1]+0x000000B8u; // 8020289C
  c->r[4]=c->r[31]+0x0000011Fu; // 802028A0
  c->r[5]=c->r[31]+0x0000012Eu; // 802028A4
  c->lr=0x802028ACu; f_80202A04(c); // 802028A8
  c->r[3]=c->r[29]+0x00000004u; // 802028AC
  c->r[4]=c->r[1]+0x000000B8u; // 802028B0
  c->lr=0x802028B8u; f_80202D48(c); // 802028B4
  c->r[3]=c->r[1]+0x000000B8u; // 802028B8
  c->r[4]=0u+0xFFFFFFFFu; // 802028BC
  c->lr=0x802028C4u; f_80202CE0(c); // 802028C0
  c->r[3]=c->r[1]+0x000000A0u; // 802028C4
  c->r[4]=c->r[31]+0x00000134u; // 802028C8
  c->r[5]=c->r[31]+0x00000141u; // 802028CC
  c->lr=0x802028D4u; f_80202A04(c); // 802028D0
  c->r[3]=c->r[29]+0x00000004u; // 802028D4
  c->r[4]=c->r[1]+0x000000A0u; // 802028D8
  c->lr=0x802028E0u; f_80202D48(c); // 802028DC
  c->r[3]=c->r[1]+0x000000A0u; // 802028E0
  c->r[4]=0u+0xFFFFFFFFu; // 802028E4
  c->lr=0x802028ECu; f_80202CE0(c); // 802028E8
  c->r[3]=c->r[1]+0x00000058u; // 802028EC
  c->r[4]=c->r[31]+0x00000159u; // 802028F0
  c->lr=0x802028F8u; f_80201AF4(c); // 802028F4
  c->r[5]=R32(c->r[29]+0x00000088u); // 802028F8
  c->r[3]=c->r[1]+0x0000004Cu; // 802028FC
  c->r[4]=c->r[1]+0x00000058u; // 80202900
  c->lr=0x80202908u; f_801FCACC(c); // 80202904
  c->r[3]=c->r[1]+0x00000040u; // 80202908
  c->r[4]=c->r[1]+0x0000004Cu; // 8020290C
  c->r[5]=c->r[31]+0x0000015Eu; // 80202910
  c->lr=0x80202918u; f_801FCACC(c); // 80202914
  c->r[5]=R32(c->r[29]+0x00000084u); // 80202918
  c->r[3]=c->r[1]+0x0000007Cu; // 8020291C
  c->r[4]=c->r[1]+0x00000040u; // 80202920
  c->lr=0x80202928u; f_801FCACC(c); // 80202924
  c->r[3]=c->r[1]+0x00000040u; // 80202928
  c->r[4]=0u+0xFFFFFFFFu; // 8020292C
  c->lr=0x80202934u; f_801FD984(c); // 80202930
  c->r[3]=c->r[1]+0x0000004Cu; // 80202934
  c->r[4]=0u+0xFFFFFFFFu; // 80202938
  c->lr=0x80202940u; f_801FD984(c); // 8020293C
  c->r[3]=c->r[1]+0x00000058u; // 80202940
  c->r[4]=0u+0xFFFFFFFFu; // 80202944
  c->lr=0x8020294Cu; f_801FD984(c); // 80202948
  c->r[25]=c->r[1]+0x00000088u; // 8020294C
  c->r[4]=c->r[31]+0x00000172u; // 80202950
  c->r[3]=c->r[25]|c->r[25]; // 80202954
  c->lr=0x8020295Cu; f_80201AF4(c); // 80202958
  c->r[3]=c->r[1]+0x00000094u; // 8020295C
  c->r[4]=c->r[1]+0x0000007Cu; // 80202960
  c->lr=0x80202968u; f_801FD8E8(c); // 80202964
  c->r[4]=c->r[25]|c->r[25]; // 80202968
  c->r[3]=c->r[29]+0x00000004u; // 8020296C
  c->lr=0x80202974u; f_80202D48(c); // 80202970
  c->r[3]=c->r[25]|c->r[25]; // 80202974
  c->r[4]=0u+0xFFFFFFFFu; // 80202978
  c->lr=0x80202980u; f_80202CE0(c); // 8020297C
  c->r[3]=c->r[29]+0x00000010u; // 80202980
  c->r[4]=c->r[31]+0x0000017Du; // 80202984
  c->lr=0x8020298Cu; f_80208974(c); // 80202988
  c->r[4]=c->r[1]+0x0000007Cu; // 8020298C
  c->lr=0x80202994u; f_80208944(c); // 80202990
  c->r[4]=c->r[31]+0x0000018Bu; // 80202994
  c->lr=0x8020299Cu; f_80208974(c); // 80202998
  c->r[4]=R32(c->r[29]+0x00000084u); // 8020299C
  c->r[3]=c->r[1]+0x00000034u; // 802029A0
  c->lr=0x802029A8u; f_80201AF4(c); // 802029A4
  c->r[3]=c->r[1]+0x00000028u; // 802029A8
  c->r[4]=c->r[1]+0x00000034u; // 802029AC
  c->r[5]=c->r[31]+0x0000018Fu; // 802029B0
  c->lr=0x802029B8u; f_801FCACC(c); // 802029B4
  c->r[3]=c->r[29]+0x000000B0u; // 802029B8
  c->r[4]=c->r[1]+0x00000028u; // 802029BC
  c->lr=0x802029C4u; f_802072A8(c); // 802029C0
  c->r[3]=c->r[1]+0x00000028u; // 802029C4
  c->r[4]=0u+0xFFFFFFFFu; // 802029C8
  c->lr=0x802029D0u; f_801FD984(c); // 802029CC
  c->r[3]=c->r[1]+0x00000034u; // 802029D0
  c->r[4]=0u+0xFFFFFFFFu; // 802029D4
  c->lr=0x802029DCu; f_801FD984(c); // 802029D8
  c->r[3]=c->r[1]+0x0000007Cu; // 802029DC
  c->r[4]=0u+0xFFFFFFFFu; // 802029E0
  c->lr=0x802029E8u; f_801FD984(c); // 802029E4
L_802029E8:;
  c->r[11]=c->r[1]+0x00000430u; // 802029E8
  c->lr=0x802029F0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802029EC
  c->r[0]=R32(c->r[1]+0x00000434u); // 802029F0
  c->lr=c->r[0]; // 802029F4
  c->r[1]=c->r[1]+0x00000430u; // 802029F8
  return; // 802029FC
}

// fn_80202A00
void f_80202A00(Ctx* __restrict c) {
  f_802072A8(c); return; // 80202A00
}

// fn_80202A04
void f_80202A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202A04
  c->r[0]=c->lr; // 80202A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80202A0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80202A10
  c->r[31]=c->r[5]|c->r[5]; // 80202A14
  W32(c->r[1]+0x00000008u,c->r[30]); // 80202A18
  c->r[30]=c->r[3]|c->r[3]; // 80202A1C
  c->lr=0x80202A24u; f_80201AF4(c); // 80202A20
  c->r[4]=c->r[31]|c->r[31]; // 80202A24
  c->r[3]=c->r[30]+0x0000000Cu; // 80202A28
  c->lr=0x80202A30u; f_80201AF4(c); // 80202A2C
  c->r[3]=c->r[30]|c->r[30]; // 80202A30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80202A34
  c->r[30]=R32(c->r[1]+0x00000008u); // 80202A38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80202A3C
  c->lr=c->r[0]; // 80202A40
  c->r[1]=c->r[1]+0x00000010u; // 80202A44
  return; // 80202A48
}

// fn_80202A4C
void f_80202A4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202A4C
  c->r[0]=c->lr; // 80202A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80202A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80202A58
  W32(c->r[1]+0x00000008u,c->r[30]); // 80202A5C
  c->r[30]=R32(c->r[3]+0x00000004u); // 80202A60
  c->r[5]=R32(c->r[3]+0x00000000u); // 80202A64
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 80202A68
  c->r[0]=c->r[30]-c->r[30]; // 80202A6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80202A70
  c->r[31]=c->r[5]+c->r[4]; // 80202A74
  goto L_80202A90; // 80202A78
L_80202A7C:;
  c->r[31]=c->r[31]+0xFFFFFFF4u; // 80202A7C
  c->r[4]=0u+0xFFFFFFFFu; // 80202A80
  c->r[3]=c->r[31]|c->r[31]; // 80202A84
  c->lr=0x80202A8Cu; f_801FD984(c); // 80202A88
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80202A8C
L_80202A90:;
  cmps(c,0,(int32_t)c->r[30],0); // 80202A90
  if (!crb(c,2)) { IRQCHK(c); goto L_80202A7C; } // 80202A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80202A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80202A9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80202AA0
  c->lr=c->r[0]; // 80202AA4
  c->r[1]=c->r[1]+0x00000010u; // 80202AA8
  return; // 80202AAC
}

// fn_80202AB0
void f_80202AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202AB0
  c->r[0]=c->lr; // 80202AB4
  W32(c->r[1]+0x00000054u,c->r[0]); // 80202AB8
  c->r[11]=c->r[1]+0x00000050u; // 80202ABC
  c->lr=0x80202AC4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202AC0
  c->r[5]=R32(c->r[3]+0x00000004u); // 80202AC4
  c->r[30]=0u+0x80340000u; // 80202AC8
  c->r[0]=R32(c->r[3]+0x00000008u); // 80202ACC
  c->r[31]=c->r[3]|c->r[3]; // 80202AD0
  c->r[26]=c->r[4]|c->r[4]; // 80202AD4
  c->r[30]=c->r[30]+0xFFFFCD40u; // 80202AD8
  cmpu(c,0,c->r[5],c->r[0]); // 80202ADC
  if (!crb(c,0)) { goto L_80202B0C; } // 80202AE0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80202AE4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80202AE8
  c->r[5]=c->r[26]|c->r[26]; // 80202AEC
  c->r[3]=c->r[3]+0x00000008u; // 80202AF0
  c->r[4]=c->r[4]+c->r[0]; // 80202AF4
  c->lr=0x80202AFCu; f_80206F1C(c); // 80202AF8
  c->r[3]=R32(c->r[31]+0x00000004u); // 80202AFC
  c->r[0]=c->r[3]+0x00000001u; // 80202B00
  W32(c->r[31]+0x00000004u,c->r[0]); // 80202B04
  goto L_80202CC8; // 80202B08
L_80202B0C:;
  c->r[4]=0u+0x00000001u; // 80202B0C
  c->lr=0x80202B14u; f_802078B8(c); // 80202B10
  c->r[4]=0u+0x00000000u; // 80202B14
  c->r[0]=c->r[31]+0x00000008u; // 80202B18
  W32(c->r[1]+0x00000018u,c->r[4]); // 80202B1C
  c->r[3]=c->r[31]|c->r[31]; // 80202B20
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80202B24
  W32(c->r[1]+0x00000020u,c->r[4]); // 80202B28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80202B2C
  W32(c->r[1]+0x00000028u,c->r[4]); // 80202B30
  c->r[4]=R32(c->r[31]+0x00000004u); // 80202B34
  c->r[5]=R32(c->r[31]+0x00000008u); // 80202B38
  c->r[0]=c->r[4]+0x00000001u; // 80202B3C
  c->r[4]=c->r[0]-c->r[5]; // 80202B40
  c->lr=0x80202B48u; f_802078B8(c); // 80202B44
  c->r[4]=0u+0x15550000u; // 80202B48
  c->r[28]=c->r[3]|c->r[3]; // 80202B4C
  c->r[0]=c->r[4]+0x00005555u; // 80202B50
  cmpu(c,0,c->r[3],c->r[0]); // 80202B54
  if (!crb(c,1)) { goto L_80202B7C; } // 80202B58
  c->r[3]=c->r[1]+0x0000000Cu; // 80202B5C
  c->r[4]=c->r[30]+0x000001CFu; // 80202B60
  c->lr=0x80202B68u; f_801FDBE4(c); // 80202B64
  c->r[5]=0u+0x80190000u; // 80202B68
  c->r[4]=c->r[3]|c->r[3]; // 80202B6C
  c->r[3]=c->r[30]+0x00000198u; // 80202B70
  c->r[5]=c->r[5]+0x00006CC8u; // 80202B74
  c->lr=0x80202B7Cu; f_80187DA8(c); // 80202B78
L_80202B7C:;
  c->r[27]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 80202B7C
  c->r[5]=c->r[28]|c->r[28]; // 80202B80
  c->r[4]=c->r[30]+0x000001E3u; // 80202B84
  c->r[3]=0u+0x00000006u; // 80202B88
  c->r[7]=c->r[27]|c->r[27]; // 80202B8C
  c->r[6]=0u+0x0000000Cu; // 80202B90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202B94
  c->lr=0x80202B9Cu; f_801FE6E4(c); // 80202B98
  c->r[3]=c->r[27]|c->r[27]; // 80202B9C
  c->lr=0x80202BA4u; f_80202030(c); // 80202BA0
  cmps(c,0,(int32_t)c->r[3],0); // 80202BA4
  c->r[29]=c->r[3]|c->r[3]; // 80202BA8
  if (!crb(c,2)) { goto L_80202BE8; } // 80202BAC
  c->r[5]=c->r[28]|c->r[28]; // 80202BB0
  c->r[7]=c->r[27]|c->r[27]; // 80202BB4
  c->r[4]=c->r[30]+0x0000020Fu; // 80202BB8
  c->r[3]=0u+0x00000001u; // 80202BBC
  c->r[6]=0u+0x0000000Cu; // 80202BC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202BC4
  c->lr=0x80202BCCu; f_801FE6E4(c); // 80202BC8
  c->r[3]=c->r[1]+0x00000008u; // 80202BCC
  c->lr=0x80202BD4u; f_802075D8(c); // 80202BD0
  c->r[5]=0u+0x80180000u; // 80202BD4
  c->r[4]=c->r[3]|c->r[3]; // 80202BD8
  c->r[3]=c->r[30]+0x00000248u; // 80202BDC
  c->r[5]=c->r[5]+0x0000570Cu; // 80202BE0
  c->lr=0x80202BE8u; f_80187DA8(c); // 80202BE4
L_80202BE8:;
  c->r[5]=c->r[29]|c->r[29]; // 80202BE8
  c->r[4]=c->r[30]+0x0000026Au; // 80202BEC
  c->r[3]=0u+0x00000006u; // 80202BF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202BF4
  c->lr=0x80202BFCu; f_801FE6E4(c); // 80202BF8
  W32(c->r[1]+0x00000018u,c->r[29]); // 80202BFC
  c->r[5]=c->r[26]|c->r[26]; // 80202C00
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80202C04
  W32(c->r[1]+0x00000020u,c->r[28]); // 80202C08
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80202C0C
  c->r[3]=R32(c->r[1]+0x00000024u); // 80202C10
  c->r[6]=R32(c->r[31]+0x00000004u); // 80202C14
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 80202C18
  W32(c->r[1]+0x00000028u,c->r[6]); // 80202C1C
  c->r[0]=c->r[29]+c->r[0]; // 80202C20
  c->r[4]=c->r[4]+c->r[0]; // 80202C24
  c->lr=0x80202C2Cu; f_80206F1C(c); // 80202C28
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 80202C2C
  c->r[0]=R32(c->r[1]+0x00000028u); // 80202C30
  c->r[4]=c->r[3]+0x00000001u; // 80202C34
  c->r[3]=R32(c->r[1]+0x00000018u); // 80202C38
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80202C3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80202C40
  c->r[4]=R32(c->r[31]+0x00000004u); // 80202C44
  c->r[29]=c->r[3]+c->r[0]; // 80202C48
  c->r[27]=R32(c->r[31]+0x00000000u); // 80202C4C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80202C50
  c->r[30]=c->r[27]+c->r[0]; // 80202C54
  goto L_80202C8C; // 80202C58
L_80202C5C:;
  c->r[30]=c->r[30]+0xFFFFFFF4u; // 80202C5C
  c->r[29]=c->r[29]+0xFFFFFFF4u; // 80202C60
  c->r[3]=R32(c->r[1]+0x00000024u); // 80202C64
  c->r[5]=c->r[30]|c->r[30]; // 80202C68
  c->r[4]=c->r[29]|c->r[29]; // 80202C6C
  c->lr=0x80202C74u; f_80206F1C(c); // 80202C70
  c->r[4]=R32(c->r[1]+0x00000028u); // 80202C74
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 80202C78
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80202C7C
  c->r[0]=c->r[3]+0x00000001u; // 80202C80
  W32(c->r[1]+0x00000028u,c->r[4]); // 80202C84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80202C88
L_80202C8C:;
  cmpu(c,0,c->r[30],c->r[27]); // 80202C8C
  if (crb(c,1)) { IRQCHK(c); goto L_80202C5C; } // 80202C90
  c->r[3]=c->r[31]+0x00000008u; // 80202C94
  c->r[4]=c->r[1]+0x00000020u; // 80202C98
  c->lr=0x80202CA0u; f_800D437C(c); // 80202C9C
  c->r[5]=R32(c->r[31]+0x00000000u); // 80202CA0
  c->r[3]=c->r[31]+0x00000004u; // 80202CA4
  c->r[0]=R32(c->r[1]+0x00000018u); // 80202CA8
  c->r[4]=c->r[1]+0x0000001Cu; // 80202CAC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80202CB0
  W32(c->r[1]+0x00000018u,c->r[5]); // 80202CB4
  c->lr=0x80202CBCu; f_800D437C(c); // 80202CB8
  c->r[3]=c->r[1]+0x00000018u; // 80202CBC
  c->r[4]=0u+0xFFFFFFFFu; // 80202CC0
  c->lr=0x80202CC8u; f_80207D98(c); // 80202CC4
L_80202CC8:;
  c->r[11]=c->r[1]+0x00000050u; // 80202CC8
  c->lr=0x80202CD0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202CCC
  c->r[0]=R32(c->r[1]+0x00000054u); // 80202CD0
  c->lr=c->r[0]; // 80202CD4
  c->r[1]=c->r[1]+0x00000050u; // 80202CD8
  return; // 80202CDC
}

// dtor_80202CE0
void f_80202CE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202CE0
  c->r[0]=c->lr; // 80202CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80202CE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80202CEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80202CF0
  c->r[31]=c->r[4]|c->r[4]; // 80202CF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80202CF8
  c->r[30]=c->r[3]|c->r[3]; // 80202CFC
  if (crb(c,2)) { goto L_80202D2C; } // 80202D00
  c->r[4]=0u+0xFFFFFFFFu; // 80202D04
  c->r[3]=c->r[3]+0x0000000Cu; // 80202D08
  c->lr=0x80202D10u; f_801FD984(c); // 80202D0C
  c->r[3]=c->r[30]|c->r[30]; // 80202D10
  c->r[4]=0u+0xFFFFFFFFu; // 80202D14
  c->lr=0x80202D1Cu; f_801FD984(c); // 80202D18
  cmps(c,0,(int32_t)c->r[31],0); // 80202D1C
  if (!crb(c,1)) { goto L_80202D2C; } // 80202D20
  c->r[3]=c->r[30]|c->r[30]; // 80202D24
  c->lr=0x80202D2Cu; f_800D6AD0(c); // 80202D28
L_80202D2C:;
  c->r[3]=c->r[30]|c->r[30]; // 80202D2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80202D30
  c->r[30]=R32(c->r[1]+0x00000008u); // 80202D34
  c->r[0]=R32(c->r[1]+0x00000014u); // 80202D38
  c->lr=c->r[0]; // 80202D3C
  c->r[1]=c->r[1]+0x00000010u; // 80202D40
  return; // 80202D44
}

// fn_80202D48
void f_80202D48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202D48
  c->r[0]=c->lr; // 80202D4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80202D50
  c->r[11]=c->r[1]+0x00000050u; // 80202D54
  c->lr=0x80202D5Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202D58
  c->r[5]=R32(c->r[3]+0x00000004u); // 80202D5C
  c->r[30]=0u+0x80340000u; // 80202D60
  c->r[0]=R32(c->r[3]+0x00000008u); // 80202D64
  c->r[31]=c->r[3]|c->r[3]; // 80202D68
  c->r[26]=c->r[4]|c->r[4]; // 80202D6C
  c->r[30]=c->r[30]+0xFFFFCD40u; // 80202D70
  cmpu(c,0,c->r[5],c->r[0]); // 80202D74
  if (!crb(c,0)) { goto L_80202DA4; } // 80202D78
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 80202D7C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80202D80
  c->r[5]=c->r[26]|c->r[26]; // 80202D84
  c->r[3]=c->r[3]+0x00000008u; // 80202D88
  c->r[4]=c->r[4]+c->r[0]; // 80202D8C
  c->lr=0x80202D94u; f_80206F9C(c); // 80202D90
  c->r[3]=R32(c->r[31]+0x00000004u); // 80202D94
  c->r[0]=c->r[3]+0x00000001u; // 80202D98
  W32(c->r[31]+0x00000004u,c->r[0]); // 80202D9C
  goto L_80202F60; // 80202DA0
L_80202DA4:;
  c->r[4]=0u+0x00000001u; // 80202DA4
  c->lr=0x80202DACu; f_80207A98(c); // 80202DA8
  c->r[4]=0u+0x00000000u; // 80202DAC
  c->r[0]=c->r[31]+0x00000008u; // 80202DB0
  W32(c->r[1]+0x00000018u,c->r[4]); // 80202DB4
  c->r[3]=c->r[31]|c->r[31]; // 80202DB8
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80202DBC
  W32(c->r[1]+0x00000020u,c->r[4]); // 80202DC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80202DC4
  W32(c->r[1]+0x00000028u,c->r[4]); // 80202DC8
  c->r[4]=R32(c->r[31]+0x00000004u); // 80202DCC
  c->r[5]=R32(c->r[31]+0x00000008u); // 80202DD0
  c->r[0]=c->r[4]+0x00000001u; // 80202DD4
  c->r[4]=c->r[0]-c->r[5]; // 80202DD8
  c->lr=0x80202DE0u; f_80207A98(c); // 80202DDC
  c->r[4]=0u+0x0AAB0000u; // 80202DE0
  c->r[28]=c->r[3]|c->r[3]; // 80202DE4
  c->r[0]=c->r[4]+0xFFFFAAAAu; // 80202DE8
  cmpu(c,0,c->r[3],c->r[0]); // 80202DEC
  if (!crb(c,1)) { goto L_80202E14; } // 80202DF0
  c->r[3]=c->r[1]+0x0000000Cu; // 80202DF4
  c->r[4]=c->r[30]+0x000001CFu; // 80202DF8
  c->lr=0x80202E00u; f_801FDBE4(c); // 80202DFC
  c->r[5]=0u+0x80190000u; // 80202E00
  c->r[4]=c->r[3]|c->r[3]; // 80202E04
  c->r[3]=c->r[30]+0x00000198u; // 80202E08
  c->r[5]=c->r[5]+0x00006CC8u; // 80202E0C
  c->lr=0x80202E14u; f_80187DA8(c); // 80202E10
L_80202E14:;
  c->r[27]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 80202E14
  c->r[5]=c->r[28]|c->r[28]; // 80202E18
  c->r[4]=c->r[30]+0x000001E3u; // 80202E1C
  c->r[3]=0u+0x00000006u; // 80202E20
  c->r[7]=c->r[27]|c->r[27]; // 80202E24
  c->r[6]=0u+0x00000018u; // 80202E28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202E2C
  c->lr=0x80202E34u; f_801FE6E4(c); // 80202E30
  c->r[3]=c->r[27]|c->r[27]; // 80202E34
  c->lr=0x80202E3Cu; f_80202030(c); // 80202E38
  cmps(c,0,(int32_t)c->r[3],0); // 80202E3C
  c->r[29]=c->r[3]|c->r[3]; // 80202E40
  if (!crb(c,2)) { goto L_80202E80; } // 80202E44
  c->r[5]=c->r[28]|c->r[28]; // 80202E48
  c->r[7]=c->r[27]|c->r[27]; // 80202E4C
  c->r[4]=c->r[30]+0x0000020Fu; // 80202E50
  c->r[3]=0u+0x00000001u; // 80202E54
  c->r[6]=0u+0x00000018u; // 80202E58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202E5C
  c->lr=0x80202E64u; f_801FE6E4(c); // 80202E60
  c->r[3]=c->r[1]+0x00000008u; // 80202E64
  c->lr=0x80202E6Cu; f_802075D8(c); // 80202E68
  c->r[5]=0u+0x80180000u; // 80202E6C
  c->r[4]=c->r[3]|c->r[3]; // 80202E70
  c->r[3]=c->r[30]+0x00000248u; // 80202E74
  c->r[5]=c->r[5]+0x0000570Cu; // 80202E78
  c->lr=0x80202E80u; f_80187DA8(c); // 80202E7C
L_80202E80:;
  c->r[5]=c->r[29]|c->r[29]; // 80202E80
  c->r[4]=c->r[30]+0x0000026Au; // 80202E84
  c->r[3]=0u+0x00000006u; // 80202E88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202E8C
  c->lr=0x80202E94u; f_801FE6E4(c); // 80202E90
  W32(c->r[1]+0x00000018u,c->r[29]); // 80202E94
  c->r[5]=c->r[26]|c->r[26]; // 80202E98
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80202E9C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80202EA0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80202EA4
  c->r[3]=R32(c->r[1]+0x00000024u); // 80202EA8
  c->r[6]=R32(c->r[31]+0x00000004u); // 80202EAC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)24); // 80202EB0
  W32(c->r[1]+0x00000028u,c->r[6]); // 80202EB4
  c->r[0]=c->r[29]+c->r[0]; // 80202EB8
  c->r[4]=c->r[4]+c->r[0]; // 80202EBC
  c->lr=0x80202EC4u; f_80206F9C(c); // 80202EC0
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 80202EC4
  c->r[0]=R32(c->r[1]+0x00000028u); // 80202EC8
  c->r[4]=c->r[3]+0x00000001u; // 80202ECC
  c->r[3]=R32(c->r[1]+0x00000018u); // 80202ED0
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80202ED4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80202ED8
  c->r[4]=R32(c->r[31]+0x00000004u); // 80202EDC
  c->r[29]=c->r[3]+c->r[0]; // 80202EE0
  c->r[27]=R32(c->r[31]+0x00000000u); // 80202EE4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 80202EE8
  c->r[30]=c->r[27]+c->r[0]; // 80202EEC
  goto L_80202F24; // 80202EF0
L_80202EF4:;
  c->r[30]=c->r[30]+0xFFFFFFE8u; // 80202EF4
  c->r[29]=c->r[29]+0xFFFFFFE8u; // 80202EF8
  c->r[3]=R32(c->r[1]+0x00000024u); // 80202EFC
  c->r[5]=c->r[30]|c->r[30]; // 80202F00
  c->r[4]=c->r[29]|c->r[29]; // 80202F04
  c->lr=0x80202F0Cu; f_80206F9C(c); // 80202F08
  c->r[4]=R32(c->r[1]+0x00000028u); // 80202F0C
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 80202F10
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80202F14
  c->r[0]=c->r[3]+0x00000001u; // 80202F18
  W32(c->r[1]+0x00000028u,c->r[4]); // 80202F1C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80202F20
L_80202F24:;
  cmpu(c,0,c->r[30],c->r[27]); // 80202F24
  if (crb(c,1)) { IRQCHK(c); goto L_80202EF4; } // 80202F28
  c->r[3]=c->r[31]+0x00000008u; // 80202F2C
  c->r[4]=c->r[1]+0x00000020u; // 80202F30
  c->lr=0x80202F38u; f_800D437C(c); // 80202F34
  c->r[5]=R32(c->r[31]+0x00000000u); // 80202F38
  c->r[3]=c->r[31]+0x00000004u; // 80202F3C
  c->r[0]=R32(c->r[1]+0x00000018u); // 80202F40
  c->r[4]=c->r[1]+0x0000001Cu; // 80202F44
  W32(c->r[31]+0x00000000u,c->r[0]); // 80202F48
  W32(c->r[1]+0x00000018u,c->r[5]); // 80202F4C
  c->lr=0x80202F54u; f_800D437C(c); // 80202F50
  c->r[3]=c->r[1]+0x00000018u; // 80202F54
  c->r[4]=0u+0xFFFFFFFFu; // 80202F58
  c->lr=0x80202F60u; f_80207E94(c); // 80202F5C
L_80202F60:;
  c->r[11]=c->r[1]+0x00000050u; // 80202F60
  c->lr=0x80202F68u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202F64
  c->r[0]=R32(c->r[1]+0x00000054u); // 80202F68
  c->lr=c->r[0]; // 80202F6C
  c->r[1]=c->r[1]+0x00000050u; // 80202F70
  return; // 80202F74
}

// fn_80202F78
void f_80202F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202F78
  c->r[0]=c->lr; // 80202F7C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80202F80
  c->r[11]=c->r[1]+0x00000040u; // 80202F84
  c->lr=0x80202F8Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202F88
  c->r[0]=R32(c->r[3]+0x000000A8u); // 80202F8C
  c->r[30]=0u+0x80340000u; // 80202F90
  c->r[27]=c->r[3]|c->r[3]; // 80202F94
  cmpu(c,0,c->r[0],0x00000001u); // 80202F98
  c->r[30]=c->r[30]+0xFFFFCD40u; // 80202F9C
  if (!crb(c,2)) { goto L_80203004; } // 80202FA0
  c->r[4]=R32(c->r[3]+0x000000A8u); // 80202FA4
  c->r[31]=R32(c->r[3]+0x00000084u); // 80202FA8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80202FAC
  c->r[4]=R32(c->r[3]+0x000000A4u); // 80202FB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80202FB4
  c->r[3]=c->r[31]|c->r[31]; // 80202FB8
  c->r[29]=c->r[4]+c->r[0]; // 80202FBC
  c->lr=0x80202FC4u; f_80185588(c); // 80202FC0
  c->r[28]=c->r[3]|c->r[3]; // 80202FC4
  c->r[3]=c->r[29]|c->r[29]; // 80202FC8
  c->lr=0x80202FD0u; f_801FBAA0(c); // 80202FCC
  c->r[5]=c->r[3]|c->r[3]; // 80202FD0
  c->r[3]=c->r[29]|c->r[29]; // 80202FD4
  c->r[6]=c->r[31]|c->r[31]; // 80202FD8
  c->r[7]=c->r[28]|c->r[28]; // 80202FDC
  c->r[4]=0u+0x00000000u; // 80202FE0
  c->lr=0x80202FE8u; f_802074E0(c); // 80202FE4
  cmps(c,0,(int32_t)c->r[3],0); // 80202FE8
  if (!crb(c,2)) { goto L_80203004; } // 80202FEC
  c->r[3]=c->r[27]+0x000000BCu; // 80202FF0
  c->lr=0x80202FF8u; f_801FBAA0(c); // 80202FF4
  c->r[0]=R32(c->r[27]+0x000000CCu); // 80202FF8
  cmpu(c,0,c->r[0],c->r[3]); // 80202FFC
  if (crb(c,2)) { goto L_8020309C; } // 80203000
L_80203004:;
  c->r[3]=c->r[1]+0x00000014u; // 80203004
  c->lr=0x8020300Cu; f_801FAF28(c); // 80203008
  c->r[28]=R32(c->r[27]+0x000000A8u); // 8020300C
  c->r[3]=c->r[27]+0x000000BCu; // 80203010
  c->lr=0x80203018u; f_801FBAA0(c); // 80203014
  c->r[31]=c->r[3]|c->r[3]; // 80203018
  c->r[3]=c->r[1]+0x00000014u; // 8020301C
  c->r[4]=c->r[30]+0x0000027Du; // 80203020
  c->lr=0x80203028u; f_80208974(c); // 80203024
  c->r[4]=R32(c->r[27]+0x00000084u); // 80203028
  c->lr=0x80203030u; f_80208974(c); // 8020302C
  c->r[4]=c->r[30]+0x0000029Eu; // 80203030
  c->lr=0x80203038u; f_80208974(c); // 80203034
  c->r[4]=c->r[28]|c->r[28]; // 80203038
  c->lr=0x80203040u; f_80208C74(c); // 8020303C
  c->r[4]=c->r[30]+0x000002B2u; // 80203040
  c->lr=0x80203048u; f_80208974(c); // 80203044
  c->r[4]=c->r[31]|c->r[31]; // 80203048
  c->lr=0x80203050u; f_80208C74(c); // 8020304C
  c->r[4]=c->r[30]+0x000002C4u; // 80203050
  c->lr=0x80203058u; f_80208974(c); // 80203054
  c->r[4]=R32(c->r[27]+0x000000CCu); // 80203058
  c->lr=0x80203060u; f_80208C74(c); // 8020305C
  c->r[28]=R32(c->r[27]+0x000000A8u); // 80203060
  c->r[31]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 80203064
L_80203068:;
  c->r[3]=c->r[1]+0x00000014u; // 80203068
  c->r[4]=c->r[30]+0x000002D5u; // 8020306C
  c->lr=0x80203074u; f_80208974(c); // 80203070
  c->r[4]=c->r[28]|c->r[28]; // 80203074
  c->lr=0x8020307Cu; f_80208C74(c); // 80203078
  c->r[4]=c->r[30]+0x000002E1u; // 8020307C
  c->lr=0x80203084u; f_80208974(c); // 80203080
  c->r[0]=R32(c->r[27]+0x000000A4u); // 80203084
  c->r[4]=c->r[0]+c->r[31]; // 80203088
  c->lr=0x80203090u; f_80208944(c); // 8020308C
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80203090
  c->r[31]=c->r[31]+0xFFFFFFF4u; // 80203094
  IRQCHK(c); goto L_80203068; // 80203098
L_8020309C:;
  c->r[3]=c->r[27]+0x0000001Cu; // 8020309C
  c->r[4]=c->r[30]+0x00000019u; // 802030A0
  c->lr=0x802030A8u; f_80208974(c); // 802030A4
  c->r[4]=R32(c->r[27]+0x00000088u); // 802030A8
  c->lr=0x802030B0u; f_80208974(c); // 802030AC
  c->r[4]=0u+0x0000003Au; // 802030B0
  c->lr=0x802030B8u; f_802089E4(c); // 802030B4
  c->r[4]=R32(c->r[27]+0x00000084u); // 802030B8
  c->lr=0x802030C0u; f_80208974(c); // 802030BC
  c->r[4]=0u+0x80300000u; // 802030C0
  c->r[4]=c->r[4]+0x00007EDDu; // 802030C4
  c->lr=0x802030CCu; f_80208974(c); // 802030C8
  c->r[3]=c->r[1]+0x00000008u; // 802030CC
  c->r[4]=c->r[27]+0x0000001Cu; // 802030D0
  c->lr=0x802030D8u; f_801FC3EC(c); // 802030D4
  c->r[3]=c->r[1]+0x00000008u; // 802030D8
  c->lr=0x802030E0u; f_80200228(c); // 802030DC
  c->r[5]=c->r[3]|c->r[3]; // 802030E0
  c->r[4]=c->r[30]+0x000002E5u; // 802030E4
  c->r[3]=0u+0x00000003u; // 802030E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802030EC
  c->lr=0x802030F4u; f_801FE6E4(c); // 802030F0
  c->r[3]=c->r[1]+0x00000008u; // 802030F4
  c->r[4]=0u+0xFFFFFFFFu; // 802030F8
  c->lr=0x80203100u; f_801FD984(c); // 802030FC
  c->r[3]=c->r[27]+0x000000A4u; // 80203100
  c->lr=0x80203108u; f_80202A4C(c); // 80203104
  c->r[3]=c->r[27]+0x000000BCu; // 80203108
  c->lr=0x80203110u; f_801FBDD8(c); // 8020310C
  c->r[11]=c->r[1]+0x00000040u; // 80203110
  c->lr=0x80203118u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203114
  c->r[0]=R32(c->r[1]+0x00000044u); // 80203118
  c->lr=c->r[0]; // 8020311C
  c->r[1]=c->r[1]+0x00000040u; // 80203120
  return; // 80203124
}

// fn_80203128
void f_80203128(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203128
  c->r[0]=c->lr; // 8020312C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80203130
  c->r[11]=c->r[1]+0x00000030u; // 80203134
  c->lr=0x8020313Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203138
  c->r[29]=c->r[3]|c->r[3]; // 8020313C
  c->r[30]=c->r[4]|c->r[4]; // 80203140
  c->r[31]=c->r[5]|c->r[5]; // 80203144
  c->r[3]=c->r[1]+0x00000014u; // 80203148
  c->lr=0x80203150u; f_801FAF28(c); // 8020314C
  c->r[4]=c->r[31]|c->r[31]; // 80203150
  c->r[3]=c->r[1]+0x00000008u; // 80203154
  c->lr=0x8020315Cu; f_80201AF4(c); // 80203158
  c->r[3]=c->r[1]+0x00000008u; // 8020315C
  c->r[4]=c->r[1]+0x00000014u; // 80203160
  c->lr=0x80203168u; f_802090D8(c); // 80203164
  c->r[3]=c->r[1]+0x00000008u; // 80203168
  c->r[4]=0u+0xFFFFFFFFu; // 8020316C
  c->lr=0x80203174u; f_801FD984(c); // 80203170
  c->r[31]=R32(c->r[29]+0x00000088u); // 80203174
  c->r[3]=c->r[29]+0x0000001Cu; // 80203178
  c->r[4]=c->r[29]+0x000000BCu; // 8020317C
  c->lr=0x80203184u; f_80208944(c); // 80203180
  c->r[4]=0u+0x0000003Cu; // 80203184
  c->lr=0x8020318Cu; f_802089E4(c); // 80203188
  c->r[4]=c->r[31]|c->r[31]; // 8020318C
  c->lr=0x80203194u; f_80208974(c); // 80203190
  c->r[4]=0u+0x0000003Au; // 80203194
  c->lr=0x8020319Cu; f_802089E4(c); // 80203198
  c->r[4]=c->r[30]|c->r[30]; // 8020319C
  c->lr=0x802031A4u; f_80208974(c); // 802031A0
  c->r[4]=0u+0x0000003Eu; // 802031A4
  c->lr=0x802031ACu; f_802089E4(c); // 802031A8
  c->r[4]=c->r[1]+0x00000014u; // 802031AC
  c->lr=0x802031B4u; f_80208944(c); // 802031B0
  c->r[4]=0u+0x80340000u; // 802031B4
  c->r[4]=c->r[4]+0xFFFFCD59u; // 802031B8
  c->lr=0x802031C0u; f_80208974(c); // 802031BC
  c->r[4]=c->r[31]|c->r[31]; // 802031C0
  c->lr=0x802031C8u; f_80208974(c); // 802031C4
  c->r[4]=0u+0x0000003Au; // 802031C8
  c->lr=0x802031D0u; f_802089E4(c); // 802031CC
  c->r[4]=c->r[30]|c->r[30]; // 802031D0
  c->lr=0x802031D8u; f_80208974(c); // 802031D4
  c->r[4]=0u+0x80340000u; // 802031D8
  c->r[4]=c->r[4]+0xFFFFD02Au; // 802031DC
  c->lr=0x802031E4u; f_80208974(c); // 802031E0
  c->r[3]=c->r[1]+0x00000014u; // 802031E4
  c->r[4]=0u+0xFFFFFFFFu; // 802031E8
  c->lr=0x802031F0u; f_801FD984(c); // 802031EC
  c->r[11]=c->r[1]+0x00000030u; // 802031F0
  c->lr=0x802031F8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802031F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802031F8
  c->lr=c->r[0]; // 802031FC
  c->r[1]=c->r[1]+0x00000030u; // 80203200
  return; // 80203204
}

// fn_80203208
void f_80203208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203208
  c->r[0]=c->lr; // 8020320C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80203210
  c->r[11]=c->r[1]+0x00000030u; // 80203214
  c->lr=0x8020321Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203218
  c->r[29]=c->r[3]|c->r[3]; // 8020321C
  c->r[30]=c->r[4]|c->r[4]; // 80203220
  c->r[3]=c->r[3]+0x0000001Cu; // 80203224
  c->r[4]=c->r[29]+0x000000BCu; // 80203228
  c->lr=0x80203230u; f_80208944(c); // 8020322C
  c->r[4]=0u+0x0000003Cu; // 80203230
  c->lr=0x80203238u; f_802089E4(c); // 80203234
  c->r[4]=R32(c->r[29]+0x00000088u); // 80203238
  c->lr=0x80203240u; f_80208974(c); // 8020323C
  c->r[4]=0u+0x0000003Au; // 80203240
  c->lr=0x80203248u; f_802089E4(c); // 80203244
  c->r[4]=c->r[30]|c->r[30]; // 80203248
  c->lr=0x80203250u; f_80208974(c); // 8020324C
  c->r[4]=0u+0x80340000u; // 80203250
  c->r[4]=c->r[4]+0xFFFFD02Au; // 80203254
  c->lr=0x8020325Cu; f_80208974(c); // 80203258
  c->r[4]=c->r[30]|c->r[30]; // 8020325C
  c->r[3]=c->r[1]+0x0000000Cu; // 80203260
  c->lr=0x80203268u; f_80201AF4(c); // 80203264
  c->r[3]=c->r[29]+0x000000A4u; // 80203268
  c->r[4]=c->r[1]+0x0000000Cu; // 8020326C
  c->lr=0x80203274u; f_80202AB0(c); // 80203270
  c->r[3]=c->r[1]+0x0000000Cu; // 80203274
  c->r[4]=0u+0xFFFFFFFFu; // 80203278
  c->lr=0x80203280u; f_801FD984(c); // 8020327C
  c->r[31]=R32(c->r[29]+0x000000C8u); // 80203280
  c->r[3]=c->r[29]+0x000000BCu; // 80203284
  c->lr=0x8020328Cu; f_801FBAA0(c); // 80203288
  c->r[0]=R8(c->r[1]+0x00000009u); // 8020328C
  c->r[30]=c->r[3]|c->r[3]; // 80203290
  c->r[3]=c->r[31]|c->r[31]; // 80203294
  W8(c->r[1]+0x00000008u,c->r[0]); // 80203298
  c->lr=0x802032A0u; f_80185588(c); // 8020329C
  c->r[0]=c->r[3]|c->r[3]; // 802032A0
  c->r[4]=c->r[30]|c->r[30]; // 802032A4
  c->r[6]=c->r[31]|c->r[31]; // 802032A8
  c->r[3]=c->r[29]+0x000000BCu; // 802032AC
  c->r[7]=c->r[31]+c->r[0]; // 802032B0
  c->r[8]=c->r[1]+0x00000008u; // 802032B4
  c->r[5]=0u+0x00000000u; // 802032B8
  c->lr=0x802032C0u; f_801FDDF4(c); // 802032BC
  c->r[11]=c->r[1]+0x00000030u; // 802032C0
  c->lr=0x802032C8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802032C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802032C8
  c->lr=c->r[0]; // 802032CC
  c->r[1]=c->r[1]+0x00000030u; // 802032D0
  return; // 802032D4
}

// fn_802032D8
void f_802032D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802032D8
  c->r[0]=c->lr; // 802032DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802032E0
  c->r[11]=c->r[1]+0x00000030u; // 802032E4
  c->lr=0x802032ECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802032E8
  c->r[29]=c->r[3]|c->r[3]; // 802032EC
  c->r[3]=c->r[1]+0x0000000Cu; // 802032F0
  c->r[4]=R32(c->r[29]+0x000000A8u); // 802032F4
  c->r[5]=R32(c->r[29]+0x000000A4u); // 802032F8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802032FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80203300
  c->r[4]=c->r[5]+c->r[0]; // 80203304
  c->lr=0x8020330Cu; f_801FD8E8(c); // 80203308
  c->r[3]=R32(c->r[29]+0x000000A8u); // 8020330C
  c->r[4]=0u+0xFFFFFFFFu; // 80203310
  c->r[5]=R32(c->r[29]+0x000000A4u); // 80203314
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80203318
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8020331C
  W32(c->r[29]+0x000000A8u,c->r[3]); // 80203320
  c->r[3]=c->r[5]+c->r[0]; // 80203324
  c->lr=0x8020332Cu; f_801FD984(c); // 80203328
  c->r[3]=c->r[29]+0x000000BCu; // 8020332C
  c->lr=0x80203334u; f_801FBAA0(c); // 80203330
  c->r[0]=R32(c->r[29]+0x000000CCu); // 80203334
  cmpu(c,0,c->r[3],c->r[0]); // 80203338
  if (crb(c,0)) { goto L_8020338C; } // 8020333C
  c->r[3]=c->r[29]+0x000000BCu; // 80203340
  c->lr=0x80203348u; f_802033EC(c); // 80203344
  c->r[30]=R32(c->r[29]+0x000000CCu); // 80203348
  c->r[31]=c->r[3]|c->r[3]; // 8020334C
  c->r[3]=c->r[29]+0x000000BCu; // 80203350
  c->lr=0x80203358u; f_802033EC(c); // 80203354
  c->r[30]=c->r[3]-c->r[30]; // 80203358
  c->r[3]=c->r[29]+0x000000BCu; // 8020335C
  c->lr=0x80203364u; f_80203DB8(c); // 80203360
  c->r[0]=R8(c->r[1]+0x00000008u); // 80203364
  c->r[4]=c->r[3]|c->r[3]; // 80203368
  c->r[3]=c->r[29]+0x000000BCu; // 8020336C
  c->r[5]=c->r[31]-c->r[30]; // 80203370
  W8(c->r[1]+0x00000009u,c->r[0]); // 80203374
  c->r[4]=c->r[30]-c->r[4]; // 80203378
  c->r[8]=c->r[1]+0x00000009u; // 8020337C
  c->r[6]=0u+0x00000000u; // 80203380
  c->r[7]=0u+0x00000000u; // 80203384
  c->lr=0x8020338Cu; f_801FDDF4(c); // 80203388
L_8020338C:;
  c->r[3]=c->r[29]+0x0000001Cu; // 8020338C
  c->r[4]=c->r[29]+0x000000BCu; // 80203390
  c->lr=0x80203398u; f_80208944(c); // 80203394
  c->r[4]=0u+0x80340000u; // 80203398
  c->r[4]=c->r[4]+0xFFFFCD59u; // 8020339C
  c->lr=0x802033A4u; f_80208974(c); // 802033A0
  c->r[4]=R32(c->r[29]+0x00000088u); // 802033A4
  c->lr=0x802033ACu; f_80208974(c); // 802033A8
  c->r[4]=0u+0x0000003Au; // 802033AC
  c->lr=0x802033B4u; f_802089E4(c); // 802033B0
  c->r[4]=c->r[1]+0x0000000Cu; // 802033B4
  c->lr=0x802033BCu; f_80208944(c); // 802033B8
  c->r[4]=0u+0x80340000u; // 802033BC
  c->r[4]=c->r[4]+0xFFFFD02Au; // 802033C0
  c->lr=0x802033C8u; f_80208974(c); // 802033C4
  c->r[3]=c->r[1]+0x0000000Cu; // 802033C8
  c->r[4]=0u+0xFFFFFFFFu; // 802033CC
  c->lr=0x802033D4u; f_801FD984(c); // 802033D0
  c->r[11]=c->r[1]+0x00000030u; // 802033D4
  c->lr=0x802033DCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802033D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802033DC
  c->lr=c->r[0]; // 802033E0
  c->r[1]=c->r[1]+0x00000030u; // 802033E4
  return; // 802033E8
}

