#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// ConvertOffsToPtr<Q34nw4r3lyt12AlphaCompare>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt12AlphaCompare
void f_8027F9D4(Ctx* __restrict c) {
  trace_call(0x8027F9D4u);
  c->r[3]=c->r[3]+c->r[4]; // 8027F9D4
  return; // 8027F9D8
}

// ConvertOffsToPtr<Q34nw4r3lyt8TevStage>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt8TevStage
void f_8027F9DC(Ctx* __restrict c) {
  trace_call(0x8027F9DCu);
  c->r[3]=c->r[3]+c->r[4]; // 8027F9DC
  return; // 8027F9E0
}

// ConvertOffsToPtr<Q34nw4r3lyt13IndirectStage>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt13IndirectStage
void f_8027F9E4(Ctx* __restrict c) {
  trace_call(0x8027F9E4u);
  c->r[3]=c->r[3]+c->r[4]; // 8027F9E4
  return; // 8027F9E8
}

// ConvertOffsToPtr<Q34nw4r3lyt11TevSwapMode>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt11TevSwapMode
void f_8027F9EC(Ctx* __restrict c) {
  trace_call(0x8027F9ECu);
  c->r[3]=c->r[3]+c->r[4]; // 8027F9EC
  return; // 8027F9F0
}

// ConvertOffsToPtr<Q34nw4r2ut5Color>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r2ut5Color
void f_8027F9F4(Ctx* __restrict c) {
  trace_call(0x8027F9F4u);
  c->r[3]=c->r[3]+c->r[4]; // 8027F9F4
  return; // 8027F9F8
}

// ConvertOffsToPtr<Q34nw4r3lyt8ChanCtrl>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt8ChanCtrl
void f_8027F9FC(Ctx* __restrict c) {
  trace_call(0x8027F9FCu);
  c->r[3]=c->r[3]+c->r[4]; // 8027F9FC
  return; // 8027FA00
}

// ConvertOffsToPtr<c>__Q34nw4r3lyt6detailFPCvUi_PCc
void f_8027FA04(Ctx* __restrict c) {
  trace_call(0x8027FA04u);
  c->r[3]=c->r[3]+c->r[4]; // 8027FA04
  return; // 8027FA08
}

// ConvertOffsToPtr<Q44nw4r3lyt3res7Texture>__Q34nw4r3lyt6detailFPCvUi_PCQ44nw4r3lyt3res7Texture
void f_8027FA0C(Ctx* __restrict c) {
  trace_call(0x8027FA0Cu);
  c->r[3]=c->r[3]+c->r[4]; // 8027FA0C
  return; // 8027FA10
}

// Min<Uc>__Q34nw4r2ut26@unnamed@lyt_material_cpp@FUcUc_Uc
void f_8027FA14(Ctx* __restrict c) {
  trace_call(0x8027FA14u);
  cmpu(c,0,c->r[3],c->r[4]); // 8027FA14
  if (!crb(c,1)) return; // 8027FA18
  c->r[3]=c->r[4]|c->r[4]; // 8027FA1C
  return; // 8027FA20
}

// ConvertOffsToPtr<Q34nw4r3lyt11TexCoordGen>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt11TexCoordGen
void f_8027FA24(Ctx* __restrict c) {
  trace_call(0x8027FA24u);
  c->r[3]=c->r[3]+c->r[4]; // 8027FA24
  return; // 8027FA28
}

// ConvertOffsToPtr<Q34nw4r3lyt6TexSRT>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt6TexSRT
void f_8027FA2C(Ctx* __restrict c) {
  trace_call(0x8027FA2Cu);
  c->r[3]=c->r[3]+c->r[4]; // 8027FA2C
  return; // 8027FA30
}

// ConvertOffsToPtr<Q44nw4r3lyt3res6TexMap>__Q34nw4r3lyt6detailFPCvUi_PCQ44nw4r3lyt3res6TexMap
void f_8027FA34(Ctx* __restrict c) {
  trace_call(0x8027FA34u);
  c->r[3]=c->r[3]+c->r[4]; // 8027FA34
  return; // 8027FA38
}

// Init__Q34nw4r3lyt8MaterialFv
void f_8027FA3C(Ctx* __restrict c) {
  trace_call(0x8027FA3Cu);
  c->r[7]=c->r[2]+0xFFFFA2D8u; // 8027FA3C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027FA40
  c->r[5]=R32(c->r[3]+0x00000038u); // 8027FA44
  c->r[6]=0u+0x000000FFu; // 8027FA48
  c->r[4]=0u+0x00000000u; // 8027FA4C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFA2D8u); // 8027FA50
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000002u); // 8027FA54
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 8027FA58
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000004u); // 8027FA5C
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8027FA60
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000006u); // 8027FA64
  W16(c->r[3]+0x00000010u,c->r[10]); // 8027FA68
  W16(c->r[3]+0x00000012u,c->r[9]); // 8027FA6C
  W16(c->r[3]+0x00000014u,c->r[8]); // 8027FA70
  W16(c->r[3]+0x00000016u,c->r[7]); // 8027FA74
  W16(c->r[3]+0x00000018u,c->r[6]); // 8027FA78
  W16(c->r[3]+0x0000001Au,c->r[6]); // 8027FA7C
  W16(c->r[3]+0x0000001Cu,c->r[6]); // 8027FA80
  W16(c->r[3]+0x0000001Eu,c->r[6]); // 8027FA84
  W16(c->r[3]+0x00000020u,c->r[6]); // 8027FA88
  W16(c->r[3]+0x00000022u,c->r[6]); // 8027FA8C
  W16(c->r[3]+0x00000024u,c->r[6]); // 8027FA90
  W16(c->r[3]+0x00000026u,c->r[6]); // 8027FA94
  W32(c->r[3]+0x00000038u,c->r[5]); // 8027FA98
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8027FA9C
  W8(c->r[3]+0x00000059u,c->r[4]); // 8027FAA0
  W32(c->r[3]+0x00000040u,c->r[4]); // 8027FAA4
  return; // 8027FAA8
}

// __dt__Q34nw4r3lyt8MaterialFv
void f_8027FAAC(Ctx* __restrict c) {
  trace_call(0x8027FAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027FAAC
  c->r[0]=c->lr; // 8027FAB0
  cmps(c,0,(int32_t)c->r[3],0); // 8027FAB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027FAB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8027FABC
  c->r[31]=c->r[4]|c->r[4]; // 8027FAC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8027FAC4
  c->r[30]=c->r[3]|c->r[3]; // 8027FAC8
  if (crb(c,2)) { goto L_8027FB3C; } // 8027FACC
  c->r[12]=0u+0x80340000u; // 8027FAD0
  c->r[12]=c->r[12]+0x000053B0u; // 8027FAD4
  W32(c->r[3]+0x00000000u,c->r[12]); // 8027FAD8
  c->r[12]=R32(c->r[12]+0x00000018u); // 8027FADC
  c->ctr=c->r[12]; // 8027FAE0
  if (true) { c->lr=0x8027FAE8u; dispatch(c,c->ctr); } // 8027FAE4
  c->r[4]=R32(c->r[30]+0x00000040u); // 8027FAE8
  cmps(c,0,(int32_t)c->r[4],0); // 8027FAEC
  if (crb(c,2)) { goto L_8027FB04; } // 8027FAF0
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027FAF4
  c->lr=0x8027FAFCu; f_801A0F08(c); // 8027FAF8
  c->r[0]=0u+0x00000000u; // 8027FAFC
  W32(c->r[30]+0x00000040u,c->r[0]); // 8027FB00
L_8027FB04:;
  c->r[4]=0u+0x80070000u; // 8027FB04
  c->r[3]=c->r[30]+0x00000028u; // 8027FB08
  c->r[4]=c->r[4]+0xFFFF8B68u; // 8027FB0C
  c->r[5]=0u+0x00000004u; // 8027FB10
  c->r[6]=0u+0x00000004u; // 8027FB14
  c->lr=0x8027FB1Cu; f_80185C64(c); // 8027FB18
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 8027FB1C
  if (crb(c,2)) { goto L_8027FB2C; } // 8027FB20
  c->r[4]=0u+0x00000000u; // 8027FB24
  c->lr=0x8027FB2Cu; f_802A7B78(c); // 8027FB28
L_8027FB2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8027FB2C
  if (!crb(c,1)) { goto L_8027FB3C; } // 8027FB30
  c->r[3]=c->r[30]|c->r[30]; // 8027FB34
  c->lr=0x8027FB3Cu; f_800D6AD0(c); // 8027FB38
L_8027FB3C:;
  c->r[3]=c->r[30]|c->r[30]; // 8027FB3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8027FB40
  c->r[30]=R32(c->r[1]+0x00000008u); // 8027FB44
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027FB48
  c->lr=c->r[0]; // 8027FB4C
  c->r[1]=c->r[1]+0x00000010u; // 8027FB50
  return; // 8027FB54
}

// ReserveGXMem__Q34nw4r3lyt8MaterialFUcUcUcUcbUcUcbbbb
void f_8027FB58(Ctx* __restrict c) {
  trace_call(0x8027FB58u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027FB58
  c->r[0]=c->lr; // 8027FB5C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8027FB60
  c->r[11]=c->r[1]+0x00000060u; // 8027FB64
  c->lr=0x8027FB6Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027FB68
  c->r[0]=R32(c->r[3]+0x00000038u); // 8027FB6C
  c->r[20]=c->r[3]|c->r[3]; // 8027FB70
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 8027FB74
  c->r[21]=c->r[4]|c->r[4]; // 8027FB78
  c->r[11]=rotl(c->r[0],4)&0x0000000Fu; // 8027FB7C
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 8027FB80
  cmpu(c,0,c->r[11],c->r[4]); // 8027FB84
  c->r[30]=R8(c->r[1]+0x00000073u); // 8027FB88
  c->r[31]=R8(c->r[1]+0x00000077u); // 8027FB8C
  c->r[22]=c->r[5]|c->r[5]; // 8027FB90
  c->r[23]=c->r[6]|c->r[6]; // 8027FB94
  c->r[24]=c->r[7]|c->r[7]; // 8027FB98
  c->r[25]=c->r[8]|c->r[8]; // 8027FB9C
  c->r[26]=c->r[9]|c->r[9]; // 8027FBA0
  c->r[27]=c->r[10]|c->r[10]; // 8027FBA4
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBA8
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 8027FBAC
  cmpu(c,0,c->r[4],c->r[5]); // 8027FBB0
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBB4
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 8027FBB8
  cmpu(c,0,c->r[4],c->r[6]); // 8027FBBC
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBC0
  c->r[4]=rotl(c->r[0],23)&0x0000001Fu; // 8027FBC4
  cmpu(c,0,c->r[4],c->r[7]); // 8027FBC8
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBCC
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 8027FBD0
  cmpu(c,0,c->r[4],c->r[8]); // 8027FBD4
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBD8
  c->r[4]=rotl(c->r[0],17)&0x00000007u; // 8027FBDC
  cmpu(c,0,c->r[4],c->r[9]); // 8027FBE0
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBE4
  c->r[4]=rotl(c->r[0],14)&0x00000003u; // 8027FBE8
  cmpu(c,0,c->r[4],c->r[10]); // 8027FBEC
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBF0
  c->r[4]=rotl(c->r[0],24)&0x00000001u; // 8027FBF4
  cmpu(c,0,c->r[4],c->r[28]); // 8027FBF8
  if (crb(c,0)) { goto L_8027FC24; } // 8027FBFC
  c->r[4]=rotl(c->r[0],25)&0x00000001u; // 8027FC00
  cmpu(c,0,c->r[4],c->r[29]); // 8027FC04
  if (crb(c,0)) { goto L_8027FC24; } // 8027FC08
  c->r[4]=rotl(c->r[0],26)&0x00000001u; // 8027FC0C
  cmpu(c,0,c->r[4],c->r[30]); // 8027FC10
  if (crb(c,0)) { goto L_8027FC24; } // 8027FC14
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8027FC18
  cmpu(c,0,c->r[0],c->r[31]); // 8027FC1C
  if (!crb(c,0)) { goto L_802802AC; } // 8027FC20
L_8027FC24:;
  c->r[4]=R32(c->r[3]+0x00000040u); // 8027FC24
  cmps(c,0,(int32_t)c->r[4],0); // 8027FC28
  if (crb(c,2)) { goto L_8027FC58; } // 8027FC2C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027FC30
  c->lr=0x8027FC38u; f_801A0F08(c); // 8027FC34
  c->r[3]=R32(c->r[20]+0x00000038u); // 8027FC38
  c->r[4]=0u+0x00000000u; // 8027FC3C
  c->r[0]=R32(c->r[20]+0x0000003Cu); // 8027FC40
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 8027FC44
  W32(c->r[20]+0x00000040u,c->r[4]); // 8027FC48
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8027FC4C
  W32(c->r[20]+0x00000038u,c->r[3]); // 8027FC50
  W32(c->r[20]+0x0000003Cu,c->r[0]); // 8027FC54
L_8027FC58:;
  c->r[4]=c->r[27]+c->r[22]; // 8027FC58
  c->r[0]=c->r[25]+c->r[28]; // 8027FC5C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8027FC60
  c->r[5]=c->r[31]+c->r[29]; // 8027FC64
  c->r[3]=c->r[26]+c->r[23]; // 8027FC68
  c->r[4]=c->r[30]+c->r[0]; // 8027FC6C
  c->r[6]=c->r[5]+c->r[3]; // 8027FC70
  c->r[0]=rotl(c->r[24],4)&0x00000FF0u; // 8027FC74
  c->r[5]=(uint32_t)((int32_t)c->r[21]*(int32_t)28); // 8027FC78
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027FC7C
  c->r[4]=c->r[6]+c->r[4]; // 8027FC80
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027FC84
  c->r[4]=c->r[7]+c->r[4]; // 8027FC88
  c->r[0]=c->r[5]+c->r[0]; // 8027FC8C
  c->r[4]=c->r[4]+c->r[0]; // 8027FC90
  c->lr=0x8027FC98u; f_801A0EF8(c); // 8027FC94
  cmps(c,0,(int32_t)c->r[3],0); // 8027FC98
  W32(c->r[20]+0x00000040u,c->r[3]); // 8027FC9C
  if (crb(c,2)) { goto L_802802AC; } // 8027FCA0
  c->r[0]=R32(c->r[20]+0x00000038u); // 8027FCA4
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 8027FCA8
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 8027FCAC
  c->r[4]=R32(c->r[20]+0x0000003Cu); // 8027FCB0
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 8027FCB4
  c->r[6]=0u+0x00000000u; // 8027FCB8
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 8027FCBC
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 8027FCC0
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 8027FCC4
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 8027FCC8
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 8027FCCC
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 8027FCD0
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 8027FCD4
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 8027FCD8
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 8027FCDC
  W32(c->r[20]+0x00000038u,c->r[0]); // 8027FCE0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8027FCE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8027FCE8
  c->r[5]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[5]); // 8027FCEC
  W32(c->r[20]+0x0000003Cu,c->r[4]); // 8027FCF0
  c->r[4]=c->r[3]+c->r[0]; // 8027FCF4
  if (crb(c,2)) { goto L_8027FEA0; } // 8027FCF8
  cmpu(c,0,c->r[5],0x00000008u); // 8027FCFC
  c->r[3]=c->r[5]+0xFFFFFFF8u; // 8027FD00
  if (!crb(c,1)) { goto L_8027FE54; } // 8027FD04
  c->r[0]=c->r[3]+0x00000007u; // 8027FD08
  c->r[7]=c->r[4]|c->r[4]; // 8027FD0C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8027FD10
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027FD14
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027FD18
  c->ctr=c->r[0]; // 8027FD1C
  cmpu(c,0,c->r[3],0x00000000u); // 8027FD20
  if (!crb(c,1)) { goto L_8027FE54; } // 8027FD24
L_8027FD28:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 8027FD28
  c->r[6]=c->r[6]+0x00000008u; // 8027FD2C
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 8027FD30
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 8027FD34
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027FD38
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 8027FD3C
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 8027FD40
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 8027FD44
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FD48
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 8027FD4C
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 8027FD50
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 8027FD54
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 8027FD58
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 8027FD5C
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 8027FD60
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 8027FD64
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 8027FD68
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 8027FD6C
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 8027FD70
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 8027FD74
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 8027FD78
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 8027FD7C
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 8027FD80
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 8027FD84
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 8027FD88
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 8027FD8C
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 8027FD90
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 8027FD94
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 8027FD98
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 8027FD9C
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 8027FDA0
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 8027FDA4
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 8027FDA8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FDAC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FDB0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FDB4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FDB8
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 8027FDBC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FDC0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FDC4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FDC8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FDCC
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 8027FDD0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FDD4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FDD8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FDDC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FDE0
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 8027FDE4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FDE8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FDEC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FDF0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FDF4
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 8027FDF8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FDFC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FE00
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FE04
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FE08
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 8027FE0C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FE10
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FE14
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FE18
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FE1C
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 8027FE20
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FE24
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FE28
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FE2C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FE30
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 8027FE34
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 8027FE38
  c->r[7]=c->r[7]+0x000000A0u; // 8027FE3C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FE40
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FE44
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FE48
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FE4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027FD28; } // 8027FE50
L_8027FE54:;
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 8027FE54
  c->r[0]=c->r[5]-c->r[6]; // 8027FE58
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027FE5C
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027FE60
  c->r[3]=c->r[4]+c->r[3]; // 8027FE64
  c->ctr=c->r[0]; // 8027FE68
  cmpu(c,0,c->r[6],c->r[5]); // 8027FE6C
  if (!crb(c,0)) { goto L_8027FEA0; } // 8027FE70
L_8027FE74:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8027FE74
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8027FE78
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8027FE7C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027FE80
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8027FE84
  c->r[3]=c->r[3]+0x00000014u; // 8027FE88
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027FE8C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FE90
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027FE94
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027FE98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027FE74; } // 8027FE9C
L_8027FEA0:;
  c->r[10]=R32(c->r[20]+0x00000038u); // 8027FEA0
  c->r[4]=0u+0x00000000u; // 8027FEA4
  c->r[0]=R32(c->r[20]+0x00000038u); // 8027FEA8
  c->r[21]=R32(c->r[20]+0x0000003Cu); // 8027FEAC
  c->r[7]=rotl(c->r[10],27)&0x00000004u; // 8027FEB0
  c->r[21]=(rotl(c->r[0],0)&0x000C0000u)|(c->r[21]&~0x000C0000u); // 8027FEB4
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 8027FEB8
  c->r[5]=rotl(c->r[10],4)&0x0000000Fu; // 8027FEBC
  c->r[6]=rotl(c->r[10],8)&0x0000000Fu; // 8027FEC0
  c->r[0]=c->r[7]+c->r[0]; // 8027FEC4
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 8027FEC8
  c->r[9]=rotl(c->r[10],20)&0x00000004u; // 8027FECC
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 8027FED0
  c->r[9]=c->r[9]+c->r[7]; // 8027FED4
  c->r[11]=rotl(c->r[10],19)&0x0000001Cu; // 8027FED8
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 8027FEDC
  c->r[8]=c->r[8]+c->r[0]; // 8027FEE0
  c->r[10]=rotl(c->r[10],29)&0x00000004u; // 8027FEE4
  c->r[12]=R32(c->r[20]+0x00000040u); // 8027FEE8
  c->r[3]=rotl(c->r[21],14)&0x00000003u; cr0(c,c->r[3]); // 8027FEEC
  W32(c->r[20]+0x0000003Cu,c->r[21]); // 8027FEF0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 8027FEF4
  c->r[0]=c->r[11]+c->r[10]; // 8027FEF8
  c->r[6]=c->r[9]+c->r[8]; // 8027FEFC
  c->r[0]=c->r[12]+c->r[0]; // 8027FF00
  c->r[5]=c->r[7]+c->r[5]; // 8027FF04
  c->r[5]=c->r[6]+c->r[5]; // 8027FF08
  c->r[6]=c->r[5]+c->r[0]; // 8027FF0C
  if (crb(c,2)) { goto L_802800B8; } // 8027FF10
  cmpu(c,0,c->r[3],0x00000008u); // 8027FF14
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 8027FF18
  if (!crb(c,1)) { goto L_8028006C; } // 8027FF1C
  c->r[0]=c->r[5]+0x00000007u; // 8027FF20
  c->r[7]=c->r[6]|c->r[6]; // 8027FF24
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8027FF28
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027FF2C
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027FF30
  c->ctr=c->r[0]; // 8027FF34
  cmpu(c,0,c->r[5],0x00000000u); // 8027FF38
  if (!crb(c,1)) { goto L_8028006C; } // 8027FF3C
L_8027FF40:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 8027FF40
  c->r[4]=c->r[4]+0x00000008u; // 8027FF44
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 8027FF48
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 8027FF4C
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027FF50
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 8027FF54
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 8027FF58
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 8027FF5C
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027FF60
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 8027FF64
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 8027FF68
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 8027FF6C
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 8027FF70
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 8027FF74
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 8027FF78
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 8027FF7C
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 8027FF80
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 8027FF84
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 8027FF88
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 8027FF8C
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 8027FF90
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 8027FF94
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 8027FF98
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 8027FF9C
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 8027FFA0
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 8027FFA4
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 8027FFA8
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 8027FFAC
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 8027FFB0
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 8027FFB4
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 8027FFB8
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 8027FFBC
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 8027FFC0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8027FFC4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8027FFC8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027FFCC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8027FFD0
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 8027FFD4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8027FFD8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8027FFDC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027FFE0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8027FFE4
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 8027FFE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8027FFEC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8027FFF0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027FFF4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8027FFF8
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 8027FFFC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80280000
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80280004
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80280008
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8028000C
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 80280010
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80280014
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80280018
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8028001C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80280020
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 80280024
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80280028
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8028002C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80280030
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80280034
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 80280038
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8028003C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80280040
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80280044
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80280048
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 8028004C
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 80280050
  c->r[7]=c->r[7]+0x000000A0u; // 80280054
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80280058
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8028005C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80280060
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80280064
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027FF40; } // 80280068
L_8028006C:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8028006C
  c->r[0]=c->r[3]-c->r[4]; // 80280070
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80280074
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80280078
  c->r[5]=c->r[6]+c->r[5]; // 8028007C
  c->ctr=c->r[0]; // 80280080
  cmpu(c,0,c->r[4],c->r[3]); // 80280084
  if (!crb(c,0)) { goto L_802800B8; } // 80280088
L_8028008C:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 8028008C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 80280090
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 80280094
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 80280098
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 8028009C
  c->r[5]=c->r[5]+0x00000014u; // 802800A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802800A4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802800A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802800AC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802800B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028008C; } // 802800B4
L_802800B8:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 802800B8
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 802800BC
  c->r[3]=(rotl(c->r[0],0)&0x00000100u)|(c->r[3]&~0x00000100u); // 802800C0
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 802800C4
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 802800C8
  if (crb(c,2)) { goto L_8028010C; } // 802800CC
  c->r[6]=R32(c->r[20]+0x00000038u); // 802800D0
  c->r[3]=0u+0x00000001u; // 802800D4
  c->r[7]=R32(c->r[20]+0x00000040u); // 802800D8
  c->r[0]=0u+0x00000000u; // 802800DC
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 802800E0
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 802800E4
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 802800E8
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 802800EC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 802800F0
  c->r[5]=c->r[6]+c->r[5]; // 802800F4
  c->r[4]=c->r[7]+c->r[4]; // 802800F8
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 802800FC
  W8(c->r[4]+0x00000001u,c->r[3]); // 80280100
  W8(c->r[4]+0x00000002u,c->r[0]); // 80280104
  W8(c->r[4]+0x00000003u,c->r[0]); // 80280108
L_8028010C:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 8028010C
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 80280110
  c->r[3]=(rotl(c->r[0],0)&0x00000080u)|(c->r[3]&~0x00000080u); // 80280114
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 80280118
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 8028011C
  if (crb(c,2)) { goto L_80280158; } // 80280120
  c->r[5]=R32(c->r[20]+0x00000038u); // 80280124
  c->r[8]=0u+0xFFFFFFFFu; // 80280128
  c->r[7]=R32(c->r[20]+0x00000040u); // 8028012C
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 80280130
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 80280134
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280138
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 8028013C
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 80280140
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280144
  c->r[0]=c->r[6]+c->r[5]; // 80280148
  c->r[0]=c->r[7]+c->r[0]; // 8028014C
  c->r[3]=c->r[4]+c->r[3]; // 80280150
  W32(c->r[3]+c->r[0],c->r[8]); // 80280154
L_80280158:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 80280158
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 8028015C
  c->r[3]=(rotl(c->r[0],0)&0x00004000u)|(c->r[3]&~0x00004000u); // 80280160
  c->r[0]=rotl(c->r[3],18)&0x00000001u; cr0(c,c->r[0]); // 80280164
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 80280168
  if (crb(c,2)) { goto L_802801C4; } // 8028016C
  c->r[9]=R32(c->r[20]+0x00000038u); // 80280170
  c->r[5]=0u+0x000000E4u; // 80280174
  c->r[10]=R32(c->r[20]+0x00000040u); // 80280178
  c->r[4]=0u+0x000000C0u; // 8028017C
  c->r[3]=rotl(c->r[9],8)&0x0000000Fu; // 80280180
  c->r[0]=rotl(c->r[9],4)&0x0000000Fu; // 80280184
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280188
  c->r[7]=rotl(c->r[9],27)&0x00000004u; // 8028018C
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 80280190
  c->r[9]=rotl(c->r[9],14)&0x0000003Cu; // 80280194
  c->r[6]=c->r[7]+c->r[6]; // 80280198
  c->r[3]=0u+0x000000D5u; // 8028019C
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 802801A0
  c->r[0]=0u+0x000000EAu; // 802801A4
  c->r[6]=c->r[9]+c->r[6]; // 802801A8
  c->r[7]=c->r[8]+c->r[7]; // 802801AC
  c->r[6]=c->r[10]+c->r[6]; // 802801B0
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 802801B4
  W8(c->r[6]+0x00000001u,c->r[4]); // 802801B8
  W8(c->r[6]+0x00000002u,c->r[3]); // 802801BC
  W8(c->r[6]+0x00000003u,c->r[0]); // 802801C0
L_802801C4:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 802801C4
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 802801C8
  c->r[3]=(rotl(c->r[0],0)&0x00000040u)|(c->r[3]&~0x00000040u); // 802801CC
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 802801D0
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 802801D4
  if (crb(c,2)) { goto L_80280230; } // 802801D8
  c->r[6]=R32(c->r[20]+0x00000038u); // 802801DC
  c->r[3]=0u+0x00000077u; // 802801E0
  c->r[11]=R32(c->r[20]+0x00000040u); // 802801E4
  c->r[0]=0u+0x00000000u; // 802801E8
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 802801EC
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 802801F0
  c->r[10]=rotl(c->r[6],20)&0x00000004u; // 802801F4
  c->r[7]=rotl(c->r[6],14)&0x0000003Cu; // 802801F8
  c->r[9]=rotl(c->r[6],27)&0x00000004u; // 802801FC
  c->r[8]=rotl(c->r[6],26)&0x00000004u; // 80280200
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 80280204
  c->r[7]=c->r[10]+c->r[7]; // 80280208
  c->r[8]=c->r[9]+c->r[8]; // 8028020C
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 80280210
  c->r[4]=c->r[8]+c->r[7]; // 80280214
  c->r[4]=c->r[11]+c->r[4]; // 80280218
  c->r[5]=c->r[6]+c->r[5]; // 8028021C
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 80280220
  W8(c->r[4]+0x00000001u,c->r[0]); // 80280224
  W8(c->r[4]+0x00000002u,c->r[0]); // 80280228
  W8(c->r[4]+0x00000003u,c->r[0]); // 8028022C
L_80280230:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 80280230
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 80280234
  c->r[3]=(rotl(c->r[0],0)&0x00000020u)|(c->r[3]&~0x00000020u); // 80280238
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 8028023C
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 80280240
  if (crb(c,2)) { goto L_802802AC; } // 80280244
  c->r[7]=R32(c->r[20]+0x00000038u); // 80280248
  c->r[5]=0u+0x00000001u; // 8028024C
  c->r[11]=R32(c->r[20]+0x00000040u); // 80280250
  c->r[4]=0u+0x00000004u; // 80280254
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 80280258
  c->r[0]=rotl(c->r[7],4)&0x0000000Fu; // 8028025C
  c->r[8]=rotl(c->r[7],27)&0x00000004u; // 80280260
  c->r[6]=rotl(c->r[7],26)&0x00000004u; // 80280264
  c->r[6]=c->r[8]+c->r[6]; // 80280268
  c->r[10]=rotl(c->r[7],28)&0x00000004u; // 8028026C
  c->r[9]=rotl(c->r[7],20)&0x00000004u; // 80280270
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 80280274
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280278
  c->r[6]=c->r[10]+c->r[6]; // 8028027C
  c->r[9]=c->r[9]+c->r[7]; // 80280280
  c->r[3]=0u+0x00000005u; // 80280284
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280288
  c->r[6]=c->r[9]+c->r[6]; // 8028028C
  c->r[0]=0u+0x0000000Fu; // 80280290
  c->r[6]=c->r[11]+c->r[6]; // 80280294
  c->r[7]=c->r[8]+c->r[7]; // 80280298
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 8028029C
  W8(c->r[6]+0x00000001u,c->r[4]); // 802802A0
  W8(c->r[6]+0x00000002u,c->r[3]); // 802802A4
  W8(c->r[6]+0x00000003u,c->r[0]); // 802802A8
L_802802AC:;
  c->r[11]=c->r[1]+0x00000060u; // 802802AC
  c->lr=0x802802B4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802802B0
  c->r[0]=R32(c->r[1]+0x00000064u); // 802802B4
  c->lr=c->r[0]; // 802802B8
  c->r[1]=c->r[1]+0x00000060u; // 802802BC
  return; // 802802C0
}

// GetTexMapAry__Q34nw4r3lyt8MaterialCFv
void f_802802C4(Ctx* __restrict c) {
  trace_call(0x802802C4u);
  c->r[3]=R32(c->r[3]+0x00000040u); // 802802C4
  return; // 802802C8
}

// GetTexSRTAry__Q34nw4r3lyt8MaterialFv
void f_802802CC(Ctx* __restrict c) {
  trace_call(0x802802CCu);
  c->r[0]=R32(c->r[3]+0x00000038u); // 802802CC
  c->r[3]=R32(c->r[3]+0x00000040u); // 802802D0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 802802D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 802802D8
  c->r[3]=c->r[3]+c->r[0]; // 802802DC
  return; // 802802E0
}

// GetTexCoordGenAry__Q34nw4r3lyt8MaterialFv
void f_802802E4(Ctx* __restrict c) {
  trace_call(0x802802E4u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 802802E4
  c->r[5]=R32(c->r[3]+0x00000040u); // 802802E8
  c->r[3]=rotl(c->r[0],8)&0x0000000Fu; // 802802EC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 802802F0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802802F4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 802802F8
  c->r[0]=c->r[5]+c->r[4]; // 802802FC
  c->r[3]=c->r[3]+c->r[0]; // 80280300
  return; // 80280304
}

// GetChanCtrlAry__Q34nw4r3lyt8MaterialFv
void f_80280308(Ctx* __restrict c) {
  trace_call(0x80280308u);
  c->r[4]=R32(c->r[3]+0x00000038u); // 80280308
  c->r[5]=R32(c->r[3]+0x00000040u); // 8028030C
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 80280310
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 80280314
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280318
  c->r[4]=rotl(c->r[4],14)&0x0000003Cu; // 8028031C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280320
  c->r[0]=c->r[5]+c->r[0]; // 80280324
  c->r[3]=c->r[4]+c->r[3]; // 80280328
  c->r[3]=c->r[3]+c->r[0]; // 8028032C
  return; // 80280330
}

// GetMatColAry__Q34nw4r3lyt8MaterialFv
void f_80280334(Ctx* __restrict c) {
  trace_call(0x80280334u);
  c->r[5]=R32(c->r[3]+0x00000038u); // 80280334
  c->r[7]=R32(c->r[3]+0x00000040u); // 80280338
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 8028033C
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 80280340
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280344
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 80280348
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 8028034C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280350
  c->r[0]=c->r[6]+c->r[5]; // 80280354
  c->r[0]=c->r[7]+c->r[0]; // 80280358
  c->r[3]=c->r[4]+c->r[3]; // 8028035C
  c->r[3]=c->r[3]+c->r[0]; // 80280360
  return; // 80280364
}

// GetTevSwapAry__Q34nw4r3lyt8MaterialFv
void f_80280368(Ctx* __restrict c) {
  trace_call(0x80280368u);
  c->r[6]=R32(c->r[3]+0x00000038u); // 80280368
  c->r[8]=R32(c->r[3]+0x00000040u); // 8028036C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 80280370
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 80280374
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280378
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 8028037C
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 80280380
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 80280384
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280388
  c->r[5]=c->r[7]+c->r[5]; // 8028038C
  c->r[0]=c->r[6]+c->r[5]; // 80280390
  c->r[0]=c->r[8]+c->r[0]; // 80280394
  c->r[3]=c->r[4]+c->r[3]; // 80280398
  c->r[3]=c->r[3]+c->r[0]; // 8028039C
  return; // 802803A0
}

// GetAlphaComparePtr__Q34nw4r3lyt8MaterialFv
void f_802803A4(Ctx* __restrict c) {
  trace_call(0x802803A4u);
  c->r[4]=R32(c->r[3]+0x00000038u); // 802803A4
  c->r[9]=R32(c->r[3]+0x00000040u); // 802803A8
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 802803AC
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 802803B0
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 802803B4
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 802803B8
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 802803BC
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 802803C0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802803C4
  c->r[5]=c->r[8]+c->r[5]; // 802803C8
  c->r[6]=c->r[7]+c->r[6]; // 802803CC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 802803D0
  c->r[0]=c->r[6]+c->r[5]; // 802803D4
  c->r[0]=c->r[9]+c->r[0]; // 802803D8
  c->r[3]=c->r[4]+c->r[3]; // 802803DC
  c->r[3]=c->r[3]+c->r[0]; // 802803E0
  return; // 802803E4
}

// GetBlendModePtr__Q34nw4r3lyt8MaterialFv
void f_802803E8(Ctx* __restrict c) {
  trace_call(0x802803E8u);
  c->r[6]=R32(c->r[3]+0x00000038u); // 802803E8
  c->r[9]=R32(c->r[3]+0x00000040u); // 802803EC
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 802803F0
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 802803F4
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 802803F8
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 802803FC
  c->r[5]=c->r[5]+c->r[4]; // 80280400
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 80280404
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 80280408
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 8028040C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280410
  c->r[5]=c->r[8]+c->r[5]; // 80280414
  c->r[6]=c->r[7]+c->r[6]; // 80280418
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8028041C
  c->r[0]=c->r[6]+c->r[5]; // 80280420
  c->r[0]=c->r[9]+c->r[0]; // 80280424
  c->r[3]=c->r[4]+c->r[3]; // 80280428
  c->r[3]=c->r[3]+c->r[0]; // 8028042C
  return; // 80280430
}

// GetIndirectStageAry__Q34nw4r3lyt8MaterialFv
void f_80280434(Ctx* __restrict c) {
  trace_call(0x80280434u);
  c->r[8]=R32(c->r[3]+0x00000038u); // 80280434
  c->r[9]=R32(c->r[3]+0x00000040u); // 80280438
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 8028043C
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 80280440
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 80280444
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 80280448
  c->r[4]=c->r[5]+c->r[4]; // 8028044C
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 80280450
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280454
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 80280458
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 8028045C
  c->r[4]=c->r[7]+c->r[4]; // 80280460
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280464
  c->r[5]=c->r[6]+c->r[5]; // 80280468
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 8028046C
  c->r[0]=c->r[3]+c->r[0]; // 80280470
  c->r[3]=c->r[5]+c->r[4]; // 80280474
  c->r[3]=c->r[6]+c->r[3]; // 80280478
  c->r[0]=c->r[9]+c->r[0]; // 8028047C
  c->r[3]=c->r[3]+c->r[0]; // 80280480
  return; // 80280484
}

// GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv
void f_80280488(Ctx* __restrict c) {
  trace_call(0x80280488u);
  c->r[10]=R32(c->r[3]+0x00000038u); // 80280488
  c->r[11]=R32(c->r[3]+0x00000040u); // 8028048C
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 80280490
  c->r[0]=rotl(c->r[10],4)&0x0000000Fu; // 80280494
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280498
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 8028049C
  c->r[5]=rotl(c->r[10],26)&0x00000004u; // 802804A0
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 802804A4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 802804A8
  c->r[5]=c->r[6]+c->r[5]; // 802804AC
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 802804B0
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 802804B4
  c->r[9]=rotl(c->r[10],19)&0x0000001Cu; // 802804B8
  c->r[0]=rotl(c->r[10],29)&0x00000004u; // 802804BC
  c->r[0]=c->r[9]+c->r[0]; // 802804C0
  c->r[6]=c->r[7]+c->r[6]; // 802804C4
  c->r[5]=c->r[8]+c->r[5]; // 802804C8
  c->r[3]=c->r[4]+c->r[3]; // 802804CC
  c->r[4]=c->r[6]+c->r[5]; // 802804D0
  c->r[0]=c->r[11]+c->r[0]; // 802804D4
  c->r[3]=c->r[4]+c->r[3]; // 802804D8
  c->r[3]=c->r[3]+c->r[0]; // 802804DC
  return; // 802804E0
}

// GetTevStageAry__Q34nw4r3lyt8MaterialFv
void f_802804E4(Ctx* __restrict c) {
  trace_call(0x802804E4u);
  c->r[7]=R32(c->r[3]+0x00000038u); // 802804E4
  c->r[8]=R32(c->r[3]+0x00000040u); // 802804E8
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 802804EC
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 802804F0
  c->r[3]=c->r[3]+c->r[0]; // 802804F4
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 802804F8
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802804FC
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 80280500
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 80280504
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 80280508
  c->r[0]=c->r[4]+c->r[0]; // 8028050C
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 80280510
  c->r[0]=c->r[3]+c->r[0]; // 80280514
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 80280518
  c->r[0]=c->r[4]+c->r[0]; // 8028051C
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 80280520
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 80280524
  c->r[0]=c->r[3]+c->r[0]; // 80280528
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 8028052C
  c->r[5]=c->r[6]+c->r[5]; // 80280530
  c->r[0]=c->r[5]+c->r[0]; // 80280534
  c->r[3]=c->r[4]+c->r[3]; // 80280538
  c->r[0]=c->r[8]+c->r[0]; // 8028053C
  c->r[3]=c->r[3]+c->r[0]; // 80280540
  return; // 80280544
}

// SetName__Q34nw4r3lyt8MaterialFPCc
void f_80280548(Ctx* __restrict c) {
  trace_call(0x80280548u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80280548
  c->r[0]=c->lr; // 8028054C
  c->r[5]=0u+0x00000014u; // 80280550
  W32(c->r[1]+0x00000014u,c->r[0]); // 80280554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80280558
  c->r[31]=c->r[3]|c->r[3]; // 8028055C
  c->r[3]=c->r[3]+0x00000044u; // 80280560
  c->lr=0x80280568u; f_801900A4(c); // 80280564
  c->r[0]=0u+0x00000000u; // 80280568
  W8(c->r[31]+0x00000058u,c->r[0]); // 8028056C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80280570
  c->r[0]=R32(c->r[1]+0x00000014u); // 80280574
  c->lr=c->r[0]; // 80280578
  c->r[1]=c->r[1]+0x00000010u; // 8028057C
  return; // 80280580
}

// SetTextureNum__Q34nw4r3lyt8MaterialFUc
void f_80280584(Ctx* __restrict c) {
  trace_call(0x80280584u);
  cmps(c,0,(int32_t)c->r[4],0); // 80280584
  if (crb(c,2)) { goto L_80280604; } // 80280588
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8028058C
  c->r[6]=0u+0x00000000u; // 80280590
  c->r[8]=R32(c->r[3]+0x00000040u); // 80280594
  c->r[5]=0u+0x00000001u; // 80280598
  c->r[9]=rotl(c->r[0],4)&0x0000000Fu; // 8028059C
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802805A0
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)28); // 802805A4
  c->r[0]=c->r[4]-c->r[9]; // 802805A8
  c->r[7]=c->r[8]+c->r[7]; // 802805AC
  c->ctr=c->r[0]; // 802805B0
  cmpu(c,0,c->r[9],c->r[4]); // 802805B4
  if (!crb(c,0)) { goto L_80280604; } // 802805B8
L_802805BC:;
  cmps(c,0,(int32_t)c->r[7],0); // 802805BC
  if (crb(c,2)) { goto L_802805FC; } // 802805C0
  W32(c->r[7]+0x00000000u,c->r[6]); // 802805C4
  W16(c->r[7]+0x00000008u,c->r[6]); // 802805C8
  W16(c->r[7]+0x0000000Au,c->r[6]); // 802805CC
  c->r[0]=R32(c->r[7]+0x00000018u); // 802805D0
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 802805D4
  c->r[0]=rotl(c->r[0],0)&0x007FFFFFu; // 802805D8
  c->r[0]=(rotl(c->r[5],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 802805DC
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 802805E0
  c->r[0]=c->r[0]|0x00080000u; // 802805E4
  c->r[0]=rotl(c->r[0],0)&0xFFF81FFFu; // 802805E8
  W16(c->r[7]+0x00000014u,c->r[6]); // 802805EC
  W32(c->r[7]+0x00000004u,c->r[6]); // 802805F0
  W32(c->r[7]+0x00000018u,c->r[0]); // 802805F4
  W16(c->r[7]+0x00000016u,c->r[6]); // 802805F8
L_802805FC:;
  c->r[7]=c->r[7]+0x0000001Cu; // 802805FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802805BC; } // 80280600
L_80280604:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80280604
  c->r[0]=(rotl(c->r[4],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 80280608
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8028060C
  return; // 80280610
}

// SetTexCoordGenNum__Q34nw4r3lyt8MaterialFUc
void f_80280614(Ctx* __restrict c) {
  trace_call(0x80280614u);
  cmps(c,0,(int32_t)c->r[4],0); // 80280614
  if (crb(c,2)) { goto L_8028068C; } // 80280618
  c->r[0]=R32(c->r[3]+0x00000038u); // 8028061C
  c->r[8]=0u+0x00000000u; // 80280620
  c->r[9]=R32(c->r[3]+0x0000003Cu); // 80280624
  c->r[7]=0u+0x00000001u; // 80280628
  c->r[5]=rotl(c->r[0],8)&0x0000000Fu; // 8028062C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80280630
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 80280634
  c->r[6]=R32(c->r[3]+0x00000040u); // 80280638
  c->r[11]=rotl(c->r[9],12)&0x0000000Fu; // 8028063C
  c->r[10]=rotl(c->r[9],14)&0x0000003Cu; // 80280640
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280644
  c->r[0]=c->r[4]-c->r[11]; // 80280648
  c->r[5]=c->r[6]+c->r[5]; // 8028064C
  c->r[6]=0u+0x00000004u; // 80280650
  c->r[9]=c->r[9]+c->r[5]; // 80280654
  c->r[5]=0u+0x0000003Cu; // 80280658
  c->r[9]=c->r[10]+c->r[9]; // 8028065C
  c->ctr=c->r[0]; // 80280660
  cmpu(c,0,c->r[11],c->r[4]); // 80280664
  if (!crb(c,0)) { goto L_8028068C; } // 80280668
L_8028066C:;
  cmps(c,0,(int32_t)c->r[9],0); // 8028066C
  if (crb(c,2)) { goto L_80280684; } // 80280670
  W8(c->r[9]+0x00000003u,c->r[8]); // 80280674
  W8(c->r[9]+0x00000000u,c->r[7]); // 80280678
  W8(c->r[9]+0x00000001u,c->r[6]); // 8028067C
  W8(c->r[9]+0x00000002u,c->r[5]); // 80280680
L_80280684:;
  c->r[9]=c->r[9]+0x00000004u; // 80280684
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028066C; } // 80280688
L_8028068C:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8028068C
  c->r[0]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 80280690
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80280694
  return; // 80280698
}

// SetTevStageNum__Q34nw4r3lyt8MaterialFUc
void f_8028069C(Ctx* __restrict c) {
  trace_call(0x8028069Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028069C
  cmps(c,0,(int32_t)c->r[4],0); // 802806A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802806A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802806A8
  if (crb(c,2)) { goto L_802807A0; } // 802806AC
  c->r[10]=R32(c->r[3]+0x00000038u); // 802806B0
  c->r[31]=0u+0x000000FFu; // 802806B4
  c->r[30]=R32(c->r[3]+0x0000003Cu); // 802806B8
  c->r[12]=0u+0x00000004u; // 802806BC
  c->r[5]=rotl(c->r[10],14)&0x00000003u; // 802806C0
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 802806C4
  c->r[5]=c->r[5]+c->r[0]; // 802806C8
  c->r[8]=rotl(c->r[10],4)&0x0000000Fu; // 802806CC
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 802806D0
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 802806D4
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 802806D8
  c->r[11]=R32(c->r[3]+0x00000040u); // 802806DC
  c->r[5]=rotl(c->r[10],27)&0x00000004u; // 802806E0
  c->r[0]=c->r[6]+c->r[0]; // 802806E4
  c->r[5]=c->r[5]+c->r[0]; // 802806E8
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 802806EC
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)28); // 802806F0
  c->r[6]=rotl(c->r[10],28)&0x00000004u; // 802806F4
  c->r[5]=c->r[7]+c->r[5]; // 802806F8
  c->r[0]=rotl(c->r[30],23)&0x0000001Fu; // 802806FC
  c->r[7]=c->r[9]+c->r[8]; // 80280700
  c->r[6]=c->r[6]+c->r[5]; // 80280704
  c->r[6]=c->r[7]+c->r[6]; // 80280708
  c->r[8]=rotl(c->r[10],29)&0x00000004u; // 8028070C
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 80280710
  c->r[7]=rotl(c->r[30],27)&0x000001F0u; // 80280714
  c->r[8]=c->r[8]+c->r[5]; // 80280718
  c->r[6]=c->r[11]+c->r[6]; // 8028071C
  c->r[6]=c->r[8]+c->r[6]; // 80280720
  c->r[5]=c->r[4]-c->r[0]; // 80280724
  c->r[30]=c->r[7]+c->r[6]; // 80280728
  c->r[11]=0u+0x00000000u; // 8028072C
  c->r[10]=0u+0x000000AFu; // 80280730
  c->r[9]=0u+0x00000077u; // 80280734
  c->r[8]=0u+0x00000057u; // 80280738
  c->r[7]=0u+0x00000061u; // 8028073C
  c->r[6]=0u+0x00000081u; // 80280740
  c->ctr=c->r[5]; // 80280744
  cmpu(c,0,c->r[0],c->r[4]); // 80280748
  if (!crb(c,0)) { goto L_802807A0; } // 8028074C
L_80280750:;
  cmps(c,0,(int32_t)c->r[30],0); // 80280750
  if (crb(c,2)) { goto L_80280798; } // 80280754
  W8(c->r[30]+0x00000000u,c->r[31]); // 80280758
  W8(c->r[30]+0x00000001u,c->r[12]); // 8028075C
  W8(c->r[30]+0x00000002u,c->r[31]); // 80280760
  W8(c->r[30]+0x00000003u,c->r[11]); // 80280764
  W8(c->r[30]+0x00000004u,c->r[31]); // 80280768
  W8(c->r[30]+0x00000005u,c->r[10]); // 8028076C
  W8(c->r[30]+0x00000008u,c->r[9]); // 80280770
  W8(c->r[30]+0x00000009u,c->r[8]); // 80280774
  W8(c->r[30]+0x00000006u,c->r[11]); // 80280778
  W8(c->r[30]+0x00000007u,c->r[7]); // 8028077C
  W8(c->r[30]+0x0000000Au,c->r[11]); // 80280780
  W8(c->r[30]+0x0000000Bu,c->r[6]); // 80280784
  W8(c->r[30]+0x0000000Cu,c->r[11]); // 80280788
  W8(c->r[30]+0x0000000Du,c->r[11]); // 8028078C
  W8(c->r[30]+0x0000000Eu,c->r[11]); // 80280790
  W8(c->r[30]+0x0000000Fu,c->r[11]); // 80280794
L_80280798:;
  c->r[30]=c->r[30]+0x00000010u; // 80280798
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80280750; } // 8028079C
L_802807A0:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802807A0
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 802807A4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 802807A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802807AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802807B0
  c->r[1]=c->r[1]+0x00000010u; // 802807B4
  return; // 802807B8
}

// SetIndStageNum__Q34nw4r3lyt8MaterialFUc
void f_802807BC(Ctx* __restrict c) {
  trace_call(0x802807BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802807BC
  cmps(c,0,(int32_t)c->r[4],0); // 802807C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802807C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802807C8
  if (crb(c,2)) { goto L_80280864; } // 802807CC
  c->r[11]=R32(c->r[3]+0x00000038u); // 802807D0
  c->r[5]=0u+0x00000000u; // 802807D4
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 802807D8
  c->r[6]=rotl(c->r[11],8)&0x0000000Fu; // 802807DC
  c->r[0]=rotl(c->r[11],4)&0x0000000Fu; // 802807E0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 802807E4
  c->r[8]=rotl(c->r[11],27)&0x00000004u; // 802807E8
  c->r[7]=rotl(c->r[11],26)&0x00000004u; // 802807EC
  c->r[12]=R32(c->r[3]+0x00000040u); // 802807F0
  c->r[10]=rotl(c->r[11],28)&0x00000004u; // 802807F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 802807F8
  c->r[8]=c->r[8]+c->r[7]; // 802807FC
  c->r[9]=rotl(c->r[11],20)&0x00000004u; // 80280800
  c->r[0]=c->r[6]+c->r[0]; // 80280804
  c->r[7]=rotl(c->r[11],14)&0x0000003Cu; // 80280808
  c->r[6]=c->r[10]+c->r[8]; // 8028080C
  c->r[8]=rotl(c->r[11],29)&0x00000004u; // 80280810
  c->r[7]=c->r[9]+c->r[7]; // 80280814
  c->r[30]=rotl(c->r[31],17)&0x00000007u; // 80280818
  c->r[6]=c->r[7]+c->r[6]; // 8028081C
  c->r[0]=c->r[12]+c->r[0]; // 80280820
  c->r[6]=c->r[8]+c->r[6]; // 80280824
  c->r[7]=rotl(c->r[31],19)&0x0000001Cu; // 80280828
  c->r[6]=c->r[6]+c->r[0]; // 8028082C
  c->r[0]=c->r[4]-c->r[30]; // 80280830
  c->r[6]=c->r[7]+c->r[6]; // 80280834
  c->ctr=c->r[0]; // 80280838
  cmpu(c,0,c->r[30],c->r[4]); // 8028083C
  if (!crb(c,0)) { goto L_80280864; } // 80280840
L_80280844:;
  cmps(c,0,(int32_t)c->r[6],0); // 80280844
  if (crb(c,2)) { goto L_8028085C; } // 80280848
  W8(c->r[6]+0x00000000u,c->r[5]); // 8028084C
  W8(c->r[6]+0x00000001u,c->r[5]); // 80280850
  W8(c->r[6]+0x00000002u,c->r[5]); // 80280854
  W8(c->r[6]+0x00000003u,c->r[5]); // 80280858
L_8028085C:;
  c->r[6]=c->r[6]+0x00000004u; // 8028085C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80280844; } // 80280860
L_80280864:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80280864
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80280868
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8028086C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80280870
  c->r[30]=R32(c->r[1]+0x00000008u); // 80280874
  c->r[1]=c->r[1]+0x00000010u; // 80280878
  return; // 8028087C
}

// SetColorElement__Q34nw4r3lyt8MaterialFUls
void f_80280880(Ctx* __restrict c) {
  trace_call(0x80280880u);
  cmps(c,0,(int32_t)c->r[4],16); // 80280880
  if (!crb(c,0)) { goto L_8028089C; } // 80280884
  cmps(c,0,(int32_t)c->r[4],4); // 80280888
  if (!crb(c,0)) { goto L_80280954; } // 8028088C
  cmps(c,0,(int32_t)c->r[4],0); // 80280890
  if (!crb(c,0)) { goto L_802808A8; } // 80280894
  return; // 80280898
L_8028089C:;
  cmps(c,0,(int32_t)c->r[4],32); // 8028089C
  if (!crb(c,0)) return; // 802808A0
  goto L_802809C8; // 802808A4
L_802808A8:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802808A8
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 802808AC
  cmpu(c,0,c->r[0],0x00000001u); // 802808B0
  if (crb(c,0)) return; // 802808B4
  c->r[7]=R32(c->r[3]+0x00000038u); // 802808B8
  c->r[0]=sraw(c,c->r[5],31); // 802808BC
  c->r[10]=c->r[5]&~c->r[0]; // 802808C0
  c->r[9]=R32(c->r[3]+0x00000040u); // 802808C4
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 802808C8
  c->r[3]=rotl(c->r[7],4)&0x0000000Fu; // 802808CC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802808D0
  c->r[8]=rotl(c->r[7],26)&0x00000004u; // 802808D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[10]; // 802808D8
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 802808DC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 802808E0
  cmps(c,0,(int32_t)c->r[0],255); // 802808E4
  c->r[0]=c->r[8]+c->r[7]; // 802808E8
  c->r[3]=0u+0x000000FFu; // 802808EC
  c->r[5]=c->r[6]+c->r[5]; // 802808F0
  c->r[0]=c->r[9]+c->r[0]; // 802808F4
  c->r[5]=c->r[5]+c->r[0]; // 802808F8
  if (crb(c,1)) { goto L_80280904; } // 802808FC
  c->r[3]=c->r[10]|c->r[10]; // 80280900
L_80280904:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80280904
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80280908
  cmps(c,0,(int32_t)c->r[0],2); // 8028090C
  if (crb(c,2)) { goto L_80280944; } // 80280910
  if (!crb(c,0)) { goto L_80280928; } // 80280914
  cmps(c,0,(int32_t)c->r[0],0); // 80280918
  if (crb(c,2)) { goto L_80280934; } // 8028091C
  if (!crb(c,0)) { goto L_8028093C; } // 80280920
  return; // 80280924
L_80280928:;
  cmps(c,0,(int32_t)c->r[0],4); // 80280928
  if (!crb(c,0)) return; // 8028092C
  goto L_8028094C; // 80280930
L_80280934:;
  W8(c->r[5]+0x00000000u,c->r[3]); // 80280934
  return; // 80280938
L_8028093C:;
  W8(c->r[5]+0x00000001u,c->r[3]); // 8028093C
  return; // 80280940
L_80280944:;
  W8(c->r[5]+0x00000002u,c->r[3]); // 80280944
  return; // 80280948
L_8028094C:;
  W8(c->r[5]+0x00000003u,c->r[3]); // 8028094C
  return; // 80280950
L_80280954:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 80280954
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80280958
  cmps(c,0,(int32_t)c->r[0],2); // 8028095C
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 80280960
  if (crb(c,2)) { goto L_802809A8; } // 80280964
  if (!crb(c,0)) { goto L_8028097C; } // 80280968
  cmps(c,0,(int32_t)c->r[0],0); // 8028096C
  if (crb(c,2)) { goto L_80280988; } // 80280970
  if (!crb(c,0)) { goto L_80280998; } // 80280974
  return; // 80280978
L_8028097C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8028097C
  if (!crb(c,0)) return; // 80280980
  goto L_802809B8; // 80280984
L_80280988:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80280988
  c->r[3]=c->r[3]+c->r[0]; // 8028098C
  W16(c->r[3]+0x00000010u,c->r[5]); // 80280990
  return; // 80280994
L_80280998:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80280998
  c->r[3]=c->r[3]+c->r[0]; // 8028099C
  W16(c->r[3]+0x00000012u,c->r[5]); // 802809A0
  return; // 802809A4
L_802809A8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802809A8
  c->r[3]=c->r[3]+c->r[0]; // 802809AC
  W16(c->r[3]+0x00000014u,c->r[5]); // 802809B0
  return; // 802809B4
L_802809B8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802809B8
  c->r[3]=c->r[3]+c->r[0]; // 802809BC
  W16(c->r[3]+0x00000016u,c->r[5]); // 802809C0
  return; // 802809C4
L_802809C8:;
  c->r[0]=sraw(c,c->r[5],31); // 802809C8
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 802809CC
  c->r[7]=c->r[5]&~c->r[0]; // 802809D0
  c->r[5]=0u+0x000000FFu; // 802809D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 802809D8
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 802809DC
  cmps(c,0,(int32_t)c->r[0],255); // 802809E0
  if (crb(c,1)) { goto L_802809EC; } // 802809E4
  c->r[5]=c->r[7]|c->r[7]; // 802809E8
L_802809EC:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 802809EC
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 802809F0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 802809F4
  cmps(c,0,(int32_t)c->r[0],2); // 802809F8
  if (crb(c,2)) { goto L_80280A40; } // 802809FC
  if (!crb(c,0)) { goto L_80280A14; } // 80280A00
  cmps(c,0,(int32_t)c->r[0],0); // 80280A04
  if (crb(c,2)) { goto L_80280A20; } // 80280A08
  if (!crb(c,0)) { goto L_80280A30; } // 80280A0C
  return; // 80280A10
L_80280A14:;
  cmps(c,0,(int32_t)c->r[0],4); // 80280A14
  if (!crb(c,0)) return; // 80280A18
  goto L_80280A50; // 80280A1C
L_80280A20:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80280A20
  c->r[3]=c->r[3]+c->r[0]; // 80280A24
  W8(c->r[3]+0x00000028u,c->r[4]); // 80280A28
  return; // 80280A2C
L_80280A30:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80280A30
  c->r[3]=c->r[3]+c->r[0]; // 80280A34
  W8(c->r[3]+0x00000029u,c->r[4]); // 80280A38
  return; // 80280A3C
L_80280A40:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80280A40
  c->r[3]=c->r[3]+c->r[0]; // 80280A44
  W8(c->r[3]+0x0000002Au,c->r[4]); // 80280A48
  return; // 80280A4C
L_80280A50:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80280A50
  c->r[3]=c->r[3]+c->r[0]; // 80280A54
  W8(c->r[3]+0x0000002Bu,c->r[4]); // 80280A58
  return; // 80280A5C
}

// SetupGX__Q34nw4r3lyt8MaterialFbUc
void f_80280A60(Ctx* __restrict c) {
  trace_call(0x80280A60u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80280A60
  c->r[0]=c->lr; // 80280A64
  W32(c->r[1]+0x00000124u,c->r[0]); // 80280A68
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 80280A6C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 80280A70
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 80280A74
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 80280A78
  c->r[11]=c->r[1]+0x00000100u; // 80280A7C
  c->lr=0x80280A84u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80280A80
  c->r[27]=c->r[3]|c->r[3]; // 80280A84
  c->r[31]=c->r[4]|c->r[4]; // 80280A88
  c->r[28]=c->r[5]|c->r[5]; // 80280A8C
  c->r[30]=0u+0x00000001u; // 80280A90
  c->r[23]=0u+0x00000000u; // 80280A94
  c->r[3]=0u+0x00000001u; // 80280A98
  c->lr=0x80280AA0u; f_80182328(c); // 80280A9C
  c->r[4]=R32(c->r[27]+0x00000038u); // 80280AA0
  c->r[0]=rotl(c->r[4],24)&0x00000001u; cr0(c,c->r[0]); // 80280AA4
  if (crb(c,2)) { goto L_80280B50; } // 80280AA8
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 80280AAC
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 80280AB0
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280AB4
  c->r[6]=rotl(c->r[4],14)&0x0000003Cu; // 80280AB8
  c->r[7]=R32(c->r[27]+0x00000040u); // 80280ABC
  c->r[3]=0u+0x00000000u; // 80280AC0
  c->r[4]=0u+0x00000000u; // 80280AC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280AC8
  c->r[6]=c->r[6]+c->r[5]; // 80280ACC
  c->r[5]=0u+0x00000000u; // 80280AD0
  c->r[0]=c->r[7]+c->r[0]; // 80280AD4
  c->r[7]=0u+0x00000000u; // 80280AD8
  c->r[24]=c->r[6]+c->r[0]; // 80280ADC
  c->r[6]=R8(c->r[6]+c->r[0]); // 80280AE0
  c->r[8]=0u+0x00000000u; // 80280AE4
  c->r[9]=0u+0x00000002u; // 80280AE8
  c->lr=0x80280AF0u; f_8018234C(c); // 80280AEC
  c->r[6]=R8(c->r[24]+0x00000001u); // 80280AF0
  c->r[3]=0u+0x00000002u; // 80280AF4
  c->r[4]=0u+0x00000000u; // 80280AF8
  c->r[5]=0u+0x00000000u; // 80280AFC
  c->r[7]=0u+0x00000000u; // 80280B00
  c->r[8]=0u+0x00000000u; // 80280B04
  c->r[9]=0u+0x00000002u; // 80280B08
  c->lr=0x80280B10u; f_8018234C(c); // 80280B0C
  c->r[3]=R8(c->r[24]+0x00000000u); // 80280B10
  c->r[30]=0u+0x00000001u; // 80280B14
  cmps(c,0,(int32_t)c->r[3],1); // 80280B18
  if (crb(c,2)) { goto L_80280B30; } // 80280B1C
  c->r[0]=R8(c->r[24]+0x00000001u); // 80280B20
  cmps(c,0,(int32_t)c->r[0],1); // 80280B24
  if (crb(c,2)) { goto L_80280B30; } // 80280B28
  c->r[30]=0u+0x00000000u; // 80280B2C
L_80280B30:;
  cmps(c,0,(int32_t)c->r[3],0); // 80280B30
  c->r[23]=0u+0x00000000u; // 80280B34
  if (crb(c,2)) { goto L_80280B48; } // 80280B38
  c->r[0]=R8(c->r[24]+0x00000001u); // 80280B3C
  cmps(c,0,(int32_t)c->r[0],0); // 80280B40
  if (!crb(c,2)) { goto L_80280B70; } // 80280B44
L_80280B48:;
  c->r[23]=0u+0x00000001u; // 80280B48
  goto L_80280B70; // 80280B4C
L_80280B50:;
  c->r[3]=0u+0x00000004u; // 80280B50
  c->r[4]=0u+0x00000000u; // 80280B54
  c->r[5]=0u+0x00000000u; // 80280B58
  c->r[6]=0u+0x00000001u; // 80280B5C
  c->r[7]=0u+0x00000000u; // 80280B60
  c->r[8]=0u+0x00000000u; // 80280B64
  c->r[9]=0u+0x00000002u; // 80280B68
  c->lr=0x80280B70u; f_8018234C(c); // 80280B6C
L_80280B70:;
  cmps(c,0,(int32_t)c->r[30],0); // 80280B70
  c->r[29]=0u+0x00000000u; // 80280B74
  if (crb(c,2)) { goto L_80280B8C; } // 80280B78
  cmps(c,0,(int32_t)c->r[31],0); // 80280B7C
  c->r[29]=0u+0x00000001u; // 80280B80
  if (!crb(c,2)) { goto L_80280B8C; } // 80280B84
  c->r[29]=0u+0x00000000u; // 80280B88
L_80280B8C:;
  cmps(c,0,(int32_t)c->r[23],0); // 80280B8C
  if (crb(c,2)) { goto L_80280C68; } // 80280B90
  c->r[5]=R32(c->r[27]+0x00000038u); // 80280B94
  c->r[0]=0u+0xFFFFFFFFu; // 80280B98
  W32(c->r[1]+0x00000030u,c->r[0]); // 80280B9C
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 80280BA0
  if (crb(c,2)) { goto L_80280BF4; } // 80280BA4
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 80280BA8
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 80280BAC
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280BB0
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 80280BB4
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 80280BB8
  c->r[7]=R32(c->r[27]+0x00000040u); // 80280BBC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280BC0
  c->r[0]=c->r[6]+c->r[5]; // 80280BC4
  c->r[0]=c->r[7]+c->r[0]; // 80280BC8
  c->r[3]=c->r[4]+c->r[3]; // 80280BCC
  c->r[6]=c->r[3]+c->r[0]; // 80280BD0
  c->r[5]=R8(c->r[3]+c->r[0]); // 80280BD4
  c->r[4]=R8(c->r[6]+0x00000001u); // 80280BD8
  c->r[3]=R8(c->r[6]+0x00000002u); // 80280BDC
  c->r[0]=R8(c->r[6]+0x00000003u); // 80280BE0
  W8(c->r[1]+0x00000030u,c->r[5]); // 80280BE4
  W8(c->r[1]+0x00000031u,c->r[4]); // 80280BE8
  W8(c->r[1]+0x00000032u,c->r[3]); // 80280BEC
  W8(c->r[1]+0x00000033u,c->r[0]); // 80280BF0
L_80280BF4:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 80280BF4
  c->r[5]=c->r[28]|c->r[28]; // 80280BF8
  c->r[3]=c->r[1]+0x00000024u; // 80280BFC
  c->r[4]=c->r[1]+0x00000028u; // 80280C00
  W32(c->r[1]+0x00000028u,c->r[0]); // 80280C04
  c->lr=0x80280C0Cu; f_80283D80(c); // 80280C08
  c->r[7]=R8(c->r[1]+0x00000024u); // 80280C0C
  c->r[4]=c->r[1]+0x00000020u; // 80280C10
  c->r[6]=R8(c->r[1]+0x00000025u); // 80280C14
  c->r[3]=0u+0x00000004u; // 80280C18
  c->r[5]=R8(c->r[1]+0x00000026u); // 80280C1C
  c->r[0]=R8(c->r[1]+0x00000027u); // 80280C20
  W8(c->r[1]+0x00000030u,c->r[7]); // 80280C24
  W8(c->r[1]+0x00000031u,c->r[6]); // 80280C28
  W8(c->r[1]+0x00000032u,c->r[5]); // 80280C2C
  W8(c->r[1]+0x00000033u,c->r[0]); // 80280C30
  W8(c->r[1]+0x00000020u,c->r[7]); // 80280C34
  W8(c->r[1]+0x00000021u,c->r[6]); // 80280C38
  W8(c->r[1]+0x00000022u,c->r[5]); // 80280C3C
  W8(c->r[1]+0x00000023u,c->r[0]); // 80280C40
  c->lr=0x80280C48u; f_80182250(c); // 80280C44
  cmps(c,0,(int32_t)c->r[29],0); // 80280C48
  c->r[29]=0u+0x00000000u; // 80280C4C
  if (!crb(c,2)) { goto L_80280C64; } // 80280C50
  c->r[3]=R32(c->r[1]+0x00000030u); // 80280C54
  c->r[0]=c->r[3]+0x00010000u; // 80280C58
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80280C5C
  if (crb(c,2)) { goto L_80280C68; } // 80280C60
L_80280C64:;
  c->r[29]=0u+0x00000001u; // 80280C64
L_80280C68:;
  c->r[31]=0u+0x00000000u; // 80280C68
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 80280C6C
  W8(c->r[1]+0x0000005Du,c->r[31]); // 80280C70
  W8(c->r[1]+0x0000005Eu,c->r[31]); // 80280C74
  W8(c->r[1]+0x0000005Fu,c->r[31]); // 80280C78
  W8(c->r[1]+0x00000060u,c->r[31]); // 80280C7C
  W8(c->r[1]+0x00000061u,c->r[31]); // 80280C80
  W8(c->r[1]+0x00000062u,c->r[31]); // 80280C84
  W8(c->r[1]+0x00000063u,c->r[31]); // 80280C88
  W8(c->r[1]+0x00000064u,c->r[31]); // 80280C8C
  W8(c->r[1]+0x00000065u,c->r[31]); // 80280C90
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80280C94
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 80280C98
  c->lr=0x80280CA0u; f_80180204(c); // 80280C9C
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80280CA0
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 80280CA4
  if (crb(c,2)) { goto L_80280D40; } // 80280CA8
  c->r[0]=R32(c->r[27]+0x00000038u); // 80280CAC
  c->r[3]=0u+0xAAAB0000u; // 80280CB0
  c->r[5]=R32(c->r[27]+0x00000040u); // 80280CB4
  c->r[25]=c->r[3]+0xFFFFAAABu; // 80280CB8
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 80280CBC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80280CC0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80280CC4
  c->r[26]=c->r[1]+0x0000005Cu; // 80280CC8
  c->r[28]=0u+0x00000000u; // 80280CCC
  c->r[24]=0u+0x00000001u; // 80280CD0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280CD4
  c->r[0]=c->r[5]+c->r[4]; // 80280CD8
  c->r[23]=c->r[3]+c->r[0]; // 80280CDC
  goto L_80280D30; // 80280CE0
L_80280CE4:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 80280CE4
  c->r[6]=R8(c->r[23]+0x00000002u); // 80280CE8
  cmps(c,0,(int32_t)c->r[0],1); // 80280CEC
  if (!crb(c,2)) { goto L_80280D10; } // 80280CF0
  cmpu(c,0,c->r[6],0x0000003Cu); // 80280CF4
  if (crb(c,2)) { goto L_80280D10; } // 80280CF8
  c->r[0]=c->r[6]+0xFFFFFFE2u; // 80280CFC
  c->r[31]=0u+0x00000001u; // 80280D00
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 80280D04
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80280D08
  W8(c->r[26]+c->r[0],c->r[24]); // 80280D0C
L_80280D10:;
  c->r[4]=R8(c->r[23]+0x00000000u); // 80280D10
  c->r[3]=c->r[28]|c->r[28]; // 80280D14
  c->r[5]=R8(c->r[23]+0x00000001u); // 80280D18
  c->r[7]=0u+0x00000000u; // 80280D1C
  c->r[8]=0u+0x0000007Du; // 80280D20
  c->lr=0x80280D28u; f_8017FFDC(c); // 80280D24
  c->r[23]=c->r[23]+0x00000004u; // 80280D28
  c->r[28]=c->r[28]+0x00000001u; // 80280D2C
L_80280D30:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80280D30
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 80280D34
  cmpu(c,0,c->r[28],c->r[0]); // 80280D38
  if (crb(c,0)) { IRQCHK(c); goto L_80280CE4; } // 80280D3C
L_80280D40:;
  cmps(c,0,(int32_t)c->r[31],0); // 80280D40
  if (crb(c,2)) { goto L_80280DBC; } // 80280D44
  c->r[0]=R32(c->r[27]+0x00000038u); // 80280D48
  c->r[26]=c->r[1]+0x0000005Cu; // 80280D4C
  c->r[3]=R32(c->r[27]+0x00000040u); // 80280D50
  c->r[28]=0u+0x00000000u; // 80280D54
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80280D58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280D5C
  c->r[23]=c->r[3]+c->r[0]; // 80280D60
  goto L_80280DA8; // 80280D64
L_80280D68:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80280D68
  c->r[0]=R8(c->r[26]+c->r[3]); // 80280D6C
  cmps(c,0,(int32_t)c->r[0],0); // 80280D70
  if (crb(c,2)) { goto L_80280DA4; } // 80280D74
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280D78
  c->r[3]=c->r[1]+0x000000A0u; // 80280D7C
  c->r[4]=c->r[23]+c->r[0]; // 80280D80
  c->lr=0x80280D88u; f_8027EC88(c); // 80280D84
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80280D88
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 80280D8C
  c->r[4]=c->r[0]-c->r[3]; // 80280D90
  c->r[5]=0u+0x00000001u; // 80280D94
  c->r[3]=c->r[1]+0x000000A0u; // 80280D98
  c->r[4]=c->r[4]+0x0000001Eu; // 80280D9C
  c->lr=0x80280DA4u; f_80184A4C(c); // 80280DA0
L_80280DA4:;
  c->r[28]=c->r[28]+0x00000001u; // 80280DA4
L_80280DA8:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80280DA8
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80280DAC
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 80280DB0
  cmpu(c,0,c->r[3],c->r[0]); // 80280DB4
  if (crb(c,0)) { IRQCHK(c); goto L_80280D68; } // 80280DB8
L_80280DBC:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80280DBC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80280DC0
  if (crb(c,2)) { goto L_80280E60; } // 80280DC4
  c->r[24]=R32(c->r[27]+0x00000040u); // 80280DC8
  c->r[23]=0u+0x00000000u; // 80280DCC
  c->r[25]=0u+0x00000010u; // 80280DD0
  c->r[26]=0u+0x00000000u; // 80280DD4
  goto L_80280E50; // 80280DD8
L_80280DDC:;
  c->r[3]=c->r[24]|c->r[24]; // 80280DDC
  c->r[4]=c->r[1]+0x00000080u; // 80280DE0
  c->lr=0x80280DE8u; f_80281B00(c); // 80280DE4
  c->r[0]=R32(c->r[24]+0x00000018u); // 80280DE8
  c->r[3]=rotl(c->r[0],4)&0x0000000Fu; // 80280DEC
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 80280DF0
  cmpu(c,0,c->r[0],0x00000002u); // 80280DF4
  if (crb(c,1)) { goto L_80280E3C; } // 80280DF8
  cmps(c,0,(int32_t)c->r[3],10); // 80280DFC
  if (!crb(c,2)) { goto L_80280E10; } // 80280E00
  c->r[28]=c->r[25]|c->r[25]; // 80280E04
  c->r[25]=c->r[25]+0x00000001u; // 80280E08
  goto L_80280E18; // 80280E0C
L_80280E10:;
  c->r[28]=c->r[23]|c->r[23]; // 80280E10
  c->r[23]=c->r[23]+0x00000001u; // 80280E14
L_80280E18:;
  c->r[4]=c->r[28]|c->r[28]; // 80280E18
  c->r[3]=c->r[1]+0x00000080u; // 80280E1C
  c->lr=0x80280E24u; f_80182940(c); // 80280E20
  c->r[3]=c->r[24]|c->r[24]; // 80280E24
  c->r[4]=c->r[1]+0x00000050u; // 80280E28
  c->lr=0x80280E30u; f_80281BEC(c); // 80280E2C
  c->r[4]=c->r[28]|c->r[28]; // 80280E30
  c->r[3]=c->r[1]+0x00000050u; // 80280E34
  c->lr=0x80280E3Cu; f_80182CA0(c); // 80280E38
L_80280E3C:;
  c->r[4]=c->r[26]|c->r[26]; // 80280E3C
  c->r[3]=c->r[1]+0x00000080u; // 80280E40
  c->lr=0x80280E48u; f_80182C24(c); // 80280E44
  c->r[24]=c->r[24]+0x0000001Cu; // 80280E48
  c->r[26]=c->r[26]+0x00000001u; // 80280E4C
L_80280E50:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80280E50
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80280E54
  cmpu(c,0,c->r[26],c->r[0]); // 80280E58
  if (crb(c,0)) { IRQCHK(c); goto L_80280DDC; } // 80280E5C
L_80280E60:;
  c->r[5]=R16(c->r[27]+0x00000010u); // 80280E60
  c->r[4]=c->r[1]+0x00000048u; // 80280E64
  c->r[0]=R16(c->r[27]+0x00000012u); // 80280E68
  c->r[3]=0u+0x00000001u; // 80280E6C
  W16(c->r[1]+0x00000048u,c->r[5]); // 80280E70
  W16(c->r[1]+0x0000004Au,c->r[0]); // 80280E74
  c->r[5]=R16(c->r[27]+0x00000014u); // 80280E78
  c->r[0]=R16(c->r[27]+0x00000016u); // 80280E7C
  W16(c->r[1]+0x0000004Cu,c->r[5]); // 80280E80
  W16(c->r[1]+0x0000004Eu,c->r[0]); // 80280E84
  c->lr=0x80280E8Cu; f_80183A34(c); // 80280E88
  c->r[5]=R16(c->r[27]+0x00000018u); // 80280E8C
  c->r[4]=c->r[1]+0x00000040u; // 80280E90
  c->r[0]=R16(c->r[27]+0x0000001Au); // 80280E94
  c->r[3]=0u+0x00000002u; // 80280E98
  W16(c->r[1]+0x00000040u,c->r[5]); // 80280E9C
  W16(c->r[1]+0x00000042u,c->r[0]); // 80280EA0
  c->r[5]=R16(c->r[27]+0x0000001Cu); // 80280EA4
  c->r[0]=R16(c->r[27]+0x0000001Eu); // 80280EA8
  W16(c->r[1]+0x00000044u,c->r[5]); // 80280EAC
  W16(c->r[1]+0x00000046u,c->r[0]); // 80280EB0
  c->lr=0x80280EB8u; f_80183A34(c); // 80280EB4
  c->r[5]=R16(c->r[27]+0x00000020u); // 80280EB8
  c->r[4]=c->r[1]+0x00000038u; // 80280EBC
  c->r[0]=R16(c->r[27]+0x00000022u); // 80280EC0
  c->r[3]=0u+0x00000003u; // 80280EC4
  W16(c->r[1]+0x00000038u,c->r[5]); // 80280EC8
  W16(c->r[1]+0x0000003Au,c->r[0]); // 80280ECC
  c->r[5]=R16(c->r[27]+0x00000024u); // 80280ED0
  c->r[0]=R16(c->r[27]+0x00000026u); // 80280ED4
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 80280ED8
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 80280EDC
  c->lr=0x80280EE4u; f_80183A34(c); // 80280EE0
  c->r[0]=R8(c->r[27]+0x00000028u); // 80280EE4
  c->r[4]=c->r[1]+0x0000001Cu; // 80280EE8
  c->r[3]=0u+0x00000000u; // 80280EEC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80280EF0
  c->r[0]=R8(c->r[27]+0x00000029u); // 80280EF4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80280EF8
  c->r[0]=R8(c->r[27]+0x0000002Au); // 80280EFC
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80280F00
  c->r[0]=R8(c->r[27]+0x0000002Bu); // 80280F04
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 80280F08
  c->lr=0x80280F10u; f_80183A98(c); // 80280F0C
  c->r[0]=R8(c->r[27]+0x0000002Cu); // 80280F10
  c->r[4]=c->r[1]+0x00000018u; // 80280F14
  c->r[3]=0u+0x00000001u; // 80280F18
  W8(c->r[1]+0x00000018u,c->r[0]); // 80280F1C
  c->r[0]=R8(c->r[27]+0x0000002Du); // 80280F20
  W8(c->r[1]+0x00000019u,c->r[0]); // 80280F24
  c->r[0]=R8(c->r[27]+0x0000002Eu); // 80280F28
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80280F2C
  c->r[0]=R8(c->r[27]+0x0000002Fu); // 80280F30
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80280F34
  c->lr=0x80280F3Cu; f_80183A98(c); // 80280F38
  c->r[0]=R8(c->r[27]+0x00000030u); // 80280F3C
  c->r[4]=c->r[1]+0x00000014u; // 80280F40
  c->r[3]=0u+0x00000002u; // 80280F44
  W8(c->r[1]+0x00000014u,c->r[0]); // 80280F48
  c->r[0]=R8(c->r[27]+0x00000031u); // 80280F4C
  W8(c->r[1]+0x00000015u,c->r[0]); // 80280F50
  c->r[0]=R8(c->r[27]+0x00000032u); // 80280F54
  W8(c->r[1]+0x00000016u,c->r[0]); // 80280F58
  c->r[0]=R8(c->r[27]+0x00000033u); // 80280F5C
  W8(c->r[1]+0x00000017u,c->r[0]); // 80280F60
  c->lr=0x80280F68u; f_80183A98(c); // 80280F64
  c->r[0]=R8(c->r[27]+0x00000034u); // 80280F68
  c->r[4]=c->r[1]+0x00000010u; // 80280F6C
  c->r[3]=0u+0x00000003u; // 80280F70
  W8(c->r[1]+0x00000010u,c->r[0]); // 80280F74
  c->r[0]=R8(c->r[27]+0x00000035u); // 80280F78
  W8(c->r[1]+0x00000011u,c->r[0]); // 80280F7C
  c->r[0]=R8(c->r[27]+0x00000036u); // 80280F80
  W8(c->r[1]+0x00000012u,c->r[0]); // 80280F84
  c->r[0]=R8(c->r[27]+0x00000037u); // 80280F88
  W8(c->r[1]+0x00000013u,c->r[0]); // 80280F8C
  c->lr=0x80280F94u; f_80183A98(c); // 80280F90
  c->r[6]=R32(c->r[27]+0x00000038u); // 80280F94
  c->r[0]=rotl(c->r[6],18)&0x00000001u; cr0(c,c->r[0]); // 80280F98
  if (crb(c,2)) { goto L_80281008; } // 80280F9C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 80280FA0
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 80280FA4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80280FA8
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 80280FAC
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 80280FB0
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 80280FB4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80280FB8
  c->r[5]=c->r[7]+c->r[5]; // 80280FBC
  c->r[7]=R32(c->r[27]+0x00000040u); // 80280FC0
  c->r[23]=0u+0x00000000u; // 80280FC4
  c->r[0]=c->r[6]+c->r[5]; // 80280FC8
  c->r[3]=c->r[4]+c->r[3]; // 80280FCC
  c->r[0]=c->r[7]+c->r[0]; // 80280FD0
  c->r[28]=c->r[3]+c->r[0]; // 80280FD4
L_80280FD8:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80280FD8
  c->r[3]=c->r[23]|c->r[23]; // 80280FDC
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 80280FE0
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 80280FE4
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 80280FE8
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 80280FEC
  c->lr=0x80280FF4u; f_80183BD0(c); // 80280FF0
  c->r[23]=c->r[23]+0x00000001u; // 80280FF4
  c->r[28]=c->r[28]+0x00000001u; // 80280FF8
  cmps(c,0,(int32_t)c->r[23],4); // 80280FFC
  if (crb(c,0)) { IRQCHK(c); goto L_80280FD8; } // 80281000
  goto L_80281068; // 80281004
L_80281008:;
  c->r[3]=0u+0x00000000u; // 80281008
  c->r[4]=0u+0x00000000u; // 8028100C
  c->r[5]=0u+0x00000001u; // 80281010
  c->r[6]=0u+0x00000002u; // 80281014
  c->r[7]=0u+0x00000003u; // 80281018
  c->lr=0x80281020u; f_80183BD0(c); // 8028101C
  c->r[3]=0u+0x00000001u; // 80281020
  c->r[4]=0u+0x00000000u; // 80281024
  c->r[5]=0u+0x00000000u; // 80281028
  c->r[6]=0u+0x00000000u; // 8028102C
  c->r[7]=0u+0x00000003u; // 80281030
  c->lr=0x80281038u; f_80183BD0(c); // 80281034
  c->r[3]=0u+0x00000002u; // 80281038
  c->r[4]=0u+0x00000001u; // 8028103C
  c->r[5]=0u+0x00000001u; // 80281040
  c->r[6]=0u+0x00000001u; // 80281044
  c->r[7]=0u+0x00000003u; // 80281048
  c->lr=0x80281050u; f_80183BD0(c); // 8028104C
  c->r[3]=0u+0x00000003u; // 80281050
  c->r[4]=0u+0x00000002u; // 80281054
  c->r[5]=0u+0x00000002u; // 80281058
  c->r[6]=0u+0x00000002u; // 8028105C
  c->r[7]=0u+0x00000003u; // 80281060
  c->lr=0x80281068u; f_80183BD0(c); // 80281064
L_80281068:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80281068
  c->r[28]=0u+0x00000000u; // 8028106C
  W8(c->r[1]+0x0000002Cu,c->r[28]); // 80281070
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 80281074
  W8(c->r[1]+0x0000002Du,c->r[28]); // 80281078
  W8(c->r[1]+0x0000002Eu,c->r[28]); // 8028107C
  if (crb(c,2)) { goto L_80281250; } // 80281080
  c->lr=0x80281088u; f_80183E6C(c); // 80281084
  c->r[7]=R32(c->r[27]+0x00000038u); // 80281088
  c->r[26]=c->r[1]+0x0000002Cu; // 8028108C
  c->r[8]=R32(c->r[27]+0x00000040u); // 80281090
  c->r[29]=0u+0x00000000u; // 80281094
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 80281098
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 8028109C
  c->r[3]=c->r[3]+c->r[0]; // 802810A0
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 802810A4
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802810A8
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 802810AC
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 802810B0
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 802810B4
  c->r[0]=c->r[4]+c->r[0]; // 802810B8
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 802810BC
  c->r[0]=c->r[3]+c->r[0]; // 802810C0
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 802810C4
  c->r[0]=c->r[4]+c->r[0]; // 802810C8
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 802810CC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 802810D0
  c->r[31]=0u+0x00000001u; // 802810D4
  c->r[0]=c->r[3]+c->r[0]; // 802810D8
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 802810DC
  c->r[5]=c->r[6]+c->r[5]; // 802810E0
  c->r[0]=c->r[5]+c->r[0]; // 802810E4
  c->r[3]=c->r[4]+c->r[3]; // 802810E8
  c->r[0]=c->r[8]+c->r[0]; // 802810EC
  c->r[25]=c->r[3]+c->r[0]; // 802810F0
  goto L_80281238; // 802810F4
L_802810F8:;
  c->r[0]=R8(c->r[25]+0x00000003u); // 802810F8
  c->r[3]=c->r[29]|c->r[29]; // 802810FC
  c->r[5]=R8(c->r[25]+0x00000002u); // 80281100
  c->r[4]=R8(c->r[25]+0x00000000u); // 80281104
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 80281108
  c->r[6]=R8(c->r[25]+0x00000001u); // 8028110C
  c->lr=0x80281114u; f_80183D10(c); // 80281110
  c->r[0]=R8(c->r[25]+0x00000003u); // 80281114
  c->r[3]=c->r[29]|c->r[29]; // 80281118
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 8028111C
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 80281120
  c->lr=0x80281128u; f_80183B94(c); // 80281124
  c->r[0]=R8(c->r[25]+0x00000005u); // 80281128
  c->r[3]=c->r[29]|c->r[29]; // 8028112C
  c->r[5]=R8(c->r[25]+0x00000004u); // 80281130
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 80281134
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 80281138
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 8028113C
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 80281140
  c->lr=0x80281148u; f_801838A4(c); // 80281144
  c->r[6]=R8(c->r[25]+0x00000006u); // 80281148
  c->r[3]=c->r[29]|c->r[29]; // 8028114C
  c->r[0]=R8(c->r[25]+0x00000007u); // 80281150
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 80281154
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 80281158
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 8028115C
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 80281160
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 80281164
  c->lr=0x8028116Cu; f_80183924(c); // 80281168
  c->r[0]=R8(c->r[25]+0x00000007u); // 8028116C
  c->r[3]=c->r[29]|c->r[29]; // 80281170
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 80281174
  c->lr=0x8028117Cu; f_80183AF4(c); // 80281178
  c->r[0]=R8(c->r[25]+0x00000009u); // 8028117C
  c->r[3]=c->r[29]|c->r[29]; // 80281180
  c->r[5]=R8(c->r[25]+0x00000008u); // 80281184
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 80281188
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 8028118C
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 80281190
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 80281194
  c->lr=0x8028119Cu; f_801838E4(c); // 80281198
  c->r[6]=R8(c->r[25]+0x0000000Au); // 8028119C
  c->r[3]=c->r[29]|c->r[29]; // 802811A0
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 802811A4
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 802811A8
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 802811AC
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 802811B0
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 802811B4
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 802811B8
  c->lr=0x802811C0u; f_8018397C(c); // 802811BC
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 802811C0
  c->r[3]=c->r[29]|c->r[29]; // 802811C4
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 802811C8
  c->lr=0x802811D0u; f_80183B44(c); // 802811CC
  c->r[10]=R8(c->r[25]+0x0000000Fu); // 802811D0
  c->r[3]=c->r[29]|c->r[29]; // 802811D4
  c->r[6]=R8(c->r[25]+0x0000000Du); // 802811D8
  c->r[9]=R8(c->r[25]+0x0000000Eu); // 802811DC
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 802811E0
  c->r[24]=rotl(c->r[6],29)&0x0000000Fu; // 802811E4
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 802811E8
  W32(c->r[1]+0x00000008u,c->r[4]); // 802811EC
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 802811F0
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 802811F4
  c->r[7]=c->r[24]|c->r[24]; // 802811F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802811FC
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 80281200
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 80281204
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 80281208
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 8028120C
  c->lr=0x80281214u; f_801833C4(c); // 80281210
  cmps(c,0,(int32_t)c->r[24],1); // 80281214
  if (crb(c,0)) { goto L_80281230; } // 80281218
  cmps(c,0,(int32_t)c->r[24],3); // 8028121C
  if (crb(c,1)) { goto L_80281230; } // 80281220
  c->r[3]=c->r[26]+c->r[24]; // 80281224
  c->r[28]=0u+0x00000001u; // 80281228
  W8(c->r[3]+0xFFFFFFFFu,c->r[31]); // 8028122C
L_80281230:;
  c->r[25]=c->r[25]+0x00000010u; // 80281230
  c->r[29]=c->r[29]+0x00000001u; // 80281234
L_80281238:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80281238
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 8028123C
  cmpu(c,0,c->r[29],c->r[0]); // 80281240
  if (crb(c,0)) { IRQCHK(c); goto L_802810F8; } // 80281244
  c->r[29]=0u+0x00000001u; // 80281248
  goto L_80281618; // 8028124C
L_80281250:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80281250
  c->r[31]=0u+0x00000000u; // 80281254
  if (!crb(c,2)) { goto L_802812AC; } // 80281258
  c->r[3]=0u+0x00000000u; // 8028125C
  c->r[4]=0u+0x000000FFu; // 80281260
  c->r[5]=0u+0x000000FFu; // 80281264
  c->r[6]=0u+0x00000004u; // 80281268
  c->lr=0x80281270u; f_80183D10(c); // 8028126C
  c->r[3]=0u+0x00000000u; // 80281270
  c->r[4]=0u+0x0000000Fu; // 80281274
  c->r[5]=0u+0x00000004u; // 80281278
  c->r[6]=0u+0x0000000Au; // 8028127C
  c->r[7]=0u+0x0000000Fu; // 80281280
  c->lr=0x80281288u; f_801838A4(c); // 80281284
  c->r[3]=0u+0x00000000u; // 80281288
  c->r[4]=0u+0x00000007u; // 8028128C
  c->r[5]=0u+0x00000002u; // 80281290
  c->r[6]=0u+0x00000005u; // 80281294
  c->r[7]=0u+0x00000007u; // 80281298
  c->lr=0x802812A0u; f_801838E4(c); // 8028129C
  c->r[29]=0u+0x00000001u; // 802812A0
  c->r[31]=0u+0x00000001u; // 802812A4
  goto L_802815A0; // 802812A8
L_802812AC:;
  cmpu(c,0,c->r[0],0x00000001u); // 802812AC
  if (!crb(c,2)) { goto L_80281300; } // 802812B0
  c->r[3]=0u+0x00000000u; // 802812B4
  c->r[4]=0u+0x00000000u; // 802812B8
  c->r[5]=0u+0x00000000u; // 802812BC
  c->r[6]=0u+0x000000FFu; // 802812C0
  c->lr=0x802812C8u; f_80183D10(c); // 802812C4
  c->r[3]=0u+0x00000000u; // 802812C8
  c->r[4]=0u+0x00000002u; // 802812CC
  c->r[5]=0u+0x00000004u; // 802812D0
  c->r[6]=0u+0x00000008u; // 802812D4
  c->r[7]=0u+0x0000000Fu; // 802812D8
  c->lr=0x802812E0u; f_801838A4(c); // 802812DC
  c->r[3]=0u+0x00000000u; // 802812E0
  c->r[4]=0u+0x00000001u; // 802812E4
  c->r[5]=0u+0x00000002u; // 802812E8
  c->r[6]=0u+0x00000004u; // 802812EC
  c->r[7]=0u+0x00000007u; // 802812F0
  c->lr=0x802812F8u; f_801838E4(c); // 802812F4
  c->r[31]=0u+0x00000001u; // 802812F8
  goto L_8028154C; // 802812FC
L_80281300:;
  cmpu(c,0,c->r[0],0x00000002u); // 80281300
  if (!crb(c,2)) { goto L_802813B8; } // 80281304
  c->r[3]=0u+0x00000000u; // 80281308
  c->r[4]=0u+0x00000000u; // 8028130C
  c->r[5]=0u+0x00000000u; // 80281310
  c->r[6]=0u+0x000000FFu; // 80281314
  c->lr=0x8028131Cu; f_80183D10(c); // 80281318
  c->r[3]=0u+0x00000000u; // 8028131C
  c->r[4]=0u+0x0000000Fu; // 80281320
  c->r[5]=0u+0x0000000Fu; // 80281324
  c->r[6]=0u+0x0000000Fu; // 80281328
  c->r[7]=0u+0x00000008u; // 8028132C
  c->lr=0x80281334u; f_801838A4(c); // 80281330
  c->r[3]=0u+0x00000000u; // 80281334
  c->r[4]=0u+0x00000007u; // 80281338
  c->r[5]=0u+0x00000007u; // 8028133C
  c->r[6]=0u+0x00000007u; // 80281340
  c->r[7]=0u+0x00000004u; // 80281344
  c->lr=0x8028134Cu; f_801838E4(c); // 80281348
  c->r[3]=0u+0x00000001u; // 8028134C
  c->r[4]=0u+0x00000001u; // 80281350
  c->r[5]=0u+0x00000001u; // 80281354
  c->r[6]=0u+0x000000FFu; // 80281358
  c->lr=0x80281360u; f_80183D10(c); // 8028135C
  c->r[3]=0u+0x00000001u; // 80281360
  c->r[4]=0u+0x00000008u; // 80281364
  c->r[5]=0u+0x00000000u; // 80281368
  c->r[6]=0u+0x0000000Eu; // 8028136C
  c->r[7]=0u+0x0000000Fu; // 80281370
  c->lr=0x80281378u; f_801838A4(c); // 80281374
  c->r[3]=0u+0x00000001u; // 80281378
  c->r[4]=0u+0x00000004u; // 8028137C
  c->r[5]=0u+0x00000000u; // 80281380
  c->r[6]=0u+0x00000006u; // 80281384
  c->r[7]=0u+0x00000007u; // 80281388
  c->lr=0x80281390u; f_801838E4(c); // 8028138C
  c->r[4]=0u+0x80340000u; // 80281390
  c->r[3]=0u+0x00000001u; // 80281394
  c->r[4]=R32(c->r[4]+0x00005370u); // 80281398
  c->lr=0x802813A0u; f_80183AF4(c); // 8028139C
  c->r[4]=0u+0x80340000u; // 802813A0
  c->r[3]=0u+0x00000001u; // 802813A4
  c->r[4]=R32(c->r[4]+0x00005390u); // 802813A8
  c->lr=0x802813B0u; f_80183B44(c); // 802813AC
  c->r[31]=0u+0x00000002u; // 802813B0
  goto L_8028146C; // 802813B4
L_802813B8:;
  c->r[24]=0u+0x80340000u; // 802813B8
  c->r[25]=0u+0x80340000u; // 802813BC
  c->r[24]=c->r[24]+0x00005370u; // 802813C0
  c->r[23]=0u+0x00000000u; // 802813C4
  c->r[25]=c->r[25]+0x00005390u; // 802813C8
  goto L_8028145C; // 802813CC
L_802813D0:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 802813D0
  c->r[4]=c->r[23]|c->r[23]; // 802813D4
  c->r[3]=c->r[22]|c->r[22]; // 802813D8
  c->r[5]=c->r[23]|c->r[23]; // 802813DC
  c->r[6]=0u+0x000000FFu; // 802813E0
  c->lr=0x802813E8u; f_80183D10(c); // 802813E4
  cmps(c,0,(int32_t)c->r[23],0); // 802813E8
  c->r[7]=0u+0x00000000u; // 802813EC
  if (!crb(c,2)) { goto L_802813F8; } // 802813F0
  c->r[7]=0u+0x0000000Fu; // 802813F4
L_802813F8:;
  cmps(c,0,(int32_t)c->r[23],0); // 802813F8
  c->r[26]=0u+0x00000000u; // 802813FC
  if (!crb(c,2)) { goto L_80281408; } // 80281400
  c->r[26]=0u+0x00000007u; // 80281404
L_80281408:;
  c->r[3]=c->r[22]|c->r[22]; // 80281408
  c->r[4]=0u+0x0000000Fu; // 8028140C
  c->r[5]=0u+0x00000008u; // 80281410
  c->r[6]=0u+0x0000000Eu; // 80281414
  c->lr=0x8028141Cu; f_801838A4(c); // 80281418
  c->r[3]=c->r[22]|c->r[22]; // 8028141C
  c->r[7]=c->r[26]|c->r[26]; // 80281420
  c->r[4]=0u+0x00000007u; // 80281424
  c->r[5]=0u+0x00000004u; // 80281428
  c->r[6]=0u+0x00000006u; // 8028142C
  c->lr=0x80281434u; f_801838E4(c); // 80281430
  c->r[4]=R32(c->r[24]+0x00000000u); // 80281434
  c->r[3]=c->r[22]|c->r[22]; // 80281438
  c->lr=0x80281440u; f_80183AF4(c); // 8028143C
  c->r[4]=R32(c->r[25]+0x00000000u); // 80281440
  c->r[3]=c->r[22]|c->r[22]; // 80281444
  c->lr=0x8028144Cu; f_80183B44(c); // 80281448
  c->r[31]=c->r[31]+0x00000001u; // 8028144C
  c->r[24]=c->r[24]+0x00000004u; // 80281450
  c->r[25]=c->r[25]+0x00000004u; // 80281454
  c->r[23]=c->r[23]+0x00000001u; // 80281458
L_8028145C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8028145C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80281460
  cmpu(c,0,c->r[23],c->r[0]); // 80281464
  if (crb(c,0)) { IRQCHK(c); goto L_802813D0; } // 80281468
L_8028146C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000010u); // 8028146C
  c->r[5]=0u+0x00000000u; // 80281470
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFA2D8u); // 80281474
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80281478
  if (!crb(c,2)) { goto L_802814B8; } // 8028147C
  c->r[4]=c->r[2]+0xFFFFA2D8u; // 80281480
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000012u); // 80281484
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80281488
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028148C
  if (!crb(c,2)) { goto L_802814B8; } // 80281490
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000014u); // 80281494
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 80281498
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028149C
  if (!crb(c,2)) { goto L_802814B8; } // 802814A0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000016u); // 802814A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 802814A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802814AC
  if (!crb(c,2)) { goto L_802814B8; } // 802814B0
  c->r[5]=0u+0x00000001u; // 802814B4
L_802814B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802814B8
  if (crb(c,2)) { goto L_80281500; } // 802814BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000018u); // 802814C0
  c->r[3]=0u+0x00000000u; // 802814C4
  cmps(c,0,(int32_t)c->r[0],255); // 802814C8
  if (!crb(c,2)) { goto L_802814F8; } // 802814CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Au); // 802814D0
  cmps(c,0,(int32_t)c->r[0],255); // 802814D4
  if (!crb(c,2)) { goto L_802814F8; } // 802814D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Cu); // 802814DC
  cmps(c,0,(int32_t)c->r[0],255); // 802814E0
  if (!crb(c,2)) { goto L_802814F8; } // 802814E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Eu); // 802814E8
  cmps(c,0,(int32_t)c->r[0],255); // 802814EC
  if (!crb(c,2)) { goto L_802814F8; } // 802814F0
  c->r[3]=0u+0x00000001u; // 802814F4
L_802814F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802814F8
  if (!crb(c,2)) { goto L_8028154C; } // 802814FC
L_80281500:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 80281500
  c->r[4]=0u+0x000000FFu; // 80281504
  c->r[3]=c->r[22]|c->r[22]; // 80281508
  c->r[5]=0u+0x000000FFu; // 8028150C
  c->r[6]=0u+0x000000FFu; // 80281510
  c->lr=0x80281518u; f_80183D10(c); // 80281514
  c->r[3]=c->r[22]|c->r[22]; // 80281518
  c->r[4]=0u+0x00000002u; // 8028151C
  c->r[5]=0u+0x00000004u; // 80281520
  c->r[6]=0u+0x00000000u; // 80281524
  c->r[7]=0u+0x0000000Fu; // 80281528
  c->lr=0x80281530u; f_801838A4(c); // 8028152C
  c->r[3]=c->r[22]|c->r[22]; // 80281530
  c->r[4]=0u+0x00000001u; // 80281534
  c->r[5]=0u+0x00000002u; // 80281538
  c->r[6]=0u+0x00000000u; // 8028153C
  c->r[7]=0u+0x00000007u; // 80281540
  c->lr=0x80281548u; f_801838E4(c); // 80281544
  c->r[31]=c->r[31]+0x00000001u; // 80281548
L_8028154C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8028154C
  if (crb(c,2)) { goto L_802815A0; } // 80281550
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 80281554
  c->r[4]=0u+0x000000FFu; // 80281558
  c->r[3]=c->r[22]|c->r[22]; // 8028155C
  c->r[5]=0u+0x000000FFu; // 80281560
  c->r[6]=0u+0x00000004u; // 80281564
  c->lr=0x8028156Cu; f_80183D10(c); // 80281568
  c->r[3]=c->r[22]|c->r[22]; // 8028156C
  c->r[4]=0u+0x0000000Fu; // 80281570
  c->r[5]=0u+0x00000000u; // 80281574
  c->r[6]=0u+0x0000000Au; // 80281578
  c->r[7]=0u+0x0000000Fu; // 8028157C
  c->lr=0x80281584u; f_801838A4(c); // 80281580
  c->r[3]=c->r[22]|c->r[22]; // 80281584
  c->r[4]=0u+0x00000007u; // 80281588
  c->r[5]=0u+0x00000000u; // 8028158C
  c->r[6]=0u+0x00000005u; // 80281590
  c->r[7]=0u+0x00000007u; // 80281594
  c->lr=0x8028159Cu; f_801838E4(c); // 80281598
  c->r[31]=c->r[31]+0x00000001u; // 8028159C
L_802815A0:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 802815A0
  c->r[23]=0u+0x00000000u; // 802815A4
  goto L_80281604; // 802815A8
L_802815AC:;
  c->r[24]=rotl(c->r[23],0)&0x000000FFu; // 802815AC
  c->r[4]=0u+0x00000000u; // 802815B0
  c->r[3]=c->r[24]|c->r[24]; // 802815B4
  c->r[5]=0u+0x00000000u; // 802815B8
  c->r[6]=0u+0x00000000u; // 802815BC
  c->r[7]=0u+0x00000001u; // 802815C0
  c->r[8]=0u+0x00000000u; // 802815C4
  c->lr=0x802815CCu; f_80183924(c); // 802815C8
  c->r[3]=c->r[24]|c->r[24]; // 802815CC
  c->r[4]=0u+0x00000000u; // 802815D0
  c->r[5]=0u+0x00000000u; // 802815D4
  c->r[6]=0u+0x00000000u; // 802815D8
  c->r[7]=0u+0x00000001u; // 802815DC
  c->r[8]=0u+0x00000000u; // 802815E0
  c->lr=0x802815E8u; f_8018397C(c); // 802815E4
  c->r[3]=c->r[24]|c->r[24]; // 802815E8
  c->lr=0x802815F0u; f_80183770(c); // 802815EC
  c->r[3]=c->r[24]|c->r[24]; // 802815F0
  c->r[4]=0u+0x00000000u; // 802815F4
  c->r[5]=0u+0x00000000u; // 802815F8
  c->lr=0x80281600u; f_80183B94(c); // 802815FC
  c->r[23]=c->r[23]+0x00000001u; // 80281600
L_80281604:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 80281604
  cmpu(c,0,c->r[0],c->r[22]); // 80281608
  if (crb(c,0)) { IRQCHK(c); goto L_802815AC; } // 8028160C
  c->r[3]=c->r[22]|c->r[22]; // 80281610
  c->lr=0x80281618u; f_80183E6C(c); // 80281614
L_80281618:;
  cmps(c,0,(int32_t)c->r[28],0); // 80281618
  if (crb(c,2)) { goto L_8028171C; } // 8028161C
  c->r[8]=R32(c->r[27]+0x00000038u); // 80281620
  c->r[31]=c->r[1]+0x0000002Cu; // 80281624
  c->r[10]=R32(c->r[27]+0x00000040u); // 80281628
  c->r[28]=0u+0x00000000u; // 8028162C
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 80281630
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 80281634
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 80281638
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 8028163C
  c->r[4]=c->r[5]+c->r[4]; // 80281640
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 80281644
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80281648
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 8028164C
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 80281650
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[30]=c->ps1[30]=RF32(ea);} // 80281654
  c->r[9]=rotl(c->r[8],19)&0x0000001Cu; // 80281658
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8028165C
  c->r[8]=rotl(c->r[8],29)&0x00000004u; // 80281660
  c->r[5]=c->r[6]+c->r[5]; // 80281664
  c->r[4]=c->r[7]+c->r[4]; // 80281668
  c->r[3]=c->r[3]+c->r[0]; // 8028166C
  c->r[0]=c->r[9]+c->r[8]; // 80281670
  c->r[4]=c->r[5]+c->r[4]; // 80281674
  c->r[3]=c->r[4]+c->r[3]; // 80281678
  c->r[0]=c->r[10]+c->r[0]; // 8028167C
  c->r[24]=c->r[3]+c->r[0]; // 80281680
  goto L_8028170C; // 80281684
L_80281688:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80281688
  cmps(c,0,(int32_t)c->r[0],0); // 8028168C
  if (crb(c,2)) { goto L_80281700; } // 80281690
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281694
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 80281698
  c->lr=0x802816A0u; f_8028477C(c); // 8028169C
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802816A0
  c->f[31]=c->f[1]; // 802816A4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 802816A8
  c->lr=0x802816B0u; f_80284714(c); // 802816AC
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802816B0
  c->f[2]=-c->f[1]; // 802816B4
  c->r[3]=c->r[28]+0x00000001u; // 802816B8
  c->r[4]=c->r[1]+0x00000068u; // 802816BC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 802816C0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 802816C4
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802816C8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802816CC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 802816D0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802816D4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 802816D8
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802816DC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802816E0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 802816E4
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802816E8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 802816EC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 802816F0
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802816F4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 802816F8
  c->lr=0x80281700u; f_8027ED90(c); // 802816FC
L_80281700:;
  c->r[31]=c->r[31]+0x00000001u; // 80281700
  c->r[24]=c->r[24]+0x00000014u; // 80281704
  c->r[28]=c->r[28]+0x00000001u; // 80281708
L_8028170C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8028170C
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 80281710
  cmpu(c,0,c->r[28],c->r[0]); // 80281714
  if (crb(c,0)) { IRQCHK(c); goto L_80281688; } // 80281718
L_8028171C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8028171C
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 80281720
  c->lr=0x80281728u; f_80183750(c); // 80281724
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 80281728
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 8028172C
  if (crb(c,2)) { goto L_802817C4; } // 80281730
  c->r[8]=R32(c->r[27]+0x00000038u); // 80281734
  c->r[28]=0u+0x00000000u; // 80281738
  c->r[9]=R32(c->r[27]+0x00000040u); // 8028173C
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 80281740
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 80281744
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 80281748
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 8028174C
  c->r[4]=c->r[5]+c->r[4]; // 80281750
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 80281754
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80281758
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 8028175C
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 80281760
  c->r[4]=c->r[7]+c->r[4]; // 80281764
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80281768
  c->r[5]=c->r[6]+c->r[5]; // 8028176C
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 80281770
  c->r[0]=c->r[3]+c->r[0]; // 80281774
  c->r[3]=c->r[5]+c->r[4]; // 80281778
  c->r[3]=c->r[6]+c->r[3]; // 8028177C
  c->r[0]=c->r[9]+c->r[0]; // 80281780
  c->r[24]=c->r[3]+c->r[0]; // 80281784
  goto L_802817B4; // 80281788
L_8028178C:;
  c->r[4]=R8(c->r[24]+0x00000000u); // 8028178C
  c->r[3]=c->r[28]|c->r[28]; // 80281790
  c->r[5]=R8(c->r[24]+0x00000001u); // 80281794
  c->lr=0x8028179Cu; f_80183684(c); // 80281798
  c->r[4]=R8(c->r[24]+0x00000002u); // 8028179C
  c->r[3]=c->r[28]|c->r[28]; // 802817A0
  c->r[5]=R8(c->r[24]+0x00000003u); // 802817A4
  c->lr=0x802817ACu; f_80183580(c); // 802817A8
  c->r[24]=c->r[24]+0x00000004u; // 802817AC
  c->r[28]=c->r[28]+0x00000001u; // 802817B0
L_802817B4:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 802817B4
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 802817B8
  cmpu(c,0,c->r[28],c->r[0]); // 802817BC
  if (crb(c,0)) { IRQCHK(c); goto L_8028178C; } // 802817C0
L_802817C4:;
  c->r[4]=R32(c->r[27]+0x00000038u); // 802817C4
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 802817C8
  if (crb(c,2)) { goto L_8028182C; } // 802817CC
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 802817D0
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 802817D4
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 802817D8
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 802817DC
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 802817E0
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 802817E4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802817E8
  c->r[5]=c->r[8]+c->r[5]; // 802817EC
  c->r[6]=c->r[7]+c->r[6]; // 802817F0
  c->r[7]=R32(c->r[27]+0x00000040u); // 802817F4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 802817F8
  c->r[0]=c->r[6]+c->r[5]; // 802817FC
  c->r[0]=c->r[7]+c->r[0]; // 80281800
  c->r[3]=c->r[4]+c->r[3]; // 80281804
  c->r[6]=c->r[3]+c->r[0]; // 80281808
  c->r[0]=R8(c->r[3]+c->r[0]); // 8028180C
  c->r[4]=R8(c->r[6]+0x00000002u); // 80281810
  c->r[5]=R8(c->r[6]+0x00000001u); // 80281814
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 80281818
  c->r[7]=R8(c->r[6]+0x00000003u); // 8028181C
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 80281820
  c->lr=0x80281828u; f_80183C4C(c); // 80281824
  goto L_80281844; // 80281828
L_8028182C:;
  c->r[3]=0u+0x00000007u; // 8028182C
  c->r[4]=0u+0x00000000u; // 80281830
  c->r[5]=0u+0x00000000u; // 80281834
  c->r[6]=0u+0x00000007u; // 80281838
  c->r[7]=0u+0x00000000u; // 8028183C
  c->lr=0x80281844u; f_80183C4C(c); // 80281840
L_80281844:;
  c->r[6]=R32(c->r[27]+0x00000038u); // 80281844
  c->r[0]=rotl(c->r[6],27)&0x00000001u; cr0(c,c->r[0]); // 80281848
  if (crb(c,2)) { goto L_802818AC; } // 8028184C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 80281850
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 80281854
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 80281858
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 8028185C
  c->r[5]=c->r[5]+c->r[4]; // 80281860
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 80281864
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 80281868
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 8028186C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80281870
  c->r[9]=R32(c->r[27]+0x00000040u); // 80281874
  c->r[6]=c->r[7]+c->r[6]; // 80281878
  c->r[5]=c->r[8]+c->r[5]; // 8028187C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 80281880
  c->r[0]=c->r[6]+c->r[5]; // 80281884
  c->r[3]=c->r[4]+c->r[3]; // 80281888
  c->r[0]=c->r[9]+c->r[0]; // 8028188C
  c->r[6]=c->r[3]+c->r[0]; // 80281890
  c->r[3]=R8(c->r[3]+c->r[0]); // 80281894
  c->r[4]=R8(c->r[6]+0x00000001u); // 80281898
  c->r[5]=R8(c->r[6]+0x00000002u); // 8028189C
  c->r[6]=R8(c->r[6]+0x00000003u); // 802818A0
  c->lr=0x802818A8u; f_80184340(c); // 802818A4
  goto L_802818C0; // 802818A8
L_802818AC:;
  c->r[3]=0u+0x00000001u; // 802818AC
  c->r[4]=0u+0x00000004u; // 802818B0
  c->r[5]=0u+0x00000005u; // 802818B4
  c->r[6]=0u+0x0000000Fu; // 802818B8
  c->lr=0x802818C0u; f_80184340(c); // 802818BC
L_802818C0:;
  cmps(c,0,(int32_t)c->r[29],0); // 802818C0
  c->r[3]=0u+0x00000000u; // 802818C4
  if (crb(c,2)) { goto L_802818D8; } // 802818C8
  cmps(c,0,(int32_t)c->r[30],0); // 802818CC
  if (crb(c,2)) { goto L_802818D8; } // 802818D0
  c->r[3]=0u+0x00000001u; // 802818D4
L_802818D8:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 802818D8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 802818DC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 802818E0
  c->r[11]=c->r[1]+0x00000100u; // 802818E4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 802818E8
  c->lr=0x802818F0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802818EC
  c->r[0]=R32(c->r[1]+0x00000124u); // 802818F0
  c->lr=c->r[0]; // 802818F4
  c->r[1]=c->r[1]+0x00000120u; // 802818F8
  return; // 802818FC
}

// BindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_80281900(Ctx* __restrict c) {
  trace_call(0x80281900u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 80281900
  c->r[0]=c->r[3]|c->r[3]; // 80281904
  c->r[3]=c->r[4]|c->r[4]; // 80281908
  c->r[5]=0u+0x00000000u; // 8028190C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80281910
  c->r[4]=c->r[0]|c->r[0]; // 80281914
  c->ctr=c->r[12]; // 80281918
  if (true) { dispatch(c,c->ctr); return; } // 8028191C
}

// fn_80281920
void f_80281920(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 80281920
  f_80283420(c); return; // 80281924
}

// fn_80281928
void f_80281928(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 80281928
  c->r[4]=0u+0x00000000u; // 8028192C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80281930
  c->ctr=c->r[12]; // 80281934
  if (true) { dispatch(c,c->ctr); return; } // 80281938
}

// fn_8028193C
void f_8028193C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028193C
  c->r[0]=c->lr; // 80281940
  W32(c->r[1]+0x00000024u,c->r[0]); // 80281944
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80281948
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028194C
  c->r[30]=c->r[3]+0x00000008u; // 80281950
  W32(c->r[1]+0x00000014u,c->r[29]); // 80281954
  c->r[29]=c->r[3]|c->r[3]; // 80281958
  c->r[31]=R32(c->r[3]+0x00000008u); // 8028195C
  goto L_80281990; // 80281960
L_80281964:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80281964
  cmps(c,0,(int32_t)c->r[0],0); // 80281968
  if (!crb(c,2)) { goto L_8028198C; } // 8028196C
  c->r[3]=R32(c->r[31]+0x00000008u); // 80281970
  c->r[5]=c->r[29]|c->r[29]; // 80281974
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 80281978
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028197C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80281980
  c->ctr=c->r[12]; // 80281984
  if (true) { c->lr=0x8028198Cu; dispatch(c,c->ctr); } // 80281988
L_8028198C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8028198C
L_80281990:;
  cmpu(c,0,c->r[31],c->r[30]); // 80281990
  if (!crb(c,2)) { IRQCHK(c); goto L_80281964; } // 80281994
  c->r[0]=R32(c->r[1]+0x00000024u); // 80281998
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028199C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802819A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802819A4
  c->lr=c->r[0]; // 802819A8
  c->r[1]=c->r[1]+0x00000020u; // 802819AC
  return; // 802819B0
}

// AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
void f_802819B4(Ctx* __restrict c) {
  trace_call(0x802819B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802819B4
  c->r[0]=c->lr; // 802819B8
  c->r[5]=c->r[4]|c->r[4]; // 802819BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802819C0
  c->r[0]=c->r[3]+0x00000008u; // 802819C4
  c->r[3]=c->r[3]+0x00000004u; // 802819C8
  c->r[4]=c->r[1]+0x00000008u; // 802819CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802819D0
  c->lr=0x802819D8u; f_802A7C88(c); // 802819D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802819D8
  c->lr=c->r[0]; // 802819DC
  c->r[1]=c->r[1]+0x00000010u; // 802819E0
  return; // 802819E4
}

// fn_802819E8
void f_802819E8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 802819E8
  f_802833B0(c); return; // 802819EC
}

// fn_802819F0
void f_802819F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 802819F0
  f_802833E4(c); return; // 802819F4
}

// fn_802819F8
void f_802819F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802819F8
  c->r[0]=c->lr; // 802819FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80281A00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80281A04
  c->r[31]=c->r[5]|c->r[5]; // 80281A08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80281A0C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80281A10
  c->ctr=c->r[12]; // 80281A14
  if (true) { c->lr=0x80281A1Cu; dispatch(c,c->ctr); } // 80281A18
  cmps(c,0,(int32_t)c->r[3],0); // 80281A1C
  if (crb(c,2)) { goto L_80281A30; } // 80281A20
  c->r[0]=cntlz(c->r[31]); // 80281A24
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80281A28
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80281A2C
L_80281A30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80281A30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80281A34
  c->lr=c->r[0]; // 80281A38
  c->r[1]=c->r[1]+0x00000010u; // 80281A3C
  return; // 80281A40
}

// fn_80281A44
void f_80281A44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281A44
  c->r[0]=c->lr; // 80281A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80281A4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80281A50
  c->r[31]=c->r[5]|c->r[5]; // 80281A54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80281A58
  c->r[12]=R32(c->r[12]+0x00000024u); // 80281A5C
  c->ctr=c->r[12]; // 80281A60
  if (true) { c->lr=0x80281A68u; dispatch(c,c->ctr); } // 80281A64
  cmps(c,0,(int32_t)c->r[3],0); // 80281A68
  if (crb(c,2)) { goto L_80281A7C; } // 80281A6C
  c->r[0]=cntlz(c->r[31]); // 80281A70
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80281A74
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80281A78
L_80281A7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80281A7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80281A80
  c->lr=c->r[0]; // 80281A84
  c->r[1]=c->r[1]+0x00000010u; // 80281A88
  return; // 80281A8C
}

// GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc
void f_80281A90(Ctx* __restrict c) {
  trace_call(0x80281A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281A90
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 80281A94
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80281A98
  cmpu(c,0,c->r[5],c->r[0]); // 80281A9C
  if (crb(c,0)) { goto L_80281AB4; } // 80281AA0
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281AA4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80281AA8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80281AAC
  goto L_80281AF8; // 80281AB0
L_80281AB4:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 80281AB4
  c->r[5]=0u+0x43300000u; // 80281AB8
  c->r[4]=R32(c->r[4]+0x00000040u); // 80281ABC
  W32(c->r[1]+0x00000008u,c->r[5]); // 80281AC0
  c->r[6]=c->r[4]+c->r[0]; // 80281AC4
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[1]=RF64(ea);} // 80281AC8
  c->r[4]=R16(c->r[6]+0x0000000Au); // 80281ACC
  c->r[0]=R16(c->r[6]+0x00000008u); // 80281AD0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80281AD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80281AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80281ADC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 80281AE0
  W32(c->r[1]+0x00000010u,c->r[5]); // 80281AE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80281AE8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 80281AEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80281AF0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80281AF4
L_80281AF8:;
  c->r[1]=c->r[1]+0x00000020u; // 80281AF8
  return; // 80281AFC
}

// Get__Q34nw4r3lyt6TexMapCFP9_GXTexObj
void f_80281B00(Ctx* __restrict c) {
  trace_call(0x80281B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281B00
  c->r[0]=c->lr; // 80281B04
  c->r[10]=R32(c->r[3]+0x00000018u); // 80281B08
  W32(c->r[1]+0x00000024u,c->r[0]); // 80281B0C
  c->r[7]=rotl(c->r[10],4)&0x0000000Fu; // 80281B10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80281B14
  c->r[0]=c->r[7]+0xFFFFFFF8u; // 80281B18
  cmpu(c,0,c->r[0],0x00000002u); // 80281B1C
  c->r[31]=c->r[4]|c->r[4]; // 80281B20
  W32(c->r[1]+0x00000018u,c->r[30]); // 80281B24
  c->r[30]=c->r[3]|c->r[3]; // 80281B28
  if (crb(c,1)) { goto L_80281B68; } // 80281B2C
  c->r[3]=c->r[31]|c->r[31]; // 80281B30
  c->lr=0x80281B38u; f_80182AB8(c); // 80281B34
  c->r[0]=R32(c->r[30]+0x00000018u); // 80281B38
  W32(c->r[1]+0x00000008u,c->r[3]); // 80281B3C
  c->r[3]=c->r[31]|c->r[31]; // 80281B40
  c->r[4]=R32(c->r[30]+0x00000000u); // 80281B44
  c->r[7]=rotl(c->r[0],4)&0x0000000Fu; // 80281B48
  c->r[5]=R16(c->r[30]+0x00000008u); // 80281B4C
  c->r[8]=rotl(c->r[0],7)&0x00000003u; // 80281B50
  c->r[6]=R16(c->r[30]+0x0000000Au); // 80281B54
  c->r[9]=rotl(c->r[0],9)&0x00000003u; // 80281B58
  c->r[10]=rotl(c->r[0],5)&0x00000001u; // 80281B5C
  c->lr=0x80281B64u; f_801827E0(c); // 80281B60
  goto L_80281B88; // 80281B64
L_80281B68:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80281B68
  c->r[3]=c->r[31]|c->r[31]; // 80281B6C
  c->r[5]=R16(c->r[30]+0x00000008u); // 80281B70
  c->r[8]=rotl(c->r[10],7)&0x00000003u; // 80281B74
  c->r[9]=rotl(c->r[10],9)&0x00000003u; // 80281B78
  c->r[6]=R16(c->r[30]+0x0000000Au); // 80281B7C
  c->r[10]=rotl(c->r[10],5)&0x00000001u; // 80281B80
  c->lr=0x80281B88u; f_801825D4(c); // 80281B84
L_80281B88:;
  c->r[4]=R16(c->r[30]+0x00000014u); // 80281B88
  c->r[5]=0u+0x43300000u; // 80281B8C
  c->r[0]=R32(c->r[30]+0x00000018u); // 80281B90
  c->r[3]=c->r[31]|c->r[31]; // 80281B94
  W32(c->r[1]+0x00000014u,c->r[4]); // 80281B98
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[3]=RF64(ea);} // 80281B9C
  c->r[4]=rotl(c->r[0],12)&0x00000007u; // 80281BA0
  W32(c->r[1]+0x00000010u,c->r[5]); // 80281BA4
  c->r[5]=rotl(c->r[0],13)&0x00000001u; // 80281BA8
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281BAC
  c->r[6]=rotl(c->r[0],14)&0x00000001u; // 80281BB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80281BB4
  c->r[7]=rotl(c->r[0],15)&0x00000001u; // 80281BB8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80281BBC
  c->r[8]=rotl(c->r[0],17)&0x00000003u; // 80281BC0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 80281BC4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80281BC8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80281BCC
  c->lr=0x80281BD4u; f_80182828(c); // 80281BD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80281BD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80281BD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80281BDC
  c->lr=c->r[0]; // 80281BE0
  c->r[1]=c->r[1]+0x00000020u; // 80281BE4
  return; // 80281BE8
}

// Get__Q34nw4r3lyt6TexMapCFP10_GXTlutObj
void f_80281BEC(Ctx* __restrict c) {
  trace_call(0x80281BECu);
  c->r[5]=c->r[3]|c->r[3]; // 80281BEC
  c->r[3]=c->r[4]|c->r[4]; // 80281BF0
  c->r[0]=R32(c->r[5]+0x00000018u); // 80281BF4
  c->r[4]=R32(c->r[5]+0x00000004u); // 80281BF8
  c->r[6]=R16(c->r[5]+0x00000016u); // 80281BFC
  c->r[5]=rotl(c->r[0],19)&0x00000003u; // 80281C00
  f_80182C78(c); return; // 80281C04
}

// Set__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void f_80281C08(Ctx* __restrict c) {
  trace_call(0x80281C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281C08
  c->r[0]=c->lr; // 80281C0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80281C10
  c->r[0]=0u+0x80000000u; // 80281C14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80281C18
  c->r[31]=c->r[5]|c->r[5]; // 80281C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80281C20
  c->r[30]=c->r[4]|c->r[4]; // 80281C24
  W32(c->r[1]+0x00000014u,c->r[29]); // 80281C28
  c->r[29]=c->r[3]|c->r[3]; // 80281C2C
  c->r[6]=R32(c->r[4]+0x00000008u); // 80281C30
  cmpu(c,0,c->r[6],c->r[0]); // 80281C34
  if (!crb(c,0)) { goto L_80281C44; } // 80281C38
  c->r[3]=c->r[30]|c->r[30]; // 80281C3C
  c->lr=0x80281C44u; f_801F08C4(c); // 80281C40
L_80281C44:;
  c->r[3]=c->r[30]|c->r[30]; // 80281C44
  c->r[4]=c->r[31]|c->r[31]; // 80281C48
  c->lr=0x80281C50u; f_801F09D8(c); // 80281C4C
  c->r[4]=c->r[3]|c->r[3]; // 80281C50
  c->r[3]=c->r[29]|c->r[29]; // 80281C54
  c->lr=0x80281C5Cu; f_80281C78(c); // 80281C58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80281C5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80281C60
  c->r[30]=R32(c->r[1]+0x00000018u); // 80281C64
  c->r[29]=R32(c->r[1]+0x00000014u); // 80281C68
  c->lr=c->r[0]; // 80281C6C
  c->r[1]=c->r[1]+0x00000020u; // 80281C70
  return; // 80281C74
}

// Set__Q34nw4r3lyt6TexMapFPC13TPLDescriptor
void f_80281C78(Ctx* __restrict c) {
  trace_call(0x80281C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281C78
  c->r[0]=0u+0x43300000u; // 80281C7C
  c->r[7]=R32(c->r[4]+0x00000000u); // 80281C80
  c->r[8]=R32(c->r[4]+0x00000004u); // 80281C84
  c->r[4]=R32(c->r[7]+0x00000008u); // 80281C88
  c->r[6]=R32(c->r[3]+0x00000018u); // 80281C8C
  cmps(c,0,(int32_t)c->r[8],0); // 80281C90
  W32(c->r[3]+0x00000000u,c->r[4]); // 80281C94
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[3]=RF64(ea);} // 80281C98
  c->r[5]=R16(c->r[7]+0x00000000u); // 80281C9C
  c->r[4]=R16(c->r[7]+0x00000002u); // 80281CA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 80281CA4
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281CA8
  W16(c->r[3]+0x00000008u,c->r[4]); // 80281CAC
  W16(c->r[3]+0x0000000Au,c->r[5]); // 80281CB0
  c->r[4]=R32(c->r[7]+0x00000004u); // 80281CB4
  W32(c->r[1]+0x00000010u,c->r[0]); // 80281CB8
  c->r[6]=(rotl(c->r[4],28)&0xF0000000u)|(c->r[6]&~0xF0000000u); // 80281CBC
  W32(c->r[3]+0x00000018u,c->r[6]); // 80281CC0
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 80281CC4
  c->r[4]=R32(c->r[7]+0x00000010u); // 80281CC8
  c->r[6]=(rotl(c->r[0],25)&0x06000000u)|(c->r[6]&~0x06000000u); // 80281CCC
  c->r[6]=(rotl(c->r[4],23)&0x01800000u)|(c->r[6]&~0x01800000u); // 80281CD0
  W32(c->r[3]+0x00000018u,c->r[6]); // 80281CD4
  c->r[5]=R8(c->r[7]+0x00000021u); // 80281CD8
  c->r[0]=R8(c->r[7]+0x00000022u); // 80281CDC
  c->r[4]=c->r[0]-c->r[5]; // 80281CE0
  c->r[0]=c->r[5]-c->r[0]; // 80281CE4
  c->r[0]=c->r[4]|c->r[0]; // 80281CE8
  c->r[6]=(rotl(c->r[0],28)&0x08000000u)|(c->r[6]&~0x08000000u); // 80281CEC
  W32(c->r[3]+0x00000018u,c->r[6]); // 80281CF0
  c->r[0]=R32(c->r[7]+0x00000014u); // 80281CF4
  c->r[4]=R32(c->r[7]+0x00000018u); // 80281CF8
  c->r[6]=(rotl(c->r[0],20)&0x00700000u)|(c->r[6]&~0x00700000u); // 80281CFC
  c->r[6]=(rotl(c->r[4],19)&0x00080000u)|(c->r[6]&~0x00080000u); // 80281D00
  W32(c->r[3]+0x00000018u,c->r[6]); // 80281D04
  c->r[4]=R8(c->r[7]+0x00000022u); // 80281D08
  c->r[0]=R8(c->r[7]+0x00000021u); // 80281D0C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80281D10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80281D14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80281D18
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80281D1C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80281D20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80281D24
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 80281D28
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80281D2C
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80281D30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80281D34
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80281D38
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80281D3C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80281D40
  W16(c->r[3]+0x00000014u,c->r[0]); // 80281D44
  c->r[4]=R8(c->r[7]+0x00000020u); // 80281D48
  c->r[0]=0u-c->r[4]; // 80281D4C
  c->r[0]=c->r[0]|c->r[4]; // 80281D50
  c->r[6]=(rotl(c->r[0],18)&0x00020000u)|(c->r[6]&~0x00020000u); // 80281D54
  W32(c->r[3]+0x00000018u,c->r[6]); // 80281D58
  if (crb(c,2)) { goto L_80281D80; } // 80281D5C
  c->r[0]=R32(c->r[8]+0x00000008u); // 80281D60
  W32(c->r[3]+0x00000004u,c->r[0]); // 80281D64
  c->r[0]=R32(c->r[8]+0x00000004u); // 80281D68
  c->r[6]=(rotl(c->r[0],13)&0x00006000u)|(c->r[6]&~0x00006000u); // 80281D6C
  W32(c->r[3]+0x00000018u,c->r[6]); // 80281D70
  c->r[0]=R16(c->r[8]+0x00000000u); // 80281D74
  W16(c->r[3]+0x00000016u,c->r[0]); // 80281D78
  goto L_80281D94; // 80281D7C
L_80281D80:;
  c->r[4]=0u+0x00000000u; // 80281D80
  c->r[0]=rotl(c->r[6],0)&0xFFFF9FFFu; // 80281D84
  W32(c->r[3]+0x00000004u,c->r[4]); // 80281D88
  W32(c->r[3]+0x00000018u,c->r[0]); // 80281D8C
  W16(c->r[3]+0x00000016u,c->r[4]); // 80281D90
L_80281D94:;
  c->r[1]=c->r[1]+0x00000020u; // 80281D94
  return; // 80281D98
}

// ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void f_80281D9C(Ctx* __restrict c) {
  trace_call(0x80281D9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281D9C
  c->r[0]=c->lr; // 80281DA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80281DA4
  c->r[0]=0u+0x80000000u; // 80281DA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80281DAC
  c->r[31]=c->r[5]|c->r[5]; // 80281DB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80281DB4
  c->r[30]=c->r[4]|c->r[4]; // 80281DB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80281DBC
  c->r[29]=c->r[3]|c->r[3]; // 80281DC0
  c->r[6]=R32(c->r[4]+0x00000008u); // 80281DC4
  cmpu(c,0,c->r[6],c->r[0]); // 80281DC8
  if (!crb(c,0)) { goto L_80281DD8; } // 80281DCC
  c->r[3]=c->r[30]|c->r[30]; // 80281DD0
  c->lr=0x80281DD8u; f_801F08C4(c); // 80281DD4
L_80281DD8:;
  c->r[3]=c->r[30]|c->r[30]; // 80281DD8
  c->r[4]=c->r[31]|c->r[31]; // 80281DDC
  c->lr=0x80281DE4u; f_801F09D8(c); // 80281DE0
  c->r[6]=R32(c->r[3]+0x00000000u); // 80281DE4
  c->r[4]=R32(c->r[29]+0x00000018u); // 80281DE8
  c->r[0]=R32(c->r[6]+0x00000008u); // 80281DEC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80281DF0
  c->r[5]=R16(c->r[6]+0x00000000u); // 80281DF4
  c->r[0]=R16(c->r[6]+0x00000002u); // 80281DF8
  W16(c->r[29]+0x00000008u,c->r[0]); // 80281DFC
  W16(c->r[29]+0x0000000Au,c->r[5]); // 80281E00
  c->r[0]=R32(c->r[6]+0x00000004u); // 80281E04
  c->r[4]=(rotl(c->r[0],28)&0xF0000000u)|(c->r[4]&~0xF0000000u); // 80281E08
  W32(c->r[29]+0x00000018u,c->r[4]); // 80281E0C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80281E10
  cmps(c,0,(int32_t)c->r[3],0); // 80281E14
  if (crb(c,2)) { goto L_80281E3C; } // 80281E18
  c->r[0]=R32(c->r[3]+0x00000008u); // 80281E1C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80281E20
  c->r[0]=R32(c->r[3]+0x00000004u); // 80281E24
  c->r[4]=(rotl(c->r[0],13)&0x00006000u)|(c->r[4]&~0x00006000u); // 80281E28
  W32(c->r[29]+0x00000018u,c->r[4]); // 80281E2C
  c->r[0]=R16(c->r[3]+0x00000000u); // 80281E30
  W16(c->r[29]+0x00000016u,c->r[0]); // 80281E34
  goto L_80281E50; // 80281E38
L_80281E3C:;
  c->r[3]=0u+0x00000000u; // 80281E3C
  c->r[0]=rotl(c->r[4],0)&0xFFFF9FFFu; // 80281E40
  W32(c->r[29]+0x00000004u,c->r[3]); // 80281E44
  W32(c->r[29]+0x00000018u,c->r[0]); // 80281E48
  W16(c->r[29]+0x00000016u,c->r[3]); // 80281E4C
L_80281E50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80281E50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80281E54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80281E58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80281E5C
  c->lr=c->r[0]; // 80281E60
  c->r[1]=c->r[1]+0x00000020u; // 80281E64
  return; // 80281E68
}

// __ct__Q34nw4r3lyt8DrawInfoFv
void f_80281E6C(Ctx* __restrict c) {
  trace_call(0x80281E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281E6C
  c->r[0]=c->lr; // 80281E70
  c->r[4]=0u+0x80340000u; // 80281E74
  {uint32_t ea=c->r[2]+0xFFFF9E98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80281E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80281E7C
  c->r[4]=c->r[4]+0x000053E0u; // 80281E80
  {uint32_t ea=c->r[2]+0xFFFF9E9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80281E84
  c->r[5]=0u+0x00000001u; // 80281E88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80281E8C
  c->r[31]=c->r[3]|c->r[3]; // 80281E90
  W32(c->r[3]+0x00000000u,c->r[4]); // 80281E94
  c->r[4]=0u+0x00000000u; // 80281E98
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 80281E9C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 80281EA0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 80281EA4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 80281EA8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80281EAC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80281EB0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80281EB4
  c->r[3]=c->r[3]+0x00000050u; // 80281EB8
  c->lr=0x80281EC0u; f_80004688(c); // 80281EBC
  c->r[3]=c->r[31]+0x00000004u; // 80281EC0
  c->lr=0x80281EC8u; f_80167F98(c); // 80281EC4
  c->r[3]=c->r[31]|c->r[31]; // 80281EC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80281ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80281ED0
  c->lr=c->r[0]; // 80281ED4
  c->r[1]=c->r[1]+0x00000010u; // 80281ED8
  return; // 80281EDC
}

// fn_80281EE0
void f_80281EE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80281EE0
  c->r[0]=c->lr; // 80281EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80281EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80281EEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80281EF0
  c->r[31]=c->r[3]|c->r[3]; // 80281EF4
  if (crb(c,2)) { goto L_80281F08; } // 80281EF8
  cmps(c,0,(int32_t)c->r[4],0); // 80281EFC
  if (!crb(c,1)) { goto L_80281F08; } // 80281F00
  c->lr=0x80281F08u; f_800D6AD0(c); // 80281F04
L_80281F08:;
  c->r[3]=c->r[31]|c->r[31]; // 80281F08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80281F0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80281F10
  c->lr=c->r[0]; // 80281F14
  c->r[1]=c->r[1]+0x00000010u; // 80281F18
  return; // 80281F1C
}

// GetStepCurveValue__Q34nw4r3lyt27@unnamed@lyt_animation_cpp@FfPCQ44nw4r3lyt3res7StepKeyUl
void f_80281F20(Ctx* __restrict c) {
  trace_call(0x80281F20u);
  cmpu(c,0,c->r[4],0x00000001u); // 80281F20
  if (crb(c,2)) { goto L_80281F38; } // 80281F24
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281F28
  fcmp(c,0,c->f[1],c->f[0]); // 80281F2C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80281F30
  if (!crb(c,2)) { goto L_80281F40; } // 80281F34
L_80281F38:;
  c->r[3]=R16(c->r[3]+0x00000004u); // 80281F38
  return; // 80281F3C
L_80281F40:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80281F40
  c->r[5]=c->r[3]+c->r[0]; // 80281F44
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281F48
  fcmp(c,0,c->f[1],c->f[0]); // 80281F4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80281F50
  if (!crb(c,2)) { goto L_80281F60; } // 80281F54
  c->r[3]=R16(c->r[5]+0xFFFFFFFCu); // 80281F58
  return; // 80281F5C
L_80281F60:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 80281F60
  c->r[5]=0u+0x00000000u; // 80281F64
  goto L_80281FA4; // 80281F68
L_80281F6C:;
  c->r[4]=c->r[5]+c->r[6]; // 80281F6C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80281F70
  c->r[4]=c->r[0]+c->r[4]; // 80281F74
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFF8u; // 80281F78
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80281F7C
  c->r[4]=sraw(c,c->r[4],1); // 80281F80
  fcmp(c,0,c->f[1],c->f[0]); // 80281F84
  c->r[0]=c->cr; // 80281F88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80281F8C
  if (crb(c,2)) { goto L_80281F98; } // 80281F90
  c->r[6]=c->r[4]|c->r[4]; // 80281F94
L_80281F98:;
  cmps(c,0,(int32_t)c->r[0],0); // 80281F98
  if (!crb(c,2)) { goto L_80281FA4; } // 80281F9C
  c->r[5]=c->r[4]|c->r[4]; // 80281FA0
L_80281FA4:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 80281FA4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80281FA8
  if (crb(c,2)) { goto L_80281FB8; } // 80281FAC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 80281FB0
  if (!crb(c,2)) { IRQCHK(c); goto L_80281F6C; } // 80281FB4
L_80281FB8:;
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80281FB8
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281FBC
  {uint32_t ea=c->r[3]+c->r[4]; c->f[2]=c->ps1[2]=RF32(ea);} // 80281FC0
  c->r[0]=0u+0x00000000u; // 80281FC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80281FC8
  fcmp(c,0,c->f[0],c->f[1]); // 80281FCC
  if (!crb(c,0)) { goto L_80281FE4; } // 80281FD0
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80281FD4
  fcmp(c,0,c->f[1],c->f[0]); // 80281FD8
  if (!crb(c,0)) { goto L_80281FE4; } // 80281FDC
  c->r[0]=0u+0x00000001u; // 80281FE0
L_80281FE4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80281FE4
  if (crb(c,2)) { goto L_80281FF8; } // 80281FE8
  c->r[3]=c->r[3]+c->r[4]; // 80281FEC
  c->r[3]=R16(c->r[3]+0x00000004u); // 80281FF0
  return; // 80281FF4
L_80281FF8:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80281FF8
  c->r[3]=c->r[3]+c->r[0]; // 80281FFC
  c->r[3]=R16(c->r[3]+0x00000004u); // 80282000
  return; // 80282004
}

// GetHermiteCurveValue__Q34nw4r3lyt27@unnamed@lyt_animation_cpp@FfPCQ44nw4r3lyt3res10HermiteKeyUl
void f_80282008(Ctx* __restrict c) {
  trace_call(0x80282008u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80282008
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8028200C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80282010
  cmpu(c,0,c->r[4],0x00000001u); // 80282014
  if (crb(c,2)) { goto L_8028202C; } // 80282018
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028201C
  fcmp(c,0,c->f[1],c->f[0]); // 80282020
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80282024
  if (!crb(c,2)) { goto L_80282034; } // 80282028
L_8028202C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028202C
  goto L_802821B4; // 80282030
L_80282034:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80282034
  c->r[5]=c->r[3]+c->r[0]; // 80282038
  {uint32_t ea=c->r[5]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028203C
  fcmp(c,0,c->f[1],c->f[0]); // 80282040
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80282044
  if (!crb(c,2)) { goto L_80282054; } // 80282048
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028204C
  goto L_802821B4; // 80282050
L_80282054:;
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 80282054
  c->r[6]=0u+0x00000000u; // 80282058
  goto L_8028209C; // 8028205C
L_80282060:;
  c->r[5]=c->r[6]+c->r[7]; // 80282060
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 80282064
  c->r[0]=c->r[0]+c->r[5]; // 80282068
  c->r[5]=sraw(c,c->r[0],1); // 8028206C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80282070
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80282074
  fcmp(c,0,c->f[1],c->f[0]); // 80282078
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8028207C
  c->r[0]=c->cr; // 80282080
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 80282084
  if (crb(c,2)) { goto L_80282090; } // 80282088
  c->r[7]=c->r[5]|c->r[5]; // 8028208C
L_80282090:;
  cmps(c,0,(int32_t)c->r[0],0); // 80282090
  if (!crb(c,2)) { goto L_8028209C; } // 80282094
  c->r[6]=c->r[5]|c->r[5]; // 80282098
L_8028209C:;
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 8028209C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 802820A0
  if (crb(c,2)) { goto L_802820B0; } // 802820A4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 802820A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80282060; } // 802820AC
L_802820B0:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 802820B0
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802820B4
  c->r[0]=0u+0x00000000u; // 802820B8
  {uint32_t ea=c->r[3]+c->r[5]; c->f[2]=c->ps1[2]=RF32(ea);} // 802820BC
  c->r[8]=c->r[3]+c->r[5]; // 802820C0
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 802820C4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 802820C8
  c->r[5]=c->r[3]+c->r[5]; // 802820CC
  fcmp(c,0,c->f[0],c->f[2]); // 802820D0
  if (!crb(c,0)) { goto L_802820E8; } // 802820D4
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802820D8
  fcmp(c,0,c->f[2],c->f[0]); // 802820DC
  if (!crb(c,0)) { goto L_802820E8; } // 802820E0
  c->r[0]=0u+0x00000001u; // 802820E4
L_802820E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802820E8
  if (crb(c,2)) { goto L_80282128; } // 802820EC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802820F0
  cmpu(c,0,c->r[7],c->r[0]); // 802820F4
  if (!crb(c,0)) { goto L_80282120; } // 802820F8
  c->r[0]=c->r[7]+0x00000001u; // 802820FC
  {uint32_t ea=c->r[8]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80282100
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80282104
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80282108
  fcmp(c,0,c->f[1],c->f[0]); // 8028210C
  if (!crb(c,2)) { goto L_80282120; } // 80282110
  c->r[3]=c->r[3]+c->r[0]; // 80282114
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80282118
  goto L_802821B4; // 8028211C
L_80282120:;
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80282120
  goto L_802821B4; // 80282124
L_80282128:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80282128
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028212C
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 80282130
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80282134
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80282138
  {uint32_t ea=c->r[2]+0xFFFF9EACu; c->f[4]=c->ps1[4]=RF32(ea);} // 8028213C
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80282140
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 80282144
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[0]); // 80282148
  {uint32_t ea=c->r[2]+0xFFFF9EB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028214C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 80282150
  {uint32_t ea=c->r[8]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 80282154
  {uint32_t ea=c->r[5]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 80282158
  {uint32_t ea=c->r[8]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 8028215C
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[2]); // 80282160
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[5]); // 80282164
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 80282168
  c->f[13]=c->ps1[13]=S(c->f[7]*c->f[2]); // 8028216C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 80282170
  c->f[31]=c->ps1[31]=S(c->f[13]*c->f[5]); // 80282174
  c->f[3]=c->ps1[3]=S(c->f[13]-c->f[3]); // 80282178
  c->f[5]=c->ps1[5]=S(c->f[13]-c->f[12]); // 8028217C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[31]); // 80282180
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 80282184
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[3]); // 80282188
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028218C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80282190
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[3]); // 80282194
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 80282198
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 8028219C
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[5]); // 802821A0
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 802821A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802821A8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802821AC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 802821B0
L_802821B4:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 802821B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 802821B8
  c->r[1]=c->r[1]+0x00000020u; // 802821BC
  return; // 802821C0
}

// GetFrameSize__Q34nw4r3lyt13AnimTransformCFv
void f_802821C4(Ctx* __restrict c) {
  trace_call(0x802821C4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802821C4
  c->r[3]=R16(c->r[3]+0x00000008u); // 802821C8
  return; // 802821CC
}

// IsLoopData__Q34nw4r3lyt13AnimTransformCFv
void f_802821D0(Ctx* __restrict c) {
  trace_call(0x802821D0u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802821D0
  c->r[3]=R8(c->r[3]+0x0000000Au); // 802821D4
  c->r[0]=0u-c->r[3]; // 802821D8
  c->r[0]=c->r[0]|c->r[3]; // 802821DC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802821E0
  return; // 802821E4
}

// __ct__Q34nw4r3lyt18AnimTransformBasicFv
void f_802821E8(Ctx* __restrict c) {
  trace_call(0x802821E8u);
  {uint32_t ea=c->r[2]+0xFFFF9EB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802821E8
  c->r[4]=0u+0x80340000u; // 802821EC
  c->r[0]=0u+0x00000000u; // 802821F0
  c->r[4]=c->r[4]+0x000053F0u; // 802821F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802821F8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802821FC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80282200
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80282204
  W32(c->r[3]+0x00000000u,c->r[4]); // 80282208
  W32(c->r[3]+0x00000014u,c->r[0]); // 8028220C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80282210
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 80282214
  return; // 80282218
}

// __dt__Q34nw4r3lyt18AnimTransformBasicFv
void f_8028221C(Ctx* __restrict c) {
  trace_call(0x8028221Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028221C
  c->r[0]=c->lr; // 80282220
  cmps(c,0,(int32_t)c->r[3],0); // 80282224
  W32(c->r[1]+0x00000014u,c->r[0]); // 80282228
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028222C
  c->r[31]=c->r[4]|c->r[4]; // 80282230
  W32(c->r[1]+0x00000008u,c->r[30]); // 80282234
  c->r[30]=c->r[3]|c->r[3]; // 80282238
  if (crb(c,2)) { goto L_80282284; } // 8028223C
  c->r[4]=R32(c->r[3]+0x00000018u); // 80282240
  c->r[5]=0u+0x80340000u; // 80282244
  c->r[5]=c->r[5]+0x000053F0u; // 80282248
  cmps(c,0,(int32_t)c->r[4],0); // 8028224C
  W32(c->r[3]+0x00000000u,c->r[5]); // 80282250
  if (crb(c,2)) { goto L_80282260; } // 80282254
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80282258
  c->lr=0x80282260u; f_801A0F08(c); // 8028225C
L_80282260:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 80282260
  cmps(c,0,(int32_t)c->r[4],0); // 80282264
  if (crb(c,2)) { goto L_80282274; } // 80282268
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8028226C
  c->lr=0x80282274u; f_801A0F08(c); // 80282270
L_80282274:;
  cmps(c,0,(int32_t)c->r[31],0); // 80282274
  if (!crb(c,1)) { goto L_80282284; } // 80282278
  c->r[3]=c->r[30]|c->r[30]; // 8028227C
  c->lr=0x80282284u; f_800D6AD0(c); // 80282280
L_80282284:;
  c->r[3]=c->r[30]|c->r[30]; // 80282284
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80282288
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028228C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80282290
  c->lr=c->r[0]; // 80282294
  c->r[1]=c->r[1]+0x00000010u; // 80282298
  return; // 8028229C
}

// SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessor
void f_802822A0(Ctx* __restrict c) {
  trace_call(0x802822A0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 802822A0
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 802822A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 802822A8
  c->ctr=c->r[12]; // 802822AC
  if (true) { dispatch(c,c->ctr); return; } // 802822B0
}

// SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessorUs
void f_802822B4(Ctx* __restrict c) {
  trace_call(0x802822B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802822B4
  c->r[0]=c->lr; // 802822B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802822BC
  c->r[11]=c->r[1]+0x00000030u; // 802822C0
  c->lr=0x802822C8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802822C4
  c->r[27]=R16(c->r[4]+0x0000000Cu); // 802822C8
  c->r[30]=0u+0x00000000u; // 802822CC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 802822D0
  c->r[31]=c->r[3]|c->r[3]; // 802822D4
  cmps(c,0,(int32_t)c->r[27],0); // 802822D8
  c->r[24]=c->r[5]|c->r[5]; // 802822DC
  W32(c->r[3]+0x00000014u,c->r[30]); // 802822E0
  c->r[25]=c->r[6]|c->r[6]; // 802822E4
  if (crb(c,2)) { goto L_8028239C; } // 802822E8
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 802822EC
  c->r[4]=rotl(c->r[27],2)&0x0003FFFCu; // 802822F0
  c->lr=0x802822F8u; f_801A0EF8(c); // 802822F4
  cmps(c,0,(int32_t)c->r[3],0); // 802822F8
  if (!crb(c,2)) { goto L_80282308; } // 802822FC
  c->r[3]=0u+0x00000000u; // 80282300
  goto L_8028232C; // 80282304
L_80282308:;
  c->r[4]=c->r[3]|c->r[3]; // 80282308
  c->ctr=c->r[27]; // 8028230C
  cmpu(c,0,c->r[27],0x00000000u); // 80282310
  if (!crb(c,1)) { goto L_8028232C; } // 80282314
L_80282318:;
  cmps(c,0,(int32_t)c->r[4],0); // 80282318
  if (crb(c,2)) { goto L_80282324; } // 8028231C
  W32(c->r[4]+0x00000000u,c->r[30]); // 80282320
L_80282324:;
  c->r[4]=c->r[4]+0x00000004u; // 80282324
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80282318; } // 80282328
L_8028232C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8028232C
  W32(c->r[31]+0x00000014u,c->r[3]); // 80282330
  if (crb(c,2)) { goto L_8028239C; } // 80282334
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80282338
  c->r[26]=0u+0x00000000u; // 8028233C
  c->r[27]=0u+0x00000000u; // 80282340
  c->r[30]=0u+0x74690000u; // 80282344
  c->r[29]=c->r[3]+0x00000014u; // 80282348
  c->r[28]=c->r[29]|c->r[29]; // 8028234C
  goto L_8028238C; // 80282350
L_80282354:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 80282354
  c->r[3]=c->r[24]|c->r[24]; // 80282358
  c->r[0]=R32(c->r[28]+0x00000000u); // 8028235C
  c->r[4]=c->r[30]+0x00006D67u; // 80282360
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80282364
  c->r[6]=0u+0x00000000u; // 80282368
  c->r[5]=c->r[29]+c->r[0]; // 8028236C
  c->ctr=c->r[12]; // 80282370
  if (true) { c->lr=0x80282378u; dispatch(c,c->ctr); } // 80282374
  c->r[4]=R32(c->r[31]+0x00000014u); // 80282378
  c->r[28]=c->r[28]+0x00000004u; // 8028237C
  c->r[26]=c->r[26]+0x00000001u; // 80282380
  W32(c->r[4]+c->r[27],c->r[3]); // 80282384
  c->r[27]=c->r[27]+0x00000004u; // 80282388
L_8028238C:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8028238C
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 80282390
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80282394
  if (crb(c,0)) { IRQCHK(c); goto L_80282354; } // 80282398
L_8028239C:;
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8028239C
  c->r[4]=rotl(c->r[25],4)&0x000FFFF0u; // 802823A0
  c->lr=0x802823A8u; f_801A0EF8(c); // 802823A4
  cmps(c,0,(int32_t)c->r[3],0); // 802823A8
  if (!crb(c,2)) { goto L_802823B8; } // 802823AC
  c->r[3]=0u+0x00000000u; // 802823B0
  goto L_802823F0; // 802823B4
L_802823B8:;
  c->r[4]=c->r[3]|c->r[3]; // 802823B8
  c->r[0]=0u+0x00000000u; // 802823BC
  c->ctr=c->r[25]; // 802823C0
  cmpu(c,0,c->r[25],0x00000000u); // 802823C4
  if (!crb(c,1)) { goto L_802823F0; } // 802823C8
L_802823CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 802823CC
  if (crb(c,2)) { goto L_802823E8; } // 802823D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 802823D4
  W32(c->r[4]+0x00000004u,c->r[0]); // 802823D8
  W32(c->r[4]+0x00000008u,c->r[0]); // 802823DC
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 802823E0
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 802823E4
L_802823E8:;
  c->r[4]=c->r[4]+0x00000010u; // 802823E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802823CC; } // 802823EC
L_802823F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802823F0
  W32(c->r[31]+0x00000018u,c->r[3]); // 802823F4
  if (crb(c,2)) { goto L_80282400; } // 802823F8
  W16(c->r[31]+0x0000001Cu,c->r[25]); // 802823FC
L_80282400:;
  c->r[11]=c->r[1]+0x00000030u; // 80282400
  c->lr=0x80282408u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80282404
  c->r[0]=R32(c->r[1]+0x00000034u); // 80282408
  c->lr=c->r[0]; // 8028240C
  c->r[1]=c->r[1]+0x00000030u; // 80282410
  return; // 80282414
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt4Panebb
void f_80282418(Ctx* __restrict c) {
  trace_call(0x80282418u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80282418
  c->r[0]=c->lr; // 8028241C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80282420
  c->r[11]=c->r[1]+0x00000030u; // 80282424
  c->lr=0x8028242Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80282428
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 8028242C
  c->r[25]=c->r[3]|c->r[3]; // 80282430
  c->r[26]=c->r[4]|c->r[4]; // 80282434
  c->r[27]=c->r[5]|c->r[5]; // 80282438
  c->r[0]=R32(c->r[7]+0x00000010u); // 8028243C
  c->r[28]=c->r[6]|c->r[6]; // 80282440
  c->r[31]=0u+0x00000000u; // 80282444
  c->r[29]=0u+0x00000000u; // 80282448
  c->r[30]=c->r[7]+c->r[0]; // 8028244C
  goto L_802825B4; // 80282450
L_80282454:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 80282454
  c->r[0]=R32(c->r[30]+c->r[0]); // 80282458
  c->r[4]=c->r[4]+c->r[0]; // 8028245C
  c->r[0]=R8(c->r[4]+0x00000015u); // 80282460
  cmps(c,0,(int32_t)c->r[0],0); // 80282464
  if (!crb(c,2)) { goto L_80282510; } // 80282468
  c->r[12]=R32(c->r[26]+0x00000000u); // 8028246C
  c->r[3]=c->r[26]|c->r[26]; // 80282470
  c->r[5]=c->r[27]|c->r[27]; // 80282474
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80282478
  c->ctr=c->r[12]; // 8028247C
  if (true) { c->lr=0x80282484u; dispatch(c,c->ctr); } // 80282480
  cmps(c,0,(int32_t)c->r[3],0); // 80282484
  if (crb(c,2)) { goto L_802825B0; } // 80282488
  cmps(c,0,(int32_t)c->r[31],0); // 8028248C
  if (!crb(c,2)) { goto L_80282498; } // 80282490
  c->r[31]=R32(c->r[25]+0x00000018u); // 80282494
L_80282498:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 80282498
  c->r[4]=R32(c->r[25]+0x00000018u); // 8028249C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802824A0
  c->r[4]=c->r[4]+c->r[0]; // 802824A4
  c->r[0]=c->r[4]+0x0000000Fu; // 802824A8
  c->r[0]=c->r[0]-c->r[31]; // 802824AC
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 802824B0
  c->ctr=c->r[0]; // 802824B4
  cmpu(c,0,c->r[31],c->r[4]); // 802824B8
  if (!crb(c,0)) { goto L_802824D8; } // 802824BC
L_802824C0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 802824C0
  cmps(c,0,(int32_t)c->r[0],0); // 802824C4
  if (!crb(c,2)) { goto L_802824D0; } // 802824C8
  goto L_802824DC; // 802824CC
L_802824D0:;
  c->r[31]=c->r[31]+0x00000010u; // 802824D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802824C0; } // 802824D4
L_802824D8:;
  c->r[31]=0u+0x00000000u; // 802824D8
L_802824DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802824DC
  if (!crb(c,2)) { goto L_802824EC; } // 802824E0
  c->r[31]=0u+0x00000000u; // 802824E4
  goto L_80282504; // 802824E8
L_802824EC:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 802824EC
  c->r[4]=c->r[31]|c->r[31]; // 802824F0
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 802824F4
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 802824F8
  c->lr=0x80282500u; f_80278CBC(c); // 802824FC
  c->r[31]=c->r[31]+0x00000010u; // 80282500
L_80282504:;
  cmps(c,0,(int32_t)c->r[31],0); // 80282504
  if (crb(c,2)) { goto L_802825C8; } // 80282508
  goto L_802825B0; // 8028250C
L_80282510:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80282510
  c->r[3]=c->r[26]|c->r[26]; // 80282514
  c->r[5]=c->r[27]|c->r[27]; // 80282518
  c->r[12]=R32(c->r[12]+0x00000040u); // 8028251C
  c->ctr=c->r[12]; // 80282520
  if (true) { c->lr=0x80282528u; dispatch(c,c->ctr); } // 80282524
  cmps(c,0,(int32_t)c->r[3],0); // 80282528
  if (crb(c,2)) { goto L_802825B0; } // 8028252C
  cmps(c,0,(int32_t)c->r[31],0); // 80282530
  if (!crb(c,2)) { goto L_8028253C; } // 80282534
  c->r[31]=R32(c->r[25]+0x00000018u); // 80282538
L_8028253C:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 8028253C
  c->r[4]=R32(c->r[25]+0x00000018u); // 80282540
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80282544
  c->r[4]=c->r[4]+c->r[0]; // 80282548
  c->r[0]=c->r[4]+0x0000000Fu; // 8028254C
  c->r[0]=c->r[0]-c->r[31]; // 80282550
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 80282554
  c->ctr=c->r[0]; // 80282558
  cmpu(c,0,c->r[31],c->r[4]); // 8028255C
  if (!crb(c,0)) { goto L_8028257C; } // 80282560
L_80282564:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80282564
  cmps(c,0,(int32_t)c->r[0],0); // 80282568
  if (!crb(c,2)) { goto L_80282574; } // 8028256C
  goto L_80282580; // 80282570
L_80282574:;
  c->r[31]=c->r[31]+0x00000010u; // 80282574
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80282564; } // 80282578
L_8028257C:;
  c->r[31]=0u+0x00000000u; // 8028257C
L_80282580:;
  cmps(c,0,(int32_t)c->r[31],0); // 80282580
  if (!crb(c,2)) { goto L_80282590; } // 80282584
  c->r[31]=0u+0x00000000u; // 80282588
  goto L_802825A8; // 8028258C
L_80282590:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 80282590
  c->r[4]=c->r[31]|c->r[31]; // 80282594
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 80282598
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 8028259C
  c->lr=0x802825A4u; f_802819B4(c); // 802825A0
  c->r[31]=c->r[31]+0x00000010u; // 802825A4
L_802825A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802825A8
  if (crb(c,2)) { goto L_802825C8; } // 802825AC
L_802825B0:;
  c->r[29]=c->r[29]+0x00000001u; // 802825B0
L_802825B4:;
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 802825B4
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 802825B8
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 802825BC
  cmpu(c,0,c->r[3],c->r[0]); // 802825C0
  if (crb(c,0)) { IRQCHK(c); goto L_80282454; } // 802825C4
L_802825C8:;
  c->r[11]=c->r[1]+0x00000030u; // 802825C8
  c->lr=0x802825D0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802825CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802825D0
  c->lr=c->r[0]; // 802825D4
  c->r[1]=c->r[1]+0x00000030u; // 802825D8
  return; // 802825DC
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt8Materialb
void f_802825E0(Ctx* __restrict c) {
  trace_call(0x802825E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802825E0
  c->r[0]=c->lr; // 802825E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802825E8
  c->r[11]=c->r[1]+0x00000020u; // 802825EC
  c->lr=0x802825F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802825F0
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 802825F4
  c->r[26]=c->r[3]|c->r[3]; // 802825F8
  c->r[27]=c->r[4]|c->r[4]; // 802825FC
  c->r[28]=c->r[5]|c->r[5]; // 80282600
  c->r[0]=R32(c->r[6]+0x00000010u); // 80282604
  c->r[31]=0u+0x00000000u; // 80282608
  c->r[29]=0u+0x00000000u; // 8028260C
  c->r[30]=c->r[6]+c->r[0]; // 80282610
  goto L_802826C8; // 80282614
L_80282618:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 80282618
  c->r[0]=R32(c->r[30]+c->r[0]); // 8028261C
  c->r[4]=c->r[4]+c->r[0]; // 80282620
  c->r[0]=R8(c->r[4]+0x00000015u); // 80282624
  cmpu(c,0,c->r[0],0x00000001u); // 80282628
  if (!crb(c,2)) { goto L_802826C4; } // 8028262C
  c->r[3]=c->r[27]+0x00000044u; // 80282630
  c->lr=0x80282638u; f_80283A4C(c); // 80282634
  cmps(c,0,(int32_t)c->r[3],0); // 80282638
  if (crb(c,2)) { goto L_802826C4; } // 8028263C
  cmps(c,0,(int32_t)c->r[31],0); // 80282640
  if (!crb(c,2)) { goto L_8028264C; } // 80282644
  c->r[31]=R32(c->r[26]+0x00000018u); // 80282648
L_8028264C:;
  c->r[0]=R16(c->r[26]+0x0000001Cu); // 8028264C
  c->r[3]=R32(c->r[26]+0x00000018u); // 80282650
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80282654
  c->r[3]=c->r[3]+c->r[0]; // 80282658
  c->r[0]=c->r[3]+0x0000000Fu; // 8028265C
  c->r[0]=c->r[0]-c->r[31]; // 80282660
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 80282664
  c->ctr=c->r[0]; // 80282668
  cmpu(c,0,c->r[31],c->r[3]); // 8028266C
  if (!crb(c,0)) { goto L_8028268C; } // 80282670
L_80282674:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80282674
  cmps(c,0,(int32_t)c->r[0],0); // 80282678
  if (!crb(c,2)) { goto L_80282684; } // 8028267C
  goto L_80282690; // 80282680
L_80282684:;
  c->r[31]=c->r[31]+0x00000010u; // 80282684
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80282674; } // 80282688
L_8028268C:;
  c->r[31]=0u+0x00000000u; // 8028268C
L_80282690:;
  cmps(c,0,(int32_t)c->r[31],0); // 80282690
  if (!crb(c,2)) { goto L_802826A0; } // 80282694
  c->r[31]=0u+0x00000000u; // 80282698
  goto L_802826BC; // 8028269C
L_802826A0:;
  W32(c->r[31]+0x00000008u,c->r[26]); // 802826A0
  c->r[3]=c->r[27]|c->r[27]; // 802826A4
  c->r[4]=c->r[31]|c->r[31]; // 802826A8
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 802826AC
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 802826B0
  c->lr=0x802826B8u; f_802819B4(c); // 802826B4
  c->r[31]=c->r[31]+0x00000010u; // 802826B8
L_802826BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802826BC
  if (crb(c,2)) { goto L_802826DC; } // 802826C0
L_802826C4:;
  c->r[29]=c->r[29]+0x00000001u; // 802826C4
L_802826C8:;
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 802826C8
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 802826CC
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 802826D0
  cmpu(c,0,c->r[3],c->r[0]); // 802826D4
  if (crb(c,0)) { IRQCHK(c); goto L_80282618; } // 802826D8
L_802826DC:;
  c->r[11]=c->r[1]+0x00000020u; // 802826DC
  c->lr=0x802826E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802826E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802826E4
  c->lr=c->r[0]; // 802826E8
  c->r[1]=c->r[1]+0x00000020u; // 802826EC
  return; // 802826F0
}

// Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt4Pane
void f_802826F4(Ctx* __restrict c) {
  trace_call(0x802826F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802826F4
  c->r[0]=c->lr; // 802826F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 802826FC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80282700
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80282704
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80282708
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8028270C
  c->r[11]=c->r[1]+0x00000040u; // 80282710
  c->lr=0x80282718u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80282714
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80282718
  c->r[31]=0u+0x524C0000u; // 8028271C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80282720
  {uint32_t ea=c->r[2]+0xFFFF9EBCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80282724
  c->r[0]=R32(c->r[6]+0x00000010u); // 80282728
  c->r[22]=c->r[3]|c->r[3]; // 8028272C
  c->r[23]=c->r[5]|c->r[5]; // 80282730
  c->r[30]=c->r[31]+0x00005643u; // 80282734
  c->r[0]=c->r[6]+c->r[0]; // 80282738
  c->r[24]=0u+0x00000000u; // 8028273C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80282740
  c->r[28]=c->r[6]+c->r[0]; // 80282744
  c->r[26]=c->r[28]+0x00000018u; // 80282748
  goto L_802828AC; // 8028274C
L_80282750:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 80282750
  c->r[3]=R32(c->r[28]+c->r[0]); // 80282754
  c->r[27]=c->r[28]+c->r[0]; // 80282758
  c->r[25]=c->r[27]+0x00000008u; // 8028275C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 80282760
  if (crb(c,2)) { goto L_80282838; } // 80282764
  if (!crb(c,0)) { goto L_8028277C; } // 80282768
  c->r[0]=c->r[31]+0x00005041u; // 8028276C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80282770
  if (crb(c,2)) { goto L_8028278C; } // 80282774
  goto L_802828A4; // 80282778
L_8028277C:;
  c->r[0]=c->r[31]+0x00005649u; // 8028277C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80282780
  if (crb(c,2)) { goto L_802827DC; } // 80282784
  goto L_802828A4; // 80282788
L_8028278C:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 8028278C
  c->r[29]=0u+0x00000000u; // 80282790
  goto L_802827CC; // 80282794
L_80282798:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80282798
  c->f[1]=c->f[30]; // 8028279C
  c->r[21]=c->r[27]+c->r[0]; // 802827A0
  c->r[0]=R32(c->r[21]+0x00000008u); // 802827A4
  c->r[4]=R16(c->r[21]+0x00000004u); // 802827A8
  c->r[3]=c->r[21]+c->r[0]; // 802827AC
  c->lr=0x802827B4u; f_80282008(c); // 802827B0
  c->r[0]=R8(c->r[21]+0x00000001u); // 802827B4
  c->r[25]=c->r[25]+0x00000004u; // 802827B8
  c->r[29]=c->r[29]+0x00000001u; // 802827BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802827C0
  c->r[3]=c->r[23]+c->r[0]; // 802827C4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 802827C8
L_802827CC:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 802827CC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 802827D0
  if (crb(c,0)) { IRQCHK(c); goto L_80282798; } // 802827D4
  goto L_802828A4; // 802827D8
L_802827DC:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 802827DC
  c->r[29]=0u+0x00000000u; // 802827E0
  goto L_80282828; // 802827E4
L_802827E8:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 802827E8
  c->f[1]=c->f[30]; // 802827EC
  c->r[3]=c->r[27]+c->r[0]; // 802827F0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802827F4
  c->r[4]=R16(c->r[3]+0x00000004u); // 802827F8
  c->r[3]=c->r[3]+c->r[0]; // 802827FC
  c->lr=0x80282804u; f_80281F20(c); // 80282800
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 80282804
  c->r[0]=R8(c->r[23]+0x000000BBu); // 80282808
  c->r[3]=0u-c->r[4]; // 8028280C
  c->r[25]=c->r[25]+0x00000004u; // 80282810
  c->r[3]=c->r[3]|c->r[4]; // 80282814
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80282818
  c->r[0]=(rotl(c->r[3],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 8028281C
  c->r[29]=c->r[29]+0x00000001u; // 80282820
  W8(c->r[23]+0x000000BBu,c->r[0]); // 80282824
L_80282828:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282828
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8028282C
  if (crb(c,0)) { IRQCHK(c); goto L_802827E8; } // 80282830
  goto L_802828A4; // 80282834
L_80282838:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282838
  c->r[29]=0u+0x00000000u; // 8028283C
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 80282840
  cmps(c,0,(int32_t)c->r[0],0); // 80282844
  if (!crb(c,1)) { goto L_802828A4; } // 80282848
  goto L_80282898; // 8028284C
L_80282850:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80282850
  c->f[1]=c->f[30]; // 80282854
  c->r[21]=c->r[27]+c->r[0]; // 80282858
  c->r[0]=R32(c->r[21]+0x00000008u); // 8028285C
  c->r[4]=R16(c->r[21]+0x00000004u); // 80282860
  c->r[3]=c->r[21]+c->r[0]; // 80282864
  c->lr=0x8028286Cu; f_80282008(c); // 80282868
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 8028286C
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,2);} // 80282870
  c->r[3]=c->r[23]|c->r[23]; // 80282874
  c->r[12]=R32(c->r[23]+0x00000000u); // 80282878
  c->r[5]=R8(c->r[1]+0x00000008u); // 8028287C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80282880
  c->r[4]=R8(c->r[21]+0x00000001u); // 80282884
  c->ctr=c->r[12]; // 80282888
  if (true) { c->lr=0x80282890u; dispatch(c,c->ctr); } // 8028288C
  c->r[25]=c->r[25]+0x00000004u; // 80282890
  c->r[29]=c->r[29]+0x00000001u; // 80282894
L_80282898:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282898
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8028289C
  if (crb(c,0)) { IRQCHK(c); goto L_80282850; } // 802828A0
L_802828A4:;
  c->r[26]=c->r[26]+0x00000004u; // 802828A4
  c->r[24]=c->r[24]+0x00000001u; // 802828A8
L_802828AC:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 802828AC
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 802828B0
  if (crb(c,0)) { IRQCHK(c); goto L_80282750; } // 802828B4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 802828B8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 802828BC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 802828C0
  c->r[11]=c->r[1]+0x00000040u; // 802828C4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 802828C8
  c->lr=0x802828D0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802828CC
  c->r[0]=R32(c->r[1]+0x00000064u); // 802828D0
  c->lr=c->r[0]; // 802828D4
  c->r[1]=c->r[1]+0x00000060u; // 802828D8
  return; // 802828DC
}

// Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt8Material
void f_802828E0(Ctx* __restrict c) {
  trace_call(0x802828E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802828E0
  c->r[0]=c->lr; // 802828E4
  W32(c->r[1]+0x00000084u,c->r[0]); // 802828E8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 802828EC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 802828F0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 802828F4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 802828F8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 802828FC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 80282900
  c->r[11]=c->r[1]+0x00000050u; // 80282904
  c->lr=0x8028290Cu; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80282908
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 8028290C
  c->r[31]=0u+0x524C0000u; // 80282910
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80282914
  {uint32_t ea=c->r[2]+0xFFFF9EBCu; c->f[30]=c->ps1[30]=RF32(ea);} // 80282918
  c->r[0]=R32(c->r[6]+0x00000010u); // 8028291C
  c->r[20]=c->r[3]|c->r[3]; // 80282920
  c->r[21]=c->r[5]|c->r[5]; // 80282924
  c->r[30]=c->r[31]+0x00005450u; // 80282928
  c->r[0]=c->r[6]+c->r[0]; // 8028292C
  c->r[22]=0u+0x00000000u; // 80282930
  c->r[0]=R32(c->r[4]+c->r[0]); // 80282934
  c->r[28]=c->r[6]+c->r[0]; // 80282938
  c->r[25]=c->r[28]+0x00000018u; // 8028293C
  goto L_80282BA0; // 80282940
L_80282944:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80282944
  c->r[3]=R32(c->r[28]+c->r[0]); // 80282948
  c->r[27]=c->r[28]+c->r[0]; // 8028294C
  c->r[24]=c->r[27]+0x00000008u; // 80282950
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 80282954
  if (crb(c,2)) { goto L_80282A94; } // 80282958
  if (!crb(c,0)) { goto L_80282980; } // 8028295C
  c->r[0]=c->r[31]+0x00004D43u; // 80282960
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80282964
  if (crb(c,2)) { goto L_80282990; } // 80282968
  if (!crb(c,0)) { goto L_80282B98; } // 8028296C
  c->r[0]=c->r[31]+0x0000494Du; // 80282970
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80282974
  if (crb(c,2)) { goto L_80282B24; } // 80282978
  goto L_80282B98; // 8028297C
L_80282980:;
  c->r[0]=c->r[31]+0x00005453u; // 80282980
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80282984
  if (crb(c,2)) { goto L_80282A1C; } // 80282988
  goto L_80282B98; // 8028298C
L_80282990:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282990
  c->r[19]=0u+0x00000000u; // 80282994
  {uint32_t ea=c->r[20]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 80282998
  cmps(c,0,(int32_t)c->r[0],0); // 8028299C
  if (!crb(c,1)) { goto L_80282B98; } // 802829A0
  goto L_80282A0C; // 802829A4
L_802829A8:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 802829A8
  c->f[1]=c->f[31]; // 802829AC
  c->r[23]=c->r[27]+c->r[0]; // 802829B0
  c->r[0]=R32(c->r[23]+0x00000008u); // 802829B4
  c->r[4]=R16(c->r[23]+0x00000004u); // 802829B8
  c->r[3]=c->r[23]+c->r[0]; // 802829BC
  c->lr=0x802829C4u; f_80282008(c); // 802829C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 802829C4
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 802829C8
  c->r[6]=0u+0xFFFFFC00u; // 802829CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 802829D0
  cmps(c,0,(int32_t)c->r[0],-1024); // 802829D4
  if (crb(c,0)) { goto L_802829E0; } // 802829D8
  c->r[6]=c->r[0]|c->r[0]; // 802829DC
L_802829E0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 802829E0
  c->r[4]=R8(c->r[23]+0x00000001u); // 802829E4
  cmps(c,0,(int32_t)c->r[0],1023); // 802829E8
  c->r[3]=c->r[21]|c->r[21]; // 802829EC
  c->r[5]=0u+0x000003FFu; // 802829F0
  if (crb(c,1)) { goto L_802829FC; } // 802829F4
  c->r[5]=c->r[6]|c->r[6]; // 802829F8
L_802829FC:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 802829FC
  c->lr=0x80282A04u; f_80280880(c); // 80282A00
  c->r[24]=c->r[24]+0x00000004u; // 80282A04
  c->r[19]=c->r[19]+0x00000001u; // 80282A08
L_80282A0C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282A0C
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 80282A10
  if (crb(c,0)) { IRQCHK(c); goto L_802829A8; } // 80282A14
  goto L_80282B98; // 80282A18
L_80282A1C:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 80282A1C
  c->r[29]=0u+0x00000000u; // 80282A20
  goto L_80282A84; // 80282A24
L_80282A28:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 80282A28
  c->r[0]=R32(c->r[21]+0x00000038u); // 80282A2C
  c->r[23]=c->r[27]+c->r[3]; // 80282A30
  c->r[3]=R8(c->r[27]+c->r[3]); // 80282A34
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 80282A38
  cmpu(c,0,c->r[3],c->r[0]); // 80282A3C
  if (!crb(c,0)) { goto L_80282A7C; } // 80282A40
  c->r[0]=R32(c->r[23]+0x00000008u); // 80282A44
  c->f[1]=c->f[29]; // 80282A48
  c->r[4]=R16(c->r[23]+0x00000004u); // 80282A4C
  c->r[3]=c->r[23]+c->r[0]; // 80282A50
  c->lr=0x80282A58u; f_80282008(c); // 80282A54
  c->f[31]=c->f[1]; // 80282A58
  c->r[19]=R8(c->r[23]+0x00000001u); // 80282A5C
  c->r[23]=R8(c->r[23]+0x00000000u); // 80282A60
  c->r[3]=c->r[21]|c->r[21]; // 80282A64
  c->lr=0x80282A6Cu; f_802802CC(c); // 80282A68
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 80282A6C
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 80282A70
  c->r[3]=c->r[3]+c->r[4]; // 80282A74
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 80282A78
L_80282A7C:;
  c->r[24]=c->r[24]+0x00000004u; // 80282A7C
  c->r[29]=c->r[29]+0x00000001u; // 80282A80
L_80282A84:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282A84
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80282A88
  if (crb(c,0)) { IRQCHK(c); goto L_80282A28; } // 80282A8C
  goto L_80282B98; // 80282A90
L_80282A94:;
  c->r[23]=R32(c->r[20]+0x00000014u); // 80282A94
  cmps(c,0,(int32_t)c->r[23],0); // 80282A98
  if (crb(c,2)) { goto L_80282B98; } // 80282A9C
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 80282AA0
  c->r[29]=0u+0x00000000u; // 80282AA4
  goto L_80282B14; // 80282AA8
L_80282AAC:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 80282AAC
  c->r[0]=R32(c->r[21]+0x0000003Cu); // 80282AB0
  c->r[26]=c->r[27]+c->r[3]; // 80282AB4
  c->r[3]=R8(c->r[27]+c->r[3]); // 80282AB8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80282ABC
  cmpu(c,0,c->r[3],c->r[0]); // 80282AC0
  if (!crb(c,0)) { goto L_80282B0C; } // 80282AC4
  c->r[0]=R32(c->r[26]+0x00000008u); // 80282AC8
  c->f[1]=c->f[29]; // 80282ACC
  c->r[4]=R16(c->r[26]+0x00000004u); // 80282AD0
  c->r[3]=c->r[26]+c->r[0]; // 80282AD4
  c->lr=0x80282ADCu; f_80281F20(c); // 80282AD8
  c->r[19]=rotl(c->r[3],2)&0x0003FFFCu; // 80282ADC
  c->r[0]=R32(c->r[23]+c->r[19]); // 80282AE0
  cmps(c,0,(int32_t)c->r[0],0); // 80282AE4
  if (crb(c,2)) { goto L_80282B0C; } // 80282AE8
  c->r[26]=R8(c->r[26]+0x00000000u); // 80282AEC
  c->r[3]=c->r[21]|c->r[21]; // 80282AF0
  c->lr=0x80282AF8u; f_802802C4(c); // 80282AF4
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)28); // 80282AF8
  c->r[4]=R32(c->r[23]+c->r[19]); // 80282AFC
  c->r[5]=0u+0x00000000u; // 80282B00
  c->r[3]=c->r[3]+c->r[0]; // 80282B04
  c->lr=0x80282B0Cu; f_80281D9C(c); // 80282B08
L_80282B0C:;
  c->r[24]=c->r[24]+0x00000004u; // 80282B0C
  c->r[29]=c->r[29]+0x00000001u; // 80282B10
L_80282B14:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282B14
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80282B18
  if (crb(c,0)) { IRQCHK(c); goto L_80282AAC; } // 80282B1C
  goto L_80282B98; // 80282B20
L_80282B24:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 80282B24
  c->r[29]=0u+0x00000000u; // 80282B28
  goto L_80282B8C; // 80282B2C
L_80282B30:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 80282B30
  c->r[0]=R32(c->r[21]+0x00000038u); // 80282B34
  c->r[23]=c->r[27]+c->r[3]; // 80282B38
  c->r[3]=R8(c->r[27]+c->r[3]); // 80282B3C
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 80282B40
  cmpu(c,0,c->r[3],c->r[0]); // 80282B44
  if (!crb(c,0)) { goto L_80282B84; } // 80282B48
  c->r[0]=R32(c->r[23]+0x00000008u); // 80282B4C
  c->f[1]=c->f[29]; // 80282B50
  c->r[4]=R16(c->r[23]+0x00000004u); // 80282B54
  c->r[3]=c->r[23]+c->r[0]; // 80282B58
  c->lr=0x80282B60u; f_80282008(c); // 80282B5C
  c->f[31]=c->f[1]; // 80282B60
  c->r[19]=R8(c->r[23]+0x00000001u); // 80282B64
  c->r[23]=R8(c->r[23]+0x00000000u); // 80282B68
  c->r[3]=c->r[21]|c->r[21]; // 80282B6C
  c->lr=0x80282B74u; f_80280488(c); // 80282B70
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 80282B74
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 80282B78
  c->r[3]=c->r[3]+c->r[4]; // 80282B7C
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 80282B80
L_80282B84:;
  c->r[24]=c->r[24]+0x00000004u; // 80282B84
  c->r[29]=c->r[29]+0x00000001u; // 80282B88
L_80282B8C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 80282B8C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80282B90
  if (crb(c,0)) { IRQCHK(c); goto L_80282B30; } // 80282B94
L_80282B98:;
  c->r[25]=c->r[25]+0x00000004u; // 80282B98
  c->r[22]=c->r[22]+0x00000001u; // 80282B9C
L_80282BA0:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 80282BA0
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 80282BA4
  if (crb(c,0)) { IRQCHK(c); goto L_80282944; } // 80282BA8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 80282BAC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 80282BB0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 80282BB4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 80282BB8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 80282BBC
  c->r[11]=c->r[1]+0x00000050u; // 80282BC0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 80282BC4
  c->lr=0x80282BCCu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80282BC8
  c->r[0]=R32(c->r[1]+0x00000084u); // 80282BCC
  c->lr=c->r[0]; // 80282BD0
  c->r[1]=c->r[1]+0x00000080u; // 80282BD4
  return; // 80282BD8
}

// fn_80282BDC
void f_80282BDC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80282BDC
  if (!crb(c,2)) { goto L_80282BE8; } // 80282BE0
  c->r[4]=R32(c->r[3]+0x00000018u); // 80282BE4
L_80282BE8:;
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 80282BE8
  c->r[3]=R32(c->r[3]+0x00000018u); // 80282BEC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80282BF0
  c->r[3]=c->r[3]+c->r[0]; // 80282BF4
  c->r[0]=c->r[3]+0x0000000Fu; // 80282BF8
  c->r[0]=c->r[0]-c->r[4]; // 80282BFC
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 80282C00
  c->ctr=c->r[0]; // 80282C04
  cmpu(c,0,c->r[4],c->r[3]); // 80282C08
  if (!crb(c,0)) { goto L_80282C2C; } // 80282C0C
L_80282C10:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80282C10
  cmps(c,0,(int32_t)c->r[0],0); // 80282C14
  if (!crb(c,2)) { goto L_80282C24; } // 80282C18
  c->r[3]=c->r[4]|c->r[4]; // 80282C1C
  return; // 80282C20
L_80282C24:;
  c->r[4]=c->r[4]+0x00000010u; // 80282C24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80282C10; } // 80282C28
L_80282C2C:;
  c->r[3]=0u+0x00000000u; // 80282C2C
  return; // 80282C30
}

// __ct__Q34nw4r3lyt12AnimResourceFv
void f_80282C34(Ctx* __restrict c) {
  trace_call(0x80282C34u);
  c->r[0]=0u+0x00000000u; // 80282C34
  W32(c->r[3]+0x00000000u,c->r[0]); // 80282C38
  W32(c->r[3]+0x00000004u,c->r[0]); // 80282C3C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80282C40
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80282C44
  return; // 80282C48
}

// Set__Q34nw4r3lyt12AnimResourceFPCv
void f_80282C4C(Ctx* __restrict c) {
  trace_call(0x80282C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80282C4C
  c->r[0]=c->lr; // 80282C50
  W32(c->r[1]+0x00000024u,c->r[0]); // 80282C54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80282C58
  c->r[31]=c->r[3]|c->r[3]; // 80282C5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80282C60
  c->r[30]=0u+0x00000000u; // 80282C64
  W32(c->r[1]+0x00000014u,c->r[29]); // 80282C68
  c->r[29]=c->r[4]|c->r[4]; // 80282C6C
  c->r[4]=0u+0x524C0000u; // 80282C70
  W32(c->r[3]+0x00000000u,c->r[30]); // 80282C74
  c->r[4]=c->r[4]+0x0000414Eu; // 80282C78
  W32(c->r[3]+0x00000004u,c->r[30]); // 80282C7C
  W32(c->r[3]+0x00000008u,c->r[30]); // 80282C80
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 80282C84
  c->r[3]=c->r[29]|c->r[29]; // 80282C88
  c->lr=0x80282C90u; f_80283A78(c); // 80282C8C
  cmps(c,0,(int32_t)c->r[3],0); // 80282C90
  if (crb(c,2)) { goto L_80282D40; } // 80282C94
  c->r[3]=R16(c->r[29]+0x00000006u); // 80282C98
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; cr0(c,c->r[0]); // 80282C9C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80282CA0
  if (!crb(c,2)) { goto L_80282CBC; } // 80282CA4
  cmpu(c,0,c->r[0],0x00000008u); // 80282CA8
  if (crb(c,0)) { goto L_80282CBC; } // 80282CAC
  cmpu(c,0,c->r[0],0x0000000Au); // 80282CB0
  if (crb(c,1)) { goto L_80282CBC; } // 80282CB4
  c->r[30]=0u+0x00000001u; // 80282CB8
L_80282CBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80282CBC
  if (crb(c,2)) { goto L_80282D40; } // 80282CC0
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 80282CC4
  c->r[3]=0u+0x70610000u; // 80282CC8
  W32(c->r[31]+0x00000000u,c->r[29]); // 80282CCC
  c->r[6]=c->r[3]+0x00006931u; // 80282CD0
  c->r[7]=c->r[29]+c->r[0]; // 80282CD4
  c->r[4]=c->r[3]+0x00007431u; // 80282CD8
  c->r[5]=c->r[3]+0x00006831u; // 80282CDC
  c->r[8]=0u+0x00000000u; // 80282CE0
  goto L_80282D30; // 80282CE4
L_80282CE8:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 80282CE8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 80282CEC
  if (crb(c,2)) { goto L_80282D20; } // 80282CF0
  if (!crb(c,0)) { goto L_80282D04; } // 80282CF4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80282CF8
  if (crb(c,2)) { goto L_80282D18; } // 80282CFC
  goto L_80282D24; // 80282D00
L_80282D04:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80282D04
  if (crb(c,2)) { goto L_80282D10; } // 80282D08
  goto L_80282D24; // 80282D0C
L_80282D10:;
  W32(c->r[31]+0x00000008u,c->r[7]); // 80282D10
  goto L_80282D24; // 80282D14
L_80282D18:;
  W32(c->r[31]+0x0000000Cu,c->r[7]); // 80282D18
  goto L_80282D24; // 80282D1C
L_80282D20:;
  W32(c->r[31]+0x00000004u,c->r[7]); // 80282D20
L_80282D24:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 80282D24
  c->r[8]=c->r[8]+0x00000001u; // 80282D28
  c->r[7]=c->r[7]+c->r[0]; // 80282D2C
L_80282D30:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80282D30
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 80282D34
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80282D38
  if (crb(c,0)) { IRQCHK(c); goto L_80282CE8; } // 80282D3C
L_80282D40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80282D40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80282D44
  c->r[30]=R32(c->r[1]+0x00000018u); // 80282D48
  c->r[29]=R32(c->r[1]+0x00000014u); // 80282D4C
  c->lr=c->r[0]; // 80282D50
  c->r[1]=c->r[1]+0x00000020u; // 80282D54
  return; // 80282D58
}

// fn_80282D5C
void f_80282D5C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 80282D5C
  cmps(c,0,(int32_t)c->r[3],0); // 80282D60
  if (crb(c,2)) { goto L_80282D70; } // 80282D64
  c->r[3]=R16(c->r[3]+0x0000000Au); // 80282D68
  return; // 80282D6C
L_80282D70:;
  c->r[3]=0u+0x00000000u; // 80282D70
  return; // 80282D74
}

// fn_80282D78
void f_80282D78(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 80282D78
  cmps(c,0,(int32_t)c->r[3],0); // 80282D7C
  if (crb(c,2)) { goto L_80282D90; } // 80282D80
  c->r[0]=R32(c->r[3]+0x00000010u); // 80282D84
  c->r[3]=c->r[3]+c->r[0]; // 80282D88
  return; // 80282D8C
L_80282D90:;
  c->r[3]=0u+0x00000000u; // 80282D90
  return; // 80282D94
}

// IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv
void f_80282D98(Ctx* __restrict c) {
  trace_call(0x80282D98u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80282D98
  cmps(c,0,(int32_t)c->r[3],0); // 80282D9C
  if (crb(c,2)) { goto L_80282DB0; } // 80282DA0
  c->r[0]=R8(c->r[3]+0x00000018u); // 80282DA4
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 80282DA8
  return; // 80282DAC
L_80282DB0:;
  c->r[3]=0u+0x00000000u; // 80282DB0
  return; // 80282DB4
}

// fn_80282DB8
void f_80282DB8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80282DB8
  cmps(c,0,(int32_t)c->r[3],0); // 80282DBC
  if (crb(c,2)) { goto L_80282DCC; } // 80282DC0
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 80282DC4
  return; // 80282DC8
L_80282DCC:;
  c->r[3]=0u+0x00000000u; // 80282DCC
  return; // 80282DD0
}

// fn_80282DD4
void f_80282DD4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80282DD4
  cmps(c,0,(int32_t)c->r[3],0); // 80282DD8
  if (crb(c,2)) { goto L_80282DEC; } // 80282DDC
  c->r[0]=R32(c->r[3]+0x00000008u); // 80282DE0
  c->r[3]=c->r[3]+c->r[0]; // 80282DE4
  return; // 80282DE8
L_80282DEC:;
  c->r[3]=0u+0x00000000u; // 80282DEC
  return; // 80282DF0
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt4Paneb
void f_80282DF4(Ctx* __restrict c) {
  trace_call(0x80282DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80282DF4
  c->r[0]=c->lr; // 80282DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80282DFC
  c->r[11]=c->r[1]+0x00000020u; // 80282E00
  c->lr=0x80282E08u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80282E04
  c->r[6]=R32(c->r[3]+0x00000004u); // 80282E08
  c->r[26]=c->r[3]|c->r[3]; // 80282E0C
  c->r[27]=c->r[4]|c->r[4]; // 80282E10
  c->r[28]=c->r[5]|c->r[5]; // 80282E14
  c->r[0]=R32(c->r[6]+0x00000010u); // 80282E18
  c->r[31]=0u+0x00000000u; // 80282E1C
  c->r[29]=0u+0x00000000u; // 80282E20
  c->r[30]=c->r[6]+c->r[0]; // 80282E24
  goto L_80282E9C; // 80282E28
L_80282E2C:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 80282E2C
  c->r[0]=R32(c->r[30]+c->r[0]); // 80282E30
  c->r[4]=c->r[4]+c->r[0]; // 80282E34
  c->r[0]=R8(c->r[4]+0x00000015u); // 80282E38
  cmps(c,0,(int32_t)c->r[0],0); // 80282E3C
  if (!crb(c,2)) { goto L_80282E6C; } // 80282E40
  c->r[12]=R32(c->r[27]+0x00000000u); // 80282E44
  c->r[3]=c->r[27]|c->r[27]; // 80282E48
  c->r[5]=c->r[28]|c->r[28]; // 80282E4C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80282E50
  c->ctr=c->r[12]; // 80282E54
  if (true) { c->lr=0x80282E5Cu; dispatch(c,c->ctr); } // 80282E58
  cmps(c,0,(int32_t)c->r[3],0); // 80282E5C
  if (crb(c,2)) { goto L_80282E98; } // 80282E60
  c->r[31]=c->r[31]+0x00000001u; // 80282E64
  goto L_80282E98; // 80282E68
L_80282E6C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80282E6C
  c->r[3]=c->r[27]|c->r[27]; // 80282E70
  c->r[5]=c->r[28]|c->r[28]; // 80282E74
  c->r[12]=R32(c->r[12]+0x00000040u); // 80282E78
  c->ctr=c->r[12]; // 80282E7C
  if (true) { c->lr=0x80282E84u; dispatch(c,c->ctr); } // 80282E80
  cmps(c,0,(int32_t)c->r[3],0); // 80282E84
  if (crb(c,2)) { goto L_80282E98; } // 80282E88
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 80282E8C
  c->r[0]=c->r[3]+0x00000001u; // 80282E90
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 80282E94
L_80282E98:;
  c->r[29]=c->r[29]+0x00000001u; // 80282E98
L_80282E9C:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 80282E9C
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 80282EA0
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 80282EA4
  cmpu(c,0,c->r[3],c->r[0]); // 80282EA8
  if (crb(c,0)) { IRQCHK(c); goto L_80282E2C; } // 80282EAC
  c->r[11]=c->r[1]+0x00000020u; // 80282EB0
  c->r[3]=c->r[31]|c->r[31]; // 80282EB4
  c->lr=0x80282EBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80282EB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80282EBC
  c->lr=c->r[0]; // 80282EC0
  c->r[1]=c->r[1]+0x00000020u; // 80282EC4
  return; // 80282EC8
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt5Groupb
void f_80282ECC(Ctx* __restrict c) {
  trace_call(0x80282ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80282ECC
  c->r[0]=c->lr; // 80282ED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80282ED4
  c->r[11]=c->r[1]+0x00000020u; // 80282ED8
  c->lr=0x80282EE0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80282EDC
  c->r[31]=R32(c->r[4]+0x00000010u); // 80282EE0
  c->r[27]=c->r[3]|c->r[3]; // 80282EE4
  c->r[28]=c->r[5]|c->r[5]; // 80282EE8
  c->r[30]=c->r[4]+0x00000010u; // 80282EEC
  c->r[29]=0u+0x00000000u; // 80282EF0
  goto L_80282F10; // 80282EF4
L_80282EF8:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 80282EF8
  c->r[3]=c->r[27]|c->r[27]; // 80282EFC
  c->r[5]=c->r[28]|c->r[28]; // 80282F00
  c->lr=0x80282F08u; f_80282DF4(c); // 80282F04
  c->r[29]=c->r[29]+c->r[3]; // 80282F08
  c->r[31]=R32(c->r[31]+0x00000000u); // 80282F0C
L_80282F10:;
  cmpu(c,0,c->r[31],c->r[30]); // 80282F10
  if (!crb(c,2)) { IRQCHK(c); goto L_80282EF8; } // 80282F14
  c->r[11]=c->r[1]+0x00000020u; // 80282F18
  c->r[3]=c->r[29]|c->r[29]; // 80282F1C
  c->lr=0x80282F24u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80282F20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80282F24
  c->lr=c->r[0]; // 80282F28
  c->r[1]=c->r[1]+0x00000020u; // 80282F2C
  return; // 80282F30
}

// Init__Q44nw4r3lyt6detail12AnimPaneTreeFv
void f_80282F34(Ctx* __restrict c) {
  trace_call(0x80282F34u);
  c->r[0]=0u+0x00000000u; // 80282F34
  W16(c->r[3]+0x00000012u,c->r[0]); // 80282F38
  W16(c->r[3]+0x00000010u,c->r[0]); // 80282F3C
  W8(c->r[3]+0x00000026u,c->r[0]); // 80282F40
  W16(c->r[3]+0x00000014u,c->r[0]); // 80282F44
  W16(c->r[3]+0x00000016u,c->r[0]); // 80282F48
  W16(c->r[3]+0x00000018u,c->r[0]); // 80282F4C
  W16(c->r[3]+0x0000001Au,c->r[0]); // 80282F50
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 80282F54
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 80282F58
  W16(c->r[3]+0x00000020u,c->r[0]); // 80282F5C
  W16(c->r[3]+0x00000022u,c->r[0]); // 80282F60
  W16(c->r[3]+0x00000024u,c->r[0]); // 80282F64
  return; // 80282F68
}

// Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource
void f_80282F6C(Ctx* __restrict c) {
  trace_call(0x80282F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80282F6C
  c->r[0]=c->lr; // 80282F70
  W32(c->r[1]+0x00000064u,c->r[0]); // 80282F74
  c->r[11]=c->r[1]+0x00000060u; // 80282F78
  c->lr=0x80282F80u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80282F7C
  c->r[25]=R32(c->r[5]+0x00000004u); // 80282F80
  c->r[18]=c->r[3]|c->r[3]; // 80282F84
  c->r[19]=c->r[4]|c->r[4]; // 80282F88
  c->r[20]=c->r[5]|c->r[5]; // 80282F8C
  c->r[0]=R32(c->r[25]+0x00000010u); // 80282F90
  c->r[21]=c->r[4]+0x000000BCu; // 80282F94
  c->r[22]=0u+0x00000000u; // 80282F98
  c->r[28]=0u+0x00000000u; // 80282F9C
  c->r[23]=c->r[25]+c->r[0]; // 80282FA0
  goto L_80282FD8; // 80282FA4
L_80282FA8:;
  c->r[0]=rotl(c->r[28],2)&0x0003FFFCu; // 80282FA8
  c->r[0]=R32(c->r[23]+c->r[0]); // 80282FAC
  c->r[3]=c->r[25]+c->r[0]; // 80282FB0
  c->r[0]=R8(c->r[3]+0x00000015u); // 80282FB4
  cmps(c,0,(int32_t)c->r[0],0); // 80282FB8
  if (!crb(c,2)) { goto L_80282FD4; } // 80282FBC
  c->r[4]=c->r[21]|c->r[21]; // 80282FC0
  c->lr=0x80282FC8u; f_80283A4C(c); // 80282FC4
  cmps(c,0,(int32_t)c->r[3],0); // 80282FC8
  if (crb(c,2)) { goto L_80282FD4; } // 80282FCC
  goto L_80282FF0; // 80282FD0
L_80282FD4:;
  c->r[28]=c->r[28]+0x00000001u; // 80282FD4
L_80282FD8:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 80282FD8
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 80282FDC
  cmpu(c,0,c->r[3],c->r[0]); // 80282FE0
  if (crb(c,0)) { IRQCHK(c); goto L_80282FA8; } // 80282FE4
  c->r[3]=0u+0x00010000u; // 80282FE8
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 80282FEC
L_80282FF0:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 80282FF0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80282FF4
  if (crb(c,2)) { goto L_80283000; } // 80282FF8
  c->r[22]=0u+0x00000001u; // 80282FFC
L_80283000:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 80283000
  c->r[3]=c->r[19]|c->r[19]; // 80283004
  c->r[12]=R32(c->r[12]+0x00000064u); // 80283008
  c->ctr=c->r[12]; // 8028300C
  if (true) { c->lr=0x80283014u; dispatch(c,c->ctr); } // 80283010
  c->r[29]=c->r[3]|c->r[3]; // 80283014
  c->r[23]=c->r[1]+0x00000008u; // 80283018
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 8028301C
  c->r[21]=0u+0x00000000u; // 80283020
  c->r[30]=0u+0x00010000u; // 80283024
  goto L_802830BC; // 80283028
L_8028302C:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 8028302C
  c->r[3]=c->r[19]|c->r[19]; // 80283030
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 80283034
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80283038
  c->ctr=c->r[12]; // 8028303C
  if (true) { c->lr=0x80283044u; dispatch(c,c->ctr); } // 80283040
  c->r[0]=R32(c->r[25]+0x00000010u); // 80283044
  c->r[24]=c->r[3]+0x00000044u; // 80283048
  c->r[27]=0u+0x00000000u; // 8028304C
  c->r[26]=c->r[25]+c->r[0]; // 80283050
  goto L_80283088; // 80283054
L_80283058:;
  c->r[0]=rotl(c->r[27],2)&0x0003FFFCu; // 80283058
  c->r[0]=R32(c->r[26]+c->r[0]); // 8028305C
  c->r[3]=c->r[25]+c->r[0]; // 80283060
  c->r[0]=R8(c->r[3]+0x00000015u); // 80283064
  cmpu(c,0,c->r[0],0x00000001u); // 80283068
  if (!crb(c,2)) { goto L_80283084; } // 8028306C
  c->r[4]=c->r[24]|c->r[24]; // 80283070
  c->lr=0x80283078u; f_80283A4C(c); // 80283074
  cmps(c,0,(int32_t)c->r[3],0); // 80283078
  if (crb(c,2)) { goto L_80283084; } // 8028307C
  goto L_8028309C; // 80283080
L_80283084:;
  c->r[27]=c->r[27]+0x00000001u; // 80283084
L_80283088:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 80283088
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 8028308C
  cmpu(c,0,c->r[3],c->r[0]); // 80283090
  if (crb(c,0)) { IRQCHK(c); goto L_80283058; } // 80283094
  c->r[27]=c->r[30]+0xFFFFFFFFu; // 80283098
L_8028309C:;
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 8028309C
  c->r[3]=rotl(c->r[21],1)&0x000001FEu; // 802830A0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802830A4
  W16(c->r[23]+c->r[3],c->r[27]); // 802830A8
  if (crb(c,2)) { goto L_802830B8; } // 802830AC
  c->r[0]=c->r[22]+0x00000001u; // 802830B0
  c->r[22]=rotl(c->r[0],0)&0x0000FFFFu; // 802830B4
L_802830B8:;
  c->r[21]=c->r[21]+0x00000001u; // 802830B8
L_802830BC:;
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 802830BC
  cmpu(c,0,c->r[0],c->r[31]); // 802830C0
  if (crb(c,0)) { IRQCHK(c); goto L_8028302C; } // 802830C4
  cmps(c,0,(int32_t)c->r[22],0); // 802830C8
  if (crb(c,2)) { goto L_802831B4; } // 802830CC
  c->r[6]=R32(c->r[20]+0x00000000u); // 802830D0
  cmps(c,0,(int32_t)c->r[31],0); // 802830D4
  c->r[5]=R32(c->r[20]+0x00000004u); // 802830D8
  c->r[3]=0u+0x00000000u; // 802830DC
  c->r[4]=R32(c->r[20]+0x00000008u); // 802830E0
  c->r[0]=R32(c->r[20]+0x0000000Cu); // 802830E4
  W32(c->r[18]+0x00000000u,c->r[6]); // 802830E8
  W32(c->r[18]+0x00000004u,c->r[5]); // 802830EC
  W32(c->r[18]+0x00000008u,c->r[4]); // 802830F0
  W32(c->r[18]+0x0000000Cu,c->r[0]); // 802830F4
  W16(c->r[18]+0x00000010u,c->r[28]); // 802830F8
  W8(c->r[18]+0x00000026u,c->r[29]); // 802830FC
  if (crb(c,2)) { goto L_802831B0; } // 80283100
  cmpu(c,0,c->r[31],0x00000008u); // 80283104
  c->r[0]=c->r[29]+0x000000F8u; // 80283108
  if (!crb(c,1)) { goto L_8028317C; } // 8028310C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80283110
  c->r[0]=c->r[4]+0x00000007u; // 80283114
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80283118
  c->ctr=c->r[0]; // 8028311C
  cmpu(c,0,c->r[4],0x00000000u); // 80283120
  if (!crb(c,1)) { goto L_8028317C; } // 80283124
L_80283128:;
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 80283128
  c->r[5]=c->r[1]+0x00000008u; // 8028312C
  {uint32_t ea=c->r[5]+c->r[0]; c->r[4]=R16(ea); c->r[5]=ea;} // 80283130
  c->r[6]=c->r[18]+c->r[0]; // 80283134
  c->r[3]=c->r[3]+0x00000008u; // 80283138
  W16(c->r[6]+0x00000014u,c->r[4]); // 8028313C
  c->r[0]=R16(c->r[5]+0x00000002u); // 80283140
  c->r[4]=R16(c->r[5]+0x00000004u); // 80283144
  W16(c->r[6]+0x00000016u,c->r[0]); // 80283148
  c->r[0]=R16(c->r[5]+0x00000006u); // 8028314C
  W16(c->r[6]+0x00000018u,c->r[4]); // 80283150
  c->r[4]=R16(c->r[5]+0x00000008u); // 80283154
  W16(c->r[6]+0x0000001Au,c->r[0]); // 80283158
  c->r[0]=R16(c->r[5]+0x0000000Au); // 8028315C
  W16(c->r[6]+0x0000001Cu,c->r[4]); // 80283160
  c->r[4]=R16(c->r[5]+0x0000000Cu); // 80283164
  W16(c->r[6]+0x0000001Eu,c->r[0]); // 80283168
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 8028316C
  W16(c->r[6]+0x00000020u,c->r[4]); // 80283170
  W16(c->r[6]+0x00000022u,c->r[0]); // 80283174
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80283128; } // 80283178
L_8028317C:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8028317C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 80283180
  c->r[0]=c->r[4]-c->r[5]; // 80283184
  c->r[6]=c->r[1]+0x00000008u; // 80283188
  c->ctr=c->r[0]; // 8028318C
  cmpu(c,0,c->r[5],c->r[4]); // 80283190
  if (!crb(c,0)) { goto L_802831B0; } // 80283194
L_80283198:;
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 80283198
  c->r[3]=c->r[3]+0x00000001u; // 8028319C
  c->r[0]=R16(c->r[6]+c->r[4]); // 802831A0
  c->r[4]=c->r[18]+c->r[4]; // 802831A4
  W16(c->r[4]+0x00000014u,c->r[0]); // 802831A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80283198; } // 802831AC
L_802831B0:;
  W16(c->r[18]+0x00000012u,c->r[22]); // 802831B0
L_802831B4:;
  c->r[11]=c->r[1]+0x00000060u; // 802831B4
  c->lr=0x802831BCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802831B8
  c->r[0]=R32(c->r[1]+0x00000064u); // 802831BC
  c->lr=c->r[0]; // 802831C0
  c->r[1]=c->r[1]+0x00000060u; // 802831C4
  return; // 802831C8
}

// fn_802831CC
void f_802831CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802831CC
  c->r[0]=c->lr; // 802831D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802831D4
  c->r[11]=c->r[1]+0x00000030u; // 802831D8
  c->lr=0x802831E0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802831DC
  c->r[12]=R32(c->r[4]+0x00000000u); // 802831E0
  c->r[27]=c->r[3]|c->r[3]; // 802831E4
  c->r[3]=c->r[4]|c->r[4]; // 802831E8
  c->r[28]=c->r[5]|c->r[5]; // 802831EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802831F0
  c->r[24]=c->r[6]|c->r[6]; // 802831F4
  c->ctr=c->r[12]; // 802831F8
  if (true) { c->lr=0x80283200u; dispatch(c,c->ctr); } // 802831FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80283200
  c->r[31]=c->r[3]|c->r[3]; // 80283204
  c->r[5]=c->r[24]|c->r[24]; // 80283208
  c->r[4]=R32(c->r[27]+0x00000004u); // 8028320C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80283210
  c->r[6]=R16(c->r[27]+0x00000012u); // 80283214
  c->ctr=c->r[12]; // 80283218
  if (true) { c->lr=0x80283220u; dispatch(c,c->ctr); } // 8028321C
  c->r[5]=R16(c->r[27]+0x00000010u); // 80283220
  c->r[30]=0u+0x00000000u; // 80283224
  cmpu(c,0,c->r[5],0x0000FFFFu); // 80283228
  if (crb(c,2)) { goto L_802832A4; } // 8028322C
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 80283230
  c->r[25]=R32(c->r[31]+0x00000018u); // 80283234
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80283238
  c->r[3]=c->r[25]+c->r[0]; // 8028323C
  c->r[0]=c->r[3]+0x0000000Fu; // 80283240
  c->r[0]=c->r[0]-c->r[25]; // 80283244
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 80283248
  c->ctr=c->r[0]; // 8028324C
  cmpu(c,0,c->r[25],c->r[3]); // 80283250
  if (!crb(c,0)) { goto L_80283270; } // 80283254
L_80283258:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 80283258
  cmps(c,0,(int32_t)c->r[0],0); // 8028325C
  if (!crb(c,2)) { goto L_80283268; } // 80283260
  goto L_80283274; // 80283264
L_80283268:;
  c->r[25]=c->r[25]+0x00000010u; // 80283268
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80283258; } // 8028326C
L_80283270:;
  c->r[25]=0u+0x00000000u; // 80283270
L_80283274:;
  cmps(c,0,(int32_t)c->r[25],0); // 80283274
  if (!crb(c,2)) { goto L_80283284; } // 80283278
  c->r[30]=0u+0x00000000u; // 8028327C
  goto L_802832A4; // 80283280
L_80283284:;
  W32(c->r[25]+0x00000008u,c->r[31]); // 80283284
  c->r[0]=0u+0x00000001u; // 80283288
  c->r[3]=c->r[28]|c->r[28]; // 8028328C
  c->r[4]=c->r[25]|c->r[25]; // 80283290
  W16(c->r[25]+0x0000000Cu,c->r[5]); // 80283294
  W8(c->r[25]+0x0000000Eu,c->r[0]); // 80283298
  c->lr=0x802832A0u; f_80278CBC(c); // 8028329C
  c->r[30]=c->r[25]+0x00000010u; // 802832A0
L_802832A4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802832A4
  c->r[3]=c->r[28]|c->r[28]; // 802832A8
  c->r[12]=R32(c->r[12]+0x00000064u); // 802832AC
  c->ctr=c->r[12]; // 802832B0
  if (true) { c->lr=0x802832B8u; dispatch(c,c->ctr); } // 802832B4
  c->r[4]=R8(c->r[27]+0x00000026u); // 802832B8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802832BC
  cmpu(c,0,c->r[4],c->r[0]); // 802832C0
  if (!crb(c,1)) { goto L_802832CC; } // 802832C4
  c->r[4]=c->r[3]|c->r[3]; // 802832C8
L_802832CC:;
  c->r[26]=rotl(c->r[4],0)&0x000000FFu; // 802832CC
  c->r[29]=0u+0x00000000u; // 802832D0
  c->r[25]=0u+0x00000001u; // 802832D4
  goto L_80283388; // 802832D8
L_802832DC:;
  c->r[0]=rotl(c->r[29],1)&0x000001FEu; // 802832DC
  c->r[24]=c->r[27]+c->r[0]; // 802832E0
  c->r[0]=R16(c->r[24]+0x00000014u); // 802832E4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802832E8
  if (crb(c,2)) { goto L_80283384; } // 802832EC
  c->r[12]=R32(c->r[28]+0x00000000u); // 802832F0
  c->r[3]=c->r[28]|c->r[28]; // 802832F4
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 802832F8
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 802832FC
  c->ctr=c->r[12]; // 80283300
  if (true) { c->lr=0x80283308u; dispatch(c,c->ctr); } // 80283304
  cmps(c,0,(int32_t)c->r[30],0); // 80283308
  c->r[5]=R16(c->r[24]+0x00000014u); // 8028330C
  if (!crb(c,2)) { goto L_80283318; } // 80283310
  c->r[30]=R32(c->r[31]+0x00000018u); // 80283314
L_80283318:;
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 80283318
  c->r[4]=R32(c->r[31]+0x00000018u); // 8028331C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80283320
  c->r[4]=c->r[4]+c->r[0]; // 80283324
  c->r[0]=c->r[4]+0x0000000Fu; // 80283328
  c->r[0]=c->r[0]-c->r[30]; // 8028332C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 80283330
  c->ctr=c->r[0]; // 80283334
  cmpu(c,0,c->r[30],c->r[4]); // 80283338
  if (!crb(c,0)) { goto L_80283358; } // 8028333C
L_80283340:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 80283340
  cmps(c,0,(int32_t)c->r[0],0); // 80283344
  if (!crb(c,2)) { goto L_80283350; } // 80283348
  goto L_8028335C; // 8028334C
L_80283350:;
  c->r[30]=c->r[30]+0x00000010u; // 80283350
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80283340; } // 80283354
L_80283358:;
  c->r[30]=0u+0x00000000u; // 80283358
L_8028335C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028335C
  if (!crb(c,2)) { goto L_8028336C; } // 80283360
  c->r[30]=0u+0x00000000u; // 80283364
  goto L_80283384; // 80283368
L_8028336C:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 8028336C
  c->r[4]=c->r[30]|c->r[30]; // 80283370
  W16(c->r[30]+0x0000000Cu,c->r[5]); // 80283374
  W8(c->r[30]+0x0000000Eu,c->r[25]); // 80283378
  c->lr=0x80283380u; f_802819B4(c); // 8028337C
  c->r[30]=c->r[30]+0x00000010u; // 80283380
L_80283384:;
  c->r[29]=c->r[29]+0x00000001u; // 80283384
L_80283388:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80283388
  cmpu(c,0,c->r[0],c->r[26]); // 8028338C
  if (crb(c,0)) { IRQCHK(c); goto L_802832DC; } // 80283390
  c->r[11]=c->r[1]+0x00000030u; // 80283394
  c->r[3]=c->r[31]|c->r[31]; // 80283398
  c->lr=0x802833A0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028339C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802833A0
  c->lr=c->r[0]; // 802833A4
  c->r[1]=c->r[1]+0x00000030u; // 802833A8
  return; // 802833AC
}

// fn_802833B0
void f_802833B0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000004u); // 802833B0
  c->r[0]=c->r[3]+0x00000004u; // 802833B4
  goto L_802833D4; // 802833B8
L_802833BC:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 802833BC
  cmpu(c,0,c->r[4],c->r[3]); // 802833C0
  if (!crb(c,2)) { goto L_802833D0; } // 802833C4
  c->r[3]=c->r[5]|c->r[5]; // 802833C8
  return; // 802833CC
L_802833D0:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 802833D0
L_802833D4:;
  cmpu(c,0,c->r[5],c->r[0]); // 802833D4
  if (!crb(c,2)) { IRQCHK(c); goto L_802833BC; } // 802833D8
  c->r[3]=0u+0x00000000u; // 802833DC
  return; // 802833E0
}

// FindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>RCQ34nw4r3lyt12AnimResource
void f_802833E4(Ctx* __restrict c) {
  trace_call(0x802833E4u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 802833E4
  c->r[0]=c->r[3]+0x00000004u; // 802833E8
  goto L_80283410; // 802833EC
L_802833F0:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 802833F0
  c->r[6]=R32(c->r[4]+0x00000004u); // 802833F4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802833F8
  cmpu(c,0,c->r[6],c->r[3]); // 802833FC
  if (!crb(c,2)) { goto L_8028340C; } // 80283400
  c->r[3]=c->r[5]|c->r[5]; // 80283404
  return; // 80283408
L_8028340C:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8028340C
L_80283410:;
  cmpu(c,0,c->r[5],c->r[0]); // 80283410
  if (!crb(c,2)) { IRQCHK(c); goto L_802833F0; } // 80283414
  c->r[3]=0u+0x00000000u; // 80283418
  return; // 8028341C
}

// UnbindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>PQ34nw4r3lyt13AnimTransform
void f_80283420(Ctx* __restrict c) {
  trace_call(0x80283420u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283420
  c->r[0]=c->lr; // 80283424
  W32(c->r[1]+0x00000034u,c->r[0]); // 80283428
  c->r[11]=c->r[1]+0x00000030u; // 8028342C
  c->lr=0x80283434u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80283430
  c->r[31]=R32(c->r[3]+0x00000004u); // 80283434
  c->r[26]=c->r[3]|c->r[3]; // 80283438
  c->r[27]=c->r[4]|c->r[4]; // 8028343C
  c->r[30]=c->r[3]+0x00000004u; // 80283440
  c->r[29]=0u+0x00000000u; // 80283444
  goto L_80283484; // 80283448
L_8028344C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8028344C
  c->r[28]=c->r[31]|c->r[31]; // 80283450
  c->r[31]=R32(c->r[31]+0x00000000u); // 80283454
  if (crb(c,2)) { goto L_80283468; } // 80283458
  c->r[0]=R32(c->r[28]+0x00000008u); // 8028345C
  cmpu(c,0,c->r[0],c->r[27]); // 80283460
  if (!crb(c,2)) { goto L_80283484; } // 80283464
L_80283468:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 80283468
  c->r[3]=c->r[26]|c->r[26]; // 8028346C
  c->r[4]=c->r[1]+0x00000008u; // 80283470
  c->lr=0x80283478u; f_802A7BFC(c); // 80283474
  W32(c->r[28]+0x00000008u,c->r[29]); // 80283478
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 8028347C
  W8(c->r[28]+0x0000000Eu,c->r[29]); // 80283480
L_80283484:;
  cmpu(c,0,c->r[31],c->r[30]); // 80283484
  if (!crb(c,2)) { IRQCHK(c); goto L_8028344C; } // 80283488
  c->r[11]=c->r[1]+0x00000030u; // 8028348C
  c->lr=0x80283494u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80283490
  c->r[0]=R32(c->r[1]+0x00000034u); // 80283494
  c->lr=c->r[0]; // 80283498
  c->r[1]=c->r[1]+0x00000030u; // 8028349C
  return; // 802834A0
}

// fn_802834A4
void f_802834A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802834A4
  c->r[0]=c->lr; // 802834A8
  cmps(c,0,(int32_t)c->r[3],0); // 802834AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802834B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802834B4
  c->r[31]=c->r[3]|c->r[3]; // 802834B8
  if (crb(c,2)) { goto L_802834CC; } // 802834BC
  cmps(c,0,(int32_t)c->r[4],0); // 802834C0
  if (!crb(c,1)) { goto L_802834CC; } // 802834C4
  c->lr=0x802834CCu; f_800D6AD0(c); // 802834C8
L_802834CC:;
  c->r[3]=c->r[31]|c->r[31]; // 802834CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802834D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802834D4
  c->lr=c->r[0]; // 802834D8
  c->r[1]=c->r[1]+0x00000010u; // 802834DC
  return; // 802834E0
}

// fn_802834E4
void f_802834E4(Ctx* __restrict c) {
  c->r[4]=0u+0x80340000u; // 802834E4
  c->r[4]=c->r[4]+0x00005418u; // 802834E8
  W32(c->r[3]+0x00000000u,c->r[4]); // 802834EC
  return; // 802834F0
}

// fn_802834F4
void f_802834F4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802834F4
  return; // 802834F8
}

// FindNameResource__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCc
void f_802834FC(Ctx* __restrict c) {
  trace_call(0x802834FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802834FC
  c->r[0]=c->lr; // 80283500
  W32(c->r[1]+0x00000044u,c->r[0]); // 80283504
  c->r[5]=c->r[1]+0x00000018u; // 80283508
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8028350C
  c->r[31]=0u+0xFFFFFFFFu; // 80283510
  W32(c->r[1]+0x00000038u,c->r[30]); // 80283514
  c->r[30]=c->r[4]|c->r[4]; // 80283518
  c->r[4]=c->r[13]+0xFFFF97A0u; // 8028351C
  W32(c->r[1]+0x00000034u,c->r[29]); // 80283520
  c->r[29]=c->r[3]|c->r[3]; // 80283524
  c->lr=0x8028352Cu; f_801F0788(c); // 80283528
  goto L_8028358C; // 8028352C
L_80283530:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80283530
  cmps(c,0,(int32_t)c->r[0],0); // 80283534
  if (crb(c,2)) { goto L_80283570; } // 80283538
  c->r[4]=R32(c->r[1]+0x00000014u); // 8028353C
  c->r[3]=c->r[29]|c->r[29]; // 80283540
  c->lr=0x80283548u; f_801F0730(c); // 80283544
  c->r[3]=c->r[29]|c->r[29]; // 80283548
  c->r[4]=c->r[30]|c->r[30]; // 8028354C
  c->lr=0x80283554u; f_802834FC(c); // 80283550
  c->r[31]=c->r[3]|c->r[3]; // 80283554
  c->r[3]=c->r[29]|c->r[29]; // 80283558
  c->r[4]=c->r[13]+0xFFFF97A4u; // 8028355C
  c->lr=0x80283564u; f_801F0730(c); // 80283560
  cmps(c,0,(int32_t)c->r[31],-1); // 80283564
  if (!crb(c,2)) { goto L_802835A0; } // 80283568
  goto L_8028358C; // 8028356C
L_80283570:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 80283570
  c->r[3]=c->r[30]|c->r[30]; // 80283574
  c->lr=0x8028357Cu; f_8012CAD0(c); // 80283578
  cmps(c,0,(int32_t)c->r[3],0); // 8028357C
  if (!crb(c,2)) { goto L_8028358C; } // 80283580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80283584
  goto L_802835A0; // 80283588
L_8028358C:;
  c->r[3]=c->r[1]+0x00000018u; // 8028358C
  c->r[4]=c->r[1]+0x00000008u; // 80283590
  c->lr=0x80283598u; f_801F0804(c); // 80283594
  cmps(c,0,(int32_t)c->r[3],0); // 80283598
  if (!crb(c,2)) { IRQCHK(c); goto L_80283530; } // 8028359C
L_802835A0:;
  c->r[3]=c->r[1]+0x00000018u; // 802835A0
  c->lr=0x802835A8u; f_801F08BC(c); // 802835A4
  c->r[3]=c->r[31]|c->r[31]; // 802835A8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802835AC
  c->r[30]=R32(c->r[1]+0x00000038u); // 802835B0
  c->r[29]=R32(c->r[1]+0x00000034u); // 802835B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802835B8
  c->lr=c->r[0]; // 802835BC
  c->r[1]=c->r[1]+0x00000040u; // 802835C0
  return; // 802835C4
}

// GetResourceSub__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCcUlPCcPUl
void f_802835C8(Ctx* __restrict c) {
  trace_call(0x802835C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802835C8
  c->r[0]=c->lr; // 802835CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802835D0
  c->r[11]=c->r[1]+0x00000040u; // 802835D4
  c->lr=0x802835DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802835D8
  c->r[26]=c->r[3]|c->r[3]; // 802835DC
  c->r[27]=c->r[4]|c->r[4]; // 802835E0
  c->r[28]=c->r[5]|c->r[5]; // 802835E4
  c->r[29]=c->r[6]|c->r[6]; // 802835E8
  c->r[30]=c->r[7]|c->r[7]; // 802835EC
  c->r[31]=0u+0xFFFFFFFFu; // 802835F0
  c->lr=0x802835F8u; f_801F00AC(c); // 802835F4
  cmps(c,0,(int32_t)c->r[3],-1); // 802835F8
  if (crb(c,2)) { goto L_802836A4; } // 802835FC
  c->r[3]=c->r[26]|c->r[26]; // 80283600
  c->r[4]=c->r[27]|c->r[27]; // 80283604
  c->lr=0x8028360Cu; f_801F0730(c); // 80283608
  cmps(c,0,(int32_t)c->r[3],0); // 8028360C
  if (crb(c,2)) { goto L_802836A4; } // 80283610
  cmps(c,0,(int32_t)c->r[28],0); // 80283614
  if (!crb(c,2)) { goto L_80283630; } // 80283618
  c->r[3]=c->r[26]|c->r[26]; // 8028361C
  c->r[4]=c->r[29]|c->r[29]; // 80283620
  c->lr=0x80283628u; f_802834FC(c); // 80283624
  c->r[31]=c->r[3]|c->r[3]; // 80283628
  goto L_80283698; // 8028362C
L_80283630:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 80283630
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 80283634
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 80283638
  c->r[0]=0u+0x00000000u; // 8028363C
  W8(c->r[1]+0x00000008u,c->r[3]); // 80283640
  c->r[3]=c->r[26]|c->r[26]; // 80283644
  c->r[4]=c->r[1]+0x00000008u; // 80283648
  W8(c->r[1]+0x00000009u,c->r[6]); // 8028364C
  W8(c->r[1]+0x0000000Au,c->r[5]); // 80283650
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 80283654
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80283658
  c->lr=0x80283660u; f_801F00AC(c); // 8028365C
  cmps(c,0,(int32_t)c->r[3],-1); // 80283660
  if (crb(c,2)) { goto L_80283698; } // 80283664
  c->r[3]=c->r[26]|c->r[26]; // 80283668
  c->r[4]=c->r[1]+0x00000008u; // 8028366C
  c->lr=0x80283674u; f_801F0730(c); // 80283670
  cmps(c,0,(int32_t)c->r[3],0); // 80283674
  if (crb(c,2)) { goto L_80283698; } // 80283678
  c->r[3]=c->r[26]|c->r[26]; // 8028367C
  c->r[4]=c->r[29]|c->r[29]; // 80283680
  c->lr=0x80283688u; f_801F00AC(c); // 80283684
  c->r[31]=c->r[3]|c->r[3]; // 80283688
  c->r[3]=c->r[26]|c->r[26]; // 8028368C
  c->r[4]=c->r[13]+0xFFFF97A4u; // 80283690
  c->lr=0x80283698u; f_801F0730(c); // 80283694
L_80283698:;
  c->r[3]=c->r[26]|c->r[26]; // 80283698
  c->r[4]=c->r[13]+0xFFFF97A4u; // 8028369C
  c->lr=0x802836A4u; f_801F0730(c); // 802836A0
L_802836A4:;
  cmps(c,0,(int32_t)c->r[31],-1); // 802836A4
  if (crb(c,2)) { goto L_802836EC; } // 802836A8
  c->r[3]=c->r[26]|c->r[26]; // 802836AC
  c->r[4]=c->r[31]|c->r[31]; // 802836B0
  c->r[5]=c->r[1]+0x00000010u; // 802836B4
  c->lr=0x802836BCu; f_801F005C(c); // 802836B8
  c->r[3]=c->r[1]+0x00000010u; // 802836BC
  c->lr=0x802836C4u; f_801F070C(c); // 802836C0
  cmps(c,0,(int32_t)c->r[30],0); // 802836C4
  c->r[31]=c->r[3]|c->r[3]; // 802836C8
  if (crb(c,2)) { goto L_802836DC; } // 802836CC
  c->r[3]=c->r[1]+0x00000010u; // 802836D0
  c->lr=0x802836D8u; f_801F0720(c); // 802836D4
  W32(c->r[30]+0x00000000u,c->r[3]); // 802836D8
L_802836DC:;
  c->r[3]=c->r[1]+0x00000010u; // 802836DC
  c->lr=0x802836E4u; f_801F0728(c); // 802836E0
  c->r[3]=c->r[31]|c->r[31]; // 802836E4
  goto L_802836F0; // 802836E8
L_802836EC:;
  c->r[3]=0u+0x00000000u; // 802836EC
L_802836F0:;
  c->r[11]=c->r[1]+0x00000040u; // 802836F0
  c->lr=0x802836F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802836F4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802836F8
  c->lr=c->r[0]; // 802836FC
  c->r[1]=c->r[1]+0x00000040u; // 80283700
  return; // 80283704
}

// fn_80283708
void f_80283708(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80283708
  W32(c->r[3]+0x00000000u,c->r[0]); // 8028370C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80283710
  W32(c->r[3]+0x00000088u,c->r[0]); // 80283714
  return; // 80283718
}

// fn_8028371C
void f_8028371C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028371C
  c->r[0]=c->lr; // 80283720
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80283728
  c->r[31]=c->r[5]|c->r[5]; // 8028372C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80283730
  c->r[30]=c->r[3]|c->r[3]; // 80283734
  c->r[3]=c->r[3]+0x00000008u; // 80283738
  c->lr=0x80283740u; f_8018FFE4(c); // 8028373C
  W32(c->r[30]+0x00000088u,c->r[31]); // 80283740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80283744
  c->r[30]=R32(c->r[1]+0x00000008u); // 80283748
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028374C
  c->lr=c->r[0]; // 80283750
  c->r[1]=c->r[1]+0x00000010u; // 80283754
  return; // 80283758
}

// fn_8028375C
void f_8028375C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028375C
  c->r[0]=c->lr; // 80283760
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80283768
  c->r[31]=c->r[5]|c->r[5]; // 8028376C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80283770
  c->r[30]=c->r[3]|c->r[3]; // 80283774
  c->r[3]=c->r[4]|c->r[4]; // 80283778
  c->r[4]=c->r[30]+0x00000008u; // 8028377C
  c->lr=0x80283784u; f_801EFD18(c); // 80283780
  cmps(c,0,(int32_t)c->r[3],0); // 80283784
  if (!crb(c,2)) { goto L_80283794; } // 80283788
  c->r[3]=0u+0x00000000u; // 8028378C
  goto L_802837B0; // 80283790
L_80283794:;
  c->r[4]=c->r[31]|c->r[31]; // 80283794
  c->r[3]=c->r[30]+0x00000024u; // 80283798
  c->r[5]=0u+0x0000007Fu; // 8028379C
  c->lr=0x802837A4u; f_801900A4(c); // 802837A0
  c->r[0]=0u+0x00000000u; // 802837A4
  c->r[3]=0u+0x00000001u; // 802837A8
  W8(c->r[30]+0x000000A3u,c->r[0]); // 802837AC
L_802837B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802837B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802837B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802837B8
  c->lr=c->r[0]; // 802837BC
  c->r[1]=c->r[1]+0x00000010u; // 802837C0
  return; // 802837C4
}

// fn_802837C8
void f_802837C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802837C8
  c->r[0]=c->lr; // 802837CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802837D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802837D4
  c->r[31]=c->r[3]|c->r[3]; // 802837D8
  c->lr=0x802837E0u; f_802834E4(c); // 802837DC
  c->r[0]=0u+0x00000000u; // 802837E0
  c->r[4]=0u+0x80340000u; // 802837E4
  W32(c->r[31]+0x00000008u,c->r[0]); // 802837E8
  c->r[5]=c->r[31]+0x00000008u; // 802837EC
  c->r[4]=c->r[4]+0x00005430u; // 802837F0
  c->r[6]=c->r[31]+0x00000014u; // 802837F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802837F8
  c->r[3]=c->r[31]|c->r[31]; // 802837FC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80283800
  W32(c->r[31]+0x00000018u,c->r[0]); // 80283804
  W32(c->r[31]+0x00000000u,c->r[4]); // 80283808
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028380C
  W32(c->r[31]+0x00000008u,c->r[5]); // 80283810
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 80283814
  W32(c->r[31]+0x00000010u,c->r[0]); // 80283818
  W32(c->r[31]+0x00000014u,c->r[6]); // 8028381C
  W32(c->r[31]+0x00000018u,c->r[6]); // 80283820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80283824
  c->r[0]=R32(c->r[1]+0x00000014u); // 80283828
  c->lr=c->r[0]; // 8028382C
  c->r[1]=c->r[1]+0x00000010u; // 80283830
  return; // 80283834
}

// fn_80283838
void f_80283838(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283838
  c->r[0]=c->lr; // 8028383C
  cmps(c,0,(int32_t)c->r[3],0); // 80283840
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80283848
  c->r[31]=c->r[4]|c->r[4]; // 8028384C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80283850
  c->r[30]=c->r[3]|c->r[3]; // 80283854
  if (crb(c,2)) { goto L_802838AC; } // 80283858
  c->r[4]=0u+0x80340000u; // 8028385C
  c->r[4]=c->r[4]+0x00005430u; // 80283860
  W32(c->r[3]+0x00000000u,c->r[4]); // 80283864
  c->r[3]=c->r[3]+0x00000004u; // 80283868
  c->lr=0x80283870u; f_802A7C44(c); // 8028386C
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 80283870
  if (crb(c,2)) { goto L_80283880; } // 80283874
  c->r[4]=0u+0x00000000u; // 80283878
  c->lr=0x80283880u; f_802A7B78(c); // 8028387C
L_80283880:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 80283880
  if (crb(c,2)) { goto L_80283890; } // 80283884
  c->r[4]=0u+0x00000000u; // 80283888
  c->lr=0x80283890u; f_802A7B78(c); // 8028388C
L_80283890:;
  c->r[3]=c->r[30]|c->r[30]; // 80283890
  c->r[4]=0u+0x00000000u; // 80283894
  c->lr=0x8028389Cu; f_802834A4(c); // 80283898
  cmps(c,0,(int32_t)c->r[31],0); // 8028389C
  if (!crb(c,1)) { goto L_802838AC; } // 802838A0
  c->r[3]=c->r[30]|c->r[30]; // 802838A4
  c->lr=0x802838ACu; f_800D6AD0(c); // 802838A8
L_802838AC:;
  c->r[3]=c->r[30]|c->r[30]; // 802838AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802838B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802838B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802838B8
  c->lr=c->r[0]; // 802838BC
  c->r[1]=c->r[1]+0x00000010u; // 802838C0
  return; // 802838C4
}

// fn_802838C8
void f_802838C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802838C8
  c->r[0]=c->lr; // 802838CC
  c->r[5]=c->r[4]|c->r[4]; // 802838D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802838D4
  c->r[0]=c->r[3]+0x00000008u; // 802838D8
  c->r[3]=c->r[3]+0x00000004u; // 802838DC
  c->r[4]=c->r[1]+0x00000008u; // 802838E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802838E4
  c->lr=0x802838ECu; f_802A7C88(c); // 802838E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802838EC
  c->lr=c->r[0]; // 802838F0
  c->r[1]=c->r[1]+0x00000010u; // 802838F4
  return; // 802838F8
}

// fn_802838FC
void f_802838FC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 802838FC
  f_802A7CB4(c); return; // 80283900
}

// fn_80283904
void f_80283904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283904
  c->r[0]=c->lr; // 80283908
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028390C
  c->r[11]=c->r[1]+0x00000020u; // 80283910
  c->lr=0x80283918u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80283914
  c->r[31]=R32(c->r[3]+0x00000008u); // 80283918
  c->r[27]=c->r[4]|c->r[4]; // 8028391C
  c->r[28]=c->r[5]|c->r[5]; // 80283920
  c->r[29]=c->r[6]|c->r[6]; // 80283924
  c->r[30]=c->r[3]+0x00000008u; // 80283928
  goto L_80283958; // 8028392C
L_80283930:;
  c->r[5]=c->r[27]|c->r[27]; // 80283930
  c->r[6]=c->r[28]|c->r[28]; // 80283934
  c->r[7]=c->r[29]|c->r[29]; // 80283938
  c->r[3]=c->r[31]+0x00000008u; // 8028393C
  c->r[4]=c->r[31]+0x00000024u; // 80283940
  c->lr=0x80283948u; f_802835C8(c); // 80283944
  cmps(c,0,(int32_t)c->r[3],0); // 80283948
  if (crb(c,2)) { goto L_80283954; } // 8028394C
  goto L_80283964; // 80283950
L_80283954:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80283954
L_80283958:;
  cmpu(c,0,c->r[31],c->r[30]); // 80283958
  if (!crb(c,2)) { IRQCHK(c); goto L_80283930; } // 8028395C
  c->r[3]=0u+0x00000000u; // 80283960
L_80283964:;
  c->r[11]=c->r[1]+0x00000020u; // 80283964
  c->lr=0x8028396Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80283968
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028396C
  c->lr=c->r[0]; // 80283970
  c->r[1]=c->r[1]+0x00000020u; // 80283974
  return; // 80283978
}

// fn_8028397C
void f_8028397C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028397C
  c->r[0]=c->lr; // 80283980
  c->r[5]=c->r[4]|c->r[4]; // 80283984
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283988
  c->r[0]=c->r[3]+0x00000014u; // 8028398C
  c->r[3]=c->r[3]+0x00000010u; // 80283990
  c->r[4]=c->r[1]+0x00000008u; // 80283994
  W32(c->r[1]+0x00000008u,c->r[0]); // 80283998
  c->lr=0x802839A0u; f_802A7C88(c); // 8028399C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802839A0
  c->lr=c->r[0]; // 802839A4
  c->r[1]=c->r[1]+0x00000010u; // 802839A8
  return; // 802839AC
}

// fn_802839B0
void f_802839B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802839B0
  c->r[0]=c->lr; // 802839B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802839B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802839BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802839C0
  c->r[30]=c->r[3]+0x00000014u; // 802839C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802839C8
  c->r[29]=c->r[4]|c->r[4]; // 802839CC
  c->r[31]=R32(c->r[3]+0x00000014u); // 802839D0
  goto L_802839F8; // 802839D4
L_802839D8:;
  c->r[3]=c->r[29]|c->r[29]; // 802839D8
  c->r[4]=c->r[31]+0x00000008u; // 802839DC
  c->lr=0x802839E4u; f_80190160(c); // 802839E0
  cmps(c,0,(int32_t)c->r[3],0); // 802839E4
  if (!crb(c,2)) { goto L_802839F4; } // 802839E8
  c->r[3]=R32(c->r[31]+0x00000088u); // 802839EC
  goto L_80283A04; // 802839F0
L_802839F4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802839F4
L_802839F8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802839F8
  if (!crb(c,2)) { IRQCHK(c); goto L_802839D8; } // 802839FC
  c->r[3]=0u+0x00000000u; // 80283A00
L_80283A04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80283A04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80283A08
  c->r[30]=R32(c->r[1]+0x00000018u); // 80283A0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80283A10
  c->lr=c->r[0]; // 80283A14
  c->r[1]=c->r[1]+0x00000020u; // 80283A18
  return; // 80283A1C
}

// EqualsResName__Q34nw4r3lyt6detailFPCcPCc
void f_80283A20(Ctx* __restrict c) {
  trace_call(0x80283A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283A20
  c->r[0]=c->lr; // 80283A24
  c->r[5]=0u+0x00000010u; // 80283A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283A2C
  c->lr=0x80283A34u; f_8019027C(c); // 80283A30
  c->r[0]=cntlz(c->r[3]); // 80283A34
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80283A38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80283A3C
  c->lr=c->r[0]; // 80283A40
  c->r[1]=c->r[1]+0x00000010u; // 80283A44
  return; // 80283A48
}

// EqualsMaterialName__Q34nw4r3lyt6detailFPCcPCc
void f_80283A4C(Ctx* __restrict c) {
  trace_call(0x80283A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283A4C
  c->r[0]=c->lr; // 80283A50
  c->r[5]=0u+0x00000014u; // 80283A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283A58
  c->lr=0x80283A60u; f_8019027C(c); // 80283A5C
  c->r[0]=cntlz(c->r[3]); // 80283A60
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80283A64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80283A68
  c->lr=c->r[0]; // 80283A6C
  c->r[1]=c->r[1]+0x00000010u; // 80283A70
  return; // 80283A74
}

// TestFileHeader__Q34nw4r3lyt6detailFRCQ44nw4r3lyt3res16BinaryFileHeaderUl
void f_80283A78(Ctx* __restrict c) {
  trace_call(0x80283A78u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80283A78
  c->r[5]=0u+0x00000000u; // 80283A7C
  cmpu(c,0,c->r[4],c->r[0]); // 80283A80
  if (!crb(c,2)) { goto L_80283A98; } // 80283A84
  c->r[0]=R16(c->r[3]+0x00000004u); // 80283A88
  cmpu(c,0,c->r[0],0x0000FEFFu); // 80283A8C
  if (!crb(c,2)) { goto L_80283A98; } // 80283A90
  c->r[5]=0u+0x00000001u; // 80283A94
L_80283A98:;
  c->r[3]=c->r[5]|c->r[5]; // 80283A98
  return; // 80283A9C
}

// __ct__Q44nw4r3lyt6detail11TexCoordAryFv
void f_80283AA0(Ctx* __restrict c) {
  trace_call(0x80283AA0u);
  c->r[0]=0u+0x00000000u; // 80283AA0
  W8(c->r[3]+0x00000000u,c->r[0]); // 80283AA4
  W8(c->r[3]+0x00000001u,c->r[0]); // 80283AA8
  W32(c->r[3]+0x00000004u,c->r[0]); // 80283AAC
  return; // 80283AB0
}

// Free__Q44nw4r3lyt6detail11TexCoordAryFv
void f_80283AB4(Ctx* __restrict c) {
  trace_call(0x80283AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283AB4
  c->r[0]=c->lr; // 80283AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283ABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80283AC0
  c->r[31]=c->r[3]|c->r[3]; // 80283AC4
  c->r[4]=R32(c->r[3]+0x00000004u); // 80283AC8
  cmps(c,0,(int32_t)c->r[4],0); // 80283ACC
  if (crb(c,2)) { goto L_80283AF0; } // 80283AD0
  if (crb(c,2)) { goto L_80283AE0; } // 80283AD4
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80283AD8
  c->lr=0x80283AE0u; f_801A0F08(c); // 80283ADC
L_80283AE0:;
  c->r[0]=0u+0x00000000u; // 80283AE0
  W32(c->r[31]+0x00000004u,c->r[0]); // 80283AE4
  W8(c->r[31]+0x00000000u,c->r[0]); // 80283AE8
  W8(c->r[31]+0x00000001u,c->r[0]); // 80283AEC
L_80283AF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80283AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80283AF4
  c->lr=c->r[0]; // 80283AF8
  c->r[1]=c->r[1]+0x00000010u; // 80283AFC
  return; // 80283B00
}

// Reserve__Q44nw4r3lyt6detail11TexCoordAryFUc
void f_80283B04(Ctx* __restrict c) {
  trace_call(0x80283B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283B04
  c->r[0]=c->lr; // 80283B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80283B0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80283B10
  c->r[31]=c->r[4]|c->r[4]; // 80283B14
  W32(c->r[1]+0x00000008u,c->r[30]); // 80283B18
  c->r[30]=c->r[3]|c->r[3]; // 80283B1C
  c->r[0]=R8(c->r[3]+0x00000000u); // 80283B20
  cmpu(c,0,c->r[0],c->r[4]); // 80283B24
  if (!crb(c,0)) { goto L_80283B80; } // 80283B28
  c->r[4]=R32(c->r[3]+0x00000004u); // 80283B2C
  cmps(c,0,(int32_t)c->r[4],0); // 80283B30
  if (crb(c,2)) { goto L_80283B54; } // 80283B34
  if (crb(c,2)) { goto L_80283B44; } // 80283B38
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80283B3C
  c->lr=0x80283B44u; f_801A0F08(c); // 80283B40
L_80283B44:;
  c->r[0]=0u+0x00000000u; // 80283B44
  W32(c->r[30]+0x00000004u,c->r[0]); // 80283B48
  W8(c->r[30]+0x00000000u,c->r[0]); // 80283B4C
  W8(c->r[30]+0x00000001u,c->r[0]); // 80283B50
L_80283B54:;
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80283B54
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 80283B58
  c->lr=0x80283B60u; f_801A0EF8(c); // 80283B5C
  cmps(c,0,(int32_t)c->r[3],0); // 80283B60
  if (crb(c,2)) { goto L_80283B6C; } // 80283B64
  goto L_80283B70; // 80283B68
L_80283B6C:;
  c->r[3]=0u+0x00000000u; // 80283B6C
L_80283B70:;
  cmps(c,0,(int32_t)c->r[3],0); // 80283B70
  W32(c->r[30]+0x00000004u,c->r[3]); // 80283B74
  if (crb(c,2)) { goto L_80283B80; } // 80283B78
  W8(c->r[30]+0x00000000u,c->r[31]); // 80283B7C
L_80283B80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80283B80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80283B84
  c->r[30]=R32(c->r[1]+0x00000008u); // 80283B88
  c->lr=c->r[0]; // 80283B8C
  c->r[1]=c->r[1]+0x00000010u; // 80283B90
  return; // 80283B94
}

// SetSize__Q44nw4r3lyt6detail11TexCoordAryFUc
void f_80283B98(Ctx* __restrict c) {
  trace_call(0x80283B98u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283B98
  cmps(c,0,(int32_t)c->r[0],0); // 80283B9C
  if (crb(c,2)) return; // 80283BA0
  c->r[0]=R8(c->r[3]+0x00000000u); // 80283BA4
  cmpu(c,0,c->r[4],c->r[0]); // 80283BA8
  if (crb(c,1)) return; // 80283BAC
  c->r[0]=R8(c->r[13]+0xFFFFA448u); // 80283BB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80283BB4
  if (!crb(c,2)) { goto L_80283BF4; } // 80283BB8
  c->r[6]=0u+0x80420000u; // 80283BBC
  {uint32_t ea=c->r[2]+0xFFFF9EC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283BC0
  c->r[5]=c->r[6]+0xFFFFA600u; // 80283BC4
  {uint32_t ea=c->r[2]+0xFFFF9EC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283BC8
  c->r[0]=0u+0x00000001u; // 80283BCC
  {uint32_t ea=c->r[6]+0xFFFFA600u; WF32(ea,c->f[1]);} // 80283BD0
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 80283BD4
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 80283BD8
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[1]);} // 80283BDC
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 80283BE0
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 80283BE4
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 80283BE8
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 80283BEC
  W8(c->r[13]+0xFFFFA448u,c->r[0]); // 80283BF0
L_80283BF4:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 80283BF4
  c->r[6]=0u+0x80420000u; // 80283BF8
  c->r[5]=c->r[6]+0xFFFFA600u; // 80283BFC
  {uint32_t ea=c->r[6]+0xFFFFA600u; c->f[7]=c->ps1[7]=RF32(ea);} // 80283C00
  c->r[0]=c->r[4]-c->r[7]; // 80283C04
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 80283C08
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 80283C0C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80283C10
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80283C14
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80283C18
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80283C1C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283C20
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80283C24
  c->ctr=c->r[0]; // 80283C28
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 80283C2C
  if (!crb(c,0)) { goto L_80283C7C; } // 80283C30
L_80283C34:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283C34
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 80283C38
  c->r[5]=c->r[0]+c->r[6]; // 80283C3C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 80283C40
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283C44
  c->r[5]=c->r[0]+c->r[6]; // 80283C48
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 80283C4C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 80283C50
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283C54
  c->r[5]=c->r[0]+c->r[6]; // 80283C58
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 80283C5C
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 80283C60
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283C64
  c->r[5]=c->r[0]+c->r[6]; // 80283C68
  c->r[6]=c->r[6]+0x00000020u; // 80283C6C
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 80283C70
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 80283C74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80283C34; } // 80283C78
L_80283C7C:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 80283C7C
  return; // 80283C80
}

// Copy__Q44nw4r3lyt6detail11TexCoordAryFPCvUc
void f_80283C84(Ctx* __restrict c) {
  trace_call(0x80283C84u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 80283C84
  cmpu(c,0,c->r[0],c->r[5]); // 80283C88
  if (!crb(c,0)) { goto L_80283C94; } // 80283C8C
  c->r[0]=c->r[5]|c->r[5]; // 80283C90
L_80283C94:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 80283C94
  c->r[6]=0u+0x00000000u; // 80283C98
  c->ctr=c->r[5]; // 80283C9C
  cmps(c,0,(int32_t)c->r[5],0); // 80283CA0
  if (!crb(c,1)) return; // 80283CA4
L_80283CA8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283CA8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283CAC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283CB0
  c->r[5]=c->r[0]+c->r[6]; // 80283CB4
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 80283CB8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283CBC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 80283CC0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80283CC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283CC8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80283CCC
  c->r[5]=c->r[0]+c->r[6]; // 80283CD0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80283CD4
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 80283CD8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283CDC
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 80283CE0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80283CE4
  c->r[4]=c->r[4]+0x00000020u; // 80283CE8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283CEC
  c->r[5]=c->r[0]+c->r[6]; // 80283CF0
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 80283CF4
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 80283CF8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80283CFC
  c->r[5]=c->r[0]+c->r[6]; // 80283D00
  c->r[6]=c->r[6]+0x00000020u; // 80283D04
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 80283D08
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 80283D0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80283CA8; } // 80283D10
  return; // 80283D14
}

// IsModulateVertexColor__Q34nw4r3lyt6detailFPQ34nw4r2ut5ColorUc
void f_80283D18(Ctx* __restrict c) {
  trace_call(0x80283D18u);
  cmpu(c,0,c->r[4],0x000000FFu); // 80283D18
  if (crb(c,2)) { goto L_80283D28; } // 80283D1C
  c->r[3]=0u+0x00000001u; // 80283D20
  return; // 80283D24
L_80283D28:;
  cmps(c,0,(int32_t)c->r[3],0); // 80283D28
  if (crb(c,2)) { goto L_80283D78; } // 80283D2C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80283D30
  c->r[0]=c->r[4]+0x00010000u; // 80283D34
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80283D38
  if (!crb(c,2)) { goto L_80283D70; } // 80283D3C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80283D40
  c->r[0]=c->r[4]+0x00010000u; // 80283D44
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80283D48
  if (!crb(c,2)) { goto L_80283D70; } // 80283D4C
  c->r[4]=R32(c->r[3]+0x00000008u); // 80283D50
  c->r[0]=c->r[4]+0x00010000u; // 80283D54
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80283D58
  if (!crb(c,2)) { goto L_80283D70; } // 80283D5C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80283D60
  c->r[0]=c->r[3]+0x00010000u; // 80283D64
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80283D68
  if (crb(c,2)) { goto L_80283D78; } // 80283D6C
L_80283D70:;
  c->r[3]=0u+0x00000001u; // 80283D70
  return; // 80283D74
L_80283D78:;
  c->r[3]=0u+0x00000000u; // 80283D78
  return; // 80283D7C
}

// MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc
void f_80283D80(Ctx* __restrict c) {
  trace_call(0x80283D80u);
  c->r[8]=R8(c->r[4]+0x00000000u); // 80283D80
  cmpu(c,0,c->r[5],0x000000FFu); // 80283D84
  c->r[7]=R8(c->r[4]+0x00000001u); // 80283D88
  c->r[6]=R8(c->r[4]+0x00000002u); // 80283D8C
  c->r[0]=R8(c->r[4]+0x00000003u); // 80283D90
  W8(c->r[3]+0x00000000u,c->r[8]); // 80283D94
  W8(c->r[3]+0x00000001u,c->r[7]); // 80283D98
  W8(c->r[3]+0x00000002u,c->r[6]); // 80283D9C
  W8(c->r[3]+0x00000003u,c->r[0]); // 80283DA0
  if (crb(c,2)) return; // 80283DA4
  c->r[0]=R8(c->r[4]+0x00000003u); // 80283DA8
  c->r[4]=0u+0x80810000u; // 80283DAC
  c->r[4]=c->r[4]+0xFFFF8081u; // 80283DB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80283DB4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 80283DB8
  c->r[0]=c->r[4]+c->r[0]; // 80283DBC
  c->r[0]=sraw(c,c->r[0],7); // 80283DC0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80283DC4
  c->r[0]=c->r[0]+c->r[4]; // 80283DC8
  W8(c->r[3]+0x00000003u,c->r[0]); // 80283DCC
  return; // 80283DD0
}

// SetVertexFormat__Q34nw4r3lyt6detailFbUc
void f_80283DD4(Ctx* __restrict c) {
  trace_call(0x80283DD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283DD4
  c->r[0]=c->lr; // 80283DD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80283DDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80283DE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80283DE4
  c->r[30]=c->r[4]|c->r[4]; // 80283DE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80283DEC
  c->r[29]=c->r[3]|c->r[3]; // 80283DF0
  c->lr=0x80283DF8u; f_8017F908(c); // 80283DF4
  c->r[3]=0u+0x00000009u; // 80283DF8
  c->r[4]=0u+0x00000001u; // 80283DFC
  c->lr=0x80283E04u; f_8017F314(c); // 80283E00
  cmps(c,0,(int32_t)c->r[29],0); // 80283E04
  if (crb(c,2)) { goto L_80283E18; } // 80283E08
  c->r[3]=0u+0x0000000Bu; // 80283E0C
  c->r[4]=0u+0x00000001u; // 80283E10
  c->lr=0x80283E18u; f_8017F314(c); // 80283E14
L_80283E18:;
  c->r[31]=0u+0x00000000u; // 80283E18
  goto L_80283E30; // 80283E1C
L_80283E20:;
  c->r[3]=c->r[31]+0x0000000Du; // 80283E20
  c->r[4]=0u+0x00000001u; // 80283E24
  c->lr=0x80283E2Cu; f_8017F314(c); // 80283E28
  c->r[31]=c->r[31]+0x00000001u; // 80283E2C
L_80283E30:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 80283E30
  if (crb(c,0)) { IRQCHK(c); goto L_80283E20; } // 80283E34
  c->r[3]=0u+0x00000000u; // 80283E38
  c->r[4]=0u+0x00000009u; // 80283E3C
  c->r[5]=0u+0x00000000u; // 80283E40
  c->r[6]=0u+0x00000004u; // 80283E44
  c->r[7]=0u+0x00000000u; // 80283E48
  c->lr=0x80283E50u; f_8017F93C(c); // 80283E4C
  cmps(c,0,(int32_t)c->r[29],0); // 80283E50
  if (crb(c,2)) { goto L_80283E70; } // 80283E54
  c->r[3]=0u+0x00000000u; // 80283E58
  c->r[4]=0u+0x0000000Bu; // 80283E5C
  c->r[5]=0u+0x00000001u; // 80283E60
  c->r[6]=0u+0x00000005u; // 80283E64
  c->r[7]=0u+0x00000000u; // 80283E68
  c->lr=0x80283E70u; f_8017F93C(c); // 80283E6C
L_80283E70:;
  c->r[31]=0u+0x00000000u; // 80283E70
  goto L_80283E94; // 80283E74
L_80283E78:;
  c->r[4]=c->r[31]+0x0000000Du; // 80283E78
  c->r[3]=0u+0x00000000u; // 80283E7C
  c->r[5]=0u+0x00000001u; // 80283E80
  c->r[6]=0u+0x00000004u; // 80283E84
  c->r[7]=0u+0x00000000u; // 80283E88
  c->lr=0x80283E90u; f_8017F93C(c); // 80283E8C
  c->r[31]=c->r[31]+0x00000001u; // 80283E90
L_80283E94:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 80283E94
  if (crb(c,0)) { IRQCHK(c); goto L_80283E78; } // 80283E98
  c->r[0]=R32(c->r[1]+0x00000024u); // 80283E9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80283EA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80283EA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80283EA8
  c->lr=c->r[0]; // 80283EAC
  c->r[1]=c->r[1]+0x00000020u; // 80283EB0
  return; // 80283EB4
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5Color
void f_80283EB8(Ctx* __restrict c) {
  trace_call(0x80283EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80283EB8
  c->r[0]=c->lr; // 80283EBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80283EC0
  c->r[11]=c->r[1]+0x00000020u; // 80283EC4
  c->lr=0x80283ECCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80283EC8
  c->r[27]=c->r[3]|c->r[3]; // 80283ECC
  c->r[28]=c->r[4]|c->r[4]; // 80283ED0
  c->r[29]=c->r[5]|c->r[5]; // 80283ED4
  c->r[30]=c->r[6]|c->r[6]; // 80283ED8
  c->r[31]=c->r[7]|c->r[7]; // 80283EDC
  c->r[3]=0u+0x00000080u; // 80283EE0
  c->r[4]=0u+0x00000000u; // 80283EE4
  c->r[5]=0u+0x00000004u; // 80283EE8
  c->lr=0x80283EF0u; f_80180E18(c); // 80283EEC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283EF0
  c->r[3]=0u+0xCC010000u; // 80283EF4
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283EF8
  cmps(c,0,(int32_t)c->r[31],0); // 80283EFC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283F00
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283F04
  if (crb(c,2)) { goto L_80283F14; } // 80283F08
  c->r[0]=R32(c->r[31]+0x00000000u); // 80283F0C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80283F10
L_80283F14:;
  cmps(c,1,(int32_t)c->r[29],0); // 80283F14
  c->r[6]=0u+0x00000000u; // 80283F18
  if (!crb(c,5)) { goto L_8028402C; } // 80283F1C
  cmps(c,0,(int32_t)c->r[29],8); // 80283F20
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 80283F24
  if (!crb(c,1)) { goto L_80283FF8; } // 80283F28
  c->r[5]=0u+0x00000000u; // 80283F2C
  if (crb(c,4)) { goto L_80283F48; } // 80283F30
  c->r[3]=0u+0x80000000u; // 80283F34
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80283F38
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80283F3C
  if (crb(c,1)) { goto L_80283F48; } // 80283F40
  c->r[5]=0u+0x00000001u; // 80283F44
L_80283F48:;
  cmps(c,0,(int32_t)c->r[5],0); // 80283F48
  if (crb(c,2)) { goto L_80283FF8; } // 80283F4C
  c->r[0]=c->r[4]+0x00000007u; // 80283F50
  c->r[5]=c->r[30]|c->r[30]; // 80283F54
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80283F58
  c->r[3]=0u+0xCC010000u; // 80283F5C
  c->ctr=c->r[0]; // 80283F60
  cmps(c,0,(int32_t)c->r[4],0); // 80283F64
  if (!crb(c,1)) { goto L_80283FF8; } // 80283F68
L_80283F6C:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283F6C
  c->r[6]=c->r[6]+0x00000008u; // 80283F70
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283F74
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283F78
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80283F7C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283F80
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283F84
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80283F88
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283F8C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283F90
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283F94
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283F98
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283F9C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283FA0
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283FA4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283FA8
  {uint32_t ea=c->r[5]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283FAC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283FB0
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283FB4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283FB8
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283FBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283FC0
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283FC4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283FC8
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283FCC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283FD0
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283FD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283FD8
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80283FDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283FE0
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80283FE4
  c->r[5]=c->r[5]+0x00000100u; // 80283FE8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80283FEC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80283FF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80283F6C; } // 80283FF4
L_80283FF8:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 80283FF8
  c->r[0]=c->r[29]-c->r[6]; // 80283FFC
  c->r[4]=c->r[30]+c->r[3]; // 80284000
  c->r[3]=0u+0xCC010000u; // 80284004
  c->ctr=c->r[0]; // 80284008
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8028400C
  if (!crb(c,0)) { goto L_8028402C; } // 80284010
L_80284014:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284014
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284018
  c->r[4]=c->r[4]+0x00000020u; // 8028401C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284020
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284024
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80284014; } // 80284028
L_8028402C:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028402C
  c->r[3]=0u+0xCC010000u; // 80284030
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284034
  cmps(c,0,(int32_t)c->r[31],0); // 80284038
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028403C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80284040
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284044
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80284048
  if (crb(c,2)) { goto L_80284058; } // 8028404C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80284050
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80284054
L_80284058:;
  cmps(c,1,(int32_t)c->r[29],0); // 80284058
  c->r[6]=0u+0x00000000u; // 8028405C
  if (!crb(c,5)) { goto L_80284170; } // 80284060
  cmps(c,0,(int32_t)c->r[29],8); // 80284064
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 80284068
  if (!crb(c,1)) { goto L_8028413C; } // 8028406C
  c->r[5]=0u+0x00000000u; // 80284070
  if (crb(c,4)) { goto L_8028408C; } // 80284074
  c->r[3]=0u+0x80000000u; // 80284078
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8028407C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80284080
  if (crb(c,1)) { goto L_8028408C; } // 80284084
  c->r[5]=0u+0x00000001u; // 80284088
L_8028408C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8028408C
  if (crb(c,2)) { goto L_8028413C; } // 80284090
  c->r[0]=c->r[4]+0x00000007u; // 80284094
  c->r[5]=c->r[30]|c->r[30]; // 80284098
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8028409C
  c->r[3]=0u+0xCC010000u; // 802840A0
  c->ctr=c->r[0]; // 802840A4
  cmps(c,0,(int32_t)c->r[4],0); // 802840A8
  if (!crb(c,1)) { goto L_8028413C; } // 802840AC
L_802840B0:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802840B0
  c->r[6]=c->r[6]+0x00000008u; // 802840B4
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802840B8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802840BC
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802840C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802840C4
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802840C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802840CC
  {uint32_t ea=c->r[5]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802840D0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802840D4
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802840D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802840DC
  {uint32_t ea=c->r[5]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 802840E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802840E4
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802840E8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802840EC
  {uint32_t ea=c->r[5]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 802840F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802840F4
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802840F8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802840FC
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284100
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284104
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284108
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8028410C
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284110
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284114
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284118
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8028411C
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284120
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284124
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284128
  c->r[5]=c->r[5]+0x00000100u; // 8028412C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284130
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284134
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802840B0; } // 80284138
L_8028413C:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8028413C
  c->r[0]=c->r[29]-c->r[6]; // 80284140
  c->r[4]=c->r[30]+c->r[3]; // 80284144
  c->r[3]=0u+0xCC010000u; // 80284148
  c->ctr=c->r[0]; // 8028414C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 80284150
  if (!crb(c,0)) { goto L_80284170; } // 80284154
L_80284158:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284158
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028415C
  c->r[4]=c->r[4]+0x00000020u; // 80284160
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284164
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284168
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80284158; } // 8028416C
L_80284170:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284170
  c->r[3]=0u+0xCC010000u; // 80284174
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284178
  cmps(c,0,(int32_t)c->r[31],0); // 8028417C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284180
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80284184
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284188
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8028418C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284190
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284194
  if (crb(c,2)) { goto L_802841A4; } // 80284198
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8028419C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802841A0
L_802841A4:;
  cmps(c,1,(int32_t)c->r[29],0); // 802841A4
  c->r[6]=0u+0x00000000u; // 802841A8
  if (!crb(c,5)) { goto L_802842BC; } // 802841AC
  cmps(c,0,(int32_t)c->r[29],8); // 802841B0
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 802841B4
  if (!crb(c,1)) { goto L_80284288; } // 802841B8
  c->r[5]=0u+0x00000000u; // 802841BC
  if (crb(c,4)) { goto L_802841D8; } // 802841C0
  c->r[3]=0u+0x80000000u; // 802841C4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 802841C8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 802841CC
  if (crb(c,1)) { goto L_802841D8; } // 802841D0
  c->r[5]=0u+0x00000001u; // 802841D4
L_802841D8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802841D8
  if (crb(c,2)) { goto L_80284288; } // 802841DC
  c->r[0]=c->r[4]+0x00000007u; // 802841E0
  c->r[5]=c->r[30]|c->r[30]; // 802841E4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802841E8
  c->r[3]=0u+0xCC010000u; // 802841EC
  c->ctr=c->r[0]; // 802841F0
  cmps(c,0,(int32_t)c->r[4],0); // 802841F4
  if (!crb(c,1)) { goto L_80284288; } // 802841F8
L_802841FC:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802841FC
  c->r[6]=c->r[6]+0x00000008u; // 80284200
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284204
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284208
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028420C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284210
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284214
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80284218
  {uint32_t ea=c->r[5]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028421C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284220
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284224
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284228
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028422C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284230
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284234
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284238
  {uint32_t ea=c->r[5]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028423C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284240
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284244
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284248
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028424C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284250
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284254
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284258
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028425C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284260
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284264
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284268
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028426C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284270
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284274
  c->r[5]=c->r[5]+0x00000100u; // 80284278
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8028427C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284280
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802841FC; } // 80284284
L_80284288:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 80284288
  c->r[0]=c->r[29]-c->r[6]; // 8028428C
  c->r[4]=c->r[30]+c->r[3]; // 80284290
  c->r[3]=0u+0xCC010000u; // 80284294
  c->ctr=c->r[0]; // 80284298
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8028429C
  if (!crb(c,0)) { goto L_802842BC; } // 802842A0
L_802842A4:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802842A4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802842A8
  c->r[4]=c->r[4]+0x00000020u; // 802842AC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802842B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802842B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802842A4; } // 802842B8
L_802842BC:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802842BC
  c->r[3]=0u+0xCC010000u; // 802842C0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802842C4
  cmps(c,0,(int32_t)c->r[31],0); // 802842C8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802842CC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802842D0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802842D4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802842D8
  if (crb(c,2)) { goto L_802842E8; } // 802842DC
  c->r[0]=R32(c->r[31]+0x00000008u); // 802842E0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802842E4
L_802842E8:;
  cmps(c,1,(int32_t)c->r[29],0); // 802842E8
  c->r[6]=0u+0x00000000u; // 802842EC
  if (!crb(c,5)) { goto L_80284400; } // 802842F0
  cmps(c,0,(int32_t)c->r[29],8); // 802842F4
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 802842F8
  if (!crb(c,1)) { goto L_802843CC; } // 802842FC
  c->r[5]=0u+0x00000000u; // 80284300
  if (crb(c,4)) { goto L_8028431C; } // 80284304
  c->r[3]=0u+0x80000000u; // 80284308
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8028430C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80284310
  if (crb(c,1)) { goto L_8028431C; } // 80284314
  c->r[5]=0u+0x00000001u; // 80284318
L_8028431C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8028431C
  if (crb(c,2)) { goto L_802843CC; } // 80284320
  c->r[0]=c->r[4]+0x00000007u; // 80284324
  c->r[5]=c->r[30]|c->r[30]; // 80284328
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8028432C
  c->r[3]=0u+0xCC010000u; // 80284330
  c->ctr=c->r[0]; // 80284334
  cmps(c,0,(int32_t)c->r[4],0); // 80284338
  if (!crb(c,1)) { goto L_802843CC; } // 8028433C
L_80284340:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284340
  c->r[6]=c->r[6]+0x00000008u; // 80284344
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284348
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8028434C
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284350
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80284354
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284358
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8028435C
  {uint32_t ea=c->r[5]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284360
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284364
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284368
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8028436C
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284370
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284374
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284378
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8028437C
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284380
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284384
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284388
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8028438C
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284390
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80284394
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284398
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8028439C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802843A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802843A4
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802843A8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802843AC
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802843B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802843B4
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802843B8
  c->r[5]=c->r[5]+0x00000100u; // 802843BC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802843C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802843C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80284340; } // 802843C8
L_802843CC:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 802843CC
  c->r[0]=c->r[29]-c->r[6]; // 802843D0
  c->r[4]=c->r[30]+c->r[3]; // 802843D4
  c->r[3]=0u+0xCC010000u; // 802843D8
  c->ctr=c->r[0]; // 802843DC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 802843E0
  if (!crb(c,0)) { goto L_80284400; } // 802843E4
L_802843E8:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802843E8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802843EC
  c->r[4]=c->r[4]+0x00000020u; // 802843F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802843F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802843F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802843E8; } // 802843FC
L_80284400:;
  c->r[11]=c->r[1]+0x00000020u; // 80284400
  c->lr=0x80284408u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80284404
  c->r[0]=R32(c->r[1]+0x00000024u); // 80284408
  c->lr=c->r[0]; // 8028440C
  c->r[1]=c->r[1]+0x00000020u; // 80284410
  return; // 80284414
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5ColorUc
void f_80284418(Ctx* __restrict c) {
  trace_call(0x80284418u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284418
  c->r[0]=c->lr; // 8028441C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80284420
  c->r[11]=c->r[1]+0x00000050u; // 80284424
  c->lr=0x8028442Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80284428
  c->r[0]=0u+0xFFFFFFFFu; // 8028442C
  cmps(c,0,(int32_t)c->r[7],0); // 80284430
  W32(c->r[1]+0x00000010u,c->r[0]); // 80284434
  c->r[26]=c->r[3]|c->r[3]; // 80284438
  c->r[27]=c->r[4]|c->r[4]; // 8028443C
  c->r[28]=c->r[5]|c->r[5]; // 80284440
  W32(c->r[1]+0x00000014u,c->r[0]); // 80284444
  c->r[29]=c->r[6]|c->r[6]; // 80284448
  c->r[30]=c->r[7]|c->r[7]; // 8028444C
  c->r[31]=c->r[8]|c->r[8]; // 80284450
  W32(c->r[1]+0x00000018u,c->r[0]); // 80284454
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80284458
  if (crb(c,2)) { goto L_802844D0; } // 8028445C
  c->r[24]=c->r[30]|c->r[30]; // 80284460
  c->r[23]=c->r[1]+0x00000010u; // 80284464
  c->r[25]=0u+0x00000000u; // 80284468
L_8028446C:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 8028446C
  c->r[5]=c->r[31]|c->r[31]; // 80284470
  c->r[3]=c->r[1]+0x0000000Cu; // 80284474
  c->r[4]=c->r[1]+0x00000008u; // 80284478
  W8(c->r[1]+0x00000008u,c->r[0]); // 8028447C
  c->r[0]=R8(c->r[24]+0x00000001u); // 80284480
  W8(c->r[1]+0x00000009u,c->r[0]); // 80284484
  c->r[0]=R8(c->r[24]+0x00000002u); // 80284488
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8028448C
  c->r[0]=R8(c->r[24]+0x00000003u); // 80284490
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80284494
  c->lr=0x8028449Cu; f_80283D80(c); // 80284498
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8028449C
  c->r[25]=c->r[25]+0x00000001u; // 802844A0
  c->r[0]=R8(c->r[1]+0x0000000Du); // 802844A4
  cmps(c,0,(int32_t)c->r[25],4); // 802844A8
  W8(c->r[23]+0x00000000u,c->r[3]); // 802844AC
  c->r[24]=c->r[24]+0x00000004u; // 802844B0
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 802844B4
  W8(c->r[23]+0x00000001u,c->r[0]); // 802844B8
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 802844BC
  W8(c->r[23]+0x00000002u,c->r[3]); // 802844C0
  W8(c->r[23]+0x00000003u,c->r[0]); // 802844C4
  c->r[23]=c->r[23]+0x00000004u; // 802844C8
  if (crb(c,0)) { IRQCHK(c); goto L_8028446C; } // 802844CC
L_802844D0:;
  c->r[3]=0u-c->r[30]; // 802844D0
  c->r[0]=c->r[1]+0x00000010u; // 802844D4
  c->r[4]=c->r[3]|c->r[30]; // 802844D8
  c->r[5]=c->r[28]|c->r[28]; // 802844DC
  c->r[7]=sraw(c,c->r[4],31); // 802844E0
  c->r[3]=c->r[26]|c->r[26]; // 802844E4
  c->r[4]=c->r[27]|c->r[27]; // 802844E8
  c->r[6]=c->r[29]|c->r[29]; // 802844EC
  c->r[7]=c->r[0]&c->r[7]; // 802844F0
  c->lr=0x802844F8u; f_80283EB8(c); // 802844F4
  c->r[11]=c->r[1]+0x00000050u; // 802844F8
  c->lr=0x80284500u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802844FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 80284500
  c->lr=c->r[0]; // 80284504
  c->r[1]=c->r[1]+0x00000050u; // 80284508
  return; // 8028450C
}

// BindAnimation__Q24nw4r3lytFPQ34nw4r3lyt5GroupPQ34nw4r3lyt13AnimTransformbb
void f_80284510(Ctx* __restrict c) {
  trace_call(0x80284510u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284510
  c->r[0]=c->lr; // 80284514
  W32(c->r[1]+0x00000024u,c->r[0]); // 80284518
  c->r[11]=c->r[1]+0x00000020u; // 8028451C
  c->lr=0x80284524u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80284520
  c->r[31]=R32(c->r[3]+0x00000010u); // 80284524
  c->r[27]=c->r[4]|c->r[4]; // 80284528
  c->r[28]=c->r[5]|c->r[5]; // 8028452C
  c->r[29]=c->r[6]|c->r[6]; // 80284530
  c->r[30]=c->r[3]+0x00000010u; // 80284534
  goto L_80284560; // 80284538
L_8028453C:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8028453C
  c->r[4]=c->r[27]|c->r[27]; // 80284540
  c->r[5]=c->r[28]|c->r[28]; // 80284544
  c->r[6]=c->r[29]|c->r[29]; // 80284548
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028454C
  c->r[12]=R32(c->r[12]+0x00000044u); // 80284550
  c->ctr=c->r[12]; // 80284554
  if (true) { c->lr=0x8028455Cu; dispatch(c,c->ctr); } // 80284558
  c->r[31]=R32(c->r[31]+0x00000000u); // 8028455C
L_80284560:;
  cmpu(c,0,c->r[31],c->r[30]); // 80284560
  if (!crb(c,2)) { IRQCHK(c); goto L_8028453C; } // 80284564
  c->r[11]=c->r[1]+0x00000020u; // 80284568
  c->lr=0x80284570u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028456C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80284570
  c->lr=c->r[0]; // 80284574
  c->r[1]=c->r[1]+0x00000020u; // 80284578
  return; // 8028457C
}

// FExp__Q34nw4r4math6detailFf
void f_80284580(Ctx* __restrict c) {
  trace_call(0x80284580u);
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284580
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284584
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80284588
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,1,5);} // 8028458C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000018u); // 80284590
  W16(c->r[1]+0x0000000Au,c->r[0]); // 80284594
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,5);} // 80284598
  {uint32_t ea=c->r[2]+0xFFFF9ECCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8028459C
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802845A0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802845A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802845A8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 802845AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802845B0
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 802845B4
  c->r[3]=R16(c->r[1]+0x00000014u); // 802845B8
  W16(c->r[1]+0x00000008u,c->r[3]); // 802845BC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 802845C0
  c->r[5]=0u+0x80340000u; // 802845C4
  c->r[6]=rotl(c->r[3],3)&0xFFFFFFF8u; // 802845C8
  c->r[3]=rotl(c->r[0],23)&0xFF800000u; // 802845CC
  c->r[5]=c->r[5]+0x00005448u; // 802845D0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 802845D4
  c->r[4]=c->r[5]+c->r[6]; // 802845D8
  {uint32_t ea=c->r[5]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 802845DC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802845E0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802845E4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802845E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802845EC
  c->r[0]=R32(c->r[1]+0x00000010u); // 802845F0
  c->r[0]=c->r[3]+c->r[0]; // 802845F4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 802845F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802845FC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284600
  c->r[1]=c->r[1]+0x00000020u; // 80284604
  return; // 80284608
}

// FLog__Q34nw4r4math6detailFf
void f_8028460C(Ctx* __restrict c) {
  trace_call(0x8028460Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028460C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80284610
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80284614
  c->r[3]=R32(c->r[1]+0x00000018u); // 80284618
  c->r[0]=R32(c->r[1]+0x00000010u); // 8028461C
  c->r[3]=rotl(c->r[3],9)&0x000000FFu; // 80284620
  c->r[0]=rotl(c->r[0],0)&0x807FFFFFu; // 80284624
  c->r[3]=c->r[3]+0xFFFFFF81u; // 80284628
  c->r[0]=c->r[0]|0x3F800000u; // 8028462C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 80284630
  W32(c->r[1]+0x00000014u,c->r[0]); // 80284634
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284638
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,3,ea,1,5);} // 8028463C
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284640
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284644
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80284648
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 8028464C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,2,ea,1,3);} // 80284650
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80284654
  W16(c->r[1]+0x00000008u,c->r[0]); // 80284658
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,1,ea,1,3);} // 8028465C
  c->r[4]=0u+0x80340000u; // 80284660
  {uint32_t ea=c->r[2]+0xFFFF9ECCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284664
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80284668
  c->r[4]=c->r[4]+0x00005550u; // 8028466C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 80284670
  c->r[3]=c->r[4]+c->r[0]; // 80284674
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80284678
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028467C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80284680
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 80284684
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80284688
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8028468C
  c->r[1]=c->r[1]+0x00000020u; // 80284690
  return; // 80284694
}

// FrSqrt__Q24nw4r4mathFf
void f_80284698(Ctx* __restrict c) {
  trace_call(0x80284698u);
  c->f[0]=frsqrte(c->f[1]); // 80284698
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8028469C
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802846A0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[0]); // 802846A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802846A8
  c->f[4]=c->ps1[4]=S(-std::fma(c->f[4],c->f[1],-c->f[3])); // 802846AC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 802846B0
  c->f[1]=c->f[0]; // 802846B4
  return; // 802846B8
}

// fn_802846BC
void f_802846BC(Ctx* __restrict c) {
  c->r[6]=0u+0x55550000u; // 802846BC
  c->r[5]=0u+0x33330000u; // 802846C0
  c->r[7]=rotl(c->r[3],31)&0x7FFFFFFFu; // 802846C4
  c->r[4]=0u+0x0F0F0000u; // 802846C8
  c->r[0]=c->r[6]+0x00005555u; // 802846CC
  c->r[5]=c->r[5]+0x00003333u; // 802846D0
  c->r[6]=c->r[7]&c->r[0]; // 802846D4
  c->r[0]=c->r[4]+0x00000F0Fu; // 802846D8
  c->r[4]=c->r[3]-c->r[6]; // 802846DC
  c->r[3]=rotl(c->r[4],30)&0x3FFFFFFFu; // 802846E0
  c->r[4]=c->r[4]&c->r[5]; // 802846E4
  c->r[3]=c->r[3]&c->r[5]; // 802846E8
  c->r[4]=c->r[4]+c->r[3]; // 802846EC
  c->r[3]=rotl(c->r[4],28)&0x0FFFFFFFu; // 802846F0
  c->r[3]=c->r[4]+c->r[3]; // 802846F4
  c->r[3]=c->r[3]&c->r[0]; // 802846F8
  c->r[0]=rotl(c->r[3],24)&0x00FFFFFFu; // 802846FC
  c->r[3]=c->r[3]+c->r[0]; // 80284700
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 80284704
  c->r[3]=c->r[3]+c->r[0]; // 80284708
  c->r[3]=rotl(c->r[3],0)&0x0000003Fu; // 8028470C
  return; // 80284710
}

// fn_80284714
void f_80284714(Ctx* __restrict c) {
  c->f[3]=std::fabs(c->f[1]); // 80284714
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284718
  {uint32_t ea=c->r[2]+0xFFFF9EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028471C
  goto L_80284728; // 80284720
L_80284724:;
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80284724
L_80284728:;
  fcmp(c,0,c->f[3],c->f[0]); // 80284728
  if (crb(c,1)) { IRQCHK(c); goto L_80284724; } // 8028472C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,3,ea,1,3);} // 80284730
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80284734
  W16(c->r[1]+0x00000008u,c->r[0]); // 80284738
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 8028473C
  c->r[4]=0u+0x80310000u; // 80284740
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80284744
  {uint32_t ea=c->r[2]+0xFFFF9EECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284748
  c->r[4]=c->r[4]+0xFFFF8750u; // 8028474C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 80284750
  c->r[3]=c->r[4]+c->r[0]; // 80284754
  fcmp(c,0,c->f[1],c->f[0]); // 80284758
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8028475C
  {uint32_t ea=c->r[4]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80284760
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[3]); // 80284764
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80284768
  if (!crb(c,0)) { goto L_80284774; } // 8028476C
  c->f[1]=-c->f[1]; // 80284770
L_80284774:;
  c->r[1]=c->r[1]+0x00000010u; // 80284774
  return; // 80284778
}

// fn_8028477C
void f_8028477C(Ctx* __restrict c) {
  c->f[1]=std::fabs(c->f[1]); // 8028477C
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284780
  {uint32_t ea=c->r[2]+0xFFFF9EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284784
  goto L_80284790; // 80284788
L_8028478C:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8028478C
L_80284790:;
  fcmp(c,0,c->f[1],c->f[0]); // 80284790
  if (crb(c,1)) { IRQCHK(c); goto L_8028478C; } // 80284794
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 80284798
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 8028479C
  W16(c->r[1]+0x00000008u,c->r[0]); // 802847A0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 802847A4
  c->r[3]=0u+0x80310000u; // 802847A8
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 802847AC
  c->r[3]=c->r[3]+0xFFFF8750u; // 802847B0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 802847B4
  c->r[3]=c->r[3]+c->r[0]; // 802847B8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802847BC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802847C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802847C4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 802847C8
  c->r[1]=c->r[1]+0x00000010u; // 802847CC
  return; // 802847D0
}

// fn_802847D4
void f_802847D4(Ctx* __restrict c) {
  c->f[0]=std::fabs(c->f[1]); // 802847D4
  c->r[5]=0u+0x80310000u; // 802847D8
  {uint32_t ea=c->r[2]+0xFFFF9EE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802847DC
  c->r[5]=c->r[5]+0xFFFF8750u; // 802847E0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,3);} // 802847E4
  fcmp(c,0,c->f[0],c->f[2]); // 802847E8
  if (!crb(c,1)) { goto L_80284800; } // 802847EC
L_802847F0:;
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802847F0
  fcmp(c,0,c->f[0],c->f[2]); // 802847F4
  if (crb(c,1)) { IRQCHK(c); goto L_802847F0; } // 802847F8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,3);} // 802847FC
L_80284800:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 80284800
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[2]); // 80284804
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80284808
  c->r[5]=c->r[5]+c->r[0]; // 8028480C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,1,3);} // 80284810
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,0);} // 80284814
  fcmp(c,0,c->f[1],c->f[4]); // 80284818
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 8028481C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,0,0);} // 80284820
  {double t0=S(std::fma(c->f[0],c->f[2],c->f[3])), t1=S(std::fma(c->ps1[0],c->f[2],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 80284824
  {double t0=S(c->ps1[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 80284828
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,1,0);} // 8028482C
  if (!crb(c,0)) { goto L_80284838; } // 80284830
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 80284834
L_80284838:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,0);} // 80284838
  return; // 8028483C
}

// fn_80284840
void f_80284840(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9EECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284840
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284844
  fcmp(c,0,c->f[1],c->f[0]); // 80284848
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8028484C
  if (!crb(c,2)) { goto L_802848EC; } // 80284850
  {uint32_t ea=c->r[2]+0xFFFF9EF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284854
  fcmp(c,0,c->f[1],c->f[0]); // 80284858
  if (!crb(c,1)) { goto L_802848AC; } // 8028485C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 80284860
  {uint32_t ea=c->r[2]+0xFFFF9EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284864
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80284868
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,1,ea,1,3);} // 8028486C
  c->r[0]=R16(c->r[1]+0x0000001Cu); // 80284870
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 80284874
  {uint32_t ea=c->r[1]+0x0000000Eu; psq_load(c,2,ea,1,3);} // 80284878
  c->r[4]=0u+0x80340000u; // 8028487C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80284880
  {uint32_t ea=c->r[2]+0xFFFF9EF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284884
  c->r[4]=c->r[4]+0x00005D58u; // 80284888
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 8028488C
  c->r[3]=c->r[4]+c->r[0]; // 80284890
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80284894
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284898
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8028489C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802848A0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 802848A4
  goto L_80284988; // 802848A8
L_802848AC:;
  {uint32_t ea=c->r[2]+0xFFFF9EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802848AC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802848B0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,1,3);} // 802848B4
  c->r[0]=R16(c->r[1]+0x00000018u); // 802848B8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 802848BC
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,1,ea,1,3);} // 802848C0
  c->r[4]=0u+0x80340000u; // 802848C4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802848C8
  c->r[4]=c->r[4]+0x00005D58u; // 802848CC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 802848D0
  c->r[3]=c->r[4]+c->r[0]; // 802848D4
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802848D8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802848DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802848E0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 802848E4
  goto L_80284988; // 802848E8
L_802848EC:;
  {uint32_t ea=c->r[2]+0xFFFF9EFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802848EC
  fcmp(c,0,c->f[1],c->f[0]); // 802848F0
  if (!crb(c,0)) { goto L_80284944; } // 802848F4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 802848F8
  {uint32_t ea=c->r[2]+0xFFFF9EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802848FC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80284900
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 80284904
  c->r[0]=R16(c->r[1]+0x00000014u); // 80284908
  W16(c->r[1]+0x0000000Au,c->r[0]); // 8028490C
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,3);} // 80284910
  c->r[4]=0u+0x80340000u; // 80284914
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80284918
  {uint32_t ea=c->r[2]+0xFFFF9F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028491C
  c->r[4]=c->r[4]+0x00005D58u; // 80284920
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 80284924
  c->r[3]=c->r[4]+c->r[0]; // 80284928
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 8028492C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284930
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80284934
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80284938
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8028493C
  goto L_80284988; // 80284940
L_80284944:;
  c->f[1]=-c->f[1]; // 80284944
  {uint32_t ea=c->r[2]+0xFFFF9EF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284948
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8028494C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,3);} // 80284950
  c->r[0]=R16(c->r[1]+0x00000010u); // 80284954
  W16(c->r[1]+0x00000008u,c->r[0]); // 80284958
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 8028495C
  c->r[4]=0u+0x80340000u; // 80284960
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80284964
  c->r[4]=c->r[4]+0x00005D58u; // 80284968
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8028496C
  c->r[3]=c->r[4]+c->r[0]; // 80284970
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80284974
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284978
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8028497C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80284980
  c->f[1]=-c->f[0]; // 80284984
L_80284988:;
  c->r[1]=c->r[1]+0x00000020u; // 80284988
  return; // 8028498C
}

// MTX33Identity__Q24nw4r4mathFPQ34nw4r4math5MTX33
void f_80284990(Ctx* __restrict c) {
  trace_call(0x80284990u);
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284990
  {uint32_t ea=c->r[2]+0xFFFF9F0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284994
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80284998
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 8028499C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 802849A0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 802849A4
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 802849A8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 802849AC
  return; // 802849B0
}

// MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_802849B4(Ctx* __restrict c) {
  trace_call(0x802849B4u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 802849B4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 802849B8
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 802849BC
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 802849C0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,0,0);} // 802849C4
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,5,ea,0,0);} // 802849C8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802849CC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 802849D0
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,2,ea,0,0);} // 802849D4
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,3,ea,1,0);} // 802849D8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,4,ea,0,0);} // 802849DC
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,1,0);} // 802849E0
  return; // 802849E4
}

// MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
void f_802849E8(Ctx* __restrict c) {
  trace_call(0x802849E8u);
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 802849E8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802849EC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 802849F0
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 802849F4
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 802849F8
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 802849FC
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 80284A00
  return; // 80284A04
}

// MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_80284A08(Ctx* __restrict c) {
  trace_call(0x80284A08u);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 80284A08
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80284A0C
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 80284A10
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,5,ea,0,0);} // 80284A14
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 80284A18
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 80284A1C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 80284A20
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 80284A24
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 80284A28
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,0,ea,0,0);} // 80284A2C
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,6,ea,0,0);} // 80284A30
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 80284A34
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 80284A38
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80284A3C
  {double t0=S(c->f[6]*c->f[1]), t1=S(c->ps1[6]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 80284A40
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,4,ea,0,0);} // 80284A44
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,0,0);} // 80284A48
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80284A4C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,0,0);} // 80284A50
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,6,ea,0,0);} // 80284A54
  return; // 80284A58
}

// MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_80284A5C(Ctx* __restrict c) {
  trace_call(0x80284A5Cu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80284A5C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 80284A60
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 80284A64
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 80284A68
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80284A6C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 80284A70
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,5,ea,0,0);} // 80284A74
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 80284A78
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,6,ea,0,0);} // 80284A7C
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80284A80
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,7,ea,0,0);} // 80284A84
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,0,0);} // 80284A88
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 80284A8C
  {double t0=S(std::fma(c->f[5],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 80284A90
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,5,ea,0,0);} // 80284A94
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80284A98
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,10,ea,1,0);} // 80284A9C
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 80284AA0
  {double t0=S(std::fma(c->f[7],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[7],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 80284AA4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,7,ea,0,0);} // 80284AA8
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,10,ea,1,0);} // 80284AAC
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 80284AB0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 80284AB4
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,4,ea,0,0);} // 80284AB8
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,6,ea,0,0);} // 80284ABC
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,10,ea,1,0);} // 80284AC0
  return; // 80284AC4
}

// MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f
void f_80284AC8(Ctx* __restrict c) {
  trace_call(0x80284AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284AC8
  c->r[0]=c->lr; // 80284ACC
  {uint32_t ea=c->r[2]+0xFFFF9F10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284AD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80284AD4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80284AD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80284ADC
  c->r[31]=c->r[3]|c->r[3]; // 80284AE0
  c->lr=0x80284AE8u; f_80168530(c); // 80284AE4
  c->r[3]=c->r[31]|c->r[31]; // 80284AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80284AEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80284AF0
  c->lr=c->r[0]; // 80284AF4
  c->r[1]=c->r[1]+0x00000010u; // 80284AF8
  return; // 80284AFC
}

// fn_80284B00
void f_80284B00(Ctx* __restrict c) {
  c->r[4]=0u+0x80310000u; // 80284B00
  c->r[0]=c->r[2]+0xFFFF9F18u; // 80284B04
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284B08
  c->r[4]=c->r[4]+0xFFFF8750u; // 80284B0C
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 80284B10
  {double t0=S(c->f[1]), t1=S(c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 80284B14
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80284B18
  {double t0=std::fabs(c->f[6]), t1=std::fabs(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 80284B1C
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 80284B20
  {double t0=S(c->f[0]-c->f[0]), t1=S(c->ps1[0]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 80284B24
  fcmp(c,0,c->f[4],c->f[0]); // 80284B28
  if (!crb(c,1)) { goto L_80284B3C; } // 80284B2C
L_80284B30:;
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80284B30
  fcmp(c,0,c->f[4],c->f[0]); // 80284B34
  if (crb(c,1)) { IRQCHK(c); goto L_80284B30; } // 80284B38
L_80284B3C:;
  fcmp(c,0,c->ps1[4],c->ps1[0]); // 80284B3C
  if (!crb(c,1)) { goto L_80284B58; } // 80284B40
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80284B44
L_80284B48:;
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80284B48
  fcmp(c,0,c->f[4],c->f[0]); // 80284B4C
  if (crb(c,1)) { IRQCHK(c); goto L_80284B48; } // 80284B50
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80284B54
L_80284B58:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,4,ea,0,3);} // 80284B58
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,0,3);} // 80284B5C
  c->f[5]=std::fabs(c->f[3]); // 80284B60
  c->r[0]=R32(c->r[1]+0x00000008u); // 80284B64
  fcmp(c,0,c->f[5],c->f[0]); // 80284B68
  if (!crb(c,1)) { goto L_80284B7C; } // 80284B6C
L_80284B70:;
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 80284B70
  fcmp(c,0,c->f[5],c->f[0]); // 80284B74
  if (crb(c,1)) { IRQCHK(c); goto L_80284B70; } // 80284B78
L_80284B7C:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,5,ea,1,3);} // 80284B7C
  c->r[5]=rotl(c->r[0],20)&0x00000FF0u; // 80284B80
  c->r[5]=c->r[4]+c->r[5]; // 80284B84
  {double t0=S(c->f[4]-c->f[7]), t1=S(c->ps1[4]-c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 80284B88
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 80284B8C
  c->r[6]=rotl(c->r[0],4)&0x00000FF0u; // 80284B90
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,8,ea,0,0);} // 80284B94
  fcmp(c,0,c->f[6],c->f[2]); // 80284B98
  c->r[6]=c->r[4]+c->r[6]; // 80284B9C
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->f[7],c->ps1[4])); c->f[0]=t0; c->ps1[0]=t1;} // 80284BA0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,4,ea,0,0);} // 80284BA4
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,8,ea,0,0);} // 80284BA8
  c->r[0]=R16(c->r[1]+0x00000008u); // 80284BAC
  if (!crb(c,0)) { goto L_80284BBC; } // 80284BB0
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 80284BB4
  {double t0=S(c->f[9]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80284BB8
L_80284BBC:;
  {double t0=S(std::fma(c->f[8],c->ps1[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->ps1[7],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 80284BBC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,1,3);} // 80284BC0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80284BC4
  fcmp(c,0,c->ps1[6],c->ps1[2]); // 80284BC8
  c->r[5]=c->r[4]+c->r[0]; // 80284BCC
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 80284BD0
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 80284BD4
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,8,ea,0,0);} // 80284BD8
  if (!crb(c,0)) { goto L_80284BE8; } // 80284BDC
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[9]=t0; c->ps1[9]=t1;} // 80284BE0
  {double t0=S(c->f[9]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80284BE4
L_80284BE8:;
  fcmp(c,0,c->f[3],c->f[2]); // 80284BE8
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->f[7],c->ps1[4])); c->f[2]=t0; c->ps1[2]=t1;} // 80284BEC
  if (!crb(c,0)) { goto L_80284BFC; } // 80284BF0
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[9]=t0; c->ps1[9]=t1;} // 80284BF4
  {double t0=S(c->f[9]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80284BF8
L_80284BFC:;
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 80284BFC
  {double t0=S(c->f[2]*c->ps1[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 80284C00
  {double t0=S(c->f[0]-c->f[0]), t1=S(c->ps1[0]-c->ps1[0]); c->f[7]=t0; c->ps1[7]=t1;} // 80284C04
  {double t0=S(c->ps1[3]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80284C08
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[6]=t0; c->ps1[6]=t1;} // 80284C0C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 80284C10
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 80284C14
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->f[2]); c->f[8]=t0; c->ps1[8]=t1;} // 80284C18
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,6,ea,1,0);} // 80284C1C
  {double t0=S(c->f[0]*c->ps1[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 80284C20
  {double t0=S(c->f[3]*c->ps1[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80284C24
  {double t0=S(std::fma(c->f[6],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[6],c->f[1],c->ps1[8])); c->f[6]=t0; c->ps1[6]=t1;} // 80284C28
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 80284C2C
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,6,ea,0,0);} // 80284C30
  {double t0=S(c->f[7]), t1=S(c->f[5]); c->f[6]=t0; c->ps1[6]=t1;} // 80284C34
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,6,ea,0,0);} // 80284C38
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[2])); c->f[6]=t0; c->ps1[6]=t1;} // 80284C3C
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,6,ea,0,0);} // 80284C40
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[6]=t0; c->ps1[6]=t1;} // 80284C44
  {double t0=S(c->f[7]), t1=S(c->f[6]); c->f[6]=t0; c->ps1[6]=t1;} // 80284C48
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,6,ea,0,0);} // 80284C4C
  {double t0=S(c->f[0]*c->ps1[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 80284C50
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,6,ea,0,0);} // 80284C54
  c->r[1]=c->r[1]+0x00000010u; // 80284C58
  return; // 80284C5C
}

// VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_80284C60(Ctx* __restrict c) {
  trace_call(0x80284C60u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80284C60
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284C64
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284C68
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 80284C6C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284C70
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[2]); // 80284C74
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80284C78
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 80284C7C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 80284C80
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284C84
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[5]); // 80284C88
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284C8C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 80284C90
  {uint32_t ea=c->r[4]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 80284C94
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[5]); // 80284C98
  {uint32_t ea=c->r[5]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 80284C9C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 80284CA0
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 80284CA4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284CA8
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 80284CAC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80284CB0
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284CB4
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 80284CB8
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[6]); // 80284CBC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 80284CC0
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 80284CC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80284CC8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 80284CCC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80284CD0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80284CD4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 80284CD8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80284CDC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 80284CE0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80284CE4
  c->r[1]=c->r[1]+0x00000020u; // 80284CE8
  return; // 80284CEC
}

// MTX44Identity__Q24nw4r4mathFPQ34nw4r4math5MTX44
void f_80284CF0(Ctx* __restrict c) {
  trace_call(0x80284CF0u);
  {uint32_t ea=c->r[2]+0xFFFF9F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284CF0
  {uint32_t ea=c->r[2]+0xFFFF9F0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284CF4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80284CF8
  {double t0=S(c->f[0]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80284CFC
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80284D00
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80284D04
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80284D08
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 80284D0C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 80284D10
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 80284D14
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 80284D18
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,2,ea,0,0);} // 80284D1C
  return; // 80284D20
}

// MTX44Copy__Q24nw4r4mathFPQ34nw4r4math5MTX44PCQ34nw4r4math5MTX44
void f_80284D24(Ctx* __restrict c) {
  trace_call(0x80284D24u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 80284D24
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 80284D28
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 80284D2C
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 80284D30
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,0,0);} // 80284D34
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,5,ea,0,0);} // 80284D38
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,6,ea,0,0);} // 80284D3C
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,7,ea,0,0);} // 80284D40
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80284D44
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 80284D48
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 80284D4C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 80284D50
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,0,0);} // 80284D54
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,5,ea,0,0);} // 80284D58
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,6,ea,0,0);} // 80284D5C
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,7,ea,0,0);} // 80284D60
  return; // 80284D64
}

// fn_80284D68
void f_80284D68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284D68
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80284D6C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80284D70
  {uint32_t ea=c->r[5]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 80284D74
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284D78
  {uint32_t ea=c->r[5]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 80284D7C
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284D80
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[12]); // 80284D84
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284D88
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[9]); // 80284D8C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 80284D90
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80284D94
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80284D98
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 80284D9C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80284DA0
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80284DA4
  c->f[11]=c->ps1[11]=S(c->f[5]*c->f[12]); // 80284DA8
  c->f[10]=c->ps1[10]=S(c->f[4]*c->f[9]); // 80284DAC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 80284DB0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80284DB4
  {uint32_t ea=c->r[2]+0xFFFF9F0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284DB8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 80284DBC
  c->f[7]=c->ps1[7]=S(c->f[6]*c->f[12]); // 80284DC0
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[3]); // 80284DC4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80284DC8
  c->f[10]=c->ps1[10]=S(c->f[11]+c->f[10]); // 80284DCC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80284DD0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 80284DD4
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[31]); // 80284DD8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284DDC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[13]=c->ps1[13]=RF32(ea);} // 80284DE0
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284DE4
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[9]); // 80284DE8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80284DEC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 80284DF0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 80284DF4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 80284DF8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80284DFC
  c->f[12]=c->ps1[12]=S(c->f[13]*c->f[0]); // 80284E00
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 80284E04
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80284E08
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[2]); // 80284E0C
  c->f[7]=c->ps1[7]=S(c->f[12]+c->f[10]); // 80284E10
  c->f[3]=c->ps1[3]=S(c->f[8]+c->f[6]); // 80284E14
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[0]); // 80284E18
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 80284E1C
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 80284E20
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 80284E24
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[7]); // 80284E28
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 80284E2C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[3]); // 80284E30
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80284E34
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80284E38
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[2]); // 80284E3C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80284E40
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80284E44
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80284E48
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80284E4C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80284E50
  c->r[1]=c->r[1]+0x00000030u; // 80284E54
  return; // 80284E58
}

// fn_80284E5C
void f_80284E5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80284E5C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80284E60
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80284E64
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80284E68
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80284E6C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 80284E70
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 80284E74
  c->r[7]=c->r[3]|c->r[3]; // 80284E78
  {uint32_t ea=c->r[2]+0xFFFF9F0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80284E7C
  c->ctr=c->r[6]; // 80284E80
  cmpu(c,0,c->r[6],0x00000000u); // 80284E84
  if (!crb(c,1)) { goto L_80284F6C; } // 80284E88
L_80284E8C:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80284E8C
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284E90
  {uint32_t ea=c->r[5]+0x00000004u; c->f[12]=c->ps1[12]=RF32(ea);} // 80284E94
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284E98
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[31]); // 80284E9C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284EA0
  c->r[5]=c->r[5]+0x0000000Cu; // 80284EA4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[12]); // 80284EA8
  {uint32_t ea=c->r[4]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 80284EAC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 80284EB0
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80284EB4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 80284EB8
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 80284EBC
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284EC0
  c->f[13]=c->ps1[13]=S(c->f[6]*c->f[31]); // 80284EC4
  c->f[11]=c->ps1[11]=S(c->f[5]*c->f[12]); // 80284EC8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80284ECC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 80284ED0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 80284ED4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 80284ED8
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[31]); // 80284EDC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 80284EE0
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[12]); // 80284EE4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80284EE8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80284EEC
  c->f[30]=c->ps1[30]=S(c->f[6]*c->f[0]); // 80284EF0
  c->f[29]=c->ps1[29]=S(c->f[2]/c->f[1]); // 80284EF4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 80284EF8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 80284EFC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80284F00
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80284F04
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80284F08
  c->f[11]=c->ps1[11]=S(c->f[13]+c->f[11]); // 80284F0C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[31]); // 80284F10
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[12]); // 80284F14
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 80284F18
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 80284F1C
  c->f[11]=c->ps1[11]=S(c->f[30]+c->f[11]); // 80284F20
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80284F24
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 80284F28
  c->f[8]=c->ps1[8]=S(c->f[10]+c->f[11]); // 80284F2C
  c->f[4]=c->ps1[4]=S(c->f[9]+c->f[7]); // 80284F30
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 80284F34
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[8]); // 80284F38
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[8]);} // 80284F3C
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 80284F40
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[3]); // 80284F44
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 80284F48
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[4]); // 80284F4C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[3]); // 80284F50
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 80284F54
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 80284F58
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 80284F5C
  c->r[7]=c->r[7]+0x0000000Cu; // 80284F60
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80284F64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80284E8C; } // 80284F68
L_80284F6C:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80284F6C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80284F70
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80284F74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80284F78
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 80284F7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 80284F80
  c->r[1]=c->r[1]+0x00000050u; // 80284F84
  return; // 80284F88
}

// fn_80284F8C
void f_80284F8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80284F8C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80284F90
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284F94
  c->r[6]=c->r[4]+0x0000000Cu; // 80284F98
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284F9C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 80284FA0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80284FA4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80284FA8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 80284FAC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80284FB0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80284FB4
  c->ctr=c->r[0]; // 80284FB8
  cmpu(c,0,c->r[5],0x00000001u); // 80284FBC
  if (!crb(c,1)) return; // 80284FC0
L_80284FC4:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284FC4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284FC8
  fcmp(c,0,c->f[1],c->f[0]); // 80284FCC
  if (!crb(c,0)) { goto L_80284FDC; } // 80284FD0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80284FD4
  goto L_80284FEC; // 80284FD8
L_80284FDC:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80284FDC
  fcmp(c,0,c->f[1],c->f[0]); // 80284FE0
  if (!crb(c,1)) { goto L_80284FEC; } // 80284FE4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80284FE8
L_80284FEC:;
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80284FEC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80284FF0
  fcmp(c,0,c->f[1],c->f[0]); // 80284FF4
  if (!crb(c,0)) { goto L_80285004; } // 80284FF8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80284FFC
  goto L_80285014; // 80285000
L_80285004:;
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285004
  fcmp(c,0,c->f[1],c->f[0]); // 80285008
  if (!crb(c,1)) { goto L_80285014; } // 8028500C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80285010
L_80285014:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285014
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285018
  fcmp(c,0,c->f[1],c->f[0]); // 8028501C
  if (!crb(c,0)) { goto L_8028502C; } // 80285020
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80285024
  goto L_8028503C; // 80285028
L_8028502C:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028502C
  fcmp(c,0,c->f[1],c->f[0]); // 80285030
  if (!crb(c,1)) { goto L_8028503C; } // 80285034
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80285038
L_8028503C:;
  c->r[6]=c->r[6]+0x0000000Cu; // 8028503C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80284FC4; } // 80285040
  return; // 80285044
}

// fn_80285048
void f_80285048(Ctx* __restrict c) {
  {uint32_t ea=c->r[5]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80285048
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028504C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80285050
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 80285054
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80285058
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 8028505C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 80285060
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 80285064
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[3]); // 80285068
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 8028506C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 80285070
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80285074
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[6]); // 80285078
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8028507C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285080
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80285084
  fcmp(c,0,c->f[0],c->f[2]); // 80285088
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[5]); // 8028508C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80285090
  if (!crb(c,1)) { goto L_802850A4; } // 80285094
  c->f[1]=c->f[0]; // 80285098
  c->f[0]=c->f[2]; // 8028509C
  c->f[2]=c->f[1]; // 802850A0
L_802850A4:;
  fcmp(c,0,c->f[6],c->f[5]); // 802850A4
  if (!crb(c,0)) { goto L_802850B8; } // 802850A8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 802850AC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[5]); // 802850B0
  goto L_802850C0; // 802850B4
L_802850B8:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 802850B8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 802850BC
L_802850C0:;
  fcmp(c,0,c->f[3],c->f[4]); // 802850C0
  if (!crb(c,0)) { goto L_802850D4; } // 802850C4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 802850C8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 802850CC
  goto L_802850DC; // 802850D0
L_802850D4:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 802850D4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802850D8
L_802850DC:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 802850DC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802850E0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802850E4
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[3]); // 802850E8
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802850EC
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[1]); // 802850F0
  {uint32_t ea=c->r[5]+0x00000014u; c->f[9]=c->ps1[9]=RF32(ea);} // 802850F4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 802850F8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 802850FC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80285100
  {uint32_t ea=c->r[4]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 80285104
  {uint32_t ea=c->r[5]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 80285108
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 8028510C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80285110
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 80285114
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 80285118
  fcmp(c,0,c->f[1],c->f[3]); // 8028511C
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 80285120
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[4]); // 80285124
  if (!crb(c,1)) { goto L_80285138; } // 80285128
  c->f[4]=c->f[1]; // 8028512C
  c->f[1]=c->f[3]; // 80285130
  c->f[3]=c->f[4]; // 80285134
L_80285138:;
  fcmp(c,0,c->f[8],c->f[7]); // 80285138
  if (!crb(c,0)) { goto L_8028514C; } // 8028513C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[8]); // 80285140
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[7]); // 80285144
  goto L_80285154; // 80285148
L_8028514C:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[7]); // 8028514C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[8]); // 80285150
L_80285154:;
  fcmp(c,0,c->f[5],c->f[6]); // 80285154
  if (!crb(c,0)) { goto L_80285168; } // 80285158
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 8028515C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[6]); // 80285160
  goto L_80285170; // 80285164
L_80285168:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[6]); // 80285168
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 8028516C
L_80285170:;
  {uint32_t ea=c->r[5]+0x00000020u; c->f[7]=c->ps1[7]=RF32(ea);} // 80285170
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80285174
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80285178
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[5]); // 8028517C
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80285180
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[4]); // 80285184
  {uint32_t ea=c->r[5]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 80285188
  {uint32_t ea=c->r[4]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8028518C
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[6]); // 80285190
  c->f[11]=c->ps1[11]=S(c->f[5]+c->f[4]); // 80285194
  {uint32_t ea=c->r[4]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 80285198
  {uint32_t ea=c->r[5]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 8028519C
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 802851A0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802851A4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 802851A8
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 802851AC
  fcmp(c,0,c->f[10],c->f[11]); // 802851B0
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 802851B4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[4]); // 802851B8
  if (!crb(c,1)) { goto L_802851CC; } // 802851BC
  c->f[4]=c->f[10]; // 802851C0
  c->f[10]=c->f[11]; // 802851C4
  c->f[11]=c->f[4]; // 802851C8
L_802851CC:;
  fcmp(c,0,c->f[8],c->f[7]); // 802851CC
  if (!crb(c,0)) { goto L_802851E0; } // 802851D0
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 802851D4
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[7]); // 802851D8
  goto L_802851E8; // 802851DC
L_802851E0:;
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[7]); // 802851E0
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[8]); // 802851E4
L_802851E8:;
  fcmp(c,0,c->f[5],c->f[6]); // 802851E8
  if (!crb(c,0)) { goto L_802851FC; } // 802851EC
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[5]); // 802851F0
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[6]); // 802851F4
  goto L_80285204; // 802851F8
L_802851FC:;
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[6]); // 802851FC
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[5]); // 80285200
L_80285204:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80285204
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80285208
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[10]);} // 8028520C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 80285210
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 80285214
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[11]);} // 80285218
  return; // 8028521C
}

// fn_80285220
void f_80285220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285220
  c->r[0]=c->lr; // 80285224
  W32(c->r[1]+0x00000044u,c->r[0]); // 80285228
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8028522C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80285230
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80285234
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 80285238
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 8028523C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 80285240
  c->f[29]=c->f[2]; // 80285244
  {uint32_t ea=c->r[2]+0xFFFF9F20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285248
  c->f[30]=c->f[3]; // 8028524C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80285250
  c->f[31]=c->f[4]; // 80285254
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80285258
  {uint32_t ea=c->r[2]+0xFFFF9F2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8028525C
  c->r[31]=c->r[4]|c->r[4]; // 80285260
  W32(c->r[1]+0x00000008u,c->r[30]); // 80285264
  c->r[30]=c->r[3]|c->r[3]; // 80285268
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8028526C
  {uint32_t ea=c->r[2]+0xFFFF9F28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285270
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80285274
  c->lr=0x8028527Cu; f_80196850(c); // 80285278
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8028527C
  c->r[3]=c->r[30]|c->r[30]; // 80285280
  c->f[5]=c->f[30]; // 80285284
  c->r[4]=c->r[31]|c->r[31]; // 80285288
  c->f[6]=c->f[31]; // 8028528C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 80285290
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[29]); // 80285294
  c->f[2]=-c->f[1]; // 80285298
  c->f[3]=-c->f[4]; // 8028529C
  c->lr=0x802852A4u; f_802852D4(c); // 802852A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802852A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802852A8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 802852AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 802852B0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 802852B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 802852B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802852BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 802852C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802852C4
  c->lr=c->r[0]; // 802852C8
  c->r[1]=c->r[1]+0x00000040u; // 802852CC
  return; // 802852D0
}

// fn_802852D4
void f_802852D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802852D4
  c->r[0]=c->lr; // 802852D8
  W32(c->r[1]+0x00000294u,c->r[0]); // 802852DC
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[31]);} // 802852E0
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,31,ea,0,0);} // 802852E4
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[30]);} // 802852E8
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,30,ea,0,0);} // 802852EC
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[29]);} // 802852F0
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,29,ea,0,0);} // 802852F4
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[28]);} // 802852F8
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,28,ea,0,0);} // 802852FC
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[27]);} // 80285300
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,27,ea,0,0);} // 80285304
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[26]);} // 80285308
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,26,ea,0,0);} // 8028530C
  c->r[11]=c->r[1]+0x00000230u; // 80285310
  c->lr=0x80285318u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80285314
  c->f[26]=c->f[1]; // 80285318
  c->r[28]=c->r[4]|c->r[4]; // 8028531C
  c->f[27]=c->f[2]; // 80285320
  c->r[27]=c->r[3]|c->r[3]; // 80285324
  c->f[28]=c->f[3]; // 80285328
  c->r[3]=c->r[28]|c->r[28]; // 8028532C
  c->f[29]=c->f[4]; // 80285330
  c->r[4]=c->r[1]+0x00000180u; // 80285334
  c->f[30]=c->f[5]; // 80285338
  c->f[31]=c->f[6]; // 8028533C
  c->lr=0x80285344u; f_8016825C(c); // 80285340
  c->r[3]=c->r[28]|c->r[28]; // 80285344
  c->r[4]=c->r[27]|c->r[27]; // 80285348
  c->lr=0x80285350u; f_80167FC4(c); // 8028534C
  c->f[6]=c->ps1[6]=S(c->f[31]/c->f[30]); // 80285350
  {uint32_t ea=c->r[2]+0xFFFF9F24u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285354
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[28]);} // 80285358
  c->r[29]=c->r[1]+0x000001B0u; // 8028535C
  c->r[3]=c->r[1]+0x0000014Cu; // 80285360
  c->r[4]=c->r[1]+0x00000158u; // 80285364
  c->f[5]=-c->f[30]; // 80285368
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 8028536C
  c->f[2]=-c->f[31]; // 80285370
  c->r[31]=c->r[27]+0x00000030u; // 80285374
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[28]); // 80285378
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[0]);} // 8028537C
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[26]); // 80285380
  {uint32_t ea=c->r[1]+0x00000178u; WF32(ea,c->f[0]);} // 80285384
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[29]); // 80285388
  c->r[5]=c->r[1]+0x00000164u; // 8028538C
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[27]); // 80285390
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[26]);} // 80285394
  {uint32_t ea=c->r[1]+0x000001B8u; WF32(ea,c->f[5]);} // 80285398
  {uint32_t ea=c->r[1]+0x000001BCu; WF32(ea,c->f[29]);} // 8028539C
  {uint32_t ea=c->r[1]+0x000001C0u; WF32(ea,c->f[26]);} // 802853A0
  {uint32_t ea=c->r[1]+0x000001C4u; WF32(ea,c->f[5]);} // 802853A4
  {uint32_t ea=c->r[1]+0x000001C8u; WF32(ea,c->f[29]);} // 802853A8
  {uint32_t ea=c->r[1]+0x000001CCu; WF32(ea,c->f[27]);} // 802853AC
  {uint32_t ea=c->r[1]+0x000001D0u; WF32(ea,c->f[5]);} // 802853B0
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[28]);} // 802853B4
  {uint32_t ea=c->r[1]+0x000001D8u; WF32(ea,c->f[27]);} // 802853B8
  {uint32_t ea=c->r[1]+0x000001DCu; WF32(ea,c->f[5]);} // 802853BC
  {uint32_t ea=c->r[1]+0x000001E0u; WF32(ea,c->f[4]);} // 802853C0
  {uint32_t ea=c->r[1]+0x000001E4u; WF32(ea,c->f[3]);} // 802853C4
  {uint32_t ea=c->r[1]+0x000001E8u; WF32(ea,c->f[2]);} // 802853C8
  {uint32_t ea=c->r[1]+0x000001ECu; WF32(ea,c->f[1]);} // 802853CC
  {uint32_t ea=c->r[1]+0x000001F0u; WF32(ea,c->f[3]);} // 802853D0
  {uint32_t ea=c->r[1]+0x000001F4u; WF32(ea,c->f[2]);} // 802853D4
  {uint32_t ea=c->r[1]+0x000001F8u; WF32(ea,c->f[1]);} // 802853D8
  {uint32_t ea=c->r[1]+0x000001FCu; WF32(ea,c->f[0]);} // 802853DC
  {uint32_t ea=c->r[1]+0x00000200u; WF32(ea,c->f[2]);} // 802853E0
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[4]);} // 802853E4
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[0]);} // 802853E8
  {uint32_t ea=c->r[1]+0x0000020Cu; WF32(ea,c->f[2]);} // 802853EC
  {uint32_t ea=c->r[27]+0x00000070u; WF32(ea,c->f[5]);} // 802853F0
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[2]);} // 802853F4
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 802853F8
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 802853FC
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 80285400
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,0,ea,0,0);} // 80285404
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285408
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,1,0);} // 8028540C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 80285410
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285414
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 80285418
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8028541C
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,0,ea,1,0);} // 80285420
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80285424
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80285428
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 8028542C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 80285430
  c->lr=0x80285438u; f_80168EB4(c); // 80285434
  c->r[4]=c->r[31]|c->r[31]; // 80285438
  c->r[3]=c->r[1]+0x00000164u; // 8028543C
  c->lr=0x80285444u; f_80168E0C(c); // 80285440
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285444
  c->r[3]=c->r[1]+0x00000128u; // 80285448
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 8028544C
  c->r[4]=c->r[1]+0x00000134u; // 80285450
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 80285454
  c->r[30]=c->r[27]+0x00000040u; // 80285458
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8028545C
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 80285460
  c->r[5]=c->r[1]+0x00000140u; // 80285464
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80285468
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8028546C
  c->f[0]=-c->f[0]; // 80285470
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285474
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 80285478
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 8028547C
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 80285480
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 80285484
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285488
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 8028548C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 80285490
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285494
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 80285498
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 8028549C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802854A0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 802854A4
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802854A8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 802854AC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 802854B0
  c->lr=0x802854B8u; f_80168EB4(c); // 802854B4
  c->r[4]=c->r[30]|c->r[30]; // 802854B8
  c->r[3]=c->r[1]+0x00000140u; // 802854BC
  c->lr=0x802854C4u; f_80168E0C(c); // 802854C0
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 802854C4
  c->r[3]=c->r[1]+0x00000104u; // 802854C8
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 802854CC
  c->r[4]=c->r[1]+0x00000110u; // 802854D0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 802854D4
  c->r[31]=c->r[27]+0x00000050u; // 802854D8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802854DC
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 802854E0
  c->r[5]=c->r[1]+0x0000011Cu; // 802854E4
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 802854E8
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802854EC
  c->f[0]=-c->f[0]; // 802854F0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802854F4
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 802854F8
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,2,ea,0,0);} // 802854FC
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 80285500
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 80285504
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285508
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,2,ea,1,0);} // 8028550C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 80285510
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285514
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,0,ea,1,0);} // 80285518
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 8028551C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285520
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80285524
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80285528
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 8028552C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 80285530
  c->lr=0x80285538u; f_80168EB4(c); // 80285534
  c->r[4]=c->r[31]|c->r[31]; // 80285538
  c->r[3]=c->r[1]+0x0000011Cu; // 8028553C
  c->lr=0x80285544u; f_80168E0C(c); // 80285540
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285544
  c->r[3]=c->r[1]+0x000000E0u; // 80285548
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 8028554C
  c->r[4]=c->r[1]+0x000000ECu; // 80285550
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 80285554
  c->r[30]=c->r[27]+0x00000060u; // 80285558
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8028555C
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 80285560
  c->r[5]=c->r[1]+0x000000F8u; // 80285564
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80285568
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8028556C
  c->f[0]=-c->f[0]; // 80285570
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285574
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 80285578
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,2,ea,0,0);} // 8028557C
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 80285580
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,0,ea,0,0);} // 80285584
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285588
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,2,ea,1,0);} // 8028558C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 80285590
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285594
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,0,ea,1,0);} // 80285598
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 8028559C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802855A0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 802855A4
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802855A8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 802855AC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 802855B0
  c->lr=0x802855B8u; f_80168EB4(c); // 802855B4
  c->r[4]=c->r[30]|c->r[30]; // 802855B8
  c->r[3]=c->r[1]+0x000000F8u; // 802855BC
  c->lr=0x802855C4u; f_80168E0C(c); // 802855C0
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 802855C4
  c->r[31]=c->r[29]|c->r[29]; // 802855C8
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 802855CC
  c->r[28]=0u+0x00000000u; // 802855D0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 802855D4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802855D8
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 802855DC
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 802855E0
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802855E4
  c->f[0]=-c->f[0]; // 802855E8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802855EC
L_802855F0:;
  c->r[4]=c->r[31]|c->r[31]; // 802855F0
  c->r[5]=c->r[29]|c->r[29]; // 802855F4
  c->r[3]=c->r[1]+0x00000180u; // 802855F8
  c->lr=0x80285600u; f_80168AE8(c); // 802855FC
  c->r[28]=c->r[28]+0x00000001u; // 80285600
  c->r[31]=c->r[31]+0x0000000Cu; // 80285604
  cmps(c,0,(int32_t)c->r[28],8); // 80285608
  c->r[29]=c->r[29]+0x0000000Cu; // 8028560C
  if (crb(c,0)) { IRQCHK(c); goto L_802855F0; } // 80285610
  c->r[4]=c->r[1]+0x00000170u; // 80285614
  c->r[3]=c->r[1]+0x00000180u; // 80285618
  c->r[5]=c->r[4]|c->r[4]; // 8028561C
  c->lr=0x80285624u; f_80168AE8(c); // 80285620
  c->r[3]=c->r[27]+0x00000078u; // 80285624
  c->r[4]=c->r[1]+0x000001B0u; // 80285628
  c->r[5]=0u+0x00000008u; // 8028562C
  c->lr=0x80285634u; f_80284F8C(c); // 80285630
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 80285634
  c->r[3]=c->r[1]+0x000000BCu; // 80285638
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,2,ea,0,0);} // 8028563C
  c->r[4]=c->r[1]+0x000000C8u; // 80285640
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 80285644
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,0,ea,0,0);} // 80285648
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8028564C
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,2,ea,1,0);} // 80285650
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 80285654
  c->r[30]=c->r[27]+0x00000090u; // 80285658
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8028565C
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,0,ea,1,0);} // 80285660
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 80285664
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285668
  c->r[5]=c->r[1]+0x000000D4u; // 8028566C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80285670
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80285674
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 80285678
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 8028567C
  c->lr=0x80285684u; f_80168EB4(c); // 80285680
  c->r[4]=c->r[30]|c->r[30]; // 80285684
  c->r[3]=c->r[1]+0x000000D4u; // 80285688
  c->lr=0x80285690u; f_80168E0C(c); // 8028568C
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285690
  c->r[3]=c->r[1]+0x00000098u; // 80285694
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 80285698
  c->r[4]=c->r[1]+0x000000A4u; // 8028569C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 802856A0
  c->r[31]=c->r[27]+0x000000A0u; // 802856A4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802856A8
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 802856AC
  c->r[5]=c->r[1]+0x000000B0u; // 802856B0
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 802856B4
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802856B8
  c->f[0]=-c->f[0]; // 802856BC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802856C0
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 802856C4
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 802856C8
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 802856CC
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 802856D0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802856D4
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 802856D8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 802856DC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802856E0
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 802856E4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 802856E8
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802856EC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 802856F0
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802856F4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 802856F8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 802856FC
  c->lr=0x80285704u; f_80168EB4(c); // 80285700
  c->r[4]=c->r[31]|c->r[31]; // 80285704
  c->r[3]=c->r[1]+0x000000B0u; // 80285708
  c->lr=0x80285710u; f_80168E0C(c); // 8028570C
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285710
  c->r[3]=c->r[1]+0x00000074u; // 80285714
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 80285718
  c->r[4]=c->r[1]+0x00000080u; // 8028571C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 80285720
  c->r[30]=c->r[27]+0x000000B0u; // 80285724
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80285728
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 8028572C
  c->r[5]=c->r[1]+0x0000008Cu; // 80285730
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80285734
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80285738
  c->f[0]=-c->f[0]; // 8028573C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285740
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,3,ea,0,0);} // 80285744
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 80285748
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 8028574C
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 80285750
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285754
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 80285758
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,3,ea,1,0);} // 8028575C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285760
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 80285764
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 80285768
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8028576C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80285770
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80285774
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 80285778
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 8028577C
  c->lr=0x80285784u; f_80168EB4(c); // 80285780
  c->r[4]=c->r[30]|c->r[30]; // 80285784
  c->r[3]=c->r[1]+0x0000008Cu; // 80285788
  c->lr=0x80285790u; f_80168E0C(c); // 8028578C
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285790
  c->r[3]=c->r[1]+0x00000050u; // 80285794
  {uint32_t ea=c->r[1]+0x000001B4u; psq_load(c,1,ea,0,0);} // 80285798
  c->r[4]=c->r[1]+0x0000005Cu; // 8028579C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 802857A0
  c->r[31]=c->r[27]+0x000000C0u; // 802857A4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802857A8
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,1,ea,1,0);} // 802857AC
  c->r[5]=c->r[1]+0x00000068u; // 802857B0
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 802857B4
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802857B8
  c->f[0]=-c->f[0]; // 802857BC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802857C0
  {uint32_t ea=c->r[1]+0x000001E0u; psq_load(c,3,ea,0,0);} // 802857C4
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,2,ea,0,0);} // 802857C8
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 802857CC
  {uint32_t ea=c->r[1]+0x00000204u; psq_load(c,0,ea,0,0);} // 802857D0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802857D4
  {uint32_t ea=c->r[1]+0x00000200u; psq_load(c,2,ea,1,0);} // 802857D8
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,3,ea,1,0);} // 802857DC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802857E0
  {uint32_t ea=c->r[1]+0x0000020Cu; psq_load(c,0,ea,1,0);} // 802857E4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 802857E8
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802857EC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 802857F0
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802857F4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 802857F8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 802857FC
  c->lr=0x80285804u; f_80168EB4(c); // 80285800
  c->r[4]=c->r[31]|c->r[31]; // 80285804
  c->r[3]=c->r[1]+0x00000068u; // 80285808
  c->lr=0x80285810u; f_80168E0C(c); // 8028580C
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285810
  c->r[3]=c->r[1]+0x0000002Cu; // 80285814
  {uint32_t ea=c->r[1]+0x000001E4u; psq_load(c,1,ea,0,0);} // 80285818
  c->r[4]=c->r[1]+0x00000038u; // 8028581C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 80285820
  c->r[30]=c->r[27]+0x000000D0u; // 80285824
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80285828
  {uint32_t ea=c->r[1]+0x000001E0u; psq_load(c,1,ea,1,0);} // 8028582C
  c->r[5]=c->r[1]+0x00000044u; // 80285830
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80285834
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80285838
  c->f[0]=-c->f[0]; // 8028583C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285840
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 80285844
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,2,ea,0,0);} // 80285848
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 8028584C
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,0,ea,0,0);} // 80285850
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80285854
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,2,ea,1,0);} // 80285858
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 8028585C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285860
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,0,ea,1,0);} // 80285864
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 80285868
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8028586C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80285870
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80285874
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 80285878
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 8028587C
  c->lr=0x80285884u; f_80168EB4(c); // 80285880
  c->r[4]=c->r[30]|c->r[30]; // 80285884
  c->r[3]=c->r[1]+0x00000044u; // 80285888
  c->lr=0x80285890u; f_80168E0C(c); // 8028588C
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285890
  c->r[3]=c->r[1]+0x00000008u; // 80285894
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 80285898
  c->r[4]=c->r[1]+0x00000014u; // 8028589C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 802858A0
  c->r[31]=c->r[27]+0x000000E0u; // 802858A4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802858A8
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 802858AC
  c->r[5]=c->r[1]+0x00000020u; // 802858B0
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 802858B4
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802858B8
  c->f[0]=-c->f[0]; // 802858BC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802858C0
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 802858C4
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,2,ea,0,0);} // 802858C8
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 802858CC
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,0,ea,0,0);} // 802858D0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802858D4
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,2,ea,1,0);} // 802858D8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 802858DC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802858E0
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,0,ea,1,0);} // 802858E4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 802858E8
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 802858EC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 802858F0
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802858F4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 802858F8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 802858FC
  c->lr=0x80285904u; f_80168EB4(c); // 80285900
  c->r[4]=c->r[31]|c->r[31]; // 80285904
  c->r[3]=c->r[1]+0x00000020u; // 80285908
  c->lr=0x80285910u; f_80168E0C(c); // 8028590C
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 80285910
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 80285914
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 80285918
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8028591C
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 80285920
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80285924
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80285928
  c->f[0]=-c->f[0]; // 8028592C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285930
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,31,ea,0,0);} // 80285934
  {uint32_t ea=c->r[1]+0x00000280u; c->f[31]=RF64(ea);} // 80285938
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,30,ea,0,0);} // 8028593C
  {uint32_t ea=c->r[1]+0x00000270u; c->f[30]=RF64(ea);} // 80285940
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,29,ea,0,0);} // 80285944
  {uint32_t ea=c->r[1]+0x00000260u; c->f[29]=RF64(ea);} // 80285948
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,28,ea,0,0);} // 8028594C
  {uint32_t ea=c->r[1]+0x00000250u; c->f[28]=RF64(ea);} // 80285950
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,27,ea,0,0);} // 80285954
  {uint32_t ea=c->r[1]+0x00000240u; c->f[27]=RF64(ea);} // 80285958
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,26,ea,0,0);} // 8028595C
  {uint32_t ea=c->r[1]+0x00000230u; c->f[26]=RF64(ea);} // 80285960
  c->r[11]=c->r[1]+0x00000230u; // 80285964
  c->lr=0x8028596Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80285968
  c->r[0]=R32(c->r[1]+0x00000294u); // 8028596C
  c->lr=c->r[0]; // 80285970
  c->r[1]=c->r[1]+0x00000290u; // 80285974
  return; // 80285978
}

// fn_8028597C
void f_8028597C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028597C
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285980
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285984
  fcmp(c,0,c->f[1],c->f[0]); // 80285988
  if (crb(c,1)) { goto L_802859E0; } // 8028598C
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285990
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80285994
  fcmp(c,0,c->f[1],c->f[0]); // 80285998
  if (crb(c,1)) { goto L_802859E0; } // 8028599C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802859A0
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802859A4
  fcmp(c,0,c->f[1],c->f[0]); // 802859A8
  if (crb(c,1)) { goto L_802859E0; } // 802859AC
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802859B0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802859B4
  fcmp(c,0,c->f[1],c->f[0]); // 802859B8
  if (crb(c,1)) { goto L_802859E0; } // 802859BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802859C0
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802859C4
  fcmp(c,0,c->f[1],c->f[0]); // 802859C8
  if (crb(c,1)) { goto L_802859E0; } // 802859CC
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 802859D0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802859D4
  fcmp(c,0,c->f[1],c->f[0]); // 802859D8
  if (!crb(c,1)) { goto L_802859E8; } // 802859DC
L_802859E0:;
  c->r[0]=0u+0x00000000u; // 802859E0
  goto L_802859EC; // 802859E4
L_802859E8:;
  c->r[0]=0u+0x00000001u; // 802859E8
L_802859EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802859EC
  if (!crb(c,2)) { goto L_802859FC; } // 802859F0
  c->r[3]=0u+0x00000000u; // 802859F4
  goto L_80285B18; // 802859F8
L_802859FC:;
  c->r[0]=0u+0x00000006u; // 802859FC
  c->r[5]=c->r[3]|c->r[3]; // 80285A00
  c->r[6]=c->r[3]+0x00000090u; // 80285A04
  {uint32_t ea=c->r[2]+0xFFFF9F24u; c->f[2]=c->ps1[2]=RF32(ea);} // 80285A08
  c->r[3]=0u+0x00000001u; // 80285A0C
  c->ctr=c->r[0]; // 80285A10
L_80285A14:;
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A14
  fcmp(c,0,c->f[0],c->f[2]); // 80285A18
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80285A1C
  if (!crb(c,2)) { goto L_80285A38; } // 80285A20
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285A24
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A28
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80285A2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80285A30
  goto L_80285A48; // 80285A34
L_80285A38:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80285A38
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A3C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80285A40
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80285A44
L_80285A48:;
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A48
  fcmp(c,0,c->f[0],c->f[2]); // 80285A4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80285A50
  if (!crb(c,2)) { goto L_80285A6C; } // 80285A54
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285A58
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80285A60
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285A64
  goto L_80285A7C; // 80285A68
L_80285A6C:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285A6C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80285A74
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285A78
L_80285A7C:;
  {uint32_t ea=c->r[5]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A7C
  fcmp(c,0,c->f[0],c->f[2]); // 80285A80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80285A84
  if (!crb(c,2)) { goto L_80285AA0; } // 80285A88
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285A8C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285A90
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80285A94
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80285A98
  goto L_80285AB0; // 80285A9C
L_80285AA0:;
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80285AA0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285AA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80285AA8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80285AAC
L_80285AB0:;
  {uint32_t ea=c->r[6]+0x00000004u; psq_load(c,1,ea,0,0);} // 80285AB0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,3,ea,0,0);} // 80285AB4
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,4,ea,1,0);} // 80285AB8
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80285ABC
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,3,ea,1,0);} // 80285AC0
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80285AC4
  {double t0=S(std::fma(c->f[4],c->f[3],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 80285AC8
  {double t0=S(c->f[3]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285ACC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80285AD0
  fcmp(c,0,c->f[1],c->f[2]); // 80285AD4
  if (!crb(c,1)) { goto L_80285AE4; } // 80285AD8
  c->r[3]=0u+0x00000000u; // 80285ADC
  goto L_80285B18; // 80285AE0
L_80285AE4:;
  {uint32_t ea=c->r[6]+0x00000004u; psq_load(c,1,ea,0,0);} // 80285AE4
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,3,ea,0,0);} // 80285AE8
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,5,ea,1,0);} // 80285AEC
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80285AF0
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 80285AF4
  {double t0=S(c->f[3]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80285AF8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80285AFC
  fcmp(c,0,c->f[0],c->f[2]); // 80285B00
  if (!crb(c,1)) { goto L_80285B0C; } // 80285B04
  c->r[3]=0u+0x00000002u; // 80285B08
L_80285B0C:;
  c->r[5]=c->r[5]+0x00000010u; // 80285B0C
  c->r[6]=c->r[6]+0x00000010u; // 80285B10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80285A14; } // 80285B14
L_80285B18:;
  c->r[1]=c->r[1]+0x00000020u; // 80285B18
  return; // 80285B1C
}

// fn_80285B20
void f_80285B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285B20
  c->r[0]=c->lr; // 80285B24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80285B28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80285B2C
  c->r[31]=c->r[6]|c->r[6]; // 80285B30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80285B34
  c->r[30]=c->r[5]|c->r[5]; // 80285B38
  W32(c->r[1]+0x00000014u,c->r[29]); // 80285B3C
  c->r[29]=c->r[3]|c->r[3]; // 80285B40
  W32(c->r[3]+0x00000000u,c->r[4]); // 80285B44
  c->r[3]=c->r[3]+0x00000004u; // 80285B48
  c->lr=0x80285B50u; f_802871CC(c); // 80285B4C
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285B50
  c->r[0]=0u+0x00000000u; // 80285B54
  W32(c->r[29]+0x00000010u,c->r[30]); // 80285B58
  c->r[3]=c->r[29]|c->r[29]; // 80285B5C
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285B60
  W32(c->r[29]+0x00000014u,c->r[31]); // 80285B64
  W8(c->r[29]+0x00000018u,c->r[0]); // 80285B68
  W8(c->r[29]+0x00000019u,c->r[0]); // 80285B6C
  W8(c->r[29]+0x0000001Au,c->r[0]); // 80285B70
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80285B74
  W32(c->r[29]+0x00000020u,c->r[0]); // 80285B78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80285B7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80285B80
  c->r[29]=R32(c->r[1]+0x00000014u); // 80285B84
  c->r[0]=R32(c->r[1]+0x00000024u); // 80285B88
  c->lr=c->r[0]; // 80285B8C
  c->r[1]=c->r[1]+0x00000020u; // 80285B90
  return; // 80285B94
}

// dtor_80285B98
void f_80285B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285B98
  c->r[0]=c->lr; // 80285B9C
  cmps(c,0,(int32_t)c->r[3],0); // 80285BA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80285BA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80285BA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80285BAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80285BB0
  c->r[29]=c->r[4]|c->r[4]; // 80285BB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80285BB8
  c->r[28]=c->r[3]|c->r[3]; // 80285BBC
  if (crb(c,2)) { goto L_80285C3C; } // 80285BC0
  c->r[0]=R8(c->r[3]+0x00000018u); // 80285BC4
  cmps(c,0,(int32_t)c->r[0],0); // 80285BC8
  if (crb(c,2)) { goto L_80285C2C; } // 80285BCC
  c->r[31]=0u+0x00000000u; // 80285BD0
  c->r[30]=0u+0x00000000u; // 80285BD4
  goto L_80285C10; // 80285BD8
L_80285BDC:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 80285BDC
  c->r[3]=R32(c->r[30]+c->r[0]); // 80285BE0
  c->r[4]=c->r[0]+c->r[30]; // 80285BE4
  cmps(c,1,(int32_t)c->r[3],0); // 80285BE8
  if (crb(c,6)) { goto L_80285C08; } // 80285BEC
  c->r[0]=R8(c->r[4]+0x00000008u); // 80285BF0
  cmps(c,0,(int32_t)c->r[0],0); // 80285BF4
  if (crb(c,2)) { goto L_80285C08; } // 80285BF8
  if (crb(c,6)) { goto L_80285C08; } // 80285BFC
  c->r[4]=0u+0x00000000u; // 80285C00
  c->lr=0x80285C08u; f_8028D5C4(c); // 80285C04
L_80285C08:;
  c->r[30]=c->r[30]+0x0000000Cu; // 80285C08
  c->r[31]=c->r[31]+0x00000001u; // 80285C0C
L_80285C10:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80285C10
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80285C14
  if (crb(c,0)) { IRQCHK(c); goto L_80285BDC; } // 80285C18
  c->r[3]=c->r[28]+0x00000004u; // 80285C1C
  c->lr=0x80285C24u; f_80287244(c); // 80285C20
  c->r[0]=0u+0x00000000u; // 80285C24
  W8(c->r[28]+0x00000018u,c->r[0]); // 80285C28
L_80285C2C:;
  cmps(c,0,(int32_t)c->r[29],0); // 80285C2C
  if (!crb(c,1)) { goto L_80285C3C; } // 80285C30
  c->r[3]=c->r[28]|c->r[28]; // 80285C34
  c->lr=0x80285C3Cu; f_800D6AD0(c); // 80285C38
L_80285C3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80285C3C
  c->r[3]=c->r[28]|c->r[28]; // 80285C40
  c->r[30]=R32(c->r[1]+0x00000018u); // 80285C44
  c->r[29]=R32(c->r[1]+0x00000014u); // 80285C48
  c->r[28]=R32(c->r[1]+0x00000010u); // 80285C4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80285C50
  c->lr=c->r[0]; // 80285C54
  c->r[1]=c->r[1]+0x00000020u; // 80285C58
  return; // 80285C5C
}

// fn_80285C60
void f_80285C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285C60
  c->r[0]=c->lr; // 80285C64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80285C68
  c->r[11]=c->r[1]+0x00000020u; // 80285C6C
  c->lr=0x80285C74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80285C70
  c->r[0]=R8(c->r[3]+0x00000018u); // 80285C74
  c->r[27]=c->r[3]|c->r[3]; // 80285C78
  c->r[28]=c->r[4]|c->r[4]; // 80285C7C
  c->r[29]=c->r[5]|c->r[5]; // 80285C80
  cmps(c,0,(int32_t)c->r[0],0); // 80285C84
  if (crb(c,2)) { goto L_80285CEC; } // 80285C88
  if (crb(c,2)) { goto L_80285CEC; } // 80285C8C
  c->r[31]=0u+0x00000000u; // 80285C90
  c->r[30]=0u+0x00000000u; // 80285C94
  goto L_80285CD0; // 80285C98
L_80285C9C:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 80285C9C
  c->r[3]=R32(c->r[30]+c->r[0]); // 80285CA0
  c->r[4]=c->r[0]+c->r[30]; // 80285CA4
  cmps(c,1,(int32_t)c->r[3],0); // 80285CA8
  if (crb(c,6)) { goto L_80285CC8; } // 80285CAC
  c->r[0]=R8(c->r[4]+0x00000008u); // 80285CB0
  cmps(c,0,(int32_t)c->r[0],0); // 80285CB4
  if (crb(c,2)) { goto L_80285CC8; } // 80285CB8
  if (crb(c,6)) { goto L_80285CC8; } // 80285CBC
  c->r[4]=0u+0x00000000u; // 80285CC0
  c->lr=0x80285CC8u; f_8028D5C4(c); // 80285CC4
L_80285CC8:;
  c->r[30]=c->r[30]+0x0000000Cu; // 80285CC8
  c->r[31]=c->r[31]+0x00000001u; // 80285CCC
L_80285CD0:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 80285CD0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80285CD4
  if (crb(c,0)) { IRQCHK(c); goto L_80285C9C; } // 80285CD8
  c->r[3]=c->r[27]+0x00000004u; // 80285CDC
  c->lr=0x80285CE4u; f_80287244(c); // 80285CE0
  c->r[0]=0u+0x00000000u; // 80285CE4
  W8(c->r[27]+0x00000018u,c->r[0]); // 80285CE8
L_80285CEC:;
  c->r[4]=c->r[28]|c->r[28]; // 80285CEC
  c->r[3]=c->r[27]+0x00000004u; // 80285CF0
  c->lr=0x80285CF8u; f_802871D8(c); // 80285CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80285CF8
  if (!crb(c,2)) { goto L_80285D08; } // 80285CFC
  c->r[4]=0u+0x00000000u; // 80285D00
  goto L_80285D28; // 80285D04
L_80285D08:;
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285D08
  c->r[3]=0u+0x00000001u; // 80285D0C
  c->r[0]=0u+0x00000000u; // 80285D10
  W8(c->r[27]+0x00000019u,c->r[3]); // 80285D14
  c->r[4]=0u+0x00000001u; // 80285D18
  W8(c->r[27]+0x00000018u,c->r[3]); // 80285D1C
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285D20
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 80285D24
L_80285D28:;
  cmps(c,0,(int32_t)c->r[4],0); // 80285D28
  if (!crb(c,2)) { goto L_80285D38; } // 80285D2C
  c->r[3]=0u+0x00000000u; // 80285D30
  goto L_80285D48; // 80285D34
L_80285D38:;
  c->r[3]=c->r[28]|c->r[28]; // 80285D38
  c->r[4]=c->r[29]|c->r[29]; // 80285D3C
  c->lr=0x80285D44u; f_802870D8(c); // 80285D40
  c->r[3]=0u+0x00000001u; // 80285D44
L_80285D48:;
  c->r[11]=c->r[1]+0x00000020u; // 80285D48
  c->lr=0x80285D50u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80285D4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80285D50
  c->lr=c->r[0]; // 80285D54
  c->r[1]=c->r[1]+0x00000020u; // 80285D58
  return; // 80285D5C
}

// fn_80285D60
void f_80285D60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285D60
  c->r[0]=c->lr; // 80285D64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80285D68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80285D6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80285D70
  W32(c->r[1]+0x00000014u,c->r[29]); // 80285D74
  c->r[29]=c->r[3]|c->r[3]; // 80285D78
  c->r[0]=R8(c->r[3]+0x00000018u); // 80285D7C
  cmps(c,0,(int32_t)c->r[0],0); // 80285D80
  if (crb(c,2)) { goto L_80285DE4; } // 80285D84
  c->r[30]=0u+0x00000000u; // 80285D88
  c->r[31]=0u+0x00000000u; // 80285D8C
  goto L_80285DC8; // 80285D90
L_80285D94:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80285D94
  c->r[3]=R32(c->r[31]+c->r[0]); // 80285D98
  c->r[4]=c->r[0]+c->r[31]; // 80285D9C
  cmps(c,1,(int32_t)c->r[3],0); // 80285DA0
  if (crb(c,6)) { goto L_80285DC0; } // 80285DA4
  c->r[0]=R8(c->r[4]+0x00000008u); // 80285DA8
  cmps(c,0,(int32_t)c->r[0],0); // 80285DAC
  if (crb(c,2)) { goto L_80285DC0; } // 80285DB0
  if (crb(c,6)) { goto L_80285DC0; } // 80285DB4
  c->r[4]=0u+0x00000000u; // 80285DB8
  c->lr=0x80285DC0u; f_8028D5C4(c); // 80285DBC
L_80285DC0:;
  c->r[31]=c->r[31]+0x0000000Cu; // 80285DC0
  c->r[30]=c->r[30]+0x00000001u; // 80285DC4
L_80285DC8:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80285DC8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80285DCC
  if (crb(c,0)) { IRQCHK(c); goto L_80285D94; } // 80285DD0
  c->r[3]=c->r[29]+0x00000004u; // 80285DD4
  c->lr=0x80285DDCu; f_80287244(c); // 80285DD8
  c->r[0]=0u+0x00000000u; // 80285DDC
  W8(c->r[29]+0x00000018u,c->r[0]); // 80285DE0
L_80285DE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80285DE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80285DE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80285DEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80285DF0
  c->lr=c->r[0]; // 80285DF4
  c->r[1]=c->r[1]+0x00000020u; // 80285DF8
  return; // 80285DFC
}

// fn_80285E00
void f_80285E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285E00
  c->r[0]=c->lr; // 80285E04
  W32(c->r[1]+0x00000034u,c->r[0]); // 80285E08
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80285E0C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80285E10
  c->f[31]=c->f[1]; // 80285E14
  c->r[8]=0u+0x00000000u; // 80285E18
  c->r[7]=0u+0x00000000u; // 80285E1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80285E20
  c->r[31]=c->r[3]|c->r[3]; // 80285E24
  c->r[5]=0u+0x00000000u; // 80285E28
  goto L_80285E50; // 80285E2C
L_80285E30:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80285E30
  c->r[6]=c->r[0]+c->r[7]; // 80285E34
  c->r[0]=R32(c->r[7]+c->r[0]); // 80285E38
  cmps(c,0,(int32_t)c->r[0],0); // 80285E3C
  if (!crb(c,2)) { goto L_80285E48; } // 80285E40
  W32(c->r[6]+0x00000004u,c->r[5]); // 80285E44
L_80285E48:;
  c->r[7]=c->r[7]+0x0000000Cu; // 80285E48
  c->r[8]=c->r[8]+0x00000001u; // 80285E4C
L_80285E50:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80285E50
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80285E54
  if (crb(c,0)) { IRQCHK(c); goto L_80285E30; } // 80285E58
  c->r[0]=R8(c->r[3]+0x00000019u); // 80285E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80285E60
  if (crb(c,2)) { goto L_80285EEC; } // 80285E64
  cmps(c,0,(int32_t)c->r[4],0); // 80285E68
  if (!crb(c,2)) { goto L_80285E90; } // 80285E6C
  {uint32_t ea=c->r[2]+0xFFFF9F30u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285E70
  c->r[5]=0u+0x00000000u; // 80285E74
  c->r[0]=0u+0x00000001u; // 80285E78
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80285E7C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285E80
  W8(c->r[3]+0x0000001Au,c->r[0]); // 80285E84
  W8(c->r[3]+0x00000019u,c->r[5]); // 80285E88
  goto L_80285EE4; // 80285E8C
L_80285E90:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80285E90
  cmps(c,0,(int32_t)c->r[0],0); // 80285E94
  if (crb(c,2)) { goto L_80285EA8; } // 80285E98
  c->r[5]=R32(c->r[3]+0x00000008u); // 80285E9C
  c->r[0]=R32(c->r[5]+0x00000008u); // 80285EA0
  goto L_80285EAC; // 80285EA4
L_80285EA8:;
  c->r[0]=0u+0x00000000u; // 80285EA8
L_80285EAC:;
  c->r[6]=0u+0x43300000u; // 80285EAC
  c->r[5]=0u+0x00000000u; // 80285EB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80285EB4
  c->r[0]=0u+0x00000001u; // 80285EB8
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[2]=RF64(ea);} // 80285EBC
  W32(c->r[1]+0x00000008u,c->r[6]); // 80285EC0
  {uint32_t ea=c->r[2]+0xFFFF9F34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80285EC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80285EC8
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 80285ECC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80285ED0
  W8(c->r[3]+0x0000001Au,c->r[0]); // 80285ED4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80285ED8
  W8(c->r[3]+0x00000019u,c->r[5]); // 80285EDC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80285EE0
L_80285EE4:;
  c->r[0]=0u+0x00000000u; // 80285EE4
  W8(c->r[3]+0x00000019u,c->r[0]); // 80285EE8
L_80285EEC:;
  cmps(c,0,(int32_t)c->r[4],0); // 80285EEC
  if (!crb(c,2)) { goto L_80285F04; } // 80285EF0
  c->f[1]=c->f[31]; // 80285EF4
  c->r[3]=c->r[31]|c->r[31]; // 80285EF8
  c->lr=0x80285F00u; f_80285F38(c); // 80285EFC
  goto L_80285F10; // 80285F00
L_80285F04:;
  c->f[1]=c->f[31]; // 80285F04
  c->r[3]=c->r[31]|c->r[31]; // 80285F08
  c->lr=0x80285F10u; f_80286154(c); // 80285F0C
L_80285F10:;
  c->r[0]=0u+0x00000000u; // 80285F10
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[31]);} // 80285F14
  W8(c->r[31]+0x0000001Au,c->r[0]); // 80285F18
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80285F1C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80285F20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80285F24
  c->r[0]=R32(c->r[1]+0x00000034u); // 80285F28
  c->lr=c->r[0]; // 80285F2C
  c->r[1]=c->r[1]+0x00000030u; // 80285F30
  return; // 80285F34
}

// fn_80285F38
void f_80285F38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80285F38
  c->r[0]=c->lr; // 80285F3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80285F40
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80285F44
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80285F48
  c->f[31]=c->f[1]; // 80285F4C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80285F50
  W32(c->r[1]+0x00000028u,c->r[30]); // 80285F54
  W32(c->r[1]+0x00000024u,c->r[29]); // 80285F58
  c->r[29]=c->r[3]|c->r[3]; // 80285F5C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80285F60
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80285F64
  c->f[1]=c->f[0]; // 80285F68
  c->lr=0x80285F70u; f_80196344(c); // 80285F6C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80285F70
  c->f[1]=c->f[31]; // 80285F74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80285F78
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80285F7C
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 80285F80
  c->lr=0x80285F88u; f_80196344(c); // 80285F84
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80285F88
  c->r[0]=R8(c->r[29]+0x0000001Au); // 80285F8C
  cmps(c,0,(int32_t)c->r[0],0); // 80285F90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80285F94
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80285F98
  c->r[31]=R32(c->r[1]+0x00000014u); // 80285F9C
  if (crb(c,2)) { goto L_80285FD0; } // 80285FA0
  c->r[3]=c->r[28]^0x80000000u; // 80285FA4
  c->r[0]=0u+0x43300000u; // 80285FA8
  W32(c->r[1]+0x00000014u,c->r[3]); // 80285FAC
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[1]=RF64(ea);} // 80285FB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 80285FB4
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80285FB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80285FBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80285FC0
  fcmp(c,0,c->f[2],c->f[0]); // 80285FC4
  if (!crb(c,2)) { goto L_80285FD0; } // 80285FC8
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80285FCC
L_80285FD0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 80285FD0
  if (crb(c,2)) { goto L_8028612C; } // 80285FD4
  c->r[30]=c->r[28]+0x00000001u; // 80285FD8
L_80285FDC:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 80285FDC
  cmps(c,0,(int32_t)c->r[4],0); // 80285FE0
  if (crb(c,2)) { goto L_80285FF4; } // 80285FE4
  c->r[3]=R32(c->r[29]+0x00000008u); // 80285FE8
  c->r[0]=R32(c->r[3]+0x00000008u); // 80285FEC
  goto L_80285FF8; // 80285FF0
L_80285FF4:;
  c->r[0]=0u+0x00000000u; // 80285FF4
L_80285FF8:;
  cmpu(c,0,c->r[30],c->r[0]); // 80285FF8
  if (!crb(c,2)) { goto L_80286028; } // 80285FFC
  cmps(c,0,(int32_t)c->r[4],0); // 80286000
  if (crb(c,2)) { goto L_80286014; } // 80286004
  c->r[3]=R32(c->r[29]+0x00000008u); // 80286008
  c->r[0]=R32(c->r[3]+0x00000008u); // 8028600C
  goto L_80286018; // 80286010
L_80286014:;
  c->r[0]=0u+0x00000000u; // 80286014
L_80286018:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80286018
  c->r[30]=c->r[30]-c->r[0]; // 8028601C
  c->r[0]=c->r[3]+0x00000001u; // 80286020
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80286024
L_80286028:;
  c->r[28]=0u+0x00000000u; // 80286028
  goto L_8028610C; // 8028602C
L_80286030:;
  c->r[4]=c->r[28]|c->r[28]; // 80286030
  c->r[3]=c->r[29]+0x00000004u; // 80286034
  c->lr=0x8028603Cu; f_80287298(c); // 80286038
  cmps(c,0,(int32_t)c->r[3],0); // 8028603C
  c->r[4]=c->r[3]|c->r[3]; // 80286040
  if (crb(c,2)) { goto L_80286108; } // 80286044
  c->r[5]=R8(c->r[3]+0x00000008u); // 80286048
  c->r[7]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[7]); // 8028604C
  if (!crb(c,2)) { goto L_8028606C; } // 80286050
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 80286054
  if (!crb(c,2)) { goto L_80286064; } // 80286058
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 8028605C
  if (crb(c,2)) { goto L_8028606C; } // 80286060
L_80286064:;
  c->r[0]=0u+0x00000001u; // 80286064
  goto L_802860D8; // 80286068
L_8028606C:;
  c->r[6]=R32(c->r[29]+0x0000001Cu); // 8028606C
  c->r[5]=R8(c->r[3]+0x00000009u); // 80286070
  cmps(c,0,(int32_t)c->r[6],0); // 80286074
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80286078
  c->r[0]=sraw(c,c->r[5],31); // 8028607C
  c->r[0]=c->r[5]&~c->r[0]; // 80286080
  if (!crb(c,0)) { goto L_8028608C; } // 80286084
  c->r[6]=0u-c->r[6]; // 80286088
L_8028608C:;
  c->r[5]=R8(c->r[3]+0x0000000Au); // 8028608C
  cmps(c,0,(int32_t)c->r[5],0); // 80286090
  if (!crb(c,2)) { goto L_802860A8; } // 80286094
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80286098
  if (!crb(c,0)) { goto L_802860D4; } // 8028609C
  c->r[0]=0u+0x00000000u; // 802860A0
  goto L_802860D8; // 802860A4
L_802860A8:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 802860A8
  if (!crb(c,0)) { goto L_802860B8; } // 802860AC
  c->r[0]=0u+0x00000000u; // 802860B0
  goto L_802860D8; // 802860B4
L_802860B8:;
  c->r[3]=c->r[6]-c->r[0]; // 802860B8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 802860BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 802860C0
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 802860C4
  if (crb(c,2)) { goto L_802860D4; } // 802860C8
  c->r[0]=0u+0x00000000u; // 802860CC
  goto L_802860D8; // 802860D0
L_802860D4:;
  c->r[0]=0u+0x00000001u; // 802860D4
L_802860D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802860D8
  if (crb(c,2)) { goto L_80286108; } // 802860DC
  cmps(c,0,(int32_t)c->r[7],0); // 802860E0
  if (crb(c,2)) { goto L_802860FC; } // 802860E4
  c->r[3]=c->r[29]|c->r[29]; // 802860E8
  c->r[5]=c->r[30]|c->r[30]; // 802860EC
  c->r[6]=0u+0x00000000u; // 802860F0
  c->lr=0x802860F8u; f_802863D4(c); // 802860F4
  goto L_80286108; // 802860F8
L_802860FC:;
  c->r[3]=c->r[29]|c->r[29]; // 802860FC
  c->r[5]=c->r[30]|c->r[30]; // 80286100
  c->lr=0x80286108u; f_80286648(c); // 80286104
L_80286108:;
  c->r[28]=c->r[28]+0x00000001u; // 80286108
L_8028610C:;
  c->r[3]=c->r[29]+0x00000004u; // 8028610C
  c->lr=0x80286114u; f_80287254(c); // 80286110
  cmpu(c,0,c->r[28],c->r[3]); // 80286114
  if (crb(c,0)) { IRQCHK(c); goto L_80286030; } // 80286118
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 8028611C
  if (crb(c,2)) { goto L_8028612C; } // 80286120
  c->r[30]=c->r[30]+0x00000001u; // 80286124
  IRQCHK(c); goto L_80285FDC; // 80286128
L_8028612C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8028612C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80286130
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80286134
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80286138
  c->r[30]=R32(c->r[1]+0x00000028u); // 8028613C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80286140
  c->r[28]=R32(c->r[1]+0x00000020u); // 80286144
  c->lr=c->r[0]; // 80286148
  c->r[1]=c->r[1]+0x00000040u; // 8028614C
  return; // 80286150
}

// fn_80286154
void f_80286154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80286154
  c->r[0]=c->lr; // 80286158
  W32(c->r[1]+0x00000044u,c->r[0]); // 8028615C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80286160
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80286164
  c->f[31]=c->f[1]; // 80286168
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8028616C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80286170
  W32(c->r[1]+0x00000024u,c->r[29]); // 80286174
  c->r[29]=c->r[3]|c->r[3]; // 80286178
  W32(c->r[1]+0x00000020u,c->r[28]); // 8028617C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80286180
  c->f[1]=c->f[0]; // 80286184
  c->lr=0x8028618Cu; f_80196104(c); // 80286188
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8028618C
  c->f[1]=c->f[31]; // 80286190
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80286194
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80286198
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 8028619C
  c->lr=0x802861A4u; f_80196104(c); // 802861A0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 802861A4
  c->r[4]=R32(c->r[29]+0x00000004u); // 802861A8
  cmps(c,0,(int32_t)c->r[4],0); // 802861AC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802861B0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 802861B4
  c->r[31]=R32(c->r[1]+0x00000014u); // 802861B8
  if (crb(c,2)) { goto L_802861CC; } // 802861BC
  c->r[3]=R32(c->r[29]+0x00000008u); // 802861C0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802861C4
  goto L_802861D0; // 802861C8
L_802861CC:;
  c->r[0]=0u+0x00000000u; // 802861CC
L_802861D0:;
  cmpu(c,0,c->r[28],c->r[0]); // 802861D0
  if (crb(c,0)) { goto L_802861F4; } // 802861D4
  cmps(c,0,(int32_t)c->r[4],0); // 802861D8
  if (crb(c,2)) { goto L_802861EC; } // 802861DC
  c->r[3]=R32(c->r[29]+0x00000008u); // 802861E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802861E4
  goto L_802861F0; // 802861E8
L_802861EC:;
  c->r[0]=0u+0x00000000u; // 802861EC
L_802861F0:;
  c->r[28]=c->r[28]-c->r[0]; // 802861F0
L_802861F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 802861F4
  if (crb(c,2)) { goto L_80286208; } // 802861F8
  c->r[3]=R32(c->r[29]+0x00000008u); // 802861FC
  c->r[0]=R32(c->r[3]+0x00000008u); // 80286200
  goto L_8028620C; // 80286204
L_80286208:;
  c->r[0]=0u+0x00000000u; // 80286208
L_8028620C:;
  cmpu(c,0,c->r[31],c->r[0]); // 8028620C
  if (crb(c,0)) { goto L_80286230; } // 80286210
  cmps(c,0,(int32_t)c->r[4],0); // 80286214
  if (crb(c,2)) { goto L_80286228; } // 80286218
  c->r[3]=R32(c->r[29]+0x00000008u); // 8028621C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80286220
  goto L_8028622C; // 80286224
L_80286228:;
  c->r[0]=0u+0x00000000u; // 80286228
L_8028622C:;
  c->r[31]=c->r[31]-c->r[0]; // 8028622C
L_80286230:;
  c->r[0]=R8(c->r[29]+0x0000001Au); // 80286230
  cmps(c,0,(int32_t)c->r[0],0); // 80286234
  if (crb(c,2)) { goto L_80286268; } // 80286238
  c->r[3]=c->r[28]^0x80000000u; // 8028623C
  c->r[0]=0u+0x43300000u; // 80286240
  W32(c->r[1]+0x00000014u,c->r[3]); // 80286244
  {uint32_t ea=c->r[2]+0xFFFF9F40u; c->f[1]=RF64(ea);} // 80286248
  W32(c->r[1]+0x00000010u,c->r[0]); // 8028624C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80286250
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80286254
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80286258
  fcmp(c,0,c->f[2],c->f[0]); // 8028625C
  if (!crb(c,2)) { goto L_80286268; } // 80286260
  c->r[28]=c->r[28]+0x00000001u; // 80286264
L_80286268:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 80286268
  if (crb(c,2)) { goto L_802863AC; } // 8028626C
  c->r[30]=c->r[28]+0xFFFFFFFFu; // 80286270
L_80286274:;
  cmps(c,0,(int32_t)c->r[30],-1); // 80286274
  if (!crb(c,2)) { goto L_802862A8; } // 80286278
  c->r[0]=R32(c->r[29]+0x00000004u); // 8028627C
  cmps(c,0,(int32_t)c->r[0],0); // 80286280
  if (crb(c,2)) { goto L_80286294; } // 80286284
  c->r[3]=R32(c->r[29]+0x00000008u); // 80286288
  c->r[0]=R32(c->r[3]+0x00000008u); // 8028628C
  goto L_80286298; // 80286290
L_80286294:;
  c->r[0]=0u+0x00000000u; // 80286294
L_80286298:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80286298
  c->r[30]=c->r[30]+c->r[0]; // 8028629C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802862A0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 802862A4
L_802862A8:;
  c->r[28]=0u+0x00000000u; // 802862A8
  goto L_8028638C; // 802862AC
L_802862B0:;
  c->r[4]=c->r[28]|c->r[28]; // 802862B0
  c->r[3]=c->r[29]+0x00000004u; // 802862B4
  c->lr=0x802862BCu; f_80287298(c); // 802862B8
  cmps(c,0,(int32_t)c->r[3],0); // 802862BC
  c->r[4]=c->r[3]|c->r[3]; // 802862C0
  if (crb(c,2)) { goto L_80286388; } // 802862C4
  c->r[5]=R8(c->r[3]+0x00000008u); // 802862C8
  c->r[7]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[7]); // 802862CC
  if (!crb(c,2)) { goto L_802862EC; } // 802862D0
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 802862D4
  if (!crb(c,2)) { goto L_802862E4; } // 802862D8
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 802862DC
  if (crb(c,2)) { goto L_802862EC; } // 802862E0
L_802862E4:;
  c->r[0]=0u+0x00000001u; // 802862E4
  goto L_80286358; // 802862E8
L_802862EC:;
  c->r[6]=R32(c->r[29]+0x0000001Cu); // 802862EC
  c->r[5]=R8(c->r[3]+0x00000009u); // 802862F0
  cmps(c,0,(int32_t)c->r[6],0); // 802862F4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 802862F8
  c->r[0]=sraw(c,c->r[5],31); // 802862FC
  c->r[0]=c->r[5]&~c->r[0]; // 80286300
  if (!crb(c,0)) { goto L_8028630C; } // 80286304
  c->r[6]=0u-c->r[6]; // 80286308
L_8028630C:;
  c->r[5]=R8(c->r[3]+0x0000000Au); // 8028630C
  cmps(c,0,(int32_t)c->r[5],0); // 80286310
  if (!crb(c,2)) { goto L_80286328; } // 80286314
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80286318
  if (!crb(c,0)) { goto L_80286354; } // 8028631C
  c->r[0]=0u+0x00000000u; // 80286320
  goto L_80286358; // 80286324
L_80286328:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80286328
  if (!crb(c,0)) { goto L_80286338; } // 8028632C
  c->r[0]=0u+0x00000000u; // 80286330
  goto L_80286358; // 80286334
L_80286338:;
  c->r[3]=c->r[6]-c->r[0]; // 80286338
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 8028633C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80286340
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 80286344
  if (crb(c,2)) { goto L_80286354; } // 80286348
  c->r[0]=0u+0x00000000u; // 8028634C
  goto L_80286358; // 80286350
L_80286354:;
  c->r[0]=0u+0x00000001u; // 80286354
L_80286358:;
  cmps(c,0,(int32_t)c->r[0],0); // 80286358
  if (crb(c,2)) { goto L_80286388; } // 8028635C
  cmps(c,0,(int32_t)c->r[7],0); // 80286360
  if (crb(c,2)) { goto L_8028637C; } // 80286364
  c->r[3]=c->r[29]|c->r[29]; // 80286368
  c->r[5]=c->r[30]|c->r[30]; // 8028636C
  c->r[6]=0u+0x00000001u; // 80286370
  c->lr=0x80286378u; f_802863D4(c); // 80286374
  goto L_80286388; // 80286378
L_8028637C:;
  c->r[3]=c->r[29]|c->r[29]; // 8028637C
  c->r[5]=c->r[30]|c->r[30]; // 80286380
  c->lr=0x80286388u; f_80286954(c); // 80286384
L_80286388:;
  c->r[28]=c->r[28]+0x00000001u; // 80286388
L_8028638C:;
  c->r[3]=c->r[29]+0x00000004u; // 8028638C
  c->lr=0x80286394u; f_80287254(c); // 80286390
  cmpu(c,0,c->r[28],c->r[3]); // 80286394
  if (crb(c,0)) { IRQCHK(c); goto L_802862B0; } // 80286398
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 8028639C
  if (crb(c,2)) { goto L_802863AC; } // 802863A0
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 802863A4
  IRQCHK(c); goto L_80286274; // 802863A8
L_802863AC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802863AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 802863B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802863B4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802863B8
  c->r[30]=R32(c->r[1]+0x00000028u); // 802863BC
  c->r[29]=R32(c->r[1]+0x00000024u); // 802863C0
  c->r[28]=R32(c->r[1]+0x00000020u); // 802863C4
  c->lr=c->r[0]; // 802863C8
  c->r[1]=c->r[1]+0x00000040u; // 802863CC
  return; // 802863D0
}

// fn_802863D4
void f_802863D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802863D4
  c->r[0]=c->lr; // 802863D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802863DC
  c->r[11]=c->r[1]+0x00000030u; // 802863E0
  c->lr=0x802863E8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802863E4
  c->r[28]=c->r[3]|c->r[3]; // 802863E8
  c->r[29]=c->r[4]|c->r[4]; // 802863EC
  c->r[30]=c->r[5]|c->r[5]; // 802863F0
  c->r[23]=c->r[6]|c->r[6]; // 802863F4
  c->r[3]=c->r[3]+0x00000004u; // 802863F8
  c->lr=0x80286400u; f_802872F0(c); // 802863FC
  cmps(c,0,(int32_t)c->r[3],0); // 80286400
  c->r[31]=c->r[3]|c->r[3]; // 80286404
  if (crb(c,2)) { goto L_80286630; } // 80286408
  c->r[3]=R8(c->r[29]+0x00000008u); // 8028640C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80286410
  if (!crb(c,2)) { goto L_80286630; } // 80286414
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80286418
  if (crb(c,2)) { goto L_802864CC; } // 8028641C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286420
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286424
  if (!crb(c,2)) { goto L_80286630; } // 80286428
  c->r[26]=0u+0x00000000u; // 8028642C
  c->r[24]=0u+0x00000000u; // 80286430
  c->r[27]=0u+0x00000000u; // 80286434
  goto L_80286470; // 80286438
L_8028643C:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8028643C
  c->r[29]=c->r[0]+c->r[24]; // 80286440
  c->r[0]=R32(c->r[29]+0x00000004u); // 80286444
  cmpu(c,0,c->r[0],c->r[31]); // 80286448
  if (!crb(c,2)) { goto L_80286468; } // 8028644C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80286450
  cmps(c,0,(int32_t)c->r[3],0); // 80286454
  if (crb(c,2)) { goto L_80286464; } // 80286458
  c->r[4]=0u+0x00000000u; // 8028645C
  c->lr=0x80286464u; f_8028D5C4(c); // 80286460
L_80286464:;
  W32(c->r[29]+0x00000004u,c->r[27]); // 80286464
L_80286468:;
  c->r[24]=c->r[24]+0x0000000Cu; // 80286468
  c->r[26]=c->r[26]+0x00000001u; // 8028646C
L_80286470:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80286470
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80286474
  if (crb(c,0)) { IRQCHK(c); goto L_8028643C; } // 80286478
  c->r[0]=R32(c->r[28]+0x00000020u); // 8028647C
  cmps(c,0,(int32_t)c->r[0],0); // 80286480
  if (crb(c,2)) { goto L_802864B8; } // 80286484
  c->r[3]=R8(c->r[31]+0x00000008u); // 80286488
  c->r[5]=c->r[31]|c->r[31]; // 8028648C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80286490
  c->lr=0x80286498u; f_802A5D40(c); // 80286494
  c->r[12]=R32(c->r[28]+0x00000020u); // 80286498
  c->r[5]=c->r[3]|c->r[3]; // 8028649C
  c->r[4]=c->r[30]|c->r[30]; // 802864A0
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 802864A4
  c->r[7]=R32(c->r[28]+0x00000024u); // 802864A8
  c->r[3]=0u+0x00000000u; // 802864AC
  c->ctr=c->r[12]; // 802864B0
  if (true) { c->lr=0x802864B8u; dispatch(c,c->ctr); } // 802864B4
L_802864B8:;
  c->r[3]=c->r[28]|c->r[28]; // 802864B8
  c->r[4]=c->r[31]|c->r[31]; // 802864BC
  c->r[5]=0u+0x00000001u; // 802864C0
  c->lr=0x802864C8u; f_80286C60(c); // 802864C4
  goto L_80286630; // 802864C8
L_802864CC:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802864CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 802864D0
  if (!crb(c,2)) { goto L_80286574; } // 802864D4
  c->r[25]=0u+0x00000000u; // 802864D8
  c->r[24]=0u+0x00000000u; // 802864DC
  c->r[27]=0u+0x00000000u; // 802864E0
  goto L_8028651C; // 802864E4
L_802864E8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 802864E8
  c->r[26]=c->r[0]+c->r[24]; // 802864EC
  c->r[0]=R32(c->r[26]+0x00000004u); // 802864F0
  cmpu(c,0,c->r[0],c->r[31]); // 802864F4
  if (!crb(c,2)) { goto L_80286514; } // 802864F8
  c->r[3]=R32(c->r[26]+0x00000000u); // 802864FC
  cmps(c,0,(int32_t)c->r[3],0); // 80286500
  if (crb(c,2)) { goto L_80286510; } // 80286504
  c->r[4]=0u+0x00000000u; // 80286508
  c->lr=0x80286510u; f_8028D5C4(c); // 8028650C
L_80286510:;
  W32(c->r[26]+0x00000004u,c->r[27]); // 80286510
L_80286514:;
  c->r[24]=c->r[24]+0x0000000Cu; // 80286514
  c->r[25]=c->r[25]+0x00000001u; // 80286518
L_8028651C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 8028651C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80286520
  if (crb(c,0)) { IRQCHK(c); goto L_802864E8; } // 80286524
  c->r[0]=R32(c->r[28]+0x00000020u); // 80286528
  cmps(c,0,(int32_t)c->r[0],0); // 8028652C
  if (crb(c,2)) { goto L_80286564; } // 80286530
  c->r[3]=R8(c->r[31]+0x00000008u); // 80286534
  c->r[5]=c->r[31]|c->r[31]; // 80286538
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8028653C
  c->lr=0x80286544u; f_802A5D40(c); // 80286540
  c->r[12]=R32(c->r[28]+0x00000020u); // 80286544
  c->r[5]=c->r[3]|c->r[3]; // 80286548
  c->r[4]=c->r[30]|c->r[30]; // 8028654C
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 80286550
  c->r[7]=R32(c->r[28]+0x00000024u); // 80286554
  c->r[3]=0u+0x00000000u; // 80286558
  c->ctr=c->r[12]; // 8028655C
  if (true) { c->lr=0x80286564u; dispatch(c,c->ctr); } // 80286560
L_80286564:;
  c->r[3]=c->r[28]|c->r[28]; // 80286564
  c->r[4]=c->r[31]|c->r[31]; // 80286568
  c->r[5]=0u+0x00000001u; // 8028656C
  c->lr=0x80286574u; f_80286C60(c); // 80286570
L_80286574:;
  cmps(c,0,(int32_t)c->r[23],0); // 80286574
  if (!crb(c,2)) { goto L_80286584; } // 80286578
  c->r[0]=R32(c->r[29]+0x00000004u); // 8028657C
  goto L_8028659C; // 80286580
L_80286584:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286584
  c->r[3]=R32(c->r[29]+0x00000004u); // 80286588
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8028658C
  c->r[3]=c->r[0]-c->r[3]; // 80286590
  c->r[0]=sraw(c,c->r[3],31); // 80286594
  c->r[0]=c->r[3]&~c->r[0]; // 80286598
L_8028659C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8028659C
  if (!crb(c,2)) { goto L_80286630; } // 802865A0
  c->r[0]=R32(c->r[28]+0x00000020u); // 802865A4
  cmps(c,0,(int32_t)c->r[0],0); // 802865A8
  if (crb(c,2)) { goto L_802865E0; } // 802865AC
  c->r[3]=R8(c->r[31]+0x00000008u); // 802865B0
  c->r[5]=c->r[31]|c->r[31]; // 802865B4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802865B8
  c->lr=0x802865C0u; f_802A5D40(c); // 802865BC
  c->r[12]=R32(c->r[28]+0x00000020u); // 802865C0
  c->r[5]=c->r[3]|c->r[3]; // 802865C4
  c->r[4]=c->r[30]|c->r[30]; // 802865C8
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 802865CC
  c->r[7]=R32(c->r[28]+0x00000024u); // 802865D0
  c->r[3]=0u+0x00000001u; // 802865D4
  c->ctr=c->r[12]; // 802865D8
  if (true) { c->lr=0x802865E0u; dispatch(c,c->ctr); } // 802865DC
L_802865E0:;
  c->r[26]=0u+0x00000000u; // 802865E0
  c->r[27]=0u+0x00000000u; // 802865E4
  c->r[29]=0u+0x00000000u; // 802865E8
  goto L_80286624; // 802865EC
L_802865F0:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 802865F0
  c->r[25]=c->r[0]+c->r[27]; // 802865F4
  c->r[0]=R32(c->r[25]+0x00000004u); // 802865F8
  cmpu(c,0,c->r[0],c->r[31]); // 802865FC
  if (!crb(c,2)) { goto L_8028661C; } // 80286600
  c->r[3]=R32(c->r[25]+0x00000000u); // 80286604
  cmps(c,0,(int32_t)c->r[3],0); // 80286608
  if (crb(c,2)) { goto L_80286618; } // 8028660C
  c->r[4]=0u+0x00000000u; // 80286610
  c->lr=0x80286618u; f_8028D5C4(c); // 80286614
L_80286618:;
  W32(c->r[25]+0x00000004u,c->r[29]); // 80286618
L_8028661C:;
  c->r[27]=c->r[27]+0x0000000Cu; // 8028661C
  c->r[26]=c->r[26]+0x00000001u; // 80286620
L_80286624:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80286624
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80286628
  if (crb(c,0)) { IRQCHK(c); goto L_802865F0; } // 8028662C
L_80286630:;
  c->r[11]=c->r[1]+0x00000030u; // 80286630
  c->lr=0x80286638u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80286634
  c->r[0]=R32(c->r[1]+0x00000034u); // 80286638
  c->lr=c->r[0]; // 8028663C
  c->r[1]=c->r[1]+0x00000030u; // 80286640
  return; // 80286644
}

// fn_80286648
void f_80286648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80286648
  c->r[0]=c->lr; // 8028664C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80286650
  c->r[11]=c->r[1]+0x00000020u; // 80286654
  c->lr=0x8028665Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80286658
  c->r[28]=c->r[3]|c->r[3]; // 8028665C
  c->r[29]=c->r[4]|c->r[4]; // 80286660
  c->r[30]=c->r[5]|c->r[5]; // 80286664
  c->r[3]=c->r[3]+0x00000004u; // 80286668
  c->lr=0x80286670u; f_802872F0(c); // 8028666C
  cmps(c,0,(int32_t)c->r[3],0); // 80286670
  c->r[31]=c->r[3]|c->r[3]; // 80286674
  if (crb(c,2)) { goto L_8028693C; } // 80286678
  c->r[4]=R8(c->r[29]+0x00000008u); // 8028667C
  c->r[5]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[5]); // 80286680
  if (crb(c,2)) { goto L_802866A4; } // 80286684
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80286688
  if (crb(c,2)) { goto L_802866A4; } // 8028668C
  c->r[3]=c->r[28]|c->r[28]; // 80286690
  c->r[4]=c->r[31]|c->r[31]; // 80286694
  c->r[5]=0u+0x00000001u; // 80286698
  c->lr=0x802866A0u; f_80286E00(c); // 8028669C
  goto L_8028693C; // 802866A0
L_802866A4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802866A4
  if (crb(c,2)) { goto L_80286794; } // 802866A8
  c->r[0]=R32(c->r[29]+0x00000004u); // 802866AC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 802866B0
  if (!crb(c,2)) { goto L_802866F4; } // 802866B4
  c->r[0]=R32(c->r[28]+0x00000020u); // 802866B8
  cmps(c,0,(int32_t)c->r[0],0); // 802866BC
  if (crb(c,2)) { goto L_802866F4; } // 802866C0
  c->r[3]=R8(c->r[3]+0x00000008u); // 802866C4
  c->r[5]=c->r[31]|c->r[31]; // 802866C8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802866CC
  c->lr=0x802866D4u; f_802A5D40(c); // 802866D0
  c->r[12]=R32(c->r[28]+0x00000020u); // 802866D4
  c->r[5]=c->r[3]|c->r[3]; // 802866D8
  c->r[4]=c->r[30]|c->r[30]; // 802866DC
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 802866E0
  c->r[7]=R32(c->r[28]+0x00000024u); // 802866E4
  c->r[3]=0u+0x00000003u; // 802866E8
  c->ctr=c->r[12]; // 802866EC
  if (true) { c->lr=0x802866F4u; dispatch(c,c->ctr); } // 802866F0
L_802866F4:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 802866F4
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 802866F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802866FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80286700
  if (!crb(c,0)) { goto L_8028671C; } // 80286704
  c->r[3]=c->r[28]|c->r[28]; // 80286708
  c->r[4]=c->r[31]|c->r[31]; // 8028670C
  c->r[5]=0u+0x00000001u; // 80286710
  c->lr=0x80286718u; f_80286E00(c); // 80286714
  goto L_8028693C; // 80286718
L_8028671C:;
  if (!crb(c,2)) { goto L_8028693C; } // 8028671C
  c->r[0]=R32(c->r[29]+0x00000004u); // 80286720
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80286724
  if (!crb(c,0)) { goto L_80286740; } // 80286728
  c->r[3]=c->r[28]|c->r[28]; // 8028672C
  c->r[4]=c->r[31]|c->r[31]; // 80286730
  c->r[5]=0u+0x00000001u; // 80286734
  c->lr=0x8028673Cu; f_80286E00(c); // 80286738
  goto L_8028693C; // 8028673C
L_80286740:;
  c->r[27]=0u+0x00000000u; // 80286740
  c->r[26]=0u+0x00000000u; // 80286744
  c->r[29]=0u+0x00000000u; // 80286748
  goto L_80286784; // 8028674C
L_80286750:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 80286750
  c->r[30]=c->r[0]+c->r[26]; // 80286754
  c->r[0]=R32(c->r[30]+0x00000004u); // 80286758
  cmpu(c,0,c->r[0],c->r[31]); // 8028675C
  if (!crb(c,2)) { goto L_8028677C; } // 80286760
  c->r[3]=R32(c->r[30]+0x00000000u); // 80286764
  cmps(c,0,(int32_t)c->r[3],0); // 80286768
  if (crb(c,2)) { goto L_80286778; } // 8028676C
  c->r[4]=0u+0x00000000u; // 80286770
  c->lr=0x80286778u; f_8028D5C4(c); // 80286774
L_80286778:;
  W32(c->r[30]+0x00000004u,c->r[29]); // 80286778
L_8028677C:;
  c->r[26]=c->r[26]+0x0000000Cu; // 8028677C
  c->r[27]=c->r[27]+0x00000001u; // 80286780
L_80286784:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80286784
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80286788
  if (crb(c,0)) { IRQCHK(c); goto L_80286750; } // 8028678C
  goto L_8028693C; // 80286790
L_80286794:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80286794
  if (crb(c,2)) { goto L_80286830; } // 80286798
  c->r[0]=R32(c->r[29]+0x00000000u); // 8028679C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 802867A0
  if (!crb(c,2)) { goto L_802867E4; } // 802867A4
  c->r[0]=R32(c->r[28]+0x00000020u); // 802867A8
  cmps(c,0,(int32_t)c->r[0],0); // 802867AC
  if (crb(c,2)) { goto L_802867E4; } // 802867B0
  c->r[3]=R8(c->r[3]+0x00000008u); // 802867B4
  c->r[5]=c->r[31]|c->r[31]; // 802867B8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802867BC
  c->lr=0x802867C4u; f_802A5D40(c); // 802867C0
  c->r[12]=R32(c->r[28]+0x00000020u); // 802867C4
  c->r[5]=c->r[3]|c->r[3]; // 802867C8
  c->r[4]=c->r[30]|c->r[30]; // 802867CC
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 802867D0
  c->r[7]=R32(c->r[28]+0x00000024u); // 802867D4
  c->r[3]=0u+0x00000002u; // 802867D8
  c->ctr=c->r[12]; // 802867DC
  if (true) { c->lr=0x802867E4u; dispatch(c,c->ctr); } // 802867E0
L_802867E4:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 802867E4
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 802867E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802867EC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802867F0
  if (!crb(c,1)) { goto L_8028680C; } // 802867F4
  c->r[3]=c->r[28]|c->r[28]; // 802867F8
  c->r[4]=c->r[31]|c->r[31]; // 802867FC
  c->r[5]=0u+0x00000001u; // 80286800
  c->lr=0x80286808u; f_80286E00(c); // 80286804
  goto L_8028693C; // 80286808
L_8028680C:;
  if (!crb(c,2)) { goto L_8028693C; } // 8028680C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286810
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286814
  if (crb(c,1)) { goto L_8028693C; } // 80286818
  c->r[3]=c->r[28]|c->r[28]; // 8028681C
  c->r[4]=c->r[31]|c->r[31]; // 80286820
  c->r[5]=0u+0x00000001u; // 80286824
  c->lr=0x8028682Cu; f_80286E00(c); // 80286828
  goto L_8028693C; // 8028682C
L_80286830:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286830
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286834
  if (!crb(c,2)) { goto L_80286878; } // 80286838
  c->r[0]=R32(c->r[28]+0x00000020u); // 8028683C
  cmps(c,0,(int32_t)c->r[0],0); // 80286840
  if (crb(c,2)) { goto L_80286878; } // 80286844
  c->r[3]=R8(c->r[3]+0x00000008u); // 80286848
  c->r[5]=c->r[31]|c->r[31]; // 8028684C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80286850
  c->lr=0x80286858u; f_802A5D40(c); // 80286854
  c->r[12]=R32(c->r[28]+0x00000020u); // 80286858
  c->r[5]=c->r[3]|c->r[3]; // 8028685C
  c->r[4]=c->r[30]|c->r[30]; // 80286860
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 80286864
  c->r[7]=R32(c->r[28]+0x00000024u); // 80286868
  c->r[3]=0u+0x00000002u; // 8028686C
  c->ctr=c->r[12]; // 80286870
  if (true) { c->lr=0x80286878u; dispatch(c,c->ctr); } // 80286874
L_80286878:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80286878
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8028687C
  if (!crb(c,2)) { goto L_802868C0; } // 80286880
  c->r[0]=R32(c->r[28]+0x00000020u); // 80286884
  cmps(c,0,(int32_t)c->r[0],0); // 80286888
  if (crb(c,2)) { goto L_802868C0; } // 8028688C
  c->r[3]=R8(c->r[31]+0x00000008u); // 80286890
  c->r[5]=c->r[31]|c->r[31]; // 80286894
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80286898
  c->lr=0x802868A0u; f_802A5D40(c); // 8028689C
  c->r[12]=R32(c->r[28]+0x00000020u); // 802868A0
  c->r[5]=c->r[3]|c->r[3]; // 802868A4
  c->r[4]=c->r[30]|c->r[30]; // 802868A8
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 802868AC
  c->r[7]=R32(c->r[28]+0x00000024u); // 802868B0
  c->r[3]=0u+0x00000003u; // 802868B4
  c->ctr=c->r[12]; // 802868B8
  if (true) { c->lr=0x802868C0u; dispatch(c,c->ctr); } // 802868BC
L_802868C0:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802868C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 802868C4
  if (crb(c,1)) { goto L_802868EC; } // 802868C8
  c->r[0]=R32(c->r[29]+0x00000004u); // 802868CC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 802868D0
  if (!crb(c,0)) { goto L_802868EC; } // 802868D4
  c->r[3]=c->r[28]|c->r[28]; // 802868D8
  c->r[4]=c->r[31]|c->r[31]; // 802868DC
  c->r[5]=0u+0x00000001u; // 802868E0
  c->lr=0x802868E8u; f_80286E00(c); // 802868E4
  goto L_8028693C; // 802868E8
L_802868EC:;
  c->r[30]=0u+0x00000000u; // 802868EC
  c->r[26]=0u+0x00000000u; // 802868F0
  c->r[29]=0u+0x00000000u; // 802868F4
  goto L_80286930; // 802868F8
L_802868FC:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 802868FC
  c->r[27]=c->r[0]+c->r[26]; // 80286900
  c->r[0]=R32(c->r[27]+0x00000004u); // 80286904
  cmpu(c,0,c->r[0],c->r[31]); // 80286908
  if (!crb(c,2)) { goto L_80286928; } // 8028690C
  c->r[3]=R32(c->r[27]+0x00000000u); // 80286910
  cmps(c,0,(int32_t)c->r[3],0); // 80286914
  if (crb(c,2)) { goto L_80286924; } // 80286918
  c->r[4]=0u+0x00000000u; // 8028691C
  c->lr=0x80286924u; f_8028D5C4(c); // 80286920
L_80286924:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 80286924
L_80286928:;
  c->r[26]=c->r[26]+0x0000000Cu; // 80286928
  c->r[30]=c->r[30]+0x00000001u; // 8028692C
L_80286930:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80286930
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80286934
  if (crb(c,0)) { IRQCHK(c); goto L_802868FC; } // 80286938
L_8028693C:;
  c->r[11]=c->r[1]+0x00000020u; // 8028693C
  c->lr=0x80286944u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80286940
  c->r[0]=R32(c->r[1]+0x00000024u); // 80286944
  c->lr=c->r[0]; // 80286948
  c->r[1]=c->r[1]+0x00000020u; // 8028694C
  return; // 80286950
}

// fn_80286954
void f_80286954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80286954
  c->r[0]=c->lr; // 80286958
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028695C
  c->r[11]=c->r[1]+0x00000020u; // 80286960
  c->lr=0x80286968u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80286964
  c->r[28]=c->r[3]|c->r[3]; // 80286968
  c->r[29]=c->r[4]|c->r[4]; // 8028696C
  c->r[30]=c->r[5]|c->r[5]; // 80286970
  c->r[3]=c->r[3]+0x00000004u; // 80286974
  c->lr=0x8028697Cu; f_802872F0(c); // 80286978
  cmps(c,0,(int32_t)c->r[3],0); // 8028697C
  c->r[31]=c->r[3]|c->r[3]; // 80286980
  if (crb(c,2)) { goto L_80286C48; } // 80286984
  c->r[4]=R8(c->r[29]+0x00000008u); // 80286988
  c->r[5]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[5]); // 8028698C
  if (crb(c,2)) { goto L_802869B0; } // 80286990
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80286994
  if (crb(c,2)) { goto L_802869B0; } // 80286998
  c->r[3]=c->r[28]|c->r[28]; // 8028699C
  c->r[4]=c->r[31]|c->r[31]; // 802869A0
  c->r[5]=0u+0x00000001u; // 802869A4
  c->lr=0x802869ACu; f_80286E00(c); // 802869A8
  goto L_80286C48; // 802869AC
L_802869B0:;
  cmps(c,0,(int32_t)c->r[5],0); // 802869B0
  if (crb(c,2)) { goto L_80286A4C; } // 802869B4
  c->r[0]=R32(c->r[29]+0x00000004u); // 802869B8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 802869BC
  if (!crb(c,2)) { goto L_80286A00; } // 802869C0
  c->r[0]=R32(c->r[28]+0x00000020u); // 802869C4
  cmps(c,0,(int32_t)c->r[0],0); // 802869C8
  if (crb(c,2)) { goto L_80286A00; } // 802869CC
  c->r[3]=R8(c->r[3]+0x00000008u); // 802869D0
  c->r[5]=c->r[31]|c->r[31]; // 802869D4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802869D8
  c->lr=0x802869E0u; f_802A5D40(c); // 802869DC
  c->r[12]=R32(c->r[28]+0x00000020u); // 802869E0
  c->r[5]=c->r[3]|c->r[3]; // 802869E4
  c->r[4]=c->r[30]|c->r[30]; // 802869E8
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 802869EC
  c->r[7]=R32(c->r[28]+0x00000024u); // 802869F0
  c->r[3]=0u+0x00000002u; // 802869F4
  c->ctr=c->r[12]; // 802869F8
  if (true) { c->lr=0x80286A00u; dispatch(c,c->ctr); } // 802869FC
L_80286A00:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 80286A00
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 80286A04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80286A08
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80286A0C
  if (!crb(c,0)) { goto L_80286A28; } // 80286A10
  c->r[3]=c->r[28]|c->r[28]; // 80286A14
  c->r[4]=c->r[31]|c->r[31]; // 80286A18
  c->r[5]=0u+0x00000001u; // 80286A1C
  c->lr=0x80286A24u; f_80286E00(c); // 80286A20
  goto L_80286C48; // 80286A24
L_80286A28:;
  if (!crb(c,2)) { goto L_80286C48; } // 80286A28
  c->r[0]=R32(c->r[29]+0x00000004u); // 80286A2C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80286A30
  if (crb(c,1)) { goto L_80286C48; } // 80286A34
  c->r[3]=c->r[28]|c->r[28]; // 80286A38
  c->r[4]=c->r[31]|c->r[31]; // 80286A3C
  c->r[5]=0u+0x00000001u; // 80286A40
  c->lr=0x80286A48u; f_80286E00(c); // 80286A44
  goto L_80286C48; // 80286A48
L_80286A4C:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80286A4C
  if (crb(c,2)) { goto L_80286B3C; } // 80286A50
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286A54
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286A58
  if (!crb(c,2)) { goto L_80286A9C; } // 80286A5C
  c->r[0]=R32(c->r[28]+0x00000020u); // 80286A60
  cmps(c,0,(int32_t)c->r[0],0); // 80286A64
  if (crb(c,2)) { goto L_80286A9C; } // 80286A68
  c->r[3]=R8(c->r[3]+0x00000008u); // 80286A6C
  c->r[5]=c->r[31]|c->r[31]; // 80286A70
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80286A74
  c->lr=0x80286A7Cu; f_802A5D40(c); // 80286A78
  c->r[12]=R32(c->r[28]+0x00000020u); // 80286A7C
  c->r[5]=c->r[3]|c->r[3]; // 80286A80
  c->r[4]=c->r[30]|c->r[30]; // 80286A84
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 80286A88
  c->r[7]=R32(c->r[28]+0x00000024u); // 80286A8C
  c->r[3]=0u+0x00000003u; // 80286A90
  c->ctr=c->r[12]; // 80286A94
  if (true) { c->lr=0x80286A9Cu; dispatch(c,c->ctr); } // 80286A98
L_80286A9C:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 80286A9C
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 80286AA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80286AA4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80286AA8
  if (!crb(c,1)) { goto L_80286AC4; } // 80286AAC
  c->r[3]=c->r[28]|c->r[28]; // 80286AB0
  c->r[4]=c->r[31]|c->r[31]; // 80286AB4
  c->r[5]=0u+0x00000001u; // 80286AB8
  c->lr=0x80286AC0u; f_80286E00(c); // 80286ABC
  goto L_80286C48; // 80286AC0
L_80286AC4:;
  if (!crb(c,2)) { goto L_80286C48; } // 80286AC4
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286AC8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286ACC
  if (!crb(c,0)) { goto L_80286AE8; } // 80286AD0
  c->r[3]=c->r[28]|c->r[28]; // 80286AD4
  c->r[4]=c->r[31]|c->r[31]; // 80286AD8
  c->r[5]=0u+0x00000001u; // 80286ADC
  c->lr=0x80286AE4u; f_80286E00(c); // 80286AE0
  goto L_80286C48; // 80286AE4
L_80286AE8:;
  c->r[27]=0u+0x00000000u; // 80286AE8
  c->r[26]=0u+0x00000000u; // 80286AEC
  c->r[29]=0u+0x00000000u; // 80286AF0
  goto L_80286B2C; // 80286AF4
L_80286AF8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 80286AF8
  c->r[30]=c->r[0]+c->r[26]; // 80286AFC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80286B00
  cmpu(c,0,c->r[0],c->r[31]); // 80286B04
  if (!crb(c,2)) { goto L_80286B24; } // 80286B08
  c->r[3]=R32(c->r[30]+0x00000000u); // 80286B0C
  cmps(c,0,(int32_t)c->r[3],0); // 80286B10
  if (crb(c,2)) { goto L_80286B20; } // 80286B14
  c->r[4]=0u+0x00000000u; // 80286B18
  c->lr=0x80286B20u; f_8028D5C4(c); // 80286B1C
L_80286B20:;
  W32(c->r[30]+0x00000004u,c->r[29]); // 80286B20
L_80286B24:;
  c->r[26]=c->r[26]+0x0000000Cu; // 80286B24
  c->r[27]=c->r[27]+0x00000001u; // 80286B28
L_80286B2C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80286B2C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80286B30
  if (crb(c,0)) { IRQCHK(c); goto L_80286AF8; } // 80286B34
  goto L_80286C48; // 80286B38
L_80286B3C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286B3C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286B40
  if (!crb(c,2)) { goto L_80286B84; } // 80286B44
  c->r[0]=R32(c->r[28]+0x00000020u); // 80286B48
  cmps(c,0,(int32_t)c->r[0],0); // 80286B4C
  if (crb(c,2)) { goto L_80286B84; } // 80286B50
  c->r[3]=R8(c->r[3]+0x00000008u); // 80286B54
  c->r[5]=c->r[31]|c->r[31]; // 80286B58
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80286B5C
  c->lr=0x80286B64u; f_802A5D40(c); // 80286B60
  c->r[12]=R32(c->r[28]+0x00000020u); // 80286B64
  c->r[5]=c->r[3]|c->r[3]; // 80286B68
  c->r[4]=c->r[30]|c->r[30]; // 80286B6C
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 80286B70
  c->r[7]=R32(c->r[28]+0x00000024u); // 80286B74
  c->r[3]=0u+0x00000003u; // 80286B78
  c->ctr=c->r[12]; // 80286B7C
  if (true) { c->lr=0x80286B84u; dispatch(c,c->ctr); } // 80286B80
L_80286B84:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80286B84
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286B88
  if (!crb(c,2)) { goto L_80286BCC; } // 80286B8C
  c->r[0]=R32(c->r[28]+0x00000020u); // 80286B90
  cmps(c,0,(int32_t)c->r[0],0); // 80286B94
  if (crb(c,2)) { goto L_80286BCC; } // 80286B98
  c->r[3]=R8(c->r[31]+0x00000008u); // 80286B9C
  c->r[5]=c->r[31]|c->r[31]; // 80286BA0
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80286BA4
  c->lr=0x80286BACu; f_802A5D40(c); // 80286BA8
  c->r[12]=R32(c->r[28]+0x00000020u); // 80286BAC
  c->r[5]=c->r[3]|c->r[3]; // 80286BB0
  c->r[4]=c->r[30]|c->r[30]; // 80286BB4
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 80286BB8
  c->r[7]=R32(c->r[28]+0x00000024u); // 80286BBC
  c->r[3]=0u+0x00000002u; // 80286BC0
  c->ctr=c->r[12]; // 80286BC4
  if (true) { c->lr=0x80286BCCu; dispatch(c,c->ctr); } // 80286BC8
L_80286BCC:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80286BCC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80286BD0
  if (!crb(c,0)) { goto L_80286BF8; } // 80286BD4
  c->r[0]=R32(c->r[29]+0x00000004u); // 80286BD8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80286BDC
  if (crb(c,1)) { goto L_80286BF8; } // 80286BE0
  c->r[3]=c->r[28]|c->r[28]; // 80286BE4
  c->r[4]=c->r[31]|c->r[31]; // 80286BE8
  c->r[5]=0u+0x00000001u; // 80286BEC
  c->lr=0x80286BF4u; f_80286E00(c); // 80286BF0
  goto L_80286C48; // 80286BF4
L_80286BF8:;
  c->r[30]=0u+0x00000000u; // 80286BF8
  c->r[26]=0u+0x00000000u; // 80286BFC
  c->r[29]=0u+0x00000000u; // 80286C00
  goto L_80286C3C; // 80286C04
L_80286C08:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 80286C08
  c->r[27]=c->r[0]+c->r[26]; // 80286C0C
  c->r[0]=R32(c->r[27]+0x00000004u); // 80286C10
  cmpu(c,0,c->r[0],c->r[31]); // 80286C14
  if (!crb(c,2)) { goto L_80286C34; } // 80286C18
  c->r[3]=R32(c->r[27]+0x00000000u); // 80286C1C
  cmps(c,0,(int32_t)c->r[3],0); // 80286C20
  if (crb(c,2)) { goto L_80286C30; } // 80286C24
  c->r[4]=0u+0x00000000u; // 80286C28
  c->lr=0x80286C30u; f_8028D5C4(c); // 80286C2C
L_80286C30:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 80286C30
L_80286C34:;
  c->r[26]=c->r[26]+0x0000000Cu; // 80286C34
  c->r[30]=c->r[30]+0x00000001u; // 80286C38
L_80286C3C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80286C3C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80286C40
  if (crb(c,0)) { IRQCHK(c); goto L_80286C08; } // 80286C44
L_80286C48:;
  c->r[11]=c->r[1]+0x00000020u; // 80286C48
  c->lr=0x80286C50u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80286C4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80286C50
  c->lr=c->r[0]; // 80286C54
  c->r[1]=c->r[1]+0x00000020u; // 80286C58
  return; // 80286C5C
}

// fn_80286C60
void f_80286C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80286C60
  c->r[0]=c->lr; // 80286C64
  W32(c->r[1]+0x00000034u,c->r[0]); // 80286C68
  c->r[11]=c->r[1]+0x00000030u; // 80286C6C
  c->lr=0x80286C74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80286C70
  c->r[6]=R32(c->r[3]+0x00000014u); // 80286C74
  c->r[31]=c->r[5]|c->r[5]; // 80286C78
  c->r[29]=c->r[3]|c->r[3]; // 80286C7C
  c->r[30]=c->r[4]|c->r[4]; // 80286C80
  c->r[7]=0u+0x00000080u; // 80286C84
  c->r[27]=0u+0xFFFFFFFFu; // 80286C88
  c->r[8]=0u+0x00000000u; // 80286C8C
  c->r[5]=0u+0x00000000u; // 80286C90
  c->ctr=c->r[6]; // 80286C94
  cmps(c,0,(int32_t)c->r[6],0); // 80286C98
  if (!crb(c,1)) { goto L_80286CDC; } // 80286C9C
L_80286CA0:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 80286CA0
  c->r[4]=R32(c->r[4]+c->r[5]); // 80286CA4
  cmps(c,0,(int32_t)c->r[4],0); // 80286CA8
  if (crb(c,2)) { goto L_80286CDC; } // 80286CAC
  if (crb(c,2)) { goto L_80286CBC; } // 80286CB0
  c->r[0]=R8(c->r[4]+0x00000094u); // 80286CB4
  goto L_80286CC0; // 80286CB8
L_80286CBC:;
  c->r[0]=0u+0x00000000u; // 80286CBC
L_80286CC0:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80286CC0
  if (!crb(c,1)) { goto L_80286CD0; } // 80286CC4
  c->r[27]=c->r[8]|c->r[8]; // 80286CC8
  c->r[7]=c->r[0]|c->r[0]; // 80286CCC
L_80286CD0:;
  c->r[5]=c->r[5]+0x0000000Cu; // 80286CD0
  c->r[8]=c->r[8]+0x00000001u; // 80286CD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80286CA0; } // 80286CD8
L_80286CDC:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[6]); // 80286CDC
  if (!crb(c,2)) { goto L_80286D10; } // 80286CE0
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 80286CE4
  c->r[3]=R32(c->r[3]+0x00000010u); // 80286CE8
  c->r[28]=c->r[3]+c->r[0]; // 80286CEC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80286CF0
  cmps(c,0,(int32_t)c->r[3],0); // 80286CF4
  if (crb(c,2)) { goto L_80286D04; } // 80286CF8
  c->r[4]=0u+0x00000000u; // 80286CFC
  c->lr=0x80286D04u; f_8028D5C4(c); // 80286D00
L_80286D04:;
  c->r[0]=0u+0x00000000u; // 80286D04
  c->r[8]=c->r[27]|c->r[27]; // 80286D08
  W32(c->r[28]+0x00000004u,c->r[0]); // 80286D0C
L_80286D10:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 80286D10
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80286D14
  c->r[4]=R32(c->r[29]+0x00000010u); // 80286D18
  c->r[0]=c->r[5]+0x00010000u; // 80286D1C
  c->r[29]=R32(c->r[29]+0x00000000u); // 80286D20
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80286D24
  c->r[28]=c->r[4]+c->r[3]; // 80286D28
  if (!crb(c,2)) { goto L_80286D64; } // 80286D2C
  c->r[3]=R8(c->r[30]+0x00000008u); // 80286D30
  c->r[5]=c->r[30]|c->r[30]; // 80286D34
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80286D38
  c->lr=0x80286D40u; f_802A5D40(c); // 80286D3C
  c->r[5]=c->r[3]|c->r[3]; // 80286D40
  c->r[3]=c->r[29]|c->r[29]; // 80286D44
  c->r[4]=c->r[28]|c->r[28]; // 80286D48
  c->r[6]=0u+0x00000000u; // 80286D4C
  c->lr=0x80286D54u; f_8029D2B8(c); // 80286D50
  c->r[0]=cntlz(c->r[3]); // 80286D54
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80286D58
  if (!crb(c,2)) { goto L_80286D80; } // 80286D5C
  goto L_80286DE8; // 80286D60
L_80286D64:;
  c->r[3]=c->r[29]|c->r[29]; // 80286D64
  c->r[4]=c->r[28]|c->r[28]; // 80286D68
  c->r[6]=0u+0x00000000u; // 80286D6C
  c->lr=0x80286D74u; f_8029D258(c); // 80286D70
  c->r[0]=cntlz(c->r[3]); // 80286D74
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80286D78
  if (crb(c,2)) { goto L_80286DE8; } // 80286D7C
L_80286D80:;
  c->r[4]=R8(c->r[30]+0x00000010u); // 80286D80
  cmpu(c,0,c->r[4],0x00000080u); // 80286D84
  if (!crb(c,0)) { goto L_80286DC0; } // 80286D88
  c->r[0]=0u+0x43300000u; // 80286D8C
  c->r[3]=R32(c->r[28]+0x00000000u); // 80286D90
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80286D94
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[2]=RF64(ea);} // 80286D98
  cmps(c,0,(int32_t)c->r[3],0); // 80286D9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80286DA0
  {uint32_t ea=c->r[2]+0xFFFF9F48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80286DA4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80286DA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80286DAC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80286DB0
  if (crb(c,2)) { goto L_80286DC0; } // 80286DB4
  c->r[4]=0u+0x00000000u; // 80286DB8
  c->lr=0x80286DC0u; f_8028E6E0(c); // 80286DBC
L_80286DC0:;
  {uint32_t ea=c->r[2]+0xFFFF9F34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80286DC0
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80286DC4
  fcmp(c,0,c->f[0],c->f[1]); // 80286DC8
  if (crb(c,2)) { goto L_80286DE0; } // 80286DCC
  c->r[3]=R32(c->r[28]+0x00000000u); // 80286DD0
  cmps(c,0,(int32_t)c->r[3],0); // 80286DD4
  if (crb(c,2)) { goto L_80286DE0; } // 80286DD8
  c->lr=0x80286DE0u; f_8028E784(c); // 80286DDC
L_80286DE0:;
  W32(c->r[28]+0x00000004u,c->r[30]); // 80286DE0
  W8(c->r[28]+0x00000008u,c->r[31]); // 80286DE4
L_80286DE8:;
  c->r[11]=c->r[1]+0x00000030u; // 80286DE8
  c->lr=0x80286DF0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80286DEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80286DF0
  c->lr=c->r[0]; // 80286DF4
  c->r[1]=c->r[1]+0x00000030u; // 80286DF8
  return; // 80286DFC
}

// fn_80286E00
void f_80286E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80286E00
  c->r[0]=c->lr; // 80286E04
  W32(c->r[1]+0x00000034u,c->r[0]); // 80286E08
  c->r[11]=c->r[1]+0x00000030u; // 80286E0C
  c->lr=0x80286E14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80286E10
  c->r[7]=R32(c->r[3]+0x00000014u); // 80286E14
  c->r[29]=c->r[3]|c->r[3]; // 80286E18
  c->r[30]=c->r[4]|c->r[4]; // 80286E1C
  c->r[31]=c->r[5]|c->r[5]; // 80286E20
  c->r[8]=0u+0x00000080u; // 80286E24
  c->r[27]=0u+0xFFFFFFFFu; // 80286E28
  c->r[9]=0u+0x00000000u; // 80286E2C
  c->r[6]=0u+0x00000000u; // 80286E30
  c->ctr=c->r[7]; // 80286E34
  cmps(c,0,(int32_t)c->r[7],0); // 80286E38
  if (!crb(c,1)) { goto L_80286E98; } // 80286E3C
L_80286E40:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80286E40
  c->r[5]=c->r[0]+c->r[6]; // 80286E44
  c->r[0]=R32(c->r[5]+0x00000004u); // 80286E48
  cmpu(c,0,c->r[4],c->r[0]); // 80286E4C
  if (crb(c,2)) { goto L_80286FB0; } // 80286E50
  c->r[5]=R32(c->r[5]+0x00000000u); // 80286E54
  cmps(c,0,(int32_t)c->r[5],0); // 80286E58
  if (!crb(c,2)) { goto L_80286E6C; } // 80286E5C
  c->r[27]=c->r[9]|c->r[9]; // 80286E60
  c->r[8]=0u+0xFFFFFFFFu; // 80286E64
  goto L_80286E8C; // 80286E68
L_80286E6C:;
  if (crb(c,2)) { goto L_80286E78; } // 80286E6C
  c->r[0]=R8(c->r[5]+0x00000094u); // 80286E70
  goto L_80286E7C; // 80286E74
L_80286E78:;
  c->r[0]=0u+0x00000000u; // 80286E78
L_80286E7C:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80286E7C
  if (!crb(c,1)) { goto L_80286E8C; } // 80286E80
  c->r[27]=c->r[9]|c->r[9]; // 80286E84
  c->r[8]=c->r[0]|c->r[0]; // 80286E88
L_80286E8C:;
  c->r[6]=c->r[6]+0x0000000Cu; // 80286E8C
  c->r[9]=c->r[9]+0x00000001u; // 80286E90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80286E40; } // 80286E94
L_80286E98:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 80286E98
  if (!crb(c,2)) { goto L_80286ECC; } // 80286E9C
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 80286EA0
  c->r[3]=R32(c->r[3]+0x00000010u); // 80286EA4
  c->r[28]=c->r[3]+c->r[0]; // 80286EA8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80286EAC
  cmps(c,0,(int32_t)c->r[3],0); // 80286EB0
  if (crb(c,2)) { goto L_80286EC0; } // 80286EB4
  c->r[4]=0u+0x00000000u; // 80286EB8
  c->lr=0x80286EC0u; f_8028D5C4(c); // 80286EBC
L_80286EC0:;
  c->r[0]=0u+0x00000000u; // 80286EC0
  c->r[9]=c->r[27]|c->r[27]; // 80286EC4
  W32(c->r[28]+0x00000004u,c->r[0]); // 80286EC8
L_80286ECC:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 80286ECC
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 80286ED0
  c->r[4]=R32(c->r[29]+0x00000010u); // 80286ED4
  c->r[0]=c->r[5]+0x00010000u; // 80286ED8
  c->r[29]=R32(c->r[29]+0x00000000u); // 80286EDC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80286EE0
  c->r[28]=c->r[4]+c->r[3]; // 80286EE4
  if (!crb(c,2)) { goto L_80286F20; } // 80286EE8
  c->r[3]=R8(c->r[30]+0x00000008u); // 80286EEC
  c->r[5]=c->r[30]|c->r[30]; // 80286EF0
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80286EF4
  c->lr=0x80286EFCu; f_802A5D40(c); // 80286EF8
  c->r[5]=c->r[3]|c->r[3]; // 80286EFC
  c->r[3]=c->r[29]|c->r[29]; // 80286F00
  c->r[4]=c->r[28]|c->r[28]; // 80286F04
  c->r[6]=0u+0x00000000u; // 80286F08
  c->lr=0x80286F10u; f_8029D40C(c); // 80286F0C
  c->r[0]=cntlz(c->r[3]); // 80286F10
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80286F14
  if (!crb(c,2)) { goto L_80286F3C; } // 80286F18
  goto L_80286FB0; // 80286F1C
L_80286F20:;
  c->r[3]=c->r[29]|c->r[29]; // 80286F20
  c->r[4]=c->r[28]|c->r[28]; // 80286F24
  c->r[6]=0u+0x00000000u; // 80286F28
  c->lr=0x80286F30u; f_8029D364(c); // 80286F2C
  c->r[0]=cntlz(c->r[3]); // 80286F30
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80286F34
  if (crb(c,2)) { goto L_80286FB0; } // 80286F38
L_80286F3C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80286F3C
  c->r[4]=0u+0x00000000u; // 80286F40
  c->lr=0x80286F48u; f_8028DA10(c); // 80286F44
  c->r[4]=R8(c->r[30]+0x00000010u); // 80286F48
  cmpu(c,0,c->r[4],0x00000080u); // 80286F4C
  if (!crb(c,0)) { goto L_80286F88; } // 80286F50
  c->r[0]=0u+0x43300000u; // 80286F54
  c->r[3]=R32(c->r[28]+0x00000000u); // 80286F58
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80286F5C
  {uint32_t ea=c->r[2]+0xFFFF9F38u; c->f[2]=RF64(ea);} // 80286F60
  cmps(c,0,(int32_t)c->r[3],0); // 80286F64
  W32(c->r[1]+0x00000008u,c->r[0]); // 80286F68
  {uint32_t ea=c->r[2]+0xFFFF9F48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80286F6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80286F70
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80286F74
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80286F78
  if (crb(c,2)) { goto L_80286F88; } // 80286F7C
  c->r[4]=0u+0x00000000u; // 80286F80
  c->lr=0x80286F88u; f_8028E6E0(c); // 80286F84
L_80286F88:;
  {uint32_t ea=c->r[2]+0xFFFF9F34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80286F88
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80286F8C
  fcmp(c,0,c->f[0],c->f[1]); // 80286F90
  if (crb(c,2)) { goto L_80286FA8; } // 80286F94
  c->r[3]=R32(c->r[28]+0x00000000u); // 80286F98
  cmps(c,0,(int32_t)c->r[3],0); // 80286F9C
  if (crb(c,2)) { goto L_80286FA8; } // 80286FA0
  c->lr=0x80286FA8u; f_8028E784(c); // 80286FA4
L_80286FA8:;
  W32(c->r[28]+0x00000004u,c->r[30]); // 80286FA8
  W8(c->r[28]+0x00000008u,c->r[31]); // 80286FAC
L_80286FB0:;
  c->r[11]=c->r[1]+0x00000030u; // 80286FB0
  c->lr=0x80286FB8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80286FB4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80286FB8
  c->lr=c->r[0]; // 80286FBC
  c->r[1]=c->r[1]+0x00000030u; // 80286FC0
  return; // 80286FC4
}

// fn_80286FC8
void f_80286FC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80286FC8
  c->r[0]=c->lr; // 80286FCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80286FD0
  c->r[11]=c->r[1]+0x00000020u; // 80286FD4
  c->lr=0x80286FDCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80286FD8
  c->r[27]=c->r[3]|c->r[3]; // 80286FDC
  c->r[28]=0u+0x00000000u; // 80286FE0
  c->r[29]=0u+0x00000000u; // 80286FE4
  c->r[31]=0u+0x00000000u; // 80286FE8
  goto L_80287018; // 80286FEC
L_80286FF0:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 80286FF0
  c->r[3]=R32(c->r[29]+c->r[0]); // 80286FF4
  c->r[30]=c->r[0]+c->r[29]; // 80286FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80286FFC
  if (crb(c,2)) { goto L_8028700C; } // 80287000
  c->r[4]=0u+0x00000000u; // 80287004
  c->lr=0x8028700Cu; f_8028D5C4(c); // 80287008
L_8028700C:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 8028700C
  c->r[29]=c->r[29]+0x0000000Cu; // 80287010
  c->r[28]=c->r[28]+0x00000001u; // 80287014
L_80287018:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 80287018
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8028701C
  if (crb(c,0)) { IRQCHK(c); goto L_80286FF0; } // 80287020
  c->r[11]=c->r[1]+0x00000020u; // 80287024
  c->lr=0x8028702Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80287028
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028702C
  c->lr=c->r[0]; // 80287030
  c->r[1]=c->r[1]+0x00000020u; // 80287034
  return; // 80287038
}

// fn_8028703C
void f_8028703C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028703C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80287040
  W32(c->r[3]+0x00000004u,c->r[0]); // 80287044
  W8(c->r[3]+0x00000008u,c->r[0]); // 80287048
  return; // 8028704C
}

// fn_80287050
void f_80287050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287050
  c->r[0]=c->lr; // 80287054
  cmps(c,0,(int32_t)c->r[3],0); // 80287058
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028705C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80287060
  c->r[31]=c->r[4]|c->r[4]; // 80287064
  W32(c->r[1]+0x00000008u,c->r[30]); // 80287068
  c->r[30]=c->r[3]|c->r[3]; // 8028706C
  if (crb(c,2)) { goto L_802870BC; } // 80287070
  c->r[4]=R32(c->r[3]+0x00000000u); // 80287074
  cmps(c,1,(int32_t)c->r[4],0); // 80287078
  if (crb(c,6)) { goto L_8028709C; } // 8028707C
  c->r[0]=R8(c->r[3]+0x00000008u); // 80287080
  cmps(c,0,(int32_t)c->r[0],0); // 80287084
  if (crb(c,2)) { goto L_8028709C; } // 80287088
  if (crb(c,6)) { goto L_8028709C; } // 8028708C
  c->r[3]=c->r[4]|c->r[4]; // 80287090
  c->r[4]=0u+0x00000000u; // 80287094
  c->lr=0x8028709Cu; f_8028D5C4(c); // 80287098
L_8028709C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028709C
  if (crb(c,2)) { goto L_802870AC; } // 802870A0
  c->r[3]=c->r[30]|c->r[30]; // 802870A4
  c->lr=0x802870ACu; f_8029C770(c); // 802870A8
L_802870AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802870AC
  if (!crb(c,1)) { goto L_802870BC; } // 802870B0
  c->r[3]=c->r[30]|c->r[30]; // 802870B4
  c->lr=0x802870BCu; f_800D6AD0(c); // 802870B8
L_802870BC:;
  c->r[3]=c->r[30]|c->r[30]; // 802870BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802870C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802870C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802870C8
  c->lr=c->r[0]; // 802870CC
  c->r[1]=c->r[1]+0x00000010u; // 802870D0
  return; // 802870D4
}

// fn_802870D8
void f_802870D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802870D8
  c->r[0]=c->lr; // 802870DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802870E0
  c->r[11]=c->r[1]+0x00000020u; // 802870E4
  c->lr=0x802870ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802870E8
  cmps(c,0,(int32_t)c->r[3],0); // 802870EC
  c->r[26]=c->r[4]|c->r[4]; // 802870F0
  if (crb(c,2)) { goto L_802871B4; } // 802870F4
  c->r[4]=R32(c->r[3]+0x00000000u); // 802870F8
  c->r[0]=c->r[4]+0xADBF0000u; // 802870FC
  cmpu(c,0,c->r[0],0x00005344u); // 80287100
  if (crb(c,2)) { goto L_80287110; } // 80287104
  c->r[0]=0u+0x00000000u; // 80287108
  goto L_8028713C; // 8028710C
L_80287110:;
  c->r[5]=R16(c->r[3]+0x00000006u); // 80287110
  cmpu(c,0,c->r[5],0x00000100u); // 80287114
  if (!crb(c,0)) { goto L_80287124; } // 80287118
  c->r[0]=0u+0x00000000u; // 8028711C
  goto L_8028713C; // 80287120
L_80287124:;
  c->r[0]=addc(c,~c->r[5],0x00000100u,1); // 80287124
  c->r[4]=0u+0x00000100u; // 80287128
  c->r[4]=c->r[4]|~c->r[5]; // 8028712C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80287130
  c->r[0]=c->r[4]-c->r[0]; // 80287134
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80287138
L_8028713C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8028713C
  if (crb(c,2)) { goto L_802871B4; } // 80287140
  c->r[0]=R32(c->r[3]+0x00000010u); // 80287144
  c->r[28]=c->r[0]+c->r[3]; // 80287148
  c->r[3]=R8(c->r[28]+0x0000000Cu); // 8028714C
  c->r[5]=c->r[28]+0x00000008u; // 80287150
  c->r[4]=R32(c->r[28]+0x00000010u); // 80287154
  c->lr=0x8028715Cu; f_802A5D1C(c); // 80287158
  c->r[31]=c->r[3]|c->r[3]; // 8028715C
  c->r[27]=0u+0x00000000u; // 80287160
  c->r[29]=c->r[31]|c->r[31]; // 80287164
  goto L_802871A8; // 80287168
L_8028716C:;
  c->r[3]=R8(c->r[29]+0x00000010u); // 8028716C
  c->r[5]=c->r[28]+0x00000008u; // 80287170
  c->r[4]=R32(c->r[29]+0x00000014u); // 80287174
  c->lr=0x8028717Cu; f_802A5D1C(c); // 80287178
  c->r[30]=c->r[3]|c->r[3]; // 8028717C
  c->r[3]=R8(c->r[3]+0x00000008u); // 80287180
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80287184
  c->r[5]=c->r[30]|c->r[30]; // 80287188
  c->lr=0x80287190u; f_802A5D40(c); // 8028718C
  c->r[4]=c->r[3]|c->r[3]; // 80287190
  c->r[3]=c->r[26]|c->r[26]; // 80287194
  c->lr=0x8028719Cu; f_80298ABC(c); // 80287198
  W32(c->r[30]+0x00000004u,c->r[3]); // 8028719C
  c->r[29]=c->r[29]+0x00000014u; // 802871A0
  c->r[27]=c->r[27]+0x00000001u; // 802871A4
L_802871A8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802871A8
  cmpu(c,0,c->r[27],c->r[0]); // 802871AC
  if (crb(c,0)) { IRQCHK(c); goto L_8028716C; } // 802871B0
L_802871B4:;
  c->r[11]=c->r[1]+0x00000020u; // 802871B4
  c->lr=0x802871BCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802871B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802871BC
  c->lr=c->r[0]; // 802871C0
  c->r[1]=c->r[1]+0x00000020u; // 802871C4
  return; // 802871C8
}

// fn_802871CC
void f_802871CC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 802871CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 802871D0
  return; // 802871D4
}

// fn_802871D8
void f_802871D8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000000u); // 802871D8
  c->r[0]=c->r[5]+0xADBF0000u; // 802871DC
  cmpu(c,0,c->r[0],0x00005344u); // 802871E0
  if (crb(c,2)) { goto L_802871F0; } // 802871E4
  c->r[0]=0u+0x00000000u; // 802871E8
  goto L_8028721C; // 802871EC
L_802871F0:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 802871F0
  cmpu(c,0,c->r[6],0x00000100u); // 802871F4
  if (!crb(c,0)) { goto L_80287204; } // 802871F8
  c->r[0]=0u+0x00000000u; // 802871FC
  goto L_8028721C; // 80287200
L_80287204:;
  c->r[0]=addc(c,~c->r[6],0x00000100u,1); // 80287204
  c->r[5]=0u+0x00000100u; // 80287208
  c->r[5]=c->r[5]|~c->r[6]; // 8028720C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80287210
  c->r[0]=c->r[5]-c->r[0]; // 80287214
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80287218
L_8028721C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8028721C
  if (!crb(c,2)) { goto L_8028722C; } // 80287220
  c->r[3]=0u+0x00000000u; // 80287224
  return; // 80287228
L_8028722C:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 8028722C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80287230
  c->r[0]=c->r[0]+c->r[4]; // 80287234
  W32(c->r[3]+0x00000004u,c->r[0]); // 80287238
  c->r[3]=0u+0x00000001u; // 8028723C
  return; // 80287240
}

// fn_80287244
void f_80287244(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80287244
  W32(c->r[3]+0x00000000u,c->r[0]); // 80287248
  W32(c->r[3]+0x00000004u,c->r[0]); // 8028724C
  return; // 80287250
}

// fn_80287254
void f_80287254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287254
  c->r[0]=c->lr; // 80287258
  c->r[4]=R32(c->r[3]+0x00000004u); // 8028725C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287260
  cmps(c,0,(int32_t)c->r[4],0); // 80287264
  if (!crb(c,2)) { goto L_80287274; } // 80287268
  c->r[3]=0u+0x00000000u; // 8028726C
  goto L_80287284; // 80287270
L_80287274:;
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 80287274
  c->r[5]=c->r[4]+0x00000008u; // 80287278
  c->r[4]=R32(c->r[4]+0x00000010u); // 8028727C
  c->lr=0x80287284u; f_802A5D40(c); // 80287280
L_80287284:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80287284
  c->r[3]=R32(c->r[3]+0x00000000u); // 80287288
  c->lr=c->r[0]; // 8028728C
  c->r[1]=c->r[1]+0x00000010u; // 80287290
  return; // 80287294
}

// fn_80287298
void f_80287298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287298
  c->r[0]=c->lr; // 8028729C
  c->r[6]=R32(c->r[3]+0x00000004u); // 802872A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802872A4
  cmps(c,0,(int32_t)c->r[6],0); // 802872A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802872AC
  c->r[31]=c->r[4]|c->r[4]; // 802872B0
  if (!crb(c,2)) { goto L_802872C0; } // 802872B4
  c->r[3]=0u+0x00000000u; // 802872B8
  goto L_802872D0; // 802872BC
L_802872C0:;
  c->r[3]=R8(c->r[6]+0x0000000Cu); // 802872C0
  c->r[5]=c->r[6]+0x00000008u; // 802872C4
  c->r[4]=R32(c->r[6]+0x00000010u); // 802872C8
  c->lr=0x802872D0u; f_802A5D40(c); // 802872CC
L_802872D0:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 802872D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802872D4
  c->r[3]=c->r[3]+c->r[0]; // 802872D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802872DC
  c->r[3]=c->r[3]+0x00000004u; // 802872E0
  c->lr=c->r[0]; // 802872E4
  c->r[1]=c->r[1]+0x00000010u; // 802872E8
  return; // 802872EC
}

// fn_802872F0
void f_802872F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802872F0
  c->r[0]=c->lr; // 802872F4
  cmps(c,0,(int32_t)c->r[4],0); // 802872F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802872FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80287300
  c->r[31]=c->r[4]|c->r[4]; // 80287304
  W32(c->r[1]+0x00000008u,c->r[30]); // 80287308
  c->r[30]=c->r[3]|c->r[3]; // 8028730C
  if (!crb(c,2)) { goto L_8028731C; } // 80287310
  c->r[3]=0u+0x00000000u; // 80287314
  goto L_8028734C; // 80287318
L_8028731C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8028731C
  cmps(c,0,(int32_t)c->r[4],0); // 80287320
  if (crb(c,2)) { goto L_80287338; } // 80287324
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 80287328
  c->r[5]=c->r[4]+0x00000008u; // 8028732C
  c->r[4]=R32(c->r[4]+0x00000010u); // 80287330
  c->lr=0x80287338u; f_802A5D40(c); // 80287334
L_80287338:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 80287338
  c->r[3]=R8(c->r[31]+0x0000000Cu); // 8028733C
  c->r[4]=R32(c->r[31]+0x00000010u); // 80287340
  c->r[5]=c->r[5]+0x00000008u; // 80287344
  c->lr=0x8028734Cu; f_802A5D40(c); // 80287348
L_8028734C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028734C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80287350
  c->r[30]=R32(c->r[1]+0x00000008u); // 80287354
  c->lr=c->r[0]; // 80287358
  c->r[1]=c->r[1]+0x00000010u; // 8028735C
  return; // 80287360
}

// fn_80287364
void f_80287364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287364
  c->r[0]=c->lr; // 80287368
  c->r[6]=0u+0x00000000u; // 8028736C
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287370
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287374
  c->r[7]=c->r[3]+0x00000064u; // 80287378
  c->r[4]=c->r[3]+0x00000084u; // 8028737C
  c->r[8]=c->r[3]+0x0000000Cu; // 80287380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80287384
  c->r[5]=0u+0x00000001u; // 80287388
  c->r[0]=0u+0xFFFFFFFFu; // 8028738C
  cmpu(c,0,c->r[7],c->r[4]); // 80287390
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80287394
  c->r[31]=c->r[3]|c->r[3]; // 80287398
  W32(c->r[3]+0x00000010u,c->r[6]); // 8028739C
  W32(c->r[3]+0x00000000u,c->r[6]); // 802873A0
  W32(c->r[3]+0x00000004u,c->r[6]); // 802873A4
  W32(c->r[3]+0x00000008u,c->r[6]); // 802873A8
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 802873AC
  W32(c->r[3]+0x00000010u,c->r[8]); // 802873B0
  W8(c->r[3]+0x00000018u,c->r[6]); // 802873B4
  W8(c->r[3]+0x00000019u,c->r[5]); // 802873B8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802873BC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 802873C0
  W32(c->r[3]+0x00000024u,c->r[6]); // 802873C4
  W32(c->r[3]+0x00000028u,c->r[6]); // 802873C8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 802873CC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 802873D0
  W32(c->r[3]+0x00000034u,c->r[6]); // 802873D4
  W32(c->r[3]+0x00000038u,c->r[6]); // 802873D8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 802873DC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 802873E0
  W32(c->r[3]+0x00000044u,c->r[6]); // 802873E4
  W32(c->r[3]+0x00000048u,c->r[6]); // 802873E8
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 802873EC
  W32(c->r[3]+0x00000050u,c->r[0]); // 802873F0
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 802873F4
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 802873F8
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 802873FC
  W32(c->r[3]+0x00000060u,c->r[6]); // 80287400
  if (!crb(c,0)) { goto L_8028757C; } // 80287404
  c->r[6]=c->r[3]+0x00000064u; // 80287408
  c->r[5]=c->r[3]+0x00000004u; // 8028740C
  c->r[8]=c->r[4]-c->r[6]; // 80287410
  c->r[9]=c->r[8]+0x0000000Fu; // 80287414
  c->r[0]=sraw(c,c->r[9],4); // 80287418
  c->r[10]=addc(c,c->r[0],0,c->xer_ca); // 8028741C
  c->r[11]=c->r[10]+0x00000001u; // 80287420
  cmps(c,0,(int32_t)c->r[11],8); // 80287424
  if (!crb(c,1)) { goto L_80287540; } // 80287428
  cmpu(c,0,c->r[6],c->r[4]); // 8028742C
  c->r[4]=0u+0x00000000u; // 80287430
  c->r[6]=0u+0x00000000u; // 80287434
  if (crb(c,1)) { goto L_80287460; } // 80287438
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 8028743C
  c->r[8]=0u+0x00000001u; // 80287440
  if (!crb(c,2)) { goto L_80287454; } // 80287444
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 80287448
  if (crb(c,2)) { goto L_80287454; } // 8028744C
  c->r[8]=0u+0x00000000u; // 80287450
L_80287454:;
  cmps(c,0,(int32_t)c->r[8],0); // 80287454
  if (crb(c,2)) { goto L_80287460; } // 80287458
  c->r[6]=0u+0x00000001u; // 8028745C
L_80287460:;
  cmps(c,0,(int32_t)c->r[6],0); // 80287460
  if (crb(c,2)) { goto L_80287490; } // 80287464
  c->r[8]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[8]); // 80287468
  c->r[6]=0u+0x00000001u; // 8028746C
  if (!crb(c,2)) { goto L_80287484; } // 80287470
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 80287474
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80287478
  if (crb(c,2)) { goto L_80287484; } // 8028747C
  c->r[6]=0u+0x00000000u; // 80287480
L_80287484:;
  cmps(c,0,(int32_t)c->r[6],0); // 80287484
  if (crb(c,2)) { goto L_80287490; } // 80287488
  c->r[4]=0u+0x00000001u; // 8028748C
L_80287490:;
  cmps(c,0,(int32_t)c->r[4],0); // 80287490
  if (crb(c,2)) { goto L_80287540; } // 80287494
  c->r[0]=c->r[5]+0x0000007Fu; // 80287498
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028749C
  c->r[0]=c->r[0]-c->r[7]; // 802874A0
  c->r[4]=0u+0x00000000u; // 802874A4
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 802874A8
  c->ctr=c->r[0]; // 802874AC
  cmpu(c,0,c->r[7],c->r[5]); // 802874B0
  if (!crb(c,0)) { goto L_80287540; } // 802874B4
L_802874B8:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 802874B8
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 802874BC
  W32(c->r[7]+0x00000008u,c->r[4]); // 802874C0
  W32(c->r[7]+0x0000000Cu,c->r[4]); // 802874C4
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 802874C8
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 802874CC
  W32(c->r[7]+0x00000018u,c->r[4]); // 802874D0
  W32(c->r[7]+0x0000001Cu,c->r[4]); // 802874D4
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 802874D8
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 802874DC
  W32(c->r[7]+0x00000028u,c->r[4]); // 802874E0
  W32(c->r[7]+0x0000002Cu,c->r[4]); // 802874E4
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[0]);} // 802874E8
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 802874EC
  W32(c->r[7]+0x00000038u,c->r[4]); // 802874F0
  W32(c->r[7]+0x0000003Cu,c->r[4]); // 802874F4
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[0]);} // 802874F8
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[0]);} // 802874FC
  W32(c->r[7]+0x00000048u,c->r[4]); // 80287500
  W32(c->r[7]+0x0000004Cu,c->r[4]); // 80287504
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[0]);} // 80287508
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[0]);} // 8028750C
  W32(c->r[7]+0x00000058u,c->r[4]); // 80287510
  W32(c->r[7]+0x0000005Cu,c->r[4]); // 80287514
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 80287518
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[0]);} // 8028751C
  W32(c->r[7]+0x00000068u,c->r[4]); // 80287520
  W32(c->r[7]+0x0000006Cu,c->r[4]); // 80287524
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 80287528
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 8028752C
  W32(c->r[7]+0x00000078u,c->r[4]); // 80287530
  W32(c->r[7]+0x0000007Cu,c->r[4]); // 80287534
  c->r[7]=c->r[7]+0x00000080u; // 80287538
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802874B8; } // 8028753C
L_80287540:;
  c->r[4]=c->r[3]+0x00000084u; // 80287540
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287544
  c->r[0]=c->r[4]+0x0000000Fu; // 80287548
  c->r[5]=0u+0x00000000u; // 8028754C
  c->r[0]=c->r[0]-c->r[7]; // 80287550
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 80287554
  c->ctr=c->r[0]; // 80287558
  cmpu(c,0,c->r[7],c->r[4]); // 8028755C
  if (!crb(c,0)) { goto L_8028757C; } // 80287560
L_80287564:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 80287564
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 80287568
  W32(c->r[7]+0x00000008u,c->r[5]); // 8028756C
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 80287570
  c->r[7]=c->r[7]+0x00000010u; // 80287574
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80287564; } // 80287578
L_8028757C:;
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028757C
  c->r[6]=c->r[3]+0x00000094u; // 80287580
  c->r[0]=0u+0x00000000u; // 80287584
  c->r[4]=c->r[3]+0x000000B4u; // 80287588
  cmpu(c,0,c->r[6],c->r[4]); // 8028758C
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 80287590
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 80287594
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 80287598
  W32(c->r[3]+0x00000090u,c->r[0]); // 8028759C
  if (!crb(c,0)) { goto L_80287718; } // 802875A0
  c->r[7]=c->r[3]+0x00000094u; // 802875A4
  c->r[5]=c->r[3]+0x00000034u; // 802875A8
  c->r[8]=c->r[4]-c->r[7]; // 802875AC
  c->r[9]=c->r[8]+0x0000000Fu; // 802875B0
  c->r[0]=sraw(c,c->r[9],4); // 802875B4
  c->r[10]=addc(c,c->r[0],0,c->xer_ca); // 802875B8
  c->r[11]=c->r[10]+0x00000001u; // 802875BC
  cmps(c,0,(int32_t)c->r[11],8); // 802875C0
  if (!crb(c,1)) { goto L_802876DC; } // 802875C4
  cmpu(c,0,c->r[7],c->r[4]); // 802875C8
  c->r[4]=0u+0x00000000u; // 802875CC
  c->r[7]=0u+0x00000000u; // 802875D0
  if (crb(c,1)) { goto L_802875FC; } // 802875D4
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 802875D8
  c->r[8]=0u+0x00000001u; // 802875DC
  if (!crb(c,2)) { goto L_802875F0; } // 802875E0
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 802875E4
  if (crb(c,2)) { goto L_802875F0; } // 802875E8
  c->r[8]=0u+0x00000000u; // 802875EC
L_802875F0:;
  cmps(c,0,(int32_t)c->r[8],0); // 802875F0
  if (crb(c,2)) { goto L_802875FC; } // 802875F4
  c->r[7]=0u+0x00000001u; // 802875F8
L_802875FC:;
  cmps(c,0,(int32_t)c->r[7],0); // 802875FC
  if (crb(c,2)) { goto L_8028762C; } // 80287600
  c->r[8]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[8]); // 80287604
  c->r[7]=0u+0x00000001u; // 80287608
  if (!crb(c,2)) { goto L_80287620; } // 8028760C
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 80287610
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80287614
  if (crb(c,2)) { goto L_80287620; } // 80287618
  c->r[7]=0u+0x00000000u; // 8028761C
L_80287620:;
  cmps(c,0,(int32_t)c->r[7],0); // 80287620
  if (crb(c,2)) { goto L_8028762C; } // 80287624
  c->r[4]=0u+0x00000001u; // 80287628
L_8028762C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8028762C
  if (crb(c,2)) { goto L_802876DC; } // 80287630
  c->r[0]=c->r[5]+0x0000007Fu; // 80287634
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287638
  c->r[0]=c->r[0]-c->r[6]; // 8028763C
  c->r[4]=0u+0x00000000u; // 80287640
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 80287644
  c->ctr=c->r[0]; // 80287648
  cmpu(c,0,c->r[6],c->r[5]); // 8028764C
  if (!crb(c,0)) { goto L_802876DC; } // 80287650
L_80287654:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80287654
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 80287658
  W32(c->r[6]+0x00000008u,c->r[4]); // 8028765C
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 80287660
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 80287664
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 80287668
  W32(c->r[6]+0x00000018u,c->r[4]); // 8028766C
  W32(c->r[6]+0x0000001Cu,c->r[4]); // 80287670
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[0]);} // 80287674
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[0]);} // 80287678
  W32(c->r[6]+0x00000028u,c->r[4]); // 8028767C
  W32(c->r[6]+0x0000002Cu,c->r[4]); // 80287680
  {uint32_t ea=c->r[6]+0x00000030u; WF32(ea,c->f[0]);} // 80287684
  {uint32_t ea=c->r[6]+0x00000034u; WF32(ea,c->f[0]);} // 80287688
  W32(c->r[6]+0x00000038u,c->r[4]); // 8028768C
  W32(c->r[6]+0x0000003Cu,c->r[4]); // 80287690
  {uint32_t ea=c->r[6]+0x00000040u; WF32(ea,c->f[0]);} // 80287694
  {uint32_t ea=c->r[6]+0x00000044u; WF32(ea,c->f[0]);} // 80287698
  W32(c->r[6]+0x00000048u,c->r[4]); // 8028769C
  W32(c->r[6]+0x0000004Cu,c->r[4]); // 802876A0
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 802876A4
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 802876A8
  W32(c->r[6]+0x00000058u,c->r[4]); // 802876AC
  W32(c->r[6]+0x0000005Cu,c->r[4]); // 802876B0
  {uint32_t ea=c->r[6]+0x00000060u; WF32(ea,c->f[0]);} // 802876B4
  {uint32_t ea=c->r[6]+0x00000064u; WF32(ea,c->f[0]);} // 802876B8
  W32(c->r[6]+0x00000068u,c->r[4]); // 802876BC
  W32(c->r[6]+0x0000006Cu,c->r[4]); // 802876C0
  {uint32_t ea=c->r[6]+0x00000070u; WF32(ea,c->f[0]);} // 802876C4
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 802876C8
  W32(c->r[6]+0x00000078u,c->r[4]); // 802876CC
  W32(c->r[6]+0x0000007Cu,c->r[4]); // 802876D0
  c->r[6]=c->r[6]+0x00000080u; // 802876D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80287654; } // 802876D8
L_802876DC:;
  c->r[4]=c->r[3]+0x000000B4u; // 802876DC
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 802876E0
  c->r[0]=c->r[4]+0x0000000Fu; // 802876E4
  c->r[5]=0u+0x00000000u; // 802876E8
  c->r[0]=c->r[0]-c->r[6]; // 802876EC
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 802876F0
  c->ctr=c->r[0]; // 802876F4
  cmpu(c,0,c->r[6],c->r[4]); // 802876F8
  if (!crb(c,0)) { goto L_80287718; } // 802876FC
L_80287700:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80287700
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 80287704
  W32(c->r[6]+0x00000008u,c->r[5]); // 80287708
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 8028770C
  c->r[6]=c->r[6]+0x00000010u; // 80287710
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80287700; } // 80287714
L_80287718:;
  c->r[4]=0u+0x80280000u; // 80287718
  c->r[5]=0u+0x80280000u; // 8028771C
  c->r[4]=c->r[4]+0x0000780Cu; // 80287720
  c->r[6]=0u+0x0000000Cu; // 80287724
  c->r[5]=c->r[5]+0x0000782Cu; // 80287728
  c->r[7]=0u+0x00000003u; // 8028772C
  c->r[3]=c->r[3]+0x000000B4u; // 80287730
  c->lr=0x80287738u; f_80185B6C(c); // 80287734
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287738
  c->r[0]=0u+0x00000000u; // 8028773C
  W32(c->r[31]+0x00000034u,c->r[0]); // 80287740
  c->r[3]=c->r[31]|c->r[31]; // 80287744
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80287748
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 8028774C
  W32(c->r[31]+0x00000038u,c->r[0]); // 80287750
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80287754
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80287758
  W32(c->r[31]+0x00000024u,c->r[0]); // 8028775C
  W32(c->r[31]+0x00000028u,c->r[0]); // 80287760
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 80287764
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 80287768
  W32(c->r[31]+0x00000044u,c->r[0]); // 8028776C
  W32(c->r[31]+0x00000048u,c->r[0]); // 80287770
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80287774
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 80287778
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8028777C
  W32(c->r[31]+0x00000060u,c->r[0]); // 80287780
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 80287784
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 80287788
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 8028778C
  W32(c->r[31]+0x00000090u,c->r[0]); // 80287790
  W32(c->r[31]+0x000000D8u,c->r[0]); // 80287794
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80287798
  W32(c->r[31]+0x000000F4u,c->r[0]); // 8028779C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 802877A0
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 802877A4
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 802877A8
  W32(c->r[31]+0x00000070u,c->r[0]); // 802877AC
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 802877B0
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 802877B4
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 802877B8
  W32(c->r[31]+0x000000A0u,c->r[0]); // 802877BC
  W32(c->r[31]+0x000000DCu,c->r[0]); // 802877C0
  W32(c->r[31]+0x000000E8u,c->r[0]); // 802877C4
  W32(c->r[31]+0x000000F8u,c->r[0]); // 802877C8
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 802877CC
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 802877D0
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 802877D4
  W32(c->r[31]+0x00000080u,c->r[0]); // 802877D8
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 802877DC
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 802877E0
  W32(c->r[31]+0x000000ACu,c->r[0]); // 802877E4
  W32(c->r[31]+0x000000B0u,c->r[0]); // 802877E8
  W32(c->r[31]+0x000000E0u,c->r[0]); // 802877EC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 802877F0
  W32(c->r[31]+0x000000FCu,c->r[0]); // 802877F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802877F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802877FC
  c->lr=c->r[0]; // 80287800
  c->r[1]=c->r[1]+0x00000010u; // 80287804
  return; // 80287808
}

// fn_8028780C
void f_8028780C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028780C
  c->r[4]=c->r[3]+0x00000004u; // 80287810
  W32(c->r[3]+0x00000004u,c->r[0]); // 80287814
  W32(c->r[3]+0x00000008u,c->r[0]); // 80287818
  W32(c->r[3]+0x00000000u,c->r[0]); // 8028781C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80287820
  W32(c->r[3]+0x00000008u,c->r[4]); // 80287824
  return; // 80287828
}

// fn_8028782C
void f_8028782C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028782C
  c->r[0]=c->lr; // 80287830
  cmps(c,0,(int32_t)c->r[3],0); // 80287834
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028783C
  c->r[31]=c->r[4]|c->r[4]; // 80287840
  W32(c->r[1]+0x00000008u,c->r[30]); // 80287844
  c->r[30]=c->r[3]|c->r[3]; // 80287848
  if (crb(c,2)) { goto L_80287868; } // 8028784C
  c->r[4]=0u+0x00000000u; // 80287850
  c->lr=0x80287858u; f_802A7B78(c); // 80287854
  cmps(c,0,(int32_t)c->r[31],0); // 80287858
  if (!crb(c,1)) { goto L_80287868; } // 8028785C
  c->r[3]=c->r[30]|c->r[30]; // 80287860
  c->lr=0x80287868u; f_800D6AD0(c); // 80287864
L_80287868:;
  c->r[3]=c->r[30]|c->r[30]; // 80287868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028786C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80287870
  c->r[0]=R32(c->r[1]+0x00000014u); // 80287874
  c->lr=c->r[0]; // 80287878
  c->r[1]=c->r[1]+0x00000010u; // 8028787C
  return; // 80287880
}

// fn_80287884
void f_80287884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287884
  c->r[0]=c->lr; // 80287888
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028788C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80287890
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80287894
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80287898
  if (!crb(c,2)) { goto L_802878CC; } // 8028789C
  c->r[31]=0u+0x80420000u; // 802878A0
  c->r[3]=c->r[31]+0xFFFFA968u; // 802878A4
  c->lr=0x802878ACu; f_80287364(c); // 802878A8
  c->r[4]=0u+0x80280000u; // 802878AC
  c->r[5]=0u+0x80420000u; // 802878B0
  c->r[3]=c->r[31]+0xFFFFA968u; // 802878B4
  c->r[4]=c->r[4]+0x000078E8u; // 802878B8
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 802878BC
  c->lr=0x802878C4u; f_8018566C(c); // 802878C0
  c->r[0]=0u+0x00000001u; // 802878C4
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 802878C8
L_802878CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802878CC
  c->r[3]=0u+0x80420000u; // 802878D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802878D4
  c->r[3]=c->r[3]+0xFFFFA968u; // 802878D8
  c->lr=c->r[0]; // 802878DC
  c->r[1]=c->r[1]+0x00000010u; // 802878E0
  return; // 802878E4
}

// fn_802878E8
void f_802878E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802878E8
  c->r[0]=c->lr; // 802878EC
  cmps(c,0,(int32_t)c->r[3],0); // 802878F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802878F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802878F8
  c->r[31]=c->r[4]|c->r[4]; // 802878FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80287900
  c->r[30]=c->r[3]|c->r[3]; // 80287904
  if (crb(c,2)) { goto L_80287944; } // 80287908
  c->r[4]=0u+0x80280000u; // 8028790C
  c->r[5]=0u+0x0000000Cu; // 80287910
  c->r[4]=c->r[4]+0x0000782Cu; // 80287914
  c->r[6]=0u+0x00000003u; // 80287918
  c->r[3]=c->r[3]+0x000000B4u; // 8028791C
  c->lr=0x80287924u; f_80185C64(c); // 80287920
  c->r[3]=addc(c,c->r[30],0x00000008u,0); cr0(c,c->r[3]); // 80287924
  if (crb(c,2)) { goto L_80287934; } // 80287928
  c->r[4]=0u+0x00000000u; // 8028792C
  c->lr=0x80287934u; f_802A7B78(c); // 80287930
L_80287934:;
  cmps(c,0,(int32_t)c->r[31],0); // 80287934
  if (!crb(c,1)) { goto L_80287944; } // 80287938
  c->r[3]=c->r[30]|c->r[30]; // 8028793C
  c->lr=0x80287944u; f_800D6AD0(c); // 80287940
L_80287944:;
  c->r[3]=c->r[30]|c->r[30]; // 80287944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80287948
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028794C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80287950
  c->lr=c->r[0]; // 80287954
  c->r[1]=c->r[1]+0x00000010u; // 80287958
  return; // 8028795C
}

// fn_80287960
void f_80287960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287960
  c->r[0]=c->lr; // 80287964
  W32(c->r[1]+0x00000024u,c->r[0]); // 80287968
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028796C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80287970
  W32(c->r[1]+0x00000014u,c->r[29]); // 80287974
  c->r[29]=c->r[3]|c->r[3]; // 80287978
  c->r[0]=R8(c->r[3]+0x00000018u); // 8028797C
  cmps(c,0,(int32_t)c->r[0],0); // 80287980
  if (!crb(c,2)) { goto L_80287A60; } // 80287984
  c->r[30]=0u+0x80420000u; // 80287988
  c->r[4]=0u+0x00000000u; // 8028798C
  c->r[3]=c->r[30]+0xFFFFA620u; // 80287990
  c->r[5]=0u+0x00000100u; // 80287994
  c->lr=0x8028799Cu; f_80004688(c); // 80287998
  c->r[3]=c->r[30]+0xFFFFA620u; // 8028799C
  c->r[4]=0u+0x00000100u; // 802879A0
  c->lr=0x802879A8u; f_8015C060(c); // 802879A4
  c->r[0]=c->r[30]+0xFFFFA620u; // 802879A8
  W32(c->r[29]+0x00000004u,c->r[0]); // 802879AC
  c->lr=0x802879B4u; f_80160C68(c); // 802879B0
  c->r[31]=c->r[3]|c->r[3]; // 802879B4
  c->r[3]=c->r[29]+0x000000D8u; // 802879B8
  c->r[4]=c->r[29]+0x000000E4u; // 802879BC
  c->lr=0x802879C4u; f_8017962C(c); // 802879C0
  c->r[3]=c->r[29]+0x000000DCu; // 802879C4
  c->r[4]=c->r[29]+0x000000E8u; // 802879C8
  c->lr=0x802879D0u; f_80179640(c); // 802879CC
  c->r[3]=c->r[29]+0x000000E0u; // 802879D0
  c->r[4]=c->r[29]+0x000000ECu; // 802879D4
  c->lr=0x802879DCu; f_80179654(c); // 802879D8
  c->r[3]=0u+0x00000000u; // 802879DC
  c->r[4]=0u+0x00000000u; // 802879E0
  c->lr=0x802879E8u; f_80179500(c); // 802879E4
  c->r[3]=0u+0x00000000u; // 802879E8
  c->r[4]=0u+0x00000000u; // 802879EC
  c->lr=0x802879F4u; f_80179564(c); // 802879F0
  c->r[3]=0u+0x00000000u; // 802879F4
  c->r[4]=0u+0x00000000u; // 802879F8
  c->lr=0x80287A00u; f_801795C8(c); // 802879FC
  c->r[3]=0u+0x80290000u; // 80287A00
  c->r[3]=c->r[3]+0xFFFF81FCu; // 80287A04
  c->lr=0x80287A0Cu; f_8017A7DC(c); // 80287A08
  W32(c->r[29]+0x00000014u,c->r[3]); // 80287A0C
  c->r[30]=0u+0x80420000u; // 80287A10
  c->r[3]=c->r[30]+0xFFFFA720u; // 80287A14
  c->r[4]=0u+0x00000000u; // 80287A18
  c->r[5]=0u+0x00000200u; // 80287A1C
  c->lr=0x80287A24u; f_80004688(c); // 80287A20
  c->r[8]=c->r[30]+0xFFFFA720u; // 80287A24
  c->r[0]=c->r[13]+0xFFFFA450u; // 80287A28
  c->r[7]=c->r[13]+0xFFFFA454u; // 80287A2C
  c->r[6]=c->r[13]+0xFFFFA458u; // 80287A30
  c->r[5]=c->r[13]+0xFFFFA45Cu; // 80287A34
  c->r[4]=c->r[13]+0xFFFFA460u; // 80287A38
  W32(c->r[8]+0x00000004u,c->r[0]); // 80287A3C
  c->r[0]=0u+0x00000001u; // 80287A40
  c->r[3]=c->r[31]|c->r[31]; // 80287A44
  W32(c->r[8]+0x00000008u,c->r[7]); // 80287A48
  W32(c->r[8]+0x0000000Cu,c->r[6]); // 80287A4C
  W32(c->r[8]+0x00000010u,c->r[5]); // 80287A50
  W32(c->r[8]+0x00000014u,c->r[4]); // 80287A54
  W8(c->r[29]+0x00000018u,c->r[0]); // 80287A58
  c->lr=0x80287A60u; f_80160C90(c); // 80287A5C
L_80287A60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80287A60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80287A64
  c->r[30]=R32(c->r[1]+0x00000018u); // 80287A68
  c->r[29]=R32(c->r[1]+0x00000014u); // 80287A6C
  c->lr=c->r[0]; // 80287A70
  c->r[1]=c->r[1]+0x00000020u; // 80287A74
  return; // 80287A78
}

// Shutdown__Q44nw4r3snd6detail9AxManagerFv
void f_80287A7C(Ctx* __restrict c) {
  trace_call(0x80287A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287A7C
  c->r[0]=c->lr; // 80287A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287A84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80287A88
  c->r[31]=c->r[3]|c->r[3]; // 80287A8C
  c->r[0]=R8(c->r[3]+0x00000018u); // 80287A90
  cmps(c,0,(int32_t)c->r[0],0); // 80287A94
  if (crb(c,2)) { goto L_80287B10; } // 80287A98
  c->r[3]=R32(c->r[3]+0x00000014u); // 80287A9C
  c->lr=0x80287AA4u; f_8017A7DC(c); // 80287AA0
  c->r[3]=c->r[31]|c->r[31]; // 80287AA4
  c->r[4]=0u+0x00000000u; // 80287AA8
  c->lr=0x80287AB0u; f_802886B4(c); // 80287AAC
  c->r[3]=c->r[31]|c->r[31]; // 80287AB0
  c->r[4]=0u+0x00000001u; // 80287AB4
  c->lr=0x80287ABCu; f_802886B4(c); // 80287AB8
  c->r[3]=c->r[31]|c->r[31]; // 80287ABC
  c->r[4]=0u+0x00000002u; // 80287AC0
  c->lr=0x80287AC8u; f_802886B4(c); // 80287AC4
  c->r[3]=R32(c->r[31]+0x000000D8u); // 80287AC8
  c->r[4]=R32(c->r[31]+0x000000E4u); // 80287ACC
  c->lr=0x80287AD4u; f_80179500(c); // 80287AD0
  c->r[3]=R32(c->r[31]+0x000000DCu); // 80287AD4
  c->r[4]=R32(c->r[31]+0x000000E8u); // 80287AD8
  c->lr=0x80287AE0u; f_80179564(c); // 80287ADC
  c->r[3]=R32(c->r[31]+0x000000E0u); // 80287AE0
  c->r[4]=R32(c->r[31]+0x000000ECu); // 80287AE4
  c->lr=0x80287AECu; f_801795C8(c); // 80287AE8
  c->r[0]=0u+0x00000000u; // 80287AEC
  W32(c->r[31]+0x000000D8u,c->r[0]); // 80287AF0
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80287AF4
  W32(c->r[31]+0x000000DCu,c->r[0]); // 80287AF8
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80287AFC
  W32(c->r[31]+0x000000E0u,c->r[0]); // 80287B00
  W32(c->r[31]+0x000000ECu,c->r[0]); // 80287B04
  W32(c->r[31]+0x00000004u,c->r[0]); // 80287B08
  W8(c->r[31]+0x00000018u,c->r[0]); // 80287B0C
L_80287B10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80287B10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80287B14
  c->lr=c->r[0]; // 80287B18
  c->r[1]=c->r[1]+0x00000010u; // 80287B1C
  return; // 80287B20
}

// GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv
void f_80287B24(Ctx* __restrict c) {
  trace_call(0x80287B24u);
  c->r[5]=R32(c->r[3]+0x00000024u); // 80287B24
  c->r[0]=R32(c->r[3]+0x00000028u); // 80287B28
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287B2C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80287B30
  if (crb(c,0)) { goto L_80287B40; } // 80287B34
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80287B38
  goto L_80287B88; // 80287B3C
L_80287B40:;
  c->r[4]=0u+0x43300000u; // 80287B40
  c->r[0]=c->r[0]^0x80000000u; // 80287B44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80287B48
  c->r[0]=c->r[5]^0x80000000u; // 80287B4C
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[4]=RF64(ea);} // 80287B50
  W32(c->r[1]+0x00000008u,c->r[4]); // 80287B54
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287B58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80287B5C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80287B60
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 80287B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287B68
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80287B6C
  W32(c->r[1]+0x00000010u,c->r[4]); // 80287B70
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80287B74
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80287B78
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80287B7C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80287B80
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80287B84
L_80287B88:;
  c->r[1]=c->r[1]+0x00000020u; // 80287B88
  return; // 80287B8C
}

// Update__Q44nw4r3snd6detail9AxManagerFv
void f_80287B90(Ctx* __restrict c) {
  trace_call(0x80287B90u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287B90
  c->r[0]=c->lr; // 80287B94
  W32(c->r[1]+0x00000074u,c->r[0]); // 80287B98
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80287B9C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80287BA0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80287BA4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80287BA8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80287BAC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80287BB0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 80287BB4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 80287BB8
  c->r[0]=0u+0x43300000u; // 80287BBC
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[28]=c->ps1[28]=RF32(ea);} // 80287BC0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80287BC4
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[29]=c->ps1[29]=RF32(ea);} // 80287BC8
  W32(c->r[1]+0x00000028u,c->r[30]); // 80287BCC
  c->r[30]=0u+0x00000000u; // 80287BD0
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[31]=RF64(ea);} // 80287BD4
  W32(c->r[1]+0x00000024u,c->r[29]); // 80287BD8
  c->r[29]=c->r[3]|c->r[3]; // 80287BDC
  {uint32_t ea=c->r[2]+0xFFFF9F60u; c->f[30]=c->ps1[30]=RF32(ea);} // 80287BE0
  c->r[31]=c->r[29]|c->r[29]; // 80287BE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80287BE8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80287BEC
L_80287BF0:;
  c->r[3]=R32(c->r[31]+0x00000090u); // 80287BF0
  c->r[4]=0u+0x00000000u; // 80287BF4
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 80287BF8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287BFC
  if (!crb(c,0)) { goto L_80287C20; } // 80287C00
  c->r[3]=R32(c->r[31]+0x00000090u); // 80287C04
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 80287C08
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287C0C
  if (!crb(c,0)) { goto L_80287C1C; } // 80287C10
  c->r[0]=c->r[3]+0x00000001u; // 80287C14
  W32(c->r[31]+0x00000090u,c->r[0]); // 80287C18
L_80287C1C:;
  c->r[4]=0u+0x00000001u; // 80287C1C
L_80287C20:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 80287C20
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80287C24
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287C28
  if (!crb(c,0)) { goto L_80287C68; } // 80287C2C
  c->r[3]=R32(c->r[31]+0x00000060u); // 80287C30
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80287C34
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287C38
  if (!crb(c,0)) { goto L_80287C48; } // 80287C3C
  c->r[0]=c->r[3]+0x00000001u; // 80287C40
  W32(c->r[31]+0x00000060u,c->r[0]); // 80287C44
L_80287C48:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 80287C48
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80287C4C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287C50
  if (crb(c,0)) { goto L_80287C64; } // 80287C54
  c->r[3]=c->r[29]|c->r[29]; // 80287C58
  c->r[4]=c->r[30]|c->r[30]; // 80287C5C
  c->lr=0x80287C64u; f_802886B4(c); // 80287C60
L_80287C64:;
  c->r[4]=0u+0x00000001u; // 80287C64
L_80287C68:;
  cmps(c,0,(int32_t)c->r[4],0); // 80287C68
  if (crb(c,2)) { goto L_80287DA8; } // 80287C6C
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 80287C70
  c->r[0]=R32(c->r[31]+0x00000090u); // 80287C74
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[4]=c->ps1[4]=RF32(ea);} // 80287C78
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80287C7C
  if (crb(c,0)) { goto L_80287C8C; } // 80287C80
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287C84
  goto L_80287CC4; // 80287C88
L_80287C8C:;
  c->r[3]=c->r[0]^0x80000000u; // 80287C8C
  c->r[0]=c->r[4]^0x80000000u; // 80287C90
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80287C94
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287C98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80287C9C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 80287CA0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 80287CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287CA8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80287CAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80287CB0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80287CB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80287CB8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80287CBC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80287CC0
L_80287CC4:;
  fcmp(c,0,c->f[0],c->f[28]); // 80287CC4
  if (!crb(c,1)) { goto L_80287CD4; } // 80287CC8
  c->f[0]=c->f[28]; // 80287CCC
  goto L_80287CE0; // 80287CD0
L_80287CD4:;
  fcmp(c,0,c->f[0],c->f[29]); // 80287CD4
  if (!crb(c,0)) { goto L_80287CE0; } // 80287CD8
  c->f[0]=c->f[29]; // 80287CDC
L_80287CE0:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 80287CE0
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80287CE4
  c->r[0]=R32(c->r[31]+0x00000060u); // 80287CE8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80287CEC
  if (crb(c,0)) { goto L_80287CFC; } // 80287CF0
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287CF4
  goto L_80287D34; // 80287CF8
L_80287CFC:;
  c->r[3]=c->r[0]^0x80000000u; // 80287CFC
  c->r[0]=c->r[4]^0x80000000u; // 80287D00
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80287D04
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287D08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80287D0C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80287D10
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 80287D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287D18
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80287D1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80287D20
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80287D24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80287D28
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80287D2C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80287D30
L_80287D34:;
  fcmp(c,0,c->f[0],c->f[28]); // 80287D34
  if (!crb(c,1)) { goto L_80287D44; } // 80287D38
  c->f[0]=c->f[28]; // 80287D3C
  goto L_80287D50; // 80287D40
L_80287D44:;
  fcmp(c,0,c->f[0],c->f[29]); // 80287D44
  if (!crb(c,0)) { goto L_80287D50; } // 80287D48
  c->f[0]=c->f[29]; // 80287D4C
L_80287D50:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80287D50
  cmps(c,0,(int32_t)c->r[30],1); // 80287D54
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[4]); // 80287D58
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80287D5C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80287D60
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80287D64
  if (crb(c,2)) { goto L_80287D94; } // 80287D68
  if (!crb(c,0)) { goto L_80287D7C; } // 80287D6C
  cmps(c,0,(int32_t)c->r[30],0); // 80287D70
  if (!crb(c,0)) { goto L_80287D88; } // 80287D74
  goto L_80287DA8; // 80287D78
L_80287D7C:;
  cmps(c,0,(int32_t)c->r[30],3); // 80287D7C
  if (!crb(c,0)) { goto L_80287DA8; } // 80287D80
  goto L_80287DA0; // 80287D84
L_80287D88:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80287D88
  c->lr=0x80287D90u; f_8017A0F0(c); // 80287D8C
  goto L_80287DA8; // 80287D90
L_80287D94:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80287D94
  c->lr=0x80287D9Cu; f_8017A0F8(c); // 80287D98
  goto L_80287DA8; // 80287D9C
L_80287DA0:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80287DA0
  c->lr=0x80287DA8u; f_8017A100(c); // 80287DA4
L_80287DA8:;
  c->r[30]=c->r[30]+0x00000001u; // 80287DA8
  c->r[31]=c->r[31]+0x00000010u; // 80287DAC
  cmps(c,0,(int32_t)c->r[30],3); // 80287DB0
  if (crb(c,0)) { IRQCHK(c); goto L_80287BF0; } // 80287DB4
  c->r[3]=R32(c->r[29]+0x00000028u); // 80287DB8
  c->r[0]=R32(c->r[29]+0x00000024u); // 80287DBC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287DC0
  if (!crb(c,0)) { goto L_80287DEC; } // 80287DC4
  c->r[3]=R32(c->r[29]+0x00000028u); // 80287DC8
  c->r[0]=R32(c->r[29]+0x00000024u); // 80287DCC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287DD0
  if (!crb(c,0)) { goto L_80287DE0; } // 80287DD4
  c->r[0]=c->r[3]+0x00000001u; // 80287DD8
  W32(c->r[29]+0x00000028u,c->r[0]); // 80287DDC
L_80287DE0:;
  c->lr=0x80287DE4u; f_802A514C(c); // 80287DE0
  c->r[4]=0u+0x00000008u; // 80287DE4
  c->lr=0x80287DECu; f_802A5854(c); // 80287DE8
L_80287DEC:;
  c->r[3]=R32(c->r[29]+0x00000048u); // 80287DEC
  c->r[0]=R32(c->r[29]+0x00000044u); // 80287DF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287DF4
  if (!crb(c,0)) { goto L_80287E14; } // 80287DF8
  c->r[3]=R32(c->r[29]+0x00000048u); // 80287DFC
  c->r[0]=R32(c->r[29]+0x00000044u); // 80287E00
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287E04
  if (!crb(c,0)) { goto L_80287E14; } // 80287E08
  c->r[0]=c->r[3]+0x00000001u; // 80287E0C
  W32(c->r[29]+0x00000048u,c->r[0]); // 80287E10
L_80287E14:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80287E14
  c->r[0]=R32(c->r[29]+0x00000034u); // 80287E18
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287E1C
  if (!crb(c,0)) { goto L_80287E3C; } // 80287E20
  c->r[3]=R32(c->r[29]+0x00000038u); // 80287E24
  c->r[0]=R32(c->r[29]+0x00000034u); // 80287E28
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80287E2C
  if (!crb(c,0)) { goto L_80287E3C; } // 80287E30
  c->r[0]=c->r[3]+0x00000001u; // 80287E34
  W32(c->r[29]+0x00000038u,c->r[0]); // 80287E38
L_80287E3C:;
  c->r[4]=R32(c->r[29]+0x00000034u); // 80287E3C
  c->r[0]=R32(c->r[29]+0x00000038u); // 80287E40
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80287E44
  if (crb(c,0)) { goto L_80287E54; } // 80287E48
  {uint32_t ea=c->r[29]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 80287E4C
  goto L_80287E90; // 80287E50
L_80287E54:;
  c->r[3]=c->r[0]^0x80000000u; // 80287E54
  c->r[0]=c->r[4]^0x80000000u; // 80287E58
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80287E5C
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[4]=RF64(ea);} // 80287E60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80287E64
  {uint32_t ea=c->r[29]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80287E68
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80287E6C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 80287E70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287E74
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80287E78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80287E7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80287E80
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80287E84
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80287E88
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[0]); // 80287E8C
L_80287E90:;
  c->r[4]=R32(c->r[29]+0x00000044u); // 80287E90
  c->r[0]=R32(c->r[29]+0x00000048u); // 80287E94
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80287E98
  if (crb(c,0)) { goto L_80287EA8; } // 80287E9C
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287EA0
  goto L_80287EE4; // 80287EA4
L_80287EA8:;
  c->r[3]=c->r[0]^0x80000000u; // 80287EA8
  c->r[0]=c->r[4]^0x80000000u; // 80287EAC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80287EB0
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[4]=RF64(ea);} // 80287EB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80287EB8
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80287EBC
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80287EC0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 80287EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80287EC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80287ECC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80287ED0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80287ED4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80287ED8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80287EDC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80287EE0
L_80287EE4:;
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80287EE4
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80287EE8
  fcmp(c,0,c->f[0],c->f[1]); // 80287EEC
  if (!crb(c,1)) { goto L_80287EF8; } // 80287EF0
  goto L_80287F0C; // 80287EF4
L_80287EF8:;
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80287EF8
  fcmp(c,0,c->f[0],c->f[1]); // 80287EFC
  if (!crb(c,0)) { goto L_80287F08; } // 80287F00
  goto L_80287F0C; // 80287F04
L_80287F08:;
  c->f[1]=c->f[0]; // 80287F08
L_80287F0C:;
  {uint32_t ea=c->r[2]+0xFFFF9F60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80287F0C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80287F10
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80287F14
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80287F18
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 80287F1C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80287F20
  c->lr=0x80287F28u; f_8017A0D8(c); // 80287F24
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80287F28
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80287F2C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80287F30
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80287F34
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80287F38
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80287F3C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 80287F40
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 80287F44
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80287F48
  c->r[30]=R32(c->r[1]+0x00000028u); // 80287F4C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80287F50
  c->r[29]=R32(c->r[1]+0x00000024u); // 80287F54
  c->lr=c->r[0]; // 80287F58
  c->r[1]=c->r[1]+0x00000070u; // 80287F5C
  return; // 80287F60
}

// GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
void f_80287F64(Ctx* __restrict c) {
  trace_call(0x80287F64u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80287F64
  return; // 80287F68
}

// RegisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNodePFv_v
void f_80287F6C(Ctx* __restrict c) {
  trace_call(0x80287F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287F6C
  c->r[0]=c->lr; // 80287F70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80287F74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80287F78
  c->r[31]=c->r[5]|c->r[5]; // 80287F7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80287F80
  c->r[30]=c->r[4]|c->r[4]; // 80287F84
  W32(c->r[1]+0x00000014u,c->r[29]); // 80287F88
  c->r[29]=c->r[3]|c->r[3]; // 80287F8C
  c->lr=0x80287F94u; f_80160C68(c); // 80287F90
  W32(c->r[30]+0x00000008u,c->r[31]); // 80287F94
  c->r[0]=c->r[29]+0x0000000Cu; // 80287F98
  c->r[31]=c->r[3]|c->r[3]; // 80287F9C
  c->r[5]=c->r[30]|c->r[30]; // 80287FA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 80287FA4
  c->r[3]=c->r[29]+0x00000008u; // 80287FA8
  c->r[4]=c->r[1]+0x00000008u; // 80287FAC
  c->lr=0x80287FB4u; f_802A7C88(c); // 80287FB0
  c->r[3]=c->r[31]|c->r[31]; // 80287FB4
  c->lr=0x80287FBCu; f_80160C90(c); // 80287FB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80287FBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80287FC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80287FC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80287FC8
  c->lr=c->r[0]; // 80287FCC
  c->r[1]=c->r[1]+0x00000020u; // 80287FD0
  return; // 80287FD4
}

// UnregisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNode
void f_80287FD8(Ctx* __restrict c) {
  trace_call(0x80287FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80287FD8
  c->r[0]=c->lr; // 80287FDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80287FE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80287FE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80287FE8
  c->r[30]=c->r[4]|c->r[4]; // 80287FEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80287FF0
  c->r[29]=c->r[3]|c->r[3]; // 80287FF4
  c->lr=0x80287FFCu; f_80160C68(c); // 80287FF8
  c->r[31]=c->r[3]|c->r[3]; // 80287FFC
  c->r[4]=c->r[30]|c->r[30]; // 80288000
  c->r[3]=c->r[29]+0x00000008u; // 80288004
  c->lr=0x8028800Cu; f_802A7CB4(c); // 80288008
  c->r[3]=c->r[31]|c->r[31]; // 8028800C
  c->lr=0x80288014u; f_80160C90(c); // 80288010
  c->r[0]=R32(c->r[1]+0x00000024u); // 80288014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80288018
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028801C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80288020
  c->lr=c->r[0]; // 80288024
  c->r[1]=c->r[1]+0x00000020u; // 80288028
  return; // 8028802C
}

// SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
void f_80288030(Ctx* __restrict c) {
  trace_call(0x80288030u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288030
  c->r[0]=c->lr; // 80288034
  W32(c->r[1]+0x00000034u,c->r[0]); // 80288038
  c->r[11]=c->r[1]+0x00000030u; // 8028803C
  c->lr=0x80288044u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80288040
  c->r[0]=R32(c->r[3]+0x00000000u); // 80288044
  c->r[25]=c->r[3]|c->r[3]; // 80288048
  c->r[26]=c->r[4]|c->r[4]; // 8028804C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80288050
  if (crb(c,2)) { goto L_80288120; } // 80288054
  c->lr=0x8028805Cu; f_80160C68(c); // 80288058
  cmps(c,0,(int32_t)c->r[26],2); // 8028805C
  W32(c->r[25]+0x00000000u,c->r[26]); // 80288060
  c->r[31]=c->r[3]|c->r[3]; // 80288064
  if (crb(c,2)) { goto L_802880A4; } // 80288068
  if (!crb(c,0)) { goto L_80288080; } // 8028806C
  cmps(c,0,(int32_t)c->r[26],0); // 80288070
  if (crb(c,2)) { goto L_8028808C; } // 80288074
  if (!crb(c,0)) { goto L_80288098; } // 80288078
  goto L_802880B8; // 8028807C
L_80288080:;
  cmps(c,0,(int32_t)c->r[26],4); // 80288080
  if (!crb(c,0)) { goto L_802880B8; } // 80288084
  goto L_802880B0; // 80288088
L_8028808C:;
  c->r[3]=0u+0x00000000u; // 8028808C
  c->lr=0x80288094u; f_8017A0B8(c); // 80288090
  goto L_802880B8; // 80288094
L_80288098:;
  c->r[3]=0u+0x00000001u; // 80288098
  c->lr=0x802880A0u; f_8017A0B8(c); // 8028809C
  goto L_802880B8; // 802880A0
L_802880A4:;
  c->r[3]=0u+0x00000002u; // 802880A4
  c->lr=0x802880ACu; f_8017A0B8(c); // 802880A8
  goto L_802880B8; // 802880AC
L_802880B0:;
  c->r[3]=0u+0x00000000u; // 802880B0
  c->lr=0x802880B8u; f_8017A0B8(c); // 802880B4
L_802880B8:;
  c->lr=0x802880BCu; f_802A514C(c); // 802880B8
  c->r[4]=0u+0x00000010u; // 802880BC
  c->lr=0x802880C4u; f_802A5854(c); // 802880C0
  c->r[28]=c->r[25]+0x000000B4u; // 802880C4
  c->r[27]=0u+0x00000000u; // 802880C8
L_802880CC:;
  c->r[30]=R32(c->r[28]+0x00000004u); // 802880CC
  c->r[29]=c->r[28]+0x00000004u; // 802880D0
  goto L_802880F0; // 802880D4
L_802880D8:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 802880D8
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 802880DC
  c->r[12]=R32(c->r[12]+0x00000018u); // 802880E0
  c->ctr=c->r[12]; // 802880E4
  if (true) { c->lr=0x802880ECu; dispatch(c,c->ctr); } // 802880E8
  c->r[30]=R32(c->r[30]+0x00000000u); // 802880EC
L_802880F0:;
  cmpu(c,0,c->r[30],c->r[29]); // 802880F0
  if (!crb(c,2)) { IRQCHK(c); goto L_802880D8; } // 802880F4
  c->r[27]=c->r[27]+0x00000001u; // 802880F8
  c->r[28]=c->r[28]+0x0000000Cu; // 802880FC
  cmps(c,0,(int32_t)c->r[27],3); // 80288100
  if (crb(c,0)) { IRQCHK(c); goto L_802880CC; } // 80288104
  cmps(c,0,(int32_t)c->r[26],2); // 80288108
  if (!crb(c,2)) { goto L_80288118; } // 8028810C
  c->r[0]=0u+0x00000000u; // 80288110
  W32(c->r[25]+0x000000FCu,c->r[0]); // 80288114
L_80288118:;
  c->r[3]=c->r[31]|c->r[31]; // 80288118
  c->lr=0x80288120u; f_80160C90(c); // 8028811C
L_80288120:;
  c->r[11]=c->r[1]+0x00000030u; // 80288120
  c->lr=0x80288128u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80288124
  c->r[0]=R32(c->r[1]+0x00000034u); // 80288128
  c->lr=c->r[0]; // 8028812C
  c->r[1]=c->r[1]+0x00000030u; // 80288130
  return; // 80288134
}

// GetOutputMode__Q44nw4r3snd6detail9AxManagerFv
void f_80288138(Ctx* __restrict c) {
  trace_call(0x80288138u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80288138
  return; // 8028813C
}

// fn_80288140
void f_80288140(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[5]=c->ps1[5]=RF32(ea);} // 80288140
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288144
  fcmp(c,0,c->f[1],c->f[5]); // 80288148
  if (!crb(c,1)) { goto L_80288154; } // 8028814C
  goto L_80288168; // 80288150
L_80288154:;
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[5]=c->ps1[5]=RF32(ea);} // 80288154
  fcmp(c,0,c->f[1],c->f[5]); // 80288158
  if (!crb(c,0)) { goto L_80288164; } // 8028815C
  goto L_80288168; // 80288160
L_80288164:;
  c->f[5]=c->f[1]; // 80288164
L_80288168:;
  c->r[6]=R32(c->r[3]+0x00000034u); // 80288168
  c->r[0]=R32(c->r[3]+0x00000038u); // 8028816C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 80288170
  if (crb(c,0)) { goto L_80288180; } // 80288174
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80288178
  goto L_802881C8; // 8028817C
L_80288180:;
  c->r[5]=0u+0x43300000u; // 80288180
  c->r[0]=c->r[0]^0x80000000u; // 80288184
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80288188
  c->r[0]=c->r[6]^0x80000000u; // 8028818C
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[4]=RF64(ea);} // 80288190
  W32(c->r[1]+0x00000008u,c->r[5]); // 80288194
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80288198
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8028819C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802881A0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 802881A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802881A8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 802881AC
  W32(c->r[1]+0x00000010u,c->r[5]); // 802881B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802881B4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 802881B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 802881BC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 802881C0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802881C4
L_802881C8:;
  c->r[5]=0u+0x55550000u; // 802881C8
  c->r[0]=0u+0x00000000u; // 802881CC
  c->r[4]=c->r[4]+0x00000002u; // 802881D0
  W32(c->r[3]+0x00000038u,c->r[0]); // 802881D4
  c->r[5]=c->r[5]+0x00005556u; // 802881D8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[4])>>32); // 802881DC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 802881E0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[5]);} // 802881E4
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 802881E8
  c->r[0]=c->r[4]+c->r[0]; // 802881EC
  W32(c->r[3]+0x00000034u,c->r[0]); // 802881F0
  c->r[1]=c->r[1]+0x00000020u; // 802881F4
  return; // 802881F8
}

// fn_802881FC
void f_802881FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802881FC
  c->r[0]=c->lr; // 80288200
  W32(c->r[1]+0x00000034u,c->r[0]); // 80288204
  c->r[11]=c->r[1]+0x00000030u; // 80288208
  c->lr=0x80288210u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028820C
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288210
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288214
  if (!crb(c,2)) { goto L_80288248; } // 80288218
  c->r[25]=0u+0x80420000u; // 8028821C
  c->r[3]=c->r[25]+0xFFFFA968u; // 80288220
  c->lr=0x80288228u; f_80287364(c); // 80288224
  c->r[4]=0u+0x80280000u; // 80288228
  c->r[5]=0u+0x80420000u; // 8028822C
  c->r[3]=c->r[25]+0xFFFFA968u; // 80288230
  c->r[4]=c->r[4]+0x000078E8u; // 80288234
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 80288238
  c->lr=0x80288240u; f_8018566C(c); // 8028823C
  c->r[0]=0u+0x00000001u; // 80288240
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 80288244
L_80288248:;
  c->r[25]=0u+0x80420000u; // 80288248
  c->r[27]=0u+0x80280000u; // 8028824C
  c->r[26]=c->r[25]+0xFFFFA968u; // 80288250
  c->r[28]=0u+0x80420000u; // 80288254
  c->r[31]=R32(c->r[26]+0x0000000Cu); // 80288258
  c->r[30]=c->r[26]+0x0000000Cu; // 8028825C
  c->r[29]=0u+0x00000001u; // 80288260
  goto L_8028827C; // 80288264
L_80288268:;
  c->r[3]=c->r[31]|c->r[31]; // 80288268
  c->r[31]=R32(c->r[31]+0x00000000u); // 8028826C
  c->r[12]=R32(c->r[3]+0x00000008u); // 80288270
  c->ctr=c->r[12]; // 80288274
  if (true) { c->lr=0x8028827Cu; dispatch(c,c->ctr); } // 80288278
L_8028827C:;
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 8028827C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288280
  if (!crb(c,2)) { goto L_802882A4; } // 80288284
  c->r[3]=c->r[25]+0xFFFFA968u; // 80288288
  c->lr=0x80288290u; f_80287364(c); // 8028828C
  c->r[3]=c->r[25]+0xFFFFA968u; // 80288290
  c->r[4]=c->r[27]+0x000078E8u; // 80288294
  c->r[5]=c->r[28]+0xFFFFA95Cu; // 80288298
  c->lr=0x802882A0u; f_8018566C(c); // 8028829C
  W8(c->r[13]+0xFFFFA464u,c->r[29]); // 802882A0
L_802882A4:;
  cmpu(c,0,c->r[31],c->r[30]); // 802882A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80288268; } // 802882A8
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 802882AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802882B0
  if (!crb(c,2)) { goto L_802882E0; } // 802882B4
  c->r[3]=c->r[26]|c->r[26]; // 802882B8
  c->lr=0x802882C0u; f_80287364(c); // 802882BC
  c->r[4]=0u+0x80280000u; // 802882C0
  c->r[5]=0u+0x80420000u; // 802882C4
  c->r[3]=c->r[26]|c->r[26]; // 802882C8
  c->r[4]=c->r[4]+0x000078E8u; // 802882CC
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 802882D0
  c->lr=0x802882D8u; f_8018566C(c); // 802882D4
  c->r[0]=0u+0x00000001u; // 802882D8
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 802882DC
L_802882E0:;
  c->r[31]=0u+0x80420000u; // 802882E0
  c->r[31]=c->r[31]+0xFFFFA968u; // 802882E4
  c->r[0]=R32(c->r[31]+0x00000014u); // 802882E8
  cmps(c,0,(int32_t)c->r[0],0); // 802882EC
  if (crb(c,2)) { goto L_8028833C; } // 802882F0
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 802882F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802882F8
  if (!crb(c,2)) { goto L_80288328; } // 802882FC
  c->r[3]=c->r[31]|c->r[31]; // 80288300
  c->lr=0x80288308u; f_80287364(c); // 80288304
  c->r[4]=0u+0x80280000u; // 80288308
  c->r[5]=0u+0x80420000u; // 8028830C
  c->r[3]=c->r[31]|c->r[31]; // 80288310
  c->r[4]=c->r[4]+0x000078E8u; // 80288314
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 80288318
  c->lr=0x80288320u; f_8018566C(c); // 8028831C
  c->r[0]=0u+0x00000001u; // 80288320
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 80288324
L_80288328:;
  c->r[3]=0u+0x80420000u; // 80288328
  c->r[3]=c->r[3]+0xFFFFA968u; // 8028832C
  c->r[12]=R32(c->r[3]+0x00000014u); // 80288330
  c->ctr=c->r[12]; // 80288334
  if (true) { c->lr=0x8028833Cu; dispatch(c,c->ctr); } // 80288338
L_8028833C:;
  c->r[11]=c->r[1]+0x00000030u; // 8028833C
  c->lr=0x80288344u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80288340
  c->r[0]=R32(c->r[1]+0x00000034u); // 80288344
  c->lr=c->r[0]; // 80288348
  c->r[1]=c->r[1]+0x00000030u; // 8028834C
  return; // 80288350
}

// fn_80288354
void f_80288354(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288354
  c->r[0]=c->lr; // 80288358
  W32(c->r[1]+0x00000044u,c->r[0]); // 8028835C
  c->r[11]=c->r[1]+0x00000040u; // 80288360
  c->lr=0x80288368u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80288364
  c->r[27]=rotl(c->r[4],4)&0xFFFFFFF0u; // 80288368
  c->r[29]=c->r[3]|c->r[3]; // 8028836C
  c->r[28]=c->r[3]+c->r[27]; // 80288370
  c->r[30]=c->r[4]|c->r[4]; // 80288374
  c->r[6]=R32(c->r[28]+0x00000060u); // 80288378
  c->r[31]=c->r[5]|c->r[5]; // 8028837C
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 80288380
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80288384
  if (!crb(c,0)) { goto L_80288390; } // 80288388
  c->lr=0x80288390u; f_802886B4(c); // 8028838C
L_80288390:;
  c->r[5]=R32(c->r[28]+0x0000005Cu); // 80288390
  c->r[0]=R32(c->r[28]+0x00000060u); // 80288394
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80288398
  if (crb(c,0)) { goto L_802883AC; } // 8028839C
  c->r[3]=c->r[29]+c->r[27]; // 802883A0
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 802883A4
  goto L_802883F8; // 802883A8
L_802883AC:;
  c->r[3]=0u+0x43300000u; // 802883AC
  c->r[0]=c->r[0]^0x80000000u; // 802883B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802883B4
  c->r[4]=c->r[29]+c->r[27]; // 802883B8
  c->r[0]=c->r[5]^0x80000000u; // 802883BC
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[4]=RF64(ea);} // 802883C0
  W32(c->r[1]+0x00000010u,c->r[3]); // 802883C4
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 802883C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 802883CC
  {uint32_t ea=c->r[4]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 802883D0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 802883D4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802883D8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 802883DC
  W32(c->r[1]+0x00000018u,c->r[3]); // 802883E0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 802883E4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 802883E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 802883EC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 802883F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 802883F4
L_802883F8:;
  c->r[3]=c->r[29]+c->r[27]; // 802883F8
  {uint32_t ea=c->r[2]+0xFFFF9F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 802883FC
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 80288400
  c->r[0]=0u+0x00000000u; // 80288404
  cmps(c,0,(int32_t)c->r[30],1); // 80288408
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 8028840C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 80288410
  W32(c->r[3]+0x00000060u,c->r[0]); // 80288414
  if (crb(c,2)) { goto L_8028844C; } // 80288418
  if (!crb(c,0)) { goto L_8028842C; } // 8028841C
  cmps(c,0,(int32_t)c->r[30],0); // 80288420
  if (!crb(c,0)) { goto L_80288438; } // 80288424
  goto L_80288470; // 80288428
L_8028842C:;
  cmps(c,0,(int32_t)c->r[30],3); // 8028842C
  if (!crb(c,0)) { goto L_80288470; } // 80288430
  goto L_80288460; // 80288434
L_80288438:;
  c->r[3]=0u+0x00010000u; // 80288438
  c->r[0]=c->r[3]+0xFFFF8000u; // 8028843C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80288440
  c->lr=0x80288448u; f_8017A0F0(c); // 80288444
  goto L_80288470; // 80288448
L_8028844C:;
  c->r[3]=0u+0x00010000u; // 8028844C
  c->r[0]=c->r[3]+0xFFFF8000u; // 80288450
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80288454
  c->lr=0x8028845Cu; f_8017A0F8(c); // 80288458
  goto L_80288470; // 8028845C
L_80288460:;
  c->r[3]=0u+0x00010000u; // 80288460
  c->r[0]=c->r[3]+0xFFFF8000u; // 80288464
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80288468
  c->lr=0x80288470u; f_8017A100(c); // 8028846C
L_80288470:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80288470
  c->r[3]=c->r[31]|c->r[31]; // 80288474
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80288478
  c->ctr=c->r[12]; // 8028847C
  if (true) { c->lr=0x80288484u; dispatch(c,c->ctr); } // 80288480
  cmps(c,0,(int32_t)c->r[3],0); // 80288484
  if (!crb(c,2)) { goto L_80288494; } // 80288488
  c->r[3]=0u+0x00000000u; // 8028848C
  goto L_80288540; // 80288490
L_80288494:;
  c->lr=0x80288498u; f_80160C68(c); // 80288494
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 80288498
  c->r[28]=c->r[3]|c->r[3]; // 8028849C
  c->r[3]=c->r[29]+c->r[0]; // 802884A0
  c->r[0]=R32(c->r[3]+0x000000B4u); // 802884A4
  c->r[27]=c->r[3]+0x000000B4u; // 802884A8
  cmps(c,0,(int32_t)c->r[0],0); // 802884AC
  if (!crb(c,2)) { goto L_8028851C; } // 802884B0
  cmps(c,0,(int32_t)c->r[30],1); // 802884B4
  if (crb(c,2)) { goto L_802884EC; } // 802884B8
  if (!crb(c,0)) { goto L_802884CC; } // 802884BC
  cmps(c,0,(int32_t)c->r[30],0); // 802884C0
  if (!crb(c,0)) { goto L_802884D8; } // 802884C4
  goto L_80288510; // 802884C8
L_802884CC:;
  cmps(c,0,(int32_t)c->r[30],3); // 802884CC
  if (!crb(c,0)) { goto L_80288510; } // 802884D0
  goto L_80288500; // 802884D4
L_802884D8:;
  c->r[3]=0u+0x80290000u; // 802884D8
  c->r[4]=c->r[30]|c->r[30]; // 802884DC
  c->r[3]=c->r[3]+0xFFFF87B4u; // 802884E0
  c->lr=0x802884E8u; f_80179500(c); // 802884E4
  goto L_80288510; // 802884E8
L_802884EC:;
  c->r[3]=0u+0x80290000u; // 802884EC
  c->r[4]=c->r[30]|c->r[30]; // 802884F0
  c->r[3]=c->r[3]+0xFFFF87B4u; // 802884F4
  c->lr=0x802884FCu; f_80179564(c); // 802884F8
  goto L_80288510; // 802884FC
L_80288500:;
  c->r[3]=0u+0x80290000u; // 80288500
  c->r[4]=c->r[30]|c->r[30]; // 80288504
  c->r[3]=c->r[3]+0xFFFF87B4u; // 80288508
  c->lr=0x80288510u; f_801795C8(c); // 8028850C
L_80288510:;
  c->r[3]=c->r[29]+c->r[30]; // 80288510
  c->r[0]=0u+0x00000002u; // 80288514
  W8(c->r[3]+0x000000F0u,c->r[0]); // 80288518
L_8028851C:;
  c->r[0]=c->r[27]+0x00000004u; // 8028851C
  c->r[3]=c->r[27]|c->r[27]; // 80288520
  W32(c->r[1]+0x00000008u,c->r[0]); // 80288524
  c->r[4]=c->r[1]+0x00000008u; // 80288528
  c->r[5]=c->r[31]+0x00000004u; // 8028852C
  c->lr=0x80288534u; f_802A7C88(c); // 80288530
  c->r[3]=c->r[28]|c->r[28]; // 80288534
  c->lr=0x8028853Cu; f_80160C90(c); // 80288538
  c->r[3]=0u+0x00000001u; // 8028853C
L_80288540:;
  c->r[11]=c->r[1]+0x00000040u; // 80288540
  c->lr=0x80288548u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80288544
  c->r[0]=R32(c->r[1]+0x00000044u); // 80288548
  c->lr=c->r[0]; // 8028854C
  c->r[1]=c->r[1]+0x00000040u; // 80288550
  return; // 80288554
}

// fn_80288558
void f_80288558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288558
  c->r[0]=c->lr; // 8028855C
  cmps(c,0,(int32_t)c->r[5],0); // 80288560
  W32(c->r[1]+0x00000024u,c->r[0]); // 80288564
  c->r[0]=0u+0x43300000u; // 80288568
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028856C
  c->r[31]=c->r[4]|c->r[4]; // 80288570
  W32(c->r[1]+0x00000018u,c->r[30]); // 80288574
  c->r[30]=c->r[3]|c->r[3]; // 80288578
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028857C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80288580
  if (!crb(c,2)) { goto L_8028860C; } // 80288584
  c->lr=0x8028858Cu; f_802886B4(c); // 80288588
  c->r[5]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8028858C
  c->r[4]=c->r[30]+c->r[5]; // 80288590
  c->r[0]=R32(c->r[4]+0x0000005Cu); // 80288594
  c->r[3]=R32(c->r[4]+0x00000060u); // 80288598
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028859C
  if (!crb(c,0)) { goto L_8028869C; } // 802885A0
  if (crb(c,0)) { goto L_802885B0; } // 802885A4
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 802885A8
  goto L_802885EC; // 802885AC
L_802885B0:;
  c->r[3]=c->r[3]^0x80000000u; // 802885B0
  c->r[0]=c->r[0]^0x80000000u; // 802885B4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802885B8
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[4]=RF64(ea);} // 802885BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802885C0
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 802885C4
  {uint32_t ea=c->r[4]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 802885C8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 802885CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802885D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802885D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802885D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 802885DC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 802885E0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 802885E4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 802885E8
L_802885EC:;
  c->r[3]=c->r[30]+c->r[5]; // 802885EC
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 802885F0
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 802885F4
  c->r[0]=0u+0x00000000u; // 802885F8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 802885FC
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 80288600
  W32(c->r[3]+0x00000060u,c->r[0]); // 80288604
  goto L_8028869C; // 80288608
L_8028860C:;
  c->r[8]=rotl(c->r[4],4)&0xFFFFFFF0u; // 8028860C
  c->r[6]=c->r[3]+c->r[8]; // 80288610
  c->r[7]=R32(c->r[6]+0x0000005Cu); // 80288614
  c->r[0]=R32(c->r[6]+0x00000060u); // 80288618
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 8028861C
  if (crb(c,0)) { goto L_8028862C; } // 80288620
  {uint32_t ea=c->r[6]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80288624
  goto L_80288668; // 80288628
L_8028862C:;
  c->r[4]=c->r[0]^0x80000000u; // 8028862C
  c->r[0]=c->r[7]^0x80000000u; // 80288630
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80288634
  {uint32_t ea=c->r[2]+0xFFFF9F58u; c->f[4]=RF64(ea);} // 80288638
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028863C
  {uint32_t ea=c->r[6]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80288640
  {uint32_t ea=c->r[6]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80288644
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 80288648
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028864C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80288650
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80288654
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80288658
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028865C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80288660
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80288664
L_80288668:;
  c->r[4]=0u+0x55550000u; // 80288668
  c->r[6]=c->r[3]+c->r[8]; // 8028866C
  c->r[0]=c->r[5]+0x00000002u; // 80288670
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 80288674
  c->r[3]=c->r[4]+0x00005556u; // 80288678
  {uint32_t ea=c->r[2]+0xFFFF9F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028867C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80288680
  c->r[0]=0u+0x00000000u; // 80288684
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 80288688
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 8028868C
  c->r[3]=c->r[4]+c->r[3]; // 80288690
  W32(c->r[6]+0x0000005Cu,c->r[3]); // 80288694
  W32(c->r[6]+0x00000060u,c->r[0]); // 80288698
L_8028869C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028869C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802886A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802886A4
  c->lr=c->r[0]; // 802886A8
  c->r[1]=c->r[1]+0x00000020u; // 802886AC
  return; // 802886B0
}

// fn_802886B4
void f_802886B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802886B4
  c->r[0]=c->lr; // 802886B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802886BC
  c->r[11]=c->r[1]+0x00000020u; // 802886C0
  c->lr=0x802886C8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802886C4
  c->r[26]=c->r[3]|c->r[3]; // 802886C8
  c->r[27]=c->r[4]|c->r[4]; // 802886CC
  c->lr=0x802886D4u; f_80160C68(c); // 802886D0
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 802886D4
  c->r[31]=c->r[3]|c->r[3]; // 802886D8
  c->r[4]=c->r[26]+c->r[0]; // 802886DC
  c->r[0]=R32(c->r[4]+0x000000B4u); // 802886E0
  c->r[28]=c->r[4]+0x000000B4u; // 802886E4
  cmps(c,0,(int32_t)c->r[0],0); // 802886E8
  if (!crb(c,2)) { goto L_802886F8; } // 802886EC
  c->lr=0x802886F4u; f_80160C90(c); // 802886F0
  goto L_8028879C; // 802886F4
L_802886F8:;
  c->r[30]=R32(c->r[28]+0x00000004u); // 802886F8
  c->r[29]=c->r[28]+0x00000004u; // 802886FC
  goto L_8028871C; // 80288700
L_80288704:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 80288704
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 80288708
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028870C
  c->ctr=c->r[12]; // 80288710
  if (true) { c->lr=0x80288718u; dispatch(c,c->ctr); } // 80288714
  c->r[30]=R32(c->r[30]+0x00000000u); // 80288718
L_8028871C:;
  cmpu(c,0,c->r[30],c->r[29]); // 8028871C
  if (!crb(c,2)) { IRQCHK(c); goto L_80288704; } // 80288720
  c->r[3]=c->r[28]|c->r[28]; // 80288724
  c->lr=0x8028872Cu; f_802A7C44(c); // 80288728
  cmps(c,0,(int32_t)c->r[27],1); // 8028872C
  if (crb(c,2)) { goto L_80288768; } // 80288730
  if (!crb(c,0)) { goto L_80288744; } // 80288734
  cmps(c,0,(int32_t)c->r[27],0); // 80288738
  if (!crb(c,0)) { goto L_80288750; } // 8028873C
  goto L_80288794; // 80288740
L_80288744:;
  cmps(c,0,(int32_t)c->r[27],3); // 80288744
  if (!crb(c,0)) { goto L_80288794; } // 80288748
  goto L_80288780; // 8028874C
L_80288750:;
  c->r[3]=0u+0x00000000u; // 80288750
  c->r[4]=0u+0x00000000u; // 80288754
  c->lr=0x8028875Cu; f_80179500(c); // 80288758
  c->r[0]=0u+0x00000000u; // 8028875C
  W32(c->r[26]+0x000000F4u,c->r[0]); // 80288760
  goto L_80288794; // 80288764
L_80288768:;
  c->r[3]=0u+0x00000000u; // 80288768
  c->r[4]=0u+0x00000000u; // 8028876C
  c->lr=0x80288774u; f_80179564(c); // 80288770
  c->r[0]=0u+0x00000000u; // 80288774
  W32(c->r[26]+0x000000F8u,c->r[0]); // 80288778
  goto L_80288794; // 8028877C
L_80288780:;
  c->r[3]=0u+0x00000000u; // 80288780
  c->r[4]=0u+0x00000000u; // 80288784
  c->lr=0x8028878Cu; f_801795C8(c); // 80288788
  c->r[0]=0u+0x00000000u; // 8028878C
  W32(c->r[26]+0x000000FCu,c->r[0]); // 80288790
L_80288794:;
  c->r[3]=c->r[31]|c->r[31]; // 80288794
  c->lr=0x8028879Cu; f_80160C90(c); // 80288798
L_8028879C:;
  c->r[11]=c->r[1]+0x00000020u; // 8028879C
  c->lr=0x802887A4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802887A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802887A4
  c->lr=c->r[0]; // 802887A8
  c->r[1]=c->r[1]+0x00000020u; // 802887AC
  return; // 802887B0
}

// fn_802887B4
void f_802887B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802887B4
  c->r[0]=c->lr; // 802887B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 802887BC
  c->r[11]=c->r[1]+0x00000040u; // 802887C0
  c->lr=0x802887C8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802887C4
  c->r[24]=c->r[3]|c->r[3]; // 802887C8
  c->r[29]=c->r[4]|c->r[4]; // 802887CC
  c->lr=0x802887D4u; f_80164E0C(c); // 802887D0
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 802887D4
  c->r[31]=c->r[3]|c->r[3]; // 802887D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802887DC
  if (!crb(c,2)) { goto L_80288810; } // 802887E0
  c->r[23]=0u+0x80420000u; // 802887E4
  c->r[3]=c->r[23]+0xFFFFA968u; // 802887E8
  c->lr=0x802887F0u; f_80287364(c); // 802887EC
  c->r[4]=0u+0x80280000u; // 802887F0
  c->r[5]=0u+0x80420000u; // 802887F4
  c->r[3]=c->r[23]+0xFFFFA968u; // 802887F8
  c->r[4]=c->r[4]+0x000078E8u; // 802887FC
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 80288800
  c->lr=0x80288808u; f_8018566C(c); // 80288804
  c->r[0]=0u+0x00000001u; // 80288808
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 8028880C
L_80288810:;
  c->r[3]=0u+0x80420000u; // 80288810
  c->r[0]=R32(c->r[3]+0xFFFFA968u); // 80288814
  cmps(c,0,(int32_t)c->r[0],2); // 80288818
  if (!crb(c,2)) { goto L_80288848; } // 8028881C
  c->r[0]=R32(c->r[24]+0x00000000u); // 80288820
  c->r[30]=0u+0x00000004u; // 80288824
  W32(c->r[1]+0x00000008u,c->r[0]); // 80288828
  c->r[0]=R32(c->r[24]+0x00000004u); // 8028882C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80288830
  c->r[0]=R32(c->r[24]+0x00000008u); // 80288834
  W32(c->r[1]+0x00000010u,c->r[0]); // 80288838
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 8028883C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288840
  goto L_80288864; // 80288844
L_80288848:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80288848
  c->r[30]=0u+0x00000003u; // 8028884C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80288850
  c->r[0]=R32(c->r[24]+0x00000004u); // 80288854
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80288858
  c->r[0]=R32(c->r[24]+0x00000008u); // 8028885C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80288860
L_80288864:;
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288864
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288868
  if (!crb(c,2)) { goto L_8028889C; } // 8028886C
  c->r[23]=0u+0x80420000u; // 80288870
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288874
  c->lr=0x8028887Cu; f_80287364(c); // 80288878
  c->r[4]=0u+0x80280000u; // 8028887C
  c->r[5]=0u+0x80420000u; // 80288880
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288884
  c->r[4]=c->r[4]+0x000078E8u; // 80288888
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 8028888C
  c->lr=0x80288894u; f_8018566C(c); // 80288890
  c->r[0]=0u+0x00000001u; // 80288894
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 80288898
L_8028889C:;
  c->r[24]=0u+0x80420000u; // 8028889C
  c->r[24]=c->r[24]+0xFFFFA968u; // 802888A0
  c->r[23]=c->r[24]+c->r[29]; // 802888A4
  c->r[0]=R8(c->r[23]+0x000000F0u); // 802888A8
  cmps(c,0,(int32_t)c->r[0],0); // 802888AC
  if (crb(c,2)) { goto L_80288978; } // 802888B0
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 802888B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802888B8
  if (!crb(c,2)) { goto L_802888E8; } // 802888BC
  c->r[3]=c->r[24]|c->r[24]; // 802888C0
  c->lr=0x802888C8u; f_80287364(c); // 802888C4
  c->r[4]=0u+0x80280000u; // 802888C8
  c->r[5]=0u+0x80420000u; // 802888CC
  c->r[3]=c->r[24]|c->r[24]; // 802888D0
  c->r[4]=c->r[4]+0x000078E8u; // 802888D4
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 802888D8
  c->lr=0x802888E0u; f_8018566C(c); // 802888DC
  c->r[0]=0u+0x00000001u; // 802888E0
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 802888E4
L_802888E8:;
  c->r[3]=R8(c->r[23]+0x000000F0u); // 802888E8
  c->r[24]=c->r[1]+0x00000008u; // 802888EC
  c->r[25]=0u+0x00000000u; // 802888F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802888F4
  W8(c->r[23]+0x000000F0u,c->r[0]); // 802888F8
  goto L_80288918; // 802888FC
L_80288900:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 80288900
  c->r[4]=0u+0x00000000u; // 80288904
  c->r[5]=0u+0x00000180u; // 80288908
  c->lr=0x80288910u; f_80004688(c); // 8028890C
  c->r[24]=c->r[24]+0x00000004u; // 80288910
  c->r[25]=c->r[25]+0x00000001u; // 80288914
L_80288918:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[30]); // 80288918
  if (crb(c,0)) { IRQCHK(c); goto L_80288900; } // 8028891C
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288920
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288924
  if (!crb(c,2)) { goto L_80288958; } // 80288928
  c->r[23]=0u+0x80420000u; // 8028892C
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288930
  c->lr=0x80288938u; f_80287364(c); // 80288934
  c->r[4]=0u+0x80280000u; // 80288938
  c->r[5]=0u+0x80420000u; // 8028893C
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288940
  c->r[4]=c->r[4]+0x000078E8u; // 80288944
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 80288948
  c->lr=0x80288950u; f_8018566C(c); // 8028894C
  c->r[0]=0u+0x00000001u; // 80288950
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 80288954
L_80288958:;
  c->lr=0x8028895Cu; f_80164E0C(c); // 80288958
  c->r[4]=0u+0x80420000u; // 8028895C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80288960
  c->r[4]=c->r[4]+0xFFFFA968u; // 80288964
  c->r[5]=c->r[3]-c->r[31]; // 80288968
  c->r[3]=c->r[4]+c->r[0]; // 8028896C
  W32(c->r[3]+0x000000F4u,c->r[5]); // 80288970
  goto L_80288B78; // 80288974
L_80288978:;
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288978
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8028897C
  if (!crb(c,2)) { goto L_802889AC; } // 80288980
  c->r[3]=c->r[24]|c->r[24]; // 80288984
  c->lr=0x8028898Cu; f_80287364(c); // 80288988
  c->r[4]=0u+0x80280000u; // 8028898C
  c->r[5]=0u+0x80420000u; // 80288990
  c->r[3]=c->r[24]|c->r[24]; // 80288994
  c->r[4]=c->r[4]+0x000078E8u; // 80288998
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 8028899C
  c->lr=0x802889A4u; f_8018566C(c); // 802889A0
  c->r[0]=0u+0x00000001u; // 802889A4
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 802889A8
L_802889AC:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 802889AC
  c->r[24]=0u+0x80420000u; // 802889B0
  c->r[24]=c->r[24]+0xFFFFA968u; // 802889B4
  c->r[23]=c->r[24]+c->r[0]; // 802889B8
  c->r[0]=R32(c->r[23]+0x000000B4u); // 802889BC
  cmps(c,0,(int32_t)c->r[0],0); // 802889C0
  if (!crb(c,2)) { goto L_80288A4C; } // 802889C4
  c->r[23]=c->r[1]+0x00000008u; // 802889C8
  c->r[24]=0u+0x00000000u; // 802889CC
  goto L_802889EC; // 802889D0
L_802889D4:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 802889D4
  c->r[4]=0u+0x00000000u; // 802889D8
  c->r[5]=0u+0x00000180u; // 802889DC
  c->lr=0x802889E4u; f_80004688(c); // 802889E0
  c->r[23]=c->r[23]+0x00000004u; // 802889E4
  c->r[24]=c->r[24]+0x00000001u; // 802889E8
L_802889EC:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[30]); // 802889EC
  if (crb(c,0)) { IRQCHK(c); goto L_802889D4; } // 802889F0
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 802889F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802889F8
  if (!crb(c,2)) { goto L_80288A2C; } // 802889FC
  c->r[23]=0u+0x80420000u; // 80288A00
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288A04
  c->lr=0x80288A0Cu; f_80287364(c); // 80288A08
  c->r[4]=0u+0x80280000u; // 80288A0C
  c->r[5]=0u+0x80420000u; // 80288A10
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288A14
  c->r[4]=c->r[4]+0x000078E8u; // 80288A18
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 80288A1C
  c->lr=0x80288A24u; f_8018566C(c); // 80288A20
  c->r[0]=0u+0x00000001u; // 80288A24
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 80288A28
L_80288A2C:;
  c->lr=0x80288A30u; f_80164E0C(c); // 80288A2C
  c->r[4]=0u+0x80420000u; // 80288A30
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80288A34
  c->r[4]=c->r[4]+0xFFFFA968u; // 80288A38
  c->r[5]=c->r[3]-c->r[31]; // 80288A3C
  c->r[3]=c->r[4]+c->r[0]; // 80288A40
  W32(c->r[3]+0x000000F4u,c->r[5]); // 80288A44
  goto L_80288B78; // 80288A48
L_80288A4C:;
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288A4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288A50
  if (!crb(c,2)) { goto L_80288A80; } // 80288A54
  c->r[3]=c->r[24]|c->r[24]; // 80288A58
  c->lr=0x80288A60u; f_80287364(c); // 80288A5C
  c->r[4]=0u+0x80280000u; // 80288A60
  c->r[5]=0u+0x80420000u; // 80288A64
  c->r[3]=c->r[24]|c->r[24]; // 80288A68
  c->r[4]=c->r[4]+0x000078E8u; // 80288A6C
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 80288A70
  c->lr=0x80288A78u; f_8018566C(c); // 80288A74
  c->r[0]=0u+0x00000001u; // 80288A78
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 80288A7C
L_80288A80:;
  c->r[28]=R32(c->r[23]+0x000000B8u); // 80288A80
  c->r[27]=c->r[23]+0x000000B8u; // 80288A84
  c->r[23]=0u+0x80420000u; // 80288A88
  c->r[24]=0u+0x80280000u; // 80288A8C
  c->r[25]=0u+0x80420000u; // 80288A90
  c->r[26]=0u+0x00000001u; // 80288A94
  goto L_80288AF4; // 80288A98
L_80288A9C:;
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288A9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288AA0
  if (!crb(c,2)) { goto L_80288AC4; } // 80288AA4
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288AA8
  c->lr=0x80288AB0u; f_80287364(c); // 80288AAC
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288AB0
  c->r[4]=c->r[24]+0x000078E8u; // 80288AB4
  c->r[5]=c->r[25]+0xFFFFA95Cu; // 80288AB8
  c->lr=0x80288AC0u; f_8018566C(c); // 80288ABC
  W8(c->r[13]+0xFFFFA464u,c->r[26]); // 80288AC0
L_80288AC4:;
  c->r[12]=R32(c->r[28]+0xFFFFFFFCu); // 80288AC4
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 80288AC8
  c->r[4]=c->r[30]|c->r[30]; // 80288ACC
  c->r[5]=c->r[1]+0x00000008u; // 80288AD0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80288AD4
  c->r[6]=0u+0x00000180u; // 80288AD8
  {uint32_t ea=c->r[2]+0xFFFF9F64u; c->f[1]=c->ps1[1]=RF32(ea);} // 80288ADC
  c->r[7]=0u+0x00000000u; // 80288AE0
  c->r[8]=R32(c->r[23]+0xFFFFA968u); // 80288AE4
  c->ctr=c->r[12]; // 80288AE8
  if (true) { c->lr=0x80288AF0u; dispatch(c,c->ctr); } // 80288AEC
  c->r[28]=R32(c->r[28]+0x00000000u); // 80288AF0
L_80288AF4:;
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288AF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288AF8
  if (!crb(c,2)) { goto L_80288B1C; } // 80288AFC
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288B00
  c->lr=0x80288B08u; f_80287364(c); // 80288B04
  c->r[3]=c->r[23]+0xFFFFA968u; // 80288B08
  c->r[4]=c->r[24]+0x000078E8u; // 80288B0C
  c->r[5]=c->r[25]+0xFFFFA95Cu; // 80288B10
  c->lr=0x80288B18u; f_8018566C(c); // 80288B14
  W8(c->r[13]+0xFFFFA464u,c->r[26]); // 80288B18
L_80288B1C:;
  cmpu(c,0,c->r[28],c->r[27]); // 80288B1C
  if (!crb(c,2)) { IRQCHK(c); goto L_80288A9C; } // 80288B20
  c->r[0]=R8(c->r[13]+0xFFFFA464u); // 80288B24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80288B28
  if (!crb(c,2)) { goto L_80288B5C; } // 80288B2C
  c->r[28]=0u+0x80420000u; // 80288B30
  c->r[3]=c->r[28]+0xFFFFA968u; // 80288B34
  c->lr=0x80288B3Cu; f_80287364(c); // 80288B38
  c->r[4]=0u+0x80280000u; // 80288B3C
  c->r[5]=0u+0x80420000u; // 80288B40
  c->r[3]=c->r[28]+0xFFFFA968u; // 80288B44
  c->r[4]=c->r[4]+0x000078E8u; // 80288B48
  c->r[5]=c->r[5]+0xFFFFA95Cu; // 80288B4C
  c->lr=0x80288B54u; f_8018566C(c); // 80288B50
  c->r[0]=0u+0x00000001u; // 80288B54
  W8(c->r[13]+0xFFFFA464u,c->r[0]); // 80288B58
L_80288B5C:;
  c->lr=0x80288B60u; f_80164E0C(c); // 80288B5C
  c->r[4]=0u+0x80420000u; // 80288B60
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80288B64
  c->r[4]=c->r[4]+0xFFFFA968u; // 80288B68
  c->r[5]=c->r[3]-c->r[31]; // 80288B6C
  c->r[3]=c->r[4]+c->r[0]; // 80288B70
  W32(c->r[3]+0x000000F4u,c->r[5]); // 80288B74
L_80288B78:;
  c->r[11]=c->r[1]+0x00000040u; // 80288B78
  c->lr=0x80288B80u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80288B7C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80288B80
  c->lr=c->r[0]; // 80288B84
  c->r[1]=c->r[1]+0x00000040u; // 80288B88
  return; // 80288B8C
}

// fn_80288B90
void f_80288B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288B90
  c->r[0]=c->lr; // 80288B94
  c->r[3]=0u+0x80340000u; // 80288B98
  c->r[4]=0u+0x80290000u; // 80288B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288BA0
  c->r[3]=c->r[3]+0x00005F00u; // 80288BA4
  c->r[4]=c->r[4]+0xFFFF8C5Cu; // 80288BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80288BAC
  c->r[31]=0u+0x80420000u; // 80288BB0
  c->r[31]=c->r[31]+0xFFFFA620u; // 80288BB4
  W32(c->r[13]+0xFFFFA450u,c->r[3]); // 80288BB8
  c->r[3]=c->r[13]+0xFFFFA450u; // 80288BBC
  c->r[5]=c->r[31]+0x00000300u; // 80288BC0
  c->lr=0x80288BC8u; f_8018566C(c); // 80288BC4
  c->r[3]=0u+0x80340000u; // 80288BC8
  c->r[4]=0u+0x80290000u; // 80288BCC
  c->r[3]=c->r[3]+0x00005EF0u; // 80288BD0
  c->r[5]=c->r[31]+0x0000030Cu; // 80288BD4
  W32(c->r[13]+0xFFFFA454u,c->r[3]); // 80288BD8
  c->r[4]=c->r[4]+0xFFFF8C9Cu; // 80288BDC
  c->r[3]=c->r[13]+0xFFFFA454u; // 80288BE0
  c->lr=0x80288BE8u; f_8018566C(c); // 80288BE4
  c->r[3]=0u+0x80340000u; // 80288BE8
  c->r[4]=0u+0x80290000u; // 80288BEC
  c->r[3]=c->r[3]+0x00005EE0u; // 80288BF0
  c->r[5]=c->r[31]+0x00000318u; // 80288BF4
  W32(c->r[13]+0xFFFFA458u,c->r[3]); // 80288BF8
  c->r[4]=c->r[4]+0xFFFF8CDCu; // 80288BFC
  c->r[3]=c->r[13]+0xFFFFA458u; // 80288C00
  c->lr=0x80288C08u; f_8018566C(c); // 80288C04
  c->r[3]=0u+0x80340000u; // 80288C08
  c->r[4]=0u+0x80290000u; // 80288C0C
  c->r[3]=c->r[3]+0x00005ED0u; // 80288C10
  c->r[5]=c->r[31]+0x00000324u; // 80288C14
  W32(c->r[13]+0xFFFFA45Cu,c->r[3]); // 80288C18
  c->r[4]=c->r[4]+0xFFFF8D1Cu; // 80288C1C
  c->r[3]=c->r[13]+0xFFFFA45Cu; // 80288C20
  c->lr=0x80288C28u; f_8018566C(c); // 80288C24
  c->r[3]=0u+0x80340000u; // 80288C28
  c->r[4]=0u+0x80290000u; // 80288C2C
  c->r[3]=c->r[3]+0x00005EC0u; // 80288C30
  c->r[5]=c->r[31]+0x00000330u; // 80288C34
  W32(c->r[13]+0xFFFFA460u,c->r[3]); // 80288C38
  c->r[4]=c->r[4]+0xFFFF8D5Cu; // 80288C3C
  c->r[3]=c->r[13]+0xFFFFA460u; // 80288C40
  c->lr=0x80288C48u; f_8018566C(c); // 80288C44
  c->r[0]=R32(c->r[1]+0x00000014u); // 80288C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80288C4C
  c->lr=c->r[0]; // 80288C50
  c->r[1]=c->r[1]+0x00000010u; // 80288C54
  return; // 80288C58
}

// fn_80288C5C
void f_80288C5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288C5C
  c->r[0]=c->lr; // 80288C60
  cmps(c,0,(int32_t)c->r[3],0); // 80288C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80288C6C
  c->r[31]=c->r[3]|c->r[3]; // 80288C70
  if (crb(c,2)) { goto L_80288C84; } // 80288C74
  cmps(c,0,(int32_t)c->r[4],0); // 80288C78
  if (!crb(c,1)) { goto L_80288C84; } // 80288C7C
  c->lr=0x80288C84u; f_800D6AD0(c); // 80288C80
L_80288C84:;
  c->r[3]=c->r[31]|c->r[31]; // 80288C84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80288C88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80288C8C
  c->lr=c->r[0]; // 80288C90
  c->r[1]=c->r[1]+0x00000010u; // 80288C94
  return; // 80288C98
}

// fn_80288C9C
void f_80288C9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288C9C
  c->r[0]=c->lr; // 80288CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80288CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80288CAC
  c->r[31]=c->r[3]|c->r[3]; // 80288CB0
  if (crb(c,2)) { goto L_80288CC4; } // 80288CB4
  cmps(c,0,(int32_t)c->r[4],0); // 80288CB8
  if (!crb(c,1)) { goto L_80288CC4; } // 80288CBC
  c->lr=0x80288CC4u; f_800D6AD0(c); // 80288CC0
L_80288CC4:;
  c->r[3]=c->r[31]|c->r[31]; // 80288CC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80288CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80288CCC
  c->lr=c->r[0]; // 80288CD0
  c->r[1]=c->r[1]+0x00000010u; // 80288CD4
  return; // 80288CD8
}

// fn_80288CDC
void f_80288CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288CDC
  c->r[0]=c->lr; // 80288CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80288CE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288CE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80288CEC
  c->r[31]=c->r[3]|c->r[3]; // 80288CF0
  if (crb(c,2)) { goto L_80288D04; } // 80288CF4
  cmps(c,0,(int32_t)c->r[4],0); // 80288CF8
  if (!crb(c,1)) { goto L_80288D04; } // 80288CFC
  c->lr=0x80288D04u; f_800D6AD0(c); // 80288D00
L_80288D04:;
  c->r[3]=c->r[31]|c->r[31]; // 80288D04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80288D08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80288D0C
  c->lr=c->r[0]; // 80288D10
  c->r[1]=c->r[1]+0x00000010u; // 80288D14
  return; // 80288D18
}

// fn_80288D1C
void f_80288D1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288D1C
  c->r[0]=c->lr; // 80288D20
  cmps(c,0,(int32_t)c->r[3],0); // 80288D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80288D2C
  c->r[31]=c->r[3]|c->r[3]; // 80288D30
  if (crb(c,2)) { goto L_80288D44; } // 80288D34
  cmps(c,0,(int32_t)c->r[4],0); // 80288D38
  if (!crb(c,1)) { goto L_80288D44; } // 80288D3C
  c->lr=0x80288D44u; f_800D6AD0(c); // 80288D40
L_80288D44:;
  c->r[3]=c->r[31]|c->r[31]; // 80288D44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80288D48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80288D4C
  c->lr=c->r[0]; // 80288D50
  c->r[1]=c->r[1]+0x00000010u; // 80288D54
  return; // 80288D58
}

// fn_80288D5C
void f_80288D5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288D5C
  c->r[0]=c->lr; // 80288D60
  cmps(c,0,(int32_t)c->r[3],0); // 80288D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288D68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80288D6C
  c->r[31]=c->r[3]|c->r[3]; // 80288D70
  if (crb(c,2)) { goto L_80288D84; } // 80288D74
  cmps(c,0,(int32_t)c->r[4],0); // 80288D78
  if (!crb(c,1)) { goto L_80288D84; } // 80288D7C
  c->lr=0x80288D84u; f_800D6AD0(c); // 80288D80
L_80288D84:;
  c->r[3]=c->r[31]|c->r[31]; // 80288D84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80288D88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80288D8C
  c->lr=c->r[0]; // 80288D90
  c->r[1]=c->r[1]+0x00000010u; // 80288D94
  return; // 80288D98
}

// __ct__Q44nw4r3snd6detail7AxVoiceFv
void f_80288D9C(Ctx* __restrict c) {
  trace_call(0x80288D9Cu);
  c->r[4]=0u+0x00010000u; // 80288D9C
  c->r[5]=0u+0x00000000u; // 80288DA0
  c->r[0]=c->r[4]+0xFFFF8000u; // 80288DA4
  W32(c->r[3]+0x00000000u,c->r[5]); // 80288DA8
  W16(c->r[3]+0x00000008u,c->r[0]); // 80288DAC
  W32(c->r[3]+0x00000004u,c->r[5]); // 80288DB0
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 80288DB4
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 80288DB8
  W16(c->r[3]+0x0000000Au,c->r[5]); // 80288DBC
  W32(c->r[3]+0x00000010u,c->r[5]); // 80288DC0
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 80288DC4
  W8(c->r[3]+0x0000001Du,c->r[5]); // 80288DC8
  W32(c->r[3]+0x00000038u,c->r[5]); // 80288DCC
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 80288DD0
  W32(c->r[3]+0x00000040u,c->r[5]); // 80288DD4
  W32(c->r[3]+0x00000044u,c->r[5]); // 80288DD8
  return; // 80288DDC
}

// __dt__Q44nw4r3snd6detail7AxVoiceFv
void f_80288DE0(Ctx* __restrict c) {
  trace_call(0x80288DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288DE0
  c->r[0]=c->lr; // 80288DE4
  cmps(c,0,(int32_t)c->r[3],0); // 80288DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80288DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80288DF0
  c->r[31]=c->r[3]|c->r[3]; // 80288DF4
  if (crb(c,2)) { goto L_80288E08; } // 80288DF8
  cmps(c,0,(int32_t)c->r[4],0); // 80288DFC
  if (!crb(c,1)) { goto L_80288E08; } // 80288E00
  c->lr=0x80288E08u; f_800D6AD0(c); // 80288E04
L_80288E08:;
  c->r[3]=c->r[31]|c->r[31]; // 80288E08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80288E0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80288E10
  c->lr=c->r[0]; // 80288E14
  c->r[1]=c->r[1]+0x00000010u; // 80288E18
  return; // 80288E1C
}

// Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ54nw4r3snd6detail7AxVoice6Formati
void f_80288E20(Ctx* __restrict c) {
  trace_call(0x80288E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288E20
  c->r[0]=c->lr; // 80288E24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80288E28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80288E2C
  c->r[31]=c->r[4]|c->r[4]; // 80288E30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80288E34
  c->r[30]=c->r[6]|c->r[6]; // 80288E38
  W32(c->r[1]+0x00000014u,c->r[29]); // 80288E3C
  c->r[29]=c->r[5]|c->r[5]; // 80288E40
  W32(c->r[1]+0x00000010u,c->r[28]); // 80288E44
  c->r[28]=c->r[3]|c->r[3]; // 80288E48
  c->lr=0x80288E50u; f_80160C68(c); // 80288E4C
  W32(c->r[28]+0x00000010u,c->r[31]); // 80288E50
  c->r[31]=c->r[3]|c->r[3]; // 80288E54
  c->r[3]=c->r[28]+0x0000001Eu; // 80288E58
  c->r[4]=0u+0x00000000u; // 80288E5C
  W32(c->r[28]+0x00000014u,c->r[29]); // 80288E60
  c->r[5]=0u+0x00000018u; // 80288E64
  W32(c->r[28]+0x00000018u,c->r[30]); // 80288E68
  c->lr=0x80288E70u; f_80004688(c); // 80288E6C
  c->r[0]=0u+0x00000001u; // 80288E70
  c->r[3]=c->r[31]|c->r[31]; // 80288E74
  W8(c->r[28]+0x0000001Cu,c->r[0]); // 80288E78
  c->lr=0x80288E80u; f_80160C90(c); // 80288E7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80288E80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80288E84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80288E88
  c->r[29]=R32(c->r[1]+0x00000014u); // 80288E8C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80288E90
  c->lr=c->r[0]; // 80288E94
  c->r[1]=c->r[1]+0x00000020u; // 80288E98
  return; // 80288E9C
}

// IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv
void f_80288EA0(Ctx* __restrict c) {
  trace_call(0x80288EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288EA0
  c->r[0]=c->lr; // 80288EA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80288EA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80288EAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80288EB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80288EB4
  c->r[29]=c->r[3]|c->r[3]; // 80288EB8
  c->lr=0x80288EC0u; f_80160C68(c); // 80288EBC
  c->r[0]=R32(c->r[29]+0x00000010u); // 80288EC0
  c->r[31]=c->r[3]|c->r[3]; // 80288EC4
  cmps(c,0,(int32_t)c->r[0],0); // 80288EC8
  if (!crb(c,2)) { goto L_80288EDC; } // 80288ECC
  c->lr=0x80288ED4u; f_80160C90(c); // 80288ED0
  c->r[3]=0u+0x00000000u; // 80288ED4
  goto L_80288FCC; // 80288ED8
L_80288EDC:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 80288EDC
  cmps(c,0,(int32_t)c->r[4],0); // 80288EE0
  if (crb(c,2)) { goto L_80288EFC; } // 80288EE4
  c->r[3]=R16(c->r[4]+0x000000A2u); // 80288EE8
  c->r[0]=R16(c->r[4]+0x000000A4u); // 80288EEC
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 80288EF0
  c->r[30]=c->r[3]+c->r[0]; // 80288EF4
  goto L_80288F00; // 80288EF8
L_80288EFC:;
  c->r[30]=0u+0x00000000u; // 80288EFC
L_80288F00:;
  c->lr=0x80288F04u; f_80287884(c); // 80288F00
  c->lr=0x80288F08u; f_80287F64(c); // 80288F04
  cmps(c,0,(int32_t)c->r[3],0); // 80288F08
  c->r[0]=R32(c->r[29]+0x00000014u); // 80288F0C
  if (crb(c,2)) { goto L_80288F18; } // 80288F10
  c->r[3]=c->r[3]+0x80000000u; // 80288F14
L_80288F18:;
  cmps(c,0,(int32_t)c->r[0],2); // 80288F18
  c->r[4]=0u+0x00000000u; // 80288F1C
  if (crb(c,2)) { goto L_80288F48; } // 80288F20
  if (!crb(c,0)) { goto L_80288F34; } // 80288F24
  cmps(c,0,(int32_t)c->r[0],1); // 80288F28
  if (!crb(c,0)) { goto L_80288F50; } // 80288F2C
  goto L_80288F54; // 80288F30
L_80288F34:;
  cmps(c,0,(int32_t)c->r[0],4); // 80288F34
  if (!crb(c,0)) { goto L_80288F54; } // 80288F38
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80288F3C
  c->r[4]=c->r[3]+0x00000002u; // 80288F40
  goto L_80288F54; // 80288F44
L_80288F48:;
  c->r[4]=c->r[3]|c->r[3]; // 80288F48
  goto L_80288F54; // 80288F4C
L_80288F50:;
  c->r[4]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80288F50
L_80288F54:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80288F54
  cmps(c,0,(int32_t)c->r[0],2); // 80288F58
  if (crb(c,2)) { goto L_80288F80; } // 80288F5C
  if (!crb(c,0)) { goto L_80288F70; } // 80288F60
  cmps(c,0,(int32_t)c->r[0],1); // 80288F64
  if (!crb(c,0)) { goto L_80288F88; } // 80288F68
  goto L_80288F90; // 80288F6C
L_80288F70:;
  cmps(c,0,(int32_t)c->r[0],4); // 80288F70
  if (!crb(c,0)) { goto L_80288F90; } // 80288F74
  c->r[0]=c->r[4]+0x00000200u; // 80288F78
  goto L_80288FA0; // 80288F7C
L_80288F80:;
  c->r[0]=c->r[4]+0x00000100u; // 80288F80
  goto L_80288FA0; // 80288F84
L_80288F88:;
  c->r[0]=c->r[4]+0x00000080u; // 80288F88
  goto L_80288FA0; // 80288F8C
L_80288F90:;
  c->r[3]=c->r[31]|c->r[31]; // 80288F90
  c->lr=0x80288F98u; f_80160C90(c); // 80288F94
  c->r[3]=0u+0x00000000u; // 80288F98
  goto L_80288FCC; // 80288F9C
L_80288FA0:;
  cmpu(c,0,c->r[4],c->r[30]); // 80288FA0
  if (crb(c,1)) { goto L_80288FC0; } // 80288FA4
  cmpu(c,0,c->r[30],c->r[0]); // 80288FA8
  if (!crb(c,0)) { goto L_80288FC0; } // 80288FAC
  c->r[3]=c->r[31]|c->r[31]; // 80288FB0
  c->lr=0x80288FB8u; f_80160C90(c); // 80288FB4
  c->r[3]=0u+0x00000001u; // 80288FB8
  goto L_80288FCC; // 80288FBC
L_80288FC0:;
  c->r[3]=c->r[31]|c->r[31]; // 80288FC0
  c->lr=0x80288FC8u; f_80160C90(c); // 80288FC4
  c->r[3]=0u+0x00000000u; // 80288FC8
L_80288FCC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80288FCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80288FD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80288FD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80288FD8
  c->lr=c->r[0]; // 80288FDC
  c->r[1]=c->r[1]+0x00000020u; // 80288FE0
  return; // 80288FE4
}

// SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_80288FE8(Ctx* __restrict c) {
  trace_call(0x80288FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80288FE8
  c->r[0]=c->lr; // 80288FEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80288FF0
  c->r[11]=c->r[1]+0x00000020u; // 80288FF4
  c->lr=0x80288FFCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80288FF8
  c->r[31]=c->r[3]|c->r[3]; // 80288FFC
  c->r[27]=c->r[4]|c->r[4]; // 80289000
  c->r[28]=c->r[5]|c->r[5]; // 80289004
  c->lr=0x8028900Cu; f_80160C68(c); // 80289008
  c->r[0]=R32(c->r[31]+0x00000000u); // 8028900C
  c->r[30]=c->r[3]|c->r[3]; // 80289010
  cmps(c,0,(int32_t)c->r[0],0); // 80289014
  if (!crb(c,2)) { goto L_80289024; } // 80289018
  c->lr=0x80289020u; f_80160C90(c); // 8028901C
  goto L_802890F0; // 80289020
L_80289024:;
  cmps(c,0,(int32_t)c->r[27],0); // 80289024
  c->r[0]=R32(c->r[31]+0x00000014u); // 80289028
  if (crb(c,2)) { goto L_80289034; } // 8028902C
  c->r[27]=c->r[27]+0x80000000u; // 80289030
L_80289034:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289034
  c->r[29]=0u+0x00000000u; // 80289038
  if (crb(c,2)) { goto L_80289094; } // 8028903C
  if (!crb(c,0)) { goto L_80289050; } // 80289040
  cmps(c,0,(int32_t)c->r[0],1); // 80289044
  if (!crb(c,0)) { goto L_8028909C; } // 80289048
  goto L_802890A4; // 8028904C
L_80289050:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289050
  if (!crb(c,0)) { goto L_802890A4; } // 80289054
  c->r[3]=0u+0x24920000u; // 80289058
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 8028905C
  c->r[3]=c->r[3]+0x00004925u; // 80289060
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[28])>>32); // 80289064
  c->r[3]=c->r[28]-c->r[4]; // 80289068
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8028906C
  c->r[4]=c->r[3]+c->r[4]; // 80289070
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 80289074
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 80289078
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 8028907C
  c->r[4]=c->r[28]-c->r[5]; // 80289080
  c->r[0]=c->r[4]+c->r[0]; // 80289084
  c->r[29]=c->r[0]+c->r[3]; // 80289088
  c->r[29]=c->r[29]+0x00000002u; // 8028908C
  goto L_802890A4; // 80289090
L_80289094:;
  c->r[29]=c->r[27]+c->r[28]; // 80289094
  goto L_802890A4; // 80289098
L_8028909C:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 8028909C
  c->r[29]=c->r[0]+c->r[28]; // 802890A0
L_802890A4:;
  c->lr=0x802890A8u; f_80160C68(c); // 802890A4
  c->r[4]=R32(c->r[31]+0x00000000u); // 802890A8
  cmps(c,0,(int32_t)c->r[4],0); // 802890AC
  if (!crb(c,2)) { goto L_802890BC; } // 802890B0
  c->lr=0x802890B8u; f_80160C90(c); // 802890B4
  goto L_802890E8; // 802890B8
L_802890BC:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 802890BC
  W16(c->r[4]+0x0000009Au,c->r[0]); // 802890C0
  c->r[4]=R32(c->r[31]+0x00000000u); // 802890C4
  W16(c->r[4]+0x0000009Cu,c->r[29]); // 802890C8
  c->r[5]=R32(c->r[31]+0x00000000u); // 802890CC
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 802890D0
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 802890D4
  if (!crb(c,2)) { goto L_802890E4; } // 802890D8
  c->r[0]=c->r[4]|0x00001000u; // 802890DC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 802890E0
L_802890E4:;
  c->lr=0x802890E8u; f_80160C90(c); // 802890E4
L_802890E8:;
  c->r[3]=c->r[30]|c->r[30]; // 802890E8
  c->lr=0x802890F0u; f_80160C90(c); // 802890EC
L_802890F0:;
  c->r[11]=c->r[1]+0x00000020u; // 802890F0
  c->lr=0x802890F8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802890F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802890F8
  c->lr=c->r[0]; // 802890FC
  c->r[1]=c->r[1]+0x00000020u; // 80289100
  return; // 80289104
}

// SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_80289108(Ctx* __restrict c) {
  trace_call(0x80289108u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80289108
  c->r[0]=c->lr; // 8028910C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80289110
  c->r[11]=c->r[1]+0x00000020u; // 80289114
  c->lr=0x8028911Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80289118
  c->r[31]=c->r[3]|c->r[3]; // 8028911C
  c->r[27]=c->r[4]|c->r[4]; // 80289120
  c->r[28]=c->r[5]|c->r[5]; // 80289124
  c->lr=0x8028912Cu; f_80160C68(c); // 80289128
  c->r[0]=R32(c->r[31]+0x00000000u); // 8028912C
  c->r[30]=c->r[3]|c->r[3]; // 80289130
  cmps(c,0,(int32_t)c->r[0],0); // 80289134
  if (!crb(c,2)) { goto L_80289144; } // 80289138
  c->lr=0x80289140u; f_80160C90(c); // 8028913C
  goto L_8028921C; // 80289140
L_80289144:;
  cmps(c,0,(int32_t)c->r[27],0); // 80289144
  c->r[0]=R32(c->r[31]+0x00000014u); // 80289148
  if (crb(c,2)) { goto L_80289154; } // 8028914C
  c->r[27]=c->r[27]+0x80000000u; // 80289150
L_80289154:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289154
  c->r[29]=0u+0x00000000u; // 80289158
  if (crb(c,2)) { goto L_802891B8; } // 8028915C
  if (!crb(c,0)) { goto L_80289170; } // 80289160
  cmps(c,0,(int32_t)c->r[0],1); // 80289164
  if (!crb(c,0)) { goto L_802891C4; } // 80289168
  goto L_802891D0; // 8028916C
L_80289170:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289170
  if (!crb(c,0)) { goto L_802891D0; } // 80289174
  c->r[3]=0u+0x24920000u; // 80289178
  c->r[6]=c->r[28]+0xFFFFFFFFu; // 8028917C
  c->r[3]=c->r[3]+0x00004925u; // 80289180
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 80289184
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 80289188
  c->r[3]=c->r[6]-c->r[4]; // 8028918C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80289190
  c->r[4]=c->r[3]+c->r[4]; // 80289194
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 80289198
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 8028919C
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 802891A0
  c->r[4]=c->r[6]-c->r[5]; // 802891A4
  c->r[0]=c->r[4]+c->r[0]; // 802891A8
  c->r[29]=c->r[0]+c->r[3]; // 802891AC
  c->r[29]=c->r[29]+0x00000002u; // 802891B0
  goto L_802891D0; // 802891B4
L_802891B8:;
  c->r[29]=c->r[27]+c->r[28]; // 802891B8
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 802891BC
  goto L_802891D0; // 802891C0
L_802891C4:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 802891C4
  c->r[3]=c->r[28]+c->r[0]; // 802891C8
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 802891CC
L_802891D0:;
  c->lr=0x802891D4u; f_80160C68(c); // 802891D0
  c->r[4]=R32(c->r[31]+0x00000000u); // 802891D4
  cmps(c,0,(int32_t)c->r[4],0); // 802891D8
  if (!crb(c,2)) { goto L_802891E8; } // 802891DC
  c->lr=0x802891E4u; f_80160C90(c); // 802891E0
  goto L_80289214; // 802891E4
L_802891E8:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 802891E8
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 802891EC
  c->r[4]=R32(c->r[31]+0x00000000u); // 802891F0
  W16(c->r[4]+0x000000A0u,c->r[29]); // 802891F4
  c->r[5]=R32(c->r[31]+0x00000000u); // 802891F8
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 802891FC
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80289200
  if (!crb(c,2)) { goto L_80289210; } // 80289204
  c->r[0]=c->r[4]|0x00002000u; // 80289208
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 8028920C
L_80289210:;
  c->lr=0x80289214u; f_80160C90(c); // 80289210
L_80289214:;
  c->r[3]=c->r[30]|c->r[30]; // 80289214
  c->lr=0x8028921Cu; f_80160C90(c); // 80289218
L_8028921C:;
  c->r[11]=c->r[1]+0x00000020u; // 8028921C
  c->lr=0x80289224u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80289220
  c->r[0]=R32(c->r[1]+0x00000024u); // 80289224
  c->lr=c->r[0]; // 80289228
  c->r[1]=c->r[1]+0x00000020u; // 8028922C
  return; // 80289230
}

// SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb
void f_80289234(Ctx* __restrict c) {
  trace_call(0x80289234u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80289234
  c->r[0]=c->lr; // 80289238
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028923C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80289240
  W32(c->r[1]+0x00000018u,c->r[30]); // 80289244
  c->r[30]=c->r[4]|c->r[4]; // 80289248
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028924C
  c->r[29]=c->r[3]|c->r[3]; // 80289250
  c->lr=0x80289258u; f_80160C68(c); // 80289254
  c->r[0]=R32(c->r[29]+0x00000000u); // 80289258
  c->r[31]=c->r[3]|c->r[3]; // 8028925C
  cmps(c,0,(int32_t)c->r[0],0); // 80289260
  if (!crb(c,2)) { goto L_80289270; } // 80289264
  c->lr=0x8028926Cu; f_80160C90(c); // 80289268
  goto L_802892B0; // 8028926C
L_80289270:;
  c->lr=0x80289274u; f_80160C68(c); // 80289270
  c->r[4]=R32(c->r[29]+0x00000000u); // 80289274
  cmps(c,0,(int32_t)c->r[4],0); // 80289278
  if (!crb(c,2)) { goto L_80289288; } // 8028927C
  c->lr=0x80289284u; f_80160C90(c); // 80289280
  goto L_802892A8; // 80289284
L_80289288:;
  W16(c->r[4]+0x00000096u,c->r[30]); // 80289288
  c->r[5]=R32(c->r[29]+0x00000000u); // 8028928C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 80289290
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80289294
  if (!crb(c,2)) { goto L_802892A4; } // 80289298
  c->r[0]=c->r[4]|0x00000800u; // 8028929C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 802892A0
L_802892A4:;
  c->lr=0x802892A8u; f_80160C90(c); // 802892A4
L_802892A8:;
  c->r[3]=c->r[31]|c->r[31]; // 802892A8
  c->lr=0x802892B0u; f_80160C90(c); // 802892AC
L_802892B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802892B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802892B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802892B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802892BC
  c->lr=c->r[0]; // 802892C0
  c->r[1]=c->r[1]+0x00000020u; // 802892C4
  return; // 802892C8
}

// StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_802892CC(Ctx* __restrict c) {
  trace_call(0x802892CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802892CC
  c->r[0]=c->lr; // 802892D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802892D4
  c->r[11]=c->r[1]+0x00000020u; // 802892D8
  c->lr=0x802892E0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802892DC
  c->r[30]=c->r[3]|c->r[3]; // 802892E0
  c->r[26]=c->r[4]|c->r[4]; // 802892E4
  c->r[27]=c->r[5]|c->r[5]; // 802892E8
  c->lr=0x802892F0u; f_80160C68(c); // 802892EC
  c->r[0]=R32(c->r[30]+0x00000000u); // 802892F0
  c->r[29]=c->r[3]|c->r[3]; // 802892F4
  cmps(c,0,(int32_t)c->r[0],0); // 802892F8
  if (!crb(c,2)) { goto L_80289308; } // 802892FC
  c->lr=0x80289304u; f_80160C90(c); // 80289300
  goto L_802894B0; // 80289304
L_80289308:;
  c->lr=0x8028930Cu; f_80287884(c); // 80289308
  c->lr=0x80289310u; f_80287F64(c); // 8028930C
  cmps(c,0,(int32_t)c->r[3],0); // 80289310
  c->r[0]=R32(c->r[30]+0x00000014u); // 80289314
  if (crb(c,2)) { goto L_80289320; } // 80289318
  c->r[3]=c->r[3]+0x80000000u; // 8028931C
L_80289320:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289320
  c->r[31]=0u+0x00000000u; // 80289324
  if (crb(c,2)) { goto L_80289350; } // 80289328
  if (!crb(c,0)) { goto L_8028933C; } // 8028932C
  cmps(c,0,(int32_t)c->r[0],1); // 80289330
  if (!crb(c,0)) { goto L_80289358; } // 80289334
  goto L_8028935C; // 80289338
L_8028933C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8028933C
  if (!crb(c,0)) { goto L_8028935C; } // 80289340
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80289344
  c->r[31]=c->r[3]+0x00000002u; // 80289348
  goto L_8028935C; // 8028934C
L_80289350:;
  c->r[31]=c->r[3]|c->r[3]; // 80289350
  goto L_8028935C; // 80289354
L_80289358:;
  c->r[31]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80289358
L_8028935C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8028935C
  if (crb(c,2)) { goto L_80289368; } // 80289360
  c->r[26]=c->r[26]+0x80000000u; // 80289364
L_80289368:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289368
  c->r[28]=0u+0x00000000u; // 8028936C
  if (crb(c,2)) { goto L_802893CC; } // 80289370
  if (!crb(c,0)) { goto L_80289384; } // 80289374
  cmps(c,0,(int32_t)c->r[0],1); // 80289378
  if (!crb(c,0)) { goto L_802893D8; } // 8028937C
  goto L_802893E4; // 80289380
L_80289384:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289384
  if (!crb(c,0)) { goto L_802893E4; } // 80289388
  c->r[3]=0u+0x24920000u; // 8028938C
  c->r[6]=c->r[27]+0xFFFFFFFFu; // 80289390
  c->r[3]=c->r[3]+0x00004925u; // 80289394
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 80289398
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 8028939C
  c->r[3]=c->r[6]-c->r[4]; // 802893A0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 802893A4
  c->r[4]=c->r[3]+c->r[4]; // 802893A8
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 802893AC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 802893B0
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 802893B4
  c->r[4]=c->r[6]-c->r[5]; // 802893B8
  c->r[0]=c->r[4]+c->r[0]; // 802893BC
  c->r[28]=c->r[0]+c->r[3]; // 802893C0
  c->r[28]=c->r[28]+0x00000002u; // 802893C4
  goto L_802893E4; // 802893C8
L_802893CC:;
  c->r[28]=c->r[26]+c->r[27]; // 802893CC
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 802893D0
  goto L_802893E4; // 802893D4
L_802893D8:;
  c->r[0]=rotl(c->r[26],31)&0x7FFFFFFFu; // 802893D8
  c->r[3]=c->r[27]+c->r[0]; // 802893DC
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 802893E0
L_802893E4:;
  c->lr=0x802893E8u; f_80160C68(c); // 802893E4
  c->r[4]=R32(c->r[30]+0x00000000u); // 802893E8
  cmps(c,0,(int32_t)c->r[4],0); // 802893EC
  if (!crb(c,2)) { goto L_802893FC; } // 802893F0
  c->lr=0x802893F8u; f_80160C90(c); // 802893F4
  goto L_80289428; // 802893F8
L_802893FC:;
  c->r[0]=rotl(c->r[31],16)&0x0000FFFFu; // 802893FC
  W16(c->r[4]+0x0000009Au,c->r[0]); // 80289400
  c->r[4]=R32(c->r[30]+0x00000000u); // 80289404
  W16(c->r[4]+0x0000009Cu,c->r[31]); // 80289408
  c->r[5]=R32(c->r[30]+0x00000000u); // 8028940C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 80289410
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80289414
  if (!crb(c,2)) { goto L_80289424; } // 80289418
  c->r[0]=c->r[4]|0x00001000u; // 8028941C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80289420
L_80289424:;
  c->lr=0x80289428u; f_80160C90(c); // 80289424
L_80289428:;
  c->lr=0x8028942Cu; f_80160C68(c); // 80289428
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028942C
  cmps(c,0,(int32_t)c->r[4],0); // 80289430
  if (!crb(c,2)) { goto L_80289440; } // 80289434
  c->lr=0x8028943Cu; f_80160C90(c); // 80289438
  goto L_8028946C; // 8028943C
L_80289440:;
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 80289440
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 80289444
  c->r[4]=R32(c->r[30]+0x00000000u); // 80289448
  W16(c->r[4]+0x000000A0u,c->r[28]); // 8028944C
  c->r[5]=R32(c->r[30]+0x00000000u); // 80289450
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 80289454
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80289458
  if (!crb(c,2)) { goto L_80289468; } // 8028945C
  c->r[0]=c->r[4]|0x00002000u; // 80289460
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80289464
L_80289468:;
  c->lr=0x8028946Cu; f_80160C90(c); // 80289468
L_8028946C:;
  c->lr=0x80289470u; f_80160C68(c); // 8028946C
  c->r[4]=R32(c->r[30]+0x00000000u); // 80289470
  cmps(c,0,(int32_t)c->r[4],0); // 80289474
  if (!crb(c,2)) { goto L_80289484; } // 80289478
  c->lr=0x80289480u; f_80160C90(c); // 8028947C
  goto L_802894A8; // 80289480
L_80289484:;
  c->r[0]=0u+0x00000000u; // 80289484
  W16(c->r[4]+0x00000096u,c->r[0]); // 80289488
  c->r[5]=R32(c->r[30]+0x00000000u); // 8028948C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 80289490
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80289494
  if (!crb(c,2)) { goto L_802894A4; } // 80289498
  c->r[0]=c->r[4]|0x00000800u; // 8028949C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 802894A0
L_802894A4:;
  c->lr=0x802894A8u; f_80160C90(c); // 802894A4
L_802894A8:;
  c->r[3]=c->r[29]|c->r[29]; // 802894A8
  c->lr=0x802894B0u; f_80160C90(c); // 802894AC
L_802894B0:;
  c->r[11]=c->r[1]+0x00000020u; // 802894B0
  c->lr=0x802894B8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802894B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802894B8
  c->lr=c->r[0]; // 802894BC
  c->r[1]=c->r[1]+0x00000020u; // 802894C0
  return; // 802894C4
}

// IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv
void f_802894C8(Ctx* __restrict c) {
  trace_call(0x802894C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802894C8
  c->r[0]=c->lr; // 802894CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802894D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802894D4
  c->r[31]=c->r[3]|c->r[3]; // 802894D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802894DC
  c->r[30]=c->r[5]|c->r[5]; // 802894E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802894E4
  c->r[29]=c->r[4]|c->r[4]; // 802894E8
  c->lr=0x802894F0u; f_80160C68(c); // 802894EC
  c->r[0]=R32(c->r[31]+0x00000000u); // 802894F0
  cmps(c,0,(int32_t)c->r[0],0); // 802894F4
  if (!crb(c,2)) { goto L_80289508; } // 802894F8
  c->lr=0x80289500u; f_80160C90(c); // 802894FC
  c->r[3]=0u+0x00000000u; // 80289500
  goto L_80289544; // 80289504
L_80289508:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 80289508
  c->r[31]=0u+0x00000000u; // 8028950C
  cmps(c,0,(int32_t)c->r[4],0); // 80289510
  if (crb(c,2)) { goto L_8028953C; } // 80289514
  cmpu(c,0,c->r[29],c->r[4]); // 80289518
  c->r[0]=0u+0x00000000u; // 8028951C
  if (crb(c,1)) { goto L_80289530; } // 80289520
  cmpu(c,0,c->r[4],c->r[30]); // 80289524
  if (crb(c,1)) { goto L_80289530; } // 80289528
  c->r[0]=0u+0x00000001u; // 8028952C
L_80289530:;
  cmps(c,0,(int32_t)c->r[0],0); // 80289530
  if (crb(c,2)) { goto L_8028953C; } // 80289534
  c->r[31]=0u+0x00000001u; // 80289538
L_8028953C:;
  c->lr=0x80289540u; f_80160C90(c); // 8028953C
  c->r[3]=c->r[31]|c->r[31]; // 80289540
L_80289544:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80289544
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80289548
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028954C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80289550
  c->lr=c->r[0]; // 80289554
  c->r[1]=c->r[1]+0x00000020u; // 80289558
  return; // 8028955C
}

// GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv
void f_80289560(Ctx* __restrict c) {
  trace_call(0x80289560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80289560
  c->r[0]=c->lr; // 80289564
  W32(c->r[1]+0x00000014u,c->r[0]); // 80289568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028956C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80289570
  c->r[30]=c->r[3]|c->r[3]; // 80289574
  c->lr=0x8028957Cu; f_80160C68(c); // 80289578
  c->r[0]=R32(c->r[30]+0x00000000u); // 8028957C
  c->r[31]=c->r[3]|c->r[3]; // 80289580
  cmps(c,0,(int32_t)c->r[0],0); // 80289584
  if (!crb(c,2)) { goto L_80289598; } // 80289588
  c->lr=0x80289590u; f_80160C90(c); // 8028958C
  c->r[3]=0u+0x00000000u; // 80289590
  goto L_802896F4; // 80289594
L_80289598:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 80289598
  cmps(c,0,(int32_t)c->r[0],0); // 8028959C
  if (!crb(c,2)) { goto L_802895B0; } // 802895A0
  c->lr=0x802895A8u; f_80160C90(c); // 802895A4
  c->r[3]=0u+0x00000000u; // 802895A8
  goto L_802896F4; // 802895AC
L_802895B0:;
  c->r[3]=c->r[30]|c->r[30]; // 802895B0
  c->lr=0x802895B8u; f_80288EA0(c); // 802895B4
  cmps(c,0,(int32_t)c->r[3],0); // 802895B8
  if (crb(c,2)) { goto L_8028965C; } // 802895BC
  c->r[4]=R32(c->r[30]+0x00000000u); // 802895C0
  cmps(c,0,(int32_t)c->r[4],0); // 802895C4
  if (crb(c,2)) { goto L_802895E0; } // 802895C8
  c->r[3]=R16(c->r[4]+0x0000009Eu); // 802895CC
  c->r[0]=R16(c->r[4]+0x000000A0u); // 802895D0
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 802895D4
  c->r[3]=c->r[3]+c->r[0]; // 802895D8
  goto L_802895E4; // 802895DC
L_802895E0:;
  c->r[3]=0u+0x00000000u; // 802895E0
L_802895E4:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 802895E4
  c->r[0]=R32(c->r[30]+0x00000014u); // 802895E8
  cmps(c,0,(int32_t)c->r[4],0); // 802895EC
  if (crb(c,2)) { goto L_802895F8; } // 802895F0
  c->r[4]=c->r[4]+0x80000000u; // 802895F4
L_802895F8:;
  cmps(c,0,(int32_t)c->r[0],2); // 802895F8
  c->r[30]=0u+0x00000000u; // 802895FC
  if (crb(c,2)) { goto L_8028963C; } // 80289600
  if (!crb(c,0)) { goto L_80289614; } // 80289604
  cmps(c,0,(int32_t)c->r[0],1); // 80289608
  if (!crb(c,0)) { goto L_80289644; } // 8028960C
  goto L_8028964C; // 80289610
L_80289614:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289614
  if (!crb(c,0)) { goto L_8028964C; } // 80289618
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8028961C
  c->r[4]=c->r[3]-c->r[0]; // 80289620
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 80289624
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 80289628
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 8028962C
  c->r[3]=c->r[0]+c->r[3]; // 80289630
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 80289634
  goto L_8028964C; // 80289638
L_8028963C:;
  c->r[30]=c->r[3]-c->r[4]; // 8028963C
  goto L_8028964C; // 80289640
L_80289644:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80289644
  c->r[30]=c->r[3]-c->r[0]; // 80289648
L_8028964C:;
  c->r[3]=c->r[31]|c->r[31]; // 8028964C
  c->lr=0x80289654u; f_80160C90(c); // 80289650
  c->r[3]=c->r[30]+0x00000001u; // 80289654
  goto L_802896F4; // 80289658
L_8028965C:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028965C
  cmps(c,0,(int32_t)c->r[4],0); // 80289660
  if (crb(c,2)) { goto L_8028967C; } // 80289664
  c->r[3]=R16(c->r[4]+0x000000A2u); // 80289668
  c->r[0]=R16(c->r[4]+0x000000A4u); // 8028966C
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 80289670
  c->r[3]=c->r[3]+c->r[0]; // 80289674
  goto L_80289680; // 80289678
L_8028967C:;
  c->r[3]=0u+0x00000000u; // 8028967C
L_80289680:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 80289680
  c->r[0]=R32(c->r[30]+0x00000014u); // 80289684
  cmps(c,0,(int32_t)c->r[4],0); // 80289688
  if (crb(c,2)) { goto L_80289694; } // 8028968C
  c->r[4]=c->r[4]+0x80000000u; // 80289690
L_80289694:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289694
  c->r[30]=0u+0x00000000u; // 80289698
  if (crb(c,2)) { goto L_802896D8; } // 8028969C
  if (!crb(c,0)) { goto L_802896B0; } // 802896A0
  cmps(c,0,(int32_t)c->r[0],1); // 802896A4
  if (!crb(c,0)) { goto L_802896E0; } // 802896A8
  goto L_802896E8; // 802896AC
L_802896B0:;
  cmps(c,0,(int32_t)c->r[0],4); // 802896B0
  if (!crb(c,0)) { goto L_802896E8; } // 802896B4
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802896B8
  c->r[4]=c->r[3]-c->r[0]; // 802896BC
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 802896C0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 802896C4
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 802896C8
  c->r[3]=c->r[0]+c->r[3]; // 802896CC
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 802896D0
  goto L_802896E8; // 802896D4
L_802896D8:;
  c->r[30]=c->r[3]-c->r[4]; // 802896D8
  goto L_802896E8; // 802896DC
L_802896E0:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 802896E0
  c->r[30]=c->r[3]-c->r[0]; // 802896E4
L_802896E8:;
  c->r[3]=c->r[31]|c->r[31]; // 802896E8
  c->lr=0x802896F0u; f_80160C90(c); // 802896EC
  c->r[3]=c->r[30]|c->r[30]; // 802896F0
L_802896F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802896F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802896F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802896FC
  c->lr=c->r[0]; // 80289700
  c->r[1]=c->r[1]+0x00000010u; // 80289704
  return; // 80289708
}

// VoiceCallback__Q44nw4r3snd6detail7AxVoiceFPv
void f_8028970C(Ctx* __restrict c) {
  trace_call(0x8028970Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028970C
  c->r[0]=c->lr; // 80289710
  W32(c->r[1]+0x00000014u,c->r[0]); // 80289714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80289718
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028971C
  c->r[30]=c->r[3]|c->r[3]; // 80289720
  c->lr=0x80289728u; f_80160C68(c); // 80289724
  c->r[30]=R32(c->r[30]+0x00000014u); // 80289728
  c->r[0]=0u+0x00000000u; // 8028972C
  c->r[31]=c->r[3]|c->r[3]; // 80289730
  W32(c->r[30]+0x00000000u,c->r[0]); // 80289734
  W32(c->r[30]+0x00000004u,c->r[0]); // 80289738
  c->lr=0x80289740u; f_8028BA5C(c); // 8028973C
  c->r[4]=c->r[30]|c->r[30]; // 80289740
  c->lr=0x80289748u; f_8028C27C(c); // 80289744
  c->r[3]=c->r[31]|c->r[31]; // 80289748
  c->lr=0x80289750u; f_80160C90(c); // 8028974C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80289750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80289754
  c->r[30]=R32(c->r[1]+0x00000008u); // 80289758
  c->lr=c->r[0]; // 8028975C
  c->r[1]=c->r[1]+0x00000010u; // 80289760
  return; // 80289764
}

// GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat
void f_80289768(Ctx* __restrict c) {
  trace_call(0x80289768u);
  cmps(c,0,(int32_t)c->r[3],0); // 80289768
  if (crb(c,2)) { goto L_80289774; } // 8028976C
  c->r[3]=c->r[3]+0x80000000u; // 80289770
L_80289774:;
  cmps(c,0,(int32_t)c->r[5],2); // 80289774
  c->r[0]=0u+0x00000000u; // 80289778
  if (crb(c,2)) { goto L_802897B8; } // 8028977C
  if (!crb(c,0)) { goto L_80289790; } // 80289780
  cmps(c,0,(int32_t)c->r[5],1); // 80289784
  if (!crb(c,0)) { goto L_802897C0; } // 80289788
  goto L_802897C8; // 8028978C
L_80289790:;
  cmps(c,0,(int32_t)c->r[5],4); // 80289790
  if (!crb(c,0)) { goto L_802897C8; } // 80289794
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80289798
  c->r[4]=c->r[4]-c->r[0]; // 8028979C
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 802897A0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 802897A4
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 802897A8
  c->r[3]=c->r[0]+c->r[3]; // 802897AC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 802897B0
  goto L_802897C8; // 802897B4
L_802897B8:;
  c->r[0]=c->r[4]-c->r[3]; // 802897B8
  goto L_802897C8; // 802897BC
L_802897C0:;
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; // 802897C0
  c->r[0]=c->r[4]-c->r[0]; // 802897C4
L_802897C8:;
  c->r[3]=c->r[0]|c->r[0]; // 802897C8
  return; // 802897CC
}

// SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
void f_802897D0(Ctx* __restrict c) {
  trace_call(0x802897D0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802897D0
  cmps(c,0,(int32_t)c->r[3],0); // 802897D4
  if (crb(c,2)) return; // 802897D8
  f_80178DA0(c); return; // 802897DC
  return; // 802897E0
}

// SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
void f_802897E4(Ctx* __restrict c) {
  trace_call(0x802897E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802897E4
  c->r[0]=c->lr; // 802897E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802897EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802897F0
  c->r[31]=c->r[4]|c->r[4]; // 802897F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802897F8
  c->r[30]=c->r[3]|c->r[3]; // 802897FC
  c->lr=0x80289804u; f_80160C68(c); // 80289800
  c->r[4]=R32(c->r[30]+0x00000000u); // 80289804
  cmps(c,0,(int32_t)c->r[4],0); // 80289808
  if (!crb(c,2)) { goto L_80289818; } // 8028980C
  c->lr=0x80289814u; f_80160C90(c); // 80289810
  goto L_8028982C; // 80289814
L_80289818:;
  W16(c->r[4]+0x0000003Au,c->r[31]); // 80289818
  c->r[0]=R32(c->r[30]+0x00000004u); // 8028981C
  c->r[0]=c->r[0]|0x00000008u; // 80289820
  W32(c->r[30]+0x00000004u,c->r[0]); // 80289824
  c->lr=0x8028982Cu; f_80160C90(c); // 80289828
L_8028982C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028982C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80289830
  c->r[30]=R32(c->r[1]+0x00000008u); // 80289834
  c->lr=c->r[0]; // 80289838
  c->r[1]=c->r[1]+0x00000010u; // 8028983C
  return; // 80289840
}

// EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
void f_80289844(Ctx* __restrict c) {
  trace_call(0x80289844u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80289844
  c->r[0]=c->lr; // 80289848
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028984C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80289850
  c->r[31]=c->r[4]|c->r[4]; // 80289854
  W32(c->r[1]+0x00000008u,c->r[30]); // 80289858
  c->r[30]=c->r[3]|c->r[3]; // 8028985C
  c->lr=0x80289864u; f_80160C68(c); // 80289860
  c->r[4]=R32(c->r[30]+0x00000000u); // 80289864
  cmps(c,0,(int32_t)c->r[4],0); // 80289868
  if (!crb(c,2)) { goto L_80289878; } // 8028986C
  c->lr=0x80289874u; f_80160C90(c); // 80289870
  goto L_8028988C; // 80289874
L_80289878:;
  W16(c->r[4]+0x000000FEu,c->r[31]); // 80289878
  c->r[0]=R32(c->r[30]+0x00000004u); // 8028987C
  c->r[0]=c->r[0]|0x00800000u; // 80289880
  W32(c->r[30]+0x00000004u,c->r[0]); // 80289884
  c->lr=0x8028988Cu; f_80160C90(c); // 80289888
L_8028988C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028988C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80289890
  c->r[30]=R32(c->r[1]+0x00000008u); // 80289894
  c->lr=c->r[0]; // 80289898
  c->r[1]=c->r[1]+0x00000010u; // 8028989C
  return; // 802898A0
}

// ResetDelta__Q44nw4r3snd6detail7AxVoiceFv
void f_802898A4(Ctx* __restrict c) {
  trace_call(0x802898A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802898A4
  c->r[0]=c->lr; // 802898A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 802898AC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802898B0
  c->r[31]=c->r[3]|c->r[3]; // 802898B4
  W32(c->r[1]+0x00000038u,c->r[30]); // 802898B8
  c->lr=0x802898C0u; f_80160C68(c); // 802898BC
  c->r[0]=R32(c->r[31]+0x00000000u); // 802898C0
  c->r[30]=c->r[3]|c->r[3]; // 802898C4
  cmps(c,0,(int32_t)c->r[0],0); // 802898C8
  if (!crb(c,2)) { goto L_802898D8; } // 802898CC
  c->lr=0x802898D4u; f_80160C90(c); // 802898D0
  goto L_802899DC; // 802898D4
L_802898D8:;
  c->lr=0x802898DCu; f_80160C68(c); // 802898D8
  c->r[4]=R32(c->r[31]+0x00000000u); // 802898DC
  cmps(c,0,(int32_t)c->r[4],0); // 802898E0
  if (!crb(c,2)) { goto L_802898F0; } // 802898E4
  c->lr=0x802898ECu; f_80160C90(c); // 802898E8
  goto L_80289930; // 802898EC
L_802898F0:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 802898F0
  c->r[0]=0u+0x00000000u; // 802898F4
  c->r[6]=R16(c->r[31]+0x00000008u); // 802898F8
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 802898FC
  c->r[4]=R32(c->r[31]+0x00000000u); // 80289900
  c->r[5]=c->r[6]+c->r[5]; // 80289904
  W16(c->r[31]+0x00000008u,c->r[5]); // 80289908
  c->r[5]=R16(c->r[31]+0x00000008u); // 8028990C
  W16(c->r[4]+0x00000092u,c->r[5]); // 80289910
  c->r[4]=R32(c->r[31]+0x00000000u); // 80289914
  W16(c->r[4]+0x00000094u,c->r[0]); // 80289918
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028991C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80289920
  c->r[0]=c->r[0]|0x00000100u; // 80289924
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80289928
  c->lr=0x80289930u; f_80160C90(c); // 8028992C
L_80289930:;
  c->r[0]=R16(c->r[31]+0x0000001Eu); // 80289930
  c->r[6]=0u+0x00000000u; // 80289934
  c->r[3]=c->r[31]|c->r[31]; // 80289938
  c->r[4]=c->r[1]+0x00000008u; // 8028993C
  W16(c->r[1]+0x00000008u,c->r[0]); // 80289940
  c->r[5]=0u+0x00000001u; // 80289944
  W16(c->r[1]+0x0000000Au,c->r[6]); // 80289948
  c->r[0]=R16(c->r[31]+0x00000020u); // 8028994C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 80289950
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 80289954
  c->r[0]=R16(c->r[31]+0x00000024u); // 80289958
  W16(c->r[1]+0x00000010u,c->r[0]); // 8028995C
  W16(c->r[1]+0x00000012u,c->r[6]); // 80289960
  c->r[0]=R16(c->r[31]+0x00000026u); // 80289964
  W16(c->r[1]+0x00000014u,c->r[0]); // 80289968
  W16(c->r[1]+0x00000016u,c->r[6]); // 8028996C
  c->r[0]=R16(c->r[31]+0x0000002Au); // 80289970
  W16(c->r[1]+0x00000018u,c->r[0]); // 80289974
  W16(c->r[1]+0x0000001Au,c->r[6]); // 80289978
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 8028997C
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 80289980
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 80289984
  c->r[0]=R16(c->r[31]+0x00000030u); // 80289988
  W16(c->r[1]+0x00000020u,c->r[0]); // 8028998C
  W16(c->r[1]+0x00000022u,c->r[6]); // 80289990
  c->r[0]=R16(c->r[31]+0x00000032u); // 80289994
  W16(c->r[1]+0x00000024u,c->r[0]); // 80289998
  W16(c->r[1]+0x00000026u,c->r[6]); // 8028999C
  c->r[0]=R16(c->r[31]+0x00000022u); // 802899A0
  W16(c->r[1]+0x00000028u,c->r[0]); // 802899A4
  W16(c->r[1]+0x0000002Au,c->r[6]); // 802899A8
  c->r[0]=R16(c->r[31]+0x00000028u); // 802899AC
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 802899B0
  W16(c->r[1]+0x0000002Eu,c->r[6]); // 802899B4
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 802899B8
  W16(c->r[1]+0x00000030u,c->r[0]); // 802899BC
  W16(c->r[1]+0x00000032u,c->r[6]); // 802899C0
  c->r[0]=R16(c->r[31]+0x00000034u); // 802899C4
  W16(c->r[1]+0x00000034u,c->r[0]); // 802899C8
  W16(c->r[1]+0x00000036u,c->r[6]); // 802899CC
  c->lr=0x802899D4u; f_8028B394(c); // 802899D0
  c->r[3]=c->r[30]|c->r[30]; // 802899D4
  c->lr=0x802899DCu; f_80160C90(c); // 802899D8
L_802899DC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 802899DC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802899E0
  c->r[30]=R32(c->r[1]+0x00000038u); // 802899E4
  c->lr=c->r[0]; // 802899E8
  c->r[1]=c->r[1]+0x00000040u; // 802899EC
  return; // 802899F0
}

// SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl
void f_802899F4(Ctx* __restrict c) {
  trace_call(0x802899F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802899F4
  c->r[0]=c->lr; // 802899F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 802899FC
  c->r[11]=c->r[1]+0x00000040u; // 80289A00
  c->lr=0x80289A08u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80289A04
  c->r[26]=c->r[3]|c->r[3]; // 80289A08
  c->r[27]=c->r[4]|c->r[4]; // 80289A0C
  c->r[28]=c->r[5]|c->r[5]; // 80289A10
  c->r[29]=c->r[6]|c->r[6]; // 80289A14
  c->r[30]=c->r[7]|c->r[7]; // 80289A18
  c->r[31]=c->r[8]|c->r[8]; // 80289A1C
  c->lr=0x80289A24u; f_80160C68(c); // 80289A20
  c->r[0]=R32(c->r[26]+0x00000000u); // 80289A24
  c->r[25]=c->r[3]|c->r[3]; // 80289A28
  cmps(c,0,(int32_t)c->r[0],0); // 80289A2C
  if (!crb(c,2)) { goto L_80289A3C; } // 80289A30
  c->lr=0x80289A38u; f_80160C90(c); // 80289A34
  goto L_80289DB0; // 80289A38
L_80289A3C:;
  cmpu(c,0,c->r[29],c->r[31]); // 80289A3C
  if (!crb(c,1)) { goto L_80289B3C; } // 80289A40
  c->lr=0x80289A48u; f_80287884(c); // 80289A44
  c->lr=0x80289A4Cu; f_80287F64(c); // 80289A48
  cmps(c,0,(int32_t)c->r[3],0); // 80289A4C
  c->r[6]=R32(c->r[26]+0x00000014u); // 80289A50
  c->r[0]=c->r[3]|c->r[3]; // 80289A54
  c->r[27]=0u+0x00000000u; // 80289A58
  if (crb(c,2)) { goto L_80289A64; } // 80289A5C
  c->r[0]=c->r[3]+0x80000000u; // 80289A60
L_80289A64:;
  cmps(c,0,(int32_t)c->r[6],2); // 80289A64
  c->r[4]=0u+0x00000000u; // 80289A68
  if (crb(c,2)) { goto L_80289A94; } // 80289A6C
  if (!crb(c,0)) { goto L_80289A80; } // 80289A70
  cmps(c,0,(int32_t)c->r[6],1); // 80289A74
  if (!crb(c,0)) { goto L_80289A9C; } // 80289A78
  goto L_80289AA0; // 80289A7C
L_80289A80:;
  cmps(c,0,(int32_t)c->r[6],4); // 80289A80
  if (!crb(c,0)) { goto L_80289AA0; } // 80289A84
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80289A88
  c->r[4]=c->r[4]+0x00000002u; // 80289A8C
  goto L_80289AA0; // 80289A90
L_80289A94:;
  c->r[4]=c->r[0]|c->r[0]; // 80289A94
  goto L_80289AA0; // 80289A98
L_80289A9C:;
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80289A9C
L_80289AA0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80289AA0
  c->r[0]=c->r[3]|c->r[3]; // 80289AA4
  if (crb(c,2)) { goto L_80289AB0; } // 80289AA8
  c->r[0]=c->r[3]+0x80000000u; // 80289AAC
L_80289AB0:;
  cmps(c,0,(int32_t)c->r[6],2); // 80289AB0
  c->r[5]=0u+0x00000000u; // 80289AB4
  if (crb(c,2)) { goto L_80289AE0; } // 80289AB8
  if (!crb(c,0)) { goto L_80289ACC; } // 80289ABC
  cmps(c,0,(int32_t)c->r[6],1); // 80289AC0
  if (!crb(c,0)) { goto L_80289AE8; } // 80289AC4
  goto L_80289AEC; // 80289AC8
L_80289ACC:;
  cmps(c,0,(int32_t)c->r[6],4); // 80289ACC
  if (!crb(c,0)) { goto L_80289AEC; } // 80289AD0
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80289AD4
  c->r[5]=c->r[5]+0x00000002u; // 80289AD8
  goto L_80289AEC; // 80289ADC
L_80289AE0:;
  c->r[5]=c->r[0]|c->r[0]; // 80289AE0
  goto L_80289AEC; // 80289AE4
L_80289AE8:;
  c->r[5]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80289AE8
L_80289AEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80289AEC
  if (crb(c,2)) { goto L_80289AF8; } // 80289AF0
  c->r[3]=c->r[3]+0x80000000u; // 80289AF4
L_80289AF8:;
  cmps(c,0,(int32_t)c->r[6],2); // 80289AF8
  c->r[8]=0u+0x00000000u; // 80289AFC
  if (crb(c,2)) { goto L_80289B28; } // 80289B00
  if (!crb(c,0)) { goto L_80289B14; } // 80289B04
  cmps(c,0,(int32_t)c->r[6],1); // 80289B08
  if (!crb(c,0)) { goto L_80289B30; } // 80289B0C
  goto L_80289D28; // 80289B10
L_80289B14:;
  cmps(c,0,(int32_t)c->r[6],4); // 80289B14
  if (!crb(c,0)) { goto L_80289D28; } // 80289B18
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80289B1C
  c->r[8]=c->r[3]+0x00000003u; // 80289B20
  goto L_80289D28; // 80289B24
L_80289B28:;
  c->r[8]=c->r[3]+0x00000001u; // 80289B28
  goto L_80289D28; // 80289B2C
L_80289B30:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80289B30
  c->r[8]=c->r[3]+0x00000001u; // 80289B34
  goto L_80289D28; // 80289B38
L_80289B3C:;
  cmps(c,0,(int32_t)c->r[27],0); // 80289B3C
  if (crb(c,2)) { goto L_80289BCC; } // 80289B40
  cmps(c,0,(int32_t)c->r[28],0); // 80289B44
  c->r[0]=R32(c->r[26]+0x00000014u); // 80289B48
  c->r[3]=c->r[28]|c->r[28]; // 80289B4C
  if (crb(c,2)) { goto L_80289B58; } // 80289B50
  c->r[3]=c->r[28]+0x80000000u; // 80289B54
L_80289B58:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289B58
  c->r[5]=0u+0x00000000u; // 80289B5C
  if (crb(c,2)) { goto L_80289BB8; } // 80289B60
  if (!crb(c,0)) { goto L_80289B74; } // 80289B64
  cmps(c,0,(int32_t)c->r[0],1); // 80289B68
  if (!crb(c,0)) { goto L_80289BC0; } // 80289B6C
  goto L_80289C20; // 80289B70
L_80289B74:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289B74
  if (!crb(c,0)) { goto L_80289C20; } // 80289B78
  c->r[4]=0u+0x24920000u; // 80289B7C
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80289B80
  c->r[4]=c->r[4]+0x00004925u; // 80289B84
  c->r[5]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[30])>>32); // 80289B88
  c->r[4]=c->r[30]-c->r[5]; // 80289B8C
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80289B90
  c->r[5]=c->r[4]+c->r[5]; // 80289B94
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; // 80289B98
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)14); // 80289B9C
  c->r[4]=rotl(c->r[5],1)&0xFFFFFFF0u; // 80289BA0
  c->r[5]=c->r[30]-c->r[6]; // 80289BA4
  c->r[3]=c->r[5]+c->r[3]; // 80289BA8
  c->r[5]=c->r[3]+c->r[4]; // 80289BAC
  c->r[5]=c->r[5]+0x00000002u; // 80289BB0
  goto L_80289C20; // 80289BB4
L_80289BB8:;
  c->r[5]=c->r[3]+c->r[30]; // 80289BB8
  goto L_80289C20; // 80289BBC
L_80289BC0:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80289BC0
  c->r[5]=c->r[3]+c->r[30]; // 80289BC4
  goto L_80289C20; // 80289BC8
L_80289BCC:;
  c->lr=0x80289BD0u; f_80287884(c); // 80289BCC
  c->lr=0x80289BD4u; f_80287F64(c); // 80289BD0
  cmps(c,0,(int32_t)c->r[3],0); // 80289BD4
  c->r[0]=R32(c->r[26]+0x00000014u); // 80289BD8
  if (crb(c,2)) { goto L_80289BE4; } // 80289BDC
  c->r[3]=c->r[3]+0x80000000u; // 80289BE0
L_80289BE4:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289BE4
  c->r[5]=0u+0x00000000u; // 80289BE8
  if (crb(c,2)) { goto L_80289C14; } // 80289BEC
  if (!crb(c,0)) { goto L_80289C00; } // 80289BF0
  cmps(c,0,(int32_t)c->r[0],1); // 80289BF4
  if (!crb(c,0)) { goto L_80289C1C; } // 80289BF8
  goto L_80289C20; // 80289BFC
L_80289C00:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289C00
  if (!crb(c,0)) { goto L_80289C20; } // 80289C04
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80289C08
  c->r[5]=c->r[3]+0x00000002u; // 80289C0C
  goto L_80289C20; // 80289C10
L_80289C14:;
  c->r[5]=c->r[3]|c->r[3]; // 80289C14
  goto L_80289C20; // 80289C18
L_80289C1C:;
  c->r[5]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80289C1C
L_80289C20:;
  cmps(c,0,(int32_t)c->r[28],0); // 80289C20
  c->r[3]=c->r[28]|c->r[28]; // 80289C24
  if (crb(c,2)) { goto L_80289C30; } // 80289C28
  c->r[3]=c->r[28]+0x80000000u; // 80289C2C
L_80289C30:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289C30
  c->r[4]=0u+0x00000000u; // 80289C34
  if (crb(c,2)) { goto L_80289C90; } // 80289C38
  if (!crb(c,0)) { goto L_80289C4C; } // 80289C3C
  cmps(c,0,(int32_t)c->r[0],1); // 80289C40
  if (!crb(c,0)) { goto L_80289C98; } // 80289C44
  goto L_80289CA0; // 80289C48
L_80289C4C:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289C4C
  if (!crb(c,0)) { goto L_80289CA0; } // 80289C50
  c->r[4]=0u+0x24920000u; // 80289C54
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80289C58
  c->r[4]=c->r[4]+0x00004925u; // 80289C5C
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[29])>>32); // 80289C60
  c->r[4]=c->r[29]-c->r[6]; // 80289C64
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80289C68
  c->r[6]=c->r[4]+c->r[6]; // 80289C6C
  c->r[4]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80289C70
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)14); // 80289C74
  c->r[4]=rotl(c->r[6],1)&0xFFFFFFF0u; // 80289C78
  c->r[6]=c->r[29]-c->r[7]; // 80289C7C
  c->r[3]=c->r[6]+c->r[3]; // 80289C80
  c->r[4]=c->r[3]+c->r[4]; // 80289C84
  c->r[4]=c->r[4]+0x00000002u; // 80289C88
  goto L_80289CA0; // 80289C8C
L_80289C90:;
  c->r[4]=c->r[3]+c->r[29]; // 80289C90
  goto L_80289CA0; // 80289C94
L_80289C98:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80289C98
  c->r[4]=c->r[3]+c->r[29]; // 80289C9C
L_80289CA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 80289CA0
  if (crb(c,2)) { goto L_80289CAC; } // 80289CA4
  c->r[28]=c->r[28]+0x80000000u; // 80289CA8
L_80289CAC:;
  cmps(c,0,(int32_t)c->r[0],2); // 80289CAC
  c->r[8]=0u+0x00000000u; // 80289CB0
  if (crb(c,2)) { goto L_80289D10; } // 80289CB4
  if (!crb(c,0)) { goto L_80289CC8; } // 80289CB8
  cmps(c,0,(int32_t)c->r[0],1); // 80289CBC
  if (!crb(c,0)) { goto L_80289D1C; } // 80289CC0
  goto L_80289D28; // 80289CC4
L_80289CC8:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289CC8
  if (!crb(c,0)) { goto L_80289D28; } // 80289CCC
  c->r[3]=0u+0x24920000u; // 80289CD0
  c->r[8]=c->r[31]+0xFFFFFFFFu; // 80289CD4
  c->r[3]=c->r[3]+0x00004925u; // 80289CD8
  c->r[0]=rotl(c->r[28],1)&0xFFFFFFFEu; // 80289CDC
  c->r[6]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[8])>>32); // 80289CE0
  c->r[3]=c->r[8]-c->r[6]; // 80289CE4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80289CE8
  c->r[6]=c->r[3]+c->r[6]; // 80289CEC
  c->r[3]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80289CF0
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 80289CF4
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFF0u; // 80289CF8
  c->r[6]=c->r[8]-c->r[7]; // 80289CFC
  c->r[0]=c->r[6]+c->r[0]; // 80289D00
  c->r[8]=c->r[0]+c->r[3]; // 80289D04
  c->r[8]=c->r[8]+0x00000002u; // 80289D08
  goto L_80289D28; // 80289D0C
L_80289D10:;
  c->r[8]=c->r[28]+c->r[31]; // 80289D10
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 80289D14
  goto L_80289D28; // 80289D18
L_80289D1C:;
  c->r[0]=rotl(c->r[28],31)&0x7FFFFFFFu; // 80289D1C
  c->r[3]=c->r[31]+c->r[0]; // 80289D20
  c->r[8]=c->r[3]+0xFFFFFFFFu; // 80289D24
L_80289D28:;
  W16(c->r[1]+0x00000008u,c->r[27]); // 80289D28
  c->r[0]=R32(c->r[26]+0x00000014u); // 80289D2C
  cmps(c,0,(int32_t)c->r[0],2); // 80289D30
  if (crb(c,2)) { goto L_80289D58; } // 80289D34
  if (!crb(c,0)) { goto L_80289D48; } // 80289D38
  cmps(c,0,(int32_t)c->r[0],1); // 80289D3C
  if (!crb(c,0)) { goto L_80289D60; } // 80289D40
  goto L_80289D68; // 80289D44
L_80289D48:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289D48
  if (!crb(c,0)) { goto L_80289D68; } // 80289D4C
  c->r[7]=0u+0x00000000u; // 80289D50
  goto L_80289D6C; // 80289D54
L_80289D58:;
  c->r[7]=0u+0x00000019u; // 80289D58
  goto L_80289D6C; // 80289D5C
L_80289D60:;
  c->r[7]=0u+0x0000000Au; // 80289D60
  goto L_80289D6C; // 80289D64
L_80289D68:;
  c->r[7]=0u+0x00000000u; // 80289D68
L_80289D6C:;
  c->r[6]=rotl(c->r[5],16)&0x0000FFFFu; // 80289D6C
  c->r[3]=rotl(c->r[8],16)&0x0000FFFFu; // 80289D70
  c->r[0]=rotl(c->r[4],16)&0x0000FFFFu; // 80289D74
  W16(c->r[1]+0x0000000Au,c->r[7]); // 80289D78
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 80289D7C
  W16(c->r[1]+0x0000000Eu,c->r[5]); // 80289D80
  W16(c->r[1]+0x00000010u,c->r[3]); // 80289D84
  W16(c->r[1]+0x00000012u,c->r[8]); // 80289D88
  W16(c->r[1]+0x00000014u,c->r[0]); // 80289D8C
  W16(c->r[1]+0x00000016u,c->r[4]); // 80289D90
  c->r[3]=R32(c->r[26]+0x00000000u); // 80289D94
  cmps(c,0,(int32_t)c->r[3],0); // 80289D98
  if (crb(c,2)) { goto L_80289DA8; } // 80289D9C
  c->r[4]=c->r[1]+0x00000008u; // 80289DA0
  c->lr=0x80289DA8u; f_8017B97C(c); // 80289DA4
L_80289DA8:;
  c->r[3]=c->r[25]|c->r[25]; // 80289DA8
  c->lr=0x80289DB0u; f_80160C90(c); // 80289DAC
L_80289DB0:;
  c->r[11]=c->r[1]+0x00000040u; // 80289DB0
  c->lr=0x80289DB8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80289DB4
  c->r[0]=R32(c->r[1]+0x00000044u); // 80289DB8
  c->lr=c->r[0]; // 80289DBC
  c->r[1]=c->r[1]+0x00000040u; // 80289DC0
  return; // 80289DC4
}

// SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef
void f_80289DC8(Ctx* __restrict c) {
  trace_call(0x80289DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80289DC8
  c->r[0]=c->lr; // 80289DCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80289DD0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80289DD4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80289DD8
  c->f[31]=c->f[1]; // 80289DDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80289DE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80289DE4
  c->r[30]=c->r[4]|c->r[4]; // 80289DE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80289DEC
  c->r[29]=c->r[3]|c->r[3]; // 80289DF0
  c->lr=0x80289DF8u; f_80160C68(c); // 80289DF4
  c->r[0]=R32(c->r[29]+0x00000000u); // 80289DF8
  c->r[31]=c->r[3]|c->r[3]; // 80289DFC
  cmps(c,0,(int32_t)c->r[0],0); // 80289E00
  if (!crb(c,2)) { goto L_80289E10; } // 80289E04
  c->lr=0x80289E0Cu; f_80160C90(c); // 80289E08
  goto L_80289E84; // 80289E0C
L_80289E10:;
  cmps(c,0,(int32_t)c->r[30],5); // 80289E10
  if (!crb(c,2)) { goto L_80289E70; } // 80289E14
  c->r[3]=R32(c->r[29]+0x00000018u); // 80289E18
  c->r[0]=0u+0x43300000u; // 80289E1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80289E20
  c->r[0]=c->r[3]^0x80000000u; // 80289E24
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[3]=RF64(ea);} // 80289E28
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80289E2C
  {uint32_t ea=c->r[2]+0xFFFF9F68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80289E30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80289E34
  {uint32_t ea=c->r[2]+0xFFFF9F6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80289E38
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80289E3C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80289E40
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80289E44
  fcmp(c,0,c->f[1],c->f[0]); // 80289E48
  if (!crb(c,1)) { goto L_80289E58; } // 80289E4C
  c->r[30]=0u+0x00000002u; // 80289E50
  goto L_80289E70; // 80289E54
L_80289E58:;
  {uint32_t ea=c->r[2]+0xFFFF9F70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80289E58
  fcmp(c,0,c->f[1],c->f[0]); // 80289E5C
  if (!crb(c,1)) { goto L_80289E6C; } // 80289E60
  c->r[30]=0u+0x00000003u; // 80289E64
  goto L_80289E70; // 80289E68
L_80289E6C:;
  c->r[30]=0u+0x00000004u; // 80289E6C
L_80289E70:;
  c->r[3]=c->r[29]|c->r[29]; // 80289E70
  c->r[4]=c->r[30]|c->r[30]; // 80289E74
  c->lr=0x80289E7Cu; f_8028B60C(c); // 80289E78
  c->r[3]=c->r[31]|c->r[31]; // 80289E7C
  c->lr=0x80289E84u; f_80160C90(c); // 80289E80
L_80289E84:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80289E84
  c->r[0]=R32(c->r[1]+0x00000034u); // 80289E88
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80289E8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80289E90
  c->r[30]=R32(c->r[1]+0x00000018u); // 80289E94
  c->r[29]=R32(c->r[1]+0x00000014u); // 80289E98
  c->lr=c->r[0]; // 80289E9C
  c->r[1]=c->r[1]+0x00000030u; // 80289EA0
  return; // 80289EA4
}

// SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam
void f_80289EA8(Ctx* __restrict c) {
  trace_call(0x80289EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80289EA8
  c->r[0]=c->lr; // 80289EAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80289EB0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80289EB4
  W32(c->r[1]+0x00000038u,c->r[30]); // 80289EB8
  c->r[30]=c->r[4]|c->r[4]; // 80289EBC
  W32(c->r[1]+0x00000034u,c->r[29]); // 80289EC0
  c->r[29]=c->r[3]|c->r[3]; // 80289EC4
  c->lr=0x80289ECCu; f_80160C68(c); // 80289EC8
  c->r[0]=R32(c->r[29]+0x00000000u); // 80289ECC
  c->r[31]=c->r[3]|c->r[3]; // 80289ED0
  cmps(c,0,(int32_t)c->r[0],0); // 80289ED4
  if (!crb(c,2)) { goto L_80289EE4; } // 80289ED8
  c->lr=0x80289EE0u; f_80160C90(c); // 80289EDC
  goto L_80289FD8; // 80289EE0
L_80289EE4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80289EE4
  cmps(c,0,(int32_t)c->r[0],2); // 80289EE8
  if (crb(c,2)) { goto L_80289F68; } // 80289EEC
  if (!crb(c,0)) { goto L_80289F00; } // 80289EF0
  cmps(c,0,(int32_t)c->r[0],1); // 80289EF4
  if (!crb(c,0)) { goto L_80289F3C; } // 80289EF8
  goto L_80289F90; // 80289EFC
L_80289F00:;
  cmps(c,0,(int32_t)c->r[0],4); // 80289F00
  if (!crb(c,0)) { goto L_80289F90; } // 80289F04
  c->r[4]=c->r[30]|c->r[30]; // 80289F08
  c->r[3]=c->r[1]+0x00000008u; // 80289F0C
  c->r[5]=0u+0x00000020u; // 80289F10
  c->lr=0x80289F18u; f_80004338(c); // 80289F14
  c->r[5]=R16(c->r[30]+0x00000020u); // 80289F18
  c->r[4]=R16(c->r[30]+0x00000022u); // 80289F1C
  c->r[3]=R16(c->r[30]+0x00000024u); // 80289F20
  c->r[0]=R16(c->r[30]+0x00000026u); // 80289F24
  W16(c->r[1]+0x00000028u,c->r[5]); // 80289F28
  W16(c->r[1]+0x0000002Au,c->r[4]); // 80289F2C
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 80289F30
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 80289F34
  goto L_80289F90; // 80289F38
L_80289F3C:;
  c->r[3]=c->r[1]+0x00000008u; // 80289F3C
  c->r[4]=0u+0x00000000u; // 80289F40
  c->r[5]=0u+0x00000020u; // 80289F44
  c->lr=0x80289F4Cu; f_80004688(c); // 80289F48
  c->r[0]=0u+0x00000000u; // 80289F4C
  c->r[3]=0u+0x00000800u; // 80289F50
  W16(c->r[1]+0x00000028u,c->r[3]); // 80289F54
  W16(c->r[1]+0x0000002Au,c->r[0]); // 80289F58
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 80289F5C
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 80289F60
  goto L_80289F90; // 80289F64
L_80289F68:;
  c->r[3]=c->r[1]+0x00000008u; // 80289F68
  c->r[4]=0u+0x00000000u; // 80289F6C
  c->r[5]=0u+0x00000020u; // 80289F70
  c->lr=0x80289F78u; f_80004688(c); // 80289F74
  c->r[0]=0u+0x00000000u; // 80289F78
  c->r[3]=0u+0x00000100u; // 80289F7C
  W16(c->r[1]+0x00000028u,c->r[3]); // 80289F80
  W16(c->r[1]+0x0000002Au,c->r[0]); // 80289F84
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 80289F88
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 80289F8C
L_80289F90:;
  c->lr=0x80289F94u; f_80160C68(c); // 80289F90
  c->r[4]=R32(c->r[29]+0x00000000u); // 80289F94
  c->r[30]=c->r[3]|c->r[3]; // 80289F98
  cmps(c,0,(int32_t)c->r[4],0); // 80289F9C
  if (!crb(c,2)) { goto L_80289FAC; } // 80289FA0
  c->lr=0x80289FA8u; f_80160C90(c); // 80289FA4
  goto L_80289FD0; // 80289FA8
L_80289FAC:;
  c->r[3]=c->r[4]+0x000000A6u; // 80289FAC
  c->r[4]=c->r[1]+0x00000008u; // 80289FB0
  c->r[5]=0u+0x00000028u; // 80289FB4
  c->lr=0x80289FBCu; f_80004338(c); // 80289FB8
  c->r[0]=R32(c->r[29]+0x00000004u); // 80289FBC
  c->r[3]=c->r[30]|c->r[30]; // 80289FC0
  c->r[0]=c->r[0]|0x00008000u; // 80289FC4
  W32(c->r[29]+0x00000004u,c->r[0]); // 80289FC8
  c->lr=0x80289FD0u; f_80160C90(c); // 80289FCC
L_80289FD0:;
  c->r[3]=c->r[31]|c->r[31]; // 80289FD0
  c->lr=0x80289FD8u; f_80160C90(c); // 80289FD4
L_80289FD8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80289FD8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80289FDC
  c->r[30]=R32(c->r[1]+0x00000038u); // 80289FE0
  c->r[29]=R32(c->r[1]+0x00000034u); // 80289FE4
  c->lr=c->r[0]; // 80289FE8
  c->r[1]=c->r[1]+0x00000040u; // 80289FEC
  return; // 80289FF0
}

// IsNeedNextUpdate__Q44nw4r3snd6detail7AxVoiceCFRCQ54nw4r3snd6detail7AxVoice8MixParam
void f_80289FF4(Ctx* __restrict c) {
  trace_call(0x80289FF4u);
  c->r[5]=R16(c->r[3]+0x0000001Eu); // 80289FF4
  c->r[0]=R16(c->r[4]+0x00000000u); // 80289FF8
  cmpu(c,0,c->r[5],c->r[0]); // 80289FFC
  if (crb(c,2)) { goto L_8028A00C; } // 8028A000
  c->r[3]=0u+0x00000001u; // 8028A004
  return; // 8028A008
L_8028A00C:;
  c->r[5]=R16(c->r[3]+0x00000020u); // 8028A00C
  c->r[0]=R16(c->r[4]+0x00000002u); // 8028A010
  cmpu(c,0,c->r[5],c->r[0]); // 8028A014
  if (crb(c,2)) { goto L_8028A024; } // 8028A018
  c->r[3]=0u+0x00000001u; // 8028A01C
  return; // 8028A020
L_8028A024:;
  c->r[5]=R16(c->r[3]+0x00000022u); // 8028A024
  c->r[0]=R16(c->r[4]+0x00000004u); // 8028A028
  cmpu(c,0,c->r[5],c->r[0]); // 8028A02C
  if (crb(c,2)) { goto L_8028A03C; } // 8028A030
  c->r[3]=0u+0x00000001u; // 8028A034
  return; // 8028A038
L_8028A03C:;
  c->r[5]=R16(c->r[3]+0x00000024u); // 8028A03C
  c->r[0]=R16(c->r[4]+0x00000006u); // 8028A040
  cmpu(c,0,c->r[5],c->r[0]); // 8028A044
  if (crb(c,2)) { goto L_8028A054; } // 8028A048
  c->r[3]=0u+0x00000001u; // 8028A04C
  return; // 8028A050
L_8028A054:;
  c->r[5]=R16(c->r[3]+0x00000026u); // 8028A054
  c->r[0]=R16(c->r[4]+0x00000008u); // 8028A058
  cmpu(c,0,c->r[5],c->r[0]); // 8028A05C
  if (crb(c,2)) { goto L_8028A06C; } // 8028A060
  c->r[3]=0u+0x00000001u; // 8028A064
  return; // 8028A068
L_8028A06C:;
  c->r[5]=R16(c->r[3]+0x00000028u); // 8028A06C
  c->r[0]=R16(c->r[4]+0x0000000Au); // 8028A070
  cmpu(c,0,c->r[5],c->r[0]); // 8028A074
  if (crb(c,2)) { goto L_8028A084; } // 8028A078
  c->r[3]=0u+0x00000001u; // 8028A07C
  return; // 8028A080
L_8028A084:;
  c->r[5]=R16(c->r[3]+0x0000002Au); // 8028A084
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8028A088
  cmpu(c,0,c->r[5],c->r[0]); // 8028A08C
  if (crb(c,2)) { goto L_8028A09C; } // 8028A090
  c->r[3]=0u+0x00000001u; // 8028A094
  return; // 8028A098
L_8028A09C:;
  c->r[5]=R16(c->r[3]+0x0000002Cu); // 8028A09C
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 8028A0A0
  cmpu(c,0,c->r[5],c->r[0]); // 8028A0A4
  if (crb(c,2)) { goto L_8028A0B4; } // 8028A0A8
  c->r[3]=0u+0x00000001u; // 8028A0AC
  return; // 8028A0B0
L_8028A0B4:;
  c->r[5]=R16(c->r[3]+0x0000002Eu); // 8028A0B4
  c->r[0]=R16(c->r[4]+0x00000010u); // 8028A0B8
  cmpu(c,0,c->r[5],c->r[0]); // 8028A0BC
  if (crb(c,2)) { goto L_8028A0CC; } // 8028A0C0
  c->r[3]=0u+0x00000001u; // 8028A0C4
  return; // 8028A0C8
L_8028A0CC:;
  c->r[5]=R16(c->r[3]+0x00000030u); // 8028A0CC
  c->r[0]=R16(c->r[4]+0x00000012u); // 8028A0D0
  cmpu(c,0,c->r[5],c->r[0]); // 8028A0D4
  if (crb(c,2)) { goto L_8028A0E4; } // 8028A0D8
  c->r[3]=0u+0x00000001u; // 8028A0DC
  return; // 8028A0E0
L_8028A0E4:;
  c->r[5]=R16(c->r[3]+0x00000032u); // 8028A0E4
  c->r[0]=R16(c->r[4]+0x00000014u); // 8028A0E8
  cmpu(c,0,c->r[5],c->r[0]); // 8028A0EC
  if (crb(c,2)) { goto L_8028A0FC; } // 8028A0F0
  c->r[3]=0u+0x00000001u; // 8028A0F4
  return; // 8028A0F8
L_8028A0FC:;
  c->r[5]=R16(c->r[3]+0x00000034u); // 8028A0FC
  c->r[0]=R16(c->r[4]+0x00000016u); // 8028A100
  c->r[3]=c->r[0]-c->r[5]; // 8028A104
  c->r[0]=c->r[5]-c->r[0]; // 8028A108
  c->r[0]=c->r[3]|c->r[0]; // 8028A10C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A110
  return; // 8028A114
}

// SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam
void f_8028A118(Ctx* __restrict c) {
  trace_call(0x8028A118u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028A118
  c->r[0]=c->lr; // 8028A11C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028A120
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028A124
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028A128
  c->r[30]=c->r[4]|c->r[4]; // 8028A12C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028A130
  c->r[29]=c->r[3]|c->r[3]; // 8028A134
  c->lr=0x8028A13Cu; f_80160C68(c); // 8028A138
  c->r[0]=R32(c->r[29]+0x00000000u); // 8028A13C
  c->r[31]=c->r[3]|c->r[3]; // 8028A140
  cmps(c,0,(int32_t)c->r[0],0); // 8028A144
  if (!crb(c,2)) { goto L_8028A154; } // 8028A148
  c->lr=0x8028A150u; f_80160C90(c); // 8028A14C
  goto L_8028A1D4; // 8028A150
L_8028A154:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 8028A154
  cmps(c,0,(int32_t)c->r[0],3); // 8028A158
  if (!crb(c,2)) { goto L_8028A17C; } // 8028A15C
  c->r[4]=R16(c->r[30]+0x00000000u); // 8028A160
  c->r[3]=R16(c->r[30]+0x00000002u); // 8028A164
  c->r[0]=R16(c->r[30]+0x00000004u); // 8028A168
  W16(c->r[1]+0x00000008u,c->r[4]); // 8028A16C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 8028A170
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 8028A174
  goto L_8028A18C; // 8028A178
L_8028A17C:;
  c->r[0]=0u+0x00000000u; // 8028A17C
  W16(c->r[1]+0x00000008u,c->r[0]); // 8028A180
  W16(c->r[1]+0x0000000Au,c->r[0]); // 8028A184
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 8028A188
L_8028A18C:;
  c->lr=0x8028A190u; f_80160C68(c); // 8028A18C
  c->r[4]=R32(c->r[29]+0x00000000u); // 8028A190
  c->r[30]=c->r[3]|c->r[3]; // 8028A194
  cmps(c,0,(int32_t)c->r[4],0); // 8028A198
  if (!crb(c,2)) { goto L_8028A1A8; } // 8028A19C
  c->lr=0x8028A1A4u; f_80160C90(c); // 8028A1A0
  goto L_8028A1CC; // 8028A1A4
L_8028A1A8:;
  c->r[3]=c->r[4]+0x000000DCu; // 8028A1A8
  c->r[4]=c->r[1]+0x00000008u; // 8028A1AC
  c->r[5]=0u+0x00000006u; // 8028A1B0
  c->lr=0x8028A1B8u; f_80004338(c); // 8028A1B4
  c->r[0]=R32(c->r[29]+0x00000004u); // 8028A1B8
  c->r[3]=c->r[30]|c->r[30]; // 8028A1BC
  c->r[0]=c->r[0]|0x00040000u; // 8028A1C0
  W32(c->r[29]+0x00000004u,c->r[0]); // 8028A1C4
  c->lr=0x8028A1CCu; f_80160C90(c); // 8028A1C8
L_8028A1CC:;
  c->r[3]=c->r[31]|c->r[31]; // 8028A1CC
  c->lr=0x8028A1D4u; f_80160C90(c); // 8028A1D0
L_8028A1D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028A1D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028A1D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028A1DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028A1E0
  c->lr=c->r[0]; // 8028A1E4
  c->r[1]=c->r[1]+0x00000020u; // 8028A1E8
  return; // 8028A1EC
}

// SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam
void f_8028A1F0(Ctx* __restrict c) {
  trace_call(0x8028A1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028A1F0
  c->r[0]=c->lr; // 8028A1F4
  W32(c->r[1]+0x00000084u,c->r[0]); // 8028A1F8
  c->r[11]=c->r[1]+0x00000080u; // 8028A1FC
  c->lr=0x8028A204u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028A200
  c->r[17]=c->r[3]|c->r[3]; // 8028A204
  c->r[18]=c->r[4]|c->r[4]; // 8028A208
  c->lr=0x8028A210u; f_80160C68(c); // 8028A20C
  c->r[4]=R32(c->r[17]+0x00000000u); // 8028A210
  c->r[16]=c->r[3]|c->r[3]; // 8028A214
  cmps(c,1,(int32_t)c->r[4],0); // 8028A218
  if (!crb(c,6)) { goto L_8028A22C; } // 8028A21C
  c->lr=0x8028A224u; f_80160C90(c); // 8028A220
  c->r[3]=0u+0x00000000u; // 8028A224
  goto L_8028A7FC; // 8028A228
L_8028A22C:;
  c->r[0]=R8(c->r[17]+0x0000001Cu); // 8028A22C
  cmps(c,0,(int32_t)c->r[0],0); // 8028A230
  if (!crb(c,2)) { goto L_8028A258; } // 8028A234
  c->r[3]=0u+0x00000000u; // 8028A238
  if (crb(c,6)) { goto L_8028A250; } // 8028A23C
  c->r[0]=R16(c->r[4]+0x00000038u); // 8028A240
  cmpu(c,0,c->r[0],0x00000001u); // 8028A244
  if (!crb(c,2)) { goto L_8028A250; } // 8028A248
  c->r[3]=0u+0x00000001u; // 8028A24C
L_8028A250:;
  cmps(c,0,(int32_t)c->r[3],0); // 8028A250
  if (!crb(c,2)) { goto L_8028A2C0; } // 8028A254
L_8028A258:;
  c->r[20]=R16(c->r[18]+0x00000000u); // 8028A258
  c->r[0]=0u+0x00000000u; // 8028A25C
  c->r[19]=R16(c->r[18]+0x00000002u); // 8028A260
  c->r[12]=R16(c->r[18]+0x00000004u); // 8028A264
  c->r[11]=R16(c->r[18]+0x00000006u); // 8028A268
  c->r[10]=R16(c->r[18]+0x00000008u); // 8028A26C
  c->r[9]=R16(c->r[18]+0x0000000Au); // 8028A270
  c->r[8]=R16(c->r[18]+0x0000000Cu); // 8028A274
  c->r[7]=R16(c->r[18]+0x0000000Eu); // 8028A278
  c->r[6]=R16(c->r[18]+0x00000010u); // 8028A27C
  c->r[5]=R16(c->r[18]+0x00000012u); // 8028A280
  c->r[4]=R16(c->r[18]+0x00000014u); // 8028A284
  c->r[3]=R16(c->r[18]+0x00000016u); // 8028A288
  W16(c->r[17]+0x0000001Eu,c->r[20]); // 8028A28C
  W16(c->r[17]+0x00000020u,c->r[19]); // 8028A290
  W16(c->r[17]+0x00000022u,c->r[12]); // 8028A294
  W16(c->r[17]+0x00000024u,c->r[11]); // 8028A298
  W16(c->r[17]+0x00000026u,c->r[10]); // 8028A29C
  W16(c->r[17]+0x00000028u,c->r[9]); // 8028A2A0
  W16(c->r[17]+0x0000002Au,c->r[8]); // 8028A2A4
  W16(c->r[17]+0x0000002Cu,c->r[7]); // 8028A2A8
  W16(c->r[17]+0x0000002Eu,c->r[6]); // 8028A2AC
  W16(c->r[17]+0x00000030u,c->r[5]); // 8028A2B0
  W16(c->r[17]+0x00000032u,c->r[4]); // 8028A2B4
  W16(c->r[17]+0x00000034u,c->r[3]); // 8028A2B8
  W8(c->r[17]+0x0000001Cu,c->r[0]); // 8028A2BC
L_8028A2C0:;
  c->r[3]=c->r[17]|c->r[17]; // 8028A2C0
  c->r[4]=c->r[18]|c->r[18]; // 8028A2C4
  c->lr=0x8028A2CCu; f_80289FF4(c); // 8028A2C8
  c->r[0]=R16(c->r[17]+0x0000001Eu); // 8028A2CC
  c->r[19]=c->r[3]|c->r[3]; // 8028A2D0
  c->r[4]=R16(c->r[18]+0x00000000u); // 8028A2D4
  W16(c->r[1]+0x00000008u,c->r[0]); // 8028A2D8
  c->r[0]=R16(c->r[17]+0x00000020u); // 8028A2DC
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 8028A2E0
  c->r[0]=R16(c->r[17]+0x00000022u); // 8028A2E4
  W16(c->r[1]+0x00000028u,c->r[0]); // 8028A2E8
  c->r[0]=R16(c->r[17]+0x00000024u); // 8028A2EC
  W16(c->r[1]+0x00000010u,c->r[0]); // 8028A2F0
  c->r[0]=R16(c->r[17]+0x00000026u); // 8028A2F4
  W16(c->r[1]+0x00000014u,c->r[0]); // 8028A2F8
  c->r[0]=R16(c->r[17]+0x00000028u); // 8028A2FC
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 8028A300
  c->r[0]=R16(c->r[17]+0x0000002Au); // 8028A304
  W16(c->r[1]+0x00000018u,c->r[0]); // 8028A308
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 8028A30C
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 8028A310
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 8028A314
  W16(c->r[1]+0x00000030u,c->r[0]); // 8028A318
  c->r[0]=R16(c->r[17]+0x00000030u); // 8028A31C
  W16(c->r[1]+0x00000020u,c->r[0]); // 8028A320
  c->r[0]=R16(c->r[17]+0x00000032u); // 8028A324
  W16(c->r[1]+0x00000024u,c->r[0]); // 8028A328
  c->r[0]=R16(c->r[17]+0x00000034u); // 8028A32C
  W16(c->r[1]+0x00000034u,c->r[0]); // 8028A330
  c->r[0]=R16(c->r[17]+0x0000001Eu); // 8028A334
  cmpu(c,0,c->r[0],c->r[4]); // 8028A338
  if (!crb(c,2)) { goto L_8028A348; } // 8028A33C
  c->r[31]=0u+0x00000000u; // 8028A340
  goto L_8028A364; // 8028A344
L_8028A348:;
  c->r[3]=0u+0x2AAB0000u; // 8028A348
  c->r[0]=c->r[4]-c->r[0]; // 8028A34C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A350
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A354
  c->r[0]=sraw(c,c->r[0],4); // 8028A358
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A35C
  c->r[31]=c->r[0]+c->r[3]; // 8028A360
L_8028A364:;
  c->r[4]=R16(c->r[18]+0x00000002u); // 8028A364
  c->r[0]=R16(c->r[17]+0x00000020u); // 8028A368
  cmpu(c,0,c->r[0],c->r[4]); // 8028A36C
  if (!crb(c,2)) { goto L_8028A37C; } // 8028A370
  c->r[30]=0u+0x00000000u; // 8028A374
  goto L_8028A398; // 8028A378
L_8028A37C:;
  c->r[3]=0u+0x2AAB0000u; // 8028A37C
  c->r[0]=c->r[4]-c->r[0]; // 8028A380
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A384
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A388
  c->r[0]=sraw(c,c->r[0],4); // 8028A38C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A390
  c->r[30]=c->r[0]+c->r[3]; // 8028A394
L_8028A398:;
  c->r[4]=R16(c->r[18]+0x00000004u); // 8028A398
  c->r[0]=R16(c->r[17]+0x00000022u); // 8028A39C
  cmpu(c,0,c->r[0],c->r[4]); // 8028A3A0
  if (!crb(c,2)) { goto L_8028A3B0; } // 8028A3A4
  c->r[29]=0u+0x00000000u; // 8028A3A8
  goto L_8028A3CC; // 8028A3AC
L_8028A3B0:;
  c->r[3]=0u+0x2AAB0000u; // 8028A3B0
  c->r[0]=c->r[4]-c->r[0]; // 8028A3B4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A3B8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A3BC
  c->r[0]=sraw(c,c->r[0],4); // 8028A3C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A3C4
  c->r[29]=c->r[0]+c->r[3]; // 8028A3C8
L_8028A3CC:;
  c->r[4]=R16(c->r[18]+0x00000006u); // 8028A3CC
  c->r[0]=R16(c->r[17]+0x00000024u); // 8028A3D0
  cmpu(c,0,c->r[0],c->r[4]); // 8028A3D4
  if (!crb(c,2)) { goto L_8028A3E4; } // 8028A3D8
  c->r[28]=0u+0x00000000u; // 8028A3DC
  goto L_8028A400; // 8028A3E0
L_8028A3E4:;
  c->r[3]=0u+0x2AAB0000u; // 8028A3E4
  c->r[0]=c->r[4]-c->r[0]; // 8028A3E8
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A3EC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A3F0
  c->r[0]=sraw(c,c->r[0],4); // 8028A3F4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A3F8
  c->r[28]=c->r[0]+c->r[3]; // 8028A3FC
L_8028A400:;
  c->r[4]=R16(c->r[18]+0x00000008u); // 8028A400
  c->r[0]=R16(c->r[17]+0x00000026u); // 8028A404
  cmpu(c,0,c->r[0],c->r[4]); // 8028A408
  if (!crb(c,2)) { goto L_8028A418; } // 8028A40C
  c->r[27]=0u+0x00000000u; // 8028A410
  goto L_8028A434; // 8028A414
L_8028A418:;
  c->r[3]=0u+0x2AAB0000u; // 8028A418
  c->r[0]=c->r[4]-c->r[0]; // 8028A41C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A420
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A424
  c->r[0]=sraw(c,c->r[0],4); // 8028A428
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A42C
  c->r[27]=c->r[0]+c->r[3]; // 8028A430
L_8028A434:;
  c->r[4]=R16(c->r[18]+0x0000000Au); // 8028A434
  c->r[0]=R16(c->r[17]+0x00000028u); // 8028A438
  cmpu(c,0,c->r[0],c->r[4]); // 8028A43C
  if (!crb(c,2)) { goto L_8028A44C; } // 8028A440
  c->r[26]=0u+0x00000000u; // 8028A444
  goto L_8028A468; // 8028A448
L_8028A44C:;
  c->r[3]=0u+0x2AAB0000u; // 8028A44C
  c->r[0]=c->r[4]-c->r[0]; // 8028A450
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A454
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A458
  c->r[0]=sraw(c,c->r[0],4); // 8028A45C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A460
  c->r[26]=c->r[0]+c->r[3]; // 8028A464
L_8028A468:;
  c->r[4]=R16(c->r[18]+0x0000000Cu); // 8028A468
  c->r[0]=R16(c->r[17]+0x0000002Au); // 8028A46C
  cmpu(c,0,c->r[0],c->r[4]); // 8028A470
  if (!crb(c,2)) { goto L_8028A480; } // 8028A474
  c->r[25]=0u+0x00000000u; // 8028A478
  goto L_8028A49C; // 8028A47C
L_8028A480:;
  c->r[3]=0u+0x2AAB0000u; // 8028A480
  c->r[0]=c->r[4]-c->r[0]; // 8028A484
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A488
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A48C
  c->r[0]=sraw(c,c->r[0],4); // 8028A490
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A494
  c->r[25]=c->r[0]+c->r[3]; // 8028A498
L_8028A49C:;
  c->r[4]=R16(c->r[18]+0x0000000Eu); // 8028A49C
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 8028A4A0
  cmpu(c,0,c->r[0],c->r[4]); // 8028A4A4
  if (!crb(c,2)) { goto L_8028A4B4; } // 8028A4A8
  c->r[24]=0u+0x00000000u; // 8028A4AC
  goto L_8028A4D0; // 8028A4B0
L_8028A4B4:;
  c->r[3]=0u+0x2AAB0000u; // 8028A4B4
  c->r[0]=c->r[4]-c->r[0]; // 8028A4B8
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A4BC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A4C0
  c->r[0]=sraw(c,c->r[0],4); // 8028A4C4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A4C8
  c->r[24]=c->r[0]+c->r[3]; // 8028A4CC
L_8028A4D0:;
  c->r[4]=R16(c->r[18]+0x00000010u); // 8028A4D0
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 8028A4D4
  cmpu(c,0,c->r[0],c->r[4]); // 8028A4D8
  if (!crb(c,2)) { goto L_8028A4E8; } // 8028A4DC
  c->r[23]=0u+0x00000000u; // 8028A4E0
  goto L_8028A504; // 8028A4E4
L_8028A4E8:;
  c->r[3]=0u+0x2AAB0000u; // 8028A4E8
  c->r[0]=c->r[4]-c->r[0]; // 8028A4EC
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A4F0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A4F4
  c->r[0]=sraw(c,c->r[0],4); // 8028A4F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A4FC
  c->r[23]=c->r[0]+c->r[3]; // 8028A500
L_8028A504:;
  c->r[4]=R16(c->r[18]+0x00000012u); // 8028A504
  c->r[0]=R16(c->r[17]+0x00000030u); // 8028A508
  cmpu(c,0,c->r[0],c->r[4]); // 8028A50C
  if (!crb(c,2)) { goto L_8028A51C; } // 8028A510
  c->r[22]=0u+0x00000000u; // 8028A514
  goto L_8028A538; // 8028A518
L_8028A51C:;
  c->r[3]=0u+0x2AAB0000u; // 8028A51C
  c->r[0]=c->r[4]-c->r[0]; // 8028A520
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A524
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A528
  c->r[0]=sraw(c,c->r[0],4); // 8028A52C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A530
  c->r[22]=c->r[0]+c->r[3]; // 8028A534
L_8028A538:;
  c->r[4]=R16(c->r[18]+0x00000014u); // 8028A538
  c->r[0]=R16(c->r[17]+0x00000032u); // 8028A53C
  cmpu(c,0,c->r[0],c->r[4]); // 8028A540
  if (!crb(c,2)) { goto L_8028A550; } // 8028A544
  c->r[21]=0u+0x00000000u; // 8028A548
  goto L_8028A56C; // 8028A54C
L_8028A550:;
  c->r[3]=0u+0x2AAB0000u; // 8028A550
  c->r[0]=c->r[4]-c->r[0]; // 8028A554
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A558
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A55C
  c->r[0]=sraw(c,c->r[0],4); // 8028A560
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A564
  c->r[21]=c->r[0]+c->r[3]; // 8028A568
L_8028A56C:;
  c->r[4]=R16(c->r[18]+0x00000016u); // 8028A56C
  c->r[0]=R16(c->r[17]+0x00000034u); // 8028A570
  cmpu(c,0,c->r[0],c->r[4]); // 8028A574
  if (!crb(c,2)) { goto L_8028A584; } // 8028A578
  c->r[20]=0u+0x00000000u; // 8028A57C
  goto L_8028A5A0; // 8028A580
L_8028A584:;
  c->r[3]=0u+0x2AAB0000u; // 8028A584
  c->r[0]=c->r[4]-c->r[0]; // 8028A588
  c->r[3]=c->r[3]+0xFFFFAAABu; // 8028A58C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8028A590
  c->r[0]=sraw(c,c->r[0],4); // 8028A594
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028A598
  c->r[20]=c->r[0]+c->r[3]; // 8028A59C
L_8028A5A0:;
  W16(c->r[1]+0x0000000Au,c->r[31]); // 8028A5A0
  c->r[3]=c->r[17]|c->r[17]; // 8028A5A4
  c->r[4]=c->r[1]+0x00000008u; // 8028A5A8
  c->r[5]=0u+0x00000000u; // 8028A5AC
  W16(c->r[1]+0x0000000Eu,c->r[30]); // 8028A5B0
  W16(c->r[1]+0x0000002Au,c->r[29]); // 8028A5B4
  W16(c->r[1]+0x00000012u,c->r[28]); // 8028A5B8
  W16(c->r[1]+0x00000016u,c->r[27]); // 8028A5BC
  W16(c->r[1]+0x0000002Eu,c->r[26]); // 8028A5C0
  W16(c->r[1]+0x0000001Au,c->r[25]); // 8028A5C4
  W16(c->r[1]+0x0000001Eu,c->r[24]); // 8028A5C8
  W16(c->r[1]+0x00000032u,c->r[23]); // 8028A5CC
  W16(c->r[1]+0x00000022u,c->r[22]); // 8028A5D0
  W16(c->r[1]+0x00000026u,c->r[21]); // 8028A5D4
  W16(c->r[1]+0x00000036u,c->r[20]); // 8028A5D8
  c->lr=0x8028A5E0u; f_8028B394(c); // 8028A5DC
  c->r[0]=R16(c->r[18]+0x00000000u); // 8028A5E0
  cmps(c,0,(int32_t)c->r[0],0); // 8028A5E4
  if (crb(c,2)) { goto L_8028A5F4; } // 8028A5E8
  cmps(c,0,(int32_t)c->r[31],0); // 8028A5EC
  if (!crb(c,2)) { goto L_8028A5FC; } // 8028A5F0
L_8028A5F4:;
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 8028A5F4
  goto L_8028A60C; // 8028A5F8
L_8028A5FC:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)96); // 8028A5FC
  c->r[3]=R16(c->r[17]+0x0000001Eu); // 8028A600
  c->r[0]=c->r[3]+c->r[0]; // 8028A604
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 8028A608
L_8028A60C:;
  c->r[0]=R16(c->r[18]+0x00000002u); // 8028A60C
  cmps(c,0,(int32_t)c->r[0],0); // 8028A610
  if (crb(c,2)) { goto L_8028A620; } // 8028A614
  cmps(c,0,(int32_t)c->r[30],0); // 8028A618
  if (!crb(c,2)) { goto L_8028A628; } // 8028A61C
L_8028A620:;
  W16(c->r[17]+0x00000020u,c->r[0]); // 8028A620
  goto L_8028A638; // 8028A624
L_8028A628:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 8028A628
  c->r[3]=R16(c->r[17]+0x00000020u); // 8028A62C
  c->r[0]=c->r[3]+c->r[0]; // 8028A630
  W16(c->r[17]+0x00000020u,c->r[0]); // 8028A634
L_8028A638:;
  c->r[0]=R16(c->r[18]+0x00000004u); // 8028A638
  cmps(c,0,(int32_t)c->r[0],0); // 8028A63C
  if (crb(c,2)) { goto L_8028A64C; } // 8028A640
  cmps(c,0,(int32_t)c->r[29],0); // 8028A644
  if (!crb(c,2)) { goto L_8028A654; } // 8028A648
L_8028A64C:;
  W16(c->r[17]+0x00000022u,c->r[0]); // 8028A64C
  goto L_8028A664; // 8028A650
L_8028A654:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)96); // 8028A654
  c->r[3]=R16(c->r[17]+0x00000022u); // 8028A658
  c->r[0]=c->r[3]+c->r[0]; // 8028A65C
  W16(c->r[17]+0x00000022u,c->r[0]); // 8028A660
L_8028A664:;
  c->r[0]=R16(c->r[18]+0x00000006u); // 8028A664
  cmps(c,0,(int32_t)c->r[0],0); // 8028A668
  if (crb(c,2)) { goto L_8028A678; } // 8028A66C
  cmps(c,0,(int32_t)c->r[28],0); // 8028A670
  if (!crb(c,2)) { goto L_8028A680; } // 8028A674
L_8028A678:;
  W16(c->r[17]+0x00000024u,c->r[0]); // 8028A678
  goto L_8028A690; // 8028A67C
L_8028A680:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)96); // 8028A680
  c->r[3]=R16(c->r[17]+0x00000024u); // 8028A684
  c->r[0]=c->r[3]+c->r[0]; // 8028A688
  W16(c->r[17]+0x00000024u,c->r[0]); // 8028A68C
L_8028A690:;
  c->r[0]=R16(c->r[18]+0x00000008u); // 8028A690
  cmps(c,0,(int32_t)c->r[0],0); // 8028A694
  if (crb(c,2)) { goto L_8028A6A4; } // 8028A698
  cmps(c,0,(int32_t)c->r[27],0); // 8028A69C
  if (!crb(c,2)) { goto L_8028A6AC; } // 8028A6A0
L_8028A6A4:;
  W16(c->r[17]+0x00000026u,c->r[0]); // 8028A6A4
  goto L_8028A6BC; // 8028A6A8
L_8028A6AC:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)96); // 8028A6AC
  c->r[3]=R16(c->r[17]+0x00000026u); // 8028A6B0
  c->r[0]=c->r[3]+c->r[0]; // 8028A6B4
  W16(c->r[17]+0x00000026u,c->r[0]); // 8028A6B8
L_8028A6BC:;
  c->r[0]=R16(c->r[18]+0x0000000Au); // 8028A6BC
  cmps(c,0,(int32_t)c->r[0],0); // 8028A6C0
  if (crb(c,2)) { goto L_8028A6D0; } // 8028A6C4
  cmps(c,0,(int32_t)c->r[26],0); // 8028A6C8
  if (!crb(c,2)) { goto L_8028A6D8; } // 8028A6CC
L_8028A6D0:;
  W16(c->r[17]+0x00000028u,c->r[0]); // 8028A6D0
  goto L_8028A6E8; // 8028A6D4
L_8028A6D8:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)96); // 8028A6D8
  c->r[3]=R16(c->r[17]+0x00000028u); // 8028A6DC
  c->r[0]=c->r[3]+c->r[0]; // 8028A6E0
  W16(c->r[17]+0x00000028u,c->r[0]); // 8028A6E4
L_8028A6E8:;
  c->r[0]=R16(c->r[18]+0x0000000Cu); // 8028A6E8
  cmps(c,0,(int32_t)c->r[0],0); // 8028A6EC
  if (crb(c,2)) { goto L_8028A6FC; } // 8028A6F0
  cmps(c,0,(int32_t)c->r[25],0); // 8028A6F4
  if (!crb(c,2)) { goto L_8028A704; } // 8028A6F8
L_8028A6FC:;
  W16(c->r[17]+0x0000002Au,c->r[0]); // 8028A6FC
  goto L_8028A714; // 8028A700
L_8028A704:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)96); // 8028A704
  c->r[3]=R16(c->r[17]+0x0000002Au); // 8028A708
  c->r[0]=c->r[3]+c->r[0]; // 8028A70C
  W16(c->r[17]+0x0000002Au,c->r[0]); // 8028A710
L_8028A714:;
  c->r[0]=R16(c->r[18]+0x0000000Eu); // 8028A714
  cmps(c,0,(int32_t)c->r[0],0); // 8028A718
  if (crb(c,2)) { goto L_8028A728; } // 8028A71C
  cmps(c,0,(int32_t)c->r[24],0); // 8028A720
  if (!crb(c,2)) { goto L_8028A730; } // 8028A724
L_8028A728:;
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 8028A728
  goto L_8028A740; // 8028A72C
L_8028A730:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)96); // 8028A730
  c->r[3]=R16(c->r[17]+0x0000002Cu); // 8028A734
  c->r[0]=c->r[3]+c->r[0]; // 8028A738
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 8028A73C
L_8028A740:;
  c->r[0]=R16(c->r[18]+0x00000010u); // 8028A740
  cmps(c,0,(int32_t)c->r[0],0); // 8028A744
  if (crb(c,2)) { goto L_8028A754; } // 8028A748
  cmps(c,0,(int32_t)c->r[23],0); // 8028A74C
  if (!crb(c,2)) { goto L_8028A75C; } // 8028A750
L_8028A754:;
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 8028A754
  goto L_8028A76C; // 8028A758
L_8028A75C:;
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)96); // 8028A75C
  c->r[3]=R16(c->r[17]+0x0000002Eu); // 8028A760
  c->r[0]=c->r[3]+c->r[0]; // 8028A764
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 8028A768
L_8028A76C:;
  c->r[0]=R16(c->r[18]+0x00000012u); // 8028A76C
  cmps(c,0,(int32_t)c->r[0],0); // 8028A770
  if (crb(c,2)) { goto L_8028A780; } // 8028A774
  cmps(c,0,(int32_t)c->r[22],0); // 8028A778
  if (!crb(c,2)) { goto L_8028A788; } // 8028A77C
L_8028A780:;
  W16(c->r[17]+0x00000030u,c->r[0]); // 8028A780
  goto L_8028A798; // 8028A784
L_8028A788:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)96); // 8028A788
  c->r[3]=R16(c->r[17]+0x00000030u); // 8028A78C
  c->r[0]=c->r[3]+c->r[0]; // 8028A790
  W16(c->r[17]+0x00000030u,c->r[0]); // 8028A794
L_8028A798:;
  c->r[0]=R16(c->r[18]+0x00000014u); // 8028A798
  cmps(c,0,(int32_t)c->r[0],0); // 8028A79C
  if (crb(c,2)) { goto L_8028A7AC; } // 8028A7A0
  cmps(c,0,(int32_t)c->r[21],0); // 8028A7A4
  if (!crb(c,2)) { goto L_8028A7B4; } // 8028A7A8
L_8028A7AC:;
  W16(c->r[17]+0x00000032u,c->r[0]); // 8028A7AC
  goto L_8028A7C4; // 8028A7B0
L_8028A7B4:;
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)96); // 8028A7B4
  c->r[3]=R16(c->r[17]+0x00000032u); // 8028A7B8
  c->r[0]=c->r[3]+c->r[0]; // 8028A7BC
  W16(c->r[17]+0x00000032u,c->r[0]); // 8028A7C0
L_8028A7C4:;
  c->r[0]=R16(c->r[18]+0x00000016u); // 8028A7C4
  cmps(c,0,(int32_t)c->r[0],0); // 8028A7C8
  if (crb(c,2)) { goto L_8028A7D8; } // 8028A7CC
  cmps(c,0,(int32_t)c->r[20],0); // 8028A7D0
  if (!crb(c,2)) { goto L_8028A7E0; } // 8028A7D4
L_8028A7D8:;
  W16(c->r[17]+0x00000034u,c->r[0]); // 8028A7D8
  goto L_8028A7F0; // 8028A7DC
L_8028A7E0:;
  c->r[0]=(uint32_t)((int32_t)c->r[20]*(int32_t)96); // 8028A7E0
  c->r[3]=R16(c->r[17]+0x00000034u); // 8028A7E4
  c->r[0]=c->r[3]+c->r[0]; // 8028A7E8
  W16(c->r[17]+0x00000034u,c->r[0]); // 8028A7EC
L_8028A7F0:;
  c->r[3]=c->r[16]|c->r[16]; // 8028A7F0
  c->lr=0x8028A7F8u; f_80160C90(c); // 8028A7F4
  c->r[3]=c->r[19]|c->r[19]; // 8028A7F8
L_8028A7FC:;
  c->r[11]=c->r[1]+0x00000080u; // 8028A7FC
  c->lr=0x8028A804u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028A800
  c->r[0]=R32(c->r[1]+0x00000084u); // 8028A804
  c->lr=c->r[0]; // 8028A808
  c->r[1]=c->r[1]+0x00000080u; // 8028A80C
  return; // 8028A810
}

// SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam
void f_8028A814(Ctx* __restrict c) {
  trace_call(0x8028A814u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028A814
  c->r[0]=c->lr; // 8028A818
  c->r[12]=R16(c->r[4]+0x00000000u); // 8028A81C
  c->r[11]=0u+0x00000000u; // 8028A820
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028A824
  c->r[10]=R16(c->r[4]+0x00000002u); // 8028A828
  c->r[9]=R16(c->r[4]+0x00000004u); // 8028A82C
  c->r[8]=R16(c->r[4]+0x00000006u); // 8028A830
  c->r[7]=R16(c->r[4]+0x00000008u); // 8028A834
  c->r[6]=R16(c->r[4]+0x0000000Au); // 8028A838
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 8028A83C
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 8028A840
  c->r[4]=c->r[1]+0x00000008u; // 8028A844
  W16(c->r[1]+0x00000008u,c->r[12]); // 8028A848
  W16(c->r[1]+0x0000000Au,c->r[11]); // 8028A84C
  W16(c->r[1]+0x0000000Cu,c->r[10]); // 8028A850
  W16(c->r[1]+0x0000000Eu,c->r[11]); // 8028A854
  W16(c->r[1]+0x00000010u,c->r[9]); // 8028A858
  W16(c->r[1]+0x00000012u,c->r[11]); // 8028A85C
  W16(c->r[1]+0x00000014u,c->r[8]); // 8028A860
  W16(c->r[1]+0x00000016u,c->r[11]); // 8028A864
  W16(c->r[1]+0x00000018u,c->r[7]); // 8028A868
  W16(c->r[1]+0x0000001Au,c->r[11]); // 8028A86C
  W16(c->r[1]+0x0000001Cu,c->r[6]); // 8028A870
  W16(c->r[1]+0x0000001Eu,c->r[11]); // 8028A874
  W16(c->r[1]+0x00000020u,c->r[5]); // 8028A878
  W16(c->r[1]+0x00000022u,c->r[11]); // 8028A87C
  W16(c->r[1]+0x00000024u,c->r[0]); // 8028A880
  W16(c->r[1]+0x00000026u,c->r[11]); // 8028A884
  c->lr=0x8028A88Cu; f_8028B6EC(c); // 8028A888
  c->r[0]=R32(c->r[1]+0x00000034u); // 8028A88C
  c->lr=c->r[0]; // 8028A890
  c->r[1]=c->r[1]+0x00000030u; // 8028A894
  return; // 8028A898
}

// SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
void f_8028A89C(Ctx* __restrict c) {
  trace_call(0x8028A89Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028A89C
  c->r[0]=c->lr; // 8028A8A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8028A8A4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8028A8A8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8028A8AC
  c->f[31]=c->f[1]; // 8028A8B0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8028A8B4
  c->r[31]=c->r[3]|c->r[3]; // 8028A8B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8028A8BC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8028A8C0
  W32(c->r[1]+0x00000020u,c->r[28]); // 8028A8C4
  c->r[28]=c->r[4]|c->r[4]; // 8028A8C8
  c->lr=0x8028A8D0u; f_80160C68(c); // 8028A8CC
  c->r[0]=R32(c->r[31]+0x00000000u); // 8028A8D0
  c->r[30]=c->r[3]|c->r[3]; // 8028A8D4
  cmps(c,0,(int32_t)c->r[0],0); // 8028A8D8
  if (!crb(c,2)) { goto L_8028A8E8; } // 8028A8DC
  c->lr=0x8028A8E4u; f_80160C90(c); // 8028A8E0
  goto L_8028AA40; // 8028A8E4
L_8028A8E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 8028A8E8
  if (crb(c,2)) { goto L_8028A9B8; } // 8028A8EC
  c->r[3]=R32(c->r[31]+0x00000018u); // 8028A8F0
  c->r[0]=0u+0x43300000u; // 8028A8F4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8028A8F8
  c->r[0]=c->r[3]^0x80000000u; // 8028A8FC
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[2]=RF64(ea);} // 8028A900
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8028A904
  {uint32_t ea=c->r[2]+0xFFFF9F68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028A908
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 8028A90C
  {uint32_t ea=c->r[2]+0xFFFF9F80u; c->f[3]=c->ps1[3]=RF32(ea);} // 8028A910
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028A914
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8028A918
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028A91C
  fcmp(c,0,c->f[0],c->f[3]); // 8028A920
  if (!crb(c,1)) { goto L_8028A92C; } // 8028A924
  goto L_8028A940; // 8028A928
L_8028A92C:;
  {uint32_t ea=c->r[2]+0xFFFF9F84u; c->f[3]=c->ps1[3]=RF32(ea);} // 8028A92C
  fcmp(c,0,c->f[0],c->f[3]); // 8028A930
  if (!crb(c,0)) { goto L_8028A93C; } // 8028A934
  goto L_8028A940; // 8028A938
L_8028A93C:;
  c->f[3]=c->f[0]; // 8028A93C
L_8028A940:;
  {uint32_t ea=c->r[2]+0xFFFF9F88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028A940
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 8028A944
  c->lr=0x8028A94Cu; f_80185DAC(c); // 8028A948
  c->r[0]=0u+0x00000000u; // 8028A94C
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 8028A950
  W16(c->r[1]+0x00000008u,c->r[4]); // 8028A954
  W16(c->r[1]+0x0000000Au,c->r[3]); // 8028A958
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 8028A95C
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 8028A960
  W16(c->r[1]+0x00000010u,c->r[0]); // 8028A964
  W16(c->r[1]+0x00000012u,c->r[0]); // 8028A968
  W16(c->r[1]+0x00000014u,c->r[0]); // 8028A96C
  c->lr=0x8028A974u; f_80160C68(c); // 8028A970
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028A974
  c->r[29]=c->r[3]|c->r[3]; // 8028A978
  cmps(c,0,(int32_t)c->r[4],0); // 8028A97C
  if (!crb(c,2)) { goto L_8028A98C; } // 8028A980
  c->lr=0x8028A988u; f_80160C90(c); // 8028A984
  goto L_8028AA38; // 8028A988
L_8028A98C:;
  c->r[3]=c->r[4]+0x000000CEu; // 8028A98C
  c->r[4]=c->r[1]+0x00000008u; // 8028A990
  c->r[5]=0u+0x0000000Eu; // 8028A994
  c->lr=0x8028A99Cu; f_80004338(c); // 8028A998
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028A99C
  c->r[3]=c->r[29]|c->r[29]; // 8028A9A0
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 8028A9A4
  c->r[0]=c->r[0]|0x00010000u; // 8028A9A8
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028A9AC
  c->lr=0x8028A9B4u; f_80160C90(c); // 8028A9B0
  goto L_8028AA38; // 8028A9B4
L_8028A9B8:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8028A9B8
  c->r[0]=0u+0x43300000u; // 8028A9BC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8028A9C0
  c->r[0]=c->r[3]^0x80000000u; // 8028A9C4
  {uint32_t ea=c->r[2]+0xFFFF9F78u; c->f[2]=RF64(ea);} // 8028A9C8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8028A9CC
  {uint32_t ea=c->r[2]+0xFFFF9F68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028A9D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 8028A9D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028A9D8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8028A9DC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8028A9E0
  c->lr=0x8028A9E8u; f_80160C68(c); // 8028A9E4
  c->r[28]=R32(c->r[31]+0x00000000u); // 8028A9E8
  c->r[29]=c->r[3]|c->r[3]; // 8028A9EC
  cmps(c,0,(int32_t)c->r[28],0); // 8028A9F0
  if (!crb(c,2)) { goto L_8028AA00; } // 8028A9F4
  c->lr=0x8028A9FCu; f_80160C90(c); // 8028A9F8
  goto L_8028AA38; // 8028A9FC
L_8028AA00:;
  {uint32_t ea=c->r[2]+0xFFFF9F88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028AA00
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8028AA04
  c->lr=0x8028AA0Cu; f_80185DAC(c); // 8028AA08
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 8028AA0C
  W16(c->r[28]+0x000000CEu,c->r[0]); // 8028AA10
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AA14
  W16(c->r[4]+0x000000D0u,c->r[3]); // 8028AA18
  c->r[3]=R32(c->r[31]+0x00000004u); // 8028AA1C
  c->r[0]=rotl(c->r[3],0)&0x00010000u; cr0(c,c->r[0]); // 8028AA20
  if (!crb(c,2)) { goto L_8028AA30; } // 8028AA24
  c->r[0]=c->r[3]|0x00020000u; // 8028AA28
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028AA2C
L_8028AA30:;
  c->r[3]=c->r[29]|c->r[29]; // 8028AA30
  c->lr=0x8028AA38u; f_80160C90(c); // 8028AA34
L_8028AA38:;
  c->r[3]=c->r[30]|c->r[30]; // 8028AA38
  c->lr=0x8028AA40u; f_80160C90(c); // 8028AA3C
L_8028AA40:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8028AA40
  c->r[0]=R32(c->r[1]+0x00000044u); // 8028AA44
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8028AA48
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8028AA4C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8028AA50
  c->r[29]=R32(c->r[1]+0x00000024u); // 8028AA54
  c->r[28]=R32(c->r[1]+0x00000020u); // 8028AA58
  c->lr=c->r[0]; // 8028AA5C
  c->r[1]=c->r[1]+0x00000040u; // 8028AA60
  return; // 8028AA64
}

// SetVe__Q44nw4r3snd6detail7AxVoiceFff
void f_8028AA68(Ctx* __restrict c) {
  trace_call(0x8028AA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028AA68
  c->r[0]=c->lr; // 8028AA6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8028AA70
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8028AA74
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8028AA78
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8028AA7C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8028AA80
  c->f[30]=c->f[1]; // 8028AA84
  c->f[31]=c->f[2]; // 8028AA88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028AA8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028AA90
  c->r[30]=c->r[3]|c->r[3]; // 8028AA94
  c->lr=0x8028AA9Cu; f_80160C68(c); // 8028AA98
  c->r[0]=R32(c->r[30]+0x00000000u); // 8028AA9C
  c->r[31]=c->r[3]|c->r[3]; // 8028AAA0
  cmps(c,0,(int32_t)c->r[0],0); // 8028AAA4
  if (!crb(c,2)) { goto L_8028AAB4; } // 8028AAA8
  c->lr=0x8028AAB0u; f_80160C90(c); // 8028AAAC
  goto L_8028AB1C; // 8028AAB0
L_8028AAB4:;
  c->lr=0x8028AAB8u; f_80160C68(c); // 8028AAB4
  c->r[0]=R32(c->r[30]+0x00000000u); // 8028AAB8
  cmps(c,0,(int32_t)c->r[0],0); // 8028AABC
  if (!crb(c,2)) { goto L_8028AACC; } // 8028AAC0
  c->lr=0x8028AAC8u; f_80160C90(c); // 8028AAC4
  goto L_8028AB14; // 8028AAC8
L_8028AACC:;
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 8028AACC
  cmps(c,0,(int32_t)c->r[0],0); // 8028AAD0
  if (crb(c,2)) { goto L_8028AAF8; } // 8028AAD4
  {uint32_t ea=c->r[2]+0xFFFF9F8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028AAD8
  c->r[0]=0u+0x00000000u; // 8028AADC
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 8028AAE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 8028AAE4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028AAE8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8028AAEC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8028AAF0
  W16(c->r[30]+0x00000008u,c->r[0]); // 8028AAF4
L_8028AAF8:;
  {uint32_t ea=c->r[2]+0xFFFF9F8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028AAF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 8028AAFC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028AB00
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8028AB04
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8028AB08
  W16(c->r[30]+0x0000000Eu,c->r[0]); // 8028AB0C
  c->lr=0x8028AB14u; f_80160C90(c); // 8028AB10
L_8028AB14:;
  c->r[3]=c->r[31]|c->r[31]; // 8028AB14
  c->lr=0x8028AB1Cu; f_80160C90(c); // 8028AB18
L_8028AB1C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8028AB1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8028AB20
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8028AB24
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8028AB28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028AB2C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8028AB30
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028AB34
  c->lr=c->r[0]; // 8028AB38
  c->r[1]=c->r[1]+0x00000040u; // 8028AB3C
  return; // 8028AB40
}

// SetLpf__Q44nw4r3snd6detail7AxVoiceFUs
void f_8028AB44(Ctx* __restrict c) {
  trace_call(0x8028AB44u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028AB44
  c->r[0]=c->lr; // 8028AB48
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028AB4C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8028AB50
  c->r[31]=c->r[3]|c->r[3]; // 8028AB54
  W32(c->r[1]+0x00000028u,c->r[30]); // 8028AB58
  W32(c->r[1]+0x00000024u,c->r[29]); // 8028AB5C
  W32(c->r[1]+0x00000020u,c->r[28]); // 8028AB60
  c->r[28]=c->r[4]|c->r[4]; // 8028AB64
  c->lr=0x8028AB6Cu; f_80160C68(c); // 8028AB68
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AB6C
  c->r[30]=c->r[3]|c->r[3]; // 8028AB70
  cmps(c,1,(int32_t)c->r[4],0); // 8028AB74
  if (!crb(c,6)) { goto L_8028AB84; } // 8028AB78
  c->lr=0x8028AB80u; f_80160C90(c); // 8028AB7C
  goto L_8028ACB4; // 8028AB80
L_8028AB84:;
  cmpu(c,0,c->r[28],0x00003E80u); // 8028AB84
  if (crb(c,0)) { goto L_8028ABDC; } // 8028AB88
  c->r[0]=0u+0x00000000u; // 8028AB8C
  W16(c->r[1]+0x00000018u,c->r[0]); // 8028AB90
  W16(c->r[1]+0x0000001Au,c->r[0]); // 8028AB94
  c->lr=0x8028AB9Cu; f_80160C68(c); // 8028AB98
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AB9C
  c->r[29]=c->r[3]|c->r[3]; // 8028ABA0
  cmps(c,0,(int32_t)c->r[4],0); // 8028ABA4
  if (!crb(c,2)) { goto L_8028ABB4; } // 8028ABA8
  c->lr=0x8028ABB0u; f_80160C90(c); // 8028ABAC
  goto L_8028ACAC; // 8028ABB0
L_8028ABB4:;
  c->r[3]=c->r[4]+0x000000E2u; // 8028ABB4
  c->r[4]=c->r[1]+0x00000018u; // 8028ABB8
  c->r[5]=0u+0x00000008u; // 8028ABBC
  c->lr=0x8028ABC4u; f_80004338(c); // 8028ABC0
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028ABC4
  c->r[3]=c->r[29]|c->r[29]; // 8028ABC8
  c->r[0]=c->r[0]|0x00080000u; // 8028ABCC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028ABD0
  c->lr=0x8028ABD8u; f_80160C90(c); // 8028ABD4
  goto L_8028ACAC; // 8028ABD8
L_8028ABDC:;
  c->r[3]=0u+0x00000000u; // 8028ABDC
  if (crb(c,6)) { goto L_8028ABF4; } // 8028ABE0
  c->r[0]=R16(c->r[4]+0x000000E2u); // 8028ABE4
  cmpu(c,0,c->r[0],0x00000001u); // 8028ABE8
  if (!crb(c,2)) { goto L_8028ABF4; } // 8028ABEC
  c->r[3]=0u+0x00000001u; // 8028ABF0
L_8028ABF4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8028ABF4
  if (crb(c,2)) { goto L_8028AC4C; } // 8028ABF8
  c->r[3]=c->r[28]|c->r[28]; // 8028ABFC
  c->r[4]=c->r[1]+0x0000000Au; // 8028AC00
  c->r[5]=c->r[1]+0x00000008u; // 8028AC04
  c->lr=0x8028AC0Cu; f_8017BA74(c); // 8028AC08
  c->r[28]=R16(c->r[1]+0x00000008u); // 8028AC0C
  c->r[29]=R16(c->r[1]+0x0000000Au); // 8028AC10
  c->lr=0x8028AC18u; f_80160C68(c); // 8028AC14
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AC18
  cmps(c,0,(int32_t)c->r[4],0); // 8028AC1C
  if (!crb(c,2)) { goto L_8028AC2C; } // 8028AC20
  c->lr=0x8028AC28u; f_80160C90(c); // 8028AC24
  goto L_8028ACAC; // 8028AC28
L_8028AC2C:;
  W16(c->r[4]+0x000000E6u,c->r[29]); // 8028AC2C
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AC30
  W16(c->r[4]+0x000000E8u,c->r[28]); // 8028AC34
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028AC38
  c->r[0]=c->r[0]|0x00100000u; // 8028AC3C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028AC40
  c->lr=0x8028AC48u; f_80160C90(c); // 8028AC44
  goto L_8028ACAC; // 8028AC48
L_8028AC4C:;
  c->r[3]=0u+0x00000001u; // 8028AC4C
  c->r[0]=0u+0x00000000u; // 8028AC50
  W16(c->r[1]+0x00000010u,c->r[3]); // 8028AC54
  c->r[3]=c->r[28]|c->r[28]; // 8028AC58
  c->r[4]=c->r[1]+0x00000014u; // 8028AC5C
  c->r[5]=c->r[1]+0x00000016u; // 8028AC60
  W16(c->r[1]+0x00000012u,c->r[0]); // 8028AC64
  c->lr=0x8028AC6Cu; f_8017BA74(c); // 8028AC68
  c->lr=0x8028AC70u; f_80160C68(c); // 8028AC6C
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AC70
  c->r[29]=c->r[3]|c->r[3]; // 8028AC74
  cmps(c,0,(int32_t)c->r[4],0); // 8028AC78
  if (!crb(c,2)) { goto L_8028AC88; } // 8028AC7C
  c->lr=0x8028AC84u; f_80160C90(c); // 8028AC80
  goto L_8028ACAC; // 8028AC84
L_8028AC88:;
  c->r[3]=c->r[4]+0x000000E2u; // 8028AC88
  c->r[4]=c->r[1]+0x00000010u; // 8028AC8C
  c->r[5]=0u+0x00000008u; // 8028AC90
  c->lr=0x8028AC98u; f_80004338(c); // 8028AC94
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028AC98
  c->r[3]=c->r[29]|c->r[29]; // 8028AC9C
  c->r[0]=c->r[0]|0x00080000u; // 8028ACA0
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028ACA4
  c->lr=0x8028ACACu; f_80160C90(c); // 8028ACA8
L_8028ACAC:;
  c->r[3]=c->r[30]|c->r[30]; // 8028ACAC
  c->lr=0x8028ACB4u; f_80160C90(c); // 8028ACB0
L_8028ACB4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8028ACB4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8028ACB8
  c->r[30]=R32(c->r[1]+0x00000028u); // 8028ACBC
  c->r[29]=R32(c->r[1]+0x00000024u); // 8028ACC0
  c->r[28]=R32(c->r[1]+0x00000020u); // 8028ACC4
  c->lr=c->r[0]; // 8028ACC8
  c->r[1]=c->r[1]+0x00000030u; // 8028ACCC
  return; // 8028ACD0
}

// fn_8028ACD4
void f_8028ACD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028ACD4
  c->r[0]=c->lr; // 8028ACD8
  W32(c->r[1]+0x00000074u,c->r[0]); // 8028ACDC
  c->r[11]=c->r[1]+0x00000068u; // 8028ACE0
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[31]);} // 8028ACE4
  c->lr=0x8028ACECu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028ACE8
  c->f[31]=c->f[1]; // 8028ACEC
  c->r[31]=c->r[3]|c->r[3]; // 8028ACF0
  c->r[25]=c->r[4]|c->r[4]; // 8028ACF4
  c->lr=0x8028ACFCu; f_80160C68(c); // 8028ACF8
  c->r[0]=R32(c->r[31]+0x00000000u); // 8028ACFC
  c->r[30]=c->r[3]|c->r[3]; // 8028AD00
  cmps(c,0,(int32_t)c->r[0],0); // 8028AD04
  if (!crb(c,2)) { goto L_8028AD14; } // 8028AD08
  c->lr=0x8028AD10u; f_80160C90(c); // 8028AD0C
  goto L_8028AEDC; // 8028AD10
L_8028AD14:;
  c->lr=0x8028AD18u; f_80287884(c); // 8028AD14
  c->r[3]=0u+0x80420000u; // 8028AD18
  cmps(c,0,(int32_t)c->r[25],0); // 8028AD1C
  c->r[0]=rotl(c->r[25],2)&0x000003FCu; // 8028AD20
  c->r[4]=0u+0x00000001u; // 8028AD24
  c->r[3]=c->r[3]+0xFFFFA720u; // 8028AD28
  c->r[3]=R32(c->r[3]+c->r[0]); // 8028AD2C
  if (!crb(c,2)) { goto L_8028AD38; } // 8028AD30
  c->r[4]=0u+0x00000000u; // 8028AD34
L_8028AD38:;
  cmps(c,0,(int32_t)c->r[3],0); // 8028AD38
  if (!crb(c,2)) { goto L_8028AD44; } // 8028AD3C
  c->r[4]=0u+0x00000000u; // 8028AD40
L_8028AD44:;
  cmps(c,0,(int32_t)c->r[4],0); // 8028AD44
  if (!crb(c,2)) { goto L_8028ADA8; } // 8028AD48
  c->r[0]=0u+0x00000000u; // 8028AD4C
  W16(c->r[1]+0x00000028u,c->r[0]); // 8028AD50
  W16(c->r[1]+0x0000002Au,c->r[0]); // 8028AD54
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 8028AD58
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 8028AD5C
  W16(c->r[1]+0x00000030u,c->r[0]); // 8028AD60
  c->lr=0x8028AD68u; f_80160C68(c); // 8028AD64
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AD68
  c->r[29]=c->r[3]|c->r[3]; // 8028AD6C
  cmps(c,0,(int32_t)c->r[4],0); // 8028AD70
  if (!crb(c,2)) { goto L_8028AD80; } // 8028AD74
  c->lr=0x8028AD7Cu; f_80160C90(c); // 8028AD78
  goto L_8028AED4; // 8028AD7C
L_8028AD80:;
  c->r[3]=c->r[4]+0x000000EAu; // 8028AD80
  c->r[4]=c->r[1]+0x00000028u; // 8028AD84
  c->r[5]=0u+0x00000014u; // 8028AD88
  c->lr=0x8028AD90u; f_80004338(c); // 8028AD8C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028AD90
  c->r[3]=c->r[29]|c->r[29]; // 8028AD94
  c->r[0]=c->r[0]|0x00200000u; // 8028AD98
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028AD9C
  c->lr=0x8028ADA4u; f_80160C90(c); // 8028ADA0
  goto L_8028AED4; // 8028ADA4
L_8028ADA8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028ADA8
  c->f[1]=c->f[31]; // 8028ADAC
  c->r[4]=c->r[25]|c->r[25]; // 8028ADB0
  c->r[5]=c->r[1]+0x00000008u; // 8028ADB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8028ADB8
  c->ctr=c->r[12]; // 8028ADBC
  if (true) { c->lr=0x8028ADC4u; dispatch(c,c->ctr); } // 8028ADC0
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028ADC4
  c->r[3]=0u+0x00000000u; // 8028ADC8
  cmps(c,0,(int32_t)c->r[4],0); // 8028ADCC
  if (crb(c,2)) { goto L_8028ADE4; } // 8028ADD0
  c->r[0]=R16(c->r[4]+0x000000EAu); // 8028ADD4
  cmpu(c,0,c->r[0],0x00000002u); // 8028ADD8
  if (!crb(c,2)) { goto L_8028ADE4; } // 8028ADDC
  c->r[3]=0u+0x00000001u; // 8028ADE0
L_8028ADE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8028ADE4
  if (crb(c,2)) { goto L_8028AE50; } // 8028ADE8
  c->r[25]=R16(c->r[1]+0x00000010u); // 8028ADEC
  c->r[26]=R16(c->r[1]+0x0000000Eu); // 8028ADF0
  c->r[27]=R16(c->r[1]+0x0000000Cu); // 8028ADF4
  c->r[28]=R16(c->r[1]+0x0000000Au); // 8028ADF8
  c->r[29]=R16(c->r[1]+0x00000008u); // 8028ADFC
  c->lr=0x8028AE04u; f_80160C68(c); // 8028AE00
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AE04
  cmps(c,0,(int32_t)c->r[4],0); // 8028AE08
  if (!crb(c,2)) { goto L_8028AE18; } // 8028AE0C
  c->lr=0x8028AE14u; f_80160C90(c); // 8028AE10
  goto L_8028AED4; // 8028AE14
L_8028AE18:;
  W16(c->r[4]+0x000000F4u,c->r[29]); // 8028AE18
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AE1C
  W16(c->r[4]+0x000000F6u,c->r[28]); // 8028AE20
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AE24
  W16(c->r[4]+0x000000F8u,c->r[27]); // 8028AE28
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AE2C
  W16(c->r[4]+0x000000FAu,c->r[26]); // 8028AE30
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AE34
  W16(c->r[4]+0x000000FCu,c->r[25]); // 8028AE38
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028AE3C
  c->r[0]=c->r[0]|0x00400000u; // 8028AE40
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028AE44
  c->lr=0x8028AE4Cu; f_80160C90(c); // 8028AE48
  goto L_8028AED4; // 8028AE4C
L_8028AE50:;
  c->r[6]=R16(c->r[1]+0x00000008u); // 8028AE50
  c->r[7]=0u+0x00000000u; // 8028AE54
  c->r[5]=R16(c->r[1]+0x0000000Au); // 8028AE58
  c->r[8]=0u+0x00000002u; // 8028AE5C
  c->r[4]=R16(c->r[1]+0x0000000Cu); // 8028AE60
  c->r[3]=R16(c->r[1]+0x0000000Eu); // 8028AE64
  c->r[0]=R16(c->r[1]+0x00000010u); // 8028AE68
  W16(c->r[1]+0x00000014u,c->r[8]); // 8028AE6C
  W16(c->r[1]+0x00000016u,c->r[7]); // 8028AE70
  W16(c->r[1]+0x00000018u,c->r[7]); // 8028AE74
  W16(c->r[1]+0x0000001Au,c->r[7]); // 8028AE78
  W16(c->r[1]+0x0000001Cu,c->r[7]); // 8028AE7C
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 8028AE80
  W16(c->r[1]+0x00000020u,c->r[5]); // 8028AE84
  W16(c->r[1]+0x00000022u,c->r[4]); // 8028AE88
  W16(c->r[1]+0x00000024u,c->r[3]); // 8028AE8C
  W16(c->r[1]+0x00000026u,c->r[0]); // 8028AE90
  c->lr=0x8028AE98u; f_80160C68(c); // 8028AE94
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028AE98
  c->r[29]=c->r[3]|c->r[3]; // 8028AE9C
  cmps(c,0,(int32_t)c->r[4],0); // 8028AEA0
  if (!crb(c,2)) { goto L_8028AEB0; } // 8028AEA4
  c->lr=0x8028AEACu; f_80160C90(c); // 8028AEA8
  goto L_8028AED4; // 8028AEAC
L_8028AEB0:;
  c->r[3]=c->r[4]+0x000000EAu; // 8028AEB0
  c->r[4]=c->r[1]+0x00000014u; // 8028AEB4
  c->r[5]=0u+0x00000014u; // 8028AEB8
  c->lr=0x8028AEC0u; f_80004338(c); // 8028AEBC
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028AEC0
  c->r[3]=c->r[29]|c->r[29]; // 8028AEC4
  c->r[0]=c->r[0]|0x00200000u; // 8028AEC8
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028AECC
  c->lr=0x8028AED4u; f_80160C90(c); // 8028AED0
L_8028AED4:;
  c->r[3]=c->r[30]|c->r[30]; // 8028AED4
  c->lr=0x8028AEDCu; f_80160C90(c); // 8028AED8
L_8028AEDC:;
  c->r[11]=c->r[1]+0x00000068u; // 8028AEDC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[31]=RF64(ea);} // 8028AEE0
  c->lr=0x8028AEE8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028AEE4
  c->r[0]=R32(c->r[1]+0x00000074u); // 8028AEE8
  c->lr=c->r[0]; // 8028AEEC
  c->r[1]=c->r[1]+0x00000070u; // 8028AEF0
  return; // 8028AEF4
}

// SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc
void f_8028AEF8(Ctx* __restrict c) {
  trace_call(0x8028AEF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028AEF8
  c->r[0]=c->lr; // 8028AEFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8028AF00
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8028AF04
  W32(c->r[1]+0x00000048u,c->r[30]); // 8028AF08
  c->r[30]=c->r[4]|c->r[4]; // 8028AF0C
  W32(c->r[1]+0x00000044u,c->r[29]); // 8028AF10
  c->r[29]=c->r[3]|c->r[3]; // 8028AF14
  c->lr=0x8028AF1Cu; f_80160C68(c); // 8028AF18
  c->r[4]=R32(c->r[29]+0x00000000u); // 8028AF1C
  c->r[31]=c->r[3]|c->r[3]; // 8028AF20
  cmps(c,1,(int32_t)c->r[4],0); // 8028AF24
  if (!crb(c,6)) { goto L_8028AF34; } // 8028AF28
  c->lr=0x8028AF30u; f_80160C90(c); // 8028AF2C
  goto L_8028B06C; // 8028AF30
L_8028AF34:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028AF34
  if (!crb(c,2)) { goto L_8028AF88; } // 8028AF38
  c->r[0]=0u+0x00000000u; // 8028AF3C
  W16(c->r[1]+0x00000028u,c->r[0]); // 8028AF40
  c->lr=0x8028AF48u; f_80160C68(c); // 8028AF44
  c->r[4]=R32(c->r[29]+0x00000000u); // 8028AF48
  c->r[30]=c->r[3]|c->r[3]; // 8028AF4C
  cmps(c,0,(int32_t)c->r[4],0); // 8028AF50
  if (!crb(c,2)) { goto L_8028AF60; } // 8028AF54
  c->lr=0x8028AF5Cu; f_80160C90(c); // 8028AF58
  goto L_8028B064; // 8028AF5C
L_8028AF60:;
  c->r[3]=c->r[4]+0x0000013Cu; // 8028AF60
  c->r[4]=c->r[1]+0x00000028u; // 8028AF64
  c->r[5]=0u+0x00000014u; // 8028AF68
  c->lr=0x8028AF70u; f_80004338(c); // 8028AF6C
  c->r[0]=R32(c->r[29]+0x00000004u); // 8028AF70
  c->r[3]=c->r[30]|c->r[30]; // 8028AF74
  c->r[0]=c->r[0]|0x10000000u; // 8028AF78
  W32(c->r[29]+0x00000004u,c->r[0]); // 8028AF7C
  c->lr=0x8028AF84u; f_80160C90(c); // 8028AF80
  goto L_8028B064; // 8028AF84
L_8028AF88:;
  c->r[3]=0u+0x00000000u; // 8028AF88
  if (crb(c,6)) { goto L_8028AFA0; } // 8028AF8C
  c->r[0]=R16(c->r[4]+0x0000013Cu); // 8028AF90
  cmpu(c,0,c->r[0],0x00000002u); // 8028AF94
  if (!crb(c,2)) { goto L_8028AFA0; } // 8028AF98
  c->r[3]=0u+0x00000001u; // 8028AF9C
L_8028AFA0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8028AFA0
  if (crb(c,2)) { goto L_8028AFEC; } // 8028AFA4
  c->r[3]=c->r[30]|c->r[30]; // 8028AFA8
  c->r[4]=c->r[1]+0x00000010u; // 8028AFAC
  c->r[5]=c->r[1]+0x0000000Eu; // 8028AFB0
  c->r[6]=c->r[1]+0x0000000Cu; // 8028AFB4
  c->r[7]=c->r[1]+0x0000000Au; // 8028AFB8
  c->r[8]=c->r[1]+0x00000008u; // 8028AFBC
  c->lr=0x8028AFC4u; f_802A5CA4(c); // 8028AFC0
  c->r[5]=R16(c->r[1]+0x00000010u); // 8028AFC4
  c->r[3]=c->r[29]|c->r[29]; // 8028AFC8
  c->r[6]=R16(c->r[1]+0x0000000Eu); // 8028AFCC
  c->r[4]=0u+0x00000002u; // 8028AFD0
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 8028AFD4
  c->r[8]=R16(c->r[1]+0x0000000Au); // 8028AFD8
  c->r[9]=R16(c->r[1]+0x00000008u); // 8028AFDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8028AFE0
  c->lr=0x8028AFE8u; f_8028B8D8(c); // 8028AFE4
  goto L_8028B064; // 8028AFE8
L_8028AFEC:;
  c->r[0]=0u+0x00000000u; // 8028AFEC
  c->r[3]=0u+0x00000002u; // 8028AFF0
  W16(c->r[1]+0x00000014u,c->r[3]); // 8028AFF4
  c->r[3]=c->r[30]|c->r[30]; // 8028AFF8
  c->r[4]=c->r[1]+0x0000001Eu; // 8028AFFC
  c->r[5]=c->r[1]+0x00000020u; // 8028B000
  W16(c->r[1]+0x00000016u,c->r[0]); // 8028B004
  c->r[6]=c->r[1]+0x00000022u; // 8028B008
  c->r[7]=c->r[1]+0x00000024u; // 8028B00C
  c->r[8]=c->r[1]+0x00000026u; // 8028B010
  W16(c->r[1]+0x00000018u,c->r[0]); // 8028B014
  W16(c->r[1]+0x0000001Au,c->r[0]); // 8028B018
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 8028B01C
  c->lr=0x8028B024u; f_802A5CA4(c); // 8028B020
  c->lr=0x8028B028u; f_80160C68(c); // 8028B024
  c->r[4]=R32(c->r[29]+0x00000000u); // 8028B028
  c->r[30]=c->r[3]|c->r[3]; // 8028B02C
  cmps(c,0,(int32_t)c->r[4],0); // 8028B030
  if (!crb(c,2)) { goto L_8028B040; } // 8028B034
  c->lr=0x8028B03Cu; f_80160C90(c); // 8028B038
  goto L_8028B064; // 8028B03C
L_8028B040:;
  c->r[3]=c->r[4]+0x0000013Cu; // 8028B040
  c->r[4]=c->r[1]+0x00000014u; // 8028B044
  c->r[5]=0u+0x00000014u; // 8028B048
  c->lr=0x8028B050u; f_80004338(c); // 8028B04C
  c->r[0]=R32(c->r[29]+0x00000004u); // 8028B050
  c->r[3]=c->r[30]|c->r[30]; // 8028B054
  c->r[0]=c->r[0]|0x10000000u; // 8028B058
  W32(c->r[29]+0x00000004u,c->r[0]); // 8028B05C
  c->lr=0x8028B064u; f_80160C90(c); // 8028B060
L_8028B064:;
  c->r[3]=c->r[31]|c->r[31]; // 8028B064
  c->lr=0x8028B06Cu; f_80160C90(c); // 8028B068
L_8028B06C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8028B06C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8028B070
  c->r[30]=R32(c->r[1]+0x00000048u); // 8028B074
  c->r[29]=R32(c->r[1]+0x00000044u); // 8028B078
  c->lr=c->r[0]; // 8028B07C
  c->r[1]=c->r[1]+0x00000050u; // 8028B080
  return; // 8028B084
}

// CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ44nw4r3snd6detail10AdpcmParam
void f_8028B088(Ctx* __restrict c) {
  trace_call(0x8028B088u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028B088
  c->r[0]=c->lr; // 8028B08C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8028B090
  c->r[11]=c->r[1]+0x00000050u; // 8028B094
  c->lr=0x8028B09Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028B098
  c->r[31]=c->r[8]|c->r[8]; // 8028B09C
  c->r[27]=c->r[3]|c->r[3]; // 8028B0A0
  c->r[28]=c->r[4]|c->r[4]; // 8028B0A4
  c->r[29]=c->r[5]|c->r[5]; // 8028B0A8
  c->r[30]=c->r[6]|c->r[6]; // 8028B0AC
  c->r[26]=c->r[7]|c->r[7]; // 8028B0B0
  c->r[4]=c->r[31]|c->r[31]; // 8028B0B4
  c->r[3]=c->r[1]+0x00000008u; // 8028B0B8
  c->r[5]=0u+0x00000020u; // 8028B0BC
  c->lr=0x8028B0C4u; f_80004338(c); // 8028B0C0
  c->r[5]=R16(c->r[31]+0x00000020u); // 8028B0C4
  cmps(c,0,(int32_t)c->r[26],0); // 8028B0C8
  c->r[4]=R16(c->r[31]+0x00000022u); // 8028B0CC
  c->r[6]=c->r[26]|c->r[26]; // 8028B0D0
  c->r[3]=R16(c->r[31]+0x00000024u); // 8028B0D4
  c->r[0]=R16(c->r[31]+0x00000026u); // 8028B0D8
  W16(c->r[1]+0x00000028u,c->r[5]); // 8028B0DC
  W16(c->r[1]+0x0000002Au,c->r[4]); // 8028B0E0
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 8028B0E4
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 8028B0E8
  if (crb(c,2)) { goto L_8028B0F4; } // 8028B0EC
  c->r[6]=c->r[26]+0x80000000u; // 8028B0F0
L_8028B0F4:;
  cmps(c,0,(int32_t)c->r[26],0); // 8028B0F4
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8028B0F8
  c->r[31]=c->r[3]+0x00000002u; // 8028B0FC
  if (crb(c,2)) { goto L_8028B108; } // 8028B100
  c->r[26]=c->r[26]+0x80000000u; // 8028B104
L_8028B108:;
  c->r[3]=0u+0x24920000u; // 8028B108
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 8028B10C
  c->r[3]=c->r[3]+0x00004925u; // 8028B110
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[30])>>32); // 8028B114
  c->r[3]=c->r[30]-c->r[4]; // 8028B118
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8028B11C
  c->r[4]=c->r[3]+c->r[4]; // 8028B120
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 8028B124
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 8028B128
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 8028B12C
  c->r[4]=c->r[30]-c->r[5]; // 8028B130
  c->r[0]=c->r[4]+c->r[0]; // 8028B134
  c->r[30]=c->r[0]+c->r[3]; // 8028B138
  c->r[30]=c->r[30]+0x00000002u; // 8028B13C
  goto L_8028B18C; // 8028B140
L_8028B144:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; cr0(c,c->r[0]); // 8028B144
  if (!crb(c,2)) { goto L_8028B160; } // 8028B148
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 8028B14C
  c->r[31]=c->r[31]+0x00000002u; // 8028B150
  c->r[3]=c->r[3]+0x80000000u; // 8028B154
  c->r[0]=R8(c->r[3]+0x00000000u); // 8028B158
  W16(c->r[1]+0x0000002Au,c->r[0]); // 8028B15C
L_8028B160:;
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 8028B160
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8028B164
  c->r[4]=c->r[3]+0x80000000u; // 8028B168
  c->r[4]=R8(c->r[4]+0x00000000u); // 8028B16C
  c->r[3]=c->r[1]+0x00000008u; // 8028B170
  c->r[0]=sraw(c,c->r[4],4); // 8028B174
  if (crb(c,2)) { goto L_8028B180; } // 8028B178
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 8028B17C
L_8028B180:;
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8028B180
  c->lr=0x8028B188u; f_802A789C(c); // 8028B184
  c->r[31]=c->r[31]+0x00000001u; // 8028B188
L_8028B18C:;
  cmpu(c,0,c->r[31],c->r[30]); // 8028B18C
  if (crb(c,0)) { IRQCHK(c); goto L_8028B144; } // 8028B190
  c->r[0]=R16(c->r[1]+0x0000002Au); // 8028B194
  c->r[11]=c->r[1]+0x00000050u; // 8028B198
  W16(c->r[27]+0x00000000u,c->r[0]); // 8028B19C
  c->r[0]=R16(c->r[1]+0x0000002Cu); // 8028B1A0
  W16(c->r[28]+0x00000000u,c->r[0]); // 8028B1A4
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 8028B1A8
  W16(c->r[29]+0x00000000u,c->r[0]); // 8028B1AC
  c->lr=0x8028B1B4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028B1B0
  c->r[0]=R32(c->r[1]+0x00000054u); // 8028B1B4
  c->lr=c->r[0]; // 8028B1B8
  c->r[1]=c->r[1]+0x00000050u; // 8028B1BC
  return; // 8028B1C0
}

// Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv
void f_8028B1C4(Ctx* __restrict c) {
  trace_call(0x8028B1C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028B1C4
  c->r[0]=c->lr; // 8028B1C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028B1CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028B1D0
  c->r[31]=c->r[3]|c->r[3]; // 8028B1D4
  c->lr=0x8028B1DCu; f_80160C68(c); // 8028B1D8
  c->r[5]=R32(c->r[31]+0x00000000u); // 8028B1DC
  cmps(c,0,(int32_t)c->r[5],0); // 8028B1E0
  if (!crb(c,2)) { goto L_8028B1F0; } // 8028B1E4
  c->lr=0x8028B1ECu; f_80160C90(c); // 8028B1E8
  goto L_8028B354; // 8028B1EC
L_8028B1F0:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 8028B1F0
  c->r[4]=0u+0x2AAB0000u; // 8028B1F4
  c->r[4]=c->r[4]+0xFFFFAAABu; // 8028B1F8
  c->r[6]=0u+0xFFFFFFFFu; // 8028B1FC
  W16(c->r[5]+0x00000092u,c->r[0]); // 8028B200
  c->r[7]=R16(c->r[31]+0x0000000Eu); // 8028B204
  c->r[0]=R16(c->r[31]+0x00000008u); // 8028B208
  c->r[0]=c->r[7]-c->r[0]; // 8028B20C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8028B210
  c->r[0]=sraw(c,c->r[0],4); // 8028B214
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8028B218
  c->r[0]=c->r[0]+c->r[4]; // 8028B21C
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8028B220
  c->r[0]=0u-c->r[8]; // 8028B224
  c->r[0]=c->r[0]&~c->r[8]; // 8028B228
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8028B22C
  c->r[0]=c->r[8]+c->r[0]; cr0(c,c->r[0]); // 8028B230
  if (crb(c,2)) { goto L_8028B23C; } // 8028B234
  c->r[6]=0u+0x00000001u; // 8028B238
L_8028B23C:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)96); // 8028B23C
  c->r[5]=R16(c->r[31]+0x00000008u); // 8028B240
  c->r[4]=R16(c->r[31]+0x00000008u); // 8028B244
  c->r[0]=c->r[4]+c->r[0]; // 8028B248
  c->r[4]=c->r[7]-c->r[0]; cr0(c,c->r[4]); // 8028B24C
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)96); // 8028B250
  c->r[0]=c->r[5]+c->r[0]; // 8028B254
  if (!crb(c,0)) { goto L_8028B260; } // 8028B258
  c->r[4]=0u-c->r[4]; // 8028B25C
L_8028B260:;
  c->r[0]=c->r[7]-c->r[0]; cr0(c,c->r[0]); // 8028B260
  if (!crb(c,0)) { goto L_8028B26C; } // 8028B264
  c->r[0]=0u-c->r[0]; // 8028B268
L_8028B26C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8028B26C
  if (!crb(c,0)) { goto L_8028B280; } // 8028B270
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028B274
  W16(c->r[4]+0x00000094u,c->r[8]); // 8028B278
  goto L_8028B288; // 8028B27C
L_8028B280:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028B280
  W16(c->r[4]+0x00000094u,c->r[6]); // 8028B284
L_8028B288:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 8028B288
  c->r[4]=R16(c->r[31]+0x00000008u); // 8028B28C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 8028B290
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 8028B294
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 8028B298
  if (!crb(c,0)) { goto L_8028B2C8; } // 8028B29C
  c->r[0]=R16(c->r[31]+0x00000008u); // 8028B2A0
  c->r[4]=0u+0x2AAB0000u; // 8028B2A4
  c->r[4]=c->r[4]+0xFFFFAAABu; // 8028B2A8
  c->r[0]=0u-c->r[0]; // 8028B2AC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8028B2B0
  c->r[0]=sraw(c,c->r[0],4); // 8028B2B4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8028B2B8
  c->r[0]=c->r[0]+c->r[4]; // 8028B2BC
  W16(c->r[5]+0x00000094u,c->r[0]); // 8028B2C0
  goto L_8028B2F4; // 8028B2C4
L_8028B2C8:;
  cmps(c,0,(int32_t)c->r[0],32767); // 8028B2C8
  if (!crb(c,1)) { goto L_8028B2F4; } // 8028B2CC
  c->r[0]=R16(c->r[31]+0x00000008u); // 8028B2D0
  c->r[4]=0u+0x2AAB0000u; // 8028B2D4
  c->r[4]=c->r[4]+0xFFFFAAABu; // 8028B2D8
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 8028B2DC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8028B2E0
  c->r[0]=sraw(c,c->r[0],4); // 8028B2E4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8028B2E8
  c->r[0]=c->r[0]+c->r[4]; // 8028B2EC
  W16(c->r[5]+0x00000094u,c->r[0]); // 8028B2F0
L_8028B2F4:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028B2F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 8028B2F8
  cmps(c,0,(int32_t)c->r[0],0); // 8028B2FC
  if (!crb(c,2)) { goto L_8028B318; } // 8028B300
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 8028B304
  cmps(c,0,(int32_t)c->r[0],0); // 8028B308
  if (!crb(c,2)) { goto L_8028B318; } // 8028B30C
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 8028B310
  W16(c->r[4]+0x00000092u,c->r[0]); // 8028B314
L_8028B318:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 8028B318
  c->r[0]=0u+0x00000000u; // 8028B31C
  c->r[5]=R32(c->r[31]+0x00000000u); // 8028B320
  c->r[4]=rotl(c->r[4],0)&0xFFFFFDFFu; // 8028B324
  c->r[6]=c->r[4]|0x00000100u; // 8028B328
  W32(c->r[31]+0x00000004u,c->r[6]); // 8028B32C
  c->r[4]=R16(c->r[5]+0x00000092u); // 8028B330
  W16(c->r[31]+0x00000008u,c->r[4]); // 8028B334
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 8028B338
  W16(c->r[31]+0x0000000Au,c->r[4]); // 8028B33C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 8028B340
  c->r[4]=c->r[4]|c->r[6]; // 8028B344
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 8028B348
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028B34C
  c->lr=0x8028B354u; f_80160C90(c); // 8028B350
L_8028B354:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028B354
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028B358
  c->lr=c->r[0]; // 8028B35C
  c->r[1]=c->r[1]+0x00000010u; // 8028B360
  return; // 8028B364
}

// Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB
void f_8028B368(Ctx* __restrict c) {
  trace_call(0x8028B368u);
  c->r[5]=0u+0x00010000u; // 8028B368
  c->r[6]=0u+0x00000000u; // 8028B36C
  c->r[0]=c->r[5]+0xFFFF8000u; // 8028B370
  W32(c->r[3]+0x00000000u,c->r[4]); // 8028B374
  c->r[5]=0u+0x00000001u; // 8028B378
  W16(c->r[3]+0x00000008u,c->r[0]); // 8028B37C
  W32(c->r[3]+0x00000004u,c->r[6]); // 8028B380
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 8028B384
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 8028B388
  W16(c->r[3]+0x0000000Au,c->r[6]); // 8028B38C
  return; // 8028B390
}

// SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
void f_8028B394(Ctx* __restrict c) {
  trace_call(0x8028B394u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028B394
  c->r[0]=c->lr; // 8028B398
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028B39C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028B3A0
  c->r[31]=c->r[5]|c->r[5]; // 8028B3A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028B3A8
  c->r[30]=c->r[3]|c->r[3]; // 8028B3AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028B3B0
  c->r[29]=c->r[4]|c->r[4]; // 8028B3B4
  c->lr=0x8028B3BCu; f_80160C68(c); // 8028B3B8
  c->r[6]=R32(c->r[30]+0x00000000u); // 8028B3BC
  cmps(c,0,(int32_t)c->r[6],0); // 8028B3C0
  if (!crb(c,2)) { goto L_8028B3D0; } // 8028B3C4
  c->lr=0x8028B3CCu; f_80160C90(c); // 8028B3C8
  goto L_8028B5F0; // 8028B3CC
L_8028B3D0:;
  c->r[4]=R16(c->r[29]+0x00000000u); // 8028B3D0
  c->r[5]=c->r[6]+0x0000003Eu; // 8028B3D4
  c->r[0]=0u+0x00000000u; // 8028B3D8
  cmps(c,0,(int32_t)c->r[4],0); // 8028B3DC
  W16(c->r[6]+0x0000003Cu,c->r[4]); // 8028B3E0
  if (crb(c,2)) { goto L_8028B3EC; } // 8028B3E4
  c->r[0]=c->r[0]|0x00000001u; // 8028B3E8
L_8028B3EC:;
  c->r[6]=R16(c->r[29]+0x00000002u); // 8028B3EC
  c->r[4]=c->r[29]+0x00000004u; // 8028B3F0
  cmps(c,0,(int32_t)c->r[6],0); // 8028B3F4
  W16(c->r[5]+0x00000000u,c->r[6]); // 8028B3F8
  if (crb(c,2)) { goto L_8028B404; } // 8028B3FC
  c->r[0]=c->r[0]|0x00000005u; // 8028B400
L_8028B404:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 8028B404
  cmps(c,0,(int32_t)c->r[6],0); // 8028B408
  W16(c->r[5]+0x00000002u,c->r[6]); // 8028B40C
  if (crb(c,2)) { goto L_8028B418; } // 8028B410
  c->r[0]=c->r[0]|0x00000002u; // 8028B414
L_8028B418:;
  c->r[6]=R16(c->r[4]+0x00000002u); // 8028B418
  cmps(c,0,(int32_t)c->r[6],0); // 8028B41C
  W16(c->r[5]+0x00000004u,c->r[6]); // 8028B420
  if (crb(c,2)) { goto L_8028B42C; } // 8028B424
  c->r[0]=c->r[0]|0x00000006u; // 8028B428
L_8028B42C:;
  c->r[6]=R16(c->r[4]+0x00000004u); // 8028B42C
  cmps(c,0,(int32_t)c->r[6],0); // 8028B430
  W16(c->r[5]+0x00000006u,c->r[6]); // 8028B434
  if (crb(c,2)) { goto L_8028B440; } // 8028B438
  c->r[0]=c->r[0]|0x00010000u; // 8028B43C
L_8028B440:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 8028B440
  cmps(c,0,(int32_t)c->r[6],0); // 8028B444
  W16(c->r[5]+0x00000008u,c->r[6]); // 8028B448
  if (crb(c,2)) { goto L_8028B454; } // 8028B44C
  c->r[0]=c->r[0]|0x00050000u; // 8028B450
L_8028B454:;
  c->r[6]=R16(c->r[4]+0x00000008u); // 8028B454
  cmps(c,0,(int32_t)c->r[6],0); // 8028B458
  W16(c->r[5]+0x0000000Au,c->r[6]); // 8028B45C
  if (crb(c,2)) { goto L_8028B468; } // 8028B460
  c->r[0]=c->r[0]|0x00020000u; // 8028B464
L_8028B468:;
  c->r[6]=R16(c->r[4]+0x0000000Au); // 8028B468
  cmps(c,0,(int32_t)c->r[6],0); // 8028B46C
  W16(c->r[5]+0x0000000Cu,c->r[6]); // 8028B470
  if (crb(c,2)) { goto L_8028B47C; } // 8028B474
  c->r[0]=c->r[0]|0x00060000u; // 8028B478
L_8028B47C:;
  c->r[6]=R16(c->r[4]+0x0000000Cu); // 8028B47C
  cmps(c,0,(int32_t)c->r[6],0); // 8028B480
  W16(c->r[5]+0x0000000Eu,c->r[6]); // 8028B484
  if (crb(c,2)) { goto L_8028B490; } // 8028B488
  c->r[0]=c->r[0]|0x00200000u; // 8028B48C
L_8028B490:;
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 8028B490
  cmps(c,0,(int32_t)c->r[6],0); // 8028B494
  W16(c->r[5]+0x00000010u,c->r[6]); // 8028B498
  if (crb(c,2)) { goto L_8028B4A4; } // 8028B49C
  c->r[0]=c->r[0]|0x00A00000u; // 8028B4A0
L_8028B4A4:;
  c->r[6]=R16(c->r[4]+0x00000010u); // 8028B4A4
  cmps(c,0,(int32_t)c->r[6],0); // 8028B4A8
  W16(c->r[5]+0x00000012u,c->r[6]); // 8028B4AC
  if (crb(c,2)) { goto L_8028B4B8; } // 8028B4B0
  c->r[0]=c->r[0]|0x00400000u; // 8028B4B4
L_8028B4B8:;
  c->r[6]=R16(c->r[4]+0x00000012u); // 8028B4B8
  cmps(c,0,(int32_t)c->r[6],0); // 8028B4BC
  W16(c->r[5]+0x00000014u,c->r[6]); // 8028B4C0
  if (crb(c,2)) { goto L_8028B4CC; } // 8028B4C4
  c->r[0]=c->r[0]|0x00C00000u; // 8028B4C8
L_8028B4CC:;
  c->r[6]=R16(c->r[4]+0x00000014u); // 8028B4CC
  cmps(c,0,(int32_t)c->r[6],0); // 8028B4D0
  W16(c->r[5]+0x00000016u,c->r[6]); // 8028B4D4
  if (crb(c,2)) { goto L_8028B4E0; } // 8028B4D8
  c->r[0]=c->r[0]|0x04000000u; // 8028B4DC
L_8028B4E0:;
  c->r[6]=R16(c->r[4]+0x00000016u); // 8028B4E0
  cmps(c,0,(int32_t)c->r[6],0); // 8028B4E4
  W16(c->r[5]+0x00000018u,c->r[6]); // 8028B4E8
  if (crb(c,2)) { goto L_8028B4F4; } // 8028B4EC
  c->r[0]=c->r[0]|0x14000000u; // 8028B4F0
L_8028B4F4:;
  c->r[6]=R16(c->r[4]+0x00000018u); // 8028B4F4
  cmps(c,0,(int32_t)c->r[6],0); // 8028B4F8
  W16(c->r[5]+0x0000001Au,c->r[6]); // 8028B4FC
  if (crb(c,2)) { goto L_8028B508; } // 8028B500
  c->r[0]=c->r[0]|0x08000000u; // 8028B504
L_8028B508:;
  c->r[6]=R16(c->r[4]+0x0000001Au); // 8028B508
  cmps(c,0,(int32_t)c->r[6],0); // 8028B50C
  W16(c->r[5]+0x0000001Cu,c->r[6]); // 8028B510
  if (crb(c,2)) { goto L_8028B51C; } // 8028B514
  c->r[0]=c->r[0]|0x18000000u; // 8028B518
L_8028B51C:;
  c->r[6]=R16(c->r[4]+0x0000001Cu); // 8028B51C
  cmps(c,0,(int32_t)c->r[6],0); // 8028B520
  W16(c->r[5]+0x0000001Eu,c->r[6]); // 8028B524
  if (crb(c,2)) { goto L_8028B530; } // 8028B528
  c->r[0]=c->r[0]|0x00000008u; // 8028B52C
L_8028B530:;
  c->r[6]=R16(c->r[4]+0x0000001Eu); // 8028B530
  cmps(c,0,(int32_t)c->r[6],0); // 8028B534
  W16(c->r[5]+0x00000020u,c->r[6]); // 8028B538
  if (crb(c,2)) { goto L_8028B544; } // 8028B53C
  c->r[0]=c->r[0]|0x00000018u; // 8028B540
L_8028B544:;
  c->r[6]=R16(c->r[4]+0x00000020u); // 8028B544
  cmps(c,0,(int32_t)c->r[6],0); // 8028B548
  W16(c->r[5]+0x00000022u,c->r[6]); // 8028B54C
  if (crb(c,2)) { goto L_8028B558; } // 8028B550
  c->r[0]=c->r[0]|0x00080000u; // 8028B554
L_8028B558:;
  c->r[6]=R16(c->r[4]+0x00000022u); // 8028B558
  cmps(c,0,(int32_t)c->r[6],0); // 8028B55C
  W16(c->r[5]+0x00000024u,c->r[6]); // 8028B560
  if (crb(c,2)) { goto L_8028B56C; } // 8028B564
  c->r[0]=c->r[0]|0x00180000u; // 8028B568
L_8028B56C:;
  c->r[6]=R16(c->r[4]+0x00000024u); // 8028B56C
  cmps(c,0,(int32_t)c->r[6],0); // 8028B570
  W16(c->r[5]+0x00000026u,c->r[6]); // 8028B574
  if (crb(c,2)) { goto L_8028B580; } // 8028B578
  c->r[0]=c->r[0]|0x01000000u; // 8028B57C
L_8028B580:;
  c->r[6]=R16(c->r[4]+0x00000026u); // 8028B580
  cmps(c,0,(int32_t)c->r[6],0); // 8028B584
  W16(c->r[5]+0x00000028u,c->r[6]); // 8028B588
  if (crb(c,2)) { goto L_8028B594; } // 8028B58C
  c->r[0]=c->r[0]|0x03000000u; // 8028B590
L_8028B594:;
  c->r[6]=R16(c->r[4]+0x00000028u); // 8028B594
  cmps(c,0,(int32_t)c->r[6],0); // 8028B598
  W16(c->r[5]+0x0000002Au,c->r[6]); // 8028B59C
  if (crb(c,2)) { goto L_8028B5A8; } // 8028B5A0
  c->r[0]=c->r[0]|0x20000000u; // 8028B5A4
L_8028B5A8:;
  c->r[4]=R16(c->r[4]+0x0000002Au); // 8028B5A8
  cmps(c,0,(int32_t)c->r[4],0); // 8028B5AC
  W16(c->r[5]+0x0000002Cu,c->r[4]); // 8028B5B0
  if (crb(c,2)) { goto L_8028B5BC; } // 8028B5B4
  c->r[0]=c->r[0]|0x60000000u; // 8028B5B8
L_8028B5BC:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028B5BC
  cmps(c,0,(int32_t)c->r[31],0); // 8028B5C0
  W32(c->r[4]+0x00000034u,c->r[0]); // 8028B5C4
  if (crb(c,2)) { goto L_8028B5E0; } // 8028B5C8
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028B5CC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8028B5D0
  c->r[0]=c->r[0]|0x00000012u; // 8028B5D4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8028B5D8
  goto L_8028B5EC; // 8028B5DC
L_8028B5E0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8028B5E0
  c->r[0]=c->r[0]|0x00000012u; // 8028B5E4
  W32(c->r[30]+0x00000004u,c->r[0]); // 8028B5E8
L_8028B5EC:;
  c->lr=0x8028B5F0u; f_80160C90(c); // 8028B5EC
L_8028B5F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028B5F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028B5F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028B5F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028B5FC
  c->lr=c->r[0]; // 8028B600
  c->r[1]=c->r[1]+0x00000020u; // 8028B604
  return; // 8028B608
}

// SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl
void f_8028B60C(Ctx* __restrict c) {
  trace_call(0x8028B60Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028B60C
  c->r[0]=c->lr; // 8028B610
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028B614
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028B618
  c->r[31]=c->r[4]|c->r[4]; // 8028B61C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028B620
  c->r[30]=c->r[3]|c->r[3]; // 8028B624
  c->lr=0x8028B62Cu; f_80160C68(c); // 8028B628
  c->r[5]=R32(c->r[30]+0x00000000u); // 8028B62C
  cmps(c,0,(int32_t)c->r[5],0); // 8028B630
  if (!crb(c,2)) { goto L_8028B640; } // 8028B634
  c->lr=0x8028B63Cu; f_80160C90(c); // 8028B638
  goto L_8028B6D4; // 8028B63C
L_8028B640:;
  cmps(c,0,(int32_t)c->r[31],2); // 8028B640
  if (crb(c,2)) { goto L_8028B684; } // 8028B644
  if (!crb(c,0)) { goto L_8028B65C; } // 8028B648
  cmps(c,0,(int32_t)c->r[31],0); // 8028B64C
  if (crb(c,2)) { goto L_8028B66C; } // 8028B650
  if (!crb(c,0)) { goto L_8028B678; } // 8028B654
  goto L_8028B6C4; // 8028B658
L_8028B65C:;
  cmps(c,0,(int32_t)c->r[31],4); // 8028B65C
  if (crb(c,2)) { goto L_8028B6B0; } // 8028B660
  if (!crb(c,0)) { goto L_8028B6C4; } // 8028B664
  goto L_8028B698; // 8028B668
L_8028B66C:;
  c->r[0]=0u+0x00000002u; // 8028B66C
  W16(c->r[5]+0x00000030u,c->r[0]); // 8028B670
  goto L_8028B6C4; // 8028B674
L_8028B678:;
  c->r[0]=0u+0x00000001u; // 8028B678
  W16(c->r[5]+0x00000030u,c->r[0]); // 8028B67C
  goto L_8028B6C4; // 8028B680
L_8028B684:;
  c->r[0]=0u+0x00000000u; // 8028B684
  W16(c->r[5]+0x00000030u,c->r[0]); // 8028B688
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028B68C
  W16(c->r[4]+0x00000032u,c->r[0]); // 8028B690
  goto L_8028B6C4; // 8028B694
L_8028B698:;
  c->r[4]=0u+0x00000000u; // 8028B698
  c->r[0]=0u+0x00000001u; // 8028B69C
  W16(c->r[5]+0x00000030u,c->r[4]); // 8028B6A0
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028B6A4
  W16(c->r[4]+0x00000032u,c->r[0]); // 8028B6A8
  goto L_8028B6C4; // 8028B6AC
L_8028B6B0:;
  c->r[4]=0u+0x00000000u; // 8028B6B0
  c->r[0]=0u+0x00000002u; // 8028B6B4
  W16(c->r[5]+0x00000030u,c->r[4]); // 8028B6B8
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028B6BC
  W16(c->r[4]+0x00000032u,c->r[0]); // 8028B6C0
L_8028B6C4:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8028B6C4
  c->r[0]=c->r[0]|0x00000001u; // 8028B6C8
  W32(c->r[30]+0x00000004u,c->r[0]); // 8028B6CC
  c->lr=0x8028B6D4u; f_80160C90(c); // 8028B6D0
L_8028B6D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028B6D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028B6D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028B6DC
  c->lr=c->r[0]; // 8028B6E0
  c->r[1]=c->r[1]+0x00000010u; // 8028B6E4
  return; // 8028B6E8
}

// SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX
void f_8028B6EC(Ctx* __restrict c) {
  trace_call(0x8028B6ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028B6EC
  c->r[0]=c->lr; // 8028B6F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028B6F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028B6F8
  c->r[31]=c->r[3]|c->r[3]; // 8028B6FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028B700
  c->r[30]=c->r[4]|c->r[4]; // 8028B704
  c->lr=0x8028B70Cu; f_80160C68(c); // 8028B708
  c->r[5]=R32(c->r[31]+0x00000000u); // 8028B70C
  cmps(c,0,(int32_t)c->r[5],0); // 8028B710
  if (!crb(c,2)) { goto L_8028B720; } // 8028B714
  c->lr=0x8028B71Cu; f_80160C90(c); // 8028B718
  goto L_8028B8C0; // 8028B71C
L_8028B720:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 8028B720
  c->r[4]=c->r[5]+0x00000104u; // 8028B724
  c->r[6]=0u+0x00000000u; // 8028B728
  cmps(c,0,(int32_t)c->r[0],0); // 8028B72C
  W16(c->r[5]+0x00000102u,c->r[0]); // 8028B730
  if (crb(c,2)) { goto L_8028B73C; } // 8028B734
  c->r[6]=c->r[6]|0x00000001u; // 8028B738
L_8028B73C:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 8028B73C
  c->r[5]=c->r[30]+0x00000004u; // 8028B740
  cmps(c,0,(int32_t)c->r[0],0); // 8028B744
  W16(c->r[4]+0x00000000u,c->r[0]); // 8028B748
  if (crb(c,2)) { goto L_8028B758; } // 8028B74C
  c->r[0]=c->r[6]|0x00000002u; // 8028B750
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B754
L_8028B758:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 8028B758
  cmps(c,0,(int32_t)c->r[0],0); // 8028B75C
  W16(c->r[4]+0x00000002u,c->r[0]); // 8028B760
  if (crb(c,2)) { goto L_8028B770; } // 8028B764
  c->r[0]=c->r[6]|0x00000004u; // 8028B768
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B76C
L_8028B770:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 8028B770
  cmps(c,0,(int32_t)c->r[0],0); // 8028B774
  W16(c->r[4]+0x00000004u,c->r[0]); // 8028B778
  if (crb(c,2)) { goto L_8028B788; } // 8028B77C
  c->r[0]=c->r[6]|0x00000008u; // 8028B780
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B784
L_8028B788:;
  c->r[0]=R16(c->r[5]+0x00000004u); // 8028B788
  cmps(c,0,(int32_t)c->r[0],0); // 8028B78C
  W16(c->r[4]+0x00000006u,c->r[0]); // 8028B790
  if (crb(c,2)) { goto L_8028B7A0; } // 8028B794
  c->r[0]=c->r[6]|0x00000010u; // 8028B798
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B79C
L_8028B7A0:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 8028B7A0
  cmps(c,0,(int32_t)c->r[0],0); // 8028B7A4
  W16(c->r[4]+0x00000008u,c->r[0]); // 8028B7A8
  if (crb(c,2)) { goto L_8028B7B8; } // 8028B7AC
  c->r[0]=c->r[6]|0x00000020u; // 8028B7B0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B7B4
L_8028B7B8:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 8028B7B8
  cmps(c,0,(int32_t)c->r[0],0); // 8028B7BC
  W16(c->r[4]+0x0000000Au,c->r[0]); // 8028B7C0
  if (crb(c,2)) { goto L_8028B7D0; } // 8028B7C4
  c->r[0]=c->r[6]|0x00000040u; // 8028B7C8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B7CC
L_8028B7D0:;
  c->r[0]=R16(c->r[5]+0x0000000Au); // 8028B7D0
  cmps(c,0,(int32_t)c->r[0],0); // 8028B7D4
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 8028B7D8
  if (crb(c,2)) { goto L_8028B7E8; } // 8028B7DC
  c->r[0]=c->r[6]|0x00000080u; // 8028B7E0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B7E4
L_8028B7E8:;
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 8028B7E8
  cmps(c,0,(int32_t)c->r[0],0); // 8028B7EC
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 8028B7F0
  if (crb(c,2)) { goto L_8028B800; } // 8028B7F4
  c->r[0]=c->r[6]|0x00000100u; // 8028B7F8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B7FC
L_8028B800:;
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 8028B800
  cmps(c,0,(int32_t)c->r[0],0); // 8028B804
  W16(c->r[4]+0x00000010u,c->r[0]); // 8028B808
  if (crb(c,2)) { goto L_8028B818; } // 8028B80C
  c->r[0]=c->r[6]|0x00000200u; // 8028B810
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B814
L_8028B818:;
  c->r[0]=R16(c->r[5]+0x00000010u); // 8028B818
  cmps(c,0,(int32_t)c->r[0],0); // 8028B81C
  W16(c->r[4]+0x00000012u,c->r[0]); // 8028B820
  if (crb(c,2)) { goto L_8028B830; } // 8028B824
  c->r[0]=c->r[6]|0x00000400u; // 8028B828
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B82C
L_8028B830:;
  c->r[0]=R16(c->r[5]+0x00000012u); // 8028B830
  cmps(c,0,(int32_t)c->r[0],0); // 8028B834
  W16(c->r[4]+0x00000014u,c->r[0]); // 8028B838
  if (crb(c,2)) { goto L_8028B848; } // 8028B83C
  c->r[0]=c->r[6]|0x00000800u; // 8028B840
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B844
L_8028B848:;
  c->r[0]=R16(c->r[5]+0x00000014u); // 8028B848
  cmps(c,0,(int32_t)c->r[0],0); // 8028B84C
  W16(c->r[4]+0x00000016u,c->r[0]); // 8028B850
  if (crb(c,2)) { goto L_8028B860; } // 8028B854
  c->r[0]=c->r[6]|0x00001000u; // 8028B858
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B85C
L_8028B860:;
  c->r[0]=R16(c->r[5]+0x00000016u); // 8028B860
  cmps(c,0,(int32_t)c->r[0],0); // 8028B864
  W16(c->r[4]+0x00000018u,c->r[0]); // 8028B868
  if (crb(c,2)) { goto L_8028B878; } // 8028B86C
  c->r[0]=c->r[6]|0x00002000u; // 8028B870
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B874
L_8028B878:;
  c->r[0]=R16(c->r[5]+0x00000018u); // 8028B878
  cmps(c,0,(int32_t)c->r[0],0); // 8028B87C
  W16(c->r[4]+0x0000001Au,c->r[0]); // 8028B880
  if (crb(c,2)) { goto L_8028B890; } // 8028B884
  c->r[0]=c->r[6]|0x00004000u; // 8028B888
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B88C
L_8028B890:;
  c->r[0]=R16(c->r[5]+0x0000001Au); // 8028B890
  cmps(c,0,(int32_t)c->r[0],0); // 8028B894
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 8028B898
  if (crb(c,2)) { goto L_8028B8A8; } // 8028B89C
  c->r[0]=c->r[6]|0x00008000u; // 8028B8A0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8028B8A4
L_8028B8A8:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8028B8A8
  W16(c->r[4]+0x00000100u,c->r[6]); // 8028B8AC
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028B8B0
  c->r[0]=c->r[0]|0x03000000u; // 8028B8B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028B8B8
  c->lr=0x8028B8C0u; f_80160C90(c); // 8028B8BC
L_8028B8C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028B8C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028B8C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028B8C8
  c->lr=c->r[0]; // 8028B8CC
  c->r[1]=c->r[1]+0x00000010u; // 8028B8D0
  return; // 8028B8D4
}

// SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse
void f_8028B8D8(Ctx* __restrict c) {
  trace_call(0x8028B8D8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028B8D8
  c->r[0]=c->lr; // 8028B8DC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8028B8E0
  c->r[11]=c->r[1]+0x000000A0u; // 8028B8E4
  c->lr=0x8028B8ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028B8E8
  c->r[31]=c->r[3]|c->r[3]; // 8028B8EC
  c->r[26]=c->r[4]|c->r[4]; // 8028B8F0
  if (!crb(c,6)) { goto L_8028B918; } // 8028B8F4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8028B8F8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8028B8FC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8028B900
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8028B904
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8028B908
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8028B90C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8028B910
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8028B914
L_8028B918:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8028B918
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8028B91C
  W32(c->r[1]+0x00000010u,c->r[5]); // 8028B920
  W32(c->r[1]+0x00000014u,c->r[6]); // 8028B924
  W32(c->r[1]+0x00000018u,c->r[7]); // 8028B928
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8028B92C
  W32(c->r[1]+0x00000020u,c->r[9]); // 8028B930
  W32(c->r[1]+0x00000024u,c->r[10]); // 8028B934
  c->lr=0x8028B93Cu; f_80160C68(c); // 8028B938
  c->r[0]=R32(c->r[31]+0x00000000u); // 8028B93C
  c->r[30]=c->r[3]|c->r[3]; // 8028B940
  cmps(c,0,(int32_t)c->r[0],0); // 8028B944
  if (!crb(c,2)) { goto L_8028B954; } // 8028B948
  c->lr=0x8028B950u; f_80160C90(c); // 8028B94C
  goto L_8028BA44; // 8028B950
L_8028B954:;
  cmpu(c,0,c->r[26],0x00000001u); // 8028B954
  if (!crb(c,2)) { goto L_8028B964; } // 8028B958
  c->r[27]=0u+0x00000002u; // 8028B95C
  goto L_8028B97C; // 8028B960
L_8028B964:;
  cmpu(c,0,c->r[26],0x00000002u); // 8028B964
  if (!crb(c,2)) { goto L_8028B974; } // 8028B968
  c->r[27]=0u+0x00000005u; // 8028B96C
  goto L_8028B97C; // 8028B970
L_8028B974:;
  c->lr=0x8028B978u; f_80160C90(c); // 8028B974
  goto L_8028BA44; // 8028B978
L_8028B97C:;
  c->r[3]=c->r[1]+0x000000A8u; // 8028B97C
  c->r[0]=c->r[1]+0x00000008u; // 8028B980
  c->r[4]=0u+0x02000000u; // 8028B984
  W32(c->r[1]+0x00000078u,c->r[3]); // 8028B988
  c->r[29]=c->r[1]+0x00000068u; // 8028B98C
  c->r[28]=0u+0x00000000u; // 8028B990
  W32(c->r[1]+0x00000074u,c->r[4]); // 8028B994
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8028B998
  goto L_8028B9BC; // 8028B99C
L_8028B9A0:;
  c->r[3]=c->r[1]+0x00000074u; // 8028B9A0
  c->r[4]=0u+0x00000001u; // 8028B9A4
  c->lr=0x8028B9ACu; f_801855A4(c); // 8028B9A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028B9AC
  c->r[28]=c->r[28]+0x00000001u; // 8028B9B0
  W16(c->r[29]+0x00000000u,c->r[0]); // 8028B9B4
  c->r[29]=c->r[29]+0x00000002u; // 8028B9B8
L_8028B9BC:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 8028B9BC
  if (crb(c,0)) { IRQCHK(c); goto L_8028B9A0; } // 8028B9C0
  cmpu(c,0,c->r[26],0x00000001u); // 8028B9C4
  if (!crb(c,2)) { goto L_8028B9F4; } // 8028B9C8
  c->r[4]=R16(c->r[1]+0x00000068u); // 8028B9CC
  c->r[3]=R32(c->r[31]+0x00000000u); // 8028B9D0
  c->r[0]=R16(c->r[1]+0x0000006Au); // 8028B9D4
  W16(c->r[3]+0x00000140u,c->r[4]); // 8028B9D8
  c->r[3]=R32(c->r[31]+0x00000000u); // 8028B9DC
  W16(c->r[3]+0x00000142u,c->r[0]); // 8028B9E0
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028B9E4
  c->r[0]=c->r[0]|0x20000000u; // 8028B9E8
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028B9EC
  goto L_8028BA3C; // 8028B9F0
L_8028B9F4:;
  c->r[4]=R16(c->r[1]+0x00000068u); // 8028B9F4
  c->r[3]=R32(c->r[31]+0x00000000u); // 8028B9F8
  c->r[0]=R16(c->r[1]+0x0000006Au); // 8028B9FC
  W16(c->r[3]+0x00000146u,c->r[4]); // 8028BA00
  c->r[5]=R16(c->r[1]+0x0000006Cu); // 8028BA04
  c->r[3]=R32(c->r[31]+0x00000000u); // 8028BA08
  c->r[4]=R16(c->r[1]+0x0000006Eu); // 8028BA0C
  W16(c->r[3]+0x00000148u,c->r[0]); // 8028BA10
  c->r[0]=R16(c->r[1]+0x00000070u); // 8028BA14
  c->r[3]=R32(c->r[31]+0x00000000u); // 8028BA18
  W16(c->r[3]+0x0000014Au,c->r[5]); // 8028BA1C
  c->r[3]=R32(c->r[31]+0x00000000u); // 8028BA20
  W16(c->r[3]+0x0000014Cu,c->r[4]); // 8028BA24
  c->r[3]=R32(c->r[31]+0x00000000u); // 8028BA28
  W16(c->r[3]+0x0000014Eu,c->r[0]); // 8028BA2C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028BA30
  c->r[0]=c->r[0]|0x40000000u; // 8028BA34
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028BA38
L_8028BA3C:;
  c->r[3]=c->r[30]|c->r[30]; // 8028BA3C
  c->lr=0x8028BA44u; f_80160C90(c); // 8028BA40
L_8028BA44:;
  c->r[11]=c->r[1]+0x000000A0u; // 8028BA44
  c->lr=0x8028BA4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028BA48
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8028BA4C
  c->lr=c->r[0]; // 8028BA50
  c->r[1]=c->r[1]+0x000000A0u; // 8028BA54
  return; // 8028BA58
}

// GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_8028BA5C(Ctx* __restrict c) {
  trace_call(0x8028BA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028BA5C
  c->r[0]=c->lr; // 8028BA60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028BA64
  c->r[0]=R8(c->r[13]+0xFFFFA468u); // 8028BA68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8028BA6C
  if (!crb(c,2)) { goto L_8028BAE8; } // 8028BA70
  c->r[6]=0u+0x80420000u; // 8028BA74
  c->r[0]=0u+0x00000000u; // 8028BA78
  c->r[3]=c->r[6]+0xFFFFAA74u; // 8028BA7C
  c->r[4]=0u+0x80290000u; // 8028BA80
  W32(c->r[3]+0x00000004u,c->r[0]); // 8028BA84
  c->r[9]=c->r[3]+0x00000004u; // 8028BA88
  c->r[8]=c->r[3]+0x00000010u; // 8028BA8C
  c->r[7]=c->r[3]+0x0000001Cu; // 8028BA90
  W32(c->r[3]+0x00000008u,c->r[0]); // 8028BA94
  c->r[5]=0u+0x80420000u; // 8028BA98
  c->r[4]=c->r[4]+0xFFFFBB00u; // 8028BA9C
  W32(c->r[3]+0x00000010u,c->r[0]); // 8028BAA0
  c->r[5]=c->r[5]+0xFFFFAA68u; // 8028BAA4
  W32(c->r[3]+0x00000014u,c->r[0]); // 8028BAA8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8028BAAC
  W32(c->r[3]+0x00000020u,c->r[0]); // 8028BAB0
  W32(c->r[6]+0xFFFFAA74u,c->r[0]); // 8028BAB4
  W32(c->r[3]+0x00000004u,c->r[9]); // 8028BAB8
  W32(c->r[3]+0x00000008u,c->r[9]); // 8028BABC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8028BAC0
  W32(c->r[3]+0x00000010u,c->r[8]); // 8028BAC4
  W32(c->r[3]+0x00000014u,c->r[8]); // 8028BAC8
  W32(c->r[3]+0x00000018u,c->r[0]); // 8028BACC
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 8028BAD0
  W32(c->r[3]+0x00000020u,c->r[7]); // 8028BAD4
  W8(c->r[3]+0x00000024u,c->r[0]); // 8028BAD8
  c->lr=0x8028BAE0u; f_8018566C(c); // 8028BADC
  c->r[0]=0u+0x00000001u; // 8028BAE0
  W8(c->r[13]+0xFFFFA468u,c->r[0]); // 8028BAE4
L_8028BAE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028BAE8
  c->r[3]=0u+0x80420000u; // 8028BAEC
  c->r[3]=c->r[3]+0xFFFFAA74u; // 8028BAF0
  c->lr=c->r[0]; // 8028BAF4
  c->r[1]=c->r[1]+0x00000010u; // 8028BAF8
  return; // 8028BAFC
}

// __dt__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_8028BB00(Ctx* __restrict c) {
  trace_call(0x8028BB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028BB00
  c->r[0]=c->lr; // 8028BB04
  cmps(c,0,(int32_t)c->r[3],0); // 8028BB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028BB0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028BB10
  c->r[31]=c->r[4]|c->r[4]; // 8028BB14
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028BB18
  c->r[30]=c->r[3]|c->r[3]; // 8028BB1C
  if (crb(c,2)) { goto L_8028BB68; } // 8028BB20
  c->r[3]=addc(c,c->r[3],0x00000018u,0); cr0(c,c->r[3]); // 8028BB24
  if (crb(c,2)) { goto L_8028BB34; } // 8028BB28
  c->r[4]=0u+0x00000000u; // 8028BB2C
  c->lr=0x8028BB34u; f_802A7B78(c); // 8028BB30
L_8028BB34:;
  c->r[3]=addc(c,c->r[30],0x0000000Cu,0); cr0(c,c->r[3]); // 8028BB34
  if (crb(c,2)) { goto L_8028BB44; } // 8028BB38
  c->r[4]=0u+0x00000000u; // 8028BB3C
  c->lr=0x8028BB44u; f_802A7B78(c); // 8028BB40
L_8028BB44:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028BB44
  if (crb(c,2)) { goto L_8028BB58; } // 8028BB48
  c->r[3]=c->r[30]|c->r[30]; // 8028BB4C
  c->r[4]=0u+0x00000000u; // 8028BB50
  c->lr=0x8028BB58u; f_802A7B78(c); // 8028BB54
L_8028BB58:;
  cmps(c,0,(int32_t)c->r[31],0); // 8028BB58
  if (!crb(c,1)) { goto L_8028BB68; } // 8028BB5C
  c->r[3]=c->r[30]|c->r[30]; // 8028BB60
  c->lr=0x8028BB68u; f_800D6AD0(c); // 8028BB64
L_8028BB68:;
  c->r[3]=c->r[30]|c->r[30]; // 8028BB68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028BB6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028BB70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028BB74
  c->lr=c->r[0]; // 8028BB78
  c->r[1]=c->r[1]+0x00000010u; // 8028BB7C
  return; // 8028BB80
}

// fn_8028BB84
void f_8028BB84(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x00000010u; // 8028BB84
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 8028BB88
  return; // 8028BB8C
}

// fn_8028BB90
void f_8028BB90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028BB90
  c->r[0]=c->lr; // 8028BB94
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028BB98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028BB9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028BBA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028BBA4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8028BBA8
  c->r[28]=c->r[3]|c->r[3]; // 8028BBAC
  c->r[0]=R8(c->r[3]+0x00000024u); // 8028BBB0
  cmps(c,0,(int32_t)c->r[0],0); // 8028BBB4
  if (!crb(c,2)) { goto L_8028BC2C; } // 8028BBB8
  c->r[6]=0u+0x38E40000u; // 8028BBBC
  c->r[30]=c->r[4]|c->r[4]; // 8028BBC0
  c->r[0]=c->r[6]+0xFFFF8E39u; // 8028BBC4
  c->r[29]=0u+0x00000000u; // 8028BBC8
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 8028BBCC
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; cr0(c,c->r[0]); // 8028BBD0
  W32(c->r[3]+0x00000028u,c->r[0]); // 8028BBD4
  if (crb(c,2)) { goto L_8028BC24; } // 8028BBD8
  c->r[31]=c->r[3]+0x00000010u; // 8028BBDC
  goto L_8028BC18; // 8028BBE0
L_8028BBE4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028BBE4
  c->r[5]=c->r[30]|c->r[30]; // 8028BBE8
  if (crb(c,2)) { goto L_8028BBFC; } // 8028BBEC
  c->r[3]=c->r[30]|c->r[30]; // 8028BBF0
  c->lr=0x8028BBF8u; f_80288D9C(c); // 8028BBF4
  c->r[5]=c->r[3]|c->r[3]; // 8028BBF8
L_8028BBFC:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 8028BBFC
  c->r[3]=c->r[28]+0x0000000Cu; // 8028BC00
  c->r[4]=c->r[1]+0x00000008u; // 8028BC04
  c->r[5]=c->r[5]+0x00000040u; // 8028BC08
  c->lr=0x8028BC10u; f_802A7C88(c); // 8028BC0C
  c->r[30]=c->r[30]+0x00000048u; // 8028BC10
  c->r[29]=c->r[29]+0x00000001u; // 8028BC14
L_8028BC18:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 8028BC18
  cmpu(c,0,c->r[29],c->r[0]); // 8028BC1C
  if (crb(c,0)) { IRQCHK(c); goto L_8028BBE4; } // 8028BC20
L_8028BC24:;
  c->r[0]=0u+0x00000001u; // 8028BC24
  W8(c->r[28]+0x00000024u,c->r[0]); // 8028BC28
L_8028BC2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028BC2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028BC30
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028BC34
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028BC38
  c->r[28]=R32(c->r[1]+0x00000010u); // 8028BC3C
  c->lr=c->r[0]; // 8028BC40
  c->r[1]=c->r[1]+0x00000020u; // 8028BC44
  return; // 8028BC48
}

// Shutdown__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_8028BC4C(Ctx* __restrict c) {
  trace_call(0x8028BC4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028BC4C
  c->r[0]=c->lr; // 8028BC50
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028BC54
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8028BC58
  c->r[31]=c->r[3]|c->r[3]; // 8028BC5C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8028BC60
  W32(c->r[1]+0x00000024u,c->r[29]); // 8028BC64
  W32(c->r[1]+0x00000020u,c->r[28]); // 8028BC68
  c->r[0]=R8(c->r[3]+0x00000024u); // 8028BC6C
  cmps(c,0,(int32_t)c->r[0],0); // 8028BC70
  if (!crb(c,2)) { goto L_8028BD74; } // 8028BC74
  goto L_8028BEC0; // 8028BC78
  goto L_8028BD74; // 8028BC7C
L_8028BC80:;
  c->r[5]=R32(c->r[31]+0x00000004u); // 8028BC80
  c->r[3]=c->r[31]|c->r[31]; // 8028BC84
  c->r[4]=c->r[1]+0x00000018u; // 8028BC88
  W32(c->r[1]+0x00000018u,c->r[5]); // 8028BC8C
  c->r[28]=c->r[5]+0xFFFFFFC0u; // 8028BC90
  c->lr=0x8028BC98u; f_802A7BFC(c); // 8028BC94
  c->r[3]=R32(c->r[28]+0x00000000u); // 8028BC98
  cmps(c,0,(int32_t)c->r[3],0); // 8028BC9C
  if (crb(c,2)) { goto L_8028BD74; } // 8028BCA0
  c->r[4]=0u+0x00000000u; // 8028BCA4
  if (crb(c,2)) { goto L_8028BCBC; } // 8028BCA8
  c->r[0]=R16(c->r[3]+0x00000038u); // 8028BCAC
  cmpu(c,0,c->r[0],0x00000001u); // 8028BCB0
  if (!crb(c,2)) { goto L_8028BCBC; } // 8028BCB4
  c->r[4]=0u+0x00000001u; // 8028BCB8
L_8028BCBC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8028BCBC
  if (crb(c,2)) { goto L_8028BCCC; } // 8028BCC0
  c->r[4]=0u+0x00000000u; // 8028BCC4
  c->lr=0x8028BCCCu; f_8017B90C(c); // 8028BCC8
L_8028BCCC:;
  c->r[12]=R32(c->r[28]+0x00000038u); // 8028BCCC
  cmps(c,0,(int32_t)c->r[12],0); // 8028BCD0
  if (crb(c,2)) { goto L_8028BCEC; } // 8028BCD4
  c->r[3]=c->r[28]|c->r[28]; // 8028BCD8
  c->r[5]=R32(c->r[28]+0x0000003Cu); // 8028BCDC
  c->r[4]=0u+0x00000000u; // 8028BCE0
  c->ctr=c->r[12]; // 8028BCE4
  if (true) { c->lr=0x8028BCECu; dispatch(c,c->ctr); } // 8028BCE8
L_8028BCEC:;
  c->lr=0x8028BCF0u; f_80160C68(c); // 8028BCEC
  c->r[0]=R32(c->r[28]+0x00000000u); // 8028BCF0
  c->r[30]=c->r[3]|c->r[3]; // 8028BCF4
  cmps(c,0,(int32_t)c->r[0],0); // 8028BCF8
  if (crb(c,2)) { goto L_8028BD08; } // 8028BCFC
  c->r[3]=c->r[0]|c->r[0]; // 8028BD00
  c->lr=0x8028BD08u; f_80178BA4(c); // 8028BD04
L_8028BD08:;
  c->r[3]=c->r[28]|c->r[28]; // 8028BD08
  c->r[4]=0u+0xFFFFFFFFu; // 8028BD0C
  c->lr=0x8028BD14u; f_80288DE0(c); // 8028BD10
  c->lr=0x8028BD18u; f_80160C68(c); // 8028BD14
  c->r[0]=R8(c->r[28]+0x0000001Du); // 8028BD18
  c->r[29]=c->r[3]|c->r[3]; // 8028BD1C
  cmps(c,0,(int32_t)c->r[0],0); // 8028BD20
  if (crb(c,2)) { goto L_8028BD3C; } // 8028BD24
  c->r[28]=c->r[28]+0x00000040u; // 8028BD28
  c->r[3]=c->r[31]+0x00000018u; // 8028BD2C
  c->r[4]=c->r[28]|c->r[28]; // 8028BD30
  c->lr=0x8028BD38u; f_802A7CB4(c); // 8028BD34
  goto L_8028BD4C; // 8028BD38
L_8028BD3C:;
  c->r[28]=c->r[28]+0x00000040u; // 8028BD3C
  c->r[3]=c->r[31]|c->r[31]; // 8028BD40
  c->r[4]=c->r[28]|c->r[28]; // 8028BD44
  c->lr=0x8028BD4Cu; f_802A7CB4(c); // 8028BD48
L_8028BD4C:;
  c->r[0]=c->r[31]+0x00000010u; // 8028BD4C
  c->r[5]=c->r[28]|c->r[28]; // 8028BD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028BD54
  c->r[3]=c->r[31]+0x0000000Cu; // 8028BD58
  c->r[4]=c->r[1]+0x00000014u; // 8028BD5C
  c->lr=0x8028BD64u; f_802A7C88(c); // 8028BD60
  c->r[3]=c->r[29]|c->r[29]; // 8028BD64
  c->lr=0x8028BD6Cu; f_80160C90(c); // 8028BD68
  c->r[3]=c->r[30]|c->r[30]; // 8028BD6C
  c->lr=0x8028BD74u; f_80160C90(c); // 8028BD70
L_8028BD74:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8028BD74
  cmps(c,0,(int32_t)c->r[0],0); // 8028BD78
  if (!crb(c,2)) { IRQCHK(c); goto L_8028BC80; } // 8028BD7C
  goto L_8028BE7C; // 8028BD80
L_8028BD84:;
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 8028BD84
  c->r[3]=c->r[31]|c->r[31]; // 8028BD88
  c->r[0]=R32(c->r[31]+0x00000004u); // 8028BD8C
  c->r[4]=c->r[1]+0x00000010u; // 8028BD90
  c->r[28]=c->r[5]+0xFFFFFFC0u; // 8028BD94
  W32(c->r[1]+0x00000010u,c->r[0]); // 8028BD98
  c->lr=0x8028BDA0u; f_802A7BFC(c); // 8028BD9C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8028BDA0
  cmps(c,0,(int32_t)c->r[3],0); // 8028BDA4
  if (crb(c,2)) { goto L_8028BE7C; } // 8028BDA8
  c->r[4]=0u+0x00000000u; // 8028BDAC
  if (crb(c,2)) { goto L_8028BDC4; } // 8028BDB0
  c->r[0]=R16(c->r[3]+0x00000038u); // 8028BDB4
  cmpu(c,0,c->r[0],0x00000001u); // 8028BDB8
  if (!crb(c,2)) { goto L_8028BDC4; } // 8028BDBC
  c->r[4]=0u+0x00000001u; // 8028BDC0
L_8028BDC4:;
  cmps(c,0,(int32_t)c->r[4],0); // 8028BDC4
  if (crb(c,2)) { goto L_8028BDD4; } // 8028BDC8
  c->r[4]=0u+0x00000000u; // 8028BDCC
  c->lr=0x8028BDD4u; f_8017B90C(c); // 8028BDD0
L_8028BDD4:;
  c->r[12]=R32(c->r[28]+0x00000038u); // 8028BDD4
  cmps(c,0,(int32_t)c->r[12],0); // 8028BDD8
  if (crb(c,2)) { goto L_8028BDF4; } // 8028BDDC
  c->r[3]=c->r[28]|c->r[28]; // 8028BDE0
  c->r[5]=R32(c->r[28]+0x0000003Cu); // 8028BDE4
  c->r[4]=0u+0x00000000u; // 8028BDE8
  c->ctr=c->r[12]; // 8028BDEC
  if (true) { c->lr=0x8028BDF4u; dispatch(c,c->ctr); } // 8028BDF0
L_8028BDF4:;
  c->lr=0x8028BDF8u; f_80160C68(c); // 8028BDF4
  c->r[0]=R32(c->r[28]+0x00000000u); // 8028BDF8
  c->r[29]=c->r[3]|c->r[3]; // 8028BDFC
  cmps(c,0,(int32_t)c->r[0],0); // 8028BE00
  if (crb(c,2)) { goto L_8028BE10; } // 8028BE04
  c->r[3]=c->r[0]|c->r[0]; // 8028BE08
  c->lr=0x8028BE10u; f_80178BA4(c); // 8028BE0C
L_8028BE10:;
  c->r[3]=c->r[28]|c->r[28]; // 8028BE10
  c->r[4]=0u+0xFFFFFFFFu; // 8028BE14
  c->lr=0x8028BE1Cu; f_80288DE0(c); // 8028BE18
  c->lr=0x8028BE20u; f_80160C68(c); // 8028BE1C
  c->r[0]=R8(c->r[28]+0x0000001Du); // 8028BE20
  c->r[30]=c->r[3]|c->r[3]; // 8028BE24
  cmps(c,0,(int32_t)c->r[0],0); // 8028BE28
  if (crb(c,2)) { goto L_8028BE44; } // 8028BE2C
  c->r[28]=c->r[28]+0x00000040u; // 8028BE30
  c->r[3]=c->r[31]+0x00000018u; // 8028BE34
  c->r[4]=c->r[28]|c->r[28]; // 8028BE38
  c->lr=0x8028BE40u; f_802A7CB4(c); // 8028BE3C
  goto L_8028BE54; // 8028BE40
L_8028BE44:;
  c->r[28]=c->r[28]+0x00000040u; // 8028BE44
  c->r[3]=c->r[31]|c->r[31]; // 8028BE48
  c->r[4]=c->r[28]|c->r[28]; // 8028BE4C
  c->lr=0x8028BE54u; f_802A7CB4(c); // 8028BE50
L_8028BE54:;
  c->r[0]=c->r[31]+0x00000010u; // 8028BE54
  c->r[5]=c->r[28]|c->r[28]; // 8028BE58
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8028BE5C
  c->r[3]=c->r[31]+0x0000000Cu; // 8028BE60
  c->r[4]=c->r[1]+0x0000000Cu; // 8028BE64
  c->lr=0x8028BE6Cu; f_802A7C88(c); // 8028BE68
  c->r[3]=c->r[30]|c->r[30]; // 8028BE6C
  c->lr=0x8028BE74u; f_80160C90(c); // 8028BE70
  c->r[3]=c->r[29]|c->r[29]; // 8028BE74
  c->lr=0x8028BE7Cu; f_80160C90(c); // 8028BE78
L_8028BE7C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 8028BE7C
  cmps(c,0,(int32_t)c->r[0],0); // 8028BE80
  if (!crb(c,2)) { IRQCHK(c); goto L_8028BD84; } // 8028BE84
  goto L_8028BEAC; // 8028BE88
L_8028BE8C:;
  c->r[28]=R32(c->r[31]+0x00000010u); // 8028BE8C
  c->r[3]=c->r[31]+0x0000000Cu; // 8028BE90
  c->r[4]=c->r[1]+0x00000008u; // 8028BE94
  W32(c->r[1]+0x00000008u,c->r[28]); // 8028BE98
  c->lr=0x8028BEA0u; f_802A7BFC(c); // 8028BE9C
  c->r[3]=c->r[28]+0xFFFFFFC0u; // 8028BEA0
  c->r[4]=0u+0xFFFFFFFFu; // 8028BEA4
  c->lr=0x8028BEACu; f_80288DE0(c); // 8028BEA8
L_8028BEAC:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8028BEAC
  cmps(c,0,(int32_t)c->r[0],0); // 8028BEB0
  if (!crb(c,2)) { IRQCHK(c); goto L_8028BE8C; } // 8028BEB4
  c->r[0]=0u+0x00000000u; // 8028BEB8
  W8(c->r[31]+0x00000024u,c->r[0]); // 8028BEBC
L_8028BEC0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8028BEC0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8028BEC4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8028BEC8
  c->r[29]=R32(c->r[1]+0x00000024u); // 8028BECC
  c->r[28]=R32(c->r[1]+0x00000020u); // 8028BED0
  c->lr=c->r[0]; // 8028BED4
  c->r[1]=c->r[1]+0x00000030u; // 8028BED8
  return; // 8028BEDC
}

// AcquireAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFUlPFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv_vPv
void f_8028BEE0(Ctx* __restrict c) {
  trace_call(0x8028BEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028BEE0
  c->r[0]=c->lr; // 8028BEE4
  W32(c->r[1]+0x00000064u,c->r[0]); // 8028BEE8
  c->r[11]=c->r[1]+0x00000060u; // 8028BEEC
  c->lr=0x8028BEF4u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028BEF0
  c->r[21]=c->r[3]|c->r[3]; // 8028BEF4
  c->r[22]=c->r[4]|c->r[4]; // 8028BEF8
  c->r[23]=c->r[5]|c->r[5]; // 8028BEFC
  c->r[24]=c->r[6]|c->r[6]; // 8028BF00
  c->lr=0x8028BF08u; f_80160C68(c); // 8028BF04
  c->r[20]=c->r[3]|c->r[3]; // 8028BF08
  c->lr=0x8028BF10u; f_80160C68(c); // 8028BF0C
  c->r[0]=R32(c->r[21]+0x00000018u); // 8028BF10
  c->r[19]=c->r[3]|c->r[3]; // 8028BF14
  cmps(c,0,(int32_t)c->r[0],0); // 8028BF18
  if (crb(c,2)) { goto L_8028C064; } // 8028BF1C
  c->r[27]=0u+0x80420000u; // 8028BF20
  c->r[28]=0u+0x00000000u; // 8028BF24
  c->r[26]=c->r[27]+0xFFFFAA74u; // 8028BF28
  c->r[29]=0u+0x80290000u; // 8028BF2C
  c->r[30]=0u+0x80420000u; // 8028BF30
  c->r[31]=0u+0x00000001u; // 8028BF34
  c->r[16]=c->r[26]+0x00000010u; // 8028BF38
  goto L_8028C058; // 8028BF3C
L_8028BF40:;
  c->r[3]=R32(c->r[21]+0x0000001Cu); // 8028BF40
  c->r[12]=R32(c->r[3]+0xFFFFFFF8u); // 8028BF44
  c->r[25]=c->r[3]+0xFFFFFFC0u; // 8028BF48
  cmps(c,0,(int32_t)c->r[12],0); // 8028BF4C
  if (crb(c,2)) { goto L_8028BF68; } // 8028BF50
  c->r[3]=c->r[25]|c->r[25]; // 8028BF54
  c->r[5]=R32(c->r[25]+0x0000003Cu); // 8028BF58
  c->r[4]=0u+0x00000001u; // 8028BF5C
  c->ctr=c->r[12]; // 8028BF60
  if (true) { c->lr=0x8028BF68u; dispatch(c,c->ctr); } // 8028BF64
L_8028BF68:;
  c->r[0]=R8(c->r[13]+0xFFFFA468u); // 8028BF68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8028BF6C
  if (!crb(c,2)) { goto L_8028BFD4; } // 8028BF70
  W32(c->r[26]+0x00000004u,c->r[28]); // 8028BF74
  c->r[6]=c->r[26]+0x00000004u; // 8028BF78
  c->r[7]=c->r[26]+0x00000010u; // 8028BF7C
  c->r[8]=c->r[26]+0x0000001Cu; // 8028BF80
  W32(c->r[26]+0x00000008u,c->r[28]); // 8028BF84
  c->r[3]=c->r[26]|c->r[26]; // 8028BF88
  c->r[4]=c->r[29]+0xFFFFBB00u; // 8028BF8C
  c->r[5]=c->r[30]+0xFFFFAA68u; // 8028BF90
  W32(c->r[26]+0x00000010u,c->r[28]); // 8028BF94
  W32(c->r[26]+0x00000014u,c->r[28]); // 8028BF98
  W32(c->r[26]+0x0000001Cu,c->r[28]); // 8028BF9C
  W32(c->r[26]+0x00000020u,c->r[28]); // 8028BFA0
  W32(c->r[27]+0xFFFFAA74u,c->r[28]); // 8028BFA4
  W32(c->r[26]+0x00000004u,c->r[6]); // 8028BFA8
  W32(c->r[26]+0x00000008u,c->r[6]); // 8028BFAC
  W32(c->r[26]+0x0000000Cu,c->r[28]); // 8028BFB0
  W32(c->r[26]+0x00000010u,c->r[7]); // 8028BFB4
  W32(c->r[26]+0x00000014u,c->r[7]); // 8028BFB8
  W32(c->r[26]+0x00000018u,c->r[28]); // 8028BFBC
  W32(c->r[26]+0x0000001Cu,c->r[8]); // 8028BFC0
  W32(c->r[26]+0x00000020u,c->r[8]); // 8028BFC4
  W8(c->r[26]+0x00000024u,c->r[28]); // 8028BFC8
  c->lr=0x8028BFD0u; f_8018566C(c); // 8028BFCC
  W8(c->r[13]+0xFFFFA468u,c->r[31]); // 8028BFD0
L_8028BFD4:;
  c->lr=0x8028BFD8u; f_80160C68(c); // 8028BFD4
  c->r[0]=R32(c->r[25]+0x00000000u); // 8028BFD8
  c->r[18]=c->r[3]|c->r[3]; // 8028BFDC
  cmps(c,0,(int32_t)c->r[0],0); // 8028BFE0
  if (crb(c,2)) { goto L_8028BFF0; } // 8028BFE4
  c->r[3]=c->r[0]|c->r[0]; // 8028BFE8
  c->lr=0x8028BFF0u; f_80178BA4(c); // 8028BFEC
L_8028BFF0:;
  c->r[3]=c->r[25]|c->r[25]; // 8028BFF0
  c->r[4]=0u+0xFFFFFFFFu; // 8028BFF4
  c->lr=0x8028BFFCu; f_80288DE0(c); // 8028BFF8
  c->lr=0x8028C000u; f_80160C68(c); // 8028BFFC
  c->r[0]=R8(c->r[25]+0x0000001Du); // 8028C000
  c->r[17]=c->r[3]|c->r[3]; // 8028C004
  cmps(c,0,(int32_t)c->r[0],0); // 8028C008
  if (crb(c,2)) { goto L_8028C024; } // 8028C00C
  c->r[25]=c->r[25]+0x00000040u; // 8028C010
  c->r[3]=c->r[26]+0x00000018u; // 8028C014
  c->r[4]=c->r[25]|c->r[25]; // 8028C018
  c->lr=0x8028C020u; f_802A7CB4(c); // 8028C01C
  goto L_8028C034; // 8028C020
L_8028C024:;
  c->r[25]=c->r[25]+0x00000040u; // 8028C024
  c->r[3]=c->r[26]|c->r[26]; // 8028C028
  c->r[4]=c->r[25]|c->r[25]; // 8028C02C
  c->lr=0x8028C034u; f_802A7CB4(c); // 8028C030
L_8028C034:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 8028C034
  c->r[5]=c->r[25]|c->r[25]; // 8028C038
  c->r[3]=c->r[26]+0x0000000Cu; // 8028C03C
  c->r[4]=c->r[1]+0x0000000Cu; // 8028C040
  c->lr=0x8028C048u; f_802A7C88(c); // 8028C044
  c->r[3]=c->r[17]|c->r[17]; // 8028C048
  c->lr=0x8028C050u; f_80160C90(c); // 8028C04C
  c->r[3]=c->r[18]|c->r[18]; // 8028C050
  c->lr=0x8028C058u; f_80160C90(c); // 8028C054
L_8028C058:;
  c->r[0]=R32(c->r[21]+0x00000018u); // 8028C058
  cmps(c,0,(int32_t)c->r[0],0); // 8028C05C
  if (!crb(c,2)) { IRQCHK(c); goto L_8028BF40; } // 8028C060
L_8028C064:;
  c->r[0]=R32(c->r[21]+0x0000000Cu); // 8028C064
  cmps(c,0,(int32_t)c->r[0],0); // 8028C068
  if (!crb(c,2)) { goto L_8028C080; } // 8028C06C
  c->r[3]=c->r[19]|c->r[19]; // 8028C070
  c->lr=0x8028C078u; f_80160C90(c); // 8028C074
  c->r[18]=0u+0x00000000u; // 8028C078
  goto L_8028C0D0; // 8028C07C
L_8028C080:;
  c->r[5]=R32(c->r[21]+0x00000010u); // 8028C080
  c->r[3]=c->r[21]+0x0000000Cu; // 8028C084
  c->r[4]=c->r[1]+0x00000010u; // 8028C088
  W32(c->r[1]+0x00000010u,c->r[5]); // 8028C08C
  c->r[16]=c->r[5]+0xFFFFFFC0u; // 8028C090
  c->lr=0x8028C098u; f_802A7BFC(c); // 8028C094
  cmps(c,0,(int32_t)c->r[16],0); // 8028C098
  c->r[18]=c->r[16]|c->r[16]; // 8028C09C
  if (crb(c,2)) { goto L_8028C0B0; } // 8028C0A0
  c->r[3]=c->r[16]|c->r[16]; // 8028C0A4
  c->lr=0x8028C0ACu; f_80288D9C(c); // 8028C0A8
  c->r[18]=c->r[3]|c->r[3]; // 8028C0AC
L_8028C0B0:;
  c->r[0]=c->r[21]+0x00000004u; // 8028C0B0
  c->r[3]=c->r[21]|c->r[21]; // 8028C0B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C0B8
  c->r[4]=c->r[1]+0x00000014u; // 8028C0BC
  c->r[5]=c->r[16]+0x00000040u; // 8028C0C0
  c->lr=0x8028C0C8u; f_802A7C88(c); // 8028C0C4
  c->r[3]=c->r[19]|c->r[19]; // 8028C0C8
  c->lr=0x8028C0D0u; f_80160C90(c); // 8028C0CC
L_8028C0D0:;
  cmps(c,0,(int32_t)c->r[18],0); // 8028C0D0
  if (!crb(c,2)) { goto L_8028C0E8; } // 8028C0D4
  c->r[3]=c->r[20]|c->r[20]; // 8028C0D8
  c->lr=0x8028C0E0u; f_80160C90(c); // 8028C0DC
  c->r[3]=0u+0x00000000u; // 8028C0E0
  goto L_8028C198; // 8028C0E4
L_8028C0E8:;
  c->r[4]=0u+0x80290000u; // 8028C0E8
  c->r[3]=c->r[22]|c->r[22]; // 8028C0EC
  c->r[5]=c->r[18]|c->r[18]; // 8028C0F0
  c->r[4]=c->r[4]+0xFFFF970Cu; // 8028C0F4
  c->lr=0x8028C0FCu; f_80178C20(c); // 8028C0F8
  cmps(c,0,(int32_t)c->r[3],0); // 8028C0FC
  c->r[4]=c->r[3]|c->r[3]; // 8028C100
  if (!crb(c,2)) { goto L_8028C17C; } // 8028C104
  c->r[3]=c->r[18]|c->r[18]; // 8028C108
  c->r[4]=0u+0xFFFFFFFFu; // 8028C10C
  c->lr=0x8028C114u; f_80288DE0(c); // 8028C110
  c->lr=0x8028C118u; f_80160C68(c); // 8028C114
  c->r[0]=R8(c->r[18]+0x0000001Du); // 8028C118
  c->r[17]=c->r[3]|c->r[3]; // 8028C11C
  cmps(c,0,(int32_t)c->r[0],0); // 8028C120
  if (crb(c,2)) { goto L_8028C13C; } // 8028C124
  c->r[16]=c->r[18]+0x00000040u; // 8028C128
  c->r[3]=c->r[21]+0x00000018u; // 8028C12C
  c->r[4]=c->r[16]|c->r[16]; // 8028C130
  c->lr=0x8028C138u; f_802A7CB4(c); // 8028C134
  goto L_8028C14C; // 8028C138
L_8028C13C:;
  c->r[16]=c->r[18]+0x00000040u; // 8028C13C
  c->r[3]=c->r[21]|c->r[21]; // 8028C140
  c->r[4]=c->r[16]|c->r[16]; // 8028C144
  c->lr=0x8028C14Cu; f_802A7CB4(c); // 8028C148
L_8028C14C:;
  c->r[0]=c->r[21]+0x00000010u; // 8028C14C
  c->r[5]=c->r[16]|c->r[16]; // 8028C150
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028C154
  c->r[3]=c->r[21]+0x0000000Cu; // 8028C158
  c->r[4]=c->r[1]+0x00000008u; // 8028C15C
  c->lr=0x8028C164u; f_802A7C88(c); // 8028C160
  c->r[3]=c->r[17]|c->r[17]; // 8028C164
  c->lr=0x8028C16Cu; f_80160C90(c); // 8028C168
  c->r[3]=c->r[20]|c->r[20]; // 8028C16C
  c->lr=0x8028C174u; f_80160C90(c); // 8028C170
  c->r[3]=0u+0x00000000u; // 8028C174
  goto L_8028C198; // 8028C178
L_8028C17C:;
  c->r[3]=c->r[18]|c->r[18]; // 8028C17C
  c->lr=0x8028C184u; f_8028B368(c); // 8028C180
  W32(c->r[18]+0x00000038u,c->r[23]); // 8028C184
  c->r[3]=c->r[20]|c->r[20]; // 8028C188
  W32(c->r[18]+0x0000003Cu,c->r[24]); // 8028C18C
  c->lr=0x8028C194u; f_80160C90(c); // 8028C190
  c->r[3]=c->r[18]|c->r[18]; // 8028C194
L_8028C198:;
  c->r[11]=c->r[1]+0x00000060u; // 8028C198
  c->lr=0x8028C1A0u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028C19C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8028C1A0
  c->lr=c->r[0]; // 8028C1A4
  c->r[1]=c->r[1]+0x00000060u; // 8028C1A8
  return; // 8028C1AC
}

// FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
void f_8028C1B0(Ctx* __restrict c) {
  trace_call(0x8028C1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C1B0
  c->r[0]=c->lr; // 8028C1B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028C1B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028C1BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028C1C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028C1C4
  c->r[29]=c->r[4]|c->r[4]; // 8028C1C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8028C1CC
  c->r[28]=c->r[3]|c->r[3]; // 8028C1D0
  c->lr=0x8028C1D8u; f_80160C68(c); // 8028C1D4
  c->r[0]=R32(c->r[29]+0x00000000u); // 8028C1D8
  c->r[31]=c->r[3]|c->r[3]; // 8028C1DC
  cmps(c,0,(int32_t)c->r[0],0); // 8028C1E0
  if (crb(c,2)) { goto L_8028C1F0; } // 8028C1E4
  c->r[3]=c->r[0]|c->r[0]; // 8028C1E8
  c->lr=0x8028C1F0u; f_80178BA4(c); // 8028C1EC
L_8028C1F0:;
  c->r[3]=c->r[29]|c->r[29]; // 8028C1F0
  c->r[4]=0u+0xFFFFFFFFu; // 8028C1F4
  c->lr=0x8028C1FCu; f_80288DE0(c); // 8028C1F8
  c->lr=0x8028C200u; f_80160C68(c); // 8028C1FC
  c->r[0]=R8(c->r[29]+0x0000001Du); // 8028C200
  c->r[30]=c->r[3]|c->r[3]; // 8028C204
  cmps(c,0,(int32_t)c->r[0],0); // 8028C208
  if (crb(c,2)) { goto L_8028C224; } // 8028C20C
  c->r[29]=c->r[29]+0x00000040u; // 8028C210
  c->r[3]=c->r[28]+0x00000018u; // 8028C214
  c->r[4]=c->r[29]|c->r[29]; // 8028C218
  c->lr=0x8028C220u; f_802A7CB4(c); // 8028C21C
  goto L_8028C234; // 8028C220
L_8028C224:;
  c->r[29]=c->r[29]+0x00000040u; // 8028C224
  c->r[3]=c->r[28]|c->r[28]; // 8028C228
  c->r[4]=c->r[29]|c->r[29]; // 8028C22C
  c->lr=0x8028C234u; f_802A7CB4(c); // 8028C230
L_8028C234:;
  c->r[0]=c->r[28]+0x00000010u; // 8028C234
  c->r[5]=c->r[29]|c->r[29]; // 8028C238
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028C23C
  c->r[3]=c->r[28]+0x0000000Cu; // 8028C240
  c->r[4]=c->r[1]+0x00000008u; // 8028C244
  c->lr=0x8028C24Cu; f_802A7C88(c); // 8028C248
  c->r[3]=c->r[30]|c->r[30]; // 8028C24C
  c->lr=0x8028C254u; f_80160C90(c); // 8028C250
  c->r[3]=c->r[31]|c->r[31]; // 8028C254
  c->lr=0x8028C25Cu; f_80160C90(c); // 8028C258
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028C25C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028C260
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028C264
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028C268
  c->r[28]=R32(c->r[1]+0x00000010u); // 8028C26C
  c->lr=c->r[0]; // 8028C270
  c->r[1]=c->r[1]+0x00000020u; // 8028C274
  return; // 8028C278
}

// ReserveForFreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
void f_8028C27C(Ctx* __restrict c) {
  trace_call(0x8028C27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C27C
  c->r[0]=c->lr; // 8028C280
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028C284
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028C288
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028C28C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028C290
  c->r[29]=c->r[4]|c->r[4]; // 8028C294
  W32(c->r[1]+0x00000010u,c->r[28]); // 8028C298
  c->r[28]=c->r[3]|c->r[3]; // 8028C29C
  c->lr=0x8028C2A4u; f_80160C68(c); // 8028C2A0
  c->r[0]=0u+0x00000001u; // 8028C2A4
  c->r[31]=c->r[3]|c->r[3]; // 8028C2A8
  W8(c->r[29]+0x0000001Du,c->r[0]); // 8028C2AC
  c->lr=0x8028C2B4u; f_80160C68(c); // 8028C2B0
  c->r[29]=c->r[29]+0x00000040u; // 8028C2B4
  c->r[30]=c->r[3]|c->r[3]; // 8028C2B8
  c->r[3]=c->r[28]|c->r[28]; // 8028C2BC
  c->r[4]=c->r[29]|c->r[29]; // 8028C2C0
  c->lr=0x8028C2C8u; f_802A7CB4(c); // 8028C2C4
  c->r[0]=c->r[28]+0x0000001Cu; // 8028C2C8
  c->r[5]=c->r[29]|c->r[29]; // 8028C2CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028C2D0
  c->r[3]=c->r[28]+0x00000018u; // 8028C2D4
  c->r[4]=c->r[1]+0x00000008u; // 8028C2D8
  c->lr=0x8028C2E0u; f_802A7C88(c); // 8028C2DC
  c->r[3]=c->r[30]|c->r[30]; // 8028C2E0
  c->lr=0x8028C2E8u; f_80160C90(c); // 8028C2E4
  c->r[3]=c->r[31]|c->r[31]; // 8028C2E8
  c->lr=0x8028C2F0u; f_80160C90(c); // 8028C2EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028C2F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028C2F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028C2F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028C2FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8028C300
  c->lr=c->r[0]; // 8028C304
  c->r[1]=c->r[1]+0x00000020u; // 8028C308
  return; // 8028C30C
}

// FreeAllReservedAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_8028C310(Ctx* __restrict c) {
  trace_call(0x8028C310u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C310
  c->r[0]=c->lr; // 8028C314
  W32(c->r[1]+0x00000044u,c->r[0]); // 8028C318
  c->r[11]=c->r[1]+0x00000040u; // 8028C31C
  c->lr=0x8028C324u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028C320
  c->r[0]=R32(c->r[3]+0x00000018u); // 8028C324
  c->r[31]=c->r[3]|c->r[3]; // 8028C328
  cmps(c,0,(int32_t)c->r[0],0); // 8028C32C
  if (crb(c,2)) { goto L_8028C478; } // 8028C330
  c->r[23]=0u+0x80420000u; // 8028C334
  c->r[24]=0u+0x00000000u; // 8028C338
  c->r[22]=c->r[23]+0xFFFFAA74u; // 8028C33C
  c->r[25]=0u+0x80290000u; // 8028C340
  c->r[26]=0u+0x80420000u; // 8028C344
  c->r[27]=0u+0x00000001u; // 8028C348
  c->r[28]=c->r[22]+0x00000010u; // 8028C34C
  goto L_8028C46C; // 8028C350
L_8028C354:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8028C354
  c->r[12]=R32(c->r[3]+0xFFFFFFF8u); // 8028C358
  c->r[21]=c->r[3]+0xFFFFFFC0u; // 8028C35C
  cmps(c,0,(int32_t)c->r[12],0); // 8028C360
  if (crb(c,2)) { goto L_8028C37C; } // 8028C364
  c->r[3]=c->r[21]|c->r[21]; // 8028C368
  c->r[5]=R32(c->r[21]+0x0000003Cu); // 8028C36C
  c->r[4]=0u+0x00000001u; // 8028C370
  c->ctr=c->r[12]; // 8028C374
  if (true) { c->lr=0x8028C37Cu; dispatch(c,c->ctr); } // 8028C378
L_8028C37C:;
  c->r[0]=R8(c->r[13]+0xFFFFA468u); // 8028C37C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8028C380
  if (!crb(c,2)) { goto L_8028C3E8; } // 8028C384
  W32(c->r[22]+0x00000004u,c->r[24]); // 8028C388
  c->r[6]=c->r[22]+0x00000004u; // 8028C38C
  c->r[7]=c->r[22]+0x00000010u; // 8028C390
  c->r[8]=c->r[22]+0x0000001Cu; // 8028C394
  W32(c->r[22]+0x00000008u,c->r[24]); // 8028C398
  c->r[3]=c->r[22]|c->r[22]; // 8028C39C
  c->r[4]=c->r[25]+0xFFFFBB00u; // 8028C3A0
  c->r[5]=c->r[26]+0xFFFFAA68u; // 8028C3A4
  W32(c->r[22]+0x00000010u,c->r[24]); // 8028C3A8
  W32(c->r[22]+0x00000014u,c->r[24]); // 8028C3AC
  W32(c->r[22]+0x0000001Cu,c->r[24]); // 8028C3B0
  W32(c->r[22]+0x00000020u,c->r[24]); // 8028C3B4
  W32(c->r[23]+0xFFFFAA74u,c->r[24]); // 8028C3B8
  W32(c->r[22]+0x00000004u,c->r[6]); // 8028C3BC
  W32(c->r[22]+0x00000008u,c->r[6]); // 8028C3C0
  W32(c->r[22]+0x0000000Cu,c->r[24]); // 8028C3C4
  W32(c->r[22]+0x00000010u,c->r[7]); // 8028C3C8
  W32(c->r[22]+0x00000014u,c->r[7]); // 8028C3CC
  W32(c->r[22]+0x00000018u,c->r[24]); // 8028C3D0
  W32(c->r[22]+0x0000001Cu,c->r[8]); // 8028C3D4
  W32(c->r[22]+0x00000020u,c->r[8]); // 8028C3D8
  W8(c->r[22]+0x00000024u,c->r[24]); // 8028C3DC
  c->lr=0x8028C3E4u; f_8018566C(c); // 8028C3E0
  W8(c->r[13]+0xFFFFA468u,c->r[27]); // 8028C3E4
L_8028C3E8:;
  c->lr=0x8028C3ECu; f_80160C68(c); // 8028C3E8
  c->r[0]=R32(c->r[21]+0x00000000u); // 8028C3EC
  c->r[30]=c->r[3]|c->r[3]; // 8028C3F0
  cmps(c,0,(int32_t)c->r[0],0); // 8028C3F4
  if (crb(c,2)) { goto L_8028C404; } // 8028C3F8
  c->r[3]=c->r[0]|c->r[0]; // 8028C3FC
  c->lr=0x8028C404u; f_80178BA4(c); // 8028C400
L_8028C404:;
  c->r[3]=c->r[21]|c->r[21]; // 8028C404
  c->r[4]=0u+0xFFFFFFFFu; // 8028C408
  c->lr=0x8028C410u; f_80288DE0(c); // 8028C40C
  c->lr=0x8028C414u; f_80160C68(c); // 8028C410
  c->r[0]=R8(c->r[21]+0x0000001Du); // 8028C414
  c->r[29]=c->r[3]|c->r[3]; // 8028C418
  cmps(c,0,(int32_t)c->r[0],0); // 8028C41C
  if (crb(c,2)) { goto L_8028C438; } // 8028C420
  c->r[21]=c->r[21]+0x00000040u; // 8028C424
  c->r[3]=c->r[22]+0x00000018u; // 8028C428
  c->r[4]=c->r[21]|c->r[21]; // 8028C42C
  c->lr=0x8028C434u; f_802A7CB4(c); // 8028C430
  goto L_8028C448; // 8028C434
L_8028C438:;
  c->r[21]=c->r[21]+0x00000040u; // 8028C438
  c->r[3]=c->r[22]|c->r[22]; // 8028C43C
  c->r[4]=c->r[21]|c->r[21]; // 8028C440
  c->lr=0x8028C448u; f_802A7CB4(c); // 8028C444
L_8028C448:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 8028C448
  c->r[5]=c->r[21]|c->r[21]; // 8028C44C
  c->r[3]=c->r[22]+0x0000000Cu; // 8028C450
  c->r[4]=c->r[1]+0x00000008u; // 8028C454
  c->lr=0x8028C45Cu; f_802A7C88(c); // 8028C458
  c->r[3]=c->r[29]|c->r[29]; // 8028C45C
  c->lr=0x8028C464u; f_80160C90(c); // 8028C460
  c->r[3]=c->r[30]|c->r[30]; // 8028C464
  c->lr=0x8028C46Cu; f_80160C90(c); // 8028C468
L_8028C46C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 8028C46C
  cmps(c,0,(int32_t)c->r[0],0); // 8028C470
  if (!crb(c,2)) { IRQCHK(c); goto L_8028C354; } // 8028C474
L_8028C478:;
  c->r[11]=c->r[1]+0x00000040u; // 8028C478
  c->lr=0x8028C480u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028C47C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8028C480
  c->lr=c->r[0]; // 8028C484
  c->r[1]=c->r[1]+0x00000040u; // 8028C488
  return; // 8028C48C
}

// CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
void f_8028C490(Ctx* __restrict c) {
  trace_call(0x8028C490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C490
  c->r[0]=c->lr; // 8028C494
  cmps(c,0,(int32_t)c->r[4],0); // 8028C498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C49C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028C4A0
  c->r[31]=c->r[3]|c->r[3]; // 8028C4A4
  if (crb(c,2)) { goto L_8028C4B4; } // 8028C4A8
  cmps(c,0,(int32_t)c->r[5],0); // 8028C4AC
  if (!crb(c,2)) { goto L_8028C4C4; } // 8028C4B0
L_8028C4B4:;
  c->r[0]=0u+0x00000000u; // 8028C4B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8028C4B8
  c->r[3]=0u+0x00000000u; // 8028C4BC
  goto L_8028C4E4; // 8028C4C0
L_8028C4C4:;
  c->r[3]=c->r[4]|c->r[4]; // 8028C4C4
  c->r[4]=c->r[5]|c->r[5]; // 8028C4C8
  c->r[5]=0u+0x00000000u; // 8028C4CC
  c->lr=0x8028C4D4u; f_801A0C6C(c); // 8028C4D0
  c->r[0]=0u-c->r[3]; // 8028C4D4
  W32(c->r[31]+0x00000000u,c->r[3]); // 8028C4D8
  c->r[0]=c->r[0]|c->r[3]; // 8028C4DC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028C4E0
L_8028C4E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028C4E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028C4E8
  c->lr=c->r[0]; // 8028C4EC
  c->r[1]=c->r[1]+0x00000010u; // 8028C4F0
  return; // 8028C4F4
}

// fn_8028C4F8
void f_8028C4F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C4F8
  c->r[0]=c->lr; // 8028C4FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028C504
  c->r[31]=c->r[3]|c->r[3]; // 8028C508
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028C50C
  cmps(c,0,(int32_t)c->r[0],0); // 8028C510
  if (crb(c,2)) { goto L_8028C528; } // 8028C514
  c->r[3]=c->r[0]|c->r[0]; // 8028C518
  c->lr=0x8028C520u; f_801A0CF0(c); // 8028C51C
  c->r[0]=0u+0x00000000u; // 8028C520
  W32(c->r[31]+0x00000000u,c->r[0]); // 8028C524
L_8028C528:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028C528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028C52C
  c->lr=c->r[0]; // 8028C530
  c->r[1]=c->r[1]+0x00000010u; // 8028C534
  return; // 8028C538
}

// HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
void f_8028C53C(Ctx* __restrict c) {
  trace_call(0x8028C53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C53C
  c->r[0]=c->lr; // 8028C540
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028C548
  c->r[31]=c->r[3]|c->r[3]; // 8028C54C
  c->r[3]=c->r[4]|c->r[4]; // 8028C550
  c->r[4]=c->r[5]|c->r[5]; // 8028C554
  c->lr=0x8028C55Cu; f_8017CC10(c); // 8028C558
  c->r[3]=0u+0x80290000u; // 8028C55C
  c->r[4]=0u+0x80290000u; // 8028C560
  c->r[3]=c->r[3]+0xFFFFC5C4u; // 8028C564
  c->r[4]=c->r[4]+0xFFFFC624u; // 8028C568
  c->lr=0x8028C570u; f_8017CC04(c); // 8028C56C
  c->r[0]=0u+0x00000000u; // 8028C570
  W32(c->r[13]+0xFFFFA470u,c->r[31]); // 8028C574
  W32(c->r[13]+0xFFFFA474u,c->r[0]); // 8028C578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028C57C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028C580
  c->lr=c->r[0]; // 8028C584
  c->r[1]=c->r[1]+0x00000010u; // 8028C588
  return; // 8028C58C
}

// RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
void f_8028C590(Ctx* __restrict c) {
  trace_call(0x8028C590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C590
  c->r[0]=c->lr; // 8028C594
  c->r[3]=c->r[4]|c->r[4]; // 8028C598
  c->r[4]=c->r[5]|c->r[5]; // 8028C59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C5A0
  c->lr=0x8028C5A8u; f_8017CC04(c); // 8028C5A4
  c->r[0]=0u+0x00000000u; // 8028C5A8
  c->r[3]=R32(c->r[13]+0xFFFFA474u); // 8028C5AC
  W32(c->r[13]+0xFFFFA470u,c->r[0]); // 8028C5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028C5B4
  c->lr=c->r[0]; // 8028C5B8
  c->r[1]=c->r[1]+0x00000010u; // 8028C5BC
  return; // 8028C5C0
}

// Alloc__Q44nw4r3snd6detail8AxfxImplFUl
void f_8028C5C4(Ctx* __restrict c) {
  trace_call(0x8028C5C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C5C4
  c->r[0]=c->lr; // 8028C5C8
  c->r[5]=0u+0x00000004u; // 8028C5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C5D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028C5D4
  c->r[31]=c->r[3]|c->r[3]; // 8028C5D8
  c->r[4]=c->r[31]|c->r[31]; // 8028C5DC
  c->r[6]=R32(c->r[13]+0xFFFFA470u); // 8028C5E0
  c->r[3]=R32(c->r[6]+0x00000000u); // 8028C5E4
  c->lr=0x8028C5ECu; f_801A0D20(c); // 8028C5E8
  c->r[5]=R32(c->r[13]+0xFFFFA470u); // 8028C5EC
  c->r[0]=c->r[31]+0x00000003u; // 8028C5F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8028C5F4
  c->r[4]=R32(c->r[5]+0x00000004u); // 8028C5F8
  c->r[4]=c->r[4]+0x00000001u; // 8028C5FC
  W32(c->r[5]+0x00000004u,c->r[4]); // 8028C600
  c->r[4]=R32(c->r[13]+0xFFFFA474u); // 8028C604
  c->r[0]=c->r[4]+c->r[0]; // 8028C608
  W32(c->r[13]+0xFFFFA474u,c->r[0]); // 8028C60C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028C610
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028C614
  c->lr=c->r[0]; // 8028C618
  c->r[1]=c->r[1]+0x00000010u; // 8028C61C
  return; // 8028C620
}

// Free__Q44nw4r3snd6detail8AxfxImplFPv
void f_8028C624(Ctx* __restrict c) {
  trace_call(0x8028C624u);
  c->r[4]=R32(c->r[13]+0xFFFFA470u); // 8028C624
  c->r[3]=R32(c->r[4]+0x00000004u); // 8028C628
  cmps(c,0,(int32_t)c->r[3],0); // 8028C62C
  if (crb(c,2)) { goto L_8028C63C; } // 8028C630
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8028C634
  W32(c->r[4]+0x00000004u,c->r[0]); // 8028C638
L_8028C63C:;
  c->r[3]=R32(c->r[13]+0xFFFFA470u); // 8028C63C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8028C640
  cmps(c,0,(int32_t)c->r[0],0); // 8028C644
  if (!crb(c,2)) return; // 8028C648
  c->r[3]=R32(c->r[3]+0x00000000u); // 8028C64C
  c->r[4]=0u+0x00000003u; // 8028C650
  f_801A0E40(c); return; // 8028C654
  return; // 8028C658
}

// __ct__Q44nw4r3snd6detail4BankFPCv
void f_8028C65C(Ctx* __restrict c) {
  trace_call(0x8028C65Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C65C
  c->r[0]=c->lr; // 8028C660
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028C668
  c->r[31]=c->r[3]|c->r[3]; // 8028C66C
  c->lr=0x8028C674u; f_8028C8CC(c); // 8028C670
  c->r[0]=0u+0x00000000u; // 8028C674
  c->r[3]=c->r[31]|c->r[31]; // 8028C678
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8028C67C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028C680
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028C684
  c->lr=c->r[0]; // 8028C688
  c->r[1]=c->r[1]+0x00000010u; // 8028C68C
  return; // 8028C690
}

// __dt__Q44nw4r3snd6detail4BankFv
void f_8028C694(Ctx* __restrict c) {
  trace_call(0x8028C694u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C694
  c->r[0]=c->lr; // 8028C698
  cmps(c,0,(int32_t)c->r[3],0); // 8028C69C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C6A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028C6A4
  c->r[31]=c->r[3]|c->r[3]; // 8028C6A8
  if (crb(c,2)) { goto L_8028C6BC; } // 8028C6AC
  cmps(c,0,(int32_t)c->r[4],0); // 8028C6B0
  if (!crb(c,1)) { goto L_8028C6BC; } // 8028C6B4
  c->lr=0x8028C6BCu; f_800D6AD0(c); // 8028C6B8
L_8028C6BC:;
  c->r[3]=c->r[31]|c->r[31]; // 8028C6BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028C6C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028C6C4
  c->lr=c->r[0]; // 8028C6C8
  c->r[1]=c->r[1]+0x00000010u; // 8028C6CC
  return; // 8028C6D0
}

// NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo
void f_8028C6D4(Ctx* __restrict c) {
  trace_call(0x8028C6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C6D4
  c->r[0]=c->lr; // 8028C6D8
  c->r[5]=R32(c->r[4]+0x00000000u); // 8028C6DC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8028C6E0
  c->r[0]=0u+0x43300000u; // 8028C6E4
  W32(c->r[1]+0x000000BCu,c->r[31]); // 8028C6E8
  c->r[31]=c->r[3]|c->r[3]; // 8028C6EC
  W32(c->r[1]+0x000000B8u,c->r[30]); // 8028C6F0
  c->r[30]=c->r[4]|c->r[4]; // 8028C6F4
  c->r[6]=R32(c->r[30]+0x00000004u); // 8028C6F8
  c->r[4]=c->r[1]+0x0000000Cu; // 8028C6FC
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8028C700
  c->r[7]=R32(c->r[30]+0x00000008u); // 8028C704
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8028C708
  c->lr=0x8028C710u; f_8028CA68(c); // 8028C70C
  cmps(c,0,(int32_t)c->r[3],0); // 8028C710
  if (!crb(c,2)) { goto L_8028C720; } // 8028C714
  c->r[3]=0u+0x00000000u; // 8028C718
  goto L_8028C8B4; // 8028C71C
L_8028C720:;
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 8028C720
  c->r[3]=c->r[31]|c->r[31]; // 8028C724
  c->r[4]=c->r[1]+0x00000028u; // 8028C728
  c->r[5]=c->r[1]+0x0000000Cu; // 8028C72C
  c->r[7]=c->r[1]+0x00000008u; // 8028C730
  c->lr=0x8028C738u; f_8028CD34(c); // 8028C734
  cmps(c,0,(int32_t)c->r[3],0); // 8028C738
  if (!crb(c,2)) { goto L_8028C748; } // 8028C73C
  c->r[3]=0u+0x00000000u; // 8028C740
  goto L_8028C8B4; // 8028C744
L_8028C748:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 8028C748
  c->r[3]=0u+0x00000002u; // 8028C74C
  cmps(c,0,(int32_t)c->r[0],2); // 8028C750
  if (crb(c,1)) { goto L_8028C75C; } // 8028C754
  c->r[3]=c->r[0]|c->r[0]; // 8028C758
L_8028C75C:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 8028C75C
  c->r[5]=R32(c->r[30]+0x00000014u); // 8028C760
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 8028C764
  c->r[7]=R32(c->r[30]+0x00000020u); // 8028C768
  c->lr=0x8028C770u; f_8028FD40(c); // 8028C76C
  cmps(c,0,(int32_t)c->r[3],0); // 8028C770
  c->r[31]=c->r[3]|c->r[3]; // 8028C774
  if (!crb(c,2)) { goto L_8028C784; } // 8028C778
  c->r[3]=0u+0x00000000u; // 8028C77C
  goto L_8028C8B4; // 8028C780
L_8028C784:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 8028C784
  c->r[0]=R32(c->r[30]+0x00000008u); // 8028C788
  W32(c->r[3]+0x000000C8u,c->r[4]); // 8028C78C
  c->r[0]=c->r[0]^0x80000000u; // 8028C790
  {uint32_t ea=c->r[2]+0xFFFF9FA0u; c->f[1]=RF64(ea);} // 8028C794
  c->r[4]=R8(c->r[1]+0x00000021u); // 8028C798
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8028C79C
  {uint32_t ea=c->r[2]+0xFFFF9F90u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028C7A0
  W32(c->r[3]+0x000000CCu,c->r[4]); // 8028C7A4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8028C7A8
  c->r[0]=R8(c->r[1]+0x00000023u); // 8028C7AC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8028C7B0
  {uint32_t ea=c->r[2]+0xFFFF9FA8u; c->f[1]=RF64(ea);} // 8028C7B4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8028C7B8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 8028C7BC
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 8028C7C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8028C7C4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 8028C7C8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 8028C7CC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8028C7D0
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[3]);} // 8028C7D4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028C7D8
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 8028C7DC
  c->r[4]=R8(c->r[1]+0x00000014u); // 8028C7E0
  c->lr=0x8028C7E8u; f_80290508(c); // 8028C7E4
  c->r[4]=R8(c->r[1]+0x00000015u); // 8028C7E8
  c->r[3]=c->r[31]|c->r[31]; // 8028C7EC
  c->lr=0x8028C7F4u; f_80290520(c); // 8028C7F0
  c->r[4]=R8(c->r[1]+0x00000016u); // 8028C7F4
  c->r[3]=c->r[31]|c->r[31]; // 8028C7F8
  c->lr=0x8028C800u; f_80290538(c); // 8028C7FC
  c->r[4]=R8(c->r[1]+0x00000017u); // 8028C800
  c->r[3]=c->r[31]|c->r[31]; // 8028C804
  c->lr=0x8028C80Cu; f_802905D8(c); // 8028C808
  c->r[4]=R8(c->r[1]+0x00000018u); // 8028C80C
  c->r[3]=c->r[31]|c->r[31]; // 8028C810
  c->lr=0x8028C818u; f_802905E0(c); // 8028C814
  c->r[3]=R8(c->r[1]+0x00000022u); // 8028C818
  c->r[0]=R32(c->r[30]+0x00000010u); // 8028C81C
  c->r[3]=c->r[3]+0xFFFFFFC0u; // 8028C820
  {uint32_t ea=c->r[2]+0xFFFF9FA0u; c->f[4]=RF64(ea);} // 8028C824
  c->r[3]=c->r[3]^0x80000000u; // 8028C828
  c->r[0]=c->r[0]^0x80000000u; // 8028C82C
  W32(c->r[1]+0x000000ACu,c->r[3]); // 8028C830
  {uint32_t ea=c->r[2]+0xFFFF9F94u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028C834
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8028C838
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8028C83C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=RF64(ea);} // 8028C840
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028C844
  {uint32_t ea=c->r[2]+0xFFFF9F98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028C848
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 8028C84C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 8028C850
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8028C854
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 8028C858
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[3]);} // 8028C85C
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 8028C860
  c->r[0]=R8(c->r[1]+0x00000020u); // 8028C864
  W32(c->r[31]+0x000000DCu,c->r[0]); // 8028C868
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8028C86C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8028C870
  c->r[0]=cntlz(c->r[0]); // 8028C874
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 8028C878
  W8(c->r[31]+0x0000003Au,c->r[0]); // 8028C87C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8028C880
  cmps(c,0,(int32_t)c->r[0],2); // 8028C884
  if (!crb(c,2)) { goto L_8028C89C; } // 8028C888
  c->r[3]=R32(c->r[1]+0x00000008u); // 8028C88C
  c->r[0]=R32(c->r[1]+0x00000010u); // 8028C890
  W32(c->r[31]+0x000000E8u,c->r[0]); // 8028C894
  W32(c->r[31]+0x000000ECu,c->r[3]); // 8028C898
L_8028C89C:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 8028C89C
  c->r[3]=c->r[31]|c->r[31]; // 8028C8A0
  c->r[4]=c->r[1]+0x00000028u; // 8028C8A4
  c->r[6]=0u+0x00000000u; // 8028C8A8
  c->lr=0x8028C8B0u; f_8028F928(c); // 8028C8AC
  c->r[3]=c->r[31]|c->r[31]; // 8028C8B0
L_8028C8B4:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8028C8B4
  c->r[31]=R32(c->r[1]+0x000000BCu); // 8028C8B8
  c->r[30]=R32(c->r[1]+0x000000B8u); // 8028C8BC
  c->lr=c->r[0]; // 8028C8C0
  c->r[1]=c->r[1]+0x000000C0u; // 8028C8C4
  return; // 8028C8C8
}

// __ct__Q44nw4r3snd6detail14BankFileReaderFPCv
void f_8028C8CC(Ctx* __restrict c) {
  trace_call(0x8028C8CCu);
  c->r[5]=R32(c->r[4]+0x00000000u); // 8028C8CC
  c->r[6]=0u+0x00000000u; // 8028C8D0
  W32(c->r[3]+0x00000000u,c->r[6]); // 8028C8D4
  c->r[0]=c->r[5]+0xADBE0000u; // 8028C8D8
  cmpu(c,0,c->r[0],0x00004E4Bu); // 8028C8DC
  W32(c->r[3]+0x00000004u,c->r[6]); // 8028C8E0
  W32(c->r[3]+0x00000008u,c->r[6]); // 8028C8E4
  if (crb(c,2)) { goto L_8028C8F4; } // 8028C8E8
  c->r[0]=0u+0x00000000u; // 8028C8EC
  goto L_8028C920; // 8028C8F0
L_8028C8F4:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 8028C8F4
  cmpu(c,0,c->r[6],0x00000100u); // 8028C8F8
  if (!crb(c,0)) { goto L_8028C908; } // 8028C8FC
  c->r[0]=0u+0x00000000u; // 8028C900
  goto L_8028C920; // 8028C904
L_8028C908:;
  c->r[0]=addc(c,~c->r[6],0x00000102u,1); // 8028C908
  c->r[5]=0u+0x00000102u; // 8028C90C
  c->r[5]=c->r[5]|~c->r[6]; // 8028C910
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8028C914
  c->r[0]=c->r[5]-c->r[0]; // 8028C918
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8028C91C
L_8028C920:;
  cmps(c,0,(int32_t)c->r[0],0); // 8028C920
  if (crb(c,2)) return; // 8028C924
  c->r[0]=R32(c->r[4]+0x00000010u); // 8028C928
  W32(c->r[3]+0x00000000u,c->r[4]); // 8028C92C
  cmps(c,0,(int32_t)c->r[0],0); // 8028C930
  if (crb(c,2)) { goto L_8028C940; } // 8028C934
  c->r[0]=c->r[0]+c->r[4]; // 8028C938
  W32(c->r[3]+0x00000004u,c->r[0]); // 8028C93C
L_8028C940:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8028C940
  c->r[0]=R32(c->r[4]+0x00000018u); // 8028C944
  cmps(c,0,(int32_t)c->r[0],0); // 8028C948
  if (crb(c,2)) return; // 8028C94C
  c->r[0]=c->r[0]+c->r[4]; // 8028C950
  W32(c->r[3]+0x00000008u,c->r[0]); // 8028C954
  return; // 8028C958
}

// GetInstParam__Q44nw4r3snd6detail14BankFileReaderCFiii
void f_8028C95C(Ctx* __restrict c) {
  trace_call(0x8028C95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028C95C
  c->r[0]=c->lr; // 8028C960
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028C964
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028C968
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028C96C
  c->r[31]=c->r[6]|c->r[6]; // 8028C970
  cmps(c,0,(int32_t)c->r[0],0); // 8028C974
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028C978
  c->r[30]=c->r[3]|c->r[3]; // 8028C97C
  if (!crb(c,2)) { goto L_8028C98C; } // 8028C980
  c->r[3]=0u+0x00000000u; // 8028C984
  goto L_8028CA50; // 8028C988
L_8028C98C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8028C98C
  if (crb(c,0)) { goto L_8028C9A4; } // 8028C990
  c->r[6]=R32(c->r[3]+0x00000004u); // 8028C994
  c->r[0]=R32(c->r[6]+0x00000008u); // 8028C998
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8028C99C
  if (crb(c,0)) { goto L_8028C9AC; } // 8028C9A0
L_8028C9A4:;
  c->r[3]=0u+0x00000000u; // 8028C9A4
  goto L_8028CA50; // 8028C9A8
L_8028C9AC:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8028C9AC
  c->r[4]=c->r[6]+c->r[0]; // 8028C9B0
  c->r[4]=c->r[4]+0x0000000Cu; // 8028C9B4
  c->r[0]=R8(c->r[4]+0x00000001u); // 8028C9B8
  cmpu(c,0,c->r[0],0x00000004u); // 8028C9BC
  if (!crb(c,2)) { goto L_8028C9CC; } // 8028C9C0
  c->r[3]=0u+0x00000000u; // 8028C9C4
  goto L_8028CA50; // 8028C9C8
L_8028C9CC:;
  cmpu(c,0,c->r[0],0x00000001u); // 8028C9CC
  if (crb(c,2)) { goto L_8028C9EC; } // 8028C9D0
  c->lr=0x8028C9D8u; f_8028CC0C(c); // 8028C9D4
  cmps(c,0,(int32_t)c->r[3],0); // 8028C9D8
  c->r[4]=c->r[3]|c->r[3]; // 8028C9DC
  if (!crb(c,2)) { goto L_8028C9EC; } // 8028C9E0
  c->r[3]=0u+0x00000000u; // 8028C9E4
  goto L_8028CA50; // 8028C9E8
L_8028C9EC:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 8028C9EC
  cmpu(c,0,c->r[0],0x00000004u); // 8028C9F0
  if (!crb(c,2)) { goto L_8028CA00; } // 8028C9F4
  c->r[3]=0u+0x00000000u; // 8028C9F8
  goto L_8028CA50; // 8028C9FC
L_8028CA00:;
  cmpu(c,0,c->r[0],0x00000001u); // 8028CA00
  if (crb(c,2)) { goto L_8028CA28; } // 8028CA04
  c->r[3]=c->r[30]|c->r[30]; // 8028CA08
  c->r[5]=c->r[31]|c->r[31]; // 8028CA0C
  c->lr=0x8028CA14u; f_8028CC0C(c); // 8028CA10
  cmps(c,0,(int32_t)c->r[3],0); // 8028CA14
  c->r[4]=c->r[3]|c->r[3]; // 8028CA18
  if (!crb(c,2)) { goto L_8028CA28; } // 8028CA1C
  c->r[3]=0u+0x00000000u; // 8028CA20
  goto L_8028CA50; // 8028CA24
L_8028CA28:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 8028CA28
  cmpu(c,0,c->r[0],0x00000001u); // 8028CA2C
  if (crb(c,2)) { goto L_8028CA3C; } // 8028CA30
  c->r[3]=0u+0x00000000u; // 8028CA34
  goto L_8028CA50; // 8028CA38
L_8028CA3C:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 8028CA3C
  c->r[3]=R8(c->r[4]+0x00000000u); // 8028CA40
  c->r[4]=R32(c->r[4]+0x00000004u); // 8028CA44
  c->r[5]=c->r[5]+0x00000008u; // 8028CA48
  c->lr=0x8028CA50u; f_802A5D40(c); // 8028CA4C
L_8028CA50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028CA50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028CA54
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028CA58
  c->lr=c->r[0]; // 8028CA5C
  c->r[1]=c->r[1]+0x00000010u; // 8028CA60
  return; // 8028CA64
}

// ReadInstInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8InstInfoiii
void f_8028CA68(Ctx* __restrict c) {
  trace_call(0x8028CA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028CA68
  c->r[0]=c->lr; // 8028CA6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028CA70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028CA74
  c->r[31]=c->r[4]|c->r[4]; // 8028CA78
  c->r[4]=c->r[5]|c->r[5]; // 8028CA7C
  c->r[5]=c->r[6]|c->r[6]; // 8028CA80
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028CA84
  c->r[30]=c->r[3]|c->r[3]; // 8028CA88
  c->r[6]=c->r[7]|c->r[7]; // 8028CA8C
  c->lr=0x8028CA94u; f_8028C95C(c); // 8028CA90
  cmps(c,0,(int32_t)c->r[3],0); // 8028CA94
  if (!crb(c,2)) { goto L_8028CAA4; } // 8028CA98
  c->r[3]=0u+0x00000000u; // 8028CA9C
  goto L_8028CBF4; // 8028CAA0
L_8028CAA4:;
  c->r[0]=R8(c->r[3]+0x00000009u); // 8028CAA4
  cmps(c,0,(int32_t)c->r[0],0); // 8028CAA8
  if (!crb(c,2)) { goto L_8028CAD8; } // 8028CAAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028CAB0
  cmps(c,0,(int32_t)c->r[0],0); // 8028CAB4
  if (!crb(c,0)) { goto L_8028CAC4; } // 8028CAB8
  c->r[3]=0u+0x00000000u; // 8028CABC
  goto L_8028CBF4; // 8028CAC0
L_8028CAC4:;
  c->r[0]=0u+0x00000000u; // 8028CAC4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8028CAC8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028CACC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028CAD0
  goto L_8028CB40; // 8028CAD4
L_8028CAD8:;
  cmpu(c,0,c->r[0],0x00000001u); // 8028CAD8
  if (!crb(c,2)) { goto L_8028CB08; } // 8028CADC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028CAE0
  cmps(c,0,(int32_t)c->r[0],0); // 8028CAE4
  if (!crb(c,2)) { goto L_8028CAF4; } // 8028CAE8
  c->r[3]=0u+0x00000000u; // 8028CAEC
  goto L_8028CBF4; // 8028CAF0
L_8028CAF4:;
  c->r[0]=0u+0x00000001u; // 8028CAF4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8028CAF8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028CAFC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028CB00
  goto L_8028CB40; // 8028CB04
L_8028CB08:;
  cmpu(c,0,c->r[0],0x00000002u); // 8028CB08
  if (!crb(c,2)) { goto L_8028CB38; } // 8028CB0C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028CB10
  cmps(c,0,(int32_t)c->r[0],0); // 8028CB14
  if (!crb(c,2)) { goto L_8028CB24; } // 8028CB18
  c->r[3]=0u+0x00000000u; // 8028CB1C
  goto L_8028CBF4; // 8028CB20
L_8028CB24:;
  c->r[0]=0u+0x00000002u; // 8028CB24
  W32(c->r[31]+0x00000000u,c->r[0]); // 8028CB28
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028CB2C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8028CB30
  goto L_8028CB40; // 8028CB34
L_8028CB38:;
  c->r[3]=0u+0x00000000u; // 8028CB38
  goto L_8028CBF4; // 8028CB3C
L_8028CB40:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 8028CB40
  c->r[4]=R32(c->r[30]+0x00000000u); // 8028CB44
  W8(c->r[31]+0x00000008u,c->r[0]); // 8028CB48
  c->r[0]=R8(c->r[3]+0x00000008u); // 8028CB4C
  W8(c->r[31]+0x00000009u,c->r[0]); // 8028CB50
  c->r[0]=R8(c->r[3]+0x00000005u); // 8028CB54
  W8(c->r[31]+0x0000000Au,c->r[0]); // 8028CB58
  c->r[0]=R8(c->r[3]+0x00000006u); // 8028CB5C
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 8028CB60
  c->r[0]=R8(c->r[3]+0x00000007u); // 8028CB64
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 8028CB68
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8028CB6C
  W8(c->r[31]+0x00000015u,c->r[0]); // 8028CB70
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 8028CB74
  W8(c->r[31]+0x00000016u,c->r[0]); // 8028CB78
  c->r[0]=R16(c->r[4]+0x00000006u); // 8028CB7C
  cmpu(c,0,c->r[0],0x00000101u); // 8028CB80
  if (crb(c,0)) { goto L_8028CB9C; } // 8028CB84
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8028CB88
  W8(c->r[31]+0x00000017u,c->r[0]); // 8028CB8C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028CB90
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8028CB94
  goto L_8028CBAC; // 8028CB98
L_8028CB9C:;
  {uint32_t ea=c->r[2]+0xFFFF9FB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028CB9C
  c->r[0]=0u+0x0000007Fu; // 8028CBA0
  W8(c->r[31]+0x00000017u,c->r[0]); // 8028CBA4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8028CBA8
L_8028CBAC:;
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8028CBAC
  cmps(c,0,(int32_t)c->r[0],1); // 8028CBB0
  if (crb(c,2)) { goto L_8028CBD4; } // 8028CBB4
  if (!crb(c,0)) { goto L_8028CBE0; } // 8028CBB8
  cmps(c,0,(int32_t)c->r[0],0); // 8028CBBC
  if (!crb(c,0)) { goto L_8028CBC8; } // 8028CBC0
  goto L_8028CBE0; // 8028CBC4
L_8028CBC8:;
  c->r[0]=0u+0x00000000u; // 8028CBC8
  W32(c->r[31]+0x00000010u,c->r[0]); // 8028CBCC
  goto L_8028CBE8; // 8028CBD0
L_8028CBD4:;
  c->r[0]=0u+0x00000001u; // 8028CBD4
  W32(c->r[31]+0x00000010u,c->r[0]); // 8028CBD8
  goto L_8028CBE8; // 8028CBDC
L_8028CBE0:;
  c->r[3]=0u+0x00000000u; // 8028CBE0
  goto L_8028CBF4; // 8028CBE4
L_8028CBE8:;
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 8028CBE8
  c->r[3]=0u+0x00000001u; // 8028CBEC
  W8(c->r[31]+0x00000014u,c->r[0]); // 8028CBF0
L_8028CBF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028CBF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028CBF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028CBFC
  c->lr=c->r[0]; // 8028CC00
  c->r[1]=c->r[1]+0x00000010u; // 8028CC04
  return; // 8028CC08
}

// GetReferenceToSubRegion__Q44nw4r3snd6detail14BankFileReaderCFPCQ54nw4r3snd6detail4Util128DataRef<v,Q54nw4r3snd6detail8BankFile9InstParam,Q54nw4r3snd6detail8BankFile10RangeTable,Q54nw4r3snd6detail8BankFile10IndexTable>i
void f_8028CC0C(Ctx* __restrict c) {
  trace_call(0x8028CC0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028CC0C
  c->r[0]=c->lr; // 8028CC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028CC14
  c->r[0]=R8(c->r[4]+0x00000001u); // 8028CC18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028CC1C
  c->r[31]=c->r[5]|c->r[5]; // 8028CC20
  cmps(c,0,(int32_t)c->r[0],2); // 8028CC24
  c->r[5]=0u+0x00000000u; // 8028CC28
  if (crb(c,2)) { goto L_8028CC58; } // 8028CC2C
  if (!crb(c,0)) { goto L_8028CC44; } // 8028CC30
  cmps(c,0,(int32_t)c->r[0],0); // 8028CC34
  if (crb(c,2)) { goto L_8028CD1C; } // 8028CC38
  if (!crb(c,0)) { goto L_8028CC50; } // 8028CC3C
  goto L_8028CD1C; // 8028CC40
L_8028CC44:;
  cmps(c,0,(int32_t)c->r[0],4); // 8028CC44
  if (!crb(c,0)) { goto L_8028CD1C; } // 8028CC48
  goto L_8028CCC8; // 8028CC4C
L_8028CC50:;
  c->r[5]=c->r[4]|c->r[4]; // 8028CC50
  goto L_8028CD1C; // 8028CC54
L_8028CC58:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 8028CC58
  c->r[3]=R8(c->r[4]+0x00000000u); // 8028CC5C
  c->r[4]=R32(c->r[4]+0x00000004u); // 8028CC60
  c->r[5]=c->r[5]+0x00000008u; // 8028CC64
  c->lr=0x8028CC6Cu; f_802A5D40(c); // 8028CC68
  cmps(c,0,(int32_t)c->r[3],0); // 8028CC6C
  if (!crb(c,2)) { goto L_8028CC7C; } // 8028CC70
  c->r[3]=0u+0x00000000u; // 8028CC74
  goto L_8028CD20; // 8028CC78
L_8028CC7C:;
  c->r[5]=0u+0x00000000u; // 8028CC7C
  goto L_8028CC9C; // 8028CC80
L_8028CC84:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8028CC84
  c->r[5]=c->r[5]+0x00000001u; // 8028CC88
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8028CC8C
  if (crb(c,0)) { goto L_8028CC9C; } // 8028CC90
  c->r[3]=0u+0x00000000u; // 8028CC94
  goto L_8028CD20; // 8028CC98
L_8028CC9C:;
  c->r[4]=c->r[3]+c->r[5]; // 8028CC9C
  c->r[0]=R8(c->r[4]+0x00000001u); // 8028CCA0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8028CCA4
  if (crb(c,1)) { IRQCHK(c); goto L_8028CC84; } // 8028CCA8
  c->r[4]=R8(c->r[3]+0x00000000u); // 8028CCAC
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8028CCB0
  c->r[0]=c->r[3]+c->r[0]; // 8028CCB4
  c->r[3]=c->r[4]+0x00000004u; // 8028CCB8
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFCu; // 8028CCBC
  c->r[5]=c->r[3]+c->r[0]; // 8028CCC0
  goto L_8028CD1C; // 8028CCC4
L_8028CCC8:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 8028CCC8
  c->r[3]=R8(c->r[4]+0x00000000u); // 8028CCCC
  c->r[4]=R32(c->r[4]+0x00000004u); // 8028CCD0
  c->r[5]=c->r[5]+0x00000008u; // 8028CCD4
  c->lr=0x8028CCDCu; f_802A5D40(c); // 8028CCD8
  cmps(c,0,(int32_t)c->r[3],0); // 8028CCDC
  if (!crb(c,2)) { goto L_8028CCEC; } // 8028CCE0
  c->r[3]=0u+0x00000000u; // 8028CCE4
  goto L_8028CD20; // 8028CCE8
L_8028CCEC:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 8028CCEC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[4]); // 8028CCF0
  if (crb(c,0)) { goto L_8028CD04; } // 8028CCF4
  c->r[0]=R8(c->r[3]+0x00000001u); // 8028CCF8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8028CCFC
  if (!crb(c,1)) { goto L_8028CD0C; } // 8028CD00
L_8028CD04:;
  c->r[3]=0u+0x00000000u; // 8028CD04
  goto L_8028CD20; // 8028CD08
L_8028CD0C:;
  c->r[0]=c->r[31]-c->r[4]; // 8028CD0C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8028CD10
  c->r[3]=c->r[3]+c->r[0]; // 8028CD14
  c->r[5]=c->r[3]+0x00000004u; // 8028CD18
L_8028CD1C:;
  c->r[3]=c->r[5]|c->r[5]; // 8028CD1C
L_8028CD20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028CD20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028CD24
  c->lr=c->r[0]; // 8028CD28
  c->r[1]=c->r[1]+0x00000010u; // 8028CD2C
  return; // 8028CD30
}

// ReadWaveInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8WaveInfoRCQ54nw4r3snd6detail8InstInfo16WaveDataLocationPCvPPCQ44nw4r3snd6detail8WaveInfo
void f_8028CD34(Ctx* __restrict c) {
  trace_call(0x8028CD34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028CD34
  c->r[0]=c->lr; // 8028CD38
  cmps(c,0,(int32_t)c->r[7],0); // 8028CD3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028CD40
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8028CD44
  c->r[31]=c->r[4]|c->r[4]; // 8028CD48
  W32(c->r[1]+0x00000028u,c->r[30]); // 8028CD4C
  c->r[30]=c->r[7]|c->r[7]; // 8028CD50
  W32(c->r[1]+0x00000024u,c->r[29]); // 8028CD54
  c->r[29]=c->r[6]|c->r[6]; // 8028CD58
  if (crb(c,2)) { goto L_8028CD68; } // 8028CD5C
  c->r[0]=0u+0x00000000u; // 8028CD60
  W32(c->r[7]+0x00000000u,c->r[0]); // 8028CD64
L_8028CD68:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028CD68
  cmps(c,0,(int32_t)c->r[0],0); // 8028CD6C
  if (!crb(c,2)) { goto L_8028CD7C; } // 8028CD70
  c->r[3]=0u+0x00000000u; // 8028CD74
  goto L_8028CF6C; // 8028CD78
L_8028CD7C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8028CD7C
  cmps(c,0,(int32_t)c->r[0],0); // 8028CD80
  if (!crb(c,2)) { goto L_8028CE3C; } // 8028CD84
  c->r[3]=R32(c->r[3]+0x00000008u); // 8028CD88
  c->r[30]=R32(c->r[5]+0x00000004u); // 8028CD8C
  cmps(c,0,(int32_t)c->r[3],0); // 8028CD90
  if (!crb(c,2)) { goto L_8028CDE0; } // 8028CD94
  c->r[4]=c->r[29]|c->r[29]; // 8028CD98
  c->r[3]=c->r[1]+0x00000010u; // 8028CD9C
  c->lr=0x8028CDA4u; f_802A5D64(c); // 8028CDA0
  c->r[4]=c->r[30]|c->r[30]; // 8028CDA4
  c->r[3]=c->r[1]+0x00000010u; // 8028CDA8
  c->lr=0x8028CDB0u; f_802A5DD8(c); // 8028CDAC
  cmps(c,0,(int32_t)c->r[3],0); // 8028CDB0
  if (!crb(c,2)) { goto L_8028CDC0; } // 8028CDB4
  c->r[3]=0u+0x00000000u; // 8028CDB8
  goto L_8028CF6C; // 8028CDBC
L_8028CDC0:;
  c->r[4]=c->r[3]|c->r[3]; // 8028CDC0
  c->r[3]=c->r[1]+0x0000000Cu; // 8028CDC4
  c->lr=0x8028CDCCu; f_802A5E60(c); // 8028CDC8
  c->r[4]=c->r[31]|c->r[31]; // 8028CDCC
  c->r[3]=c->r[1]+0x0000000Cu; // 8028CDD0
  c->r[5]=0u+0x00000000u; // 8028CDD4
  c->lr=0x8028CDDCu; f_802A5E88(c); // 8028CDD8
  goto L_8028CF6C; // 8028CDDC
L_8028CDE0:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8028CDE0
  c->r[5]=c->r[3]+0x00000008u; // 8028CDE4
  cmpu(c,0,c->r[30],c->r[0]); // 8028CDE8
  if (crb(c,0)) { goto L_8028CDF8; } // 8028CDEC
  c->r[3]=0u+0x00000000u; // 8028CDF0
  goto L_8028CF6C; // 8028CDF4
L_8028CDF8:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8028CDF8
  c->r[4]=c->r[3]+c->r[0]; // 8028CDFC
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 8028CE00
  c->r[4]=R32(c->r[4]+0x00000010u); // 8028CE04
  c->lr=0x8028CE0Cu; f_802A5D40(c); // 8028CE08
  cmps(c,0,(int32_t)c->r[3],0); // 8028CE0C
  if (!crb(c,2)) { goto L_8028CE1C; } // 8028CE10
  c->r[3]=0u+0x00000000u; // 8028CE14
  goto L_8028CF6C; // 8028CE18
L_8028CE1C:;
  c->r[4]=c->r[3]|c->r[3]; // 8028CE1C
  c->r[3]=c->r[1]+0x00000008u; // 8028CE20
  c->lr=0x8028CE28u; f_802A5E80(c); // 8028CE24
  c->r[4]=c->r[31]|c->r[31]; // 8028CE28
  c->r[5]=c->r[29]|c->r[29]; // 8028CE2C
  c->r[3]=c->r[1]+0x00000008u; // 8028CE30
  c->lr=0x8028CE38u; f_802A5E88(c); // 8028CE34
  goto L_8028CF6C; // 8028CE38
L_8028CE3C:;
  cmps(c,0,(int32_t)c->r[0],1); // 8028CE3C
  if (!crb(c,2)) { goto L_8028CEC4; } // 8028CE40
  c->r[0]=R32(c->r[5]+0x00000004u); // 8028CE44
  cmps(c,0,(int32_t)c->r[0],0); // 8028CE48
  if (!crb(c,2)) { goto L_8028CE58; } // 8028CE4C
  c->r[3]=0u+0x00000000u; // 8028CE50
  goto L_8028CF6C; // 8028CE54
L_8028CE58:;
  cmps(c,0,(int32_t)c->r[7],0); // 8028CE58
  if (crb(c,2)) { goto L_8028CE64; } // 8028CE5C
  W32(c->r[7]+0x00000000u,c->r[0]); // 8028CE60
L_8028CE64:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 8028CE64
  c->r[0]=0u+0x0000000Du; // 8028CE68
  c->r[6]=c->r[4]+0x00000014u; // 8028CE6C
  c->r[3]=R32(c->r[7]+0x00000000u); // 8028CE70
  c->r[5]=c->r[7]+0x00000014u; // 8028CE74
  W32(c->r[4]+0x00000000u,c->r[3]); // 8028CE78
  c->r[3]=R8(c->r[7]+0x00000004u); // 8028CE7C
  W8(c->r[4]+0x00000004u,c->r[3]); // 8028CE80
  c->r[3]=R32(c->r[7]+0x00000008u); // 8028CE84
  W32(c->r[4]+0x00000008u,c->r[3]); // 8028CE88
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 8028CE8C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8028CE90
  c->r[3]=R32(c->r[7]+0x00000010u); // 8028CE94
  W32(c->r[4]+0x00000010u,c->r[3]); // 8028CE98
  c->r[3]=R32(c->r[7]+0x00000014u); // 8028CE9C
  W32(c->r[4]+0x00000014u,c->r[3]); // 8028CEA0
  c->ctr=c->r[0]; // 8028CEA4
L_8028CEA8:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 8028CEA8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8028CEAC
  W32(c->r[6]+0x00000004u,c->r[3]); // 8028CEB0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8028CEB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028CEA8; } // 8028CEB8
  c->r[3]=0u+0x00000001u; // 8028CEBC
  goto L_8028CF6C; // 8028CEC0
L_8028CEC4:;
  cmps(c,0,(int32_t)c->r[0],2); // 8028CEC4
  if (!crb(c,2)) { goto L_8028CF68; } // 8028CEC8
  c->r[3]=R32(c->r[5]+0x00000004u); // 8028CECC
  cmps(c,0,(int32_t)c->r[3],0); // 8028CED0
  if (!crb(c,2)) { goto L_8028CEE0; } // 8028CED4
  c->r[3]=0u+0x00000000u; // 8028CED8
  goto L_8028CF6C; // 8028CEDC
L_8028CEE0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028CEE0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8028CEE4
  c->ctr=c->r[12]; // 8028CEE8
  if (true) { c->lr=0x8028CEF0u; dispatch(c,c->ctr); } // 8028CEEC
  cmps(c,0,(int32_t)c->r[3],0); // 8028CEF0
  if (!crb(c,2)) { goto L_8028CF00; } // 8028CEF4
  c->r[3]=0u+0x00000000u; // 8028CEF8
  goto L_8028CF6C; // 8028CEFC
L_8028CF00:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028CF00
  if (crb(c,2)) { goto L_8028CF0C; } // 8028CF04
  W32(c->r[30]+0x00000000u,c->r[3]); // 8028CF08
L_8028CF0C:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 8028CF0C
  c->r[4]=c->r[3]+0x00000014u; // 8028CF10
  c->r[0]=0u+0x0000000Du; // 8028CF14
  c->r[5]=c->r[31]+0x00000014u; // 8028CF18
  W32(c->r[31]+0x00000000u,c->r[6]); // 8028CF1C
  c->r[6]=R8(c->r[3]+0x00000004u); // 8028CF20
  W8(c->r[31]+0x00000004u,c->r[6]); // 8028CF24
  c->r[6]=R32(c->r[3]+0x00000008u); // 8028CF28
  W32(c->r[31]+0x00000008u,c->r[6]); // 8028CF2C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 8028CF30
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 8028CF34
  c->r[6]=R32(c->r[3]+0x00000010u); // 8028CF38
  W32(c->r[31]+0x00000010u,c->r[6]); // 8028CF3C
  c->r[3]=R32(c->r[3]+0x00000014u); // 8028CF40
  W32(c->r[31]+0x00000014u,c->r[3]); // 8028CF44
  c->ctr=c->r[0]; // 8028CF48
L_8028CF4C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8028CF4C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8028CF50
  W32(c->r[5]+0x00000004u,c->r[3]); // 8028CF54
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8028CF58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028CF4C; } // 8028CF5C
  c->r[3]=0u+0x00000001u; // 8028CF60
  goto L_8028CF6C; // 8028CF64
L_8028CF68:;
  c->r[3]=0u+0x00000000u; // 8028CF68
L_8028CF6C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8028CF6C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8028CF70
  c->r[30]=R32(c->r[1]+0x00000028u); // 8028CF74
  c->r[29]=R32(c->r[1]+0x00000024u); // 8028CF78
  c->lr=c->r[0]; // 8028CF7C
  c->r[1]=c->r[1]+0x00000030u; // 8028CF80
  return; // 8028CF84
}

// fn_8028CF88
void f_8028CF88(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9FBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028CF88
  c->r[4]=0u+0x00000000u; // 8028CF8C
  {uint32_t ea=c->r[2]+0xFFFF9FB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028CF90
  c->r[0]=0u+0x00000001u; // 8028CF94
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8028CF98
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8028CF9C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8028CFA0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8028CFA4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8028CFA8
  W8(c->r[3]+0x00000018u,c->r[4]); // 8028CFAC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8028CFB0
  W8(c->r[3]+0x00000019u,c->r[4]); // 8028CFB4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8028CFB8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 8028CFBC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8028CFC0
  W32(c->r[3]+0x00000028u,c->r[4]); // 8028CFC4
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8028CFC8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8028CFCC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8028CFD0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8028CFD4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 8028CFD8
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8028CFDC
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 8028CFE0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8028CFE4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 8028CFE8
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8028CFEC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8028CFF0
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 8028CFF4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8028CFF8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 8028CFFC
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 8028D000
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 8028D004
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 8028D008
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 8028D00C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8028D010
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 8028D014
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8028D018
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8028D01C
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 8028D020
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[1]);} // 8028D024
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 8028D028
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8028D02C
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 8028D030
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 8028D034
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028D038
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 8028D03C
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 8028D040
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 8028D044
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 8028D048
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 8028D04C
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 8028D050
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 8028D054
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 8028D058
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 8028D05C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 8028D060
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 8028D064
  return; // 8028D068
}

// fn_8028D06C
void f_8028D06C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028D06C
  c->r[0]=c->lr; // 8028D070
  c->r[4]=0u+0x80340000u; // 8028D074
  {uint32_t ea=c->r[2]+0xFFFF9FBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D078
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028D07C
  c->r[6]=c->r[3]+0x00000088u; // 8028D080
  c->r[5]=c->r[3]+0x000000D0u; // 8028D084
  {uint32_t ea=c->r[2]+0xFFFF9FB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028D08C
  c->r[4]=c->r[4]+0x00005E60u; // 8028D090
  cmpu(c,0,c->r[6],c->r[5]); // 8028D094
  c->r[31]=c->r[3]|c->r[3]; // 8028D098
  W32(c->r[3]+0x00000000u,c->r[4]); // 8028D09C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 8028D0A0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 8028D0A4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 8028D0A8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8028D0AC
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8028D0B0
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 8028D0B4
  if (!crb(c,0)) { goto L_8028D290; } // 8028D0B8
  c->r[8]=c->r[3]+0x00000088u; // 8028D0BC
  c->r[4]=0u+0x2AAB0000u; // 8028D0C0
  c->r[9]=c->r[5]-c->r[8]; // 8028D0C4
  c->r[7]=c->r[3]+0x00000010u; // 8028D0C8
  c->r[10]=c->r[9]+0x00000017u; // 8028D0CC
  c->r[0]=c->r[4]+0xFFFFAAABu; // 8028D0D0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[10])>>32); // 8028D0D4
  c->r[0]=sraw(c,c->r[0],2); // 8028D0D8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8028D0DC
  c->r[11]=c->r[0]+c->r[4]; // 8028D0E0
  c->r[12]=c->r[11]+0x00000001u; // 8028D0E4
  cmps(c,0,(int32_t)c->r[12],8); // 8028D0E8
  if (!crb(c,1)) { goto L_8028D248; } // 8028D0EC
  cmpu(c,0,c->r[8],c->r[5]); // 8028D0F0
  c->r[4]=0u+0x00000000u; // 8028D0F4
  c->r[5]=0u+0x00000000u; // 8028D0F8
  if (crb(c,1)) { goto L_8028D124; } // 8028D0FC
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 8028D100
  c->r[8]=0u+0x00000001u; // 8028D104
  if (!crb(c,2)) { goto L_8028D118; } // 8028D108
  c->r[0]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[0]); // 8028D10C
  if (crb(c,2)) { goto L_8028D118; } // 8028D110
  c->r[8]=0u+0x00000000u; // 8028D114
L_8028D118:;
  cmps(c,0,(int32_t)c->r[8],0); // 8028D118
  if (crb(c,2)) { goto L_8028D124; } // 8028D11C
  c->r[5]=0u+0x00000001u; // 8028D120
L_8028D124:;
  cmps(c,0,(int32_t)c->r[5],0); // 8028D124
  if (crb(c,2)) { goto L_8028D154; } // 8028D128
  c->r[8]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[8]); // 8028D12C
  c->r[5]=0u+0x00000001u; // 8028D130
  if (!crb(c,2)) { goto L_8028D148; } // 8028D134
  c->r[0]=rotl(c->r[12],0)&0x80000000u; // 8028D138
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8028D13C
  if (crb(c,2)) { goto L_8028D148; } // 8028D140
  c->r[5]=0u+0x00000000u; // 8028D144
L_8028D148:;
  cmps(c,0,(int32_t)c->r[5],0); // 8028D148
  if (crb(c,2)) { goto L_8028D154; } // 8028D14C
  c->r[4]=0u+0x00000001u; // 8028D150
L_8028D154:;
  cmps(c,0,(int32_t)c->r[4],0); // 8028D154
  if (crb(c,2)) { goto L_8028D248; } // 8028D158
  c->r[4]=c->r[7]+0x000000BFu; // 8028D15C
  c->r[0]=0u+0x000000C0u; // 8028D160
  c->r[4]=c->r[4]-c->r[6]; // 8028D164
  {uint32_t ea=c->r[2]+0xFFFF9FB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D168
  c->r[4]=divwu(c->r[4],c->r[0]); // 8028D16C
  {uint32_t ea=c->r[2]+0xFFFF9FBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D170
  c->ctr=c->r[4]; // 8028D174
  cmpu(c,0,c->r[6],c->r[7]); // 8028D178
  if (!crb(c,0)) { goto L_8028D248; } // 8028D17C
L_8028D180:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 8028D180
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 8028D184
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 8028D188
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 8028D18C
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 8028D190
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 8028D194
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[1]);} // 8028D198
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[1]);} // 8028D19C
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[0]);} // 8028D1A0
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[0]);} // 8028D1A4
  {uint32_t ea=c->r[6]+0x00000028u; WF32(ea,c->f[0]);} // 8028D1A8
  {uint32_t ea=c->r[6]+0x0000002Cu; WF32(ea,c->f[0]);} // 8028D1AC
  {uint32_t ea=c->r[6]+0x00000030u; WF32(ea,c->f[1]);} // 8028D1B0
  {uint32_t ea=c->r[6]+0x00000034u; WF32(ea,c->f[1]);} // 8028D1B4
  {uint32_t ea=c->r[6]+0x00000038u; WF32(ea,c->f[0]);} // 8028D1B8
  {uint32_t ea=c->r[6]+0x0000003Cu; WF32(ea,c->f[0]);} // 8028D1BC
  {uint32_t ea=c->r[6]+0x00000040u; WF32(ea,c->f[0]);} // 8028D1C0
  {uint32_t ea=c->r[6]+0x00000044u; WF32(ea,c->f[0]);} // 8028D1C4
  {uint32_t ea=c->r[6]+0x00000048u; WF32(ea,c->f[1]);} // 8028D1C8
  {uint32_t ea=c->r[6]+0x0000004Cu; WF32(ea,c->f[1]);} // 8028D1CC
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 8028D1D0
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 8028D1D4
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 8028D1D8
  {uint32_t ea=c->r[6]+0x0000005Cu; WF32(ea,c->f[0]);} // 8028D1DC
  {uint32_t ea=c->r[6]+0x00000060u; WF32(ea,c->f[1]);} // 8028D1E0
  {uint32_t ea=c->r[6]+0x00000064u; WF32(ea,c->f[1]);} // 8028D1E4
  {uint32_t ea=c->r[6]+0x00000068u; WF32(ea,c->f[0]);} // 8028D1E8
  {uint32_t ea=c->r[6]+0x0000006Cu; WF32(ea,c->f[0]);} // 8028D1EC
  {uint32_t ea=c->r[6]+0x00000070u; WF32(ea,c->f[0]);} // 8028D1F0
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 8028D1F4
  {uint32_t ea=c->r[6]+0x00000078u; WF32(ea,c->f[1]);} // 8028D1F8
  {uint32_t ea=c->r[6]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028D1FC
  {uint32_t ea=c->r[6]+0x00000080u; WF32(ea,c->f[0]);} // 8028D200
  {uint32_t ea=c->r[6]+0x00000084u; WF32(ea,c->f[0]);} // 8028D204
  {uint32_t ea=c->r[6]+0x00000088u; WF32(ea,c->f[0]);} // 8028D208
  {uint32_t ea=c->r[6]+0x0000008Cu; WF32(ea,c->f[0]);} // 8028D20C
  {uint32_t ea=c->r[6]+0x00000090u; WF32(ea,c->f[1]);} // 8028D210
  {uint32_t ea=c->r[6]+0x00000094u; WF32(ea,c->f[1]);} // 8028D214
  {uint32_t ea=c->r[6]+0x00000098u; WF32(ea,c->f[0]);} // 8028D218
  {uint32_t ea=c->r[6]+0x0000009Cu; WF32(ea,c->f[0]);} // 8028D21C
  {uint32_t ea=c->r[6]+0x000000A0u; WF32(ea,c->f[0]);} // 8028D220
  {uint32_t ea=c->r[6]+0x000000A4u; WF32(ea,c->f[0]);} // 8028D224
  {uint32_t ea=c->r[6]+0x000000A8u; WF32(ea,c->f[1]);} // 8028D228
  {uint32_t ea=c->r[6]+0x000000ACu; WF32(ea,c->f[1]);} // 8028D22C
  {uint32_t ea=c->r[6]+0x000000B0u; WF32(ea,c->f[0]);} // 8028D230
  {uint32_t ea=c->r[6]+0x000000B4u; WF32(ea,c->f[0]);} // 8028D234
  {uint32_t ea=c->r[6]+0x000000B8u; WF32(ea,c->f[0]);} // 8028D238
  {uint32_t ea=c->r[6]+0x000000BCu; WF32(ea,c->f[0]);} // 8028D23C
  c->r[6]=c->r[6]+0x000000C0u; // 8028D240
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028D180; } // 8028D244
L_8028D248:;
  c->r[5]=c->r[3]+0x000000D0u; // 8028D248
  c->r[0]=0u+0x00000018u; // 8028D24C
  c->r[4]=c->r[5]+0x00000017u; // 8028D250
  {uint32_t ea=c->r[2]+0xFFFF9FB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D254
  c->r[4]=c->r[4]-c->r[6]; // 8028D258
  {uint32_t ea=c->r[2]+0xFFFF9FBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D25C
  c->r[4]=divwu(c->r[4],c->r[0]); // 8028D260
  c->ctr=c->r[4]; // 8028D264
  cmpu(c,0,c->r[6],c->r[5]); // 8028D268
  if (!crb(c,0)) { goto L_8028D290; } // 8028D26C
L_8028D270:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 8028D270
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 8028D274
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 8028D278
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 8028D27C
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 8028D280
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 8028D284
  c->r[6]=c->r[6]+0x00000018u; // 8028D288
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028D270; } // 8028D28C
L_8028D290:;
  c->r[3]=c->r[3]+0x00000004u; // 8028D290
  c->lr=0x8028D298u; f_8028CF88(c); // 8028D294
  c->r[0]=0u+0xFFFFFFFFu; // 8028D298
  c->r[3]=c->r[31]+0x00000004u; // 8028D29C
  W32(c->r[31]+0x000000D0u,c->r[0]); // 8028D2A0
  c->lr=0x8028D2A8u; f_8028CF88(c); // 8028D2A4
  c->r[3]=c->r[31]|c->r[31]; // 8028D2A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028D2AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028D2B0
  c->lr=c->r[0]; // 8028D2B4
  c->r[1]=c->r[1]+0x00000010u; // 8028D2B8
  return; // 8028D2BC
}

// fn_8028D2C0
void f_8028D2C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 8028D2C0
  f_8028CF88(c); return; // 8028D2C4
}

// fn_8028D2C8
void f_8028D2C8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028D2C8
  c->r[3]=c->r[3]+c->r[0]; // 8028D2CC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8028D2D0
  return; // 8028D2D4
}

// fn_8028D2D8
void f_8028D2D8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028D2D8
  c->r[3]=c->r[3]+c->r[0]; // 8028D2DC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D2E0
  return; // 8028D2E4
}

// fn_8028D2E8
void f_8028D2E8(Ctx* __restrict c) {
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 8028D2E8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8028D2EC
  return; // 8028D2F0
}

// fn_8028D2F4
void f_8028D2F4(Ctx* __restrict c) {
  W8(c->r[3]+0x0000001Du,c->r[4]); // 8028D2F4
  return; // 8028D2F8
}

// fn_8028D2FC
void f_8028D2FC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028D2FC
  c->r[3]=c->r[3]+c->r[0]; // 8028D300
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8028D304
  return; // 8028D308
}

// fn_8028D30C
void f_8028D30C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028D30C
  c->r[3]=c->r[3]+c->r[0]; // 8028D310
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D314
  return; // 8028D318
}

// fn_8028D31C
void f_8028D31C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028D31C
  c->r[3]=c->r[3]+c->r[0]; // 8028D320
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D324
  return; // 8028D328
}

// fn_8028D32C
void f_8028D32C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028D32C
  c->r[3]=c->r[3]+c->r[0]; // 8028D330
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D334
  return; // 8028D338
}

// fn_8028D33C
void f_8028D33C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028D33C
  c->r[0]=c->lr; // 8028D340
  cmps(c,0,(int32_t)c->r[3],0); // 8028D344
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028D348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028D34C
  c->r[31]=c->r[3]|c->r[3]; // 8028D350
  if (crb(c,2)) { goto L_8028D364; } // 8028D354
  cmps(c,0,(int32_t)c->r[4],0); // 8028D358
  if (!crb(c,1)) { goto L_8028D364; } // 8028D35C
  c->lr=0x8028D364u; f_800D6AD0(c); // 8028D360
L_8028D364:;
  c->r[3]=c->r[31]|c->r[31]; // 8028D364
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028D368
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028D36C
  c->lr=c->r[0]; // 8028D370
  c->r[1]=c->r[1]+0x00000010u; // 8028D374
  return; // 8028D378
}

// fn_8028D37C
void f_8028D37C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D37C
  c->r[8]=0u+0x80340000u; // 8028D380
  c->r[7]=0u+0x00000000u; // 8028D384
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D388
  c->r[8]=c->r[8]+0x00005E88u; // 8028D38C
  c->r[6]=0u+0xFFFFFFFFu; // 8028D390
  c->r[0]=0u+0x00000001u; // 8028D394
  W32(c->r[3]+0x00000000u,c->r[8]); // 8028D398
  W32(c->r[3]+0x00000004u,c->r[7]); // 8028D39C
  W32(c->r[3]+0x00000008u,c->r[7]); // 8028D3A0
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8028D3A4
  W32(c->r[3]+0x00000010u,c->r[7]); // 8028D3A8
  W32(c->r[3]+0x00000014u,c->r[7]); // 8028D3AC
  W32(c->r[3]+0x00000018u,c->r[7]); // 8028D3B0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8028D3B4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8028D3B8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8028D3BC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8028D3C0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8028D3C4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8028D3C8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8028D3CC
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 8028D3D0
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 8028D3D4
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 8028D3D8
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 8028D3DC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8028D3E0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8028D3E4
  W32(c->r[3]+0x00000068u,c->r[7]); // 8028D3E8
  W32(c->r[3]+0x0000006Cu,c->r[7]); // 8028D3EC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 8028D3F0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8028D3F4
  W32(c->r[3]+0x00000078u,c->r[7]); // 8028D3F8
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 8028D3FC
  W32(c->r[3]+0x00000098u,c->r[6]); // 8028D400
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8028D404
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 8028D408
  W32(c->r[3]+0x000000A4u,c->r[7]); // 8028D40C
  W32(c->r[3]+0x000000A8u,c->r[7]); // 8028D410
  W32(c->r[3]+0x000000ECu,c->r[7]); // 8028D414
  W32(c->r[3]+0x000000F0u,c->r[7]); // 8028D418
  W32(c->r[3]+0x000000F4u,c->r[7]); // 8028D41C
  W32(c->r[3]+0x000000F8u,c->r[7]); // 8028D420
  W32(c->r[3]+0x000000FCu,c->r[7]); // 8028D424
  W32(c->r[3]+0x00000100u,c->r[7]); // 8028D428
  W32(c->r[3]+0x00000104u,c->r[7]); // 8028D42C
  W32(c->r[3]+0x00000108u,c->r[7]); // 8028D430
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 8028D434
  W32(c->r[3]+0x00000020u,c->r[7]); // 8028D438
  W32(c->r[3]+0x00000024u,c->r[7]); // 8028D43C
  W32(c->r[3]+0x00000028u,c->r[7]); // 8028D440
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 8028D444
  W8(c->r[3]+0x00000095u,c->r[0]); // 8028D448
  W8(c->r[3]+0x00000094u,c->r[4]); // 8028D44C
  W32(c->r[3]+0x00000050u,c->r[5]); // 8028D450
  return; // 8028D454
}

// fn_8028D458
void f_8028D458(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028D458
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028D45C
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8028D460
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[0]); // 8028D464
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D468
  W32(c->r[3]+0x00000084u,c->r[0]); // 8028D46C
  W8(c->r[3]+0x00000088u,c->r[0]); // 8028D470
  W8(c->r[3]+0x00000080u,c->r[0]); // 8028D474
  W8(c->r[3]+0x00000081u,c->r[0]); // 8028D478
  W8(c->r[3]+0x00000082u,c->r[0]); // 8028D47C
  W8(c->r[3]+0x00000083u,c->r[0]); // 8028D480
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8028D484
  W32(c->r[3]+0x00000090u,c->r[0]); // 8028D488
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[4]);} // 8028D48C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[4]);} // 8028D490
  W32(c->r[3]+0x00000068u,c->r[0]); // 8028D494
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8028D498
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 8028D49C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8028D4A0
  W32(c->r[3]+0x00000078u,c->r[0]); // 8028D4A4
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 8028D4A8
  if (crb(c,0)) { goto L_8028D4B4; } // 8028D4AC
  goto L_8028D4F0; // 8028D4B0
L_8028D4B4:;
  c->r[4]=c->r[0]^0x80000000u; // 8028D4B4
  c->r[0]=0u+0x43300000u; // 8028D4B8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8028D4BC
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[4]); // 8028D4C0
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[3]=RF64(ea);} // 8028D4C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028D4C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D4CC
  W32(c->r[1]+0x00000014u,c->r[4]); // 8028D4D0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8028D4D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8028D4D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8028D4DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8028D4E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8028D4E4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028D4E8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 8028D4EC
L_8028D4F0:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 8028D4F0
  c->r[0]=0u+0x00000000u; // 8028D4F4
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D4F8
  c->r[4]=0u+0x00000001u; // 8028D4FC
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D500
  cmps(c,0,(int32_t)c->r[5],0); // 8028D504
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[4]);} // 8028D508
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 8028D50C
  W32(c->r[3]+0x00000068u,c->r[4]); // 8028D510
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8028D514
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 8028D518
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 8028D51C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 8028D520
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 8028D524
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028D528
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 8028D52C
  W32(c->r[3]+0x000000A4u,c->r[0]); // 8028D530
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8028D534
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 8028D538
  W8(c->r[3]+0x00000096u,c->r[0]); // 8028D53C
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 8028D540
  if (crb(c,2)) { goto L_8028D54C; } // 8028D544
  c->r[4]=R32(c->r[5]+0x00000034u); // 8028D548
L_8028D54C:;
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D54C
  c->r[0]=0u+0x00000000u; // 8028D550
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D554
  W32(c->r[3]+0x000000C4u,c->r[4]); // 8028D558
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[1]);} // 8028D55C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 8028D560
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 8028D564
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 8028D568
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 8028D56C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[1]);} // 8028D570
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[1]);} // 8028D574
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 8028D578
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 8028D57C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8028D580
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8028D584
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8028D588
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8028D58C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8028D590
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8028D594
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8028D598
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8028D59C
  W32(c->r[3]+0x00000050u,c->r[0]); // 8028D5A0
  c->r[1]=c->r[1]+0x00000020u; // 8028D5A4
  return; // 8028D5A8
}

// fn_8028D5AC
void f_8028D5AC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000081u); // 8028D5AC
  cmps(c,0,(int32_t)c->r[0],0); // 8028D5B0
  if (!crb(c,2)) return; // 8028D5B4
  c->r[0]=0u+0x00000001u; // 8028D5B8
  W8(c->r[3]+0x00000080u,c->r[0]); // 8028D5BC
  return; // 8028D5C0
}

// fn_8028D5C4
void f_8028D5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028D5C4
  c->r[0]=c->lr; // 8028D5C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028D5CC
  c->r[0]=0u+0x43300000u; // 8028D5D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8028D5D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 8028D5D8
  c->r[30]=c->r[4]|c->r[4]; // 8028D5DC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8028D5E0
  c->r[29]=c->r[3]|c->r[3]; // 8028D5E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028D5E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028D5EC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028D5F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8028D5F4
  c->ctr=c->r[12]; // 8028D5F8
  if (true) { c->lr=0x8028D600u; dispatch(c,c->ctr); } // 8028D5FC
  cmps(c,0,(int32_t)c->r[30],0); // 8028D600
  c->r[31]=c->r[3]|c->r[3]; // 8028D604
  if (crb(c,2)) { goto L_8028D65C; } // 8028D608
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028D60C
  c->r[12]=R32(c->r[12]+0x00000018u); // 8028D610
  c->ctr=c->r[12]; // 8028D614
  if (true) { c->lr=0x8028D61Cu; dispatch(c,c->ctr); } // 8028D618
  cmps(c,0,(int32_t)c->r[3],0); // 8028D61C
  if (crb(c,2)) { goto L_8028D65C; } // 8028D620
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028D624
  c->r[3]=c->r[31]|c->r[31]; // 8028D628
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8028D62C
  c->ctr=c->r[12]; // 8028D630
  if (true) { c->lr=0x8028D638u; dispatch(c,c->ctr); } // 8028D634
  cmps(c,0,(int32_t)c->r[3],0); // 8028D638
  if (crb(c,2)) { goto L_8028D65C; } // 8028D63C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028D640
  c->r[3]=c->r[31]|c->r[31]; // 8028D644
  c->r[12]=R32(c->r[12]+0x00000020u); // 8028D648
  c->ctr=c->r[12]; // 8028D64C
  if (true) { c->lr=0x8028D654u; dispatch(c,c->ctr); } // 8028D650
  cmps(c,0,(int32_t)c->r[3],0); // 8028D654
  if (crb(c,2)) { goto L_8028D674; } // 8028D658
L_8028D65C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028D65C
  c->r[3]=c->r[29]|c->r[29]; // 8028D660
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028D664
  c->ctr=c->r[12]; // 8028D668
  if (true) { c->lr=0x8028D670u; dispatch(c,c->ctr); } // 8028D66C
  goto L_8028D790; // 8028D670
L_8028D674:;
  c->r[5]=R32(c->r[29]+0x00000068u); // 8028D674
  c->r[4]=R32(c->r[29]+0x0000006Cu); // 8028D678
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8028D67C
  if (crb(c,0)) { goto L_8028D68C; } // 8028D680
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D684
  goto L_8028D6C8; // 8028D688
L_8028D68C:;
  c->r[3]=c->r[4]^0x80000000u; // 8028D68C
  c->r[0]=c->r[5]^0x80000000u; // 8028D690
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8028D694
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028D698
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D69C
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D6A0
  {uint32_t ea=c->r[29]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028D6A4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028D6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028D6AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028D6B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8028D6B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028D6B8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028D6BC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028D6C0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8028D6C4
L_8028D6C8:;
  c->r[0]=c->r[30]^0x80000000u; // 8028D6C8
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028D6CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8028D6D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8028D6D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D6D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028D6DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8028D6E0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028D6E4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8028D6E8
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 8028D6EC
  if (crb(c,0)) { goto L_8028D6FC; } // 8028D6F0
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D6F4
  goto L_8028D734; // 8028D6F8
L_8028D6FC:;
  c->r[3]=c->r[4]^0x80000000u; // 8028D6FC
  c->r[0]=c->r[5]^0x80000000u; // 8028D700
  W32(c->r[1]+0x00000014u,c->r[3]); // 8028D704
  {uint32_t ea=c->r[29]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D708
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8028D70C
  {uint32_t ea=c->r[29]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028D710
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 8028D714
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8028D718
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8028D71C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D720
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028D724
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028D728
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028D72C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8028D730
L_8028D734:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 8028D734
  c->r[0]=0u+0x00000000u; // 8028D738
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D73C
  cmps(c,0,(int32_t)c->r[3],0); // 8028D740
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 8028D744
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 8028D748
  W32(c->r[29]+0x00000068u,c->r[6]); // 8028D74C
  W32(c->r[29]+0x0000006Cu,c->r[0]); // 8028D750
  W8(c->r[29]+0x00000094u,c->r[0]); // 8028D754
  if (crb(c,2)) { goto L_8028D764; } // 8028D758
  c->r[4]=c->r[29]|c->r[29]; // 8028D75C
  c->lr=0x8028D764u; f_8029CA3C(c); // 8028D760
L_8028D764:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028D764
  c->r[3]=c->r[29]|c->r[29]; // 8028D768
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8028D76C
  c->ctr=c->r[12]; // 8028D770
  if (true) { c->lr=0x8028D778u; dispatch(c,c->ctr); } // 8028D774
  c->r[3]=0u+0x00000000u; // 8028D778
  c->r[0]=0u+0x00000001u; // 8028D77C
  W8(c->r[29]+0x00000082u,c->r[3]); // 8028D780
  W32(c->r[29]+0x00000084u,c->r[3]); // 8028D784
  W8(c->r[29]+0x00000088u,c->r[3]); // 8028D788
  W8(c->r[29]+0x00000083u,c->r[0]); // 8028D78C
L_8028D790:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8028D790
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8028D794
  c->r[30]=R32(c->r[1]+0x00000028u); // 8028D798
  c->r[29]=R32(c->r[1]+0x00000024u); // 8028D79C
  c->lr=c->r[0]; // 8028D7A0
  c->r[1]=c->r[1]+0x00000030u; // 8028D7A4
  return; // 8028D7A8
}

// fn_8028D7AC
void f_8028D7AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028D7AC
  c->r[0]=0u+0x43300000u; // 8028D7B0
  cmps(c,0,(int32_t)c->r[4],0); // 8028D7B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028D7B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8028D7BC
  if (crb(c,2)) { goto L_8028D8E8; } // 8028D7C0
  c->r[0]=R32(c->r[3]+0x00000084u); // 8028D7C4
  cmps(c,0,(int32_t)c->r[0],2); // 8028D7C8
  if (crb(c,2)) { goto L_8028DA08; } // 8028D7CC
  if (!crb(c,0)) { goto L_8028D7E0; } // 8028D7D0
  cmps(c,0,(int32_t)c->r[0],0); // 8028D7D4
  if (!crb(c,0)) { goto L_8028D7E8; } // 8028D7D8
  goto L_8028DA08; // 8028D7DC
L_8028D7E0:;
  cmps(c,0,(int32_t)c->r[0],4); // 8028D7E0
  if (!crb(c,0)) { goto L_8028DA08; } // 8028D7E4
L_8028D7E8:;
  c->r[7]=R32(c->r[3]+0x00000078u); // 8028D7E8
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 8028D7EC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 8028D7F0
  if (crb(c,0)) { goto L_8028D800; } // 8028D7F4
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028D7F8
  goto L_8028D83C; // 8028D7FC
L_8028D800:;
  c->r[4]=c->r[6]^0x80000000u; // 8028D800
  c->r[0]=c->r[7]^0x80000000u; // 8028D804
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8028D808
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028D80C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D810
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D814
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028D818
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028D81C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028D820
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028D824
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8028D828
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028D82C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028D830
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028D834
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8028D838
L_8028D83C:;
  c->r[0]=c->r[5]^0x80000000u; // 8028D83C
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[1]=RF64(ea);} // 8028D840
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8028D844
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D848
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8028D84C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8028D850
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028D854
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8028D858
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8028D85C
  cmps(c,0,(int32_t)c->r[5],0); // 8028D860
  if (crb(c,1)) { goto L_8028D86C; } // 8028D864
  c->r[5]=0u+0x00000001u; // 8028D868
L_8028D86C:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 8028D86C
  if (crb(c,0)) { goto L_8028D87C; } // 8028D870
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D874
  goto L_8028D8B8; // 8028D878
L_8028D87C:;
  c->r[4]=c->r[6]^0x80000000u; // 8028D87C
  c->r[0]=c->r[7]^0x80000000u; // 8028D880
  W32(c->r[1]+0x00000014u,c->r[4]); // 8028D884
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028D888
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8028D88C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D890
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028D894
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028D898
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8028D89C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028D8A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D8A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028D8A8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028D8AC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028D8B0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8028D8B4
L_8028D8B8:;
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D8B8
  c->r[4]=0u+0x00000000u; // 8028D8BC
  c->r[0]=0u+0x00000001u; // 8028D8C0
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 8028D8C4
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8028D8C8
  W32(c->r[3]+0x00000078u,c->r[5]); // 8028D8CC
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 8028D8D0
  W32(c->r[3]+0x00000084u,c->r[0]); // 8028D8D4
  W8(c->r[3]+0x00000088u,c->r[4]); // 8028D8D8
  goto L_8028DA08; // 8028D8DC
  goto L_8028DA08; // 8028D8E0
  goto L_8028DA08; // 8028D8E4
L_8028D8E8:;
  c->r[0]=R32(c->r[3]+0x00000084u); // 8028D8E8
  cmps(c,0,(int32_t)c->r[0],0); // 8028D8EC
  if (crb(c,2)) { goto L_8028DA08; } // 8028D8F0
  if (crb(c,0)) { goto L_8028DA08; } // 8028D8F4
  cmps(c,0,(int32_t)c->r[0],4); // 8028D8F8
  if (!crb(c,0)) { goto L_8028DA08; } // 8028D8FC
  goto L_8028D908; // 8028D900
  goto L_8028DA08; // 8028D904
L_8028D908:;
  c->r[7]=R32(c->r[3]+0x00000078u); // 8028D908
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 8028D90C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 8028D910
  if (crb(c,0)) { goto L_8028D920; } // 8028D914
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D918
  goto L_8028D95C; // 8028D91C
L_8028D920:;
  c->r[4]=c->r[6]^0x80000000u; // 8028D920
  c->r[0]=c->r[7]^0x80000000u; // 8028D924
  W32(c->r[1]+0x00000014u,c->r[4]); // 8028D928
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028D92C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8028D930
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D934
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028D938
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028D93C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8028D940
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028D944
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D948
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028D94C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028D950
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028D954
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8028D958
L_8028D95C:;
  c->r[0]=c->r[5]^0x80000000u; // 8028D95C
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D960
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028D964
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8028D968
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[2]=RF64(ea);} // 8028D96C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8028D970
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028D974
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8028D978
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028D97C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8028D980
  c->r[8]=R32(c->r[1]+0x0000001Cu); // 8028D984
  cmps(c,0,(int32_t)c->r[8],0); // 8028D988
  if (crb(c,1)) { goto L_8028D994; } // 8028D98C
  c->r[8]=0u+0x00000001u; // 8028D990
L_8028D994:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 8028D994
  if (crb(c,0)) { goto L_8028D9A4; } // 8028D998
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D99C
  goto L_8028D9E0; // 8028D9A0
L_8028D9A4:;
  c->r[4]=c->r[6]^0x80000000u; // 8028D9A4
  c->r[0]=c->r[7]^0x80000000u; // 8028D9A8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8028D9AC
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028D9B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028D9B4
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028D9B8
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028D9BC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028D9C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028D9C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028D9C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8028D9CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028D9D0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028D9D4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028D9D8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8028D9DC
L_8028D9E0:;
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028D9E0
  c->r[5]=0u+0x00000000u; // 8028D9E4
  c->r[4]=0u+0x00000003u; // 8028D9E8
  c->r[0]=0u+0x00000001u; // 8028D9EC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 8028D9F0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8028D9F4
  W32(c->r[3]+0x00000078u,c->r[8]); // 8028D9F8
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 8028D9FC
  W32(c->r[3]+0x00000084u,c->r[4]); // 8028DA00
  W8(c->r[3]+0x00000088u,c->r[0]); // 8028DA04
L_8028DA08:;
  c->r[1]=c->r[1]+0x00000020u; // 8028DA08
  return; // 8028DA0C
}

// fn_8028DA10
void f_8028DA10(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 8028DA10
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 8028DA14
  c->r[0]=c->r[0]&~c->r[4]; // 8028DA18
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8028DA1C
  W8(c->r[3]+0x00000082u,c->r[0]); // 8028DA20
  return; // 8028DA24
}

// fn_8028DA28
void f_8028DA28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028DA28
  c->r[0]=c->lr; // 8028DA2C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8028DA30
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8028DA34
  W32(c->r[1]+0x00000098u,c->r[30]); // 8028DA38
  W32(c->r[1]+0x00000094u,c->r[29]); // 8028DA3C
  c->r[29]=c->r[3]|c->r[3]; // 8028DA40
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028DA44
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028DA48
  c->ctr=c->r[12]; // 8028DA4C
  if (true) { c->lr=0x8028DA54u; dispatch(c,c->ctr); } // 8028DA50
  c->r[0]=R8(c->r[29]+0x00000082u); // 8028DA54
  c->r[31]=c->r[3]|c->r[3]; // 8028DA58
  cmps(c,0,(int32_t)c->r[0],0); // 8028DA5C
  if (crb(c,2)) { goto L_8028DAD0; } // 8028DA60
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028DA64
  c->r[12]=R32(c->r[12]+0x00000018u); // 8028DA68
  c->ctr=c->r[12]; // 8028DA6C
  if (true) { c->lr=0x8028DA74u; dispatch(c,c->ctr); } // 8028DA70
  cmps(c,0,(int32_t)c->r[3],0); // 8028DA74
  if (crb(c,2)) { goto L_8028DAD0; } // 8028DA78
  c->r[3]=R32(c->r[29]+0x0000008Cu); // 8028DA7C
  cmps(c,0,(int32_t)c->r[3],0); // 8028DA80
  if (!crb(c,2)) { goto L_8028DAC8; } // 8028DA84
  c->r[0]=R32(c->r[29]+0x00000084u); // 8028DA88
  cmps(c,0,(int32_t)c->r[0],0); // 8028DA8C
  if (crb(c,2)) { goto L_8028DA9C; } // 8028DA90
  cmps(c,0,(int32_t)c->r[0],3); // 8028DA94
  if (!crb(c,2)) { goto L_8028DAD0; } // 8028DA98
L_8028DA9C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DA9C
  c->r[3]=c->r[29]|c->r[29]; // 8028DAA0
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028DAA4
  c->ctr=c->r[12]; // 8028DAA8
  if (true) { c->lr=0x8028DAB0u; dispatch(c,c->ctr); } // 8028DAAC
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DAB0
  c->r[3]=c->r[29]|c->r[29]; // 8028DAB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028DAB8
  c->ctr=c->r[12]; // 8028DABC
  if (true) { c->lr=0x8028DAC4u; dispatch(c,c->ctr); } // 8028DAC0
  goto L_8028E068; // 8028DAC4
L_8028DAC8:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8028DAC8
  W32(c->r[29]+0x0000008Cu,c->r[0]); // 8028DACC
L_8028DAD0:;
  c->r[0]=R8(c->r[29]+0x00000081u); // 8028DAD0
  c->r[30]=0u+0x00000000u; // 8028DAD4
  cmps(c,0,(int32_t)c->r[0],0); // 8028DAD8
  if (!crb(c,2)) { goto L_8028DB0C; } // 8028DADC
  c->r[0]=R8(c->r[29]+0x00000080u); // 8028DAE0
  cmps(c,0,(int32_t)c->r[0],0); // 8028DAE4
  if (crb(c,2)) { goto L_8028E068; } // 8028DAE8
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DAEC
  c->r[3]=c->r[29]|c->r[29]; // 8028DAF0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8028DAF4
  c->ctr=c->r[12]; // 8028DAF8
  if (true) { c->lr=0x8028DB00u; dispatch(c,c->ctr); } // 8028DAFC
  cmps(c,0,(int32_t)c->r[3],0); // 8028DB00
  if (crb(c,2)) { goto L_8028E068; } // 8028DB04
  c->r[30]=0u+0x00000001u; // 8028DB08
L_8028DB0C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028DB0C
  c->r[3]=c->r[31]|c->r[31]; // 8028DB10
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8028DB14
  c->ctr=c->r[12]; // 8028DB18
  if (true) { c->lr=0x8028DB20u; dispatch(c,c->ctr); } // 8028DB1C
  cmps(c,0,(int32_t)c->r[3],0); // 8028DB20
  if (crb(c,2)) { goto L_8028DB40; } // 8028DB24
  c->r[3]=R32(c->r[29]+0x00000090u); // 8028DB28
  c->r[0]=0u+0xFFFFFFFFu; // 8028DB2C
  cmpu(c,0,c->r[3],c->r[0]); // 8028DB30
  if (!crb(c,0)) { goto L_8028DB40; } // 8028DB34
  c->r[0]=c->r[3]+0x00000001u; // 8028DB38
  W32(c->r[29]+0x00000090u,c->r[0]); // 8028DB3C
L_8028DB40:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028DB40
  c->r[3]=c->r[31]|c->r[31]; // 8028DB44
  c->r[12]=R32(c->r[12]+0x00000018u); // 8028DB48
  c->ctr=c->r[12]; // 8028DB4C
  if (true) { c->lr=0x8028DB54u; dispatch(c,c->ctr); } // 8028DB50
  cmps(c,0,(int32_t)c->r[3],0); // 8028DB54
  if (!crb(c,2)) { goto L_8028DB74; } // 8028DB58
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DB5C
  c->r[3]=c->r[29]|c->r[29]; // 8028DB60
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028DB64
  c->ctr=c->r[12]; // 8028DB68
  if (true) { c->lr=0x8028DB70u; dispatch(c,c->ctr); } // 8028DB6C
  goto L_8028E068; // 8028DB70
L_8028DB74:;
  c->r[0]=R32(c->r[29]+0x00000084u); // 8028DB74
  cmps(c,0,(int32_t)c->r[0],2); // 8028DB78
  if (crb(c,2)) { goto L_8028DC00; } // 8028DB7C
  if (!crb(c,0)) { goto L_8028DB94; } // 8028DB80
  cmps(c,0,(int32_t)c->r[0],0); // 8028DB84
  if (crb(c,2)) { goto L_8028DBEC; } // 8028DB88
  if (!crb(c,0)) { goto L_8028DBA0; } // 8028DB8C
  goto L_8028DC00; // 8028DB90
L_8028DB94:;
  cmps(c,0,(int32_t)c->r[0],4); // 8028DB94
  if (!crb(c,0)) { goto L_8028DC00; } // 8028DB98
  goto L_8028DBBC; // 8028DB9C
L_8028DBA0:;
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 8028DBA0
  c->r[0]=R32(c->r[29]+0x00000078u); // 8028DBA4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028DBA8
  if (!crb(c,0)) { goto L_8028DC00; } // 8028DBAC
  c->r[0]=c->r[3]+0x00000001u; // 8028DBB0
  W32(c->r[29]+0x0000007Cu,c->r[0]); // 8028DBB4
  goto L_8028DC00; // 8028DBB8
L_8028DBBC:;
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 8028DBBC
  c->r[0]=R32(c->r[29]+0x00000078u); // 8028DBC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028DBC4
  if (!crb(c,0)) { goto L_8028DBD4; } // 8028DBC8
  c->r[0]=c->r[3]+0x00000001u; // 8028DBCC
  W32(c->r[29]+0x0000007Cu,c->r[0]); // 8028DBD0
L_8028DBD4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DBD4
  c->r[3]=c->r[29]|c->r[29]; // 8028DBD8
  c->r[12]=R32(c->r[12]+0x00000030u); // 8028DBDC
  c->ctr=c->r[12]; // 8028DBE0
  if (true) { c->lr=0x8028DBE8u; dispatch(c,c->ctr); } // 8028DBE4
  goto L_8028DC00; // 8028DBE8
L_8028DBEC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DBEC
  c->r[3]=c->r[29]|c->r[29]; // 8028DBF0
  c->r[12]=R32(c->r[12]+0x00000030u); // 8028DBF4
  c->ctr=c->r[12]; // 8028DBF8
  if (true) { c->lr=0x8028DC00u; dispatch(c,c->ctr); } // 8028DBFC
L_8028DC00:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 8028DC00
  cmps(c,0,(int32_t)c->r[3],0); // 8028DC04
  if (crb(c,2)) { goto L_8028DC24; } // 8028DC08
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028DC0C
  c->r[5]=c->r[29]|c->r[29]; // 8028DC10
  c->r[4]=R32(c->r[29]+0x00000028u); // 8028DC14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8028DC18
  c->ctr=c->r[12]; // 8028DC1C
  if (true) { c->lr=0x8028DC24u; dispatch(c,c->ctr); } // 8028DC20
L_8028DC24:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 8028DC24
  cmps(c,0,(int32_t)c->r[0],0); // 8028DC28
  if (crb(c,2)) { goto L_8028DF18; } // 8028DC2C
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DC30
  c->r[5]=c->r[1]+0x00000044u; // 8028DC34
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028DC38
  c->r[3]=0u+0x00000000u; // 8028DC3C
  c->r[0]=c->r[1]+0x0000008Cu; // 8028DC40
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8028DC44
  cmpu(c,1,c->r[5],c->r[0]); // 8028DC48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8028DC4C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8028DC50
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8028DC54
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8028DC58
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8028DC5C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8028DC60
  W32(c->r[1]+0x00000024u,c->r[3]); // 8028DC64
  W32(c->r[1]+0x00000028u,c->r[3]); // 8028DC68
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8028DC6C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8028DC70
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8028DC74
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8028DC78
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8028DC7C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8028DC80
  if (!crb(c,4)) { goto L_8028DE54; } // 8028DC84
  c->r[7]=c->r[0]-c->r[5]; // 8028DC88
  c->r[3]=0u+0x2AAB0000u; // 8028DC8C
  c->r[8]=c->r[7]+0x00000017u; // 8028DC90
  c->r[4]=c->r[1]+0xFFFFFFCCu; // 8028DC94
  c->r[0]=c->r[3]+0xFFFFAAABu; // 8028DC98
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 8028DC9C
  c->r[0]=sraw(c,c->r[0],2); // 8028DCA0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028DCA4
  c->r[9]=c->r[0]+c->r[3]; // 8028DCA8
  c->r[10]=c->r[9]+0x00000001u; // 8028DCAC
  cmps(c,0,(int32_t)c->r[10],8); // 8028DCB0
  if (!crb(c,1)) { goto L_8028DE0C; } // 8028DCB4
  c->r[3]=0u+0x00000000u; // 8028DCB8
  c->r[6]=0u+0x00000000u; // 8028DCBC
  if (crb(c,5)) { goto L_8028DCE8; } // 8028DCC0
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 8028DCC4
  c->r[7]=0u+0x00000001u; // 8028DCC8
  if (!crb(c,2)) { goto L_8028DCDC; } // 8028DCCC
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 8028DCD0
  if (crb(c,2)) { goto L_8028DCDC; } // 8028DCD4
  c->r[7]=0u+0x00000000u; // 8028DCD8
L_8028DCDC:;
  cmps(c,0,(int32_t)c->r[7],0); // 8028DCDC
  if (crb(c,2)) { goto L_8028DCE8; } // 8028DCE0
  c->r[6]=0u+0x00000001u; // 8028DCE4
L_8028DCE8:;
  cmps(c,0,(int32_t)c->r[6],0); // 8028DCE8
  if (crb(c,2)) { goto L_8028DD18; } // 8028DCEC
  c->r[7]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[7]); // 8028DCF0
  c->r[6]=0u+0x00000001u; // 8028DCF4
  if (!crb(c,2)) { goto L_8028DD0C; } // 8028DCF8
  c->r[0]=rotl(c->r[10],0)&0x80000000u; // 8028DCFC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8028DD00
  if (crb(c,2)) { goto L_8028DD0C; } // 8028DD04
  c->r[6]=0u+0x00000000u; // 8028DD08
L_8028DD0C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8028DD0C
  if (crb(c,2)) { goto L_8028DD18; } // 8028DD10
  c->r[3]=0u+0x00000001u; // 8028DD14
L_8028DD18:;
  cmps(c,0,(int32_t)c->r[3],0); // 8028DD18
  if (crb(c,2)) { goto L_8028DE0C; } // 8028DD1C
  c->r[3]=c->r[4]+0x000000BFu; // 8028DD20
  c->r[0]=0u+0x000000C0u; // 8028DD24
  c->r[3]=c->r[3]-c->r[5]; // 8028DD28
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028DD2C
  c->r[3]=divwu(c->r[3],c->r[0]); // 8028DD30
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DD34
  c->ctr=c->r[3]; // 8028DD38
  cmpu(c,0,c->r[5],c->r[4]); // 8028DD3C
  if (!crb(c,0)) { goto L_8028DE0C; } // 8028DD40
L_8028DD44:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 8028DD44
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 8028DD48
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 8028DD4C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 8028DD50
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 8028DD54
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 8028DD58
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8028DD5C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[1]);} // 8028DD60
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[0]);} // 8028DD64
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[0]);} // 8028DD68
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 8028DD6C
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 8028DD70
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[1]);} // 8028DD74
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 8028DD78
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[0]);} // 8028DD7C
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 8028DD80
  {uint32_t ea=c->r[5]+0x00000040u; WF32(ea,c->f[0]);} // 8028DD84
  {uint32_t ea=c->r[5]+0x00000044u; WF32(ea,c->f[0]);} // 8028DD88
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[1]);} // 8028DD8C
  {uint32_t ea=c->r[5]+0x0000004Cu; WF32(ea,c->f[1]);} // 8028DD90
  {uint32_t ea=c->r[5]+0x00000050u; WF32(ea,c->f[0]);} // 8028DD94
  {uint32_t ea=c->r[5]+0x00000054u; WF32(ea,c->f[0]);} // 8028DD98
  {uint32_t ea=c->r[5]+0x00000058u; WF32(ea,c->f[0]);} // 8028DD9C
  {uint32_t ea=c->r[5]+0x0000005Cu; WF32(ea,c->f[0]);} // 8028DDA0
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[1]);} // 8028DDA4
  {uint32_t ea=c->r[5]+0x00000064u; WF32(ea,c->f[1]);} // 8028DDA8
  {uint32_t ea=c->r[5]+0x00000068u; WF32(ea,c->f[0]);} // 8028DDAC
  {uint32_t ea=c->r[5]+0x0000006Cu; WF32(ea,c->f[0]);} // 8028DDB0
  {uint32_t ea=c->r[5]+0x00000070u; WF32(ea,c->f[0]);} // 8028DDB4
  {uint32_t ea=c->r[5]+0x00000074u; WF32(ea,c->f[0]);} // 8028DDB8
  {uint32_t ea=c->r[5]+0x00000078u; WF32(ea,c->f[1]);} // 8028DDBC
  {uint32_t ea=c->r[5]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028DDC0
  {uint32_t ea=c->r[5]+0x00000080u; WF32(ea,c->f[0]);} // 8028DDC4
  {uint32_t ea=c->r[5]+0x00000084u; WF32(ea,c->f[0]);} // 8028DDC8
  {uint32_t ea=c->r[5]+0x00000088u; WF32(ea,c->f[0]);} // 8028DDCC
  {uint32_t ea=c->r[5]+0x0000008Cu; WF32(ea,c->f[0]);} // 8028DDD0
  {uint32_t ea=c->r[5]+0x00000090u; WF32(ea,c->f[1]);} // 8028DDD4
  {uint32_t ea=c->r[5]+0x00000094u; WF32(ea,c->f[1]);} // 8028DDD8
  {uint32_t ea=c->r[5]+0x00000098u; WF32(ea,c->f[0]);} // 8028DDDC
  {uint32_t ea=c->r[5]+0x0000009Cu; WF32(ea,c->f[0]);} // 8028DDE0
  {uint32_t ea=c->r[5]+0x000000A0u; WF32(ea,c->f[0]);} // 8028DDE4
  {uint32_t ea=c->r[5]+0x000000A4u; WF32(ea,c->f[0]);} // 8028DDE8
  {uint32_t ea=c->r[5]+0x000000A8u; WF32(ea,c->f[1]);} // 8028DDEC
  {uint32_t ea=c->r[5]+0x000000ACu; WF32(ea,c->f[1]);} // 8028DDF0
  {uint32_t ea=c->r[5]+0x000000B0u; WF32(ea,c->f[0]);} // 8028DDF4
  {uint32_t ea=c->r[5]+0x000000B4u; WF32(ea,c->f[0]);} // 8028DDF8
  {uint32_t ea=c->r[5]+0x000000B8u; WF32(ea,c->f[0]);} // 8028DDFC
  {uint32_t ea=c->r[5]+0x000000BCu; WF32(ea,c->f[0]);} // 8028DE00
  c->r[5]=c->r[5]+0x000000C0u; // 8028DE04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028DD44; } // 8028DE08
L_8028DE0C:;
  c->r[4]=c->r[1]+0x0000008Cu; // 8028DE0C
  c->r[0]=0u+0x00000018u; // 8028DE10
  c->r[3]=c->r[4]+0x00000017u; // 8028DE14
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028DE18
  c->r[3]=c->r[3]-c->r[5]; // 8028DE1C
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DE20
  c->r[3]=divwu(c->r[3],c->r[0]); // 8028DE24
  c->ctr=c->r[3]; // 8028DE28
  cmpu(c,0,c->r[5],c->r[4]); // 8028DE2C
  if (!crb(c,0)) { goto L_8028DE54; } // 8028DE30
L_8028DE34:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 8028DE34
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 8028DE38
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 8028DE3C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 8028DE40
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 8028DE44
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 8028DE48
  c->r[5]=c->r[5]+0x00000018u; // 8028DE4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8028DE34; } // 8028DE50
L_8028DE54:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8028DE54
  c->r[7]=c->r[1]+0x00000008u; // 8028DE58
  c->r[4]=R32(c->r[29]+0x00000028u); // 8028DE5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028DE60
  c->r[5]=R32(c->r[29]+0x00000098u); // 8028DE64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8028DE68
  c->r[6]=R8(c->r[29]+0x00000095u); // 8028DE6C
  c->ctr=c->r[12]; // 8028DE70
  if (true) { c->lr=0x8028DE78u; dispatch(c,c->ctr); } // 8028DE74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DE78
  c->r[4]=c->r[31]|c->r[31]; // 8028DE7C
  c->r[3]=c->r[1]+0x00000008u; // 8028DE80
  c->r[5]=0u+0x00000000u; // 8028DE84
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 8028DE88
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DE8C
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 8028DE90
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DE94
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 8028DE98
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DE9C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 8028DEA0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEA4
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 8028DEA8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEAC
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 8028DEB0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEB4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 8028DEB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028DEBC
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 8028DEC0
  c->r[0]=R32(c->r[1]+0x00000028u); // 8028DEC4
  W32(c->r[29]+0x00000050u,c->r[0]); // 8028DEC8
  goto L_8028DF0C; // 8028DECC
L_8028DED0:;
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DED0
  c->r[5]=c->r[5]+0x00000001u; // 8028DED4
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[0]);} // 8028DED8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEDC
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[0]);} // 8028DEE0
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEE4
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[0]);} // 8028DEE8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEEC
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 8028DEF0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEF4
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[0]);} // 8028DEF8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DEFC
  c->r[3]=c->r[3]+0x00000018u; // 8028DF00
  {uint32_t ea=c->r[4]+0x00000084u; WF32(ea,c->f[0]);} // 8028DF04
  c->r[4]=c->r[4]+0x00000018u; // 8028DF08
L_8028DF0C:;
  c->r[0]=R8(c->r[29]+0x00000095u); // 8028DF0C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8028DF10
  if (crb(c,0)) { IRQCHK(c); goto L_8028DED0; } // 8028DF14
L_8028DF18:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8028DF18
  cmps(c,0,(int32_t)c->r[3],0); // 8028DF1C
  if (crb(c,2)) { goto L_8028DF3C; } // 8028DF20
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DF24
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 8028DF28
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DF2C
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 8028DF30
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028DF34
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 8028DF38
L_8028DF3C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DF3C
  c->r[3]=c->r[29]|c->r[29]; // 8028DF40
  c->r[12]=R32(c->r[12]+0x00000034u); // 8028DF44
  c->ctr=c->r[12]; // 8028DF48
  if (true) { c->lr=0x8028DF50u; dispatch(c,c->ctr); } // 8028DF4C
  c->r[0]=R8(c->r[29]+0x00000083u); // 8028DF50
  cmps(c,0,(int32_t)c->r[0],0); // 8028DF54
  if (crb(c,2)) { goto L_8028DF8C; } // 8028DF58
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 8028DF5C
  c->r[0]=R32(c->r[29]+0x00000068u); // 8028DF60
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028DF64
  if (crb(c,0)) { goto L_8028DF8C; } // 8028DF68
  c->r[0]=0u+0x00000000u; // 8028DF6C
  c->r[3]=c->r[29]|c->r[29]; // 8028DF70
  W8(c->r[29]+0x00000083u,c->r[0]); // 8028DF74
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DF78
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028DF7C
  c->ctr=c->r[12]; // 8028DF80
  if (true) { c->lr=0x8028DF88u; dispatch(c,c->ctr); } // 8028DF84
  goto L_8028E068; // 8028DF88
L_8028DF8C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028DF8C
  if (crb(c,2)) { goto L_8028DFDC; } // 8028DF90
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028DF94
  c->r[3]=c->r[31]|c->r[31]; // 8028DF98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8028DF9C
  c->ctr=c->r[12]; // 8028DFA0
  if (true) { c->lr=0x8028DFA8u; dispatch(c,c->ctr); } // 8028DFA4
  cmps(c,0,(int32_t)c->r[3],0); // 8028DFA8
  if (crb(c,2)) { goto L_8028DFC4; } // 8028DFAC
  c->r[3]=0u+0x00000001u; // 8028DFB0
  c->r[0]=0u+0x00000000u; // 8028DFB4
  W8(c->r[29]+0x00000081u,c->r[3]); // 8028DFB8
  W8(c->r[29]+0x00000080u,c->r[0]); // 8028DFBC
  goto L_8028DFDC; // 8028DFC0
L_8028DFC4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8028DFC4
  c->r[3]=c->r[29]|c->r[29]; // 8028DFC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028DFCC
  c->ctr=c->r[12]; // 8028DFD0
  if (true) { c->lr=0x8028DFD8u; dispatch(c,c->ctr); } // 8028DFD4
  goto L_8028E068; // 8028DFD8
L_8028DFDC:;
  c->r[0]=R32(c->r[29]+0x00000084u); // 8028DFDC
  cmps(c,0,(int32_t)c->r[0],1); // 8028DFE0
  if (!crb(c,2)) { goto L_8028E01C; } // 8028DFE4
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 8028DFE8
  c->r[0]=R32(c->r[29]+0x00000078u); // 8028DFEC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028DFF0
  if (crb(c,0)) { goto L_8028E03C; } // 8028DFF4
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028DFF8
  c->r[3]=c->r[31]|c->r[31]; // 8028DFFC
  c->r[4]=0u+0x00000001u; // 8028E000
  c->r[12]=R32(c->r[12]+0x00000014u); // 8028E004
  c->ctr=c->r[12]; // 8028E008
  if (true) { c->lr=0x8028E010u; dispatch(c,c->ctr); } // 8028E00C
  c->r[0]=0u+0x00000002u; // 8028E010
  W32(c->r[29]+0x00000084u,c->r[0]); // 8028E014
  goto L_8028E03C; // 8028E018
L_8028E01C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8028E01C
  if (!crb(c,2)) { goto L_8028E03C; } // 8028E020
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 8028E024
  c->r[0]=R32(c->r[29]+0x00000078u); // 8028E028
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8028E02C
  if (crb(c,0)) { goto L_8028E03C; } // 8028E030
  c->r[0]=0u+0x00000000u; // 8028E034
  W32(c->r[29]+0x00000084u,c->r[0]); // 8028E038
L_8028E03C:;
  c->r[0]=R8(c->r[29]+0x00000088u); // 8028E03C
  cmps(c,0,(int32_t)c->r[0],0); // 8028E040
  if (crb(c,2)) { goto L_8028E068; } // 8028E044
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028E048
  c->r[3]=c->r[31]|c->r[31]; // 8028E04C
  c->r[4]=0u+0x00000000u; // 8028E050
  c->r[12]=R32(c->r[12]+0x00000014u); // 8028E054
  c->ctr=c->r[12]; // 8028E058
  if (true) { c->lr=0x8028E060u; dispatch(c,c->ctr); } // 8028E05C
  c->r[0]=0u+0x00000000u; // 8028E060
  W8(c->r[29]+0x00000088u,c->r[0]); // 8028E064
L_8028E068:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8028E068
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8028E06C
  c->r[30]=R32(c->r[1]+0x00000098u); // 8028E070
  c->r[29]=R32(c->r[1]+0x00000094u); // 8028E074
  c->lr=c->r[0]; // 8028E078
  c->r[1]=c->r[1]+0x000000A0u; // 8028E07C
  return; // 8028E080
}

// fn_8028E084
void f_8028E084(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 8028E084
  c->r[0]=R32(c->r[3]+0x00000068u); // 8028E088
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8028E08C
  if (!crb(c,0)) { goto L_8028E09C; } // 8028E090
  c->r[0]=c->r[4]+0x00000001u; // 8028E094
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8028E098
L_8028E09C:;
  c->r[4]=R32(c->r[3]+0x000000A8u); // 8028E09C
  c->r[0]=R32(c->r[3]+0x000000A4u); // 8028E0A0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8028E0A4
  if (!crb(c,0)) return; // 8028E0A8
  c->r[0]=c->r[4]+0x00000001u; // 8028E0AC
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8028E0B0
  return; // 8028E0B4
}

// fn_8028E0B8
void f_8028E0B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E0B8
  c->r[0]=c->lr; // 8028E0BC
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8028E0C0
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 8028E0C4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 8028E0C8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 8028E0CC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 8028E0D0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 8028E0D4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 8028E0D8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 8028E0DC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 8028E0E0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 8028E0E4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 8028E0E8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 8028E0EC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 8028E0F0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[25]);} // 8028E0F4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,25,ea,0,0);} // 8028E0F8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[24]);} // 8028E0FC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,24,ea,0,0);} // 8028E100
  c->r[11]=c->r[1]+0x00000050u; // 8028E104
  c->lr=0x8028E10Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028E108
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8028E10C
  c->r[0]=0u+0x43300000u; // 8028E110
  {uint32_t ea=c->r[3]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E114
  c->r[31]=c->r[3]|c->r[3]; // 8028E118
  c->r[6]=R32(c->r[3]+0x00000010u); // 8028E11C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8028E120
  c->r[5]=R32(c->r[3]+0x000000A4u); // 8028E124
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E128
  c->r[4]=R32(c->r[3]+0x000000A8u); // 8028E12C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8028E130
  W32(c->r[1]+0x00000028u,c->r[0]); // 8028E134
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8028E138
  W32(c->r[1]+0x00000030u,c->r[0]); // 8028E13C
  if (crb(c,0)) { goto L_8028E14C; } // 8028E140
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E144
  goto L_8028E188; // 8028E148
L_8028E14C:;
  c->r[4]=c->r[4]^0x80000000u; // 8028E14C
  c->r[0]=c->r[5]^0x80000000u; // 8028E150
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8028E154
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028E158
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8028E15C
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E160
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E164
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028E168
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028E16C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028E170
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 8028E174
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028E178
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028E17C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028E180
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8028E184
L_8028E188:;
  c->r[5]=R32(c->r[3]+0x00000068u); // 8028E188
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8028E18C
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 8028E190
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8028E194
  if (crb(c,0)) { goto L_8028E1A4; } // 8028E198
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E19C
  goto L_8028E1E0; // 8028E1A0
L_8028E1A4:;
  c->r[4]=c->r[0]^0x80000000u; // 8028E1A4
  c->r[0]=c->r[5]^0x80000000u; // 8028E1A8
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8028E1AC
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028E1B0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8028E1B4
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E1B8
  {uint32_t ea=c->r[3]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E1BC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028E1C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028E1C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028E1C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 8028E1CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028E1D0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028E1D4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028E1D8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8028E1DC
L_8028E1E0:;
  c->r[5]=R32(c->r[3]+0x00000078u); // 8028E1E0
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8028E1E4
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 8028E1E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8028E1EC
  if (crb(c,0)) { goto L_8028E1FC; } // 8028E1F0
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E1F4
  goto L_8028E238; // 8028E1F8
L_8028E1FC:;
  c->r[4]=c->r[0]^0x80000000u; // 8028E1FC
  c->r[0]=c->r[5]^0x80000000u; // 8028E200
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8028E204
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028E208
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8028E20C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E210
  {uint32_t ea=c->r[3]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E214
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8028E218
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028E21C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8028E220
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 8028E224
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028E228
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028E22C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028E230
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8028E234
L_8028E238:;
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8028E238
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E23C
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[28]=c->ps1[28]=RF32(ea);} // 8028E240
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E244
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 8028E248
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[30]=c->ps1[30]=RF32(ea);} // 8028E24C
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E250
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 8028E254
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E258
  {uint32_t ea=c->r[3]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E25C
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 8028E260
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E264
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 8028E268
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[29]=c->ps1[29]=RF32(ea);} // 8028E26C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 8028E270
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E274
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 8028E278
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8028E27C
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 8028E280
  c->r[28]=R8(c->r[3]+0x00000096u); // 8028E284
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E288
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E28C
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[27]=c->ps1[27]=RF32(ea);} // 8028E290
  cmps(c,0,(int32_t)c->r[28],0); // 8028E294
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E298
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[3]); // 8028E29C
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[1]); // 8028E2A0
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[26]=c->ps1[26]=RF32(ea);} // 8028E2A4
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 8028E2A8
  {uint32_t ea=c->r[6]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E2AC
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 8028E2B0
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 8028E2B4
  if (!crb(c,2)) { goto L_8028E2D4; } // 8028E2B8
  c->r[28]=R32(c->r[6]+0x0000003Cu); // 8028E2BC
  {uint32_t ea=c->r[6]+0x00000040u; c->f[26]=c->ps1[26]=RF32(ea);} // 8028E2C0
  cmps(c,0,(int32_t)c->r[28],0); // 8028E2C4
  if (!crb(c,2)) { goto L_8028E2D4; } // 8028E2C8
  c->r[28]=R32(c->r[3]+0x0000004Cu); // 8028E2CC
  {uint32_t ea=c->r[3]+0x00000048u; c->f[26]=c->ps1[26]=RF32(ea);} // 8028E2D0
L_8028E2D4:;
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[25]=c->ps1[25]=RF32(ea);} // 8028E2D4
  c->r[29]=c->r[31]|c->r[31]; // 8028E2D8
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E2DC
  c->r[30]=c->r[1]+0x00000018u; // 8028E2E0
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E2E4
  c->r[26]=0u+0x00000000u; // 8028E2E8
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[0]); // 8028E2EC
  c->r[27]=R32(c->r[3]+0x000000C4u); // 8028E2F0
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[24]=c->ps1[24]=RF32(ea);} // 8028E2F4
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[1]); // 8028E2F8
L_8028E2FC:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[24]);} // 8028E2FC
  c->r[4]=c->r[26]|c->r[26]; // 8028E300
  c->r[3]=R32(c->r[31]+0x00000010u); // 8028E304
  c->lr=0x8028E30Cu; f_8029CA2C(c); // 8028E308
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E30C
  c->r[26]=c->r[26]+0x00000001u; // 8028E310
  {uint32_t ea=c->r[29]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E314
  cmps(c,0,(int32_t)c->r[26],4); // 8028E318
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8028E31C
  c->r[29]=c->r[29]+0x00000004u; // 8028E320
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8028E324
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8028E328
  c->r[30]=c->r[30]+0x00000004u; // 8028E32C
  if (crb(c,0)) { IRQCHK(c); goto L_8028E2FC; } // 8028E330
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8028E334
  c->r[3]=c->r[31]|c->r[31]; // 8028E338
  c->r[4]=R32(c->r[31]+0x00000010u); // 8028E33C
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E340
  c->f[24]=c->f[5]; // 8028E344
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E348
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[2]); // 8028E34C
  {uint32_t ea=c->r[4]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 8028E350
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 8028E354
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 8028E358
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E35C
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8028E360
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 8028E364
  {uint32_t ea=c->r[4]+0x00000060u; c->f[6]=c->ps1[6]=RF32(ea);} // 8028E368
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028E36C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8028E370
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 8028E374
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[7]); // 8028E378
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8028E37C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[6]); // 8028E380
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E384
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 8028E388
  {uint32_t ea=c->r[4]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 8028E38C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 8028E390
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8028E394
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028E398
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 8028E39C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 8028E3A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8028E3A4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8028E3A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8028E3AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8028E3B0
  c->ctr=c->r[12]; // 8028E3B4
  if (true) { c->lr=0x8028E3BCu; dispatch(c,c->ctr); } // 8028E3B8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 8028E3BC
  c->f[1]=c->f[26]; // 8028E3C0
  c->r[26]=c->r[3]|c->r[3]; // 8028E3C4
  c->r[4]=c->r[28]|c->r[28]; // 8028E3C8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 8028E3CC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[29]);} // 8028E3D0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[28]);} // 8028E3D4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[27]);} // 8028E3D8
  c->lr=0x8028E3E0u; f_8028D2E8(c); // 8028E3DC
  W32(c->r[26]+0x00000020u,c->r[27]); // 8028E3E0
  c->r[31]=c->r[1]+0x00000018u; // 8028E3E4
  c->r[27]=0u+0x00000000u; // 8028E3E8
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[25]);} // 8028E3EC
L_8028E3F0:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E3F0
  c->r[3]=c->r[26]|c->r[26]; // 8028E3F4
  c->r[4]=c->r[27]|c->r[27]; // 8028E3F8
  c->lr=0x8028E400u; f_8028D2FC(c); // 8028E3FC
  c->r[27]=c->r[27]+0x00000001u; // 8028E400
  c->r[31]=c->r[31]+0x00000004u; // 8028E404
  cmps(c,0,(int32_t)c->r[27],4); // 8028E408
  if (crb(c,0)) { IRQCHK(c); goto L_8028E3F0; } // 8028E40C
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[24]);} // 8028E410
  c->r[31]=c->r[1]+0x00000008u; // 8028E414
  c->r[27]=0u+0x00000000u; // 8028E418
L_8028E41C:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028E41C
  c->r[3]=c->r[26]|c->r[26]; // 8028E420
  c->r[4]=c->r[27]|c->r[27]; // 8028E424
  c->lr=0x8028E42Cu; f_8028D2C8(c); // 8028E428
  c->r[27]=c->r[27]+0x00000001u; // 8028E42C
  c->r[31]=c->r[31]+0x00000004u; // 8028E430
  cmps(c,0,(int32_t)c->r[27],3); // 8028E434
  if (crb(c,0)) { IRQCHK(c); goto L_8028E41C; } // 8028E438
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 8028E43C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 8028E440
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 8028E444
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 8028E448
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 8028E44C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 8028E450
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 8028E454
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 8028E458
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 8028E45C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 8028E460
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 8028E464
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 8028E468
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,25,ea,0,0);} // 8028E46C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[25]=RF64(ea);} // 8028E470
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,24,ea,0,0);} // 8028E474
  c->r[11]=c->r[1]+0x00000050u; // 8028E478
  {uint32_t ea=c->r[1]+0x00000050u; c->f[24]=RF64(ea);} // 8028E47C
  c->lr=0x8028E484u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028E480
  c->r[0]=R32(c->r[1]+0x000000D4u); // 8028E484
  c->lr=c->r[0]; // 8028E488
  c->r[1]=c->r[1]+0x000000D0u; // 8028E48C
  return; // 8028E490
}

// fn_8028E494
void f_8028E494(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E494
  c->r[0]=c->lr; // 8028E498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E49C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028E4A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028E4A4
  c->r[30]=c->r[3]|c->r[3]; // 8028E4A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E4AC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028E4B0
  c->ctr=c->r[12]; // 8028E4B4
  if (true) { c->lr=0x8028E4BCu; dispatch(c,c->ctr); } // 8028E4B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E4BC
  c->r[31]=c->r[3]|c->r[3]; // 8028E4C0
  c->r[12]=R32(c->r[12]+0x00000018u); // 8028E4C4
  c->ctr=c->r[12]; // 8028E4C8
  if (true) { c->lr=0x8028E4D0u; dispatch(c,c->ctr); } // 8028E4CC
  cmps(c,0,(int32_t)c->r[3],0); // 8028E4D0
  if (crb(c,2)) { goto L_8028E500; } // 8028E4D4
  c->r[0]=R8(c->r[30]+0x00000083u); // 8028E4D8
  cmps(c,0,(int32_t)c->r[0],0); // 8028E4DC
  if (crb(c,2)) { goto L_8028E4EC; } // 8028E4E0
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E4E4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 8028E4E8
L_8028E4EC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028E4EC
  c->r[3]=c->r[31]|c->r[31]; // 8028E4F0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028E4F4
  c->ctr=c->r[12]; // 8028E4F8
  if (true) { c->lr=0x8028E500u; dispatch(c,c->ctr); } // 8028E4FC
L_8028E500:;
  c->r[31]=0u+0xFFFFFFFFu; // 8028E500
  c->r[3]=c->r[30]|c->r[30]; // 8028E504
  W32(c->r[30]+0x00000098u,c->r[31]); // 8028E508
  c->r[12]=R32(c->r[30]+0x00000000u); // 8028E50C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028E510
  c->ctr=c->r[12]; // 8028E514
  if (true) { c->lr=0x8028E51Cu; dispatch(c,c->ctr); } // 8028E518
  W32(c->r[3]+0x000000D0u,c->r[31]); // 8028E51C
  c->r[3]=R32(c->r[30]+0x00000008u); // 8028E520
  cmps(c,0,(int32_t)c->r[3],0); // 8028E524
  if (crb(c,2)) { goto L_8028E530; } // 8028E528
  c->lr=0x8028E530u; f_8029C770(c); // 8028E52C
L_8028E530:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8028E530
  cmps(c,0,(int32_t)c->r[3],0); // 8028E534
  if (crb(c,2)) { goto L_8028E540; } // 8028E538
  c->lr=0x8028E540u; f_8029C770(c); // 8028E53C
L_8028E540:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8028E540
  c->r[3]=c->r[30]|c->r[30]; // 8028E544
  c->r[12]=R32(c->r[12]+0x00000018u); // 8028E548
  c->ctr=c->r[12]; // 8028E54C
  if (true) { c->lr=0x8028E554u; dispatch(c,c->ctr); } // 8028E550
  cmps(c,0,(int32_t)c->r[3],0); // 8028E554
  if (crb(c,2)) { goto L_8028E570; } // 8028E558
  c->r[12]=R32(c->r[30]+0x00000000u); // 8028E55C
  c->r[3]=c->r[30]|c->r[30]; // 8028E560
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8028E564
  c->ctr=c->r[12]; // 8028E568
  if (true) { c->lr=0x8028E570u; dispatch(c,c->ctr); } // 8028E56C
L_8028E570:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8028E570
  cmps(c,0,(int32_t)c->r[0],0); // 8028E574
  if (crb(c,2)) { goto L_8028E588; } // 8028E578
  c->r[3]=R32(c->r[30]+0x00000010u); // 8028E57C
  c->r[4]=c->r[30]|c->r[30]; // 8028E580
  c->lr=0x8028E588u; f_8029D1B8(c); // 8028E584
L_8028E588:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 8028E588
  cmps(c,0,(int32_t)c->r[3],0); // 8028E58C
  if (crb(c,2)) { goto L_8028E59C; } // 8028E590
  c->r[4]=c->r[30]|c->r[30]; // 8028E594
  c->lr=0x8028E59Cu; f_8029CEAC(c); // 8028E598
L_8028E59C:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 8028E59C
  cmps(c,0,(int32_t)c->r[3],0); // 8028E5A0
  if (crb(c,2)) { goto L_8028E5B0; } // 8028E5A4
  c->r[4]=c->r[30]|c->r[30]; // 8028E5A8
  c->lr=0x8028E5B0u; f_80290A00(c); // 8028E5AC
L_8028E5B0:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 8028E5B0
  cmps(c,0,(int32_t)c->r[3],0); // 8028E5B4
  if (crb(c,2)) { goto L_8028E5DC; } // 8028E5B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E5BC
  c->r[5]=c->r[30]|c->r[30]; // 8028E5C0
  c->r[4]=R32(c->r[30]+0x00000028u); // 8028E5C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028E5C8
  c->ctr=c->r[12]; // 8028E5CC
  if (true) { c->lr=0x8028E5D4u; dispatch(c,c->ctr); } // 8028E5D0
  c->r[0]=0u+0x00000000u; // 8028E5D4
  W32(c->r[30]+0x00000028u,c->r[0]); // 8028E5D8
L_8028E5DC:;
  c->r[0]=0u+0x00000000u; // 8028E5DC
  W8(c->r[30]+0x00000081u,c->r[0]); // 8028E5E0
  W8(c->r[30]+0x00000083u,c->r[0]); // 8028E5E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028E5E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028E5EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028E5F0
  c->lr=c->r[0]; // 8028E5F4
  c->r[1]=c->r[1]+0x00000010u; // 8028E5F8
  return; // 8028E5FC
}

// fn_8028E600
void f_8028E600(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 8028E600
  return; // 8028E604
}

// fn_8028E608
void f_8028E608(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028E608
  W32(c->r[3]+0x00000004u,c->r[0]); // 8028E60C
  return; // 8028E610
}

// fn_8028E614
void f_8028E614(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 8028E614
  return; // 8028E618
}

// fn_8028E61C
void f_8028E61C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028E61C
  W32(c->r[3]+0x00000010u,c->r[0]); // 8028E620
  return; // 8028E624
}

// fn_8028E628
void f_8028E628(Ctx* __restrict c) {
  W32(c->r[3]+0x00000014u,c->r[4]); // 8028E628
  return; // 8028E62C
}

// fn_8028E630
void f_8028E630(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028E630
  W32(c->r[3]+0x00000014u,c->r[0]); // 8028E634
  return; // 8028E638
}

// fn_8028E63C
void f_8028E63C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000018u,c->r[4]); // 8028E63C
  return; // 8028E640
}

// fn_8028E644
void f_8028E644(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028E644
  W32(c->r[3]+0x00000018u,c->r[0]); // 8028E648
  return; // 8028E64C
}

// fn_8028E650
void f_8028E650(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000095u); // 8028E650
  return; // 8028E654
}

// fn_8028E658
void f_8028E658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E658
  c->r[0]=c->lr; // 8028E65C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E660
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028E664
  c->r[31]=c->r[3]|c->r[3]; // 8028E668
  c->r[0]=R32(c->r[3]+0x00000010u); // 8028E66C
  W8(c->r[3]+0x00000094u,c->r[4]); // 8028E670
  cmps(c,0,(int32_t)c->r[0],0); // 8028E674
  if (crb(c,2)) { goto L_8028E688; } // 8028E678
  c->r[3]=c->r[0]|c->r[0]; // 8028E67C
  c->r[4]=c->r[31]|c->r[31]; // 8028E680
  c->lr=0x8028E688u; f_8029CA3C(c); // 8028E684
L_8028E688:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8028E688
  c->r[3]=c->r[31]|c->r[31]; // 8028E68C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8028E690
  c->ctr=c->r[12]; // 8028E694
  if (true) { c->lr=0x8028E69Cu; dispatch(c,c->ctr); } // 8028E698
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028E69C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028E6A0
  c->lr=c->r[0]; // 8028E6A4
  c->r[1]=c->r[1]+0x00000010u; // 8028E6A8
  return; // 8028E6AC
}

// fn_8028E6B0
void f_8028E6B0(Ctx* __restrict c) {
  return; // 8028E6B0
}

// fn_8028E6B4
void f_8028E6B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E6B4
  fcmp(c,0,c->f[1],c->f[0]); // 8028E6B8
  if (!crb(c,1)) { goto L_8028E6C4; } // 8028E6BC
  goto L_8028E6D8; // 8028E6C0
L_8028E6C4:;
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E6C4
  fcmp(c,0,c->f[1],c->f[0]); // 8028E6C8
  if (!crb(c,0)) { goto L_8028E6D4; } // 8028E6CC
  goto L_8028E6D8; // 8028E6D0
L_8028E6D4:;
  c->f[0]=c->f[1]; // 8028E6D4
L_8028E6D8:;
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 8028E6D8
  return; // 8028E6DC
}

// fn_8028E6E0
void f_8028E6E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9FC0u; c->f[5]=c->ps1[5]=RF32(ea);} // 8028E6E0
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E6E4
  fcmp(c,0,c->f[1],c->f[5]); // 8028E6E8
  if (!crb(c,1)) { goto L_8028E6F4; } // 8028E6EC
  goto L_8028E708; // 8028E6F0
L_8028E6F4:;
  {uint32_t ea=c->r[2]+0xFFFF9FC4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8028E6F4
  fcmp(c,0,c->f[1],c->f[5]); // 8028E6F8
  if (!crb(c,0)) { goto L_8028E704; } // 8028E6FC
  goto L_8028E708; // 8028E700
L_8028E704:;
  c->f[5]=c->f[1]; // 8028E704
L_8028E708:;
  c->r[6]=R32(c->r[3]+0x000000A4u); // 8028E708
  c->r[0]=R32(c->r[3]+0x000000A8u); // 8028E70C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 8028E710
  if (crb(c,0)) { goto L_8028E720; } // 8028E714
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E718
  goto L_8028E768; // 8028E71C
L_8028E720:;
  c->r[5]=0u+0x43300000u; // 8028E720
  c->r[0]=c->r[0]^0x80000000u; // 8028E724
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8028E728
  c->r[0]=c->r[6]^0x80000000u; // 8028E72C
  {uint32_t ea=c->r[2]+0xFFFF9FC8u; c->f[4]=RF64(ea);} // 8028E730
  W32(c->r[1]+0x00000008u,c->r[5]); // 8028E734
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028E738
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8028E73C
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8028E740
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 8028E744
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E748
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8028E74C
  W32(c->r[1]+0x00000010u,c->r[5]); // 8028E750
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8028E754
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8028E758
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8028E75C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8028E760
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8028E764
L_8028E768:;
  c->r[0]=0u+0x00000000u; // 8028E768
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8028E76C
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[5]);} // 8028E770
  W32(c->r[3]+0x000000A4u,c->r[4]); // 8028E774
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8028E778
  c->r[1]=c->r[1]+0x00000020u; // 8028E77C
  return; // 8028E780
}

// fn_8028E784
void f_8028E784(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 8028E784
  return; // 8028E788
}

// fn_8028E78C
void f_8028E78C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C4u,c->r[4]); // 8028E78C
  return; // 8028E790
}

// fn_8028E794
void f_8028E794(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 8028E794
  return; // 8028E798
}

// fn_8028E79C
void f_8028E79C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028E79C
  c->r[3]=c->r[3]+c->r[0]; // 8028E7A0
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[1]);} // 8028E7A4
  return; // 8028E7A8
}

// fn_8028E7AC
void f_8028E7AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E7AC
  c->r[0]=c->lr; // 8028E7B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E7B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028E7B8
  c->r[31]=c->r[4]|c->r[4]; // 8028E7BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E7C0
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028E7C4
  c->ctr=c->r[12]; // 8028E7C8
  if (true) { c->lr=0x8028E7D0u; dispatch(c,c->ctr); } // 8028E7CC
  c->r[4]=c->r[31]|c->r[31]; // 8028E7D0
  c->lr=0x8028E7D8u; f_8028D2F4(c); // 8028E7D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028E7D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028E7DC
  c->lr=c->r[0]; // 8028E7E0
  c->r[1]=c->r[1]+0x00000010u; // 8028E7E4
  return; // 8028E7E8
}

// fn_8028E7EC
void f_8028E7EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E7EC
  c->r[0]=c->lr; // 8028E7F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E7F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028E7F8
  c->r[31]=c->r[4]|c->r[4]; // 8028E7FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E800
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028E804
  c->ctr=c->r[12]; // 8028E808
  if (true) { c->lr=0x8028E810u; dispatch(c,c->ctr); } // 8028E80C
  W32(c->r[3]+0x0000002Cu,c->r[31]); // 8028E810
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028E814
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028E818
  c->lr=c->r[0]; // 8028E81C
  c->r[1]=c->r[1]+0x00000010u; // 8028E820
  return; // 8028E824
}

// fn_8028E828
void f_8028E828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E828
  c->r[0]=c->lr; // 8028E82C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028E834
  c->r[31]=c->r[4]|c->r[4]; // 8028E838
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E83C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028E840
  c->ctr=c->r[12]; // 8028E844
  if (true) { c->lr=0x8028E84Cu; dispatch(c,c->ctr); } // 8028E848
  W32(c->r[3]+0x00000030u,c->r[31]); // 8028E84C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028E850
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028E854
  c->lr=c->r[0]; // 8028E858
  c->r[1]=c->r[1]+0x00000010u; // 8028E85C
  return; // 8028E860
}

// fn_8028E864
void f_8028E864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E864
  c->r[0]=c->lr; // 8028E868
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028E86C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028E870
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028E874
  c->r[30]=c->r[4]|c->r[4]; // 8028E878
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028E87C
  c->r[29]=c->r[3]|c->r[3]; // 8028E880
  c->r[3]=R32(c->r[4]+0x00000008u); // 8028E884
  c->r[4]=R32(c->r[4]+0x00000010u); // 8028E888
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E88C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8028E890
  c->ctr=c->r[12]; // 8028E894
  if (true) { c->lr=0x8028E89Cu; dispatch(c,c->ctr); } // 8028E898
  cmps(c,0,(int32_t)c->r[3],0); // 8028E89C
  c->r[31]=c->r[3]|c->r[3]; // 8028E8A0
  if (crb(c,2)) { goto L_8028E914; } // 8028E8A4
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8028E8A8
  c->r[5]=R32(c->r[30]+0x00000010u); // 8028E8AC
  c->lr=0x8028E8B4u; f_80004338(c); // 8028E8B0
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8028E8B4
  c->r[0]=R32(c->r[30]+0x00000000u); // 8028E8B8
  W32(c->r[29]+0x00000028u,c->r[3]); // 8028E8BC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8028E8C0
  cmps(c,0,(int32_t)c->r[0],0); // 8028E8C4
  c->r[5]=R32(c->r[30]+0x00000004u); // 8028E8C8
  c->r[4]=R32(c->r[30]+0x00000008u); // 8028E8CC
  c->r[0]=R32(c->r[30]+0x00000010u); // 8028E8D0
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 8028E8D4
  W32(c->r[29]+0x00000020u,c->r[5]); // 8028E8D8
  W32(c->r[29]+0x00000024u,c->r[4]); // 8028E8DC
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8028E8E0
  W32(c->r[29]+0x00000028u,c->r[31]); // 8028E8E4
  if (crb(c,2)) { goto L_8028E914; } // 8028E8E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E8EC
  c->r[4]=c->r[31]|c->r[31]; // 8028E8F0
  c->r[5]=R32(c->r[29]+0x00000098u); // 8028E8F4
  c->r[12]=R32(c->r[12]+0x00000014u); // 8028E8F8
  c->ctr=c->r[12]; // 8028E8FC
  if (true) { c->lr=0x8028E904u; dispatch(c,c->ctr); } // 8028E900
  cmps(c,0,(int32_t)c->r[3],4); // 8028E904
  if (!crb(c,1)) { goto L_8028E910; } // 8028E908
  c->r[3]=0u+0x00000004u; // 8028E90C
L_8028E910:;
  W8(c->r[29]+0x00000095u,c->r[3]); // 8028E910
L_8028E914:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028E914
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028E918
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028E91C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028E920
  c->lr=c->r[0]; // 8028E924
  c->r[1]=c->r[1]+0x00000020u; // 8028E928
  return; // 8028E92C
}

// fn_8028E930
void f_8028E930(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8028E930
  c->r[6]=c->r[3]|c->r[3]; // 8028E934
  cmps(c,0,(int32_t)c->r[0],0); // 8028E938
  if (!crb(c,2)) { goto L_8028E948; } // 8028E93C
  c->r[3]=0u+0x00000000u; // 8028E940
  return; // 8028E944
L_8028E948:;
  c->r[3]=c->r[0]|c->r[0]; // 8028E948
  c->r[5]=c->r[4]|c->r[4]; // 8028E94C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E950
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8028E954
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028E958
  c->ctr=c->r[12]; // 8028E95C
  if (true) { dispatch(c,c->ctr); return; } // 8028E960
}

// fn_8028E964
void f_8028E964(Ctx* __restrict c) {
  return; // 8028E964
}

// fn_8028E968
void f_8028E968(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 8028E968
  c->r[0]=0u-c->r[3]; // 8028E96C
  c->r[0]=c->r[0]|c->r[3]; // 8028E970
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028E974
  return; // 8028E978
}

// fn_8028E97C
void f_8028E97C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8028E97C
  c->r[0]=0u-c->r[3]; // 8028E980
  c->r[0]=c->r[0]|c->r[3]; // 8028E984
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8028E988
  return; // 8028E98C
}

// fn_8028E990
void f_8028E990(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 8028E990
  f_8029C770(c); return; // 8028E994
}

// fn_8028E998
void f_8028E998(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8028E998
  f_8029C770(c); return; // 8028E99C
}

// fn_8028E9A0
void f_8028E9A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E9A0
  c->r[0]=c->lr; // 8028E9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E9A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028E9AC
  c->r[31]=c->r[4]|c->r[4]; // 8028E9B0
  W32(c->r[3]+0x00000098u,c->r[4]); // 8028E9B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028E9B8
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028E9BC
  c->ctr=c->r[12]; // 8028E9C0
  if (true) { c->lr=0x8028E9C8u; dispatch(c,c->ctr); } // 8028E9C4
  W32(c->r[3]+0x000000D0u,c->r[31]); // 8028E9C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028E9CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028E9D0
  c->lr=c->r[0]; // 8028E9D4
  c->r[1]=c->r[1]+0x00000010u; // 8028E9D8
  return; // 8028E9DC
}

// fn_8028E9E0
void f_8028E9E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E9E0
  c->r[0]=c->lr; // 8028E9E4
  cmps(c,0,(int32_t)c->r[3],0); // 8028E9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028E9EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028E9F0
  c->r[31]=c->r[3]|c->r[3]; // 8028E9F4
  if (crb(c,2)) { goto L_8028EA08; } // 8028E9F8
  cmps(c,0,(int32_t)c->r[4],0); // 8028E9FC
  if (!crb(c,1)) { goto L_8028EA08; } // 8028EA00
  c->lr=0x8028EA08u; f_800D6AD0(c); // 8028EA04
L_8028EA08:;
  c->r[3]=c->r[31]|c->r[31]; // 8028EA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028EA0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028EA10
  c->lr=c->r[0]; // 8028EA14
  c->r[1]=c->r[1]+0x00000010u; // 8028EA18
  return; // 8028EA1C
}

// fn_8028EA20
void f_8028EA20(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFA478u; // 8028EA20
  return; // 8028EA24
}

// fn_8028EA28
void f_8028EA28(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8028EA28
  W32(c->r[13]+0xFFFFA478u,c->r[0]); // 8028EA2C
  return; // 8028EA30
}

// fn_8028EA34
void f_8028EA34(Ctx* __restrict c) {
  c->r[4]=0u+0x0000006Fu; // 8028EA34
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EA38
  c->r[0]=0u+0x43300000u; // 8028EA3C
  {uint32_t ea=c->r[2]+0xFFFF9FD0u; c->f[2]=RF64(ea);} // 8028EA40
  c->r[3]=c->r[4]^0x80000000u; // 8028EA44
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028EA48
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8028EA4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028EA50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8028EA54
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8028EA58
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028EA5C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8028EA60
  c->r[3]=R32(c->r[1]+0x00000014u); // 8028EA64
  cmps(c,0,(int32_t)c->r[3],111); // 8028EA68
  if (!crb(c,1)) { goto L_8028EA74; } // 8028EA6C
  goto L_8028EA7C; // 8028EA70
L_8028EA74:;
  c->r[0]=sraw(c,c->r[3],31); // 8028EA74
  c->r[4]=c->r[3]&~c->r[0]; // 8028EA78
L_8028EA7C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 8028EA7C
  c->r[3]=0u+0x80310000u; // 8028EA80
  c->r[3]=c->r[3]+0xFFFF9760u; // 8028EA84
  c->r[7]=c->r[3]+c->r[0]; // 8028EA88
  c->r[8]=R16(c->r[3]+c->r[0]); // 8028EA8C
  c->r[6]=R16(c->r[7]+0x00000002u); // 8028EA90
  c->r[4]=R16(c->r[7]+0x00000004u); // 8028EA94
  c->r[3]=R16(c->r[7]+0x00000006u); // 8028EA98
  c->r[0]=R16(c->r[7]+0x00000008u); // 8028EA9C
  W16(c->r[5]+0x00000000u,c->r[8]); // 8028EAA0
  W16(c->r[5]+0x00000002u,c->r[6]); // 8028EAA4
  W16(c->r[5]+0x00000004u,c->r[4]); // 8028EAA8
  W16(c->r[5]+0x00000006u,c->r[3]); // 8028EAAC
  W16(c->r[5]+0x00000008u,c->r[0]); // 8028EAB0
  c->r[1]=c->r[1]+0x00000020u; // 8028EAB4
  return; // 8028EAB8
}

// fn_8028EABC
void f_8028EABC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000060u; // 8028EABC
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EAC0
  c->r[0]=0u+0x43300000u; // 8028EAC4
  {uint32_t ea=c->r[2]+0xFFFF9FD0u; c->f[2]=RF64(ea);} // 8028EAC8
  c->r[3]=c->r[4]^0x80000000u; // 8028EACC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028EAD0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8028EAD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028EAD8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8028EADC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8028EAE0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028EAE4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8028EAE8
  c->r[3]=R32(c->r[1]+0x00000014u); // 8028EAEC
  cmps(c,0,(int32_t)c->r[3],96); // 8028EAF0
  if (!crb(c,1)) { goto L_8028EAFC; } // 8028EAF4
  goto L_8028EB04; // 8028EAF8
L_8028EAFC:;
  c->r[0]=sraw(c,c->r[3],31); // 8028EAFC
  c->r[4]=c->r[3]&~c->r[0]; // 8028EB00
L_8028EB04:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 8028EB04
  c->r[3]=0u+0x80310000u; // 8028EB08
  c->r[3]=c->r[3]+0xFFFF9BC0u; // 8028EB0C
  c->r[7]=c->r[3]+c->r[0]; // 8028EB10
  c->r[8]=R16(c->r[3]+c->r[0]); // 8028EB14
  c->r[6]=R16(c->r[7]+0x00000002u); // 8028EB18
  c->r[4]=R16(c->r[7]+0x00000004u); // 8028EB1C
  c->r[3]=R16(c->r[7]+0x00000006u); // 8028EB20
  c->r[0]=R16(c->r[7]+0x00000008u); // 8028EB24
  W16(c->r[5]+0x00000000u,c->r[8]); // 8028EB28
  W16(c->r[5]+0x00000002u,c->r[6]); // 8028EB2C
  W16(c->r[5]+0x00000004u,c->r[4]); // 8028EB30
  W16(c->r[5]+0x00000006u,c->r[3]); // 8028EB34
  W16(c->r[5]+0x00000008u,c->r[0]); // 8028EB38
  c->r[1]=c->r[1]+0x00000020u; // 8028EB3C
  return; // 8028EB40
}

// fn_8028EB44
void f_8028EB44(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9FD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028EB44
  c->r[4]=0u+0x00000079u; // 8028EB48
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EB4C
  c->r[3]=c->r[4]^0x80000000u; // 8028EB50
  c->r[0]=0u+0x43300000u; // 8028EB54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8028EB58
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8028EB5C
  {uint32_t ea=c->r[2]+0xFFFF9FD0u; c->f[2]=RF64(ea);} // 8028EB60
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028EB64
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8028EB68
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028EB6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8028EB70
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8028EB74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028EB78
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8028EB7C
  c->r[3]=R32(c->r[1]+0x00000014u); // 8028EB80
  cmps(c,0,(int32_t)c->r[3],121); // 8028EB84
  if (!crb(c,1)) { goto L_8028EB90; } // 8028EB88
  goto L_8028EB98; // 8028EB8C
L_8028EB90:;
  c->r[0]=sraw(c,c->r[3],31); // 8028EB90
  c->r[4]=c->r[3]&~c->r[0]; // 8028EB94
L_8028EB98:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 8028EB98
  c->r[3]=0u+0x80310000u; // 8028EB9C
  c->r[3]=c->r[3]+0xFFFF9F8Cu; // 8028EBA0
  c->r[7]=c->r[3]+c->r[0]; // 8028EBA4
  c->r[8]=R16(c->r[3]+c->r[0]); // 8028EBA8
  c->r[6]=R16(c->r[7]+0x00000002u); // 8028EBAC
  c->r[4]=R16(c->r[7]+0x00000004u); // 8028EBB0
  c->r[3]=R16(c->r[7]+0x00000006u); // 8028EBB4
  c->r[0]=R16(c->r[7]+0x00000008u); // 8028EBB8
  W16(c->r[5]+0x00000000u,c->r[8]); // 8028EBBC
  W16(c->r[5]+0x00000002u,c->r[6]); // 8028EBC0
  W16(c->r[5]+0x00000004u,c->r[4]); // 8028EBC4
  W16(c->r[5]+0x00000006u,c->r[3]); // 8028EBC8
  W16(c->r[5]+0x00000008u,c->r[0]); // 8028EBCC
  c->r[1]=c->r[1]+0x00000020u; // 8028EBD0
  return; // 8028EBD4
}

// fn_8028EBD8
void f_8028EBD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9FD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028EBD8
  c->r[4]=0u+0x0000005Cu; // 8028EBDC
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EBE0
  c->r[3]=c->r[4]^0x80000000u; // 8028EBE4
  c->r[0]=0u+0x43300000u; // 8028EBE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8028EBEC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8028EBF0
  {uint32_t ea=c->r[2]+0xFFFF9FD0u; c->f[2]=RF64(ea);} // 8028EBF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028EBF8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8028EBFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028EC00
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8028EC04
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8028EC08
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028EC0C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8028EC10
  c->r[3]=R32(c->r[1]+0x00000014u); // 8028EC14
  cmps(c,0,(int32_t)c->r[3],92); // 8028EC18
  if (!crb(c,1)) { goto L_8028EC24; } // 8028EC1C
  goto L_8028EC2C; // 8028EC20
L_8028EC24:;
  c->r[0]=sraw(c,c->r[3],31); // 8028EC24
  c->r[4]=c->r[3]&~c->r[0]; // 8028EC28
L_8028EC2C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 8028EC2C
  c->r[3]=0u+0x80310000u; // 8028EC30
  c->r[3]=c->r[3]+0xFFFFA450u; // 8028EC34
  c->r[7]=c->r[3]+c->r[0]; // 8028EC38
  c->r[8]=R16(c->r[3]+c->r[0]); // 8028EC3C
  c->r[6]=R16(c->r[7]+0x00000002u); // 8028EC40
  c->r[4]=R16(c->r[7]+0x00000004u); // 8028EC44
  c->r[3]=R16(c->r[7]+0x00000006u); // 8028EC48
  c->r[0]=R16(c->r[7]+0x00000008u); // 8028EC4C
  W16(c->r[5]+0x00000000u,c->r[8]); // 8028EC50
  W16(c->r[5]+0x00000002u,c->r[6]); // 8028EC54
  W16(c->r[5]+0x00000004u,c->r[4]); // 8028EC58
  W16(c->r[5]+0x00000006u,c->r[3]); // 8028EC5C
  W16(c->r[5]+0x00000008u,c->r[0]); // 8028EC60
  c->r[1]=c->r[1]+0x00000020u; // 8028EC64
  return; // 8028EC68
}

// fn_8028EC6C
void f_8028EC6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9FD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028EC6C
  c->r[4]=0u+0x0000005Cu; // 8028EC70
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EC74
  c->r[3]=c->r[4]^0x80000000u; // 8028EC78
  c->r[0]=0u+0x43300000u; // 8028EC7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8028EC80
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8028EC84
  {uint32_t ea=c->r[2]+0xFFFF9FD0u; c->f[2]=RF64(ea);} // 8028EC88
  W32(c->r[1]+0x00000008u,c->r[0]); // 8028EC8C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8028EC90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8028EC94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8028EC98
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8028EC9C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8028ECA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8028ECA4
  c->r[3]=R32(c->r[1]+0x00000014u); // 8028ECA8
  cmps(c,0,(int32_t)c->r[3],92); // 8028ECAC
  if (!crb(c,1)) { goto L_8028ECB8; } // 8028ECB0
  goto L_8028ECC0; // 8028ECB4
L_8028ECB8:;
  c->r[0]=sraw(c,c->r[3],31); // 8028ECB8
  c->r[4]=c->r[3]&~c->r[0]; // 8028ECBC
L_8028ECC0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 8028ECC0
  c->r[3]=0u+0x80310000u; // 8028ECC4
  c->r[3]=c->r[3]+0xFFFFA7F4u; // 8028ECC8
  c->r[7]=c->r[3]+c->r[0]; // 8028ECCC
  c->r[8]=R16(c->r[3]+c->r[0]); // 8028ECD0
  c->r[6]=R16(c->r[7]+0x00000002u); // 8028ECD4
  c->r[4]=R16(c->r[7]+0x00000004u); // 8028ECD8
  c->r[3]=R16(c->r[7]+0x00000006u); // 8028ECDC
  c->r[0]=R16(c->r[7]+0x00000008u); // 8028ECE0
  W16(c->r[5]+0x00000000u,c->r[8]); // 8028ECE4
  W16(c->r[5]+0x00000002u,c->r[6]); // 8028ECE8
  W16(c->r[5]+0x00000004u,c->r[4]); // 8028ECEC
  W16(c->r[5]+0x00000006u,c->r[3]); // 8028ECF0
  W16(c->r[5]+0x00000008u,c->r[0]); // 8028ECF4
  c->r[1]=c->r[1]+0x00000020u; // 8028ECF8
  return; // 8028ECFC
}

// fn_8028ED00
void f_8028ED00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028ED00
  c->r[0]=c->lr; // 8028ED04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028ED08
  c->r[0]=R8(c->r[13]+0xFFFFA480u); // 8028ED0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8028ED10
  if (!crb(c,2)) { goto L_8028ED64; } // 8028ED14
  c->r[6]=0u+0x80420000u; // 8028ED18
  c->r[0]=0u+0x00000000u; // 8028ED1C
  c->r[3]=c->r[6]+0xFFFFAAB0u; // 8028ED20
  c->r[4]=0u+0x80290000u; // 8028ED24
  W32(c->r[3]+0x00000008u,c->r[0]); // 8028ED28
  c->r[7]=c->r[3]+0x00000008u; // 8028ED2C
  c->r[5]=0u+0x80420000u; // 8028ED30
  c->r[4]=c->r[4]+0xFFFFED7Cu; // 8028ED34
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8028ED38
  c->r[5]=c->r[5]+0xFFFFAAA0u; // 8028ED3C
  W32(c->r[6]+0xFFFFAAB0u,c->r[0]); // 8028ED40
  W32(c->r[3]+0x00000004u,c->r[0]); // 8028ED44
  W32(c->r[3]+0x00000008u,c->r[7]); // 8028ED48
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8028ED4C
  W8(c->r[3]+0x00000010u,c->r[0]); // 8028ED50
  W32(c->r[3]+0x00000014u,c->r[0]); // 8028ED54
  c->lr=0x8028ED5Cu; f_8018566C(c); // 8028ED58
  c->r[0]=0u+0x00000001u; // 8028ED5C
  W8(c->r[13]+0xFFFFA480u,c->r[0]); // 8028ED60
L_8028ED64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028ED64
  c->r[3]=0u+0x80420000u; // 8028ED68
  c->r[3]=c->r[3]+0xFFFFAAB0u; // 8028ED6C
  c->lr=c->r[0]; // 8028ED70
  c->r[1]=c->r[1]+0x00000010u; // 8028ED74
  return; // 8028ED78
}

// fn_8028ED7C
void f_8028ED7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028ED7C
  c->r[0]=c->lr; // 8028ED80
  cmps(c,0,(int32_t)c->r[3],0); // 8028ED84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028ED88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028ED8C
  c->r[31]=c->r[4]|c->r[4]; // 8028ED90
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028ED94
  c->r[30]=c->r[3]|c->r[3]; // 8028ED98
  if (crb(c,2)) { goto L_8028EDC0; } // 8028ED9C
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 8028EDA0
  if (crb(c,2)) { goto L_8028EDB0; } // 8028EDA4
  c->r[4]=0u+0x00000000u; // 8028EDA8
  c->lr=0x8028EDB0u; f_802A7B78(c); // 8028EDAC
L_8028EDB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8028EDB0
  if (!crb(c,1)) { goto L_8028EDC0; } // 8028EDB4
  c->r[3]=c->r[30]|c->r[30]; // 8028EDB8
  c->lr=0x8028EDC0u; f_800D6AD0(c); // 8028EDBC
L_8028EDC0:;
  c->r[3]=c->r[30]|c->r[30]; // 8028EDC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028EDC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028EDC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028EDCC
  c->lr=c->r[0]; // 8028EDD0
  c->r[1]=c->r[1]+0x00000010u; // 8028EDD4
  return; // 8028EDD8
}

// fn_8028EDDC
void f_8028EDDC(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x00000001u; // 8028EDDC
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 8028EDE0
  return; // 8028EDE4
}

// fn_8028EDE8
void f_8028EDE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EDE8
  c->r[0]=c->lr; // 8028EDEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028EDF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028EDF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028EDF8
  c->r[30]=c->r[5]|c->r[5]; // 8028EDFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028EE00
  c->r[29]=c->r[4]|c->r[4]; // 8028EE04
  W32(c->r[1]+0x00000010u,c->r[28]); // 8028EE08
  c->r[28]=c->r[3]|c->r[3]; // 8028EE0C
  c->lr=0x8028EE14u; f_80160C68(c); // 8028EE10
  c->r[0]=R8(c->r[28]+0x00000010u); // 8028EE14
  c->r[31]=c->r[3]|c->r[3]; // 8028EE18
  cmps(c,0,(int32_t)c->r[0],0); // 8028EE1C
  if (crb(c,2)) { goto L_8028EE2C; } // 8028EE20
  c->lr=0x8028EE28u; f_80160C90(c); // 8028EE24
  goto L_8028EE5C; // 8028EE28
L_8028EE2C:;
  c->r[3]=c->r[28]|c->r[28]; // 8028EE2C
  c->r[4]=c->r[29]|c->r[29]; // 8028EE30
  c->r[5]=c->r[30]|c->r[30]; // 8028EE34
  c->r[6]=0u+0x00000100u; // 8028EE38
  c->lr=0x8028EE40u; f_80291058(c); // 8028EE3C
  c->r[0]=0u+0x00000001u; // 8028EE40
  W32(c->r[28]+0x00000014u,c->r[3]); // 8028EE44
  c->r[3]=c->r[31]|c->r[31]; // 8028EE48
  W32(c->r[28]+0x00000018u,c->r[29]); // 8028EE4C
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 8028EE50
  W8(c->r[28]+0x00000010u,c->r[0]); // 8028EE54
  c->lr=0x8028EE5Cu; f_80160C90(c); // 8028EE58
L_8028EE5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028EE5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028EE60
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028EE64
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028EE68
  c->r[28]=R32(c->r[1]+0x00000010u); // 8028EE6C
  c->lr=c->r[0]; // 8028EE70
  c->r[1]=c->r[1]+0x00000020u; // 8028EE74
  return; // 8028EE78
}

