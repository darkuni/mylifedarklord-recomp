#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// sort<PPQ34nw4r3g3d6ScnObj,PFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_8026F304(Ctx* __restrict c) {
  trace_call(0x8026F304u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026F304
  c->r[0]=c->lr; // 8026F308
  W32(c->r[1]+0x00000034u,c->r[0]); // 8026F30C
  c->r[11]=c->r[1]+0x00000030u; // 8026F310
  c->lr=0x8026F318u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026F314
  c->r[6]=0u+0x66660000u; // 8026F318
  W32(c->r[1]+0x00000008u,c->r[5]); // 8026F31C
  c->r[28]=c->r[3]|c->r[3]; // 8026F320
  c->r[29]=c->r[4]|c->r[4]; // 8026F324
  c->r[31]=c->r[6]+0x00006667u; // 8026F328
L_8026F32C:;
  c->r[0]=c->r[29]-c->r[28]; // 8026F32C
  c->r[0]=sraw(c,c->r[0],2); // 8026F330
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 8026F334
  cmps(c,0,(int32_t)c->r[7],1); // 8026F338
  if (!crb(c,1)) { goto L_8026F66C; } // 8026F33C
  cmps(c,0,(int32_t)c->r[7],20); // 8026F340
  if (crb(c,1)) { goto L_8026F3C0; } // 8026F344
  cmpu(c,0,c->r[28],c->r[29]); // 8026F348
  if (crb(c,2)) { goto L_8026F66C; } // 8026F34C
  c->r[30]=c->r[29]+0xFFFFFFFCu; // 8026F350
  goto L_8026F3B4; // 8026F354
L_8026F358:;
  cmpu(c,0,c->r[28],c->r[29]); // 8026F358
  c->r[31]=c->r[28]|c->r[28]; // 8026F35C
  if (crb(c,2)) { goto L_8026F398; } // 8026F360
  c->r[27]=c->r[28]+0x00000004u; // 8026F364
  goto L_8026F390; // 8026F368
L_8026F36C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F36C
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026F370
  c->r[4]=R32(c->r[31]+0x00000000u); // 8026F374
  c->ctr=c->r[12]; // 8026F378
  if (true) { c->lr=0x8026F380u; dispatch(c,c->ctr); } // 8026F37C
  cmps(c,0,(int32_t)c->r[3],0); // 8026F380
  if (crb(c,2)) { goto L_8026F38C; } // 8026F384
  c->r[31]=c->r[27]|c->r[27]; // 8026F388
L_8026F38C:;
  c->r[27]=c->r[27]+0x00000004u; // 8026F38C
L_8026F390:;
  cmpu(c,0,c->r[27],c->r[29]); // 8026F390
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F36C; } // 8026F394
L_8026F398:;
  cmpu(c,0,c->r[31],c->r[28]); // 8026F398
  if (crb(c,2)) { goto L_8026F3B0; } // 8026F39C
  c->r[3]=R32(c->r[31]+0x00000000u); // 8026F3A0
  c->r[0]=R32(c->r[28]+0x00000000u); // 8026F3A4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8026F3A8
  W32(c->r[28]+0x00000000u,c->r[3]); // 8026F3AC
L_8026F3B0:;
  c->r[28]=c->r[28]+0x00000004u; // 8026F3B0
L_8026F3B4:;
  cmpu(c,0,c->r[28],c->r[30]); // 8026F3B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F358; } // 8026F3B8
  goto L_8026F66C; // 8026F3BC
L_8026F3C0:;
  c->r[4]=R32(c->r[13]+0xFFFF9740u); // 8026F3C0
  c->r[0]=sraw(c,c->r[7],2); // 8026F3C4
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8026F3C8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 8026F3CC
  c->r[6]=c->r[4]+0x00000001u; // 8026F3D0
  cmps(c,0,(int32_t)c->r[6],5); // 8026F3D4
  c->r[0]=sraw(c,c->r[0],1); // 8026F3D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8026F3DC
  c->r[0]=c->r[0]+c->r[3]; // 8026F3E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8026F3E4
  c->r[0]=c->r[4]-c->r[0]; // 8026F3E8
  c->r[0]=c->r[5]+c->r[0]; // 8026F3EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026F3F0
  c->r[3]=c->r[28]+c->r[0]; // 8026F3F4
  if (crb(c,0)) { goto L_8026F400; } // 8026F3F8
  c->r[6]=0u+0xFFFFFFFCu; // 8026F3FC
L_8026F400:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 8026F400
  c->r[0]=c->r[6]+0x00000001u; // 8026F404
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8026F408
  W32(c->r[13]+0xFFFF9740u,c->r[0]); // 8026F40C
  cmps(c,0,(int32_t)c->r[0],5); // 8026F410
  c->r[0]=c->r[5]-c->r[7]; // 8026F414
  c->r[0]=sraw(c,c->r[0],2); // 8026F418
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8026F41C
  c->r[0]=sraw(c,c->r[4],1); // 8026F420
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8026F424
  c->r[0]=c->r[0]+c->r[4]; // 8026F428
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8026F42C
  c->r[0]=c->r[6]-c->r[0]; // 8026F430
  c->r[0]=c->r[5]+c->r[0]; // 8026F434
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026F438
  c->r[4]=c->r[28]+c->r[0]; // 8026F43C
  if (crb(c,0)) { goto L_8026F44C; } // 8026F440
  c->r[6]=0u+0xFFFFFFFCu; // 8026F444
  W32(c->r[13]+0xFFFF9740u,c->r[6]); // 8026F448
L_8026F44C:;
  c->r[26]=c->r[29]+0xFFFFFFFCu; // 8026F44C
  c->r[6]=c->r[1]+0x00000008u; // 8026F450
  c->r[5]=c->r[26]|c->r[26]; // 8026F454
  c->lr=0x8026F45Cu; f_8026FA04(c); // 8026F458
  c->r[30]=c->r[28]|c->r[28]; // 8026F45C
  c->r[27]=c->r[26]|c->r[26]; // 8026F460
  goto L_8026F46C; // 8026F464
L_8026F468:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F468
L_8026F46C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F46C
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F470
  c->r[4]=R32(c->r[26]+0x00000000u); // 8026F474
  c->ctr=c->r[12]; // 8026F478
  if (true) { c->lr=0x8026F480u; dispatch(c,c->ctr); } // 8026F47C
  cmps(c,0,(int32_t)c->r[3],0); // 8026F480
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F468; } // 8026F484
L_8026F488:;
  c->r[27]=c->r[27]+0xFFFFFFFCu; // 8026F488
  cmpu(c,0,c->r[30],c->r[27]); // 8026F48C
  if (crb(c,2)) { goto L_8026F4B0; } // 8026F490
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F494
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026F498
  c->r[4]=R32(c->r[26]+0x00000000u); // 8026F49C
  c->ctr=c->r[12]; // 8026F4A0
  if (true) { c->lr=0x8026F4A8u; dispatch(c,c->ctr); } // 8026F4A4
  cmps(c,0,(int32_t)c->r[3],0); // 8026F4A8
  if (crb(c,2)) { IRQCHK(c); goto L_8026F488; } // 8026F4AC
L_8026F4B0:;
  cmpu(c,0,c->r[30],c->r[27]); // 8026F4B0
  if (!crb(c,0)) { goto L_8026F52C; } // 8026F4B4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F4B8
  c->r[0]=R32(c->r[27]+0x00000000u); // 8026F4BC
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F4C0
  c->r[30]=c->r[30]+0x00000004u; // 8026F4C4
  W32(c->r[27]+0x00000000u,c->r[3]); // 8026F4C8
  goto L_8026F4D4; // 8026F4CC
L_8026F4D0:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F4D0
L_8026F4D4:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F4D4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F4D8
  c->r[4]=R32(c->r[26]+0x00000000u); // 8026F4DC
  c->ctr=c->r[12]; // 8026F4E0
  if (true) { c->lr=0x8026F4E8u; dispatch(c,c->ctr); } // 8026F4E4
  cmps(c,0,(int32_t)c->r[3],0); // 8026F4E8
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F4D0; } // 8026F4EC
L_8026F4F0:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F4F0
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[27]=ea;} // 8026F4F4
  c->r[4]=R32(c->r[26]+0x00000000u); // 8026F4F8
  c->ctr=c->r[12]; // 8026F4FC
  if (true) { c->lr=0x8026F504u; dispatch(c,c->ctr); } // 8026F500
  cmps(c,0,(int32_t)c->r[3],0); // 8026F504
  if (crb(c,2)) { IRQCHK(c); goto L_8026F4F0; } // 8026F508
  cmpu(c,0,c->r[30],c->r[27]); // 8026F50C
  if (!crb(c,0)) { goto L_8026F52C; } // 8026F510
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F514
  c->r[0]=R32(c->r[27]+0x00000000u); // 8026F518
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F51C
  c->r[30]=c->r[30]+0x00000004u; // 8026F520
  W32(c->r[27]+0x00000000u,c->r[3]); // 8026F524
  IRQCHK(c); goto L_8026F4D4; // 8026F528
L_8026F52C:;
  cmpu(c,0,c->r[30],c->r[28]); // 8026F52C
  if (!crb(c,2)) { goto L_8026F61C; } // 8026F530
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F534
  c->r[0]=R32(c->r[26]+0x00000000u); // 8026F538
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F53C
  W32(c->r[26]+0x00000000u,c->r[3]); // 8026F540
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F544
  c->r[3]=R32(c->r[28]+0x00000000u); // 8026F548
  c->r[4]=R32(c->r[29]+0xFFFFFFFCu); // 8026F54C
  c->ctr=c->r[12]; // 8026F550
  c->r[30]=c->r[30]+0x00000004u; // 8026F554
  c->r[27]=c->r[29]+0xFFFFFFFCu; // 8026F558
  if (true) { c->lr=0x8026F560u; dispatch(c,c->ctr); } // 8026F55C
  cmps(c,0,(int32_t)c->r[3],0); // 8026F560
  if (!crb(c,2)) { goto L_8026F5AC; } // 8026F564
  goto L_8026F570; // 8026F568
L_8026F56C:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F56C
L_8026F570:;
  cmpu(c,0,c->r[30],c->r[29]); // 8026F570
  if (crb(c,2)) { goto L_8026F594; } // 8026F574
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F578
  c->r[3]=R32(c->r[28]+0x00000000u); // 8026F57C
  c->r[4]=R32(c->r[30]+0x00000000u); // 8026F580
  c->ctr=c->r[12]; // 8026F584
  if (true) { c->lr=0x8026F58Cu; dispatch(c,c->ctr); } // 8026F588
  cmps(c,0,(int32_t)c->r[3],0); // 8026F58C
  if (crb(c,2)) { IRQCHK(c); goto L_8026F56C; } // 8026F590
L_8026F594:;
  cmpu(c,0,c->r[30],c->r[27]); // 8026F594
  if (!crb(c,0)) { goto L_8026F5AC; } // 8026F598
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F59C
  c->r[0]=R32(c->r[27]+0x00000000u); // 8026F5A0
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F5A4
  W32(c->r[27]+0x00000000u,c->r[3]); // 8026F5A8
L_8026F5AC:;
  cmpu(c,0,c->r[30],c->r[27]); // 8026F5AC
  if (!crb(c,0)) { goto L_8026F614; } // 8026F5B0
  goto L_8026F5BC; // 8026F5B4
L_8026F5B8:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F5B8
L_8026F5BC:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F5BC
  c->r[3]=R32(c->r[28]+0x00000000u); // 8026F5C0
  c->r[4]=R32(c->r[30]+0x00000000u); // 8026F5C4
  c->ctr=c->r[12]; // 8026F5C8
  if (true) { c->lr=0x8026F5D0u; dispatch(c,c->ctr); } // 8026F5CC
  cmps(c,0,(int32_t)c->r[3],0); // 8026F5D0
  if (crb(c,2)) { IRQCHK(c); goto L_8026F5B8; } // 8026F5D4
L_8026F5D8:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 8026F5D8
  c->r[3]=R32(c->r[28]+0x00000000u); // 8026F5DC
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; c->r[4]=R32(ea); c->r[27]=ea;} // 8026F5E0
  c->ctr=c->r[12]; // 8026F5E4
  if (true) { c->lr=0x8026F5ECu; dispatch(c,c->ctr); } // 8026F5E8
  cmps(c,0,(int32_t)c->r[3],0); // 8026F5EC
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F5D8; } // 8026F5F0
  cmpu(c,0,c->r[30],c->r[27]); // 8026F5F4
  if (!crb(c,0)) { goto L_8026F614; } // 8026F5F8
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F5FC
  c->r[0]=R32(c->r[27]+0x00000000u); // 8026F600
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F604
  c->r[30]=c->r[30]+0x00000004u; // 8026F608
  W32(c->r[27]+0x00000000u,c->r[3]); // 8026F60C
  IRQCHK(c); goto L_8026F5BC; // 8026F610
L_8026F614:;
  c->r[28]=c->r[30]|c->r[30]; // 8026F614
  IRQCHK(c); goto L_8026F32C; // 8026F618
L_8026F61C:;
  c->r[3]=c->r[30]-c->r[28]; // 8026F61C
  c->r[0]=c->r[29]-c->r[30]; // 8026F620
  c->r[3]=sraw(c,c->r[3],2); // 8026F624
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8026F628
  c->r[0]=sraw(c,c->r[0],2); // 8026F62C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8026F630
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8026F634
  if (!crb(c,0)) { goto L_8026F654; } // 8026F638
  c->r[3]=c->r[28]|c->r[28]; // 8026F63C
  c->r[4]=c->r[30]|c->r[30]; // 8026F640
  c->r[5]=c->r[1]+0x00000008u; // 8026F644
  c->lr=0x8026F64Cu; f_8026F684(c); // 8026F648
  c->r[28]=c->r[30]|c->r[30]; // 8026F64C
  IRQCHK(c); goto L_8026F32C; // 8026F650
L_8026F654:;
  c->r[3]=c->r[30]|c->r[30]; // 8026F654
  c->r[4]=c->r[29]|c->r[29]; // 8026F658
  c->r[5]=c->r[1]+0x00000008u; // 8026F65C
  c->lr=0x8026F664u; f_8026F684(c); // 8026F660
  c->r[29]=c->r[30]|c->r[30]; // 8026F664
  IRQCHK(c); goto L_8026F32C; // 8026F668
L_8026F66C:;
  c->r[11]=c->r[1]+0x00000030u; // 8026F66C
  c->lr=0x8026F674u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026F670
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026F674
  c->lr=c->r[0]; // 8026F678
  c->r[1]=c->r[1]+0x00000030u; // 8026F67C
  return; // 8026F680
}

// sort<PPQ34nw4r3g3d6ScnObj,RPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjRPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_8026F684(Ctx* __restrict c) {
  trace_call(0x8026F684u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026F684
  c->r[0]=c->lr; // 8026F688
  W32(c->r[1]+0x00000034u,c->r[0]); // 8026F68C
  c->r[11]=c->r[1]+0x00000030u; // 8026F690
  c->lr=0x8026F698u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026F694
  c->r[6]=0u+0x66660000u; // 8026F698
  c->r[27]=c->r[3]|c->r[3]; // 8026F69C
  c->r[28]=c->r[4]|c->r[4]; // 8026F6A0
  c->r[29]=c->r[5]|c->r[5]; // 8026F6A4
  c->r[31]=c->r[6]+0x00006667u; // 8026F6A8
L_8026F6AC:;
  c->r[0]=c->r[28]-c->r[27]; // 8026F6AC
  c->r[0]=sraw(c,c->r[0],2); // 8026F6B0
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 8026F6B4
  cmps(c,0,(int32_t)c->r[7],1); // 8026F6B8
  if (!crb(c,1)) { goto L_8026F9EC; } // 8026F6BC
  cmps(c,0,(int32_t)c->r[7],20); // 8026F6C0
  if (crb(c,1)) { goto L_8026F740; } // 8026F6C4
  cmpu(c,0,c->r[27],c->r[28]); // 8026F6C8
  if (crb(c,2)) { goto L_8026F9EC; } // 8026F6CC
  c->r[30]=c->r[28]+0xFFFFFFFCu; // 8026F6D0
  goto L_8026F734; // 8026F6D4
L_8026F6D8:;
  cmpu(c,0,c->r[27],c->r[28]); // 8026F6D8
  c->r[31]=c->r[27]|c->r[27]; // 8026F6DC
  if (crb(c,2)) { goto L_8026F718; } // 8026F6E0
  c->r[26]=c->r[27]+0x00000004u; // 8026F6E4
  goto L_8026F710; // 8026F6E8
L_8026F6EC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F6EC
  c->r[3]=R32(c->r[26]+0x00000000u); // 8026F6F0
  c->r[4]=R32(c->r[31]+0x00000000u); // 8026F6F4
  c->ctr=c->r[12]; // 8026F6F8
  if (true) { c->lr=0x8026F700u; dispatch(c,c->ctr); } // 8026F6FC
  cmps(c,0,(int32_t)c->r[3],0); // 8026F700
  if (crb(c,2)) { goto L_8026F70C; } // 8026F704
  c->r[31]=c->r[26]|c->r[26]; // 8026F708
L_8026F70C:;
  c->r[26]=c->r[26]+0x00000004u; // 8026F70C
L_8026F710:;
  cmpu(c,0,c->r[26],c->r[28]); // 8026F710
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F6EC; } // 8026F714
L_8026F718:;
  cmpu(c,0,c->r[31],c->r[27]); // 8026F718
  if (crb(c,2)) { goto L_8026F730; } // 8026F71C
  c->r[3]=R32(c->r[31]+0x00000000u); // 8026F720
  c->r[0]=R32(c->r[27]+0x00000000u); // 8026F724
  W32(c->r[31]+0x00000000u,c->r[0]); // 8026F728
  W32(c->r[27]+0x00000000u,c->r[3]); // 8026F72C
L_8026F730:;
  c->r[27]=c->r[27]+0x00000004u; // 8026F730
L_8026F734:;
  cmpu(c,0,c->r[27],c->r[30]); // 8026F734
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F6D8; } // 8026F738
  goto L_8026F9EC; // 8026F73C
L_8026F740:;
  c->r[4]=R32(c->r[13]+0xFFFF9744u); // 8026F740
  c->r[0]=sraw(c,c->r[7],2); // 8026F744
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8026F748
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 8026F74C
  c->r[6]=c->r[4]+0x00000001u; // 8026F750
  cmps(c,0,(int32_t)c->r[6],5); // 8026F754
  c->r[0]=sraw(c,c->r[0],1); // 8026F758
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8026F75C
  c->r[0]=c->r[0]+c->r[3]; // 8026F760
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8026F764
  c->r[0]=c->r[4]-c->r[0]; // 8026F768
  c->r[0]=c->r[5]+c->r[0]; // 8026F76C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026F770
  c->r[3]=c->r[27]+c->r[0]; // 8026F774
  if (crb(c,0)) { goto L_8026F780; } // 8026F778
  c->r[6]=0u+0xFFFFFFFCu; // 8026F77C
L_8026F780:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 8026F780
  c->r[0]=c->r[6]+0x00000001u; // 8026F784
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8026F788
  W32(c->r[13]+0xFFFF9744u,c->r[0]); // 8026F78C
  cmps(c,0,(int32_t)c->r[0],5); // 8026F790
  c->r[0]=c->r[5]-c->r[7]; // 8026F794
  c->r[0]=sraw(c,c->r[0],2); // 8026F798
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8026F79C
  c->r[0]=sraw(c,c->r[4],1); // 8026F7A0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8026F7A4
  c->r[0]=c->r[0]+c->r[4]; // 8026F7A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8026F7AC
  c->r[0]=c->r[6]-c->r[0]; // 8026F7B0
  c->r[0]=c->r[5]+c->r[0]; // 8026F7B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026F7B8
  c->r[4]=c->r[27]+c->r[0]; // 8026F7BC
  if (crb(c,0)) { goto L_8026F7CC; } // 8026F7C0
  c->r[6]=0u+0xFFFFFFFCu; // 8026F7C4
  W32(c->r[13]+0xFFFF9744u,c->r[6]); // 8026F7C8
L_8026F7CC:;
  c->r[25]=c->r[28]+0xFFFFFFFCu; // 8026F7CC
  c->r[6]=c->r[29]|c->r[29]; // 8026F7D0
  c->r[5]=c->r[25]|c->r[25]; // 8026F7D4
  c->lr=0x8026F7DCu; f_8026FA04(c); // 8026F7D8
  c->r[30]=c->r[27]|c->r[27]; // 8026F7DC
  c->r[26]=c->r[25]|c->r[25]; // 8026F7E0
  goto L_8026F7EC; // 8026F7E4
L_8026F7E8:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F7E8
L_8026F7EC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F7EC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F7F0
  c->r[4]=R32(c->r[25]+0x00000000u); // 8026F7F4
  c->ctr=c->r[12]; // 8026F7F8
  if (true) { c->lr=0x8026F800u; dispatch(c,c->ctr); } // 8026F7FC
  cmps(c,0,(int32_t)c->r[3],0); // 8026F800
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F7E8; } // 8026F804
L_8026F808:;
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 8026F808
  cmpu(c,0,c->r[30],c->r[26]); // 8026F80C
  if (crb(c,2)) { goto L_8026F830; } // 8026F810
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F814
  c->r[3]=R32(c->r[26]+0x00000000u); // 8026F818
  c->r[4]=R32(c->r[25]+0x00000000u); // 8026F81C
  c->ctr=c->r[12]; // 8026F820
  if (true) { c->lr=0x8026F828u; dispatch(c,c->ctr); } // 8026F824
  cmps(c,0,(int32_t)c->r[3],0); // 8026F828
  if (crb(c,2)) { IRQCHK(c); goto L_8026F808; } // 8026F82C
L_8026F830:;
  cmpu(c,0,c->r[30],c->r[26]); // 8026F830
  if (!crb(c,0)) { goto L_8026F8AC; } // 8026F834
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F838
  c->r[0]=R32(c->r[26]+0x00000000u); // 8026F83C
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F840
  c->r[30]=c->r[30]+0x00000004u; // 8026F844
  W32(c->r[26]+0x00000000u,c->r[3]); // 8026F848
  goto L_8026F854; // 8026F84C
L_8026F850:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F850
L_8026F854:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F854
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F858
  c->r[4]=R32(c->r[25]+0x00000000u); // 8026F85C
  c->ctr=c->r[12]; // 8026F860
  if (true) { c->lr=0x8026F868u; dispatch(c,c->ctr); } // 8026F864
  cmps(c,0,(int32_t)c->r[3],0); // 8026F868
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F850; } // 8026F86C
L_8026F870:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F870
  {uint32_t ea=c->r[26]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[26]=ea;} // 8026F874
  c->r[4]=R32(c->r[25]+0x00000000u); // 8026F878
  c->ctr=c->r[12]; // 8026F87C
  if (true) { c->lr=0x8026F884u; dispatch(c,c->ctr); } // 8026F880
  cmps(c,0,(int32_t)c->r[3],0); // 8026F884
  if (crb(c,2)) { IRQCHK(c); goto L_8026F870; } // 8026F888
  cmpu(c,0,c->r[30],c->r[26]); // 8026F88C
  if (!crb(c,0)) { goto L_8026F8AC; } // 8026F890
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F894
  c->r[0]=R32(c->r[26]+0x00000000u); // 8026F898
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F89C
  c->r[30]=c->r[30]+0x00000004u; // 8026F8A0
  W32(c->r[26]+0x00000000u,c->r[3]); // 8026F8A4
  IRQCHK(c); goto L_8026F854; // 8026F8A8
L_8026F8AC:;
  cmpu(c,0,c->r[30],c->r[27]); // 8026F8AC
  if (!crb(c,2)) { goto L_8026F99C; } // 8026F8B0
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F8B4
  c->r[0]=R32(c->r[25]+0x00000000u); // 8026F8B8
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F8BC
  W32(c->r[25]+0x00000000u,c->r[3]); // 8026F8C0
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F8C4
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026F8C8
  c->r[4]=R32(c->r[28]+0xFFFFFFFCu); // 8026F8CC
  c->ctr=c->r[12]; // 8026F8D0
  c->r[30]=c->r[30]+0x00000004u; // 8026F8D4
  c->r[26]=c->r[28]+0xFFFFFFFCu; // 8026F8D8
  if (true) { c->lr=0x8026F8E0u; dispatch(c,c->ctr); } // 8026F8DC
  cmps(c,0,(int32_t)c->r[3],0); // 8026F8E0
  if (!crb(c,2)) { goto L_8026F92C; } // 8026F8E4
  goto L_8026F8F0; // 8026F8E8
L_8026F8EC:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F8EC
L_8026F8F0:;
  cmpu(c,0,c->r[30],c->r[28]); // 8026F8F0
  if (crb(c,2)) { goto L_8026F914; } // 8026F8F4
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F8F8
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026F8FC
  c->r[4]=R32(c->r[30]+0x00000000u); // 8026F900
  c->ctr=c->r[12]; // 8026F904
  if (true) { c->lr=0x8026F90Cu; dispatch(c,c->ctr); } // 8026F908
  cmps(c,0,(int32_t)c->r[3],0); // 8026F90C
  if (crb(c,2)) { IRQCHK(c); goto L_8026F8EC; } // 8026F910
L_8026F914:;
  cmpu(c,0,c->r[30],c->r[26]); // 8026F914
  if (!crb(c,0)) { goto L_8026F92C; } // 8026F918
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F91C
  c->r[0]=R32(c->r[26]+0x00000000u); // 8026F920
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F924
  W32(c->r[26]+0x00000000u,c->r[3]); // 8026F928
L_8026F92C:;
  cmpu(c,0,c->r[30],c->r[26]); // 8026F92C
  if (!crb(c,0)) { goto L_8026F994; } // 8026F930
  goto L_8026F93C; // 8026F934
L_8026F938:;
  c->r[30]=c->r[30]+0x00000004u; // 8026F938
L_8026F93C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F93C
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026F940
  c->r[4]=R32(c->r[30]+0x00000000u); // 8026F944
  c->ctr=c->r[12]; // 8026F948
  if (true) { c->lr=0x8026F950u; dispatch(c,c->ctr); } // 8026F94C
  cmps(c,0,(int32_t)c->r[3],0); // 8026F950
  if (crb(c,2)) { IRQCHK(c); goto L_8026F938; } // 8026F954
L_8026F958:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8026F958
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026F95C
  {uint32_t ea=c->r[26]+0xFFFFFFFCu; c->r[4]=R32(ea); c->r[26]=ea;} // 8026F960
  c->ctr=c->r[12]; // 8026F964
  if (true) { c->lr=0x8026F96Cu; dispatch(c,c->ctr); } // 8026F968
  cmps(c,0,(int32_t)c->r[3],0); // 8026F96C
  if (!crb(c,2)) { IRQCHK(c); goto L_8026F958; } // 8026F970
  cmpu(c,0,c->r[30],c->r[26]); // 8026F974
  if (!crb(c,0)) { goto L_8026F994; } // 8026F978
  c->r[3]=R32(c->r[30]+0x00000000u); // 8026F97C
  c->r[0]=R32(c->r[26]+0x00000000u); // 8026F980
  W32(c->r[30]+0x00000000u,c->r[0]); // 8026F984
  c->r[30]=c->r[30]+0x00000004u; // 8026F988
  W32(c->r[26]+0x00000000u,c->r[3]); // 8026F98C
  IRQCHK(c); goto L_8026F93C; // 8026F990
L_8026F994:;
  c->r[27]=c->r[30]|c->r[30]; // 8026F994
  IRQCHK(c); goto L_8026F6AC; // 8026F998
L_8026F99C:;
  c->r[3]=c->r[30]-c->r[27]; // 8026F99C
  c->r[0]=c->r[28]-c->r[30]; // 8026F9A0
  c->r[3]=sraw(c,c->r[3],2); // 8026F9A4
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8026F9A8
  c->r[0]=sraw(c,c->r[0],2); // 8026F9AC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8026F9B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8026F9B4
  if (!crb(c,0)) { goto L_8026F9D4; } // 8026F9B8
  c->r[3]=c->r[27]|c->r[27]; // 8026F9BC
  c->r[4]=c->r[30]|c->r[30]; // 8026F9C0
  c->r[5]=c->r[29]|c->r[29]; // 8026F9C4
  c->lr=0x8026F9CCu; f_8026F684(c); // 8026F9C8
  c->r[27]=c->r[30]|c->r[30]; // 8026F9CC
  IRQCHK(c); goto L_8026F6AC; // 8026F9D0
L_8026F9D4:;
  c->r[3]=c->r[30]|c->r[30]; // 8026F9D4
  c->r[4]=c->r[28]|c->r[28]; // 8026F9D8
  c->r[5]=c->r[29]|c->r[29]; // 8026F9DC
  c->lr=0x8026F9E4u; f_8026F684(c); // 8026F9E0
  c->r[28]=c->r[30]|c->r[30]; // 8026F9E4
  IRQCHK(c); goto L_8026F6AC; // 8026F9E8
L_8026F9EC:;
  c->r[11]=c->r[1]+0x00000030u; // 8026F9EC
  c->lr=0x8026F9F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026F9F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026F9F4
  c->lr=c->r[0]; // 8026F9F8
  c->r[1]=c->r[1]+0x00000030u; // 8026F9FC
  return; // 8026FA00
}

// __sort132<RPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b,PPQ34nw4r3g3d6ScnObj>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjRPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_8026FA04(Ctx* __restrict c) {
  trace_call(0x8026FA04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FA04
  c->r[0]=c->lr; // 8026FA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026FA0C
  c->r[11]=c->r[1]+0x00000020u; // 8026FA10
  c->lr=0x8026FA18u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026FA14
  c->r[12]=R32(c->r[6]+0x00000000u); // 8026FA18
  c->r[27]=c->r[3]|c->r[3]; // 8026FA1C
  c->r[28]=c->r[4]|c->r[4]; // 8026FA20
  c->r[29]=c->r[5]|c->r[5]; // 8026FA24
  c->r[30]=c->r[6]|c->r[6]; // 8026FA28
  c->r[3]=R32(c->r[5]+0x00000000u); // 8026FA2C
  c->r[4]=R32(c->r[27]+0x00000000u); // 8026FA30
  c->ctr=c->r[12]; // 8026FA34
  if (true) { c->lr=0x8026FA3Cu; dispatch(c,c->ctr); } // 8026FA38
  c->r[12]=R32(c->r[30]+0x00000000u); // 8026FA3C
  c->r[0]=cntlz(c->r[3]); // 8026FA40
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026FA44
  c->r[3]=R32(c->r[28]+0x00000000u); // 8026FA48
  c->r[4]=R32(c->r[29]+0x00000000u); // 8026FA4C
  c->ctr=c->r[12]; // 8026FA50
  if (true) { c->lr=0x8026FA58u; dispatch(c,c->ctr); } // 8026FA54
  cmps(c,0,(int32_t)c->r[31],0); // 8026FA58
  c->r[0]=cntlz(c->r[3]); // 8026FA5C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026FA60
  if (crb(c,2)) { goto L_8026FA70; } // 8026FA64
  cmps(c,0,(int32_t)c->r[0],0); // 8026FA68
  if (!crb(c,2)) { goto L_8026FAEC; } // 8026FA6C
L_8026FA70:;
  cmps(c,0,(int32_t)c->r[31],0); // 8026FA70
  if (!crb(c,2)) { goto L_8026FA94; } // 8026FA74
  cmps(c,0,(int32_t)c->r[0],0); // 8026FA78
  if (!crb(c,2)) { goto L_8026FA94; } // 8026FA7C
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026FA80
  c->r[0]=R32(c->r[28]+0x00000000u); // 8026FA84
  W32(c->r[27]+0x00000000u,c->r[0]); // 8026FA88
  W32(c->r[28]+0x00000000u,c->r[3]); // 8026FA8C
  goto L_8026FAEC; // 8026FA90
L_8026FA94:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8026FA94
  c->r[3]=R32(c->r[28]+0x00000000u); // 8026FA98
  c->r[4]=R32(c->r[27]+0x00000000u); // 8026FA9C
  c->ctr=c->r[12]; // 8026FAA0
  if (true) { c->lr=0x8026FAA8u; dispatch(c,c->ctr); } // 8026FAA4
  cmps(c,0,(int32_t)c->r[3],0); // 8026FAA8
  if (crb(c,2)) { goto L_8026FAC0; } // 8026FAAC
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026FAB0
  c->r[0]=R32(c->r[28]+0x00000000u); // 8026FAB4
  W32(c->r[27]+0x00000000u,c->r[0]); // 8026FAB8
  W32(c->r[28]+0x00000000u,c->r[3]); // 8026FABC
L_8026FAC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8026FAC0
  if (crb(c,2)) { goto L_8026FADC; } // 8026FAC4
  c->r[3]=R32(c->r[28]+0x00000000u); // 8026FAC8
  c->r[0]=R32(c->r[29]+0x00000000u); // 8026FACC
  W32(c->r[28]+0x00000000u,c->r[0]); // 8026FAD0
  W32(c->r[29]+0x00000000u,c->r[3]); // 8026FAD4
  goto L_8026FAEC; // 8026FAD8
L_8026FADC:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 8026FADC
  c->r[0]=R32(c->r[29]+0x00000000u); // 8026FAE0
  W32(c->r[27]+0x00000000u,c->r[0]); // 8026FAE4
  W32(c->r[29]+0x00000000u,c->r[3]); // 8026FAE8
L_8026FAEC:;
  c->r[11]=c->r[1]+0x00000020u; // 8026FAEC
  c->lr=0x8026FAF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026FAF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026FAF4
  c->lr=c->r[0]; // 8026FAF8
  c->r[1]=c->r[1]+0x00000020u; // 8026FAFC
  return; // 8026FB00
}

// fn_8026FB04
void f_8026FB04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FB04
  c->r[0]=c->lr; // 8026FB08
  c->r[5]=0u+0x80270000u; // 8026FB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026FB10
  c->r[5]=c->r[5]+0xFFFFFB64u; // 8026FB14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026FB18
  c->r[31]=c->r[3]|c->r[3]; // 8026FB1C
  c->r[0]=R32(c->r[31]+0x00000010u); // 8026FB20
  c->r[3]=R32(c->r[3]+0x00000004u); // 8026FB24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026FB28
  c->r[4]=c->r[3]+c->r[0]; // 8026FB2C
  c->lr=0x8026FB34u; f_8026F304(c); // 8026FB30
  c->r[0]=R32(c->r[31]+0x00000014u); // 8026FB34
  c->r[5]=0u+0x80270000u; // 8026FB38
  c->r[3]=R32(c->r[31]+0x00000008u); // 8026FB3C
  c->r[5]=c->r[5]+0xFFFFFBF4u; // 8026FB40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026FB44
  c->r[4]=c->r[3]+c->r[0]; // 8026FB48
  c->lr=0x8026FB50u; f_8026F304(c); // 8026FB4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026FB50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026FB54
  c->lr=c->r[0]; // 8026FB58
  c->r[1]=c->r[1]+0x00000010u; // 8026FB5C
  return; // 8026FB60
}

// fn_8026FB64
void f_8026FB64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FB64
  c->r[0]=c->lr; // 8026FB68
  c->r[5]=R8(c->r[4]+0x000000D0u); // 8026FB6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026FB70
  c->r[0]=R8(c->r[3]+0x000000D0u); // 8026FB74
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8026FB78
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8026FB7C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8026FB80
  c->r[31]=c->r[3]|c->r[3]; // 8026FB84
  if (!crb(c,2)) { goto L_8026FBC8; } // 8026FB88
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026FB8C
  c->r[3]=c->r[4]|c->r[4]; // 8026FB90
  c->r[12]=R32(c->r[12]+0x00000028u); // 8026FB94
  c->ctr=c->r[12]; // 8026FB98
  if (true) { c->lr=0x8026FBA0u; dispatch(c,c->ctr); } // 8026FB9C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026FBA0
  c->f[31]=c->f[1]; // 8026FBA4
  c->r[3]=c->r[31]|c->r[31]; // 8026FBA8
  c->r[12]=R32(c->r[12]+0x00000028u); // 8026FBAC
  c->ctr=c->r[12]; // 8026FBB0
  if (true) { c->lr=0x8026FBB8u; dispatch(c,c->ctr); } // 8026FBB4
  fcmp(c,0,c->f[1],c->f[31]); // 8026FBB8
  c->r[3]=c->cr; // 8026FBBC
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8026FBC0
  goto L_8026FBDC; // 8026FBC4
L_8026FBC8:;
  c->r[0]=c->r[5]^c->r[0]; // 8026FBC8
  c->r[3]=sraw(c,c->r[0],1); // 8026FBCC
  c->r[0]=c->r[0]&c->r[5]; // 8026FBD0
  c->r[0]=c->r[3]-c->r[0]; // 8026FBD4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8026FBD8
L_8026FBDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026FBDC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8026FBE0
  c->r[31]=R32(c->r[1]+0x00000014u); // 8026FBE4
  c->lr=c->r[0]; // 8026FBE8
  c->r[1]=c->r[1]+0x00000020u; // 8026FBEC
  return; // 8026FBF0
}

// fn_8026FBF4
void f_8026FBF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FBF4
  c->r[0]=c->lr; // 8026FBF8
  c->r[5]=R8(c->r[4]+0x000000D1u); // 8026FBFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026FC00
  c->r[0]=R8(c->r[3]+0x000000D1u); // 8026FC04
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8026FC08
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8026FC0C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8026FC10
  c->r[31]=c->r[3]|c->r[3]; // 8026FC14
  if (!crb(c,2)) { goto L_8026FC58; } // 8026FC18
  c->r[12]=R32(c->r[4]+0x00000000u); // 8026FC1C
  c->r[3]=c->r[4]|c->r[4]; // 8026FC20
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8026FC24
  c->ctr=c->r[12]; // 8026FC28
  if (true) { c->lr=0x8026FC30u; dispatch(c,c->ctr); } // 8026FC2C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026FC30
  c->f[31]=c->f[1]; // 8026FC34
  c->r[3]=c->r[31]|c->r[31]; // 8026FC38
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8026FC3C
  c->ctr=c->r[12]; // 8026FC40
  if (true) { c->lr=0x8026FC48u; dispatch(c,c->ctr); } // 8026FC44
  fcmp(c,0,c->f[1],c->f[31]); // 8026FC48
  c->r[3]=c->cr; // 8026FC4C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8026FC50
  goto L_8026FC6C; // 8026FC54
L_8026FC58:;
  c->r[0]=c->r[5]^c->r[0]; // 8026FC58
  c->r[3]=sraw(c,c->r[0],1); // 8026FC5C
  c->r[0]=c->r[0]&c->r[5]; // 8026FC60
  c->r[0]=c->r[3]-c->r[0]; // 8026FC64
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8026FC68
L_8026FC6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026FC6C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8026FC70
  c->r[31]=R32(c->r[1]+0x00000014u); // 8026FC74
  c->lr=c->r[0]; // 8026FC78
  c->r[1]=c->r[1]+0x00000020u; // 8026FC7C
  return; // 8026FC80
}

// Sort__Q34nw4r3g3d12ScnObjGatherFPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_bPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b
void f_8026FC84(Ctx* __restrict c) {
  trace_call(0x8026FC84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FC84
  c->r[0]=c->lr; // 8026FC88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026FC8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026FC90
  c->r[31]=c->r[5]|c->r[5]; // 8026FC94
  c->r[5]=c->r[4]|c->r[4]; // 8026FC98
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026FC9C
  c->r[30]=c->r[3]|c->r[3]; // 8026FCA0
  c->r[0]=R32(c->r[30]+0x00000010u); // 8026FCA4
  c->r[3]=R32(c->r[3]+0x00000004u); // 8026FCA8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026FCAC
  c->r[4]=c->r[3]+c->r[0]; // 8026FCB0
  c->lr=0x8026FCB8u; f_8026F304(c); // 8026FCB4
  c->r[0]=R32(c->r[30]+0x00000014u); // 8026FCB8
  c->r[5]=c->r[31]|c->r[31]; // 8026FCBC
  c->r[3]=R32(c->r[30]+0x00000008u); // 8026FCC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026FCC4
  c->r[4]=c->r[3]+c->r[0]; // 8026FCC8
  c->lr=0x8026FCD0u; f_8026F304(c); // 8026FCCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026FCD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026FCD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026FCD8
  c->lr=c->r[0]; // 8026FCDC
  c->r[1]=c->r[1]+0x00000010u; // 8026FCE0
  return; // 8026FCE4
}

// fn_8026FCE8
void f_8026FCE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FCE8
  c->r[0]=c->lr; // 8026FCEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026FCF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026FCF4
  c->r[31]=0u+0x00000000u; // 8026FCF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026FCFC
  c->r[30]=0u+0x00000000u; // 8026FD00
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026FD04
  c->r[29]=c->r[4]|c->r[4]; // 8026FD08
  W32(c->r[1]+0x00000010u,c->r[28]); // 8026FD0C
  c->r[28]=c->r[3]|c->r[3]; // 8026FD10
  goto L_8026FD44; // 8026FD14
L_8026FD18:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8026FD18
  c->r[6]=c->r[29]|c->r[29]; // 8026FD1C
  c->r[4]=0u+0x00000006u; // 8026FD20
  c->r[5]=0u+0x00000000u; // 8026FD24
  c->r[3]=R32(c->r[3]+c->r[31]); // 8026FD28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026FD2C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026FD30
  c->ctr=c->r[12]; // 8026FD34
  c->r[30]=c->r[30]+0x00000001u; // 8026FD38
  c->r[31]=c->r[31]+0x00000004u; // 8026FD3C
  if (true) { c->lr=0x8026FD44u; dispatch(c,c->ctr); } // 8026FD40
L_8026FD44:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8026FD44
  cmpu(c,0,c->r[30],c->r[0]); // 8026FD48
  if (!crb(c,2)) { IRQCHK(c); goto L_8026FD18; } // 8026FD4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026FD50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026FD54
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026FD58
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026FD5C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8026FD60
  c->lr=c->r[0]; // 8026FD64
  c->r[1]=c->r[1]+0x00000020u; // 8026FD68
  return; // 8026FD6C
}

// fn_8026FD70
void f_8026FD70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FD70
  c->r[0]=c->lr; // 8026FD74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026FD78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026FD7C
  c->r[31]=0u+0x00000000u; // 8026FD80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026FD84
  c->r[30]=0u+0x00000000u; // 8026FD88
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026FD8C
  c->r[29]=c->r[4]|c->r[4]; // 8026FD90
  W32(c->r[1]+0x00000010u,c->r[28]); // 8026FD94
  c->r[28]=c->r[3]|c->r[3]; // 8026FD98
  goto L_8026FDCC; // 8026FD9C
L_8026FDA0:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8026FDA0
  c->r[6]=c->r[29]|c->r[29]; // 8026FDA4
  c->r[4]=0u+0x00000007u; // 8026FDA8
  c->r[5]=0u+0x00000000u; // 8026FDAC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8026FDB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026FDB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026FDB8
  c->ctr=c->r[12]; // 8026FDBC
  c->r[30]=c->r[30]+0x00000001u; // 8026FDC0
  c->r[31]=c->r[31]+0x00000004u; // 8026FDC4
  if (true) { c->lr=0x8026FDCCu; dispatch(c,c->ctr); } // 8026FDC8
L_8026FDCC:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 8026FDCC
  cmpu(c,0,c->r[30],c->r[0]); // 8026FDD0
  if (!crb(c,2)) { IRQCHK(c); goto L_8026FDA0; } // 8026FDD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026FDD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026FDDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026FDE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026FDE4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8026FDE8
  c->lr=c->r[0]; // 8026FDEC
  c->r[1]=c->r[1]+0x00000020u; // 8026FDF0
  return; // 8026FDF4
}

// fn_8026FDF8
void f_8026FDF8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8026FDF8
  return; // 8026FDFC
}

// fn_8026FE00
void f_8026FE00(Ctx* __restrict c) {
  c->r[7]=0u+0x80340000u; // 8026FE00
  c->r[0]=0u+0x00000000u; // 8026FE04
  c->r[7]=c->r[7]+0x00004D88u; // 8026FE08
  W32(c->r[3]+0x00000004u,c->r[4]); // 8026FE0C
  W32(c->r[3]+0x00000000u,c->r[7]); // 8026FE10
  W32(c->r[3]+0x00000008u,c->r[5]); // 8026FE14
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8026FE18
  W32(c->r[3]+0x00000010u,c->r[0]); // 8026FE1C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8026FE20
  return; // 8026FE24
}

// fn_8026FE28
void f_8026FE28(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8026FE28
  W32(c->r[3]+0x00000014u,c->r[0]); // 8026FE2C
  W32(c->r[3]+0x00000010u,c->r[0]); // 8026FE30
  return; // 8026FE34
}

// fn_8026FE38
void f_8026FE38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FE38
  c->r[0]=c->lr; // 8026FE3C
  cmps(c,0,(int32_t)c->r[3],0); // 8026FE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026FE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026FE48
  c->r[31]=c->r[3]|c->r[3]; // 8026FE4C
  if (crb(c,2)) { goto L_8026FE60; } // 8026FE50
  cmps(c,0,(int32_t)c->r[4],0); // 8026FE54
  if (!crb(c,1)) { goto L_8026FE60; } // 8026FE58
  c->lr=0x8026FE60u; f_800D6AD0(c); // 8026FE5C
L_8026FE60:;
  c->r[3]=c->r[31]|c->r[31]; // 8026FE60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026FE64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026FE68
  c->lr=c->r[0]; // 8026FE6C
  c->r[1]=c->r[1]+0x00000010u; // 8026FE70
  return; // 8026FE74
}

// fn_8026FE78
void f_8026FE78(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8026FE78
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026FE7C
  c->r[3]=c->r[3]+0xFFFF86E0u; // 8026FE80
  cmpu(c,0,c->r[0],c->r[3]); // 8026FE84
  if (!crb(c,2)) { goto L_8026FE94; } // 8026FE88
  c->r[3]=0u+0x00000001u; // 8026FE8C
  return; // 8026FE90
L_8026FE94:;
  c->r[3]=0u+0x80310000u; // 8026FE94
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026FE98
  c->r[3]=c->r[3]+0xFFFF86D0u; // 8026FE9C
  cmpu(c,0,c->r[0],c->r[3]); // 8026FEA0
  if (!crb(c,2)) { goto L_8026FEB0; } // 8026FEA4
  c->r[3]=0u+0x00000001u; // 8026FEA8
  return; // 8026FEAC
L_8026FEB0:;
  c->r[3]=0u+0x80310000u; // 8026FEB0
  c->r[3]=c->r[3]+0xFFFF86B0u; // 8026FEB4
  cmpu(c,0,c->r[0],c->r[3]); // 8026FEB8
  if (!crb(c,2)) { goto L_8026FEC8; } // 8026FEBC
  c->r[3]=0u+0x00000001u; // 8026FEC0
  return; // 8026FEC4
L_8026FEC8:;
  c->r[3]=0u+0x80310000u; // 8026FEC8
  c->r[3]=c->r[3]+0xFFFF8588u; // 8026FECC
  c->r[0]=c->r[3]-c->r[0]; // 8026FED0
  c->r[0]=cntlz(c->r[0]); // 8026FED4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026FED8
  return; // 8026FEDC
}

// fn_8026FEE0
void f_8026FEE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FEE0
  c->r[0]=c->lr; // 8026FEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026FEE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026FEEC
  c->r[12]=R32(c->r[12]+0x00000014u); // 8026FEF0
  c->ctr=c->r[12]; // 8026FEF4
  if (true) { c->lr=0x8026FEFCu; dispatch(c,c->ctr); } // 8026FEF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026FEFC
  c->r[3]=c->r[3]+0x00000004u; // 8026FF00
  c->lr=c->r[0]; // 8026FF04
  c->r[1]=c->r[1]+0x00000010u; // 8026FF08
  return; // 8026FF0C
}

// fn_8026FF10
void f_8026FF10(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8026FF10
  c->r[3]=c->r[3]+0xFFFF86E0u; // 8026FF14
  return; // 8026FF18
}

// ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
void f_8026FF1C(Ctx* __restrict c) {
  trace_call(0x8026FF1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026FF1C
  c->r[0]=c->lr; // 8026FF20
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026FF24
  c->r[11]=c->r[1]+0x00000040u; // 8026FF28
  c->lr=0x8026FF30u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8026FF2C
  W32(c->r[1]+0x00000008u,c->r[4]); // 8026FF30
  c->r[26]=c->r[5]|c->r[5]; // 8026FF34
  c->r[30]=c->r[3]|c->r[3]; // 8026FF38
  c->r[5]=R32(c->r[3]+0x000000D4u); // 8026FF3C
  cmps(c,0,(int32_t)c->r[5],0); // 8026FF40
  if (crb(c,2)) { goto L_8026FF84; } // 8026FF44
  c->r[0]=R16(c->r[3]+0x000000DAu); // 8026FF48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026FF4C
  if (crb(c,2)) { goto L_8026FF84; } // 8026FF50
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8026FF54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026FF58
  if (crb(c,2)) { goto L_8026FF84; } // 8026FF5C
  c->r[3]=c->r[5]|c->r[5]; // 8026FF60
  c->r[6]=c->r[4]|c->r[4]; // 8026FF64
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026FF68
  c->r[5]=c->r[30]|c->r[30]; // 8026FF6C
  c->r[7]=c->r[26]|c->r[26]; // 8026FF70
  c->r[4]=0u+0x00000001u; // 8026FF74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026FF78
  c->ctr=c->r[12]; // 8026FF7C
  if (true) { c->lr=0x8026FF84u; dispatch(c,c->ctr); } // 8026FF80
L_8026FF84:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8026FF84
  c->r[3]=c->r[30]|c->r[30]; // 8026FF88
  c->r[4]=c->r[26]|c->r[26]; // 8026FF8C
  c->r[5]=c->r[1]+0x00000008u; // 8026FF90
  c->r[12]=R32(c->r[12]+0x00000030u); // 8026FF94
  c->ctr=c->r[12]; // 8026FF98
  if (true) { c->lr=0x8026FFA0u; dispatch(c,c->ctr); } // 8026FF9C
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8026FFA0
  c->r[6]=R32(c->r[1]+0x00000008u); // 8026FFA4
  cmps(c,0,(int32_t)c->r[3],0); // 8026FFA8
  if (crb(c,2)) { goto L_8026FFE4; } // 8026FFAC
  c->r[0]=R16(c->r[30]+0x000000DAu); // 8026FFB0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026FFB4
  if (crb(c,2)) { goto L_8026FFE4; } // 8026FFB8
  c->r[0]=R8(c->r[30]+0x000000D8u); // 8026FFBC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8026FFC0
  if (crb(c,2)) { goto L_8026FFE4; } // 8026FFC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8026FFC8
  c->r[5]=c->r[30]|c->r[30]; // 8026FFCC
  c->r[7]=c->r[26]|c->r[26]; // 8026FFD0
  c->r[4]=0u+0x00000002u; // 8026FFD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8026FFD8
  c->ctr=c->r[12]; // 8026FFDC
  if (true) { c->lr=0x8026FFE4u; dispatch(c,c->ctr); } // 8026FFE0
L_8026FFE4:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8026FFE4
  c->r[31]=0u+0x00000000u; // 8026FFE8
  c->r[3]=c->r[3]+0x0000004Cu; // 8026FFEC
  c->r[0]=R32(c->r[3]+0x00000024u); // 8026FFF0
  c->r[28]=R32(c->r[3]+c->r[0]); // 8026FFF4
  cmpu(c,0,c->r[28],0x00000008u); // 8026FFF8
  if (!crb(c,1)) { goto L_80270038; } // 8026FFFC
  cmpu(c,0,c->r[28],0x00000156u); // 80270000
  if (!crb(c,0)) { goto L_80270038; } // 80270004
  c->lr=0x8027000Cu; f_802A8660(c); // 80270008
  cmpu(c,0,c->r[3],0x00000001u); // 8027000C
  c->r[31]=c->r[3]|c->r[3]; // 80270010
  if (!crb(c,2)) { goto L_80270038; } // 80270014
  c->r[0]=R32(c->r[30]+0x00000104u); // 80270018
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 8027001C
  c->r[3]=R32(c->r[30]+0x000000ECu); // 80270020
  c->r[0]=c->r[0]|0x00000001u; // 80270024
  W32(c->r[30]+0x00000104u,c->r[0]); // 80270028
  c->lr=0x80270030u; f_8015C034(c); // 8027002C
  c->r[27]=0u+0xE0000000u; // 80270030
  goto L_80270048; // 80270034
L_80270038:;
  c->r[0]=R32(c->r[30]+0x00000104u); // 80270038
  c->r[27]=R32(c->r[30]+0x000000ECu); // 8027003C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80270040
  W32(c->r[30]+0x00000104u,c->r[0]); // 80270044
L_80270048:;
  c->r[3]=c->r[30]|c->r[30]; // 80270048
  c->lr=0x80270050u; f_8026D3C4(c); // 8027004C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80270050
  c->r[4]=0u+0x00020000u; // 80270054
  c->r[29]=c->r[3]|c->r[3]; // 80270058
  c->r[3]=c->r[30]|c->r[30]; // 8027005C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80270060
  c->r[4]=c->r[4]+0x00000001u; // 80270064
  c->r[5]=c->r[1]+0x00000018u; // 80270068
  c->r[26]=0u+0xF0000000u; // 8027006C
  c->ctr=c->r[12]; // 80270070
  if (true) { c->lr=0x80270078u; dispatch(c,c->ctr); } // 80270074
  cmps(c,0,(int32_t)c->r[29],1); // 80270078
  if (!crb(c,2)) { goto L_80270088; } // 8027007C
  c->r[26]=0u+0x30000000u; // 80270080
  goto L_80270094; // 80270084
L_80270088:;
  cmps(c,0,(int32_t)c->r[29],2); // 80270088
  if (!crb(c,2)) { goto L_80270094; } // 8027008C
  c->r[26]=0u+0x00000000u; // 80270090
L_80270094:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 80270094
  cmps(c,0,(int32_t)c->r[0],0); // 80270098
  if (crb(c,2)) { goto L_802700A4; } // 8027009C
  c->r[26]=c->r[26]|0x08000000u; // 802700A0
L_802700A4:;
  c->r[5]=R32(c->r[30]+0x0000011Cu); // 802700A4
  cmps(c,0,(int32_t)c->r[5],0); // 802700A8
  if (crb(c,2)) { goto L_802700F4; } // 802700AC
  c->r[4]=R16(c->r[30]+0x00000122u); // 802700B0
  c->r[3]=c->r[27]|c->r[27]; // 802700B4
  c->r[0]=R8(c->r[30]+0x00000120u); // 802700B8
  c->r[10]=c->r[26]|c->r[26]; // 802700BC
  c->r[6]=c->r[30]+0x0000003Cu; // 802700C0
  c->r[7]=c->r[1]+0x00000014u; // 802700C4
  W32(c->r[1]+0x00000020u,c->r[5]); // 802700C8
  c->r[9]=c->r[1]+0x00000020u; // 802700CC
  W8(c->r[1]+0x00000024u,c->r[0]); // 802700D0
  W16(c->r[1]+0x00000026u,c->r[4]); // 802700D4
  c->r[8]=R32(c->r[30]+0x00000124u); // 802700D8
  c->r[0]=R32(c->r[30]+0x000000E8u); // 802700DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802700E0
  c->r[4]=R32(c->r[30]+0x000000F0u); // 802700E4
  c->r[5]=R32(c->r[30]+0x00000108u); // 802700E8
  c->lr=0x802700F0u; f_80266B74(c); // 802700EC
  goto L_80270120; // 802700F0
L_802700F4:;
  c->r[8]=R32(c->r[30]+0x00000124u); // 802700F4
  c->r[3]=c->r[27]|c->r[27]; // 802700F8
  c->r[0]=R32(c->r[30]+0x000000E8u); // 802700FC
  c->r[10]=c->r[26]|c->r[26]; // 80270100
  c->r[6]=c->r[30]+0x0000003Cu; // 80270104
  c->r[7]=c->r[1]+0x00000010u; // 80270108
  W32(c->r[1]+0x00000010u,c->r[0]); // 8027010C
  c->r[9]=0u+0x00000000u; // 80270110
  c->r[4]=R32(c->r[30]+0x000000F0u); // 80270114
  c->r[5]=R32(c->r[30]+0x00000108u); // 80270118
  c->lr=0x80270120u; f_80266B74(c); // 8027011C
L_80270120:;
  c->r[6]=R32(c->r[30]+0x0000010Cu); // 80270120
  cmps(c,0,(int32_t)c->r[6],0); // 80270124
  if (crb(c,2)) { goto L_80270144; } // 80270128
  c->r[0]=R32(c->r[30]+0x000000E8u); // 8027012C
  c->r[3]=c->r[27]|c->r[27]; // 80270130
  c->r[5]=c->r[1]+0x0000000Cu; // 80270134
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80270138
  c->r[4]=R32(c->r[30]+0x000000F0u); // 8027013C
  c->lr=0x80270144u; f_80267138(c); // 80270140
L_80270144:;
  cmps(c,0,(int32_t)c->r[31],0); // 80270144
  if (crb(c,2)) { goto L_80270160; } // 80270148
  c->r[5]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 8027014C
  c->r[3]=R32(c->r[30]+0x000000ECu); // 80270150
  c->r[4]=0u+0xE0000000u; // 80270154
  c->lr=0x8027015Cu; f_802A8718(c); // 80270158
  c->lr=0x80270160u; f_802A86D0(c); // 8027015C
L_80270160:;
  c->r[11]=c->r[1]+0x00000040u; // 80270160
  c->lr=0x80270168u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80270164
  c->r[0]=R32(c->r[1]+0x00000044u); // 80270168
  c->lr=c->r[0]; // 8027016C
  c->r[1]=c->r[1]+0x00000040u; // 80270170
  return; // 80270174
}

// ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather
void f_80270178(Ctx* __restrict c) {
  trace_call(0x80270178u);
  c->r[4]=c->r[3]|c->r[3]; // 80270178
  c->r[12]=R32(c->r[5]+0x00000000u); // 8027017C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80270180
  c->r[3]=c->r[5]|c->r[5]; // 80270184
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80270188
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 8027018C
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 80270190
  c->r[5]=cntlz(c->r[5]); // 80270194
  c->r[0]=cntlz(c->r[0]); // 80270198
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 8027019C
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 802701A0
  c->ctr=c->r[12]; // 802701A4
  if (true) { dispatch(c,c->ctr); return; } // 802701A8
}

// ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
void f_802701AC(Ctx* __restrict c) {
  trace_call(0x802701ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802701AC
  c->r[0]=c->lr; // 802701B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802701B4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802701B8
  c->r[31]=c->r[5]|c->r[5]; // 802701BC
  W32(c->r[1]+0x00000028u,c->r[30]); // 802701C0
  c->r[30]=c->r[4]|c->r[4]; // 802701C4
  W32(c->r[1]+0x00000024u,c->r[29]); // 802701C8
  c->r[29]=c->r[3]|c->r[3]; // 802701CC
  c->r[7]=R8(c->r[3]+0x00000101u); // 802701D0
  c->r[6]=R8(c->r[3]+0x00000100u); // 802701D4
  c->r[4]=c->r[7]+0x00000001u; // 802701D8
  c->r[7]=R32(c->r[3]+0x000000D4u); // 802701DC
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 802701E0
  cmps(c,0,(int32_t)c->r[7],0); // 802701E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 802701E8
  c->r[0]=c->r[4]-c->r[0]; // 802701EC
  W8(c->r[3]+0x00000101u,c->r[0]); // 802701F0
  if (crb(c,2)) { goto L_80270234; } // 802701F4
  c->r[0]=R16(c->r[3]+0x000000DAu); // 802701F8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802701FC
  if (crb(c,2)) { goto L_80270234; } // 80270200
  c->r[0]=R8(c->r[3]+0x000000D8u); // 80270204
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80270208
  if (crb(c,2)) { goto L_80270234; } // 8027020C
  c->r[12]=R32(c->r[7]+0x00000000u); // 80270210
  c->r[3]=c->r[7]|c->r[7]; // 80270214
  c->r[5]=c->r[29]|c->r[29]; // 80270218
  c->r[6]=c->r[30]|c->r[30]; // 8027021C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80270220
  c->r[7]=c->r[31]|c->r[31]; // 80270224
  c->r[4]=0u+0x00000001u; // 80270228
  c->ctr=c->r[12]; // 8027022C
  if (true) { c->lr=0x80270234u; dispatch(c,c->ctr); } // 80270230
L_80270234:;
  c->r[3]=c->r[29]|c->r[29]; // 80270234
  c->r[4]=c->r[31]|c->r[31]; // 80270238
  c->lr=0x80270240u; f_8026CC48(c); // 8027023C
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80270240
  cmps(c,0,(int32_t)c->r[3],0); // 80270244
  if (crb(c,2)) { goto L_80270284; } // 80270248
  c->r[0]=R16(c->r[29]+0x000000DAu); // 8027024C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80270250
  if (crb(c,2)) { goto L_80270284; } // 80270254
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80270258
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8027025C
  if (crb(c,2)) { goto L_80270284; } // 80270260
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270264
  c->r[5]=c->r[29]|c->r[29]; // 80270268
  c->r[6]=c->r[30]|c->r[30]; // 8027026C
  c->r[7]=c->r[31]|c->r[31]; // 80270270
  c->r[12]=R32(c->r[12]+0x00000014u); // 80270274
  c->r[4]=0u+0x00000002u; // 80270278
  c->ctr=c->r[12]; // 8027027C
  if (true) { c->lr=0x80270284u; dispatch(c,c->ctr); } // 80270280
L_80270284:;
  c->lr=0x80270288u; f_802A8660(c); // 80270284
  cmps(c,0,(int32_t)c->r[3],0); // 80270288
  if (crb(c,2)) { goto L_802703F8; } // 8027028C
  c->r[0]=R32(c->r[29]+0x00000104u); // 80270290
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80270294
  if (crb(c,2)) { goto L_80270350; } // 80270298
  c->r[0]=R16(c->r[29]+0x00000102u); // 8027029C
  c->r[3]=R32(c->r[29]+0x000000ECu); // 802702A0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802702A4
  c->lr=0x802702ACu; f_8015C090(c); // 802702A8
  c->r[5]=R32(c->r[29]+0x000000F8u); // 802702AC
  cmps(c,0,(int32_t)c->r[5],0); // 802702B0
  if (crb(c,2)) { goto L_802702D8; } // 802702B4
  c->r[0]=R16(c->r[29]+0x00000102u); // 802702B8
  c->r[4]=R8(c->r[29]+0x00000101u); // 802702BC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 802702C0
  c->r[0]=c->r[3]+0x0000001Fu; // 802702C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802702C8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 802702CC
  c->r[4]=c->r[5]+c->r[0]; // 802702D0
  goto L_802702DC; // 802702D4
L_802702D8:;
  c->r[4]=0u+0x00000000u; // 802702D8
L_802702DC:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 802702DC
  cmps(c,0,(int32_t)c->r[6],0); // 802702E0
  if (crb(c,2)) { goto L_80270308; } // 802702E4
  c->r[0]=R16(c->r[29]+0x00000102u); // 802702E8
  c->r[5]=R8(c->r[29]+0x00000101u); // 802702EC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802702F0
  c->r[0]=c->r[3]+0x0000001Fu; // 802702F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802702F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 802702FC
  c->r[10]=c->r[6]+c->r[0]; // 80270300
  goto L_8027030C; // 80270304
L_80270308:;
  c->r[10]=0u+0x00000000u; // 80270308
L_8027030C:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 8027030C
  c->r[8]=c->r[31]|c->r[31]; // 80270310
  c->r[9]=c->r[1]+0x00000010u; // 80270314
  W32(c->r[1]+0x00000010u,c->r[0]); // 80270318
  c->r[0]=R16(c->r[29]+0x00000102u); // 8027031C
  c->r[11]=R8(c->r[29]+0x00000101u); // 80270320
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270324
  c->r[12]=R32(c->r[29]+0x000000F4u); // 80270328
  c->r[5]=R32(c->r[29]+0x000000ECu); // 8027032C
  c->r[6]=R32(c->r[29]+0x000000F0u); // 80270330
  c->r[0]=c->r[3]+0x0000001Fu; // 80270334
  c->r[7]=R16(c->r[29]+0x00000102u); // 80270338
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8027033C
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 80270340
  c->r[3]=c->r[12]+c->r[0]; // 80270344
  c->lr=0x8027034Cu; f_802664BC(c); // 80270348
  goto L_802703F0; // 8027034C
L_80270350:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 80270350
  cmps(c,0,(int32_t)c->r[5],0); // 80270354
  if (crb(c,2)) { goto L_8027037C; } // 80270358
  c->r[0]=R16(c->r[29]+0x00000102u); // 8027035C
  c->r[4]=R8(c->r[29]+0x00000101u); // 80270360
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80270364
  c->r[0]=c->r[3]+0x0000001Fu; // 80270368
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8027036C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80270370
  c->r[4]=c->r[5]+c->r[0]; // 80270374
  goto L_80270380; // 80270378
L_8027037C:;
  c->r[4]=0u+0x00000000u; // 8027037C
L_80270380:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 80270380
  cmps(c,0,(int32_t)c->r[6],0); // 80270384
  if (crb(c,2)) { goto L_802703AC; } // 80270388
  c->r[0]=R16(c->r[29]+0x00000102u); // 8027038C
  c->r[5]=R8(c->r[29]+0x00000101u); // 80270390
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270394
  c->r[0]=c->r[3]+0x0000001Fu; // 80270398
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8027039C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 802703A0
  c->r[10]=c->r[6]+c->r[0]; // 802703A4
  goto L_802703B0; // 802703A8
L_802703AC:;
  c->r[10]=0u+0x00000000u; // 802703AC
L_802703B0:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 802703B0
  c->r[8]=c->r[31]|c->r[31]; // 802703B4
  c->r[9]=c->r[1]+0x0000000Cu; // 802703B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802703BC
  c->r[0]=R16(c->r[29]+0x00000102u); // 802703C0
  c->r[11]=R8(c->r[29]+0x00000101u); // 802703C4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802703C8
  c->r[12]=R32(c->r[29]+0x000000F4u); // 802703CC
  c->r[5]=R32(c->r[29]+0x000000ECu); // 802703D0
  c->r[6]=R32(c->r[29]+0x000000F0u); // 802703D4
  c->r[0]=c->r[3]+0x0000001Fu; // 802703D8
  c->r[7]=R16(c->r[29]+0x00000102u); // 802703DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802703E0
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 802703E4
  c->r[3]=c->r[12]+c->r[0]; // 802703E8
  c->lr=0x802703F0u; f_80265FE0(c); // 802703EC
L_802703F0:;
  c->lr=0x802703F4u; f_802A86D0(c); // 802703F0
  goto L_80270498; // 802703F4
L_802703F8:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 802703F8
  cmps(c,0,(int32_t)c->r[5],0); // 802703FC
  if (crb(c,2)) { goto L_80270424; } // 80270400
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270404
  c->r[4]=R8(c->r[29]+0x00000101u); // 80270408
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 8027040C
  c->r[0]=c->r[3]+0x0000001Fu; // 80270410
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270414
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80270418
  c->r[4]=c->r[5]+c->r[0]; // 8027041C
  goto L_80270428; // 80270420
L_80270424:;
  c->r[4]=0u+0x00000000u; // 80270424
L_80270428:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 80270428
  cmps(c,0,(int32_t)c->r[6],0); // 8027042C
  if (crb(c,2)) { goto L_80270454; } // 80270430
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270434
  c->r[5]=R8(c->r[29]+0x00000101u); // 80270438
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8027043C
  c->r[0]=c->r[3]+0x0000001Fu; // 80270440
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270444
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 80270448
  c->r[10]=c->r[6]+c->r[0]; // 8027044C
  goto L_80270458; // 80270450
L_80270454:;
  c->r[10]=0u+0x00000000u; // 80270454
L_80270458:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 80270458
  c->r[8]=c->r[31]|c->r[31]; // 8027045C
  c->r[9]=c->r[1]+0x00000008u; // 80270460
  W32(c->r[1]+0x00000008u,c->r[0]); // 80270464
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270468
  c->r[11]=R8(c->r[29]+0x00000101u); // 8027046C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270470
  c->r[12]=R32(c->r[29]+0x000000F4u); // 80270474
  c->r[5]=R32(c->r[29]+0x000000ECu); // 80270478
  c->r[6]=R32(c->r[29]+0x000000F0u); // 8027047C
  c->r[0]=c->r[3]+0x0000001Fu; // 80270480
  c->r[7]=R16(c->r[29]+0x00000102u); // 80270484
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270488
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 8027048C
  c->r[3]=c->r[12]+c->r[0]; // 80270490
  c->lr=0x80270498u; f_80265CA4(c); // 80270494
L_80270498:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80270498
  cmps(c,0,(int32_t)c->r[3],0); // 8027049C
  if (crb(c,2)) { goto L_802704DC; } // 802704A0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 802704A4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802704A8
  if (crb(c,2)) { goto L_802704DC; } // 802704AC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 802704B0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802704B4
  if (crb(c,2)) { goto L_802704DC; } // 802704B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802704BC
  c->r[5]=c->r[29]|c->r[29]; // 802704C0
  c->r[6]=c->r[30]|c->r[30]; // 802704C4
  c->r[7]=c->r[31]|c->r[31]; // 802704C8
  c->r[12]=R32(c->r[12]+0x00000014u); // 802704CC
  c->r[4]=0u+0x00000004u; // 802704D0
  c->ctr=c->r[12]; // 802704D4
  if (true) { c->lr=0x802704DCu; dispatch(c,c->ctr); } // 802704D8
L_802704DC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802704DC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802704E0
  c->r[30]=R32(c->r[1]+0x00000028u); // 802704E4
  c->r[29]=R32(c->r[1]+0x00000024u); // 802704E8
  c->lr=c->r[0]; // 802704EC
  c->r[1]=c->r[1]+0x00000030u; // 802704F0
  return; // 802704F4
}

// G3dProc__Q34nw4r3g3d12ScnMdlSimpleFUlUlPv
void f_802704F8(Ctx* __restrict c) {
  trace_call(0x802704F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802704F8
  c->r[0]=c->lr; // 802704FC
  cmpu(c,0,c->r[4],0x00000009u); // 80270500
  W32(c->r[1]+0x00000044u,c->r[0]); // 80270504
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80270508
  c->r[31]=c->r[6]|c->r[6]; // 8027050C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80270510
  c->r[30]=c->r[5]|c->r[5]; // 80270514
  W32(c->r[1]+0x00000034u,c->r[29]); // 80270518
  c->r[29]=c->r[3]|c->r[3]; // 8027051C
  if (!crb(c,0)) { goto L_80270544; } // 80270520
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80270524
  c->r[6]=0u+0x00000001u; // 80270528
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8027052C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 80270530
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80270534
  if (crb(c,2)) { goto L_80270544; } // 80270538
  c->r[0]=0u+0x00000001u; // 8027053C
  goto L_80270548; // 80270540
L_80270544:;
  c->r[0]=0u+0x00000000u; // 80270544
L_80270548:;
  cmps(c,0,(int32_t)c->r[0],0); // 80270548
  if (!crb(c,2)) { goto L_80270D6C; } // 8027054C
  cmps(c,0,(int32_t)c->r[4],6); // 80270550
  if (crb(c,2)) { goto L_80270A30; } // 80270554
  if (!crb(c,0)) { goto L_80270584; } // 80270558
  cmps(c,0,(int32_t)c->r[4],3); // 8027055C
  if (crb(c,2)) { goto L_80270D5C; } // 80270560
  if (!crb(c,0)) { goto L_80270578; } // 80270564
  cmps(c,0,(int32_t)c->r[4],1); // 80270568
  if (crb(c,2)) { goto L_802705E0; } // 8027056C
  if (!crb(c,0)) { goto L_80270654; } // 80270570
  goto L_80270D5C; // 80270574
L_80270578:;
  cmps(c,0,(int32_t)c->r[4],5); // 80270578
  if (!crb(c,0)) { goto L_802705A8; } // 8027057C
  goto L_80270720; // 80270580
L_80270584:;
  c->r[5]=0u+0x00010000u; // 80270584
  c->r[0]=c->r[5]+0x00000001u; // 80270588
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8027058C
  if (crb(c,2)) { goto L_80270D40; } // 80270590
  if (!crb(c,0)) { goto L_80270D5C; } // 80270594
  cmps(c,0,(int32_t)c->r[4],8); // 80270598
  if (crb(c,2)) { goto L_80270CB0; } // 8027059C
  if (!crb(c,0)) { goto L_80270D5C; } // 802705A0
  goto L_80270B70; // 802705A4
L_802705A8:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802705A8
  c->r[3]=c->r[31]|c->r[31]; // 802705AC
  c->r[12]=R32(c->r[31]+0x00000000u); // 802705B0
  c->r[4]=c->r[29]|c->r[29]; // 802705B4
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 802705B8
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 802705BC
  c->r[5]=cntlz(c->r[5]); // 802705C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802705C4
  c->r[0]=cntlz(c->r[0]); // 802705C8
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 802705CC
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 802705D0
  c->ctr=c->r[12]; // 802705D4
  if (true) { c->lr=0x802705DCu; dispatch(c,c->ctr); } // 802705D8
  goto L_80270D6C; // 802705DC
L_802705E0:;
  c->r[3]=c->r[29]|c->r[29]; // 802705E0
  c->r[4]=c->r[30]|c->r[30]; // 802705E4
  c->r[5]=c->r[31]|c->r[31]; // 802705E8
  c->lr=0x802705F0u; f_8026FF1C(c); // 802705EC
  c->r[4]=R32(c->r[29]+0x00000128u); // 802705F0
  cmps(c,0,(int32_t)c->r[4],0); // 802705F4
  if (crb(c,2)) { goto L_8027060C; } // 802705F8
  c->r[0]=R32(c->r[29]+0x000000E8u); // 802705FC
  c->r[3]=c->r[1]+0x00000020u; // 80270600
  W32(c->r[1]+0x00000020u,c->r[0]); // 80270604
  c->lr=0x8027060Cu; f_802595E0(c); // 80270608
L_8027060C:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 8027060C
  cmps(c,0,(int32_t)c->r[3],0); // 80270610
  if (crb(c,2)) { goto L_80270D6C; } // 80270614
  c->r[0]=R16(c->r[29]+0x000000DAu); // 80270618
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8027061C
  if (crb(c,2)) { goto L_80270D6C; } // 80270620
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80270624
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80270628
  if (crb(c,2)) { goto L_80270D6C; } // 8027062C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270630
  c->r[5]=c->r[29]|c->r[29]; // 80270634
  c->r[6]=c->r[30]|c->r[30]; // 80270638
  c->r[7]=c->r[31]|c->r[31]; // 8027063C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80270640
  c->r[4]=0u+0x00000004u; // 80270644
  c->ctr=c->r[12]; // 80270648
  if (true) { c->lr=0x80270650u; dispatch(c,c->ctr); } // 8027064C
  goto L_80270D6C; // 80270650
L_80270654:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80270654
  cmps(c,0,(int32_t)c->r[4],0); // 80270658
  if (crb(c,2)) { goto L_8027069C; } // 8027065C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80270660
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80270664
  if (crb(c,2)) { goto L_8027069C; } // 80270668
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8027066C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80270670
  if (crb(c,2)) { goto L_8027069C; } // 80270674
  c->r[12]=R32(c->r[4]+0x00000000u); // 80270678
  c->r[3]=c->r[4]|c->r[4]; // 8027067C
  c->r[5]=c->r[29]|c->r[29]; // 80270680
  c->r[6]=c->r[30]|c->r[30]; // 80270684
  c->r[12]=R32(c->r[12]+0x00000010u); // 80270688
  c->r[7]=c->r[31]|c->r[31]; // 8027068C
  c->r[4]=0u+0x00000001u; // 80270690
  c->ctr=c->r[12]; // 80270694
  if (true) { c->lr=0x8027069Cu; dispatch(c,c->ctr); } // 80270698
L_8027069C:;
  c->r[4]=R32(c->r[29]+0x00000130u); // 8027069C
  cmps(c,0,(int32_t)c->r[4],0); // 802706A0
  if (!crb(c,2)) { goto L_802706C0; } // 802706A4
  c->r[0]=R32(c->r[29]+0x00000134u); // 802706A8
  cmps(c,0,(int32_t)c->r[0],0); // 802706AC
  if (!crb(c,2)) { goto L_802706C0; } // 802706B0
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 802706B4
  cmps(c,0,(int32_t)c->r[0],0); // 802706B8
  if (crb(c,2)) { goto L_802706D8; } // 802706BC
L_802706C0:;
  c->r[6]=R32(c->r[29]+0x0000012Cu); // 802706C0
  c->r[3]=c->r[1]+0x0000001Cu; // 802706C4
  c->r[5]=R32(c->r[29]+0x00000134u); // 802706C8
  c->r[0]=R32(c->r[29]+0x000000E8u); // 802706CC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802706D0
  c->lr=0x802706D8u; f_802766CC(c); // 802706D4
L_802706D8:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 802706D8
  cmps(c,0,(int32_t)c->r[3],0); // 802706DC
  if (crb(c,2)) { goto L_80270D6C; } // 802706E0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 802706E4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802706E8
  if (crb(c,2)) { goto L_80270D6C; } // 802706EC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 802706F0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802706F4
  if (crb(c,2)) { goto L_80270D6C; } // 802706F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802706FC
  c->r[5]=c->r[29]|c->r[29]; // 80270700
  c->r[6]=c->r[30]|c->r[30]; // 80270704
  c->r[7]=c->r[31]|c->r[31]; // 80270708
  c->r[12]=R32(c->r[12]+0x00000010u); // 8027070C
  c->r[4]=0u+0x00000004u; // 80270710
  c->ctr=c->r[12]; // 80270714
  if (true) { c->lr=0x8027071Cu; dispatch(c,c->ctr); } // 80270718
  goto L_80270D6C; // 8027071C
L_80270720:;
  c->r[5]=R8(c->r[3]+0x00000101u); // 80270720
  c->r[4]=R8(c->r[3]+0x00000100u); // 80270724
  c->r[5]=c->r[5]+0x00000001u; // 80270728
  c->r[6]=R32(c->r[3]+0x000000D4u); // 8027072C
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[4]); // 80270730
  cmps(c,0,(int32_t)c->r[6],0); // 80270734
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80270738
  c->r[0]=c->r[5]-c->r[0]; // 8027073C
  W8(c->r[3]+0x00000101u,c->r[0]); // 80270740
  if (crb(c,2)) { goto L_80270784; } // 80270744
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80270748
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8027074C
  if (crb(c,2)) { goto L_80270784; } // 80270750
  c->r[0]=R8(c->r[3]+0x000000D8u); // 80270754
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80270758
  if (crb(c,2)) { goto L_80270784; } // 8027075C
  c->r[12]=R32(c->r[6]+0x00000000u); // 80270760
  c->r[3]=c->r[6]|c->r[6]; // 80270764
  c->r[5]=c->r[29]|c->r[29]; // 80270768
  c->r[6]=c->r[30]|c->r[30]; // 8027076C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80270770
  c->r[7]=c->r[31]|c->r[31]; // 80270774
  c->r[4]=0u+0x00000001u; // 80270778
  c->ctr=c->r[12]; // 8027077C
  if (true) { c->lr=0x80270784u; dispatch(c,c->ctr); } // 80270780
L_80270784:;
  c->r[3]=c->r[29]|c->r[29]; // 80270784
  c->r[4]=c->r[31]|c->r[31]; // 80270788
  c->lr=0x80270790u; f_8026CC48(c); // 8027078C
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80270790
  cmps(c,0,(int32_t)c->r[3],0); // 80270794
  if (crb(c,2)) { goto L_802707D4; } // 80270798
  c->r[0]=R16(c->r[29]+0x000000DAu); // 8027079C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802707A0
  if (crb(c,2)) { goto L_802707D4; } // 802707A4
  c->r[0]=R8(c->r[29]+0x000000D8u); // 802707A8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802707AC
  if (crb(c,2)) { goto L_802707D4; } // 802707B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802707B4
  c->r[5]=c->r[29]|c->r[29]; // 802707B8
  c->r[6]=c->r[30]|c->r[30]; // 802707BC
  c->r[7]=c->r[31]|c->r[31]; // 802707C0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802707C4
  c->r[4]=0u+0x00000002u; // 802707C8
  c->ctr=c->r[12]; // 802707CC
  if (true) { c->lr=0x802707D4u; dispatch(c,c->ctr); } // 802707D0
L_802707D4:;
  c->lr=0x802707D8u; f_802A8660(c); // 802707D4
  cmps(c,0,(int32_t)c->r[3],0); // 802707D8
  if (crb(c,2)) { goto L_80270948; } // 802707DC
  c->r[0]=R32(c->r[29]+0x00000104u); // 802707E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802707E4
  if (crb(c,2)) { goto L_802708A0; } // 802707E8
  c->r[0]=R16(c->r[29]+0x00000102u); // 802707EC
  c->r[3]=R32(c->r[29]+0x000000ECu); // 802707F0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802707F4
  c->lr=0x802707FCu; f_8015C090(c); // 802707F8
  c->r[5]=R32(c->r[29]+0x000000F8u); // 802707FC
  cmps(c,0,(int32_t)c->r[5],0); // 80270800
  if (crb(c,2)) { goto L_80270828; } // 80270804
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270808
  c->r[4]=R8(c->r[29]+0x00000101u); // 8027080C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80270810
  c->r[0]=c->r[3]+0x0000001Fu; // 80270814
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270818
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8027081C
  c->r[4]=c->r[5]+c->r[0]; // 80270820
  goto L_8027082C; // 80270824
L_80270828:;
  c->r[4]=0u+0x00000000u; // 80270828
L_8027082C:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 8027082C
  cmps(c,0,(int32_t)c->r[6],0); // 80270830
  if (crb(c,2)) { goto L_80270858; } // 80270834
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270838
  c->r[5]=R8(c->r[29]+0x00000101u); // 8027083C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270840
  c->r[0]=c->r[3]+0x0000001Fu; // 80270844
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270848
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 8027084C
  c->r[10]=c->r[6]+c->r[0]; // 80270850
  goto L_8027085C; // 80270854
L_80270858:;
  c->r[10]=0u+0x00000000u; // 80270858
L_8027085C:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 8027085C
  c->r[8]=c->r[31]|c->r[31]; // 80270860
  c->r[9]=c->r[1]+0x00000010u; // 80270864
  W32(c->r[1]+0x00000010u,c->r[0]); // 80270868
  c->r[0]=R16(c->r[29]+0x00000102u); // 8027086C
  c->r[11]=R8(c->r[29]+0x00000101u); // 80270870
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270874
  c->r[12]=R32(c->r[29]+0x000000F4u); // 80270878
  c->r[5]=R32(c->r[29]+0x000000ECu); // 8027087C
  c->r[6]=R32(c->r[29]+0x000000F0u); // 80270880
  c->r[0]=c->r[3]+0x0000001Fu; // 80270884
  c->r[7]=R16(c->r[29]+0x00000102u); // 80270888
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8027088C
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 80270890
  c->r[3]=c->r[12]+c->r[0]; // 80270894
  c->lr=0x8027089Cu; f_802664BC(c); // 80270898
  goto L_80270940; // 8027089C
L_802708A0:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 802708A0
  cmps(c,0,(int32_t)c->r[5],0); // 802708A4
  if (crb(c,2)) { goto L_802708CC; } // 802708A8
  c->r[0]=R16(c->r[29]+0x00000102u); // 802708AC
  c->r[4]=R8(c->r[29]+0x00000101u); // 802708B0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 802708B4
  c->r[0]=c->r[3]+0x0000001Fu; // 802708B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802708BC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 802708C0
  c->r[4]=c->r[5]+c->r[0]; // 802708C4
  goto L_802708D0; // 802708C8
L_802708CC:;
  c->r[4]=0u+0x00000000u; // 802708CC
L_802708D0:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 802708D0
  cmps(c,0,(int32_t)c->r[6],0); // 802708D4
  if (crb(c,2)) { goto L_802708FC; } // 802708D8
  c->r[0]=R16(c->r[29]+0x00000102u); // 802708DC
  c->r[5]=R8(c->r[29]+0x00000101u); // 802708E0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802708E4
  c->r[0]=c->r[3]+0x0000001Fu; // 802708E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802708EC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 802708F0
  c->r[10]=c->r[6]+c->r[0]; // 802708F4
  goto L_80270900; // 802708F8
L_802708FC:;
  c->r[10]=0u+0x00000000u; // 802708FC
L_80270900:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 80270900
  c->r[8]=c->r[31]|c->r[31]; // 80270904
  c->r[9]=c->r[1]+0x00000014u; // 80270908
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027090C
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270910
  c->r[11]=R8(c->r[29]+0x00000101u); // 80270914
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270918
  c->r[12]=R32(c->r[29]+0x000000F4u); // 8027091C
  c->r[5]=R32(c->r[29]+0x000000ECu); // 80270920
  c->r[6]=R32(c->r[29]+0x000000F0u); // 80270924
  c->r[0]=c->r[3]+0x0000001Fu; // 80270928
  c->r[7]=R16(c->r[29]+0x00000102u); // 8027092C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270930
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 80270934
  c->r[3]=c->r[12]+c->r[0]; // 80270938
  c->lr=0x80270940u; f_80265FE0(c); // 8027093C
L_80270940:;
  c->lr=0x80270944u; f_802A86D0(c); // 80270940
  goto L_802709E8; // 80270944
L_80270948:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 80270948
  cmps(c,0,(int32_t)c->r[5],0); // 8027094C
  if (crb(c,2)) { goto L_80270974; } // 80270950
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270954
  c->r[4]=R8(c->r[29]+0x00000101u); // 80270958
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 8027095C
  c->r[0]=c->r[3]+0x0000001Fu; // 80270960
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270964
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80270968
  c->r[4]=c->r[5]+c->r[0]; // 8027096C
  goto L_80270978; // 80270970
L_80270974:;
  c->r[4]=0u+0x00000000u; // 80270974
L_80270978:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 80270978
  cmps(c,0,(int32_t)c->r[6],0); // 8027097C
  if (crb(c,2)) { goto L_802709A4; } // 80270980
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270984
  c->r[5]=R8(c->r[29]+0x00000101u); // 80270988
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8027098C
  c->r[0]=c->r[3]+0x0000001Fu; // 80270990
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270994
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 80270998
  c->r[10]=c->r[6]+c->r[0]; // 8027099C
  goto L_802709A8; // 802709A0
L_802709A4:;
  c->r[10]=0u+0x00000000u; // 802709A4
L_802709A8:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 802709A8
  c->r[8]=c->r[31]|c->r[31]; // 802709AC
  c->r[9]=c->r[1]+0x00000018u; // 802709B0
  W32(c->r[1]+0x00000018u,c->r[0]); // 802709B4
  c->r[0]=R16(c->r[29]+0x00000102u); // 802709B8
  c->r[11]=R8(c->r[29]+0x00000101u); // 802709BC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802709C0
  c->r[12]=R32(c->r[29]+0x000000F4u); // 802709C4
  c->r[5]=R32(c->r[29]+0x000000ECu); // 802709C8
  c->r[6]=R32(c->r[29]+0x000000F0u); // 802709CC
  c->r[0]=c->r[3]+0x0000001Fu; // 802709D0
  c->r[7]=R16(c->r[29]+0x00000102u); // 802709D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802709D8
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 802709DC
  c->r[3]=c->r[12]+c->r[0]; // 802709E0
  c->lr=0x802709E8u; f_80265CA4(c); // 802709E4
L_802709E8:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 802709E8
  cmps(c,0,(int32_t)c->r[3],0); // 802709EC
  if (crb(c,2)) { goto L_80270D6C; } // 802709F0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 802709F4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802709F8
  if (crb(c,2)) { goto L_80270D6C; } // 802709FC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80270A00
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80270A04
  if (crb(c,2)) { goto L_80270D6C; } // 80270A08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270A0C
  c->r[5]=c->r[29]|c->r[29]; // 80270A10
  c->r[6]=c->r[30]|c->r[30]; // 80270A14
  c->r[7]=c->r[31]|c->r[31]; // 80270A18
  c->r[12]=R32(c->r[12]+0x00000014u); // 80270A1C
  c->r[4]=0u+0x00000004u; // 80270A20
  c->ctr=c->r[12]; // 80270A24
  if (true) { c->lr=0x80270A2Cu; dispatch(c,c->ctr); } // 80270A28
  goto L_80270D6C; // 80270A2C
L_80270A30:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80270A30
  cmps(c,0,(int32_t)c->r[4],0); // 80270A34
  if (crb(c,2)) { goto L_80270A78; } // 80270A38
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80270A3C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80270A40
  if (crb(c,2)) { goto L_80270A78; } // 80270A44
  c->r[0]=R8(c->r[3]+0x000000D8u); // 80270A48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80270A4C
  if (crb(c,2)) { goto L_80270A78; } // 80270A50
  c->r[12]=R32(c->r[4]+0x00000000u); // 80270A54
  c->r[3]=c->r[4]|c->r[4]; // 80270A58
  c->r[5]=c->r[29]|c->r[29]; // 80270A5C
  c->r[6]=c->r[30]|c->r[30]; // 80270A60
  c->r[12]=R32(c->r[12]+0x00000018u); // 80270A64
  c->r[7]=c->r[31]|c->r[31]; // 80270A68
  c->r[4]=0u+0x00000001u; // 80270A6C
  c->ctr=c->r[12]; // 80270A70
  if (true) { c->lr=0x80270A78u; dispatch(c,c->ctr); } // 80270A74
L_80270A78:;
  cmps(c,0,(int32_t)c->r[31],0); // 80270A78
  if (crb(c,2)) { goto L_80270A88; } // 80270A7C
  c->r[10]=R32(c->r[31]+0x00000000u); // 80270A80
  goto L_80270A8C; // 80270A84
L_80270A88:;
  c->r[10]=R32(c->r[29]+0x00000118u); // 80270A88
L_80270A8C:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 80270A8C
  cmps(c,0,(int32_t)c->r[5],0); // 80270A90
  if (crb(c,2)) { goto L_80270AB8; } // 80270A94
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270A98
  c->r[4]=R8(c->r[29]+0x00000101u); // 80270A9C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80270AA0
  c->r[0]=c->r[3]+0x0000001Fu; // 80270AA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270AA8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80270AAC
  c->r[5]=c->r[5]+c->r[0]; // 80270AB0
  goto L_80270ABC; // 80270AB4
L_80270AB8:;
  c->r[5]=0u+0x00000000u; // 80270AB8
L_80270ABC:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 80270ABC
  cmps(c,0,(int32_t)c->r[6],0); // 80270AC0
  if (crb(c,2)) { goto L_80270AE8; } // 80270AC4
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270AC8
  c->r[4]=R8(c->r[29]+0x00000101u); // 80270ACC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270AD0
  c->r[0]=c->r[3]+0x0000001Fu; // 80270AD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270AD8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80270ADC
  c->r[6]=c->r[6]+c->r[0]; // 80270AE0
  goto L_80270AEC; // 80270AE4
L_80270AE8:;
  c->r[6]=0u+0x00000000u; // 80270AE8
L_80270AEC:;
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270AEC
  c->r[3]=c->r[1]+0x0000000Cu; // 80270AF0
  c->r[9]=R8(c->r[29]+0x00000101u); // 80270AF4
  c->r[8]=0u+0x00000000u; // 80270AF8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270AFC
  c->r[7]=R32(c->r[29]+0x00000110u); // 80270B00
  c->r[11]=R32(c->r[29]+0x000000F4u); // 80270B04
  c->r[0]=R32(c->r[29]+0x000000E8u); // 80270B08
  c->r[4]=c->r[4]+0x0000001Fu; // 80270B0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80270B10
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80270B14
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 80270B18
  c->r[9]=0u+0x00000000u; // 80270B1C
  c->r[4]=c->r[11]+c->r[0]; // 80270B20
  c->lr=0x80270B28u; f_802683E8(c); // 80270B24
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80270B28
  cmps(c,0,(int32_t)c->r[3],0); // 80270B2C
  if (crb(c,2)) { goto L_80270D6C; } // 80270B30
  c->r[0]=R16(c->r[29]+0x000000DAu); // 80270B34
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80270B38
  if (crb(c,2)) { goto L_80270D6C; } // 80270B3C
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80270B40
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80270B44
  if (crb(c,2)) { goto L_80270D6C; } // 80270B48
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270B4C
  c->r[5]=c->r[29]|c->r[29]; // 80270B50
  c->r[6]=c->r[30]|c->r[30]; // 80270B54
  c->r[7]=c->r[31]|c->r[31]; // 80270B58
  c->r[12]=R32(c->r[12]+0x00000018u); // 80270B5C
  c->r[4]=0u+0x00000004u; // 80270B60
  c->ctr=c->r[12]; // 80270B64
  if (true) { c->lr=0x80270B6Cu; dispatch(c,c->ctr); } // 80270B68
  goto L_80270D6C; // 80270B6C
L_80270B70:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80270B70
  cmps(c,0,(int32_t)c->r[4],0); // 80270B74
  if (crb(c,2)) { goto L_80270BB8; } // 80270B78
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80270B7C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80270B80
  if (crb(c,2)) { goto L_80270BB8; } // 80270B84
  c->r[0]=R8(c->r[3]+0x000000D8u); // 80270B88
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80270B8C
  if (crb(c,2)) { goto L_80270BB8; } // 80270B90
  c->r[12]=R32(c->r[4]+0x00000000u); // 80270B94
  c->r[3]=c->r[4]|c->r[4]; // 80270B98
  c->r[5]=c->r[29]|c->r[29]; // 80270B9C
  c->r[6]=c->r[30]|c->r[30]; // 80270BA0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80270BA4
  c->r[7]=c->r[31]|c->r[31]; // 80270BA8
  c->r[4]=0u+0x00000001u; // 80270BAC
  c->ctr=c->r[12]; // 80270BB0
  if (true) { c->lr=0x80270BB8u; dispatch(c,c->ctr); } // 80270BB4
L_80270BB8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80270BB8
  if (crb(c,2)) { goto L_80270BC8; } // 80270BBC
  c->r[10]=R32(c->r[31]+0x00000000u); // 80270BC0
  goto L_80270BCC; // 80270BC4
L_80270BC8:;
  c->r[10]=R32(c->r[29]+0x00000118u); // 80270BC8
L_80270BCC:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 80270BCC
  cmps(c,0,(int32_t)c->r[5],0); // 80270BD0
  if (crb(c,2)) { goto L_80270BF8; } // 80270BD4
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270BD8
  c->r[4]=R8(c->r[29]+0x00000101u); // 80270BDC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80270BE0
  c->r[0]=c->r[3]+0x0000001Fu; // 80270BE4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270BE8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80270BEC
  c->r[5]=c->r[5]+c->r[0]; // 80270BF0
  goto L_80270BFC; // 80270BF4
L_80270BF8:;
  c->r[5]=0u+0x00000000u; // 80270BF8
L_80270BFC:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 80270BFC
  cmps(c,0,(int32_t)c->r[6],0); // 80270C00
  if (crb(c,2)) { goto L_80270C28; } // 80270C04
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270C08
  c->r[4]=R8(c->r[29]+0x00000101u); // 80270C0C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270C10
  c->r[0]=c->r[3]+0x0000001Fu; // 80270C14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270C18
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80270C1C
  c->r[6]=c->r[6]+c->r[0]; // 80270C20
  goto L_80270C2C; // 80270C24
L_80270C28:;
  c->r[6]=0u+0x00000000u; // 80270C28
L_80270C2C:;
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270C2C
  c->r[3]=c->r[1]+0x00000008u; // 80270C30
  c->r[9]=R8(c->r[29]+0x00000101u); // 80270C34
  c->r[7]=0u+0x00000000u; // 80270C38
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270C3C
  c->r[8]=R32(c->r[29]+0x00000114u); // 80270C40
  c->r[11]=R32(c->r[29]+0x000000F4u); // 80270C44
  c->r[0]=R32(c->r[29]+0x000000E8u); // 80270C48
  c->r[4]=c->r[4]+0x0000001Fu; // 80270C4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80270C50
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80270C54
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 80270C58
  c->r[9]=0u+0x00000000u; // 80270C5C
  c->r[4]=c->r[11]+c->r[0]; // 80270C60
  c->lr=0x80270C68u; f_802683E8(c); // 80270C64
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80270C68
  cmps(c,0,(int32_t)c->r[3],0); // 80270C6C
  if (crb(c,2)) { goto L_80270D6C; } // 80270C70
  c->r[0]=R16(c->r[29]+0x000000DAu); // 80270C74
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80270C78
  if (crb(c,2)) { goto L_80270D6C; } // 80270C7C
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80270C80
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80270C84
  if (crb(c,2)) { goto L_80270D6C; } // 80270C88
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270C8C
  c->r[5]=c->r[29]|c->r[29]; // 80270C90
  c->r[6]=c->r[30]|c->r[30]; // 80270C94
  c->r[7]=c->r[31]|c->r[31]; // 80270C98
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80270C9C
  c->r[4]=0u+0x00000004u; // 80270CA0
  c->ctr=c->r[12]; // 80270CA4
  if (true) { c->lr=0x80270CACu; dispatch(c,c->ctr); } // 80270CA8
  goto L_80270D6C; // 80270CAC
L_80270CB0:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 80270CB0
  cmps(c,0,(int32_t)c->r[3],0); // 80270CB4
  if (crb(c,2)) { goto L_80270CCC; } // 80270CB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270CBC
  c->r[12]=R32(c->r[12]+0x00000024u); // 80270CC0
  c->ctr=c->r[12]; // 80270CC4
  if (true) { c->lr=0x80270CCCu; dispatch(c,c->ctr); } // 80270CC8
L_80270CCC:;
  c->r[3]=R32(c->r[29]+0x00000128u); // 80270CCC
  cmps(c,0,(int32_t)c->r[3],0); // 80270CD0
  if (crb(c,2)) { goto L_80270CE8; } // 80270CD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270CD8
  c->r[12]=R32(c->r[12]+0x00000024u); // 80270CDC
  c->ctr=c->r[12]; // 80270CE0
  if (true) { c->lr=0x80270CE8u; dispatch(c,c->ctr); } // 80270CE4
L_80270CE8:;
  c->r[3]=R32(c->r[29]+0x0000012Cu); // 80270CE8
  cmps(c,0,(int32_t)c->r[3],0); // 80270CEC
  if (crb(c,2)) { goto L_80270D04; } // 80270CF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270CF4
  c->r[12]=R32(c->r[12]+0x00000024u); // 80270CF8
  c->ctr=c->r[12]; // 80270CFC
  if (true) { c->lr=0x80270D04u; dispatch(c,c->ctr); } // 80270D00
L_80270D04:;
  c->r[3]=R32(c->r[29]+0x00000130u); // 80270D04
  cmps(c,0,(int32_t)c->r[3],0); // 80270D08
  if (crb(c,2)) { goto L_80270D20; } // 80270D0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270D10
  c->r[12]=R32(c->r[12]+0x00000024u); // 80270D14
  c->ctr=c->r[12]; // 80270D18
  if (true) { c->lr=0x80270D20u; dispatch(c,c->ctr); } // 80270D1C
L_80270D20:;
  c->r[3]=R32(c->r[29]+0x00000134u); // 80270D20
  cmps(c,0,(int32_t)c->r[3],0); // 80270D24
  if (crb(c,2)) { goto L_80270D6C; } // 80270D28
  c->r[12]=R32(c->r[3]+0x00000000u); // 80270D2C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80270D30
  c->ctr=c->r[12]; // 80270D34
  if (true) { c->lr=0x80270D3Cu; dispatch(c,c->ctr); } // 80270D38
  goto L_80270D6C; // 80270D3C
L_80270D40:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80270D40
  c->r[3]=c->r[29]|c->r[29]; // 80270D44
  c->r[4]=c->r[31]|c->r[31]; // 80270D48
  c->r[12]=R32(c->r[12]+0x00000038u); // 80270D4C
  c->ctr=c->r[12]; // 80270D50
  if (true) { c->lr=0x80270D58u; dispatch(c,c->ctr); } // 80270D54
  goto L_80270D6C; // 80270D58
L_80270D5C:;
  c->r[3]=c->r[29]|c->r[29]; // 80270D5C
  c->r[5]=c->r[30]|c->r[30]; // 80270D60
  c->r[6]=c->r[31]|c->r[31]; // 80270D64
  c->lr=0x80270D6Cu; f_8026D404(c); // 80270D68
L_80270D6C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80270D6C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80270D70
  c->r[30]=R32(c->r[1]+0x00000038u); // 80270D74
  c->r[29]=R32(c->r[1]+0x00000034u); // 80270D78
  c->lr=c->r[0]; // 80270D7C
  c->r[1]=c->r[1]+0x00000040u; // 80270D80
  return; // 80270D84
}

// SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl
void f_80270D88(Ctx* __restrict c) {
  trace_call(0x80270D88u);
  c->r[6]=0u+0x00020000u; // 80270D88
  c->r[0]=c->r[6]+0x00000001u; // 80270D8C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80270D90
  if (crb(c,2)) { goto L_80270D9C; } // 80270D94
  goto L_80270DC4; // 80270D98
L_80270D9C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80270D9C
  if (crb(c,2)) { goto L_80270DB4; } // 80270DA0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80270DA4
  c->r[0]=c->r[0]|0x00000100u; // 80270DA8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 80270DAC
  goto L_80270DC8; // 80270DB0
L_80270DB4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80270DB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 80270DB8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 80270DBC
  goto L_80270DC8; // 80270DC0
L_80270DC4:;
  f_8026D23C(c); return; // 80270DC4
L_80270DC8:;
  c->r[3]=0u+0x00000001u; // 80270DC8
  return; // 80270DCC
}

// GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl
void f_80270DD0(Ctx* __restrict c) {
  trace_call(0x80270DD0u);
  cmps(c,0,(int32_t)c->r[5],0); // 80270DD0
  if (!crb(c,2)) { goto L_80270DE0; } // 80270DD4
  c->r[3]=0u+0x00000000u; // 80270DD8
  return; // 80270DDC
L_80270DE0:;
  c->r[6]=0u+0x00020000u; // 80270DE0
  c->r[0]=c->r[6]+0x00000001u; // 80270DE4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80270DE8
  if (crb(c,2)) { goto L_80270DF4; } // 80270DEC
  goto L_80270E04; // 80270DF0
L_80270DF4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80270DF4
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 80270DF8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80270DFC
  goto L_80270E08; // 80270E00
L_80270E04:;
  f_8026D284(c); return; // 80270E04
L_80270E08:;
  c->r[3]=0u+0x00000001u; // 80270E08
  return; // 80270E0C
}

// fn_80270E10
void f_80270E10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80270E10
  c->r[0]=c->lr; // 80270E14
  cmps(c,0,(int32_t)c->r[4],0); // 80270E18
  W32(c->r[1]+0x00000024u,c->r[0]); // 80270E1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80270E20
  c->r[31]=c->r[5]|c->r[5]; // 80270E24
  W32(c->r[1]+0x00000018u,c->r[30]); // 80270E28
  c->r[30]=c->r[4]|c->r[4]; // 80270E2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80270E30
  c->r[29]=c->r[3]|c->r[3]; // 80270E34
  if (crb(c,2)) { goto L_80270ED4; } // 80270E38
  c->r[0]=R32(c->r[3]+0x000000E8u); // 80270E3C
  c->r[4]=c->r[6]|c->r[6]; // 80270E40
  c->r[3]=c->r[1]+0x00000008u; // 80270E44
  W32(c->r[1]+0x00000008u,c->r[0]); // 80270E48
  c->lr=0x80270E50u; f_802514FC(c); // 80270E4C
  cmps(c,0,(int32_t)c->r[3],0); // 80270E50
  if (crb(c,2)) { goto L_80270ED4; } // 80270E54
  if (crb(c,2)) { goto L_80270E64; } // 80270E58
  c->r[3]=R32(c->r[3]+0x00000010u); // 80270E5C
  goto L_80270E68; // 80270E60
L_80270E64:;
  c->r[3]=0u+0x00000000u; // 80270E64
L_80270E68:;
  cmps(c,0,(int32_t)c->r[31],2); // 80270E68
  if (crb(c,2)) { goto L_80270E9C; } // 80270E6C
  if (!crb(c,0)) { goto L_80270ED4; } // 80270E70
  cmps(c,0,(int32_t)c->r[31],1); // 80270E74
  if (!crb(c,0)) { goto L_80270E80; } // 80270E78
  goto L_80270ED4; // 80270E7C
L_80270E80:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 80270E80
  c->r[3]=R32(c->r[29]+0x000000ECu); // 80270E84
  c->r[4]=c->r[30]|c->r[30]; // 80270E88
  c->r[3]=c->r[3]+c->r[0]; // 80270E8C
  c->lr=0x80270E94u; f_80167FC4(c); // 80270E90
  c->r[3]=0u+0x00000001u; // 80270E94
  goto L_80270ED8; // 80270E98
L_80270E9C:;
  c->r[0]=R16(c->r[29]+0x00000102u); // 80270E9C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 80270EA0
  c->r[6]=R8(c->r[29]+0x00000101u); // 80270EA4
  c->r[4]=c->r[30]|c->r[30]; // 80270EA8
  c->r[7]=R32(c->r[29]+0x000000F4u); // 80270EAC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80270EB0
  c->r[0]=c->r[5]+0x0000001Fu; // 80270EB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80270EB8
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 80270EBC
  c->r[0]=c->r[7]+c->r[0]; // 80270EC0
  c->r[3]=c->r[3]+c->r[0]; // 80270EC4
  c->lr=0x80270ECCu; f_80167FC4(c); // 80270EC8
  c->r[3]=0u+0x00000001u; // 80270ECC
  goto L_80270ED8; // 80270ED0
L_80270ED4:;
  c->r[3]=0u+0x00000000u; // 80270ED4
L_80270ED8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80270ED8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80270EDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80270EE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80270EE4
  c->lr=c->r[0]; // 80270EE8
  c->r[1]=c->r[1]+0x00000020u; // 80270EEC
  return; // 80270EF0
}

// SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_80270EF4(Ctx* __restrict c) {
  trace_call(0x80270EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80270EF4
  c->r[0]=c->lr; // 80270EF8
  cmps(c,1,(int32_t)c->r[4],0); // 80270EFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80270F00
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80270F04
  c->r[31]=c->r[4]|c->r[4]; // 80270F08
  W32(c->r[1]+0x00000038u,c->r[30]); // 80270F0C
  c->r[30]=c->r[3]|c->r[3]; // 80270F10
  W32(c->r[1]+0x00000034u,c->r[29]); // 80270F14
  if (crb(c,6)) { goto L_80270F28; } // 80270F18
  c->r[0]=R32(c->r[4]+0x00000004u); // 80270F1C
  cmps(c,0,(int32_t)c->r[0],0); // 80270F20
  if (crb(c,2)) { goto L_80270F30; } // 80270F24
L_80270F28:;
  c->r[3]=0u+0x00000000u; // 80270F28
  goto L_802714D4; // 80270F2C
L_80270F30:;
  cmpu(c,0,c->r[5],0x00000006u); // 80270F30
  if (crb(c,1)) { goto L_802712B4; } // 80270F34
  c->r[3]=0u+0x80340000u; // 80270F38
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80270F3C
  c->r[3]=c->r[3]+0x00004DF8u; // 80270F40
  c->r[3]=R32(c->r[3]+c->r[0]); // 80270F44
  c->ctr=c->r[3]; // 80270F48
  if (true) { switch (c->ctr) { case 0x80270F50u: goto L_80270F50; case 0x80270FA8u: goto L_80270FA8; case 0x80271000u: goto L_80271000; case 0x80271058u: goto L_80271058; case 0x802710B0u: goto L_802710B0; case 0x80271104u: goto L_80271104; case 0x802712B4u: goto L_802712B4; default: break; } dispatch(c,c->ctr); return; } // 80270F4C
L_80270F50:;
  c->r[29]=0u+0x00000000u; // 80270F50
  if (crb(c,6)) { goto L_80270F88; } // 80270F54
  c->r[5]=0u+0x80310000u; // 80270F58
  c->r[3]=c->r[31]|c->r[31]; // 80270F5C
  c->r[5]=c->r[5]+0xFFFF84F0u; // 80270F60
  c->r[4]=c->r[1]+0x0000002Cu; // 80270F64
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80270F68
  c->r[12]=R32(c->r[31]+0x00000000u); // 80270F6C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80270F70
  c->ctr=c->r[12]; // 80270F74
  if (true) { c->lr=0x80270F7Cu; dispatch(c,c->ctr); } // 80270F78
  cmps(c,0,(int32_t)c->r[3],0); // 80270F7C
  if (crb(c,2)) { goto L_80270F88; } // 80270F80
  c->r[29]=0u+0x00000001u; // 80270F84
L_80270F88:;
  cmps(c,0,(int32_t)c->r[29],0); // 80270F88
  if (crb(c,2)) { goto L_80270F98; } // 80270F8C
  c->r[29]=c->r[31]|c->r[31]; // 80270F90
  goto L_80270F9C; // 80270F94
L_80270F98:;
  c->r[29]=0u+0x00000000u; // 80270F98
L_80270F9C:;
  cmps(c,0,(int32_t)c->r[29],0); // 80270F9C
  if (!crb(c,2)) { goto L_802712BC; } // 80270FA0
  goto L_802712B4; // 80270FA4
L_80270FA8:;
  c->r[29]=0u+0x00000000u; // 80270FA8
  if (crb(c,6)) { goto L_80270FE0; } // 80270FAC
  c->r[5]=0u+0x80310000u; // 80270FB0
  c->r[3]=c->r[31]|c->r[31]; // 80270FB4
  c->r[5]=c->r[5]+0xFFFF8438u; // 80270FB8
  c->r[4]=c->r[1]+0x00000028u; // 80270FBC
  W32(c->r[1]+0x00000028u,c->r[5]); // 80270FC0
  c->r[12]=R32(c->r[31]+0x00000000u); // 80270FC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80270FC8
  c->ctr=c->r[12]; // 80270FCC
  if (true) { c->lr=0x80270FD4u; dispatch(c,c->ctr); } // 80270FD0
  cmps(c,0,(int32_t)c->r[3],0); // 80270FD4
  if (crb(c,2)) { goto L_80270FE0; } // 80270FD8
  c->r[29]=0u+0x00000001u; // 80270FDC
L_80270FE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 80270FE0
  if (crb(c,2)) { goto L_80270FF0; } // 80270FE4
  c->r[29]=c->r[31]|c->r[31]; // 80270FE8
  goto L_80270FF4; // 80270FEC
L_80270FF0:;
  c->r[29]=0u+0x00000000u; // 80270FF0
L_80270FF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 80270FF4
  if (!crb(c,2)) { goto L_80271328; } // 80270FF8
  goto L_802712B4; // 80270FFC
L_80271000:;
  c->r[29]=0u+0x00000000u; // 80271000
  if (crb(c,6)) { goto L_80271038; } // 80271004
  c->r[5]=0u+0x80310000u; // 80271008
  c->r[3]=c->r[31]|c->r[31]; // 8027100C
  c->r[5]=c->r[5]+0xFFFF8460u; // 80271010
  c->r[4]=c->r[1]+0x00000024u; // 80271014
  W32(c->r[1]+0x00000024u,c->r[5]); // 80271018
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027101C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80271020
  c->ctr=c->r[12]; // 80271024
  if (true) { c->lr=0x8027102Cu; dispatch(c,c->ctr); } // 80271028
  cmps(c,0,(int32_t)c->r[3],0); // 8027102C
  if (crb(c,2)) { goto L_80271038; } // 80271030
  c->r[29]=0u+0x00000001u; // 80271034
L_80271038:;
  cmps(c,0,(int32_t)c->r[29],0); // 80271038
  if (crb(c,2)) { goto L_80271048; } // 8027103C
  c->r[29]=c->r[31]|c->r[31]; // 80271040
  goto L_8027104C; // 80271044
L_80271048:;
  c->r[29]=0u+0x00000000u; // 80271048
L_8027104C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8027104C
  if (!crb(c,2)) { goto L_80271394; } // 80271050
  goto L_802712B4; // 80271054
L_80271058:;
  c->r[29]=0u+0x00000000u; // 80271058
  if (crb(c,6)) { goto L_80271090; } // 8027105C
  c->r[5]=0u+0x80310000u; // 80271060
  c->r[3]=c->r[31]|c->r[31]; // 80271064
  c->r[5]=c->r[5]+0xFFFF8490u; // 80271068
  c->r[4]=c->r[1]+0x00000020u; // 8027106C
  W32(c->r[1]+0x00000020u,c->r[5]); // 80271070
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271074
  c->r[12]=R32(c->r[12]+0x00000008u); // 80271078
  c->ctr=c->r[12]; // 8027107C
  if (true) { c->lr=0x80271084u; dispatch(c,c->ctr); } // 80271080
  cmps(c,0,(int32_t)c->r[3],0); // 80271084
  if (crb(c,2)) { goto L_80271090; } // 80271088
  c->r[29]=0u+0x00000001u; // 8027108C
L_80271090:;
  cmps(c,0,(int32_t)c->r[29],0); // 80271090
  if (crb(c,2)) { goto L_802710A0; } // 80271094
  c->r[29]=c->r[31]|c->r[31]; // 80271098
  goto L_802710A4; // 8027109C
L_802710A0:;
  c->r[29]=0u+0x00000000u; // 802710A0
L_802710A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802710A4
  if (!crb(c,2)) { goto L_80271400; } // 802710A8
  goto L_802712B4; // 802710AC
L_802710B0:;
  c->r[29]=0u+0x00000000u; // 802710B0
  if (crb(c,6)) { goto L_802710E8; } // 802710B4
  c->r[5]=0u+0x80310000u; // 802710B8
  c->r[3]=c->r[31]|c->r[31]; // 802710BC
  c->r[5]=c->r[5]+0xFFFF84C0u; // 802710C0
  c->r[4]=c->r[1]+0x0000001Cu; // 802710C4
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 802710C8
  c->r[12]=R32(c->r[31]+0x00000000u); // 802710CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802710D0
  c->ctr=c->r[12]; // 802710D4
  if (true) { c->lr=0x802710DCu; dispatch(c,c->ctr); } // 802710D8
  cmps(c,0,(int32_t)c->r[3],0); // 802710DC
  if (crb(c,2)) { goto L_802710E8; } // 802710E0
  c->r[29]=0u+0x00000001u; // 802710E4
L_802710E8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802710E8
  if (crb(c,2)) { goto L_802710F4; } // 802710EC
  goto L_802710F8; // 802710F0
L_802710F4:;
  c->r[31]=0u+0x00000000u; // 802710F4
L_802710F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802710F8
  if (!crb(c,2)) { goto L_8027146C; } // 802710FC
  goto L_802712B4; // 80271100
L_80271104:;
  c->r[29]=0u+0x00000000u; // 80271104
  if (crb(c,6)) { goto L_8027113C; } // 80271108
  c->r[5]=0u+0x80310000u; // 8027110C
  c->r[3]=c->r[31]|c->r[31]; // 80271110
  c->r[5]=c->r[5]+0xFFFF84F0u; // 80271114
  c->r[4]=c->r[1]+0x00000018u; // 80271118
  W32(c->r[1]+0x00000018u,c->r[5]); // 8027111C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271120
  c->r[12]=R32(c->r[12]+0x00000008u); // 80271124
  c->ctr=c->r[12]; // 80271128
  if (true) { c->lr=0x80271130u; dispatch(c,c->ctr); } // 8027112C
  cmps(c,0,(int32_t)c->r[3],0); // 80271130
  if (crb(c,2)) { goto L_8027113C; } // 80271134
  c->r[29]=0u+0x00000001u; // 80271138
L_8027113C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8027113C
  if (crb(c,2)) { goto L_8027114C; } // 80271140
  c->r[29]=c->r[31]|c->r[31]; // 80271144
  goto L_80271150; // 80271148
L_8027114C:;
  c->r[29]=0u+0x00000000u; // 8027114C
L_80271150:;
  cmps(c,0,(int32_t)c->r[29],0); // 80271150
  if (!crb(c,2)) { goto L_802712BC; } // 80271154
  cmps(c,0,(int32_t)c->r[31],0); // 80271158
  c->r[29]=0u+0x00000000u; // 8027115C
  if (crb(c,2)) { goto L_80271194; } // 80271160
  c->r[5]=0u+0x80310000u; // 80271164
  c->r[3]=c->r[31]|c->r[31]; // 80271168
  c->r[5]=c->r[5]+0xFFFF8438u; // 8027116C
  c->r[4]=c->r[1]+0x00000014u; // 80271170
  W32(c->r[1]+0x00000014u,c->r[5]); // 80271174
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271178
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027117C
  c->ctr=c->r[12]; // 80271180
  if (true) { c->lr=0x80271188u; dispatch(c,c->ctr); } // 80271184
  cmps(c,0,(int32_t)c->r[3],0); // 80271188
  if (crb(c,2)) { goto L_80271194; } // 8027118C
  c->r[29]=0u+0x00000001u; // 80271190
L_80271194:;
  cmps(c,0,(int32_t)c->r[29],0); // 80271194
  if (crb(c,2)) { goto L_802711A4; } // 80271198
  c->r[29]=c->r[31]|c->r[31]; // 8027119C
  goto L_802711A8; // 802711A0
L_802711A4:;
  c->r[29]=0u+0x00000000u; // 802711A4
L_802711A8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802711A8
  if (!crb(c,2)) { goto L_80271328; } // 802711AC
  cmps(c,0,(int32_t)c->r[31],0); // 802711B0
  c->r[29]=0u+0x00000000u; // 802711B4
  if (crb(c,2)) { goto L_802711EC; } // 802711B8
  c->r[5]=0u+0x80310000u; // 802711BC
  c->r[3]=c->r[31]|c->r[31]; // 802711C0
  c->r[5]=c->r[5]+0xFFFF8460u; // 802711C4
  c->r[4]=c->r[1]+0x00000010u; // 802711C8
  W32(c->r[1]+0x00000010u,c->r[5]); // 802711CC
  c->r[12]=R32(c->r[31]+0x00000000u); // 802711D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802711D4
  c->ctr=c->r[12]; // 802711D8
  if (true) { c->lr=0x802711E0u; dispatch(c,c->ctr); } // 802711DC
  cmps(c,0,(int32_t)c->r[3],0); // 802711E0
  if (crb(c,2)) { goto L_802711EC; } // 802711E4
  c->r[29]=0u+0x00000001u; // 802711E8
L_802711EC:;
  cmps(c,0,(int32_t)c->r[29],0); // 802711EC
  if (crb(c,2)) { goto L_802711FC; } // 802711F0
  c->r[29]=c->r[31]|c->r[31]; // 802711F4
  goto L_80271200; // 802711F8
L_802711FC:;
  c->r[29]=0u+0x00000000u; // 802711FC
L_80271200:;
  cmps(c,0,(int32_t)c->r[29],0); // 80271200
  if (!crb(c,2)) { goto L_80271394; } // 80271204
  cmps(c,0,(int32_t)c->r[31],0); // 80271208
  c->r[29]=0u+0x00000000u; // 8027120C
  if (crb(c,2)) { goto L_80271244; } // 80271210
  c->r[5]=0u+0x80310000u; // 80271214
  c->r[3]=c->r[31]|c->r[31]; // 80271218
  c->r[5]=c->r[5]+0xFFFF8490u; // 8027121C
  c->r[4]=c->r[1]+0x0000000Cu; // 80271220
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80271224
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271228
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027122C
  c->ctr=c->r[12]; // 80271230
  if (true) { c->lr=0x80271238u; dispatch(c,c->ctr); } // 80271234
  cmps(c,0,(int32_t)c->r[3],0); // 80271238
  if (crb(c,2)) { goto L_80271244; } // 8027123C
  c->r[29]=0u+0x00000001u; // 80271240
L_80271244:;
  cmps(c,0,(int32_t)c->r[29],0); // 80271244
  if (crb(c,2)) { goto L_80271254; } // 80271248
  c->r[29]=c->r[31]|c->r[31]; // 8027124C
  goto L_80271258; // 80271250
L_80271254:;
  c->r[29]=0u+0x00000000u; // 80271254
L_80271258:;
  cmps(c,0,(int32_t)c->r[29],0); // 80271258
  if (!crb(c,2)) { goto L_80271400; } // 8027125C
  cmps(c,0,(int32_t)c->r[31],0); // 80271260
  c->r[29]=0u+0x00000000u; // 80271264
  if (crb(c,2)) { goto L_8027129C; } // 80271268
  c->r[5]=0u+0x80310000u; // 8027126C
  c->r[3]=c->r[31]|c->r[31]; // 80271270
  c->r[5]=c->r[5]+0xFFFF84C0u; // 80271274
  c->r[4]=c->r[1]+0x00000008u; // 80271278
  W32(c->r[1]+0x00000008u,c->r[5]); // 8027127C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271280
  c->r[12]=R32(c->r[12]+0x00000008u); // 80271284
  c->ctr=c->r[12]; // 80271288
  if (true) { c->lr=0x80271290u; dispatch(c,c->ctr); } // 8027128C
  cmps(c,0,(int32_t)c->r[3],0); // 80271290
  if (crb(c,2)) { goto L_8027129C; } // 80271294
  c->r[29]=0u+0x00000001u; // 80271298
L_8027129C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8027129C
  if (crb(c,2)) { goto L_802712A8; } // 802712A0
  goto L_802712AC; // 802712A4
L_802712A8:;
  c->r[31]=0u+0x00000000u; // 802712A8
L_802712AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802712AC
  if (!crb(c,2)) { goto L_8027146C; } // 802712B0
L_802712B4:;
  c->r[3]=0u+0x00000000u; // 802712B4
  goto L_802714D4; // 802712B8
L_802712BC:;
  c->r[3]=c->r[29]|c->r[29]; // 802712BC
  c->r[4]=0u+0x00000004u; // 802712C0
  c->lr=0x802712C8u; f_8025FA40(c); // 802712C4
  cmps(c,0,(int32_t)c->r[3],0); // 802712C8
  if (!crb(c,2)) { goto L_802712D8; } // 802712CC
  c->r[3]=0u+0x00000000u; // 802712D0
  goto L_802714D4; // 802712D4
L_802712D8:;
  c->r[4]=R32(c->r[30]+0x00000124u); // 802712D8
  cmps(c,0,(int32_t)c->r[4],0); // 802712DC
  if (crb(c,2)) { goto L_802712F8; } // 802712E0
  c->r[12]=R32(c->r[30]+0x00000000u); // 802712E4
  c->r[3]=c->r[30]|c->r[30]; // 802712E8
  c->r[12]=R32(c->r[12]+0x00000038u); // 802712EC
  c->ctr=c->r[12]; // 802712F0
  if (true) { c->lr=0x802712F8u; dispatch(c,c->ctr); } // 802712F4
L_802712F8:;
  W32(c->r[30]+0x00000124u,c->r[29]); // 802712F8
  c->r[4]=0u+0x00010000u; // 802712FC
  c->r[3]=c->r[29]|c->r[29]; // 80271300
  c->r[6]=c->r[30]|c->r[30]; // 80271304
  c->r[12]=R32(c->r[29]+0x00000000u); // 80271308
  c->r[4]=c->r[4]+0x00000002u; // 8027130C
  c->r[5]=0u+0x00000000u; // 80271310
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80271314
  c->ctr=c->r[12]; // 80271318
  if (true) { c->lr=0x80271320u; dispatch(c,c->ctr); } // 8027131C
  c->r[3]=0u+0x00000001u; // 80271320
  goto L_802714D4; // 80271324
L_80271328:;
  c->r[3]=c->r[29]|c->r[29]; // 80271328
  c->r[4]=0u+0x00000004u; // 8027132C
  c->lr=0x80271334u; f_8025FA40(c); // 80271330
  cmps(c,0,(int32_t)c->r[3],0); // 80271334
  if (!crb(c,2)) { goto L_80271344; } // 80271338
  c->r[3]=0u+0x00000000u; // 8027133C
  goto L_802714D4; // 80271340
L_80271344:;
  c->r[4]=R32(c->r[30]+0x00000128u); // 80271344
  cmps(c,0,(int32_t)c->r[4],0); // 80271348
  if (crb(c,2)) { goto L_80271364; } // 8027134C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80271350
  c->r[3]=c->r[30]|c->r[30]; // 80271354
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271358
  c->ctr=c->r[12]; // 8027135C
  if (true) { c->lr=0x80271364u; dispatch(c,c->ctr); } // 80271360
L_80271364:;
  W32(c->r[30]+0x00000128u,c->r[29]); // 80271364
  c->r[4]=0u+0x00010000u; // 80271368
  c->r[3]=c->r[29]|c->r[29]; // 8027136C
  c->r[6]=c->r[30]|c->r[30]; // 80271370
  c->r[12]=R32(c->r[29]+0x00000000u); // 80271374
  c->r[4]=c->r[4]+0x00000002u; // 80271378
  c->r[5]=0u+0x00000000u; // 8027137C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80271380
  c->ctr=c->r[12]; // 80271384
  if (true) { c->lr=0x8027138Cu; dispatch(c,c->ctr); } // 80271388
  c->r[3]=0u+0x00000001u; // 8027138C
  goto L_802714D4; // 80271390
L_80271394:;
  c->r[3]=c->r[29]|c->r[29]; // 80271394
  c->r[4]=0u+0x00000004u; // 80271398
  c->lr=0x802713A0u; f_8025FA40(c); // 8027139C
  cmps(c,0,(int32_t)c->r[3],0); // 802713A0
  if (!crb(c,2)) { goto L_802713B0; } // 802713A4
  c->r[3]=0u+0x00000000u; // 802713A8
  goto L_802714D4; // 802713AC
L_802713B0:;
  c->r[4]=R32(c->r[30]+0x0000012Cu); // 802713B0
  cmps(c,0,(int32_t)c->r[4],0); // 802713B4
  if (crb(c,2)) { goto L_802713D0; } // 802713B8
  c->r[12]=R32(c->r[30]+0x00000000u); // 802713BC
  c->r[3]=c->r[30]|c->r[30]; // 802713C0
  c->r[12]=R32(c->r[12]+0x00000038u); // 802713C4
  c->ctr=c->r[12]; // 802713C8
  if (true) { c->lr=0x802713D0u; dispatch(c,c->ctr); } // 802713CC
L_802713D0:;
  W32(c->r[30]+0x0000012Cu,c->r[29]); // 802713D0
  c->r[4]=0u+0x00010000u; // 802713D4
  c->r[3]=c->r[29]|c->r[29]; // 802713D8
  c->r[6]=c->r[30]|c->r[30]; // 802713DC
  c->r[12]=R32(c->r[29]+0x00000000u); // 802713E0
  c->r[4]=c->r[4]+0x00000002u; // 802713E4
  c->r[5]=0u+0x00000000u; // 802713E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802713EC
  c->ctr=c->r[12]; // 802713F0
  if (true) { c->lr=0x802713F8u; dispatch(c,c->ctr); } // 802713F4
  c->r[3]=0u+0x00000001u; // 802713F8
  goto L_802714D4; // 802713FC
L_80271400:;
  c->r[3]=c->r[29]|c->r[29]; // 80271400
  c->r[4]=0u+0x00000004u; // 80271404
  c->lr=0x8027140Cu; f_8025FA40(c); // 80271408
  cmps(c,0,(int32_t)c->r[3],0); // 8027140C
  if (!crb(c,2)) { goto L_8027141C; } // 80271410
  c->r[3]=0u+0x00000000u; // 80271414
  goto L_802714D4; // 80271418
L_8027141C:;
  c->r[4]=R32(c->r[30]+0x00000130u); // 8027141C
  cmps(c,0,(int32_t)c->r[4],0); // 80271420
  if (crb(c,2)) { goto L_8027143C; } // 80271424
  c->r[12]=R32(c->r[30]+0x00000000u); // 80271428
  c->r[3]=c->r[30]|c->r[30]; // 8027142C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271430
  c->ctr=c->r[12]; // 80271434
  if (true) { c->lr=0x8027143Cu; dispatch(c,c->ctr); } // 80271438
L_8027143C:;
  W32(c->r[30]+0x00000130u,c->r[29]); // 8027143C
  c->r[4]=0u+0x00010000u; // 80271440
  c->r[3]=c->r[29]|c->r[29]; // 80271444
  c->r[6]=c->r[30]|c->r[30]; // 80271448
  c->r[12]=R32(c->r[29]+0x00000000u); // 8027144C
  c->r[4]=c->r[4]+0x00000002u; // 80271450
  c->r[5]=0u+0x00000000u; // 80271454
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80271458
  c->ctr=c->r[12]; // 8027145C
  if (true) { c->lr=0x80271464u; dispatch(c,c->ctr); } // 80271460
  c->r[3]=0u+0x00000001u; // 80271464
  goto L_802714D4; // 80271468
L_8027146C:;
  c->r[3]=c->r[31]|c->r[31]; // 8027146C
  c->r[4]=0u+0x00000004u; // 80271470
  c->lr=0x80271478u; f_8025FA40(c); // 80271474
  cmps(c,0,(int32_t)c->r[3],0); // 80271478
  if (!crb(c,2)) { goto L_80271488; } // 8027147C
  c->r[3]=0u+0x00000000u; // 80271480
  goto L_802714D4; // 80271484
L_80271488:;
  c->r[4]=R32(c->r[30]+0x00000134u); // 80271488
  cmps(c,0,(int32_t)c->r[4],0); // 8027148C
  if (crb(c,2)) { goto L_802714A8; } // 80271490
  c->r[12]=R32(c->r[30]+0x00000000u); // 80271494
  c->r[3]=c->r[30]|c->r[30]; // 80271498
  c->r[12]=R32(c->r[12]+0x00000038u); // 8027149C
  c->ctr=c->r[12]; // 802714A0
  if (true) { c->lr=0x802714A8u; dispatch(c,c->ctr); } // 802714A4
L_802714A8:;
  W32(c->r[30]+0x00000134u,c->r[31]); // 802714A8
  c->r[4]=0u+0x00010000u; // 802714AC
  c->r[3]=c->r[31]|c->r[31]; // 802714B0
  c->r[6]=c->r[30]|c->r[30]; // 802714B4
  c->r[12]=R32(c->r[31]+0x00000000u); // 802714B8
  c->r[4]=c->r[4]+0x00000002u; // 802714BC
  c->r[5]=0u+0x00000000u; // 802714C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802714C4
  c->ctr=c->r[12]; // 802714C8
  if (true) { c->lr=0x802714D0u; dispatch(c,c->ctr); } // 802714CC
  c->r[3]=0u+0x00000001u; // 802714D0
L_802714D4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 802714D4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802714D8
  c->r[30]=R32(c->r[1]+0x00000038u); // 802714DC
  c->r[29]=R32(c->r[1]+0x00000034u); // 802714E0
  c->lr=c->r[0]; // 802714E4
  c->r[1]=c->r[1]+0x00000040u; // 802714E8
  return; // 802714EC
}

// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj
void f_802714F0(Ctx* __restrict c) {
  trace_call(0x802714F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802714F0
  c->r[0]=c->lr; // 802714F4
  cmps(c,0,(int32_t)c->r[4],0); // 802714F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802714FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80271500
  c->r[31]=c->r[3]|c->r[3]; // 80271504
  if (!crb(c,2)) { goto L_80271514; } // 80271508
  c->r[3]=0u+0x00000000u; // 8027150C
  goto L_80271654; // 80271510
L_80271514:;
  c->r[0]=R32(c->r[3]+0x00000124u); // 80271514
  cmpu(c,0,c->r[4],c->r[0]); // 80271518
  if (!crb(c,2)) { goto L_80271554; } // 8027151C
  c->r[3]=c->r[0]|c->r[0]; // 80271520
  c->r[4]=0u+0x00010000u; // 80271524
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271528
  c->r[6]=c->r[31]|c->r[31]; // 8027152C
  c->r[4]=c->r[4]+0x00000003u; // 80271530
  c->r[5]=0u+0x00000000u; // 80271534
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80271538
  c->ctr=c->r[12]; // 8027153C
  if (true) { c->lr=0x80271544u; dispatch(c,c->ctr); } // 80271540
  c->r[0]=0u+0x00000000u; // 80271544
  c->r[3]=0u+0x00000001u; // 80271548
  W32(c->r[31]+0x00000124u,c->r[0]); // 8027154C
  goto L_80271654; // 80271550
L_80271554:;
  c->r[0]=R32(c->r[3]+0x00000128u); // 80271554
  cmpu(c,0,c->r[4],c->r[0]); // 80271558
  if (!crb(c,2)) { goto L_80271594; } // 8027155C
  c->r[3]=c->r[0]|c->r[0]; // 80271560
  c->r[4]=0u+0x00010000u; // 80271564
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271568
  c->r[6]=c->r[31]|c->r[31]; // 8027156C
  c->r[4]=c->r[4]+0x00000003u; // 80271570
  c->r[5]=0u+0x00000000u; // 80271574
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80271578
  c->ctr=c->r[12]; // 8027157C
  if (true) { c->lr=0x80271584u; dispatch(c,c->ctr); } // 80271580
  c->r[0]=0u+0x00000000u; // 80271584
  c->r[3]=0u+0x00000001u; // 80271588
  W32(c->r[31]+0x00000128u,c->r[0]); // 8027158C
  goto L_80271654; // 80271590
L_80271594:;
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 80271594
  cmpu(c,0,c->r[4],c->r[0]); // 80271598
  if (!crb(c,2)) { goto L_802715D4; } // 8027159C
  c->r[3]=c->r[0]|c->r[0]; // 802715A0
  c->r[4]=0u+0x00010000u; // 802715A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802715A8
  c->r[6]=c->r[31]|c->r[31]; // 802715AC
  c->r[4]=c->r[4]+0x00000003u; // 802715B0
  c->r[5]=0u+0x00000000u; // 802715B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802715B8
  c->ctr=c->r[12]; // 802715BC
  if (true) { c->lr=0x802715C4u; dispatch(c,c->ctr); } // 802715C0
  c->r[0]=0u+0x00000000u; // 802715C4
  c->r[3]=0u+0x00000001u; // 802715C8
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 802715CC
  goto L_80271654; // 802715D0
L_802715D4:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 802715D4
  cmpu(c,0,c->r[4],c->r[0]); // 802715D8
  if (!crb(c,2)) { goto L_80271614; } // 802715DC
  c->r[3]=c->r[0]|c->r[0]; // 802715E0
  c->r[4]=0u+0x00010000u; // 802715E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802715E8
  c->r[6]=c->r[31]|c->r[31]; // 802715EC
  c->r[4]=c->r[4]+0x00000003u; // 802715F0
  c->r[5]=0u+0x00000000u; // 802715F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802715F8
  c->ctr=c->r[12]; // 802715FC
  if (true) { c->lr=0x80271604u; dispatch(c,c->ctr); } // 80271600
  c->r[0]=0u+0x00000000u; // 80271604
  c->r[3]=0u+0x00000001u; // 80271608
  W32(c->r[31]+0x00000130u,c->r[0]); // 8027160C
  goto L_80271654; // 80271610
L_80271614:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 80271614
  cmpu(c,0,c->r[4],c->r[3]); // 80271618
  if (!crb(c,2)) { goto L_80271650; } // 8027161C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271620
  c->r[4]=0u+0x00010000u; // 80271624
  c->r[6]=c->r[31]|c->r[31]; // 80271628
  c->r[5]=0u+0x00000000u; // 8027162C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80271630
  c->r[4]=c->r[4]+0x00000003u; // 80271634
  c->ctr=c->r[12]; // 80271638
  if (true) { c->lr=0x80271640u; dispatch(c,c->ctr); } // 8027163C
  c->r[0]=0u+0x00000000u; // 80271640
  c->r[3]=0u+0x00000001u; // 80271644
  W32(c->r[31]+0x00000134u,c->r[0]); // 80271648
  goto L_80271654; // 8027164C
L_80271650:;
  c->r[3]=0u+0x00000000u; // 80271650
L_80271654:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80271654
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80271658
  c->lr=c->r[0]; // 8027165C
  c->r[1]=c->r[1]+0x00000010u; // 80271660
  return; // 80271664
}

// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_80271668(Ctx* __restrict c) {
  trace_call(0x80271668u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80271668
  c->r[0]=c->lr; // 8027166C
  cmps(c,0,(int32_t)c->r[4],3); // 80271670
  W32(c->r[1]+0x00000014u,c->r[0]); // 80271674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80271678
  c->r[31]=0u+0x00000000u; // 8027167C
  if (crb(c,2)) { goto L_80271708; } // 80271680
  if (!crb(c,0)) { goto L_802716A0; } // 80271684
  cmps(c,0,(int32_t)c->r[4],1); // 80271688
  if (crb(c,2)) { goto L_802716D0; } // 8027168C
  if (!crb(c,0)) { goto L_802716EC; } // 80271690
  cmps(c,0,(int32_t)c->r[4],0); // 80271694
  if (!crb(c,0)) { goto L_802716B4; } // 80271698
  goto L_8027173C; // 8027169C
L_802716A0:;
  cmps(c,0,(int32_t)c->r[4],7); // 802716A0
  if (!crb(c,0)) { goto L_8027173C; } // 802716A4
  cmps(c,0,(int32_t)c->r[4],5); // 802716A8
  if (!crb(c,0)) { goto L_8027173C; } // 802716AC
  goto L_80271724; // 802716B0
L_802716B4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802716B4
  c->r[31]=R32(c->r[3]+0x00000124u); // 802716B8
  c->r[12]=R32(c->r[12]+0x00000038u); // 802716BC
  c->r[4]=c->r[31]|c->r[31]; // 802716C0
  c->ctr=c->r[12]; // 802716C4
  if (true) { c->lr=0x802716CCu; dispatch(c,c->ctr); } // 802716C8
  goto L_8027173C; // 802716CC
L_802716D0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802716D0
  c->r[31]=R32(c->r[3]+0x00000128u); // 802716D4
  c->r[12]=R32(c->r[12]+0x00000038u); // 802716D8
  c->r[4]=c->r[31]|c->r[31]; // 802716DC
  c->ctr=c->r[12]; // 802716E0
  if (true) { c->lr=0x802716E8u; dispatch(c,c->ctr); } // 802716E4
  goto L_8027173C; // 802716E8
L_802716EC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802716EC
  c->r[31]=R32(c->r[3]+0x0000012Cu); // 802716F0
  c->r[12]=R32(c->r[12]+0x00000038u); // 802716F4
  c->r[4]=c->r[31]|c->r[31]; // 802716F8
  c->ctr=c->r[12]; // 802716FC
  if (true) { c->lr=0x80271704u; dispatch(c,c->ctr); } // 80271700
  goto L_8027173C; // 80271704
L_80271708:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271708
  c->r[31]=R32(c->r[3]+0x00000130u); // 8027170C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271710
  c->r[4]=c->r[31]|c->r[31]; // 80271714
  c->ctr=c->r[12]; // 80271718
  if (true) { c->lr=0x80271720u; dispatch(c,c->ctr); } // 8027171C
  goto L_8027173C; // 80271720
L_80271724:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271724
  c->r[31]=R32(c->r[3]+0x00000134u); // 80271728
  c->r[12]=R32(c->r[12]+0x00000038u); // 8027172C
  c->r[4]=c->r[31]|c->r[31]; // 80271730
  c->ctr=c->r[12]; // 80271734
  if (true) { c->lr=0x8027173Cu; dispatch(c,c->ctr); } // 80271738
L_8027173C:;
  c->r[3]=c->r[31]|c->r[31]; // 8027173C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80271740
  c->r[0]=R32(c->r[1]+0x00000014u); // 80271744
  c->lr=c->r[0]; // 80271748
  c->r[1]=c->r[1]+0x00000010u; // 8027174C
  return; // 80271750
}

// fn_80271754
void f_80271754(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],3); // 80271754
  if (crb(c,2)) { goto L_802717A4; } // 80271758
  if (!crb(c,0)) { goto L_80271778; } // 8027175C
  cmps(c,0,(int32_t)c->r[4],1); // 80271760
  if (crb(c,2)) { goto L_80271794; } // 80271764
  if (!crb(c,0)) { goto L_8027179C; } // 80271768
  cmps(c,0,(int32_t)c->r[4],0); // 8027176C
  if (!crb(c,0)) { goto L_8027178C; } // 80271770
  goto L_802717B4; // 80271774
L_80271778:;
  cmps(c,0,(int32_t)c->r[4],7); // 80271778
  if (!crb(c,0)) { goto L_802717B4; } // 8027177C
  cmps(c,0,(int32_t)c->r[4],5); // 80271780
  if (!crb(c,0)) { goto L_802717B4; } // 80271784
  goto L_802717AC; // 80271788
L_8027178C:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 8027178C
  return; // 80271790
L_80271794:;
  c->r[3]=R32(c->r[3]+0x00000128u); // 80271794
  return; // 80271798
L_8027179C:;
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 8027179C
  return; // 802717A0
L_802717A4:;
  c->r[3]=R32(c->r[3]+0x00000130u); // 802717A4
  return; // 802717A8
L_802717AC:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 802717AC
  return; // 802717B0
L_802717B4:;
  c->r[3]=0u+0x00000000u; // 802717B4
  return; // 802717B8
}

// fn_802717BC
void f_802717BC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],3); // 802717BC
  if (crb(c,2)) { goto L_8027180C; } // 802717C0
  if (!crb(c,0)) { goto L_802717E0; } // 802717C4
  cmps(c,0,(int32_t)c->r[4],1); // 802717C8
  if (crb(c,2)) { goto L_802717FC; } // 802717CC
  if (!crb(c,0)) { goto L_80271804; } // 802717D0
  cmps(c,0,(int32_t)c->r[4],0); // 802717D4
  if (!crb(c,0)) { goto L_802717F4; } // 802717D8
  goto L_8027181C; // 802717DC
L_802717E0:;
  cmps(c,0,(int32_t)c->r[4],7); // 802717E0
  if (!crb(c,0)) { goto L_8027181C; } // 802717E4
  cmps(c,0,(int32_t)c->r[4],5); // 802717E8
  if (!crb(c,0)) { goto L_8027181C; } // 802717EC
  goto L_80271814; // 802717F0
L_802717F4:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 802717F4
  return; // 802717F8
L_802717FC:;
  c->r[3]=R32(c->r[3]+0x00000128u); // 802717FC
  return; // 80271800
L_80271804:;
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 80271804
  return; // 80271808
L_8027180C:;
  c->r[3]=R32(c->r[3]+0x00000130u); // 8027180C
  return; // 80271810
L_80271814:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 80271814
  return; // 80271818
L_8027181C:;
  c->r[3]=0u+0x00000000u; // 8027181C
  return; // 80271820
}

// UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv
void f_80271824(Ctx* __restrict c) {
  trace_call(0x80271824u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80271824
  c->r[0]=c->lr; // 80271828
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027182C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80271830
  c->r[31]=c->r[3]|c->r[3]; // 80271834
  c->r[0]=R32(c->r[3]+0x00000124u); // 80271838
  cmps(c,0,(int32_t)c->r[0],0); // 8027183C
  if (crb(c,2)) { goto L_80271858; } // 80271840
  c->r[3]=c->r[0]|c->r[0]; // 80271844
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271848
  c->r[12]=R32(c->r[12]+0x00000024u); // 8027184C
  c->ctr=c->r[12]; // 80271850
  if (true) { c->lr=0x80271858u; dispatch(c,c->ctr); } // 80271854
L_80271858:;
  c->r[3]=R32(c->r[31]+0x00000128u); // 80271858
  cmps(c,0,(int32_t)c->r[3],0); // 8027185C
  if (crb(c,2)) { goto L_80271874; } // 80271860
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271864
  c->r[12]=R32(c->r[12]+0x00000024u); // 80271868
  c->ctr=c->r[12]; // 8027186C
  if (true) { c->lr=0x80271874u; dispatch(c,c->ctr); } // 80271870
L_80271874:;
  c->r[3]=R32(c->r[31]+0x0000012Cu); // 80271874
  cmps(c,0,(int32_t)c->r[3],0); // 80271878
  if (crb(c,2)) { goto L_80271890; } // 8027187C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271880
  c->r[12]=R32(c->r[12]+0x00000024u); // 80271884
  c->ctr=c->r[12]; // 80271888
  if (true) { c->lr=0x80271890u; dispatch(c,c->ctr); } // 8027188C
L_80271890:;
  c->r[3]=R32(c->r[31]+0x00000130u); // 80271890
  cmps(c,0,(int32_t)c->r[3],0); // 80271894
  if (crb(c,2)) { goto L_802718AC; } // 80271898
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027189C
  c->r[12]=R32(c->r[12]+0x00000024u); // 802718A0
  c->ctr=c->r[12]; // 802718A4
  if (true) { c->lr=0x802718ACu; dispatch(c,c->ctr); } // 802718A8
L_802718AC:;
  c->r[3]=R32(c->r[31]+0x00000134u); // 802718AC
  cmps(c,0,(int32_t)c->r[3],0); // 802718B0
  if (crb(c,2)) { goto L_802718C8; } // 802718B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802718B8
  c->r[12]=R32(c->r[12]+0x00000024u); // 802718BC
  c->ctr=c->r[12]; // 802718C0
  if (true) { c->lr=0x802718C8u; dispatch(c,c->ctr); } // 802718C4
L_802718C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802718C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802718CC
  c->lr=c->r[0]; // 802718D0
  c->r[1]=c->r[1]+0x00000010u; // 802718D4
  return; // 802718D8
}

// fn_802718DC
void f_802718DC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802718DC
  if (crb(c,2)) { goto L_802718F0; } // 802718E0
  c->r[0]=R8(c->r[3]+0x00000120u); // 802718E4
  c->r[0]=c->r[0]|0x00000001u; // 802718E8
  W8(c->r[3]+0x00000120u,c->r[0]); // 802718EC
L_802718F0:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802718F0
  if (crb(c,2)) { goto L_80271904; } // 802718F4
  c->r[0]=R8(c->r[3]+0x00000120u); // 802718F8
  c->r[0]=c->r[0]|0x00000002u; // 802718FC
  W8(c->r[3]+0x00000120u,c->r[0]); // 80271900
L_80271904:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80271904
  if (crb(c,2)) return; // 80271908
  c->r[0]=R8(c->r[3]+0x00000120u); // 8027190C
  c->r[0]=c->r[0]|0x00000004u; // 80271910
  W8(c->r[3]+0x00000120u,c->r[0]); // 80271914
  return; // 80271918
}

// fn_8027191C
void f_8027191C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 8027191C
  if (crb(c,2)) { goto L_80271930; } // 80271920
  c->r[0]=R8(c->r[3]+0x00000120u); // 80271924
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80271928
  W8(c->r[3]+0x00000120u,c->r[0]); // 8027192C
L_80271930:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80271930
  if (crb(c,2)) { goto L_80271944; } // 80271934
  c->r[0]=R8(c->r[3]+0x00000120u); // 80271938
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8027193C
  W8(c->r[3]+0x00000120u,c->r[0]); // 80271940
L_80271944:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80271944
  if (crb(c,2)) return; // 80271948
  c->r[0]=R8(c->r[3]+0x00000120u); // 8027194C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80271950
  W8(c->r[3]+0x00000120u,c->r[0]); // 80271954
  return; // 80271958
}

// GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_8027195C(Ctx* __restrict c) {
  trace_call(0x8027195Cu);
  c->r[0]=R16(c->r[3]+0x00000102u); // 8027195C
  c->r[5]=R8(c->r[3]+0x00000101u); // 80271960
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80271964
  c->r[3]=R32(c->r[3]+0x000000F4u); // 80271968
  c->r[0]=c->r[4]+0x0000001Fu; // 8027196C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80271970
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 80271974
  c->r[3]=c->r[3]+c->r[0]; // 80271978
  return; // 8027197C
}

// GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_80271980(Ctx* __restrict c) {
  trace_call(0x80271980u);
  c->r[5]=R32(c->r[3]+0x000000F8u); // 80271980
  cmps(c,0,(int32_t)c->r[5],0); // 80271984
  if (crb(c,2)) { goto L_802719AC; } // 80271988
  c->r[0]=R16(c->r[3]+0x00000102u); // 8027198C
  c->r[4]=R8(c->r[3]+0x00000101u); // 80271990
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 80271994
  c->r[0]=c->r[3]+0x0000001Fu; // 80271998
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8027199C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 802719A0
  c->r[3]=c->r[5]+c->r[0]; // 802719A4
  return; // 802719A8
L_802719AC:;
  c->r[3]=0u+0x00000000u; // 802719AC
  return; // 802719B0
}

// GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_802719B4(Ctx* __restrict c) {
  trace_call(0x802719B4u);
  c->r[5]=R32(c->r[3]+0x000000FCu); // 802719B4
  cmps(c,0,(int32_t)c->r[5],0); // 802719B8
  if (crb(c,2)) { goto L_802719E0; } // 802719BC
  c->r[0]=R16(c->r[3]+0x00000102u); // 802719C0
  c->r[4]=R8(c->r[3]+0x00000101u); // 802719C4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802719C8
  c->r[0]=c->r[3]+0x0000001Fu; // 802719CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802719D0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 802719D4
  c->r[3]=c->r[5]+c->r[0]; // 802719D8
  return; // 802719DC
L_802719E0:;
  c->r[3]=0u+0x00000000u; // 802719E0
  return; // 802719E4
}

// __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii
void f_802719E8(Ctx* __restrict c) {
  trace_call(0x802719E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802719E8
  c->r[0]=c->lr; // 802719EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802719F0
  c->r[11]=c->r[1]+0x00000050u; // 802719F4
  c->lr=0x802719FCu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802719F8
  c->r[30]=R32(c->r[1]+0x00000058u); // 802719FC
  c->r[28]=c->r[3]|c->r[3]; // 80271A00
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80271A04
  c->r[29]=c->r[5]|c->r[5]; // 80271A08
  c->r[22]=c->r[6]|c->r[6]; // 80271A0C
  c->r[23]=c->r[7]|c->r[7]; // 80271A10
  c->r[24]=c->r[8]|c->r[8]; // 80271A14
  c->r[25]=c->r[9]|c->r[9]; // 80271A18
  c->r[26]=c->r[10]|c->r[10]; // 80271A1C
  c->lr=0x80271A24u; f_8026CC5C(c); // 80271A20
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80271A24
  c->r[5]=0u+0x80340000u; // 80271A28
  c->r[5]=c->r[5]+0x00004E20u; // 80271A2C
  c->r[4]=0u+0x80340000u; // 80271A30
  {uint32_t ea=c->r[28]+0x000000DCu; WF32(ea,c->f[0]);} // 80271A34
  c->r[27]=0u+0x00000000u; // 80271A38
  c->r[3]=c->r[29]|c->r[29]; // 80271A3C
  c->r[4]=c->r[4]+0x00004E14u; // 80271A40
  {uint32_t ea=c->r[28]+0x000000E0u; WF32(ea,c->f[0]);} // 80271A44
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 80271A48
  W32(c->r[28]+0x00000000u,c->r[5]); // 80271A4C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80271A50
  W32(c->r[28]+0x000000E8u,c->r[0]); // 80271A54
  W32(c->r[28]+0x000000ECu,c->r[22]); // 80271A58
  W32(c->r[28]+0x000000F0u,c->r[23]); // 80271A5C
  W32(c->r[28]+0x000000F4u,c->r[24]); // 80271A60
  W32(c->r[28]+0x000000F8u,c->r[25]); // 80271A64
  W32(c->r[28]+0x000000FCu,c->r[26]); // 80271A68
  W8(c->r[28]+0x00000100u,c->r[30]); // 80271A6C
  W8(c->r[28]+0x00000101u,c->r[27]); // 80271A70
  W16(c->r[28]+0x00000102u,c->r[31]); // 80271A74
  W32(c->r[28]+0x00000104u,c->r[27]); // 80271A78
  c->lr=0x80271A80u; f_802513D0(c); // 80271A7C
  W32(c->r[28]+0x00000108u,c->r[3]); // 80271A80
  c->r[3]=c->r[29]|c->r[29]; // 80271A84
  c->r[4]=c->r[13]+0xFFFF9748u; // 80271A88
  c->lr=0x80271A90u; f_802513D0(c); // 80271A8C
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 80271A90
  c->r[3]=c->r[29]|c->r[29]; // 80271A94
  c->r[4]=c->r[13]+0xFFFF9750u; // 80271A98
  c->lr=0x80271AA0u; f_802513D0(c); // 80271A9C
  W32(c->r[28]+0x00000110u,c->r[3]); // 80271AA0
  c->r[3]=c->r[29]|c->r[29]; // 80271AA4
  c->r[4]=c->r[13]+0xFFFF9758u; // 80271AA8
  c->lr=0x80271AB0u; f_802513D0(c); // 80271AAC
  c->r[0]=R32(c->r[28]+0x00000110u); // 80271AB0
  c->r[4]=0u+0x00000002u; // 80271AB4
  W32(c->r[28]+0x00000114u,c->r[3]); // 80271AB8
  cmps(c,0,(int32_t)c->r[0],0); // 80271ABC
  W32(c->r[28]+0x00000118u,c->r[4]); // 80271AC0
  W32(c->r[28]+0x0000011Cu,c->r[27]); // 80271AC4
  W8(c->r[28]+0x00000120u,c->r[27]); // 80271AC8
  W8(c->r[28]+0x00000121u,c->r[27]); // 80271ACC
  W16(c->r[28]+0x00000122u,c->r[27]); // 80271AD0
  W32(c->r[28]+0x00000124u,c->r[27]); // 80271AD4
  W32(c->r[28]+0x00000128u,c->r[27]); // 80271AD8
  W32(c->r[28]+0x0000012Cu,c->r[27]); // 80271ADC
  W32(c->r[28]+0x00000130u,c->r[27]); // 80271AE0
  W32(c->r[28]+0x00000134u,c->r[27]); // 80271AE4
  if (crb(c,2)) { goto L_80271AFC; } // 80271AE8
  c->r[0]=R32(c->r[28]+0x000000CCu); // 80271AEC
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 80271AF0
  W32(c->r[28]+0x000000CCu,c->r[0]); // 80271AF4
  goto L_80271B08; // 80271AF8
L_80271AFC:;
  c->r[0]=R32(c->r[28]+0x000000CCu); // 80271AFC
  c->r[0]=c->r[0]|0x20000000u; // 80271B00
  W32(c->r[28]+0x000000CCu,c->r[0]); // 80271B04
L_80271B08:;
  c->r[0]=R32(c->r[28]+0x00000114u); // 80271B08
  cmps(c,0,(int32_t)c->r[0],0); // 80271B0C
  if (crb(c,2)) { goto L_80271B24; } // 80271B10
  c->r[0]=R32(c->r[28]+0x000000CCu); // 80271B14
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 80271B18
  W32(c->r[28]+0x000000CCu,c->r[0]); // 80271B1C
  goto L_80271B30; // 80271B20
L_80271B24:;
  c->r[0]=R32(c->r[28]+0x000000CCu); // 80271B24
  c->r[0]=c->r[0]|0x40000000u; // 80271B28
  W32(c->r[28]+0x000000CCu,c->r[0]); // 80271B2C
L_80271B30:;
  c->r[3]=R32(c->r[28]+0x000000F4u); // 80271B30
  cmps(c,0,(int32_t)c->r[3],0); // 80271B34
  if (crb(c,2)) { goto L_80271B50; } // 80271B38
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 80271B3C
  c->r[0]=c->r[4]+0x0000001Fu; // 80271B40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80271B44
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 80271B48
  c->lr=0x80271B50u; f_8015C034(c); // 80271B4C
L_80271B50:;
  c->r[3]=R32(c->r[28]+0x000000F8u); // 80271B50
  cmps(c,0,(int32_t)c->r[3],0); // 80271B54
  if (crb(c,2)) { goto L_80271B70; } // 80271B58
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)36); // 80271B5C
  c->r[0]=c->r[4]+0x0000001Fu; // 80271B60
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80271B64
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 80271B68
  c->lr=0x80271B70u; f_8015C034(c); // 80271B6C
L_80271B70:;
  c->r[3]=R32(c->r[28]+0x000000FCu); // 80271B70
  cmps(c,0,(int32_t)c->r[3],0); // 80271B74
  if (crb(c,2)) { goto L_80271B90; } // 80271B78
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 80271B7C
  c->r[0]=c->r[4]+0x0000001Fu; // 80271B80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80271B84
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 80271B88
  c->lr=0x80271B90u; f_8015C034(c); // 80271B8C
L_80271B90:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80271B90
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 80271B94
  c->r[6]=c->r[3]+0x0000004Cu; // 80271B98
  cmps(c,0,(int32_t)c->r[0],0); // 80271B9C
  if (crb(c,2)) { goto L_80271BE4; } // 80271BA0
  {uint32_t ea=c->r[6]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80271BA4
  c->r[3]=c->r[28]|c->r[28]; // 80271BA8
  c->r[5]=c->r[1]+0x00000008u; // 80271BAC
  c->r[4]=0u+0x00000000u; // 80271BB0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80271BB4
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80271BB8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80271BBC
  {uint32_t ea=c->r[6]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80271BC0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80271BC4
  {uint32_t ea=c->r[6]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80271BC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80271BCC
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80271BD0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80271BD4
  {uint32_t ea=c->r[6]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80271BD8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80271BDC
  c->lr=0x80271BE4u; f_8026D120(c); // 80271BE0
L_80271BE4:;
  c->r[11]=c->r[1]+0x00000050u; // 80271BE4
  c->r[3]=c->r[28]|c->r[28]; // 80271BE8
  c->lr=0x80271BF0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80271BEC
  c->r[0]=R32(c->r[1]+0x00000054u); // 80271BF0
  c->lr=c->r[0]; // 80271BF4
  c->r[1]=c->r[1]+0x00000050u; // 80271BF8
  return; // 80271BFC
}

// __dt__Q34nw4r3g3d12ScnMdlSimpleFv
void f_80271C00(Ctx* __restrict c) {
  trace_call(0x80271C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80271C00
  c->r[0]=c->lr; // 80271C04
  cmps(c,0,(int32_t)c->r[3],0); // 80271C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80271C0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80271C10
  c->r[31]=c->r[3]|c->r[3]; // 80271C14
  if (crb(c,2)) { goto L_80271D0C; } // 80271C18
  c->r[0]=R8(c->r[3]+0x00000121u); // 80271C1C
  c->r[4]=0u+0x80340000u; // 80271C20
  c->r[4]=c->r[4]+0x00004E20u; // 80271C24
  cmps(c,0,(int32_t)c->r[0],1); // 80271C28
  W32(c->r[3]+0x00000000u,c->r[4]); // 80271C2C
  if (crb(c,2)) { goto L_80271C38; } // 80271C30
  goto L_80271C58; // 80271C34
L_80271C38:;
  c->r[3]=R32(c->r[3]+0x0000011Cu); // 80271C38
  cmps(c,0,(int32_t)c->r[3],0); // 80271C3C
  if (crb(c,2)) { goto L_80271C58; } // 80271C40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271C44
  c->r[4]=0u+0x00000001u; // 80271C48
  c->r[12]=R32(c->r[12]+0x00000008u); // 80271C4C
  c->ctr=c->r[12]; // 80271C50
  if (true) { c->lr=0x80271C58u; dispatch(c,c->ctr); } // 80271C54
L_80271C58:;
  c->r[4]=R32(c->r[31]+0x00000124u); // 80271C58
  cmps(c,0,(int32_t)c->r[4],0); // 80271C5C
  if (crb(c,2)) { goto L_80271C78; } // 80271C60
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271C64
  c->r[3]=c->r[31]|c->r[31]; // 80271C68
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271C6C
  c->ctr=c->r[12]; // 80271C70
  if (true) { c->lr=0x80271C78u; dispatch(c,c->ctr); } // 80271C74
L_80271C78:;
  c->r[4]=R32(c->r[31]+0x00000128u); // 80271C78
  cmps(c,0,(int32_t)c->r[4],0); // 80271C7C
  if (crb(c,2)) { goto L_80271C98; } // 80271C80
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271C84
  c->r[3]=c->r[31]|c->r[31]; // 80271C88
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271C8C
  c->ctr=c->r[12]; // 80271C90
  if (true) { c->lr=0x80271C98u; dispatch(c,c->ctr); } // 80271C94
L_80271C98:;
  c->r[4]=R32(c->r[31]+0x0000012Cu); // 80271C98
  cmps(c,0,(int32_t)c->r[4],0); // 80271C9C
  if (crb(c,2)) { goto L_80271CB8; } // 80271CA0
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271CA4
  c->r[3]=c->r[31]|c->r[31]; // 80271CA8
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271CAC
  c->ctr=c->r[12]; // 80271CB0
  if (true) { c->lr=0x80271CB8u; dispatch(c,c->ctr); } // 80271CB4
L_80271CB8:;
  c->r[4]=R32(c->r[31]+0x00000130u); // 80271CB8
  cmps(c,0,(int32_t)c->r[4],0); // 80271CBC
  if (crb(c,2)) { goto L_80271CD8; } // 80271CC0
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271CC4
  c->r[3]=c->r[31]|c->r[31]; // 80271CC8
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271CCC
  c->ctr=c->r[12]; // 80271CD0
  if (true) { c->lr=0x80271CD8u; dispatch(c,c->ctr); } // 80271CD4
L_80271CD8:;
  c->r[4]=R32(c->r[31]+0x00000134u); // 80271CD8
  cmps(c,0,(int32_t)c->r[4],0); // 80271CDC
  if (crb(c,2)) { goto L_80271CF8; } // 80271CE0
  c->r[12]=R32(c->r[31]+0x00000000u); // 80271CE4
  c->r[3]=c->r[31]|c->r[31]; // 80271CE8
  c->r[12]=R32(c->r[12]+0x00000038u); // 80271CEC
  c->ctr=c->r[12]; // 80271CF0
  if (true) { c->lr=0x80271CF8u; dispatch(c,c->ctr); } // 80271CF4
L_80271CF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80271CF8
  if (crb(c,2)) { goto L_80271D0C; } // 80271CFC
  c->r[3]=c->r[31]|c->r[31]; // 80271D00
  c->r[4]=0u+0x00000000u; // 80271D04
  c->lr=0x80271D0Cu; f_8026CD48(c); // 80271D08
L_80271D0C:;
  c->r[3]=c->r[31]|c->r[31]; // 80271D0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80271D10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80271D14
  c->lr=c->r[0]; // 80271D18
  c->r[1]=c->r[1]+0x00000010u; // 80271D1C
  return; // 80271D20
}

// fn_80271D24
void f_80271D24(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 80271D24
  c->r[0]=R32(c->r[4]+0x00000000u); // 80271D28
  c->r[3]=c->r[3]+0xFFFF86F0u; // 80271D2C
  cmpu(c,0,c->r[0],c->r[3]); // 80271D30
  if (!crb(c,2)) { goto L_80271D40; } // 80271D34
  c->r[3]=0u+0x00000001u; // 80271D38
  return; // 80271D3C
L_80271D40:;
  c->r[3]=0u+0x80310000u; // 80271D40
  c->r[0]=R32(c->r[4]+0x00000000u); // 80271D44
  c->r[3]=c->r[3]+0xFFFF86C0u; // 80271D48
  cmpu(c,0,c->r[0],c->r[3]); // 80271D4C
  if (!crb(c,2)) { goto L_80271D5C; } // 80271D50
  c->r[3]=0u+0x00000001u; // 80271D54
  return; // 80271D58
L_80271D5C:;
  c->r[3]=0u+0x80310000u; // 80271D5C
  c->r[3]=c->r[3]+0xFFFF86B0u; // 80271D60
  cmpu(c,0,c->r[0],c->r[3]); // 80271D64
  if (!crb(c,2)) { goto L_80271D74; } // 80271D68
  c->r[3]=0u+0x00000001u; // 80271D6C
  return; // 80271D70
L_80271D74:;
  c->r[3]=0u+0x80310000u; // 80271D74
  c->r[3]=c->r[3]+0xFFFF8588u; // 80271D78
  c->r[0]=c->r[3]-c->r[0]; // 80271D7C
  c->r[0]=cntlz(c->r[0]); // 80271D80
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80271D84
  return; // 80271D88
}

// fn_80271D8C
void f_80271D8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80271D8C
  c->r[0]=c->lr; // 80271D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80271D94
  c->r[12]=R32(c->r[3]+0x00000000u); // 80271D98
  c->r[12]=R32(c->r[12]+0x00000014u); // 80271D9C
  c->ctr=c->r[12]; // 80271DA0
  if (true) { c->lr=0x80271DA8u; dispatch(c,c->ctr); } // 80271DA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80271DA8
  c->r[3]=c->r[3]+0x00000004u; // 80271DAC
  c->lr=c->r[0]; // 80271DB0
  c->r[1]=c->r[1]+0x00000010u; // 80271DB4
  return; // 80271DB8
}

// fn_80271DBC
void f_80271DBC(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 80271DBC
  c->r[3]=c->r[3]+0xFFFF86F0u; // 80271DC0
  return; // 80271DC4
}

// fn_80271DC8
void f_80271DC8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 80271DC8
  cmps(c,0,(int32_t)c->r[5],0); // 80271DCC
  if (crb(c,2)) { goto L_80271E08; } // 80271DD0
  c->r[0]=R32(c->r[3]+0x00000014u); // 80271DD4
  cmps(c,0,(int32_t)c->r[0],0); // 80271DD8
  if (crb(c,2)) { goto L_80271E08; } // 80271DDC
  cmps(c,0,(int32_t)c->r[4],0); // 80271DE0
  if (crb(c,2)) { goto L_80271E00; } // 80271DE4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80271DE8
  c->r[5]=R32(c->r[5]+0x00000140u); // 80271DEC
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80271DF0
  c->r[0]=R32(c->r[5]+c->r[4]); // 80271DF4
  c->r[0]=c->r[0]|0x00000008u; // 80271DF8
  W32(c->r[5]+c->r[4],c->r[0]); // 80271DFC
L_80271E00:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 80271E00
  return; // 80271E04
L_80271E08:;
  c->r[3]=0u+0x00000000u; // 80271E08
  return; // 80271E0C
}

// fn_80271E10
void f_80271E10(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 80271E10
  cmps(c,0,(int32_t)c->r[5],0); // 80271E14
  if (crb(c,2)) { goto L_80271E50; } // 80271E18
  c->r[0]=R32(c->r[3]+0x00000018u); // 80271E1C
  cmps(c,0,(int32_t)c->r[0],0); // 80271E20
  if (crb(c,2)) { goto L_80271E50; } // 80271E24
  cmps(c,0,(int32_t)c->r[4],0); // 80271E28
  if (crb(c,2)) { goto L_80271E48; } // 80271E2C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80271E30
  c->r[5]=R32(c->r[5]+0x00000140u); // 80271E34
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80271E38
  c->r[0]=R32(c->r[5]+c->r[4]); // 80271E3C
  c->r[0]=c->r[0]|0x00000010u; // 80271E40
  W32(c->r[5]+c->r[4],c->r[0]); // 80271E44
L_80271E48:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80271E48
  return; // 80271E4C
L_80271E50:;
  c->r[3]=0u+0x00000000u; // 80271E50
  return; // 80271E54
}

// fn_80271E58
void f_80271E58(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 80271E58
  cmps(c,0,(int32_t)c->r[5],0); // 80271E5C
  if (crb(c,2)) { goto L_80271E98; } // 80271E60
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80271E64
  cmps(c,0,(int32_t)c->r[0],0); // 80271E68
  if (crb(c,2)) { goto L_80271E98; } // 80271E6C
  cmps(c,0,(int32_t)c->r[4],0); // 80271E70
  if (crb(c,2)) { goto L_80271E90; } // 80271E74
  c->r[0]=R32(c->r[3]+0x00000004u); // 80271E78
  c->r[5]=R32(c->r[5]+0x00000140u); // 80271E7C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80271E80
  c->r[0]=R32(c->r[5]+c->r[4]); // 80271E84
  c->r[0]=c->r[0]|0x00000020u; // 80271E88
  W32(c->r[5]+c->r[4],c->r[0]); // 80271E8C
L_80271E90:;
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80271E90
  return; // 80271E94
L_80271E98:;
  c->r[3]=0u+0x00000000u; // 80271E98
  return; // 80271E9C
}

// fn_80271EA0
void f_80271EA0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 80271EA0
  cmps(c,0,(int32_t)c->r[5],0); // 80271EA4
  if (crb(c,2)) { goto L_80271EE0; } // 80271EA8
  c->r[0]=R32(c->r[3]+0x00000020u); // 80271EAC
  cmps(c,0,(int32_t)c->r[0],0); // 80271EB0
  if (crb(c,2)) { goto L_80271EE0; } // 80271EB4
  cmps(c,0,(int32_t)c->r[4],0); // 80271EB8
  if (crb(c,2)) { goto L_80271ED8; } // 80271EBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 80271EC0
  c->r[5]=R32(c->r[5]+0x00000140u); // 80271EC4
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80271EC8
  c->r[0]=R32(c->r[5]+c->r[4]); // 80271ECC
  c->r[0]=c->r[0]|0x00000080u; // 80271ED0
  W32(c->r[5]+c->r[4],c->r[0]); // 80271ED4
L_80271ED8:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 80271ED8
  return; // 80271EDC
L_80271EE0:;
  c->r[3]=0u+0x00000000u; // 80271EE0
  return; // 80271EE4
}

// fn_80271EE8
void f_80271EE8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 80271EE8
  cmps(c,0,(int32_t)c->r[5],0); // 80271EEC
  if (crb(c,2)) { goto L_80271F28; } // 80271EF0
  c->r[0]=R32(c->r[3]+0x00000024u); // 80271EF4
  cmps(c,0,(int32_t)c->r[0],0); // 80271EF8
  if (crb(c,2)) { goto L_80271F28; } // 80271EFC
  cmps(c,0,(int32_t)c->r[4],0); // 80271F00
  if (crb(c,2)) { goto L_80271F20; } // 80271F04
  c->r[0]=R32(c->r[3]+0x00000004u); // 80271F08
  c->r[5]=R32(c->r[5]+0x00000140u); // 80271F0C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80271F10
  c->r[0]=R32(c->r[5]+c->r[4]); // 80271F14
  c->r[0]=c->r[0]|0x00000100u; // 80271F18
  W32(c->r[5]+c->r[4],c->r[0]); // 80271F1C
L_80271F20:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 80271F20
  return; // 80271F24
L_80271F28:;
  c->r[3]=0u+0x00000000u; // 80271F28
  return; // 80271F2C
}

// fn_80271F30
void f_80271F30(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 80271F30
  cmps(c,0,(int32_t)c->r[5],0); // 80271F34
  if (crb(c,2)) { goto L_80271F70; } // 80271F38
  c->r[0]=R32(c->r[3]+0x00000030u); // 80271F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80271F40
  if (crb(c,2)) { goto L_80271F70; } // 80271F44
  cmps(c,0,(int32_t)c->r[4],0); // 80271F48
  if (crb(c,2)) { goto L_80271F68; } // 80271F4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80271F50
  c->r[5]=R32(c->r[5]+0x00000140u); // 80271F54
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80271F58
  c->r[0]=R32(c->r[5]+c->r[4]); // 80271F5C
  c->r[0]=c->r[0]|0x00000800u; // 80271F60
  W32(c->r[5]+c->r[4],c->r[0]); // 80271F64
L_80271F68:;
  c->r[3]=R32(c->r[3]+0x00000030u); // 80271F68
  return; // 80271F6C
L_80271F70:;
  c->r[3]=0u+0x00000000u; // 80271F70
  return; // 80271F74
}

// fn_80271F78
void f_80271F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80271F78
  c->r[0]=c->lr; // 80271F7C
  cmps(c,0,(int32_t)c->r[4],0); // 80271F80
  W32(c->r[1]+0x00000024u,c->r[0]); // 80271F84
  c->r[0]=0u+0x00000000u; // 80271F88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80271F8C
  c->r[31]=c->r[5]|c->r[5]; // 80271F90
  W32(c->r[1]+0x00000018u,c->r[30]); // 80271F94
  c->r[30]=c->r[4]|c->r[4]; // 80271F98
  W32(c->r[1]+0x00000014u,c->r[29]); // 80271F9C
  c->r[29]=c->r[3]|c->r[3]; // 80271FA0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80271FA4
  c->r[28]=0u+0x00000000u; // 80271FA8
  W32(c->r[3]+0x00000008u,c->r[0]); // 80271FAC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80271FB0
  W32(c->r[3]+0x00000010u,c->r[0]); // 80271FB4
  W32(c->r[3]+0x00000014u,c->r[0]); // 80271FB8
  W32(c->r[3]+0x00000018u,c->r[0]); // 80271FBC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80271FC0
  W32(c->r[3]+0x00000020u,c->r[0]); // 80271FC4
  W32(c->r[3]+0x00000024u,c->r[0]); // 80271FC8
  W32(c->r[3]+0x00000028u,c->r[0]); // 80271FCC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80271FD0
  W32(c->r[3]+0x00000030u,c->r[0]); // 80271FD4
  if (crb(c,2)) { goto L_80271FFC; } // 80271FD8
  c->r[0]=R32(c->r[4]+0x000000E8u); // 80271FDC
  c->r[4]=c->r[31]|c->r[31]; // 80271FE0
  c->r[3]=c->r[1]+0x00000008u; // 80271FE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80271FE8
  c->lr=0x80271FF0u; f_80251A54(c); // 80271FEC
  cmps(c,0,(int32_t)c->r[3],0); // 80271FF0
  if (crb(c,2)) { goto L_80271FFC; } // 80271FF4
  c->r[28]=0u+0x00000001u; // 80271FF8
L_80271FFC:;
  cmps(c,0,(int32_t)c->r[28],0); // 80271FFC
  if (crb(c,2)) { goto L_8027219C; } // 80272000
  W32(c->r[29]+0x00000000u,c->r[30]); // 80272004
  W32(c->r[29]+0x00000004u,c->r[31]); // 80272008
  c->r[3]=R32(c->r[30]+0x0000014Cu); // 8027200C
  cmps(c,0,(int32_t)c->r[3],0); // 80272010
  if (crb(c,2)) { goto L_80272028; } // 80272014
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)260); // 80272018
  c->r[0]=c->r[3]+c->r[0]; // 8027201C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80272020
  goto L_80272030; // 80272024
L_80272028:;
  c->r[0]=0u+0x00000000u; // 80272028
  W32(c->r[29]+0x00000008u,c->r[0]); // 8027202C
L_80272030:;
  c->r[3]=R32(c->r[30]+0x00000150u); // 80272030
  cmps(c,0,(int32_t)c->r[3],0); // 80272034
  if (crb(c,2)) { goto L_8027204C; } // 80272038
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)100); // 8027203C
  c->r[0]=c->r[3]+c->r[0]; // 80272040
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80272044
  goto L_80272054; // 80272048
L_8027204C:;
  c->r[0]=0u+0x00000000u; // 8027204C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80272050
L_80272054:;
  c->r[3]=R32(c->r[30]+0x00000154u); // 80272054
  cmps(c,0,(int32_t)c->r[3],0); // 80272058
  if (crb(c,2)) { goto L_80272070; } // 8027205C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)584); // 80272060
  c->r[0]=c->r[3]+c->r[0]; // 80272064
  W32(c->r[29]+0x00000010u,c->r[0]); // 80272068
  goto L_80272078; // 8027206C
L_80272070:;
  c->r[0]=0u+0x00000000u; // 80272070
  W32(c->r[29]+0x00000010u,c->r[0]); // 80272074
L_80272078:;
  c->r[3]=R32(c->r[30]+0x00000158u); // 80272078
  cmps(c,0,(int32_t)c->r[3],0); // 8027207C
  if (crb(c,2)) { goto L_80272094; } // 80272080
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)40); // 80272084
  c->r[0]=c->r[3]+c->r[0]; // 80272088
  W32(c->r[29]+0x00000014u,c->r[0]); // 8027208C
  goto L_8027209C; // 80272090
L_80272094:;
  c->r[0]=0u+0x00000000u; // 80272094
  W32(c->r[29]+0x00000014u,c->r[0]); // 80272098
L_8027209C:;
  c->r[3]=R32(c->r[30]+0x0000015Cu); // 8027209C
  cmps(c,0,(int32_t)c->r[3],0); // 802720A0
  if (crb(c,2)) { goto L_802720B8; } // 802720A4
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 802720A8
  c->r[0]=c->r[3]+c->r[0]; // 802720AC
  W32(c->r[29]+0x00000018u,c->r[0]); // 802720B0
  goto L_802720C0; // 802720B4
L_802720B8:;
  c->r[0]=0u+0x00000000u; // 802720B8
  W32(c->r[29]+0x00000018u,c->r[0]); // 802720BC
L_802720C0:;
  c->r[3]=R32(c->r[30]+0x00000160u); // 802720C0
  cmps(c,0,(int32_t)c->r[3],0); // 802720C4
  if (crb(c,2)) { goto L_802720DC; } // 802720C8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 802720CC
  c->r[0]=c->r[3]+c->r[0]; // 802720D0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 802720D4
  goto L_802720E4; // 802720D8
L_802720DC:;
  c->r[0]=0u+0x00000000u; // 802720DC
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 802720E0
L_802720E4:;
  c->r[3]=R32(c->r[30]+0x00000164u); // 802720E4
  cmps(c,0,(int32_t)c->r[3],0); // 802720E8
  if (crb(c,2)) { goto L_80272100; } // 802720EC
  c->r[0]=rotl(c->r[31],5)&0xFFFFFFE0u; // 802720F0
  c->r[0]=c->r[3]+c->r[0]; // 802720F4
  W32(c->r[29]+0x00000020u,c->r[0]); // 802720F8
  goto L_80272108; // 802720FC
L_80272100:;
  c->r[0]=0u+0x00000000u; // 80272100
  W32(c->r[29]+0x00000020u,c->r[0]); // 80272104
L_80272108:;
  c->r[3]=R32(c->r[30]+0x00000168u); // 80272108
  cmps(c,0,(int32_t)c->r[3],0); // 8027210C
  if (crb(c,2)) { goto L_80272124; } // 80272110
  c->r[0]=rotl(c->r[31],7)&0xFFFFFF80u; // 80272114
  c->r[0]=c->r[3]+c->r[0]; // 80272118
  W32(c->r[29]+0x00000024u,c->r[0]); // 8027211C
  goto L_8027212C; // 80272120
L_80272124:;
  c->r[0]=0u+0x00000000u; // 80272124
  W32(c->r[29]+0x00000024u,c->r[0]); // 80272128
L_8027212C:;
  c->r[3]=R32(c->r[30]+0x0000016Cu); // 8027212C
  cmps(c,0,(int32_t)c->r[3],0); // 80272130
  if (crb(c,2)) { goto L_80272148; } // 80272134
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 80272138
  c->r[0]=c->r[3]+c->r[0]; // 8027213C
  W32(c->r[29]+0x00000028u,c->r[0]); // 80272140
  goto L_80272150; // 80272144
L_80272148:;
  c->r[0]=0u+0x00000000u; // 80272148
  W32(c->r[29]+0x00000028u,c->r[0]); // 8027214C
L_80272150:;
  c->r[3]=R32(c->r[30]+0x00000170u); // 80272150
  cmps(c,0,(int32_t)c->r[3],0); // 80272154
  if (crb(c,2)) { goto L_8027216C; } // 80272158
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)160); // 8027215C
  c->r[0]=c->r[3]+c->r[0]; // 80272160
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 80272164
  goto L_80272174; // 80272168
L_8027216C:;
  c->r[0]=0u+0x00000000u; // 8027216C
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 80272170
L_80272174:;
  c->r[3]=R32(c->r[30]+0x00000174u); // 80272174
  cmps(c,0,(int32_t)c->r[3],0); // 80272178
  if (crb(c,2)) { goto L_80272190; } // 8027217C
  c->r[0]=rotl(c->r[31],9)&0xFFFFFE00u; // 80272180
  c->r[0]=c->r[3]+c->r[0]; // 80272184
  W32(c->r[29]+0x00000030u,c->r[0]); // 80272188
  goto L_802721D4; // 8027218C
L_80272190:;
  c->r[0]=0u+0x00000000u; // 80272190
  W32(c->r[29]+0x00000030u,c->r[0]); // 80272194
  goto L_802721D4; // 80272198
L_8027219C:;
  c->r[0]=0u+0x00000000u; // 8027219C
  W32(c->r[29]+0x00000004u,c->r[31]); // 802721A0
  W32(c->r[29]+0x00000000u,c->r[0]); // 802721A4
  W32(c->r[29]+0x00000008u,c->r[0]); // 802721A8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 802721AC
  W32(c->r[29]+0x00000010u,c->r[0]); // 802721B0
  W32(c->r[29]+0x00000014u,c->r[0]); // 802721B4
  W32(c->r[29]+0x00000018u,c->r[0]); // 802721B8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 802721BC
  W32(c->r[29]+0x00000020u,c->r[0]); // 802721C0
  W32(c->r[29]+0x00000024u,c->r[0]); // 802721C4
  W32(c->r[29]+0x00000028u,c->r[0]); // 802721C8
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 802721CC
  W32(c->r[29]+0x00000030u,c->r[0]); // 802721D0
L_802721D4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802721D4
  c->r[3]=c->r[29]|c->r[29]; // 802721D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802721DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802721E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 802721E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802721E8
  c->lr=c->r[0]; // 802721EC
  c->r[1]=c->r[1]+0x00000020u; // 802721F0
  return; // 802721F4
}

// fn_802721F8
void f_802721F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802721F8
  c->r[0]=c->lr; // 802721FC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80272200
  c->r[5]=c->r[3]|c->r[3]; // 80272204
  W32(c->r[1]+0x00000014u,c->r[0]); // 80272208
  cmps(c,0,(int32_t)c->r[4],0); // 8027220C
  if (crb(c,2)) { goto L_80272264; } // 80272210
  c->r[3]=R32(c->r[3]+0x00000008u); // 80272214
  cmps(c,0,(int32_t)c->r[3],0); // 80272218
  if (crb(c,2)) { goto L_80272234; } // 8027221C
  c->r[3]=R8(c->r[3]+0x00000000u); // 80272220
  c->r[0]=0u-c->r[3]; // 80272224
  c->r[0]=c->r[0]|c->r[3]; // 80272228
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8027222C
  goto L_80272268; // 80272230
L_80272234:;
  c->r[0]=R32(c->r[4]+0x000000E8u); // 80272234
  c->r[3]=c->r[1]+0x00000008u; // 80272238
  c->r[4]=R32(c->r[5]+0x00000004u); // 8027223C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80272240
  c->lr=0x80272248u; f_802514FC(c); // 80272244
  cmps(c,0,(int32_t)c->r[3],0); // 80272248
  if (crb(c,2)) { goto L_8027225C; } // 8027224C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80272250
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 80272254
  goto L_80272268; // 80272258
L_8027225C:;
  c->r[3]=0u+0x00000000u; // 8027225C
  goto L_80272268; // 80272260
L_80272264:;
  c->r[3]=0u+0x00000000u; // 80272264
L_80272268:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80272268
  c->lr=c->r[0]; // 8027226C
  c->r[1]=c->r[1]+0x00000010u; // 80272270
  return; // 80272274
}

// fn_80272278
void f_80272278(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000000u); // 80272278
  cmps(c,0,(int32_t)c->r[6],0); // 8027227C
  if (crb(c,2)) { goto L_802722EC; } // 80272280
  c->r[5]=R32(c->r[3]+0x00000008u); // 80272284
  cmps(c,0,(int32_t)c->r[5],0); // 80272288
  if (crb(c,2)) { goto L_802722EC; } // 8027228C
  cmps(c,0,(int32_t)c->r[4],0); // 80272290
  if (crb(c,2)) { goto L_802722C0; } // 80272294
  c->r[0]=R8(c->r[5]+0x00000000u); // 80272298
  cmps(c,0,(int32_t)c->r[0],0); // 8027229C
  if (!crb(c,2)) { goto L_802722E4; } // 802722A0
  c->r[4]=R32(c->r[6]+0x0000013Cu); // 802722A4
  c->r[0]=0u+0x00000001u; // 802722A8
  c->r[4]=c->r[4]|0x00000001u; // 802722AC
  W32(c->r[6]+0x0000013Cu,c->r[4]); // 802722B0
  c->r[3]=R32(c->r[3]+0x00000008u); // 802722B4
  W8(c->r[3]+0x00000000u,c->r[0]); // 802722B8
  goto L_802722E4; // 802722BC
L_802722C0:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 802722C0
  cmps(c,0,(int32_t)c->r[0],0); // 802722C4
  if (crb(c,2)) { goto L_802722E4; } // 802722C8
  c->r[4]=R32(c->r[6]+0x0000013Cu); // 802722CC
  c->r[0]=0u+0x00000000u; // 802722D0
  c->r[4]=c->r[4]|0x00000001u; // 802722D4
  W32(c->r[6]+0x0000013Cu,c->r[4]); // 802722D8
  c->r[3]=R32(c->r[3]+0x00000008u); // 802722DC
  W8(c->r[3]+0x00000000u,c->r[0]); // 802722E0
L_802722E4:;
  c->r[3]=0u+0x00000001u; // 802722E4
  return; // 802722E8
L_802722EC:;
  c->r[3]=0u+0x00000000u; // 802722EC
  return; // 802722F0
}

// fn_802722F4
void f_802722F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802722F4
  c->r[0]=c->lr; // 802722F8
  cmps(c,0,(int32_t)c->r[4],0); // 802722FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80272300
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80272304
  c->r[31]=0u+0x00000000u; // 80272308
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027230C
  c->r[30]=c->r[5]|c->r[5]; // 80272310
  W32(c->r[1]+0x00000014u,c->r[29]); // 80272314
  c->r[29]=c->r[4]|c->r[4]; // 80272318
  W32(c->r[1]+0x00000010u,c->r[28]); // 8027231C
  c->r[28]=c->r[3]|c->r[3]; // 80272320
  if (crb(c,2)) { goto L_80272348; } // 80272324
  c->r[0]=R32(c->r[4]+0x000000E8u); // 80272328
  c->r[4]=c->r[30]|c->r[30]; // 8027232C
  c->r[3]=c->r[1]+0x00000008u; // 80272330
  W32(c->r[1]+0x00000008u,c->r[0]); // 80272334
  c->lr=0x8027233Cu; f_802514FC(c); // 80272338
  cmps(c,0,(int32_t)c->r[3],0); // 8027233C
  if (crb(c,2)) { goto L_80272348; } // 80272340
  c->r[31]=0u+0x00000001u; // 80272344
L_80272348:;
  cmps(c,0,(int32_t)c->r[31],0); // 80272348
  if (crb(c,2)) { goto L_8027237C; } // 8027234C
  W32(c->r[28]+0x00000000u,c->r[29]); // 80272350
  W32(c->r[28]+0x00000004u,c->r[30]); // 80272354
  c->r[0]=R32(c->r[29]+0x00000148u); // 80272358
  cmps(c,0,(int32_t)c->r[0],0); // 8027235C
  if (crb(c,2)) { goto L_80272370; } // 80272360
  c->r[0]=c->r[0]+c->r[30]; // 80272364
  W32(c->r[28]+0x00000008u,c->r[0]); // 80272368
  goto L_8027238C; // 8027236C
L_80272370:;
  c->r[0]=0u+0x00000000u; // 80272370
  W32(c->r[28]+0x00000008u,c->r[0]); // 80272374
  goto L_8027238C; // 80272378
L_8027237C:;
  c->r[0]=0u+0x00000000u; // 8027237C
  W32(c->r[28]+0x00000004u,c->r[30]); // 80272380
  W32(c->r[28]+0x00000000u,c->r[0]); // 80272384
  W32(c->r[28]+0x00000008u,c->r[0]); // 80272388
L_8027238C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027238C
  c->r[3]=c->r[28]|c->r[28]; // 80272390
  c->r[30]=R32(c->r[1]+0x00000018u); // 80272394
  c->r[29]=R32(c->r[1]+0x00000014u); // 80272398
  c->r[28]=R32(c->r[1]+0x00000010u); // 8027239C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802723A0
  c->lr=c->r[0]; // 802723A4
  c->r[1]=c->r[1]+0x00000020u; // 802723A8
  return; // 802723AC
}

// __ct__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFPQ34nw4r3g3d6ScnMdlUl
void f_802723B0(Ctx* __restrict c) {
  trace_call(0x802723B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802723B0
  c->r[0]=c->lr; // 802723B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802723B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802723BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802723C0
  c->r[30]=c->r[3]|c->r[3]; // 802723C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802723C8
  c->r[29]=c->r[4]|c->r[4]; // 802723CC
  c->r[5]=R32(c->r[3]+0x00000000u); // 802723D0
  cmps(c,0,(int32_t)c->r[5],0); // 802723D4
  if (crb(c,2)) { goto L_80272408; } // 802723D8
  c->r[0]=R32(c->r[5]+0x000000E8u); // 802723DC
  c->r[3]=c->r[1]+0x00000008u; // 802723E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802723E4
  c->lr=0x802723ECu; f_802518D4(c); // 802723E8
  cmpu(c,0,c->r[29],c->r[3]); // 802723EC
  if (!crb(c,0)) { goto L_80272408; } // 802723F0
  c->r[3]=R32(c->r[30]+0x00000000u); // 802723F4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802723F8
  c->r[3]=R32(c->r[3]+0x00000180u); // 802723FC
  c->r[31]=R32(c->r[3]+c->r[0]); // 80272400
  goto L_8027240C; // 80272404
L_80272408:;
  c->r[31]=0u+0x00000000u; // 80272408
L_8027240C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8027240C
  c->r[30]=0u+0x00000000u; // 80272410
  cmps(c,0,(int32_t)c->r[3],0); // 80272414
  if (crb(c,2)) { goto L_8027243C; } // 80272418
  c->r[0]=R32(c->r[3]+0x000000E8u); // 8027241C
  c->r[4]=c->r[29]|c->r[29]; // 80272420
  c->r[3]=c->r[1]+0x0000000Cu; // 80272424
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80272428
  c->lr=0x80272430u; f_80251880(c); // 8027242C
  cmpu(c,0,c->r[31],c->r[3]); // 80272430
  if (!crb(c,2)) { goto L_8027243C; } // 80272434
  c->r[30]=0u+0x00000001u; // 80272438
L_8027243C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8027243C
  if (crb(c,2)) { goto L_8027244C; } // 80272440
  c->r[3]=0u+0x00000000u; // 80272444
  goto L_80272450; // 80272448
L_8027244C:;
  c->r[3]=c->r[31]|c->r[31]; // 8027244C
L_80272450:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80272450
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80272454
  c->r[30]=R32(c->r[1]+0x00000018u); // 80272458
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027245C
  c->lr=c->r[0]; // 80272460
  c->r[1]=c->r[1]+0x00000020u; // 80272464
  return; // 80272468
}

// Construct__Q34nw4r3g3d6ScnMdlFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdlUli
void f_8027246C(Ctx* __restrict c) {
  trace_call(0x8027246Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027246C
  c->r[0]=c->lr; // 80272470
  W32(c->r[1]+0x00000154u,c->r[0]); // 80272474
  c->r[11]=c->r[1]+0x00000150u; // 80272478
  c->lr=0x80272480u; f_80185EA0(c); // 8027247C
  c->r[8]=R32(c->r[5]+0x00000000u); // 80272480
  c->r[28]=c->r[3]|c->r[3]; // 80272484
  W32(c->r[1]+0x00000010u,c->r[4]); // 80272488
  c->r[29]=c->r[5]|c->r[5]; // 8027248C
  cmps(c,0,(int32_t)c->r[8],0); // 80272490
  c->r[30]=c->r[6]|c->r[6]; // 80272494
  c->r[31]=c->r[7]|c->r[7]; // 80272498
  if (!crb(c,2)) { goto L_802724A8; } // 8027249C
  c->r[3]=0u+0x00000000u; // 802724A0
  goto L_80272FDC; // 802724A4
L_802724A8:;
  cmps(c,0,(int32_t)c->r[7],0); // 802724A8
  if (!crb(c,2)) { goto L_802724B8; } // 802724AC
  c->r[31]=0u+0x00000001u; // 802724B0
  goto L_802724C4; // 802724B4
L_802724B8:;
  cmps(c,0,(int32_t)c->r[7],16); // 802724B8
  if (!crb(c,1)) { goto L_802724C4; } // 802724BC
  c->r[31]=0u+0x00000010u; // 802724C0
L_802724C4:;
  c->r[0]=R32(c->r[8]+0x00000070u); // 802724C4
  c->r[4]=c->r[8]+0x0000004Cu; // 802724C8
  c->r[27]=R32(c->r[8]+0x00000068u); // 802724CC
  c->r[3]=c->r[29]|c->r[29]; // 802724D0
  c->r[15]=R32(c->r[4]+c->r[0]); // 802724D4
  c->r[16]=0u+0x00000000u; // 802724D8
  c->lr=0x802724E0u; f_80251AA8(c); // 802724DC
  c->r[14]=c->r[3]|c->r[3]; // 802724E0
  c->r[3]=c->r[29]|c->r[29]; // 802724E4
  c->lr=0x802724ECu; f_80251550(c); // 802724E8
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 802724EC
  c->r[6]=R32(c->r[29]+0x00000000u); // 802724F0
  c->r[26]=rotl(c->r[15],2)&0xFFFFFFFCu; // 802724F4
  c->r[0]=R8(c->r[6]+0x0000006Cu); // 802724F8
  c->r[5]=c->r[5]+0x0000001Fu; // 802724FC
  c->r[4]=rotl(c->r[5],0)&0xFFFFFFE0u; // 80272500
  cmps(c,0,(int32_t)c->r[0],0); // 80272504
  c->r[23]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[4]); // 80272508
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 8027250C
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)36); // 80272510
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80272514
  if (crb(c,2)) { goto L_80272530; } // 80272518
  c->r[0]=c->r[4]+0x0000001Fu; // 8027251C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272520
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 80272524
  W32(c->r[1]+0x000000F8u,c->r[0]); // 80272528
  goto L_80272538; // 8027252C
L_80272530:;
  c->r[0]=0u+0x00000000u; // 80272530
  W32(c->r[1]+0x000000F8u,c->r[0]); // 80272534
L_80272538:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80272538
  c->r[4]=R8(c->r[6]+0x0000006Du); // 8027253C
  c->r[0]=rotl(c->r[14],2)&0xFFFFFFFCu; // 80272540
  W32(c->r[1]+0x00000088u,c->r[0]); // 80272544
  c->r[0]=0u-c->r[4]; // 80272548
  c->r[0]=c->r[0]|c->r[4]; // 8027254C
  c->r[0]=sraw(c,c->r[0],31); // 80272550
  c->r[0]=c->r[23]&c->r[0]; // 80272554
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80272558
  if (crb(c,2)) { goto L_8027256C; } // 8027255C
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)260); // 80272560
  W32(c->r[1]+0x000000F0u,c->r[0]); // 80272564
  goto L_80272574; // 80272568
L_8027256C:;
  c->r[0]=0u+0x00000000u; // 8027256C
  W32(c->r[1]+0x000000F0u,c->r[0]); // 80272570
L_80272574:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 80272574
  if (crb(c,2)) { goto L_80272588; } // 80272578
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)100); // 8027257C
  W32(c->r[1]+0x000000ECu,c->r[0]); // 80272580
  goto L_80272590; // 80272584
L_80272588:;
  c->r[0]=0u+0x00000000u; // 80272588
  W32(c->r[1]+0x000000ECu,c->r[0]); // 8027258C
L_80272590:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 80272590
  if (crb(c,2)) { goto L_802725A4; } // 80272594
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)584); // 80272598
  W32(c->r[1]+0x000000E8u,c->r[0]); // 8027259C
  goto L_802725AC; // 802725A0
L_802725A4:;
  c->r[0]=0u+0x00000000u; // 802725A4
  W32(c->r[1]+0x000000E8u,c->r[0]); // 802725A8
L_802725AC:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 802725AC
  if (crb(c,2)) { goto L_802725C0; } // 802725B0
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)40); // 802725B4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 802725B8
  goto L_802725C8; // 802725BC
L_802725C0:;
  c->r[0]=0u+0x00000000u; // 802725C0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 802725C4
L_802725C8:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 802725C8
  c->r[4]=rotl(c->r[30],28)&0x00000001u; // 802725CC
  c->r[0]=rotl(c->r[14],3)&0xFFFFFFF8u; // 802725D0
  c->r[4]=0u-c->r[4]; // 802725D4
  c->r[0]=c->r[0]&c->r[4]; // 802725D8
  W32(c->r[1]+0x000000E0u,c->r[0]); // 802725DC
  if (crb(c,2)) { goto L_802725F0; } // 802725E0
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)12); // 802725E4
  W32(c->r[1]+0x000000DCu,c->r[0]); // 802725E8
  goto L_802725F8; // 802725EC
L_802725F0:;
  c->r[0]=0u+0x00000000u; // 802725F0
  W32(c->r[1]+0x000000DCu,c->r[0]); // 802725F4
L_802725F8:;
  c->r[0]=rotl(c->r[30],0)&0x00000400u; cr0(c,c->r[0]); // 802725F8
  c->r[6]=rotl(c->r[30],26)&0x00000001u; // 802725FC
  c->r[5]=rotl(c->r[30],25)&0x00000001u; // 80272600
  c->r[4]=rotl(c->r[30],24)&0x00000001u; // 80272604
  c->r[10]=0u-c->r[6]; // 80272608
  c->r[0]=rotl(c->r[30],23)&0x00000001u; // 8027260C
  c->r[9]=0u-c->r[5]; // 80272610
  c->r[8]=rotl(c->r[14],5)&0xFFFFFFE0u; // 80272614
  c->r[5]=0u-c->r[0]; // 80272618
  c->r[0]=c->r[3]&c->r[10]; // 8027261C
  c->r[7]=0u-c->r[4]; // 80272620
  W32(c->r[1]+0x000000D8u,c->r[0]); // 80272624
  c->r[0]=c->r[8]&c->r[9]; // 80272628
  c->r[6]=rotl(c->r[14],7)&0xFFFFFF80u; // 8027262C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80272630
  c->r[0]=c->r[6]&c->r[7]; // 80272634
  c->r[4]=rotl(c->r[14],6)&0xFFFFFFC0u; // 80272638
  W32(c->r[1]+0x000000D0u,c->r[0]); // 8027263C
  c->r[0]=c->r[4]&c->r[5]; // 80272640
  W32(c->r[1]+0x000000CCu,c->r[0]); // 80272644
  if (crb(c,2)) { goto L_80272658; } // 80272648
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)160); // 8027264C
  W32(c->r[1]+0x000000C8u,c->r[0]); // 80272650
  goto L_80272660; // 80272654
L_80272658:;
  c->r[0]=0u+0x00000000u; // 80272658
  W32(c->r[1]+0x000000C8u,c->r[0]); // 8027265C
L_80272660:;
  c->r[0]=rotl(c->r[30],0)&0x00001000u; cr0(c,c->r[0]); // 80272660
  c->r[3]=rotl(c->r[14],9)&0xFFFFFE00u; // 80272664
  c->r[0]=rotl(c->r[30],21)&0x00000001u; // 80272668
  c->r[22]=0u+0x00000000u; // 8027266C
  c->r[4]=0u-c->r[0]; // 80272670
  c->r[0]=0u+0x00000000u; // 80272674
  W32(c->r[1]+0x00000084u,c->r[0]); // 80272678
  c->r[0]=c->r[3]&c->r[4]; // 8027267C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80272680
  if (crb(c,2)) { goto L_80272718; } // 80272684
  c->r[3]=c->r[29]|c->r[29]; // 80272688
  c->lr=0x80272690u; f_8025167C(c); // 8027268C
  c->r[17]=c->r[3]|c->r[3]; // 80272690
  c->r[3]=c->r[29]|c->r[29]; // 80272694
  c->lr=0x8027269Cu; f_80251B84(c); // 80272698
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 8027269C
  c->r[15]=c->r[3]|c->r[3]; // 802726A0
  W32(c->r[1]+0x00000084u,c->r[0]); // 802726A4
  c->r[18]=0u+0x00000000u; // 802726A8
  goto L_80272710; // 802726AC
L_802726B0:;
  c->r[3]=c->r[29]|c->r[29]; // 802726B0
  c->r[4]=c->r[18]|c->r[18]; // 802726B4
  c->lr=0x802726BCu; f_80251628(c); // 802726B8
  c->r[14]=c->r[3]|c->r[3]; // 802726BC
  c->r[19]=0u+0x00000000u; // 802726C0
  goto L_802726EC; // 802726C4
L_802726C8:;
  c->r[3]=c->r[29]|c->r[29]; // 802726C8
  c->r[4]=c->r[19]|c->r[19]; // 802726CC
  c->lr=0x802726D4u; f_80251B30(c); // 802726D0
  W32(c->r[1]+0x00000038u,c->r[3]); // 802726D4
  c->r[3]=c->r[1]+0x00000038u; // 802726D8
  c->lr=0x802726E0u; f_8025225C(c); // 802726DC
  cmpu(c,0,c->r[14],c->r[3]); // 802726E0
  if (crb(c,2)) { goto L_802726F4; } // 802726E4
  c->r[19]=c->r[19]+0x00000001u; // 802726E8
L_802726EC:;
  cmpu(c,0,c->r[19],c->r[15]); // 802726EC
  if (crb(c,0)) { IRQCHK(c); goto L_802726C8; } // 802726F0
L_802726F4:;
  cmpu(c,0,c->r[19],c->r[15]); // 802726F4
  if (crb(c,2)) { goto L_8027270C; } // 802726F8
  c->r[3]=R32(c->r[14]+0x00000000u); // 802726FC
  c->r[0]=c->r[3]+0x0000001Fu; // 80272700
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272704
  c->r[22]=c->r[22]+c->r[0]; // 80272708
L_8027270C:;
  c->r[18]=c->r[18]+0x00000001u; // 8027270C
L_80272710:;
  cmpu(c,0,c->r[18],c->r[17]); // 80272710
  if (crb(c,0)) { IRQCHK(c); goto L_802726B0; } // 80272714
L_80272718:;
  c->r[0]=rotl(c->r[30],0)&0x00002000u; cr0(c,c->r[0]); // 80272718
  c->r[21]=0u+0x00000000u; // 8027271C
  c->r[0]=0u+0x00000000u; // 80272720
  W32(c->r[1]+0x00000080u,c->r[0]); // 80272724
  if (crb(c,2)) { goto L_802727BC; } // 80272728
  c->r[3]=c->r[29]|c->r[29]; // 8027272C
  c->lr=0x80272734u; f_802517A8(c); // 80272730
  c->r[17]=c->r[3]|c->r[3]; // 80272734
  c->r[3]=c->r[29]|c->r[29]; // 80272738
  c->lr=0x80272740u; f_80251B84(c); // 8027273C
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 80272740
  c->r[15]=c->r[3]|c->r[3]; // 80272744
  W32(c->r[1]+0x00000080u,c->r[0]); // 80272748
  c->r[18]=0u+0x00000000u; // 8027274C
  goto L_802727B4; // 80272750
L_80272754:;
  c->r[3]=c->r[29]|c->r[29]; // 80272754
  c->r[4]=c->r[18]|c->r[18]; // 80272758
  c->lr=0x80272760u; f_80251754(c); // 8027275C
  c->r[14]=c->r[3]|c->r[3]; // 80272760
  c->r[19]=0u+0x00000000u; // 80272764
  goto L_80272790; // 80272768
L_8027276C:;
  c->r[3]=c->r[29]|c->r[29]; // 8027276C
  c->r[4]=c->r[19]|c->r[19]; // 80272770
  c->lr=0x80272778u; f_80251B30(c); // 80272774
  W32(c->r[1]+0x00000034u,c->r[3]); // 80272778
  c->r[3]=c->r[1]+0x00000034u; // 8027277C
  c->lr=0x80272784u; f_802522A4(c); // 80272780
  cmpu(c,0,c->r[14],c->r[3]); // 80272784
  if (crb(c,2)) { goto L_80272798; } // 80272788
  c->r[19]=c->r[19]+0x00000001u; // 8027278C
L_80272790:;
  cmpu(c,0,c->r[19],c->r[15]); // 80272790
  if (crb(c,0)) { IRQCHK(c); goto L_8027276C; } // 80272794
L_80272798:;
  cmpu(c,0,c->r[19],c->r[15]); // 80272798
  if (crb(c,2)) { goto L_802727B0; } // 8027279C
  c->r[3]=R32(c->r[14]+0x00000000u); // 802727A0
  c->r[0]=c->r[3]+0x0000001Fu; // 802727A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802727A8
  c->r[21]=c->r[21]+c->r[0]; // 802727AC
L_802727B0:;
  c->r[18]=c->r[18]+0x00000001u; // 802727B0
L_802727B4:;
  cmpu(c,0,c->r[18],c->r[17]); // 802727B4
  if (crb(c,0)) { IRQCHK(c); goto L_80272754; } // 802727B8
L_802727BC:;
  c->r[0]=rotl(c->r[30],0)&0x00004000u; cr0(c,c->r[0]); // 802727BC
  c->r[20]=0u+0x00000000u; // 802727C0
  c->r[19]=0u+0x00000000u; // 802727C4
  if (crb(c,2)) { goto L_80272880; } // 802727C8
  c->r[3]=c->r[29]|c->r[29]; // 802727CC
  c->lr=0x802727D4u; f_802518D4(c); // 802727D0
  c->r[17]=c->r[3]|c->r[3]; // 802727D4
  c->r[3]=c->r[29]|c->r[29]; // 802727D8
  c->lr=0x802727E0u; f_80251B84(c); // 802727DC
  c->r[15]=c->r[3]|c->r[3]; // 802727E0
  c->r[20]=rotl(c->r[17],2)&0xFFFFFFFCu; // 802727E4
  c->r[24]=0u+0x00000000u; // 802727E8
  goto L_80272878; // 802727EC
L_802727F0:;
  c->r[3]=c->r[29]|c->r[29]; // 802727F0
  c->r[4]=c->r[24]|c->r[24]; // 802727F4
  c->lr=0x802727FCu; f_80251880(c); // 802727F8
  c->r[14]=c->r[3]|c->r[3]; // 802727FC
  c->r[25]=0u+0x00000000u; // 80272800
  goto L_80272854; // 80272804
L_80272808:;
  c->r[3]=c->r[29]|c->r[29]; // 80272808
  c->r[4]=c->r[25]|c->r[25]; // 8027280C
  c->lr=0x80272814u; f_80251B30(c); // 80272810
  W32(c->r[1]+0x00000030u,c->r[3]); // 80272814
  c->r[3]=c->r[1]+0x00000030u; // 80272818
  c->r[18]=0u+0x00000001u; // 8027281C
  c->r[4]=0u+0x00000000u; // 80272820
  c->lr=0x80272828u; f_80252300(c); // 80272824
  cmpu(c,0,c->r[14],c->r[3]); // 80272828
  if (crb(c,2)) { goto L_80272848; } // 8027282C
  c->r[3]=c->r[1]+0x00000030u; // 80272830
  c->r[4]=0u+0x00000001u; // 80272834
  c->lr=0x8027283Cu; f_80252300(c); // 80272838
  cmpu(c,0,c->r[14],c->r[3]); // 8027283C
  if (crb(c,2)) { goto L_80272848; } // 80272840
  c->r[18]=0u+0x00000000u; // 80272844
L_80272848:;
  cmps(c,0,(int32_t)c->r[18],0); // 80272848
  if (!crb(c,2)) { goto L_8027285C; } // 8027284C
  c->r[25]=c->r[25]+0x00000001u; // 80272850
L_80272854:;
  cmpu(c,0,c->r[25],c->r[15]); // 80272854
  if (crb(c,0)) { IRQCHK(c); goto L_80272808; } // 80272858
L_8027285C:;
  cmpu(c,0,c->r[25],c->r[15]); // 8027285C
  if (crb(c,2)) { goto L_80272874; } // 80272860
  c->r[3]=R32(c->r[14]+0x00000000u); // 80272864
  c->r[0]=c->r[3]+0x0000001Fu; // 80272868
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8027286C
  c->r[19]=c->r[19]+c->r[0]; // 80272870
L_80272874:;
  c->r[24]=c->r[24]+0x00000001u; // 80272874
L_80272878:;
  cmpu(c,0,c->r[24],c->r[17]); // 80272878
  if (crb(c,0)) { IRQCHK(c); goto L_802727F0; } // 8027287C
L_80272880:;
  c->r[3]=R32(c->r[1]+0x0000008Cu); // 80272880
  c->r[0]=R32(c->r[1]+0x00000010u); // 80272884
  c->r[3]=c->r[3]+0x000001BFu; // 80272888
  cmps(c,0,(int32_t)c->r[0],0); // 8027288C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80272890
  c->r[3]=c->r[0]+c->r[26]; // 80272894
  W32(c->r[1]+0x000000C0u,c->r[0]); // 80272898
  c->r[0]=c->r[3]+0x0000001Fu; // 8027289C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802728A0
  c->r[3]=c->r[0]+c->r[23]; // 802728A4
  W32(c->r[1]+0x000000BCu,c->r[0]); // 802728A8
  c->r[0]=c->r[3]+0x0000001Fu; // 802728AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802728B0
  W32(c->r[1]+0x000000B8u,c->r[0]); // 802728B4
  c->r[3]=c->r[0]|c->r[0]; // 802728B8
  c->r[0]=R32(c->r[1]+0x000000F8u); // 802728BC
  c->r[3]=c->r[3]+c->r[0]; // 802728C0
  c->r[0]=c->r[3]+0x0000001Fu; // 802728C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802728C8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 802728CC
  c->r[3]=c->r[0]|c->r[0]; // 802728D0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 802728D4
  c->r[3]=c->r[3]+c->r[0]; // 802728D8
  c->r[0]=c->r[3]+0x00000003u; // 802728DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802728E0
  W32(c->r[1]+0x000000B0u,c->r[0]); // 802728E4
  c->r[3]=c->r[0]|c->r[0]; // 802728E8
  c->r[0]=R32(c->r[1]+0x00000088u); // 802728EC
  c->r[3]=c->r[3]+c->r[0]; // 802728F0
  c->r[0]=c->r[3]+0x0000001Fu; // 802728F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802728F8
  W32(c->r[1]+0x000000ACu,c->r[0]); // 802728FC
  c->r[3]=c->r[0]|c->r[0]; // 80272900
  c->r[0]=R32(c->r[1]+0x000000F0u); // 80272904
  c->r[3]=c->r[3]+c->r[0]; // 80272908
  c->r[0]=c->r[3]+0x00000003u; // 8027290C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80272910
  W32(c->r[1]+0x000000A8u,c->r[0]); // 80272914
  c->r[3]=c->r[0]|c->r[0]; // 80272918
  c->r[0]=R32(c->r[1]+0x000000ECu); // 8027291C
  c->r[3]=c->r[3]+c->r[0]; // 80272920
  c->r[0]=c->r[3]+0x00000003u; // 80272924
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80272928
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8027292C
  c->r[3]=c->r[0]|c->r[0]; // 80272930
  c->r[0]=R32(c->r[1]+0x000000E8u); // 80272934
  c->r[3]=c->r[3]+c->r[0]; // 80272938
  c->r[0]=c->r[3]+0x00000003u; // 8027293C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80272940
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80272944
  c->r[3]=c->r[0]|c->r[0]; // 80272948
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8027294C
  c->r[3]=c->r[3]+c->r[0]; // 80272950
  c->r[0]=c->r[3]+0x00000003u; // 80272954
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80272958
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8027295C
  c->r[3]=c->r[0]|c->r[0]; // 80272960
  c->r[0]=R32(c->r[1]+0x000000E0u); // 80272964
  c->r[3]=c->r[3]+c->r[0]; // 80272968
  c->r[0]=c->r[3]+0x00000003u; // 8027296C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80272970
  W32(c->r[1]+0x00000098u,c->r[0]); // 80272974
  c->r[3]=c->r[0]|c->r[0]; // 80272978
  c->r[0]=R32(c->r[1]+0x000000DCu); // 8027297C
  c->r[3]=c->r[3]+c->r[0]; // 80272980
  c->r[0]=c->r[3]+0x00000003u; // 80272984
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80272988
  W32(c->r[1]+0x00000094u,c->r[0]); // 8027298C
  c->r[3]=c->r[0]|c->r[0]; // 80272990
  c->r[0]=R32(c->r[1]+0x000000D8u); // 80272994
  c->r[3]=c->r[3]+c->r[0]; // 80272998
  c->r[0]=c->r[3]+0x0000001Fu; // 8027299C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802729A0
  W32(c->r[1]+0x00000090u,c->r[0]); // 802729A4
  c->r[3]=c->r[0]|c->r[0]; // 802729A8
  c->r[0]=R32(c->r[1]+0x000000D4u); // 802729AC
  c->r[3]=c->r[3]+c->r[0]; // 802729B0
  c->r[0]=c->r[3]+0x0000001Fu; // 802729B4
  c->r[14]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802729B8
  c->r[0]=R32(c->r[1]+0x000000D0u); // 802729BC
  c->r[3]=c->r[14]+c->r[0]; // 802729C0
  c->r[0]=c->r[3]+0x0000001Fu; // 802729C4
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802729C8
  c->r[0]=R32(c->r[1]+0x000000CCu); // 802729CC
  c->r[3]=c->r[26]+c->r[0]; // 802729D0
  c->r[0]=c->r[3]+0x0000001Fu; // 802729D4
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802729D8
  c->r[0]=R32(c->r[1]+0x000000C8u); // 802729DC
  c->r[3]=c->r[25]+c->r[0]; // 802729E0
  c->r[0]=c->r[3]+0x0000001Fu; // 802729E4
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802729E8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 802729EC
  c->r[3]=c->r[24]+c->r[0]; // 802729F0
  c->r[0]=c->r[3]+0x0000001Fu; // 802729F4
  c->r[23]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802729F8
  c->r[0]=R32(c->r[1]+0x00000084u); // 802729FC
  c->r[18]=c->r[23]+c->r[0]; // 80272A00
  c->r[0]=R32(c->r[1]+0x00000080u); // 80272A04
  c->r[17]=c->r[18]+c->r[0]; // 80272A08
  c->r[3]=c->r[17]+c->r[20]; // 80272A0C
  c->r[0]=c->r[3]+0x0000001Fu; // 80272A10
  c->r[15]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272A14
  c->r[3]=c->r[15]+c->r[22]; // 80272A18
  c->r[0]=c->r[3]+0x0000001Fu; // 80272A1C
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272A20
  c->r[3]=c->r[22]+c->r[21]; // 80272A24
  c->r[0]=c->r[3]+0x0000001Fu; // 80272A28
  c->r[21]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272A2C
  c->r[3]=c->r[21]+c->r[19]; // 80272A30
  c->r[0]=c->r[3]+0x0000001Fu; // 80272A34
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272A38
  if (crb(c,2)) { goto L_80272A48; } // 80272A3C
  c->r[3]=R32(c->r[1]+0x00000010u); // 80272A40
  W32(c->r[3]+0x00000000u,c->r[4]); // 80272A44
L_80272A48:;
  cmps(c,0,(int32_t)c->r[28],0); // 80272A48
  if (crb(c,2)) { goto L_80272FD8; } // 80272A4C
  c->r[3]=c->r[28]|c->r[28]; // 80272A50
  c->lr=0x80272A58u; f_801A0EF8(c); // 80272A54
  cmps(c,0,(int32_t)c->r[3],0); // 80272A58
  c->r[16]=c->r[3]|c->r[3]; // 80272A5C
  if (!crb(c,2)) { goto L_80272A6C; } // 80272A60
  c->r[3]=0u+0x00000000u; // 80272A64
  goto L_80272FDC; // 80272A68
L_80272A6C:;
  c->r[0]=0u+0x00000000u; // 80272A6C
  c->r[19]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[19]); // 80272A70
  W32(c->r[1]+0x00000040u,c->r[0]); // 80272A74
  if (!crb(c,2)) { goto L_80272A84; } // 80272A78
  c->r[0]=c->r[0]|0x00000001u; // 80272A7C
  W32(c->r[1]+0x00000040u,c->r[0]); // 80272A80
L_80272A84:;
  c->r[0]=R32(c->r[1]+0x000000D8u); // 80272A84
  cmps(c,0,(int32_t)c->r[0],0); // 80272A88
  if (crb(c,2)) { goto L_80272A9C; } // 80272A8C
  c->r[0]=R32(c->r[1]+0x00000094u); // 80272A90
  c->r[4]=c->r[3]+c->r[0]; // 80272A94
  goto L_80272AA0; // 80272A98
L_80272A9C:;
  c->r[4]=0u+0x00000000u; // 80272A9C
L_80272AA0:;
  c->r[0]=R32(c->r[1]+0x000000F0u); // 80272AA0
  W32(c->r[1]+0x00000044u,c->r[4]); // 80272AA4
  cmps(c,0,(int32_t)c->r[0],0); // 80272AA8
  if (crb(c,2)) { goto L_80272ABC; } // 80272AAC
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80272AB0
  c->r[4]=c->r[3]+c->r[0]; // 80272AB4
  goto L_80272AC0; // 80272AB8
L_80272ABC:;
  c->r[4]=0u+0x00000000u; // 80272ABC
L_80272AC0:;
  c->r[0]=R32(c->r[1]+0x000000ECu); // 80272AC0
  W32(c->r[1]+0x00000048u,c->r[4]); // 80272AC4
  cmps(c,0,(int32_t)c->r[0],0); // 80272AC8
  if (crb(c,2)) { goto L_80272ADC; } // 80272ACC
  c->r[0]=R32(c->r[1]+0x000000A8u); // 80272AD0
  c->r[4]=c->r[3]+c->r[0]; // 80272AD4
  goto L_80272AE0; // 80272AD8
L_80272ADC:;
  c->r[4]=0u+0x00000000u; // 80272ADC
L_80272AE0:;
  c->r[0]=R32(c->r[1]+0x000000E8u); // 80272AE0
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80272AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80272AE8
  if (crb(c,2)) { goto L_80272AFC; } // 80272AEC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80272AF0
  c->r[4]=c->r[3]+c->r[0]; // 80272AF4
  goto L_80272B00; // 80272AF8
L_80272AFC:;
  c->r[4]=0u+0x00000000u; // 80272AFC
L_80272B00:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80272B00
  W32(c->r[1]+0x00000050u,c->r[4]); // 80272B04
  cmps(c,0,(int32_t)c->r[0],0); // 80272B08
  if (crb(c,2)) { goto L_80272B1C; } // 80272B0C
  c->r[0]=R32(c->r[1]+0x000000A0u); // 80272B10
  c->r[4]=c->r[3]+c->r[0]; // 80272B14
  goto L_80272B20; // 80272B18
L_80272B1C:;
  c->r[4]=0u+0x00000000u; // 80272B1C
L_80272B20:;
  c->r[0]=R32(c->r[1]+0x000000E0u); // 80272B20
  W32(c->r[1]+0x00000054u,c->r[4]); // 80272B24
  cmps(c,0,(int32_t)c->r[0],0); // 80272B28
  if (crb(c,2)) { goto L_80272B3C; } // 80272B2C
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 80272B30
  c->r[4]=c->r[3]+c->r[0]; // 80272B34
  goto L_80272B40; // 80272B38
L_80272B3C:;
  c->r[4]=0u+0x00000000u; // 80272B3C
L_80272B40:;
  c->r[0]=R32(c->r[1]+0x000000DCu); // 80272B40
  W32(c->r[1]+0x00000058u,c->r[4]); // 80272B44
  cmps(c,0,(int32_t)c->r[0],0); // 80272B48
  if (crb(c,2)) { goto L_80272B5C; } // 80272B4C
  c->r[0]=R32(c->r[1]+0x00000098u); // 80272B50
  c->r[4]=c->r[3]+c->r[0]; // 80272B54
  goto L_80272B60; // 80272B58
L_80272B5C:;
  c->r[4]=0u+0x00000000u; // 80272B5C
L_80272B60:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80272B60
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 80272B64
  cmps(c,0,(int32_t)c->r[0],0); // 80272B68
  if (crb(c,2)) { goto L_80272B7C; } // 80272B6C
  c->r[0]=R32(c->r[1]+0x00000090u); // 80272B70
  c->r[4]=c->r[3]+c->r[0]; // 80272B74
  goto L_80272B80; // 80272B78
L_80272B7C:;
  c->r[4]=0u+0x00000000u; // 80272B7C
L_80272B80:;
  c->r[0]=R32(c->r[1]+0x000000D0u); // 80272B80
  W32(c->r[1]+0x00000060u,c->r[4]); // 80272B84
  cmps(c,0,(int32_t)c->r[0],0); // 80272B88
  if (crb(c,2)) { goto L_80272B98; } // 80272B8C
  c->r[4]=c->r[3]+c->r[14]; // 80272B90
  goto L_80272B9C; // 80272B94
L_80272B98:;
  c->r[4]=0u+0x00000000u; // 80272B98
L_80272B9C:;
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80272B9C
  W32(c->r[1]+0x00000064u,c->r[4]); // 80272BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80272BA4
  if (crb(c,2)) { goto L_80272BB4; } // 80272BA8
  c->r[4]=c->r[3]+c->r[26]; // 80272BAC
  goto L_80272BB8; // 80272BB0
L_80272BB4:;
  c->r[4]=0u+0x00000000u; // 80272BB4
L_80272BB8:;
  c->r[0]=R32(c->r[1]+0x000000C8u); // 80272BB8
  W32(c->r[1]+0x00000068u,c->r[4]); // 80272BBC
  cmps(c,0,(int32_t)c->r[0],0); // 80272BC0
  if (crb(c,2)) { goto L_80272BD0; } // 80272BC4
  c->r[4]=c->r[3]+c->r[25]; // 80272BC8
  goto L_80272BD4; // 80272BCC
L_80272BD0:;
  c->r[4]=0u+0x00000000u; // 80272BD0
L_80272BD4:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80272BD4
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 80272BD8
  cmps(c,0,(int32_t)c->r[0],0); // 80272BDC
  if (crb(c,2)) { goto L_80272BEC; } // 80272BE0
  c->r[4]=c->r[3]+c->r[24]; // 80272BE4
  goto L_80272BF0; // 80272BE8
L_80272BEC:;
  c->r[4]=0u+0x00000000u; // 80272BEC
L_80272BF0:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 80272BF0
  W32(c->r[1]+0x00000070u,c->r[4]); // 80272BF4
  cmps(c,0,(int32_t)c->r[0],0); // 80272BF8
  if (crb(c,2)) { goto L_80272C08; } // 80272BFC
  c->r[4]=c->r[3]+c->r[23]; // 80272C00
  goto L_80272C0C; // 80272C04
L_80272C08:;
  c->r[4]=0u+0x00000000u; // 80272C08
L_80272C0C:;
  c->r[0]=R32(c->r[1]+0x00000080u); // 80272C0C
  W32(c->r[1]+0x00000074u,c->r[4]); // 80272C10
  cmps(c,0,(int32_t)c->r[0],0); // 80272C14
  if (crb(c,2)) { goto L_80272C24; } // 80272C18
  c->r[0]=c->r[3]+c->r[18]; // 80272C1C
  goto L_80272C28; // 80272C20
L_80272C24:;
  c->r[0]=0u+0x00000000u; // 80272C24
L_80272C28:;
  cmps(c,0,(int32_t)c->r[20],0); // 80272C28
  W32(c->r[1]+0x00000078u,c->r[0]); // 80272C2C
  if (crb(c,2)) { goto L_80272C3C; } // 80272C30
  c->r[0]=c->r[3]+c->r[17]; // 80272C34
  goto L_80272C40; // 80272C38
L_80272C3C:;
  c->r[0]=0u+0x00000000u; // 80272C3C
L_80272C40:;
  c->r[18]=R32(c->r[1]+0x00000074u); // 80272C40
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80272C44
  cmps(c,0,(int32_t)c->r[18],0); // 80272C48
  if (crb(c,2)) { goto L_80272D00; } // 80272C4C
  c->r[3]=c->r[29]|c->r[29]; // 80272C50
  c->lr=0x80272C58u; f_8025167C(c); // 80272C54
  c->r[17]=c->r[3]|c->r[3]; // 80272C58
  c->r[3]=c->r[29]|c->r[29]; // 80272C5C
  c->lr=0x80272C64u; f_80251B84(c); // 80272C60
  c->r[14]=c->r[3]|c->r[3]; // 80272C64
  c->r[20]=0u+0x00000000u; // 80272C68
  goto L_80272CF8; // 80272C6C
L_80272C70:;
  c->r[3]=c->r[29]|c->r[29]; // 80272C70
  c->r[4]=c->r[20]|c->r[20]; // 80272C74
  c->lr=0x80272C7Cu; f_80251628(c); // 80272C78
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80272C7C
  c->r[23]=0u+0x00000000u; // 80272C80
  goto L_80272CB0; // 80272C84
L_80272C88:;
  c->r[3]=c->r[29]|c->r[29]; // 80272C88
  c->r[4]=c->r[23]|c->r[23]; // 80272C8C
  c->lr=0x80272C94u; f_80251B30(c); // 80272C90
  W32(c->r[1]+0x00000028u,c->r[3]); // 80272C94
  c->r[3]=c->r[1]+0x00000028u; // 80272C98
  c->lr=0x80272CA0u; f_8025225C(c); // 80272C9C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80272CA0
  cmpu(c,0,c->r[0],c->r[3]); // 80272CA4
  if (crb(c,2)) { goto L_80272CB8; } // 80272CA8
  c->r[23]=c->r[23]+0x00000001u; // 80272CAC
L_80272CB0:;
  cmpu(c,0,c->r[23],c->r[14]); // 80272CB0
  if (crb(c,0)) { IRQCHK(c); goto L_80272C88; } // 80272CB4
L_80272CB8:;
  cmpu(c,0,c->r[23],c->r[14]); // 80272CB8
  if (crb(c,2)) { goto L_80272CE8; } // 80272CBC
  c->r[4]=c->r[16]+c->r[15]; // 80272CC0
  c->r[3]=c->r[1]+0x0000002Cu; // 80272CC4
  W32(c->r[18]+0x00000000u,c->r[4]); // 80272CC8
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 80272CCC
  c->r[5]=R32(c->r[5]+0x00000000u); // 80272CD0
  c->r[0]=c->r[5]+0x0000001Fu; // 80272CD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272CD8
  c->r[15]=c->r[15]+c->r[0]; // 80272CDC
  c->lr=0x80272CE4u; f_80254BD0(c); // 80272CE0
  goto L_80272CF0; // 80272CE4
L_80272CE8:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80272CE8
  W32(c->r[18]+0x00000000u,c->r[0]); // 80272CEC
L_80272CF0:;
  c->r[18]=c->r[18]+0x00000004u; // 80272CF0
  c->r[20]=c->r[20]+0x00000001u; // 80272CF4
L_80272CF8:;
  cmpu(c,0,c->r[20],c->r[17]); // 80272CF8
  if (crb(c,0)) { IRQCHK(c); goto L_80272C70; } // 80272CFC
L_80272D00:;
  c->r[17]=R32(c->r[1]+0x00000078u); // 80272D00
  cmps(c,0,(int32_t)c->r[17],0); // 80272D04
  if (crb(c,2)) { goto L_80272DBC; } // 80272D08
  c->r[3]=c->r[29]|c->r[29]; // 80272D0C
  c->lr=0x80272D14u; f_802517A8(c); // 80272D10
  c->r[15]=c->r[3]|c->r[3]; // 80272D14
  c->r[3]=c->r[29]|c->r[29]; // 80272D18
  c->lr=0x80272D20u; f_80251B84(c); // 80272D1C
  c->r[14]=c->r[3]|c->r[3]; // 80272D20
  c->r[18]=0u+0x00000000u; // 80272D24
  goto L_80272DB4; // 80272D28
L_80272D2C:;
  c->r[3]=c->r[29]|c->r[29]; // 80272D2C
  c->r[4]=c->r[18]|c->r[18]; // 80272D30
  c->lr=0x80272D38u; f_80251754(c); // 80272D34
  W32(c->r[1]+0x00000024u,c->r[3]); // 80272D38
  c->r[20]=0u+0x00000000u; // 80272D3C
  goto L_80272D6C; // 80272D40
L_80272D44:;
  c->r[3]=c->r[29]|c->r[29]; // 80272D44
  c->r[4]=c->r[20]|c->r[20]; // 80272D48
  c->lr=0x80272D50u; f_80251B30(c); // 80272D4C
  W32(c->r[1]+0x00000020u,c->r[3]); // 80272D50
  c->r[3]=c->r[1]+0x00000020u; // 80272D54
  c->lr=0x80272D5Cu; f_802522A4(c); // 80272D58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80272D5C
  cmpu(c,0,c->r[0],c->r[3]); // 80272D60
  if (crb(c,2)) { goto L_80272D74; } // 80272D64
  c->r[20]=c->r[20]+0x00000001u; // 80272D68
L_80272D6C:;
  cmpu(c,0,c->r[20],c->r[14]); // 80272D6C
  if (crb(c,0)) { IRQCHK(c); goto L_80272D44; } // 80272D70
L_80272D74:;
  cmpu(c,0,c->r[20],c->r[14]); // 80272D74
  if (crb(c,2)) { goto L_80272DA4; } // 80272D78
  c->r[4]=c->r[16]+c->r[22]; // 80272D7C
  c->r[3]=c->r[1]+0x00000024u; // 80272D80
  W32(c->r[17]+0x00000000u,c->r[4]); // 80272D84
  c->r[5]=R32(c->r[1]+0x00000024u); // 80272D88
  c->r[5]=R32(c->r[5]+0x00000000u); // 80272D8C
  c->r[0]=c->r[5]+0x0000001Fu; // 80272D90
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272D94
  c->r[22]=c->r[22]+c->r[0]; // 80272D98
  c->lr=0x80272DA0u; f_80254CA0(c); // 80272D9C
  goto L_80272DAC; // 80272DA0
L_80272DA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80272DA4
  W32(c->r[17]+0x00000000u,c->r[0]); // 80272DA8
L_80272DAC:;
  c->r[17]=c->r[17]+0x00000004u; // 80272DAC
  c->r[18]=c->r[18]+0x00000001u; // 80272DB0
L_80272DB4:;
  cmpu(c,0,c->r[18],c->r[15]); // 80272DB4
  if (crb(c,0)) { IRQCHK(c); goto L_80272D2C; } // 80272DB8
L_80272DBC:;
  c->r[17]=R32(c->r[1]+0x0000007Cu); // 80272DBC
  cmps(c,0,(int32_t)c->r[17],0); // 80272DC0
  if (crb(c,2)) { goto L_80272EA4; } // 80272DC4
  c->r[3]=c->r[29]|c->r[29]; // 80272DC8
  c->lr=0x80272DD0u; f_802518D4(c); // 80272DCC
  c->r[15]=c->r[3]|c->r[3]; // 80272DD0
  c->r[3]=c->r[29]|c->r[29]; // 80272DD4
  c->lr=0x80272DDCu; f_80251B84(c); // 80272DD8
  c->r[14]=c->r[3]|c->r[3]; // 80272DDC
  c->r[18]=0u+0x00000000u; // 80272DE0
  goto L_80272E9C; // 80272DE4
L_80272DE8:;
  c->r[3]=c->r[29]|c->r[29]; // 80272DE8
  c->r[4]=c->r[18]|c->r[18]; // 80272DEC
  c->lr=0x80272DF4u; f_80251880(c); // 80272DF0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80272DF4
  c->r[22]=0u+0x00000000u; // 80272DF8
  goto L_80272E54; // 80272DFC
L_80272E00:;
  c->r[3]=c->r[29]|c->r[29]; // 80272E00
  c->r[4]=c->r[22]|c->r[22]; // 80272E04
  c->lr=0x80272E0Cu; f_80251B30(c); // 80272E08
  W32(c->r[1]+0x00000018u,c->r[3]); // 80272E0C
  c->r[3]=c->r[1]+0x00000018u; // 80272E10
  c->r[20]=0u+0x00000001u; // 80272E14
  c->r[4]=0u+0x00000000u; // 80272E18
  c->lr=0x80272E20u; f_80252300(c); // 80272E1C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80272E20
  cmpu(c,0,c->r[0],c->r[3]); // 80272E24
  if (crb(c,2)) { goto L_80272E48; } // 80272E28
  c->r[3]=c->r[1]+0x00000018u; // 80272E2C
  c->r[4]=0u+0x00000001u; // 80272E30
  c->lr=0x80272E38u; f_80252300(c); // 80272E34
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80272E38
  cmpu(c,0,c->r[0],c->r[3]); // 80272E3C
  if (crb(c,2)) { goto L_80272E48; } // 80272E40
  c->r[20]=0u+0x00000000u; // 80272E44
L_80272E48:;
  cmps(c,0,(int32_t)c->r[20],0); // 80272E48
  if (!crb(c,2)) { goto L_80272E5C; } // 80272E4C
  c->r[22]=c->r[22]+0x00000001u; // 80272E50
L_80272E54:;
  cmpu(c,0,c->r[22],c->r[14]); // 80272E54
  if (crb(c,0)) { IRQCHK(c); goto L_80272E00; } // 80272E58
L_80272E5C:;
  cmpu(c,0,c->r[22],c->r[14]); // 80272E5C
  if (crb(c,2)) { goto L_80272E8C; } // 80272E60
  c->r[4]=c->r[16]+c->r[21]; // 80272E64
  c->r[3]=c->r[1]+0x0000001Cu; // 80272E68
  W32(c->r[17]+0x00000000u,c->r[4]); // 80272E6C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 80272E70
  c->r[5]=R32(c->r[5]+0x00000000u); // 80272E74
  c->r[0]=c->r[5]+0x0000001Fu; // 80272E78
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80272E7C
  c->r[21]=c->r[21]+c->r[0]; // 80272E80
  c->lr=0x80272E88u; f_80254DA4(c); // 80272E84
  goto L_80272E94; // 80272E88
L_80272E8C:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80272E8C
  W32(c->r[17]+0x00000000u,c->r[0]); // 80272E90
L_80272E94:;
  c->r[17]=c->r[17]+0x00000004u; // 80272E94
  c->r[18]=c->r[18]+0x00000001u; // 80272E98
L_80272E9C:;
  cmpu(c,0,c->r[18],c->r[15]); // 80272E9C
  if (crb(c,0)) { IRQCHK(c); goto L_80272DE8; } // 80272EA0
L_80272EA4:;
  cmps(c,0,(int32_t)c->r[19],0); // 80272EA4
  c->r[14]=0u+0x00000000u; // 80272EA8
  if (crb(c,2)) { goto L_80272EB4; } // 80272EAC
  c->r[14]=c->r[14]|0x00000001u; // 80272EB0
L_80272EB4:;
  cmps(c,0,(int32_t)c->r[16],0); // 80272EB4
  if (crb(c,2)) { goto L_80272FD0; } // 80272EB8
  c->r[0]=R32(c->r[1]+0x000000F8u); // 80272EBC
  c->r[3]=R32(c->r[29]+0x00000000u); // 80272EC0
  cmps(c,0,(int32_t)c->r[0],0); // 80272EC4
  if (crb(c,2)) { goto L_80272ED8; } // 80272EC8
  c->r[0]=R32(c->r[1]+0x000000B8u); // 80272ECC
  c->r[9]=c->r[16]+c->r[0]; // 80272ED0
  goto L_80272EDC; // 80272ED4
L_80272ED8:;
  c->r[9]=0u+0x00000000u; // 80272ED8
L_80272EDC:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80272EDC
  cmps(c,0,(int32_t)c->r[0],0); // 80272EE0
  if (crb(c,2)) { goto L_80272EF4; } // 80272EE4
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80272EE8
  c->r[10]=c->r[16]+c->r[0]; // 80272EEC
  goto L_80272EF8; // 80272EF0
L_80272EF4:;
  c->r[10]=0u+0x00000000u; // 80272EF4
L_80272EF8:;
  W32(c->r[1]+0x00000014u,c->r[3]); // 80272EF8
  c->r[3]=c->r[16]|c->r[16]; // 80272EFC
  c->r[0]=R32(c->r[1]+0x000000C0u); // 80272F00
  c->r[4]=c->r[28]|c->r[28]; // 80272F04
  W32(c->r[1]+0x00000008u,c->r[31]); // 80272F08
  c->r[5]=c->r[1]+0x00000014u; // 80272F0C
  c->r[7]=c->r[16]+c->r[0]; // 80272F10
  c->r[0]=R32(c->r[1]+0x000000BCu); // 80272F14
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 80272F18
  c->r[6]=c->r[16]+0x000001A0u; // 80272F1C
  c->r[8]=c->r[16]+c->r[0]; // 80272F20
  c->lr=0x80272F28u; f_802719E8(c); // 80272F24
  c->r[4]=0u+0x80340000u; // 80272F28
  c->r[0]=R32(c->r[1]+0x000000B0u); // 80272F2C
  c->r[4]=c->r[4]+0x00004E68u; // 80272F30
  c->r[3]=0u+0x00000000u; // 80272F34
  W32(c->r[16]+0x00000000u,c->r[4]); // 80272F38
  c->r[0]=c->r[16]+c->r[0]; // 80272F3C
  c->r[5]=R32(c->r[1]+0x00000040u); // 80272F40
  W32(c->r[16]+0x00000138u,c->r[3]); // 80272F44
  c->r[4]=R32(c->r[1]+0x00000044u); // 80272F48
  W32(c->r[16]+0x0000013Cu,c->r[3]); // 80272F4C
  c->r[3]=R32(c->r[1]+0x00000048u); // 80272F50
  W32(c->r[16]+0x00000140u,c->r[0]); // 80272F54
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80272F58
  W32(c->r[16]+0x00000144u,c->r[5]); // 80272F5C
  c->r[5]=R32(c->r[1]+0x00000050u); // 80272F60
  W32(c->r[16]+0x00000148u,c->r[4]); // 80272F64
  c->r[4]=R32(c->r[1]+0x00000054u); // 80272F68
  W32(c->r[16]+0x0000014Cu,c->r[3]); // 80272F6C
  c->r[3]=R32(c->r[1]+0x00000058u); // 80272F70
  W32(c->r[16]+0x00000150u,c->r[0]); // 80272F74
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80272F78
  W32(c->r[16]+0x00000154u,c->r[5]); // 80272F7C
  c->r[5]=R32(c->r[1]+0x00000060u); // 80272F80
  W32(c->r[16]+0x00000158u,c->r[4]); // 80272F84
  c->r[4]=R32(c->r[1]+0x00000064u); // 80272F88
  W32(c->r[16]+0x0000015Cu,c->r[3]); // 80272F8C
  c->r[3]=R32(c->r[1]+0x00000068u); // 80272F90
  W32(c->r[16]+0x00000160u,c->r[0]); // 80272F94
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 80272F98
  W32(c->r[16]+0x00000164u,c->r[5]); // 80272F9C
  c->r[5]=R32(c->r[1]+0x00000070u); // 80272FA0
  W32(c->r[16]+0x00000168u,c->r[4]); // 80272FA4
  c->r[4]=R32(c->r[1]+0x00000074u); // 80272FA8
  W32(c->r[16]+0x0000016Cu,c->r[3]); // 80272FAC
  c->r[3]=R32(c->r[1]+0x00000078u); // 80272FB0
  W32(c->r[16]+0x00000170u,c->r[0]); // 80272FB4
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 80272FB8
  W32(c->r[16]+0x00000174u,c->r[5]); // 80272FBC
  W32(c->r[16]+0x00000178u,c->r[4]); // 80272FC0
  W32(c->r[16]+0x0000017Cu,c->r[3]); // 80272FC4
  W32(c->r[16]+0x00000180u,c->r[0]); // 80272FC8
  W32(c->r[16]+0x00000184u,c->r[14]); // 80272FCC
L_80272FD0:;
  c->r[3]=c->r[16]|c->r[16]; // 80272FD0
  c->lr=0x80272FD8u; f_80273CA8(c); // 80272FD4
L_80272FD8:;
  c->r[3]=c->r[16]|c->r[16]; // 80272FD8
L_80272FDC:;
  c->r[11]=c->r[1]+0x00000150u; // 80272FDC
  c->lr=0x80272FE4u; f_80185EEC(c); // 80272FE0
  c->r[0]=R32(c->r[1]+0x00000154u); // 80272FE4
  c->lr=c->r[0]; // 80272FE8
  c->r[1]=c->r[1]+0x00000150u; // 80272FEC
  return; // 80272FF0
}

// ScnMdl_G3DPROC_CALC_MAT__Q34nw4r3g3d6ScnMdlFUlPv
void f_80272FF4(Ctx* __restrict c) {
  trace_call(0x80272FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80272FF4
  c->r[0]=c->lr; // 80272FF8
  W32(c->r[1]+0x00000254u,c->r[0]); // 80272FFC
  c->r[11]=c->r[1]+0x00000250u; // 80273000
  c->lr=0x80273008u; f_80185EA0(c); // 80273004
  c->r[6]=R32(c->r[3]+0x000000D4u); // 80273008
  c->r[16]=c->r[3]|c->r[3]; // 8027300C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80273010
  cmps(c,0,(int32_t)c->r[6],0); // 80273014
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80273018
  if (crb(c,2)) { goto L_8027305C; } // 8027301C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80273020
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80273024
  if (crb(c,2)) { goto L_8027305C; } // 80273028
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8027302C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80273030
  if (crb(c,2)) { goto L_8027305C; } // 80273034
  c->r[12]=R32(c->r[6]+0x00000000u); // 80273038
  c->r[3]=c->r[6]|c->r[6]; // 8027303C
  c->r[6]=c->r[4]|c->r[4]; // 80273040
  c->r[5]=c->r[16]|c->r[16]; // 80273044
  c->r[12]=R32(c->r[12]+0x00000010u); // 80273048
  c->r[4]=0u+0x00000001u; // 8027304C
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80273050
  c->ctr=c->r[12]; // 80273054
  if (true) { c->lr=0x8027305Cu; dispatch(c,c->ctr); } // 80273058
L_8027305C:;
  c->r[0]=R32(c->r[16]+0x000000E8u); // 8027305C
  c->r[3]=c->r[1]+0x00000060u; // 80273060
  W32(c->r[1]+0x00000060u,c->r[0]); // 80273064
  c->lr=0x8027306Cu; f_80251AA8(c); // 80273068
  c->r[29]=c->r[1]+0x000000E4u; // 8027306C
  c->r[0]=c->r[1]+0x000000C8u; // 80273070
  c->r[4]=c->r[29]-c->r[0]; // 80273074
  c->r[30]=c->r[1]+0x00000104u; // 80273078
  c->r[5]=c->r[4]+0x00000003u; // 8027307C
  c->r[0]=c->r[1]+0x000000E8u; // 80273080
  W32(c->r[1]+0x00000204u,c->r[3]); // 80273084
  c->r[3]=sraw(c,c->r[5],2); // 80273088
  c->r[6]=c->r[30]-c->r[0]; // 8027308C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80273090
  c->r[4]=addc(c,c->r[3],0,c->xer_ca); // 80273094
  W32(c->r[1]+0x00000200u,c->r[0]); // 80273098
  c->r[0]=rotl(c->r[5],0)&0x80000000u; // 8027309C
  c->r[7]=c->r[6]+0x00000003u; // 802730A0
  c->r[3]=sraw(c,c->r[7],2); // 802730A4
  c->r[21]=c->r[4]+0x00000001u; // 802730A8
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 802730AC
  W32(c->r[1]+0x000001FCu,c->r[0]); // 802730B0
  c->r[0]=rotl(c->r[21],0)&0x80000000u; // 802730B4
  c->r[20]=rotl(c->r[4],0)&0x80000000u; // 802730B8
  W32(c->r[1]+0x000001F8u,c->r[0]); // 802730BC
  c->r[0]=rotl(c->r[6],0)&0x80000000u; // 802730C0
  c->r[19]=c->r[3]+0x00000001u; // 802730C4
  c->r[18]=rotl(c->r[3],0)&0x80000000u; // 802730C8
  W32(c->r[1]+0x000001F4u,c->r[0]); // 802730CC
  c->r[0]=rotl(c->r[7],0)&0x80000000u; // 802730D0
  c->r[14]=rotl(c->r[19],0)&0x80000000u; // 802730D4
  c->r[17]=0u+0x00000000u; // 802730D8
  W32(c->r[1]+0x000001F0u,c->r[0]); // 802730DC
  c->r[28]=0u+0x00000000u; // 802730E0
  c->r[27]=0u+0x00000000u; // 802730E4
  c->r[26]=0u+0x00000000u; // 802730E8
  c->r[25]=0u+0x00000000u; // 802730EC
  c->r[24]=0u+0x00000000u; // 802730F0
  c->r[23]=0u+0x00000000u; // 802730F4
  c->r[22]=0u+0x00000000u; // 802730F8
  c->r[31]=0u+0x00000000u; // 802730FC
  goto L_802736FC; // 80273100
L_80273104:;
  c->r[4]=c->r[17]|c->r[17]; // 80273104
  c->r[3]=c->r[1]+0x00000060u; // 80273108
  c->lr=0x80273110u; f_80251A54(c); // 8027310C
  c->r[4]=R32(c->r[16]+0x00000140u); // 80273110
  c->r[15]=c->r[3]|c->r[3]; // 80273114
  c->r[0]=R32(c->r[4]+c->r[28]); // 80273118
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8027311C
  if (crb(c,2)) { goto L_80273134; } // 80273120
  c->r[3]=c->r[16]|c->r[16]; // 80273124
  c->r[4]=c->r[17]|c->r[17]; // 80273128
  c->r[5]=0u+0x00000001u; // 8027312C
  c->lr=0x80273134u; f_8027405C(c); // 80273130
L_80273134:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273134
  c->r[0]=R32(c->r[3]+c->r[28]); // 80273138
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8027313C
  if (crb(c,2)) { goto L_80273154; } // 80273140
  c->r[3]=c->r[16]|c->r[16]; // 80273144
  c->r[4]=c->r[17]|c->r[17]; // 80273148
  c->r[5]=0u+0x00000002u; // 8027314C
  c->lr=0x80273154u; f_8027405C(c); // 80273150
L_80273154:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273154
  c->r[0]=R32(c->r[3]+c->r[28]); // 80273158
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 8027315C
  if (crb(c,2)) { goto L_80273174; } // 80273160
  c->r[3]=c->r[16]|c->r[16]; // 80273164
  c->r[4]=c->r[17]|c->r[17]; // 80273168
  c->r[5]=0u+0x00000200u; // 8027316C
  c->lr=0x80273174u; f_8027405C(c); // 80273170
L_80273174:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273174
  c->r[0]=R32(c->r[3]+c->r[28]); // 80273178
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8027317C
  if (crb(c,2)) { goto L_80273194; } // 80273180
  c->r[3]=c->r[16]|c->r[16]; // 80273184
  c->r[4]=c->r[17]|c->r[17]; // 80273188
  c->r[5]=0u+0x00000004u; // 8027318C
  c->lr=0x80273194u; f_8027405C(c); // 80273190
L_80273194:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273194
  c->r[0]=R32(c->r[3]+c->r[28]); // 80273198
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8027319C
  if (crb(c,2)) { goto L_802731B4; } // 802731A0
  c->r[3]=c->r[16]|c->r[16]; // 802731A4
  c->r[4]=c->r[17]|c->r[17]; // 802731A8
  c->r[5]=0u+0x00000008u; // 802731AC
  c->lr=0x802731B4u; f_8027405C(c); // 802731B0
L_802731B4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 802731B4
  c->r[0]=R32(c->r[3]+c->r[28]); // 802731B8
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 802731BC
  if (crb(c,2)) { goto L_802731D4; } // 802731C0
  c->r[3]=c->r[16]|c->r[16]; // 802731C4
  c->r[4]=c->r[17]|c->r[17]; // 802731C8
  c->r[5]=0u+0x00000100u; // 802731CC
  c->lr=0x802731D4u; f_8027405C(c); // 802731D0
L_802731D4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 802731D4
  c->r[0]=R32(c->r[3]+c->r[28]); // 802731D8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802731DC
  if (crb(c,2)) { goto L_802731F4; } // 802731E0
  c->r[3]=c->r[16]|c->r[16]; // 802731E4
  c->r[4]=c->r[17]|c->r[17]; // 802731E8
  c->r[5]=0u+0x00000010u; // 802731EC
  c->lr=0x802731F4u; f_8027405C(c); // 802731F0
L_802731F4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 802731F4
  c->r[0]=R32(c->r[3]+c->r[28]); // 802731F8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802731FC
  if (crb(c,2)) { goto L_80273214; } // 80273200
  c->r[3]=c->r[16]|c->r[16]; // 80273204
  c->r[4]=c->r[17]|c->r[17]; // 80273208
  c->r[5]=0u+0x00000020u; // 8027320C
  c->lr=0x80273214u; f_8027405C(c); // 80273210
L_80273214:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273214
  c->r[0]=R32(c->r[3]+c->r[28]); // 80273218
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8027321C
  if (crb(c,2)) { goto L_80273234; } // 80273220
  c->r[3]=c->r[16]|c->r[16]; // 80273224
  c->r[4]=c->r[17]|c->r[17]; // 80273228
  c->r[5]=0u+0x00000080u; // 8027322C
  c->lr=0x80273234u; f_8027405C(c); // 80273230
L_80273234:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273234
  c->r[0]=R32(c->r[3]+c->r[28]); // 80273238
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 8027323C
  if (crb(c,2)) { goto L_80273254; } // 80273240
  c->r[3]=c->r[16]|c->r[16]; // 80273244
  c->r[4]=c->r[17]|c->r[17]; // 80273248
  c->r[5]=0u+0x00000400u; // 8027324C
  c->lr=0x80273254u; f_8027405C(c); // 80273250
L_80273254:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273254
  c->r[0]=R32(c->r[3]+c->r[28]); // 80273258
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8027325C
  if (crb(c,2)) { goto L_80273274; } // 80273260
  c->r[3]=c->r[16]|c->r[16]; // 80273264
  c->r[4]=c->r[17]|c->r[17]; // 80273268
  c->r[5]=0u+0x00000800u; // 8027326C
  c->lr=0x80273274u; f_8027405C(c); // 80273270
L_80273274:;
  c->r[3]=R32(c->r[16]+0x00000130u); // 80273274
  cmps(c,0,(int32_t)c->r[3],0); // 80273278
  if (crb(c,2)) { goto L_80273518; } // 8027327C
  c->r[4]=c->r[17]|c->r[17]; // 80273280
  c->lr=0x80273288u; f_8025A620(c); // 80273284
  cmps(c,0,(int32_t)c->r[3],0); // 80273288
  if (crb(c,2)) { goto L_80273518; } // 8027328C
  c->r[4]=c->r[1]+0x000000C8u; // 80273290
  W32(c->r[1]+0x000000C4u,c->r[31]); // 80273294
  cmpu(c,0,c->r[4],c->r[29]); // 80273298
  if (!crb(c,0)) { goto L_8027338C; } // 8027329C
  cmps(c,0,(int32_t)c->r[21],8); // 802732A0
  if (!crb(c,1)) { goto L_80273368; } // 802732A4
  c->r[0]=c->r[4]|c->r[4]; // 802732A8
  c->r[3]=0u+0x00000000u; // 802732AC
  cmpu(c,0,c->r[0],c->r[29]); // 802732B0
  c->r[5]=0u+0x00000000u; // 802732B4
  if (crb(c,1)) { goto L_802732E8; } // 802732B8
  c->r[0]=R32(c->r[1]+0x00000200u); // 802732BC
  c->r[6]=0u+0x00000001u; // 802732C0
  cmps(c,0,(int32_t)c->r[0],0); // 802732C4
  if (!crb(c,2)) { goto L_802732DC; } // 802732C8
  c->r[0]=R32(c->r[1]+0x000001FCu); // 802732CC
  cmps(c,0,(int32_t)c->r[0],0); // 802732D0
  if (crb(c,2)) { goto L_802732DC; } // 802732D4
  c->r[6]=0u+0x00000000u; // 802732D8
L_802732DC:;
  cmps(c,0,(int32_t)c->r[6],0); // 802732DC
  if (crb(c,2)) { goto L_802732E8; } // 802732E0
  c->r[5]=0u+0x00000001u; // 802732E4
L_802732E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802732E8
  if (crb(c,2)) { goto L_80273318; } // 802732EC
  cmps(c,0,(int32_t)c->r[20],0); // 802732F0
  c->r[5]=0u+0x00000001u; // 802732F4
  if (!crb(c,2)) { goto L_8027330C; } // 802732F8
  c->r[0]=R32(c->r[1]+0x000001F8u); // 802732FC
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[0]); // 80273300
  if (crb(c,2)) { goto L_8027330C; } // 80273304
  c->r[5]=0u+0x00000000u; // 80273308
L_8027330C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8027330C
  if (crb(c,2)) { goto L_80273318; } // 80273310
  c->r[3]=0u+0x00000001u; // 80273314
L_80273318:;
  cmps(c,0,(int32_t)c->r[3],0); // 80273318
  if (crb(c,2)) { goto L_80273368; } // 8027331C
  c->r[3]=c->r[1]+0x000000C4u; // 80273320
  c->r[0]=c->r[3]+0x0000001Fu; // 80273324
  c->r[0]=c->r[0]-c->r[4]; // 80273328
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8027332C
  c->ctr=c->r[0]; // 80273330
  c->r[0]=c->r[3]|c->r[3]; // 80273334
  cmpu(c,0,c->r[4],c->r[0]); // 80273338
  if (!crb(c,0)) { goto L_80273368; } // 8027333C
L_80273340:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 80273340
  W32(c->r[4]+0x00000004u,c->r[31]); // 80273344
  W32(c->r[4]+0x00000008u,c->r[31]); // 80273348
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 8027334C
  W32(c->r[4]+0x00000010u,c->r[31]); // 80273350
  W32(c->r[4]+0x00000014u,c->r[31]); // 80273354
  W32(c->r[4]+0x00000018u,c->r[31]); // 80273358
  W32(c->r[4]+0x0000001Cu,c->r[31]); // 8027335C
  c->r[4]=c->r[4]+0x00000020u; // 80273360
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80273340; } // 80273364
L_80273368:;
  c->r[0]=c->r[29]+0x00000003u; // 80273368
  c->r[0]=c->r[0]-c->r[4]; // 8027336C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80273370
  c->ctr=c->r[0]; // 80273374
  cmpu(c,0,c->r[4],c->r[29]); // 80273378
  if (!crb(c,0)) { goto L_8027338C; } // 8027337C
L_80273380:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 80273380
  c->r[4]=c->r[4]+0x00000004u; // 80273384
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80273380; } // 80273388
L_8027338C:;
  c->r[3]=c->r[1]+0x000000E8u; // 8027338C
  W32(c->r[1]+0x000000E4u,c->r[31]); // 80273390
  cmpu(c,0,c->r[3],c->r[30]); // 80273394
  if (!crb(c,0)) { goto L_8027347C; } // 80273398
  cmps(c,0,(int32_t)c->r[19],8); // 8027339C
  if (!crb(c,1)) { goto L_80273458; } // 802733A0
  c->r[0]=c->r[3]|c->r[3]; // 802733A4
  c->r[4]=0u+0x00000000u; // 802733A8
  cmpu(c,0,c->r[0],c->r[30]); // 802733AC
  c->r[5]=0u+0x00000000u; // 802733B0
  if (crb(c,1)) { goto L_802733E4; } // 802733B4
  c->r[0]=R32(c->r[1]+0x000001F4u); // 802733B8
  c->r[6]=0u+0x00000001u; // 802733BC
  cmps(c,0,(int32_t)c->r[0],0); // 802733C0
  if (!crb(c,2)) { goto L_802733D8; } // 802733C4
  c->r[0]=R32(c->r[1]+0x000001F0u); // 802733C8
  cmps(c,0,(int32_t)c->r[0],0); // 802733CC
  if (crb(c,2)) { goto L_802733D8; } // 802733D0
  c->r[6]=0u+0x00000000u; // 802733D4
L_802733D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 802733D8
  if (crb(c,2)) { goto L_802733E4; } // 802733DC
  c->r[5]=0u+0x00000001u; // 802733E0
L_802733E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802733E4
  if (crb(c,2)) { goto L_80273410; } // 802733E8
  cmps(c,0,(int32_t)c->r[18],0); // 802733EC
  c->r[0]=0u+0x00000001u; // 802733F0
  if (!crb(c,2)) { goto L_80273404; } // 802733F4
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[14]); // 802733F8
  if (crb(c,2)) { goto L_80273404; } // 802733FC
  c->r[0]=0u+0x00000000u; // 80273400
L_80273404:;
  cmps(c,0,(int32_t)c->r[0],0); // 80273404
  if (crb(c,2)) { goto L_80273410; } // 80273408
  c->r[4]=0u+0x00000001u; // 8027340C
L_80273410:;
  cmps(c,0,(int32_t)c->r[4],0); // 80273410
  if (crb(c,2)) { goto L_80273458; } // 80273414
  c->r[0]=c->r[29]+0x0000001Fu; // 80273418
  c->r[0]=c->r[0]-c->r[3]; // 8027341C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80273420
  c->ctr=c->r[0]; // 80273424
  cmpu(c,0,c->r[3],c->r[29]); // 80273428
  if (!crb(c,0)) { goto L_80273458; } // 8027342C
L_80273430:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 80273430
  W32(c->r[3]+0x00000004u,c->r[31]); // 80273434
  W32(c->r[3]+0x00000008u,c->r[31]); // 80273438
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8027343C
  W32(c->r[3]+0x00000010u,c->r[31]); // 80273440
  W32(c->r[3]+0x00000014u,c->r[31]); // 80273444
  W32(c->r[3]+0x00000018u,c->r[31]); // 80273448
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 8027344C
  c->r[3]=c->r[3]+0x00000020u; // 80273450
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80273430; } // 80273454
L_80273458:;
  c->r[0]=c->r[30]+0x00000003u; // 80273458
  c->r[0]=c->r[0]-c->r[3]; // 8027345C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80273460
  c->ctr=c->r[0]; // 80273464
  cmpu(c,0,c->r[3],c->r[30]); // 80273468
  if (!crb(c,0)) { goto L_8027347C; } // 8027346C
L_80273470:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 80273470
  c->r[3]=c->r[3]+0x00000004u; // 80273474
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80273470; } // 80273478
L_8027347C:;
  c->r[3]=R32(c->r[16]+0x00000130u); // 8027347C
  c->r[5]=c->r[17]|c->r[17]; // 80273480
  c->r[4]=c->r[1]+0x000000C0u; // 80273484
  c->r[12]=R32(c->r[3]+0x00000000u); // 80273488
  c->r[12]=R32(c->r[12]+0x00000038u); // 8027348C
  c->ctr=c->r[12]; // 80273490
  if (true) { c->lr=0x80273498u; dispatch(c,c->ctr); } // 80273494
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 80273498
  cmps(c,0,(int32_t)c->r[0],0); // 8027349C
  if (crb(c,2)) { goto L_802734B4; } // 802734A0
  c->r[0]=c->r[0]+c->r[27]; // 802734A4
  c->r[4]=c->r[1]+0x00000054u; // 802734A8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802734AC
  goto L_802734C0; // 802734B0
L_802734B4:;
  c->r[0]=c->r[15]+0x00000040u; // 802734B4
  c->r[4]=c->r[1]+0x00000050u; // 802734B8
  W32(c->r[1]+0x00000050u,c->r[0]); // 802734BC
L_802734C0:;
  c->r[5]=R32(c->r[16]+0x00000150u); // 802734C0
  c->r[0]=R32(c->r[4]+0x00000000u); // 802734C4
  cmps(c,0,(int32_t)c->r[5],0); // 802734C8
  if (crb(c,2)) { goto L_802734E0; } // 802734CC
  c->r[4]=c->r[5]+c->r[26]; // 802734D0
  c->r[5]=c->r[1]+0x0000004Cu; // 802734D4
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 802734D8
  goto L_802734EC; // 802734DC
L_802734E0:;
  c->r[4]=c->r[15]+0x00000144u; // 802734E0
  c->r[5]=c->r[1]+0x00000048u; // 802734E4
  W32(c->r[1]+0x00000048u,c->r[4]); // 802734E8
L_802734EC:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 802734EC
  c->r[5]=c->r[3]|c->r[3]; // 802734F0
  c->r[3]=c->r[1]+0x00000044u; // 802734F4
  c->r[4]=c->r[1]+0x00000040u; // 802734F8
  W32(c->r[1]+0x00000040u,c->r[6]); // 802734FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80273500
  c->lr=0x80273508u; f_8025ACE4(c); // 80273504
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273508
  c->r[0]=R32(c->r[3]+c->r[28]); // 8027350C
  c->r[0]=c->r[0]|0x00000003u; // 80273510
  W32(c->r[3]+c->r[28],c->r[0]); // 80273514
L_80273518:;
  c->r[3]=R32(c->r[16]+0x00000134u); // 80273518
  cmps(c,0,(int32_t)c->r[3],0); // 8027351C
  if (crb(c,2)) { goto L_802735F8; } // 80273520
  c->r[4]=c->r[17]|c->r[17]; // 80273524
  c->lr=0x8027352Cu; f_8025B04C(c); // 80273528
  cmps(c,0,(int32_t)c->r[3],0); // 8027352C
  if (crb(c,2)) { goto L_802735F8; } // 80273530
  c->r[3]=R32(c->r[16]+0x00000134u); // 80273534
  c->r[5]=c->r[17]|c->r[17]; // 80273538
  c->r[4]=c->r[1]+0x00000108u; // 8027353C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80273540
  c->r[12]=R32(c->r[12]+0x00000038u); // 80273544
  c->ctr=c->r[12]; // 80273548
  if (true) { c->lr=0x80273550u; dispatch(c,c->ctr); } // 8027354C
  c->r[0]=R32(c->r[16]+0x00000154u); // 80273550
  cmps(c,0,(int32_t)c->r[0],0); // 80273554
  if (crb(c,2)) { goto L_8027356C; } // 80273558
  c->r[0]=c->r[0]+c->r[25]; // 8027355C
  c->r[4]=c->r[1]+0x0000003Cu; // 80273560
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80273564
  goto L_80273578; // 80273568
L_8027356C:;
  c->r[0]=c->r[15]+0x000001A8u; // 8027356C
  c->r[4]=c->r[1]+0x00000038u; // 80273570
  W32(c->r[1]+0x00000038u,c->r[0]); // 80273574
L_80273578:;
  c->r[5]=R32(c->r[16]+0x0000016Cu); // 80273578
  c->r[0]=R32(c->r[4]+0x00000000u); // 8027357C
  cmps(c,0,(int32_t)c->r[5],0); // 80273580
  if (crb(c,2)) { goto L_80273598; } // 80273584
  c->r[4]=c->r[5]+c->r[24]; // 80273588
  c->r[5]=c->r[1]+0x00000034u; // 8027358C
  W32(c->r[1]+0x00000034u,c->r[4]); // 80273590
  goto L_802735BC; // 80273594
L_80273598:;
  c->r[4]=R32(c->r[15]+0x0000003Cu); // 80273598
  cmps(c,0,(int32_t)c->r[4],0); // 8027359C
  if (crb(c,2)) { goto L_802735AC; } // 802735A0
  c->r[4]=c->r[15]+c->r[4]; // 802735A4
  goto L_802735B0; // 802735A8
L_802735AC:;
  c->r[4]=0u+0x00000000u; // 802735AC
L_802735B0:;
  c->r[4]=c->r[4]+0x000000A0u; // 802735B0
  c->r[5]=c->r[1]+0x00000030u; // 802735B4
  W32(c->r[1]+0x00000030u,c->r[4]); // 802735B8
L_802735BC:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 802735BC
  c->r[5]=c->r[3]|c->r[3]; // 802735C0
  c->r[3]=c->r[1]+0x0000002Cu; // 802735C4
  c->r[4]=c->r[1]+0x00000028u; // 802735C8
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 802735CC
  W32(c->r[1]+0x00000028u,c->r[6]); // 802735D0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802735D4
  c->lr=0x802735DCu; f_8025B7A8(c); // 802735D8
  c->r[3]=c->r[1]+0x0000005Cu; // 802735DC
  c->r[4]=0u+0x00000000u; // 802735E0
  c->lr=0x802735E8u; f_80253030(c); // 802735E4
  c->r[3]=R32(c->r[16]+0x00000140u); // 802735E8
  c->r[0]=R32(c->r[3]+c->r[28]); // 802735EC
  c->r[0]=c->r[0]|0x00000204u; // 802735F0
  W32(c->r[3]+c->r[28],c->r[0]); // 802735F4
L_802735F8:;
  c->r[3]=R32(c->r[16]+0x0000012Cu); // 802735F8
  cmps(c,0,(int32_t)c->r[3],0); // 802735FC
  if (crb(c,2)) { goto L_802736DC; } // 80273600
  c->r[4]=c->r[17]|c->r[17]; // 80273604
  c->lr=0x8027360Cu; f_8025989C(c); // 80273608
  cmps(c,0,(int32_t)c->r[3],0); // 8027360C
  if (crb(c,2)) { goto L_802736DC; } // 80273610
  c->r[0]=R32(c->r[16]+0x00000168u); // 80273614
  cmps(c,0,(int32_t)c->r[0],0); // 80273618
  if (crb(c,2)) { goto L_80273630; } // 8027361C
  c->r[0]=c->r[0]+c->r[23]; // 80273620
  c->r[3]=c->r[1]+0x00000024u; // 80273624
  W32(c->r[1]+0x00000024u,c->r[0]); // 80273628
  goto L_80273654; // 8027362C
L_80273630:;
  c->r[0]=R32(c->r[15]+0x0000003Cu); // 80273630
  cmps(c,0,(int32_t)c->r[0],0); // 80273634
  if (crb(c,2)) { goto L_80273644; } // 80273638
  c->r[3]=c->r[15]+c->r[0]; // 8027363C
  goto L_80273648; // 80273640
L_80273644:;
  c->r[3]=0u+0x00000000u; // 80273644
L_80273648:;
  c->r[0]=c->r[3]+0x00000020u; // 80273648
  c->r[3]=c->r[1]+0x00000020u; // 8027364C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80273650
L_80273654:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80273654
  W32(c->r[1]+0x00000058u,c->r[0]); // 80273658
  c->r[0]=R32(c->r[16]+0x00000158u); // 8027365C
  cmps(c,0,(int32_t)c->r[0],0); // 80273660
  if (crb(c,2)) { goto L_80273678; } // 80273664
  c->r[0]=c->r[0]+c->r[22]; // 80273668
  c->r[6]=c->r[1]+0x0000001Cu; // 8027366C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80273670
  goto L_80273684; // 80273674
L_80273678:;
  c->r[0]=c->r[15]+0x000003F0u; // 80273678
  c->r[6]=c->r[1]+0x00000018u; // 8027367C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80273680
L_80273684:;
  c->r[3]=R32(c->r[16]+0x0000012Cu); // 80273684
  c->r[5]=c->r[17]|c->r[17]; // 80273688
  c->r[4]=c->r[1]+0x00000064u; // 8027368C
  c->r[15]=R32(c->r[6]+0x00000000u); // 80273690
  c->r[12]=R32(c->r[3]+0x00000000u); // 80273694
  c->r[12]=R32(c->r[12]+0x00000038u); // 80273698
  c->ctr=c->r[12]; // 8027369C
  if (true) { c->lr=0x802736A4u; dispatch(c,c->ctr); } // 802736A0
  c->r[0]=R32(c->r[1]+0x00000058u); // 802736A4
  c->r[5]=c->r[3]|c->r[3]; // 802736A8
  W32(c->r[1]+0x00000014u,c->r[15]); // 802736AC
  c->r[3]=c->r[1]+0x00000014u; // 802736B0
  c->r[4]=c->r[1]+0x00000010u; // 802736B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 802736B8
  c->lr=0x802736C0u; f_80259F5C(c); // 802736BC
  c->r[3]=c->r[1]+0x00000058u; // 802736C0
  c->r[4]=0u+0x00000000u; // 802736C4
  c->lr=0x802736CCu; f_80253014(c); // 802736C8
  c->r[3]=R32(c->r[16]+0x00000140u); // 802736CC
  c->r[0]=R32(c->r[3]+c->r[28]); // 802736D0
  c->r[0]=c->r[0]|0x00000108u; // 802736D4
  W32(c->r[3]+c->r[28],c->r[0]); // 802736D8
L_802736DC:;
  c->r[28]=c->r[28]+0x00000004u; // 802736DC
  c->r[27]=c->r[27]+0x00000104u; // 802736E0
  c->r[26]=c->r[26]+0x00000064u; // 802736E4
  c->r[25]=c->r[25]+0x00000248u; // 802736E8
  c->r[24]=c->r[24]+0x00000040u; // 802736EC
  c->r[23]=c->r[23]+0x00000080u; // 802736F0
  c->r[22]=c->r[22]+0x00000028u; // 802736F4
  c->r[17]=c->r[17]+0x00000001u; // 802736F8
L_802736FC:;
  c->r[0]=R32(c->r[1]+0x00000204u); // 802736FC
  cmpu(c,0,c->r[17],c->r[0]); // 80273700
  if (crb(c,0)) { IRQCHK(c); goto L_80273104; } // 80273704
  c->r[3]=R32(c->r[16]+0x000000D4u); // 80273708
  cmps(c,0,(int32_t)c->r[3],0); // 8027370C
  if (crb(c,2)) { goto L_8027374C; } // 80273710
  c->r[0]=R16(c->r[16]+0x000000DAu); // 80273714
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80273718
  if (crb(c,2)) { goto L_8027374C; } // 8027371C
  c->r[0]=R8(c->r[16]+0x000000D8u); // 80273720
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80273724
  if (crb(c,2)) { goto L_8027374C; } // 80273728
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027372C
  c->r[5]=c->r[16]|c->r[16]; // 80273730
  c->r[6]=R32(c->r[1]+0x00000008u); // 80273734
  c->r[4]=0u+0x00000004u; // 80273738
  c->r[12]=R32(c->r[12]+0x00000010u); // 8027373C
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80273740
  c->ctr=c->r[12]; // 80273744
  if (true) { c->lr=0x8027374Cu; dispatch(c,c->ctr); } // 80273748
L_8027374C:;
  c->r[11]=c->r[1]+0x00000250u; // 8027374C
  c->lr=0x80273754u; f_80185EEC(c); // 80273750
  c->r[0]=R32(c->r[1]+0x00000254u); // 80273754
  c->lr=c->r[0]; // 80273758
  c->r[1]=c->r[1]+0x00000250u; // 8027375C
  return; // 80273760
}

// G3dProc__Q34nw4r3g3d6ScnMdlFUlUlPv
void f_80273764(Ctx* __restrict c) {
  trace_call(0x80273764u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80273764
  c->r[0]=c->lr; // 80273768
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027376C
  c->r[11]=c->r[1]+0x00000040u; // 80273770
  c->lr=0x80273778u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80273774
  cmpu(c,0,c->r[4],0x00000009u); // 80273778
  c->r[29]=c->r[3]|c->r[3]; // 8027377C
  c->r[30]=c->r[5]|c->r[5]; // 80273780
  c->r[31]=c->r[6]|c->r[6]; // 80273784
  if (!crb(c,0)) { goto L_802737AC; } // 80273788
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 8027378C
  c->r[6]=0u+0x00000001u; // 80273790
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80273794
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 80273798
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 8027379C
  if (crb(c,2)) { goto L_802737AC; } // 802737A0
  c->r[0]=0u+0x00000001u; // 802737A4
  goto L_802737B0; // 802737A8
L_802737AC:;
  c->r[0]=0u+0x00000000u; // 802737AC
L_802737B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802737B0
  if (!crb(c,2)) { goto L_80273C00; } // 802737B4
  cmps(c,0,(int32_t)c->r[4],6); // 802737B8
  if (crb(c,2)) { goto L_80273998; } // 802737BC
  if (!crb(c,0)) { goto L_802737EC; } // 802737C0
  cmps(c,0,(int32_t)c->r[4],3); // 802737C4
  if (crb(c,2)) { goto L_80273BC4; } // 802737C8
  if (!crb(c,0)) { goto L_802737E0; } // 802737CC
  cmps(c,0,(int32_t)c->r[4],1); // 802737D0
  if (crb(c,2)) { goto L_80273824; } // 802737D4
  if (!crb(c,0)) { goto L_80273970; } // 802737D8
  goto L_80273BF0; // 802737DC
L_802737E0:;
  cmps(c,0,(int32_t)c->r[4],5); // 802737E0
  if (!crb(c,0)) { goto L_80273810; } // 802737E4
  goto L_80273984; // 802737E8
L_802737EC:;
  c->r[5]=0u+0x00010000u; // 802737EC
  c->r[0]=c->r[5]+0x00000001u; // 802737F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802737F4
  if (crb(c,2)) { goto L_80273BA8; } // 802737F8
  if (!crb(c,0)) { goto L_80273BF0; } // 802737FC
  cmps(c,0,(int32_t)c->r[4],8); // 80273800
  if (crb(c,2)) { goto L_80273B80; } // 80273804
  if (!crb(c,0)) { goto L_80273BF0; } // 80273808
  goto L_80273A8C; // 8027380C
L_80273810:;
  c->r[3]=c->r[29]|c->r[29]; // 80273810
  c->r[4]=c->r[30]|c->r[30]; // 80273814
  c->r[5]=c->r[31]|c->r[31]; // 80273818
  c->lr=0x80273820u; f_80270178(c); // 8027381C
  goto L_80273C00; // 80273820
L_80273824:;
  c->r[3]=c->r[29]|c->r[29]; // 80273824
  c->r[4]=c->r[30]|c->r[30]; // 80273828
  c->r[5]=c->r[31]|c->r[31]; // 8027382C
  c->lr=0x80273834u; f_8026FF1C(c); // 80273830
  c->r[3]=R32(c->r[29]+0x0000013Cu); // 80273834
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80273838
  if (!crb(c,2)) { goto L_802738D8; } // 8027383C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80273840
  if (crb(c,2)) { goto L_802738D8; } // 80273844
  c->r[0]=R32(c->r[29]+0x000000E8u); // 80273848
  c->r[3]=c->r[1]+0x0000001Cu; // 8027384C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80273850
  c->lr=0x80273858u; f_80251550(c); // 80273854
  c->r[0]=R32(c->r[29]+0x00000148u); // 80273858
  c->r[26]=c->r[3]|c->r[3]; // 8027385C
  cmps(c,0,(int32_t)c->r[0],0); // 80273860
  if (crb(c,2)) { goto L_802738CC; } // 80273864
  cmps(c,0,(int32_t)c->r[3],0); // 80273868
  c->r[25]=0u+0x00000000u; // 8027386C
  if (crb(c,2)) { goto L_802738CC; } // 80273870
  c->r[27]=0u+0x00000000u; // 80273874
  c->r[28]=0u+0x00000001u; // 80273878
  goto L_802738C4; // 8027387C
L_80273880:;
  c->r[4]=c->r[25]|c->r[25]; // 80273880
  c->r[3]=c->r[1]+0x0000001Cu; // 80273884
  c->lr=0x8027388Cu; f_802514FC(c); // 80273888
  cmps(c,0,(int32_t)c->r[3],0); // 8027388C
  if (crb(c,2)) { goto L_802738A0; } // 80273890
  c->r[0]=R32(c->r[3]+0x00000014u); // 80273894
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 80273898
  goto L_802738A4; // 8027389C
L_802738A0:;
  c->r[0]=0u+0x00000000u; // 802738A0
L_802738A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802738A4
  if (crb(c,2)) { goto L_802738B8; } // 802738A8
  c->r[3]=R32(c->r[29]+0x00000148u); // 802738AC
  W8(c->r[3]+c->r[25],c->r[28]); // 802738B0
  goto L_802738C0; // 802738B4
L_802738B8:;
  c->r[3]=R32(c->r[29]+0x00000148u); // 802738B8
  W8(c->r[3]+c->r[25],c->r[27]); // 802738BC
L_802738C0:;
  c->r[25]=c->r[25]+0x00000001u; // 802738C0
L_802738C4:;
  cmpu(c,0,c->r[25],c->r[26]); // 802738C4
  if (crb(c,0)) { IRQCHK(c); goto L_80273880; } // 802738C8
L_802738CC:;
  c->r[0]=R32(c->r[29]+0x0000013Cu); // 802738CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802738D0
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 802738D4
L_802738D8:;
  c->r[5]=R32(c->r[29]+0x00000128u); // 802738D8
  cmps(c,0,(int32_t)c->r[5],0); // 802738DC
  if (crb(c,2)) { goto L_80273928; } // 802738E0
  c->r[0]=R32(c->r[29]+0x00000148u); // 802738E4
  cmps(c,0,(int32_t)c->r[0],0); // 802738E8
  if (crb(c,2)) { goto L_80273914; } // 802738EC
  c->r[0]=R32(c->r[29]+0x000000E8u); // 802738F0
  c->r[4]=c->r[1]+0x00000014u; // 802738F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802738F8
  c->r[3]=R32(c->r[29]+0x00000148u); // 802738FC
  c->lr=0x80273904u; f_8025969C(c); // 80273900
  c->r[0]=R32(c->r[29]+0x0000013Cu); // 80273904
  c->r[0]=c->r[0]|0x00000001u; // 80273908
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 8027390C
  goto L_80273928; // 80273910
L_80273914:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 80273914
  c->r[4]=c->r[5]|c->r[5]; // 80273918
  c->r[3]=c->r[1]+0x00000018u; // 8027391C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80273920
  c->lr=0x80273928u; f_802595E0(c); // 80273924
L_80273928:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80273928
  cmps(c,0,(int32_t)c->r[3],0); // 8027392C
  if (crb(c,2)) { goto L_80273C00; } // 80273930
  c->r[0]=R16(c->r[29]+0x000000DAu); // 80273934
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80273938
  if (crb(c,2)) { goto L_80273C00; } // 8027393C
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80273940
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80273944
  if (crb(c,2)) { goto L_80273C00; } // 80273948
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027394C
  c->r[5]=c->r[29]|c->r[29]; // 80273950
  c->r[6]=c->r[30]|c->r[30]; // 80273954
  c->r[7]=c->r[31]|c->r[31]; // 80273958
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027395C
  c->r[4]=0u+0x00000004u; // 80273960
  c->ctr=c->r[12]; // 80273964
  if (true) { c->lr=0x8027396Cu; dispatch(c,c->ctr); } // 80273968
  goto L_80273C00; // 8027396C
L_80273970:;
  c->r[3]=c->r[29]|c->r[29]; // 80273970
  c->r[4]=c->r[30]|c->r[30]; // 80273974
  c->r[5]=c->r[31]|c->r[31]; // 80273978
  c->lr=0x80273980u; f_80272FF4(c); // 8027397C
  goto L_80273C00; // 80273980
L_80273984:;
  c->r[3]=c->r[29]|c->r[29]; // 80273984
  c->r[4]=c->r[30]|c->r[30]; // 80273988
  c->r[5]=c->r[31]|c->r[31]; // 8027398C
  c->lr=0x80273994u; f_802701AC(c); // 80273990
  goto L_80273C00; // 80273994
L_80273998:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80273998
  cmps(c,0,(int32_t)c->r[4],0); // 8027399C
  if (crb(c,2)) { goto L_802739E0; } // 802739A0
  c->r[0]=R16(c->r[3]+0x000000DAu); // 802739A4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802739A8
  if (crb(c,2)) { goto L_802739E0; } // 802739AC
  c->r[0]=R8(c->r[3]+0x000000D8u); // 802739B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802739B4
  if (crb(c,2)) { goto L_802739E0; } // 802739B8
  c->r[12]=R32(c->r[4]+0x00000000u); // 802739BC
  c->r[3]=c->r[4]|c->r[4]; // 802739C0
  c->r[5]=c->r[29]|c->r[29]; // 802739C4
  c->r[6]=c->r[30]|c->r[30]; // 802739C8
  c->r[12]=R32(c->r[12]+0x00000018u); // 802739CC
  c->r[7]=c->r[31]|c->r[31]; // 802739D0
  c->r[4]=0u+0x00000001u; // 802739D4
  c->ctr=c->r[12]; // 802739D8
  if (true) { c->lr=0x802739E0u; dispatch(c,c->ctr); } // 802739DC
L_802739E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802739E0
  if (crb(c,2)) { goto L_802739F0; } // 802739E4
  c->r[25]=R32(c->r[31]+0x00000000u); // 802739E8
  goto L_802739F4; // 802739EC
L_802739F0:;
  c->r[25]=R32(c->r[29]+0x00000118u); // 802739F0
L_802739F4:;
  c->r[26]=R32(c->r[29]+0x00000110u); // 802739F4
  c->r[3]=c->r[29]|c->r[29]; // 802739F8
  c->r[0]=R32(c->r[29]+0x000000E8u); // 802739FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80273A00
  c->lr=0x80273A08u; f_802719B4(c); // 80273A04
  c->r[28]=c->r[3]|c->r[3]; // 80273A08
  c->r[3]=c->r[29]|c->r[29]; // 80273A0C
  c->lr=0x80273A14u; f_80271980(c); // 80273A10
  c->r[27]=c->r[3]|c->r[3]; // 80273A14
  c->r[3]=c->r[29]|c->r[29]; // 80273A18
  c->lr=0x80273A20u; f_8027195C(c); // 80273A1C
  c->r[4]=c->r[3]|c->r[3]; // 80273A20
  c->r[5]=c->r[27]|c->r[27]; // 80273A24
  c->r[6]=c->r[28]|c->r[28]; // 80273A28
  c->r[7]=c->r[26]|c->r[26]; // 80273A2C
  c->r[10]=c->r[25]|c->r[25]; // 80273A30
  c->r[3]=c->r[1]+0x00000010u; // 80273A34
  c->r[9]=c->r[29]+0x00000144u; // 80273A38
  c->r[8]=0u+0x00000000u; // 80273A3C
  c->lr=0x80273A44u; f_802683E8(c); // 80273A40
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80273A44
  cmps(c,0,(int32_t)c->r[3],0); // 80273A48
  if (crb(c,2)) { goto L_80273C00; } // 80273A4C
  c->r[0]=R16(c->r[29]+0x000000DAu); // 80273A50
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80273A54
  if (crb(c,2)) { goto L_80273C00; } // 80273A58
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80273A5C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80273A60
  if (crb(c,2)) { goto L_80273C00; } // 80273A64
  c->r[12]=R32(c->r[3]+0x00000000u); // 80273A68
  c->r[5]=c->r[29]|c->r[29]; // 80273A6C
  c->r[6]=c->r[30]|c->r[30]; // 80273A70
  c->r[7]=c->r[31]|c->r[31]; // 80273A74
  c->r[12]=R32(c->r[12]+0x00000018u); // 80273A78
  c->r[4]=0u+0x00000004u; // 80273A7C
  c->ctr=c->r[12]; // 80273A80
  if (true) { c->lr=0x80273A88u; dispatch(c,c->ctr); } // 80273A84
  goto L_80273C00; // 80273A88
L_80273A8C:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80273A8C
  cmps(c,0,(int32_t)c->r[4],0); // 80273A90
  if (crb(c,2)) { goto L_80273AD4; } // 80273A94
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80273A98
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80273A9C
  if (crb(c,2)) { goto L_80273AD4; } // 80273AA0
  c->r[0]=R8(c->r[3]+0x000000D8u); // 80273AA4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80273AA8
  if (crb(c,2)) { goto L_80273AD4; } // 80273AAC
  c->r[12]=R32(c->r[4]+0x00000000u); // 80273AB0
  c->r[3]=c->r[4]|c->r[4]; // 80273AB4
  c->r[5]=c->r[29]|c->r[29]; // 80273AB8
  c->r[6]=c->r[30]|c->r[30]; // 80273ABC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80273AC0
  c->r[7]=c->r[31]|c->r[31]; // 80273AC4
  c->r[4]=0u+0x00000001u; // 80273AC8
  c->ctr=c->r[12]; // 80273ACC
  if (true) { c->lr=0x80273AD4u; dispatch(c,c->ctr); } // 80273AD0
L_80273AD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80273AD4
  if (crb(c,2)) { goto L_80273AE4; } // 80273AD8
  c->r[25]=R32(c->r[31]+0x00000000u); // 80273ADC
  goto L_80273AE8; // 80273AE0
L_80273AE4:;
  c->r[25]=R32(c->r[29]+0x00000118u); // 80273AE4
L_80273AE8:;
  c->r[26]=R32(c->r[29]+0x00000114u); // 80273AE8
  c->r[3]=c->r[29]|c->r[29]; // 80273AEC
  c->r[0]=R32(c->r[29]+0x000000E8u); // 80273AF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80273AF4
  c->lr=0x80273AFCu; f_802719B4(c); // 80273AF8
  c->r[27]=c->r[3]|c->r[3]; // 80273AFC
  c->r[3]=c->r[29]|c->r[29]; // 80273B00
  c->lr=0x80273B08u; f_80271980(c); // 80273B04
  c->r[28]=c->r[3]|c->r[3]; // 80273B08
  c->r[3]=c->r[29]|c->r[29]; // 80273B0C
  c->lr=0x80273B14u; f_8027195C(c); // 80273B10
  c->r[4]=c->r[3]|c->r[3]; // 80273B14
  c->r[5]=c->r[28]|c->r[28]; // 80273B18
  c->r[6]=c->r[27]|c->r[27]; // 80273B1C
  c->r[8]=c->r[26]|c->r[26]; // 80273B20
  c->r[10]=c->r[25]|c->r[25]; // 80273B24
  c->r[3]=c->r[1]+0x0000000Cu; // 80273B28
  c->r[9]=c->r[29]+0x00000144u; // 80273B2C
  c->r[7]=0u+0x00000000u; // 80273B30
  c->lr=0x80273B38u; f_802683E8(c); // 80273B34
  c->r[3]=R32(c->r[29]+0x000000D4u); // 80273B38
  cmps(c,0,(int32_t)c->r[3],0); // 80273B3C
  if (crb(c,2)) { goto L_80273C00; } // 80273B40
  c->r[0]=R16(c->r[29]+0x000000DAu); // 80273B44
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80273B48
  if (crb(c,2)) { goto L_80273C00; } // 80273B4C
  c->r[0]=R8(c->r[29]+0x000000D8u); // 80273B50
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80273B54
  if (crb(c,2)) { goto L_80273C00; } // 80273B58
  c->r[12]=R32(c->r[3]+0x00000000u); // 80273B5C
  c->r[5]=c->r[29]|c->r[29]; // 80273B60
  c->r[6]=c->r[30]|c->r[30]; // 80273B64
  c->r[7]=c->r[31]|c->r[31]; // 80273B68
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80273B6C
  c->r[4]=0u+0x00000004u; // 80273B70
  c->ctr=c->r[12]; // 80273B74
  if (true) { c->lr=0x80273B7Cu; dispatch(c,c->ctr); } // 80273B78
  goto L_80273C00; // 80273B7C
L_80273B80:;
  c->r[3]=c->r[29]|c->r[29]; // 80273B80
  c->lr=0x80273B88u; f_80271824(c); // 80273B84
  c->r[3]=R32(c->r[29]+0x00000138u); // 80273B88
  cmps(c,0,(int32_t)c->r[3],0); // 80273B8C
  if (crb(c,2)) { goto L_80273C00; } // 80273B90
  c->r[12]=R32(c->r[3]+0x00000000u); // 80273B94
  c->r[12]=R32(c->r[12]+0x00000024u); // 80273B98
  c->ctr=c->r[12]; // 80273B9C
  if (true) { c->lr=0x80273BA4u; dispatch(c,c->ctr); } // 80273BA0
  goto L_80273C00; // 80273BA4
L_80273BA8:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80273BA8
  c->r[3]=c->r[29]|c->r[29]; // 80273BAC
  c->r[4]=c->r[31]|c->r[31]; // 80273BB0
  c->r[12]=R32(c->r[12]+0x00000038u); // 80273BB4
  c->ctr=c->r[12]; // 80273BB8
  if (true) { c->lr=0x80273BC0u; dispatch(c,c->ctr); } // 80273BBC
  goto L_80273C00; // 80273BC0
L_80273BC4:;
  c->r[4]=R32(c->r[3]+0x00000138u); // 80273BC4
  cmps(c,0,(int32_t)c->r[4],0); // 80273BC8
  if (crb(c,2)) { goto L_80273C00; } // 80273BCC
  c->r[0]=R32(c->r[3]+0x000000E8u); // 80273BD0
  c->r[3]=c->r[1]+0x00000008u; // 80273BD4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80273BD8
  c->r[5]=R32(c->r[29]+0x00000178u); // 80273BDC
  c->r[6]=R32(c->r[29]+0x0000017Cu); // 80273BE0
  c->r[7]=R32(c->r[29]+0x00000180u); // 80273BE4
  c->lr=0x80273BECu; f_80277810(c); // 80273BE8
  goto L_80273C00; // 80273BEC
L_80273BF0:;
  c->r[3]=c->r[29]|c->r[29]; // 80273BF0
  c->r[5]=c->r[30]|c->r[30]; // 80273BF4
  c->r[6]=c->r[31]|c->r[31]; // 80273BF8
  c->lr=0x80273C00u; f_8026D404(c); // 80273BFC
L_80273C00:;
  c->r[11]=c->r[1]+0x00000040u; // 80273C00
  c->lr=0x80273C08u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80273C04
  c->r[0]=R32(c->r[1]+0x00000044u); // 80273C08
  c->lr=c->r[0]; // 80273C0C
  c->r[1]=c->r[1]+0x00000040u; // 80273C10
  return; // 80273C14
}

// SetScnObjOption__Q34nw4r3g3d6ScnMdlFUlUl
void f_80273C18(Ctx* __restrict c) {
  trace_call(0x80273C18u);
  c->r[6]=0u+0x00030000u; // 80273C18
  c->r[0]=c->r[6]+0x00000001u; // 80273C1C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80273C20
  if (crb(c,2)) { goto L_80273C2C; } // 80273C24
  goto L_80273C54; // 80273C28
L_80273C2C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80273C2C
  if (crb(c,2)) { goto L_80273C44; } // 80273C30
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 80273C34
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80273C38
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80273C3C
  goto L_80273C58; // 80273C40
L_80273C44:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 80273C44
  c->r[0]=c->r[0]|0x00000002u; // 80273C48
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80273C4C
  goto L_80273C58; // 80273C50
L_80273C54:;
  f_80270D88(c); return; // 80273C54
L_80273C58:;
  c->r[3]=0u+0x00000001u; // 80273C58
  return; // 80273C5C
}

// GetScnObjOption__Q34nw4r3g3d6ScnMdlCFUlPUl
void f_80273C60(Ctx* __restrict c) {
  trace_call(0x80273C60u);
  cmps(c,0,(int32_t)c->r[5],0); // 80273C60
  if (!crb(c,2)) { goto L_80273C70; } // 80273C64
  c->r[3]=0u+0x00000000u; // 80273C68
  return; // 80273C6C
L_80273C70:;
  c->r[6]=0u+0x00030000u; // 80273C70
  c->r[0]=c->r[6]+0x00000001u; // 80273C74
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80273C78
  if (crb(c,2)) { goto L_80273C84; } // 80273C7C
  goto L_80273C9C; // 80273C80
L_80273C84:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 80273C84
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 80273C88
  c->r[0]=cntlz(c->r[0]); // 80273C8C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80273C90
  W32(c->r[5]+0x00000000u,c->r[0]); // 80273C94
  goto L_80273CA0; // 80273C98
L_80273C9C:;
  f_80270DD0(c); return; // 80273C9C
L_80273CA0:;
  c->r[3]=0u+0x00000001u; // 80273CA0
  return; // 80273CA4
}

// InitBuffer__Q34nw4r3g3d6ScnMdlFv
void f_80273CA8(Ctx* __restrict c) {
  trace_call(0x80273CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80273CA8
  c->r[0]=c->lr; // 80273CAC
  W32(c->r[1]+0x00000094u,c->r[0]); // 80273CB0
  c->r[11]=c->r[1]+0x00000090u; // 80273CB4
  c->lr=0x80273CBCu; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80273CB8
  c->r[0]=R32(c->r[3]+0x000000E8u); // 80273CBC
  c->r[16]=c->r[3]|c->r[3]; // 80273CC0
  c->r[3]=c->r[1]+0x0000004Cu; // 80273CC4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80273CC8
  c->lr=0x80273CD0u; f_80251AA8(c); // 80273CCC
  c->r[30]=c->r[3]|c->r[3]; // 80273CD0
  c->r[3]=c->r[1]+0x0000004Cu; // 80273CD4
  c->lr=0x80273CDCu; f_80251550(c); // 80273CD8
  c->r[0]=R32(c->r[16]+0x00000148u); // 80273CDC
  c->r[19]=c->r[3]|c->r[3]; // 80273CE0
  cmps(c,0,(int32_t)c->r[0],0); // 80273CE4
  if (crb(c,2)) { goto L_80273D50; } // 80273CE8
  cmps(c,0,(int32_t)c->r[3],0); // 80273CEC
  c->r[20]=0u+0x00000000u; // 80273CF0
  if (crb(c,2)) { goto L_80273D50; } // 80273CF4
  c->r[17]=0u+0x00000000u; // 80273CF8
  c->r[18]=0u+0x00000001u; // 80273CFC
  goto L_80273D48; // 80273D00
L_80273D04:;
  c->r[4]=c->r[20]|c->r[20]; // 80273D04
  c->r[3]=c->r[1]+0x0000004Cu; // 80273D08
  c->lr=0x80273D10u; f_802514FC(c); // 80273D0C
  cmps(c,0,(int32_t)c->r[3],0); // 80273D10
  if (crb(c,2)) { goto L_80273D24; } // 80273D14
  c->r[0]=R32(c->r[3]+0x00000014u); // 80273D18
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 80273D1C
  goto L_80273D28; // 80273D20
L_80273D24:;
  c->r[0]=0u+0x00000000u; // 80273D24
L_80273D28:;
  cmps(c,0,(int32_t)c->r[0],0); // 80273D28
  if (crb(c,2)) { goto L_80273D3C; } // 80273D2C
  c->r[3]=R32(c->r[16]+0x00000148u); // 80273D30
  W8(c->r[3]+c->r[20],c->r[18]); // 80273D34
  goto L_80273D44; // 80273D38
L_80273D3C:;
  c->r[3]=R32(c->r[16]+0x00000148u); // 80273D3C
  W8(c->r[3]+c->r[20],c->r[17]); // 80273D40
L_80273D44:;
  c->r[20]=c->r[20]+0x00000001u; // 80273D44
L_80273D48:;
  cmpu(c,0,c->r[20],c->r[19]); // 80273D48
  if (crb(c,0)) { IRQCHK(c); goto L_80273D04; } // 80273D4C
L_80273D50:;
  c->r[17]=0u+0x00000000u; // 80273D50
  c->r[29]=0u+0x00000000u; // 80273D54
  c->r[28]=0u+0x00000000u; // 80273D58
  c->r[27]=0u+0x00000000u; // 80273D5C
  c->r[26]=0u+0x00000000u; // 80273D60
  c->r[25]=0u+0x00000000u; // 80273D64
  c->r[24]=0u+0x00000000u; // 80273D68
  c->r[23]=0u+0x00000000u; // 80273D6C
  c->r[22]=0u+0x00000000u; // 80273D70
  c->r[21]=0u+0x00000000u; // 80273D74
  c->r[20]=0u+0x00000000u; // 80273D78
  c->r[19]=0u+0x00000000u; // 80273D7C
  c->r[18]=0u+0x00000000u; // 80273D80
  c->r[31]=0u+0x00000000u; // 80273D84
  goto L_8027403C; // 80273D88
L_80273D8C:;
  c->r[4]=c->r[17]|c->r[17]; // 80273D8C
  c->r[3]=c->r[1]+0x0000004Cu; // 80273D90
  c->lr=0x80273D98u; f_80251A54(c); // 80273D94
  W32(c->r[1]+0x00000048u,c->r[3]); // 80273D98
  c->r[3]=R32(c->r[16]+0x00000140u); // 80273D9C
  W32(c->r[3]+c->r[29],c->r[31]); // 80273DA0
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 80273DA4
  cmps(c,0,(int32_t)c->r[0],0); // 80273DA8
  if (crb(c,2)) { goto L_80273DCC; } // 80273DAC
  c->r[4]=R32(c->r[1]+0x00000048u); // 80273DB0
  c->r[3]=c->r[1]+0x00000044u; // 80273DB4
  c->r[0]=c->r[4]+0x00000040u; // 80273DB8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80273DBC
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 80273DC0
  c->r[4]=c->r[0]+c->r[28]; // 80273DC4
  c->lr=0x80273DCCu; f_80253298(c); // 80273DC8
L_80273DCC:;
  c->r[0]=R32(c->r[16]+0x00000150u); // 80273DCC
  cmps(c,0,(int32_t)c->r[0],0); // 80273DD0
  if (crb(c,2)) { goto L_80273DF4; } // 80273DD4
  c->r[4]=R32(c->r[1]+0x00000048u); // 80273DD8
  c->r[3]=c->r[1]+0x00000040u; // 80273DDC
  c->r[0]=c->r[4]+0x00000144u; // 80273DE0
  W32(c->r[1]+0x00000040u,c->r[0]); // 80273DE4
  c->r[0]=R32(c->r[16]+0x00000150u); // 80273DE8
  c->r[4]=c->r[0]+c->r[27]; // 80273DEC
  c->lr=0x80273DF4u; f_802533CC(c); // 80273DF0
L_80273DF4:;
  c->r[0]=R32(c->r[16]+0x00000154u); // 80273DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80273DF8
  if (crb(c,2)) { goto L_80273E1C; } // 80273DFC
  c->r[4]=R32(c->r[1]+0x00000048u); // 80273E00
  c->r[3]=c->r[1]+0x0000003Cu; // 80273E04
  c->r[0]=c->r[4]+0x000001A8u; // 80273E08
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80273E0C
  c->r[0]=R32(c->r[16]+0x00000154u); // 80273E10
  c->r[4]=c->r[0]+c->r[26]; // 80273E14
  c->lr=0x80273E1Cu; f_80253454(c); // 80273E18
L_80273E1C:;
  c->r[0]=R32(c->r[16]+0x00000158u); // 80273E1C
  cmps(c,0,(int32_t)c->r[0],0); // 80273E20
  if (crb(c,2)) { goto L_80273E44; } // 80273E24
  c->r[4]=R32(c->r[1]+0x00000048u); // 80273E28
  c->r[3]=c->r[1]+0x00000038u; // 80273E2C
  c->r[0]=c->r[4]+0x000003F0u; // 80273E30
  W32(c->r[1]+0x00000038u,c->r[0]); // 80273E34
  c->r[0]=R32(c->r[16]+0x00000158u); // 80273E38
  c->r[4]=c->r[0]+c->r[25]; // 80273E3C
  c->lr=0x80273E44u; f_80254430(c); // 80273E40
L_80273E44:;
  c->r[0]=R32(c->r[16]+0x0000015Cu); // 80273E44
  cmps(c,0,(int32_t)c->r[0],0); // 80273E48
  if (crb(c,2)) { goto L_80273E6C; } // 80273E4C
  c->r[4]=R32(c->r[1]+0x00000048u); // 80273E50
  c->r[3]=c->r[1]+0x00000034u; // 80273E54
  c->r[0]=c->r[4]+0x00000014u; // 80273E58
  W32(c->r[1]+0x00000034u,c->r[0]); // 80273E5C
  c->r[0]=R32(c->r[16]+0x0000015Cu); // 80273E60
  c->r[4]=c->r[0]+c->r[24]; // 80273E64
  c->lr=0x80273E6Cu; f_80253668(c); // 80273E68
L_80273E6C:;
  c->r[0]=R32(c->r[16]+0x00000160u); // 80273E6C
  cmps(c,0,(int32_t)c->r[0],0); // 80273E70
  if (crb(c,2)) { goto L_80273E94; } // 80273E74
  c->r[4]=R32(c->r[1]+0x00000048u); // 80273E78
  c->r[3]=c->r[1]+0x00000030u; // 80273E7C
  c->r[0]=c->r[4]+0x0000001Cu; // 80273E80
  W32(c->r[1]+0x00000030u,c->r[0]); // 80273E84
  c->r[0]=R32(c->r[16]+0x00000160u); // 80273E88
  c->r[4]=c->r[0]+c->r[23]; // 80273E8C
  c->lr=0x80273E94u; f_80253770(c); // 80273E90
L_80273E94:;
  c->r[0]=R32(c->r[16]+0x00000164u); // 80273E94
  cmps(c,0,(int32_t)c->r[0],0); // 80273E98
  if (crb(c,2)) { goto L_80273EE0; } // 80273E9C
  c->r[3]=R32(c->r[1]+0x00000048u); // 80273EA0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80273EA4
  cmps(c,0,(int32_t)c->r[0],0); // 80273EA8
  if (crb(c,2)) { goto L_80273EB8; } // 80273EAC
  c->r[0]=c->r[3]+c->r[0]; // 80273EB0
  goto L_80273EBC; // 80273EB4
L_80273EB8:;
  c->r[0]=0u+0x00000000u; // 80273EB8
L_80273EBC:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 80273EBC
  c->r[3]=c->r[1]+0x00000028u; // 80273EC0
  c->r[0]=R32(c->r[16]+0x00000164u); // 80273EC4
  c->r[4]=c->r[0]+c->r[22]; // 80273EC8
  c->lr=0x80273ED0u; f_802530C8(c); // 80273ECC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80273ED0
  c->r[3]=c->r[1]+0x0000002Cu; // 80273ED4
  c->r[4]=0u+0x00000000u; // 80273ED8
  c->lr=0x80273EE0u; f_80252FF8(c); // 80273EDC
L_80273EE0:;
  c->r[0]=R32(c->r[16]+0x00000168u); // 80273EE0
  cmps(c,0,(int32_t)c->r[0],0); // 80273EE4
  if (crb(c,2)) { goto L_80273F30; } // 80273EE8
  c->r[3]=R32(c->r[1]+0x00000048u); // 80273EEC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80273EF0
  cmps(c,0,(int32_t)c->r[0],0); // 80273EF4
  if (crb(c,2)) { goto L_80273F04; } // 80273EF8
  c->r[3]=c->r[3]+c->r[0]; // 80273EFC
  goto L_80273F08; // 80273F00
L_80273F04:;
  c->r[3]=0u+0x00000000u; // 80273F04
L_80273F08:;
  c->r[0]=c->r[3]+0x00000020u; // 80273F08
  c->r[3]=c->r[1]+0x00000020u; // 80273F0C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80273F10
  c->r[0]=R32(c->r[16]+0x00000168u); // 80273F14
  c->r[4]=c->r[0]+c->r[21]; // 80273F18
  c->lr=0x80273F20u; f_80253104(c); // 80273F1C
  W32(c->r[1]+0x00000024u,c->r[3]); // 80273F20
  c->r[3]=c->r[1]+0x00000024u; // 80273F24
  c->r[4]=0u+0x00000000u; // 80273F28
  c->lr=0x80273F30u; f_80253014(c); // 80273F2C
L_80273F30:;
  c->r[0]=R32(c->r[16]+0x0000016Cu); // 80273F30
  cmps(c,0,(int32_t)c->r[0],0); // 80273F34
  if (crb(c,2)) { goto L_80273F80; } // 80273F38
  c->r[3]=R32(c->r[1]+0x00000048u); // 80273F3C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80273F40
  cmps(c,0,(int32_t)c->r[0],0); // 80273F44
  if (crb(c,2)) { goto L_80273F54; } // 80273F48
  c->r[3]=c->r[3]+c->r[0]; // 80273F4C
  goto L_80273F58; // 80273F50
L_80273F54:;
  c->r[3]=0u+0x00000000u; // 80273F54
L_80273F58:;
  c->r[0]=c->r[3]+0x000000A0u; // 80273F58
  c->r[3]=c->r[1]+0x00000018u; // 80273F5C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80273F60
  c->r[0]=R32(c->r[16]+0x0000016Cu); // 80273F64
  c->r[4]=c->r[0]+c->r[20]; // 80273F68
  c->lr=0x80273F70u; f_80253140(c); // 80273F6C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80273F70
  c->r[3]=c->r[1]+0x0000001Cu; // 80273F74
  c->r[4]=0u+0x00000000u; // 80273F78
  c->lr=0x80273F80u; f_80253030(c); // 80273F7C
L_80273F80:;
  c->r[0]=R32(c->r[16]+0x00000170u); // 80273F80
  cmps(c,0,(int32_t)c->r[0],0); // 80273F84
  if (crb(c,2)) { goto L_80273FD0; } // 80273F88
  c->r[3]=R32(c->r[1]+0x00000048u); // 80273F8C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80273F90
  cmps(c,0,(int32_t)c->r[0],0); // 80273F94
  if (crb(c,2)) { goto L_80273FA4; } // 80273F98
  c->r[3]=c->r[3]+c->r[0]; // 80273F9C
  goto L_80273FA8; // 80273FA0
L_80273FA4:;
  c->r[3]=0u+0x00000000u; // 80273FA4
L_80273FA8:;
  c->r[0]=c->r[3]+0x000000E0u; // 80273FA8
  c->r[3]=c->r[1]+0x00000010u; // 80273FAC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80273FB0
  c->r[0]=R32(c->r[16]+0x00000170u); // 80273FB4
  c->r[4]=c->r[0]+c->r[19]; // 80273FB8
  c->lr=0x80273FC0u; f_8025317C(c); // 80273FBC
  W32(c->r[1]+0x00000014u,c->r[3]); // 80273FC0
  c->r[3]=c->r[1]+0x00000014u; // 80273FC4
  c->r[4]=0u+0x00000000u; // 80273FC8
  c->lr=0x80273FD0u; f_8025304C(c); // 80273FCC
L_80273FD0:;
  c->r[0]=R32(c->r[16]+0x00000174u); // 80273FD0
  cmps(c,0,(int32_t)c->r[0],0); // 80273FD4
  if (crb(c,2)) { goto L_80274008; } // 80273FD8
  c->r[3]=c->r[1]+0x00000048u; // 80273FDC
  c->lr=0x80273FE4u; f_80254840(c); // 80273FE0
  W32(c->r[1]+0x00000008u,c->r[3]); // 80273FE4
  c->r[3]=c->r[1]+0x00000008u; // 80273FE8
  c->r[0]=R32(c->r[16]+0x00000174u); // 80273FEC
  c->r[4]=c->r[0]+c->r[18]; // 80273FF0
  c->lr=0x80273FF8u; f_80252F5C(c); // 80273FF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80273FF8
  c->r[3]=c->r[1]+0x0000000Cu; // 80273FFC
  c->r[4]=0u+0x00000000u; // 80274000
  c->lr=0x80274008u; f_80252FC0(c); // 80274004
L_80274008:;
  c->r[29]=c->r[29]+0x00000004u; // 80274008
  c->r[28]=c->r[28]+0x00000104u; // 8027400C
  c->r[27]=c->r[27]+0x00000064u; // 80274010
  c->r[26]=c->r[26]+0x00000248u; // 80274014
  c->r[25]=c->r[25]+0x00000028u; // 80274018
  c->r[24]=c->r[24]+0x00000008u; // 8027401C
  c->r[23]=c->r[23]+0x0000000Cu; // 80274020
  c->r[22]=c->r[22]+0x00000020u; // 80274024
  c->r[21]=c->r[21]+0x00000080u; // 80274028
  c->r[20]=c->r[20]+0x00000040u; // 8027402C
  c->r[19]=c->r[19]+0x000000A0u; // 80274030
  c->r[18]=c->r[18]+0x00000200u; // 80274034
  c->r[17]=c->r[17]+0x00000001u; // 80274038
L_8027403C:;
  cmpu(c,0,c->r[17],c->r[30]); // 8027403C
  if (crb(c,0)) { IRQCHK(c); goto L_80273D8C; } // 80274040
  c->r[11]=c->r[1]+0x00000090u; // 80274044
  c->lr=0x8027404Cu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80274048
  c->r[0]=R32(c->r[1]+0x00000094u); // 8027404C
  c->lr=c->r[0]; // 80274050
  c->r[1]=c->r[1]+0x00000090u; // 80274054
  return; // 80274058
}

// CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
void f_8027405C(Ctx* __restrict c) {
  trace_call(0x8027405Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027405C
  c->r[0]=c->lr; // 80274060
  W32(c->r[1]+0x00000064u,c->r[0]); // 80274064
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80274068
  c->r[31]=c->r[5]|c->r[5]; // 8027406C
  W32(c->r[1]+0x00000058u,c->r[30]); // 80274070
  c->r[30]=c->r[4]|c->r[4]; // 80274074
  W32(c->r[1]+0x00000054u,c->r[29]); // 80274078
  c->r[29]=c->r[3]|c->r[3]; // 8027407C
  c->r[0]=R32(c->r[3]+0x000000E8u); // 80274080
  c->r[3]=c->r[1]+0x00000048u; // 80274084
  W32(c->r[1]+0x00000048u,c->r[0]); // 80274088
  c->lr=0x80274090u; f_80251A54(c); // 8027408C
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80274090
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 80274094
  if (crb(c,2)) { goto L_802740C4; } // 80274098
  c->r[0]=R32(c->r[29]+0x0000014Cu); // 8027409C
  cmps(c,0,(int32_t)c->r[0],0); // 802740A0
  if (crb(c,2)) { goto L_802740C4; } // 802740A4
  c->r[0]=c->r[3]+0x00000040u; // 802740A8
  c->r[3]=c->r[1]+0x00000044u; // 802740AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802740B0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)260); // 802740B4
  c->r[4]=R32(c->r[29]+0x0000014Cu); // 802740B8
  c->r[4]=c->r[4]+c->r[0]; // 802740BC
  c->lr=0x802740C4u; f_80253298(c); // 802740C0
L_802740C4:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802740C4
  if (crb(c,2)) { goto L_802740F8; } // 802740C8
  c->r[0]=R32(c->r[29]+0x00000150u); // 802740CC
  cmps(c,0,(int32_t)c->r[0],0); // 802740D0
  if (crb(c,2)) { goto L_802740F8; } // 802740D4
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 802740D8
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)100); // 802740DC
  c->r[3]=c->r[1]+0x00000040u; // 802740E0
  c->r[4]=c->r[4]+0x00000144u; // 802740E4
  W32(c->r[1]+0x00000040u,c->r[4]); // 802740E8
  c->r[4]=R32(c->r[29]+0x00000150u); // 802740EC
  c->r[4]=c->r[4]+c->r[0]; // 802740F0
  c->lr=0x802740F8u; f_802533CC(c); // 802740F4
L_802740F8:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 802740F8
  if (crb(c,2)) { goto L_8027412C; } // 802740FC
  c->r[0]=R32(c->r[29]+0x00000154u); // 80274100
  cmps(c,0,(int32_t)c->r[0],0); // 80274104
  if (crb(c,2)) { goto L_8027412C; } // 80274108
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 8027410C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)584); // 80274110
  c->r[3]=c->r[1]+0x0000003Cu; // 80274114
  c->r[4]=c->r[4]+0x000001A8u; // 80274118
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8027411C
  c->r[4]=R32(c->r[29]+0x00000154u); // 80274120
  c->r[4]=c->r[4]+c->r[0]; // 80274124
  c->lr=0x8027412Cu; f_80253454(c); // 80274128
L_8027412C:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 8027412C
  if (crb(c,2)) { goto L_80274160; } // 80274130
  c->r[0]=R32(c->r[29]+0x00000158u); // 80274134
  cmps(c,0,(int32_t)c->r[0],0); // 80274138
  if (crb(c,2)) { goto L_80274160; } // 8027413C
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 80274140
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)40); // 80274144
  c->r[3]=c->r[1]+0x00000038u; // 80274148
  c->r[4]=c->r[4]+0x000003F0u; // 8027414C
  W32(c->r[1]+0x00000038u,c->r[4]); // 80274150
  c->r[4]=R32(c->r[29]+0x00000158u); // 80274154
  c->r[4]=c->r[4]+c->r[0]; // 80274158
  c->lr=0x80274160u; f_80254430(c); // 8027415C
L_80274160:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 80274160
  if (crb(c,2)) { goto L_80274194; } // 80274164
  c->r[0]=R32(c->r[29]+0x0000015Cu); // 80274168
  cmps(c,0,(int32_t)c->r[0],0); // 8027416C
  if (crb(c,2)) { goto L_80274194; } // 80274170
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 80274174
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80274178
  c->r[3]=c->r[1]+0x00000034u; // 8027417C
  c->r[4]=c->r[4]+0x00000014u; // 80274180
  W32(c->r[1]+0x00000034u,c->r[4]); // 80274184
  c->r[4]=R32(c->r[29]+0x0000015Cu); // 80274188
  c->r[4]=c->r[4]+c->r[0]; // 8027418C
  c->lr=0x80274194u; f_80253668(c); // 80274190
L_80274194:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 80274194
  if (crb(c,2)) { goto L_802741C8; } // 80274198
  c->r[0]=R32(c->r[29]+0x00000160u); // 8027419C
  cmps(c,0,(int32_t)c->r[0],0); // 802741A0
  if (crb(c,2)) { goto L_802741C8; } // 802741A4
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 802741A8
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 802741AC
  c->r[3]=c->r[1]+0x00000030u; // 802741B0
  c->r[4]=c->r[4]+0x0000001Cu; // 802741B4
  W32(c->r[1]+0x00000030u,c->r[4]); // 802741B8
  c->r[4]=R32(c->r[29]+0x00000160u); // 802741BC
  c->r[4]=c->r[4]+c->r[0]; // 802741C0
  c->lr=0x802741C8u; f_80253770(c); // 802741C4
L_802741C8:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 802741C8
  if (crb(c,2)) { goto L_80274220; } // 802741CC
  c->r[0]=R32(c->r[29]+0x00000164u); // 802741D0
  cmps(c,0,(int32_t)c->r[0],0); // 802741D4
  if (crb(c,2)) { goto L_80274220; } // 802741D8
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 802741DC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802741E0
  cmps(c,0,(int32_t)c->r[0],0); // 802741E4
  if (crb(c,2)) { goto L_802741F4; } // 802741E8
  c->r[0]=c->r[3]+c->r[0]; // 802741EC
  goto L_802741F8; // 802741F0
L_802741F4:;
  c->r[0]=0u+0x00000000u; // 802741F4
L_802741F8:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 802741F8
  c->r[0]=rotl(c->r[30],5)&0xFFFFFFE0u; // 802741FC
  c->r[3]=c->r[1]+0x00000028u; // 80274200
  c->r[4]=R32(c->r[29]+0x00000164u); // 80274204
  c->r[4]=c->r[4]+c->r[0]; // 80274208
  c->lr=0x80274210u; f_802530C8(c); // 8027420C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80274210
  c->r[3]=c->r[1]+0x0000002Cu; // 80274214
  c->r[4]=0u+0x00000000u; // 80274218
  c->lr=0x80274220u; f_80252FF8(c); // 8027421C
L_80274220:;
  c->r[0]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[0]); // 80274220
  if (crb(c,2)) { goto L_8027427C; } // 80274224
  c->r[0]=R32(c->r[29]+0x00000168u); // 80274228
  cmps(c,0,(int32_t)c->r[0],0); // 8027422C
  if (crb(c,2)) { goto L_8027427C; } // 80274230
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 80274234
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80274238
  cmps(c,0,(int32_t)c->r[0],0); // 8027423C
  if (crb(c,2)) { goto L_8027424C; } // 80274240
  c->r[3]=c->r[3]+c->r[0]; // 80274244
  goto L_80274250; // 80274248
L_8027424C:;
  c->r[3]=0u+0x00000000u; // 8027424C
L_80274250:;
  c->r[3]=c->r[3]+0x00000020u; // 80274250
  c->r[0]=rotl(c->r[30],7)&0xFFFFFF80u; // 80274254
  W32(c->r[1]+0x00000020u,c->r[3]); // 80274258
  c->r[3]=c->r[1]+0x00000020u; // 8027425C
  c->r[4]=R32(c->r[29]+0x00000168u); // 80274260
  c->r[4]=c->r[4]+c->r[0]; // 80274264
  c->lr=0x8027426Cu; f_80253104(c); // 80274268
  W32(c->r[1]+0x00000024u,c->r[3]); // 8027426C
  c->r[3]=c->r[1]+0x00000024u; // 80274270
  c->r[4]=0u+0x00000000u; // 80274274
  c->lr=0x8027427Cu; f_80253014(c); // 80274278
L_8027427C:;
  c->r[0]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[0]); // 8027427C
  if (crb(c,2)) { goto L_802742D8; } // 80274280
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 80274284
  cmps(c,0,(int32_t)c->r[0],0); // 80274288
  if (crb(c,2)) { goto L_802742D8; } // 8027428C
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 80274290
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80274294
  cmps(c,0,(int32_t)c->r[0],0); // 80274298
  if (crb(c,2)) { goto L_802742A8; } // 8027429C
  c->r[3]=c->r[3]+c->r[0]; // 802742A0
  goto L_802742AC; // 802742A4
L_802742A8:;
  c->r[3]=0u+0x00000000u; // 802742A8
L_802742AC:;
  c->r[3]=c->r[3]+0x000000A0u; // 802742AC
  c->r[0]=rotl(c->r[30],6)&0xFFFFFFC0u; // 802742B0
  W32(c->r[1]+0x00000018u,c->r[3]); // 802742B4
  c->r[3]=c->r[1]+0x00000018u; // 802742B8
  c->r[4]=R32(c->r[29]+0x0000016Cu); // 802742BC
  c->r[4]=c->r[4]+c->r[0]; // 802742C0
  c->lr=0x802742C8u; f_80253140(c); // 802742C4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802742C8
  c->r[3]=c->r[1]+0x0000001Cu; // 802742CC
  c->r[4]=0u+0x00000000u; // 802742D0
  c->lr=0x802742D8u; f_80253030(c); // 802742D4
L_802742D8:;
  c->r[0]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[0]); // 802742D8
  if (crb(c,2)) { goto L_80274334; } // 802742DC
  c->r[0]=R32(c->r[29]+0x00000170u); // 802742E0
  cmps(c,0,(int32_t)c->r[0],0); // 802742E4
  if (crb(c,2)) { goto L_80274334; } // 802742E8
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 802742EC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802742F0
  cmps(c,0,(int32_t)c->r[0],0); // 802742F4
  if (crb(c,2)) { goto L_80274304; } // 802742F8
  c->r[3]=c->r[3]+c->r[0]; // 802742FC
  goto L_80274308; // 80274300
L_80274304:;
  c->r[3]=0u+0x00000000u; // 80274304
L_80274308:;
  c->r[0]=c->r[3]+0x000000E0u; // 80274308
  c->r[3]=c->r[1]+0x00000010u; // 8027430C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80274310
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)160); // 80274314
  c->r[4]=R32(c->r[29]+0x00000170u); // 80274318
  c->r[4]=c->r[4]+c->r[0]; // 8027431C
  c->lr=0x80274324u; f_8025317C(c); // 80274320
  W32(c->r[1]+0x00000014u,c->r[3]); // 80274324
  c->r[3]=c->r[1]+0x00000014u; // 80274328
  c->r[4]=0u+0x00000000u; // 8027432C
  c->lr=0x80274334u; f_8025304C(c); // 80274330
L_80274334:;
  c->r[0]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[0]); // 80274334
  if (crb(c,2)) { goto L_80274378; } // 80274338
  c->r[0]=R32(c->r[29]+0x00000174u); // 8027433C
  cmps(c,0,(int32_t)c->r[0],0); // 80274340
  if (crb(c,2)) { goto L_80274378; } // 80274344
  c->r[3]=c->r[1]+0x0000004Cu; // 80274348
  c->lr=0x80274350u; f_80254840(c); // 8027434C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80274350
  c->r[0]=rotl(c->r[30],9)&0xFFFFFE00u; // 80274354
  c->r[3]=c->r[1]+0x00000008u; // 80274358
  c->r[4]=R32(c->r[29]+0x00000174u); // 8027435C
  c->r[4]=c->r[4]+c->r[0]; // 80274360
  c->lr=0x80274368u; f_80252F5C(c); // 80274364
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80274368
  c->r[3]=c->r[1]+0x0000000Cu; // 8027436C
  c->r[4]=0u+0x00000000u; // 80274370
  c->lr=0x80274378u; f_80252FC0(c); // 80274374
L_80274378:;
  c->r[4]=R32(c->r[29]+0x00000140u); // 80274378
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8027437C
  c->r[0]=R32(c->r[4]+c->r[3]); // 80274380
  c->r[0]=c->r[0]&~c->r[31]; // 80274384
  W32(c->r[4]+c->r[3],c->r[0]); // 80274388
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8027438C
  c->r[30]=R32(c->r[1]+0x00000058u); // 80274390
  c->r[29]=R32(c->r[1]+0x00000054u); // 80274394
  c->r[0]=R32(c->r[1]+0x00000064u); // 80274398
  c->lr=c->r[0]; // 8027439C
  c->r[1]=c->r[1]+0x00000060u; // 802743A0
  return; // 802743A4
}

// SetAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_802743A8(Ctx* __restrict c) {
  trace_call(0x802743A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802743A8
  c->r[0]=c->lr; // 802743AC
  cmps(c,1,(int32_t)c->r[4],0); // 802743B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802743B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802743B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802743BC
  c->r[30]=c->r[5]|c->r[5]; // 802743C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802743C4
  c->r[29]=c->r[4]|c->r[4]; // 802743C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802743CC
  c->r[28]=c->r[3]|c->r[3]; // 802743D0
  if (crb(c,6)) { goto L_802744E8; } // 802743D4
  c->r[0]=R32(c->r[4]+0x00000004u); // 802743D8
  cmps(c,0,(int32_t)c->r[0],0); // 802743DC
  if (!crb(c,2)) { goto L_802744E8; } // 802743E0
  c->r[0]=c->r[5]+0xFFFFFFFBu; // 802743E4
  cmpu(c,0,c->r[0],0x00000001u); // 802743E8
  if (crb(c,1)) { goto L_802744E0; } // 802743EC
  c->r[31]=0u+0x00000000u; // 802743F0
  if (crb(c,6)) { goto L_80274428; } // 802743F4
  c->r[5]=0u+0x80310000u; // 802743F8
  c->r[3]=c->r[29]|c->r[29]; // 802743FC
  c->r[5]=c->r[5]+0xFFFF8540u; // 80274400
  c->r[4]=c->r[1]+0x00000008u; // 80274404
  W32(c->r[1]+0x00000008u,c->r[5]); // 80274408
  c->r[12]=R32(c->r[29]+0x00000000u); // 8027440C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80274410
  c->ctr=c->r[12]; // 80274414
  if (true) { c->lr=0x8027441Cu; dispatch(c,c->ctr); } // 80274418
  cmps(c,0,(int32_t)c->r[3],0); // 8027441C
  if (crb(c,2)) { goto L_80274428; } // 80274420
  c->r[31]=0u+0x00000001u; // 80274424
L_80274428:;
  cmps(c,0,(int32_t)c->r[31],0); // 80274428
  if (crb(c,2)) { goto L_80274438; } // 8027442C
  c->r[31]=c->r[29]|c->r[29]; // 80274430
  goto L_8027443C; // 80274434
L_80274438:;
  c->r[31]=0u+0x00000000u; // 80274438
L_8027443C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8027443C
  if (crb(c,2)) { goto L_802744BC; } // 80274440
  c->r[3]=c->r[31]|c->r[31]; // 80274444
  c->r[4]=0u+0x00000004u; // 80274448
  c->lr=0x80274450u; f_8025FA40(c); // 8027444C
  cmps(c,0,(int32_t)c->r[3],0); // 80274450
  if (!crb(c,2)) { goto L_80274460; } // 80274454
  c->r[3]=0u+0x00000000u; // 80274458
  goto L_802744EC; // 8027445C
L_80274460:;
  c->r[4]=R32(c->r[28]+0x00000138u); // 80274460
  cmps(c,0,(int32_t)c->r[4],0); // 80274464
  if (crb(c,2)) { goto L_80274480; } // 80274468
  c->r[12]=R32(c->r[28]+0x00000000u); // 8027446C
  c->r[3]=c->r[28]|c->r[28]; // 80274470
  c->r[12]=R32(c->r[12]+0x00000038u); // 80274474
  c->ctr=c->r[12]; // 80274478
  if (true) { c->lr=0x80274480u; dispatch(c,c->ctr); } // 8027447C
L_80274480:;
  W32(c->r[28]+0x00000138u,c->r[31]); // 80274480
  c->r[4]=0u+0x00010000u; // 80274484
  c->r[3]=c->r[31]|c->r[31]; // 80274488
  c->r[6]=c->r[28]|c->r[28]; // 8027448C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80274490
  c->r[4]=c->r[4]+0x00000002u; // 80274494
  c->r[5]=0u+0x00000000u; // 80274498
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027449C
  c->ctr=c->r[12]; // 802744A0
  if (true) { c->lr=0x802744A8u; dispatch(c,c->ctr); } // 802744A4
  c->r[0]=R32(c->r[28]+0x00000144u); // 802744A8
  c->r[3]=0u+0x00000001u; // 802744AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802744B0
  W32(c->r[28]+0x00000144u,c->r[0]); // 802744B4
  goto L_802744EC; // 802744B8
L_802744BC:;
  cmps(c,0,(int32_t)c->r[30],6); // 802744BC
  if (!crb(c,2)) { goto L_802744D8; } // 802744C0
  c->r[3]=c->r[28]|c->r[28]; // 802744C4
  c->r[4]=c->r[29]|c->r[29]; // 802744C8
  c->r[5]=c->r[30]|c->r[30]; // 802744CC
  c->lr=0x802744D4u; f_80270EF4(c); // 802744D0
  goto L_802744EC; // 802744D4
L_802744D8:;
  c->r[3]=0u+0x00000000u; // 802744D8
  goto L_802744EC; // 802744DC
L_802744E0:;
  c->lr=0x802744E4u; f_80270EF4(c); // 802744E0
  goto L_802744EC; // 802744E4
L_802744E8:;
  c->r[3]=0u+0x00000000u; // 802744E8
L_802744EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802744EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802744F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802744F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802744F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 802744FC
  c->lr=c->r[0]; // 80274500
  c->r[1]=c->r[1]+0x00000020u; // 80274504
  return; // 80274508
}

// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObj
void f_8027450C(Ctx* __restrict c) {
  trace_call(0x8027450Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027450C
  c->r[0]=c->lr; // 80274510
  cmps(c,0,(int32_t)c->r[4],0); // 80274514
  W32(c->r[1]+0x00000044u,c->r[0]); // 80274518
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8027451C
  c->r[31]=c->r[3]|c->r[3]; // 80274520
  W32(c->r[1]+0x00000038u,c->r[30]); // 80274524
  W32(c->r[1]+0x00000034u,c->r[29]); // 80274528
  W32(c->r[1]+0x00000030u,c->r[28]); // 8027452C
  if (!crb(c,2)) { goto L_8027453C; } // 80274530
  c->r[3]=0u+0x00000000u; // 80274534
  goto L_802746E4; // 80274538
L_8027453C:;
  c->r[0]=R32(c->r[3]+0x00000138u); // 8027453C
  cmpu(c,0,c->r[4],c->r[0]); // 80274540
  if (!crb(c,2)) { goto L_802746E0; } // 80274544
  c->r[3]=c->r[0]|c->r[0]; // 80274548
  c->r[4]=0u+0x00010000u; // 8027454C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274550
  c->r[6]=c->r[31]|c->r[31]; // 80274554
  c->r[4]=c->r[4]+0x00000003u; // 80274558
  c->r[5]=0u+0x00000000u; // 8027455C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80274560
  c->ctr=c->r[12]; // 80274564
  if (true) { c->lr=0x8027456Cu; dispatch(c,c->ctr); } // 80274568
  c->r[0]=R32(c->r[31]+0x00000184u); // 8027456C
  c->r[3]=0u+0x00000000u; // 80274570
  W32(c->r[31]+0x00000138u,c->r[3]); // 80274574
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80274578
  if (!crb(c,2)) { goto L_80274594; } // 8027457C
  c->r[0]=R32(c->r[31]+0x00000144u); // 80274580
  c->r[3]=0u+0x00000001u; // 80274584
  c->r[0]=c->r[0]|0x00000001u; // 80274588
  W32(c->r[31]+0x00000144u,c->r[0]); // 8027458C
  goto L_802746E4; // 80274590
L_80274594:;
  c->r[0]=R32(c->r[31]+0x00000178u); // 80274594
  cmps(c,0,(int32_t)c->r[0],0); // 80274598
  if (crb(c,2)) { goto L_80274600; } // 8027459C
  c->r[0]=R32(c->r[31]+0x000000E8u); // 802745A0
  c->r[3]=c->r[1]+0x0000001Cu; // 802745A4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802745A8
  c->lr=0x802745B0u; f_8025167C(c); // 802745AC
  c->r[30]=c->r[3]|c->r[3]; // 802745B0
  c->r[28]=0u+0x00000000u; // 802745B4
  c->r[29]=0u+0x00000000u; // 802745B8
  goto L_802745F8; // 802745BC
L_802745C0:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 802745C0
  c->r[4]=c->r[28]|c->r[28]; // 802745C4
  c->r[3]=c->r[1]+0x00000018u; // 802745C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 802745CC
  c->lr=0x802745D4u; f_80251628(c); // 802745D0
  W32(c->r[1]+0x00000028u,c->r[3]); // 802745D4
  c->r[4]=R32(c->r[31]+0x00000178u); // 802745D8
  c->r[4]=R32(c->r[4]+c->r[29]); // 802745DC
  cmpu(c,0,c->r[3],c->r[4]); // 802745E0
  if (crb(c,2)) { goto L_802745F0; } // 802745E4
  c->r[3]=c->r[1]+0x00000028u; // 802745E8
  c->lr=0x802745F0u; f_80254BD0(c); // 802745EC
L_802745F0:;
  c->r[29]=c->r[29]+0x00000004u; // 802745F0
  c->r[28]=c->r[28]+0x00000001u; // 802745F4
L_802745F8:;
  cmpu(c,0,c->r[28],c->r[30]); // 802745F8
  if (crb(c,0)) { IRQCHK(c); goto L_802745C0; } // 802745FC
L_80274600:;
  c->r[0]=R32(c->r[31]+0x0000017Cu); // 80274600
  cmps(c,0,(int32_t)c->r[0],0); // 80274604
  if (crb(c,2)) { goto L_8027466C; } // 80274608
  c->r[0]=R32(c->r[31]+0x000000E8u); // 8027460C
  c->r[3]=c->r[1]+0x00000014u; // 80274610
  W32(c->r[1]+0x00000014u,c->r[0]); // 80274614
  c->lr=0x8027461Cu; f_802517A8(c); // 80274618
  c->r[30]=c->r[3]|c->r[3]; // 8027461C
  c->r[28]=0u+0x00000000u; // 80274620
  c->r[29]=0u+0x00000000u; // 80274624
  goto L_80274664; // 80274628
L_8027462C:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 8027462C
  c->r[4]=c->r[28]|c->r[28]; // 80274630
  c->r[3]=c->r[1]+0x00000010u; // 80274634
  W32(c->r[1]+0x00000010u,c->r[0]); // 80274638
  c->lr=0x80274640u; f_80251754(c); // 8027463C
  W32(c->r[1]+0x00000024u,c->r[3]); // 80274640
  c->r[4]=R32(c->r[31]+0x0000017Cu); // 80274644
  c->r[4]=R32(c->r[4]+c->r[29]); // 80274648
  cmpu(c,0,c->r[3],c->r[4]); // 8027464C
  if (crb(c,2)) { goto L_8027465C; } // 80274650
  c->r[3]=c->r[1]+0x00000024u; // 80274654
  c->lr=0x8027465Cu; f_80254CA0(c); // 80274658
L_8027465C:;
  c->r[29]=c->r[29]+0x00000004u; // 8027465C
  c->r[28]=c->r[28]+0x00000001u; // 80274660
L_80274664:;
  cmpu(c,0,c->r[28],c->r[30]); // 80274664
  if (crb(c,0)) { IRQCHK(c); goto L_8027462C; } // 80274668
L_8027466C:;
  c->r[0]=R32(c->r[31]+0x00000180u); // 8027466C
  cmps(c,0,(int32_t)c->r[0],0); // 80274670
  if (crb(c,2)) { goto L_802746D8; } // 80274674
  c->r[0]=R32(c->r[31]+0x000000E8u); // 80274678
  c->r[3]=c->r[1]+0x0000000Cu; // 8027467C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80274680
  c->lr=0x80274688u; f_802518D4(c); // 80274684
  c->r[30]=c->r[3]|c->r[3]; // 80274688
  c->r[28]=0u+0x00000000u; // 8027468C
  c->r[29]=0u+0x00000000u; // 80274690
  goto L_802746D0; // 80274694
L_80274698:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 80274698
  c->r[4]=c->r[28]|c->r[28]; // 8027469C
  c->r[3]=c->r[1]+0x00000008u; // 802746A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802746A4
  c->lr=0x802746ACu; f_80251880(c); // 802746A8
  W32(c->r[1]+0x00000020u,c->r[3]); // 802746AC
  c->r[4]=R32(c->r[31]+0x00000180u); // 802746B0
  c->r[4]=R32(c->r[4]+c->r[29]); // 802746B4
  cmpu(c,0,c->r[3],c->r[4]); // 802746B8
  if (crb(c,2)) { goto L_802746C8; } // 802746BC
  c->r[3]=c->r[1]+0x00000020u; // 802746C0
  c->lr=0x802746C8u; f_80254DA4(c); // 802746C4
L_802746C8:;
  c->r[29]=c->r[29]+0x00000004u; // 802746C8
  c->r[28]=c->r[28]+0x00000001u; // 802746CC
L_802746D0:;
  cmpu(c,0,c->r[28],c->r[30]); // 802746D0
  if (crb(c,0)) { IRQCHK(c); goto L_80274698; } // 802746D4
L_802746D8:;
  c->r[3]=0u+0x00000001u; // 802746D8
  goto L_802746E4; // 802746DC
L_802746E0:;
  c->lr=0x802746E4u; f_802714F0(c); // 802746E0
L_802746E4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 802746E4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802746E8
  c->r[30]=R32(c->r[1]+0x00000038u); // 802746EC
  c->r[29]=R32(c->r[1]+0x00000034u); // 802746F0
  c->r[28]=R32(c->r[1]+0x00000030u); // 802746F4
  c->lr=c->r[0]; // 802746F8
  c->r[1]=c->r[1]+0x00000040u; // 802746FC
  return; // 80274700
}

// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_80274704(Ctx* __restrict c) {
  trace_call(0x80274704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274704
  c->r[0]=c->lr; // 80274708
  cmps(c,0,(int32_t)c->r[4],5); // 8027470C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80274710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80274714
  if (!crb(c,2)) { goto L_8027473C; } // 80274718
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027471C
  c->r[31]=R32(c->r[3]+0x00000138u); // 80274720
  c->r[12]=R32(c->r[12]+0x00000038u); // 80274724
  c->r[4]=c->r[31]|c->r[31]; // 80274728
  c->ctr=c->r[12]; // 8027472C
  if (true) { c->lr=0x80274734u; dispatch(c,c->ctr); } // 80274730
  c->r[3]=c->r[31]|c->r[31]; // 80274734
  goto L_80274740; // 80274738
L_8027473C:;
  c->lr=0x80274740u; f_80271668(c); // 8027473C
L_80274740:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80274740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80274744
  c->lr=c->r[0]; // 80274748
  c->r[1]=c->r[1]+0x00000010u; // 8027474C
  return; // 80274750
}

// fn_80274754
void f_80274754(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],5); // 80274754
  if (!crb(c,2)) { goto L_80274764; } // 80274758
  c->r[3]=R32(c->r[3]+0x00000138u); // 8027475C
  return; // 80274760
L_80274764:;
  f_80271754(c); return; // 80274764
  return; // 80274768
}

// fn_8027476C
void f_8027476C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],5); // 8027476C
  if (!crb(c,2)) { goto L_8027477C; } // 80274770
  c->r[3]=R32(c->r[3]+0x00000138u); // 80274774
  return; // 80274778
L_8027477C:;
  f_802717BC(c); return; // 8027477C
  return; // 80274780
}

// __dt__Q34nw4r3g3d6ScnMdlFv
void f_80274784(Ctx* __restrict c) {
  trace_call(0x80274784u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274784
  c->r[0]=c->lr; // 80274788
  cmps(c,0,(int32_t)c->r[3],0); // 8027478C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80274790
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80274794
  c->r[31]=c->r[3]|c->r[3]; // 80274798
  if (crb(c,2)) { goto L_802747D4; } // 8027479C
  c->r[4]=R32(c->r[3]+0x00000138u); // 802747A0
  c->r[5]=0u+0x80340000u; // 802747A4
  c->r[5]=c->r[5]+0x00004E68u; // 802747A8
  cmps(c,0,(int32_t)c->r[4],0); // 802747AC
  W32(c->r[3]+0x00000000u,c->r[5]); // 802747B0
  if (crb(c,2)) { goto L_802747C8; } // 802747B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802747B8
  c->r[12]=R32(c->r[12]+0x00000038u); // 802747BC
  c->ctr=c->r[12]; // 802747C0
  if (true) { c->lr=0x802747C8u; dispatch(c,c->ctr); } // 802747C4
L_802747C8:;
  c->r[3]=c->r[31]|c->r[31]; // 802747C8
  c->r[4]=0u+0x00000000u; // 802747CC
  c->lr=0x802747D4u; f_80271C00(c); // 802747D0
L_802747D4:;
  c->r[3]=c->r[31]|c->r[31]; // 802747D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802747D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802747DC
  c->lr=c->r[0]; // 802747E0
  c->r[1]=c->r[1]+0x00000010u; // 802747E4
  return; // 802747E8
}

// IsDerivedFrom__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802747EC(Ctx* __restrict c) {
  trace_call(0x802747ECu);
  c->r[3]=0u+0x80310000u; // 802747EC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802747F0
  c->r[3]=c->r[3]+0xFFFF8708u; // 802747F4
  cmpu(c,0,c->r[0],c->r[3]); // 802747F8
  if (!crb(c,2)) { goto L_80274808; } // 802747FC
  c->r[3]=0u+0x00000001u; // 80274800
  return; // 80274804
L_80274808:;
  c->r[3]=0u+0x80310000u; // 80274808
  c->r[0]=R32(c->r[4]+0x00000000u); // 8027480C
  c->r[3]=c->r[3]+0xFFFF86F0u; // 80274810
  cmpu(c,0,c->r[0],c->r[3]); // 80274814
  if (!crb(c,2)) { goto L_80274824; } // 80274818
  c->r[3]=0u+0x00000001u; // 8027481C
  return; // 80274820
L_80274824:;
  c->r[3]=0u+0x80310000u; // 80274824
  c->r[3]=c->r[3]+0xFFFF86C0u; // 80274828
  cmpu(c,0,c->r[0],c->r[3]); // 8027482C
  if (!crb(c,2)) { goto L_8027483C; } // 80274830
  c->r[3]=0u+0x00000001u; // 80274834
  return; // 80274838
L_8027483C:;
  c->r[3]=0u+0x80310000u; // 8027483C
  c->r[3]=c->r[3]+0xFFFF86B0u; // 80274840
  cmpu(c,0,c->r[0],c->r[3]); // 80274844
  if (!crb(c,2)) { goto L_80274854; } // 80274848
  c->r[3]=0u+0x00000001u; // 8027484C
  return; // 80274850
L_80274854:;
  c->r[3]=0u+0x80310000u; // 80274854
  c->r[3]=c->r[3]+0xFFFF8588u; // 80274858
  c->r[0]=c->r[3]-c->r[0]; // 8027485C
  c->r[0]=cntlz(c->r[0]); // 80274860
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80274864
  return; // 80274868
}

// fn_8027486C
void f_8027486C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027486C
  c->r[0]=c->lr; // 80274870
  W32(c->r[1]+0x00000014u,c->r[0]); // 80274874
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274878
  c->r[12]=R32(c->r[12]+0x00000014u); // 8027487C
  c->ctr=c->r[12]; // 80274880
  if (true) { c->lr=0x80274888u; dispatch(c,c->ctr); } // 80274884
  c->r[0]=R32(c->r[1]+0x00000014u); // 80274888
  c->r[3]=c->r[3]+0x00000004u; // 8027488C
  c->lr=c->r[0]; // 80274890
  c->r[1]=c->r[1]+0x00000010u; // 80274894
  return; // 80274898
}

// fn_8027489C
void f_8027489C(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 8027489C
  c->r[3]=c->r[3]+0xFFFF8708u; // 802748A0
  return; // 802748A4
}

// fn_802748A8
void f_802748A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802748A8
  c->r[0]=c->lr; // 802748AC
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802748B0
  cmps(c,0,(int32_t)c->r[4],0); // 802748B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802748B8
  c->r[0]=c->r[7]+0x000000F7u; // 802748BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802748C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802748C4
  c->r[31]=0u+0x00000000u; // 802748C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802748CC
  c->r[30]=c->r[6]|c->r[6]; // 802748D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802748D4
  c->r[29]=c->r[5]|c->r[5]; // 802748D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802748DC
  c->r[28]=c->r[3]|c->r[3]; // 802748E0
  if (crb(c,2)) { goto L_802748EC; } // 802748E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 802748E8
L_802748EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802748EC
  if (crb(c,2)) { goto L_80274944; } // 802748F0
  c->r[3]=c->r[28]|c->r[28]; // 802748F4
  c->r[4]=c->r[0]|c->r[0]; // 802748F8
  c->lr=0x80274900u; f_801A0EF8(c); // 802748FC
  cmps(c,0,(int32_t)c->r[3],0); // 80274900
  c->r[31]=c->r[3]|c->r[3]; // 80274904
  if (!crb(c,2)) { goto L_80274914; } // 80274908
  c->r[3]=0u+0x00000000u; // 8027490C
  goto L_80274948; // 80274910
L_80274914:;
  if (crb(c,2)) { goto L_80274944; } // 80274914
  c->r[4]=c->r[28]|c->r[28]; // 80274918
  c->r[6]=c->r[29]|c->r[29]; // 8027491C
  c->r[5]=c->r[3]+0x000000F4u; // 80274920
  c->lr=0x80274928u; f_8026E17C(c); // 80274924
  c->r[3]=0u+0x80340000u; // 80274928
  c->r[0]=0u+0x00000000u; // 8027492C
  c->r[3]=c->r[3]+0x00004EB0u; // 80274930
  W32(c->r[31]+0x00000000u,c->r[3]); // 80274934
  W32(c->r[31]+0x000000E8u,c->r[30]); // 80274938
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8027493C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 80274940
L_80274944:;
  c->r[3]=c->r[31]|c->r[31]; // 80274944
L_80274948:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80274948
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027494C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80274950
  c->r[29]=R32(c->r[1]+0x00000014u); // 80274954
  c->r[28]=R32(c->r[1]+0x00000010u); // 80274958
  c->lr=c->r[0]; // 8027495C
  c->r[1]=c->r[1]+0x00000020u; // 80274960
  return; // 80274964
}

// fn_80274968
void f_80274968(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E8u,c->r[4]); // 80274968
  return; // 8027496C
}

// fn_80274970
void f_80274970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274970
  c->r[0]=c->lr; // 80274974
  W32(c->r[1]+0x00000014u,c->r[0]); // 80274978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8027497C
  c->r[31]=c->r[4]|c->r[4]; // 80274980
  W32(c->r[1]+0x00000008u,c->r[30]); // 80274984
  c->r[30]=c->r[3]|c->r[3]; // 80274988
  c->r[0]=R32(c->r[3]+0x000000F0u); // 8027498C
  cmps(c,0,(int32_t)c->r[0],0); // 80274990
  if (crb(c,2)) { goto L_802749A0; } // 80274994
  cmpu(c,0,c->r[0],c->r[4]); // 80274998
  if (!crb(c,2)) { goto L_80274A04; } // 8027499C
L_802749A0:;
  c->r[0]=R32(c->r[3]+0x000000E4u); // 802749A0
  cmps(c,0,(int32_t)c->r[0],0); // 802749A4
  if (!crb(c,1)) { goto L_802749F4; } // 802749A8
  c->r[12]=R32(c->r[3]+0x000000E8u); // 802749AC
  cmps(c,0,(int32_t)c->r[12],0); // 802749B0
  if (crb(c,2)) { goto L_802749C8; } // 802749B4
  c->r[3]=c->r[30]|c->r[30]; // 802749B8
  c->ctr=c->r[12]; // 802749BC
  if (true) { c->lr=0x802749C4u; dispatch(c,c->ctr); } // 802749C0
  goto L_802749CC; // 802749C4
L_802749C8:;
  c->r[3]=0u+0x00000000u; // 802749C8
L_802749CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802749CC
  if (crb(c,0)) { goto L_802749E8; } // 802749D0
  c->r[4]=R32(c->r[30]+0x000000DCu); // 802749D4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802749D8
  c->r[0]=R32(c->r[4]+c->r[0]); // 802749DC
  W32(c->r[30]+0x000000ECu,c->r[0]); // 802749E0
  goto L_802749FC; // 802749E4
L_802749E8:;
  c->r[0]=0u+0x00000000u; // 802749E8
  W32(c->r[30]+0x000000ECu,c->r[0]); // 802749EC
  goto L_802749FC; // 802749F0
L_802749F4:;
  c->r[0]=0u+0x00000000u; // 802749F4
  W32(c->r[3]+0x000000ECu,c->r[0]); // 802749F8
L_802749FC:;
  W32(c->r[30]+0x000000F0u,c->r[31]); // 802749FC
  goto L_80274A0C; // 80274A00
L_80274A04:;
  c->r[0]=0u+0x00000000u; // 80274A04
  W32(c->r[3]+0x000000F0u,c->r[0]); // 80274A08
L_80274A0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80274A0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80274A10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80274A14
  c->lr=c->r[0]; // 80274A18
  c->r[1]=c->r[1]+0x00000010u; // 80274A1C
  return; // 80274A20
}

// fn_80274A24
void f_80274A24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274A24
  c->r[0]=c->lr; // 80274A28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80274A2C
  c->r[11]=c->r[1]+0x00000020u; // 80274A30
  c->lr=0x80274A38u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80274A34
  cmpu(c,0,c->r[4],0x00000009u); // 80274A38
  c->r[28]=c->r[3]|c->r[3]; // 80274A3C
  c->r[29]=c->r[4]|c->r[4]; // 80274A40
  c->r[30]=c->r[5]|c->r[5]; // 80274A44
  c->r[31]=c->r[6]|c->r[6]; // 80274A48
  if (!crb(c,0)) { goto L_80274A70; } // 80274A4C
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80274A50
  c->r[6]=0u+0x00000001u; // 80274A54
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80274A58
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 80274A5C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80274A60
  if (crb(c,2)) { goto L_80274A70; } // 80274A64
  c->r[0]=0u+0x00000001u; // 80274A68
  goto L_80274A74; // 80274A6C
L_80274A70:;
  c->r[0]=0u+0x00000000u; // 80274A70
L_80274A74:;
  cmps(c,0,(int32_t)c->r[0],0); // 80274A74
  if (!crb(c,2)) { goto L_80274C78; } // 80274A78
  cmps(c,0,(int32_t)c->r[4],5); // 80274A7C
  if (crb(c,2)) { goto L_80274AB0; } // 80274A80
  if (!crb(c,0)) { goto L_80274A98; } // 80274A84
  cmps(c,0,(int32_t)c->r[4],3); // 80274A88
  if (crb(c,2)) { goto L_80274C64; } // 80274A8C
  if (!crb(c,0)) { goto L_80274B50; } // 80274A90
  goto L_80274C64; // 80274A94
L_80274A98:;
  c->r[3]=0u+0x00010000u; // 80274A98
  c->r[0]=c->r[3]+0x00000001u; // 80274A9C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80274AA0
  if (!crb(c,0)) { goto L_80274C64; } // 80274AA4
  goto L_80274C64; // 80274AA8
  goto L_80274C64; // 80274AAC
L_80274AB0:;
  c->r[3]=c->r[28]|c->r[28]; // 80274AB0
  c->r[4]=0u+0x00000002u; // 80274AB4
  c->lr=0x80274ABCu; f_80274970(c); // 80274AB8
  c->r[0]=R32(c->r[28]+0x000000ECu); // 80274ABC
  cmps(c,0,(int32_t)c->r[0],0); // 80274AC0
  if (crb(c,2)) { goto L_80274C78; } // 80274AC4
  c->r[12]=R32(c->r[31]+0x00000000u); // 80274AC8
  c->r[3]=c->r[31]|c->r[31]; // 80274ACC
  c->r[4]=c->r[28]|c->r[28]; // 80274AD0
  c->r[5]=0u+0x00000000u; // 80274AD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80274AD8
  c->r[6]=0u+0x00000000u; // 80274ADC
  c->ctr=c->r[12]; // 80274AE0
  if (true) { c->lr=0x80274AE8u; dispatch(c,c->ctr); } // 80274AE4
  cmps(c,0,(int32_t)c->r[3],0); // 80274AE8
  if (!crb(c,2)) { goto L_80274B14; } // 80274AEC
  c->r[3]=R32(c->r[28]+0x000000ECu); // 80274AF0
  c->r[4]=c->r[29]|c->r[29]; // 80274AF4
  c->r[5]=c->r[30]|c->r[30]; // 80274AF8
  c->r[6]=c->r[31]|c->r[31]; // 80274AFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274B00
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80274B04
  c->ctr=c->r[12]; // 80274B08
  if (true) { c->lr=0x80274B10u; dispatch(c,c->ctr); } // 80274B0C
  goto L_80274C78; // 80274B10
L_80274B14:;
  cmps(c,0,(int32_t)c->r[3],1); // 80274B14
  if (!crb(c,2)) { goto L_80274C78; } // 80274B18
  c->r[27]=R32(c->r[13]+0xFFFFA410u); // 80274B1C
  c->r[0]=0u+0x00000000u; // 80274B20
  c->r[4]=c->r[29]|c->r[29]; // 80274B24
  c->r[5]=c->r[30]|c->r[30]; // 80274B28
  W32(c->r[13]+0xFFFFA410u,c->r[0]); // 80274B2C
  c->r[6]=c->r[31]|c->r[31]; // 80274B30
  c->r[3]=R32(c->r[28]+0x000000ECu); // 80274B34
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274B38
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80274B3C
  c->ctr=c->r[12]; // 80274B40
  if (true) { c->lr=0x80274B48u; dispatch(c,c->ctr); } // 80274B44
  W32(c->r[13]+0xFFFFA410u,c->r[27]); // 80274B48
  goto L_80274C78; // 80274B4C
L_80274B50:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80274B50
  cmps(c,0,(int32_t)c->r[4],0); // 80274B54
  if (crb(c,2)) { goto L_80274B98; } // 80274B58
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80274B5C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80274B60
  if (crb(c,2)) { goto L_80274B98; } // 80274B64
  c->r[0]=R8(c->r[3]+0x000000D8u); // 80274B68
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80274B6C
  if (crb(c,2)) { goto L_80274B98; } // 80274B70
  c->r[12]=R32(c->r[4]+0x00000000u); // 80274B74
  c->r[3]=c->r[4]|c->r[4]; // 80274B78
  c->r[5]=c->r[28]|c->r[28]; // 80274B7C
  c->r[6]=c->r[30]|c->r[30]; // 80274B80
  c->r[12]=R32(c->r[12]+0x00000014u); // 80274B84
  c->r[7]=c->r[31]|c->r[31]; // 80274B88
  c->r[4]=0u+0x00000001u; // 80274B8C
  c->ctr=c->r[12]; // 80274B90
  if (true) { c->lr=0x80274B98u; dispatch(c,c->ctr); } // 80274B94
L_80274B98:;
  c->r[3]=c->r[28]|c->r[28]; // 80274B98
  c->r[4]=c->r[31]|c->r[31]; // 80274B9C
  c->lr=0x80274BA4u; f_8026CC48(c); // 80274BA0
  c->r[3]=R32(c->r[28]+0x000000D4u); // 80274BA4
  cmps(c,0,(int32_t)c->r[3],0); // 80274BA8
  if (crb(c,2)) { goto L_80274BE8; } // 80274BAC
  c->r[0]=R16(c->r[28]+0x000000DAu); // 80274BB0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80274BB4
  if (crb(c,2)) { goto L_80274BE8; } // 80274BB8
  c->r[0]=R8(c->r[28]+0x000000D8u); // 80274BBC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80274BC0
  if (crb(c,2)) { goto L_80274BE8; } // 80274BC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274BC8
  c->r[5]=c->r[28]|c->r[28]; // 80274BCC
  c->r[6]=c->r[30]|c->r[30]; // 80274BD0
  c->r[7]=c->r[31]|c->r[31]; // 80274BD4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80274BD8
  c->r[4]=0u+0x00000002u; // 80274BDC
  c->ctr=c->r[12]; // 80274BE0
  if (true) { c->lr=0x80274BE8u; dispatch(c,c->ctr); } // 80274BE4
L_80274BE8:;
  c->r[3]=c->r[28]|c->r[28]; // 80274BE8
  c->r[4]=0u+0x00000001u; // 80274BEC
  c->lr=0x80274BF4u; f_80274970(c); // 80274BF0
  c->r[3]=R32(c->r[28]+0x000000ECu); // 80274BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80274BF8
  if (crb(c,2)) { goto L_80274C1C; } // 80274BFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274C00
  c->r[4]=c->r[29]|c->r[29]; // 80274C04
  c->r[5]=c->r[30]|c->r[30]; // 80274C08
  c->r[6]=c->r[31]|c->r[31]; // 80274C0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80274C10
  c->ctr=c->r[12]; // 80274C14
  if (true) { c->lr=0x80274C1Cu; dispatch(c,c->ctr); } // 80274C18
L_80274C1C:;
  c->r[3]=R32(c->r[28]+0x000000D4u); // 80274C1C
  cmps(c,0,(int32_t)c->r[3],0); // 80274C20
  if (crb(c,2)) { goto L_80274C78; } // 80274C24
  c->r[0]=R16(c->r[28]+0x000000DAu); // 80274C28
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80274C2C
  if (crb(c,2)) { goto L_80274C78; } // 80274C30
  c->r[0]=R8(c->r[28]+0x000000D8u); // 80274C34
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80274C38
  if (crb(c,2)) { goto L_80274C78; } // 80274C3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274C40
  c->r[5]=c->r[28]|c->r[28]; // 80274C44
  c->r[6]=c->r[30]|c->r[30]; // 80274C48
  c->r[7]=c->r[31]|c->r[31]; // 80274C4C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80274C50
  c->r[4]=0u+0x00000004u; // 80274C54
  c->ctr=c->r[12]; // 80274C58
  if (true) { c->lr=0x80274C60u; dispatch(c,c->ctr); } // 80274C5C
  goto L_80274C78; // 80274C60
L_80274C64:;
  c->r[3]=c->r[28]|c->r[28]; // 80274C64
  c->r[4]=c->r[29]|c->r[29]; // 80274C68
  c->r[5]=c->r[30]|c->r[30]; // 80274C6C
  c->r[6]=c->r[31]|c->r[31]; // 80274C70
  c->lr=0x80274C78u; f_8026DA54(c); // 80274C74
L_80274C78:;
  c->r[11]=c->r[1]+0x00000020u; // 80274C78
  c->lr=0x80274C80u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80274C7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80274C80
  c->lr=c->r[0]; // 80274C84
  c->r[1]=c->r[1]+0x00000020u; // 80274C88
  return; // 80274C8C
}

// fn_80274C90
void f_80274C90(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 80274C90
  c->r[0]=R32(c->r[4]+0x00000000u); // 80274C94
  c->r[3]=c->r[3]+0xFFFF8718u; // 80274C98
  cmpu(c,0,c->r[0],c->r[3]); // 80274C9C
  if (!crb(c,2)) { goto L_80274CAC; } // 80274CA0
  c->r[3]=0u+0x00000001u; // 80274CA4
  return; // 80274CA8
L_80274CAC:;
  c->r[3]=0u+0x80310000u; // 80274CAC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80274CB0
  c->r[3]=c->r[3]+0xFFFF86D0u; // 80274CB4
  cmpu(c,0,c->r[0],c->r[3]); // 80274CB8
  if (!crb(c,2)) { goto L_80274CC8; } // 80274CBC
  c->r[3]=0u+0x00000001u; // 80274CC0
  return; // 80274CC4
L_80274CC8:;
  c->r[3]=0u+0x80310000u; // 80274CC8
  c->r[3]=c->r[3]+0xFFFF86B0u; // 80274CCC
  cmpu(c,0,c->r[0],c->r[3]); // 80274CD0
  if (!crb(c,2)) { goto L_80274CE0; } // 80274CD4
  c->r[3]=0u+0x00000001u; // 80274CD8
  return; // 80274CDC
L_80274CE0:;
  c->r[3]=0u+0x80310000u; // 80274CE0
  c->r[3]=c->r[3]+0xFFFF8588u; // 80274CE4
  c->r[0]=c->r[3]-c->r[0]; // 80274CE8
  c->r[0]=cntlz(c->r[0]); // 80274CEC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80274CF0
  return; // 80274CF4
}

// fn_80274CF8
void f_80274CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274CF8
  c->r[0]=c->lr; // 80274CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80274D00
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274D04
  c->r[12]=R32(c->r[12]+0x00000014u); // 80274D08
  c->ctr=c->r[12]; // 80274D0C
  if (true) { c->lr=0x80274D14u; dispatch(c,c->ctr); } // 80274D10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80274D14
  c->r[3]=c->r[3]+0x00000004u; // 80274D18
  c->lr=c->r[0]; // 80274D1C
  c->r[1]=c->r[1]+0x00000010u; // 80274D20
  return; // 80274D24
}

// fn_80274D28
void f_80274D28(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 80274D28
  c->r[3]=c->r[3]+0xFFFF8718u; // 80274D2C
  return; // 80274D30
}

// fn_80274D34
void f_80274D34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274D34
  c->r[0]=c->lr; // 80274D38
  cmps(c,0,(int32_t)c->r[3],0); // 80274D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80274D40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80274D44
  c->r[31]=c->r[3]|c->r[3]; // 80274D48
  if (crb(c,2)) { goto L_80274D58; } // 80274D4C
  c->r[4]=0u+0x00000000u; // 80274D50
  c->lr=0x80274D58u; f_8026E1EC(c); // 80274D54
L_80274D58:;
  c->r[3]=c->r[31]|c->r[31]; // 80274D58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80274D5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80274D60
  c->lr=c->r[0]; // 80274D64
  c->r[1]=c->r[1]+0x00000010u; // 80274D68
  return; // 80274D6C
}

// fn_80274D70
void f_80274D70(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80274D70
  return; // 80274D74
}

// fn_80274D78
void f_80274D78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274D78
  c->r[0]=c->lr; // 80274D7C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80274D80
  c->r[11]=c->r[1]+0x00000030u; // 80274D84
  c->lr=0x80274D8Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80274D88
  c->r[26]=c->r[3]|c->r[3]; // 80274D8C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80274D90
  c->r[27]=c->r[4]|c->r[4]; // 80274D94
  c->r[28]=c->r[5]|c->r[5]; // 80274D98
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274D9C
  c->r[29]=c->r[6]|c->r[6]; // 80274DA0
  c->r[12]=R32(c->r[12]+0x00000028u); // 80274DA4
  c->ctr=c->r[12]; // 80274DA8
  if (true) { c->lr=0x80274DB0u; dispatch(c,c->ctr); } // 80274DAC
  cmps(c,0,(int32_t)c->r[3],0); // 80274DB0
  if (!crb(c,2)) { goto L_80274DDC; } // 80274DB4
  c->r[3]=R32(c->r[26]+0x00000008u); // 80274DB8
  c->r[4]=c->r[27]|c->r[27]; // 80274DBC
  c->r[5]=c->r[28]|c->r[28]; // 80274DC0
  c->r[6]=c->r[29]|c->r[29]; // 80274DC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274DC8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80274DCC
  c->ctr=c->r[12]; // 80274DD0
  if (true) { c->lr=0x80274DD8u; dispatch(c,c->ctr); } // 80274DD4
  goto L_80274E90; // 80274DD8
L_80274DDC:;
  cmps(c,0,(int32_t)c->r[27],0); // 80274DDC
  c->r[30]=R32(c->r[26]+0x00000008u); // 80274DE0
  c->r[31]=0u+0x00000000u; // 80274DE4
  if (crb(c,2)) { goto L_80274E1C; } // 80274DE8
  c->r[5]=0u+0x80310000u; // 80274DEC
  c->r[3]=c->r[27]|c->r[27]; // 80274DF0
  c->r[5]=c->r[5]+0xFFFF8728u; // 80274DF4
  c->r[4]=c->r[1]+0x00000008u; // 80274DF8
  W32(c->r[1]+0x00000008u,c->r[5]); // 80274DFC
  c->r[12]=R32(c->r[27]+0x00000000u); // 80274E00
  c->r[12]=R32(c->r[12]+0x00000008u); // 80274E04
  c->ctr=c->r[12]; // 80274E08
  if (true) { c->lr=0x80274E10u; dispatch(c,c->ctr); } // 80274E0C
  cmps(c,0,(int32_t)c->r[3],0); // 80274E10
  if (crb(c,2)) { goto L_80274E1C; } // 80274E14
  c->r[31]=0u+0x00000001u; // 80274E18
L_80274E1C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80274E1C
  if (crb(c,2)) { goto L_80274E2C; } // 80274E20
  c->r[4]=c->r[27]|c->r[27]; // 80274E24
  goto L_80274E30; // 80274E28
L_80274E2C:;
  c->r[4]=0u+0x00000000u; // 80274E2C
L_80274E30:;
  cmps(c,0,(int32_t)c->r[4],0); // 80274E30
  c->r[31]=0u+0x00000000u; // 80274E34
  if (crb(c,2)) { goto L_80274E60; } // 80274E38
  c->r[12]=R32(c->r[30]+0x00000000u); // 80274E3C
  c->r[3]=c->r[30]|c->r[30]; // 80274E40
  c->r[4]=R32(c->r[4]+0x000000E8u); // 80274E44
  c->r[12]=R32(c->r[12]+0x00000038u); // 80274E48
  c->ctr=c->r[12]; // 80274E4C
  if (true) { c->lr=0x80274E54u; dispatch(c,c->ctr); } // 80274E50
  cmps(c,0,(int32_t)c->r[3],0); // 80274E54
  if (crb(c,2)) { goto L_80274E60; } // 80274E58
  c->r[31]=0u+0x00000001u; // 80274E5C
L_80274E60:;
  cmps(c,0,(int32_t)c->r[31],0); // 80274E60
  if (crb(c,2)) { goto L_80274E70; } // 80274E64
  c->r[3]=0u+0x00000000u; // 80274E68
  goto L_80274E90; // 80274E6C
L_80274E70:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 80274E70
  c->r[4]=c->r[27]|c->r[27]; // 80274E74
  c->r[5]=c->r[28]|c->r[28]; // 80274E78
  c->r[6]=c->r[29]|c->r[29]; // 80274E7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80274E80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80274E84
  c->ctr=c->r[12]; // 80274E88
  if (true) { c->lr=0x80274E90u; dispatch(c,c->ctr); } // 80274E8C
L_80274E90:;
  c->r[11]=c->r[1]+0x00000030u; // 80274E90
  c->lr=0x80274E98u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80274E94
  c->r[0]=R32(c->r[1]+0x00000034u); // 80274E98
  c->lr=c->r[0]; // 80274E9C
  c->r[1]=c->r[1]+0x00000030u; // 80274EA0
  return; // 80274EA4
}

// fn_80274EA8
void f_80274EA8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80274EA8
  c->r[7]=c->r[4]|c->r[4]; // 80274EAC
  cmps(c,0,(int32_t)c->r[0],0); // 80274EB0
  if (crb(c,2)) return; // 80274EB4
  c->r[5]=R32(c->r[3]+0x00000010u); // 80274EB8
  c->r[4]=c->r[0]|c->r[0]; // 80274EBC
  c->r[6]=R32(c->r[3]+0x00000004u); // 80274EC0
  c->r[8]=0u+0x00000001u; // 80274EC4
  f_80275078(c); return; // 80274EC8
  return; // 80274ECC
}

// fn_80274ED0
void f_80274ED0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000020u); // 80274ED0
  c->r[7]=c->r[4]|c->r[4]; // 80274ED4
  cmps(c,0,(int32_t)c->r[0],0); // 80274ED8
  if (crb(c,2)) return; // 80274EDC
  c->r[5]=R32(c->r[3]+0x00000014u); // 80274EE0
  c->r[4]=c->r[0]|c->r[0]; // 80274EE4
  c->r[6]=R32(c->r[3]+0x00000008u); // 80274EE8
  c->r[8]=0u+0x00000000u; // 80274EEC
  f_80275078(c); return; // 80274EF0
  return; // 80274EF4
}

// fn_80274EF8
void f_80274EF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80274EF8
  c->r[0]=c->lr; // 80274EFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80274F00
  c->r[11]=c->r[1]+0x00000030u; // 80274F04
  c->lr=0x80274F0Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80274F08
  cmps(c,0,(int32_t)c->r[4],0); // 80274F0C
  c->r[25]=c->r[3]|c->r[3]; // 80274F10
  c->r[26]=c->r[4]|c->r[4]; // 80274F14
  c->r[31]=0u+0x00000000u; // 80274F18
  if (crb(c,2)) { goto L_80274F50; } // 80274F1C
  c->r[5]=0u+0x80310000u; // 80274F20
  c->r[3]=c->r[26]|c->r[26]; // 80274F24
  c->r[5]=c->r[5]+0xFFFF86F0u; // 80274F28
  c->r[4]=c->r[1]+0x00000008u; // 80274F2C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80274F30
  c->r[12]=R32(c->r[26]+0x00000000u); // 80274F34
  c->r[12]=R32(c->r[12]+0x00000008u); // 80274F38
  c->ctr=c->r[12]; // 80274F3C
  if (true) { c->lr=0x80274F44u; dispatch(c,c->ctr); } // 80274F40
  cmps(c,0,(int32_t)c->r[3],0); // 80274F44
  if (crb(c,2)) { goto L_80274F50; } // 80274F48
  c->r[31]=0u+0x00000001u; // 80274F4C
L_80274F50:;
  cmps(c,0,(int32_t)c->r[31],0); // 80274F50
  if (crb(c,2)) { goto L_80274F5C; } // 80274F54
  goto L_80274F60; // 80274F58
L_80274F5C:;
  c->r[26]=0u+0x00000000u; // 80274F5C
L_80274F60:;
  cmps(c,0,(int32_t)c->r[26],0); // 80274F60
  c->r[31]=0u+0x00000000u; // 80274F64
  c->r[30]=0u+0x00000000u; // 80274F68
  c->r[29]=0u+0x00000000u; // 80274F6C
  c->r[28]=0u+0x00000000u; // 80274F70
  c->r[27]=0u+0x00000000u; // 80274F74
  if (crb(c,2)) { goto L_80274FA0; } // 80274F78
  c->r[12]=R32(c->r[25]+0x00000000u); // 80274F7C
  c->r[3]=c->r[25]|c->r[25]; // 80274F80
  c->r[12]=R32(c->r[12]+0x00000030u); // 80274F84
  c->ctr=c->r[12]; // 80274F88
  if (true) { c->lr=0x80274F90u; dispatch(c,c->ctr); } // 80274F8C
  c->r[0]=R32(c->r[26]+0x000000E8u); // 80274F90
  cmpu(c,0,c->r[0],c->r[3]); // 80274F94
  if (!crb(c,2)) { goto L_80274FA0; } // 80274F98
  c->r[27]=0u+0x00000001u; // 80274F9C
L_80274FA0:;
  cmps(c,0,(int32_t)c->r[27],0); // 80274FA0
  if (crb(c,2)) { goto L_80274FCC; } // 80274FA4
  c->r[12]=R32(c->r[26]+0x00000000u); // 80274FA8
  c->r[3]=c->r[26]|c->r[26]; // 80274FAC
  c->r[4]=0u+0x00000002u; // 80274FB0
  c->r[12]=R32(c->r[12]+0x00000040u); // 80274FB4
  c->ctr=c->r[12]; // 80274FB8
  if (true) { c->lr=0x80274FC0u; dispatch(c,c->ctr); } // 80274FBC
  cmps(c,0,(int32_t)c->r[3],0); // 80274FC0
  if (!crb(c,2)) { goto L_80274FCC; } // 80274FC4
  c->r[28]=0u+0x00000001u; // 80274FC8
L_80274FCC:;
  cmps(c,0,(int32_t)c->r[28],0); // 80274FCC
  if (crb(c,2)) { goto L_80274FF8; } // 80274FD0
  c->r[12]=R32(c->r[26]+0x00000000u); // 80274FD4
  c->r[3]=c->r[26]|c->r[26]; // 80274FD8
  c->r[4]=0u+0x00000003u; // 80274FDC
  c->r[12]=R32(c->r[12]+0x00000040u); // 80274FE0
  c->ctr=c->r[12]; // 80274FE4
  if (true) { c->lr=0x80274FECu; dispatch(c,c->ctr); } // 80274FE8
  cmps(c,0,(int32_t)c->r[3],0); // 80274FEC
  if (!crb(c,2)) { goto L_80274FF8; } // 80274FF0
  c->r[29]=0u+0x00000001u; // 80274FF4
L_80274FF8:;
  cmps(c,0,(int32_t)c->r[29],0); // 80274FF8
  if (crb(c,2)) { goto L_80275024; } // 80274FFC
  c->r[12]=R32(c->r[26]+0x00000000u); // 80275000
  c->r[3]=c->r[26]|c->r[26]; // 80275004
  c->r[4]=0u+0x00000004u; // 80275008
  c->r[12]=R32(c->r[12]+0x00000040u); // 8027500C
  c->ctr=c->r[12]; // 80275010
  if (true) { c->lr=0x80275018u; dispatch(c,c->ctr); } // 80275014
  cmps(c,0,(int32_t)c->r[3],0); // 80275018
  if (!crb(c,2)) { goto L_80275024; } // 8027501C
  c->r[30]=0u+0x00000001u; // 80275020
L_80275024:;
  cmps(c,0,(int32_t)c->r[30],0); // 80275024
  if (crb(c,2)) { goto L_80275050; } // 80275028
  c->r[12]=R32(c->r[26]+0x00000000u); // 8027502C
  c->r[3]=c->r[26]|c->r[26]; // 80275030
  c->r[4]=0u+0x00000005u; // 80275034
  c->r[12]=R32(c->r[12]+0x00000040u); // 80275038
  c->ctr=c->r[12]; // 8027503C
  if (true) { c->lr=0x80275044u; dispatch(c,c->ctr); } // 80275040
  cmps(c,0,(int32_t)c->r[3],0); // 80275044
  if (!crb(c,2)) { goto L_80275050; } // 80275048
  c->r[31]=0u+0x00000001u; // 8027504C
L_80275050:;
  c->r[0]=cntlz(c->r[31]); // 80275050
  c->r[11]=c->r[1]+0x00000030u; // 80275054
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80275058
  c->lr=0x80275060u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027505C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80275060
  c->lr=c->r[0]; // 80275064
  c->r[1]=c->r[1]+0x00000030u; // 80275068
  return; // 8027506C
}

// fn_80275070
void f_80275070(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 80275070
  return; // 80275074
}

// fn_80275078
void f_80275078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275078
  c->r[0]=c->lr; // 8027507C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80275080
  c->r[11]=c->r[1]+0x000000B0u; // 80275084
  c->lr=0x8027508Cu; f_80185EA0(c); // 80275088
  cmps(c,0,(int32_t)c->r[7],0); // 8027508C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80275090
  c->r[19]=c->r[4]|c->r[4]; // 80275094
  c->r[20]=c->r[5]|c->r[5]; // 80275098
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8027509C
  c->r[21]=c->r[7]|c->r[7]; // 802750A0
  c->r[14]=c->r[8]|c->r[8]; // 802750A4
  c->r[25]=0u+0x00000000u; // 802750A8
  c->r[27]=0u+0x00000000u; // 802750AC
  if (crb(c,2)) { goto L_802750C4; } // 802750B0
  c->r[0]=R32(c->r[7]+0x00000000u); // 802750B4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802750B8
  if (crb(c,2)) { goto L_802750C4; } // 802750BC
  c->r[27]=0u+0x00000001u; // 802750C0
L_802750C4:;
  c->r[31]=0u+0x80310000u; // 802750C4
  c->r[16]=0u+0x80310000u; // 802750C8
  c->r[31]=c->r[31]+0xFFFF8708u; // 802750CC
  c->r[16]=c->r[16]+0xFFFF86F0u; // 802750D0
  goto L_80275444; // 802750D4
L_802750D8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 802750D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802750DC
  c->r[12]=R32(c->r[12]+0x00000030u); // 802750E0
  c->ctr=c->r[12]; // 802750E4
  if (true) { c->lr=0x802750ECu; dispatch(c,c->ctr); } // 802750E8
  c->r[0]=R8(c->r[19]+0x00000001u); // 802750EC
  W32(c->r[1]+0x00000048u,c->r[3]); // 802750F0
  c->r[3]=c->r[1]+0x00000048u; // 802750F4
  c->r[4]=R8(c->r[19]+0x00000002u); // 802750F8
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802750FC
  c->lr=0x80275104u; f_80251A00(c); // 80275100
  c->r[28]=c->r[3]|c->r[3]; // 80275104
  c->r[3]=R32(c->r[1]+0x00000008u); // 80275108
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027510C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80275110
  c->ctr=c->r[12]; // 80275114
  if (true) { c->lr=0x8027511Cu; dispatch(c,c->ctr); } // 80275118
  c->r[0]=R8(c->r[19]+0x00000003u); // 8027511C
  W32(c->r[1]+0x00000044u,c->r[3]); // 80275120
  c->r[3]=c->r[1]+0x00000044u; // 80275124
  c->r[4]=R8(c->r[19]+0x00000004u); // 80275128
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 8027512C
  c->lr=0x80275134u; f_80251ADC(c); // 80275130
  c->r[29]=c->r[3]|c->r[3]; // 80275134
  c->r[3]=R32(c->r[1]+0x00000008u); // 80275138
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027513C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80275140
  c->ctr=c->r[12]; // 80275144
  if (true) { c->lr=0x8027514Cu; dispatch(c,c->ctr); } // 80275148
  c->r[0]=R8(c->r[19]+0x00000005u); // 8027514C
  W32(c->r[1]+0x00000040u,c->r[3]); // 80275150
  c->r[3]=c->r[1]+0x00000040u; // 80275154
  c->r[4]=R8(c->r[19]+0x00000006u); // 80275158
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 8027515C
  c->lr=0x80275164u; f_802514A8(c); // 80275160
  c->r[26]=R32(c->r[1]+0x0000000Cu); // 80275164
  c->r[30]=c->r[3]|c->r[3]; // 80275168
  c->r[24]=0u+0x00000001u; // 8027516C
  c->r[23]=0u+0x00000000u; // 80275170
  goto L_80275434; // 80275174
L_80275178:;
  cmps(c,0,(int32_t)c->r[14],0); // 80275178
  c->r[3]=R32(c->r[26]+0x00000000u); // 8027517C
  c->r[4]=0u+0x00000007u; // 80275180
  if (crb(c,2)) { goto L_8027518C; } // 80275184
  c->r[4]=0u+0x00000006u; // 80275188
L_8027518C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027518C
  c->r[5]=c->r[1]+0x0000004Cu; // 80275190
  c->r[12]=R32(c->r[12]+0x00000024u); // 80275194
  c->ctr=c->r[12]; // 80275198
  if (true) { c->lr=0x802751A0u; dispatch(c,c->ctr); } // 8027519C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 802751A0
  cmps(c,0,(int32_t)c->r[0],0); // 802751A4
  if (!crb(c,2)) { goto L_8027542C; } // 802751A8
  cmps(c,0,(int32_t)c->r[21],0); // 802751AC
  c->r[22]=0u+0x00000001u; // 802751B0
  if (crb(c,2)) { goto L_802751C8; } // 802751B4
  c->r[0]=R32(c->r[21]+0x00000000u); // 802751B8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 802751BC
  if (crb(c,2)) { goto L_802751C8; } // 802751C0
  c->r[22]=c->r[22]|0x00000008u; // 802751C4
L_802751C8:;
  c->r[15]=R32(c->r[26]+0x00000000u); // 802751C8
  c->r[17]=0u+0x00000000u; // 802751CC
  cmps(c,0,(int32_t)c->r[15],0); // 802751D0
  if (crb(c,2)) { goto L_80275200; } // 802751D4
  W32(c->r[1]+0x00000014u,c->r[31]); // 802751D8
  c->r[3]=c->r[15]|c->r[15]; // 802751DC
  c->r[4]=c->r[1]+0x00000014u; // 802751E0
  c->r[12]=R32(c->r[15]+0x00000000u); // 802751E4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802751E8
  c->ctr=c->r[12]; // 802751EC
  if (true) { c->lr=0x802751F4u; dispatch(c,c->ctr); } // 802751F0
  cmps(c,0,(int32_t)c->r[3],0); // 802751F4
  if (crb(c,2)) { goto L_80275200; } // 802751F8
  c->r[17]=0u+0x00000001u; // 802751FC
L_80275200:;
  cmps(c,0,(int32_t)c->r[17],0); // 80275200
  if (crb(c,2)) { goto L_8027520C; } // 80275204
  goto L_80275210; // 80275208
L_8027520C:;
  c->r[15]=0u+0x00000000u; // 8027520C
L_80275210:;
  cmps(c,0,(int32_t)c->r[15],0); // 80275210
  if (crb(c,2)) { goto L_80275304; } // 80275214
  cmps(c,0,(int32_t)c->r[30],0); // 80275218
  c->r[4]=c->r[15]|c->r[15]; // 8027521C
  c->r[3]=c->r[1]+0x00000050u; // 80275220
  if (crb(c,2)) { goto L_80275230; } // 80275224
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80275228
  goto L_80275234; // 8027522C
L_80275230:;
  c->r[5]=0u+0x00000000u; // 80275230
L_80275234:;
  c->lr=0x80275238u; f_802722F4(c); // 80275234
  c->lr=0x8027523Cu; f_802721F8(c); // 80275238
  cmps(c,0,(int32_t)c->r[3],0); // 8027523C
  if (crb(c,2)) { goto L_80275428; } // 80275240
  c->r[3]=c->r[15]|c->r[15]; // 80275244
  c->lr=0x8027524Cu; f_802719B4(c); // 80275248
  c->r[18]=c->r[3]|c->r[3]; // 8027524C
  c->r[3]=c->r[15]|c->r[15]; // 80275250
  c->lr=0x80275258u; f_80271980(c); // 80275254
  c->r[17]=c->r[3]|c->r[3]; // 80275258
  c->r[3]=c->r[15]|c->r[15]; // 8027525C
  c->lr=0x80275264u; f_8027195C(c); // 80275260
  c->r[4]=c->r[17]|c->r[17]; // 80275264
  c->r[5]=c->r[18]|c->r[18]; // 80275268
  c->lr=0x80275270u; f_80262C34(c); // 8027526C
  cmps(c,0,(int32_t)c->r[21],0); // 80275270
  if (!crb(c,2)) { goto L_80275288; } // 80275274
  c->r[0]=R32(c->r[15]+0x00000118u); // 80275278
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8027527C
  if (crb(c,2)) { goto L_80275288; } // 80275280
  c->r[22]=c->r[22]|0x00000008u; // 80275284
L_80275288:;
  cmps(c,0,(int32_t)c->r[27],0); // 80275288
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 8027528C
  c->r[0]=0u+0x00000000u; // 80275290
  W32(c->r[1]+0x00000030u,c->r[30]); // 80275294
  W32(c->r[1]+0x00000034u,c->r[28]); // 80275298
  W32(c->r[1]+0x00000038u,c->r[29]); // 8027529C
  if (!crb(c,2)) { goto L_802752B4; } // 802752A0
  cmps(c,0,(int32_t)c->r[24],0); // 802752A4
  if (crb(c,2)) { goto L_802752B4; } // 802752A8
  cmpu(c,0,c->r[28],c->r[25]); // 802752AC
  if (!crb(c,2)) { goto L_802752B8; } // 802752B0
L_802752B4:;
  c->r[0]=0u+0x00000001u; // 802752B4
L_802752B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802752B8
  if (crb(c,2)) { goto L_802752C8; } // 802752BC
  c->r[0]=0u+0x00000000u; // 802752C0
  goto L_802752CC; // 802752C4
L_802752C8:;
  c->r[0]=c->r[28]|c->r[28]; // 802752C8
L_802752CC:;
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802752CC
  c->r[3]=c->r[1]+0x00000034u; // 802752D0
  c->r[4]=c->r[1]+0x00000030u; // 802752D4
  c->r[5]=c->r[1]+0x0000002Cu; // 802752D8
  c->lr=0x802752E0u; f_8026762C(c); // 802752DC
  c->r[9]=c->r[3]|c->r[3]; // 802752E0
  c->r[4]=c->r[1]+0x00000038u; // 802752E4
  c->r[7]=c->r[22]|c->r[22]; // 802752E8
  c->r[3]=c->r[1]+0x0000003Cu; // 802752EC
  c->r[5]=0u+0x00000000u; // 802752F0
  c->r[6]=0u+0x00000000u; // 802752F4
  c->r[8]=0u+0x00000000u; // 802752F8
  c->lr=0x80275300u; f_80263FDC(c); // 802752FC
  goto L_80275428; // 80275300
L_80275304:;
  cmps(c,0,(int32_t)c->r[30],0); // 80275304
  if (crb(c,2)) { goto L_80275318; } // 80275308
  c->r[0]=R32(c->r[30]+0x00000014u); // 8027530C
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 80275310
  goto L_8027531C; // 80275314
L_80275318:;
  c->r[0]=0u+0x00000000u; // 80275318
L_8027531C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8027531C
  if (crb(c,2)) { goto L_80275428; } // 80275320
  c->r[15]=R32(c->r[26]+0x00000000u); // 80275324
  c->r[17]=0u+0x00000000u; // 80275328
  cmps(c,0,(int32_t)c->r[15],0); // 8027532C
  if (crb(c,2)) { goto L_8027535C; } // 80275330
  W32(c->r[1]+0x00000010u,c->r[16]); // 80275334
  c->r[3]=c->r[15]|c->r[15]; // 80275338
  c->r[4]=c->r[1]+0x00000010u; // 8027533C
  c->r[12]=R32(c->r[15]+0x00000000u); // 80275340
  c->r[12]=R32(c->r[12]+0x00000008u); // 80275344
  c->ctr=c->r[12]; // 80275348
  if (true) { c->lr=0x80275350u; dispatch(c,c->ctr); } // 8027534C
  cmps(c,0,(int32_t)c->r[3],0); // 80275350
  if (crb(c,2)) { goto L_8027535C; } // 80275354
  c->r[17]=0u+0x00000001u; // 80275358
L_8027535C:;
  cmps(c,0,(int32_t)c->r[17],0); // 8027535C
  if (crb(c,2)) { goto L_80275368; } // 80275360
  goto L_8027536C; // 80275364
L_80275368:;
  c->r[15]=0u+0x00000000u; // 80275368
L_8027536C:;
  c->r[3]=c->r[15]|c->r[15]; // 8027536C
  c->lr=0x80275374u; f_802719B4(c); // 80275370
  c->r[17]=c->r[3]|c->r[3]; // 80275374
  c->r[3]=c->r[15]|c->r[15]; // 80275378
  c->lr=0x80275380u; f_80271980(c); // 8027537C
  c->r[18]=c->r[3]|c->r[3]; // 80275380
  c->r[3]=c->r[15]|c->r[15]; // 80275384
  c->lr=0x8027538Cu; f_8027195C(c); // 80275388
  c->r[4]=c->r[18]|c->r[18]; // 8027538C
  c->r[5]=c->r[17]|c->r[17]; // 80275390
  c->lr=0x80275398u; f_80262C34(c); // 80275394
  cmps(c,0,(int32_t)c->r[21],0); // 80275398
  if (!crb(c,2)) { goto L_802753B0; } // 8027539C
  c->r[0]=R32(c->r[15]+0x00000118u); // 802753A0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 802753A4
  if (crb(c,2)) { goto L_802753B0; } // 802753A8
  c->r[22]=c->r[22]|0x00000008u; // 802753AC
L_802753B0:;
  cmps(c,0,(int32_t)c->r[27],0); // 802753B0
  W32(c->r[1]+0x00000018u,c->r[29]); // 802753B4
  c->r[0]=0u+0x00000000u; // 802753B8
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 802753BC
  W32(c->r[1]+0x00000020u,c->r[28]); // 802753C0
  W32(c->r[1]+0x00000024u,c->r[29]); // 802753C4
  if (!crb(c,2)) { goto L_802753DC; } // 802753C8
  cmps(c,0,(int32_t)c->r[24],0); // 802753CC
  if (crb(c,2)) { goto L_802753DC; } // 802753D0
  cmpu(c,0,c->r[28],c->r[25]); // 802753D4
  if (!crb(c,2)) { goto L_802753E0; } // 802753D8
L_802753DC:;
  c->r[0]=0u+0x00000001u; // 802753DC
L_802753E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802753E0
  if (crb(c,2)) { goto L_802753F0; } // 802753E4
  c->r[0]=0u+0x00000000u; // 802753E8
  goto L_802753F4; // 802753EC
L_802753F0:;
  c->r[0]=c->r[28]|c->r[28]; // 802753F0
L_802753F4:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 802753F4
  c->r[3]=c->r[1]+0x00000020u; // 802753F8
  c->r[4]=c->r[1]+0x0000001Cu; // 802753FC
  c->r[5]=c->r[1]+0x00000018u; // 80275400
  c->lr=0x80275408u; f_8026762C(c); // 80275404
  c->r[9]=c->r[3]|c->r[3]; // 80275408
  c->r[4]=c->r[1]+0x00000024u; // 8027540C
  c->r[7]=c->r[22]|c->r[22]; // 80275410
  c->r[3]=c->r[1]+0x00000028u; // 80275414
  c->r[5]=0u+0x00000000u; // 80275418
  c->r[6]=0u+0x00000000u; // 8027541C
  c->r[8]=0u+0x00000000u; // 80275420
  c->lr=0x80275428u; f_80263FDC(c); // 80275424
L_80275428:;
  c->r[24]=0u+0x00000000u; // 80275428
L_8027542C:;
  c->r[26]=c->r[26]+0x00000004u; // 8027542C
  c->r[23]=c->r[23]+0x00000001u; // 80275430
L_80275434:;
  cmpu(c,0,c->r[23],c->r[20]); // 80275434
  if (crb(c,0)) { IRQCHK(c); goto L_80275178; } // 80275438
  c->r[25]=c->r[28]|c->r[28]; // 8027543C
  c->r[19]=c->r[19]+0x00000008u; // 80275440
L_80275444:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 80275444
  cmpu(c,0,c->r[0],0x00000001u); // 80275448
  if (!crb(c,2)) { IRQCHK(c); goto L_802750D8; } // 8027544C
  c->r[11]=c->r[1]+0x000000B0u; // 80275450
  c->lr=0x80275458u; f_80185EEC(c); // 80275454
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80275458
  c->lr=c->r[0]; // 8027545C
  c->r[1]=c->r[1]+0x000000B0u; // 80275460
  return; // 80275464
}

// fn_80275468
void f_80275468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275468
  c->r[0]=c->lr; // 8027546C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80275470
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80275474
  W32(c->r[1]+0x00000018u,c->r[30]); // 80275478
  c->r[30]=c->r[4]|c->r[4]; // 8027547C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80275480
  c->r[29]=c->r[3]|c->r[3]; // 80275484
  c->r[3]=c->r[30]|c->r[30]; // 80275488
  c->r[12]=R32(c->r[30]+0x00000000u); // 8027548C
  c->r[12]=R32(c->r[12]+0x00000034u); // 80275490
  c->ctr=c->r[12]; // 80275494
  if (true) { c->lr=0x8027549Cu; dispatch(c,c->ctr); } // 80275498
  c->r[12]=R32(c->r[29]+0x00000000u); // 8027549C
  c->r[31]=c->r[3]|c->r[3]; // 802754A0
  c->r[3]=c->r[29]|c->r[29]; // 802754A4
  c->r[12]=R32(c->r[12]+0x00000034u); // 802754A8
  c->ctr=c->r[12]; // 802754AC
  if (true) { c->lr=0x802754B4u; dispatch(c,c->ctr); } // 802754B0
  cmpu(c,0,c->r[3],c->r[31]); // 802754B4
  if (!crb(c,2)) { goto L_802754D4; } // 802754B8
  c->r[3]=R32(c->r[30]+0x00000018u); // 802754BC
  c->r[0]=R32(c->r[29]+0x00000018u); // 802754C0
  cmpu(c,0,c->r[3],c->r[0]); // 802754C4
  if (!crb(c,2)) { goto L_802754D4; } // 802754C8
  c->r[3]=0u+0x00000001u; // 802754CC
  goto L_802754D8; // 802754D0
L_802754D4:;
  c->r[3]=0u+0x00000000u; // 802754D4
L_802754D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802754D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802754DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802754E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802754E4
  c->lr=c->r[0]; // 802754E8
  c->r[1]=c->r[1]+0x00000020u; // 802754EC
  return; // 802754F0
}

// fn_802754F4
void f_802754F4(Ctx* __restrict c) {
  c->r[3]=0u+0x53470000u; // 802754F4
  c->r[3]=c->r[3]+0x00004558u; // 802754F8
  return; // 802754FC
}

// fn_80275500
void f_80275500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275500
  c->r[0]=c->lr; // 80275504
  W32(c->r[1]+0x00000034u,c->r[0]); // 80275508
  c->r[11]=c->r[1]+0x00000030u; // 8027550C
  c->lr=0x80275514u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80275510
  c->r[8]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80275514
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80275518
  c->r[8]=c->r[8]+0x000000EFu; // 8027551C
  cmps(c,0,(int32_t)c->r[4],0); // 80275520
  c->r[28]=rotl(c->r[8],0)&0xFFFFFFFCu; // 80275524
  c->r[30]=c->r[3]|c->r[3]; // 80275528
  c->r[8]=c->r[28]+c->r[0]; // 8027552C
  c->r[31]=c->r[5]|c->r[5]; // 80275530
  c->r[0]=c->r[8]+0x00000003u; // 80275534
  c->r[24]=c->r[6]|c->r[6]; // 80275538
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8027553C
  c->r[25]=c->r[7]|c->r[7]; // 80275540
  c->r[0]=c->r[29]+0x00000027u; // 80275544
  c->r[27]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80275548
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8027554C
  c->r[26]=0u+0x00000000u; // 80275550
  if (crb(c,2)) { goto L_8027555C; } // 80275554
  W32(c->r[4]+0x00000000u,c->r[0]); // 80275558
L_8027555C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027555C
  if (crb(c,2)) { goto L_8027563C; } // 80275560
  c->r[3]=c->r[30]|c->r[30]; // 80275564
  c->r[4]=c->r[0]|c->r[0]; // 80275568
  c->lr=0x80275570u; f_801A0EF8(c); // 8027556C
  cmps(c,0,(int32_t)c->r[3],0); // 80275570
  c->r[26]=c->r[3]|c->r[3]; // 80275574
  if (!crb(c,2)) { goto L_80275584; } // 80275578
  c->r[3]=0u+0x00000000u; // 8027557C
  goto L_80275640; // 80275580
L_80275584:;
  c->r[29]=c->r[3]+c->r[29]; cr0(c,c->r[29]); // 80275584
  c->r[4]=c->r[3]+c->r[28]; // 80275588
  if (crb(c,2)) { goto L_80275604; } // 8027558C
  c->r[0]=R32(c->r[25]+0x00000000u); // 80275590
  c->r[3]=c->r[29]|c->r[29]; // 80275594
  c->r[6]=c->r[24]|c->r[24]; // 80275598
  c->r[5]=c->r[4]+c->r[27]; // 8027559C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802755A0
  c->lr=0x802755A8u; f_8026FE00(c); // 802755A4
  c->r[3]=0u+0x80340000u; // 802755A8
  c->r[3]=c->r[3]+0x00004EF0u; // 802755AC
  W32(c->r[29]+0x00000000u,c->r[3]); // 802755B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 802755B4
  W32(c->r[29]+0x00000018u,c->r[0]); // 802755B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 802755BC
  cmps(c,0,(int32_t)c->r[0],0); // 802755C0
  if (crb(c,2)) { goto L_802755D8; } // 802755C4
  c->r[3]=c->r[1]+0x00000008u; // 802755C8
  c->r[4]=c->r[13]+0xFFFF9760u; // 802755CC
  c->lr=0x802755D4u; f_802513D0(c); // 802755D0
  goto L_802755DC; // 802755D4
L_802755D8:;
  c->r[3]=0u+0x00000000u; // 802755D8
L_802755DC:;
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 802755DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 802755E0
  cmps(c,0,(int32_t)c->r[0],0); // 802755E4
  if (crb(c,2)) { goto L_802755FC; } // 802755E8
  c->r[3]=c->r[1]+0x00000008u; // 802755EC
  c->r[4]=c->r[13]+0xFFFF9768u; // 802755F0
  c->lr=0x802755F8u; f_802513D0(c); // 802755F4
  goto L_80275600; // 802755F8
L_802755FC:;
  c->r[3]=0u+0x00000000u; // 802755FC
L_80275600:;
  W32(c->r[29]+0x00000020u,c->r[3]); // 80275600
L_80275604:;
  cmps(c,0,(int32_t)c->r[26],0); // 80275604
  if (crb(c,2)) { goto L_8027563C; } // 80275608
  c->r[3]=c->r[26]|c->r[26]; // 8027560C
  c->r[4]=c->r[30]|c->r[30]; // 80275610
  c->r[6]=c->r[31]|c->r[31]; // 80275614
  c->r[5]=c->r[26]+0x000000ECu; // 80275618
  c->lr=0x80275620u; f_8026E17C(c); // 8027561C
  c->r[3]=0u+0x80340000u; // 80275620
  c->r[3]=c->r[3]+0x00004F58u; // 80275624
  W32(c->r[26]+0x00000000u,c->r[3]); // 80275628
  W32(c->r[26]+0x000000E8u,c->r[29]); // 8027562C
  c->r[0]=R32(c->r[26]+0x000000CCu); // 80275630
  c->r[0]=rotl(c->r[0],0)&0x9FFFFFFFu; // 80275634
  W32(c->r[26]+0x000000CCu,c->r[0]); // 80275638
L_8027563C:;
  c->r[3]=c->r[26]|c->r[26]; // 8027563C
L_80275640:;
  c->r[11]=c->r[1]+0x00000030u; // 80275640
  c->lr=0x80275648u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80275644
  c->r[0]=R32(c->r[1]+0x00000034u); // 80275648
  c->lr=c->r[0]; // 8027564C
  c->r[1]=c->r[1]+0x00000030u; // 80275650
  return; // 80275654
}

// fn_80275658
void f_80275658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275658
  c->r[0]=c->lr; // 8027565C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80275660
  c->r[0]=R32(c->r[4]+0x00000000u); // 80275664
  c->r[4]=c->r[1]+0x00000008u; // 80275668
  W32(c->r[1]+0x00000008u,c->r[0]); // 8027566C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 80275670
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275674
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80275678
  c->ctr=c->r[12]; // 8027567C
  if (true) { c->lr=0x80275684u; dispatch(c,c->ctr); } // 80275680
  c->r[0]=R32(c->r[1]+0x00000014u); // 80275684
  c->lr=c->r[0]; // 80275688
  c->r[1]=c->r[1]+0x00000010u; // 8027568C
  return; // 80275690
}

// fn_80275694
void f_80275694(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 80275694
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275698
  c->r[12]=R32(c->r[12]+0x00000030u); // 8027569C
  c->ctr=c->r[12]; // 802756A0
  if (true) { dispatch(c,c->ctr); return; } // 802756A4
}

// fn_802756A8
void f_802756A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802756A8
  c->r[0]=c->lr; // 802756AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802756B0
  c->r[11]=c->r[1]+0x00000030u; // 802756B4
  c->lr=0x802756BCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802756B8
  cmpu(c,0,c->r[4],0x00000009u); // 802756BC
  c->r[28]=c->r[3]|c->r[3]; // 802756C0
  c->r[29]=c->r[4]|c->r[4]; // 802756C4
  c->r[30]=c->r[5]|c->r[5]; // 802756C8
  c->r[31]=c->r[6]|c->r[6]; // 802756CC
  if (!crb(c,0)) { goto L_802756F4; } // 802756D0
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 802756D4
  c->r[8]=0u+0x00000001u; // 802756D8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802756DC
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 802756E0
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 802756E4
  if (crb(c,2)) { goto L_802756F4; } // 802756E8
  c->r[0]=0u+0x00000001u; // 802756EC
  goto L_802756F8; // 802756F0
L_802756F4:;
  c->r[0]=0u+0x00000000u; // 802756F4
L_802756F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802756F8
  if (!crb(c,2)) { goto L_802759C8; } // 802756FC
  cmps(c,0,(int32_t)c->r[4],7); // 80275700
  if (crb(c,2)) { goto L_8027590C; } // 80275704
  if (!crb(c,0)) { goto L_8027571C; } // 80275708
  cmps(c,0,(int32_t)c->r[4],5); // 8027570C
  if (crb(c,2)) { goto L_80275730; } // 80275710
  if (!crb(c,0)) { goto L_80275864; } // 80275714
  goto L_802759B4; // 80275718
L_8027571C:;
  c->r[7]=0u+0x00010000u; // 8027571C
  c->r[0]=c->r[7]+0x00000004u; // 80275720
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80275724
  if (crb(c,2)) { goto L_802757D8; } // 80275728
  goto L_802759B4; // 8027572C
L_80275730:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80275730
  c->r[3]=c->r[31]|c->r[31]; // 80275734
  c->r[12]=R32(c->r[31]+0x00000000u); // 80275738
  c->r[4]=c->r[28]|c->r[28]; // 8027573C
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 80275740
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 80275744
  c->r[5]=cntlz(c->r[5]); // 80275748
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027574C
  c->r[0]=cntlz(c->r[0]); // 80275750
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 80275754
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 80275758
  c->ctr=c->r[12]; // 8027575C
  if (true) { c->lr=0x80275764u; dispatch(c,c->ctr); } // 80275760
  c->r[3]=R32(c->r[28]+0x000000E8u); // 80275764
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275768
  c->r[12]=R32(c->r[12]+0x00000010u); // 8027576C
  c->ctr=c->r[12]; // 80275770
  if (true) { c->lr=0x80275778u; dispatch(c,c->ctr); } // 80275774
  c->r[0]=R32(c->r[28]+0x000000E8u); // 80275778
  c->r[3]=0u+0x80340000u; // 8027577C
  c->r[3]=c->r[3]+0x00004F2Cu; // 80275780
  c->r[26]=0u+0x00000000u; // 80275784
  W32(c->r[1]+0x00000008u,c->r[3]); // 80275788
  c->r[27]=0u+0x00000000u; // 8027578C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80275790
  W32(c->r[1]+0x00000010u,c->r[0]); // 80275794
  goto L_802757C8; // 80275798
L_8027579C:;
  c->r[3]=R32(c->r[28]+0x000000DCu); // 8027579C
  c->r[4]=c->r[29]|c->r[29]; // 802757A0
  c->r[5]=c->r[30]|c->r[30]; // 802757A4
  c->r[6]=c->r[1]+0x00000008u; // 802757A8
  c->r[3]=R32(c->r[3]+c->r[27]); // 802757AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802757B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802757B4
  c->ctr=c->r[12]; // 802757B8
  if (true) { c->lr=0x802757C0u; dispatch(c,c->ctr); } // 802757BC
  c->r[27]=c->r[27]+0x00000004u; // 802757C0
  c->r[26]=c->r[26]+0x00000001u; // 802757C4
L_802757C8:;
  c->r[0]=R32(c->r[28]+0x000000E4u); // 802757C8
  cmpu(c,0,c->r[26],c->r[0]); // 802757CC
  if (crb(c,0)) { IRQCHK(c); goto L_8027579C; } // 802757D0
  goto L_802759C8; // 802757D4
L_802757D8:;
  cmps(c,0,(int32_t)c->r[5],1); // 802757D8
  if (crb(c,2)) { goto L_80275814; } // 802757DC
  if (!crb(c,0)) { goto L_802757F0; } // 802757E0
  cmps(c,0,(int32_t)c->r[5],0); // 802757E4
  if (!crb(c,0)) { goto L_802757FC; } // 802757E8
  goto L_8027584C; // 802757EC
L_802757F0:;
  cmps(c,0,(int32_t)c->r[5],3); // 802757F0
  if (!crb(c,0)) { goto L_8027584C; } // 802757F4
  goto L_8027582C; // 802757F8
L_802757FC:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 802757FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275800
  c->r[12]=R32(c->r[12]+0x00000014u); // 80275804
  c->ctr=c->r[12]; // 80275808
  if (true) { c->lr=0x80275810u; dispatch(c,c->ctr); } // 8027580C
  goto L_8027584C; // 80275810
L_80275814:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 80275814
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275818
  c->r[12]=R32(c->r[12]+0x00000018u); // 8027581C
  c->ctr=c->r[12]; // 80275820
  if (true) { c->lr=0x80275828u; dispatch(c,c->ctr); } // 80275824
  goto L_8027584C; // 80275828
L_8027582C:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8027582C
  c->r[5]=R32(c->r[6]+0x00000004u); // 80275830
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275834
  c->r[4]=R32(c->r[5]+0x00000000u); // 80275838
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8027583C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80275840
  c->ctr=c->r[12]; // 80275844
  if (true) { c->lr=0x8027584Cu; dispatch(c,c->ctr); } // 80275848
L_8027584C:;
  c->r[3]=c->r[28]|c->r[28]; // 8027584C
  c->r[4]=c->r[29]|c->r[29]; // 80275850
  c->r[5]=c->r[30]|c->r[30]; // 80275854
  c->r[6]=c->r[31]|c->r[31]; // 80275858
  c->lr=0x80275860u; f_8026DA54(c); // 8027585C
  goto L_802759C8; // 80275860
L_80275864:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80275864
  cmps(c,0,(int32_t)c->r[4],0); // 80275868
  if (crb(c,2)) { goto L_802758AC; } // 8027586C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80275870
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80275874
  if (crb(c,2)) { goto L_802758AC; } // 80275878
  c->r[0]=R8(c->r[3]+0x000000D8u); // 8027587C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80275880
  if (crb(c,2)) { goto L_802758AC; } // 80275884
  c->r[12]=R32(c->r[4]+0x00000000u); // 80275888
  c->r[3]=c->r[4]|c->r[4]; // 8027588C
  c->r[5]=c->r[28]|c->r[28]; // 80275890
  c->r[6]=c->r[30]|c->r[30]; // 80275894
  c->r[12]=R32(c->r[12]+0x00000018u); // 80275898
  c->r[7]=c->r[31]|c->r[31]; // 8027589C
  c->r[4]=0u+0x00000001u; // 802758A0
  c->ctr=c->r[12]; // 802758A4
  if (true) { c->lr=0x802758ACu; dispatch(c,c->ctr); } // 802758A8
L_802758AC:;
  c->r[3]=R32(c->r[28]+0x000000E8u); // 802758AC
  c->r[4]=c->r[31]|c->r[31]; // 802758B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802758B4
  c->r[12]=R32(c->r[12]+0x00000020u); // 802758B8
  c->ctr=c->r[12]; // 802758BC
  if (true) { c->lr=0x802758C4u; dispatch(c,c->ctr); } // 802758C0
  c->r[3]=R32(c->r[28]+0x000000D4u); // 802758C4
  cmps(c,0,(int32_t)c->r[3],0); // 802758C8
  if (crb(c,2)) { goto L_802759C8; } // 802758CC
  c->r[0]=R16(c->r[28]+0x000000DAu); // 802758D0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802758D4
  if (crb(c,2)) { goto L_802759C8; } // 802758D8
  c->r[0]=R8(c->r[28]+0x000000D8u); // 802758DC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802758E0
  if (crb(c,2)) { goto L_802759C8; } // 802758E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802758E8
  c->r[5]=c->r[28]|c->r[28]; // 802758EC
  c->r[6]=c->r[30]|c->r[30]; // 802758F0
  c->r[7]=c->r[31]|c->r[31]; // 802758F4
  c->r[12]=R32(c->r[12]+0x00000018u); // 802758F8
  c->r[4]=0u+0x00000004u; // 802758FC
  c->ctr=c->r[12]; // 80275900
  if (true) { c->lr=0x80275908u; dispatch(c,c->ctr); } // 80275904
  goto L_802759C8; // 80275908
L_8027590C:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 8027590C
  cmps(c,0,(int32_t)c->r[4],0); // 80275910
  if (crb(c,2)) { goto L_80275954; } // 80275914
  c->r[0]=R16(c->r[3]+0x000000DAu); // 80275918
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8027591C
  if (crb(c,2)) { goto L_80275954; } // 80275920
  c->r[0]=R8(c->r[3]+0x000000D8u); // 80275924
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80275928
  if (crb(c,2)) { goto L_80275954; } // 8027592C
  c->r[12]=R32(c->r[4]+0x00000000u); // 80275930
  c->r[3]=c->r[4]|c->r[4]; // 80275934
  c->r[5]=c->r[28]|c->r[28]; // 80275938
  c->r[6]=c->r[30]|c->r[30]; // 8027593C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80275940
  c->r[7]=c->r[31]|c->r[31]; // 80275944
  c->r[4]=0u+0x00000001u; // 80275948
  c->ctr=c->r[12]; // 8027594C
  if (true) { c->lr=0x80275954u; dispatch(c,c->ctr); } // 80275950
L_80275954:;
  c->r[3]=R32(c->r[28]+0x000000E8u); // 80275954
  c->r[4]=c->r[31]|c->r[31]; // 80275958
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027595C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80275960
  c->ctr=c->r[12]; // 80275964
  if (true) { c->lr=0x8027596Cu; dispatch(c,c->ctr); } // 80275968
  c->r[3]=R32(c->r[28]+0x000000D4u); // 8027596C
  cmps(c,0,(int32_t)c->r[3],0); // 80275970
  if (crb(c,2)) { goto L_802759C8; } // 80275974
  c->r[0]=R16(c->r[28]+0x000000DAu); // 80275978
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8027597C
  if (crb(c,2)) { goto L_802759C8; } // 80275980
  c->r[0]=R8(c->r[28]+0x000000D8u); // 80275984
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80275988
  if (crb(c,2)) { goto L_802759C8; } // 8027598C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275990
  c->r[5]=c->r[28]|c->r[28]; // 80275994
  c->r[6]=c->r[30]|c->r[30]; // 80275998
  c->r[7]=c->r[31]|c->r[31]; // 8027599C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802759A0
  c->r[4]=0u+0x00000004u; // 802759A4
  c->ctr=c->r[12]; // 802759A8
  if (true) { c->lr=0x802759B0u; dispatch(c,c->ctr); } // 802759AC
  goto L_802759C8; // 802759B0
L_802759B4:;
  c->r[3]=c->r[28]|c->r[28]; // 802759B4
  c->r[4]=c->r[29]|c->r[29]; // 802759B8
  c->r[5]=c->r[30]|c->r[30]; // 802759BC
  c->r[6]=c->r[31]|c->r[31]; // 802759C0
  c->lr=0x802759C8u; f_8026DA54(c); // 802759C4
L_802759C8:;
  c->r[11]=c->r[1]+0x00000030u; // 802759C8
  c->lr=0x802759D0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802759CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802759D0
  c->lr=c->r[0]; // 802759D4
  c->r[1]=c->r[1]+0x00000030u; // 802759D8
  return; // 802759DC
}

// fn_802759E0
void f_802759E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802759E0
  c->r[0]=c->lr; // 802759E4
  cmps(c,0,(int32_t)c->r[3],0); // 802759E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802759EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802759F0
  c->r[31]=c->r[3]|c->r[3]; // 802759F4
  if (crb(c,2)) { goto L_80275A08; } // 802759F8
  cmps(c,0,(int32_t)c->r[4],0); // 802759FC
  if (!crb(c,1)) { goto L_80275A08; } // 80275A00
  c->lr=0x80275A08u; f_800D6AD0(c); // 80275A04
L_80275A08:;
  c->r[3]=c->r[31]|c->r[31]; // 80275A08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80275A0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80275A10
  c->lr=c->r[0]; // 80275A14
  c->r[1]=c->r[1]+0x00000010u; // 80275A18
  return; // 80275A1C
}

// fn_80275A20
void f_80275A20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275A20
  c->r[0]=c->lr; // 80275A24
  cmps(c,0,(int32_t)c->r[3],0); // 80275A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80275A2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80275A30
  c->r[31]=c->r[3]|c->r[3]; // 80275A34
  if (crb(c,2)) { goto L_80275A44; } // 80275A38
  c->r[4]=0u+0x00000000u; // 80275A3C
  c->lr=0x80275A44u; f_8026E1EC(c); // 80275A40
L_80275A44:;
  c->r[3]=c->r[31]|c->r[31]; // 80275A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80275A48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80275A4C
  c->lr=c->r[0]; // 80275A50
  c->r[1]=c->r[1]+0x00000010u; // 80275A54
  return; // 80275A58
}

// fn_80275A5C
void f_80275A5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275A5C
  c->r[0]=c->lr; // 80275A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80275A64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80275A68
  c->r[31]=c->r[4]|c->r[4]; // 80275A6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80275A70
  c->r[30]=c->r[3]|c->r[3]; // 80275A74
  c->r[5]=R32(c->r[4]+0x00000000u); // 80275A78
  c->r[0]=R32(c->r[3]+0x00000018u); // 80275A7C
  cmpu(c,0,c->r[5],c->r[0]); // 80275A80
  if (crb(c,2)) { goto L_80275AE8; } // 80275A84
  cmps(c,0,(int32_t)c->r[5],0); // 80275A88
  if (crb(c,2)) { goto L_80275AA0; } // 80275A8C
  c->r[3]=c->r[31]|c->r[31]; // 80275A90
  c->r[4]=c->r[13]+0xFFFF9778u; // 80275A94
  c->lr=0x80275A9Cu; f_802513D0(c); // 80275A98
  goto L_80275AA4; // 80275A9C
L_80275AA0:;
  c->r[3]=0u+0x00000000u; // 80275AA0
L_80275AA4:;
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80275AA4
  c->r[0]=R32(c->r[31]+0x00000000u); // 80275AA8
  cmps(c,0,(int32_t)c->r[0],0); // 80275AAC
  if (crb(c,2)) { goto L_80275AC4; } // 80275AB0
  c->r[3]=c->r[31]|c->r[31]; // 80275AB4
  c->r[4]=c->r[13]+0xFFFF9770u; // 80275AB8
  c->lr=0x80275AC0u; f_802513D0(c); // 80275ABC
  goto L_80275AC8; // 80275AC0
L_80275AC4:;
  c->r[3]=0u+0x00000000u; // 80275AC4
L_80275AC8:;
  W32(c->r[30]+0x00000020u,c->r[3]); // 80275AC8
  c->r[3]=c->r[30]|c->r[30]; // 80275ACC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80275AD0
  W32(c->r[30]+0x00000018u,c->r[0]); // 80275AD4
  c->r[12]=R32(c->r[30]+0x00000000u); // 80275AD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80275ADC
  c->ctr=c->r[12]; // 80275AE0
  if (true) { c->lr=0x80275AE8u; dispatch(c,c->ctr); } // 80275AE4
L_80275AE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80275AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80275AEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80275AF0
  c->lr=c->r[0]; // 80275AF4
  c->r[1]=c->r[1]+0x00000010u; // 80275AF8
  return; // 80275AFC
}

// fn_80275B00
void f_80275B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275B00
  c->r[0]=c->lr; // 80275B04
  cmps(c,0,(int32_t)c->r[3],0); // 80275B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80275B0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80275B10
  c->r[31]=c->r[3]|c->r[3]; // 80275B14
  if (crb(c,2)) { goto L_80275B28; } // 80275B18
  cmps(c,0,(int32_t)c->r[4],0); // 80275B1C
  if (!crb(c,1)) { goto L_80275B28; } // 80275B20
  c->lr=0x80275B28u; f_800D6AD0(c); // 80275B24
L_80275B28:;
  c->r[3]=c->r[31]|c->r[31]; // 80275B28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80275B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80275B30
  c->lr=c->r[0]; // 80275B34
  c->r[1]=c->r[1]+0x00000010u; // 80275B38
  return; // 80275B3C
}

// fn_80275B40
void f_80275B40(Ctx* __restrict c) {
  return; // 80275B40
}

// fn_80275B44
void f_80275B44(Ctx* __restrict c) {
  return; // 80275B44
}

// fn_80275B48
void f_80275B48(Ctx* __restrict c) {
  return; // 80275B48
}

// fn_80275B4C
void f_80275B4C(Ctx* __restrict c) {
  return; // 80275B4C
}

// fn_80275B50
void f_80275B50(Ctx* __restrict c) {
  return; // 80275B50
}

// fn_80275B54
void f_80275B54(Ctx* __restrict c) {
  return; // 80275B54
}

// fn_80275B58
void f_80275B58(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 80275B58
  c->r[0]=R32(c->r[4]+0x00000000u); // 80275B5C
  c->r[3]=c->r[3]+0xFFFF8728u; // 80275B60
  cmpu(c,0,c->r[0],c->r[3]); // 80275B64
  if (!crb(c,2)) { goto L_80275B74; } // 80275B68
  c->r[3]=0u+0x00000001u; // 80275B6C
  return; // 80275B70
L_80275B74:;
  c->r[3]=0u+0x80310000u; // 80275B74
  c->r[0]=R32(c->r[4]+0x00000000u); // 80275B78
  c->r[3]=c->r[3]+0xFFFF86D0u; // 80275B7C
  cmpu(c,0,c->r[0],c->r[3]); // 80275B80
  if (!crb(c,2)) { goto L_80275B90; } // 80275B84
  c->r[3]=0u+0x00000001u; // 80275B88
  return; // 80275B8C
L_80275B90:;
  c->r[3]=0u+0x80310000u; // 80275B90
  c->r[3]=c->r[3]+0xFFFF86B0u; // 80275B94
  cmpu(c,0,c->r[0],c->r[3]); // 80275B98
  if (!crb(c,2)) { goto L_80275BA8; } // 80275B9C
  c->r[3]=0u+0x00000001u; // 80275BA0
  return; // 80275BA4
L_80275BA8:;
  c->r[3]=0u+0x80310000u; // 80275BA8
  c->r[3]=c->r[3]+0xFFFF8588u; // 80275BAC
  c->r[0]=c->r[3]-c->r[0]; // 80275BB0
  c->r[0]=cntlz(c->r[0]); // 80275BB4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80275BB8
  return; // 80275BBC
}

// fn_80275BC0
void f_80275BC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275BC0
  c->r[0]=c->lr; // 80275BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80275BC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275BCC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80275BD0
  c->ctr=c->r[12]; // 80275BD4
  if (true) { c->lr=0x80275BDCu; dispatch(c,c->ctr); } // 80275BD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80275BDC
  c->r[3]=c->r[3]+0x00000004u; // 80275BE0
  c->lr=c->r[0]; // 80275BE4
  c->r[1]=c->r[1]+0x00000010u; // 80275BE8
  return; // 80275BEC
}

// fn_80275BF0
void f_80275BF0(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 80275BF0
  c->r[3]=c->r[3]+0xFFFF8728u; // 80275BF4
  return; // 80275BF8
}

// fn_80275BFC
void f_80275BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275BFC
  c->r[0]=c->lr; // 80275C00
  W32(c->r[1]+0x00000024u,c->r[0]); // 80275C04
  c->r[11]=c->r[1]+0x00000020u; // 80275C08
  c->lr=0x80275C10u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80275C0C
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80275C10
  cmps(c,0,(int32_t)c->r[4],0); // 80275C14
  c->r[0]=c->r[7]+0x000000F3u; // 80275C18
  c->r[29]=c->r[5]|c->r[5]; // 80275C1C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80275C20
  c->r[27]=c->r[3]|c->r[3]; // 80275C24
  c->r[5]=c->r[28]+c->r[7]; // 80275C28
  c->r[30]=c->r[6]|c->r[6]; // 80275C2C
  c->r[0]=c->r[5]+0x00000003u; // 80275C30
  c->r[31]=0u+0x00000000u; // 80275C34
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80275C38
  if (crb(c,2)) { goto L_80275C44; } // 80275C3C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80275C40
L_80275C44:;
  cmps(c,0,(int32_t)c->r[3],0); // 80275C44
  if (crb(c,2)) { goto L_80275D9C; } // 80275C48
  c->r[3]=c->r[27]|c->r[27]; // 80275C4C
  c->r[4]=c->r[0]|c->r[0]; // 80275C50
  c->lr=0x80275C58u; f_801A0EF8(c); // 80275C54
  cmps(c,0,(int32_t)c->r[3],0); // 80275C58
  c->r[31]=c->r[3]|c->r[3]; // 80275C5C
  if (!crb(c,2)) { goto L_80275C6C; } // 80275C60
  c->r[3]=0u+0x00000000u; // 80275C64
  goto L_80275DA0; // 80275C68
L_80275C6C:;
  if (crb(c,2)) { goto L_80275D9C; } // 80275C6C
  c->r[4]=c->r[27]|c->r[27]; // 80275C70
  c->r[6]=c->r[29]|c->r[29]; // 80275C74
  c->r[5]=c->r[3]+0x000000F0u; // 80275C78
  c->lr=0x80275C80u; f_8026E17C(c); // 80275C7C
  c->r[3]=0u+0x80340000u; // 80275C80
  cmps(c,0,(int32_t)c->r[29],0); // 80275C84
  c->r[3]=c->r[3]+0x00004F98u; // 80275C88
  c->r[0]=c->r[31]+c->r[28]; // 80275C8C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80275C90
  c->r[3]=0u+0x00000000u; // 80275C94
  W32(c->r[31]+0x000000E8u,c->r[30]); // 80275C98
  W32(c->r[31]+0x000000ECu,c->r[0]); // 80275C9C
  if (crb(c,2)) { goto L_80275D78; } // 80275CA0
  cmpu(c,0,c->r[29],0x00000008u); // 80275CA4
  c->r[5]=c->r[29]+0xFFFFFFF8u; // 80275CA8
  if (!crb(c,1)) { goto L_80275D50; } // 80275CAC
  c->r[0]=c->r[5]+0x00000007u; // 80275CB0
  c->r[4]=0u+0x00000000u; // 80275CB4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80275CB8
  c->ctr=c->r[0]; // 80275CBC
  cmpu(c,0,c->r[5],0x00000000u); // 80275CC0
  if (!crb(c,1)) { goto L_80275D50; } // 80275CC4
L_80275CC8:;
  c->r[0]=R32(c->r[13]+0xFFFF9780u); // 80275CC8
  c->r[3]=c->r[3]+0x00000008u; // 80275CCC
  c->r[5]=R32(c->r[31]+0x000000ECu); // 80275CD0
  W32(c->r[5]+c->r[4],c->r[0]); // 80275CD4
  c->r[0]=R32(c->r[31]+0x000000ECu); // 80275CD8
  c->r[6]=R32(c->r[13]+0xFFFF9780u); // 80275CDC
  c->r[5]=c->r[0]+c->r[4]; // 80275CE0
  W32(c->r[5]+0x00000004u,c->r[6]); // 80275CE4
  c->r[0]=R32(c->r[31]+0x000000ECu); // 80275CE8
  c->r[6]=R32(c->r[13]+0xFFFF9780u); // 80275CEC
  c->r[5]=c->r[0]+c->r[4]; // 80275CF0
  W32(c->r[5]+0x00000008u,c->r[6]); // 80275CF4
  c->r[0]=R32(c->r[31]+0x000000ECu); // 80275CF8
  c->r[6]=R32(c->r[13]+0xFFFF9780u); // 80275CFC
  c->r[5]=c->r[0]+c->r[4]; // 80275D00
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 80275D04
  c->r[0]=R32(c->r[31]+0x000000ECu); // 80275D08
  c->r[6]=R32(c->r[13]+0xFFFF9780u); // 80275D0C
  c->r[5]=c->r[0]+c->r[4]; // 80275D10
  W32(c->r[5]+0x00000010u,c->r[6]); // 80275D14
  c->r[0]=R32(c->r[31]+0x000000ECu); // 80275D18
  c->r[6]=R32(c->r[13]+0xFFFF9780u); // 80275D1C
  c->r[5]=c->r[0]+c->r[4]; // 80275D20
  W32(c->r[5]+0x00000014u,c->r[6]); // 80275D24
  c->r[0]=R32(c->r[31]+0x000000ECu); // 80275D28
  c->r[6]=R32(c->r[13]+0xFFFF9780u); // 80275D2C
  c->r[5]=c->r[0]+c->r[4]; // 80275D30
  W32(c->r[5]+0x00000018u,c->r[6]); // 80275D34
  c->r[0]=R32(c->r[31]+0x000000ECu); // 80275D38
  c->r[6]=R32(c->r[13]+0xFFFF9780u); // 80275D3C
  c->r[5]=c->r[0]+c->r[4]; // 80275D40
  c->r[4]=c->r[4]+0x00000020u; // 80275D44
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80275D48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80275CC8; } // 80275D4C
L_80275D50:;
  c->r[0]=c->r[29]-c->r[3]; // 80275D50
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80275D54
  c->ctr=c->r[0]; // 80275D58
  cmpu(c,0,c->r[3],c->r[29]); // 80275D5C
  if (!crb(c,0)) { goto L_80275D78; } // 80275D60
L_80275D64:;
  c->r[0]=R32(c->r[13]+0xFFFF9780u); // 80275D64
  c->r[3]=R32(c->r[31]+0x000000ECu); // 80275D68
  W32(c->r[3]+c->r[4],c->r[0]); // 80275D6C
  c->r[4]=c->r[4]+0x00000004u; // 80275D70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80275D64; } // 80275D74
L_80275D78:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80275D78
  c->r[4]=0u+0x00010000u; // 80275D7C
  c->r[3]=c->r[30]|c->r[30]; // 80275D80
  c->r[6]=c->r[31]|c->r[31]; // 80275D84
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80275D88
  c->r[4]=c->r[4]+0x00000002u; // 80275D8C
  c->r[5]=0u+0x00000000u; // 80275D90
  c->ctr=c->r[12]; // 80275D94
  if (true) { c->lr=0x80275D9Cu; dispatch(c,c->ctr); } // 80275D98
L_80275D9C:;
  c->r[3]=c->r[31]|c->r[31]; // 80275D9C
L_80275DA0:;
  c->r[11]=c->r[1]+0x00000020u; // 80275DA0
  c->lr=0x80275DA8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80275DA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80275DA8
  c->lr=c->r[0]; // 80275DAC
  c->r[1]=c->r[1]+0x00000020u; // 80275DB0
  return; // 80275DB4
}

// fn_80275DB8
void f_80275DB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275DB8
  c->r[0]=c->lr; // 80275DBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80275DC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80275DC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80275DC8
  c->r[30]=c->r[5]|c->r[5]; // 80275DCC
  c->r[5]=c->r[4]|c->r[4]; // 80275DD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80275DD4
  c->r[29]=c->r[3]|c->r[3]; // 80275DD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80275DDC
  c->r[4]=R32(c->r[3]+0x000000E4u); // 80275DE0
  c->r[12]=R32(c->r[12]+0x00000034u); // 80275DE4
  c->ctr=c->r[12]; // 80275DE8
  if (true) { c->lr=0x80275DF0u; dispatch(c,c->ctr); } // 80275DEC
  cmps(c,0,(int32_t)c->r[3],0); // 80275DF0
  if (!crb(c,2)) { goto L_80275E00; } // 80275DF4
  c->r[3]=0u+0x00000000u; // 80275DF8
  goto L_80275E80; // 80275DFC
L_80275E00:;
  c->r[4]=R32(c->r[29]+0x000000E8u); // 80275E00
  c->r[3]=c->r[1]+0x00000008u; // 80275E04
  c->r[5]=R32(c->r[29]+0x000000E4u); // 80275E08
  c->r[0]=R32(c->r[4]+0x000000E8u); // 80275E0C
  c->r[31]=c->r[5]+0xFFFFFFFFu; // 80275E10
  W32(c->r[1]+0x00000008u,c->r[0]); // 80275E14
  c->lr=0x80275E1Cu; f_80251550(c); // 80275E18
  cmpu(c,0,c->r[30],c->r[3]); // 80275E1C
  if (!crb(c,0)) { goto L_80275E44; } // 80275E20
  c->r[0]=R32(c->r[29]+0x000000E4u); // 80275E24
  cmpu(c,0,c->r[31],c->r[0]); // 80275E28
  if (!crb(c,0)) { goto L_80275E44; } // 80275E2C
  c->r[3]=R32(c->r[29]+0x000000ECu); // 80275E30
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80275E34
  c->r[4]=0u+0x00000001u; // 80275E38
  W32(c->r[3]+c->r[0],c->r[30]); // 80275E3C
  goto L_80275E48; // 80275E40
L_80275E44:;
  c->r[4]=0u+0x00000000u; // 80275E44
L_80275E48:;
  cmps(c,0,(int32_t)c->r[4],0); // 80275E48
  if (!crb(c,2)) { goto L_80275E7C; } // 80275E4C
  c->r[4]=R32(c->r[29]+0x000000E4u); // 80275E50
  cmps(c,0,(int32_t)c->r[4],0); // 80275E54
  if (crb(c,2)) { goto L_80275E74; } // 80275E58
  c->r[12]=R32(c->r[29]+0x00000000u); // 80275E5C
  c->r[3]=c->r[29]|c->r[29]; // 80275E60
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80275E64
  c->r[12]=R32(c->r[12]+0x00000038u); // 80275E68
  c->ctr=c->r[12]; // 80275E6C
  if (true) { c->lr=0x80275E74u; dispatch(c,c->ctr); } // 80275E70
L_80275E74:;
  c->r[3]=0u+0x00000000u; // 80275E74
  goto L_80275E80; // 80275E78
L_80275E7C:;
  c->r[3]=0u+0x00000001u; // 80275E7C
L_80275E80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80275E80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80275E84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80275E88
  c->r[29]=R32(c->r[1]+0x00000014u); // 80275E8C
  c->lr=c->r[0]; // 80275E90
  c->r[1]=c->r[1]+0x00000020u; // 80275E94
  return; // 80275E98
}

// fn_80275E9C
void f_80275E9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275E9C
  c->r[0]=c->lr; // 80275EA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80275EA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80275EA8
  c->r[31]=c->r[4]|c->r[4]; // 80275EAC
  c->r[4]=c->r[5]|c->r[5]; // 80275EB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80275EB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80275EB8
  c->r[29]=c->r[3]|c->r[3]; // 80275EBC
  c->r[6]=R32(c->r[3]+0x000000E8u); // 80275EC0
  c->r[3]=c->r[1]+0x0000000Cu; // 80275EC4
  c->r[0]=R32(c->r[6]+0x000000E8u); // 80275EC8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80275ECC
  c->lr=0x80275ED4u; f_80251414(c); // 80275ED0
  cmps(c,0,(int32_t)c->r[3],0); // 80275ED4
  if (crb(c,2)) { goto L_80275EF0; } // 80275ED8
  if (crb(c,2)) { goto L_80275EE8; } // 80275EDC
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80275EE0
  goto L_80275EF4; // 80275EE4
L_80275EE8:;
  c->r[30]=0u+0x00000000u; // 80275EE8
  goto L_80275EF4; // 80275EEC
L_80275EF0:;
  c->r[30]=R32(c->r[13]+0xFFFF9780u); // 80275EF0
L_80275EF4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80275EF4
  c->r[3]=c->r[29]|c->r[29]; // 80275EF8
  c->r[5]=c->r[31]|c->r[31]; // 80275EFC
  c->r[4]=R32(c->r[29]+0x000000E4u); // 80275F00
  c->r[12]=R32(c->r[12]+0x00000034u); // 80275F04
  c->ctr=c->r[12]; // 80275F08
  if (true) { c->lr=0x80275F10u; dispatch(c,c->ctr); } // 80275F0C
  cmps(c,0,(int32_t)c->r[3],0); // 80275F10
  if (!crb(c,2)) { goto L_80275F20; } // 80275F14
  c->r[3]=0u+0x00000000u; // 80275F18
  goto L_80275FA0; // 80275F1C
L_80275F20:;
  c->r[4]=R32(c->r[29]+0x000000E8u); // 80275F20
  c->r[3]=c->r[1]+0x00000008u; // 80275F24
  c->r[5]=R32(c->r[29]+0x000000E4u); // 80275F28
  c->r[0]=R32(c->r[4]+0x000000E8u); // 80275F2C
  c->r[31]=c->r[5]+0xFFFFFFFFu; // 80275F30
  W32(c->r[1]+0x00000008u,c->r[0]); // 80275F34
  c->lr=0x80275F3Cu; f_80251550(c); // 80275F38
  cmpu(c,0,c->r[30],c->r[3]); // 80275F3C
  if (!crb(c,0)) { goto L_80275F64; } // 80275F40
  c->r[0]=R32(c->r[29]+0x000000E4u); // 80275F44
  cmpu(c,0,c->r[31],c->r[0]); // 80275F48
  if (!crb(c,0)) { goto L_80275F64; } // 80275F4C
  c->r[3]=R32(c->r[29]+0x000000ECu); // 80275F50
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80275F54
  c->r[4]=0u+0x00000001u; // 80275F58
  W32(c->r[3]+c->r[0],c->r[30]); // 80275F5C
  goto L_80275F68; // 80275F60
L_80275F64:;
  c->r[4]=0u+0x00000000u; // 80275F64
L_80275F68:;
  cmps(c,0,(int32_t)c->r[4],0); // 80275F68
  if (!crb(c,2)) { goto L_80275F9C; } // 80275F6C
  c->r[4]=R32(c->r[29]+0x000000E4u); // 80275F70
  cmps(c,0,(int32_t)c->r[4],0); // 80275F74
  if (crb(c,2)) { goto L_80275F94; } // 80275F78
  c->r[12]=R32(c->r[29]+0x00000000u); // 80275F7C
  c->r[3]=c->r[29]|c->r[29]; // 80275F80
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80275F84
  c->r[12]=R32(c->r[12]+0x00000038u); // 80275F88
  c->ctr=c->r[12]; // 80275F8C
  if (true) { c->lr=0x80275F94u; dispatch(c,c->ctr); } // 80275F90
L_80275F94:;
  c->r[3]=0u+0x00000000u; // 80275F94
  goto L_80275FA0; // 80275F98
L_80275F9C:;
  c->r[3]=0u+0x00000001u; // 80275F9C
L_80275FA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80275FA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80275FA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80275FA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80275FAC
  c->lr=c->r[0]; // 80275FB0
  c->r[1]=c->r[1]+0x00000020u; // 80275FB4
  return; // 80275FB8
}

// fn_80275FBC
void f_80275FBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80275FBC
  c->r[0]=c->lr; // 80275FC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80275FC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80275FC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80275FCC
  c->r[30]=c->r[4]|c->r[4]; // 80275FD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80275FD4
  c->r[29]=c->r[3]|c->r[3]; // 80275FD8
  c->r[31]=R32(c->r[13]+0xFFFF9780u); // 80275FDC
  c->lr=0x80275FE4u; f_8026DEB0(c); // 80275FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80275FE4
  if (crb(c,2)) { goto L_802760F0; } // 80275FE8
  c->r[4]=R32(c->r[29]+0x000000E4u); // 80275FEC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80275FF0
  cmpu(c,1,c->r[4],c->r[30]); // 80275FF4
  if (!crb(c,5)) { goto L_802760E4; } // 80275FF8
  c->r[0]=c->r[4]-c->r[30]; // 80275FFC
  c->r[5]=c->r[30]+0x00000008u; // 80276000
  cmpu(c,0,c->r[0],0x00000008u); // 80276004
  if (!crb(c,1)) { goto L_802760B8; } // 80276008
  if (crb(c,4)) { goto L_802760B8; } // 8027600C
  c->r[0]=c->r[4]+0x00000007u; // 80276010
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80276014
  c->r[0]=c->r[0]-c->r[5]; // 80276018
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8027601C
  c->ctr=c->r[0]; // 80276020
  cmpu(c,0,c->r[4],c->r[5]); // 80276024
  if (!crb(c,1)) { goto L_802760B8; } // 80276028
L_8027602C:;
  c->r[0]=R32(c->r[29]+0x000000ECu); // 8027602C
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 80276030
  c->r[5]=c->r[0]+c->r[6]; // 80276034
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80276038
  W32(c->r[5]+0x00000000u,c->r[0]); // 8027603C
  c->r[0]=R32(c->r[29]+0x000000ECu); // 80276040
  c->r[5]=c->r[0]+c->r[6]; // 80276044
  c->r[0]=R32(c->r[5]+0xFFFFFFF8u); // 80276048
  W32(c->r[5]+0xFFFFFFFCu,c->r[0]); // 8027604C
  c->r[0]=R32(c->r[29]+0x000000ECu); // 80276050
  c->r[5]=c->r[0]+c->r[6]; // 80276054
  c->r[0]=R32(c->r[5]+0xFFFFFFF4u); // 80276058
  W32(c->r[5]+0xFFFFFFF8u,c->r[0]); // 8027605C
  c->r[0]=R32(c->r[29]+0x000000ECu); // 80276060
  c->r[5]=c->r[0]+c->r[6]; // 80276064
  c->r[0]=R32(c->r[5]+0xFFFFFFF0u); // 80276068
  W32(c->r[5]+0xFFFFFFF4u,c->r[0]); // 8027606C
  c->r[0]=R32(c->r[29]+0x000000ECu); // 80276070
  c->r[5]=c->r[0]+c->r[6]; // 80276074
  c->r[0]=R32(c->r[5]+0xFFFFFFECu); // 80276078
  W32(c->r[5]+0xFFFFFFF0u,c->r[0]); // 8027607C
  c->r[0]=R32(c->r[29]+0x000000ECu); // 80276080
  c->r[5]=c->r[0]+c->r[6]; // 80276084
  c->r[0]=R32(c->r[5]+0xFFFFFFE8u); // 80276088
  W32(c->r[5]+0xFFFFFFECu,c->r[0]); // 8027608C
  c->r[0]=R32(c->r[29]+0x000000ECu); // 80276090
  c->r[5]=c->r[0]+c->r[6]; // 80276094
  c->r[0]=R32(c->r[5]+0xFFFFFFE4u); // 80276098
  W32(c->r[5]+0xFFFFFFE8u,c->r[0]); // 8027609C
  c->r[0]=R32(c->r[29]+0x000000ECu); // 802760A0
  c->r[5]=c->r[0]+c->r[6]; // 802760A4
  c->r[6]=c->r[6]+0xFFFFFFE0u; // 802760A8
  c->r[0]=R32(c->r[5]+0xFFFFFFE0u); // 802760AC
  W32(c->r[5]+0xFFFFFFE4u,c->r[0]); // 802760B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027602C; } // 802760B4
L_802760B8:;
  c->r[0]=c->r[4]-c->r[30]; // 802760B8
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802760BC
  c->ctr=c->r[0]; // 802760C0
  cmpu(c,0,c->r[4],c->r[30]); // 802760C4
  if (!crb(c,1)) { goto L_802760E4; } // 802760C8
L_802760CC:;
  c->r[0]=R32(c->r[29]+0x000000ECu); // 802760CC
  c->r[4]=c->r[0]+c->r[5]; // 802760D0
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 802760D4
  c->r[0]=R32(c->r[4]+0xFFFFFFFCu); // 802760D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 802760DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802760CC; } // 802760E0
L_802760E4:;
  c->r[4]=R32(c->r[29]+0x000000ECu); // 802760E4
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 802760E8
  W32(c->r[4]+c->r[0],c->r[31]); // 802760EC
L_802760F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802760F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802760F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802760F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802760FC
  c->lr=c->r[0]; // 80276100
  c->r[1]=c->r[1]+0x00000020u; // 80276104
  return; // 80276108
}

// fn_8027610C
void f_8027610C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027610C
  c->r[0]=c->lr; // 80276110
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276114
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276118
  c->r[31]=c->r[4]|c->r[4]; // 8027611C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80276120
  c->r[30]=c->r[3]|c->r[3]; // 80276124
  c->lr=0x8027612Cu; f_8026E03C(c); // 80276128
  cmps(c,0,(int32_t)c->r[3],0); // 8027612C
  if (crb(c,2)) { goto L_80276228; } // 80276130
  c->r[4]=R32(c->r[30]+0x000000E4u); // 80276134
  cmpu(c,1,c->r[31],c->r[4]); // 80276138
  if (!crb(c,4)) { goto L_80276228; } // 8027613C
  c->r[0]=c->r[4]-c->r[31]; // 80276140
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 80276144
  cmpu(c,0,c->r[0],0x00000008u); // 80276148
  if (!crb(c,1)) { goto L_802761FC; } // 8027614C
  if (crb(c,5)) { goto L_802761FC; } // 80276150
  c->r[0]=c->r[5]+0x00000007u; // 80276154
  c->r[6]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80276158
  c->r[0]=c->r[0]-c->r[31]; // 8027615C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80276160
  c->ctr=c->r[0]; // 80276164
  cmpu(c,0,c->r[31],c->r[5]); // 80276168
  if (!crb(c,0)) { goto L_802761FC; } // 8027616C
L_80276170:;
  c->r[0]=R32(c->r[30]+0x000000ECu); // 80276170
  c->r[31]=c->r[31]+0x00000008u; // 80276174
  c->r[5]=c->r[0]+c->r[6]; // 80276178
  c->r[0]=R32(c->r[5]+0x00000004u); // 8027617C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80276180
  c->r[0]=R32(c->r[30]+0x000000ECu); // 80276184
  c->r[5]=c->r[0]+c->r[6]; // 80276188
  c->r[0]=R32(c->r[5]+0x00000008u); // 8027618C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80276190
  c->r[0]=R32(c->r[30]+0x000000ECu); // 80276194
  c->r[5]=c->r[0]+c->r[6]; // 80276198
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8027619C
  W32(c->r[5]+0x00000008u,c->r[0]); // 802761A0
  c->r[0]=R32(c->r[30]+0x000000ECu); // 802761A4
  c->r[5]=c->r[0]+c->r[6]; // 802761A8
  c->r[0]=R32(c->r[5]+0x00000010u); // 802761AC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 802761B0
  c->r[0]=R32(c->r[30]+0x000000ECu); // 802761B4
  c->r[5]=c->r[0]+c->r[6]; // 802761B8
  c->r[0]=R32(c->r[5]+0x00000014u); // 802761BC
  W32(c->r[5]+0x00000010u,c->r[0]); // 802761C0
  c->r[0]=R32(c->r[30]+0x000000ECu); // 802761C4
  c->r[5]=c->r[0]+c->r[6]; // 802761C8
  c->r[0]=R32(c->r[5]+0x00000018u); // 802761CC
  W32(c->r[5]+0x00000014u,c->r[0]); // 802761D0
  c->r[0]=R32(c->r[30]+0x000000ECu); // 802761D4
  c->r[5]=c->r[0]+c->r[6]; // 802761D8
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 802761DC
  W32(c->r[5]+0x00000018u,c->r[0]); // 802761E0
  c->r[0]=R32(c->r[30]+0x000000ECu); // 802761E4
  c->r[5]=c->r[0]+c->r[6]; // 802761E8
  c->r[6]=c->r[6]+0x00000020u; // 802761EC
  c->r[0]=R32(c->r[5]+0x00000020u); // 802761F0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 802761F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80276170; } // 802761F8
L_802761FC:;
  c->r[0]=c->r[4]-c->r[31]; // 802761FC
  c->r[5]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80276200
  c->ctr=c->r[0]; // 80276204
  cmpu(c,0,c->r[31],c->r[4]); // 80276208
  if (!crb(c,0)) { goto L_80276228; } // 8027620C
L_80276210:;
  c->r[0]=R32(c->r[30]+0x000000ECu); // 80276210
  c->r[4]=c->r[0]+c->r[5]; // 80276214
  c->r[5]=c->r[5]+0x00000004u; // 80276218
  c->r[0]=R32(c->r[4]+0x00000004u); // 8027621C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80276220
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80276210; } // 80276224
L_80276228:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8027622C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80276230
  c->lr=c->r[0]; // 80276234
  c->r[1]=c->r[1]+0x00000010u; // 80276238
  return; // 8027623C
}

// fn_80276240
void f_80276240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276240
  c->r[0]=c->lr; // 80276244
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276248
  c->r[0]=R32(c->r[3]+0x000000E4u); // 8027624C
  c->r[6]=R32(c->r[3]+0x000000DCu); // 80276250
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80276254
  c->r[5]=c->r[6]|c->r[6]; // 80276258
  c->r[7]=c->r[6]+c->r[0]; // 8027625C
  goto L_80276268; // 80276260
L_80276264:;
  c->r[5]=c->r[5]+0x00000004u; // 80276264
L_80276268:;
  cmpu(c,0,c->r[5],c->r[7]); // 80276268
  if (crb(c,2)) { goto L_8027627C; } // 8027626C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80276270
  cmpu(c,0,c->r[0],c->r[4]); // 80276274
  if (!crb(c,2)) { IRQCHK(c); goto L_80276264; } // 80276278
L_8027627C:;
  cmpu(c,0,c->r[5],c->r[7]); // 8027627C
  if (!crb(c,2)) { goto L_8027628C; } // 80276280
  c->r[3]=0u+0x00000000u; // 80276284
  goto L_802762B4; // 80276288
L_8027628C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027628C
  c->r[0]=c->r[5]-c->r[6]; // 80276290
  c->r[0]=sraw(c,c->r[0],2); // 80276294
  c->r[12]=R32(c->r[12]+0x00000038u); // 80276298
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8027629C
  c->ctr=c->r[12]; // 802762A0
  if (true) { c->lr=0x802762A8u; dispatch(c,c->ctr); } // 802762A4
  c->r[0]=0u-c->r[3]; // 802762A8
  c->r[0]=c->r[0]|c->r[3]; // 802762AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802762B0
L_802762B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802762B4
  c->lr=c->r[0]; // 802762B8
  c->r[1]=c->r[1]+0x00000010u; // 802762BC
  return; // 802762C0
}

// fn_802762C4
void f_802762C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802762C4
  c->r[0]=c->lr; // 802762C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 802762CC
  c->r[11]=c->r[1]+0x00000060u; // 802762D0
  c->lr=0x802762D8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802762D4
  cmpu(c,0,c->r[4],0x00000009u); // 802762D8
  W32(c->r[1]+0x00000008u,c->r[5]); // 802762DC
  c->r[29]=c->r[3]|c->r[3]; // 802762E0
  c->r[30]=c->r[4]|c->r[4]; // 802762E4
  c->r[0]=c->r[5]|c->r[5]; // 802762E8
  c->r[31]=c->r[6]|c->r[6]; // 802762EC
  if (!crb(c,0)) { goto L_80276314; } // 802762F0
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 802762F4
  c->r[8]=0u+0x00000001u; // 802762F8
  c->r[5]=R32(c->r[3]+0x000000CCu); // 802762FC
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 80276300
  c->r[5]=c->r[7]&c->r[5]; cr0(c,c->r[5]); // 80276304
  if (crb(c,2)) { goto L_80276314; } // 80276308
  c->r[5]=0u+0x00000001u; // 8027630C
  goto L_80276318; // 80276310
L_80276314:;
  c->r[5]=0u+0x00000000u; // 80276314
L_80276318:;
  cmps(c,0,(int32_t)c->r[5],0); // 80276318
  if (!crb(c,2)) { goto L_80276594; } // 8027631C
  c->r[5]=0u+0x00010000u; // 80276320
  c->r[7]=c->r[5]+0x00000001u; // 80276324
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 80276328
  if (crb(c,2)) { goto L_8027650C; } // 8027632C
  if (!crb(c,0)) { goto L_80276340; } // 80276330
  cmps(c,0,(int32_t)c->r[4],1); // 80276334
  if (crb(c,2)) { goto L_80276350; } // 80276338
  goto L_80276558; // 8027633C
L_80276340:;
  c->r[5]=c->r[5]+0x00000004u; // 80276340
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 80276344
  if (!crb(c,0)) { goto L_80276558; } // 80276348
  goto L_802764F4; // 8027634C
L_80276350:;
  c->r[5]=R32(c->r[3]+0x000000D4u); // 80276350
  cmps(c,0,(int32_t)c->r[5],0); // 80276354
  if (crb(c,2)) { goto L_80276398; } // 80276358
  c->r[4]=R16(c->r[3]+0x000000DAu); // 8027635C
  c->r[4]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[4]); // 80276360
  if (crb(c,2)) { goto L_80276398; } // 80276364
  c->r[3]=R8(c->r[3]+0x000000D8u); // 80276368
  c->r[3]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[3]); // 8027636C
  if (crb(c,2)) { goto L_80276398; } // 80276370
  c->r[3]=c->r[5]|c->r[5]; // 80276374
  c->r[5]=c->r[29]|c->r[29]; // 80276378
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027637C
  c->r[6]=c->r[0]|c->r[0]; // 80276380
  c->r[7]=c->r[31]|c->r[31]; // 80276384
  c->r[4]=0u+0x00000001u; // 80276388
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027638C
  c->ctr=c->r[12]; // 80276390
  if (true) { c->lr=0x80276398u; dispatch(c,c->ctr); } // 80276394
L_80276398:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80276398
  c->r[3]=c->r[29]|c->r[29]; // 8027639C
  c->r[4]=c->r[31]|c->r[31]; // 802763A0
  c->r[5]=c->r[1]+0x00000008u; // 802763A4
  c->r[12]=R32(c->r[12]+0x00000030u); // 802763A8
  c->ctr=c->r[12]; // 802763AC
  if (true) { c->lr=0x802763B4u; dispatch(c,c->ctr); } // 802763B0
  c->r[3]=R32(c->r[29]+0x000000D4u); // 802763B4
  c->r[6]=R32(c->r[1]+0x00000008u); // 802763B8
  cmps(c,0,(int32_t)c->r[3],0); // 802763BC
  if (crb(c,2)) { goto L_802763F8; } // 802763C0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 802763C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802763C8
  if (crb(c,2)) { goto L_802763F8; } // 802763CC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 802763D0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802763D4
  if (crb(c,2)) { goto L_802763F8; } // 802763D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802763DC
  c->r[5]=c->r[29]|c->r[29]; // 802763E0
  c->r[7]=c->r[31]|c->r[31]; // 802763E4
  c->r[4]=0u+0x00000002u; // 802763E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802763EC
  c->ctr=c->r[12]; // 802763F0
  if (true) { c->lr=0x802763F8u; dispatch(c,c->ctr); } // 802763F4
L_802763F8:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 802763F8
  cmps(c,0,(int32_t)c->r[3],0); // 802763FC
  if (crb(c,2)) { goto L_80276420; } // 80276400
  c->r[12]=R32(c->r[3]+0x00000000u); // 80276404
  c->r[4]=c->r[30]|c->r[30]; // 80276408
  c->r[6]=c->r[29]+0x0000003Cu; // 8027640C
  c->r[5]=R32(c->r[1]+0x00000008u); // 80276410
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80276414
  c->ctr=c->r[12]; // 80276418
  if (true) { c->lr=0x80276420u; dispatch(c,c->ctr); } // 8027641C
L_80276420:;
  c->r[26]=R32(c->r[29]+0x000000E4u); // 80276420
  c->r[25]=0u+0x00000000u; // 80276424
  c->r[27]=0u+0x00000000u; // 80276428
  goto L_802764A4; // 8027642C
L_80276430:;
  c->r[3]=R32(c->r[29]+0x000000ECu); // 80276430
  c->r[0]=R32(c->r[13]+0xFFFF9780u); // 80276434
  c->r[6]=R32(c->r[3]+c->r[27]); // 80276438
  c->r[24]=R32(c->r[1]+0x00000008u); // 8027643C
  cmpu(c,0,c->r[6],c->r[0]); // 80276440
  if (crb(c,2)) { goto L_8027649C; } // 80276444
  c->r[3]=R32(c->r[29]+0x000000E8u); // 80276448
  c->r[4]=R32(c->r[29]+0x000000DCu); // 8027644C
  cmps(c,0,(int32_t)c->r[3],0); // 80276450
  c->r[28]=R32(c->r[4]+c->r[27]); // 80276454
  if (crb(c,2)) { goto L_80276478; } // 80276458
  c->r[4]=c->r[1]+0x00000010u; // 8027645C
  c->r[5]=0u+0x00000001u; // 80276460
  c->lr=0x80276468u; f_80270E10(c); // 80276464
  cmps(c,0,(int32_t)c->r[3],0); // 80276468
  if (!crb(c,2)) { goto L_8027647C; } // 8027646C
  c->r[24]=c->r[24]|0x00000001u; // 80276470
  goto L_8027647C; // 80276474
L_80276478:;
  c->r[24]=c->r[24]|0x00000001u; // 80276478
L_8027647C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8027647C
  c->r[3]=c->r[28]|c->r[28]; // 80276480
  c->r[4]=c->r[30]|c->r[30]; // 80276484
  c->r[5]=c->r[24]|c->r[24]; // 80276488
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027648C
  c->r[6]=c->r[1]+0x00000010u; // 80276490
  c->ctr=c->r[12]; // 80276494
  if (true) { c->lr=0x8027649Cu; dispatch(c,c->ctr); } // 80276498
L_8027649C:;
  c->r[27]=c->r[27]+0x00000004u; // 8027649C
  c->r[25]=c->r[25]+0x00000001u; // 802764A0
L_802764A4:;
  cmpu(c,0,c->r[25],c->r[26]); // 802764A4
  if (crb(c,0)) { IRQCHK(c); goto L_80276430; } // 802764A8
  c->r[3]=R32(c->r[29]+0x000000D4u); // 802764AC
  c->r[6]=R32(c->r[1]+0x00000008u); // 802764B0
  cmps(c,0,(int32_t)c->r[3],0); // 802764B4
  if (crb(c,2)) { goto L_80276594; } // 802764B8
  c->r[0]=R16(c->r[29]+0x000000DAu); // 802764BC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802764C0
  if (crb(c,2)) { goto L_80276594; } // 802764C4
  c->r[0]=R8(c->r[29]+0x000000D8u); // 802764C8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802764CC
  if (crb(c,2)) { goto L_80276594; } // 802764D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802764D4
  c->r[5]=c->r[29]|c->r[29]; // 802764D8
  c->r[7]=c->r[31]|c->r[31]; // 802764DC
  c->r[4]=0u+0x00000004u; // 802764E0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802764E4
  c->ctr=c->r[12]; // 802764E8
  if (true) { c->lr=0x802764F0u; dispatch(c,c->ctr); } // 802764EC
  goto L_80276594; // 802764F0
L_802764F4:;
  c->r[3]=c->r[29]|c->r[29]; // 802764F4
  c->r[4]=c->r[30]|c->r[30]; // 802764F8
  c->r[5]=c->r[0]|c->r[0]; // 802764FC
  c->r[6]=c->r[31]|c->r[31]; // 80276500
  c->lr=0x80276508u; f_8026DA54(c); // 80276504
  goto L_80276594; // 80276508
L_8027650C:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8027650C
  cmpu(c,0,c->r[6],c->r[3]); // 80276510
  if (!crb(c,2)) { goto L_80276540; } // 80276514
  c->r[12]=R32(c->r[3]+0x00000000u); // 80276518
  c->r[4]=c->r[5]+0x00000003u; // 8027651C
  c->r[6]=c->r[29]|c->r[29]; // 80276520
  c->r[5]=0u+0x00000000u; // 80276524
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80276528
  c->ctr=c->r[12]; // 8027652C
  if (true) { c->lr=0x80276534u; dispatch(c,c->ctr); } // 80276530
  c->r[0]=0u+0x00000000u; // 80276534
  W32(c->r[29]+0x000000E8u,c->r[0]); // 80276538
  goto L_80276594; // 8027653C
L_80276540:;
  c->r[3]=c->r[29]|c->r[29]; // 80276540
  c->r[4]=c->r[30]|c->r[30]; // 80276544
  c->r[5]=c->r[0]|c->r[0]; // 80276548
  c->r[6]=c->r[31]|c->r[31]; // 8027654C
  c->lr=0x80276554u; f_8026DA54(c); // 80276550
  goto L_80276594; // 80276554
L_80276558:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 80276558
  cmps(c,0,(int32_t)c->r[3],0); // 8027655C
  if (crb(c,2)) { goto L_80276580; } // 80276560
  c->r[12]=R32(c->r[3]+0x00000000u); // 80276564
  c->r[4]=c->r[30]|c->r[30]; // 80276568
  c->r[5]=c->r[0]|c->r[0]; // 8027656C
  c->r[6]=c->r[31]|c->r[31]; // 80276570
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80276574
  c->ctr=c->r[12]; // 80276578
  if (true) { c->lr=0x80276580u; dispatch(c,c->ctr); } // 8027657C
L_80276580:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 80276580
  c->r[3]=c->r[29]|c->r[29]; // 80276584
  c->r[4]=c->r[30]|c->r[30]; // 80276588
  c->r[6]=c->r[31]|c->r[31]; // 8027658C
  c->lr=0x80276594u; f_8026DA54(c); // 80276590
L_80276594:;
  c->r[11]=c->r[1]+0x00000060u; // 80276594
  c->lr=0x8027659Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80276598
  c->r[0]=R32(c->r[1]+0x00000064u); // 8027659C
  c->lr=c->r[0]; // 802765A0
  c->r[1]=c->r[1]+0x00000060u; // 802765A4
  return; // 802765A8
}

// fn_802765AC
void f_802765AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802765AC
  c->r[0]=c->lr; // 802765B0
  cmps(c,0,(int32_t)c->r[3],0); // 802765B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802765B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802765BC
  c->r[31]=c->r[3]|c->r[3]; // 802765C0
  if (crb(c,2)) { goto L_80276610; } // 802765C4
  c->r[0]=R32(c->r[3]+0x000000E8u); // 802765C8
  c->r[4]=0u+0x80340000u; // 802765CC
  c->r[4]=c->r[4]+0x00004F98u; // 802765D0
  cmps(c,0,(int32_t)c->r[0],0); // 802765D4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802765D8
  if (crb(c,2)) { goto L_80276604; } // 802765DC
  c->r[3]=c->r[0]|c->r[0]; // 802765E0
  c->r[4]=0u+0x00010000u; // 802765E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802765E8
  c->r[6]=c->r[31]|c->r[31]; // 802765EC
  c->r[4]=c->r[4]+0x00000003u; // 802765F0
  c->r[5]=0u+0x00000000u; // 802765F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802765F8
  c->ctr=c->r[12]; // 802765FC
  if (true) { c->lr=0x80276604u; dispatch(c,c->ctr); } // 80276600
L_80276604:;
  c->r[3]=c->r[31]|c->r[31]; // 80276604
  c->r[4]=0u+0x00000000u; // 80276608
  c->lr=0x80276610u; f_8026E1EC(c); // 8027660C
L_80276610:;
  c->r[3]=c->r[31]|c->r[31]; // 80276610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276614
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276618
  c->lr=c->r[0]; // 8027661C
  c->r[1]=c->r[1]+0x00000010u; // 80276620
  return; // 80276624
}

// fn_80276628
void f_80276628(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 80276628
  c->r[0]=R32(c->r[4]+0x00000000u); // 8027662C
  c->r[3]=c->r[3]+0xFFFF8738u; // 80276630
  cmpu(c,0,c->r[0],c->r[3]); // 80276634
  if (!crb(c,2)) { goto L_80276644; } // 80276638
  c->r[3]=0u+0x00000001u; // 8027663C
  return; // 80276640
L_80276644:;
  c->r[3]=0u+0x80310000u; // 80276644
  c->r[0]=R32(c->r[4]+0x00000000u); // 80276648
  c->r[3]=c->r[3]+0xFFFF86D0u; // 8027664C
  cmpu(c,0,c->r[0],c->r[3]); // 80276650
  if (!crb(c,2)) { goto L_80276660; } // 80276654
  c->r[3]=0u+0x00000001u; // 80276658
  return; // 8027665C
L_80276660:;
  c->r[3]=0u+0x80310000u; // 80276660
  c->r[3]=c->r[3]+0xFFFF86B0u; // 80276664
  cmpu(c,0,c->r[0],c->r[3]); // 80276668
  if (!crb(c,2)) { goto L_80276678; } // 8027666C
  c->r[3]=0u+0x00000001u; // 80276670
  return; // 80276674
L_80276678:;
  c->r[3]=0u+0x80310000u; // 80276678
  c->r[3]=c->r[3]+0xFFFF8588u; // 8027667C
  c->r[0]=c->r[3]-c->r[0]; // 80276680
  c->r[0]=cntlz(c->r[0]); // 80276684
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80276688
  return; // 8027668C
}

// fn_80276690
void f_80276690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276690
  c->r[0]=c->lr; // 80276694
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276698
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027669C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802766A0
  c->ctr=c->r[12]; // 802766A4
  if (true) { c->lr=0x802766ACu; dispatch(c,c->ctr); } // 802766A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802766AC
  c->r[3]=c->r[3]+0x00000004u; // 802766B0
  c->lr=c->r[0]; // 802766B4
  c->r[1]=c->r[1]+0x00000010u; // 802766B8
  return; // 802766BC
}

// fn_802766C0
void f_802766C0(Ctx* __restrict c) {
  c->r[3]=0u+0x80310000u; // 802766C0
  c->r[3]=c->r[3]+0xFFFF8738u; // 802766C4
  return; // 802766C8
}

// CalcMaterialDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d12AnmObjTexPatPQ34nw4r3g3d12AnmObjTexSrtPQ34nw4r3g3d12AnmObjMatClr
void f_802766CC(Ctx* __restrict c) {
  trace_call(0x802766CCu);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802766CC
  c->r[0]=c->lr; // 802766D0
  W32(c->r[1]+0x00000214u,c->r[0]); // 802766D4
  c->r[11]=c->r[1]+0x00000210u; // 802766D8
  c->lr=0x802766E0u; f_80185EA0(c); // 802766DC
  c->r[15]=c->r[3]|c->r[3]; // 802766E0
  c->r[16]=c->r[4]|c->r[4]; // 802766E4
  c->r[17]=c->r[5]|c->r[5]; // 802766E8
  c->r[18]=c->r[6]|c->r[6]; // 802766EC
  c->lr=0x802766F4u; f_80251AA8(c); // 802766F0
  c->r[27]=c->r[1]+0x000000A8u; // 802766F4
  c->r[0]=c->r[1]+0x0000008Cu; // 802766F8
  c->r[4]=c->r[27]-c->r[0]; // 802766FC
  c->r[28]=c->r[1]+0x000000C8u; // 80276700
  c->r[0]=c->r[1]+0x000000ACu; // 80276704
  W32(c->r[1]+0x000001B8u,c->r[3]); // 80276708
  c->r[6]=c->r[28]-c->r[0]; // 8027670C
  c->r[5]=c->r[4]+0x00000003u; // 80276710
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 80276714
  c->r[19]=0u+0x00000000u; // 80276718
  c->r[3]=sraw(c,c->r[5],2); // 8027671C
  c->r[7]=c->r[6]+0x00000003u; // 80276720
  c->r[4]=addc(c,c->r[3],0,c->xer_ca); // 80276724
  W32(c->r[1]+0x000001B4u,c->r[0]); // 80276728
  c->r[3]=sraw(c,c->r[7],2); // 8027672C
  c->r[0]=rotl(c->r[5],0)&0x80000000u; // 80276730
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 80276734
  c->r[26]=c->r[4]+0x00000001u; // 80276738
  c->r[24]=c->r[3]+0x00000001u; // 8027673C
  W32(c->r[1]+0x000001B0u,c->r[0]); // 80276740
  c->r[25]=rotl(c->r[4],0)&0x80000000u; // 80276744
  c->r[14]=rotl(c->r[26],0)&0x80000000u; // 80276748
  c->r[23]=rotl(c->r[6],0)&0x80000000u; // 8027674C
  c->r[22]=rotl(c->r[7],0)&0x80000000u; // 80276750
  c->r[21]=rotl(c->r[3],0)&0x80000000u; // 80276754
  c->r[20]=rotl(c->r[24],0)&0x80000000u; // 80276758
  c->r[29]=0u+0x00000000u; // 8027675C
  goto L_80276AB8; // 80276760
L_80276764:;
  c->r[3]=c->r[15]|c->r[15]; // 80276764
  c->r[4]=c->r[19]|c->r[19]; // 80276768
  c->lr=0x80276770u; f_80251A54(c); // 8027676C
  cmps(c,0,(int32_t)c->r[16],0); // 80276770
  c->r[31]=c->r[3]|c->r[3]; // 80276774
  if (crb(c,2)) { goto L_802769AC; } // 80276778
  c->r[3]=c->r[16]|c->r[16]; // 8027677C
  c->r[4]=c->r[19]|c->r[19]; // 80276780
  c->lr=0x80276788u; f_8025A620(c); // 80276784
  cmps(c,0,(int32_t)c->r[3],0); // 80276788
  if (crb(c,2)) { goto L_802769AC; } // 8027678C
  c->r[4]=c->r[1]+0x0000008Cu; // 80276790
  W32(c->r[1]+0x00000088u,c->r[29]); // 80276794
  cmpu(c,0,c->r[4],c->r[27]); // 80276798
  if (!crb(c,0)) { goto L_80276888; } // 8027679C
  cmps(c,0,(int32_t)c->r[26],8); // 802767A0
  if (!crb(c,1)) { goto L_80276864; } // 802767A4
  c->r[0]=c->r[4]|c->r[4]; // 802767A8
  c->r[3]=0u+0x00000000u; // 802767AC
  cmpu(c,0,c->r[0],c->r[27]); // 802767B0
  c->r[5]=0u+0x00000000u; // 802767B4
  if (crb(c,1)) { goto L_802767E8; } // 802767B8
  c->r[0]=R32(c->r[1]+0x000001B4u); // 802767BC
  c->r[6]=0u+0x00000001u; // 802767C0
  cmps(c,0,(int32_t)c->r[0],0); // 802767C4
  if (!crb(c,2)) { goto L_802767DC; } // 802767C8
  c->r[0]=R32(c->r[1]+0x000001B0u); // 802767CC
  cmps(c,0,(int32_t)c->r[0],0); // 802767D0
  if (crb(c,2)) { goto L_802767DC; } // 802767D4
  c->r[6]=0u+0x00000000u; // 802767D8
L_802767DC:;
  cmps(c,0,(int32_t)c->r[6],0); // 802767DC
  if (crb(c,2)) { goto L_802767E8; } // 802767E0
  c->r[5]=0u+0x00000001u; // 802767E4
L_802767E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802767E8
  if (crb(c,2)) { goto L_80276814; } // 802767EC
  cmps(c,0,(int32_t)c->r[25],0); // 802767F0
  c->r[0]=0u+0x00000001u; // 802767F4
  if (!crb(c,2)) { goto L_80276808; } // 802767F8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[14]); // 802767FC
  if (crb(c,2)) { goto L_80276808; } // 80276800
  c->r[0]=0u+0x00000000u; // 80276804
L_80276808:;
  cmps(c,0,(int32_t)c->r[0],0); // 80276808
  if (crb(c,2)) { goto L_80276814; } // 8027680C
  c->r[3]=0u+0x00000001u; // 80276810
L_80276814:;
  cmps(c,0,(int32_t)c->r[3],0); // 80276814
  if (crb(c,2)) { goto L_80276864; } // 80276818
  c->r[3]=c->r[1]+0x00000088u; // 8027681C
  c->r[0]=c->r[3]+0x0000001Fu; // 80276820
  c->r[0]=c->r[0]-c->r[4]; // 80276824
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80276828
  c->ctr=c->r[0]; // 8027682C
  c->r[0]=c->r[3]|c->r[3]; // 80276830
  cmpu(c,0,c->r[4],c->r[0]); // 80276834
  if (!crb(c,0)) { goto L_80276864; } // 80276838
L_8027683C:;
  W32(c->r[4]+0x00000000u,c->r[29]); // 8027683C
  W32(c->r[4]+0x00000004u,c->r[29]); // 80276840
  W32(c->r[4]+0x00000008u,c->r[29]); // 80276844
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80276848
  W32(c->r[4]+0x00000010u,c->r[29]); // 8027684C
  W32(c->r[4]+0x00000014u,c->r[29]); // 80276850
  W32(c->r[4]+0x00000018u,c->r[29]); // 80276854
  W32(c->r[4]+0x0000001Cu,c->r[29]); // 80276858
  c->r[4]=c->r[4]+0x00000020u; // 8027685C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027683C; } // 80276860
L_80276864:;
  c->r[0]=c->r[27]+0x00000003u; // 80276864
  c->r[0]=c->r[0]-c->r[4]; // 80276868
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8027686C
  c->ctr=c->r[0]; // 80276870
  cmpu(c,0,c->r[4],c->r[27]); // 80276874
  if (!crb(c,0)) { goto L_80276888; } // 80276878
L_8027687C:;
  W32(c->r[4]+0x00000000u,c->r[29]); // 8027687C
  c->r[4]=c->r[4]+0x00000004u; // 80276880
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027687C; } // 80276884
L_80276888:;
  c->r[3]=c->r[1]+0x000000ACu; // 80276888
  W32(c->r[1]+0x000000A8u,c->r[29]); // 8027688C
  cmpu(c,0,c->r[3],c->r[28]); // 80276890
  if (!crb(c,0)) { goto L_80276970; } // 80276894
  cmps(c,0,(int32_t)c->r[24],8); // 80276898
  if (!crb(c,1)) { goto L_8027694C; } // 8027689C
  c->r[0]=c->r[3]|c->r[3]; // 802768A0
  c->r[4]=0u+0x00000000u; // 802768A4
  cmpu(c,0,c->r[0],c->r[28]); // 802768A8
  c->r[0]=0u+0x00000000u; // 802768AC
  if (crb(c,1)) { goto L_802768D8; } // 802768B0
  cmps(c,0,(int32_t)c->r[23],0); // 802768B4
  c->r[5]=0u+0x00000001u; // 802768B8
  if (!crb(c,2)) { goto L_802768CC; } // 802768BC
  cmps(c,0,(int32_t)c->r[22],0); // 802768C0
  if (crb(c,2)) { goto L_802768CC; } // 802768C4
  c->r[5]=0u+0x00000000u; // 802768C8
L_802768CC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802768CC
  if (crb(c,2)) { goto L_802768D8; } // 802768D0
  c->r[4]=0u+0x00000001u; // 802768D4
L_802768D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802768D8
  if (crb(c,2)) { goto L_80276904; } // 802768DC
  cmps(c,0,(int32_t)c->r[21],0); // 802768E0
  c->r[4]=0u+0x00000001u; // 802768E4
  if (!crb(c,2)) { goto L_802768F8; } // 802768E8
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[20]); // 802768EC
  if (crb(c,2)) { goto L_802768F8; } // 802768F0
  c->r[4]=0u+0x00000000u; // 802768F4
L_802768F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802768F8
  if (crb(c,2)) { goto L_80276904; } // 802768FC
  c->r[0]=0u+0x00000001u; // 80276900
L_80276904:;
  cmps(c,0,(int32_t)c->r[0],0); // 80276904
  if (crb(c,2)) { goto L_8027694C; } // 80276908
  c->r[0]=c->r[27]+0x0000001Fu; // 8027690C
  c->r[0]=c->r[0]-c->r[3]; // 80276910
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80276914
  c->ctr=c->r[0]; // 80276918
  cmpu(c,0,c->r[3],c->r[27]); // 8027691C
  if (!crb(c,0)) { goto L_8027694C; } // 80276920
L_80276924:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 80276924
  W32(c->r[3]+0x00000004u,c->r[29]); // 80276928
  W32(c->r[3]+0x00000008u,c->r[29]); // 8027692C
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 80276930
  W32(c->r[3]+0x00000010u,c->r[29]); // 80276934
  W32(c->r[3]+0x00000014u,c->r[29]); // 80276938
  W32(c->r[3]+0x00000018u,c->r[29]); // 8027693C
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 80276940
  c->r[3]=c->r[3]+0x00000020u; // 80276944
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80276924; } // 80276948
L_8027694C:;
  c->r[0]=c->r[28]+0x00000003u; // 8027694C
  c->r[0]=c->r[0]-c->r[3]; // 80276950
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80276954
  c->ctr=c->r[0]; // 80276958
  cmpu(c,0,c->r[3],c->r[28]); // 8027695C
  if (!crb(c,0)) { goto L_80276970; } // 80276960
L_80276964:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 80276964
  c->r[3]=c->r[3]+0x00000004u; // 80276968
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80276964; } // 8027696C
L_80276970:;
  c->r[12]=R32(c->r[16]+0x00000000u); // 80276970
  c->r[3]=c->r[16]|c->r[16]; // 80276974
  c->r[5]=c->r[19]|c->r[19]; // 80276978
  c->r[4]=c->r[1]+0x00000084u; // 8027697C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80276980
  c->ctr=c->r[12]; // 80276984
  if (true) { c->lr=0x8027698Cu; dispatch(c,c->ctr); } // 80276988
  c->r[4]=c->r[31]+0x00000144u; // 8027698C
  c->r[0]=c->r[31]+0x00000040u; // 80276990
  W32(c->r[1]+0x00000018u,c->r[4]); // 80276994
  c->r[5]=c->r[3]|c->r[3]; // 80276998
  c->r[3]=c->r[1]+0x0000001Cu; // 8027699C
  c->r[4]=c->r[1]+0x00000018u; // 802769A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802769A4
  c->lr=0x802769ACu; f_8025ACE4(c); // 802769A8
L_802769AC:;
  cmps(c,0,(int32_t)c->r[17],0); // 802769AC
  if (crb(c,2)) { goto L_80276A30; } // 802769B0
  c->r[3]=c->r[17]|c->r[17]; // 802769B4
  c->r[4]=c->r[19]|c->r[19]; // 802769B8
  c->lr=0x802769C0u; f_8025B04C(c); // 802769BC
  cmps(c,0,(int32_t)c->r[3],0); // 802769C0
  if (crb(c,2)) { goto L_80276A30; } // 802769C4
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 802769C8
  c->r[30]=c->r[31]+0x000001A8u; // 802769CC
  cmps(c,0,(int32_t)c->r[0],0); // 802769D0
  if (crb(c,2)) { goto L_802769E0; } // 802769D4
  c->r[3]=c->r[31]+c->r[0]; // 802769D8
  goto L_802769E4; // 802769DC
L_802769E0:;
  c->r[3]=0u+0x00000000u; // 802769E0
L_802769E4:;
  c->r[0]=c->r[3]+0x000000A0u; // 802769E4
  c->r[3]=c->r[17]|c->r[17]; // 802769E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802769EC
  c->r[5]=c->r[19]|c->r[19]; // 802769F0
  c->r[4]=c->r[1]+0x000000C8u; // 802769F4
  c->r[12]=R32(c->r[17]+0x00000000u); // 802769F8
  c->r[12]=R32(c->r[12]+0x00000038u); // 802769FC
  c->ctr=c->r[12]; // 80276A00
  if (true) { c->lr=0x80276A08u; dispatch(c,c->ctr); } // 80276A04
  c->r[0]=R32(c->r[1]+0x00000024u); // 80276A08
  c->r[5]=c->r[3]|c->r[3]; // 80276A0C
  W32(c->r[1]+0x00000014u,c->r[30]); // 80276A10
  c->r[3]=c->r[1]+0x00000014u; // 80276A14
  c->r[4]=c->r[1]+0x00000010u; // 80276A18
  W32(c->r[1]+0x00000010u,c->r[0]); // 80276A1C
  c->lr=0x80276A24u; f_8025B7A8(c); // 80276A20
  c->r[3]=c->r[1]+0x00000024u; // 80276A24
  c->r[4]=0u+0x00000000u; // 80276A28
  c->lr=0x80276A30u; f_80253030(c); // 80276A2C
L_80276A30:;
  cmps(c,0,(int32_t)c->r[18],0); // 80276A30
  if (crb(c,2)) { goto L_80276AB4; } // 80276A34
  c->r[3]=c->r[18]|c->r[18]; // 80276A38
  c->r[4]=c->r[19]|c->r[19]; // 80276A3C
  c->lr=0x80276A44u; f_8025989C(c); // 80276A40
  cmps(c,0,(int32_t)c->r[3],0); // 80276A44
  if (crb(c,2)) { goto L_80276AB4; } // 80276A48
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80276A4C
  cmps(c,0,(int32_t)c->r[0],0); // 80276A50
  if (crb(c,2)) { goto L_80276A60; } // 80276A54
  c->r[3]=c->r[31]+c->r[0]; // 80276A58
  goto L_80276A64; // 80276A5C
L_80276A60:;
  c->r[3]=0u+0x00000000u; // 80276A60
L_80276A64:;
  c->r[0]=c->r[3]+0x00000020u; // 80276A64
  c->r[3]=c->r[18]|c->r[18]; // 80276A68
  W32(c->r[1]+0x00000020u,c->r[0]); // 80276A6C
  c->r[5]=c->r[19]|c->r[19]; // 80276A70
  c->r[30]=c->r[31]+0x000003F0u; // 80276A74
  c->r[4]=c->r[1]+0x00000028u; // 80276A78
  c->r[12]=R32(c->r[18]+0x00000000u); // 80276A7C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80276A80
  c->ctr=c->r[12]; // 80276A84
  if (true) { c->lr=0x80276A8Cu; dispatch(c,c->ctr); } // 80276A88
  c->r[0]=R32(c->r[1]+0x00000020u); // 80276A8C
  c->r[5]=c->r[3]|c->r[3]; // 80276A90
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80276A94
  c->r[3]=c->r[1]+0x0000000Cu; // 80276A98
  c->r[4]=c->r[1]+0x00000008u; // 80276A9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80276AA0
  c->lr=0x80276AA8u; f_80259F5C(c); // 80276AA4
  c->r[3]=c->r[1]+0x00000020u; // 80276AA8
  c->r[4]=0u+0x00000000u; // 80276AAC
  c->lr=0x80276AB4u; f_80253014(c); // 80276AB0
L_80276AB4:;
  c->r[19]=c->r[19]+0x00000001u; // 80276AB4
L_80276AB8:;
  c->r[0]=R32(c->r[1]+0x000001B8u); // 80276AB8
  cmpu(c,0,c->r[19],c->r[0]); // 80276ABC
  if (crb(c,0)) { IRQCHK(c); goto L_80276764; } // 80276AC0
  c->r[11]=c->r[1]+0x00000210u; // 80276AC4
  c->lr=0x80276ACCu; f_80185EEC(c); // 80276AC8
  c->r[0]=R32(c->r[1]+0x00000214u); // 80276ACC
  c->lr=c->r[0]; // 80276AD0
  c->r[1]=c->r[1]+0x00000210u; // 80276AD4
  return; // 80276AD8
}

// G3dInit__Q24nw4r3g3dFb
void f_80276ADC(Ctx* __restrict c) {
  trace_call(0x80276ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276ADC
  c->r[0]=c->lr; // 80276AE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276AE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276AE8
  c->r[31]=c->r[3]|c->r[3]; // 80276AEC
  c->r[3]=R32(c->r[13]+0xFFFF9788u); // 80276AF0
  c->lr=0x80276AF8u; f_8015AE88(c); // 80276AF4
  cmps(c,0,(int32_t)c->r[31],0); // 80276AF8
  if (crb(c,2)) { goto L_80276B08; } // 80276AFC
  c->lr=0x80276B04u; f_802A8588(c); // 80276B00
  goto L_80276B0C; // 80276B04
L_80276B08:;
  c->lr=0x80276B0Cu; f_802A85E8(c); // 80276B08
L_80276B0C:;
  c->r[3]=0u+0x00000004u; // 80276B0C
  c->r[3]=c->r[3]|0x00040000u; // 80276B10
  mtspr(c,914,c->r[3]); // 80276B14
  c->r[3]=0u+0x00000005u; // 80276B18
  c->r[3]=c->r[3]|0x00050000u; // 80276B1C
  mtspr(c,915,c->r[3]); // 80276B20
  c->r[3]=0u+0x00000006u; // 80276B24
  c->r[3]=c->r[3]|0x00060000u; // 80276B28
  mtspr(c,916,c->r[3]); // 80276B2C
  c->r[3]=0u+0x00000007u; // 80276B30
  c->r[3]=c->r[3]|0x00070000u; // 80276B34
  mtspr(c,917,c->r[3]); // 80276B38
  c->r[4]=0u+0x05070000u; // 80276B3C
  c->r[0]=c->r[4]+0x00000507u; // 80276B40
  mtspr(c,918,c->r[0]); // 80276B44
  c->r[4]=0u+0x08070000u; // 80276B48
  c->r[0]=c->r[4]+0x00000807u; // 80276B4C
  mtspr(c,919,c->r[0]); // 80276B50
  c->lr=0x80276B58u; f_8017441C(c); // 80276B54
  cmps(c,0,(int32_t)c->r[3],2); // 80276B58
  if (crb(c,2)) { goto L_80276BA4; } // 80276B5C
  if (!crb(c,0)) { goto L_80276B74; } // 80276B60
  cmps(c,0,(int32_t)c->r[3],0); // 80276B64
  if (crb(c,2)) { goto L_80276B80; } // 80276B68
  if (!crb(c,0)) { goto L_80276B8C; } // 80276B6C
  goto L_80276BB0; // 80276B70
L_80276B74:;
  cmps(c,0,(int32_t)c->r[3],5); // 80276B74
  if (crb(c,2)) { goto L_80276B98; } // 80276B78
  goto L_80276BB0; // 80276B7C
L_80276B80:;
  c->r[3]=0u+0x80330000u; // 80276B80
  c->r[3]=c->r[3]+0xFFFFFC00u; // 80276B84
  goto L_80276BB8; // 80276B88
L_80276B8C:;
  c->r[3]=0u+0x80330000u; // 80276B8C
  c->r[3]=c->r[3]+0xFFFFFCF0u; // 80276B90
  goto L_80276BB8; // 80276B94
L_80276B98:;
  c->r[3]=0u+0x80330000u; // 80276B98
  c->r[3]=c->r[3]+0xFFFFFD2Cu; // 80276B9C
  goto L_80276BB8; // 80276BA0
L_80276BA4:;
  c->r[3]=0u+0x80330000u; // 80276BA4
  c->r[3]=c->r[3]+0xFFFFFC78u; // 80276BA8
  goto L_80276BB8; // 80276BAC
L_80276BB0:;
  c->r[3]=0u+0x80330000u; // 80276BB0
  c->r[3]=c->r[3]+0xFFFFFC00u; // 80276BB4
L_80276BB8:;
  c->lr=0x80276BBCu; f_80263174(c); // 80276BB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276BBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276BC0
  c->lr=c->r[0]; // 80276BC4
  c->r[1]=c->r[1]+0x00000010u; // 80276BC8
  return; // 80276BCC
}

// G3dReset__Q24nw4r3g3dFv
void f_80276BD0(Ctx* __restrict c) {
  trace_call(0x80276BD0u);
  c->r[3]=0u+0x000007FFu; // 80276BD0
  f_80263380(c); return; // 80276BD4
}

// __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
void f_80276BD8(Ctx* __restrict c) {
  trace_call(0x80276BD8u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 80276BD8
  return; // 80276BDC
}

// Init__Q34nw4r3g3d3FogFv
void f_80276BE0(Ctx* __restrict c) {
  trace_call(0x80276BE0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80276BE0
  cmps(c,0,(int32_t)c->r[3],0); // 80276BE4
  if (crb(c,2)) return; // 80276BE8
  c->r[0]=0u+0x00000000u; // 80276BEC
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80276BF0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80276BF4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80276BF8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80276BFC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80276C00
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80276C04
  W8(c->r[3]+0x00000017u,c->r[0]); // 80276C08
  W8(c->r[3]+0x00000016u,c->r[0]); // 80276C0C
  W8(c->r[3]+0x00000015u,c->r[0]); // 80276C10
  W8(c->r[3]+0x00000014u,c->r[0]); // 80276C14
  W8(c->r[3]+0x00000018u,c->r[0]); // 80276C18
  W8(c->r[3]+0x00000019u,c->r[0]); // 80276C1C
  W16(c->r[3]+0x0000001Au,c->r[0]); // 80276C20
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 80276C24
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 80276C28
  W16(c->r[3]+0x00000020u,c->r[0]); // 80276C2C
  W16(c->r[3]+0x00000022u,c->r[0]); // 80276C30
  W16(c->r[3]+0x00000024u,c->r[0]); // 80276C34
  W16(c->r[3]+0x00000026u,c->r[0]); // 80276C38
  W16(c->r[3]+0x00000028u,c->r[0]); // 80276C3C
  W16(c->r[3]+0x0000002Au,c->r[0]); // 80276C40
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 80276C44
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 80276C48
  return; // 80276C4C
}

// CopyTo__Q34nw4r3g3d3FogCFPv
void f_80276C50(Ctx* __restrict c) {
  trace_call(0x80276C50u);
  cmps(c,0,(int32_t)c->r[4],0); // 80276C50
  if (crb(c,2)) { goto L_80276C9C; } // 80276C54
  c->r[5]=R32(c->r[3]+0x00000000u); // 80276C58
  cmps(c,0,(int32_t)c->r[5],0); // 80276C5C
  if (crb(c,2)) { goto L_80276C9C; } // 80276C60
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=RF64(ea);} // 80276C64
  c->r[3]=c->r[4]|c->r[4]; // 80276C68
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 80276C6C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=RF64(ea);} // 80276C70
  {uint32_t ea=c->r[4]+0x00000008u; WF64(ea,c->f[0]);} // 80276C74
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=RF64(ea);} // 80276C78
  {uint32_t ea=c->r[4]+0x00000010u; WF64(ea,c->f[0]);} // 80276C7C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=RF64(ea);} // 80276C80
  {uint32_t ea=c->r[4]+0x00000018u; WF64(ea,c->f[0]);} // 80276C84
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=RF64(ea);} // 80276C88
  {uint32_t ea=c->r[4]+0x00000020u; WF64(ea,c->f[0]);} // 80276C8C
  {uint32_t ea=c->r[5]+0x00000028u; c->f[0]=RF64(ea);} // 80276C90
  {uint32_t ea=c->r[4]+0x00000028u; WF64(ea,c->f[0]);} // 80276C94
  return; // 80276C98
L_80276C9C:;
  c->r[3]=0u+0x00000000u; // 80276C9C
  return; // 80276CA0
}

// SetFogRangeAdjParam__Q34nw4r3g3d3FogFUsUsRCQ34nw4r4math5MTX44
void f_80276CA4(Ctx* __restrict c) {
  trace_call(0x80276CA4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80276CA4
  cmps(c,0,(int32_t)c->r[3],0); // 80276CA8
  if (crb(c,2)) return; // 80276CAC
  W16(c->r[3]+0x0000001Au,c->r[5]); // 80276CB0
  c->r[5]=c->r[6]|c->r[6]; // 80276CB4
  c->r[3]=c->r[3]+0x0000001Cu; // 80276CB8
  f_801840BC(c); return; // 80276CBC
  return; // 80276CC0
}

// SetGP__Q34nw4r3g3d3FogCFv
void f_80276CC4(Ctx* __restrict c) {
  trace_call(0x80276CC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276CC4
  c->r[0]=c->lr; // 80276CC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80276CCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80276CD0
  c->r[31]=R32(c->r[3]+0x00000000u); // 80276CD4
  cmps(c,0,(int32_t)c->r[31],0); // 80276CD8
  if (crb(c,2)) { goto L_80276D38; } // 80276CDC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276CE0
  cmps(c,0,(int32_t)c->r[0],0); // 80276CE4
  if (crb(c,2)) { goto L_80276CFC; } // 80276CE8
  c->r[3]=R8(c->r[31]+0x00000018u); // 80276CEC
  c->r[5]=c->r[31]+0x0000001Cu; // 80276CF0
  c->r[4]=R16(c->r[31]+0x0000001Au); // 80276CF4
  c->lr=0x80276CFCu; f_8018421C(c); // 80276CF8
L_80276CFC:;
  c->r[0]=R8(c->r[31]+0x00000014u); // 80276CFC
  c->r[4]=c->r[1]+0x00000008u; // 80276D00
  W8(c->r[1]+0x00000008u,c->r[0]); // 80276D04
  c->r[0]=R8(c->r[31]+0x00000015u); // 80276D08
  W8(c->r[1]+0x00000009u,c->r[0]); // 80276D0C
  c->r[0]=R8(c->r[31]+0x00000016u); // 80276D10
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80276D14
  c->r[0]=R8(c->r[31]+0x00000017u); // 80276D18
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80276D1C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80276D20
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80276D24
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80276D28
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80276D2C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80276D30
  c->lr=0x80276D38u; f_80183E90(c); // 80276D34
L_80276D38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80276D38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80276D3C
  c->lr=c->r[0]; // 80276D40
  c->r[1]=c->r[1]+0x00000020u; // 80276D44
  return; // 80276D48
}

// Clear__Q34nw4r3g3d8LightObjFv
void f_80276D4C(Ctx* __restrict c) {
  trace_call(0x80276D4Cu);
  c->r[0]=0u+0x00000000u; // 80276D4C
  c->r[4]=0u+0x00000040u; // 80276D50
  W32(c->r[3]+0x00000000u,c->r[0]); // 80276D54
  c->r[3]=c->r[3]+0x00000004u; // 80276D58
  f_80260044(c); return; // 80276D5C
}

// InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
void f_80276D60(Ctx* __restrict c) {
  trace_call(0x80276D60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276D60
  c->r[0]=c->lr; // 80276D64
  c->r[7]=R8(c->r[4]+0x00000000u); // 80276D68
  c->r[3]=c->r[3]+0x00000004u; // 80276D6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276D70
  c->r[6]=R8(c->r[4]+0x00000001u); // 80276D74
  c->r[5]=R8(c->r[4]+0x00000002u); // 80276D78
  c->r[0]=R8(c->r[4]+0x00000003u); // 80276D7C
  c->r[4]=c->r[1]+0x00000008u; // 80276D80
  W8(c->r[1]+0x00000008u,c->r[7]); // 80276D84
  W8(c->r[1]+0x00000009u,c->r[6]); // 80276D88
  W8(c->r[1]+0x0000000Au,c->r[5]); // 80276D8C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80276D90
  c->lr=0x80276D98u; f_801820F0(c); // 80276D94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276D98
  c->lr=c->r[0]; // 80276D9C
  c->r[1]=c->r[1]+0x00000010u; // 80276DA0
  return; // 80276DA4
}

// InitLightPos__Q34nw4r3g3d8LightObjFfff
void f_80276DA8(Ctx* __restrict c) {
  trace_call(0x80276DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276DA8
  c->r[0]=c->lr; // 80276DAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276DB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276DB4
  c->r[31]=c->r[3]|c->r[3]; // 80276DB8
  c->r[3]=c->r[3]+0x00000004u; // 80276DBC
  c->lr=0x80276DC4u; f_80181F74(c); // 80276DC0
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276DC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80276DC8
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276DCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276DD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276DD4
  c->lr=c->r[0]; // 80276DD8
  c->r[1]=c->r[1]+0x00000010u; // 80276DDC
  return; // 80276DE0
}

// InitLightDir__Q34nw4r3g3d8LightObjFfff
void f_80276DE4(Ctx* __restrict c) {
  trace_call(0x80276DE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276DE4
  c->r[0]=c->lr; // 80276DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276DF0
  c->r[31]=c->r[3]|c->r[3]; // 80276DF4
  c->r[3]=c->r[3]+0x00000004u; // 80276DF8
  c->lr=0x80276E00u; f_80181FA0(c); // 80276DFC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276E00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80276E04
  c->r[0]=c->r[0]|0x00000001u; // 80276E08
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276E0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276E10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276E14
  c->lr=c->r[0]; // 80276E18
  c->r[1]=c->r[1]+0x00000010u; // 80276E1C
  return; // 80276E20
}

// InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn
void f_80276E24(Ctx* __restrict c) {
  trace_call(0x80276E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276E24
  c->r[0]=c->lr; // 80276E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276E30
  c->r[31]=c->r[3]|c->r[3]; // 80276E34
  c->r[3]=c->r[3]+0x00000004u; // 80276E38
  c->lr=0x80276E40u; f_80181D1C(c); // 80276E3C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276E40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80276E44
  c->r[0]=c->r[0]|0x00000001u; // 80276E48
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276E4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276E50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276E54
  c->lr=c->r[0]; // 80276E58
  c->r[1]=c->r[1]+0x00000010u; // 80276E5C
  return; // 80276E60
}

// InitLightAttnA__Q34nw4r3g3d8LightObjFfff
void f_80276E64(Ctx* __restrict c) {
  trace_call(0x80276E64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276E64
  c->r[0]=c->lr; // 80276E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276E6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276E70
  c->r[31]=c->r[3]|c->r[3]; // 80276E74
  c->r[3]=c->r[3]+0x00000004u; // 80276E78
  c->lr=0x80276E80u; f_80181CFC(c); // 80276E7C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276E80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80276E84
  c->r[0]=c->r[0]|0x00000001u; // 80276E88
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276E8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276E90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276E94
  c->lr=c->r[0]; // 80276E98
  c->r[1]=c->r[1]+0x00000010u; // 80276E9C
  return; // 80276EA0
}

// InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn
void f_80276EA4(Ctx* __restrict c) {
  trace_call(0x80276EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276EA4
  c->r[0]=c->lr; // 80276EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276EB0
  c->r[31]=c->r[3]|c->r[3]; // 80276EB4
  c->r[3]=c->r[3]+0x00000004u; // 80276EB8
  c->lr=0x80276EC0u; f_80181EA4(c); // 80276EBC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276EC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80276EC4
  c->r[0]=c->r[0]|0x00000001u; // 80276EC8
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276ECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276ED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276ED4
  c->lr=c->r[0]; // 80276ED8
  c->r[1]=c->r[1]+0x00000010u; // 80276EDC
  return; // 80276EE0
}

// InitLightAttnK__Q34nw4r3g3d8LightObjFfff
void f_80276EE4(Ctx* __restrict c) {
  trace_call(0x80276EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276EE4
  c->r[0]=c->lr; // 80276EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276EEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276EF0
  c->r[31]=c->r[3]|c->r[3]; // 80276EF4
  c->r[3]=c->r[3]+0x00000004u; // 80276EF8
  c->lr=0x80276F00u; f_80181D0C(c); // 80276EFC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276F00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80276F04
  c->r[0]=c->r[0]|0x00000001u; // 80276F08
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276F0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276F10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276F14
  c->lr=c->r[0]; // 80276F18
  c->r[1]=c->r[1]+0x00000010u; // 80276F1C
  return; // 80276F20
}

// InitLightAttnK__Q34nw4r3g3d8LightObjFfff_80276F24
void f_80276F24(Ctx* __restrict c) {
  trace_call(0x80276F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276F24
  c->r[0]=c->lr; // 80276F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276F30
  c->r[31]=c->r[3]|c->r[3]; // 80276F34
  c->r[3]=c->r[3]+0x00000004u; // 80276F38
  c->lr=0x80276F40u; f_80181FA0(c); // 80276F3C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276F40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80276F44
  c->r[0]=c->r[0]|0x0000000Au; // 80276F48
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276F4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276F50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276F54
  c->lr=c->r[0]; // 80276F58
  c->r[1]=c->r[1]+0x00000010u; // 80276F5C
  return; // 80276F60
}

// InitLightShininess__Q34nw4r3g3d8LightObjFf
void f_80276F64(Ctx* __restrict c) {
  trace_call(0x80276F64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276F64
  c->r[0]=c->lr; // 80276F68
  c->f[4]=c->f[1]; // 80276F6C
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80276F70
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80276F74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80276F78
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80276F7C
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80276F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80276F84
  c->r[31]=c->r[3]|c->r[3]; // 80276F88
  c->f[2]=c->f[1]; // 80276F8C
  c->r[3]=c->r[3]+0x00000004u; // 80276F90
  c->f[5]=c->f[1]; // 80276F94
  c->f[6]=c->ps1[6]=S(c->f[3]-c->f[4]); // 80276F98
  c->lr=0x80276FA0u; f_80181CE0(c); // 80276F9C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80276FA0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80276FA4
  c->r[0]=c->r[0]|0x00000002u; // 80276FA8
  W32(c->r[31]+0x00000000u,c->r[0]); // 80276FAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80276FB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80276FB4
  c->lr=c->r[0]; // 80276FB8
  c->r[1]=c->r[1]+0x00000010u; // 80276FBC
  return; // 80276FC0
}

// GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
void f_80276FC4(Ctx* __restrict c) {
  trace_call(0x80276FC4u);
  cmps(c,0,(int32_t)c->r[4],0); // 80276FC4
  if (crb(c,2)) return; // 80276FC8
  c->r[3]=c->r[3]+0x00000004u; // 80276FCC
  c->r[5]=c->r[4]+0x00000004u; // 80276FD0
  c->r[6]=c->r[4]+0x00000008u; // 80276FD4
  f_80181F84(c); return; // 80276FD8
  return; // 80276FDC
}

// GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
void f_80276FE0(Ctx* __restrict c) {
  trace_call(0x80276FE0u);
  cmps(c,0,(int32_t)c->r[4],0); // 80276FE0
  if (crb(c,2)) return; // 80276FE4
  c->r[3]=c->r[3]+0x00000004u; // 80276FE8
  c->r[5]=c->r[4]+0x00000004u; // 80276FEC
  c->r[6]=c->r[4]+0x00000008u; // 80276FF0
  f_80181FBC(c); return; // 80276FF4
  return; // 80276FF8
}

// __ct__Q34nw4r3g3d12LightSettingFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjUlPQ34nw4r3g3d12LightSetDataUl
void f_80276FFC(Ctx* __restrict c) {
  trace_call(0x80276FFCu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80276FFC
  c->r[0]=c->lr; // 80277000
  W32(c->r[1]+0x00000164u,c->r[0]); // 80277004
  c->r[11]=c->r[1]+0x00000160u; // 80277008
  c->lr=0x80277010u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027700C
  W16(c->r[3]+0x00000000u,c->r[6]); // 80277010
  c->r[31]=c->r[3]|c->r[3]; // 80277014
  c->r[10]=0u+0x00000000u; // 80277018
  c->r[9]=0u+0x00000000u; // 8027701C
  W16(c->r[3]+0x00000002u,c->r[8]); // 80277020
  c->r[6]=0u+0xFFFFFFFFu; // 80277024
  W32(c->r[3]+0x00000004u,c->r[4]); // 80277028
  W32(c->r[3]+0x00000008u,c->r[5]); // 8027702C
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 80277030
  goto L_8027706C; // 80277034
L_80277038:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80277038
  c->r[10]=c->r[10]+0x00000001u; // 8027703C
  c->r[4]=c->r[0]+c->r[9]; // 80277040
  W8(c->r[4]+0x00000008u,c->r[6]); // 80277044
  W8(c->r[9]+c->r[0],c->r[6]); // 80277048
  c->r[9]=c->r[9]+0x0000000Cu; // 8027704C
  W8(c->r[4]+0x00000001u,c->r[6]); // 80277050
  W8(c->r[4]+0x00000002u,c->r[6]); // 80277054
  W8(c->r[4]+0x00000003u,c->r[6]); // 80277058
  W8(c->r[4]+0x00000004u,c->r[6]); // 8027705C
  W8(c->r[4]+0x00000005u,c->r[6]); // 80277060
  W8(c->r[4]+0x00000006u,c->r[6]); // 80277064
  W8(c->r[4]+0x00000007u,c->r[6]); // 80277068
L_8027706C:;
  c->r[0]=R16(c->r[3]+0x00000002u); // 8027706C
  cmpu(c,0,c->r[10],c->r[0]); // 80277070
  if (crb(c,0)) { IRQCHK(c); goto L_80277038; } // 80277074
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80277078
  c->r[29]=0u+0x00000000u; // 8027707C
  c->r[6]=0u+0x00000002u; // 80277080
  c->r[0]=0u+0xFFFFFFFFu; // 80277084
  W8(c->r[4]+0x00000000u,c->r[29]); // 80277088
  c->r[4]=0u+0x00000040u; // 8027708C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80277090
  W8(c->r[5]+0x00000001u,c->r[6]); // 80277094
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80277098
  c->r[3]=c->r[1]+0x000000ECu; // 8027709C
  W8(c->r[5]+0x00000008u,c->r[0]); // 802770A0
  c->r[11]=R8(c->r[2]+0xFFFF9DD4u); // 802770A4
  c->r[10]=R8(c->r[2]+0xFFFF9DD5u); // 802770A8
  c->r[9]=R8(c->r[2]+0xFFFF9DD6u); // 802770AC
  c->r[8]=R8(c->r[2]+0xFFFF9DD7u); // 802770B0
  c->r[7]=R8(c->r[2]+0xFFFF9DD8u); // 802770B4
  c->r[6]=R8(c->r[2]+0xFFFF9DD9u); // 802770B8
  c->r[5]=R8(c->r[2]+0xFFFF9DDAu); // 802770BC
  c->r[0]=R8(c->r[2]+0xFFFF9DDBu); // 802770C0
  W8(c->r[1]+0x00000018u,c->r[11]); // 802770C4
  W8(c->r[1]+0x00000019u,c->r[10]); // 802770C8
  W8(c->r[1]+0x0000001Au,c->r[9]); // 802770CC
  W8(c->r[1]+0x0000001Bu,c->r[8]); // 802770D0
  W8(c->r[1]+0x00000014u,c->r[7]); // 802770D4
  W8(c->r[1]+0x00000015u,c->r[6]); // 802770D8
  W8(c->r[1]+0x00000016u,c->r[5]); // 802770DC
  W8(c->r[1]+0x00000017u,c->r[0]); // 802770E0
  W32(c->r[1]+0x000000A4u,c->r[29]); // 802770E4
  W32(c->r[1]+0x00000060u,c->r[29]); // 802770E8
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 802770EC
  W32(c->r[1]+0x000000E8u,c->r[29]); // 802770F0
  c->lr=0x802770F8u; f_80260044(c); // 802770F4
  W32(c->r[1]+0x000000A4u,c->r[29]); // 802770F8
  c->r[3]=c->r[1]+0x000000A8u; // 802770FC
  c->r[4]=0u+0x00000040u; // 80277100
  c->lr=0x80277108u; f_80260044(c); // 80277104
  W32(c->r[1]+0x00000060u,c->r[29]); // 80277108
  c->r[3]=c->r[1]+0x00000064u; // 8027710C
  c->r[4]=0u+0x00000040u; // 80277110
  c->lr=0x80277118u; f_80260044(c); // 80277114
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 80277118
  c->r[3]=c->r[1]+0x00000020u; // 8027711C
  c->r[4]=0u+0x00000040u; // 80277120
  c->lr=0x80277128u; f_80260044(c); // 80277124
  c->r[0]=R32(c->r[1]+0x00000018u); // 80277128
  c->r[3]=c->r[1]+0x000000ECu; // 8027712C
  c->r[4]=c->r[1]+0x00000010u; // 80277130
  W32(c->r[1]+0x00000010u,c->r[0]); // 80277134
  c->lr=0x8027713Cu; f_801820F0(c); // 80277138
  {uint32_t ea=c->r[2]+0xFFFF9DDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027713C
  c->r[3]=c->r[1]+0x000000ECu; // 80277140
  c->f[2]=c->f[1]; // 80277144
  c->f[3]=c->f[1]; // 80277148
  c->lr=0x80277150u; f_80181F74(c); // 8027714C
  c->r[0]=R32(c->r[1]+0x000000E8u); // 80277150
  c->r[3]=c->r[1]+0x000000ECu; // 80277154
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80277158
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8027715C
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277160
  c->f[3]=c->f[1]; // 80277164
  W32(c->r[1]+0x000000E8u,c->r[0]); // 80277168
  c->lr=0x80277170u; f_80181FA0(c); // 8027716C
  c->r[0]=R32(c->r[1]+0x000000E8u); // 80277170
  c->r[3]=c->r[1]+0x000000ECu; // 80277174
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80277178
  c->r[4]=0u+0x00000000u; // 8027717C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80277180
  c->r[0]=c->r[0]|0x00000001u; // 80277184
  W32(c->r[1]+0x000000E8u,c->r[0]); // 80277188
  c->lr=0x80277190u; f_80181D1C(c); // 8027718C
  c->r[0]=R32(c->r[1]+0x000000E8u); // 80277190
  c->r[3]=c->r[1]+0x000000ECu; // 80277194
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80277198
  c->r[4]=0u+0x00000000u; // 8027719C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 802771A0
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802771A4
  c->r[0]=c->r[0]|0x00000001u; // 802771A8
  W32(c->r[1]+0x000000E8u,c->r[0]); // 802771AC
  c->lr=0x802771B4u; f_80181EA4(c); // 802771B0
  c->r[5]=R32(c->r[1]+0x000000E8u); // 802771B4
  c->r[3]=c->r[1]+0x000000A8u; // 802771B8
  c->r[0]=R32(c->r[1]+0x00000018u); // 802771BC
  c->r[4]=c->r[1]+0x0000000Cu; // 802771C0
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 802771C4
  c->r[5]=c->r[5]|0x00000005u; // 802771C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802771CC
  W32(c->r[1]+0x000000E8u,c->r[5]); // 802771D0
  c->lr=0x802771D8u; f_801820F0(c); // 802771D4
  {uint32_t ea=c->r[2]+0xFFFF9DDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802771D8
  c->r[3]=c->r[1]+0x000000A8u; // 802771DC
  c->f[2]=c->f[1]; // 802771E0
  c->f[3]=c->f[1]; // 802771E4
  c->lr=0x802771ECu; f_80181F74(c); // 802771E8
  c->r[5]=R32(c->r[1]+0x000000A4u); // 802771EC
  c->r[3]=c->r[1]+0x00000064u; // 802771F0
  c->r[0]=R32(c->r[1]+0x00000018u); // 802771F4
  c->r[4]=c->r[1]+0x00000008u; // 802771F8
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 802771FC
  c->r[5]=c->r[5]|0x00000004u; // 80277200
  W32(c->r[1]+0x00000008u,c->r[0]); // 80277204
  W32(c->r[1]+0x000000A4u,c->r[5]); // 80277208
  c->lr=0x80277210u; f_801820F0(c); // 8027720C
  {uint32_t ea=c->r[2]+0xFFFF9DDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80277210
  c->r[3]=c->r[1]+0x00000064u; // 80277214
  c->f[2]=c->f[1]; // 80277218
  c->f[3]=c->f[1]; // 8027721C
  c->lr=0x80277224u; f_80181F74(c); // 80277220
  c->r[0]=R32(c->r[1]+0x00000060u); // 80277224
  c->r[3]=c->r[1]+0x00000064u; // 80277228
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027722C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80277230
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277234
  c->f[3]=c->f[1]; // 80277238
  W32(c->r[1]+0x00000060u,c->r[0]); // 8027723C
  c->lr=0x80277244u; f_80181FA0(c); // 80277240
  c->r[0]=R32(c->r[1]+0x00000060u); // 80277244
  c->r[3]=c->r[1]+0x00000064u; // 80277248
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027724C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80277250
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80277254
  c->r[0]=c->r[0]|0x0000000Au; // 80277258
  c->f[2]=c->f[1]; // 8027725C
  c->f[5]=c->f[1]; // 80277260
  W32(c->r[1]+0x00000060u,c->r[0]); // 80277264
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[4]=c->ps1[4]=RF32(ea);} // 80277268
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[6]=c->ps1[6]=RF32(ea);} // 8027726C
  c->lr=0x80277274u; f_80181CE0(c); // 80277270
  c->r[3]=R32(c->r[1]+0x00000060u); // 80277274
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80277278
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFEu; // 8027727C
  c->r[3]=c->r[3]|0x00000006u; // 80277280
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80277284
  W32(c->r[1]+0x00000060u,c->r[3]); // 80277288
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8027728C
  c->r[0]=R16(c->r[31]+0x00000000u); // 80277290
  cmps(c,0,(int32_t)c->r[0],0); // 80277294
  if (crb(c,2)) { goto L_802772E8; } // 80277298
  c->r[6]=R32(c->r[31]+0x00000004u); // 8027729C
  c->r[0]=c->r[1]+0x000000E8u; // 802772A0
  cmpu(c,0,c->r[6],c->r[0]); // 802772A4
  if (crb(c,2)) { goto L_802772C4; } // 802772A8
  c->r[0]=R32(c->r[1]+0x000000E8u); // 802772AC
  c->r[3]=c->r[6]+0x00000004u; // 802772B0
  c->r[4]=c->r[1]+0x000000ECu; // 802772B4
  c->r[5]=0u+0x00000040u; // 802772B8
  W32(c->r[6]+0x00000000u,c->r[0]); // 802772BC
  c->lr=0x802772C4u; f_8025FF68(c); // 802772C0
L_802772C4:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 802772C4
  c->r[3]=R8(c->r[1]+0x00000014u); // 802772C8
  c->r[0]=R8(c->r[1]+0x00000015u); // 802772CC
  W8(c->r[4]+0x00000000u,c->r[3]); // 802772D0
  c->r[3]=R8(c->r[1]+0x00000016u); // 802772D4
  W8(c->r[4]+0x00000001u,c->r[0]); // 802772D8
  c->r[0]=R8(c->r[1]+0x00000017u); // 802772DC
  W8(c->r[4]+0x00000002u,c->r[3]); // 802772E0
  W8(c->r[4]+0x00000003u,c->r[0]); // 802772E4
L_802772E8:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 802772E8
  cmpu(c,0,c->r[0],0x00000001u); // 802772EC
  if (!crb(c,1)) { goto L_80277344; } // 802772F0
  c->r[3]=R32(c->r[31]+0x00000004u); // 802772F4
  c->r[0]=c->r[1]+0x000000A4u; // 802772F8
  c->r[6]=c->r[3]+0x00000044u; // 802772FC
  cmpu(c,0,c->r[6],c->r[0]); // 80277300
  if (crb(c,2)) { goto L_80277320; } // 80277304
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80277308
  c->r[3]=c->r[6]+0x00000004u; // 8027730C
  c->r[4]=c->r[1]+0x000000A8u; // 80277310
  c->r[5]=0u+0x00000040u; // 80277314
  W32(c->r[6]+0x00000000u,c->r[0]); // 80277318
  c->lr=0x80277320u; f_8025FF68(c); // 8027731C
L_80277320:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 80277320
  c->r[3]=R8(c->r[1]+0x00000014u); // 80277324
  c->r[0]=R8(c->r[1]+0x00000015u); // 80277328
  W8(c->r[4]+0x00000004u,c->r[3]); // 8027732C
  c->r[3]=R8(c->r[1]+0x00000016u); // 80277330
  W8(c->r[4]+0x00000005u,c->r[0]); // 80277334
  c->r[0]=R8(c->r[1]+0x00000017u); // 80277338
  W8(c->r[4]+0x00000006u,c->r[3]); // 8027733C
  W8(c->r[4]+0x00000007u,c->r[0]); // 80277340
L_80277344:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 80277344
  cmpu(c,0,c->r[0],0x00000002u); // 80277348
  if (!crb(c,1)) { goto L_802773A0; } // 8027734C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80277350
  c->r[0]=c->r[1]+0x00000060u; // 80277354
  c->r[6]=c->r[3]+0x00000088u; // 80277358
  cmpu(c,0,c->r[6],c->r[0]); // 8027735C
  if (crb(c,2)) { goto L_8027737C; } // 80277360
  c->r[0]=R32(c->r[1]+0x00000060u); // 80277364
  c->r[3]=c->r[6]+0x00000004u; // 80277368
  c->r[4]=c->r[1]+0x00000064u; // 8027736C
  c->r[5]=0u+0x00000040u; // 80277370
  W32(c->r[6]+0x00000000u,c->r[0]); // 80277374
  c->lr=0x8027737Cu; f_8025FF68(c); // 80277378
L_8027737C:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 8027737C
  c->r[3]=R8(c->r[1]+0x00000014u); // 80277380
  c->r[0]=R8(c->r[1]+0x00000015u); // 80277384
  W8(c->r[4]+0x00000008u,c->r[3]); // 80277388
  c->r[3]=R8(c->r[1]+0x00000016u); // 8027738C
  W8(c->r[4]+0x00000009u,c->r[0]); // 80277390
  c->r[0]=R8(c->r[1]+0x00000017u); // 80277394
  W8(c->r[4]+0x0000000Au,c->r[3]); // 80277398
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 8027739C
L_802773A0:;
  c->r[26]=R8(c->r[1]+0x00000015u); // 802773A0
  c->r[29]=c->r[1]+0x0000001Cu; // 802773A4
  c->r[25]=R8(c->r[1]+0x00000016u); // 802773A8
  c->r[23]=0u+0x00000003u; // 802773AC
  c->r[24]=R8(c->r[1]+0x00000017u); // 802773B0
  c->r[28]=0u+0x000000CCu; // 802773B4
  c->r[30]=R8(c->r[1]+0x00000014u); // 802773B8
  c->r[27]=0u+0x0000000Cu; // 802773BC
  goto L_80277410; // 802773C0
L_802773C4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 802773C4
  c->r[6]=c->r[0]+c->r[28]; // 802773C8
  cmpu(c,0,c->r[6],c->r[29]); // 802773CC
  if (crb(c,2)) { goto L_802773EC; } // 802773D0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 802773D4
  c->r[3]=c->r[6]+0x00000004u; // 802773D8
  c->r[4]=c->r[1]+0x00000020u; // 802773DC
  c->r[5]=0u+0x00000040u; // 802773E0
  W32(c->r[6]+0x00000000u,c->r[0]); // 802773E4
  c->lr=0x802773ECu; f_8025FF68(c); // 802773E8
L_802773EC:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 802773EC
  c->r[28]=c->r[28]+0x00000044u; // 802773F0
  c->r[23]=c->r[23]+0x00000001u; // 802773F4
  W8(c->r[27]+c->r[0],c->r[30]); // 802773F8
  c->r[3]=c->r[0]+c->r[27]; // 802773FC
  c->r[27]=c->r[27]+0x00000004u; // 80277400
  W8(c->r[3]+0x00000001u,c->r[26]); // 80277404
  W8(c->r[3]+0x00000002u,c->r[25]); // 80277408
  W8(c->r[3]+0x00000003u,c->r[24]); // 8027740C
L_80277410:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 80277410
  cmpu(c,0,c->r[23],c->r[0]); // 80277414
  if (crb(c,0)) { IRQCHK(c); goto L_802773C4; } // 80277418
  c->r[11]=c->r[1]+0x00000160u; // 8027741C
  c->r[3]=c->r[31]|c->r[31]; // 80277420
  c->lr=0x80277428u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80277424
  c->r[0]=R32(c->r[1]+0x00000164u); // 80277428
  c->lr=c->r[0]; // 8027742C
  c->r[1]=c->r[1]+0x00000160u; // 80277430
  return; // 80277434
}

// Import__Q34nw4r3g3d12LightSettingFRCQ34nw4r3g3d12LightSetting
void f_80277438(Ctx* __restrict c) {
  trace_call(0x80277438u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80277438
  c->r[0]=c->lr; // 8027743C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80277440
  c->r[11]=c->r[1]+0x00000020u; // 80277444
  c->lr=0x8027744Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80277448
  c->r[5]=R16(c->r[3]+0x00000000u); // 8027744C
  c->r[27]=c->r[3]|c->r[3]; // 80277450
  c->r[0]=R16(c->r[4]+0x00000000u); // 80277454
  c->r[28]=c->r[4]|c->r[4]; // 80277458
  cmpu(c,0,c->r[5],c->r[0]); // 8027745C
  if (crb(c,0)) { goto L_80277474; } // 80277460
  c->r[3]=R16(c->r[3]+0x00000002u); // 80277464
  c->r[0]=R16(c->r[4]+0x00000002u); // 80277468
  cmpu(c,0,c->r[3],c->r[0]); // 8027746C
  if (!crb(c,0)) { goto L_8027747C; } // 80277470
L_80277474:;
  c->r[3]=0u+0x00000000u; // 80277474
  goto L_802775B0; // 80277478
L_8027747C:;
  c->r[29]=0u+0x00000000u; // 8027747C
  c->r[31]=0u+0x00000000u; // 80277480
  c->r[30]=0u+0x00000000u; // 80277484
  goto L_80277510; // 80277488
L_8027748C:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8027748C
  c->r[3]=R32(c->r[31]+c->r[0]); // 80277490
  c->r[5]=c->r[0]+c->r[31]; // 80277494
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80277498
  if (crb(c,2)) { goto L_802774C8; } // 8027749C
  c->r[0]=R32(c->r[27]+0x00000004u); // 802774A0
  c->r[4]=c->r[0]+c->r[31]; // 802774A4
  cmpu(c,0,c->r[4],c->r[5]); // 802774A8
  if (crb(c,2)) { goto L_802774D8; } // 802774AC
  W32(c->r[4]+0x00000000u,c->r[3]); // 802774B0
  c->r[3]=c->r[4]+0x00000004u; // 802774B4
  c->r[4]=c->r[5]+0x00000004u; // 802774B8
  c->r[5]=0u+0x00000040u; // 802774BC
  c->lr=0x802774C4u; f_8025FF68(c); // 802774C0
  goto L_802774D8; // 802774C4
L_802774C8:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 802774C8
  c->r[0]=R32(c->r[3]+c->r[31]); // 802774CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802774D0
  W32(c->r[3]+c->r[31],c->r[0]); // 802774D4
L_802774D8:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 802774D8
  c->r[31]=c->r[31]+0x00000044u; // 802774DC
  c->r[3]=R32(c->r[27]+0x00000008u); // 802774E0
  c->r[29]=c->r[29]+0x00000001u; // 802774E4
  c->r[4]=c->r[0]+c->r[30]; // 802774E8
  c->r[0]=R8(c->r[30]+c->r[0]); // 802774EC
  {uint32_t ea=c->r[3]+c->r[30]; W8(ea,c->r[0]); c->r[3]=ea;} // 802774F0
  c->r[30]=c->r[30]+0x00000004u; // 802774F4
  c->r[0]=R8(c->r[4]+0x00000001u); // 802774F8
  W8(c->r[3]+0x00000001u,c->r[0]); // 802774FC
  c->r[0]=R8(c->r[4]+0x00000002u); // 80277500
  W8(c->r[3]+0x00000002u,c->r[0]); // 80277504
  c->r[0]=R8(c->r[4]+0x00000003u); // 80277508
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027750C
L_80277510:;
  c->r[0]=R16(c->r[28]+0x00000000u); // 80277510
  cmpu(c,0,c->r[29],c->r[0]); // 80277514
  if (crb(c,0)) { IRQCHK(c); goto L_8027748C; } // 80277518
  c->r[7]=0u+0x00000000u; // 8027751C
  c->r[6]=0u+0x00000000u; // 80277520
  goto L_802775A0; // 80277524
L_80277528:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80277528
  c->r[7]=c->r[7]+0x00000001u; // 8027752C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80277530
  c->r[5]=c->r[3]+c->r[6]; // 80277534
  c->r[3]=R8(c->r[3]+c->r[6]); // 80277538
  c->r[4]=c->r[0]+c->r[6]; // 8027753C
  c->r[0]=R8(c->r[5]+0x00000001u); // 80277540
  c->r[6]=c->r[6]+0x0000000Cu; // 80277544
  W8(c->r[4]+0x00000000u,c->r[3]); // 80277548
  W8(c->r[4]+0x00000001u,c->r[0]); // 8027754C
  c->r[3]=R8(c->r[5]+0x00000002u); // 80277550
  c->r[0]=R8(c->r[5]+0x00000003u); // 80277554
  W8(c->r[4]+0x00000002u,c->r[3]); // 80277558
  W8(c->r[4]+0x00000003u,c->r[0]); // 8027755C
  c->r[3]=R8(c->r[5]+0x00000004u); // 80277560
  c->r[0]=R8(c->r[5]+0x00000005u); // 80277564
  W8(c->r[4]+0x00000004u,c->r[3]); // 80277568
  W8(c->r[4]+0x00000005u,c->r[0]); // 8027756C
  c->r[3]=R8(c->r[5]+0x00000006u); // 80277570
  c->r[0]=R8(c->r[5]+0x00000007u); // 80277574
  W8(c->r[4]+0x00000006u,c->r[3]); // 80277578
  W8(c->r[4]+0x00000007u,c->r[0]); // 8027757C
  c->r[0]=R8(c->r[5]+0x00000008u); // 80277580
  W8(c->r[4]+0x00000008u,c->r[0]); // 80277584
  c->r[0]=R8(c->r[5]+0x00000009u); // 80277588
  W8(c->r[4]+0x00000009u,c->r[0]); // 8027758C
  c->r[0]=R8(c->r[5]+0x0000000Au); // 80277590
  W8(c->r[4]+0x0000000Au,c->r[0]); // 80277594
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 80277598
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 8027759C
L_802775A0:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 802775A0
  cmpu(c,0,c->r[7],c->r[0]); // 802775A4
  if (crb(c,0)) { IRQCHK(c); goto L_80277528; } // 802775A8
  c->r[3]=0u+0x00000001u; // 802775AC
L_802775B0:;
  c->r[11]=c->r[1]+0x00000020u; // 802775B0
  c->lr=0x802775B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802775B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802775B8
  c->lr=c->r[0]; // 802775BC
  c->r[1]=c->r[1]+0x00000020u; // 802775C0
  return; // 802775C4
}

// ApplyViewMtx__Q34nw4r3g3d12LightSettingFRCQ34nw4r4math5MTX34Ul
void f_802775C8(Ctx* __restrict c) {
  trace_call(0x802775C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802775C8
  c->r[0]=c->lr; // 802775CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802775D0
  c->r[11]=c->r[1]+0x00000040u; // 802775D4
  c->lr=0x802775DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802775D8
  W32(c->r[1]+0x00000008u,c->r[5]); // 802775DC
  c->r[28]=c->r[4]|c->r[4]; // 802775E0
  c->r[27]=c->r[3]|c->r[3]; // 802775E4
  c->r[4]=c->r[1]+0x00000008u; // 802775E8
  c->r[0]=R16(c->r[3]+0x00000000u); // 802775EC
  cmpu(c,0,c->r[5],c->r[0]); // 802775F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802775F4
  if (!crb(c,0)) { goto L_80277600; } // 802775F8
  c->r[4]=c->r[1]+0x0000000Cu; // 802775FC
L_80277600:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80277600
  c->r[29]=0u+0x00000000u; // 80277604
  c->r[31]=0u+0x00000000u; // 80277608
  W32(c->r[1]+0x00000008u,c->r[0]); // 8027760C
  goto L_802776C4; // 80277610
L_80277614:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 80277614
  c->r[30]=c->r[0]+c->r[31]; // 80277618
  c->r[0]=R32(c->r[31]+c->r[0]); // 8027761C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80277620
  if (crb(c,2)) { goto L_802776BC; } // 80277624
  c->r[3]=c->r[30]+0x00000004u; // 80277628
  c->r[4]=c->r[1]+0x00000010u; // 8027762C
  c->r[5]=c->r[1]+0x00000014u; // 80277630
  c->r[6]=c->r[1]+0x00000018u; // 80277634
  c->lr=0x8027763Cu; f_80181FBC(c); // 80277638
  c->r[3]=c->r[1]+0x00000010u; // 8027763C
  c->r[4]=c->r[28]|c->r[28]; // 80277640
  c->r[5]=c->r[3]|c->r[3]; // 80277644
  c->lr=0x8027764Cu; f_80284C60(c); // 80277648
  c->r[0]=R32(c->r[30]+0x00000000u); // 8027764C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80277650
  if (crb(c,2)) { goto L_80277670; } // 80277654
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80277658
  c->r[3]=c->r[30]+0x00000004u; // 8027765C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277660
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80277664
  c->lr=0x8027766Cu; f_80181FE4(c); // 80277668
  goto L_802776BC; // 8027766C
L_80277670:;
  c->r[3]=c->r[30]+0x00000004u; // 80277670
  c->r[4]=c->r[1]+0x0000001Cu; // 80277674
  c->r[5]=c->r[1]+0x00000020u; // 80277678
  c->r[6]=c->r[1]+0x00000024u; // 8027767C
  c->lr=0x80277684u; f_80181F84(c); // 80277680
  c->r[4]=c->r[1]+0x0000001Cu; // 80277684
  c->r[3]=c->r[28]|c->r[28]; // 80277688
  c->r[5]=c->r[4]|c->r[4]; // 8027768C
  c->lr=0x80277694u; f_80168AE8(c); // 80277690
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80277694
  c->r[3]=c->r[30]+0x00000004u; // 80277698
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027769C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 802776A0
  c->lr=0x802776A8u; f_80181F74(c); // 802776A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802776A8
  c->r[3]=c->r[30]+0x00000004u; // 802776AC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802776B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 802776B4
  c->lr=0x802776BCu; f_80181FA0(c); // 802776B8
L_802776BC:;
  c->r[31]=c->r[31]+0x00000044u; // 802776BC
  c->r[29]=c->r[29]+0x00000001u; // 802776C0
L_802776C4:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 802776C4
  cmpu(c,0,c->r[29],c->r[0]); // 802776C8
  if (crb(c,0)) { IRQCHK(c); goto L_80277614; } // 802776CC
  c->r[11]=c->r[1]+0x00000040u; // 802776D0
  c->lr=0x802776D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802776D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802776D8
  c->lr=c->r[0]; // 802776DC
  c->r[1]=c->r[1]+0x00000040u; // 802776E0
  return; // 802776E4
}

// GetAmbLightObj__Q34nw4r3g3d8LightSetFv
void f_802776E8(Ctx* __restrict c) {
  trace_call(0x802776E8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 802776E8
  c->r[4]=0u+0x00000000u; // 802776EC
  cmps(c,0,(int32_t)c->r[5],0); // 802776F0
  if (crb(c,2)) { goto L_80277708; } // 802776F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 802776F8
  cmps(c,0,(int32_t)c->r[0],0); // 802776FC
  if (crb(c,2)) { goto L_80277708; } // 80277700
  c->r[4]=0u+0x00000001u; // 80277704
L_80277708:;
  cmps(c,0,(int32_t)c->r[4],0); // 80277708
  if (crb(c,2)) { goto L_80277730; } // 8027770C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80277710
  c->r[0]=R8(c->r[3]+0x00000008u); // 80277714
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80277718
  if (crb(c,0)) { goto L_80277730; } // 8027771C
  c->r[3]=R32(c->r[5]+0x00000008u); // 80277720
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80277724
  c->r[3]=c->r[3]+c->r[0]; // 80277728
  return; // 8027772C
L_80277730:;
  c->r[3]=0u+0x00000000u; // 80277730
  return; // 80277734
}

// SelectLightObj__Q34nw4r3g3d8LightSetFUli
void f_80277738(Ctx* __restrict c) {
  trace_call(0x80277738u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 80277738
  c->r[6]=0u+0x00000000u; // 8027773C
  cmps(c,0,(int32_t)c->r[7],0); // 80277740
  if (crb(c,2)) { goto L_80277758; } // 80277744
  c->r[0]=R32(c->r[3]+0x00000004u); // 80277748
  cmps(c,0,(int32_t)c->r[0],0); // 8027774C
  if (crb(c,2)) { goto L_80277758; } // 80277750
  c->r[6]=0u+0x00000001u; // 80277754
L_80277758:;
  cmps(c,0,(int32_t)c->r[6],0); // 80277758
  if (crb(c,2)) { goto L_802777A0; } // 8027775C
  cmpu(c,0,c->r[4],0x00000008u); // 80277760
  if (!crb(c,0)) { goto L_802777A0; } // 80277764
  cmps(c,0,(int32_t)c->r[5],0); // 80277768
  if (!crb(c,0)) { goto L_80277784; } // 8027776C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80277770
  c->r[0]=0u+0xFFFFFFFFu; // 80277774
  c->r[3]=0u+0x00000001u; // 80277778
  W8(c->r[5]+c->r[4],c->r[0]); // 8027777C
  return; // 80277780
L_80277784:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 80277784
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80277788
  if (!crb(c,0)) { goto L_802777A0; } // 8027778C
  c->r[6]=R32(c->r[3]+0x00000004u); // 80277790
  c->r[3]=0u+0x00000001u; // 80277794
  W8(c->r[6]+c->r[4],c->r[5]); // 80277798
  return; // 8027779C
L_802777A0:;
  c->r[3]=0u+0x00000000u; // 802777A0
  return; // 802777A4
}

// SelectAmbLightObj__Q34nw4r3g3d8LightSetFi
void f_802777A8(Ctx* __restrict c) {
  trace_call(0x802777A8u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 802777A8
  c->r[5]=0u+0x00000000u; // 802777AC
  cmps(c,0,(int32_t)c->r[6],0); // 802777B0
  if (crb(c,2)) { goto L_802777C8; } // 802777B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 802777B8
  cmps(c,0,(int32_t)c->r[0],0); // 802777BC
  if (crb(c,2)) { goto L_802777C8; } // 802777C0
  c->r[5]=0u+0x00000001u; // 802777C4
L_802777C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802777C8
  if (crb(c,2)) { goto L_80277808; } // 802777CC
  cmps(c,0,(int32_t)c->r[4],0); // 802777D0
  if (!crb(c,0)) { goto L_802777EC; } // 802777D4
  c->r[4]=R32(c->r[3]+0x00000004u); // 802777D8
  c->r[0]=0u+0xFFFFFFFFu; // 802777DC
  c->r[3]=0u+0x00000001u; // 802777E0
  W8(c->r[4]+0x00000008u,c->r[0]); // 802777E4
  return; // 802777E8
L_802777EC:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 802777EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802777F0
  if (!crb(c,0)) { goto L_80277808; } // 802777F4
  c->r[5]=R32(c->r[3]+0x00000004u); // 802777F8
  c->r[3]=0u+0x00000001u; // 802777FC
  W8(c->r[5]+0x00000008u,c->r[4]); // 80277800
  return; // 80277804
L_80277808:;
  c->r[3]=0u+0x00000000u; // 80277808
  return; // 8027780C
}

// CalcVtx__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjShpPPQ34nw4r3g3d13ResVtxPosDataPPQ34nw4r3g3d13ResVtxNrmDataPPQ34nw4r3g3d13ResVtxClrData
void f_80277810(Ctx* __restrict c) {
  trace_call(0x80277810u);
  {uint32_t ea=c->r[1]+0xFFFFFA50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80277810
  c->r[0]=c->lr; // 80277814
  W32(c->r[1]+0x000005B4u,c->r[0]); // 80277818
  {uint32_t ea=c->r[1]+0x000005A0u; WF64(ea,c->f[31]);} // 8027781C
  {uint32_t ea=c->r[1]+0x000005A8u; psq_store(c,31,ea,0,0);} // 80277820
  c->r[11]=c->r[1]+0x000005A0u; // 80277824
  c->lr=0x8027782Cu; f_80185EA0(c); // 80277828
  c->r[26]=c->r[4]|c->r[4]; // 8027782C
  c->r[27]=c->r[5]|c->r[5]; // 80277830
  c->r[28]=c->r[6]|c->r[6]; // 80277834
  c->r[29]=c->r[7]|c->r[7]; // 80277838
  c->lr=0x80277840u; f_8025167C(c); // 8027783C
  c->r[14]=c->r[1]+0x00000368u; // 80277840
  c->r[24]=c->r[1]+0x00000558u; // 80277844
  c->r[4]=c->r[24]-c->r[14]; // 80277848
  c->r[23]=c->r[3]|c->r[3]; // 8027784C
  c->r[5]=c->r[4]+0x0000000Fu; // 80277850
  {uint32_t ea=c->r[2]+0xFFFF9DF8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80277854
  c->r[0]=sraw(c,c->r[5],4); // 80277858
  c->r[20]=rotl(c->r[4],0)&0x80000000u; // 8027785C
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80277860
  c->r[19]=rotl(c->r[5],0)&0x80000000u; // 80277864
  c->r[21]=c->r[3]+0x00000001u; // 80277868
  c->r[22]=c->r[1]+0x000004D8u; // 8027786C
  c->r[18]=rotl(c->r[3],0)&0x80000000u; // 80277870
  c->r[31]=0u+0x00000000u; // 80277874
  c->r[17]=rotl(c->r[21],0)&0x80000000u; // 80277878
  c->r[25]=0u+0x00000000u; // 8027787C
  goto L_80277FE0; // 80277880
L_80277884:;
  c->r[3]=c->r[26]|c->r[26]; // 80277884
  c->r[4]=c->r[31]|c->r[31]; // 80277888
  c->lr=0x80277890u; f_8025D9C0(c); // 8027788C
  cmps(c,0,(int32_t)c->r[3],0); // 80277890
  if (crb(c,2)) { goto L_80277FD8; } // 80277894
  c->r[3]=c->r[1]+0x00000368u; // 80277898
  W32(c->r[1]+0x00000348u,c->r[25]); // 8027789C
  cmpu(c,0,c->r[3],c->r[24]); // 802778A0
  W32(c->r[1]+0x0000034Cu,c->r[25]); // 802778A4
  W32(c->r[1]+0x00000350u,c->r[25]); // 802778A8
  W32(c->r[1]+0x00000358u,c->r[25]); // 802778AC
  W32(c->r[1]+0x0000035Cu,c->r[25]); // 802778B0
  W32(c->r[1]+0x00000360u,c->r[25]); // 802778B4
  if (!crb(c,0)) { goto L_802779D8; } // 802778B8
  cmps(c,0,(int32_t)c->r[21],8); // 802778BC
  if (!crb(c,1)) { goto L_802779AC; } // 802778C0
  cmpu(c,0,c->r[14],c->r[24]); // 802778C4
  c->r[0]=0u+0x00000000u; // 802778C8
  c->r[4]=0u+0x00000000u; // 802778CC
  if (crb(c,1)) { goto L_802778F8; } // 802778D0
  cmps(c,0,(int32_t)c->r[20],0); // 802778D4
  c->r[5]=0u+0x00000001u; // 802778D8
  if (!crb(c,2)) { goto L_802778EC; } // 802778DC
  cmps(c,0,(int32_t)c->r[19],0); // 802778E0
  if (crb(c,2)) { goto L_802778EC; } // 802778E4
  c->r[5]=0u+0x00000000u; // 802778E8
L_802778EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802778EC
  if (crb(c,2)) { goto L_802778F8; } // 802778F0
  c->r[4]=0u+0x00000001u; // 802778F4
L_802778F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802778F8
  if (crb(c,2)) { goto L_80277924; } // 802778FC
  cmps(c,0,(int32_t)c->r[18],0); // 80277900
  c->r[4]=0u+0x00000001u; // 80277904
  if (!crb(c,2)) { goto L_80277918; } // 80277908
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[17]); // 8027790C
  if (crb(c,2)) { goto L_80277918; } // 80277910
  c->r[4]=0u+0x00000000u; // 80277914
L_80277918:;
  cmps(c,0,(int32_t)c->r[4],0); // 80277918
  if (crb(c,2)) { goto L_80277924; } // 8027791C
  c->r[0]=0u+0x00000001u; // 80277920
L_80277924:;
  cmps(c,0,(int32_t)c->r[0],0); // 80277924
  if (crb(c,2)) { goto L_802779AC; } // 80277928
  c->r[0]=c->r[22]+0x0000007Fu; // 8027792C
  c->r[0]=c->r[0]-c->r[3]; // 80277930
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 80277934
  c->ctr=c->r[0]; // 80277938
  cmpu(c,0,c->r[3],c->r[22]); // 8027793C
  if (!crb(c,0)) { goto L_802779AC; } // 80277940
L_80277944:;
  W32(c->r[3]+0x00000000u,c->r[25]); // 80277944
  W32(c->r[3]+0x00000004u,c->r[25]); // 80277948
  W32(c->r[3]+0x00000008u,c->r[25]); // 8027794C
  W32(c->r[3]+0x00000010u,c->r[25]); // 80277950
  W32(c->r[3]+0x00000014u,c->r[25]); // 80277954
  W32(c->r[3]+0x00000018u,c->r[25]); // 80277958
  W32(c->r[3]+0x00000020u,c->r[25]); // 8027795C
  W32(c->r[3]+0x00000024u,c->r[25]); // 80277960
  W32(c->r[3]+0x00000028u,c->r[25]); // 80277964
  W32(c->r[3]+0x00000030u,c->r[25]); // 80277968
  W32(c->r[3]+0x00000034u,c->r[25]); // 8027796C
  W32(c->r[3]+0x00000038u,c->r[25]); // 80277970
  W32(c->r[3]+0x00000040u,c->r[25]); // 80277974
  W32(c->r[3]+0x00000044u,c->r[25]); // 80277978
  W32(c->r[3]+0x00000048u,c->r[25]); // 8027797C
  W32(c->r[3]+0x00000050u,c->r[25]); // 80277980
  W32(c->r[3]+0x00000054u,c->r[25]); // 80277984
  W32(c->r[3]+0x00000058u,c->r[25]); // 80277988
  W32(c->r[3]+0x00000060u,c->r[25]); // 8027798C
  W32(c->r[3]+0x00000064u,c->r[25]); // 80277990
  W32(c->r[3]+0x00000068u,c->r[25]); // 80277994
  W32(c->r[3]+0x00000070u,c->r[25]); // 80277998
  W32(c->r[3]+0x00000074u,c->r[25]); // 8027799C
  W32(c->r[3]+0x00000078u,c->r[25]); // 802779A0
  c->r[3]=c->r[3]+0x00000080u; // 802779A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80277944; } // 802779A8
L_802779AC:;
  c->r[0]=c->r[24]+0x0000000Fu; // 802779AC
  c->r[0]=c->r[0]-c->r[3]; // 802779B0
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 802779B4
  c->ctr=c->r[0]; // 802779B8
  cmpu(c,0,c->r[3],c->r[24]); // 802779BC
  if (!crb(c,0)) { goto L_802779D8; } // 802779C0
L_802779C4:;
  W32(c->r[3]+0x00000000u,c->r[25]); // 802779C4
  W32(c->r[3]+0x00000004u,c->r[25]); // 802779C8
  W32(c->r[3]+0x00000008u,c->r[25]); // 802779CC
  c->r[3]=c->r[3]+0x00000010u; // 802779D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802779C4; } // 802779D4
L_802779D8:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802779D8
  c->r[3]=c->r[26]|c->r[26]; // 802779DC
  c->r[5]=c->r[31]|c->r[31]; // 802779E0
  c->r[4]=c->r[1]+0x00000340u; // 802779E4
  c->r[12]=R32(c->r[12]+0x00000038u); // 802779E8
  c->ctr=c->r[12]; // 802779EC
  if (true) { c->lr=0x802779F4u; dispatch(c,c->ctr); } // 802779F0
  c->r[4]=R32(c->r[3]+0x00000000u); // 802779F4
  c->r[30]=c->r[3]|c->r[3]; // 802779F8
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802779FC
  if (crb(c,2)) { goto L_80277FD8; } // 80277A00
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80277A04
  if (crb(c,2)) { goto L_80277C1C; } // 80277A08
  c->r[0]=R32(c->r[3]+0x00000008u); // 80277A0C
  c->r[4]=0u+0x00000000u; // 80277A10
  W32(c->r[1]+0x00000020u,c->r[0]); // 80277A14
  c->r[16]=R32(c->r[27]+0x00000000u); // 80277A18
  c->r[0]=R32(c->r[16]+0x00000008u); // 80277A1C
  cmps(c,0,(int32_t)c->r[0],0); // 80277A20
  if (crb(c,2)) { goto L_80277A30; } // 80277A24
  c->r[15]=c->r[16]+c->r[0]; // 80277A28
  goto L_80277A34; // 80277A2C
L_80277A30:;
  c->r[15]=0u+0x00000000u; // 80277A30
L_80277A34:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277A34
  fcmp(c,0,c->f[31],c->f[0]); // 80277A38
  if (crb(c,2)) { goto L_80277A64; } // 80277A3C
  c->r[3]=c->r[1]+0x00000020u; // 80277A40
  c->r[4]=c->r[1]+0x0000001Cu; // 80277A44
  c->r[5]=c->r[1]+0x0000000Au; // 80277A48
  c->lr=0x80277A50u; f_80254B90(c); // 80277A4C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80277A50
  c->r[4]=0u+0x00000001u; // 80277A54
  W32(c->r[1]+0x00000238u,c->r[0]); // 80277A58
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277A5C
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 80277A60
L_80277A64:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80277A64
  c->r[5]=c->r[1]+0x00000238u; // 80277A68
  c->r[3]=c->r[30]|c->r[30]; // 80277A6C
  c->r[7]=0u+0x00000000u; // 80277A70
  c->r[5]=c->r[5]+c->r[0]; // 80277A74
  goto L_80277AC0; // 80277A78
L_80277A7C:;
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277A7C
  fcmp(c,0,c->f[31],c->f[0]); // 80277A80
  if (crb(c,2)) { goto L_80277AB8; } // 80277A84
  c->r[6]=R32(c->r[3]+0x00000018u); // 80277A88
  c->r[0]=R32(c->r[6]+0x00000008u); // 80277A8C
  cmps(c,0,(int32_t)c->r[0],0); // 80277A90
  if (crb(c,2)) { goto L_80277AA0; } // 80277A94
  c->r[0]=c->r[6]+c->r[0]; // 80277A98
  goto L_80277AA4; // 80277A9C
L_80277AA0:;
  c->r[0]=0u+0x00000000u; // 80277AA0
L_80277AA4:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 80277AA4
  c->r[4]=c->r[4]+0x00000001u; // 80277AA8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277AAC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 80277AB0
  c->r[5]=c->r[5]+0x00000008u; // 80277AB4
L_80277AB8:;
  c->r[3]=c->r[3]+0x00000010u; // 80277AB8
  c->r[7]=c->r[7]+0x00000001u; // 80277ABC
L_80277AC0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80277AC0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80277AC4
  if (crb(c,0)) { IRQCHK(c); goto L_80277A7C; } // 80277AC8
  c->r[5]=R32(c->r[1]+0x00000020u); // 80277ACC
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80277AD0
  c->r[3]=c->r[1]+0x00000238u; // 80277AD4
  c->r[4]=R16(c->r[5]+0x0000001Eu); // 80277AD8
  c->r[3]=c->r[3]+c->r[0]; // 80277ADC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80277AE0
  c->r[8]=c->r[15]+c->r[4]; // 80277AE4
  goto L_80277BF8; // 80277AE8
L_80277AEC:;
  c->r[7]=R32(c->r[1]+0x00000238u); // 80277AEC
  c->r[5]=c->r[1]+0x00000240u; // 80277AF0
  c->r[6]=c->r[3]+0x00000007u; // 80277AF4
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80277AF8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 80277AFC
  c->r[6]=c->r[6]-c->r[5]; // 80277B00
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 80277B04
  c->r[0]=c->r[7]+0x0000000Cu; // 80277B08
  cmpu(c,0,c->r[5],c->r[3]); // 80277B0C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80277B10
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80277B14
  W32(c->r[1]+0x00000238u,c->r[0]); // 80277B18
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80277B1C
  if (!crb(c,0)) { goto L_80277BEC; } // 80277B20
  c->r[0]=rotl(c->r[6],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 80277B24
  c->ctr=c->r[0]; // 80277B28
  if (crb(c,2)) { goto L_80277BC0; } // 80277B2C
L_80277B30:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 80277B30
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277B34
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277B38
  c->r[0]=c->r[7]+0x0000000Cu; // 80277B3C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277B40
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277B44
  W32(c->r[5]+0x00000000u,c->r[0]); // 80277B48
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277B4C
  c->r[7]=R32(c->r[5]+0x00000008u); // 80277B50
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80277B54
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277B58
  c->r[0]=c->r[7]+0x0000000Cu; // 80277B5C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277B60
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277B64
  W32(c->r[5]+0x00000008u,c->r[0]); // 80277B68
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277B6C
  c->r[7]=R32(c->r[5]+0x00000010u); // 80277B70
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277B74
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277B78
  c->r[0]=c->r[7]+0x0000000Cu; // 80277B7C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277B80
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277B84
  W32(c->r[5]+0x00000010u,c->r[0]); // 80277B88
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277B8C
  c->r[7]=R32(c->r[5]+0x00000018u); // 80277B90
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80277B94
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277B98
  c->r[0]=c->r[7]+0x0000000Cu; // 80277B9C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277BA0
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277BA4
  W32(c->r[5]+0x00000018u,c->r[0]); // 80277BA8
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277BAC
  c->r[5]=c->r[5]+0x00000020u; // 80277BB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80277B30; } // 80277BB4
  c->r[6]=c->r[6]&0x00000003u; cr0(c,c->r[6]); // 80277BB8
  if (crb(c,2)) { goto L_80277BEC; } // 80277BBC
L_80277BC0:;
  c->ctr=c->r[6]; // 80277BC0
L_80277BC4:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 80277BC4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277BC8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277BCC
  c->r[0]=c->r[7]+0x0000000Cu; // 80277BD0
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277BD4
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277BD8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80277BDC
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277BE0
  c->r[5]=c->r[5]+0x00000008u; // 80277BE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80277BC4; } // 80277BE8
L_80277BEC:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,0);} // 80277BEC
  {uint32_t ea=c->r[15]+0x00000008u; psq_store(c,1,ea,1,0);} // 80277BF0
  c->r[15]=c->r[15]+0x0000000Cu; // 80277BF4
L_80277BF8:;
  cmpu(c,0,c->r[15],c->r[8]); // 80277BF8
  if (crb(c,0)) { IRQCHK(c); goto L_80277AEC; } // 80277BFC
  c->r[0]=R32(c->r[16]+0x00000008u); // 80277C00
  cmps(c,0,(int32_t)c->r[0],0); // 80277C04
  if (crb(c,2)) { goto L_80277C14; } // 80277C08
  c->r[3]=c->r[16]+c->r[0]; // 80277C0C
  goto L_80277C18; // 80277C10
L_80277C14:;
  c->r[3]=0u+0x00000000u; // 80277C14
L_80277C18:;
  c->lr=0x80277C1Cu; f_8015C090(c); // 80277C18
L_80277C1C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80277C1C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80277C20
  if (crb(c,2)) { goto L_80277E48; } // 80277C24
  cmps(c,0,(int32_t)c->r[28],0); // 80277C28
  if (crb(c,2)) { goto L_80277E48; } // 80277C2C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80277C30
  c->r[3]=0u+0x00000000u; // 80277C34
  W32(c->r[1]+0x00000018u,c->r[4]); // 80277C38
  c->r[0]=R32(c->r[4]+0x00000010u); // 80277C3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80277C40
  c->r[16]=R32(c->r[28]+c->r[0]); // 80277C44
  c->r[0]=R32(c->r[16]+0x00000008u); // 80277C48
  cmps(c,0,(int32_t)c->r[0],0); // 80277C4C
  if (crb(c,2)) { goto L_80277C5C; } // 80277C50
  c->r[15]=c->r[16]+c->r[0]; // 80277C54
  goto L_80277C60; // 80277C58
L_80277C5C:;
  c->r[15]=0u+0x00000000u; // 80277C5C
L_80277C60:;
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277C60
  fcmp(c,0,c->f[31],c->f[0]); // 80277C64
  if (crb(c,2)) { goto L_80277C90; } // 80277C68
  c->r[3]=c->r[1]+0x00000018u; // 80277C6C
  c->r[4]=c->r[1]+0x00000014u; // 80277C70
  c->r[5]=c->r[1]+0x00000009u; // 80277C74
  c->lr=0x80277C7Cu; f_80254C60(c); // 80277C78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80277C7C
  c->r[3]=0u+0x00000001u; // 80277C80
  W32(c->r[1]+0x00000130u,c->r[0]); // 80277C84
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277C88
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 80277C8C
L_80277C90:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80277C90
  c->r[5]=c->r[1]+0x00000130u; // 80277C94
  c->r[4]=c->r[30]|c->r[30]; // 80277C98
  c->r[7]=0u+0x00000000u; // 80277C9C
  c->r[5]=c->r[5]+c->r[0]; // 80277CA0
  goto L_80277CEC; // 80277CA4
L_80277CA8:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277CA8
  fcmp(c,0,c->f[31],c->f[0]); // 80277CAC
  if (crb(c,2)) { goto L_80277CE4; } // 80277CB0
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 80277CB4
  c->r[0]=R32(c->r[6]+0x00000008u); // 80277CB8
  cmps(c,0,(int32_t)c->r[0],0); // 80277CBC
  if (crb(c,2)) { goto L_80277CCC; } // 80277CC0
  c->r[0]=c->r[6]+c->r[0]; // 80277CC4
  goto L_80277CD0; // 80277CC8
L_80277CCC:;
  c->r[0]=0u+0x00000000u; // 80277CCC
L_80277CD0:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 80277CD0
  c->r[3]=c->r[3]+0x00000001u; // 80277CD4
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277CD8
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 80277CDC
  c->r[5]=c->r[5]+0x00000008u; // 80277CE0
L_80277CE4:;
  c->r[4]=c->r[4]+0x00000010u; // 80277CE4
  c->r[7]=c->r[7]+0x00000001u; // 80277CE8
L_80277CEC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80277CEC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80277CF0
  if (crb(c,0)) { IRQCHK(c); goto L_80277CA8; } // 80277CF4
  c->r[4]=R32(c->r[1]+0x00000018u); // 80277CF8
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80277CFC
  c->r[3]=c->r[1]+0x00000130u; // 80277D00
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 80277D04
  c->r[3]=c->r[3]+c->r[0]; // 80277D08
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80277D0C
  c->r[8]=c->r[15]+c->r[4]; // 80277D10
  goto L_80277E24; // 80277D14
L_80277D18:;
  c->r[7]=R32(c->r[1]+0x00000130u); // 80277D18
  c->r[5]=c->r[1]+0x00000138u; // 80277D1C
  c->r[6]=c->r[3]+0x00000007u; // 80277D20
  {uint32_t ea=c->r[1]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277D24
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 80277D28
  c->r[6]=c->r[6]-c->r[5]; // 80277D2C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 80277D30
  c->r[0]=c->r[7]+0x0000000Cu; // 80277D34
  cmpu(c,0,c->r[5],c->r[3]); // 80277D38
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80277D3C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80277D40
  W32(c->r[1]+0x00000130u,c->r[0]); // 80277D44
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80277D48
  if (!crb(c,0)) { goto L_80277E18; } // 80277D4C
  c->r[0]=rotl(c->r[6],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 80277D50
  c->ctr=c->r[0]; // 80277D54
  if (crb(c,2)) { goto L_80277DEC; } // 80277D58
L_80277D5C:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 80277D5C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277D60
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277D64
  c->r[0]=c->r[7]+0x0000000Cu; // 80277D68
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277D6C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277D70
  W32(c->r[5]+0x00000000u,c->r[0]); // 80277D74
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277D78
  c->r[7]=R32(c->r[5]+0x00000008u); // 80277D7C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80277D80
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277D84
  c->r[0]=c->r[7]+0x0000000Cu; // 80277D88
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277D8C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277D90
  W32(c->r[5]+0x00000008u,c->r[0]); // 80277D94
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277D98
  c->r[7]=R32(c->r[5]+0x00000010u); // 80277D9C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277DA0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277DA4
  c->r[0]=c->r[7]+0x0000000Cu; // 80277DA8
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277DAC
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277DB0
  W32(c->r[5]+0x00000010u,c->r[0]); // 80277DB4
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277DB8
  c->r[7]=R32(c->r[5]+0x00000018u); // 80277DBC
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80277DC0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277DC4
  c->r[0]=c->r[7]+0x0000000Cu; // 80277DC8
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277DCC
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277DD0
  W32(c->r[5]+0x00000018u,c->r[0]); // 80277DD4
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277DD8
  c->r[5]=c->r[5]+0x00000020u; // 80277DDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80277D5C; } // 80277DE0
  c->r[6]=c->r[6]&0x00000003u; cr0(c,c->r[6]); // 80277DE4
  if (crb(c,2)) { goto L_80277E18; } // 80277DE8
L_80277DEC:;
  c->ctr=c->r[6]; // 80277DEC
L_80277DF0:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 80277DF0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277DF4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 80277DF8
  c->r[0]=c->r[7]+0x0000000Cu; // 80277DFC
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 80277E00
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277E04
  W32(c->r[5]+0x00000000u,c->r[0]); // 80277E08
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277E0C
  c->r[5]=c->r[5]+0x00000008u; // 80277E10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80277DF0; } // 80277E14
L_80277E18:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,0);} // 80277E18
  {uint32_t ea=c->r[15]+0x00000008u; psq_store(c,1,ea,1,0);} // 80277E1C
  c->r[15]=c->r[15]+0x0000000Cu; // 80277E20
L_80277E24:;
  cmpu(c,0,c->r[15],c->r[8]); // 80277E24
  if (crb(c,0)) { IRQCHK(c); goto L_80277D18; } // 80277E28
  c->r[0]=R32(c->r[16]+0x00000008u); // 80277E2C
  cmps(c,0,(int32_t)c->r[0],0); // 80277E30
  if (crb(c,2)) { goto L_80277E40; } // 80277E34
  c->r[3]=c->r[16]+c->r[0]; // 80277E38
  goto L_80277E44; // 80277E3C
L_80277E40:;
  c->r[3]=0u+0x00000000u; // 80277E40
L_80277E44:;
  c->lr=0x80277E48u; f_8015C090(c); // 80277E44
L_80277E48:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80277E48
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80277E4C
  if (crb(c,2)) { goto L_80277FD8; } // 80277E50
  cmps(c,0,(int32_t)c->r[29],0); // 80277E54
  if (crb(c,2)) { goto L_80277FD8; } // 80277E58
  c->r[4]=R32(c->r[30]+0x00000010u); // 80277E5C
  c->r[3]=0u+0x00000000u; // 80277E60
  W32(c->r[1]+0x00000010u,c->r[4]); // 80277E64
  c->r[0]=R32(c->r[4]+0x00000010u); // 80277E68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80277E6C
  c->r[16]=R32(c->r[29]+c->r[0]); // 80277E70
  c->r[0]=R32(c->r[16]+0x00000008u); // 80277E74
  cmps(c,0,(int32_t)c->r[0],0); // 80277E78
  if (crb(c,2)) { goto L_80277E88; } // 80277E7C
  c->r[15]=c->r[16]+c->r[0]; // 80277E80
  goto L_80277E8C; // 80277E84
L_80277E88:;
  c->r[15]=0u+0x00000000u; // 80277E88
L_80277E8C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277E8C
  fcmp(c,0,c->f[31],c->f[0]); // 80277E90
  if (crb(c,2)) { goto L_80277EBC; } // 80277E94
  c->r[3]=c->r[1]+0x00000010u; // 80277E98
  c->r[4]=c->r[1]+0x0000000Cu; // 80277E9C
  c->r[5]=c->r[1]+0x00000008u; // 80277EA0
  c->lr=0x80277EA8u; f_80254D64(c); // 80277EA4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80277EA8
  c->r[3]=0u+0x00000001u; // 80277EAC
  W32(c->r[1]+0x00000028u,c->r[0]); // 80277EB0
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277EB4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80277EB8
L_80277EBC:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80277EBC
  c->r[5]=c->r[1]+0x00000028u; // 80277EC0
  c->r[4]=c->r[30]|c->r[30]; // 80277EC4
  c->r[7]=0u+0x00000000u; // 80277EC8
  c->r[5]=c->r[5]+c->r[0]; // 80277ECC
  goto L_80277F18; // 80277ED0
L_80277ED4:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277ED4
  fcmp(c,0,c->f[31],c->f[0]); // 80277ED8
  if (crb(c,2)) { goto L_80277F10; } // 80277EDC
  c->r[6]=R32(c->r[4]+0x00000020u); // 80277EE0
  c->r[0]=R32(c->r[6]+0x00000008u); // 80277EE4
  cmps(c,0,(int32_t)c->r[0],0); // 80277EE8
  if (crb(c,2)) { goto L_80277EF8; } // 80277EEC
  c->r[0]=c->r[6]+c->r[0]; // 80277EF0
  goto L_80277EFC; // 80277EF4
L_80277EF8:;
  c->r[0]=0u+0x00000000u; // 80277EF8
L_80277EFC:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 80277EFC
  c->r[3]=c->r[3]+0x00000001u; // 80277F00
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80277F04
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 80277F08
  c->r[5]=c->r[5]+0x00000008u; // 80277F0C
L_80277F10:;
  c->r[4]=c->r[4]+0x00000010u; // 80277F10
  c->r[7]=c->r[7]+0x00000001u; // 80277F14
L_80277F18:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80277F18
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80277F1C
  if (crb(c,0)) { IRQCHK(c); goto L_80277ED4; } // 80277F20
  c->r[4]=R32(c->r[1]+0x00000010u); // 80277F24
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80277F28
  c->r[3]=c->r[1]+0x00000028u; // 80277F2C
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 80277F30
  c->r[3]=c->r[3]+c->r[0]; // 80277F34
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80277F38
  c->r[6]=c->r[15]+c->r[4]; // 80277F3C
  goto L_80277FB4; // 80277F40
L_80277F44:;
  c->r[5]=R32(c->r[1]+0x00000028u); // 80277F44
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80277F48
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,2);} // 80277F4C
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,1,ea,0,2);} // 80277F50
  c->r[7]=c->r[1]+0x00000030u; // 80277F54
  c->r[0]=c->r[3]+0x00000007u; // 80277F58
  c->r[5]=c->r[5]+0x00000004u; // 80277F5C
  c->r[0]=c->r[0]-c->r[7]; // 80277F60
  W32(c->r[1]+0x00000028u,c->r[5]); // 80277F64
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80277F68
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80277F6C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80277F70
  c->ctr=c->r[0]; // 80277F74
  cmpu(c,0,c->r[7],c->r[3]); // 80277F78
  if (!crb(c,0)) { goto L_80277FA8; } // 80277F7C
L_80277F80:;
  c->r[5]=R32(c->r[7]+0x00000000u); // 80277F80
  {uint32_t ea=c->r[7]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80277F84
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,2);} // 80277F88
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,4,ea,0,2);} // 80277F8C
  c->r[0]=c->r[5]+0x00000004u; // 80277F90
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80277F94
  W32(c->r[7]+0x00000000u,c->r[0]); // 80277F98
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80277F9C
  c->r[7]=c->r[7]+0x00000008u; // 80277FA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80277F80; } // 80277FA4
L_80277FA8:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,2);} // 80277FA8
  {uint32_t ea=c->r[15]+0x00000002u; psq_store(c,1,ea,0,2);} // 80277FAC
  c->r[15]=c->r[15]+0x00000004u; // 80277FB0
L_80277FB4:;
  cmpu(c,0,c->r[15],c->r[6]); // 80277FB4
  if (crb(c,0)) { IRQCHK(c); goto L_80277F44; } // 80277FB8
  c->r[0]=R32(c->r[16]+0x00000008u); // 80277FBC
  cmps(c,0,(int32_t)c->r[0],0); // 80277FC0
  if (crb(c,2)) { goto L_80277FD0; } // 80277FC4
  c->r[3]=c->r[16]+c->r[0]; // 80277FC8
  goto L_80277FD4; // 80277FCC
L_80277FD0:;
  c->r[3]=0u+0x00000000u; // 80277FD0
L_80277FD4:;
  c->lr=0x80277FD8u; f_8015C090(c); // 80277FD4
L_80277FD8:;
  c->r[27]=c->r[27]+0x00000004u; // 80277FD8
  c->r[31]=c->r[31]+0x00000001u; // 80277FDC
L_80277FE0:;
  cmpu(c,0,c->r[31],c->r[23]); // 80277FE0
  if (crb(c,0)) { IRQCHK(c); goto L_80277884; } // 80277FE4
  {uint32_t ea=c->r[1]+0x000005A8u; psq_load(c,31,ea,0,0);} // 80277FE8
  c->r[11]=c->r[1]+0x000005A0u; // 80277FEC
  {uint32_t ea=c->r[1]+0x000005A0u; c->f[31]=RF64(ea);} // 80277FF0
  c->lr=0x80277FF8u; f_80185EEC(c); // 80277FF4
  c->r[0]=R32(c->r[1]+0x000005B4u); // 80277FF8
  c->lr=c->r[0]; // 80277FFC
  c->r[1]=c->r[1]+0x000005B0u; // 80278000
  return; // 80278004
}

// LytInit__Q24nw4r3lytFv
void f_80278008(Ctx* __restrict c) {
  trace_call(0x80278008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278008
  c->r[0]=c->lr; // 8027800C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80278010
  c->r[3]=R32(c->r[13]+0xFFFF9790u); // 80278014
  c->lr=0x8027801Cu; f_8015AE88(c); // 80278018
  c->r[3]=0u+0x00000004u; // 8027801C
  c->r[3]=c->r[3]|0x00040000u; // 80278020
  mtspr(c,914,c->r[3]); // 80278024
  c->r[3]=0u+0x00000005u; // 80278028
  c->r[3]=c->r[3]|0x00050000u; // 8027802C
  mtspr(c,915,c->r[3]); // 80278030
  c->r[3]=0u+0x00000006u; // 80278034
  c->r[3]=c->r[3]|0x00060000u; // 80278038
  mtspr(c,916,c->r[3]); // 8027803C
  c->r[3]=0u+0x00000007u; // 80278040
  c->r[3]=c->r[3]|0x00070000u; // 80278044
  mtspr(c,917,c->r[3]); // 80278048
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027804C
  c->lr=c->r[0]; // 80278050
  c->r[1]=c->r[1]+0x00000010u; // 80278054
  return; // 80278058
}

// __ct__Q34nw4r3lyt4PaneFv
void f_8027805C(Ctx* __restrict c) {
  trace_call(0x8027805Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027805C
  c->r[0]=c->lr; // 80278060
  c->r[6]=0u+0x80340000u; // 80278064
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278068
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027806C
  c->r[7]=c->r[3]+0x00000014u; // 80278070
  c->r[8]=c->r[3]+0x00000020u; // 80278074
  c->r[6]=c->r[6]+0x00005068u; // 80278078
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8027807C
  c->r[31]=0u+0x00000000u; // 80278080
  c->r[0]=0u+0x00000004u; // 80278084
  c->r[4]=0u+0x00000000u; // 80278088
  W32(c->r[1]+0x00000038u,c->r[30]); // 8027808C
  c->r[30]=c->r[3]|c->r[3]; // 80278090
  c->r[5]=0u+0x00000011u; // 80278094
  W32(c->r[3]+0x00000014u,c->r[31]); // 80278098
  W32(c->r[3]+0x00000018u,c->r[31]); // 8027809C
  W32(c->r[3]+0x00000020u,c->r[31]); // 802780A0
  W32(c->r[3]+0x00000024u,c->r[31]); // 802780A4
  W32(c->r[3]+0x00000004u,c->r[31]); // 802780A8
  W32(c->r[3]+0x00000008u,c->r[31]); // 802780AC
  W32(c->r[3]+0x00000000u,c->r[6]); // 802780B0
  W32(c->r[3]+0x00000010u,c->r[31]); // 802780B4
  W32(c->r[3]+0x00000014u,c->r[7]); // 802780B8
  W32(c->r[3]+0x00000018u,c->r[7]); // 802780BC
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 802780C0
  W32(c->r[3]+0x00000020u,c->r[8]); // 802780C4
  W32(c->r[3]+0x00000024u,c->r[8]); // 802780C8
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 802780CC
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 802780D0
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 802780D4
  W32(c->r[3]+0x00000028u,c->r[31]); // 802780D8
  W8(c->r[3]+0x000000D6u,c->r[31]); // 802780DC
  W32(c->r[3]+0x000000B4u,c->r[31]); // 802780E0
  W8(c->r[3]+0x000000BAu,c->r[0]); // 802780E4
  c->r[3]=c->r[3]+0x000000BCu; // 802780E8
  c->lr=0x802780F0u; f_80004688(c); // 802780EC
  c->r[3]=c->r[30]+0x000000CDu; // 802780F0
  c->r[4]=0u+0x00000000u; // 802780F4
  c->r[5]=0u+0x00000009u; // 802780F8
  c->lr=0x80278100u; f_80004688(c); // 802780FC
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80278100
  c->r[4]=0u+0x000000FFu; // 80278104
  {uint32_t ea=c->r[2]+0xFFFF9E04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278108
  c->r[0]=c->r[31]|0x00000001u; // 8027810C
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 80278110
  c->r[3]=c->r[30]|c->r[30]; // 80278114
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 80278118
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 8027811C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 80278120
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 80278124
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 80278128
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 8027812C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 80278130
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 80278134
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 80278138
  W8(c->r[30]+0x000000B8u,c->r[4]); // 8027813C
  W8(c->r[30]+0x000000B9u,c->r[4]); // 80278140
  W8(c->r[30]+0x000000BBu,c->r[0]); // 80278144
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80278148
  c->r[30]=R32(c->r[1]+0x00000038u); // 8027814C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80278150
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80278154
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 80278158
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8027815C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80278160
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80278164
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80278168
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027816C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80278170
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80278174
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80278178
  c->lr=c->r[0]; // 8027817C
  c->r[1]=c->r[1]+0x00000040u; // 80278180
  return; // 80278184
}

// __ct__Q34nw4r3lyt4PaneFPCQ44nw4r3lyt3res4Pane
void f_80278188(Ctx* __restrict c) {
  trace_call(0x80278188u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278188
  c->r[0]=c->lr; // 8027818C
  c->r[6]=0u+0x80340000u; // 80278190
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278194
  W32(c->r[1]+0x00000024u,c->r[0]); // 80278198
  c->r[7]=c->r[3]+0x00000014u; // 8027819C
  c->r[0]=R8(c->r[4]+0x00000009u); // 802781A0
  c->r[8]=c->r[3]+0x00000020u; // 802781A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802781A8
  c->r[31]=0u+0x00000000u; // 802781AC
  c->r[6]=c->r[6]+0x00005068u; // 802781B0
  c->r[5]=0u+0x00000010u; // 802781B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802781B8
  c->r[30]=c->r[4]|c->r[4]; // 802781BC
  c->r[4]=c->r[4]+0x0000000Cu; // 802781C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802781C4
  c->r[29]=c->r[3]|c->r[3]; // 802781C8
  W32(c->r[3]+0x00000014u,c->r[31]); // 802781CC
  W32(c->r[3]+0x00000018u,c->r[31]); // 802781D0
  W32(c->r[3]+0x00000020u,c->r[31]); // 802781D4
  W32(c->r[3]+0x00000024u,c->r[31]); // 802781D8
  W32(c->r[3]+0x00000004u,c->r[31]); // 802781DC
  W32(c->r[3]+0x00000008u,c->r[31]); // 802781E0
  W32(c->r[3]+0x00000000u,c->r[6]); // 802781E4
  W32(c->r[3]+0x00000010u,c->r[31]); // 802781E8
  W32(c->r[3]+0x00000014u,c->r[7]); // 802781EC
  W32(c->r[3]+0x00000018u,c->r[7]); // 802781F0
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 802781F4
  W32(c->r[3]+0x00000020u,c->r[8]); // 802781F8
  W32(c->r[3]+0x00000024u,c->r[8]); // 802781FC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80278200
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80278204
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 80278208
  W32(c->r[3]+0x00000028u,c->r[31]); // 8027820C
  W8(c->r[3]+0x000000D6u,c->r[31]); // 80278210
  W32(c->r[3]+0x000000B4u,c->r[31]); // 80278214
  W8(c->r[3]+0x000000BAu,c->r[0]); // 80278218
  c->r[3]=c->r[3]+0x000000BCu; // 8027821C
  c->lr=0x80278224u; f_801900A4(c); // 80278220
  W8(c->r[29]+0x000000CCu,c->r[31]); // 80278224
  c->r[3]=c->r[29]+0x000000CDu; // 80278228
  c->r[4]=c->r[30]+0x0000001Cu; // 8027822C
  c->r[5]=0u+0x00000008u; // 80278230
  c->lr=0x80278238u; f_801900A4(c); // 80278234
  c->r[4]=R8(c->r[30]+0x0000000Au); // 80278238
  c->r[3]=c->r[29]|c->r[29]; // 8027823C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 80278240
  {uint32_t ea=c->r[30]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 80278244
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80278248
  {uint32_t ea=c->r[30]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 8027824C
  {uint32_t ea=c->r[30]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 80278250
  {uint32_t ea=c->r[30]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 80278254
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80278258
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027825C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80278260
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278264
  c->r[0]=R8(c->r[30]+0x00000008u); // 80278268
  W8(c->r[29]+0x000000D5u,c->r[31]); // 8027826C
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[9]);} // 80278270
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[8]);} // 80278274
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[7]);} // 80278278
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[6]);} // 8027827C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[5]);} // 80278280
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[4]);} // 80278284
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[3]);} // 80278288
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[2]);} // 8027828C
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[1]);} // 80278290
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 80278294
  W8(c->r[29]+0x000000B8u,c->r[4]); // 80278298
  W8(c->r[29]+0x000000B9u,c->r[4]); // 8027829C
  W8(c->r[29]+0x000000BBu,c->r[0]); // 802782A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802782A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802782A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802782AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802782B0
  c->lr=c->r[0]; // 802782B4
  c->r[1]=c->r[1]+0x00000020u; // 802782B8
  return; // 802782BC
}

// __dt__Q34nw4r3lyt4PaneFv
void f_802782C0(Ctx* __restrict c) {
  trace_call(0x802782C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802782C0
  c->r[0]=c->lr; // 802782C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802782C8
  c->r[11]=c->r[1]+0x00000030u; // 802782CC
  c->lr=0x802782D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802782D0
  cmps(c,0,(int32_t)c->r[3],0); // 802782D4
  c->r[27]=c->r[3]|c->r[3]; // 802782D8
  c->r[28]=c->r[4]|c->r[4]; // 802782DC
  if (crb(c,2)) { goto L_802783DC; } // 802782E0
  c->r[4]=0u+0x80340000u; // 802782E4
  c->r[31]=R32(c->r[3]+0x00000014u); // 802782E8
  c->r[4]=c->r[4]+0x00005068u; // 802782EC
  c->r[30]=c->r[3]+0x00000014u; // 802782F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 802782F4
  goto L_8027834C; // 802782F8
L_802782FC:;
  c->r[29]=c->r[31]|c->r[31]; // 802782FC
  c->r[31]=R32(c->r[31]+0x00000000u); // 80278300
  c->r[3]=c->r[27]+0x00000010u; // 80278304
  c->r[4]=c->r[1]+0x00000008u; // 80278308
  W32(c->r[1]+0x00000008u,c->r[29]); // 8027830C
  c->lr=0x80278314u; f_802A7BFC(c); // 80278310
  c->r[0]=R8(c->r[29]+0x000000D2u); // 80278314
  cmps(c,0,(int32_t)c->r[0],0); // 80278318
  if (!crb(c,2)) { goto L_8027834C; } // 8027831C
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 80278320
  if (crb(c,2)) { goto L_8027834C; } // 80278324
  c->r[12]=R32(c->r[29]+0x00000000u); // 80278328
  c->r[3]=c->r[29]|c->r[29]; // 8027832C
  c->r[4]=0u+0xFFFFFFFFu; // 80278330
  c->r[12]=R32(c->r[12]+0x00000008u); // 80278334
  c->ctr=c->r[12]; // 80278338
  if (true) { c->lr=0x80278340u; dispatch(c,c->ctr); } // 8027833C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80278340
  c->r[4]=c->r[29]|c->r[29]; // 80278344
  c->lr=0x8027834Cu; f_801A0F08(c); // 80278348
L_8027834C:;
  cmpu(c,0,c->r[31],c->r[30]); // 8027834C
  if (!crb(c,2)) { IRQCHK(c); goto L_802782FC; } // 80278350
  c->r[12]=R32(c->r[27]+0x00000000u); // 80278354
  c->r[3]=c->r[27]|c->r[27]; // 80278358
  c->r[4]=0u+0x00000000u; // 8027835C
  c->r[12]=R32(c->r[12]+0x00000050u); // 80278360
  c->ctr=c->r[12]; // 80278364
  if (true) { c->lr=0x8027836Cu; dispatch(c,c->ctr); } // 80278368
  c->r[29]=R32(c->r[27]+0x00000028u); // 8027836C
  cmps(c,1,(int32_t)c->r[29],0); // 80278370
  if (crb(c,6)) { goto L_802783AC; } // 80278374
  c->r[0]=R8(c->r[29]+0x00000059u); // 80278378
  cmps(c,0,(int32_t)c->r[0],0); // 8027837C
  if (!crb(c,2)) { goto L_802783AC; } // 80278380
  if (crb(c,6)) { goto L_802783AC; } // 80278384
  c->r[12]=R32(c->r[29]+0x00000000u); // 80278388
  c->r[3]=c->r[29]|c->r[29]; // 8027838C
  c->r[4]=0u+0xFFFFFFFFu; // 80278390
  c->r[12]=R32(c->r[12]+0x00000008u); // 80278394
  c->ctr=c->r[12]; // 80278398
  if (true) { c->lr=0x802783A0u; dispatch(c,c->ctr); } // 8027839C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 802783A0
  c->r[4]=c->r[29]|c->r[29]; // 802783A4
  c->lr=0x802783ACu; f_801A0F08(c); // 802783A8
L_802783AC:;
  c->r[3]=addc(c,c->r[27],0x0000001Cu,0); cr0(c,c->r[3]); // 802783AC
  if (crb(c,2)) { goto L_802783BC; } // 802783B0
  c->r[4]=0u+0x00000000u; // 802783B4
  c->lr=0x802783BCu; f_802A7B78(c); // 802783B8
L_802783BC:;
  c->r[3]=addc(c,c->r[27],0x00000010u,0); cr0(c,c->r[3]); // 802783BC
  if (crb(c,2)) { goto L_802783CC; } // 802783C0
  c->r[4]=0u+0x00000000u; // 802783C4
  c->lr=0x802783CCu; f_802A7B78(c); // 802783C8
L_802783CC:;
  cmps(c,0,(int32_t)c->r[28],0); // 802783CC
  if (!crb(c,1)) { goto L_802783DC; } // 802783D0
  c->r[3]=c->r[27]|c->r[27]; // 802783D4
  c->lr=0x802783DCu; f_800D6AD0(c); // 802783D8
L_802783DC:;
  c->r[11]=c->r[1]+0x00000030u; // 802783DC
  c->r[3]=c->r[27]|c->r[27]; // 802783E0
  c->lr=0x802783E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802783E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802783E8
  c->lr=c->r[0]; // 802783EC
  c->r[1]=c->r[1]+0x00000030u; // 802783F0
  return; // 802783F4
}

// fn_802783F8
void f_802783F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802783F8
  c->r[0]=c->lr; // 802783FC
  c->r[5]=0u+0x00000010u; // 80278400
  W32(c->r[1]+0x00000014u,c->r[0]); // 80278404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80278408
  c->r[31]=c->r[3]|c->r[3]; // 8027840C
  c->r[3]=c->r[3]+0x000000BCu; // 80278410
  c->lr=0x80278418u; f_801900A4(c); // 80278414
  c->r[0]=0u+0x00000000u; // 80278418
  W8(c->r[31]+0x000000CCu,c->r[0]); // 8027841C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80278420
  c->r[0]=R32(c->r[1]+0x00000014u); // 80278424
  c->lr=c->r[0]; // 80278428
  c->r[1]=c->r[1]+0x00000010u; // 8027842C
  return; // 80278430
}

// AppendChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
void f_80278434(Ctx* __restrict c) {
  trace_call(0x80278434u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278434
  c->r[0]=c->lr; // 80278438
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027843C
  c->r[0]=c->r[3]+0x00000014u; // 80278440
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80278444
  c->r[31]=c->r[4]|c->r[4]; // 80278448
  c->r[4]=c->r[1]+0x00000008u; // 8027844C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80278450
  c->r[30]=c->r[3]|c->r[3]; // 80278454
  c->r[3]=c->r[3]+0x00000010u; // 80278458
  c->r[5]=c->r[31]+0x00000004u; // 8027845C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80278460
  c->lr=0x80278468u; f_802A7C88(c); // 80278464
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 80278468
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027846C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80278470
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278474
  c->lr=c->r[0]; // 80278478
  c->r[1]=c->r[1]+0x00000020u; // 8027847C
  return; // 80278480
}

// PrependChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
void f_80278484(Ctx* __restrict c) {
  trace_call(0x80278484u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278484
  c->r[0]=c->lr; // 80278488
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027848C
  c->r[0]=c->r[4]+0x00000004u; // 80278490
  c->r[4]=c->r[1]+0x00000008u; // 80278494
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80278498
  c->r[31]=c->r[5]|c->r[5]; // 8027849C
  c->r[5]=c->r[5]+0x00000004u; // 802784A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802784A4
  c->r[30]=c->r[3]|c->r[3]; // 802784A8
  c->r[3]=c->r[3]+0x00000010u; // 802784AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802784B0
  c->lr=0x802784B8u; f_802A7C88(c); // 802784B4
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 802784B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802784BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802784C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802784C4
  c->lr=c->r[0]; // 802784C8
  c->r[1]=c->r[1]+0x00000020u; // 802784CC
  return; // 802784D0
}

// RemoveChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
void f_802784D4(Ctx* __restrict c) {
  trace_call(0x802784D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802784D4
  c->r[0]=c->lr; // 802784D8
  c->r[3]=c->r[3]+0x00000010u; // 802784DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802784E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802784E4
  c->r[31]=c->r[4]|c->r[4]; // 802784E8
  c->r[4]=c->r[4]+0x00000004u; // 802784EC
  c->lr=0x802784F4u; f_802A7CB4(c); // 802784F0
  c->r[0]=0u+0x00000000u; // 802784F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802784F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802784FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80278500
  c->lr=c->r[0]; // 80278504
  c->r[1]=c->r[1]+0x00000010u; // 80278508
  return; // 8027850C
}

// fn_80278510
void f_80278510(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 80278510
  W32(c->r[3]+0x00000000u,c->r[0]); // 80278514
  return; // 80278518
}

// fn_8027851C
void f_8027851C(Ctx* __restrict c) {
  return; // 8027851C
}

// fn_80278520
void f_80278520(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],16); // 80278520
  if (crb(c,2)) { goto L_8027852C; } // 80278524
  goto L_80278534; // 80278528
L_8027852C:;
  c->r[3]=R8(c->r[3]+0x000000B8u); // 8027852C
  return; // 80278530
L_80278534:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278534
  c->r[12]=R32(c->r[12]+0x00000034u); // 80278538
  c->ctr=c->r[12]; // 8027853C
  if (true) { dispatch(c,c->ctr); return; } // 80278540
}

// fn_80278544
void f_80278544(Ctx* __restrict c) {
  return; // 80278544
}

// fn_80278548
void f_80278548(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],16); // 80278548
  if (crb(c,2)) { goto L_80278554; } // 8027854C
  goto L_8027855C; // 80278550
L_80278554:;
  W8(c->r[3]+0x000000B8u,c->r[5]); // 80278554
  return; // 80278558
L_8027855C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027855C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80278560
  c->ctr=c->r[12]; // 80278564
  if (true) { dispatch(c,c->ctr); return; } // 80278568
}

// fn_8027856C
void f_8027856C(Ctx* __restrict c) {
  return; // 8027856C
}

// fn_80278570
void f_80278570(Ctx* __restrict c) {
  c->r[3]=0u+0x000000FFu; // 80278570
  return; // 80278574
}

// fn_80278578
void f_80278578(Ctx* __restrict c) {
  return; // 80278578
}

// FindPaneByName__Q34nw4r3lyt4PaneFPCcb
void f_8027857C(Ctx* __restrict c) {
  trace_call(0x8027857Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027857C
  c->r[0]=c->lr; // 80278580
  W32(c->r[1]+0x00000024u,c->r[0]); // 80278584
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80278588
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027858C
  c->r[30]=c->r[3]|c->r[3]; // 80278590
  c->r[3]=c->r[3]+0x000000BCu; // 80278594
  W32(c->r[1]+0x00000014u,c->r[29]); // 80278598
  c->r[29]=c->r[5]|c->r[5]; // 8027859C
  W32(c->r[1]+0x00000010u,c->r[28]); // 802785A0
  c->r[28]=c->r[4]|c->r[4]; // 802785A4
  c->lr=0x802785ACu; f_80283A20(c); // 802785A8
  cmps(c,0,(int32_t)c->r[3],0); // 802785AC
  if (crb(c,2)) { goto L_802785BC; } // 802785B0
  c->r[3]=c->r[30]|c->r[30]; // 802785B4
  goto L_80278604; // 802785B8
L_802785BC:;
  cmps(c,0,(int32_t)c->r[29],0); // 802785BC
  if (crb(c,2)) { goto L_80278600; } // 802785C0
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 802785C4
  goto L_802785F8; // 802785C8
L_802785CC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 802785CC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 802785D0
  c->r[4]=c->r[28]|c->r[28]; // 802785D4
  c->r[5]=c->r[29]|c->r[29]; // 802785D8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802785DC
  c->ctr=c->r[12]; // 802785E0
  if (true) { c->lr=0x802785E8u; dispatch(c,c->ctr); } // 802785E4
  cmps(c,0,(int32_t)c->r[3],0); // 802785E8
  if (crb(c,2)) { goto L_802785F4; } // 802785EC
  goto L_80278604; // 802785F0
L_802785F4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802785F4
L_802785F8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802785F8
  if (!crb(c,2)) { IRQCHK(c); goto L_802785CC; } // 802785FC
L_80278600:;
  c->r[3]=0u+0x00000000u; // 80278600
L_80278604:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278604
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80278608
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027860C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80278610
  c->r[28]=R32(c->r[1]+0x00000010u); // 80278614
  c->lr=c->r[0]; // 80278618
  c->r[1]=c->r[1]+0x00000020u; // 8027861C
  return; // 80278620
}

// FindMaterialByName__Q34nw4r3lyt4PaneFPCcb
void f_80278624(Ctx* __restrict c) {
  trace_call(0x80278624u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278624
  c->r[0]=c->lr; // 80278628
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027862C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80278630
  W32(c->r[1]+0x00000018u,c->r[30]); // 80278634
  c->r[30]=c->r[3]|c->r[3]; // 80278638
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027863C
  c->r[29]=c->r[5]|c->r[5]; // 80278640
  W32(c->r[1]+0x00000010u,c->r[28]); // 80278644
  c->r[28]=c->r[4]|c->r[4]; // 80278648
  c->r[6]=R32(c->r[3]+0x00000028u); // 8027864C
  cmps(c,0,(int32_t)c->r[6],0); // 80278650
  if (crb(c,2)) { goto L_80278670; } // 80278654
  c->r[3]=c->r[6]+0x00000044u; // 80278658
  c->lr=0x80278660u; f_80283A4C(c); // 8027865C
  cmps(c,0,(int32_t)c->r[3],0); // 80278660
  if (crb(c,2)) { goto L_80278670; } // 80278664
  c->r[3]=R32(c->r[30]+0x00000028u); // 80278668
  goto L_802786B8; // 8027866C
L_80278670:;
  cmps(c,0,(int32_t)c->r[29],0); // 80278670
  if (crb(c,2)) { goto L_802786B4; } // 80278674
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80278678
  goto L_802786AC; // 8027867C
L_80278680:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80278680
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80278684
  c->r[4]=c->r[28]|c->r[28]; // 80278688
  c->r[5]=c->r[29]|c->r[29]; // 8027868C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80278690
  c->ctr=c->r[12]; // 80278694
  if (true) { c->lr=0x8027869Cu; dispatch(c,c->ctr); } // 80278698
  cmps(c,0,(int32_t)c->r[3],0); // 8027869C
  if (crb(c,2)) { goto L_802786A8; } // 802786A0
  goto L_802786B8; // 802786A4
L_802786A8:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802786A8
L_802786AC:;
  cmpu(c,0,c->r[31],c->r[30]); // 802786AC
  if (!crb(c,2)) { IRQCHK(c); goto L_80278680; } // 802786B0
L_802786B4:;
  c->r[3]=0u+0x00000000u; // 802786B4
L_802786B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802786B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802786BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802786C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802786C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 802786C8
  c->lr=c->r[0]; // 802786CC
  c->r[1]=c->r[1]+0x00000020u; // 802786D0
  return; // 802786D4
}

// CalculateMtx__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_802786D8(Ctx* __restrict c) {
  trace_call(0x802786D8u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 802786D8
  c->r[0]=c->lr; // 802786DC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 802786E0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 802786E4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 802786E8
  c->r[11]=c->r[1]+0x000000D0u; // 802786EC
  c->lr=0x802786F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802786F0
  c->r[6]=R8(c->r[3]+0x000000BBu); // 802786F4
  c->r[30]=c->r[3]|c->r[3]; // 802786F8
  c->r[31]=c->r[4]|c->r[4]; // 802786FC
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 80278700
  if (!crb(c,2)) { goto L_80278714; } // 80278704
  c->r[0]=R8(c->r[4]+0x00000050u); // 80278708
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 8027870C
  if (crb(c,2)) { goto L_802789B0; } // 80278710
L_80278714:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 80278714
  c->r[5]=R32(c->r[3]+0x00000044u); // 80278718
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 8027871C
  c->r[0]=R32(c->r[3]+0x00000048u); // 80278720
  W32(c->r[1]+0x00000008u,c->r[5]); // 80278724
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80278728
  if (crb(c,2)) { goto L_80278758; } // 8027872C
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 80278730
  if (crb(c,2)) { goto L_80278758; } // 80278734
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80278738
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027873C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80278740
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278744
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80278748
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8027874C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80278750
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80278754
L_80278758:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80278758
  c->r[3]=c->r[1]+0x00000040u; // 8027875C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80278760
  {uint32_t ea=c->r[2]+0xFFFF9E04u; c->f[3]=c->ps1[3]=RF32(ea);} // 80278764
  c->lr=0x8027876Cu; f_8016862C(c); // 80278768
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027876C
  c->r[3]=c->r[1]+0x00000010u; // 80278770
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278774
  c->r[4]=0u+0x00000078u; // 80278778
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8027877C
  c->lr=0x80278784u; f_80168354(c); // 80278780
  c->r[3]=c->r[1]+0x00000010u; // 80278784
  c->r[4]=c->r[1]+0x00000040u; // 80278788
  c->r[5]=c->r[1]+0x00000070u; // 8027878C
  c->lr=0x80278794u; f_80167FF8(c); // 80278790
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 80278794
  c->r[3]=c->r[1]+0x00000010u; // 80278798
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027879C
  c->r[4]=0u+0x00000079u; // 802787A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 802787A4
  c->lr=0x802787ACu; f_80168354(c); // 802787A8
  c->r[3]=c->r[1]+0x00000010u; // 802787AC
  c->r[4]=c->r[1]+0x00000070u; // 802787B0
  c->r[5]=c->r[1]+0x00000040u; // 802787B4
  c->lr=0x802787BCu; f_80167FF8(c); // 802787B8
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 802787BC
  c->r[3]=c->r[1]+0x00000010u; // 802787C0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802787C4
  c->r[4]=0u+0x0000007Au; // 802787C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 802787CC
  c->lr=0x802787D4u; f_80168354(c); // 802787D0
  c->r[3]=c->r[1]+0x00000010u; // 802787D4
  c->r[4]=c->r[1]+0x00000040u; // 802787D8
  c->r[5]=c->r[1]+0x00000070u; // 802787DC
  c->lr=0x802787E4u; f_80167FF8(c); // 802787E0
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802787E4
  c->r[3]=c->r[1]+0x00000070u; // 802787E8
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802787EC
  c->r[4]=c->r[30]+0x00000054u; // 802787F0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 802787F4
  c->lr=0x802787FCu; f_801685E0(c); // 802787F8
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 802787FC
  cmps(c,0,(int32_t)c->r[3],0); // 80278800
  if (crb(c,2)) { goto L_8027881C; } // 80278804
  c->r[3]=c->r[3]+0x00000084u; // 80278808
  c->r[4]=c->r[30]+0x00000054u; // 8027880C
  c->r[5]=c->r[30]+0x00000084u; // 80278810
  c->lr=0x80278818u; f_80167FF8(c); // 80278814
  goto L_8027889C; // 80278818
L_8027881C:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 8027881C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80278820
  if (crb(c,2)) { goto L_8027888C; } // 80278824
  c->r[27]=R32(c->r[30]+0x00000054u); // 80278828
  c->r[12]=R32(c->r[30]+0x00000058u); // 8027882C
  c->r[11]=R32(c->r[30]+0x0000005Cu); // 80278830
  c->r[10]=R32(c->r[30]+0x00000060u); // 80278834
  c->r[9]=R32(c->r[30]+0x00000064u); // 80278838
  c->r[8]=R32(c->r[30]+0x00000068u); // 8027883C
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 80278840
  c->r[6]=R32(c->r[30]+0x00000070u); // 80278844
  c->r[5]=R32(c->r[30]+0x00000074u); // 80278848
  c->r[4]=R32(c->r[30]+0x00000078u); // 8027884C
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 80278850
  c->r[0]=R32(c->r[30]+0x00000080u); // 80278854
  W32(c->r[30]+0x00000084u,c->r[27]); // 80278858
  W32(c->r[30]+0x00000088u,c->r[12]); // 8027885C
  W32(c->r[30]+0x0000008Cu,c->r[11]); // 80278860
  W32(c->r[30]+0x00000090u,c->r[10]); // 80278864
  W32(c->r[30]+0x00000094u,c->r[9]); // 80278868
  W32(c->r[30]+0x00000098u,c->r[8]); // 8027886C
  W32(c->r[30]+0x0000009Cu,c->r[7]); // 80278870
  W32(c->r[30]+0x000000A0u,c->r[6]); // 80278874
  W32(c->r[30]+0x000000A4u,c->r[5]); // 80278878
  W32(c->r[30]+0x000000A8u,c->r[4]); // 8027887C
  W32(c->r[30]+0x000000ACu,c->r[3]); // 80278880
  W32(c->r[30]+0x000000B0u,c->r[0]); // 80278884
  goto L_8027889C; // 80278888
L_8027888C:;
  c->r[3]=c->r[31]+0x00000004u; // 8027888C
  c->r[4]=c->r[30]+0x00000054u; // 80278890
  c->r[5]=c->r[30]+0x00000084u; // 80278894
  c->lr=0x8027889Cu; f_80167FF8(c); // 80278898
L_8027889C:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 8027889C
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 802788A0
  if (crb(c,2)) { goto L_802788EC; } // 802788A4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 802788A8
  cmps(c,0,(int32_t)c->r[0],0); // 802788AC
  if (crb(c,2)) { goto L_802788EC; } // 802788B0
  c->r[3]=R8(c->r[30]+0x000000B8u); // 802788B4
  c->r[0]=0u+0x43300000u; // 802788B8
  W32(c->r[1]+0x000000A0u,c->r[0]); // 802788BC
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[1]=RF64(ea);} // 802788C0
  W32(c->r[1]+0x000000A4u,c->r[3]); // 802788C4
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802788C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 802788CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802788D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802788D4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802788D8
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 802788DC
  c->r[0]=R32(c->r[1]+0x000000ACu); // 802788E0
  W8(c->r[30]+0x000000B9u,c->r[0]); // 802788E4
  goto L_802788F4; // 802788E8
L_802788EC:;
  c->r[0]=R8(c->r[30]+0x000000B8u); // 802788EC
  W8(c->r[30]+0x000000B9u,c->r[0]); // 802788F0
L_802788F4:;
  c->r[0]=R8(c->r[30]+0x000000BBu); // 802788F4
  c->r[28]=0u+0x00000000u; // 802788F8
  c->r[3]=R8(c->r[31]+0x00000050u); // 802788FC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80278900
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80278904
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 80278908
  c->r[0]=0u-c->r[3]; // 8027890C
  c->r[0]=c->r[0]|c->r[3]; // 80278910
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 80278914
  if (crb(c,2)) { goto L_8027892C; } // 80278918
  c->r[0]=R8(c->r[30]+0x000000B8u); // 8027891C
  cmpu(c,0,c->r[0],0x000000FFu); // 80278920
  if (crb(c,2)) { goto L_8027892C; } // 80278924
  c->r[28]=0u+0x00000001u; // 80278928
L_8027892C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8027892C
  if (crb(c,2)) { goto L_8027896C; } // 80278930
  c->r[4]=R8(c->r[30]+0x000000B8u); // 80278934
  c->r[3]=0u+0x43300000u; // 80278938
  c->r[0]=R8(c->r[31]+0x00000050u); // 8027893C
  W32(c->r[1]+0x000000ACu,c->r[4]); // 80278940
  c->r[0]=c->r[0]|0x00000040u; // 80278944
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[2]=RF64(ea);} // 80278948
  W32(c->r[1]+0x000000A8u,c->r[3]); // 8027894C
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80278950
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 80278954
  W8(c->r[31]+0x00000050u,c->r[0]); // 80278958
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8027895C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80278960
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80278964
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80278968
L_8027896C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[29]=R32(ea); c->r[30]=ea;} // 8027896C
  goto L_80278990; // 80278970
L_80278974:;
  c->r[12]=R32(c->r[29]+0xFFFFFFFCu); // 80278974
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 80278978
  c->r[4]=c->r[31]|c->r[31]; // 8027897C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80278980
  c->ctr=c->r[12]; // 80278984
  if (true) { c->lr=0x8027898Cu; dispatch(c,c->ctr); } // 80278988
  c->r[29]=R32(c->r[29]+0x00000000u); // 8027898C
L_80278990:;
  cmpu(c,0,c->r[29],c->r[30]); // 80278990
  if (!crb(c,2)) { IRQCHK(c); goto L_80278974; } // 80278994
  cmps(c,0,(int32_t)c->r[28],0); // 80278998
  if (crb(c,2)) { goto L_802789B0; } // 8027899C
  c->r[0]=R8(c->r[31]+0x00000050u); // 802789A0
  c->r[0]=(rotl(c->r[27],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 802789A4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[31]);} // 802789A8
  W8(c->r[31]+0x00000050u,c->r[0]); // 802789AC
L_802789B0:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 802789B0
  c->r[11]=c->r[1]+0x000000D0u; // 802789B4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 802789B8
  c->lr=0x802789C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802789BC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 802789C0
  c->lr=c->r[0]; // 802789C4
  c->r[1]=c->r[1]+0x000000E0u; // 802789C8
  return; // 802789CC
}

// fn_802789D0
void f_802789D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802789D0
  c->r[0]=c->lr; // 802789D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802789D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802789DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802789E0
  c->r[30]=c->r[3]|c->r[3]; // 802789E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802789E8
  c->r[29]=c->r[4]|c->r[4]; // 802789EC
  c->r[0]=R8(c->r[3]+0x000000BBu); // 802789F0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802789F4
  if (crb(c,2)) { goto L_80278A38; } // 802789F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802789FC
  c->r[12]=R32(c->r[12]+0x00000018u); // 80278A00
  c->ctr=c->r[12]; // 80278A04
  if (true) { c->lr=0x80278A0Cu; dispatch(c,c->ctr); } // 80278A08
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80278A0C
  goto L_80278A30; // 80278A10
L_80278A14:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80278A14
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80278A18
  c->r[4]=c->r[29]|c->r[29]; // 80278A1C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80278A20
  c->ctr=c->r[12]; // 80278A24
  if (true) { c->lr=0x80278A2Cu; dispatch(c,c->ctr); } // 80278A28
  c->r[31]=R32(c->r[31]+0x00000000u); // 80278A2C
L_80278A30:;
  cmpu(c,0,c->r[31],c->r[30]); // 80278A30
  if (!crb(c,2)) { IRQCHK(c); goto L_80278A14; } // 80278A34
L_80278A38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278A38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80278A3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80278A40
  c->r[29]=R32(c->r[1]+0x00000014u); // 80278A44
  c->lr=c->r[0]; // 80278A48
  c->r[1]=c->r[1]+0x00000020u; // 80278A4C
  return; // 80278A50
}

// fn_80278A54
void f_80278A54(Ctx* __restrict c) {
  return; // 80278A54
}

// fn_80278A58
void f_80278A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278A58
  c->r[0]=c->lr; // 80278A5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80278A60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80278A64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80278A68
  c->r[30]=c->r[3]|c->r[3]; // 80278A6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80278A70
  c->r[29]=c->r[4]|c->r[4]; // 80278A74
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278A78
  c->r[12]=R32(c->r[12]+0x00000020u); // 80278A7C
  c->ctr=c->r[12]; // 80278A80
  if (true) { c->lr=0x80278A88u; dispatch(c,c->ctr); } // 80278A84
  c->r[0]=R8(c->r[30]+0x000000BBu); // 80278A88
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80278A8C
  if (!crb(c,2)) { goto L_80278A9C; } // 80278A90
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80278A94
  if (!crb(c,2)) { goto L_80278AC8; } // 80278A98
L_80278A9C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80278A9C
  goto L_80278AC0; // 80278AA0
L_80278AA4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80278AA4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80278AA8
  c->r[4]=c->r[29]|c->r[29]; // 80278AAC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80278AB0
  c->ctr=c->r[12]; // 80278AB4
  if (true) { c->lr=0x80278ABCu; dispatch(c,c->ctr); } // 80278AB8
  c->r[31]=R32(c->r[31]+0x00000000u); // 80278ABC
L_80278AC0:;
  cmpu(c,0,c->r[31],c->r[30]); // 80278AC0
  if (!crb(c,2)) { IRQCHK(c); goto L_80278AA4; } // 80278AC4
L_80278AC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278AC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80278ACC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80278AD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80278AD4
  c->lr=c->r[0]; // 80278AD8
  c->r[1]=c->r[1]+0x00000020u; // 80278ADC
  return; // 80278AE0
}

// fn_80278AE4
void f_80278AE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278AE4
  c->r[0]=c->lr; // 80278AE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80278AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80278AF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80278AF4
  c->r[30]=c->r[3]+0x00000020u; // 80278AF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80278AFC
  c->r[29]=c->r[4]|c->r[4]; // 80278B00
  W32(c->r[1]+0x00000010u,c->r[28]); // 80278B04
  c->r[28]=c->r[3]|c->r[3]; // 80278B08
  c->r[31]=R32(c->r[3]+0x00000020u); // 80278B0C
  goto L_80278B40; // 80278B10
L_80278B14:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80278B14
  cmps(c,0,(int32_t)c->r[0],0); // 80278B18
  if (!crb(c,2)) { goto L_80278B3C; } // 80278B1C
  c->r[3]=R32(c->r[31]+0x00000008u); // 80278B20
  c->r[5]=c->r[28]|c->r[28]; // 80278B24
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 80278B28
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278B2C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80278B30
  c->ctr=c->r[12]; // 80278B34
  if (true) { c->lr=0x80278B3Cu; dispatch(c,c->ctr); } // 80278B38
L_80278B3C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80278B3C
L_80278B40:;
  cmpu(c,0,c->r[31],c->r[30]); // 80278B40
  if (!crb(c,2)) { IRQCHK(c); goto L_80278B14; } // 80278B44
  c->r[0]=R8(c->r[28]+0x000000BBu); // 80278B48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80278B4C
  if (!crb(c,2)) { goto L_80278B5C; } // 80278B50
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80278B54
  if (!crb(c,2)) { goto L_80278B78; } // 80278B58
L_80278B5C:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 80278B5C
  cmps(c,0,(int32_t)c->r[3],0); // 80278B60
  if (crb(c,2)) { goto L_80278B78; } // 80278B64
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278B68
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80278B6C
  c->ctr=c->r[12]; // 80278B70
  if (true) { c->lr=0x80278B78u; dispatch(c,c->ctr); } // 80278B74
L_80278B78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278B78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80278B7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80278B80
  c->r[29]=R32(c->r[1]+0x00000014u); // 80278B84
  c->r[28]=R32(c->r[1]+0x00000010u); // 80278B88
  c->lr=c->r[0]; // 80278B8C
  c->r[1]=c->r[1]+0x00000020u; // 80278B90
  return; // 80278B94
}

// fn_80278B98
void f_80278B98(Ctx* __restrict c) {
  c->r[12]=R32(c->r[4]+0x00000000u); // 80278B98
  c->r[0]=c->r[3]|c->r[3]; // 80278B9C
  c->r[3]=c->r[4]|c->r[4]; // 80278BA0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80278BA4
  c->r[4]=c->r[0]|c->r[0]; // 80278BA8
  c->ctr=c->r[12]; // 80278BAC
  if (true) { dispatch(c,c->ctr); return; } // 80278BB0
}

// fn_80278BB4
void f_80278BB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278BB4
  c->r[0]=c->lr; // 80278BB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80278BBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80278BC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80278BC4
  c->r[30]=c->r[3]|c->r[3]; // 80278BC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80278BCC
  c->r[29]=c->r[5]|c->r[5]; // 80278BD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80278BD4
  c->r[28]=c->r[4]|c->r[4]; // 80278BD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278BDC
  c->r[12]=R32(c->r[12]+0x00000050u); // 80278BE0
  c->ctr=c->r[12]; // 80278BE4
  if (true) { c->lr=0x80278BECu; dispatch(c,c->ctr); } // 80278BE8
  cmps(c,0,(int32_t)c->r[29],0); // 80278BEC
  if (crb(c,2)) { goto L_80278C24; } // 80278BF0
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80278BF4
  goto L_80278C1C; // 80278BF8
L_80278BFC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80278BFC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80278C00
  c->r[4]=c->r[28]|c->r[28]; // 80278C04
  c->r[5]=c->r[29]|c->r[29]; // 80278C08
  c->r[12]=R32(c->r[12]+0x00000048u); // 80278C0C
  c->ctr=c->r[12]; // 80278C10
  if (true) { c->lr=0x80278C18u; dispatch(c,c->ctr); } // 80278C14
  c->r[31]=R32(c->r[31]+0x00000000u); // 80278C18
L_80278C1C:;
  cmpu(c,0,c->r[31],c->r[30]); // 80278C1C
  if (!crb(c,2)) { IRQCHK(c); goto L_80278BFC; } // 80278C20
L_80278C24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278C24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80278C28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80278C2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80278C30
  c->r[28]=R32(c->r[1]+0x00000010u); // 80278C34
  c->lr=c->r[0]; // 80278C38
  c->r[1]=c->r[1]+0x00000020u; // 80278C3C
  return; // 80278C40
}

// fn_80278C44
void f_80278C44(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278C44
  c->r[5]=c->r[4]|c->r[4]; // 80278C48
  c->r[4]=0u+0x00000000u; // 80278C4C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80278C50
  c->ctr=c->r[12]; // 80278C54
  if (true) { dispatch(c,c->ctr); return; } // 80278C58
}

// UnbindAnimationSelf__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransform
void f_80278C5C(Ctx* __restrict c) {
  trace_call(0x80278C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278C5C
  c->r[0]=c->lr; // 80278C60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80278C64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80278C68
  c->r[31]=c->r[4]|c->r[4]; // 80278C6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80278C70
  c->r[30]=c->r[3]|c->r[3]; // 80278C74
  c->r[0]=R32(c->r[3]+0x00000028u); // 80278C78
  cmps(c,0,(int32_t)c->r[0],0); // 80278C7C
  if (crb(c,2)) { goto L_80278C98; } // 80278C80
  c->r[3]=c->r[0]|c->r[0]; // 80278C84
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278C88
  c->r[12]=R32(c->r[12]+0x00000014u); // 80278C8C
  c->ctr=c->r[12]; // 80278C90
  if (true) { c->lr=0x80278C98u; dispatch(c,c->ctr); } // 80278C94
L_80278C98:;
  c->r[4]=c->r[31]|c->r[31]; // 80278C98
  c->r[3]=c->r[30]+0x0000001Cu; // 80278C9C
  c->lr=0x80278CA4u; f_80283420(c); // 80278CA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80278CA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80278CA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80278CAC
  c->lr=c->r[0]; // 80278CB0
  c->r[1]=c->r[1]+0x00000010u; // 80278CB4
  return; // 80278CB8
}

// AddAnimationLink__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimationLink
void f_80278CBC(Ctx* __restrict c) {
  trace_call(0x80278CBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278CBC
  c->r[0]=c->lr; // 80278CC0
  c->r[5]=c->r[4]|c->r[4]; // 80278CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80278CC8
  c->r[0]=c->r[3]+0x00000020u; // 80278CCC
  c->r[3]=c->r[3]+0x0000001Cu; // 80278CD0
  c->r[4]=c->r[1]+0x00000008u; // 80278CD4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80278CD8
  c->lr=0x80278CE0u; f_802A7C88(c); // 80278CDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80278CE0
  c->lr=c->r[0]; // 80278CE4
  c->r[1]=c->r[1]+0x00000010u; // 80278CE8
  return; // 80278CEC
}

// fn_80278CF0
void f_80278CF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000001Cu; // 80278CF0
  f_802833B0(c); return; // 80278CF4
}

// fn_80278CF8
void f_80278CF8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000001Cu; // 80278CF8
  f_802833E4(c); return; // 80278CFC
}

// fn_80278D00
void f_80278D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278D00
  c->r[0]=c->lr; // 80278D04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80278D08
  c->r[11]=c->r[1]+0x00000020u; // 80278D0C
  c->lr=0x80278D14u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80278D10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278D14
  c->r[26]=c->r[3]|c->r[3]; // 80278D18
  c->r[27]=c->r[4]|c->r[4]; // 80278D1C
  c->r[28]=c->r[5]|c->r[5]; // 80278D20
  c->r[12]=R32(c->r[12]+0x00000054u); // 80278D24
  c->r[29]=c->r[6]|c->r[6]; // 80278D28
  c->ctr=c->r[12]; // 80278D2C
  if (true) { c->lr=0x80278D34u; dispatch(c,c->ctr); } // 80278D30
  cmps(c,0,(int32_t)c->r[3],0); // 80278D34
  if (crb(c,2)) { goto L_80278D48; } // 80278D38
  c->r[0]=cntlz(c->r[28]); // 80278D3C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80278D40
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80278D44
L_80278D48:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80278D48
  c->r[3]=c->r[26]|c->r[26]; // 80278D4C
  c->r[12]=R32(c->r[12]+0x00000064u); // 80278D50
  c->ctr=c->r[12]; // 80278D54
  if (true) { c->lr=0x80278D5Cu; dispatch(c,c->ctr); } // 80278D58
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 80278D5C
  c->r[31]=0u+0x00000000u; // 80278D60
  goto L_80278D9C; // 80278D64
L_80278D68:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80278D68
  c->r[3]=c->r[26]|c->r[26]; // 80278D6C
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 80278D70
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80278D74
  c->ctr=c->r[12]; // 80278D78
  if (true) { c->lr=0x80278D80u; dispatch(c,c->ctr); } // 80278D7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278D80
  c->r[4]=c->r[27]|c->r[27]; // 80278D84
  c->r[5]=c->r[28]|c->r[28]; // 80278D88
  c->r[12]=R32(c->r[12]+0x00000028u); // 80278D8C
  c->ctr=c->r[12]; // 80278D90
  if (true) { c->lr=0x80278D98u; dispatch(c,c->ctr); } // 80278D94
  c->r[31]=c->r[31]+0x00000001u; // 80278D98
L_80278D9C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80278D9C
  cmpu(c,0,c->r[0],c->r[30]); // 80278DA0
  if (crb(c,0)) { IRQCHK(c); goto L_80278D68; } // 80278DA4
  cmps(c,0,(int32_t)c->r[29],0); // 80278DA8
  if (crb(c,2)) { goto L_80278DE8; } // 80278DAC
  c->r[31]=R32(c->r[26]+0x00000014u); // 80278DB0
  c->r[30]=c->r[26]+0x00000014u; // 80278DB4
  goto L_80278DE0; // 80278DB8
L_80278DBC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80278DBC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80278DC0
  c->r[4]=c->r[27]|c->r[27]; // 80278DC4
  c->r[5]=c->r[28]|c->r[28]; // 80278DC8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80278DCC
  c->r[6]=c->r[29]|c->r[29]; // 80278DD0
  c->ctr=c->r[12]; // 80278DD4
  if (true) { c->lr=0x80278DDCu; dispatch(c,c->ctr); } // 80278DD8
  c->r[31]=R32(c->r[31]+0x00000000u); // 80278DDC
L_80278DE0:;
  cmpu(c,0,c->r[31],c->r[30]); // 80278DE0
  if (!crb(c,2)) { IRQCHK(c); goto L_80278DBC; } // 80278DE4
L_80278DE8:;
  c->r[11]=c->r[1]+0x00000020u; // 80278DE8
  c->lr=0x80278DF0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80278DEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278DF0
  c->lr=c->r[0]; // 80278DF4
  c->r[1]=c->r[1]+0x00000020u; // 80278DF8
  return; // 80278DFC
}

// fn_80278E00
void f_80278E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278E00
  c->r[0]=c->lr; // 80278E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80278E08
  c->r[11]=c->r[1]+0x00000020u; // 80278E0C
  c->lr=0x80278E14u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80278E10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278E14
  c->r[26]=c->r[3]|c->r[3]; // 80278E18
  c->r[27]=c->r[4]|c->r[4]; // 80278E1C
  c->r[28]=c->r[5]|c->r[5]; // 80278E20
  c->r[12]=R32(c->r[12]+0x00000058u); // 80278E24
  c->r[29]=c->r[6]|c->r[6]; // 80278E28
  c->ctr=c->r[12]; // 80278E2C
  if (true) { c->lr=0x80278E34u; dispatch(c,c->ctr); } // 80278E30
  cmps(c,0,(int32_t)c->r[3],0); // 80278E34
  if (crb(c,2)) { goto L_80278E48; } // 80278E38
  c->r[0]=cntlz(c->r[28]); // 80278E3C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80278E40
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80278E44
L_80278E48:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80278E48
  c->r[3]=c->r[26]|c->r[26]; // 80278E4C
  c->r[12]=R32(c->r[12]+0x00000064u); // 80278E50
  c->ctr=c->r[12]; // 80278E54
  if (true) { c->lr=0x80278E5Cu; dispatch(c,c->ctr); } // 80278E58
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 80278E5C
  c->r[31]=0u+0x00000000u; // 80278E60
  goto L_80278E9C; // 80278E64
L_80278E68:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80278E68
  c->r[3]=c->r[26]|c->r[26]; // 80278E6C
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 80278E70
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80278E74
  c->ctr=c->r[12]; // 80278E78
  if (true) { c->lr=0x80278E80u; dispatch(c,c->ctr); } // 80278E7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80278E80
  c->r[4]=c->r[27]|c->r[27]; // 80278E84
  c->r[5]=c->r[28]|c->r[28]; // 80278E88
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80278E8C
  c->ctr=c->r[12]; // 80278E90
  if (true) { c->lr=0x80278E98u; dispatch(c,c->ctr); } // 80278E94
  c->r[31]=c->r[31]+0x00000001u; // 80278E98
L_80278E9C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80278E9C
  cmpu(c,0,c->r[0],c->r[30]); // 80278EA0
  if (crb(c,0)) { IRQCHK(c); goto L_80278E68; } // 80278EA4
  cmps(c,0,(int32_t)c->r[29],0); // 80278EA8
  if (crb(c,2)) { goto L_80278EE8; } // 80278EAC
  c->r[31]=R32(c->r[26]+0x00000014u); // 80278EB0
  c->r[30]=c->r[26]+0x00000014u; // 80278EB4
  goto L_80278EE0; // 80278EB8
L_80278EBC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80278EBC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80278EC0
  c->r[4]=c->r[27]|c->r[27]; // 80278EC4
  c->r[5]=c->r[28]|c->r[28]; // 80278EC8
  c->r[12]=R32(c->r[12]+0x00000060u); // 80278ECC
  c->r[6]=c->r[29]|c->r[29]; // 80278ED0
  c->ctr=c->r[12]; // 80278ED4
  if (true) { c->lr=0x80278EDCu; dispatch(c,c->ctr); } // 80278ED8
  c->r[31]=R32(c->r[31]+0x00000000u); // 80278EDC
L_80278EE0:;
  cmpu(c,0,c->r[31],c->r[30]); // 80278EE0
  if (!crb(c,2)) { IRQCHK(c); goto L_80278EBC; } // 80278EE4
L_80278EE8:;
  c->r[11]=c->r[1]+0x00000020u; // 80278EE8
  c->lr=0x80278EF0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80278EEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80278EF0
  c->lr=c->r[0]; // 80278EF4
  c->r[1]=c->r[1]+0x00000020u; // 80278EF8
  return; // 80278EFC
}

// LoadMtx__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_80278F00(Ctx* __restrict c) {
  trace_call(0x80278F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278F00
  c->r[0]=c->lr; // 80278F04
  c->r[5]=c->r[3]|c->r[3]; // 80278F08
  W32(c->r[1]+0x00000044u,c->r[0]); // 80278F0C
  c->r[0]=R8(c->r[4]+0x00000050u); // 80278F10
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80278F14
  if (crb(c,2)) { goto L_80278F34; } // 80278F18
  c->r[3]=c->r[4]+0x00000004u; // 80278F1C
  c->r[4]=c->r[5]+0x00000084u; // 80278F20
  c->r[5]=c->r[1]+0x00000008u; // 80278F24
  c->lr=0x80278F2Cu; f_80167FF8(c); // 80278F28
  c->r[3]=c->r[1]+0x00000008u; // 80278F2C
  goto L_80278F38; // 80278F30
L_80278F34:;
  c->r[3]=c->r[3]+0x00000084u; // 80278F34
L_80278F38:;
  c->r[4]=0u+0x00000000u; // 80278F38
  c->lr=0x80278F40u; f_80184924(c); // 80278F3C
  c->r[3]=0u+0x00000000u; // 80278F40
  c->lr=0x80278F48u; f_80184A2C(c); // 80278F44
  c->r[0]=R32(c->r[1]+0x00000044u); // 80278F48
  c->lr=c->r[0]; // 80278F4C
  c->r[1]=c->r[1]+0x00000040u; // 80278F50
  return; // 80278F54
}

// GetVtxPos__Q34nw4r3lyt4PaneCFv
void f_80278F58(Ctx* __restrict c) {
  trace_call(0x80278F58u);
  c->r[4]=0u+0x55550000u; // 80278F58
  c->r[5]=R8(c->r[3]+0x000000BAu); // 80278F5C
  c->r[0]=c->r[4]+0x00005556u; // 80278F60
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80278F64
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80278F68
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278F6C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80278F70
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80278F74
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80278F78
  c->r[0]=c->r[4]+c->r[0]; // 80278F7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80278F80
  c->r[0]=c->r[5]-c->r[0]; // 80278F84
  cmps(c,0,(int32_t)c->r[0],1); // 80278F88
  if (crb(c,2)) { goto L_80278FB0; } // 80278F8C
  if (!crb(c,0)) { goto L_80278F98; } // 80278F90
  goto L_80278FA4; // 80278F94
L_80278F98:;
  cmps(c,0,(int32_t)c->r[0],3); // 80278F98
  if (!crb(c,0)) { goto L_80278FA4; } // 80278F9C
  goto L_80278FC8; // 80278FA0
L_80278FA4:;
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278FA4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80278FA8
  goto L_80278FD4; // 80278FAC
L_80278FB0:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80278FB0
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80278FB4
  c->f[1]=-c->f[1]; // 80278FB8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80278FBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80278FC0
  goto L_80278FD4; // 80278FC4
L_80278FC8:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80278FC8
  c->f[0]=-c->f[0]; // 80278FCC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80278FD0
L_80278FD4:;
  c->r[4]=0u+0x55550000u; // 80278FD4
  c->r[0]=c->r[4]+0x00005556u; // 80278FD8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80278FDC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80278FE0
  c->r[0]=c->r[4]+c->r[0]; // 80278FE4
  cmps(c,0,(int32_t)c->r[0],1); // 80278FE8
  if (crb(c,2)) { goto L_80279010; } // 80278FEC
  if (!crb(c,0)) { goto L_80278FF8; } // 80278FF0
  goto L_80279004; // 80278FF4
L_80278FF8:;
  cmps(c,0,(int32_t)c->r[0],3); // 80278FF8
  if (!crb(c,0)) { goto L_80279004; } // 80278FFC
  goto L_80279024; // 80279000
L_80279004:;
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80279004
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80279008
  goto L_8027902C; // 8027900C
L_80279010:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80279010
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80279014
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80279018
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027901C
  goto L_8027902C; // 80279020
L_80279024:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80279024
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80279028
L_8027902C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8027902C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80279030
  c->r[1]=c->r[1]+0x00000010u; // 80279034
  return; // 80279038
}

// fn_8027903C
void f_8027903C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000028u); // 8027903C
  c->r[0]=0u-c->r[3]; // 80279040
  c->r[0]=c->r[0]|c->r[3]; // 80279044
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80279048
  return; // 8027904C
}

// fn_80279050
void f_80279050(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000028u); // 80279050
  return; // 80279054
}

// GetMaterial__Q34nw4r3lyt4PaneCFUl
void f_80279058(Ctx* __restrict c) {
  trace_call(0x80279058u);
  cmps(c,0,(int32_t)c->r[4],0); // 80279058
  if (!crb(c,2)) { goto L_80279070; } // 8027905C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279060
  c->r[12]=R32(c->r[12]+0x00000068u); // 80279064
  c->ctr=c->r[12]; // 80279068
  if (true) { dispatch(c,c->ctr); return; } // 8027906C
L_80279070:;
  c->r[3]=0u+0x00000000u; // 80279070
  return; // 80279074
}

// fn_80279078
void f_80279078(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80279078
  W32(c->r[13]+0xFFFFA418u,c->r[0]); // 8027907C
  return; // 80279080
}

// __ct__Q34nw4r3lyt5GroupFPCQ44nw4r3lyt3res5GroupPQ34nw4r3lyt4Pane
void f_80279084(Ctx* __restrict c) {
  trace_call(0x80279084u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279084
  c->r[0]=c->lr; // 80279088
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027908C
  c->r[11]=c->r[1]+0x00000030u; // 80279090
  c->lr=0x80279098u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80279094
  c->r[30]=0u+0x00000000u; // 80279098
  c->r[6]=0u+0x80340000u; // 8027909C
  W32(c->r[3]+0x00000010u,c->r[30]); // 802790A0
  c->r[7]=c->r[3]+0x00000010u; // 802790A4
  c->r[6]=c->r[6]+0x000050E0u; // 802790A8
  c->r[25]=c->r[4]|c->r[4]; // 802790AC
  W32(c->r[3]+0x00000014u,c->r[30]); // 802790B0
  c->r[26]=c->r[5]|c->r[5]; // 802790B4
  c->r[24]=c->r[3]|c->r[3]; // 802790B8
  c->r[5]=0u+0x00000010u; // 802790BC
  W32(c->r[3]+0x00000000u,c->r[6]); // 802790C0
  c->r[4]=c->r[4]+0x00000008u; // 802790C4
  W32(c->r[3]+0x00000004u,c->r[30]); // 802790C8
  W32(c->r[3]+0x00000008u,c->r[30]); // 802790CC
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 802790D0
  W32(c->r[3]+0x00000010u,c->r[7]); // 802790D4
  W32(c->r[3]+0x00000014u,c->r[7]); // 802790D8
  W8(c->r[3]+0x00000029u,c->r[30]); // 802790DC
  c->r[3]=c->r[3]+0x00000018u; // 802790E0
  c->lr=0x802790E8u; f_801900A4(c); // 802790E4
  W8(c->r[24]+0x00000028u,c->r[30]); // 802790E8
  c->r[28]=c->r[25]+0x0000001Cu; // 802790EC
  c->r[27]=0u+0x00000000u; // 802790F0
  c->r[29]=0u+0x00000000u; // 802790F4
  goto L_80279178; // 802790F8
L_802790FC:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802790FC
  c->r[3]=c->r[26]|c->r[26]; // 80279100
  c->r[4]=c->r[28]+c->r[29]; // 80279104
  c->r[5]=0u+0x00000001u; // 80279108
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8027910C
  c->ctr=c->r[12]; // 80279110
  if (true) { c->lr=0x80279118u; dispatch(c,c->ctr); } // 80279114
  cmps(c,0,(int32_t)c->r[3],0); // 80279118
  c->r[31]=c->r[3]|c->r[3]; // 8027911C
  if (crb(c,2)) { goto L_80279170; } // 80279120
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80279124
  c->r[4]=0u+0x0000000Cu; // 80279128
  c->lr=0x80279130u; f_801A0EF8(c); // 8027912C
  cmps(c,0,(int32_t)c->r[3],0); // 80279130
  if (crb(c,2)) { goto L_8027914C; } // 80279134
  c->r[5]=c->r[3]|c->r[3]; // 80279138
  if (crb(c,2)) { goto L_80279150; } // 8027913C
  W32(c->r[3]+0x00000000u,c->r[30]); // 80279140
  W32(c->r[3]+0x00000004u,c->r[30]); // 80279144
  goto L_80279150; // 80279148
L_8027914C:;
  c->r[5]=0u+0x00000000u; // 8027914C
L_80279150:;
  cmps(c,0,(int32_t)c->r[5],0); // 80279150
  if (crb(c,2)) { goto L_80279170; } // 80279154
  W32(c->r[5]+0x00000008u,c->r[31]); // 80279158
  c->r[0]=c->r[24]+0x00000010u; // 8027915C
  c->r[3]=c->r[24]+0x0000000Cu; // 80279160
  c->r[4]=c->r[1]+0x00000008u; // 80279164
  W32(c->r[1]+0x00000008u,c->r[0]); // 80279168
  c->lr=0x80279170u; f_802A7C88(c); // 8027916C
L_80279170:;
  c->r[29]=c->r[29]+0x00000010u; // 80279170
  c->r[27]=c->r[27]+0x00000001u; // 80279174
L_80279178:;
  c->r[0]=R16(c->r[25]+0x00000018u); // 80279178
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 8027917C
  if (crb(c,0)) { IRQCHK(c); goto L_802790FC; } // 80279180
  c->r[11]=c->r[1]+0x00000030u; // 80279184
  c->r[3]=c->r[24]|c->r[24]; // 80279188
  c->lr=0x80279190u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027918C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80279190
  c->lr=c->r[0]; // 80279194
  c->r[1]=c->r[1]+0x00000030u; // 80279198
  return; // 8027919C
}

// __dt__Q34nw4r3lyt5GroupFv
void f_802791A0(Ctx* __restrict c) {
  trace_call(0x802791A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802791A0
  c->r[0]=c->lr; // 802791A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802791A8
  c->r[11]=c->r[1]+0x00000030u; // 802791AC
  c->lr=0x802791B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802791B0
  cmps(c,0,(int32_t)c->r[3],0); // 802791B4
  c->r[27]=c->r[3]|c->r[3]; // 802791B8
  c->r[28]=c->r[4]|c->r[4]; // 802791BC
  if (crb(c,2)) { goto L_80279230; } // 802791C0
  c->r[4]=0u+0x80340000u; // 802791C4
  c->r[31]=R32(c->r[3]+0x00000010u); // 802791C8
  c->r[4]=c->r[4]+0x000050E0u; // 802791CC
  c->r[30]=c->r[3]+0x00000010u; // 802791D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 802791D4
  goto L_80279208; // 802791D8
L_802791DC:;
  c->r[29]=c->r[31]|c->r[31]; // 802791DC
  c->r[31]=R32(c->r[31]+0x00000000u); // 802791E0
  c->r[3]=c->r[27]+0x0000000Cu; // 802791E4
  c->r[4]=c->r[1]+0x00000008u; // 802791E8
  W32(c->r[1]+0x00000008u,c->r[29]); // 802791EC
  c->lr=0x802791F4u; f_802A7BFC(c); // 802791F0
  cmps(c,0,(int32_t)c->r[29],0); // 802791F4
  if (crb(c,2)) { goto L_80279208; } // 802791F8
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 802791FC
  c->r[4]=c->r[29]|c->r[29]; // 80279200
  c->lr=0x80279208u; f_801A0F08(c); // 80279204
L_80279208:;
  cmpu(c,0,c->r[31],c->r[30]); // 80279208
  if (!crb(c,2)) { IRQCHK(c); goto L_802791DC; } // 8027920C
  c->r[3]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[3]); // 80279210
  if (crb(c,2)) { goto L_80279220; } // 80279214
  c->r[4]=0u+0x00000000u; // 80279218
  c->lr=0x80279220u; f_802A7B78(c); // 8027921C
L_80279220:;
  cmps(c,0,(int32_t)c->r[28],0); // 80279220
  if (!crb(c,1)) { goto L_80279230; } // 80279224
  c->r[3]=c->r[27]|c->r[27]; // 80279228
  c->lr=0x80279230u; f_800D6AD0(c); // 8027922C
L_80279230:;
  c->r[11]=c->r[1]+0x00000030u; // 80279230
  c->r[3]=c->r[27]|c->r[27]; // 80279234
  c->lr=0x8027923Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80279238
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027923C
  c->lr=c->r[0]; // 80279240
  c->r[1]=c->r[1]+0x00000030u; // 80279244
  return; // 80279248
}

// __dt__Q34nw4r3lyt14GroupContainerFv
void f_8027924C(Ctx* __restrict c) {
  trace_call(0x8027924Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027924C
  c->r[0]=c->lr; // 80279250
  W32(c->r[1]+0x00000034u,c->r[0]); // 80279254
  c->r[11]=c->r[1]+0x00000030u; // 80279258
  c->lr=0x80279260u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027925C
  cmps(c,0,(int32_t)c->r[3],0); // 80279260
  c->r[27]=c->r[3]|c->r[3]; // 80279264
  c->r[28]=c->r[4]|c->r[4]; // 80279268
  if (crb(c,2)) { goto L_802792F8; } // 8027926C
  c->r[31]=R32(c->r[3]+0x00000004u); // 80279270
  c->r[30]=c->r[3]+0x00000004u; // 80279274
  goto L_802792CC; // 80279278
L_8027927C:;
  c->r[29]=c->r[31]|c->r[31]; // 8027927C
  c->r[31]=R32(c->r[31]+0x00000000u); // 80279280
  c->r[3]=c->r[27]|c->r[27]; // 80279284
  c->r[4]=c->r[1]+0x00000008u; // 80279288
  W32(c->r[1]+0x00000008u,c->r[29]); // 8027928C
  c->lr=0x80279294u; f_802A7BFC(c); // 80279290
  c->r[0]=R8(c->r[29]+0x00000025u); // 80279294
  cmps(c,0,(int32_t)c->r[0],0); // 80279298
  if (!crb(c,2)) { goto L_802792CC; } // 8027929C
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 802792A0
  if (crb(c,2)) { goto L_802792CC; } // 802792A4
  c->r[12]=R32(c->r[29]+0x00000000u); // 802792A8
  c->r[3]=c->r[29]|c->r[29]; // 802792AC
  c->r[4]=0u+0xFFFFFFFFu; // 802792B0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802792B4
  c->ctr=c->r[12]; // 802792B8
  if (true) { c->lr=0x802792C0u; dispatch(c,c->ctr); } // 802792BC
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 802792C0
  c->r[4]=c->r[29]|c->r[29]; // 802792C4
  c->lr=0x802792CCu; f_801A0F08(c); // 802792C8
L_802792CC:;
  cmpu(c,0,c->r[31],c->r[30]); // 802792CC
  if (!crb(c,2)) { IRQCHK(c); goto L_8027927C; } // 802792D0
  cmps(c,0,(int32_t)c->r[27],0); // 802792D4
  if (crb(c,2)) { goto L_802792E8; } // 802792D8
  c->r[3]=c->r[27]|c->r[27]; // 802792DC
  c->r[4]=0u+0x00000000u; // 802792E0
  c->lr=0x802792E8u; f_802A7B78(c); // 802792E4
L_802792E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 802792E8
  if (!crb(c,1)) { goto L_802792F8; } // 802792EC
  c->r[3]=c->r[27]|c->r[27]; // 802792F0
  c->lr=0x802792F8u; f_800D6AD0(c); // 802792F4
L_802792F8:;
  c->r[11]=c->r[1]+0x00000030u; // 802792F8
  c->r[3]=c->r[27]|c->r[27]; // 802792FC
  c->lr=0x80279304u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80279300
  c->r[0]=R32(c->r[1]+0x00000034u); // 80279304
  c->lr=c->r[0]; // 80279308
  c->r[1]=c->r[1]+0x00000030u; // 8027930C
  return; // 80279310
}

// AppendGroup__Q34nw4r3lyt14GroupContainerFPQ34nw4r3lyt5Group
void f_80279314(Ctx* __restrict c) {
  trace_call(0x80279314u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279314
  c->r[0]=c->lr; // 80279318
  c->r[5]=c->r[4]|c->r[4]; // 8027931C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80279320
  c->r[0]=c->r[3]+0x00000004u; // 80279324
  c->r[4]=c->r[1]+0x00000008u; // 80279328
  c->r[5]=c->r[5]+0x00000004u; // 8027932C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80279330
  c->lr=0x80279338u; f_802A7C88(c); // 80279334
  c->r[0]=R32(c->r[1]+0x00000014u); // 80279338
  c->lr=c->r[0]; // 8027933C
  c->r[1]=c->r[1]+0x00000010u; // 80279340
  return; // 80279344
}

// FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
void f_80279348(Ctx* __restrict c) {
  trace_call(0x80279348u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279348
  c->r[0]=c->lr; // 8027934C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80279350
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80279354
  W32(c->r[1]+0x00000018u,c->r[30]); // 80279358
  c->r[30]=c->r[3]+0x00000004u; // 8027935C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80279360
  W32(c->r[1]+0x00000010u,c->r[28]); // 80279364
  c->r[28]=c->r[4]|c->r[4]; // 80279368
  c->r[31]=R32(c->r[3]+0x00000004u); // 8027936C
  goto L_80279398; // 80279370
L_80279374:;
  c->r[29]=c->r[31]+0xFFFFFFFCu; // 80279374
  c->r[4]=c->r[28]|c->r[28]; // 80279378
  c->r[3]=c->r[29]+0x00000018u; // 8027937C
  c->lr=0x80279384u; f_80283A20(c); // 80279380
  cmps(c,0,(int32_t)c->r[3],0); // 80279384
  if (crb(c,2)) { goto L_80279394; } // 80279388
  c->r[3]=c->r[29]|c->r[29]; // 8027938C
  goto L_802793A4; // 80279390
L_80279394:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80279394
L_80279398:;
  cmpu(c,0,c->r[31],c->r[30]); // 80279398
  if (!crb(c,2)) { IRQCHK(c); goto L_80279374; } // 8027939C
  c->r[3]=0u+0x00000000u; // 802793A0
L_802793A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802793A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802793A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802793AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802793B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 802793B4
  c->lr=c->r[0]; // 802793B8
  c->r[1]=c->r[1]+0x00000020u; // 802793BC
  return; // 802793C0
}

// SetTagProcessorImpl__Q34nw4r3lyt24@unnamed@lyt_layout_cpp@FPQ34nw4r3lyt4PanePQ34nw4r2ut19TagProcessorBase<w>
void f_802793C4(Ctx* __restrict c) {
  trace_call(0x802793C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802793C4
  c->r[0]=c->lr; // 802793C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802793CC
  c->r[11]=c->r[1]+0x00000030u; // 802793D0
  c->lr=0x802793D8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802793D4
  cmps(c,0,(int32_t)c->r[3],0); // 802793D8
  c->r[23]=c->r[3]|c->r[3]; // 802793DC
  c->r[31]=c->r[4]|c->r[4]; // 802793E0
  c->r[25]=c->r[13]+0xFFFFA430u; // 802793E4
  if (crb(c,2)) { goto L_80279430; } // 802793E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802793EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802793F0
  c->ctr=c->r[12]; // 802793F4
  if (true) { c->lr=0x802793FCu; dispatch(c,c->ctr); } // 802793F8
  goto L_80279414; // 802793FC
L_80279400:;
  cmpu(c,0,c->r[3],c->r[25]); // 80279400
  if (!crb(c,2)) { goto L_80279410; } // 80279404
  c->r[0]=0u+0x00000001u; // 80279408
  goto L_80279420; // 8027940C
L_80279410:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80279410
L_80279414:;
  cmps(c,0,(int32_t)c->r[3],0); // 80279414
  if (!crb(c,2)) { IRQCHK(c); goto L_80279400; } // 80279418
  c->r[0]=0u+0x00000000u; // 8027941C
L_80279420:;
  cmps(c,0,(int32_t)c->r[0],0); // 80279420
  if (crb(c,2)) { goto L_80279430; } // 80279424
  c->r[3]=c->r[23]|c->r[23]; // 80279428
  goto L_80279434; // 8027942C
L_80279430:;
  c->r[3]=0u+0x00000000u; // 80279430
L_80279434:;
  cmps(c,0,(int32_t)c->r[3],0); // 80279434
  if (crb(c,2)) { goto L_80279440; } // 80279438
  W32(c->r[3]+0x000000F8u,c->r[31]); // 8027943C
L_80279440:;
  c->r[30]=R32(c->r[23]+0x00000014u); // 80279440
  c->r[27]=c->r[23]+0x00000014u; // 80279444
  c->r[23]=c->r[13]+0xFFFFA430u; // 80279448
  c->r[24]=c->r[13]+0xFFFFA430u; // 8027944C
  goto L_80279550; // 80279450
L_80279454:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 80279454
  if (crb(c,2)) { goto L_802794A4; } // 80279458
  c->r[12]=R32(c->r[25]+0x00000000u); // 8027945C
  c->r[3]=c->r[25]|c->r[25]; // 80279460
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80279464
  c->ctr=c->r[12]; // 80279468
  if (true) { c->lr=0x80279470u; dispatch(c,c->ctr); } // 8027946C
  goto L_80279488; // 80279470
L_80279474:;
  cmpu(c,0,c->r[3],c->r[24]); // 80279474
  if (!crb(c,2)) { goto L_80279484; } // 80279478
  c->r[0]=0u+0x00000001u; // 8027947C
  goto L_80279494; // 80279480
L_80279484:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80279484
L_80279488:;
  cmps(c,0,(int32_t)c->r[3],0); // 80279488
  if (!crb(c,2)) { IRQCHK(c); goto L_80279474; } // 8027948C
  c->r[0]=0u+0x00000000u; // 80279490
L_80279494:;
  cmps(c,0,(int32_t)c->r[0],0); // 80279494
  if (crb(c,2)) { goto L_802794A4; } // 80279498
  c->r[3]=c->r[25]|c->r[25]; // 8027949C
  goto L_802794A8; // 802794A0
L_802794A4:;
  c->r[3]=0u+0x00000000u; // 802794A4
L_802794A8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802794A8
  if (crb(c,2)) { goto L_802794B4; } // 802794AC
  W32(c->r[3]+0x000000F8u,c->r[31]); // 802794B0
L_802794B4:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 802794B4
  c->r[26]=c->r[25]+0x00000014u; // 802794B8
  goto L_80279544; // 802794BC
L_802794C0:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 802794C0
  if (crb(c,2)) { goto L_80279510; } // 802794C4
  c->r[12]=R32(c->r[25]+0x00000000u); // 802794C8
  c->r[3]=c->r[25]|c->r[25]; // 802794CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802794D0
  c->ctr=c->r[12]; // 802794D4
  if (true) { c->lr=0x802794DCu; dispatch(c,c->ctr); } // 802794D8
  goto L_802794F4; // 802794DC
L_802794E0:;
  cmpu(c,0,c->r[3],c->r[23]); // 802794E0
  if (!crb(c,2)) { goto L_802794F0; } // 802794E4
  c->r[0]=0u+0x00000001u; // 802794E8
  goto L_80279500; // 802794EC
L_802794F0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802794F0
L_802794F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802794F4
  if (!crb(c,2)) { IRQCHK(c); goto L_802794E0; } // 802794F8
  c->r[0]=0u+0x00000000u; // 802794FC
L_80279500:;
  cmps(c,0,(int32_t)c->r[0],0); // 80279500
  if (crb(c,2)) { goto L_80279510; } // 80279504
  c->r[3]=c->r[25]|c->r[25]; // 80279508
  goto L_80279514; // 8027950C
L_80279510:;
  c->r[3]=0u+0x00000000u; // 80279510
L_80279514:;
  cmps(c,0,(int32_t)c->r[3],0); // 80279514
  if (crb(c,2)) { goto L_80279520; } // 80279518
  W32(c->r[3]+0x000000F8u,c->r[31]); // 8027951C
L_80279520:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 80279520
  goto L_80279538; // 80279524
L_80279528:;
  c->r[4]=c->r[31]|c->r[31]; // 80279528
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 8027952C
  c->lr=0x80279534u; f_802793C4(c); // 80279530
  c->r[28]=R32(c->r[28]+0x00000000u); // 80279534
L_80279538:;
  cmpu(c,0,c->r[28],c->r[25]); // 80279538
  if (!crb(c,2)) { IRQCHK(c); goto L_80279528; } // 8027953C
  c->r[29]=R32(c->r[29]+0x00000000u); // 80279540
L_80279544:;
  cmpu(c,0,c->r[29],c->r[26]); // 80279544
  if (!crb(c,2)) { IRQCHK(c); goto L_802794C0; } // 80279548
  c->r[30]=R32(c->r[30]+0x00000000u); // 8027954C
L_80279550:;
  cmpu(c,0,c->r[30],c->r[27]); // 80279550
  if (!crb(c,2)) { IRQCHK(c); goto L_80279454; } // 80279554
  c->r[11]=c->r[1]+0x00000030u; // 80279558
  c->lr=0x80279560u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027955C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80279560
  c->lr=c->r[0]; // 80279564
  c->r[1]=c->r[1]+0x00000030u; // 80279568
  return; // 8027956C
}

// IsIncludeAnimationGroupRef__Q34nw4r3lyt24@unnamed@lyt_layout_cpp@FPQ34nw4r3lyt14GroupContainerPCQ34nw4r3lyt17AnimationGroupRefUsbPQ34nw4r3lyt4Pane
void f_80279570(Ctx* __restrict c) {
  trace_call(0x80279570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279570
  c->r[0]=c->lr; // 80279574
  W32(c->r[1]+0x00000024u,c->r[0]); // 80279578
  c->r[11]=c->r[1]+0x00000020u; // 8027957C
  c->lr=0x80279584u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80279580
  c->r[26]=c->r[3]|c->r[3]; // 80279584
  c->r[27]=c->r[4]|c->r[4]; // 80279588
  c->r[28]=c->r[5]|c->r[5]; // 8027958C
  c->r[29]=c->r[6]|c->r[6]; // 80279590
  c->r[30]=c->r[7]|c->r[7]; // 80279594
  c->r[31]=0u+0x00000000u; // 80279598
  goto L_80279610; // 8027959C
L_802795A0:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 802795A0
  c->r[3]=c->r[26]|c->r[26]; // 802795A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802795A8
  c->r[4]=c->r[27]+c->r[0]; // 802795AC
  c->lr=0x802795B4u; f_80279348(c); // 802795B0
  c->r[4]=R32(c->r[3]+0x00000010u); // 802795B4
  c->r[0]=c->r[3]+0x00000010u; // 802795B8
  goto L_80279604; // 802795BC
L_802795C0:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 802795C0
  cmpu(c,0,c->r[3],c->r[30]); // 802795C4
  if (!crb(c,2)) { goto L_802795D4; } // 802795C8
  c->r[3]=0u+0x00000001u; // 802795CC
  goto L_80279620; // 802795D0
L_802795D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802795D4
  if (crb(c,2)) { goto L_80279600; } // 802795D8
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 802795DC
  goto L_802795F8; // 802795E0
L_802795E4:;
  cmpu(c,0,c->r[3],c->r[5]); // 802795E4
  if (!crb(c,2)) { goto L_802795F4; } // 802795E8
  c->r[3]=0u+0x00000001u; // 802795EC
  goto L_80279620; // 802795F0
L_802795F4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 802795F4
L_802795F8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802795F8
  if (!crb(c,2)) { IRQCHK(c); goto L_802795E4; } // 802795FC
L_80279600:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80279600
L_80279604:;
  cmpu(c,0,c->r[4],c->r[0]); // 80279604
  if (!crb(c,2)) { IRQCHK(c); goto L_802795C0; } // 80279608
  c->r[31]=c->r[31]+0x00000001u; // 8027960C
L_80279610:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 80279610
  cmpu(c,0,c->r[0],c->r[28]); // 80279614
  if (crb(c,0)) { IRQCHK(c); goto L_802795A0; } // 80279618
  c->r[3]=0u+0x00000000u; // 8027961C
L_80279620:;
  c->r[11]=c->r[1]+0x00000020u; // 80279620
  c->lr=0x80279628u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80279624
  c->r[0]=R32(c->r[1]+0x00000024u); // 80279628
  c->lr=c->r[0]; // 8027962C
  c->r[1]=c->r[1]+0x00000020u; // 80279630
  return; // 80279634
}

// __ct__Q34nw4r3lyt6LayoutFv
void f_80279638(Ctx* __restrict c) {
  trace_call(0x80279638u);
  c->r[0]=0u+0x00000000u; // 80279638
  {uint32_t ea=c->r[2]+0xFFFF9E20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027963C
  c->r[4]=0u+0x80340000u; // 80279640
  W32(c->r[3]+0x00000008u,c->r[0]); // 80279644
  c->r[5]=c->r[3]+0x00000008u; // 80279648
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8027964C
  c->r[4]=c->r[4]+0x000050F0u; // 80279650
  W32(c->r[3]+0x00000000u,c->r[4]); // 80279654
  W32(c->r[3]+0x00000004u,c->r[0]); // 80279658
  W32(c->r[3]+0x00000008u,c->r[5]); // 8027965C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80279660
  W32(c->r[3]+0x00000010u,c->r[0]); // 80279664
  W32(c->r[3]+0x00000014u,c->r[0]); // 80279668
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8027966C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80279670
  return; // 80279674
}

// __dt__Q34nw4r3lyt6LayoutFv
void f_80279678(Ctx* __restrict c) {
  trace_call(0x80279678u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279678
  c->r[0]=c->lr; // 8027967C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80279680
  c->r[11]=c->r[1]+0x00000030u; // 80279684
  c->lr=0x8027968Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80279688
  cmps(c,0,(int32_t)c->r[3],0); // 8027968C
  c->r[27]=c->r[3]|c->r[3]; // 80279690
  c->r[28]=c->r[4]|c->r[4]; // 80279694
  if (crb(c,2)) { goto L_80279784; } // 80279698
  c->r[29]=R32(c->r[3]+0x00000014u); // 8027969C
  c->r[4]=0u+0x80340000u; // 802796A0
  c->r[4]=c->r[4]+0x000050F0u; // 802796A4
  cmps(c,0,(int32_t)c->r[29],0); // 802796A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 802796AC
  if (crb(c,2)) { goto L_802796CC; } // 802796B0
  c->r[3]=c->r[29]|c->r[29]; // 802796B4
  c->r[4]=0u+0xFFFFFFFFu; // 802796B8
  c->lr=0x802796C0u; f_8027924C(c); // 802796BC
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 802796C0
  c->r[4]=c->r[29]|c->r[29]; // 802796C4
  c->lr=0x802796CCu; f_801A0F08(c); // 802796C8
L_802796CC:;
  c->r[29]=R32(c->r[27]+0x00000010u); // 802796CC
  cmps(c,1,(int32_t)c->r[29],0); // 802796D0
  if (crb(c,6)) { goto L_8027970C; } // 802796D4
  c->r[0]=R8(c->r[29]+0x000000D6u); // 802796D8
  cmps(c,0,(int32_t)c->r[0],0); // 802796DC
  if (!crb(c,2)) { goto L_8027970C; } // 802796E0
  if (crb(c,6)) { goto L_8027970C; } // 802796E4
  c->r[12]=R32(c->r[29]+0x00000000u); // 802796E8
  c->r[3]=c->r[29]|c->r[29]; // 802796EC
  c->r[4]=0u+0xFFFFFFFFu; // 802796F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802796F4
  c->ctr=c->r[12]; // 802796F8
  if (true) { c->lr=0x80279700u; dispatch(c,c->ctr); } // 802796FC
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80279700
  c->r[4]=c->r[29]|c->r[29]; // 80279704
  c->lr=0x8027970Cu; f_801A0F08(c); // 80279708
L_8027970C:;
  c->r[31]=R32(c->r[27]+0x00000008u); // 8027970C
  c->r[30]=c->r[27]+0x00000008u; // 80279710
  goto L_8027975C; // 80279714
L_80279718:;
  c->r[29]=c->r[31]|c->r[31]; // 80279718
  c->r[31]=R32(c->r[31]+0x00000000u); // 8027971C
  c->r[3]=c->r[27]+0x00000004u; // 80279720
  c->r[4]=c->r[1]+0x00000008u; // 80279724
  W32(c->r[1]+0x00000008u,c->r[29]); // 80279728
  c->lr=0x80279730u; f_802A7BFC(c); // 8027972C
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 80279730
  if (crb(c,2)) { goto L_8027975C; } // 80279734
  c->r[12]=R32(c->r[29]+0x00000000u); // 80279738
  c->r[3]=c->r[29]|c->r[29]; // 8027973C
  c->r[4]=0u+0xFFFFFFFFu; // 80279740
  c->r[12]=R32(c->r[12]+0x00000008u); // 80279744
  c->ctr=c->r[12]; // 80279748
  if (true) { c->lr=0x80279750u; dispatch(c,c->ctr); } // 8027974C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80279750
  c->r[4]=c->r[29]|c->r[29]; // 80279754
  c->lr=0x8027975Cu; f_801A0F08(c); // 80279758
L_8027975C:;
  cmpu(c,0,c->r[31],c->r[30]); // 8027975C
  if (!crb(c,2)) { IRQCHK(c); goto L_80279718; } // 80279760
  c->r[3]=addc(c,c->r[27],0x00000004u,0); cr0(c,c->r[3]); // 80279764
  if (crb(c,2)) { goto L_80279774; } // 80279768
  c->r[4]=0u+0x00000000u; // 8027976C
  c->lr=0x80279774u; f_802A7B78(c); // 80279770
L_80279774:;
  cmps(c,0,(int32_t)c->r[28],0); // 80279774
  if (!crb(c,1)) { goto L_80279784; } // 80279778
  c->r[3]=c->r[27]|c->r[27]; // 8027977C
  c->lr=0x80279784u; f_800D6AD0(c); // 80279780
L_80279784:;
  c->r[11]=c->r[1]+0x00000030u; // 80279784
  c->r[3]=c->r[27]|c->r[27]; // 80279788
  c->lr=0x80279790u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027978C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80279790
  c->lr=c->r[0]; // 80279794
  c->r[1]=c->r[1]+0x00000030u; // 80279798
  return; // 8027979C
}

// Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
void f_802797A0(Ctx* __restrict c) {
  trace_call(0x802797A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802797A0
  c->r[0]=c->lr; // 802797A4
  W32(c->r[1]+0x00000064u,c->r[0]); // 802797A8
  c->r[11]=c->r[1]+0x00000060u; // 802797AC
  c->lr=0x802797B4u; f_80185EA0(c); // 802797B0
  c->r[31]=c->r[4]|c->r[4]; // 802797B4
  c->r[4]=0u+0x524C0000u; // 802797B8
  c->r[30]=c->r[3]|c->r[3]; // 802797BC
  c->r[14]=c->r[5]|c->r[5]; // 802797C0
  c->r[4]=c->r[4]+0x00005954u; // 802797C4
  c->r[3]=c->r[31]|c->r[31]; // 802797C8
  c->lr=0x802797D0u; f_80283A78(c); // 802797CC
  cmps(c,0,(int32_t)c->r[3],0); // 802797D0
  if (!crb(c,2)) { goto L_802797E0; } // 802797D4
  c->r[3]=0u+0x00000000u; // 802797D8
  goto L_80279AC8; // 802797DC
L_802797E0:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 802797E0
  c->r[3]=0u+0x00000000u; // 802797E4
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; cr0(c,c->r[0]); // 802797E8
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 802797EC
  if (!crb(c,2)) { goto L_80279808; } // 802797F0
  cmpu(c,0,c->r[0],0x00000008u); // 802797F4
  if (crb(c,0)) { goto L_80279808; } // 802797F8
  cmpu(c,0,c->r[0],0x0000000Au); // 802797FC
  if (crb(c,1)) { goto L_80279808; } // 80279800
  c->r[3]=0u+0x00000001u; // 80279804
L_80279808:;
  cmps(c,0,(int32_t)c->r[3],0); // 80279808
  if (!crb(c,2)) { goto L_80279818; } // 8027980C
  c->r[3]=0u+0x00000000u; // 80279810
  goto L_80279AC8; // 80279814
L_80279818:;
  c->r[22]=0u+0x00000000u; // 80279818
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 8027981C
  c->r[28]=0u+0x70610000u; // 80279820
  W32(c->r[1]+0x00000014u,c->r[14]); // 80279824
  c->r[16]=c->r[31]+c->r[0]; // 80279828
  c->r[20]=0u+0x00000000u; // 8027982C
  W32(c->r[1]+0x00000008u,c->r[22]); // 80279830
  c->r[23]=c->r[28]+0x00006531u; // 80279834
  c->r[19]=0u+0x00000000u; // 80279838
  c->r[18]=0u+0x00000000u; // 8027983C
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 80279840
  c->r[17]=0u+0x00000000u; // 80279844
  c->r[15]=0u+0x00000000u; // 80279848
  c->r[14]=0u+0x6D610000u; // 8027984C
  W32(c->r[1]+0x00000010u,c->r[22]); // 80279850
  c->r[29]=0u+0x74780000u; // 80279854
  c->r[25]=0u+0x626E0000u; // 80279858
  c->r[26]=0u+0x6C790000u; // 8027985C
  c->r[27]=0u+0x67720000u; // 80279860
  c->r[24]=0u+0x666E0000u; // 80279864
  goto L_80279AB8; // 80279868
L_8027986C:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 8027986C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 80279870
  if (crb(c,2)) { goto L_802799E8; } // 80279874
  if (!crb(c,0)) { goto L_802798EC; } // 80279878
  c->r[0]=c->r[27]+0x00007031u; // 8027987C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80279880
  if (crb(c,2)) { goto L_802799F4; } // 80279884
  if (!crb(c,0)) { goto L_802798BC; } // 80279888
  c->r[0]=c->r[24]+0x00006C31u; // 8027988C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80279890
  if (crb(c,2)) { goto L_80279984; } // 80279894
  if (!crb(c,0)) { goto L_802798AC; } // 80279898
  c->r[0]=c->r[25]+0x00006431u; // 8027989C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802798A0
  if (crb(c,2)) { goto L_80279994; } // 802798A4
  goto L_80279AAC; // 802798A8
L_802798AC:;
  c->r[0]=c->r[27]+0x00006531u; // 802798AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802798B0
  if (crb(c,2)) { goto L_80279AA8; } // 802798B4
  goto L_80279AAC; // 802798B8
L_802798BC:;
  c->r[0]=c->r[26]+0x00007431u; // 802798BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802798C0
  if (crb(c,2)) { goto L_80279968; } // 802798C4
  if (!crb(c,0)) { goto L_802798DC; } // 802798C8
  c->r[0]=c->r[27]+0x00007331u; // 802798CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802798D0
  if (crb(c,2)) { goto L_80279AA0; } // 802798D4
  goto L_80279AAC; // 802798D8
L_802798DC:;
  c->r[0]=c->r[14]+0x00007431u; // 802798DC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802798E0
  if (crb(c,2)) { goto L_8027998C; } // 802798E4
  goto L_80279AAC; // 802798E8
L_802798EC:;
  c->r[0]=c->r[29]+0x00006C31u; // 802798EC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802798F0
  if (crb(c,2)) { goto L_8027997C; } // 802798F4
  if (!crb(c,0)) { goto L_80279930; } // 802798F8
  c->r[0]=c->r[28]+0x00007331u; // 802798FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80279900
  if (crb(c,2)) { goto L_802799E0; } // 80279904
  if (!crb(c,0)) { goto L_8027991C; } // 80279908
  c->r[0]=c->r[28]+0x00006E31u; // 8027990C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80279910
  if (crb(c,2)) { goto L_80279994; } // 80279914
  goto L_80279AAC; // 80279918
L_8027991C:;
  c->r[4]=0u+0x70690000u; // 8027991C
  c->r[0]=c->r[4]+0x00006331u; // 80279920
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80279924
  if (crb(c,2)) { goto L_80279994; } // 80279928
  goto L_80279AAC; // 8027992C
L_80279930:;
  c->r[4]=0u+0x75730000u; // 80279930
  c->r[0]=c->r[4]+0x00006431u; // 80279934
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80279938
  if (crb(c,2)) { goto L_802799D8; } // 8027993C
  if (!crb(c,0)) { goto L_80279954; } // 80279940
  c->r[0]=c->r[29]+0x00007431u; // 80279944
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80279948
  if (crb(c,2)) { goto L_80279994; } // 8027994C
  goto L_80279AAC; // 80279950
L_80279954:;
  c->r[4]=0u+0x776E0000u; // 80279954
  c->r[0]=c->r[4]+0x00006431u; // 80279958
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8027995C
  if (crb(c,2)) { goto L_80279994; } // 80279960
  goto L_80279AAC; // 80279964
L_80279968:;
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80279968
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027996C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 80279970
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 80279974
  goto L_80279AAC; // 80279978
L_8027997C:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 8027997C
  goto L_80279AAC; // 80279980
L_80279984:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 80279984
  goto L_80279AAC; // 80279988
L_8027998C:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 8027998C
  goto L_80279AAC; // 80279990
L_80279994:;
  c->r[4]=c->r[16]|c->r[16]; // 80279994
  c->r[5]=c->r[1]+0x00000008u; // 80279998
  c->lr=0x802799A0u; f_8027A1A4(c); // 8027999C
  cmps(c,0,(int32_t)c->r[3],0); // 802799A0
  c->r[21]=c->r[3]|c->r[3]; // 802799A4
  if (crb(c,2)) { goto L_80279AAC; } // 802799A8
  c->r[0]=R32(c->r[30]+0x00000010u); // 802799AC
  cmps(c,0,(int32_t)c->r[0],0); // 802799B0
  if (!crb(c,2)) { goto L_802799BC; } // 802799B4
  W32(c->r[30]+0x00000010u,c->r[3]); // 802799B8
L_802799BC:;
  cmps(c,0,(int32_t)c->r[20],0); // 802799BC
  if (crb(c,2)) { goto L_802799D0; } // 802799C0
  c->r[3]=c->r[20]|c->r[20]; // 802799C4
  c->r[4]=c->r[21]|c->r[21]; // 802799C8
  c->lr=0x802799D0u; f_80278434(c); // 802799CC
L_802799D0:;
  c->r[19]=c->r[21]|c->r[21]; // 802799D0
  goto L_80279AAC; // 802799D4
L_802799D8:;
  W32(c->r[19]+0x000000B4u,c->r[16]); // 802799D8
  goto L_80279AAC; // 802799DC
L_802799E0:;
  c->r[20]=c->r[19]|c->r[19]; // 802799E0
  goto L_80279AAC; // 802799E4
L_802799E8:;
  c->r[19]=c->r[20]|c->r[20]; // 802799E8
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 802799EC
  goto L_80279AAC; // 802799F0
L_802799F4:;
  cmps(c,0,(int32_t)c->r[18],0); // 802799F4
  if (!crb(c,2)) { goto L_80279A40; } // 802799F8
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 802799FC
  c->r[18]=0u+0x00000001u; // 80279A00
  c->r[4]=0u+0x0000000Cu; // 80279A04
  c->lr=0x80279A0Cu; f_801A0EF8(c); // 80279A08
  cmps(c,0,(int32_t)c->r[3],0); // 80279A0C
  if (crb(c,2)) { goto L_80279A34; } // 80279A10
  if (crb(c,2)) { goto L_80279A38; } // 80279A14
  W32(c->r[3]+0x00000004u,c->r[22]); // 80279A18
  c->r[4]=c->r[3]+0x00000004u; // 80279A1C
  W32(c->r[3]+0x00000008u,c->r[22]); // 80279A20
  W32(c->r[3]+0x00000000u,c->r[22]); // 80279A24
  W32(c->r[3]+0x00000004u,c->r[4]); // 80279A28
  W32(c->r[3]+0x00000008u,c->r[4]); // 80279A2C
  goto L_80279A38; // 80279A30
L_80279A34:;
  c->r[3]=0u+0x00000000u; // 80279A34
L_80279A38:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 80279A38
  goto L_80279AAC; // 80279A3C
L_80279A40:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80279A40
  cmps(c,0,(int32_t)c->r[0],0); // 80279A44
  if (crb(c,2)) { goto L_80279AAC; } // 80279A48
  cmps(c,0,(int32_t)c->r[17],1); // 80279A4C
  if (!crb(c,2)) { goto L_80279AAC; } // 80279A50
  c->r[21]=R32(c->r[30]+0x00000010u); // 80279A54
  c->r[4]=0u+0x0000002Cu; // 80279A58
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80279A5C
  c->lr=0x80279A64u; f_801A0EF8(c); // 80279A60
  cmps(c,0,(int32_t)c->r[3],0); // 80279A64
  if (crb(c,2)) { goto L_80279A88; } // 80279A68
  c->r[4]=c->r[3]|c->r[3]; // 80279A6C
  if (crb(c,2)) { goto L_80279A8C; } // 80279A70
  c->r[4]=c->r[16]|c->r[16]; // 80279A74
  c->r[5]=c->r[21]|c->r[21]; // 80279A78
  c->lr=0x80279A80u; f_80279084(c); // 80279A7C
  c->r[4]=c->r[3]|c->r[3]; // 80279A80
  goto L_80279A8C; // 80279A84
L_80279A88:;
  c->r[4]=0u+0x00000000u; // 80279A88
L_80279A8C:;
  cmps(c,0,(int32_t)c->r[4],0); // 80279A8C
  if (crb(c,2)) { goto L_80279AAC; } // 80279A90
  c->r[3]=R32(c->r[30]+0x00000014u); // 80279A94
  c->lr=0x80279A9Cu; f_80279314(c); // 80279A98
  goto L_80279AAC; // 80279A9C
L_80279AA0:;
  c->r[17]=c->r[17]+0x00000001u; // 80279AA0
  goto L_80279AAC; // 80279AA4
L_80279AA8:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 80279AA8
L_80279AAC:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 80279AAC
  c->r[15]=c->r[15]+0x00000001u; // 80279AB0
  c->r[16]=c->r[16]+c->r[0]; // 80279AB4
L_80279AB8:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 80279AB8
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 80279ABC
  if (crb(c,0)) { IRQCHK(c); goto L_8027986C; } // 80279AC0
  c->r[3]=0u+0x00000001u; // 80279AC4
L_80279AC8:;
  c->r[11]=c->r[1]+0x00000060u; // 80279AC8
  c->lr=0x80279AD0u; f_80185EEC(c); // 80279ACC
  c->r[0]=R32(c->r[1]+0x00000064u); // 80279AD0
  c->lr=c->r[0]; // 80279AD4
  c->r[1]=c->r[1]+0x00000060u; // 80279AD8
  return; // 80279ADC
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFv
void f_80279AE0(Ctx* __restrict c) {
  trace_call(0x80279AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279AE0
  c->r[0]=c->lr; // 80279AE4
  c->r[4]=0u+0x00000020u; // 80279AE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80279AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80279AF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80279AF4
  c->r[30]=c->r[3]|c->r[3]; // 80279AF8
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 80279AFC
  c->lr=0x80279B04u; f_801A0EF8(c); // 80279B00
  cmps(c,0,(int32_t)c->r[3],0); // 80279B04
  if (crb(c,2)) { goto L_80279B20; } // 80279B08
  c->r[31]=c->r[3]|c->r[3]; // 80279B0C
  if (crb(c,2)) { goto L_80279B24; } // 80279B10
  c->lr=0x80279B18u; f_802821E8(c); // 80279B14
  c->r[31]=c->r[3]|c->r[3]; // 80279B18
  goto L_80279B24; // 80279B1C
L_80279B20:;
  c->r[31]=0u+0x00000000u; // 80279B20
L_80279B24:;
  cmps(c,0,(int32_t)c->r[31],0); // 80279B24
  if (crb(c,2)) { goto L_80279B44; } // 80279B28
  c->r[0]=c->r[30]+0x00000008u; // 80279B2C
  c->r[3]=c->r[30]+0x00000004u; // 80279B30
  W32(c->r[1]+0x00000008u,c->r[0]); // 80279B34
  c->r[4]=c->r[1]+0x00000008u; // 80279B38
  c->r[5]=c->r[31]+0x00000004u; // 80279B3C
  c->lr=0x80279B44u; f_802A7C88(c); // 80279B40
L_80279B44:;
  c->r[3]=c->r[31]|c->r[31]; // 80279B44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80279B48
  c->r[30]=R32(c->r[1]+0x00000018u); // 80279B4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80279B50
  c->lr=c->r[0]; // 80279B54
  c->r[1]=c->r[1]+0x00000020u; // 80279B58
  return; // 80279B5C
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
void f_80279B60(Ctx* __restrict c) {
  trace_call(0x80279B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279B60
  c->r[0]=c->lr; // 80279B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80279B68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80279B6C
  c->r[31]=c->r[5]|c->r[5]; // 80279B70
  W32(c->r[1]+0x00000018u,c->r[30]); // 80279B74
  c->r[30]=c->r[3]|c->r[3]; // 80279B78
  c->r[3]=c->r[1]+0x00000008u; // 80279B7C
  c->lr=0x80279B84u; f_80282C4C(c); // 80279B80
  c->r[12]=R32(c->r[30]+0x00000000u); // 80279B84
  c->r[3]=c->r[30]|c->r[30]; // 80279B88
  c->r[5]=c->r[31]|c->r[31]; // 80279B8C
  c->r[4]=c->r[1]+0x00000008u; // 80279B90
  c->r[12]=R32(c->r[12]+0x00000018u); // 80279B94
  c->ctr=c->r[12]; // 80279B98
  if (true) { c->lr=0x80279BA0u; dispatch(c,c->ctr); } // 80279B9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80279BA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80279BA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80279BA8
  c->lr=c->r[0]; // 80279BAC
  c->r[1]=c->r[1]+0x00000020u; // 80279BB0
  return; // 80279BB4
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor
void f_80279BB8(Ctx* __restrict c) {
  trace_call(0x80279BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279BB8
  c->r[0]=c->lr; // 80279BBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80279BC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80279BC4
  c->r[31]=R32(c->r[4]+0x00000004u); // 80279BC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80279BCC
  cmps(c,0,(int32_t)c->r[31],0); // 80279BD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80279BD4
  c->r[29]=c->r[5]|c->r[5]; // 80279BD8
  if (!crb(c,2)) { goto L_80279BE8; } // 80279BDC
  c->r[3]=0u+0x00000000u; // 80279BE0
  goto L_80279C20; // 80279BE4
L_80279BE8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279BE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80279BEC
  c->ctr=c->r[12]; // 80279BF0
  if (true) { c->lr=0x80279BF8u; dispatch(c,c->ctr); } // 80279BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80279BF8
  c->r[30]=c->r[3]|c->r[3]; // 80279BFC
  if (crb(c,2)) { goto L_80279C1C; } // 80279C00
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279C04
  c->r[4]=c->r[31]|c->r[31]; // 80279C08
  c->r[5]=c->r[29]|c->r[29]; // 80279C0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80279C10
  c->ctr=c->r[12]; // 80279C14
  if (true) { c->lr=0x80279C1Cu; dispatch(c,c->ctr); } // 80279C18
L_80279C1C:;
  c->r[3]=c->r[30]|c->r[30]; // 80279C1C
L_80279C20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80279C20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80279C24
  c->r[30]=R32(c->r[1]+0x00000018u); // 80279C28
  c->r[29]=R32(c->r[1]+0x00000014u); // 80279C2C
  c->lr=c->r[0]; // 80279C30
  c->r[1]=c->r[1]+0x00000020u; // 80279C34
  return; // 80279C38
}

// BindAnimation__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransform
void f_80279C3C(Ctx* __restrict c) {
  trace_call(0x80279C3Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80279C3C
  cmps(c,0,(int32_t)c->r[3],0); // 80279C40
  if (crb(c,2)) return; // 80279C44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279C48
  c->r[5]=0u+0x00000001u; // 80279C4C
  c->r[6]=0u+0x00000000u; // 80279C50
  c->r[12]=R32(c->r[12]+0x00000044u); // 80279C54
  c->ctr=c->r[12]; // 80279C58
  if (true) { dispatch(c,c->ctr); return; } // 80279C5C
  return; // 80279C60
}

// fn_80279C64
void f_80279C64(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 80279C64
  cmps(c,0,(int32_t)c->r[3],0); // 80279C68
  if (crb(c,2)) return; // 80279C6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279C70
  c->r[5]=0u+0x00000001u; // 80279C74
  c->r[12]=R32(c->r[12]+0x00000048u); // 80279C78
  c->ctr=c->r[12]; // 80279C7C
  if (true) { dispatch(c,c->ctr); return; } // 80279C80
  return; // 80279C84
}

// fn_80279C88
void f_80279C88(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279C88
  c->r[4]=0u+0x00000000u; // 80279C8C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80279C90
  c->ctr=c->r[12]; // 80279C94
  if (true) { dispatch(c,c->ctr); return; } // 80279C98
}

// fn_80279C9C
void f_80279C9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279C9C
  c->r[0]=c->lr; // 80279CA0
  W32(c->r[1]+0x00000064u,c->r[0]); // 80279CA4
  c->r[11]=c->r[1]+0x00000060u; // 80279CA8
  c->lr=0x80279CB0u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80279CAC
  c->r[0]=R32(c->r[3]+0x00000010u); // 80279CB0
  c->r[29]=c->r[3]|c->r[3]; // 80279CB4
  c->r[30]=c->r[4]|c->r[4]; // 80279CB8
  c->r[31]=c->r[5]|c->r[5]; // 80279CBC
  cmps(c,0,(int32_t)c->r[0],0); // 80279CC0
  if (!crb(c,2)) { goto L_80279CD0; } // 80279CC4
  c->r[3]=0u+0x00000000u; // 80279CC8
  goto L_80279F20; // 80279CCC
L_80279CD0:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 80279CD0
  cmps(c,0,(int32_t)c->r[0],0); // 80279CD4
  if (!crb(c,2)) { goto L_80279CE4; } // 80279CD8
  c->r[3]=0u+0x00000000u; // 80279CDC
  goto L_80279F20; // 80279CE0
L_80279CE4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279CE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 80279CE8
  c->ctr=c->r[12]; // 80279CEC
  if (true) { c->lr=0x80279CF4u; dispatch(c,c->ctr); } // 80279CF0
  c->r[22]=c->r[3]|c->r[3]; // 80279CF4
  c->r[3]=c->r[30]|c->r[30]; // 80279CF8
  c->lr=0x80279D00u; f_80282D5C(c); // 80279CFC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80279D00
  c->r[24]=c->r[3]|c->r[3]; // 80279D04
  c->r[26]=0u+0x00000000u; // 80279D08
  if (!crb(c,2)) { goto L_80279D54; } // 80279D0C
  c->r[12]=R32(c->r[22]+0x00000000u); // 80279D10
  c->r[3]=c->r[22]|c->r[22]; // 80279D14
  c->r[4]=R32(c->r[30]+0x00000004u); // 80279D18
  c->r[5]=c->r[31]|c->r[31]; // 80279D1C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80279D20
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 80279D24
  c->ctr=c->r[12]; // 80279D28
  if (true) { c->lr=0x80279D30u; dispatch(c,c->ctr); } // 80279D2C
  c->r[3]=R32(c->r[29]+0x00000010u); // 80279D30
  c->r[4]=c->r[22]|c->r[22]; // 80279D34
  c->r[5]=0u+0x00000001u; // 80279D38
  c->r[6]=0u+0x00000001u; // 80279D3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279D40
  c->r[12]=R32(c->r[12]+0x00000044u); // 80279D44
  c->ctr=c->r[12]; // 80279D48
  if (true) { c->lr=0x80279D50u; dispatch(c,c->ctr); } // 80279D4C
  goto L_80279E14; // 80279D50
L_80279D54:;
  c->r[3]=c->r[30]|c->r[30]; // 80279D54
  c->lr=0x80279D5Cu; f_80282D78(c); // 80279D58
  c->r[27]=c->r[3]|c->r[3]; // 80279D5C
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 80279D60
  c->r[23]=c->r[27]|c->r[27]; // 80279D64
  c->r[28]=0u+0x00000000u; // 80279D68
  goto L_80279DA4; // 80279D6C
L_80279D70:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80279D70
  c->r[4]=c->r[23]|c->r[23]; // 80279D74
  c->lr=0x80279D7Cu; f_80279348(c); // 80279D78
  c->r[21]=c->r[3]|c->r[3]; // 80279D7C
  c->r[3]=c->r[30]|c->r[30]; // 80279D80
  c->lr=0x80279D88u; f_80282D98(c); // 80279D84
  c->r[5]=c->r[3]|c->r[3]; // 80279D88
  c->r[3]=c->r[30]|c->r[30]; // 80279D8C
  c->r[4]=c->r[21]|c->r[21]; // 80279D90
  c->lr=0x80279D98u; f_80282ECC(c); // 80279D94
  c->r[26]=c->r[26]+c->r[3]; // 80279D98
  c->r[23]=c->r[23]+0x00000014u; // 80279D9C
  c->r[28]=c->r[28]+0x00000001u; // 80279DA0
L_80279DA4:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[25]); // 80279DA4
  if (crb(c,0)) { IRQCHK(c); goto L_80279D70; } // 80279DA8
  c->r[12]=R32(c->r[22]+0x00000000u); // 80279DAC
  c->r[3]=c->r[22]|c->r[22]; // 80279DB0
  c->r[5]=c->r[31]|c->r[31]; // 80279DB4
  c->r[6]=rotl(c->r[26],0)&0x0000FFFFu; // 80279DB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80279DBC
  c->r[4]=R32(c->r[30]+0x00000004u); // 80279DC0
  c->ctr=c->r[12]; // 80279DC4
  if (true) { c->lr=0x80279DCCu; dispatch(c,c->ctr); } // 80279DC8
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 80279DCC
  c->r[21]=0u+0x00000000u; // 80279DD0
  goto L_80279E0C; // 80279DD4
L_80279DD8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80279DD8
  c->r[4]=c->r[27]|c->r[27]; // 80279DDC
  c->lr=0x80279DE4u; f_80279348(c); // 80279DE0
  c->r[23]=c->r[3]|c->r[3]; // 80279DE4
  c->r[3]=c->r[30]|c->r[30]; // 80279DE8
  c->lr=0x80279DF0u; f_80282D98(c); // 80279DEC
  c->r[5]=c->r[3]|c->r[3]; // 80279DF0
  c->r[3]=c->r[23]|c->r[23]; // 80279DF4
  c->r[4]=c->r[22]|c->r[22]; // 80279DF8
  c->r[6]=0u+0x00000001u; // 80279DFC
  c->lr=0x80279E04u; f_80284510(c); // 80279E00
  c->r[27]=c->r[27]+0x00000014u; // 80279E04
  c->r[21]=c->r[21]+0x00000001u; // 80279E08
L_80279E0C:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[25]); // 80279E0C
  if (crb(c,0)) { IRQCHK(c); goto L_80279DD8; } // 80279E10
L_80279E14:;
  c->r[3]=c->r[30]|c->r[30]; // 80279E14
  c->lr=0x80279E1Cu; f_80282DB8(c); // 80279E18
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80279E1C
  c->r[25]=c->r[3]|c->r[3]; // 80279E20
  if (crb(c,2)) { goto L_80279F1C; } // 80279E24
  c->r[3]=c->r[30]|c->r[30]; // 80279E28
  c->lr=0x80279E30u; f_80282DD4(c); // 80279E2C
  c->r[23]=c->r[3]|c->r[3]; // 80279E30
  c->r[26]=rotl(c->r[25],0)&0x0000FFFFu; // 80279E34
  c->r[21]=0u+0x00000000u; // 80279E38
  goto L_80279F14; // 80279E3C
L_80279E40:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 80279E40
  c->r[4]=c->r[23]|c->r[23]; // 80279E44
  c->r[5]=0u+0x00000001u; // 80279E48
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279E4C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80279E50
  c->ctr=c->r[12]; // 80279E54
  if (true) { c->lr=0x80279E5Cu; dispatch(c,c->ctr); } // 80279E58
  c->r[20]=c->r[3]|c->r[3]; // 80279E5C
  c->r[3]=c->r[1]+0x00000008u; // 80279E60
  c->lr=0x80279E68u; f_80282C34(c); // 80279E64
  c->r[3]=c->r[1]+0x00000008u; // 80279E68
  c->lr=0x80279E70u; f_80282F34(c); // 80279E6C
  c->r[4]=c->r[20]|c->r[20]; // 80279E70
  c->r[5]=c->r[30]|c->r[30]; // 80279E74
  c->r[3]=c->r[1]+0x00000008u; // 80279E78
  c->lr=0x80279E80u; f_80282F6C(c); // 80279E7C
  c->r[0]=R16(c->r[1]+0x0000001Au); // 80279E80
  cmps(c,0,(int32_t)c->r[0],0); // 80279E84
  if (crb(c,2)) { goto L_80279F0C; } // 80279E88
  c->r[3]=R32(c->r[29]+0x00000014u); // 80279E8C
  c->r[4]=c->r[23]+0x00000011u; // 80279E90
  c->lr=0x80279E98u; f_80279348(c); // 80279E94
  c->r[28]=R32(c->r[3]+0x00000010u); // 80279E98
  c->r[27]=c->r[3]+0x00000010u; // 80279E9C
  goto L_80279F04; // 80279EA0
L_80279EA4:;
  c->r[22]=R32(c->r[28]+0x00000008u); // 80279EA4
  cmpu(c,0,c->r[22],c->r[20]); // 80279EA8
  if (crb(c,2)) { goto L_80279F00; } // 80279EAC
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80279EB0
  if (crb(c,2)) { goto L_80279EEC; } // 80279EB4
  c->r[3]=c->r[30]|c->r[30]; // 80279EB8
  c->lr=0x80279EC0u; f_80282D98(c); // 80279EBC
  c->r[25]=c->r[3]|c->r[3]; // 80279EC0
  c->r[3]=c->r[30]|c->r[30]; // 80279EC4
  c->lr=0x80279ECCu; f_80282D78(c); // 80279EC8
  c->r[4]=c->r[3]|c->r[3]; // 80279ECC
  c->r[3]=R32(c->r[29]+0x00000014u); // 80279ED0
  c->r[6]=c->r[25]|c->r[25]; // 80279ED4
  c->r[7]=c->r[22]|c->r[22]; // 80279ED8
  c->r[5]=rotl(c->r[24],0)&0x0000FFFFu; // 80279EDC
  c->lr=0x80279EE4u; f_80279570(c); // 80279EE0
  cmps(c,0,(int32_t)c->r[3],0); // 80279EE4
  if (crb(c,2)) { goto L_80279F00; } // 80279EE8
L_80279EEC:;
  c->r[5]=R32(c->r[28]+0x00000008u); // 80279EEC
  c->r[4]=c->r[29]|c->r[29]; // 80279EF0
  c->r[6]=c->r[31]|c->r[31]; // 80279EF4
  c->r[3]=c->r[1]+0x00000008u; // 80279EF8
  c->lr=0x80279F00u; f_802831CC(c); // 80279EFC
L_80279F00:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80279F00
L_80279F04:;
  cmpu(c,0,c->r[28],c->r[27]); // 80279F04
  if (!crb(c,2)) { IRQCHK(c); goto L_80279EA4; } // 80279F08
L_80279F0C:;
  c->r[23]=c->r[23]+0x00000024u; // 80279F0C
  c->r[21]=c->r[21]+0x00000001u; // 80279F10
L_80279F14:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[26]); // 80279F14
  if (crb(c,0)) { IRQCHK(c); goto L_80279E40; } // 80279F18
L_80279F1C:;
  c->r[3]=0u+0x00000001u; // 80279F1C
L_80279F20:;
  c->r[11]=c->r[1]+0x00000060u; // 80279F20
  c->lr=0x80279F28u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80279F24
  c->r[0]=R32(c->r[1]+0x00000064u); // 80279F28
  c->lr=c->r[0]; // 80279F2C
  c->r[1]=c->r[1]+0x00000060u; // 80279F30
  return; // 80279F34
}

// fn_80279F38
void f_80279F38(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 80279F38
  cmps(c,0,(int32_t)c->r[3],0); // 80279F3C
  if (crb(c,2)) return; // 80279F40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279F44
  c->r[6]=0u+0x00000001u; // 80279F48
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80279F4C
  c->ctr=c->r[12]; // 80279F50
  if (true) { dispatch(c,c->ctr); return; } // 80279F54
  return; // 80279F58
}

// fn_80279F5C
void f_80279F5C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 80279F5C
  cmps(c,0,(int32_t)c->r[3],0); // 80279F60
  if (crb(c,2)) return; // 80279F64
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279F68
  c->r[12]=R32(c->r[12]+0x00000010u); // 80279F6C
  c->ctr=c->r[12]; // 80279F70
  if (true) { dispatch(c,c->ctr); return; } // 80279F74
  return; // 80279F78
}

// fn_80279F7C
void f_80279F7C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 80279F7C
  cmps(c,0,(int32_t)c->r[3],0); // 80279F80
  if (crb(c,2)) return; // 80279F84
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279F88
  c->r[12]=R32(c->r[12]+0x00000014u); // 80279F8C
  c->ctr=c->r[12]; // 80279F90
  if (true) { dispatch(c,c->ctr); return; } // 80279F94
  return; // 80279F98
}

// fn_80279F9C
void f_80279F9C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 80279F9C
  cmps(c,0,(int32_t)c->r[3],0); // 80279FA0
  if (crb(c,2)) return; // 80279FA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80279FA8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80279FAC
  c->ctr=c->r[12]; // 80279FB0
  if (true) { dispatch(c,c->ctr); return; } // 80279FB4
  return; // 80279FB8
}

// GetLayoutRect__Q34nw4r3lyt6LayoutCFv
void f_80279FBC(Ctx* __restrict c) {
  trace_call(0x80279FBCu);
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80279FBC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80279FC0
  c->f[3]=-c->f[4]; // 80279FC4
  {uint32_t ea=c->r[2]+0xFFFF9E24u; c->f[2]=c->ps1[2]=RF32(ea);} // 80279FC8
  c->f[0]=-c->f[1]; // 80279FCC
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 80279FD0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 80279FD4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 80279FD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80279FDC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 80279FE0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80279FE4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80279FE8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 80279FEC
  return; // 80279FF0
}

// SetTagProcessor__Q34nw4r3lyt6LayoutFPQ34nw4r2ut19TagProcessorBase<w>
void f_80279FF4(Ctx* __restrict c) {
  trace_call(0x80279FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80279FF4
  c->r[0]=c->lr; // 80279FF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80279FFC
  c->r[11]=c->r[1]+0x00000030u; // 8027A000
  c->lr=0x8027A008u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027A004
  c->r[25]=R32(c->r[3]+0x00000010u); // 8027A008
  c->r[31]=c->r[4]|c->r[4]; // 8027A00C
  c->r[23]=c->r[13]+0xFFFFA430u; // 8027A010
  cmps(c,0,(int32_t)c->r[25],0); // 8027A014
  if (crb(c,2)) { goto L_8027A064; } // 8027A018
  c->r[12]=R32(c->r[25]+0x00000000u); // 8027A01C
  c->r[3]=c->r[25]|c->r[25]; // 8027A020
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027A024
  c->ctr=c->r[12]; // 8027A028
  if (true) { c->lr=0x8027A030u; dispatch(c,c->ctr); } // 8027A02C
  goto L_8027A048; // 8027A030
L_8027A034:;
  cmpu(c,0,c->r[3],c->r[23]); // 8027A034
  if (!crb(c,2)) { goto L_8027A044; } // 8027A038
  c->r[0]=0u+0x00000001u; // 8027A03C
  goto L_8027A054; // 8027A040
L_8027A044:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8027A044
L_8027A048:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027A048
  if (!crb(c,2)) { IRQCHK(c); goto L_8027A034; } // 8027A04C
  c->r[0]=0u+0x00000000u; // 8027A050
L_8027A054:;
  cmps(c,0,(int32_t)c->r[0],0); // 8027A054
  if (crb(c,2)) { goto L_8027A064; } // 8027A058
  c->r[3]=c->r[25]|c->r[25]; // 8027A05C
  goto L_8027A068; // 8027A060
L_8027A064:;
  c->r[3]=0u+0x00000000u; // 8027A064
L_8027A068:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027A068
  if (crb(c,2)) { goto L_8027A074; } // 8027A06C
  W32(c->r[3]+0x000000F8u,c->r[31]); // 8027A070
L_8027A074:;
  c->r[30]=R32(c->r[25]+0x00000014u); // 8027A074
  c->r[27]=c->r[25]+0x00000014u; // 8027A078
  c->r[24]=c->r[13]+0xFFFFA430u; // 8027A07C
  c->r[23]=c->r[13]+0xFFFFA430u; // 8027A080
  goto L_8027A184; // 8027A084
L_8027A088:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 8027A088
  if (crb(c,2)) { goto L_8027A0D8; } // 8027A08C
  c->r[12]=R32(c->r[25]+0x00000000u); // 8027A090
  c->r[3]=c->r[25]|c->r[25]; // 8027A094
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027A098
  c->ctr=c->r[12]; // 8027A09C
  if (true) { c->lr=0x8027A0A4u; dispatch(c,c->ctr); } // 8027A0A0
  goto L_8027A0BC; // 8027A0A4
L_8027A0A8:;
  cmpu(c,0,c->r[3],c->r[23]); // 8027A0A8
  if (!crb(c,2)) { goto L_8027A0B8; } // 8027A0AC
  c->r[0]=0u+0x00000001u; // 8027A0B0
  goto L_8027A0C8; // 8027A0B4
L_8027A0B8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8027A0B8
L_8027A0BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027A0BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8027A0A8; } // 8027A0C0
  c->r[0]=0u+0x00000000u; // 8027A0C4
L_8027A0C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8027A0C8
  if (crb(c,2)) { goto L_8027A0D8; } // 8027A0CC
  c->r[3]=c->r[25]|c->r[25]; // 8027A0D0
  goto L_8027A0DC; // 8027A0D4
L_8027A0D8:;
  c->r[3]=0u+0x00000000u; // 8027A0D8
L_8027A0DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027A0DC
  if (crb(c,2)) { goto L_8027A0E8; } // 8027A0E0
  W32(c->r[3]+0x000000F8u,c->r[31]); // 8027A0E4
L_8027A0E8:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 8027A0E8
  c->r[26]=c->r[25]+0x00000014u; // 8027A0EC
  goto L_8027A178; // 8027A0F0
L_8027A0F4:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 8027A0F4
  if (crb(c,2)) { goto L_8027A144; } // 8027A0F8
  c->r[12]=R32(c->r[25]+0x00000000u); // 8027A0FC
  c->r[3]=c->r[25]|c->r[25]; // 8027A100
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027A104
  c->ctr=c->r[12]; // 8027A108
  if (true) { c->lr=0x8027A110u; dispatch(c,c->ctr); } // 8027A10C
  goto L_8027A128; // 8027A110
L_8027A114:;
  cmpu(c,0,c->r[3],c->r[24]); // 8027A114
  if (!crb(c,2)) { goto L_8027A124; } // 8027A118
  c->r[0]=0u+0x00000001u; // 8027A11C
  goto L_8027A134; // 8027A120
L_8027A124:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8027A124
L_8027A128:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027A128
  if (!crb(c,2)) { IRQCHK(c); goto L_8027A114; } // 8027A12C
  c->r[0]=0u+0x00000000u; // 8027A130
L_8027A134:;
  cmps(c,0,(int32_t)c->r[0],0); // 8027A134
  if (crb(c,2)) { goto L_8027A144; } // 8027A138
  c->r[3]=c->r[25]|c->r[25]; // 8027A13C
  goto L_8027A148; // 8027A140
L_8027A144:;
  c->r[3]=0u+0x00000000u; // 8027A144
L_8027A148:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027A148
  if (crb(c,2)) { goto L_8027A154; } // 8027A14C
  W32(c->r[3]+0x000000F8u,c->r[31]); // 8027A150
L_8027A154:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 8027A154
  goto L_8027A16C; // 8027A158
L_8027A15C:;
  c->r[4]=c->r[31]|c->r[31]; // 8027A15C
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 8027A160
  c->lr=0x8027A168u; f_802793C4(c); // 8027A164
  c->r[28]=R32(c->r[28]+0x00000000u); // 8027A168
L_8027A16C:;
  cmpu(c,0,c->r[28],c->r[25]); // 8027A16C
  if (!crb(c,2)) { IRQCHK(c); goto L_8027A15C; } // 8027A170
  c->r[29]=R32(c->r[29]+0x00000000u); // 8027A174
L_8027A178:;
  cmpu(c,0,c->r[29],c->r[26]); // 8027A178
  if (!crb(c,2)) { IRQCHK(c); goto L_8027A0F4; } // 8027A17C
  c->r[30]=R32(c->r[30]+0x00000000u); // 8027A180
L_8027A184:;
  cmpu(c,0,c->r[30],c->r[27]); // 8027A184
  if (!crb(c,2)) { IRQCHK(c); goto L_8027A088; } // 8027A188
  c->r[11]=c->r[1]+0x00000030u; // 8027A18C
  c->lr=0x8027A194u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027A190
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027A194
  c->lr=c->r[0]; // 8027A198
  c->r[1]=c->r[1]+0x00000030u; // 8027A19C
  return; // 8027A1A0
}

// BuildPaneObj__Q34nw4r3lyt6LayoutFlPCvRCQ34nw4r3lyt11ResBlockSet
void f_8027A1A4(Ctx* __restrict c) {
  trace_call(0x8027A1A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027A1A4
  c->r[0]=c->lr; // 8027A1A8
  c->r[6]=0u+0x70690000u; // 8027A1AC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8027A1B0
  c->r[0]=c->r[6]+0x00006331u; // 8027A1B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8027A1B8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8027A1BC
  if (crb(c,2)) { goto L_8027A248; } // 8027A1C0
  if (!crb(c,0)) { goto L_8027A1F0; } // 8027A1C4
  c->r[6]=0u+0x70610000u; // 8027A1C8
  c->r[0]=c->r[6]+0x00006E31u; // 8027A1CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8027A1D0
  if (crb(c,2)) { goto L_8027A218; } // 8027A1D4
  if (!crb(c,0)) { goto L_8027A398; } // 8027A1D8
  c->r[6]=0u+0x626E0000u; // 8027A1DC
  c->r[0]=c->r[6]+0x00006431u; // 8027A1E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8027A1E4
  if (crb(c,2)) { goto L_8027A344; } // 8027A1E8
  goto L_8027A398; // 8027A1EC
L_8027A1F0:;
  c->r[6]=0u+0x776E0000u; // 8027A1F0
  c->r[0]=c->r[6]+0x00006431u; // 8027A1F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8027A1F8
  if (crb(c,2)) { goto L_8027A2F0; } // 8027A1FC
  if (!crb(c,0)) { goto L_8027A398; } // 8027A200
  c->r[6]=0u+0x74780000u; // 8027A204
  c->r[0]=c->r[6]+0x00007431u; // 8027A208
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8027A20C
  if (crb(c,2)) { goto L_8027A29C; } // 8027A210
  goto L_8027A398; // 8027A214
L_8027A218:;
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A218
  c->r[31]=c->r[4]|c->r[4]; // 8027A21C
  c->r[4]=0u+0x000000D8u; // 8027A220
  c->lr=0x8027A228u; f_801A0EF8(c); // 8027A224
  cmps(c,0,(int32_t)c->r[3],0); // 8027A228
  if (crb(c,2)) { goto L_8027A240; } // 8027A22C
  if (crb(c,2)) { goto L_8027A39C; } // 8027A230
  c->r[4]=c->r[31]|c->r[31]; // 8027A234
  c->lr=0x8027A23Cu; f_80278188(c); // 8027A238
  goto L_8027A39C; // 8027A23C
L_8027A240:;
  c->r[3]=0u+0x00000000u; // 8027A240
  goto L_8027A39C; // 8027A244
L_8027A248:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8027A248
  c->r[31]=c->r[4]|c->r[4]; // 8027A24C
  c->r[7]=R32(c->r[5]+0x00000004u); // 8027A250
  c->r[4]=0u+0x000000F0u; // 8027A254
  c->r[6]=R32(c->r[5]+0x00000008u); // 8027A258
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8027A25C
  W32(c->r[1]+0x00000038u,c->r[3]); // 8027A260
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A264
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 8027A268
  W32(c->r[1]+0x00000040u,c->r[6]); // 8027A26C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027A270
  c->lr=0x8027A278u; f_801A0EF8(c); // 8027A274
  cmps(c,0,(int32_t)c->r[3],0); // 8027A278
  if (crb(c,2)) { goto L_8027A294; } // 8027A27C
  if (crb(c,2)) { goto L_8027A39C; } // 8027A280
  c->r[4]=c->r[31]|c->r[31]; // 8027A284
  c->r[5]=c->r[1]+0x00000038u; // 8027A288
  c->lr=0x8027A290u; f_8027A4A8(c); // 8027A28C
  goto L_8027A39C; // 8027A290
L_8027A294:;
  c->r[3]=0u+0x00000000u; // 8027A294
  goto L_8027A39C; // 8027A298
L_8027A29C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8027A29C
  c->r[31]=c->r[4]|c->r[4]; // 8027A2A0
  c->r[7]=R32(c->r[5]+0x00000004u); // 8027A2A4
  c->r[4]=0u+0x00000104u; // 8027A2A8
  c->r[6]=R32(c->r[5]+0x00000008u); // 8027A2AC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8027A2B0
  W32(c->r[1]+0x00000028u,c->r[3]); // 8027A2B4
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A2B8
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 8027A2BC
  W32(c->r[1]+0x00000030u,c->r[6]); // 8027A2C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027A2C4
  c->lr=0x8027A2CCu; f_801A0EF8(c); // 8027A2C8
  cmps(c,0,(int32_t)c->r[3],0); // 8027A2CC
  if (crb(c,2)) { goto L_8027A2E8; } // 8027A2D0
  if (crb(c,2)) { goto L_8027A39C; } // 8027A2D4
  c->r[4]=c->r[31]|c->r[31]; // 8027A2D8
  c->r[5]=c->r[1]+0x00000028u; // 8027A2DC
  c->lr=0x8027A2E4u; f_8027AC30(c); // 8027A2E0
  goto L_8027A39C; // 8027A2E4
L_8027A2E8:;
  c->r[3]=0u+0x00000000u; // 8027A2E8
  goto L_8027A39C; // 8027A2EC
L_8027A2F0:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8027A2F0
  c->r[31]=c->r[4]|c->r[4]; // 8027A2F4
  c->r[7]=R32(c->r[5]+0x00000004u); // 8027A2F8
  c->r[4]=0u+0x00000108u; // 8027A2FC
  c->r[6]=R32(c->r[5]+0x00000008u); // 8027A300
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8027A304
  W32(c->r[1]+0x00000018u,c->r[3]); // 8027A308
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A30C
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 8027A310
  W32(c->r[1]+0x00000020u,c->r[6]); // 8027A314
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027A318
  c->lr=0x8027A320u; f_801A0EF8(c); // 8027A31C
  cmps(c,0,(int32_t)c->r[3],0); // 8027A320
  if (crb(c,2)) { goto L_8027A33C; } // 8027A324
  if (crb(c,2)) { goto L_8027A39C; } // 8027A328
  c->r[4]=c->r[31]|c->r[31]; // 8027A32C
  c->r[5]=c->r[1]+0x00000018u; // 8027A330
  c->lr=0x8027A338u; f_8027C628(c); // 8027A334
  goto L_8027A39C; // 8027A338
L_8027A33C:;
  c->r[3]=0u+0x00000000u; // 8027A33C
  goto L_8027A39C; // 8027A340
L_8027A344:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8027A344
  c->r[31]=c->r[4]|c->r[4]; // 8027A348
  c->r[7]=R32(c->r[5]+0x00000004u); // 8027A34C
  c->r[4]=0u+0x000000D8u; // 8027A350
  c->r[6]=R32(c->r[5]+0x00000008u); // 8027A354
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8027A358
  W32(c->r[1]+0x00000008u,c->r[3]); // 8027A35C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A360
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8027A364
  W32(c->r[1]+0x00000010u,c->r[6]); // 8027A368
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027A36C
  c->lr=0x8027A374u; f_801A0EF8(c); // 8027A370
  cmps(c,0,(int32_t)c->r[3],0); // 8027A374
  if (crb(c,2)) { goto L_8027A390; } // 8027A378
  if (crb(c,2)) { goto L_8027A39C; } // 8027A37C
  c->r[4]=c->r[31]|c->r[31]; // 8027A380
  c->r[5]=c->r[1]+0x00000008u; // 8027A384
  c->lr=0x8027A38Cu; f_8027EBDC(c); // 8027A388
  goto L_8027A39C; // 8027A38C
L_8027A390:;
  c->r[3]=0u+0x00000000u; // 8027A390
  goto L_8027A39C; // 8027A394
L_8027A398:;
  c->r[3]=0u+0x00000000u; // 8027A398
L_8027A39C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8027A39C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8027A3A0
  c->lr=c->r[0]; // 8027A3A4
  c->r[1]=c->r[1]+0x00000050u; // 8027A3A8
  return; // 8027A3AC
}

// fn_8027A3B0
void f_8027A3B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027A3B0
  c->r[0]=c->lr; // 8027A3B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027A3B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027A3BC
  c->r[31]=c->r[4]|c->r[4]; // 8027A3C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027A3C4
  c->r[30]=c->r[3]|c->r[3]; // 8027A3C8
  c->lr=0x8027A3D0u; f_8027805C(c); // 8027A3CC
  c->r[3]=0u+0x80340000u; // 8027A3D0
  c->r[4]=0u+0x800D0000u; // 8027A3D4
  c->r[3]=c->r[3]+0x00005130u; // 8027A3D8
  c->r[5]=0u+0x80070000u; // 8027A3DC
  W32(c->r[30]+0x00000000u,c->r[3]); // 8027A3E0
  c->r[3]=c->r[30]+0x000000D8u; // 8027A3E4
  c->r[4]=c->r[4]+0x0000797Cu; // 8027A3E8
  c->r[5]=c->r[5]+0xFFFF8B68u; // 8027A3EC
  c->r[6]=0u+0x00000004u; // 8027A3F0
  c->r[7]=0u+0x00000004u; // 8027A3F4
  c->lr=0x8027A3FCu; f_80185B6C(c); // 8027A3F8
  c->r[3]=c->r[30]+0x000000E8u; // 8027A3FC
  c->lr=0x8027A404u; f_80283AA0(c); // 8027A400
  c->r[3]=c->r[30]+0x000000E8u; // 8027A404
  c->r[4]=0u+0x00000001u; // 8027A408
  c->lr=0x8027A410u; f_80283B04(c); // 8027A40C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A410
  c->r[4]=0u+0x0000005Cu; // 8027A414
  c->lr=0x8027A41Cu; f_801A0EF8(c); // 8027A418
  cmps(c,0,(int32_t)c->r[3],0); // 8027A41C
  if (crb(c,2)) { goto L_8027A430; } // 8027A420
  if (crb(c,2)) { goto L_8027A434; } // 8027A424
  c->lr=0x8027A42Cu; f_8027EFA0(c); // 8027A428
  goto L_8027A434; // 8027A42C
L_8027A430:;
  c->r[3]=0u+0x00000000u; // 8027A430
L_8027A434:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027A434
  W32(c->r[30]+0x00000028u,c->r[3]); // 8027A438
  if (crb(c,2)) { goto L_8027A48C; } // 8027A43C
  c->r[0]=0u+0x00000000u; // 8027A440
  c->r[4]=0u+0x00000001u; // 8027A444
  W32(c->r[1]+0x00000008u,c->r[0]); // 8027A448
  c->r[5]=0u+0x00000001u; // 8027A44C
  c->r[6]=0u+0x00000001u; // 8027A450
  c->r[7]=0u+0x00000000u; // 8027A454
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8027A458
  c->r[8]=0u+0x00000000u; // 8027A45C
  c->r[9]=0u+0x00000000u; // 8027A460
  c->r[10]=0u+0x00000000u; // 8027A464
  W32(c->r[1]+0x00000010u,c->r[0]); // 8027A468
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027A46C
  c->lr=0x8027A474u; f_8027FB58(c); // 8027A470
  c->r[12]=R32(c->r[30]+0x00000000u); // 8027A474
  c->r[3]=c->r[30]|c->r[30]; // 8027A478
  c->r[4]=c->r[31]|c->r[31]; // 8027A47C
  c->r[12]=R32(c->r[12]+0x00000074u); // 8027A480
  c->ctr=c->r[12]; // 8027A484
  if (true) { c->lr=0x8027A48Cu; dispatch(c,c->ctr); } // 8027A488
L_8027A48C:;
  c->r[3]=c->r[30]|c->r[30]; // 8027A48C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027A490
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027A494
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027A498
  c->lr=c->r[0]; // 8027A49C
  c->r[1]=c->r[1]+0x00000020u; // 8027A4A0
  return; // 8027A4A4
}

// fn_8027A4A8
void f_8027A4A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027A4A8
  c->r[0]=c->lr; // 8027A4AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027A4B0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8027A4B4
  c->r[31]=c->r[3]|c->r[3]; // 8027A4B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8027A4BC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8027A4C0
  c->r[29]=c->r[5]|c->r[5]; // 8027A4C4
  W32(c->r[1]+0x00000020u,c->r[28]); // 8027A4C8
  c->r[28]=c->r[4]|c->r[4]; // 8027A4CC
  c->lr=0x8027A4D4u; f_80278188(c); // 8027A4D0
  c->r[3]=0u+0x80340000u; // 8027A4D4
  c->r[4]=0u+0x800D0000u; // 8027A4D8
  c->r[3]=c->r[3]+0x00005130u; // 8027A4DC
  c->r[5]=0u+0x80070000u; // 8027A4E0
  W32(c->r[31]+0x00000000u,c->r[3]); // 8027A4E4
  c->r[3]=c->r[31]+0x000000D8u; // 8027A4E8
  c->r[4]=c->r[4]+0x0000797Cu; // 8027A4EC
  c->r[5]=c->r[5]+0xFFFF8B68u; // 8027A4F0
  c->r[6]=0u+0x00000004u; // 8027A4F4
  c->r[7]=0u+0x00000004u; // 8027A4F8
  c->lr=0x8027A500u; f_80185B6C(c); // 8027A4FC
  c->r[3]=c->r[31]+0x000000E8u; // 8027A500
  c->lr=0x8027A508u; f_80283AA0(c); // 8027A504
  c->r[0]=R8(c->r[28]+0x0000005Eu); // 8027A508
  c->r[30]=0u+0x00000008u; // 8027A50C
  cmpu(c,0,c->r[0],0x00000008u); // 8027A510
  if (crb(c,1)) { goto L_8027A51C; } // 8027A514
  c->r[30]=c->r[0]|c->r[0]; // 8027A518
L_8027A51C:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 8027A51C
  if (crb(c,2)) { goto L_8027A52C; } // 8027A520
  c->r[3]=c->r[31]+0x000000E8u; // 8027A524
  c->lr=0x8027A52Cu; f_80283B04(c); // 8027A528
L_8027A52C:;
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 8027A52C
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[5]); // 8027A530
  c->r[4]=R32(c->r[28]+0x00000050u); // 8027A534
  c->r[3]=R32(c->r[28]+0x00000054u); // 8027A538
  c->r[0]=R32(c->r[28]+0x00000058u); // 8027A53C
  W32(c->r[31]+0x000000D8u,c->r[6]); // 8027A540
  W32(c->r[31]+0x000000DCu,c->r[4]); // 8027A544
  W32(c->r[31]+0x000000E0u,c->r[3]); // 8027A548
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8027A54C
  if (crb(c,2)) { goto L_8027A56C; } // 8027A550
  c->r[0]=R8(c->r[31]+0x000000E8u); // 8027A554
  cmps(c,0,(int32_t)c->r[0],0); // 8027A558
  if (crb(c,2)) { goto L_8027A56C; } // 8027A55C
  c->r[3]=c->r[31]+0x000000E8u; // 8027A560
  c->r[4]=c->r[28]+0x00000060u; // 8027A564
  c->lr=0x8027A56Cu; f_80283C84(c); // 8027A568
L_8027A56C:;
  c->r[0]=R16(c->r[28]+0x0000005Cu); // 8027A56C
  c->r[4]=0u+0x0000005Cu; // 8027A570
  c->r[7]=R32(c->r[29]+0x00000008u); // 8027A574
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027A578
  c->r[3]=R32(c->r[29]+0x00000000u); // 8027A57C
  c->r[6]=c->r[7]+c->r[0]; // 8027A580
  c->r[5]=R32(c->r[29]+0x00000004u); // 8027A584
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8027A588
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8027A58C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8027A590
  c->r[30]=c->r[7]+c->r[6]; // 8027A594
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A598
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8027A59C
  W32(c->r[1]+0x00000010u,c->r[7]); // 8027A5A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027A5A4
  c->lr=0x8027A5ACu; f_801A0EF8(c); // 8027A5A8
  cmps(c,0,(int32_t)c->r[3],0); // 8027A5AC
  if (crb(c,2)) { goto L_8027A5C8; } // 8027A5B0
  if (crb(c,2)) { goto L_8027A5CC; } // 8027A5B4
  c->r[4]=c->r[30]|c->r[30]; // 8027A5B8
  c->r[5]=c->r[1]+0x00000008u; // 8027A5BC
  c->lr=0x8027A5C4u; f_8027F0B4(c); // 8027A5C0
  goto L_8027A5CC; // 8027A5C4
L_8027A5C8:;
  c->r[3]=0u+0x00000000u; // 8027A5C8
L_8027A5CC:;
  W32(c->r[31]+0x00000028u,c->r[3]); // 8027A5CC
  c->r[3]=c->r[31]|c->r[31]; // 8027A5D0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8027A5D4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8027A5D8
  c->r[29]=R32(c->r[1]+0x00000024u); // 8027A5DC
  c->r[28]=R32(c->r[1]+0x00000020u); // 8027A5E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027A5E4
  c->lr=c->r[0]; // 8027A5E8
  c->r[1]=c->r[1]+0x00000030u; // 8027A5EC
  return; // 8027A5F0
}

// fn_8027A5F4
void f_8027A5F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027A5F4
  c->r[0]=c->lr; // 8027A5F8
  cmps(c,0,(int32_t)c->r[3],0); // 8027A5FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027A600
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027A604
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027A608
  c->r[30]=c->r[4]|c->r[4]; // 8027A60C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027A610
  c->r[29]=c->r[3]|c->r[3]; // 8027A614
  if (crb(c,2)) { goto L_8027A6AC; } // 8027A618
  c->r[31]=R32(c->r[3]+0x00000028u); // 8027A61C
  c->r[4]=0u+0x80340000u; // 8027A620
  c->r[4]=c->r[4]+0x00005130u; // 8027A624
  cmps(c,1,(int32_t)c->r[31],0); // 8027A628
  W32(c->r[3]+0x00000000u,c->r[4]); // 8027A62C
  if (crb(c,6)) { goto L_8027A670; } // 8027A630
  c->r[0]=R8(c->r[31]+0x00000059u); // 8027A634
  cmps(c,0,(int32_t)c->r[0],0); // 8027A638
  if (!crb(c,2)) { goto L_8027A670; } // 8027A63C
  if (crb(c,6)) { goto L_8027A668; } // 8027A640
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027A644
  c->r[3]=c->r[31]|c->r[31]; // 8027A648
  c->r[4]=0u+0xFFFFFFFFu; // 8027A64C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027A650
  c->ctr=c->r[12]; // 8027A654
  if (true) { c->lr=0x8027A65Cu; dispatch(c,c->ctr); } // 8027A658
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027A65C
  c->r[4]=c->r[31]|c->r[31]; // 8027A660
  c->lr=0x8027A668u; f_801A0F08(c); // 8027A664
L_8027A668:;
  c->r[0]=0u+0x00000000u; // 8027A668
  W32(c->r[29]+0x00000028u,c->r[0]); // 8027A66C
L_8027A670:;
  c->r[3]=c->r[29]+0x000000E8u; // 8027A670
  c->lr=0x8027A678u; f_80283AB4(c); // 8027A674
  c->r[4]=0u+0x80070000u; // 8027A678
  c->r[3]=c->r[29]+0x000000D8u; // 8027A67C
  c->r[4]=c->r[4]+0xFFFF8B68u; // 8027A680
  c->r[5]=0u+0x00000004u; // 8027A684
  c->r[6]=0u+0x00000004u; // 8027A688
  c->lr=0x8027A690u; f_80185C64(c); // 8027A68C
  c->r[3]=c->r[29]|c->r[29]; // 8027A690
  c->r[4]=0u+0x00000000u; // 8027A694
  c->lr=0x8027A69Cu; f_802782C0(c); // 8027A698
  cmps(c,0,(int32_t)c->r[30],0); // 8027A69C
  if (!crb(c,1)) { goto L_8027A6AC; } // 8027A6A0
  c->r[3]=c->r[29]|c->r[29]; // 8027A6A4
  c->lr=0x8027A6ACu; f_800D6AD0(c); // 8027A6A8
L_8027A6AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027A6AC
  c->r[3]=c->r[29]|c->r[29]; // 8027A6B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027A6B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027A6B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027A6BC
  c->lr=c->r[0]; // 8027A6C0
  c->r[1]=c->r[1]+0x00000020u; // 8027A6C4
  return; // 8027A6C8
}

// fn_8027A6CC
void f_8027A6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027A6CC
  c->r[0]=c->lr; // 8027A6D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027A6D4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8027A6D8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8027A6DC
  c->r[30]=c->r[3]|c->r[3]; // 8027A6E0
  W32(c->r[1]+0x00000024u,c->r[29]); // 8027A6E4
  W32(c->r[1]+0x00000020u,c->r[28]); // 8027A6E8
  c->r[28]=c->r[4]|c->r[4]; // 8027A6EC
  c->r[5]=R32(c->r[3]+0x00000028u); // 8027A6F0
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 8027A6F4
  c->r[3]=R32(c->r[5]+0x00000038u); // 8027A6F8
  c->r[31]=rotl(c->r[0],4)&0x0000000Fu; // 8027A6FC
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 8027A700
  cmpu(c,0,c->r[31],c->r[0]); // 8027A704
  if (!crb(c,0)) { goto L_8027A860; } // 8027A708
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 8027A70C
  cmpu(c,0,c->r[31],c->r[0]); // 8027A710
  if (crb(c,0)) { goto L_8027A71C; } // 8027A714
  goto L_8027A860; // 8027A718
L_8027A71C:;
  c->r[0]=c->r[31]+0x00000001u; // 8027A71C
  c->r[3]=c->r[5]|c->r[5]; // 8027A720
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8027A724
  c->lr=0x8027A72Cu; f_80280584(c); // 8027A728
  c->r[3]=R32(c->r[30]+0x00000028u); // 8027A72C
  c->lr=0x8027A734u; f_802802C4(c); // 8027A730
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)28); // 8027A734
  c->r[6]=R32(c->r[28]+0x00000000u); // 8027A738
  c->r[5]=R32(c->r[28]+0x00000004u); // 8027A73C
  c->r[4]=R16(c->r[28]+0x00000008u); // 8027A740
  c->r[7]=c->r[3]+c->r[0]; // 8027A744
  c->r[0]=R16(c->r[28]+0x0000000Au); // 8027A748
  W32(c->r[7]+0x00000000u,c->r[6]); // 8027A74C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027A750
  W32(c->r[7]+0x00000004u,c->r[5]); // 8027A754
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027A758
  W16(c->r[7]+0x00000008u,c->r[4]); // 8027A75C
  c->r[4]=R16(c->r[28]+0x00000014u); // 8027A760
  W16(c->r[7]+0x0000000Au,c->r[0]); // 8027A764
  c->r[3]=R16(c->r[28]+0x00000016u); // 8027A768
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[1]);} // 8027A76C
  c->r[0]=R32(c->r[28]+0x00000018u); // 8027A770
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 8027A774
  W16(c->r[7]+0x00000014u,c->r[4]); // 8027A778
  W16(c->r[7]+0x00000016u,c->r[3]); // 8027A77C
  W32(c->r[7]+0x00000018u,c->r[0]); // 8027A780
  c->r[3]=R32(c->r[30]+0x00000028u); // 8027A784
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027A788
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 8027A78C
  c->lr=0x8027A794u; f_80280614(c); // 8027A790
  c->r[28]=0u+0x00000000u; // 8027A794
  c->r[29]=0u+0x00000001u; // 8027A798
  c->r[4]=0u+0x00000004u; // 8027A79C
  c->r[0]=0u+0x0000003Cu; // 8027A7A0
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 8027A7A4
  c->r[3]=R32(c->r[30]+0x00000028u); // 8027A7A8
  W8(c->r[1]+0x00000008u,c->r[29]); // 8027A7AC
  W8(c->r[1]+0x00000009u,c->r[4]); // 8027A7B0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8027A7B4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8027A7B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8027A7BC
  c->lr=0x8027A7C4u; f_802802E4(c); // 8027A7C0
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 8027A7C4
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 8027A7C8
  c->r[5]=c->r[3]+c->r[0]; // 8027A7CC
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8027A7D0
  W8(c->r[5]+0x00000000u,c->r[4]); // 8027A7D4
  c->r[3]=c->r[30]+0x000000E8u; // 8027A7D8
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 8027A7DC
  W8(c->r[5]+0x00000001u,c->r[0]); // 8027A7E0
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8027A7E4
  W8(c->r[5]+0x00000002u,c->r[4]); // 8027A7E8
  W8(c->r[5]+0x00000003u,c->r[0]); // 8027A7EC
  c->r[4]=R32(c->r[30]+0x00000028u); // 8027A7F0
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8027A7F4
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 8027A7F8
  c->lr=0x8027A800u; f_80283B98(c); // 8027A7FC
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027A800
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027A804
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8027A808
  fcmp(c,0,c->f[0],c->f[1]); // 8027A80C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027A810
  if (!crb(c,2)) { goto L_8027A828; } // 8027A814
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027A818
  fcmp(c,0,c->f[0],c->f[1]); // 8027A81C
  if (!crb(c,2)) { goto L_8027A828; } // 8027A820
  c->r[28]=c->r[29]|c->r[29]; // 8027A824
L_8027A828:;
  cmps(c,0,(int32_t)c->r[28],0); // 8027A828
  if (crb(c,2)) { goto L_8027A860; } // 8027A82C
  c->r[4]=R32(c->r[30]+0x00000028u); // 8027A830
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8027A834
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8027A838
  cmpu(c,0,c->r[0],0x00000001u); // 8027A83C
  if (!crb(c,2)) { goto L_8027A860; } // 8027A840
  c->r[3]=c->r[1]+0x00000010u; // 8027A844
  c->r[5]=0u+0x00000000u; // 8027A848
  c->lr=0x8027A850u; f_80281A90(c); // 8027A84C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027A850
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8027A854
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027A858
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 8027A85C
L_8027A860:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027A860
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8027A864
  c->r[30]=R32(c->r[1]+0x00000028u); // 8027A868
  c->r[29]=R32(c->r[1]+0x00000024u); // 8027A86C
  c->r[28]=R32(c->r[1]+0x00000020u); // 8027A870
  c->lr=c->r[0]; // 8027A874
  c->r[1]=c->r[1]+0x00000030u; // 8027A878
  return; // 8027A87C
}

// fn_8027A880
void f_8027A880(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027A880
  c->r[7]=c->r[4]+c->r[0]; // 8027A884
  c->r[6]=R8(c->r[7]+0x000000D8u); // 8027A888
  c->r[5]=R8(c->r[7]+0x000000D9u); // 8027A88C
  c->r[4]=R8(c->r[7]+0x000000DAu); // 8027A890
  c->r[0]=R8(c->r[7]+0x000000DBu); // 8027A894
  W8(c->r[3]+0x00000000u,c->r[6]); // 8027A898
  W8(c->r[3]+0x00000001u,c->r[5]); // 8027A89C
  W8(c->r[3]+0x00000002u,c->r[4]); // 8027A8A0
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027A8A4
  return; // 8027A8A8
}

// fn_8027A8AC
void f_8027A8AC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027A8AC
  c->r[6]=R8(c->r[5]+0x00000000u); // 8027A8B0
  c->r[4]=c->r[3]+c->r[0]; // 8027A8B4
  c->r[0]=R8(c->r[5]+0x00000001u); // 8027A8B8
  W8(c->r[4]+0x000000D8u,c->r[6]); // 8027A8BC
  c->r[3]=R8(c->r[5]+0x00000002u); // 8027A8C0
  W8(c->r[4]+0x000000D9u,c->r[0]); // 8027A8C4
  c->r[0]=R8(c->r[5]+0x00000003u); // 8027A8C8
  W8(c->r[4]+0x000000DAu,c->r[3]); // 8027A8CC
  W8(c->r[4]+0x000000DBu,c->r[0]); // 8027A8D0
  return; // 8027A8D4
}

// fn_8027A8D8
void f_8027A8D8(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8027A8D8
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8027A8DC
  c->r[3]=c->r[3]+c->r[5]; // 8027A8E0
  c->r[3]=c->r[3]+c->r[0]; // 8027A8E4
  c->r[3]=R8(c->r[3]+0x000000D8u); // 8027A8E8
  return; // 8027A8EC
}

// fn_8027A8F0
void f_8027A8F0(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8027A8F0
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8027A8F4
  c->r[3]=c->r[3]+c->r[6]; // 8027A8F8
  c->r[3]=c->r[3]+c->r[0]; // 8027A8FC
  W8(c->r[3]+0x000000D8u,c->r[5]); // 8027A900
  return; // 8027A904
}

// fn_8027A908
void f_8027A908(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027A908
  c->r[0]=c->lr; // 8027A90C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027A910
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027A914
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027A918
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027A91C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8027A920
  c->r[28]=c->r[3]|c->r[3]; // 8027A924
  c->r[0]=R32(c->r[3]+0x00000028u); // 8027A928
  cmps(c,0,(int32_t)c->r[0],0); // 8027A92C
  if (crb(c,2)) { goto L_8027A9C4; } // 8027A930
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027A934
  c->r[12]=R32(c->r[12]+0x00000070u); // 8027A938
  c->ctr=c->r[12]; // 8027A93C
  if (true) { c->lr=0x8027A944u; dispatch(c,c->ctr); } // 8027A940
  c->r[29]=R8(c->r[28]+0x000000B9u); // 8027A944
  c->r[3]=c->r[28]+0x000000D8u; // 8027A948
  c->r[4]=c->r[29]|c->r[29]; // 8027A94C
  c->lr=0x8027A954u; f_80283D18(c); // 8027A950
  c->r[4]=c->r[3]|c->r[3]; // 8027A954
  c->r[3]=R32(c->r[28]+0x00000028u); // 8027A958
  c->r[5]=c->r[29]|c->r[29]; // 8027A95C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027A960
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027A964
  c->ctr=c->r[12]; // 8027A968
  if (true) { c->lr=0x8027A970u; dispatch(c,c->ctr); } // 8027A96C
  c->r[4]=R8(c->r[28]+0x000000E9u); // 8027A970
  c->r[29]=c->r[3]|c->r[3]; // 8027A974
  c->lr=0x8027A97Cu; f_80283DD4(c); // 8027A978
  cmps(c,0,(int32_t)c->r[29],0); // 8027A97C
  if (crb(c,2)) { goto L_8027A98C; } // 8027A980
  c->r[30]=c->r[28]+0x000000D8u; // 8027A984
  goto L_8027A990; // 8027A988
L_8027A98C:;
  c->r[30]=0u+0x00000000u; // 8027A98C
L_8027A990:;
  c->r[29]=R32(c->r[28]+0x000000ECu); // 8027A990
  c->r[3]=c->r[28]|c->r[28]; // 8027A994
  c->r[31]=R8(c->r[28]+0x000000E9u); // 8027A998
  c->lr=0x8027A9A0u; f_80278F58(c); // 8027A99C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8027A9A0
  c->r[5]=c->r[31]|c->r[31]; // 8027A9A4
  c->r[6]=c->r[29]|c->r[29]; // 8027A9A8
  c->r[7]=c->r[30]|c->r[30]; // 8027A9AC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8027A9B0
  c->r[3]=c->r[1]+0x00000008u; // 8027A9B4
  c->r[4]=c->r[28]+0x0000004Cu; // 8027A9B8
  c->r[8]=R8(c->r[28]+0x000000B9u); // 8027A9BC
  c->lr=0x8027A9C4u; f_80284418(c); // 8027A9C0
L_8027A9C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027A9C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027A9C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027A9CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027A9D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8027A9D4
  c->lr=c->r[0]; // 8027A9D8
  c->r[1]=c->r[1]+0x00000020u; // 8027A9DC
  return; // 8027A9E0
}

// fn_8027A9E4
void f_8027A9E4(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFA428u; // 8027A9E4
  return; // 8027A9E8
}

// fn_8027A9EC
void f_8027A9EC(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA418u; // 8027A9EC
  W32(c->r[13]+0xFFFFA428u,c->r[0]); // 8027A9F0
  return; // 8027A9F4
}

// GetColor__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FRC11_GXColorS10
void f_8027A9F8(Ctx* __restrict c) {
  trace_call(0x8027A9F8u);
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 8027A9F8
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027A9FC
  cmps(c,0,(int32_t)c->r[5],0); // 8027AA00
  if (!crb(c,0)) { goto L_8027AA10; } // 8027AA04
  c->r[0]=0u+0x00000000u; // 8027AA08
  goto L_8027AA20; // 8027AA0C
L_8027AA10:;
  cmps(c,0,(int32_t)c->r[5],255); // 8027AA10
  c->r[0]=0u+0x000000FFu; // 8027AA14
  if (crb(c,1)) { goto L_8027AA20; } // 8027AA18
  c->r[0]=c->r[5]|c->r[5]; // 8027AA1C
L_8027AA20:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8027AA20
  W8(c->r[1]+0x00000008u,c->r[0]); // 8027AA24
  cmps(c,0,(int32_t)c->r[5],0); // 8027AA28
  if (!crb(c,0)) { goto L_8027AA38; } // 8027AA2C
  c->r[0]=0u+0x00000000u; // 8027AA30
  goto L_8027AA48; // 8027AA34
L_8027AA38:;
  cmps(c,0,(int32_t)c->r[5],255); // 8027AA38
  c->r[0]=0u+0x000000FFu; // 8027AA3C
  if (crb(c,1)) { goto L_8027AA48; } // 8027AA40
  c->r[0]=c->r[5]|c->r[5]; // 8027AA44
L_8027AA48:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8027AA48
  W8(c->r[1]+0x00000009u,c->r[0]); // 8027AA4C
  cmps(c,0,(int32_t)c->r[5],0); // 8027AA50
  if (!crb(c,0)) { goto L_8027AA60; } // 8027AA54
  c->r[0]=0u+0x00000000u; // 8027AA58
  goto L_8027AA70; // 8027AA5C
L_8027AA60:;
  cmps(c,0,(int32_t)c->r[5],255); // 8027AA60
  c->r[0]=0u+0x000000FFu; // 8027AA64
  if (crb(c,1)) { goto L_8027AA70; } // 8027AA68
  c->r[0]=c->r[5]|c->r[5]; // 8027AA6C
L_8027AA70:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8027AA70
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8027AA74
  cmps(c,0,(int32_t)c->r[4],0); // 8027AA78
  if (!crb(c,0)) { goto L_8027AA88; } // 8027AA7C
  c->r[0]=0u+0x00000000u; // 8027AA80
  goto L_8027AA98; // 8027AA84
L_8027AA88:;
  cmps(c,0,(int32_t)c->r[4],255); // 8027AA88
  c->r[0]=0u+0x000000FFu; // 8027AA8C
  if (crb(c,1)) { goto L_8027AA98; } // 8027AA90
  c->r[0]=c->r[4]|c->r[4]; // 8027AA94
L_8027AA98:;
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8027AA98
  c->r[0]=R32(c->r[1]+0x00000008u); // 8027AA9C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8027AAA0
  c->r[1]=c->r[1]+0x00000010u; // 8027AAA4
  return; // 8027AAA8
}

// __ct__Q34nw4r3lyt7TextBoxFUs
void f_8027AAAC(Ctx* __restrict c) {
  trace_call(0x8027AAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027AAAC
  c->r[0]=c->lr; // 8027AAB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027AAB4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8027AAB8
  c->r[31]=c->r[4]|c->r[4]; // 8027AABC
  W32(c->r[1]+0x00000028u,c->r[30]); // 8027AAC0
  c->r[30]=c->r[3]|c->r[3]; // 8027AAC4
  c->lr=0x8027AACCu; f_8027805C(c); // 8027AAC8
  c->r[3]=0u+0x80340000u; // 8027AACC
  c->r[4]=0u+0x800D0000u; // 8027AAD0
  c->r[3]=c->r[3]+0x000051A8u; // 8027AAD4
  c->r[5]=0u+0x80070000u; // 8027AAD8
  W32(c->r[30]+0x00000000u,c->r[3]); // 8027AADC
  c->r[3]=c->r[30]+0x000000DCu; // 8027AAE0
  c->r[4]=c->r[4]+0x0000797Cu; // 8027AAE4
  c->r[5]=c->r[5]+0xFFFF8B68u; // 8027AAE8
  c->r[6]=0u+0x00000004u; // 8027AAEC
  c->r[7]=0u+0x00000002u; // 8027AAF0
  c->lr=0x8027AAF8u; f_80185B6C(c); // 8027AAF4
  c->r[3]=0u+0x55550000u; // 8027AAF8
  c->r[0]=R8(c->r[30]+0x00000100u); // 8027AAFC
  c->r[8]=c->r[3]+0x00005556u; // 8027AB00
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027AB04
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 8027AB08
  c->r[9]=0u+0x00000000u; // 8027AB0C
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 8027AB10
  c->r[3]=c->r[30]+0x00000101u; // 8027AB14
  c->r[4]=0u+0x00000000u; // 8027AB18
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 8027AB1C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 8027AB20
  W32(c->r[30]+0x000000D8u,c->r[9]); // 8027AB24
  c->r[0]=c->r[5]+c->r[0]; // 8027AB28
  c->r[5]=0u+0x00000001u; // 8027AB2C
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 8027AB30
  W16(c->r[30]+0x000000FCu,c->r[9]); // 8027AB34
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 8027AB38
  c->r[6]=c->r[0]-c->r[6]; // 8027AB3C
  W16(c->r[30]+0x000000FEu,c->r[9]); // 8027AB40
  c->r[0]=c->r[6]+0x00000001u; // 8027AB44
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 8027AB48
  W32(c->r[30]+0x000000E4u,c->r[9]); // 8027AB4C
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 8027AB50
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8027AB54
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8027AB58
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 8027AB5C
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 8027AB60
  c->r[0]=c->r[6]+c->r[0]; // 8027AB64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8027AB68
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 8027AB6C
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[0]);} // 8027AB70
  c->r[0]=c->r[7]-c->r[0]; // 8027AB74
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 8027AB78
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[0]);} // 8027AB7C
  c->r[0]=c->r[6]+0x00000003u; // 8027AB80
  W8(c->r[30]+0x00000100u,c->r[0]); // 8027AB84
  W32(c->r[30]+0x000000F8u,c->r[9]); // 8027AB88
  c->lr=0x8027AB90u; f_80004688(c); // 8027AB8C
  cmps(c,0,(int32_t)c->r[31],0); // 8027AB90
  if (crb(c,2)) { goto L_8027ABB0; } // 8027AB94
  c->r[12]=R32(c->r[30]+0x00000000u); // 8027AB98
  c->r[3]=c->r[30]|c->r[30]; // 8027AB9C
  c->r[4]=c->r[31]|c->r[31]; // 8027ABA0
  c->r[12]=R32(c->r[12]+0x00000074u); // 8027ABA4
  c->ctr=c->r[12]; // 8027ABA8
  if (true) { c->lr=0x8027ABB0u; dispatch(c,c->ctr); } // 8027ABAC
L_8027ABB0:;
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027ABB0
  c->r[4]=0u+0x0000005Cu; // 8027ABB4
  c->lr=0x8027ABBCu; f_801A0EF8(c); // 8027ABB8
  cmps(c,0,(int32_t)c->r[3],0); // 8027ABBC
  if (crb(c,2)) { goto L_8027ABD0; } // 8027ABC0
  if (crb(c,2)) { goto L_8027ABD4; } // 8027ABC4
  c->lr=0x8027ABCCu; f_8027EFA0(c); // 8027ABC8
  goto L_8027ABD4; // 8027ABCC
L_8027ABD0:;
  c->r[3]=0u+0x00000000u; // 8027ABD0
L_8027ABD4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027ABD4
  W32(c->r[30]+0x00000028u,c->r[3]); // 8027ABD8
  if (crb(c,2)) { goto L_8027AC14; } // 8027ABDC
  c->r[0]=0u+0x00000000u; // 8027ABE0
  c->r[4]=0u+0x00000000u; // 8027ABE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8027ABE8
  c->r[5]=0u+0x00000000u; // 8027ABEC
  c->r[6]=0u+0x00000000u; // 8027ABF0
  c->r[7]=0u+0x00000000u; // 8027ABF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8027ABF8
  c->r[8]=0u+0x00000000u; // 8027ABFC
  c->r[9]=0u+0x00000000u; // 8027AC00
  c->r[10]=0u+0x00000000u; // 8027AC04
  W32(c->r[1]+0x00000010u,c->r[0]); // 8027AC08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027AC0C
  c->lr=0x8027AC14u; f_8027FB58(c); // 8027AC10
L_8027AC14:;
  c->r[3]=c->r[30]|c->r[30]; // 8027AC14
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8027AC18
  c->r[30]=R32(c->r[1]+0x00000028u); // 8027AC1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027AC20
  c->lr=c->r[0]; // 8027AC24
  c->r[1]=c->r[1]+0x00000030u; // 8027AC28
  return; // 8027AC2C
}

// __ct__Q34nw4r3lyt7TextBoxFPCQ44nw4r3lyt3res7TextBoxRCQ34nw4r3lyt11ResBlockSet
void f_8027AC30(Ctx* __restrict c) {
  trace_call(0x8027AC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027AC30
  c->r[0]=c->lr; // 8027AC34
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027AC38
  c->r[11]=c->r[1]+0x00000040u; // 8027AC3C
  c->lr=0x8027AC44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027AC40
  c->r[28]=c->r[3]|c->r[3]; // 8027AC44
  c->r[29]=c->r[4]|c->r[4]; // 8027AC48
  c->r[30]=c->r[5]|c->r[5]; // 8027AC4C
  c->lr=0x8027AC54u; f_80278188(c); // 8027AC50
  c->r[3]=0u+0x80340000u; // 8027AC54
  c->r[4]=0u+0x800D0000u; // 8027AC58
  c->r[3]=c->r[3]+0x000051A8u; // 8027AC5C
  c->r[5]=0u+0x80070000u; // 8027AC60
  W32(c->r[28]+0x00000000u,c->r[3]); // 8027AC64
  c->r[3]=c->r[28]+0x000000DCu; // 8027AC68
  c->r[4]=c->r[4]+0x0000797Cu; // 8027AC6C
  c->r[5]=c->r[5]+0xFFFF8B68u; // 8027AC70
  c->r[6]=0u+0x00000004u; // 8027AC74
  c->r[7]=0u+0x00000002u; // 8027AC78
  c->lr=0x8027AC80u; f_80185B6C(c); // 8027AC7C
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 8027AC80
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027AC84
  c->r[31]=rotl(c->r[0],31)&0x0000FFFFu; cr0(c,c->r[31]); // 8027AC88
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 8027AC8C
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 8027AC90
  if (crb(c,2)) { goto L_8027ACA0; } // 8027AC94
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8027AC98
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 8027AC9C
L_8027ACA0:;
  c->r[3]=0u+0x55550000u; // 8027ACA0
  c->r[0]=R8(c->r[28]+0x00000100u); // 8027ACA4
  c->r[8]=c->r[3]+0x00005556u; // 8027ACA8
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027ACAC
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 8027ACB0
  c->r[9]=0u+0x00000000u; // 8027ACB4
  W32(c->r[28]+0x000000D8u,c->r[9]); // 8027ACB8
  c->r[3]=c->r[28]+0x00000101u; // 8027ACBC
  c->r[4]=0u+0x00000000u; // 8027ACC0
  W16(c->r[28]+0x000000FCu,c->r[9]); // 8027ACC4
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 8027ACC8
  W16(c->r[28]+0x000000FEu,c->r[9]); // 8027ACCC
  c->r[0]=c->r[5]+c->r[0]; // 8027ACD0
  c->r[5]=0u+0x00000001u; // 8027ACD4
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 8027ACD8
  W32(c->r[28]+0x000000E4u,c->r[9]); // 8027ACDC
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 8027ACE0
  c->r[6]=c->r[0]-c->r[6]; // 8027ACE4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8027ACE8
  c->r[0]=c->r[6]+0x00000001u; // 8027ACEC
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 8027ACF0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027ACF4
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 8027ACF8
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 8027ACFC
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 8027AD00
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 8027AD04
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 8027AD08
  c->r[0]=c->r[6]+c->r[0]; // 8027AD0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8027AD10
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[0]);} // 8027AD14
  W32(c->r[28]+0x000000F8u,c->r[9]); // 8027AD18
  c->r[0]=c->r[7]-c->r[0]; // 8027AD1C
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 8027AD20
  c->r[0]=c->r[6]+0x00000003u; // 8027AD24
  W8(c->r[28]+0x00000100u,c->r[0]); // 8027AD28
  c->lr=0x8027AD30u; f_80004688(c); // 8027AD2C
  cmps(c,0,(int32_t)c->r[31],0); // 8027AD30
  if (crb(c,2)) { goto L_8027AD50; } // 8027AD34
  c->r[12]=R32(c->r[28]+0x00000000u); // 8027AD38
  c->r[3]=c->r[28]|c->r[28]; // 8027AD3C
  c->r[4]=c->r[31]|c->r[31]; // 8027AD40
  c->r[12]=R32(c->r[12]+0x00000074u); // 8027AD44
  c->ctr=c->r[12]; // 8027AD48
  if (true) { c->lr=0x8027AD50u; dispatch(c,c->ctr); } // 8027AD4C
L_8027AD50:;
  c->r[4]=R16(c->r[29]+0x0000004Eu); // 8027AD50
  cmpu(c,0,c->r[4],0x00000002u); // 8027AD54
  if (crb(c,0)) { goto L_8027AD94; } // 8027AD58
  c->r[0]=R32(c->r[28]+0x000000D8u); // 8027AD5C
  cmps(c,0,(int32_t)c->r[0],0); // 8027AD60
  if (crb(c,2)) { goto L_8027AD94; } // 8027AD64
  c->r[12]=R32(c->r[28]+0x00000000u); // 8027AD68
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 8027AD6C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8027AD70
  c->r[4]=R32(c->r[29]+0x00000058u); // 8027AD74
  c->r[12]=R32(c->r[12]+0x00000080u); // 8027AD78
  c->r[3]=c->r[28]|c->r[28]; // 8027AD7C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8027AD80
  c->r[5]=0u+0x00000000u; // 8027AD84
  c->r[4]=c->r[29]+c->r[4]; // 8027AD88
  c->ctr=c->r[12]; // 8027AD8C
  if (true) { c->lr=0x8027AD94u; dispatch(c,c->ctr); } // 8027AD90
L_8027AD94:;
  c->r[0]=R8(c->r[29]+0x00000055u); // 8027AD94
  c->r[7]=R32(c->r[29]+0x0000005Cu); // 8027AD98
  c->r[6]=R32(c->r[29]+0x00000060u); // 8027AD9C
  {uint32_t ea=c->r[29]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027ADA0
  {uint32_t ea=c->r[29]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027ADA4
  c->r[5]=R8(c->r[29]+0x00000054u); // 8027ADA8
  c->r[4]=R8(c->r[28]+0x00000101u); // 8027ADAC
  c->r[4]=(rotl(c->r[0],5)&0x00000060u)|(c->r[4]&~0x00000060u); // 8027ADB0
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027ADB4
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027ADB8
  c->r[0]=R16(c->r[29]+0x00000052u); // 8027ADBC
  c->r[3]=R32(c->r[30]+0x00000004u); // 8027ADC0
  W32(c->r[28]+0x000000DCu,c->r[7]); // 8027ADC4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8027ADC8
  c->r[7]=c->r[3]+0x0000000Cu; // 8027ADCC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8027ADD0
  W32(c->r[28]+0x000000E0u,c->r[6]); // 8027ADD4
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[3]);} // 8027ADD8
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[2]);} // 8027ADDC
  W8(c->r[28]+0x00000100u,c->r[5]); // 8027ADE0
  W8(c->r[28]+0x00000101u,c->r[4]); // 8027ADE4
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[1]);} // 8027ADE8
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 8027ADEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027ADF0
  c->r[0]=R32(c->r[7]+c->r[0]); // 8027ADF4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8027ADF8
  c->r[31]=c->r[7]+c->r[0]; // 8027ADFC
  c->r[4]=c->r[31]|c->r[31]; // 8027AE00
  c->ctr=c->r[12]; // 8027AE04
  if (true) { c->lr=0x8027AE0Cu; dispatch(c,c->ctr); } // 8027AE08
  cmps(c,0,(int32_t)c->r[3],0); // 8027AE0C
  if (crb(c,2)) { goto L_8027AE1C; } // 8027AE10
  W32(c->r[28]+0x000000E4u,c->r[3]); // 8027AE14
  goto L_8027AE9C; // 8027AE18
L_8027AE1C:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8027AE1C
  c->r[4]=0u+0x666F0000u; // 8027AE20
  c->r[5]=c->r[31]|c->r[31]; // 8027AE24
  c->r[6]=0u+0x00000000u; // 8027AE28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027AE2C
  c->r[4]=c->r[4]+0x00006E74u; // 8027AE30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027AE34
  c->ctr=c->r[12]; // 8027AE38
  if (true) { c->lr=0x8027AE40u; dispatch(c,c->ctr); } // 8027AE3C
  cmps(c,0,(int32_t)c->r[3],0); // 8027AE40
  c->r[27]=c->r[3]|c->r[3]; // 8027AE44
  if (crb(c,2)) { goto L_8027AE9C; } // 8027AE48
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027AE4C
  c->r[4]=0u+0x0000001Cu; // 8027AE50
  c->lr=0x8027AE58u; f_801A0EF8(c); // 8027AE54
  cmps(c,0,(int32_t)c->r[3],0); // 8027AE58
  if (crb(c,2)) { goto L_8027AE74; } // 8027AE5C
  c->r[31]=c->r[3]|c->r[3]; // 8027AE60
  if (crb(c,2)) { goto L_8027AE78; } // 8027AE64
  c->lr=0x8027AE6Cu; f_802A96C4(c); // 8027AE68
  c->r[31]=c->r[3]|c->r[3]; // 8027AE6C
  goto L_8027AE78; // 8027AE70
L_8027AE74:;
  c->r[31]=0u+0x00000000u; // 8027AE74
L_8027AE78:;
  cmps(c,0,(int32_t)c->r[31],0); // 8027AE78
  if (crb(c,2)) { goto L_8027AE9C; } // 8027AE7C
  c->r[3]=c->r[31]|c->r[31]; // 8027AE80
  c->r[4]=c->r[27]|c->r[27]; // 8027AE84
  c->lr=0x8027AE8Cu; f_802A9758(c); // 8027AE88
  c->r[0]=R8(c->r[28]+0x00000101u); // 8027AE8C
  W32(c->r[28]+0x000000E4u,c->r[31]); // 8027AE90
  c->r[0]=c->r[0]|0x00000080u; // 8027AE94
  W8(c->r[28]+0x00000101u,c->r[0]); // 8027AE98
L_8027AE9C:;
  c->r[0]=R16(c->r[29]+0x00000050u); // 8027AE9C
  c->r[4]=0u+0x0000005Cu; // 8027AEA0
  c->r[7]=R32(c->r[30]+0x00000008u); // 8027AEA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027AEA8
  c->r[3]=R32(c->r[30]+0x00000000u); // 8027AEAC
  c->r[6]=c->r[7]+c->r[0]; // 8027AEB0
  c->r[5]=R32(c->r[30]+0x00000004u); // 8027AEB4
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8027AEB8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8027AEBC
  W32(c->r[1]+0x00000010u,c->r[3]); // 8027AEC0
  c->r[27]=c->r[7]+c->r[6]; // 8027AEC4
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027AEC8
  W32(c->r[1]+0x00000014u,c->r[5]); // 8027AECC
  W32(c->r[1]+0x00000018u,c->r[7]); // 8027AED0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8027AED4
  c->lr=0x8027AEDCu; f_801A0EF8(c); // 8027AED8
  cmps(c,0,(int32_t)c->r[3],0); // 8027AEDC
  if (crb(c,2)) { goto L_8027AEF8; } // 8027AEE0
  if (crb(c,2)) { goto L_8027AEFC; } // 8027AEE4
  c->r[4]=c->r[27]|c->r[27]; // 8027AEE8
  c->r[5]=c->r[1]+0x00000010u; // 8027AEEC
  c->lr=0x8027AEF4u; f_8027F0B4(c); // 8027AEF0
  goto L_8027AEFC; // 8027AEF4
L_8027AEF8:;
  c->r[3]=0u+0x00000000u; // 8027AEF8
L_8027AEFC:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 8027AEFC
  c->r[11]=c->r[1]+0x00000040u; // 8027AF00
  c->r[3]=c->r[28]|c->r[28]; // 8027AF04
  c->lr=0x8027AF0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027AF08
  c->r[0]=R32(c->r[1]+0x00000044u); // 8027AF0C
  c->lr=c->r[0]; // 8027AF10
  c->r[1]=c->r[1]+0x00000040u; // 8027AF14
  return; // 8027AF18
}

// __dt__Q34nw4r3lyt7TextBoxFv
void f_8027AF1C(Ctx* __restrict c) {
  trace_call(0x8027AF1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027AF1C
  c->r[0]=c->lr; // 8027AF20
  cmps(c,0,(int32_t)c->r[3],0); // 8027AF24
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027AF28
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8027AF2C
  W32(c->r[1]+0x00000038u,c->r[30]); // 8027AF30
  c->r[30]=c->r[4]|c->r[4]; // 8027AF34
  W32(c->r[1]+0x00000034u,c->r[29]); // 8027AF38
  c->r[29]=c->r[3]|c->r[3]; // 8027AF3C
  if (crb(c,2)) { goto L_8027B09C; } // 8027AF40
  c->r[0]=R8(c->r[3]+0x00000101u); // 8027AF44
  c->r[4]=0u+0x80340000u; // 8027AF48
  c->r[4]=c->r[4]+0x000051A8u; // 8027AF4C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8027AF50
  W32(c->r[3]+0x00000000u,c->r[4]); // 8027AF54
  if (crb(c,2)) { goto L_8027AF98; } // 8027AF58
  c->r[31]=R32(c->r[3]+0x000000E4u); // 8027AF5C
  cmps(c,0,(int32_t)c->r[31],0); // 8027AF60
  if (crb(c,2)) { goto L_8027AF8C; } // 8027AF64
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027AF68
  c->r[3]=c->r[31]|c->r[31]; // 8027AF6C
  c->r[4]=0u+0xFFFFFFFFu; // 8027AF70
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027AF74
  c->ctr=c->r[12]; // 8027AF78
  if (true) { c->lr=0x8027AF80u; dispatch(c,c->ctr); } // 8027AF7C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027AF80
  c->r[4]=c->r[31]|c->r[31]; // 8027AF84
  c->lr=0x8027AF8Cu; f_801A0F08(c); // 8027AF88
L_8027AF8C:;
  c->r[0]=R8(c->r[29]+0x00000101u); // 8027AF8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 8027AF90
  W8(c->r[29]+0x00000101u,c->r[0]); // 8027AF94
L_8027AF98:;
  c->r[0]=0u+0x00000000u; // 8027AF98
  W32(c->r[29]+0x000000E4u,c->r[0]); // 8027AF9C
  goto L_8027AFF8; // 8027AFA0
  if (true) { c->lr=0x8027AFA8u; dispatch(c,c->ctr); } // 8027AFA4
  c->r[0]=c->r[3]^0x80000000u; // 8027AFA8
  c->r[3]=R32(c->r[29]+0x000000E4u); // 8027AFAC
  c->r[4]=0u+0x43300000u; // 8027AFB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8027AFB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027AFB8
  W32(c->r[1]+0x00000018u,c->r[4]); // 8027AFBC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027AFC0
  c->ctr=c->r[12]; // 8027AFC4
  if (true) { c->lr=0x8027AFCCu; dispatch(c,c->ctr); } // 8027AFC8
  c->r[0]=c->r[3]^0x80000000u; // 8027AFCC
  W32(c->r[1]+0x00000020u,c->r[4]); // 8027AFD0
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[1]=RF64(ea);} // 8027AFD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027AFD8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8027AFDC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8027AFE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8027AFE4
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[2]);} // 8027AFE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8027AFEC
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8027AFF0
  goto L_8027B00C; // 8027AFF4
L_8027AFF8:;
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027AFF8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027AFFC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8027B000
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8027B004
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 8027B008
L_8027B00C:;
  c->r[31]=R32(c->r[29]+0x00000028u); // 8027B00C
  cmps(c,1,(int32_t)c->r[31],0); // 8027B010
  if (crb(c,6)) { goto L_8027B054; } // 8027B014
  c->r[0]=R8(c->r[31]+0x00000059u); // 8027B018
  cmps(c,0,(int32_t)c->r[0],0); // 8027B01C
  if (!crb(c,2)) { goto L_8027B054; } // 8027B020
  if (crb(c,6)) { goto L_8027B04C; } // 8027B024
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027B028
  c->r[3]=c->r[31]|c->r[31]; // 8027B02C
  c->r[4]=0u+0xFFFFFFFFu; // 8027B030
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027B034
  c->ctr=c->r[12]; // 8027B038
  if (true) { c->lr=0x8027B040u; dispatch(c,c->ctr); } // 8027B03C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027B040
  c->r[4]=c->r[31]|c->r[31]; // 8027B044
  c->lr=0x8027B04Cu; f_801A0F08(c); // 8027B048
L_8027B04C:;
  c->r[0]=0u+0x00000000u; // 8027B04C
  W32(c->r[29]+0x00000028u,c->r[0]); // 8027B050
L_8027B054:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8027B054
  c->r[3]=c->r[29]|c->r[29]; // 8027B058
  c->r[12]=R32(c->r[12]+0x00000078u); // 8027B05C
  c->ctr=c->r[12]; // 8027B060
  if (true) { c->lr=0x8027B068u; dispatch(c,c->ctr); } // 8027B064
  c->r[4]=0u+0x80070000u; // 8027B068
  c->r[3]=c->r[29]+0x000000DCu; // 8027B06C
  c->r[4]=c->r[4]+0xFFFF8B68u; // 8027B070
  c->r[5]=0u+0x00000004u; // 8027B074
  c->r[6]=0u+0x00000002u; // 8027B078
  c->lr=0x8027B080u; f_80185C64(c); // 8027B07C
  c->r[3]=c->r[29]|c->r[29]; // 8027B080
  c->r[4]=0u+0x00000000u; // 8027B084
  c->lr=0x8027B08Cu; f_802782C0(c); // 8027B088
  cmps(c,0,(int32_t)c->r[30],0); // 8027B08C
  if (!crb(c,1)) { goto L_8027B09C; } // 8027B090
  c->r[3]=c->r[29]|c->r[29]; // 8027B094
  c->lr=0x8027B09Cu; f_800D6AD0(c); // 8027B098
L_8027B09C:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8027B09C
  c->r[3]=c->r[29]|c->r[29]; // 8027B0A0
  c->r[30]=R32(c->r[1]+0x00000038u); // 8027B0A4
  c->r[29]=R32(c->r[1]+0x00000034u); // 8027B0A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8027B0AC
  c->lr=c->r[0]; // 8027B0B0
  c->r[1]=c->r[1]+0x00000040u; // 8027B0B4
  return; // 8027B0B8
}

// fn_8027B0BC
void f_8027B0BC(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 8027B0BC
  goto L_8027B0C4; // 8027B0C0
L_8027B0C4:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027B0C4
  c->r[7]=c->r[4]+c->r[0]; // 8027B0C8
  c->r[6]=R8(c->r[7]+0x000000DCu); // 8027B0CC
  c->r[5]=R8(c->r[7]+0x000000DDu); // 8027B0D0
  c->r[4]=R8(c->r[7]+0x000000DEu); // 8027B0D4
  c->r[0]=R8(c->r[7]+0x000000DFu); // 8027B0D8
  W8(c->r[3]+0x00000000u,c->r[6]); // 8027B0DC
  W8(c->r[3]+0x00000001u,c->r[5]); // 8027B0E0
  W8(c->r[3]+0x00000002u,c->r[4]); // 8027B0E4
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027B0E8
  return; // 8027B0EC
}

// fn_8027B0F0
void f_8027B0F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027B0F0
  c->r[0]=c->lr; // 8027B0F4
  c->r[8]=R8(c->r[5]+0x00000000u); // 8027B0F8
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 8027B0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027B100
  c->r[7]=R8(c->r[5]+0x00000001u); // 8027B104
  c->r[6]=R8(c->r[5]+0x00000002u); // 8027B108
  c->r[0]=R8(c->r[5]+0x00000003u); // 8027B10C
  c->r[5]=c->r[1]+0x00000008u; // 8027B110
  W8(c->r[1]+0x00000008u,c->r[8]); // 8027B114
  W8(c->r[1]+0x00000009u,c->r[7]); // 8027B118
  W8(c->r[1]+0x0000000Au,c->r[6]); // 8027B11C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8027B120
  c->lr=0x8027B128u; f_8027B138(c); // 8027B124
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027B128
  c->lr=c->r[0]; // 8027B12C
  c->r[1]=c->r[1]+0x00000010u; // 8027B130
  return; // 8027B134
}

// fn_8027B138
void f_8027B138(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027B138
  c->r[6]=R8(c->r[5]+0x00000000u); // 8027B13C
  c->r[4]=c->r[3]+c->r[0]; // 8027B140
  c->r[0]=R8(c->r[5]+0x00000001u); // 8027B144
  W8(c->r[4]+0x000000DCu,c->r[6]); // 8027B148
  c->r[3]=R8(c->r[5]+0x00000002u); // 8027B14C
  W8(c->r[4]+0x000000DDu,c->r[0]); // 8027B150
  c->r[0]=R8(c->r[5]+0x00000003u); // 8027B154
  W8(c->r[4]+0x000000DEu,c->r[3]); // 8027B158
  W8(c->r[4]+0x000000DFu,c->r[0]); // 8027B15C
  return; // 8027B160
}

// fn_8027B164
void f_8027B164(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[4],31)&0x7FFFFFFCu; // 8027B164
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8027B168
  c->r[3]=c->r[3]+c->r[5]; // 8027B16C
  c->r[3]=c->r[3]+c->r[0]; // 8027B170
  c->r[3]=R8(c->r[3]+0x000000DCu); // 8027B174
  return; // 8027B178
}

// fn_8027B17C
void f_8027B17C(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],31)&0x7FFFFFFCu; // 8027B17C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8027B180
  c->r[3]=c->r[3]+c->r[6]; // 8027B184
  c->r[3]=c->r[3]+c->r[0]; // 8027B188
  W8(c->r[3]+0x000000DCu,c->r[5]); // 8027B18C
  return; // 8027B190
}

// fn_8027B194
void f_8027B194(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027B194
  c->r[0]=c->lr; // 8027B198
  W32(c->r[1]+0x00000084u,c->r[0]); // 8027B19C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8027B1A0
  c->r[31]=c->r[4]|c->r[4]; // 8027B1A4
  W32(c->r[1]+0x00000078u,c->r[30]); // 8027B1A8
  c->r[30]=c->r[3]|c->r[3]; // 8027B1AC
  c->r[3]=c->r[1]+0x00000008u; // 8027B1B0
  c->lr=0x8027B1B8u; f_802AED80(c); // 8027B1B4
  c->r[3]=c->r[30]|c->r[30]; // 8027B1B8
  c->r[4]=c->r[31]|c->r[31]; // 8027B1BC
  c->r[5]=c->r[1]+0x00000008u; // 8027B1C0
  c->lr=0x8027B1C8u; f_8027C0BC(c); // 8027B1C4
  c->r[3]=c->r[1]+0x00000008u; // 8027B1C8
  c->r[4]=0u+0xFFFFFFFFu; // 8027B1CC
  c->lr=0x8027B1D4u; f_802AEDDC(c); // 8027B1D0
  c->r[0]=R32(c->r[1]+0x00000084u); // 8027B1D4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8027B1D8
  c->r[30]=R32(c->r[1]+0x00000078u); // 8027B1DC
  c->lr=c->r[0]; // 8027B1E0
  c->r[1]=c->r[1]+0x00000080u; // 8027B1E4
  return; // 8027B1E8
}

// fn_8027B1EC
void f_8027B1EC(Ctx* __restrict c) {
  f_8027B194(c); return; // 8027B1EC
}

// DrawSelf__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_8027B1F0(Ctx* __restrict c) {
  trace_call(0x8027B1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027B1F0
  c->r[0]=c->lr; // 8027B1F4
  W32(c->r[1]+0x00000204u,c->r[0]); // 8027B1F8
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 8027B1FC
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 8027B200
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 8027B204
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 8027B208
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 8027B20C
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 8027B210
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[28]);} // 8027B214
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,28,ea,0,0);} // 8027B218
  c->r[11]=c->r[1]+0x000001C0u; // 8027B21C
  c->lr=0x8027B224u; f_80185EA0(c); // 8027B220
  c->r[0]=R32(c->r[3]+0x000000D8u); // 8027B224
  c->r[29]=c->r[3]|c->r[3]; // 8027B228
  cmps(c,0,(int32_t)c->r[0],0); // 8027B22C
  if (crb(c,2)) { goto L_8027B720; } // 8027B230
  c->r[0]=R32(c->r[3]+0x000000E4u); // 8027B234
  cmps(c,0,(int32_t)c->r[0],0); // 8027B238
  if (crb(c,2)) { goto L_8027B720; } // 8027B23C
  c->r[0]=R32(c->r[3]+0x00000028u); // 8027B240
  cmps(c,0,(int32_t)c->r[0],0); // 8027B244
  if (!crb(c,2)) { goto L_8027B250; } // 8027B248
  goto L_8027B720; // 8027B24C
L_8027B250:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027B250
  c->r[12]=R32(c->r[12]+0x00000070u); // 8027B254
  c->ctr=c->r[12]; // 8027B258
  if (true) { c->lr=0x8027B260u; dispatch(c,c->ctr); } // 8027B25C
  c->r[3]=c->r[1]+0x000000CCu; // 8027B260
  c->lr=0x8027B268u; f_802AED80(c); // 8027B264
  c->r[4]=c->r[29]|c->r[29]; // 8027B268
  c->r[3]=c->r[1]+0x00000058u; // 8027B26C
  c->r[5]=c->r[1]+0x000000CCu; // 8027B270
  c->lr=0x8027B278u; f_8027C0BC(c); // 8027B274
  c->r[0]=R8(c->r[29]+0x000000DCu); // 8027B278
  c->r[3]=c->r[1]+0x00000030u; // 8027B27C
  c->r[4]=c->r[1]+0x00000020u; // 8027B280
  W8(c->r[1]+0x00000020u,c->r[0]); // 8027B284
  c->r[0]=R8(c->r[29]+0x000000DDu); // 8027B288
  W8(c->r[1]+0x00000021u,c->r[0]); // 8027B28C
  c->r[0]=R8(c->r[29]+0x000000DEu); // 8027B290
  W8(c->r[1]+0x00000022u,c->r[0]); // 8027B294
  c->r[0]=R8(c->r[29]+0x000000DFu); // 8027B298
  W8(c->r[1]+0x00000023u,c->r[0]); // 8027B29C
  c->r[5]=R8(c->r[29]+0x000000B9u); // 8027B2A0
  c->lr=0x8027B2A8u; f_80283D80(c); // 8027B2A4
  c->r[0]=R8(c->r[29]+0x000000E0u); // 8027B2A8
  c->r[3]=c->r[1]+0x0000002Cu; // 8027B2AC
  c->r[4]=c->r[1]+0x0000001Cu; // 8027B2B0
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8027B2B4
  c->r[0]=R8(c->r[29]+0x000000E1u); // 8027B2B8
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8027B2BC
  c->r[0]=R8(c->r[29]+0x000000E2u); // 8027B2C0
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 8027B2C4
  c->r[0]=R8(c->r[29]+0x000000E3u); // 8027B2C8
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 8027B2CC
  c->r[5]=R8(c->r[29]+0x000000B9u); // 8027B2D0
  c->lr=0x8027B2D8u; f_80283D80(c); // 8027B2D4
  c->r[3]=R32(c->r[1]+0x00000030u); // 8027B2D8
  c->r[4]=0u+0x00000000u; // 8027B2DC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8027B2E0
  cmpu(c,0,c->r[3],c->r[0]); // 8027B2E4
  if (crb(c,2)) { goto L_8027B2F0; } // 8027B2E8
  c->r[4]=0u+0x00000002u; // 8027B2EC
L_8027B2F0:;
  W32(c->r[1]+0x000000ECu,c->r[4]); // 8027B2F0
  c->r[3]=c->r[1]+0x000000CCu; // 8027B2F4
  c->lr=0x8027B2FCu; f_802AC9E8(c); // 8027B2F8
  c->r[5]=R32(c->r[1]+0x00000030u); // 8027B2FC
  c->r[3]=c->r[1]+0x000000CCu; // 8027B300
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8027B304
  c->r[4]=c->r[1]+0x00000018u; // 8027B308
  W32(c->r[1]+0x00000018u,c->r[5]); // 8027B30C
  c->r[5]=c->r[1]+0x00000014u; // 8027B310
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027B314
  c->lr=0x8027B31Cu; f_8027B758(c); // 8027B318
  c->r[6]=R32(c->r[29]+0x00000028u); // 8027B31C
  c->r[3]=c->r[1]+0x00000028u; // 8027B320
  c->r[4]=c->r[1]+0x00000040u; // 8027B324
  c->r[5]=R16(c->r[6]+0x00000010u); // 8027B328
  c->r[0]=R16(c->r[6]+0x00000012u); // 8027B32C
  W16(c->r[1]+0x00000040u,c->r[5]); // 8027B330
  W16(c->r[1]+0x00000042u,c->r[0]); // 8027B334
  c->r[5]=R16(c->r[6]+0x00000014u); // 8027B338
  c->r[0]=R16(c->r[6]+0x00000016u); // 8027B33C
  W16(c->r[1]+0x00000044u,c->r[5]); // 8027B340
  W16(c->r[1]+0x00000046u,c->r[0]); // 8027B344
  c->lr=0x8027B34Cu; f_8027A9F8(c); // 8027B348
  c->r[6]=R32(c->r[29]+0x00000028u); // 8027B34C
  c->r[3]=c->r[1]+0x00000024u; // 8027B350
  c->r[4]=c->r[1]+0x00000038u; // 8027B354
  c->r[5]=R16(c->r[6]+0x00000018u); // 8027B358
  c->r[0]=R16(c->r[6]+0x0000001Au); // 8027B35C
  W16(c->r[1]+0x00000038u,c->r[5]); // 8027B360
  W16(c->r[1]+0x0000003Au,c->r[0]); // 8027B364
  c->r[5]=R16(c->r[6]+0x0000001Cu); // 8027B368
  c->r[0]=R16(c->r[6]+0x0000001Eu); // 8027B36C
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 8027B370
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 8027B374
  c->lr=0x8027B37Cu; f_8027A9F8(c); // 8027B378
  c->r[5]=R32(c->r[1]+0x00000028u); // 8027B37C
  c->r[3]=c->r[1]+0x000000CCu; // 8027B380
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027B384
  c->r[4]=c->r[1]+0x00000010u; // 8027B388
  W32(c->r[1]+0x00000010u,c->r[5]); // 8027B38C
  c->r[5]=c->r[1]+0x0000000Cu; // 8027B390
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8027B394
  c->lr=0x8027B39Cu; f_8027B79C(c); // 8027B398
  c->r[3]=c->r[1]+0x000000CCu; // 8027B39C
  c->lr=0x8027B3A4u; f_802AB9DC(c); // 8027B3A0
  c->r[3]=0u+0x00000007u; // 8027B3A4
  c->r[4]=0u+0x00000000u; // 8027B3A8
  c->r[5]=0u+0x00000000u; // 8027B3AC
  c->r[6]=0u+0x00000007u; // 8027B3B0
  c->r[7]=0u+0x00000000u; // 8027B3B4
  c->lr=0x8027B3BCu; f_80183C4C(c); // 8027B3B8
  c->r[0]=R8(c->r[29]+0x00000101u); // 8027B3BC
  c->r[0]=rotl(c->r[0],27)&0x00000003u; // 8027B3C0
  cmps(c,0,(int32_t)c->r[0],2); // 8027B3C4
  if (crb(c,2)) { goto L_8027B44C; } // 8027B3C8
  if (!crb(c,0)) { goto L_8027B3E0; } // 8027B3CC
  cmps(c,0,(int32_t)c->r[0],0); // 8027B3D0
  if (crb(c,2)) { goto L_8027B3EC; } // 8027B3D4
  if (!crb(c,0)) { goto L_8027B444; } // 8027B3D8
  goto L_8027B3EC; // 8027B3DC
L_8027B3E0:;
  cmps(c,0,(int32_t)c->r[0],4); // 8027B3E0
  if (!crb(c,0)) { goto L_8027B3EC; } // 8027B3E4
  goto L_8027B454; // 8027B3E8
L_8027B3EC:;
  c->r[3]=0u+0x55550000u; // 8027B3EC
  c->r[4]=R8(c->r[29]+0x00000100u); // 8027B3F0
  c->r[0]=c->r[3]+0x00005556u; // 8027B3F4
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8027B3F8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8027B3FC
  c->r[0]=c->r[3]+c->r[0]; // 8027B400
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8027B404
  c->r[0]=c->r[4]-c->r[0]; // 8027B408
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8027B40C
  cmps(c,0,(int32_t)c->r[0],1); // 8027B410
  if (crb(c,2)) { goto L_8027B434; } // 8027B414
  if (!crb(c,0)) { goto L_8027B420; } // 8027B418
  goto L_8027B42C; // 8027B41C
L_8027B420:;
  cmps(c,0,(int32_t)c->r[0],3); // 8027B420
  if (!crb(c,0)) { goto L_8027B42C; } // 8027B424
  goto L_8027B43C; // 8027B428
L_8027B42C:;
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[30]=c->ps1[30]=RF32(ea);} // 8027B42C
  goto L_8027B458; // 8027B430
L_8027B434:;
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[30]=c->ps1[30]=RF32(ea);} // 8027B434
  goto L_8027B458; // 8027B438
L_8027B43C:;
  {uint32_t ea=c->r[2]+0xFFFF9E44u; c->f[30]=c->ps1[30]=RF32(ea);} // 8027B43C
  goto L_8027B458; // 8027B440
L_8027B444:;
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[30]=c->ps1[30]=RF32(ea);} // 8027B444
  goto L_8027B458; // 8027B448
L_8027B44C:;
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[30]=c->ps1[30]=RF32(ea);} // 8027B44C
  goto L_8027B458; // 8027B450
L_8027B454:;
  {uint32_t ea=c->r[2]+0xFFFF9E44u; c->f[30]=c->ps1[30]=RF32(ea);} // 8027B454
L_8027B458:;
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B458
  c->r[31]=R32(c->r[29]+0x000000D8u); // 8027B45C
  c->f[3]=-c->f[0]; // 8027B460
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027B464
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B468
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B46C
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[2]);} // 8027B470
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 8027B474
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[3]);} // 8027B478
  c->r[30]=R16(c->r[29]+0x000000FEu); // 8027B47C
  cmps(c,0,(int32_t)c->r[30],0); // 8027B480
  if (!crb(c,1)) { goto L_8027B714; } // 8027B484
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[31]=c->ps1[31]=RF32(ea);} // 8027B488
  goto L_8027B70C; // 8027B48C
L_8027B490:;
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B490
  c->r[0]=R32(c->r[1]+0x000000F8u); // 8027B494
  c->r[15]=R8(c->r[1]+0x000000EBu); // 8027B498
  W32(c->r[1]+0x00000094u,c->r[0]); // 8027B49C
  c->r[0]=R8(c->r[1]+0x000000E9u); // 8027B4A0
  W32(c->r[1]+0x00000168u,c->r[15]); // 8027B4A4
  c->r[15]=R32(c->r[1]+0x000000ECu); // 8027B4A8
  W8(c->r[1]+0x00000085u,c->r[0]); // 8027B4AC
  c->r[0]=R32(c->r[1]+0x00000168u); // 8027B4B0
  W32(c->r[1]+0x00000130u,c->r[15]); // 8027B4B4
  c->r[15]=R32(c->r[1]+0x000000F0u); // 8027B4B8
  W8(c->r[1]+0x00000087u,c->r[0]); // 8027B4BC
  c->r[0]=R32(c->r[1]+0x00000130u); // 8027B4C0
  W32(c->r[1]+0x00000134u,c->r[15]); // 8027B4C4
  c->r[15]=R32(c->r[1]+0x000000F4u); // 8027B4C8
  W32(c->r[1]+0x00000088u,c->r[0]); // 8027B4CC
  c->r[0]=R32(c->r[1]+0x00000134u); // 8027B4D0
  W32(c->r[1]+0x00000138u,c->r[15]); // 8027B4D4
  c->r[15]=R32(c->r[1]+0x000000FCu); // 8027B4D8
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8027B4DC
  c->r[0]=R32(c->r[1]+0x00000138u); // 8027B4E0
  W32(c->r[1]+0x0000013Cu,c->r[15]); // 8027B4E4
  c->r[15]=R32(c->r[1]+0x00000100u); // 8027B4E8
  W32(c->r[1]+0x00000090u,c->r[0]); // 8027B4EC
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 8027B4F0
  W32(c->r[1]+0x00000140u,c->r[15]); // 8027B4F4
  c->r[15]=R32(c->r[1]+0x00000104u); // 8027B4F8
  W32(c->r[1]+0x00000098u,c->r[0]); // 8027B4FC
  c->r[0]=R32(c->r[1]+0x00000140u); // 8027B500
  W32(c->r[1]+0x00000144u,c->r[15]); // 8027B504
  c->r[15]=R32(c->r[1]+0x00000108u); // 8027B508
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8027B50C
  c->r[0]=R32(c->r[1]+0x00000144u); // 8027B510
  W32(c->r[1]+0x00000148u,c->r[15]); // 8027B514
  c->r[15]=R16(c->r[1]+0x0000010Cu); // 8027B518
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8027B51C
  c->r[0]=R32(c->r[1]+0x00000148u); // 8027B520
  W32(c->r[1]+0x0000014Cu,c->r[15]); // 8027B524
  c->r[15]=R8(c->r[1]+0x0000010Eu); // 8027B528
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8027B52C
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 8027B530
  W32(c->r[1]+0x00000150u,c->r[15]); // 8027B534
  c->r[15]=R8(c->r[1]+0x0000010Fu); // 8027B538
  W16(c->r[1]+0x000000A8u,c->r[0]); // 8027B53C
  c->r[0]=R32(c->r[1]+0x00000150u); // 8027B540
  W32(c->r[1]+0x00000154u,c->r[15]); // 8027B544
  c->r[15]=R32(c->r[1]+0x00000114u); // 8027B548
  W8(c->r[1]+0x000000AAu,c->r[0]); // 8027B54C
  c->r[0]=R32(c->r[1]+0x00000154u); // 8027B550
  W32(c->r[1]+0x00000158u,c->r[15]); // 8027B554
  c->r[15]=R32(c->r[1]+0x00000124u); // 8027B558
  W8(c->r[1]+0x000000ABu,c->r[0]); // 8027B55C
  c->r[0]=R32(c->r[1]+0x00000158u); // 8027B560
  W32(c->r[1]+0x0000015Cu,c->r[15]); // 8027B564
  c->r[15]=R32(c->r[1]+0x00000128u); // 8027B568
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8027B56C
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 8027B570
  W32(c->r[1]+0x00000160u,c->r[15]); // 8027B574
  c->r[15]=R32(c->r[1]+0x0000012Cu); // 8027B578
  W32(c->r[1]+0x000000C0u,c->r[0]); // 8027B57C
  c->r[0]=R32(c->r[1]+0x00000160u); // 8027B580
  c->r[16]=R32(c->r[1]+0x000000CCu); // 8027B584
  c->r[17]=R32(c->r[1]+0x000000D0u); // 8027B588
  c->r[18]=R8(c->r[1]+0x000000D4u); // 8027B58C
  c->r[19]=R8(c->r[1]+0x000000D5u); // 8027B590
  c->r[20]=R8(c->r[1]+0x000000D6u); // 8027B594
  c->r[21]=R8(c->r[1]+0x000000D7u); // 8027B598
  c->r[22]=R8(c->r[1]+0x000000D8u); // 8027B59C
  c->r[23]=R8(c->r[1]+0x000000D9u); // 8027B5A0
  c->r[24]=R8(c->r[1]+0x000000DAu); // 8027B5A4
  c->r[25]=R8(c->r[1]+0x000000DBu); // 8027B5A8
  c->r[26]=R8(c->r[1]+0x000000DCu); // 8027B5AC
  c->r[27]=R8(c->r[1]+0x000000DDu); // 8027B5B0
  c->r[28]=R8(c->r[1]+0x000000DEu); // 8027B5B4
  c->r[12]=R8(c->r[1]+0x000000DFu); // 8027B5B8
  c->r[11]=R8(c->r[1]+0x000000E0u); // 8027B5BC
  c->r[10]=R8(c->r[1]+0x000000E1u); // 8027B5C0
  c->r[9]=R8(c->r[1]+0x000000E2u); // 8027B5C4
  c->r[8]=R8(c->r[1]+0x000000E3u); // 8027B5C8
  c->r[7]=R8(c->r[1]+0x000000E4u); // 8027B5CC
  c->r[6]=R8(c->r[1]+0x000000E5u); // 8027B5D0
  c->r[5]=R8(c->r[1]+0x000000E6u); // 8027B5D4
  c->r[4]=R8(c->r[1]+0x000000E7u); // 8027B5D8
  c->r[3]=R8(c->r[1]+0x000000E8u); // 8027B5DC
  c->r[14]=R8(c->r[1]+0x000000EAu); // 8027B5E0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[4]=c->ps1[4]=RF32(ea);} // 8027B5E4
  {uint32_t ea=c->r[1]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027B5E8
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027B5EC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B5F0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8027B5F4
  c->r[0]=c->r[15]|c->r[15]; // 8027B5F8
  W32(c->r[1]+0x00000164u,c->r[15]); // 8027B5FC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 8027B600
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 8027B604
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[31]);} // 8027B608
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 8027B60C
  W32(c->r[1]+0x00000068u,c->r[16]); // 8027B610
  W32(c->r[1]+0x0000006Cu,c->r[17]); // 8027B614
  W8(c->r[1]+0x00000070u,c->r[18]); // 8027B618
  W8(c->r[1]+0x00000071u,c->r[19]); // 8027B61C
  W8(c->r[1]+0x00000072u,c->r[20]); // 8027B620
  W8(c->r[1]+0x00000073u,c->r[21]); // 8027B624
  W8(c->r[1]+0x00000074u,c->r[22]); // 8027B628
  W8(c->r[1]+0x00000075u,c->r[23]); // 8027B62C
  W8(c->r[1]+0x00000076u,c->r[24]); // 8027B630
  W8(c->r[1]+0x00000077u,c->r[25]); // 8027B634
  W8(c->r[1]+0x00000078u,c->r[26]); // 8027B638
  W8(c->r[1]+0x00000079u,c->r[27]); // 8027B63C
  W8(c->r[1]+0x0000007Au,c->r[28]); // 8027B640
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 8027B644
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 8027B648
  W8(c->r[1]+0x0000007Du,c->r[10]); // 8027B64C
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 8027B650
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 8027B654
  W8(c->r[1]+0x00000080u,c->r[7]); // 8027B658
  W8(c->r[1]+0x00000081u,c->r[6]); // 8027B65C
  W8(c->r[1]+0x00000082u,c->r[5]); // 8027B660
  W8(c->r[1]+0x00000083u,c->r[4]); // 8027B664
  W8(c->r[1]+0x00000084u,c->r[3]); // 8027B668
  W8(c->r[1]+0x00000086u,c->r[14]); // 8027B66C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[4]);} // 8027B670
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 8027B674
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 8027B678
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8027B67C
  W32(c->r[1]+0x000000C8u,c->r[0]); // 8027B680
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 8027B684
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[31]);} // 8027B688
  c->r[5]=c->r[31]|c->r[31]; // 8027B68C
  c->r[6]=c->r[30]|c->r[30]; // 8027B690
  c->r[3]=c->r[1]+0x00000048u; // 8027B694
  c->r[4]=c->r[1]+0x00000068u; // 8027B698
  c->r[7]=c->r[1]+0x00000008u; // 8027B69C
  c->lr=0x8027B6A4u; f_8027B7E0(c); // 8027B6A0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B6A4
  c->r[14]=c->r[3]|c->r[3]; // 8027B6A8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B6AC
  c->r[3]=c->r[1]+0x00000068u; // 8027B6B0
  c->r[4]=0u+0xFFFFFFFFu; // 8027B6B4
  c->f[28]=c->ps1[28]=S(c->f[1]-c->f[0]); // 8027B6B8
  c->lr=0x8027B6C0u; f_802AEDDC(c); // 8027B6BC
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 8027B6C0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B6C4
  c->r[4]=c->r[31]|c->r[31]; // 8027B6C8
  c->r[5]=c->r[14]|c->r[14]; // 8027B6CC
  c->r[3]=c->r[1]+0x000000CCu; // 8027B6D0
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 8027B6D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8027B6D8
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8027B6DC
  c->lr=0x8027B6E4u; f_802AF154(c); // 8027B6E0
  c->r[0]=R8(c->r[1]+0x00000008u); // 8027B6E4
  cmps(c,0,(int32_t)c->r[0],0); // 8027B6E8
  if (crb(c,2)) { goto L_8027B700; } // 8027B6EC
  c->r[3]=c->r[1]+0x000000CCu; // 8027B6F0
  c->r[4]=c->r[13]+0xFFFF9798u; // 8027B6F4
  c->r[5]=0u+0x00000001u; // 8027B6F8
  c->lr=0x8027B700u; f_802AF154(c); // 8027B6FC
L_8027B700:;
  c->r[0]=rotl(c->r[14],1)&0xFFFFFFFEu; // 8027B700
  c->r[30]=c->r[30]-c->r[14]; // 8027B704
  c->r[31]=c->r[31]+c->r[0]; // 8027B708
L_8027B70C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8027B70C
  if (crb(c,1)) { IRQCHK(c); goto L_8027B490; } // 8027B710
L_8027B714:;
  c->r[3]=c->r[1]+0x000000CCu; // 8027B714
  c->r[4]=0u+0xFFFFFFFFu; // 8027B718
  c->lr=0x8027B720u; f_802AEDDC(c); // 8027B71C
L_8027B720:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 8027B720
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 8027B724
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 8027B728
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 8027B72C
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 8027B730
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 8027B734
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,28,ea,0,0);} // 8027B738
  c->r[11]=c->r[1]+0x000001C0u; // 8027B73C
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[28]=RF64(ea);} // 8027B740
  c->lr=0x8027B748u; f_80185EEC(c); // 8027B744
  c->r[0]=R32(c->r[1]+0x00000204u); // 8027B748
  c->lr=c->r[0]; // 8027B74C
  c->r[1]=c->r[1]+0x00000200u; // 8027B750
  return; // 8027B754
}

// SetColorMapping__Q34nw4r2ut10CharWriterFQ34nw4r2ut5ColorQ34nw4r2ut5Color
void f_8027B758(Ctx* __restrict c) {
  trace_call(0x8027B758u);
  c->r[11]=R8(c->r[4]+0x00000000u); // 8027B758
  c->r[10]=R8(c->r[4]+0x00000001u); // 8027B75C
  c->r[9]=R8(c->r[4]+0x00000002u); // 8027B760
  c->r[8]=R8(c->r[4]+0x00000003u); // 8027B764
  c->r[7]=R8(c->r[5]+0x00000000u); // 8027B768
  c->r[6]=R8(c->r[5]+0x00000001u); // 8027B76C
  c->r[4]=R8(c->r[5]+0x00000002u); // 8027B770
  c->r[0]=R8(c->r[5]+0x00000003u); // 8027B774
  W8(c->r[3]+0x00000018u,c->r[11]); // 8027B778
  W8(c->r[3]+0x00000019u,c->r[10]); // 8027B77C
  W8(c->r[3]+0x0000001Au,c->r[9]); // 8027B780
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 8027B784
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 8027B788
  W8(c->r[3]+0x0000001Du,c->r[6]); // 8027B78C
  W8(c->r[3]+0x0000001Eu,c->r[4]); // 8027B790
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 8027B794
  f_802AC9E8(c); return; // 8027B798
}

// fn_8027B79C
void f_8027B79C(Ctx* __restrict c) {
  c->r[11]=R8(c->r[4]+0x00000000u); // 8027B79C
  c->r[10]=R8(c->r[4]+0x00000001u); // 8027B7A0
  c->r[9]=R8(c->r[4]+0x00000002u); // 8027B7A4
  c->r[8]=R8(c->r[4]+0x00000003u); // 8027B7A8
  c->r[7]=R8(c->r[5]+0x00000000u); // 8027B7AC
  c->r[6]=R8(c->r[5]+0x00000001u); // 8027B7B0
  c->r[4]=R8(c->r[5]+0x00000002u); // 8027B7B4
  c->r[0]=R8(c->r[5]+0x00000003u); // 8027B7B8
  W8(c->r[3]+0x00000000u,c->r[11]); // 8027B7BC
  W8(c->r[3]+0x00000001u,c->r[10]); // 8027B7C0
  W8(c->r[3]+0x00000002u,c->r[9]); // 8027B7C4
  W8(c->r[3]+0x00000003u,c->r[8]); // 8027B7C8
  W8(c->r[3]+0x00000004u,c->r[7]); // 8027B7CC
  W8(c->r[3]+0x00000005u,c->r[6]); // 8027B7D0
  W8(c->r[3]+0x00000006u,c->r[4]); // 8027B7D4
  W8(c->r[3]+0x00000007u,c->r[0]); // 8027B7D8
  return; // 8027B7DC
}

// CalcLineRectImpl<w>__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FPQ34nw4r2ut4RectPQ34nw4r2ut17TextWriterBase<w>PCwifPb_i
void f_8027B7E0(Ctx* __restrict c) {
  trace_call(0x8027B7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027B7E0
  c->r[0]=c->lr; // 8027B7E4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8027B7E8
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 8027B7EC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 8027B7F0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 8027B7F4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 8027B7F8
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 8027B7FC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 8027B800
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 8027B804
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 8027B808
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 8027B80C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 8027B810
  c->r[11]=c->r[1]+0x00000080u; // 8027B814
  c->lr=0x8027B81Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027B818
  c->r[0]=0u+0x00000000u; // 8027B81C
  c->r[25]=c->r[3]|c->r[3]; // 8027B820
  W32(c->r[1]+0x00000040u,c->r[0]); // 8027B824
  c->f[30]=c->f[1]; // 8027B828
  c->r[26]=c->r[4]|c->r[4]; // 8027B82C
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[31]=c->ps1[31]=RF32(ea);} // 8027B830
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027B834
  c->r[27]=c->r[5]|c->r[5]; // 8027B838
  c->r[28]=c->r[6]|c->r[6]; // 8027B83C
  W32(c->r[1]+0x00000048u,c->r[0]); // 8027B840
  c->r[29]=c->r[7]|c->r[7]; // 8027B844
  c->r[3]=c->r[1]+0x00000028u; // 8027B848
  c->r[31]=0u+0x00000000u; // 8027B84C
  W32(c->r[1]+0x00000038u,c->r[4]); // 8027B850
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8027B854
  c->r[4]=R32(c->r[4]+0x00000048u); // 8027B858
  c->lr=0x8027B860u; f_8027BBC0(c); // 8027B85C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8027B860
  c->r[3]=c->r[26]|c->r[26]; // 8027B864
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B868
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 8027B86C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[0]);} // 8027B870
  c->lr=0x8027B878u; f_802AEE34(c); // 8027B874
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B878
  fcmp(c,0,c->f[0],c->f[1]); // 8027B87C
  if (!crb(c,1)) { goto L_8027B888; } // 8027B880
  goto L_8027B88C; // 8027B884
L_8027B888:;
  c->f[1]=c->f[0]; // 8027B888
L_8027B88C:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 8027B88C
  c->r[3]=c->r[26]|c->r[26]; // 8027B890
  c->lr=0x8027B898u; f_802AEE34(c); // 8027B894
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B898
  fcmp(c,0,c->f[0],c->f[1]); // 8027B89C
  if (!crb(c,0)) { goto L_8027B8A8; } // 8027B8A0
  goto L_8027B8AC; // 8027B8A4
L_8027B8A8:;
  c->f[1]=c->f[0]; // 8027B8A8
L_8027B8AC:;
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 8027B8AC
  c->r[0]=0u+0x00000000u; // 8027B8B0
  c->r[3]=c->r[1]+0x00000028u; // 8027B8B4
  c->r[12]=c->r[1]+0x0000002Cu; // 8027B8B8
  W8(c->r[29]+0x00000000u,c->r[0]); // 8027B8BC
  W32(c->r[1]+0x00000028u,c->r[27]); // 8027B8C0
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027B8C4
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027B8C8
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B8CC
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B8D0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 8027B8D4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 8027B8D8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8027B8DC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027B8E0
  c->lr=0x8027B8E8u; f_80185D5C(c); // 8027B8E4
  c->r[0]=c->r[0]|0x00000000u; // 8027B8E8
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[28]=c->ps1[28]=RF32(ea);} // 8027B8EC
  c->r[4]=c->r[3]|c->r[3]; // 8027B8F0
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[29]=RF64(ea);} // 8027B8F4
  c->r[24]=0u+0x43300000u; // 8027B8F8
  goto L_8027BB08; // 8027B8FC
L_8027B900:;
  c->r[5]=rotl(c->r[4],0)&0x0000FFFFu; // 8027B900
  cmps(c,0,(int32_t)c->r[5],32); // 8027B904
  if (!crb(c,0)) { goto L_8027BA24; } // 8027B908
  c->r[0]=cntlz(c->r[31]); // 8027B90C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8027B910
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8027B914
  c->r[4]=c->r[1]+0x00000008u; // 8027B918
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[28]);} // 8027B91C
  c->r[6]=c->r[1]+0x00000038u; // 8027B920
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[28]);} // 8027B924
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[28]);} // 8027B928
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 8027B92C
  W32(c->r[1]+0x00000048u,c->r[0]); // 8027B930
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[31]);} // 8027B934
  c->r[3]=R32(c->r[26]+0x00000060u); // 8027B938
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027B93C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8027B940
  c->ctr=c->r[12]; // 8027B944
  if (true) { c->lr=0x8027B94Cu; dispatch(c,c->ctr); } // 8027B948
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8027B94C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B950
  W32(c->r[1]+0x00000028u,c->r[0]); // 8027B954
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B958
  fcmp(c,0,c->f[0],c->f[1]); // 8027B95C
  if (!crb(c,1)) { goto L_8027B968; } // 8027B960
  goto L_8027B96C; // 8027B964
L_8027B968:;
  c->f[1]=c->f[0]; // 8027B968
L_8027B96C:;
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[1]);} // 8027B96C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B970
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B974
  fcmp(c,0,c->f[0],c->f[1]); // 8027B978
  if (!crb(c,1)) { goto L_8027B984; } // 8027B97C
  goto L_8027B988; // 8027B980
L_8027B984:;
  c->f[1]=c->f[0]; // 8027B984
L_8027B988:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 8027B988
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B98C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B990
  fcmp(c,0,c->f[0],c->f[1]); // 8027B994
  if (!crb(c,0)) { goto L_8027B9A0; } // 8027B998
  goto L_8027B9A4; // 8027B99C
L_8027B9A0:;
  c->f[1]=c->f[0]; // 8027B9A0
L_8027B9A4:;
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 8027B9A4
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B9A8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027B9AC
  fcmp(c,0,c->f[0],c->f[2]); // 8027B9B0
  if (!crb(c,0)) { goto L_8027B9BC; } // 8027B9B4
  goto L_8027B9C0; // 8027B9B8
L_8027B9BC:;
  c->f[2]=c->f[0]; // 8027B9BC
L_8027B9C0:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027B9C0
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027B9C4
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[2]);} // 8027B9C8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027B9CC
  {uint32_t ea=c->r[26]+0x0000002Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8027B9D0
  fcmp(c,0,c->f[0],c->f[30]); // 8027B9D4
  if (!crb(c,1)) { goto L_8027B9E8; } // 8027B9D8
  c->r[0]=0u+0x00000001u; // 8027B9DC
  W8(c->r[29]+0x00000000u,c->r[0]); // 8027B9E0
  goto L_8027BB24; // 8027B9E4
L_8027B9E8:;
  cmps(c,0,(int32_t)c->r[3],4); // 8027B9E8
  if (!crb(c,2)) { goto L_8027B9F8; } // 8027B9EC
  c->r[3]=c->r[28]|c->r[28]; // 8027B9F0
  goto L_8027BB80; // 8027B9F4
L_8027B9F8:;
  cmps(c,0,(int32_t)c->r[3],1); // 8027B9F8
  if (!crb(c,2)) { goto L_8027BA08; } // 8027B9FC
  c->r[31]=0u+0x00000000u; // 8027BA00
  goto L_8027BAD0; // 8027BA04
L_8027BA08:;
  cmps(c,0,(int32_t)c->r[3],2); // 8027BA08
  if (!crb(c,2)) { goto L_8027BA18; } // 8027BA0C
  c->r[31]=0u+0x00000001u; // 8027BA10
  goto L_8027BAD0; // 8027BA14
L_8027BA18:;
  cmps(c,0,(int32_t)c->r[3],3); // 8027BA18
  if (crb(c,2)) { goto L_8027BB24; } // 8027BA1C
  goto L_8027BAD0; // 8027BA20
L_8027BA24:;
  cmps(c,0,(int32_t)c->r[31],0); // 8027BA24
  if (crb(c,2)) { goto L_8027BA34; } // 8027BA28
  {uint32_t ea=c->r[26]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027BA2C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8027BA30
L_8027BA34:;
  c->r[0]=R8(c->r[26]+0x00000043u); // 8027BA34
  c->r[31]=0u+0x00000001u; // 8027BA38
  cmps(c,0,(int32_t)c->r[0],0); // 8027BA3C
  if (crb(c,2)) { goto L_8027BA50; } // 8027BA40
  {uint32_t ea=c->r[26]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027BA44
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8027BA48
  goto L_8027BA88; // 8027BA4C
L_8027BA50:;
  c->r[3]=R32(c->r[26]+0x00000048u); // 8027BA50
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8027BA54
  {uint32_t ea=c->r[26]+0x00000024u; c->f[27]=c->ps1[27]=RF32(ea);} // 8027BA58
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027BA5C
  c->r[12]=R32(c->r[12]+0x00000048u); // 8027BA60
  c->ctr=c->r[12]; // 8027BA64
  if (true) { c->lr=0x8027BA6Cu; dispatch(c,c->ctr); } // 8027BA68
  c->r[0]=c->r[3]^0x80000000u; // 8027BA6C
  W32(c->r[1]+0x00000050u,c->r[24]); // 8027BA70
  W32(c->r[1]+0x00000054u,c->r[0]); // 8027BA74
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 8027BA78
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 8027BA7C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 8027BA80
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8027BA84
L_8027BA88:;
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027BA88
  fcmp(c,0,c->f[0],c->f[31]); // 8027BA8C
  if (!crb(c,1)) { goto L_8027BA98; } // 8027BA90
  c->f[0]=c->f[31]; // 8027BA94
L_8027BA98:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027BA98
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 8027BA9C
  fcmp(c,0,c->f[2],c->f[31]); // 8027BAA0
  if (!crb(c,0)) { goto L_8027BAAC; } // 8027BAA4
  c->f[2]=c->f[31]; // 8027BAA8
L_8027BAAC:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8027BAAC
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027BAB0
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[2]);} // 8027BAB4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027BAB8
  fcmp(c,0,c->f[0],c->f[30]); // 8027BABC
  if (!crb(c,1)) { goto L_8027BAD0; } // 8027BAC0
  c->r[0]=0u+0x00000001u; // 8027BAC4
  W8(c->r[29]+0x00000000u,c->r[0]); // 8027BAC8
  goto L_8027BB24; // 8027BACC
L_8027BAD0:;
  c->r[30]=R32(c->r[1]+0x00000028u); // 8027BAD0
  c->r[3]=c->r[1]+0x00000028u; // 8027BAD4
  c->r[12]=c->r[1]+0x0000002Cu; // 8027BAD8
  c->lr=0x8027BAE0u; f_80185D5C(c); // 8027BADC
  c->r[0]=c->r[0]|0x00000000u; // 8027BAE0
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027BAE4
  c->r[4]=c->r[3]|c->r[3]; // 8027BAE8
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027BAEC
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027BAF0
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027BAF4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 8027BAF8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 8027BAFC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8027BB00
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8027BB04
L_8027BB08:;
  c->r[7]=R32(c->r[1]+0x00000028u); // 8027BB08
  c->r[3]=c->r[7]-c->r[27]; // 8027BB0C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8027BB10
  c->r[0]=c->r[0]+c->r[3]; // 8027BB14
  c->r[0]=sraw(c,c->r[0],1); // 8027BB18
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 8027BB1C
  if (!crb(c,1)) { IRQCHK(c); goto L_8027B900; } // 8027BB20
L_8027BB24:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 8027BB24
  cmps(c,0,(int32_t)c->r[0],0); // 8027BB28
  if (crb(c,2)) { goto L_8027BB6C; } // 8027BB2C
  cmps(c,0,(int32_t)c->r[30],0); // 8027BB30
  if (crb(c,2)) { goto L_8027BB6C; } // 8027BB34
  c->r[3]=c->r[30]-c->r[27]; // 8027BB38
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027BB3C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027BB40
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8027BB44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027BB48
  c->r[0]=c->r[0]+c->r[3]; // 8027BB4C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027BB50
  c->r[3]=sraw(c,c->r[0],1); // 8027BB54
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[3]);} // 8027BB58
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 8027BB5C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 8027BB60
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027BB64
  goto L_8027BB80; // 8027BB68
L_8027BB6C:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 8027BB6C
  c->r[3]=c->r[0]-c->r[27]; // 8027BB70
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8027BB74
  c->r[0]=c->r[0]+c->r[3]; // 8027BB78
  c->r[3]=sraw(c,c->r[0],1); // 8027BB7C
L_8027BB80:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 8027BB80
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 8027BB84
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 8027BB88
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 8027BB8C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 8027BB90
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 8027BB94
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 8027BB98
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 8027BB9C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 8027BBA0
  c->r[11]=c->r[1]+0x00000080u; // 8027BBA4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 8027BBA8
  c->lr=0x8027BBB0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027BBAC
  c->r[0]=R32(c->r[1]+0x000000D4u); // 8027BBB0
  c->lr=c->r[0]; // 8027BBB4
  c->r[1]=c->r[1]+0x000000D0u; // 8027BBB8
  return; // 8027BBBC
}

// GetCharStrmReader__Q34nw4r2ut4FontCFv
void f_8027BBC0(Ctx* __restrict c) {
  trace_call(0x8027BBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027BBC0
  c->r[0]=0u+0x00000000u; // 8027BBC4
  c->r[6]=R32(c->r[4]+0x00000004u); // 8027BBC8
  c->r[5]=R32(c->r[4]+0x00000008u); // 8027BBCC
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8027BBD0
  W32(c->r[1]+0x00000008u,c->r[6]); // 8027BBD4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8027BBD8
  W32(c->r[1]+0x00000010u,c->r[4]); // 8027BBDC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8027BBE0
  W32(c->r[3]+0x00000004u,c->r[6]); // 8027BBE4
  W32(c->r[3]+0x00000008u,c->r[5]); // 8027BBE8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8027BBEC
  c->r[1]=c->r[1]+0x00000020u; // 8027BBF0
  return; // 8027BBF4
}

// fn_8027BBF8
void f_8027BBF8(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x000000FCu); // 8027BBF8
  c->r[0]=cntlz(c->r[3]); // 8027BBFC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8027BC00
  c->r[4]=rotl(c->r[0],27)&0x00000001u; // 8027BC04
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8027BC08
  c->r[3]=0u-c->r[4]; // 8027BC0C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8027BC10
  c->r[3]=c->r[0]&~c->r[3]; // 8027BC14
  return; // 8027BC18
}

// fn_8027BC1C
void f_8027BC1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027BC1C
  c->r[0]=c->lr; // 8027BC20
  cmps(c,0,(int32_t)c->r[4],0); // 8027BC24
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027BC28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027BC2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027BC30
  c->r[30]=c->r[4]|c->r[4]; // 8027BC34
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027BC38
  c->r[29]=c->r[3]|c->r[3]; // 8027BC3C
  if (crb(c,2)) { goto L_8027BCC4; } // 8027BC40
  c->r[4]=c->r[4]+0x00000001u; // 8027BC44
  c->r[0]=R16(c->r[3]+0x000000FCu); // 8027BC48
  c->r[31]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8027BC4C
  cmpu(c,0,c->r[31],c->r[0]); // 8027BC50
  if (!crb(c,1)) { goto L_8027BCC4; } // 8027BC54
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027BC58
  c->r[12]=R32(c->r[12]+0x00000078u); // 8027BC5C
  c->ctr=c->r[12]; // 8027BC60
  if (true) { c->lr=0x8027BC68u; dispatch(c,c->ctr); } // 8027BC64
  c->r[0]=c->r[30]+0x00000001u; // 8027BC68
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027BC6C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8027BC70
  c->lr=0x8027BC78u; f_801A0EF8(c); // 8027BC74
  cmps(c,0,(int32_t)c->r[3],0); // 8027BC78
  if (!crb(c,2)) { goto L_8027BC88; } // 8027BC7C
  c->r[3]=0u+0x00000000u; // 8027BC80
  goto L_8027BCB4; // 8027BC84
L_8027BC88:;
  c->r[0]=c->r[30]+0x00000001u; // 8027BC88
  c->r[5]=c->r[3]|c->r[3]; // 8027BC8C
  c->r[4]=0u+0x00000000u; // 8027BC90
  c->ctr=c->r[0]; // 8027BC94
  cmpu(c,0,c->r[0],0x00000000u); // 8027BC98
  if (!crb(c,1)) { goto L_8027BCB4; } // 8027BC9C
L_8027BCA0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8027BCA0
  if (crb(c,2)) { goto L_8027BCAC; } // 8027BCA4
  W16(c->r[5]+0x00000000u,c->r[4]); // 8027BCA8
L_8027BCAC:;
  c->r[5]=c->r[5]+0x00000002u; // 8027BCAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027BCA0; } // 8027BCB0
L_8027BCB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027BCB4
  W32(c->r[29]+0x000000D8u,c->r[3]); // 8027BCB8
  if (crb(c,2)) { goto L_8027BCC4; } // 8027BCBC
  W16(c->r[29]+0x000000FCu,c->r[31]); // 8027BCC0
L_8027BCC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027BCC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027BCC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027BCCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027BCD0
  c->lr=c->r[0]; // 8027BCD4
  c->r[1]=c->r[1]+0x00000020u; // 8027BCD8
  return; // 8027BCDC
}

// fn_8027BCE0
void f_8027BCE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027BCE0
  c->r[0]=c->lr; // 8027BCE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027BCE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8027BCEC
  c->r[31]=c->r[3]|c->r[3]; // 8027BCF0
  c->r[4]=R32(c->r[3]+0x000000D8u); // 8027BCF4
  cmps(c,0,(int32_t)c->r[4],0); // 8027BCF8
  if (crb(c,2)) { goto L_8027BD18; } // 8027BCFC
  if (crb(c,2)) { goto L_8027BD0C; } // 8027BD00
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027BD04
  c->lr=0x8027BD0Cu; f_801A0F08(c); // 8027BD08
L_8027BD0C:;
  c->r[0]=0u+0x00000000u; // 8027BD0C
  W32(c->r[31]+0x000000D8u,c->r[0]); // 8027BD10
  W16(c->r[31]+0x000000FCu,c->r[0]); // 8027BD14
L_8027BD18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027BD18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8027BD1C
  c->lr=c->r[0]; // 8027BD20
  c->r[1]=c->r[1]+0x00000010u; // 8027BD24
  return; // 8027BD28
}

// fn_8027BD2C
void f_8027BD2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027BD2C
  c->r[0]=c->lr; // 8027BD30
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027BD34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027BD38
  c->r[31]=c->r[3]|c->r[3]; // 8027BD3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027BD40
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027BD44
  c->r[29]=c->r[5]|c->r[5]; // 8027BD48
  W32(c->r[1]+0x00000010u,c->r[28]); // 8027BD4C
  c->r[28]=c->r[4]|c->r[4]; // 8027BD50
  c->r[3]=c->r[28]|c->r[28]; // 8027BD54
  c->lr=0x8027BD5Cu; f_80192548(c); // 8027BD58
  c->r[6]=R32(c->r[31]+0x000000D8u); // 8027BD5C
  cmps(c,0,(int32_t)c->r[6],0); // 8027BD60
  if (!crb(c,2)) { goto L_8027BD70; } // 8027BD64
  c->r[3]=0u+0x00000000u; // 8027BD68
  goto L_8027BDE8; // 8027BD6C
L_8027BD70:;
  c->r[4]=R16(c->r[31]+0x000000FCu); // 8027BD70
  c->r[0]=cntlz(c->r[4]); // 8027BD74
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 8027BD78
  c->r[5]=rotl(c->r[0],27)&0x00000001u; // 8027BD7C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8027BD80
  c->r[4]=0u-c->r[5]; // 8027BD84
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8027BD88
  c->r[0]=c->r[0]&~c->r[4]; // 8027BD8C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8027BD90
  cmpu(c,0,c->r[29],c->r[0]); // 8027BD94
  if (crb(c,0)) { goto L_8027BDA4; } // 8027BD98
  c->r[3]=0u+0x00000000u; // 8027BD9C
  goto L_8027BDE8; // 8027BDA0
L_8027BDA4:;
  c->r[0]=c->r[0]-c->r[29]; // 8027BDA4
  c->r[30]=c->r[3]|c->r[3]; // 8027BDA8
  cmpu(c,0,c->r[3],c->r[0]); // 8027BDAC
  if (!crb(c,1)) { goto L_8027BDB8; } // 8027BDB0
  c->r[30]=c->r[0]|c->r[0]; // 8027BDB4
L_8027BDB8:;
  c->r[0]=rotl(c->r[29],1)&0x0001FFFEu; // 8027BDB8
  c->r[4]=c->r[28]|c->r[28]; // 8027BDBC
  c->r[3]=c->r[6]+c->r[0]; // 8027BDC0
  c->r[5]=rotl(c->r[30],1)&0xFFFFFFFEu; // 8027BDC4
  c->lr=0x8027BDCCu; f_80004338(c); // 8027BDC8
  c->r[0]=c->r[29]+c->r[30]; // 8027BDCC
  c->r[4]=R32(c->r[31]+0x000000D8u); // 8027BDD0
  W16(c->r[31]+0x000000FEu,c->r[0]); // 8027BDD4
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 8027BDD8
  c->r[5]=0u+0x00000000u; // 8027BDDC
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8027BDE0
  W16(c->r[4]+c->r[0],c->r[5]); // 8027BDE4
L_8027BDE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027BDE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027BDEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027BDF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027BDF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8027BDF8
  c->lr=c->r[0]; // 8027BDFC
  c->r[1]=c->r[1]+0x00000020u; // 8027BE00
  return; // 8027BE04
}

// fn_8027BE08
void f_8027BE08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027BE08
  c->r[0]=c->lr; // 8027BE0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027BE10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027BE14
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027BE18
  c->r[30]=c->r[5]|c->r[5]; // 8027BE1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027BE20
  c->r[29]=c->r[3]|c->r[3]; // 8027BE24
  c->r[8]=R32(c->r[3]+0x000000D8u); // 8027BE28
  cmps(c,0,(int32_t)c->r[8],0); // 8027BE2C
  if (!crb(c,2)) { goto L_8027BE3C; } // 8027BE30
  c->r[3]=0u+0x00000000u; // 8027BE34
  goto L_8027BEB0; // 8027BE38
L_8027BE3C:;
  c->r[3]=R16(c->r[3]+0x000000FCu); // 8027BE3C
  c->r[0]=cntlz(c->r[3]); // 8027BE40
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8027BE44
  c->r[7]=rotl(c->r[0],27)&0x00000001u; // 8027BE48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8027BE4C
  c->r[3]=0u-c->r[7]; // 8027BE50
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8027BE54
  c->r[0]=c->r[0]&~c->r[3]; // 8027BE58
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8027BE5C
  cmpu(c,0,c->r[5],c->r[0]); // 8027BE60
  if (crb(c,0)) { goto L_8027BE70; } // 8027BE64
  c->r[3]=0u+0x00000000u; // 8027BE68
  goto L_8027BEB0; // 8027BE6C
L_8027BE70:;
  c->r[0]=c->r[0]-c->r[5]; // 8027BE70
  c->r[31]=c->r[6]|c->r[6]; // 8027BE74
  cmpu(c,0,c->r[6],c->r[0]); // 8027BE78
  if (!crb(c,1)) { goto L_8027BE84; } // 8027BE7C
  c->r[31]=c->r[0]|c->r[0]; // 8027BE80
L_8027BE84:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 8027BE84
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 8027BE88
  c->r[3]=c->r[8]+c->r[0]; // 8027BE8C
  c->lr=0x8027BE94u; f_80004338(c); // 8027BE90
  c->r[0]=c->r[30]+c->r[31]; // 8027BE94
  c->r[4]=R32(c->r[29]+0x000000D8u); // 8027BE98
  W16(c->r[29]+0x000000FEu,c->r[0]); // 8027BE9C
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 8027BEA0
  c->r[5]=0u+0x00000000u; // 8027BEA4
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 8027BEA8
  W16(c->r[4]+c->r[0],c->r[5]); // 8027BEAC
L_8027BEB0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027BEB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027BEB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027BEB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027BEBC
  c->lr=c->r[0]; // 8027BEC0
  c->r[1]=c->r[1]+0x00000020u; // 8027BEC4
  return; // 8027BEC8
}

// fn_8027BECC
void f_8027BECC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 8027BECC
  return; // 8027BED0
}

// fn_8027BED4
void f_8027BED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027BED4
  c->r[0]=c->lr; // 8027BED8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8027BEDC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8027BEE0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8027BEE4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8027BEE8
  W32(c->r[1]+0x00000038u,c->r[30]); // 8027BEEC
  c->r[30]=c->r[4]|c->r[4]; // 8027BEF0
  W32(c->r[1]+0x00000034u,c->r[29]); // 8027BEF4
  c->r[29]=c->r[3]|c->r[3]; // 8027BEF8
  c->r[0]=R8(c->r[3]+0x00000101u); // 8027BEFC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8027BF00
  if (crb(c,2)) { goto L_8027BF44; } // 8027BF04
  c->r[31]=R32(c->r[3]+0x000000E4u); // 8027BF08
  cmps(c,0,(int32_t)c->r[31],0); // 8027BF0C
  if (crb(c,2)) { goto L_8027BF38; } // 8027BF10
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027BF14
  c->r[3]=c->r[31]|c->r[31]; // 8027BF18
  c->r[4]=0u+0xFFFFFFFFu; // 8027BF1C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027BF20
  c->ctr=c->r[12]; // 8027BF24
  if (true) { c->lr=0x8027BF2Cu; dispatch(c,c->ctr); } // 8027BF28
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027BF2C
  c->r[4]=c->r[31]|c->r[31]; // 8027BF30
  c->lr=0x8027BF38u; f_801A0F08(c); // 8027BF34
L_8027BF38:;
  c->r[0]=R8(c->r[29]+0x00000101u); // 8027BF38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 8027BF3C
  W8(c->r[29]+0x00000101u,c->r[0]); // 8027BF40
L_8027BF44:;
  cmps(c,0,(int32_t)c->r[30],0); // 8027BF44
  W32(c->r[29]+0x000000E4u,c->r[30]); // 8027BF48
  if (crb(c,2)) { goto L_8027BFC0; } // 8027BF4C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8027BF50
  c->r[3]=c->r[30]|c->r[30]; // 8027BF54
  c->r[12]=R32(c->r[12]+0x00000010u); // 8027BF58
  c->ctr=c->r[12]; // 8027BF5C
  if (true) { c->lr=0x8027BF64u; dispatch(c,c->ctr); } // 8027BF60
  c->r[0]=c->r[3]^0x80000000u; // 8027BF64
  c->r[3]=R32(c->r[29]+0x000000E4u); // 8027BF68
  c->r[31]=0u+0x43300000u; // 8027BF6C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8027BF70
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027BF74
  W32(c->r[1]+0x00000018u,c->r[31]); // 8027BF78
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[1]=RF64(ea);} // 8027BF7C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8027BF80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027BF84
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8027BF88
  c->ctr=c->r[12]; // 8027BF8C
  if (true) { c->lr=0x8027BF94u; dispatch(c,c->ctr); } // 8027BF90
  c->r[0]=c->r[3]^0x80000000u; // 8027BF94
  W32(c->r[1]+0x00000020u,c->r[31]); // 8027BF98
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[1]=RF64(ea);} // 8027BF9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027BFA0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8027BFA4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8027BFA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8027BFAC
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[31]);} // 8027BFB0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027BFB4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8027BFB8
  goto L_8027BFD4; // 8027BFBC
L_8027BFC0:;
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027BFC0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8027BFC4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027BFC8
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8027BFCC
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 8027BFD0
L_8027BFD4:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8027BFD4
  c->r[0]=R32(c->r[1]+0x00000054u); // 8027BFD8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8027BFDC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8027BFE0
  c->r[30]=R32(c->r[1]+0x00000038u); // 8027BFE4
  c->r[29]=R32(c->r[1]+0x00000034u); // 8027BFE8
  c->lr=c->r[0]; // 8027BFEC
  c->r[1]=c->r[1]+0x00000050u; // 8027BFF0
  return; // 8027BFF4
}

// fn_8027BFF8
void f_8027BFF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027BFF8
  c->r[0]=c->lr; // 8027BFFC
  cmps(c,0,(int32_t)c->r[3],0); // 8027C000
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027C004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8027C008
  c->r[31]=c->r[3]|c->r[3]; // 8027C00C
  if (crb(c,2)) { goto L_8027C020; } // 8027C010
  cmps(c,0,(int32_t)c->r[4],0); // 8027C014
  if (!crb(c,1)) { goto L_8027C020; } // 8027C018
  c->lr=0x8027C020u; f_800D6AD0(c); // 8027C01C
L_8027C020:;
  c->r[3]=c->r[31]|c->r[31]; // 8027C020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8027C024
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027C028
  c->lr=c->r[0]; // 8027C02C
  c->r[1]=c->r[1]+0x00000010u; // 8027C030
  return; // 8027C034
}

// LoadMtx__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_8027C038(Ctx* __restrict c) {
  trace_call(0x8027C038u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027C038
  c->r[0]=c->lr; // 8027C03C
  c->r[5]=c->r[3]|c->r[3]; // 8027C040
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027C044
  c->r[0]=R8(c->r[4]+0x00000050u); // 8027C048
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8027C04C
  if (crb(c,2)) { goto L_8027C068; } // 8027C050
  c->r[3]=c->r[4]+0x00000004u; // 8027C054
  c->r[4]=c->r[5]+0x00000084u; // 8027C058
  c->r[5]=c->r[1]+0x00000008u; // 8027C05C
  c->lr=0x8027C064u; f_80167FF8(c); // 8027C060
  goto L_8027C074; // 8027C064
L_8027C068:;
  c->r[3]=c->r[3]+0x00000084u; // 8027C068
  c->r[4]=c->r[1]+0x00000008u; // 8027C06C
  c->lr=0x8027C074u; f_80167FC4(c); // 8027C070
L_8027C074:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027C074
  c->r[3]=c->r[1]+0x00000008u; // 8027C078
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C07C
  c->r[4]=0u+0x00000000u; // 8027C080
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C084
  c->f[2]=-c->f[2]; // 8027C088
  c->f[1]=-c->f[1]; // 8027C08C
  c->f[0]=-c->f[0]; // 8027C090
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8027C094
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027C098
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8027C09C
  c->lr=0x8027C0A4u; f_80184924(c); // 8027C0A0
  c->r[3]=0u+0x00000000u; // 8027C0A4
  c->lr=0x8027C0ACu; f_80184A2C(c); // 8027C0A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8027C0AC
  c->lr=c->r[0]; // 8027C0B0
  c->r[1]=c->r[1]+0x00000040u; // 8027C0B4
  return; // 8027C0B8
}

// GetTextDrawRect__Q34nw4r3lyt7TextBoxCFPQ34nw4r2ut17TextWriterBase<w>
void f_8027C0BC(Ctx* __restrict c) {
  trace_call(0x8027C0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027C0BC
  c->r[0]=c->lr; // 8027C0C0
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C0C4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8027C0C8
  c->r[0]=R32(c->r[4]+0x000000E4u); // 8027C0CC
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8027C0D0
  c->r[31]=c->r[5]|c->r[5]; // 8027C0D4
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C0D8
  W32(c->r[1]+0x00000098u,c->r[30]); // 8027C0DC
  c->r[30]=c->r[4]|c->r[4]; // 8027C0E0
  {uint32_t ea=c->r[4]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027C0E4
  W32(c->r[1]+0x00000094u,c->r[29]); // 8027C0E8
  c->r[29]=c->r[3]|c->r[3]; // 8027C0EC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8027C0F0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8027C0F4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8027C0F8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027C0FC
  c->r[3]=c->r[31]|c->r[31]; // 8027C100
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 8027C104
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 8027C108
  W32(c->r[5]+0x00000048u,c->r[0]); // 8027C10C
  c->lr=0x8027C114u; f_802AC434(c); // 8027C110
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8027C114
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C118
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C11C
  cmps(c,0,(int32_t)c->r[0],0); // 8027C120
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8027C124
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 8027C128
  if (crb(c,2)) { goto L_8027C134; } // 8027C12C
  W32(c->r[31]+0x00000060u,c->r[0]); // 8027C130
L_8027C134:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8027C134
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C138
  W8(c->r[1]+0x00000020u,c->r[0]); // 8027C13C
  c->r[6]=R16(c->r[30]+0x000000FEu); // 8027C140
  c->r[0]=R8(c->r[31]+0x00000001u); // 8027C144
  c->r[5]=R32(c->r[30]+0x000000D8u); // 8027C148
  W8(c->r[1]+0x00000021u,c->r[0]); // 8027C14C
  c->r[0]=R8(c->r[31]+0x00000002u); // 8027C150
  W8(c->r[1]+0x00000022u,c->r[0]); // 8027C154
  c->r[0]=R8(c->r[31]+0x00000003u); // 8027C158
  W8(c->r[1]+0x00000023u,c->r[0]); // 8027C15C
  c->r[0]=R8(c->r[31]+0x00000004u); // 8027C160
  W8(c->r[1]+0x00000024u,c->r[0]); // 8027C164
  c->r[0]=R8(c->r[31]+0x00000005u); // 8027C168
  W8(c->r[1]+0x00000025u,c->r[0]); // 8027C16C
  c->r[0]=R8(c->r[31]+0x00000006u); // 8027C170
  W8(c->r[1]+0x00000026u,c->r[0]); // 8027C174
  c->r[0]=R8(c->r[31]+0x00000007u); // 8027C178
  W8(c->r[1]+0x00000027u,c->r[0]); // 8027C17C
  c->r[0]=R8(c->r[31]+0x00000008u); // 8027C180
  W8(c->r[1]+0x00000028u,c->r[0]); // 8027C184
  c->r[0]=R8(c->r[31]+0x00000009u); // 8027C188
  W8(c->r[1]+0x00000029u,c->r[0]); // 8027C18C
  c->r[0]=R8(c->r[31]+0x0000000Au); // 8027C190
  W8(c->r[1]+0x0000002Au,c->r[0]); // 8027C194
  c->r[0]=R8(c->r[31]+0x0000000Bu); // 8027C198
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 8027C19C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 8027C1A0
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 8027C1A4
  c->r[0]=R8(c->r[31]+0x0000000Du); // 8027C1A8
  W8(c->r[1]+0x0000002Du,c->r[0]); // 8027C1AC
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 8027C1B0
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 8027C1B4
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 8027C1B8
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 8027C1BC
  c->r[0]=R8(c->r[31]+0x00000010u); // 8027C1C0
  W8(c->r[1]+0x00000030u,c->r[0]); // 8027C1C4
  c->r[0]=R8(c->r[31]+0x00000011u); // 8027C1C8
  W8(c->r[1]+0x00000031u,c->r[0]); // 8027C1CC
  c->r[0]=R8(c->r[31]+0x00000012u); // 8027C1D0
  W8(c->r[1]+0x00000032u,c->r[0]); // 8027C1D4
  c->r[0]=R8(c->r[31]+0x00000013u); // 8027C1D8
  W8(c->r[1]+0x00000033u,c->r[0]); // 8027C1DC
  c->r[0]=R8(c->r[31]+0x00000014u); // 8027C1E0
  W8(c->r[1]+0x00000034u,c->r[0]); // 8027C1E4
  c->r[0]=R8(c->r[31]+0x00000015u); // 8027C1E8
  W8(c->r[1]+0x00000035u,c->r[0]); // 8027C1EC
  c->r[0]=R8(c->r[31]+0x00000016u); // 8027C1F0
  W8(c->r[1]+0x00000036u,c->r[0]); // 8027C1F4
  c->r[0]=R8(c->r[31]+0x00000017u); // 8027C1F8
  W8(c->r[1]+0x00000037u,c->r[0]); // 8027C1FC
  c->r[0]=R8(c->r[31]+0x00000018u); // 8027C200
  W8(c->r[1]+0x00000038u,c->r[0]); // 8027C204
  c->r[0]=R8(c->r[31]+0x00000019u); // 8027C208
  W8(c->r[1]+0x00000039u,c->r[0]); // 8027C20C
  c->r[0]=R8(c->r[31]+0x0000001Au); // 8027C210
  W8(c->r[1]+0x0000003Au,c->r[0]); // 8027C214
  c->r[0]=R8(c->r[31]+0x0000001Bu); // 8027C218
  W8(c->r[1]+0x0000003Bu,c->r[0]); // 8027C21C
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 8027C220
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 8027C224
  c->r[0]=R8(c->r[31]+0x0000001Du); // 8027C228
  W8(c->r[1]+0x0000003Du,c->r[0]); // 8027C22C
  c->r[0]=R8(c->r[31]+0x0000001Eu); // 8027C230
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 8027C234
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 8027C238
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 8027C23C
  c->r[0]=R32(c->r[31]+0x00000020u); // 8027C240
  W32(c->r[1]+0x00000040u,c->r[0]); // 8027C244
  c->r[3]=R32(c->r[31]+0x00000024u); // 8027C248
  c->r[0]=R32(c->r[31]+0x00000028u); // 8027C24C
  W32(c->r[1]+0x00000044u,c->r[3]); // 8027C250
  W32(c->r[1]+0x00000048u,c->r[0]); // 8027C254
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 8027C258
  c->r[0]=R32(c->r[31]+0x00000030u); // 8027C25C
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8027C260
  W32(c->r[1]+0x00000050u,c->r[0]); // 8027C264
  c->r[0]=R32(c->r[31]+0x00000034u); // 8027C268
  W32(c->r[1]+0x00000054u,c->r[0]); // 8027C26C
  c->r[3]=R32(c->r[31]+0x00000038u); // 8027C270
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8027C274
  W32(c->r[1]+0x00000058u,c->r[3]); // 8027C278
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8027C27C
  c->r[0]=R8(c->r[31]+0x00000040u); // 8027C280
  W8(c->r[1]+0x00000060u,c->r[0]); // 8027C284
  c->r[0]=R8(c->r[31]+0x00000041u); // 8027C288
  W8(c->r[1]+0x00000061u,c->r[0]); // 8027C28C
  c->r[0]=R8(c->r[31]+0x00000042u); // 8027C290
  W8(c->r[1]+0x00000062u,c->r[0]); // 8027C294
  c->r[0]=R8(c->r[31]+0x00000043u); // 8027C298
  W8(c->r[1]+0x00000063u,c->r[0]); // 8027C29C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C2A0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8027C2A4
  c->r[0]=R32(c->r[31]+0x00000048u); // 8027C2A8
  W32(c->r[1]+0x00000068u,c->r[0]); // 8027C2AC
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C2B0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8027C2B4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C2B8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8027C2BC
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C2C0
  c->r[3]=c->r[29]|c->r[29]; // 8027C2C4
  c->r[4]=c->r[1]+0x00000020u; // 8027C2C8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8027C2CC
  c->r[0]=R32(c->r[31]+0x00000058u); // 8027C2D0
  W32(c->r[1]+0x00000078u,c->r[0]); // 8027C2D4
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8027C2D8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8027C2DC
  c->r[0]=R32(c->r[31]+0x00000060u); // 8027C2E0
  W32(c->r[1]+0x00000080u,c->r[0]); // 8027C2E4
  c->lr=0x8027C2ECu; f_8027C440(c); // 8027C2E8
  c->r[3]=c->r[1]+0x00000020u; // 8027C2EC
  c->r[4]=0u+0xFFFFFFFFu; // 8027C2F0
  c->lr=0x8027C2F8u; f_802AEDDC(c); // 8027C2F4
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8027C2F8
  c->r[3]=c->r[30]|c->r[30]; // 8027C2FC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027C300
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C304
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C308
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8027C30C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027C310
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 8027C314
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8027C318
  c->lr=0x8027C320u; f_80278F58(c); // 8027C31C
  c->r[5]=0u+0x55550000u; // 8027C320
  c->r[6]=R8(c->r[30]+0x00000100u); // 8027C324
  c->r[0]=c->r[5]+0x00005556u; // 8027C328
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8027C32C
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 8027C330
  W32(c->r[1]+0x00000008u,c->r[3]); // 8027C334
  W32(c->r[1]+0x00000010u,c->r[3]); // 8027C338
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 8027C33C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8027C340
  c->r[0]=c->r[5]+c->r[0]; // 8027C344
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8027C348
  c->r[0]=c->r[6]-c->r[0]; // 8027C34C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8027C350
  cmps(c,0,(int32_t)c->r[0],1); // 8027C354
  if (crb(c,2)) { goto L_8027C378; } // 8027C358
  if (!crb(c,0)) { goto L_8027C364; } // 8027C35C
  goto L_8027C370; // 8027C360
L_8027C364:;
  cmps(c,0,(int32_t)c->r[0],3); // 8027C364
  if (!crb(c,0)) { goto L_8027C370; } // 8027C368
  goto L_8027C380; // 8027C36C
L_8027C370:;
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027C370
  goto L_8027C384; // 8027C374
L_8027C378:;
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027C378
  goto L_8027C384; // 8027C37C
L_8027C380:;
  {uint32_t ea=c->r[2]+0xFFFF9E44u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027C380
L_8027C384:;
  c->r[3]=0u+0x55550000u; // 8027C384
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027C388
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C38C
  c->r[0]=c->r[3]+0x00005556u; // 8027C390
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 8027C394
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C398
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8027C39C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8027C3A0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8027C3A4
  c->r[0]=c->r[3]+c->r[0]; // 8027C3A8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8027C3AC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8027C3B0
  cmps(c,0,(int32_t)c->r[0],1); // 8027C3B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027C3B8
  if (crb(c,2)) { goto L_8027C3DC; } // 8027C3BC
  if (!crb(c,0)) { goto L_8027C3C8; } // 8027C3C0
  goto L_8027C3D4; // 8027C3C4
L_8027C3C8:;
  cmps(c,0,(int32_t)c->r[0],3); // 8027C3C8
  if (!crb(c,0)) { goto L_8027C3D4; } // 8027C3CC
  goto L_8027C3E4; // 8027C3D0
L_8027C3D4:;
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[5]=c->ps1[5]=RF32(ea);} // 8027C3D4
  goto L_8027C3E8; // 8027C3D8
L_8027C3DC:;
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[5]=c->ps1[5]=RF32(ea);} // 8027C3DC
  goto L_8027C3E8; // 8027C3E0
L_8027C3E4:;
  {uint32_t ea=c->r[2]+0xFFFF9E44u; c->f[5]=c->ps1[5]=RF32(ea);} // 8027C3E4
L_8027C3E8:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C3E8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8027C3EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C3F0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8027C3F4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C3F8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 8027C3FC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027C400
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027C404
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[5]); // 8027C408
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 8027C40C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8027C410
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 8027C414
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 8027C418
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8027C41C
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 8027C420
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8027C424
  c->r[30]=R32(c->r[1]+0x00000098u); // 8027C428
  c->r[29]=R32(c->r[1]+0x00000094u); // 8027C42C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8027C430
  c->lr=c->r[0]; // 8027C434
  c->r[1]=c->r[1]+0x000000A0u; // 8027C438
  return; // 8027C43C
}

// fn_8027C440
void f_8027C440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027C440
  c->r[0]=c->lr; // 8027C444
  W32(c->r[1]+0x00000054u,c->r[0]); // 8027C448
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8027C44C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8027C450
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8027C454
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8027C458
  c->f[30]=c->f[1]; // 8027C45C
  {uint32_t ea=c->r[2]+0xFFFF9E30u; c->f[31]=c->ps1[31]=RF32(ea);} // 8027C460
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8027C464
  c->r[31]=c->r[6]|c->r[6]; // 8027C468
  W32(c->r[1]+0x00000028u,c->r[30]); // 8027C46C
  c->r[30]=c->r[5]|c->r[5]; // 8027C470
  W32(c->r[1]+0x00000024u,c->r[29]); // 8027C474
  c->r[29]=c->r[4]|c->r[4]; // 8027C478
  W32(c->r[1]+0x00000020u,c->r[28]); // 8027C47C
  c->r[28]=c->r[3]|c->r[3]; // 8027C480
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 8027C484
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[31]);} // 8027C488
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 8027C48C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 8027C490
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[31]);} // 8027C494
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[31]);} // 8027C498
L_8027C49C:;
  c->f[1]=c->f[30]; // 8027C49C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8027C4A0
  c->r[4]=c->r[29]|c->r[29]; // 8027C4A4
  c->r[5]=c->r[30]|c->r[30]; // 8027C4A8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8027C4AC
  c->r[6]=c->r[31]|c->r[31]; // 8027C4B0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 8027C4B4
  c->r[3]=c->r[1]+0x00000010u; // 8027C4B8
  c->r[7]=c->r[1]+0x00000008u; // 8027C4BC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 8027C4C0
  c->lr=0x8027C4C8u; f_8027B7E0(c); // 8027C4C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C4C8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8027C4CC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C4D0
  c->r[30]=c->r[30]+c->r[0]; // 8027C4D4
  c->r[31]=c->r[31]-c->r[3]; // 8027C4D8
  fcmp(c,0,c->f[0],c->f[1]); // 8027C4DC
  if (!crb(c,1)) { goto L_8027C4E8; } // 8027C4E0
  goto L_8027C4EC; // 8027C4E4
L_8027C4E8:;
  c->f[1]=c->f[0]; // 8027C4E8
L_8027C4EC:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 8027C4EC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C4F0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C4F4
  fcmp(c,0,c->f[0],c->f[1]); // 8027C4F8
  if (!crb(c,1)) { goto L_8027C504; } // 8027C4FC
  goto L_8027C508; // 8027C500
L_8027C504:;
  c->f[1]=c->f[0]; // 8027C504
L_8027C508:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8027C508
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C50C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C510
  fcmp(c,0,c->f[0],c->f[1]); // 8027C514
  if (!crb(c,0)) { goto L_8027C520; } // 8027C518
  goto L_8027C524; // 8027C51C
L_8027C520:;
  c->f[1]=c->f[0]; // 8027C520
L_8027C524:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8027C524
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C528
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C52C
  fcmp(c,0,c->f[0],c->f[1]); // 8027C530
  if (!crb(c,0)) { goto L_8027C53C; } // 8027C534
  goto L_8027C540; // 8027C538
L_8027C53C:;
  c->f[1]=c->f[0]; // 8027C53C
L_8027C540:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8027C540
  c->r[0]=R8(c->r[1]+0x00000008u); // 8027C544
  cmps(c,0,(int32_t)c->r[0],0); // 8027C548
  if (crb(c,2)) { goto L_8027C5DC; } // 8027C54C
  c->f[1]=c->f[30]; // 8027C550
  c->r[4]=c->r[29]|c->r[29]; // 8027C554
  c->r[3]=c->r[1]+0x00000010u; // 8027C558
  c->r[7]=c->r[1]+0x00000008u; // 8027C55C
  c->r[5]=c->r[13]+0xFFFF9798u; // 8027C560
  c->r[6]=0u+0x00000001u; // 8027C564
  c->lr=0x8027C56Cu; f_8027B7E0(c); // 8027C568
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C56C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C570
  fcmp(c,0,c->f[0],c->f[1]); // 8027C574
  if (!crb(c,1)) { goto L_8027C580; } // 8027C578
  goto L_8027C584; // 8027C57C
L_8027C580:;
  c->f[1]=c->f[0]; // 8027C580
L_8027C584:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 8027C584
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C588
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C58C
  fcmp(c,0,c->f[0],c->f[1]); // 8027C590
  if (!crb(c,1)) { goto L_8027C59C; } // 8027C594
  goto L_8027C5A0; // 8027C598
L_8027C59C:;
  c->f[1]=c->f[0]; // 8027C59C
L_8027C5A0:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8027C5A0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C5A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C5A8
  fcmp(c,0,c->f[0],c->f[1]); // 8027C5AC
  if (!crb(c,0)) { goto L_8027C5B8; } // 8027C5B0
  goto L_8027C5BC; // 8027C5B4
L_8027C5B8:;
  c->f[1]=c->f[0]; // 8027C5B8
L_8027C5BC:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8027C5BC
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C5C0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C5C4
  fcmp(c,0,c->f[0],c->f[1]); // 8027C5C8
  if (!crb(c,0)) { goto L_8027C5D4; } // 8027C5CC
  goto L_8027C5D8; // 8027C5D0
L_8027C5D4:;
  c->f[1]=c->f[0]; // 8027C5D4
L_8027C5D8:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8027C5D8
L_8027C5DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8027C5DC
  if (crb(c,1)) { IRQCHK(c); goto L_8027C49C; } // 8027C5E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8027C5E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8027C5E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8027C5EC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8027C5F0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8027C5F4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8027C5F8
  c->r[29]=R32(c->r[1]+0x00000024u); // 8027C5FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 8027C600
  c->r[28]=R32(c->r[1]+0x00000020u); // 8027C604
  c->lr=c->r[0]; // 8027C608
  c->r[1]=c->r[1]+0x00000050u; // 8027C60C
  return; // 8027C610
}

// fn_8027C614
void f_8027C614(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFA430u; // 8027C614
  return; // 8027C618
}

// fn_8027C61C
void f_8027C61C(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA418u; // 8027C61C
  W32(c->r[13]+0xFFFFA430u,c->r[0]); // 8027C620
  return; // 8027C624
}

// __ct__Q34nw4r3lyt6WindowFPCQ44nw4r3lyt3res6WindowRCQ34nw4r3lyt11ResBlockSet
void f_8027C628(Ctx* __restrict c) {
  trace_call(0x8027C628u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027C628
  c->r[0]=c->lr; // 8027C62C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8027C630
  c->r[11]=c->r[1]+0x00000050u; // 8027C634
  c->lr=0x8027C63Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027C638
  c->r[25]=c->r[3]|c->r[3]; // 8027C63C
  c->r[26]=c->r[4]|c->r[4]; // 8027C640
  c->r[27]=c->r[5]|c->r[5]; // 8027C644
  c->lr=0x8027C64Cu; f_80278188(c); // 8027C648
  c->r[3]=0u+0x80340000u; // 8027C64C
  c->r[4]=0u+0x800D0000u; // 8027C650
  c->r[3]=c->r[3]+0x0000526Cu; // 8027C654
  c->r[5]=0u+0x80070000u; // 8027C658
  c->r[28]=c->r[25]+0x000000E8u; // 8027C65C
  W32(c->r[25]+0x00000000u,c->r[3]); // 8027C660
  c->r[3]=c->r[28]|c->r[28]; // 8027C664
  c->r[4]=c->r[4]+0x0000797Cu; // 8027C668
  c->r[5]=c->r[5]+0xFFFF8B68u; // 8027C66C
  c->r[6]=0u+0x00000004u; // 8027C670
  c->r[7]=0u+0x00000004u; // 8027C674
  c->lr=0x8027C67Cu; f_80185B6C(c); // 8027C678
  c->r[3]=c->r[28]+0x00000010u; // 8027C67C
  c->lr=0x8027C684u; f_80283AA0(c); // 8027C680
  c->r[0]=R32(c->r[26]+0x00000060u); // 8027C684
  c->r[28]=0u+0x00000008u; // 8027C688
  c->r[30]=c->r[26]+c->r[0]; // 8027C68C
  c->r[0]=R8(c->r[30]+0x00000012u); // 8027C690
  cmpu(c,0,c->r[0],0x00000008u); // 8027C694
  if (crb(c,1)) { goto L_8027C6A0; } // 8027C698
  c->r[28]=c->r[0]|c->r[0]; // 8027C69C
L_8027C6A0:;
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[4]); // 8027C6A0
  if (crb(c,2)) { goto L_8027C6B0; } // 8027C6A4
  c->r[3]=c->r[25]+0x000000F8u; // 8027C6A8
  c->lr=0x8027C6B0u; f_80283B04(c); // 8027C6AC
L_8027C6B0:;
  {uint32_t ea=c->r[26]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8027C6B0
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[5]); // 8027C6B4
  {uint32_t ea=c->r[26]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027C6B8
  {uint32_t ea=c->r[26]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027C6BC
  {uint32_t ea=c->r[26]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027C6C0
  c->r[6]=R32(c->r[30]+0x00000000u); // 8027C6C4
  c->r[4]=R32(c->r[30]+0x00000004u); // 8027C6C8
  c->r[3]=R32(c->r[30]+0x00000008u); // 8027C6CC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8027C6D0
  c->r[7]=R32(c->r[27]+0x00000008u); // 8027C6D4
  {uint32_t ea=c->r[25]+0x000000D8u; WF32(ea,c->f[3]);} // 8027C6D8
  c->r[29]=c->r[7]+0x0000000Cu; // 8027C6DC
  {uint32_t ea=c->r[25]+0x000000DCu; WF32(ea,c->f[2]);} // 8027C6E0
  {uint32_t ea=c->r[25]+0x000000E0u; WF32(ea,c->f[1]);} // 8027C6E4
  {uint32_t ea=c->r[25]+0x000000E4u; WF32(ea,c->f[0]);} // 8027C6E8
  W32(c->r[25]+0x000000E8u,c->r[6]); // 8027C6EC
  W32(c->r[25]+0x000000ECu,c->r[4]); // 8027C6F0
  W32(c->r[25]+0x000000F0u,c->r[3]); // 8027C6F4
  W32(c->r[25]+0x000000F4u,c->r[0]); // 8027C6F8
  if (crb(c,2)) { goto L_8027C718; } // 8027C6FC
  c->r[0]=R8(c->r[25]+0x000000F8u); // 8027C700
  cmps(c,0,(int32_t)c->r[0],0); // 8027C704
  if (crb(c,2)) { goto L_8027C718; } // 8027C708
  c->r[3]=c->r[25]+0x000000F8u; // 8027C70C
  c->r[4]=c->r[30]+0x00000014u; // 8027C710
  c->lr=0x8027C718u; f_80283C84(c); // 8027C714
L_8027C718:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 8027C718
  c->r[4]=0u+0x0000005Cu; // 8027C71C
  c->r[7]=R32(c->r[27]+0x00000008u); // 8027C720
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027C724
  c->r[3]=R32(c->r[27]+0x00000000u); // 8027C728
  c->r[6]=R32(c->r[29]+c->r[0]); // 8027C72C
  c->r[5]=R32(c->r[27]+0x00000004u); // 8027C730
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8027C734
  c->r[28]=c->r[7]+c->r[6]; // 8027C738
  W32(c->r[1]+0x00000018u,c->r[3]); // 8027C73C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027C740
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8027C744
  W32(c->r[1]+0x00000020u,c->r[7]); // 8027C748
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027C74C
  c->lr=0x8027C754u; f_801A0EF8(c); // 8027C750
  cmps(c,0,(int32_t)c->r[3],0); // 8027C754
  if (crb(c,2)) { goto L_8027C770; } // 8027C758
  if (crb(c,2)) { goto L_8027C774; } // 8027C75C
  c->r[4]=c->r[28]|c->r[28]; // 8027C760
  c->r[5]=c->r[1]+0x00000018u; // 8027C764
  c->lr=0x8027C76Cu; f_8027F0B4(c); // 8027C768
  goto L_8027C774; // 8027C76C
L_8027C770:;
  c->r[3]=0u+0x00000000u; // 8027C770
L_8027C774:;
  c->r[30]=R8(c->r[26]+0x0000005Cu); // 8027C774
  c->r[28]=0u+0x00000000u; // 8027C778
  W32(c->r[25]+0x00000028u,c->r[3]); // 8027C77C
  cmps(c,0,(int32_t)c->r[30],0); // 8027C780
  W8(c->r[25]+0x00000104u,c->r[28]); // 8027C784
  W32(c->r[25]+0x00000100u,c->r[28]); // 8027C788
  if (crb(c,2)) { goto L_8027C890; } // 8027C78C
  W8(c->r[25]+0x00000104u,c->r[28]); // 8027C790
  c->r[4]=rotl(c->r[30],3)&0x000007F8u; // 8027C794
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027C798
  c->lr=0x8027C7A0u; f_801A0EF8(c); // 8027C79C
  cmps(c,0,(int32_t)c->r[3],0); // 8027C7A0
  if (!crb(c,2)) { goto L_8027C7B0; } // 8027C7A4
  c->r[3]=0u+0x00000000u; // 8027C7A8
  goto L_8027C7D8; // 8027C7AC
L_8027C7B0:;
  c->r[4]=c->r[3]|c->r[3]; // 8027C7B0
  c->ctr=c->r[30]; // 8027C7B4
  cmpu(c,0,c->r[30],0x00000000u); // 8027C7B8
  if (!crb(c,1)) { goto L_8027C7D8; } // 8027C7BC
L_8027C7C0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8027C7C0
  if (crb(c,2)) { goto L_8027C7D0; } // 8027C7C4
  W8(c->r[4]+0x00000000u,c->r[28]); // 8027C7C8
  W32(c->r[4]+0x00000004u,c->r[28]); // 8027C7CC
L_8027C7D0:;
  c->r[4]=c->r[4]+0x00000008u; // 8027C7D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8027C7C0; } // 8027C7D4
L_8027C7D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8027C7D8
  W32(c->r[25]+0x00000100u,c->r[3]); // 8027C7DC
  if (crb(c,2)) { goto L_8027C7E8; } // 8027C7E0
  W8(c->r[25]+0x00000104u,c->r[30]); // 8027C7E4
L_8027C7E8:;
  c->r[0]=R32(c->r[26]+0x00000064u); // 8027C7E8
  c->r[28]=0u+0x00000000u; // 8027C7EC
  c->r[30]=0u+0x00000000u; // 8027C7F0
  c->r[31]=c->r[26]+c->r[0]; // 8027C7F4
  goto L_8027C884; // 8027C7F8
L_8027C7FC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8027C7FC
  c->r[4]=0u+0x0000005Cu; // 8027C800
  c->r[3]=R32(c->r[25]+0x00000100u); // 8027C804
  c->r[6]=c->r[26]+c->r[0]; // 8027C808
  c->r[0]=R16(c->r[26]+c->r[0]); // 8027C80C
  c->r[5]=R8(c->r[6]+0x00000002u); // 8027C810
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027C814
  c->r[7]=R32(c->r[27]+0x00000008u); // 8027C818
  W8(c->r[3]+c->r[30],c->r[5]); // 8027C81C
  c->r[3]=R32(c->r[27]+0x00000000u); // 8027C820
  c->r[6]=R32(c->r[29]+c->r[0]); // 8027C824
  c->r[5]=R32(c->r[27]+0x00000004u); // 8027C828
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8027C82C
  c->r[24]=c->r[7]+c->r[6]; // 8027C830
  W32(c->r[1]+0x00000008u,c->r[3]); // 8027C834
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027C838
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8027C83C
  W32(c->r[1]+0x00000010u,c->r[7]); // 8027C840
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027C844
  c->lr=0x8027C84Cu; f_801A0EF8(c); // 8027C848
  cmps(c,0,(int32_t)c->r[3],0); // 8027C84C
  if (crb(c,2)) { goto L_8027C868; } // 8027C850
  if (crb(c,2)) { goto L_8027C86C; } // 8027C854
  c->r[4]=c->r[24]|c->r[24]; // 8027C858
  c->r[5]=c->r[1]+0x00000008u; // 8027C85C
  c->lr=0x8027C864u; f_8027F0B4(c); // 8027C860
  goto L_8027C86C; // 8027C864
L_8027C868:;
  c->r[3]=0u+0x00000000u; // 8027C868
L_8027C86C:;
  c->r[0]=R32(c->r[25]+0x00000100u); // 8027C86C
  c->r[31]=c->r[31]+0x00000004u; // 8027C870
  c->r[28]=c->r[28]+0x00000001u; // 8027C874
  c->r[4]=c->r[0]+c->r[30]; // 8027C878
  c->r[30]=c->r[30]+0x00000008u; // 8027C87C
  W32(c->r[4]+0x00000004u,c->r[3]); // 8027C880
L_8027C884:;
  c->r[0]=R8(c->r[25]+0x00000104u); // 8027C884
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8027C888
  if (crb(c,0)) { IRQCHK(c); goto L_8027C7FC; } // 8027C88C
L_8027C890:;
  c->r[11]=c->r[1]+0x00000050u; // 8027C890
  c->r[3]=c->r[25]|c->r[25]; // 8027C894
  c->lr=0x8027C89Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027C898
  c->r[0]=R32(c->r[1]+0x00000054u); // 8027C89C
  c->lr=c->r[0]; // 8027C8A0
  c->r[1]=c->r[1]+0x00000050u; // 8027C8A4
  return; // 8027C8A8
}

// __dt__Q34nw4r3lyt6WindowFv
void f_8027C8AC(Ctx* __restrict c) {
  trace_call(0x8027C8ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027C8AC
  c->r[0]=c->lr; // 8027C8B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027C8B4
  c->r[11]=c->r[1]+0x00000030u; // 8027C8B8
  c->lr=0x8027C8C0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027C8BC
  cmps(c,0,(int32_t)c->r[3],0); // 8027C8C0
  c->r[25]=c->r[3]|c->r[3]; // 8027C8C4
  c->r[26]=c->r[4]|c->r[4]; // 8027C8C8
  if (crb(c,2)) { goto L_8027C9D4; } // 8027C8CC
  c->r[31]=R32(c->r[3]+0x00000100u); // 8027C8D0
  c->r[4]=0u+0x80340000u; // 8027C8D4
  c->r[4]=c->r[4]+0x0000526Cu; // 8027C8D8
  c->r[30]=R8(c->r[3]+0x00000104u); // 8027C8DC
  cmps(c,0,(int32_t)c->r[31],0); // 8027C8E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8027C8E4
  if (crb(c,2)) { goto L_8027C94C; } // 8027C8E8
  c->r[27]=c->r[31]|c->r[31]; // 8027C8EC
  c->r[28]=0u+0x00000000u; // 8027C8F0
  goto L_8027C938; // 8027C8F4
L_8027C8F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 8027C8F8
  if (crb(c,2)) { goto L_8027C930; } // 8027C8FC
  c->r[29]=R32(c->r[27]+0x00000004u); // 8027C900
  cmps(c,0,(int32_t)c->r[29],0); // 8027C904
  if (crb(c,2)) { goto L_8027C930; } // 8027C908
  c->r[12]=R32(c->r[29]+0x00000000u); // 8027C90C
  c->r[3]=c->r[29]|c->r[29]; // 8027C910
  c->r[4]=0u+0xFFFFFFFFu; // 8027C914
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027C918
  c->ctr=c->r[12]; // 8027C91C
  if (true) { c->lr=0x8027C924u; dispatch(c,c->ctr); } // 8027C920
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027C924
  c->r[4]=c->r[29]|c->r[29]; // 8027C928
  c->lr=0x8027C930u; f_801A0F08(c); // 8027C92C
L_8027C930:;
  c->r[27]=c->r[27]+0x00000008u; // 8027C930
  c->r[28]=c->r[28]+0x00000001u; // 8027C934
L_8027C938:;
  cmpu(c,0,c->r[28],c->r[30]); // 8027C938
  if (crb(c,0)) { IRQCHK(c); goto L_8027C8F8; } // 8027C93C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027C940
  c->r[4]=c->r[31]|c->r[31]; // 8027C944
  c->lr=0x8027C94Cu; f_801A0F08(c); // 8027C948
L_8027C94C:;
  c->r[27]=R32(c->r[25]+0x00000028u); // 8027C94C
  cmps(c,1,(int32_t)c->r[27],0); // 8027C950
  if (crb(c,6)) { goto L_8027C994; } // 8027C954
  c->r[0]=R8(c->r[27]+0x00000059u); // 8027C958
  cmps(c,0,(int32_t)c->r[0],0); // 8027C95C
  if (!crb(c,2)) { goto L_8027C994; } // 8027C960
  if (crb(c,6)) { goto L_8027C98C; } // 8027C964
  c->r[12]=R32(c->r[27]+0x00000000u); // 8027C968
  c->r[3]=c->r[27]|c->r[27]; // 8027C96C
  c->r[4]=0u+0xFFFFFFFFu; // 8027C970
  c->r[12]=R32(c->r[12]+0x00000008u); // 8027C974
  c->ctr=c->r[12]; // 8027C978
  if (true) { c->lr=0x8027C980u; dispatch(c,c->ctr); } // 8027C97C
  c->r[3]=R32(c->r[13]+0xFFFFA420u); // 8027C980
  c->r[4]=c->r[27]|c->r[27]; // 8027C984
  c->lr=0x8027C98Cu; f_801A0F08(c); // 8027C988
L_8027C98C:;
  c->r[0]=0u+0x00000000u; // 8027C98C
  W32(c->r[25]+0x00000028u,c->r[0]); // 8027C990
L_8027C994:;
  c->r[3]=c->r[25]+0x000000F8u; // 8027C994
  c->lr=0x8027C99Cu; f_80283AB4(c); // 8027C998
  c->r[3]=addc(c,c->r[25],0x000000E8u,0); cr0(c,c->r[3]); // 8027C99C
  if (crb(c,2)) { goto L_8027C9B8; } // 8027C9A0
  c->r[4]=0u+0x80070000u; // 8027C9A4
  c->r[5]=0u+0x00000004u; // 8027C9A8
  c->r[4]=c->r[4]+0xFFFF8B68u; // 8027C9AC
  c->r[6]=0u+0x00000004u; // 8027C9B0
  c->lr=0x8027C9B8u; f_80185C64(c); // 8027C9B4
L_8027C9B8:;
  c->r[3]=c->r[25]|c->r[25]; // 8027C9B8
  c->r[4]=0u+0x00000000u; // 8027C9BC
  c->lr=0x8027C9C4u; f_802782C0(c); // 8027C9C0
  cmps(c,0,(int32_t)c->r[26],0); // 8027C9C4
  if (!crb(c,1)) { goto L_8027C9D4; } // 8027C9C8
  c->r[3]=c->r[25]|c->r[25]; // 8027C9CC
  c->lr=0x8027C9D4u; f_800D6AD0(c); // 8027C9D0
L_8027C9D4:;
  c->r[11]=c->r[1]+0x00000030u; // 8027C9D4
  c->r[3]=c->r[25]|c->r[25]; // 8027C9D8
  c->lr=0x8027C9E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027C9DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027C9E0
  c->lr=c->r[0]; // 8027C9E4
  c->r[1]=c->r[1]+0x00000030u; // 8027C9E8
  return; // 8027C9EC
}

// FindMaterialByName__Q34nw4r3lyt6WindowFPCcb
void f_8027C9F0(Ctx* __restrict c) {
  trace_call(0x8027C9F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027C9F0
  c->r[0]=c->lr; // 8027C9F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027C9F8
  c->r[11]=c->r[1]+0x00000020u; // 8027C9FC
  c->lr=0x8027CA04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027CA00
  c->r[6]=R32(c->r[3]+0x00000028u); // 8027CA04
  c->r[27]=c->r[3]|c->r[3]; // 8027CA08
  c->r[28]=c->r[4]|c->r[4]; // 8027CA0C
  c->r[29]=c->r[5]|c->r[5]; // 8027CA10
  cmps(c,0,(int32_t)c->r[6],0); // 8027CA14
  if (crb(c,2)) { goto L_8027CA34; } // 8027CA18
  c->r[3]=c->r[6]+0x00000044u; // 8027CA1C
  c->lr=0x8027CA24u; f_80283A4C(c); // 8027CA20
  cmps(c,0,(int32_t)c->r[3],0); // 8027CA24
  if (crb(c,2)) { goto L_8027CA34; } // 8027CA28
  c->r[3]=R32(c->r[27]+0x00000028u); // 8027CA2C
  goto L_8027CAD4; // 8027CA30
L_8027CA34:;
  c->r[31]=0u+0x00000000u; // 8027CA34
  c->r[30]=0u+0x00000000u; // 8027CA38
  goto L_8027CA7C; // 8027CA3C
L_8027CA40:;
  c->r[0]=R32(c->r[27]+0x00000100u); // 8027CA40
  c->r[4]=c->r[28]|c->r[28]; // 8027CA44
  c->r[3]=c->r[0]+c->r[30]; // 8027CA48
  c->r[3]=R32(c->r[3]+0x00000004u); // 8027CA4C
  c->r[3]=c->r[3]+0x00000044u; // 8027CA50
  c->lr=0x8027CA58u; f_80283A4C(c); // 8027CA54
  cmps(c,0,(int32_t)c->r[3],0); // 8027CA58
  if (crb(c,2)) { goto L_8027CA74; } // 8027CA5C
  c->r[3]=R32(c->r[27]+0x00000100u); // 8027CA60
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 8027CA64
  c->r[3]=c->r[3]+c->r[0]; // 8027CA68
  c->r[3]=R32(c->r[3]+0x00000004u); // 8027CA6C
  goto L_8027CAD4; // 8027CA70
L_8027CA74:;
  c->r[30]=c->r[30]+0x00000008u; // 8027CA74
  c->r[31]=c->r[31]+0x00000001u; // 8027CA78
L_8027CA7C:;
  c->r[0]=R8(c->r[27]+0x00000104u); // 8027CA7C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8027CA80
  if (crb(c,0)) { IRQCHK(c); goto L_8027CA40; } // 8027CA84
  cmps(c,0,(int32_t)c->r[29],0); // 8027CA88
  if (crb(c,2)) { goto L_8027CAD0; } // 8027CA8C
  c->r[31]=R32(c->r[27]+0x00000014u); // 8027CA90
  c->r[30]=c->r[27]+0x00000014u; // 8027CA94
  goto L_8027CAC8; // 8027CA98
L_8027CA9C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 8027CA9C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 8027CAA0
  c->r[4]=c->r[28]|c->r[28]; // 8027CAA4
  c->r[5]=c->r[29]|c->r[29]; // 8027CAA8
  c->r[12]=R32(c->r[12]+0x00000040u); // 8027CAAC
  c->ctr=c->r[12]; // 8027CAB0
  if (true) { c->lr=0x8027CAB8u; dispatch(c,c->ctr); } // 8027CAB4
  cmps(c,0,(int32_t)c->r[3],0); // 8027CAB8
  if (crb(c,2)) { goto L_8027CAC4; } // 8027CABC
  goto L_8027CAD4; // 8027CAC0
L_8027CAC4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8027CAC4
L_8027CAC8:;
  cmpu(c,0,c->r[31],c->r[30]); // 8027CAC8
  if (!crb(c,2)) { IRQCHK(c); goto L_8027CA9C; } // 8027CACC
L_8027CAD0:;
  c->r[3]=0u+0x00000000u; // 8027CAD0
L_8027CAD4:;
  c->r[11]=c->r[1]+0x00000020u; // 8027CAD4
  c->lr=0x8027CADCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027CAD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027CADC
  c->lr=c->r[0]; // 8027CAE0
  c->r[1]=c->r[1]+0x00000020u; // 8027CAE4
  return; // 8027CAE8
}

// fn_8027CAEC
void f_8027CAEC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027CAEC
  c->r[7]=c->r[4]+c->r[0]; // 8027CAF0
  c->r[6]=R8(c->r[7]+0x000000E8u); // 8027CAF4
  c->r[5]=R8(c->r[7]+0x000000E9u); // 8027CAF8
  c->r[4]=R8(c->r[7]+0x000000EAu); // 8027CAFC
  c->r[0]=R8(c->r[7]+0x000000EBu); // 8027CB00
  W8(c->r[3]+0x00000000u,c->r[6]); // 8027CB04
  W8(c->r[3]+0x00000001u,c->r[5]); // 8027CB08
  W8(c->r[3]+0x00000002u,c->r[4]); // 8027CB0C
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027CB10
  return; // 8027CB14
}

// fn_8027CB18
void f_8027CB18(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027CB18
  c->r[6]=R8(c->r[5]+0x00000000u); // 8027CB1C
  c->r[4]=c->r[3]+c->r[0]; // 8027CB20
  c->r[0]=R8(c->r[5]+0x00000001u); // 8027CB24
  W8(c->r[4]+0x000000E8u,c->r[6]); // 8027CB28
  c->r[3]=R8(c->r[5]+0x00000002u); // 8027CB2C
  W8(c->r[4]+0x000000E9u,c->r[0]); // 8027CB30
  c->r[0]=R8(c->r[5]+0x00000003u); // 8027CB34
  W8(c->r[4]+0x000000EAu,c->r[3]); // 8027CB38
  W8(c->r[4]+0x000000EBu,c->r[0]); // 8027CB3C
  return; // 8027CB40
}

// fn_8027CB44
void f_8027CB44(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8027CB44
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8027CB48
  c->r[3]=c->r[3]+c->r[5]; // 8027CB4C
  c->r[3]=c->r[3]+c->r[0]; // 8027CB50
  c->r[3]=R8(c->r[3]+0x000000E8u); // 8027CB54
  return; // 8027CB58
}

// fn_8027CB5C
void f_8027CB5C(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8027CB5C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 8027CB60
  c->r[3]=c->r[3]+c->r[6]; // 8027CB64
  c->r[3]=c->r[3]+c->r[0]; // 8027CB68
  W8(c->r[3]+0x000000E8u,c->r[5]); // 8027CB6C
  return; // 8027CB70
}

// fn_8027CB74
void f_8027CB74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027CB74
  c->r[0]=c->lr; // 8027CB78
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027CB7C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8027CB80
  c->r[31]=c->r[3]|c->r[3]; // 8027CB84
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027CB88
  c->r[12]=R32(c->r[12]+0x00000070u); // 8027CB8C
  c->ctr=c->r[12]; // 8027CB90
  if (true) { c->lr=0x8027CB98u; dispatch(c,c->ctr); } // 8027CB94
  c->r[5]=R8(c->r[31]+0x00000104u); // 8027CB98
  c->r[4]=c->r[31]|c->r[31]; // 8027CB9C
  c->r[6]=R32(c->r[31]+0x00000100u); // 8027CBA0
  c->r[3]=c->r[1]+0x00000018u; // 8027CBA4
  c->lr=0x8027CBACu; f_8027EA54(c); // 8027CBA8
  c->r[6]=R32(c->r[1]+0x00000018u); // 8027CBAC
  c->r[3]=c->r[31]|c->r[31]; // 8027CBB0
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8027CBB4
  c->r[4]=R32(c->r[1]+0x00000020u); // 8027CBB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027CBBC
  W32(c->r[1]+0x00000028u,c->r[6]); // 8027CBC0
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8027CBC4
  W32(c->r[1]+0x00000030u,c->r[4]); // 8027CBC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027CBCC
  c->lr=0x8027CBD4u; f_80278F58(c); // 8027CBD0
  W32(c->r[1]+0x00000010u,c->r[3]); // 8027CBD4
  c->r[5]=c->r[1]+0x00000028u; // 8027CBD8
  W32(c->r[1]+0x00000014u,c->r[4]); // 8027CBDC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027CBE0
  W32(c->r[1]+0x00000008u,c->r[3]); // 8027CBE4
  c->r[3]=c->r[31]|c->r[31]; // 8027CBE8
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 8027CBEC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8027CBF0
  c->r[4]=c->r[1]+0x00000010u; // 8027CBF4
  c->r[6]=R8(c->r[31]+0x000000B9u); // 8027CBF8
  c->ctr=c->r[12]; // 8027CBFC
  if (true) { c->lr=0x8027CC04u; dispatch(c,c->ctr); } // 8027CC00
  c->r[0]=R8(c->r[31]+0x00000104u); // 8027CC04
  cmps(c,0,(int32_t)c->r[0],4); // 8027CC08
  if (crb(c,2)) { goto L_8027CC54; } // 8027CC0C
  if (!crb(c,0)) { goto L_8027CC20; } // 8027CC10
  cmps(c,0,(int32_t)c->r[0],1); // 8027CC14
  if (crb(c,2)) { goto L_8027CC2C; } // 8027CC18
  goto L_8027CCA0; // 8027CC1C
L_8027CC20:;
  cmps(c,0,(int32_t)c->r[0],8); // 8027CC20
  if (crb(c,2)) { goto L_8027CC7C; } // 8027CC24
  goto L_8027CCA0; // 8027CC28
L_8027CC2C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027CC2C
  c->r[3]=c->r[31]|c->r[31]; // 8027CC30
  c->r[4]=c->r[1]+0x00000010u; // 8027CC34
  c->r[6]=c->r[1]+0x00000028u; // 8027CC38
  c->r[12]=R32(c->r[12]+0x00000080u); // 8027CC3C
  c->r[5]=R32(c->r[31]+0x00000100u); // 8027CC40
  c->r[7]=R8(c->r[31]+0x000000B9u); // 8027CC44
  c->ctr=c->r[12]; // 8027CC48
  if (true) { c->lr=0x8027CC50u; dispatch(c,c->ctr); } // 8027CC4C
  goto L_8027CCA0; // 8027CC50
L_8027CC54:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027CC54
  c->r[3]=c->r[31]|c->r[31]; // 8027CC58
  c->r[4]=c->r[1]+0x00000010u; // 8027CC5C
  c->r[6]=c->r[1]+0x00000028u; // 8027CC60
  c->r[12]=R32(c->r[12]+0x00000084u); // 8027CC64
  c->r[5]=R32(c->r[31]+0x00000100u); // 8027CC68
  c->r[7]=R8(c->r[31]+0x000000B9u); // 8027CC6C
  c->ctr=c->r[12]; // 8027CC70
  if (true) { c->lr=0x8027CC78u; dispatch(c,c->ctr); } // 8027CC74
  goto L_8027CCA0; // 8027CC78
L_8027CC7C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8027CC7C
  c->r[3]=c->r[31]|c->r[31]; // 8027CC80
  c->r[4]=c->r[1]+0x00000010u; // 8027CC84
  c->r[6]=c->r[1]+0x00000028u; // 8027CC88
  c->r[12]=R32(c->r[12]+0x00000088u); // 8027CC8C
  c->r[5]=R32(c->r[31]+0x00000100u); // 8027CC90
  c->r[7]=R8(c->r[31]+0x000000B9u); // 8027CC94
  c->ctr=c->r[12]; // 8027CC98
  if (true) { c->lr=0x8027CCA0u; dispatch(c,c->ctr); } // 8027CC9C
L_8027CCA0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8027CCA0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8027CCA4
  c->lr=c->r[0]; // 8027CCA8
  c->r[1]=c->r[1]+0x00000040u; // 8027CCAC
  return; // 8027CCB0
}

// fn_8027CCB4
void f_8027CCB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027CCB4
  c->r[0]=c->lr; // 8027CCB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027CCBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027CCC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027CCC4
  c->r[30]=c->r[4]|c->r[4]; // 8027CCC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027CCCC
  c->r[29]=c->r[3]|c->r[3]; // 8027CCD0
  c->lr=0x8027CCD8u; f_80278AE4(c); // 8027CCD4
  c->r[0]=R8(c->r[29]+0x000000BBu); // 8027CCD8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8027CCDC
  if (!crb(c,2)) { goto L_8027CCEC; } // 8027CCE0
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 8027CCE4
  if (!crb(c,2)) { goto L_8027CD28; } // 8027CCE8
L_8027CCEC:;
  c->r[30]=0u+0x00000000u; // 8027CCEC
  c->r[31]=0u+0x00000000u; // 8027CCF0
  goto L_8027CD1C; // 8027CCF4
L_8027CCF8:;
  c->r[0]=R32(c->r[29]+0x00000100u); // 8027CCF8
  c->r[3]=c->r[0]+c->r[31]; // 8027CCFC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8027CD00
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027CD04
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8027CD08
  c->ctr=c->r[12]; // 8027CD0C
  if (true) { c->lr=0x8027CD14u; dispatch(c,c->ctr); } // 8027CD10
  c->r[31]=c->r[31]+0x00000008u; // 8027CD14
  c->r[30]=c->r[30]+0x00000001u; // 8027CD18
L_8027CD1C:;
  c->r[0]=R8(c->r[29]+0x00000104u); // 8027CD1C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8027CD20
  if (crb(c,0)) { IRQCHK(c); goto L_8027CCF8; } // 8027CD24
L_8027CD28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027CD28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027CD2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027CD30
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027CD34
  c->lr=c->r[0]; // 8027CD38
  c->r[1]=c->r[1]+0x00000020u; // 8027CD3C
  return; // 8027CD40
}

// fn_8027CD44
void f_8027CD44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027CD44
  c->r[0]=c->lr; // 8027CD48
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027CD4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027CD50
  c->r[31]=0u+0x00000000u; // 8027CD54
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027CD58
  c->r[30]=0u+0x00000000u; // 8027CD5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8027CD60
  c->r[29]=c->r[4]|c->r[4]; // 8027CD64
  W32(c->r[1]+0x00000010u,c->r[28]); // 8027CD68
  c->r[28]=c->r[3]|c->r[3]; // 8027CD6C
  goto L_8027CD9C; // 8027CD70
L_8027CD74:;
  c->r[0]=R32(c->r[28]+0x00000100u); // 8027CD74
  c->r[4]=c->r[29]|c->r[29]; // 8027CD78
  c->r[3]=c->r[0]+c->r[31]; // 8027CD7C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8027CD80
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027CD84
  c->r[12]=R32(c->r[12]+0x00000014u); // 8027CD88
  c->ctr=c->r[12]; // 8027CD8C
  if (true) { c->lr=0x8027CD94u; dispatch(c,c->ctr); } // 8027CD90
  c->r[31]=c->r[31]+0x00000008u; // 8027CD94
  c->r[30]=c->r[30]+0x00000001u; // 8027CD98
L_8027CD9C:;
  c->r[0]=R8(c->r[28]+0x00000104u); // 8027CD9C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8027CDA0
  if (crb(c,0)) { IRQCHK(c); goto L_8027CD74; } // 8027CDA4
  c->r[3]=c->r[28]|c->r[28]; // 8027CDA8
  c->r[4]=c->r[29]|c->r[29]; // 8027CDAC
  c->lr=0x8027CDB4u; f_80278C5C(c); // 8027CDB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027CDB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027CDB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027CDBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8027CDC0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8027CDC4
  c->lr=c->r[0]; // 8027CDC8
  c->r[1]=c->r[1]+0x00000020u; // 8027CDCC
  return; // 8027CDD0
}

// DrawContent__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt15WindowFrameSizeUc
void f_8027CDD4(Ctx* __restrict c) {
  trace_call(0x8027CDD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027CDD4
  c->r[0]=c->lr; // 8027CDD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027CDDC
  c->r[11]=c->r[1]+0x00000030u; // 8027CDE0
  c->lr=0x8027CDE8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027CDE4
  c->r[30]=c->r[6]|c->r[6]; // 8027CDE8
  c->r[27]=c->r[3]|c->r[3]; // 8027CDEC
  c->r[28]=c->r[4]|c->r[4]; // 8027CDF0
  c->r[29]=c->r[5]|c->r[5]; // 8027CDF4
  c->r[4]=c->r[30]|c->r[30]; // 8027CDF8
  c->r[3]=c->r[3]+0x000000E8u; // 8027CDFC
  c->lr=0x8027CE04u; f_80283D18(c); // 8027CE00
  c->r[4]=c->r[3]|c->r[3]; // 8027CE04
  c->r[3]=R32(c->r[27]+0x00000028u); // 8027CE08
  c->r[5]=c->r[30]|c->r[30]; // 8027CE0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027CE10
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027CE14
  c->ctr=c->r[12]; // 8027CE18
  if (true) { c->lr=0x8027CE20u; dispatch(c,c->ctr); } // 8027CE1C
  c->r[4]=R8(c->r[27]+0x000000F9u); // 8027CE20
  c->r[31]=c->r[3]|c->r[3]; // 8027CE24
  c->lr=0x8027CE2Cu; f_80283DD4(c); // 8027CE28
  cmps(c,0,(int32_t)c->r[31],0); // 8027CE2C
  if (crb(c,2)) { goto L_8027CE3C; } // 8027CE30
  c->r[7]=c->r[27]+0x000000E8u; // 8027CE34
  goto L_8027CE40; // 8027CE38
L_8027CE3C:;
  c->r[7]=0u+0x00000000u; // 8027CE3C
L_8027CE40:;
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027CE40
  c->r[8]=c->r[30]|c->r[30]; // 8027CE44
  {uint32_t ea=c->r[29]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8027CE48
  c->r[3]=c->r[1]+0x00000010u; // 8027CE4C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027CE50
  c->r[4]=c->r[1]+0x00000008u; // 8027CE54
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 8027CE58
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 8027CE5C
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027CE60
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 8027CE64
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027CE68
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[3]); // 8027CE6C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8027CE70
  c->r[6]=R32(c->r[27]+0x000000FCu); // 8027CE74
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 8027CE78
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027CE7C
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 8027CE80
  {uint32_t ea=c->r[27]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027CE84
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8027CE88
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027CE8C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 8027CE90
  c->r[5]=R8(c->r[27]+0x000000F9u); // 8027CE94
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 8027CE98
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027CE9C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8027CEA0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027CEA4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 8027CEA8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8027CEAC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 8027CEB0
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027CEB4
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027CEB8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 8027CEBC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027CEC0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8027CEC4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8027CEC8
  c->lr=0x8027CED0u; f_80284418(c); // 8027CECC
  c->r[11]=c->r[1]+0x00000030u; // 8027CED0
  c->lr=0x8027CED8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027CED4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027CED8
  c->lr=c->r[0]; // 8027CEDC
  c->r[1]=c->r[1]+0x00000030u; // 8027CEE0
  return; // 8027CEE4
}

// DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_8027CEE8(Ctx* __restrict c) {
  trace_call(0x8027CEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027CEE8
  c->r[0]=c->lr; // 8027CEEC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8027CEF0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 8027CEF4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 8027CEF8
  c->r[11]=c->r[1]+0x000000D0u; // 8027CEFC
  c->lr=0x8027CF04u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027CF00
  c->r[8]=R32(c->r[5]+0x00000004u); // 8027CF04
  c->r[9]=0u+0x43300000u; // 8027CF08
  W32(c->r[1]+0x00000088u,c->r[9]); // 8027CF0C
  c->r[27]=c->r[3]|c->r[3]; // 8027CF10
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 8027CF14
  c->r[28]=c->r[4]|c->r[4]; // 8027CF18
  W32(c->r[1]+0x00000090u,c->r[9]); // 8027CF1C
  c->r[20]=c->r[5]|c->r[5]; // 8027CF20
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027CF24
  c->r[29]=c->r[6]|c->r[6]; // 8027CF28
  c->r[30]=c->r[7]|c->r[7]; // 8027CF2C
  if (crb(c,2)) { goto L_8027D4A8; } // 8027CF30
  c->r[4]=c->r[30]|c->r[30]; // 8027CF34
  c->r[3]=0u+0x00000000u; // 8027CF38
  c->lr=0x8027CF40u; f_80283D18(c); // 8027CF3C
  c->r[4]=c->r[3]|c->r[3]; // 8027CF40
  c->r[3]=R32(c->r[20]+0x00000004u); // 8027CF44
  c->r[5]=c->r[30]|c->r[30]; // 8027CF48
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027CF4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027CF50
  c->ctr=c->r[12]; // 8027CF54
  if (true) { c->lr=0x8027CF5Cu; dispatch(c,c->ctr); } // 8027CF58
  c->r[31]=c->r[3]|c->r[3]; // 8027CF5C
  c->r[4]=0u+0x00000001u; // 8027CF60
  c->lr=0x8027CF68u; f_80283DD4(c); // 8027CF64
  c->r[4]=R32(c->r[20]+0x00000004u); // 8027CF68
  c->r[3]=c->r[1]+0x00000050u; // 8027CF6C
  c->r[5]=0u+0x00000000u; // 8027CF70
  c->lr=0x8027CF78u; f_80281A90(c); // 8027CF74
  c->r[21]=0u+0x80340000u; // 8027CF78
  c->r[0]=0u+0xFFFFFFFFu; // 8027CF7C
  c->r[21]=c->r[21]+0x00005230u; // 8027CF80
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[12]=c->ps1[12]=RF32(ea);} // 8027CF84
  c->r[6]=R8(c->r[21]+0x00000009u); // 8027CF88
  c->r[3]=0u-c->r[31]; // 8027CF8C
  c->r[7]=R8(c->r[21]+0x00000008u); // 8027CF90
  c->r[9]=c->r[1]+0x00000038u; // 8027CF94
  c->r[12]=R8(c->r[21]+c->r[6]); // 8027CF98
  c->r[4]=c->r[21]+c->r[6]; // 8027CF9C
  c->r[5]=c->r[21]+c->r[7]; // 8027CFA0
  c->r[11]=R8(c->r[21]+c->r[7]); // 8027CFA4
  W32(c->r[1]+0x00000094u,c->r[12]); // 8027CFA8
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8027CFAC
  c->r[5]=R8(c->r[5]+0x00000002u); // 8027CFB0
  c->r[20]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8027CFB4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 8027CFB8
  c->r[23]=c->r[1]+0x00000068u; // 8027CFBC
  c->r[5]=c->r[5]-c->r[11]; // 8027CFC0
  c->r[4]=R8(c->r[4]+0x00000004u); // 8027CFC4
  c->r[5]=c->r[5]^0x80000000u; // 8027CFC8
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[3]=RF64(ea);} // 8027CFCC
  W32(c->r[1]+0x00000094u,c->r[5]); // 8027CFD0
  c->r[4]=c->r[4]-c->r[12]; // 8027CFD4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 8027CFD8
  c->r[3]=c->r[3]|c->r[31]; // 8027CFDC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027CFE0
  c->r[4]=c->r[4]^0x80000000u; // 8027CFE4
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=RF64(ea);} // 8027CFE8
  c->r[5]=sraw(c,c->r[3],31); // 8027CFEC
  W32(c->r[1]+0x00000094u,c->r[4]); // 8027CFF0
  c->r[26]=c->r[1]+0x00000058u; // 8027CFF4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 8027CFF8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 8027CFFC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027D000
  c->r[7]=c->r[26]&c->r[5]; // 8027D004
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 8027D008
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[3]); // 8027D00C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8027D010
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 8027D014
  {uint32_t ea=c->r[1]+0x00000054u; c->f[13]=c->ps1[13]=RF32(ea);} // 8027D018
  c->r[22]=c->r[1]+0x00000078u; // 8027D01C
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 8027D020
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[3]); // 8027D024
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 8027D028
  c->r[24]=c->r[1]+0x00000070u; // 8027D02C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 8027D030
  c->r[25]=c->r[1]+0x00000080u; // 8027D034
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 8027D038
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 8027D03C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 8027D040
  c->r[6]=c->r[23]|c->r[23]; // 8027D044
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 8027D048
  c->r[8]=c->r[30]|c->r[30]; // 8027D04C
  W32(c->r[1]+0x00000058u,c->r[0]); // 8027D050
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8027D054
  {uint32_t ea=c->r[29]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8027D058
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8027D05C
  c->r[3]=c->r[1]+0x00000048u; // 8027D060
  c->r[4]=c->r[1]+0x00000040u; // 8027D064
  c->r[5]=0u+0x00000001u; // 8027D068
  W32(c->r[1]+0x00000060u,c->r[0]); // 8027D06C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8027D070
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[12]);} // 8027D074
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[12]);} // 8027D078
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 8027D07C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 8027D080
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D084
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 8027D088
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[9]); // 8027D08C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[13]);} // 8027D090
  {uint32_t ea=c->r[9]+c->r[10]; c->f[3]=c->ps1[3]=RF32(ea);} // 8027D094
  {uint32_t ea=c->r[9]+c->r[20]; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D098
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[7]);} // 8027D09C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8027D0A0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8027D0A4
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[7]);} // 8027D0A8
  c->f[1]=c->ps1[1]=S(c->f[9]/c->f[3]); // 8027D0AC
  {uint32_t ea=c->r[24]+c->r[20]; WF32(ea,c->f[6]);} // 8027D0B0
  {uint32_t ea=c->r[23]+c->r[20]; WF32(ea,c->f[6]);} // 8027D0B4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 8027D0B8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 8027D0BC
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 8027D0C0
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 8027D0C4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8027D0C8
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[1]);} // 8027D0CC
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[1]);} // 8027D0D0
  {uint32_t ea=c->r[22]+c->r[20]; WF32(ea,c->f[0]);} // 8027D0D4
  {uint32_t ea=c->r[25]+c->r[20]; WF32(ea,c->f[0]);} // 8027D0D8
  c->lr=0x8027D0E0u; f_80284418(c); // 8027D0DC
  c->r[6]=R8(c->r[21]+0x00000013u); // 8027D0E0
  c->r[8]=c->r[21]+0x0000000Au; // 8027D0E4
  c->r[7]=R8(c->r[21]+0x00000012u); // 8027D0E8
  c->r[0]=0u-c->r[31]; // 8027D0EC
  c->r[4]=c->r[8]+c->r[6]; // 8027D0F0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 8027D0F4
  c->r[3]=c->r[0]|c->r[31]; // 8027D0F8
  c->r[0]=R8(c->r[4]+0x00000002u); // 8027D0FC
  c->r[5]=c->r[8]+c->r[7]; // 8027D100
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 8027D104
  c->r[9]=R8(c->r[5]+0x00000002u); // 8027D108
  c->r[5]=sraw(c,c->r[3],31); // 8027D10C
  c->r[3]=R8(c->r[8]+c->r[7]); // 8027D110
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8027D114
  W32(c->r[1]+0x00000094u,c->r[0]); // 8027D118
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8027D11C
  c->r[3]=c->r[3]-c->r[9]; // 8027D120
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027D124
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D128
  c->r[3]=c->r[3]^0x80000000u; // 8027D12C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=RF64(ea);} // 8027D130
  c->r[7]=c->r[26]&c->r[5]; // 8027D134
  {uint32_t ea=c->r[29]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8027D138
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8027D13C
  W32(c->r[1]+0x00000094u,c->r[3]); // 8027D140
  c->r[20]=c->r[1]+0x00000028u; // 8027D144
  c->r[3]=R8(c->r[4]+0x00000006u); // 8027D148
  c->r[6]=c->r[23]|c->r[23]; // 8027D14C
  c->f[10]=c->ps1[10]=S(c->f[0]-c->f[8]); // 8027D150
  {uint32_t ea=c->r[28]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 8027D154
  c->r[3]=c->r[3]-c->r[0]; // 8027D158
  c->r[12]=c->r[3]^0x80000000u; // 8027D15C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027D160
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[3]=RF64(ea);} // 8027D164
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 8027D168
  c->r[8]=c->r[30]|c->r[30]; // 8027D16C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[6]=RF64(ea);} // 8027D170
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8027D174
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 8027D178
  c->r[3]=c->r[1]+0x00000048u; // 8027D17C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[6]); // 8027D180
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8027D184
  W32(c->r[1]+0x00000094u,c->r[12]); // 8027D188
  {uint32_t ea=c->r[20]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D18C
  c->r[4]=c->r[1]+0x00000040u; // 8027D190
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027D194
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8027D198
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 8027D19C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8027D1A0
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D1A4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[5]=RF64(ea);} // 8027D1A8
  c->r[5]=0u+0x00000001u; // 8027D1AC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 8027D1B0
  c->f[2]=c->ps1[2]=S(c->f[8]/c->f[2]); // 8027D1B4
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 8027D1B8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 8027D1BC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 8027D1C0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 8027D1C4
  {uint32_t ea=c->r[27]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 8027D1C8
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 8027D1CC
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8027D1D0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8027D1D4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 8027D1D8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 8027D1DC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 8027D1E0
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 8027D1E4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 8027D1E8
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 8027D1EC
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 8027D1F0
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[4]);} // 8027D1F4
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[4]);} // 8027D1F8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8027D1FC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 8027D200
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8027D204
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 8027D208
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 8027D20C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027D210
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 8027D214
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[0]);} // 8027D218
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[0]);} // 8027D21C
  c->lr=0x8027D224u; f_80284418(c); // 8027D220
  c->r[6]=R8(c->r[21]+0x00000031u); // 8027D224
  c->r[4]=c->r[21]+0x00000028u; // 8027D228
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D22C
  c->r[0]=0u-c->r[31]; // 8027D230
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D234
  c->r[7]=c->r[4]+c->r[6]; // 8027D238
  c->r[8]=R8(c->r[21]+0x00000030u); // 8027D23C
  c->r[3]=c->r[0]|c->r[31]; // 8027D240
  c->r[0]=R8(c->r[7]+0x00000006u); // 8027D244
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027D248
  c->r[4]=c->r[4]+c->r[8]; // 8027D24C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8027D250
  c->r[5]=sraw(c,c->r[3],31); // 8027D254
  W32(c->r[1]+0x00000094u,c->r[0]); // 8027D258
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[0]); // 8027D25C
  c->r[9]=R8(c->r[4]+0x00000006u); // 8027D260
  c->r[10]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8027D264
  c->r[3]=R8(c->r[4]+0x00000004u); // 8027D268
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8027D26C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D270
  c->r[4]=c->r[3]-c->r[9]; // 8027D274
  c->r[3]=R8(c->r[7]+0x00000002u); // 8027D278
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8027D27C
  c->r[4]=c->r[4]^0x80000000u; // 8027D280
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 8027D284
  c->r[3]=c->r[3]-c->r[0]; // 8027D288
  c->f[10]=c->ps1[10]=S(c->f[0]+c->f[5]); // 8027D28C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[11]=c->ps1[11]=RF32(ea);} // 8027D290
  W32(c->r[1]+0x00000094u,c->r[4]); // 8027D294
  c->r[12]=c->r[3]^0x80000000u; // 8027D298
  {uint32_t ea=c->r[1]+0x00000050u; c->f[12]=c->ps1[12]=RF32(ea);} // 8027D29C
  c->r[20]=c->r[1]+0x00000018u; // 8027D2A0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027D2A4
  c->r[7]=c->r[26]&c->r[5]; // 8027D2A8
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=RF64(ea);} // 8027D2AC
  c->r[6]=c->r[23]|c->r[23]; // 8027D2B0
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[6]=RF64(ea);} // 8027D2B4
  c->r[8]=c->r[30]|c->r[30]; // 8027D2B8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 8027D2BC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8027D2C0
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 8027D2C4
  c->r[3]=c->r[1]+0x00000048u; // 8027D2C8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 8027D2CC
  c->r[4]=c->r[1]+0x00000040u; // 8027D2D0
  c->r[5]=0u+0x00000001u; // 8027D2D4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D2D8
  W32(c->r[1]+0x00000094u,c->r[12]); // 8027D2DC
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 8027D2E0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027D2E4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 8027D2E8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8027D2EC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 8027D2F0
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 8027D2F4
  {uint32_t ea=c->r[20]+c->r[10]; c->f[2]=c->ps1[2]=RF32(ea);} // 8027D2F8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 8027D2FC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8027D300
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 8027D304
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 8027D308
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D30C
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 8027D310
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8027D314
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 8027D318
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 8027D31C
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 8027D320
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 8027D324
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8027D328
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[4]);} // 8027D32C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 8027D330
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 8027D334
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[4]);} // 8027D338
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 8027D33C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 8027D340
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 8027D344
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 8027D348
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8027D34C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8027D350
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 8027D354
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027D358
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 8027D35C
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[0]);} // 8027D360
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[0]);} // 8027D364
  c->lr=0x8027D36Cu; f_80284418(c); // 8027D368
  c->r[6]=R8(c->r[21]+0x0000001Du); // 8027D36C
  c->r[7]=c->r[21]+0x00000014u; // 8027D370
  {uint32_t ea=c->r[28]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 8027D374
  c->r[0]=0u-c->r[31]; // 8027D378
  c->r[3]=c->r[7]+c->r[6]; // 8027D37C
  c->r[4]=R8(c->r[21]+0x0000001Cu); // 8027D380
  c->r[11]=R8(c->r[3]+0x00000004u); // 8027D384
  c->r[0]=c->r[0]|c->r[31]; // 8027D388
  c->r[3]=c->r[7]+c->r[4]; // 8027D38C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 8027D390
  c->r[12]=R8(c->r[3]+0x00000004u); // 8027D394
  c->r[5]=sraw(c,c->r[0],31); // 8027D398
  W32(c->r[1]+0x00000094u,c->r[11]); // 8027D39C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027D3A0
  c->r[3]=R8(c->r[3]+0x00000006u); // 8027D3A4
  c->r[10]=c->r[1]+0x00000008u; // 8027D3A8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 8027D3AC
  c->r[9]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8027D3B0
  c->r[4]=c->r[3]-c->r[12]; // 8027D3B4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D3B8
  c->r[3]=R8(c->r[7]+c->r[6]); // 8027D3BC
  c->r[4]=c->r[4]^0x80000000u; // 8027D3C0
  W32(c->r[1]+0x00000094u,c->r[4]); // 8027D3C4
  c->r[7]=c->r[26]&c->r[5]; // 8027D3C8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 8027D3CC
  c->r[3]=c->r[3]-c->r[11]; // 8027D3D0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 8027D3D4
  c->r[3]=c->r[3]^0x80000000u; // 8027D3D8
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 8027D3DC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027D3E0
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=RF64(ea);} // 8027D3E4
  c->r[6]=c->r[23]|c->r[23]; // 8027D3E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 8027D3EC
  c->r[8]=c->r[30]|c->r[30]; // 8027D3F0
  W32(c->r[1]+0x00000094u,c->r[3]); // 8027D3F4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8027D3F8
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8027D3FC
  c->r[3]=c->r[1]+0x00000048u; // 8027D400
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8027D404
  c->r[4]=c->r[1]+0x00000040u; // 8027D408
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[6]=RF64(ea);} // 8027D40C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8027D410
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8027D414
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 8027D418
  c->r[5]=0u+0x00000001u; // 8027D41C
  {uint32_t ea=c->r[10]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 8027D420
  {uint32_t ea=c->r[10]+c->r[9]; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D424
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8027D428
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 8027D42C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8027D430
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 8027D434
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 8027D438
  c->f[2]=c->ps1[2]=S(c->f[5]/c->f[2]); // 8027D43C
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 8027D440
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 8027D444
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 8027D448
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 8027D44C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 8027D450
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 8027D454
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 8027D458
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 8027D45C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 8027D460
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 8027D464
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 8027D468
  {uint32_t ea=c->r[23]+c->r[0]; WF32(ea,c->f[5]);} // 8027D46C
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[5]);} // 8027D470
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[4]);} // 8027D474
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[4]);} // 8027D478
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 8027D47C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8027D480
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 8027D484
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8027D488
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 8027D48C
  {uint32_t ea=c->r[25]+c->r[0]; WF32(ea,c->f[2]);} // 8027D490
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027D494
  {uint32_t ea=c->r[24]+c->r[0]; WF32(ea,c->f[2]);} // 8027D498
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[0]);} // 8027D49C
  {uint32_t ea=c->r[24]+c->r[9]; WF32(ea,c->f[0]);} // 8027D4A0
  c->lr=0x8027D4A8u; f_80284418(c); // 8027D4A4
L_8027D4A8:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 8027D4A8
  c->r[11]=c->r[1]+0x000000D0u; // 8027D4AC
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 8027D4B0
  c->lr=0x8027D4B8u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027D4B4
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8027D4B8
  c->lr=c->r[0]; // 8027D4BC
  c->r[1]=c->r[1]+0x000000E0u; // 8027D4C0
  return; // 8027D4C4
}

// DrawFrame4__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_8027D4C8(Ctx* __restrict c) {
  trace_call(0x8027D4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027D4C8
  c->r[0]=c->lr; // 8027D4CC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8027D4D0
  c->r[11]=c->r[1]+0x000000E0u; // 8027D4D4
  c->lr=0x8027D4DCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027D4D8
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D4DC
  c->r[0]=0u+0xFFFFFFFFu; // 8027D4E0
  c->r[8]=0u+0x43300000u; // 8027D4E4
  c->r[24]=c->r[3]|c->r[3]; // 8027D4E8
  c->r[28]=c->r[7]|c->r[7]; // 8027D4EC
  W32(c->r[1]+0x000000A0u,c->r[8]); // 8027D4F0
  c->r[25]=c->r[4]|c->r[4]; // 8027D4F4
  c->r[26]=c->r[5]|c->r[5]; // 8027D4F8
  W32(c->r[1]+0x000000A8u,c->r[8]); // 8027D4FC
  c->r[27]=c->r[6]|c->r[6]; // 8027D500
  c->r[4]=c->r[28]|c->r[28]; // 8027D504
  c->r[3]=0u+0x00000000u; // 8027D508
  W32(c->r[1]+0x00000070u,c->r[0]); // 8027D50C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8027D510
  W32(c->r[1]+0x00000078u,c->r[0]); // 8027D514
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8027D518
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8027D51C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8027D520
  c->lr=0x8027D528u; f_80283D18(c); // 8027D524
  c->r[4]=R32(c->r[26]+0x00000004u); // 8027D528
  c->r[30]=c->r[3]|c->r[3]; // 8027D52C
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8027D530
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027D534
  if (crb(c,2)) { goto L_8027D6D0; } // 8027D538
  c->r[3]=c->r[4]|c->r[4]; // 8027D53C
  c->r[4]=c->r[30]|c->r[30]; // 8027D540
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027D544
  c->r[5]=c->r[28]|c->r[28]; // 8027D548
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027D54C
  c->ctr=c->r[12]; // 8027D550
  if (true) { c->lr=0x8027D558u; dispatch(c,c->ctr); } // 8027D554
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D558
  c->r[29]=c->r[3]|c->r[3]; // 8027D55C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D560
  c->r[3]=c->r[1]+0x00000058u; // 8027D564
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8027D568
  c->r[5]=0u+0x00000000u; // 8027D56C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D570
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8027D574
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D578
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027D57C
  c->r[31]=R8(c->r[26]+0x00000000u); // 8027D580
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8027D584
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8027D588
  c->r[4]=R32(c->r[26]+0x00000004u); // 8027D58C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8027D590
  c->lr=0x8027D598u; f_80281A90(c); // 8027D594
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 8027D598
  c->r[3]=0u+0x80340000u; // 8027D59C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D5A0
  c->r[6]=c->r[1]+0x00000038u; // 8027D5A4
  c->r[3]=c->r[3]+0x00005230u; // 8027D5A8
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D5AC
  c->r[4]=c->r[3]+c->r[0]; // 8027D5B0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8027D5B4
  c->r[0]=R8(c->r[4]+0x00000009u); // 8027D5B8
  c->r[9]=c->r[1]+0x00000090u; // 8027D5BC
  c->r[3]=R8(c->r[4]+0x00000008u); // 8027D5C0
  c->r[31]=c->r[1]+0x00000080u; // 8027D5C4
  c->r[8]=R8(c->r[4]+c->r[0]); // 8027D5C8
  c->r[23]=c->r[4]+c->r[0]; // 8027D5CC
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 8027D5D0
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027D5D4
  W32(c->r[1]+0x000000ACu,c->r[8]); // 8027D5D8
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8027D5DC
  c->r[0]=R8(c->r[4]+0x00000002u); // 8027D5E0
  c->r[7]=c->r[1]+0x00000088u; // 8027D5E4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D5E8
  c->r[5]=c->r[1]+0x00000098u; // 8027D5EC
  c->r[3]=c->r[0]-c->r[10]; // 8027D5F0
  c->r[0]=R8(c->r[23]+0x00000004u); // 8027D5F4
  c->r[3]=c->r[3]^0x80000000u; // 8027D5F8
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027D5FC
  W32(c->r[1]+0x000000ACu,c->r[3]); // 8027D600
  c->r[0]=c->r[0]-c->r[8]; // 8027D604
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027D608
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027D60C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D610
  c->r[0]=c->r[0]^0x80000000u; // 8027D614
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 8027D618
  c->r[3]=c->r[29]|c->r[29]; // 8027D61C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027D620
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8027D624
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D628
  c->r[4]=0u+0x00000001u; // 8027D62C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D630
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027D634
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027D638
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027D63C
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D640
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027D644
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D648
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027D64C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 8027D650
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027D654
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 8027D658
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027D65C
  W32(c->r[1]+0x000000A4u,c->r[8]); // 8027D660
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027D664
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027D668
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 8027D66C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027D670
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027D674
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 8027D678
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8027D67C
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[6]);} // 8027D680
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027D684
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027D688
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 8027D68C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027D690
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 8027D694
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 8027D698
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 8027D69C
  c->lr=0x8027D6A4u; f_80283DD4(c); // 8027D6A0
  c->r[3]=0u-c->r[29]; // 8027D6A4
  c->r[0]=c->r[1]+0x00000070u; // 8027D6A8
  c->r[3]=c->r[3]|c->r[29]; // 8027D6AC
  c->r[6]=c->r[31]|c->r[31]; // 8027D6B0
  c->r[5]=sraw(c,c->r[3],31); // 8027D6B4
  c->r[8]=c->r[28]|c->r[28]; // 8027D6B8
  c->r[7]=c->r[0]&c->r[5]; // 8027D6BC
  c->r[3]=c->r[1]+0x00000068u; // 8027D6C0
  c->r[4]=c->r[1]+0x00000060u; // 8027D6C4
  c->r[5]=0u+0x00000001u; // 8027D6C8
  c->lr=0x8027D6D0u; f_80284418(c); // 8027D6CC
L_8027D6D0:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 8027D6D0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027D6D4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027D6D8
  if (crb(c,2)) { goto L_8027D888; } // 8027D6DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027D6E0
  c->r[4]=c->r[30]|c->r[30]; // 8027D6E4
  c->r[5]=c->r[28]|c->r[28]; // 8027D6E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027D6EC
  c->ctr=c->r[12]; // 8027D6F0
  if (true) { c->lr=0x8027D6F8u; dispatch(c,c->ctr); } // 8027D6F4
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027D6F8
  c->r[29]=c->r[3]|c->r[3]; // 8027D6FC
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D700
  c->r[3]=c->r[1]+0x00000050u; // 8027D704
  {uint32_t ea=c->r[25]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027D708
  c->r[5]=0u+0x00000000u; // 8027D70C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8027D710
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D714
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 8027D718
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D71C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8027D720
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8027D724
  c->r[31]=R8(c->r[26]+0x00000008u); // 8027D728
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 8027D72C
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 8027D730
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 8027D734
  {uint32_t ea=c->r[24]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D738
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 8027D73C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027D740
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8027D744
  c->lr=0x8027D74Cu; f_80281A90(c); // 8027D748
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 8027D74C
  c->r[3]=0u+0x80340000u; // 8027D750
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D754
  c->r[6]=c->r[1]+0x00000028u; // 8027D758
  c->r[3]=c->r[3]+0x00005230u; // 8027D75C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D760
  c->r[11]=c->r[3]+c->r[0]; // 8027D764
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8027D768
  c->r[0]=R8(c->r[11]+0x00000009u); // 8027D76C
  c->r[9]=c->r[1]+0x00000098u; // 8027D770
  c->r[5]=R8(c->r[11]+0x00000008u); // 8027D774
  c->r[8]=c->r[1]+0x00000088u; // 8027D778
  c->r[4]=c->r[11]+c->r[0]; // 8027D77C
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027D780
  c->r[7]=R8(c->r[4]+0x00000002u); // 8027D784
  c->r[3]=c->r[11]+c->r[5]; // 8027D788
  c->r[10]=R8(c->r[3]+0x00000002u); // 8027D78C
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027D790
  c->r[0]=R8(c->r[11]+c->r[5]); // 8027D794
  c->r[31]=c->r[1]+0x00000080u; // 8027D798
  W32(c->r[1]+0x000000ACu,c->r[7]); // 8027D79C
  c->r[5]=c->r[1]+0x00000090u; // 8027D7A0
  c->r[3]=c->r[0]-c->r[10]; // 8027D7A4
  c->r[0]=R8(c->r[4]+0x00000006u); // 8027D7A8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D7AC
  c->r[3]=c->r[3]^0x80000000u; // 8027D7B0
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027D7B4
  c->r[0]=c->r[0]-c->r[7]; // 8027D7B8
  W32(c->r[1]+0x000000ACu,c->r[3]); // 8027D7BC
  c->r[0]=c->r[0]^0x80000000u; // 8027D7C0
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027D7C4
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027D7C8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D7CC
  c->r[3]=c->r[29]|c->r[29]; // 8027D7D0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8027D7D4
  c->r[4]=0u+0x00000001u; // 8027D7D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027D7DC
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8027D7E0
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D7E4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D7E8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027D7EC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027D7F0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027D7F4
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D7F8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D7FC
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027D800
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027D804
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 8027D808
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027D80C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 8027D810
  W32(c->r[1]+0x000000A4u,c->r[7]); // 8027D814
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027D818
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 8027D81C
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027D820
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027D824
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027D828
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 8027D82C
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 8027D830
  {uint32_t ea=c->r[31]+c->r[23]; WF32(ea,c->f[6]);} // 8027D834
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 8027D838
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027D83C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027D840
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[2]);} // 8027D844
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027D848
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 8027D84C
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 8027D850
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 8027D854
  c->lr=0x8027D85Cu; f_80283DD4(c); // 8027D858
  c->r[3]=0u-c->r[29]; // 8027D85C
  c->r[0]=c->r[1]+0x00000070u; // 8027D860
  c->r[3]=c->r[3]|c->r[29]; // 8027D864
  c->r[6]=c->r[31]|c->r[31]; // 8027D868
  c->r[5]=sraw(c,c->r[3],31); // 8027D86C
  c->r[8]=c->r[28]|c->r[28]; // 8027D870
  c->r[7]=c->r[0]&c->r[5]; // 8027D874
  c->r[3]=c->r[1]+0x00000068u; // 8027D878
  c->r[4]=c->r[1]+0x00000060u; // 8027D87C
  c->r[5]=0u+0x00000001u; // 8027D880
  c->lr=0x8027D888u; f_80284418(c); // 8027D884
L_8027D888:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 8027D888
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027D88C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027D890
  if (crb(c,2)) { goto L_8027DA44; } // 8027D894
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027D898
  c->r[4]=c->r[30]|c->r[30]; // 8027D89C
  c->r[5]=c->r[28]|c->r[28]; // 8027D8A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027D8A4
  c->ctr=c->r[12]; // 8027D8A8
  if (true) { c->lr=0x8027D8B0u; dispatch(c,c->ctr); } // 8027D8AC
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D8B0
  c->r[29]=c->r[3]|c->r[3]; // 8027D8B4
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D8B8
  c->r[3]=c->r[1]+0x00000048u; // 8027D8BC
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027D8C0
  c->r[5]=0u+0x00000000u; // 8027D8C4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8027D8C8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D8CC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D8D0
  c->r[31]=R8(c->r[26]+0x00000018u); // 8027D8D4
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 8027D8D8
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 8027D8DC
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 8027D8E0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 8027D8E4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 8027D8E8
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D8EC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 8027D8F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8027D8F4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 8027D8F8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8027D8FC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 8027D900
  c->lr=0x8027D908u; f_80281A90(c); // 8027D904
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 8027D908
  c->r[3]=0u+0x80340000u; // 8027D90C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D910
  c->r[5]=c->r[1]+0x00000018u; // 8027D914
  c->r[3]=c->r[3]+0x00005230u; // 8027D918
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D91C
  c->r[3]=c->r[3]+c->r[0]; // 8027D920
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8027D924
  c->r[0]=R8(c->r[3]+0x00000009u); // 8027D928
  c->r[9]=c->r[1]+0x00000088u; // 8027D92C
  c->r[6]=R8(c->r[3]+0x00000008u); // 8027D930
  c->r[8]=c->r[1]+0x00000098u; // 8027D934
  c->r[4]=c->r[3]+c->r[0]; // 8027D938
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027D93C
  c->r[3]=c->r[3]+c->r[6]; // 8027D940
  c->r[7]=R8(c->r[4]+0x00000006u); // 8027D944
  c->r[10]=R8(c->r[3]+0x00000006u); // 8027D948
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8027D94C
  W32(c->r[1]+0x000000ACu,c->r[7]); // 8027D950
  c->r[6]=c->r[1]+0x00000090u; // 8027D954
  c->r[0]=R8(c->r[3]+0x00000004u); // 8027D958
  c->r[31]=c->r[1]+0x00000080u; // 8027D95C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D960
  c->r[3]=c->r[0]-c->r[10]; // 8027D964
  c->r[0]=R8(c->r[4]+0x00000002u); // 8027D968
  c->r[3]=c->r[3]^0x80000000u; // 8027D96C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027D970
  W32(c->r[1]+0x000000ACu,c->r[3]); // 8027D974
  c->r[0]=c->r[0]-c->r[7]; // 8027D978
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027D97C
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027D980
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D984
  c->r[0]=c->r[0]^0x80000000u; // 8027D988
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027D98C
  c->r[3]=c->r[29]|c->r[29]; // 8027D990
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027D994
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8027D998
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D99C
  c->r[4]=0u+0x00000001u; // 8027D9A0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027D9A4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027D9A8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027D9AC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027D9B0
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027D9B4
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027D9B8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027D9BC
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027D9C0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 8027D9C4
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027D9C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 8027D9CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027D9D0
  W32(c->r[1]+0x000000A4u,c->r[7]); // 8027D9D4
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027D9D8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027D9DC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 8027D9E0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027D9E4
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027D9E8
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 8027D9EC
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 8027D9F0
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 8027D9F4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027D9F8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027D9FC
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 8027DA00
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027DA04
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[2]);} // 8027DA08
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 8027DA0C
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 8027DA10
  c->lr=0x8027DA18u; f_80283DD4(c); // 8027DA14
  c->r[3]=0u-c->r[29]; // 8027DA18
  c->r[0]=c->r[1]+0x00000070u; // 8027DA1C
  c->r[3]=c->r[3]|c->r[29]; // 8027DA20
  c->r[6]=c->r[31]|c->r[31]; // 8027DA24
  c->r[5]=sraw(c,c->r[3],31); // 8027DA28
  c->r[8]=c->r[28]|c->r[28]; // 8027DA2C
  c->r[7]=c->r[0]&c->r[5]; // 8027DA30
  c->r[3]=c->r[1]+0x00000068u; // 8027DA34
  c->r[4]=c->r[1]+0x00000060u; // 8027DA38
  c->r[5]=0u+0x00000001u; // 8027DA3C
  c->lr=0x8027DA44u; f_80284418(c); // 8027DA40
L_8027DA44:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 8027DA44
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027DA48
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027DA4C
  if (crb(c,2)) { goto L_8027DBF4; } // 8027DA50
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027DA54
  c->r[4]=c->r[30]|c->r[30]; // 8027DA58
  c->r[5]=c->r[28]|c->r[28]; // 8027DA5C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027DA60
  c->ctr=c->r[12]; // 8027DA64
  if (true) { c->lr=0x8027DA6Cu; dispatch(c,c->ctr); } // 8027DA68
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DA6C
  c->r[29]=c->r[3]|c->r[3]; // 8027DA70
  {uint32_t ea=c->r[27]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DA74
  c->r[3]=c->r[1]+0x00000040u; // 8027DA78
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027DA7C
  c->r[5]=0u+0x00000000u; // 8027DA80
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 8027DA84
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DA88
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 8027DA8C
  c->r[25]=R8(c->r[26]+0x00000010u); // 8027DA90
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 8027DA94
  c->r[4]=R32(c->r[26]+0x00000014u); // 8027DA98
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8027DA9C
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DAA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8027DAA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8027DAA8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8027DAAC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8027DAB0
  c->lr=0x8027DAB8u; f_80281A90(c); // 8027DAB4
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 8027DAB8
  c->r[3]=0u+0x80340000u; // 8027DABC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027DAC0
  c->r[6]=c->r[1]+0x00000008u; // 8027DAC4
  c->r[3]=c->r[3]+0x00005230u; // 8027DAC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027DACC
  c->r[7]=c->r[3]+c->r[0]; // 8027DAD0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8027DAD4
  c->r[4]=R8(c->r[7]+0x00000009u); // 8027DAD8
  c->r[31]=c->r[1]+0x00000080u; // 8027DADC
  c->r[5]=R8(c->r[7]+0x00000008u); // 8027DAE0
  c->r[9]=c->r[1]+0x00000090u; // 8027DAE4
  c->r[3]=c->r[7]+c->r[4]; // 8027DAE8
  c->r[0]=R8(c->r[7]+c->r[4]); // 8027DAEC
  c->r[8]=R8(c->r[3]+0x00000004u); // 8027DAF0
  c->r[3]=c->r[7]+c->r[5]; // 8027DAF4
  c->r[10]=R8(c->r[3]+0x00000004u); // 8027DAF8
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027DAFC
  W32(c->r[1]+0x000000ACu,c->r[8]); // 8027DB00
  c->r[0]=c->r[0]-c->r[8]; // 8027DB04
  c->r[3]=R8(c->r[3]+0x00000006u); // 8027DB08
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027DB0C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027DB10
  c->r[0]=c->r[0]^0x80000000u; // 8027DB14
  c->r[3]=c->r[3]-c->r[10]; // 8027DB18
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027DB1C
  c->r[3]=c->r[3]^0x80000000u; // 8027DB20
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027DB24
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027DB28
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027DB2C
  W32(c->r[1]+0x000000ACu,c->r[3]); // 8027DB30
  c->r[7]=c->r[1]+0x00000098u; // 8027DB34
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 8027DB38
  c->r[5]=c->r[1]+0x00000088u; // 8027DB3C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027DB40
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8027DB44
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 8027DB48
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027DB4C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027DB50
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8027DB54
  c->r[3]=c->r[29]|c->r[29]; // 8027DB58
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DB5C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8027DB60
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027DB64
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DB68
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027DB6C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DB70
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 8027DB74
  c->r[4]=0u+0x00000001u; // 8027DB78
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027DB7C
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027DB80
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 8027DB84
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8027DB88
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 8027DB8C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8027DB90
  W32(c->r[1]+0x000000A4u,c->r[8]); // 8027DB94
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8027DB98
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027DB9C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 8027DBA0
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 8027DBA4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 8027DBA8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 8027DBAC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8027DBB0
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 8027DBB4
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 8027DBB8
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 8027DBBC
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 8027DBC0
  c->lr=0x8027DBC8u; f_80283DD4(c); // 8027DBC4
  c->r[3]=0u-c->r[29]; // 8027DBC8
  c->r[0]=c->r[1]+0x00000070u; // 8027DBCC
  c->r[3]=c->r[3]|c->r[29]; // 8027DBD0
  c->r[6]=c->r[31]|c->r[31]; // 8027DBD4
  c->r[5]=sraw(c,c->r[3],31); // 8027DBD8
  c->r[8]=c->r[28]|c->r[28]; // 8027DBDC
  c->r[7]=c->r[0]&c->r[5]; // 8027DBE0
  c->r[3]=c->r[1]+0x00000068u; // 8027DBE4
  c->r[4]=c->r[1]+0x00000060u; // 8027DBE8
  c->r[5]=0u+0x00000001u; // 8027DBEC
  c->lr=0x8027DBF4u; f_80284418(c); // 8027DBF0
L_8027DBF4:;
  c->r[11]=c->r[1]+0x000000E0u; // 8027DBF4
  c->lr=0x8027DBFCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027DBF8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8027DBFC
  c->lr=c->r[0]; // 8027DC00
  c->r[1]=c->r[1]+0x000000E0u; // 8027DC04
  return; // 8027DC08
}

// DrawFrame8__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_8027DC0C(Ctx* __restrict c) {
  trace_call(0x8027DC0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027DC0C
  c->r[0]=c->lr; // 8027DC10
  W32(c->r[1]+0x00000174u,c->r[0]); // 8027DC14
  c->r[11]=c->r[1]+0x00000170u; // 8027DC18
  c->lr=0x8027DC20u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027DC1C
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DC20
  c->r[0]=0u+0xFFFFFFFFu; // 8027DC24
  c->r[8]=0u+0x43300000u; // 8027DC28
  c->r[27]=c->r[3]|c->r[3]; // 8027DC2C
  c->r[31]=c->r[7]|c->r[7]; // 8027DC30
  W32(c->r[1]+0x00000138u,c->r[8]); // 8027DC34
  c->r[28]=c->r[4]|c->r[4]; // 8027DC38
  c->r[29]=c->r[5]|c->r[5]; // 8027DC3C
  W32(c->r[1]+0x00000140u,c->r[8]); // 8027DC40
  c->r[30]=c->r[6]|c->r[6]; // 8027DC44
  c->r[4]=c->r[31]|c->r[31]; // 8027DC48
  c->r[3]=0u+0x00000000u; // 8027DC4C
  W32(c->r[1]+0x00000108u,c->r[0]); // 8027DC50
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 8027DC54
  W32(c->r[1]+0x00000110u,c->r[0]); // 8027DC58
  W32(c->r[1]+0x00000114u,c->r[0]); // 8027DC5C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8027DC60
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8027DC64
  c->lr=0x8027DC6Cu; f_80283D18(c); // 8027DC68
  c->r[4]=R32(c->r[29]+0x00000004u); // 8027DC6C
  c->r[25]=c->r[3]|c->r[3]; // 8027DC70
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8027DC74
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027DC78
  if (crb(c,2)) { goto L_8027DE04; } // 8027DC7C
  c->r[3]=c->r[4]|c->r[4]; // 8027DC80
  c->r[4]=c->r[25]|c->r[25]; // 8027DC84
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027DC88
  c->r[5]=c->r[31]|c->r[31]; // 8027DC8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027DC90
  c->ctr=c->r[12]; // 8027DC94
  if (true) { c->lr=0x8027DC9Cu; dispatch(c,c->ctr); } // 8027DC98
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DC9C
  c->r[24]=c->r[3]|c->r[3]; // 8027DCA0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DCA4
  c->r[3]=c->r[1]+0x000000F0u; // 8027DCA8
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 8027DCAC
  c->r[5]=0u+0x00000000u; // 8027DCB0
  c->r[26]=R8(c->r[29]+0x00000000u); // 8027DCB4
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8027DCB8
  c->r[4]=R32(c->r[29]+0x00000004u); // 8027DCBC
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8027DCC0
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8027DCC4
  c->lr=0x8027DCCCu; f_80281A90(c); // 8027DCC8
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 8027DCCC
  c->r[3]=0u+0x80340000u; // 8027DCD0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DCD4
  c->r[6]=c->r[1]+0x00000040u; // 8027DCD8
  c->r[3]=c->r[3]+0x00005230u; // 8027DCDC
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DCE0
  c->r[4]=c->r[3]+c->r[0]; // 8027DCE4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8027DCE8
  c->r[0]=R8(c->r[4]+0x00000009u); // 8027DCEC
  c->r[9]=c->r[1]+0x00000128u; // 8027DCF0
  c->r[3]=R8(c->r[4]+0x00000008u); // 8027DCF4
  c->r[26]=c->r[1]+0x00000118u; // 8027DCF8
  c->r[8]=R8(c->r[4]+c->r[0]); // 8027DCFC
  c->r[23]=c->r[4]+c->r[0]; // 8027DD00
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 8027DD04
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027DD08
  W32(c->r[1]+0x00000144u,c->r[8]); // 8027DD0C
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8027DD10
  c->r[0]=R8(c->r[4]+0x00000002u); // 8027DD14
  c->r[7]=c->r[1]+0x00000120u; // 8027DD18
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027DD1C
  c->r[5]=c->r[1]+0x00000130u; // 8027DD20
  c->r[3]=c->r[0]-c->r[10]; // 8027DD24
  c->r[0]=R8(c->r[23]+0x00000004u); // 8027DD28
  c->r[3]=c->r[3]^0x80000000u; // 8027DD2C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027DD30
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027DD34
  c->r[0]=c->r[0]-c->r[8]; // 8027DD38
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027DD3C
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027DD40
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027DD44
  c->r[0]=c->r[0]^0x80000000u; // 8027DD48
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 8027DD4C
  c->r[3]=c->r[24]|c->r[24]; // 8027DD50
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027DD54
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027DD58
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DD5C
  c->r[4]=0u+0x00000001u; // 8027DD60
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027DD64
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027DD68
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027DD6C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027DD70
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DD74
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027DD78
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DD7C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027DD80
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 8027DD84
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027DD88
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8027DD8C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027DD90
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 8027DD94
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027DD98
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027DD9C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 8027DDA0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027DDA4
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027DDA8
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 8027DDAC
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8027DDB0
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 8027DDB4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027DDB8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027DDBC
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 8027DDC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027DDC4
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 8027DDC8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 8027DDCC
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 8027DDD0
  c->lr=0x8027DDD8u; f_80283DD4(c); // 8027DDD4
  c->r[3]=0u-c->r[24]; // 8027DDD8
  c->r[0]=c->r[1]+0x00000108u; // 8027DDDC
  c->r[4]=c->r[3]|c->r[24]; // 8027DDE0
  c->r[6]=c->r[26]|c->r[26]; // 8027DDE4
  c->r[5]=sraw(c,c->r[4],31); // 8027DDE8
  c->r[3]=c->r[28]|c->r[28]; // 8027DDEC
  c->r[7]=c->r[0]&c->r[5]; // 8027DDF0
  c->r[8]=c->r[31]|c->r[31]; // 8027DDF4
  c->r[4]=c->r[1]+0x00000100u; // 8027DDF8
  c->r[5]=0u+0x00000001u; // 8027DDFC
  c->lr=0x8027DE04u; f_80284418(c); // 8027DE00
L_8027DE04:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 8027DE04
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027DE08
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027DE0C
  if (crb(c,2)) { goto L_8027DFBC; } // 8027DE10
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027DE14
  c->r[4]=c->r[25]|c->r[25]; // 8027DE18
  c->r[5]=c->r[31]|c->r[31]; // 8027DE1C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027DE20
  c->ctr=c->r[12]; // 8027DE24
  if (true) { c->lr=0x8027DE2Cu; dispatch(c,c->ctr); } // 8027DE28
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DE2C
  c->r[24]=c->r[3]|c->r[3]; // 8027DE30
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DE34
  c->r[3]=c->r[1]+0x000000E0u; // 8027DE38
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027DE3C
  c->r[5]=0u+0x00000000u; // 8027DE40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8027DE44
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DE48
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 8027DE4C
  c->r[26]=R8(c->r[29]+0x00000030u); // 8027DE50
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027DE54
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 8027DE58
  c->r[4]=R32(c->r[29]+0x00000034u); // 8027DE5C
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8027DE60
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8027DE64
  c->lr=0x8027DE6Cu; f_80281A90(c); // 8027DE68
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 8027DE6C
  c->r[3]=0u+0x80340000u; // 8027DE70
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DE74
  c->r[6]=c->r[1]+0x00000038u; // 8027DE78
  c->r[3]=c->r[3]+0x00005230u; // 8027DE7C
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DE80
  c->r[4]=c->r[3]+c->r[0]; // 8027DE84
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8027DE88
  c->r[0]=R8(c->r[4]+0x00000009u); // 8027DE8C
  c->r[9]=c->r[1]+0x00000128u; // 8027DE90
  c->r[3]=R8(c->r[4]+0x00000008u); // 8027DE94
  c->r[26]=c->r[1]+0x00000118u; // 8027DE98
  c->r[8]=R8(c->r[4]+c->r[0]); // 8027DE9C
  c->r[23]=c->r[4]+c->r[0]; // 8027DEA0
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 8027DEA4
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027DEA8
  W32(c->r[1]+0x00000144u,c->r[8]); // 8027DEAC
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8027DEB0
  c->r[0]=R8(c->r[4]+0x00000002u); // 8027DEB4
  c->r[7]=c->r[1]+0x00000120u; // 8027DEB8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027DEBC
  c->r[5]=c->r[1]+0x00000130u; // 8027DEC0
  c->r[3]=c->r[0]-c->r[10]; // 8027DEC4
  c->r[0]=R8(c->r[23]+0x00000004u); // 8027DEC8
  c->r[3]=c->r[3]^0x80000000u; // 8027DECC
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027DED0
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027DED4
  c->r[0]=c->r[0]-c->r[8]; // 8027DED8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027DEDC
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027DEE0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027DEE4
  c->r[0]=c->r[0]^0x80000000u; // 8027DEE8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 8027DEEC
  c->r[3]=c->r[24]|c->r[24]; // 8027DEF0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027DEF4
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027DEF8
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DEFC
  c->r[4]=0u+0x00000001u; // 8027DF00
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027DF04
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027DF08
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027DF0C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027DF10
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DF14
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027DF18
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DF1C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027DF20
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 8027DF24
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027DF28
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8027DF2C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027DF30
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 8027DF34
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027DF38
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027DF3C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 8027DF40
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027DF44
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027DF48
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 8027DF4C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8027DF50
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 8027DF54
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027DF58
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027DF5C
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 8027DF60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027DF64
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 8027DF68
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 8027DF6C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 8027DF70
  c->lr=0x8027DF78u; f_80283DD4(c); // 8027DF74
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DF78
  c->r[0]=0u-c->r[24]; // 8027DF7C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DF80
  c->r[0]=c->r[0]|c->r[24]; // 8027DF84
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027DF88
  c->r[3]=sraw(c,c->r[0],31); // 8027DF8C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027DF90
  c->r[0]=c->r[1]+0x00000108u; // 8027DF94
  c->r[7]=c->r[0]&c->r[3]; // 8027DF98
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 8027DF9C
  c->r[6]=c->r[26]|c->r[26]; // 8027DFA0
  c->r[8]=c->r[31]|c->r[31]; // 8027DFA4
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 8027DFA8
  c->r[3]=c->r[1]+0x000000D8u; // 8027DFAC
  c->r[4]=c->r[1]+0x00000100u; // 8027DFB0
  c->r[5]=0u+0x00000001u; // 8027DFB4
  c->lr=0x8027DFBCu; f_80284418(c); // 8027DFB8
L_8027DFBC:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8027DFBC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027DFC0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027DFC4
  if (crb(c,2)) { goto L_8027E170; } // 8027DFC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027DFCC
  c->r[4]=c->r[25]|c->r[25]; // 8027DFD0
  c->r[5]=c->r[31]|c->r[31]; // 8027DFD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027DFD8
  c->ctr=c->r[12]; // 8027DFDC
  if (true) { c->lr=0x8027DFE4u; dispatch(c,c->ctr); } // 8027DFE0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027DFE4
  c->r[24]=c->r[3]|c->r[3]; // 8027DFE8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027DFEC
  c->r[3]=c->r[1]+0x000000C8u; // 8027DFF0
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 8027DFF4
  c->r[5]=0u+0x00000000u; // 8027DFF8
  c->r[26]=R8(c->r[29]+0x00000008u); // 8027DFFC
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8027E000
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8027E004
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8027E008
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8027E00C
  c->lr=0x8027E014u; f_80281A90(c); // 8027E010
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 8027E014
  c->r[3]=0u+0x80340000u; // 8027E018
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E01C
  c->r[6]=c->r[1]+0x00000030u; // 8027E020
  c->r[3]=c->r[3]+0x00005230u; // 8027E024
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E028
  c->r[11]=c->r[3]+c->r[0]; // 8027E02C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8027E030
  c->r[0]=R8(c->r[11]+0x00000009u); // 8027E034
  c->r[9]=c->r[1]+0x00000130u; // 8027E038
  c->r[5]=R8(c->r[11]+0x00000008u); // 8027E03C
  c->r[8]=c->r[1]+0x00000120u; // 8027E040
  c->r[4]=c->r[11]+c->r[0]; // 8027E044
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027E048
  c->r[7]=R8(c->r[4]+0x00000002u); // 8027E04C
  c->r[3]=c->r[11]+c->r[5]; // 8027E050
  c->r[10]=R8(c->r[3]+0x00000002u); // 8027E054
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027E058
  c->r[0]=R8(c->r[11]+c->r[5]); // 8027E05C
  c->r[26]=c->r[1]+0x00000118u; // 8027E060
  W32(c->r[1]+0x00000144u,c->r[7]); // 8027E064
  c->r[5]=c->r[1]+0x00000128u; // 8027E068
  c->r[3]=c->r[0]-c->r[10]; // 8027E06C
  c->r[0]=R8(c->r[4]+0x00000006u); // 8027E070
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E074
  c->r[3]=c->r[3]^0x80000000u; // 8027E078
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027E07C
  c->r[0]=c->r[0]-c->r[7]; // 8027E080
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027E084
  c->r[0]=c->r[0]^0x80000000u; // 8027E088
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027E08C
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027E090
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E094
  c->r[3]=c->r[24]|c->r[24]; // 8027E098
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8027E09C
  c->r[4]=0u+0x00000001u; // 8027E0A0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E0A4
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027E0A8
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E0AC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E0B0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027E0B4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E0B8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E0BC
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E0C0
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E0C4
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027E0C8
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E0CC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 8027E0D0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E0D4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8027E0D8
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 8027E0DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027E0E0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 8027E0E4
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027E0E8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027E0EC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027E0F0
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 8027E0F4
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 8027E0F8
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 8027E0FC
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 8027E100
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027E104
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027E108
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 8027E10C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027E110
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 8027E114
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 8027E118
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 8027E11C
  c->lr=0x8027E124u; f_80283DD4(c); // 8027E120
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E124
  c->r[0]=0u-c->r[24]; // 8027E128
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E12C
  c->r[0]=c->r[0]|c->r[24]; // 8027E130
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E134
  c->r[3]=sraw(c,c->r[0],31); // 8027E138
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8027E13C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E140
  c->r[0]=c->r[1]+0x00000108u; // 8027E144
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 8027E148
  c->r[7]=c->r[0]&c->r[3]; // 8027E14C
  c->r[6]=c->r[26]|c->r[26]; // 8027E150
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027E154
  c->r[8]=c->r[31]|c->r[31]; // 8027E158
  c->r[3]=c->r[1]+0x000000C0u; // 8027E15C
  c->r[4]=c->r[1]+0x00000100u; // 8027E160
  c->r[5]=0u+0x00000001u; // 8027E164
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8027E168
  c->lr=0x8027E170u; f_80284418(c); // 8027E16C
L_8027E170:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 8027E170
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027E174
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027E178
  if (crb(c,2)) { goto L_8027E33C; } // 8027E17C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027E180
  c->r[4]=c->r[25]|c->r[25]; // 8027E184
  c->r[5]=c->r[31]|c->r[31]; // 8027E188
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027E18C
  c->ctr=c->r[12]; // 8027E190
  if (true) { c->lr=0x8027E198u; dispatch(c,c->ctr); } // 8027E194
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E198
  c->r[24]=c->r[3]|c->r[3]; // 8027E19C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E1A0
  c->r[3]=c->r[1]+0x000000B0u; // 8027E1A4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E1A8
  c->r[5]=0u+0x00000000u; // 8027E1AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8027E1B0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E1B4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 8027E1B8
  c->r[26]=R8(c->r[29]+0x00000028u); // 8027E1BC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027E1C0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 8027E1C4
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 8027E1C8
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8027E1CC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8027E1D0
  c->lr=0x8027E1D8u; f_80281A90(c); // 8027E1D4
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 8027E1D8
  c->r[3]=0u+0x80340000u; // 8027E1DC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E1E0
  c->r[6]=c->r[1]+0x00000028u; // 8027E1E4
  c->r[3]=c->r[3]+0x00005230u; // 8027E1E8
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E1EC
  c->r[11]=c->r[3]+c->r[0]; // 8027E1F0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8027E1F4
  c->r[0]=R8(c->r[11]+0x00000009u); // 8027E1F8
  c->r[9]=c->r[1]+0x00000130u; // 8027E1FC
  c->r[5]=R8(c->r[11]+0x00000008u); // 8027E200
  c->r[8]=c->r[1]+0x00000120u; // 8027E204
  c->r[4]=c->r[11]+c->r[0]; // 8027E208
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027E20C
  c->r[7]=R8(c->r[4]+0x00000002u); // 8027E210
  c->r[3]=c->r[11]+c->r[5]; // 8027E214
  c->r[10]=R8(c->r[3]+0x00000002u); // 8027E218
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027E21C
  c->r[0]=R8(c->r[11]+c->r[5]); // 8027E220
  c->r[26]=c->r[1]+0x00000118u; // 8027E224
  W32(c->r[1]+0x00000144u,c->r[7]); // 8027E228
  c->r[5]=c->r[1]+0x00000128u; // 8027E22C
  c->r[3]=c->r[0]-c->r[10]; // 8027E230
  c->r[0]=R8(c->r[4]+0x00000006u); // 8027E234
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E238
  c->r[3]=c->r[3]^0x80000000u; // 8027E23C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027E240
  c->r[0]=c->r[0]-c->r[7]; // 8027E244
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027E248
  c->r[0]=c->r[0]^0x80000000u; // 8027E24C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027E250
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027E254
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E258
  c->r[3]=c->r[24]|c->r[24]; // 8027E25C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8027E260
  c->r[4]=0u+0x00000001u; // 8027E264
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E268
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027E26C
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E270
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E274
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027E278
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E27C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E280
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E284
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E288
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027E28C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E290
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 8027E294
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E298
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8027E29C
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 8027E2A0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027E2A4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 8027E2A8
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027E2AC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027E2B0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027E2B4
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 8027E2B8
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 8027E2BC
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 8027E2C0
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 8027E2C4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027E2C8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027E2CC
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 8027E2D0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027E2D4
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 8027E2D8
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 8027E2DC
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 8027E2E0
  c->lr=0x8027E2E8u; f_80283DD4(c); // 8027E2E4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E2E8
  c->r[0]=0u-c->r[24]; // 8027E2EC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E2F0
  c->r[0]=c->r[0]|c->r[24]; // 8027E2F4
  c->r[3]=sraw(c,c->r[0],31); // 8027E2F8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E2FC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8027E300
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E304
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E308
  c->r[0]=c->r[1]+0x00000108u; // 8027E30C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8027E310
  c->r[7]=c->r[0]&c->r[3]; // 8027E314
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027E318
  c->r[6]=c->r[26]|c->r[26]; // 8027E31C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 8027E320
  c->r[8]=c->r[31]|c->r[31]; // 8027E324
  c->r[3]=c->r[1]+0x000000A8u; // 8027E328
  c->r[4]=c->r[1]+0x00000100u; // 8027E32C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8027E330
  c->r[5]=0u+0x00000001u; // 8027E334
  c->lr=0x8027E33Cu; f_80284418(c); // 8027E338
L_8027E33C:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8027E33C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027E340
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027E344
  if (crb(c,2)) { goto L_8027E500; } // 8027E348
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027E34C
  c->r[4]=c->r[25]|c->r[25]; // 8027E350
  c->r[5]=c->r[31]|c->r[31]; // 8027E354
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027E358
  c->ctr=c->r[12]; // 8027E35C
  if (true) { c->lr=0x8027E364u; dispatch(c,c->ctr); } // 8027E360
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E364
  c->r[24]=c->r[3]|c->r[3]; // 8027E368
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E36C
  c->r[3]=c->r[1]+0x00000098u; // 8027E370
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 8027E374
  c->r[5]=0u+0x00000000u; // 8027E378
  c->r[26]=R8(c->r[29]+0x00000018u); // 8027E37C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8027E380
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 8027E384
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8027E388
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8027E38C
  c->lr=0x8027E394u; f_80281A90(c); // 8027E390
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 8027E394
  c->r[3]=0u+0x80340000u; // 8027E398
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E39C
  c->r[5]=c->r[1]+0x00000020u; // 8027E3A0
  c->r[3]=c->r[3]+0x00005230u; // 8027E3A4
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E3A8
  c->r[3]=c->r[3]+c->r[0]; // 8027E3AC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8027E3B0
  c->r[0]=R8(c->r[3]+0x00000009u); // 8027E3B4
  c->r[9]=c->r[1]+0x00000120u; // 8027E3B8
  c->r[6]=R8(c->r[3]+0x00000008u); // 8027E3BC
  c->r[8]=c->r[1]+0x00000130u; // 8027E3C0
  c->r[4]=c->r[3]+c->r[0]; // 8027E3C4
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027E3C8
  c->r[3]=c->r[3]+c->r[6]; // 8027E3CC
  c->r[7]=R8(c->r[4]+0x00000006u); // 8027E3D0
  c->r[10]=R8(c->r[3]+0x00000006u); // 8027E3D4
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8027E3D8
  W32(c->r[1]+0x00000144u,c->r[7]); // 8027E3DC
  c->r[6]=c->r[1]+0x00000128u; // 8027E3E0
  c->r[0]=R8(c->r[3]+0x00000004u); // 8027E3E4
  c->r[26]=c->r[1]+0x00000118u; // 8027E3E8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E3EC
  c->r[3]=c->r[0]-c->r[10]; // 8027E3F0
  c->r[0]=R8(c->r[4]+0x00000002u); // 8027E3F4
  c->r[3]=c->r[3]^0x80000000u; // 8027E3F8
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027E3FC
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027E400
  c->r[0]=c->r[0]-c->r[7]; // 8027E404
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027E408
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027E40C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E410
  c->r[0]=c->r[0]^0x80000000u; // 8027E414
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8027E418
  c->r[3]=c->r[24]|c->r[24]; // 8027E41C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E420
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027E424
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E428
  c->r[4]=0u+0x00000001u; // 8027E42C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E430
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027E434
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E438
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E43C
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E440
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027E444
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E448
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E44C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 8027E450
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E454
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8027E458
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027E45C
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 8027E460
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027E464
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027E468
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 8027E46C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027E470
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027E474
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 8027E478
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 8027E47C
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 8027E480
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027E484
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027E488
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 8027E48C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027E490
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 8027E494
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 8027E498
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 8027E49C
  c->lr=0x8027E4A4u; f_80283DD4(c); // 8027E4A0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E4A4
  c->r[0]=0u-c->r[24]; // 8027E4A8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E4AC
  c->r[0]=c->r[0]|c->r[24]; // 8027E4B0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E4B4
  c->r[3]=sraw(c,c->r[0],31); // 8027E4B8
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E4BC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 8027E4C0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E4C4
  c->r[0]=c->r[1]+0x00000108u; // 8027E4C8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8027E4CC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E4D0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 8027E4D4
  c->r[7]=c->r[0]&c->r[3]; // 8027E4D8
  c->r[6]=c->r[26]|c->r[26]; // 8027E4DC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027E4E0
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 8027E4E4
  c->r[8]=c->r[31]|c->r[31]; // 8027E4E8
  c->r[3]=c->r[1]+0x00000090u; // 8027E4EC
  c->r[4]=c->r[1]+0x00000100u; // 8027E4F0
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 8027E4F4
  c->r[5]=0u+0x00000001u; // 8027E4F8
  c->lr=0x8027E500u; f_80284418(c); // 8027E4FC
L_8027E500:;
  c->r[3]=R32(c->r[29]+0x0000003Cu); // 8027E500
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027E504
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027E508
  if (crb(c,2)) { goto L_8027E6CC; } // 8027E50C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027E510
  c->r[4]=c->r[25]|c->r[25]; // 8027E514
  c->r[5]=c->r[31]|c->r[31]; // 8027E518
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027E51C
  c->ctr=c->r[12]; // 8027E520
  if (true) { c->lr=0x8027E528u; dispatch(c,c->ctr); } // 8027E524
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E528
  c->r[24]=c->r[3]|c->r[3]; // 8027E52C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E530
  c->r[3]=c->r[1]+0x00000080u; // 8027E534
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E538
  c->r[5]=0u+0x00000000u; // 8027E53C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8027E540
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E544
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 8027E548
  c->r[26]=R8(c->r[29]+0x00000038u); // 8027E54C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027E550
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 8027E554
  c->r[4]=R32(c->r[29]+0x0000003Cu); // 8027E558
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8027E55C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8027E560
  c->lr=0x8027E568u; f_80281A90(c); // 8027E564
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 8027E568
  c->r[3]=0u+0x80340000u; // 8027E56C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E570
  c->r[5]=c->r[1]+0x00000018u; // 8027E574
  c->r[3]=c->r[3]+0x00005230u; // 8027E578
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E57C
  c->r[3]=c->r[3]+c->r[0]; // 8027E580
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8027E584
  c->r[0]=R8(c->r[3]+0x00000009u); // 8027E588
  c->r[9]=c->r[1]+0x00000120u; // 8027E58C
  c->r[6]=R8(c->r[3]+0x00000008u); // 8027E590
  c->r[8]=c->r[1]+0x00000130u; // 8027E594
  c->r[4]=c->r[3]+c->r[0]; // 8027E598
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8027E59C
  c->r[3]=c->r[3]+c->r[6]; // 8027E5A0
  c->r[7]=R8(c->r[4]+0x00000006u); // 8027E5A4
  c->r[10]=R8(c->r[3]+0x00000006u); // 8027E5A8
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8027E5AC
  W32(c->r[1]+0x00000144u,c->r[7]); // 8027E5B0
  c->r[6]=c->r[1]+0x00000128u; // 8027E5B4
  c->r[0]=R8(c->r[3]+0x00000004u); // 8027E5B8
  c->r[26]=c->r[1]+0x00000118u; // 8027E5BC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E5C0
  c->r[3]=c->r[0]-c->r[10]; // 8027E5C4
  c->r[0]=R8(c->r[4]+0x00000002u); // 8027E5C8
  c->r[3]=c->r[3]^0x80000000u; // 8027E5CC
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027E5D0
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027E5D4
  c->r[0]=c->r[0]-c->r[7]; // 8027E5D8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027E5DC
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027E5E0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E5E4
  c->r[0]=c->r[0]^0x80000000u; // 8027E5E8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027E5EC
  c->r[3]=c->r[24]|c->r[24]; // 8027E5F0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E5F4
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027E5F8
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E5FC
  c->r[4]=0u+0x00000001u; // 8027E600
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E604
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027E608
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E60C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E610
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E614
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 8027E618
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E61C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E620
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 8027E624
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E628
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8027E62C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027E630
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 8027E634
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8027E638
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 8027E63C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 8027E640
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027E644
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027E648
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 8027E64C
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 8027E650
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 8027E654
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8027E658
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8027E65C
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 8027E660
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027E664
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 8027E668
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 8027E66C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 8027E670
  c->lr=0x8027E678u; f_80283DD4(c); // 8027E674
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E678
  c->r[0]=0u-c->r[24]; // 8027E67C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E680
  c->r[0]=c->r[0]|c->r[24]; // 8027E684
  c->r[3]=sraw(c,c->r[0],31); // 8027E688
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E68C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8027E690
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E694
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E698
  c->r[0]=c->r[1]+0x00000108u; // 8027E69C
  c->r[7]=c->r[0]&c->r[3]; // 8027E6A0
  c->r[6]=c->r[26]|c->r[26]; // 8027E6A4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 8027E6A8
  c->r[8]=c->r[31]|c->r[31]; // 8027E6AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8027E6B0
  c->r[3]=c->r[1]+0x00000078u; // 8027E6B4
  c->r[4]=c->r[1]+0x00000100u; // 8027E6B8
  c->r[5]=0u+0x00000001u; // 8027E6BC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8027E6C0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 8027E6C4
  c->lr=0x8027E6CCu; f_80284418(c); // 8027E6C8
L_8027E6CC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8027E6CC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027E6D0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027E6D4
  if (crb(c,2)) { goto L_8027E880; } // 8027E6D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027E6DC
  c->r[4]=c->r[25]|c->r[25]; // 8027E6E0
  c->r[5]=c->r[31]|c->r[31]; // 8027E6E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027E6E8
  c->ctr=c->r[12]; // 8027E6EC
  if (true) { c->lr=0x8027E6F4u; dispatch(c,c->ctr); } // 8027E6F0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E6F4
  c->r[24]=c->r[3]|c->r[3]; // 8027E6F8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E6FC
  c->r[3]=c->r[1]+0x00000068u; // 8027E700
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8027E704
  c->r[5]=0u+0x00000000u; // 8027E708
  c->r[26]=R8(c->r[29]+0x00000010u); // 8027E70C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8027E710
  c->r[4]=R32(c->r[29]+0x00000014u); // 8027E714
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8027E718
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8027E71C
  c->lr=0x8027E724u; f_80281A90(c); // 8027E720
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 8027E724
  c->r[3]=0u+0x80340000u; // 8027E728
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E72C
  c->r[6]=c->r[1]+0x00000010u; // 8027E730
  c->r[3]=c->r[3]+0x00005230u; // 8027E734
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E738
  c->r[7]=c->r[3]+c->r[0]; // 8027E73C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8027E740
  c->r[4]=R8(c->r[7]+0x00000009u); // 8027E744
  c->r[26]=c->r[1]+0x00000118u; // 8027E748
  c->r[5]=R8(c->r[7]+0x00000008u); // 8027E74C
  c->r[9]=c->r[1]+0x00000128u; // 8027E750
  c->r[3]=c->r[7]+c->r[4]; // 8027E754
  c->r[0]=R8(c->r[7]+c->r[4]); // 8027E758
  c->r[8]=R8(c->r[3]+0x00000004u); // 8027E75C
  c->r[3]=c->r[7]+c->r[5]; // 8027E760
  c->r[10]=R8(c->r[3]+0x00000004u); // 8027E764
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027E768
  W32(c->r[1]+0x00000144u,c->r[8]); // 8027E76C
  c->r[0]=c->r[0]-c->r[8]; // 8027E770
  c->r[3]=R8(c->r[3]+0x00000006u); // 8027E774
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027E778
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E77C
  c->r[0]=c->r[0]^0x80000000u; // 8027E780
  c->r[3]=c->r[3]-c->r[10]; // 8027E784
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027E788
  c->r[3]=c->r[3]^0x80000000u; // 8027E78C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E790
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027E794
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027E798
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027E79C
  c->r[7]=c->r[1]+0x00000130u; // 8027E7A0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 8027E7A4
  c->r[5]=c->r[1]+0x00000120u; // 8027E7A8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E7AC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 8027E7B0
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 8027E7B4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E7B8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E7BC
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027E7C0
  c->r[3]=c->r[24]|c->r[24]; // 8027E7C4
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E7C8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E7CC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027E7D0
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E7D4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E7D8
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E7DC
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 8027E7E0
  c->r[4]=0u+0x00000001u; // 8027E7E4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027E7E8
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027E7EC
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 8027E7F0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E7F4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 8027E7F8
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8027E7FC
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 8027E800
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 8027E804
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027E808
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 8027E80C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 8027E810
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 8027E814
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 8027E818
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8027E81C
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 8027E820
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 8027E824
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 8027E828
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 8027E82C
  c->lr=0x8027E834u; f_80283DD4(c); // 8027E830
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E834
  c->r[0]=0u-c->r[24]; // 8027E838
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E83C
  c->r[0]=c->r[0]|c->r[24]; // 8027E840
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E844
  c->r[3]=sraw(c,c->r[0],31); // 8027E848
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8027E84C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E850
  c->r[0]=c->r[1]+0x00000108u; // 8027E854
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 8027E858
  c->r[7]=c->r[0]&c->r[3]; // 8027E85C
  c->r[6]=c->r[26]|c->r[26]; // 8027E860
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8027E864
  c->r[8]=c->r[31]|c->r[31]; // 8027E868
  c->r[3]=c->r[1]+0x00000060u; // 8027E86C
  c->r[4]=c->r[1]+0x00000100u; // 8027E870
  c->r[5]=0u+0x00000001u; // 8027E874
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8027E878
  c->lr=0x8027E880u; f_80284418(c); // 8027E87C
L_8027E880:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 8027E880
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8027E884
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8027E888
  if (crb(c,2)) { goto L_8027EA3C; } // 8027E88C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027E890
  c->r[4]=c->r[25]|c->r[25]; // 8027E894
  c->r[5]=c->r[31]|c->r[31]; // 8027E898
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027E89C
  c->ctr=c->r[12]; // 8027E8A0
  if (true) { c->lr=0x8027E8A8u; dispatch(c,c->ctr); } // 8027E8A4
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E8A8
  c->r[24]=c->r[3]|c->r[3]; // 8027E8AC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E8B0
  c->r[3]=c->r[1]+0x00000050u; // 8027E8B4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E8B8
  c->r[5]=0u+0x00000000u; // 8027E8BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8027E8C0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E8C4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 8027E8C8
  c->r[25]=R8(c->r[29]+0x00000020u); // 8027E8CC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027E8D0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 8027E8D4
  c->r[4]=R32(c->r[29]+0x00000024u); // 8027E8D8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8027E8DC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8027E8E0
  c->lr=0x8027E8E8u; f_80281A90(c); // 8027E8E4
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 8027E8E8
  c->r[3]=0u+0x80340000u; // 8027E8EC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E8F0
  c->r[6]=c->r[1]+0x00000008u; // 8027E8F4
  c->r[3]=c->r[3]+0x00005230u; // 8027E8F8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027E8FC
  c->r[7]=c->r[3]+c->r[0]; // 8027E900
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8027E904
  c->r[4]=R8(c->r[7]+0x00000009u); // 8027E908
  c->r[27]=c->r[1]+0x00000118u; // 8027E90C
  c->r[5]=R8(c->r[7]+0x00000008u); // 8027E910
  c->r[9]=c->r[1]+0x00000128u; // 8027E914
  c->r[3]=c->r[7]+c->r[4]; // 8027E918
  c->r[0]=R8(c->r[7]+c->r[4]); // 8027E91C
  c->r[8]=R8(c->r[3]+0x00000004u); // 8027E920
  c->r[3]=c->r[7]+c->r[5]; // 8027E924
  c->r[10]=R8(c->r[3]+0x00000004u); // 8027E928
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8027E92C
  W32(c->r[1]+0x00000144u,c->r[8]); // 8027E930
  c->r[0]=c->r[0]-c->r[8]; // 8027E934
  c->r[3]=R8(c->r[3]+0x00000006u); // 8027E938
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8027E93C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E940
  c->r[0]=c->r[0]^0x80000000u; // 8027E944
  c->r[3]=c->r[3]-c->r[10]; // 8027E948
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[8]=RF64(ea);} // 8027E94C
  c->r[3]=c->r[3]^0x80000000u; // 8027E950
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E954
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[5]=RF64(ea);} // 8027E958
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8027E95C
  W32(c->r[1]+0x00000144u,c->r[3]); // 8027E960
  c->r[7]=c->r[1]+0x00000130u; // 8027E964
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 8027E968
  c->r[5]=c->r[1]+0x00000120u; // 8027E96C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E970
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8027E974
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 8027E978
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E97C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027E980
  W32(c->r[1]+0x00000144u,c->r[0]); // 8027E984
  c->r[3]=c->r[24]|c->r[24]; // 8027E988
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E98C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 8027E990
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8027E994
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E998
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 8027E99C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027E9A0
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[7]);} // 8027E9A4
  c->r[4]=0u+0x00000001u; // 8027E9A8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8027E9AC
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8027E9B0
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 8027E9B4
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 8027E9B8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 8027E9BC
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 8027E9C0
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 8027E9C4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 8027E9C8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8027E9CC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 8027E9D0
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 8027E9D4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 8027E9D8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 8027E9DC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8027E9E0
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 8027E9E4
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 8027E9E8
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[0]);} // 8027E9EC
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 8027E9F0
  c->lr=0x8027E9F8u; f_80283DD4(c); // 8027E9F4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027E9F8
  c->r[0]=0u-c->r[24]; // 8027E9FC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EA00
  c->r[0]=c->r[0]|c->r[24]; // 8027EA04
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027EA08
  c->r[3]=sraw(c,c->r[0],31); // 8027EA0C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8027EA10
  c->r[0]=c->r[1]+0x00000108u; // 8027EA14
  c->r[7]=c->r[0]&c->r[3]; // 8027EA18
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 8027EA1C
  c->r[6]=c->r[27]|c->r[27]; // 8027EA20
  c->r[8]=c->r[31]|c->r[31]; // 8027EA24
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8027EA28
  c->r[3]=c->r[1]+0x00000048u; // 8027EA2C
  c->r[4]=c->r[1]+0x00000100u; // 8027EA30
  c->r[5]=0u+0x00000001u; // 8027EA34
  c->lr=0x8027EA3Cu; f_80284418(c); // 8027EA38
L_8027EA3C:;
  c->r[11]=c->r[1]+0x00000170u; // 8027EA3C
  c->lr=0x8027EA44u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027EA40
  c->r[0]=R32(c->r[1]+0x00000174u); // 8027EA44
  c->lr=c->r[0]; // 8027EA48
  c->r[1]=c->r[1]+0x00000170u; // 8027EA4C
  return; // 8027EA50
}

// fn_8027EA54
void f_8027EA54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027EA54
  c->r[0]=c->lr; // 8027EA58
  cmps(c,0,(int32_t)c->r[5],4); // 8027EA5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8027EA60
  c->r[0]=0u+0x00000000u; // 8027EA64
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8027EA68
  c->r[31]=c->r[6]|c->r[6]; // 8027EA6C
  W32(c->r[1]+0x00000038u,c->r[30]); // 8027EA70
  c->r[30]=c->r[3]|c->r[3]; // 8027EA74
  W32(c->r[1]+0x00000020u,c->r[0]); // 8027EA78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027EA7C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8027EA80
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8027EA84
  if (crb(c,2)) { goto L_8027EAD4; } // 8027EA88
  if (!crb(c,0)) { goto L_8027EA9C; } // 8027EA8C
  cmps(c,0,(int32_t)c->r[5],1); // 8027EA90
  if (crb(c,2)) { goto L_8027EAA8; } // 8027EA94
  goto L_8027EB1C; // 8027EA98
L_8027EA9C:;
  cmps(c,0,(int32_t)c->r[5],8); // 8027EA9C
  if (crb(c,2)) { goto L_8027EAD4; } // 8027EAA0
  goto L_8027EB1C; // 8027EAA4
L_8027EAA8:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 8027EAA8
  c->r[3]=c->r[1]+0x00000018u; // 8027EAAC
  c->r[5]=0u+0x00000000u; // 8027EAB0
  c->lr=0x8027EAB8u; f_80281A90(c); // 8027EAB4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027EAB8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EABC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8027EAC0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8027EAC4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8027EAC8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8027EACC
  goto L_8027EB1C; // 8027EAD0
L_8027EAD4:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 8027EAD4
  c->r[3]=c->r[1]+0x00000010u; // 8027EAD8
  c->r[5]=0u+0x00000000u; // 8027EADC
  c->lr=0x8027EAE4u; f_80281A90(c); // 8027EAE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027EAE4
  c->r[3]=c->r[1]+0x00000008u; // 8027EAE8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EAEC
  c->r[5]=0u+0x00000000u; // 8027EAF0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8027EAF4
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8027EAF8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8027EAFC
  c->lr=0x8027EB04u; f_80281A90(c); // 8027EB00
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027EB04
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EB08
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8027EB0C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8027EB10
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8027EB14
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8027EB18
L_8027EB1C:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 8027EB1C
  c->r[4]=R32(c->r[1]+0x00000024u); // 8027EB20
  c->r[3]=R32(c->r[1]+0x00000028u); // 8027EB24
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8027EB28
  W32(c->r[30]+0x00000000u,c->r[5]); // 8027EB2C
  W32(c->r[30]+0x00000004u,c->r[4]); // 8027EB30
  W32(c->r[30]+0x00000008u,c->r[3]); // 8027EB34
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8027EB38
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8027EB3C
  c->r[30]=R32(c->r[1]+0x00000038u); // 8027EB40
  c->r[0]=R32(c->r[1]+0x00000044u); // 8027EB44
  c->lr=c->r[0]; // 8027EB48
  c->r[1]=c->r[1]+0x00000040u; // 8027EB4C
  return; // 8027EB50
}

// GetMaterialNum__Q34nw4r3lyt6WindowCFv
void f_8027EB54(Ctx* __restrict c) {
  trace_call(0x8027EB54u);
  c->r[3]=R8(c->r[3]+0x00000104u); // 8027EB54
  c->r[0]=c->r[3]+0x00000001u; // 8027EB58
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8027EB5C
  return; // 8027EB60
}

// GetMaterial__Q34nw4r3lyt6WindowCFUl
void f_8027EB64(Ctx* __restrict c) {
  trace_call(0x8027EB64u);
  cmps(c,0,(int32_t)c->r[4],0); // 8027EB64
  if (!crb(c,2)) { goto L_8027EB7C; } // 8027EB68
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027EB6C
  c->r[12]=R32(c->r[12]+0x00000074u); // 8027EB70
  c->ctr=c->r[12]; // 8027EB74
  if (true) { dispatch(c,c->ctr); return; } // 8027EB78
L_8027EB7C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027EB7C
  c->r[12]=R32(c->r[12]+0x00000078u); // 8027EB80
  c->ctr=c->r[12]; // 8027EB84
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8027EB88
  if (true) { dispatch(c,c->ctr); return; } // 8027EB8C
}

// fn_8027EB90
void f_8027EB90(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000104u); // 8027EB90
  cmpu(c,0,c->r[4],c->r[0]); // 8027EB94
  if (crb(c,0)) { goto L_8027EBA4; } // 8027EB98
  c->r[3]=0u+0x00000000u; // 8027EB9C
  return; // 8027EBA0
L_8027EBA4:;
  c->r[3]=R32(c->r[3]+0x00000100u); // 8027EBA4
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8027EBA8
  c->r[3]=c->r[3]+c->r[0]; // 8027EBAC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8027EBB0
  return; // 8027EBB4
}

// fn_8027EBB8
void f_8027EBB8(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027EBB8
  c->r[12]=R32(c->r[12]+0x00000068u); // 8027EBBC
  c->ctr=c->r[12]; // 8027EBC0
  if (true) { dispatch(c,c->ctr); return; } // 8027EBC4
}

// fn_8027EBC8
void f_8027EBC8(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFA438u; // 8027EBC8
  return; // 8027EBCC
}

// fn_8027EBD0
void f_8027EBD0(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA418u; // 8027EBD0
  W32(c->r[13]+0xFFFFA438u,c->r[0]); // 8027EBD4
  return; // 8027EBD8
}

// __ct__Q34nw4r3lyt8BoundingFPCQ44nw4r3lyt3res8BoundingRCQ34nw4r3lyt11ResBlockSet
void f_8027EBDC(Ctx* __restrict c) {
  trace_call(0x8027EBDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027EBDC
  c->r[0]=c->lr; // 8027EBE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027EBE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8027EBE8
  c->r[31]=c->r[3]|c->r[3]; // 8027EBEC
  c->lr=0x8027EBF4u; f_80278188(c); // 8027EBF0
  c->r[4]=0u+0x80340000u; // 8027EBF4
  c->r[3]=c->r[31]|c->r[31]; // 8027EBF8
  c->r[4]=c->r[4]+0x000052F8u; // 8027EBFC
  W32(c->r[31]+0x00000000u,c->r[4]); // 8027EC00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8027EC04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027EC08
  c->lr=c->r[0]; // 8027EC0C
  c->r[1]=c->r[1]+0x00000010u; // 8027EC10
  return; // 8027EC14
}

// fn_8027EC18
void f_8027EC18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027EC18
  c->r[0]=c->lr; // 8027EC1C
  cmps(c,0,(int32_t)c->r[3],0); // 8027EC20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027EC24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8027EC28
  c->r[31]=c->r[4]|c->r[4]; // 8027EC2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8027EC30
  c->r[30]=c->r[3]|c->r[3]; // 8027EC34
  if (crb(c,2)) { goto L_8027EC54; } // 8027EC38
  c->r[4]=0u+0x00000000u; // 8027EC3C
  c->lr=0x8027EC44u; f_802782C0(c); // 8027EC40
  cmps(c,0,(int32_t)c->r[31],0); // 8027EC44
  if (!crb(c,1)) { goto L_8027EC54; } // 8027EC48
  c->r[3]=c->r[30]|c->r[30]; // 8027EC4C
  c->lr=0x8027EC54u; f_800D6AD0(c); // 8027EC50
L_8027EC54:;
  c->r[3]=c->r[30]|c->r[30]; // 8027EC54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8027EC58
  c->r[30]=R32(c->r[1]+0x00000008u); // 8027EC5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027EC60
  c->lr=c->r[0]; // 8027EC64
  c->r[1]=c->r[1]+0x00000010u; // 8027EC68
  return; // 8027EC6C
}

// fn_8027EC70
void f_8027EC70(Ctx* __restrict c) {
  return; // 8027EC70
}

// fn_8027EC74
void f_8027EC74(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFA440u; // 8027EC74
  return; // 8027EC78
}

// fn_8027EC7C
void f_8027EC7C(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFFA418u; // 8027EC7C
  W32(c->r[13]+0xFFFFA440u,c->r[0]); // 8027EC80
  return; // 8027EC84
}

// CalcTextureMtx__Q34nw4r3lyt26@unnamed@lyt_material_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3lyt6TexSRT
void f_8027EC88(Ctx* __restrict c) {
  trace_call(0x8027EC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027EC88
  c->r[0]=c->lr; // 8027EC8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027EC90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8027EC94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8027EC98
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027EC9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8027ECA0
  c->r[31]=c->r[4]|c->r[4]; // 8027ECA4
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027ECA8
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027ECAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8027ECB0
  c->r[30]=c->r[3]|c->r[3]; // 8027ECB4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8027ECB8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8027ECBC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8027ECC0
  c->lr=0x8027ECC8u; f_8028477C(c); // 8027ECC4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027ECC8
  c->f[31]=c->f[1]; // 8027ECCC
  {uint32_t ea=c->r[2]+0xFFFF9E64u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027ECD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8027ECD4
  c->lr=0x8027ECDCu; f_80284714(c); // 8027ECD8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8027ECDC
  c->f[5]=-c->f[1]; // 8027ECE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027ECE4
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 8027ECE8
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[8]=c->ps1[8]=RF32(ea);} // 8027ECEC
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 8027ECF0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027ECF4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8027ECF8
  c->f[4]=-c->f[2]; // 8027ECFC
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 8027ED00
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027ED04
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 8027ED08
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027ED0C
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 8027ED10
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027ED14
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 8027ED18
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[11]);} // 8027ED1C
  c->f[7]=-c->f[6]; // 8027ED20
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 8027ED24
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[12]);} // 8027ED28
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 8027ED2C
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 8027ED30
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[8]);} // 8027ED34
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8027ED38
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 8027ED3C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[9]);} // 8027ED40
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 8027ED44
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[10]);} // 8027ED48
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 8027ED4C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8027ED50
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[8]);} // 8027ED54
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 8027ED58
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 8027ED5C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[8]);} // 8027ED60
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[8]);} // 8027ED64
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 8027ED68
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[8]);} // 8027ED6C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8027ED70
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8027ED74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8027ED78
  c->r[30]=R32(c->r[1]+0x00000018u); // 8027ED7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027ED80
  c->lr=c->r[0]; // 8027ED84
  c->r[1]=c->r[1]+0x00000030u; // 8027ED88
  return; // 8027ED8C
}

// SetIndTexMtx__Q34nw4r3lyt26@unnamed@lyt_material_cpp@F14_GXIndTexMtxIDPA3_Cf
void f_8027ED90(Ctx* __restrict c) {
  trace_call(0x8027ED90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027ED90
  c->r[0]=c->lr; // 8027ED94
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8027ED98
  c->r[5]=0u+0x00000000u; // 8027ED9C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8027EDA0
  c->f[8]=std::fabs(c->f[2]); // 8027EDA4
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EDA8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8027EDAC
  c->f[9]=std::fabs(c->f[3]); // 8027EDB0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8027EDB4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 8027EDB8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8027EDBC
  fcmp(c,0,c->f[8],c->f[0]); // 8027EDC0
  c->f[10]=std::fabs(c->f[4]); // 8027EDC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8027EDC8
  c->f[11]=std::fabs(c->f[5]); // 8027EDCC
  c->f[12]=std::fabs(c->f[6]); // 8027EDD0
  c->f[13]=std::fabs(c->f[7]); // 8027EDD4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EDD8
  if (crb(c,2)) { goto L_8027EE1C; } // 8027EDDC
  fcmp(c,0,c->f[9],c->f[0]); // 8027EDE0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EDE4
  if (crb(c,2)) { goto L_8027EE1C; } // 8027EDE8
  fcmp(c,0,c->f[10],c->f[0]); // 8027EDEC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EDF0
  if (crb(c,2)) { goto L_8027EE1C; } // 8027EDF4
  fcmp(c,0,c->f[11],c->f[0]); // 8027EDF8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EDFC
  if (crb(c,2)) { goto L_8027EE1C; } // 8027EE00
  fcmp(c,0,c->f[12],c->f[0]); // 8027EE04
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EE08
  if (crb(c,2)) { goto L_8027EE1C; } // 8027EE0C
  fcmp(c,0,c->f[13],c->f[0]); // 8027EE10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EE14
  if (!crb(c,2)) { goto L_8027EEB0; } // 8027EE18
L_8027EE1C:;
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027EE1C
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EE20
L_8027EE24:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8027EE24
  cmps(c,0,(int32_t)c->r[0],46); // 8027EE28
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EE2C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 8027EE30
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8027EE34
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 8027EE38
  fcmp(c,0,c->f[8],c->f[0]); // 8027EE3C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 8027EE40
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 8027EE44
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 8027EE48
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 8027EE4C
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 8027EE50
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 8027EE54
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 8027EE58
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 8027EE5C
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 8027EE60
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EE64
  c->r[5]=c->r[5]+0x00000001u; // 8027EE68
  if (crb(c,2)) { IRQCHK(c); goto L_8027EE24; } // 8027EE6C
  fcmp(c,0,c->f[9],c->f[0]); // 8027EE70
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EE74
  if (crb(c,2)) { IRQCHK(c); goto L_8027EE24; } // 8027EE78
  fcmp(c,0,c->f[10],c->f[0]); // 8027EE7C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EE80
  if (crb(c,2)) { IRQCHK(c); goto L_8027EE24; } // 8027EE84
  fcmp(c,0,c->f[11],c->f[0]); // 8027EE88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EE8C
  if (crb(c,2)) { IRQCHK(c); goto L_8027EE24; } // 8027EE90
  fcmp(c,0,c->f[12],c->f[0]); // 8027EE94
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EE98
  if (crb(c,2)) { IRQCHK(c); goto L_8027EE24; } // 8027EE9C
  fcmp(c,0,c->f[13],c->f[0]); // 8027EEA0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8027EEA4
  if (crb(c,2)) { IRQCHK(c); goto L_8027EE24; } // 8027EEA8
  goto L_8027EF58; // 8027EEAC
L_8027EEB0:;
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027EEB0
  fcmp(c,0,c->f[8],c->f[1]); // 8027EEB4
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EEB8
  fcmp(c,0,c->f[9],c->f[1]); // 8027EEBC
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EEC0
  fcmp(c,0,c->f[10],c->f[1]); // 8027EEC4
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EEC8
  fcmp(c,0,c->f[11],c->f[1]); // 8027EECC
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EED0
  fcmp(c,0,c->f[12],c->f[1]); // 8027EED4
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EED8
  fcmp(c,0,c->f[13],c->f[1]); // 8027EEDC
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EEE0
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EEE4
L_8027EEE8:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 8027EEE8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8027EEEC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8027EEF0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8027EEF4
  fcmp(c,0,c->f[8],c->f[1]); // 8027EEF8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 8027EEFC
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 8027EF00
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 8027EF04
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 8027EF08
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 8027EF0C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 8027EF10
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 8027EF14
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 8027EF18
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 8027EF1C
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EF20
  fcmp(c,0,c->f[9],c->f[1]); // 8027EF24
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EF28
  fcmp(c,0,c->f[10],c->f[1]); // 8027EF2C
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EF30
  fcmp(c,0,c->f[11],c->f[1]); // 8027EF34
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EF38
  fcmp(c,0,c->f[12],c->f[1]); // 8027EF3C
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EF40
  fcmp(c,0,c->f[13],c->f[1]); // 8027EF44
  if (!crb(c,0)) { goto L_8027EF58; } // 8027EF48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8027EF4C
  cmps(c,0,(int32_t)c->r[0],-17); // 8027EF50
  if (crb(c,1)) { IRQCHK(c); goto L_8027EEE8; } // 8027EF54
L_8027EF58:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8027EF58
  c->r[4]=c->r[1]+0x00000008u; // 8027EF5C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8027EF60
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8027EF64
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 8027EF68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 8027EF6C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 8027EF70
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 8027EF74
  c->lr=0x8027EF7Cu; f_8018342C(c); // 8027EF78
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027EF7C
  c->lr=c->r[0]; // 8027EF80
  c->r[1]=c->r[1]+0x00000020u; // 8027EF84
  return; // 8027EF88
}

// __as__Q34nw4r4math4VEC2FRCQ34nw4r4math4VEC2
void f_8027EF8C(Ctx* __restrict c) {
  trace_call(0x8027EF8Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8027EF8C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027EF90
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8027EF94
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8027EF98
  return; // 8027EF9C
}

// __as__Q34nw4r4math4VEC2FRCQ34nw4r4math4VEC2_8027EFA0
void f_8027EFA0(Ctx* __restrict c) {
  trace_call(0x8027EFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027EFA0
  c->r[0]=c->lr; // 8027EFA4
  c->r[6]=0u+0x80340000u; // 8027EFA8
  c->r[4]=0u+0x800D0000u; // 8027EFAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027EFB0
  c->r[5]=0u+0x80070000u; // 8027EFB4
  c->r[8]=c->r[3]+0x00000008u; // 8027EFB8
  c->r[6]=c->r[6]+0x000053B0u; // 8027EFBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8027EFC0
  c->r[31]=0u+0x00000000u; // 8027EFC4
  c->r[4]=c->r[4]+0x0000797Cu; // 8027EFC8
  c->r[5]=c->r[5]+0xFFFF8B68u; // 8027EFCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8027EFD0
  c->r[30]=c->r[3]|c->r[3]; // 8027EFD4
  c->r[7]=0u+0x00000004u; // 8027EFD8
  W32(c->r[3]+0x00000008u,c->r[31]); // 8027EFDC
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8027EFE0
  W32(c->r[3]+0x00000000u,c->r[6]); // 8027EFE4
  c->r[6]=0u+0x00000004u; // 8027EFE8
  W32(c->r[3]+0x00000004u,c->r[31]); // 8027EFEC
  W32(c->r[3]+0x00000008u,c->r[8]); // 8027EFF0
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 8027EFF4
  c->r[3]=c->r[3]+0x00000028u; // 8027EFF8
  c->lr=0x8027F000u; f_80185B6C(c); // 8027EFFC
  c->r[5]=c->r[2]+0xFFFFA2D8u; // 8027F000
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8027F004
  c->r[3]=R32(c->r[30]+0x00000038u); // 8027F008
  c->r[7]=0u+0x000000FFu; // 8027F00C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFA2D8u); // 8027F010
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8027F014
  c->r[6]=rotl(c->r[3],0)&0x0000001Fu; // 8027F018
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8027F01C
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 8027F020
  c->r[3]=c->r[30]+0x00000044u; // 8027F024
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 8027F028
  c->r[5]=0u+0x00000015u; // 8027F02C
  W16(c->r[30]+0x00000012u,c->r[4]); // 8027F030
  c->r[4]=0u+0x00000000u; // 8027F034
  W16(c->r[30]+0x00000010u,c->r[10]); // 8027F038
  W16(c->r[30]+0x00000014u,c->r[9]); // 8027F03C
  W16(c->r[30]+0x00000016u,c->r[8]); // 8027F040
  W16(c->r[30]+0x00000018u,c->r[7]); // 8027F044
  W16(c->r[30]+0x0000001Au,c->r[7]); // 8027F048
  W16(c->r[30]+0x0000001Cu,c->r[7]); // 8027F04C
  W16(c->r[30]+0x0000001Eu,c->r[7]); // 8027F050
  W16(c->r[30]+0x00000020u,c->r[7]); // 8027F054
  W16(c->r[30]+0x00000022u,c->r[7]); // 8027F058
  W16(c->r[30]+0x00000024u,c->r[7]); // 8027F05C
  W16(c->r[30]+0x00000026u,c->r[7]); // 8027F060
  W32(c->r[30]+0x00000038u,c->r[6]); // 8027F064
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 8027F068
  W8(c->r[30]+0x00000059u,c->r[31]); // 8027F06C
  W32(c->r[30]+0x00000040u,c->r[31]); // 8027F070
  c->lr=0x8027F078u; f_80004688(c); // 8027F074
  c->r[3]=c->r[30]|c->r[30]; // 8027F078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8027F07C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8027F080
  c->r[0]=R32(c->r[1]+0x00000014u); // 8027F084
  c->lr=c->r[0]; // 8027F088
  c->r[1]=c->r[1]+0x00000010u; // 8027F08C
  return; // 8027F090
}

// fn_8027F094
void f_8027F094(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8027F094
  c->r[4]=c->r[3]+0x00000004u; // 8027F098
  W32(c->r[3]+0x00000004u,c->r[0]); // 8027F09C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8027F0A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8027F0A4
  W32(c->r[3]+0x00000004u,c->r[4]); // 8027F0A8
  W32(c->r[3]+0x00000008u,c->r[4]); // 8027F0AC
  return; // 8027F0B0
}

// __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet
void f_8027F0B4(Ctx* __restrict c) {
  trace_call(0x8027F0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027F0B4
  c->r[0]=c->lr; // 8027F0B8
  W32(c->r[1]+0x00000084u,c->r[0]); // 8027F0BC
  c->r[11]=c->r[1]+0x00000080u; // 8027F0C0
  c->lr=0x8027F0C8u; f_80185EA0(c); // 8027F0C4
  c->r[6]=0u+0x80340000u; // 8027F0C8
  c->r[17]=c->r[3]|c->r[3]; // 8027F0CC
  c->r[6]=c->r[6]+0x000053B0u; // 8027F0D0
  c->r[18]=c->r[4]|c->r[4]; // 8027F0D4
  W32(c->r[3]+0x00000000u,c->r[6]); // 8027F0D8
  c->r[19]=c->r[5]|c->r[5]; // 8027F0DC
  c->r[3]=c->r[3]+0x00000004u; // 8027F0E0
  c->lr=0x8027F0E8u; f_8027F094(c); // 8027F0E4
  c->r[4]=0u+0x800D0000u; // 8027F0E8
  c->r[5]=0u+0x80070000u; // 8027F0EC
  c->r[3]=c->r[17]+0x00000028u; // 8027F0F0
  c->r[6]=0u+0x00000004u; // 8027F0F4
  c->r[4]=c->r[4]+0x0000797Cu; // 8027F0F8
  c->r[5]=c->r[5]+0xFFFF8B68u; // 8027F0FC
  c->r[7]=0u+0x00000004u; // 8027F100
  c->lr=0x8027F108u; f_80185B6C(c); // 8027F104
  c->r[3]=c->r[17]|c->r[17]; // 8027F108
  c->lr=0x8027F110u; f_8027FA3C(c); // 8027F10C
  c->r[3]=c->r[17]|c->r[17]; // 8027F110
  c->r[4]=c->r[18]|c->r[18]; // 8027F114
  c->lr=0x8027F11Cu; f_80280548(c); // 8027F118
  c->r[14]=c->r[18]+0x00000014u; // 8027F11C
  c->r[15]=c->r[17]+0x00000010u; // 8027F120
  c->r[16]=0u+0x00000000u; // 8027F124
L_8027F128:;
  c->r[3]=c->r[15]|c->r[15]; // 8027F128
  c->r[4]=c->r[14]|c->r[14]; // 8027F12C
  c->lr=0x8027F134u; f_8027F718(c); // 8027F130
  c->r[16]=c->r[16]+0x00000001u; // 8027F134
  c->r[15]=c->r[15]+0x00000008u; // 8027F138
  cmps(c,0,(int32_t)c->r[16],3); // 8027F13C
  c->r[14]=c->r[14]+0x00000008u; // 8027F140
  if (crb(c,0)) { IRQCHK(c); goto L_8027F128; } // 8027F144
  c->r[14]=c->r[18]+0x0000002Cu; // 8027F148
  c->r[15]=c->r[17]+0x00000028u; // 8027F14C
  c->r[16]=0u+0x00000000u; // 8027F150
L_8027F154:;
  c->r[3]=c->r[15]|c->r[15]; // 8027F154
  c->r[4]=c->r[14]|c->r[14]; // 8027F158
  c->lr=0x8027F160u; f_8027F73C(c); // 8027F15C
  c->r[16]=c->r[16]+0x00000001u; // 8027F160
  c->r[15]=c->r[15]+0x00000004u; // 8027F164
  cmps(c,0,(int32_t)c->r[16],4); // 8027F168
  c->r[14]=c->r[14]+0x00000004u; // 8027F16C
  if (crb(c,0)) { IRQCHK(c); goto L_8027F154; } // 8027F170
  c->r[3]=c->r[18]|c->r[18]; // 8027F174
  c->r[4]=0u+0x00000040u; // 8027F178
  c->lr=0x8027F180u; f_8027FA34(c); // 8027F17C
  c->r[28]=c->r[3]|c->r[3]; // 8027F180
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F184
  c->lr=0x8027F18Cu; f_8027F748(c); // 8027F188
  c->r[4]=rotl(c->r[3],2)&0x000003FCu; // 8027F18C
  c->r[3]=c->r[18]|c->r[18]; // 8027F190
  c->r[25]=c->r[4]+0x00000040u; // 8027F194
  c->r[4]=c->r[25]|c->r[25]; // 8027F198
  c->lr=0x8027F1A0u; f_8027FA2C(c); // 8027F19C
  c->r[24]=c->r[3]|c->r[3]; // 8027F1A0
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F1A4
  c->lr=0x8027F1ACu; f_8027F754(c); // 8027F1A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8027F1AC
  c->r[3]=c->r[18]|c->r[18]; // 8027F1B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8027F1B4
  c->r[25]=c->r[25]+c->r[0]; // 8027F1B8
  c->r[4]=c->r[25]|c->r[25]; // 8027F1BC
  c->lr=0x8027F1C4u; f_8027FA24(c); // 8027F1C0
  c->r[23]=c->r[3]|c->r[3]; // 8027F1C4
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F1C8
  c->lr=0x8027F1D0u; f_8027F760(c); // 8027F1CC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8027F1D0
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F1D4
  c->r[25]=c->r[25]+c->r[0]; // 8027F1D8
  c->lr=0x8027F1E0u; f_8027F748(c); // 8027F1DC
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8027F1E0
  c->r[4]=0u+0x00000008u; // 8027F1E4
  c->lr=0x8027F1ECu; f_8027FA14(c); // 8027F1E8
  c->r[15]=c->r[3]|c->r[3]; // 8027F1EC
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F1F0
  c->lr=0x8027F1F8u; f_8027F754(c); // 8027F1F4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8027F1F8
  c->r[4]=0u+0x0000000Au; // 8027F1FC
  c->lr=0x8027F204u; f_8027FA14(c); // 8027F200
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8027F204
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F208
  c->lr=0x8027F210u; f_8027F760(c); // 8027F20C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8027F210
  c->r[4]=0u+0x00000008u; // 8027F214
  c->lr=0x8027F21Cu; f_8027FA14(c); // 8027F218
  W32(c->r[1]+0x00000020u,c->r[3]); // 8027F21C
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F220
  c->lr=0x8027F228u; f_8027F76C(c); // 8027F224
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8027F228
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F22C
  c->r[0]=0u-c->r[4]; // 8027F230
  c->r[0]=c->r[0]|c->r[4]; // 8027F234
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8027F238
  W8(c->r[1]+0x0000001Au,c->r[0]); // 8027F23C
  c->lr=0x8027F244u; f_8027F778(c); // 8027F240
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8027F244
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F248
  c->r[0]=0u-c->r[4]; // 8027F24C
  c->r[0]=c->r[0]|c->r[4]; // 8027F250
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8027F254
  W8(c->r[1]+0x00000019u,c->r[0]); // 8027F258
  c->lr=0x8027F260u; f_8027F784(c); // 8027F25C
  W8(c->r[1]+0x00000018u,c->r[3]); // 8027F260
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F264
  c->lr=0x8027F26Cu; f_8027F790(c); // 8027F268
  W32(c->r[1]+0x00000024u,c->r[3]); // 8027F26C
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F270
  c->lr=0x8027F278u; f_8027F79C(c); // 8027F274
  W32(c->r[1]+0x00000028u,c->r[3]); // 8027F278
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F27C
  c->lr=0x8027F284u; f_8027F7A8(c); // 8027F280
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8027F284
  c->r[4]=0u+0x00000003u; // 8027F288
  c->lr=0x8027F290u; f_8027FA14(c); // 8027F28C
  c->r[29]=c->r[3]|c->r[3]; // 8027F290
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F294
  c->lr=0x8027F29Cu; f_8027F7B4(c); // 8027F298
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8027F29C
  c->r[4]=0u+0x00000004u; // 8027F2A0
  c->lr=0x8027F2A8u; f_8027FA14(c); // 8027F2A4
  c->r[30]=c->r[3]|c->r[3]; // 8027F2A8
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F2AC
  c->lr=0x8027F2B4u; f_8027F7C0(c); // 8027F2B0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8027F2B4
  c->r[4]=0u+0x00000010u; // 8027F2B8
  c->lr=0x8027F2C0u; f_8027FA14(c); // 8027F2BC
  c->r[0]=R8(c->r[1]+0x0000001Au); // 8027F2C0
  c->r[14]=c->r[3]|c->r[3]; // 8027F2C4
  c->r[8]=R8(c->r[1]+0x00000018u); // 8027F2C8
  c->r[3]=c->r[17]|c->r[17]; // 8027F2CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8027F2D0
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 8027F2D4
  c->r[0]=R8(c->r[1]+0x00000019u); // 8027F2D8
  c->r[7]=rotl(c->r[14],0)&0x000000FFu; // 8027F2DC
  c->r[9]=rotl(c->r[30],0)&0x000000FFu; // 8027F2E0
  c->r[10]=rotl(c->r[29],0)&0x000000FFu; // 8027F2E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8027F2E8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8027F2EC
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8027F2F0
  c->r[0]=R32(c->r[1]+0x00000020u); // 8027F2F4
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 8027F2F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027F2FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8027F300
  c->r[0]=R32(c->r[1]+0x00000028u); // 8027F304
  W32(c->r[1]+0x00000014u,c->r[0]); // 8027F308
  c->lr=0x8027F310u; f_8027FB58(c); // 8027F30C
  c->r[0]=R32(c->r[17]+0x00000040u); // 8027F310
  cmps(c,0,(int32_t)c->r[0],0); // 8027F314
  if (crb(c,2)) { goto L_8027F6FC; } // 8027F318
  c->r[3]=c->r[17]|c->r[17]; // 8027F31C
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 8027F320
  c->lr=0x8027F328u; f_80280584(c); // 8027F324
  c->r[0]=rotl(c->r[15],0)&0x000000FFu; cr0(c,c->r[0]); // 8027F328
  if (crb(c,2)) { goto L_8027F420; } // 8027F32C
  c->r[3]=R32(c->r[19]+0x00000000u); // 8027F330
  c->r[4]=0u+0x0000000Cu; // 8027F334
  c->lr=0x8027F33Cu; f_8027FA0C(c); // 8027F338
  c->r[22]=c->r[3]|c->r[3]; // 8027F33C
  c->r[3]=c->r[17]|c->r[17]; // 8027F340
  c->lr=0x8027F348u; f_802802C4(c); // 8027F344
  c->r[31]=c->r[3]|c->r[3]; // 8027F348
  c->r[16]=rotl(c->r[15],0)&0x000000FFu; // 8027F34C
  c->r[21]=0u+0x00000000u; // 8027F350
  c->r[20]=0u+0x00000000u; // 8027F354
  goto L_8027F408; // 8027F358
L_8027F35C:;
  c->r[15]=rotl(c->r[20],2)&0x000003FCu; // 8027F35C
  c->r[3]=c->r[22]|c->r[22]; // 8027F360
  c->r[0]=R16(c->r[28]+c->r[15]); // 8027F364
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8027F368
  c->r[4]=R32(c->r[22]+c->r[0]); // 8027F36C
  c->lr=0x8027F374u; f_8027FA04(c); // 8027F370
  c->r[5]=c->r[3]|c->r[3]; // 8027F374
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 8027F378
  c->r[4]=0u+0x74690000u; // 8027F37C
  c->r[6]=0u+0x00000000u; // 8027F380
  c->r[12]=R32(c->r[3]+0x00000000u); // 8027F384
  c->r[4]=c->r[4]+0x00006D67u; // 8027F388
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8027F38C
  c->ctr=c->r[12]; // 8027F390
  if (true) { c->lr=0x8027F398u; dispatch(c,c->ctr); } // 8027F394
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 8027F398
  c->r[4]=c->r[3]|c->r[3]; // 8027F39C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8027F3A0
  c->r[5]=0u+0x00000000u; // 8027F3A4
  c->r[26]=c->r[31]+c->r[0]; // 8027F3A8
  c->r[3]=c->r[26]|c->r[26]; // 8027F3AC
  c->lr=0x8027F3B4u; f_80281D9C(c); // 8027F3B0
  c->r[27]=c->r[28]+c->r[15]; // 8027F3B4
  c->r[3]=c->r[27]|c->r[27]; // 8027F3B8
  c->lr=0x8027F3C0u; f_8027F7EC(c); // 8027F3BC
  c->r[15]=c->r[3]|c->r[3]; // 8027F3C0
  c->r[3]=c->r[27]|c->r[27]; // 8027F3C4
  c->lr=0x8027F3CCu; f_8027F7E0(c); // 8027F3C8
  c->r[4]=c->r[3]|c->r[3]; // 8027F3CC
  c->r[3]=c->r[26]|c->r[26]; // 8027F3D0
  c->r[5]=c->r[15]|c->r[15]; // 8027F3D4
  c->lr=0x8027F3DCu; f_8027F7CC(c); // 8027F3D8
  c->r[3]=c->r[27]|c->r[27]; // 8027F3DC
  c->lr=0x8027F3E4u; f_8027F820(c); // 8027F3E0
  c->r[15]=c->r[3]|c->r[3]; // 8027F3E4
  c->r[3]=c->r[27]|c->r[27]; // 8027F3E8
  c->lr=0x8027F3F0u; f_8027F80C(c); // 8027F3EC
  c->r[4]=c->r[3]|c->r[3]; // 8027F3F0
  c->r[3]=c->r[26]|c->r[26]; // 8027F3F4
  c->r[5]=c->r[15]|c->r[15]; // 8027F3F8
  c->lr=0x8027F400u; f_8027F7F8(c); // 8027F3FC
  c->r[21]=c->r[21]+0x00000001u; // 8027F400
  c->r[20]=c->r[20]+0x00000001u; // 8027F404
L_8027F408:;
  c->r[0]=rotl(c->r[20],0)&0x000000FFu; // 8027F408
  cmpu(c,0,c->r[0],c->r[16]); // 8027F40C
  if (crb(c,0)) { IRQCHK(c); goto L_8027F35C; } // 8027F410
  c->r[3]=c->r[17]|c->r[17]; // 8027F414
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 8027F418
  c->lr=0x8027F420u; f_80280584(c); // 8027F41C
L_8027F420:;
  c->r[3]=c->r[17]|c->r[17]; // 8027F420
  c->lr=0x8027F428u; f_802802CC(c); // 8027F424
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8027F428
  c->r[16]=c->r[3]|c->r[3]; // 8027F42C
  c->r[19]=c->r[24]|c->r[24]; // 8027F430
  c->r[20]=0u+0x00000000u; // 8027F434
  c->r[15]=rotl(c->r[0],0)&0x000000FFu; // 8027F438
  goto L_8027F470; // 8027F43C
L_8027F440:;
  c->r[3]=c->r[16]|c->r[16]; // 8027F440
  c->r[4]=c->r[24]|c->r[24]; // 8027F444
  c->lr=0x8027F44Cu; f_8027EF8C(c); // 8027F448
  {uint32_t ea=c->r[19]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027F44C
  c->r[3]=c->r[16]+0x0000000Cu; // 8027F450
  c->r[4]=c->r[24]+0x0000000Cu; // 8027F454
  {uint32_t ea=c->r[16]+0x00000008u; WF32(ea,c->f[0]);} // 8027F458
  c->lr=0x8027F460u; f_8027EF8C(c); // 8027F45C
  c->r[24]=c->r[24]+0x00000014u; // 8027F460
  c->r[16]=c->r[16]+0x00000014u; // 8027F464
  c->r[19]=c->r[19]+0x00000014u; // 8027F468
  c->r[20]=c->r[20]+0x00000001u; // 8027F46C
L_8027F470:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 8027F470
  if (crb(c,0)) { IRQCHK(c); goto L_8027F440; } // 8027F474
  c->r[3]=c->r[17]|c->r[17]; // 8027F478
  c->lr=0x8027F480u; f_802802E4(c); // 8027F47C
  c->r[0]=R32(c->r[1]+0x00000020u); // 8027F480
  c->r[15]=c->r[3]|c->r[3]; // 8027F484
  c->r[3]=c->r[17]|c->r[17]; // 8027F488
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8027F48C
  c->lr=0x8027F494u; f_80280614(c); // 8027F490
  c->r[16]=0u+0x00000000u; // 8027F494
  goto L_8027F4B4; // 8027F498
L_8027F49C:;
  c->r[3]=c->r[15]|c->r[15]; // 8027F49C
  c->r[4]=c->r[23]|c->r[23]; // 8027F4A0
  c->lr=0x8027F4A8u; f_8027F834(c); // 8027F4A4
  c->r[23]=c->r[23]+0x00000004u; // 8027F4A8
  c->r[15]=c->r[15]+0x00000004u; // 8027F4AC
  c->r[16]=c->r[16]+0x00000001u; // 8027F4B0
L_8027F4B4:;
  c->r[0]=R32(c->r[17]+0x0000003Cu); // 8027F4B4
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 8027F4B8
  cmpu(c,0,c->r[16],c->r[0]); // 8027F4BC
  if (crb(c,0)) { IRQCHK(c); goto L_8027F49C; } // 8027F4C0
  c->r[0]=R8(c->r[1]+0x0000001Au); // 8027F4C4
  cmps(c,0,(int32_t)c->r[0],0); // 8027F4C8
  if (crb(c,2)) { goto L_8027F4F4; } // 8027F4CC
  c->r[3]=c->r[18]|c->r[18]; // 8027F4D0
  c->r[4]=c->r[25]|c->r[25]; // 8027F4D4
  c->lr=0x8027F4DCu; f_8027F9FC(c); // 8027F4D8
  c->r[15]=c->r[3]|c->r[3]; // 8027F4DC
  c->r[3]=c->r[17]|c->r[17]; // 8027F4E0
  c->lr=0x8027F4E8u; f_80280308(c); // 8027F4E4
  c->r[4]=c->r[15]|c->r[15]; // 8027F4E8
  c->lr=0x8027F4F0u; f_8027F858(c); // 8027F4EC
  c->r[25]=c->r[25]+0x00000004u; // 8027F4F0
L_8027F4F4:;
  c->r[0]=R8(c->r[1]+0x00000019u); // 8027F4F4
  cmps(c,0,(int32_t)c->r[0],0); // 8027F4F8
  if (crb(c,2)) { goto L_8027F524; } // 8027F4FC
  c->r[3]=c->r[18]|c->r[18]; // 8027F500
  c->r[4]=c->r[25]|c->r[25]; // 8027F504
  c->lr=0x8027F50Cu; f_8027F9F4(c); // 8027F508
  c->r[15]=c->r[3]|c->r[3]; // 8027F50C
  c->r[3]=c->r[17]|c->r[17]; // 8027F510
  c->lr=0x8027F518u; f_80280334(c); // 8027F514
  c->r[4]=c->r[15]|c->r[15]; // 8027F518
  c->lr=0x8027F520u; f_801399EC(c); // 8027F51C
  c->r[25]=c->r[25]+0x00000004u; // 8027F520
L_8027F524:;
  c->r[0]=R8(c->r[1]+0x00000018u); // 8027F524
  cmps(c,0,(int32_t)c->r[0],0); // 8027F528
  if (crb(c,2)) { goto L_8027F56C; } // 8027F52C
  c->r[3]=c->r[18]|c->r[18]; // 8027F530
  c->r[4]=c->r[25]|c->r[25]; // 8027F534
  c->lr=0x8027F53Cu; f_8027F9EC(c); // 8027F538
  c->r[16]=c->r[3]|c->r[3]; // 8027F53C
  c->r[3]=c->r[17]|c->r[17]; // 8027F540
  c->lr=0x8027F548u; f_80280368(c); // 8027F544
  c->r[15]=c->r[3]|c->r[3]; // 8027F548
  c->r[19]=0u+0x00000000u; // 8027F54C
L_8027F550:;
  c->r[3]=c->r[15]+c->r[19]; // 8027F550
  c->r[4]=c->r[16]+c->r[19]; // 8027F554
  c->lr=0x8027F55Cu; f_8027F87C(c); // 8027F558
  c->r[19]=c->r[19]+0x00000001u; // 8027F55C
  cmps(c,0,(int32_t)c->r[19],4); // 8027F560
  if (crb(c,0)) { IRQCHK(c); goto L_8027F550; } // 8027F564
  c->r[25]=c->r[25]+0x00000004u; // 8027F568
L_8027F56C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 8027F56C
  if (crb(c,2)) { goto L_8027F5BC; } // 8027F570
  c->r[3]=c->r[17]|c->r[17]; // 8027F574
  c->lr=0x8027F57Cu; f_80280488(c); // 8027F578
  c->r[19]=c->r[3]|c->r[3]; // 8027F57C
  c->r[3]=c->r[18]|c->r[18]; // 8027F580
  c->r[4]=c->r[25]|c->r[25]; // 8027F584
  c->lr=0x8027F58Cu; f_8027FA2C(c); // 8027F588
  c->r[16]=c->r[3]|c->r[3]; // 8027F58C
  c->r[15]=rotl(c->r[29],0)&0x000000FFu; // 8027F590
  c->r[20]=0u+0x00000000u; // 8027F594
  goto L_8027F5B4; // 8027F598
L_8027F59C:;
  c->r[3]=c->r[19]|c->r[19]; // 8027F59C
  c->r[4]=c->r[16]|c->r[16]; // 8027F5A0
  c->lr=0x8027F5A8u; f_8027F888(c); // 8027F5A4
  c->r[16]=c->r[16]+0x00000014u; // 8027F5A8
  c->r[19]=c->r[19]+0x00000014u; // 8027F5AC
  c->r[20]=c->r[20]+0x00000001u; // 8027F5B0
L_8027F5B4:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 8027F5B4
  if (crb(c,0)) { IRQCHK(c); goto L_8027F59C; } // 8027F5B8
L_8027F5BC:;
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F5BC
  c->lr=0x8027F5C4u; f_8027F7A8(c); // 8027F5C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8027F5C4
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 8027F5C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8027F5CC
  c->r[25]=c->r[25]+c->r[0]; // 8027F5D0
  if (crb(c,2)) { goto L_8027F628; } // 8027F5D4
  c->r[3]=c->r[17]|c->r[17]; // 8027F5D8
  c->lr=0x8027F5E0u; f_802807BC(c); // 8027F5DC
  c->r[3]=c->r[17]|c->r[17]; // 8027F5E0
  c->lr=0x8027F5E8u; f_80280434(c); // 8027F5E4
  c->r[19]=c->r[3]|c->r[3]; // 8027F5E8
  c->r[3]=c->r[18]|c->r[18]; // 8027F5EC
  c->r[4]=c->r[25]|c->r[25]; // 8027F5F0
  c->lr=0x8027F5F8u; f_8027F9E4(c); // 8027F5F4
  c->r[16]=c->r[3]|c->r[3]; // 8027F5F8
  c->r[15]=rotl(c->r[30],0)&0x000000FFu; // 8027F5FC
  c->r[20]=0u+0x00000000u; // 8027F600
  goto L_8027F620; // 8027F604
L_8027F608:;
  c->r[3]=c->r[19]|c->r[19]; // 8027F608
  c->r[4]=c->r[16]|c->r[16]; // 8027F60C
  c->lr=0x8027F614u; f_8027F8B4(c); // 8027F610
  c->r[16]=c->r[16]+0x00000004u; // 8027F614
  c->r[19]=c->r[19]+0x00000004u; // 8027F618
  c->r[20]=c->r[20]+0x00000001u; // 8027F61C
L_8027F620:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 8027F620
  if (crb(c,0)) { IRQCHK(c); goto L_8027F608; } // 8027F624
L_8027F628:;
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F628
  c->lr=0x8027F630u; f_8027F7B4(c); // 8027F62C
  c->r[4]=rotl(c->r[14],0)&0x000000FFu; cr0(c,c->r[4]); // 8027F630
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8027F634
  c->r[25]=c->r[25]+c->r[0]; // 8027F638
  if (crb(c,2)) { goto L_8027F690; } // 8027F63C
  c->r[3]=c->r[17]|c->r[17]; // 8027F640
  c->lr=0x8027F648u; f_8028069C(c); // 8027F644
  c->r[3]=c->r[17]|c->r[17]; // 8027F648
  c->lr=0x8027F650u; f_802804E4(c); // 8027F64C
  c->r[16]=c->r[3]|c->r[3]; // 8027F650
  c->r[3]=c->r[18]|c->r[18]; // 8027F654
  c->r[4]=c->r[25]|c->r[25]; // 8027F658
  c->lr=0x8027F660u; f_8027F9DC(c); // 8027F65C
  c->r[15]=c->r[3]|c->r[3]; // 8027F660
  c->r[14]=rotl(c->r[14],0)&0x000000FFu; // 8027F664
  c->r[19]=0u+0x00000000u; // 8027F668
  goto L_8027F688; // 8027F66C
L_8027F670:;
  c->r[3]=c->r[16]|c->r[16]; // 8027F670
  c->r[4]=c->r[15]|c->r[15]; // 8027F674
  c->lr=0x8027F67Cu; f_8027F8D8(c); // 8027F678
  c->r[15]=c->r[15]+0x00000010u; // 8027F67C
  c->r[16]=c->r[16]+0x00000010u; // 8027F680
  c->r[19]=c->r[19]+0x00000001u; // 8027F684
L_8027F688:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[14]); // 8027F688
  if (crb(c,0)) { IRQCHK(c); goto L_8027F670; } // 8027F68C
L_8027F690:;
  c->r[3]=c->r[18]+0x0000003Cu; // 8027F690
  c->lr=0x8027F698u; f_8027F7C0(c); // 8027F694
  c->r[0]=R32(c->r[1]+0x00000024u); // 8027F698
  cmps(c,0,(int32_t)c->r[0],0); // 8027F69C
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 8027F6A0
  c->r[25]=c->r[25]+c->r[0]; // 8027F6A4
  if (crb(c,2)) { goto L_8027F6D0; } // 8027F6A8
  c->r[3]=c->r[18]|c->r[18]; // 8027F6AC
  c->r[4]=c->r[25]|c->r[25]; // 8027F6B0
  c->lr=0x8027F6B8u; f_8027F9D4(c); // 8027F6B4
  c->r[14]=c->r[3]|c->r[3]; // 8027F6B8
  c->r[3]=c->r[17]|c->r[17]; // 8027F6BC
  c->lr=0x8027F6C4u; f_802803A4(c); // 8027F6C0
  c->r[4]=c->r[14]|c->r[14]; // 8027F6C4
  c->lr=0x8027F6CCu; f_8027F984(c); // 8027F6C8
  c->r[25]=c->r[25]+0x00000004u; // 8027F6CC
L_8027F6D0:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 8027F6D0
  cmps(c,0,(int32_t)c->r[0],0); // 8027F6D4
  if (crb(c,2)) { goto L_8027F6FC; } // 8027F6D8
  c->r[3]=c->r[18]|c->r[18]; // 8027F6DC
  c->r[4]=c->r[25]|c->r[25]; // 8027F6E0
  c->lr=0x8027F6E8u; f_8027F9CC(c); // 8027F6E4
  c->r[14]=c->r[3]|c->r[3]; // 8027F6E8
  c->r[3]=c->r[17]|c->r[17]; // 8027F6EC
  c->lr=0x8027F6F4u; f_802803E8(c); // 8027F6F0
  c->r[4]=c->r[14]|c->r[14]; // 8027F6F4
  c->lr=0x8027F6FCu; f_8027F9A8(c); // 8027F6F8
L_8027F6FC:;
  c->r[11]=c->r[1]+0x00000080u; // 8027F6FC
  c->r[3]=c->r[17]|c->r[17]; // 8027F700
  c->lr=0x8027F708u; f_80185EEC(c); // 8027F704
  c->r[0]=R32(c->r[1]+0x00000084u); // 8027F708
  c->lr=c->r[0]; // 8027F70C
  c->r[1]=c->r[1]+0x00000080u; // 8027F710
  return; // 8027F714
}

// __as__11_GXColorS10FRC11_GXColorS10
void f_8027F718(Ctx* __restrict c) {
  trace_call(0x8027F718u);
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 8027F718
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8027F71C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8027F720
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8027F724
  W16(c->r[3]+0x00000000u,c->r[7]); // 8027F728
  W16(c->r[3]+0x00000002u,c->r[6]); // 8027F72C
  W16(c->r[3]+0x00000004u,c->r[5]); // 8027F730
  W16(c->r[3]+0x00000006u,c->r[0]); // 8027F734
  return; // 8027F738
}

// __as__Q34nw4r2ut5ColorFRC8_GXColor
void f_8027F73C(Ctx* __restrict c) {
  trace_call(0x8027F73Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8027F73C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8027F740
  return; // 8027F744
}

// GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F748(Ctx* __restrict c) {
  trace_call(0x8027F748u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F748
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 8027F74C
  return; // 8027F750
}

// GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F754(Ctx* __restrict c) {
  trace_call(0x8027F754u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F754
  c->r[3]=rotl(c->r[0],28)&0x0000000Fu; // 8027F758
  return; // 8027F75C
}

// GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F760(Ctx* __restrict c) {
  trace_call(0x8027F760u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F760
  c->r[3]=rotl(c->r[0],24)&0x0000000Fu; // 8027F764
  return; // 8027F768
}

// GetChanCtrlNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F76C(Ctx* __restrict c) {
  trace_call(0x8027F76Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F76C
  c->r[3]=rotl(c->r[0],7)&0x00000001u; // 8027F770
  return; // 8027F774
}

// GetMatColNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F778(Ctx* __restrict c) {
  trace_call(0x8027F778u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F778
  c->r[3]=rotl(c->r[0],5)&0x00000001u; // 8027F77C
  return; // 8027F780
}

// HasTevSwapTable__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F784(Ctx* __restrict c) {
  trace_call(0x8027F784u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F784
  c->r[3]=rotl(c->r[0],20)&0x00000001u; // 8027F788
  return; // 8027F78C
}

// HasAlphaCompare__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F790(Ctx* __restrict c) {
  trace_call(0x8027F790u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F790
  c->r[3]=rotl(c->r[0],9)&0x00000001u; // 8027F794
  return; // 8027F798
}

// HasBlendMode__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F79C(Ctx* __restrict c) {
  trace_call(0x8027F79Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F79C
  c->r[3]=rotl(c->r[0],8)&0x00000001u; // 8027F7A0
  return; // 8027F7A4
}

// GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F7A8(Ctx* __restrict c) {
  trace_call(0x8027F7A8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F7A8
  c->r[3]=rotl(c->r[0],19)&0x00000003u; // 8027F7AC
  return; // 8027F7B0
}

// GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F7B4(Ctx* __restrict c) {
  trace_call(0x8027F7B4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F7B4
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 8027F7B8
  return; // 8027F7BC
}

// GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_8027F7C0(Ctx* __restrict c) {
  trace_call(0x8027F7C0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8027F7C0
  c->r[3]=rotl(c->r[0],14)&0x0000001Fu; // 8027F7C4
  return; // 8027F7C8
}

// SetWrapMode__Q34nw4r3lyt6TexMapF14_GXTexWrapMode14_GXTexWrapMode
void f_8027F7CC(Ctx* __restrict c) {
  trace_call(0x8027F7CCu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 8027F7CC
  c->r[0]=(rotl(c->r[4],25)&0x06000000u)|(c->r[0]&~0x06000000u); // 8027F7D0
  c->r[0]=(rotl(c->r[5],23)&0x01800000u)|(c->r[0]&~0x01800000u); // 8027F7D4
  W32(c->r[3]+0x00000018u,c->r[0]); // 8027F7D8
  return; // 8027F7DC
}

// GetWarpModeS__Q44nw4r3lyt3res6TexMapCFv
void f_8027F7E0(Ctx* __restrict c) {
  trace_call(0x8027F7E0u);
  c->r[0]=R8(c->r[3]+0x00000002u); // 8027F7E0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 8027F7E4
  return; // 8027F7E8
}

// GetWarpModeT__Q44nw4r3lyt3res6TexMapCFv
void f_8027F7EC(Ctx* __restrict c) {
  trace_call(0x8027F7ECu);
  c->r[0]=R8(c->r[3]+0x00000003u); // 8027F7EC
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 8027F7F0
  return; // 8027F7F4
}

// SetFilter__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilter
void f_8027F7F8(Ctx* __restrict c) {
  trace_call(0x8027F7F8u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 8027F7F8
  c->r[0]=(rotl(c->r[4],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 8027F7FC
  c->r[0]=(rotl(c->r[5],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 8027F800
  W32(c->r[3]+0x00000018u,c->r[0]); // 8027F804
  return; // 8027F808
}

// GetMinFilter__Q44nw4r3lyt3res6TexMapCFv
void f_8027F80C(Ctx* __restrict c) {
  trace_call(0x8027F80Cu);
  c->r[0]=R8(c->r[3]+0x00000002u); // 8027F80C
  c->r[3]=rotl(c->r[0],30)&0x00000007u; // 8027F810
  c->r[0]=c->r[3]+0x00000001u; // 8027F814
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 8027F818
  return; // 8027F81C
}

// GetMagFilter__Q44nw4r3lyt3res6TexMapCFv
void f_8027F820(Ctx* __restrict c) {
  trace_call(0x8027F820u);
  c->r[0]=R8(c->r[3]+0x00000003u); // 8027F820
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 8027F824
  c->r[0]=c->r[3]+0x00000001u; // 8027F828
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8027F82C
  return; // 8027F830
}

// __as__Q34nw4r3lyt11TexCoordGenFRCQ34nw4r3lyt11TexCoordGen
void f_8027F834(Ctx* __restrict c) {
  trace_call(0x8027F834u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 8027F834
  c->r[6]=R8(c->r[4]+0x00000001u); // 8027F838
  c->r[5]=R8(c->r[4]+0x00000002u); // 8027F83C
  c->r[0]=R8(c->r[4]+0x00000003u); // 8027F840
  W8(c->r[3]+0x00000000u,c->r[7]); // 8027F844
  W8(c->r[3]+0x00000001u,c->r[6]); // 8027F848
  W8(c->r[3]+0x00000002u,c->r[5]); // 8027F84C
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027F850
  return; // 8027F854
}

// __as__Q34nw4r3lyt8ChanCtrlFRCQ34nw4r3lyt8ChanCtrl
void f_8027F858(Ctx* __restrict c) {
  trace_call(0x8027F858u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 8027F858
  c->r[6]=R8(c->r[4]+0x00000001u); // 8027F85C
  c->r[5]=R8(c->r[4]+0x00000002u); // 8027F860
  c->r[0]=R8(c->r[4]+0x00000003u); // 8027F864
  W8(c->r[3]+0x00000000u,c->r[7]); // 8027F868
  W8(c->r[3]+0x00000001u,c->r[6]); // 8027F86C
  W8(c->r[3]+0x00000002u,c->r[5]); // 8027F870
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027F874
  return; // 8027F878
}

// __as__Q34nw4r3lyt11TevSwapModeFRCQ34nw4r3lyt11TevSwapMode
void f_8027F87C(Ctx* __restrict c) {
  trace_call(0x8027F87Cu);
  c->r[0]=R8(c->r[4]+0x00000000u); // 8027F87C
  W8(c->r[3]+0x00000000u,c->r[0]); // 8027F880
  return; // 8027F884
}

// __as__Q34nw4r3lyt6TexSRTFRCQ34nw4r3lyt6TexSRT
void f_8027F888(Ctx* __restrict c) {
  trace_call(0x8027F888u);
  c->r[7]=R32(c->r[4]+0x00000000u); // 8027F888
  c->r[6]=R32(c->r[4]+0x00000004u); // 8027F88C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8027F890
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 8027F894
  c->r[0]=R32(c->r[4]+0x00000010u); // 8027F898
  W32(c->r[3]+0x00000000u,c->r[7]); // 8027F89C
  W32(c->r[3]+0x00000004u,c->r[6]); // 8027F8A0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8027F8A4
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8027F8A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 8027F8AC
  return; // 8027F8B0
}

// __as__Q34nw4r3lyt13IndirectStageFRCQ34nw4r3lyt13IndirectStage
void f_8027F8B4(Ctx* __restrict c) {
  trace_call(0x8027F8B4u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 8027F8B4
  c->r[6]=R8(c->r[4]+0x00000001u); // 8027F8B8
  c->r[5]=R8(c->r[4]+0x00000002u); // 8027F8BC
  c->r[0]=R8(c->r[4]+0x00000003u); // 8027F8C0
  W8(c->r[3]+0x00000000u,c->r[7]); // 8027F8C4
  W8(c->r[3]+0x00000001u,c->r[6]); // 8027F8C8
  W8(c->r[3]+0x00000002u,c->r[5]); // 8027F8CC
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027F8D0
  return; // 8027F8D4
}

// __as__Q34nw4r3lyt8TevStageFRCQ34nw4r3lyt8TevStage
void f_8027F8D8(Ctx* __restrict c) {
  trace_call(0x8027F8D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8027F8D8
  c->r[0]=c->lr; // 8027F8DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8027F8E0
  c->r[11]=c->r[1]+0x00000030u; // 8027F8E4
  c->lr=0x8027F8ECu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8027F8E8
  c->r[25]=R8(c->r[4]+0x00000000u); // 8027F8EC
  c->r[26]=R8(c->r[4]+0x00000001u); // 8027F8F0
  c->r[27]=R8(c->r[4]+0x00000002u); // 8027F8F4
  c->r[28]=R8(c->r[4]+0x00000003u); // 8027F8F8
  c->r[29]=R8(c->r[4]+0x00000004u); // 8027F8FC
  c->r[30]=R8(c->r[4]+0x00000005u); // 8027F900
  c->r[31]=R8(c->r[4]+0x00000006u); // 8027F904
  c->r[12]=R8(c->r[4]+0x00000007u); // 8027F908
  c->r[11]=R8(c->r[4]+0x00000008u); // 8027F90C
  c->r[10]=R8(c->r[4]+0x00000009u); // 8027F910
  c->r[9]=R8(c->r[4]+0x0000000Au); // 8027F914
  c->r[8]=R8(c->r[4]+0x0000000Bu); // 8027F918
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 8027F91C
  c->r[6]=R8(c->r[4]+0x0000000Du); // 8027F920
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 8027F924
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 8027F928
  W8(c->r[3]+0x00000008u,c->r[11]); // 8027F92C
  c->r[11]=c->r[1]+0x00000030u; // 8027F930
  W8(c->r[3]+0x00000000u,c->r[25]); // 8027F934
  W8(c->r[3]+0x00000001u,c->r[26]); // 8027F938
  W8(c->r[3]+0x00000002u,c->r[27]); // 8027F93C
  W8(c->r[3]+0x00000003u,c->r[28]); // 8027F940
  W8(c->r[3]+0x00000004u,c->r[29]); // 8027F944
  W8(c->r[3]+0x00000005u,c->r[30]); // 8027F948
  W8(c->r[3]+0x00000006u,c->r[31]); // 8027F94C
  W8(c->r[3]+0x00000007u,c->r[12]); // 8027F950
  W8(c->r[3]+0x00000009u,c->r[10]); // 8027F954
  W8(c->r[3]+0x0000000Au,c->r[9]); // 8027F958
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 8027F95C
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 8027F960
  W8(c->r[3]+0x0000000Du,c->r[6]); // 8027F964
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 8027F968
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8027F96C
  c->lr=0x8027F974u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8027F970
  c->r[0]=R32(c->r[1]+0x00000034u); // 8027F974
  c->lr=c->r[0]; // 8027F978
  c->r[1]=c->r[1]+0x00000030u; // 8027F97C
  return; // 8027F980
}

// __as__Q34nw4r3lyt12AlphaCompareFRCQ34nw4r3lyt12AlphaCompare
void f_8027F984(Ctx* __restrict c) {
  trace_call(0x8027F984u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 8027F984
  c->r[6]=R8(c->r[4]+0x00000001u); // 8027F988
  c->r[5]=R8(c->r[4]+0x00000002u); // 8027F98C
  c->r[0]=R8(c->r[4]+0x00000003u); // 8027F990
  W8(c->r[3]+0x00000000u,c->r[7]); // 8027F994
  W8(c->r[3]+0x00000001u,c->r[6]); // 8027F998
  W8(c->r[3]+0x00000002u,c->r[5]); // 8027F99C
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027F9A0
  return; // 8027F9A4
}

// __as__Q34nw4r3lyt9BlendModeFRCQ34nw4r3lyt9BlendMode
void f_8027F9A8(Ctx* __restrict c) {
  trace_call(0x8027F9A8u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 8027F9A8
  c->r[6]=R8(c->r[4]+0x00000001u); // 8027F9AC
  c->r[5]=R8(c->r[4]+0x00000002u); // 8027F9B0
  c->r[0]=R8(c->r[4]+0x00000003u); // 8027F9B4
  W8(c->r[3]+0x00000000u,c->r[7]); // 8027F9B8
  W8(c->r[3]+0x00000001u,c->r[6]); // 8027F9BC
  W8(c->r[3]+0x00000002u,c->r[5]); // 8027F9C0
  W8(c->r[3]+0x00000003u,c->r[0]); // 8027F9C4
  return; // 8027F9C8
}

// ConvertOffsToPtr<Q34nw4r3lyt9BlendMode>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt9BlendMode
void f_8027F9CC(Ctx* __restrict c) {
  trace_call(0x8027F9CCu);
  c->r[3]=c->r[3]+c->r[4]; // 8027F9CC
  return; // 8027F9D0
}

