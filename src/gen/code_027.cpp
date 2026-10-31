#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8025DA34
void f_8025DA34(Ctx* __restrict c) {
  return; // 8025DA34
}

// fn_8025DA38
void f_8025DA38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DA38
  c->r[0]=c->lr; // 8025DA3C
  cmps(c,0,(int32_t)c->r[3],0); // 8025DA40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025DA44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025DA48
  c->r[31]=c->r[3]|c->r[3]; // 8025DA4C
  if (crb(c,2)) { goto L_8025DA60; } // 8025DA50
  if (crb(c,2)) { goto L_8025DA60; } // 8025DA54
  c->r[4]=0u+0x00000000u; // 8025DA58
  c->lr=0x8025DA60u; f_8025F848(c); // 8025DA5C
L_8025DA60:;
  c->r[3]=c->r[31]|c->r[31]; // 8025DA60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025DA64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025DA68
  c->lr=c->r[0]; // 8025DA6C
  c->r[1]=c->r[1]+0x00000010u; // 8025DA70
  return; // 8025DA74
}

// Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb
void f_8025DA78(Ctx* __restrict c) {
  trace_call(0x8025DA78u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DA78
  c->r[0]=c->lr; // 8025DA7C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8025DA80
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8025DA84
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8025DA88
  c->r[11]=c->r[1]+0x00000030u; // 8025DA8C
  c->lr=0x8025DA94u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025DA90
  c->r[8]=R32(c->r[5]+0x00000000u); // 8025DA94
  c->r[27]=c->r[3]|c->r[3]; // 8025DA98
  c->r[29]=c->r[4]|c->r[4]; // 8025DA9C
  c->r[28]=c->r[5]|c->r[5]; // 8025DAA0
  cmps(c,0,(int32_t)c->r[8],0); // 8025DAA4
  c->r[24]=c->r[7]|c->r[7]; // 8025DAA8
  if (crb(c,2)) { goto L_8025DABC; } // 8025DAAC
  c->r[0]=R32(c->r[6]+0x00000000u); // 8025DAB0
  cmps(c,0,(int32_t)c->r[0],0); // 8025DAB4
  if (!crb(c,2)) { goto L_8025DAC4; } // 8025DAB8
L_8025DABC:;
  c->r[3]=0u+0x00000000u; // 8025DABC
  goto L_8025DC98; // 8025DAC0
L_8025DAC4:;
  c->r[0]=R32(c->r[8]+0x00000010u); // 8025DAC4
  cmps(c,0,(int32_t)c->r[0],0); // 8025DAC8
  if (crb(c,2)) { goto L_8025DAD8; } // 8025DACC
  c->r[3]=c->r[8]+c->r[0]; // 8025DAD0
  goto L_8025DADC; // 8025DAD4
L_8025DAD8:;
  c->r[3]=0u+0x00000000u; // 8025DAD8
L_8025DADC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025DADC
  if (crb(c,2)) { goto L_8025DAEC; } // 8025DAE0
  c->r[25]=R32(c->r[3]+0x00000004u); // 8025DAE4
  goto L_8025DAF0; // 8025DAE8
L_8025DAEC:;
  c->r[25]=0u+0x00000000u; // 8025DAEC
L_8025DAF0:;
  c->r[3]=c->r[6]|c->r[6]; // 8025DAF0
  c->lr=0x8025DAF8u; f_8025167C(c); // 8025DAF4
  c->r[5]=R32(c->r[28]+0x00000000u); // 8025DAF8
  c->r[0]=0u-c->r[24]; // 8025DAFC
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8025DB00
  c->r[26]=c->r[3]|c->r[3]; // 8025DB04
  c->r[6]=R16(c->r[5]+0x00000026u); // 8025DB08
  c->r[0]=c->r[0]|c->r[24]; // 8025DB0C
  c->r[5]=sraw(c,c->r[0],31); // 8025DB10
  c->r[4]=c->r[4]+0x0000003Bu; // 8025DB14
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8025DB18
  cmps(c,0,(int32_t)c->r[29],0); // 8025DB1C
  c->r[5]=c->r[25]&c->r[5]; // 8025DB20
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8025DB24
  c->r[3]=c->r[30]+c->r[0]; // 8025DB28
  c->r[0]=c->r[3]+0x00000003u; // 8025DB2C
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 8025DB30
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8025DB34
  c->r[3]=c->r[25]+c->r[24]; // 8025DB38
  c->r[0]=c->r[3]+0x00000003u; // 8025DB3C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8025DB40
  if (crb(c,2)) { goto L_8025DB4C; } // 8025DB44
  W32(c->r[29]+0x00000000u,c->r[4]); // 8025DB48
L_8025DB4C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8025DB4C
  if (!crb(c,2)) { goto L_8025DB5C; } // 8025DB50
  c->r[3]=0u+0x00000000u; // 8025DB54
  goto L_8025DC98; // 8025DB58
L_8025DB5C:;
  c->r[3]=c->r[27]|c->r[27]; // 8025DB5C
  c->lr=0x8025DB64u; f_801A0EF8(c); // 8025DB60
  cmps(c,0,(int32_t)c->r[3],0); // 8025DB64
  c->r[31]=c->r[3]|c->r[3]; // 8025DB68
  if (!crb(c,2)) { goto L_8025DB78; } // 8025DB6C
  c->r[3]=0u+0x00000000u; // 8025DB70
  goto L_8025DC98; // 8025DB74
L_8025DB78:;
  c->r[5]=c->r[3]+0x00000038u; // 8025DB78
  c->r[30]=c->r[3]+c->r[30]; // 8025DB7C
  c->r[29]=c->r[3]+c->r[25]; // 8025DB80
  if (crb(c,2)) { goto L_8025DC94; } // 8025DB84
  cmps(c,0,(int32_t)c->r[24],0); // 8025DB88
  c->r[28]=R32(c->r[28]+0x00000000u); // 8025DB8C
  if (crb(c,2)) { goto L_8025DB98; } // 8025DB90
  goto L_8025DB9C; // 8025DB94
L_8025DB98:;
  c->r[29]=0u+0x00000000u; // 8025DB98
L_8025DB9C:;
  c->r[0]=0u+0x00000000u; // 8025DB9C
  c->r[4]=0u+0x80340000u; // 8025DBA0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8025DBA4
  c->r[4]=c->r[4]+0x00004B08u; // 8025DBA8
  W32(c->r[3]+0x00000008u,c->r[27]); // 8025DBAC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8025DBB0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8025DBB4
  W32(c->r[3]+0x00000010u,c->r[26]); // 8025DBB8
  W32(c->r[3]+0x00000014u,c->r[5]); // 8025DBBC
  c->r[3]=c->r[31]|c->r[31]; // 8025DBC0
  c->r[12]=R32(c->r[31]+0x00000000u); // 8025DBC4
  c->r[12]=R32(c->r[12]+0x00000034u); // 8025DBC8
  c->ctr=c->r[12]; // 8025DBCC
  if (true) { c->lr=0x8025DBD4u; dispatch(c,c->ctr); } // 8025DBD0
  c->r[4]=R16(c->r[28]+0x00000024u); // 8025DBD4
  c->r[0]=0u+0x43300000u; // 8025DBD8
  c->r[5]=R32(c->r[28]+0x00000028u); // 8025DBDC
  c->r[3]=0u+0x80340000u; // 8025DBE0
  c->r[4]=c->r[4]^0x80000000u; // 8025DBE4
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025DBE8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8025DBEC
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8025DBF0
  {uint32_t ea=c->r[2]+0xFFFF9C5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025DBF4
  c->r[4]=c->r[13]+0xFFFF8F68u; // 8025DBF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8025DBFC
  c->r[3]=c->r[3]+0x00004AB8u; // 8025DC00
  {uint32_t ea=c->r[2]+0xFFFF9C60u; c->f[3]=RF64(ea);} // 8025DC04
  cmps(c,0,(int32_t)c->r[29],0); // 8025DC08
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8025DC0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8025DC10
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8025DC14
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 8025DC18
  c->r[0]=R32(c->r[4]+c->r[5]); // 8025DC1C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 8025DC20
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8025DC24
  W32(c->r[31]+0x00000028u,c->r[0]); // 8025DC28
  W32(c->r[31]+0x00000000u,c->r[3]); // 8025DC2C
  W32(c->r[31]+0x0000002Cu,c->r[28]); // 8025DC30
  W32(c->r[31]+0x00000030u,c->r[30]); // 8025DC34
  W32(c->r[31]+0x00000034u,c->r[29]); // 8025DC38
  if (crb(c,2)) { goto L_8025DC94; } // 8025DC3C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8025DC40
  c->r[26]=0u+0x00000000u; // 8025DC44
  c->r[25]=0u+0x00000000u; // 8025DC48
  goto L_8025DC88; // 8025DC4C
L_8025DC50:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8025DC50
  c->r[3]=R16(c->r[3]+c->r[25]); // 8025DC54
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8025DC58
  if (!crb(c,2)) { goto L_8025DC80; } // 8025DC5C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8025DC60
  c->f[1]=c->f[31]; // 8025DC64
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 8025DC68
  c->r[4]=R32(c->r[31]+0x00000034u); // 8025DC6C
  c->r[6]=R32(c->r[31]+0x00000030u); // 8025DC70
  c->r[3]=c->r[31]+0x0000002Cu; // 8025DC74
  c->r[4]=c->r[4]+c->r[0]; // 8025DC78
  c->lr=0x8025DC80u; f_80258D24(c); // 8025DC7C
L_8025DC80:;
  c->r[25]=c->r[25]+0x00000002u; // 8025DC80
  c->r[26]=c->r[26]+0x00000001u; // 8025DC84
L_8025DC88:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8025DC88
  cmpu(c,0,c->r[26],c->r[0]); // 8025DC8C
  if (crb(c,0)) { IRQCHK(c); goto L_8025DC50; } // 8025DC90
L_8025DC94:;
  c->r[3]=c->r[31]|c->r[31]; // 8025DC94
L_8025DC98:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8025DC98
  c->r[11]=c->r[1]+0x00000030u; // 8025DC9C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8025DCA0
  c->lr=0x8025DCA8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025DCA4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8025DCA8
  c->lr=c->r[0]; // 8025DCAC
  c->r[1]=c->r[1]+0x00000040u; // 8025DCB0
  return; // 8025DCB4
}

// SetFrame__Q34nw4r3g3d12AnmObjShpResFf
void f_8025DCB8(Ctx* __restrict c) {
  trace_call(0x8025DCB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DCB8
  c->r[0]=c->lr; // 8025DCBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025DCC0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8025DCC4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8025DCC8
  c->f[3]=c->f[1]; // 8025DCCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025DCD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025DCD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025DCD8
  c->r[29]=c->r[3]|c->r[3]; // 8025DCDC
  c->r[12]=R32(c->r[3]+0x00000028u); // 8025DCE0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025DCE4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025DCE8
  c->ctr=c->r[12]; // 8025DCEC
  if (true) { c->lr=0x8025DCF4u; dispatch(c,c->ctr); } // 8025DCF0
  c->r[0]=R32(c->r[29]+0x00000034u); // 8025DCF4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8025DCF8
  cmps(c,0,(int32_t)c->r[0],0); // 8025DCFC
  if (crb(c,2)) { goto L_8025DD58; } // 8025DD00
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8025DD04
  c->r[31]=0u+0x00000000u; // 8025DD08
  c->r[30]=0u+0x00000000u; // 8025DD0C
  goto L_8025DD4C; // 8025DD10
L_8025DD14:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8025DD14
  c->r[3]=R16(c->r[3]+c->r[30]); // 8025DD18
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8025DD1C
  if (!crb(c,2)) { goto L_8025DD44; } // 8025DD20
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8025DD24
  c->f[1]=c->f[31]; // 8025DD28
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 8025DD2C
  c->r[4]=R32(c->r[29]+0x00000034u); // 8025DD30
  c->r[6]=R32(c->r[29]+0x00000030u); // 8025DD34
  c->r[3]=c->r[29]+0x0000002Cu; // 8025DD38
  c->r[4]=c->r[4]+c->r[0]; // 8025DD3C
  c->lr=0x8025DD44u; f_80258D24(c); // 8025DD40
L_8025DD44:;
  c->r[30]=c->r[30]+0x00000002u; // 8025DD44
  c->r[31]=c->r[31]+0x00000001u; // 8025DD48
L_8025DD4C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8025DD4C
  cmpu(c,0,c->r[31],c->r[0]); // 8025DD50
  if (crb(c,0)) { IRQCHK(c); goto L_8025DD14; } // 8025DD54
L_8025DD58:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8025DD58
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025DD5C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8025DD60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025DD64
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025DD68
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025DD6C
  c->lr=c->r[0]; // 8025DD70
  c->r[1]=c->r[1]+0x00000030u; // 8025DD74
  return; // 8025DD78
}

// fn_8025DD7C
void f_8025DD7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025DD7C
  return; // 8025DD80
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf
void f_8025DD84(Ctx* __restrict c) {
  trace_call(0x8025DD84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DD84
  c->r[0]=c->lr; // 8025DD88
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025DD8C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8025DD90
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8025DD94
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025DD98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025DD9C
  fcmp(c,0,c->f[0],c->f[1]); // 8025DDA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025DDA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025DDA8
  c->r[29]=c->r[3]|c->r[3]; // 8025DDAC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8025DDB0
  if (!crb(c,2)) { goto L_8025DE18; } // 8025DDB4
  c->r[0]=R32(c->r[3]+0x00000034u); // 8025DDB8
  cmps(c,0,(int32_t)c->r[0],0); // 8025DDBC
  if (crb(c,2)) { goto L_8025DE18; } // 8025DDC0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8025DDC4
  c->r[31]=0u+0x00000000u; // 8025DDC8
  c->r[30]=0u+0x00000000u; // 8025DDCC
  goto L_8025DE0C; // 8025DDD0
L_8025DDD4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8025DDD4
  c->r[3]=R16(c->r[3]+c->r[30]); // 8025DDD8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8025DDDC
  if (!crb(c,2)) { goto L_8025DE04; } // 8025DDE0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8025DDE4
  c->f[1]=c->f[31]; // 8025DDE8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 8025DDEC
  c->r[4]=R32(c->r[29]+0x00000034u); // 8025DDF0
  c->r[6]=R32(c->r[29]+0x00000030u); // 8025DDF4
  c->r[3]=c->r[29]+0x0000002Cu; // 8025DDF8
  c->r[4]=c->r[4]+c->r[0]; // 8025DDFC
  c->lr=0x8025DE04u; f_80258D24(c); // 8025DE00
L_8025DE04:;
  c->r[30]=c->r[30]+0x00000002u; // 8025DE04
  c->r[31]=c->r[31]+0x00000001u; // 8025DE08
L_8025DE0C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8025DE0C
  cmpu(c,0,c->r[31],c->r[0]); // 8025DE10
  if (crb(c,0)) { IRQCHK(c); goto L_8025DDD4; } // 8025DE14
L_8025DE18:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8025DE18
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025DE1C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8025DE20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025DE24
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025DE28
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025DE2C
  c->lr=c->r[0]; // 8025DE30
  c->r[1]=c->r[1]+0x00000030u; // 8025DE34
  return; // 8025DE38
}

// fn_8025DE3C
void f_8025DE3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025DE3C
  return; // 8025DE40
}

// UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv
void f_8025DE44(Ctx* __restrict c) {
  trace_call(0x8025DE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DE44
  c->r[0]=c->lr; // 8025DE48
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025DE4C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8025DE50
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8025DE54
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025DE58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025DE5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025DE60
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025DE64
  c->r[29]=c->r[3]|c->r[3]; // 8025DE68
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025DE6C
  fcmp(c,0,c->f[0],c->f[1]); // 8025DE70
  if (crb(c,2)) { goto L_8025DF04; } // 8025DE74
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025DE78
  {uint32_t ea=c->r[13]+0xFFFF9718u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025DE7C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025DE80
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8025DE84
  c->r[12]=R32(c->r[3]+0x00000028u); // 8025DE88
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025DE8C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025DE90
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 8025DE94
  c->ctr=c->r[12]; // 8025DE98
  if (true) { c->lr=0x8025DEA0u; dispatch(c,c->ctr); } // 8025DE9C
  c->r[0]=R32(c->r[29]+0x00000034u); // 8025DEA0
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8025DEA4
  cmps(c,0,(int32_t)c->r[0],0); // 8025DEA8
  if (crb(c,2)) { goto L_8025DF04; } // 8025DEAC
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8025DEB0
  c->r[31]=0u+0x00000000u; // 8025DEB4
  c->r[30]=0u+0x00000000u; // 8025DEB8
  goto L_8025DEF8; // 8025DEBC
L_8025DEC0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8025DEC0
  c->r[3]=R16(c->r[3]+c->r[30]); // 8025DEC4
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8025DEC8
  if (!crb(c,2)) { goto L_8025DEF0; } // 8025DECC
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8025DED0
  c->f[1]=c->f[31]; // 8025DED4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 8025DED8
  c->r[4]=R32(c->r[29]+0x00000034u); // 8025DEDC
  c->r[6]=R32(c->r[29]+0x00000030u); // 8025DEE0
  c->r[3]=c->r[29]+0x0000002Cu; // 8025DEE4
  c->r[4]=c->r[4]+c->r[0]; // 8025DEE8
  c->lr=0x8025DEF0u; f_80258D24(c); // 8025DEEC
L_8025DEF0:;
  c->r[30]=c->r[30]+0x00000002u; // 8025DEF0
  c->r[31]=c->r[31]+0x00000001u; // 8025DEF4
L_8025DEF8:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8025DEF8
  cmpu(c,0,c->r[31],c->r[0]); // 8025DEFC
  if (crb(c,0)) { IRQCHK(c); goto L_8025DEC0; } // 8025DF00
L_8025DF04:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8025DF04
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025DF08
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8025DF0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025DF10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025DF14
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025DF18
  c->lr=c->r[0]; // 8025DF1C
  c->r[1]=c->r[1]+0x00000030u; // 8025DF20
  return; // 8025DF24
}

// Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl
void f_8025DF28(Ctx* __restrict c) {
  trace_call(0x8025DF28u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DF28
  c->r[0]=c->lr; // 8025DF2C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8025DF30
  c->r[11]=c->r[1]+0x00000040u; // 8025DF34
  c->lr=0x8025DF3Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025DF38
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8025DF3C
  c->r[28]=c->r[3]|c->r[3]; // 8025DF40
  c->r[29]=c->r[4]|c->r[4]; // 8025DF44
  c->r[31]=0u+0x00000000u; // 8025DF48
  c->r[0]=R32(c->r[5]+0x00000010u); // 8025DF4C
  cmps(c,0,(int32_t)c->r[0],0); // 8025DF50
  if (crb(c,2)) { goto L_8025DF60; } // 8025DF54
  c->r[3]=c->r[5]+c->r[0]; // 8025DF58
  goto L_8025DF64; // 8025DF5C
L_8025DF60:;
  c->r[3]=0u+0x00000000u; // 8025DF60
L_8025DF64:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025DF64
  if (crb(c,2)) { goto L_8025DF74; } // 8025DF68
  c->r[27]=R32(c->r[3]+0x00000004u); // 8025DF6C
  goto L_8025DF78; // 8025DF70
L_8025DF74:;
  c->r[27]=0u+0x00000000u; // 8025DF74
L_8025DF78:;
  cmps(c,0,(int32_t)c->r[27],0); // 8025DF78
  c->r[30]=0u+0x00000000u; // 8025DF7C
  if (crb(c,2)) { goto L_8025E01C; } // 8025DF80
  goto L_8025E010; // 8025DF84
L_8025DF88:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 8025DF88
  c->r[0]=R32(c->r[3]+0x00000010u); // 8025DF8C
  cmps(c,0,(int32_t)c->r[0],0); // 8025DF90
  if (crb(c,2)) { goto L_8025DFA0; } // 8025DF94
  c->r[0]=c->r[3]+c->r[0]; // 8025DF98
  goto L_8025DFA4; // 8025DF9C
L_8025DFA0:;
  c->r[0]=0u+0x00000000u; // 8025DFA0
L_8025DFA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8025DFA4
  if (crb(c,2)) { goto L_8025DFD0; } // 8025DFA8
  c->r[3]=rotl(c->r[30],4)&0x000FFFF0u; // 8025DFAC
  c->r[3]=c->r[0]+c->r[3]; // 8025DFB0
  c->r[3]=R32(c->r[3]+0x00000024u); // 8025DFB4
  cmps(c,0,(int32_t)c->r[3],0); // 8025DFB8
  if (crb(c,2)) { goto L_8025DFC8; } // 8025DFBC
  c->r[5]=c->r[0]+c->r[3]; // 8025DFC0
  goto L_8025DFD4; // 8025DFC4
L_8025DFC8:;
  c->r[5]=0u+0x00000000u; // 8025DFC8
  goto L_8025DFD4; // 8025DFCC
L_8025DFD0:;
  c->r[5]=0u+0x00000000u; // 8025DFD0
L_8025DFD4:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 8025DFD4
  c->r[3]=c->r[29]|c->r[29]; // 8025DFD8
  c->r[4]=c->r[1]+0x00000014u; // 8025DFDC
  c->r[5]=c->r[0]+c->r[5]; // 8025DFE0
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8025DFE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025DFE8
  c->lr=0x8025DFF0u; f_80251584(c); // 8025DFEC
  cmps(c,0,(int32_t)c->r[3],0); // 8025DFF0
  if (crb(c,2)) { goto L_8025E00C; } // 8025DFF4
  c->r[0]=R32(c->r[3]+0x00000010u); // 8025DFF8
  c->r[31]=0u+0x00000001u; // 8025DFFC
  c->r[3]=R32(c->r[28]+0x00000014u); // 8025E000
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8025E004
  W16(c->r[3]+c->r[0],c->r[30]); // 8025E008
L_8025E00C:;
  c->r[30]=c->r[30]+0x00000001u; // 8025E00C
L_8025E010:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 8025E010
  cmpu(c,0,c->r[0],c->r[27]); // 8025E014
  if (crb(c,0)) { IRQCHK(c); goto L_8025DF88; } // 8025E018
L_8025E01C:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 8025E01C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8025E020
  c->r[24]=R16(c->r[3]+0x00000026u); // 8025E024
  cmps(c,0,(int32_t)c->r[0],0); // 8025E028
  if (crb(c,2)) { goto L_8025E038; } // 8025E02C
  c->r[27]=c->r[3]+c->r[0]; // 8025E030
  goto L_8025E03C; // 8025E034
L_8025E038:;
  c->r[27]=0u+0x00000000u; // 8025E038
L_8025E03C:;
  c->r[25]=c->r[27]|c->r[27]; // 8025E03C
  c->r[23]=0u+0x00000000u; // 8025E040
  c->r[26]=0u+0x00000000u; // 8025E044
  goto L_8025E0A8; // 8025E048
L_8025E04C:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8025E04C
  c->r[3]=c->r[29]|c->r[29]; // 8025E050
  c->r[6]=R32(c->r[28]+0x00000030u); // 8025E054
  c->r[4]=c->r[1]+0x00000010u; // 8025E058
  c->r[5]=c->r[27]+c->r[0]; // 8025E05C
  c->r[30]=c->r[5]+0xFFFFFFFCu; // 8025E060
  c->r[22]=c->r[6]+c->r[26]; // 8025E064
  W32(c->r[1]+0x00000010u,c->r[30]); // 8025E068
  c->lr=0x8025E070u; f_80251584(c); // 8025E06C
  W32(c->r[22]+0x00000000u,c->r[3]); // 8025E070
  c->r[3]=c->r[29]|c->r[29]; // 8025E074
  c->r[4]=c->r[1]+0x0000000Cu; // 8025E078
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8025E07C
  c->lr=0x8025E084u; f_802516B0(c); // 8025E080
  W32(c->r[22]+0x00000004u,c->r[3]); // 8025E084
  c->r[3]=c->r[29]|c->r[29]; // 8025E088
  c->r[4]=c->r[1]+0x00000008u; // 8025E08C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025E090
  c->lr=0x8025E098u; f_802517DC(c); // 8025E094
  W32(c->r[22]+0x00000008u,c->r[3]); // 8025E098
  c->r[26]=c->r[26]+0x0000000Cu; // 8025E09C
  c->r[25]=c->r[25]+0x00000004u; // 8025E0A0
  c->r[23]=c->r[23]+0x00000001u; // 8025E0A4
L_8025E0A8:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[24]); // 8025E0A8
  if (crb(c,0)) { IRQCHK(c); goto L_8025E04C; } // 8025E0AC
  c->r[3]=c->r[28]|c->r[28]; // 8025E0B0
  c->r[4]=0u+0x00000004u; // 8025E0B4
  c->r[5]=0u+0x00000001u; // 8025E0B8
  c->lr=0x8025E0C0u; f_8025FA18(c); // 8025E0BC
  c->r[11]=c->r[1]+0x00000040u; // 8025E0C0
  c->r[3]=c->r[31]|c->r[31]; // 8025E0C4
  c->lr=0x8025E0CCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025E0C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8025E0CC
  c->lr=c->r[0]; // 8025E0D0
  c->r[1]=c->r[1]+0x00000040u; // 8025E0D4
  return; // 8025E0D8
}

// GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl
void f_8025E0DC(Ctx* __restrict c) {
  trace_call(0x8025E0DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E0DC
  c->r[0]=c->lr; // 8025E0E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025E0E4
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8025E0E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025E0EC
  c->r[31]=c->r[4]|c->r[4]; // 8025E0F0
  c->r[6]=R32(c->r[3]+0x00000014u); // 8025E0F4
  c->r[5]=R16(c->r[6]+c->r[0]); // 8025E0F8
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 8025E0FC
  if (crb(c,2)) { goto L_8025E114; } // 8025E100
  c->r[0]=0u+0x00000000u; // 8025E104
  c->r[3]=c->r[31]|c->r[31]; // 8025E108
  W32(c->r[4]+0x00000000u,c->r[0]); // 8025E10C
  goto L_8025E140; // 8025E110
L_8025E114:;
  c->r[6]=R32(c->r[3]+0x00000034u); // 8025E114
  cmps(c,0,(int32_t)c->r[6],0); // 8025E118
  if (crb(c,2)) { goto L_8025E12C; } // 8025E11C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 8025E120
  c->r[3]=c->r[6]+c->r[0]; // 8025E124
  goto L_8025E140; // 8025E128
L_8025E12C:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E12C
  c->r[6]=R32(c->r[3]+0x00000030u); // 8025E130
  c->r[3]=c->r[3]+0x0000002Cu; // 8025E134
  c->lr=0x8025E13Cu; f_80258D24(c); // 8025E138
  c->r[3]=c->r[31]|c->r[31]; // 8025E13C
L_8025E140:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025E140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025E144
  c->lr=c->r[0]; // 8025E148
  c->r[1]=c->r[1]+0x00000010u; // 8025E14C
  return; // 8025E150
}

// fn_8025E154
void f_8025E154(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 8025E154
  c->r[0]=c->r[5]+0x00000002u; // 8025E158
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8025E15C
  if (crb(c,2)) { goto L_8025E1A0; } // 8025E160
  if (!crb(c,0)) { goto L_8025E174; } // 8025E164
  cmps(c,0,(int32_t)c->r[4],8); // 8025E168
  if (crb(c,2)) { goto L_8025E184; } // 8025E16C
  return; // 8025E170
L_8025E174:;
  c->r[0]=c->r[5]+0x00000004u; // 8025E174
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8025E178
  if (!crb(c,0)) return; // 8025E17C
  goto L_8025E194; // 8025E180
L_8025E184:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025E184
  c->r[12]=R32(c->r[12]+0x00000024u); // 8025E188
  c->ctr=c->r[12]; // 8025E18C
  if (true) { dispatch(c,c->ctr); return; } // 8025E190
L_8025E194:;
  c->r[0]=0u+0x00000000u; // 8025E194
  W32(c->r[3]+0x00000004u,c->r[0]); // 8025E198
  return; // 8025E19C
L_8025E1A0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8025E1A0
  return; // 8025E1A4
}

// fn_8025E1A8
void f_8025E1A8(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025E1A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025E1AC
  c->r[3]=c->r[3]+0xFFFF8550u; // 8025E1B0
  cmpu(c,0,c->r[0],c->r[3]); // 8025E1B4
  if (!crb(c,2)) { goto L_8025E1C4; } // 8025E1B8
  c->r[3]=0u+0x00000001u; // 8025E1BC
  return; // 8025E1C0
L_8025E1C4:;
  c->r[3]=0u+0x80310000u; // 8025E1C4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025E1C8
  c->r[3]=c->r[3]+0xFFFF8540u; // 8025E1CC
  cmpu(c,0,c->r[0],c->r[3]); // 8025E1D0
  if (!crb(c,2)) { goto L_8025E1E0; } // 8025E1D4
  c->r[3]=0u+0x00000001u; // 8025E1D8
  return; // 8025E1DC
L_8025E1E0:;
  c->r[3]=0u+0x80310000u; // 8025E1E0
  c->r[3]=c->r[3]+0xFFFF8598u; // 8025E1E4
  cmpu(c,0,c->r[0],c->r[3]); // 8025E1E8
  if (!crb(c,2)) { goto L_8025E1F8; } // 8025E1EC
  c->r[3]=0u+0x00000001u; // 8025E1F0
  return; // 8025E1F4
L_8025E1F8:;
  c->r[3]=0u+0x80310000u; // 8025E1F8
  c->r[3]=c->r[3]+0xFFFF8588u; // 8025E1FC
  c->r[0]=c->r[3]-c->r[0]; // 8025E200
  c->r[0]=cntlz(c->r[0]); // 8025E204
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8025E208
  return; // 8025E20C
}

// fn_8025E210
void f_8025E210(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025E210
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025E214
  c->r[3]=c->r[3]+0xFFFF8540u; // 8025E218
  cmpu(c,0,c->r[0],c->r[3]); // 8025E21C
  if (!crb(c,2)) { goto L_8025E22C; } // 8025E220
  c->r[3]=0u+0x00000001u; // 8025E224
  return; // 8025E228
L_8025E22C:;
  c->r[3]=0u+0x80310000u; // 8025E22C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025E230
  c->r[3]=c->r[3]+0xFFFF8598u; // 8025E234
  cmpu(c,0,c->r[0],c->r[3]); // 8025E238
  if (!crb(c,2)) { goto L_8025E248; } // 8025E23C
  c->r[3]=0u+0x00000001u; // 8025E240
  return; // 8025E244
L_8025E248:;
  c->r[3]=0u+0x80310000u; // 8025E248
  c->r[3]=c->r[3]+0xFFFF8588u; // 8025E24C
  c->r[0]=c->r[3]-c->r[0]; // 8025E250
  c->r[0]=cntlz(c->r[0]); // 8025E254
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8025E258
  return; // 8025E25C
}

// fn_8025E260
void f_8025E260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E260
  c->r[0]=c->lr; // 8025E264
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025E268
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025E26C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8025E270
  c->ctr=c->r[12]; // 8025E274
  if (true) { c->lr=0x8025E27Cu; dispatch(c,c->ctr); } // 8025E278
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025E27C
  c->r[3]=c->r[3]+0x00000004u; // 8025E280
  c->lr=c->r[0]; // 8025E284
  c->r[1]=c->r[1]+0x00000010u; // 8025E288
  return; // 8025E28C
}

// fn_8025E290
void f_8025E290(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025E290
  c->r[3]=c->r[3]+0xFFFF8550u; // 8025E294
  return; // 8025E298
}

// fn_8025E29C
void f_8025E29C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E29C
  c->r[0]=c->lr; // 8025E2A0
  cmps(c,0,(int32_t)c->r[3],0); // 8025E2A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025E2A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025E2AC
  c->r[31]=c->r[3]|c->r[3]; // 8025E2B0
  if (crb(c,2)) { goto L_8025E2C8; } // 8025E2B4
  if (crb(c,2)) { goto L_8025E2C8; } // 8025E2B8
  if (crb(c,2)) { goto L_8025E2C8; } // 8025E2BC
  c->r[4]=0u+0x00000000u; // 8025E2C0
  c->lr=0x8025E2C8u; f_8025F848(c); // 8025E2C4
L_8025E2C8:;
  c->r[3]=c->r[31]|c->r[31]; // 8025E2C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025E2CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025E2D0
  c->lr=c->r[0]; // 8025E2D4
  c->r[1]=c->r[1]+0x00000010u; // 8025E2D8
  return; // 8025E2DC
}

// fn_8025E2E0
void f_8025E2E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E2E0
  c->r[0]=c->lr; // 8025E2E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025E2E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025E2EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 8025E2F0
  c->ctr=c->r[12]; // 8025E2F4
  if (true) { c->lr=0x8025E2FCu; dispatch(c,c->ctr); } // 8025E2F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025E2FC
  c->r[3]=c->r[3]+0x00000004u; // 8025E300
  c->lr=c->r[0]; // 8025E304
  c->r[1]=c->r[1]+0x00000010u; // 8025E308
  return; // 8025E30C
}

// fn_8025E310
void f_8025E310(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025E310
  c->r[3]=c->r[3]+0xFFFF8540u; // 8025E314
  return; // 8025E318
}

// MakeDiffuseLightObj__Q34nw4r3g3d24@unnamed@g3d_anmscn_cpp@FPQ34nw4r3g3d8LightObjPCQ34nw4r3g3d14LightAnmResult
void f_8025E31C(Ctx* __restrict c) {
  trace_call(0x8025E31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E31C
  c->r[0]=c->lr; // 8025E320
  W32(c->r[1]+0x00000054u,c->r[0]); // 8025E324
  c->r[0]=R32(c->r[4]+0x00000004u); // 8025E328
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8025E32C
  c->r[31]=c->r[4]|c->r[4]; // 8025E330
  W32(c->r[1]+0x00000048u,c->r[30]); // 8025E334
  c->r[30]=c->r[3]|c->r[3]; // 8025E338
  W32(c->r[1]+0x00000044u,c->r[29]); // 8025E33C
  c->r[29]=rotl(c->r[0],0)&0x00000003u; // 8025E340
  c->lr=0x8025E348u; f_80276D4C(c); // 8025E344
  cmps(c,0,(int32_t)c->r[29],1); // 8025E348
  if (crb(c,2)) { goto L_8025E3E8; } // 8025E34C
  if (!crb(c,0)) { goto L_8025E360; } // 8025E350
  cmps(c,0,(int32_t)c->r[29],0); // 8025E354
  if (!crb(c,0)) { goto L_8025E36C; } // 8025E358
  goto L_8025E544; // 8025E35C
L_8025E360:;
  cmps(c,0,(int32_t)c->r[29],3); // 8025E360
  if (!crb(c,0)) { goto L_8025E544; } // 8025E364
  goto L_8025E4A0; // 8025E368
L_8025E36C:;
  c->r[7]=R8(c->r[31]+0x00000020u); // 8025E36C
  c->r[4]=c->r[1]+0x00000010u; // 8025E370
  c->r[6]=R8(c->r[31]+0x00000021u); // 8025E374
  c->r[3]=c->r[30]|c->r[30]; // 8025E378
  c->r[5]=R8(c->r[31]+0x00000022u); // 8025E37C
  c->r[0]=R8(c->r[31]+0x00000023u); // 8025E380
  W8(c->r[1]+0x00000010u,c->r[7]); // 8025E384
  W8(c->r[1]+0x00000011u,c->r[6]); // 8025E388
  W8(c->r[1]+0x00000012u,c->r[5]); // 8025E38C
  W8(c->r[1]+0x00000013u,c->r[0]); // 8025E390
  c->lr=0x8025E398u; f_80276D60(c); // 8025E394
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E398
  c->r[3]=c->r[30]|c->r[30]; // 8025E39C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E3A0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025E3A4
  c->lr=0x8025E3ACu; f_80276DA8(c); // 8025E3A8
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E3AC
  c->r[3]=c->r[30]|c->r[30]; // 8025E3B0
  c->r[4]=0u+0x00000000u; // 8025E3B4
  c->lr=0x8025E3BCu; f_80276E24(c); // 8025E3B8
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E3BC
  c->r[3]=c->r[30]|c->r[30]; // 8025E3C0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E3C4
  c->r[4]=R32(c->r[31]+0x00000024u); // 8025E3C8
  c->lr=0x8025E3D0u; f_80276EA4(c); // 8025E3CC
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E3D0
  c->r[3]=c->r[30]|c->r[30]; // 8025E3D4
  c->f[2]=c->f[1]; // 8025E3D8
  c->f[3]=c->f[1]; // 8025E3DC
  c->lr=0x8025E3E4u; f_80276DE4(c); // 8025E3E0
  goto L_8025E544; // 8025E3E4
L_8025E3E8:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 8025E3E8
  c->r[4]=c->r[1]+0x0000000Cu; // 8025E3EC
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 8025E3F0
  c->r[3]=c->r[30]|c->r[30]; // 8025E3F4
  c->r[7]=R8(c->r[31]+0x00000020u); // 8025E3F8
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8025E3FC
  c->r[6]=R8(c->r[31]+0x00000021u); // 8025E400
  c->r[5]=R8(c->r[31]+0x00000022u); // 8025E404
  c->r[0]=R8(c->r[31]+0x00000023u); // 8025E408
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 8025E40C
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 8025E410
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 8025E414
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,2,ea,0,0);} // 8025E418
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8025E41C
  {uint32_t ea=c->r[2]+0xFFFF9C6Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8025E420
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 8025E424
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8025E428
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,2,ea,1,0);} // 8025E42C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 8025E430
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8025E434
  W8(c->r[1]+0x0000000Du,c->r[6]); // 8025E438
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 8025E43C
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 8025E440
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8025E444
  c->lr=0x8025E44Cu; f_80276D60(c); // 8025E448
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E44C
  c->r[3]=c->r[30]|c->r[30]; // 8025E450
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E454
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025E458
  c->lr=0x8025E460u; f_80276DA8(c); // 8025E45C
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E460
  c->r[3]=c->r[30]|c->r[30]; // 8025E464
  {uint32_t ea=c->r[2]+0xFFFF9C70u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E468
  c->f[3]=c->f[2]; // 8025E46C
  c->lr=0x8025E474u; f_80276E64(c); // 8025E470
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E474
  c->r[3]=c->r[30]|c->r[30]; // 8025E478
  {uint32_t ea=c->r[2]+0xFFFF9C70u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E47C
  c->f[3]=c->f[2]; // 8025E480
  c->lr=0x8025E488u; f_80276EE4(c); // 8025E484
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E488
  c->r[3]=c->r[30]|c->r[30]; // 8025E48C
  c->f[2]=c->f[1]; // 8025E490
  c->f[3]=c->f[1]; // 8025E494
  c->lr=0x8025E49Cu; f_80276DE4(c); // 8025E498
  goto L_8025E544; // 8025E49C
L_8025E4A0:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 8025E4A0
  c->r[3]=c->r[1]+0x00000014u; // 8025E4A4
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 8025E4A8
  c->r[4]=c->r[3]|c->r[3]; // 8025E4AC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8025E4B0
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 8025E4B4
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 8025E4B8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 8025E4BC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8025E4C0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,1,0);} // 8025E4C4
  c->lr=0x8025E4CCu; f_80168E0C(c); // 8025E4C8
  c->r[7]=R8(c->r[31]+0x00000020u); // 8025E4CC
  c->r[4]=c->r[1]+0x00000008u; // 8025E4D0
  c->r[6]=R8(c->r[31]+0x00000021u); // 8025E4D4
  c->r[3]=c->r[30]|c->r[30]; // 8025E4D8
  c->r[5]=R8(c->r[31]+0x00000022u); // 8025E4DC
  c->r[0]=R8(c->r[31]+0x00000023u); // 8025E4E0
  W8(c->r[1]+0x00000008u,c->r[7]); // 8025E4E4
  W8(c->r[1]+0x00000009u,c->r[6]); // 8025E4E8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8025E4EC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8025E4F0
  c->lr=0x8025E4F8u; f_80276D60(c); // 8025E4F4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E4F8
  c->r[3]=c->r[30]|c->r[30]; // 8025E4FC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E500
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025E504
  c->lr=0x8025E50Cu; f_80276DA8(c); // 8025E508
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E50C
  c->r[3]=c->r[30]|c->r[30]; // 8025E510
  c->r[4]=R32(c->r[31]+0x00000030u); // 8025E514
  c->lr=0x8025E51Cu; f_80276E24(c); // 8025E518
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E51C
  c->r[3]=c->r[30]|c->r[30]; // 8025E520
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E524
  c->r[4]=R32(c->r[31]+0x00000024u); // 8025E528
  c->lr=0x8025E530u; f_80276EA4(c); // 8025E52C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025E530
  c->r[3]=c->r[30]|c->r[30]; // 8025E534
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025E538
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8025E53C
  c->lr=0x8025E544u; f_80276DE4(c); // 8025E540
L_8025E544:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8025E544
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8025E548
  if (!crb(c,2)) { goto L_8025E55C; } // 8025E54C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8025E550
  c->r[0]=c->r[0]|0x00000010u; // 8025E554
  W32(c->r[30]+0x00000000u,c->r[0]); // 8025E558
L_8025E55C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8025E55C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8025E560
  if (!crb(c,2)) { goto L_8025E574; } // 8025E564
  c->r[0]=R32(c->r[30]+0x00000000u); // 8025E568
  c->r[0]=c->r[0]|0x00000020u; // 8025E56C
  W32(c->r[30]+0x00000000u,c->r[0]); // 8025E570
L_8025E574:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8025E574
  c->r[0]=c->r[0]|0x00000004u; // 8025E578
  W32(c->r[30]+0x00000000u,c->r[0]); // 8025E57C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8025E580
  c->r[30]=R32(c->r[1]+0x00000048u); // 8025E584
  c->r[29]=R32(c->r[1]+0x00000044u); // 8025E588
  c->r[0]=R32(c->r[1]+0x00000054u); // 8025E58C
  c->lr=c->r[0]; // 8025E590
  c->r[1]=c->r[1]+0x00000050u; // 8025E594
  return; // 8025E598
}

// GetLightSetting__Q34nw4r3g3d6AnmScnFPQ34nw4r3g3d12LightSetting
void f_8025E59C(Ctx* __restrict c) {
  trace_call(0x8025E59Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E59C
  c->r[0]=c->lr; // 8025E5A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8025E5A4
  c->r[11]=c->r[1]+0x00000060u; // 8025E5A8
  c->lr=0x8025E5B0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025E5AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025E5B0
  c->r[28]=c->r[3]|c->r[3]; // 8025E5B4
  c->r[29]=c->r[4]|c->r[4]; // 8025E5B8
  c->r[12]=R32(c->r[12]+0x00000050u); // 8025E5BC
  c->ctr=c->r[12]; // 8025E5C0
  if (true) { c->lr=0x8025E5C8u; dispatch(c,c->ctr); } // 8025E5C4
  W32(c->r[1]+0x00000024u,c->r[3]); // 8025E5C8
  c->r[3]=c->r[28]|c->r[28]; // 8025E5CC
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E5D0
  c->r[12]=R32(c->r[12]+0x00000054u); // 8025E5D4
  c->ctr=c->r[12]; // 8025E5D8
  if (true) { c->lr=0x8025E5E0u; dispatch(c,c->ctr); } // 8025E5DC
  W32(c->r[1]+0x00000020u,c->r[3]); // 8025E5E0
  c->r[3]=c->r[28]|c->r[28]; // 8025E5E4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E5E8
  c->r[12]=R32(c->r[12]+0x00000058u); // 8025E5EC
  c->ctr=c->r[12]; // 8025E5F0
  if (true) { c->lr=0x8025E5F8u; dispatch(c,c->ctr); } // 8025E5F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025E5F8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8025E5FC
  cmps(c,0,(int32_t)c->r[0],0); // 8025E600
  if (crb(c,2)) { goto L_8025E674; } // 8025E604
  c->r[4]=R16(c->r[29]+0x00000002u); // 8025E608
  c->r[3]=c->r[1]+0x00000024u; // 8025E60C
  cmpu(c,0,c->r[4],c->r[0]); // 8025E610
  W32(c->r[1]+0x00000018u,c->r[4]); // 8025E614
  if (!crb(c,0)) { goto L_8025E620; } // 8025E618
  c->r[3]=c->r[1]+0x00000018u; // 8025E61C
L_8025E620:;
  c->r[27]=R32(c->r[3]+0x00000000u); // 8025E620
  c->r[30]=0u+0x00000000u; // 8025E624
  goto L_8025E66C; // 8025E628
L_8025E62C:;
  c->r[4]=c->r[29]|c->r[29]; // 8025E62C
  c->r[5]=c->r[30]|c->r[30]; // 8025E630
  c->r[3]=c->r[1]+0x00000030u; // 8025E634
  c->lr=0x8025E63Cu; f_8025E8B0(c); // 8025E638
  c->r[4]=R32(c->r[1]+0x00000030u); // 8025E63C
  c->r[3]=c->r[28]|c->r[28]; // 8025E640
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025E644
  c->r[5]=c->r[30]|c->r[30]; // 8025E648
  W32(c->r[1]+0x00000028u,c->r[4]); // 8025E64C
  c->r[4]=c->r[1]+0x00000028u; // 8025E650
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8025E654
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E658
  c->r[12]=R32(c->r[12]+0x00000064u); // 8025E65C
  c->ctr=c->r[12]; // 8025E660
  if (true) { c->lr=0x8025E668u; dispatch(c,c->ctr); } // 8025E664
  c->r[30]=c->r[30]+0x00000001u; // 8025E668
L_8025E66C:;
  cmpu(c,0,c->r[30],c->r[27]); // 8025E66C
  if (crb(c,0)) { IRQCHK(c); goto L_8025E62C; } // 8025E670
L_8025E674:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 8025E674
  cmps(c,0,(int32_t)c->r[0],0); // 8025E678
  if (crb(c,2)) { goto L_8025E6DC; } // 8025E67C
  c->r[4]=R16(c->r[29]+0x00000000u); // 8025E680
  c->r[3]=c->r[1]+0x00000020u; // 8025E684
  c->r[27]=R32(c->r[29]+0x00000008u); // 8025E688
  cmpu(c,0,c->r[4],c->r[0]); // 8025E68C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8025E690
  if (!crb(c,0)) { goto L_8025E69C; } // 8025E694
  c->r[3]=c->r[1]+0x00000014u; // 8025E698
L_8025E69C:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 8025E69C
  c->r[31]=0u+0x00000000u; // 8025E6A0
  goto L_8025E6D4; // 8025E6A4
L_8025E6A8:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E6A8
  c->r[4]=c->r[28]|c->r[28]; // 8025E6AC
  c->r[5]=c->r[31]|c->r[31]; // 8025E6B0
  c->r[3]=c->r[1]+0x00000008u; // 8025E6B4
  c->r[12]=R32(c->r[12]+0x00000068u); // 8025E6B8
  c->ctr=c->r[12]; // 8025E6BC
  if (true) { c->lr=0x8025E6C4u; dispatch(c,c->ctr); } // 8025E6C0
  c->r[0]=R32(c->r[1]+0x00000008u); // 8025E6C4
  c->r[31]=c->r[31]+0x00000001u; // 8025E6C8
  W32(c->r[27]+0x00000000u,c->r[0]); // 8025E6CC
  c->r[27]=c->r[27]+0x00000004u; // 8025E6D0
L_8025E6D4:;
  cmpu(c,0,c->r[31],c->r[30]); // 8025E6D4
  if (crb(c,0)) { IRQCHK(c); goto L_8025E6A8; } // 8025E6D8
L_8025E6DC:;
  c->r[27]=R32(c->r[1]+0x0000001Cu); // 8025E6DC
  cmps(c,0,(int32_t)c->r[27],0); // 8025E6E0
  if (crb(c,2)) { goto L_8025E898; } // 8025E6E4
  c->r[31]=R32(c->r[29]+0x00000004u); // 8025E6E8
  c->r[3]=c->r[28]|c->r[28]; // 8025E6EC
  c->r[29]=R16(c->r[29]+0x00000000u); // 8025E6F0
  W32(c->r[1]+0x00000010u,c->r[29]); // 8025E6F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E6F8
  c->r[12]=R32(c->r[12]+0x00000044u); // 8025E6FC
  c->ctr=c->r[12]; // 8025E700
  if (true) { c->lr=0x8025E708u; dispatch(c,c->ctr); } // 8025E704
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8025E708
  c->r[0]=c->r[27]+c->r[3]; // 8025E70C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8025E710
  c->r[3]=c->r[1]+0x0000001Cu; // 8025E714
  cmpu(c,0,c->r[29],c->r[4]); // 8025E718
  if (!crb(c,0)) { goto L_8025E724; } // 8025E71C
  c->r[3]=c->r[1]+0x00000010u; // 8025E720
L_8025E724:;
  cmpu(c,0,c->r[29],c->r[0]); // 8025E724
  c->r[30]=R32(c->r[3]+0x00000000u); // 8025E728
  c->r[3]=c->r[1]+0x0000000Cu; // 8025E72C
  if (!crb(c,0)) { goto L_8025E738; } // 8025E730
  c->r[3]=c->r[1]+0x00000010u; // 8025E734
L_8025E738:;
  cmps(c,0,(int32_t)c->r[30],0); // 8025E738
  c->r[29]=R32(c->r[3]+0x00000000u); // 8025E73C
  c->r[5]=0u+0x00000000u; // 8025E740
  if (crb(c,2)) { goto L_8025E804; } // 8025E744
  cmpu(c,0,c->r[30],0x00000008u); // 8025E748
  c->r[3]=c->r[30]+0xFFFFFFF8u; // 8025E74C
  if (!crb(c,1)) { goto L_8025E7D8; } // 8025E750
  c->r[0]=c->r[3]+0x00000007u; // 8025E754
  c->r[4]=c->r[31]|c->r[31]; // 8025E758
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8025E75C
  c->ctr=c->r[0]; // 8025E760
  cmpu(c,0,c->r[3],0x00000000u); // 8025E764
  if (!crb(c,1)) { goto L_8025E7D8; } // 8025E768
L_8025E76C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025E76C
  c->r[5]=c->r[5]+0x00000008u; // 8025E770
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E774
  W32(c->r[4]+0x00000000u,c->r[0]); // 8025E778
  c->r[0]=R32(c->r[4]+0x00000044u); // 8025E77C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E780
  W32(c->r[4]+0x00000044u,c->r[0]); // 8025E784
  c->r[0]=R32(c->r[4]+0x00000088u); // 8025E788
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E78C
  W32(c->r[4]+0x00000088u,c->r[0]); // 8025E790
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8025E794
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E798
  W32(c->r[4]+0x000000CCu,c->r[0]); // 8025E79C
  c->r[0]=R32(c->r[4]+0x00000110u); // 8025E7A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E7A4
  W32(c->r[4]+0x00000110u,c->r[0]); // 8025E7A8
  c->r[0]=R32(c->r[4]+0x00000154u); // 8025E7AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E7B0
  W32(c->r[4]+0x00000154u,c->r[0]); // 8025E7B4
  c->r[0]=R32(c->r[4]+0x00000198u); // 8025E7B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E7BC
  W32(c->r[4]+0x00000198u,c->r[0]); // 8025E7C0
  c->r[0]=R32(c->r[4]+0x000001DCu); // 8025E7C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E7C8
  W32(c->r[4]+0x000001DCu,c->r[0]); // 8025E7CC
  c->r[4]=c->r[4]+0x00000220u; // 8025E7D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025E76C; } // 8025E7D4
L_8025E7D8:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 8025E7D8
  c->r[0]=c->r[30]-c->r[5]; // 8025E7DC
  c->r[3]=c->r[31]+c->r[3]; // 8025E7E0
  c->ctr=c->r[0]; // 8025E7E4
  cmpu(c,0,c->r[5],c->r[30]); // 8025E7E8
  if (!crb(c,0)) { goto L_8025E804; } // 8025E7EC
L_8025E7F0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8025E7F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025E7F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8025E7F8
  c->r[3]=c->r[3]+0x00000044u; // 8025E7FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025E7F0; } // 8025E800
L_8025E804:;
  c->r[27]=c->r[31]|c->r[31]; // 8025E804
  c->r[26]=0u+0x00000000u; // 8025E808
  goto L_8025E890; // 8025E80C
L_8025E810:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 8025E810
  c->r[25]=0u+0x00000000u; // 8025E814
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8025E818
  if (!crb(c,2)) { goto L_8025E888; } // 8025E81C
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E820
  c->r[3]=c->r[28]|c->r[28]; // 8025E824
  c->r[4]=c->r[26]|c->r[26]; // 8025E828
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 8025E82C
  c->ctr=c->r[12]; // 8025E830
  if (true) { c->lr=0x8025E838u; dispatch(c,c->ctr); } // 8025E834
  cmps(c,0,(int32_t)c->r[3],0); // 8025E838
  if (crb(c,2)) { goto L_8025E868; } // 8025E83C
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E840
  c->r[3]=c->r[28]|c->r[28]; // 8025E844
  c->r[4]=c->r[26]|c->r[26]; // 8025E848
  c->r[12]=R32(c->r[12]+0x00000078u); // 8025E84C
  c->ctr=c->r[12]; // 8025E850
  if (true) { c->lr=0x8025E858u; dispatch(c,c->ctr); } // 8025E854
  cmpu(c,0,c->r[3],c->r[29]); // 8025E858
  if (!crb(c,0)) { goto L_8025E868; } // 8025E85C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 8025E860
  c->r[25]=c->r[31]+c->r[0]; // 8025E864
L_8025E868:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8025E868
  c->r[3]=c->r[28]|c->r[28]; // 8025E86C
  c->r[4]=c->r[27]|c->r[27]; // 8025E870
  c->r[5]=c->r[25]|c->r[25]; // 8025E874
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8025E878
  c->r[6]=c->r[26]|c->r[26]; // 8025E87C
  c->ctr=c->r[12]; // 8025E880
  if (true) { c->lr=0x8025E888u; dispatch(c,c->ctr); } // 8025E884
L_8025E888:;
  c->r[27]=c->r[27]+0x00000044u; // 8025E888
  c->r[26]=c->r[26]+0x00000001u; // 8025E88C
L_8025E890:;
  cmpu(c,0,c->r[26],c->r[30]); // 8025E890
  if (crb(c,0)) { IRQCHK(c); goto L_8025E810; } // 8025E894
L_8025E898:;
  c->r[11]=c->r[1]+0x00000060u; // 8025E898
  c->lr=0x8025E8A0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025E89C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8025E8A0
  c->lr=c->r[0]; // 8025E8A4
  c->r[1]=c->r[1]+0x00000060u; // 8025E8A8
  return; // 8025E8AC
}

// GetLightSet__Q34nw4r3g3d12LightSettingFi
void f_8025E8B0(Ctx* __restrict c) {
  trace_call(0x8025E8B0u);
  c->r[0]=R16(c->r[4]+0x00000002u); // 8025E8B0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8025E8B4
  if (!crb(c,0)) { goto L_8025E8DC; } // 8025E8B8
  cmps(c,0,(int32_t)c->r[5],0); // 8025E8BC
  if (crb(c,0)) { goto L_8025E8DC; } // 8025E8C0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8025E8C4
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 8025E8C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8025E8CC
  c->r[0]=c->r[5]+c->r[0]; // 8025E8D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8025E8D4
  return; // 8025E8D8
L_8025E8DC:;
  c->r[0]=0u+0x00000000u; // 8025E8DC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8025E8E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8025E8E4
  return; // 8025E8E8
}

// fn_8025E8EC
void f_8025E8EC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8025E8EC
  return; // 8025E8F0
}

// fn_8025E8F4
void f_8025E8F4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8025E8F4
  return; // 8025E8F8
}

// fn_8025E8FC
void f_8025E8FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E8FC
  c->r[0]=c->lr; // 8025E900
  cmps(c,0,(int32_t)c->r[3],0); // 8025E904
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025E908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025E90C
  c->r[31]=c->r[3]|c->r[3]; // 8025E910
  if (crb(c,2)) { goto L_8025E920; } // 8025E914
  c->r[4]=0u+0x00000000u; // 8025E918
  c->lr=0x8025E920u; f_8025F848(c); // 8025E91C
L_8025E920:;
  c->r[3]=c->r[31]|c->r[31]; // 8025E920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025E924
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025E928
  c->lr=c->r[0]; // 8025E92C
  c->r[1]=c->r[1]+0x00000010u; // 8025E930
  return; // 8025E934
}

// fn_8025E938
void f_8025E938(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 8025E938
  f_802583FC(c); return; // 8025E93C
}

// fn_8025E940
void f_8025E940(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 8025E940
  f_802585B0(c); return; // 8025E944
}

// fn_8025E948
void f_8025E948(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 8025E948
  f_80258764(c); return; // 8025E94C
}

// fn_8025E950
void f_8025E950(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8025E950
  c->r[3]=R16(c->r[3]+0x00000036u); // 8025E954
  return; // 8025E958
}

// fn_8025E95C
void f_8025E95C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 8025E95C
  f_80258890(c); return; // 8025E960
}

// fn_8025E964
void f_8025E964(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 8025E964
  f_802589BC(c); return; // 8025E968
}

// fn_8025E96C
void f_8025E96C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8025E96C
  c->r[3]=R16(c->r[3]+0x0000003Cu); // 8025E970
  return; // 8025E974
}

// fn_8025E978
void f_8025E978(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8025E978
  c->r[3]=R16(c->r[3]+0x0000003Eu); // 8025E97C
  return; // 8025E980
}

// fn_8025E984
void f_8025E984(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8025E984
  c->r[3]=R16(c->r[3]+0x00000040u); // 8025E988
  return; // 8025E98C
}

// fn_8025E990
void f_8025E990(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8025E990
  c->r[3]=R16(c->r[3]+0x00000042u); // 8025E994
  return; // 8025E998
}

// fn_8025E99C
void f_8025E99C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8025E99C
  c->r[3]=R16(c->r[3]+0x00000044u); // 8025E9A0
  return; // 8025E9A4
}

// Construct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmScnb
void f_8025E9A8(Ctx* __restrict c) {
  trace_call(0x8025E9A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E9A8
  c->r[0]=c->lr; // 8025E9AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8025E9B0
  c->r[11]=c->r[1]+0x00000040u; // 8025E9B4
  c->lr=0x8025E9BCu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025E9B8
  c->r[0]=R32(c->r[5]+0x00000000u); // 8025E9BC
  c->r[29]=c->r[3]|c->r[3]; // 8025E9C0
  c->r[30]=c->r[4]|c->r[4]; // 8025E9C4
  c->r[31]=c->r[5]|c->r[5]; // 8025E9C8
  cmps(c,0,(int32_t)c->r[0],0); // 8025E9CC
  c->r[22]=c->r[6]|c->r[6]; // 8025E9D0
  if (!crb(c,2)) { goto L_8025E9E0; } // 8025E9D4
  c->r[3]=0u+0x00000000u; // 8025E9D8
  goto L_8025EB24; // 8025E9DC
L_8025E9E0:;
  cmps(c,0,(int32_t)c->r[6],0); // 8025E9E0
  if (crb(c,2)) { goto L_8025E9F8; } // 8025E9E4
  c->r[3]=c->r[31]|c->r[31]; // 8025E9E8
  c->lr=0x8025E9F0u; f_802585B0(c); // 8025E9EC
  c->r[26]=c->r[3]|c->r[3]; // 8025E9F0
  goto L_8025E9FC; // 8025E9F4
L_8025E9F8:;
  c->r[26]=0u+0x00000000u; // 8025E9F8
L_8025E9FC:;
  cmps(c,0,(int32_t)c->r[22],0); // 8025E9FC
  if (crb(c,2)) { goto L_8025EA14; } // 8025EA00
  c->r[3]=c->r[31]|c->r[31]; // 8025EA04
  c->lr=0x8025EA0Cu; f_80258764(c); // 8025EA08
  c->r[27]=c->r[3]|c->r[3]; // 8025EA0C
  goto L_8025EA18; // 8025EA10
L_8025EA14:;
  c->r[27]=0u+0x00000000u; // 8025EA14
L_8025EA18:;
  cmps(c,0,(int32_t)c->r[22],0); // 8025EA18
  if (crb(c,2)) { goto L_8025EA30; } // 8025EA1C
  c->r[3]=c->r[31]|c->r[31]; // 8025EA20
  c->lr=0x8025EA28u; f_80258890(c); // 8025EA24
  c->r[28]=c->r[3]|c->r[3]; // 8025EA28
  goto L_8025EA34; // 8025EA2C
L_8025EA30:;
  c->r[28]=0u+0x00000000u; // 8025EA30
L_8025EA34:;
  cmps(c,0,(int32_t)c->r[22],0); // 8025EA34
  if (crb(c,2)) { goto L_8025EA48; } // 8025EA38
  c->r[3]=c->r[31]|c->r[31]; // 8025EA3C
  c->lr=0x8025EA44u; f_802589BC(c); // 8025EA40
  goto L_8025EA4C; // 8025EA44
L_8025EA48:;
  c->r[3]=0u+0x00000000u; // 8025EA48
L_8025EA4C:;
  c->r[25]=rotl(c->r[26],3)&0xFFFFFFF8u; // 8025EA4C
  c->r[24]=rotl(c->r[27],6)&0xFFFFFFC0u; // 8025EA50
  c->r[0]=c->r[25]+0x0000003Bu; // 8025EA54
  c->r[23]=rotl(c->r[28],4)&0xFFFFFFF0u; // 8025EA58
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8025EA5C
  cmps(c,0,(int32_t)c->r[30],0); // 8025EA60
  c->r[4]=c->r[26]+c->r[24]; // 8025EA64
  c->r[0]=c->r[4]+0x00000003u; // 8025EA68
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8025EA6C
  c->r[4]=c->r[27]+c->r[23]; // 8025EA70
  c->r[0]=c->r[4]+0x00000003u; // 8025EA74
  c->r[22]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8025EA78
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8025EA7C
  c->r[3]=c->r[28]+c->r[22]; // 8025EA80
  c->r[0]=c->r[3]+0x00000003u; // 8025EA84
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8025EA88
  if (crb(c,2)) { goto L_8025EA94; } // 8025EA8C
  W32(c->r[30]+0x00000000u,c->r[4]); // 8025EA90
L_8025EA94:;
  cmps(c,0,(int32_t)c->r[29],0); // 8025EA94
  if (!crb(c,2)) { goto L_8025EAA4; } // 8025EA98
  c->r[3]=0u+0x00000000u; // 8025EA9C
  goto L_8025EB24; // 8025EAA0
L_8025EAA4:;
  c->r[3]=c->r[29]|c->r[29]; // 8025EAA4
  c->lr=0x8025EAACu; f_801A0EF8(c); // 8025EAA8
  cmps(c,0,(int32_t)c->r[3],0); // 8025EAAC
  if (!crb(c,2)) { goto L_8025EABC; } // 8025EAB0
  c->r[3]=0u+0x00000000u; // 8025EAB4
  goto L_8025EB24; // 8025EAB8
L_8025EABC:;
  if (crb(c,2)) { goto L_8025EB24; } // 8025EABC
  cmps(c,0,(int32_t)c->r[22],0); // 8025EAC0
  if (crb(c,2)) { goto L_8025EAD0; } // 8025EAC4
  c->r[9]=c->r[3]+c->r[28]; // 8025EAC8
  goto L_8025EAD4; // 8025EACC
L_8025EAD0:;
  c->r[9]=0u+0x00000000u; // 8025EAD0
L_8025EAD4:;
  cmps(c,0,(int32_t)c->r[23],0); // 8025EAD4
  if (crb(c,2)) { goto L_8025EAE4; } // 8025EAD8
  c->r[8]=c->r[3]+c->r[27]; // 8025EADC
  goto L_8025EAE8; // 8025EAE0
L_8025EAE4:;
  c->r[8]=0u+0x00000000u; // 8025EAE4
L_8025EAE8:;
  cmps(c,0,(int32_t)c->r[24],0); // 8025EAE8
  if (crb(c,2)) { goto L_8025EAF8; } // 8025EAEC
  c->r[7]=c->r[3]+c->r[26]; // 8025EAF0
  goto L_8025EAFC; // 8025EAF4
L_8025EAF8:;
  c->r[7]=0u+0x00000000u; // 8025EAF8
L_8025EAFC:;
  cmps(c,0,(int32_t)c->r[25],0); // 8025EAFC
  if (crb(c,2)) { goto L_8025EB0C; } // 8025EB00
  c->r[6]=c->r[3]+0x00000038u; // 8025EB04
  goto L_8025EB10; // 8025EB08
L_8025EB0C:;
  c->r[6]=0u+0x00000000u; // 8025EB0C
L_8025EB10:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8025EB10
  c->r[4]=c->r[29]|c->r[29]; // 8025EB14
  c->r[5]=c->r[1]+0x00000008u; // 8025EB18
  W32(c->r[1]+0x00000008u,c->r[0]); // 8025EB1C
  c->lr=0x8025EB24u; f_8025EB3C(c); // 8025EB20
L_8025EB24:;
  c->r[11]=c->r[1]+0x00000040u; // 8025EB24
  c->lr=0x8025EB2Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025EB28
  c->r[0]=R32(c->r[1]+0x00000044u); // 8025EB2C
  c->lr=c->r[0]; // 8025EB30
  c->r[1]=c->r[1]+0x00000040u; // 8025EB34
  return; // 8025EB38
}

// __ct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorQ34nw4r3g3d9ResAnmScnPQ34nw4r3g3d17AmbLightAnmResultPQ34nw4r3g3d14LightAnmResultPQ34nw4r3g3d12FogAnmResultPQ34nw4r3g3d15CameraAnmResult
void f_8025EB3C(Ctx* __restrict c) {
  trace_call(0x8025EB3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EB3C
  c->r[0]=c->lr; // 8025EB40
  c->r[12]=0u+0x80340000u; // 8025EB44
  c->r[10]=0u+0x80340000u; // 8025EB48
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025EB4C
  c->r[0]=0u+0x43300000u; // 8025EB50
  c->r[12]=c->r[12]+0x00004BE8u; // 8025EB54
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[3]=RF64(ea);} // 8025EB58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025EB5C
  c->r[31]=0u+0x00000000u; // 8025EB60
  c->r[11]=c->r[13]+0xFFFF8F68u; // 8025EB64
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025EB68
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025EB6C
  cmps(c,0,(int32_t)c->r[6],0); // 8025EB70
  c->r[30]=R32(c->r[5]+0x00000000u); // 8025EB74
  c->r[10]=c->r[10]+0x00004B58u; // 8025EB78
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025EB7C
  c->r[29]=c->r[3]|c->r[3]; // 8025EB80
  {uint32_t ea=c->r[2]+0xFFFF9C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025EB84
  W32(c->r[3]+0x00000004u,c->r[31]); // 8025EB88
  W32(c->r[3]+0x00000008u,c->r[4]); // 8025EB8C
  W32(c->r[3]+0x00000000u,c->r[12]); // 8025EB90
  c->r[4]=R16(c->r[30]+0x00000034u); // 8025EB94
  c->r[12]=R32(c->r[30]+0x00000038u); // 8025EB98
  c->r[4]=c->r[4]^0x80000000u; // 8025EB9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8025EBA0
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 8025EBA4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8025EBA8
  c->r[4]=R32(c->r[11]+c->r[0]); // 8025EBAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8025EBB0
  c->r[0]=R32(c->r[5]+0x00000000u); // 8025EBB4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8025EBB8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8025EBBC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8025EBC0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8025EBC4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8025EBC8
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8025EBCC
  W32(c->r[3]+0x00000000u,c->r[10]); // 8025EBD0
  W32(c->r[3]+0x00000020u,c->r[0]); // 8025EBD4
  W32(c->r[3]+0x00000024u,c->r[31]); // 8025EBD8
  W32(c->r[3]+0x00000028u,c->r[6]); // 8025EBDC
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 8025EBE0
  W32(c->r[3]+0x00000030u,c->r[8]); // 8025EBE4
  W32(c->r[3]+0x00000034u,c->r[9]); // 8025EBE8
  if (!crb(c,2)) { goto L_8025EC08; } // 8025EBEC
  cmps(c,0,(int32_t)c->r[7],0); // 8025EBF0
  if (!crb(c,2)) { goto L_8025EC08; } // 8025EBF4
  cmps(c,0,(int32_t)c->r[8],0); // 8025EBF8
  if (!crb(c,2)) { goto L_8025EC08; } // 8025EBFC
  cmps(c,0,(int32_t)c->r[9],0); // 8025EC00
  if (crb(c,2)) { goto L_8025EC14; } // 8025EC04
L_8025EC08:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 8025EC08
  c->r[0]=c->r[0]|0x00000001u; // 8025EC0C
  W32(c->r[3]+0x00000024u,c->r[0]); // 8025EC10
L_8025EC14:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 8025EC14
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8025EC18
  if (crb(c,2)) { goto L_8025EC28; } // 8025EC1C
  c->r[3]=c->r[29]|c->r[29]; // 8025EC20
  c->lr=0x8025EC28u; f_8025F5D4(c); // 8025EC24
L_8025EC28:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025EC28
  c->r[3]=c->r[29]|c->r[29]; // 8025EC2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025EC30
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025EC34
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025EC38
  c->lr=c->r[0]; // 8025EC3C
  c->r[1]=c->r[1]+0x00000020u; // 8025EC40
  return; // 8025EC44
}

// fn_8025EC48
void f_8025EC48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EC48
  c->r[0]=c->lr; // 8025EC4C
  cmps(c,0,(int32_t)c->r[3],0); // 8025EC50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025EC54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025EC58
  c->r[31]=c->r[3]|c->r[3]; // 8025EC5C
  if (crb(c,2)) { goto L_8025EC70; } // 8025EC60
  if (crb(c,2)) { goto L_8025EC70; } // 8025EC64
  c->r[4]=0u+0x00000000u; // 8025EC68
  c->lr=0x8025EC70u; f_8025F848(c); // 8025EC6C
L_8025EC70:;
  c->r[3]=c->r[31]|c->r[31]; // 8025EC70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025EC74
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025EC78
  c->lr=c->r[0]; // 8025EC7C
  c->r[1]=c->r[1]+0x00000010u; // 8025EC80
  return; // 8025EC84
}

// SetFrame__Q34nw4r3g3d9AnmScnResFf
void f_8025EC88(Ctx* __restrict c) {
  trace_call(0x8025EC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EC88
  c->r[0]=c->lr; // 8025EC8C
  c->f[3]=c->f[1]; // 8025EC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025EC94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025EC98
  c->r[31]=c->r[3]|c->r[3]; // 8025EC9C
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8025ECA0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025ECA4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025ECA8
  c->ctr=c->r[12]; // 8025ECAC
  if (true) { c->lr=0x8025ECB4u; dispatch(c,c->ctr); } // 8025ECB0
  c->r[0]=R32(c->r[31]+0x00000024u); // 8025ECB4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 8025ECB8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8025ECBC
  if (crb(c,2)) { goto L_8025ECCC; } // 8025ECC0
  c->r[3]=c->r[31]|c->r[31]; // 8025ECC4
  c->lr=0x8025ECCCu; f_8025F5D4(c); // 8025ECC8
L_8025ECCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025ECCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025ECD0
  c->lr=c->r[0]; // 8025ECD4
  c->r[1]=c->r[1]+0x00000010u; // 8025ECD8
  return; // 8025ECDC
}

// fn_8025ECE0
void f_8025ECE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025ECE0
  return; // 8025ECE4
}

// SetUpdateRate__Q34nw4r3g3d9AnmScnResFf
void f_8025ECE8(Ctx* __restrict c) {
  trace_call(0x8025ECE8u);
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025ECE8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 8025ECEC
  fcmp(c,0,c->f[0],c->f[1]); // 8025ECF0
  if (!crb(c,2)) return; // 8025ECF4
  c->r[0]=R32(c->r[3]+0x00000024u); // 8025ECF8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8025ECFC
  if (crb(c,2)) return; // 8025ED00
  f_8025F5D4(c); return; // 8025ED04
  return; // 8025ED08
}

// fn_8025ED0C
void f_8025ED0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025ED0C
  return; // 8025ED10
}

// UpdateFrame__Q34nw4r3g3d9AnmScnResFv
void f_8025ED14(Ctx* __restrict c) {
  trace_call(0x8025ED14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025ED14
  c->r[0]=c->lr; // 8025ED18
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025ED1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025ED20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025ED24
  c->r[31]=c->r[3]|c->r[3]; // 8025ED28
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025ED2C
  fcmp(c,0,c->f[0],c->f[1]); // 8025ED30
  if (crb(c,2)) { goto L_8025ED78; } // 8025ED34
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025ED38
  {uint32_t ea=c->r[13]+0xFFFF9718u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025ED3C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025ED40
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8025ED44
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 8025ED48
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025ED4C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025ED50
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 8025ED54
  c->ctr=c->r[12]; // 8025ED58
  if (true) { c->lr=0x8025ED60u; dispatch(c,c->ctr); } // 8025ED5C
  c->r[0]=R32(c->r[31]+0x00000024u); // 8025ED60
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 8025ED64
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8025ED68
  if (crb(c,2)) { goto L_8025ED78; } // 8025ED6C
  c->r[3]=c->r[31]|c->r[31]; // 8025ED70
  c->lr=0x8025ED78u; f_8025F5D4(c); // 8025ED74
L_8025ED78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025ED78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025ED7C
  c->lr=c->r[0]; // 8025ED80
  c->r[1]=c->r[1]+0x00000010u; // 8025ED84
  return; // 8025ED88
}

// fn_8025ED8C
void f_8025ED8C(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 8025ED8C
  c->r[0]=c->r[5]+0x00000002u; // 8025ED90
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8025ED94
  if (crb(c,2)) { goto L_8025EDD8; } // 8025ED98
  if (!crb(c,0)) { goto L_8025EDAC; } // 8025ED9C
  cmps(c,0,(int32_t)c->r[4],8); // 8025EDA0
  if (crb(c,2)) { goto L_8025EDBC; } // 8025EDA4
  return; // 8025EDA8
L_8025EDAC:;
  c->r[0]=c->r[5]+0x00000004u; // 8025EDAC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8025EDB0
  if (!crb(c,0)) return; // 8025EDB4
  goto L_8025EDCC; // 8025EDB8
L_8025EDBC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025EDBC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8025EDC0
  c->ctr=c->r[12]; // 8025EDC4
  if (true) { dispatch(c,c->ctr); return; } // 8025EDC8
L_8025EDCC:;
  c->r[0]=0u+0x00000000u; // 8025EDCC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8025EDD0
  return; // 8025EDD4
L_8025EDD8:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8025EDD8
  return; // 8025EDDC
}

// GetLightSet__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d8LightSetUl
void f_8025EDE0(Ctx* __restrict c) {
  trace_call(0x8025EDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EDE0
  c->r[0]=c->lr; // 8025EDE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025EDE8
  c->r[11]=c->r[1]+0x00000030u; // 8025EDEC
  c->lr=0x8025EDF4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025EDF0
  c->r[24]=c->r[3]|c->r[3]; // 8025EDF4
  c->r[25]=c->r[4]|c->r[4]; // 8025EDF8
  c->r[4]=c->r[5]|c->r[5]; // 8025EDFC
  c->r[3]=c->r[3]+0x00000020u; // 8025EE00
  c->lr=0x8025EE08u; f_80258A3C(c); // 8025EE04
  cmps(c,0,(int32_t)c->r[3],0); // 8025EE08
  c->r[30]=c->r[3]|c->r[3]; // 8025EE0C
  if (!crb(c,2)) { goto L_8025EE1C; } // 8025EE10
  c->r[3]=0u+0x00000000u; // 8025EE14
  goto L_8025EF00; // 8025EE18
L_8025EE1C:;
  c->r[26]=R8(c->r[3]+0x0000001Au); // 8025EE1C
  c->r[28]=0u+0x00000007u; // 8025EE20
  c->r[27]=0u+0x00000000u; // 8025EE24
  cmps(c,0,(int32_t)c->r[26],0); // 8025EE28
  if (crb(c,2)) { goto L_8025EEBC; } // 8025EE2C
  c->r[29]=c->r[30]|c->r[30]; // 8025EE30
  goto L_8025EE9C; // 8025EE34
L_8025EE38:;
  c->r[4]=R16(c->r[29]+0x0000003Cu); // 8025EE38
  cmpu(c,0,c->r[4],0x0000FFFFu); // 8025EE3C
  if (crb(c,2)) { goto L_8025EE84; } // 8025EE40
  c->r[3]=c->r[24]+0x00000020u; // 8025EE44
  c->lr=0x8025EE4Cu; f_802586B8(c); // 8025EE48
  c->r[31]=c->r[3]|c->r[3]; // 8025EE4C
  c->r[3]=c->r[25]|c->r[25]; // 8025EE50
  c->r[5]=R32(c->r[31]+0x00000010u); // 8025EE54
  c->r[4]=c->r[27]|c->r[27]; // 8025EE58
  c->lr=0x8025EE60u; f_80277738(c); // 8025EE5C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8025EE60
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8025EE64
  if (crb(c,2)) { goto L_8025EE94; } // 8025EE68
  c->r[5]=R32(c->r[31]+0x00000014u); // 8025EE6C
  c->r[4]=c->r[28]|c->r[28]; // 8025EE70
  c->r[3]=c->r[25]|c->r[25]; // 8025EE74
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 8025EE78
  c->lr=0x8025EE80u; f_80277738(c); // 8025EE7C
  goto L_8025EE94; // 8025EE80
L_8025EE84:;
  c->r[3]=c->r[25]|c->r[25]; // 8025EE84
  c->r[4]=c->r[27]|c->r[27]; // 8025EE88
  c->r[5]=0u+0xFFFFFFFFu; // 8025EE8C
  c->lr=0x8025EE94u; f_80277738(c); // 8025EE90
L_8025EE94:;
  c->r[29]=c->r[29]+0x00000002u; // 8025EE94
  c->r[27]=c->r[27]+0x00000001u; // 8025EE98
L_8025EE9C:;
  cmpu(c,0,c->r[27],c->r[26]); // 8025EE9C
  if (crb(c,0)) { IRQCHK(c); goto L_8025EE38; } // 8025EEA0
  goto L_8025EEBC; // 8025EEA4
L_8025EEA8:;
  c->r[3]=c->r[25]|c->r[25]; // 8025EEA8
  c->r[4]=c->r[26]|c->r[26]; // 8025EEAC
  c->r[5]=0u+0xFFFFFFFFu; // 8025EEB0
  c->lr=0x8025EEB8u; f_80277738(c); // 8025EEB4
  c->r[26]=c->r[26]+0x00000001u; // 8025EEB8
L_8025EEBC:;
  cmpu(c,0,c->r[26],c->r[28]); // 8025EEBC
  if (!crb(c,1)) { IRQCHK(c); goto L_8025EEA8; } // 8025EEC0
  c->r[0]=R32(c->r[30]+0x00000014u); // 8025EEC4
  cmps(c,0,(int32_t)c->r[0],0); // 8025EEC8
  if (crb(c,2)) { goto L_8025EEF0; } // 8025EECC
  c->r[4]=R16(c->r[30]+0x00000018u); // 8025EED0
  c->r[3]=c->r[24]+0x00000020u; // 8025EED4
  c->lr=0x8025EEDCu; f_80258504(c); // 8025EED8
  c->r[4]=c->r[3]|c->r[3]; // 8025EEDC
  c->r[3]=c->r[25]|c->r[25]; // 8025EEE0
  c->r[4]=R32(c->r[4]+0x00000010u); // 8025EEE4
  c->lr=0x8025EEECu; f_802777A8(c); // 8025EEE8
  goto L_8025EEFC; // 8025EEEC
L_8025EEF0:;
  c->r[3]=c->r[25]|c->r[25]; // 8025EEF0
  c->r[4]=0u+0xFFFFFFFFu; // 8025EEF4
  c->lr=0x8025EEFCu; f_802777A8(c); // 8025EEF8
L_8025EEFC:;
  c->r[3]=0u+0x00000001u; // 8025EEFC
L_8025EF00:;
  c->r[11]=c->r[1]+0x00000030u; // 8025EF00
  c->lr=0x8025EF08u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025EF04
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025EF08
  c->lr=c->r[0]; // 8025EF0C
  c->r[1]=c->r[1]+0x00000030u; // 8025EF10
  return; // 8025EF14
}

// GetAmbLightColor__Q34nw4r3g3d9AnmScnResFUl
void f_8025EF18(Ctx* __restrict c) {
  trace_call(0x8025EF18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EF18
  c->r[0]=c->lr; // 8025EF1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025EF20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025EF24
  c->r[31]=c->r[3]|c->r[3]; // 8025EF28
  c->r[3]=c->r[4]|c->r[4]; // 8025EF2C
  c->r[12]=R32(c->r[4]+0x00000000u); // 8025EF30
  c->r[4]=c->r[1]+0x00000008u; // 8025EF34
  c->r[12]=R32(c->r[12]+0x00000080u); // 8025EF38
  c->ctr=c->r[12]; // 8025EF3C
  if (true) { c->lr=0x8025EF44u; dispatch(c,c->ctr); } // 8025EF40
  c->r[4]=R32(c->r[3]+0x00000000u); // 8025EF44
  c->r[3]=R32(c->r[3]+0x00000004u); // 8025EF48
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 8025EF4C
  if (!crb(c,2)) { goto L_8025EF5C; } // 8025EF50
  c->r[0]=0u+0xFFFFFF00u; // 8025EF54
  c->r[3]=c->r[3]|c->r[0]; // 8025EF58
L_8025EF5C:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 8025EF5C
  if (!crb(c,2)) { goto L_8025EF68; } // 8025EF60
  c->r[3]=c->r[3]|0x000000FFu; // 8025EF64
L_8025EF68:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 8025EF68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025EF6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025EF70
  c->lr=c->r[0]; // 8025EF74
  c->r[1]=c->r[1]+0x00000020u; // 8025EF78
  return; // 8025EF7C
}

// GetLight__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d8LightObjUl
void f_8025EF80(Ctx* __restrict c) {
  trace_call(0x8025EF80u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EF80
  c->r[0]=c->lr; // 8025EF84
  W32(c->r[1]+0x00000074u,c->r[0]); // 8025EF88
  c->r[0]=0u+0xFFFFFFFFu; // 8025EF8C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8025EF90
  c->r[31]=c->r[5]|c->r[5]; // 8025EF94
  c->r[5]=c->r[6]|c->r[6]; // 8025EF98
  W32(c->r[1]+0x00000068u,c->r[30]); // 8025EF9C
  W32(c->r[1]+0x00000064u,c->r[29]); // 8025EFA0
  c->r[29]=c->r[4]|c->r[4]; // 8025EFA4
  c->r[4]=c->r[1]+0x00000018u; // 8025EFA8
  W32(c->r[1]+0x00000038u,c->r[0]); // 8025EFAC
  W32(c->r[1]+0x00000050u,c->r[0]); // 8025EFB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025EFB4
  c->r[12]=R32(c->r[12]+0x00000084u); // 8025EFB8
  c->ctr=c->r[12]; // 8025EFBC
  if (true) { c->lr=0x8025EFC4u; dispatch(c,c->ctr); } // 8025EFC0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8025EFC4
  c->r[30]=c->r[3]|c->r[3]; // 8025EFC8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8025EFCC
  if (crb(c,2)) { goto L_8025F0CC; } // 8025EFD0
  cmps(c,0,(int32_t)c->r[29],0); // 8025EFD4
  if (crb(c,2)) { goto L_8025EFE8; } // 8025EFD8
  c->r[3]=c->r[29]|c->r[29]; // 8025EFDC
  c->r[4]=c->r[30]|c->r[30]; // 8025EFE0
  c->lr=0x8025EFE8u; f_8025E31C(c); // 8025EFE4
L_8025EFE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025EFE8
  if (crb(c,2)) { goto L_8025F0F4; } // 8025EFEC
  c->r[0]=R32(c->r[30]+0x00000004u); // 8025EFF0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8025EFF4
  if (crb(c,2)) { goto L_8025F0BC; } // 8025EFF8
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,0,0);} // 8025EFFC
  c->r[3]=c->r[1]+0x0000000Cu; // 8025F000
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 8025F004
  c->r[4]=c->r[3]|c->r[3]; // 8025F008
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8025F00C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8025F010
  {uint32_t ea=c->r[30]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 8025F014
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,0,ea,1,0);} // 8025F018
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8025F01C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8025F020
  c->lr=0x8025F028u; f_80168E0C(c); // 8025F024
  c->r[3]=c->r[31]|c->r[31]; // 8025F028
  c->lr=0x8025F030u; f_80276D4C(c); // 8025F02C
  c->r[0]=R8(c->r[30]+0x00000038u); // 8025F030
  c->r[4]=c->r[1]+0x00000008u; // 8025F034
  c->r[3]=c->r[31]|c->r[31]; // 8025F038
  W8(c->r[1]+0x00000008u,c->r[0]); // 8025F03C
  c->r[0]=R8(c->r[30]+0x00000039u); // 8025F040
  W8(c->r[1]+0x00000009u,c->r[0]); // 8025F044
  c->r[0]=R8(c->r[30]+0x0000003Au); // 8025F048
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8025F04C
  c->r[0]=R8(c->r[30]+0x0000003Bu); // 8025F050
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8025F054
  c->lr=0x8025F05Cu; f_80276D60(c); // 8025F058
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F05C
  c->r[3]=c->r[31]|c->r[31]; // 8025F060
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025F064
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025F068
  c->lr=0x8025F070u; f_80276F24(c); // 8025F06C
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F070
  c->r[3]=c->r[31]|c->r[31]; // 8025F074
  c->lr=0x8025F07Cu; f_80276F64(c); // 8025F078
  c->r[0]=R32(c->r[30]+0x00000004u); // 8025F07C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8025F080
  if (!crb(c,2)) { goto L_8025F094; } // 8025F084
  c->r[0]=R32(c->r[31]+0x00000000u); // 8025F088
  c->r[0]=c->r[0]|0x00000010u; // 8025F08C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025F090
L_8025F094:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8025F094
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8025F098
  if (!crb(c,2)) { goto L_8025F0AC; } // 8025F09C
  c->r[0]=R32(c->r[31]+0x00000000u); // 8025F0A0
  c->r[0]=c->r[0]|0x00000020u; // 8025F0A4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025F0A8
L_8025F0AC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8025F0AC
  c->r[0]=c->r[0]|0x00000004u; // 8025F0B0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025F0B4
  goto L_8025F0F4; // 8025F0B8
L_8025F0BC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8025F0BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025F0C0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025F0C4
  goto L_8025F0F4; // 8025F0C8
L_8025F0CC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8025F0CC
  if (crb(c,2)) { goto L_8025F0E0; } // 8025F0D0
  c->r[0]=R32(c->r[29]+0x00000000u); // 8025F0D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025F0D8
  W32(c->r[29]+0x00000000u,c->r[0]); // 8025F0DC
L_8025F0E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025F0E0
  if (crb(c,2)) { goto L_8025F0F4; } // 8025F0E4
  c->r[0]=R32(c->r[31]+0x00000000u); // 8025F0E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8025F0EC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025F0F0
L_8025F0F4:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 8025F0F4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8025F0F8
  c->r[30]=R32(c->r[1]+0x00000068u); // 8025F0FC
  c->r[29]=R32(c->r[1]+0x00000064u); // 8025F100
  c->lr=c->r[0]; // 8025F104
  c->r[1]=c->r[1]+0x00000070u; // 8025F108
  return; // 8025F10C
}

// GetFog__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d3FogUl
void f_8025F110(Ctx* __restrict c) {
  trace_call(0x8025F110u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F110
  c->r[0]=c->lr; // 8025F114
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025F118
  c->r[0]=0u+0xFFFFFFFFu; // 8025F11C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8025F120
  c->r[31]=c->r[4]|c->r[4]; // 8025F124
  c->r[4]=c->r[1]+0x00000010u; // 8025F128
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8025F12C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025F130
  c->r[12]=R32(c->r[12]+0x00000088u); // 8025F134
  c->ctr=c->r[12]; // 8025F138
  if (true) { c->lr=0x8025F140u; dispatch(c,c->ctr); } // 8025F13C
  c->r[4]=R32(c->r[31]+0x00000000u); // 8025F140
  c->r[0]=R32(c->r[3]+0x00000000u); // 8025F144
  cmps(c,0,(int32_t)c->r[4],0); // 8025F148
  if (crb(c,2)) { goto L_8025F154; } // 8025F14C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8025F150
L_8025F154:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8025F154
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F158
  cmps(c,0,(int32_t)c->r[4],0); // 8025F15C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025F160
  if (crb(c,2)) { goto L_8025F170; } // 8025F164
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8025F168
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 8025F16C
L_8025F170:;
  c->r[7]=R32(c->r[31]+0x00000000u); // 8025F170
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 8025F174
  c->r[5]=R8(c->r[3]+0x0000000Du); // 8025F178
  cmps(c,0,(int32_t)c->r[7],0); // 8025F17C
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 8025F180
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8025F184
  W8(c->r[1]+0x00000008u,c->r[6]); // 8025F188
  W8(c->r[1]+0x00000009u,c->r[5]); // 8025F18C
  W8(c->r[1]+0x0000000Au,c->r[4]); // 8025F190
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8025F194
  if (crb(c,2)) { goto L_8025F1AC; } // 8025F198
  W8(c->r[7]+0x00000014u,c->r[6]); // 8025F19C
  W8(c->r[7]+0x00000015u,c->r[5]); // 8025F1A0
  W8(c->r[7]+0x00000016u,c->r[4]); // 8025F1A4
  W8(c->r[7]+0x00000017u,c->r[0]); // 8025F1A8
L_8025F1AC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025F1AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8025F1B0
  c->lr=c->r[0]; // 8025F1B4
  c->r[1]=c->r[1]+0x00000030u; // 8025F1B8
  return; // 8025F1BC
}

// GetCamera__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d6CameraUl
void f_8025F1C0(Ctx* __restrict c) {
  trace_call(0x8025F1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F1C0
  c->r[0]=c->lr; // 8025F1C4
  W32(c->r[1]+0x00000094u,c->r[0]); // 8025F1C8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8025F1CC
  W32(c->r[1]+0x00000088u,c->r[30]); // 8025F1D0
  c->r[30]=c->r[4]|c->r[4]; // 8025F1D4
  c->r[4]=c->r[1]+0x0000004Cu; // 8025F1D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025F1DC
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 8025F1E0
  c->ctr=c->r[12]; // 8025F1E4
  if (true) { c->lr=0x8025F1ECu; dispatch(c,c->ctr); } // 8025F1E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8025F1EC
  c->r[31]=c->r[3]|c->r[3]; // 8025F1F0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8025F1F4
  if (!crb(c,2)) { goto L_8025F204; } // 8025F1F8
  c->r[3]=0u+0x00000000u; // 8025F1FC
  goto L_8025F308; // 8025F200
L_8025F204:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8025F204
  cmps(c,0,(int32_t)c->r[0],1); // 8025F208
  if (crb(c,2)) { goto L_8025F23C; } // 8025F20C
  if (!crb(c,0)) { goto L_8025F268; } // 8025F210
  cmps(c,0,(int32_t)c->r[0],0); // 8025F214
  if (!crb(c,0)) { goto L_8025F220; } // 8025F218
  goto L_8025F268; // 8025F21C
L_8025F220:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F220
  c->r[3]=c->r[30]|c->r[30]; // 8025F224
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025F228
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025F22C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8025F230
  c->lr=0x8025F238u; f_802699A4(c); // 8025F234
  goto L_8025F268; // 8025F238
L_8025F23C:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025F23C
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F240
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025F244
  c->r[3]=c->r[30]|c->r[30]; // 8025F248
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8025F24C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 8025F250
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8025F254
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 8025F258
  c->f[2]=-c->f[1]; // 8025F25C
  c->f[3]=-c->f[4]; // 8025F260
  c->lr=0x8025F268u; f_80269A1C(c); // 8025F264
L_8025F268:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8025F268
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8025F26C
  cmps(c,0,(int32_t)c->r[0],1); // 8025F270
  if (crb(c,2)) { goto L_8025F2B8; } // 8025F274
  if (!crb(c,0)) { goto L_8025F2EC; } // 8025F278
  cmps(c,0,(int32_t)c->r[0],0); // 8025F27C
  if (!crb(c,0)) { goto L_8025F288; } // 8025F280
  goto L_8025F2EC; // 8025F284
L_8025F288:;
  c->r[0]=0u+0x00000001u; // 8025F288
  W32(c->r[1]+0x00000020u,c->r[0]); // 8025F28C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025F290
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F294
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025F298
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8025F29C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8025F2A0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8025F2A4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 8025F2A8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 8025F2AC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8025F2B0
  goto L_8025F2EC; // 8025F2B4
L_8025F2B8:;
  c->r[0]=0u+0x00000002u; // 8025F2B8
  W32(c->r[1]+0x00000020u,c->r[0]); // 8025F2BC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025F2C0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025F2C4
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F2C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8025F2CC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8025F2D0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 8025F2D4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8025F2D8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025F2DC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8025F2E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8025F2E4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8025F2E8
L_8025F2EC:;
  c->r[3]=c->r[30]|c->r[30]; // 8025F2EC
  c->r[4]=c->r[31]+0x00000008u; // 8025F2F0
  c->lr=0x8025F2F8u; f_80269624(c); // 8025F2F4
  c->r[3]=c->r[30]|c->r[30]; // 8025F2F8
  c->r[4]=c->r[1]+0x00000020u; // 8025F2FC
  c->lr=0x8025F304u; f_80269688(c); // 8025F300
  c->r[3]=0u+0x00000001u; // 8025F304
L_8025F308:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8025F308
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8025F30C
  c->r[30]=R32(c->r[1]+0x00000088u); // 8025F310
  c->lr=c->r[0]; // 8025F314
  c->r[1]=c->r[1]+0x00000090u; // 8025F318
  return; // 8025F31C
}

// GetAmbLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d17AmbLightAnmResultUl
void f_8025F320(Ctx* __restrict c) {
  trace_call(0x8025F320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F320
  c->r[0]=c->lr; // 8025F324
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F328
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F32C
  c->r[31]=c->r[4]|c->r[4]; // 8025F330
  c->r[4]=c->r[5]|c->r[5]; // 8025F334
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F338
  c->r[30]=c->r[3]|c->r[3]; // 8025F33C
  c->r[3]=c->r[3]+0x00000020u; // 8025F340
  c->lr=0x8025F348u; f_80258A88(c); // 8025F344
  cmps(c,0,(int32_t)c->r[3],0); // 8025F348
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025F34C
  if (!crb(c,2)) { goto L_8025F36C; } // 8025F350
  c->r[3]=0u+0x00000000u; // 8025F354
  c->r[0]=0u+0xFFFFFFFFu; // 8025F358
  W32(c->r[31]+0x00000000u,c->r[3]); // 8025F35C
  c->r[3]=c->r[31]|c->r[31]; // 8025F360
  W32(c->r[31]+0x00000004u,c->r[0]); // 8025F364
  goto L_8025F39C; // 8025F368
L_8025F36C:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 8025F36C
  cmps(c,0,(int32_t)c->r[4],0); // 8025F370
  if (crb(c,2)) { goto L_8025F388; } // 8025F374
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8025F378
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8025F37C
  c->r[3]=c->r[4]+c->r[0]; // 8025F380
  goto L_8025F39C; // 8025F384
L_8025F388:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F388
  c->r[4]=c->r[31]|c->r[31]; // 8025F38C
  c->r[3]=c->r[1]+0x00000008u; // 8025F390
  c->lr=0x8025F398u; f_802579FC(c); // 8025F394
  c->r[3]=c->r[31]|c->r[31]; // 8025F398
L_8025F39C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F39C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F3A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F3A4
  c->lr=c->r[0]; // 8025F3A8
  c->r[1]=c->r[1]+0x00000020u; // 8025F3AC
  return; // 8025F3B0
}

// GetLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d14LightAnmResultUl
void f_8025F3B4(Ctx* __restrict c) {
  trace_call(0x8025F3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F3B4
  c->r[0]=c->lr; // 8025F3B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F3BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F3C0
  c->r[31]=c->r[4]|c->r[4]; // 8025F3C4
  c->r[4]=c->r[5]|c->r[5]; // 8025F3C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F3CC
  c->r[30]=c->r[3]|c->r[3]; // 8025F3D0
  c->r[3]=c->r[3]+0x00000020u; // 8025F3D4
  c->lr=0x8025F3DCu; f_80258AD4(c); // 8025F3D8
  cmps(c,0,(int32_t)c->r[3],0); // 8025F3DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025F3E0
  if (!crb(c,2)) { goto L_8025F3F8; } // 8025F3E4
  c->r[0]=0u+0x00000000u; // 8025F3E8
  c->r[3]=c->r[31]|c->r[31]; // 8025F3EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8025F3F0
  goto L_8025F428; // 8025F3F4
L_8025F3F8:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 8025F3F8
  cmps(c,0,(int32_t)c->r[4],0); // 8025F3FC
  if (crb(c,2)) { goto L_8025F414; } // 8025F400
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8025F404
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 8025F408
  c->r[3]=c->r[4]+c->r[0]; // 8025F40C
  goto L_8025F428; // 8025F410
L_8025F414:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F414
  c->r[4]=c->r[31]|c->r[31]; // 8025F418
  c->r[3]=c->r[1]+0x00000008u; // 8025F41C
  c->lr=0x8025F424u; f_80257ACC(c); // 8025F420
  c->r[3]=c->r[31]|c->r[31]; // 8025F424
L_8025F428:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F428
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F42C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F430
  c->lr=c->r[0]; // 8025F434
  c->r[1]=c->r[1]+0x00000020u; // 8025F438
  return; // 8025F43C
}

// GetFogResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d12FogAnmResultUl
void f_8025F440(Ctx* __restrict c) {
  trace_call(0x8025F440u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F440
  c->r[0]=c->lr; // 8025F444
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F448
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F44C
  c->r[31]=c->r[4]|c->r[4]; // 8025F450
  c->r[4]=c->r[5]|c->r[5]; // 8025F454
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F458
  c->r[30]=c->r[3]|c->r[3]; // 8025F45C
  c->r[3]=c->r[3]+0x00000020u; // 8025F460
  c->lr=0x8025F468u; f_80258B20(c); // 8025F464
  cmps(c,0,(int32_t)c->r[3],0); // 8025F468
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025F46C
  if (!crb(c,2)) { goto L_8025F484; } // 8025F470
  c->r[0]=0u+0x00000000u; // 8025F474
  c->r[3]=c->r[31]|c->r[31]; // 8025F478
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025F47C
  goto L_8025F4B4; // 8025F480
L_8025F484:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 8025F484
  cmps(c,0,(int32_t)c->r[4],0); // 8025F488
  if (crb(c,2)) { goto L_8025F4A0; } // 8025F48C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8025F490
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8025F494
  c->r[3]=c->r[4]+c->r[0]; // 8025F498
  goto L_8025F4B4; // 8025F49C
L_8025F4A0:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F4A0
  c->r[4]=c->r[31]|c->r[31]; // 8025F4A4
  c->r[3]=c->r[1]+0x00000008u; // 8025F4A8
  c->lr=0x8025F4B0u; f_80257EC4(c); // 8025F4AC
  c->r[3]=c->r[31]|c->r[31]; // 8025F4B0
L_8025F4B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F4B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F4B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F4BC
  c->lr=c->r[0]; // 8025F4C0
  c->r[1]=c->r[1]+0x00000020u; // 8025F4C4
  return; // 8025F4C8
}

// GetCameraResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d15CameraAnmResultUl
void f_8025F4CC(Ctx* __restrict c) {
  trace_call(0x8025F4CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F4CC
  c->r[0]=c->lr; // 8025F4D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F4D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F4D8
  c->r[31]=c->r[4]|c->r[4]; // 8025F4DC
  c->r[4]=c->r[5]|c->r[5]; // 8025F4E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F4E4
  c->r[30]=c->r[3]|c->r[3]; // 8025F4E8
  c->r[3]=c->r[3]+0x00000020u; // 8025F4EC
  c->lr=0x8025F4F4u; f_80258B6C(c); // 8025F4F0
  cmps(c,0,(int32_t)c->r[3],0); // 8025F4F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025F4F8
  if (!crb(c,2)) { goto L_8025F510; } // 8025F4FC
  c->r[0]=0u+0x00000000u; // 8025F500
  c->r[3]=c->r[31]|c->r[31]; // 8025F504
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025F508
  goto L_8025F540; // 8025F50C
L_8025F510:;
  c->r[4]=R32(c->r[30]+0x00000034u); // 8025F510
  cmps(c,0,(int32_t)c->r[4],0); // 8025F514
  if (crb(c,2)) { goto L_8025F52C; } // 8025F518
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8025F51C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8025F520
  c->r[3]=c->r[4]+c->r[0]; // 8025F524
  goto L_8025F540; // 8025F528
L_8025F52C:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025F52C
  c->r[4]=c->r[31]|c->r[31]; // 8025F530
  c->r[3]=c->r[1]+0x00000008u; // 8025F534
  c->lr=0x8025F53Cu; f_80258024(c); // 8025F538
  c->r[3]=c->r[31]|c->r[31]; // 8025F53C
L_8025F540:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F540
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F544
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F548
  c->lr=c->r[0]; // 8025F54C
  c->r[1]=c->r[1]+0x00000020u; // 8025F550
  return; // 8025F554
}

// GetSpecularLightID__Q34nw4r3g3d9AnmScnResCFUl
void f_8025F558(Ctx* __restrict c) {
  trace_call(0x8025F558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F558
  c->r[0]=c->lr; // 8025F55C
  c->r[3]=c->r[3]+0x00000020u; // 8025F560
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F564
  c->lr=0x8025F56Cu; f_80258AD4(c); // 8025F568
  cmps(c,0,(int32_t)c->r[3],0); // 8025F56C
  if (crb(c,2)) { goto L_8025F57C; } // 8025F570
  c->r[3]=R32(c->r[3]+0x00000014u); // 8025F574
  goto L_8025F580; // 8025F578
L_8025F57C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8025F57C
L_8025F580:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F580
  c->lr=c->r[0]; // 8025F584
  c->r[1]=c->r[1]+0x00000010u; // 8025F588
  return; // 8025F58C
}

// HasSpecularLight__Q34nw4r3g3d9AnmScnResCFUl
void f_8025F590(Ctx* __restrict c) {
  trace_call(0x8025F590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F590
  c->r[0]=c->lr; // 8025F594
  c->r[3]=c->r[3]+0x00000020u; // 8025F598
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F59C
  c->lr=0x8025F5A4u; f_80258AD4(c); // 8025F5A0
  cmps(c,0,(int32_t)c->r[3],0); // 8025F5A4
  c->r[4]=0u+0x00000000u; // 8025F5A8
  if (crb(c,2)) { goto L_8025F5C0; } // 8025F5AC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8025F5B0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8025F5B4
  if (crb(c,2)) { goto L_8025F5C0; } // 8025F5B8
  c->r[4]=0u+0x00000001u; // 8025F5BC
L_8025F5C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F5C0
  c->r[3]=c->r[4]|c->r[4]; // 8025F5C4
  c->lr=c->r[0]; // 8025F5C8
  c->r[1]=c->r[1]+0x00000010u; // 8025F5CC
  return; // 8025F5D0
}

// UpdateCache__Q34nw4r3g3d9AnmScnResFv
void f_8025F5D4(Ctx* __restrict c) {
  trace_call(0x8025F5D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F5D4
  c->r[0]=c->lr; // 8025F5D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8025F5DC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8025F5E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8025F5E4
  c->r[11]=c->r[1]+0x00000040u; // 8025F5E8
  c->lr=0x8025F5F0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025F5EC
  c->r[25]=c->r[3]|c->r[3]; // 8025F5F0
  c->r[3]=c->r[3]+0x00000020u; // 8025F5F4
  c->lr=0x8025F5FCu; f_802585B0(c); // 8025F5F8
  c->r[28]=c->r[3]|c->r[3]; // 8025F5FC
  c->r[3]=c->r[25]+0x00000020u; // 8025F600
  c->lr=0x8025F608u; f_80258764(c); // 8025F604
  c->r[29]=c->r[3]|c->r[3]; // 8025F608
  c->r[3]=c->r[25]+0x00000020u; // 8025F60C
  c->lr=0x8025F614u; f_80258890(c); // 8025F610
  c->r[30]=c->r[3]|c->r[3]; // 8025F614
  c->r[3]=c->r[25]+0x00000020u; // 8025F618
  c->lr=0x8025F620u; f_802589BC(c); // 8025F61C
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8025F620
  c->r[31]=c->r[3]|c->r[3]; // 8025F624
  c->r[26]=0u+0x00000000u; // 8025F628
  c->r[27]=0u+0x00000000u; // 8025F62C
  goto L_8025F660; // 8025F630
L_8025F634:;
  c->r[4]=c->r[26]|c->r[26]; // 8025F634
  c->r[3]=c->r[25]+0x00000020u; // 8025F638
  c->lr=0x8025F640u; f_80258504(c); // 8025F63C
  W32(c->r[1]+0x00000014u,c->r[3]); // 8025F640
  c->f[1]=c->f[31]; // 8025F644
  c->r[3]=c->r[1]+0x00000014u; // 8025F648
  c->r[0]=R32(c->r[25]+0x00000028u); // 8025F64C
  c->r[4]=c->r[0]+c->r[27]; // 8025F650
  c->lr=0x8025F658u; f_802579FC(c); // 8025F654
  c->r[27]=c->r[27]+0x00000008u; // 8025F658
  c->r[26]=c->r[26]+0x00000001u; // 8025F65C
L_8025F660:;
  cmpu(c,0,c->r[26],c->r[28]); // 8025F660
  if (crb(c,0)) { IRQCHK(c); goto L_8025F634; } // 8025F664
  c->r[26]=0u+0x00000000u; // 8025F668
  c->r[28]=0u+0x00000000u; // 8025F66C
  goto L_8025F6A0; // 8025F670
L_8025F674:;
  c->r[4]=c->r[26]|c->r[26]; // 8025F674
  c->r[3]=c->r[25]+0x00000020u; // 8025F678
  c->lr=0x8025F680u; f_802586B8(c); // 8025F67C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8025F680
  c->f[1]=c->f[31]; // 8025F684
  c->r[3]=c->r[1]+0x00000010u; // 8025F688
  c->r[0]=R32(c->r[25]+0x0000002Cu); // 8025F68C
  c->r[4]=c->r[0]+c->r[28]; // 8025F690
  c->lr=0x8025F698u; f_80257ACC(c); // 8025F694
  c->r[28]=c->r[28]+0x00000040u; // 8025F698
  c->r[26]=c->r[26]+0x00000001u; // 8025F69C
L_8025F6A0:;
  cmpu(c,0,c->r[26],c->r[29]); // 8025F6A0
  if (crb(c,0)) { IRQCHK(c); goto L_8025F674; } // 8025F6A4
  c->r[26]=0u+0x00000000u; // 8025F6A8
  c->r[28]=0u+0x00000000u; // 8025F6AC
  goto L_8025F6E0; // 8025F6B0
L_8025F6B4:;
  c->r[4]=c->r[26]|c->r[26]; // 8025F6B4
  c->r[3]=c->r[25]+0x00000020u; // 8025F6B8
  c->lr=0x8025F6C0u; f_802587E4(c); // 8025F6BC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8025F6C0
  c->f[1]=c->f[31]; // 8025F6C4
  c->r[3]=c->r[1]+0x0000000Cu; // 8025F6C8
  c->r[0]=R32(c->r[25]+0x00000030u); // 8025F6CC
  c->r[4]=c->r[0]+c->r[28]; // 8025F6D0
  c->lr=0x8025F6D8u; f_80257EC4(c); // 8025F6D4
  c->r[28]=c->r[28]+0x00000010u; // 8025F6D8
  c->r[26]=c->r[26]+0x00000001u; // 8025F6DC
L_8025F6E0:;
  cmpu(c,0,c->r[26],c->r[30]); // 8025F6E0
  if (crb(c,0)) { IRQCHK(c); goto L_8025F6B4; } // 8025F6E4
  c->r[26]=0u+0x00000000u; // 8025F6E8
  c->r[28]=0u+0x00000000u; // 8025F6EC
  goto L_8025F720; // 8025F6F0
L_8025F6F4:;
  c->r[4]=c->r[26]|c->r[26]; // 8025F6F4
  c->r[3]=c->r[25]+0x00000020u; // 8025F6F8
  c->lr=0x8025F700u; f_80258910(c); // 8025F6FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025F700
  c->f[1]=c->f[31]; // 8025F704
  c->r[3]=c->r[1]+0x00000008u; // 8025F708
  c->r[0]=R32(c->r[25]+0x00000034u); // 8025F70C
  c->r[4]=c->r[0]+c->r[28]; // 8025F710
  c->lr=0x8025F718u; f_80258024(c); // 8025F714
  c->r[28]=c->r[28]+0x00000034u; // 8025F718
  c->r[26]=c->r[26]+0x00000001u; // 8025F71C
L_8025F720:;
  cmpu(c,0,c->r[26],c->r[31]); // 8025F720
  if (crb(c,0)) { IRQCHK(c); goto L_8025F6F4; } // 8025F724
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8025F728
  c->r[11]=c->r[1]+0x00000040u; // 8025F72C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8025F730
  c->lr=0x8025F738u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025F734
  c->r[0]=R32(c->r[1]+0x00000054u); // 8025F738
  c->lr=c->r[0]; // 8025F73C
  c->r[1]=c->r[1]+0x00000050u; // 8025F740
  return; // 8025F744
}

// fn_8025F748
void f_8025F748(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025F748
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025F74C
  c->r[3]=c->r[3]+0xFFFF8578u; // 8025F750
  cmpu(c,0,c->r[0],c->r[3]); // 8025F754
  if (!crb(c,2)) { goto L_8025F764; } // 8025F758
  c->r[3]=0u+0x00000001u; // 8025F75C
  return; // 8025F760
L_8025F764:;
  c->r[3]=0u+0x80310000u; // 8025F764
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025F768
  c->r[3]=c->r[3]+0xFFFF8568u; // 8025F76C
  cmpu(c,0,c->r[0],c->r[3]); // 8025F770
  if (!crb(c,2)) { goto L_8025F780; } // 8025F774
  c->r[3]=0u+0x00000001u; // 8025F778
  return; // 8025F77C
L_8025F780:;
  c->r[3]=0u+0x80310000u; // 8025F780
  c->r[3]=c->r[3]+0xFFFF8588u; // 8025F784
  c->r[0]=c->r[3]-c->r[0]; // 8025F788
  c->r[0]=cntlz(c->r[0]); // 8025F78C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8025F790
  return; // 8025F794
}

// fn_8025F798
void f_8025F798(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025F798
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025F79C
  c->r[3]=c->r[3]+0xFFFF8568u; // 8025F7A0
  cmpu(c,0,c->r[0],c->r[3]); // 8025F7A4
  if (!crb(c,2)) { goto L_8025F7B4; } // 8025F7A8
  c->r[3]=0u+0x00000001u; // 8025F7AC
  return; // 8025F7B0
L_8025F7B4:;
  c->r[3]=0u+0x80310000u; // 8025F7B4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025F7B8
  c->r[3]=c->r[3]+0xFFFF8588u; // 8025F7BC
  c->r[0]=c->r[3]-c->r[0]; // 8025F7C0
  c->r[0]=cntlz(c->r[0]); // 8025F7C4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8025F7C8
  return; // 8025F7CC
}

// fn_8025F7D0
void f_8025F7D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F7D0
  c->r[0]=c->lr; // 8025F7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F7D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025F7DC
  c->r[12]=R32(c->r[12]+0x00000014u); // 8025F7E0
  c->ctr=c->r[12]; // 8025F7E4
  if (true) { c->lr=0x8025F7ECu; dispatch(c,c->ctr); } // 8025F7E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F7EC
  c->r[3]=c->r[3]+0x00000004u; // 8025F7F0
  c->lr=c->r[0]; // 8025F7F4
  c->r[1]=c->r[1]+0x00000010u; // 8025F7F8
  return; // 8025F7FC
}

// fn_8025F800
void f_8025F800(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025F800
  c->r[3]=c->r[3]+0xFFFF8578u; // 8025F804
  return; // 8025F808
}

// fn_8025F80C
void f_8025F80C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F80C
  c->r[0]=c->lr; // 8025F810
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F814
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025F818
  c->r[12]=R32(c->r[12]+0x00000014u); // 8025F81C
  c->ctr=c->r[12]; // 8025F820
  if (true) { c->lr=0x8025F828u; dispatch(c,c->ctr); } // 8025F824
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F828
  c->r[3]=c->r[3]+0x00000004u; // 8025F82C
  c->lr=c->r[0]; // 8025F830
  c->r[1]=c->r[1]+0x00000010u; // 8025F834
  return; // 8025F838
}

// fn_8025F83C
void f_8025F83C(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025F83C
  c->r[3]=c->r[3]+0xFFFF8568u; // 8025F840
  return; // 8025F844
}

// __dt__Q34nw4r3g3d6G3dObjFv
void f_8025F848(Ctx* __restrict c) {
  trace_call(0x8025F848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F848
  c->r[0]=c->lr; // 8025F84C
  cmps(c,0,(int32_t)c->r[3],0); // 8025F850
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F854
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025F858
  c->r[31]=c->r[3]|c->r[3]; // 8025F85C
  if (crb(c,2)) { goto L_8025F87C; } // 8025F860
  c->r[5]=0u+0x80340000u; // 8025F864
  c->r[4]=c->r[31]|c->r[31]; // 8025F868
  c->r[5]=c->r[5]+0x00004C78u; // 8025F86C
  W32(c->r[3]+0x00000000u,c->r[5]); // 8025F870
  c->r[3]=R32(c->r[3]+0x00000008u); // 8025F874
  c->lr=0x8025F87Cu; f_801A0F08(c); // 8025F878
L_8025F87C:;
  c->r[3]=c->r[31]|c->r[31]; // 8025F87C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025F880
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F884
  c->lr=c->r[0]; // 8025F888
  c->r[1]=c->r[1]+0x00000010u; // 8025F88C
  return; // 8025F890
}

// Destroy__Q34nw4r3g3d6G3dObjFv
void f_8025F894(Ctx* __restrict c) {
  trace_call(0x8025F894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F894
  c->r[0]=c->lr; // 8025F898
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F89C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025F8A0
  c->r[31]=c->r[3]|c->r[3]; // 8025F8A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8025F8A8
  cmps(c,0,(int32_t)c->r[0],0); // 8025F8AC
  if (crb(c,2)) { goto L_8025F8D8; } // 8025F8B0
  c->r[3]=c->r[0]|c->r[0]; // 8025F8B4
  c->r[4]=0u+0x00010000u; // 8025F8B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025F8BC
  c->r[6]=c->r[31]|c->r[31]; // 8025F8C0
  c->r[4]=c->r[4]+0x00000001u; // 8025F8C4
  c->r[5]=0u+0x00000000u; // 8025F8C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8025F8CC
  c->ctr=c->r[12]; // 8025F8D0
  if (true) { c->lr=0x8025F8D8u; dispatch(c,c->ctr); } // 8025F8D4
L_8025F8D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025F8D8
  if (crb(c,2)) { goto L_8025F8F8; } // 8025F8DC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8025F8E0
  c->r[3]=c->r[31]|c->r[31]; // 8025F8E4
  c->r[4]=0u+0x00000001u; // 8025F8E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8025F8EC
  c->ctr=c->r[12]; // 8025F8F0
  if (true) { c->lr=0x8025F8F8u; dispatch(c,c->ctr); } // 8025F8F4
L_8025F8F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F8F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025F8FC
  c->lr=c->r[0]; // 8025F900
  c->r[1]=c->r[1]+0x00000010u; // 8025F904
  return; // 8025F908
}

// fn_8025F90C
void f_8025F90C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F90C
  c->r[0]=c->lr; // 8025F910
  c->r[6]=c->r[3]|c->r[3]; // 8025F914
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025F91C
  c->r[31]=R32(c->r[3]+0x00000004u); // 8025F920
  cmps(c,0,(int32_t)c->r[31],0); // 8025F924
  if (crb(c,2)) { goto L_8025F94C; } // 8025F928
  c->r[12]=R32(c->r[31]+0x00000000u); // 8025F92C
  c->r[4]=0u+0x00010000u; // 8025F930
  c->r[3]=c->r[31]|c->r[31]; // 8025F934
  c->r[5]=0u+0x00000000u; // 8025F938
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8025F93C
  c->r[4]=c->r[4]+0x00000001u; // 8025F940
  c->ctr=c->r[12]; // 8025F944
  if (true) { c->lr=0x8025F94Cu; dispatch(c,c->ctr); } // 8025F948
L_8025F94C:;
  c->r[3]=c->r[31]|c->r[31]; // 8025F94C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025F950
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F954
  c->lr=c->r[0]; // 8025F958
  c->r[1]=c->r[1]+0x00000010u; // 8025F95C
  return; // 8025F960
}

// fn_8025F964
void f_8025F964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F964
  c->r[0]=c->lr; // 8025F968
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F96C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025F970
  c->r[12]=R32(c->r[12]+0x00000014u); // 8025F974
  c->ctr=c->r[12]; // 8025F978
  if (true) { c->lr=0x8025F980u; dispatch(c,c->ctr); } // 8025F97C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F980
  c->r[3]=c->r[3]+0x00000004u; // 8025F984
  c->lr=c->r[0]; // 8025F988
  c->r[1]=c->r[1]+0x00000010u; // 8025F98C
  return; // 8025F990
}

// fn_8025F994
void f_8025F994(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8025F994
  c->r[3]=c->r[3]+0xFFFF8588u; // 8025F998
  return; // 8025F99C
}

// PlayPolicy_Onetime__Q24nw4r3g3dFfff
void f_8025F9A0(Ctx* __restrict c) {
  trace_call(0x8025F9A0u);
  c->f[1]=c->f[3]; // 8025F9A0
  return; // 8025F9A4
}

// PlayPolicy_Loop__Q24nw4r3g3dFfff
void f_8025F9A8(Ctx* __restrict c) {
  trace_call(0x8025F9A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F9A8
  c->r[0]=c->lr; // 8025F9AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F9B0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8025F9B4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8025F9B8
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025F9BC
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 8025F9C0
  fcmp(c,0,c->f[3],c->f[0]); // 8025F9C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025F9C8
  if (!crb(c,2)) { goto L_8025F9E4; } // 8025F9CC
  c->f[1]=c->f[3]; // 8025F9D0
  c->f[2]=c->f[31]; // 8025F9D4
  c->lr=0x8025F9DCu; f_801968D8(c); // 8025F9D8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8025F9DC
  goto L_8025FA00; // 8025F9E0
L_8025F9E4:;
  c->f[2]=c->f[31]; // 8025F9E4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[31]); // 8025F9E8
  c->lr=0x8025F9F0u; f_801968D8(c); // 8025F9EC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8025F9F0
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025F9F4
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[31]; // 8025F9F8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8025F9FC
L_8025FA00:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8025FA00
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025FA04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8025FA08
  c->lr=c->r[0]; // 8025FA0C
  c->r[1]=c->r[1]+0x00000020u; // 8025FA10
  return; // 8025FA14
}

// SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
void f_8025FA18(Ctx* __restrict c) {
  trace_call(0x8025FA18u);
  cmps(c,0,(int32_t)c->r[5],0); // 8025FA18
  if (crb(c,2)) { goto L_8025FA30; } // 8025FA1C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8025FA20
  c->r[0]=c->r[0]|c->r[4]; // 8025FA24
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8025FA28
  return; // 8025FA2C
L_8025FA30:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8025FA30
  c->r[0]=c->r[0]&~c->r[4]; // 8025FA34
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8025FA38
  return; // 8025FA3C
}

// TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
void f_8025FA40(Ctx* __restrict c) {
  trace_call(0x8025FA40u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8025FA40
  c->r[3]=c->r[0]&c->r[4]; // 8025FA44
  c->r[0]=0u-c->r[3]; // 8025FA48
  c->r[0]=c->r[0]|c->r[3]; // 8025FA4C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8025FA50
  return; // 8025FA54
}

// GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
void f_8025FA58(Ctx* __restrict c) {
  trace_call(0x8025FA58u);
  c->r[10]=0u+0xCC010000u; // 8025FA58
  c->r[11]=0u+0x00000061u; // 8025FA5C
  c->r[9]=0u+0xFE080000u; // 8025FA60
  c->r[8]=c->r[2]+0xFFFF9C90u; // 8025FA64
  c->r[7]=R8(c->r[8]+c->r[7]); // 8025FA68
  c->r[9]=c->r[9]+0xFFFFFC3Fu; // 8025FA6C
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 8025FA70
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8025FA74
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 8025FA78
  c->r[8]=rotl(c->r[6],16)&0x00FF0000u; // 8025FA7C
  c->r[6]=rotl(c->r[7],14)&0xFFFFC000u; // 8025FA80
  W32(c->r[10]+0xFFFF8000u,c->r[9]); // 8025FA84
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 8025FA88
  c->r[0]=c->r[3]|c->r[0]; // 8025FA8C
  c->r[0]=c->r[5]|c->r[0]; // 8025FA90
  c->r[6]=c->r[8]|c->r[6]; // 8025FA94
  c->r[0]=c->r[6]|c->r[0]; // 8025FA98
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 8025FA9C
  c->r[7]=0u+0x00000010u; // 8025FAA0
  c->r[6]=0u+0x00000000u; // 8025FAA4
  W32(c->r[10]+0xFFFF8000u,c->r[0]); // 8025FAA8
  c->r[5]=0u+0x00001009u; // 8025FAAC
  c->r[0]=0u+0x0000103Fu; // 8025FAB0
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 8025FAB4
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 8025FAB8
  W16(c->r[10]+0xFFFF8000u,c->r[5]); // 8025FABC
  W32(c->r[10]+0xFFFF8000u,c->r[4]); // 8025FAC0
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 8025FAC4
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 8025FAC8
  W16(c->r[10]+0xFFFF8000u,c->r[0]); // 8025FACC
  W32(c->r[10]+0xFFFF8000u,c->r[3]); // 8025FAD0
  return; // 8025FAD4
}

// GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
void f_8025FAD8(Ctx* __restrict c) {
  trace_call(0x8025FAD8u);
  c->r[5]=0u+0xCC010000u; // 8025FAD8
  c->r[6]=0u+0x00000061u; // 8025FADC
  c->r[4]=0u+0xFE010000u; // 8025FAE0
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8025FAE4
  c->r[0]=c->r[4]+0xFFFFC000u; // 8025FAE8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8025FAEC
  c->r[4]=c->r[2]+0xFFFF9C90u; // 8025FAF0
  c->r[0]=R8(c->r[4]+c->r[3]); // 8025FAF4
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8025FAF8
  c->r[0]=rotl(c->r[0],14)&0xFFFFC000u; // 8025FAFC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8025FB00
  return; // 8025FB04
}

// GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
void f_8025FB08(Ctx* __restrict c) {
  trace_call(0x8025FB08u);
  c->r[11]=0u+0xCC010000u; // 8025FB08
  c->r[12]=0u+0x00000061u; // 8025FB0C
  c->r[10]=0u+0xFE040000u; // 8025FB10
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 8025FB14
  c->r[0]=c->r[10]+0xFFFFFFFFu; // 8025FB18
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8025FB1C
  c->r[10]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8025FB20
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 8025FB24
  c->r[3]=rotl(c->r[5],16)&0x00FF0000u; // 8025FB28
  c->r[5]=rotl(c->r[6],17)&0x01FE0000u; // 8025FB2C
  c->r[3]=c->r[4]|c->r[3]; // 8025FB30
  c->r[0]=c->r[10]+0x00000030u; // 8025FB34
  c->r[3]=c->r[5]|c->r[3]; // 8025FB38
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 8025FB3C
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 8025FB40
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 8025FB44
  c->r[0]=c->r[3]|c->r[0]; // 8025FB48
  c->r[3]=rotl(c->r[8],16)&0x00FF0000u; // 8025FB4C
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 8025FB50
  c->r[0]=c->r[10]+0x00000031u; // 8025FB54
  c->r[5]=rotl(c->r[9],17)&0x01FE0000u; // 8025FB58
  c->r[3]=c->r[4]|c->r[3]; // 8025FB5C
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 8025FB60
  c->r[3]=c->r[5]|c->r[3]; // 8025FB64
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 8025FB68
  c->r[0]=c->r[3]|c->r[0]; // 8025FB6C
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 8025FB70
  return; // 8025FB74
}

// GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
void f_8025FB78(Ctx* __restrict c) {
  trace_call(0x8025FB78u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025FB78
  c->r[5]=0u+0x00000000u; // 8025FB7C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025FB80
  c->f[5]=std::fabs(c->f[2]); // 8025FB84
  {uint32_t ea=c->r[2]+0xFFFF9C94u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025FB88
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8025FB8C
  c->f[9]=std::fabs(c->f[3]); // 8025FB90
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8025FB94
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8025FB98
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8025FB9C
  fcmp(c,0,c->f[5],c->f[0]); // 8025FBA0
  c->f[10]=std::fabs(c->f[6]); // 8025FBA4
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FBA8
  c->f[11]=std::fabs(c->f[4]); // 8025FBAC
  c->f[12]=std::fabs(c->f[7]); // 8025FBB0
  c->f[13]=std::fabs(c->f[8]); // 8025FBB4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FBB8
  if (crb(c,2)) { goto L_8025FBFC; } // 8025FBBC
  fcmp(c,0,c->f[9],c->f[0]); // 8025FBC0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FBC4
  if (crb(c,2)) { goto L_8025FBFC; } // 8025FBC8
  fcmp(c,0,c->f[10],c->f[0]); // 8025FBCC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FBD0
  if (crb(c,2)) { goto L_8025FBFC; } // 8025FBD4
  fcmp(c,0,c->f[11],c->f[0]); // 8025FBD8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FBDC
  if (crb(c,2)) { goto L_8025FBFC; } // 8025FBE0
  fcmp(c,0,c->f[12],c->f[0]); // 8025FBE4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FBE8
  if (crb(c,2)) { goto L_8025FBFC; } // 8025FBEC
  fcmp(c,0,c->f[13],c->f[0]); // 8025FBF0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FBF4
  if (!crb(c,2)) { goto L_8025FC90; } // 8025FBF8
L_8025FBFC:;
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025FBFC
  {uint32_t ea=c->r[2]+0xFFFF9C94u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025FC00
L_8025FC04:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8025FC04
  cmps(c,0,(int32_t)c->r[0],46); // 8025FC08
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FC0C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 8025FC10
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8025FC14
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 8025FC18
  fcmp(c,0,c->f[5],c->f[0]); // 8025FC1C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 8025FC20
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 8025FC24
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 8025FC28
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 8025FC2C
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 8025FC30
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 8025FC34
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 8025FC38
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 8025FC3C
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 8025FC40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FC44
  c->r[5]=c->r[5]+0x00000001u; // 8025FC48
  if (crb(c,2)) { IRQCHK(c); goto L_8025FC04; } // 8025FC4C
  fcmp(c,0,c->f[9],c->f[0]); // 8025FC50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FC54
  if (crb(c,2)) { IRQCHK(c); goto L_8025FC04; } // 8025FC58
  fcmp(c,0,c->f[10],c->f[0]); // 8025FC5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FC60
  if (crb(c,2)) { IRQCHK(c); goto L_8025FC04; } // 8025FC64
  fcmp(c,0,c->f[11],c->f[0]); // 8025FC68
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FC6C
  if (crb(c,2)) { IRQCHK(c); goto L_8025FC04; } // 8025FC70
  fcmp(c,0,c->f[12],c->f[0]); // 8025FC74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FC78
  if (crb(c,2)) { IRQCHK(c); goto L_8025FC04; } // 8025FC7C
  fcmp(c,0,c->f[13],c->f[0]); // 8025FC80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025FC84
  if (crb(c,2)) { IRQCHK(c); goto L_8025FC04; } // 8025FC88
  goto L_8025FD38; // 8025FC8C
L_8025FC90:;
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025FC90
  fcmp(c,0,c->f[5],c->f[1]); // 8025FC94
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FC98
  fcmp(c,0,c->f[9],c->f[1]); // 8025FC9C
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FCA0
  fcmp(c,0,c->f[10],c->f[1]); // 8025FCA4
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FCA8
  fcmp(c,0,c->f[11],c->f[1]); // 8025FCAC
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FCB0
  fcmp(c,0,c->f[12],c->f[1]); // 8025FCB4
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FCB8
  fcmp(c,0,c->f[13],c->f[1]); // 8025FCBC
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FCC0
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025FCC4
L_8025FCC8:;
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 8025FCC8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8025FCCC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8025FCD0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8025FCD4
  fcmp(c,0,c->f[5],c->f[1]); // 8025FCD8
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 8025FCDC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 8025FCE0
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 8025FCE4
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 8025FCE8
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 8025FCEC
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 8025FCF0
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 8025FCF4
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 8025FCF8
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 8025FCFC
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FD00
  fcmp(c,0,c->f[9],c->f[1]); // 8025FD04
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FD08
  fcmp(c,0,c->f[10],c->f[1]); // 8025FD0C
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FD10
  fcmp(c,0,c->f[11],c->f[1]); // 8025FD14
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FD18
  fcmp(c,0,c->f[12],c->f[1]); // 8025FD1C
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FD20
  fcmp(c,0,c->f[13],c->f[1]); // 8025FD24
  if (!crb(c,0)) { goto L_8025FD38; } // 8025FD28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8025FD2C
  cmps(c,0,(int32_t)c->r[0],-17); // 8025FD30
  if (crb(c,1)) { IRQCHK(c); goto L_8025FCC8; } // 8025FD34
L_8025FD38:;
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[5]=c->ps1[5]=RF32(ea);} // 8025FD38
  c->r[9]=c->r[5]+0x00000011u; // 8025FD3C
  c->r[0]=c->r[3]+0x00000006u; // 8025FD40
  c->r[7]=0u+0xCC010000u; // 8025FD44
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 8025FD48
  c->r[5]=rotl(c->r[9],22)&0x00C00000u; // 8025FD4C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 8025FD50
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8025FD54
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[3]); // 8025FD58
  c->r[8]=0u+0x00000061u; // 8025FD5C
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8025FD60
  c->r[0]=c->r[3]+0x00000007u; // 8025FD64
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8025FD68
  c->r[6]=rotl(c->r[9],20)&0x00C00000u; // 8025FD6C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 8025FD70
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8025FD74
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 8025FD78
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8025FD7C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8025FD80
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 8025FD84
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 8025FD88
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[8]); // 8025FD8C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8025FD90
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025FD94
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8025FD98
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8025FD9C
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 8025FDA0
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 8025FDA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8025FDA8
  c->r[0]=c->r[5]|c->r[0]; // 8025FDAC
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 8025FDB0
  c->r[0]=c->r[3]+0x00000008u; // 8025FDB4
  c->r[4]=rotl(c->r[9],18)&0x00C00000u; // 8025FDB8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 8025FDBC
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8025FDC0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 8025FDC4
  c->r[3]=R32(c->r[1]+0x00000024u); // 8025FDC8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8025FDCC
  c->r[5]=rotl(c->r[3],11)&0x003FF800u; // 8025FDD0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8025FDD4
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 8025FDD8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8025FDDC
  c->r[5]=c->r[6]|c->r[5]; // 8025FDE0
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 8025FDE4
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8025FDE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025FDEC
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 8025FDF0
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 8025FDF4
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 8025FDF8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8025FDFC
  c->r[0]=c->r[4]|c->r[0]; // 8025FE00
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 8025FE04
  c->r[1]=c->r[1]+0x00000040u; // 8025FE08
  return; // 8025FE0C
}

// GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
void f_8025FE10(Ctx* __restrict c) {
  trace_call(0x8025FE10u);
  c->r[8]=0u+0xCC010000u; // 8025FE10
  c->r[9]=0u+0x00000008u; // 8025FE14
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 8025FE18
  c->r[0]=0u+0x00000030u; // 8025FE1C
  c->r[4]=0u+0x3CF40000u; // 8025FE20
  c->r[3]=0u+0x00F40000u; // 8025FE24
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 8025FE28
  c->r[7]=c->r[4]+0xFFFFCF00u; // 8025FE2C
  c->r[5]=c->r[3]+0xFFFFCF3Cu; // 8025FE30
  c->r[6]=0u+0x00000040u; // 8025FE34
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 8025FE38
  c->r[4]=0u+0x00000010u; // 8025FE3C
  c->r[3]=0u+0x00000001u; // 8025FE40
  c->r[0]=0u+0x00001018u; // 8025FE44
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 8025FE48
  W8(c->r[8]+0xFFFF8000u,c->r[6]); // 8025FE4C
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 8025FE50
  W8(c->r[8]+0xFFFF8000u,c->r[4]); // 8025FE54
  W16(c->r[8]+0xFFFF8000u,c->r[3]); // 8025FE58
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 8025FE5C
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 8025FE60
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 8025FE64
  return; // 8025FE68
}

// GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
void f_8025FE6C(Ctx* __restrict c) {
  trace_call(0x8025FE6Cu);
  c->r[7]=R32(c->r[3]+0x00000000u); // 8025FE6C
  c->r[5]=0u+0xCC010000u; // 8025FE70
  c->r[0]=0u+0x00000010u; // 8025FE74
  c->r[6]=R32(c->r[3]+0x00000004u); // 8025FE78
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8025FE7C
  c->r[4]=0u+0x00000001u; // 8025FE80
  c->r[8]=R32(c->r[3]+0x00000008u); // 8025FE84
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 8025FE88
  c->r[6]=rotl(c->r[6],12)&0xFFFFF000u; // 8025FE8C
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 8025FE90
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 8025FE94
  c->r[6]=c->r[7]|c->r[6]; // 8025FE98
  c->r[0]=0u+0x00001018u; // 8025FE9C
  c->r[8]=rotl(c->r[8],18)&0xFFFC0000u; // 8025FEA0
  c->r[10]=rotl(c->r[9],24)&0xFF000000u; // 8025FEA4
  c->r[4]=R32(c->r[3]+0x00000014u); // 8025FEA8
  c->r[9]=c->r[8]|c->r[6]; // 8025FEAC
  c->r[7]=R32(c->r[3]+0x00000018u); // 8025FEB0
  c->r[6]=R32(c->r[3]+0x00000010u); // 8025FEB4
  c->r[9]=c->r[10]|c->r[9]; // 8025FEB8
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 8025FEBC
  c->r[3]=rotl(c->r[4],6)&0xFFFFFFC0u; // 8025FEC0
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 8025FEC4
  c->r[0]=c->r[6]|c->r[3]; // 8025FEC8
  c->r[4]=rotl(c->r[7],12)&0xFFFFF000u; // 8025FECC
  c->r[3]=rotl(c->r[8],18)&0xFFFC0000u; // 8025FED0
  c->r[0]=c->r[4]|c->r[0]; // 8025FED4
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 8025FED8
  c->r[0]=c->r[3]|c->r[0]; // 8025FEDC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8025FEE0
  return; // 8025FEE4
}

// GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul
void f_8025FEE8(Ctx* __restrict c) {
  trace_call(0x8025FEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FEE8
  c->r[0]=c->lr; // 8025FEEC
  {uint32_t ea=c->r[2]+0xFFFF9CA4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8025FEF0
  c->r[5]=0u+0x00000000u; // 8025FEF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8025FEF8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 8025FEFC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8025FF00
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8025FF04
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8025FF08
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8025FF0C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025FF10
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025FF14
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025FF18
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025FF1C
  c->r[3]=c->r[1]+0x00000008u; // 8025FF20
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 8025FF24
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 8025FF28
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 8025FF2C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 8025FF30
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 8025FF34
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 8025FF38
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 8025FF3C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 8025FF40
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 8025FF44
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8025FF48
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8025FF4C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 8025FF50
  c->lr=0x8025FF58u; f_80184A4C(c); // 8025FF54
  c->r[0]=R32(c->r[1]+0x00000044u); // 8025FF58
  c->lr=c->r[0]; // 8025FF5C
  c->r[1]=c->r[1]+0x00000040u; // 8025FF60
  return; // 8025FF64
}

// Copy32ByteBlocks__Q34nw4r3g3d6detailFPvPCvUl
void f_8025FF68(Ctx* __restrict c) {
  trace_call(0x8025FF68u);
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[5]); // 8025FF68
  if (crb(c,2)) return; // 8025FF6C
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8025FF70
  c->ctr=c->r[0]; // 8025FF74
  if (crb(c,2)) { goto L_80260010; } // 8025FF78
L_8025FF7C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 8025FF7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 8025FF80
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 8025FF84
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 8025FF88
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 8025FF8C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 8025FF90
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 8025FF94
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=RF64(ea);} // 8025FF98
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 8025FF9C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=RF64(ea);} // 8025FFA0
  {uint32_t ea=c->r[3]+0x00000020u; WF64(ea,c->f[0]);} // 8025FFA4
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=RF64(ea);} // 8025FFA8
  {uint32_t ea=c->r[3]+0x00000028u; WF64(ea,c->f[1]);} // 8025FFAC
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=RF64(ea);} // 8025FFB0
  {uint32_t ea=c->r[3]+0x00000030u; WF64(ea,c->f[0]);} // 8025FFB4
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=RF64(ea);} // 8025FFB8
  {uint32_t ea=c->r[3]+0x00000038u; WF64(ea,c->f[1]);} // 8025FFBC
  {uint32_t ea=c->r[4]+0x00000048u; c->f[1]=RF64(ea);} // 8025FFC0
  {uint32_t ea=c->r[3]+0x00000040u; WF64(ea,c->f[0]);} // 8025FFC4
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=RF64(ea);} // 8025FFC8
  {uint32_t ea=c->r[3]+0x00000048u; WF64(ea,c->f[1]);} // 8025FFCC
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=RF64(ea);} // 8025FFD0
  {uint32_t ea=c->r[3]+0x00000050u; WF64(ea,c->f[0]);} // 8025FFD4
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=RF64(ea);} // 8025FFD8
  {uint32_t ea=c->r[3]+0x00000058u; WF64(ea,c->f[1]);} // 8025FFDC
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=RF64(ea);} // 8025FFE0
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[0]);} // 8025FFE4
  {uint32_t ea=c->r[4]+0x00000070u; c->f[0]=RF64(ea);} // 8025FFE8
  {uint32_t ea=c->r[3]+0x00000068u; WF64(ea,c->f[1]);} // 8025FFEC
  {uint32_t ea=c->r[4]+0x00000078u; c->f[1]=RF64(ea);} // 8025FFF0
  c->r[4]=c->r[4]+0x00000080u; // 8025FFF4
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[0]);} // 8025FFF8
  {uint32_t ea=c->r[3]+0x00000078u; WF64(ea,c->f[1]);} // 8025FFFC
  c->r[3]=c->r[3]+0x00000080u; // 80260000
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025FF7C; } // 80260004
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 80260008
  if (crb(c,2)) return; // 8026000C
L_80260010:;
  c->ctr=c->r[5]; // 80260010
L_80260014:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 80260014
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 80260018
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 8026001C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 80260020
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 80260024
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 80260028
  c->r[4]=c->r[4]+0x00000020u; // 8026002C
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 80260030
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 80260034
  c->r[3]=c->r[3]+0x00000020u; // 80260038
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80260014; } // 8026003C
  return; // 80260040
}

// ZeroMemory32ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_80260044(Ctx* __restrict c) {
  trace_call(0x80260044u);
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 80260044
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260048
  if (crb(c,2)) return; // 8026004C
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80260050
  c->ctr=c->r[0]; // 80260054
  if (crb(c,2)) { goto L_802600EC; } // 80260058
L_8026005C:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8026005C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80260060
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 80260064
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80260068
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 8026006C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 80260070
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 80260074
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 80260078
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 8026007C
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 80260080
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 80260084
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 80260088
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 8026008C
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 80260090
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 80260094
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 80260098
  {uint32_t ea=c->r[3]+0x00000080u; psq_store(c,0,ea,0,0);} // 8026009C
  {uint32_t ea=c->r[3]+0x00000088u; psq_store(c,0,ea,0,0);} // 802600A0
  {uint32_t ea=c->r[3]+0x00000090u; psq_store(c,0,ea,0,0);} // 802600A4
  {uint32_t ea=c->r[3]+0x00000098u; psq_store(c,0,ea,0,0);} // 802600A8
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 802600AC
  {uint32_t ea=c->r[3]+0x000000A8u; psq_store(c,0,ea,0,0);} // 802600B0
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,0,ea,0,0);} // 802600B4
  {uint32_t ea=c->r[3]+0x000000B8u; psq_store(c,0,ea,0,0);} // 802600B8
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 802600BC
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,0,ea,0,0);} // 802600C0
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,0,ea,0,0);} // 802600C4
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 802600C8
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 802600CC
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 802600D0
  {uint32_t ea=c->r[3]+0x000000F0u; psq_store(c,0,ea,0,0);} // 802600D4
  {uint32_t ea=c->r[3]+0x000000F8u; psq_store(c,0,ea,0,0);} // 802600D8
  c->r[3]=c->r[3]+0x00000100u; // 802600DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026005C; } // 802600E0
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 802600E4
  if (crb(c,2)) return; // 802600E8
L_802600EC:;
  c->ctr=c->r[4]; // 802600EC
L_802600F0:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802600F0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 802600F4
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 802600F8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 802600FC
  c->r[3]=c->r[3]+0x00000020u; // 80260100
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802600F0; } // 80260104
  return; // 80260108
}

// ZeroMemory16ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_8026010C(Ctx* __restrict c) {
  trace_call(0x8026010Cu);
  c->r[4]=rotl(c->r[4],28)&0x0FFFFFFFu; cr0(c,c->r[4]); // 8026010C
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260110
  if (crb(c,2)) return; // 80260114
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80260118
  c->ctr=c->r[0]; // 8026011C
  if (crb(c,2)) { goto L_80260174; } // 80260120
L_80260124:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80260124
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80260128
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 8026012C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80260130
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80260134
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 80260138
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 8026013C
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 80260140
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 80260144
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 80260148
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 8026014C
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 80260150
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 80260154
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 80260158
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 8026015C
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 80260160
  c->r[3]=c->r[3]+0x00000080u; // 80260164
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80260124; } // 80260168
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 8026016C
  if (crb(c,2)) return; // 80260170
L_80260174:;
  c->ctr=c->r[4]; // 80260174
L_80260178:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80260178
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 8026017C
  c->r[3]=c->r[3]+0x00000010u; // 80260180
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80260178; } // 80260184
  return; // 80260188
}

// EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_8026018C(Ctx* __restrict c) {
  trace_call(0x8026018Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026018C
  c->r[0]=c->lr; // 80260190
  cmps(c,0,(int32_t)c->r[3],0); // 80260194
  W32(c->r[1]+0x00000064u,c->r[0]); // 80260198
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8026019C
  c->r[31]=c->r[3]|c->r[3]; // 802601A0
  W32(c->r[1]+0x00000058u,c->r[30]); // 802601A4
  W32(c->r[1]+0x00000054u,c->r[29]); // 802601A8
  if (crb(c,2)) { goto L_80260554; } // 802601AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 802601B0
  cmps(c,1,(int32_t)c->r[0],0); // 802601B4
  if (crb(c,4)) { goto L_80260268; } // 802601B8
  cmps(c,0,(int32_t)c->r[0],32); // 802601BC
  if (!crb(c,0)) { goto L_80260268; } // 802601C0
  if (!crb(c,0)) { goto L_802601E4; } // 802601C4
  if (crb(c,4)) { goto L_802601E4; } // 802601C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802601CC
  c->r[3]=0u+0x80400000u; // 802601D0
  c->r[3]=c->r[3]+0x00000AC0u; // 802601D4
  c->r[3]=c->r[3]+c->r[0]; // 802601D8
  c->r[29]=c->r[3]+0x00000034u; // 802601DC
  goto L_802601E8; // 802601E0
L_802601E4:;
  c->r[29]=0u+0x00000000u; // 802601E4
L_802601E8:;
  c->r[30]=0u+0x80400000u; // 802601E8
  c->r[0]=R16(c->r[30]+0x00000AC0u); // 802601EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802601F0
  if (!crb(c,2)) { goto L_80260220; } // 802601F4
  c->r[3]=c->r[30]+0x00000AC0u; // 802601F8
  c->r[0]=R16(c->r[3]+0x00000002u); // 802601FC
  c->r[4]=c->r[3]+0x00000004u; // 80260200
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260204
  c->r[3]=c->r[3]+c->r[0]; // 80260208
  c->r[3]=c->r[3]+0x00000034u; // 8026020C
  c->lr=0x80260214u; f_8016825C(c); // 80260210
  c->r[0]=R16(c->r[30]+0x00000AC0u); // 80260214
  c->r[0]=c->r[0]|0x00000001u; // 80260218
  W16(c->r[30]+0x00000AC0u,c->r[0]); // 8026021C
L_80260220:;
  c->r[30]=0u+0x80400000u; // 80260220
  c->r[3]=c->r[29]|c->r[29]; // 80260224
  c->r[30]=c->r[30]+0x00000AC0u; // 80260228
  c->r[5]=c->r[31]|c->r[31]; // 8026022C
  c->r[4]=c->r[30]+0x00000004u; // 80260230
  c->lr=0x80260238u; f_80167FF8(c); // 80260234
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260238
  c->r[4]=c->r[31]|c->r[31]; // 8026023C
  c->r[5]=c->r[31]|c->r[31]; // 80260240
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80260244
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80260248
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026024C
  c->r[0]=R16(c->r[30]+0x00000002u); // 80260250
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260254
  c->r[3]=c->r[30]+c->r[0]; // 80260258
  c->r[3]=c->r[3]+0x00001434u; // 8026025C
  c->lr=0x80260264u; f_80167FF8(c); // 80260260
  goto L_80260554; // 80260264
L_80260268:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80260268
  cmps(c,1,(int32_t)c->r[0],0); // 8026026C
  if (crb(c,4)) { goto L_80260534; } // 80260270
  cmps(c,0,(int32_t)c->r[0],128); // 80260274
  if (!crb(c,0)) { goto L_80260534; } // 80260278
  if (crb(c,4)) { goto L_8026029C; } // 8026027C
  if (!crb(c,0)) { goto L_8026029C; } // 80260280
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 80260284
  c->r[3]=0u+0x80400000u; // 80260288
  c->r[3]=c->r[3]+0xFFFFE094u; // 8026028C
  c->r[3]=c->r[3]+c->r[0]; // 80260290
  c->r[3]=c->r[3]+0x0000002Cu; // 80260294
  goto L_802602A0; // 80260298
L_8026029C:;
  c->r[3]=0u+0x00000000u; // 8026029C
L_802602A0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802602A0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802602A4
  if (crb(c,2)) { goto L_80260534; } // 802602A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 802602AC
  if (crb(c,0)) { goto L_802602D4; } // 802602B0
  cmps(c,0,(int32_t)c->r[0],128); // 802602B4
  if (!crb(c,0)) { goto L_802602D4; } // 802602B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 802602BC
  c->r[3]=0u+0x80400000u; // 802602C0
  c->r[3]=c->r[3]+0xFFFFE094u; // 802602C4
  c->r[3]=c->r[3]+c->r[0]; // 802602C8
  c->r[29]=c->r[3]+0x0000002Cu; // 802602CC
  goto L_802602D8; // 802602D0
L_802602D4:;
  c->r[29]=0u+0x00000000u; // 802602D4
L_802602D8:;
  c->r[3]=c->r[29]|c->r[29]; // 802602D8
  c->r[4]=c->r[1]+0x00000038u; // 802602DC
  c->lr=0x802602E4u; f_80276FE0(c); // 802602E0
  c->r[30]=0u+0x80400000u; // 802602E4
  c->r[0]=R16(c->r[30]+0x00000AC0u); // 802602E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802602EC
  if (!crb(c,2)) { goto L_8026031C; } // 802602F0
  c->r[3]=c->r[30]+0x00000AC0u; // 802602F4
  c->r[0]=R16(c->r[3]+0x00000002u); // 802602F8
  c->r[4]=c->r[3]+0x00000004u; // 802602FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260300
  c->r[3]=c->r[3]+c->r[0]; // 80260304
  c->r[3]=c->r[3]+0x00000034u; // 80260308
  c->lr=0x80260310u; f_8016825C(c); // 8026030C
  c->r[0]=R16(c->r[30]+0x00000AC0u); // 80260310
  c->r[0]=c->r[0]|0x00000001u; // 80260314
  W16(c->r[30]+0x00000AC0u,c->r[0]); // 80260318
L_8026031C:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 8026031C
  c->r[3]=0u+0x80400000u; // 80260320
  c->r[3]=c->r[3]+0x00000AC0u; // 80260324
  c->r[4]=0u+0x00000000u; // 80260328
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 8026032C
  c->r[30]=c->r[3]+0x00000004u; // 80260330
  if (!crb(c,2)) { goto L_80260344; } // 80260334
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80260338
  if (!crb(c,2)) { goto L_80260344; } // 8026033C
  c->r[4]=0u+0x00000001u; // 80260340
L_80260344:;
  cmps(c,0,(int32_t)c->r[4],0); // 80260344
  if (!crb(c,2)) { goto L_80260374; } // 80260348
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026034C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260350
  fcmp(c,0,c->f[1],c->f[0]); // 80260354
  if (!crb(c,2)) { goto L_802603F4; } // 80260358
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026035C
  fcmp(c,0,c->f[1],c->f[0]); // 80260360
  if (!crb(c,2)) { goto L_802603F4; } // 80260364
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260368
  fcmp(c,0,c->f[1],c->f[0]); // 8026036C
  if (!crb(c,2)) { goto L_802603F4; } // 80260370
L_80260374:;
  c->r[3]=c->r[29]|c->r[29]; // 80260374
  c->r[4]=c->r[1]+0x00000038u; // 80260378
  c->lr=0x80260380u; f_80276FC4(c); // 8026037C
  c->r[3]=c->r[1]+0x00000038u; // 80260380
  c->r[4]=c->r[30]|c->r[30]; // 80260384
  c->r[5]=c->r[3]|c->r[3]; // 80260388
  c->lr=0x80260390u; f_80284C60(c); // 8026038C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260390
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80260394
  c->f[6]=-c->f[0]; // 80260398
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026039C
  c->f[4]=-c->f[2]; // 802603A0
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802603A4
  c->f[5]=-c->f[1]; // 802603A8
  c->f[3]=c->ps1[3]=S(c->f[6]); // 802603AC
  c->f[1]=c->ps1[1]=S(c->f[4]); // 802603B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 802603B4
  c->f[2]=c->ps1[2]=S(c->f[5]); // 802603B8
  fcmp(c,0,c->f[0],c->f[3]); // 802603BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 802603C0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 802603C4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 802603C8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 802603CC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 802603D0
  if (!crb(c,2)) { goto L_80260404; } // 802603D4
  fcmp(c,0,c->f[0],c->f[2]); // 802603D8
  if (!crb(c,2)) { goto L_80260404; } // 802603DC
  fcmp(c,0,c->f[0],c->f[1]); // 802603E0
  if (!crb(c,2)) { goto L_80260404; } // 802603E4
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802603E8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 802603EC
  goto L_80260404; // 802603F0
L_802603F4:;
  c->r[3]=c->r[1]+0x00000038u; // 802603F4
  c->r[4]=c->r[30]|c->r[30]; // 802603F8
  c->r[5]=c->r[3]|c->r[3]; // 802603FC
  c->lr=0x80260404u; f_80284C60(c); // 80260400
L_80260404:;
  c->r[3]=c->r[1]+0x00000038u; // 80260404
  c->r[4]=c->r[3]|c->r[3]; // 80260408
  c->lr=0x80260410u; f_80168E0C(c); // 8026040C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80260410
  {uint32_t ea=c->r[2]+0xFFFF9CBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80260414
  c->f[1]=std::fabs(c->f[1]); // 80260418
  fcmp(c,0,c->f[1],c->f[0]); // 8026041C
  if (!crb(c,0)) { goto L_80260468; } // 80260420
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80260424
  c->f[1]=std::fabs(c->f[1]); // 80260428
  fcmp(c,0,c->f[1],c->f[0]); // 8026042C
  if (!crb(c,0)) { goto L_80260468; } // 80260430
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80260434
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80260438
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8026043C
  fcmp(c,0,c->f[0],c->f[1]); // 80260440
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80260444
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80260448
  if (!crb(c,2)) { goto L_8026045C; } // 8026044C
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260450
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80260454
  goto L_8026047C; // 80260458
L_8026045C:;
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026045C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80260460
  goto L_8026047C; // 80260464
L_80260468:;
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80260468
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026046C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80260470
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80260474
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80260478
L_8026047C:;
  c->r[3]=c->r[1]+0x00000038u; // 8026047C
  c->r[4]=c->r[1]+0x0000002Cu; // 80260480
  c->r[5]=c->r[1]+0x00000020u; // 80260484
  c->lr=0x8026048Cu; f_80168EB4(c); // 80260488
  c->r[3]=c->r[1]+0x00000020u; // 8026048C
  c->r[4]=c->r[3]|c->r[3]; // 80260490
  c->lr=0x80260498u; f_80168E0C(c); // 80260494
  c->r[3]=c->r[1]+0x00000020u; // 80260498
  c->r[4]=c->r[1]+0x00000038u; // 8026049C
  c->r[5]=c->r[1]+0x00000014u; // 802604A0
  c->lr=0x802604A8u; f_80168EB4(c); // 802604A4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802604A8
  c->r[3]=c->r[31]|c->r[31]; // 802604AC
  c->r[4]=c->r[30]|c->r[30]; // 802604B0
  c->r[5]=c->r[31]|c->r[31]; // 802604B4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802604B8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802604BC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 802604C0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802604C4
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 802604C8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802604CC
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 802604D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802604D4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 802604D8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802604DC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 802604E0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802604E4
  c->f[0]=-c->f[0]; // 802604E8
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 802604EC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802604F0
  c->f[0]=-c->f[0]; // 802604F4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802604F8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802604FC
  c->f[0]=-c->f[0]; // 80260500
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 80260504
  c->lr=0x8026050Cu; f_80167FF8(c); // 80260508
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026050C
  c->r[3]=0u+0x80310000u; // 80260510
  c->r[4]=c->r[31]|c->r[31]; // 80260514
  c->r[5]=c->r[31]|c->r[31]; // 80260518
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026051C
  c->r[3]=c->r[3]+0xFFFF85A8u; // 80260520
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80260524
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80260528
  c->lr=0x80260530u; f_80167FF8(c); // 8026052C
  goto L_80260554; // 80260530
L_80260534:;
  c->r[3]=0u+0x80400000u; // 80260534
  c->r[4]=c->r[31]|c->r[31]; // 80260538
  c->r[3]=c->r[3]+0x00000AC0u; // 8026053C
  c->r[0]=R16(c->r[3]+0x00000002u); // 80260540
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260544
  c->r[3]=c->r[3]+c->r[0]; // 80260548
  c->r[3]=c->r[3]+0x00001434u; // 8026054C
  c->lr=0x80260554u; f_80167FC4(c); // 80260550
L_80260554:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 80260554
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80260558
  c->r[30]=R32(c->r[1]+0x00000058u); // 8026055C
  c->r[29]=R32(c->r[1]+0x00000054u); // 80260560
  c->lr=c->r[0]; // 80260564
  c->r[1]=c->r[1]+0x00000060u; // 80260568
  return; // 8026056C
}

// ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_80260570(Ctx* __restrict c) {
  trace_call(0x80260570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260570
  c->r[0]=c->lr; // 80260574
  cmps(c,0,(int32_t)c->r[3],0); // 80260578
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026057C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80260580
  c->r[31]=c->r[3]|c->r[3]; // 80260584
  W32(c->r[1]+0x00000018u,c->r[30]); // 80260588
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026058C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80260590
  c->r[28]=c->r[4]|c->r[4]; // 80260594
  if (crb(c,2)) { goto L_8026067C; } // 80260598
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8026059C
  cmps(c,1,(int32_t)c->r[0],0); // 802605A0
  if (crb(c,4)) { goto L_8026065C; } // 802605A4
  cmps(c,0,(int32_t)c->r[0],32); // 802605A8
  if (!crb(c,0)) { goto L_8026065C; } // 802605AC
  if (!crb(c,0)) { goto L_802605D0; } // 802605B0
  if (crb(c,4)) { goto L_802605D0; } // 802605B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802605B8
  c->r[3]=0u+0x80400000u; // 802605BC
  c->r[3]=c->r[3]+0x00000AC0u; // 802605C0
  c->r[3]=c->r[3]+c->r[0]; // 802605C4
  c->r[29]=c->r[3]+0x00000034u; // 802605C8
  goto L_802605D4; // 802605CC
L_802605D0:;
  c->r[29]=0u+0x00000000u; // 802605D0
L_802605D4:;
  c->r[30]=0u+0x80400000u; // 802605D4
  c->r[0]=R16(c->r[30]+0x00000AC0u); // 802605D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802605DC
  if (!crb(c,2)) { goto L_8026060C; } // 802605E0
  c->r[3]=c->r[30]+0x00000AC0u; // 802605E4
  c->r[0]=R16(c->r[3]+0x00000002u); // 802605E8
  c->r[4]=c->r[3]+0x00000004u; // 802605EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802605F0
  c->r[3]=c->r[3]+c->r[0]; // 802605F4
  c->r[3]=c->r[3]+0x00000034u; // 802605F8
  c->lr=0x80260600u; f_8016825C(c); // 802605FC
  c->r[0]=R16(c->r[30]+0x00000AC0u); // 80260600
  c->r[0]=c->r[0]|0x00000001u; // 80260604
  W16(c->r[30]+0x00000AC0u,c->r[0]); // 80260608
L_8026060C:;
  c->r[30]=0u+0x80400000u; // 8026060C
  c->r[3]=c->r[29]|c->r[29]; // 80260610
  c->r[30]=c->r[30]+0x00000AC0u; // 80260614
  c->r[5]=c->r[31]|c->r[31]; // 80260618
  c->r[4]=c->r[30]+0x00000004u; // 8026061C
  c->lr=0x80260624u; f_80167FF8(c); // 80260620
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80260624
  cmps(c,0,(int32_t)c->r[0],32); // 80260628
  if (!crb(c,0)) { goto L_80260648; } // 8026062C
  cmps(c,0,(int32_t)c->r[0],0); // 80260630
  if (crb(c,0)) { goto L_80260648; } // 80260634
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260638
  c->r[3]=c->r[30]+c->r[0]; // 8026063C
  c->r[3]=c->r[3]+0x00000E34u; // 80260640
  goto L_8026064C; // 80260644
L_80260648:;
  c->r[3]=0u+0x00000000u; // 80260648
L_8026064C:;
  c->r[4]=c->r[31]|c->r[31]; // 8026064C
  c->r[5]=c->r[31]|c->r[31]; // 80260650
  c->lr=0x80260658u; f_80167FF8(c); // 80260654
  goto L_8026067C; // 80260658
L_8026065C:;
  c->r[3]=0u+0x80400000u; // 8026065C
  c->r[4]=c->r[31]|c->r[31]; // 80260660
  c->r[3]=c->r[3]+0x00000AC0u; // 80260664
  c->r[0]=R16(c->r[3]+0x00000002u); // 80260668
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8026066C
  c->r[3]=c->r[3]+c->r[0]; // 80260670
  c->r[3]=c->r[3]+0x00000E34u; // 80260674
  c->lr=0x8026067Cu; f_80167FC4(c); // 80260678
L_8026067C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026067C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80260680
  c->r[30]=R32(c->r[1]+0x00000018u); // 80260684
  c->r[29]=R32(c->r[1]+0x00000014u); // 80260688
  c->r[28]=R32(c->r[1]+0x00000010u); // 8026068C
  c->lr=c->r[0]; // 80260690
  c->r[1]=c->r[1]+0x00000020u; // 80260694
  return; // 80260698
}

// EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_8026069C(Ctx* __restrict c) {
  trace_call(0x8026069Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026069C
  c->r[0]=c->lr; // 802606A0
  cmps(c,0,(int32_t)c->r[3],0); // 802606A4
  W32(c->r[1]+0x00000094u,c->r[0]); // 802606A8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 802606AC
  W32(c->r[1]+0x00000088u,c->r[30]); // 802606B0
  c->r[30]=c->r[5]|c->r[5]; // 802606B4
  W32(c->r[1]+0x00000084u,c->r[29]); // 802606B8
  c->r[29]=c->r[4]|c->r[4]; // 802606BC
  W32(c->r[1]+0x00000080u,c->r[28]); // 802606C0
  c->r[28]=c->r[3]|c->r[3]; // 802606C4
  if (crb(c,2)) { goto L_80260AC8; } // 802606C8
  c->r[31]=0u+0x80400000u; // 802606CC
  c->r[4]=c->r[31]+0x00000AC0u; // 802606D0
  c->r[0]=R16(c->r[31]+0x00000AC0u); // 802606D4
  c->r[3]=R16(c->r[4]+0x00000002u); // 802606D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802606DC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 802606E0
  c->r[3]=c->r[4]+c->r[0]; // 802606E4
  c->r[3]=c->r[3]+0x00000034u; // 802606E8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802606EC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802606F0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802606F4
  c->f[2]=-c->f[2]; // 802606F8
  c->f[1]=-c->f[1]; // 802606FC
  c->f[0]=-c->f[0]; // 80260700
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 80260704
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80260708
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8026070C
  if (!crb(c,2)) { goto L_80260728; } // 80260710
  c->r[4]=c->r[4]+0x00000004u; // 80260714
  c->lr=0x8026071Cu; f_8016825C(c); // 80260718
  c->r[0]=R16(c->r[31]+0x00000AC0u); // 8026071C
  c->r[0]=c->r[0]|0x00000001u; // 80260720
  W16(c->r[31]+0x00000AC0u,c->r[0]); // 80260724
L_80260728:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 80260728
  c->r[3]=0u+0x80400000u; // 8026072C
  cmps(c,1,(int32_t)c->r[0],0); // 80260730
  c->r[3]=c->r[3]+0x00000AC0u; // 80260734
  c->r[31]=c->r[3]+0x00000004u; // 80260738
  if (crb(c,4)) { goto L_80260958; } // 8026073C
  cmps(c,0,(int32_t)c->r[0],128); // 80260740
  if (!crb(c,0)) { goto L_80260958; } // 80260744
  if (crb(c,4)) { goto L_80260768; } // 80260748
  if (!crb(c,0)) { goto L_80260768; } // 8026074C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 80260750
  c->r[3]=0u+0x80400000u; // 80260754
  c->r[3]=c->r[3]+0xFFFFE094u; // 80260758
  c->r[3]=c->r[3]+c->r[0]; // 8026075C
  c->r[3]=c->r[3]+0x0000002Cu; // 80260760
  goto L_8026076C; // 80260764
L_80260768:;
  c->r[3]=0u+0x00000000u; // 80260768
L_8026076C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026076C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80260770
  if (crb(c,2)) { goto L_80260958; } // 80260774
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; cr0(c,c->r[0]); // 80260778
  if (crb(c,0)) { goto L_802607A0; } // 8026077C
  cmps(c,0,(int32_t)c->r[0],128); // 80260780
  if (!crb(c,0)) { goto L_802607A0; } // 80260784
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 80260788
  c->r[3]=0u+0x80400000u; // 8026078C
  c->r[3]=c->r[3]+0xFFFFE094u; // 80260790
  c->r[3]=c->r[3]+c->r[0]; // 80260794
  c->r[29]=c->r[3]+0x0000002Cu; // 80260798
  goto L_802607A4; // 8026079C
L_802607A0:;
  c->r[29]=0u+0x00000000u; // 802607A0
L_802607A4:;
  c->r[3]=c->r[29]|c->r[29]; // 802607A4
  c->r[4]=c->r[1]+0x00000044u; // 802607A8
  c->lr=0x802607B0u; f_80276FE0(c); // 802607AC
  c->r[4]=R32(c->r[29]+0x00000000u); // 802607B0
  c->r[3]=0u+0x00000000u; // 802607B4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802607B8
  if (!crb(c,2)) { goto L_802607CC; } // 802607BC
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802607C0
  if (!crb(c,2)) { goto L_802607CC; } // 802607C4
  c->r[3]=0u+0x00000001u; // 802607C8
L_802607CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802607CC
  if (!crb(c,2)) { goto L_802607FC; } // 802607D0
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802607D4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802607D8
  fcmp(c,0,c->f[1],c->f[0]); // 802607DC
  if (!crb(c,2)) { goto L_8026087C; } // 802607E0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802607E4
  fcmp(c,0,c->f[1],c->f[0]); // 802607E8
  if (!crb(c,2)) { goto L_8026087C; } // 802607EC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802607F0
  fcmp(c,0,c->f[1],c->f[0]); // 802607F4
  if (!crb(c,2)) { goto L_8026087C; } // 802607F8
L_802607FC:;
  c->r[3]=c->r[29]|c->r[29]; // 802607FC
  c->r[4]=c->r[1]+0x00000044u; // 80260800
  c->lr=0x80260808u; f_80276FC4(c); // 80260804
  c->r[3]=c->r[1]+0x00000044u; // 80260808
  c->r[4]=c->r[31]|c->r[31]; // 8026080C
  c->r[5]=c->r[3]|c->r[3]; // 80260810
  c->lr=0x80260818u; f_80284C60(c); // 80260814
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260818
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026081C
  c->f[6]=-c->f[0]; // 80260820
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80260824
  c->f[4]=-c->f[2]; // 80260828
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026082C
  c->f[5]=-c->f[1]; // 80260830
  c->f[3]=c->ps1[3]=S(c->f[6]); // 80260834
  c->f[1]=c->ps1[1]=S(c->f[4]); // 80260838
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 8026083C
  c->f[2]=c->ps1[2]=S(c->f[5]); // 80260840
  fcmp(c,0,c->f[0],c->f[3]); // 80260844
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 80260848
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 8026084C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 80260850
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80260854
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 80260858
  if (!crb(c,2)) { goto L_8026088C; } // 8026085C
  fcmp(c,0,c->f[0],c->f[2]); // 80260860
  if (!crb(c,2)) { goto L_8026088C; } // 80260864
  fcmp(c,0,c->f[0],c->f[1]); // 80260868
  if (!crb(c,2)) { goto L_8026088C; } // 8026086C
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260870
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80260874
  goto L_8026088C; // 80260878
L_8026087C:;
  c->r[3]=c->r[1]+0x00000044u; // 8026087C
  c->r[4]=c->r[31]|c->r[31]; // 80260880
  c->r[5]=c->r[3]|c->r[3]; // 80260884
  c->lr=0x8026088Cu; f_80284C60(c); // 80260888
L_8026088C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8026088C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80260890
  if (!crb(c,2)) { goto L_802608AC; } // 80260894
  c->r[3]=c->r[1]+0x00000050u; // 80260898
  c->r[4]=c->r[1]+0x00000044u; // 8026089C
  c->r[5]=c->r[1]+0x00000068u; // 802608A0
  c->lr=0x802608A8u; f_80168EF0(c); // 802608A4
  goto L_802608E8; // 802608A8
L_802608AC:;
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802608AC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802608B0
  c->f[2]=-c->f[0]; // 802608B4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802608B8
  c->f[3]=-c->f[1]; // 802608BC
  c->f[4]=-c->f[0]; // 802608C0
  c->f[0]=c->ps1[0]=S(c->f[2]); // 802608C4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 802608C8
  c->f[1]=c->ps1[1]=S(c->f[3]); // 802608CC
  c->f[2]=c->ps1[2]=S(c->f[4]); // 802608D0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 802608D4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 802608D8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 802608DC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 802608E0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 802608E4
L_802608E8:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 802608E8
  {uint32_t ea=c->r[2]+0xFFFF9CBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802608EC
  c->f[1]=std::fabs(c->f[1]); // 802608F0
  fcmp(c,0,c->f[1],c->f[0]); // 802608F4
  if (!crb(c,0)) { goto L_80260940; } // 802608F8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 802608FC
  c->f[1]=std::fabs(c->f[1]); // 80260900
  fcmp(c,0,c->f[1],c->f[0]); // 80260904
  if (!crb(c,0)) { goto L_80260940; } // 80260908
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026090C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80260910
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 80260914
  fcmp(c,0,c->f[0],c->f[1]); // 80260918
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8026091C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80260920
  if (!crb(c,2)) { goto L_80260934; } // 80260924
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260928
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8026092C
  goto L_80260A04; // 80260930
L_80260934:;
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260934
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80260938
  goto L_80260A04; // 8026093C
L_80260940:;
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80260940
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260944
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80260948
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8026094C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80260950
  goto L_80260A04; // 80260954
L_80260958:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 80260958
  cmps(c,1,(int32_t)c->r[0],0); // 8026095C
  if (crb(c,4)) { goto L_802609E0; } // 80260960
  cmps(c,0,(int32_t)c->r[0],32); // 80260964
  if (!crb(c,0)) { goto L_802609E0; } // 80260968
  if (!crb(c,0)) { goto L_8026098C; } // 8026096C
  if (crb(c,4)) { goto L_8026098C; } // 80260970
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260974
  c->r[3]=0u+0x80400000u; // 80260978
  c->r[3]=c->r[3]+0x00000AC0u; // 8026097C
  c->r[3]=c->r[3]+c->r[0]; // 80260980
  c->r[6]=c->r[3]+0x00000034u; // 80260984
  goto L_80260990; // 80260988
L_8026098C:;
  c->r[6]=0u+0x00000000u; // 8026098C
L_80260990:;
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260990
  c->r[3]=c->r[1]+0x00000050u; // 80260994
  c->r[4]=c->r[1]+0x00000038u; // 80260998
  c->r[5]=c->r[1]+0x00000068u; // 8026099C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802609A0
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802609A4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 802609A8
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802609AC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802609B0
  {uint32_t ea=c->r[6]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802609B4
  {uint32_t ea=c->r[6]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802609B8
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802609BC
  c->f[2]=-c->f[2]; // 802609C0
  c->f[1]=-c->f[1]; // 802609C4
  c->f[0]=-c->f[0]; // 802609C8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 802609CC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 802609D0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 802609D4
  c->lr=0x802609DCu; f_80168EF0(c); // 802609D8
  goto L_80260A04; // 802609DC
L_802609E0:;
  c->r[3]=0u+0x80400000u; // 802609E0
  c->r[4]=c->r[28]|c->r[28]; // 802609E4
  c->r[3]=c->r[3]+0x00000AC0u; // 802609E8
  c->r[0]=R16(c->r[3]+0x00000002u); // 802609EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802609F0
  c->r[3]=c->r[3]+c->r[0]; // 802609F4
  c->r[3]=c->r[3]+0x00001434u; // 802609F8
  c->lr=0x80260A00u; f_80167FC4(c); // 802609FC
  goto L_80260AC8; // 80260A00
L_80260A04:;
  c->r[3]=c->r[1]+0x00000068u; // 80260A04
  c->r[4]=c->r[3]|c->r[3]; // 80260A08
  c->lr=0x80260A10u; f_80168E0C(c); // 80260A0C
  c->r[3]=c->r[1]+0x0000005Cu; // 80260A10
  c->r[4]=c->r[1]+0x00000068u; // 80260A14
  c->r[5]=c->r[1]+0x0000002Cu; // 80260A18
  c->lr=0x80260A20u; f_80168EB4(c); // 80260A1C
  c->r[3]=c->r[1]+0x0000002Cu; // 80260A20
  c->r[4]=c->r[3]|c->r[3]; // 80260A24
  c->lr=0x80260A2Cu; f_80168E0C(c); // 80260A28
  c->r[3]=c->r[1]+0x00000068u; // 80260A2C
  c->r[4]=c->r[1]+0x0000002Cu; // 80260A30
  c->r[5]=c->r[1]+0x00000020u; // 80260A34
  c->lr=0x80260A3Cu; f_80168EB4(c); // 80260A38
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A3C
  c->r[3]=c->r[28]|c->r[28]; // 80260A40
  c->r[4]=c->r[31]|c->r[31]; // 80260A44
  c->r[5]=c->r[28]|c->r[28]; // 80260A48
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80260A4C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A50
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 80260A54
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A58
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 80260A5C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A60
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 80260A64
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A68
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 80260A6C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A70
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 80260A74
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A78
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 80260A7C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A80
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 80260A84
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A88
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 80260A8C
  c->lr=0x80260A94u; f_80167FF8(c); // 80260A90
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80260A94
  c->r[3]=0u+0x80400000u; // 80260A98
  c->r[3]=c->r[3]+0x00000AC0u; // 80260A9C
  c->r[4]=c->r[28]|c->r[28]; // 80260AA0
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 80260AA4
  c->r[5]=c->r[28]|c->r[28]; // 80260AA8
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 80260AAC
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 80260AB0
  c->r[0]=R16(c->r[3]+0x00000002u); // 80260AB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260AB8
  c->r[3]=c->r[3]+c->r[0]; // 80260ABC
  c->r[3]=c->r[3]+0x00001434u; // 80260AC0
  c->lr=0x80260AC8u; f_80167FF8(c); // 80260AC4
L_80260AC8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80260AC8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80260ACC
  c->r[30]=R32(c->r[1]+0x00000088u); // 80260AD0
  c->r[29]=R32(c->r[1]+0x00000084u); // 80260AD4
  c->r[28]=R32(c->r[1]+0x00000080u); // 80260AD8
  c->lr=c->r[0]; // 80260ADC
  c->r[1]=c->r[1]+0x00000090u; // 80260AE0
  return; // 80260AE4
}

// fn_80260AE8
void f_80260AE8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 80260AE8
  if (crb(c,2)) return; // 80260AEC
  f_80167F98(c); return; // 80260AF0
  return; // 80260AF4
}

// FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv
void f_80260AF8(Ctx* __restrict c) {
  trace_call(0x80260AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260AF8
  c->r[0]=c->lr; // 80260AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80260B00
  c->r[0]=R32(c->r[3]+0x00000000u); // 80260B04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80260B08
  c->r[31]=c->r[3]|c->r[3]; // 80260B0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80260B10
  if (crb(c,2)) { goto L_80260B24; } // 80260B14
  c->r[4]=c->r[31]+0x00000004u; // 80260B18
  c->r[3]=0u+0x00000000u; // 80260B1C
  c->lr=0x80260B24u; f_8025FB78(c); // 80260B20
L_80260B24:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80260B24
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80260B28
  if (crb(c,2)) { goto L_80260B3C; } // 80260B2C
  c->r[4]=c->r[31]+0x00000034u; // 80260B30
  c->r[3]=0u+0x00000003u; // 80260B34
  c->lr=0x80260B3Cu; f_8025FB78(c); // 80260B38
L_80260B3C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80260B3C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80260B40
  if (crb(c,2)) { goto L_80260B54; } // 80260B44
  c->r[4]=c->r[31]+0x00000064u; // 80260B48
  c->r[3]=0u+0x00000006u; // 80260B4C
  c->lr=0x80260B54u; f_8025FB78(c); // 80260B50
L_80260B54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80260B54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80260B58
  c->lr=c->r[0]; // 80260B5C
  c->r[1]=c->r[1]+0x00000010u; // 80260B60
  return; // 80260B64
}

// fn_80260B68
void f_80260B68(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80260B68
  W32(c->r[3]+0x00000000u,c->r[0]); // 80260B6C
  return; // 80260B70
}

// fn_80260B74
void f_80260B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260B74
  c->r[0]=c->lr; // 80260B78
  cmps(c,0,(int32_t)c->r[3],0); // 80260B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80260B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80260B84
  c->r[31]=c->r[3]|c->r[3]; // 80260B88
  if (crb(c,2)) { goto L_80260B9C; } // 80260B8C
  cmps(c,0,(int32_t)c->r[4],0); // 80260B90
  if (!crb(c,1)) { goto L_80260B9C; } // 80260B94
  c->lr=0x80260B9Cu; f_800D6AD0(c); // 80260B98
L_80260B9C:;
  c->r[3]=c->r[31]|c->r[31]; // 80260B9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80260BA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80260BA4
  c->lr=c->r[0]; // 80260BA8
  c->r[1]=c->r[1]+0x00000010u; // 80260BAC
  return; // 80260BB0
}

// SetLightSetting__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFRCQ34nw4r3g3d12LightSetting
void f_80260BB4(Ctx* __restrict c) {
  trace_call(0x80260BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260BB4
  c->r[0]=c->lr; // 80260BB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80260BBC
  c->r[11]=c->r[1]+0x00000020u; // 80260BC0
  c->lr=0x80260BC8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80260BC4
  c->r[31]=c->r[3]|c->r[3]; // 80260BC8
  c->r[26]=c->r[4]|c->r[4]; // 80260BCC
  c->lr=0x80260BD4u; f_80277438(c); // 80260BD0
  c->r[4]=0u+0x80400000u; // 80260BD4
  c->r[5]=R16(c->r[26]+0x00000000u); // 80260BD8
  c->r[4]=c->r[4]+0x00000AC0u; // 80260BDC
  c->r[3]=c->r[31]|c->r[31]; // 80260BE0
  c->r[0]=R16(c->r[4]+0x00000002u); // 80260BE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80260BE8
  c->r[4]=c->r[4]+c->r[0]; // 80260BEC
  c->r[4]=c->r[4]+0x00000034u; // 80260BF0
  c->lr=0x80260BF8u; f_802775C8(c); // 80260BF4
  c->r[3]=0u+0xFFFFFFFFu; // 80260BF8
  c->r[0]=0u+0x00000000u; // 80260BFC
  W32(c->r[31]+0x00000010u,c->r[3]); // 80260C00
  c->r[27]=0u+0x00000000u; // 80260C04
  c->r[28]=R16(c->r[31]+0x00000000u); // 80260C08
  c->r[26]=0u+0x00000000u; // 80260C0C
  W32(c->r[31]+0x00000014u,c->r[0]); // 80260C10
  c->r[29]=0u+0x00000000u; // 80260C14
  c->r[30]=0u+0x00000001u; // 80260C18
  W32(c->r[31]+0x00000018u,c->r[0]); // 80260C1C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80260C20
  W32(c->r[31]+0x00000020u,c->r[0]); // 80260C24
  W8(c->r[31]+0x0000002Bu,c->r[3]); // 80260C28
  W8(c->r[31]+0x0000002Au,c->r[3]); // 80260C2C
  W8(c->r[31]+0x00000029u,c->r[3]); // 80260C30
  W8(c->r[31]+0x00000028u,c->r[3]); // 80260C34
  W8(c->r[31]+0x00000027u,c->r[3]); // 80260C38
  W8(c->r[31]+0x00000026u,c->r[3]); // 80260C3C
  W8(c->r[31]+0x00000025u,c->r[3]); // 80260C40
  W8(c->r[31]+0x00000024u,c->r[3]); // 80260C44
  goto L_80260C80; // 80260C48
L_80260C4C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80260C4C
  c->r[3]=c->r[0]+c->r[29]; // 80260C50
  c->r[0]=R32(c->r[29]+c->r[0]); // 80260C54
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80260C58
  if (crb(c,2)) { goto L_80260C78; } // 80260C5C
  c->r[4]=c->r[31]+c->r[27]; // 80260C60
  c->r[3]=c->r[3]+0x00000004u; // 80260C64
  W8(c->r[4]+0x00000024u,c->r[26]); // 80260C68
  c->r[4]=((c->r[27])&0x20)?0u:(c->r[30]<<((c->r[27])&31)); // 80260C6C
  c->lr=0x80260C74u; f_801820FC(c); // 80260C70
  c->r[27]=c->r[27]+0x00000001u; // 80260C74
L_80260C78:;
  c->r[29]=c->r[29]+0x00000044u; // 80260C78
  c->r[26]=c->r[26]+0x00000001u; // 80260C7C
L_80260C80:;
  cmpu(c,0,c->r[27],0x00000008u); // 80260C80
  if (!crb(c,0)) { goto L_80260C90; } // 80260C84
  cmpu(c,0,c->r[26],c->r[28]); // 80260C88
  if (crb(c,0)) { IRQCHK(c); goto L_80260C4C; } // 80260C8C
L_80260C90:;
  c->r[11]=c->r[1]+0x00000020u; // 80260C90
  c->lr=0x80260C98u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80260C94
  c->r[0]=R32(c->r[1]+0x00000024u); // 80260C98
  c->lr=c->r[0]; // 80260C9C
  c->r[1]=c->r[1]+0x00000020u; // 80260CA0
  return; // 80260CA4
}

// LoadLightSet__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj
void f_80260CA8(Ctx* __restrict c) {
  trace_call(0x80260CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260CA8
  c->r[0]=c->lr; // 80260CAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80260CB0
  c->r[11]=c->r[1]+0x00000040u; // 80260CB4
  c->lr=0x80260CBCu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80260CB8
  cmps(c,0,(int32_t)c->r[4],0); // 80260CBC
  c->r[20]=c->r[3]|c->r[3]; // 80260CC0
  c->r[21]=c->r[5]|c->r[5]; // 80260CC4
  c->r[22]=c->r[6]|c->r[6]; // 80260CC8
  c->r[23]=c->r[7]|c->r[7]; // 80260CCC
  c->r[24]=c->r[8]|c->r[8]; // 80260CD0
  if (crb(c,0)) { goto L_80260CE0; } // 80260CD4
  cmps(c,0,(int32_t)c->r[4],128); // 80260CD8
  if (crb(c,0)) { goto L_80260D40; } // 80260CDC
L_80260CE0:;
  cmps(c,0,(int32_t)c->r[5],0); // 80260CE0
  if (crb(c,2)) { goto L_80260CF0; } // 80260CE4
  c->r[0]=0u+0x00000000u; // 80260CE8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80260CEC
L_80260CF0:;
  cmps(c,0,(int32_t)c->r[6],0); // 80260CF0
  if (crb(c,2)) { goto L_80260D00; } // 80260CF4
  c->r[0]=0u+0x00000000u; // 80260CF8
  W32(c->r[6]+0x00000000u,c->r[0]); // 80260CFC
L_80260D00:;
  cmps(c,0,(int32_t)c->r[7],0); // 80260D00
  if (crb(c,2)) { goto L_80260D10; } // 80260D04
  c->r[0]=0u+0x00000000u; // 80260D08
  W32(c->r[7]+0x00000000u,c->r[0]); // 80260D0C
L_80260D10:;
  cmps(c,0,(int32_t)c->r[8],0); // 80260D10
  if (crb(c,2)) { goto L_80260D20; } // 80260D14
  c->r[0]=0u+0x00000000u; // 80260D18
  W32(c->r[8]+0x00000000u,c->r[0]); // 80260D1C
L_80260D20:;
  cmps(c,0,(int32_t)c->r[9],0); // 80260D20
  if (crb(c,2)) { goto L_802610A8; } // 80260D24
  c->r[0]=0u+0x000000FFu; // 80260D28
  W8(c->r[9]+0x00000003u,c->r[0]); // 80260D2C
  W8(c->r[9]+0x00000002u,c->r[0]); // 80260D30
  W8(c->r[9]+0x00000001u,c->r[0]); // 80260D34
  W8(c->r[9]+0x00000000u,c->r[0]); // 80260D38
  goto L_802610A8; // 80260D3C
L_80260D40:;
  cmps(c,0,(int32_t)c->r[9],0); // 80260D40
  if (crb(c,2)) { goto L_80260D9C; } // 80260D44
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80260D48
  c->r[10]=c->r[3]+c->r[0]; // 80260D4C
  c->r[0]=R8(c->r[10]+0x00002434u); // 80260D50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80260D54
  if (!crb(c,0)) { goto L_80260D74; } // 80260D58
  c->r[0]=0u+0x000000FFu; // 80260D5C
  W8(c->r[9]+0x00000003u,c->r[0]); // 80260D60
  W8(c->r[9]+0x00000002u,c->r[0]); // 80260D64
  W8(c->r[9]+0x00000001u,c->r[0]); // 80260D68
  W8(c->r[9]+0x00000000u,c->r[0]); // 80260D6C
  goto L_80260D9C; // 80260D70
L_80260D74:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80260D74
  c->r[10]=c->r[3]+c->r[0]; // 80260D78
  c->r[0]=R8(c->r[10]+0x0000222Cu); // 80260D7C
  W8(c->r[9]+0x00000000u,c->r[0]); // 80260D80
  c->r[0]=R8(c->r[10]+0x0000222Du); // 80260D84
  W8(c->r[9]+0x00000001u,c->r[0]); // 80260D88
  c->r[0]=R8(c->r[10]+0x0000222Eu); // 80260D8C
  W8(c->r[9]+0x00000002u,c->r[0]); // 80260D90
  c->r[0]=R8(c->r[10]+0x0000222Fu); // 80260D94
  W8(c->r[9]+0x00000003u,c->r[0]); // 80260D98
L_80260D9C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80260D9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80260DA0
  if (!crb(c,2)) { goto L_80260DEC; } // 80260DA4
  cmps(c,0,(int32_t)c->r[5],0); // 80260DA8
  if (crb(c,2)) { goto L_80260DB8; } // 80260DAC
  c->r[0]=R32(c->r[3]+0x00000014u); // 80260DB0
  W32(c->r[5]+0x00000000u,c->r[0]); // 80260DB4
L_80260DB8:;
  cmps(c,0,(int32_t)c->r[6],0); // 80260DB8
  if (crb(c,2)) { goto L_80260DC8; } // 80260DBC
  c->r[0]=R32(c->r[3]+0x00000018u); // 80260DC0
  W32(c->r[6]+0x00000000u,c->r[0]); // 80260DC4
L_80260DC8:;
  cmps(c,0,(int32_t)c->r[7],0); // 80260DC8
  if (crb(c,2)) { goto L_80260DD8; } // 80260DCC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80260DD0
  W32(c->r[7]+0x00000000u,c->r[0]); // 80260DD4
L_80260DD8:;
  cmps(c,0,(int32_t)c->r[8],0); // 80260DD8
  if (crb(c,2)) { goto L_802610A8; } // 80260DDC
  c->r[0]=R32(c->r[3]+0x00000020u); // 80260DE0
  W32(c->r[8]+0x00000000u,c->r[0]); // 80260DE4
  goto L_802610A8; // 80260DE8
L_80260DEC:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80260DEC
  c->r[0]=0u+0x00000000u; // 80260DF0
  W32(c->r[3]+0x00000014u,c->r[0]); // 80260DF4
  c->r[27]=0u+0x00000000u; // 80260DF8
  c->r[31]=0u+0x00000001u; // 80260DFC
  c->r[5]=c->r[3]+c->r[5]; // 80260E00
  c->r[28]=c->r[5]+0x0000242Cu; // 80260E04
  W32(c->r[3]+0x00000018u,c->r[0]); // 80260E08
  c->r[18]=c->r[28]|c->r[28]; // 80260E0C
  c->r[19]=0u+0x00000002u; // 80260E10
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80260E14
  W32(c->r[3]+0x00000020u,c->r[0]); // 80260E18
  W32(c->r[3]+0x00000010u,c->r[4]); // 80260E1C
L_80260E20:;
  c->r[26]=R8(c->r[18]+0x00000000u); // 80260E20
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[26]; cr0(c,c->r[4]); // 80260E24
  if (crb(c,0)) { goto L_80261058; } // 80260E28
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 80260E2C
  c->r[29]=c->r[20]+c->r[0]; // 80260E30
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 80260E34
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80260E38
  if (crb(c,2)) { goto L_80261058; } // 80260E3C
  c->r[5]=c->r[20]+0x00000024u; // 80260E40
  c->r[3]=c->r[20]+0x0000002Cu; // 80260E44
  goto L_80260E50; // 80260E48
L_80260E4C:;
  c->r[5]=c->r[5]+0x00000001u; // 80260E4C
L_80260E50:;
  cmpu(c,0,c->r[5],c->r[3]); // 80260E50
  if (crb(c,2)) { goto L_80260E68; } // 80260E54
  c->r[0]=R8(c->r[5]+0x00000000u); // 80260E58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80260E5C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80260E60
  if (!crb(c,2)) { IRQCHK(c); goto L_80260E4C; } // 80260E64
L_80260E68:;
  c->r[3]=c->r[20]+0x0000002Cu; // 80260E68
  cmpu(c,0,c->r[5],c->r[3]); // 80260E6C
  if (!crb(c,2)) { goto L_80260FE4; } // 80260E70
  c->r[4]=R32(c->r[13]+0xFFFF9720u); // 80260E74
  c->r[30]=c->r[20]+0x00000024u; // 80260E78
  goto L_80260E84; // 80260E7C
L_80260E80:;
  c->r[30]=c->r[30]+0x00000001u; // 80260E80
L_80260E84:;
  cmpu(c,0,c->r[30],c->r[3]); // 80260E84
  if (crb(c,2)) { goto L_80260E9C; } // 80260E88
  c->r[0]=R8(c->r[30]+0x00000000u); // 80260E8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80260E90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80260E94
  if (!crb(c,2)) { IRQCHK(c); goto L_80260E80; } // 80260E98
L_80260E9C:;
  c->r[0]=c->r[20]+0x0000002Cu; // 80260E9C
  cmpu(c,0,c->r[30],c->r[0]); // 80260EA0
  if (crb(c,2)) { goto L_80260EC8; } // 80260EA4
  c->r[0]=c->r[20]+0x00000024u; // 80260EA8
  c->r[3]=c->r[29]+0x00000030u; // 80260EAC
  c->r[0]=c->r[30]-c->r[0]; // 80260EB0
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 80260EB4
  c->r[4]=c->r[25]|c->r[25]; // 80260EB8
  c->lr=0x80260EC0u; f_801820FC(c); // 80260EBC
  W8(c->r[30]+0x00000000u,c->r[26]); // 80260EC0
  goto L_80260FF0; // 80260EC4
L_80260EC8:;
  c->r[4]=c->r[28]+0x00000008u; // 80260EC8
  c->r[30]=0u+0x00000000u; // 80260ECC
  c->ctr=c->r[19]; // 80260ED0
L_80260ED4:;
  c->r[5]=c->r[28]|c->r[28]; // 80260ED4
  c->r[6]=c->r[20]+c->r[30]; // 80260ED8
  goto L_80260EE4; // 80260EDC
L_80260EE0:;
  c->r[5]=c->r[5]+0x00000001u; // 80260EE0
L_80260EE4:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260EE4
  if (crb(c,2)) { goto L_80260F04; } // 80260EE8
  c->r[3]=R8(c->r[5]+0x00000000u); // 80260EEC
  c->r[0]=R8(c->r[6]+0x00000024u); // 80260EF0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80260EF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80260EF8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80260EFC
  if (!crb(c,2)) { IRQCHK(c); goto L_80260EE0; } // 80260F00
L_80260F04:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260F04
  if (crb(c,2)) { goto L_80260FC8; } // 80260F08
  c->r[30]=c->r[30]+0x00000001u; // 80260F0C
  c->r[5]=c->r[28]|c->r[28]; // 80260F10
  c->r[6]=c->r[20]+c->r[30]; // 80260F14
  goto L_80260F20; // 80260F18
L_80260F1C:;
  c->r[5]=c->r[5]+0x00000001u; // 80260F1C
L_80260F20:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260F20
  if (crb(c,2)) { goto L_80260F40; } // 80260F24
  c->r[3]=R8(c->r[5]+0x00000000u); // 80260F28
  c->r[0]=R8(c->r[6]+0x00000024u); // 80260F2C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80260F30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80260F34
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80260F38
  if (!crb(c,2)) { IRQCHK(c); goto L_80260F1C; } // 80260F3C
L_80260F40:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260F40
  if (crb(c,2)) { goto L_80260FC8; } // 80260F44
  c->r[30]=c->r[30]+0x00000001u; // 80260F48
  c->r[5]=c->r[28]|c->r[28]; // 80260F4C
  c->r[6]=c->r[20]+c->r[30]; // 80260F50
  goto L_80260F5C; // 80260F54
L_80260F58:;
  c->r[5]=c->r[5]+0x00000001u; // 80260F58
L_80260F5C:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260F5C
  if (crb(c,2)) { goto L_80260F7C; } // 80260F60
  c->r[3]=R8(c->r[5]+0x00000000u); // 80260F64
  c->r[0]=R8(c->r[6]+0x00000024u); // 80260F68
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80260F6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80260F70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80260F74
  if (!crb(c,2)) { IRQCHK(c); goto L_80260F58; } // 80260F78
L_80260F7C:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260F7C
  if (crb(c,2)) { goto L_80260FC8; } // 80260F80
  c->r[30]=c->r[30]+0x00000001u; // 80260F84
  c->r[5]=c->r[28]|c->r[28]; // 80260F88
  c->r[6]=c->r[20]+c->r[30]; // 80260F8C
  goto L_80260F98; // 80260F90
L_80260F94:;
  c->r[5]=c->r[5]+0x00000001u; // 80260F94
L_80260F98:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260F98
  if (crb(c,2)) { goto L_80260FB8; } // 80260F9C
  c->r[3]=R8(c->r[5]+0x00000000u); // 80260FA0
  c->r[0]=R8(c->r[6]+0x00000024u); // 80260FA4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80260FA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80260FAC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80260FB0
  if (!crb(c,2)) { IRQCHK(c); goto L_80260F94; } // 80260FB4
L_80260FB8:;
  cmpu(c,0,c->r[5],c->r[4]); // 80260FB8
  if (crb(c,2)) { goto L_80260FC8; } // 80260FBC
  c->r[30]=c->r[30]+0x00000001u; // 80260FC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80260ED4; } // 80260FC4
L_80260FC8:;
  c->r[25]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 80260FC8
  c->r[3]=c->r[29]+0x00000030u; // 80260FCC
  c->r[4]=c->r[25]|c->r[25]; // 80260FD0
  c->lr=0x80260FD8u; f_801820FC(c); // 80260FD4
  c->r[3]=c->r[20]+c->r[30]; // 80260FD8
  W8(c->r[3]+0x00000024u,c->r[26]); // 80260FDC
  goto L_80260FF0; // 80260FE0
L_80260FE4:;
  c->r[0]=c->r[20]+0x00000024u; // 80260FE4
  c->r[0]=c->r[5]-c->r[0]; // 80260FE8
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 80260FEC
L_80260FF0:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 80260FF0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80260FF4
  if (crb(c,2)) { goto L_8026102C; } // 80260FF8
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80260FFC
  if (!crb(c,2)) { goto L_80261010; } // 80261000
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 80261004
  c->r[0]=c->r[0]|c->r[25]; // 80261008
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 8026100C
L_80261010:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 80261010
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80261014
  if (!crb(c,2)) { goto L_80261058; } // 80261018
  c->r[0]=R32(c->r[20]+0x00000020u); // 8026101C
  c->r[0]=c->r[0]|c->r[25]; // 80261020
  W32(c->r[20]+0x00000020u,c->r[0]); // 80261024
  goto L_80261058; // 80261028
L_8026102C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8026102C
  if (!crb(c,2)) { goto L_80261040; } // 80261030
  c->r[0]=R32(c->r[20]+0x00000014u); // 80261034
  c->r[0]=c->r[0]|c->r[25]; // 80261038
  W32(c->r[20]+0x00000014u,c->r[0]); // 8026103C
L_80261040:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 80261040
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80261044
  if (!crb(c,2)) { goto L_80261058; } // 80261048
  c->r[0]=R32(c->r[20]+0x00000018u); // 8026104C
  c->r[0]=c->r[0]|c->r[25]; // 80261050
  W32(c->r[20]+0x00000018u,c->r[0]); // 80261054
L_80261058:;
  c->r[27]=c->r[27]+0x00000001u; // 80261058
  c->r[18]=c->r[18]+0x00000001u; // 8026105C
  cmpu(c,0,c->r[27],0x00000008u); // 80261060
  if (crb(c,0)) { IRQCHK(c); goto L_80260E20; } // 80261064
  cmps(c,0,(int32_t)c->r[21],0); // 80261068
  if (crb(c,2)) { goto L_80261078; } // 8026106C
  c->r[0]=R32(c->r[20]+0x00000014u); // 80261070
  W32(c->r[21]+0x00000000u,c->r[0]); // 80261074
L_80261078:;
  cmps(c,0,(int32_t)c->r[22],0); // 80261078
  if (crb(c,2)) { goto L_80261088; } // 8026107C
  c->r[0]=R32(c->r[20]+0x00000018u); // 80261080
  W32(c->r[22]+0x00000000u,c->r[0]); // 80261084
L_80261088:;
  cmps(c,0,(int32_t)c->r[23],0); // 80261088
  if (crb(c,2)) { goto L_80261098; } // 8026108C
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 80261090
  W32(c->r[23]+0x00000000u,c->r[0]); // 80261094
L_80261098:;
  cmps(c,0,(int32_t)c->r[24],0); // 80261098
  if (crb(c,2)) { goto L_802610A8; } // 8026109C
  c->r[0]=R32(c->r[20]+0x00000020u); // 802610A0
  W32(c->r[24]+0x00000000u,c->r[0]); // 802610A4
L_802610A8:;
  c->r[11]=c->r[1]+0x00000040u; // 802610A8
  c->lr=0x802610B0u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802610AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 802610B0
  c->lr=c->r[0]; // 802610B4
  c->r[1]=c->r[1]+0x00000040u; // 802610B8
  return; // 802610BC
}

// __ct__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@14CameraMtxStateFv
void f_802610C0(Ctx* __restrict c) {
  trace_call(0x802610C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802610C0
  c->r[0]=c->lr; // 802610C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802610C8
  c->r[11]=c->r[1]+0x00000020u; // 802610CC
  c->lr=0x802610D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802610D0
  c->r[0]=0u+0x00000000u; // 802610D4
  c->r[26]=c->r[3]|c->r[3]; // 802610D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 802610DC
  W16(c->r[3]+0x00000002u,c->r[0]); // 802610E0
  c->r[3]=c->r[3]+0x00000004u; // 802610E4
  c->lr=0x802610ECu; f_80167F98(c); // 802610E8
  c->r[31]=c->r[26]+0x00000034u; // 802610EC
  c->r[30]=c->r[26]+0x00000634u; // 802610F0
  c->r[29]=c->r[26]+0x00000E34u; // 802610F4
  c->r[28]=c->r[26]+0x00001434u; // 802610F8
  c->r[27]=0u+0x00000000u; // 802610FC
L_80261100:;
  c->r[3]=c->r[31]|c->r[31]; // 80261100
  c->lr=0x80261108u; f_80167F98(c); // 80261104
  c->r[3]=c->r[30]|c->r[30]; // 80261108
  c->lr=0x80261110u; f_80284CF0(c); // 8026110C
  c->r[3]=c->r[29]|c->r[29]; // 80261110
  c->lr=0x80261118u; f_80167F98(c); // 80261114
  c->r[3]=c->r[28]|c->r[28]; // 80261118
  c->lr=0x80261120u; f_80167F98(c); // 8026111C
  c->r[27]=c->r[27]+0x00000001u; // 80261120
  c->r[30]=c->r[30]+0x00000040u; // 80261124
  cmpu(c,0,c->r[27],0x00000020u); // 80261128
  c->r[29]=c->r[29]+0x00000030u; // 8026112C
  c->r[28]=c->r[28]+0x00000030u; // 80261130
  c->r[31]=c->r[31]+0x00000030u; // 80261134
  if (crb(c,0)) { IRQCHK(c); goto L_80261100; } // 80261138
  c->r[11]=c->r[1]+0x00000020u; // 8026113C
  c->r[3]=c->r[26]|c->r[26]; // 80261140
  c->lr=0x80261148u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80261144
  c->r[0]=R32(c->r[1]+0x00000024u); // 80261148
  c->lr=c->r[0]; // 8026114C
  c->r[1]=c->r[1]+0x00000020u; // 80261150
  return; // 80261154
}

// LoadResMatMisc__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatMisc
void f_80261158(Ctx* __restrict c) {
  trace_call(0x80261158u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261158
  c->r[0]=c->lr; // 8026115C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80261160
  c->r[0]=R32(c->r[3]+0x00000000u); // 80261164
  cmps(c,0,(int32_t)c->r[0],0); // 80261168
  if (crb(c,2)) { goto L_802611B8; } // 8026116C
  c->lr=0x80261174u; f_8025369C(c); // 80261170
  c->r[0]=R32(c->r[13]+0xFFFFA408u); // 80261174
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80261178
  if (crb(c,2)) { goto L_80261194; } // 8026117C
  c->r[4]=c->r[13]+0xFFFFA408u; // 80261180
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80261184
  c->r[4]=R8(c->r[4]+0x00000004u); // 80261188
  cmpu(c,0,c->r[4],c->r[0]); // 8026118C
  if (crb(c,2)) { goto L_802611B8; } // 80261190
L_80261194:;
  c->r[0]=R32(c->r[13]+0xFFFFA408u); // 80261194
  c->r[4]=c->r[13]+0xFFFFA408u; // 80261198
  W8(c->r[4]+0x00000004u,c->r[3]); // 8026119C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 802611A0
  c->r[0]=c->r[0]|0x00000001u; // 802611A4
  W32(c->r[13]+0xFFFFA408u,c->r[0]); // 802611A8
  c->lr=0x802611B0u; f_8018441C(c); // 802611AC
  c->r[0]=0u+0x00000001u; // 802611B0
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 802611B4
L_802611B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802611B8
  c->lr=c->r[0]; // 802611BC
  c->r[1]=c->r[1]+0x00000010u; // 802611C0
  return; // 802611C4
}

// LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
void f_802611C8(Ctx* __restrict c) {
  trace_call(0x802611C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802611C8
  c->r[0]=c->lr; // 802611CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802611D0
  c->r[11]=c->r[1]+0x00000030u; // 802611D4
  c->lr=0x802611DCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802611D8
  c->r[4]=R32(c->r[3]+0x00000000u); // 802611DC
  c->r[0]=0u-c->r[4]; // 802611E0
  c->r[0]=c->r[0]|c->r[4]; // 802611E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802611E8
  if (crb(c,2)) { goto L_80261418; } // 802611EC
  c->r[3]=0u+0x80400000u; // 802611F0
  c->r[25]=0u+0x80400000u; // 802611F4
  W32(c->r[1]+0x00000008u,c->r[4]); // 802611F8
  c->r[31]=c->r[3]+0xFFFFD0C0u; // 802611FC
  c->r[26]=c->r[25]+0xFFFFD04Cu; // 80261200
  c->r[28]=0u+0x00000000u; // 80261204
  c->r[27]=0u+0x00000000u; // 80261208
  c->r[30]=0u+0x00000001u; // 8026120C
L_80261210:;
  c->r[4]=c->r[28]|c->r[28]; // 80261210
  c->r[3]=c->r[1]+0x00000008u; // 80261214
  c->lr=0x8026121Cu; f_80253220(c); // 80261218
  cmps(c,0,(int32_t)c->r[3],0); // 8026121C
  if (crb(c,2)) { goto L_80261400; } // 80261220
  c->r[4]=c->r[28]|c->r[28]; // 80261224
  c->r[3]=c->r[1]+0x00000008u; // 80261228
  c->lr=0x80261230u; f_802531B8(c); // 8026122C
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[30]<<((c->r[28])&31)); // 80261230
  c->r[4]=R8(c->r[31]+0x00000100u); // 80261234
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80261238
  c->r[29]=c->r[3]|c->r[3]; // 8026123C
  c->r[4]=c->r[4]&c->r[0]; cr0(c,c->r[4]); // 80261240
  if (crb(c,2)) { goto L_8026136C; } // 80261244
  c->r[9]=R32(c->r[3]+0x00000000u); // 80261248
  c->r[4]=0u+0x00000000u; // 8026124C
  c->r[8]=R32(c->r[31]+c->r[27]); // 80261250
  c->r[5]=0u+0x00000000u; // 80261254
  c->r[6]=0u+0x00000000u; // 80261258
  c->r[7]=0u+0x00000000u; // 8026125C
  cmpu(c,0,c->r[9],c->r[8]); // 80261260
  c->r[10]=0u+0x00000000u; // 80261264
  c->r[11]=0u+0x00000000u; // 80261268
  c->r[12]=0u+0x00000000u; // 8026126C
  if (!crb(c,2)) { goto L_8026128C; } // 80261270
  c->r[8]=c->r[31]+c->r[27]; // 80261274
  c->r[9]=R32(c->r[3]+0x00000004u); // 80261278
  c->r[8]=R32(c->r[8]+0x00000004u); // 8026127C
  cmpu(c,0,c->r[9],c->r[8]); // 80261280
  if (!crb(c,2)) { goto L_8026128C; } // 80261284
  c->r[12]=0u+0x00000001u; // 80261288
L_8026128C:;
  cmps(c,0,(int32_t)c->r[12],0); // 8026128C
  if (crb(c,2)) { goto L_802612B0; } // 80261290
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80261294
  c->r[9]=R32(c->r[3]+0x00000008u); // 80261298
  c->r[8]=c->r[31]+c->r[8]; // 8026129C
  c->r[8]=R32(c->r[8]+0x00000008u); // 802612A0
  cmpu(c,0,c->r[9],c->r[8]); // 802612A4
  if (!crb(c,2)) { goto L_802612B0; } // 802612A8
  c->r[11]=0u+0x00000001u; // 802612AC
L_802612B0:;
  cmps(c,0,(int32_t)c->r[11],0); // 802612B0
  if (crb(c,2)) { goto L_802612D4; } // 802612B4
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802612B8
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 802612BC
  c->r[8]=c->r[31]+c->r[8]; // 802612C0
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 802612C4
  cmpu(c,0,c->r[9],c->r[8]); // 802612C8
  if (!crb(c,2)) { goto L_802612D4; } // 802612CC
  c->r[10]=0u+0x00000001u; // 802612D0
L_802612D4:;
  cmps(c,0,(int32_t)c->r[10],0); // 802612D4
  if (crb(c,2)) { goto L_802612F8; } // 802612D8
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802612DC
  c->r[9]=R32(c->r[3]+0x00000010u); // 802612E0
  c->r[8]=c->r[31]+c->r[8]; // 802612E4
  c->r[8]=R32(c->r[8]+0x00000010u); // 802612E8
  cmpu(c,0,c->r[9],c->r[8]); // 802612EC
  if (!crb(c,2)) { goto L_802612F8; } // 802612F0
  c->r[7]=0u+0x00000001u; // 802612F4
L_802612F8:;
  cmps(c,0,(int32_t)c->r[7],0); // 802612F8
  if (crb(c,2)) { goto L_8026131C; } // 802612FC
  c->r[7]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80261300
  c->r[8]=R32(c->r[3]+0x00000014u); // 80261304
  c->r[7]=c->r[31]+c->r[7]; // 80261308
  c->r[7]=R32(c->r[7]+0x00000014u); // 8026130C
  cmpu(c,0,c->r[8],c->r[7]); // 80261310
  if (!crb(c,2)) { goto L_8026131C; } // 80261314
  c->r[6]=0u+0x00000001u; // 80261318
L_8026131C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8026131C
  if (crb(c,2)) { goto L_80261340; } // 80261320
  c->r[6]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80261324
  c->r[7]=R32(c->r[3]+0x00000018u); // 80261328
  c->r[6]=c->r[31]+c->r[6]; // 8026132C
  c->r[6]=R32(c->r[6]+0x00000018u); // 80261330
  cmpu(c,0,c->r[7],c->r[6]); // 80261334
  if (!crb(c,2)) { goto L_80261340; } // 80261338
  c->r[5]=0u+0x00000001u; // 8026133C
L_80261340:;
  cmps(c,0,(int32_t)c->r[5],0); // 80261340
  if (crb(c,2)) { goto L_80261364; } // 80261344
  c->r[5]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80261348
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8026134C
  c->r[5]=c->r[31]+c->r[5]; // 80261350
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80261354
  cmpu(c,0,c->r[6],c->r[5]); // 80261358
  if (!crb(c,2)) { goto L_80261364; } // 8026135C
  c->r[4]=0u+0x00000001u; // 80261360
L_80261364:;
  cmps(c,0,(int32_t)c->r[4],0); // 80261364
  if (!crb(c,2)) { goto L_80261400; } // 80261368
L_8026136C:;
  c->r[5]=R8(c->r[31]+0x00000100u); // 8026136C
  c->r[4]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80261370
  c->r[6]=c->r[31]+c->r[4]; // 80261374
  c->r[0]=c->r[5]|c->r[0]; // 80261378
  c->r[4]=c->r[28]|c->r[28]; // 8026137C
  W8(c->r[31]+0x00000100u,c->r[0]); // 80261380
  c->r[5]=R32(c->r[3]+0x00000000u); // 80261384
  c->r[0]=R32(c->r[3]+0x00000004u); // 80261388
  W32(c->r[6]+0x00000000u,c->r[5]); // 8026138C
  W32(c->r[6]+0x00000004u,c->r[0]); // 80261390
  c->r[5]=R32(c->r[3]+0x00000008u); // 80261394
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80261398
  W32(c->r[6]+0x00000008u,c->r[5]); // 8026139C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 802613A0
  c->r[5]=R32(c->r[3]+0x00000010u); // 802613A4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802613A8
  W32(c->r[6]+0x00000010u,c->r[5]); // 802613AC
  W32(c->r[6]+0x00000014u,c->r[0]); // 802613B0
  c->r[5]=R32(c->r[3]+0x00000018u); // 802613B4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802613B8
  c->r[3]=c->r[29]|c->r[29]; // 802613BC
  W32(c->r[6]+0x00000018u,c->r[5]); // 802613C0
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 802613C4
  c->lr=0x802613CCu; f_80182C24(c); // 802613C8
  c->r[3]=c->r[29]|c->r[29]; // 802613CC
  c->lr=0x802613D4u; f_80182994(c); // 802613D0
  c->r[24]=c->r[3]|c->r[3]; // 802613D4
  c->r[3]=c->r[29]|c->r[29]; // 802613D8
  c->lr=0x802613E0u; f_80182980(c); // 802613DC
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 802613E0
  c->r[4]=c->r[26]+c->r[0]; // 802613E4
  W16(c->r[4]+0x00000004u,c->r[3]); // 802613E8
  W16(c->r[4]+0x00000006u,c->r[24]); // 802613EC
  c->r[0]=R32(c->r[25]+0xFFFFD04Cu); // 802613F0
  c->r[0]=c->r[0]|0x00000002u; // 802613F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802613F8
  W32(c->r[25]+0xFFFFD04Cu,c->r[0]); // 802613FC
L_80261400:;
  c->r[28]=c->r[28]+0x00000001u; // 80261400
  c->r[27]=c->r[27]+0x00000020u; // 80261404
  cmpu(c,0,c->r[28],0x00000008u); // 80261408
  if (crb(c,0)) { IRQCHK(c); goto L_80261210; } // 8026140C
  c->r[0]=0u+0x00000001u; // 80261410
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 80261414
L_80261418:;
  c->r[11]=c->r[1]+0x00000030u; // 80261418
  c->lr=0x80261420u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026141C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80261420
  c->lr=c->r[0]; // 80261424
  c->r[1]=c->r[1]+0x00000030u; // 80261428
  return; // 8026142C
}

// LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
void f_80261430(Ctx* __restrict c) {
  trace_call(0x80261430u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261430
  c->r[0]=c->lr; // 80261434
  W32(c->r[1]+0x00000034u,c->r[0]); // 80261438
  c->r[11]=c->r[1]+0x00000030u; // 8026143C
  c->lr=0x80261444u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80261440
  c->r[3]=R32(c->r[3]+0x00000000u); // 80261444
  c->r[0]=0u-c->r[3]; // 80261448
  c->r[0]=c->r[0]|c->r[3]; // 8026144C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80261450
  if (crb(c,2)) { goto L_80261564; } // 80261454
  c->r[27]=0u+0x80400000u; // 80261458
  c->r[28]=0u+0x80400000u; // 8026145C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80261460
  c->r[27]=c->r[27]+0xFFFFD1E0u; // 80261464
  c->r[28]=c->r[28]+0xFFFFD0C0u; // 80261468
  c->r[30]=0u+0x00000000u; // 8026146C
  c->r[29]=0u+0x00000000u; // 80261470
  c->r[31]=0u+0x00000001u; // 80261474
L_80261478:;
  c->r[4]=c->r[30]|c->r[30]; // 80261478
  c->r[3]=c->r[1]+0x00000008u; // 8026147C
  c->lr=0x80261484u; f_80253388(c); // 80261480
  cmps(c,0,(int32_t)c->r[3],0); // 80261484
  if (crb(c,2)) { goto L_8026154C; } // 80261488
  c->r[4]=c->r[30]|c->r[30]; // 8026148C
  c->r[3]=c->r[1]+0x00000008u; // 80261490
  c->lr=0x80261498u; f_80253320(c); // 80261494
  c->r[4]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 80261498
  c->r[0]=R16(c->r[27]+0x00000060u); // 8026149C
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 802614A0
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 802614A4
  if (crb(c,2)) { goto L_80261508; } // 802614A8
  c->r[4]=R32(c->r[3]+0x00000000u); // 802614AC
  c->r[7]=0u+0x00000000u; // 802614B0
  c->r[0]=R32(c->r[27]+c->r[29]); // 802614B4
  c->r[8]=0u+0x00000000u; // 802614B8
  cmpu(c,0,c->r[4],c->r[0]); // 802614BC
  if (!crb(c,2)) { goto L_802614DC; } // 802614C0
  c->r[4]=c->r[27]+c->r[29]; // 802614C4
  c->r[5]=R32(c->r[3]+0x00000004u); // 802614C8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802614CC
  cmpu(c,0,c->r[5],c->r[0]); // 802614D0
  if (!crb(c,2)) { goto L_802614DC; } // 802614D4
  c->r[8]=0u+0x00000001u; // 802614D8
L_802614DC:;
  cmps(c,0,(int32_t)c->r[8],0); // 802614DC
  if (crb(c,2)) { goto L_80261500; } // 802614E0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 802614E4
  c->r[5]=R32(c->r[3]+0x00000008u); // 802614E8
  c->r[4]=c->r[27]+c->r[0]; // 802614EC
  c->r[0]=R32(c->r[4]+0x00000008u); // 802614F0
  cmpu(c,0,c->r[5],c->r[0]); // 802614F4
  if (!crb(c,2)) { goto L_80261500; } // 802614F8
  c->r[7]=0u+0x00000001u; // 802614FC
L_80261500:;
  cmps(c,0,(int32_t)c->r[7],0); // 80261500
  if (!crb(c,2)) { goto L_8026154C; } // 80261504
L_80261508:;
  c->r[5]=R16(c->r[27]+0x00000060u); // 80261508
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 8026150C
  c->r[4]=c->r[30]|c->r[30]; // 80261510
  c->r[5]=c->r[5]|c->r[6]; // 80261514
  W16(c->r[27]+0x00000060u,c->r[5]); // 80261518
  c->r[6]=c->r[27]+c->r[0]; // 8026151C
  c->r[5]=R32(c->r[3]+0x00000000u); // 80261520
  c->r[0]=R32(c->r[3]+0x00000004u); // 80261524
  W32(c->r[6]+0x00000000u,c->r[5]); // 80261528
  W32(c->r[6]+0x00000004u,c->r[0]); // 8026152C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80261530
  W32(c->r[6]+0x00000008u,c->r[0]); // 80261534
  c->lr=0x8026153Cu; f_80182CA0(c); // 80261538
  c->r[3]=R8(c->r[28]+0x00000100u); // 8026153C
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 80261540
  c->r[0]=c->r[3]&~c->r[0]; // 80261544
  W8(c->r[28]+0x00000100u,c->r[0]); // 80261548
L_8026154C:;
  c->r[30]=c->r[30]+0x00000001u; // 8026154C
  c->r[29]=c->r[29]+0x0000000Cu; // 80261550
  cmpu(c,0,c->r[30],0x00000008u); // 80261554
  if (crb(c,0)) { IRQCHK(c); goto L_80261478; } // 80261558
  c->r[0]=0u+0x00000001u; // 8026155C
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 80261560
L_80261564:;
  c->r[11]=c->r[1]+0x00000030u; // 80261564
  c->lr=0x8026156Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80261568
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026156C
  c->lr=c->r[0]; // 80261570
  c->r[1]=c->r[1]+0x00000030u; // 80261574
  return; // 80261578
}

// LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode
void f_8026157C(Ctx* __restrict c) {
  trace_call(0x8026157Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8026157C
  cmps(c,0,(int32_t)c->r[3],0); // 80261580
  if (crb(c,2)) return; // 80261584
  c->r[4]=0u+0x80400000u; // 80261588
  c->r[4]=R8(c->r[4]+0xFFFFD040u); // 8026158C
  if (crb(c,2)) { goto L_8026159C; } // 80261590
  c->r[0]=R8(c->r[3]+0x00000000u); // 80261594
  goto L_802615A0; // 80261598
L_8026159C:;
  c->r[0]=0u+0x00000000u; // 8026159C
L_802615A0:;
  cmpu(c,0,c->r[4],c->r[0]); // 802615A0
  if (crb(c,2)) { goto L_802615D4; } // 802615A4
  cmps(c,0,(int32_t)c->r[3],0); // 802615A8
  if (crb(c,2)) { goto L_802615B8; } // 802615AC
  c->r[0]=R8(c->r[3]+0x00000000u); // 802615B0
  goto L_802615BC; // 802615B4
L_802615B8:;
  c->r[0]=0u+0x00000000u; // 802615B8
L_802615BC:;
  c->r[5]=0u+0x80400000u; // 802615BC
  c->r[4]=c->r[5]+0xFFFFD040u; // 802615C0
  W8(c->r[5]+0xFFFFD040u,c->r[0]); // 802615C4
  c->r[0]=R32(c->r[4]+0x00000008u); // 802615C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802615CC
  W32(c->r[4]+0x00000008u,c->r[0]); // 802615D0
L_802615D4:;
  c->r[4]=0u+0x80400000u; // 802615D4
  cmps(c,0,(int32_t)c->r[3],0); // 802615D8
  c->r[4]=c->r[4]+0xFFFFD040u; // 802615DC
  c->r[4]=R8(c->r[4]+0x00000001u); // 802615E0
  if (crb(c,2)) { goto L_802615F0; } // 802615E4
  c->r[0]=R8(c->r[3]+0x00000001u); // 802615E8
  goto L_802615F4; // 802615EC
L_802615F0:;
  c->r[0]=0u+0x00000000u; // 802615F0
L_802615F4:;
  cmpu(c,0,c->r[4],c->r[0]); // 802615F4
  if (crb(c,2)) { goto L_80261628; } // 802615F8
  cmps(c,0,(int32_t)c->r[3],0); // 802615FC
  if (crb(c,2)) { goto L_8026160C; } // 80261600
  c->r[5]=R8(c->r[3]+0x00000001u); // 80261604
  goto L_80261610; // 80261608
L_8026160C:;
  c->r[5]=0u+0x00000000u; // 8026160C
L_80261610:;
  c->r[4]=0u+0x80400000u; // 80261610
  c->r[4]=c->r[4]+0xFFFFD040u; // 80261614
  c->r[0]=R32(c->r[4]+0x00000008u); // 80261618
  W8(c->r[4]+0x00000001u,c->r[5]); // 8026161C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80261620
  W32(c->r[4]+0x00000008u,c->r[0]); // 80261624
L_80261628:;
  c->r[4]=0u+0x80400000u; // 80261628
  cmps(c,0,(int32_t)c->r[3],0); // 8026162C
  c->r[4]=c->r[4]+0xFFFFD040u; // 80261630
  c->r[4]=R8(c->r[4]+0x00000002u); // 80261634
  if (crb(c,2)) { goto L_80261644; } // 80261638
  c->r[0]=R8(c->r[3]+0x00000002u); // 8026163C
  goto L_80261648; // 80261640
L_80261644:;
  c->r[0]=0u+0x00000000u; // 80261644
L_80261648:;
  cmpu(c,0,c->r[4],c->r[0]); // 80261648
  if (crb(c,2)) { goto L_8026167C; } // 8026164C
  cmps(c,0,(int32_t)c->r[3],0); // 80261650
  if (crb(c,2)) { goto L_80261660; } // 80261654
  c->r[5]=R8(c->r[3]+0x00000002u); // 80261658
  goto L_80261664; // 8026165C
L_80261660:;
  c->r[5]=0u+0x00000000u; // 80261660
L_80261664:;
  c->r[4]=0u+0x80400000u; // 80261664
  c->r[4]=c->r[4]+0xFFFFD040u; // 80261668
  c->r[0]=R32(c->r[4]+0x00000008u); // 8026166C
  W8(c->r[4]+0x00000002u,c->r[5]); // 80261670
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80261674
  W32(c->r[4]+0x00000008u,c->r[0]); // 80261678
L_8026167C:;
  c->r[4]=0u+0x80400000u; // 8026167C
  cmps(c,0,(int32_t)c->r[3],0); // 80261680
  c->r[4]=c->r[4]+0xFFFFD040u; // 80261684
  c->r[4]=R8(c->r[4]+0x00000003u); // 80261688
  if (crb(c,2)) { goto L_80261698; } // 8026168C
  c->r[0]=R8(c->r[3]+0x00000003u); // 80261690
  goto L_8026169C; // 80261694
L_80261698:;
  c->r[0]=0u+0x00000000u; // 80261698
L_8026169C:;
  cmpu(c,0,c->r[4],c->r[0]); // 8026169C
  if (crb(c,2)) { goto L_802616D0; } // 802616A0
  cmps(c,0,(int32_t)c->r[3],0); // 802616A4
  if (crb(c,2)) { goto L_802616B4; } // 802616A8
  c->r[5]=R8(c->r[3]+0x00000003u); // 802616AC
  goto L_802616B8; // 802616B0
L_802616B4:;
  c->r[5]=0u+0x00000000u; // 802616B4
L_802616B8:;
  c->r[4]=0u+0x80400000u; // 802616B8
  c->r[4]=c->r[4]+0xFFFFD040u; // 802616BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 802616C0
  W8(c->r[4]+0x00000003u,c->r[5]); // 802616C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802616C8
  W32(c->r[4]+0x00000008u,c->r[0]); // 802616CC
L_802616D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802616D0
  if (crb(c,2)) { goto L_802616E0; } // 802616D4
  c->r[5]=R32(c->r[3]+0x00000004u); // 802616D8
  goto L_802616E4; // 802616DC
L_802616E0:;
  c->r[5]=0u+0x00000003u; // 802616E0
L_802616E4:;
  c->r[4]=0u+0x80400000u; // 802616E4
  c->r[4]=c->r[4]+0xFFFFD040u; // 802616E8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802616EC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 802616F0
  if (crb(c,2)) { goto L_80261724; } // 802616F4
  cmps(c,0,(int32_t)c->r[3],0); // 802616F8
  if (crb(c,2)) { goto L_80261708; } // 802616FC
  c->r[4]=R32(c->r[3]+0x00000004u); // 80261700
  goto L_8026170C; // 80261704
L_80261708:;
  c->r[4]=0u+0x00000003u; // 80261708
L_8026170C:;
  c->r[3]=0u+0x80400000u; // 8026170C
  c->r[3]=c->r[3]+0xFFFFD040u; // 80261710
  c->r[0]=R32(c->r[3]+0x00000008u); // 80261714
  W32(c->r[3]+0x00000004u,c->r[4]); // 80261718
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8026171C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80261720
L_80261724:;
  c->r[4]=0u+0x80400000u; // 80261724
  c->r[4]=c->r[4]+0xFFFFD040u; // 80261728
  c->r[3]=R32(c->r[4]+0x00000008u); // 8026172C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80261730
  if (!crb(c,2)) return; // 80261734
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFCu; // 80261738
  c->r[0]=c->r[0]|0x00000004u; // 8026173C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80261740
  return; // 80261744
}

// LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
void f_80261748(Ctx* __restrict c) {
  trace_call(0x80261748u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261748
  c->r[0]=c->lr; // 8026174C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80261750
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80261754
  c->r[31]=c->r[3]|c->r[3]; // 80261758
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026175C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80261760
  c->r[4]=R32(c->r[3]+0x00000000u); // 80261764
  cmps(c,0,(int32_t)c->r[4],0); // 80261768
  if (crb(c,2)) { goto L_8026193C; } // 8026176C
  c->r[0]=R32(c->r[13]+0xFFFFA3FCu); // 80261770
  cmpu(c,0,c->r[4],c->r[0]); // 80261774
  if (!crb(c,2)) { goto L_80261784; } // 80261778
  c->r[0]=0u+0x00000001u; // 8026177C
  goto L_8026178C; // 80261780
L_80261784:;
  W32(c->r[13]+0xFFFFA3FCu,c->r[4]); // 80261784
  c->r[0]=0u+0x00000000u; // 80261788
L_8026178C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8026178C
  if (!crb(c,2)) { goto L_8026193C; } // 80261790
  c->r[9]=0u+0x80400000u; // 80261794
  c->r[8]=c->r[9]+0xFFFFD040u; // 80261798
  c->r[3]=R32(c->r[8]+0x00000008u); // 8026179C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802617A0
  if (crb(c,2)) { goto L_80261820; } // 802617A4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 802617A8
  cmpu(c,0,c->r[0],0x00000002u); // 802617AC
  if (!crb(c,2)) { goto L_80261820; } // 802617B0
  c->r[5]=R32(c->r[8]+0x00000004u); // 802617B4
  c->r[3]=0u+0xFE080000u; // 802617B8
  c->r[7]=0u+0xCC010000u; // 802617BC
  c->r[4]=0u+0x00000061u; // 802617C0
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 802617C4
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 802617C8
  c->r[3]=c->r[2]+0xFFFF9CB0u; // 802617CC
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 802617D0
  c->r[0]=R8(c->r[3]+c->r[5]); // 802617D4
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 802617D8
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 802617DC
  c->r[3]=R8(c->r[8]+0x00000002u); // 802617E0
  c->r[0]=R8(c->r[8]+0x00000001u); // 802617E4
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 802617E8
  c->r[6]=R8(c->r[8]+0x00000003u); // 802617EC
  c->r[3]=R8(c->r[9]+0xFFFFD040u); // 802617F0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802617F4
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 802617F8
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 802617FC
  c->r[0]=c->r[3]|c->r[0]; // 80261800
  c->r[3]=c->r[6]|c->r[5]; // 80261804
  c->r[0]=c->r[4]|c->r[0]; // 80261808
  c->r[0]=c->r[3]|c->r[0]; // 8026180C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80261810
  c->r[0]=R32(c->r[8]+0x00000008u); // 80261814
  c->r[0]=c->r[0]|0x00000001u; // 80261818
  W32(c->r[8]+0x00000008u,c->r[0]); // 8026181C
L_80261820:;
  c->r[4]=R8(c->r[13]+0xFFFFA3F0u); // 80261820
  c->r[0]=0u+0x00000000u; // 80261824
  c->r[3]=c->r[31]|c->r[31]; // 80261828
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 8026182C
  c->lr=0x80261834u; f_80252F04(c); // 80261830
  c->r[3]=0u+0x80400000u; // 80261834
  c->r[6]=R32(c->r[31]+0x00000000u); // 80261838
  c->r[0]=R32(c->r[3]+0xFFFFD04Cu); // 8026183C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80261840
  if (crb(c,2)) { goto L_8026186C; } // 80261844
  c->r[4]=c->r[3]+0xFFFFD04Cu; // 80261848
  c->r[3]=R32(c->r[6]+0x00000010u); // 8026184C
  c->r[0]=R32(c->r[4]+0x00000064u); // 80261850
  cmpu(c,0,c->r[3],c->r[0]); // 80261854
  if (!crb(c,2)) { goto L_8026186C; } // 80261858
  c->r[3]=R32(c->r[6]+0x00000014u); // 8026185C
  c->r[0]=R32(c->r[4]+0x00000068u); // 80261860
  cmpu(c,0,c->r[3],c->r[0]); // 80261864
  if (crb(c,2)) { goto L_80261894; } // 80261868
L_8026186C:;
  c->r[5]=0u+0x80400000u; // 8026186C
  c->r[3]=R32(c->r[6]+0x00000010u); // 80261870
  c->r[4]=c->r[5]+0xFFFFD04Cu; // 80261874
  c->r[0]=R32(c->r[5]+0xFFFFD04Cu); // 80261878
  W32(c->r[4]+0x00000064u,c->r[3]); // 8026187C
  c->r[0]=c->r[0]|0x00000002u; // 80261880
  c->r[3]=R32(c->r[6]+0x00000014u); // 80261884
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80261888
  W32(c->r[4]+0x00000068u,c->r[3]); // 8026188C
  W32(c->r[5]+0xFFFFD04Cu,c->r[0]); // 80261890
L_80261894:;
  c->r[3]=0u+0x80400000u; // 80261894
  c->r[4]=0u+0x80400000u; // 80261898
  c->r[5]=R32(c->r[3]+0xFFFFD04Cu); // 8026189C
  c->r[29]=R8(c->r[4]+0xFFFFD040u); // 802618A0
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 802618A4
  if (crb(c,2)) { goto L_8026193C; } // 802618A8
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 802618AC
  if (!crb(c,2)) { goto L_8026193C; } // 802618B0
  cmps(c,0,(int32_t)c->r[29],0); // 802618B4
  if (crb(c,2)) { goto L_8026193C; } // 802618B8
  c->r[31]=c->r[3]+0xFFFFD04Cu; // 802618BC
  c->r[30]=0u+0x00000000u; // 802618C0
  goto L_80261920; // 802618C4
L_802618C8:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 802618C8
  c->r[7]=c->r[31]+c->r[3]; // 802618CC
  c->r[0]=R8(c->r[7]+0x00000064u); // 802618D0
  cmpu(c,0,c->r[0],0x000000FFu); // 802618D4
  if (crb(c,2)) { goto L_8026191C; } // 802618D8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 802618DC
  c->r[5]=rotl(c->r[30],3)&0x000007F8u; // 802618E0
  c->r[4]=c->r[31]+c->r[0]; // 802618E4
  c->r[6]=0u+0x00000000u; // 802618E8
  c->r[4]=R16(c->r[4]+0x00000004u); // 802618EC
  c->r[10]=c->r[31]+c->r[5]; // 802618F0
  c->r[5]=0u+0x00000000u; // 802618F4
  c->r[8]=0u+0x00000000u; // 802618F8
  W16(c->r[10]+0x00000024u,c->r[4]); // 802618FC
  c->r[9]=0u+0x00000000u; // 80261900
  c->r[0]=R8(c->r[7]+0x00000064u); // 80261904
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80261908
  c->r[7]=c->r[31]+c->r[0]; // 8026190C
  c->r[7]=R16(c->r[7]+0x00000006u); // 80261910
  W16(c->r[10]+0x00000026u,c->r[7]); // 80261914
  c->lr=0x8026191Cu; f_8025FB08(c); // 80261918
L_8026191C:;
  c->r[30]=c->r[30]+0x00000001u; // 8026191C
L_80261920:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80261920
  cmpu(c,0,c->r[0],c->r[29]); // 80261924
  if (crb(c,0)) { IRQCHK(c); goto L_802618C8; } // 80261928
  c->r[3]=0u+0x80400000u; // 8026192C
  c->r[0]=R32(c->r[3]+0xFFFFD04Cu); // 80261930
  c->r[0]=c->r[0]|0x00000001u; // 80261934
  W32(c->r[3]+0xFFFFD04Cu,c->r[0]); // 80261938
L_8026193C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026193C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80261940
  c->r[30]=R32(c->r[1]+0x00000018u); // 80261944
  c->r[29]=R32(c->r[1]+0x00000014u); // 80261948
  c->lr=c->r[0]; // 8026194C
  c->r[1]=c->r[1]+0x00000020u; // 80261950
  return; // 80261954
}

// LoadResMatPix__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResMatPix
void f_80261958(Ctx* __restrict c) {
  trace_call(0x80261958u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80261958
  cmps(c,0,(int32_t)c->r[0],0); // 8026195C
  if (crb(c,2)) return; // 80261960
  c->r[10]=0u+0x80400000u; // 80261964
  c->r[9]=c->r[10]+0xFFFFD040u; // 80261968
  c->r[4]=R32(c->r[9]+0x00000008u); // 8026196C
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80261970
  if (crb(c,2)) { goto L_802619F0; } // 80261974
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80261978
  cmpu(c,0,c->r[0],0x00000002u); // 8026197C
  if (!crb(c,2)) { goto L_802619F0; } // 80261980
  c->r[6]=R32(c->r[9]+0x00000004u); // 80261984
  c->r[4]=0u+0xFE080000u; // 80261988
  c->r[8]=0u+0xCC010000u; // 8026198C
  c->r[5]=0u+0x00000061u; // 80261990
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 80261994
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 80261998
  c->r[4]=c->r[2]+0xFFFF9CB0u; // 8026199C
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802619A0
  c->r[0]=R8(c->r[4]+c->r[6]); // 802619A4
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 802619A8
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 802619AC
  c->r[4]=R8(c->r[9]+0x00000002u); // 802619B0
  c->r[0]=R8(c->r[9]+0x00000001u); // 802619B4
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 802619B8
  c->r[7]=R8(c->r[9]+0x00000003u); // 802619BC
  c->r[4]=R8(c->r[10]+0xFFFFD040u); // 802619C0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802619C4
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 802619C8
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 802619CC
  c->r[0]=c->r[4]|c->r[0]; // 802619D0
  c->r[4]=c->r[7]|c->r[6]; // 802619D4
  c->r[0]=c->r[5]|c->r[0]; // 802619D8
  c->r[0]=c->r[4]|c->r[0]; // 802619DC
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802619E0
  c->r[0]=R32(c->r[9]+0x00000008u); // 802619E4
  c->r[0]=c->r[0]|0x00000001u; // 802619E8
  W32(c->r[9]+0x00000008u,c->r[0]); // 802619EC
L_802619F0:;
  c->r[4]=R8(c->r[13]+0xFFFFA3F0u); // 802619F0
  c->r[0]=0u+0x00000000u; // 802619F4
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 802619F8
  f_80253068(c); return; // 802619FC
  return; // 80261A00
}

// LoadResMatTevColor__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d14ResMatTevColor
void f_80261A04(Ctx* __restrict c) {
  trace_call(0x80261A04u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80261A04
  cmps(c,0,(int32_t)c->r[0],0); // 80261A08
  if (crb(c,2)) return; // 80261A0C
  c->r[10]=0u+0x80400000u; // 80261A10
  c->r[9]=c->r[10]+0xFFFFD040u; // 80261A14
  c->r[4]=R32(c->r[9]+0x00000008u); // 80261A18
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80261A1C
  if (crb(c,2)) { goto L_80261A9C; } // 80261A20
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80261A24
  cmpu(c,0,c->r[0],0x00000002u); // 80261A28
  if (!crb(c,2)) { goto L_80261A9C; } // 80261A2C
  c->r[6]=R32(c->r[9]+0x00000004u); // 80261A30
  c->r[4]=0u+0xFE080000u; // 80261A34
  c->r[8]=0u+0xCC010000u; // 80261A38
  c->r[5]=0u+0x00000061u; // 80261A3C
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 80261A40
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 80261A44
  c->r[4]=c->r[2]+0xFFFF9CB0u; // 80261A48
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80261A4C
  c->r[0]=R8(c->r[4]+c->r[6]); // 80261A50
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 80261A54
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 80261A58
  c->r[4]=R8(c->r[9]+0x00000002u); // 80261A5C
  c->r[0]=R8(c->r[9]+0x00000001u); // 80261A60
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80261A64
  c->r[7]=R8(c->r[9]+0x00000003u); // 80261A68
  c->r[4]=R8(c->r[10]+0xFFFFD040u); // 80261A6C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80261A70
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 80261A74
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 80261A78
  c->r[0]=c->r[4]|c->r[0]; // 80261A7C
  c->r[4]=c->r[7]|c->r[6]; // 80261A80
  c->r[0]=c->r[5]|c->r[0]; // 80261A84
  c->r[0]=c->r[4]|c->r[0]; // 80261A88
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80261A8C
  c->r[0]=R32(c->r[9]+0x00000008u); // 80261A90
  c->r[0]=c->r[0]|0x00000001u; // 80261A94
  W32(c->r[9]+0x00000008u,c->r[0]); // 80261A98
L_80261A9C:;
  c->r[4]=R8(c->r[13]+0xFFFFA3F0u); // 80261A9C
  c->r[0]=0u+0x00000000u; // 80261AA0
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 80261AA4
  f_80253098(c); return; // 80261AA8
  return; // 80261AAC
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScale
void f_80261AB0(Ctx* __restrict c) {
  trace_call(0x80261AB0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80261AB0
  cmps(c,0,(int32_t)c->r[0],0); // 80261AB4
  if (crb(c,2)) return; // 80261AB8
  c->r[10]=0u+0x80400000u; // 80261ABC
  c->r[9]=c->r[10]+0xFFFFD040u; // 80261AC0
  c->r[4]=R32(c->r[9]+0x00000008u); // 80261AC4
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80261AC8
  if (crb(c,2)) { goto L_80261B48; } // 80261ACC
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80261AD0
  cmpu(c,0,c->r[0],0x00000002u); // 80261AD4
  if (!crb(c,2)) { goto L_80261B48; } // 80261AD8
  c->r[6]=R32(c->r[9]+0x00000004u); // 80261ADC
  c->r[4]=0u+0xFE080000u; // 80261AE0
  c->r[8]=0u+0xCC010000u; // 80261AE4
  c->r[5]=0u+0x00000061u; // 80261AE8
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 80261AEC
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 80261AF0
  c->r[4]=c->r[2]+0xFFFF9CB0u; // 80261AF4
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80261AF8
  c->r[0]=R8(c->r[4]+c->r[6]); // 80261AFC
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 80261B00
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 80261B04
  c->r[4]=R8(c->r[9]+0x00000002u); // 80261B08
  c->r[0]=R8(c->r[9]+0x00000001u); // 80261B0C
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80261B10
  c->r[7]=R8(c->r[9]+0x00000003u); // 80261B14
  c->r[4]=R8(c->r[10]+0xFFFFD040u); // 80261B18
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80261B1C
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 80261B20
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 80261B24
  c->r[0]=c->r[4]|c->r[0]; // 80261B28
  c->r[4]=c->r[7]|c->r[6]; // 80261B2C
  c->r[0]=c->r[5]|c->r[0]; // 80261B30
  c->r[0]=c->r[4]|c->r[0]; // 80261B34
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80261B38
  c->r[0]=R32(c->r[9]+0x00000008u); // 80261B3C
  c->r[0]=c->r[0]|0x00000001u; // 80261B40
  W32(c->r[9]+0x00000008u,c->r[0]); // 80261B44
L_80261B48:;
  c->r[4]=0u+0x80400000u; // 80261B48
  c->r[5]=R8(c->r[13]+0xFFFFA3F0u); // 80261B4C
  c->r[4]=c->r[4]+0xFFFFD040u; // 80261B50
  c->r[0]=0u+0x00000000u; // 80261B54
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 80261B58
  c->r[4]=R8(c->r[4]+0x00000003u); // 80261B5C
  f_80253C8C(c); return; // 80261B60
  return; // 80261B64
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
void f_80261B68(Ctx* __restrict c) {
  trace_call(0x80261B68u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261B68
  c->r[0]=c->lr; // 80261B6C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80261B70
  c->r[0]=R32(c->r[3]+0x00000000u); // 80261B74
  W32(c->r[1]+0x000000ACu,c->r[31]); // 80261B78
  c->r[31]=c->r[4]|c->r[4]; // 80261B7C
  cmps(c,0,(int32_t)c->r[0],0); // 80261B80
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80261B84
  c->r[30]=c->r[3]|c->r[3]; // 80261B88
  if (crb(c,2)) { goto L_80261D20; } // 80261B8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80261B90
  if (crb(c,2)) { goto L_80261C44; } // 80261B94
  c->r[9]=0u+0x80400000u; // 80261B98
  c->r[8]=c->r[9]+0xFFFFD040u; // 80261B9C
  c->r[3]=R32(c->r[8]+0x00000008u); // 80261BA0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80261BA4
  if (crb(c,2)) { goto L_80261C24; } // 80261BA8
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 80261BAC
  cmpu(c,0,c->r[0],0x00000002u); // 80261BB0
  if (!crb(c,2)) { goto L_80261C24; } // 80261BB4
  c->r[5]=R32(c->r[8]+0x00000004u); // 80261BB8
  c->r[3]=0u+0xFE080000u; // 80261BBC
  c->r[7]=0u+0xCC010000u; // 80261BC0
  c->r[4]=0u+0x00000061u; // 80261BC4
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80261BC8
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 80261BCC
  c->r[3]=c->r[2]+0xFFFF9CB0u; // 80261BD0
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80261BD4
  c->r[0]=R8(c->r[3]+c->r[5]); // 80261BD8
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80261BDC
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 80261BE0
  c->r[3]=R8(c->r[8]+0x00000002u); // 80261BE4
  c->r[0]=R8(c->r[8]+0x00000001u); // 80261BE8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 80261BEC
  c->r[6]=R8(c->r[8]+0x00000003u); // 80261BF0
  c->r[3]=R8(c->r[9]+0xFFFFD040u); // 80261BF4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80261BF8
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 80261BFC
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 80261C00
  c->r[0]=c->r[3]|c->r[0]; // 80261C04
  c->r[3]=c->r[6]|c->r[5]; // 80261C08
  c->r[0]=c->r[4]|c->r[0]; // 80261C0C
  c->r[0]=c->r[3]|c->r[0]; // 80261C10
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80261C14
  c->r[0]=R32(c->r[8]+0x00000008u); // 80261C18
  c->r[0]=c->r[0]|0x00000001u; // 80261C1C
  W32(c->r[8]+0x00000008u,c->r[0]); // 80261C20
L_80261C24:;
  c->r[4]=0u+0x80400000u; // 80261C24
  c->r[5]=R8(c->r[13]+0xFFFFA3F0u); // 80261C28
  c->r[4]=c->r[4]+0xFFFFD040u; // 80261C2C
  c->r[0]=0u+0x00000000u; // 80261C30
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 80261C34
  c->r[3]=c->r[1]+0x0000000Cu; // 80261C38
  c->r[4]=R8(c->r[4]+0x00000003u); // 80261C3C
  c->lr=0x80261C44u; f_80253C8C(c); // 80261C40
L_80261C44:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 80261C44
  c->r[0]=0u+0x00000000u; // 80261C48
  W32(c->r[1]+0x00000010u,c->r[0]); // 80261C4C
  c->r[3]=c->r[1]+0x00000008u; // 80261C50
  c->r[5]=c->r[1]+0x00000014u; // 80261C54
  c->r[4]=0u+0x00000001u; // 80261C58
  W32(c->r[1]+0x00000008u,c->r[6]); // 80261C5C
  c->lr=0x80261C64u; f_80253CC0(c); // 80261C60
  cmps(c,0,(int32_t)c->r[3],0); // 80261C64
  if (crb(c,2)) { goto L_80261C78; } // 80261C68
  c->r[0]=R32(c->r[1]+0x00000010u); // 80261C6C
  c->r[0]=c->r[0]|0x00000001u; // 80261C70
  W32(c->r[1]+0x00000010u,c->r[0]); // 80261C74
L_80261C78:;
  c->r[3]=c->r[1]+0x00000008u; // 80261C78
  c->r[5]=c->r[1]+0x00000044u; // 80261C7C
  c->r[4]=0u+0x00000002u; // 80261C80
  c->lr=0x80261C88u; f_80253CC0(c); // 80261C84
  cmps(c,0,(int32_t)c->r[3],0); // 80261C88
  if (crb(c,2)) { goto L_80261C9C; } // 80261C8C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80261C90
  c->r[0]=c->r[0]|0x00000002u; // 80261C94
  W32(c->r[1]+0x00000010u,c->r[0]); // 80261C98
L_80261C9C:;
  c->r[3]=c->r[1]+0x00000008u; // 80261C9C
  c->r[5]=c->r[1]+0x00000074u; // 80261CA0
  c->r[4]=0u+0x00000003u; // 80261CA4
  c->lr=0x80261CACu; f_80253CC0(c); // 80261CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80261CAC
  if (crb(c,2)) { goto L_80261CC0; } // 80261CB0
  c->r[0]=R32(c->r[1]+0x00000010u); // 80261CB4
  c->r[0]=c->r[0]|0x00000004u; // 80261CB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80261CBC
L_80261CC0:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80261CC0
  c->r[3]=c->r[31]|c->r[31]; // 80261CC4
  c->r[4]=c->r[1]+0x00000010u; // 80261CC8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80261CCC
  c->ctr=c->r[12]; // 80261CD0
  if (true) { c->lr=0x80261CD8u; dispatch(c,c->ctr); } // 80261CD4
  c->r[0]=R32(c->r[1]+0x00000010u); // 80261CD8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80261CDC
  if (crb(c,2)) { goto L_80261CF0; } // 80261CE0
  c->r[4]=c->r[1]+0x00000014u; // 80261CE4
  c->r[3]=0u+0x00000000u; // 80261CE8
  c->lr=0x80261CF0u; f_8025FB78(c); // 80261CEC
L_80261CF0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80261CF0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80261CF4
  if (crb(c,2)) { goto L_80261D08; } // 80261CF8
  c->r[4]=c->r[1]+0x00000044u; // 80261CFC
  c->r[3]=0u+0x00000003u; // 80261D00
  c->lr=0x80261D08u; f_8025FB78(c); // 80261D04
L_80261D08:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80261D08
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80261D0C
  if (crb(c,2)) { goto L_80261D20; } // 80261D10
  c->r[4]=c->r[1]+0x00000074u; // 80261D14
  c->r[3]=0u+0x00000006u; // 80261D18
  c->lr=0x80261D20u; f_8025FB78(c); // 80261D1C
L_80261D20:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80261D20
  c->r[31]=R32(c->r[1]+0x000000ACu); // 80261D24
  c->r[30]=R32(c->r[1]+0x000000A8u); // 80261D28
  c->lr=c->r[0]; // 80261D2C
  c->r[1]=c->r[1]+0x000000B0u; // 80261D30
  return; // 80261D34
}

// LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb
void f_80261D38(Ctx* __restrict c) {
  trace_call(0x80261D38u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261D38
  c->r[0]=c->lr; // 80261D3C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80261D40
  c->r[11]=c->r[1]+0x00000080u; // 80261D44
  c->lr=0x80261D4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80261D48
  c->r[10]=R32(c->r[3]+0x00000000u); // 80261D4C
  c->r[0]=0u+0x43300000u; // 80261D50
  W32(c->r[1]+0x00000030u,c->r[0]); // 80261D54
  cmps(c,0,(int32_t)c->r[10],0); // 80261D58
  W32(c->r[1]+0x00000038u,c->r[0]); // 80261D5C
  if (crb(c,2)) { goto L_8026244C; } // 80261D60
  c->r[11]=R32(c->r[10]+0x00000000u); // 80261D64
  c->r[0]=rotl(c->r[11],0)&0x00000001u; cr0(c,c->r[0]); // 80261D68
  if (crb(c,2)) { goto L_80261E08; } // 80261D6C
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 80261D70
  if (crb(c,2)) { goto L_80261DC0; } // 80261D74
  c->r[31]=R8(c->r[10]+0x00000004u); // 80261D78
  c->r[12]=0u+0xCC010000u; // 80261D7C
  c->r[30]=R8(c->r[10]+0x00000005u); // 80261D80
  c->r[27]=0u+0x00000010u; // 80261D84
  c->r[29]=R8(c->r[10]+0x00000006u); // 80261D88
  c->r[11]=0u+0x00000000u; // 80261D8C
  c->r[28]=R8(c->r[10]+0x00000007u); // 80261D90
  c->r[0]=0u+0x0000100Cu; // 80261D94
  W8(c->r[1]+0x00000028u,c->r[31]); // 80261D98
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 80261D9C
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 80261DA0
  W8(c->r[1]+0x00000029u,c->r[30]); // 80261DA4
  W8(c->r[1]+0x0000002Au,c->r[29]); // 80261DA8
  W8(c->r[1]+0x0000002Bu,c->r[28]); // 80261DAC
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 80261DB0
  c->r[0]=R32(c->r[1]+0x00000028u); // 80261DB4
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 80261DB8
  goto L_80261E54; // 80261DBC
L_80261DC0:;
  c->r[31]=R8(c->r[10]+0x00000004u); // 80261DC0
  c->r[12]=0u+0xCC010000u; // 80261DC4
  c->r[30]=R8(c->r[10]+0x00000005u); // 80261DC8
  c->r[27]=0u+0x00000010u; // 80261DCC
  c->r[29]=R8(c->r[10]+0x00000006u); // 80261DD0
  c->r[11]=0u+0x00000000u; // 80261DD4
  c->r[28]=R8(c->r[10]+0x00000007u); // 80261DD8
  c->r[0]=0u+0x0000100Cu; // 80261DDC
  W8(c->r[1]+0x00000024u,c->r[31]); // 80261DE0
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 80261DE4
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 80261DE8
  W8(c->r[1]+0x00000025u,c->r[30]); // 80261DEC
  W8(c->r[1]+0x00000026u,c->r[29]); // 80261DF0
  W8(c->r[1]+0x00000027u,c->r[28]); // 80261DF4
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 80261DF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80261DFC
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 80261E00
  goto L_80261E54; // 80261E04
L_80261E08:;
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 80261E08
  if (crb(c,2)) { goto L_80261E54; } // 80261E0C
  c->r[27]=R8(c->r[10]+0x00000004u); // 80261E10
  c->r[12]=0u+0xCC010000u; // 80261E14
  c->r[28]=R8(c->r[10]+0x00000005u); // 80261E18
  c->r[29]=0u+0x00000010u; // 80261E1C
  c->r[31]=R8(c->r[10]+0x00000006u); // 80261E20
  c->r[11]=0u+0x00000000u; // 80261E24
  c->r[30]=R8(c->r[10]+0x00000007u); // 80261E28
  c->r[0]=0u+0x0000100Cu; // 80261E2C
  W8(c->r[1]+0x00000020u,c->r[27]); // 80261E30
  W8(c->r[12]+0xFFFF8000u,c->r[29]); // 80261E34
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 80261E38
  W8(c->r[1]+0x00000021u,c->r[28]); // 80261E3C
  W8(c->r[1]+0x00000022u,c->r[31]); // 80261E40
  W8(c->r[1]+0x00000023u,c->r[30]); // 80261E44
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 80261E48
  c->r[0]=R32(c->r[1]+0x00000020u); // 80261E4C
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 80261E50
L_80261E54:;
  c->r[12]=R8(c->r[8]+0x00000000u); // 80261E54
  c->r[11]=R8(c->r[10]+0x00000008u); // 80261E58
  c->r[30]=R8(c->r[8]+0x00000001u); // 80261E5C
  c->r[29]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 80261E60
  c->r[0]=R8(c->r[10]+0x00000009u); // 80261E64
  c->r[27]=R32(c->r[10]+0x00000000u); // 80261E68
  c->r[31]=R8(c->r[8]+0x00000002u); // 80261E6C
  c->r[12]=R8(c->r[10]+0x0000000Au); // 80261E70
  c->r[11]=R8(c->r[8]+0x00000003u); // 80261E74
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 80261E78
  c->r[0]=c->r[29]^0x80000000u; // 80261E7C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80261E80
  c->r[0]=rotl(c->r[27],0)&0x00000004u; cr0(c,c->r[0]); // 80261E84
  c->r[8]=R8(c->r[10]+0x0000000Bu); // 80261E88
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 80261E8C
  c->r[0]=c->r[30]^0x80000000u; // 80261E90
  {uint32_t ea=c->r[2]+0xFFFF9CD0u; c->f[6]=RF64(ea);} // 80261E94
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80261E98
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[8]); // 80261E9C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 80261EA0
  {uint32_t ea=c->r[2]+0xFFFF9CC8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80261EA4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80261EA8
  {uint32_t ea=c->r[2]+0xFFFF9CC4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80261EAC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 80261EB0
  c->r[12]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[12]); // 80261EB4
  c->r[0]=c->r[0]^0x80000000u; // 80261EB8
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[1]); // 80261EBC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80261EC0
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 80261EC4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80261EC8
  c->r[8]=c->r[12]^0x80000000u; // 80261ECC
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 80261ED0
  W32(c->r[1]+0x00000034u,c->r[8]); // 80261ED4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80261ED8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80261EDC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80261EE0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 80261EE4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[6]); // 80261EE8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80261EEC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 80261EF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 80261EF4
  c->r[12]=R32(c->r[1]+0x00000044u); // 80261EF8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 80261EFC
  c->r[11]=R32(c->r[1]+0x0000004Cu); // 80261F00
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80261F04
  W8(c->r[1]+0x0000002Cu,c->r[12]); // 80261F08
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 80261F0C
  W8(c->r[1]+0x0000002Du,c->r[11]); // 80261F10
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 80261F14
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80261F18
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80261F1C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 80261F20
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 80261F24
  c->r[8]=R32(c->r[1]+0x00000054u); // 80261F28
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80261F2C
  W8(c->r[1]+0x0000002Eu,c->r[8]); // 80261F30
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 80261F34
  if (crb(c,2)) { goto L_80261F94; } // 80261F38
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 80261F3C
  if (crb(c,2)) { goto L_80261F6C; } // 80261F40
  c->r[11]=0u+0xCC010000u; // 80261F44
  c->r[0]=0u+0x00000010u; // 80261F48
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 80261F4C
  c->r[8]=0u+0x00000000u; // 80261F50
  c->r[0]=0u+0x0000100Au; // 80261F54
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 80261F58
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 80261F5C
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 80261F60
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 80261F64
  goto L_80261FC0; // 80261F68
L_80261F6C:;
  c->r[11]=0u+0xCC010000u; // 80261F6C
  c->r[0]=0u+0x00000010u; // 80261F70
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 80261F74
  c->r[8]=0u+0x00000000u; // 80261F78
  c->r[0]=0u+0x0000100Au; // 80261F7C
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 80261F80
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 80261F84
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 80261F88
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 80261F8C
  goto L_80261FC0; // 80261F90
L_80261F94:;
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 80261F94
  if (crb(c,2)) { goto L_80261FC0; } // 80261F98
  c->r[11]=0u+0xCC010000u; // 80261F9C
  c->r[0]=0u+0x00000010u; // 80261FA0
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 80261FA4
  c->r[8]=0u+0x00000000u; // 80261FA8
  c->r[0]=0u+0x0000100Au; // 80261FAC
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 80261FB0
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 80261FB4
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 80261FB8
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 80261FBC
L_80261FC0:;
  cmps(c,0,(int32_t)c->r[9],0); // 80261FC0
  if (crb(c,2)) { goto L_8026204C; } // 80261FC4
  c->r[0]=R32(c->r[10]+0x00000000u); // 80261FC8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80261FCC
  if (crb(c,2)) { goto L_80262008; } // 80261FD0
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 80261FD4
  c->r[12]=0u+0xFFFF87C1u; // 80261FD8
  c->r[11]=0u+0xCC010000u; // 80261FDC
  c->r[0]=0u+0x00000010u; // 80261FE0
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 80261FE4
  c->r[8]=0u+0x00000000u; // 80261FE8
  c->r[27]=c->r[27]&c->r[12]; // 80261FEC
  c->r[0]=0u+0x0000100Eu; // 80261FF0
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 80261FF4
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 80261FF8
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 80261FFC
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 80262000
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 80262004
L_80262008:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 80262008
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8026200C
  if (crb(c,2)) { goto L_802620CC; } // 80262010
  c->r[11]=R32(c->r[10]+0x00000010u); // 80262014
  c->r[10]=0u+0xFFFF87C1u; // 80262018
  c->r[8]=0u+0xCC010000u; // 8026201C
  c->r[0]=0u+0x00000010u; // 80262020
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 80262024
  c->r[4]=0u+0x00000000u; // 80262028
  c->r[11]=c->r[11]&c->r[10]; // 8026202C
  c->r[0]=0u+0x00001010u; // 80262030
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 80262034
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 80262038
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 8026203C
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 80262040
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 80262044
  goto L_802620CC; // 80262048
L_8026204C:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 8026204C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80262050
  if (crb(c,2)) { goto L_8026208C; } // 80262054
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 80262058
  c->r[12]=0u+0xFFFF87C3u; // 8026205C
  c->r[11]=0u+0xCC010000u; // 80262060
  c->r[0]=0u+0x00000010u; // 80262064
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 80262068
  c->r[8]=0u+0x00000000u; // 8026206C
  c->r[27]=c->r[27]&c->r[12]; // 80262070
  c->r[0]=0u+0x0000100Eu; // 80262074
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 80262078
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 8026207C
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 80262080
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 80262084
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 80262088
L_8026208C:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 8026208C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80262090
  if (crb(c,2)) { goto L_802620CC; } // 80262094
  c->r[11]=R32(c->r[10]+0x00000010u); // 80262098
  c->r[10]=0u+0xFFFF87C3u; // 8026209C
  c->r[8]=0u+0xCC010000u; // 802620A0
  c->r[0]=0u+0x00000010u; // 802620A4
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 802620A8
  c->r[4]=0u+0x00000000u; // 802620AC
  c->r[11]=c->r[11]&c->r[10]; // 802620B0
  c->r[0]=0u+0x00001010u; // 802620B4
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 802620B8
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 802620BC
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 802620C0
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 802620C4
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 802620C8
L_802620CC:;
  c->r[4]=0u+0x80400000u; // 802620CC
  c->r[4]=c->r[4]+0xFFFFD040u; // 802620D0
  c->r[0]=R8(c->r[4]+0x00000001u); // 802620D4
  cmpu(c,0,c->r[0],0x00000002u); // 802620D8
  if (!crb(c,2)) { goto L_802623D4; } // 802620DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802620E0
  c->r[4]=R32(c->r[3]+0x00000014u); // 802620E4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802620E8
  if (crb(c,2)) { goto L_80262188; } // 802620EC
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802620F0
  if (crb(c,2)) { goto L_80262140; } // 802620F4
  c->r[31]=R8(c->r[3]+0x00000018u); // 802620F8
  c->r[5]=0u+0xCC010000u; // 802620FC
  c->r[12]=R8(c->r[3]+0x00000019u); // 80262100
  c->r[8]=0u+0x00000010u; // 80262104
  c->r[11]=R8(c->r[3]+0x0000001Au); // 80262108
  c->r[4]=0u+0x00000000u; // 8026210C
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 80262110
  c->r[0]=0u+0x0000100Du; // 80262114
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 80262118
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 8026211C
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 80262120
  W8(c->r[1]+0x0000001Du,c->r[12]); // 80262124
  W8(c->r[1]+0x0000001Eu,c->r[11]); // 80262128
  W8(c->r[1]+0x0000001Fu,c->r[10]); // 8026212C
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80262130
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80262134
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80262138
  goto L_802621D4; // 8026213C
L_80262140:;
  c->r[31]=R8(c->r[3]+0x00000018u); // 80262140
  c->r[5]=0u+0xCC010000u; // 80262144
  c->r[12]=R8(c->r[3]+0x00000019u); // 80262148
  c->r[8]=0u+0x00000010u; // 8026214C
  c->r[11]=R8(c->r[3]+0x0000001Au); // 80262150
  c->r[4]=0u+0x00000000u; // 80262154
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 80262158
  c->r[0]=0u+0x0000100Du; // 8026215C
  W8(c->r[1]+0x00000018u,c->r[31]); // 80262160
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 80262164
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 80262168
  W8(c->r[1]+0x00000019u,c->r[12]); // 8026216C
  W8(c->r[1]+0x0000001Au,c->r[11]); // 80262170
  W8(c->r[1]+0x0000001Bu,c->r[10]); // 80262174
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80262178
  c->r[0]=R32(c->r[1]+0x00000018u); // 8026217C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80262180
  goto L_802621D4; // 80262184
L_80262188:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80262188
  if (crb(c,2)) { goto L_802621D4; } // 8026218C
  c->r[31]=R8(c->r[3]+0x00000018u); // 80262190
  c->r[5]=0u+0xCC010000u; // 80262194
  c->r[12]=R8(c->r[3]+0x00000019u); // 80262198
  c->r[8]=0u+0x00000010u; // 8026219C
  c->r[11]=R8(c->r[3]+0x0000001Au); // 802621A0
  c->r[4]=0u+0x00000000u; // 802621A4
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 802621A8
  c->r[0]=0u+0x0000100Du; // 802621AC
  W8(c->r[1]+0x00000014u,c->r[31]); // 802621B0
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802621B4
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802621B8
  W8(c->r[1]+0x00000015u,c->r[12]); // 802621BC
  W8(c->r[1]+0x00000016u,c->r[11]); // 802621C0
  W8(c->r[1]+0x00000017u,c->r[10]); // 802621C4
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802621C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802621CC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802621D0
L_802621D4:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802621D4
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 802621D8
  if (crb(c,2)) { goto L_80262278; } // 802621DC
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 802621E0
  if (crb(c,2)) { goto L_80262230; } // 802621E4
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 802621E8
  c->r[5]=0u+0xCC010000u; // 802621EC
  c->r[12]=R8(c->r[3]+0x0000001Du); // 802621F0
  c->r[8]=0u+0x00000010u; // 802621F4
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 802621F8
  c->r[4]=0u+0x00000000u; // 802621FC
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 80262200
  c->r[0]=0u+0x0000100Bu; // 80262204
  W8(c->r[1]+0x00000010u,c->r[31]); // 80262208
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 8026220C
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 80262210
  W8(c->r[1]+0x00000011u,c->r[12]); // 80262214
  W8(c->r[1]+0x00000012u,c->r[11]); // 80262218
  W8(c->r[1]+0x00000013u,c->r[10]); // 8026221C
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80262220
  c->r[0]=R32(c->r[1]+0x00000010u); // 80262224
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80262228
  goto L_802622C4; // 8026222C
L_80262230:;
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 80262230
  c->r[5]=0u+0xCC010000u; // 80262234
  c->r[12]=R8(c->r[3]+0x0000001Du); // 80262238
  c->r[8]=0u+0x00000010u; // 8026223C
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 80262240
  c->r[4]=0u+0x00000000u; // 80262244
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 80262248
  c->r[0]=0u+0x0000100Bu; // 8026224C
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 80262250
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 80262254
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 80262258
  W8(c->r[1]+0x0000000Du,c->r[12]); // 8026225C
  W8(c->r[1]+0x0000000Eu,c->r[11]); // 80262260
  W8(c->r[1]+0x0000000Fu,c->r[10]); // 80262264
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80262268
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8026226C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80262270
  goto L_802622C4; // 80262274
L_80262278:;
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 80262278
  if (crb(c,2)) { goto L_802622C4; } // 8026227C
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 80262280
  c->r[5]=0u+0xCC010000u; // 80262284
  c->r[12]=R8(c->r[3]+0x0000001Du); // 80262288
  c->r[8]=0u+0x00000010u; // 8026228C
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 80262290
  c->r[4]=0u+0x00000000u; // 80262294
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 80262298
  c->r[0]=0u+0x0000100Bu; // 8026229C
  W8(c->r[1]+0x00000008u,c->r[31]); // 802622A0
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802622A4
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802622A8
  W8(c->r[1]+0x00000009u,c->r[12]); // 802622AC
  W8(c->r[1]+0x0000000Au,c->r[11]); // 802622B0
  W8(c->r[1]+0x0000000Bu,c->r[10]); // 802622B4
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802622B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 802622BC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802622C0
L_802622C4:;
  cmps(c,0,(int32_t)c->r[9],0); // 802622C4
  if (crb(c,2)) { goto L_80262350; } // 802622C8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802622CC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802622D0
  if (crb(c,2)) { goto L_8026230C; } // 802622D4
  c->r[9]=R32(c->r[3]+0x00000020u); // 802622D8
  c->r[8]=0u+0xFFFF87C1u; // 802622DC
  c->r[5]=0u+0xCC010000u; // 802622E0
  c->r[0]=0u+0x00000010u; // 802622E4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 802622E8
  c->r[4]=0u+0x00000000u; // 802622EC
  c->r[9]=c->r[9]&c->r[8]; // 802622F0
  c->r[0]=0u+0x0000100Fu; // 802622F4
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802622F8
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 802622FC
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 80262300
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80262304
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 80262308
L_8026230C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 8026230C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80262310
  if (crb(c,2)) { goto L_80262408; } // 80262314
  c->r[6]=R32(c->r[3]+0x00000024u); // 80262318
  c->r[5]=0u+0xFFFF87C1u; // 8026231C
  c->r[4]=0u+0xCC010000u; // 80262320
  c->r[0]=0u+0x00000010u; // 80262324
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80262328
  c->r[3]=0u+0x00000000u; // 8026232C
  c->r[6]=c->r[6]&c->r[5]; // 80262330
  c->r[0]=0u+0x00001011u; // 80262334
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 80262338
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 8026233C
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 80262340
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 80262344
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80262348
  goto L_80262408; // 8026234C
L_80262350:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80262350
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80262354
  if (crb(c,2)) { goto L_80262390; } // 80262358
  c->r[9]=R32(c->r[3]+0x00000020u); // 8026235C
  c->r[8]=0u+0xFFFF87C3u; // 80262360
  c->r[5]=0u+0xCC010000u; // 80262364
  c->r[0]=0u+0x00000010u; // 80262368
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8026236C
  c->r[4]=0u+0x00000000u; // 80262370
  c->r[9]=c->r[9]&c->r[8]; // 80262374
  c->r[0]=0u+0x0000100Fu; // 80262378
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 8026237C
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 80262380
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 80262384
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80262388
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 8026238C
L_80262390:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80262390
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80262394
  if (crb(c,2)) { goto L_80262408; } // 80262398
  c->r[6]=R32(c->r[3]+0x00000024u); // 8026239C
  c->r[5]=0u+0xFFFF87C3u; // 802623A0
  c->r[4]=0u+0xCC010000u; // 802623A4
  c->r[0]=0u+0x00000010u; // 802623A8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802623AC
  c->r[3]=0u+0x00000000u; // 802623B0
  c->r[6]=c->r[6]&c->r[5]; // 802623B4
  c->r[0]=0u+0x00001011u; // 802623B8
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 802623BC
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 802623C0
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 802623C4
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 802623C8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 802623CC
  goto L_80262408; // 802623D0
L_802623D4:;
  c->r[5]=0u+0xCC010000u; // 802623D4
  c->r[6]=0u+0x00000010u; // 802623D8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802623DC
  c->r[4]=0u+0x00000000u; // 802623E0
  c->r[3]=0u+0x0000100Fu; // 802623E4
  c->r[0]=0u+0x00001011u; // 802623E8
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802623EC
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 802623F0
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 802623F4
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802623F8
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802623FC
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80262400
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80262404
L_80262408:;
  c->r[3]=0u+0x80400000u; // 80262408
  c->r[31]=c->r[3]+0xFFFFD040u; // 8026240C
  c->r[4]=R32(c->r[31]+0x00000008u); // 80262410
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80262414
  if (crb(c,2)) { goto L_8026244C; } // 80262418
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8026241C
  cmpu(c,0,c->r[0],0x00000003u); // 80262420
  if (crb(c,2)) { goto L_8026244C; } // 80262424
  c->r[3]=R8(c->r[3]+0xFFFFD040u); // 80262428
  c->r[4]=R8(c->r[31]+0x00000001u); // 8026242C
  c->r[5]=R8(c->r[31]+0x00000002u); // 80262430
  c->r[6]=R8(c->r[31]+0x00000003u); // 80262434
  c->r[7]=R32(c->r[31]+0x00000004u); // 80262438
  c->lr=0x80262440u; f_8025FA58(c); // 8026243C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80262440
  c->r[0]=c->r[0]|0x00000003u; // 80262444
  W32(c->r[31]+0x00000008u,c->r[0]); // 80262448
L_8026244C:;
  c->r[11]=c->r[1]+0x00000080u; // 8026244C
  c->lr=0x80262454u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80262450
  c->r[0]=R32(c->r[1]+0x00000084u); // 80262454
  c->lr=c->r[0]; // 80262458
  c->r[1]=c->r[1]+0x00000080u; // 8026245C
  return; // 80262460
}

// LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen
void f_80262464(Ctx* __restrict c) {
  trace_call(0x80262464u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262464
  c->r[0]=c->lr; // 80262468
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026246C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80262470
  W32(c->r[1]+0x00000008u,c->r[30]); // 80262474
  c->r[0]=R32(c->r[3]+0x00000000u); // 80262478
  cmps(c,0,(int32_t)c->r[0],0); // 8026247C
  if (crb(c,2)) { goto L_802624DC; } // 80262480
  c->r[5]=R8(c->r[13]+0xFFFFA3F0u); // 80262484
  c->r[0]=0u+0x00000000u; // 80262488
  c->r[30]=0u+0x80400000u; // 8026248C
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 80262490
  c->r[4]=R8(c->r[30]+0xFFFFD040u); // 80262494
  c->lr=0x8026249Cu; f_8025448C(c); // 80262498
  c->r[31]=c->r[30]+0xFFFFD040u; // 8026249C
  c->r[3]=R32(c->r[31]+0x00000008u); // 802624A0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802624A4
  if (crb(c,2)) { goto L_802624DC; } // 802624A8
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 802624AC
  cmpu(c,0,c->r[0],0x00000003u); // 802624B0
  if (crb(c,2)) { goto L_802624DC; } // 802624B4
  c->r[3]=R8(c->r[30]+0xFFFFD040u); // 802624B8
  c->r[4]=R8(c->r[31]+0x00000001u); // 802624BC
  c->r[5]=R8(c->r[31]+0x00000002u); // 802624C0
  c->r[6]=R8(c->r[31]+0x00000003u); // 802624C4
  c->r[7]=R32(c->r[31]+0x00000004u); // 802624C8
  c->lr=0x802624D0u; f_8025FA58(c); // 802624CC
  c->r[0]=R32(c->r[31]+0x00000008u); // 802624D0
  c->r[0]=c->r[0]|0x00000003u; // 802624D4
  W32(c->r[31]+0x00000008u,c->r[0]); // 802624D8
L_802624DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802624DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802624E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802624E4
  c->lr=c->r[0]; // 802624E8
  c->r[1]=c->r[1]+0x00000010u; // 802624EC
  return; // 802624F0
}

// LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt
void f_802624F4(Ctx* __restrict c) {
  trace_call(0x802624F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 802624F4
  c->r[0]=c->lr; // 802624F8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 802624FC
  c->r[11]=c->r[1]+0x000000D0u; // 80262500
  c->lr=0x80262508u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80262504
  c->r[30]=0u+0x80400000u; // 80262508
  c->r[26]=0u+0x80400000u; // 8026250C
  c->r[21]=c->r[3]|c->r[3]; // 80262510
  c->r[23]=0u+0x00000000u; // 80262514
  c->r[26]=c->r[26]+0xFFFFD250u; // 80262518
  c->r[30]=c->r[30]+0xFFFFD280u; // 8026251C
  c->r[28]=0u+0x00000000u; // 80262520
  c->r[27]=0u+0x00000000u; // 80262524
  c->r[25]=0u+0x00000000u; // 80262528
  c->r[24]=0u+0x00000040u; // 8026252C
  c->r[31]=0u+0x00000000u; // 80262530
  c->r[20]=0u+0x00000001u; // 80262534
L_80262538:;
  c->r[4]=R32(c->r[21]+0x00000000u); // 80262538
  cmps(c,0,(int32_t)c->r[4],0); // 8026253C
  if (crb(c,2)) { goto L_80262560; } // 80262540
  c->r[0]=R32(c->r[4]+0x00000000u); // 80262544
  c->r[3]=((c->r[28])&0x20)?0u:(c->r[20]<<((c->r[28])&31)); // 80262548
  c->r[3]=c->r[3]&c->r[0]; // 8026254C
  c->r[0]=0u-c->r[3]; // 80262550
  c->r[0]=c->r[0]|c->r[3]; // 80262554
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80262558
  goto L_80262564; // 8026255C
L_80262560:;
  c->r[0]=0u+0x00000000u; // 80262560
L_80262564:;
  cmps(c,0,(int32_t)c->r[0],0); // 80262564
  if (crb(c,2)) { goto L_80262764; } // 80262568
  c->r[29]=c->r[4]+c->r[27]; // 8026256C
  c->r[3]=c->r[1]+0x00000068u; // 80262570
  c->r[22]=0u+0x00000001u; // 80262574
  c->lr=0x8026257Cu; f_80167F98(c); // 80262578
  c->r[6]=R8(c->r[29]+0x000000AAu); // 8026257C
  cmps(c,0,(int32_t)c->r[6],0); // 80262580
  if (crb(c,2)) { goto L_802625F8; } // 80262584
  c->r[3]=R8(c->r[29]+0x000000A9u); // 80262588
  cmpu(c,0,c->r[6],0x00000100u); // 8026258C
  c->r[0]=R8(c->r[29]+0x000000A8u); // 80262590
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80262594
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80262598
  if (crb(c,0)) { goto L_802625A4; } // 8026259C
  c->r[6]=0u+0x00000000u; // 802625A0
L_802625A4:;
  cmps(c,0,(int32_t)c->r[4],32); // 802625A4
  if (crb(c,0)) { goto L_802625B0; } // 802625A8
  c->r[4]=0u+0xFFFFFFFFu; // 802625AC
L_802625B0:;
  cmps(c,0,(int32_t)c->r[5],128); // 802625B0
  if (crb(c,0)) { goto L_802625BC; } // 802625B4
  c->r[5]=0u+0xFFFFFFFFu; // 802625B8
L_802625BC:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 802625BC
  c->r[3]=c->r[1]+0x00000068u; // 802625C0
  c->r[12]=R32(c->r[30]+c->r[0]); // 802625C4
  c->ctr=c->r[12]; // 802625C8
  if (true) { c->lr=0x802625D0u; dispatch(c,c->ctr); } // 802625CC
  c->r[0]=R8(c->r[29]+0x000000AAu); // 802625D0
  cmpu(c,0,c->r[0],0x00000100u); // 802625D4
  if (crb(c,0)) { goto L_802625E0; } // 802625D8
  c->r[0]=0u+0x00000000u; // 802625DC
L_802625E0:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802625E0
  c->r[22]=0u+0x00000000u; // 802625E4
  c->r[3]=c->r[30]+c->r[0]; // 802625E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802625EC
  W32(c->r[26]+0x00000000u,c->r[0]); // 802625F0
  goto L_802625FC; // 802625F4
L_802625F8:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 802625F8
L_802625FC:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 802625FC
  c->r[4]=0u+0x00000000u; // 80262600
  c->r[0]=R32(c->r[3]+0x00000000u); // 80262604
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 80262608
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8026260C
  cmpu(c,0,c->r[0],0x0000000Fu); // 80262610
  if (!crb(c,2)) { goto L_8026262C; } // 80262614
  c->r[3]=c->r[3]+c->r[27]; // 80262618
  c->r[0]=R8(c->r[3]+0x000000ABu); // 8026261C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80262620
  if (crb(c,2)) { goto L_8026262C; } // 80262624
  c->r[4]=0u+0x00000001u; // 80262628
L_8026262C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026262C
  if (!crb(c,2)) { goto L_80262700; } // 80262630
  cmps(c,0,(int32_t)c->r[22],0); // 80262634
  if (crb(c,2)) { goto L_8026265C; } // 80262638
  c->r[0]=R8(c->r[29]+0x000000ABu); // 8026263C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80262640
  if (!crb(c,2)) { goto L_8026266C; } // 80262644
  c->r[3]=c->r[29]+0x000000ACu; // 80262648
  c->r[4]=c->r[1]+0x00000068u; // 8026264C
  c->r[22]=0u+0x00000000u; // 80262650
  c->lr=0x80262658u; f_80167FC4(c); // 80262654
  goto L_8026266C; // 80262658
L_8026265C:;
  c->r[4]=c->r[1]+0x00000068u; // 8026265C
  c->r[3]=c->r[29]+0x000000ACu; // 80262660
  c->r[5]=c->r[4]|c->r[4]; // 80262664
  c->lr=0x8026266Cu; f_80167FF8(c); // 80262668
L_8026266C:;
  c->r[0]=R8(c->r[29]+0x000000AAu); // 8026266C
  cmps(c,0,(int32_t)c->r[0],0); // 80262670
  if (!crb(c,2)) { goto L_802626A4; } // 80262674
  c->r[6]=R32(c->r[21]+0x00000000u); // 80262678
  c->r[4]=c->r[22]|c->r[22]; // 8026267C
  c->r[3]=c->r[1]+0x00000068u; // 80262680
  c->r[0]=R32(c->r[6]+0x00000000u); // 80262684
  c->r[5]=c->r[6]+c->r[25]; // 80262688
  c->r[7]=R32(c->r[6]+0x00000004u); // 8026268C
  c->r[5]=c->r[5]+0x00000008u; // 80262690
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 80262694
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 80262698
  c->lr=0x802626A0u; f_80266A58(c); // 8026269C
  goto L_802626FC; // 802626A0
L_802626A4:;
  c->r[6]=R32(c->r[21]+0x00000000u); // 802626A4
  c->r[3]=c->r[1]+0x00000038u; // 802626A8
  c->r[4]=0u+0x00000001u; // 802626AC
  c->r[0]=R32(c->r[6]+0x00000000u); // 802626B0
  c->r[5]=c->r[6]+c->r[25]; // 802626B4
  c->r[7]=R32(c->r[6]+0x00000004u); // 802626B8
  c->r[5]=c->r[5]+0x00000008u; // 802626BC
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 802626C0
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 802626C4
  c->lr=0x802626CCu; f_80266A58(c); // 802626C8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802626CC
  c->r[4]=c->r[1]+0x00000068u; // 802626D0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802626D4
  c->r[5]=c->r[4]|c->r[4]; // 802626D8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 802626DC
  c->r[3]=c->r[1]+0x00000038u; // 802626E0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 802626E4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 802626E8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 802626EC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 802626F0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 802626F4
  c->lr=0x802626FCu; f_80167FF8(c); // 802626F8
L_802626FC:;
  c->r[22]=0u+0x00000000u; // 802626FC
L_80262700:;
  cmps(c,0,(int32_t)c->r[22],0); // 80262700
  if (crb(c,2)) { goto L_80262740; } // 80262704
  c->r[0]=R32(c->r[13]+0xFFFFA3F8u); // 80262708
  c->r[4]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 8026270C
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 80262710
  if (!crb(c,2)) { goto L_80262768; } // 80262714
  c->r[0]=R32(c->r[13]+0xFFFFA3F8u); // 80262718
  c->r[3]=c->r[1]+0x00000008u; // 8026271C
  c->r[0]=c->r[0]|c->r[4]; // 80262720
  W32(c->r[13]+0xFFFFA3F8u,c->r[0]); // 80262724
  c->lr=0x8026272Cu; f_80167F98(c); // 80262728
  c->r[4]=c->r[24]|c->r[24]; // 8026272C
  c->r[3]=c->r[1]+0x00000008u; // 80262730
  c->r[5]=0u+0x00000000u; // 80262734
  c->lr=0x8026273Cu; f_80184A4C(c); // 80262738
  goto L_80262768; // 8026273C
L_80262740:;
  c->r[5]=R32(c->r[13]+0xFFFFA3F8u); // 80262740
  c->r[0]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 80262744
  c->r[4]=c->r[24]|c->r[24]; // 80262748
  c->r[3]=c->r[1]+0x00000068u; // 8026274C
  c->r[0]=c->r[5]&~c->r[0]; // 80262750
  c->r[5]=0u+0x00000000u; // 80262754
  W32(c->r[13]+0xFFFFA3F8u,c->r[0]); // 80262758
  c->lr=0x80262760u; f_80184A4C(c); // 8026275C
  goto L_80262768; // 80262760
L_80262764:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 80262764
L_80262768:;
  c->r[23]=c->r[23]+0x00000001u; // 80262768
  c->r[27]=c->r[27]+0x00000034u; // 8026276C
  cmpu(c,0,c->r[23],0x00000008u); // 80262770
  c->r[26]=c->r[26]+0x00000004u; // 80262774
  c->r[25]=c->r[25]+0x00000014u; // 80262778
  c->r[24]=c->r[24]+0x00000003u; // 8026277C
  c->r[28]=c->r[28]+0x00000004u; // 80262780
  if (crb(c,0)) { IRQCHK(c); goto L_80262538; } // 80262784
  c->r[11]=c->r[1]+0x000000D0u; // 80262788
  c->lr=0x80262790u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026278C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80262790
  c->lr=c->r[0]; // 80262794
  c->r[1]=c->r[1]+0x000000D0u; // 80262798
  return; // 8026279C
}

// LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp
void f_802627A0(Ctx* __restrict c) {
  trace_call(0x802627A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802627A0
  c->r[0]=c->lr; // 802627A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802627A8
  c->r[11]=c->r[1]+0x00000020u; // 802627AC
  c->lr=0x802627B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802627B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 802627B4
  c->r[31]=0u+0x80400000u; // 802627B8
  c->r[30]=c->r[3]|c->r[3]; // 802627BC
  cmps(c,0,(int32_t)c->r[0],0); // 802627C0
  c->r[31]=c->r[31]+0xFFFFD040u; // 802627C4
  if (crb(c,2)) { goto L_8026292C; } // 802627C8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 802627CC
  c->r[27]=R8(c->r[31]+0x00000000u); // 802627D0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 802627D4
  if (crb(c,2)) { goto L_80262868; } // 802627D8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 802627DC
  if (!crb(c,2)) { goto L_80262868; } // 802627E0
  cmps(c,0,(int32_t)c->r[27],0); // 802627E4
  if (crb(c,2)) { goto L_80262868; } // 802627E8
  c->r[29]=c->r[31]+0x0000000Cu; // 802627EC
  c->r[28]=0u+0x00000000u; // 802627F0
  goto L_80262850; // 802627F4
L_802627F8:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 802627F8
  c->r[7]=c->r[29]+c->r[3]; // 802627FC
  c->r[0]=R8(c->r[7]+0x00000064u); // 80262800
  cmpu(c,0,c->r[0],0x000000FFu); // 80262804
  if (crb(c,2)) { goto L_8026284C; } // 80262808
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 8026280C
  c->r[5]=rotl(c->r[28],3)&0x000007F8u; // 80262810
  c->r[4]=c->r[29]+c->r[0]; // 80262814
  c->r[6]=0u+0x00000000u; // 80262818
  c->r[4]=R16(c->r[4]+0x00000004u); // 8026281C
  c->r[10]=c->r[29]+c->r[5]; // 80262820
  c->r[5]=0u+0x00000000u; // 80262824
  c->r[8]=0u+0x00000000u; // 80262828
  W16(c->r[10]+0x00000024u,c->r[4]); // 8026282C
  c->r[9]=0u+0x00000000u; // 80262830
  c->r[0]=R8(c->r[7]+0x00000064u); // 80262834
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80262838
  c->r[7]=c->r[29]+c->r[0]; // 8026283C
  c->r[7]=R16(c->r[7]+0x00000006u); // 80262840
  W16(c->r[10]+0x00000026u,c->r[7]); // 80262844
  c->lr=0x8026284Cu; f_8025FB08(c); // 80262848
L_8026284C:;
  c->r[28]=c->r[28]+0x00000001u; // 8026284C
L_80262850:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 80262850
  cmpu(c,0,c->r[0],c->r[27]); // 80262854
  if (crb(c,0)) { IRQCHK(c); goto L_802627F8; } // 80262858
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8026285C
  c->r[0]=c->r[0]|0x00000001u; // 80262860
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80262864
L_80262868:;
  c->r[29]=c->r[31]+0x00000000u; // 80262868
  c->r[3]=R32(c->r[29]+0x00000008u); // 8026286C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80262870
  if (crb(c,2)) { goto L_802628A8; } // 80262874
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 80262878
  cmpu(c,0,c->r[0],0x00000003u); // 8026287C
  if (crb(c,2)) { goto L_802628A8; } // 80262880
  c->r[3]=R8(c->r[31]+0x00000000u); // 80262884
  c->r[4]=R8(c->r[29]+0x00000001u); // 80262888
  c->r[5]=R8(c->r[29]+0x00000002u); // 8026288C
  c->r[6]=R8(c->r[29]+0x00000003u); // 80262890
  c->r[7]=R32(c->r[29]+0x00000004u); // 80262894
  c->lr=0x8026289Cu; f_8025FA58(c); // 80262898
  c->r[0]=R32(c->r[29]+0x00000008u); // 8026289C
  c->r[0]=c->r[0]|0x00000003u; // 802628A0
  W32(c->r[29]+0x00000008u,c->r[0]); // 802628A4
L_802628A8:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 802628A8
  c->r[5]=0u+0x00000000u; // 802628AC
  c->r[0]=R32(c->r[31]+0x00000204u); // 802628B0
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 802628B4
  cmpu(c,0,c->r[3],c->r[0]); // 802628B8
  if (!crb(c,2)) { goto L_802628E8; } // 802628BC
  c->r[4]=c->r[31]+0x00000204u; // 802628C0
  c->r[3]=R32(c->r[6]+0x00000010u); // 802628C4
  c->r[0]=R32(c->r[4]+0x00000004u); // 802628C8
  cmpu(c,0,c->r[3],c->r[0]); // 802628CC
  if (!crb(c,2)) { goto L_802628E8; } // 802628D0
  c->r[3]=R32(c->r[6]+0x00000014u); // 802628D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 802628D8
  cmpu(c,0,c->r[3],c->r[0]); // 802628DC
  if (!crb(c,2)) { goto L_802628E8; } // 802628E0
  c->r[5]=0u+0x00000001u; // 802628E4
L_802628E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802628E8
  if (crb(c,2)) { goto L_802628F8; } // 802628EC
  c->r[5]=0u+0x00000001u; // 802628F0
  goto L_80262918; // 802628F4
L_802628F8:;
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 802628F8
  c->r[3]=c->r[31]+0x00000204u; // 802628FC
  c->r[0]=R32(c->r[6]+0x00000010u); // 80262900
  c->r[5]=0u+0x00000000u; // 80262904
  W32(c->r[31]+0x00000204u,c->r[4]); // 80262908
  W32(c->r[3]+0x00000004u,c->r[0]); // 8026290C
  c->r[0]=R32(c->r[6]+0x00000014u); // 80262910
  W32(c->r[3]+0x00000008u,c->r[0]); // 80262914
L_80262918:;
  c->r[4]=R8(c->r[13]+0xFFFFA3F0u); // 80262918
  c->r[0]=0u+0x00000000u; // 8026291C
  c->r[3]=c->r[30]|c->r[30]; // 80262920
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 80262924
  c->lr=0x8026292Cu; f_8025274C(c); // 80262928
L_8026292C:;
  c->r[11]=c->r[1]+0x00000020u; // 8026292C
  c->lr=0x80262934u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80262930
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262934
  c->lr=c->r[0]; // 80262938
  c->r[1]=c->r[1]+0x00000020u; // 8026293C
  return; // 80262940
}

// fn_80262944
void f_80262944(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262944
  c->r[0]=c->lr; // 80262948
  W32(c->r[1]+0x00000064u,c->r[0]); // 8026294C
  c->r[11]=c->r[1]+0x00000060u; // 80262950
  c->lr=0x80262958u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80262954
  c->r[0]=R32(c->r[3]+0x00000000u); // 80262958
  c->r[31]=0u+0x80400000u; // 8026295C
  c->r[27]=c->r[3]|c->r[3]; // 80262960
  c->r[28]=c->r[4]|c->r[4]; // 80262964
  cmps(c,0,(int32_t)c->r[0],0); // 80262968
  c->r[29]=c->r[5]|c->r[5]; // 8026296C
  c->r[31]=c->r[31]+0xFFFFD040u; // 80262970
  if (crb(c,2)) { goto L_80262C1C; } // 80262974
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80262978
  c->r[23]=R8(c->r[31]+0x00000000u); // 8026297C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80262980
  if (crb(c,2)) { goto L_80262A14; } // 80262984
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80262988
  if (!crb(c,2)) { goto L_80262A14; } // 8026298C
  cmps(c,0,(int32_t)c->r[23],0); // 80262990
  if (crb(c,2)) { goto L_80262A14; } // 80262994
  c->r[24]=c->r[31]+0x0000000Cu; // 80262998
  c->r[25]=0u+0x00000000u; // 8026299C
  goto L_802629FC; // 802629A0
L_802629A4:;
  c->r[3]=rotl(c->r[25],0)&0x000000FFu; // 802629A4
  c->r[7]=c->r[24]+c->r[3]; // 802629A8
  c->r[0]=R8(c->r[7]+0x00000064u); // 802629AC
  cmpu(c,0,c->r[0],0x000000FFu); // 802629B0
  if (crb(c,2)) { goto L_802629F8; } // 802629B4
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 802629B8
  c->r[5]=rotl(c->r[25],3)&0x000007F8u; // 802629BC
  c->r[4]=c->r[24]+c->r[0]; // 802629C0
  c->r[6]=0u+0x00000000u; // 802629C4
  c->r[4]=R16(c->r[4]+0x00000004u); // 802629C8
  c->r[10]=c->r[24]+c->r[5]; // 802629CC
  c->r[5]=0u+0x00000000u; // 802629D0
  c->r[8]=0u+0x00000000u; // 802629D4
  W16(c->r[10]+0x00000024u,c->r[4]); // 802629D8
  c->r[9]=0u+0x00000000u; // 802629DC
  c->r[0]=R8(c->r[7]+0x00000064u); // 802629E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802629E4
  c->r[7]=c->r[24]+c->r[0]; // 802629E8
  c->r[7]=R16(c->r[7]+0x00000006u); // 802629EC
  W16(c->r[10]+0x00000026u,c->r[7]); // 802629F0
  c->lr=0x802629F8u; f_8025FB08(c); // 802629F4
L_802629F8:;
  c->r[25]=c->r[25]+0x00000001u; // 802629F8
L_802629FC:;
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 802629FC
  cmpu(c,0,c->r[0],c->r[23]); // 80262A00
  if (crb(c,0)) { IRQCHK(c); goto L_802629A4; } // 80262A04
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80262A08
  c->r[0]=c->r[0]|0x00000001u; // 80262A0C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80262A10
L_80262A14:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80262A14
  c->r[18]=R32(c->r[3]+0x00000008u); // 80262A18
  c->r[30]=rotl(c->r[18],1)&0x00000001u; cr0(c,c->r[30]); // 80262A1C
  if (!crb(c,2)) { goto L_80262BA4; } // 80262A20
  cmps(c,0,(int32_t)c->r[28],0); // 80262A24
  if (crb(c,2)) { goto L_80262A70; } // 80262A28
  c->r[3]=c->r[28]|c->r[28]; // 80262A2C
  c->r[4]=0u+0x00000000u; // 80262A30
  c->lr=0x80262A38u; f_80184924(c); // 80262A34
  c->r[3]=R32(c->r[27]+0x00000000u); // 80262A38
  c->r[0]=R32(c->r[3]+0x00000030u); // 80262A3C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80262A40
  if (crb(c,2)) { goto L_80262A98; } // 80262A44
  cmps(c,0,(int32_t)c->r[29],0); // 80262A48
  if (crb(c,2)) { goto L_80262A60; } // 80262A4C
  c->r[3]=c->r[29]|c->r[29]; // 80262A50
  c->r[4]=0u+0x00000000u; // 80262A54
  c->lr=0x80262A5Cu; f_801849A0(c); // 80262A58
  goto L_80262A98; // 80262A5C
L_80262A60:;
  c->r[3]=c->r[28]|c->r[28]; // 80262A60
  c->r[4]=0u+0x00000000u; // 80262A64
  c->lr=0x80262A6Cu; f_801849A0(c); // 80262A68
  goto L_80262A98; // 80262A6C
L_80262A70:;
  c->r[3]=rotl(c->r[18],0)&0x0000FFFFu; // 80262A70
  c->r[4]=0u+0x00000000u; // 80262A74
  c->lr=0x80262A7Cu; f_80184974(c); // 80262A78
  c->r[3]=R32(c->r[27]+0x00000000u); // 80262A7C
  c->r[0]=R32(c->r[3]+0x00000030u); // 80262A80
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80262A84
  if (crb(c,2)) { goto L_80262A98; } // 80262A88
  c->r[3]=rotl(c->r[18],0)&0x0000FFFFu; // 80262A8C
  c->r[4]=0u+0x00000000u; // 80262A90
  c->lr=0x80262A98u; f_801849F8(c); // 80262A94
L_80262A98:;
  cmps(c,0,(int32_t)c->r[18],0); // 80262A98
  c->r[3]=0u+0x00000001u; // 80262A9C
  if (crb(c,0)) { goto L_80262BBC; } // 80262AA0
  c->r[0]=rotl(c->r[18],0)&0x0000FFFFu; // 80262AA4
  c->r[22]=c->r[31]+0x00000210u; // 80262AA8
  c->r[19]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80262AAC
  c->r[20]=c->r[1]+0x00000008u; // 80262AB0
  c->r[24]=c->r[31]+0x00000230u; // 80262AB4
  c->r[23]=0u+0x00000000u; // 80262AB8
  c->r[18]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80262ABC
  c->r[21]=0u+0x0000001Eu; // 80262AC0
  c->r[25]=0u+0x00000001u; // 80262AC4
  c->r[26]=0u+0x80400000u; // 80262AC8
  c->r[28]=0u+0x0000003Cu; // 80262ACC
  c->r[29]=0u+0x00000000u; // 80262AD0
L_80262AD4:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 80262AD4
  cmps(c,0,(int32_t)c->r[0],1); // 80262AD8
  if (!crb(c,2)) { goto L_80262B3C; } // 80262ADC
  c->r[0]=R32(c->r[24]+0x00000004u); // 80262AE0
  W32(c->r[20]+0x00000000u,c->r[21]); // 80262AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80262AE8
  if (crb(c,2)) { goto L_80262AF8; } // 80262AEC
  c->r[3]=c->r[0]+c->r[19]; // 80262AF0
  goto L_80262B2C; // 80262AF4
L_80262AF8:;
  c->r[0]=R8(c->r[13]+0xFFFFA400u); // 80262AF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80262AFC
  if (!crb(c,2)) { goto L_80262B08; } // 80262B00
  W8(c->r[13]+0xFFFFA400u,c->r[25]); // 80262B04
L_80262B08:;
  c->r[0]=R32(c->r[31]+0x00000230u); // 80262B08
  c->r[3]=c->r[26]+0x000025D8u; // 80262B0C
  cmps(c,0,(int32_t)c->r[0],0); // 80262B10
  if (crb(c,2)) { goto L_80262B20; } // 80262B14
  c->r[4]=c->r[0]+c->r[18]; // 80262B18
  goto L_80262B24; // 80262B1C
L_80262B20:;
  c->r[4]=0u+0x00000000u; // 80262B20
L_80262B24:;
  c->lr=0x80262B28u; f_80258E8C(c); // 80262B24
  c->r[3]=c->r[26]+0x000025D8u; // 80262B28
L_80262B2C:;
  c->r[4]=R32(c->r[20]+0x00000000u); // 80262B2C
  c->lr=0x80262B34u; f_8025FEE8(c); // 80262B30
  c->r[3]=0u+0x00000000u; // 80262B34
  goto L_80262B54; // 80262B38
L_80262B3C:;
  cmps(c,0,(int32_t)c->r[0],2); // 80262B3C
  if (!crb(c,2)) { goto L_80262B50; } // 80262B40
  W32(c->r[20]+0x00000000u,c->r[29]); // 80262B44
  c->r[3]=0u+0x00000000u; // 80262B48
  goto L_80262B54; // 80262B4C
L_80262B50:;
  W32(c->r[20]+0x00000000u,c->r[28]); // 80262B50
L_80262B54:;
  c->r[23]=c->r[23]+0x00000001u; // 80262B54
  c->r[21]=c->r[21]+0x00000003u; // 80262B58
  cmpu(c,0,c->r[23],0x00000008u); // 80262B5C
  c->r[20]=c->r[20]+0x00000004u; // 80262B60
  c->r[22]=c->r[22]+0x00000004u; // 80262B64
  if (crb(c,0)) { IRQCHK(c); goto L_80262AD4; } // 80262B68
  cmps(c,0,(int32_t)c->r[3],0); // 80262B6C
  if (crb(c,2)) { goto L_80262B90; } // 80262B70
  c->r[0]=R8(c->r[13]+0xFFFFA3F4u); // 80262B74
  cmps(c,0,(int32_t)c->r[0],0); // 80262B78
  if (!crb(c,2)) { goto L_80262BBC; } // 80262B7C
  c->lr=0x80262B84u; f_8025FE10(c); // 80262B80
  c->r[0]=0u+0x00000001u; // 80262B84
  W8(c->r[13]+0xFFFFA3F4u,c->r[0]); // 80262B88
  goto L_80262BBC; // 80262B8C
L_80262B90:;
  c->r[3]=c->r[1]+0x00000008u; // 80262B90
  c->lr=0x80262B98u; f_8025FE6C(c); // 80262B94
  c->r[0]=0u+0x00000000u; // 80262B98
  W8(c->r[13]+0xFFFFA3F4u,c->r[0]); // 80262B9C
  goto L_80262BBC; // 80262BA0
L_80262BA4:;
  c->r[0]=R8(c->r[13]+0xFFFFA3F4u); // 80262BA4
  cmps(c,0,(int32_t)c->r[0],0); // 80262BA8
  if (!crb(c,2)) { goto L_80262BBC; } // 80262BAC
  c->lr=0x80262BB4u; f_8025FE10(c); // 80262BB0
  c->r[0]=0u+0x00000001u; // 80262BB4
  W8(c->r[13]+0xFFFFA3F4u,c->r[0]); // 80262BB8
L_80262BBC:;
  c->r[28]=c->r[31]+0x00000000u; // 80262BBC
  c->r[3]=R32(c->r[28]+0x00000008u); // 80262BC0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80262BC4
  if (crb(c,2)) { goto L_80262BFC; } // 80262BC8
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 80262BCC
  cmpu(c,0,c->r[0],0x00000003u); // 80262BD0
  if (crb(c,2)) { goto L_80262BFC; } // 80262BD4
  c->r[3]=R8(c->r[31]+0x00000000u); // 80262BD8
  c->r[4]=R8(c->r[28]+0x00000001u); // 80262BDC
  c->r[5]=R8(c->r[28]+0x00000002u); // 80262BE0
  c->r[6]=R8(c->r[28]+0x00000003u); // 80262BE4
  c->r[7]=R32(c->r[28]+0x00000004u); // 80262BE8
  c->lr=0x80262BF0u; f_8025FA58(c); // 80262BEC
  c->r[0]=R32(c->r[28]+0x00000008u); // 80262BF0
  c->r[0]=c->r[0]|0x00000003u; // 80262BF4
  W32(c->r[28]+0x00000008u,c->r[0]); // 80262BF8
L_80262BFC:;
  c->r[4]=R8(c->r[13]+0xFFFFA3F0u); // 80262BFC
  c->r[28]=0u+0x00000000u; // 80262C00
  c->r[3]=c->r[27]|c->r[27]; // 80262C04
  W8(c->r[13]+0xFFFFA3F0u,c->r[28]); // 80262C08
  c->lr=0x80262C10u; f_80252824(c); // 80262C0C
  cmps(c,0,(int32_t)c->r[30],0); // 80262C10
  if (crb(c,2)) { goto L_80262C1C; } // 80262C14
  W8(c->r[13]+0xFFFFA3F4u,c->r[28]); // 80262C18
L_80262C1C:;
  c->r[11]=c->r[1]+0x00000060u; // 80262C1C
  c->lr=0x80262C24u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80262C20
  c->r[0]=R32(c->r[1]+0x00000064u); // 80262C24
  c->lr=c->r[0]; // 80262C28
  c->r[1]=c->r[1]+0x00000060u; // 80262C2C
  return; // 80262C30
}

// SetViewPosNrmMtxArray__Q34nw4r3g3d8G3DStateFPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_80262C34(Ctx* __restrict c) {
  trace_call(0x80262C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262C34
  c->r[0]=c->lr; // 80262C38
  c->r[7]=0u+0x80400000u; // 80262C3C
  cmps(c,0,(int32_t)c->r[3],0); // 80262C40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80262C44
  c->r[6]=c->r[7]+0xFFFFD270u; // 80262C48
  W32(c->r[7]+0xFFFFD270u,c->r[3]); // 80262C4C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80262C50
  W32(c->r[6]+0x00000008u,c->r[5]); // 80262C54
  if (crb(c,2)) { goto L_80262C6C; } // 80262C58
  c->r[4]=c->r[3]|c->r[3]; // 80262C5C
  c->r[3]=0u+0x00000015u; // 80262C60
  c->r[5]=0u+0x00000030u; // 80262C64
  c->lr=0x80262C6Cu; f_8017FF8C(c); // 80262C68
L_80262C6C:;
  c->r[3]=0u+0x80400000u; // 80262C6C
  c->r[3]=c->r[3]+0xFFFFD270u; // 80262C70
  c->r[4]=R32(c->r[3]+0x00000004u); // 80262C74
  cmps(c,0,(int32_t)c->r[4],0); // 80262C78
  if (crb(c,2)) { goto L_80262C8C; } // 80262C7C
  c->r[3]=0u+0x00000016u; // 80262C80
  c->r[5]=0u+0x00000024u; // 80262C84
  c->lr=0x80262C8Cu; f_8017FF8C(c); // 80262C88
L_80262C8C:;
  c->r[3]=0u+0x80400000u; // 80262C8C
  c->r[3]=c->r[3]+0xFFFFD270u; // 80262C90
  c->r[4]=R32(c->r[3]+0x00000008u); // 80262C94
  cmps(c,0,(int32_t)c->r[4],0); // 80262C98
  if (crb(c,2)) { goto L_80262CAC; } // 80262C9C
  c->r[3]=0u+0x00000017u; // 80262CA0
  c->r[5]=0u+0x00000030u; // 80262CA4
  c->lr=0x80262CACu; f_8017FF8C(c); // 80262CA8
L_80262CAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80262CAC
  c->lr=c->r[0]; // 80262CB0
  c->r[1]=c->r[1]+0x00000010u; // 80262CB4
  return; // 80262CB8
}

// fn_80262CBC
void f_80262CBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262CBC
  c->r[0]=c->lr; // 80262CC0
  c->r[4]=0u+0x80400000u; // 80262CC4
  c->r[5]=c->r[3]|c->r[3]; // 80262CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80262CCC
  c->r[4]=c->r[4]+0xFFFFD270u; // 80262CD0
  c->r[4]=R32(c->r[4]+0x00000004u); // 80262CD4
  cmps(c,0,(int32_t)c->r[4],0); // 80262CD8
  if (crb(c,2)) { goto L_80262CEC; } // 80262CDC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)36); // 80262CE0
  c->r[3]=c->r[4]+c->r[0]; // 80262CE4
  goto L_80262D34; // 80262CE8
L_80262CEC:;
  c->r[0]=R8(c->r[13]+0xFFFFA400u); // 80262CEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80262CF0
  if (!crb(c,2)) { goto L_80262D00; } // 80262CF4
  c->r[0]=0u+0x00000001u; // 80262CF8
  W8(c->r[13]+0xFFFFA400u,c->r[0]); // 80262CFC
L_80262D00:;
  c->r[4]=0u+0x80400000u; // 80262D00
  c->r[3]=0u+0x80400000u; // 80262D04
  c->r[4]=R32(c->r[4]+0xFFFFD270u); // 80262D08
  c->r[3]=c->r[3]+0x000025D8u; // 80262D0C
  cmps(c,0,(int32_t)c->r[4],0); // 80262D10
  if (crb(c,2)) { goto L_80262D24; } // 80262D14
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 80262D18
  c->r[4]=c->r[4]+c->r[0]; // 80262D1C
  goto L_80262D28; // 80262D20
L_80262D24:;
  c->r[4]=0u+0x00000000u; // 80262D24
L_80262D28:;
  c->lr=0x80262D2Cu; f_80258E8C(c); // 80262D28
  c->r[3]=0u+0x80400000u; // 80262D2C
  c->r[3]=c->r[3]+0x000025D8u; // 80262D30
L_80262D34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80262D34
  c->lr=c->r[0]; // 80262D38
  c->r[1]=c->r[1]+0x00000010u; // 80262D3C
  return; // 80262D40
}

// SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType
void f_80262D44(Ctx* __restrict c) {
  trace_call(0x80262D44u);
  cmpu(c,0,c->r[3],0x00000004u); // 80262D44
  if (!crb(c,1)) return; // 80262D48
  cmpu(c,0,c->r[3],0x00000100u); // 80262D4C
  if (!crb(c,0)) return; // 80262D50
  cmps(c,0,(int32_t)c->r[4],0); // 80262D54
  if (crb(c,2)) { goto L_80262D84; } // 80262D58
  cmps(c,0,(int32_t)c->r[5],4); // 80262D5C
  if (crb(c,0)) { goto L_80262D68; } // 80262D60
  c->r[5]=0u+0x00000000u; // 80262D64
L_80262D68:;
  c->r[6]=0u+0x80400000u; // 80262D68
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80262D6C
  c->r[6]=c->r[6]+0xFFFFD280u; // 80262D70
  W32(c->r[6]+c->r[0],c->r[4]); // 80262D74
  c->r[3]=c->r[6]+c->r[0]; // 80262D78
  W32(c->r[3]+0x00000004u,c->r[5]); // 80262D7C
  return; // 80262D80
L_80262D84:;
  c->r[5]=0u+0x80260000u; // 80262D84
  c->r[4]=0u+0x80400000u; // 80262D88
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80262D8C
  c->r[0]=0u+0x00000000u; // 80262D90
  c->r[4]=c->r[4]+0xFFFFD280u; // 80262D94
  c->r[5]=c->r[5]+0x00000AE8u; // 80262D98
  W32(c->r[4]+c->r[3],c->r[5]); // 80262D9C
  c->r[3]=c->r[4]+c->r[3]; // 80262DA0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80262DA4
  return; // 80262DA8
}

// GetIndMtxOp__Q34nw4r3g3d8G3DStateFv
void f_80262DAC(Ctx* __restrict c) {
  trace_call(0x80262DACu);
  c->r[3]=R32(c->r[13]+0xFFFF9724u); // 80262DAC
  return; // 80262DB0
}

// SetFog__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d3Fogi
void f_80262DB4(Ctx* __restrict c) {
  trace_call(0x80262DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262DB4
  c->r[0]=c->lr; // 80262DB8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80262DBC
  cmps(c,0,(int32_t)c->r[4],0); // 80262DC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80262DC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80262DC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80262DCC
  c->r[30]=c->r[4]|c->r[4]; // 80262DD0
  W32(c->r[1]+0x00000008u,c->r[3]); // 80262DD4
  if (crb(c,0)) { goto L_80262E40; } // 80262DD8
  cmps(c,0,(int32_t)c->r[4],32); // 80262DDC
  if (!crb(c,0)) { goto L_80262E40; } // 80262DE0
  cmps(c,0,(int32_t)c->r[3],0); // 80262DE4
  if (crb(c,2)) { goto L_80262E40; } // 80262DE8
  c->r[31]=0u+0x80400000u; // 80262DEC
  c->r[6]=c->r[31]+0xFFFFDA80u; // 80262DF0
  c->r[0]=R32(c->r[6]+0x00000004u); // 80262DF4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80262DF8
  if (!crb(c,2)) { goto L_80262E24; } // 80262DFC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 80262E00
  c->r[5]=0u+0x00000030u; // 80262E04
  c->r[4]=c->r[6]+c->r[0]; // 80262E08
  c->r[4]=c->r[4]+0x00000008u; // 80262E0C
  c->lr=0x80262E14u; f_8018C170(c); // 80262E10
  cmps(c,0,(int32_t)c->r[3],0); // 80262E14
  if (crb(c,2)) { goto L_80262E40; } // 80262E18
  c->r[0]=0u+0x00000000u; // 80262E1C
  W32(c->r[31]+0xFFFFDA80u,c->r[0]); // 80262E20
L_80262E24:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)48); // 80262E24
  c->r[4]=0u+0x80400000u; // 80262E28
  c->r[3]=c->r[1]+0x00000008u; // 80262E2C
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80262E30
  c->r[4]=c->r[4]+c->r[0]; // 80262E34
  c->r[4]=c->r[4]+0x00000008u; // 80262E38
  c->lr=0x80262E40u; f_80276C50(c); // 80262E3C
L_80262E40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262E40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80262E44
  c->r[30]=R32(c->r[1]+0x00000018u); // 80262E48
  c->lr=c->r[0]; // 80262E4C
  c->r[1]=c->r[1]+0x00000020u; // 80262E50
  return; // 80262E54
}

// LoadFog__Q34nw4r3g3d8G3DStateFi
void f_80262E58(Ctx* __restrict c) {
  trace_call(0x80262E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262E58
  c->r[0]=c->lr; // 80262E5C
  c->r[4]=0u+0x80400000u; // 80262E60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80262E64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80262E68
  c->r[31]=c->r[3]|c->r[3]; // 80262E6C
  c->r[5]=R32(c->r[4]+0xFFFFDA80u); // 80262E70
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 80262E74
  if (crb(c,2)) { goto L_80262E94; } // 80262E78
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80262E7C
  if (crb(c,2)) { goto L_80262E94; } // 80262E80
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80262E84
  c->r[0]=R32(c->r[4]+0x00000004u); // 80262E88
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80262E8C
  if (crb(c,2)) { goto L_80262F04; } // 80262E90
L_80262E94:;
  cmps(c,0,(int32_t)c->r[3],0); // 80262E94
  if (crb(c,0)) { goto L_80262EA4; } // 80262E98
  cmps(c,0,(int32_t)c->r[3],32); // 80262E9C
  if (crb(c,0)) { goto L_80262ECC; } // 80262EA0
L_80262EA4:;
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80262EA4
  c->r[0]=0u+0x00000000u; // 80262EA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80262EAC
  c->r[4]=c->r[1]+0x00000008u; // 80262EB0
  c->f[2]=c->f[1]; // 80262EB4
  c->r[3]=0u+0x00000000u; // 80262EB8
  c->f[3]=c->f[1]; // 80262EBC
  c->f[4]=c->f[1]; // 80262EC0
  c->lr=0x80262EC8u; f_80183E90(c); // 80262EC4
  goto L_80262EEC; // 80262EC8
L_80262ECC:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 80262ECC
  c->r[4]=0u+0x80400000u; // 80262ED0
  c->r[3]=c->r[1]+0x0000000Cu; // 80262ED4
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80262ED8
  c->r[4]=c->r[4]+c->r[0]; // 80262EDC
  c->r[4]=c->r[4]+0x00000008u; // 80262EE0
  c->lr=0x80262EE8u; f_80276BD8(c); // 80262EE4
  c->lr=0x80262EECu; f_80276CC4(c); // 80262EE8
L_80262EEC:;
  c->r[4]=0u+0x80400000u; // 80262EEC
  c->r[0]=R32(c->r[4]+0xFFFFDA80u); // 80262EF0
  c->r[3]=c->r[4]+0xFFFFDA80u; // 80262EF4
  W32(c->r[3]+0x00000004u,c->r[31]); // 80262EF8
  c->r[0]=c->r[0]|0x00000003u; // 80262EFC
  W32(c->r[4]+0xFFFFDA80u,c->r[0]); // 80262F00
L_80262F04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262F04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80262F08
  c->lr=c->r[0]; // 80262F0C
  c->r[1]=c->r[1]+0x00000020u; // 80262F10
  return; // 80262F14
}

// SetLightSetting__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d12LightSetting
void f_80262F18(Ctx* __restrict c) {
  trace_call(0x80262F18u);
  c->r[5]=0u+0x80400000u; // 80262F18
  c->r[4]=c->r[3]|c->r[3]; // 80262F1C
  c->r[3]=c->r[5]+0xFFFFE094u; // 80262F20
  f_80260BB4(c); return; // 80262F24
}

// fn_80262F28
void f_80262F28(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 80262F28
  if (crb(c,0)) { goto L_80262F50; } // 80262F2C
  cmps(c,0,(int32_t)c->r[3],128); // 80262F30
  if (!crb(c,0)) { goto L_80262F50; } // 80262F34
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 80262F38
  c->r[3]=0u+0x80400000u; // 80262F3C
  c->r[3]=c->r[3]+0xFFFFE094u; // 80262F40
  c->r[3]=c->r[3]+c->r[0]; // 80262F44
  c->r[3]=c->r[3]+0x0000002Cu; // 80262F48
  return; // 80262F4C
L_80262F50:;
  c->r[3]=0u+0x00000000u; // 80262F50
  return; // 80262F54
}

// fn_80262F58
void f_80262F58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262F58
  c->r[0]=c->lr; // 80262F5C
  c->r[12]=c->r[4]|c->r[4]; // 80262F60
  c->r[11]=c->r[5]|c->r[5]; // 80262F64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80262F68
  c->r[10]=c->r[6]|c->r[6]; // 80262F6C
  c->r[0]=c->r[7]|c->r[7]; // 80262F70
  c->r[9]=c->r[8]|c->r[8]; // 80262F74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80262F78
  c->r[31]=c->r[3]|c->r[3]; // 80262F7C
  c->r[3]=0u+0x80400000u; // 80262F80
  c->r[5]=c->r[12]|c->r[12]; // 80262F84
  c->r[4]=c->r[31]|c->r[31]; // 80262F88
  c->r[6]=c->r[11]|c->r[11]; // 80262F8C
  c->r[7]=c->r[10]|c->r[10]; // 80262F90
  c->r[8]=c->r[0]|c->r[0]; // 80262F94
  c->r[3]=c->r[3]+0xFFFFE094u; // 80262F98
  c->lr=0x80262FA0u; f_80260CA8(c); // 80262F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80262FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80262FA4
  c->lr=c->r[0]; // 80262FA8
  c->r[1]=c->r[1]+0x00000010u; // 80262FAC
  return; // 80262FB0
}

// fn_80262FB4
void f_80262FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262FB4
  c->r[0]=c->lr; // 80262FB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80262FBC
  c->r[11]=c->r[1]+0x00000020u; // 80262FC0
  c->lr=0x80262FC8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80262FC4
  cmps(c,0,(int32_t)c->r[4],32); // 80262FC8
  c->r[26]=c->r[3]|c->r[3]; // 80262FCC
  c->r[27]=c->r[4]|c->r[4]; // 80262FD0
  c->r[28]=c->r[5]|c->r[5]; // 80262FD4
  if (!crb(c,0)) { goto L_80263048; } // 80262FD8
  cmps(c,0,(int32_t)c->r[4],0); // 80262FDC
  if (crb(c,0)) { goto L_80263048; } // 80262FE0
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 80262FE4
  c->r[30]=0u+0x80400000u; // 80262FE8
  c->r[31]=c->r[30]+0x00000AC0u; // 80262FEC
  c->r[4]=c->r[31]+c->r[29]; // 80262FF0
  c->r[4]=c->r[4]+0x00000034u; // 80262FF4
  c->lr=0x80262FFCu; f_80269D90(c); // 80262FF8
  c->r[0]=rotl(c->r[27],6)&0xFFFFFFC0u; // 80262FFC
  c->r[3]=c->r[26]|c->r[26]; // 80263000
  c->r[4]=c->r[31]+c->r[0]; // 80263004
  c->r[4]=c->r[4]+0x00000634u; // 80263008
  c->lr=0x80263010u; f_80269DF0(c); // 8026300C
  c->r[4]=c->r[31]+c->r[29]; // 80263010
  c->r[3]=c->r[26]|c->r[26]; // 80263014
  c->r[4]=c->r[4]+0x00000E34u; // 80263018
  c->lr=0x80263020u; f_80269ECC(c); // 8026301C
  c->r[4]=c->r[31]+c->r[29]; // 80263020
  c->r[3]=c->r[26]|c->r[26]; // 80263024
  c->r[4]=c->r[4]+0x00001434u; // 80263028
  c->lr=0x80263030u; f_80269F9C(c); // 8026302C
  cmps(c,0,(int32_t)c->r[28],0); // 80263030
  if (crb(c,2)) { goto L_80263048; } // 80263034
  c->r[0]=R16(c->r[30]+0x00000AC0u); // 80263038
  W16(c->r[31]+0x00000002u,c->r[27]); // 8026303C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 80263040
  W16(c->r[30]+0x00000AC0u,c->r[0]); // 80263044
L_80263048:;
  c->r[11]=c->r[1]+0x00000020u; // 80263048
  c->lr=0x80263050u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026304C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80263050
  c->lr=c->r[0]; // 80263054
  c->r[1]=c->r[1]+0x00000020u; // 80263058
  return; // 8026305C
}

// fn_80263060
void f_80263060(Ctx* __restrict c) {
  c->r[3]=0u+0x80400000u; // 80263060
  c->r[3]=c->r[3]+0x00000AC0u; // 80263064
  c->r[0]=R16(c->r[3]+0x00000002u); // 80263068
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8026306C
  c->r[3]=c->r[3]+c->r[0]; // 80263070
  c->r[3]=c->r[3]+0x00000034u; // 80263074
  return; // 80263078
}

// fn_8026307C
void f_8026307C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026307C
  c->r[0]=c->lr; // 80263080
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80263088
  c->r[31]=0u+0x80400000u; // 8026308C
  c->r[0]=R16(c->r[31]+0x00000AC0u); // 80263090
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80263094
  if (!crb(c,2)) { goto L_802630C4; } // 80263098
  c->r[3]=c->r[31]+0x00000AC0u; // 8026309C
  c->r[0]=R16(c->r[3]+0x00000002u); // 802630A0
  c->r[4]=c->r[3]+0x00000004u; // 802630A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802630A8
  c->r[3]=c->r[3]+c->r[0]; // 802630AC
  c->r[3]=c->r[3]+0x00000034u; // 802630B0
  c->lr=0x802630B8u; f_8016825C(c); // 802630B4
  c->r[0]=R16(c->r[31]+0x00000AC0u); // 802630B8
  c->r[0]=c->r[0]|0x00000001u; // 802630BC
  W16(c->r[31]+0x00000AC0u,c->r[0]); // 802630C0
L_802630C4:;
  c->r[3]=0u+0x80400000u; // 802630C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802630C8
  c->r[3]=c->r[3]+0x00000AC0u; // 802630CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802630D0
  c->r[3]=c->r[3]+0x00000004u; // 802630D4
  c->lr=c->r[0]; // 802630D8
  c->r[1]=c->r[1]+0x00000010u; // 802630DC
  return; // 802630E0
}

// fn_802630E4
void f_802630E4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],32); // 802630E4
  if (!crb(c,0)) { goto L_8026310C; } // 802630E8
  cmps(c,0,(int32_t)c->r[3],0); // 802630EC
  if (crb(c,0)) { goto L_8026310C; } // 802630F0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 802630F4
  c->r[3]=0u+0x80400000u; // 802630F8
  c->r[3]=c->r[3]+0x00000AC0u; // 802630FC
  c->r[3]=c->r[3]+c->r[0]; // 80263100
  c->r[3]=c->r[3]+0x00000034u; // 80263104
  return; // 80263108
L_8026310C:;
  c->r[3]=0u+0x00000000u; // 8026310C
  return; // 80263110
}

// fn_80263114
void f_80263114(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],32); // 80263114
  if (!crb(c,0)) { goto L_8026313C; } // 80263118
  cmps(c,0,(int32_t)c->r[3],0); // 8026311C
  if (crb(c,0)) { goto L_8026313C; } // 80263120
  c->r[4]=0u+0x80400000u; // 80263124
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 80263128
  c->r[4]=c->r[4]+0x00000AC0u; // 8026312C
  c->r[3]=c->r[4]+c->r[0]; // 80263130
  c->r[3]=c->r[3]+0x00000634u; // 80263134
  return; // 80263138
L_8026313C:;
  c->r[3]=0u+0x00000000u; // 8026313C
  return; // 80263140
}

// fn_80263144
void f_80263144(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],32); // 80263144
  if (!crb(c,0)) { goto L_8026316C; } // 80263148
  cmps(c,0,(int32_t)c->r[3],0); // 8026314C
  if (crb(c,0)) { goto L_8026316C; } // 80263150
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 80263154
  c->r[3]=0u+0x80400000u; // 80263158
  c->r[3]=c->r[3]+0x00000AC0u; // 8026315C
  c->r[3]=c->r[3]+c->r[0]; // 80263160
  c->r[3]=c->r[3]+0x00000E34u; // 80263164
  return; // 80263168
L_8026316C:;
  c->r[3]=0u+0x00000000u; // 8026316C
  return; // 80263170
}

// fn_80263174
void f_80263174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263174
  c->r[0]=c->lr; // 80263178
  W32(c->r[1]+0x00000094u,c->r[0]); // 8026317C
  c->r[11]=c->r[1]+0x00000090u; // 80263180
  c->lr=0x80263188u; f_80185EA0(c); // 80263184
  c->r[15]=R8(c->r[3]+0x00000029u); // 80263188
  c->r[4]=0u+0x80400000u; // 8026318C
  c->r[18]=c->r[4]+0x000024F4u; // 80263190
  c->r[0]=R8(c->r[3]+0x00000027u); // 80263194
  W32(c->r[1]+0x00000040u,c->r[15]); // 80263198
  c->r[15]=R8(c->r[3]+0x0000002Au); // 8026319C
  W8(c->r[18]+0x00000027u,c->r[0]); // 802631A0
  c->r[0]=R32(c->r[1]+0x00000040u); // 802631A4
  W32(c->r[1]+0x00000008u,c->r[15]); // 802631A8
  c->r[15]=R8(c->r[3]+0x0000002Bu); // 802631AC
  W8(c->r[18]+0x00000029u,c->r[0]); // 802631B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 802631B4
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 802631B8
  c->r[15]=R8(c->r[3]+0x0000002Cu); // 802631BC
  W8(c->r[18]+0x0000002Au,c->r[0]); // 802631C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802631C4
  W32(c->r[1]+0x00000010u,c->r[15]); // 802631C8
  c->r[15]=R8(c->r[3]+0x0000002Du); // 802631CC
  W8(c->r[18]+0x0000002Bu,c->r[0]); // 802631D0
  c->r[0]=R32(c->r[1]+0x00000010u); // 802631D4
  W32(c->r[1]+0x00000014u,c->r[15]); // 802631D8
  c->r[15]=R8(c->r[3]+0x0000002Eu); // 802631DC
  W8(c->r[18]+0x0000002Cu,c->r[0]); // 802631E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802631E4
  W32(c->r[1]+0x00000018u,c->r[15]); // 802631E8
  c->r[15]=R8(c->r[3]+0x0000002Fu); // 802631EC
  W8(c->r[18]+0x0000002Du,c->r[0]); // 802631F0
  c->r[0]=R32(c->r[1]+0x00000018u); // 802631F4
  W32(c->r[1]+0x0000001Cu,c->r[15]); // 802631F8
  c->r[15]=R8(c->r[3]+0x00000030u); // 802631FC
  W8(c->r[18]+0x0000002Eu,c->r[0]); // 80263200
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80263204
  W32(c->r[1]+0x00000020u,c->r[15]); // 80263208
  c->r[15]=R8(c->r[3]+0x00000031u); // 8026320C
  W8(c->r[18]+0x0000002Fu,c->r[0]); // 80263210
  c->r[0]=R32(c->r[1]+0x00000020u); // 80263214
  W32(c->r[1]+0x00000024u,c->r[15]); // 80263218
  c->r[15]=R8(c->r[3]+0x00000032u); // 8026321C
  W8(c->r[18]+0x00000030u,c->r[0]); // 80263220
  c->r[0]=R32(c->r[1]+0x00000024u); // 80263224
  W32(c->r[1]+0x00000028u,c->r[15]); // 80263228
  c->r[15]=R8(c->r[3]+0x00000033u); // 8026322C
  W8(c->r[18]+0x00000031u,c->r[0]); // 80263230
  c->r[0]=R32(c->r[1]+0x00000028u); // 80263234
  W32(c->r[1]+0x0000002Cu,c->r[15]); // 80263238
  c->r[15]=R8(c->r[3]+0x00000034u); // 8026323C
  W8(c->r[18]+0x00000032u,c->r[0]); // 80263240
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80263244
  W32(c->r[1]+0x00000030u,c->r[15]); // 80263248
  c->r[15]=R8(c->r[3]+0x00000035u); // 8026324C
  W8(c->r[18]+0x00000033u,c->r[0]); // 80263250
  c->r[0]=R32(c->r[1]+0x00000030u); // 80263254
  W32(c->r[1]+0x00000034u,c->r[15]); // 80263258
  c->r[15]=R8(c->r[3]+0x00000036u); // 8026325C
  W8(c->r[18]+0x00000034u,c->r[0]); // 80263260
  c->r[0]=R32(c->r[1]+0x00000034u); // 80263264
  W32(c->r[1]+0x00000038u,c->r[15]); // 80263268
  c->r[15]=R8(c->r[3]+0x00000037u); // 8026326C
  W8(c->r[18]+0x00000035u,c->r[0]); // 80263270
  c->r[0]=R32(c->r[1]+0x00000038u); // 80263274
  W32(c->r[1]+0x0000003Cu,c->r[15]); // 80263278
  c->r[17]=R16(c->r[3]+0x00000004u); // 8026327C
  c->r[19]=R16(c->r[3]+0x00000006u); // 80263280
  c->r[20]=R16(c->r[3]+0x00000008u); // 80263284
  c->r[21]=R16(c->r[3]+0x0000000Au); // 80263288
  c->r[22]=R16(c->r[3]+0x0000000Cu); // 8026328C
  c->r[23]=R16(c->r[3]+0x0000000Eu); // 80263290
  c->r[24]=R16(c->r[3]+0x00000010u); // 80263294
  c->r[25]=R32(c->r[3]+0x00000014u); // 80263298
  c->r[26]=R8(c->r[3]+0x00000018u); // 8026329C
  c->r[27]=R8(c->r[3]+0x00000019u); // 802632A0
  c->r[28]=R8(c->r[3]+0x0000001Au); // 802632A4
  c->r[29]=R8(c->r[3]+0x0000001Bu); // 802632A8
  c->r[30]=R8(c->r[3]+0x0000001Cu); // 802632AC
  c->r[31]=R8(c->r[3]+0x0000001Du); // 802632B0
  c->r[12]=R8(c->r[3]+0x0000001Eu); // 802632B4
  c->r[11]=R8(c->r[3]+0x0000001Fu); // 802632B8
  c->r[10]=R8(c->r[3]+0x00000020u); // 802632BC
  c->r[9]=R8(c->r[3]+0x00000021u); // 802632C0
  c->r[8]=R8(c->r[3]+0x00000022u); // 802632C4
  c->r[7]=R8(c->r[3]+0x00000023u); // 802632C8
  c->r[6]=R8(c->r[3]+0x00000024u); // 802632CC
  c->r[5]=R8(c->r[3]+0x00000025u); // 802632D0
  c->r[4]=R8(c->r[3]+0x00000026u); // 802632D4
  c->r[14]=R8(c->r[3]+0x00000028u); // 802632D8
  c->r[15]=R8(c->r[3]+0x00000038u); // 802632DC
  c->r[16]=R32(c->r[3]+0x00000000u); // 802632E0
  c->r[3]=0u+0x80400000u; // 802632E4
  W8(c->r[18]+0x00000036u,c->r[0]); // 802632E8
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 802632EC
  W32(c->r[3]+0x000024F4u,c->r[16]); // 802632F0
  W16(c->r[18]+0x00000004u,c->r[17]); // 802632F4
  W16(c->r[18]+0x00000006u,c->r[19]); // 802632F8
  W16(c->r[18]+0x00000008u,c->r[20]); // 802632FC
  W16(c->r[18]+0x0000000Au,c->r[21]); // 80263300
  W16(c->r[18]+0x0000000Cu,c->r[22]); // 80263304
  W16(c->r[18]+0x0000000Eu,c->r[23]); // 80263308
  W16(c->r[18]+0x00000010u,c->r[24]); // 8026330C
  W32(c->r[18]+0x00000014u,c->r[25]); // 80263310
  W8(c->r[18]+0x00000018u,c->r[26]); // 80263314
  W8(c->r[18]+0x00000019u,c->r[27]); // 80263318
  W8(c->r[18]+0x0000001Au,c->r[28]); // 8026331C
  W8(c->r[18]+0x0000001Bu,c->r[29]); // 80263320
  W8(c->r[18]+0x0000001Cu,c->r[30]); // 80263324
  W8(c->r[18]+0x0000001Du,c->r[31]); // 80263328
  W8(c->r[18]+0x0000001Eu,c->r[12]); // 8026332C
  W8(c->r[18]+0x0000001Fu,c->r[11]); // 80263330
  W8(c->r[18]+0x00000020u,c->r[10]); // 80263334
  W8(c->r[18]+0x00000021u,c->r[9]); // 80263338
  W8(c->r[18]+0x00000022u,c->r[8]); // 8026333C
  W8(c->r[18]+0x00000023u,c->r[7]); // 80263340
  W8(c->r[18]+0x00000024u,c->r[6]); // 80263344
  W8(c->r[18]+0x00000025u,c->r[5]); // 80263348
  W8(c->r[18]+0x00000026u,c->r[4]); // 8026334C
  W8(c->r[18]+0x00000028u,c->r[14]); // 80263350
  W8(c->r[18]+0x00000037u,c->r[0]); // 80263354
  W8(c->r[18]+0x00000038u,c->r[15]); // 80263358
  c->r[11]=c->r[1]+0x00000090u; // 8026335C
  c->lr=0x80263364u; f_80185EEC(c); // 80263360
  c->r[0]=R32(c->r[1]+0x00000094u); // 80263364
  c->lr=c->r[0]; // 80263368
  c->r[1]=c->r[1]+0x00000090u; // 8026336C
  return; // 80263370
}

// fn_80263374
void f_80263374(Ctx* __restrict c) {
  c->r[3]=0u+0x80400000u; // 80263374
  c->r[3]=c->r[3]+0x000024F4u; // 80263378
  return; // 8026337C
}

// fn_80263380
void f_80263380(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80263380
  c->r[4]=0u+0x80400000u; // 80263384
  c->r[4]=c->r[4]+0xFFFFD040u; // 80263388
  if (crb(c,2)) { goto L_802633A0; } // 8026338C
  c->r[0]=0u+0x00000000u; // 80263390
  c->r[5]=c->r[4]+0x00000080u; // 80263394
  W8(c->r[5]+0x00000100u,c->r[0]); // 80263398
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8026339C
L_802633A0:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 802633A0
  if (crb(c,2)) { goto L_802633B4; } // 802633A4
  c->r[5]=c->r[4]+0x000001A0u; // 802633A8
  c->r[0]=0u+0x00000000u; // 802633AC
  W16(c->r[5]+0x00000060u,c->r[0]); // 802633B0
L_802633B4:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802633B4
  if (crb(c,2)) { goto L_802633C8; } // 802633B8
  c->r[0]=0u+0x00000000u; // 802633BC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802633C0
  W32(c->r[13]+0xFFFFA3FCu,c->r[0]); // 802633C4
L_802633C8:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 802633C8
  if (crb(c,2)) { goto L_802633F8; } // 802633CC
  c->r[7]=0u+0x00000001u; // 802633D0
  c->r[5]=c->r[4]+0x00000000u; // 802633D4
  c->r[6]=0u+0x00000000u; // 802633D8
  c->r[0]=0u+0x00000002u; // 802633DC
  W8(c->r[4]+0x00000000u,c->r[7]); // 802633E0
  W8(c->r[5]+0x00000001u,c->r[6]); // 802633E4
  W8(c->r[5]+0x00000002u,c->r[7]); // 802633E8
  W8(c->r[5]+0x00000003u,c->r[6]); // 802633EC
  W32(c->r[5]+0x00000004u,c->r[0]); // 802633F0
  W32(c->r[5]+0x00000008u,c->r[6]); // 802633F4
L_802633F8:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802633F8
  if (crb(c,2)) { goto L_80263414; } // 802633FC
  c->r[0]=0u+0x00000000u; // 80263400
  c->r[5]=c->r[4]+0x00000204u; // 80263404
  W32(c->r[5]+0x00000008u,c->r[0]); // 80263408
  W32(c->r[5]+0x00000004u,c->r[0]); // 8026340C
  W32(c->r[4]+0x00000204u,c->r[0]); // 80263410
L_80263414:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 80263414
  if (crb(c,2)) { goto L_80263424; } // 80263418
  c->r[0]=0u+0x00000000u; // 8026341C
  W8(c->r[13]+0xFFFFA3F4u,c->r[0]); // 80263420
L_80263424:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80263424
  if (crb(c,2)) { goto L_80263458; } // 80263428
  c->r[0]=0u+0x00000000u; // 8026342C
  c->r[5]=c->r[4]+0x00000210u; // 80263430
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80263434
  W32(c->r[5]+0x00000018u,c->r[0]); // 80263438
  W32(c->r[5]+0x00000014u,c->r[0]); // 8026343C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80263440
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80263444
  W32(c->r[5]+0x00000008u,c->r[0]); // 80263448
  W32(c->r[5]+0x00000004u,c->r[0]); // 8026344C
  W32(c->r[4]+0x00000210u,c->r[0]); // 80263450
  W32(c->r[13]+0xFFFFA3F8u,c->r[0]); // 80263454
L_80263458:;
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 80263458
  if (crb(c,2)) { goto L_8026346C; } // 8026345C
  c->r[0]=R32(c->r[13]+0xFFFFA408u); // 80263460
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80263464
  W32(c->r[13]+0xFFFFA408u,c->r[0]); // 80263468
L_8026346C:;
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 8026346C
  if (crb(c,2)) { goto L_8026347C; } // 80263470
  c->r[0]=0u+0x00000000u; // 80263474
  W32(c->r[4]+0x00000A40u,c->r[0]); // 80263478
L_8026347C:;
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 8026347C
  if (crb(c,2)) { goto L_802634C4; } // 80263480
  c->r[5]=c->r[4]+0x00001054u; // 80263484
  c->r[6]=0u+0xFFFFFFFFu; // 80263488
  c->r[0]=0u+0x00000000u; // 8026348C
  W32(c->r[5]+0x00000010u,c->r[6]); // 80263490
  W32(c->r[5]+0x00000014u,c->r[0]); // 80263494
  W32(c->r[5]+0x00000018u,c->r[0]); // 80263498
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 8026349C
  W32(c->r[5]+0x00000020u,c->r[0]); // 802634A0
  W8(c->r[5]+0x0000002Bu,c->r[6]); // 802634A4
  W8(c->r[5]+0x0000002Au,c->r[6]); // 802634A8
  W8(c->r[5]+0x00000029u,c->r[6]); // 802634AC
  W8(c->r[5]+0x00000028u,c->r[6]); // 802634B0
  W8(c->r[5]+0x00000027u,c->r[6]); // 802634B4
  W8(c->r[5]+0x00000026u,c->r[6]); // 802634B8
  W8(c->r[5]+0x00000025u,c->r[6]); // 802634BC
  W8(c->r[5]+0x00000024u,c->r[6]); // 802634C0
L_802634C4:;
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 802634C4
  if (crb(c,2)) { goto L_802634E0; } // 802634C8
  c->r[0]=0u+0x00000000u; // 802634CC
  c->r[3]=c->r[4]+0x00000230u; // 802634D0
  W32(c->r[4]+0x00000230u,c->r[0]); // 802634D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802634D8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802634DC
L_802634E0:;
  c->r[0]=0u+0x00000001u; // 802634E0
  W8(c->r[13]+0xFFFFA3F0u,c->r[0]); // 802634E4
  return; // 802634E8
}

// SetNrmMapMtx__Q44nw4r3g3d8G3DState11IndMtxOpStdF14_GXIndTexMtxIDPCQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34Q44nw4r3g3d14ResMatMiscData14IndirectMethod
void f_802634EC(Ctx* __restrict c) {
  trace_call(0x802634ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802634EC
  c->r[0]=c->lr; // 802634F0
  cmps(c,0,(int32_t)c->r[4],1); // 802634F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802634F8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802634FC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80263500
  W32(c->r[1]+0x00000024u,c->r[29]); // 80263504
  c->r[29]=c->r[6]|c->r[6]; // 80263508
  W32(c->r[1]+0x00000020u,c->r[28]); // 8026350C
  c->r[28]=c->r[3]|c->r[3]; // 80263510
  if (crb(c,0)) { goto L_80263630; } // 80263514
  cmps(c,0,(int32_t)c->r[4],3); // 80263518
  if (crb(c,1)) { goto L_80263630; } // 8026351C
  cmps(c,0,(int32_t)c->r[7],0); // 80263520
  if (crb(c,2)) { goto L_80263630; } // 80263524
  cmps(c,0,(int32_t)c->r[7],3); // 80263528
  if (crb(c,2)) { goto L_80263630; } // 8026352C
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 80263530
  cmps(c,0,(int32_t)c->r[5],0); // 80263534
  c->r[4]=c->r[3]+c->r[6]; // 80263538
  c->r[0]=0u+0x00000001u; // 8026353C
  W8(c->r[4]+0x00000004u,c->r[0]); // 80263540
  if (crb(c,2)) { goto L_80263620; } // 80263544
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80263548
  c->r[30]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 8026354C
  {uint32_t ea=c->r[2]+0xFFFF9CC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80263550
  cmps(c,0,(int32_t)c->r[7],2); // 80263554
  c->f[0]=-c->f[0]; // 80263558
  c->r[3]=c->r[3]+c->r[30]; // 8026355C
  c->r[31]=c->r[3]+0x00000008u; // 80263560
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80263564
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80263568
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026356C
  c->f[0]=-c->f[0]; // 80263570
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80263574
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80263578
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026357C
  c->f[0]=-c->f[0]; // 80263580
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80263584
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80263588
  if (!crb(c,2)) { goto L_802635F8; } // 8026358C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80263590
  c->r[3]=c->r[1]+0x00000008u; // 80263594
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80263598
  c->r[4]=c->r[3]|c->r[3]; // 8026359C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802635A0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802635A4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802635A8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 802635AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 802635B0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802635B4
  c->lr=0x802635BCu; f_80168E0C(c); // 802635B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802635BC
  c->r[3]=c->r[28]+c->r[30]; // 802635C0
  {uint32_t ea=c->r[2]+0xFFFF9CC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802635C4
  c->f[0]=-c->f[0]; // 802635C8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802635CC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 802635D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802635D4
  c->f[0]=-c->f[0]; // 802635D8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802635DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802635E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802635E4
  c->f[0]=-c->f[0]; // 802635E8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802635EC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 802635F0
  goto L_80263608; // 802635F4
L_802635F8:;
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802635F8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 802635FC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80263600
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80263604
L_80263608:;
  c->r[3]=c->r[28]+c->r[30]; // 80263608
  c->r[4]=c->r[29]|c->r[29]; // 8026360C
  c->r[5]=c->r[31]|c->r[31]; // 80263610
  c->r[3]=c->r[3]+0x00000008u; // 80263614
  c->lr=0x8026361Cu; f_80167FF8(c); // 80263618
  goto L_80263630; // 8026361C
L_80263620:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 80263620
  c->r[3]=c->r[3]+c->r[0]; // 80263624
  c->r[3]=c->r[3]+0x00000008u; // 80263628
  c->lr=0x80263630u; f_802849E8(c); // 8026362C
L_80263630:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80263630
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80263634
  c->r[30]=R32(c->r[1]+0x00000028u); // 80263638
  c->r[29]=R32(c->r[1]+0x00000024u); // 8026363C
  c->r[28]=R32(c->r[1]+0x00000020u); // 80263640
  c->lr=c->r[0]; // 80263644
  c->r[1]=c->r[1]+0x00000030u; // 80263648
  return; // 8026364C
}

// Reset__Q44nw4r3g3d8G3DState11IndMtxOpStdFv
void f_80263650(Ctx* __restrict c) {
  trace_call(0x80263650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263650
  c->r[0]=c->lr; // 80263654
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026365C
  c->r[31]=c->r[3]|c->r[3]; // 80263660
  c->r[3]=c->r[3]+0x00000008u; // 80263664
  c->lr=0x8026366Cu; f_80167F98(c); // 80263668
  c->r[3]=c->r[31]+0x00000038u; // 8026366C
  c->lr=0x80263674u; f_80167F98(c); // 80263670
  c->r[3]=c->r[31]+0x00000068u; // 80263674
  c->lr=0x8026367Cu; f_80167F98(c); // 80263678
  c->r[0]=0u+0x00000000u; // 8026367C
  W8(c->r[31]+0x00000006u,c->r[0]); // 80263680
  W8(c->r[31]+0x00000005u,c->r[0]); // 80263684
  W8(c->r[31]+0x00000004u,c->r[0]); // 80263688
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026368C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80263690
  c->lr=c->r[0]; // 80263694
  c->r[1]=c->r[1]+0x00000010u; // 80263698
  return; // 8026369C
}

// __cl__Q44nw4r3g3d8G3DState11IndMtxOpStdFPQ44nw4r3g3d8G3DState13IndTexMtxInfo
void f_802636A0(Ctx* __restrict c) {
  trace_call(0x802636A0u);
  c->r[0]=R8(c->r[3]+0x00000004u); // 802636A0
  cmps(c,0,(int32_t)c->r[0],0); // 802636A4
  if (crb(c,2)) { goto L_80263718; } // 802636A8
  c->r[6]=R32(c->r[3]+0x00000008u); // 802636AC
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 802636B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 802636B4
  W32(c->r[4]+0x00000004u,c->r[6]); // 802636B8
  c->r[0]=c->r[0]|0x00000001u; // 802636BC
  W32(c->r[4]+0x00000008u,c->r[5]); // 802636C0
  c->r[6]=R32(c->r[3]+0x00000010u); // 802636C4
  c->r[5]=R32(c->r[3]+0x00000014u); // 802636C8
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 802636CC
  W32(c->r[4]+0x00000010u,c->r[5]); // 802636D0
  c->r[6]=R32(c->r[3]+0x00000018u); // 802636D4
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 802636D8
  W32(c->r[4]+0x00000014u,c->r[6]); // 802636DC
  W32(c->r[4]+0x00000018u,c->r[5]); // 802636E0
  c->r[6]=R32(c->r[3]+0x00000020u); // 802636E4
  c->r[5]=R32(c->r[3]+0x00000024u); // 802636E8
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 802636EC
  W32(c->r[4]+0x00000020u,c->r[5]); // 802636F0
  c->r[6]=R32(c->r[3]+0x00000028u); // 802636F4
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802636F8
  W32(c->r[4]+0x00000024u,c->r[6]); // 802636FC
  W32(c->r[4]+0x00000028u,c->r[5]); // 80263700
  c->r[6]=R32(c->r[3]+0x00000030u); // 80263704
  c->r[5]=R32(c->r[3]+0x00000034u); // 80263708
  W32(c->r[4]+0x0000002Cu,c->r[6]); // 8026370C
  W32(c->r[4]+0x00000030u,c->r[5]); // 80263710
  W32(c->r[4]+0x00000000u,c->r[0]); // 80263714
L_80263718:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 80263718
  cmps(c,0,(int32_t)c->r[0],0); // 8026371C
  if (crb(c,2)) { goto L_80263790; } // 80263720
  c->r[6]=R32(c->r[3]+0x00000038u); // 80263724
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 80263728
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026372C
  W32(c->r[4]+0x00000034u,c->r[6]); // 80263730
  c->r[0]=c->r[0]|0x00000002u; // 80263734
  W32(c->r[4]+0x00000038u,c->r[5]); // 80263738
  c->r[6]=R32(c->r[3]+0x00000040u); // 8026373C
  c->r[5]=R32(c->r[3]+0x00000044u); // 80263740
  W32(c->r[4]+0x0000003Cu,c->r[6]); // 80263744
  W32(c->r[4]+0x00000040u,c->r[5]); // 80263748
  c->r[6]=R32(c->r[3]+0x00000048u); // 8026374C
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 80263750
  W32(c->r[4]+0x00000044u,c->r[6]); // 80263754
  W32(c->r[4]+0x00000048u,c->r[5]); // 80263758
  c->r[6]=R32(c->r[3]+0x00000050u); // 8026375C
  c->r[5]=R32(c->r[3]+0x00000054u); // 80263760
  W32(c->r[4]+0x0000004Cu,c->r[6]); // 80263764
  W32(c->r[4]+0x00000050u,c->r[5]); // 80263768
  c->r[6]=R32(c->r[3]+0x00000058u); // 8026376C
  c->r[5]=R32(c->r[3]+0x0000005Cu); // 80263770
  W32(c->r[4]+0x00000054u,c->r[6]); // 80263774
  W32(c->r[4]+0x00000058u,c->r[5]); // 80263778
  c->r[6]=R32(c->r[3]+0x00000060u); // 8026377C
  c->r[5]=R32(c->r[3]+0x00000064u); // 80263780
  W32(c->r[4]+0x0000005Cu,c->r[6]); // 80263784
  W32(c->r[4]+0x00000060u,c->r[5]); // 80263788
  W32(c->r[4]+0x00000000u,c->r[0]); // 8026378C
L_80263790:;
  c->r[0]=R8(c->r[3]+0x00000006u); // 80263790
  cmps(c,0,(int32_t)c->r[0],0); // 80263794
  if (crb(c,2)) return; // 80263798
  c->r[6]=R32(c->r[3]+0x00000068u); // 8026379C
  c->r[5]=R32(c->r[3]+0x0000006Cu); // 802637A0
  c->r[0]=R32(c->r[4]+0x00000000u); // 802637A4
  W32(c->r[4]+0x00000064u,c->r[6]); // 802637A8
  c->r[0]=c->r[0]|0x00000004u; // 802637AC
  W32(c->r[4]+0x00000068u,c->r[5]); // 802637B0
  c->r[6]=R32(c->r[3]+0x00000070u); // 802637B4
  c->r[5]=R32(c->r[3]+0x00000074u); // 802637B8
  W32(c->r[4]+0x0000006Cu,c->r[6]); // 802637BC
  W32(c->r[4]+0x00000070u,c->r[5]); // 802637C0
  c->r[6]=R32(c->r[3]+0x00000078u); // 802637C4
  c->r[5]=R32(c->r[3]+0x0000007Cu); // 802637C8
  W32(c->r[4]+0x00000074u,c->r[6]); // 802637CC
  W32(c->r[4]+0x00000078u,c->r[5]); // 802637D0
  c->r[6]=R32(c->r[3]+0x00000080u); // 802637D4
  c->r[5]=R32(c->r[3]+0x00000084u); // 802637D8
  W32(c->r[4]+0x0000007Cu,c->r[6]); // 802637DC
  W32(c->r[4]+0x00000080u,c->r[5]); // 802637E0
  c->r[6]=R32(c->r[3]+0x00000088u); // 802637E4
  c->r[5]=R32(c->r[3]+0x0000008Cu); // 802637E8
  W32(c->r[4]+0x00000084u,c->r[6]); // 802637EC
  W32(c->r[4]+0x00000088u,c->r[5]); // 802637F0
  c->r[5]=R32(c->r[3]+0x00000090u); // 802637F4
  c->r[3]=R32(c->r[3]+0x00000094u); // 802637F8
  W32(c->r[4]+0x0000008Cu,c->r[5]); // 802637FC
  W32(c->r[4]+0x00000090u,c->r[3]); // 80263800
  W32(c->r[4]+0x00000000u,c->r[0]); // 80263804
  return; // 80263808
}

// fn_8026380C
void f_8026380C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026380C
  c->r[0]=c->lr; // 80263810
  cmps(c,0,(int32_t)c->r[3],0); // 80263814
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026381C
  c->r[31]=c->r[3]|c->r[3]; // 80263820
  if (crb(c,2)) { goto L_80263834; } // 80263824
  cmps(c,0,(int32_t)c->r[4],0); // 80263828
  if (!crb(c,1)) { goto L_80263834; } // 8026382C
  c->lr=0x80263834u; f_800D6AD0(c); // 80263830
L_80263834:;
  c->r[3]=c->r[31]|c->r[31]; // 80263834
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80263838
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026383C
  c->lr=c->r[0]; // 80263840
  c->r[1]=c->r[1]+0x00000010u; // 80263844
  return; // 80263848
}

// fn_8026384C
void f_8026384C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026384C
  c->r[0]=c->lr; // 80263850
  c->r[4]=0u+0x00000000u; // 80263854
  c->r[5]=0u+0x0000006Cu; // 80263858
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026385C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80263860
  c->r[31]=0u+0x80400000u; // 80263864
  c->r[31]=c->r[31]+0xFFFFD040u; // 80263868
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026386C
  c->r[30]=0u+0x00000000u; // 80263870
  c->r[6]=c->r[31]+0x00000000u; // 80263874
  c->r[3]=c->r[31]+0x0000000Cu; // 80263878
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026387C
  c->r[29]=0u+0x00000002u; // 80263880
  W32(c->r[1]+0x00000010u,c->r[28]); // 80263884
  c->r[28]=0u+0x00000001u; // 80263888
  W8(c->r[13]+0xFFFFA3F0u,c->r[28]); // 8026388C
  W8(c->r[31]+0x00000000u,c->r[28]); // 80263890
  W8(c->r[6]+0x00000001u,c->r[30]); // 80263894
  W8(c->r[6]+0x00000002u,c->r[28]); // 80263898
  W8(c->r[6]+0x00000003u,c->r[30]); // 8026389C
  W32(c->r[6]+0x00000004u,c->r[29]); // 802638A0
  W32(c->r[6]+0x00000008u,c->r[30]); // 802638A4
  c->lr=0x802638ACu; f_80004688(c); // 802638A8
  c->r[8]=0u+0x80260000u; // 802638AC
  c->r[6]=0u+0x80260000u; // 802638B0
  c->r[10]=c->r[31]+0x00000210u; // 802638B4
  c->r[7]=c->r[31]+0x00000240u; // 802638B8
  c->r[11]=c->r[31]+0x00000204u; // 802638BC
  c->r[9]=c->r[31]+0x00000230u; // 802638C0
  c->r[6]=c->r[6]+0x0000018Cu; // 802638C4
  c->r[5]=0u+0x80260000u; // 802638C8
  c->r[4]=0u+0x80260000u; // 802638CC
  c->r[3]=c->r[31]+0x00000080u; // 802638D0
  c->r[12]=c->r[31]+0x000001A0u; // 802638D4
  c->r[8]=c->r[8]+0x00000AE8u; // 802638D8
  c->r[5]=c->r[5]+0x00000570u; // 802638DC
  c->r[4]=c->r[4]+0x0000069Cu; // 802638E0
  W8(c->r[3]+0x00000100u,c->r[30]); // 802638E4
  c->r[0]=0u+0x000000FBu; // 802638E8
  c->r[3]=0u+0x00000028u; // 802638EC
  W16(c->r[12]+0x00000060u,c->r[30]); // 802638F0
  W32(c->r[11]+0x00000008u,c->r[30]); // 802638F4
  W32(c->r[11]+0x00000004u,c->r[30]); // 802638F8
  W32(c->r[31]+0x00000204u,c->r[30]); // 802638FC
  W8(c->r[13]+0xFFFFA3F4u,c->r[30]); // 80263900
  W32(c->r[13]+0xFFFFA3F8u,c->r[30]); // 80263904
  W32(c->r[10]+0x0000001Cu,c->r[30]); // 80263908
  W32(c->r[10]+0x00000018u,c->r[30]); // 8026390C
  W32(c->r[10]+0x00000014u,c->r[30]); // 80263910
  W32(c->r[10]+0x00000010u,c->r[30]); // 80263914
  W32(c->r[10]+0x0000000Cu,c->r[30]); // 80263918
  W32(c->r[10]+0x00000008u,c->r[30]); // 8026391C
  W32(c->r[10]+0x00000004u,c->r[30]); // 80263920
  W32(c->r[31]+0x00000210u,c->r[30]); // 80263924
  W32(c->r[13]+0xFFFFA3FCu,c->r[30]); // 80263928
  W32(c->r[31]+0x00000230u,c->r[30]); // 8026392C
  W32(c->r[9]+0x00000004u,c->r[30]); // 80263930
  W32(c->r[9]+0x00000008u,c->r[30]); // 80263934
  W32(c->r[31]+0x00000240u,c->r[8]); // 80263938
  W32(c->r[7]+0x00000004u,c->r[30]); // 8026393C
  W32(c->r[7]+0x00000008u,c->r[6]); // 80263940
  W32(c->r[7]+0x0000000Cu,c->r[28]); // 80263944
  W32(c->r[7]+0x00000010u,c->r[5]); // 80263948
  W32(c->r[7]+0x00000014u,c->r[29]); // 8026394C
  W32(c->r[7]+0x00000018u,c->r[6]); // 80263950
  W32(c->r[7]+0x0000001Cu,c->r[28]); // 80263954
  W32(c->r[7]+0x00000020u,c->r[4]); // 80263958
  W32(c->r[7]+0x00000024u,c->r[28]); // 8026395C
  c->ctr=c->r[0]; // 80263960
L_80263964:;
  W32(c->r[7]+c->r[3],c->r[8]); // 80263964
  c->r[4]=c->r[7]+c->r[3]; // 80263968
  c->r[3]=c->r[3]+0x00000008u; // 8026396C
  W32(c->r[4]+0x00000004u,c->r[30]); // 80263970
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80263964; } // 80263974
  c->r[3]=0u+0x00000000u; // 80263978
  c->r[29]=c->r[31]+0x00000A40u; // 8026397C
  c->r[0]=0u+0xFFFFFFFFu; // 80263980
  W32(c->r[31]+0x00000A40u,c->r[3]); // 80263984
  c->r[28]=0u+0x00000000u; // 80263988
  c->r[30]=0u+0x00000000u; // 8026398C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80263990
L_80263994:;
  c->r[4]=c->r[29]+c->r[30]; // 80263994
  c->r[3]=c->r[1]+0x00000008u; // 80263998
  c->r[4]=c->r[4]+0x00000008u; // 8026399C
  c->lr=0x802639A4u; f_80276BD8(c); // 802639A0
  c->lr=0x802639A8u; f_80276BE0(c); // 802639A4
  c->r[28]=c->r[28]+0x00000001u; // 802639A8
  c->r[30]=c->r[30]+0x00000030u; // 802639AC
  cmpu(c,0,c->r[28],0x00000020u); // 802639B0
  if (crb(c,0)) { IRQCHK(c); goto L_80263994; } // 802639B4
  c->r[28]=c->r[31]+0x00001054u; // 802639B8
  c->r[6]=0u+0x00000080u; // 802639BC
  c->r[3]=c->r[28]|c->r[28]; // 802639C0
  c->r[8]=0u+0x00000080u; // 802639C4
  c->r[4]=c->r[28]+0x0000002Cu; // 802639C8
  c->r[5]=c->r[28]+0x0000222Cu; // 802639CC
  c->r[7]=c->r[28]+0x0000242Cu; // 802639D0
  c->lr=0x802639D8u; f_80276FFC(c); // 802639D4
  c->r[4]=0u+0x80260000u; // 802639D8
  c->r[5]=0u+0x80260000u; // 802639DC
  c->r[3]=c->r[28]+0x0000002Cu; // 802639E0
  c->r[6]=0u+0x00000044u; // 802639E4
  c->r[4]=c->r[4]+0x00000B68u; // 802639E8
  c->r[5]=c->r[5]+0x00000B74u; // 802639EC
  c->r[7]=0u+0x00000080u; // 802639F0
  c->lr=0x802639F8u; f_80185B6C(c); // 802639F4
  c->r[0]=0u+0xFFFFFFFFu; // 802639F8
  c->r[30]=0u+0x00000000u; // 802639FC
  c->r[4]=0u+0x80260000u; // 80263A00
  W32(c->r[28]+0x00000010u,c->r[0]); // 80263A04
  c->r[3]=c->r[28]|c->r[28]; // 80263A08
  c->r[5]=c->r[31]+0x00001048u; // 80263A0C
  W32(c->r[28]+0x00000014u,c->r[30]); // 80263A10
  c->r[4]=c->r[4]+0x00003AE0u; // 80263A14
  W32(c->r[28]+0x00000018u,c->r[30]); // 80263A18
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 80263A1C
  W32(c->r[28]+0x00000020u,c->r[30]); // 80263A20
  W8(c->r[28]+0x0000002Bu,c->r[0]); // 80263A24
  W8(c->r[28]+0x0000002Au,c->r[0]); // 80263A28
  W8(c->r[28]+0x00000029u,c->r[0]); // 80263A2C
  W8(c->r[28]+0x00000028u,c->r[0]); // 80263A30
  W8(c->r[28]+0x00000027u,c->r[0]); // 80263A34
  W8(c->r[28]+0x00000026u,c->r[0]); // 80263A38
  W8(c->r[28]+0x00000025u,c->r[0]); // 80263A3C
  W8(c->r[28]+0x00000024u,c->r[0]); // 80263A40
  c->lr=0x80263A48u; f_8018566C(c); // 80263A44
  c->r[3]=c->r[31]+0x00003A80u; // 80263A48
  c->lr=0x80263A50u; f_802610C0(c); // 80263A4C
  c->r[3]=0u+0x80340000u; // 80263A50
  c->r[28]=c->r[31]+0x00005500u; // 80263A54
  c->r[3]=c->r[3]+0x00004C98u; // 80263A58
  c->r[4]=c->r[13]+0xFFFFA408u; // 80263A5C
  W32(c->r[13]+0xFFFFA408u,c->r[30]); // 80263A60
  c->r[5]=c->r[28]+0x00000008u; // 80263A64
  c->r[0]=c->r[28]+0x00000098u; // 80263A68
  W8(c->r[4]+0x00000004u,c->r[30]); // 80263A6C
  W32(c->r[28]+0x00000000u,c->r[3]); // 80263A70
L_80263A74:;
  c->r[5]=c->r[5]+0x00000030u; // 80263A74
  cmpu(c,0,c->r[5],c->r[0]); // 80263A78
  if (crb(c,0)) { IRQCHK(c); goto L_80263A74; } // 80263A7C
  c->r[3]=c->r[28]+0x00000008u; // 80263A80
  c->lr=0x80263A88u; f_80167F98(c); // 80263A84
  c->r[3]=c->r[28]+0x00000038u; // 80263A88
  c->lr=0x80263A90u; f_80167F98(c); // 80263A8C
  c->r[3]=c->r[28]+0x00000068u; // 80263A90
  c->lr=0x80263A98u; f_80167F98(c); // 80263A94
  c->r[0]=0u+0x00000000u; // 80263A98
  c->r[4]=0u+0x80260000u; // 80263A9C
  W8(c->r[28]+0x00000006u,c->r[0]); // 80263AA0
  c->r[3]=c->r[31]+0x00005500u; // 80263AA4
  c->r[4]=c->r[4]+0x0000380Cu; // 80263AA8
  c->r[5]=c->r[31]+0x000054F0u; // 80263AAC
  W8(c->r[28]+0x00000005u,c->r[0]); // 80263AB0
  W8(c->r[28]+0x00000004u,c->r[0]); // 80263AB4
  W8(c->r[28]+0x00000007u,c->r[0]); // 80263AB8
  c->lr=0x80263AC0u; f_8018566C(c); // 80263ABC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80263AC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80263AC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80263AC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80263ACC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80263AD0
  c->lr=c->r[0]; // 80263AD4
  c->r[1]=c->r[1]+0x00000020u; // 80263AD8
  return; // 80263ADC
}

// fn_80263AE0
void f_80263AE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263AE0
  c->r[0]=c->lr; // 80263AE4
  cmps(c,0,(int32_t)c->r[3],0); // 80263AE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263AEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80263AF0
  c->r[31]=c->r[4]|c->r[4]; // 80263AF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80263AF8
  c->r[30]=c->r[3]|c->r[3]; // 80263AFC
  if (crb(c,2)) { goto L_80263B2C; } // 80263B00
  c->r[4]=0u+0x80260000u; // 80263B04
  c->r[5]=0u+0x00000044u; // 80263B08
  c->r[4]=c->r[4]+0x00000B74u; // 80263B0C
  c->r[6]=0u+0x00000080u; // 80263B10
  c->r[3]=c->r[3]+0x0000002Cu; // 80263B14
  c->lr=0x80263B1Cu; f_80185C64(c); // 80263B18
  cmps(c,0,(int32_t)c->r[31],0); // 80263B1C
  if (!crb(c,1)) { goto L_80263B2C; } // 80263B20
  c->r[3]=c->r[30]|c->r[30]; // 80263B24
  c->lr=0x80263B2Cu; f_800D6AD0(c); // 80263B28
L_80263B2C:;
  c->r[3]=c->r[30]|c->r[30]; // 80263B2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80263B30
  c->r[30]=R32(c->r[1]+0x00000008u); // 80263B34
  c->r[0]=R32(c->r[1]+0x00000014u); // 80263B38
  c->lr=c->r[0]; // 80263B3C
  c->r[1]=c->r[1]+0x00000010u; // 80263B40
  return; // 80263B44
}

// LoadMaterial__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatUlPQ34nw4r3g3d16Draw1Mat1ShpSwapPQ44nw4r3g3d8G3DState8IndMtxOpb
void f_80263B48(Ctx* __restrict c) {
  trace_call(0x80263B48u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263B48
  c->r[0]=c->lr; // 80263B4C
  cmps(c,0,(int32_t)c->r[7],0); // 80263B50
  W32(c->r[1]+0x00000134u,c->r[0]); // 80263B54
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 80263B58
  c->r[31]=c->r[6]|c->r[6]; // 80263B5C
  W32(c->r[1]+0x00000128u,c->r[30]); // 80263B60
  c->r[30]=c->r[5]|c->r[5]; // 80263B64
  W32(c->r[1]+0x00000124u,c->r[29]); // 80263B68
  c->r[29]=c->r[4]|c->r[4]; // 80263B6C
  W32(c->r[1]+0x00000120u,c->r[28]); // 80263B70
  c->r[28]=c->r[3]|c->r[3]; // 80263B74
  if (!crb(c,2)) { goto L_80263F60; } // 80263B78
  c->r[0]=0u+0x00000000u; // 80263B7C
  cmps(c,0,(int32_t)c->r[5],0); // 80263B80
  W32(c->r[1]+0x00000088u,c->r[0]); // 80263B84
  if (crb(c,2)) { goto L_80263B98; } // 80263B88
  c->r[0]=R32(c->r[5]+0x00000024u); // 80263B8C
  cmps(c,0,(int32_t)c->r[0],0); // 80263B90
  if (!crb(c,2)) { goto L_80263BA8; } // 80263B94
L_80263B98:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80263B98
  c->r[0]=c->r[3]+0x0000001Cu; // 80263B9C
  W32(c->r[1]+0x00000088u,c->r[0]); // 80263BA0
  goto L_80263BB0; // 80263BA4
L_80263BA8:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 80263BA8
  W32(c->r[1]+0x00000088u,c->r[0]); // 80263BAC
L_80263BB0:;
  c->r[3]=c->r[1]+0x00000088u; // 80263BB0
  c->lr=0x80263BB8u; f_80253708(c); // 80263BB4
  c->lr=0x80263BBCu; f_80262E58(c); // 80263BB8
  c->r[0]=R32(c->r[1]+0x00000088u); // 80263BBC
  c->r[3]=c->r[1]+0x0000006Cu; // 80263BC0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80263BC4
  c->lr=0x80263BCCu; f_80261158(c); // 80263BC8
  cmps(c,0,(int32_t)c->r[30],0); // 80263BCC
  if (crb(c,2)) { goto L_80263BE0; } // 80263BD0
  c->r[0]=R32(c->r[30]+0x00000004u); // 80263BD4
  cmps(c,0,(int32_t)c->r[0],0); // 80263BD8
  if (!crb(c,2)) { goto L_80263BF8; } // 80263BDC
L_80263BE0:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 80263BE0
  c->r[3]=c->r[1]+0x00000068u; // 80263BE4
  c->r[0]=c->r[4]+0x00000144u; // 80263BE8
  W32(c->r[1]+0x00000068u,c->r[0]); // 80263BEC
  c->lr=0x80263BF4u; f_80261430(c); // 80263BF0
  goto L_80263C08; // 80263BF4
L_80263BF8:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80263BF8
  c->r[3]=c->r[1]+0x00000064u; // 80263BFC
  W32(c->r[1]+0x00000064u,c->r[0]); // 80263C00
  c->lr=0x80263C08u; f_80261430(c); // 80263C04
L_80263C08:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263C08
  if (crb(c,2)) { goto L_80263C1C; } // 80263C0C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80263C10
  cmps(c,0,(int32_t)c->r[0],0); // 80263C14
  if (!crb(c,2)) { goto L_80263C34; } // 80263C18
L_80263C1C:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 80263C1C
  c->r[3]=c->r[1]+0x00000060u; // 80263C20
  c->r[0]=c->r[4]+0x00000040u; // 80263C24
  W32(c->r[1]+0x00000060u,c->r[0]); // 80263C28
  c->lr=0x80263C30u; f_802611C8(c); // 80263C2C
  goto L_80263C44; // 80263C30
L_80263C34:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80263C34
  c->r[3]=c->r[1]+0x0000005Cu; // 80263C38
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80263C3C
  c->lr=0x80263C44u; f_802611C8(c); // 80263C40
L_80263C44:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263C44
  if (crb(c,2)) { goto L_80263C58; } // 80263C48
  c->r[0]=R32(c->r[30]+0x00000008u); // 80263C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80263C50
  if (!crb(c,2)) { goto L_80263C70; } // 80263C54
L_80263C58:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 80263C58
  c->r[3]=c->r[1]+0x00000058u; // 80263C5C
  c->r[0]=c->r[4]+0x00000014u; // 80263C60
  W32(c->r[1]+0x00000058u,c->r[0]); // 80263C64
  c->lr=0x80263C6Cu; f_8026157C(c); // 80263C68
  goto L_80263C80; // 80263C6C
L_80263C70:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 80263C70
  c->r[3]=c->r[1]+0x00000054u; // 80263C74
  W32(c->r[1]+0x00000054u,c->r[0]); // 80263C78
  c->lr=0x80263C80u; f_8026157C(c); // 80263C7C
L_80263C80:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263C80
  if (crb(c,2)) { goto L_80263C94; } // 80263C84
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80263C88
  cmps(c,0,(int32_t)c->r[0],0); // 80263C8C
  if (!crb(c,2)) { goto L_80263CAC; } // 80263C90
L_80263C94:;
  c->r[3]=c->r[28]|c->r[28]; // 80263C94
  c->lr=0x80263C9Cu; f_80254840(c); // 80263C98
  W32(c->r[1]+0x00000050u,c->r[3]); // 80263C9C
  c->r[3]=c->r[1]+0x00000050u; // 80263CA0
  c->lr=0x80263CA8u; f_80261748(c); // 80263CA4
  goto L_80263CBC; // 80263CA8
L_80263CAC:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80263CAC
  c->r[3]=c->r[1]+0x0000004Cu; // 80263CB0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80263CB4
  c->lr=0x80263CBCu; f_80261748(c); // 80263CB8
L_80263CBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263CBC
  if (crb(c,2)) { goto L_80263CD0; } // 80263CC0
  c->r[0]=R32(c->r[30]+0x00000010u); // 80263CC4
  cmps(c,0,(int32_t)c->r[0],0); // 80263CC8
  if (!crb(c,2)) { goto L_80263CFC; } // 80263CCC
L_80263CD0:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80263CD0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80263CD4
  cmps(c,0,(int32_t)c->r[0],0); // 80263CD8
  if (crb(c,2)) { goto L_80263CE8; } // 80263CDC
  c->r[0]=c->r[3]+c->r[0]; // 80263CE0
  goto L_80263CEC; // 80263CE4
L_80263CE8:;
  c->r[0]=0u+0x00000000u; // 80263CE8
L_80263CEC:;
  W32(c->r[1]+0x00000048u,c->r[0]); // 80263CEC
  c->r[3]=c->r[1]+0x00000048u; // 80263CF0
  c->lr=0x80263CF8u; f_80261958(c); // 80263CF4
  goto L_80263D0C; // 80263CF8
L_80263CFC:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 80263CFC
  c->r[3]=c->r[1]+0x00000044u; // 80263D00
  W32(c->r[1]+0x00000044u,c->r[0]); // 80263D04
  c->lr=0x80263D0Cu; f_80261958(c); // 80263D08
L_80263D0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263D0C
  if (crb(c,2)) { goto L_80263D20; } // 80263D10
  c->r[0]=R32(c->r[30]+0x00000014u); // 80263D14
  cmps(c,0,(int32_t)c->r[0],0); // 80263D18
  if (!crb(c,2)) { goto L_80263D50; } // 80263D1C
L_80263D20:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80263D20
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80263D24
  cmps(c,0,(int32_t)c->r[0],0); // 80263D28
  if (crb(c,2)) { goto L_80263D38; } // 80263D2C
  c->r[3]=c->r[3]+c->r[0]; // 80263D30
  goto L_80263D3C; // 80263D34
L_80263D38:;
  c->r[3]=0u+0x00000000u; // 80263D38
L_80263D3C:;
  c->r[0]=c->r[3]+0x00000020u; // 80263D3C
  c->r[3]=c->r[1]+0x00000040u; // 80263D40
  W32(c->r[1]+0x00000040u,c->r[0]); // 80263D44
  c->lr=0x80263D4Cu; f_80261A04(c); // 80263D48
  goto L_80263D60; // 80263D4C
L_80263D50:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80263D50
  c->r[3]=c->r[1]+0x0000003Cu; // 80263D54
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80263D58
  c->lr=0x80263D60u; f_80261A04(c); // 80263D5C
L_80263D60:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263D60
  if (crb(c,2)) { goto L_80263D74; } // 80263D64
  c->r[0]=R32(c->r[30]+0x00000018u); // 80263D68
  cmps(c,0,(int32_t)c->r[0],0); // 80263D6C
  if (!crb(c,2)) { goto L_80263DE0; } // 80263D70
L_80263D74:;
  cmps(c,0,(int32_t)c->r[31],0); // 80263D74
  if (crb(c,2)) { goto L_80263DB0; } // 80263D78
  c->r[3]=R32(c->r[28]+0x00000000u); // 80263D7C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80263D80
  cmps(c,0,(int32_t)c->r[0],0); // 80263D84
  if (crb(c,2)) { goto L_80263D94; } // 80263D88
  c->r[3]=c->r[3]+c->r[0]; // 80263D8C
  goto L_80263D98; // 80263D90
L_80263D94:;
  c->r[3]=0u+0x00000000u; // 80263D94
L_80263D98:;
  c->r[0]=c->r[3]+0x000000A0u; // 80263D98
  c->r[4]=c->r[31]|c->r[31]; // 80263D9C
  W32(c->r[1]+0x00000038u,c->r[0]); // 80263DA0
  c->r[3]=c->r[1]+0x00000038u; // 80263DA4
  c->lr=0x80263DACu; f_80261B68(c); // 80263DA8
  goto L_80263E10; // 80263DAC
L_80263DB0:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80263DB0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80263DB4
  cmps(c,0,(int32_t)c->r[0],0); // 80263DB8
  if (crb(c,2)) { goto L_80263DC8; } // 80263DBC
  c->r[3]=c->r[3]+c->r[0]; // 80263DC0
  goto L_80263DCC; // 80263DC4
L_80263DC8:;
  c->r[3]=0u+0x00000000u; // 80263DC8
L_80263DCC:;
  c->r[0]=c->r[3]+0x000000A0u; // 80263DCC
  c->r[3]=c->r[1]+0x00000034u; // 80263DD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80263DD4
  c->lr=0x80263DDCu; f_80261AB0(c); // 80263DD8
  goto L_80263E10; // 80263DDC
L_80263DE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80263DE0
  if (crb(c,2)) { goto L_80263E00; } // 80263DE4
  c->r[0]=R32(c->r[30]+0x00000018u); // 80263DE8
  c->r[4]=c->r[31]|c->r[31]; // 80263DEC
  c->r[3]=c->r[1]+0x00000030u; // 80263DF0
  W32(c->r[1]+0x00000030u,c->r[0]); // 80263DF4
  c->lr=0x80263DFCu; f_80261B68(c); // 80263DF8
  goto L_80263E10; // 80263DFC
L_80263E00:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 80263E00
  c->r[3]=c->r[1]+0x0000002Cu; // 80263E04
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80263E08
  c->lr=0x80263E10u; f_80261AB0(c); // 80263E0C
L_80263E10:;
  c->r[3]=c->r[1]+0x00000088u; // 80263E10
  c->lr=0x80263E18u; f_802536E8(c); // 80263E14
  c->r[4]=c->r[1]+0x00000084u; // 80263E18
  c->r[5]=c->r[1]+0x00000080u; // 80263E1C
  c->r[6]=c->r[1]+0x0000007Cu; // 80263E20
  c->r[7]=c->r[1]+0x00000078u; // 80263E24
  c->r[8]=c->r[1]+0x00000070u; // 80263E28
  c->lr=0x80263E30u; f_80262F58(c); // 80263E2C
  c->r[5]=R8(c->r[1]+0x00000070u); // 80263E30
  cmps(c,0,(int32_t)c->r[30],0); // 80263E34
  c->r[4]=R8(c->r[1]+0x00000071u); // 80263E38
  c->r[3]=R8(c->r[1]+0x00000072u); // 80263E3C
  c->r[0]=R8(c->r[1]+0x00000073u); // 80263E40
  W8(c->r[1]+0x00000074u,c->r[5]); // 80263E44
  W8(c->r[1]+0x00000075u,c->r[4]); // 80263E48
  W8(c->r[1]+0x00000076u,c->r[3]); // 80263E4C
  W8(c->r[1]+0x00000077u,c->r[0]); // 80263E50
  if (crb(c,2)) { goto L_80263E64; } // 80263E54
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80263E58
  cmps(c,0,(int32_t)c->r[0],0); // 80263E5C
  if (!crb(c,2)) { goto L_80263E9C; } // 80263E60
L_80263E64:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80263E64
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 80263E68
  c->r[4]=R32(c->r[1]+0x00000084u); // 80263E6C
  c->r[3]=c->r[1]+0x00000028u; // 80263E70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80263E74
  c->r[8]=c->r[1]+0x00000024u; // 80263E78
  c->r[5]=R32(c->r[1]+0x00000080u); // 80263E7C
  c->r[7]=R32(c->r[28]+0x00000000u); // 80263E80
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 80263E84
  c->r[0]=c->r[7]+0x000003F0u; // 80263E88
  c->r[7]=R32(c->r[1]+0x00000078u); // 80263E8C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80263E90
  c->lr=0x80263E98u; f_80261D38(c); // 80263E94
  goto L_80263ECC; // 80263E98
L_80263E9C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80263E9C
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 80263EA0
  c->r[4]=R32(c->r[1]+0x00000084u); // 80263EA4
  c->r[3]=c->r[1]+0x00000020u; // 80263EA8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80263EAC
  c->r[8]=c->r[1]+0x0000001Cu; // 80263EB0
  c->r[5]=R32(c->r[1]+0x00000080u); // 80263EB4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80263EB8
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 80263EBC
  W32(c->r[1]+0x00000020u,c->r[0]); // 80263EC0
  c->r[7]=R32(c->r[1]+0x00000078u); // 80263EC4
  c->lr=0x80263ECCu; f_80261D38(c); // 80263EC8
L_80263ECC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263ECC
  if (crb(c,2)) { goto L_80263EE0; } // 80263ED0
  c->r[0]=R32(c->r[30]+0x00000020u); // 80263ED4
  cmps(c,0,(int32_t)c->r[0],0); // 80263ED8
  if (!crb(c,2)) { goto L_80263F10; } // 80263EDC
L_80263EE0:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80263EE0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80263EE4
  cmps(c,0,(int32_t)c->r[0],0); // 80263EE8
  if (crb(c,2)) { goto L_80263EF8; } // 80263EEC
  c->r[3]=c->r[3]+c->r[0]; // 80263EF0
  goto L_80263EFC; // 80263EF4
L_80263EF8:;
  c->r[3]=0u+0x00000000u; // 80263EF8
L_80263EFC:;
  c->r[0]=c->r[3]+0x000000E0u; // 80263EFC
  c->r[3]=c->r[1]+0x00000018u; // 80263F00
  W32(c->r[1]+0x00000018u,c->r[0]); // 80263F04
  c->lr=0x80263F0Cu; f_80262464(c); // 80263F08
  goto L_80263F20; // 80263F0C
L_80263F10:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 80263F10
  c->r[3]=c->r[1]+0x00000014u; // 80263F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263F18
  c->lr=0x80263F20u; f_80262464(c); // 80263F1C
L_80263F20:;
  cmps(c,0,(int32_t)c->r[30],0); // 80263F20
  if (crb(c,2)) { goto L_80263F34; } // 80263F24
  c->r[0]=R32(c->r[30]+0x00000028u); // 80263F28
  cmps(c,0,(int32_t)c->r[0],0); // 80263F2C
  if (!crb(c,2)) { goto L_80263F4C; } // 80263F30
L_80263F34:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 80263F34
  c->r[3]=c->r[1]+0x00000010u; // 80263F38
  c->r[0]=c->r[4]+0x000001A8u; // 80263F3C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80263F40
  c->lr=0x80263F48u; f_802624F4(c); // 80263F44
  goto L_80263FBC; // 80263F48
L_80263F4C:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 80263F4C
  c->r[3]=c->r[1]+0x0000000Cu; // 80263F50
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80263F54
  c->lr=0x80263F5Cu; f_802624F4(c); // 80263F58
  goto L_80263FBC; // 80263F5C
L_80263F60:;
  cmps(c,0,(int32_t)c->r[6],0); // 80263F60
  if (crb(c,2)) { goto L_80263FBC; } // 80263F64
  cmps(c,0,(int32_t)c->r[5],0); // 80263F68
  if (crb(c,2)) { goto L_80263F7C; } // 80263F6C
  c->r[0]=R32(c->r[5]+0x00000018u); // 80263F70
  cmps(c,0,(int32_t)c->r[0],0); // 80263F74
  if (!crb(c,2)) { goto L_80263FA8; } // 80263F78
L_80263F7C:;
  c->r[0]=0u+0x00000000u; // 80263F7C
  c->r[3]=c->r[31]|c->r[31]; // 80263F80
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80263F84
  c->r[4]=c->r[1]+0x0000008Cu; // 80263F88
  c->r[12]=R32(c->r[31]+0x00000000u); // 80263F8C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80263F90
  c->ctr=c->r[12]; // 80263F94
  if (true) { c->lr=0x80263F9Cu; dispatch(c,c->ctr); } // 80263F98
  c->r[3]=c->r[1]+0x0000008Cu; // 80263F9C
  c->lr=0x80263FA4u; f_80260AF8(c); // 80263FA0
  goto L_80263FBC; // 80263FA4
L_80263FA8:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 80263FA8
  c->r[4]=c->r[31]|c->r[31]; // 80263FAC
  c->r[3]=c->r[1]+0x00000008u; // 80263FB0
  W32(c->r[1]+0x00000008u,c->r[0]); // 80263FB4
  c->lr=0x80263FBCu; f_80261B68(c); // 80263FB8
L_80263FBC:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 80263FBC
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 80263FC0
  c->r[30]=R32(c->r[1]+0x00000128u); // 80263FC4
  c->r[29]=R32(c->r[1]+0x00000124u); // 80263FC8
  c->r[28]=R32(c->r[1]+0x00000120u); // 80263FCC
  c->lr=c->r[0]; // 80263FD0
  c->r[1]=c->r[1]+0x00000130u; // 80263FD4
  return; // 80263FD8
}

// Draw1Mat1ShpDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMatQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34UlPQ34nw4r3g3d16Draw1Mat1ShpSwapPQ44nw4r3g3d8G3DState8IndMtxOp
void f_80263FDC(Ctx* __restrict c) {
  trace_call(0x80263FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFDA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263FDC
  c->r[0]=c->lr; // 80263FE0
  W32(c->r[1]+0x00000264u,c->r[0]); // 80263FE4
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[31]);} // 80263FE8
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,31,ea,0,0);} // 80263FEC
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[30]);} // 80263FF0
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,30,ea,0,0);} // 80263FF4
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[29]);} // 80263FF8
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,29,ea,0,0);} // 80263FFC
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[28]);} // 80264000
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,28,ea,0,0);} // 80264004
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[27]);} // 80264008
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,27,ea,0,0);} // 8026400C
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[26]);} // 80264010
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,26,ea,0,0);} // 80264014
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[25]);} // 80264018
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,25,ea,0,0);} // 8026401C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[24]);} // 80264020
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,24,ea,0,0);} // 80264024
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[23]);} // 80264028
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,23,ea,0,0);} // 8026402C
  c->r[11]=c->r[1]+0x000001D0u; // 80264030
  c->lr=0x80264038u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80264034
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 80264038
  c->r[18]=c->r[3]|c->r[3]; // 8026403C
  c->r[0]=0u+0x43300000u; // 80264040
  c->r[26]=c->r[4]|c->r[4]; // 80264044
  c->r[27]=c->r[5]|c->r[5]; // 80264048
  c->r[28]=c->r[6]|c->r[6]; // 8026404C
  W32(c->r[1]+0x00000158u,c->r[0]); // 80264050
  c->r[17]=c->r[7]|c->r[7]; // 80264054
  c->r[15]=c->r[8]|c->r[8]; // 80264058
  c->r[20]=c->r[9]|c->r[9]; // 8026405C
  W32(c->r[1]+0x00000160u,c->r[0]); // 80264060
  if (!crb(c,2)) { goto L_80264074; } // 80264064
  c->r[3]=0u+0x00000000u; // 80264068
  c->lr=0x80264070u; f_8015C3BC(c); // 8026406C
  c->lr=0x80264074u; f_8015980C(c); // 80264070
L_80264074:;
  c->r[16]=0u+0x00000000u; // 80264074
  c->r[19]=0u+0x00000000u; // 80264078
  W32(c->r[1]+0x00000074u,c->r[16]); // 8026407C
  c->r[0]=R32(c->r[18]+0x00000000u); // 80264080
  cmps(c,0,(int32_t)c->r[0],0); // 80264084
  if (crb(c,2)) { goto L_802640B4; } // 80264088
  c->r[0]=rotl(c->r[17],0)&0x00000010u; cr0(c,c->r[0]); // 8026408C
  if (crb(c,2)) { goto L_80264098; } // 80264090
  c->r[16]=0u+0x00000001u; // 80264094
L_80264098:;
  c->r[3]=c->r[18]|c->r[18]; // 80264098
  c->lr=0x802640A0u; f_80254860(c); // 8026409C
  cmps(c,0,(int32_t)c->r[3],0); // 802640A0
  W32(c->r[1]+0x00000074u,c->r[3]); // 802640A4
  if (crb(c,2)) { goto L_802640B8; } // 802640A8
  c->r[19]=0u+0x00000001u; // 802640AC
  goto L_802640B8; // 802640B0
L_802640B4:;
  c->r[16]=0u+0x00000001u; // 802640B4
L_802640B8:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 802640B8
  c->r[4]=c->r[17]|c->r[17]; // 802640BC
  c->r[5]=c->r[15]|c->r[15]; // 802640C0
  c->r[6]=c->r[20]|c->r[20]; // 802640C4
  W32(c->r[1]+0x00000040u,c->r[0]); // 802640C8
  c->r[7]=c->r[16]|c->r[16]; // 802640CC
  c->r[3]=c->r[1]+0x00000040u; // 802640D0
  c->lr=0x802640D8u; f_80263B48(c); // 802640D4
  c->r[3]=R32(c->r[26]+0x00000000u); // 802640D8
  cmps(c,0,(int32_t)c->r[3],0); // 802640DC
  if (crb(c,2)) { goto L_8026481C; } // 802640E0
  c->r[0]=R32(c->r[3]+0x00000034u); // 802640E4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802640E8
  if (!crb(c,2)) { goto L_8026481C; } // 802640EC
  cmps(c,0,(int32_t)c->r[19],0); // 802640F0
  if (crb(c,2)) { goto L_80264714; } // 802640F4
  c->r[6]=0u+0x80310000u; // 802640F8
  {uint32_t ea=c->r[6]+0xFFFF85D8u; c->r[5]=R32(ea); c->r[6]=ea;} // 802640FC
  c->r[0]=cntlz(c->r[15]); // 80264100
  c->r[8]=R32(c->r[1]+0x00000074u); // 80264104
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[16]); // 80264108
  c->r[4]=R32(c->r[6]+0x00000004u); // 8026410C
  c->r[3]=R32(c->r[6]+0x00000008u); // 80264110
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80264114
  W32(c->r[1]+0x00000080u,c->r[5]); // 80264118
  c->r[7]=c->r[16]|c->r[16]; // 8026411C
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 80264120
  W32(c->r[1]+0x00000084u,c->r[4]); // 80264124
  {uint32_t ea=c->r[8]+0x00000010u; c->f[25]=c->ps1[25]=RF32(ea);} // 80264128
  W32(c->r[1]+0x00000088u,c->r[3]); // 8026412C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80264130
  if (!crb(c,2)) { goto L_80264144; } // 80264134
  c->r[0]=R32(c->r[15]+0x00000014u); // 80264138
  c->r[0]=cntlz(c->r[0]); // 8026413C
  c->r[7]=rotl(c->r[0],27)&0x07FFFFFFu; // 80264140
L_80264144:;
  cmps(c,0,(int32_t)c->r[7],0); // 80264144
  if (crb(c,2)) { goto L_80264178; } // 80264148
  c->r[3]=R32(c->r[18]+0x00000000u); // 8026414C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80264150
  cmps(c,0,(int32_t)c->r[0],0); // 80264154
  if (crb(c,2)) { goto L_80264164; } // 80264158
  c->r[3]=c->r[3]+c->r[0]; // 8026415C
  goto L_80264168; // 80264160
L_80264164:;
  c->r[3]=0u+0x00000000u; // 80264164
L_80264168:;
  c->r[0]=c->r[3]+0x00000020u; // 80264168
  c->r[3]=c->r[1]+0x0000003Cu; // 8026416C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80264170
  goto L_8026417C; // 80264174
L_80264178:;
  c->r[3]=c->r[15]+0x00000014u; // 80264178
L_8026417C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026417C
  c->r[3]=c->r[1]+0x0000005Cu; // 80264180
  c->r[5]=c->r[1]+0x00000070u; // 80264184
  c->r[4]=0u+0x00000000u; // 80264188
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8026418C
  c->lr=0x80264194u; f_80253B50(c); // 80264190
  c->r[3]=c->r[1]+0x0000005Cu; // 80264194
  c->r[5]=c->r[1]+0x0000006Cu; // 80264198
  c->r[4]=0u+0x00000001u; // 8026419C
  c->lr=0x802641A4u; f_80253B50(c); // 802641A0
  c->r[3]=c->r[1]+0x0000005Cu; // 802641A4
  c->r[5]=c->r[1]+0x00000068u; // 802641A8
  c->r[4]=0u+0x00000002u; // 802641AC
  c->lr=0x802641B4u; f_80253B50(c); // 802641B0
  cmps(c,0,(int32_t)c->r[16],0); // 802641B4
  c->r[31]=R8(c->r[1]+0x00000069u); // 802641B8
  c->r[3]=0u+0x00000000u; // 802641BC
  if (!crb(c,2)) { goto L_802641D0; } // 802641C0
  c->r[0]=R32(c->r[15]+0x0000001Cu); // 802641C4
  cmps(c,0,(int32_t)c->r[0],0); // 802641C8
  if (!crb(c,2)) { goto L_802641D4; } // 802641CC
L_802641D0:;
  c->r[3]=0u+0x00000001u; // 802641D0
L_802641D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802641D4
  if (crb(c,2)) { goto L_802641F0; } // 802641D8
  c->r[3]=R32(c->r[18]+0x00000000u); // 802641DC
  c->r[4]=c->r[1]+0x00000038u; // 802641E0
  c->r[0]=c->r[3]+0x000003F0u; // 802641E4
  W32(c->r[1]+0x00000038u,c->r[0]); // 802641E8
  goto L_802641F4; // 802641EC
L_802641F0:;
  c->r[4]=c->r[15]+0x0000001Cu; // 802641F0
L_802641F4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802641F4
  c->r[3]=c->r[1]+0x00000058u; // 802641F8
  c->r[5]=c->r[1]+0x00000078u; // 802641FC
  c->r[4]=0u+0x00000000u; // 80264200
  W32(c->r[1]+0x00000058u,c->r[0]); // 80264204
  c->lr=0x8026420Cu; f_80254338(c); // 80264208
  c->r[3]=c->r[1]+0x00000058u; // 8026420C
  c->r[5]=c->r[1]+0x0000007Cu; // 80264210
  c->r[4]=0u+0x00000001u; // 80264214
  c->lr=0x8026421Cu; f_80254338(c); // 80264218
  c->r[19]=c->r[1]+0x00000080u; // 8026421C
  c->r[20]=0u+0x00000000u; // 80264220
L_80264224:;
  c->r[0]=rotl(c->r[20],2)&0x000003FCu; // 80264224
  c->r[7]=c->r[1]+0x000000A0u; // 80264228
  c->r[10]=c->r[1]+0x00000090u; // 8026422C
  c->r[4]=R32(c->r[19]+c->r[0]); // 80264230
  c->r[3]=c->r[1]+0x00000058u; // 80264234
  c->r[7]=c->r[7]+c->r[0]; // 80264238
  c->r[10]=c->r[10]+c->r[0]; // 8026423C
  c->r[5]=0u+0x00000000u; // 80264240
  c->r[6]=0u+0x00000000u; // 80264244
  c->r[8]=0u+0x00000000u; // 80264248
  c->r[9]=0u+0x00000000u; // 8026424C
  c->lr=0x80264254u; f_80254370(c); // 80264250
  c->r[20]=c->r[20]+0x00000001u; // 80264254
  cmpu(c,0,c->r[20],0x00000004u); // 80264258
  if (crb(c,0)) { IRQCHK(c); goto L_80264224; } // 8026425C
  cmps(c,0,(int32_t)c->r[16],0); // 80264260
  c->r[3]=0u+0x00000000u; // 80264264
  if (!crb(c,2)) { goto L_80264278; } // 80264268
  c->r[0]=R32(c->r[15]+0x00000024u); // 8026426C
  cmps(c,0,(int32_t)c->r[0],0); // 80264270
  if (!crb(c,2)) { goto L_8026427C; } // 80264274
L_80264278:;
  c->r[3]=0u+0x00000001u; // 80264278
L_8026427C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026427C
  if (crb(c,2)) { goto L_80264298; } // 80264280
  c->r[3]=R32(c->r[18]+0x00000000u); // 80264284
  c->r[4]=c->r[1]+0x00000034u; // 80264288
  c->r[0]=c->r[3]+0x0000001Cu; // 8026428C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80264290
  goto L_8026429C; // 80264294
L_80264298:;
  c->r[4]=c->r[15]+0x00000024u; // 80264298
L_8026429C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026429C
  cmps(c,0,(int32_t)c->r[16],0); // 802642A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 802642A4
  if (!crb(c,2)) { goto L_802642B8; } // 802642A8
  c->r[0]=R32(c->r[15]+0x00000018u); // 802642AC
  c->r[0]=cntlz(c->r[0]); // 802642B0
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; // 802642B4
L_802642B8:;
  cmps(c,0,(int32_t)c->r[16],0); // 802642B8
  if (crb(c,2)) { goto L_802642EC; } // 802642BC
  c->r[3]=R32(c->r[18]+0x00000000u); // 802642C0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802642C4
  cmps(c,0,(int32_t)c->r[0],0); // 802642C8
  if (crb(c,2)) { goto L_802642D8; } // 802642CC
  c->r[3]=c->r[3]+c->r[0]; // 802642D0
  goto L_802642DC; // 802642D4
L_802642D8:;
  c->r[3]=0u+0x00000000u; // 802642D8
L_802642DC:;
  c->r[0]=c->r[3]+0x000000A0u; // 802642DC
  c->r[3]=c->r[1]+0x00000030u; // 802642E0
  W32(c->r[1]+0x00000030u,c->r[0]); // 802642E4
  goto L_802642F0; // 802642E8
L_802642EC:;
  c->r[3]=c->r[15]+0x00000018u; // 802642EC
L_802642F0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802642F0
  c->r[18]=c->r[1]+0x00000064u; // 802642F4
  c->r[19]=c->r[1]+0x00000060u; // 802642F8
  c->r[20]=c->r[1]+0x000000C8u; // 802642FC
  W32(c->r[1]+0x00000050u,c->r[0]); // 80264300
  c->r[21]=0u+0x00000000u; // 80264304
  c->r[16]=0u+0x00000001u; // 80264308
  c->r[15]=0u+0x00000000u; // 8026430C
L_80264310:;
  c->r[22]=c->r[21]+0x00000001u; // 80264310
  c->r[3]=c->r[1]+0x00000054u; // 80264314
  c->r[4]=c->r[22]|c->r[22]; // 80264318
  c->r[5]=c->r[1]+0x0000004Cu; // 8026431C
  c->r[6]=c->r[1]+0x00000008u; // 80264320
  c->lr=0x80264328u; f_80253728(c); // 80264324
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80264328
  cmps(c,0,(int32_t)c->r[0],3); // 8026432C
  if (!crb(c,2)) { goto L_80264350; } // 80264330
  W8(c->r[18]+0x00000000u,c->r[16]); // 80264334
  c->r[4]=c->r[22]|c->r[22]; // 80264338
  c->r[5]=c->r[20]|c->r[20]; // 8026433C
  c->r[6]=c->r[19]|c->r[19]; // 80264340
  c->r[3]=c->r[1]+0x00000050u; // 80264344
  c->lr=0x8026434Cu; f_80253F80(c); // 80264348
  goto L_80264354; // 8026434C
L_80264350:;
  W8(c->r[18]+0x00000000u,c->r[15]); // 80264350
L_80264354:;
  c->r[21]=c->r[21]+0x00000001u; // 80264354
  c->r[19]=c->r[19]+0x00000001u; // 80264358
  cmpu(c,0,c->r[21],0x00000003u); // 8026435C
  c->r[20]=c->r[20]+0x00000030u; // 80264360
  c->r[18]=c->r[18]+0x00000001u; // 80264364
  if (crb(c,0)) { IRQCHK(c); goto L_80264310; } // 80264368
  c->r[0]=R32(c->r[26]+0x00000000u); // 8026436C
  c->r[3]=c->r[1]+0x0000002Cu; // 80264370
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80264374
  c->lr=0x8026437Cu; f_802627A0(c); // 80264378
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 8026437C
  if (crb(c,2)) { goto L_80264394; } // 80264380
  c->r[3]=0u+0x00000001u; // 80264384
  c->lr=0x8026438Cu; f_8025FAD8(c); // 80264388
  c->r[3]=0u+0x00000010u; // 8026438C
  c->lr=0x80264394u; f_80263380(c); // 80264390
L_80264394:;
  c->r[3]=c->r[26]|c->r[26]; // 80264394
  c->lr=0x8026439Cu; f_80252364(c); // 80264398
  W32(c->r[1]+0x00000048u,c->r[3]); // 8026439C
  c->r[18]=c->r[1]+0x000000A0u; // 802643A0
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[31]=RF64(ea);} // 802643A4
  c->r[19]=c->r[1]+0x00000090u; // 802643A8
  c->r[30]=R32(c->r[3]+0x00000020u); // 802643AC
  c->r[20]=c->r[1]+0x00000078u; // 802643B0
  {uint32_t ea=c->r[2]+0xFFFF9CD8u; c->f[29]=c->ps1[29]=RF32(ea);} // 802643B4
  c->r[21]=c->r[1]+0x00000080u; // 802643B8
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[30]=c->ps1[30]=RF32(ea);} // 802643BC
  c->r[17]=c->r[1]+0x00000060u; // 802643C0
  c->r[16]=c->r[1]+0x00000064u; // 802643C4
  c->r[29]=0u+0x00000000u; // 802643C8
  c->r[22]=0u+0x00000010u; // 802643CC
  c->r[23]=0u+0xCC010000u; // 802643D0
  c->r[24]=0u+0x00000000u; // 802643D4
  c->r[25]=0u+0x00000002u; // 802643D8
  goto L_80264704; // 802643DC
L_802643E0:;
  c->r[3]=c->r[1]+0x00000074u; // 802643E0
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802643E4
  c->lr=0x802643ECu; f_802537DC(c); // 802643E8
  c->f[24]=c->f[1]; // 802643EC
  c->f[2]=c->f[26]; // 802643F0
  c->f[23]=c->ps1[23]=S(c->f[29]-c->f[1]); // 802643F4
  c->lr=0x802643FCu; f_801968E4(c); // 802643F8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 802643FC
  c->f[1]=c->f[24]; // 80264400
  c->f[2]=c->f[25]; // 80264404
  c->lr=0x8026440Cu; f_801968E4(c); // 80264408
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8026440C
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[2]=RF64(ea);} // 80264410
  c->f[1]=c->f[24]; // 80264414
  c->lr=0x8026441Cu; f_801968E4(c); // 80264418
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 8026441C
  c->f[3]=c->ps1[3]=S(c->f[1]); // 80264420
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[24]); // 80264424
  c->r[4]=c->r[1]+0x00000028u; // 80264428
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 8026442C
  c->r[3]=0u+0x00000002u; // 80264430
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80264434
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80264438
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8026443C
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[1]);} // 80264440
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80264444
  c->r[0]=R32(c->r[1]+0x0000016Cu); // 80264448
  W8(c->r[1]+0x00000068u,c->r[0]); // 8026444C
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 80264450
  c->r[0]=R32(c->r[1]+0x00000174u); // 80264454
  W8(c->r[1]+0x00000069u,c->r[0]); // 80264458
  c->r[0]=R32(c->r[1]+0x00000068u); // 8026445C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80264460
  c->lr=0x80264468u; f_80183A98(c); // 80264464
  c->r[15]=0u+0x00000000u; // 80264468
L_8026446C:;
  c->r[3]=rotl(c->r[15],0)&0x000000FFu; // 8026446C
  c->r[0]=R8(c->r[16]+c->r[3]); // 80264470
  cmps(c,0,(int32_t)c->r[0],0); // 80264474
  if (crb(c,2)) { goto L_802644D8; } // 80264478
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 8026447C
  c->r[6]=c->r[1]+0x000000C8u; // 80264480
  c->r[0]=R8(c->r[17]+c->r[3]); // 80264484
  c->r[3]=c->r[3]+0x00000001u; // 80264488
  c->r[4]=c->r[1]+0x000000B0u; // 8026448C
  {uint32_t ea=c->r[6]+c->r[5]; c->f[0]=c->ps1[0]=RF32(ea); c->r[6]=ea;} // 80264490
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80264494
  c->f[5]=c->ps1[5]=S(c->f[24]*c->f[0]); // 80264498
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026449C
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802644A0
  c->f[4]=c->ps1[4]=S(c->f[24]*c->f[2]); // 802644A4
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802644A8
  c->f[2]=c->ps1[2]=S(c->f[24]*c->f[1]); // 802644AC
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 802644B0
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802644B4
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802644B8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[5]);} // 802644BC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[4]);} // 802644C0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[3]);} // 802644C4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 802644C8
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 802644CC
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 802644D0
  c->lr=0x802644D8u; f_8018342C(c); // 802644D4
L_802644D8:;
  c->r[15]=c->r[15]+0x00000001u; // 802644D8
  cmpu(c,0,c->r[15],0x00000003u); // 802644DC
  if (crb(c,0)) { IRQCHK(c); goto L_8026446C; } // 802644E0
  c->r[3]=R8(c->r[1]+0x00000070u); // 802644E4
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 802644E8
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 802644EC
  c->r[7]=0u+0x00000000u; // 802644F0
  W32(c->r[1]+0x00000164u,c->r[3]); // 802644F4
  c->r[3]=R8(c->r[1]+0x00000071u); // 802644F8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 802644FC
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 80264500
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80264504
  c->r[0]=R8(c->r[1]+0x0000006Du); // 80264508
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 8026450C
  W32(c->r[1]+0x00000164u,c->r[3]); // 80264510
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 80264514
  c->r[3]=R8(c->r[1]+0x00000072u); // 80264518
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8026451C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[23]); // 80264520
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 80264524
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80264528
  W32(c->r[1]+0x00000164u,c->r[3]); // 8026452C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[24]); // 80264530
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 80264534
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 80264538
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[23]); // 8026453C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 80264540
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80264544
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 80264548
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 8026454C
  c->r[3]=R8(c->r[1]+0x00000073u); // 80264550
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80264554
  c->f[7]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 80264558
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 8026455C
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[24]); // 80264560
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 80264564
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 80264568
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 8026456C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[23]); // 80264570
  W32(c->r[1]+0x00000164u,c->r[3]); // 80264574
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[24]); // 80264578
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 8026457C
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 80264580
  {uint32_t ea=c->r[1]+0x00000160u; c->f[2]=RF64(ea);} // 80264584
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80264588
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[7]);} // 8026458C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 80264590
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 80264594
  c->r[0]=R32(c->r[1]+0x00000174u); // 80264598
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 8026459C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802645A0
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[5]);} // 802645A4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 802645A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802645AC
  c->r[3]=R32(c->r[1]+0x0000016Cu); // 802645B0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802645B4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802645B8
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 802645BC
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[0]);} // 802645C0
  c->r[4]=R32(c->r[1]+0x0000017Cu); // 802645C4
  c->r[5]=R32(c->r[1]+0x00000184u); // 802645C8
  c->ctr=c->r[25]; // 802645CC
L_802645D0:;
  c->r[6]=rotl(c->r[7],3)&0x000003F8u; // 802645D0
  c->r[8]=rotl(c->r[7],1)&0x000000FEu; // 802645D4
  c->r[9]=R32(c->r[18]+c->r[6]); // 802645D8
  cmps(c,0,(int32_t)c->r[9],0); // 802645DC
  if (crb(c,2)) { goto L_802645F8; } // 802645E0
  c->r[9]=rotl(c->r[8],2)&0x000003FCu; // 802645E4
  c->r[9]=c->r[18]+c->r[9]; // 802645E8
  c->r[9]=R32(c->r[9]+0x00000004u); // 802645EC
  cmps(c,0,(int32_t)c->r[9],0); // 802645F0
  if (!crb(c,2)) { goto L_802646D4; } // 802645F4
L_802645F8:;
  c->r[9]=R32(c->r[19]+c->r[6]); // 802645F8
  cmps(c,0,(int32_t)c->r[9],0); // 802645FC
  if (!crb(c,2)) { goto L_8026467C; } // 80264600
  c->r[9]=rotl(c->r[7],2)&0x000003FCu; // 80264604
  c->r[11]=c->r[1]+0x00000078u; // 80264608
  {uint32_t ea=c->r[11]+c->r[9]; c->r[9]=R8(ea); c->r[11]=ea;} // 8026460C
  W32(c->r[1]+0x00000164u,c->r[9]); // 80264610
  c->r[10]=R8(c->r[11]+0x00000001u); // 80264614
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80264618
  c->r[9]=R8(c->r[11]+0x00000002u); // 8026461C
  W32(c->r[1]+0x0000015Cu,c->r[10]); // 80264620
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80264624
  W32(c->r[1]+0x00000164u,c->r[9]); // 80264628
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=RF64(ea);} // 8026462C
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[2]); // 80264630
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80264634
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80264638
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8026463C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80264640
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 80264644
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 80264648
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[2]);} // 8026464C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80264650
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80264654
  c->r[11]=R32(c->r[1]+0x00000184u); // 80264658
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 8026465C
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 80264660
  c->r[10]=R32(c->r[1]+0x0000017Cu); // 80264664
  c->r[9]=R32(c->r[1]+0x00000174u); // 80264668
  W8(c->r[1]+0x00000044u,c->r[11]); // 8026466C
  W8(c->r[1]+0x00000045u,c->r[10]); // 80264670
  W8(c->r[1]+0x00000046u,c->r[9]); // 80264674
  goto L_80264688; // 80264678
L_8026467C:;
  W8(c->r[1]+0x00000044u,c->r[0]); // 8026467C
  W8(c->r[1]+0x00000045u,c->r[3]); // 80264680
  W8(c->r[1]+0x00000046u,c->r[4]); // 80264684
L_80264688:;
  c->r[8]=rotl(c->r[8],2)&0x000003FCu; // 80264688
  c->r[8]=c->r[19]+c->r[8]; // 8026468C
  c->r[8]=R32(c->r[8]+0x00000004u); // 80264690
  cmps(c,0,(int32_t)c->r[8],0); // 80264694
  if (!crb(c,2)) { goto L_802646AC; } // 80264698
  c->r[8]=rotl(c->r[7],2)&0x000003FCu; // 8026469C
  c->r[8]=c->r[20]+c->r[8]; // 802646A0
  c->r[8]=R8(c->r[8]+0x00000003u); // 802646A4
  goto L_802646B0; // 802646A8
L_802646AC:;
  c->r[8]=c->r[5]|c->r[5]; // 802646AC
L_802646B0:;
  W8(c->r[23]+0xFFFF8000u,c->r[22]); // 802646B0
  c->r[6]=R32(c->r[21]+c->r[6]); // 802646B4
  W8(c->r[1]+0x00000047u,c->r[8]); // 802646B8
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 802646BC
  W16(c->r[23]+0xFFFF8000u,c->r[24]); // 802646C0
  c->r[6]=c->r[6]+0x0000100Cu; // 802646C4
  c->r[8]=R32(c->r[1]+0x00000044u); // 802646C8
  W16(c->r[23]+0xFFFF8000u,c->r[6]); // 802646CC
  W32(c->r[23]+0xFFFF8000u,c->r[8]); // 802646D0
L_802646D4:;
  c->r[7]=c->r[7]+0x00000001u; // 802646D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802645D0; } // 802646D8
  c->r[3]=c->r[1]+0x00000048u; // 802646DC
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802646E0
  c->lr=0x802646E8u; f_80254E40(c); // 802646E4
  c->r[0]=R32(c->r[26]+0x00000000u); // 802646E8
  c->r[4]=c->r[27]|c->r[27]; // 802646EC
  c->r[5]=c->r[28]|c->r[28]; // 802646F0
  c->r[3]=c->r[1]+0x00000024u; // 802646F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802646F8
  c->lr=0x80264700u; f_80262944(c); // 802646FC
  c->r[29]=c->r[29]+0x00000001u; // 80264700
L_80264704:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80264704
  cmpu(c,0,c->r[0],c->r[30]); // 80264708
  if (crb(c,0)) { IRQCHK(c); goto L_802643E0; } // 8026470C
  goto L_8026481C; // 80264710
L_80264714:;
  c->r[0]=rotl(c->r[17],0)&0x00000002u; cr0(c,c->r[0]); // 80264714
  if (!crb(c,2)) { goto L_802647EC; } // 80264718
  c->r[0]=R32(c->r[26]+0x00000000u); // 8026471C
  c->r[3]=c->r[1]+0x00000020u; // 80264720
  W32(c->r[1]+0x00000020u,c->r[0]); // 80264724
  c->lr=0x8026472Cu; f_802627A0(c); // 80264728
  cmps(c,0,(int32_t)c->r[15],0); // 8026472C
  if (crb(c,2)) { goto L_802647EC; } // 80264730
  c->r[5]=R32(c->r[15]+0x0000002Cu); // 80264734
  cmps(c,0,(int32_t)c->r[5],0); // 80264738
  if (crb(c,2)) { goto L_8026475C; } // 8026473C
  c->r[4]=R32(c->r[26]+0x00000000u); // 80264740
  c->r[3]=c->r[1]+0x0000001Cu; // 80264744
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000048u); // 80264748
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026474C
  c->r[0]=R32(c->r[5]+c->r[0]); // 80264750
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80264754
  c->lr=0x8026475Cu; f_80254B5C(c); // 80264758
L_8026475C:;
  c->r[4]=R32(c->r[15]+0x00000030u); // 8026475C
  cmps(c,0,(int32_t)c->r[4],0); // 80264760
  if (crb(c,2)) { goto L_8026478C; } // 80264764
  c->r[3]=R32(c->r[26]+0x00000000u); // 80264768
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Au); // 8026476C
  cmps(c,0,(int32_t)c->r[0],0); // 80264770
  if (crb(c,0)) { goto L_8026478C; } // 80264774
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80264778
  c->r[3]=c->r[1]+0x00000018u; // 8026477C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80264780
  W32(c->r[1]+0x00000018u,c->r[0]); // 80264784
  c->lr=0x8026478Cu; f_80254C2C(c); // 80264788
L_8026478C:;
  c->r[4]=R32(c->r[15]+0x00000034u); // 8026478C
  cmps(c,0,(int32_t)c->r[4],0); // 80264790
  if (crb(c,2)) { goto L_802647EC; } // 80264794
  c->r[3]=R32(c->r[26]+0x00000000u); // 80264798
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Cu); // 8026479C
  cmps(c,0,(int32_t)c->r[0],0); // 802647A0
  if (crb(c,0)) { goto L_802647C0; } // 802647A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802647A8
  c->r[3]=c->r[1]+0x00000014u; // 802647AC
  c->r[0]=R32(c->r[4]+c->r[0]); // 802647B0
  c->r[4]=0u+0x0000000Bu; // 802647B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802647B8
  c->lr=0x802647C0u; f_80254D24(c); // 802647BC
L_802647C0:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 802647C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Eu); // 802647C4
  cmps(c,0,(int32_t)c->r[0],0); // 802647C8
  if (crb(c,0)) { goto L_802647EC; } // 802647CC
  c->r[5]=R32(c->r[15]+0x00000034u); // 802647D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802647D4
  c->r[3]=c->r[1]+0x00000010u; // 802647D8
  c->r[4]=0u+0x0000000Cu; // 802647DC
  c->r[0]=R32(c->r[5]+c->r[0]); // 802647E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 802647E4
  c->lr=0x802647ECu; f_80254D24(c); // 802647E8
L_802647EC:;
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 802647EC
  if (crb(c,2)) { goto L_80264804; } // 802647F0
  c->r[3]=0u+0x00000001u; // 802647F4
  c->lr=0x802647FCu; f_8025FAD8(c); // 802647F8
  c->r[3]=0u+0x00000010u; // 802647FC
  c->lr=0x80264804u; f_80263380(c); // 80264800
L_80264804:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 80264804
  c->r[4]=c->r[27]|c->r[27]; // 80264808
  c->r[5]=c->r[28]|c->r[28]; // 8026480C
  c->r[3]=c->r[1]+0x0000000Cu; // 80264810
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80264814
  c->lr=0x8026481Cu; f_80262944(c); // 80264818
L_8026481C:;
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,31,ea,0,0);} // 8026481C
  {uint32_t ea=c->r[1]+0x00000250u; c->f[31]=RF64(ea);} // 80264820
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,30,ea,0,0);} // 80264824
  {uint32_t ea=c->r[1]+0x00000240u; c->f[30]=RF64(ea);} // 80264828
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,29,ea,0,0);} // 8026482C
  {uint32_t ea=c->r[1]+0x00000230u; c->f[29]=RF64(ea);} // 80264830
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,28,ea,0,0);} // 80264834
  {uint32_t ea=c->r[1]+0x00000220u; c->f[28]=RF64(ea);} // 80264838
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,27,ea,0,0);} // 8026483C
  {uint32_t ea=c->r[1]+0x00000210u; c->f[27]=RF64(ea);} // 80264840
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,26,ea,0,0);} // 80264844
  {uint32_t ea=c->r[1]+0x00000200u; c->f[26]=RF64(ea);} // 80264848
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,25,ea,0,0);} // 8026484C
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[25]=RF64(ea);} // 80264850
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,24,ea,0,0);} // 80264854
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[24]=RF64(ea);} // 80264858
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,23,ea,0,0);} // 8026485C
  c->r[11]=c->r[1]+0x000001D0u; // 80264860
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[23]=RF64(ea);} // 80264864
  c->lr=0x8026486Cu; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80264868
  c->r[0]=R32(c->r[1]+0x00000264u); // 8026486C
  c->lr=c->r[0]; // 80264870
  c->r[1]=c->r[1]+0x00000260u; // 80264874
  return; // 80264878
}

// fn_8026487C
void f_8026487C(Ctx* __restrict c) {
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 8026487C
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 80264880
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 80264884
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80264888
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 8026488C
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 80264890
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 80264894
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 80264898
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 8026489C
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 802648A0
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 802648A4
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 802648A8
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 802648AC
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802648B0
  c->r[12]=0u+0x80440000u; // 802648B4
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 802648B8
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 802648BC
  c->r[12]=c->r[12]+0xFFFFBA40u; // 802648C0
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 802648C4
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 802648C8
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,1,0);} // 802648CC
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802648D0
  {double t0=S(c->f[13]-c->f[13]), t1=S(c->ps1[13]-c->ps1[13]); c->f[13]=t0; c->ps1[13]=t1;} // 802648D4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 802648D8
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802648DC
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 802648E0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 802648E4
  {double t0=std::fabs(c->f[7]), t1=std::fabs(c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 802648E8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,13,ea,1,0);} // 802648EC
  fcmp(c,0,c->f[8],c->f[6]); // 802648F0
  if (!crb(c,0)) { goto L_80264900; } // 802648F4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,13,ea,0,0);} // 802648F8
  return; // 802648FC
L_80264900:;
  c->f[8]=c->ps1[8]=fres(c->f[7]); // 80264900
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 80264904
  {double t0=S(c->f[8]+c->f[8]), t1=S(c->ps1[8]+c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 80264908
  {double t0=S(c->f[7]*c->f[8]), t1=S(c->ps1[7]*c->ps1[8]); c->f[10]=t0; c->ps1[10]=t1;} // 8026490C
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 80264910
  {double t0=S(-std::fma(c->f[8],c->f[10],-c->f[11])), t1=S(-std::fma(c->ps1[8],c->ps1[10],-c->ps1[11])); c->f[8]=t0; c->ps1[8]=t1;} // 80264914
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 80264918
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 8026491C
  {double t0=S(c->f[12]*c->f[8]), t1=S(c->ps1[12]*c->f[8]); c->f[12]=t0; c->ps1[12]=t1;} // 80264920
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 80264924
  {double t0=S(c->f[4]*c->f[12]), t1=S(c->ps1[4]*c->f[12]); c->f[0]=t0; c->ps1[0]=t1;} // 80264928
  {double t0=S(std::fma(c->f[5],c->ps1[12],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[12],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8026492C
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80264930
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80264934
  return; // 80264938
}

// fn_8026493C
void f_8026493C(Ctx* __restrict c) {
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 8026493C
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 80264940
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 80264944
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80264948
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 8026494C
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 80264950
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 80264954
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 80264958
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 8026495C
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 80264960
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 80264964
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 80264968
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 8026496C
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80264970
  c->r[12]=0u+0x80440000u; // 80264974
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 80264978
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 8026497C
  c->r[12]=c->r[12]+0xFFFFBA40u; // 80264980
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 80264984
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 80264988
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,1,0);} // 8026498C
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80264990
  {double t0=S(c->f[13]-c->f[13]), t1=S(c->ps1[13]-c->ps1[13]); c->f[13]=t0; c->ps1[13]=t1;} // 80264994
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 80264998
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 8026499C
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 802649A0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 802649A4
  {double t0=std::fabs(c->f[7]), t1=std::fabs(c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 802649A8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,13,ea,1,0);} // 802649AC
  fcmp(c,0,c->f[8],c->f[6]); // 802649B0
  if (!crb(c,0)) { goto L_802649C0; } // 802649B4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,13,ea,0,0);} // 802649B8
  return; // 802649BC
L_802649C0:;
  c->f[8]=c->ps1[8]=fres(c->f[7]); // 802649C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 802649C4
  {double t0=S(c->f[8]+c->f[8]), t1=S(c->ps1[8]+c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 802649C8
  {double t0=S(c->f[7]*c->f[8]), t1=S(c->ps1[7]*c->ps1[8]); c->f[10]=t0; c->ps1[10]=t1;} // 802649CC
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 802649D0
  {double t0=S(-std::fma(c->f[8],c->f[10],-c->f[11])), t1=S(-std::fma(c->ps1[8],c->ps1[10],-c->ps1[11])); c->f[8]=t0; c->ps1[8]=t1;} // 802649D4
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 802649D8
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 802649DC
  {double t0=S(c->f[12]*c->f[8]), t1=S(c->ps1[12]*c->f[8]); c->f[12]=t0; c->ps1[12]=t1;} // 802649E0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,1,ea,0,0);} // 802649E4
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 802649E8
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,2,ea,1,0);} // 802649EC
  {double t0=S(c->f[4]*c->f[12]), t1=S(c->ps1[4]*c->f[12]); c->f[0]=t0; c->ps1[0]=t1;} // 802649F0
  {double t0=S(c->f[1]*c->f[9]), t1=S(c->ps1[1]*c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 802649F4
  {double t0=S(std::fma(c->f[5],c->ps1[12],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[12],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802649F8
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802649FC
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80264A00
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[9],c->f[1])); // 80264A04
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80264A08
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 80264A0C
  return; // 80264A10
}

// fn_80264A14
void f_80264A14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264A14
  c->r[0]=c->lr; // 80264A18
  W32(c->r[1]+0x00000064u,c->r[0]); // 80264A1C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80264A20
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80264A24
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80264A28
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80264A2C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80264A30
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80264A34
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264A38
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80264A3C
  c->r[31]=c->r[8]|c->r[8]; // 80264A40
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264A44
  W32(c->r[1]+0x00000028u,c->r[30]); // 80264A48
  c->r[30]=c->r[5]|c->r[5]; // 80264A4C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80264A50
  c->r[29]=c->r[4]|c->r[4]; // 80264A54
  W32(c->r[1]+0x00000020u,c->r[28]); // 80264A58
  c->r[28]=c->r[3]|c->r[3]; // 80264A5C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264A60
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264A64
  c->f[4]=std::fabs(c->f[2]); // 80264A68
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80264A6C
  fcmp(c,0,c->f[4],c->f[0]); // 80264A70
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80264A74
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80264A78
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264A7C
  if (crb(c,2)) { goto L_80264A94; } // 80264A80
  c->f[1]=std::fabs(c->f[3]); // 80264A84
  fcmp(c,0,c->f[1],c->f[0]); // 80264A88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264A8C
  if (!crb(c,2)) { goto L_80264C30; } // 80264A90
L_80264A94:;
  c->r[3]=c->r[1]+0x00000008u; // 80264A94
  c->r[4]=c->r[3]|c->r[3]; // 80264A98
  c->lr=0x80264AA0u; f_80168E0C(c); // 80264A9C
  cmps(c,0,(int32_t)c->r[30],0); // 80264AA0
  if (crb(c,2)) { goto L_80264B24; } // 80264AA4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 80264AA8
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264AAC
  c->r[3]=c->r[29]+c->r[0]; // 80264AB0
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80264AB4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264AB8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264ABC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264AC0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264AC4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80264AC8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80264ACC
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 80264AD0
  fcmp(c,0,c->f[30],c->f[0]); // 80264AD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264AD8
  if (!crb(c,2)) { goto L_80264AE4; } // 80264ADC
  goto L_80264AF0; // 80264AE0
L_80264AE4:;
  c->f[1]=c->f[30]; // 80264AE4
  c->lr=0x80264AECu; f_80284698(c); // 80264AE8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80264AEC
L_80264AF0:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 80264AF0
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264AF4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 80264AF8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 80264AFC
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80264B00
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80264B04
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 80264B08
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 80264B0C
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 80264B10
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 80264B14
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80264B18
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 80264B1C
  goto L_80264C34; // 80264B20
L_80264B24:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 80264B24
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80264B28
  c->r[3]=c->r[29]+c->r[31]; // 80264B2C
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 80264B30
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264B34
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264B38
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264B3C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80264B40
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264B44
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80264B48
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 80264B4C
  fcmp(c,0,c->f[31],c->f[30]); // 80264B50
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264B54
  if (!crb(c,2)) { goto L_80264B60; } // 80264B58
  goto L_80264B6C; // 80264B5C
L_80264B60:;
  c->f[1]=c->f[31]; // 80264B60
  c->lr=0x80264B68u; f_80284698(c); // 80264B64
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 80264B68
L_80264B6C:;
  c->r[3]=c->r[29]+c->r[31]; // 80264B6C
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80264B70
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264B74
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264B78
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264B7C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264B80
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80264B84
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264B88
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80264B8C
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 80264B90
  fcmp(c,0,c->f[29],c->f[31]); // 80264B94
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264B98
  if (!crb(c,2)) { goto L_80264BA4; } // 80264B9C
  goto L_80264BB0; // 80264BA0
L_80264BA4:;
  c->f[1]=c->f[29]; // 80264BA4
  c->lr=0x80264BACu; f_80284698(c); // 80264BA8
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 80264BAC
L_80264BB0:;
  c->r[3]=c->r[29]+c->r[31]; // 80264BB0
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264BB4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264BB8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264BBC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264BC0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264BC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264BC8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80264BCC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80264BD0
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 80264BD4
  fcmp(c,0,c->f[29],c->f[0]); // 80264BD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264BDC
  if (!crb(c,2)) { goto L_80264BE8; } // 80264BE0
  goto L_80264BF4; // 80264BE4
L_80264BE8:;
  c->f[1]=c->f[29]; // 80264BE8
  c->lr=0x80264BF0u; f_80284698(c); // 80264BEC
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 80264BF0
L_80264BF4:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 80264BF4
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 80264BF8
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264BFC
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 80264C00
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 80264C04
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 80264C08
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80264C0C
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80264C10
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 80264C14
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 80264C18
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 80264C1C
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 80264C20
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80264C24
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,2,ea,0,0);} // 80264C28
  goto L_80264C34; // 80264C2C
L_80264C30:;
  c->lr=0x80264C34u; f_802849E8(c); // 80264C30
L_80264C34:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80264C34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80264C38
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80264C3C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80264C40
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80264C44
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80264C48
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80264C4C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80264C50
  c->r[29]=R32(c->r[1]+0x00000024u); // 80264C54
  c->r[0]=R32(c->r[1]+0x00000064u); // 80264C58
  c->r[28]=R32(c->r[1]+0x00000020u); // 80264C5C
  c->lr=c->r[0]; // 80264C60
  c->r[1]=c->r[1]+0x00000060u; // 80264C64
  return; // 80264C68
}

// fn_80264C6C
void f_80264C6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264C6C
  c->r[0]=c->lr; // 80264C70
  W32(c->r[1]+0x00000074u,c->r[0]); // 80264C74
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80264C78
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80264C7C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80264C80
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80264C84
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80264C88
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80264C8C
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264C90
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80264C94
  c->r[31]=c->r[8]|c->r[8]; // 80264C98
  W32(c->r[1]+0x00000038u,c->r[30]); // 80264C9C
  c->r[30]=c->r[5]|c->r[5]; // 80264CA0
  W32(c->r[1]+0x00000034u,c->r[29]); // 80264CA4
  c->r[29]=c->r[4]|c->r[4]; // 80264CA8
  W32(c->r[1]+0x00000030u,c->r[28]); // 80264CAC
  c->r[28]=c->r[3]|c->r[3]; // 80264CB0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264CB4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264CB8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264CBC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80264CC0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80264CC4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 80264CC8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80264CCC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80264CD0
  c->f[3]=-c->f[1]; // 80264CD4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80264CD8
  c->f[2]=-c->f[2]; // 80264CDC
  c->f[1]=-c->f[1]; // 80264CE0
  c->f[4]=c->ps1[4]=S(c->f[3]); // 80264CE4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80264CE8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80264CEC
  c->f[3]=std::fabs(c->f[4]); // 80264CF0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80264CF4
  fcmp(c,0,c->f[3],c->f[0]); // 80264CF8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264CFC
  if (crb(c,2)) { goto L_80264D2C; } // 80264D00
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80264D04
  c->f[1]=std::fabs(c->f[1]); // 80264D08
  fcmp(c,0,c->f[1],c->f[0]); // 80264D0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264D10
  if (crb(c,2)) { goto L_80264D2C; } // 80264D14
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80264D18
  c->f[1]=std::fabs(c->f[1]); // 80264D1C
  fcmp(c,0,c->f[1],c->f[0]); // 80264D20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264D24
  if (!crb(c,2)) { goto L_80264F7C; } // 80264D28
L_80264D2C:;
  c->r[3]=c->r[1]+0x00000008u; // 80264D2C
  c->r[4]=c->r[3]|c->r[3]; // 80264D30
  c->lr=0x80264D38u; f_80168E0C(c); // 80264D34
  c->r[3]=c->r[1]+0x00000014u; // 80264D38
  c->r[4]=c->r[1]+0x00000008u; // 80264D3C
  c->r[5]=c->r[1]+0x00000020u; // 80264D40
  c->lr=0x80264D48u; f_80168EB4(c); // 80264D44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264D48
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264D4C
  c->f[1]=std::fabs(c->f[1]); // 80264D50
  fcmp(c,0,c->f[1],c->f[0]); // 80264D54
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264D58
  if (crb(c,2)) { goto L_80264D88; } // 80264D5C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264D60
  c->f[1]=std::fabs(c->f[1]); // 80264D64
  fcmp(c,0,c->f[1],c->f[0]); // 80264D68
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264D6C
  if (crb(c,2)) { goto L_80264D88; } // 80264D70
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264D74
  c->f[1]=std::fabs(c->f[1]); // 80264D78
  fcmp(c,0,c->f[1],c->f[0]); // 80264D7C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80264D80
  if (!crb(c,2)) { goto L_80264F7C; } // 80264D84
L_80264D88:;
  c->r[3]=c->r[1]+0x00000020u; // 80264D88
  c->r[4]=c->r[3]|c->r[3]; // 80264D8C
  c->lr=0x80264D94u; f_80168E0C(c); // 80264D90
  c->r[3]=c->r[1]+0x00000008u; // 80264D94
  c->r[4]=c->r[1]+0x00000020u; // 80264D98
  c->r[5]=c->r[1]+0x00000014u; // 80264D9C
  c->lr=0x80264DA4u; f_80168EB4(c); // 80264DA0
  cmps(c,0,(int32_t)c->r[30],0); // 80264DA4
  if (crb(c,2)) { goto L_80264E50; } // 80264DA8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 80264DAC
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264DB0
  c->r[3]=c->r[29]+c->r[0]; // 80264DB4
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80264DB8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264DBC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264DC0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264DC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264DC8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80264DCC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80264DD0
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 80264DD4
  fcmp(c,0,c->f[30],c->f[0]); // 80264DD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264DDC
  if (!crb(c,2)) { goto L_80264DE8; } // 80264DE0
  goto L_80264DF4; // 80264DE4
L_80264DE8:;
  c->f[1]=c->f[30]; // 80264DE8
  c->lr=0x80264DF0u; f_80284698(c); // 80264DEC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80264DF0
L_80264DF4:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 80264DF4
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 80264DF8
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80264DFC
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80264E00
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80264E04
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80264E08
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 80264E0C
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 80264E10
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 80264E14
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80264E18
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 80264E1C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80264E20
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 80264E24
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264E28
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80264E2C
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 80264E30
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80264E34
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80264E38
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 80264E3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264E40
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80264E44
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 80264E48
  goto L_80264F84; // 80264E4C
L_80264E50:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 80264E50
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80264E54
  c->r[3]=c->r[29]+c->r[31]; // 80264E58
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 80264E5C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264E60
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264E64
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264E68
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80264E6C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264E70
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80264E74
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 80264E78
  fcmp(c,0,c->f[31],c->f[30]); // 80264E7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264E80
  if (!crb(c,2)) { goto L_80264E8C; } // 80264E84
  goto L_80264E98; // 80264E88
L_80264E8C:;
  c->f[1]=c->f[31]; // 80264E8C
  c->lr=0x80264E94u; f_80284698(c); // 80264E90
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 80264E94
L_80264E98:;
  c->r[3]=c->r[29]+c->r[31]; // 80264E98
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80264E9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264EA0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264EA4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264EA8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264EAC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80264EB0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264EB4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80264EB8
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 80264EBC
  fcmp(c,0,c->f[29],c->f[31]); // 80264EC0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264EC4
  if (!crb(c,2)) { goto L_80264ED0; } // 80264EC8
  goto L_80264EDC; // 80264ECC
L_80264ED0:;
  c->f[1]=c->f[29]; // 80264ED0
  c->lr=0x80264ED8u; f_80284698(c); // 80264ED4
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 80264ED8
L_80264EDC:;
  c->r[3]=c->r[29]+c->r[31]; // 80264EDC
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264EE0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264EE4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264EE8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80264EEC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264EF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80264EF4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80264EF8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80264EFC
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 80264F00
  fcmp(c,0,c->f[29],c->f[0]); // 80264F04
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80264F08
  if (!crb(c,2)) { goto L_80264F14; } // 80264F0C
  goto L_80264F20; // 80264F10
L_80264F14:;
  c->f[1]=c->f[29]; // 80264F14
  c->lr=0x80264F1Cu; f_80284698(c); // 80264F18
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 80264F1C
L_80264F20:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 80264F20
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 80264F24
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 80264F28
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 80264F2C
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80264F30
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80264F34
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 80264F38
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 80264F3C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 80264F40
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80264F44
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 80264F48
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80264F4C
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 80264F50
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264F54
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 80264F58
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 80264F5C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80264F60
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 80264F64
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 80264F68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264F6C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80264F70
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 80264F74
  goto L_80264F84; // 80264F78
L_80264F7C:;
  c->r[3]=c->r[28]|c->r[28]; // 80264F7C
  c->lr=0x80264F84u; f_802849E8(c); // 80264F80
L_80264F84:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80264F84
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80264F88
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80264F8C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80264F90
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80264F94
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80264F98
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80264F9C
  c->r[30]=R32(c->r[1]+0x00000038u); // 80264FA0
  c->r[29]=R32(c->r[1]+0x00000034u); // 80264FA4
  c->r[0]=R32(c->r[1]+0x00000074u); // 80264FA8
  c->r[28]=R32(c->r[1]+0x00000030u); // 80264FAC
  c->lr=c->r[0]; // 80264FB0
  c->r[1]=c->r[1]+0x00000070u; // 80264FB4
  return; // 80264FB8
}

// fn_80264FBC
void f_80264FBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264FBC
  c->r[0]=c->lr; // 80264FC0
  W32(c->r[1]+0x00000064u,c->r[0]); // 80264FC4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80264FC8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80264FCC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80264FD0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80264FD4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80264FD8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80264FDC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80264FE0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80264FE4
  c->r[31]=c->r[4]|c->r[4]; // 80264FE8
  W32(c->r[1]+0x00000028u,c->r[30]); // 80264FEC
  c->r[30]=c->r[3]|c->r[3]; // 80264FF0
  W32(c->r[1]+0x00000024u,c->r[29]); // 80264FF4
  c->r[29]=c->r[8]|c->r[8]; // 80264FF8
  W32(c->r[1]+0x00000020u,c->r[28]); // 80264FFC
  c->r[28]=c->r[5]|c->r[5]; // 80265000
  c->r[6]=R32(c->r[7]+0x00000000u); // 80265004
  c->r[6]=c->r[6]+0x0000004Cu; // 80265008
  c->r[3]=R32(c->r[6]+0x00000024u); // 8026500C
  c->r[3]=c->r[6]+c->r[3]; // 80265010
  c->r[3]=c->r[3]+c->r[0]; // 80265014
  c->r[0]=R32(c->r[3]+0x00000004u); // 80265018
  cmps(c,0,(int32_t)c->r[0],0); // 8026501C
  if (crb(c,0)) { goto L_802650A0; } // 80265020
  c->r[3]=c->r[7]|c->r[7]; // 80265024
  c->r[4]=c->r[0]|c->r[0]; // 80265028
  c->lr=0x80265030u; f_802514A8(c); // 8026502C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80265030
  cmps(c,0,(int32_t)c->r[0],0); // 80265034
  if (crb(c,2)) { goto L_80265044; } // 80265038
  c->r[3]=c->r[3]+c->r[0]; // 8026503C
  goto L_80265048; // 80265040
L_80265044:;
  c->r[3]=0u+0x00000000u; // 80265044
L_80265048:;
  cmps(c,0,(int32_t)c->r[3],0); // 80265048
  if (crb(c,2)) { goto L_8026507C; } // 8026504C
  if (crb(c,2)) { goto L_8026505C; } // 80265050
  c->r[0]=R32(c->r[3]+0x00000010u); // 80265054
  goto L_80265060; // 80265058
L_8026505C:;
  c->r[0]=0u+0x00000000u; // 8026505C
L_80265060:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 80265060
  c->r[3]=c->r[1]+0x00000008u; // 80265064
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80265068
  c->r[4]=c->r[31]+c->r[29]; // 8026506C
  c->r[5]=c->r[31]+c->r[0]; // 80265070
  c->lr=0x80265078u; f_8026487C(c); // 80265074
  goto L_802650C0; // 80265078
L_8026507C:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 8026507C
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265080
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80265084
  c->r[3]=c->r[31]+c->r[29]; // 80265088
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026508C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265090
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80265094
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80265098
  goto L_802650C0; // 8026509C
L_802650A0:;
  c->r[29]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 802650A0
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802650A4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802650A8
  c->r[3]=c->r[4]+c->r[29]; // 802650AC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802650B0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802650B4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802650B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802650BC
L_802650C0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802650C0
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802650C4
  c->f[1]=std::fabs(c->f[1]); // 802650C8
  fcmp(c,0,c->f[1],c->f[0]); // 802650CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802650D0
  if (crb(c,2)) { goto L_802650EC; } // 802650D4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802650D8
  c->f[1]=std::fabs(c->f[1]); // 802650DC
  fcmp(c,0,c->f[1],c->f[0]); // 802650E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802650E4
  if (!crb(c,2)) { goto L_80265280; } // 802650E8
L_802650EC:;
  c->r[3]=c->r[1]+0x00000008u; // 802650EC
  c->r[4]=c->r[3]|c->r[3]; // 802650F0
  c->lr=0x802650F8u; f_80168E0C(c); // 802650F4
  cmps(c,0,(int32_t)c->r[28],0); // 802650F8
  if (crb(c,2)) { goto L_80265178; } // 802650FC
  c->r[3]=c->r[31]+c->r[29]; // 80265100
  {uint32_t ea=c->r[31]+c->r[29]; c->f[2]=c->ps1[2]=RF32(ea);} // 80265104
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265108
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026510C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265110
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265114
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265118
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 8026511C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80265120
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 80265124
  fcmp(c,0,c->f[30],c->f[0]); // 80265128
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8026512C
  if (!crb(c,2)) { goto L_80265138; } // 80265130
  goto L_80265144; // 80265134
L_80265138:;
  c->f[1]=c->f[30]; // 80265138
  c->lr=0x80265140u; f_80284698(c); // 8026513C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80265140
L_80265144:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 80265144
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265148
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 8026514C
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 80265150
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 80265154
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80265158
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 8026515C
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 80265160
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 80265164
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 80265168
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8026516C
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,0,ea,0,0);} // 80265170
  goto L_80265288; // 80265174
L_80265178:;
  c->r[3]=c->r[31]+c->r[29]; // 80265178
  {uint32_t ea=c->r[31]+c->r[29]; c->f[1]=c->ps1[1]=RF32(ea);} // 8026517C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265180
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265184
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265188
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 8026518C
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80265190
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265194
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265198
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 8026519C
  fcmp(c,0,c->f[31],c->f[30]); // 802651A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802651A4
  if (!crb(c,2)) { goto L_802651B0; } // 802651A8
  goto L_802651BC; // 802651AC
L_802651B0:;
  c->f[1]=c->f[31]; // 802651B0
  c->lr=0x802651B8u; f_80284698(c); // 802651B4
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 802651B8
L_802651BC:;
  c->r[3]=c->r[31]+c->r[29]; // 802651BC
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 802651C0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802651C4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802651C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802651CC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802651D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802651D4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802651D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802651DC
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802651E0
  fcmp(c,0,c->f[29],c->f[31]); // 802651E4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802651E8
  if (!crb(c,2)) { goto L_802651F4; } // 802651EC
  goto L_80265200; // 802651F0
L_802651F4:;
  c->f[1]=c->f[29]; // 802651F4
  c->lr=0x802651FCu; f_80284698(c); // 802651F8
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802651FC
L_80265200:;
  c->r[3]=c->r[31]+c->r[29]; // 80265200
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265204
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265208
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026520C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265210
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265214
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265218
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 8026521C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80265220
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 80265224
  fcmp(c,0,c->f[29],c->f[0]); // 80265228
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8026522C
  if (!crb(c,2)) { goto L_80265238; } // 80265230
  goto L_80265244; // 80265234
L_80265238:;
  c->f[1]=c->f[29]; // 80265238
  c->lr=0x80265240u; f_80284698(c); // 8026523C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 80265240
L_80265244:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 80265244
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 80265248
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026524C
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 80265250
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 80265254
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 80265258
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 8026525C
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80265260
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 80265264
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,2,ea,0,0);} // 80265268
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8026526C
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 80265270
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80265274
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,2,ea,0,0);} // 80265278
  goto L_80265288; // 8026527C
L_80265280:;
  c->r[3]=c->r[30]|c->r[30]; // 80265280
  c->lr=0x80265288u; f_802849E8(c); // 80265284
L_80265288:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80265288
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8026528C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80265290
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80265294
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80265298
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 8026529C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802652A0
  c->r[30]=R32(c->r[1]+0x00000028u); // 802652A4
  c->r[29]=R32(c->r[1]+0x00000024u); // 802652A8
  c->r[0]=R32(c->r[1]+0x00000064u); // 802652AC
  c->r[28]=R32(c->r[1]+0x00000020u); // 802652B0
  c->lr=c->r[0]; // 802652B4
  c->r[1]=c->r[1]+0x00000060u; // 802652B8
  return; // 802652BC
}

// fn_802652C0
void f_802652C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802652C0
  c->r[0]=c->lr; // 802652C4
  W32(c->r[1]+0x00000074u,c->r[0]); // 802652C8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802652CC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802652D0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802652D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802652D8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802652DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802652E0
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802652E4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802652E8
  c->r[31]=c->r[5]|c->r[5]; // 802652EC
  W32(c->r[1]+0x00000038u,c->r[30]); // 802652F0
  c->r[30]=c->r[4]|c->r[4]; // 802652F4
  W32(c->r[1]+0x00000034u,c->r[29]); // 802652F8
  c->r[29]=c->r[3]|c->r[3]; // 802652FC
  W32(c->r[1]+0x00000030u,c->r[28]); // 80265300
  c->r[28]=c->r[8]|c->r[8]; // 80265304
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80265308
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026530C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265310
  c->f[2]=-c->f[2]; // 80265314
  c->f[1]=-c->f[1]; // 80265318
  c->f[0]=-c->f[0]; // 8026531C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80265320
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80265324
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80265328
  c->r[3]=R32(c->r[7]+0x00000000u); // 8026532C
  c->r[5]=c->r[3]+0x0000004Cu; // 80265330
  c->r[3]=R32(c->r[3]+0x00000070u); // 80265334
  c->r[3]=c->r[5]+c->r[3]; // 80265338
  c->r[3]=c->r[3]+c->r[0]; // 8026533C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80265340
  cmps(c,0,(int32_t)c->r[0],0); // 80265344
  if (crb(c,0)) { goto L_802653C8; } // 80265348
  c->r[3]=c->r[7]|c->r[7]; // 8026534C
  c->r[4]=c->r[0]|c->r[0]; // 80265350
  c->lr=0x80265358u; f_802514A8(c); // 80265354
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80265358
  cmps(c,0,(int32_t)c->r[0],0); // 8026535C
  if (crb(c,2)) { goto L_8026536C; } // 80265360
  c->r[3]=c->r[3]+c->r[0]; // 80265364
  goto L_80265370; // 80265368
L_8026536C:;
  c->r[3]=0u+0x00000000u; // 8026536C
L_80265370:;
  cmps(c,0,(int32_t)c->r[3],0); // 80265370
  if (crb(c,2)) { goto L_802653A4; } // 80265374
  if (crb(c,2)) { goto L_80265384; } // 80265378
  c->r[0]=R32(c->r[3]+0x00000010u); // 8026537C
  goto L_80265388; // 80265380
L_80265384:;
  c->r[0]=0u+0x00000000u; // 80265384
L_80265388:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 80265388
  c->r[3]=c->r[1]+0x00000014u; // 8026538C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80265390
  c->r[4]=c->r[30]+c->r[28]; // 80265394
  c->r[5]=c->r[30]+c->r[0]; // 80265398
  c->lr=0x802653A0u; f_8026493C(c); // 8026539C
  goto L_802653E8; // 802653A0
L_802653A4:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 802653A4
  c->r[3]=c->r[30]+c->r[28]; // 802653A8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802653AC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802653B0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802653B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802653B8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802653BC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802653C0
  goto L_802653E8; // 802653C4
L_802653C8:;
  c->r[28]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 802653C8
  c->r[3]=c->r[4]+c->r[28]; // 802653CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802653D0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802653D4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802653D8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802653DC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802653E0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802653E4
L_802653E8:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802653E8
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802653EC
  c->f[1]=std::fabs(c->f[1]); // 802653F0
  fcmp(c,0,c->f[1],c->f[0]); // 802653F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802653F8
  if (crb(c,2)) { goto L_80265428; } // 802653FC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80265400
  c->f[1]=std::fabs(c->f[1]); // 80265404
  fcmp(c,0,c->f[1],c->f[0]); // 80265408
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8026540C
  if (crb(c,2)) { goto L_80265428; } // 80265410
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265414
  c->f[1]=std::fabs(c->f[1]); // 80265418
  fcmp(c,0,c->f[1],c->f[0]); // 8026541C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265420
  if (!crb(c,2)) { goto L_80265670; } // 80265424
L_80265428:;
  c->r[3]=c->r[1]+0x00000008u; // 80265428
  c->r[4]=c->r[3]|c->r[3]; // 8026542C
  c->lr=0x80265434u; f_80168E0C(c); // 80265430
  c->r[3]=c->r[1]+0x00000014u; // 80265434
  c->r[4]=c->r[1]+0x00000008u; // 80265438
  c->r[5]=c->r[1]+0x00000020u; // 8026543C
  c->lr=0x80265444u; f_80168EB4(c); // 80265440
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265444
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265448
  c->f[1]=std::fabs(c->f[1]); // 8026544C
  fcmp(c,0,c->f[1],c->f[0]); // 80265450
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265454
  if (crb(c,2)) { goto L_80265484; } // 80265458
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026545C
  c->f[1]=std::fabs(c->f[1]); // 80265460
  fcmp(c,0,c->f[1],c->f[0]); // 80265464
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265468
  if (crb(c,2)) { goto L_80265484; } // 8026546C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265470
  c->f[1]=std::fabs(c->f[1]); // 80265474
  fcmp(c,0,c->f[1],c->f[0]); // 80265478
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8026547C
  if (!crb(c,2)) { goto L_80265670; } // 80265480
L_80265484:;
  c->r[3]=c->r[1]+0x00000020u; // 80265484
  c->r[4]=c->r[3]|c->r[3]; // 80265488
  c->lr=0x80265490u; f_80168E0C(c); // 8026548C
  c->r[3]=c->r[1]+0x00000008u; // 80265490
  c->r[4]=c->r[1]+0x00000020u; // 80265494
  c->r[5]=c->r[1]+0x00000014u; // 80265498
  c->lr=0x802654A0u; f_80168EB4(c); // 8026549C
  cmps(c,0,(int32_t)c->r[31],0); // 802654A0
  if (crb(c,2)) { goto L_80265548; } // 802654A4
  c->r[3]=c->r[30]+c->r[28]; // 802654A8
  {uint32_t ea=c->r[30]+c->r[28]; c->f[2]=c->ps1[2]=RF32(ea);} // 802654AC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802654B0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 802654B4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802654B8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802654BC
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802654C0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802654C4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802654C8
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 802654CC
  fcmp(c,0,c->f[30],c->f[0]); // 802654D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802654D4
  if (!crb(c,2)) { goto L_802654E0; } // 802654D8
  goto L_802654EC; // 802654DC
L_802654E0:;
  c->f[1]=c->f[30]; // 802654E0
  c->lr=0x802654E8u; f_80284698(c); // 802654E4
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 802654E8
L_802654EC:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 802654EC
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802654F0
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802654F4
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802654F8
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802654FC
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80265500
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 80265504
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 80265508
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 8026550C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80265510
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 80265514
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80265518
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 8026551C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265520
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80265524
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 80265528
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026552C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80265530
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 80265534
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265538
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8026553C
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 80265540
  goto L_80265678; // 80265544
L_80265548:;
  c->r[3]=c->r[30]+c->r[28]; // 80265548
  {uint32_t ea=c->r[30]+c->r[28]; c->f[1]=c->ps1[1]=RF32(ea);} // 8026554C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265550
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265554
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265558
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 8026555C
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80265560
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265564
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265568
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 8026556C
  fcmp(c,0,c->f[31],c->f[30]); // 80265570
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80265574
  if (!crb(c,2)) { goto L_80265580; } // 80265578
  goto L_8026558C; // 8026557C
L_80265580:;
  c->f[1]=c->f[31]; // 80265580
  c->lr=0x80265588u; f_80284698(c); // 80265584
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 80265588
L_8026558C:;
  c->r[3]=c->r[30]+c->r[28]; // 8026558C
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80265590
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265594
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265598
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8026559C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802655A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802655A4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802655A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802655AC
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802655B0
  fcmp(c,0,c->f[29],c->f[31]); // 802655B4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802655B8
  if (!crb(c,2)) { goto L_802655C4; } // 802655BC
  goto L_802655D0; // 802655C0
L_802655C4:;
  c->f[1]=c->f[29]; // 802655C4
  c->lr=0x802655CCu; f_80284698(c); // 802655C8
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802655CC
L_802655D0:;
  c->r[3]=c->r[30]+c->r[28]; // 802655D0
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802655D4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802655D8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802655DC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802655E0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802655E4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802655E8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802655EC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802655F0
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802655F4
  fcmp(c,0,c->f[29],c->f[0]); // 802655F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802655FC
  if (!crb(c,2)) { goto L_80265608; } // 80265600
  goto L_80265614; // 80265604
L_80265608:;
  c->f[1]=c->f[29]; // 80265608
  c->lr=0x80265610u; f_80284698(c); // 8026560C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 80265610
L_80265614:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 80265614
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 80265618
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 8026561C
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 80265620
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80265624
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80265628
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 8026562C
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 80265630
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 80265634
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80265638
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 8026563C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80265640
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 80265644
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265648
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 8026564C
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 80265650
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80265654
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 80265658
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 8026565C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265660
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80265664
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 80265668
  goto L_80265678; // 8026566C
L_80265670:;
  c->r[3]=c->r[29]|c->r[29]; // 80265670
  c->lr=0x80265678u; f_802849E8(c); // 80265674
L_80265678:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80265678
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8026567C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80265680
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80265684
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80265688
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8026568C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80265690
  c->r[30]=R32(c->r[1]+0x00000038u); // 80265694
  c->r[29]=R32(c->r[1]+0x00000034u); // 80265698
  c->r[0]=R32(c->r[1]+0x00000074u); // 8026569C
  c->r[28]=R32(c->r[1]+0x00000030u); // 802656A0
  c->lr=c->r[0]; // 802656A4
  c->r[1]=c->r[1]+0x00000070u; // 802656A8
  return; // 802656AC
}

// fn_802656B0
void f_802656B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802656B0
  c->r[0]=c->lr; // 802656B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 802656B8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802656BC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802656C0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802656C4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802656C8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802656CC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802656D0
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802656D4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802656D8
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802656DC
  W32(c->r[1]+0x00000038u,c->r[30]); // 802656E0
  c->r[30]=c->r[5]|c->r[5]; // 802656E4
  W32(c->r[1]+0x00000034u,c->r[29]); // 802656E8
  c->r[29]=c->r[4]|c->r[4]; // 802656EC
  W32(c->r[1]+0x00000030u,c->r[28]); // 802656F0
  c->r[28]=c->r[3]|c->r[3]; // 802656F4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802656F8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 802656FC
  c->f[6]=std::fabs(c->f[2]); // 80265700
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265704
  c->f[5]=-c->f[2]; // 80265708
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8026570C
  fcmp(c,0,c->f[6],c->f[0]); // 80265710
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80265714
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 80265718
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8026571C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 80265720
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80265724
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265728
  if (crb(c,2)) { goto L_80265750; } // 8026572C
  c->f[1]=std::fabs(c->f[3]); // 80265730
  fcmp(c,0,c->f[1],c->f[0]); // 80265734
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265738
  if (crb(c,2)) { goto L_80265750; } // 8026573C
  c->f[1]=std::fabs(c->f[4]); // 80265740
  fcmp(c,0,c->f[1],c->f[0]); // 80265744
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265748
  if (!crb(c,2)) { goto L_80265950; } // 8026574C
L_80265750:;
  c->r[31]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 80265750
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80265754
  c->r[3]=c->r[4]+c->r[31]; // 80265758
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026575C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265760
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265764
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265768
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 8026576C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265770
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265774
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 80265778
  fcmp(c,0,c->f[31],c->f[30]); // 8026577C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80265780
  if (!crb(c,2)) { goto L_8026578C; } // 80265784
  goto L_80265798; // 80265788
L_8026578C:;
  c->f[1]=c->f[31]; // 8026578C
  c->lr=0x80265794u; f_80284698(c); // 80265790
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 80265794
L_80265798:;
  c->f[1]=c->ps1[1]=fres(c->f[30]); // 80265798
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026579C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,3,ea,0,0);} // 802657A0
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802657A4
  {double t0=S(c->f[1]+c->f[1]), t1=S(c->ps1[1]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802657A8
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802657AC
  c->f[4]=std::fabs(c->f[4]); // 802657B0
  {double t0=S(-std::fma(c->f[30],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[30],c->ps1[1],-c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 802657B4
  fcmp(c,0,c->f[4],c->f[0]); // 802657B8
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802657BC
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,3,ea,1,0);} // 802657C0
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,2,ea,0,0);} // 802657C4
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802657C8
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,2,ea,1,0);} // 802657CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802657D0
  if (crb(c,2)) { goto L_802657EC; } // 802657D4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802657D8
  c->f[1]=std::fabs(c->f[1]); // 802657DC
  fcmp(c,0,c->f[1],c->f[0]); // 802657E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802657E4
  if (!crb(c,2)) { goto L_80265950; } // 802657E8
L_802657EC:;
  c->r[3]=c->r[1]+0x00000008u; // 802657EC
  c->r[4]=c->r[3]|c->r[3]; // 802657F0
  c->lr=0x802657F8u; f_80168E0C(c); // 802657F4
  c->r[3]=c->r[1]+0x00000008u; // 802657F8
  c->r[4]=c->r[1]+0x00000014u; // 802657FC
  c->r[5]=c->r[1]+0x00000020u; // 80265800
  c->lr=0x80265808u; f_80168EB4(c); // 80265804
  cmps(c,0,(int32_t)c->r[30],0); // 80265808
  if (crb(c,2)) { goto L_8026586C; } // 8026580C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 80265810
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 80265814
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 80265818
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 8026581C
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80265820
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80265824
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,1,ea,0,0);} // 80265828
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 8026582C
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 80265830
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 80265834
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[2]);} // 80265838
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8026583C
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[2]);} // 80265840
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265844
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 80265848
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 8026584C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80265850
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 80265854
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[2]);} // 80265858
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026585C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 80265860
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[2]);} // 80265864
  goto L_80265958; // 80265868
L_8026586C:;
  c->r[3]=c->r[29]+c->r[31]; // 8026586C
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 80265870
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265874
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265878
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8026587C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80265880
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80265884
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265888
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026588C
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 80265890
  fcmp(c,0,c->f[29],c->f[31]); // 80265894
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80265898
  if (!crb(c,2)) { goto L_802658A4; } // 8026589C
  goto L_802658B0; // 802658A0
L_802658A4:;
  c->f[1]=c->f[29]; // 802658A4
  c->lr=0x802658ACu; f_80284698(c); // 802658A8
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802658AC
L_802658B0:;
  c->r[3]=c->r[29]+c->r[31]; // 802658B0
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802658B4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802658B8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802658BC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802658C0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802658C4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802658C8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802658CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802658D0
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802658D4
  fcmp(c,0,c->f[29],c->f[0]); // 802658D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802658DC
  if (!crb(c,2)) { goto L_802658E8; } // 802658E0
  goto L_802658F4; // 802658E4
L_802658E8:;
  c->f[1]=c->f[29]; // 802658E8
  c->lr=0x802658F0u; f_80284698(c); // 802658EC
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802658F0
L_802658F4:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802658F4
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802658F8
  {double t0=S(c->f[3]*c->f[31]), t1=S(c->ps1[3]*c->f[31]); c->f[3]=t0; c->ps1[3]=t1;} // 802658FC
  {double t0=S(c->f[1]*c->f[30]), t1=S(c->ps1[1]*c->f[30]); c->f[1]=t0; c->ps1[1]=t1;} // 80265900
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80265904
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80265908
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 8026590C
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 80265910
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 80265914
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80265918
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 8026591C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80265920
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 80265924
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265928
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 8026592C
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 80265930
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80265934
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 80265938
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 8026593C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265940
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80265944
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 80265948
  goto L_80265958; // 8026594C
L_80265950:;
  c->r[3]=c->r[28]|c->r[28]; // 80265950
  c->lr=0x80265958u; f_802849E8(c); // 80265954
L_80265958:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80265958
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8026595C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80265960
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80265964
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80265968
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8026596C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80265970
  c->r[30]=R32(c->r[1]+0x00000038u); // 80265974
  c->r[29]=R32(c->r[1]+0x00000034u); // 80265978
  c->r[0]=R32(c->r[1]+0x00000074u); // 8026597C
  c->r[28]=R32(c->r[1]+0x00000030u); // 80265980
  c->lr=c->r[0]; // 80265984
  c->r[1]=c->r[1]+0x00000070u; // 80265988
  return; // 8026598C
}

// fn_80265990
void f_80265990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265990
  c->r[0]=c->lr; // 80265994
  W32(c->r[1]+0x00000074u,c->r[0]); // 80265998
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8026599C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802659A0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802659A4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802659A8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802659AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802659B0
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802659B4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802659B8
  W32(c->r[1]+0x00000038u,c->r[30]); // 802659BC
  c->r[30]=c->r[5]|c->r[5]; // 802659C0
  W32(c->r[1]+0x00000034u,c->r[29]); // 802659C4
  c->r[29]=c->r[4]|c->r[4]; // 802659C8
  W32(c->r[1]+0x00000030u,c->r[28]); // 802659CC
  c->r[28]=c->r[3]|c->r[3]; // 802659D0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802659D4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 802659D8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 802659DC
  c->f[2]=std::fabs(c->f[1]); // 802659E0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 802659E4
  fcmp(c,0,c->f[2],c->f[0]); // 802659E8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 802659EC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[5]);} // 802659F0
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802659F4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802659F8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802659FC
  c->f[3]=-c->f[3]; // 80265A00
  c->f[2]=-c->f[2]; // 80265A04
  c->f[1]=-c->f[1]; // 80265A08
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80265A0C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80265A10
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80265A14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265A18
  if (crb(c,2)) { goto L_80265A40; } // 80265A1C
  c->f[1]=std::fabs(c->f[4]); // 80265A20
  fcmp(c,0,c->f[1],c->f[0]); // 80265A24
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265A28
  if (crb(c,2)) { goto L_80265A40; } // 80265A2C
  c->f[1]=std::fabs(c->f[5]); // 80265A30
  fcmp(c,0,c->f[1],c->f[0]); // 80265A34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265A38
  if (!crb(c,2)) { goto L_80265C64; } // 80265A3C
L_80265A40:;
  c->r[31]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 80265A40
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80265A44
  c->r[3]=c->r[4]+c->r[31]; // 80265A48
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265A4C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265A50
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265A54
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265A58
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80265A5C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265A60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265A64
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 80265A68
  fcmp(c,0,c->f[31],c->f[30]); // 80265A6C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80265A70
  if (!crb(c,2)) { goto L_80265A7C; } // 80265A74
  goto L_80265A88; // 80265A78
L_80265A7C:;
  c->f[1]=c->f[31]; // 80265A7C
  c->lr=0x80265A84u; f_80284698(c); // 80265A80
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 80265A84
L_80265A88:;
  c->f[0]=c->ps1[0]=fres(c->f[30]); // 80265A88
  c->r[3]=c->r[1]+0x00000014u; // 80265A8C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 80265A90
  c->r[4]=c->r[1]+0x00000008u; // 80265A94
  c->r[5]=c->r[1]+0x00000020u; // 80265A98
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80265A9C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80265AA0
  {double t0=S(-std::fma(c->f[30],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[30],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 80265AA4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80265AA8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,1,0);} // 80265AAC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 80265AB0
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80265AB4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 80265AB8
  c->lr=0x80265AC0u; f_80168EB4(c); // 80265ABC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265AC0
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265AC4
  c->f[1]=std::fabs(c->f[1]); // 80265AC8
  fcmp(c,0,c->f[1],c->f[0]); // 80265ACC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265AD0
  if (crb(c,2)) { goto L_80265B00; } // 80265AD4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265AD8
  c->f[1]=std::fabs(c->f[1]); // 80265ADC
  fcmp(c,0,c->f[1],c->f[0]); // 80265AE0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265AE4
  if (crb(c,2)) { goto L_80265B00; } // 80265AE8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265AEC
  c->f[1]=std::fabs(c->f[1]); // 80265AF0
  fcmp(c,0,c->f[1],c->f[0]); // 80265AF4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80265AF8
  if (!crb(c,2)) { goto L_80265C64; } // 80265AFC
L_80265B00:;
  c->r[3]=c->r[1]+0x00000020u; // 80265B00
  c->r[4]=c->r[3]|c->r[3]; // 80265B04
  c->lr=0x80265B0Cu; f_80168E0C(c); // 80265B08
  c->r[3]=c->r[1]+0x00000020u; // 80265B0C
  c->r[4]=c->r[1]+0x00000014u; // 80265B10
  c->r[5]=c->r[1]+0x00000008u; // 80265B14
  c->lr=0x80265B1Cu; f_80168EB4(c); // 80265B18
  cmps(c,0,(int32_t)c->r[30],0); // 80265B1C
  if (crb(c,2)) { goto L_80265B80; } // 80265B20
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 80265B24
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 80265B28
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 80265B2C
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 80265B30
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80265B34
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80265B38
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,1,ea,0,0);} // 80265B3C
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 80265B40
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 80265B44
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 80265B48
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[2]);} // 80265B4C
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80265B50
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[2]);} // 80265B54
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265B58
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 80265B5C
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 80265B60
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80265B64
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 80265B68
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[2]);} // 80265B6C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265B70
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 80265B74
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[2]);} // 80265B78
  goto L_80265C6C; // 80265B7C
L_80265B80:;
  c->r[3]=c->r[29]+c->r[31]; // 80265B80
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 80265B84
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265B88
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265B8C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265B90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80265B94
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80265B98
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265B9C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265BA0
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 80265BA4
  fcmp(c,0,c->f[29],c->f[31]); // 80265BA8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80265BAC
  if (!crb(c,2)) { goto L_80265BB8; } // 80265BB0
  goto L_80265BC4; // 80265BB4
L_80265BB8:;
  c->f[1]=c->f[29]; // 80265BB8
  c->lr=0x80265BC0u; f_80284698(c); // 80265BBC
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 80265BC0
L_80265BC4:;
  c->r[3]=c->r[29]+c->r[31]; // 80265BC4
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265BC8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265BCC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265BD0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80265BD4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265BD8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80265BDC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80265BE0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80265BE4
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 80265BE8
  fcmp(c,0,c->f[29],c->f[0]); // 80265BEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80265BF0
  if (!crb(c,2)) { goto L_80265BFC; } // 80265BF4
  goto L_80265C08; // 80265BF8
L_80265BFC:;
  c->f[1]=c->f[29]; // 80265BFC
  c->lr=0x80265C04u; f_80284698(c); // 80265C00
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 80265C04
L_80265C08:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 80265C08
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 80265C0C
  {double t0=S(c->f[3]*c->f[31]), t1=S(c->ps1[3]*c->f[31]); c->f[3]=t0; c->ps1[3]=t1;} // 80265C10
  {double t0=S(c->f[1]*c->f[30]), t1=S(c->ps1[1]*c->f[30]); c->f[1]=t0; c->ps1[1]=t1;} // 80265C14
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80265C18
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80265C1C
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 80265C20
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 80265C24
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 80265C28
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80265C2C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 80265C30
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80265C34
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 80265C38
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265C3C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 80265C40
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 80265C44
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80265C48
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 80265C4C
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 80265C50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265C54
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80265C58
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 80265C5C
  goto L_80265C6C; // 80265C60
L_80265C64:;
  c->r[3]=c->r[28]|c->r[28]; // 80265C64
  c->lr=0x80265C6Cu; f_802849E8(c); // 80265C68
L_80265C6C:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80265C6C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80265C70
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80265C74
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80265C78
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80265C7C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80265C80
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80265C84
  c->r[30]=R32(c->r[1]+0x00000038u); // 80265C88
  c->r[29]=R32(c->r[1]+0x00000034u); // 80265C8C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80265C90
  c->r[28]=R32(c->r[1]+0x00000030u); // 80265C94
  c->lr=c->r[0]; // 80265C98
  c->r[1]=c->r[1]+0x00000070u; // 80265C9C
  return; // 80265CA0
}

// fn_80265CA4
void f_80265CA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265CA4
  c->r[0]=c->lr; // 80265CA8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80265CAC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80265CB0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80265CB4
  c->r[11]=c->r[1]+0x00000090u; // 80265CB8
  c->lr=0x80265CC0u; f_80185EA0(c); // 80265CBC
  cmps(c,0,(int32_t)c->r[7],0); // 80265CC0
  c->r[15]=c->r[3]|c->r[3]; // 80265CC4
  c->r[16]=c->r[4]|c->r[4]; // 80265CC8
  c->r[17]=c->r[5]|c->r[5]; // 80265CCC
  c->r[18]=c->r[6]|c->r[6]; // 80265CD0
  c->r[19]=c->r[7]|c->r[7]; // 80265CD4
  c->r[20]=c->r[8]|c->r[8]; // 80265CD8
  c->r[21]=c->r[9]|c->r[9]; // 80265CDC
  c->r[22]=c->r[10]|c->r[10]; // 80265CE0
  if (crb(c,2)) { goto L_80265FC0; } // 80265CE4
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)36); // 80265CE8
  cmpu(c,0,c->r[7],0x00000001u); // 80265CEC
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 80265CF0
  c->r[0]=c->r[3]+0x0000001Fu; // 80265CF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80265CF8
  c->r[4]=c->r[4]+0x0000001Fu; // 80265CFC
  W32(c->r[1]+0x00000040u,c->r[0]); // 80265D00
  c->r[14]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80265D04
  if (!crb(c,1)) { goto L_80265D24; } // 80265D08
  c->r[3]=c->r[20]|c->r[20]; // 80265D0C
  c->r[4]=c->r[17]|c->r[17]; // 80265D10
  c->r[5]=c->r[15]|c->r[15]; // 80265D14
  c->r[6]=c->r[19]|c->r[19]; // 80265D18
  c->lr=0x80265D20u; f_801680C4(c); // 80265D1C
  goto L_80265D34; // 80265D20
L_80265D24:;
  c->r[3]=c->r[20]|c->r[20]; // 80265D24
  c->r[4]=c->r[17]|c->r[17]; // 80265D28
  c->r[5]=c->r[15]|c->r[15]; // 80265D2C
  c->lr=0x80265D34u; f_80167FF8(c); // 80265D30
L_80265D34:;
  c->lr=0x80265D38u; f_80266B68(c); // 80265D34
  c->r[24]=c->r[3]|c->r[3]; // 80265D38
  c->r[31]=0u+0x80310000u; // 80265D3C
  c->r[30]=c->r[18]|c->r[18]; // 80265D40
  c->r[29]=c->r[15]|c->r[15]; // 80265D44
  c->r[27]=c->r[17]|c->r[17]; // 80265D48
  c->r[26]=c->r[24]|c->r[24]; // 80265D4C
  c->r[25]=c->r[15]|c->r[15]; // 80265D50
  c->r[31]=c->r[31]+0xFFFF85E8u; // 80265D54
  c->r[23]=0u+0x00000000u; // 80265D58
  c->r[28]=0u+0x00000000u; // 80265D5C
  goto L_80265ED4; // 80265D60
L_80265D64:;
  c->r[9]=R32(c->r[30]+0x00000000u); // 80265D64
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; cr0(c,c->r[0]); // 80265D68
  if (crb(c,2)) { goto L_80265E48; } // 80265D6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80265D70
  c->r[5]=R32(c->r[21]+0x00000000u); // 80265D74
  c->r[12]=R32(c->r[31]+c->r[0]); // 80265D78
  c->r[3]=c->r[29]|c->r[29]; // 80265D7C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80265D80
  c->r[4]=c->r[17]|c->r[17]; // 80265D84
  c->r[6]=c->r[20]|c->r[20]; // 80265D88
  c->r[8]=c->r[23]|c->r[23]; // 80265D8C
  c->r[7]=c->r[1]+0x00000008u; // 80265D90
  c->r[5]=rotl(c->r[9],3)&0x00000001u; // 80265D94
  c->ctr=c->r[12]; // 80265D98
  if (true) { c->lr=0x80265DA0u; dispatch(c,c->ctr); } // 80265D9C
  c->r[4]=R32(c->r[21]+0x00000000u); // 80265DA0
  c->r[3]=c->r[21]|c->r[21]; // 80265DA4
  c->r[4]=c->r[4]+0x0000004Cu; // 80265DA8
  c->r[0]=R32(c->r[4]+0x00000024u); // 80265DAC
  c->r[0]=c->r[4]+c->r[0]; // 80265DB0
  c->r[4]=c->r[0]+c->r[28]; // 80265DB4
  c->r[4]=R32(c->r[4]+0x00000004u); // 80265DB8
  c->lr=0x80265DC0u; f_802514FC(c); // 80265DBC
  c->r[0]=0u-c->r[3]; // 80265DC0
  c->r[0]=c->r[0]|c->r[3]; // 80265DC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80265DC8
  if (crb(c,2)) { goto L_80265DF4; } // 80265DCC
  c->r[0]=R32(c->r[3]+0x00000060u); // 80265DD0
  cmps(c,0,(int32_t)c->r[0],0); // 80265DD4
  if (crb(c,2)) { goto L_80265DE4; } // 80265DD8
  c->r[0]=c->r[3]+c->r[0]; // 80265DDC
  goto L_80265DE8; // 80265DE0
L_80265DE4:;
  c->r[0]=0u+0x00000000u; // 80265DE4
L_80265DE8:;
  c->r[3]=0u-c->r[0]; // 80265DE8
  c->r[0]=c->r[3]|c->r[0]; // 80265DEC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80265DF0
L_80265DF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80265DF4
  if (crb(c,2)) { goto L_80265EB8; } // 80265DF8
  c->r[4]=c->r[27]|c->r[27]; // 80265DFC
  c->r[3]=c->r[1]+0x00000010u; // 80265E00
  c->lr=0x80265E08u; f_80259078(c); // 80265E04
  cmpu(c,0,c->r[3],0x00000001u); // 80265E08
  if (!crb(c,2)) { goto L_80265E24; } // 80265E0C
  c->r[3]=c->r[25]|c->r[25]; // 80265E10
  c->r[5]=c->r[26]|c->r[26]; // 80265E14
  c->r[4]=c->r[1]+0x00000010u; // 80265E18
  c->lr=0x80265E20u; f_80167FF8(c); // 80265E1C
  goto L_80265EB8; // 80265E20
L_80265E24:;
  c->r[3]=c->r[26]|c->r[26]; // 80265E24
  c->lr=0x80265E2Cu; f_80167F98(c); // 80265E28
  {uint32_t ea=c->r[20]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265E2C
  {uint32_t ea=c->r[20]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80265E30
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[0]);} // 80265E34
  {uint32_t ea=c->r[20]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265E38
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[1]);} // 80265E3C
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[0]);} // 80265E40
  goto L_80265EB8; // 80265E44
L_80265E48:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 80265E48
  c->r[3]=c->r[3]+0x0000004Cu; // 80265E4C
  c->r[0]=R32(c->r[3]+0x00000024u); // 80265E50
  c->r[0]=c->r[3]+c->r[0]; // 80265E54
  c->r[3]=c->r[0]+c->r[28]; // 80265E58
  c->r[4]=R32(c->r[3]+0x00000004u); // 80265E5C
  cmps(c,0,(int32_t)c->r[4],0); // 80265E60
  if (crb(c,0)) { goto L_80265EB8; } // 80265E64
  c->r[3]=c->r[21]|c->r[21]; // 80265E68
  c->lr=0x80265E70u; f_802514FC(c); // 80265E6C
  cmps(c,0,(int32_t)c->r[3],0); // 80265E70
  if (crb(c,2)) { goto L_80265EB8; } // 80265E74
  c->r[0]=R32(c->r[3]+0x00000014u); // 80265E78
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80265E7C
  if (crb(c,2)) { goto L_80265EB8; } // 80265E80
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80265E84
  c->r[3]=c->r[21]|c->r[21]; // 80265E88
  c->lr=0x80265E90u; f_802514FC(c); // 80265E8C
  cmps(c,0,(int32_t)c->r[3],0); // 80265E90
  if (crb(c,2)) { goto L_80265EA0; } // 80265E94
  c->r[0]=R32(c->r[3]+0x00000010u); // 80265E98
  goto L_80265EA4; // 80265E9C
L_80265EA0:;
  c->r[0]=0u+0x00000000u; // 80265EA0
L_80265EA4:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80265EA4
  c->r[4]=c->r[27]|c->r[27]; // 80265EA8
  c->r[5]=c->r[29]|c->r[29]; // 80265EAC
  c->r[3]=c->r[24]+c->r[0]; // 80265EB0
  c->lr=0x80265EB8u; f_80167FF8(c); // 80265EB4
L_80265EB8:;
  c->r[30]=c->r[30]+0x00000004u; // 80265EB8
  c->r[29]=c->r[29]+0x00000030u; // 80265EBC
  c->r[28]=c->r[28]+0x00000004u; // 80265EC0
  c->r[27]=c->r[27]+0x00000030u; // 80265EC4
  c->r[26]=c->r[26]+0x00000030u; // 80265EC8
  c->r[25]=c->r[25]+0x00000030u; // 80265ECC
  c->r[23]=c->r[23]+0x00000001u; // 80265ED0
L_80265ED4:;
  cmpu(c,0,c->r[23],c->r[19]); // 80265ED4
  if (crb(c,0)) { IRQCHK(c); goto L_80265D64; } // 80265ED8
  cmps(c,0,(int32_t)c->r[16],0); // 80265EDC
  if (crb(c,2)) { goto L_80265F8C; } // 80265EE0
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80265EE4
  c->r[17]=c->r[15]|c->r[15]; // 80265EE8
  c->r[20]=c->r[16]|c->r[16]; // 80265EEC
  c->r[21]=c->r[22]|c->r[22]; // 80265EF0
  c->r[23]=c->r[22]|c->r[22]; // 80265EF4
  c->r[24]=0u+0x00000000u; // 80265EF8
  goto L_80265F84; // 80265EFC
L_80265F00:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 80265F00
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 80265F04
  if (crb(c,2)) { goto L_80265F3C; } // 80265F08
  cmps(c,0,(int32_t)c->r[22],0); // 80265F0C
  if (crb(c,2)) { goto L_80265F2C; } // 80265F10
  c->r[3]=c->r[17]|c->r[17]; // 80265F14
  c->r[4]=c->r[21]|c->r[21]; // 80265F18
  c->lr=0x80265F20u; f_80167FC4(c); // 80265F1C
  {uint32_t ea=c->r[21]+0x0000002Cu; WF32(ea,c->f[31]);} // 80265F20
  {uint32_t ea=c->r[21]+0x0000001Cu; WF32(ea,c->f[31]);} // 80265F24
  {uint32_t ea=c->r[21]+0x0000000Cu; WF32(ea,c->f[31]);} // 80265F28
L_80265F2C:;
  c->r[3]=c->r[20]|c->r[20]; // 80265F2C
  c->r[4]=c->r[17]|c->r[17]; // 80265F30
  c->lr=0x80265F38u; f_802849B4(c); // 80265F34
  goto L_80265F6C; // 80265F38
L_80265F3C:;
  cmps(c,0,(int32_t)c->r[22],0); // 80265F3C
  if (crb(c,2)) { goto L_80265F60; } // 80265F40
  c->r[3]=c->r[21]|c->r[21]; // 80265F44
  c->r[4]=c->r[17]|c->r[17]; // 80265F48
  c->lr=0x80265F50u; f_80258F70(c); // 80265F4C
  c->r[3]=c->r[20]|c->r[20]; // 80265F50
  c->r[4]=c->r[23]|c->r[23]; // 80265F54
  c->lr=0x80265F5Cu; f_802849B4(c); // 80265F58
  goto L_80265F6C; // 80265F5C
L_80265F60:;
  c->r[3]=c->r[20]|c->r[20]; // 80265F60
  c->r[4]=c->r[17]|c->r[17]; // 80265F64
  c->lr=0x80265F6Cu; f_80258E8C(c); // 80265F68
L_80265F6C:;
  c->r[17]=c->r[17]+0x00000030u; // 80265F6C
  c->r[20]=c->r[20]+0x00000024u; // 80265F70
  c->r[18]=c->r[18]+0x00000004u; // 80265F74
  c->r[21]=c->r[21]+0x00000030u; // 80265F78
  c->r[23]=c->r[23]+0x00000030u; // 80265F7C
  c->r[24]=c->r[24]+0x00000001u; // 80265F80
L_80265F84:;
  cmpu(c,0,c->r[24],c->r[19]); // 80265F84
  if (crb(c,0)) { IRQCHK(c); goto L_80265F00; } // 80265F88
L_80265F8C:;
  c->r[3]=c->r[15]|c->r[15]; // 80265F8C
  c->r[4]=c->r[14]|c->r[14]; // 80265F90
  c->lr=0x80265F98u; f_8015C0C0(c); // 80265F94
  cmps(c,0,(int32_t)c->r[16],0); // 80265F98
  if (crb(c,2)) { goto L_80265FC0; } // 80265F9C
  c->r[4]=R32(c->r[1]+0x00000040u); // 80265FA0
  c->r[3]=c->r[16]|c->r[16]; // 80265FA4
  c->lr=0x80265FACu; f_8015C0C0(c); // 80265FA8
  cmps(c,0,(int32_t)c->r[22],0); // 80265FAC
  if (crb(c,2)) { goto L_80265FC0; } // 80265FB0
  c->r[3]=c->r[22]|c->r[22]; // 80265FB4
  c->r[4]=c->r[14]|c->r[14]; // 80265FB8
  c->lr=0x80265FC0u; f_8015C0C0(c); // 80265FBC
L_80265FC0:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80265FC0
  c->r[11]=c->r[1]+0x00000090u; // 80265FC4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80265FC8
  c->lr=0x80265FD0u; f_80185EEC(c); // 80265FCC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80265FD0
  c->lr=c->r[0]; // 80265FD4
  c->r[1]=c->r[1]+0x000000A0u; // 80265FD8
  return; // 80265FDC
}

// fn_80265FE0
void f_80265FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265FE0
  c->r[0]=c->lr; // 80265FE4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80265FE8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80265FEC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80265FF0
  c->r[11]=c->r[1]+0x000000D0u; // 80265FF4
  c->lr=0x80265FFCu; f_80185EA0(c); // 80265FF8
  cmps(c,0,(int32_t)c->r[7],0); // 80265FFC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80266000
  c->r[15]=c->r[5]|c->r[5]; // 80266004
  c->r[16]=c->r[8]|c->r[8]; // 80266008
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8026600C
  c->r[17]=c->r[9]|c->r[9]; // 80266010
  c->r[18]=c->r[10]|c->r[10]; // 80266014
  W32(c->r[1]+0x00000010u,c->r[6]); // 80266018
  W32(c->r[1]+0x00000014u,c->r[7]); // 8026601C
  if (crb(c,2)) { goto L_8026649C; } // 80266020
  c->r[5]=0u+0xE0000000u; // 80266024
  c->r[0]=c->r[5]+0x00001000u; // 80266028
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 8026602C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80266030
  c->r[0]=c->r[5]+0x00001800u; // 80266034
  W32(c->r[1]+0x00000068u,c->r[0]); // 80266038
  c->r[14]=c->r[5]+0x00000800u; // 8026603C
  c->r[0]=c->r[5]+0x00002800u; // 80266040
  W32(c->r[1]+0x00000064u,c->r[0]); // 80266044
  c->r[0]=c->r[5]+0x00003000u; // 80266048
  c->r[4]=c->r[4]+0x0000001Fu; // 8026604C
  W32(c->r[1]+0x00000060u,c->r[0]); // 80266050
  c->r[0]=c->r[5]+0x00003800u; // 80266054
  c->r[19]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80266058
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8026605C
  c->r[4]=c->r[19]|c->r[19]; // 80266060
  c->lr=0x80266068u; f_8015C034(c); // 80266064
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80266068
  cmps(c,0,(int32_t)c->r[0],0); // 8026606C
  c->r[0]=0u+0x00000001u; // 80266070
  W32(c->r[1]+0x00000058u,c->r[0]); // 80266074
  if (crb(c,2)) { goto L_802660B8; } // 80266078
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026607C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80266080
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80266084
  c->r[0]=0u+0x00000002u; // 80266088
  W32(c->r[1]+0x00000058u,c->r[0]); // 8026608C
  c->r[0]=c->r[4]+0x0000001Fu; // 80266090
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80266094
  c->lr=0x8026609Cu; f_8015C034(c); // 80266098
  cmps(c,0,(int32_t)c->r[18],0); // 8026609C
  if (crb(c,2)) { goto L_802660B8; } // 802660A0
  c->r[0]=0u+0x00000003u; // 802660A4
  c->r[3]=c->r[18]|c->r[18]; // 802660A8
  W32(c->r[1]+0x00000058u,c->r[0]); // 802660AC
  c->r[4]=c->r[19]|c->r[19]; // 802660B0
  c->lr=0x802660B8u; f_8015C034(c); // 802660B4
L_802660B8:;
  c->lr=0x802660BCu; f_80266B68(c); // 802660B8
  c->r[29]=c->r[3]|c->r[3]; // 802660BC
  c->r[3]=0u+0x00000000u; // 802660C0
  c->lr=0x802660C8u; f_8015C3BC(c); // 802660C4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802660C8
  c->r[30]=0u+0x80310000u; // 802660CC
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 802660D0
  c->r[30]=c->r[30]+0xFFFF85E8u; // 802660D4
  W32(c->r[1]+0x00000074u,c->r[0]); // 802660D8
  c->r[0]=0u+0x00000000u; // 802660DC
  c->r[21]=0u+0x00000000u; // 802660E0
  c->r[31]=0u+0x00000000u; // 802660E4
  W32(c->r[1]+0x00000078u,c->r[15]); // 802660E8
  W32(c->r[1]+0x00000070u,c->r[18]); // 802660EC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802660F0
  goto L_80266490; // 802660F4
L_802660F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802660F8
  c->r[20]=c->r[0]-c->r[21]; // 802660FC
  cmpu(c,0,c->r[20],0x00000028u); // 80266100
  if (!crb(c,1)) { goto L_80266120; } // 80266104
  c->r[0]=0u+0x0000003Cu; // 80266108
  c->r[20]=0u+0x00000028u; // 8026610C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80266110
  c->r[0]=0u+0x0000002Du; // 80266114
  W32(c->r[1]+0x00000050u,c->r[0]); // 80266118
  goto L_80266140; // 8026611C
L_80266120:;
  c->r[4]=(uint32_t)((int32_t)c->r[20]*(int32_t)48); // 80266120
  c->r[3]=(uint32_t)((int32_t)c->r[20]*(int32_t)36); // 80266124
  c->r[0]=c->r[4]+0x0000001Fu; // 80266128
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026612C
  c->r[3]=c->r[3]+0x0000001Fu; // 80266130
  W32(c->r[1]+0x00000054u,c->r[0]); // 80266134
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 80266138
  W32(c->r[1]+0x00000050u,c->r[0]); // 8026613C
L_80266140:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 80266140
  c->lr=0x80266148u; f_8015C3BC(c); // 80266144
  cmpu(c,0,c->r[20],0x00000001u); // 80266148
  if (!crb(c,1)) { goto L_80266168; } // 8026614C
  c->r[4]=R32(c->r[1]+0x00000078u); // 80266150
  c->r[3]=c->r[16]|c->r[16]; // 80266154
  c->r[5]=c->r[14]|c->r[14]; // 80266158
  c->r[6]=c->r[20]|c->r[20]; // 8026615C
  c->lr=0x80266164u; f_801680C4(c); // 80266160
  goto L_80266178; // 80266164
L_80266168:;
  c->r[4]=R32(c->r[1]+0x00000078u); // 80266168
  c->r[3]=c->r[16]|c->r[16]; // 8026616C
  c->r[5]=c->r[14]|c->r[14]; // 80266170
  c->lr=0x80266178u; f_80167FF8(c); // 80266174
L_80266178:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80266178
  c->r[27]=c->r[14]|c->r[14]; // 8026617C
  c->r[25]=c->r[14]|c->r[14]; // 80266180
  c->r[19]=0u+0x00000000u; // 80266184
  c->r[22]=c->r[0]+c->r[31]; // 80266188
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8026618C
  c->r[28]=c->r[22]|c->r[22]; // 80266190
  c->r[26]=0u+0x00000000u; // 80266194
  c->r[24]=c->r[29]+c->r[0]; // 80266198
  goto L_80266324; // 8026619C
L_802661A0:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 802661A0
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 802661A4
  if (crb(c,2)) { goto L_80266290; } // 802661A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802661AC
  c->r[5]=R32(c->r[17]+0x00000000u); // 802661B0
  c->r[12]=R32(c->r[30]+c->r[0]); // 802661B4
  c->r[3]=c->r[27]|c->r[27]; // 802661B8
  W32(c->r[1]+0x00000018u,c->r[5]); // 802661BC
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 802661C0
  c->r[4]=c->r[15]|c->r[15]; // 802661C4
  c->r[6]=c->r[16]|c->r[16]; // 802661C8
  c->r[7]=c->r[1]+0x00000018u; // 802661CC
  c->r[8]=c->r[21]+c->r[19]; // 802661D0
  c->ctr=c->r[12]; // 802661D4
  if (true) { c->lr=0x802661DCu; dispatch(c,c->ctr); } // 802661D8
  c->r[4]=R32(c->r[17]+0x00000000u); // 802661DC
  c->r[3]=c->r[17]|c->r[17]; // 802661E0
  c->r[4]=c->r[4]+0x0000004Cu; // 802661E4
  c->r[0]=R32(c->r[4]+0x00000024u); // 802661E8
  c->r[0]=c->r[4]+c->r[0]; // 802661EC
  c->r[0]=c->r[0]+c->r[31]; // 802661F0
  c->r[4]=c->r[0]+c->r[26]; // 802661F4
  c->r[4]=R32(c->r[4]+0x00000004u); // 802661F8
  c->lr=0x80266200u; f_802514FC(c); // 802661FC
  c->r[0]=0u-c->r[3]; // 80266200
  c->r[0]=c->r[0]|c->r[3]; // 80266204
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80266208
  if (crb(c,2)) { goto L_80266234; } // 8026620C
  c->r[0]=R32(c->r[3]+0x00000060u); // 80266210
  cmps(c,0,(int32_t)c->r[0],0); // 80266214
  if (crb(c,2)) { goto L_80266224; } // 80266218
  c->r[0]=c->r[3]+c->r[0]; // 8026621C
  goto L_80266228; // 80266220
L_80266224:;
  c->r[0]=0u+0x00000000u; // 80266224
L_80266228:;
  c->r[3]=0u-c->r[0]; // 80266228
  c->r[0]=c->r[3]|c->r[0]; // 8026622C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80266230
L_80266234:;
  cmps(c,0,(int32_t)c->r[0],0); // 80266234
  if (crb(c,2)) { goto L_8026630C; } // 80266238
  c->r[0]=c->r[21]+c->r[19]; // 8026623C
  c->r[3]=c->r[1]+0x00000020u; // 80266240
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80266244
  c->r[4]=c->r[15]+c->r[23]; // 80266248
  c->lr=0x80266250u; f_80259078(c); // 8026624C
  cmpu(c,0,c->r[3],0x00000001u); // 80266250
  if (!crb(c,2)) { goto L_8026626C; } // 80266254
  c->r[3]=c->r[25]|c->r[25]; // 80266258
  c->r[4]=c->r[1]+0x00000020u; // 8026625C
  c->r[5]=c->r[29]+c->r[23]; // 80266260
  c->lr=0x80266268u; f_80167FF8(c); // 80266264
  goto L_8026630C; // 80266268
L_8026626C:;
  c->r[3]=c->r[29]+c->r[23]; // 8026626C
  c->lr=0x80266274u; f_80167F98(c); // 80266270
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80266274
  {uint32_t ea=c->r[16]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80266278
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026627C
  {uint32_t ea=c->r[16]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80266280
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[1]);} // 80266284
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[0]);} // 80266288
  goto L_8026630C; // 8026628C
L_80266290:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 80266290
  c->r[3]=c->r[3]+0x0000004Cu; // 80266294
  c->r[0]=R32(c->r[3]+0x00000024u); // 80266298
  c->r[0]=c->r[3]+c->r[0]; // 8026629C
  c->r[0]=c->r[0]+c->r[31]; // 802662A0
  c->r[3]=c->r[0]+c->r[26]; // 802662A4
  c->r[4]=R32(c->r[3]+0x00000004u); // 802662A8
  cmps(c,0,(int32_t)c->r[4],0); // 802662AC
  if (crb(c,0)) { goto L_8026630C; } // 802662B0
  c->r[3]=c->r[17]|c->r[17]; // 802662B4
  c->lr=0x802662BCu; f_802514FC(c); // 802662B8
  cmps(c,0,(int32_t)c->r[3],0); // 802662BC
  if (crb(c,2)) { goto L_8026630C; } // 802662C0
  c->r[0]=R32(c->r[3]+0x00000014u); // 802662C4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802662C8
  if (crb(c,2)) { goto L_8026630C; } // 802662CC
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 802662D0
  c->r[3]=c->r[17]|c->r[17]; // 802662D4
  c->lr=0x802662DCu; f_802514FC(c); // 802662D8
  cmps(c,0,(int32_t)c->r[3],0); // 802662DC
  if (crb(c,2)) { goto L_802662EC; } // 802662E0
  c->r[3]=R32(c->r[3]+0x00000010u); // 802662E4
  goto L_802662F0; // 802662E8
L_802662EC:;
  c->r[3]=0u+0x00000000u; // 802662EC
L_802662F0:;
  c->r[0]=c->r[21]+c->r[19]; // 802662F0
  c->r[5]=c->r[27]|c->r[27]; // 802662F4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 802662F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802662FC
  c->r[3]=c->r[29]+c->r[3]; // 80266300
  c->r[4]=c->r[15]+c->r[0]; // 80266304
  c->lr=0x8026630Cu; f_80167FF8(c); // 80266308
L_8026630C:;
  c->r[28]=c->r[28]+0x00000004u; // 8026630C
  c->r[27]=c->r[27]+0x00000030u; // 80266310
  c->r[26]=c->r[26]+0x00000004u; // 80266314
  c->r[25]=c->r[25]+0x00000030u; // 80266318
  c->r[24]=c->r[24]+0x00000030u; // 8026631C
  c->r[19]=c->r[19]+0x00000001u; // 80266320
L_80266324:;
  cmpu(c,0,c->r[19],c->r[20]); // 80266324
  if (crb(c,0)) { IRQCHK(c); goto L_802661A0; } // 80266328
  c->r[3]=R32(c->r[1]+0x00000008u); // 8026632C
  c->r[4]=c->r[14]|c->r[14]; // 80266330
  c->r[5]=R32(c->r[1]+0x00000054u); // 80266334
  c->lr=0x8026633Cu; f_802A8714(c); // 80266338
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8026633C
  cmps(c,0,(int32_t)c->r[0],0); // 80266340
  if (crb(c,2)) { goto L_802663EC; } // 80266344
  c->r[24]=R32(c->r[1]+0x00000068u); // 80266348
  c->r[19]=c->r[14]|c->r[14]; // 8026634C
  c->r[23]=R32(c->r[1]+0x0000006Cu); // 80266350
  c->r[26]=0u+0x00000000u; // 80266354
  c->r[25]=c->r[24]|c->r[24]; // 80266358
  goto L_802663E4; // 8026635C
L_80266360:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 80266360
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 80266364
  if (crb(c,2)) { goto L_8026639C; } // 80266368
  cmps(c,0,(int32_t)c->r[18],0); // 8026636C
  if (crb(c,2)) { goto L_8026638C; } // 80266370
  c->r[3]=c->r[19]|c->r[19]; // 80266374
  c->r[4]=c->r[24]|c->r[24]; // 80266378
  c->lr=0x80266380u; f_80167FC4(c); // 8026637C
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[31]);} // 80266380
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[31]);} // 80266384
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[31]);} // 80266388
L_8026638C:;
  c->r[3]=c->r[23]|c->r[23]; // 8026638C
  c->r[4]=c->r[19]|c->r[19]; // 80266390
  c->lr=0x80266398u; f_802849B4(c); // 80266394
  goto L_802663CC; // 80266398
L_8026639C:;
  cmps(c,0,(int32_t)c->r[18],0); // 8026639C
  if (crb(c,2)) { goto L_802663C0; } // 802663A0
  c->r[3]=c->r[24]|c->r[24]; // 802663A4
  c->r[4]=c->r[19]|c->r[19]; // 802663A8
  c->lr=0x802663B0u; f_80258F70(c); // 802663AC
  c->r[3]=c->r[23]|c->r[23]; // 802663B0
  c->r[4]=c->r[25]|c->r[25]; // 802663B4
  c->lr=0x802663BCu; f_802849B4(c); // 802663B8
  goto L_802663CC; // 802663BC
L_802663C0:;
  c->r[3]=c->r[23]|c->r[23]; // 802663C0
  c->r[4]=c->r[19]|c->r[19]; // 802663C4
  c->lr=0x802663CCu; f_80258E8C(c); // 802663C8
L_802663CC:;
  c->r[19]=c->r[19]+0x00000030u; // 802663CC
  c->r[23]=c->r[23]+0x00000024u; // 802663D0
  c->r[22]=c->r[22]+0x00000004u; // 802663D4
  c->r[24]=c->r[24]+0x00000030u; // 802663D8
  c->r[25]=c->r[25]+0x00000030u; // 802663DC
  c->r[26]=c->r[26]+0x00000001u; // 802663E0
L_802663E4:;
  cmpu(c,0,c->r[26],c->r[20]); // 802663E4
  if (crb(c,0)) { IRQCHK(c); goto L_80266360; } // 802663E8
L_802663EC:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802663EC
  cmps(c,0,(int32_t)c->r[0],0); // 802663F0
  if (crb(c,2)) { goto L_80266420; } // 802663F4
  c->r[3]=R32(c->r[1]+0x00000074u); // 802663F8
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 802663FC
  c->r[5]=R32(c->r[1]+0x00000050u); // 80266400
  c->lr=0x80266408u; f_802A8714(c); // 80266404
  cmps(c,0,(int32_t)c->r[18],0); // 80266408
  if (crb(c,2)) { goto L_80266420; } // 8026640C
  c->r[3]=R32(c->r[1]+0x00000070u); // 80266410
  c->r[4]=R32(c->r[1]+0x00000068u); // 80266414
  c->r[5]=R32(c->r[1]+0x00000054u); // 80266418
  c->lr=0x80266420u; f_802A8714(c); // 8026641C
L_80266420:;
  c->r[3]=c->r[14]|c->r[14]; // 80266420
  c->r[14]=R32(c->r[1]+0x00000064u); // 80266424
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 80266428
  c->r[21]=c->r[21]+0x00000028u; // 8026642C
  W32(c->r[1]+0x00000064u,c->r[3]); // 80266430
  c->r[31]=c->r[31]+0x000000A0u; // 80266434
  c->r[3]=R32(c->r[1]+0x00000078u); // 80266438
  c->r[0]=R32(c->r[1]+0x00000060u); // 8026643C
  c->r[3]=c->r[3]+0x00000780u; // 80266440
  c->r[5]=R32(c->r[1]+0x00000068u); // 80266444
  W32(c->r[1]+0x00000078u,c->r[3]); // 80266448
  c->r[3]=R32(c->r[1]+0x00000008u); // 8026644C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80266450
  c->r[3]=c->r[3]+0x00000780u; // 80266454
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80266458
  W32(c->r[1]+0x00000008u,c->r[3]); // 8026645C
  c->r[3]=R32(c->r[1]+0x00000074u); // 80266460
  W32(c->r[1]+0x00000068u,c->r[0]); // 80266464
  c->r[3]=c->r[3]+0x000005A0u; // 80266468
  W32(c->r[1]+0x00000074u,c->r[3]); // 8026646C
  c->r[3]=R32(c->r[1]+0x00000070u); // 80266470
  W32(c->r[1]+0x00000060u,c->r[4]); // 80266474
  c->r[3]=c->r[3]+0x00000780u; // 80266478
  W32(c->r[1]+0x00000070u,c->r[3]); // 8026647C
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 80266480
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 80266484
  c->r[3]=c->r[3]+0x00000780u; // 80266488
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 8026648C
L_80266490:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266490
  cmpu(c,0,c->r[21],c->r[0]); // 80266494
  if (crb(c,0)) { IRQCHK(c); goto L_802660F8; } // 80266498
L_8026649C:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 8026649C
  c->r[11]=c->r[1]+0x000000D0u; // 802664A0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 802664A4
  c->lr=0x802664ACu; f_80185EEC(c); // 802664A8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 802664AC
  c->lr=c->r[0]; // 802664B0
  c->r[1]=c->r[1]+0x000000E0u; // 802664B4
  return; // 802664B8
}

// fn_802664BC
void f_802664BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 802664BC
  c->r[0]=c->lr; // 802664C0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 802664C4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 802664C8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 802664CC
  c->r[11]=c->r[1]+0x000000D0u; // 802664D0
  c->lr=0x802664D8u; f_80185EA0(c); // 802664D4
  cmps(c,0,(int32_t)c->r[7],0); // 802664D8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802664DC
  c->r[15]=c->r[5]|c->r[5]; // 802664E0
  c->r[16]=c->r[8]|c->r[8]; // 802664E4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802664E8
  c->r[17]=c->r[9]|c->r[9]; // 802664EC
  c->r[18]=c->r[10]|c->r[10]; // 802664F0
  W32(c->r[1]+0x00000010u,c->r[6]); // 802664F4
  W32(c->r[1]+0x00000014u,c->r[7]); // 802664F8
  if (crb(c,2)) { goto L_80266A38; } // 802664FC
  c->r[0]=0u+0xE0000000u; // 80266500
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 80266504
  W32(c->r[1]+0x00000074u,c->r[0]); // 80266508
  c->r[4]=c->r[0]|c->r[0]; // 8026650C
  c->r[5]=c->r[5]+0x0000001Fu; // 80266510
  c->r[0]=c->r[4]+0x00001000u; // 80266514
  c->r[14]=c->r[4]+0x00000800u; // 80266518
  c->r[4]=R32(c->r[1]+0x00000074u); // 8026651C
  c->r[19]=rotl(c->r[5],0)&0xFFFFFFE0u; // 80266520
  W32(c->r[1]+0x00000070u,c->r[0]); // 80266524
  c->r[0]=c->r[4]+0x00001800u; // 80266528
  c->r[5]=R32(c->r[1]+0x00000074u); // 8026652C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80266530
  c->r[4]=c->r[19]|c->r[19]; // 80266534
  c->r[0]=c->r[5]+0x00002000u; // 80266538
  W32(c->r[1]+0x00000068u,c->r[0]); // 8026653C
  c->r[0]=c->r[5]+0x00002800u; // 80266540
  W32(c->r[1]+0x00000064u,c->r[0]); // 80266544
  c->r[0]=c->r[5]+0x00003000u; // 80266548
  W32(c->r[1]+0x00000060u,c->r[0]); // 8026654C
  c->r[0]=c->r[5]+0x00003800u; // 80266550
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80266554
  c->lr=0x8026655Cu; f_8015C034(c); // 80266558
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8026655C
  cmps(c,0,(int32_t)c->r[0],0); // 80266560
  c->r[0]=0u+0x00000001u; // 80266564
  W32(c->r[1]+0x00000058u,c->r[0]); // 80266568
  if (crb(c,2)) { goto L_802665AC; } // 8026656C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266570
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80266574
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80266578
  c->r[0]=0u+0x00000002u; // 8026657C
  W32(c->r[1]+0x00000058u,c->r[0]); // 80266580
  c->r[0]=c->r[4]+0x0000001Fu; // 80266584
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80266588
  c->lr=0x80266590u; f_8015C034(c); // 8026658C
  cmps(c,0,(int32_t)c->r[18],0); // 80266590
  if (crb(c,2)) { goto L_802665AC; } // 80266594
  c->r[0]=0u+0x00000003u; // 80266598
  c->r[3]=c->r[18]|c->r[18]; // 8026659C
  W32(c->r[1]+0x00000058u,c->r[0]); // 802665A0
  c->r[4]=c->r[19]|c->r[19]; // 802665A4
  c->lr=0x802665ACu; f_8015C034(c); // 802665A8
L_802665AC:;
  c->lr=0x802665B0u; f_80266B68(c); // 802665AC
  c->r[29]=c->r[3]|c->r[3]; // 802665B0
  c->r[3]=0u+0x00000000u; // 802665B4
  c->lr=0x802665BCu; f_8015C3BC(c); // 802665B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802665BC
  c->r[4]=c->r[15]|c->r[15]; // 802665C0
  c->r[3]=0u+0xE0000000u; // 802665C4
  c->r[5]=0u+0x0000003Cu; // 802665C8
  cmpu(c,0,c->r[0],0x00000028u); // 802665CC
  if (crb(c,1)) { goto L_802665D8; } // 802665D0
  c->r[5]=rotl(c->r[19],27)&0x07FFFFFFu; // 802665D4
L_802665D8:;
  c->lr=0x802665DCu; f_802A8710(c); // 802665D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802665DC
  cmpu(c,0,c->r[0],0x00000014u); // 802665E0
  if (!crb(c,1)) { goto L_80266600; } // 802665E4
  goto L_802665F0; // 802665E8
L_802665EC:;
  c->lr=0x802665F0u; f_80163F28(c); // 802665EC
L_802665F0:;
  c->lr=0x802665F4u; f_8015C3B0(c); // 802665F0
  cmps(c,0,(int32_t)c->r[3],0); // 802665F4
  if (!crb(c,2)) { IRQCHK(c); goto L_802665EC; } // 802665F8
  goto L_80266608; // 802665FC
L_80266600:;
  c->r[3]=0u+0x00000000u; // 80266600
  c->lr=0x80266608u; f_8015C3BC(c); // 80266604
L_80266608:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80266608
  c->r[30]=0u+0x80310000u; // 8026660C
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80266610
  c->r[30]=c->r[30]+0xFFFF85E8u; // 80266614
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80266618
  c->r[0]=0u+0x00000000u; // 8026661C
  c->r[21]=0u+0x00000000u; // 80266620
  c->r[31]=0u+0x00000000u; // 80266624
  W32(c->r[1]+0x00000084u,c->r[0]); // 80266628
  c->r[0]=0u+0x00000000u; // 8026662C
  W32(c->r[1]+0x00000078u,c->r[18]); // 80266630
  W32(c->r[1]+0x00000080u,c->r[0]); // 80266634
  goto L_80266A2C; // 80266638
L_8026663C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026663C
  c->r[19]=c->r[0]-c->r[21]; // 80266640
  cmpu(c,0,c->r[19],0x00000028u); // 80266644
  c->r[20]=c->r[19]|c->r[19]; // 80266648
  if (!crb(c,1)) { goto L_80266668; } // 8026664C
  c->r[0]=0u+0x0000003Cu; // 80266650
  c->r[20]=0u+0x00000028u; // 80266654
  W32(c->r[1]+0x00000054u,c->r[0]); // 80266658
  c->r[0]=0u+0x0000002Du; // 8026665C
  W32(c->r[1]+0x00000050u,c->r[0]); // 80266660
  goto L_80266688; // 80266664
L_80266668:;
  c->r[4]=(uint32_t)((int32_t)c->r[19]*(int32_t)48); // 80266668
  c->r[3]=(uint32_t)((int32_t)c->r[19]*(int32_t)36); // 8026666C
  c->r[0]=c->r[4]+0x0000001Fu; // 80266670
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80266674
  c->r[3]=c->r[3]+0x0000001Fu; // 80266678
  W32(c->r[1]+0x00000054u,c->r[0]); // 8026667C
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 80266680
  W32(c->r[1]+0x00000050u,c->r[0]); // 80266684
L_80266688:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 80266688
  c->lr=0x80266690u; f_8015C3BC(c); // 8026668C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266690
  c->r[3]=c->r[21]+0x00000028u; // 80266694
  cmpu(c,0,c->r[3],c->r[0]); // 80266698
  if (!crb(c,0)) { goto L_802666D4; } // 8026669C
  c->r[5]=c->r[19]+0xFFFFFFD8u; // 802666A0
  c->r[0]=R32(c->r[1]+0x00000080u); // 802666A4
  cmpu(c,0,c->r[5],0x00000028u); // 802666A8
  c->r[3]=R32(c->r[1]+0x00000068u); // 802666AC
  c->r[4]=c->r[0]+c->r[15]; // 802666B0
  c->r[4]=c->r[4]+0x00000780u; // 802666B4
  if (!crb(c,1)) { goto L_802666C4; } // 802666B8
  c->r[5]=0u+0x0000003Cu; // 802666BC
  goto L_802666D0; // 802666C0
L_802666C4:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 802666C4
  c->r[0]=c->r[5]+0x0000001Fu; // 802666C8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 802666CC
L_802666D0:;
  c->lr=0x802666D4u; f_802A8710(c); // 802666D0
L_802666D4:;
  cmpu(c,0,c->r[20],0x00000001u); // 802666D4
  if (!crb(c,1)) { goto L_802666F4; } // 802666D8
  c->r[4]=R32(c->r[1]+0x00000074u); // 802666DC
  c->r[3]=c->r[16]|c->r[16]; // 802666E0
  c->r[5]=c->r[14]|c->r[14]; // 802666E4
  c->r[6]=c->r[20]|c->r[20]; // 802666E8
  c->lr=0x802666F0u; f_801680C4(c); // 802666EC
  goto L_80266704; // 802666F0
L_802666F4:;
  c->r[4]=R32(c->r[1]+0x00000074u); // 802666F4
  c->r[3]=c->r[16]|c->r[16]; // 802666F8
  c->r[5]=c->r[14]|c->r[14]; // 802666FC
  c->lr=0x80266704u; f_80167FF8(c); // 80266700
L_80266704:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80266704
  c->r[27]=c->r[14]|c->r[14]; // 80266708
  c->r[25]=c->r[14]|c->r[14]; // 8026670C
  c->r[19]=0u+0x00000000u; // 80266710
  c->r[22]=c->r[0]+c->r[31]; // 80266714
  c->r[0]=R32(c->r[1]+0x00000084u); // 80266718
  c->r[28]=c->r[22]|c->r[22]; // 8026671C
  c->r[26]=0u+0x00000000u; // 80266720
  c->r[24]=c->r[29]+c->r[0]; // 80266724
  goto L_802668B0; // 80266728
L_8026672C:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 8026672C
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 80266730
  if (crb(c,2)) { goto L_8026681C; } // 80266734
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80266738
  c->r[5]=R32(c->r[17]+0x00000000u); // 8026673C
  c->r[12]=R32(c->r[30]+c->r[0]); // 80266740
  c->r[3]=c->r[27]|c->r[27]; // 80266744
  W32(c->r[1]+0x00000018u,c->r[5]); // 80266748
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 8026674C
  c->r[4]=c->r[15]|c->r[15]; // 80266750
  c->r[6]=c->r[16]|c->r[16]; // 80266754
  c->r[7]=c->r[1]+0x00000018u; // 80266758
  c->r[8]=c->r[21]+c->r[19]; // 8026675C
  c->ctr=c->r[12]; // 80266760
  if (true) { c->lr=0x80266768u; dispatch(c,c->ctr); } // 80266764
  c->r[4]=R32(c->r[17]+0x00000000u); // 80266768
  c->r[3]=c->r[17]|c->r[17]; // 8026676C
  c->r[4]=c->r[4]+0x0000004Cu; // 80266770
  c->r[0]=R32(c->r[4]+0x00000024u); // 80266774
  c->r[0]=c->r[4]+c->r[0]; // 80266778
  c->r[0]=c->r[0]+c->r[31]; // 8026677C
  c->r[4]=c->r[0]+c->r[26]; // 80266780
  c->r[4]=R32(c->r[4]+0x00000004u); // 80266784
  c->lr=0x8026678Cu; f_802514FC(c); // 80266788
  c->r[0]=0u-c->r[3]; // 8026678C
  c->r[0]=c->r[0]|c->r[3]; // 80266790
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80266794
  if (crb(c,2)) { goto L_802667C0; } // 80266798
  c->r[0]=R32(c->r[3]+0x00000060u); // 8026679C
  cmps(c,0,(int32_t)c->r[0],0); // 802667A0
  if (crb(c,2)) { goto L_802667B0; } // 802667A4
  c->r[0]=c->r[3]+c->r[0]; // 802667A8
  goto L_802667B4; // 802667AC
L_802667B0:;
  c->r[0]=0u+0x00000000u; // 802667B0
L_802667B4:;
  c->r[3]=0u-c->r[0]; // 802667B4
  c->r[0]=c->r[3]|c->r[0]; // 802667B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802667BC
L_802667C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802667C0
  if (crb(c,2)) { goto L_80266898; } // 802667C4
  c->r[0]=c->r[21]+c->r[19]; // 802667C8
  c->r[3]=c->r[1]+0x00000020u; // 802667CC
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802667D0
  c->r[4]=c->r[15]+c->r[23]; // 802667D4
  c->lr=0x802667DCu; f_80259078(c); // 802667D8
  cmpu(c,0,c->r[3],0x00000001u); // 802667DC
  if (!crb(c,2)) { goto L_802667F8; } // 802667E0
  c->r[3]=c->r[25]|c->r[25]; // 802667E4
  c->r[4]=c->r[1]+0x00000020u; // 802667E8
  c->r[5]=c->r[29]+c->r[23]; // 802667EC
  c->lr=0x802667F4u; f_80167FF8(c); // 802667F0
  goto L_80266898; // 802667F4
L_802667F8:;
  c->r[3]=c->r[29]+c->r[23]; // 802667F8
  c->lr=0x80266800u; f_80167F98(c); // 802667FC
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80266800
  {uint32_t ea=c->r[16]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80266804
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[0]);} // 80266808
  {uint32_t ea=c->r[16]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026680C
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[1]);} // 80266810
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[0]);} // 80266814
  goto L_80266898; // 80266818
L_8026681C:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 8026681C
  c->r[3]=c->r[3]+0x0000004Cu; // 80266820
  c->r[0]=R32(c->r[3]+0x00000024u); // 80266824
  c->r[0]=c->r[3]+c->r[0]; // 80266828
  c->r[0]=c->r[0]+c->r[31]; // 8026682C
  c->r[3]=c->r[0]+c->r[26]; // 80266830
  c->r[4]=R32(c->r[3]+0x00000004u); // 80266834
  cmps(c,0,(int32_t)c->r[4],0); // 80266838
  if (crb(c,0)) { goto L_80266898; } // 8026683C
  c->r[3]=c->r[17]|c->r[17]; // 80266840
  c->lr=0x80266848u; f_802514FC(c); // 80266844
  cmps(c,0,(int32_t)c->r[3],0); // 80266848
  if (crb(c,2)) { goto L_80266898; } // 8026684C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80266850
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80266854
  if (crb(c,2)) { goto L_80266898; } // 80266858
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8026685C
  c->r[3]=c->r[17]|c->r[17]; // 80266860
  c->lr=0x80266868u; f_802514FC(c); // 80266864
  cmps(c,0,(int32_t)c->r[3],0); // 80266868
  if (crb(c,2)) { goto L_80266878; } // 8026686C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80266870
  goto L_8026687C; // 80266874
L_80266878:;
  c->r[3]=0u+0x00000000u; // 80266878
L_8026687C:;
  c->r[0]=c->r[21]+c->r[19]; // 8026687C
  c->r[5]=c->r[27]|c->r[27]; // 80266880
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 80266884
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80266888
  c->r[3]=c->r[29]+c->r[3]; // 8026688C
  c->r[4]=c->r[15]+c->r[0]; // 80266890
  c->lr=0x80266898u; f_80167FF8(c); // 80266894
L_80266898:;
  c->r[28]=c->r[28]+0x00000004u; // 80266898
  c->r[27]=c->r[27]+0x00000030u; // 8026689C
  c->r[26]=c->r[26]+0x00000004u; // 802668A0
  c->r[25]=c->r[25]+0x00000030u; // 802668A4
  c->r[24]=c->r[24]+0x00000030u; // 802668A8
  c->r[19]=c->r[19]+0x00000001u; // 802668AC
L_802668B0:;
  cmpu(c,0,c->r[19],c->r[20]); // 802668B0
  if (crb(c,0)) { IRQCHK(c); goto L_8026672C; } // 802668B4
  c->r[3]=R32(c->r[1]+0x00000008u); // 802668B8
  c->r[4]=c->r[14]|c->r[14]; // 802668BC
  c->r[5]=R32(c->r[1]+0x00000054u); // 802668C0
  c->lr=0x802668C8u; f_802A8714(c); // 802668C4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802668C8
  cmps(c,0,(int32_t)c->r[0],0); // 802668CC
  if (crb(c,2)) { goto L_80266978; } // 802668D0
  c->r[24]=R32(c->r[1]+0x0000006Cu); // 802668D4
  c->r[19]=c->r[14]|c->r[14]; // 802668D8
  c->r[23]=R32(c->r[1]+0x00000070u); // 802668DC
  c->r[26]=0u+0x00000000u; // 802668E0
  c->r[25]=c->r[24]|c->r[24]; // 802668E4
  goto L_80266970; // 802668E8
L_802668EC:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 802668EC
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 802668F0
  if (crb(c,2)) { goto L_80266928; } // 802668F4
  cmps(c,0,(int32_t)c->r[18],0); // 802668F8
  if (crb(c,2)) { goto L_80266918; } // 802668FC
  c->r[3]=c->r[19]|c->r[19]; // 80266900
  c->r[4]=c->r[24]|c->r[24]; // 80266904
  c->lr=0x8026690Cu; f_80167FC4(c); // 80266908
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[31]);} // 8026690C
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[31]);} // 80266910
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[31]);} // 80266914
L_80266918:;
  c->r[3]=c->r[23]|c->r[23]; // 80266918
  c->r[4]=c->r[19]|c->r[19]; // 8026691C
  c->lr=0x80266924u; f_802849B4(c); // 80266920
  goto L_80266958; // 80266924
L_80266928:;
  cmps(c,0,(int32_t)c->r[18],0); // 80266928
  if (crb(c,2)) { goto L_8026694C; } // 8026692C
  c->r[3]=c->r[24]|c->r[24]; // 80266930
  c->r[4]=c->r[19]|c->r[19]; // 80266934
  c->lr=0x8026693Cu; f_80258F70(c); // 80266938
  c->r[3]=c->r[23]|c->r[23]; // 8026693C
  c->r[4]=c->r[25]|c->r[25]; // 80266940
  c->lr=0x80266948u; f_802849B4(c); // 80266944
  goto L_80266958; // 80266948
L_8026694C:;
  c->r[3]=c->r[23]|c->r[23]; // 8026694C
  c->r[4]=c->r[19]|c->r[19]; // 80266950
  c->lr=0x80266958u; f_80258E8C(c); // 80266954
L_80266958:;
  c->r[19]=c->r[19]+0x00000030u; // 80266958
  c->r[23]=c->r[23]+0x00000024u; // 8026695C
  c->r[22]=c->r[22]+0x00000004u; // 80266960
  c->r[24]=c->r[24]+0x00000030u; // 80266964
  c->r[25]=c->r[25]+0x00000030u; // 80266968
  c->r[26]=c->r[26]+0x00000001u; // 8026696C
L_80266970:;
  cmpu(c,0,c->r[26],c->r[20]); // 80266970
  if (crb(c,0)) { IRQCHK(c); goto L_802668EC; } // 80266974
L_80266978:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80266978
  cmps(c,0,(int32_t)c->r[0],0); // 8026697C
  if (crb(c,2)) { goto L_802669AC; } // 80266980
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 80266984
  c->r[4]=R32(c->r[1]+0x00000070u); // 80266988
  c->r[5]=R32(c->r[1]+0x00000050u); // 8026698C
  c->lr=0x80266994u; f_802A8714(c); // 80266990
  cmps(c,0,(int32_t)c->r[18],0); // 80266994
  if (crb(c,2)) { goto L_802669AC; } // 80266998
  c->r[3]=R32(c->r[1]+0x00000078u); // 8026699C
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 802669A0
  c->r[5]=R32(c->r[1]+0x00000054u); // 802669A4
  c->lr=0x802669ACu; f_802A8714(c); // 802669A8
L_802669AC:;
  c->r[3]=R32(c->r[1]+0x00000074u); // 802669AC
  c->r[4]=c->r[14]|c->r[14]; // 802669B0
  c->r[0]=R32(c->r[1]+0x00000068u); // 802669B4
  c->r[21]=c->r[21]+0x00000028u; // 802669B8
  c->r[14]=R32(c->r[1]+0x00000064u); // 802669BC
  c->r[31]=c->r[31]+0x000000A0u; // 802669C0
  W32(c->r[1]+0x00000068u,c->r[3]); // 802669C4
  c->r[3]=R32(c->r[1]+0x00000080u); // 802669C8
  W32(c->r[1]+0x00000074u,c->r[0]); // 802669CC
  c->r[3]=c->r[3]+0x00000780u; // 802669D0
  c->r[5]=R32(c->r[1]+0x00000070u); // 802669D4
  W32(c->r[1]+0x00000080u,c->r[3]); // 802669D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 802669DC
  c->r[0]=R32(c->r[1]+0x00000060u); // 802669E0
  c->r[3]=c->r[3]+0x00000780u; // 802669E4
  c->r[6]=R32(c->r[1]+0x0000006Cu); // 802669E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802669EC
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 802669F0
  W32(c->r[1]+0x00000070u,c->r[0]); // 802669F4
  c->r[3]=c->r[3]+0x000005A0u; // 802669F8
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 802669FC
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 80266A00
  c->r[3]=R32(c->r[1]+0x00000078u); // 80266A04
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80266A08
  c->r[3]=c->r[3]+0x00000780u; // 80266A0C
  W32(c->r[1]+0x00000078u,c->r[3]); // 80266A10
  c->r[3]=R32(c->r[1]+0x00000084u); // 80266A14
  W32(c->r[1]+0x00000064u,c->r[4]); // 80266A18
  c->r[3]=c->r[3]+0x00000780u; // 80266A1C
  W32(c->r[1]+0x00000060u,c->r[5]); // 80266A20
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 80266A24
  W32(c->r[1]+0x00000084u,c->r[3]); // 80266A28
L_80266A2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266A2C
  cmpu(c,0,c->r[21],c->r[0]); // 80266A30
  if (crb(c,0)) { IRQCHK(c); goto L_8026663C; } // 80266A34
L_80266A38:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80266A38
  c->r[11]=c->r[1]+0x000000D0u; // 80266A3C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80266A40
  c->lr=0x80266A48u; f_80185EEC(c); // 80266A44
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80266A48
  c->lr=c->r[0]; // 80266A4C
  c->r[1]=c->r[1]+0x000000E0u; // 80266A50
  return; // 80266A54
}

// CalcTexMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4FlagQ44nw4r3g3d13TexSrtTypedef13TexMatrixMode
void f_80266A58(Ctx* __restrict c) {
  trace_call(0x80266A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266A58
  c->r[0]=c->lr; // 80266A5C
  cmps(c,0,(int32_t)c->r[7],0); // 80266A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80266A64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80266A68
  c->r[31]=c->r[4]|c->r[4]; // 80266A6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80266A70
  c->r[30]=c->r[3]|c->r[3]; // 80266A74
  if (!crb(c,2)) { goto L_80266A8C; } // 80266A78
  c->lr=0x80266A80u; f_8026B300(c); // 80266A7C
  c->r[0]=cntlz(c->r[3]); // 80266A80
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80266A84
  goto L_80266AB0; // 80266A88
L_80266A8C:;
  cmps(c,0,(int32_t)c->r[7],1); // 80266A8C
  if (!crb(c,2)) { goto L_80266AA4; } // 80266A90
  c->lr=0x80266A98u; f_8026BEA0(c); // 80266A94
  c->r[0]=cntlz(c->r[3]); // 80266A98
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80266A9C
  goto L_80266AB0; // 80266AA0
L_80266AA4:;
  c->lr=0x80266AA8u; f_8026CB04(c); // 80266AA4
  c->r[0]=cntlz(c->r[3]); // 80266AA8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80266AAC
L_80266AB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80266AB0
  if (crb(c,2)) { goto L_80266AC8; } // 80266AB4
  cmps(c,0,(int32_t)c->r[31],0); // 80266AB8
  if (crb(c,2)) { goto L_80266AC8; } // 80266ABC
  c->r[3]=c->r[30]|c->r[30]; // 80266AC0
  c->lr=0x80266AC8u; f_80167F98(c); // 80266AC4
L_80266AC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266AC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80266ACC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80266AD0
  c->lr=c->r[0]; // 80266AD4
  c->r[1]=c->r[1]+0x00000010u; // 80266AD8
  return; // 80266ADC
}

// CalcTexMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_80266AE0(Ctx* __restrict c) {
  trace_call(0x80266AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266AE0
  c->r[0]=c->lr; // 80266AE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80266AE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80266AEC
  c->r[31]=c->r[4]|c->r[4]; // 80266AF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80266AF4
  c->r[30]=c->r[3]|c->r[3]; // 80266AF8
  c->lr=0x80266B00u; f_8026A5AC(c); // 80266AFC
  c->r[0]=cntlz(c->r[3]); // 80266B00
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80266B04
  if (crb(c,2)) { goto L_80266B1C; } // 80266B08
  cmps(c,0,(int32_t)c->r[31],0); // 80266B0C
  if (crb(c,2)) { goto L_80266B1C; } // 80266B10
  c->r[3]=c->r[30]|c->r[30]; // 80266B14
  c->lr=0x80266B1Cu; f_80167F98(c); // 80266B18
L_80266B1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266B1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80266B20
  c->r[30]=R32(c->r[1]+0x00000008u); // 80266B24
  c->lr=c->r[0]; // 80266B28
  c->r[1]=c->r[1]+0x00000010u; // 80266B2C
  return; // 80266B30
}

// GetScaleTemporary__Q44nw4r3g3d6detail7workmemFv
void f_80266B34(Ctx* __restrict c) {
  trace_call(0x80266B34u);
  c->r[3]=0u+0x80400000u; // 80266B34
  c->r[3]=c->r[3]+0x00002600u; // 80266B38
  return; // 80266B3C
}

// GetMtxIDTemporary__Q44nw4r3g3d6detail7workmemFv
void f_80266B40(Ctx* __restrict c) {
  trace_call(0x80266B40u);
  c->r[3]=0u+0x80400000u; // 80266B40
  c->r[3]=c->r[3]+0x00002600u; // 80266B44
  c->r[3]=c->r[3]+0x00006000u; // 80266B48
  return; // 80266B4C
}

// fn_80266B50
void f_80266B50(Ctx* __restrict c) {
  c->r[3]=0u+0x80400000u; // 80266B50
  c->r[3]=c->r[3]+0x00002600u; // 80266B54
  return; // 80266B58
}

// fn_80266B5C
void f_80266B5C(Ctx* __restrict c) {
  c->r[3]=0u+0x80400000u; // 80266B5C
  c->r[3]=c->r[3]+0x00002600u; // 80266B60
  return; // 80266B64
}

// fn_80266B68
void f_80266B68(Ctx* __restrict c) {
  c->r[3]=0u+0x80400000u; // 80266B68
  c->r[3]=c->r[3]+0x00002600u; // 80266B6C
  return; // 80266B70
}

// CalcWorld__Q24nw4r3g3dFPQ34nw4r4math5MTX34PUlPCUcPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjChrPQ34nw4r3g3d16FuncObjCalcWorldUl
void f_80266B74(Ctx* __restrict c) {
  trace_call(0x80266B74u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266B74
  c->r[0]=c->lr; // 80266B78
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80266B7C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 80266B80
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 80266B84
  c->r[11]=c->r[1]+0x000000C0u; // 80266B88
  c->lr=0x80266B90u; f_80185EA0(c); // 80266B8C
  cmps(c,0,(int32_t)c->r[5],0); // 80266B90
  c->r[18]=c->r[3]|c->r[3]; // 80266B94
  c->r[19]=c->r[4]|c->r[4]; // 80266B98
  c->r[20]=c->r[5]|c->r[5]; // 80266B9C
  c->r[17]=c->r[6]|c->r[6]; // 80266BA0
  c->r[21]=c->r[7]|c->r[7]; // 80266BA4
  c->r[14]=c->r[8]|c->r[8]; // 80266BA8
  c->r[22]=c->r[9]|c->r[9]; // 80266BAC
  c->r[15]=c->r[10]|c->r[10]; // 80266BB0
  c->r[31]=0u+0x00000000u; // 80266BB4
  if (!crb(c,2)) { goto L_80266BD8; } // 80266BB8
  c->r[4]=0u+0x80340000u; // 80266BBC
  c->r[3]=c->r[21]|c->r[21]; // 80266BC0
  c->r[4]=c->r[4]+0x00004CB0u; // 80266BC4
  c->lr=0x80266BCCu; f_802513D0(c); // 80266BC8
  cmps(c,0,(int32_t)c->r[3],0); // 80266BCC
  c->r[20]=c->r[3]|c->r[3]; // 80266BD0
  if (crb(c,2)) { goto L_80267118; } // 80266BD4
L_80266BD8:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 80266BD8
  c->r[0]=rotl(c->r[15],5)&0x00000001u; // 80266BDC
  W32(c->r[1]+0x00000074u,c->r[0]); // 80266BE0
  c->r[3]=c->r[3]+0x0000004Cu; // 80266BE4
  c->r[3]=R32(c->r[3]+0x00000008u); // 80266BE8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80266BEC
  c->r[0]=cntlz(c->r[0]); // 80266BF0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80266BF4
  W8(c->r[1]+0x00000070u,c->r[0]); // 80266BF8
  c->lr=0x80266C00u; f_80266B34(c); // 80266BFC
  {uint32_t ea=c->r[2]+0xFFFF9D08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80266C00
  c->r[16]=c->r[3]|c->r[3]; // 80266C04
  c->r[4]=c->r[18]|c->r[18]; // 80266C08
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80266C0C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80266C10
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80266C14
  c->r[3]=c->r[17]|c->r[17]; // 80266C18
  c->lr=0x80266C20u; f_80167FC4(c); // 80266C1C
  c->lr=0x80266C24u; f_80266B40(c); // 80266C20
  W32(c->r[19]+0x00000000u,c->r[15]); // 80266C24
  c->r[30]=c->r[3]|c->r[3]; // 80266C28
  c->r[29]=0u+0x00000000u; // 80266C2C
  c->r[17]=0u+0x00000000u; // 80266C30
  goto L_80267070; // 80266C34
L_80266C38:;
  cmpu(c,0,c->r[0],0x00000002u); // 80266C38
  if (!crb(c,2)) { goto L_80266FF8; } // 80266C3C
  c->r[0]=R8(c->r[20]+0x00000001u); // 80266C40
  c->r[3]=c->r[21]|c->r[21]; // 80266C44
  c->r[4]=R8(c->r[20]+0x00000003u); // 80266C48
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 80266C4C
  c->r[6]=R8(c->r[20]+0x00000002u); // 80266C50
  c->r[0]=R8(c->r[20]+0x00000004u); // 80266C54
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 80266C58
  c->r[28]=c->r[7]+c->r[6]; // 80266C5C
  c->r[4]=c->r[28]|c->r[28]; // 80266C60
  c->r[24]=c->r[5]+c->r[0]; // 80266C64
  c->lr=0x80266C6Cu; f_802514FC(c); // 80266C68
  cmps(c,0,(int32_t)c->r[3],0); // 80266C6C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80266C70
  if (crb(c,2)) { goto L_80266C80; } // 80266C74
  c->r[15]=R32(c->r[3]+0x00000010u); // 80266C78
  goto L_80266C84; // 80266C7C
L_80266C80:;
  c->r[15]=0u+0x00000000u; // 80266C80
L_80266C84:;
  W32(c->r[30]+c->r[17],c->r[15]); // 80266C84
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 80266C88
  c->r[3]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 80266C8C
  cmps(c,0,(int32_t)c->r[14],0); // 80266C90
  c->r[23]=R32(c->r[19]+c->r[0]); // 80266C94
  c->r[29]=c->r[29]+0x00000001u; // 80266C98
  c->r[17]=c->r[17]+0x00000004u; // 80266C9C
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 80266CA0
  c->r[27]=c->r[18]+c->r[3]; // 80266CA4
  c->r[3]=(uint32_t)((int32_t)c->r[24]*(int32_t)48); // 80266CA8
  c->r[26]=c->r[16]+c->r[0]; // 80266CAC
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 80266CB0
  c->r[25]=c->r[18]+c->r[3]; // 80266CB4
  c->r[24]=c->r[16]+c->r[0]; // 80266CB8
  if (crb(c,2)) { goto L_80266CF4; } // 80266CBC
  c->r[5]=R32(c->r[1]+0x00000014u); // 80266CC0
  c->r[3]=c->r[14]|c->r[14]; // 80266CC4
  c->r[4]=c->r[1]+0x00000024u; // 80266CC8
  cmps(c,0,(int32_t)c->r[5],0); // 80266CCC
  if (crb(c,2)) { goto L_80266CDC; } // 80266CD0
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80266CD4
  goto L_80266CE0; // 80266CD8
L_80266CDC:;
  c->r[5]=0u+0x00000000u; // 80266CDC
L_80266CE0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80266CE0
  c->r[12]=R32(c->r[12]+0x00000038u); // 80266CE4
  c->ctr=c->r[12]; // 80266CE8
  if (true) { c->lr=0x80266CF0u; dispatch(c,c->ctr); } // 80266CEC
  c->r[31]=c->r[3]|c->r[3]; // 80266CF0
L_80266CF4:;
  cmps(c,0,(int32_t)c->r[14],0); // 80266CF4
  if (crb(c,2)) { goto L_80266D08; } // 80266CF8
  c->r[0]=R32(c->r[31]+0x00000000u); // 80266CFC
  cmps(c,0,(int32_t)c->r[0],0); // 80266D00
  if (!crb(c,2)) { goto L_80266D18; } // 80266D04
L_80266D08:;
  c->r[3]=c->r[1]+0x00000014u; // 80266D08
  c->r[4]=c->r[1]+0x00000024u; // 80266D0C
  c->lr=0x80266D14u; f_8025527C(c); // 80266D10
  c->r[31]=c->r[1]+0x00000024u; // 80266D14
L_80266D18:;
  cmps(c,0,(int32_t)c->r[28],0); // 80266D18
  if (crb(c,2)) { goto L_80266DEC; } // 80266D1C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80266D20
  cmps(c,0,(int32_t)c->r[0],0); // 80266D24
  if (crb(c,2)) { goto L_80266DEC; } // 80266D28
  c->r[0]=c->r[1]+0x00000024u; // 80266D2C
  cmpu(c,0,c->r[31],c->r[0]); // 80266D30
  if (crb(c,2)) { goto L_80266DD4; } // 80266D34
  c->r[0]=R32(c->r[31]+0x00000000u); // 80266D38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80266D3C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80266D40
  c->r[0]=R32(c->r[31]+0x00000008u); // 80266D44
  W32(c->r[1]+0x00000028u,c->r[3]); // 80266D48
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80266D4C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80266D50
  W32(c->r[1]+0x00000030u,c->r[0]); // 80266D54
  c->r[3]=R32(c->r[31]+0x00000010u); // 80266D58
  c->r[0]=R32(c->r[31]+0x00000014u); // 80266D5C
  W32(c->r[1]+0x00000034u,c->r[3]); // 80266D60
  W32(c->r[1]+0x00000038u,c->r[0]); // 80266D64
  c->r[0]=R32(c->r[31]+0x00000018u); // 80266D68
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80266D6C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80266D70
  c->r[0]=R32(c->r[31]+0x00000020u); // 80266D74
  W32(c->r[1]+0x00000040u,c->r[3]); // 80266D78
  W32(c->r[1]+0x00000044u,c->r[0]); // 80266D7C
  c->r[3]=R32(c->r[31]+0x00000024u); // 80266D80
  c->r[0]=R32(c->r[31]+0x00000028u); // 80266D84
  W32(c->r[1]+0x00000048u,c->r[3]); // 80266D88
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80266D8C
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80266D90
  c->r[0]=R32(c->r[31]+0x00000030u); // 80266D94
  W32(c->r[1]+0x00000050u,c->r[3]); // 80266D98
  W32(c->r[1]+0x00000054u,c->r[0]); // 80266D9C
  c->r[3]=R32(c->r[31]+0x00000034u); // 80266DA0
  c->r[0]=R32(c->r[31]+0x00000038u); // 80266DA4
  W32(c->r[1]+0x00000058u,c->r[3]); // 80266DA8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80266DAC
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80266DB0
  c->r[0]=R32(c->r[31]+0x00000040u); // 80266DB4
  W32(c->r[1]+0x00000060u,c->r[3]); // 80266DB8
  W32(c->r[1]+0x00000064u,c->r[0]); // 80266DBC
  c->r[3]=R32(c->r[31]+0x00000044u); // 80266DC0
  c->r[0]=R32(c->r[31]+0x00000048u); // 80266DC4
  c->r[31]=c->r[1]+0x00000024u; // 80266DC8
  W32(c->r[1]+0x00000068u,c->r[3]); // 80266DCC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80266DD0
L_80266DD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80266DD4
  c->r[3]=c->r[1]+0x00000014u; // 80266DD8
  c->r[4]=c->r[1]+0x00000024u; // 80266DDC
  c->r[0]=c->r[0]|0x00000200u; // 80266DE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80266DE4
  c->lr=0x80266DECu; f_802550E0(c); // 80266DE8
L_80266DEC:;
  cmps(c,0,(int32_t)c->r[22],0); // 80266DEC
  if (crb(c,2)) { goto L_80266EDC; } // 80266DF0
  c->r[0]=c->r[1]+0x00000024u; // 80266DF4
  cmpu(c,0,c->r[31],c->r[0]); // 80266DF8
  if (crb(c,2)) { goto L_80266E9C; } // 80266DFC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80266E00
  W32(c->r[1]+0x00000024u,c->r[0]); // 80266E04
  c->r[3]=R32(c->r[31]+0x00000004u); // 80266E08
  c->r[0]=R32(c->r[31]+0x00000008u); // 80266E0C
  W32(c->r[1]+0x00000028u,c->r[3]); // 80266E10
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80266E14
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80266E18
  W32(c->r[1]+0x00000030u,c->r[0]); // 80266E1C
  c->r[3]=R32(c->r[31]+0x00000010u); // 80266E20
  c->r[0]=R32(c->r[31]+0x00000014u); // 80266E24
  W32(c->r[1]+0x00000034u,c->r[3]); // 80266E28
  W32(c->r[1]+0x00000038u,c->r[0]); // 80266E2C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80266E30
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80266E34
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80266E38
  c->r[0]=R32(c->r[31]+0x00000020u); // 80266E3C
  W32(c->r[1]+0x00000040u,c->r[3]); // 80266E40
  W32(c->r[1]+0x00000044u,c->r[0]); // 80266E44
  c->r[3]=R32(c->r[31]+0x00000024u); // 80266E48
  c->r[0]=R32(c->r[31]+0x00000028u); // 80266E4C
  W32(c->r[1]+0x00000048u,c->r[3]); // 80266E50
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80266E54
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80266E58
  c->r[0]=R32(c->r[31]+0x00000030u); // 80266E5C
  W32(c->r[1]+0x00000050u,c->r[3]); // 80266E60
  W32(c->r[1]+0x00000054u,c->r[0]); // 80266E64
  c->r[3]=R32(c->r[31]+0x00000034u); // 80266E68
  c->r[0]=R32(c->r[31]+0x00000038u); // 80266E6C
  W32(c->r[1]+0x00000058u,c->r[3]); // 80266E70
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80266E74
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80266E78
  c->r[0]=R32(c->r[31]+0x00000040u); // 80266E7C
  W32(c->r[1]+0x00000060u,c->r[3]); // 80266E80
  W32(c->r[1]+0x00000064u,c->r[0]); // 80266E84
  c->r[3]=R32(c->r[31]+0x00000044u); // 80266E88
  c->r[0]=R32(c->r[31]+0x00000048u); // 80266E8C
  c->r[31]=c->r[1]+0x00000024u; // 80266E90
  W32(c->r[1]+0x00000068u,c->r[3]); // 80266E94
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80266E98
L_80266E9C:;
  c->r[0]=R16(c->r[22]+0x00000006u); // 80266E9C
  c->r[3]=R32(c->r[21]+0x00000000u); // 80266EA0
  cmpu(c,0,c->r[28],c->r[0]); // 80266EA4
  if (!crb(c,2)) { goto L_80266EDC; } // 80266EA8
  c->r[0]=R8(c->r[22]+0x00000004u); // 80266EAC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80266EB0
  if (crb(c,2)) { goto L_80266EDC; } // 80266EB4
  W32(c->r[1]+0x00000010u,c->r[3]); // 80266EB8
  c->r[6]=c->r[22]|c->r[22]; // 80266EBC
  c->r[4]=c->r[1]+0x00000024u; // 80266EC0
  c->r[5]=c->r[1]+0x00000010u; // 80266EC4
  c->r[3]=R32(c->r[22]+0x00000000u); // 80266EC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80266ECC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80266ED0
  c->ctr=c->r[12]; // 80266ED4
  if (true) { c->lr=0x80266EDCu; dispatch(c,c->ctr); } // 80266ED8
L_80266EDC:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 80266EDC
  cmps(c,0,(int32_t)c->r[0],0); // 80266EE0
  if (crb(c,2)) { goto L_80266F14; } // 80266EE4
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 80266EE8
  c->r[3]=c->r[27]|c->r[27]; // 80266EEC
  c->r[15]=c->r[19]+c->r[0]; // 80266EF0
  c->r[4]=c->r[26]|c->r[26]; // 80266EF4
  c->r[5]=c->r[25]|c->r[25]; // 80266EF8
  c->r[6]=c->r[24]|c->r[24]; // 80266EFC
  c->r[7]=c->r[23]|c->r[23]; // 80266F00
  c->r[8]=c->r[31]|c->r[31]; // 80266F04
  c->lr=0x80266F0Cu; f_8026BF3C(c); // 80266F08
  W32(c->r[15]+0x00000000u,c->r[3]); // 80266F0C
  goto L_80266F74; // 80266F10
L_80266F14:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80266F14
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80266F18
  if (crb(c,2)) { goto L_80266F4C; } // 80266F1C
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 80266F20
  c->r[3]=c->r[27]|c->r[27]; // 80266F24
  c->r[15]=c->r[19]+c->r[0]; // 80266F28
  c->r[4]=c->r[26]|c->r[26]; // 80266F2C
  c->r[5]=c->r[25]|c->r[25]; // 80266F30
  c->r[6]=c->r[24]|c->r[24]; // 80266F34
  c->r[7]=c->r[23]|c->r[23]; // 80266F38
  c->r[8]=c->r[31]|c->r[31]; // 80266F3C
  c->lr=0x80266F44u; f_8026B39C(c); // 80266F40
  W32(c->r[15]+0x00000000u,c->r[3]); // 80266F44
  goto L_80266F74; // 80266F48
L_80266F4C:;
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 80266F4C
  c->r[3]=c->r[27]|c->r[27]; // 80266F50
  c->r[15]=c->r[19]+c->r[0]; // 80266F54
  c->r[4]=c->r[26]|c->r[26]; // 80266F58
  c->r[5]=c->r[25]|c->r[25]; // 80266F5C
  c->r[6]=c->r[24]|c->r[24]; // 80266F60
  c->r[7]=c->r[23]|c->r[23]; // 80266F64
  c->r[8]=c->r[31]|c->r[31]; // 80266F68
  c->lr=0x80266F70u; f_8026A708(c); // 80266F6C
  W32(c->r[15]+0x00000000u,c->r[3]); // 80266F70
L_80266F74:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 80266F74
  cmps(c,0,(int32_t)c->r[3],0); // 80266F78
  if (crb(c,2)) { goto L_80266F88; } // 80266F7C
  c->r[3]=R32(c->r[3]+0x00000018u); // 80266F80
  goto L_80266F8C; // 80266F84
L_80266F88:;
  c->r[3]=0u+0x00000000u; // 80266F88
L_80266F8C:;
  c->r[0]=R32(c->r[15]+0x00000000u); // 80266F8C
  cmps(c,0,(int32_t)c->r[22],0); // 80266F90
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 80266F94
  c->r[0]=c->r[0]|c->r[3]; // 80266F98
  W32(c->r[15]+0x00000000u,c->r[0]); // 80266F9C
  if (crb(c,2)) { goto L_80266FF0; } // 80266FA0
  c->r[0]=R16(c->r[22]+0x00000006u); // 80266FA4
  c->r[3]=R32(c->r[21]+0x00000000u); // 80266FA8
  cmpu(c,0,c->r[28],c->r[0]); // 80266FAC
  if (!crb(c,2)) { goto L_80266FF0; } // 80266FB0
  c->r[0]=R8(c->r[22]+0x00000004u); // 80266FB4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80266FB8
  if (crb(c,2)) { goto L_80266FF0; } // 80266FBC
  W32(c->r[1]+0x00000018u,c->r[27]); // 80266FC0
  c->r[6]=c->r[22]|c->r[22]; // 80266FC4
  c->r[4]=c->r[1]+0x00000018u; // 80266FC8
  c->r[5]=c->r[1]+0x0000000Cu; // 80266FCC
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 80266FD0
  W32(c->r[1]+0x00000020u,c->r[15]); // 80266FD4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80266FD8
  c->r[3]=R32(c->r[22]+0x00000000u); // 80266FDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80266FE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 80266FE4
  c->ctr=c->r[12]; // 80266FE8
  if (true) { c->lr=0x80266FF0u; dispatch(c,c->ctr); } // 80266FEC
L_80266FF0:;
  c->r[20]=c->r[20]+0x00000005u; // 80266FF0
  goto L_80267070; // 80266FF4
L_80266FF8:;
  c->r[0]=R8(c->r[20]+0x00000001u); // 80266FF8
  c->r[29]=c->r[29]+0x00000001u; // 80266FFC
  c->r[3]=R8(c->r[20]+0x00000003u); // 80267000
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 80267004
  c->r[4]=R8(c->r[20]+0x00000002u); // 80267008
  c->r[0]=R8(c->r[20]+0x00000004u); // 8026700C
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80267010
  c->r[15]=c->r[5]+c->r[4]; // 80267014
  c->r[23]=c->r[3]+c->r[0]; // 80267018
  W32(c->r[30]+c->r[17],c->r[15]); // 8026701C
  c->r[4]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80267020
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 80267024
  c->r[4]=R32(c->r[19]+c->r[4]); // 80267028
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)48); // 8026702C
  c->r[17]=c->r[17]+0x00000004u; // 80267030
  W32(c->r[19]+c->r[0],c->r[4]); // 80267034
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 80267038
  c->r[3]=c->r[18]+c->r[3]; // 8026703C
  c->r[4]=c->r[18]+c->r[0]; // 80267040
  c->lr=0x80267048u; f_80167FC4(c); // 80267044
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 80267048
  c->r[20]=c->r[20]+0x00000005u; // 8026704C
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)12); // 80267050
  {uint32_t ea=c->r[3]+c->r[16]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 80267054
  c->r[4]=c->r[16]+c->r[0]; // 80267058
  {uint32_t ea=c->r[16]+c->r[0]; WF32(ea,c->f[0]);} // 8026705C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267060
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80267064
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267068
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8026706C
L_80267070:;
  c->r[0]=R8(c->r[20]+0x00000000u); // 80267070
  cmpu(c,0,c->r[0],0x00000001u); // 80267074
  if (!crb(c,2)) { IRQCHK(c); goto L_80266C38; } // 80267078
  {uint32_t ea=c->r[2]+0xFFFF9D08u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026707C
  c->r[14]=0u+0x00000000u; // 80267080
  goto L_802670D4; // 80267084
L_80267088:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80267088
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8026708C
  {uint32_t ea=c->r[16]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80267090
  c->r[3]=c->r[16]+c->r[0]; // 80267094
  fcmp(c,0,c->f[31],c->f[0]); // 80267098
  if (!crb(c,2)) { goto L_802670B8; } // 8026709C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802670A0
  fcmp(c,0,c->f[31],c->f[0]); // 802670A4
  if (!crb(c,2)) { goto L_802670B8; } // 802670A8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802670AC
  fcmp(c,0,c->f[31],c->f[0]); // 802670B0
  if (crb(c,2)) { goto L_802670CC; } // 802670B4
L_802670B8:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 802670B8
  c->r[5]=c->r[16]+c->r[0]; // 802670BC
  c->r[3]=c->r[18]+c->r[3]; // 802670C0
  c->r[4]=c->r[3]|c->r[3]; // 802670C4
  c->lr=0x802670CCu; f_80284A08(c); // 802670C8
L_802670CC:;
  c->r[30]=c->r[30]+0x00000004u; // 802670CC
  c->r[14]=c->r[14]+0x00000001u; // 802670D0
L_802670D4:;
  cmpu(c,0,c->r[14],c->r[29]); // 802670D4
  if (crb(c,0)) { IRQCHK(c); goto L_80267088; } // 802670D8
  cmps(c,0,(int32_t)c->r[22],0); // 802670DC
  if (crb(c,2)) { goto L_80267118; } // 802670E0
  c->r[0]=R8(c->r[22]+0x00000004u); // 802670E4
  c->r[3]=R32(c->r[21]+0x00000000u); // 802670E8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802670EC
  if (crb(c,2)) { goto L_80267118; } // 802670F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 802670F4
  c->r[4]=c->r[18]|c->r[18]; // 802670F8
  c->r[6]=c->r[22]|c->r[22]; // 802670FC
  c->r[5]=c->r[1]+0x00000008u; // 80267100
  c->r[3]=R32(c->r[22]+0x00000000u); // 80267104
  c->r[12]=R32(c->r[3]+0x00000000u); // 80267108
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026710C
  c->ctr=c->r[12]; // 80267110
  if (true) { c->lr=0x80267118u; dispatch(c,c->ctr); } // 80267114
L_80267118:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 80267118
  c->r[11]=c->r[1]+0x000000C0u; // 8026711C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 80267120
  c->lr=0x80267128u; f_80185EEC(c); // 80267124
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80267128
  c->lr=c->r[0]; // 8026712C
  c->r[1]=c->r[1]+0x000000D0u; // 80267130
  return; // 80267134
}

// fn_80267138
void f_80267138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267138
  c->r[0]=c->lr; // 8026713C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80267140
  c->r[11]=c->r[1]+0x00000030u; // 80267144
  c->lr=0x8026714Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80267148
  cmps(c,0,(int32_t)c->r[6],0); // 8026714C
  c->r[26]=c->r[3]|c->r[3]; // 80267150
  c->r[27]=c->r[4]|c->r[4]; // 80267154
  c->r[28]=c->r[5]|c->r[5]; // 80267158
  c->r[29]=c->r[6]|c->r[6]; // 8026715C
  if (!crb(c,2)) { goto L_8026717C; } // 80267160
  c->r[3]=c->r[28]|c->r[28]; // 80267164
  c->r[4]=c->r[13]+0xFFFF9728u; // 80267168
  c->lr=0x80267170u; f_802513D0(c); // 8026716C
  cmps(c,0,(int32_t)c->r[3],0); // 80267170
  c->r[29]=c->r[3]|c->r[3]; // 80267174
  if (crb(c,2)) { goto L_80267614; } // 80267178
L_8026717C:;
  c->lr=0x80267180u; f_80266B5C(c); // 8026717C
  c->r[30]=c->r[3]|c->r[3]; // 80267180
  c->r[31]=0u+0xF0000000u; // 80267184
  goto L_802673F0; // 80267188
L_8026718C:;
  cmpu(c,0,c->r[0],0x00000003u); // 8026718C
  if (!crb(c,2)) { goto L_802673B0; } // 80267190
  {uint32_t ea=c->r[2]+0xFFFF9D0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80267194
  c->r[3]=R8(c->r[29]+0x00000001u); // 80267198
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8026719C
  c->r[0]=R8(c->r[29]+0x00000002u); // 802671A0
  c->r[11]=R8(c->r[29]+0x00000003u); // 802671A4
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 802671A8
  c->r[10]=c->r[3]+c->r[0]; // 802671AC
  c->r[29]=c->r[29]+0x00000004u; // 802671B0
  c->r[9]=rotl(c->r[10],2)&0xFFFFFFFCu; // 802671B4
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802671B8
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 802671BC
  cmpu(c,0,c->r[11],0x00000000u); // 802671C0
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802671C4
  W32(c->r[27]+c->r[9],c->r[31]); // 802671C8
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 802671CC
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 802671D0
  if (!crb(c,1)) { goto L_8026738C; } // 802671D4
  c->r[0]=rotl(c->r[11],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 802671D8
  c->ctr=c->r[0]; // 802671DC
  if (crb(c,2)) { goto L_802672FC; } // 802671E0
L_802671E4:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 802671E4
  c->r[0]=R8(c->r[29]+0x00000001u); // 802671E8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 802671EC
  c->r[5]=R8(c->r[29]+0x00000003u); // 802671F0
  c->r[0]=c->r[3]+c->r[0]; // 802671F4
  c->r[3]=R32(c->r[27]+c->r[9]); // 802671F8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802671FC
  c->r[7]=R8(c->r[29]+0x00000005u); // 80267200
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80267204
  c->r[8]=R8(c->r[29]+0x00000004u); // 80267208
  c->r[0]=R32(c->r[27]+c->r[0]); // 8026720C
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 80267210
  c->r[12]=c->r[30]+c->r[4]; // 80267214
  c->r[6]=R8(c->r[29]+0x00000002u); // 80267218
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 8026721C
  c->r[0]=c->r[3]&c->r[0]; // 80267220
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 80267224
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80267228
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 8026722C
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80267230
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 80267234
  c->r[4]=c->r[7]|c->r[5]; // 80267238
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 8026723C
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 80267240
  W32(c->r[1]+0x00000008u,c->r[4]); // 80267244
  W32(c->r[27]+c->r[9],c->r[0]); // 80267248
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026724C
  c->r[3]=R8(c->r[29]+0x00000006u); // 80267250
  c->r[5]=R8(c->r[29]+0x00000009u); // 80267254
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80267258
  c->r[0]=R8(c->r[29]+0x00000007u); // 8026725C
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80267260
  c->r[8]=R8(c->r[29]+0x0000000Au); // 80267264
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 80267268
  c->r[0]=c->r[3]+c->r[0]; // 8026726C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80267270
  c->r[6]=R8(c->r[29]+0x00000008u); // 80267274
  c->r[7]=R8(c->r[29]+0x0000000Bu); // 80267278
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026727C
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80267280
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80267284
  c->r[12]=c->r[30]+c->r[4]; // 80267288
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8026728C
  c->r[4]=c->r[7]|c->r[5]; // 80267290
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 80267294
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 80267298
  W32(c->r[1]+0x00000008u,c->r[4]); // 8026729C
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 802672A0
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 802672A4
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 802672A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802672AC
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 802672B0
  c->r[29]=c->r[29]+0x0000000Cu; // 802672B4
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 802672B8
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802672BC
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 802672C0
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 802672C4
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 802672C8
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 802672CC
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 802672D0
  c->r[3]=R32(c->r[27]+c->r[9]); // 802672D4
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 802672D8
  c->r[0]=R32(c->r[27]+c->r[0]); // 802672DC
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 802672E0
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 802672E4
  c->r[0]=c->r[3]&c->r[0]; // 802672E8
  W32(c->r[27]+c->r[9],c->r[0]); // 802672EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802671E4; } // 802672F0
  c->r[11]=c->r[11]&0x00000001u; cr0(c,c->r[11]); // 802672F4
  if (crb(c,2)) { goto L_8026738C; } // 802672F8
L_802672FC:;
  c->ctr=c->r[11]; // 802672FC
L_80267300:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 80267300
  c->r[0]=R8(c->r[29]+0x00000001u); // 80267304
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80267308
  c->r[5]=R8(c->r[29]+0x00000003u); // 8026730C
  c->r[0]=c->r[3]+c->r[0]; // 80267310
  c->r[8]=R8(c->r[29]+0x00000004u); // 80267314
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80267318
  c->r[6]=R8(c->r[29]+0x00000002u); // 8026731C
  c->r[7]=R8(c->r[29]+0x00000005u); // 80267320
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 80267324
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80267328
  c->r[3]=R32(c->r[27]+c->r[9]); // 8026732C
  c->r[12]=c->r[30]+c->r[4]; // 80267330
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80267334
  c->r[4]=c->r[7]|c->r[5]; // 80267338
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026733C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80267340
  c->r[29]=c->r[29]+0x00000006u; // 80267344
  c->r[0]=R32(c->r[27]+c->r[0]); // 80267348
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 8026734C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 80267350
  c->r[0]=c->r[3]&c->r[0]; // 80267354
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 80267358
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 8026735C
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80267360
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 80267364
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80267368
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 8026736C
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 80267370
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 80267374
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 80267378
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 8026737C
  W32(c->r[27]+c->r[9],c->r[0]); // 80267380
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 80267384
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80267300; } // 80267388
L_8026738C:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)48); // 8026738C
  c->r[3]=c->r[26]+c->r[0]; // 80267390
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80267394
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 80267398
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 8026739C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 802673A0
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,0,0);} // 802673A4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,5,ea,0,0);} // 802673A8
  goto L_802673F0; // 802673AC
L_802673B0:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 802673B0
  c->r[3]=c->r[28]|c->r[28]; // 802673B4
  c->r[4]=R8(c->r[29]+0x00000003u); // 802673B8
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 802673BC
  c->r[5]=R8(c->r[29]+0x00000002u); // 802673C0
  c->r[0]=R8(c->r[29]+0x00000004u); // 802673C4
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 802673C8
  c->r[25]=c->r[6]+c->r[5]; // 802673CC
  c->r[4]=c->r[4]+c->r[0]; // 802673D0
  c->lr=0x802673D8u; f_802514FC(c); // 802673D4
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)48); // 802673D8
  c->r[4]=c->r[3]+0x000000A0u; // 802673DC
  c->r[3]=c->r[26]+c->r[0]; // 802673E0
  c->r[5]=c->r[30]+c->r[0]; // 802673E4
  c->lr=0x802673ECu; f_80167FF8(c); // 802673E8
  c->r[29]=c->r[29]+0x00000005u; // 802673EC
L_802673F0:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 802673F0
  cmpu(c,0,c->r[0],0x00000001u); // 802673F4
  if (!crb(c,2)) { IRQCHK(c); goto L_8026718C; } // 802673F8
  c->r[3]=R32(c->r[28]+0x00000000u); // 802673FC
  c->r[0]=R8(c->r[3]+0x0000006Fu); // 80267400
  c->r[26]=c->r[3]+0x0000004Cu; // 80267404
  cmps(c,0,(int32_t)c->r[0],1); // 80267408
  if (crb(c,2)) { goto L_80267430; } // 8026740C
  if (!crb(c,0)) { goto L_80267420; } // 80267410
  cmps(c,0,(int32_t)c->r[0],0); // 80267414
  if (!crb(c,0)) { goto L_80267614; } // 80267418
  goto L_80267614; // 8026741C
L_80267420:;
  cmps(c,0,(int32_t)c->r[0],3); // 80267420
  if (!crb(c,0)) { goto L_80267614; } // 80267424
  goto L_80267524; // 80267428
  goto L_80267614; // 8026742C
L_80267430:;
  c->r[0]=R32(c->r[26]+0x00000024u); // 80267430
  c->r[3]=c->r[28]|c->r[28]; // 80267434
  c->r[28]=R32(c->r[26]+c->r[0]); // 80267438
  c->lr=0x80267440u; f_80251550(c); // 8026743C
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 80267440
  c->r[0]=c->r[28]-c->r[3]; // 80267444
  c->r[6]=c->r[4]-c->r[0]; // 80267448
  cmpu(c,1,c->r[6],c->r[4]); // 8026744C
  if (!crb(c,4)) { goto L_80267614; } // 80267450
  c->r[0]=c->r[4]-c->r[6]; // 80267454
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 80267458
  cmpu(c,0,c->r[0],0x00000008u); // 8026745C
  if (!crb(c,1)) { goto L_802674F4; } // 80267460
  if (crb(c,5)) { goto L_802674F4; } // 80267464
  c->r[0]=c->r[5]+0x00000007u; // 80267468
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8026746C
  c->r[0]=c->r[0]-c->r[6]; // 80267470
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80267474
  c->r[3]=c->r[27]+c->r[3]; // 80267478
  c->ctr=c->r[0]; // 8026747C
  cmpu(c,0,c->r[6],c->r[5]); // 80267480
  if (!crb(c,0)) { goto L_802674F4; } // 80267484
L_80267488:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80267488
  c->r[6]=c->r[6]+0x00000008u; // 8026748C
  c->r[0]=c->r[0]|0x30000000u; // 80267490
  W32(c->r[3]+0x00000000u,c->r[0]); // 80267494
  c->r[0]=R32(c->r[3]+0x00000004u); // 80267498
  c->r[0]=c->r[0]|0x30000000u; // 8026749C
  W32(c->r[3]+0x00000004u,c->r[0]); // 802674A0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802674A4
  c->r[0]=c->r[0]|0x30000000u; // 802674A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802674AC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802674B0
  c->r[0]=c->r[0]|0x30000000u; // 802674B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802674B8
  c->r[0]=R32(c->r[3]+0x00000010u); // 802674BC
  c->r[0]=c->r[0]|0x30000000u; // 802674C0
  W32(c->r[3]+0x00000010u,c->r[0]); // 802674C4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802674C8
  c->r[0]=c->r[0]|0x30000000u; // 802674CC
  W32(c->r[3]+0x00000014u,c->r[0]); // 802674D0
  c->r[0]=R32(c->r[3]+0x00000018u); // 802674D4
  c->r[0]=c->r[0]|0x30000000u; // 802674D8
  W32(c->r[3]+0x00000018u,c->r[0]); // 802674DC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802674E0
  c->r[0]=c->r[0]|0x30000000u; // 802674E4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802674E8
  c->r[3]=c->r[3]+0x00000020u; // 802674EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80267488; } // 802674F0
L_802674F4:;
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802674F4
  c->r[0]=c->r[4]-c->r[6]; // 802674F8
  c->r[3]=c->r[27]+c->r[3]; // 802674FC
  c->ctr=c->r[0]; // 80267500
  cmpu(c,0,c->r[6],c->r[4]); // 80267504
  if (!crb(c,0)) { goto L_80267614; } // 80267508
L_8026750C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026750C
  c->r[0]=c->r[0]|0x30000000u; // 80267510
  W32(c->r[3]+0x00000000u,c->r[0]); // 80267514
  c->r[3]=c->r[3]+0x00000004u; // 80267518
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026750C; } // 8026751C
  goto L_80267614; // 80267520
L_80267524:;
  c->r[0]=R32(c->r[26]+0x00000024u); // 80267524
  c->r[3]=c->r[28]|c->r[28]; // 80267528
  c->r[28]=R32(c->r[26]+c->r[0]); // 8026752C
  c->lr=0x80267534u; f_80251550(c); // 80267530
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 80267534
  c->r[0]=c->r[28]-c->r[3]; // 80267538
  c->r[6]=c->r[4]-c->r[0]; // 8026753C
  cmpu(c,1,c->r[6],c->r[4]); // 80267540
  if (!crb(c,4)) { goto L_80267614; } // 80267544
  c->r[0]=c->r[4]-c->r[6]; // 80267548
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 8026754C
  cmpu(c,0,c->r[0],0x00000008u); // 80267550
  if (!crb(c,1)) { goto L_802675E8; } // 80267554
  if (crb(c,5)) { goto L_802675E8; } // 80267558
  c->r[0]=c->r[5]+0x00000007u; // 8026755C
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80267560
  c->r[0]=c->r[0]-c->r[6]; // 80267564
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80267568
  c->r[3]=c->r[27]+c->r[3]; // 8026756C
  c->ctr=c->r[0]; // 80267570
  cmpu(c,0,c->r[6],c->r[5]); // 80267574
  if (!crb(c,0)) { goto L_802675E8; } // 80267578
L_8026757C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026757C
  c->r[6]=c->r[6]+0x00000008u; // 80267580
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 80267584
  W32(c->r[3]+0x00000000u,c->r[0]); // 80267588
  c->r[0]=R32(c->r[3]+0x00000004u); // 8026758C
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 80267590
  W32(c->r[3]+0x00000004u,c->r[0]); // 80267594
  c->r[0]=R32(c->r[3]+0x00000008u); // 80267598
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 8026759C
  W32(c->r[3]+0x00000008u,c->r[0]); // 802675A0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802675A4
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 802675A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802675AC
  c->r[0]=R32(c->r[3]+0x00000010u); // 802675B0
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 802675B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 802675B8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802675BC
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 802675C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 802675C4
  c->r[0]=R32(c->r[3]+0x00000018u); // 802675C8
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 802675CC
  W32(c->r[3]+0x00000018u,c->r[0]); // 802675D0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802675D4
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 802675D8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802675DC
  c->r[3]=c->r[3]+0x00000020u; // 802675E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026757C; } // 802675E4
L_802675E8:;
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802675E8
  c->r[0]=c->r[4]-c->r[6]; // 802675EC
  c->r[3]=c->r[27]+c->r[3]; // 802675F0
  c->ctr=c->r[0]; // 802675F4
  cmpu(c,0,c->r[6],c->r[4]); // 802675F8
  if (!crb(c,0)) { goto L_80267614; } // 802675FC
L_80267600:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80267600
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 80267604
  W32(c->r[3]+0x00000000u,c->r[0]); // 80267608
  c->r[3]=c->r[3]+0x00000004u; // 8026760C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80267600; } // 80267610
L_80267614:;
  c->r[11]=c->r[1]+0x00000030u; // 80267614
  c->lr=0x8026761Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80267618
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026761C
  c->lr=c->r[0]; // 80267620
  c->r[1]=c->r[1]+0x00000030u; // 80267624
  return; // 80267628
}

// GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp
void f_8026762C(Ctx* __restrict c) {
  trace_call(0x8026762Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026762C
  c->r[0]=c->lr; // 80267630
  W32(c->r[1]+0x00000134u,c->r[0]); // 80267634
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 80267638
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 8026763C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 80267640
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 80267644
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 80267648
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 8026764C
  c->r[11]=c->r[1]+0x00000100u; // 80267650
  c->lr=0x80267658u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80267654
  c->r[6]=R32(c->r[3]+0x00000000u); // 80267658
  c->r[23]=c->r[3]|c->r[3]; // 8026765C
  c->r[24]=c->r[4]|c->r[4]; // 80267660
  c->r[25]=c->r[5]|c->r[5]; // 80267664
  cmps(c,0,(int32_t)c->r[6],0); // 80267668
  if (crb(c,2)) { goto L_8026767C; } // 8026766C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80267670
  cmps(c,0,(int32_t)c->r[0],0); // 80267674
  if (!crb(c,2)) { goto L_80267684; } // 80267678
L_8026767C:;
  c->r[3]=0u+0x00000000u; // 8026767C
  goto L_80267B18; // 80267680
L_80267684:;
  c->r[0]=c->r[6]+0x0000001Cu; // 80267684
  c->r[3]=c->r[1]+0x00000010u; // 80267688
  W32(c->r[1]+0x00000010u,c->r[0]); // 8026768C
  c->r[5]=c->r[1]+0x00000068u; // 80267690
  c->r[6]=c->r[1]+0x0000000Cu; // 80267694
  c->r[4]=0u+0x00000001u; // 80267698
  c->lr=0x802676A0u; f_80253728(c); // 8026769C
  c->r[3]=c->r[1]+0x00000010u; // 802676A0
  c->r[5]=c->r[1]+0x0000006Cu; // 802676A4
  c->r[6]=c->r[1]+0x0000000Du; // 802676A8
  c->r[4]=0u+0x00000002u; // 802676AC
  c->lr=0x802676B4u; f_80253728(c); // 802676B0
  c->r[3]=c->r[1]+0x00000010u; // 802676B4
  c->r[5]=c->r[1]+0x00000070u; // 802676B8
  c->r[6]=c->r[1]+0x0000000Eu; // 802676BC
  c->r[4]=0u+0x00000003u; // 802676C0
  c->lr=0x802676C8u; f_80253728(c); // 802676C4
  c->r[0]=R32(c->r[1]+0x00000068u); // 802676C8
  cmps(c,0,(int32_t)c->r[0],0); // 802676CC
  if (!crb(c,2)) { goto L_802676F4; } // 802676D0
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 802676D4
  cmps(c,0,(int32_t)c->r[0],0); // 802676D8
  if (!crb(c,2)) { goto L_802676F4; } // 802676DC
  c->r[0]=R32(c->r[1]+0x00000070u); // 802676E0
  cmps(c,0,(int32_t)c->r[0],0); // 802676E4
  if (!crb(c,2)) { goto L_802676F4; } // 802676E8
  c->r[3]=0u+0x00000000u; // 802676EC
  goto L_80267B18; // 802676F0
L_802676F4:;
  c->r[29]=0u+0x00000000u; // 802676F4
  c->lr=0x802676FCu; f_80262DAC(c); // 802676F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802676FC
  c->r[27]=c->r[3]|c->r[3]; // 80267700
  c->r[12]=R32(c->r[12]+0x00000010u); // 80267704
  c->ctr=c->r[12]; // 80267708
  if (true) { c->lr=0x80267710u; dispatch(c,c->ctr); } // 8026770C
  {uint32_t ea=c->r[2]+0xFFFF9D14u; c->f[29]=c->ps1[29]=RF32(ea);} // 80267710
  c->r[31]=c->r[1]+0x00000068u; // 80267714
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[30]=c->ps1[30]=RF32(ea);} // 80267718
  c->r[30]=c->r[1]+0x0000000Cu; // 8026771C
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[31]=c->ps1[31]=RF32(ea);} // 80267720
  c->r[28]=0u+0x00000000u; // 80267724
L_80267728:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80267728
  c->r[26]=c->r[28]+0x00000001u; // 8026772C
  cmps(c,0,(int32_t)c->r[0],0); // 80267730
  if (crb(c,2)) { goto L_80267B00; } // 80267734
  cmps(c,0,(int32_t)c->r[29],0); // 80267738
  if (!crb(c,2)) { goto L_8026794C; } // 8026773C
  c->r[3]=R32(c->r[25]+0x00000000u); // 80267740
  c->r[29]=0u+0x00000001u; // 80267744
  c->r[3]=R32(c->r[3]+0x00000008u); // 80267748
  cmps(c,0,(int32_t)c->r[3],0); // 8026774C
  if (crb(c,0)) { goto L_80267940; } // 80267750
  c->r[4]=R32(c->r[24]+0x00000000u); // 80267754
  cmps(c,0,(int32_t)c->r[4],0); // 80267758
  if (crb(c,2)) { goto L_80267768; } // 8026775C
  c->r[0]=R32(c->r[4]+0x00000010u); // 80267760
  goto L_8026776C; // 80267764
L_80267768:;
  c->r[0]=0u+0x00000000u; // 80267768
L_8026776C:;
  cmpu(c,0,c->r[3],c->r[0]); // 8026776C
  if (!crb(c,2)) { goto L_802677C4; } // 80267770
  c->lr=0x80267778u; f_80262CBC(c); // 80267774
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267778
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8026777C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267780
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 80267784
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267788
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 8026778C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80267790
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 80267794
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267798
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8026779C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802677A0
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 802677A4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802677A8
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 802677AC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802677B0
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 802677B4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802677B8
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 802677BC
  goto L_8026787C; // 802677C0
L_802677C4:;
  c->r[3]=c->r[23]|c->r[23]; // 802677C4
  c->lr=0x802677CCu; f_80252FD8(c); // 802677C8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802677CC
  c->r[6]=c->r[3]+0x0000004Cu; // 802677D0
  c->r[4]=R32(c->r[25]+0x00000000u); // 802677D4
  c->r[3]=c->r[1]+0x00000008u; // 802677D8
  c->r[5]=R32(c->r[6]+0x00000024u); // 802677DC
  c->r[0]=R32(c->r[4]+0x00000008u); // 802677E0
  c->r[4]=c->r[6]+c->r[5]; // 802677E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802677E8
  c->r[4]=c->r[4]+c->r[0]; // 802677EC
  c->r[4]=R32(c->r[4]+0x00000004u); // 802677F0
  c->lr=0x802677F8u; f_802514A8(c); // 802677F4
  c->r[4]=R32(c->r[24]+0x00000000u); // 802677F8
  c->r[5]=c->r[1]+0x000000A8u; // 802677FC
  c->r[3]=c->r[3]+0x000000A0u; // 80267800
  c->r[4]=c->r[4]+0x00000070u; // 80267804
  c->lr=0x8026780Cu; f_80167FF8(c); // 80267808
  c->r[3]=R32(c->r[25]+0x00000000u); // 8026780C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80267810
  c->lr=0x80267818u; f_80262CBC(c); // 80267814
  {uint32_t ea=c->r[3]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 80267818
  c->r[4]=c->r[1]+0x000000A8u; // 8026781C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80267820
  c->r[5]=c->r[4]|c->r[4]; // 80267824
  {uint32_t ea=c->r[3]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 80267828
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026782C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80267830
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80267834
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80267838
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026783C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267840
  c->r[3]=c->r[1]+0x00000078u; // 80267844
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80267848
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 8026784C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80267850
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[31]);} // 80267854
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 80267858
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 8026785C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[5]);} // 80267860
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 80267864
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[6]);} // 80267868
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[7]);} // 8026786C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[8]);} // 80267870
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[31]);} // 80267874
  c->lr=0x8026787Cu; f_80167FF8(c); // 80267878
L_8026787C:;
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026787C
  c->r[3]=c->r[1]+0x0000005Cu; // 80267880
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80267884
  c->r[4]=c->r[3]|c->r[3]; // 80267888
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026788C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[31]);} // 80267890
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[31]);} // 80267894
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[31]);} // 80267898
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8026789C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 802678A0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 802678A4
  c->lr=0x802678ACu; f_80168E0C(c); // 802678A8
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802678AC
  c->r[3]=c->r[1]+0x00000050u; // 802678B0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 802678B4
  c->r[4]=c->r[3]|c->r[3]; // 802678B8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802678BC
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 802678C0
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 802678C4
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 802678C8
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 802678CC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 802678D0
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 802678D4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 802678D8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 802678DC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 802678E0
  c->lr=0x802678E8u; f_80168E0C(c); // 802678E4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 802678E8
  c->r[3]=c->r[1]+0x00000044u; // 802678EC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 802678F0
  c->r[4]=c->r[3]|c->r[3]; // 802678F4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 802678F8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 802678FC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80267900
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80267904
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 80267908
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8026790C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80267910
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 80267914
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 80267918
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[5]);} // 8026791C
  c->lr=0x80267924u; f_80168E0C(c); // 80267920
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80267924
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80267928
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026792C
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[2]);} // 80267930
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80267934
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 80267938
  goto L_8026794C; // 8026793C
L_80267940:;
  c->lr=0x80267944u; f_80263060(c); // 80267940
  c->r[4]=c->r[1]+0x000000A8u; // 80267944
  c->lr=0x8026794Cu; f_80167FC4(c); // 80267948
L_8026794C:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 8026794C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80267950
  c->lr=0x80267958u; f_80262F28(c); // 80267954
  cmps(c,0,(int32_t)c->r[3],0); // 80267958
  c->r[22]=c->r[3]|c->r[3]; // 8026795C
  if (crb(c,2)) { goto L_80267ADC; } // 80267960
  c->r[4]=R32(c->r[3]+0x00000000u); // 80267964
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80267968
  if (crb(c,2)) { goto L_80267ADC; } // 8026796C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80267970
  if (crb(c,2)) { goto L_802679FC; } // 80267974
  c->r[4]=c->r[1]+0x00000038u; // 80267978
  c->lr=0x80267980u; f_80276FE0(c); // 8026797C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267980
  fcmp(c,0,c->f[31],c->f[0]); // 80267984
  if (!crb(c,2)) { goto L_80267AB4; } // 80267988
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026798C
  fcmp(c,0,c->f[31],c->f[0]); // 80267990
  if (!crb(c,2)) { goto L_80267AB4; } // 80267994
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267998
  fcmp(c,0,c->f[31],c->f[0]); // 8026799C
  if (!crb(c,2)) { goto L_80267AB4; } // 802679A0
  c->r[3]=c->r[22]|c->r[22]; // 802679A4
  c->r[4]=c->r[1]+0x00000038u; // 802679A8
  c->lr=0x802679B0u; f_80276FC4(c); // 802679AC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802679B0
  c->r[3]=c->r[1]+0x00000038u; // 802679B4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802679B8
  c->r[4]=c->r[3]|c->r[3]; // 802679BC
  c->f[2]=-c->f[0]; // 802679C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802679C4
  c->f[3]=-c->f[1]; // 802679C8
  c->f[4]=-c->f[0]; // 802679CC
  c->f[0]=c->ps1[0]=S(c->f[2]); // 802679D0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 802679D4
  c->f[1]=c->ps1[1]=S(c->f[3]); // 802679D8
  c->f[2]=c->ps1[2]=S(c->f[4]); // 802679DC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 802679E0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 802679E4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 802679E8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 802679EC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 802679F0
  c->lr=0x802679F8u; f_80168E0C(c); // 802679F4
  goto L_80267AB4; // 802679F8
L_802679FC:;
  c->r[3]=0u+0x00000000u; // 802679FC
  if (!crb(c,2)) { goto L_80267A10; } // 80267A00
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80267A04
  if (!crb(c,2)) { goto L_80267A10; } // 80267A08
  c->r[3]=0u+0x00000001u; // 80267A0C
L_80267A10:;
  cmps(c,0,(int32_t)c->r[3],0); // 80267A10
  if (crb(c,2)) { goto L_80267A70; } // 80267A14
  c->r[3]=c->r[22]|c->r[22]; // 80267A18
  c->r[4]=c->r[1]+0x00000038u; // 80267A1C
  c->lr=0x80267A24u; f_80276FC4(c); // 80267A20
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267A24
  c->r[3]=c->r[1]+0x00000038u; // 80267A28
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80267A2C
  c->r[4]=c->r[3]|c->r[3]; // 80267A30
  c->f[2]=-c->f[0]; // 80267A34
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267A38
  c->f[3]=-c->f[1]; // 80267A3C
  c->f[4]=-c->f[0]; // 80267A40
  c->f[0]=c->ps1[0]=S(c->f[2]); // 80267A44
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 80267A48
  c->f[1]=c->ps1[1]=S(c->f[3]); // 80267A4C
  c->f[2]=c->ps1[2]=S(c->f[4]); // 80267A50
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80267A54
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80267A58
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80267A5C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80267A60
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80267A64
  c->lr=0x80267A6Cu; f_80168E0C(c); // 80267A68
  goto L_80267AB4; // 80267A6C
L_80267A70:;
  c->r[3]=c->r[22]|c->r[22]; // 80267A70
  c->r[4]=c->r[1]+0x0000002Cu; // 80267A74
  c->lr=0x80267A7Cu; f_80276FE0(c); // 80267A78
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80267A7C
  c->r[3]=c->r[1]+0x00000038u; // 80267A80
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80267A84
  c->r[4]=c->r[3]|c->r[3]; // 80267A88
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[0]); // 80267A8C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80267A90
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80267A94
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80267A98
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80267A9C
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 80267AA0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80267AA4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80267AA8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80267AAC
  c->lr=0x80267AB4u; f_80168E0C(c); // 80267AB0
L_80267AB4:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80267AB4
  c->r[3]=c->r[27]|c->r[27]; // 80267AB8
  c->r[4]=c->r[26]|c->r[26]; // 80267ABC
  c->r[5]=c->r[1]+0x00000038u; // 80267AC0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80267AC4
  c->r[6]=c->r[1]+0x000000A8u; // 80267AC8
  c->r[7]=R32(c->r[31]+0x00000000u); // 80267ACC
  c->ctr=c->r[12]; // 80267AD0
  if (true) { c->lr=0x80267AD8u; dispatch(c,c->ctr); } // 80267AD4
  goto L_80267B00; // 80267AD8
L_80267ADC:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80267ADC
  c->r[3]=c->r[27]|c->r[27]; // 80267AE0
  c->r[4]=c->r[26]|c->r[26]; // 80267AE4
  c->r[6]=c->r[1]+0x000000A8u; // 80267AE8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80267AEC
  c->r[5]=0u+0x00000000u; // 80267AF0
  c->r[7]=R32(c->r[31]+0x00000000u); // 80267AF4
  c->ctr=c->r[12]; // 80267AF8
  if (true) { c->lr=0x80267B00u; dispatch(c,c->ctr); } // 80267AFC
L_80267B00:;
  c->r[28]=c->r[28]+0x00000001u; // 80267B00
  c->r[30]=c->r[30]+0x00000001u; // 80267B04
  cmpu(c,0,c->r[28],0x00000003u); // 80267B08
  c->r[31]=c->r[31]+0x00000004u; // 80267B0C
  if (crb(c,0)) { IRQCHK(c); goto L_80267728; } // 80267B10
  c->r[3]=c->r[27]|c->r[27]; // 80267B14
L_80267B18:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 80267B18
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 80267B1C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 80267B20
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 80267B24
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 80267B28
  c->r[11]=c->r[1]+0x00000100u; // 80267B2C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 80267B30
  c->lr=0x80267B38u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80267B34
  c->r[0]=R32(c->r[1]+0x00000134u); // 80267B38
  c->lr=c->r[0]; // 80267B3C
  c->r[1]=c->r[1]+0x00000130u; // 80267B40
  return; // 80267B44
}

// SetupDraw1Mat1ShpSwap__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FPQ34nw4r3g3d16Draw1Mat1ShpSwapPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_80267B48(Ctx* __restrict c) {
  trace_call(0x80267B48u);
  c->r[6]=R32(c->r[4]+0x00000008u); // 80267B48
  cmps(c,0,(int32_t)c->r[6],0); // 80267B4C
  if (crb(c,2)) { goto L_80267B64; } // 80267B50
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)260); // 80267B54
  c->r[0]=c->r[6]+c->r[0]; // 80267B58
  W32(c->r[3]+0x00000000u,c->r[0]); // 80267B5C
  goto L_80267B6C; // 80267B60
L_80267B64:;
  c->r[0]=0u+0x00000000u; // 80267B64
  W32(c->r[3]+0x00000000u,c->r[0]); // 80267B68
L_80267B6C:;
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 80267B6C
  cmps(c,0,(int32_t)c->r[6],0); // 80267B70
  if (crb(c,2)) { goto L_80267B88; } // 80267B74
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 80267B78
  c->r[0]=c->r[6]+c->r[0]; // 80267B7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80267B80
  goto L_80267B90; // 80267B84
L_80267B88:;
  c->r[0]=0u+0x00000000u; // 80267B88
  W32(c->r[3]+0x00000004u,c->r[0]); // 80267B8C
L_80267B90:;
  c->r[6]=R32(c->r[4]+0x00000010u); // 80267B90
  cmps(c,0,(int32_t)c->r[6],0); // 80267B94
  if (crb(c,2)) { goto L_80267BAC; } // 80267B98
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)584); // 80267B9C
  c->r[0]=c->r[6]+c->r[0]; // 80267BA0
  W32(c->r[3]+0x00000028u,c->r[0]); // 80267BA4
  goto L_80267BB4; // 80267BA8
L_80267BAC:;
  c->r[0]=0u+0x00000000u; // 80267BAC
  W32(c->r[3]+0x00000028u,c->r[0]); // 80267BB0
L_80267BB4:;
  c->r[6]=R32(c->r[4]+0x00000014u); // 80267BB4
  cmps(c,0,(int32_t)c->r[6],0); // 80267BB8
  if (crb(c,2)) { goto L_80267BD0; } // 80267BBC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 80267BC0
  c->r[0]=c->r[6]+c->r[0]; // 80267BC4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80267BC8
  goto L_80267BD8; // 80267BCC
L_80267BD0:;
  c->r[0]=0u+0x00000000u; // 80267BD0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80267BD4
L_80267BD8:;
  c->r[6]=R32(c->r[4]+0x00000018u); // 80267BD8
  cmps(c,0,(int32_t)c->r[6],0); // 80267BDC
  if (crb(c,2)) { goto L_80267BF4; } // 80267BE0
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80267BE4
  c->r[0]=c->r[6]+c->r[0]; // 80267BE8
  W32(c->r[3]+0x00000008u,c->r[0]); // 80267BEC
  goto L_80267BFC; // 80267BF0
L_80267BF4:;
  c->r[0]=0u+0x00000000u; // 80267BF4
  W32(c->r[3]+0x00000008u,c->r[0]); // 80267BF8
L_80267BFC:;
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 80267BFC
  cmps(c,0,(int32_t)c->r[6],0); // 80267C00
  if (crb(c,2)) { goto L_80267C18; } // 80267C04
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80267C08
  c->r[0]=c->r[6]+c->r[0]; // 80267C0C
  W32(c->r[3]+0x00000024u,c->r[0]); // 80267C10
  goto L_80267C20; // 80267C14
L_80267C18:;
  c->r[0]=0u+0x00000000u; // 80267C18
  W32(c->r[3]+0x00000024u,c->r[0]); // 80267C1C
L_80267C20:;
  c->r[6]=R32(c->r[4]+0x00000020u); // 80267C20
  cmps(c,0,(int32_t)c->r[6],0); // 80267C24
  if (crb(c,2)) { goto L_80267C3C; } // 80267C28
  c->r[0]=rotl(c->r[5],5)&0xFFFFFFE0u; // 80267C2C
  c->r[0]=c->r[6]+c->r[0]; // 80267C30
  W32(c->r[3]+0x00000010u,c->r[0]); // 80267C34
  goto L_80267C44; // 80267C38
L_80267C3C:;
  c->r[0]=0u+0x00000000u; // 80267C3C
  W32(c->r[3]+0x00000010u,c->r[0]); // 80267C40
L_80267C44:;
  c->r[6]=R32(c->r[4]+0x00000024u); // 80267C44
  cmps(c,0,(int32_t)c->r[6],0); // 80267C48
  if (crb(c,2)) { goto L_80267C60; } // 80267C4C
  c->r[0]=rotl(c->r[5],7)&0xFFFFFF80u; // 80267C50
  c->r[0]=c->r[6]+c->r[0]; // 80267C54
  W32(c->r[3]+0x00000014u,c->r[0]); // 80267C58
  goto L_80267C68; // 80267C5C
L_80267C60:;
  c->r[0]=0u+0x00000000u; // 80267C60
  W32(c->r[3]+0x00000014u,c->r[0]); // 80267C64
L_80267C68:;
  c->r[6]=R32(c->r[4]+0x00000028u); // 80267C68
  cmps(c,0,(int32_t)c->r[6],0); // 80267C6C
  if (crb(c,2)) { goto L_80267C84; } // 80267C70
  c->r[0]=rotl(c->r[5],6)&0xFFFFFFC0u; // 80267C74
  c->r[0]=c->r[6]+c->r[0]; // 80267C78
  W32(c->r[3]+0x00000018u,c->r[0]); // 80267C7C
  goto L_80267C8C; // 80267C80
L_80267C84:;
  c->r[0]=0u+0x00000000u; // 80267C84
  W32(c->r[3]+0x00000018u,c->r[0]); // 80267C88
L_80267C8C:;
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 80267C8C
  cmps(c,0,(int32_t)c->r[6],0); // 80267C90
  if (crb(c,2)) { goto L_80267CA8; } // 80267C94
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)160); // 80267C98
  c->r[0]=c->r[6]+c->r[0]; // 80267C9C
  W32(c->r[3]+0x00000020u,c->r[0]); // 80267CA0
  goto L_80267CB0; // 80267CA4
L_80267CA8:;
  c->r[0]=0u+0x00000000u; // 80267CA8
  W32(c->r[3]+0x00000020u,c->r[0]); // 80267CAC
L_80267CB0:;
  c->r[6]=R32(c->r[4]+0x00000030u); // 80267CB0
  cmps(c,0,(int32_t)c->r[6],0); // 80267CB4
  if (crb(c,2)) { goto L_80267CCC; } // 80267CB8
  c->r[0]=rotl(c->r[5],9)&0xFFFFFE00u; // 80267CBC
  c->r[0]=c->r[6]+c->r[0]; // 80267CC0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80267CC4
  goto L_80267CD4; // 80267CC8
L_80267CCC:;
  c->r[0]=0u+0x00000000u; // 80267CCC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80267CD0
L_80267CD4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80267CD4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80267CD8
  if (crb(c,2)) { goto L_80267CF4; } // 80267CDC
  c->r[0]=0u+0x00000000u; // 80267CE0
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80267CE4
  W32(c->r[3]+0x00000030u,c->r[0]); // 80267CE8
  W32(c->r[3]+0x00000034u,c->r[0]); // 80267CEC
  return; // 80267CF0
L_80267CF4:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 80267CF4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80267CF8
  c->r[0]=R32(c->r[4]+0x00000038u); // 80267CFC
  W32(c->r[3]+0x00000030u,c->r[0]); // 80267D00
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 80267D04
  W32(c->r[3]+0x00000034u,c->r[0]); // 80267D08
  return; // 80267D0C
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCUcUl
void f_80267D10(Ctx* __restrict c) {
  trace_call(0x80267D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267D10
  c->r[0]=c->lr; // 80267D14
  W32(c->r[1]+0x00000054u,c->r[0]); // 80267D18
  c->r[11]=c->r[1]+0x00000050u; // 80267D1C
  c->lr=0x80267D24u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80267D20
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 80267D24
  c->r[24]=c->r[3]|c->r[3]; // 80267D28
  c->r[25]=c->r[4]|c->r[4]; // 80267D2C
  c->r[27]=0u+0x00000000u; // 80267D30
  c->r[26]=0u+0x00000001u; // 80267D34
  if (crb(c,2)) { goto L_80267D40; } // 80267D38
  c->r[26]=c->r[26]|0x00000008u; // 80267D3C
L_80267D40:;
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 80267D40
  if (crb(c,2)) { goto L_80267D4C; } // 80267D44
  c->r[26]=c->r[26]|0x00000010u; // 80267D48
L_80267D4C:;
  c->r[28]=c->r[26]|0x00000010u; // 80267D4C
  c->r[31]=c->r[1]+0x00000008u; // 80267D50
  c->r[30]=c->r[1]+0x0000000Cu; // 80267D54
  c->r[29]=c->r[1]+0x00000010u; // 80267D58
  goto L_80267E2C; // 80267D5C
L_80267D60:;
  c->r[0]=R8(c->r[25]+0x00000005u); // 80267D60
  c->r[3]=c->r[24]|c->r[24]; // 80267D64
  c->r[4]=R8(c->r[25]+0x00000006u); // 80267D68
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80267D6C
  c->lr=0x80267D74u; f_802514A8(c); // 80267D70
  c->r[0]=R8(c->r[25]+0x00000003u); // 80267D74
  c->r[21]=c->r[3]|c->r[3]; // 80267D78
  c->r[4]=R8(c->r[25]+0x00000004u); // 80267D7C
  c->r[3]=c->r[24]|c->r[24]; // 80267D80
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80267D84
  c->lr=0x80267D8Cu; f_80251ADC(c); // 80267D88
  cmps(c,0,(int32_t)c->r[21],0); // 80267D8C
  c->r[22]=c->r[3]|c->r[3]; // 80267D90
  if (crb(c,2)) { goto L_80267DA4; } // 80267D94
  c->r[0]=R32(c->r[21]+0x00000014u); // 80267D98
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 80267D9C
  goto L_80267DA8; // 80267DA0
L_80267DA4:;
  c->r[0]=0u+0x00000000u; // 80267DA4
L_80267DA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80267DA8
  if (crb(c,2)) { goto L_80267E28; } // 80267DAC
  c->r[0]=R32(c->r[22]+0x00000034u); // 80267DB0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80267DB4
  if (!crb(c,2)) { goto L_80267E28; } // 80267DB8
  c->r[0]=R8(c->r[25]+0x00000001u); // 80267DBC
  c->r[3]=c->r[24]|c->r[24]; // 80267DC0
  c->r[4]=R8(c->r[25]+0x00000002u); // 80267DC4
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80267DC8
  c->lr=0x80267DD0u; f_80251A00(c); // 80267DCC
  cmpu(c,0,c->r[3],c->r[27]); // 80267DD0
  W32(c->r[1]+0x00000008u,c->r[22]); // 80267DD4
  c->r[27]=c->r[3]|c->r[3]; // 80267DD8
  c->r[23]=c->r[26]|c->r[26]; // 80267DDC
  W32(c->r[1]+0x0000000Cu,c->r[21]); // 80267DE0
  W32(c->r[1]+0x00000010u,c->r[3]); // 80267DE4
  if (!crb(c,2)) { goto L_80267DF0; } // 80267DE8
  c->r[23]=c->r[28]|c->r[28]; // 80267DEC
L_80267DF0:;
  W32(c->r[1]+0x00000014u,c->r[22]); // 80267DF0
  c->r[3]=c->r[29]|c->r[29]; // 80267DF4
  c->r[4]=c->r[30]|c->r[30]; // 80267DF8
  c->r[5]=c->r[31]|c->r[31]; // 80267DFC
  W32(c->r[1]+0x00000018u,c->r[27]); // 80267E00
  c->lr=0x80267E08u; f_8026762C(c); // 80267E04
  c->r[9]=c->r[3]|c->r[3]; // 80267E08
  c->r[7]=c->r[23]|c->r[23]; // 80267E0C
  c->r[3]=c->r[1]+0x00000018u; // 80267E10
  c->r[4]=c->r[1]+0x00000014u; // 80267E14
  c->r[5]=0u+0x00000000u; // 80267E18
  c->r[6]=0u+0x00000000u; // 80267E1C
  c->r[8]=0u+0x00000000u; // 80267E20
  c->lr=0x80267E28u; f_80263FDC(c); // 80267E24
L_80267E28:;
  c->r[25]=c->r[25]+0x00000008u; // 80267E28
L_80267E2C:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 80267E2C
  cmpu(c,0,c->r[0],0x00000001u); // 80267E30
  if (!crb(c,2)) { IRQCHK(c); goto L_80267D60; } // 80267E34
  c->r[11]=c->r[1]+0x00000050u; // 80267E38
  c->lr=0x80267E40u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80267E3C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80267E40
  c->lr=c->r[0]; // 80267E44
  c->r[1]=c->r[1]+0x00000050u; // 80267E48
  return; // 80267E4C
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_80267E50(Ctx* __restrict c) {
  trace_call(0x80267E50u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267E50
  c->r[0]=c->lr; // 80267E54
  W32(c->r[1]+0x00000094u,c->r[0]); // 80267E58
  c->r[11]=c->r[1]+0x00000090u; // 80267E5C
  c->lr=0x80267E64u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80267E60
  c->r[25]=0u+0x00000000u; // 80267E64
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 80267E68
  W32(c->r[1]+0x00000020u,c->r[25]); // 80267E6C
  c->r[21]=c->r[3]|c->r[3]; // 80267E70
  c->r[22]=c->r[4]|c->r[4]; // 80267E74
  c->r[23]=c->r[5]|c->r[5]; // 80267E78
  W32(c->r[1]+0x00000024u,c->r[25]); // 80267E7C
  c->r[24]=0u+0x00000001u; // 80267E80
  W32(c->r[1]+0x00000028u,c->r[25]); // 80267E84
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 80267E88
  W32(c->r[1]+0x00000030u,c->r[25]); // 80267E8C
  W32(c->r[1]+0x00000034u,c->r[25]); // 80267E90
  W32(c->r[1]+0x00000038u,c->r[25]); // 80267E94
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 80267E98
  W32(c->r[1]+0x00000040u,c->r[25]); // 80267E9C
  W32(c->r[1]+0x00000044u,c->r[25]); // 80267EA0
  W32(c->r[1]+0x00000048u,c->r[25]); // 80267EA4
  W32(c->r[1]+0x0000004Cu,c->r[25]); // 80267EA8
  W32(c->r[1]+0x00000050u,c->r[25]); // 80267EAC
  W32(c->r[1]+0x00000054u,c->r[25]); // 80267EB0
  if (crb(c,2)) { goto L_80267EBC; } // 80267EB4
  c->r[24]=c->r[24]|0x00000008u; // 80267EB8
L_80267EBC:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 80267EBC
  if (crb(c,2)) { goto L_80267EC8; } // 80267EC0
  c->r[24]=c->r[24]|0x00000010u; // 80267EC4
L_80267EC8:;
  c->r[26]=c->r[24]|0x00000010u; // 80267EC8
  c->r[29]=c->r[1]+0x00000008u; // 80267ECC
  c->r[28]=c->r[1]+0x0000000Cu; // 80267ED0
  c->r[27]=c->r[1]+0x00000010u; // 80267ED4
  goto L_80267FF0; // 80267ED8
L_80267EDC:;
  c->r[0]=R8(c->r[22]+0x00000005u); // 80267EDC
  c->r[3]=c->r[21]|c->r[21]; // 80267EE0
  c->r[4]=R8(c->r[22]+0x00000006u); // 80267EE4
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80267EE8
  c->lr=0x80267EF0u; f_802514A8(c); // 80267EEC
  c->r[0]=R8(c->r[22]+0x00000003u); // 80267EF0
  c->r[30]=c->r[3]|c->r[3]; // 80267EF4
  c->r[4]=R8(c->r[22]+0x00000004u); // 80267EF8
  c->r[3]=c->r[21]|c->r[21]; // 80267EFC
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80267F00
  c->lr=0x80267F08u; f_80251ADC(c); // 80267F04
  c->r[4]=R32(c->r[23]+0x00000004u); // 80267F08
  c->r[31]=c->r[3]|c->r[3]; // 80267F0C
  cmps(c,0,(int32_t)c->r[4],0); // 80267F10
  if (crb(c,2)) { goto L_80267F40; } // 80267F14
  cmps(c,0,(int32_t)c->r[30],0); // 80267F18
  if (crb(c,2)) { goto L_80267F28; } // 80267F1C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80267F20
  goto L_80267F2C; // 80267F24
L_80267F28:;
  c->r[0]=0u+0x00000000u; // 80267F28
L_80267F2C:;
  c->r[3]=R8(c->r[4]+c->r[0]); // 80267F2C
  c->r[0]=0u-c->r[3]; // 80267F30
  c->r[0]=c->r[0]|c->r[3]; // 80267F34
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80267F38
  goto L_80267F58; // 80267F3C
L_80267F40:;
  cmps(c,0,(int32_t)c->r[30],0); // 80267F40
  if (crb(c,2)) { goto L_80267F54; } // 80267F44
  c->r[0]=R32(c->r[30]+0x00000014u); // 80267F48
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 80267F4C
  goto L_80267F58; // 80267F50
L_80267F54:;
  c->r[0]=0u+0x00000000u; // 80267F54
L_80267F58:;
  cmps(c,0,(int32_t)c->r[0],0); // 80267F58
  if (crb(c,2)) { goto L_80267FEC; } // 80267F5C
  c->r[0]=R32(c->r[31]+0x00000034u); // 80267F60
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80267F64
  if (!crb(c,2)) { goto L_80267FEC; } // 80267F68
  c->r[0]=R8(c->r[22]+0x00000001u); // 80267F6C
  c->r[3]=c->r[21]|c->r[21]; // 80267F70
  c->r[4]=R8(c->r[22]+0x00000002u); // 80267F74
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80267F78
  c->lr=0x80267F80u; f_80251A00(c); // 80267F7C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80267F80
  c->r[20]=c->r[3]|c->r[3]; // 80267F84
  c->r[4]=c->r[23]|c->r[23]; // 80267F88
  c->r[3]=c->r[1]+0x00000020u; // 80267F8C
  c->lr=0x80267F94u; f_80267B48(c); // 80267F90
  cmpu(c,0,c->r[20],c->r[25]); // 80267F94
  W32(c->r[1]+0x00000008u,c->r[31]); // 80267F98
  c->r[25]=c->r[24]|c->r[24]; // 80267F9C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80267FA0
  W32(c->r[1]+0x00000010u,c->r[20]); // 80267FA4
  if (!crb(c,2)) { goto L_80267FB0; } // 80267FA8
  c->r[25]=c->r[26]|c->r[26]; // 80267FAC
L_80267FB0:;
  W32(c->r[1]+0x00000014u,c->r[31]); // 80267FB0
  c->r[3]=c->r[27]|c->r[27]; // 80267FB4
  c->r[4]=c->r[28]|c->r[28]; // 80267FB8
  c->r[5]=c->r[29]|c->r[29]; // 80267FBC
  W32(c->r[1]+0x00000018u,c->r[20]); // 80267FC0
  c->lr=0x80267FC8u; f_8026762C(c); // 80267FC4
  c->r[9]=c->r[3]|c->r[3]; // 80267FC8
  c->r[7]=c->r[25]|c->r[25]; // 80267FCC
  c->r[3]=c->r[1]+0x00000018u; // 80267FD0
  c->r[4]=c->r[1]+0x00000014u; // 80267FD4
  c->r[8]=c->r[1]+0x00000020u; // 80267FD8
  c->r[5]=0u+0x00000000u; // 80267FDC
  c->r[6]=0u+0x00000000u; // 80267FE0
  c->lr=0x80267FE8u; f_80263FDC(c); // 80267FE4
  c->r[25]=c->r[20]|c->r[20]; // 80267FE8
L_80267FEC:;
  c->r[22]=c->r[22]+0x00000008u; // 80267FEC
L_80267FF0:;
  c->r[0]=R8(c->r[22]+0x00000000u); // 80267FF0
  cmpu(c,0,c->r[0],0x00000001u); // 80267FF4
  if (!crb(c,2)) { IRQCHK(c); goto L_80267EDC; } // 80267FF8
  c->r[11]=c->r[1]+0x00000090u; // 80267FFC
  c->lr=0x80268004u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80268000
  c->r[0]=R32(c->r[1]+0x00000094u); // 80268004
  c->lr=c->r[0]; // 80268008
  c->r[1]=c->r[1]+0x00000090u; // 8026800C
  return; // 80268010
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCQ54nw4r3g3d6detail7workmem4MdlZUlUl
void f_80268014(Ctx* __restrict c) {
  trace_call(0x80268014u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268014
  c->r[0]=c->lr; // 80268018
  W32(c->r[1]+0x00000054u,c->r[0]); // 8026801C
  c->r[11]=c->r[1]+0x00000050u; // 80268020
  c->lr=0x80268028u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80268024
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 80268028
  c->r[20]=c->r[3]|c->r[3]; // 8026802C
  c->r[21]=c->r[5]|c->r[5]; // 80268030
  c->r[31]=0u+0x00000000u; // 80268034
  c->r[22]=0u+0x00000001u; // 80268038
  if (crb(c,2)) { goto L_80268044; } // 8026803C
  c->r[22]=c->r[22]|0x00000008u; // 80268040
L_80268044:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 80268044
  if (crb(c,2)) { goto L_80268050; } // 80268048
  c->r[22]=c->r[22]|0x00000010u; // 8026804C
L_80268050:;
  c->r[25]=c->r[4]|c->r[4]; // 80268050
  c->r[24]=c->r[22]|0x00000010u; // 80268054
  c->r[28]=c->r[1]+0x00000008u; // 80268058
  c->r[27]=c->r[1]+0x0000000Cu; // 8026805C
  c->r[26]=c->r[1]+0x00000010u; // 80268060
  c->r[23]=0u+0x00000000u; // 80268064
  goto L_80268104; // 80268068
L_8026806C:;
  c->r[4]=R16(c->r[25]+0x0000000Au); // 8026806C
  c->r[3]=c->r[20]|c->r[20]; // 80268070
  c->lr=0x80268078u; f_80251ADC(c); // 80268074
  c->r[0]=R32(c->r[3]+0x00000034u); // 80268078
  c->r[29]=c->r[3]|c->r[3]; // 8026807C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80268080
  if (!crb(c,2)) { goto L_802680FC; } // 80268084
  c->r[4]=R16(c->r[25]+0x00000008u); // 80268088
  c->r[3]=c->r[20]|c->r[20]; // 8026808C
  c->lr=0x80268094u; f_80251A00(c); // 80268090
  c->r[4]=R16(c->r[25]+0x00000006u); // 80268094
  c->r[30]=c->r[3]|c->r[3]; // 80268098
  c->r[3]=c->r[20]|c->r[20]; // 8026809C
  c->lr=0x802680A4u; f_802514A8(c); // 802680A0
  cmpu(c,0,c->r[30],c->r[31]); // 802680A4
  W32(c->r[1]+0x00000008u,c->r[29]); // 802680A8
  c->r[31]=c->r[22]|c->r[22]; // 802680AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802680B0
  W32(c->r[1]+0x00000010u,c->r[30]); // 802680B4
  if (!crb(c,2)) { goto L_802680C0; } // 802680B8
  c->r[31]=c->r[24]|c->r[24]; // 802680BC
L_802680C0:;
  W32(c->r[1]+0x00000014u,c->r[29]); // 802680C0
  c->r[3]=c->r[26]|c->r[26]; // 802680C4
  c->r[4]=c->r[27]|c->r[27]; // 802680C8
  c->r[5]=c->r[28]|c->r[28]; // 802680CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802680D0
  c->lr=0x802680D8u; f_8026762C(c); // 802680D4
  c->r[9]=c->r[3]|c->r[3]; // 802680D8
  c->r[7]=c->r[31]|c->r[31]; // 802680DC
  c->r[3]=c->r[1]+0x00000018u; // 802680E0
  c->r[4]=c->r[1]+0x00000014u; // 802680E4
  c->r[5]=0u+0x00000000u; // 802680E8
  c->r[6]=0u+0x00000000u; // 802680EC
  c->r[8]=0u+0x00000000u; // 802680F0
  c->lr=0x802680F8u; f_80263FDC(c); // 802680F4
  c->r[31]=c->r[30]|c->r[30]; // 802680F8
L_802680FC:;
  c->r[25]=c->r[25]+0x0000000Cu; // 802680FC
  c->r[23]=c->r[23]+0x00000001u; // 80268100
L_80268104:;
  cmpu(c,0,c->r[23],c->r[21]); // 80268104
  if (crb(c,0)) { IRQCHK(c); goto L_8026806C; } // 80268108
  c->r[11]=c->r[1]+0x00000050u; // 8026810C
  c->lr=0x80268114u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80268110
  c->r[0]=R32(c->r[1]+0x00000054u); // 80268114
  c->lr=c->r[0]; // 80268118
  c->r[1]=c->r[1]+0x00000050u; // 8026811C
  return; // 80268120
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCQ54nw4r3g3d6detail7workmem4MdlZUlPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_80268124(Ctx* __restrict c) {
  trace_call(0x80268124u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268124
  c->r[0]=c->lr; // 80268128
  W32(c->r[1]+0x00000094u,c->r[0]); // 8026812C
  c->r[11]=c->r[1]+0x00000090u; // 80268130
  c->lr=0x80268138u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80268134
  c->r[27]=0u+0x00000000u; // 80268138
  c->r[0]=rotl(c->r[7],0)&0x00000008u; cr0(c,c->r[0]); // 8026813C
  W32(c->r[1]+0x00000020u,c->r[27]); // 80268140
  c->r[28]=c->r[3]|c->r[3]; // 80268144
  c->r[29]=c->r[5]|c->r[5]; // 80268148
  c->r[30]=c->r[6]|c->r[6]; // 8026814C
  W32(c->r[1]+0x00000024u,c->r[27]); // 80268150
  c->r[31]=0u+0x00000001u; // 80268154
  W32(c->r[1]+0x00000028u,c->r[27]); // 80268158
  W32(c->r[1]+0x0000002Cu,c->r[27]); // 8026815C
  W32(c->r[1]+0x00000030u,c->r[27]); // 80268160
  W32(c->r[1]+0x00000034u,c->r[27]); // 80268164
  W32(c->r[1]+0x00000038u,c->r[27]); // 80268168
  W32(c->r[1]+0x0000003Cu,c->r[27]); // 8026816C
  W32(c->r[1]+0x00000040u,c->r[27]); // 80268170
  W32(c->r[1]+0x00000044u,c->r[27]); // 80268174
  W32(c->r[1]+0x00000048u,c->r[27]); // 80268178
  W32(c->r[1]+0x0000004Cu,c->r[27]); // 8026817C
  W32(c->r[1]+0x00000050u,c->r[27]); // 80268180
  W32(c->r[1]+0x00000054u,c->r[27]); // 80268184
  if (crb(c,2)) { goto L_80268190; } // 80268188
  c->r[31]=c->r[31]|0x00000008u; // 8026818C
L_80268190:;
  c->r[0]=rotl(c->r[7],0)&0x00000004u; cr0(c,c->r[0]); // 80268190
  if (crb(c,2)) { goto L_8026819C; } // 80268194
  c->r[31]=c->r[31]|0x00000010u; // 80268198
L_8026819C:;
  c->r[20]=c->r[4]|c->r[4]; // 8026819C
  c->r[19]=c->r[31]|0x00000010u; // 802681A0
  c->r[23]=c->r[1]+0x00000008u; // 802681A4
  c->r[22]=c->r[1]+0x0000000Cu; // 802681A8
  c->r[21]=c->r[1]+0x00000010u; // 802681AC
  c->r[18]=0u+0x00000000u; // 802681B0
  goto L_80268264; // 802681B4
L_802681B8:;
  c->r[4]=R16(c->r[20]+0x0000000Au); // 802681B8
  c->r[3]=c->r[28]|c->r[28]; // 802681BC
  c->lr=0x802681C4u; f_80251ADC(c); // 802681C0
  c->r[0]=R32(c->r[3]+0x00000034u); // 802681C4
  c->r[24]=c->r[3]|c->r[3]; // 802681C8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802681CC
  if (!crb(c,2)) { goto L_8026825C; } // 802681D0
  c->r[4]=R16(c->r[20]+0x00000008u); // 802681D4
  c->r[3]=c->r[28]|c->r[28]; // 802681D8
  c->lr=0x802681E0u; f_80251A00(c); // 802681DC
  c->r[4]=R16(c->r[20]+0x00000006u); // 802681E0
  c->r[25]=c->r[3]|c->r[3]; // 802681E4
  c->r[3]=c->r[28]|c->r[28]; // 802681E8
  c->lr=0x802681F0u; f_802514A8(c); // 802681EC
  c->r[5]=R32(c->r[25]+0x0000000Cu); // 802681F0
  c->r[26]=c->r[3]|c->r[3]; // 802681F4
  c->r[4]=c->r[30]|c->r[30]; // 802681F8
  c->r[3]=c->r[1]+0x00000020u; // 802681FC
  c->lr=0x80268204u; f_80267B48(c); // 80268200
  cmpu(c,0,c->r[25],c->r[27]); // 80268204
  W32(c->r[1]+0x00000008u,c->r[24]); // 80268208
  c->r[27]=c->r[31]|c->r[31]; // 8026820C
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 80268210
  W32(c->r[1]+0x00000010u,c->r[25]); // 80268214
  if (!crb(c,2)) { goto L_80268220; } // 80268218
  c->r[27]=c->r[19]|c->r[19]; // 8026821C
L_80268220:;
  W32(c->r[1]+0x00000014u,c->r[24]); // 80268220
  c->r[3]=c->r[21]|c->r[21]; // 80268224
  c->r[4]=c->r[22]|c->r[22]; // 80268228
  c->r[5]=c->r[23]|c->r[23]; // 8026822C
  W32(c->r[1]+0x00000018u,c->r[25]); // 80268230
  c->lr=0x80268238u; f_8026762C(c); // 80268234
  c->r[9]=c->r[3]|c->r[3]; // 80268238
  c->r[7]=c->r[27]|c->r[27]; // 8026823C
  c->r[3]=c->r[1]+0x00000018u; // 80268240
  c->r[4]=c->r[1]+0x00000014u; // 80268244
  c->r[8]=c->r[1]+0x00000020u; // 80268248
  c->r[5]=0u+0x00000000u; // 8026824C
  c->r[6]=0u+0x00000000u; // 80268250
  c->lr=0x80268258u; f_80263FDC(c); // 80268254
  c->r[27]=c->r[25]|c->r[25]; // 80268258
L_8026825C:;
  c->r[20]=c->r[20]+0x0000000Cu; // 8026825C
  c->r[18]=c->r[18]+0x00000001u; // 80268260
L_80268264:;
  cmpu(c,0,c->r[18],c->r[29]); // 80268264
  if (crb(c,0)) { IRQCHK(c); goto L_802681B8; } // 80268268
  c->r[11]=c->r[1]+0x00000090u; // 8026826C
  c->lr=0x80268274u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80268270
  c->r[0]=R32(c->r[1]+0x00000094u); // 80268274
  c->lr=c->r[0]; // 80268278
  c->r[1]=c->r[1]+0x00000090u; // 8026827C
  return; // 80268280
}

// fn_80268284
void f_80268284(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268284
  c->r[0]=c->lr; // 80268288
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026828C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80268290
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80268294
  c->r[11]=c->r[1]+0x00000030u; // 80268298
  c->lr=0x802682A0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026829C
  c->r[8]=R32(c->r[4]+0x00000000u); // 802682A0
  c->r[23]=c->r[3]|c->r[3]; // 802682A4
  c->r[24]=c->r[4]|c->r[4]; // 802682A8
  c->r[25]=c->r[5]|c->r[5]; // 802682AC
  c->r[29]=R32(c->r[8]+0x00000068u); // 802682B0
  c->r[26]=c->r[6]|c->r[6]; // 802682B4
  c->r[27]=c->r[7]|c->r[7]; // 802682B8
  c->r[30]=0u+0x00000000u; // 802682BC
  c->lr=0x802682C4u; f_80266B50(c); // 802682C0
  c->r[28]=c->r[3]|c->r[3]; // 802682C4
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[31]=c->ps1[31]=RF32(ea);} // 802682C8
  c->r[31]=c->r[28]|c->r[28]; // 802682CC
  goto L_802683B4; // 802682D0
L_802682D4:;
  c->r[0]=R8(c->r[26]+0x00000005u); // 802682D4
  c->r[3]=c->r[24]|c->r[24]; // 802682D8
  c->r[22]=R8(c->r[26]+0x00000006u); // 802682DC
  c->r[22]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[22]&~0x0000FF00u); // 802682E0
  c->r[4]=c->r[22]|c->r[22]; // 802682E4
  c->lr=0x802682ECu; f_802514A8(c); // 802682E8
  cmps(c,0,(int32_t)c->r[27],0); // 802682EC
  if (crb(c,2)) { goto L_80268300; } // 802682F0
  c->r[4]=R32(c->r[27]+0x00000004u); // 802682F4
  cmps(c,0,(int32_t)c->r[4],0); // 802682F8
  if (!crb(c,2)) { goto L_8026831C; } // 802682FC
L_80268300:;
  cmps(c,0,(int32_t)c->r[3],0); // 80268300
  if (crb(c,2)) { goto L_80268314; } // 80268304
  c->r[0]=R32(c->r[3]+0x00000014u); // 80268308
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 8026830C
  goto L_80268340; // 80268310
L_80268314:;
  c->r[0]=0u+0x00000000u; // 80268314
  goto L_80268340; // 80268318
L_8026831C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026831C
  if (crb(c,2)) { goto L_8026832C; } // 80268320
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80268324
  goto L_80268330; // 80268328
L_8026832C:;
  c->r[0]=0u+0x00000000u; // 8026832C
L_80268330:;
  c->r[4]=R8(c->r[4]+c->r[0]); // 80268330
  c->r[0]=0u-c->r[4]; // 80268334
  c->r[0]=c->r[0]|c->r[4]; // 80268338
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8026833C
L_80268340:;
  cmps(c,0,(int32_t)c->r[0],0); // 80268340
  if (crb(c,2)) { goto L_802683B0; } // 80268344
  c->r[0]=R8(c->r[26]+0x00000001u); // 80268348
  cmps(c,0,(int32_t)c->r[3],0); // 8026834C
  c->r[5]=R8(c->r[26]+0x00000002u); // 80268350
  c->r[5]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[5]&~0x0000FF00u); // 80268354
  W16(c->r[31]+0x00000006u,c->r[22]); // 80268358
  c->r[4]=R8(c->r[26]+0x00000003u); // 8026835C
  c->r[0]=R8(c->r[26]+0x00000004u); // 80268360
  W16(c->r[31]+0x00000008u,c->r[5]); // 80268364
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80268368
  W16(c->r[31]+0x0000000Au,c->r[0]); // 8026836C
  if (crb(c,2)) { goto L_8026837C; } // 80268370
  c->r[0]=R32(c->r[3]+0x00000010u); // 80268374
  goto L_80268380; // 80268378
L_8026837C:;
  c->r[0]=0u+0x00000000u; // 8026837C
L_80268380:;
  cmpu(c,0,c->r[0],c->r[29]); // 80268380
  if (!crb(c,0)) { goto L_8026839C; } // 80268384
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80268388
  c->r[3]=c->r[25]+c->r[0]; // 8026838C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80268390
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80268394
  goto L_802683A0; // 80268398
L_8026839C:;
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[31]);} // 8026839C
L_802683A0:;
  c->r[0]=R8(c->r[26]+0x00000007u); // 802683A0
  c->r[30]=c->r[30]+0x00000001u; // 802683A4
  W16(c->r[31]+0x00000004u,c->r[0]); // 802683A8
  c->r[31]=c->r[31]+0x0000000Cu; // 802683AC
L_802683B0:;
  c->r[26]=c->r[26]+0x00000008u; // 802683B0
L_802683B4:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 802683B4
  cmpu(c,0,c->r[0],0x00000001u); // 802683B8
  if (!crb(c,2)) { IRQCHK(c); goto L_802682D4; } // 802683BC
  W32(c->r[23]+0x00000000u,c->r[30]); // 802683C0
  c->r[3]=c->r[28]|c->r[28]; // 802683C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802683C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802683CC
  c->r[11]=c->r[1]+0x00000030u; // 802683D0
  c->lr=0x802683D8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802683D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802683D8
  c->lr=c->r[0]; // 802683DC
  c->r[1]=c->r[1]+0x00000040u; // 802683E0
  return; // 802683E4
}

// DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_802683E8(Ctx* __restrict c) {
  trace_call(0x802683E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802683E8
  c->r[0]=c->lr; // 802683EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802683F0
  c->r[11]=c->r[1]+0x00000050u; // 802683F4
  c->lr=0x802683FCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802683F8
  c->r[28]=c->r[4]|c->r[4]; // 802683FC
  c->r[27]=c->r[3]|c->r[3]; // 80268400
  c->r[4]=c->r[5]|c->r[5]; // 80268404
  c->r[5]=c->r[6]|c->r[6]; // 80268408
  c->r[26]=c->r[7]|c->r[7]; // 8026840C
  c->r[29]=c->r[8]|c->r[8]; // 80268410
  c->r[30]=c->r[9]|c->r[9]; // 80268414
  c->r[31]=c->r[10]|c->r[10]; // 80268418
  c->r[3]=c->r[28]|c->r[28]; // 8026841C
  c->lr=0x80268424u; f_80262C34(c); // 80268420
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 80268424
  if (!crb(c,2)) { goto L_80268438; } // 80268428
  c->r[3]=0u+0x00000000u; // 8026842C
  c->lr=0x80268434u; f_8015C3BC(c); // 80268430
  c->lr=0x80268438u; f_8015980C(c); // 80268434
L_80268438:;
  cmps(c,0,(int32_t)c->r[26],0); // 80268438
  if (crb(c,2)) { goto L_80268510; } // 8026843C
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80268440
  if (crb(c,2)) { goto L_802684D0; } // 80268444
  c->r[0]=R32(c->r[27]+0x00000000u); // 80268448
  c->r[5]=c->r[28]|c->r[28]; // 8026844C
  c->r[6]=c->r[26]|c->r[26]; // 80268450
  c->r[7]=c->r[30]|c->r[30]; // 80268454
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80268458
  c->r[3]=c->r[1]+0x00000034u; // 8026845C
  c->r[4]=c->r[1]+0x0000002Cu; // 80268460
  c->lr=0x80268468u; f_80268284(c); // 80268464
  c->r[0]=R32(c->r[1]+0x00000034u); // 80268468
  c->r[5]=0u+0x80270000u; // 8026846C
  c->r[26]=c->r[3]|c->r[3]; // 80268470
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80268474
  c->r[5]=c->r[5]+0xFFFF8610u; // 80268478
  c->r[4]=c->r[3]+c->r[0]; // 8026847C
  c->lr=0x80268484u; f_802686B0(c); // 80268480
  cmps(c,0,(int32_t)c->r[30],0); // 80268484
  if (crb(c,2)) { goto L_802684B0; } // 80268488
  c->r[0]=R32(c->r[27]+0x00000000u); // 8026848C
  c->r[4]=c->r[26]|c->r[26]; // 80268490
  c->r[5]=R32(c->r[1]+0x00000034u); // 80268494
  c->r[6]=c->r[30]|c->r[30]; // 80268498
  W32(c->r[1]+0x00000028u,c->r[0]); // 8026849C
  c->r[7]=c->r[31]|c->r[31]; // 802684A0
  c->r[3]=c->r[1]+0x00000028u; // 802684A4
  c->lr=0x802684ACu; f_80268124(c); // 802684A8
  goto L_80268510; // 802684AC
L_802684B0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802684B0
  c->r[4]=c->r[26]|c->r[26]; // 802684B4
  c->r[5]=R32(c->r[1]+0x00000034u); // 802684B8
  c->r[6]=c->r[31]|c->r[31]; // 802684BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802684C0
  c->r[3]=c->r[1]+0x00000024u; // 802684C4
  c->lr=0x802684CCu; f_80268014(c); // 802684C8
  goto L_80268510; // 802684CC
L_802684D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 802684D0
  if (crb(c,2)) { goto L_802684F8; } // 802684D4
  c->r[0]=R32(c->r[27]+0x00000000u); // 802684D8
  c->r[4]=c->r[26]|c->r[26]; // 802684DC
  c->r[5]=c->r[30]|c->r[30]; // 802684E0
  c->r[6]=c->r[31]|c->r[31]; // 802684E4
  W32(c->r[1]+0x00000020u,c->r[0]); // 802684E8
  c->r[3]=c->r[1]+0x00000020u; // 802684EC
  c->lr=0x802684F4u; f_80267E50(c); // 802684F0
  goto L_80268510; // 802684F4
L_802684F8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802684F8
  c->r[4]=c->r[26]|c->r[26]; // 802684FC
  c->r[5]=c->r[31]|c->r[31]; // 80268500
  c->r[3]=c->r[1]+0x0000001Cu; // 80268504
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80268508
  c->lr=0x80268510u; f_80267D10(c); // 8026850C
L_80268510:;
  cmps(c,0,(int32_t)c->r[29],0); // 80268510
  if (crb(c,2)) { goto L_802685E8; } // 80268514
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 80268518
  if (crb(c,2)) { goto L_802685A8; } // 8026851C
  c->r[0]=R32(c->r[27]+0x00000000u); // 80268520
  c->r[5]=c->r[28]|c->r[28]; // 80268524
  c->r[6]=c->r[29]|c->r[29]; // 80268528
  c->r[7]=c->r[30]|c->r[30]; // 8026852C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80268530
  c->r[3]=c->r[1]+0x00000030u; // 80268534
  c->r[4]=c->r[1]+0x00000018u; // 80268538
  c->lr=0x80268540u; f_80268284(c); // 8026853C
  c->r[0]=R32(c->r[1]+0x00000030u); // 80268540
  c->r[5]=0u+0x80270000u; // 80268544
  c->r[26]=c->r[3]|c->r[3]; // 80268548
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8026854C
  c->r[5]=c->r[5]+0xFFFF864Cu; // 80268550
  c->r[4]=c->r[3]+c->r[0]; // 80268554
  c->lr=0x8026855Cu; f_802686B0(c); // 80268558
  cmps(c,0,(int32_t)c->r[30],0); // 8026855C
  if (crb(c,2)) { goto L_80268588; } // 80268560
  c->r[0]=R32(c->r[27]+0x00000000u); // 80268564
  c->r[4]=c->r[26]|c->r[26]; // 80268568
  c->r[5]=R32(c->r[1]+0x00000030u); // 8026856C
  c->r[6]=c->r[30]|c->r[30]; // 80268570
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268574
  c->r[7]=c->r[31]|c->r[31]; // 80268578
  c->r[3]=c->r[1]+0x00000014u; // 8026857C
  c->lr=0x80268584u; f_80268124(c); // 80268580
  goto L_802685E8; // 80268584
L_80268588:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80268588
  c->r[4]=c->r[26]|c->r[26]; // 8026858C
  c->r[5]=R32(c->r[1]+0x00000030u); // 80268590
  c->r[6]=c->r[31]|c->r[31]; // 80268594
  W32(c->r[1]+0x00000010u,c->r[0]); // 80268598
  c->r[3]=c->r[1]+0x00000010u; // 8026859C
  c->lr=0x802685A4u; f_80268014(c); // 802685A0
  goto L_802685E8; // 802685A4
L_802685A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 802685A8
  if (crb(c,2)) { goto L_802685D0; } // 802685AC
  c->r[0]=R32(c->r[27]+0x00000000u); // 802685B0
  c->r[4]=c->r[29]|c->r[29]; // 802685B4
  c->r[5]=c->r[30]|c->r[30]; // 802685B8
  c->r[6]=c->r[31]|c->r[31]; // 802685BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802685C0
  c->r[3]=c->r[1]+0x0000000Cu; // 802685C4
  c->lr=0x802685CCu; f_80267E50(c); // 802685C8
  goto L_802685E8; // 802685CC
L_802685D0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802685D0
  c->r[4]=c->r[29]|c->r[29]; // 802685D4
  c->r[5]=c->r[31]|c->r[31]; // 802685D8
  c->r[3]=c->r[1]+0x00000008u; // 802685DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802685E0
  c->lr=0x802685E8u; f_80267D10(c); // 802685E4
L_802685E8:;
  c->r[3]=0u+0x00000000u; // 802685E8
  c->r[4]=0u+0x00000000u; // 802685EC
  c->r[5]=0u+0x00000000u; // 802685F0
  c->lr=0x802685F8u; f_80262C34(c); // 802685F4
  c->r[11]=c->r[1]+0x00000050u; // 802685F8
  c->lr=0x80268600u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802685FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 80268600
  c->lr=c->r[0]; // 80268604
  c->r[1]=c->r[1]+0x00000050u; // 80268608
  return; // 8026860C
}

// FrontToBack__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_80268610(Ctx* __restrict c) {
  trace_call(0x80268610u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 80268610
  c->r[5]=R16(c->r[3]+0x00000004u); // 80268614
  cmpu(c,0,c->r[5],c->r[0]); // 80268618
  if (!crb(c,0)) { goto L_80268628; } // 8026861C
  c->r[3]=0u+0x00000001u; // 80268620
  return; // 80268624
L_80268628:;
  if (!crb(c,1)) { goto L_80268634; } // 80268628
  c->r[3]=0u+0x00000000u; // 8026862C
  return; // 80268630
L_80268634:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80268634
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268638
  fcmp(c,0,c->f[1],c->f[0]); // 8026863C
  c->r[3]=c->cr; // 80268640
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 80268644
  return; // 80268648
}

// BackToFront__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_8026864C(Ctx* __restrict c) {
  trace_call(0x8026864Cu);
  c->r[0]=R16(c->r[4]+0x00000004u); // 8026864C
  c->r[5]=R16(c->r[3]+0x00000004u); // 80268650
  cmpu(c,0,c->r[5],c->r[0]); // 80268654
  if (!crb(c,0)) { goto L_80268664; } // 80268658
  c->r[3]=0u+0x00000001u; // 8026865C
  return; // 80268660
L_80268664:;
  if (!crb(c,1)) { goto L_80268670; } // 80268664
  c->r[3]=0u+0x00000000u; // 80268668
  return; // 8026866C
L_80268670:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80268670
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268674
  fcmp(c,0,c->f[1],c->f[0]); // 80268678
  if (!crb(c,0)) { goto L_80268688; } // 8026867C
  c->r[3]=0u+0x00000001u; // 80268680
  return; // 80268684
L_80268688:;
  fcmp(c,0,c->f[1],c->f[0]); // 80268688
  if (!crb(c,2)) { goto L_802686A8; } // 8026868C
  c->r[3]=R16(c->r[3]+0x00000008u); // 80268690
  c->r[0]=R16(c->r[4]+0x00000008u); // 80268694
  cmpu(c,0,c->r[3],c->r[0]); // 80268698
  if (!crb(c,0)) { goto L_802686A8; } // 8026869C
  c->r[3]=0u+0x00000001u; // 802686A0
  return; // 802686A4
L_802686A8:;
  c->r[3]=0u+0x00000000u; // 802686A8
  return; // 802686AC
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,PFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_802686B0(Ctx* __restrict c) {
  trace_call(0x802686B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802686B0
  c->r[0]=c->lr; // 802686B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 802686B8
  c->r[11]=c->r[1]+0x00000080u; // 802686BC
  c->lr=0x802686C4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802686C0
  c->r[24]=0u+0x2AAB0000u; // 802686C4
  c->r[6]=0u+0x66660000u; // 802686C8
  W32(c->r[1]+0x00000008u,c->r[5]); // 802686CC
  c->r[25]=c->r[3]|c->r[3]; // 802686D0
  c->r[26]=c->r[4]|c->r[4]; // 802686D4
  c->r[31]=c->r[6]+0x00006667u; // 802686D8
  c->r[30]=c->r[24]+0xFFFFAAABu; // 802686DC
L_802686E0:;
  c->r[0]=c->r[26]-c->r[25]; // 802686E0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 802686E4
  c->r[0]=sraw(c,c->r[0],1); // 802686E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802686EC
  c->r[7]=c->r[0]+c->r[3]; // 802686F0
  cmps(c,0,(int32_t)c->r[7],1); // 802686F4
  if (!crb(c,1)) { goto L_80268C54; } // 802686F8
  cmps(c,0,(int32_t)c->r[7],20); // 802686FC
  if (crb(c,1)) { goto L_802687D4; } // 80268700
  cmpu(c,0,c->r[25],c->r[26]); // 80268704
  if (crb(c,2)) { goto L_80268C54; } // 80268708
  c->r[24]=c->r[26]+0xFFFFFFF4u; // 8026870C
  goto L_802687C8; // 80268710
L_80268714:;
  cmpu(c,0,c->r[25],c->r[26]); // 80268714
  c->r[27]=c->r[25]|c->r[25]; // 80268718
  if (crb(c,2)) { goto L_80268754; } // 8026871C
  c->r[28]=c->r[25]+0x0000000Cu; // 80268720
  goto L_8026874C; // 80268724
L_80268728:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 80268728
  c->r[3]=c->r[28]|c->r[28]; // 8026872C
  c->r[4]=c->r[27]|c->r[27]; // 80268730
  c->ctr=c->r[12]; // 80268734
  if (true) { c->lr=0x8026873Cu; dispatch(c,c->ctr); } // 80268738
  cmps(c,0,(int32_t)c->r[3],0); // 8026873C
  if (crb(c,2)) { goto L_80268748; } // 80268740
  c->r[27]=c->r[28]|c->r[28]; // 80268744
L_80268748:;
  c->r[28]=c->r[28]+0x0000000Cu; // 80268748
L_8026874C:;
  cmpu(c,0,c->r[28],c->r[26]); // 8026874C
  if (!crb(c,2)) { IRQCHK(c); goto L_80268728; } // 80268750
L_80268754:;
  cmpu(c,0,c->r[27],c->r[25]); // 80268754
  if (crb(c,2)) { goto L_802687C4; } // 80268758
  c->r[7]=R32(c->r[27]+0x00000000u); // 8026875C
  c->r[0]=R32(c->r[27]+0x00000004u); // 80268760
  c->r[3]=R32(c->r[27]+0x00000008u); // 80268764
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268768
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8026876C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 80268770
  c->r[5]=R16(c->r[1]+0x0000004Cu); // 80268774
  c->r[0]=R16(c->r[25]+0x00000004u); // 80268778
  W32(c->r[1]+0x00000048u,c->r[7]); // 8026877C
  c->r[4]=R16(c->r[1]+0x0000004Eu); // 80268780
  W16(c->r[27]+0x00000004u,c->r[0]); // 80268784
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268788
  c->r[6]=R16(c->r[25]+0x00000006u); // 8026878C
  W32(c->r[1]+0x00000050u,c->r[3]); // 80268790
  W16(c->r[27]+0x00000006u,c->r[6]); // 80268794
  c->r[3]=R16(c->r[1]+0x00000050u); // 80268798
  c->r[6]=R16(c->r[25]+0x00000008u); // 8026879C
  c->r[0]=R16(c->r[1]+0x00000052u); // 802687A0
  W16(c->r[27]+0x00000008u,c->r[6]); // 802687A4
  c->r[6]=R16(c->r[25]+0x0000000Au); // 802687A8
  W16(c->r[27]+0x0000000Au,c->r[6]); // 802687AC
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 802687B0
  W16(c->r[25]+0x00000004u,c->r[5]); // 802687B4
  W16(c->r[25]+0x00000006u,c->r[4]); // 802687B8
  W16(c->r[25]+0x00000008u,c->r[3]); // 802687BC
  W16(c->r[25]+0x0000000Au,c->r[0]); // 802687C0
L_802687C4:;
  c->r[25]=c->r[25]+0x0000000Cu; // 802687C4
L_802687C8:;
  cmpu(c,0,c->r[25],c->r[24]); // 802687C8
  if (!crb(c,2)) { IRQCHK(c); goto L_80268714; } // 802687CC
  goto L_80268C54; // 802687D0
L_802687D4:;
  c->r[4]=R32(c->r[13]+0xFFFF9730u); // 802687D4
  c->r[0]=sraw(c,c->r[7],2); // 802687D8
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 802687DC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 802687E0
  c->r[6]=c->r[4]+0x00000001u; // 802687E4
  cmps(c,0,(int32_t)c->r[6],5); // 802687E8
  c->r[0]=sraw(c,c->r[0],1); // 802687EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802687F0
  c->r[0]=c->r[0]+c->r[3]; // 802687F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 802687F8
  c->r[0]=c->r[4]-c->r[0]; // 802687FC
  c->r[0]=c->r[5]+c->r[0]; // 80268800
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80268804
  c->r[3]=c->r[25]+c->r[0]; // 80268808
  if (crb(c,0)) { goto L_80268814; } // 8026880C
  c->r[6]=0u+0xFFFFFFFCu; // 80268810
L_80268814:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 80268814
  c->r[0]=c->r[6]+0x00000001u; // 80268818
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8026881C
  W32(c->r[13]+0xFFFF9730u,c->r[0]); // 80268820
  cmps(c,0,(int32_t)c->r[0],5); // 80268824
  c->r[0]=c->r[5]-c->r[7]; // 80268828
  c->r[0]=sraw(c,c->r[0],2); // 8026882C
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80268830
  c->r[0]=sraw(c,c->r[4],1); // 80268834
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80268838
  c->r[0]=c->r[0]+c->r[4]; // 8026883C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80268840
  c->r[0]=c->r[6]-c->r[0]; // 80268844
  c->r[0]=c->r[5]+c->r[0]; // 80268848
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8026884C
  c->r[4]=c->r[25]+c->r[0]; // 80268850
  if (crb(c,0)) { goto L_80268860; } // 80268854
  c->r[6]=0u+0xFFFFFFFCu; // 80268858
  W32(c->r[13]+0xFFFF9730u,c->r[6]); // 8026885C
L_80268860:;
  c->r[27]=c->r[26]+0xFFFFFFF4u; // 80268860
  c->r[6]=c->r[1]+0x00000008u; // 80268864
  c->r[5]=c->r[27]|c->r[27]; // 80268868
  c->lr=0x80268870u; f_80269228(c); // 8026886C
  c->r[29]=c->r[25]|c->r[25]; // 80268870
  c->r[28]=c->r[27]|c->r[27]; // 80268874
  goto L_80268880; // 80268878
L_8026887C:;
  c->r[29]=c->r[29]+0x0000000Cu; // 8026887C
L_80268880:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 80268880
  c->r[3]=c->r[29]|c->r[29]; // 80268884
  c->r[4]=c->r[27]|c->r[27]; // 80268888
  c->ctr=c->r[12]; // 8026888C
  if (true) { c->lr=0x80268894u; dispatch(c,c->ctr); } // 80268890
  cmps(c,0,(int32_t)c->r[3],0); // 80268894
  if (!crb(c,2)) { IRQCHK(c); goto L_8026887C; } // 80268898
L_8026889C:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 8026889C
  cmpu(c,0,c->r[29],c->r[28]); // 802688A0
  if (crb(c,2)) { goto L_802688C4; } // 802688A4
  c->r[12]=R32(c->r[1]+0x00000008u); // 802688A8
  c->r[3]=c->r[28]|c->r[28]; // 802688AC
  c->r[4]=c->r[27]|c->r[27]; // 802688B0
  c->ctr=c->r[12]; // 802688B4
  if (true) { c->lr=0x802688BCu; dispatch(c,c->ctr); } // 802688B8
  cmps(c,0,(int32_t)c->r[3],0); // 802688BC
  if (crb(c,2)) { IRQCHK(c); goto L_8026889C; } // 802688C0
L_802688C4:;
  cmpu(c,0,c->r[29],c->r[28]); // 802688C4
  if (!crb(c,0)) { goto L_802689F4; } // 802688C8
  c->r[7]=R32(c->r[29]+0x00000000u); // 802688CC
  c->r[0]=R32(c->r[29]+0x00000004u); // 802688D0
  c->r[3]=R32(c->r[29]+0x00000008u); // 802688D4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802688D8
  W32(c->r[1]+0x00000040u,c->r[0]); // 802688DC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802688E0
  c->r[5]=R16(c->r[1]+0x00000040u); // 802688E4
  c->r[0]=R16(c->r[28]+0x00000004u); // 802688E8
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 802688EC
  c->r[4]=R16(c->r[1]+0x00000042u); // 802688F0
  W16(c->r[29]+0x00000004u,c->r[0]); // 802688F4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802688F8
  c->r[6]=R16(c->r[28]+0x00000006u); // 802688FC
  W32(c->r[1]+0x00000044u,c->r[3]); // 80268900
  W16(c->r[29]+0x00000006u,c->r[6]); // 80268904
  c->r[3]=R16(c->r[1]+0x00000044u); // 80268908
  c->r[6]=R16(c->r[28]+0x00000008u); // 8026890C
  c->r[0]=R16(c->r[1]+0x00000046u); // 80268910
  W16(c->r[29]+0x00000008u,c->r[6]); // 80268914
  c->r[6]=R16(c->r[28]+0x0000000Au); // 80268918
  W16(c->r[29]+0x0000000Au,c->r[6]); // 8026891C
  c->r[29]=c->r[29]+0x0000000Cu; // 80268920
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80268924
  W16(c->r[28]+0x00000004u,c->r[5]); // 80268928
  W16(c->r[28]+0x00000006u,c->r[4]); // 8026892C
  W16(c->r[28]+0x00000008u,c->r[3]); // 80268930
  W16(c->r[28]+0x0000000Au,c->r[0]); // 80268934
  goto L_80268940; // 80268938
L_8026893C:;
  c->r[29]=c->r[29]+0x0000000Cu; // 8026893C
L_80268940:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 80268940
  c->r[3]=c->r[29]|c->r[29]; // 80268944
  c->r[4]=c->r[27]|c->r[27]; // 80268948
  c->ctr=c->r[12]; // 8026894C
  if (true) { c->lr=0x80268954u; dispatch(c,c->ctr); } // 80268950
  cmps(c,0,(int32_t)c->r[3],0); // 80268954
  if (!crb(c,2)) { IRQCHK(c); goto L_8026893C; } // 80268958
L_8026895C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026895C
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 80268960
  c->r[3]=c->r[28]|c->r[28]; // 80268964
  c->r[4]=c->r[27]|c->r[27]; // 80268968
  c->ctr=c->r[12]; // 8026896C
  if (true) { c->lr=0x80268974u; dispatch(c,c->ctr); } // 80268970
  cmps(c,0,(int32_t)c->r[3],0); // 80268974
  if (crb(c,2)) { IRQCHK(c); goto L_8026895C; } // 80268978
  cmpu(c,0,c->r[29],c->r[28]); // 8026897C
  if (!crb(c,0)) { goto L_802689F4; } // 80268980
  c->r[7]=R32(c->r[29]+0x00000000u); // 80268984
  c->r[0]=R32(c->r[29]+0x00000004u); // 80268988
  c->r[3]=R32(c->r[29]+0x00000008u); // 8026898C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268990
  W32(c->r[1]+0x00000034u,c->r[0]); // 80268994
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80268998
  c->r[5]=R16(c->r[1]+0x00000034u); // 8026899C
  c->r[0]=R16(c->r[28]+0x00000004u); // 802689A0
  W32(c->r[1]+0x00000030u,c->r[7]); // 802689A4
  c->r[4]=R16(c->r[1]+0x00000036u); // 802689A8
  W16(c->r[29]+0x00000004u,c->r[0]); // 802689AC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802689B0
  c->r[6]=R16(c->r[28]+0x00000006u); // 802689B4
  W32(c->r[1]+0x00000038u,c->r[3]); // 802689B8
  W16(c->r[29]+0x00000006u,c->r[6]); // 802689BC
  c->r[3]=R16(c->r[1]+0x00000038u); // 802689C0
  c->r[6]=R16(c->r[28]+0x00000008u); // 802689C4
  c->r[0]=R16(c->r[1]+0x0000003Au); // 802689C8
  W16(c->r[29]+0x00000008u,c->r[6]); // 802689CC
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802689D0
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802689D4
  c->r[29]=c->r[29]+0x0000000Cu; // 802689D8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802689DC
  W16(c->r[28]+0x00000004u,c->r[5]); // 802689E0
  W16(c->r[28]+0x00000006u,c->r[4]); // 802689E4
  W16(c->r[28]+0x00000008u,c->r[3]); // 802689E8
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802689EC
  IRQCHK(c); goto L_80268940; // 802689F0
L_802689F4:;
  cmpu(c,0,c->r[29],c->r[25]); // 802689F4
  if (!crb(c,2)) { goto L_80268BF0; } // 802689F8
  c->r[9]=R32(c->r[29]+0x00000000u); // 802689FC
  c->r[28]=c->r[26]+0xFFFFFFF4u; // 80268A00
  c->r[0]=R32(c->r[29]+0x00000004u); // 80268A04
  c->r[3]=c->r[25]|c->r[25]; // 80268A08
  c->r[5]=R32(c->r[29]+0x00000008u); // 80268A0C
  c->r[4]=c->r[28]|c->r[28]; // 80268A10
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268A14
  W32(c->r[1]+0x00000028u,c->r[0]); // 80268A18
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80268A1C
  c->r[7]=R16(c->r[1]+0x00000028u); // 80268A20
  c->r[0]=R16(c->r[27]+0x00000004u); // 80268A24
  W32(c->r[1]+0x00000024u,c->r[9]); // 80268A28
  c->r[6]=R16(c->r[1]+0x0000002Au); // 80268A2C
  W16(c->r[29]+0x00000004u,c->r[0]); // 80268A30
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268A34
  c->r[8]=R16(c->r[27]+0x00000006u); // 80268A38
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80268A3C
  W16(c->r[29]+0x00000006u,c->r[8]); // 80268A40
  c->r[5]=R16(c->r[1]+0x0000002Cu); // 80268A44
  c->r[8]=R16(c->r[27]+0x00000008u); // 80268A48
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 80268A4C
  W16(c->r[29]+0x00000008u,c->r[8]); // 80268A50
  c->r[8]=R16(c->r[27]+0x0000000Au); // 80268A54
  W16(c->r[29]+0x0000000Au,c->r[8]); // 80268A58
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 80268A5C
  W16(c->r[27]+0x00000004u,c->r[7]); // 80268A60
  W16(c->r[27]+0x00000006u,c->r[6]); // 80268A64
  W16(c->r[27]+0x00000008u,c->r[5]); // 80268A68
  W16(c->r[27]+0x0000000Au,c->r[0]); // 80268A6C
  c->r[12]=R32(c->r[1]+0x00000008u); // 80268A70
  c->ctr=c->r[12]; // 80268A74
  c->r[29]=c->r[29]+0x0000000Cu; // 80268A78
  if (true) { c->lr=0x80268A80u; dispatch(c,c->ctr); } // 80268A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80268A80
  if (!crb(c,2)) { goto L_80268B24; } // 80268A84
  goto L_80268A90; // 80268A88
L_80268A8C:;
  c->r[29]=c->r[29]+0x0000000Cu; // 80268A8C
L_80268A90:;
  cmpu(c,0,c->r[29],c->r[26]); // 80268A90
  if (crb(c,2)) { goto L_80268AB4; } // 80268A94
  c->r[12]=R32(c->r[1]+0x00000008u); // 80268A98
  c->r[3]=c->r[25]|c->r[25]; // 80268A9C
  c->r[4]=c->r[29]|c->r[29]; // 80268AA0
  c->ctr=c->r[12]; // 80268AA4
  if (true) { c->lr=0x80268AACu; dispatch(c,c->ctr); } // 80268AA8
  cmps(c,0,(int32_t)c->r[3],0); // 80268AAC
  if (crb(c,2)) { IRQCHK(c); goto L_80268A8C; } // 80268AB0
L_80268AB4:;
  cmpu(c,0,c->r[29],c->r[28]); // 80268AB4
  if (!crb(c,0)) { goto L_80268B24; } // 80268AB8
  c->r[7]=R32(c->r[29]+0x00000000u); // 80268ABC
  c->r[0]=R32(c->r[29]+0x00000004u); // 80268AC0
  c->r[3]=R32(c->r[29]+0x00000008u); // 80268AC4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268AC8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80268ACC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80268AD0
  c->r[5]=R16(c->r[1]+0x0000001Cu); // 80268AD4
  c->r[0]=R16(c->r[28]+0x00000004u); // 80268AD8
  W32(c->r[1]+0x00000018u,c->r[7]); // 80268ADC
  c->r[4]=R16(c->r[1]+0x0000001Eu); // 80268AE0
  W16(c->r[29]+0x00000004u,c->r[0]); // 80268AE4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268AE8
  c->r[6]=R16(c->r[28]+0x00000006u); // 80268AEC
  W32(c->r[1]+0x00000020u,c->r[3]); // 80268AF0
  W16(c->r[29]+0x00000006u,c->r[6]); // 80268AF4
  c->r[3]=R16(c->r[1]+0x00000020u); // 80268AF8
  c->r[6]=R16(c->r[28]+0x00000008u); // 80268AFC
  c->r[0]=R16(c->r[1]+0x00000022u); // 80268B00
  W16(c->r[29]+0x00000008u,c->r[6]); // 80268B04
  c->r[6]=R16(c->r[28]+0x0000000Au); // 80268B08
  W16(c->r[29]+0x0000000Au,c->r[6]); // 80268B0C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80268B10
  W16(c->r[28]+0x00000004u,c->r[5]); // 80268B14
  W16(c->r[28]+0x00000006u,c->r[4]); // 80268B18
  W16(c->r[28]+0x00000008u,c->r[3]); // 80268B1C
  W16(c->r[28]+0x0000000Au,c->r[0]); // 80268B20
L_80268B24:;
  cmpu(c,0,c->r[29],c->r[28]); // 80268B24
  if (!crb(c,0)) { goto L_80268BE8; } // 80268B28
  goto L_80268B34; // 80268B2C
L_80268B30:;
  c->r[29]=c->r[29]+0x0000000Cu; // 80268B30
L_80268B34:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 80268B34
  c->r[3]=c->r[25]|c->r[25]; // 80268B38
  c->r[4]=c->r[29]|c->r[29]; // 80268B3C
  c->ctr=c->r[12]; // 80268B40
  if (true) { c->lr=0x80268B48u; dispatch(c,c->ctr); } // 80268B44
  cmps(c,0,(int32_t)c->r[3],0); // 80268B48
  if (crb(c,2)) { IRQCHK(c); goto L_80268B30; } // 80268B4C
L_80268B50:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 80268B50
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 80268B54
  c->r[3]=c->r[25]|c->r[25]; // 80268B58
  c->r[4]=c->r[28]|c->r[28]; // 80268B5C
  c->ctr=c->r[12]; // 80268B60
  if (true) { c->lr=0x80268B68u; dispatch(c,c->ctr); } // 80268B64
  cmps(c,0,(int32_t)c->r[3],0); // 80268B68
  if (!crb(c,2)) { IRQCHK(c); goto L_80268B50; } // 80268B6C
  cmpu(c,0,c->r[29],c->r[28]); // 80268B70
  if (!crb(c,0)) { goto L_80268BE8; } // 80268B74
  c->r[7]=R32(c->r[29]+0x00000000u); // 80268B78
  c->r[0]=R32(c->r[29]+0x00000004u); // 80268B7C
  c->r[3]=R32(c->r[29]+0x00000008u); // 80268B80
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268B84
  W32(c->r[1]+0x00000010u,c->r[0]); // 80268B88
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80268B8C
  c->r[5]=R16(c->r[1]+0x00000010u); // 80268B90
  c->r[0]=R16(c->r[28]+0x00000004u); // 80268B94
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 80268B98
  c->r[4]=R16(c->r[1]+0x00000012u); // 80268B9C
  W16(c->r[29]+0x00000004u,c->r[0]); // 80268BA0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80268BA4
  c->r[6]=R16(c->r[28]+0x00000006u); // 80268BA8
  W32(c->r[1]+0x00000014u,c->r[3]); // 80268BAC
  W16(c->r[29]+0x00000006u,c->r[6]); // 80268BB0
  c->r[3]=R16(c->r[1]+0x00000014u); // 80268BB4
  c->r[6]=R16(c->r[28]+0x00000008u); // 80268BB8
  c->r[0]=R16(c->r[1]+0x00000016u); // 80268BBC
  W16(c->r[29]+0x00000008u,c->r[6]); // 80268BC0
  c->r[6]=R16(c->r[28]+0x0000000Au); // 80268BC4
  W16(c->r[29]+0x0000000Au,c->r[6]); // 80268BC8
  c->r[29]=c->r[29]+0x0000000Cu; // 80268BCC
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80268BD0
  W16(c->r[28]+0x00000004u,c->r[5]); // 80268BD4
  W16(c->r[28]+0x00000006u,c->r[4]); // 80268BD8
  W16(c->r[28]+0x00000008u,c->r[3]); // 80268BDC
  W16(c->r[28]+0x0000000Au,c->r[0]); // 80268BE0
  IRQCHK(c); goto L_80268B34; // 80268BE4
L_80268BE8:;
  c->r[25]=c->r[29]|c->r[29]; // 80268BE8
  IRQCHK(c); goto L_802686E0; // 80268BEC
L_80268BF0:;
  c->r[0]=c->r[29]-c->r[25]; // 80268BF0
  c->r[4]=c->r[24]+0xFFFFAAABu; // 80268BF4
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 80268BF8
  c->r[0]=c->r[26]-c->r[29]; // 80268BFC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 80268C00
  c->r[3]=sraw(c,c->r[3],1); // 80268C04
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 80268C08
  c->r[0]=sraw(c,c->r[0],1); // 80268C0C
  c->r[4]=c->r[3]+c->r[4]; // 80268C10
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80268C14
  c->r[0]=c->r[0]+c->r[3]; // 80268C18
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80268C1C
  if (!crb(c,0)) { goto L_80268C3C; } // 80268C20
  c->r[3]=c->r[25]|c->r[25]; // 80268C24
  c->r[4]=c->r[29]|c->r[29]; // 80268C28
  c->r[5]=c->r[1]+0x00000008u; // 80268C2C
  c->lr=0x80268C34u; f_80268C6C(c); // 80268C30
  c->r[25]=c->r[29]|c->r[29]; // 80268C34
  IRQCHK(c); goto L_802686E0; // 80268C38
L_80268C3C:;
  c->r[3]=c->r[29]|c->r[29]; // 80268C3C
  c->r[4]=c->r[26]|c->r[26]; // 80268C40
  c->r[5]=c->r[1]+0x00000008u; // 80268C44
  c->lr=0x80268C4Cu; f_80268C6C(c); // 80268C48
  c->r[26]=c->r[29]|c->r[29]; // 80268C4C
  IRQCHK(c); goto L_802686E0; // 80268C50
L_80268C54:;
  c->r[11]=c->r[1]+0x00000080u; // 80268C54
  c->lr=0x80268C5Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80268C58
  c->r[0]=R32(c->r[1]+0x00000084u); // 80268C5C
  c->lr=c->r[0]; // 80268C60
  c->r[1]=c->r[1]+0x00000080u; // 80268C64
  return; // 80268C68
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_80268C6C(Ctx* __restrict c) {
  trace_call(0x80268C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268C6C
  c->r[0]=c->lr; // 80268C70
  W32(c->r[1]+0x00000084u,c->r[0]); // 80268C74
  c->r[11]=c->r[1]+0x00000080u; // 80268C78
  c->lr=0x80268C80u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80268C7C
  c->r[23]=0u+0x2AAB0000u; // 80268C80
  c->r[6]=0u+0x66660000u; // 80268C84
  c->r[24]=c->r[3]|c->r[3]; // 80268C88
  c->r[25]=c->r[4]|c->r[4]; // 80268C8C
  c->r[26]=c->r[5]|c->r[5]; // 80268C90
  c->r[31]=c->r[6]+0x00006667u; // 80268C94
  c->r[30]=c->r[23]+0xFFFFAAABu; // 80268C98
L_80268C9C:;
  c->r[0]=c->r[25]-c->r[24]; // 80268C9C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 80268CA0
  c->r[0]=sraw(c,c->r[0],1); // 80268CA4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80268CA8
  c->r[7]=c->r[0]+c->r[3]; // 80268CAC
  cmps(c,0,(int32_t)c->r[7],1); // 80268CB0
  if (!crb(c,1)) { goto L_80269210; } // 80268CB4
  cmps(c,0,(int32_t)c->r[7],20); // 80268CB8
  if (crb(c,1)) { goto L_80268D90; } // 80268CBC
  cmpu(c,0,c->r[24],c->r[25]); // 80268CC0
  if (crb(c,2)) { goto L_80269210; } // 80268CC4
  c->r[23]=c->r[25]+0xFFFFFFF4u; // 80268CC8
  goto L_80268D84; // 80268CCC
L_80268CD0:;
  cmpu(c,0,c->r[24],c->r[25]); // 80268CD0
  c->r[27]=c->r[24]|c->r[24]; // 80268CD4
  if (crb(c,2)) { goto L_80268D10; } // 80268CD8
  c->r[28]=c->r[24]+0x0000000Cu; // 80268CDC
  goto L_80268D08; // 80268CE0
L_80268CE4:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80268CE4
  c->r[3]=c->r[28]|c->r[28]; // 80268CE8
  c->r[4]=c->r[27]|c->r[27]; // 80268CEC
  c->ctr=c->r[12]; // 80268CF0
  if (true) { c->lr=0x80268CF8u; dispatch(c,c->ctr); } // 80268CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80268CF8
  if (crb(c,2)) { goto L_80268D04; } // 80268CFC
  c->r[27]=c->r[28]|c->r[28]; // 80268D00
L_80268D04:;
  c->r[28]=c->r[28]+0x0000000Cu; // 80268D04
L_80268D08:;
  cmpu(c,0,c->r[28],c->r[25]); // 80268D08
  if (!crb(c,2)) { IRQCHK(c); goto L_80268CE4; } // 80268D0C
L_80268D10:;
  cmpu(c,0,c->r[27],c->r[24]); // 80268D10
  if (crb(c,2)) { goto L_80268D80; } // 80268D14
  c->r[7]=R32(c->r[27]+0x00000000u); // 80268D18
  c->r[0]=R32(c->r[27]+0x00000004u); // 80268D1C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80268D20
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268D24
  W32(c->r[1]+0x00000048u,c->r[0]); // 80268D28
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 80268D2C
  c->r[5]=R16(c->r[1]+0x00000048u); // 80268D30
  c->r[0]=R16(c->r[24]+0x00000004u); // 80268D34
  W32(c->r[1]+0x00000044u,c->r[7]); // 80268D38
  c->r[4]=R16(c->r[1]+0x0000004Au); // 80268D3C
  W16(c->r[27]+0x00000004u,c->r[0]); // 80268D40
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268D44
  c->r[6]=R16(c->r[24]+0x00000006u); // 80268D48
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 80268D4C
  W16(c->r[27]+0x00000006u,c->r[6]); // 80268D50
  c->r[3]=R16(c->r[1]+0x0000004Cu); // 80268D54
  c->r[6]=R16(c->r[24]+0x00000008u); // 80268D58
  c->r[0]=R16(c->r[1]+0x0000004Eu); // 80268D5C
  W16(c->r[27]+0x00000008u,c->r[6]); // 80268D60
  c->r[6]=R16(c->r[24]+0x0000000Au); // 80268D64
  W16(c->r[27]+0x0000000Au,c->r[6]); // 80268D68
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 80268D6C
  W16(c->r[24]+0x00000004u,c->r[5]); // 80268D70
  W16(c->r[24]+0x00000006u,c->r[4]); // 80268D74
  W16(c->r[24]+0x00000008u,c->r[3]); // 80268D78
  W16(c->r[24]+0x0000000Au,c->r[0]); // 80268D7C
L_80268D80:;
  c->r[24]=c->r[24]+0x0000000Cu; // 80268D80
L_80268D84:;
  cmpu(c,0,c->r[24],c->r[23]); // 80268D84
  if (!crb(c,2)) { IRQCHK(c); goto L_80268CD0; } // 80268D88
  goto L_80269210; // 80268D8C
L_80268D90:;
  c->r[4]=R32(c->r[13]+0xFFFF9734u); // 80268D90
  c->r[0]=sraw(c,c->r[7],2); // 80268D94
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80268D98
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 80268D9C
  c->r[6]=c->r[4]+0x00000001u; // 80268DA0
  cmps(c,0,(int32_t)c->r[6],5); // 80268DA4
  c->r[0]=sraw(c,c->r[0],1); // 80268DA8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80268DAC
  c->r[0]=c->r[0]+c->r[3]; // 80268DB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80268DB4
  c->r[0]=c->r[4]-c->r[0]; // 80268DB8
  c->r[0]=c->r[5]+c->r[0]; // 80268DBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80268DC0
  c->r[3]=c->r[24]+c->r[0]; // 80268DC4
  if (crb(c,0)) { goto L_80268DD0; } // 80268DC8
  c->r[6]=0u+0xFFFFFFFCu; // 80268DCC
L_80268DD0:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 80268DD0
  c->r[0]=c->r[6]+0x00000001u; // 80268DD4
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80268DD8
  W32(c->r[13]+0xFFFF9734u,c->r[0]); // 80268DDC
  cmps(c,0,(int32_t)c->r[0],5); // 80268DE0
  c->r[0]=c->r[5]-c->r[7]; // 80268DE4
  c->r[0]=sraw(c,c->r[0],2); // 80268DE8
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80268DEC
  c->r[0]=sraw(c,c->r[4],1); // 80268DF0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80268DF4
  c->r[0]=c->r[0]+c->r[4]; // 80268DF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80268DFC
  c->r[0]=c->r[6]-c->r[0]; // 80268E00
  c->r[0]=c->r[5]+c->r[0]; // 80268E04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80268E08
  c->r[4]=c->r[24]+c->r[0]; // 80268E0C
  if (crb(c,0)) { goto L_80268E1C; } // 80268E10
  c->r[6]=0u+0xFFFFFFFCu; // 80268E14
  W32(c->r[13]+0xFFFF9734u,c->r[6]); // 80268E18
L_80268E1C:;
  c->r[27]=c->r[25]+0xFFFFFFF4u; // 80268E1C
  c->r[6]=c->r[26]|c->r[26]; // 80268E20
  c->r[5]=c->r[27]|c->r[27]; // 80268E24
  c->lr=0x80268E2Cu; f_80269228(c); // 80268E28
  c->r[29]=c->r[24]|c->r[24]; // 80268E2C
  c->r[28]=c->r[27]|c->r[27]; // 80268E30
  goto L_80268E3C; // 80268E34
L_80268E38:;
  c->r[29]=c->r[29]+0x0000000Cu; // 80268E38
L_80268E3C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80268E3C
  c->r[3]=c->r[29]|c->r[29]; // 80268E40
  c->r[4]=c->r[27]|c->r[27]; // 80268E44
  c->ctr=c->r[12]; // 80268E48
  if (true) { c->lr=0x80268E50u; dispatch(c,c->ctr); } // 80268E4C
  cmps(c,0,(int32_t)c->r[3],0); // 80268E50
  if (!crb(c,2)) { IRQCHK(c); goto L_80268E38; } // 80268E54
L_80268E58:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 80268E58
  cmpu(c,0,c->r[29],c->r[28]); // 80268E5C
  if (crb(c,2)) { goto L_80268E80; } // 80268E60
  c->r[12]=R32(c->r[26]+0x00000000u); // 80268E64
  c->r[3]=c->r[28]|c->r[28]; // 80268E68
  c->r[4]=c->r[27]|c->r[27]; // 80268E6C
  c->ctr=c->r[12]; // 80268E70
  if (true) { c->lr=0x80268E78u; dispatch(c,c->ctr); } // 80268E74
  cmps(c,0,(int32_t)c->r[3],0); // 80268E78
  if (crb(c,2)) { IRQCHK(c); goto L_80268E58; } // 80268E7C
L_80268E80:;
  cmpu(c,0,c->r[29],c->r[28]); // 80268E80
  if (!crb(c,0)) { goto L_80268FB0; } // 80268E84
  c->r[7]=R32(c->r[29]+0x00000000u); // 80268E88
  c->r[0]=R32(c->r[29]+0x00000004u); // 80268E8C
  c->r[3]=R32(c->r[29]+0x00000008u); // 80268E90
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268E94
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80268E98
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80268E9C
  c->r[5]=R16(c->r[1]+0x0000003Cu); // 80268EA0
  c->r[0]=R16(c->r[28]+0x00000004u); // 80268EA4
  W32(c->r[1]+0x00000038u,c->r[7]); // 80268EA8
  c->r[4]=R16(c->r[1]+0x0000003Eu); // 80268EAC
  W16(c->r[29]+0x00000004u,c->r[0]); // 80268EB0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268EB4
  c->r[6]=R16(c->r[28]+0x00000006u); // 80268EB8
  W32(c->r[1]+0x00000040u,c->r[3]); // 80268EBC
  W16(c->r[29]+0x00000006u,c->r[6]); // 80268EC0
  c->r[3]=R16(c->r[1]+0x00000040u); // 80268EC4
  c->r[6]=R16(c->r[28]+0x00000008u); // 80268EC8
  c->r[0]=R16(c->r[1]+0x00000042u); // 80268ECC
  W16(c->r[29]+0x00000008u,c->r[6]); // 80268ED0
  c->r[6]=R16(c->r[28]+0x0000000Au); // 80268ED4
  W16(c->r[29]+0x0000000Au,c->r[6]); // 80268ED8
  c->r[29]=c->r[29]+0x0000000Cu; // 80268EDC
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80268EE0
  W16(c->r[28]+0x00000004u,c->r[5]); // 80268EE4
  W16(c->r[28]+0x00000006u,c->r[4]); // 80268EE8
  W16(c->r[28]+0x00000008u,c->r[3]); // 80268EEC
  W16(c->r[28]+0x0000000Au,c->r[0]); // 80268EF0
  goto L_80268EFC; // 80268EF4
L_80268EF8:;
  c->r[29]=c->r[29]+0x0000000Cu; // 80268EF8
L_80268EFC:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80268EFC
  c->r[3]=c->r[29]|c->r[29]; // 80268F00
  c->r[4]=c->r[27]|c->r[27]; // 80268F04
  c->ctr=c->r[12]; // 80268F08
  if (true) { c->lr=0x80268F10u; dispatch(c,c->ctr); } // 80268F0C
  cmps(c,0,(int32_t)c->r[3],0); // 80268F10
  if (!crb(c,2)) { IRQCHK(c); goto L_80268EF8; } // 80268F14
L_80268F18:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80268F18
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 80268F1C
  c->r[3]=c->r[28]|c->r[28]; // 80268F20
  c->r[4]=c->r[27]|c->r[27]; // 80268F24
  c->ctr=c->r[12]; // 80268F28
  if (true) { c->lr=0x80268F30u; dispatch(c,c->ctr); } // 80268F2C
  cmps(c,0,(int32_t)c->r[3],0); // 80268F30
  if (crb(c,2)) { IRQCHK(c); goto L_80268F18; } // 80268F34
  cmpu(c,0,c->r[29],c->r[28]); // 80268F38
  if (!crb(c,0)) { goto L_80268FB0; } // 80268F3C
  c->r[7]=R32(c->r[29]+0x00000000u); // 80268F40
  c->r[0]=R32(c->r[29]+0x00000004u); // 80268F44
  c->r[3]=R32(c->r[29]+0x00000008u); // 80268F48
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268F4C
  W32(c->r[1]+0x00000030u,c->r[0]); // 80268F50
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80268F54
  c->r[5]=R16(c->r[1]+0x00000030u); // 80268F58
  c->r[0]=R16(c->r[28]+0x00000004u); // 80268F5C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 80268F60
  c->r[4]=R16(c->r[1]+0x00000032u); // 80268F64
  W16(c->r[29]+0x00000004u,c->r[0]); // 80268F68
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80268F6C
  c->r[6]=R16(c->r[28]+0x00000006u); // 80268F70
  W32(c->r[1]+0x00000034u,c->r[3]); // 80268F74
  W16(c->r[29]+0x00000006u,c->r[6]); // 80268F78
  c->r[3]=R16(c->r[1]+0x00000034u); // 80268F7C
  c->r[6]=R16(c->r[28]+0x00000008u); // 80268F80
  c->r[0]=R16(c->r[1]+0x00000036u); // 80268F84
  W16(c->r[29]+0x00000008u,c->r[6]); // 80268F88
  c->r[6]=R16(c->r[28]+0x0000000Au); // 80268F8C
  W16(c->r[29]+0x0000000Au,c->r[6]); // 80268F90
  c->r[29]=c->r[29]+0x0000000Cu; // 80268F94
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80268F98
  W16(c->r[28]+0x00000004u,c->r[5]); // 80268F9C
  W16(c->r[28]+0x00000006u,c->r[4]); // 80268FA0
  W16(c->r[28]+0x00000008u,c->r[3]); // 80268FA4
  W16(c->r[28]+0x0000000Au,c->r[0]); // 80268FA8
  IRQCHK(c); goto L_80268EFC; // 80268FAC
L_80268FB0:;
  cmpu(c,0,c->r[29],c->r[24]); // 80268FB0
  if (!crb(c,2)) { goto L_802691AC; } // 80268FB4
  c->r[9]=R32(c->r[29]+0x00000000u); // 80268FB8
  c->r[28]=c->r[25]+0xFFFFFFF4u; // 80268FBC
  c->r[0]=R32(c->r[29]+0x00000004u); // 80268FC0
  c->r[3]=c->r[24]|c->r[24]; // 80268FC4
  c->r[5]=R32(c->r[29]+0x00000008u); // 80268FC8
  c->r[4]=c->r[28]|c->r[28]; // 80268FCC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268FD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80268FD4
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80268FD8
  c->r[7]=R16(c->r[1]+0x00000024u); // 80268FDC
  c->r[0]=R16(c->r[27]+0x00000004u); // 80268FE0
  W32(c->r[1]+0x00000020u,c->r[9]); // 80268FE4
  c->r[6]=R16(c->r[1]+0x00000026u); // 80268FE8
  W16(c->r[29]+0x00000004u,c->r[0]); // 80268FEC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80268FF0
  c->r[8]=R16(c->r[27]+0x00000006u); // 80268FF4
  W32(c->r[1]+0x00000028u,c->r[5]); // 80268FF8
  W16(c->r[29]+0x00000006u,c->r[8]); // 80268FFC
  c->r[5]=R16(c->r[1]+0x00000028u); // 80269000
  c->r[8]=R16(c->r[27]+0x00000008u); // 80269004
  c->r[0]=R16(c->r[1]+0x0000002Au); // 80269008
  W16(c->r[29]+0x00000008u,c->r[8]); // 8026900C
  c->r[8]=R16(c->r[27]+0x0000000Au); // 80269010
  W16(c->r[29]+0x0000000Au,c->r[8]); // 80269014
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 80269018
  W16(c->r[27]+0x00000004u,c->r[7]); // 8026901C
  W16(c->r[27]+0x00000006u,c->r[6]); // 80269020
  W16(c->r[27]+0x00000008u,c->r[5]); // 80269024
  W16(c->r[27]+0x0000000Au,c->r[0]); // 80269028
  c->r[12]=R32(c->r[26]+0x00000000u); // 8026902C
  c->ctr=c->r[12]; // 80269030
  c->r[29]=c->r[29]+0x0000000Cu; // 80269034
  if (true) { c->lr=0x8026903Cu; dispatch(c,c->ctr); } // 80269038
  cmps(c,0,(int32_t)c->r[3],0); // 8026903C
  if (!crb(c,2)) { goto L_802690E0; } // 80269040
  goto L_8026904C; // 80269044
L_80269048:;
  c->r[29]=c->r[29]+0x0000000Cu; // 80269048
L_8026904C:;
  cmpu(c,0,c->r[29],c->r[25]); // 8026904C
  if (crb(c,2)) { goto L_80269070; } // 80269050
  c->r[12]=R32(c->r[26]+0x00000000u); // 80269054
  c->r[3]=c->r[24]|c->r[24]; // 80269058
  c->r[4]=c->r[29]|c->r[29]; // 8026905C
  c->ctr=c->r[12]; // 80269060
  if (true) { c->lr=0x80269068u; dispatch(c,c->ctr); } // 80269064
  cmps(c,0,(int32_t)c->r[3],0); // 80269068
  if (crb(c,2)) { IRQCHK(c); goto L_80269048; } // 8026906C
L_80269070:;
  cmpu(c,0,c->r[29],c->r[28]); // 80269070
  if (!crb(c,0)) { goto L_802690E0; } // 80269074
  c->r[7]=R32(c->r[29]+0x00000000u); // 80269078
  c->r[0]=R32(c->r[29]+0x00000004u); // 8026907C
  c->r[3]=R32(c->r[29]+0x00000008u); // 80269080
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269084
  W32(c->r[1]+0x00000018u,c->r[0]); // 80269088
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8026908C
  c->r[5]=R16(c->r[1]+0x00000018u); // 80269090
  c->r[0]=R16(c->r[28]+0x00000004u); // 80269094
  W32(c->r[1]+0x00000014u,c->r[7]); // 80269098
  c->r[4]=R16(c->r[1]+0x0000001Au); // 8026909C
  W16(c->r[29]+0x00000004u,c->r[0]); // 802690A0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802690A4
  c->r[6]=R16(c->r[28]+0x00000006u); // 802690A8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802690AC
  W16(c->r[29]+0x00000006u,c->r[6]); // 802690B0
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 802690B4
  c->r[6]=R16(c->r[28]+0x00000008u); // 802690B8
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 802690BC
  W16(c->r[29]+0x00000008u,c->r[6]); // 802690C0
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802690C4
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802690C8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802690CC
  W16(c->r[28]+0x00000004u,c->r[5]); // 802690D0
  W16(c->r[28]+0x00000006u,c->r[4]); // 802690D4
  W16(c->r[28]+0x00000008u,c->r[3]); // 802690D8
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802690DC
L_802690E0:;
  cmpu(c,0,c->r[29],c->r[28]); // 802690E0
  if (!crb(c,0)) { goto L_802691A4; } // 802690E4
  goto L_802690F0; // 802690E8
L_802690EC:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802690EC
L_802690F0:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802690F0
  c->r[3]=c->r[24]|c->r[24]; // 802690F4
  c->r[4]=c->r[29]|c->r[29]; // 802690F8
  c->ctr=c->r[12]; // 802690FC
  if (true) { c->lr=0x80269104u; dispatch(c,c->ctr); } // 80269100
  cmps(c,0,(int32_t)c->r[3],0); // 80269104
  if (crb(c,2)) { IRQCHK(c); goto L_802690EC; } // 80269108
L_8026910C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 8026910C
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 80269110
  c->r[3]=c->r[24]|c->r[24]; // 80269114
  c->r[4]=c->r[28]|c->r[28]; // 80269118
  c->ctr=c->r[12]; // 8026911C
  if (true) { c->lr=0x80269124u; dispatch(c,c->ctr); } // 80269120
  cmps(c,0,(int32_t)c->r[3],0); // 80269124
  if (!crb(c,2)) { IRQCHK(c); goto L_8026910C; } // 80269128
  cmpu(c,0,c->r[29],c->r[28]); // 8026912C
  if (!crb(c,0)) { goto L_802691A4; } // 80269130
  c->r[7]=R32(c->r[29]+0x00000000u); // 80269134
  c->r[0]=R32(c->r[29]+0x00000004u); // 80269138
  c->r[3]=R32(c->r[29]+0x00000008u); // 8026913C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269140
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80269144
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80269148
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 8026914C
  c->r[0]=R16(c->r[28]+0x00000004u); // 80269150
  W32(c->r[1]+0x00000008u,c->r[7]); // 80269154
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 80269158
  W16(c->r[29]+0x00000004u,c->r[0]); // 8026915C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269160
  c->r[6]=R16(c->r[28]+0x00000006u); // 80269164
  W32(c->r[1]+0x00000010u,c->r[3]); // 80269168
  W16(c->r[29]+0x00000006u,c->r[6]); // 8026916C
  c->r[3]=R16(c->r[1]+0x00000010u); // 80269170
  c->r[6]=R16(c->r[28]+0x00000008u); // 80269174
  c->r[0]=R16(c->r[1]+0x00000012u); // 80269178
  W16(c->r[29]+0x00000008u,c->r[6]); // 8026917C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 80269180
  W16(c->r[29]+0x0000000Au,c->r[6]); // 80269184
  c->r[29]=c->r[29]+0x0000000Cu; // 80269188
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8026918C
  W16(c->r[28]+0x00000004u,c->r[5]); // 80269190
  W16(c->r[28]+0x00000006u,c->r[4]); // 80269194
  W16(c->r[28]+0x00000008u,c->r[3]); // 80269198
  W16(c->r[28]+0x0000000Au,c->r[0]); // 8026919C
  IRQCHK(c); goto L_802690F0; // 802691A0
L_802691A4:;
  c->r[24]=c->r[29]|c->r[29]; // 802691A4
  IRQCHK(c); goto L_80268C9C; // 802691A8
L_802691AC:;
  c->r[0]=c->r[29]-c->r[24]; // 802691AC
  c->r[4]=c->r[23]+0xFFFFAAABu; // 802691B0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802691B4
  c->r[0]=c->r[25]-c->r[29]; // 802691B8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802691BC
  c->r[3]=sraw(c,c->r[3],1); // 802691C0
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 802691C4
  c->r[0]=sraw(c,c->r[0],1); // 802691C8
  c->r[4]=c->r[3]+c->r[4]; // 802691CC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802691D0
  c->r[0]=c->r[0]+c->r[3]; // 802691D4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802691D8
  if (!crb(c,0)) { goto L_802691F8; } // 802691DC
  c->r[3]=c->r[24]|c->r[24]; // 802691E0
  c->r[4]=c->r[29]|c->r[29]; // 802691E4
  c->r[5]=c->r[26]|c->r[26]; // 802691E8
  c->lr=0x802691F0u; f_80268C6C(c); // 802691EC
  c->r[24]=c->r[29]|c->r[29]; // 802691F0
  IRQCHK(c); goto L_80268C9C; // 802691F4
L_802691F8:;
  c->r[3]=c->r[29]|c->r[29]; // 802691F8
  c->r[4]=c->r[25]|c->r[25]; // 802691FC
  c->r[5]=c->r[26]|c->r[26]; // 80269200
  c->lr=0x80269208u; f_80268C6C(c); // 80269204
  c->r[25]=c->r[29]|c->r[29]; // 80269208
  IRQCHK(c); goto L_80268C9C; // 8026920C
L_80269210:;
  c->r[11]=c->r[1]+0x00000080u; // 80269210
  c->lr=0x80269218u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80269214
  c->r[0]=R32(c->r[1]+0x00000084u); // 80269218
  c->lr=c->r[0]; // 8026921C
  c->r[1]=c->r[1]+0x00000080u; // 80269220
  return; // 80269224
}

// __sort132<RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b,PQ54nw4r3g3d6detail7workmem4MdlZ>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_80269228(Ctx* __restrict c) {
  trace_call(0x80269228u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269228
  c->r[0]=c->lr; // 8026922C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80269230
  c->r[11]=c->r[1]+0x00000050u; // 80269234
  c->lr=0x8026923Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80269238
  c->r[12]=R32(c->r[6]+0x00000000u); // 8026923C
  c->r[29]=c->r[3]|c->r[3]; // 80269240
  c->r[31]=c->r[5]|c->r[5]; // 80269244
  c->r[30]=c->r[4]|c->r[4]; // 80269248
  c->r[27]=c->r[6]|c->r[6]; // 8026924C
  c->r[4]=c->r[29]|c->r[29]; // 80269250
  c->r[3]=c->r[31]|c->r[31]; // 80269254
  c->ctr=c->r[12]; // 80269258
  if (true) { c->lr=0x80269260u; dispatch(c,c->ctr); } // 8026925C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80269260
  c->r[0]=cntlz(c->r[3]); // 80269264
  c->r[3]=c->r[30]|c->r[30]; // 80269268
  c->r[4]=c->r[31]|c->r[31]; // 8026926C
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 80269270
  c->ctr=c->r[12]; // 80269274
  if (true) { c->lr=0x8026927Cu; dispatch(c,c->ctr); } // 80269278
  cmps(c,0,(int32_t)c->r[28],0); // 8026927C
  c->r[0]=cntlz(c->r[3]); // 80269280
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80269284
  if (crb(c,2)) { goto L_80269294; } // 80269288
  cmps(c,0,(int32_t)c->r[0],0); // 8026928C
  if (!crb(c,2)) { goto L_80269470; } // 80269290
L_80269294:;
  cmps(c,0,(int32_t)c->r[28],0); // 80269294
  if (!crb(c,2)) { goto L_80269310; } // 80269298
  cmps(c,0,(int32_t)c->r[0],0); // 8026929C
  if (!crb(c,2)) { goto L_80269310; } // 802692A0
  c->r[7]=R32(c->r[29]+0x00000000u); // 802692A4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802692A8
  c->r[4]=R32(c->r[29]+0x00000004u); // 802692AC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802692B0
  c->r[3]=R32(c->r[29]+0x00000008u); // 802692B4
  c->r[0]=R16(c->r[30]+0x00000004u); // 802692B8
  W32(c->r[1]+0x00000030u,c->r[4]); // 802692BC
  W16(c->r[29]+0x00000004u,c->r[0]); // 802692C0
  c->r[5]=R16(c->r[1]+0x00000030u); // 802692C4
  c->r[0]=R16(c->r[30]+0x00000006u); // 802692C8
  W32(c->r[1]+0x00000034u,c->r[3]); // 802692CC
  c->r[4]=R16(c->r[1]+0x00000032u); // 802692D0
  W16(c->r[29]+0x00000006u,c->r[0]); // 802692D4
  c->r[3]=R16(c->r[1]+0x00000034u); // 802692D8
  c->r[6]=R16(c->r[30]+0x00000008u); // 802692DC
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 802692E0
  c->r[0]=R16(c->r[1]+0x00000036u); // 802692E4
  W16(c->r[29]+0x00000008u,c->r[6]); // 802692E8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802692EC
  c->r[6]=R16(c->r[30]+0x0000000Au); // 802692F0
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802692F4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802692F8
  W16(c->r[30]+0x00000004u,c->r[5]); // 802692FC
  W16(c->r[30]+0x00000006u,c->r[4]); // 80269300
  W16(c->r[30]+0x00000008u,c->r[3]); // 80269304
  W16(c->r[30]+0x0000000Au,c->r[0]); // 80269308
  goto L_80269470; // 8026930C
L_80269310:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80269310
  c->r[3]=c->r[30]|c->r[30]; // 80269314
  c->r[4]=c->r[29]|c->r[29]; // 80269318
  c->ctr=c->r[12]; // 8026931C
  if (true) { c->lr=0x80269324u; dispatch(c,c->ctr); } // 80269320
  cmps(c,0,(int32_t)c->r[3],0); // 80269324
  if (crb(c,2)) { goto L_80269394; } // 80269328
  c->r[7]=R32(c->r[29]+0x00000000u); // 8026932C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269330
  c->r[4]=R32(c->r[29]+0x00000004u); // 80269334
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80269338
  c->r[3]=R32(c->r[29]+0x00000008u); // 8026933C
  c->r[0]=R16(c->r[30]+0x00000004u); // 80269340
  W32(c->r[1]+0x00000024u,c->r[4]); // 80269344
  W16(c->r[29]+0x00000004u,c->r[0]); // 80269348
  c->r[5]=R16(c->r[1]+0x00000024u); // 8026934C
  c->r[0]=R16(c->r[30]+0x00000006u); // 80269350
  W32(c->r[1]+0x00000028u,c->r[3]); // 80269354
  c->r[4]=R16(c->r[1]+0x00000026u); // 80269358
  W16(c->r[29]+0x00000006u,c->r[0]); // 8026935C
  c->r[3]=R16(c->r[1]+0x00000028u); // 80269360
  c->r[6]=R16(c->r[30]+0x00000008u); // 80269364
  W32(c->r[1]+0x00000020u,c->r[7]); // 80269368
  c->r[0]=R16(c->r[1]+0x0000002Au); // 8026936C
  W16(c->r[29]+0x00000008u,c->r[6]); // 80269370
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269374
  c->r[6]=R16(c->r[30]+0x0000000Au); // 80269378
  W16(c->r[29]+0x0000000Au,c->r[6]); // 8026937C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 80269380
  W16(c->r[30]+0x00000004u,c->r[5]); // 80269384
  W16(c->r[30]+0x00000006u,c->r[4]); // 80269388
  W16(c->r[30]+0x00000008u,c->r[3]); // 8026938C
  W16(c->r[30]+0x0000000Au,c->r[0]); // 80269390
L_80269394:;
  cmps(c,0,(int32_t)c->r[28],0); // 80269394
  if (crb(c,2)) { goto L_80269408; } // 80269398
  c->r[7]=R32(c->r[30]+0x00000000u); // 8026939C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802693A0
  c->r[4]=R32(c->r[30]+0x00000004u); // 802693A4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802693A8
  c->r[3]=R32(c->r[30]+0x00000008u); // 802693AC
  c->r[0]=R16(c->r[31]+0x00000004u); // 802693B0
  W32(c->r[1]+0x00000018u,c->r[4]); // 802693B4
  W16(c->r[30]+0x00000004u,c->r[0]); // 802693B8
  c->r[5]=R16(c->r[1]+0x00000018u); // 802693BC
  c->r[0]=R16(c->r[31]+0x00000006u); // 802693C0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802693C4
  c->r[4]=R16(c->r[1]+0x0000001Au); // 802693C8
  W16(c->r[30]+0x00000006u,c->r[0]); // 802693CC
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 802693D0
  c->r[6]=R16(c->r[31]+0x00000008u); // 802693D4
  W32(c->r[1]+0x00000014u,c->r[7]); // 802693D8
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 802693DC
  W16(c->r[30]+0x00000008u,c->r[6]); // 802693E0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802693E4
  c->r[6]=R16(c->r[31]+0x0000000Au); // 802693E8
  W16(c->r[30]+0x0000000Au,c->r[6]); // 802693EC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802693F0
  W16(c->r[31]+0x00000004u,c->r[5]); // 802693F4
  W16(c->r[31]+0x00000006u,c->r[4]); // 802693F8
  W16(c->r[31]+0x00000008u,c->r[3]); // 802693FC
  W16(c->r[31]+0x0000000Au,c->r[0]); // 80269400
  goto L_80269470; // 80269404
L_80269408:;
  c->r[7]=R32(c->r[29]+0x00000000u); // 80269408
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026940C
  c->r[4]=R32(c->r[29]+0x00000004u); // 80269410
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80269414
  c->r[3]=R32(c->r[29]+0x00000008u); // 80269418
  c->r[0]=R16(c->r[31]+0x00000004u); // 8026941C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80269420
  W16(c->r[29]+0x00000004u,c->r[0]); // 80269424
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 80269428
  c->r[0]=R16(c->r[31]+0x00000006u); // 8026942C
  W32(c->r[1]+0x00000010u,c->r[3]); // 80269430
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 80269434
  W16(c->r[29]+0x00000006u,c->r[0]); // 80269438
  c->r[3]=R16(c->r[1]+0x00000010u); // 8026943C
  c->r[6]=R16(c->r[31]+0x00000008u); // 80269440
  W32(c->r[1]+0x00000008u,c->r[7]); // 80269444
  c->r[0]=R16(c->r[1]+0x00000012u); // 80269448
  W16(c->r[29]+0x00000008u,c->r[6]); // 8026944C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269450
  c->r[6]=R16(c->r[31]+0x0000000Au); // 80269454
  W16(c->r[29]+0x0000000Au,c->r[6]); // 80269458
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8026945C
  W16(c->r[31]+0x00000004u,c->r[5]); // 80269460
  W16(c->r[31]+0x00000006u,c->r[4]); // 80269464
  W16(c->r[31]+0x00000008u,c->r[3]); // 80269468
  W16(c->r[31]+0x0000000Au,c->r[0]); // 8026946C
L_80269470:;
  c->r[11]=c->r[1]+0x00000050u; // 80269470
  c->lr=0x80269478u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80269474
  c->r[0]=R32(c->r[1]+0x00000054u); // 80269478
  c->lr=c->r[0]; // 8026947C
  c->r[1]=c->r[1]+0x00000050u; // 80269480
  return; // 80269484
}

// __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
void f_80269488(Ctx* __restrict c) {
  trace_call(0x80269488u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 80269488
  return; // 8026948C
}

// Init__Q34nw4r3g3d6CameraFv
void f_80269490(Ctx* __restrict c) {
  trace_call(0x80269490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269490
  c->r[0]=c->lr; // 80269494
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026949C
  c->r[31]=c->r[3]|c->r[3]; // 802694A0
  c->lr=0x802694A8u; f_80263374(c); // 802694A4
  c->r[9]=c->r[3]|c->r[3]; // 802694A8
  c->r[4]=R16(c->r[3]+0x00000004u); // 802694AC
  c->r[5]=R16(c->r[3]+0x00000006u); // 802694B0
  c->r[3]=c->r[31]|c->r[31]; // 802694B4
  c->r[7]=R16(c->r[9]+0x00000008u); // 802694B8
  c->r[6]=c->r[4]|c->r[4]; // 802694BC
  c->r[8]=R16(c->r[9]+0x0000000Eu); // 802694C0
  c->r[9]=R16(c->r[9]+0x00000010u); // 802694C4
  c->lr=0x802694CCu; f_802694E0(c); // 802694C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802694CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802694D0
  c->lr=c->r[0]; // 802694D4
  c->r[1]=c->r[1]+0x00000010u; // 802694D8
  return; // 802694DC
}

// Init__Q34nw4r3g3d6CameraFUsUsUsUsUsUs
void f_802694E0(Ctx* __restrict c) {
  trace_call(0x802694E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802694E0
  c->r[0]=0u+0x43300000u; // 802694E4
  c->r[10]=R32(c->r[3]+0x00000000u); // 802694E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802694EC
  cmps(c,0,(int32_t)c->r[10],0); // 802694F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 802694F4
  if (crb(c,2)) { goto L_802695F4; } // 802694F8
  c->r[3]=0u+0x00000021u; // 802694FC
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 80269500
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[8]=c->ps1[8]=RF32(ea);} // 80269504
  c->r[0]=0u+0x00000000u; // 80269508
  W32(c->r[10]+0x00000070u,c->r[3]); // 8026950C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80269510
  {uint32_t ea=c->r[10]+0x00000074u; WF32(ea,c->f[8]);} // 80269514
  {uint32_t ea=c->r[2]+0xFFFF9D24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269518
  {uint32_t ea=c->r[10]+0x00000078u; WF32(ea,c->f[8]);} // 8026951C
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[3]=RF64(ea);} // 80269520
  {uint32_t ea=c->r[10]+0x0000007Cu; WF32(ea,c->f[1]);} // 80269524
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[7]=c->ps1[7]=RF32(ea);} // 80269528
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8026952C
  {uint32_t ea=c->r[10]+0x00000080u; WF32(ea,c->f[8]);} // 80269530
  {uint32_t ea=c->r[2]+0xFFFF9D2Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80269534
  {uint32_t ea=c->r[10]+0x00000084u; WF32(ea,c->f[7]);} // 80269538
  {uint32_t ea=c->r[2]+0xFFFF9D30u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026953C
  {uint32_t ea=c->r[10]+0x00000088u; WF32(ea,c->f[8]);} // 80269540
  {uint32_t ea=c->r[2]+0xFFFF9D34u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269544
  {uint32_t ea=c->r[10]+0x0000008Cu; WF32(ea,c->f[8]);} // 80269548
  {uint32_t ea=c->r[2]+0xFFFF9D38u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026954C
  {uint32_t ea=c->r[10]+0x00000090u; WF32(ea,c->f[8]);} // 80269550
  {uint32_t ea=c->r[2]+0xFFFF9D3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269554
  {uint32_t ea=c->r[10]+0x00000094u; WF32(ea,c->f[8]);} // 80269558
  {uint32_t ea=c->r[10]+0x00000098u; WF32(ea,c->f[8]);} // 8026955C
  {uint32_t ea=c->r[10]+0x0000009Cu; WF32(ea,c->f[8]);} // 80269560
  {uint32_t ea=c->r[10]+0x000000A0u; WF32(ea,c->f[8]);} // 80269564
  {uint32_t ea=c->r[10]+0x000000A4u; WF32(ea,c->f[8]);} // 80269568
  W32(c->r[10]+0x000000A8u,c->r[0]); // 8026956C
  {uint32_t ea=c->r[10]+0x000000ACu; WF32(ea,c->f[6]);} // 80269570
  {uint32_t ea=c->r[10]+0x000000B0u; WF32(ea,c->f[5]);} // 80269574
  {uint32_t ea=c->r[10]+0x000000B4u; WF32(ea,c->f[4]);} // 80269578
  {uint32_t ea=c->r[10]+0x000000B8u; WF32(ea,c->f[1]);} // 8026957C
  W32(c->r[1]+0x00000014u,c->r[8]); // 80269580
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80269584
  {uint32_t ea=c->r[10]+0x000000BCu; WF32(ea,c->f[8]);} // 80269588
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8026958C
  {uint32_t ea=c->r[10]+0x000000C0u; WF32(ea,c->f[2]);} // 80269590
  {uint32_t ea=c->r[10]+0x000000C4u; WF32(ea,c->f[8]);} // 80269594
  {uint32_t ea=c->r[10]+0x000000C8u; WF32(ea,c->f[1]);} // 80269598
  {uint32_t ea=c->r[10]+0x000000CCu; WF32(ea,c->f[0]);} // 8026959C
  {uint32_t ea=c->r[10]+0x000000D0u; WF32(ea,c->f[0]);} // 802695A0
  {uint32_t ea=c->r[10]+0x000000D4u; WF32(ea,c->f[0]);} // 802695A4
  {uint32_t ea=c->r[10]+0x000000D8u; WF32(ea,c->f[0]);} // 802695A8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 802695AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802695B0
  {uint32_t ea=c->r[10]+0x000000DCu; WF32(ea,c->f[8]);} // 802695B4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 802695B8
  W32(c->r[1]+0x00000014u,c->r[7]); // 802695BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802695C0
  {uint32_t ea=c->r[10]+0x000000E0u; WF32(ea,c->f[8]);} // 802695C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802695C8
  {uint32_t ea=c->r[10]+0x000000E4u; WF32(ea,c->f[1]);} // 802695CC
  {uint32_t ea=c->r[10]+0x000000E8u; WF32(ea,c->f[0]);} // 802695D0
  {uint32_t ea=c->r[10]+0x000000ECu; WF32(ea,c->f[8]);} // 802695D4
  {uint32_t ea=c->r[10]+0x000000F0u; WF32(ea,c->f[7]);} // 802695D8
  W32(c->r[10]+0x000000F4u,c->r[0]); // 802695DC
  W32(c->r[10]+0x000000F8u,c->r[0]); // 802695E0
  W32(c->r[10]+0x000000FCu,c->r[4]); // 802695E4
  W32(c->r[10]+0x00000100u,c->r[5]); // 802695E8
  W32(c->r[10]+0x00000104u,c->r[0]); // 802695EC
  W32(c->r[10]+0x00000108u,c->r[0]); // 802695F0
L_802695F4:;
  c->r[1]=c->r[1]+0x00000020u; // 802695F4
  return; // 802695F8
}

// SetPosition__Q34nw4r3g3d6CameraFfff
void f_802695FC(Ctx* __restrict c) {
  trace_call(0x802695FCu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802695FC
  cmps(c,0,(int32_t)c->r[3],0); // 80269600
  if (crb(c,2)) return; // 80269604
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 80269608
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[2]);} // 8026960C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[3]);} // 80269610
  c->r[0]=R32(c->r[3]+0x00000070u); // 80269614
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80269618
  W32(c->r[3]+0x00000070u,c->r[0]); // 8026961C
  return; // 80269620
}

// SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3
void f_80269624(Ctx* __restrict c) {
  trace_call(0x80269624u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80269624
  cmps(c,0,(int32_t)c->r[3],0); // 80269628
  if (crb(c,2)) return; // 8026962C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269630
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269634
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 80269638
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026963C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 80269640
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 80269644
  c->r[0]=R32(c->r[3]+0x00000070u); // 80269648
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8026964C
  W32(c->r[3]+0x00000070u,c->r[0]); // 80269650
  return; // 80269654
}

// fn_80269658
void f_80269658(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80269658
  if (crb(c,2)) return; // 8026965C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80269660
  cmps(c,0,(int32_t)c->r[3],0); // 80269664
  if (crb(c,2)) return; // 80269668
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026966C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80269670
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269674
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80269678
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026967C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80269680
  return; // 80269684
}

// SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
void f_80269688(Ctx* __restrict c) {
  trace_call(0x80269688u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80269688
  cmps(c,0,(int32_t)c->r[3],0); // 8026968C
  if (crb(c,2)) return; // 80269690
  c->r[0]=R32(c->r[4]+0x00000000u); // 80269694
  cmps(c,0,(int32_t)c->r[0],1); // 80269698
  if (crb(c,2)) { goto L_80269794; } // 8026969C
  if (!crb(c,0)) { goto L_802696B0; } // 802696A0
  cmps(c,0,(int32_t)c->r[0],0); // 802696A4
  if (!crb(c,0)) { goto L_802696BC; } // 802696A8
  return; // 802696AC
L_802696B0:;
  cmps(c,0,(int32_t)c->r[0],3); // 802696B0
  if (!crb(c,0)) return; // 802696B4
  goto L_80269810; // 802696B8
L_802696BC:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802696BC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802696C0
  if (crb(c,2)) { goto L_80269748; } // 802696C4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802696C8
  c->r[0]=0u+0x00000000u; // 802696CC
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 802696D0
  fcmp(c,0,c->f[1],c->f[0]); // 802696D4
  if (!crb(c,2)) { goto L_802696FC; } // 802696D8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802696DC
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 802696E0
  fcmp(c,0,c->f[1],c->f[0]); // 802696E4
  if (!crb(c,2)) { goto L_802696FC; } // 802696E8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802696EC
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802696F0
  fcmp(c,0,c->f[1],c->f[0]); // 802696F4
  if (crb(c,2)) { goto L_80269700; } // 802696F8
L_802696FC:;
  c->r[0]=0u+0x00000001u; // 802696FC
L_80269700:;
  cmps(c,0,(int32_t)c->r[0],0); // 80269700
  if (!crb(c,2)) { goto L_80269748; } // 80269704
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269708
  c->r[0]=0u+0x00000000u; // 8026970C
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269710
  fcmp(c,0,c->f[1],c->f[0]); // 80269714
  if (!crb(c,2)) { goto L_8026973C; } // 80269718
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026971C
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269720
  fcmp(c,0,c->f[1],c->f[0]); // 80269724
  if (!crb(c,2)) { goto L_8026973C; } // 80269728
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026972C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269730
  fcmp(c,0,c->f[1],c->f[0]); // 80269734
  if (crb(c,2)) { goto L_80269740; } // 80269738
L_8026973C:;
  c->r[0]=0u+0x00000001u; // 8026973C
L_80269740:;
  cmps(c,0,(int32_t)c->r[0],0); // 80269740
  if (crb(c,2)) return; // 80269744
L_80269748:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 80269748
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026974C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80269750
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269754
  c->r[0]=c->r[0]|0x00000001u; // 80269758
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026975C
  W32(c->r[3]+0x00000070u,c->r[0]); // 80269760
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80269764
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269768
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 8026976C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269770
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 80269774
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269778
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[3]);} // 8026977C
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 80269780
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 80269784
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 80269788
  W32(c->r[3]+0x00000070u,c->r[0]); // 8026978C
  return; // 80269790
L_80269794:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 80269794
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80269798
  if (crb(c,2)) { goto L_802697E0; } // 8026979C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802697A0
  c->r[0]=0u+0x00000000u; // 802697A4
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 802697A8
  fcmp(c,0,c->f[1],c->f[0]); // 802697AC
  if (!crb(c,2)) { goto L_802697D4; } // 802697B0
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802697B4
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802697B8
  fcmp(c,0,c->f[1],c->f[0]); // 802697BC
  if (!crb(c,2)) { goto L_802697D4; } // 802697C0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802697C4
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802697C8
  fcmp(c,0,c->f[1],c->f[0]); // 802697CC
  if (crb(c,2)) { goto L_802697D8; } // 802697D0
L_802697D4:;
  c->r[0]=0u+0x00000001u; // 802697D4
L_802697D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802697D8
  if (crb(c,2)) return; // 802697DC
L_802697E0:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802697E0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802697E4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802697E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 802697EC
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 802697F0
  c->r[0]=c->r[0]|0x00000002u; // 802697F4
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802697F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 802697FC
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 80269800
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 80269804
  W32(c->r[3]+0x00000070u,c->r[0]); // 80269808
  return; // 8026980C
L_80269810:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 80269810
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80269814
  if (crb(c,2)) { goto L_8026986C; } // 80269818
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026981C
  c->r[0]=0u+0x00000000u; // 80269820
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269824
  fcmp(c,0,c->f[1],c->f[0]); // 80269828
  if (!crb(c,2)) { goto L_80269850; } // 8026982C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269830
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269834
  fcmp(c,0,c->f[1],c->f[0]); // 80269838
  if (!crb(c,2)) { goto L_80269850; } // 8026983C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269840
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269844
  fcmp(c,0,c->f[1],c->f[0]); // 80269848
  if (crb(c,2)) { goto L_80269854; } // 8026984C
L_80269850:;
  c->r[0]=0u+0x00000001u; // 80269850
L_80269854:;
  cmps(c,0,(int32_t)c->r[0],0); // 80269854
  if (!crb(c,2)) { goto L_8026986C; } // 80269858
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026985C
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269860
  fcmp(c,0,c->f[1],c->f[0]); // 80269864
  if (crb(c,2)) return; // 80269868
L_8026986C:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 8026986C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269870
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 80269874
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269878
  c->r[0]=c->r[0]|0x00000004u; // 8026987C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269880
  W32(c->r[3]+0x00000070u,c->r[0]); // 80269884
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80269888
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026988C
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[3]);} // 80269890
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[2]);} // 80269894
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 80269898
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 8026989C
  W32(c->r[3]+0x00000070u,c->r[0]); // 802698A0
  return; // 802698A4
}

// fn_802698A8
void f_802698A8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 802698A8
  if (crb(c,2)) return; // 802698AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802698B0
  cmps(c,0,(int32_t)c->r[3],0); // 802698B4
  if (crb(c,2)) return; // 802698B8
  c->r[5]=R32(c->r[3]+0x00000070u); // 802698BC
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 802698C0
  if (crb(c,2)) { goto L_80269904; } // 802698C4
  c->r[0]=0u+0x00000000u; // 802698C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 802698CC
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 802698D0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 802698D4
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 802698D8
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802698DC
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802698E0
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 802698E4
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802698E8
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 802698EC
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 802698F0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 802698F4
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 802698F8
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 802698FC
  return; // 80269900
L_80269904:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80269904
  if (crb(c,2)) { goto L_80269930; } // 80269908
  c->r[0]=0u+0x00000001u; // 8026990C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80269910
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269914
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 80269918
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026991C
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 80269920
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269924
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 80269928
  return; // 8026992C
L_80269930:;
  c->r[0]=0u+0x00000002u; // 80269930
  W32(c->r[4]+0x00000000u,c->r[0]); // 80269934
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269938
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8026993C
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269940
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 80269944
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269948
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 8026994C
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269950
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 80269954
  return; // 80269958
}

// SetCameraMtxDirectly__Q34nw4r3g3d6CameraFRCQ34nw4r4math5MTX34
void f_8026995C(Ctx* __restrict c) {
  trace_call(0x8026995Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026995C
  c->r[0]=c->lr; // 80269960
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80269968
  c->r[31]=R32(c->r[3]+0x00000000u); // 8026996C
  cmps(c,0,(int32_t)c->r[31],0); // 80269970
  if (crb(c,2)) { goto L_80269990; } // 80269974
  c->r[3]=c->r[4]|c->r[4]; // 80269978
  c->r[4]=c->r[31]|c->r[31]; // 8026997C
  c->lr=0x80269984u; f_80167FC4(c); // 80269980
  c->r[0]=R32(c->r[31]+0x00000070u); // 80269984
  c->r[0]=c->r[0]|0x00000008u; // 80269988
  W32(c->r[31]+0x00000070u,c->r[0]); // 8026998C
L_80269990:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80269990
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80269994
  c->lr=c->r[0]; // 80269998
  c->r[1]=c->r[1]+0x00000010u; // 8026999C
  return; // 802699A0
}

// SetPerspective__Q34nw4r3g3d6CameraFffff
void f_802699A4(Ctx* __restrict c) {
  trace_call(0x802699A4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802699A4
  cmps(c,0,(int32_t)c->r[3],0); // 802699A8
  if (crb(c,2)) return; // 802699AC
  c->r[0]=0u+0x00000000u; // 802699B0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 802699B4
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 802699B8
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 802699BC
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[3]);} // 802699C0
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[4]);} // 802699C4
  c->r[0]=R32(c->r[3]+0x00000070u); // 802699C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 802699CC
  c->r[0]=c->r[0]|0x00000020u; // 802699D0
  W32(c->r[3]+0x00000070u,c->r[0]); // 802699D4
  return; // 802699D8
}

// fn_802699DC
void f_802699DC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802699DC
  cmps(c,0,(int32_t)c->r[3],0); // 802699E0
  if (crb(c,2)) return; // 802699E4
  c->r[0]=0u+0x00000000u; // 802699E8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 802699EC
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 802699F0
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 802699F4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 802699F8
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 802699FC
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[5]);} // 80269A00
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 80269A04
  c->r[0]=R32(c->r[3]+0x00000070u); // 80269A08
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 80269A0C
  c->r[0]=c->r[0]|0x00000010u; // 80269A10
  W32(c->r[3]+0x00000070u,c->r[0]); // 80269A14
  return; // 80269A18
}

// SetOrtho__Q34nw4r3g3d6CameraFffffff
void f_80269A1C(Ctx* __restrict c) {
  trace_call(0x80269A1Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80269A1C
  cmps(c,0,(int32_t)c->r[3],0); // 80269A20
  if (crb(c,2)) return; // 80269A24
  c->r[0]=0u+0x00000001u; // 80269A28
  W32(c->r[3]+0x000000A8u,c->r[0]); // 80269A2C
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 80269A30
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 80269A34
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 80269A38
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 80269A3C
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[5]);} // 80269A40
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 80269A44
  c->r[0]=R32(c->r[3]+0x00000070u); // 80269A48
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 80269A4C
  c->r[0]=c->r[0]|0x00000040u; // 80269A50
  W32(c->r[3]+0x00000070u,c->r[0]); // 80269A54
  return; // 80269A58
}

// fn_80269A5C
void f_80269A5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269A5C
  c->r[0]=c->lr; // 80269A60
  cmps(c,0,(int32_t)c->r[4],0); // 80269A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269A68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80269A6C
  if (crb(c,2)) { goto L_80269A94; } // 80269A70
  c->r[31]=R32(c->r[3]+0x00000000u); // 80269A74
  cmps(c,0,(int32_t)c->r[31],0); // 80269A78
  if (crb(c,2)) { goto L_80269A94; } // 80269A7C
  c->r[3]=c->r[31]+0x00000030u; // 80269A80
  c->lr=0x80269A88u; f_80284D24(c); // 80269A84
  c->r[0]=R32(c->r[31]+0x00000070u); // 80269A88
  c->r[0]=c->r[0]|0x00000080u; // 80269A8C
  W32(c->r[31]+0x00000070u,c->r[0]); // 80269A90
L_80269A94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80269A94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80269A98
  c->lr=c->r[0]; // 80269A9C
  c->r[1]=c->r[1]+0x00000010u; // 80269AA0
  return; // 80269AA4
}

// SetViewport__Q34nw4r3g3d6CameraFffff
void f_80269AA8(Ctx* __restrict c) {
  trace_call(0x80269AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269AA8
  c->r[0]=c->lr; // 80269AAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80269AB0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 80269AB4
  c->f[31]=c->f[4]; // 80269AB8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80269ABC
  c->f[30]=c->f[3]; // 80269AC0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[29]);} // 80269AC4
  c->f[29]=c->f[2]; // 80269AC8
  W32(c->r[1]+0x00000014u,c->r[31]); // 80269ACC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80269AD0
  cmps(c,0,(int32_t)c->r[4],0); // 80269AD4
  if (crb(c,2)) { goto L_80269B24; } // 80269AD8
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[1]);} // 80269ADC
  {uint32_t ea=c->r[4]+0x000000E0u; WF32(ea,c->f[2]);} // 80269AE0
  {uint32_t ea=c->r[4]+0x000000E4u; WF32(ea,c->f[3]);} // 80269AE4
  {uint32_t ea=c->r[4]+0x000000E8u; WF32(ea,c->f[4]);} // 80269AE8
  c->r[31]=R32(c->r[3]+0x00000000u); // 80269AEC
  cmps(c,0,(int32_t)c->r[31],0); // 80269AF0
  if (crb(c,2)) { goto L_80269B24; } // 80269AF4
  c->lr=0x80269AFCu; f_80185DAC(c); // 80269AF8
  c->f[1]=c->f[29]; // 80269AFC
  W32(c->r[31]+0x000000F4u,c->r[3]); // 80269B00
  c->lr=0x80269B08u; f_80185DAC(c); // 80269B04
  c->f[1]=c->f[30]; // 80269B08
  W32(c->r[31]+0x000000F8u,c->r[3]); // 80269B0C
  c->lr=0x80269B14u; f_80185DAC(c); // 80269B10
  c->f[1]=c->f[31]; // 80269B14
  W32(c->r[31]+0x000000FCu,c->r[3]); // 80269B18
  c->lr=0x80269B20u; f_80185DAC(c); // 80269B1C
  W32(c->r[31]+0x00000100u,c->r[3]); // 80269B20
L_80269B24:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80269B24
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 80269B28
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80269B2C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[29]=RF64(ea);} // 80269B30
  c->r[31]=R32(c->r[1]+0x00000014u); // 80269B34
  c->lr=c->r[0]; // 80269B38
  c->r[1]=c->r[1]+0x00000030u; // 80269B3C
  return; // 80269B40
}

// GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
void f_80269B44(Ctx* __restrict c) {
  trace_call(0x80269B44u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80269B44
  cmps(c,0,(int32_t)c->r[3],0); // 80269B48
  if (crb(c,2)) return; // 80269B4C
  cmps(c,0,(int32_t)c->r[4],0); // 80269B50
  if (crb(c,2)) { goto L_80269B60; } // 80269B54
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269B58
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80269B5C
L_80269B60:;
  cmps(c,0,(int32_t)c->r[5],0); // 80269B60
  if (crb(c,2)) { goto L_80269B70; } // 80269B64
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269B68
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80269B6C
L_80269B70:;
  cmps(c,0,(int32_t)c->r[6],0); // 80269B70
  if (crb(c,2)) { goto L_80269B80; } // 80269B74
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269B78
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80269B7C
L_80269B80:;
  cmps(c,0,(int32_t)c->r[7],0); // 80269B80
  if (crb(c,2)) { goto L_80269B90; } // 80269B84
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269B88
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 80269B8C
L_80269B90:;
  cmps(c,0,(int32_t)c->r[8],0); // 80269B90
  if (crb(c,2)) { goto L_80269BA0; } // 80269B94
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269B98
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 80269B9C
L_80269BA0:;
  cmps(c,0,(int32_t)c->r[9],0); // 80269BA0
  if (crb(c,2)) return; // 80269BA4
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269BA8
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 80269BAC
  return; // 80269BB0
}

// Project__Q34nw4r3g3d6CameraCFPQ34nw4r4math4VEC3RCQ34nw4r4math4VEC3
void f_80269BB4(Ctx* __restrict c) {
  trace_call(0x80269BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269BB4
  c->r[0]=c->lr; // 80269BB8
  cmps(c,0,(int32_t)c->r[4],0); // 80269BBC
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80269BC0
  W32(c->r[1]+0x000000CCu,c->r[31]); // 80269BC4
  c->r[31]=c->r[5]|c->r[5]; // 80269BC8
  W32(c->r[1]+0x000000C8u,c->r[30]); // 80269BCC
  c->r[30]=c->r[4]|c->r[4]; // 80269BD0
  W32(c->r[1]+0x000000C4u,c->r[29]); // 80269BD4
  c->r[29]=c->r[3]|c->r[3]; // 80269BD8
  W32(c->r[1]+0x000000C0u,c->r[28]); // 80269BDC
  if (crb(c,2)) { goto L_80269D70; } // 80269BE0
  c->r[28]=R32(c->r[3]+0x00000000u); // 80269BE4
  cmps(c,0,(int32_t)c->r[28],0); // 80269BE8
  if (crb(c,2)) { goto L_80269C0C; } // 80269BEC
  c->r[0]=R32(c->r[28]+0x00000070u); // 80269BF0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80269BF4
  if (!crb(c,2)) { goto L_80269C00; } // 80269BF8
  c->lr=0x80269C00u; f_8026A1A8(c); // 80269BFC
L_80269C00:;
  c->r[3]=c->r[28]|c->r[28]; // 80269C00
  c->r[4]=c->r[1]+0x00000080u; // 80269C04
  c->lr=0x80269C0Cu; f_80167FC4(c); // 80269C08
L_80269C0C:;
  c->r[28]=R32(c->r[29]+0x00000000u); // 80269C0C
  cmps(c,0,(int32_t)c->r[28],0); // 80269C10
  if (crb(c,2)) { goto L_80269CB0; } // 80269C14
  c->r[0]=R32(c->r[28]+0x00000070u); // 80269C18
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80269C1C
  if (!crb(c,2)) { goto L_80269CA4; } // 80269C20
  c->r[3]=R32(c->r[28]+0x00000070u); // 80269C24
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80269C28
  if (crb(c,2)) { goto L_80269C54; } // 80269C2C
  {uint32_t ea=c->r[28]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269C30
  c->r[3]=c->r[28]+0x00000030u; // 80269C34
  {uint32_t ea=c->r[28]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269C38
  {uint32_t ea=c->r[28]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269C3C
  {uint32_t ea=c->r[28]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269C40
  {uint32_t ea=c->r[28]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80269C44
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80269C48
  c->lr=0x80269C50u; f_80168D50(c); // 80269C4C
  goto L_80269C98; // 80269C50
L_80269C54:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80269C54
  if (crb(c,2)) { goto L_80269C80; } // 80269C58
  {uint32_t ea=c->r[28]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269C5C
  c->r[3]=c->r[28]+0x00000030u; // 80269C60
  {uint32_t ea=c->r[28]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269C64
  {uint32_t ea=c->r[28]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269C68
  {uint32_t ea=c->r[28]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269C6C
  {uint32_t ea=c->r[28]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80269C70
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80269C74
  c->lr=0x80269C7Cu; f_80168BC8(c); // 80269C78
  goto L_80269C98; // 80269C7C
L_80269C80:;
  {uint32_t ea=c->r[28]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269C80
  c->r[3]=c->r[28]+0x00000030u; // 80269C84
  {uint32_t ea=c->r[28]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269C88
  {uint32_t ea=c->r[28]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269C8C
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269C90
  c->lr=0x80269C98u; f_80168C64(c); // 80269C94
L_80269C98:;
  c->r[0]=R32(c->r[28]+0x00000070u); // 80269C98
  c->r[0]=c->r[0]|0x00000080u; // 80269C9C
  W32(c->r[28]+0x00000070u,c->r[0]); // 80269CA0
L_80269CA4:;
  c->r[3]=c->r[1]+0x00000040u; // 80269CA4
  c->r[4]=c->r[28]+0x00000030u; // 80269CA8
  c->lr=0x80269CB0u; f_80284D24(c); // 80269CAC
L_80269CB0:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80269CB0
  c->r[0]=0u+0x43300000u; // 80269CB4
  W32(c->r[1]+0x000000B0u,c->r[0]); // 80269CB8
  c->r[0]=R32(c->r[3]+0x000000A8u); // 80269CBC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269CC0
  c->r[0]=c->r[0]^0x80000000u; // 80269CC4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269CC8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80269CCC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269CD0
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[5]=RF64(ea);} // 80269CD4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 80269CD8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269CDC
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[5]); // 80269CE0
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269CE4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 80269CE8
  fcmp(c,0,c->f[0],c->f[5]); // 80269CEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 80269CF0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 80269CF4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 80269CF8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80269CFC
  if (!crb(c,2)) { goto L_80269D18; } // 80269D00
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269D04
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269D08
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80269D0C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80269D10
  goto L_80269D28; // 80269D14
L_80269D18:;
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269D18
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269D1C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80269D20
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80269D24
L_80269D28:;
  c->r[3]=c->r[29]|c->r[29]; // 80269D28
  c->r[4]=c->r[1]+0x00000028u; // 80269D2C
  c->r[5]=c->r[1]+0x0000002Cu; // 80269D30
  c->r[6]=c->r[1]+0x00000030u; // 80269D34
  c->r[7]=c->r[1]+0x00000034u; // 80269D38
  c->r[8]=c->r[1]+0x00000038u; // 80269D3C
  c->r[9]=c->r[1]+0x0000003Cu; // 80269D40
  c->lr=0x80269D48u; f_80269B44(c); // 80269D44
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269D48
  c->r[6]=c->r[30]|c->r[30]; // 80269D4C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269D50
  c->r[3]=c->r[1]+0x00000080u; // 80269D54
  {uint32_t ea=c->r[31]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269D58
  c->r[4]=c->r[1]+0x00000008u; // 80269D5C
  c->r[5]=c->r[1]+0x00000028u; // 80269D60
  c->r[7]=c->r[30]+0x00000004u; // 80269D64
  c->r[8]=c->r[30]+0x00000008u; // 80269D68
  c->lr=0x80269D70u; f_80184668(c); // 80269D6C
L_80269D70:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80269D70
  c->r[31]=R32(c->r[1]+0x000000CCu); // 80269D74
  c->r[30]=R32(c->r[1]+0x000000C8u); // 80269D78
  c->r[29]=R32(c->r[1]+0x000000C4u); // 80269D7C
  c->r[28]=R32(c->r[1]+0x000000C0u); // 80269D80
  c->lr=c->r[0]; // 80269D84
  c->r[1]=c->r[1]+0x000000D0u; // 80269D88
  return; // 80269D8C
}

// GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_80269D90(Ctx* __restrict c) {
  trace_call(0x80269D90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269D90
  c->r[0]=c->lr; // 80269D94
  cmps(c,0,(int32_t)c->r[4],0); // 80269D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269D9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80269DA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80269DA4
  c->r[30]=c->r[4]|c->r[4]; // 80269DA8
  if (crb(c,2)) { goto L_80269DD8; } // 80269DAC
  c->r[31]=R32(c->r[3]+0x00000000u); // 80269DB0
  cmps(c,0,(int32_t)c->r[31],0); // 80269DB4
  if (crb(c,2)) { goto L_80269DD8; } // 80269DB8
  c->r[0]=R32(c->r[31]+0x00000070u); // 80269DBC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80269DC0
  if (!crb(c,2)) { goto L_80269DCC; } // 80269DC4
  c->lr=0x80269DCCu; f_8026A1A8(c); // 80269DC8
L_80269DCC:;
  c->r[3]=c->r[31]|c->r[31]; // 80269DCC
  c->r[4]=c->r[30]|c->r[30]; // 80269DD0
  c->lr=0x80269DD8u; f_80167FC4(c); // 80269DD4
L_80269DD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80269DD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80269DDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80269DE0
  c->lr=c->r[0]; // 80269DE4
  c->r[1]=c->r[1]+0x00000010u; // 80269DE8
  return; // 80269DEC
}

// GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
void f_80269DF0(Ctx* __restrict c) {
  trace_call(0x80269DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269DF0
  c->r[0]=c->lr; // 80269DF4
  cmps(c,0,(int32_t)c->r[4],0); // 80269DF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269DFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80269E00
  W32(c->r[1]+0x00000008u,c->r[30]); // 80269E04
  c->r[30]=c->r[4]|c->r[4]; // 80269E08
  if (crb(c,2)) { goto L_80269EB4; } // 80269E0C
  c->r[31]=R32(c->r[3]+0x00000000u); // 80269E10
  cmps(c,0,(int32_t)c->r[31],0); // 80269E14
  if (crb(c,2)) { goto L_80269EB4; } // 80269E18
  c->r[0]=R32(c->r[31]+0x00000070u); // 80269E1C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80269E20
  if (!crb(c,2)) { goto L_80269EA8; } // 80269E24
  c->r[3]=R32(c->r[31]+0x00000070u); // 80269E28
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80269E2C
  if (crb(c,2)) { goto L_80269E58; } // 80269E30
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269E34
  c->r[3]=c->r[31]+0x00000030u; // 80269E38
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269E3C
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269E40
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269E44
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80269E48
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80269E4C
  c->lr=0x80269E54u; f_80168D50(c); // 80269E50
  goto L_80269E9C; // 80269E54
L_80269E58:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80269E58
  if (crb(c,2)) { goto L_80269E84; } // 80269E5C
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269E60
  c->r[3]=c->r[31]+0x00000030u; // 80269E64
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269E68
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269E6C
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269E70
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80269E74
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80269E78
  c->lr=0x80269E80u; f_80168BC8(c); // 80269E7C
  goto L_80269E9C; // 80269E80
L_80269E84:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269E84
  c->r[3]=c->r[31]+0x00000030u; // 80269E88
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269E8C
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269E90
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269E94
  c->lr=0x80269E9Cu; f_80168C64(c); // 80269E98
L_80269E9C:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 80269E9C
  c->r[0]=c->r[0]|0x00000080u; // 80269EA0
  W32(c->r[31]+0x00000070u,c->r[0]); // 80269EA4
L_80269EA8:;
  c->r[3]=c->r[30]|c->r[30]; // 80269EA8
  c->r[4]=c->r[31]+0x00000030u; // 80269EAC
  c->lr=0x80269EB4u; f_80284D24(c); // 80269EB0
L_80269EB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80269EB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80269EB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80269EBC
  c->lr=c->r[0]; // 80269EC0
  c->r[1]=c->r[1]+0x00000010u; // 80269EC4
  return; // 80269EC8
}

// GetProjectionTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_80269ECC(Ctx* __restrict c) {
  trace_call(0x80269ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269ECC
  c->r[0]=c->lr; // 80269ED0
  cmps(c,0,(int32_t)c->r[4],0); // 80269ED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269ED8
  if (crb(c,2)) { goto L_80269F8C; } // 80269EDC
  c->r[5]=R32(c->r[3]+0x00000000u); // 80269EE0
  cmps(c,0,(int32_t)c->r[5],0); // 80269EE4
  if (crb(c,2)) { goto L_80269F8C; } // 80269EE8
  c->r[3]=R32(c->r[5]+0x00000070u); // 80269EEC
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80269EF0
  if (crb(c,2)) { goto L_80269F28; } // 80269EF4
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269EF8
  c->r[3]=c->r[4]|c->r[4]; // 80269EFC
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269F00
  c->f[6]=-c->f[0]; // 80269F04
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269F08
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269F0C
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269F10
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 80269F14
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 80269F18
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[8]=c->ps1[8]=RF32(ea);} // 80269F1C
  c->lr=0x80269F24u; f_80168A60(c); // 80269F20
  goto L_80269F8C; // 80269F24
L_80269F28:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80269F28
  if (crb(c,2)) { goto L_80269F68; } // 80269F2C
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269F30
  c->r[3]=c->r[4]|c->r[4]; // 80269F34
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80269F38
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269F3C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269F40
  c->f[7]=-c->f[0]; // 80269F44
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269F48
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80269F4C
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80269F50
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80269F54
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[6]=c->ps1[6]=RF32(ea);} // 80269F58
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[8]=c->ps1[8]=RF32(ea);} // 80269F5C
  c->lr=0x80269F64u; f_801688C4(c); // 80269F60
  goto L_80269F8C; // 80269F64
L_80269F68:;
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269F68
  c->r[3]=c->r[4]|c->r[4]; // 80269F6C
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80269F70
  c->f[4]=-c->f[0]; // 80269F74
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269F78
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80269F7C
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80269F80
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80269F84
  c->lr=0x80269F8Cu; f_80168968(c); // 80269F88
L_80269F8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80269F8C
  c->lr=c->r[0]; // 80269F90
  c->r[1]=c->r[1]+0x00000010u; // 80269F94
  return; // 80269F98
}

// GetEnvironmentTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_80269F9C(Ctx* __restrict c) {
  trace_call(0x80269F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269F9C
  c->r[0]=c->lr; // 80269FA0
  cmps(c,0,(int32_t)c->r[4],0); // 80269FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269FA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80269FAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80269FB0
  c->r[30]=c->r[4]|c->r[4]; // 80269FB4
  if (crb(c,2)) { goto L_8026A004; } // 80269FB8
  c->r[31]=R32(c->r[3]+0x00000000u); // 80269FBC
  cmps(c,0,(int32_t)c->r[31],0); // 80269FC0
  if (crb(c,2)) { goto L_8026A004; } // 80269FC4
  c->r[3]=c->r[30]|c->r[30]; // 80269FC8
  c->lr=0x80269FD0u; f_80167F98(c); // 80269FCC
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80269FD0
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[1]=c->ps1[1]=RF32(ea);} // 80269FD4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 80269FD8
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[0]=c->ps1[0]=RF32(ea);} // 80269FDC
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269FE0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 80269FE4
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269FE8
  c->f[2]=-c->f[2]; // 80269FEC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[2]);} // 80269FF0
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80269FF4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[2]);} // 80269FF8
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 80269FFC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026A000
L_8026A004:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026A004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026A008
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026A00C
  c->lr=c->r[0]; // 8026A010
  c->r[1]=c->r[1]+0x00000010u; // 8026A014
  return; // 8026A018
}

// GXSetViewport__Q34nw4r3g3d6CameraCFv
void f_8026A01C(Ctx* __restrict c) {
  trace_call(0x8026A01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A01C
  c->r[0]=c->lr; // 8026A020
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026A024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026A028
  c->r[31]=R32(c->r[3]+0x00000000u); // 8026A02C
  cmps(c,0,(int32_t)c->r[31],0); // 8026A030
  if (crb(c,2)) { goto L_8026A08C; } // 8026A034
  c->lr=0x8026A03Cu; f_80263374(c); // 8026A038
  c->r[0]=R8(c->r[3]+0x00000018u); // 8026A03C
  cmps(c,0,(int32_t)c->r[0],0); // 8026A040
  if (crb(c,2)) { goto L_8026A070; } // 8026A044
  c->r[0]=R32(c->r[31]+0x00000070u); // 8026A048
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A04C
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A050
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 8026A054
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A058
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A05C
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026A060
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A064
  c->lr=0x8026A06Cu; f_80184B90(c); // 8026A068
  goto L_8026A08C; // 8026A06C
L_8026A070:;
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A070
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A074
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A078
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A07C
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026A080
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A084
  c->lr=0x8026A08Cu; f_80184BCC(c); // 8026A088
L_8026A08C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026A08C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026A090
  c->lr=c->r[0]; // 8026A094
  c->r[1]=c->r[1]+0x00000010u; // 8026A098
  return; // 8026A09C
}

// GXSetProjection__Q34nw4r3g3d6CameraCFv
void f_8026A0A0(Ctx* __restrict c) {
  trace_call(0x8026A0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A0A0
  c->r[0]=c->lr; // 8026A0A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026A0A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026A0AC
  c->r[31]=R32(c->r[3]+0x00000000u); // 8026A0B0
  cmps(c,0,(int32_t)c->r[31],0); // 8026A0B4
  if (crb(c,2)) { goto L_8026A154; } // 8026A0B8
  c->r[0]=R32(c->r[31]+0x00000070u); // 8026A0BC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8026A0C0
  if (!crb(c,2)) { goto L_8026A148; } // 8026A0C4
  c->r[3]=R32(c->r[31]+0x00000070u); // 8026A0C8
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 8026A0CC
  if (crb(c,2)) { goto L_8026A0F8; } // 8026A0D0
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A0D4
  c->r[3]=c->r[31]+0x00000030u; // 8026A0D8
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A0DC
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A0E0
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A0E4
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026A0E8
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A0EC
  c->lr=0x8026A0F4u; f_80168D50(c); // 8026A0F0
  goto L_8026A13C; // 8026A0F4
L_8026A0F8:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8026A0F8
  if (crb(c,2)) { goto L_8026A124; } // 8026A0FC
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A100
  c->r[3]=c->r[31]+0x00000030u; // 8026A104
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A108
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A10C
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A110
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026A114
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A118
  c->lr=0x8026A120u; f_80168BC8(c); // 8026A11C
  goto L_8026A13C; // 8026A120
L_8026A124:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A124
  c->r[3]=c->r[31]+0x00000030u; // 8026A128
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A12C
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A130
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A134
  c->lr=0x8026A13Cu; f_80168C64(c); // 8026A138
L_8026A13C:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 8026A13C
  c->r[0]=c->r[0]|0x00000080u; // 8026A140
  W32(c->r[31]+0x00000070u,c->r[0]); // 8026A144
L_8026A148:;
  c->r[4]=R32(c->r[31]+0x000000A8u); // 8026A148
  c->r[3]=c->r[31]+0x00000030u; // 8026A14C
  c->lr=0x8026A154u; f_80184834(c); // 8026A150
L_8026A154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026A154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026A158
  c->lr=c->r[0]; // 8026A15C
  c->r[1]=c->r[1]+0x00000010u; // 8026A160
  return; // 8026A164
}

// GXSetScissor__Q34nw4r3g3d6CameraCFv
void f_8026A168(Ctx* __restrict c) {
  trace_call(0x8026A168u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 8026A168
  cmps(c,0,(int32_t)c->r[6],0); // 8026A16C
  if (crb(c,2)) return; // 8026A170
  c->r[3]=R32(c->r[6]+0x000000F4u); // 8026A174
  c->r[4]=R32(c->r[6]+0x000000F8u); // 8026A178
  c->r[5]=R32(c->r[6]+0x000000FCu); // 8026A17C
  c->r[6]=R32(c->r[6]+0x00000100u); // 8026A180
  f_80184BF8(c); return; // 8026A184
  return; // 8026A188
}

// GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
void f_8026A18C(Ctx* __restrict c) {
  trace_call(0x8026A18Cu);
  c->r[4]=R32(c->r[3]+0x00000000u); // 8026A18C
  cmps(c,0,(int32_t)c->r[4],0); // 8026A190
  if (crb(c,2)) return; // 8026A194
  c->r[3]=R32(c->r[4]+0x00000104u); // 8026A198
  c->r[4]=R32(c->r[4]+0x00000108u); // 8026A19C
  f_80184C60(c); return; // 8026A1A0
  return; // 8026A1A4
}

// UpdateCameraMtx__Q34nw4r3g3d6CameraCFv
void f_8026A1A8(Ctx* __restrict c) {
  trace_call(0x8026A1A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A1A8
  c->r[0]=c->lr; // 8026A1AC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8026A1B0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 8026A1B4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 8026A1B8
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8026A1BC
  c->r[31]=R32(c->r[3]+0x00000000u); // 8026A1C0
  c->r[3]=R32(c->r[31]+0x00000070u); // 8026A1C4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8026A1C8
  if (crb(c,2)) { goto L_8026A1E8; } // 8026A1CC
  c->r[3]=c->r[31]|c->r[31]; // 8026A1D0
  c->r[4]=c->r[31]+0x00000074u; // 8026A1D4
  c->r[5]=c->r[31]+0x00000080u; // 8026A1D8
  c->r[6]=c->r[31]+0x0000008Cu; // 8026A1DC
  c->lr=0x8026A1E4u; f_80168750(c); // 8026A1E0
  goto L_8026A584; // 8026A1E4
L_8026A1E8:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8026A1E8
  if (crb(c,2)) { goto L_8026A420; } // 8026A1EC
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A1F0
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A1F4
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A1F8
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 8026A1FC
  {uint32_t ea=c->r[31]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A200
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A204
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A208
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 8026A20C
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A210
  fcmp(c,0,c->f[2],c->f[5]); // 8026A214
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8026A218
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[5]);} // 8026A21C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 8026A220
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 8026A224
  if (!crb(c,2)) { goto L_8026A2B8; } // 8026A228
  fcmp(c,0,c->f[2],c->f[3]); // 8026A22C
  if (!crb(c,2)) { goto L_8026A2B8; } // 8026A230
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A234
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 8026A238
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 8026A23C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 8026A240
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A244
  c->f[0]=-c->f[0]; // 8026A248
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026A24C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[2]);} // 8026A250
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 8026A254
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[2]);} // 8026A258
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 8026A25C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A260
  fcmp(c,0,c->f[0],c->f[2]); // 8026A264
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8026A268
  if (!crb(c,2)) { goto L_8026A294; } // 8026A26C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8026A270
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A274
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A278
  c->f[1]=-c->f[1]; // 8026A27C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 8026A280
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8026A284
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A288
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026A28C
  goto L_8026A584; // 8026A290
L_8026A294:;
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A294
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8026A298
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A29C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026A2A0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 8026A2A4
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A2A8
  c->f[0]=-c->f[0]; // 8026A2AC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026A2B0
  goto L_8026A584; // 8026A2B4
L_8026A2B8:;
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A2B8
  c->r[3]=c->r[1]+0x0000007Cu; // 8026A2BC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A2C0
  c->r[4]=c->r[3]|c->r[3]; // 8026A2C4
  c->f[2]=-c->f[0]; // 8026A2C8
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A2CC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8026A2D0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8026A2D4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 8026A2D8
  c->lr=0x8026A2E0u; f_80168E0C(c); // 8026A2DC
  c->r[3]=c->r[1]+0x00000070u; // 8026A2E0
  c->r[4]=c->r[3]|c->r[3]; // 8026A2E4
  c->lr=0x8026A2ECu; f_80168E0C(c); // 8026A2E8
  c->r[3]=c->r[1]+0x0000007Cu; // 8026A2EC
  c->r[4]=c->r[1]+0x00000070u; // 8026A2F0
  c->r[5]=c->r[1]+0x00000064u; // 8026A2F4
  c->lr=0x8026A2FCu; f_80168EB4(c); // 8026A2F8
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A2FC
  c->r[3]=c->r[1]+0x00000024u; // 8026A300
  {uint32_t ea=c->r[2]+0xFFFF9D54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A304
  c->r[4]=c->r[1]+0x00000020u; // 8026A308
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026A30C
  c->lr=0x8026A314u; f_802847D4(c); // 8026A310
  {uint32_t ea=c->r[1]+0x00000024u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026A314
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A318
  {uint32_t ea=c->r[1]+0x00000020u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026A31C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A320
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[0]); // 8026A324
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 8026A328
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A32C
  c->f[0]=c->ps1[0]=S(c->f[10]*c->f[4]); // 8026A330
  {uint32_t ea=c->r[1]+0x00000068u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026A334
  {uint32_t ea=c->r[1]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026A338
  c->f[7]=c->ps1[7]=S(c->f[11]*c->f[8]); // 8026A33C
  c->f[9]=c->ps1[9]=S(c->f[2]+c->f[0]); // 8026A340
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[6]); // 8026A344
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[5]); // 8026A348
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[7]);} // 8026A34C
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[4]); // 8026A350
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 8026A354
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[2]); // 8026A358
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8026A35C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[7]);} // 8026A360
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[6]); // 8026A364
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 8026A368
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 8026A36C
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[8]); // 8026A370
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 8026A374
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8026A378
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,6,ea,0,0);} // 8026A37C
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,5,ea,0,0);} // 8026A380
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[9]);} // 8026A384
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->ps1[5]); c->f[6]=t0; c->ps1[6]=t1;} // 8026A388
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 8026A38C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,4,ea,1,0);} // 8026A390
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 8026A394
  {double t0=S(std::fma(c->f[0],c->f[4],c->f[6])), t1=S(std::fma(c->ps1[0],c->ps1[4],c->ps1[6])); c->f[5]=t0; c->ps1[5]=t1;} // 8026A398
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8026A39C
  {uint32_t ea=c->r[1]+0x0000004Cu; psq_load(c,7,ea,1,0);} // 8026A3A0
  {double t0=S(c->f[5]+c->ps1[6]), t1=S(c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 8026A3A4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8026A3A8
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,4,ea,0,0);} // 8026A3AC
  c->f[0]=-c->f[0]; // 8026A3B0
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026A3B4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 8026A3B8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 8026A3BC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8026A3C0
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 8026A3C4
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 8026A3C8
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 8026A3CC
  {double t0=S(std::fma(c->f[0],c->f[7],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[7],c->ps1[1])); c->f[4]=t0; c->ps1[4]=t1;} // 8026A3D0
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8026A3D4
  c->f[0]=-c->f[0]; // 8026A3D8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026A3DC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A3E0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 8026A3E4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A3E8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8026A3EC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A3F0
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 8026A3F4
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,2,ea,0,0);} // 8026A3F8
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,1,ea,0,0);} // 8026A3FC
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 8026A400
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8026A404
  {uint32_t ea=c->r[1]+0x0000007Cu; psq_load(c,1,ea,1,0);} // 8026A408
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 8026A40C
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8026A410
  c->f[0]=-c->f[0]; // 8026A414
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026A418
  goto L_8026A584; // 8026A41C
L_8026A420:;
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A420
  c->r[3]=c->r[1]+0x0000001Cu; // 8026A424
  {uint32_t ea=c->r[2]+0xFFFF9D54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A428
  c->r[4]=c->r[1]+0x00000010u; // 8026A42C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026A430
  c->lr=0x8026A438u; f_802847D4(c); // 8026A434
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A438
  c->r[3]=c->r[1]+0x00000018u; // 8026A43C
  {uint32_t ea=c->r[2]+0xFFFF9D54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A440
  c->r[4]=c->r[1]+0x0000000Cu; // 8026A444
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026A448
  c->lr=0x8026A450u; f_802847D4(c); // 8026A44C
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A450
  c->r[3]=c->r[1]+0x00000014u; // 8026A454
  {uint32_t ea=c->r[2]+0xFFFF9D54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A458
  c->r[4]=c->r[1]+0x00000008u; // 8026A45C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026A460
  c->lr=0x8026A468u; f_802847D4(c); // 8026A464
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A468
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026A46C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026A470
  c->f[0]=-c->f[2]; // 8026A474
  c->f[13]=c->ps1[13]=S(c->f[2]*c->f[31]); // 8026A478
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 8026A47C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026A480
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[12]); // 8026A484
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[11]); // 8026A488
  c->f[7]=c->ps1[7]=S(c->f[12]*c->f[13]); // 8026A48C
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[10]); // 8026A490
  {uint32_t ea=c->r[1]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A494
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026A498
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[4]); // 8026A49C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[10]); // 8026A4A0
  c->f[9]=c->ps1[9]=S(c->f[7]+c->f[5]); // 8026A4A4
  c->f[8]=c->ps1[8]=S(c->f[6]*c->f[12]); // 8026A4A8
  c->f[7]=c->ps1[7]=S(c->f[3]-c->f[2]); // 8026A4AC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 8026A4B0
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[4]); // 8026A4B4
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[10]); // 8026A4B8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[8]);} // 8026A4BC
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[31]); // 8026A4C0
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[1]); // 8026A4C4
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[11]); // 8026A4C8
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[7]);} // 8026A4CC
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[13]); // 8026A4D0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 8026A4D4
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[12]); // 8026A4D8
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,8,ea,1,0);} // 8026A4DC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[7]);} // 8026A4E0
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8026A4E4
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[1]); // 8026A4E8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 8026A4EC
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,9,ea,0,0);} // 8026A4F0
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,7,ea,0,0);} // 8026A4F4
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,1,ea,1,0);} // 8026A4F8
  {double t0=S(c->f[9]*c->f[7]), t1=S(c->ps1[9]*c->ps1[7]); c->f[9]=t0; c->ps1[9]=t1;} // 8026A4FC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 8026A500
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 8026A504
  {double t0=S(std::fma(c->f[8],c->f[1],c->f[9])), t1=S(std::fma(c->ps1[8],c->ps1[1],c->ps1[9])); c->f[7]=t0; c->ps1[7]=t1;} // 8026A508
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,10,ea,1,0);} // 8026A50C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 8026A510
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,11,ea,0,0);} // 8026A514
  {double t0=S(c->f[7]+c->ps1[9]), t1=S(c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 8026A518
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 8026A51C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,8,ea,1,0);} // 8026A520
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[4]);} // 8026A524
  c->f[1]=-c->f[1]; // 8026A528
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,7,ea,0,0);} // 8026A52C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026A530
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 8026A534
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[5]);} // 8026A538
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 8026A53C
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,4,ea,0,0);} // 8026A540
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,1,ea,1,0);} // 8026A544
  {double t0=S(c->f[4]*c->f[7]), t1=S(c->ps1[4]*c->ps1[7]); c->f[4]=t0; c->ps1[4]=t1;} // 8026A548
  {double t0=S(std::fma(c->f[1],c->f[10],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[10],c->ps1[4])); c->f[7]=t0; c->ps1[7]=t1;} // 8026A54C
  {double t0=S(c->f[7]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 8026A550
  c->f[1]=-c->f[1]; // 8026A554
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 8026A558
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 8026A55C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8026A560
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 8026A564
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 8026A568
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 8026A56C
  {double t0=S(c->f[1]*c->f[11]), t1=S(c->ps1[1]*c->ps1[11]); c->f[1]=t0; c->ps1[1]=t1;} // 8026A570
  {double t0=S(std::fma(c->f[0],c->f[8],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[8],c->ps1[1])); c->f[11]=t0; c->ps1[11]=t1;} // 8026A574
  {double t0=S(c->f[11]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8026A578
  c->f[0]=-c->f[0]; // 8026A57C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026A580
L_8026A584:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 8026A584
  c->r[0]=c->r[0]|0x00000008u; // 8026A588
  W32(c->r[31]+0x00000070u,c->r[0]); // 8026A58C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 8026A590
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 8026A594
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8026A598
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8026A59C
  c->lr=c->r[0]; // 8026A5A0
  c->r[1]=c->r[1]+0x000000A0u; // 8026A5A4
  return; // 8026A5A8
}

// CalcTexMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_8026A5AC(Ctx* __restrict c) {
  trace_call(0x8026A5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A5AC
  c->r[0]=c->lr; // 8026A5B0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8026A5B4
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 8026A5B8
  cmpu(c,0,c->r[0],0x00000007u); // 8026A5BC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8026A5C0
  c->r[31]=c->r[5]|c->r[5]; // 8026A5C4
  W32(c->r[1]+0x00000048u,c->r[30]); // 8026A5C8
  c->r[30]=c->r[4]|c->r[4]; // 8026A5CC
  W32(c->r[1]+0x00000044u,c->r[29]); // 8026A5D0
  c->r[29]=c->r[3]|c->r[3]; // 8026A5D4
  if (!crb(c,2)) { goto L_8026A5E4; } // 8026A5D8
  c->r[3]=0u+0x00000000u; // 8026A5DC
  goto L_8026A6EC; // 8026A5E0
L_8026A5E4:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A5E4
  c->r[3]=c->r[1]+0x0000000Cu; // 8026A5E8
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A5EC
  c->r[4]=c->r[1]+0x00000008u; // 8026A5F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026A5F4
  c->lr=0x8026A5FCu; f_802847D4(c); // 8026A5F8
  cmps(c,0,(int32_t)c->r[30],0); // 8026A5FC
  if (crb(c,2)) { goto L_8026A674; } // 8026A600
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026A604
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A608
  {uint32_t ea=c->r[31]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A60C
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 8026A610
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A614
  c->f[5]=-c->f[6]; // 8026A618
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A61C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A620
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8026A624
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A628
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A62C
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 8026A630
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 8026A634
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026A638
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[4]);} // 8026A63C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A640
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 8026A644
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[2]);} // 8026A648
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A64C
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 8026A650
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 8026A654
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[1]);} // 8026A658
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[2]);} // 8026A65C
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 8026A660
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 8026A664
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 8026A668
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[3]);} // 8026A66C
  goto L_8026A6E8; // 8026A670
L_8026A674:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A674
  c->r[4]=c->r[29]|c->r[29]; // 8026A678
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026A67C
  c->r[5]=c->r[29]|c->r[29]; // 8026A680
  c->f[1]=-c->f[2]; // 8026A684
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A688
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026A68C
  c->r[3]=c->r[1]+0x00000010u; // 8026A690
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A694
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 8026A698
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 8026A69C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A6A0
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[0]); // 8026A6A4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A6A8
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[0]); // 8026A6AC
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A6B0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 8026A6B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 8026A6B8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 8026A6BC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 8026A6C0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 8026A6C4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 8026A6C8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 8026A6CC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8026A6D0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[5]);} // 8026A6D4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 8026A6D8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8026A6DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[5]);} // 8026A6E0
  c->lr=0x8026A6E8u; f_80167FF8(c); // 8026A6E4
L_8026A6E8:;
  c->r[3]=0u+0x00000001u; // 8026A6E8
L_8026A6EC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8026A6EC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8026A6F0
  c->r[30]=R32(c->r[1]+0x00000048u); // 8026A6F4
  c->r[29]=R32(c->r[1]+0x00000044u); // 8026A6F8
  c->lr=c->r[0]; // 8026A6FC
  c->r[1]=c->r[1]+0x00000050u; // 8026A700
  return; // 8026A704
}

// CalcWorldMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_8026A708(Ctx* __restrict c) {
  trace_call(0x8026A708u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A708
  c->r[0]=c->lr; // 8026A70C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8026A710
  c->r[11]=c->r[1]+0x00000060u; // 8026A714
  c->lr=0x8026A71Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026A718
  c->r[31]=R32(c->r[8]+0x00000000u); // 8026A71C
  c->r[26]=c->r[3]|c->r[3]; // 8026A720
  c->r[27]=c->r[4]|c->r[4]; // 8026A724
  c->r[28]=c->r[5]|c->r[5]; // 8026A728
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8026A72C
  c->r[29]=c->r[7]|c->r[7]; // 8026A730
  c->r[30]=c->r[8]|c->r[8]; // 8026A734
  if (!crb(c,2)) { goto L_8026A744; } // 8026A738
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 8026A73C
  if (crb(c,2)) { goto L_8026A770; } // 8026A740
L_8026A744:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 8026A744
  if (crb(c,2)) { goto L_8026A75C; } // 8026A748
  c->r[3]=c->r[28]|c->r[28]; // 8026A74C
  c->r[4]=c->r[26]|c->r[26]; // 8026A750
  c->lr=0x8026A758u; f_80167FC4(c); // 8026A754
  goto L_8026A80C; // 8026A758
L_8026A75C:;
  c->r[3]=c->r[26]|c->r[26]; // 8026A75C
  c->r[4]=c->r[28]|c->r[28]; // 8026A760
  c->r[5]=c->r[6]|c->r[6]; // 8026A764
  c->lr=0x8026A76Cu; f_80284A08(c); // 8026A768
  goto L_8026A80C; // 8026A76C
L_8026A770:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 8026A770
  if (crb(c,2)) { goto L_8026A7D4; } // 8026A774
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 8026A778
  if (crb(c,2)) { goto L_8026A7A8; } // 8026A77C
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A780
  c->r[4]=c->r[28]|c->r[28]; // 8026A784
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A788
  c->r[5]=c->r[1]+0x00000008u; // 8026A78C
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A790
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026A794
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8026A798
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 8026A79C
  c->lr=0x8026A7A4u; f_80284A5C(c); // 8026A7A0
  goto L_8026A80C; // 8026A7A4
L_8026A7A8:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A7A8
  c->r[3]=c->r[8]+0x0000001Cu; // 8026A7AC
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A7B0
  c->r[4]=c->r[1]+0x00000018u; // 8026A7B4
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A7B8
  c->lr=0x8026A7C0u; f_80168654(c); // 8026A7BC
  c->r[3]=c->r[28]|c->r[28]; // 8026A7C0
  c->r[5]=c->r[26]|c->r[26]; // 8026A7C4
  c->r[4]=c->r[1]+0x00000018u; // 8026A7C8
  c->lr=0x8026A7D0u; f_80167FF8(c); // 8026A7CC
  goto L_8026A80C; // 8026A7D0
L_8026A7D4:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 8026A7D4
  if (crb(c,2)) { goto L_8026A7F0; } // 8026A7D8
  c->r[3]=c->r[28]|c->r[28]; // 8026A7DC
  c->r[5]=c->r[26]|c->r[26]; // 8026A7E0
  c->r[4]=c->r[8]+0x0000001Cu; // 8026A7E4
  c->lr=0x8026A7ECu; f_80167FF8(c); // 8026A7E8
  goto L_8026A80C; // 8026A7EC
L_8026A7F0:;
  c->r[4]=c->r[28]|c->r[28]; // 8026A7F0
  c->r[5]=c->r[6]|c->r[6]; // 8026A7F4
  c->lr=0x8026A7FCu; f_80284A08(c); // 8026A7F8
  c->r[3]=c->r[26]|c->r[26]; // 8026A7FC
  c->r[5]=c->r[26]|c->r[26]; // 8026A800
  c->r[4]=c->r[30]+0x0000001Cu; // 8026A804
  c->lr=0x8026A80Cu; f_80167FF8(c); // 8026A808
L_8026A80C:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 8026A80C
  if (crb(c,2)) { goto L_8026A82C; } // 8026A810
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A814
  c->r[4]=c->r[29]|0x40000000u; // 8026A818
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 8026A81C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 8026A820
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 8026A824
  goto L_8026A848; // 8026A828
L_8026A82C:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A82C
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 8026A830
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A834
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A838
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[2]);} // 8026A83C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8026A840
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 8026A844
L_8026A848:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 8026A848
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 8026A84C
  if (crb(c,2)) { goto L_8026A858; } // 8026A850
  c->r[3]=c->r[4]|0x10000000u; // 8026A854
L_8026A858:;
  c->r[11]=c->r[1]+0x00000060u; // 8026A858
  c->lr=0x8026A860u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026A85C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8026A860
  c->lr=c->r[0]; // 8026A864
  c->r[1]=c->r[1]+0x00000060u; // 8026A868
  return; // 8026A86C
}

// fn_8026A870
void f_8026A870(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A870
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A874
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A878
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026A87C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A880
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8026A884
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8026A888
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8026A88C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026A890
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8026A894
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8026A898
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026A89C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026A8A0
  return; // 8026A8A4
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026A8A8(Ctx* __restrict c) {
  trace_call(0x8026A8A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A8A8
  c->r[0]=c->lr; // 8026A8AC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A8B0
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A8B4
  c->r[4]=c->r[1]+0x00000008u; // 8026A8B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026A8BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026A8C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026A8C4
  c->r[31]=c->r[3]|c->r[3]; // 8026A8C8
  c->r[3]=c->r[1]+0x0000000Cu; // 8026A8CC
  c->lr=0x8026A8D4u; f_802847D4(c); // 8026A8D0
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A8D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A8D8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A8DC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[1]); // 8026A8E0
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A8E4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8026A8E8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 8026A8EC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8026A8F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A8F4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 8026A8F8
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[3]); // 8026A8FC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 8026A900
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 8026A904
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026A908
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A90C
  c->f[1]=-c->f[1]; // 8026A910
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 8026A914
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A918
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 8026A91C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 8026A920
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026A924
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026A928
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026A92C
  c->lr=c->r[0]; // 8026A930
  c->r[1]=c->r[1]+0x00000020u; // 8026A934
  return; // 8026A938
}

// fn_8026A93C
void f_8026A93C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A93C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026A940
  c->f[1]=-c->f[0]; // 8026A944
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026A948
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A94C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8026A950
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8026A954
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8026A958
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026A95C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8026A960
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026A964
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026A968
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026A96C
  return; // 8026A970
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026A974(Ctx* __restrict c) {
  trace_call(0x8026A974u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A974
  c->r[0]=c->lr; // 8026A978
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A97C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026A980
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A984
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026A988
  c->r[31]=c->r[4]|c->r[4]; // 8026A98C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026A990
  c->r[4]=c->r[1]+0x00000008u; // 8026A994
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026A998
  c->r[30]=c->r[3]|c->r[3]; // 8026A99C
  c->r[3]=c->r[1]+0x0000000Cu; // 8026A9A0
  c->lr=0x8026A9A8u; f_802847D4(c); // 8026A9A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A9A8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026A9AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A9B0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026A9B4
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[1]); // 8026A9B8
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[0]); // 8026A9BC
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026A9C0
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[1]); // 8026A9C4
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026A9C8
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[0]); // 8026A9CC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[11]); // 8026A9D0
  c->f[3]=-c->f[3]; // 8026A9D4
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026A9D8
  c->f[5]=c->ps1[5]=S(c->f[10]+c->f[9]); // 8026A9DC
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026A9E0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[7]); // 8026A9E4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[9]);} // 8026A9E8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[8]); // 8026A9EC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8026A9F0
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 8026A9F4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 8026A9F8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 8026A9FC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026AA00
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 8026AA04
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026AA08
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[11]);} // 8026AA0C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 8026AA10
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026AA14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026AA18
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026AA1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026AA20
  c->lr=c->r[0]; // 8026AA24
  c->r[1]=c->r[1]+0x00000020u; // 8026AA28
  return; // 8026AA2C
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026AA30(Ctx* __restrict c) {
  trace_call(0x8026AA30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AA30
  c->r[0]=c->lr; // 8026AA34
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AA38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026AA3C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AA40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026AA44
  c->r[31]=c->r[4]|c->r[4]; // 8026AA48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026AA4C
  c->r[4]=c->r[1]+0x00000008u; // 8026AA50
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026AA54
  c->r[30]=c->r[3]|c->r[3]; // 8026AA58
  c->r[3]=c->r[1]+0x0000000Cu; // 8026AA5C
  c->lr=0x8026AA64u; f_802847D4(c); // 8026AA60
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026AA64
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AA68
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026AA6C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[1]); // 8026AA70
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026AA74
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[3]); // 8026AA78
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 8026AA7C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026AA80
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 8026AA84
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AA88
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AA8C
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[6]); // 8026AA90
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 8026AA94
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[6]); // 8026AA98
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 8026AA9C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8026AAA0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026AAA4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026AAA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AAAC
  c->f[1]=-c->f[1]; // 8026AAB0
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 8026AAB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AAB8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 8026AABC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 8026AAC0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026AAC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026AAC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026AACC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026AAD0
  c->lr=c->r[0]; // 8026AAD4
  c->r[1]=c->r[1]+0x00000020u; // 8026AAD8
  return; // 8026AADC
}

// fn_8026AAE0
void f_8026AAE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AAE0
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AAE4
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026AAE8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026AAEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026AAF0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026AAF4
  c->f[4]=-c->f[6]; // 8026AAF8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026AAFC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8026AB00
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 8026AB04
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8026AB08
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 8026AB0C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026AB10
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 8026AB14
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 8026AB18
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 8026AB1C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 8026AB20
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 8026AB24
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026AB28
  return; // 8026AB2C
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026AB30(Ctx* __restrict c) {
  trace_call(0x8026AB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AB30
  c->r[0]=c->lr; // 8026AB34
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AB38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026AB3C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AB40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026AB44
  c->r[31]=c->r[4]|c->r[4]; // 8026AB48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026AB4C
  c->r[4]=c->r[1]+0x00000008u; // 8026AB50
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026AB54
  c->r[30]=c->r[3]|c->r[3]; // 8026AB58
  c->r[3]=c->r[1]+0x0000000Cu; // 8026AB5C
  c->lr=0x8026AB64u; f_802847D4(c); // 8026AB60
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026AB64
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AB68
  {uint32_t ea=c->r[31]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026AB6C
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 8026AB70
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AB74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AB78
  c->f[3]=-c->f[4]; // 8026AB7C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026AB80
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[0]); // 8026AB84
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 8026AB88
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026AB8C
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 8026AB90
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AB94
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026AB98
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[2]); // 8026AB9C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8026ABA0
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 8026ABA4
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026ABA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8026ABAC
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 8026ABB0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8026ABB4
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[8]); // 8026ABB8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[7]);} // 8026ABBC
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[5]); // 8026ABC0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8026ABC4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 8026ABC8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026ABCC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026ABD0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026ABD4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8026ABD8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 8026ABDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026ABE0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8026ABE4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[7]);} // 8026ABE8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026ABEC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 8026ABF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026ABF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026ABF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026ABFC
  c->lr=c->r[0]; // 8026AC00
  c->r[1]=c->r[1]+0x00000020u; // 8026AC04
  return; // 8026AC08
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026AC0C(Ctx* __restrict c) {
  trace_call(0x8026AC0Cu);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026AC0C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AC10
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026AC14
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[5]); // 8026AC18
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AC1C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 8026AC20
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026AC24
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026AC28
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026AC2C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 8026AC30
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026AC34
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026AC38
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 8026AC3C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026AC40
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026AC44
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026AC48
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 8026AC4C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 8026AC50
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 8026AC54
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 8026AC58
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 8026AC5C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 8026AC60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 8026AC64
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 8026AC68
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 8026AC6C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026AC70
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026AC74
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8026AC78
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026AC7C
  return; // 8026AC80
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026AC84(Ctx* __restrict c) {
  trace_call(0x8026AC84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AC84
  c->r[0]=c->lr; // 8026AC88
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AC8C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AC90
  c->r[4]=c->r[1]+0x00000008u; // 8026AC94
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026AC98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026AC9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026ACA0
  c->r[31]=c->r[3]|c->r[3]; // 8026ACA4
  c->r[3]=c->r[1]+0x0000000Cu; // 8026ACA8
  c->lr=0x8026ACB0u; f_802847D4(c); // 8026ACAC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 8026ACB0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026ACB4
  c->f[1]=-c->f[10]; // 8026ACB8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026ACBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026ACC0
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[0]); // 8026ACC4
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026ACC8
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 8026ACCC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 8026ACD0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026ACD4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8026ACD8
  {uint32_t ea=c->r[31]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026ACDC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026ACE0
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[5]); // 8026ACE4
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8026ACE8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026ACEC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 8026ACF0
  c->f[0]=c->ps1[0]=S(c->f[12]*c->f[10]); // 8026ACF4
  c->f[1]=c->ps1[1]=S(c->f[12]-c->f[4]); // 8026ACF8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 8026ACFC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026AD00
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026AD04
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026AD08
  c->f[2]=-c->f[3]; // 8026AD0C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8026AD10
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[8]); // 8026AD14
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026AD18
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 8026AD1C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[11]); // 8026AD20
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[8]); // 8026AD24
  c->f[4]=c->ps1[4]=S(c->f[10]+c->f[4]); // 8026AD28
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026AD2C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[4]);} // 8026AD30
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 8026AD34
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026AD38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026AD3C
  c->f[2]=-c->f[3]; // 8026AD40
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[6]); // 8026AD44
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 8026AD48
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[9]); // 8026AD4C
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[6]); // 8026AD50
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[4]); // 8026AD54
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026AD58
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 8026AD5C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 8026AD60
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026AD64
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026AD68
  c->f[2]=-c->f[3]; // 8026AD6C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[5]); // 8026AD70
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 8026AD74
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[7]); // 8026AD78
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[5]); // 8026AD7C
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 8026AD80
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026AD84
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[4]); // 8026AD88
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8026AD8C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[0]); // 8026AD90
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026AD94
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026AD98
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026AD9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026ADA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026ADA4
  c->lr=c->r[0]; // 8026ADA8
  c->r[1]=c->r[1]+0x00000020u; // 8026ADAC
  return; // 8026ADB0
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026ADB4(Ctx* __restrict c) {
  trace_call(0x8026ADB4u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026ADB4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026ADB8
  c->f[3]=-c->f[0]; // 8026ADBC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026ADC0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026ADC4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 8026ADC8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026ADCC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026ADD0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026ADD4
  return; // 8026ADD8
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026ADDC(Ctx* __restrict c) {
  trace_call(0x8026ADDCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026ADDC
  c->r[0]=c->lr; // 8026ADE0
  W32(c->r[1]+0x00000084u,c->r[0]); // 8026ADE4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8026ADE8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8026ADEC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 8026ADF0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 8026ADF4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 8026ADF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 8026ADFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 8026AE00
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 8026AE04
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 8026AE08
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 8026AE0C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 8026AE10
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 8026AE14
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AE18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026AE1C
  c->r[31]=c->r[4]|c->r[4]; // 8026AE20
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AE24
  c->r[4]=c->r[1]+0x00000008u; // 8026AE28
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026AE2C
  c->r[30]=c->r[3]|c->r[3]; // 8026AE30
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026AE34
  c->r[3]=c->r[1]+0x0000000Cu; // 8026AE38
  c->lr=0x8026AE40u; f_802847D4(c); // 8026AE3C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026AE40
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AE44
  {uint32_t ea=c->r[1]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026AE48
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[6]); // 8026AE4C
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026AE50
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AE54
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[7]); // 8026AE58
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026AE5C
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[0]); // 8026AE60
  c->f[30]=-c->f[8]; // 8026AE64
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AE68
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[10]); // 8026AE6C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 8026AE70
  c->f[8]=c->ps1[8]=S(c->f[2]-c->f[10]); // 8026AE74
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 8026AE78
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 8026AE7C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026AE80
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[6]); // 8026AE84
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 8026AE88
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[8]); // 8026AE8C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026AE90
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[4]); // 8026AE94
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026AE98
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[8]); // 8026AE9C
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[4]); // 8026AEA0
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026AEA4
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 8026AEA8
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 8026AEAC
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 8026AEB0
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 8026AEB4
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 8026AEB8
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 8026AEBC
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 8026AEC0
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 8026AEC4
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 8026AEC8
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 8026AECC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 8026AED0
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 8026AED4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 8026AED8
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 8026AEDC
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 8026AEE0
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 8026AEE4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 8026AEE8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 8026AEEC
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 8026AEF0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 8026AEF4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 8026AEF8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 8026AEFC
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 8026AF00
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 8026AF04
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 8026AF08
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 8026AF0C
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 8026AF10
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026AF14
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 8026AF18
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026AF1C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 8026AF20
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026AF24
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8026AF28
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8026AF2C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 8026AF30
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 8026AF34
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 8026AF38
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 8026AF3C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 8026AF40
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 8026AF44
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 8026AF48
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 8026AF4C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 8026AF50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 8026AF54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026AF58
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026AF5C
  c->r[0]=R32(c->r[1]+0x00000084u); // 8026AF60
  c->lr=c->r[0]; // 8026AF64
  c->r[1]=c->r[1]+0x00000080u; // 8026AF68
  return; // 8026AF6C
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026AF70(Ctx* __restrict c) {
  trace_call(0x8026AF70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AF70
  c->r[0]=c->lr; // 8026AF74
  W32(c->r[1]+0x00000034u,c->r[0]); // 8026AF78
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8026AF7C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8026AF80
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026AF84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026AF88
  c->r[31]=c->r[4]|c->r[4]; // 8026AF8C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AF90
  c->r[4]=c->r[1]+0x00000008u; // 8026AF94
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026AF98
  c->r[30]=c->r[3]|c->r[3]; // 8026AF9C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026AFA0
  c->r[3]=c->r[1]+0x0000000Cu; // 8026AFA4
  c->lr=0x8026AFACu; f_802847D4(c); // 8026AFA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8026AFAC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026AFB0
  c->f[1]=-c->f[7]; // 8026AFB4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026AFB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026AFBC
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[0]); // 8026AFC0
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026AFC4
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 8026AFC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 8026AFCC
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026AFD0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8026AFD4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[13]=c->ps1[13]=RF32(ea);} // 8026AFD8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026AFDC
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[7]); // 8026AFE0
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8026AFE4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026AFE8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 8026AFEC
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[5]); // 8026AFF0
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[12]); // 8026AFF4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 8026AFF8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026AFFC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B000
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026B004
  c->f[3]=-c->f[4]; // 8026B008
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026B00C
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[10]); // 8026B010
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8026B014
  c->f[12]=c->ps1[12]=S(c->f[31]*c->f[13]); // 8026B018
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8026B01C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 8026B020
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B024
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[10]); // 8026B028
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B02C
  c->f[6]=c->ps1[6]=S(c->f[12]+c->f[6]); // 8026B030
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8026B034
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 8026B038
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[3]);} // 8026B03C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B040
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026B044
  c->f[3]=-c->f[4]; // 8026B048
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[8]); // 8026B04C
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 8026B050
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[11]); // 8026B054
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[8]); // 8026B058
  c->f[6]=c->ps1[6]=S(c->f[10]+c->f[6]); // 8026B05C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8026B060
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 8026B064
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[3]);} // 8026B068
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B06C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026B070
  c->f[3]=-c->f[4]; // 8026B074
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[7]); // 8026B078
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 8026B07C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[9]); // 8026B080
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 8026B084
  c->f[6]=c->ps1[6]=S(c->f[8]+c->f[6]); // 8026B088
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8026B08C
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[6]); // 8026B090
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 8026B094
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[0]); // 8026B098
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026B09C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[5]); // 8026B0A0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8026B0A4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026B0A8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B0AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8026B0B0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8026B0B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026B0B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026B0BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026B0C0
  c->lr=c->r[0]; // 8026B0C4
  c->r[1]=c->r[1]+0x00000030u; // 8026B0C8
  return; // 8026B0CC
}

// fn_8026B0D0
void f_8026B0D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B0D0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B0D4
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B0D8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8026B0DC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026B0E0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B0E4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B0E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026B0EC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B0F0
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 8026B0F4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026B0F8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 8026B0FC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B100
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 8026B104
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B108
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8026B10C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026B110
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026B114
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 8026B118
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B11C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 8026B120
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 8026B124
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 8026B128
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 8026B12C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 8026B130
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 8026B134
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026B138
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 8026B13C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 8026B140
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 8026B144
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026B148
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026B14C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B150
  return; // 8026B154
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026B158(Ctx* __restrict c) {
  trace_call(0x8026B158u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B158
  c->r[0]=c->lr; // 8026B15C
  W32(c->r[1]+0x00000084u,c->r[0]); // 8026B160
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8026B164
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8026B168
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 8026B16C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 8026B170
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 8026B174
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 8026B178
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 8026B17C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 8026B180
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 8026B184
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 8026B188
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 8026B18C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 8026B190
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B194
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026B198
  c->r[31]=c->r[4]|c->r[4]; // 8026B19C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B1A0
  c->r[4]=c->r[1]+0x00000008u; // 8026B1A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026B1A8
  c->r[30]=c->r[3]|c->r[3]; // 8026B1AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026B1B0
  c->r[3]=c->r[1]+0x0000000Cu; // 8026B1B4
  c->lr=0x8026B1BCu; f_802847D4(c); // 8026B1B8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B1BC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[27]=c->ps1[27]=RF32(ea);} // 8026B1C0
  {uint32_t ea=c->r[2]+0xFFFF9D74u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026B1C4
  c->f[4]=c->ps1[4]=S(c->f[27]*c->f[2]); // 8026B1C8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B1CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026B1D0
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 8026B1D4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B1D8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B1DC
  c->f[5]=c->ps1[5]=S(c->f[7]-c->f[1]); // 8026B1E0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B1E4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026B1E8
  c->f[30]=-c->f[4]; // 8026B1EC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 8026B1F0
  c->f[10]=c->ps1[10]=S(c->f[7]-c->f[1]); // 8026B1F4
  c->f[3]=c->ps1[3]=S(c->f[27]*c->f[9]); // 8026B1F8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 8026B1FC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[9]); // 8026B200
  c->f[9]=c->ps1[9]=S(c->f[6]-c->f[7]); // 8026B204
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 8026B208
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 8026B20C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[27]); // 8026B210
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026B214
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8026B218
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[4]); // 8026B21C
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B220
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[8]); // 8026B224
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 8026B228
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026B22C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026B230
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 8026B234
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 8026B238
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 8026B23C
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 8026B240
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 8026B244
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 8026B248
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 8026B24C
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 8026B250
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 8026B254
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 8026B258
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 8026B25C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 8026B260
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[9]); // 8026B264
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[8]); // 8026B268
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 8026B26C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 8026B270
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 8026B274
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 8026B278
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 8026B27C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 8026B280
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 8026B284
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 8026B288
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 8026B28C
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 8026B290
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 8026B294
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 8026B298
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 8026B29C
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 8026B2A0
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026B2A4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 8026B2A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026B2AC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 8026B2B0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026B2B4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8026B2B8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8026B2BC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 8026B2C0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 8026B2C4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 8026B2C8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 8026B2CC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 8026B2D0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 8026B2D4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 8026B2D8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 8026B2DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 8026B2E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 8026B2E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026B2E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026B2EC
  c->r[0]=R32(c->r[1]+0x00000084u); // 8026B2F0
  c->lr=c->r[0]; // 8026B2F4
  c->r[1]=c->r[1]+0x00000080u; // 8026B2F8
  return; // 8026B2FC
}

// CalcTexMtx_Maya__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_8026B300(Ctx* __restrict c) {
  trace_call(0x8026B300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B300
  c->r[0]=c->lr; // 8026B304
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026B308
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 8026B30C
  cmpu(c,0,c->r[0],0x00000007u); // 8026B310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026B314
  c->r[31]=c->r[3]|c->r[3]; // 8026B318
  if (!crb(c,2)) { goto L_8026B328; } // 8026B31C
  c->r[3]=0u+0x00000000u; // 8026B320
  goto L_8026B388; // 8026B324
L_8026B328:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026B328
  if (crb(c,2)) { goto L_8026B350; } // 8026B32C
  c->r[6]=0u+0x80310000u; // 8026B330
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026B334
  c->r[6]=c->r[6]+0xFFFF8608u; // 8026B338
  c->r[4]=c->r[5]|c->r[5]; // 8026B33C
  c->r[12]=R32(c->r[6]+c->r[0]); // 8026B340
  c->ctr=c->r[12]; // 8026B344
  if (true) { c->lr=0x8026B34Cu; dispatch(c,c->ctr); } // 8026B348
  goto L_8026B36C; // 8026B34C
L_8026B350:;
  c->r[6]=0u+0x80310000u; // 8026B350
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026B354
  c->r[6]=c->r[6]+0xFFFF8624u; // 8026B358
  c->r[4]=c->r[5]|c->r[5]; // 8026B35C
  c->r[12]=R32(c->r[6]+c->r[0]); // 8026B360
  c->ctr=c->r[12]; // 8026B364
  if (true) { c->lr=0x8026B36Cu; dispatch(c,c->ctr); } // 8026B368
L_8026B36C:;
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B36C
  c->r[3]=0u+0x00000001u; // 8026B370
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B374
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 8026B378
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 8026B37C
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 8026B380
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 8026B384
L_8026B388:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026B388
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026B38C
  c->lr=c->r[0]; // 8026B390
  c->r[1]=c->r[1]+0x00000010u; // 8026B394
  return; // 8026B398
}

// fn_8026B39C
void f_8026B39C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B39C
  c->r[0]=c->lr; // 8026B3A0
  W32(c->r[1]+0x00000074u,c->r[0]); // 8026B3A4
  c->r[11]=c->r[1]+0x00000070u; // 8026B3A8
  c->lr=0x8026B3B0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026B3AC
  c->r[31]=R32(c->r[8]+0x00000000u); // 8026B3B0
  c->r[25]=c->r[3]|c->r[3]; // 8026B3B4
  c->r[26]=c->r[4]|c->r[4]; // 8026B3B8
  c->r[27]=c->r[5]|c->r[5]; // 8026B3BC
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8026B3C0
  c->r[28]=c->r[6]|c->r[6]; // 8026B3C4
  c->r[29]=c->r[7]|c->r[7]; // 8026B3C8
  c->r[30]=c->r[8]|c->r[8]; // 8026B3CC
  if (!crb(c,2)) { goto L_8026B3DC; } // 8026B3D0
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 8026B3D4
  if (crb(c,2)) { goto L_8026B3EC; } // 8026B3D8
L_8026B3DC:;
  c->r[3]=c->r[27]|c->r[27]; // 8026B3DC
  c->r[4]=c->r[25]|c->r[25]; // 8026B3E0
  c->lr=0x8026B3E8u; f_80167FC4(c); // 8026B3E4
  goto L_8026B4CC; // 8026B3E8
L_8026B3EC:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 8026B3EC
  if (crb(c,2)) { goto L_8026B464; } // 8026B3F0
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 8026B3F4
  if (crb(c,2)) { goto L_8026B424; } // 8026B3F8
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B3FC
  c->r[4]=c->r[27]|c->r[27]; // 8026B400
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B404
  c->r[5]=c->r[1]+0x00000014u; // 8026B408
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B40C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8026B410
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8026B414
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 8026B418
  c->lr=0x8026B420u; f_80284A5C(c); // 8026B41C
  goto L_8026B4CC; // 8026B420
L_8026B424:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B424
  c->r[4]=c->r[27]|c->r[27]; // 8026B428
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B42C
  c->r[5]=c->r[1]+0x00000008u; // 8026B430
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B434
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 8026B438
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B43C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B440
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B444
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8026B448
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 8026B44C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8026B450
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026B454
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8026B458
  c->lr=0x8026B460u; f_80284A5C(c); // 8026B45C
  goto L_8026B4CC; // 8026B460
L_8026B464:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 8026B464
  if (crb(c,2)) { goto L_8026B480; } // 8026B468
  c->r[3]=c->r[27]|c->r[27]; // 8026B46C
  c->r[5]=c->r[25]|c->r[25]; // 8026B470
  c->r[4]=c->r[8]+0x0000001Cu; // 8026B474
  c->lr=0x8026B47Cu; f_80167FF8(c); // 8026B478
  goto L_8026B4CC; // 8026B47C
L_8026B480:;
  c->r[3]=c->r[8]+0x0000001Cu; // 8026B480
  c->r[4]=c->r[1]+0x00000020u; // 8026B484
  c->lr=0x8026B48Cu; f_80167FC4(c); // 8026B488
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B48C
  c->r[3]=c->r[27]|c->r[27]; // 8026B490
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B494
  c->r[5]=c->r[25]|c->r[25]; // 8026B498
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B49C
  c->r[4]=c->r[1]+0x00000020u; // 8026B4A0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 8026B4A4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B4A8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B4AC
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B4B0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8026B4B4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 8026B4B8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8026B4BC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 8026B4C0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8026B4C4
  c->lr=0x8026B4CCu; f_80167FF8(c); // 8026B4C8
L_8026B4CC:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 8026B4CC
  if (crb(c,2)) { goto L_8026B4EC; } // 8026B4D0
  {uint32_t ea=c->r[2]+0xFFFF9D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B4D4
  c->r[4]=c->r[29]|0x40000000u; // 8026B4D8
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 8026B4DC
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[0]);} // 8026B4E0
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[0]);} // 8026B4E4
  goto L_8026B508; // 8026B4E8
L_8026B4EC:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B4EC
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 8026B4F0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B4F4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B4F8
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[2]);} // 8026B4FC
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 8026B500
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 8026B504
L_8026B508:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 8026B508
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 8026B50C
  if (crb(c,2)) { goto L_8026B518; } // 8026B510
  c->r[3]=c->r[4]|0x10000000u; // 8026B514
L_8026B518:;
  c->r[11]=c->r[1]+0x00000070u; // 8026B518
  c->lr=0x8026B520u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026B51C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8026B520
  c->lr=c->r[0]; // 8026B524
  c->r[1]=c->r[1]+0x00000070u; // 8026B528
  return; // 8026B52C
}

// fn_8026B530
void f_8026B530(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B530
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B534
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B538
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026B53C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B540
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8026B544
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8026B548
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8026B54C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026B550
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8026B554
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8026B558
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026B55C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B560
  return; // 8026B564
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026B568(Ctx* __restrict c) {
  trace_call(0x8026B568u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B568
  c->r[0]=c->lr; // 8026B56C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B570
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B574
  c->r[4]=c->r[1]+0x00000008u; // 8026B578
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026B57C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026B580
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026B584
  c->r[31]=c->r[3]|c->r[3]; // 8026B588
  c->r[3]=c->r[1]+0x0000000Cu; // 8026B58C
  c->lr=0x8026B594u; f_802847D4(c); // 8026B590
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B594
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B598
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8026B59C
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B5A0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B5A4
  c->f[0]=-c->f[0]; // 8026B5A8
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 8026B5AC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 8026B5B0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B5B4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026B5B8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B5BC
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 8026B5C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B5C4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 8026B5C8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 8026B5CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B5D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8026B5D4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B5D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026B5DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026B5E0
  c->lr=c->r[0]; // 8026B5E4
  c->r[1]=c->r[1]+0x00000020u; // 8026B5E8
  return; // 8026B5EC
}

// fn_8026B5F0
void f_8026B5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B5F0
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B5F4
  c->f[1]=-c->f[0]; // 8026B5F8
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B5FC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B600
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8026B604
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8026B608
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8026B60C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026B610
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8026B614
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026B618
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026B61C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B620
  return; // 8026B624
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026B628(Ctx* __restrict c) {
  trace_call(0x8026B628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B628
  c->r[0]=c->lr; // 8026B62C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B630
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026B634
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B638
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026B63C
  c->r[31]=c->r[4]|c->r[4]; // 8026B640
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026B644
  c->r[4]=c->r[1]+0x00000008u; // 8026B648
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026B64C
  c->r[30]=c->r[3]|c->r[3]; // 8026B650
  c->r[3]=c->r[1]+0x0000000Cu; // 8026B654
  c->lr=0x8026B65Cu; f_802847D4(c); // 8026B658
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B65C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B660
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B664
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B668
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[0]); // 8026B66C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 8026B670
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B674
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[4]); // 8026B678
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B67C
  c->f[1]=-c->f[7]; // 8026B680
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 8026B684
  c->f[3]=-c->f[6]; // 8026B688
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 8026B68C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026B690
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 8026B694
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[3]);} // 8026B698
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[6]);} // 8026B69C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 8026B6A0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[7]);} // 8026B6A4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 8026B6A8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B6AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026B6B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026B6B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026B6B8
  c->lr=c->r[0]; // 8026B6BC
  c->r[1]=c->r[1]+0x00000020u; // 8026B6C0
  return; // 8026B6C4
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026B6C8(Ctx* __restrict c) {
  trace_call(0x8026B6C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B6C8
  c->r[0]=c->lr; // 8026B6CC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B6D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026B6D4
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B6D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026B6DC
  c->r[31]=c->r[4]|c->r[4]; // 8026B6E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026B6E4
  c->r[4]=c->r[1]+0x00000008u; // 8026B6E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026B6EC
  c->r[30]=c->r[3]|c->r[3]; // 8026B6F0
  c->r[3]=c->r[1]+0x0000000Cu; // 8026B6F4
  c->lr=0x8026B6FCu; f_802847D4(c); // 8026B6F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B6FC
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B700
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8026B704
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026B708
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B70C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B710
  c->f[1]=-c->f[0]; // 8026B714
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 8026B718
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B71C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 8026B720
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B724
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B728
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[6]); // 8026B72C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 8026B730
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8026B734
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8026B738
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026B73C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B740
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 8026B744
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B748
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 8026B74C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 8026B750
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B754
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B758
  c->f[3]=-c->f[4]; // 8026B75C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[6]); // 8026B760
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[5]); // 8026B764
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8026B768
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8026B76C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026B770
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B774
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026B778
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026B77C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026B780
  c->lr=c->r[0]; // 8026B784
  c->r[1]=c->r[1]+0x00000020u; // 8026B788
  return; // 8026B78C
}

// fn_8026B790
void f_8026B790(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B790
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B794
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B798
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026B79C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026B7A0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B7A4
  c->f[4]=-c->f[6]; // 8026B7A8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B7AC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8026B7B0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 8026B7B4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8026B7B8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 8026B7BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026B7C0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 8026B7C4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 8026B7C8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 8026B7CC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 8026B7D0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 8026B7D4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B7D8
  return; // 8026B7DC
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026B7E0(Ctx* __restrict c) {
  trace_call(0x8026B7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B7E0
  c->r[0]=c->lr; // 8026B7E4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B7E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026B7EC
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B7F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026B7F4
  c->r[31]=c->r[4]|c->r[4]; // 8026B7F8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026B7FC
  c->r[4]=c->r[1]+0x00000008u; // 8026B800
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026B804
  c->r[30]=c->r[3]|c->r[3]; // 8026B808
  c->r[3]=c->r[1]+0x0000000Cu; // 8026B80C
  c->lr=0x8026B814u; f_802847D4(c); // 8026B810
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B814
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B818
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B81C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B820
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[3]); // 8026B824
  c->f[10]=c->ps1[10]=S(c->f[0]*c->f[2]); // 8026B828
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B82C
  c->f[7]=c->ps1[7]=S(c->f[5]*c->f[3]); // 8026B830
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026B834
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[2]); // 8026B838
  c->f[3]=-c->f[9]; // 8026B83C
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[1]); // 8026B840
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B844
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[1]); // 8026B848
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B84C
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 8026B850
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8026B854
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[4]); // 8026B858
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[7]);} // 8026B85C
  c->f[5]=c->ps1[5]=S(c->f[8]-c->f[5]); // 8026B860
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8026B864
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 8026B868
  c->f[4]=-c->f[8]; // 8026B86C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 8026B870
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[10]);} // 8026B874
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026B878
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[9]);} // 8026B87C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 8026B880
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 8026B884
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026B888
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B88C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026B890
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026B894
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026B898
  c->lr=c->r[0]; // 8026B89C
  c->r[1]=c->r[1]+0x00000020u; // 8026B8A0
  return; // 8026B8A4
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026B8A8(Ctx* __restrict c) {
  trace_call(0x8026B8A8u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B8A8
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B8AC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B8B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026B8B4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B8B8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B8BC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B8C0
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 8026B8C4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8026B8C8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 8026B8CC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026B8D0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 8026B8D4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026B8D8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026B8DC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026B8E0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 8026B8E4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B8E8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 8026B8EC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 8026B8F0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 8026B8F4
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[9]); // 8026B8F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026B8FC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 8026B900
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 8026B904
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 8026B908
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 8026B90C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026B910
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026B914
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026B918
  return; // 8026B91C
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026B920(Ctx* __restrict c) {
  trace_call(0x8026B920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B920
  c->r[0]=c->lr; // 8026B924
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B928
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B92C
  c->r[4]=c->r[1]+0x00000008u; // 8026B930
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026B934
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026B938
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026B93C
  c->r[31]=c->r[3]|c->r[3]; // 8026B940
  c->r[3]=c->r[1]+0x0000000Cu; // 8026B944
  c->lr=0x8026B94Cu; f_802847D4(c); // 8026B948
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B94C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B950
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B954
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B958
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[2]); // 8026B95C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[2]); // 8026B960
  {uint32_t ea=c->r[31]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026B964
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8026B968
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B96C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8026B970
  {uint32_t ea=c->r[31]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026B974
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[1]); // 8026B978
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026B97C
  c->f[6]=c->ps1[6]=S(c->f[3]+c->f[0]); // 8026B980
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026B984
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026B988
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 8026B98C
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026B990
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 8026B994
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026B998
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B99C
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 8026B9A0
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[2]); // 8026B9A4
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[9]); // 8026B9A8
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 8026B9AC
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[6]); // 8026B9B0
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026B9B4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[6]);} // 8026B9B8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 8026B9BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026B9C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026B9C4
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 8026B9C8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8026B9CC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[7]); // 8026B9D0
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 8026B9D4
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[4]); // 8026B9D8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8026B9DC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 8026B9E0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8026B9E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026B9E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026B9EC
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 8026B9F0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 8026B9F4
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 8026B9F8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8026B9FC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8026BA00
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 8026BA04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8026BA08
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026BA0C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026BA10
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026BA14
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026BA18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026BA1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026BA20
  c->lr=c->r[0]; // 8026BA24
  c->r[1]=c->r[1]+0x00000020u; // 8026BA28
  return; // 8026BA2C
}

// fn_8026BA30
void f_8026BA30(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026BA30
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BA34
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BA38
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BA3C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8026BA40
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026BA44
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026BA48
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026BA4C
  return; // 8026BA50
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026BA54(Ctx* __restrict c) {
  trace_call(0x8026BA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026BA54
  c->r[0]=c->lr; // 8026BA58
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026BA5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8026BA60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8026BA64
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8026BA68
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8026BA6C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BA70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026BA74
  c->r[31]=c->r[4]|c->r[4]; // 8026BA78
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BA7C
  c->r[4]=c->r[1]+0x00000008u; // 8026BA80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026BA84
  c->r[30]=c->r[3]|c->r[3]; // 8026BA88
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026BA8C
  c->r[3]=c->r[1]+0x0000000Cu; // 8026BA90
  c->lr=0x8026BA98u; f_802847D4(c); // 8026BA94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BA98
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BA9C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BAA0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 8026BAA4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026BAA8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8026BAAC
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026BAB0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 8026BAB4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8026BAB8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 8026BABC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 8026BAC0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[7]); // 8026BAC4
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 8026BAC8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[6]); // 8026BACC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026BAD0
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 8026BAD4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026BAD8
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[4]); // 8026BADC
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BAE0
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[6]); // 8026BAE4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026BAE8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 8026BAEC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026BAF0
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 8026BAF4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 8026BAF8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 8026BAFC
  c->f[12]=c->ps1[12]=S(c->f[1]*c->f[13]); // 8026BB00
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[30]); // 8026BB04
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[4]);} // 8026BB08
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[11]); // 8026BB0C
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[12]); // 8026BB10
  c->f[12]=c->ps1[12]=S(c->f[1]+c->f[6]); // 8026BB14
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[13]); // 8026BB18
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[10]); // 8026BB1C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 8026BB20
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[6]); // 8026BB24
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[12]);} // 8026BB28
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[10]); // 8026BB2C
  c->f[10]=c->ps1[10]=S(c->f[5]-c->f[4]); // 8026BB30
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[11]); // 8026BB34
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 8026BB38
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[9]); // 8026BB3C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[8]); // 8026BB40
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 8026BB44
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 8026BB48
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[9]); // 8026BB4C
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 8026BB50
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 8026BB54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026BB58
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 8026BB5C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 8026BB60
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8026BB64
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8026BB68
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8026BB6C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8026BB70
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8026BB74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026BB78
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026BB7C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8026BB80
  c->lr=c->r[0]; // 8026BB84
  c->r[1]=c->r[1]+0x00000040u; // 8026BB88
  return; // 8026BB8C
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026BB90(Ctx* __restrict c) {
  trace_call(0x8026BB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026BB90
  c->r[0]=c->lr; // 8026BB94
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BB98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026BB9C
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BBA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026BBA4
  c->r[31]=c->r[4]|c->r[4]; // 8026BBA8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026BBAC
  c->r[4]=c->r[1]+0x00000008u; // 8026BBB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026BBB4
  c->r[30]=c->r[3]|c->r[3]; // 8026BBB8
  c->r[3]=c->r[1]+0x0000000Cu; // 8026BBBC
  c->lr=0x8026BBC4u; f_802847D4(c); // 8026BBC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BBC4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BBC8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BBCC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 8026BBD0
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BBD4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8026BBD8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026BBDC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8026BBE0
  {uint32_t ea=c->r[30]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026BBE4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 8026BBE8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026BBEC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 8026BBF0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BBF4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026BBF8
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 8026BBFC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BC00
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 8026BC04
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 8026BC08
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BC0C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 8026BC10
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BC14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026BC18
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8026BC1C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BC20
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 8026BC24
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BC28
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[7]); // 8026BC2C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[10]); // 8026BC30
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[7]); // 8026BC34
  c->f[4]=c->ps1[4]=S(c->f[9]-c->f[4]); // 8026BC38
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8026BC3C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 8026BC40
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 8026BC44
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BC48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026BC4C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[6]); // 8026BC50
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[8]); // 8026BC54
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[8]); // 8026BC58
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[6]); // 8026BC5C
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[4]); // 8026BC60
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8026BC64
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 8026BC68
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 8026BC6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026BC70
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BC74
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 8026BC78
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 8026BC7C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 8026BC80
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8026BC84
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8026BC88
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 8026BC8C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8026BC90
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026BC94
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026BC98
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026BC9C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026BCA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026BCA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026BCA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026BCAC
  c->lr=c->r[0]; // 8026BCB0
  c->r[1]=c->r[1]+0x00000020u; // 8026BCB4
  return; // 8026BCB8
}

// fn_8026BCBC
void f_8026BCBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BCBC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BCC0
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BCC4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8026BCC8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026BCCC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BCD0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026BCD4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026BCD8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BCDC
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 8026BCE0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026BCE4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 8026BCE8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BCEC
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 8026BCF0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026BCF4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8026BCF8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026BCFC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026BD00
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 8026BD04
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BD08
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 8026BD0C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 8026BD10
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 8026BD14
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 8026BD18
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 8026BD1C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 8026BD20
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026BD24
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 8026BD28
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 8026BD2C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 8026BD30
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026BD34
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026BD38
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026BD3C
  return; // 8026BD40
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026BD44(Ctx* __restrict c) {
  trace_call(0x8026BD44u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026BD44
  c->r[0]=c->lr; // 8026BD48
  W32(c->r[1]+0x00000054u,c->r[0]); // 8026BD4C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8026BD50
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8026BD54
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8026BD58
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8026BD5C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 8026BD60
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 8026BD64
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BD68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026BD6C
  c->r[31]=c->r[4]|c->r[4]; // 8026BD70
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BD74
  c->r[4]=c->r[1]+0x00000008u; // 8026BD78
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026BD7C
  c->r[30]=c->r[3]|c->r[3]; // 8026BD80
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026BD84
  c->r[3]=c->r[1]+0x0000000Cu; // 8026BD88
  c->lr=0x8026BD90u; f_802847D4(c); // 8026BD8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026BD90
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BD94
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8026BD98
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026BD9C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 8026BDA0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[6]); // 8026BDA4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BDA8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BDAC
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[5]); // 8026BDB0
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8026BDB4
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[1]); // 8026BDB8
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[6]); // 8026BDBC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BDC0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 8026BDC4
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 8026BDC8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026BDCC
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[7]); // 8026BDD0
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[7]); // 8026BDD4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[12]=c->ps1[12]=RF32(ea);} // 8026BDD8
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[4]); // 8026BDDC
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[4]); // 8026BDE0
  {uint32_t ea=c->r[30]+0x00000014u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026BDE4
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 8026BDE8
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 8026BDEC
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026BDF0
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[7]); // 8026BDF4
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 8026BDF8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026BDFC
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 8026BE00
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[6]); // 8026BE04
  {uint32_t ea=c->r[30]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026BE08
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[13]); // 8026BE0C
  c->f[13]=c->ps1[13]=S(c->f[4]+c->f[5]); // 8026BE10
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[29]); // 8026BE14
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[8]);} // 8026BE18
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[31]); // 8026BE1C
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[12]); // 8026BE20
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[30]);} // 8026BE24
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[11]); // 8026BE28
  c->f[29]=c->ps1[29]=S(c->f[7]+c->f[6]); // 8026BE2C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[13]);} // 8026BE30
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[12]); // 8026BE34
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[4]); // 8026BE38
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[11]); // 8026BE3C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[29]);} // 8026BE40
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[10]); // 8026BE44
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[9]); // 8026BE48
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[8]);} // 8026BE4C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[9]); // 8026BE50
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[10]); // 8026BE54
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 8026BE58
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 8026BE5C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026BE60
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 8026BE64
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 8026BE68
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8026BE6C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8026BE70
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8026BE74
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8026BE78
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8026BE7C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 8026BE80
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 8026BE84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026BE88
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026BE8C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8026BE90
  c->lr=c->r[0]; // 8026BE94
  c->r[1]=c->r[1]+0x00000050u; // 8026BE98
  return; // 8026BE9C
}

// CalcTexMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_8026BEA0(Ctx* __restrict c) {
  trace_call(0x8026BEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026BEA0
  c->r[0]=c->lr; // 8026BEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026BEA8
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 8026BEAC
  cmpu(c,0,c->r[0],0x00000007u); // 8026BEB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026BEB4
  c->r[31]=c->r[3]|c->r[3]; // 8026BEB8
  if (!crb(c,2)) { goto L_8026BEC8; } // 8026BEBC
  c->r[3]=0u+0x00000000u; // 8026BEC0
  goto L_8026BF28; // 8026BEC4
L_8026BEC8:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026BEC8
  if (crb(c,2)) { goto L_8026BEF0; } // 8026BECC
  c->r[6]=0u+0x80310000u; // 8026BED0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026BED4
  c->r[6]=c->r[6]+0xFFFF8640u; // 8026BED8
  c->r[4]=c->r[5]|c->r[5]; // 8026BEDC
  c->r[12]=R32(c->r[6]+c->r[0]); // 8026BEE0
  c->ctr=c->r[12]; // 8026BEE4
  if (true) { c->lr=0x8026BEECu; dispatch(c,c->ctr); } // 8026BEE8
  goto L_8026BF0C; // 8026BEEC
L_8026BEF0:;
  c->r[6]=0u+0x80310000u; // 8026BEF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026BEF4
  c->r[6]=c->r[6]+0xFFFF865Cu; // 8026BEF8
  c->r[4]=c->r[5]|c->r[5]; // 8026BEFC
  c->r[12]=R32(c->r[6]+c->r[0]); // 8026BF00
  c->ctr=c->r[12]; // 8026BF04
  if (true) { c->lr=0x8026BF0Cu; dispatch(c,c->ctr); } // 8026BF08
L_8026BF0C:;
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BF0C
  c->r[3]=0u+0x00000001u; // 8026BF10
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BF14
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 8026BF18
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 8026BF1C
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 8026BF20
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 8026BF24
L_8026BF28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026BF28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026BF2C
  c->lr=c->r[0]; // 8026BF30
  c->r[1]=c->r[1]+0x00000010u; // 8026BF34
  return; // 8026BF38
}

// fn_8026BF3C
void f_8026BF3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026BF3C
  c->r[0]=c->lr; // 8026BF40
  W32(c->r[1]+0x00000074u,c->r[0]); // 8026BF44
  c->r[11]=c->r[1]+0x00000070u; // 8026BF48
  c->lr=0x8026BF50u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026BF4C
  c->r[31]=R32(c->r[8]+0x00000000u); // 8026BF50
  c->r[25]=c->r[3]|c->r[3]; // 8026BF54
  c->r[26]=c->r[4]|c->r[4]; // 8026BF58
  c->r[27]=c->r[5]|c->r[5]; // 8026BF5C
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8026BF60
  c->r[28]=c->r[6]|c->r[6]; // 8026BF64
  c->r[29]=c->r[7]|c->r[7]; // 8026BF68
  c->r[30]=c->r[8]|c->r[8]; // 8026BF6C
  if (!crb(c,2)) { goto L_8026BF7C; } // 8026BF70
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 8026BF74
  if (crb(c,2)) { goto L_8026BF8C; } // 8026BF78
L_8026BF7C:;
  c->r[3]=c->r[27]|c->r[27]; // 8026BF7C
  c->r[4]=c->r[25]|c->r[25]; // 8026BF80
  c->lr=0x8026BF88u; f_80167FC4(c); // 8026BF84
  goto L_8026C06C; // 8026BF88
L_8026BF8C:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 8026BF8C
  if (crb(c,2)) { goto L_8026C004; } // 8026BF90
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 8026BF94
  if (crb(c,2)) { goto L_8026BFC4; } // 8026BF98
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BF9C
  c->r[4]=c->r[27]|c->r[27]; // 8026BFA0
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BFA4
  c->r[5]=c->r[1]+0x00000014u; // 8026BFA8
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BFAC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8026BFB0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8026BFB4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 8026BFB8
  c->lr=0x8026BFC0u; f_80284A5C(c); // 8026BFBC
  goto L_8026C06C; // 8026BFC0
L_8026BFC4:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BFC4
  c->r[4]=c->r[27]|c->r[27]; // 8026BFC8
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BFCC
  c->r[5]=c->r[1]+0x00000008u; // 8026BFD0
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026BFD4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 8026BFD8
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026BFDC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026BFE0
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026BFE4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8026BFE8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 8026BFEC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8026BFF0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026BFF4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8026BFF8
  c->lr=0x8026C000u; f_80284A5C(c); // 8026BFFC
  goto L_8026C06C; // 8026C000
L_8026C004:;
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 8026C004
  if (crb(c,2)) { goto L_8026C020; } // 8026C008
  c->r[3]=c->r[27]|c->r[27]; // 8026C00C
  c->r[5]=c->r[25]|c->r[25]; // 8026C010
  c->r[4]=c->r[8]+0x0000001Cu; // 8026C014
  c->lr=0x8026C01Cu; f_80167FF8(c); // 8026C018
  goto L_8026C06C; // 8026C01C
L_8026C020:;
  c->r[3]=c->r[8]+0x0000001Cu; // 8026C020
  c->r[4]=c->r[1]+0x00000020u; // 8026C024
  c->lr=0x8026C02Cu; f_80167FC4(c); // 8026C028
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C02C
  c->r[3]=c->r[27]|c->r[27]; // 8026C030
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C034
  c->r[5]=c->r[25]|c->r[25]; // 8026C038
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C03C
  c->r[4]=c->r[1]+0x00000020u; // 8026C040
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 8026C044
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C048
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C04C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C050
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8026C054
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 8026C058
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8026C05C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 8026C060
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8026C064
  c->lr=0x8026C06Cu; f_80167FF8(c); // 8026C068
L_8026C06C:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 8026C06C
  if (crb(c,2)) { goto L_8026C094; } // 8026C070
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C074
  c->r[4]=c->r[29]|0x40000000u; // 8026C078
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C07C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C080
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[2]);} // 8026C084
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 8026C088
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 8026C08C
  goto L_8026C0C8; // 8026C090
L_8026C094:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C094
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 8026C098
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C09C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C0A0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 8026C0A4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C0A8
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C0AC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C0B0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8026C0B4
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[4]);} // 8026C0B8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8026C0BC
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[2]);} // 8026C0C0
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 8026C0C4
L_8026C0C8:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 8026C0C8
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 8026C0CC
  if (crb(c,2)) { goto L_8026C0D8; } // 8026C0D0
  c->r[3]=c->r[4]|0x10000000u; // 8026C0D4
L_8026C0D8:;
  c->r[11]=c->r[1]+0x00000070u; // 8026C0D8
  c->lr=0x8026C0E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026C0DC
  c->r[0]=R32(c->r[1]+0x00000074u); // 8026C0E0
  c->lr=c->r[0]; // 8026C0E4
  c->r[1]=c->r[1]+0x00000070u; // 8026C0E8
  return; // 8026C0EC
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C0F0(Ctx* __restrict c) {
  trace_call(0x8026C0F0u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C0F0
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C0F4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C0F8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8026C0FC
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C100
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8026C104
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C108
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[5]);} // 8026C10C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8026C110
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8026C114
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[4]);} // 8026C118
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 8026C11C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026C120
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 8026C124
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8026C128
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 8026C12C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C130
  return; // 8026C134
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C138(Ctx* __restrict c) {
  trace_call(0x8026C138u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C138
  c->r[0]=c->lr; // 8026C13C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C140
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C144
  c->r[4]=c->r[1]+0x00000008u; // 8026C148
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026C14C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C150
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C154
  c->r[31]=c->r[3]|c->r[3]; // 8026C158
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C15C
  c->lr=0x8026C164u; f_802847D4(c); // 8026C160
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C164
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C168
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8026C16C
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C170
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C174
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C178
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 8026C17C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 8026C180
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C184
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C188
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C18C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8026C190
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8026C194
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026C198
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C19C
  c->f[0]=-c->f[0]; // 8026C1A0
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 8026C1A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C1A8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 8026C1AC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 8026C1B0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C1B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C1B8
  c->f[1]=-c->f[1]; // 8026C1BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C1C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8026C1C4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8026C1C8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C1CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026C1D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026C1D4
  c->lr=c->r[0]; // 8026C1D8
  c->r[1]=c->r[1]+0x00000020u; // 8026C1DC
  return; // 8026C1E0
}

// fn_8026C1E4
void f_8026C1E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C1E4
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C1E8
  c->f[1]=-c->f[0]; // 8026C1EC
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C1F0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C1F4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8026C1F8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8026C1FC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8026C200
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026C204
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8026C208
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026C20C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026C210
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C214
  return; // 8026C218
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C21C(Ctx* __restrict c) {
  trace_call(0x8026C21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C21C
  c->r[0]=c->lr; // 8026C220
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C224
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026C228
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C22C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C230
  c->r[31]=c->r[4]|c->r[4]; // 8026C234
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C238
  c->r[4]=c->r[1]+0x00000008u; // 8026C23C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026C240
  c->r[30]=c->r[3]|c->r[3]; // 8026C244
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C248
  c->lr=0x8026C250u; f_802847D4(c); // 8026C24C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C250
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C254
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C258
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C25C
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[1]); // 8026C260
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[1]); // 8026C264
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C268
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[2]); // 8026C26C
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C270
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[2]); // 8026C274
  c->f[1]=-c->f[9]; // 8026C278
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[7]); // 8026C27C
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C280
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[6]);} // 8026C284
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[8]); // 8026C288
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8026C28C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 8026C290
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8026C294
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 8026C298
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8026C29C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 8026C2A0
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8026C2A4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026C2A8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 8026C2AC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 8026C2B0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C2B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026C2B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026C2BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026C2C0
  c->lr=c->r[0]; // 8026C2C4
  c->r[1]=c->r[1]+0x00000020u; // 8026C2C8
  return; // 8026C2CC
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C2D0(Ctx* __restrict c) {
  trace_call(0x8026C2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C2D0
  c->r[0]=c->lr; // 8026C2D4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C2D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026C2DC
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C2E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C2E4
  c->r[31]=c->r[4]|c->r[4]; // 8026C2E8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C2EC
  c->r[4]=c->r[1]+0x00000008u; // 8026C2F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026C2F4
  c->r[30]=c->r[3]|c->r[3]; // 8026C2F8
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C2FC
  c->lr=0x8026C304u; f_802847D4(c); // 8026C300
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C304
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C308
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8026C30C
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C310
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C314
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C318
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8026C31C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C320
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 8026C324
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 8026C328
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 8026C32C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C330
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C334
  c->f[1]=-c->f[1]; // 8026C338
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8026C33C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8026C340
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C344
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 8026C348
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026C34C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C350
  c->f[0]=-c->f[0]; // 8026C354
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 8026C358
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C35C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 8026C360
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 8026C364
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C368
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C36C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8026C370
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8026C374
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C378
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 8026C37C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026C384
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026C388
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026C38C
  c->lr=c->r[0]; // 8026C390
  c->r[1]=c->r[1]+0x00000020u; // 8026C394
  return; // 8026C398
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C39C(Ctx* __restrict c) {
  trace_call(0x8026C39Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026C39C
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C3A0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C3A4
  c->f[4]=-c->f[6]; // 8026C3A8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C3AC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 8026C3B0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C3B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8026C3B8
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C3BC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 8026C3C0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8026C3C4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8026C3C8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 8026C3CC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026C3D0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 8026C3D4
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8026C3D8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 8026C3DC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026C3E0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8026C3E4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 8026C3E8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C3EC
  return; // 8026C3F0
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C3F4(Ctx* __restrict c) {
  trace_call(0x8026C3F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C3F4
  c->r[0]=c->lr; // 8026C3F8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C3FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026C400
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C404
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C408
  c->r[31]=c->r[4]|c->r[4]; // 8026C40C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C410
  c->r[4]=c->r[1]+0x00000008u; // 8026C414
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026C418
  c->r[30]=c->r[3]|c->r[3]; // 8026C41C
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C420
  c->lr=0x8026C428u; f_802847D4(c); // 8026C424
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C428
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C42C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C430
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C434
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 8026C438
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[3]); // 8026C43C
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C440
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[0]); // 8026C444
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C448
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[3]); // 8026C44C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C450
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 8026C454
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 8026C458
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 8026C45C
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026C460
  c->f[5]=-c->f[5]; // 8026C464
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 8026C468
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[3]); // 8026C46C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 8026C470
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[2]); // 8026C474
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 8026C478
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 8026C47C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 8026C480
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C484
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 8026C488
  c->f[1]=-c->f[9]; // 8026C48C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026C490
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 8026C494
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 8026C498
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026C49C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C4A0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026C4A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026C4A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026C4AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026C4B0
  c->lr=c->r[0]; // 8026C4B4
  c->r[1]=c->r[1]+0x00000020u; // 8026C4B8
  return; // 8026C4BC
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C4C0(Ctx* __restrict c) {
  trace_call(0x8026C4C0u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C4C0
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026C4C4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C4C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8026C4CC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026C4D0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C4D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 8026C4D8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C4DC
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[1]); // 8026C4E0
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 8026C4E4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026C4E8
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 8026C4EC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026C4F0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C4F4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C4F8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C4FC
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 8026C500
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 8026C504
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 8026C508
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 8026C50C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 8026C510
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 8026C514
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 8026C518
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 8026C51C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 8026C520
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[0]); // 8026C524
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[5]);} // 8026C528
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 8026C52C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 8026C530
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8026C534
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C538
  return; // 8026C53C
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C540(Ctx* __restrict c) {
  trace_call(0x8026C540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C540
  c->r[0]=c->lr; // 8026C544
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C548
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C54C
  c->r[4]=c->r[1]+0x00000008u; // 8026C550
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026C554
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C558
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C55C
  c->r[31]=c->r[3]|c->r[3]; // 8026C560
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C564
  c->lr=0x8026C56Cu; f_802847D4(c); // 8026C568
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C56C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C570
  c->f[1]=-c->f[2]; // 8026C574
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C578
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C57C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8026C580
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026C584
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8026C588
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 8026C58C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026C590
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 8026C594
  {uint32_t ea=c->r[31]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C598
  {uint32_t ea=c->r[31]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026C59C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8026C5A0
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8026C5A4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C5A8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C5AC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 8026C5B0
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[7]); // 8026C5B4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C5B8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 8026C5BC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 8026C5C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C5C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026C5C8
  c->f[0]=-c->f[1]; // 8026C5CC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[5]); // 8026C5D0
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 8026C5D4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[10]); // 8026C5D8
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 8026C5DC
  c->f[2]=c->ps1[2]=S(c->f[9]+c->f[2]); // 8026C5E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C5E4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 8026C5E8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 8026C5EC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C5F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026C5F4
  c->f[0]=-c->f[1]; // 8026C5F8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 8026C5FC
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 8026C600
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 8026C604
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 8026C608
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 8026C60C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C610
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 8026C614
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8026C618
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C61C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C620
  c->f[0]=-c->f[1]; // 8026C624
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 8026C628
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 8026C62C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 8026C630
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 8026C634
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026C638
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C63C
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 8026C640
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 8026C644
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026C648
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C64C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026C650
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026C654
  c->lr=c->r[0]; // 8026C658
  c->r[1]=c->r[1]+0x00000020u; // 8026C65C
  return; // 8026C660
}

// fn_8026C664
void f_8026C664(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C664
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C668
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C66C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C670
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8026C674
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C678
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8026C67C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C680
  return; // 8026C684
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C688(Ctx* __restrict c) {
  trace_call(0x8026C688u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C688
  c->r[0]=c->lr; // 8026C68C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026C690
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8026C694
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8026C698
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8026C69C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8026C6A0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C6A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C6A8
  c->r[31]=c->r[4]|c->r[4]; // 8026C6AC
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C6B0
  c->r[4]=c->r[1]+0x00000008u; // 8026C6B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026C6B8
  c->r[30]=c->r[3]|c->r[3]; // 8026C6BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C6C0
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C6C4
  c->lr=0x8026C6CCu; f_802847D4(c); // 8026C6C8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C6CC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C6D0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C6D4
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[0]); // 8026C6D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026C6DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 8026C6E0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C6E4
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026C6E8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[6]); // 8026C6EC
  c->f[12]=-c->f[8]; // 8026C6F0
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C6F4
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[7]); // 8026C6F8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 8026C6FC
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[7]); // 8026C700
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 8026C704
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 8026C708
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026C70C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 8026C710
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026C714
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 8026C718
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026C71C
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 8026C720
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026C724
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 8026C728
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 8026C72C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 8026C730
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[13]); // 8026C734
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8026C738
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[5]); // 8026C73C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[6]); // 8026C740
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 8026C744
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[4]);} // 8026C748
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[30]); // 8026C74C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 8026C750
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 8026C754
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 8026C758
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 8026C75C
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 8026C760
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 8026C764
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 8026C768
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 8026C76C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 8026C770
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 8026C774
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 8026C778
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 8026C77C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 8026C780
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 8026C784
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 8026C788
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 8026C78C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 8026C790
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C794
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 8026C798
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 8026C79C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8026C7A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8026C7A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8026C7A8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8026C7AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8026C7B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026C7B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026C7B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8026C7BC
  c->lr=c->r[0]; // 8026C7C0
  c->r[1]=c->r[1]+0x00000040u; // 8026C7C4
  return; // 8026C7C8
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C7CC(Ctx* __restrict c) {
  trace_call(0x8026C7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C7CC
  c->r[0]=c->lr; // 8026C7D0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C7D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026C7D8
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C7DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C7E0
  c->r[31]=c->r[4]|c->r[4]; // 8026C7E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C7E8
  c->r[4]=c->r[1]+0x00000008u; // 8026C7EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026C7F0
  c->r[30]=c->r[3]|c->r[3]; // 8026C7F4
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C7F8
  c->lr=0x8026C800u; f_802847D4(c); // 8026C7FC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C800
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C804
  c->f[1]=-c->f[2]; // 8026C808
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C80C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C810
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8026C814
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026C818
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8026C81C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 8026C820
  {uint32_t ea=c->r[30]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026C824
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 8026C828
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026C82C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026C830
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 8026C834
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 8026C838
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C83C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C840
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 8026C844
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8026C848
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C84C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[5]);} // 8026C850
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C854
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C858
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C85C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026C860
  c->f[1]=-c->f[3]; // 8026C864
  {uint32_t ea=c->r[30]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026C868
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[6]); // 8026C86C
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 8026C870
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 8026C874
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[6]); // 8026C878
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[5]); // 8026C87C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[7]); // 8026C880
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8026C884
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[5]);} // 8026C888
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 8026C88C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 8026C890
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C894
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026C898
  c->f[0]=-c->f[1]; // 8026C89C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 8026C8A0
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 8026C8A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 8026C8A8
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 8026C8AC
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 8026C8B0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C8B4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 8026C8B8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8026C8BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C8C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C8C4
  c->f[0]=-c->f[1]; // 8026C8C8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 8026C8CC
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 8026C8D0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 8026C8D4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 8026C8D8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 8026C8DC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C8E0
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 8026C8E4
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 8026C8E8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 8026C8EC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C8F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026C8F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026C8F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026C8FC
  c->lr=c->r[0]; // 8026C900
  c->r[1]=c->r[1]+0x00000020u; // 8026C904
  return; // 8026C908
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C90C(Ctx* __restrict c) {
  trace_call(0x8026C90Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C90C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C910
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C914
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C918
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026C91C
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026C920
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 8026C924
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C928
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[7]); // 8026C92C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026C930
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C934
  c->f[6]=c->ps1[6]=S(c->f[4]-c->f[7]); // 8026C938
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8026C93C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026C940
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 8026C944
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026C948
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[6]); // 8026C94C
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[11]); // 8026C950
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 8026C954
  {uint32_t ea=c->r[3]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026C958
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[2]); // 8026C95C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026C960
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C964
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[11]); // 8026C968
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[11]); // 8026C96C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[10]);} // 8026C970
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 8026C974
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 8026C978
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 8026C97C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8026C980
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 8026C984
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 8026C988
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 8026C98C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8026C990
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8026C994
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026C998
  return; // 8026C99C
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_8026C9A0(Ctx* __restrict c) {
  trace_call(0x8026C9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026C9A0
  c->r[0]=c->lr; // 8026C9A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8026C9A8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8026C9AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8026C9B0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8026C9B4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8026C9B8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 8026C9BC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 8026C9C0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C9C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026C9C8
  c->r[31]=c->r[4]|c->r[4]; // 8026C9CC
  {uint32_t ea=c->r[2]+0xFFFF9D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C9D0
  c->r[4]=c->r[1]+0x00000008u; // 8026C9D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026C9D8
  c->r[30]=c->r[3]|c->r[3]; // 8026C9DC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8026C9E0
  c->r[3]=c->r[1]+0x0000000Cu; // 8026C9E4
  c->lr=0x8026C9ECu; f_802847D4(c); // 8026C9E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026C9EC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026C9F0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026C9F4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026C9F8
  c->f[9]=c->ps1[9]=S(c->f[5]*c->f[2]); // 8026C9FC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026CA00
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8026CA04
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026CA08
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[2]); // 8026CA0C
  {uint32_t ea=c->r[2]+0xFFFF9D94u; c->f[7]=c->ps1[7]=RF32(ea);} // 8026CA10
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[6]); // 8026CA14
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8026CA18
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026CA1C
  c->f[12]=-c->f[9]; // 8026CA20
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 8026CA24
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[7]); // 8026CA28
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 8026CA2C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026CA30
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 8026CA34
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 8026CA38
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 8026CA3C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[7]); // 8026CA40
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 8026CA44
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 8026CA48
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 8026CA4C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 8026CA50
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8026CA54
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 8026CA58
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 8026CA5C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8026CA60
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 8026CA64
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8026CA68
  c->f[4]=c->ps1[4]=S(c->f[30]+c->f[13]); // 8026CA6C
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[5]); // 8026CA70
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 8026CA74
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[4]);} // 8026CA78
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[29]); // 8026CA7C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[31]); // 8026CA80
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[13]);} // 8026CA84
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 8026CA88
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 8026CA8C
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 8026CA90
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 8026CA94
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 8026CA98
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 8026CA9C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 8026CAA0
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 8026CAA4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 8026CAA8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 8026CAAC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 8026CAB0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 8026CAB4
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 8026CAB8
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 8026CABC
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 8026CAC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8026CAC4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 8026CAC8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 8026CACC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8026CAD0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8026CAD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8026CAD8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8026CADC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8026CAE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 8026CAE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 8026CAE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026CAEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026CAF0
  c->r[0]=R32(c->r[1]+0x00000054u); // 8026CAF4
  c->lr=c->r[0]; // 8026CAF8
  c->r[1]=c->r[1]+0x00000050u; // 8026CAFC
  return; // 8026CB00
}

// CalcTexMtx_3dsmax__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_8026CB04(Ctx* __restrict c) {
  trace_call(0x8026CB04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026CB04
  c->r[0]=c->lr; // 8026CB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026CB0C
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 8026CB10
  cmpu(c,0,c->r[0],0x00000007u); // 8026CB14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026CB18
  c->r[31]=c->r[3]|c->r[3]; // 8026CB1C
  if (!crb(c,2)) { goto L_8026CB2C; } // 8026CB20
  c->r[3]=0u+0x00000000u; // 8026CB24
  goto L_8026CB8C; // 8026CB28
L_8026CB2C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026CB2C
  if (crb(c,2)) { goto L_8026CB54; } // 8026CB30
  c->r[6]=0u+0x80310000u; // 8026CB34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026CB38
  c->r[6]=c->r[6]+0xFFFF8678u; // 8026CB3C
  c->r[4]=c->r[5]|c->r[5]; // 8026CB40
  c->r[12]=R32(c->r[6]+c->r[0]); // 8026CB44
  c->ctr=c->r[12]; // 8026CB48
  if (true) { c->lr=0x8026CB50u; dispatch(c,c->ctr); } // 8026CB4C
  goto L_8026CB70; // 8026CB50
L_8026CB54:;
  c->r[6]=0u+0x80310000u; // 8026CB54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026CB58
  c->r[6]=c->r[6]+0xFFFF8694u; // 8026CB5C
  c->r[4]=c->r[5]|c->r[5]; // 8026CB60
  c->r[12]=R32(c->r[6]+c->r[0]); // 8026CB64
  c->ctr=c->r[12]; // 8026CB68
  if (true) { c->lr=0x8026CB70u; dispatch(c,c->ctr); } // 8026CB6C
L_8026CB70:;
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026CB70
  c->r[3]=0u+0x00000001u; // 8026CB74
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026CB78
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 8026CB7C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 8026CB80
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 8026CB84
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 8026CB88
L_8026CB8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026CB8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026CB90
  c->lr=c->r[0]; // 8026CB94
  c->r[1]=c->r[1]+0x00000010u; // 8026CB98
  return; // 8026CB9C
}

// CalcWorldMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34PUl
void f_8026CBA0(Ctx* __restrict c) {
  trace_call(0x8026CBA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026CBA0
  c->r[0]=c->lr; // 8026CBA4
  cmps(c,0,(int32_t)c->r[5],0); // 8026CBA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026CBAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026CBB0
  c->r[31]=c->r[3]|c->r[3]; // 8026CBB4
  if (crb(c,2)) { goto L_8026CBD4; } // 8026CBB8
  c->r[6]=R32(c->r[5]+0x00000000u); // 8026CBBC
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 8026CBC0
  if (crb(c,2)) { goto L_8026CBD4; } // 8026CBC4
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 8026CBC8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CBCC
  goto L_8026CC34; // 8026CBD0
L_8026CBD4:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026CBD4
  if (crb(c,2)) { goto L_8026CC0C; } // 8026CBD8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CBDC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8026CBE0
  if (crb(c,2)) { goto L_8026CBF8; } // 8026CBE4
  c->r[3]=c->r[4]|c->r[4]; // 8026CBE8
  c->r[4]=c->r[31]+0x0000003Cu; // 8026CBEC
  c->lr=0x8026CBF4u; f_80167FC4(c); // 8026CBF0
  goto L_8026CC18; // 8026CBF4
L_8026CBF8:;
  c->r[3]=c->r[4]|c->r[4]; // 8026CBF8
  c->r[4]=c->r[31]+0x0000000Cu; // 8026CBFC
  c->r[5]=c->r[31]+0x0000003Cu; // 8026CC00
  c->lr=0x8026CC08u; f_80167FF8(c); // 8026CC04
  goto L_8026CC18; // 8026CC08
L_8026CC0C:;
  c->r[3]=c->r[3]+0x0000000Cu; // 8026CC0C
  c->r[4]=c->r[31]+0x0000003Cu; // 8026CC10
  c->lr=0x8026CC18u; f_80167FC4(c); // 8026CC14
L_8026CC18:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 8026CC18
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 8026CC1C
  if (crb(c,2)) { goto L_8026CC34; } // 8026CC20
  c->r[3]=c->r[31]+0x000000B4u; // 8026CC24
  c->r[4]=c->r[31]+0x0000009Cu; // 8026CC28
  c->r[5]=c->r[31]+0x0000003Cu; // 8026CC2C
  c->lr=0x8026CC34u; f_80285048(c); // 8026CC30
L_8026CC34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026CC34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026CC38
  c->lr=c->r[0]; // 8026CC3C
  c->r[1]=c->r[1]+0x00000010u; // 8026CC40
  return; // 8026CC44
}

// CalcViewMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34
void f_8026CC48(Ctx* __restrict c) {
  trace_call(0x8026CC48u);
  c->r[5]=c->r[3]|c->r[3]; // 8026CC48
  c->r[3]=c->r[4]|c->r[4]; // 8026CC4C
  c->r[4]=c->r[5]+0x0000003Cu; // 8026CC50
  c->r[5]=c->r[5]+0x0000006Cu; // 8026CC54
  f_80167FF8(c); return; // 8026CC58
}

// __ct__Q34nw4r3g3d6ScnObjFP12MEMAllocator
void f_8026CC5C(Ctx* __restrict c) {
  trace_call(0x8026CC5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026CC5C
  c->r[0]=c->lr; // 8026CC60
  c->r[6]=0u+0x80340000u; // 8026CC64
  c->r[7]=0u+0x00000000u; // 8026CC68
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026CC6C
  c->r[5]=0u+0x00000080u; // 8026CC70
  c->r[6]=c->r[6]+0x00004D50u; // 8026CC74
  c->r[0]=c->r[7]|0x80000000u; // 8026CC78
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8026CC7C
  c->r[31]=c->r[3]|c->r[3]; // 8026CC80
  W32(c->r[3]+0x00000004u,c->r[7]); // 8026CC84
  W32(c->r[3]+0x00000008u,c->r[4]); // 8026CC88
  W32(c->r[3]+0x00000000u,c->r[6]); // 8026CC8C
  W8(c->r[3]+0x000000D0u,c->r[5]); // 8026CC90
  W8(c->r[3]+0x000000D1u,c->r[5]); // 8026CC94
  W8(c->r[3]+0x000000D2u,c->r[7]); // 8026CC98
  W8(c->r[3]+0x000000D3u,c->r[7]); // 8026CC9C
  W32(c->r[3]+0x000000D4u,c->r[7]); // 8026CCA0
  W8(c->r[3]+0x000000D8u,c->r[7]); // 8026CCA4
  W8(c->r[3]+0x000000D9u,c->r[7]); // 8026CCA8
  W16(c->r[3]+0x000000DAu,c->r[7]); // 8026CCAC
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CCB0
  c->r[3]=c->r[3]+0x0000000Cu; // 8026CCB4
  c->lr=0x8026CCBCu; f_80167F98(c); // 8026CCB8
  c->r[3]=c->r[31]+0x0000003Cu; // 8026CCBC
  c->lr=0x8026CCC4u; f_80167F98(c); // 8026CCC0
  c->r[3]=c->r[31]+0x0000006Cu; // 8026CCC4
  c->lr=0x8026CCCCu; f_80167F98(c); // 8026CCC8
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026CCCC
  c->r[3]=c->r[31]|c->r[31]; // 8026CCD0
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 8026CCD4
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 8026CCD8
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 8026CCDC
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 8026CCE0
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 8026CCE4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8026CCE8
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8026CCEC
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 8026CCF0
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 8026CCF4
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 8026CCF8
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8026CCFC
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8026CD00
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8026CD04
  c->r[0]=R32(c->r[1]+0x00000044u); // 8026CD08
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026CD0C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8026CD10
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8026CD14
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8026CD18
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8026CD1C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8026CD20
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8026CD24
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8026CD28
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8026CD2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8026CD30
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8026CD34
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8026CD38
  c->lr=c->r[0]; // 8026CD3C
  c->r[1]=c->r[1]+0x00000040u; // 8026CD40
  return; // 8026CD44
}

// __dt__Q34nw4r3g3d6ScnObjFv
void f_8026CD48(Ctx* __restrict c) {
  trace_call(0x8026CD48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026CD48
  c->r[0]=c->lr; // 8026CD4C
  cmps(c,0,(int32_t)c->r[3],0); // 8026CD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026CD54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026CD58
  c->r[31]=c->r[3]|c->r[3]; // 8026CD5C
  if (crb(c,2)) { goto L_8026CDB4; } // 8026CD60
  c->r[5]=R32(c->r[3]+0x000000D4u); // 8026CD64
  c->r[4]=0u+0x80340000u; // 8026CD68
  c->r[4]=c->r[4]+0x00004D50u; // 8026CD6C
  cmps(c,1,(int32_t)c->r[5],0); // 8026CD70
  W32(c->r[3]+0x00000000u,c->r[4]); // 8026CD74
  if (crb(c,6)) { goto L_8026CDA8; } // 8026CD78
  c->r[0]=R8(c->r[3]+0x000000D9u); // 8026CD7C
  cmps(c,0,(int32_t)c->r[0],1); // 8026CD80
  if (crb(c,2)) { goto L_8026CD8C; } // 8026CD84
  goto L_8026CDA8; // 8026CD88
L_8026CD8C:;
  if (crb(c,6)) { goto L_8026CDA8; } // 8026CD8C
  c->r[12]=R32(c->r[5]+0x00000000u); // 8026CD90
  c->r[3]=c->r[5]|c->r[5]; // 8026CD94
  c->r[4]=0u+0x00000001u; // 8026CD98
  c->r[12]=R32(c->r[12]+0x00000008u); // 8026CD9C
  c->ctr=c->r[12]; // 8026CDA0
  if (true) { c->lr=0x8026CDA8u; dispatch(c,c->ctr); } // 8026CDA4
L_8026CDA8:;
  c->r[3]=c->r[31]|c->r[31]; // 8026CDA8
  c->r[4]=0u+0x00000000u; // 8026CDAC
  c->lr=0x8026CDB4u; f_8025F848(c); // 8026CDB0
L_8026CDB4:;
  c->r[3]=c->r[31]|c->r[31]; // 8026CDB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026CDB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026CDBC
  c->lr=c->r[0]; // 8026CDC0
  c->r[1]=c->r[1]+0x00000010u; // 8026CDC4
  return; // 8026CDC8
}

// SetScnObjOption__Q34nw4r3g3d6ScnObjFUlUl
void f_8026CDCC(Ctx* __restrict c) {
  trace_call(0x8026CDCCu);
  cmpu(c,0,c->r[4],0x00000009u); // 8026CDCC
  if (crb(c,1)) { goto L_8026CF54; } // 8026CDD0
  c->r[6]=0u+0x80340000u; // 8026CDD4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8026CDD8
  c->r[6]=c->r[6]+0x00004CC0u; // 8026CDDC
  c->r[6]=R32(c->r[6]+c->r[0]); // 8026CDE0
  c->ctr=c->r[6]; // 8026CDE4
  if (true) { switch (c->ctr) { case 0x8026CDECu: goto L_8026CDEC; case 0x8026CE14u: goto L_8026CE14; case 0x8026CE3Cu: goto L_8026CE3C; case 0x8026CE64u: goto L_8026CE64; case 0x8026CE8Cu: goto L_8026CE8C; case 0x8026CEB4u: goto L_8026CEB4; case 0x8026CEDCu: goto L_8026CEDC; case 0x8026CF04u: goto L_8026CF04; case 0x8026CF2Cu: goto L_8026CF2C; case 0x8026CF54u: goto L_8026CF54; default: break; } dispatch(c,c->ctr); return; } // 8026CDE8
L_8026CDEC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CDEC
  if (crb(c,2)) { goto L_8026CE04; } // 8026CDF0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CDF4
  c->r[0]=c->r[0]|0x00000010u; // 8026CDF8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CDFC
  goto L_8026CF5C; // 8026CE00
L_8026CE04:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE04
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8026CE08
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE0C
  goto L_8026CF5C; // 8026CE10
L_8026CE14:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CE14
  if (crb(c,2)) { goto L_8026CE2C; } // 8026CE18
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE1C
  c->r[0]=c->r[0]|0x00000001u; // 8026CE20
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE24
  goto L_8026CF5C; // 8026CE28
L_8026CE2C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8026CE30
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE34
  goto L_8026CF5C; // 8026CE38
L_8026CE3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CE3C
  if (crb(c,2)) { goto L_8026CE54; } // 8026CE40
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE44
  c->r[0]=c->r[0]|0x00000002u; // 8026CE48
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE4C
  goto L_8026CF5C; // 8026CE50
L_8026CE54:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE54
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8026CE58
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE5C
  goto L_8026CF5C; // 8026CE60
L_8026CE64:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CE64
  if (crb(c,2)) { goto L_8026CE7C; } // 8026CE68
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE6C
  c->r[0]=c->r[0]|0x00000004u; // 8026CE70
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE74
  goto L_8026CF5C; // 8026CE78
L_8026CE7C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8026CE80
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE84
  goto L_8026CF5C; // 8026CE88
L_8026CE8C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CE8C
  if (crb(c,2)) { goto L_8026CEA4; } // 8026CE90
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CE94
  c->r[0]=c->r[0]|0x00000008u; // 8026CE98
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CE9C
  goto L_8026CF5C; // 8026CEA0
L_8026CEA4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CEA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8026CEA8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CEAC
  goto L_8026CF5C; // 8026CEB0
L_8026CEB4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CEB4
  if (crb(c,2)) { goto L_8026CECC; } // 8026CEB8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CEBC
  c->r[0]=c->r[0]|0x00000020u; // 8026CEC0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CEC4
  goto L_8026CF5C; // 8026CEC8
L_8026CECC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CECC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 8026CED0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CED4
  goto L_8026CF5C; // 8026CED8
L_8026CEDC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CEDC
  if (crb(c,2)) { goto L_8026CEF4; } // 8026CEE0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CEE4
  c->r[0]=c->r[0]|0x00000040u; // 8026CEE8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CEEC
  goto L_8026CF5C; // 8026CEF0
L_8026CEF4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CEF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 8026CEF8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CEFC
  goto L_8026CF5C; // 8026CF00
L_8026CF04:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CF04
  if (crb(c,2)) { goto L_8026CF1C; } // 8026CF08
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CF0C
  c->r[0]=c->r[0]|0x00000080u; // 8026CF10
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CF14
  goto L_8026CF5C; // 8026CF18
L_8026CF1C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CF1C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 8026CF20
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CF24
  goto L_8026CF5C; // 8026CF28
L_8026CF2C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026CF2C
  if (crb(c,2)) { goto L_8026CF44; } // 8026CF30
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CF34
  c->r[0]=c->r[0]|0x10000000u; // 8026CF38
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CF3C
  goto L_8026CF5C; // 8026CF40
L_8026CF44:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CF44
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 8026CF48
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026CF4C
  goto L_8026CF5C; // 8026CF50
L_8026CF54:;
  c->r[3]=0u+0x00000000u; // 8026CF54
  return; // 8026CF58
L_8026CF5C:;
  c->r[3]=0u+0x00000001u; // 8026CF5C
  return; // 8026CF60
}

// GetScnObjOption__Q34nw4r3g3d6ScnObjCFUlPUl
void f_8026CF64(Ctx* __restrict c) {
  trace_call(0x8026CF64u);
  cmps(c,0,(int32_t)c->r[5],0); // 8026CF64
  if (!crb(c,2)) { goto L_8026CF74; } // 8026CF68
  c->r[3]=0u+0x00000000u; // 8026CF6C
  return; // 8026CF70
L_8026CF74:;
  cmpu(c,0,c->r[4],0x00000009u); // 8026CF74
  if (crb(c,1)) { goto L_8026D024; } // 8026CF78
  c->r[6]=0u+0x80340000u; // 8026CF7C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8026CF80
  c->r[6]=c->r[6]+0x00004CE8u; // 8026CF84
  c->r[6]=R32(c->r[6]+c->r[0]); // 8026CF88
  c->ctr=c->r[6]; // 8026CF8C
  if (true) { switch (c->ctr) { case 0x8026CF94u: goto L_8026CF94; case 0x8026CFA4u: goto L_8026CFA4; case 0x8026CFB4u: goto L_8026CFB4; case 0x8026CFC4u: goto L_8026CFC4; case 0x8026CFD4u: goto L_8026CFD4; case 0x8026CFE4u: goto L_8026CFE4; case 0x8026CFF4u: goto L_8026CFF4; case 0x8026D004u: goto L_8026D004; case 0x8026D014u: goto L_8026D014; case 0x8026D024u: goto L_8026D024; default: break; } dispatch(c,c->ctr); return; } // 8026CF90
L_8026CF94:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CF94
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 8026CF98
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CF9C
  goto L_8026D02C; // 8026CFA0
L_8026CFA4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CFA4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8026CFA8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CFAC
  goto L_8026D02C; // 8026CFB0
L_8026CFB4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CFB4
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8026CFB8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CFBC
  goto L_8026D02C; // 8026CFC0
L_8026CFC4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CFC4
  c->r[0]=rotl(c->r[0],30)&0x00000001u; // 8026CFC8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CFCC
  goto L_8026D02C; // 8026CFD0
L_8026CFD4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CFD4
  c->r[0]=rotl(c->r[0],29)&0x00000001u; // 8026CFD8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CFDC
  goto L_8026D02C; // 8026CFE0
L_8026CFE4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CFE4
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8026CFE8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CFEC
  goto L_8026D02C; // 8026CFF0
L_8026CFF4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026CFF4
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 8026CFF8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026CFFC
  goto L_8026D02C; // 8026D000
L_8026D004:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D004
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 8026D008
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026D00C
  goto L_8026D02C; // 8026D010
L_8026D014:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D014
  c->r[0]=rotl(c->r[0],4)&0x00000001u; // 8026D018
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026D01C
  goto L_8026D02C; // 8026D020
L_8026D024:;
  c->r[3]=0u+0x00000000u; // 8026D024
  return; // 8026D028
L_8026D02C:;
  c->r[3]=0u+0x00000001u; // 8026D02C
  return; // 8026D030
}

// SetMtx__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj13ScnObjMtxTypePCQ34nw4r4math5MTX34
void f_8026D034(Ctx* __restrict c) {
  trace_call(0x8026D034u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D034
  c->r[0]=c->lr; // 8026D038
  cmpu(c,0,c->r[4],0x00000003u); // 8026D03C
  c->r[6]=c->r[3]|c->r[3]; // 8026D040
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026D044
  if (!crb(c,0)) { goto L_8026D0AC; } // 8026D048
  cmps(c,0,(int32_t)c->r[5],0); // 8026D04C
  if (crb(c,2)) { goto L_8026D080; } // 8026D050
  cmps(c,0,(int32_t)c->r[4],0); // 8026D054
  if (!crb(c,2)) { goto L_8026D068; } // 8026D058
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D05C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8026D060
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026D064
L_8026D068:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 8026D068
  c->r[3]=c->r[5]|c->r[5]; // 8026D06C
  c->r[4]=c->r[6]+c->r[0]; // 8026D070
  c->r[4]=c->r[4]+0x0000000Cu; // 8026D074
  c->lr=0x8026D07Cu; f_80167FC4(c); // 8026D078
  goto L_8026D0A4; // 8026D07C
L_8026D080:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026D080
  if (!crb(c,2)) { goto L_8026D094; } // 8026D084
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D088
  c->r[0]=c->r[0]|0x80000000u; // 8026D08C
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026D090
L_8026D094:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 8026D094
  c->r[3]=c->r[3]+c->r[0]; // 8026D098
  c->r[3]=c->r[3]+0x0000000Cu; // 8026D09C
  c->lr=0x8026D0A4u; f_80167F98(c); // 8026D0A0
L_8026D0A4:;
  c->r[3]=0u+0x00000001u; // 8026D0A4
  goto L_8026D0B0; // 8026D0A8
L_8026D0AC:;
  c->r[3]=0u+0x00000000u; // 8026D0AC
L_8026D0B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026D0B0
  c->lr=c->r[0]; // 8026D0B4
  c->r[1]=c->r[1]+0x00000010u; // 8026D0B8
  return; // 8026D0BC
}

// GetMtx__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj13ScnObjMtxTypePQ34nw4r4math5MTX34
void f_8026D0C0(Ctx* __restrict c) {
  trace_call(0x8026D0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D0C0
  c->r[0]=c->lr; // 8026D0C4
  cmps(c,0,(int32_t)c->r[5],0); // 8026D0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026D0CC
  if (crb(c,2)) { goto L_8026D0F8; } // 8026D0D0
  cmpu(c,0,c->r[4],0x00000003u); // 8026D0D4
  if (!crb(c,0)) { goto L_8026D0F8; } // 8026D0D8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 8026D0DC
  c->r[4]=c->r[5]|c->r[5]; // 8026D0E0
  c->r[3]=c->r[3]+c->r[0]; // 8026D0E4
  c->r[3]=c->r[3]+0x0000000Cu; // 8026D0E8
  c->lr=0x8026D0F0u; f_80167FC4(c); // 8026D0EC
  c->r[3]=0u+0x00000001u; // 8026D0F0
  goto L_8026D0FC; // 8026D0F4
L_8026D0F8:;
  c->r[3]=0u+0x00000000u; // 8026D0F8
L_8026D0FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026D0FC
  c->lr=c->r[0]; // 8026D100
  c->r[1]=c->r[1]+0x00000010u; // 8026D104
  return; // 8026D108
}

// fn_8026D10C
void f_8026D10C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026D10C
  c->f[1]=-c->f[0]; // 8026D110
  return; // 8026D114
}

// fn_8026D118
void f_8026D118(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026D118
  return; // 8026D11C
}

// fn_8026D120
void f_8026D120(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 8026D120
  if (crb(c,2)) { goto L_8026D188; } // 8026D124
  cmps(c,0,(int32_t)c->r[4],2); // 8026D128
  if (!crb(c,0)) { goto L_8026D180; } // 8026D12C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8026D130
  c->r[6]=R32(c->r[5]+0x00000000u); // 8026D134
  c->r[0]=R32(c->r[5]+0x00000004u); // 8026D138
  c->r[4]=0u+0x00000009u; // 8026D13C
  c->r[7]=c->r[3]+c->r[7]; // 8026D140
  W32(c->r[7]+0x0000009Cu,c->r[6]); // 8026D144
  W32(c->r[7]+0x000000A0u,c->r[0]); // 8026D148
  c->r[0]=R32(c->r[5]+0x00000008u); // 8026D14C
  W32(c->r[7]+0x000000A4u,c->r[0]); // 8026D150
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 8026D154
  c->r[0]=R32(c->r[5]+0x00000010u); // 8026D158
  W32(c->r[7]+0x000000A8u,c->r[6]); // 8026D15C
  W32(c->r[7]+0x000000ACu,c->r[0]); // 8026D160
  c->r[0]=R32(c->r[5]+0x00000014u); // 8026D164
  c->r[5]=0u+0x00000001u; // 8026D168
  W32(c->r[7]+0x000000B0u,c->r[0]); // 8026D16C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D170
  c->r[12]=R32(c->r[12]+0x00000020u); // 8026D174
  c->ctr=c->r[12]; // 8026D178
  if (true) { dispatch(c,c->ctr); return; } // 8026D17C
L_8026D180:;
  c->r[3]=0u+0x00000000u; // 8026D180
  return; // 8026D184
L_8026D188:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D188
  c->r[4]=0u+0x00000009u; // 8026D18C
  c->r[5]=0u+0x00000000u; // 8026D190
  c->r[12]=R32(c->r[12]+0x00000020u); // 8026D194
  c->ctr=c->r[12]; // 8026D198
  if (true) { dispatch(c,c->ctr); return; } // 8026D19C
}

// fn_8026D1A0
void f_8026D1A0(Ctx* __restrict c) {
  return; // 8026D1A0
}

// GetBoundingVolume__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj24ScnObjBoundingVolumeTypePQ34nw4r4math4AABB
void f_8026D1A4(Ctx* __restrict c) {
  trace_call(0x8026D1A4u);
  cmps(c,0,(int32_t)c->r[5],0); // 8026D1A4
  if (crb(c,2)) { goto L_8026D1FC; } // 8026D1A8
  cmps(c,0,(int32_t)c->r[4],2); // 8026D1AC
  if (!crb(c,0)) { goto L_8026D1F4; } // 8026D1B0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8026D1B4
  c->r[10]=c->r[3]+c->r[0]; // 8026D1B8
  c->r[3]=0u+0x00000001u; // 8026D1BC
  c->r[9]=R32(c->r[10]+0x0000009Cu); // 8026D1C0
  c->r[8]=R32(c->r[10]+0x000000A0u); // 8026D1C4
  c->r[7]=R32(c->r[10]+0x000000A4u); // 8026D1C8
  c->r[6]=R32(c->r[10]+0x000000A8u); // 8026D1CC
  c->r[4]=R32(c->r[10]+0x000000ACu); // 8026D1D0
  c->r[0]=R32(c->r[10]+0x000000B0u); // 8026D1D4
  W32(c->r[5]+0x00000000u,c->r[9]); // 8026D1D8
  W32(c->r[5]+0x00000004u,c->r[8]); // 8026D1DC
  W32(c->r[5]+0x00000008u,c->r[7]); // 8026D1E0
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 8026D1E4
  W32(c->r[5]+0x00000010u,c->r[4]); // 8026D1E8
  W32(c->r[5]+0x00000014u,c->r[0]); // 8026D1EC
  return; // 8026D1F0
L_8026D1F4:;
  c->r[3]=0u+0x00000000u; // 8026D1F4
  return; // 8026D1F8
L_8026D1FC:;
  c->r[3]=0u+0x00000000u; // 8026D1FC
  return; // 8026D200
}

// ForEach__Q34nw4r3g3d7ScnLeafFPFPQ34nw4r3g3d6ScnObjPv_Q44nw4r3g3d6ScnObj13ForEachResultPvb
void f_8026D204(Ctx* __restrict c) {
  trace_call(0x8026D204u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D204
  c->r[0]=c->lr; // 8026D208
  c->r[12]=c->r[4]|c->r[4]; // 8026D20C
  c->r[4]=c->r[5]|c->r[5]; // 8026D210
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026D214
  c->ctr=c->r[12]; // 8026D218
  if (true) { c->lr=0x8026D220u; dispatch(c,c->ctr); } // 8026D21C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8026D220
  c->r[0]=cntlz(c->r[0]); // 8026D224
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026D228
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026D22C
  c->lr=c->r[0]; // 8026D230
  c->r[1]=c->r[1]+0x00000010u; // 8026D234
  return; // 8026D238
}

// SetScnObjOption__Q34nw4r3g3d7ScnLeafFUlUl
void f_8026D23C(Ctx* __restrict c) {
  trace_call(0x8026D23Cu);
  c->r[6]=0u+0x00010000u; // 8026D23C
  c->r[0]=c->r[6]+0x00000001u; // 8026D240
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8026D244
  if (crb(c,2)) { goto L_8026D250; } // 8026D248
  goto L_8026D278; // 8026D24C
L_8026D250:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026D250
  if (crb(c,2)) { goto L_8026D268; } // 8026D254
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D258
  c->r[0]=c->r[0]|0x00000060u; // 8026D25C
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026D260
  goto L_8026D27C; // 8026D264
L_8026D268:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D268
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF9Fu; // 8026D26C
  W32(c->r[3]+0x000000CCu,c->r[0]); // 8026D270
  goto L_8026D27C; // 8026D274
L_8026D278:;
  f_8026CDCC(c); return; // 8026D278
L_8026D27C:;
  c->r[3]=0u+0x00000001u; // 8026D27C
  return; // 8026D280
}

// GetScnObjOption__Q34nw4r3g3d7ScnLeafCFUlPUl
void f_8026D284(Ctx* __restrict c) {
  trace_call(0x8026D284u);
  cmps(c,0,(int32_t)c->r[5],0); // 8026D284
  if (!crb(c,2)) { goto L_8026D294; } // 8026D288
  c->r[3]=0u+0x00000000u; // 8026D28C
  return; // 8026D290
L_8026D294:;
  c->r[6]=0u+0x00010000u; // 8026D294
  c->r[0]=c->r[6]+0x00000001u; // 8026D298
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8026D29C
  if (crb(c,2)) { goto L_8026D2A8; } // 8026D2A0
  goto L_8026D2C4; // 8026D2A4
L_8026D2A8:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D2A8
  c->r[3]=rotl(c->r[0],0)&0x00000060u; // 8026D2AC
  c->r[0]=0u-c->r[3]; // 8026D2B0
  c->r[0]=c->r[0]|c->r[3]; // 8026D2B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8026D2B8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026D2BC
  goto L_8026D2C8; // 8026D2C0
L_8026D2C4:;
  f_8026CF64(c); return; // 8026D2C4
L_8026D2C8:;
  c->r[3]=0u+0x00000001u; // 8026D2C8
  return; // 8026D2CC
}

// CalcWorldMtx__Q34nw4r3g3d7ScnLeafFPCQ34nw4r4math5MTX34PUl
void f_8026D2D0(Ctx* __restrict c) {
  trace_call(0x8026D2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D2D0
  c->r[0]=c->lr; // 8026D2D4
  cmps(c,0,(int32_t)c->r[5],0); // 8026D2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026D2DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026D2E0
  c->r[31]=c->r[3]|c->r[3]; // 8026D2E4
  if (crb(c,2)) { goto L_8026D304; } // 8026D2E8
  c->r[6]=R32(c->r[5]+0x00000000u); // 8026D2EC
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 8026D2F0
  if (crb(c,2)) { goto L_8026D304; } // 8026D2F4
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 8026D2F8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026D2FC
  goto L_8026D3B0; // 8026D300
L_8026D304:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026D304
  if (crb(c,2)) { goto L_8026D324; } // 8026D308
  c->r[6]=R32(c->r[5]+0x00000000u); // 8026D30C
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 8026D310
  if (crb(c,2)) { goto L_8026D324; } // 8026D314
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 8026D318
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026D31C
  goto L_8026D384; // 8026D320
L_8026D324:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026D324
  if (crb(c,2)) { goto L_8026D35C; } // 8026D328
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D32C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8026D330
  if (crb(c,2)) { goto L_8026D348; } // 8026D334
  c->r[3]=c->r[4]|c->r[4]; // 8026D338
  c->r[4]=c->r[31]+0x0000003Cu; // 8026D33C
  c->lr=0x8026D344u; f_80167FC4(c); // 8026D340
  goto L_8026D368; // 8026D344
L_8026D348:;
  c->r[3]=c->r[4]|c->r[4]; // 8026D348
  c->r[4]=c->r[31]+0x0000000Cu; // 8026D34C
  c->r[5]=c->r[31]+0x0000003Cu; // 8026D350
  c->lr=0x8026D358u; f_80167FF8(c); // 8026D354
  goto L_8026D368; // 8026D358
L_8026D35C:;
  c->r[3]=c->r[3]+0x0000000Cu; // 8026D35C
  c->r[4]=c->r[31]+0x0000003Cu; // 8026D360
  c->lr=0x8026D368u; f_80167FC4(c); // 8026D364
L_8026D368:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 8026D368
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 8026D36C
  if (crb(c,2)) { goto L_8026D384; } // 8026D370
  c->r[3]=c->r[31]+0x000000B4u; // 8026D374
  c->r[4]=c->r[31]+0x0000009Cu; // 8026D378
  c->r[5]=c->r[31]+0x0000003Cu; // 8026D37C
  c->lr=0x8026D384u; f_80285048(c); // 8026D380
L_8026D384:;
  c->r[3]=c->r[31]+0x0000003Cu; // 8026D384
  c->r[5]=c->r[31]+0x000000DCu; // 8026D388
  c->r[4]=c->r[3]|c->r[3]; // 8026D38C
  c->lr=0x8026D394u; f_80284A08(c); // 8026D390
  c->r[0]=R32(c->r[31]+0x000000CCu); // 8026D394
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 8026D398
  if (crb(c,2)) { goto L_8026D3B0; } // 8026D39C
  c->r[3]=c->r[31]+0x000000B4u; // 8026D3A0
  c->r[4]=c->r[31]+0x0000009Cu; // 8026D3A4
  c->r[5]=c->r[31]+0x0000003Cu; // 8026D3A8
  c->lr=0x8026D3B0u; f_80285048(c); // 8026D3AC
L_8026D3B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026D3B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026D3B4
  c->lr=c->r[0]; // 8026D3B8
  c->r[1]=c->r[1]+0x00000010u; // 8026D3BC
  return; // 8026D3C0
}

// GetScaleProperty__Q34nw4r3g3d7ScnLeafCFv
void f_8026D3C4(Ctx* __restrict c) {
  trace_call(0x8026D3C4u);
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026D3C4
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026D3C8
  fcmp(c,0,c->f[2],c->f[1]); // 8026D3CC
  if (!crb(c,2)) { goto L_8026D3FC; } // 8026D3D0
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026D3D4
  fcmp(c,0,c->f[1],c->f[0]); // 8026D3D8
  if (!crb(c,2)) { goto L_8026D3FC; } // 8026D3DC
  {uint32_t ea=c->r[2]+0xFFFF9DACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026D3E0
  fcmp(c,0,c->f[0],c->f[2]); // 8026D3E4
  if (!crb(c,2)) { goto L_8026D3F4; } // 8026D3E8
  c->r[3]=0u+0x00000000u; // 8026D3EC
  return; // 8026D3F0
L_8026D3F4:;
  c->r[3]=0u+0x00000001u; // 8026D3F4
  return; // 8026D3F8
L_8026D3FC:;
  c->r[3]=0u+0x00000002u; // 8026D3FC
  return; // 8026D400
}

// DefG3dProcScnLeaf__Q34nw4r3g3d7ScnLeafFUlUlPv
void f_8026D404(Ctx* __restrict c) {
  trace_call(0x8026D404u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D404
  c->r[0]=c->lr; // 8026D408
  cmps(c,0,(int32_t)c->r[4],9); // 8026D40C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026D410
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026D414
  c->r[31]=c->r[6]|c->r[6]; // 8026D418
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026D41C
  c->r[30]=c->r[3]|c->r[3]; // 8026D420
  W32(c->r[1]+0x00000008u,c->r[5]); // 8026D424
  if (!crb(c,0)) { goto L_8026D454; } // 8026D428
  cmps(c,0,(int32_t)c->r[4],3); // 8026D42C
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D430
  if (!crb(c,0)) { goto L_8026D448; } // 8026D434
  cmps(c,0,(int32_t)c->r[4],1); // 8026D438
  if (crb(c,2)) { goto L_8026D480; } // 8026D43C
  if (!crb(c,0)) { goto L_8026D570; } // 8026D440
  goto L_8026D6F4; // 8026D444
L_8026D448:;
  cmps(c,0,(int32_t)c->r[4],5); // 8026D448
  if (!crb(c,0)) { goto L_8026D6F4; } // 8026D44C
  goto L_8026D600; // 8026D450
L_8026D454:;
  c->r[5]=0u+0x00010000u; // 8026D454
  c->r[0]=c->r[5]+0x00000003u; // 8026D458
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8026D45C
  if (crb(c,2)) { goto L_8026D6E4; } // 8026D460
  if (!crb(c,0)) { goto L_8026D6F4; } // 8026D464
  c->r[0]=c->r[5]+0x00000001u; // 8026D468
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8026D46C
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D470
  if (!crb(c,0)) { goto L_8026D6F0; } // 8026D474
  goto L_8026D6F4; // 8026D478
  goto L_8026D6F4; // 8026D47C
L_8026D480:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8026D480
  c->r[6]=c->r[5]|c->r[5]; // 8026D484
  cmps(c,0,(int32_t)c->r[4],0); // 8026D488
  if (crb(c,2)) { goto L_8026D4C8; } // 8026D48C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 8026D490
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026D494
  if (crb(c,2)) { goto L_8026D4C8; } // 8026D498
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8026D49C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026D4A0
  if (crb(c,2)) { goto L_8026D4C8; } // 8026D4A4
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026D4A8
  c->r[3]=c->r[4]|c->r[4]; // 8026D4AC
  c->r[5]=c->r[30]|c->r[30]; // 8026D4B0
  c->r[7]=c->r[31]|c->r[31]; // 8026D4B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026D4B8
  c->r[4]=0u+0x00000001u; // 8026D4BC
  c->ctr=c->r[12]; // 8026D4C0
  if (true) { c->lr=0x8026D4C8u; dispatch(c,c->ctr); } // 8026D4C4
L_8026D4C8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8026D4C8
  c->r[3]=c->r[30]|c->r[30]; // 8026D4CC
  c->r[4]=c->r[31]|c->r[31]; // 8026D4D0
  c->r[5]=c->r[1]+0x00000008u; // 8026D4D4
  c->r[12]=R32(c->r[12]+0x00000030u); // 8026D4D8
  c->ctr=c->r[12]; // 8026D4DC
  if (true) { c->lr=0x8026D4E4u; dispatch(c,c->ctr); } // 8026D4E0
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8026D4E4
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026D4E8
  cmps(c,0,(int32_t)c->r[3],0); // 8026D4EC
  if (crb(c,2)) { goto L_8026D528; } // 8026D4F0
  c->r[0]=R16(c->r[30]+0x000000DAu); // 8026D4F4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026D4F8
  if (crb(c,2)) { goto L_8026D528; } // 8026D4FC
  c->r[0]=R8(c->r[30]+0x000000D8u); // 8026D500
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026D504
  if (crb(c,2)) { goto L_8026D528; } // 8026D508
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D50C
  c->r[5]=c->r[30]|c->r[30]; // 8026D510
  c->r[7]=c->r[31]|c->r[31]; // 8026D514
  c->r[4]=0u+0x00000002u; // 8026D518
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026D51C
  c->ctr=c->r[12]; // 8026D520
  if (true) { c->lr=0x8026D528u; dispatch(c,c->ctr); } // 8026D524
L_8026D528:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8026D528
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026D52C
  cmps(c,0,(int32_t)c->r[3],0); // 8026D530
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D534
  c->r[0]=R16(c->r[30]+0x000000DAu); // 8026D538
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026D53C
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D540
  c->r[0]=R8(c->r[30]+0x000000D8u); // 8026D544
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026D548
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D54C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D550
  c->r[5]=c->r[30]|c->r[30]; // 8026D554
  c->r[7]=c->r[31]|c->r[31]; // 8026D558
  c->r[4]=0u+0x00000004u; // 8026D55C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026D560
  c->ctr=c->r[12]; // 8026D564
  if (true) { c->lr=0x8026D56Cu; dispatch(c,c->ctr); } // 8026D568
  goto L_8026D6F4; // 8026D56C
L_8026D570:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8026D570
  c->r[6]=c->r[5]|c->r[5]; // 8026D574
  cmps(c,0,(int32_t)c->r[4],0); // 8026D578
  if (crb(c,2)) { goto L_8026D5B8; } // 8026D57C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 8026D580
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026D584
  if (crb(c,2)) { goto L_8026D5B8; } // 8026D588
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8026D58C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026D590
  if (crb(c,2)) { goto L_8026D5B8; } // 8026D594
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026D598
  c->r[3]=c->r[4]|c->r[4]; // 8026D59C
  c->r[5]=c->r[30]|c->r[30]; // 8026D5A0
  c->r[7]=c->r[31]|c->r[31]; // 8026D5A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8026D5A8
  c->r[4]=0u+0x00000001u; // 8026D5AC
  c->ctr=c->r[12]; // 8026D5B0
  if (true) { c->lr=0x8026D5B8u; dispatch(c,c->ctr); } // 8026D5B4
L_8026D5B8:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8026D5B8
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026D5BC
  cmps(c,0,(int32_t)c->r[3],0); // 8026D5C0
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D5C4
  c->r[0]=R16(c->r[30]+0x000000DAu); // 8026D5C8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026D5CC
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D5D0
  c->r[0]=R8(c->r[30]+0x000000D8u); // 8026D5D4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026D5D8
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D5DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D5E0
  c->r[5]=c->r[30]|c->r[30]; // 8026D5E4
  c->r[7]=c->r[31]|c->r[31]; // 8026D5E8
  c->r[4]=0u+0x00000004u; // 8026D5EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 8026D5F0
  c->ctr=c->r[12]; // 8026D5F4
  if (true) { c->lr=0x8026D5FCu; dispatch(c,c->ctr); } // 8026D5F8
  goto L_8026D6F4; // 8026D5FC
L_8026D600:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8026D600
  c->r[6]=c->r[5]|c->r[5]; // 8026D604
  cmps(c,0,(int32_t)c->r[4],0); // 8026D608
  if (crb(c,2)) { goto L_8026D648; } // 8026D60C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 8026D610
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026D614
  if (crb(c,2)) { goto L_8026D648; } // 8026D618
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8026D61C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026D620
  if (crb(c,2)) { goto L_8026D648; } // 8026D624
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026D628
  c->r[3]=c->r[4]|c->r[4]; // 8026D62C
  c->r[5]=c->r[30]|c->r[30]; // 8026D630
  c->r[7]=c->r[31]|c->r[31]; // 8026D634
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026D638
  c->r[4]=0u+0x00000001u; // 8026D63C
  c->ctr=c->r[12]; // 8026D640
  if (true) { c->lr=0x8026D648u; dispatch(c,c->ctr); } // 8026D644
L_8026D648:;
  c->r[3]=c->r[31]|c->r[31]; // 8026D648
  c->r[4]=c->r[30]+0x0000003Cu; // 8026D64C
  c->r[5]=c->r[30]+0x0000006Cu; // 8026D650
  c->lr=0x8026D658u; f_80167FF8(c); // 8026D654
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8026D658
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026D65C
  cmps(c,0,(int32_t)c->r[3],0); // 8026D660
  if (crb(c,2)) { goto L_8026D69C; } // 8026D664
  c->r[0]=R16(c->r[30]+0x000000DAu); // 8026D668
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026D66C
  if (crb(c,2)) { goto L_8026D69C; } // 8026D670
  c->r[0]=R8(c->r[30]+0x000000D8u); // 8026D674
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026D678
  if (crb(c,2)) { goto L_8026D69C; } // 8026D67C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D680
  c->r[5]=c->r[30]|c->r[30]; // 8026D684
  c->r[7]=c->r[31]|c->r[31]; // 8026D688
  c->r[4]=0u+0x00000002u; // 8026D68C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026D690
  c->ctr=c->r[12]; // 8026D694
  if (true) { c->lr=0x8026D69Cu; dispatch(c,c->ctr); } // 8026D698
L_8026D69C:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8026D69C
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026D6A0
  cmps(c,0,(int32_t)c->r[3],0); // 8026D6A4
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D6A8
  c->r[0]=R16(c->r[30]+0x000000DAu); // 8026D6AC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026D6B0
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D6B4
  c->r[0]=R8(c->r[30]+0x000000D8u); // 8026D6B8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026D6BC
  if (crb(c,2)) { goto L_8026D6F4; } // 8026D6C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D6C4
  c->r[5]=c->r[30]|c->r[30]; // 8026D6C8
  c->r[7]=c->r[31]|c->r[31]; // 8026D6CC
  c->r[4]=0u+0x00000004u; // 8026D6D0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026D6D4
  c->ctr=c->r[12]; // 8026D6D8
  if (true) { c->lr=0x8026D6E0u; dispatch(c,c->ctr); } // 8026D6DC
  goto L_8026D6F4; // 8026D6E0
L_8026D6E4:;
  c->r[0]=0u+0x00000000u; // 8026D6E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8026D6E8
  goto L_8026D6F4; // 8026D6EC
L_8026D6F0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8026D6F0
L_8026D6F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026D6F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026D6F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026D6FC
  c->lr=c->r[0]; // 8026D700
  c->r[1]=c->r[1]+0x00000020u; // 8026D704
  return; // 8026D708
}

// Construct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPUlUl
void f_8026D70C(Ctx* __restrict c) {
  trace_call(0x8026D70Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D70C
  c->r[0]=c->lr; // 8026D710
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8026D714
  cmps(c,0,(int32_t)c->r[4],0); // 8026D718
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026D71C
  c->r[0]=c->r[6]+0x000000EBu; // 8026D720
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8026D724
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026D728
  c->r[31]=0u+0x00000000u; // 8026D72C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026D730
  c->r[30]=c->r[5]|c->r[5]; // 8026D734
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026D738
  c->r[29]=c->r[3]|c->r[3]; // 8026D73C
  if (crb(c,2)) { goto L_8026D748; } // 8026D740
  W32(c->r[4]+0x00000000u,c->r[0]); // 8026D744
L_8026D748:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026D748
  if (crb(c,2)) { goto L_8026D7A8; } // 8026D74C
  c->r[3]=c->r[29]|c->r[29]; // 8026D750
  c->r[4]=c->r[0]|c->r[0]; // 8026D754
  c->lr=0x8026D75Cu; f_801A0EF8(c); // 8026D758
  cmps(c,0,(int32_t)c->r[3],0); // 8026D75C
  c->r[31]=c->r[3]|c->r[3]; // 8026D760
  if (!crb(c,2)) { goto L_8026D770; } // 8026D764
  c->r[3]=0u+0x00000000u; // 8026D768
  goto L_8026D7AC; // 8026D76C
L_8026D770:;
  if (crb(c,2)) { goto L_8026D7A8; } // 8026D770
  c->r[4]=c->r[29]|c->r[29]; // 8026D774
  c->lr=0x8026D77Cu; f_8026CC5C(c); // 8026D778
  c->r[4]=0u+0x80340000u; // 8026D77C
  c->r[3]=c->r[31]+0x000000E8u; // 8026D780
  c->r[4]=c->r[4]+0x00004D10u; // 8026D784
  c->r[0]=0u+0x00000000u; // 8026D788
  W32(c->r[31]+0x00000000u,c->r[4]); // 8026D78C
  W32(c->r[31]+0x000000DCu,c->r[3]); // 8026D790
  W32(c->r[31]+0x000000E0u,c->r[30]); // 8026D794
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8026D798
  c->r[0]=R32(c->r[31]+0x000000CCu); // 8026D79C
  c->r[0]=c->r[0]|0x60000000u; // 8026D7A0
  W32(c->r[31]+0x000000CCu,c->r[0]); // 8026D7A4
L_8026D7A8:;
  c->r[3]=c->r[31]|c->r[31]; // 8026D7A8
L_8026D7AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026D7AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026D7B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026D7B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026D7B8
  c->lr=c->r[0]; // 8026D7BC
  c->r[1]=c->r[1]+0x00000020u; // 8026D7C0
  return; // 8026D7C4
}

// ForEach__Q34nw4r3g3d8ScnGroupFPFPQ34nw4r3g3d6ScnObjPv_Q44nw4r3g3d6ScnObj13ForEachResultPvb
void f_8026D7C8(Ctx* __restrict c) {
  trace_call(0x8026D7C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D7C8
  c->r[0]=c->lr; // 8026D7CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026D7D0
  c->r[11]=c->r[1]+0x00000020u; // 8026D7D4
  c->lr=0x8026D7DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026D7D8
  cmps(c,0,(int32_t)c->r[6],0); // 8026D7DC
  c->r[27]=c->r[3]|c->r[3]; // 8026D7E0
  c->r[28]=c->r[4]|c->r[4]; // 8026D7E4
  c->r[29]=c->r[5]|c->r[5]; // 8026D7E8
  if (crb(c,2)) { goto L_8026D868; } // 8026D7EC
  c->r[30]=0u+0x00000000u; // 8026D7F0
  c->r[31]=0u+0x00000000u; // 8026D7F4
  goto L_8026D838; // 8026D7F8
L_8026D7FC:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 8026D7FC
  c->r[4]=c->r[28]|c->r[28]; // 8026D800
  c->r[5]=c->r[29]|c->r[29]; // 8026D804
  c->r[6]=0u+0x00000000u; // 8026D808
  c->r[3]=R32(c->r[3]+c->r[31]); // 8026D80C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D810
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8026D814
  c->ctr=c->r[12]; // 8026D818
  if (true) { c->lr=0x8026D820u; dispatch(c,c->ctr); } // 8026D81C
  cmps(c,0,(int32_t)c->r[3],1); // 8026D820
  if (!crb(c,2)) { goto L_8026D830; } // 8026D824
  c->r[3]=0u+0x00000001u; // 8026D828
  goto L_8026D8E8; // 8026D82C
L_8026D830:;
  c->r[31]=c->r[31]+0x00000004u; // 8026D830
  c->r[30]=c->r[30]+0x00000001u; // 8026D834
L_8026D838:;
  c->r[0]=R32(c->r[27]+0x000000E4u); // 8026D838
  cmpu(c,0,c->r[30],c->r[0]); // 8026D83C
  if (crb(c,0)) { IRQCHK(c); goto L_8026D7FC; } // 8026D840
  c->r[12]=c->r[28]|c->r[28]; // 8026D844
  c->r[3]=c->r[27]|c->r[27]; // 8026D848
  c->r[4]=c->r[29]|c->r[29]; // 8026D84C
  c->ctr=c->r[12]; // 8026D850
  if (true) { c->lr=0x8026D858u; dispatch(c,c->ctr); } // 8026D854
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8026D858
  c->r[0]=cntlz(c->r[0]); // 8026D85C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026D860
  goto L_8026D8E8; // 8026D864
L_8026D868:;
  c->r[12]=c->r[28]|c->r[28]; // 8026D868
  c->r[4]=c->r[29]|c->r[29]; // 8026D86C
  c->ctr=c->r[12]; // 8026D870
  if (true) { c->lr=0x8026D878u; dispatch(c,c->ctr); } // 8026D874
  cmps(c,0,(int32_t)c->r[3],0); // 8026D878
  if (!crb(c,2)) { goto L_8026D8DC; } // 8026D87C
  c->r[30]=0u+0x00000000u; // 8026D880
  c->r[31]=0u+0x00000000u; // 8026D884
  goto L_8026D8C8; // 8026D888
L_8026D88C:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 8026D88C
  c->r[4]=c->r[28]|c->r[28]; // 8026D890
  c->r[5]=c->r[29]|c->r[29]; // 8026D894
  c->r[6]=0u+0x00000000u; // 8026D898
  c->r[3]=R32(c->r[3]+c->r[31]); // 8026D89C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D8A0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8026D8A4
  c->ctr=c->r[12]; // 8026D8A8
  if (true) { c->lr=0x8026D8B0u; dispatch(c,c->ctr); } // 8026D8AC
  cmps(c,0,(int32_t)c->r[3],1); // 8026D8B0
  if (!crb(c,2)) { goto L_8026D8C0; } // 8026D8B4
  c->r[3]=0u+0x00000001u; // 8026D8B8
  goto L_8026D8E8; // 8026D8BC
L_8026D8C0:;
  c->r[31]=c->r[31]+0x00000004u; // 8026D8C0
  c->r[30]=c->r[30]+0x00000001u; // 8026D8C4
L_8026D8C8:;
  c->r[0]=R32(c->r[27]+0x000000E4u); // 8026D8C8
  cmpu(c,0,c->r[30],c->r[0]); // 8026D8CC
  if (crb(c,0)) { IRQCHK(c); goto L_8026D88C; } // 8026D8D0
  c->r[3]=0u+0x00000000u; // 8026D8D4
  goto L_8026D8E8; // 8026D8D8
L_8026D8DC:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8026D8DC
  c->r[0]=cntlz(c->r[0]); // 8026D8E0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026D8E4
L_8026D8E8:;
  c->r[11]=c->r[1]+0x00000020u; // 8026D8E8
  c->lr=0x8026D8F0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026D8EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026D8F0
  c->lr=c->r[0]; // 8026D8F4
  c->r[1]=c->r[1]+0x00000020u; // 8026D8F8
  return; // 8026D8FC
}

// ScnGroup_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d8ScnGroupFUlPQ34nw4r3g3d13IScnObjGather
void f_8026D900(Ctx* __restrict c) {
  trace_call(0x8026D900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026D900
  c->r[0]=c->lr; // 8026D904
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026D908
  c->r[11]=c->r[1]+0x00000020u; // 8026D90C
  c->lr=0x8026D914u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026D910
  c->r[31]=c->r[5]|c->r[5]; // 8026D914
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026D918
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026D91C
  c->r[30]=c->r[4]|c->r[4]; // 8026D920
  c->r[4]=rotl(c->r[0],0)&0x20000000u; // 8026D924
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 8026D928
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026D92C
  c->r[29]=c->r[3]|c->r[3]; // 8026D930
  c->r[5]=cntlz(c->r[4]); // 8026D934
  c->r[0]=cntlz(c->r[0]); // 8026D938
  c->r[3]=c->r[31]|c->r[31]; // 8026D93C
  c->r[4]=c->r[29]|c->r[29]; // 8026D940
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 8026D944
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026D948
  c->ctr=c->r[12]; // 8026D94C
  if (true) { c->lr=0x8026D954u; dispatch(c,c->ctr); } // 8026D950
  cmps(c,0,(int32_t)c->r[3],0); // 8026D954
  if (!crb(c,2)) { goto L_8026D9A4; } // 8026D958
  c->r[27]=0u+0x00000000u; // 8026D95C
  c->r[28]=0u+0x00000000u; // 8026D960
  goto L_8026D994; // 8026D964
L_8026D968:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8026D968
  c->r[5]=c->r[30]|c->r[30]; // 8026D96C
  c->r[6]=c->r[31]|c->r[31]; // 8026D970
  c->r[4]=0u+0x00000005u; // 8026D974
  c->r[3]=R32(c->r[3]+c->r[28]); // 8026D978
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D97C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026D980
  c->ctr=c->r[12]; // 8026D984
  if (true) { c->lr=0x8026D98Cu; dispatch(c,c->ctr); } // 8026D988
  c->r[28]=c->r[28]+0x00000004u; // 8026D98C
  c->r[27]=c->r[27]+0x00000001u; // 8026D990
L_8026D994:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 8026D994
  cmpu(c,0,c->r[27],c->r[0]); // 8026D998
  if (crb(c,0)) { IRQCHK(c); goto L_8026D968; } // 8026D99C
  goto L_8026DA00; // 8026D9A0
L_8026D9A4:;
  cmps(c,0,(int32_t)c->r[3],1); // 8026D9A4
  if (!crb(c,2)) { goto L_8026DA00; } // 8026D9A8
  c->r[27]=R32(c->r[13]+0xFFFFA410u); // 8026D9AC
  c->r[0]=0u+0x00000000u; // 8026D9B0
  c->r[26]=0u+0x00000000u; // 8026D9B4
  c->r[28]=0u+0x00000000u; // 8026D9B8
  W32(c->r[13]+0xFFFFA410u,c->r[0]); // 8026D9BC
  goto L_8026D9F0; // 8026D9C0
L_8026D9C4:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8026D9C4
  c->r[5]=c->r[30]|c->r[30]; // 8026D9C8
  c->r[6]=c->r[31]|c->r[31]; // 8026D9CC
  c->r[4]=0u+0x00000005u; // 8026D9D0
  c->r[3]=R32(c->r[3]+c->r[28]); // 8026D9D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026D9D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026D9DC
  c->ctr=c->r[12]; // 8026D9E0
  if (true) { c->lr=0x8026D9E8u; dispatch(c,c->ctr); } // 8026D9E4
  c->r[28]=c->r[28]+0x00000004u; // 8026D9E8
  c->r[26]=c->r[26]+0x00000001u; // 8026D9EC
L_8026D9F0:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 8026D9F0
  cmpu(c,0,c->r[26],c->r[0]); // 8026D9F4
  if (crb(c,0)) { IRQCHK(c); goto L_8026D9C4; } // 8026D9F8
  W32(c->r[13]+0xFFFFA410u,c->r[27]); // 8026D9FC
L_8026DA00:;
  c->r[11]=c->r[1]+0x00000020u; // 8026DA00
  c->lr=0x8026DA08u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026DA04
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026DA08
  c->lr=c->r[0]; // 8026DA0C
  c->r[1]=c->r[1]+0x00000020u; // 8026DA10
  return; // 8026DA14
}

// G3dProc__Q34nw4r3g3d8ScnGroupFUlUlPv
void f_8026DA18(Ctx* __restrict c) {
  trace_call(0x8026DA18u);
  cmpu(c,0,c->r[4],0x00000009u); // 8026DA18
  if (!crb(c,0)) { goto L_8026DA40; } // 8026DA1C
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 8026DA20
  c->r[8]=0u+0x00000001u; // 8026DA24
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026DA28
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 8026DA2C
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 8026DA30
  if (crb(c,2)) { goto L_8026DA40; } // 8026DA34
  c->r[0]=0u+0x00000001u; // 8026DA38
  goto L_8026DA44; // 8026DA3C
L_8026DA40:;
  c->r[0]=0u+0x00000000u; // 8026DA40
L_8026DA44:;
  cmps(c,0,(int32_t)c->r[0],0); // 8026DA44
  if (!crb(c,2)) return; // 8026DA48
  f_8026DA54(c); return; // 8026DA4C
  return; // 8026DA50
}

// DefG3dProcScnGroup__Q34nw4r3g3d8ScnGroupFUlUlPv
void f_8026DA54(Ctx* __restrict c) {
  trace_call(0x8026DA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026DA54
  c->r[0]=c->lr; // 8026DA58
  W32(c->r[1]+0x00000034u,c->r[0]); // 8026DA5C
  c->r[11]=c->r[1]+0x00000030u; // 8026DA60
  c->lr=0x8026DA68u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026DA64
  cmps(c,0,(int32_t)c->r[4],8); // 8026DA68
  c->r[29]=c->r[3]|c->r[3]; // 8026DA6C
  c->r[26]=c->r[4]|c->r[4]; // 8026DA70
  c->r[30]=c->r[5]|c->r[5]; // 8026DA74
  c->r[31]=c->r[6]|c->r[6]; // 8026DA78
  if (crb(c,2)) { goto L_8026DE54; } // 8026DA7C
  if (!crb(c,0)) { goto L_8026DAB0; } // 8026DA80
  cmps(c,0,(int32_t)c->r[4],3); // 8026DA84
  if (crb(c,2)) { goto L_8026DE54; } // 8026DA88
  if (!crb(c,0)) { goto L_8026DAA0; } // 8026DA8C
  cmps(c,0,(int32_t)c->r[4],1); // 8026DA90
  if (crb(c,2)) { goto L_8026DAEC; } // 8026DA94
  if (!crb(c,0)) { goto L_8026DC28; } // 8026DA98
  goto L_8026DE54; // 8026DA9C
L_8026DAA0:;
  cmps(c,0,(int32_t)c->r[4],5); // 8026DAA0
  if (crb(c,2)) { goto L_8026DADC; } // 8026DAA4
  if (!crb(c,0)) { goto L_8026DE98; } // 8026DAA8
  goto L_8026DCFC; // 8026DAAC
L_8026DAB0:;
  c->r[5]=0u+0x00010000u; // 8026DAB0
  c->r[0]=c->r[5]+0x00000003u; // 8026DAB4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8026DAB8
  if (crb(c,2)) { goto L_8026DE40; } // 8026DABC
  if (!crb(c,0)) { goto L_8026DE54; } // 8026DAC0
  c->r[0]=c->r[5]+0x00000001u; // 8026DAC4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8026DAC8
  if (crb(c,2)) { goto L_8026DE28; } // 8026DACC
  if (!crb(c,0)) { goto L_8026DE4C; } // 8026DAD0
  goto L_8026DE54; // 8026DAD4
  goto L_8026DE54; // 8026DAD8
L_8026DADC:;
  c->r[4]=c->r[30]|c->r[30]; // 8026DADC
  c->r[5]=c->r[31]|c->r[31]; // 8026DAE0
  c->lr=0x8026DAE8u; f_8026D900(c); // 8026DAE4
  goto L_8026DE98; // 8026DAE8
L_8026DAEC:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 8026DAEC
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8026DAF0
  cmps(c,0,(int32_t)c->r[4],0); // 8026DAF4
  if (crb(c,2)) { goto L_8026DB38; } // 8026DAF8
  c->r[0]=R16(c->r[3]+0x000000DAu); // 8026DAFC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026DB00
  if (crb(c,2)) { goto L_8026DB38; } // 8026DB04
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8026DB08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026DB0C
  if (crb(c,2)) { goto L_8026DB38; } // 8026DB10
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026DB14
  c->r[3]=c->r[4]|c->r[4]; // 8026DB18
  c->r[5]=c->r[29]|c->r[29]; // 8026DB1C
  c->r[6]=c->r[30]|c->r[30]; // 8026DB20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026DB24
  c->r[7]=c->r[31]|c->r[31]; // 8026DB28
  c->r[4]=0u+0x00000001u; // 8026DB2C
  c->ctr=c->r[12]; // 8026DB30
  if (true) { c->lr=0x8026DB38u; dispatch(c,c->ctr); } // 8026DB34
L_8026DB38:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026DB38
  c->r[3]=c->r[29]|c->r[29]; // 8026DB3C
  c->r[4]=c->r[31]|c->r[31]; // 8026DB40
  c->r[5]=c->r[1]+0x00000008u; // 8026DB44
  c->r[12]=R32(c->r[12]+0x00000030u); // 8026DB48
  c->ctr=c->r[12]; // 8026DB4C
  if (true) { c->lr=0x8026DB54u; dispatch(c,c->ctr); } // 8026DB50
  c->r[3]=R32(c->r[29]+0x000000D4u); // 8026DB54
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026DB58
  cmps(c,0,(int32_t)c->r[3],0); // 8026DB5C
  if (crb(c,2)) { goto L_8026DB98; } // 8026DB60
  c->r[0]=R16(c->r[29]+0x000000DAu); // 8026DB64
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026DB68
  if (crb(c,2)) { goto L_8026DB98; } // 8026DB6C
  c->r[0]=R8(c->r[29]+0x000000D8u); // 8026DB70
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026DB74
  if (crb(c,2)) { goto L_8026DB98; } // 8026DB78
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DB7C
  c->r[5]=c->r[29]|c->r[29]; // 8026DB80
  c->r[7]=c->r[31]|c->r[31]; // 8026DB84
  c->r[4]=0u+0x00000002u; // 8026DB88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026DB8C
  c->ctr=c->r[12]; // 8026DB90
  if (true) { c->lr=0x8026DB98u; dispatch(c,c->ctr); } // 8026DB94
L_8026DB98:;
  c->r[28]=c->r[29]+0x0000003Cu; // 8026DB98
  c->r[30]=0u+0x00000000u; // 8026DB9C
  c->r[27]=0u+0x00000000u; // 8026DBA0
  goto L_8026DBD4; // 8026DBA4
L_8026DBA8:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8026DBA8
  c->r[6]=c->r[28]|c->r[28]; // 8026DBAC
  c->r[5]=R32(c->r[1]+0x00000008u); // 8026DBB0
  c->r[4]=0u+0x00000001u; // 8026DBB4
  c->r[3]=R32(c->r[3]+c->r[27]); // 8026DBB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DBBC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026DBC0
  c->ctr=c->r[12]; // 8026DBC4
  if (true) { c->lr=0x8026DBCCu; dispatch(c,c->ctr); } // 8026DBC8
  c->r[27]=c->r[27]+0x00000004u; // 8026DBCC
  c->r[30]=c->r[30]+0x00000001u; // 8026DBD0
L_8026DBD4:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 8026DBD4
  cmpu(c,0,c->r[30],c->r[0]); // 8026DBD8
  if (crb(c,0)) { IRQCHK(c); goto L_8026DBA8; } // 8026DBDC
  c->r[3]=R32(c->r[29]+0x000000D4u); // 8026DBE0
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026DBE4
  cmps(c,0,(int32_t)c->r[3],0); // 8026DBE8
  if (crb(c,2)) { goto L_8026DE98; } // 8026DBEC
  c->r[0]=R16(c->r[29]+0x000000DAu); // 8026DBF0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026DBF4
  if (crb(c,2)) { goto L_8026DE98; } // 8026DBF8
  c->r[0]=R8(c->r[29]+0x000000D8u); // 8026DBFC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026DC00
  if (crb(c,2)) { goto L_8026DE98; } // 8026DC04
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DC08
  c->r[5]=c->r[29]|c->r[29]; // 8026DC0C
  c->r[7]=c->r[31]|c->r[31]; // 8026DC10
  c->r[4]=0u+0x00000004u; // 8026DC14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026DC18
  c->ctr=c->r[12]; // 8026DC1C
  if (true) { c->lr=0x8026DC24u; dispatch(c,c->ctr); } // 8026DC20
  goto L_8026DE98; // 8026DC24
L_8026DC28:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8026DC28
  cmps(c,0,(int32_t)c->r[4],0); // 8026DC2C
  if (crb(c,2)) { goto L_8026DC70; } // 8026DC30
  c->r[0]=R16(c->r[3]+0x000000DAu); // 8026DC34
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026DC38
  if (crb(c,2)) { goto L_8026DC70; } // 8026DC3C
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8026DC40
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026DC44
  if (crb(c,2)) { goto L_8026DC70; } // 8026DC48
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026DC4C
  c->r[3]=c->r[4]|c->r[4]; // 8026DC50
  c->r[5]=c->r[29]|c->r[29]; // 8026DC54
  c->r[6]=c->r[30]|c->r[30]; // 8026DC58
  c->r[12]=R32(c->r[12]+0x00000010u); // 8026DC5C
  c->r[7]=c->r[31]|c->r[31]; // 8026DC60
  c->r[4]=0u+0x00000001u; // 8026DC64
  c->ctr=c->r[12]; // 8026DC68
  if (true) { c->lr=0x8026DC70u; dispatch(c,c->ctr); } // 8026DC6C
L_8026DC70:;
  c->r[28]=0u+0x00000000u; // 8026DC70
  c->r[27]=0u+0x00000000u; // 8026DC74
  goto L_8026DCA8; // 8026DC78
L_8026DC7C:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8026DC7C
  c->r[5]=c->r[30]|c->r[30]; // 8026DC80
  c->r[6]=c->r[31]|c->r[31]; // 8026DC84
  c->r[4]=0u+0x00000002u; // 8026DC88
  c->r[3]=R32(c->r[3]+c->r[27]); // 8026DC8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DC90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026DC94
  c->ctr=c->r[12]; // 8026DC98
  if (true) { c->lr=0x8026DCA0u; dispatch(c,c->ctr); } // 8026DC9C
  c->r[27]=c->r[27]+0x00000004u; // 8026DCA0
  c->r[28]=c->r[28]+0x00000001u; // 8026DCA4
L_8026DCA8:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 8026DCA8
  cmpu(c,0,c->r[28],c->r[0]); // 8026DCAC
  if (crb(c,0)) { IRQCHK(c); goto L_8026DC7C; } // 8026DCB0
  c->r[3]=R32(c->r[29]+0x000000D4u); // 8026DCB4
  cmps(c,0,(int32_t)c->r[3],0); // 8026DCB8
  if (crb(c,2)) { goto L_8026DE98; } // 8026DCBC
  c->r[0]=R16(c->r[29]+0x000000DAu); // 8026DCC0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026DCC4
  if (crb(c,2)) { goto L_8026DE98; } // 8026DCC8
  c->r[0]=R8(c->r[29]+0x000000D8u); // 8026DCCC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026DCD0
  if (crb(c,2)) { goto L_8026DE98; } // 8026DCD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DCD8
  c->r[5]=c->r[29]|c->r[29]; // 8026DCDC
  c->r[6]=c->r[30]|c->r[30]; // 8026DCE0
  c->r[7]=c->r[31]|c->r[31]; // 8026DCE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8026DCE8
  c->r[4]=0u+0x00000004u; // 8026DCEC
  c->ctr=c->r[12]; // 8026DCF0
  if (true) { c->lr=0x8026DCF8u; dispatch(c,c->ctr); } // 8026DCF4
  goto L_8026DE98; // 8026DCF8
L_8026DCFC:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8026DCFC
  cmps(c,0,(int32_t)c->r[4],0); // 8026DD00
  if (crb(c,2)) { goto L_8026DD44; } // 8026DD04
  c->r[0]=R16(c->r[3]+0x000000DAu); // 8026DD08
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026DD0C
  if (crb(c,2)) { goto L_8026DD44; } // 8026DD10
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8026DD14
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026DD18
  if (crb(c,2)) { goto L_8026DD44; } // 8026DD1C
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026DD20
  c->r[3]=c->r[4]|c->r[4]; // 8026DD24
  c->r[5]=c->r[29]|c->r[29]; // 8026DD28
  c->r[6]=c->r[30]|c->r[30]; // 8026DD2C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026DD30
  c->r[7]=c->r[31]|c->r[31]; // 8026DD34
  c->r[4]=0u+0x00000001u; // 8026DD38
  c->ctr=c->r[12]; // 8026DD3C
  if (true) { c->lr=0x8026DD44u; dispatch(c,c->ctr); } // 8026DD40
L_8026DD44:;
  c->r[3]=c->r[31]|c->r[31]; // 8026DD44
  c->r[4]=c->r[29]+0x0000003Cu; // 8026DD48
  c->r[5]=c->r[29]+0x0000006Cu; // 8026DD4C
  c->lr=0x8026DD54u; f_80167FF8(c); // 8026DD50
  c->r[3]=R32(c->r[29]+0x000000D4u); // 8026DD54
  cmps(c,0,(int32_t)c->r[3],0); // 8026DD58
  if (crb(c,2)) { goto L_8026DD98; } // 8026DD5C
  c->r[0]=R16(c->r[29]+0x000000DAu); // 8026DD60
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026DD64
  if (crb(c,2)) { goto L_8026DD98; } // 8026DD68
  c->r[0]=R8(c->r[29]+0x000000D8u); // 8026DD6C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026DD70
  if (crb(c,2)) { goto L_8026DD98; } // 8026DD74
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DD78
  c->r[5]=c->r[29]|c->r[29]; // 8026DD7C
  c->r[6]=c->r[30]|c->r[30]; // 8026DD80
  c->r[7]=c->r[31]|c->r[31]; // 8026DD84
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026DD88
  c->r[4]=0u+0x00000002u; // 8026DD8C
  c->ctr=c->r[12]; // 8026DD90
  if (true) { c->lr=0x8026DD98u; dispatch(c,c->ctr); } // 8026DD94
L_8026DD98:;
  c->r[28]=0u+0x00000000u; // 8026DD98
  c->r[27]=0u+0x00000000u; // 8026DD9C
  goto L_8026DDD0; // 8026DDA0
L_8026DDA4:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8026DDA4
  c->r[5]=c->r[30]|c->r[30]; // 8026DDA8
  c->r[6]=c->r[31]|c->r[31]; // 8026DDAC
  c->r[4]=0u+0x00000004u; // 8026DDB0
  c->r[3]=R32(c->r[3]+c->r[27]); // 8026DDB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DDB8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026DDBC
  c->ctr=c->r[12]; // 8026DDC0
  if (true) { c->lr=0x8026DDC8u; dispatch(c,c->ctr); } // 8026DDC4
  c->r[27]=c->r[27]+0x00000004u; // 8026DDC8
  c->r[28]=c->r[28]+0x00000001u; // 8026DDCC
L_8026DDD0:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 8026DDD0
  cmpu(c,0,c->r[28],c->r[0]); // 8026DDD4
  if (crb(c,0)) { IRQCHK(c); goto L_8026DDA4; } // 8026DDD8
  c->r[3]=R32(c->r[29]+0x000000D4u); // 8026DDDC
  cmps(c,0,(int32_t)c->r[3],0); // 8026DDE0
  if (crb(c,2)) { goto L_8026DE98; } // 8026DDE4
  c->r[0]=R16(c->r[29]+0x000000DAu); // 8026DDE8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026DDEC
  if (crb(c,2)) { goto L_8026DE98; } // 8026DDF0
  c->r[0]=R8(c->r[29]+0x000000D8u); // 8026DDF4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8026DDF8
  if (crb(c,2)) { goto L_8026DE98; } // 8026DDFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DE00
  c->r[5]=c->r[29]|c->r[29]; // 8026DE04
  c->r[6]=c->r[30]|c->r[30]; // 8026DE08
  c->r[7]=c->r[31]|c->r[31]; // 8026DE0C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026DE10
  c->r[4]=0u+0x00000004u; // 8026DE14
  c->ctr=c->r[12]; // 8026DE18
  if (true) { c->lr=0x8026DE20u; dispatch(c,c->ctr); } // 8026DE1C
  goto L_8026DE98; // 8026DE20
  goto L_8026DE98; // 8026DE24
L_8026DE28:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DE28
  c->r[4]=c->r[31]|c->r[31]; // 8026DE2C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8026DE30
  c->ctr=c->r[12]; // 8026DE34
  if (true) { c->lr=0x8026DE3Cu; dispatch(c,c->ctr); } // 8026DE38
  goto L_8026DE98; // 8026DE3C
L_8026DE40:;
  c->r[0]=0u+0x00000000u; // 8026DE40
  W32(c->r[3]+0x00000004u,c->r[0]); // 8026DE44
  goto L_8026DE98; // 8026DE48
L_8026DE4C:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8026DE4C
  goto L_8026DE98; // 8026DE50
L_8026DE54:;
  c->r[27]=0u+0x00000000u; // 8026DE54
  c->r[28]=0u+0x00000000u; // 8026DE58
  goto L_8026DE8C; // 8026DE5C
L_8026DE60:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8026DE60
  c->r[4]=c->r[26]|c->r[26]; // 8026DE64
  c->r[5]=c->r[30]|c->r[30]; // 8026DE68
  c->r[6]=c->r[31]|c->r[31]; // 8026DE6C
  c->r[3]=R32(c->r[3]+c->r[28]); // 8026DE70
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026DE74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026DE78
  c->ctr=c->r[12]; // 8026DE7C
  if (true) { c->lr=0x8026DE84u; dispatch(c,c->ctr); } // 8026DE80
  c->r[28]=c->r[28]+0x00000004u; // 8026DE84
  c->r[27]=c->r[27]+0x00000001u; // 8026DE88
L_8026DE8C:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 8026DE8C
  cmpu(c,0,c->r[27],c->r[0]); // 8026DE90
  if (crb(c,0)) { IRQCHK(c); goto L_8026DE60; } // 8026DE94
L_8026DE98:;
  c->r[11]=c->r[1]+0x00000030u; // 8026DE98
  c->lr=0x8026DEA0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026DE9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026DEA0
  c->lr=c->r[0]; // 8026DEA4
  c->r[1]=c->r[1]+0x00000030u; // 8026DEA8
  return; // 8026DEAC
}

// Insert__Q34nw4r3g3d8ScnGroupFUlPQ34nw4r3g3d6ScnObj
void f_8026DEB0(Ctx* __restrict c) {
  trace_call(0x8026DEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026DEB0
  c->r[0]=c->lr; // 8026DEB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026DEB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026DEBC
  c->r[31]=c->r[3]|c->r[3]; // 8026DEC0
  c->r[6]=R32(c->r[3]+0x000000E4u); // 8026DEC4
  cmpu(c,0,c->r[4],c->r[6]); // 8026DEC8
  if (crb(c,1)) { goto L_8026E024; } // 8026DECC
  c->r[0]=R32(c->r[3]+0x000000E0u); // 8026DED0
  cmpu(c,0,c->r[6],c->r[0]); // 8026DED4
  if (!crb(c,0)) { goto L_8026E024; } // 8026DED8
  cmps(c,0,(int32_t)c->r[5],0); // 8026DEDC
  if (crb(c,2)) { goto L_8026E024; } // 8026DEE0
  c->r[0]=R32(c->r[5]+0x00000004u); // 8026DEE4
  cmps(c,0,(int32_t)c->r[0],0); // 8026DEE8
  if (!crb(c,2)) { goto L_8026E024; } // 8026DEEC
  cmpu(c,1,c->r[6],c->r[4]); // 8026DEF0
  if (!crb(c,5)) { goto L_8026DFE0; } // 8026DEF4
  c->r[0]=c->r[6]-c->r[4]; // 8026DEF8
  c->r[7]=c->r[4]+0x00000008u; // 8026DEFC
  cmpu(c,0,c->r[0],0x00000008u); // 8026DF00
  if (!crb(c,1)) { goto L_8026DFB4; } // 8026DF04
  if (crb(c,4)) { goto L_8026DFB4; } // 8026DF08
  c->r[0]=c->r[6]+0x00000007u; // 8026DF0C
  c->r[8]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8026DF10
  c->r[0]=c->r[0]-c->r[7]; // 8026DF14
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8026DF18
  c->ctr=c->r[0]; // 8026DF1C
  cmpu(c,0,c->r[6],c->r[7]); // 8026DF20
  if (!crb(c,1)) { goto L_8026DFB4; } // 8026DF24
L_8026DF28:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF28
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 8026DF2C
  c->r[7]=c->r[0]+c->r[8]; // 8026DF30
  c->r[0]=R32(c->r[7]+0xFFFFFFFCu); // 8026DF34
  W32(c->r[7]+0x00000000u,c->r[0]); // 8026DF38
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF3C
  c->r[7]=c->r[0]+c->r[8]; // 8026DF40
  c->r[0]=R32(c->r[7]+0xFFFFFFF8u); // 8026DF44
  W32(c->r[7]+0xFFFFFFFCu,c->r[0]); // 8026DF48
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF4C
  c->r[7]=c->r[0]+c->r[8]; // 8026DF50
  c->r[0]=R32(c->r[7]+0xFFFFFFF4u); // 8026DF54
  W32(c->r[7]+0xFFFFFFF8u,c->r[0]); // 8026DF58
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF5C
  c->r[7]=c->r[0]+c->r[8]; // 8026DF60
  c->r[0]=R32(c->r[7]+0xFFFFFFF0u); // 8026DF64
  W32(c->r[7]+0xFFFFFFF4u,c->r[0]); // 8026DF68
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF6C
  c->r[7]=c->r[0]+c->r[8]; // 8026DF70
  c->r[0]=R32(c->r[7]+0xFFFFFFECu); // 8026DF74
  W32(c->r[7]+0xFFFFFFF0u,c->r[0]); // 8026DF78
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF7C
  c->r[7]=c->r[0]+c->r[8]; // 8026DF80
  c->r[0]=R32(c->r[7]+0xFFFFFFE8u); // 8026DF84
  W32(c->r[7]+0xFFFFFFECu,c->r[0]); // 8026DF88
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF8C
  c->r[7]=c->r[0]+c->r[8]; // 8026DF90
  c->r[0]=R32(c->r[7]+0xFFFFFFE4u); // 8026DF94
  W32(c->r[7]+0xFFFFFFE8u,c->r[0]); // 8026DF98
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DF9C
  c->r[7]=c->r[0]+c->r[8]; // 8026DFA0
  c->r[8]=c->r[8]+0xFFFFFFE0u; // 8026DFA4
  c->r[0]=R32(c->r[7]+0xFFFFFFE0u); // 8026DFA8
  W32(c->r[7]+0xFFFFFFE4u,c->r[0]); // 8026DFAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026DF28; } // 8026DFB0
L_8026DFB4:;
  c->r[0]=c->r[6]-c->r[4]; // 8026DFB4
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8026DFB8
  c->ctr=c->r[0]; // 8026DFBC
  cmpu(c,0,c->r[6],c->r[4]); // 8026DFC0
  if (!crb(c,1)) { goto L_8026DFE0; } // 8026DFC4
L_8026DFC8:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8026DFC8
  c->r[6]=c->r[0]+c->r[7]; // 8026DFCC
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 8026DFD0
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 8026DFD4
  W32(c->r[6]+0x00000000u,c->r[0]); // 8026DFD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026DFC8; } // 8026DFDC
L_8026DFE0:;
  c->r[6]=R32(c->r[3]+0x000000DCu); // 8026DFE0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8026DFE4
  c->r[4]=0u+0x00010000u; // 8026DFE8
  c->r[3]=c->r[5]|c->r[5]; // 8026DFEC
  W32(c->r[6]+c->r[0],c->r[5]); // 8026DFF0
  c->r[6]=c->r[31]|c->r[31]; // 8026DFF4
  c->r[4]=c->r[4]+0x00000002u; // 8026DFF8
  c->r[5]=0u+0x00000000u; // 8026DFFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E000
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026E004
  c->ctr=c->r[12]; // 8026E008
  if (true) { c->lr=0x8026E010u; dispatch(c,c->ctr); } // 8026E00C
  c->r[4]=R32(c->r[31]+0x000000E4u); // 8026E010
  c->r[3]=0u+0x00000001u; // 8026E014
  c->r[0]=c->r[4]+0x00000001u; // 8026E018
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8026E01C
  goto L_8026E028; // 8026E020
L_8026E024:;
  c->r[3]=0u+0x00000000u; // 8026E024
L_8026E028:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E028
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026E02C
  c->lr=c->r[0]; // 8026E030
  c->r[1]=c->r[1]+0x00000010u; // 8026E034
  return; // 8026E038
}

// Remove__Q34nw4r3g3d8ScnGroupFUl
void f_8026E03C(Ctx* __restrict c) {
  trace_call(0x8026E03Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E03C
  c->r[0]=c->lr; // 8026E040
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026E044
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026E048
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026E04C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026E050
  c->r[29]=c->r[4]|c->r[4]; // 8026E054
  W32(c->r[1]+0x00000010u,c->r[28]); // 8026E058
  c->r[28]=c->r[3]|c->r[3]; // 8026E05C
  c->r[0]=R32(c->r[3]+0x000000E4u); // 8026E060
  cmpu(c,0,c->r[4],c->r[0]); // 8026E064
  if (!crb(c,0)) { goto L_8026E0D4; } // 8026E068
  c->r[5]=R32(c->r[3]+0x000000DCu); // 8026E06C
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8026E070
  c->r[3]=0u+0x00010000u; // 8026E074
  c->r[6]=c->r[28]|c->r[28]; // 8026E078
  c->r[30]=R32(c->r[5]+c->r[31]); // 8026E07C
  c->r[4]=c->r[3]+0x00000003u; // 8026E080
  c->r[5]=0u+0x00000000u; // 8026E084
  c->r[12]=R32(c->r[30]+0x00000000u); // 8026E088
  c->r[3]=c->r[30]|c->r[30]; // 8026E08C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026E090
  c->ctr=c->r[12]; // 8026E094
  if (true) { c->lr=0x8026E09Cu; dispatch(c,c->ctr); } // 8026E098
  goto L_8026E0B8; // 8026E09C
L_8026E0A0:;
  c->r[0]=R32(c->r[28]+0x000000DCu); // 8026E0A0
  c->r[29]=c->r[29]+0x00000001u; // 8026E0A4
  c->r[3]=c->r[0]+c->r[31]; // 8026E0A8
  c->r[31]=c->r[31]+0x00000004u; // 8026E0AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8026E0B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8026E0B4
L_8026E0B8:;
  c->r[3]=R32(c->r[28]+0x000000E4u); // 8026E0B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8026E0BC
  cmpu(c,0,c->r[29],c->r[0]); // 8026E0C0
  if (crb(c,0)) { IRQCHK(c); goto L_8026E0A0; } // 8026E0C4
  W32(c->r[28]+0x000000E4u,c->r[0]); // 8026E0C8
  c->r[3]=c->r[30]|c->r[30]; // 8026E0CC
  goto L_8026E0D8; // 8026E0D0
L_8026E0D4:;
  c->r[3]=0u+0x00000000u; // 8026E0D4
L_8026E0D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026E0D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026E0DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026E0E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026E0E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8026E0E8
  c->lr=c->r[0]; // 8026E0EC
  c->r[1]=c->r[1]+0x00000020u; // 8026E0F0
  return; // 8026E0F4
}

// Remove__Q34nw4r3g3d8ScnGroupFPQ34nw4r3g3d6ScnObj
void f_8026E0F8(Ctx* __restrict c) {
  trace_call(0x8026E0F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E0F8
  c->r[0]=c->lr; // 8026E0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E100
  c->r[0]=R32(c->r[3]+0x000000E4u); // 8026E104
  c->r[6]=R32(c->r[3]+0x000000DCu); // 8026E108
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026E10C
  c->r[5]=c->r[6]|c->r[6]; // 8026E110
  c->r[7]=c->r[6]+c->r[0]; // 8026E114
  goto L_8026E120; // 8026E118
L_8026E11C:;
  c->r[5]=c->r[5]+0x00000004u; // 8026E11C
L_8026E120:;
  cmpu(c,0,c->r[5],c->r[7]); // 8026E120
  if (crb(c,2)) { goto L_8026E134; } // 8026E124
  c->r[0]=R32(c->r[5]+0x00000000u); // 8026E128
  cmpu(c,0,c->r[0],c->r[4]); // 8026E12C
  if (!crb(c,2)) { IRQCHK(c); goto L_8026E11C; } // 8026E130
L_8026E134:;
  cmpu(c,0,c->r[5],c->r[7]); // 8026E134
  if (crb(c,2)) { goto L_8026E168; } // 8026E138
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E13C
  c->r[0]=c->r[5]-c->r[6]; // 8026E140
  c->r[0]=sraw(c,c->r[0],2); // 8026E144
  c->r[12]=R32(c->r[12]+0x00000038u); // 8026E148
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8026E14C
  c->ctr=c->r[12]; // 8026E150
  if (true) { c->lr=0x8026E158u; dispatch(c,c->ctr); } // 8026E154
  c->r[0]=0u-c->r[3]; // 8026E158
  c->r[0]=c->r[0]|c->r[3]; // 8026E15C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8026E160
  goto L_8026E16C; // 8026E164
L_8026E168:;
  c->r[3]=0u+0x00000000u; // 8026E168
L_8026E16C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E16C
  c->lr=c->r[0]; // 8026E170
  c->r[1]=c->r[1]+0x00000010u; // 8026E174
  return; // 8026E178
}

// __ct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPPQ34nw4r3g3d6ScnObjUl
void f_8026E17C(Ctx* __restrict c) {
  trace_call(0x8026E17Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E17C
  c->r[0]=c->lr; // 8026E180
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026E184
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026E188
  c->r[31]=c->r[6]|c->r[6]; // 8026E18C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026E190
  c->r[30]=c->r[5]|c->r[5]; // 8026E194
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026E198
  c->r[29]=c->r[3]|c->r[3]; // 8026E19C
  c->lr=0x8026E1A4u; f_8026CC5C(c); // 8026E1A0
  c->r[0]=R32(c->r[29]+0x000000CCu); // 8026E1A4
  c->r[3]=0u+0x80340000u; // 8026E1A8
  c->r[3]=c->r[3]+0x00004D10u; // 8026E1AC
  c->r[4]=0u+0x00000000u; // 8026E1B0
  c->r[0]=c->r[0]|0x60000000u; // 8026E1B4
  W32(c->r[29]+0x00000000u,c->r[3]); // 8026E1B8
  c->r[3]=c->r[29]|c->r[29]; // 8026E1BC
  W32(c->r[29]+0x000000DCu,c->r[30]); // 8026E1C0
  W32(c->r[29]+0x000000E0u,c->r[31]); // 8026E1C4
  W32(c->r[29]+0x000000E4u,c->r[4]); // 8026E1C8
  W32(c->r[29]+0x000000CCu,c->r[0]); // 8026E1CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026E1D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026E1D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026E1D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026E1DC
  c->lr=c->r[0]; // 8026E1E0
  c->r[1]=c->r[1]+0x00000020u; // 8026E1E4
  return; // 8026E1E8
}

// __dt__Q34nw4r3g3d8ScnGroupFv
void f_8026E1EC(Ctx* __restrict c) {
  trace_call(0x8026E1ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E1EC
  c->r[0]=c->lr; // 8026E1F0
  cmps(c,0,(int32_t)c->r[3],0); // 8026E1F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E1F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026E1FC
  c->r[31]=c->r[3]|c->r[3]; // 8026E200
  if (crb(c,2)) { goto L_8026E298; } // 8026E204
  c->r[4]=0u+0x80340000u; // 8026E208
  c->r[4]=c->r[4]+0x00004D10u; // 8026E20C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8026E210
  goto L_8026E238; // 8026E214
L_8026E218:;
  cmps(c,0,(int32_t)c->r[4],0); // 8026E218
  if (crb(c,2)) { goto L_8026E238; } // 8026E21C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026E220
  c->r[3]=c->r[31]|c->r[31]; // 8026E224
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8026E228
  c->r[12]=R32(c->r[12]+0x00000038u); // 8026E22C
  c->ctr=c->r[12]; // 8026E230
  if (true) { c->lr=0x8026E238u; dispatch(c,c->ctr); } // 8026E234
L_8026E238:;
  c->r[4]=R32(c->r[31]+0x000000E4u); // 8026E238
  cmps(c,0,(int32_t)c->r[4],0); // 8026E23C
  if (!crb(c,2)) { IRQCHK(c); goto L_8026E218; } // 8026E240
  cmps(c,0,(int32_t)c->r[31],0); // 8026E244
  if (crb(c,2)) { goto L_8026E298; } // 8026E248
  c->r[3]=R32(c->r[31]+0x000000D4u); // 8026E24C
  c->r[4]=0u+0x80340000u; // 8026E250
  c->r[4]=c->r[4]+0x00004D50u; // 8026E254
  cmps(c,1,(int32_t)c->r[3],0); // 8026E258
  W32(c->r[31]+0x00000000u,c->r[4]); // 8026E25C
  if (crb(c,6)) { goto L_8026E28C; } // 8026E260
  c->r[0]=R8(c->r[31]+0x000000D9u); // 8026E264
  cmps(c,0,(int32_t)c->r[0],1); // 8026E268
  if (crb(c,2)) { goto L_8026E274; } // 8026E26C
  goto L_8026E28C; // 8026E270
L_8026E274:;
  if (crb(c,6)) { goto L_8026E28C; } // 8026E274
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E278
  c->r[4]=0u+0x00000001u; // 8026E27C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8026E280
  c->ctr=c->r[12]; // 8026E284
  if (true) { c->lr=0x8026E28Cu; dispatch(c,c->ctr); } // 8026E288
L_8026E28C:;
  c->r[3]=c->r[31]|c->r[31]; // 8026E28C
  c->r[4]=0u+0x00000000u; // 8026E290
  c->lr=0x8026E298u; f_8025F848(c); // 8026E294
L_8026E298:;
  c->r[3]=c->r[31]|c->r[31]; // 8026E298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026E29C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E2A0
  c->lr=c->r[0]; // 8026E2A4
  c->r[1]=c->r[1]+0x00000010u; // 8026E2A8
  return; // 8026E2AC
}

// fn_8026E2B0
void f_8026E2B0(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8026E2B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026E2B4
  c->r[3]=c->r[3]+0xFFFF86D0u; // 8026E2B8
  cmpu(c,0,c->r[0],c->r[3]); // 8026E2BC
  if (!crb(c,2)) { goto L_8026E2CC; } // 8026E2C0
  c->r[3]=0u+0x00000001u; // 8026E2C4
  return; // 8026E2C8
L_8026E2CC:;
  c->r[3]=0u+0x80310000u; // 8026E2CC
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026E2D0
  c->r[3]=c->r[3]+0xFFFF86B0u; // 8026E2D4
  cmpu(c,0,c->r[0],c->r[3]); // 8026E2D8
  if (!crb(c,2)) { goto L_8026E2E8; } // 8026E2DC
  c->r[3]=0u+0x00000001u; // 8026E2E0
  return; // 8026E2E4
L_8026E2E8:;
  c->r[3]=0u+0x80310000u; // 8026E2E8
  c->r[3]=c->r[3]+0xFFFF8588u; // 8026E2EC
  c->r[0]=c->r[3]-c->r[0]; // 8026E2F0
  c->r[0]=cntlz(c->r[0]); // 8026E2F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026E2F8
  return; // 8026E2FC
}

// fn_8026E300
void f_8026E300(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8026E300
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026E304
  c->r[3]=c->r[3]+0xFFFF86B0u; // 8026E308
  cmpu(c,0,c->r[0],c->r[3]); // 8026E30C
  if (!crb(c,2)) { goto L_8026E31C; } // 8026E310
  c->r[3]=0u+0x00000001u; // 8026E314
  return; // 8026E318
L_8026E31C:;
  c->r[3]=0u+0x80310000u; // 8026E31C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026E320
  c->r[3]=c->r[3]+0xFFFF8588u; // 8026E324
  c->r[0]=c->r[3]-c->r[0]; // 8026E328
  c->r[0]=cntlz(c->r[0]); // 8026E32C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026E330
  return; // 8026E334
}

// fn_8026E338
void f_8026E338(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E338
  c->r[0]=c->lr; // 8026E33C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E340
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E344
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026E348
  c->ctr=c->r[12]; // 8026E34C
  if (true) { c->lr=0x8026E354u; dispatch(c,c->ctr); } // 8026E350
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E354
  c->r[3]=c->r[3]+0x00000004u; // 8026E358
  c->lr=c->r[0]; // 8026E35C
  c->r[1]=c->r[1]+0x00000010u; // 8026E360
  return; // 8026E364
}

// fn_8026E368
void f_8026E368(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8026E368
  c->r[3]=c->r[3]+0xFFFF86D0u; // 8026E36C
  return; // 8026E370
}

// fn_8026E374
void f_8026E374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E374
  c->r[0]=c->lr; // 8026E378
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E37C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E380
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026E384
  c->ctr=c->r[12]; // 8026E388
  if (true) { c->lr=0x8026E390u; dispatch(c,c->ctr); } // 8026E38C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E390
  c->r[3]=c->r[3]+0x00000004u; // 8026E394
  c->lr=c->r[0]; // 8026E398
  c->r[1]=c->r[1]+0x00000010u; // 8026E39C
  return; // 8026E3A0
}

// fn_8026E3A4
void f_8026E3A4(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8026E3A4
  c->r[3]=c->r[3]+0xFFFF86B0u; // 8026E3A8
  return; // 8026E3AC
}

// Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl
void f_8026E3B0(Ctx* __restrict c) {
  trace_call(0x8026E3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E3B0
  c->r[0]=c->lr; // 8026E3B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026E3B8
  c->r[11]=c->r[1]+0x00000040u; // 8026E3BC
  c->lr=0x8026E3C4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026E3C0
  c->r[10]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8026E3C4
  c->r[24]=c->r[5]|c->r[5]; // 8026E3C8
  c->r[10]=c->r[10]+0x000028A7u; // 8026E3CC
  c->r[9]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8026E3D0
  c->r[31]=rotl(c->r[10],0)&0xFFFFFFFCu; // 8026E3D4
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8026E3D8
  c->r[9]=c->r[31]+c->r[9]; // 8026E3DC
  cmps(c,0,(int32_t)c->r[4],0); // 8026E3E0
  c->r[9]=c->r[9]+0x00000003u; // 8026E3E4
  c->r[23]=c->r[3]|c->r[3]; // 8026E3E8
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)68); // 8026E3EC
  c->r[25]=c->r[6]|c->r[6]; // 8026E3F0
  c->r[30]=rotl(c->r[9],0)&0xFFFFFFFCu; // 8026E3F4
  c->r[28]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8026E3F8
  c->r[5]=c->r[30]+c->r[5]; // 8026E3FC
  c->r[26]=c->r[7]|c->r[7]; // 8026E400
  c->r[5]=c->r[5]+0x00000003u; // 8026E404
  c->r[27]=c->r[8]|c->r[8]; // 8026E408
  c->r[29]=rotl(c->r[5],0)&0xFFFFFFFCu; // 8026E40C
  c->r[6]=0u+0x00000000u; // 8026E410
  c->r[5]=c->r[29]+c->r[0]; // 8026E414
  c->r[5]=c->r[5]+0x00000003u; // 8026E418
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 8026E41C
  c->r[22]=rotl(c->r[5],0)&0xFFFFFFFCu; // 8026E420
  c->r[5]=c->r[22]+c->r[0]; // 8026E424
  c->r[0]=c->r[5]+0x00000003u; // 8026E428
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8026E42C
  if (crb(c,2)) { goto L_8026E438; } // 8026E430
  W32(c->r[4]+0x00000000u,c->r[0]); // 8026E434
L_8026E438:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026E438
  if (crb(c,2)) { goto L_8026E4CC; } // 8026E43C
  c->r[3]=c->r[23]|c->r[23]; // 8026E440
  c->r[4]=c->r[0]|c->r[0]; // 8026E444
  c->lr=0x8026E44Cu; f_801A0EF8(c); // 8026E448
  cmps(c,0,(int32_t)c->r[3],0); // 8026E44C
  if (!crb(c,2)) { goto L_8026E45C; } // 8026E450
  c->r[3]=0u+0x00000000u; // 8026E454
  goto L_8026E4D0; // 8026E458
L_8026E45C:;
  c->r[5]=addc(c,c->r[3],0x0000288Cu,0); cr0(c,c->r[5]); // 8026E45C
  c->r[7]=c->r[3]+c->r[31]; // 8026E460
  if (crb(c,2)) { goto L_8026E490; } // 8026E464
  c->r[6]=0u+0x80340000u; // 8026E468
  c->r[4]=c->r[7]+c->r[28]; // 8026E46C
  c->r[6]=c->r[6]+0x00004D88u; // 8026E470
  c->r[0]=0u+0x00000000u; // 8026E474
  W32(c->r[5]+0x00000000u,c->r[6]); // 8026E478
  W32(c->r[5]+0x00000004u,c->r[7]); // 8026E47C
  W32(c->r[5]+0x00000008u,c->r[4]); // 8026E480
  W32(c->r[5]+0x0000000Cu,c->r[25]); // 8026E484
  W32(c->r[5]+0x00000010u,c->r[0]); // 8026E488
  W32(c->r[5]+0x00000014u,c->r[0]); // 8026E48C
L_8026E490:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026E490
  c->r[6]=c->r[3]|c->r[3]; // 8026E494
  c->r[10]=c->r[3]+c->r[30]; // 8026E498
  c->r[0]=c->r[3]+c->r[29]; // 8026E49C
  c->r[7]=c->r[3]+c->r[22]; // 8026E4A0
  if (crb(c,2)) { goto L_8026E4CC; } // 8026E4A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8026E4A8
  c->r[4]=c->r[23]|c->r[23]; // 8026E4AC
  c->r[8]=c->r[26]|c->r[26]; // 8026E4B0
  c->r[9]=c->r[27]|c->r[27]; // 8026E4B4
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8026E4B8
  c->r[7]=c->r[24]|c->r[24]; // 8026E4BC
  c->r[6]=c->r[3]+0x000028A4u; // 8026E4C0
  c->lr=0x8026E4C8u; f_8026EF8C(c); // 8026E4C4
  c->r[6]=c->r[3]|c->r[3]; // 8026E4C8
L_8026E4CC:;
  c->r[3]=c->r[6]|c->r[6]; // 8026E4CC
L_8026E4D0:;
  c->r[11]=c->r[1]+0x00000040u; // 8026E4D0
  c->lr=0x8026E4D8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026E4D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8026E4D8
  c->lr=c->r[0]; // 8026E4DC
  c->r[1]=c->r[1]+0x00000040u; // 8026E4E0
  return; // 8026E4E4
}

// G3dProc__Q34nw4r3g3d7ScnRootFUlUlPv
void f_8026E4E8(Ctx* __restrict c) {
  trace_call(0x8026E4E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E4E8
  c->r[0]=c->lr; // 8026E4EC
  cmpu(c,0,c->r[4],0x00000009u); // 8026E4F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E4F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026E4F8
  c->r[31]=c->r[3]|c->r[3]; // 8026E4FC
  if (!crb(c,0)) { goto L_8026E524; } // 8026E500
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 8026E504
  c->r[8]=0u+0x00000001u; // 8026E508
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8026E50C
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 8026E510
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 8026E514
  if (crb(c,2)) { goto L_8026E524; } // 8026E518
  c->r[0]=0u+0x00000001u; // 8026E51C
  goto L_8026E528; // 8026E520
L_8026E524:;
  c->r[0]=0u+0x00000000u; // 8026E524
L_8026E528:;
  cmps(c,0,(int32_t)c->r[0],0); // 8026E528
  if (!crb(c,2)) { goto L_8026E580; } // 8026E52C
  c->r[7]=0u+0x00010000u; // 8026E530
  c->r[0]=c->r[7]+0x00000001u; // 8026E534
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8026E538
  if (crb(c,2)) { goto L_8026E544; } // 8026E53C
  goto L_8026E578; // 8026E540
L_8026E544:;
  c->r[3]=R32(c->r[3]+0x00002888u); // 8026E544
  cmpu(c,0,c->r[3],c->r[6]); // 8026E548
  if (!crb(c,2)) { goto L_8026E578; } // 8026E54C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E550
  c->r[6]=c->r[31]|c->r[31]; // 8026E554
  c->r[4]=c->r[7]+0x00000003u; // 8026E558
  c->r[5]=0u+0x00000000u; // 8026E55C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026E560
  c->ctr=c->r[12]; // 8026E564
  if (true) { c->lr=0x8026E56Cu; dispatch(c,c->ctr); } // 8026E568
  c->r[0]=0u+0x00000000u; // 8026E56C
  W32(c->r[31]+0x00002888u,c->r[0]); // 8026E570
  goto L_8026E580; // 8026E574
L_8026E578:;
  c->r[3]=c->r[31]|c->r[31]; // 8026E578
  c->lr=0x8026E580u; f_8026DA54(c); // 8026E57C
L_8026E580:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026E584
  c->lr=c->r[0]; // 8026E588
  c->r[1]=c->r[1]+0x00000010u; // 8026E58C
  return; // 8026E590
}

// fn_8026E594
void f_8026E594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E594
  c->r[0]=c->lr; // 8026E598
  cmps(c,0,(int32_t)c->r[4],0); // 8026E59C
  c->r[5]=c->r[3]|c->r[3]; // 8026E5A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E5A4
  if (crb(c,0)) { goto L_8026E5D0; } // 8026E5A8
  cmps(c,0,(int32_t)c->r[4],32); // 8026E5AC
  if (!crb(c,0)) { goto L_8026E5D0; } // 8026E5B0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)268); // 8026E5B4
  c->r[3]=c->r[1]+0x0000000Cu; // 8026E5B8
  c->r[4]=c->r[5]+c->r[0]; // 8026E5BC
  c->r[4]=c->r[4]+0x000000F8u; // 8026E5C0
  c->lr=0x8026E5C8u; f_80269488(c); // 8026E5C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8026E5C8
  goto L_8026E5E0; // 8026E5CC
L_8026E5D0:;
  c->r[3]=c->r[1]+0x00000008u; // 8026E5D0
  c->r[4]=0u+0x00000000u; // 8026E5D4
  c->lr=0x8026E5DCu; f_80269488(c); // 8026E5D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8026E5DC
L_8026E5E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E5E0
  c->lr=c->r[0]; // 8026E5E4
  c->r[1]=c->r[1]+0x00000010u; // 8026E5E8
  return; // 8026E5EC
}

// GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
void f_8026E5F0(Ctx* __restrict c) {
  trace_call(0x8026E5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E5F0
  c->r[0]=c->lr; // 8026E5F4
  c->r[4]=c->r[3]|c->r[3]; // 8026E5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E5FC
  c->r[3]=c->r[1]+0x00000008u; // 8026E600
  c->r[0]=R8(c->r[4]+0x000000F4u); // 8026E604
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 8026E608
  c->r[4]=c->r[4]+c->r[0]; // 8026E60C
  c->r[4]=c->r[4]+0x000000F8u; // 8026E610
  c->lr=0x8026E618u; f_80269488(c); // 8026E614
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E618
  c->r[3]=R32(c->r[3]+0x00000000u); // 8026E61C
  c->lr=c->r[0]; // 8026E620
  c->r[1]=c->r[1]+0x00000010u; // 8026E624
  return; // 8026E628
}

// SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
void f_8026E62C(Ctx* __restrict c) {
  trace_call(0x8026E62Cu);
  W8(c->r[3]+0x000000F4u,c->r[4]); // 8026E62C
  return; // 8026E630
}

// fn_8026E634
void f_8026E634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E634
  c->r[0]=c->lr; // 8026E638
  cmps(c,0,(int32_t)c->r[4],0); // 8026E63C
  c->r[5]=c->r[3]|c->r[3]; // 8026E640
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E644
  if (crb(c,0)) { goto L_8026E670; } // 8026E648
  cmps(c,0,(int32_t)c->r[4],32); // 8026E64C
  if (!crb(c,0)) { goto L_8026E670; } // 8026E650
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 8026E654
  c->r[3]=c->r[1]+0x0000000Cu; // 8026E658
  c->r[4]=c->r[5]+c->r[0]; // 8026E65C
  c->r[4]=c->r[4]+0x00002278u; // 8026E660
  c->lr=0x8026E668u; f_80276BD8(c); // 8026E664
  c->r[3]=R32(c->r[3]+0x00000000u); // 8026E668
  goto L_8026E680; // 8026E66C
L_8026E670:;
  c->r[3]=c->r[1]+0x00000008u; // 8026E670
  c->r[4]=0u+0x00000000u; // 8026E674
  c->lr=0x8026E67Cu; f_80276BD8(c); // 8026E678
  c->r[3]=R32(c->r[3]+0x00000000u); // 8026E67C
L_8026E680:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E680
  c->lr=c->r[0]; // 8026E684
  c->r[1]=c->r[1]+0x00000010u; // 8026E688
  return; // 8026E68C
}

// SetAnmScn__Q34nw4r3g3d7ScnRootFPQ34nw4r3g3d6AnmScn
void f_8026E690(Ctx* __restrict c) {
  trace_call(0x8026E690u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E690
  c->r[0]=c->lr; // 8026E694
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026E69C
  c->r[31]=c->r[4]|c->r[4]; // 8026E6A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026E6A4
  c->r[30]=c->r[3]|c->r[3]; // 8026E6A8
  c->r[0]=R32(c->r[3]+0x00002888u); // 8026E6AC
  cmps(c,0,(int32_t)c->r[0],0); // 8026E6B0
  if (crb(c,2)) { goto L_8026E6E8; } // 8026E6B4
  if (crb(c,2)) { goto L_8026E6E8; } // 8026E6B8
  c->r[3]=c->r[0]|c->r[0]; // 8026E6BC
  c->r[4]=0u+0x00010000u; // 8026E6C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E6C4
  c->r[6]=c->r[30]|c->r[30]; // 8026E6C8
  c->r[4]=c->r[4]+0x00000003u; // 8026E6CC
  c->r[5]=0u+0x00000000u; // 8026E6D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026E6D4
  c->ctr=c->r[12]; // 8026E6D8
  if (true) { c->lr=0x8026E6E0u; dispatch(c,c->ctr); } // 8026E6DC
  c->r[0]=0u+0x00000000u; // 8026E6E0
  W32(c->r[30]+0x00002888u,c->r[0]); // 8026E6E4
L_8026E6E8:;
  W32(c->r[30]+0x00002888u,c->r[31]); // 8026E6E8
  c->r[4]=0u+0x00010000u; // 8026E6EC
  c->r[3]=c->r[31]|c->r[31]; // 8026E6F0
  c->r[6]=c->r[30]|c->r[30]; // 8026E6F4
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026E6F8
  c->r[4]=c->r[4]+0x00000002u; // 8026E6FC
  c->r[5]=0u+0x00000000u; // 8026E700
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026E704
  c->ctr=c->r[12]; // 8026E708
  if (true) { c->lr=0x8026E710u; dispatch(c,c->ctr); } // 8026E70C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026E710
  c->r[3]=0u+0x00000001u; // 8026E714
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026E718
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E71C
  c->lr=c->r[0]; // 8026E720
  c->r[1]=c->r[1]+0x00000010u; // 8026E724
  return; // 8026E728
}

// RemoveAnmScn__Q34nw4r3g3d7ScnRootFv
void f_8026E72C(Ctx* __restrict c) {
  trace_call(0x8026E72Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E72C
  c->r[0]=c->lr; // 8026E730
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E734
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026E738
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026E73C
  c->r[30]=c->r[3]|c->r[3]; // 8026E740
  c->r[31]=R32(c->r[3]+0x00002888u); // 8026E744
  cmps(c,0,(int32_t)c->r[31],0); // 8026E748
  if (crb(c,2)) { goto L_8026E77C; } // 8026E74C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026E750
  c->r[4]=0u+0x00010000u; // 8026E754
  c->r[3]=c->r[31]|c->r[31]; // 8026E758
  c->r[6]=c->r[30]|c->r[30]; // 8026E75C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026E760
  c->r[4]=c->r[4]+0x00000003u; // 8026E764
  c->r[5]=0u+0x00000000u; // 8026E768
  c->ctr=c->r[12]; // 8026E76C
  if (true) { c->lr=0x8026E774u; dispatch(c,c->ctr); } // 8026E770
  c->r[0]=0u+0x00000000u; // 8026E774
  W32(c->r[30]+0x00002888u,c->r[0]); // 8026E778
L_8026E77C:;
  c->r[3]=c->r[31]|c->r[31]; // 8026E77C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026E780
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026E784
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E788
  c->lr=c->r[0]; // 8026E78C
  c->r[1]=c->r[1]+0x00000010u; // 8026E790
  return; // 8026E794
}

// UpdateFrame__Q34nw4r3g3d7ScnRootFv
void f_8026E798(Ctx* __restrict c) {
  trace_call(0x8026E798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E798
  c->r[0]=c->lr; // 8026E79C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E7A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026E7A4
  c->r[31]=c->r[3]|c->r[3]; // 8026E7A8
  c->r[0]=R32(c->r[3]+0x00002888u); // 8026E7AC
  cmps(c,0,(int32_t)c->r[0],0); // 8026E7B0
  if (crb(c,2)) { goto L_8026E7CC; } // 8026E7B4
  c->r[3]=c->r[0]|c->r[0]; // 8026E7B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026E7BC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8026E7C0
  c->ctr=c->r[12]; // 8026E7C4
  if (true) { c->lr=0x8026E7CCu; dispatch(c,c->ctr); } // 8026E7C8
L_8026E7CC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026E7CC
  c->r[3]=c->r[31]|c->r[31]; // 8026E7D0
  c->r[4]=0u+0x00000008u; // 8026E7D4
  c->r[5]=0u+0x00000000u; // 8026E7D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026E7DC
  c->r[6]=0u+0x00000000u; // 8026E7E0
  c->ctr=c->r[12]; // 8026E7E4
  if (true) { c->lr=0x8026E7ECu; dispatch(c,c->ctr); } // 8026E7E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026E7EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026E7F0
  c->lr=c->r[0]; // 8026E7F4
  c->r[1]=c->r[1]+0x00000010u; // 8026E7F8
  return; // 8026E7FC
}

// SetGlbSettings__Q34nw4r3g3d7ScnRootFv
void f_8026E800(Ctx* __restrict c) {
  trace_call(0x8026E800u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026E800
  c->r[0]=c->lr; // 8026E804
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8026E808
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 8026E80C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 8026E810
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 8026E814
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 8026E818
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 8026E81C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 8026E820
  c->r[11]=c->r[1]+0x00000090u; // 8026E824
  c->lr=0x8026E82Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026E828
  c->r[28]=c->r[3]|c->r[3]; // 8026E82C
  c->r[3]=c->r[1]+0x00000010u; // 8026E830
  c->r[0]=R8(c->r[28]+0x000000F4u); // 8026E834
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 8026E838
  c->r[4]=c->r[28]+c->r[0]; // 8026E83C
  c->r[4]=c->r[4]+0x000000F8u; // 8026E840
  c->lr=0x8026E848u; f_80269488(c); // 8026E844
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026E848
  c->r[3]=c->r[1]+0x00000028u; // 8026E84C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8026E850
  c->lr=0x8026E858u; f_8026A01C(c); // 8026E854
  c->r[3]=c->r[1]+0x00000028u; // 8026E858
  c->lr=0x8026E860u; f_8026A0A0(c); // 8026E85C
  c->r[3]=c->r[1]+0x00000028u; // 8026E860
  c->lr=0x8026E868u; f_8026A168(c); // 8026E864
  c->r[3]=c->r[1]+0x00000028u; // 8026E868
  c->lr=0x8026E870u; f_8026A18C(c); // 8026E86C
  c->r[27]=c->r[28]+0x000000F8u; // 8026E870
  c->r[26]=0u+0x00000000u; // 8026E874
L_8026E878:;
  c->r[4]=c->r[27]|c->r[27]; // 8026E878
  c->r[3]=c->r[1]+0x00000018u; // 8026E87C
  c->lr=0x8026E884u; f_80269488(c); // 8026E880
  c->r[0]=R8(c->r[28]+0x000000F4u); // 8026E884
  c->r[4]=c->r[26]|c->r[26]; // 8026E888
  c->r[0]=c->r[0]-c->r[26]; // 8026E88C
  c->r[0]=cntlz(c->r[0]); // 8026E890
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026E894
  c->lr=0x8026E89Cu; f_80262FB4(c); // 8026E898
  c->r[26]=c->r[26]+0x00000001u; // 8026E89C
  c->r[27]=c->r[27]+0x0000010Cu; // 8026E8A0
  cmps(c,0,(int32_t)c->r[26],32); // 8026E8A4
  if (crb(c,0)) { IRQCHK(c); goto L_8026E878; } // 8026E8A8
  c->r[5]=R32(c->r[1]+0x00000028u); // 8026E8AC
  c->r[0]=0u+0x00000008u; // 8026E8B0
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8026E8B4
  c->r[27]=c->r[28]+0x00002278u; // 8026E8B8
  c->r[3]=R32(c->r[5]+0x000000A8u); // 8026E8BC
  c->r[31]=0u+0x00000000u; // 8026E8C0
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 8026E8C4
  c->r[30]=0u+0x00000000u; // 8026E8C8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8026E8CC
  c->r[3]=addc(c,~c->r[3],0x00000001u,1); // 8026E8D0
  c->r[3]=c->r[4]|c->r[3]; // 8026E8D4
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[29]=c->ps1[29]=RF32(ea);} // 8026E8D8
  c->r[3]=sraw(c,c->r[3],31); // 8026E8DC
  c->r[29]=0u+0x00000000u; // 8026E8E0
  c->r[25]=c->r[0]&~c->r[3]; // 8026E8E4
  c->r[26]=0u+0x00000000u; // 8026E8E8
L_8026E8EC:;
  c->r[4]=c->r[27]|c->r[27]; // 8026E8EC
  c->r[3]=c->r[1]+0x00000024u; // 8026E8F0
  c->lr=0x8026E8F8u; f_80276BD8(c); // 8026E8F4
  c->r[4]=R32(c->r[1]+0x00000024u); // 8026E8F8
  cmps(c,0,(int32_t)c->r[4],0); // 8026E8FC
  if (crb(c,2)) { goto L_8026E910; } // 8026E900
  c->r[3]=R32(c->r[1]+0x00000024u); // 8026E904
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 8026E908
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[29]);} // 8026E90C
L_8026E910:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8026E910
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026E914
  cmps(c,0,(int32_t)c->r[0],0); // 8026E918
  if (crb(c,2)) { goto L_8026E92C; } // 8026E91C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8026E920
  c->r[0]=c->r[25]|c->r[0]; // 8026E924
  W32(c->r[3]+0x00000000u,c->r[0]); // 8026E928
L_8026E92C:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 8026E92C
  c->r[3]=0u+0x00000000u; // 8026E930
  cmps(c,0,(int32_t)c->r[4],0); // 8026E934
  if (crb(c,2)) { goto L_8026E94C; } // 8026E938
  c->r[0]=R8(c->r[4]+0x00000018u); // 8026E93C
  cmpu(c,0,c->r[0],0x00000001u); // 8026E940
  if (!crb(c,2)) { goto L_8026E94C; } // 8026E944
  c->r[3]=0u+0x00000001u; // 8026E948
L_8026E94C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026E94C
  if (crb(c,2)) { goto L_8026E9C4; } // 8026E950
  cmps(c,0,(int32_t)c->r[29],0); // 8026E954
  if (!crb(c,2)) { goto L_8026E9B0; } // 8026E958
  c->r[3]=c->r[1]+0x00000028u; // 8026E95C
  c->r[4]=c->r[1]+0x00000030u; // 8026E960
  c->lr=0x8026E968u; f_80269DF0(c); // 8026E964
  c->r[3]=c->r[1]+0x00000028u; // 8026E968
  c->r[4]=c->r[1]+0x0000001Cu; // 8026E96C
  c->r[6]=c->r[1]+0x00000020u; // 8026E970
  c->r[5]=0u+0x00000000u; // 8026E974
  c->r[7]=0u+0x00000000u; // 8026E978
  c->r[8]=0u+0x00000000u; // 8026E97C
  c->r[9]=0u+0x00000000u; // 8026E980
  c->lr=0x8026E988u; f_80269B44(c); // 8026E984
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026E988
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 8026E98C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026E990
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026E994
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8026E998
  c->r[31]=R16(c->r[1]+0x0000000Cu); // 8026E99C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8026E9A0
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,3);} // 8026E9A4
  c->r[29]=0u+0x00000001u; // 8026E9A8
  c->r[30]=R16(c->r[1]+0x00000008u); // 8026E9AC
L_8026E9B0:;
  c->r[4]=c->r[31]|c->r[31]; // 8026E9B0
  c->r[5]=c->r[30]|c->r[30]; // 8026E9B4
  c->r[3]=c->r[1]+0x00000024u; // 8026E9B8
  c->r[6]=c->r[1]+0x00000030u; // 8026E9BC
  c->lr=0x8026E9C4u; f_80276CA4(c); // 8026E9C0
L_8026E9C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026E9C4
  c->r[4]=c->r[26]|c->r[26]; // 8026E9C8
  c->r[3]=c->r[1]+0x00000014u; // 8026E9CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026E9D0
  c->lr=0x8026E9D8u; f_80262DB4(c); // 8026E9D4
  c->r[26]=c->r[26]+0x00000001u; // 8026E9D8
  c->r[27]=c->r[27]+0x00000030u; // 8026E9DC
  cmps(c,0,(int32_t)c->r[26],32); // 8026E9E0
  if (crb(c,0)) { IRQCHK(c); goto L_8026E8EC; } // 8026E9E4
  c->r[3]=c->r[28]+0x00002878u; // 8026E9E8
  c->lr=0x8026E9F0u; f_80262F18(c); // 8026E9EC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 8026E9F0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 8026E9F4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 8026E9F8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 8026E9FC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 8026EA00
  c->r[11]=c->r[1]+0x00000090u; // 8026EA04
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 8026EA08
  c->lr=0x8026EA10u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026EA0C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8026EA10
  c->lr=c->r[0]; // 8026EA14
  c->r[1]=c->r[1]+0x000000C0u; // 8026EA18
  return; // 8026EA1C
}

// CalcAnmScn__Q34nw4r3g3d7ScnRootFv
void f_8026EA20(Ctx* __restrict c) {
  trace_call(0x8026EA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026EA20
  c->r[0]=c->lr; // 8026EA24
  W32(c->r[1]+0x00000034u,c->r[0]); // 8026EA28
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8026EA2C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8026EA30
  W32(c->r[1]+0x00000024u,c->r[29]); // 8026EA34
  W32(c->r[1]+0x00000020u,c->r[28]); // 8026EA38
  c->r[28]=c->r[3]|c->r[3]; // 8026EA3C
  c->r[0]=R32(c->r[3]+0x00002888u); // 8026EA40
  cmps(c,0,(int32_t)c->r[0],0); // 8026EA44
  if (crb(c,2)) { goto L_8026EB88; } // 8026EA48
  c->r[3]=c->r[0]|c->r[0]; // 8026EA4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EA50
  c->r[12]=R32(c->r[12]+0x00000050u); // 8026EA54
  c->ctr=c->r[12]; // 8026EA58
  if (true) { c->lr=0x8026EA60u; dispatch(c,c->ctr); } // 8026EA5C
  c->r[31]=c->r[3]|c->r[3]; // 8026EA60
  c->r[3]=R32(c->r[28]+0x00002888u); // 8026EA64
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EA68
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8026EA6C
  c->ctr=c->r[12]; // 8026EA70
  if (true) { c->lr=0x8026EA78u; dispatch(c,c->ctr); } // 8026EA74
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8026EA78
  c->r[3]=R32(c->r[28]+0x00002888u); // 8026EA7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EA80
  c->r[12]=R32(c->r[12]+0x00000060u); // 8026EA84
  c->ctr=c->r[12]; // 8026EA88
  if (true) { c->lr=0x8026EA90u; dispatch(c,c->ctr); } // 8026EA8C
  cmps(c,0,(int32_t)c->r[31],0); // 8026EA90
  W32(c->r[1]+0x00000018u,c->r[3]); // 8026EA94
  if (crb(c,2)) { goto L_8026EAA8; } // 8026EA98
  c->r[3]=R32(c->r[28]+0x00002888u); // 8026EA9C
  c->r[4]=c->r[28]+0x00002878u; // 8026EAA0
  c->lr=0x8026EAA8u; f_8025E59C(c); // 8026EAA4
L_8026EAA8:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8026EAA8
  cmps(c,0,(int32_t)c->r[4],0); // 8026EAAC
  if (crb(c,2)) { goto L_8026EB18; } // 8026EAB0
  c->r[0]=R32(c->r[13]+0xFFFF9738u); // 8026EAB4
  c->r[3]=c->r[13]+0xFFFF9738u; // 8026EAB8
  cmpu(c,0,c->r[4],c->r[0]); // 8026EABC
  if (!crb(c,0)) { goto L_8026EAC8; } // 8026EAC0
  c->r[3]=c->r[1]+0x0000001Cu; // 8026EAC4
L_8026EAC8:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 8026EAC8
  c->r[31]=c->r[28]+0x00002278u; // 8026EACC
  c->r[29]=0u+0x00000000u; // 8026EAD0
  goto L_8026EB10; // 8026EAD4
L_8026EAD8:;
  c->r[4]=c->r[31]|c->r[31]; // 8026EAD8
  c->r[3]=c->r[1]+0x00000014u; // 8026EADC
  c->lr=0x8026EAE4u; f_80276BD8(c); // 8026EAE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026EAE4
  c->r[5]=c->r[29]|c->r[29]; // 8026EAE8
  c->r[4]=c->r[1]+0x0000000Cu; // 8026EAEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8026EAF0
  c->r[3]=R32(c->r[28]+0x00002888u); // 8026EAF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EAF8
  c->r[12]=R32(c->r[12]+0x00000070u); // 8026EAFC
  c->ctr=c->r[12]; // 8026EB00
  if (true) { c->lr=0x8026EB08u; dispatch(c,c->ctr); } // 8026EB04
  c->r[31]=c->r[31]+0x00000030u; // 8026EB08
  c->r[29]=c->r[29]+0x00000001u; // 8026EB0C
L_8026EB10:;
  cmpu(c,0,c->r[29],c->r[30]); // 8026EB10
  if (crb(c,0)) { IRQCHK(c); goto L_8026EAD8; } // 8026EB14
L_8026EB18:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 8026EB18
  cmps(c,0,(int32_t)c->r[4],0); // 8026EB1C
  if (crb(c,2)) { goto L_8026EB88; } // 8026EB20
  c->r[0]=R32(c->r[13]+0xFFFF973Cu); // 8026EB24
  c->r[3]=c->r[13]+0xFFFF973Cu; // 8026EB28
  cmpu(c,0,c->r[4],c->r[0]); // 8026EB2C
  if (!crb(c,0)) { goto L_8026EB38; } // 8026EB30
  c->r[3]=c->r[1]+0x00000018u; // 8026EB34
L_8026EB38:;
  c->r[29]=R32(c->r[3]+0x00000000u); // 8026EB38
  c->r[31]=c->r[28]+0x000000F8u; // 8026EB3C
  c->r[30]=0u+0x00000000u; // 8026EB40
  goto L_8026EB80; // 8026EB44
L_8026EB48:;
  c->r[4]=c->r[31]|c->r[31]; // 8026EB48
  c->r[3]=c->r[1]+0x00000010u; // 8026EB4C
  c->lr=0x8026EB54u; f_80269488(c); // 8026EB50
  c->r[0]=R32(c->r[1]+0x00000010u); // 8026EB54
  c->r[5]=c->r[30]|c->r[30]; // 8026EB58
  c->r[4]=c->r[1]+0x00000008u; // 8026EB5C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8026EB60
  c->r[3]=R32(c->r[28]+0x00002888u); // 8026EB64
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EB68
  c->r[12]=R32(c->r[12]+0x00000074u); // 8026EB6C
  c->ctr=c->r[12]; // 8026EB70
  if (true) { c->lr=0x8026EB78u; dispatch(c,c->ctr); } // 8026EB74
  c->r[31]=c->r[31]+0x0000010Cu; // 8026EB78
  c->r[30]=c->r[30]+0x00000001u; // 8026EB7C
L_8026EB80:;
  cmpu(c,0,c->r[30],c->r[29]); // 8026EB80
  if (crb(c,0)) { IRQCHK(c); goto L_8026EB48; } // 8026EB84
L_8026EB88:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026EB88
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8026EB8C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8026EB90
  c->r[29]=R32(c->r[1]+0x00000024u); // 8026EB94
  c->r[28]=R32(c->r[1]+0x00000020u); // 8026EB98
  c->lr=c->r[0]; // 8026EB9C
  c->r[1]=c->r[1]+0x00000030u; // 8026EBA0
  return; // 8026EBA4
}

// CalcWorld__Q34nw4r3g3d7ScnRootFv
void f_8026EBA8(Ctx* __restrict c) {
  trace_call(0x8026EBA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026EBA8
  c->r[0]=c->lr; // 8026EBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026EBB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026EBB4
  c->r[31]=c->r[3]|c->r[3]; // 8026EBB8
  c->lr=0x8026EBC0u; f_8026EA20(c); // 8026EBBC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026EBC0
  c->r[3]=c->r[31]|c->r[31]; // 8026EBC4
  c->r[4]=0u+0x00000001u; // 8026EBC8
  c->r[5]=0u+0x00000000u; // 8026EBCC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026EBD0
  c->r[6]=0u+0x00000000u; // 8026EBD4
  c->ctr=c->r[12]; // 8026EBD8
  if (true) { c->lr=0x8026EBE0u; dispatch(c,c->ctr); } // 8026EBDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026EBE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026EBE4
  c->lr=c->r[0]; // 8026EBE8
  c->r[1]=c->r[1]+0x00000010u; // 8026EBEC
  return; // 8026EBF0
}

// fn_8026EBF4
void f_8026EBF4(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EBF4
  c->r[4]=0u+0x00000002u; // 8026EBF8
  c->r[5]=0u+0x00000000u; // 8026EBFC
  c->r[6]=0u+0x00000000u; // 8026EC00
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026EC04
  c->ctr=c->r[12]; // 8026EC08
  if (true) { dispatch(c,c->ctr); return; } // 8026EC0C
}

// fn_8026EC10
void f_8026EC10(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EC10
  c->r[4]=0u+0x00000003u; // 8026EC14
  c->r[5]=0u+0x00000000u; // 8026EC18
  c->r[6]=0u+0x00000000u; // 8026EC1C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026EC20
  c->ctr=c->r[12]; // 8026EC24
  if (true) { dispatch(c,c->ctr); return; } // 8026EC28
}

// CalcView__Q34nw4r3g3d7ScnRootFv
void f_8026EC2C(Ctx* __restrict c) {
  trace_call(0x8026EC2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026EC2C
  c->r[0]=c->lr; // 8026EC30
  W32(c->r[1]+0x00000054u,c->r[0]); // 8026EC34
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8026EC38
  c->r[31]=c->r[3]|c->r[3]; // 8026EC3C
  c->lr=0x8026EC44u; f_8017FFCC(c); // 8026EC40
  c->r[0]=R8(c->r[31]+0x000000F4u); // 8026EC44
  c->r[3]=c->r[1]+0x00000008u; // 8026EC48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 8026EC4C
  c->r[4]=c->r[31]+c->r[0]; // 8026EC50
  c->r[4]=c->r[4]+0x000000F8u; // 8026EC54
  c->lr=0x8026EC5Cu; f_80269488(c); // 8026EC58
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026EC5C
  c->r[3]=c->r[1]+0x0000000Cu; // 8026EC60
  c->r[4]=c->r[1]+0x00000010u; // 8026EC64
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8026EC68
  c->lr=0x8026EC70u; f_80269D90(c); // 8026EC6C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026EC70
  c->r[3]=c->r[31]|c->r[31]; // 8026EC74
  c->r[6]=c->r[1]+0x00000010u; // 8026EC78
  c->r[4]=0u+0x00000004u; // 8026EC7C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026EC80
  c->r[5]=0u+0x00000000u; // 8026EC84
  c->ctr=c->r[12]; // 8026EC88
  if (true) { c->lr=0x8026EC90u; dispatch(c,c->ctr); } // 8026EC8C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8026EC90
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8026EC94
  c->lr=c->r[0]; // 8026EC98
  c->r[1]=c->r[1]+0x00000050u; // 8026EC9C
  return; // 8026ECA0
}

// GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
void f_8026ECA4(Ctx* __restrict c) {
  trace_call(0x8026ECA4u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026ECA4
  c->r[0]=c->lr; // 8026ECA8
  W32(c->r[1]+0x00000144u,c->r[0]); // 8026ECAC
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 8026ECB0
  c->r[31]=c->r[3]|c->r[3]; // 8026ECB4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8026ECB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026ECBC
  c->r[12]=R32(c->r[12]+0x00000010u); // 8026ECC0
  c->ctr=c->r[12]; // 8026ECC4
  if (true) { c->lr=0x8026ECCCu; dispatch(c,c->ctr); } // 8026ECC8
  c->r[0]=R8(c->r[31]+0x000000F4u); // 8026ECCC
  c->r[3]=c->r[1]+0x00000008u; // 8026ECD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 8026ECD4
  c->r[4]=c->r[31]+c->r[0]; // 8026ECD8
  c->r[4]=c->r[4]+0x000000F8u; // 8026ECDC
  c->lr=0x8026ECE4u; f_80269488(c); // 8026ECE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8026ECE4
  c->r[3]=c->r[1]+0x0000000Cu; // 8026ECE8
  c->r[4]=c->r[1]+0x00000010u; // 8026ECEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8026ECF0
  c->lr=0x8026ECF8u; f_80269D90(c); // 8026ECF4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8026ECF8
  c->r[0]=R32(c->r[5]+0x00000070u); // 8026ECFC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8026ED00
  if (crb(c,2)) { goto L_8026ED28; } // 8026ED04
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026ED08
  c->r[3]=c->r[1]+0x00000040u; // 8026ED0C
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026ED10
  c->r[4]=c->r[1]+0x00000010u; // 8026ED14
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026ED18
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026ED1C
  c->lr=0x8026ED24u; f_80285220(c); // 8026ED20
  goto L_8026ED4C; // 8026ED24
L_8026ED28:;
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8026ED28
  c->r[3]=c->r[1]+0x00000040u; // 8026ED2C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8026ED30
  c->r[4]=c->r[1]+0x00000010u; // 8026ED34
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8026ED38
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8026ED3C
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026ED40
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 8026ED44
  c->lr=0x8026ED4Cu; f_802852D4(c); // 8026ED48
L_8026ED4C:;
  c->r[0]=c->r[1]+0x00000040u; // 8026ED4C
  c->r[3]=c->r[31]|c->r[31]; // 8026ED50
  W32(c->r[13]+0xFFFFA410u,c->r[0]); // 8026ED54
  c->r[4]=0u+0x00000005u; // 8026ED58
  c->r[5]=0u+0x00000000u; // 8026ED5C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026ED60
  c->r[6]=R32(c->r[31]+0x000000E8u); // 8026ED64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026ED68
  c->ctr=c->r[12]; // 8026ED6C
  if (true) { c->lr=0x8026ED74u; dispatch(c,c->ctr); } // 8026ED70
  c->r[0]=0u+0x00000000u; // 8026ED74
  W32(c->r[13]+0xFFFFA410u,c->r[0]); // 8026ED78
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 8026ED7C
  c->r[0]=R32(c->r[1]+0x00000144u); // 8026ED80
  c->lr=c->r[0]; // 8026ED84
  c->r[1]=c->r[1]+0x00000140u; // 8026ED88
  return; // 8026ED8C
}

// ZSort__Q34nw4r3g3d7ScnRootFv
void f_8026ED90(Ctx* __restrict c) {
  trace_call(0x8026ED90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026ED90
  c->r[0]=c->lr; // 8026ED94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026ED98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026ED9C
  c->r[31]=c->r[3]|c->r[3]; // 8026EDA0
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8026EDA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EDA8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026EDAC
  c->ctr=c->r[12]; // 8026EDB0
  if (true) { c->lr=0x8026EDB8u; dispatch(c,c->ctr); } // 8026EDB4
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026EDB8
  c->r[4]=0u+0x00010000u; // 8026EDBC
  c->r[3]=c->r[31]|c->r[31]; // 8026EDC0
  c->r[6]=R32(c->r[31]+0x000000E8u); // 8026EDC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026EDC8
  c->r[4]=c->r[4]+0x00000004u; // 8026EDCC
  c->r[5]=0u+0x00000000u; // 8026EDD0
  c->ctr=c->r[12]; // 8026EDD4
  if (true) { c->lr=0x8026EDDCu; dispatch(c,c->ctr); } // 8026EDD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026EDDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026EDE0
  c->lr=c->r[0]; // 8026EDE4
  c->r[1]=c->r[1]+0x00000010u; // 8026EDE8
  return; // 8026EDEC
}

// fn_8026EDF0
void f_8026EDF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026EDF0
  c->r[0]=c->lr; // 8026EDF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8026EDF8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8026EDFC
  c->r[31]=c->r[5]|c->r[5]; // 8026EE00
  W32(c->r[1]+0x00000028u,c->r[30]); // 8026EE04
  c->r[30]=c->r[4]|c->r[4]; // 8026EE08
  W32(c->r[1]+0x00000024u,c->r[29]); // 8026EE0C
  c->r[29]=c->r[3]|c->r[3]; // 8026EE10
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8026EE14
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EE18
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8026EE1C
  c->ctr=c->r[12]; // 8026EE20
  if (true) { c->lr=0x8026EE28u; dispatch(c,c->ctr); } // 8026EE24
  c->r[0]=R32(c->r[29]+0x000000E8u); // 8026EE28
  c->r[4]=0u+0x00010000u; // 8026EE2C
  c->r[3]=c->r[29]|c->r[29]; // 8026EE30
  c->r[6]=c->r[1]+0x00000008u; // 8026EE34
  W32(c->r[1]+0x00000008u,c->r[0]); // 8026EE38
  c->r[4]=c->r[4]+0x00000004u; // 8026EE3C
  c->r[5]=0u+0x00000002u; // 8026EE40
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8026EE44
  W32(c->r[1]+0x00000010u,c->r[31]); // 8026EE48
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026EE4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026EE50
  c->ctr=c->r[12]; // 8026EE54
  if (true) { c->lr=0x8026EE5Cu; dispatch(c,c->ctr); } // 8026EE58
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026EE5C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8026EE60
  c->r[30]=R32(c->r[1]+0x00000028u); // 8026EE64
  c->r[29]=R32(c->r[1]+0x00000024u); // 8026EE68
  c->lr=c->r[0]; // 8026EE6C
  c->r[1]=c->r[1]+0x00000030u; // 8026EE70
  return; // 8026EE74
}

// fn_8026EE78
void f_8026EE78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026EE78
  c->r[0]=c->lr; // 8026EE7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026EE80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026EE84
  c->r[31]=c->r[3]|c->r[3]; // 8026EE88
  c->lr=0x8026EE90u; f_8026E800(c); // 8026EE8C
  c->r[0]=R32(c->r[31]+0x000000F0u); // 8026EE90
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026EE94
  if (crb(c,2)) { goto L_8026EEB8; } // 8026EE98
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8026EE9C
  c->r[4]=c->r[31]+0x000000ECu; // 8026EEA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EEA4
  c->r[12]=R32(c->r[12]+0x00000020u); // 8026EEA8
  c->ctr=c->r[12]; // 8026EEAC
  if (true) { c->lr=0x8026EEB4u; dispatch(c,c->ctr); } // 8026EEB0
  goto L_8026EED0; // 8026EEB4
L_8026EEB8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8026EEB8
  c->r[4]=0u+0x00000000u; // 8026EEBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EEC0
  c->r[12]=R32(c->r[12]+0x00000020u); // 8026EEC4
  c->ctr=c->r[12]; // 8026EEC8
  if (true) { c->lr=0x8026EED0u; dispatch(c,c->ctr); } // 8026EECC
L_8026EED0:;
  c->r[3]=0u+0x00000004u; // 8026EED0
  c->lr=0x8026EED8u; f_80263380(c); // 8026EED4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026EED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026EEDC
  c->lr=c->r[0]; // 8026EEE0
  c->r[1]=c->r[1]+0x00000010u; // 8026EEE4
  return; // 8026EEE8
}

// fn_8026EEEC
void f_8026EEEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026EEEC
  c->r[0]=c->lr; // 8026EEF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026EEF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026EEF8
  c->r[31]=c->r[3]|c->r[3]; // 8026EEFC
  c->lr=0x8026EF04u; f_8026E800(c); // 8026EF00
  c->r[0]=R32(c->r[31]+0x000000F0u); // 8026EF04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026EF08
  if (crb(c,2)) { goto L_8026EF2C; } // 8026EF0C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8026EF10
  c->r[4]=c->r[31]+0x000000ECu; // 8026EF14
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EF18
  c->r[12]=R32(c->r[12]+0x00000024u); // 8026EF1C
  c->ctr=c->r[12]; // 8026EF20
  if (true) { c->lr=0x8026EF28u; dispatch(c,c->ctr); } // 8026EF24
  goto L_8026EF44; // 8026EF28
L_8026EF2C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8026EF2C
  c->r[4]=0u+0x00000000u; // 8026EF30
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026EF34
  c->r[12]=R32(c->r[12]+0x00000024u); // 8026EF38
  c->ctr=c->r[12]; // 8026EF3C
  if (true) { c->lr=0x8026EF44u; dispatch(c,c->ctr); } // 8026EF40
L_8026EF44:;
  c->r[3]=0u+0x00000004u; // 8026EF44
  c->lr=0x8026EF4Cu; f_80263380(c); // 8026EF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026EF4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026EF50
  c->lr=c->r[0]; // 8026EF54
  c->r[1]=c->r[1]+0x00000010u; // 8026EF58
  return; // 8026EF5C
}

// fn_8026EF60
void f_8026EF60(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8026EF60
  if (crb(c,2)) { goto L_8026EF7C; } // 8026EF64
  c->r[0]=R32(c->r[3]+0x000000F0u); // 8026EF68
  W32(c->r[3]+0x000000ECu,c->r[5]); // 8026EF6C
  c->r[0]=c->r[0]|0x00000001u; // 8026EF70
  W32(c->r[3]+0x000000F0u,c->r[0]); // 8026EF74
  return; // 8026EF78
L_8026EF7C:;
  c->r[0]=R32(c->r[3]+0x000000F0u); // 8026EF7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8026EF80
  W32(c->r[3]+0x000000F0u,c->r[0]); // 8026EF84
  return; // 8026EF88
}

// __ct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPQ34nw4r3g3d13IScnObjGatherPPQ34nw4r3g3d6ScnObjUlUlUlPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjPQ34nw4r3g3d12LightSetData
void f_8026EF8C(Ctx* __restrict c) {
  trace_call(0x8026EF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026EF8C
  c->r[0]=c->lr; // 8026EF90
  W32(c->r[1]+0x00000034u,c->r[0]); // 8026EF94
  c->r[11]=c->r[1]+0x00000030u; // 8026EF98
  c->lr=0x8026EFA0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026EF9C
  c->r[29]=R32(c->r[1]+0x00000038u); // 8026EFA0
  c->r[25]=c->r[5]|c->r[5]; // 8026EFA4
  c->r[5]=c->r[6]|c->r[6]; // 8026EFA8
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 8026EFAC
  c->r[24]=c->r[3]|c->r[3]; // 8026EFB0
  c->r[6]=c->r[7]|c->r[7]; // 8026EFB4
  c->r[26]=c->r[8]|c->r[8]; // 8026EFB8
  c->r[27]=c->r[9]|c->r[9]; // 8026EFBC
  c->r[28]=c->r[10]|c->r[10]; // 8026EFC0
  c->lr=0x8026EFC8u; f_8026E17C(c); // 8026EFC4
  c->r[3]=0u+0x80340000u; // 8026EFC8
  c->r[31]=0u+0x00000000u; // 8026EFCC
  c->r[3]=c->r[3]+0x00004DB8u; // 8026EFD0
  c->r[0]=0u+0x00000002u; // 8026EFD4
  W32(c->r[24]+0x00000000u,c->r[3]); // 8026EFD8
  c->r[4]=c->r[28]|c->r[28]; // 8026EFDC
  c->r[5]=c->r[29]|c->r[29]; // 8026EFE0
  c->r[6]=c->r[26]|c->r[26]; // 8026EFE4
  W32(c->r[24]+0x000000E8u,c->r[25]); // 8026EFE8
  c->r[7]=c->r[30]|c->r[30]; // 8026EFEC
  c->r[8]=c->r[27]|c->r[27]; // 8026EFF0
  c->r[3]=c->r[24]+0x00002878u; // 8026EFF4
  W32(c->r[24]+0x000000ECu,c->r[0]); // 8026EFF8
  W32(c->r[24]+0x000000F0u,c->r[31]); // 8026EFFC
  W8(c->r[24]+0x000000F4u,c->r[31]); // 8026F000
  c->lr=0x8026F008u; f_80276FFC(c); // 8026F004
  W32(c->r[24]+0x00002888u,c->r[31]); // 8026F008
  c->r[30]=0u+0x00000000u; // 8026F00C
  c->r[31]=0u+0x00000000u; // 8026F010
L_8026F014:;
  c->r[4]=c->r[24]+c->r[31]; // 8026F014
  c->r[3]=c->r[1]+0x0000000Cu; // 8026F018
  c->r[4]=c->r[4]+0x000000F8u; // 8026F01C
  c->lr=0x8026F024u; f_80269488(c); // 8026F020
  c->r[3]=c->r[1]+0x0000000Cu; // 8026F024
  c->lr=0x8026F02Cu; f_80269490(c); // 8026F028
  c->r[30]=c->r[30]+0x00000001u; // 8026F02C
  c->r[31]=c->r[31]+0x0000010Cu; // 8026F030
  cmpu(c,0,c->r[30],0x00000020u); // 8026F034
  if (crb(c,0)) { IRQCHK(c); goto L_8026F014; } // 8026F038
  c->r[30]=0u+0x00000000u; // 8026F03C
  c->r[31]=0u+0x00000000u; // 8026F040
L_8026F044:;
  c->r[4]=c->r[24]+c->r[31]; // 8026F044
  c->r[3]=c->r[1]+0x00000008u; // 8026F048
  c->r[4]=c->r[4]+0x00002278u; // 8026F04C
  c->lr=0x8026F054u; f_80276BD8(c); // 8026F050
  c->r[3]=c->r[1]+0x00000008u; // 8026F054
  c->lr=0x8026F05Cu; f_80276BE0(c); // 8026F058
  c->r[30]=c->r[30]+0x00000001u; // 8026F05C
  c->r[31]=c->r[31]+0x00000030u; // 8026F060
  cmpu(c,0,c->r[30],0x00000020u); // 8026F064
  if (crb(c,0)) { IRQCHK(c); goto L_8026F044; } // 8026F068
  c->r[11]=c->r[1]+0x00000030u; // 8026F06C
  c->r[3]=c->r[24]|c->r[24]; // 8026F070
  c->lr=0x8026F078u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026F074
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026F078
  c->lr=c->r[0]; // 8026F07C
  c->r[1]=c->r[1]+0x00000030u; // 8026F080
  return; // 8026F084
}

// fn_8026F088
void f_8026F088(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026F088
  c->r[0]=c->lr; // 8026F08C
  cmps(c,0,(int32_t)c->r[3],0); // 8026F090
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026F094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026F098
  c->r[31]=c->r[3]|c->r[3]; // 8026F09C
  if (crb(c,2)) { goto L_8026F0EC; } // 8026F0A0
  c->r[0]=R32(c->r[3]+0x00002888u); // 8026F0A4
  c->r[4]=0u+0x80340000u; // 8026F0A8
  c->r[4]=c->r[4]+0x00004DB8u; // 8026F0AC
  cmps(c,0,(int32_t)c->r[0],0); // 8026F0B0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8026F0B4
  if (crb(c,2)) { goto L_8026F0E0; } // 8026F0B8
  c->r[3]=c->r[0]|c->r[0]; // 8026F0BC
  c->r[4]=0u+0x00010000u; // 8026F0C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026F0C4
  c->r[6]=c->r[31]|c->r[31]; // 8026F0C8
  c->r[4]=c->r[4]+0x00000003u; // 8026F0CC
  c->r[5]=0u+0x00000000u; // 8026F0D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026F0D4
  c->ctr=c->r[12]; // 8026F0D8
  if (true) { c->lr=0x8026F0E0u; dispatch(c,c->ctr); } // 8026F0DC
L_8026F0E0:;
  c->r[3]=c->r[31]|c->r[31]; // 8026F0E0
  c->r[4]=0u+0x00000000u; // 8026F0E4
  c->lr=0x8026F0ECu; f_8026E1EC(c); // 8026F0E8
L_8026F0EC:;
  c->r[3]=c->r[31]|c->r[31]; // 8026F0EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026F0F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026F0F4
  c->lr=c->r[0]; // 8026F0F8
  c->r[1]=c->r[1]+0x00000010u; // 8026F0FC
  return; // 8026F100
}

// Add__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObjbb
void f_8026F104(Ctx* __restrict c) {
  trace_call(0x8026F104u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026F104
  c->r[0]=c->lr; // 8026F108
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026F10C
  c->r[11]=c->r[1]+0x00000040u; // 8026F110
  c->lr=0x8026F118u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026F114
  c->r[0]=R32(c->r[13]+0xFFFFA410u); // 8026F118
  c->r[27]=c->r[3]|c->r[3]; // 8026F11C
  c->r[28]=c->r[4]|c->r[4]; // 8026F120
  c->r[29]=c->r[5]|c->r[5]; // 8026F124
  cmps(c,0,(int32_t)c->r[0],0); // 8026F128
  c->r[30]=c->r[6]|c->r[6]; // 8026F12C
  c->r[31]=0u+0x00000000u; // 8026F130
  if (crb(c,2)) { goto L_8026F198; } // 8026F134
  c->r[12]=R32(c->r[28]+0x00000000u); // 8026F138
  c->r[3]=c->r[28]|c->r[28]; // 8026F13C
  c->r[5]=c->r[1]+0x00000008u; // 8026F140
  c->r[4]=0u+0x00000009u; // 8026F144
  c->r[12]=R32(c->r[12]+0x00000024u); // 8026F148
  c->ctr=c->r[12]; // 8026F14C
  if (true) { c->lr=0x8026F154u; dispatch(c,c->ctr); } // 8026F150
  c->r[0]=R32(c->r[1]+0x00000008u); // 8026F154
  cmps(c,0,(int32_t)c->r[0],0); // 8026F158
  if (crb(c,2)) { goto L_8026F198; } // 8026F15C
  c->r[3]=c->r[28]|c->r[28]; // 8026F160
  c->r[5]=c->r[1]+0x00000010u; // 8026F164
  c->r[4]=0u+0x00000001u; // 8026F168
  c->lr=0x8026F170u; f_8026D1A4(c); // 8026F16C
  c->r[3]=R32(c->r[13]+0xFFFFA410u); // 8026F170
  c->r[4]=c->r[1]+0x00000010u; // 8026F174
  c->lr=0x8026F17Cu; f_8028597C(c); // 8026F178
  cmps(c,0,(int32_t)c->r[3],0); // 8026F17C
  if (!crb(c,2)) { goto L_8026F18C; } // 8026F180
  c->r[3]=0u+0x00000002u; // 8026F184
  goto L_8026F20C; // 8026F188
L_8026F18C:;
  cmps(c,0,(int32_t)c->r[3],1); // 8026F18C
  if (!crb(c,2)) { goto L_8026F198; } // 8026F190
  c->r[31]=0u+0x00000001u; // 8026F194
L_8026F198:;
  cmps(c,0,(int32_t)c->r[29],0); // 8026F198
  if (crb(c,2)) { goto L_8026F1D0; } // 8026F19C
  c->r[3]=R32(c->r[27]+0x00000010u); // 8026F1A0
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8026F1A4
  cmpu(c,0,c->r[3],c->r[0]); // 8026F1A8
  if (!crb(c,0)) { goto L_8026F1C8; } // 8026F1AC
  c->r[4]=R32(c->r[27]+0x00000004u); // 8026F1B0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8026F1B4
  c->r[3]=c->r[3]+0x00000001u; // 8026F1B8
  W32(c->r[4]+c->r[0],c->r[28]); // 8026F1BC
  W32(c->r[27]+0x00000010u,c->r[3]); // 8026F1C0
  goto L_8026F1D0; // 8026F1C4
L_8026F1C8:;
  c->r[3]=c->r[31]|c->r[31]; // 8026F1C8
  goto L_8026F20C; // 8026F1CC
L_8026F1D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026F1D0
  if (crb(c,2)) { goto L_8026F208; } // 8026F1D4
  c->r[3]=R32(c->r[27]+0x00000014u); // 8026F1D8
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8026F1DC
  cmpu(c,0,c->r[3],c->r[0]); // 8026F1E0
  if (!crb(c,0)) { goto L_8026F200; } // 8026F1E4
  c->r[4]=R32(c->r[27]+0x00000008u); // 8026F1E8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8026F1EC
  c->r[3]=c->r[3]+0x00000001u; // 8026F1F0
  W32(c->r[4]+c->r[0],c->r[28]); // 8026F1F4
  W32(c->r[27]+0x00000014u,c->r[3]); // 8026F1F8
  goto L_8026F208; // 8026F1FC
L_8026F200:;
  c->r[3]=c->r[31]|c->r[31]; // 8026F200
  goto L_8026F20C; // 8026F204
L_8026F208:;
  c->r[3]=c->r[31]|c->r[31]; // 8026F208
L_8026F20C:;
  c->r[11]=c->r[1]+0x00000040u; // 8026F20C
  c->lr=0x8026F214u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026F210
  c->r[0]=R32(c->r[1]+0x00000044u); // 8026F214
  c->lr=c->r[0]; // 8026F218
  c->r[1]=c->r[1]+0x00000040u; // 8026F21C
  return; // 8026F220
}

// fn_8026F224
void f_8026F224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026F224
  c->r[0]=c->lr; // 8026F228
  c->r[5]=0u+0x80270000u; // 8026F22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026F230
  c->r[5]=c->r[5]+0xFFFFF284u; // 8026F234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026F238
  c->r[31]=c->r[3]|c->r[3]; // 8026F23C
  c->r[0]=R32(c->r[31]+0x00000010u); // 8026F240
  c->r[3]=R32(c->r[3]+0x00000004u); // 8026F244
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026F248
  c->r[4]=c->r[3]+c->r[0]; // 8026F24C
  c->lr=0x8026F254u; f_8026F304(c); // 8026F250
  c->r[0]=R32(c->r[31]+0x00000014u); // 8026F254
  c->r[5]=0u+0x80270000u; // 8026F258
  c->r[3]=R32(c->r[31]+0x00000008u); // 8026F25C
  c->r[5]=c->r[5]+0xFFFFF2C4u; // 8026F260
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026F264
  c->r[4]=c->r[3]+c->r[0]; // 8026F268
  c->lr=0x8026F270u; f_8026F304(c); // 8026F26C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026F270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026F274
  c->lr=c->r[0]; // 8026F278
  c->r[1]=c->r[1]+0x00000010u; // 8026F27C
  return; // 8026F280
}

// LessZSortOpa__Q34nw4r3g3d25@unnamed@g3d_scnroot_cpp@FPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj
void f_8026F284(Ctx* __restrict c) {
  trace_call(0x8026F284u);
  c->r[0]=R8(c->r[3]+0x000000D0u); // 8026F284
  c->r[5]=R8(c->r[4]+0x000000D0u); // 8026F288
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8026F28C
  if (!crb(c,2)) { goto L_8026F2AC; } // 8026F290
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026F294
  {uint32_t ea=c->r[4]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026F298
  fcmp(c,0,c->f[1],c->f[0]); // 8026F29C
  c->r[3]=c->cr; // 8026F2A0
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 8026F2A4
  return; // 8026F2A8
L_8026F2AC:;
  c->r[0]=c->r[5]^c->r[0]; // 8026F2AC
  c->r[3]=sraw(c,c->r[0],1); // 8026F2B0
  c->r[0]=c->r[0]&c->r[5]; // 8026F2B4
  c->r[0]=c->r[3]-c->r[0]; // 8026F2B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8026F2BC
  return; // 8026F2C0
}

// fn_8026F2C4
void f_8026F2C4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D1u); // 8026F2C4
  c->r[5]=R8(c->r[4]+0x000000D1u); // 8026F2C8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8026F2CC
  if (!crb(c,2)) { goto L_8026F2EC; } // 8026F2D0
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026F2D4
  {uint32_t ea=c->r[4]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026F2D8
  fcmp(c,0,c->f[1],c->f[0]); // 8026F2DC
  c->r[3]=c->cr; // 8026F2E0
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8026F2E4
  return; // 8026F2E8
L_8026F2EC:;
  c->r[0]=c->r[5]^c->r[0]; // 8026F2EC
  c->r[3]=sraw(c,c->r[0],1); // 8026F2F0
  c->r[0]=c->r[0]&c->r[5]; // 8026F2F4
  c->r[0]=c->r[3]-c->r[0]; // 8026F2F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8026F2FC
  return; // 8026F300
}

