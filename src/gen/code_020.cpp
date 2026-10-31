#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// gap_data_ind
void f_801BF198(Ctx* __restrict c) {
  trace_call(0x801BF198u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF198
  c->r[0]=c->lr; // 801BF19C
  c->r[5]=0u+0x803D0000u; // 801BF1A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF1A4
  c->r[0]=0u+0x00000002u; // 801BF1A8
  c->r[5]=c->r[5]+0xFFFFA8E0u; // 801BF1AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF1B0
  c->r[31]=c->r[5]+0x000000ACu; // 801BF1B4
  c->r[5]=0u+0x00000000u; // 801BF1B8
  c->ctr=c->r[0]; // 801BF1BC
L_801BF1C0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BF1C0
  cmps(c,0,(int32_t)c->r[0],0); // 801BF1C4
  if (crb(c,2)) { goto L_801BF1DC; } // 801BF1C8
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF1CC
  cmpu(c,0,c->r[0],c->r[3]); // 801BF1D0
  if (!crb(c,2)) { goto L_801BF1DC; } // 801BF1D4
  goto L_801BF24C; // 801BF1D8
L_801BF1DC:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BF1DC
  c->r[5]=c->r[5]+0x00000001u; // 801BF1E0
  cmps(c,0,(int32_t)c->r[0],0); // 801BF1E4
  if (crb(c,2)) { goto L_801BF1FC; } // 801BF1E8
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF1EC
  cmpu(c,0,c->r[0],c->r[3]); // 801BF1F0
  if (!crb(c,2)) { goto L_801BF1FC; } // 801BF1F4
  goto L_801BF24C; // 801BF1F8
L_801BF1FC:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BF1FC
  c->r[5]=c->r[5]+0x00000001u; // 801BF200
  cmps(c,0,(int32_t)c->r[0],0); // 801BF204
  if (crb(c,2)) { goto L_801BF21C; } // 801BF208
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF20C
  cmpu(c,0,c->r[0],c->r[3]); // 801BF210
  if (!crb(c,2)) { goto L_801BF21C; } // 801BF214
  goto L_801BF24C; // 801BF218
L_801BF21C:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BF21C
  c->r[5]=c->r[5]+0x00000001u; // 801BF220
  cmps(c,0,(int32_t)c->r[0],0); // 801BF224
  if (crb(c,2)) { goto L_801BF23C; } // 801BF228
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BF22C
  cmpu(c,0,c->r[0],c->r[3]); // 801BF230
  if (!crb(c,2)) { goto L_801BF23C; } // 801BF234
  goto L_801BF24C; // 801BF238
L_801BF23C:;
  c->r[5]=c->r[5]+0x00000001u; // 801BF23C
  c->r[31]=c->r[31]+0x00000060u; // 801BF240
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF1C0; } // 801BF244
  c->r[31]=0u+0x00000000u; // 801BF248
L_801BF24C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BF24C
  if (!crb(c,2)) { goto L_801BF260; } // 801BF250
  c->r[3]=c->r[4]|c->r[4]; // 801BF254
  c->lr=0x801BF25Cu; f_801AA228(c); // 801BF258
  goto L_801BF294; // 801BF25C
L_801BF260:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BF260
  cmpu(c,0,c->r[0],0x00000004u); // 801BF264
  if (!crb(c,2)) { goto L_801BF28C; } // 801BF268
  c->r[3]=c->r[31]+0x00000014u; // 801BF26C
  c->lr=0x801BF274u; f_801AA648(c); // 801BF270
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BF274
  c->r[4]=0u+0x00000102u; // 801BF278
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BF27C
  c->ctr=c->r[12]; // 801BF280
  if (true) { c->lr=0x801BF288u; dispatch(c,c->ctr); } // 801BF284
  goto L_801BF294; // 801BF288
L_801BF28C:;
  c->r[3]=c->r[4]|c->r[4]; // 801BF28C
  c->lr=0x801BF294u; f_801AA228(c); // 801BF290
L_801BF294:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF294
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF298
  c->lr=c->r[0]; // 801BF29C
  c->r[1]=c->r[1]+0x00000010u; // 801BF2A0
  return; // 801BF2A4
}

// gap_congestion_ind
void f_801BF2A8(Ctx* __restrict c) {
  trace_call(0x801BF2A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF2A8
  c->r[0]=c->lr; // 801BF2AC
  c->r[5]=0u+0x803D0000u; // 801BF2B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF2B4
  c->r[5]=c->r[5]+0xFFFFA8E0u; // 801BF2B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF2BC
  c->r[31]=c->r[4]|c->r[4]; // 801BF2C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BF2C4
  c->r[30]=c->r[3]|c->r[3]; // 801BF2C8
  c->r[0]=R8(c->r[5]+0x00000028u); // 801BF2CC
  cmpu(c,0,c->r[0],0x00000004u); // 801BF2D0
  if (crb(c,0)) { goto L_801BF2F4; } // 801BF2D4
  c->r[3]=0u+0x000E0000u; // 801BF2D8
  c->r[4]=0u+0x80330000u; // 801BF2DC
  c->r[5]=c->r[31]|c->r[31]; // 801BF2E0
  c->r[6]=c->r[30]|c->r[30]; // 801BF2E4
  c->r[3]=c->r[3]+0x00000003u; // 801BF2E8
  c->r[4]=c->r[4]+0x00003A70u; // 801BF2EC
  c->lr=0x801BF2F4u; f_801ACB50(c); // 801BF2F0
L_801BF2F4:;
  c->r[3]=0u+0x803D0000u; // 801BF2F4
  c->r[0]=0u+0x00000002u; // 801BF2F8
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BF2FC
  c->r[4]=0u+0x00000000u; // 801BF300
  c->r[3]=c->r[3]+0x000000ACu; // 801BF304
  c->ctr=c->r[0]; // 801BF308
L_801BF30C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BF30C
  cmps(c,0,(int32_t)c->r[0],0); // 801BF310
  if (crb(c,2)) { goto L_801BF328; } // 801BF314
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BF318
  cmpu(c,0,c->r[0],c->r[30]); // 801BF31C
  if (!crb(c,2)) { goto L_801BF328; } // 801BF320
  goto L_801BF398; // 801BF324
L_801BF328:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801BF328
  c->r[4]=c->r[4]+0x00000001u; // 801BF32C
  cmps(c,0,(int32_t)c->r[0],0); // 801BF330
  if (crb(c,2)) { goto L_801BF348; } // 801BF334
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BF338
  cmpu(c,0,c->r[0],c->r[30]); // 801BF33C
  if (!crb(c,2)) { goto L_801BF348; } // 801BF340
  goto L_801BF398; // 801BF344
L_801BF348:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801BF348
  c->r[4]=c->r[4]+0x00000001u; // 801BF34C
  cmps(c,0,(int32_t)c->r[0],0); // 801BF350
  if (crb(c,2)) { goto L_801BF368; } // 801BF354
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BF358
  cmpu(c,0,c->r[0],c->r[30]); // 801BF35C
  if (!crb(c,2)) { goto L_801BF368; } // 801BF360
  goto L_801BF398; // 801BF364
L_801BF368:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801BF368
  c->r[4]=c->r[4]+0x00000001u; // 801BF36C
  cmps(c,0,(int32_t)c->r[0],0); // 801BF370
  if (crb(c,2)) { goto L_801BF388; } // 801BF374
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BF378
  cmpu(c,0,c->r[0],c->r[30]); // 801BF37C
  if (!crb(c,2)) { goto L_801BF388; } // 801BF380
  goto L_801BF398; // 801BF384
L_801BF388:;
  c->r[4]=c->r[4]+0x00000001u; // 801BF388
  c->r[3]=c->r[3]+0x00000060u; // 801BF38C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF30C; } // 801BF390
  c->r[3]=0u+0x00000000u; // 801BF394
L_801BF398:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BF398
  if (crb(c,2)) { goto L_801BF3C4; } // 801BF39C
  c->r[0]=0u-c->r[31]; // 801BF3A0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801BF3A4
  c->r[0]=c->r[0]|c->r[31]; // 801BF3A8
  c->r[3]=R16(c->r[3]+0x00000004u); // 801BF3AC
  c->r[4]=sraw(c,c->r[0],31); // 801BF3B0
  c->r[0]=c->r[4]+0x00000104u; // 801BF3B4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BF3B8
  c->ctr=c->r[12]; // 801BF3BC
  if (true) { c->lr=0x801BF3C4u; dispatch(c,c->ctr); } // 801BF3C0
L_801BF3C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF3C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF3C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BF3CC
  c->lr=c->r[0]; // 801BF3D0
  c->r[1]=c->r[1]+0x00000010u; // 801BF3D4
  return; // 801BF3D8
}

// btm_cback
void f_801BF3DC(Ctx* __restrict c) {
  trace_call(0x801BF3DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF3DC
  c->r[0]=c->lr; // 801BF3E0
  c->r[7]=0u+0x80330000u; // 801BF3E4
  cmpu(c,0,c->r[3],0x00000002u); // 801BF3E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF3EC
  c->r[7]=c->r[7]+0x00003AA8u; // 801BF3F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BF3F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BF3F8
  c->r[30]=c->r[4]|c->r[4]; // 801BF3FC
  if (!crb(c,0)) { goto L_801BF59C; } // 801BF400
  c->r[8]=0u+0x803D0000u; // 801BF404
  c->r[0]=rotl(c->r[3],4)&0x000FFFF0u; // 801BF408
  c->r[8]=c->r[8]+0xFFFFA8E0u; // 801BF40C
  c->r[31]=c->r[8]+c->r[0]; // 801BF410
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801BF414
  cmps(c,0,(int32_t)c->r[0],0); // 801BF418
  if (crb(c,2)) { goto L_801BF59C; } // 801BF41C
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 801BF420
  cmps(c,0,(int32_t)c->r[0],3); // 801BF424
  if (crb(c,2)) { goto L_801BF494; } // 801BF428
  if (!crb(c,0)) { goto L_801BF43C; } // 801BF42C
  cmps(c,0,(int32_t)c->r[0],2); // 801BF430
  if (!crb(c,0)) { goto L_801BF448; } // 801BF434
  goto L_801BF56C; // 801BF438
L_801BF43C:;
  cmps(c,0,(int32_t)c->r[0],5); // 801BF43C
  if (!crb(c,0)) { goto L_801BF56C; } // 801BF440
  goto L_801BF4E0; // 801BF444
L_801BF448:;
  c->r[6]=R8(c->r[4]+0x00000001u); // 801BF448
  c->r[3]=0u+0x00000114u; // 801BF44C
  c->r[0]=R8(c->r[8]+0x00000028u); // 801BF450
  c->r[30]=c->r[1]+0x00000008u; // 801BF454
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801BF458
  cmpu(c,0,c->r[0],0x00000004u); // 801BF45C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BF460
  c->r[0]=cntlz(c->r[0]); // 801BF464
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801BF468
  c->r[0]=0u-c->r[0]; // 801BF46C
  c->r[0]=c->r[3]&~c->r[0]; // 801BF470
  W16(c->r[1]+0x00000008u,c->r[0]); // 801BF474
  if (crb(c,0)) { goto L_801BF56C; } // 801BF478
  c->r[3]=0u+0x000E0000u; // 801BF47C
  c->r[4]=c->r[7]+0x00000000u; // 801BF480
  c->r[3]=c->r[3]+0x00000003u; // 801BF484
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801BF488
  c->lr=0x801BF490u; f_801ACB50(c); // 801BF48C
  goto L_801BF56C; // 801BF490
L_801BF494:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 801BF494
  cmps(c,0,(int32_t)c->r[5],0); // 801BF498
  if (crb(c,2)) { goto L_801BF4C0; } // 801BF49C
  c->r[0]=R8(c->r[8]+0x00000028u); // 801BF4A0
  cmpu(c,0,c->r[0],0x00000004u); // 801BF4A4
  if (crb(c,0)) { goto L_801BF56C; } // 801BF4A8
  c->r[3]=0u+0x000E0000u; // 801BF4AC
  c->r[4]=c->r[7]+0x0000003Cu; // 801BF4B0
  c->r[3]=c->r[3]+0x00000003u; // 801BF4B4
  c->lr=0x801BF4BCu; f_801ACB38(c); // 801BF4B8
  goto L_801BF56C; // 801BF4BC
L_801BF4C0:;
  c->r[0]=R8(c->r[8]+0x00000028u); // 801BF4C0
  cmpu(c,0,c->r[0],0x00000004u); // 801BF4C4
  if (crb(c,0)) { goto L_801BF56C; } // 801BF4C8
  c->r[3]=0u+0x000E0000u; // 801BF4CC
  c->r[4]=c->r[7]+0x00000070u; // 801BF4D0
  c->r[3]=c->r[3]+0x00000003u; // 801BF4D4
  c->lr=0x801BF4DCu; f_801ACB20(c); // 801BF4D8
  goto L_801BF56C; // 801BF4DC
L_801BF4E0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 801BF4E0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BF4E4
  cmpu(c,0,c->r[0],0x00000008u); // 801BF4E8
  if (crb(c,1)) { goto L_801BF540; } // 801BF4EC
  c->r[3]=0u+0x80330000u; // 801BF4F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF4F4
  c->r[3]=c->r[3]+0x00003B74u; // 801BF4F8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BF4FC
  c->ctr=c->r[3]; // 801BF500
  if (true) { switch (c->ctr) { case 0x801BF508u: goto L_801BF508; case 0x801BF510u: goto L_801BF510; case 0x801BF518u: goto L_801BF518; case 0x801BF520u: goto L_801BF520; case 0x801BF528u: goto L_801BF528; case 0x801BF530u: goto L_801BF530; case 0x801BF538u: goto L_801BF538; case 0x801BF540u: goto L_801BF540; default: break; } dispatch(c,c->ctr); return; } // 801BF504
L_801BF508:;
  c->r[5]=0u+0x00000000u; // 801BF508
  goto L_801BF544; // 801BF50C
L_801BF510:;
  c->r[5]=0u+0x0000010Bu; // 801BF510
  goto L_801BF544; // 801BF514
L_801BF518:;
  c->r[5]=0u+0x00000103u; // 801BF518
  goto L_801BF544; // 801BF51C
L_801BF520:;
  c->r[5]=0u+0x00000109u; // 801BF520
  goto L_801BF544; // 801BF524
L_801BF528:;
  c->r[5]=0u+0x0000010Cu; // 801BF528
  goto L_801BF544; // 801BF52C
L_801BF530:;
  c->r[5]=0u+0x0000010Du; // 801BF530
  goto L_801BF544; // 801BF534
L_801BF538:;
  c->r[5]=0u+0x00000115u; // 801BF538
  goto L_801BF544; // 801BF53C
L_801BF540:;
  c->r[5]=0u+0x00000114u; // 801BF540
L_801BF544:;
  c->r[3]=0u+0x803D0000u; // 801BF544
  W16(c->r[4]+0x00000000u,c->r[5]); // 801BF548
  c->r[3]=c->r[3]+0xFFFFA8E0u; // 801BF54C
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BF550
  cmpu(c,0,c->r[0],0x00000004u); // 801BF554
  if (crb(c,0)) { goto L_801BF56C; } // 801BF558
  c->r[3]=0u+0x000E0000u; // 801BF55C
  c->r[4]=c->r[7]+0x00000098u; // 801BF560
  c->r[3]=c->r[3]+0x00000003u; // 801BF564
  c->lr=0x801BF56Cu; f_801ACB38(c); // 801BF568
L_801BF56C:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BF56C
  cmps(c,0,(int32_t)c->r[12],0); // 801BF570
  if (crb(c,2)) { goto L_801BF588; } // 801BF574
  c->r[4]=c->r[30]|c->r[30]; // 801BF578
  c->r[3]=R16(c->r[31]+0x0000000Cu); // 801BF57C
  c->ctr=c->r[12]; // 801BF580
  if (true) { c->lr=0x801BF588u; dispatch(c,c->ctr); } // 801BF584
L_801BF588:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BF588
  if (crb(c,2)) { goto L_801BF59C; } // 801BF58C
  c->r[0]=0u+0x00000000u; // 801BF590
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BF594
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 801BF598
L_801BF59C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF59C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF5A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF5A4
  c->lr=c->r[0]; // 801BF5A8
  c->r[1]=c->r[1]+0x00000020u; // 801BF5AC
  return; // 801BF5B0
}

// fn_801BF5B4
void f_801BF5B4(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 801BF5B4
  c->r[3]=0u+0x00000000u; // 801BF5B8
  f_801BF3DC(c); return; // 801BF5BC
}

// fn_801BF5C0
void f_801BF5C0(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 801BF5C0
  c->r[3]=0u+0x00000001u; // 801BF5C4
  f_801BF3DC(c); return; // 801BF5C8
}

// gap_find_addr_name_cb
void f_801BF5CC(Ctx* __restrict c) {
  trace_call(0x801BF5CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF5CC
  c->r[0]=c->lr; // 801BF5D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF5D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BF5D8
  c->r[31]=0u+0x803D0000u; // 801BF5DC
  c->r[31]=c->r[31]+0xFFFFA8E0u; // 801BF5E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BF5E4
  c->r[30]=c->r[31]+0x00000034u; // 801BF5E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BF5EC
  c->r[29]=c->r[3]|c->r[3]; // 801BF5F0
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 801BF5F4
  cmps(c,0,(int32_t)c->r[0],0); // 801BF5F8
  if (crb(c,2)) { goto L_801BF7C8; } // 801BF5FC
  c->r[5]=R16(c->r[3]+0x00000000u); // 801BF600
  cmps(c,0,(int32_t)c->r[5],0); // 801BF604
  if (!crb(c,2)) { goto L_801BF718; } // 801BF608
  c->r[0]=R8(c->r[31]+0x00000028u); // 801BF60C
  cmpu(c,0,c->r[0],0x00000004u); // 801BF610
  if (crb(c,0)) { goto L_801BF630; } // 801BF614
  c->r[3]=0u+0x000E0000u; // 801BF618
  c->r[4]=0u+0x80330000u; // 801BF61C
  c->r[6]=c->r[29]+0x00000004u; // 801BF620
  c->r[3]=c->r[3]+0x00000003u; // 801BF624
  c->r[4]=c->r[4]+0x00003C20u; // 801BF628
  c->lr=0x801BF630u; f_801ACB50(c); // 801BF62C
L_801BF630:;
  c->r[3]=c->r[30]+0x00000008u; // 801BF630
  c->lr=0x801BF638u; f_80185588(c); // 801BF634
  c->r[5]=c->r[3]|c->r[3]; // 801BF638
  c->r[3]=c->r[30]+0x00000008u; // 801BF63C
  c->r[4]=c->r[29]+0x00000004u; // 801BF640
  c->lr=0x801BF648u; f_8019027C(c); // 801BF644
  cmps(c,0,(int32_t)c->r[3],0); // 801BF648
  if (!crb(c,2)) { goto L_801BF670; } // 801BF64C
  c->r[4]=R32(c->r[31]+0x00000030u); // 801BF650
  c->r[3]=c->r[30]+0x00000002u; // 801BF654
  c->r[5]=0u+0x00000006u; // 801BF658
  c->r[4]=c->r[4]+0x00000002u; // 801BF65C
  c->lr=0x801BF664u; f_80004338(c); // 801BF660
  c->r[0]=0u+0x00000000u; // 801BF664
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF668
  goto L_801BF7A0; // 801BF66C
L_801BF670:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801BF670
  c->lr=0x801BF678u; f_801B7AB0(c); // 801BF674
  cmps(c,0,(int32_t)c->r[3],0); // 801BF678
  W32(c->r[31]+0x00000030u,c->r[3]); // 801BF67C
  if (crb(c,2)) { goto L_801BF70C; } // 801BF680
  c->r[4]=0u+0x801C0000u; // 801BF684
  c->r[3]=c->r[3]+0x00000002u; // 801BF688
  c->r[4]=c->r[4]+0xFFFFF5CCu; // 801BF68C
  c->lr=0x801BF694u; f_801B77D8(c); // 801BF690
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BF694
  cmpu(c,0,c->r[0],0x00000001u); // 801BF698
  if (crb(c,2)) { goto L_801BF7C8; } // 801BF69C
  c->r[0]=R16(c->r[29]+0x00000000u); // 801BF6A0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BF6A4
  cmpu(c,0,c->r[0],0x00000008u); // 801BF6A8
  if (crb(c,1)) { goto L_801BF700; } // 801BF6AC
  c->r[3]=0u+0x80330000u; // 801BF6B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF6B4
  c->r[3]=c->r[3]+0x00003CC4u; // 801BF6B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BF6BC
  c->ctr=c->r[3]; // 801BF6C0
  if (true) { switch (c->ctr) { case 0x801BF6C8u: goto L_801BF6C8; case 0x801BF6D0u: goto L_801BF6D0; case 0x801BF6D8u: goto L_801BF6D8; case 0x801BF6E0u: goto L_801BF6E0; case 0x801BF6E8u: goto L_801BF6E8; case 0x801BF6F0u: goto L_801BF6F0; case 0x801BF6F8u: goto L_801BF6F8; case 0x801BF700u: goto L_801BF700; case 0x801BF760u: goto L_801BF760; case 0x801BF768u: goto L_801BF768; case 0x801BF770u: goto L_801BF770; case 0x801BF778u: goto L_801BF778; case 0x801BF780u: goto L_801BF780; case 0x801BF788u: goto L_801BF788; case 0x801BF790u: goto L_801BF790; case 0x801BF798u: goto L_801BF798; default: break; } dispatch(c,c->ctr); return; } // 801BF6C4
L_801BF6C8:;
  c->r[0]=0u+0x00000000u; // 801BF6C8
  goto L_801BF704; // 801BF6CC
L_801BF6D0:;
  c->r[0]=0u+0x0000010Bu; // 801BF6D0
  goto L_801BF704; // 801BF6D4
L_801BF6D8:;
  c->r[0]=0u+0x00000103u; // 801BF6D8
  goto L_801BF704; // 801BF6DC
L_801BF6E0:;
  c->r[0]=0u+0x00000109u; // 801BF6E0
  goto L_801BF704; // 801BF6E4
L_801BF6E8:;
  c->r[0]=0u+0x0000010Cu; // 801BF6E8
  goto L_801BF704; // 801BF6EC
L_801BF6F0:;
  c->r[0]=0u+0x0000010Du; // 801BF6F0
  goto L_801BF704; // 801BF6F4
L_801BF6F8:;
  c->r[0]=0u+0x00000115u; // 801BF6F8
  goto L_801BF704; // 801BF6FC
L_801BF700:;
  c->r[0]=0u+0x00000114u; // 801BF700
L_801BF704:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF704
  goto L_801BF7A0; // 801BF708
L_801BF70C:;
  c->r[0]=0u+0x00000102u; // 801BF70C
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF710
  goto L_801BF7A0; // 801BF714
L_801BF718:;
  c->r[0]=R8(c->r[31]+0x00000028u); // 801BF718
  cmpu(c,0,c->r[0],0x00000004u); // 801BF71C
  if (crb(c,0)) { goto L_801BF738; } // 801BF720
  c->r[3]=0u+0x000E0000u; // 801BF724
  c->r[4]=0u+0x80330000u; // 801BF728
  c->r[3]=c->r[3]+0x00000003u; // 801BF72C
  c->r[4]=c->r[4]+0x00003C64u; // 801BF730
  c->lr=0x801BF738u; f_801ACB38(c); // 801BF734
L_801BF738:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 801BF738
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BF73C
  cmpu(c,0,c->r[0],0x00000008u); // 801BF740
  if (crb(c,1)) { goto L_801BF798; } // 801BF744
  c->r[3]=0u+0x80330000u; // 801BF748
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF74C
  c->r[3]=c->r[3]+0x00003CA0u; // 801BF750
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BF754
  c->ctr=c->r[3]; // 801BF758
  if (true) { switch (c->ctr) { case 0x801BF6C8u: goto L_801BF6C8; case 0x801BF6D0u: goto L_801BF6D0; case 0x801BF6D8u: goto L_801BF6D8; case 0x801BF6E0u: goto L_801BF6E0; case 0x801BF6E8u: goto L_801BF6E8; case 0x801BF6F0u: goto L_801BF6F0; case 0x801BF6F8u: goto L_801BF6F8; case 0x801BF700u: goto L_801BF700; case 0x801BF760u: goto L_801BF760; case 0x801BF768u: goto L_801BF768; case 0x801BF770u: goto L_801BF770; case 0x801BF778u: goto L_801BF778; case 0x801BF780u: goto L_801BF780; case 0x801BF788u: goto L_801BF788; case 0x801BF790u: goto L_801BF790; case 0x801BF798u: goto L_801BF798; default: break; } dispatch(c,c->ctr); return; } // 801BF75C
L_801BF760:;
  c->r[0]=0u+0x00000000u; // 801BF760
  goto L_801BF79C; // 801BF764
L_801BF768:;
  c->r[0]=0u+0x0000010Bu; // 801BF768
  goto L_801BF79C; // 801BF76C
L_801BF770:;
  c->r[0]=0u+0x00000103u; // 801BF770
  goto L_801BF79C; // 801BF774
L_801BF778:;
  c->r[0]=0u+0x00000109u; // 801BF778
  goto L_801BF79C; // 801BF77C
L_801BF780:;
  c->r[0]=0u+0x0000010Cu; // 801BF780
  goto L_801BF79C; // 801BF784
L_801BF788:;
  c->r[0]=0u+0x0000010Du; // 801BF788
  goto L_801BF79C; // 801BF78C
L_801BF790:;
  c->r[0]=0u+0x00000115u; // 801BF790
  goto L_801BF79C; // 801BF794
L_801BF798:;
  c->r[0]=0u+0x00000114u; // 801BF798
L_801BF79C:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF79C
L_801BF7A0:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 801BF7A0
  cmps(c,0,(int32_t)c->r[12],0); // 801BF7A4
  if (crb(c,2)) { goto L_801BF7BC; } // 801BF7A8
  c->r[4]=c->r[30]|c->r[30]; // 801BF7AC
  c->r[3]=0u+0x00000005u; // 801BF7B0
  c->ctr=c->r[12]; // 801BF7B4
  if (true) { c->lr=0x801BF7BCu; dispatch(c,c->ctr); } // 801BF7B8
L_801BF7BC:;
  c->r[0]=0u+0x00000000u; // 801BF7BC
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 801BF7C0
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801BF7C4
L_801BF7C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF7C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF7CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF7D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BF7D4
  c->lr=c->r[0]; // 801BF7D8
  c->r[1]=c->r[1]+0x00000020u; // 801BF7DC
  return; // 801BF7E0
}

// gap_find_addr_inq_cb
void f_801BF7E4(Ctx* __restrict c) {
  trace_call(0x801BF7E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF7E4
  c->r[0]=c->lr; // 801BF7E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF7EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BF7F0
  c->r[31]=0u+0x803D0000u; // 801BF7F4
  c->r[31]=c->r[31]+0xFFFFA8E0u; // 801BF7F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BF7FC
  c->r[30]=c->r[31]+0x00000034u; // 801BF800
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BF804
  c->r[29]=c->r[3]|c->r[3]; // 801BF808
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 801BF80C
  cmps(c,0,(int32_t)c->r[0],0); // 801BF810
  if (crb(c,2)) { goto L_801BF97C; } // 801BF814
  c->r[0]=R8(c->r[31]+0x00000028u); // 801BF818
  cmpu(c,0,c->r[0],0x00000004u); // 801BF81C
  if (crb(c,0)) { goto L_801BF840; } // 801BF820
  c->r[3]=0u+0x000E0000u; // 801BF824
  c->r[4]=0u+0x80330000u; // 801BF828
  c->r[5]=R8(c->r[29]+0x00000000u); // 801BF82C
  c->r[3]=c->r[3]+0x00000003u; // 801BF830
  c->r[6]=R8(c->r[29]+0x00000001u); // 801BF834
  c->r[4]=c->r[4]+0x00003CE8u; // 801BF838
  c->lr=0x801BF840u; f_801ACB50(c); // 801BF83C
L_801BF840:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BF840
  cmps(c,0,(int32_t)c->r[0],0); // 801BF844
  if (!crb(c,2)) { goto L_801BF8F4; } // 801BF848
  c->r[0]=0u+0x00000111u; // 801BF84C
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF850
  c->lr=0x801BF858u; f_801B79F8(c); // 801BF854
  cmps(c,0,(int32_t)c->r[3],0); // 801BF858
  W32(c->r[31]+0x00000030u,c->r[3]); // 801BF85C
  if (crb(c,2)) { goto L_801BF8E8; } // 801BF860
  c->r[4]=0u+0x801C0000u; // 801BF864
  c->r[3]=c->r[3]+0x00000002u; // 801BF868
  c->r[4]=c->r[4]+0xFFFFF5CCu; // 801BF86C
  c->lr=0x801BF874u; f_801B77D8(c); // 801BF870
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BF874
  cmpu(c,0,c->r[0],0x00000001u); // 801BF878
  if (crb(c,2)) { goto L_801BF97C; } // 801BF87C
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BF880
  cmpu(c,0,c->r[0],0x00000008u); // 801BF884
  if (crb(c,1)) { goto L_801BF8DC; } // 801BF888
  c->r[3]=0u+0x80330000u; // 801BF88C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF890
  c->r[3]=c->r[3]+0x00003D50u; // 801BF894
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BF898
  c->ctr=c->r[3]; // 801BF89C
  if (true) { switch (c->ctr) { case 0x801BF8A4u: goto L_801BF8A4; case 0x801BF8ACu: goto L_801BF8AC; case 0x801BF8B4u: goto L_801BF8B4; case 0x801BF8BCu: goto L_801BF8BC; case 0x801BF8C4u: goto L_801BF8C4; case 0x801BF8CCu: goto L_801BF8CC; case 0x801BF8D4u: goto L_801BF8D4; case 0x801BF8DCu: goto L_801BF8DC; case 0x801BF914u: goto L_801BF914; case 0x801BF91Cu: goto L_801BF91C; case 0x801BF924u: goto L_801BF924; case 0x801BF92Cu: goto L_801BF92C; case 0x801BF934u: goto L_801BF934; case 0x801BF93Cu: goto L_801BF93C; case 0x801BF944u: goto L_801BF944; case 0x801BF94Cu: goto L_801BF94C; default: break; } dispatch(c,c->ctr); return; } // 801BF8A0
L_801BF8A4:;
  c->r[0]=0u+0x00000000u; // 801BF8A4
  goto L_801BF8E0; // 801BF8A8
L_801BF8AC:;
  c->r[0]=0u+0x0000010Bu; // 801BF8AC
  goto L_801BF8E0; // 801BF8B0
L_801BF8B4:;
  c->r[0]=0u+0x00000103u; // 801BF8B4
  goto L_801BF8E0; // 801BF8B8
L_801BF8BC:;
  c->r[0]=0u+0x00000109u; // 801BF8BC
  goto L_801BF8E0; // 801BF8C0
L_801BF8C4:;
  c->r[0]=0u+0x0000010Cu; // 801BF8C4
  goto L_801BF8E0; // 801BF8C8
L_801BF8CC:;
  c->r[0]=0u+0x0000010Du; // 801BF8CC
  goto L_801BF8E0; // 801BF8D0
L_801BF8D4:;
  c->r[0]=0u+0x00000115u; // 801BF8D4
  goto L_801BF8E0; // 801BF8D8
L_801BF8DC:;
  c->r[0]=0u+0x00000114u; // 801BF8DC
L_801BF8E0:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF8E0
  goto L_801BF954; // 801BF8E4
L_801BF8E8:;
  c->r[0]=0u+0x00000102u; // 801BF8E8
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF8EC
  goto L_801BF954; // 801BF8F0
L_801BF8F4:;
  cmpu(c,0,c->r[0],0x00000008u); // 801BF8F4
  if (crb(c,1)) { goto L_801BF94C; } // 801BF8F8
  c->r[3]=0u+0x80330000u; // 801BF8FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF900
  c->r[3]=c->r[3]+0x00003D2Cu; // 801BF904
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BF908
  c->ctr=c->r[3]; // 801BF90C
  if (true) { switch (c->ctr) { case 0x801BF8A4u: goto L_801BF8A4; case 0x801BF8ACu: goto L_801BF8AC; case 0x801BF8B4u: goto L_801BF8B4; case 0x801BF8BCu: goto L_801BF8BC; case 0x801BF8C4u: goto L_801BF8C4; case 0x801BF8CCu: goto L_801BF8CC; case 0x801BF8D4u: goto L_801BF8D4; case 0x801BF8DCu: goto L_801BF8DC; case 0x801BF914u: goto L_801BF914; case 0x801BF91Cu: goto L_801BF91C; case 0x801BF924u: goto L_801BF924; case 0x801BF92Cu: goto L_801BF92C; case 0x801BF934u: goto L_801BF934; case 0x801BF93Cu: goto L_801BF93C; case 0x801BF944u: goto L_801BF944; case 0x801BF94Cu: goto L_801BF94C; default: break; } dispatch(c,c->ctr); return; } // 801BF910
L_801BF914:;
  c->r[0]=0u+0x00000000u; // 801BF914
  goto L_801BF950; // 801BF918
L_801BF91C:;
  c->r[0]=0u+0x0000010Bu; // 801BF91C
  goto L_801BF950; // 801BF920
L_801BF924:;
  c->r[0]=0u+0x00000103u; // 801BF924
  goto L_801BF950; // 801BF928
L_801BF92C:;
  c->r[0]=0u+0x00000109u; // 801BF92C
  goto L_801BF950; // 801BF930
L_801BF934:;
  c->r[0]=0u+0x0000010Cu; // 801BF934
  goto L_801BF950; // 801BF938
L_801BF93C:;
  c->r[0]=0u+0x0000010Du; // 801BF93C
  goto L_801BF950; // 801BF940
L_801BF944:;
  c->r[0]=0u+0x00000115u; // 801BF944
  goto L_801BF950; // 801BF948
L_801BF94C:;
  c->r[0]=0u+0x00000114u; // 801BF94C
L_801BF950:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BF950
L_801BF954:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 801BF954
  cmps(c,0,(int32_t)c->r[12],0); // 801BF958
  if (crb(c,2)) { goto L_801BF970; } // 801BF95C
  c->r[4]=c->r[30]|c->r[30]; // 801BF960
  c->r[3]=0u+0x00000005u; // 801BF964
  c->ctr=c->r[12]; // 801BF968
  if (true) { c->lr=0x801BF970u; dispatch(c,c->ctr); } // 801BF96C
L_801BF970:;
  c->r[0]=0u+0x00000000u; // 801BF970
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 801BF974
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801BF978
L_801BF97C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF97C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF980
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF984
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BF988
  c->lr=c->r[0]; // 801BF98C
  c->r[1]=c->r[1]+0x00000020u; // 801BF990
  return; // 801BF994
}

// gap_convert_btm_status
void f_801BF998(Ctx* __restrict c) {
  trace_call(0x801BF998u);
  cmpu(c,0,c->r[3],0x00000008u); // 801BF998
  if (crb(c,1)) { goto L_801BF9F0; } // 801BF99C
  c->r[4]=0u+0x80330000u; // 801BF9A0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801BF9A4
  c->r[4]=c->r[4]+0x00003D74u; // 801BF9A8
  c->r[4]=R32(c->r[4]+c->r[0]); // 801BF9AC
  c->ctr=c->r[4]; // 801BF9B0
  if (true) { switch (c->ctr) { case 0x801BF9B8u: goto L_801BF9B8; case 0x801BF9C0u: goto L_801BF9C0; case 0x801BF9C8u: goto L_801BF9C8; case 0x801BF9D0u: goto L_801BF9D0; case 0x801BF9D8u: goto L_801BF9D8; case 0x801BF9E0u: goto L_801BF9E0; case 0x801BF9E8u: goto L_801BF9E8; case 0x801BF9F0u: goto L_801BF9F0; default: break; } dispatch(c,c->ctr); return; } // 801BF9B4
L_801BF9B8:;
  c->r[3]=0u+0x00000000u; // 801BF9B8
  return; // 801BF9BC
L_801BF9C0:;
  c->r[3]=0u+0x0000010Bu; // 801BF9C0
  return; // 801BF9C4
L_801BF9C8:;
  c->r[3]=0u+0x00000103u; // 801BF9C8
  return; // 801BF9CC
L_801BF9D0:;
  c->r[3]=0u+0x00000109u; // 801BF9D0
  return; // 801BF9D4
L_801BF9D8:;
  c->r[3]=0u+0x0000010Cu; // 801BF9D8
  return; // 801BF9DC
L_801BF9E0:;
  c->r[3]=0u+0x0000010Du; // 801BF9E0
  return; // 801BF9E4
L_801BF9E8:;
  c->r[3]=0u+0x00000115u; // 801BF9E8
  return; // 801BF9EC
L_801BF9F0:;
  c->r[3]=0u+0x00000114u; // 801BF9F0
  return; // 801BF9F4
}

// btsnd_hcic_inquiry
void f_801BF9F8(Ctx* __restrict c) {
  trace_call(0x801BF9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF9F8
  c->r[0]=c->lr; // 801BF9FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFA00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BFA04
  c->r[31]=c->r[5]|c->r[5]; // 801BFA08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BFA0C
  c->r[30]=c->r[4]|c->r[4]; // 801BFA10
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BFA14
  c->r[29]=c->r[3]|c->r[3]; // 801BFA18
  c->r[3]=0u+0x00000002u; // 801BFA1C
  c->lr=0x801BFA24u; f_801AA140(c); // 801BFA20
  cmps(c,0,(int32_t)c->r[3],0); // 801BFA24
  if (!crb(c,2)) { goto L_801BFA34; } // 801BFA28
  c->r[3]=0u+0x00000000u; // 801BFA2C
  goto L_801BFA84; // 801BFA30
L_801BFA34:;
  c->r[0]=0u+0x00000008u; // 801BFA34
  c->r[5]=0u+0x00000000u; // 801BFA38
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BFA3C
  c->r[4]=0u+0x00000001u; // 801BFA40
  c->r[0]=0u+0x00000004u; // 801BFA44
  c->r[6]=0u+0x00000005u; // 801BFA48
  W16(c->r[3]+0x00000004u,c->r[5]); // 801BFA4C
  c->r[5]=R8(c->r[29]+0x00000002u); // 801BFA50
  W8(c->r[3]+0x00000008u,c->r[4]); // 801BFA54
  c->r[4]=R8(c->r[29]+0x00000001u); // 801BFA58
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BFA5C
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BFA60
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801BFA64
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 801BFA68
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801BFA6C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BFA70
  W8(c->r[3]+0x0000000Eu,c->r[30]); // 801BFA74
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801BFA78
  c->lr=0x801BFA80u; f_801BDA44(c); // 801BFA7C
  c->r[3]=0u+0x00000001u; // 801BFA80
L_801BFA84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFA84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BFA88
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BFA8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BFA90
  c->lr=c->r[0]; // 801BFA94
  c->r[1]=c->r[1]+0x00000020u; // 801BFA98
  return; // 801BFA9C
}

// btsnd_hcic_inq_cancel
void f_801BFAA0(Ctx* __restrict c) {
  trace_call(0x801BFAA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFAA0
  c->r[0]=c->lr; // 801BFAA4
  c->r[3]=0u+0x00000002u; // 801BFAA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFAAC
  c->lr=0x801BFAB4u; f_801AA140(c); // 801BFAB0
  cmps(c,0,(int32_t)c->r[3],0); // 801BFAB4
  if (!crb(c,2)) { goto L_801BFAC4; } // 801BFAB8
  c->r[3]=0u+0x00000000u; // 801BFABC
  goto L_801BFAF0; // 801BFAC0
L_801BFAC4:;
  c->r[0]=0u+0x00000003u; // 801BFAC4
  c->r[5]=0u+0x00000000u; // 801BFAC8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BFACC
  c->r[4]=0u+0x00000002u; // 801BFAD0
  c->r[0]=0u+0x00000004u; // 801BFAD4
  W16(c->r[3]+0x00000004u,c->r[5]); // 801BFAD8
  W8(c->r[3]+0x00000008u,c->r[4]); // 801BFADC
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BFAE0
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BFAE4
  c->lr=0x801BFAECu; f_801BDA44(c); // 801BFAE8
  c->r[3]=0u+0x00000001u; // 801BFAEC
L_801BFAF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFAF0
  c->lr=c->r[0]; // 801BFAF4
  c->r[1]=c->r[1]+0x00000010u; // 801BFAF8
  return; // 801BFAFC
}

// btsnd_hcic_per_inq_mode
void f_801BFB00(Ctx* __restrict c) {
  trace_call(0x801BFB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFB00
  c->r[0]=c->lr; // 801BFB04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFB08
  c->r[11]=c->r[1]+0x00000020u; // 801BFB0C
  c->lr=0x801BFB14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFB10
  c->r[27]=c->r[3]|c->r[3]; // 801BFB14
  c->r[28]=c->r[4]|c->r[4]; // 801BFB18
  c->r[29]=c->r[5]|c->r[5]; // 801BFB1C
  c->r[30]=c->r[6]|c->r[6]; // 801BFB20
  c->r[31]=c->r[7]|c->r[7]; // 801BFB24
  c->r[3]=0u+0x00000002u; // 801BFB28
  c->lr=0x801BFB30u; f_801AA140(c); // 801BFB2C
  cmps(c,0,(int32_t)c->r[3],0); // 801BFB30
  if (!crb(c,2)) { goto L_801BFB40; } // 801BFB34
  c->r[3]=0u+0x00000000u; // 801BFB38
  goto L_801BFBA8; // 801BFB3C
L_801BFB40:;
  c->r[0]=0u+0x0000000Cu; // 801BFB40
  c->r[5]=0u+0x00000000u; // 801BFB44
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BFB48
  c->r[4]=0u+0x00000003u; // 801BFB4C
  c->r[0]=0u+0x00000004u; // 801BFB50
  c->r[8]=0u+0x00000009u; // 801BFB54
  W16(c->r[3]+0x00000004u,c->r[5]); // 801BFB58
  c->r[7]=sraw(c,c->r[27],8); // 801BFB5C
  c->r[6]=rotl(c->r[28],24)&0x000000FFu; // 801BFB60
  c->r[5]=R8(c->r[29]+0x00000002u); // 801BFB64
  W8(c->r[3]+0x00000008u,c->r[4]); // 801BFB68
  c->r[4]=R8(c->r[29]+0x00000001u); // 801BFB6C
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BFB70
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BFB74
  W8(c->r[3]+0x0000000Au,c->r[8]); // 801BFB78
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 801BFB7C
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 801BFB80
  W8(c->r[3]+0x0000000Du,c->r[28]); // 801BFB84
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 801BFB88
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 801BFB8C
  W8(c->r[3]+0x00000010u,c->r[4]); // 801BFB90
  W8(c->r[3]+0x00000011u,c->r[0]); // 801BFB94
  W8(c->r[3]+0x00000012u,c->r[30]); // 801BFB98
  W8(c->r[3]+0x00000013u,c->r[31]); // 801BFB9C
  c->lr=0x801BFBA4u; f_801BDA44(c); // 801BFBA0
  c->r[3]=0u+0x00000001u; // 801BFBA4
L_801BFBA8:;
  c->r[11]=c->r[1]+0x00000020u; // 801BFBA8
  c->lr=0x801BFBB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFBAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFBB0
  c->lr=c->r[0]; // 801BFBB4
  c->r[1]=c->r[1]+0x00000020u; // 801BFBB8
  return; // 801BFBBC
}

// btsnd_hcic_create_conn
void f_801BFBC0(Ctx* __restrict c) {
  trace_call(0x801BFBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFBC0
  c->r[0]=c->lr; // 801BFBC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFBC8
  c->r[11]=c->r[1]+0x00000020u; // 801BFBCC
  c->lr=0x801BFBD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFBD0
  c->r[26]=c->r[3]|c->r[3]; // 801BFBD4
  c->r[27]=c->r[4]|c->r[4]; // 801BFBD8
  c->r[28]=c->r[5]|c->r[5]; // 801BFBDC
  c->r[29]=c->r[6]|c->r[6]; // 801BFBE0
  c->r[30]=c->r[7]|c->r[7]; // 801BFBE4
  c->r[31]=c->r[8]|c->r[8]; // 801BFBE8
  c->r[3]=0u+0x00000002u; // 801BFBEC
  c->lr=0x801BFBF4u; f_801AA140(c); // 801BFBF0
  cmps(c,0,(int32_t)c->r[3],0); // 801BFBF4
  if (!crb(c,2)) { goto L_801BFC04; } // 801BFBF8
  c->r[3]=0u+0x00000000u; // 801BFBFC
  goto L_801BFC88; // 801BFC00
L_801BFC04:;
  c->r[4]=0u+0x00000010u; // 801BFC04
  c->r[0]=0u+0x00000000u; // 801BFC08
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BFC0C
  c->r[7]=0u+0x00000005u; // 801BFC10
  c->r[6]=0u+0x00000004u; // 801BFC14
  c->r[5]=0u+0x0000000Du; // 801BFC18
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BFC1C
  c->r[4]=sraw(c,c->r[27],8); // 801BFC20
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801BFC24
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BFC28
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BFC2C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BFC30
  c->r[5]=R8(c->r[26]+0x00000005u); // 801BFC34
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 801BFC38
  c->r[5]=R8(c->r[26]+0x00000004u); // 801BFC3C
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801BFC40
  c->r[5]=R8(c->r[26]+0x00000003u); // 801BFC44
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801BFC48
  c->r[5]=R8(c->r[26]+0x00000002u); // 801BFC4C
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 801BFC50
  c->r[5]=R8(c->r[26]+0x00000001u); // 801BFC54
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 801BFC58
  c->r[5]=R8(c->r[26]+0x00000000u); // 801BFC5C
  W8(c->r[3]+0x00000010u,c->r[5]); // 801BFC60
  W8(c->r[3]+0x00000011u,c->r[27]); // 801BFC64
  W8(c->r[3]+0x00000012u,c->r[4]); // 801BFC68
  W8(c->r[3]+0x00000013u,c->r[28]); // 801BFC6C
  W8(c->r[3]+0x00000014u,c->r[29]); // 801BFC70
  W8(c->r[3]+0x00000015u,c->r[30]); // 801BFC74
  W8(c->r[3]+0x00000016u,c->r[0]); // 801BFC78
  W8(c->r[3]+0x00000017u,c->r[31]); // 801BFC7C
  c->lr=0x801BFC84u; f_801BDA44(c); // 801BFC80
  c->r[3]=0u+0x00000001u; // 801BFC84
L_801BFC88:;
  c->r[11]=c->r[1]+0x00000020u; // 801BFC88
  c->lr=0x801BFC90u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFC8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFC90
  c->lr=c->r[0]; // 801BFC94
  c->r[1]=c->r[1]+0x00000020u; // 801BFC98
  return; // 801BFC9C
}

// btsnd_hcic_disconnect
void f_801BFCA0(Ctx* __restrict c) {
  trace_call(0x801BFCA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFCA0
  c->r[0]=c->lr; // 801BFCA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFCA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BFCAC
  c->r[31]=c->r[4]|c->r[4]; // 801BFCB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BFCB4
  c->r[30]=c->r[3]|c->r[3]; // 801BFCB8
  c->r[3]=0u+0x00000002u; // 801BFCBC
  c->lr=0x801BFCC4u; f_801AA140(c); // 801BFCC0
  cmps(c,0,(int32_t)c->r[3],0); // 801BFCC4
  if (!crb(c,2)) { goto L_801BFCD4; } // 801BFCC8
  c->r[3]=0u+0x00000000u; // 801BFCCC
  goto L_801BFD10; // 801BFCD0
L_801BFCD4:;
  c->r[7]=0u+0x00000006u; // 801BFCD4
  c->r[6]=0u+0x00000000u; // 801BFCD8
  W16(c->r[3]+0x00000002u,c->r[7]); // 801BFCDC
  c->r[5]=0u+0x00000004u; // 801BFCE0
  c->r[4]=0u+0x00000003u; // 801BFCE4
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801BFCE8
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BFCEC
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BFCF0
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BFCF4
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BFCF8
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801BFCFC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BFD00
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801BFD04
  c->lr=0x801BFD0Cu; f_801BDA44(c); // 801BFD08
  c->r[3]=0u+0x00000001u; // 801BFD0C
L_801BFD10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFD10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BFD14
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BFD18
  c->lr=c->r[0]; // 801BFD1C
  c->r[1]=c->r[1]+0x00000010u; // 801BFD20
  return; // 801BFD24
}

// btsnd_hcic_add_SCO_conn
void f_801BFD28(Ctx* __restrict c) {
  trace_call(0x801BFD28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFD28
  c->r[0]=c->lr; // 801BFD2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFD30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BFD34
  c->r[31]=c->r[4]|c->r[4]; // 801BFD38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BFD3C
  c->r[30]=c->r[3]|c->r[3]; // 801BFD40
  c->r[3]=0u+0x00000002u; // 801BFD44
  c->lr=0x801BFD4Cu; f_801AA140(c); // 801BFD48
  cmps(c,0,(int32_t)c->r[3],0); // 801BFD4C
  if (!crb(c,2)) { goto L_801BFD5C; } // 801BFD50
  c->r[3]=0u+0x00000000u; // 801BFD54
  goto L_801BFD9C; // 801BFD58
L_801BFD5C:;
  c->r[7]=0u+0x00000007u; // 801BFD5C
  c->r[6]=0u+0x00000000u; // 801BFD60
  W16(c->r[3]+0x00000002u,c->r[7]); // 801BFD64
  c->r[5]=0u+0x00000004u; // 801BFD68
  c->r[4]=sraw(c,c->r[30],8); // 801BFD6C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BFD70
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BFD74
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BFD78
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BFD7C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BFD80
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801BFD84
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801BFD88
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801BFD8C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BFD90
  c->lr=0x801BFD98u; f_801BDA44(c); // 801BFD94
  c->r[3]=0u+0x00000001u; // 801BFD98
L_801BFD9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFD9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BFDA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BFDA4
  c->lr=c->r[0]; // 801BFDA8
  c->r[1]=c->r[1]+0x00000010u; // 801BFDAC
  return; // 801BFDB0
}

// btsnd_hcic_accept_conn
void f_801BFDB4(Ctx* __restrict c) {
  trace_call(0x801BFDB4u);
  c->r[9]=0u+0x0000000Au; // 801BFDB4
  c->r[8]=0u+0x00000000u; // 801BFDB8
  c->r[7]=0u+0x00000009u; // 801BFDBC
  c->r[6]=0u+0x00000004u; // 801BFDC0
  c->r[0]=0u+0x00000007u; // 801BFDC4
  W16(c->r[3]+0x00000002u,c->r[9]); // 801BFDC8
  W16(c->r[3]+0x00000004u,c->r[8]); // 801BFDCC
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BFDD0
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BFDD4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BFDD8
  c->r[0]=R8(c->r[4]+0x00000005u); // 801BFDDC
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BFDE0
  c->r[0]=R8(c->r[4]+0x00000004u); // 801BFDE4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BFDE8
  c->r[0]=R8(c->r[4]+0x00000003u); // 801BFDEC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BFDF0
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BFDF4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BFDF8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BFDFC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BFE00
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BFE04
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BFE08
  W8(c->r[3]+0x00000011u,c->r[5]); // 801BFE0C
  f_801BDA44(c); return; // 801BFE10
}

// btsnd_hcic_reject_conn
void f_801BFE14(Ctx* __restrict c) {
  trace_call(0x801BFE14u);
  c->r[8]=0u+0x0000000Au; // 801BFE14
  c->r[7]=0u+0x00000000u; // 801BFE18
  c->r[6]=0u+0x00000004u; // 801BFE1C
  c->r[0]=0u+0x00000007u; // 801BFE20
  W16(c->r[3]+0x00000002u,c->r[8]); // 801BFE24
  W16(c->r[3]+0x00000004u,c->r[7]); // 801BFE28
  W8(c->r[3]+0x00000008u,c->r[8]); // 801BFE2C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BFE30
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BFE34
  c->r[0]=R8(c->r[4]+0x00000005u); // 801BFE38
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BFE3C
  c->r[0]=R8(c->r[4]+0x00000004u); // 801BFE40
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BFE44
  c->r[0]=R8(c->r[4]+0x00000003u); // 801BFE48
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BFE4C
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BFE50
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BFE54
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BFE58
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BFE5C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BFE60
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BFE64
  W8(c->r[3]+0x00000011u,c->r[5]); // 801BFE68
  f_801BDA44(c); return; // 801BFE6C
}

// btsnd_hcic_link_key_req_reply
void f_801BFE70(Ctx* __restrict c) {
  trace_call(0x801BFE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFE70
  c->r[0]=c->lr; // 801BFE74
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BFE78
  c->r[11]=c->r[1]+0x00000030u; // 801BFE7C
  c->lr=0x801BFE84u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFE80
  c->r[30]=c->r[3]|c->r[3]; // 801BFE84
  c->r[31]=c->r[4]|c->r[4]; // 801BFE88
  c->r[3]=0u+0x00000002u; // 801BFE8C
  c->lr=0x801BFE94u; f_801AA140(c); // 801BFE90
  cmps(c,0,(int32_t)c->r[3],0); // 801BFE94
  if (!crb(c,2)) { goto L_801BFEA4; } // 801BFE98
  c->r[3]=0u+0x00000000u; // 801BFE9C
  goto L_801BFFF8; // 801BFEA0
L_801BFEA4:;
  c->r[0]=0u+0x00000019u; // 801BFEA4
  c->r[4]=0u+0x00000000u; // 801BFEA8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BFEAC
  c->r[0]=0u+0x0000000Bu; // 801BFEB0
  c->r[6]=0u+0x00000004u; // 801BFEB4
  c->r[5]=0u+0x00000016u; // 801BFEB8
  W16(c->r[3]+0x00000004u,c->r[4]); // 801BFEBC
  c->r[24]=addc(c,~c->r[4],0x0000000Fu,1); // 801BFEC0
  c->r[25]=0u+0x00000001u; // 801BFEC4
  c->r[27]=0u+0x00000002u; // 801BFEC8
  W8(c->r[3]+0x00000008u,c->r[0]); // 801BFECC
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 801BFED0
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 801BFED4
  c->r[4]=0u+0x00000003u; // 801BFED8
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BFEDC
  c->r[29]=addc(c,~c->r[4],0x0000000Fu,1); // 801BFEE0
  c->r[9]=0u+0x00000005u; // 801BFEE4
  c->r[10]=addc(c,~c->r[6],0x0000000Fu,1); // 801BFEE8
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BFEEC
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 801BFEF0
  c->r[7]=0u+0x00000006u; // 801BFEF4
  c->r[5]=0u+0x00000007u; // 801BFEF8
  c->r[4]=R8(c->r[30]+0x00000005u); // 801BFEFC
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 801BFF00
  c->r[23]=0u+0x00000008u; // 801BFF04
  c->r[25]=0u+0x00000009u; // 801BFF08
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BFF0C
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 801BFF10
  c->r[27]=0u+0x0000000Au; // 801BFF14
  c->r[11]=0u+0x0000000Cu; // 801BFF18
  c->r[5]=R8(c->r[30]+0x00000004u); // 801BFF1C
  c->r[9]=0u+0x0000000Du; // 801BFF20
  c->r[7]=0u+0x0000000Eu; // 801BFF24
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801BFF28
  c->r[5]=0u+0x0000000Fu; // 801BFF2C
  c->r[12]=R8(c->r[30]+0x00000003u); // 801BFF30
  W8(c->r[3]+0x0000000Du,c->r[12]); // 801BFF34
  c->r[12]=R8(c->r[30]+0x00000002u); // 801BFF38
  W8(c->r[3]+0x0000000Eu,c->r[12]); // 801BFF3C
  c->r[12]=R8(c->r[30]+0x00000001u); // 801BFF40
  W8(c->r[3]+0x0000000Fu,c->r[12]); // 801BFF44
  c->r[12]=R8(c->r[30]+0x00000000u); // 801BFF48
  W8(c->r[3]+0x00000010u,c->r[12]); // 801BFF4C
  c->r[12]=R8(c->r[31]+c->r[24]); // 801BFF50
  c->r[24]=addc(c,~c->r[23],0x0000000Fu,1); // 801BFF54
  W8(c->r[3]+0x00000011u,c->r[12]); // 801BFF58
  c->r[12]=R8(c->r[31]+c->r[26]); // 801BFF5C
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 801BFF60
  W8(c->r[3]+0x00000012u,c->r[12]); // 801BFF64
  c->r[12]=R8(c->r[31]+c->r[28]); // 801BFF68
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 801BFF6C
  W8(c->r[3]+0x00000013u,c->r[12]); // 801BFF70
  c->r[12]=R8(c->r[31]+c->r[29]); // 801BFF74
  c->r[29]=addc(c,~c->r[0],0x0000000Fu,1); // 801BFF78
  W8(c->r[3]+0x00000014u,c->r[12]); // 801BFF7C
  c->r[0]=R8(c->r[31]+c->r[10]); // 801BFF80
  c->r[10]=addc(c,~c->r[11],0x0000000Fu,1); // 801BFF84
  W8(c->r[3]+0x00000015u,c->r[0]); // 801BFF88
  c->r[0]=R8(c->r[31]+c->r[8]); // 801BFF8C
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 801BFF90
  W8(c->r[3]+0x00000016u,c->r[0]); // 801BFF94
  c->r[0]=R8(c->r[31]+c->r[6]); // 801BFF98
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 801BFF9C
  W8(c->r[3]+0x00000017u,c->r[0]); // 801BFFA0
  c->r[0]=R8(c->r[31]+c->r[4]); // 801BFFA4
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 801BFFA8
  W8(c->r[3]+0x00000018u,c->r[0]); // 801BFFAC
  c->r[12]=R8(c->r[31]+c->r[24]); // 801BFFB0
  W8(c->r[3]+0x00000019u,c->r[12]); // 801BFFB4
  c->r[12]=R8(c->r[31]+c->r[26]); // 801BFFB8
  W8(c->r[3]+0x0000001Au,c->r[12]); // 801BFFBC
  c->r[12]=R8(c->r[31]+c->r[28]); // 801BFFC0
  W8(c->r[3]+0x0000001Bu,c->r[12]); // 801BFFC4
  c->r[12]=R8(c->r[31]+c->r[29]); // 801BFFC8
  W8(c->r[3]+0x0000001Cu,c->r[12]); // 801BFFCC
  c->r[0]=R8(c->r[31]+c->r[10]); // 801BFFD0
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801BFFD4
  c->r[0]=R8(c->r[31]+c->r[8]); // 801BFFD8
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 801BFFDC
  c->r[0]=R8(c->r[31]+c->r[6]); // 801BFFE0
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801BFFE4
  c->r[0]=R8(c->r[31]+c->r[4]); // 801BFFE8
  W8(c->r[3]+0x00000020u,c->r[0]); // 801BFFEC
  c->lr=0x801BFFF4u; f_801BDA44(c); // 801BFFF0
  c->r[3]=0u+0x00000001u; // 801BFFF4
L_801BFFF8:;
  c->r[11]=c->r[1]+0x00000030u; // 801BFFF8
  c->lr=0x801C0000u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFFFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C0000
  c->lr=c->r[0]; // 801C0004
  c->r[1]=c->r[1]+0x00000030u; // 801C0008
  return; // 801C000C
}

// btsnd_hcic_link_key_neg_reply
void f_801C0010(Ctx* __restrict c) {
  trace_call(0x801C0010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0010
  c->r[0]=c->lr; // 801C0014
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C001C
  c->r[31]=c->r[3]|c->r[3]; // 801C0020
  c->r[3]=0u+0x00000002u; // 801C0024
  c->lr=0x801C002Cu; f_801AA140(c); // 801C0028
  cmps(c,0,(int32_t)c->r[3],0); // 801C002C
  if (!crb(c,2)) { goto L_801C003C; } // 801C0030
  c->r[3]=0u+0x00000000u; // 801C0034
  goto L_801C009C; // 801C0038
L_801C003C:;
  c->r[0]=0u+0x00000009u; // 801C003C
  c->r[6]=0u+0x00000000u; // 801C0040
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C0044
  c->r[5]=0u+0x0000000Cu; // 801C0048
  c->r[4]=0u+0x00000004u; // 801C004C
  c->r[0]=0u+0x00000006u; // 801C0050
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C0054
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C0058
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C005C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C0060
  c->r[0]=R8(c->r[31]+0x00000005u); // 801C0064
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C0068
  c->r[0]=R8(c->r[31]+0x00000004u); // 801C006C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C0070
  c->r[0]=R8(c->r[31]+0x00000003u); // 801C0074
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C0078
  c->r[0]=R8(c->r[31]+0x00000002u); // 801C007C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C0080
  c->r[0]=R8(c->r[31]+0x00000001u); // 801C0084
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C0088
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C008C
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C0090
  c->lr=0x801C0098u; f_801BDA44(c); // 801C0094
  c->r[3]=0u+0x00000001u; // 801C0098
L_801C009C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C009C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C00A0
  c->lr=c->r[0]; // 801C00A4
  c->r[1]=c->r[1]+0x00000010u; // 801C00A8
  return; // 801C00AC
}

// btsnd_hcic_pin_code_req_reply
void f_801C00B0(Ctx* __restrict c) {
  trace_call(0x801C00B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C00B0
  c->r[0]=c->lr; // 801C00B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C00B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C00BC
  c->r[31]=c->r[5]|c->r[5]; // 801C00C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C00C4
  c->r[30]=c->r[4]|c->r[4]; // 801C00C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C00CC
  c->r[29]=c->r[3]|c->r[3]; // 801C00D0
  c->r[3]=0u+0x00000002u; // 801C00D4
  c->lr=0x801C00DCu; f_801AA140(c); // 801C00D8
  cmps(c,0,(int32_t)c->r[3],0); // 801C00DC
  if (!crb(c,2)) { goto L_801C00EC; } // 801C00E0
  c->r[3]=0u+0x00000000u; // 801C00E4
  goto L_801C0278; // 801C00E8
L_801C00EC:;
  c->r[0]=0u+0x0000001Au; // 801C00EC
  c->r[4]=0u+0x00000000u; // 801C00F0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C00F4
  c->r[7]=0u+0x0000000Du; // 801C00F8
  c->r[6]=0u+0x00000004u; // 801C00FC
  c->r[0]=0u+0x00000017u; // 801C0100
  W16(c->r[3]+0x00000004u,c->r[4]); // 801C0104
  cmps(c,1,(int32_t)c->r[30],0); // 801C0108
  c->r[4]=c->r[3]+0x00000012u; // 801C010C
  c->r[5]=0u+0x00000000u; // 801C0110
  W8(c->r[3]+0x00000008u,c->r[7]); // 801C0114
  W8(c->r[3]+0x00000009u,c->r[6]); // 801C0118
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C011C
  c->r[0]=R8(c->r[29]+0x00000005u); // 801C0120
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C0124
  c->r[0]=R8(c->r[29]+0x00000004u); // 801C0128
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C012C
  c->r[0]=R8(c->r[29]+0x00000003u); // 801C0130
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C0134
  c->r[0]=R8(c->r[29]+0x00000002u); // 801C0138
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C013C
  c->r[0]=R8(c->r[29]+0x00000001u); // 801C0140
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C0144
  c->r[0]=R8(c->r[29]+0x00000000u); // 801C0148
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C014C
  W8(c->r[3]+0x00000011u,c->r[30]); // 801C0150
  if (!crb(c,5)) { goto L_801C0214; } // 801C0154
  cmps(c,0,(int32_t)c->r[30],8); // 801C0158
  c->r[7]=c->r[30]+0xFFFFFFF8u; // 801C015C
  if (!crb(c,1)) { goto L_801C01EC; } // 801C0160
  c->r[8]=0u+0x00000000u; // 801C0164
  if (crb(c,4)) { goto L_801C0180; } // 801C0168
  c->r[6]=0u+0x80000000u; // 801C016C
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 801C0170
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C0174
  if (crb(c,1)) { goto L_801C0180; } // 801C0178
  c->r[8]=0u+0x00000001u; // 801C017C
L_801C0180:;
  cmps(c,0,(int32_t)c->r[8],0); // 801C0180
  if (crb(c,2)) { goto L_801C01EC; } // 801C0184
  c->r[0]=c->r[7]+0x00000007u; // 801C0188
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801C018C
  c->ctr=c->r[0]; // 801C0190
  cmps(c,0,(int32_t)c->r[7],0); // 801C0194
  if (!crb(c,1)) { goto L_801C01EC; } // 801C0198
L_801C019C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C019C
  c->r[5]=c->r[5]+0x00000008u; // 801C01A0
  W8(c->r[4]+0x00000000u,c->r[0]); // 801C01A4
  c->r[0]=R8(c->r[31]+0x00000001u); // 801C01A8
  W8(c->r[4]+0x00000001u,c->r[0]); // 801C01AC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801C01B0
  W8(c->r[4]+0x00000002u,c->r[0]); // 801C01B4
  c->r[0]=R8(c->r[31]+0x00000003u); // 801C01B8
  W8(c->r[4]+0x00000003u,c->r[0]); // 801C01BC
  c->r[0]=R8(c->r[31]+0x00000004u); // 801C01C0
  W8(c->r[4]+0x00000004u,c->r[0]); // 801C01C4
  c->r[0]=R8(c->r[31]+0x00000005u); // 801C01C8
  W8(c->r[4]+0x00000005u,c->r[0]); // 801C01CC
  c->r[0]=R8(c->r[31]+0x00000006u); // 801C01D0
  W8(c->r[4]+0x00000006u,c->r[0]); // 801C01D4
  c->r[0]=R8(c->r[31]+0x00000007u); // 801C01D8
  c->r[31]=c->r[31]+0x00000008u; // 801C01DC
  W8(c->r[4]+0x00000007u,c->r[0]); // 801C01E0
  c->r[4]=c->r[4]+0x00000008u; // 801C01E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C019C; } // 801C01E8
L_801C01EC:;
  c->r[0]=c->r[30]-c->r[5]; // 801C01EC
  c->ctr=c->r[0]; // 801C01F0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 801C01F4
  if (!crb(c,0)) { goto L_801C0214; } // 801C01F8
L_801C01FC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C01FC
  c->r[5]=c->r[5]+0x00000001u; // 801C0200
  c->r[31]=c->r[31]+0x00000001u; // 801C0204
  W8(c->r[4]+0x00000000u,c->r[0]); // 801C0208
  c->r[4]=c->r[4]+0x00000001u; // 801C020C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C01FC; } // 801C0210
L_801C0214:;
  cmps(c,0,(int32_t)c->r[5],16); // 801C0214
  c->r[5]=addc(c,~c->r[5],0x00000010u,1); // 801C0218
  c->r[6]=0u+0x00000000u; // 801C021C
  if (!crb(c,0)) { goto L_801C0270; } // 801C0220
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801C0224
  c->ctr=c->r[0]; // 801C0228
  if (crb(c,2)) { goto L_801C0260; } // 801C022C
L_801C0230:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 801C0230
  W8(c->r[4]+0x00000001u,c->r[6]); // 801C0234
  W8(c->r[4]+0x00000002u,c->r[6]); // 801C0238
  W8(c->r[4]+0x00000003u,c->r[6]); // 801C023C
  W8(c->r[4]+0x00000004u,c->r[6]); // 801C0240
  W8(c->r[4]+0x00000005u,c->r[6]); // 801C0244
  W8(c->r[4]+0x00000006u,c->r[6]); // 801C0248
  W8(c->r[4]+0x00000007u,c->r[6]); // 801C024C
  c->r[4]=c->r[4]+0x00000008u; // 801C0250
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C0230; } // 801C0254
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801C0258
  if (crb(c,2)) { goto L_801C0270; } // 801C025C
L_801C0260:;
  c->ctr=c->r[5]; // 801C0260
L_801C0264:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 801C0264
  c->r[4]=c->r[4]+0x00000001u; // 801C0268
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C0264; } // 801C026C
L_801C0270:;
  c->lr=0x801C0274u; f_801BDA44(c); // 801C0270
  c->r[3]=0u+0x00000001u; // 801C0274
L_801C0278:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0278
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C027C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0280
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C0284
  c->lr=c->r[0]; // 801C0288
  c->r[1]=c->r[1]+0x00000020u; // 801C028C
  return; // 801C0290
}

// btsnd_hcic_pin_code_neg_reply
void f_801C0294(Ctx* __restrict c) {
  trace_call(0x801C0294u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0294
  c->r[0]=c->lr; // 801C0298
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C029C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C02A0
  c->r[31]=c->r[3]|c->r[3]; // 801C02A4
  c->r[3]=0u+0x00000002u; // 801C02A8
  c->lr=0x801C02B0u; f_801AA140(c); // 801C02AC
  cmps(c,0,(int32_t)c->r[3],0); // 801C02B0
  if (!crb(c,2)) { goto L_801C02C0; } // 801C02B4
  c->r[3]=0u+0x00000000u; // 801C02B8
  goto L_801C0320; // 801C02BC
L_801C02C0:;
  c->r[0]=0u+0x00000009u; // 801C02C0
  c->r[6]=0u+0x00000000u; // 801C02C4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C02C8
  c->r[5]=0u+0x0000000Eu; // 801C02CC
  c->r[4]=0u+0x00000004u; // 801C02D0
  c->r[0]=0u+0x00000006u; // 801C02D4
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C02D8
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C02DC
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C02E0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C02E4
  c->r[0]=R8(c->r[31]+0x00000005u); // 801C02E8
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C02EC
  c->r[0]=R8(c->r[31]+0x00000004u); // 801C02F0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C02F4
  c->r[0]=R8(c->r[31]+0x00000003u); // 801C02F8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C02FC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801C0300
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C0304
  c->r[0]=R8(c->r[31]+0x00000001u); // 801C0308
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C030C
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C0310
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C0314
  c->lr=0x801C031Cu; f_801BDA44(c); // 801C0318
  c->r[3]=0u+0x00000001u; // 801C031C
L_801C0320:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0324
  c->lr=c->r[0]; // 801C0328
  c->r[1]=c->r[1]+0x00000010u; // 801C032C
  return; // 801C0330
}

// btsnd_hcic_change_conn_type
void f_801C0334(Ctx* __restrict c) {
  trace_call(0x801C0334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0334
  c->r[0]=c->lr; // 801C0338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C033C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0340
  c->r[31]=c->r[4]|c->r[4]; // 801C0344
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0348
  c->r[30]=c->r[3]|c->r[3]; // 801C034C
  c->r[3]=0u+0x00000002u; // 801C0350
  c->lr=0x801C0358u; f_801AA140(c); // 801C0354
  cmps(c,0,(int32_t)c->r[3],0); // 801C0358
  if (!crb(c,2)) { goto L_801C0368; } // 801C035C
  c->r[3]=0u+0x00000000u; // 801C0360
  goto L_801C03AC; // 801C0364
L_801C0368:;
  c->r[4]=0u+0x00000007u; // 801C0368
  c->r[0]=0u+0x00000000u; // 801C036C
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0370
  c->r[6]=0u+0x0000000Fu; // 801C0374
  c->r[5]=0u+0x00000004u; // 801C0378
  c->r[4]=sraw(c,c->r[30],8); // 801C037C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0380
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0384
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0388
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C038C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C0390
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801C0394
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801C0398
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801C039C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C03A0
  c->lr=0x801C03A8u; f_801BDA44(c); // 801C03A4
  c->r[3]=0u+0x00000001u; // 801C03A8
L_801C03AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C03AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C03B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C03B4
  c->lr=c->r[0]; // 801C03B8
  c->r[1]=c->r[1]+0x00000010u; // 801C03BC
  return; // 801C03C0
}

// btsnd_hcic_auth_request
void f_801C03C4(Ctx* __restrict c) {
  trace_call(0x801C03C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C03C4
  c->r[0]=c->lr; // 801C03C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C03CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C03D0
  c->r[31]=c->r[3]|c->r[3]; // 801C03D4
  c->r[3]=0u+0x00000002u; // 801C03D8
  c->lr=0x801C03E0u; f_801AA140(c); // 801C03DC
  cmps(c,0,(int32_t)c->r[3],0); // 801C03E0
  if (!crb(c,2)) { goto L_801C03F0; } // 801C03E4
  c->r[3]=0u+0x00000000u; // 801C03E8
  goto L_801C042C; // 801C03EC
L_801C03F0:;
  c->r[4]=0u+0x00000005u; // 801C03F0
  c->r[0]=0u+0x00000000u; // 801C03F4
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C03F8
  c->r[6]=0u+0x00000011u; // 801C03FC
  c->r[5]=0u+0x00000004u; // 801C0400
  c->r[4]=0u+0x00000002u; // 801C0404
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0408
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C040C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0410
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C0414
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0418
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C041C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C0420
  c->lr=0x801C0428u; f_801BDA44(c); // 801C0424
  c->r[3]=0u+0x00000001u; // 801C0428
L_801C042C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C042C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0430
  c->lr=c->r[0]; // 801C0434
  c->r[1]=c->r[1]+0x00000010u; // 801C0438
  return; // 801C043C
}

// btsnd_hcic_set_conn_encrypt
void f_801C0440(Ctx* __restrict c) {
  trace_call(0x801C0440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0440
  c->r[0]=c->lr; // 801C0444
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C044C
  c->r[31]=c->r[4]|c->r[4]; // 801C0450
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0454
  c->r[30]=c->r[3]|c->r[3]; // 801C0458
  c->r[3]=0u+0x00000002u; // 801C045C
  c->lr=0x801C0464u; f_801AA140(c); // 801C0460
  cmps(c,0,(int32_t)c->r[3],0); // 801C0464
  if (!crb(c,2)) { goto L_801C0474; } // 801C0468
  c->r[3]=0u+0x00000000u; // 801C046C
  goto L_801C04B4; // 801C0470
L_801C0474:;
  c->r[4]=0u+0x00000006u; // 801C0474
  c->r[0]=0u+0x00000000u; // 801C0478
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C047C
  c->r[6]=0u+0x00000013u; // 801C0480
  c->r[5]=0u+0x00000004u; // 801C0484
  c->r[4]=0u+0x00000003u; // 801C0488
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C048C
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801C0490
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0494
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C0498
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C049C
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801C04A0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C04A4
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801C04A8
  c->lr=0x801C04B0u; f_801BDA44(c); // 801C04AC
  c->r[3]=0u+0x00000001u; // 801C04B0
L_801C04B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C04B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C04B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C04BC
  c->lr=c->r[0]; // 801C04C0
  c->r[1]=c->r[1]+0x00000010u; // 801C04C4
  return; // 801C04C8
}

// btsnd_hcic_rmt_name_req
void f_801C04CC(Ctx* __restrict c) {
  trace_call(0x801C04CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C04CC
  c->r[0]=c->lr; // 801C04D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C04D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C04D8
  c->r[31]=c->r[6]|c->r[6]; // 801C04DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C04E0
  c->r[30]=c->r[5]|c->r[5]; // 801C04E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C04E8
  c->r[29]=c->r[4]|c->r[4]; // 801C04EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C04F0
  c->r[28]=c->r[3]|c->r[3]; // 801C04F4
  c->r[3]=0u+0x00000002u; // 801C04F8
  c->lr=0x801C0500u; f_801AA140(c); // 801C04FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C0500
  if (!crb(c,2)) { goto L_801C0510; } // 801C0504
  c->r[3]=0u+0x00000000u; // 801C0508
  goto L_801C0584; // 801C050C
L_801C0510:;
  c->r[4]=0u+0x0000000Du; // 801C0510
  c->r[0]=0u+0x00000000u; // 801C0514
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0518
  c->r[6]=0u+0x00000019u; // 801C051C
  c->r[5]=0u+0x00000004u; // 801C0520
  c->r[4]=0u+0x0000000Au; // 801C0524
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0528
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C052C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0530
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C0534
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0538
  c->r[4]=R8(c->r[28]+0x00000005u); // 801C053C
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C0540
  c->r[4]=R8(c->r[28]+0x00000004u); // 801C0544
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801C0548
  c->r[4]=R8(c->r[28]+0x00000003u); // 801C054C
  W8(c->r[3]+0x0000000Du,c->r[4]); // 801C0550
  c->r[4]=R8(c->r[28]+0x00000002u); // 801C0554
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801C0558
  c->r[4]=R8(c->r[28]+0x00000001u); // 801C055C
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 801C0560
  c->r[4]=R8(c->r[28]+0x00000000u); // 801C0564
  W8(c->r[3]+0x00000010u,c->r[4]); // 801C0568
  W8(c->r[3]+0x00000011u,c->r[29]); // 801C056C
  W8(c->r[3]+0x00000012u,c->r[30]); // 801C0570
  W8(c->r[3]+0x00000013u,c->r[31]); // 801C0574
  W8(c->r[3]+0x00000014u,c->r[0]); // 801C0578
  c->lr=0x801C0580u; f_801BDA44(c); // 801C057C
  c->r[3]=0u+0x00000001u; // 801C0580
L_801C0584:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0584
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0588
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C058C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C0590
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C0594
  c->lr=c->r[0]; // 801C0598
  c->r[1]=c->r[1]+0x00000020u; // 801C059C
  return; // 801C05A0
}

// btsnd_hcic_rmt_name_req_cancel
void f_801C05A4(Ctx* __restrict c) {
  trace_call(0x801C05A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C05A4
  c->r[0]=c->lr; // 801C05A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C05AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C05B0
  c->r[31]=c->r[3]|c->r[3]; // 801C05B4
  c->r[3]=0u+0x00000002u; // 801C05B8
  c->lr=0x801C05C0u; f_801AA140(c); // 801C05BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C05C0
  if (!crb(c,2)) { goto L_801C05D0; } // 801C05C4
  c->r[3]=0u+0x00000000u; // 801C05C8
  goto L_801C0630; // 801C05CC
L_801C05D0:;
  c->r[0]=0u+0x00000009u; // 801C05D0
  c->r[6]=0u+0x00000000u; // 801C05D4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C05D8
  c->r[5]=0u+0x0000001Au; // 801C05DC
  c->r[4]=0u+0x00000004u; // 801C05E0
  c->r[0]=0u+0x00000006u; // 801C05E4
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C05E8
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C05EC
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C05F0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C05F4
  c->r[0]=R8(c->r[31]+0x00000005u); // 801C05F8
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C05FC
  c->r[0]=R8(c->r[31]+0x00000004u); // 801C0600
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C0604
  c->r[0]=R8(c->r[31]+0x00000003u); // 801C0608
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C060C
  c->r[0]=R8(c->r[31]+0x00000002u); // 801C0610
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C0614
  c->r[0]=R8(c->r[31]+0x00000001u); // 801C0618
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C061C
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C0620
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C0624
  c->lr=0x801C062Cu; f_801BDA44(c); // 801C0628
  c->r[3]=0u+0x00000001u; // 801C062C
L_801C0630:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0634
  c->lr=c->r[0]; // 801C0638
  c->r[1]=c->r[1]+0x00000010u; // 801C063C
  return; // 801C0640
}

// btsnd_hcic_rmt_features_req
void f_801C0644(Ctx* __restrict c) {
  trace_call(0x801C0644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0644
  c->r[0]=c->lr; // 801C0648
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C064C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0650
  c->r[31]=c->r[3]|c->r[3]; // 801C0654
  c->r[3]=0u+0x00000002u; // 801C0658
  c->lr=0x801C0660u; f_801AA140(c); // 801C065C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0660
  if (!crb(c,2)) { goto L_801C0670; } // 801C0664
  c->r[3]=0u+0x00000000u; // 801C0668
  goto L_801C06AC; // 801C066C
L_801C0670:;
  c->r[4]=0u+0x00000005u; // 801C0670
  c->r[0]=0u+0x00000000u; // 801C0674
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0678
  c->r[6]=0u+0x0000001Bu; // 801C067C
  c->r[5]=0u+0x00000004u; // 801C0680
  c->r[4]=0u+0x00000002u; // 801C0684
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0688
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C068C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0690
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C0694
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0698
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C069C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C06A0
  c->lr=0x801C06A8u; f_801BDA44(c); // 801C06A4
  c->r[3]=0u+0x00000001u; // 801C06A8
L_801C06AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C06AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C06B0
  c->lr=c->r[0]; // 801C06B4
  c->r[1]=c->r[1]+0x00000010u; // 801C06B8
  return; // 801C06BC
}

// btsnd_hcic_rmt_ver_req
void f_801C06C0(Ctx* __restrict c) {
  trace_call(0x801C06C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C06C0
  c->r[0]=c->lr; // 801C06C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C06C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C06CC
  c->r[31]=c->r[3]|c->r[3]; // 801C06D0
  c->r[3]=0u+0x00000002u; // 801C06D4
  c->lr=0x801C06DCu; f_801AA140(c); // 801C06D8
  cmps(c,0,(int32_t)c->r[3],0); // 801C06DC
  if (!crb(c,2)) { goto L_801C06EC; } // 801C06E0
  c->r[3]=0u+0x00000000u; // 801C06E4
  goto L_801C0728; // 801C06E8
L_801C06EC:;
  c->r[4]=0u+0x00000005u; // 801C06EC
  c->r[0]=0u+0x00000000u; // 801C06F0
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C06F4
  c->r[6]=0u+0x0000001Du; // 801C06F8
  c->r[5]=0u+0x00000004u; // 801C06FC
  c->r[4]=0u+0x00000002u; // 801C0700
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0704
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0708
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C070C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C0710
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0714
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C0718
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C071C
  c->lr=0x801C0724u; f_801BDA44(c); // 801C0720
  c->r[3]=0u+0x00000001u; // 801C0724
L_801C0728:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C072C
  c->lr=c->r[0]; // 801C0730
  c->r[1]=c->r[1]+0x00000010u; // 801C0734
  return; // 801C0738
}

// btsnd_hcic_read_rmt_clk_offset
void f_801C073C(Ctx* __restrict c) {
  trace_call(0x801C073Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C073C
  c->r[0]=c->lr; // 801C0740
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0748
  c->r[31]=c->r[3]|c->r[3]; // 801C074C
  c->r[3]=0u+0x00000002u; // 801C0750
  c->lr=0x801C0758u; f_801AA140(c); // 801C0754
  cmps(c,0,(int32_t)c->r[3],0); // 801C0758
  if (!crb(c,2)) { goto L_801C0768; } // 801C075C
  c->r[3]=0u+0x00000000u; // 801C0760
  goto L_801C07A4; // 801C0764
L_801C0768:;
  c->r[4]=0u+0x00000005u; // 801C0768
  c->r[0]=0u+0x00000000u; // 801C076C
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0770
  c->r[6]=0u+0x0000001Fu; // 801C0774
  c->r[5]=0u+0x00000004u; // 801C0778
  c->r[4]=0u+0x00000002u; // 801C077C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0780
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0784
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0788
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C078C
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0790
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C0794
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C0798
  c->lr=0x801C07A0u; f_801BDA44(c); // 801C079C
  c->r[3]=0u+0x00000001u; // 801C07A0
L_801C07A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C07A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C07A8
  c->lr=c->r[0]; // 801C07AC
  c->r[1]=c->r[1]+0x00000010u; // 801C07B0
  return; // 801C07B4
}

// btsnd_hcic_setup_esco_conn
void f_801C07B8(Ctx* __restrict c) {
  trace_call(0x801C07B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C07B8
  c->r[0]=c->lr; // 801C07BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C07C0
  c->r[11]=c->r[1]+0x00000030u; // 801C07C4
  c->lr=0x801C07CCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C07C8
  c->r[25]=c->r[3]|c->r[3]; // 801C07CC
  c->r[26]=c->r[4]|c->r[4]; // 801C07D0
  c->r[27]=c->r[5]|c->r[5]; // 801C07D4
  c->r[28]=c->r[6]|c->r[6]; // 801C07D8
  c->r[29]=c->r[7]|c->r[7]; // 801C07DC
  c->r[30]=c->r[8]|c->r[8]; // 801C07E0
  c->r[31]=c->r[9]|c->r[9]; // 801C07E4
  c->r[3]=0u+0x00000002u; // 801C07E8
  c->lr=0x801C07F0u; f_801AA140(c); // 801C07EC
  cmps(c,0,(int32_t)c->r[3],0); // 801C07F0
  if (!crb(c,2)) { goto L_801C0800; } // 801C07F4
  c->r[3]=0u+0x00000000u; // 801C07F8
  goto L_801C089C; // 801C07FC
L_801C0800:;
  c->r[0]=0u+0x00000014u; // 801C0800
  c->r[12]=sraw(c,c->r[25],8); // 801C0804
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C0808
  c->r[0]=0u+0x00000000u; // 801C080C
  c->r[6]=0u+0x00000028u; // 801C0810
  c->r[4]=0u+0x00000004u; // 801C0814
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0818
  c->r[0]=0u+0x00000011u; // 801C081C
  c->r[11]=rotl(c->r[26],24)&0x000000FFu; // 801C0820
  c->r[10]=rotl(c->r[26],16)&0x000000FFu; // 801C0824
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0828
  c->r[9]=rotl(c->r[26],8)&0x000000FFu; // 801C082C
  c->r[8]=rotl(c->r[27],24)&0x000000FFu; // 801C0830
  c->r[7]=rotl(c->r[27],16)&0x000000FFu; // 801C0834
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C0838
  c->r[5]=sraw(c,c->r[28],8); // 801C083C
  c->r[6]=rotl(c->r[27],8)&0x000000FFu; // 801C0840
  c->r[4]=sraw(c,c->r[29],8); // 801C0844
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C0848
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C084C
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 801C0850
  W8(c->r[3]+0x0000000Cu,c->r[12]); // 801C0854
  W8(c->r[3]+0x0000000Du,c->r[26]); // 801C0858
  W8(c->r[3]+0x0000000Eu,c->r[11]); // 801C085C
  W8(c->r[3]+0x0000000Fu,c->r[10]); // 801C0860
  W8(c->r[3]+0x00000010u,c->r[9]); // 801C0864
  W8(c->r[3]+0x00000011u,c->r[27]); // 801C0868
  W8(c->r[3]+0x00000012u,c->r[8]); // 801C086C
  W8(c->r[3]+0x00000013u,c->r[7]); // 801C0870
  W8(c->r[3]+0x00000014u,c->r[6]); // 801C0874
  W8(c->r[3]+0x00000015u,c->r[28]); // 801C0878
  W8(c->r[3]+0x00000016u,c->r[5]); // 801C087C
  W8(c->r[3]+0x00000017u,c->r[29]); // 801C0880
  W8(c->r[3]+0x00000018u,c->r[4]); // 801C0884
  W8(c->r[3]+0x00000019u,c->r[30]); // 801C0888
  W8(c->r[3]+0x0000001Au,c->r[31]); // 801C088C
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801C0890
  c->lr=0x801C0898u; f_801BDA44(c); // 801C0894
  c->r[3]=0u+0x00000001u; // 801C0898
L_801C089C:;
  c->r[11]=c->r[1]+0x00000030u; // 801C089C
  c->lr=0x801C08A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C08A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C08A4
  c->lr=c->r[0]; // 801C08A8
  c->r[1]=c->r[1]+0x00000030u; // 801C08AC
  return; // 801C08B0
}

// btsnd_hcic_accept_esco_conn
void f_801C08B4(Ctx* __restrict c) {
  trace_call(0x801C08B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C08B4
  c->r[0]=c->lr; // 801C08B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C08BC
  c->r[11]=c->r[1]+0x00000030u; // 801C08C0
  c->lr=0x801C08C8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C08C4
  c->r[26]=0u+0x00000018u; // 801C08C8
  c->r[12]=0u+0x00000000u; // 801C08CC
  c->r[11]=0u+0x00000029u; // 801C08D0
  c->r[0]=0u+0x00000004u; // 801C08D4
  c->r[25]=0u+0x00000015u; // 801C08D8
  W16(c->r[3]+0x00000002u,c->r[26]); // 801C08DC
  c->r[26]=rotl(c->r[5],24)&0x000000FFu; // 801C08E0
  c->r[27]=rotl(c->r[5],16)&0x000000FFu; // 801C08E4
  W16(c->r[3]+0x00000004u,c->r[12]); // 801C08E8
  c->r[28]=rotl(c->r[5],8)&0x000000FFu; // 801C08EC
  c->r[29]=rotl(c->r[6],24)&0x000000FFu; // 801C08F0
  c->r[30]=rotl(c->r[6],16)&0x000000FFu; // 801C08F4
  W8(c->r[3]+0x00000008u,c->r[11]); // 801C08F8
  c->r[31]=rotl(c->r[6],8)&0x000000FFu; // 801C08FC
  c->r[12]=sraw(c,c->r[7],8); // 801C0900
  c->r[11]=rotl(c->r[8],24)&0x000000FFu; // 801C0904
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C0908
  c->r[0]=rotl(c->r[10],24)&0x000000FFu; // 801C090C
  W8(c->r[3]+0x0000000Au,c->r[25]); // 801C0910
  c->r[25]=R8(c->r[4]+0x00000005u); // 801C0914
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 801C0918
  c->r[25]=R8(c->r[4]+0x00000004u); // 801C091C
  W8(c->r[3]+0x0000000Cu,c->r[25]); // 801C0920
  c->r[25]=R8(c->r[4]+0x00000003u); // 801C0924
  W8(c->r[3]+0x0000000Du,c->r[25]); // 801C0928
  c->r[25]=R8(c->r[4]+0x00000002u); // 801C092C
  W8(c->r[3]+0x0000000Eu,c->r[25]); // 801C0930
  c->r[25]=R8(c->r[4]+0x00000001u); // 801C0934
  W8(c->r[3]+0x0000000Fu,c->r[25]); // 801C0938
  c->r[4]=R8(c->r[4]+0x00000000u); // 801C093C
  W8(c->r[3]+0x00000010u,c->r[4]); // 801C0940
  W8(c->r[3]+0x00000011u,c->r[5]); // 801C0944
  W8(c->r[3]+0x00000012u,c->r[26]); // 801C0948
  W8(c->r[3]+0x00000013u,c->r[27]); // 801C094C
  W8(c->r[3]+0x00000014u,c->r[28]); // 801C0950
  W8(c->r[3]+0x00000015u,c->r[6]); // 801C0954
  W8(c->r[3]+0x00000016u,c->r[29]); // 801C0958
  W8(c->r[3]+0x00000017u,c->r[30]); // 801C095C
  W8(c->r[3]+0x00000018u,c->r[31]); // 801C0960
  W8(c->r[3]+0x00000019u,c->r[7]); // 801C0964
  W8(c->r[3]+0x0000001Au,c->r[12]); // 801C0968
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 801C096C
  W8(c->r[3]+0x0000001Cu,c->r[11]); // 801C0970
  W8(c->r[3]+0x0000001Du,c->r[9]); // 801C0974
  W8(c->r[3]+0x0000001Eu,c->r[10]); // 801C0978
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801C097C
  c->lr=0x801C0984u; f_801BDA44(c); // 801C0980
  c->r[11]=c->r[1]+0x00000030u; // 801C0984
  c->lr=0x801C098Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0988
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C098C
  c->lr=c->r[0]; // 801C0990
  c->r[1]=c->r[1]+0x00000030u; // 801C0994
  return; // 801C0998
}

// btsnd_hcic_reject_esco_conn
void f_801C099C(Ctx* __restrict c) {
  trace_call(0x801C099Cu);
  c->r[9]=0u+0x0000000Au; // 801C099C
  c->r[8]=0u+0x00000000u; // 801C09A0
  c->r[7]=0u+0x0000002Au; // 801C09A4
  c->r[6]=0u+0x00000004u; // 801C09A8
  c->r[0]=0u+0x00000007u; // 801C09AC
  W16(c->r[3]+0x00000002u,c->r[9]); // 801C09B0
  W16(c->r[3]+0x00000004u,c->r[8]); // 801C09B4
  W8(c->r[3]+0x00000008u,c->r[7]); // 801C09B8
  W8(c->r[3]+0x00000009u,c->r[6]); // 801C09BC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C09C0
  c->r[0]=R8(c->r[4]+0x00000005u); // 801C09C4
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C09C8
  c->r[0]=R8(c->r[4]+0x00000004u); // 801C09CC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C09D0
  c->r[0]=R8(c->r[4]+0x00000003u); // 801C09D4
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C09D8
  c->r[0]=R8(c->r[4]+0x00000002u); // 801C09DC
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C09E0
  c->r[0]=R8(c->r[4]+0x00000001u); // 801C09E4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C09E8
  c->r[0]=R8(c->r[4]+0x00000000u); // 801C09EC
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C09F0
  W8(c->r[3]+0x00000011u,c->r[5]); // 801C09F4
  f_801BDA44(c); return; // 801C09F8
}

// btsnd_hcic_hold_mode
void f_801C09FC(Ctx* __restrict c) {
  trace_call(0x801C09FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C09FC
  c->r[0]=c->lr; // 801C0A00
  cmps(c,0,(int32_t)c->r[3],0); // 801C0A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0A08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0A0C
  c->r[31]=c->r[6]|c->r[6]; // 801C0A10
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C0A14
  c->r[30]=c->r[5]|c->r[5]; // 801C0A18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C0A1C
  c->r[29]=c->r[4]|c->r[4]; // 801C0A20
  if (!crb(c,2)) { goto L_801C0A40; } // 801C0A24
  c->r[3]=0u+0x00000002u; // 801C0A28
  c->lr=0x801C0A30u; f_801AA140(c); // 801C0A2C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0A30
  if (!crb(c,2)) { goto L_801C0A40; } // 801C0A34
  c->r[3]=0u+0x00000000u; // 801C0A38
  goto L_801C0A94; // 801C0A3C
L_801C0A40:;
  c->r[0]=0u+0x00000009u; // 801C0A40
  c->r[5]=sraw(c,c->r[29],8); // 801C0A44
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C0A48
  c->r[0]=0u+0x00000000u; // 801C0A4C
  c->r[8]=0u+0x00000001u; // 801C0A50
  c->r[7]=0u+0x00000008u; // 801C0A54
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0A58
  c->r[6]=0u+0x00000006u; // 801C0A5C
  c->r[4]=sraw(c,c->r[30],8); // 801C0A60
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0A64
  W8(c->r[3]+0x00000008u,c->r[8]); // 801C0A68
  W8(c->r[3]+0x00000009u,c->r[7]); // 801C0A6C
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801C0A70
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 801C0A74
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801C0A78
  W8(c->r[3]+0x0000000Du,c->r[30]); // 801C0A7C
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801C0A80
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801C0A84
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C0A88
  c->lr=0x801C0A90u; f_801BDA44(c); // 801C0A8C
  c->r[3]=0u+0x00000001u; // 801C0A90
L_801C0A94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0A94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0A98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0A9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C0AA0
  c->lr=c->r[0]; // 801C0AA4
  c->r[1]=c->r[1]+0x00000020u; // 801C0AA8
  return; // 801C0AAC
}

// btsnd_hcic_sniff_mode
void f_801C0AB0(Ctx* __restrict c) {
  trace_call(0x801C0AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0AB0
  c->r[0]=c->lr; // 801C0AB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0AB8
  c->r[11]=c->r[1]+0x00000020u; // 801C0ABC
  c->lr=0x801C0AC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0AC0
  cmps(c,0,(int32_t)c->r[3],0); // 801C0AC4
  c->r[27]=c->r[4]|c->r[4]; // 801C0AC8
  c->r[28]=c->r[5]|c->r[5]; // 801C0ACC
  c->r[29]=c->r[6]|c->r[6]; // 801C0AD0
  c->r[30]=c->r[7]|c->r[7]; // 801C0AD4
  c->r[31]=c->r[8]|c->r[8]; // 801C0AD8
  if (!crb(c,2)) { goto L_801C0AF8; } // 801C0ADC
  c->r[3]=0u+0x00000002u; // 801C0AE0
  c->lr=0x801C0AE8u; f_801AA140(c); // 801C0AE4
  cmps(c,0,(int32_t)c->r[3],0); // 801C0AE8
  if (!crb(c,2)) { goto L_801C0AF8; } // 801C0AEC
  c->r[3]=0u+0x00000000u; // 801C0AF0
  goto L_801C0B64; // 801C0AF4
L_801C0AF8:;
  c->r[0]=0u+0x0000000Du; // 801C0AF8
  c->r[7]=sraw(c,c->r[27],8); // 801C0AFC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C0B00
  c->r[4]=0u+0x00000000u; // 801C0B04
  c->r[6]=sraw(c,c->r[28],8); // 801C0B08
  c->r[0]=0u+0x00000003u; // 801C0B0C
  W16(c->r[3]+0x00000004u,c->r[4]); // 801C0B10
  c->r[5]=sraw(c,c->r[29],8); // 801C0B14
  c->r[9]=0u+0x00000008u; // 801C0B18
  c->r[8]=0u+0x0000000Au; // 801C0B1C
  W8(c->r[3]+0x00000008u,c->r[0]); // 801C0B20
  c->r[4]=sraw(c,c->r[30],8); // 801C0B24
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0B28
  W8(c->r[3]+0x00000009u,c->r[9]); // 801C0B2C
  W8(c->r[3]+0x0000000Au,c->r[8]); // 801C0B30
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 801C0B34
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 801C0B38
  W8(c->r[3]+0x0000000Du,c->r[28]); // 801C0B3C
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 801C0B40
  W8(c->r[3]+0x0000000Fu,c->r[29]); // 801C0B44
  W8(c->r[3]+0x00000010u,c->r[5]); // 801C0B48
  W8(c->r[3]+0x00000011u,c->r[30]); // 801C0B4C
  W8(c->r[3]+0x00000012u,c->r[4]); // 801C0B50
  W8(c->r[3]+0x00000013u,c->r[31]); // 801C0B54
  W8(c->r[3]+0x00000014u,c->r[0]); // 801C0B58
  c->lr=0x801C0B60u; f_801BDA44(c); // 801C0B5C
  c->r[3]=0u+0x00000001u; // 801C0B60
L_801C0B64:;
  c->r[11]=c->r[1]+0x00000020u; // 801C0B64
  c->lr=0x801C0B6Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0B68
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0B6C
  c->lr=c->r[0]; // 801C0B70
  c->r[1]=c->r[1]+0x00000020u; // 801C0B74
  return; // 801C0B78
}

// btsnd_hcic_exit_sniff_mode
void f_801C0B7C(Ctx* __restrict c) {
  trace_call(0x801C0B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0B7C
  c->r[0]=c->lr; // 801C0B80
  cmps(c,0,(int32_t)c->r[3],0); // 801C0B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0B88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0B8C
  c->r[31]=c->r[4]|c->r[4]; // 801C0B90
  if (!crb(c,2)) { goto L_801C0BB0; } // 801C0B94
  c->r[3]=0u+0x00000002u; // 801C0B98
  c->lr=0x801C0BA0u; f_801AA140(c); // 801C0B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0BA0
  if (!crb(c,2)) { goto L_801C0BB0; } // 801C0BA4
  c->r[3]=0u+0x00000000u; // 801C0BA8
  goto L_801C0BEC; // 801C0BAC
L_801C0BB0:;
  c->r[4]=0u+0x00000005u; // 801C0BB0
  c->r[0]=0u+0x00000000u; // 801C0BB4
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0BB8
  c->r[6]=0u+0x00000004u; // 801C0BBC
  c->r[5]=0u+0x00000008u; // 801C0BC0
  c->r[4]=0u+0x00000002u; // 801C0BC4
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0BC8
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0BCC
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0BD0
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C0BD4
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0BD8
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C0BDC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C0BE0
  c->lr=0x801C0BE8u; f_801BDA44(c); // 801C0BE4
  c->r[3]=0u+0x00000001u; // 801C0BE8
L_801C0BEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0BEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0BF0
  c->lr=c->r[0]; // 801C0BF4
  c->r[1]=c->r[1]+0x00000010u; // 801C0BF8
  return; // 801C0BFC
}

// btsnd_hcic_park_mode
void f_801C0C00(Ctx* __restrict c) {
  trace_call(0x801C0C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0C00
  c->r[0]=c->lr; // 801C0C04
  cmps(c,0,(int32_t)c->r[3],0); // 801C0C08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0C0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0C10
  c->r[31]=c->r[6]|c->r[6]; // 801C0C14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C0C18
  c->r[30]=c->r[5]|c->r[5]; // 801C0C1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C0C20
  c->r[29]=c->r[4]|c->r[4]; // 801C0C24
  if (!crb(c,2)) { goto L_801C0C44; } // 801C0C28
  c->r[3]=0u+0x00000002u; // 801C0C2C
  c->lr=0x801C0C34u; f_801AA140(c); // 801C0C30
  cmps(c,0,(int32_t)c->r[3],0); // 801C0C34
  if (!crb(c,2)) { goto L_801C0C44; } // 801C0C38
  c->r[3]=0u+0x00000000u; // 801C0C3C
  goto L_801C0C98; // 801C0C40
L_801C0C44:;
  c->r[0]=0u+0x00000009u; // 801C0C44
  c->r[5]=sraw(c,c->r[29],8); // 801C0C48
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C0C4C
  c->r[0]=0u+0x00000000u; // 801C0C50
  c->r[8]=0u+0x00000005u; // 801C0C54
  c->r[7]=0u+0x00000008u; // 801C0C58
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0C5C
  c->r[6]=0u+0x00000006u; // 801C0C60
  c->r[4]=sraw(c,c->r[30],8); // 801C0C64
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0C68
  W8(c->r[3]+0x00000008u,c->r[8]); // 801C0C6C
  W8(c->r[3]+0x00000009u,c->r[7]); // 801C0C70
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801C0C74
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 801C0C78
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801C0C7C
  W8(c->r[3]+0x0000000Du,c->r[30]); // 801C0C80
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801C0C84
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801C0C88
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C0C8C
  c->lr=0x801C0C94u; f_801BDA44(c); // 801C0C90
  c->r[3]=0u+0x00000001u; // 801C0C94
L_801C0C98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0C98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0C9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0CA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C0CA4
  c->lr=c->r[0]; // 801C0CA8
  c->r[1]=c->r[1]+0x00000020u; // 801C0CAC
  return; // 801C0CB0
}

// btsnd_hcic_exit_park_mode
void f_801C0CB4(Ctx* __restrict c) {
  trace_call(0x801C0CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0CB4
  c->r[0]=c->lr; // 801C0CB8
  cmps(c,0,(int32_t)c->r[3],0); // 801C0CBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0CC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0CC4
  c->r[31]=c->r[4]|c->r[4]; // 801C0CC8
  if (!crb(c,2)) { goto L_801C0CE8; } // 801C0CCC
  c->r[3]=0u+0x00000002u; // 801C0CD0
  c->lr=0x801C0CD8u; f_801AA140(c); // 801C0CD4
  cmps(c,0,(int32_t)c->r[3],0); // 801C0CD8
  if (!crb(c,2)) { goto L_801C0CE8; } // 801C0CDC
  c->r[3]=0u+0x00000000u; // 801C0CE0
  goto L_801C0D24; // 801C0CE4
L_801C0CE8:;
  c->r[4]=0u+0x00000005u; // 801C0CE8
  c->r[0]=0u+0x00000000u; // 801C0CEC
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0CF0
  c->r[6]=0u+0x00000006u; // 801C0CF4
  c->r[5]=0u+0x00000008u; // 801C0CF8
  c->r[4]=0u+0x00000002u; // 801C0CFC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0D00
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0D04
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C0D08
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C0D0C
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0D10
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C0D14
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C0D18
  c->lr=0x801C0D20u; f_801BDA44(c); // 801C0D1C
  c->r[3]=0u+0x00000001u; // 801C0D20
L_801C0D24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0D28
  c->lr=c->r[0]; // 801C0D2C
  c->r[1]=c->r[1]+0x00000010u; // 801C0D30
  return; // 801C0D34
}

// btsnd_hcic_switch_role
void f_801C0D38(Ctx* __restrict c) {
  trace_call(0x801C0D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0D38
  c->r[0]=c->lr; // 801C0D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0D40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0D44
  c->r[31]=c->r[4]|c->r[4]; // 801C0D48
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0D4C
  c->r[30]=c->r[3]|c->r[3]; // 801C0D50
  c->r[3]=0u+0x00000002u; // 801C0D54
  c->lr=0x801C0D5Cu; f_801AA140(c); // 801C0D58
  cmps(c,0,(int32_t)c->r[3],0); // 801C0D5C
  if (!crb(c,2)) { goto L_801C0D6C; } // 801C0D60
  c->r[3]=0u+0x00000000u; // 801C0D64
  goto L_801C0DD0; // 801C0D68
L_801C0D6C:;
  c->r[0]=0u+0x0000000Au; // 801C0D6C
  c->r[6]=0u+0x00000000u; // 801C0D70
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C0D74
  c->r[5]=0u+0x0000000Bu; // 801C0D78
  c->r[4]=0u+0x00000008u; // 801C0D7C
  c->r[0]=0u+0x00000007u; // 801C0D80
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C0D84
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C0D88
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C0D8C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C0D90
  c->r[0]=R8(c->r[30]+0x00000005u); // 801C0D94
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C0D98
  c->r[0]=R8(c->r[30]+0x00000004u); // 801C0D9C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C0DA0
  c->r[0]=R8(c->r[30]+0x00000003u); // 801C0DA4
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C0DA8
  c->r[0]=R8(c->r[30]+0x00000002u); // 801C0DAC
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C0DB0
  c->r[0]=R8(c->r[30]+0x00000001u); // 801C0DB4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C0DB8
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C0DBC
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C0DC0
  W8(c->r[3]+0x00000011u,c->r[31]); // 801C0DC4
  c->lr=0x801C0DCCu; f_801BDA44(c); // 801C0DC8
  c->r[3]=0u+0x00000001u; // 801C0DCC
L_801C0DD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0DD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0DD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C0DD8
  c->lr=c->r[0]; // 801C0DDC
  c->r[1]=c->r[1]+0x00000010u; // 801C0DE0
  return; // 801C0DE4
}

// btsnd_hcic_write_policy_set
void f_801C0DE8(Ctx* __restrict c) {
  trace_call(0x801C0DE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0DE8
  c->r[0]=c->lr; // 801C0DEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0DF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0DF4
  c->r[31]=c->r[4]|c->r[4]; // 801C0DF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0DFC
  c->r[30]=c->r[3]|c->r[3]; // 801C0E00
  c->r[3]=0u+0x00000002u; // 801C0E04
  c->lr=0x801C0E0Cu; f_801AA140(c); // 801C0E08
  cmps(c,0,(int32_t)c->r[3],0); // 801C0E0C
  if (!crb(c,2)) { goto L_801C0E1C; } // 801C0E10
  c->r[3]=0u+0x00000000u; // 801C0E14
  goto L_801C0E64; // 801C0E18
L_801C0E1C:;
  c->r[4]=0u+0x00000007u; // 801C0E1C
  c->r[0]=0u+0x00000000u; // 801C0E20
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0E24
  c->r[7]=0u+0x0000000Du; // 801C0E28
  c->r[6]=0u+0x00000008u; // 801C0E2C
  c->r[5]=0u+0x00000004u; // 801C0E30
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0E34
  c->r[4]=sraw(c,c->r[30],8); // 801C0E38
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C0E3C
  W8(c->r[3]+0x00000008u,c->r[7]); // 801C0E40
  W8(c->r[3]+0x00000009u,c->r[6]); // 801C0E44
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C0E48
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801C0E4C
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801C0E50
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801C0E54
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C0E58
  c->lr=0x801C0E60u; f_801BDA44(c); // 801C0E5C
  c->r[3]=0u+0x00000001u; // 801C0E60
L_801C0E64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0E64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0E68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C0E6C
  c->lr=c->r[0]; // 801C0E70
  c->r[1]=c->r[1]+0x00000010u; // 801C0E74
  return; // 801C0E78
}

// btsnd_hcic_reset
void f_801C0E7C(Ctx* __restrict c) {
  trace_call(0x801C0E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0E7C
  c->r[0]=c->lr; // 801C0E80
  c->r[3]=0u+0x00000002u; // 801C0E84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0E88
  c->lr=0x801C0E90u; f_801AA140(c); // 801C0E8C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0E90
  if (!crb(c,2)) { goto L_801C0EA0; } // 801C0E94
  c->r[3]=0u+0x00000000u; // 801C0E98
  goto L_801C0EC8; // 801C0E9C
L_801C0EA0:;
  c->r[5]=0u+0x00000003u; // 801C0EA0
  c->r[4]=0u+0x00000000u; // 801C0EA4
  W16(c->r[3]+0x00000002u,c->r[5]); // 801C0EA8
  c->r[0]=0u+0x0000000Cu; // 801C0EAC
  W16(c->r[3]+0x00000004u,c->r[4]); // 801C0EB0
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C0EB4
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C0EB8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C0EBC
  c->lr=0x801C0EC4u; f_801BDA44(c); // 801C0EC0
  c->r[3]=0u+0x00000001u; // 801C0EC4
L_801C0EC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0EC8
  c->lr=c->r[0]; // 801C0ECC
  c->r[1]=c->r[1]+0x00000010u; // 801C0ED0
  return; // 801C0ED4
}

// btsnd_hcic_set_event_filter
void f_801C0ED8(Ctx* __restrict c) {
  trace_call(0x801C0ED8u);
  c->r[0]=0u+0x00000000u; // 801C0ED8
  c->r[9]=0u+0x00000005u; // 801C0EDC
  c->r[8]=0u+0x0000000Cu; // 801C0EE0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C0EE4
  cmps(c,0,(int32_t)c->r[4],0); // 801C0EE8
  c->r[0]=c->r[6]|c->r[6]; // 801C0EEC
  W8(c->r[3]+0x00000008u,c->r[9]); // 801C0EF0
  W8(c->r[3]+0x00000009u,c->r[8]); // 801C0EF4
  if (crb(c,2)) { goto L_801C107C; } // 801C0EF8
  c->r[8]=c->r[7]+0x00000005u; // 801C0EFC
  c->r[9]=c->r[7]+0x00000002u; // 801C0F00
  W16(c->r[3]+0x00000002u,c->r[8]); // 801C0F04
  cmpu(c,0,c->r[5],0x00000001u); // 801C0F08
  c->r[8]=c->r[3]+0x0000000Du; // 801C0F0C
  W8(c->r[3]+0x0000000Au,c->r[9]); // 801C0F10
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C0F14
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801C0F18
  if (!crb(c,2)) { goto L_801C0F64; } // 801C0F1C
  c->r[4]=R8(c->r[6]+0x00000002u); // 801C0F20
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 801C0F24
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801C0F28
  W8(c->r[8]+0x00000000u,c->r[4]); // 801C0F2C
  c->r[0]=c->r[6]+0x00000006u; // 801C0F30
  c->r[4]=R8(c->r[6]+0x00000001u); // 801C0F34
  W8(c->r[8]+0x00000001u,c->r[4]); // 801C0F38
  c->r[4]=R8(c->r[6]+0x00000000u); // 801C0F3C
  W8(c->r[8]+0x00000002u,c->r[4]); // 801C0F40
  c->r[4]=R8(c->r[6]+0x00000005u); // 801C0F44
  W8(c->r[8]+0x00000003u,c->r[4]); // 801C0F48
  c->r[4]=R8(c->r[6]+0x00000004u); // 801C0F4C
  W8(c->r[8]+0x00000004u,c->r[4]); // 801C0F50
  c->r[4]=R8(c->r[6]+0x00000003u); // 801C0F54
  W8(c->r[8]+0x00000005u,c->r[4]); // 801C0F58
  c->r[8]=c->r[8]+0x00000006u; // 801C0F5C
  goto L_801C0FAC; // 801C0F60
L_801C0F64:;
  cmpu(c,0,c->r[5],0x00000002u); // 801C0F64
  if (!crb(c,2)) { goto L_801C0FAC; } // 801C0F68
  c->r[4]=R8(c->r[6]+0x00000005u); // 801C0F6C
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 801C0F70
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801C0F74
  W8(c->r[8]+0x00000000u,c->r[4]); // 801C0F78
  c->r[0]=c->r[6]+0x00000006u; // 801C0F7C
  c->r[4]=R8(c->r[6]+0x00000004u); // 801C0F80
  W8(c->r[8]+0x00000001u,c->r[4]); // 801C0F84
  c->r[4]=R8(c->r[6]+0x00000003u); // 801C0F88
  W8(c->r[8]+0x00000002u,c->r[4]); // 801C0F8C
  c->r[4]=R8(c->r[6]+0x00000002u); // 801C0F90
  W8(c->r[8]+0x00000003u,c->r[4]); // 801C0F94
  c->r[4]=R8(c->r[6]+0x00000001u); // 801C0F98
  W8(c->r[8]+0x00000004u,c->r[4]); // 801C0F9C
  c->r[4]=R8(c->r[6]+0x00000000u); // 801C0FA0
  W8(c->r[8]+0x00000005u,c->r[4]); // 801C0FA4
  c->r[8]=c->r[8]+0x00000006u; // 801C0FA8
L_801C0FAC:;
  cmps(c,1,(int32_t)c->r[7],0); // 801C0FAC
  if (crb(c,6)) { goto L_801C1090; } // 801C0FB0
  c->r[9]=0u+0x00000000u; // 801C0FB4
  if (!crb(c,5)) { goto L_801C1090; } // 801C0FB8
  cmps(c,0,(int32_t)c->r[7],8); // 801C0FBC
  c->r[5]=c->r[7]+0xFFFFFFF8u; // 801C0FC0
  if (!crb(c,1)) { goto L_801C1050; } // 801C0FC4
  c->r[6]=0u+0x00000000u; // 801C0FC8
  if (crb(c,4)) { goto L_801C0FE4; } // 801C0FCC
  c->r[4]=0u+0x80000000u; // 801C0FD0
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 801C0FD4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801C0FD8
  if (crb(c,1)) { goto L_801C0FE4; } // 801C0FDC
  c->r[6]=0u+0x00000001u; // 801C0FE0
L_801C0FE4:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C0FE4
  if (crb(c,2)) { goto L_801C1050; } // 801C0FE8
  c->r[4]=c->r[5]+0x00000007u; // 801C0FEC
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801C0FF0
  c->ctr=c->r[4]; // 801C0FF4
  cmps(c,0,(int32_t)c->r[5],0); // 801C0FF8
  if (!crb(c,1)) { goto L_801C1050; } // 801C0FFC
L_801C1000:;
  c->r[4]=R8(c->r[9]+c->r[0]); // 801C1000
  c->r[5]=c->r[0]+c->r[9]; // 801C1004
  c->r[9]=c->r[9]+0x00000008u; // 801C1008
  W8(c->r[8]+0x00000000u,c->r[4]); // 801C100C
  c->r[4]=R8(c->r[5]+0x00000001u); // 801C1010
  W8(c->r[8]+0x00000001u,c->r[4]); // 801C1014
  c->r[4]=R8(c->r[5]+0x00000002u); // 801C1018
  W8(c->r[8]+0x00000002u,c->r[4]); // 801C101C
  c->r[4]=R8(c->r[5]+0x00000003u); // 801C1020
  W8(c->r[8]+0x00000003u,c->r[4]); // 801C1024
  c->r[4]=R8(c->r[5]+0x00000004u); // 801C1028
  W8(c->r[8]+0x00000004u,c->r[4]); // 801C102C
  c->r[4]=R8(c->r[5]+0x00000005u); // 801C1030
  W8(c->r[8]+0x00000005u,c->r[4]); // 801C1034
  c->r[4]=R8(c->r[5]+0x00000006u); // 801C1038
  W8(c->r[8]+0x00000006u,c->r[4]); // 801C103C
  c->r[4]=R8(c->r[5]+0x00000007u); // 801C1040
  W8(c->r[8]+0x00000007u,c->r[4]); // 801C1044
  c->r[8]=c->r[8]+0x00000008u; // 801C1048
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C1000; } // 801C104C
L_801C1050:;
  c->r[4]=c->r[7]-c->r[9]; // 801C1050
  c->r[5]=c->r[0]+c->r[9]; // 801C1054
  c->ctr=c->r[4]; // 801C1058
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 801C105C
  if (!crb(c,0)) { goto L_801C1090; } // 801C1060
L_801C1064:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801C1064
  c->r[5]=c->r[5]+0x00000001u; // 801C1068
  W8(c->r[8]+0x00000000u,c->r[0]); // 801C106C
  c->r[8]=c->r[8]+0x00000001u; // 801C1070
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C1064; } // 801C1074
  goto L_801C1090; // 801C1078
L_801C107C:;
  c->r[5]=0u+0x00000004u; // 801C107C
  c->r[0]=0u+0x00000001u; // 801C1080
  W16(c->r[3]+0x00000002u,c->r[5]); // 801C1084
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1088
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C108C
L_801C1090:;
  f_801BDA44(c); return; // 801C1090
}

// btsnd_hcic_write_pin_type
void f_801C1094(Ctx* __restrict c) {
  trace_call(0x801C1094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1094
  c->r[0]=c->lr; // 801C1098
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C109C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C10A0
  c->r[31]=c->r[3]|c->r[3]; // 801C10A4
  c->r[3]=0u+0x00000002u; // 801C10A8
  c->lr=0x801C10B0u; f_801AA140(c); // 801C10AC
  cmps(c,0,(int32_t)c->r[3],0); // 801C10B0
  if (!crb(c,2)) { goto L_801C10C0; } // 801C10B4
  c->r[3]=0u+0x00000000u; // 801C10B8
  goto L_801C10F4; // 801C10BC
L_801C10C0:;
  c->r[0]=0u+0x00000004u; // 801C10C0
  c->r[6]=0u+0x00000000u; // 801C10C4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C10C8
  c->r[5]=0u+0x0000000Au; // 801C10CC
  c->r[4]=0u+0x0000000Cu; // 801C10D0
  c->r[0]=0u+0x00000001u; // 801C10D4
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C10D8
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C10DC
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C10E0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C10E4
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C10E8
  c->lr=0x801C10F0u; f_801BDA44(c); // 801C10EC
  c->r[3]=0u+0x00000001u; // 801C10F0
L_801C10F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C10F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C10F8
  c->lr=c->r[0]; // 801C10FC
  c->r[1]=c->r[1]+0x00000010u; // 801C1100
  return; // 801C1104
}

// btsnd_hcic_read_stored_key
void f_801C1108(Ctx* __restrict c) {
  trace_call(0x801C1108u);
  c->r[9]=0u+0x0000000Au; // 801C1108
  c->r[8]=0u+0x00000000u; // 801C110C
  c->r[7]=0u+0x0000000Du; // 801C1110
  c->r[6]=0u+0x0000000Cu; // 801C1114
  c->r[0]=0u+0x00000007u; // 801C1118
  W16(c->r[3]+0x00000002u,c->r[9]); // 801C111C
  W16(c->r[3]+0x00000004u,c->r[8]); // 801C1120
  W8(c->r[3]+0x00000008u,c->r[7]); // 801C1124
  W8(c->r[3]+0x00000009u,c->r[6]); // 801C1128
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C112C
  c->r[0]=R8(c->r[4]+0x00000005u); // 801C1130
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C1134
  c->r[0]=R8(c->r[4]+0x00000004u); // 801C1138
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C113C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801C1140
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C1144
  c->r[0]=R8(c->r[4]+0x00000002u); // 801C1148
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C114C
  c->r[0]=R8(c->r[4]+0x00000001u); // 801C1150
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C1154
  c->r[0]=R8(c->r[4]+0x00000000u); // 801C1158
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C115C
  W8(c->r[3]+0x00000011u,c->r[5]); // 801C1160
  f_801BDA44(c); return; // 801C1164
}

// btsnd_hcic_write_stored_key
void f_801C1168(Ctx* __restrict c) {
  trace_call(0x801C1168u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1168
  c->r[0]=c->lr; // 801C116C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C1170
  c->r[11]=c->r[1]+0x00000030u; // 801C1174
  c->lr=0x801C117Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C1178
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)22); // 801C117C
  c->r[0]=0u+0x00000000u; // 801C1180
  c->r[9]=0u+0x00000011u; // 801C1184
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C1188
  c->r[8]=0u+0x0000000Cu; // 801C118C
  c->r[10]=c->r[7]+0x00000004u; // 801C1190
  c->r[7]=rotl(c->r[10],0)&0x0000FFFFu; // 801C1194
  cmpu(c,0,c->r[4],0x0000000Bu); // 801C1198
  c->r[0]=c->r[7]+0xFFFFFFFDu; // 801C119C
  W16(c->r[3]+0x00000002u,c->r[10]); // 801C11A0
  W8(c->r[3]+0x00000008u,c->r[9]); // 801C11A4
  W8(c->r[3]+0x00000009u,c->r[8]); // 801C11A8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C11AC
  if (!crb(c,1)) { goto L_801C11B8; } // 801C11B0
  c->r[4]=0u+0x0000000Bu; // 801C11B4
L_801C11B8:;
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C11B8
  c->r[7]=c->r[3]+0x0000000Cu; // 801C11BC
  c->ctr=c->r[4]; // 801C11C0
  cmps(c,0,(int32_t)c->r[4],0); // 801C11C4
  if (!crb(c,1)) { goto L_801C130C; } // 801C11C8
L_801C11CC:;
  c->r[0]=R8(c->r[5]+0x00000005u); // 801C11CC
  c->r[22]=0u+0x00000000u; // 801C11D0
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 801C11D4
  c->r[24]=0u+0x00000001u; // 801C11D8
  W8(c->r[7]+0x00000000u,c->r[0]); // 801C11DC
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 801C11E0
  c->r[26]=0u+0x00000002u; // 801C11E4
  c->r[28]=0u+0x00000003u; // 801C11E8
  c->r[0]=R8(c->r[5]+0x00000004u); // 801C11EC
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 801C11F0
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 801C11F4
  c->r[30]=0u+0x00000004u; // 801C11F8
  W8(c->r[7]+0x00000001u,c->r[0]); // 801C11FC
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 801C1200
  c->r[12]=0u+0x00000005u; // 801C1204
  c->r[10]=0u+0x00000006u; // 801C1208
  c->r[0]=R8(c->r[5]+0x00000003u); // 801C120C
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 801C1210
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 801C1214
  c->r[8]=0u+0x00000007u; // 801C1218
  W8(c->r[7]+0x00000002u,c->r[0]); // 801C121C
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 801C1220
  c->r[22]=0u+0x00000008u; // 801C1224
  c->r[24]=0u+0x00000009u; // 801C1228
  c->r[0]=R8(c->r[5]+0x00000002u); // 801C122C
  c->r[26]=0u+0x0000000Au; // 801C1230
  c->r[28]=0u+0x0000000Bu; // 801C1234
  c->r[30]=0u+0x0000000Cu; // 801C1238
  W8(c->r[7]+0x00000003u,c->r[0]); // 801C123C
  c->r[12]=0u+0x0000000Du; // 801C1240
  c->r[10]=0u+0x0000000Eu; // 801C1244
  c->r[8]=0u+0x0000000Fu; // 801C1248
  c->r[0]=R8(c->r[5]+0x00000001u); // 801C124C
  W8(c->r[7]+0x00000004u,c->r[0]); // 801C1250
  c->r[0]=R8(c->r[5]+0x00000000u); // 801C1254
  c->r[5]=c->r[5]+0x00000006u; // 801C1258
  W8(c->r[7]+0x00000005u,c->r[0]); // 801C125C
  c->r[0]=R8(c->r[6]+c->r[23]); // 801C1260
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 801C1264
  W8(c->r[7]+0x00000006u,c->r[0]); // 801C1268
  c->r[0]=R8(c->r[6]+c->r[25]); // 801C126C
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 801C1270
  W8(c->r[7]+0x00000007u,c->r[0]); // 801C1274
  c->r[0]=R8(c->r[6]+c->r[27]); // 801C1278
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 801C127C
  W8(c->r[7]+0x00000008u,c->r[0]); // 801C1280
  c->r[0]=R8(c->r[6]+c->r[29]); // 801C1284
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 801C1288
  W8(c->r[7]+0x00000009u,c->r[0]); // 801C128C
  c->r[0]=R8(c->r[6]+c->r[31]); // 801C1290
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 801C1294
  W8(c->r[7]+0x0000000Au,c->r[0]); // 801C1298
  c->r[0]=R8(c->r[6]+c->r[11]); // 801C129C
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 801C12A0
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 801C12A4
  c->r[0]=R8(c->r[6]+c->r[9]); // 801C12A8
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 801C12AC
  W8(c->r[7]+0x0000000Cu,c->r[0]); // 801C12B0
  c->r[0]=R8(c->r[6]+c->r[4]); // 801C12B4
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 801C12B8
  W8(c->r[7]+0x0000000Du,c->r[0]); // 801C12BC
  c->r[0]=R8(c->r[6]+c->r[23]); // 801C12C0
  W8(c->r[7]+0x0000000Eu,c->r[0]); // 801C12C4
  c->r[0]=R8(c->r[6]+c->r[25]); // 801C12C8
  W8(c->r[7]+0x0000000Fu,c->r[0]); // 801C12CC
  c->r[0]=R8(c->r[6]+c->r[27]); // 801C12D0
  W8(c->r[7]+0x00000010u,c->r[0]); // 801C12D4
  c->r[0]=R8(c->r[6]+c->r[29]); // 801C12D8
  W8(c->r[7]+0x00000011u,c->r[0]); // 801C12DC
  c->r[0]=R8(c->r[6]+c->r[31]); // 801C12E0
  W8(c->r[7]+0x00000012u,c->r[0]); // 801C12E4
  c->r[0]=R8(c->r[6]+c->r[11]); // 801C12E8
  W8(c->r[7]+0x00000013u,c->r[0]); // 801C12EC
  c->r[0]=R8(c->r[6]+c->r[9]); // 801C12F0
  W8(c->r[7]+0x00000014u,c->r[0]); // 801C12F4
  c->r[0]=R8(c->r[6]+c->r[4]); // 801C12F8
  c->r[6]=c->r[6]+0x00000010u; // 801C12FC
  W8(c->r[7]+0x00000015u,c->r[0]); // 801C1300
  c->r[7]=c->r[7]+0x00000016u; // 801C1304
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C11CC; } // 801C1308
L_801C130C:;
  c->lr=0x801C1310u; f_801BDA44(c); // 801C130C
  c->r[11]=c->r[1]+0x00000030u; // 801C1310
  c->lr=0x801C1318u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C1314
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C1318
  c->lr=c->r[0]; // 801C131C
  c->r[1]=c->r[1]+0x00000030u; // 801C1320
  return; // 801C1324
}

// btsnd_hcic_delete_stored_key
void f_801C1328(Ctx* __restrict c) {
  trace_call(0x801C1328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1328
  c->r[0]=c->lr; // 801C132C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1334
  c->r[31]=c->r[4]|c->r[4]; // 801C1338
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C133C
  c->r[30]=c->r[3]|c->r[3]; // 801C1340
  c->r[3]=0u+0x00000002u; // 801C1344
  c->lr=0x801C134Cu; f_801AA140(c); // 801C1348
  cmps(c,0,(int32_t)c->r[3],0); // 801C134C
  if (!crb(c,2)) { goto L_801C135C; } // 801C1350
  c->r[3]=0u+0x00000000u; // 801C1354
  goto L_801C13C0; // 801C1358
L_801C135C:;
  c->r[0]=0u+0x0000000Au; // 801C135C
  c->r[6]=0u+0x00000000u; // 801C1360
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C1364
  c->r[5]=0u+0x00000012u; // 801C1368
  c->r[4]=0u+0x0000000Cu; // 801C136C
  c->r[0]=0u+0x00000007u; // 801C1370
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C1374
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C1378
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C137C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1380
  c->r[0]=R8(c->r[30]+0x00000005u); // 801C1384
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C1388
  c->r[0]=R8(c->r[30]+0x00000004u); // 801C138C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C1390
  c->r[0]=R8(c->r[30]+0x00000003u); // 801C1394
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C1398
  c->r[0]=R8(c->r[30]+0x00000002u); // 801C139C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C13A0
  c->r[0]=R8(c->r[30]+0x00000001u); // 801C13A4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C13A8
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C13AC
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C13B0
  W8(c->r[3]+0x00000011u,c->r[31]); // 801C13B4
  c->lr=0x801C13BCu; f_801BDA44(c); // 801C13B8
  c->r[3]=0u+0x00000001u; // 801C13BC
L_801C13C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C13C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C13C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C13C8
  c->lr=c->r[0]; // 801C13CC
  c->r[1]=c->r[1]+0x00000010u; // 801C13D0
  return; // 801C13D4
}

// btsnd_hcic_change_name
void f_801C13D8(Ctx* __restrict c) {
  trace_call(0x801C13D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C13D8
  c->r[0]=c->lr; // 801C13DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C13E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C13E4
  c->r[31]=c->r[3]|c->r[3]; // 801C13E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C13EC
  c->r[30]=c->r[4]|c->r[4]; // 801C13F0
  c->r[3]=c->r[30]|c->r[30]; // 801C13F4
  c->lr=0x801C13FCu; f_80185588(c); // 801C13F8
  c->r[0]=c->r[3]+0x00000001u; // 801C13FC
  c->r[6]=0u+0x000000FBu; // 801C1400
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801C1404
  c->r[5]=0u+0x00000000u; // 801C1408
  c->r[4]=0u+0x00000013u; // 801C140C
  c->r[3]=0u+0x0000000Cu; // 801C1410
  c->r[0]=0u+0x000000F8u; // 801C1414
  W16(c->r[31]+0x00000002u,c->r[6]); // 801C1418
  cmps(c,1,(int32_t)c->r[7],0); // 801C141C
  c->r[6]=c->r[31]+0x0000000Bu; // 801C1420
  W16(c->r[31]+0x00000004u,c->r[5]); // 801C1424
  c->r[8]=0u+0x00000000u; // 801C1428
  W8(c->r[31]+0x00000008u,c->r[4]); // 801C142C
  W8(c->r[31]+0x00000009u,c->r[3]); // 801C1430
  W8(c->r[31]+0x0000000Au,c->r[0]); // 801C1434
  if (!crb(c,5)) { goto L_801C14F8; } // 801C1438
  cmps(c,0,(int32_t)c->r[7],8); // 801C143C
  c->r[4]=c->r[7]+0xFFFFFFF8u; // 801C1440
  if (!crb(c,1)) { goto L_801C14D0; } // 801C1444
  c->r[5]=0u+0x00000000u; // 801C1448
  if (crb(c,4)) { goto L_801C1464; } // 801C144C
  c->r[3]=0u+0x80000000u; // 801C1450
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801C1454
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801C1458
  if (crb(c,1)) { goto L_801C1464; } // 801C145C
  c->r[5]=0u+0x00000001u; // 801C1460
L_801C1464:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1464
  if (crb(c,2)) { goto L_801C14D0; } // 801C1468
  c->r[0]=c->r[4]+0x00000007u; // 801C146C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801C1470
  c->ctr=c->r[0]; // 801C1474
  cmps(c,0,(int32_t)c->r[4],0); // 801C1478
  if (!crb(c,1)) { goto L_801C14D0; } // 801C147C
L_801C1480:;
  c->r[0]=R8(c->r[30]+c->r[8]); // 801C1480
  c->r[3]=c->r[30]+c->r[8]; // 801C1484
  c->r[8]=c->r[8]+0x00000008u; // 801C1488
  W8(c->r[6]+0x00000000u,c->r[0]); // 801C148C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801C1490
  W8(c->r[6]+0x00000001u,c->r[0]); // 801C1494
  c->r[0]=R8(c->r[3]+0x00000002u); // 801C1498
  W8(c->r[6]+0x00000002u,c->r[0]); // 801C149C
  c->r[0]=R8(c->r[3]+0x00000003u); // 801C14A0
  W8(c->r[6]+0x00000003u,c->r[0]); // 801C14A4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801C14A8
  W8(c->r[6]+0x00000004u,c->r[0]); // 801C14AC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801C14B0
  W8(c->r[6]+0x00000005u,c->r[0]); // 801C14B4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801C14B8
  W8(c->r[6]+0x00000006u,c->r[0]); // 801C14BC
  c->r[0]=R8(c->r[3]+0x00000007u); // 801C14C0
  W8(c->r[6]+0x00000007u,c->r[0]); // 801C14C4
  c->r[6]=c->r[6]+0x00000008u; // 801C14C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C1480; } // 801C14CC
L_801C14D0:;
  c->r[0]=c->r[7]-c->r[8]; // 801C14D0
  c->r[3]=c->r[30]+c->r[8]; // 801C14D4
  c->ctr=c->r[0]; // 801C14D8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801C14DC
  if (!crb(c,0)) { goto L_801C14F8; } // 801C14E0
L_801C14E4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801C14E4
  c->r[3]=c->r[3]+0x00000001u; // 801C14E8
  W8(c->r[6]+0x00000000u,c->r[0]); // 801C14EC
  c->r[6]=c->r[6]+0x00000001u; // 801C14F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C14E4; } // 801C14F4
L_801C14F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C14F8
  c->lr=0x801C1500u; f_801BDA44(c); // 801C14FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1504
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C1508
  c->lr=c->r[0]; // 801C150C
  c->r[1]=c->r[1]+0x00000010u; // 801C1510
  return; // 801C1514
}

// btsnd_hcic_write_page_tout
void f_801C1518(Ctx* __restrict c) {
  trace_call(0x801C1518u);
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 801C1518
  c->r[9]=0u+0x00000005u; // 801C151C
  c->r[8]=0u+0x00000000u; // 801C1520
  c->r[7]=0u+0x00000018u; // 801C1524
  c->r[6]=0u+0x0000000Cu; // 801C1528
  c->r[5]=0u+0x00000002u; // 801C152C
  W16(c->r[3]+0x00000002u,c->r[9]); // 801C1530
  W16(c->r[3]+0x00000004u,c->r[8]); // 801C1534
  W8(c->r[3]+0x00000008u,c->r[7]); // 801C1538
  W8(c->r[3]+0x00000009u,c->r[6]); // 801C153C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C1540
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C1544
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C1548
  f_801BDA44(c); return; // 801C154C
}

// btsnd_hcic_write_scan_enable
void f_801C1550(Ctx* __restrict c) {
  trace_call(0x801C1550u);
  c->r[8]=0u+0x00000004u; // 801C1550
  c->r[7]=0u+0x00000000u; // 801C1554
  c->r[6]=0u+0x0000001Au; // 801C1558
  c->r[5]=0u+0x0000000Cu; // 801C155C
  c->r[0]=0u+0x00000001u; // 801C1560
  W16(c->r[3]+0x00000002u,c->r[8]); // 801C1564
  W16(c->r[3]+0x00000004u,c->r[7]); // 801C1568
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C156C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C1570
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1574
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C1578
  f_801BDA44(c); return; // 801C157C
}

// btsnd_hcic_write_pagescan_cfg
void f_801C1580(Ctx* __restrict c) {
  trace_call(0x801C1580u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801C1580
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 801C1584
  c->r[11]=0u+0x00000007u; // 801C1588
  c->r[10]=0u+0x00000000u; // 801C158C
  c->r[9]=0u+0x0000001Cu; // 801C1590
  c->r[8]=0u+0x0000000Cu; // 801C1594
  c->r[7]=0u+0x00000004u; // 801C1598
  W16(c->r[3]+0x00000002u,c->r[11]); // 801C159C
  W16(c->r[3]+0x00000004u,c->r[10]); // 801C15A0
  W8(c->r[3]+0x00000008u,c->r[9]); // 801C15A4
  W8(c->r[3]+0x00000009u,c->r[8]); // 801C15A8
  W8(c->r[3]+0x0000000Au,c->r[7]); // 801C15AC
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C15B0
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801C15B4
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801C15B8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C15BC
  f_801BDA44(c); return; // 801C15C0
}

// btsnd_hcic_write_inqscan_cfg
void f_801C15C4(Ctx* __restrict c) {
  trace_call(0x801C15C4u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801C15C4
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 801C15C8
  c->r[11]=0u+0x00000007u; // 801C15CC
  c->r[10]=0u+0x00000000u; // 801C15D0
  c->r[9]=0u+0x0000001Eu; // 801C15D4
  c->r[8]=0u+0x0000000Cu; // 801C15D8
  c->r[7]=0u+0x00000004u; // 801C15DC
  W16(c->r[3]+0x00000002u,c->r[11]); // 801C15E0
  W16(c->r[3]+0x00000004u,c->r[10]); // 801C15E4
  W8(c->r[3]+0x00000008u,c->r[9]); // 801C15E8
  W8(c->r[3]+0x00000009u,c->r[8]); // 801C15EC
  W8(c->r[3]+0x0000000Au,c->r[7]); // 801C15F0
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C15F4
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801C15F8
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801C15FC
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C1600
  f_801BDA44(c); return; // 801C1604
}

// btsnd_hcic_write_auth_enable
void f_801C1608(Ctx* __restrict c) {
  trace_call(0x801C1608u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1608
  c->r[0]=c->lr; // 801C160C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1614
  c->r[31]=c->r[3]|c->r[3]; // 801C1618
  c->r[3]=0u+0x00000002u; // 801C161C
  c->lr=0x801C1624u; f_801AA140(c); // 801C1620
  cmps(c,0,(int32_t)c->r[3],0); // 801C1624
  if (!crb(c,2)) { goto L_801C1634; } // 801C1628
  c->r[3]=0u+0x00000000u; // 801C162C
  goto L_801C1668; // 801C1630
L_801C1634:;
  c->r[0]=0u+0x00000004u; // 801C1634
  c->r[6]=0u+0x00000000u; // 801C1638
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C163C
  c->r[5]=0u+0x00000020u; // 801C1640
  c->r[4]=0u+0x0000000Cu; // 801C1644
  c->r[0]=0u+0x00000001u; // 801C1648
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C164C
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C1650
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C1654
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1658
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C165C
  c->lr=0x801C1664u; f_801BDA44(c); // 801C1660
  c->r[3]=0u+0x00000001u; // 801C1664
L_801C1668:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1668
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C166C
  c->lr=c->r[0]; // 801C1670
  c->r[1]=c->r[1]+0x00000010u; // 801C1674
  return; // 801C1678
}

// btsnd_hcic_write_encr_mode
void f_801C167C(Ctx* __restrict c) {
  trace_call(0x801C167Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C167C
  c->r[0]=c->lr; // 801C1680
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1688
  c->r[31]=c->r[3]|c->r[3]; // 801C168C
  c->r[3]=0u+0x00000002u; // 801C1690
  c->lr=0x801C1698u; f_801AA140(c); // 801C1694
  cmps(c,0,(int32_t)c->r[3],0); // 801C1698
  if (!crb(c,2)) { goto L_801C16A8; } // 801C169C
  c->r[3]=0u+0x00000000u; // 801C16A0
  goto L_801C16DC; // 801C16A4
L_801C16A8:;
  c->r[0]=0u+0x00000004u; // 801C16A8
  c->r[6]=0u+0x00000000u; // 801C16AC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C16B0
  c->r[5]=0u+0x00000022u; // 801C16B4
  c->r[4]=0u+0x0000000Cu; // 801C16B8
  c->r[0]=0u+0x00000001u; // 801C16BC
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C16C0
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C16C4
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C16C8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C16CC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C16D0
  c->lr=0x801C16D8u; f_801BDA44(c); // 801C16D4
  c->r[3]=0u+0x00000001u; // 801C16D8
L_801C16DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C16DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C16E0
  c->lr=c->r[0]; // 801C16E4
  c->r[1]=c->r[1]+0x00000010u; // 801C16E8
  return; // 801C16EC
}

// btsnd_hcic_write_dev_class
void f_801C16F0(Ctx* __restrict c) {
  trace_call(0x801C16F0u);
  c->r[8]=0u+0x00000006u; // 801C16F0
  c->r[7]=0u+0x00000000u; // 801C16F4
  c->r[6]=0u+0x00000024u; // 801C16F8
  c->r[5]=0u+0x0000000Cu; // 801C16FC
  c->r[0]=0u+0x00000003u; // 801C1700
  W16(c->r[3]+0x00000002u,c->r[8]); // 801C1704
  W16(c->r[3]+0x00000004u,c->r[7]); // 801C1708
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C170C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C1710
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1714
  c->r[0]=R8(c->r[4]+0x00000002u); // 801C1718
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C171C
  c->r[0]=R8(c->r[4]+0x00000001u); // 801C1720
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C1724
  c->r[0]=R8(c->r[4]+0x00000000u); // 801C1728
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C172C
  f_801BDA44(c); return; // 801C1730
}

// btsnd_hcic_write_auto_flush_tout
void f_801C1734(Ctx* __restrict c) {
  trace_call(0x801C1734u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 801C1734
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 801C1738
  c->r[11]=0u+0x00000007u; // 801C173C
  c->r[10]=0u+0x00000000u; // 801C1740
  c->r[9]=0u+0x00000028u; // 801C1744
  c->r[8]=0u+0x0000000Cu; // 801C1748
  c->r[7]=0u+0x00000004u; // 801C174C
  W16(c->r[3]+0x00000002u,c->r[11]); // 801C1750
  W16(c->r[3]+0x00000004u,c->r[10]); // 801C1754
  W8(c->r[3]+0x00000008u,c->r[9]); // 801C1758
  W8(c->r[3]+0x00000009u,c->r[8]); // 801C175C
  W8(c->r[3]+0x0000000Au,c->r[7]); // 801C1760
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C1764
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801C1768
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801C176C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C1770
  f_801BDA44(c); return; // 801C1774
}

// btsnd_hcic_set_host_buf_size
void f_801C1778(Ctx* __restrict c) {
  trace_call(0x801C1778u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1778
  c->r[0]=c->lr; // 801C177C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1780
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C1784
  c->r[31]=c->r[6]|c->r[6]; // 801C1788
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C178C
  c->r[30]=c->r[5]|c->r[5]; // 801C1790
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C1794
  c->r[29]=c->r[4]|c->r[4]; // 801C1798
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C179C
  c->r[28]=c->r[3]|c->r[3]; // 801C17A0
  c->r[3]=0u+0x00000002u; // 801C17A4
  c->lr=0x801C17ACu; f_801AA140(c); // 801C17A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C17AC
  if (!crb(c,2)) { goto L_801C17BC; } // 801C17B0
  c->r[3]=0u+0x00000000u; // 801C17B4
  goto L_801C1814; // 801C17B8
L_801C17BC:;
  c->r[0]=0u+0x0000000Au; // 801C17BC
  c->r[5]=sraw(c,c->r[28],8); // 801C17C0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C17C4
  c->r[0]=0u+0x00000000u; // 801C17C8
  c->r[8]=0u+0x00000033u; // 801C17CC
  c->r[7]=0u+0x0000000Cu; // 801C17D0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C17D4
  c->r[6]=0u+0x00000007u; // 801C17D8
  c->r[4]=sraw(c,c->r[30],8); // 801C17DC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C17E0
  W8(c->r[3]+0x00000008u,c->r[8]); // 801C17E4
  W8(c->r[3]+0x00000009u,c->r[7]); // 801C17E8
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801C17EC
  W8(c->r[3]+0x0000000Bu,c->r[28]); // 801C17F0
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801C17F4
  W8(c->r[3]+0x0000000Du,c->r[29]); // 801C17F8
  W8(c->r[3]+0x0000000Eu,c->r[30]); // 801C17FC
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 801C1800
  W8(c->r[3]+0x00000010u,c->r[31]); // 801C1804
  W8(c->r[3]+0x00000011u,c->r[0]); // 801C1808
  c->lr=0x801C1810u; f_801BDA44(c); // 801C180C
  c->r[3]=0u+0x00000001u; // 801C1810
L_801C1814:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1814
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C1818
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C181C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C1820
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C1824
  c->lr=c->r[0]; // 801C1828
  c->r[1]=c->r[1]+0x00000020u; // 801C182C
  return; // 801C1830
}

// btsnd_hcic_write_link_super_tout
void f_801C1834(Ctx* __restrict c) {
  trace_call(0x801C1834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1834
  c->r[0]=c->lr; // 801C1838
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C183C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1840
  c->r[31]=c->r[4]|c->r[4]; // 801C1844
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C1848
  c->r[30]=c->r[3]|c->r[3]; // 801C184C
  c->r[3]=0u+0x00000002u; // 801C1850
  c->lr=0x801C1858u; f_801AA140(c); // 801C1854
  cmps(c,0,(int32_t)c->r[3],0); // 801C1858
  if (!crb(c,2)) { goto L_801C1868; } // 801C185C
  c->r[3]=0u+0x00000000u; // 801C1860
  goto L_801C18B0; // 801C1864
L_801C1868:;
  c->r[4]=0u+0x00000007u; // 801C1868
  c->r[0]=0u+0x00000000u; // 801C186C
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C1870
  c->r[7]=0u+0x00000037u; // 801C1874
  c->r[6]=0u+0x0000000Cu; // 801C1878
  c->r[5]=0u+0x00000004u; // 801C187C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C1880
  c->r[4]=sraw(c,c->r[30],8); // 801C1884
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C1888
  W8(c->r[3]+0x00000008u,c->r[7]); // 801C188C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801C1890
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C1894
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801C1898
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801C189C
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801C18A0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C18A4
  c->lr=0x801C18ACu; f_801BDA44(c); // 801C18A8
  c->r[3]=0u+0x00000001u; // 801C18AC
L_801C18B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C18B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C18B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C18B8
  c->lr=c->r[0]; // 801C18BC
  c->r[1]=c->r[1]+0x00000010u; // 801C18C0
  return; // 801C18C4
}

// btsnd_hcic_write_cur_iac_lap
void f_801C18C8(Ctx* __restrict c) {
  trace_call(0x801C18C8u);
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 801C18C8
  c->r[9]=0u+0x00000000u; // 801C18CC
  c->r[6]=c->r[0]-c->r[4]; // 801C18D0
  c->r[8]=0u+0x0000003Au; // 801C18D4
  c->r[10]=c->r[6]+0x00000004u; // 801C18D8
  c->r[7]=0u+0x0000000Cu; // 801C18DC
  c->r[6]=rotl(c->r[10],0)&0x0000FFFFu; // 801C18E0
  W16(c->r[3]+0x00000002u,c->r[10]); // 801C18E4
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 801C18E8
  c->r[6]=c->r[3]+0x0000000Cu; // 801C18EC
  W16(c->r[3]+0x00000004u,c->r[9]); // 801C18F0
  W8(c->r[3]+0x00000008u,c->r[8]); // 801C18F4
  W8(c->r[3]+0x00000009u,c->r[7]); // 801C18F8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C18FC
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C1900
  c->ctr=c->r[4]; // 801C1904
  cmps(c,0,(int32_t)c->r[4],0); // 801C1908
  if (!crb(c,1)) { goto L_801C1934; } // 801C190C
L_801C1910:;
  c->r[0]=R8(c->r[5]+0x00000002u); // 801C1910
  W8(c->r[6]+0x00000000u,c->r[0]); // 801C1914
  c->r[0]=R8(c->r[5]+0x00000001u); // 801C1918
  W8(c->r[6]+0x00000001u,c->r[0]); // 801C191C
  c->r[0]=R8(c->r[5]+0x00000000u); // 801C1920
  c->r[5]=c->r[5]+0x00000003u; // 801C1924
  W8(c->r[6]+0x00000002u,c->r[0]); // 801C1928
  c->r[6]=c->r[6]+0x00000003u; // 801C192C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C1910; } // 801C1930
L_801C1934:;
  f_801BDA44(c); return; // 801C1934
}

// btsnd_hcic_read_local_ver
void f_801C1938(Ctx* __restrict c) {
  trace_call(0x801C1938u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1938
  c->r[0]=c->lr; // 801C193C
  c->r[3]=0u+0x00000002u; // 801C1940
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1944
  c->lr=0x801C194Cu; f_801AA140(c); // 801C1948
  cmps(c,0,(int32_t)c->r[3],0); // 801C194C
  if (!crb(c,2)) { goto L_801C195C; } // 801C1950
  c->r[3]=0u+0x00000000u; // 801C1954
  goto L_801C1988; // 801C1958
L_801C195C:;
  c->r[0]=0u+0x00000003u; // 801C195C
  c->r[5]=0u+0x00000000u; // 801C1960
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C1964
  c->r[4]=0u+0x00000001u; // 801C1968
  c->r[0]=0u+0x00000010u; // 801C196C
  W16(c->r[3]+0x00000004u,c->r[5]); // 801C1970
  W8(c->r[3]+0x00000008u,c->r[4]); // 801C1974
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C1978
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C197C
  c->lr=0x801C1984u; f_801BDA44(c); // 801C1980
  c->r[3]=0u+0x00000001u; // 801C1984
L_801C1988:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1988
  c->lr=c->r[0]; // 801C198C
  c->r[1]=c->r[1]+0x00000010u; // 801C1990
  return; // 801C1994
}

// btsnd_hcic_read_local_features
void f_801C1998(Ctx* __restrict c) {
  trace_call(0x801C1998u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1998
  c->r[0]=c->lr; // 801C199C
  c->r[3]=0u+0x00000002u; // 801C19A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C19A4
  c->lr=0x801C19ACu; f_801AA140(c); // 801C19A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C19AC
  if (!crb(c,2)) { goto L_801C19BC; } // 801C19B0
  c->r[3]=0u+0x00000000u; // 801C19B4
  goto L_801C19E4; // 801C19B8
L_801C19BC:;
  c->r[5]=0u+0x00000003u; // 801C19BC
  c->r[4]=0u+0x00000000u; // 801C19C0
  W16(c->r[3]+0x00000002u,c->r[5]); // 801C19C4
  c->r[0]=0u+0x00000010u; // 801C19C8
  W16(c->r[3]+0x00000004u,c->r[4]); // 801C19CC
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C19D0
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C19D4
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C19D8
  c->lr=0x801C19E0u; f_801BDA44(c); // 801C19DC
  c->r[3]=0u+0x00000001u; // 801C19E0
L_801C19E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C19E4
  c->lr=c->r[0]; // 801C19E8
  c->r[1]=c->r[1]+0x00000010u; // 801C19EC
  return; // 801C19F0
}

// btsnd_hcic_read_buffer_size
void f_801C19F4(Ctx* __restrict c) {
  trace_call(0x801C19F4u);
  c->r[5]=0u+0x00000000u; // 801C19F4
  c->r[6]=0u+0x00000003u; // 801C19F8
  c->r[4]=0u+0x00000005u; // 801C19FC
  c->r[0]=0u+0x00000010u; // 801C1A00
  W16(c->r[3]+0x00000002u,c->r[6]); // 801C1A04
  W16(c->r[3]+0x00000004u,c->r[5]); // 801C1A08
  W8(c->r[3]+0x00000008u,c->r[4]); // 801C1A0C
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C1A10
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C1A14
  f_801BDA44(c); return; // 801C1A18
}

// btsnd_hcic_read_bd_addr
void f_801C1A1C(Ctx* __restrict c) {
  trace_call(0x801C1A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A1C
  c->r[0]=c->lr; // 801C1A20
  c->r[3]=0u+0x00000002u; // 801C1A24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1A28
  c->lr=0x801C1A30u; f_801AA140(c); // 801C1A2C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1A30
  if (!crb(c,2)) { goto L_801C1A40; } // 801C1A34
  c->r[3]=0u+0x00000000u; // 801C1A38
  goto L_801C1A6C; // 801C1A3C
L_801C1A40:;
  c->r[0]=0u+0x00000003u; // 801C1A40
  c->r[5]=0u+0x00000000u; // 801C1A44
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C1A48
  c->r[4]=0u+0x00000009u; // 801C1A4C
  c->r[0]=0u+0x00000010u; // 801C1A50
  W16(c->r[3]+0x00000004u,c->r[5]); // 801C1A54
  W8(c->r[3]+0x00000008u,c->r[4]); // 801C1A58
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C1A5C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C1A60
  c->lr=0x801C1A68u; f_801BDA44(c); // 801C1A64
  c->r[3]=0u+0x00000001u; // 801C1A68
L_801C1A6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1A6C
  c->lr=c->r[0]; // 801C1A70
  c->r[1]=c->r[1]+0x00000010u; // 801C1A74
  return; // 801C1A78
}

// btsnd_hcic_get_link_quality
void f_801C1A7C(Ctx* __restrict c) {
  trace_call(0x801C1A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A7C
  c->r[0]=c->lr; // 801C1A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1A84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1A88
  c->r[31]=c->r[3]|c->r[3]; // 801C1A8C
  c->r[3]=0u+0x00000002u; // 801C1A90
  c->lr=0x801C1A98u; f_801AA140(c); // 801C1A94
  cmps(c,0,(int32_t)c->r[3],0); // 801C1A98
  if (!crb(c,2)) { goto L_801C1AA8; } // 801C1A9C
  c->r[3]=0u+0x00000000u; // 801C1AA0
  goto L_801C1AE4; // 801C1AA4
L_801C1AA8:;
  c->r[4]=0u+0x00000005u; // 801C1AA8
  c->r[0]=0u+0x00000000u; // 801C1AAC
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C1AB0
  c->r[6]=0u+0x00000003u; // 801C1AB4
  c->r[5]=0u+0x00000014u; // 801C1AB8
  c->r[4]=0u+0x00000002u; // 801C1ABC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C1AC0
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C1AC4
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C1AC8
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C1ACC
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C1AD0
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C1AD4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C1AD8
  c->lr=0x801C1AE0u; f_801BDA44(c); // 801C1ADC
  c->r[3]=0u+0x00000001u; // 801C1AE0
L_801C1AE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1AE8
  c->lr=c->r[0]; // 801C1AEC
  c->r[1]=c->r[1]+0x00000010u; // 801C1AF0
  return; // 801C1AF4
}

// btsnd_hcic_read_rssi
void f_801C1AF8(Ctx* __restrict c) {
  trace_call(0x801C1AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1AF8
  c->r[0]=c->lr; // 801C1AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1B00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1B04
  c->r[31]=c->r[3]|c->r[3]; // 801C1B08
  c->r[3]=0u+0x00000002u; // 801C1B0C
  c->lr=0x801C1B14u; f_801AA140(c); // 801C1B10
  cmps(c,0,(int32_t)c->r[3],0); // 801C1B14
  if (!crb(c,2)) { goto L_801C1B24; } // 801C1B18
  c->r[3]=0u+0x00000000u; // 801C1B1C
  goto L_801C1B5C; // 801C1B20
L_801C1B24:;
  c->r[7]=0u+0x00000005u; // 801C1B24
  c->r[6]=0u+0x00000000u; // 801C1B28
  W16(c->r[3]+0x00000002u,c->r[7]); // 801C1B2C
  c->r[5]=0u+0x00000014u; // 801C1B30
  c->r[4]=0u+0x00000002u; // 801C1B34
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C1B38
  W16(c->r[3]+0x00000004u,c->r[6]); // 801C1B3C
  W8(c->r[3]+0x00000008u,c->r[7]); // 801C1B40
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C1B44
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C1B48
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801C1B4C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C1B50
  c->lr=0x801C1B58u; f_801BDA44(c); // 801C1B54
  c->r[3]=0u+0x00000001u; // 801C1B58
L_801C1B5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1B5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1B60
  c->lr=c->r[0]; // 801C1B64
  c->r[1]=c->r[1]+0x00000010u; // 801C1B68
  return; // 801C1B6C
}

// btsnd_hcic_set_afh_channels
void f_801C1B70(Ctx* __restrict c) {
  trace_call(0x801C1B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1B70
  c->r[0]=c->lr; // 801C1B74
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C1B78
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C1B7C
  c->r[31]=c->r[4]|c->r[4]; // 801C1B80
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C1B84
  c->r[30]=c->r[3]|c->r[3]; // 801C1B88
  c->r[3]=0u+0x00000002u; // 801C1B8C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C1B90
  c->r[29]=0u+0x802E0000u; // 801C1B94
  {uint32_t ea=c->r[29]+0x00001328u; c->r[12]=R8(ea); c->r[29]=ea;} // 801C1B98
  c->r[11]=R8(c->r[29]+0x00000001u); // 801C1B9C
  c->r[10]=R8(c->r[29]+0x00000002u); // 801C1BA0
  c->r[9]=R8(c->r[29]+0x00000003u); // 801C1BA4
  c->r[8]=R8(c->r[29]+0x00000004u); // 801C1BA8
  c->r[7]=R8(c->r[29]+0x00000005u); // 801C1BAC
  c->r[6]=R8(c->r[29]+0x00000006u); // 801C1BB0
  c->r[5]=R8(c->r[29]+0x00000007u); // 801C1BB4
  c->r[4]=R8(c->r[29]+0x00000008u); // 801C1BB8
  c->r[0]=R8(c->r[29]+0x00000009u); // 801C1BBC
  W8(c->r[1]+0x00000008u,c->r[12]); // 801C1BC0
  W8(c->r[1]+0x00000009u,c->r[11]); // 801C1BC4
  W8(c->r[1]+0x0000000Au,c->r[10]); // 801C1BC8
  W8(c->r[1]+0x0000000Bu,c->r[9]); // 801C1BCC
  W8(c->r[1]+0x0000000Cu,c->r[8]); // 801C1BD0
  W8(c->r[1]+0x0000000Du,c->r[7]); // 801C1BD4
  W8(c->r[1]+0x0000000Eu,c->r[6]); // 801C1BD8
  W8(c->r[1]+0x0000000Fu,c->r[5]); // 801C1BDC
  W8(c->r[1]+0x00000010u,c->r[4]); // 801C1BE0
  W8(c->r[1]+0x00000011u,c->r[0]); // 801C1BE4
  c->lr=0x801C1BECu; f_801AA140(c); // 801C1BE8
  cmps(c,0,(int32_t)c->r[3],0); // 801C1BEC
  if (!crb(c,2)) { goto L_801C1BFC; } // 801C1BF0
  c->r[3]=0u+0x00000000u; // 801C1BF4
  goto L_801C1F74; // 801C1BF8
L_801C1BFC:;
  c->r[4]=0u+0x0000000Du; // 801C1BFC
  c->r[0]=0u+0x00000000u; // 801C1C00
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C1C04
  c->r[5]=0u+0x0000003Fu; // 801C1C08
  c->r[4]=0u+0x0000000Cu; // 801C1C0C
  cmpu(c,0,c->r[30],c->r[31]); // 801C1C10
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C1C14
  c->r[0]=0u+0x0000000Au; // 801C1C18
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C1C1C
  W8(c->r[3]+0x00000009u,c->r[4]); // 801C1C20
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1C24
  if (crb(c,1)) { goto L_801C1F1C; } // 801C1C28
  cmpu(c,0,c->r[31],0x0000004Eu); // 801C1C2C
  if (crb(c,1)) { goto L_801C1F1C; } // 801C1C30
  cmps(c,1,(int32_t)c->r[30],(int32_t)c->r[31]); // 801C1C34
  if (crb(c,5)) { goto L_801C1F1C; } // 801C1C38
  c->r[11]=c->r[31]-c->r[30]; // 801C1C3C
  c->r[7]=c->r[31]+0xFFFFFFF8u; // 801C1C40
  c->r[12]=c->r[11]+0x00000001u; // 801C1C44
  cmps(c,0,(int32_t)c->r[12],8); // 801C1C48
  if (!crb(c,1)) { goto L_801C1ECC; } // 801C1C4C
  c->r[5]=0u+0x00000000u; // 801C1C50
  c->r[6]=0u+0x00000000u; // 801C1C54
  c->r[8]=0u+0x00000000u; // 801C1C58
  c->r[9]=0u+0x00000000u; // 801C1C5C
  c->r[10]=0u+0x00000000u; // 801C1C60
  if (crb(c,5)) { goto L_801C1C7C; } // 801C1C64
  c->r[4]=0u+0x80000000u; // 801C1C68
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801C1C6C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C1C70
  if (crb(c,1)) { goto L_801C1C7C; } // 801C1C74
  c->r[10]=0u+0x00000001u; // 801C1C78
L_801C1C7C:;
  cmps(c,0,(int32_t)c->r[10],0); // 801C1C7C
  if (crb(c,2)) { goto L_801C1C98; } // 801C1C80
  c->r[4]=0u+0x80000000u; // 801C1C84
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801C1C88
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C1C8C
  if (crb(c,1)) { goto L_801C1C98; } // 801C1C90
  c->r[9]=0u+0x00000001u; // 801C1C94
L_801C1C98:;
  cmps(c,0,(int32_t)c->r[9],0); // 801C1C98
  if (crb(c,2)) { goto L_801C1CB0; } // 801C1C9C
  c->r[0]=c->r[30]+0x80000000u; // 801C1CA0
  cmpu(c,0,c->r[0],0x00000000u); // 801C1CA4
  if (crb(c,2)) { goto L_801C1CB0; } // 801C1CA8
  c->r[8]=0u+0x00000001u; // 801C1CAC
L_801C1CB0:;
  cmps(c,0,(int32_t)c->r[8],0); // 801C1CB0
  if (crb(c,2)) { goto L_801C1CEC; } // 801C1CB4
  c->r[0]=0u-c->r[30]; // 801C1CB8
  c->r[8]=rotl(c->r[31],0)&0x80000000u; // 801C1CBC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801C1CC0
  c->r[4]=0u+0x00000001u; // 801C1CC4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801C1CC8
  if (!crb(c,2)) { goto L_801C1CE0; } // 801C1CCC
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 801C1CD0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801C1CD4
  if (crb(c,2)) { goto L_801C1CE0; } // 801C1CD8
  c->r[4]=0u+0x00000000u; // 801C1CDC
L_801C1CE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C1CE0
  if (crb(c,2)) { goto L_801C1CEC; } // 801C1CE4
  c->r[6]=0u+0x00000001u; // 801C1CE8
L_801C1CEC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C1CEC
  if (crb(c,2)) { goto L_801C1D18; } // 801C1CF0
  c->r[0]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[0]); // 801C1CF4
  c->r[4]=0u+0x00000001u; // 801C1CF8
  if (!crb(c,2)) { goto L_801C1D0C; } // 801C1CFC
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 801C1D00
  if (crb(c,2)) { goto L_801C1D0C; } // 801C1D04
  c->r[4]=0u+0x00000000u; // 801C1D08
L_801C1D0C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C1D0C
  if (crb(c,2)) { goto L_801C1D18; } // 801C1D10
  c->r[5]=0u+0x00000001u; // 801C1D14
L_801C1D18:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1D18
  if (crb(c,2)) { goto L_801C1ECC; } // 801C1D1C
  c->r[5]=c->r[7]+0x00000008u; // 801C1D20
  c->r[0]=sraw(c,c->r[30],3); // 801C1D24
  c->r[5]=c->r[5]-c->r[30]; // 801C1D28
  c->r[4]=c->r[1]+0x00000008u; // 801C1D2C
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 801C1D30
  c->r[0]=0u+0x00000001u; // 801C1D34
  c->r[5]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801C1D38
  c->r[6]=c->r[4]+c->r[6]; // 801C1D3C
  c->ctr=c->r[5]; // 801C1D40
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[7]); // 801C1D44
  if (crb(c,1)) { goto L_801C1ECC; } // 801C1D48
L_801C1D4C:;
  c->r[5]=rotl(c->r[30],29)&0xE0000000u; // 801C1D4C
  c->r[8]=rotl(c->r[30],1)&0x00000001u; // 801C1D50
  c->r[5]=c->r[5]-c->r[8]; // 801C1D54
  c->r[10]=R8(c->r[6]+0x00000000u); // 801C1D58
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1D5C
  c->r[7]=c->r[30]+0x00000001u; // 801C1D60
  c->r[5]=c->r[5]+c->r[8]; // 801C1D64
  c->r[9]=c->r[30]+0x00000002u; // 801C1D68
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801C1D6C
  c->r[8]=c->r[30]+0x00000003u; // 801C1D70
  c->r[11]=c->r[10]&~c->r[5]; // 801C1D74
  c->r[10]=rotl(c->r[7],1)&0x00000001u; // 801C1D78
  W8(c->r[6]+0x00000000u,c->r[11]); // 801C1D7C
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801C1D80
  c->r[11]=sraw(c,c->r[7],3); // 801C1D84
  c->r[7]=c->r[30]+0x00000004u; // 801C1D88
  c->r[5]=c->r[5]-c->r[10]; // 801C1D8C
  c->r[6]=c->r[6]+0x00000001u; // 801C1D90
  c->r[29]=addc(c,c->r[11],0,c->xer_ca); // 801C1D94
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1D98
  c->r[12]=R8(c->r[4]+c->r[29]); // 801C1D9C
  c->r[10]=c->r[5]+c->r[10]; // 801C1DA0
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801C1DA4
  c->r[5]=rotl(c->r[9],29)&0xE0000000u; // 801C1DA8
  c->r[10]=rotl(c->r[9],1)&0x00000001u; // 801C1DAC
  c->r[9]=sraw(c,c->r[9],3); // 801C1DB0
  c->r[11]=c->r[12]&~c->r[11]; // 801C1DB4
  c->r[5]=c->r[5]-c->r[10]; // 801C1DB8
  W8(c->r[4]+c->r[29],c->r[11]); // 801C1DBC
  c->r[29]=addc(c,c->r[9],0,c->xer_ca); // 801C1DC0
  c->r[9]=c->r[30]+0x00000005u; // 801C1DC4
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1DC8
  c->r[12]=R8(c->r[4]+c->r[29]); // 801C1DCC
  c->r[5]=c->r[5]+c->r[10]; // 801C1DD0
  c->r[10]=sraw(c,c->r[8],3); // 801C1DD4
  c->r[11]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801C1DD8
  c->r[12]=c->r[12]&~c->r[11]; // 801C1DDC
  c->r[5]=rotl(c->r[8],29)&0xE0000000u; // 801C1DE0
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 801C1DE4
  W8(c->r[4]+c->r[29],c->r[12]); // 801C1DE8
  c->r[5]=c->r[5]-c->r[8]; // 801C1DEC
  c->r[11]=addc(c,c->r[10],0,c->xer_ca); // 801C1DF0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1DF4
  c->r[10]=R8(c->r[4]+c->r[11]); // 801C1DF8
  c->r[8]=c->r[5]+c->r[8]; // 801C1DFC
  c->r[5]=sraw(c,c->r[7],3); // 801C1E00
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 801C1E04
  c->r[10]=c->r[10]&~c->r[8]; // 801C1E08
  c->r[29]=addc(c,c->r[5],0,c->xer_ca); // 801C1E0C
  W8(c->r[4]+c->r[11],c->r[10]); // 801C1E10
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801C1E14
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 801C1E18
  c->r[7]=sraw(c,c->r[9],3); // 801C1E1C
  c->r[5]=c->r[5]-c->r[8]; // 801C1E20
  c->r[11]=R8(c->r[4]+c->r[29]); // 801C1E24
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1E28
  c->r[12]=addc(c,c->r[7],0,c->xer_ca); // 801C1E2C
  c->r[5]=c->r[5]+c->r[8]; // 801C1E30
  c->r[8]=c->r[30]+0x00000006u; // 801C1E34
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801C1E38
  c->r[5]=rotl(c->r[9],29)&0xE0000000u; // 801C1E3C
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 801C1E40
  c->r[10]=c->r[11]&~c->r[10]; // 801C1E44
  W8(c->r[4]+c->r[29],c->r[10]); // 801C1E48
  c->r[5]=c->r[5]-c->r[9]; // 801C1E4C
  c->r[7]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1E50
  c->r[9]=c->r[7]+c->r[9]; // 801C1E54
  c->r[5]=sraw(c,c->r[8],3); // 801C1E58
  c->r[11]=addc(c,c->r[5],0,c->xer_ca); // 801C1E5C
  c->r[7]=c->r[30]+0x00000007u; // 801C1E60
  c->r[10]=R8(c->r[4]+c->r[12]); // 801C1E64
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 801C1E68
  c->r[5]=rotl(c->r[8],29)&0xE0000000u; // 801C1E6C
  c->r[30]=c->r[30]+0x00000008u; // 801C1E70
  c->r[10]=c->r[10]&~c->r[9]; // 801C1E74
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 801C1E78
  W8(c->r[4]+c->r[12],c->r[10]); // 801C1E7C
  c->r[5]=c->r[5]-c->r[9]; // 801C1E80
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1E84
  c->r[8]=sraw(c,c->r[7],3); // 801C1E88
  c->r[5]=c->r[5]+c->r[9]; // 801C1E8C
  c->r[10]=R8(c->r[4]+c->r[11]); // 801C1E90
  c->r[9]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801C1E94
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801C1E98
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 801C1E9C
  c->r[9]=c->r[10]&~c->r[9]; // 801C1EA0
  c->r[5]=c->r[5]-c->r[7]; // 801C1EA4
  W8(c->r[4]+c->r[11],c->r[9]); // 801C1EA8
  c->r[9]=addc(c,c->r[8],0,c->xer_ca); // 801C1EAC
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801C1EB0
  c->r[8]=R8(c->r[4]+c->r[9]); // 801C1EB4
  c->r[5]=c->r[5]+c->r[7]; // 801C1EB8
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801C1EBC
  c->r[5]=c->r[8]&~c->r[5]; // 801C1EC0
  W8(c->r[4]+c->r[9],c->r[5]); // 801C1EC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C1D4C; } // 801C1EC8
L_801C1ECC:;
  c->r[0]=c->r[31]+0x00000001u; // 801C1ECC
  c->r[7]=c->r[1]+0x00000008u; // 801C1ED0
  c->r[0]=c->r[0]-c->r[30]; // 801C1ED4
  c->r[5]=0u+0x00000001u; // 801C1ED8
  c->ctr=c->r[0]; // 801C1EDC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801C1EE0
  if (crb(c,1)) { goto L_801C1F1C; } // 801C1EE4
L_801C1EE8:;
  c->r[0]=rotl(c->r[30],29)&0xE0000000u; // 801C1EE8
  c->r[4]=rotl(c->r[30],1)&0x00000001u; // 801C1EEC
  c->r[6]=sraw(c,c->r[30],3); // 801C1EF0
  c->r[30]=c->r[30]+0x00000001u; // 801C1EF4
  c->r[0]=c->r[0]-c->r[4]; // 801C1EF8
  c->r[8]=addc(c,c->r[6],0,c->xer_ca); // 801C1EFC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801C1F00
  c->r[6]=R8(c->r[7]+c->r[8]); // 801C1F04
  c->r[0]=c->r[0]+c->r[4]; // 801C1F08
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801C1F0C
  c->r[0]=c->r[6]&~c->r[0]; // 801C1F10
  W8(c->r[7]+c->r[8],c->r[0]); // 801C1F14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C1EE8; } // 801C1F18
L_801C1F1C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801C1F1C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801C1F20
  c->r[0]=R8(c->r[1]+0x00000009u); // 801C1F24
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C1F28
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801C1F2C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801C1F30
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801C1F34
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801C1F38
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801C1F3C
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801C1F40
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801C1F44
  W8(c->r[3]+0x00000010u,c->r[0]); // 801C1F48
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801C1F4C
  W8(c->r[3]+0x00000011u,c->r[0]); // 801C1F50
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801C1F54
  W8(c->r[3]+0x00000012u,c->r[0]); // 801C1F58
  c->r[0]=R8(c->r[1]+0x00000010u); // 801C1F5C
  W8(c->r[3]+0x00000013u,c->r[0]); // 801C1F60
  c->r[0]=R8(c->r[1]+0x00000011u); // 801C1F64
  W8(c->r[3]+0x00000014u,c->r[0]); // 801C1F68
  c->lr=0x801C1F70u; f_801BDA44(c); // 801C1F6C
  c->r[3]=0u+0x00000001u; // 801C1F70
L_801C1F74:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C1F74
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C1F78
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C1F7C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C1F80
  c->lr=c->r[0]; // 801C1F84
  c->r[1]=c->r[1]+0x00000030u; // 801C1F88
  return; // 801C1F8C
}

// btsnd_hcic_write_inqscan_type
void f_801C1F90(Ctx* __restrict c) {
  trace_call(0x801C1F90u);
  c->r[8]=0u+0x00000004u; // 801C1F90
  c->r[7]=0u+0x00000000u; // 801C1F94
  c->r[6]=0u+0x00000043u; // 801C1F98
  c->r[5]=0u+0x0000000Cu; // 801C1F9C
  c->r[0]=0u+0x00000001u; // 801C1FA0
  W16(c->r[3]+0x00000002u,c->r[8]); // 801C1FA4
  W16(c->r[3]+0x00000004u,c->r[7]); // 801C1FA8
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C1FAC
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C1FB0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1FB4
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C1FB8
  f_801BDA44(c); return; // 801C1FBC
}

// btsnd_hcic_write_inquiry_mode
void f_801C1FC0(Ctx* __restrict c) {
  trace_call(0x801C1FC0u);
  c->r[8]=0u+0x00000004u; // 801C1FC0
  c->r[7]=0u+0x00000000u; // 801C1FC4
  c->r[6]=0u+0x00000045u; // 801C1FC8
  c->r[5]=0u+0x0000000Cu; // 801C1FCC
  c->r[0]=0u+0x00000001u; // 801C1FD0
  W16(c->r[3]+0x00000002u,c->r[8]); // 801C1FD4
  W16(c->r[3]+0x00000004u,c->r[7]); // 801C1FD8
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C1FDC
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C1FE0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C1FE4
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C1FE8
  f_801BDA44(c); return; // 801C1FEC
}

// btsnd_hcic_write_pagescan_type
void f_801C1FF0(Ctx* __restrict c) {
  trace_call(0x801C1FF0u);
  c->r[8]=0u+0x00000004u; // 801C1FF0
  c->r[7]=0u+0x00000000u; // 801C1FF4
  c->r[6]=0u+0x00000047u; // 801C1FF8
  c->r[5]=0u+0x0000000Cu; // 801C1FFC
  c->r[0]=0u+0x00000001u; // 801C2000
  W16(c->r[3]+0x00000002u,c->r[8]); // 801C2004
  W16(c->r[3]+0x00000004u,c->r[7]); // 801C2008
  W8(c->r[3]+0x00000008u,c->r[6]); // 801C200C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801C2010
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C2014
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801C2018
  f_801BDA44(c); return; // 801C201C
}

// btsnd_hcic_vendor_spec_cmd
void f_801C2020(Ctx* __restrict c) {
  trace_call(0x801C2020u);
  c->r[8]=c->r[4]|0x0000FC00u; // 801C2020
  c->r[7]=c->r[5]+0x00000003u; // 801C2024
  c->r[0]=sraw(c,c->r[8],8); // 801C2028
  c->r[4]=0u+0x00000000u; // 801C202C
  cmps(c,1,(int32_t)c->r[5],0); // 801C2030
  W16(c->r[3]+0x00000002u,c->r[7]); // 801C2034
  c->r[9]=c->r[3]+0x0000000Bu; // 801C2038
  c->r[10]=0u+0x00000000u; // 801C203C
  W16(c->r[3]+0x00000004u,c->r[4]); // 801C2040
  W8(c->r[3]+0x00000008u,c->r[8]); // 801C2044
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C2048
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801C204C
  if (!crb(c,5)) { goto L_801C2110; } // 801C2050
  cmps(c,0,(int32_t)c->r[5],8); // 801C2054
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 801C2058
  if (!crb(c,1)) { goto L_801C20E8; } // 801C205C
  c->r[8]=0u+0x00000000u; // 801C2060
  if (crb(c,4)) { goto L_801C207C; } // 801C2064
  c->r[4]=0u+0x80000000u; // 801C2068
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801C206C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801C2070
  if (crb(c,1)) { goto L_801C207C; } // 801C2074
  c->r[8]=0u+0x00000001u; // 801C2078
L_801C207C:;
  cmps(c,0,(int32_t)c->r[8],0); // 801C207C
  if (crb(c,2)) { goto L_801C20E8; } // 801C2080
  c->r[0]=c->r[7]+0x00000007u; // 801C2084
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801C2088
  c->ctr=c->r[0]; // 801C208C
  cmps(c,0,(int32_t)c->r[7],0); // 801C2090
  if (!crb(c,1)) { goto L_801C20E8; } // 801C2094
L_801C2098:;
  c->r[0]=R8(c->r[6]+c->r[10]); // 801C2098
  c->r[4]=c->r[6]+c->r[10]; // 801C209C
  c->r[10]=c->r[10]+0x00000008u; // 801C20A0
  W8(c->r[9]+0x00000000u,c->r[0]); // 801C20A4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801C20A8
  W8(c->r[9]+0x00000001u,c->r[0]); // 801C20AC
  c->r[0]=R8(c->r[4]+0x00000002u); // 801C20B0
  W8(c->r[9]+0x00000002u,c->r[0]); // 801C20B4
  c->r[0]=R8(c->r[4]+0x00000003u); // 801C20B8
  W8(c->r[9]+0x00000003u,c->r[0]); // 801C20BC
  c->r[0]=R8(c->r[4]+0x00000004u); // 801C20C0
  W8(c->r[9]+0x00000004u,c->r[0]); // 801C20C4
  c->r[0]=R8(c->r[4]+0x00000005u); // 801C20C8
  W8(c->r[9]+0x00000005u,c->r[0]); // 801C20CC
  c->r[0]=R8(c->r[4]+0x00000006u); // 801C20D0
  W8(c->r[9]+0x00000006u,c->r[0]); // 801C20D4
  c->r[0]=R8(c->r[4]+0x00000007u); // 801C20D8
  W8(c->r[9]+0x00000007u,c->r[0]); // 801C20DC
  c->r[9]=c->r[9]+0x00000008u; // 801C20E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C2098; } // 801C20E4
L_801C20E8:;
  c->r[0]=c->r[5]-c->r[10]; // 801C20E8
  c->r[4]=c->r[6]+c->r[10]; // 801C20EC
  c->ctr=c->r[0]; // 801C20F0
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[5]); // 801C20F4
  if (!crb(c,0)) { goto L_801C2110; } // 801C20F8
L_801C20FC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801C20FC
  c->r[4]=c->r[4]+0x00000001u; // 801C2100
  W8(c->r[9]+0x00000000u,c->r[0]); // 801C2104
  c->r[9]=c->r[9]+0x00000001u; // 801C2108
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C20FC; } // 801C210C
L_801C2110:;
  f_801BDA44(c); return; // 801C2110
}

// HID_DevInit
void f_801C2114(Ctx* __restrict c) {
  trace_call(0x801C2114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2114
  c->r[0]=c->lr; // 801C2118
  c->r[4]=0u+0x00000000u; // 801C211C
  c->r[5]=0u+0x00000144u; // 801C2120
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2124
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2128
  c->r[31]=0u+0x803D0000u; // 801C212C
  c->r[3]=c->r[31]+0xFFFFAC90u; // 801C2130
  c->lr=0x801C2138u; f_80004688(c); // 801C2134
  c->r[3]=0u+0x801C0000u; // 801C2138
  c->r[5]=c->r[31]+0xFFFFAC90u; // 801C213C
  c->r[6]=0u+0x00000001u; // 801C2140
  c->r[4]=0u+0x00000040u; // 801C2144
  c->r[3]=c->r[3]+0x0000223Cu; // 801C2148
  c->r[0]=0u+0x00000000u; // 801C214C
  W8(c->r[5]+0x000000CAu,c->r[6]); // 801C2150
  W16(c->r[5]+0x000000CCu,c->r[4]); // 801C2154
  W8(c->r[5]+0x00000106u,c->r[6]); // 801C2158
  W16(c->r[5]+0x00000108u,c->r[4]); // 801C215C
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801C2160
  W8(c->r[5]+0x00000141u,c->r[0]); // 801C2164
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2168
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C216C
  c->lr=c->r[0]; // 801C2170
  c->r[1]=c->r[1]+0x00000010u; // 801C2174
  return; // 801C2178
}

// hidd_conn_initiate
void f_801C217C(Ctx* __restrict c) {
  trace_call(0x801C217Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C217C
  c->r[0]=c->lr; // 801C2180
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2184
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2188
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C218C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2190
  c->r[29]=0u+0x803D0000u; // 801C2194
  c->r[29]=c->r[29]+0xFFFFAC90u; // 801C2198
  c->r[0]=R8(c->r[29]+0x00000141u); // 801C219C
  cmpu(c,0,c->r[0],0x00000004u); // 801C21A0
  if (crb(c,0)) { goto L_801C21BC; } // 801C21A4
  c->r[3]=0u+0x001E0000u; // 801C21A8
  c->r[4]=0u+0x80330000u; // 801C21AC
  c->r[3]=c->r[3]+0x00000003u; // 801C21B0
  c->r[4]=c->r[4]+0x00003D98u; // 801C21B4
  c->lr=0x801C21BCu; f_801ACB20(c); // 801C21B8
L_801C21BC:;
  c->r[0]=0u+0x00000000u; // 801C21BC
  c->r[30]=0u+0x00000001u; // 801C21C0
  c->r[31]=0u+0x803D0000u; // 801C21C4
  W16(c->r[29]+0x00000014u,c->r[0]); // 801C21C8
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C21CC
  c->r[3]=0u+0x00000011u; // 801C21D0
  W16(c->r[29]+0x00000016u,c->r[0]); // 801C21D4
  W8(c->r[29]+0x00000011u,c->r[30]); // 801C21D8
  c->lr=0x801C21E0u; f_801C566C(c); // 801C21DC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801C21E0
  W16(c->r[29]+0x00000014u,c->r[3]); // 801C21E4
  if (!crb(c,2)) { goto L_801C2218; } // 801C21E8
  c->r[3]=c->r[31]+0xFFFFAC90u; // 801C21EC
  c->r[0]=R8(c->r[3]+0x00000141u); // 801C21F0
  cmpu(c,0,c->r[0],0x00000002u); // 801C21F4
  if (crb(c,0)) { goto L_801C2210; } // 801C21F8
  c->r[3]=0u+0x001E0000u; // 801C21FC
  c->r[4]=0u+0x80330000u; // 801C2200
  c->r[3]=c->r[3]+0x00000001u; // 801C2204
  c->r[4]=c->r[4]+0x00003DB0u; // 801C2208
  c->lr=0x801C2210u; f_801ACB20(c); // 801C220C
L_801C2210:;
  c->r[3]=0u+0x0000000Eu; // 801C2210
  goto L_801C2220; // 801C2214
L_801C2218:;
  W8(c->r[29]+0x00000010u,c->r[30]); // 801C2218
  c->r[3]=0u+0x00000000u; // 801C221C
L_801C2220:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2220
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2224
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2228
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C222C
  c->lr=c->r[0]; // 801C2230
  c->r[1]=c->r[1]+0x00000020u; // 801C2234
  return; // 801C2238
}

// hidd_proc_repage_timeout
void f_801C223C(Ctx* __restrict c) {
  trace_call(0x801C223Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C223C
  c->r[0]=c->lr; // 801C2240
  c->r[3]=0u+0x803D0000u; // 801C2244
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2248
  c->r[3]=c->r[3]+0xFFFFAC90u; // 801C224C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2250
  c->r[0]=R8(c->r[3]+0x00000141u); // 801C2254
  cmpu(c,0,c->r[0],0x00000005u); // 801C2258
  if (crb(c,0)) { goto L_801C2274; } // 801C225C
  c->r[3]=0u+0x001E0000u; // 801C2260
  c->r[4]=0u+0x80330000u; // 801C2264
  c->r[3]=c->r[3]+0x00000004u; // 801C2268
  c->r[4]=c->r[4]+0x00003DC8u; // 801C226C
  c->lr=0x801C2274u; f_801ACB20(c); // 801C2270
L_801C2274:;
  c->r[31]=0u+0x803D0000u; // 801C2274
  c->r[31]=c->r[31]+0xFFFFAC90u; // 801C2278
  c->r[3]=R8(c->r[31]+0x00000009u); // 801C227C
  c->r[0]=c->r[3]+0x00000001u; // 801C2280
  W8(c->r[31]+0x00000009u,c->r[0]); // 801C2284
  c->lr=0x801C228Cu; f_801C217C(c); // 801C2288
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C228C
  if (crb(c,2)) { goto L_801C22D8; } // 801C2290
  c->r[0]=R8(c->r[31]+0x00000009u); // 801C2294
  cmpu(c,0,c->r[0],0x0000000Fu); // 801C2298
  if (!crb(c,1)) { goto L_801C22C4; } // 801C229C
  c->r[12]=R32(c->r[31]+0x000000C4u); // 801C22A0
  c->r[0]=0u+0x00000000u; // 801C22A4
  W8(c->r[31]+0x00000008u,c->r[0]); // 801C22A8
  c->r[3]=0u+0x00000001u; // 801C22AC
  c->r[4]=0u+0x00000000u; // 801C22B0
  c->r[5]=0u+0x00000000u; // 801C22B4
  c->ctr=c->r[12]; // 801C22B8
  if (true) { c->lr=0x801C22C0u; dispatch(c,c->ctr); } // 801C22BC
  goto L_801C22F0; // 801C22C0
L_801C22C4:;
  c->r[3]=c->r[31]+0x0000001Cu; // 801C22C4
  c->r[4]=0u+0x00000016u; // 801C22C8
  c->r[5]=0u+0x00000001u; // 801C22CC
  c->lr=0x801C22D4u; f_801AD0EC(c); // 801C22D0
  goto L_801C22F0; // 801C22D4
L_801C22D8:;
  c->r[12]=R32(c->r[31]+0x000000C4u); // 801C22D8
  c->r[3]=0u+0x00000002u; // 801C22DC
  c->r[4]=R8(c->r[31]+0x00000009u); // 801C22E0
  c->r[5]=0u+0x00000000u; // 801C22E4
  c->ctr=c->r[12]; // 801C22E8
  if (true) { c->lr=0x801C22F0u; dispatch(c,c->ctr); } // 801C22EC
L_801C22F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C22F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C22F4
  c->lr=c->r[0]; // 801C22F8
  c->r[1]=c->r[1]+0x00000010u; // 801C22FC
  return; // 801C2300
}

// hidd_pm_set_now
void f_801C2304(Ctx* __restrict c) {
  trace_call(0x801C2304u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2304
  c->r[0]=c->lr; // 801C2308
  c->r[4]=0u+0x803D0000u; // 801C230C
  c->r[5]=0u+0x00000000u; // 801C2310
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2314
  c->r[4]=c->r[4]+0xFFFFAC90u; // 801C2318
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C231C
  c->r[0]=R8(c->r[4]+0x0000006Eu); // 801C2320
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C2324
  cmps(c,0,(int32_t)c->r[0],0); // 801C2328
  W32(c->r[1]+0x00000010u,c->r[5]); // 801C232C
  W16(c->r[1]+0x00000014u,c->r[5]); // 801C2330
  W8(c->r[1]+0x00000008u,c->r[5]); // 801C2334
  if (!crb(c,2)) { goto L_801C2370; } // 801C2338
  c->r[6]=R8(c->r[4]+0x0000006Au); // 801C233C
  c->r[5]=R8(c->r[3]+0x00000008u); // 801C2340
  cmpu(c,0,c->r[5],c->r[6]); // 801C2344
  if (!crb(c,2)) { goto L_801C2388; } // 801C2348
  cmps(c,0,(int32_t)c->r[5],0); // 801C234C
  if (crb(c,2)) { goto L_801C2370; } // 801C2350
  c->r[4]=R16(c->r[4]+0x0000006Cu); // 801C2354
  c->r[0]=R16(c->r[3]+0x00000002u); // 801C2358
  cmpu(c,0,c->r[4],c->r[0]); // 801C235C
  if (crb(c,0)) { goto L_801C2388; } // 801C2360
  c->r[0]=R16(c->r[3]+0x00000000u); // 801C2364
  cmpu(c,0,c->r[4],c->r[0]); // 801C2368
  if (crb(c,1)) { goto L_801C2388; } // 801C236C
L_801C2370:;
  c->r[4]=0u+0x803D0000u; // 801C2370
  c->r[0]=0u+0x000000FFu; // 801C2374
  c->r[4]=c->r[4]+0xFFFFAC90u; // 801C2378
  c->r[3]=0u+0x00000001u; // 801C237C
  W8(c->r[4]+0x00000078u,c->r[0]); // 801C2380
  goto L_801C24C8; // 801C2384
L_801C2388:;
  cmps(c,0,(int32_t)c->r[5],2); // 801C2388
  if (crb(c,2)) { goto L_801C240C; } // 801C238C
  if (!crb(c,0)) { goto L_801C23A0; } // 801C2390
  cmps(c,0,(int32_t)c->r[5],0); // 801C2394
  if (crb(c,2)) { goto L_801C23AC; } // 801C2398
  goto L_801C2480; // 801C239C
L_801C23A0:;
  cmps(c,0,(int32_t)c->r[5],4); // 801C23A0
  if (!crb(c,0)) { goto L_801C2480; } // 801C23A4
  goto L_801C2448; // 801C23A8
L_801C23AC:;
  cmpu(c,0,c->r[6],0x00000002u); // 801C23AC
  if (!crb(c,2)) { goto L_801C23DC; } // 801C23B0
  c->r[31]=0u+0x803D0000u; // 801C23B4
  c->r[5]=c->r[1]+0x0000000Cu; // 801C23B8
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C23BC
  c->r[3]=0u+0x00000080u; // 801C23C0
  c->lr=0x801C23C8u; f_801B8AB8(c); // 801C23C4
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C23C8
  c->r[0]=0u+0x00000001u; // 801C23CC
  W8(c->r[1]+0x00000008u,c->r[3]); // 801C23D0
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 801C23D4
  goto L_801C2480; // 801C23D8
L_801C23DC:;
  cmpu(c,0,c->r[6],0x00000003u); // 801C23DC
  if (!crb(c,2)) { goto L_801C2480; } // 801C23E0
  c->r[31]=0u+0x803D0000u; // 801C23E4
  c->r[5]=c->r[1]+0x0000000Cu; // 801C23E8
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C23EC
  c->r[3]=0u+0x00000080u; // 801C23F0
  c->lr=0x801C23F8u; f_801B8AB8(c); // 801C23F4
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C23F8
  c->r[0]=0u+0x00000001u; // 801C23FC
  W8(c->r[1]+0x00000008u,c->r[3]); // 801C2400
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 801C2404
  goto L_801C2480; // 801C2408
L_801C240C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C240C
  if (crb(c,2)) { goto L_801C2420; } // 801C2410
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2414
  c->lr=0x801C241Cu; f_801C2304(c); // 801C2418
  goto L_801C2480; // 801C241C
L_801C2420:;
  c->r[31]=0u+0x803D0000u; // 801C2420
  c->r[5]=c->r[3]|c->r[3]; // 801C2424
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C2428
  c->r[3]=0u+0x00000080u; // 801C242C
  c->lr=0x801C2434u; f_801B8AB8(c); // 801C2430
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C2434
  c->r[0]=0u+0x00000001u; // 801C2438
  W8(c->r[1]+0x00000008u,c->r[3]); // 801C243C
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 801C2440
  goto L_801C2480; // 801C2444
L_801C2448:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C2448
  if (crb(c,2)) { goto L_801C245C; } // 801C244C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2450
  c->lr=0x801C2458u; f_801C2304(c); // 801C2454
  goto L_801C2480; // 801C2458
L_801C245C:;
  c->r[31]=0u+0x803D0000u; // 801C245C
  c->r[5]=c->r[3]|c->r[3]; // 801C2460
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C2464
  c->r[3]=0u+0x00000080u; // 801C2468
  c->lr=0x801C2470u; f_801B8AB8(c); // 801C246C
  c->r[4]=c->r[31]+0xFFFFAC90u; // 801C2470
  c->r[0]=0u+0x00000001u; // 801C2474
  W8(c->r[1]+0x00000008u,c->r[3]); // 801C2478
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 801C247C
L_801C2480:;
  c->r[4]=R8(c->r[1]+0x00000008u); // 801C2480
  cmpu(c,0,c->r[4],0x00000001u); // 801C2484
  if (crb(c,1)) { goto L_801C2494; } // 801C2488
  c->r[3]=0u+0x00000001u; // 801C248C
  goto L_801C24C8; // 801C2490
L_801C2494:;
  c->r[3]=0u+0x803D0000u; // 801C2494
  c->r[0]=c->r[4]+0x00000037u; // 801C2498
  c->r[3]=c->r[3]+0xFFFFAC90u; // 801C249C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801C24A0
  c->r[12]=R32(c->r[3]+0x000000C4u); // 801C24A4
  cmps(c,0,(int32_t)c->r[12],0); // 801C24A8
  if (crb(c,2)) { goto L_801C24C4; } // 801C24AC
  c->r[4]=R8(c->r[3]+0x0000006Fu); // 801C24B0
  c->r[5]=c->r[1]+0x00000008u; // 801C24B4
  c->r[3]=0u+0x00000004u; // 801C24B8
  c->ctr=c->r[12]; // 801C24BC
  if (true) { c->lr=0x801C24C4u; dispatch(c,c->ctr); } // 801C24C0
L_801C24C4:;
  c->r[3]=0u+0x00000000u; // 801C24C4
L_801C24C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C24C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C24CC
  c->lr=c->r[0]; // 801C24D0
  c->r[1]=c->r[1]+0x00000020u; // 801C24D4
  return; // 801C24D8
}

// hidd_pm_proc_mode_change
void f_801C24DC(Ctx* __restrict c) {
  trace_call(0x801C24DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C24DC
  c->r[0]=c->lr; // 801C24E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C24E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C24E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C24EC
  c->r[30]=0u+0x803D0000u; // 801C24F0
  c->r[30]=c->r[30]+0xFFFFAC90u; // 801C24F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C24F8
  c->r[29]=c->r[4]|c->r[4]; // 801C24FC
  c->r[0]=R8(c->r[30]+0x00000140u); // 801C2500
  W8(c->r[1]+0x00000008u,c->r[3]); // 801C2504
  cmps(c,0,(int32_t)c->r[0],0); // 801C2508
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801C250C
  if (crb(c,2)) { goto L_801C2618; } // 801C2510
  c->r[31]=0u+0x00000000u; // 801C2514
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C2518
  W8(c->r[30]+0x0000006Eu,c->r[31]); // 801C251C
  if (crb(c,2)) { goto L_801C2548; } // 801C2520
  c->r[12]=R32(c->r[30]+0x000000C4u); // 801C2524
  cmps(c,0,(int32_t)c->r[12],0); // 801C2528
  if (crb(c,2)) { goto L_801C2618; } // 801C252C
  c->r[5]=c->r[1]+0x00000008u; // 801C2530
  c->r[4]=R8(c->r[30]+0x0000006Fu); // 801C2534
  c->r[3]=0u+0x00000004u; // 801C2538
  c->ctr=c->r[12]; // 801C253C
  if (true) { c->lr=0x801C2544u; dispatch(c,c->ctr); } // 801C2540
  goto L_801C2618; // 801C2544
L_801C2548:;
  c->r[0]=R8(c->r[30]+0x00000078u); // 801C2548
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801C254C
  W8(c->r[30]+0x0000006Au,c->r[4]); // 801C2550
  cmpu(c,0,c->r[0],0x000000FFu); // 801C2554
  W16(c->r[30]+0x0000006Cu,c->r[5]); // 801C2558
  if (crb(c,2)) { goto L_801C25B0; } // 801C255C
  cmpu(c,0,c->r[0],c->r[4]); // 801C2560
  if (!crb(c,2)) { goto L_801C2588; } // 801C2564
  cmps(c,0,(int32_t)c->r[0],0); // 801C2568
  if (crb(c,2)) { goto L_801C259C; } // 801C256C
  c->r[0]=R16(c->r[30]+0x00000072u); // 801C2570
  cmpu(c,0,c->r[3],c->r[0]); // 801C2574
  if (crb(c,0)) { goto L_801C2588; } // 801C2578
  c->r[0]=R16(c->r[30]+0x00000070u); // 801C257C
  cmpu(c,0,c->r[3],c->r[0]); // 801C2580
  if (!crb(c,1)) { goto L_801C259C; } // 801C2584
L_801C2588:;
  c->r[3]=0u+0x803D0000u; // 801C2588
  c->r[3]=c->r[3]+0xFFFFAC90u; // 801C258C
  c->r[3]=c->r[3]+0x00000070u; // 801C2590
  c->lr=0x801C2598u; f_801C2304(c); // 801C2594
  goto L_801C25F0; // 801C2598
L_801C259C:;
  c->r[3]=0u+0x803D0000u; // 801C259C
  c->r[0]=0u+0x000000FFu; // 801C25A0
  c->r[3]=c->r[3]+0xFFFFAC90u; // 801C25A4
  W8(c->r[3]+0x00000078u,c->r[0]); // 801C25A8
  goto L_801C25F0; // 801C25AC
L_801C25B0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C25B0
  if (!crb(c,2)) { goto L_801C25F0; } // 801C25B4
  c->r[3]=c->r[30]+0x00000070u; // 801C25B8
  c->r[4]=c->r[30]+0x0000004Cu; // 801C25BC
  c->r[5]=0u+0x0000000Au; // 801C25C0
  c->lr=0x801C25C8u; f_80004338(c); // 801C25C4
  c->r[3]=c->r[30]+0x0000004Cu; // 801C25C8
  c->lr=0x801C25D0u; f_801C2304(c); // 801C25CC
  c->r[3]=0u+0x801C0000u; // 801C25D0
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 801C25D4
  c->r[3]=c->r[3]+0x00002634u; // 801C25D8
  c->r[4]=0u+0x00000016u; // 801C25DC
  W32(c->r[30]+0x00000044u,c->r[3]); // 801C25E0
  c->r[3]=c->r[30]+0x00000034u; // 801C25E4
  c->r[5]=0u+0x0000003Cu; // 801C25E8
  c->lr=0x801C25F0u; f_801AD0EC(c); // 801C25EC
L_801C25F0:;
  c->r[3]=0u+0x803D0000u; // 801C25F0
  c->r[3]=c->r[3]+0xFFFFAC90u; // 801C25F4
  c->r[12]=R32(c->r[3]+0x000000C4u); // 801C25F8
  cmps(c,0,(int32_t)c->r[12],0); // 801C25FC
  if (crb(c,2)) { goto L_801C2618; } // 801C2600
  c->r[4]=c->r[29]|c->r[29]; // 801C2604
  c->r[5]=c->r[1]+0x0000000Au; // 801C2608
  c->r[3]=0u+0x00000003u; // 801C260C
  c->ctr=c->r[12]; // 801C2610
  if (true) { c->lr=0x801C2618u; dispatch(c,c->ctr); } // 801C2614
L_801C2618:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2618
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C261C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2620
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2624
  c->lr=c->r[0]; // 801C2628
  c->r[1]=c->r[1]+0x00000020u; // 801C262C
  return; // 801C2630
}

// hidd_pm_inact_timeout
void f_801C2634(Ctx* __restrict c) {
  trace_call(0x801C2634u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2634
  c->r[0]=c->lr; // 801C2638
  c->r[5]=0u+0x0000000Au; // 801C263C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2640
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2644
  c->r[31]=0u+0x803D0000u; // 801C2648
  c->r[31]=c->r[31]+0xFFFFAC90u; // 801C264C
  c->r[3]=c->r[31]+0x00000070u; // 801C2650
  c->r[4]=c->r[31]+0x00000056u; // 801C2654
  c->lr=0x801C265Cu; f_80004338(c); // 801C2658
  c->r[3]=c->r[31]+0x00000056u; // 801C265C
  c->lr=0x801C2664u; f_801C2304(c); // 801C2660
  c->r[0]=0u+0x00000001u; // 801C2664
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 801C2668
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C266C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2670
  c->lr=c->r[0]; // 801C2674
  c->r[1]=c->r[1]+0x00000010u; // 801C2678
  return; // 801C267C
}

// HID_HostGetSDPRecord
void f_801C2680(Ctx* __restrict c) {
  trace_call(0x801C2680u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2680
  c->r[0]=c->lr; // 801C2684
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C2688
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C268C
  c->r[31]=0u+0x803D0000u; // 801C2690
  c->r[31]=c->r[31]+0xFFFFADD8u; // 801C2694
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C2698
  c->r[30]=c->r[6]|c->r[6]; // 801C269C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C26A0
  c->r[29]=c->r[4]|c->r[4]; // 801C26A4
  W32(c->r[1]+0x00000020u,c->r[28]); // 801C26A8
  c->r[28]=c->r[3]|c->r[3]; // 801C26AC
  c->r[0]=R8(c->r[31]+0x00000380u); // 801C26B0
  cmps(c,0,(int32_t)c->r[0],0); // 801C26B4
  if (crb(c,2)) { goto L_801C26C4; } // 801C26B8
  c->r[3]=0u+0x00000010u; // 801C26BC
  goto L_801C2728; // 801C26C0
L_801C26C4:;
  c->r[7]=0u+0x00000002u; // 801C26C4
  c->r[0]=0u+0x00001124u; // 801C26C8
  W32(c->r[31]+0x00000388u,c->r[4]); // 801C26CC
  c->r[4]=c->r[5]|c->r[5]; // 801C26D0
  c->r[3]=c->r[29]|c->r[29]; // 801C26D4
  c->r[6]=c->r[1]+0x00000008u; // 801C26D8
  W16(c->r[1]+0x00000008u,c->r[7]); // 801C26DC
  c->r[5]=0u+0x00000001u; // 801C26E0
  c->r[7]=0u+0x00000000u; // 801C26E4
  c->r[8]=0u+0x00000000u; // 801C26E8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801C26EC
  c->lr=0x801C26F4u; f_801D19F8(c); // 801C26F0
  c->r[5]=0u+0x801C0000u; // 801C26F4
  c->r[3]=c->r[28]|c->r[28]; // 801C26F8
  c->r[4]=c->r[29]|c->r[29]; // 801C26FC
  c->r[5]=c->r[5]+0x00002748u; // 801C2700
  c->lr=0x801C2708u; f_801D1D70(c); // 801C2704
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C2708
  if (crb(c,2)) { goto L_801C2724; } // 801C270C
  c->r[0]=0u+0x00000001u; // 801C2710
  W32(c->r[31]+0x00000384u,c->r[30]); // 801C2714
  c->r[3]=0u+0x00000000u; // 801C2718
  W8(c->r[31]+0x00000380u,c->r[0]); // 801C271C
  goto L_801C2728; // 801C2720
L_801C2724:;
  c->r[3]=0u+0x00000003u; // 801C2724
L_801C2728:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C2728
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C272C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C2730
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C2734
  c->r[28]=R32(c->r[1]+0x00000020u); // 801C2738
  c->lr=c->r[0]; // 801C273C
  c->r[1]=c->r[1]+0x00000030u; // 801C2740
  return; // 801C2744
}

// hidh_search_callback
void f_801C2748(Ctx* __restrict c) {
  trace_call(0x801C2748u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2748
  c->r[0]=c->lr; // 801C274C
  c->r[4]=0u+0x00000002u; // 801C2750
  cmps(c,0,(int32_t)c->r[3],0); // 801C2754
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C2758
  c->r[0]=0u+0x00001124u; // 801C275C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C2760
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C2764
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C2768
  c->r[29]=0u+0x00000000u; // 801C276C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801C2770
  c->r[28]=0u+0x803D0000u; // 801C2774
  c->r[28]=c->r[28]+0xFFFFADD8u; // 801C2778
  W16(c->r[1]+0x00000008u,c->r[4]); // 801C277C
  c->r[30]=c->r[28]+0x0000038Cu; // 801C2780
  c->r[4]=R32(c->r[28]+0x00000388u); // 801C2784
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801C2788
  W8(c->r[28]+0x00000380u,c->r[29]); // 801C278C
  if (crb(c,2)) { goto L_801C27AC; } // 801C2790
  c->r[12]=R32(c->r[28]+0x00000384u); // 801C2794
  c->r[4]=0u+0x00000000u; // 801C2798
  c->r[5]=0u+0x00000000u; // 801C279C
  c->ctr=c->r[12]; // 801C27A0
  if (true) { c->lr=0x801C27A8u; dispatch(c,c->ctr); } // 801C27A4
  goto L_801C2B78; // 801C27A8
L_801C27AC:;
  c->r[3]=c->r[4]|c->r[4]; // 801C27AC
  c->r[4]=c->r[1]+0x00000008u; // 801C27B0
  c->r[5]=0u+0x00000000u; // 801C27B4
  c->lr=0x801C27BCu; f_801D1F24(c); // 801C27B8
  cmps(c,0,(int32_t)c->r[3],0); // 801C27BC
  c->r[31]=c->r[3]|c->r[3]; // 801C27C0
  if (!crb(c,2)) { goto L_801C27E4; } // 801C27C4
  c->r[12]=R32(c->r[28]+0x00000384u); // 801C27C8
  c->r[3]=0u+0x0000000Cu; // 801C27CC
  c->r[4]=0u+0x00000000u; // 801C27D0
  c->r[5]=0u+0x00000000u; // 801C27D4
  c->ctr=c->r[12]; // 801C27D8
  if (true) { c->lr=0x801C27E0u; dispatch(c,c->ctr); } // 801C27DC
  goto L_801C2B78; // 801C27E0
L_801C27E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801C27E4
  c->r[4]=0u+0x00000000u; // 801C27E8
  c->r[5]=0u+0x00000074u; // 801C27EC
  c->lr=0x801C27F4u; f_80004688(c); // 801C27F0
  c->r[3]=c->r[31]|c->r[31]; // 801C27F4
  c->r[4]=0u+0x00000206u; // 801C27F8
  c->lr=0x801C2800u; f_801D1E30(c); // 801C27FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C2800
  if (crb(c,2)) { goto L_801C285C; } // 801C2804
  c->r[0]=R16(c->r[3]+0x00000006u); // 801C2808
  c->r[0]=sraw(c,c->r[0],12); // 801C280C
  cmps(c,0,(int32_t)c->r[0],6); // 801C2810
  if (!crb(c,2)) { goto L_801C285C; } // 801C2814
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C2818
  cmps(c,0,(int32_t)c->r[3],0); // 801C281C
  if (crb(c,2)) { goto L_801C285C; } // 801C2820
  c->r[0]=R16(c->r[3]+0x00000006u); // 801C2824
  c->r[0]=sraw(c,c->r[0],12); // 801C2828
  cmps(c,0,(int32_t)c->r[0],6); // 801C282C
  if (!crb(c,2)) { goto L_801C285C; } // 801C2830
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C2834
  cmps(c,0,(int32_t)c->r[3],0); // 801C2838
  if (crb(c,2)) { goto L_801C285C; } // 801C283C
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C2840
  cmps(c,0,(int32_t)c->r[4],0); // 801C2844
  if (crb(c,2)) { goto L_801C285C; } // 801C2848
  c->r[3]=R16(c->r[4]+0x00000006u); // 801C284C
  c->r[0]=sraw(c,c->r[3],12); // 801C2850
  cmps(c,0,(int32_t)c->r[0],4); // 801C2854
  if (crb(c,2)) { goto L_801C2880; } // 801C2858
L_801C285C:;
  c->r[5]=0u+0x803D0000u; // 801C285C
  c->r[3]=0u+0x0000000Du; // 801C2860
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C2864
  c->r[4]=0u+0x00000000u; // 801C2868
  c->r[12]=R32(c->r[5]+0x00000384u); // 801C286C
  c->r[5]=0u+0x00000000u; // 801C2870
  c->ctr=c->r[12]; // 801C2874
  if (true) { c->lr=0x801C287Cu; dispatch(c,c->ctr); } // 801C2878
  goto L_801C2B78; // 801C287C
L_801C2880:;
  c->r[0]=rotl(c->r[3],0)&0x00000FFFu; cr0(c,c->r[0]); // 801C2880
  W16(c->r[30]+0x00000068u,c->r[0]); // 801C2884
  if (crb(c,2)) { goto L_801C2894; } // 801C2888
  c->r[0]=c->r[4]+0x00000008u; // 801C288C
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 801C2890
L_801C2894:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2894
  c->r[4]=0u+0x00000204u; // 801C2898
  c->lr=0x801C28A0u; f_801D1E30(c); // 801C289C
  cmps(c,0,(int32_t)c->r[3],0); // 801C28A0
  if (crb(c,2)) { goto L_801C28B8; } // 801C28A4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C28A8
  cmps(c,0,(int32_t)c->r[0],0); // 801C28AC
  if (crb(c,2)) { goto L_801C28B8; } // 801C28B0
  c->r[29]=c->r[29]|0x00000001u; // 801C28B4
L_801C28B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C28B8
  c->r[4]=0u+0x00000205u; // 801C28BC
  c->lr=0x801C28C4u; f_801D1E30(c); // 801C28C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C28C4
  if (crb(c,2)) { goto L_801C28E0; } // 801C28C8
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C28CC
  cmps(c,0,(int32_t)c->r[0],0); // 801C28D0
  if (crb(c,2)) { goto L_801C28E0; } // 801C28D4
  c->r[0]=c->r[29]|0x00000004u; // 801C28D8
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801C28DC
L_801C28E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C28E0
  c->r[4]=0u+0x0000020Du; // 801C28E4
  c->lr=0x801C28ECu; f_801D1E30(c); // 801C28E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C28EC
  if (crb(c,2)) { goto L_801C2908; } // 801C28F0
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C28F4
  cmps(c,0,(int32_t)c->r[0],0); // 801C28F8
  if (crb(c,2)) { goto L_801C2908; } // 801C28FC
  c->r[0]=c->r[29]|0x00000002u; // 801C2900
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801C2904
L_801C2908:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2908
  c->r[4]=0u+0x00000208u; // 801C290C
  c->lr=0x801C2914u; f_801D1E30(c); // 801C2910
  cmps(c,0,(int32_t)c->r[3],0); // 801C2914
  if (crb(c,2)) { goto L_801C2930; } // 801C2918
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C291C
  cmps(c,0,(int32_t)c->r[0],0); // 801C2920
  if (crb(c,2)) { goto L_801C2930; } // 801C2924
  c->r[0]=c->r[29]|0x00000008u; // 801C2928
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801C292C
L_801C2930:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2930
  c->r[4]=0u+0x00000209u; // 801C2934
  c->lr=0x801C293Cu; f_801D1E30(c); // 801C2938
  cmps(c,0,(int32_t)c->r[3],0); // 801C293C
  if (crb(c,2)) { goto L_801C2958; } // 801C2940
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C2944
  cmps(c,0,(int32_t)c->r[0],0); // 801C2948
  if (crb(c,2)) { goto L_801C2958; } // 801C294C
  c->r[0]=c->r[29]|0x00000010u; // 801C2950
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801C2954
L_801C2958:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2958
  c->r[4]=0u+0x0000020Au; // 801C295C
  c->lr=0x801C2964u; f_801D1E30(c); // 801C2960
  cmps(c,0,(int32_t)c->r[3],0); // 801C2964
  if (crb(c,2)) { goto L_801C2980; } // 801C2968
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C296C
  cmps(c,0,(int32_t)c->r[0],0); // 801C2970
  if (crb(c,2)) { goto L_801C2980; } // 801C2974
  c->r[0]=c->r[29]|0x00000020u; // 801C2978
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801C297C
L_801C2980:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2980
  c->r[4]=0u+0x00000100u; // 801C2984
  c->lr=0x801C298Cu; f_801D1E30(c); // 801C2988
  cmps(c,0,(int32_t)c->r[3],0); // 801C298C
  c->r[4]=c->r[3]|c->r[3]; // 801C2990
  if (crb(c,2)) { goto L_801C29E0; } // 801C2994
  c->r[0]=R16(c->r[3]+0x00000006u); // 801C2998
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 801C299C
  cmpu(c,0,c->r[28],0x00000020u); // 801C29A0
  if (!crb(c,0)) { goto L_801C29C4; } // 801C29A4
  c->r[3]=c->r[30]|c->r[30]; // 801C29A8
  c->r[5]=c->r[28]|c->r[28]; // 801C29AC
  c->r[4]=c->r[4]+0x00000008u; // 801C29B0
  c->lr=0x801C29B8u; f_80004338(c); // 801C29B4
  c->r[0]=0u+0x00000000u; // 801C29B8
  W8(c->r[30]+c->r[28],c->r[0]); // 801C29BC
  goto L_801C29E8; // 801C29C0
L_801C29C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801C29C4
  c->r[4]=c->r[4]+0x00000008u; // 801C29C8
  c->r[5]=0u+0x0000001Fu; // 801C29CC
  c->lr=0x801C29D4u; f_80004338(c); // 801C29D0
  c->r[0]=0u+0x00000000u; // 801C29D4
  W8(c->r[30]+0x00000020u,c->r[0]); // 801C29D8
  goto L_801C29E8; // 801C29DC
L_801C29E0:;
  c->r[0]=0u+0x00000000u; // 801C29E0
  W8(c->r[30]+0x00000000u,c->r[0]); // 801C29E4
L_801C29E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C29E8
  c->r[4]=0u+0x00000101u; // 801C29EC
  c->lr=0x801C29F4u; f_801D1E30(c); // 801C29F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C29F4
  c->r[4]=c->r[3]|c->r[3]; // 801C29F8
  if (crb(c,2)) { goto L_801C2A4C; } // 801C29FC
  c->r[0]=R16(c->r[3]+0x00000006u); // 801C2A00
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 801C2A04
  cmpu(c,0,c->r[28],0x00000020u); // 801C2A08
  if (!crb(c,0)) { goto L_801C2A30; } // 801C2A0C
  c->r[5]=c->r[28]|c->r[28]; // 801C2A10
  c->r[3]=c->r[30]+0x00000020u; // 801C2A14
  c->r[4]=c->r[4]+0x00000008u; // 801C2A18
  c->lr=0x801C2A20u; f_80004338(c); // 801C2A1C
  c->r[3]=c->r[30]+c->r[28]; // 801C2A20
  c->r[0]=0u+0x00000000u; // 801C2A24
  W8(c->r[3]+0x00000020u,c->r[0]); // 801C2A28
  goto L_801C2A54; // 801C2A2C
L_801C2A30:;
  c->r[3]=c->r[30]+0x00000020u; // 801C2A30
  c->r[4]=c->r[4]+0x00000008u; // 801C2A34
  c->r[5]=0u+0x0000001Fu; // 801C2A38
  c->lr=0x801C2A40u; f_80004338(c); // 801C2A3C
  c->r[0]=0u+0x00000000u; // 801C2A40
  W8(c->r[30]+0x00000040u,c->r[0]); // 801C2A44
  goto L_801C2A54; // 801C2A48
L_801C2A4C:;
  c->r[0]=0u+0x00000000u; // 801C2A4C
  W8(c->r[30]+0x00000020u,c->r[0]); // 801C2A50
L_801C2A54:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2A54
  c->r[4]=0u+0x00000102u; // 801C2A58
  c->lr=0x801C2A60u; f_801D1E30(c); // 801C2A5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2A60
  c->r[4]=c->r[3]|c->r[3]; // 801C2A64
  if (crb(c,2)) { goto L_801C2AB8; } // 801C2A68
  c->r[0]=R16(c->r[3]+0x00000006u); // 801C2A6C
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 801C2A70
  cmpu(c,0,c->r[28],0x00000020u); // 801C2A74
  if (!crb(c,0)) { goto L_801C2A9C; } // 801C2A78
  c->r[5]=c->r[28]|c->r[28]; // 801C2A7C
  c->r[3]=c->r[30]+0x00000040u; // 801C2A80
  c->r[4]=c->r[4]+0x00000008u; // 801C2A84
  c->lr=0x801C2A8Cu; f_80004338(c); // 801C2A88
  c->r[3]=c->r[30]+c->r[28]; // 801C2A8C
  c->r[0]=0u+0x00000000u; // 801C2A90
  W8(c->r[3]+0x00000040u,c->r[0]); // 801C2A94
  goto L_801C2AC0; // 801C2A98
L_801C2A9C:;
  c->r[3]=c->r[30]+0x00000040u; // 801C2A9C
  c->r[4]=c->r[4]+0x00000008u; // 801C2AA0
  c->r[5]=0u+0x0000001Fu; // 801C2AA4
  c->lr=0x801C2AACu; f_80004338(c); // 801C2AA8
  c->r[0]=0u+0x00000000u; // 801C2AAC
  W8(c->r[30]+0x00000060u,c->r[0]); // 801C2AB0
  goto L_801C2AC0; // 801C2AB4
L_801C2AB8:;
  c->r[0]=0u+0x00000000u; // 801C2AB8
  W8(c->r[30]+0x00000040u,c->r[0]); // 801C2ABC
L_801C2AC0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2AC0
  c->r[4]=0u+0x00000200u; // 801C2AC4
  c->lr=0x801C2ACCu; f_801D1E30(c); // 801C2AC8
  cmps(c,0,(int32_t)c->r[3],0); // 801C2ACC
  if (crb(c,2)) { goto L_801C2ADC; } // 801C2AD0
  c->r[0]=R16(c->r[3]+0x00000008u); // 801C2AD4
  W16(c->r[30]+0x00000060u,c->r[0]); // 801C2AD8
L_801C2ADC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2ADC
  c->r[4]=0u+0x00000203u; // 801C2AE0
  c->lr=0x801C2AE8u; f_801D1E30(c); // 801C2AE4
  cmps(c,0,(int32_t)c->r[3],0); // 801C2AE8
  if (crb(c,2)) { goto L_801C2AF8; } // 801C2AEC
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C2AF0
  W8(c->r[30]+0x00000065u,c->r[0]); // 801C2AF4
L_801C2AF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2AF8
  c->r[4]=0u+0x00000202u; // 801C2AFC
  c->lr=0x801C2B04u; f_801D1E30(c); // 801C2B00
  cmps(c,0,(int32_t)c->r[3],0); // 801C2B04
  if (crb(c,2)) { goto L_801C2B14; } // 801C2B08
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C2B0C
  W8(c->r[30]+0x00000064u,c->r[0]); // 801C2B10
L_801C2B14:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2B14
  c->r[4]=0u+0x00000201u; // 801C2B18
  c->lr=0x801C2B20u; f_801D1E30(c); // 801C2B1C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2B20
  if (crb(c,2)) { goto L_801C2B30; } // 801C2B24
  c->r[0]=R16(c->r[3]+0x00000008u); // 801C2B28
  W16(c->r[30]+0x00000062u,c->r[0]); // 801C2B2C
L_801C2B30:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2B30
  c->r[4]=0u+0x0000020Cu; // 801C2B34
  c->lr=0x801C2B3Cu; f_801D1E30(c); // 801C2B38
  cmps(c,0,(int32_t)c->r[3],0); // 801C2B3C
  if (crb(c,2)) { goto L_801C2B54; } // 801C2B40
  c->r[0]=R16(c->r[3]+0x00000008u); // 801C2B44
  c->r[3]=c->r[29]|0x00000040u; // 801C2B48
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 801C2B4C
  W16(c->r[30]+0x00000066u,c->r[0]); // 801C2B50
L_801C2B54:;
  c->r[6]=0u+0x803D0000u; // 801C2B54
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 801C2B58
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C2B5C
  c->r[3]=0u+0x00000000u; // 801C2B60
  c->r[12]=R32(c->r[6]+0x00000384u); // 801C2B64
  c->r[5]=c->r[6]+0x0000038Cu; // 801C2B68
  W32(c->r[6]+0x000003FCu,c->r[31]); // 801C2B6C
  c->ctr=c->r[12]; // 801C2B70
  if (true) { c->lr=0x801C2B78u; dispatch(c,c->ctr); } // 801C2B74
L_801C2B78:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C2B78
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C2B7C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C2B80
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C2B84
  c->r[28]=R32(c->r[1]+0x00000020u); // 801C2B88
  c->lr=c->r[0]; // 801C2B8C
  c->r[1]=c->r[1]+0x00000030u; // 801C2B90
  return; // 801C2B94
}

// HID_HostInit
void f_801C2B98(Ctx* __restrict c) {
  trace_call(0x801C2B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2B98
  c->r[0]=c->lr; // 801C2B9C
  c->r[4]=0u+0x00000000u; // 801C2BA0
  c->r[5]=0u+0x00000404u; // 801C2BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2BAC
  c->r[31]=0u+0x803D0000u; // 801C2BB0
  c->r[3]=c->r[31]+0xFFFFADD8u; // 801C2BB4
  c->lr=0x801C2BBCu; f_80004688(c); // 801C2BB8
  c->r[3]=c->r[31]+0xFFFFADD8u; // 801C2BBC
  c->r[0]=0u+0x00000000u; // 801C2BC0
  W8(c->r[3]+0x00000401u,c->r[0]); // 801C2BC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2BC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2BCC
  c->lr=c->r[0]; // 801C2BD0
  c->r[1]=c->r[1]+0x00000010u; // 801C2BD4
  return; // 801C2BD8
}

// HID_HostRegister
void f_801C2BDC(Ctx* __restrict c) {
  trace_call(0x801C2BDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2BDC
  c->r[0]=c->lr; // 801C2BE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2BE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2BE8
  c->r[31]=0u+0x803D0000u; // 801C2BEC
  c->r[31]=c->r[31]+0xFFFFADD8u; // 801C2BF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C2BF4
  c->r[30]=c->r[3]|c->r[3]; // 801C2BF8
  c->r[0]=R8(c->r[31]+0x00000400u); // 801C2BFC
  cmps(c,0,(int32_t)c->r[0],0); // 801C2C00
  if (crb(c,2)) { goto L_801C2C10; } // 801C2C04
  c->r[3]=0u+0x00000002u; // 801C2C08
  goto L_801C2C40; // 801C2C0C
L_801C2C10:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C2C10
  if (!crb(c,2)) { goto L_801C2C20; } // 801C2C14
  c->r[3]=0u+0x00000005u; // 801C2C18
  goto L_801C2C40; // 801C2C1C
L_801C2C20:;
  c->lr=0x801C2C24u; f_801C3400(c); // 801C2C20
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C2C24
  if (crb(c,2)) { goto L_801C2C30; } // 801C2C28
  goto L_801C2C40; // 801C2C2C
L_801C2C30:;
  c->r[0]=0u+0x00000001u; // 801C2C30
  W32(c->r[31]+0x00000340u,c->r[30]); // 801C2C34
  c->r[3]=0u+0x00000000u; // 801C2C38
  W8(c->r[31]+0x00000400u,c->r[0]); // 801C2C3C
L_801C2C40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2C40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2C44
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C2C48
  c->lr=c->r[0]; // 801C2C4C
  c->r[1]=c->r[1]+0x00000010u; // 801C2C50
  return; // 801C2C54
}

// HID_HostDeregister
void f_801C2C58(Ctx* __restrict c) {
  trace_call(0x801C2C58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2C58
  c->r[0]=c->lr; // 801C2C5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2C60
  c->r[11]=c->r[1]+0x00000020u; // 801C2C64
  c->lr=0x801C2C6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C2C68
  c->r[3]=0u+0x803D0000u; // 801C2C6C
  c->r[29]=c->r[3]+0xFFFFADD8u; // 801C2C70
  c->r[0]=R8(c->r[29]+0x00000400u); // 801C2C74
  cmps(c,0,(int32_t)c->r[0],0); // 801C2C78
  if (!crb(c,2)) { goto L_801C2C88; } // 801C2C7C
  c->r[3]=0u+0x00000001u; // 801C2C80
  goto L_801C2D24; // 801C2C84
L_801C2C88:;
  c->r[27]=0u+0x00000000u; // 801C2C88
  c->r[30]=0u+0x00000001u; // 801C2C8C
  c->r[31]=0u+0x00000000u; // 801C2C90
L_801C2C94:;
  c->r[0]=R8(c->r[29]+0x00000400u); // 801C2C94
  cmps(c,6,(int32_t)c->r[0],0); // 801C2C98
  if (crb(c,26)) { goto L_801C2D00; } // 801C2C9C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801C2CA0
  cmpu(c,1,c->r[0],0x00000010u); // 801C2CA4
  if (crb(c,5)) { goto L_801C2D00; } // 801C2CA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C2CAC
  c->r[28]=c->r[29]+c->r[0]; // 801C2CB0
  c->r[0]=R8(c->r[29]+c->r[0]); // 801C2CB4
  cmps(c,0,(int32_t)c->r[0],0); // 801C2CB8
  if (crb(c,2)) { goto L_801C2D00; } // 801C2CBC
  if (crb(c,26)) { goto L_801C2CF0; } // 801C2CC0
  if (crb(c,5)) { goto L_801C2CF0; } // 801C2CC4
  if (crb(c,2)) { goto L_801C2CF0; } // 801C2CC8
  W8(c->r[28]+0x0000000Cu,c->r[30]); // 801C2CCC
  c->r[3]=c->r[28]+0x0000001Cu; // 801C2CD0
  c->lr=0x801C2CD8u; f_801AD15C(c); // 801C2CD4
  c->r[0]=R8(c->r[28]+0x0000000Au); // 801C2CD8
  cmpu(c,0,c->r[0],0x00000001u); // 801C2CDC
  if (!crb(c,2)) { goto L_801C2CF0; } // 801C2CE0
  W8(c->r[28]+0x0000000Cu,c->r[30]); // 801C2CE4
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 801C2CE8
  c->lr=0x801C2CF0u; f_801C3558(c); // 801C2CEC
L_801C2CF0:;
  W8(c->r[28]+0x00000000u,c->r[31]); // 801C2CF0
  W8(c->r[28]+0x00000010u,c->r[31]); // 801C2CF4
  W16(c->r[28]+0x00000016u,c->r[31]); // 801C2CF8
  W16(c->r[28]+0x00000014u,c->r[31]); // 801C2CFC
L_801C2D00:;
  c->r[27]=c->r[27]+0x00000001u; // 801C2D00
  cmpu(c,0,c->r[27],0x00000010u); // 801C2D04
  if (crb(c,0)) { IRQCHK(c); goto L_801C2C94; } // 801C2D08
  c->lr=0x801C2D10u; f_801C5414(c); // 801C2D0C
  c->r[4]=0u+0x803D0000u; // 801C2D10
  c->r[0]=0u+0x00000000u; // 801C2D14
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C2D18
  c->r[3]=0u+0x00000000u; // 801C2D1C
  W8(c->r[4]+0x00000400u,c->r[0]); // 801C2D20
L_801C2D24:;
  c->r[11]=c->r[1]+0x00000020u; // 801C2D24
  c->lr=0x801C2D2Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2D28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2D2C
  c->lr=c->r[0]; // 801C2D30
  c->r[1]=c->r[1]+0x00000020u; // 801C2D34
  return; // 801C2D38
}

// HID_HostAddDev
void f_801C2D3C(Ctx* __restrict c) {
  trace_call(0x801C2D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2D3C
  c->r[0]=c->lr; // 801C2D40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2D44
  c->r[11]=c->r[1]+0x00000020u; // 801C2D48
  c->lr=0x801C2D50u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C2D4C
  c->r[31]=0u+0x803D0000u; // 801C2D50
  c->r[26]=c->r[3]|c->r[3]; // 801C2D54
  c->r[31]=c->r[31]+0xFFFFADD8u; // 801C2D58
  c->r[27]=c->r[4]|c->r[4]; // 801C2D5C
  c->r[0]=R8(c->r[31]+0x00000400u); // 801C2D60
  c->r[28]=c->r[5]|c->r[5]; // 801C2D64
  cmps(c,0,(int32_t)c->r[0],0); // 801C2D68
  if (!crb(c,2)) { goto L_801C2D78; } // 801C2D6C
  c->r[3]=0u+0x00000001u; // 801C2D70
  goto L_801C2EB4; // 801C2D74
L_801C2D78:;
  c->r[29]=0u+0x00000000u; // 801C2D78
L_801C2D7C:;
  c->r[3]=c->r[26]|c->r[26]; // 801C2D7C
  c->r[4]=c->r[31]+0x00000001u; // 801C2D80
  c->r[5]=0u+0x00000006u; // 801C2D84
  c->lr=0x801C2D8Cu; f_8018C170(c); // 801C2D88
  cmps(c,0,(int32_t)c->r[3],0); // 801C2D8C
  if (crb(c,2)) { goto L_801C2DA4; } // 801C2D90
  c->r[29]=c->r[29]+0x00000001u; // 801C2D94
  c->r[31]=c->r[31]+0x00000034u; // 801C2D98
  cmps(c,0,(int32_t)c->r[29],16); // 801C2D9C
  if (crb(c,0)) { IRQCHK(c); goto L_801C2D7C; } // 801C2DA0
L_801C2DA4:;
  cmps(c,0,(int32_t)c->r[29],16); // 801C2DA4
  if (!crb(c,2)) { goto L_801C2E48; } // 801C2DA8
  c->r[3]=0u+0x803D0000u; // 801C2DAC
  c->r[0]=0u+0x00000002u; // 801C2DB0
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C2DB4
  c->r[29]=0u+0x00000000u; // 801C2DB8
  c->ctr=c->r[0]; // 801C2DBC
L_801C2DC0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801C2DC0
  cmps(c,0,(int32_t)c->r[0],0); // 801C2DC4
  if (crb(c,2)) { goto L_801C2E48; } // 801C2DC8
  c->r[0]=R8(c->r[3]+0x00000034u); // 801C2DCC
  c->r[29]=c->r[29]+0x00000001u; // 801C2DD0
  cmps(c,0,(int32_t)c->r[0],0); // 801C2DD4
  if (crb(c,2)) { goto L_801C2E48; } // 801C2DD8
  c->r[0]=R8(c->r[3]+0x00000068u); // 801C2DDC
  c->r[29]=c->r[29]+0x00000001u; // 801C2DE0
  cmps(c,0,(int32_t)c->r[0],0); // 801C2DE4
  if (crb(c,2)) { goto L_801C2E48; } // 801C2DE8
  c->r[0]=R8(c->r[3]+0x0000009Cu); // 801C2DEC
  c->r[29]=c->r[29]+0x00000001u; // 801C2DF0
  cmps(c,0,(int32_t)c->r[0],0); // 801C2DF4
  if (crb(c,2)) { goto L_801C2E48; } // 801C2DF8
  c->r[0]=R8(c->r[3]+0x000000D0u); // 801C2DFC
  c->r[29]=c->r[29]+0x00000001u; // 801C2E00
  cmps(c,0,(int32_t)c->r[0],0); // 801C2E04
  if (crb(c,2)) { goto L_801C2E48; } // 801C2E08
  c->r[0]=R8(c->r[3]+0x00000104u); // 801C2E0C
  c->r[29]=c->r[29]+0x00000001u; // 801C2E10
  cmps(c,0,(int32_t)c->r[0],0); // 801C2E14
  if (crb(c,2)) { goto L_801C2E48; } // 801C2E18
  c->r[0]=R8(c->r[3]+0x00000138u); // 801C2E1C
  c->r[29]=c->r[29]+0x00000001u; // 801C2E20
  cmps(c,0,(int32_t)c->r[0],0); // 801C2E24
  if (crb(c,2)) { goto L_801C2E48; } // 801C2E28
  c->r[0]=R8(c->r[3]+0x0000016Cu); // 801C2E2C
  c->r[29]=c->r[29]+0x00000001u; // 801C2E30
  cmps(c,0,(int32_t)c->r[0],0); // 801C2E34
  if (crb(c,2)) { goto L_801C2E48; } // 801C2E38
  c->r[3]=c->r[3]+0x000001A0u; // 801C2E3C
  c->r[29]=c->r[29]+0x00000001u; // 801C2E40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C2DC0; } // 801C2E44
L_801C2E48:;
  cmps(c,0,(int32_t)c->r[29],16); // 801C2E48
  if (!crb(c,2)) { goto L_801C2E58; } // 801C2E4C
  c->r[3]=0u+0x00000003u; // 801C2E50
  goto L_801C2EB4; // 801C2E54
L_801C2E58:;
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)52); // 801C2E58
  c->r[31]=0u+0x803D0000u; // 801C2E5C
  c->r[31]=c->r[31]+0xFFFFADD8u; // 801C2E60
  c->r[0]=R8(c->r[31]+c->r[30]); // 801C2E64
  cmps(c,0,(int32_t)c->r[0],0); // 801C2E68
  if (!crb(c,2)) { goto L_801C2E9C; } // 801C2E6C
  c->r[0]=0u+0x00000001u; // 801C2E70
  c->r[3]=c->r[31]+c->r[30]; // 801C2E74
  W8(c->r[31]+c->r[30],c->r[0]); // 801C2E78
  c->r[4]=c->r[26]|c->r[26]; // 801C2E7C
  c->r[3]=c->r[3]+0x00000001u; // 801C2E80
  c->r[5]=0u+0x00000006u; // 801C2E84
  c->lr=0x801C2E8Cu; f_80004338(c); // 801C2E88
  c->r[3]=c->r[31]+c->r[30]; // 801C2E8C
  c->r[0]=0u+0x00000000u; // 801C2E90
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801C2E94
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C2E98
L_801C2E9C:;
  c->r[4]=0u+0x803D0000u; // 801C2E9C
  c->r[3]=0u+0x00000000u; // 801C2EA0
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C2EA4
  c->r[4]=c->r[4]+c->r[30]; // 801C2EA8
  W16(c->r[4]+0x00000008u,c->r[27]); // 801C2EAC
  W8(c->r[28]+0x00000000u,c->r[29]); // 801C2EB0
L_801C2EB4:;
  c->r[11]=c->r[1]+0x00000020u; // 801C2EB4
  c->lr=0x801C2EBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2EB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2EBC
  c->lr=c->r[0]; // 801C2EC0
  c->r[1]=c->r[1]+0x00000020u; // 801C2EC4
  return; // 801C2EC8
}

// HID_HostRemoveDev
void f_801C2ECC(Ctx* __restrict c) {
  trace_call(0x801C2ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2ECC
  c->r[0]=c->lr; // 801C2ED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2ED4
  c->r[11]=c->r[1]+0x00000020u; // 801C2ED8
  c->lr=0x801C2EE0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C2EDC
  c->r[30]=0u+0x803D0000u; // 801C2EE0
  c->r[27]=c->r[3]|c->r[3]; // 801C2EE4
  c->r[30]=c->r[30]+0xFFFFADD8u; // 801C2EE8
  c->r[0]=R8(c->r[30]+0x00000400u); // 801C2EEC
  cmps(c,6,(int32_t)c->r[0],0); // 801C2EF0
  if (!crb(c,26)) { goto L_801C2F00; } // 801C2EF4
  c->r[3]=0u+0x00000001u; // 801C2EF8
  goto L_801C2F7C; // 801C2EFC
L_801C2F00:;
  cmpu(c,1,c->r[3],0x00000010u); // 801C2F00
  if (crb(c,5)) { goto L_801C2F1C; } // 801C2F04
  c->r[28]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C2F08
  c->r[0]=R8(c->r[30]+c->r[28]); // 801C2F0C
  c->r[29]=c->r[30]+c->r[28]; // 801C2F10
  cmps(c,0,(int32_t)c->r[0],0); // 801C2F14
  if (!crb(c,2)) { goto L_801C2F24; } // 801C2F18
L_801C2F1C:;
  c->r[3]=0u+0x00000005u; // 801C2F1C
  goto L_801C2F7C; // 801C2F20
L_801C2F24:;
  if (crb(c,26)) { goto L_801C2F58; } // 801C2F24
  if (crb(c,5)) { goto L_801C2F58; } // 801C2F28
  if (crb(c,2)) { goto L_801C2F58; } // 801C2F2C
  c->r[31]=0u+0x00000001u; // 801C2F30
  c->r[3]=c->r[29]+0x0000001Cu; // 801C2F34
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 801C2F38
  c->lr=0x801C2F40u; f_801AD15C(c); // 801C2F3C
  c->r[0]=R8(c->r[29]+0x0000000Au); // 801C2F40
  cmpu(c,0,c->r[0],0x00000001u); // 801C2F44
  if (!crb(c,2)) { goto L_801C2F58; } // 801C2F48
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 801C2F4C
  c->r[3]=c->r[27]|c->r[27]; // 801C2F50
  c->lr=0x801C2F58u; f_801C3558(c); // 801C2F54
L_801C2F58:;
  c->r[0]=0u+0x00000000u; // 801C2F58
  c->r[3]=0u+0x803D0000u; // 801C2F5C
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C2F60
  W8(c->r[29]+0x00000000u,c->r[0]); // 801C2F64
  c->r[4]=c->r[3]+c->r[28]; // 801C2F68
  W8(c->r[4]+0x00000010u,c->r[0]); // 801C2F6C
  c->r[3]=0u+0x00000000u; // 801C2F70
  W16(c->r[4]+0x00000016u,c->r[0]); // 801C2F74
  W16(c->r[4]+0x00000014u,c->r[0]); // 801C2F78
L_801C2F7C:;
  c->r[11]=c->r[1]+0x00000020u; // 801C2F7C
  c->lr=0x801C2F84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2F80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2F84
  c->lr=c->r[0]; // 801C2F88
  c->r[1]=c->r[1]+0x00000020u; // 801C2F8C
  return; // 801C2F90
}

// HID_HostOpenDev
void f_801C2F94(Ctx* __restrict c) {
  trace_call(0x801C2F94u);
  c->r[4]=0u+0x803D0000u; // 801C2F94
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C2F98
  c->r[0]=R8(c->r[4]+0x00000400u); // 801C2F9C
  cmps(c,0,(int32_t)c->r[0],0); // 801C2FA0
  if (!crb(c,2)) { goto L_801C2FB0; } // 801C2FA4
  c->r[3]=0u+0x00000001u; // 801C2FA8
  return; // 801C2FAC
L_801C2FB0:;
  cmpu(c,0,c->r[3],0x00000010u); // 801C2FB0
  if (crb(c,1)) { goto L_801C2FC8; } // 801C2FB4
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C2FB8
  c->r[0]=R8(c->r[4]+c->r[5]); // 801C2FBC
  cmps(c,0,(int32_t)c->r[0],0); // 801C2FC0
  if (!crb(c,2)) { goto L_801C2FD0; } // 801C2FC4
L_801C2FC8:;
  c->r[3]=0u+0x00000005u; // 801C2FC8
  return; // 801C2FCC
L_801C2FD0:;
  c->r[4]=c->r[4]+c->r[5]; // 801C2FD0
  c->r[0]=R8(c->r[4]+0x0000000Au); // 801C2FD4
  cmps(c,0,(int32_t)c->r[0],0); // 801C2FD8
  if (crb(c,2)) { goto L_801C2FE8; } // 801C2FDC
  c->r[3]=0u+0x0000000Au; // 801C2FE0
  return; // 801C2FE4
L_801C2FE8:;
  c->r[0]=0u+0x00000001u; // 801C2FE8
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 801C2FEC
  f_801C5318(c); return; // 801C2FF0
  return; // 801C2FF4
}

// HID_HostWriteDev
void f_801C2FF8(Ctx* __restrict c) {
  trace_call(0x801C2FF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2FF8
  c->r[0]=c->lr; // 801C2FFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C3000
  c->r[11]=c->r[1]+0x00000030u; // 801C3004
  c->lr=0x801C300Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3008
  c->r[9]=0u+0x803D0000u; // 801C300C
  c->r[31]=0u+0x80330000u; // 801C3010
  c->r[9]=c->r[9]+0xFFFFADD8u; // 801C3014
  c->r[25]=c->r[3]|c->r[3]; // 801C3018
  c->r[0]=R8(c->r[9]+0x00000400u); // 801C301C
  c->r[26]=c->r[4]|c->r[4]; // 801C3020
  c->r[27]=c->r[5]|c->r[5]; // 801C3024
  c->r[28]=c->r[6]|c->r[6]; // 801C3028
  cmps(c,0,(int32_t)c->r[0],0); // 801C302C
  c->r[29]=c->r[7]|c->r[7]; // 801C3030
  c->r[30]=c->r[8]|c->r[8]; // 801C3034
  c->r[31]=c->r[31]+0x00003DE8u; // 801C3038
  c->r[24]=0u+0x00000000u; // 801C303C
  if (!crb(c,2)) { goto L_801C3060; } // 801C3040
  c->r[0]=R8(c->r[9]+0x00000401u); // 801C3044
  cmpu(c,0,c->r[0],0x00000001u); // 801C3048
  if (crb(c,0)) { goto L_801C305C; } // 801C304C
  c->r[4]=c->r[31]+0x00000000u; // 801C3050
  c->r[3]=0u+0x001E0000u; // 801C3054
  c->lr=0x801C305Cu; f_801ACB20(c); // 801C3058
L_801C305C:;
  c->r[24]=0u+0x00000001u; // 801C305C
L_801C3060:;
  cmpu(c,0,c->r[25],0x00000010u); // 801C3060
  if (crb(c,1)) { goto L_801C3080; } // 801C3064
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)52); // 801C3068
  c->r[3]=0u+0x803D0000u; // 801C306C
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C3070
  c->r[0]=R8(c->r[3]+c->r[0]); // 801C3074
  cmps(c,0,(int32_t)c->r[0],0); // 801C3078
  if (!crb(c,2)) { goto L_801C30A4; } // 801C307C
L_801C3080:;
  c->r[3]=0u+0x803D0000u; // 801C3080
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C3084
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3088
  cmpu(c,0,c->r[0],0x00000001u); // 801C308C
  if (crb(c,0)) { goto L_801C30A0; } // 801C3090
  c->r[4]=c->r[31]+0x00000018u; // 801C3094
  c->r[3]=0u+0x001E0000u; // 801C3098
  c->lr=0x801C30A0u; f_801ACB20(c); // 801C309C
L_801C30A0:;
  c->r[24]=0u+0x00000005u; // 801C30A0
L_801C30A4:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)52); // 801C30A4
  c->r[4]=0u+0x803D0000u; // 801C30A8
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C30AC
  c->r[3]=c->r[4]+c->r[0]; // 801C30B0
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801C30B4
  cmpu(c,0,c->r[0],0x00000001u); // 801C30B8
  if (crb(c,2)) { goto L_801C30E0; } // 801C30BC
  c->r[0]=R8(c->r[4]+0x00000401u); // 801C30C0
  cmpu(c,0,c->r[0],0x00000001u); // 801C30C4
  if (crb(c,0)) { goto L_801C30DC; } // 801C30C8
  c->r[5]=c->r[25]|c->r[25]; // 801C30CC
  c->r[4]=c->r[31]+0x00000030u; // 801C30D0
  c->r[3]=0u+0x001E0000u; // 801C30D4
  c->lr=0x801C30DCu; f_801ACB38(c); // 801C30D8
L_801C30DC:;
  c->r[24]=0u+0x00000004u; // 801C30DC
L_801C30E0:;
  cmps(c,0,(int32_t)c->r[24],0); // 801C30E0
  if (crb(c,2)) { goto L_801C30FC; } // 801C30E4
  cmps(c,0,(int32_t)c->r[30],0); // 801C30E8
  if (crb(c,2)) { goto L_801C311C; } // 801C30EC
  c->r[3]=c->r[30]|c->r[30]; // 801C30F0
  c->lr=0x801C30F8u; f_801AA228(c); // 801C30F4
  goto L_801C311C; // 801C30F8
L_801C30FC:;
  c->r[3]=c->r[25]|c->r[25]; // 801C30FC
  c->r[4]=c->r[26]|c->r[26]; // 801C3100
  c->r[5]=c->r[27]|c->r[27]; // 801C3104
  c->r[6]=c->r[28]|c->r[28]; // 801C3108
  c->r[7]=c->r[29]|c->r[29]; // 801C310C
  c->r[8]=c->r[30]|c->r[30]; // 801C3110
  c->lr=0x801C3118u; f_801C507C(c); // 801C3114
  c->r[24]=c->r[3]|c->r[3]; // 801C3118
L_801C311C:;
  c->r[11]=c->r[1]+0x00000030u; // 801C311C
  c->r[3]=c->r[24]|c->r[24]; // 801C3120
  c->lr=0x801C3128u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3124
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C3128
  c->lr=c->r[0]; // 801C312C
  c->r[1]=c->r[1]+0x00000030u; // 801C3130
  return; // 801C3134
}

// HID_HostCloseDev
void f_801C3138(Ctx* __restrict c) {
  trace_call(0x801C3138u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3138
  c->r[0]=c->lr; // 801C313C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3140
  c->r[11]=c->r[1]+0x00000020u; // 801C3144
  c->lr=0x801C314Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3148
  c->r[30]=0u+0x803D0000u; // 801C314C
  c->r[27]=c->r[3]|c->r[3]; // 801C3150
  c->r[30]=c->r[30]+0xFFFFADD8u; // 801C3154
  c->r[0]=R8(c->r[30]+0x00000400u); // 801C3158
  cmps(c,0,(int32_t)c->r[0],0); // 801C315C
  if (!crb(c,2)) { goto L_801C316C; } // 801C3160
  c->r[3]=0u+0x00000001u; // 801C3164
  goto L_801C31C0; // 801C3168
L_801C316C:;
  cmpu(c,0,c->r[3],0x00000010u); // 801C316C
  if (crb(c,1)) { goto L_801C3188; } // 801C3170
  c->r[28]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C3174
  c->r[0]=R8(c->r[30]+c->r[28]); // 801C3178
  c->r[29]=c->r[30]+c->r[28]; // 801C317C
  cmps(c,0,(int32_t)c->r[0],0); // 801C3180
  if (!crb(c,2)) { goto L_801C3190; } // 801C3184
L_801C3188:;
  c->r[3]=0u+0x00000005u; // 801C3188
  goto L_801C31C0; // 801C318C
L_801C3190:;
  c->r[31]=0u+0x00000001u; // 801C3190
  c->r[3]=c->r[29]+0x0000001Cu; // 801C3194
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 801C3198
  c->lr=0x801C31A0u; f_801AD15C(c); // 801C319C
  c->r[0]=R8(c->r[29]+0x0000000Au); // 801C31A0
  cmpu(c,0,c->r[0],0x00000001u); // 801C31A4
  if (crb(c,2)) { goto L_801C31B4; } // 801C31A8
  c->r[3]=0u+0x00000004u; // 801C31AC
  goto L_801C31C0; // 801C31B0
L_801C31B4:;
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 801C31B4
  c->r[3]=c->r[27]|c->r[27]; // 801C31B8
  c->lr=0x801C31C0u; f_801C3558(c); // 801C31BC
L_801C31C0:;
  c->r[11]=c->r[1]+0x00000020u; // 801C31C0
  c->lr=0x801C31C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C31C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C31C8
  c->lr=c->r[0]; // 801C31CC
  c->r[1]=c->r[1]+0x00000020u; // 801C31D0
  return; // 801C31D4
}

// HID_HostSetSecurityLevel
void f_801C31D8(Ctx* __restrict c) {
  trace_call(0x801C31D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C31D8
  c->r[0]=c->lr; // 801C31DC
  c->r[5]=0u+0x00000020u; // 801C31E0
  c->r[7]=0u+0x00000011u; // 801C31E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C31E8
  c->r[8]=0u+0x00000006u; // 801C31EC
  c->r[9]=0u+0x00000001u; // 801C31F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C31F4
  c->r[31]=0u+0x80330000u; // 801C31F8
  c->r[31]=c->r[31]+0x00003DE8u; // 801C31FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3200
  c->r[30]=c->r[4]|c->r[4]; // 801C3204
  c->r[6]=c->r[30]|c->r[30]; // 801C3208
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C320C
  c->r[29]=c->r[3]|c->r[3]; // 801C3210
  c->r[3]=0u+0x00000000u; // 801C3214
  c->r[4]=c->r[29]|c->r[29]; // 801C3218
  c->lr=0x801C3220u; f_801BA694(c); // 801C321C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C3220
  if (!crb(c,2)) { goto L_801C3250; } // 801C3224
  c->r[3]=0u+0x803D0000u; // 801C3228
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C322C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3230
  cmpu(c,0,c->r[0],0x00000001u); // 801C3234
  if (crb(c,0)) { goto L_801C3248; } // 801C3238
  c->r[4]=c->r[31]+0x00000054u; // 801C323C
  c->r[3]=0u+0x001E0000u; // 801C3240
  c->lr=0x801C3248u; f_801ACB20(c); // 801C3244
L_801C3248:;
  c->r[3]=0u+0x00000003u; // 801C3248
  goto L_801C33E4; // 801C324C
L_801C3250:;
  c->r[4]=c->r[29]|c->r[29]; // 801C3250
  c->r[6]=c->r[30]|c->r[30]; // 801C3254
  c->r[3]=0u+0x00000001u; // 801C3258
  c->r[5]=0u+0x00000020u; // 801C325C
  c->r[7]=0u+0x00000011u; // 801C3260
  c->r[8]=0u+0x00000006u; // 801C3264
  c->r[9]=0u+0x00000001u; // 801C3268
  c->lr=0x801C3270u; f_801BA694(c); // 801C326C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C3270
  if (!crb(c,2)) { goto L_801C32A0; } // 801C3274
  c->r[3]=0u+0x803D0000u; // 801C3278
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C327C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3280
  cmpu(c,0,c->r[0],0x00000001u); // 801C3284
  if (crb(c,0)) { goto L_801C3298; } // 801C3288
  c->r[4]=c->r[31]+0x00000074u; // 801C328C
  c->r[3]=0u+0x001E0000u; // 801C3290
  c->lr=0x801C3298u; f_801ACB20(c); // 801C3294
L_801C3298:;
  c->r[3]=0u+0x00000003u; // 801C3298
  goto L_801C33E4; // 801C329C
L_801C32A0:;
  c->r[4]=c->r[29]|c->r[29]; // 801C32A0
  c->r[3]=0u+0x00000000u; // 801C32A4
  c->r[5]=0u+0x00000021u; // 801C32A8
  c->r[6]=0u+0x00000000u; // 801C32AC
  c->r[7]=0u+0x00000011u; // 801C32B0
  c->r[8]=0u+0x00000006u; // 801C32B4
  c->r[9]=0u+0x00000002u; // 801C32B8
  c->lr=0x801C32C0u; f_801BA694(c); // 801C32BC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C32C0
  if (!crb(c,2)) { goto L_801C32F0; } // 801C32C4
  c->r[3]=0u+0x803D0000u; // 801C32C8
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C32CC
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C32D0
  cmpu(c,0,c->r[0],0x00000001u); // 801C32D4
  if (crb(c,0)) { goto L_801C32E8; } // 801C32D8
  c->r[4]=c->r[31]+0x00000094u; // 801C32DC
  c->r[3]=0u+0x001E0000u; // 801C32E0
  c->lr=0x801C32E8u; f_801ACB20(c); // 801C32E4
L_801C32E8:;
  c->r[3]=0u+0x00000003u; // 801C32E8
  goto L_801C33E4; // 801C32EC
L_801C32F0:;
  c->r[4]=c->r[29]|c->r[29]; // 801C32F0
  c->r[3]=0u+0x00000001u; // 801C32F4
  c->r[5]=0u+0x00000021u; // 801C32F8
  c->r[6]=0u+0x00000000u; // 801C32FC
  c->r[7]=0u+0x00000011u; // 801C3300
  c->r[8]=0u+0x00000006u; // 801C3304
  c->r[9]=0u+0x00000002u; // 801C3308
  c->lr=0x801C3310u; f_801BA694(c); // 801C330C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C3310
  if (!crb(c,2)) { goto L_801C3340; } // 801C3314
  c->r[3]=0u+0x803D0000u; // 801C3318
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C331C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3320
  cmpu(c,0,c->r[0],0x00000001u); // 801C3324
  if (crb(c,0)) { goto L_801C3338; } // 801C3328
  c->r[4]=c->r[31]+0x000000B4u; // 801C332C
  c->r[3]=0u+0x001E0000u; // 801C3330
  c->lr=0x801C3338u; f_801ACB20(c); // 801C3334
L_801C3338:;
  c->r[3]=0u+0x00000003u; // 801C3338
  goto L_801C33E4; // 801C333C
L_801C3340:;
  c->r[4]=c->r[29]|c->r[29]; // 801C3340
  c->r[3]=0u+0x00000001u; // 801C3344
  c->r[5]=0u+0x00000022u; // 801C3348
  c->r[6]=0u+0x00000000u; // 801C334C
  c->r[7]=0u+0x00000013u; // 801C3350
  c->r[8]=0u+0x00000006u; // 801C3354
  c->r[9]=0u+0x00000000u; // 801C3358
  c->lr=0x801C3360u; f_801BA694(c); // 801C335C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C3360
  if (!crb(c,2)) { goto L_801C3390; } // 801C3364
  c->r[3]=0u+0x803D0000u; // 801C3368
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C336C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3370
  cmpu(c,0,c->r[0],0x00000001u); // 801C3374
  if (crb(c,0)) { goto L_801C3388; } // 801C3378
  c->r[4]=c->r[31]+0x000000D4u; // 801C337C
  c->r[3]=0u+0x001E0000u; // 801C3380
  c->lr=0x801C3388u; f_801ACB20(c); // 801C3384
L_801C3388:;
  c->r[3]=0u+0x00000003u; // 801C3388
  goto L_801C33E4; // 801C338C
L_801C3390:;
  c->r[4]=c->r[29]|c->r[29]; // 801C3390
  c->r[3]=0u+0x00000000u; // 801C3394
  c->r[5]=0u+0x00000022u; // 801C3398
  c->r[6]=0u+0x00000000u; // 801C339C
  c->r[7]=0u+0x00000013u; // 801C33A0
  c->r[8]=0u+0x00000006u; // 801C33A4
  c->r[9]=0u+0x00000000u; // 801C33A8
  c->lr=0x801C33B0u; f_801BA694(c); // 801C33AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C33B0
  if (!crb(c,2)) { goto L_801C33E0; } // 801C33B4
  c->r[3]=0u+0x803D0000u; // 801C33B8
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C33BC
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C33C0
  cmpu(c,0,c->r[0],0x00000001u); // 801C33C4
  if (crb(c,0)) { goto L_801C33D8; } // 801C33C8
  c->r[4]=c->r[31]+0x000000F4u; // 801C33CC
  c->r[3]=0u+0x001E0000u; // 801C33D0
  c->lr=0x801C33D8u; f_801ACB20(c); // 801C33D4
L_801C33D8:;
  c->r[3]=0u+0x00000003u; // 801C33D8
  goto L_801C33E4; // 801C33DC
L_801C33E0:;
  c->r[3]=0u+0x00000000u; // 801C33E0
L_801C33E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C33E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C33E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C33EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C33F0
  c->lr=c->r[0]; // 801C33F4
  c->r[1]=c->r[1]+0x00000020u; // 801C33F8
  return; // 801C33FC
}

// hidh_conn_reg
void f_801C3400(Ctx* __restrict c) {
  trace_call(0x801C3400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3400
  c->r[0]=c->lr; // 801C3404
  c->r[3]=0u+0x00010000u; // 801C3408
  c->r[6]=0u+0x00000001u; // 801C340C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3410
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C3414
  c->r[5]=0u+0x00000280u; // 801C3418
  c->r[3]=0u+0x00000011u; // 801C341C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3420
  c->r[31]=0u+0x802E0000u; // 801C3424
  c->r[4]=c->r[31]+0x00001338u; // 801C3428
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C342C
  c->r[30]=0u+0x803D0000u; // 801C3430
  c->r[30]=c->r[30]+0xFFFFADD8u; // 801C3434
  W8(c->r[30]+0x00000346u,c->r[6]); // 801C3438
  W16(c->r[30]+0x00000348u,c->r[5]); // 801C343C
  W8(c->r[30]+0x00000364u,c->r[6]); // 801C3440
  W16(c->r[30]+0x00000366u,c->r[0]); // 801C3444
  c->lr=0x801C344Cu; f_801C5440(c); // 801C3448
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C344C
  if (!crb(c,2)) { goto L_801C3478; } // 801C3450
  c->r[0]=R8(c->r[30]+0x00000401u); // 801C3454
  cmpu(c,0,c->r[0],0x00000001u); // 801C3458
  if (crb(c,0)) { goto L_801C3470; } // 801C345C
  c->r[4]=0u+0x80330000u; // 801C3460
  c->r[3]=0u+0x001E0000u; // 801C3464
  c->r[4]=c->r[4]+0x00003F00u; // 801C3468
  c->lr=0x801C3470u; f_801ACB20(c); // 801C346C
L_801C3470:;
  c->r[3]=0u+0x0000000Eu; // 801C3470
  goto L_801C3540; // 801C3474
L_801C3478:;
  c->r[4]=c->r[31]+0x00001338u; // 801C3478
  c->r[3]=0u+0x00000013u; // 801C347C
  c->lr=0x801C3484u; f_801C5440(c); // 801C3480
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C3484
  if (!crb(c,2)) { goto L_801C34B8; } // 801C3488
  c->r[3]=0u+0x00000011u; // 801C348C
  c->lr=0x801C3494u; f_801C55DC(c); // 801C3490
  c->r[0]=R8(c->r[30]+0x00000401u); // 801C3494
  cmpu(c,0,c->r[0],0x00000001u); // 801C3498
  if (crb(c,0)) { goto L_801C34B0; } // 801C349C
  c->r[4]=0u+0x80330000u; // 801C34A0
  c->r[3]=0u+0x001E0000u; // 801C34A4
  c->r[4]=c->r[4]+0x00003F20u; // 801C34A8
  c->lr=0x801C34B0u; f_801ACB20(c); // 801C34AC
L_801C34B0:;
  c->r[3]=0u+0x0000000Eu; // 801C34B0
  goto L_801C3540; // 801C34B4
L_801C34B8:;
  c->r[0]=0u+0x00000000u; // 801C34B8
  c->r[3]=0u+0x00000000u; // 801C34BC
  W8(c->r[30]+0x00000000u,c->r[0]); // 801C34C0
  W8(c->r[30]+0x00000010u,c->r[0]); // 801C34C4
  W8(c->r[30]+0x00000034u,c->r[0]); // 801C34C8
  W8(c->r[30]+0x00000044u,c->r[0]); // 801C34CC
  W8(c->r[30]+0x00000068u,c->r[0]); // 801C34D0
  W8(c->r[30]+0x00000078u,c->r[0]); // 801C34D4
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 801C34D8
  W8(c->r[30]+0x000000ACu,c->r[0]); // 801C34DC
  W8(c->r[30]+0x000000D0u,c->r[0]); // 801C34E0
  W8(c->r[30]+0x000000E0u,c->r[0]); // 801C34E4
  W8(c->r[30]+0x00000104u,c->r[0]); // 801C34E8
  W8(c->r[30]+0x00000114u,c->r[0]); // 801C34EC
  W8(c->r[30]+0x00000138u,c->r[0]); // 801C34F0
  W8(c->r[30]+0x00000148u,c->r[0]); // 801C34F4
  W8(c->r[30]+0x0000016Cu,c->r[0]); // 801C34F8
  W8(c->r[30]+0x0000017Cu,c->r[0]); // 801C34FC
  W8(c->r[30]+0x000001A0u,c->r[0]); // 801C3500
  W8(c->r[30]+0x000001B0u,c->r[0]); // 801C3504
  W8(c->r[30]+0x000001D4u,c->r[0]); // 801C3508
  W8(c->r[30]+0x000001E4u,c->r[0]); // 801C350C
  W8(c->r[30]+0x00000208u,c->r[0]); // 801C3510
  W8(c->r[30]+0x00000218u,c->r[0]); // 801C3514
  W8(c->r[30]+0x0000023Cu,c->r[0]); // 801C3518
  W8(c->r[30]+0x0000024Cu,c->r[0]); // 801C351C
  W8(c->r[30]+0x00000270u,c->r[0]); // 801C3520
  W8(c->r[30]+0x00000280u,c->r[0]); // 801C3524
  W8(c->r[30]+0x000002A4u,c->r[0]); // 801C3528
  W8(c->r[30]+0x000002B4u,c->r[0]); // 801C352C
  W8(c->r[30]+0x000002D8u,c->r[0]); // 801C3530
  W8(c->r[30]+0x000002E8u,c->r[0]); // 801C3534
  W8(c->r[30]+0x0000030Cu,c->r[0]); // 801C3538
  W8(c->r[30]+0x0000031Cu,c->r[0]); // 801C353C
L_801C3540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3544
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C3548
  c->lr=c->r[0]; // 801C354C
  c->r[1]=c->r[1]+0x00000010u; // 801C3550
  return; // 801C3554
}

// hidh_conn_disconnect
void f_801C3558(Ctx* __restrict c) {
  trace_call(0x801C3558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3558
  c->r[0]=c->lr; // 801C355C
  c->r[4]=0u+0x803D0000u; // 801C3560
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3564
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C3568
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C356C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3570
  c->r[0]=R8(c->r[4]+0x00000401u); // 801C3574
  c->r[31]=c->r[4]+c->r[3]; // 801C3578
  cmpu(c,0,c->r[0],0x00000004u); // 801C357C
  if (crb(c,0)) { goto L_801C3598; } // 801C3580
  c->r[3]=0u+0x001E0000u; // 801C3584
  c->r[4]=0u+0x80330000u; // 801C3588
  c->r[3]=c->r[3]+0x00000003u; // 801C358C
  c->r[4]=c->r[4]+0x00003F44u; // 801C3590
  c->lr=0x801C3598u; f_801ACB20(c); // 801C3594
L_801C3598:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 801C3598
  cmps(c,0,(int32_t)c->r[0],0); // 801C359C
  if (!crb(c,2)) { goto L_801C35B0; } // 801C35A0
  c->r[0]=R16(c->r[31]+0x00000016u); // 801C35A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C35A8
  if (crb(c,2)) { goto L_801C35DC; } // 801C35AC
L_801C35B0:;
  c->r[0]=0u+0x00000005u; // 801C35B0
  W8(c->r[31]+0x00000010u,c->r[0]); // 801C35B4
  c->r[3]=R16(c->r[31]+0x00000016u); // 801C35B8
  cmps(c,0,(int32_t)c->r[3],0); // 801C35BC
  if (crb(c,2)) { goto L_801C35C8; } // 801C35C0
  c->lr=0x801C35C8u; f_801C5BB8(c); // 801C35C4
L_801C35C8:;
  c->r[3]=R16(c->r[31]+0x00000014u); // 801C35C8
  cmps(c,0,(int32_t)c->r[3],0); // 801C35CC
  if (crb(c,2)) { goto L_801C35E4; } // 801C35D0
  c->lr=0x801C35D8u; f_801C5BB8(c); // 801C35D4
  goto L_801C35E4; // 801C35D8
L_801C35DC:;
  c->r[0]=0u+0x00000000u; // 801C35DC
  W8(c->r[31]+0x00000010u,c->r[0]); // 801C35E0
L_801C35E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C35E4
  c->r[3]=0u+0x00000000u; // 801C35E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C35EC
  c->lr=c->r[0]; // 801C35F0
  c->r[1]=c->r[1]+0x00000010u; // 801C35F4
  return; // 801C35F8
}

// hidh_sec_check_complete_term
void f_801C35FC(Ctx* __restrict c) {
  trace_call(0x801C35FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C35FC
  c->r[0]=c->lr; // 801C3600
  c->r[3]=0u+0x4EC50000u; // 801C3604
  cmps(c,0,(int32_t)c->r[5],0); // 801C3608
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C360C
  c->r[3]=c->r[3]+0xFFFFEC4Fu; // 801C3610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3614
  c->r[31]=0u+0x803D0000u; // 801C3618
  c->r[31]=c->r[31]+0xFFFFADD8u; // 801C361C
  c->r[0]=c->r[4]-c->r[31]; // 801C3620
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C3624
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801C3628
  c->r[30]=c->r[4]|c->r[4]; // 801C362C
  c->r[0]=sraw(c,c->r[0],4); // 801C3630
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C3634
  c->r[0]=c->r[0]+c->r[3]; // 801C3638
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801C363C
  if (!crb(c,2)) { goto L_801C3688; } // 801C3640
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C3644
  cmpu(c,0,c->r[0],0x00000006u); // 801C3648
  if (!crb(c,2)) { goto L_801C3688; } // 801C364C
  c->r[3]=0u+0x00000000u; // 801C3650
  c->r[0]=0u+0x00000002u; // 801C3654
  W16(c->r[4]+0x0000001Au,c->r[3]); // 801C3658
  c->r[3]=c->r[4]+0x00000001u; // 801C365C
  c->r[5]=R16(c->r[30]+0x00000014u); // 801C3660
  c->r[6]=0u+0x00000000u; // 801C3664
  W8(c->r[4]+0x00000010u,c->r[0]); // 801C3668
  c->r[7]=0u+0x00000000u; // 801C366C
  c->r[4]=R8(c->r[4]+0x00000012u); // 801C3670
  c->lr=0x801C3678u; f_801C58A0(c); // 801C3674
  c->r[3]=R16(c->r[30]+0x00000014u); // 801C3678
  c->r[4]=c->r[31]+0x00000344u; // 801C367C
  c->lr=0x801C3684u; f_801C5A30(c); // 801C3680
  goto L_801C3714; // 801C3684
L_801C3688:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C3688
  if (crb(c,2)) { goto L_801C3714; } // 801C368C
  c->r[0]=0u+0x0000000Fu; // 801C3690
  c->r[3]=0u+0x803D0000u; // 801C3694
  W16(c->r[4]+0x0000001Au,c->r[0]); // 801C3698
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C369C
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)52); // 801C36A0
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C36A4
  cmpu(c,0,c->r[0],0x00000004u); // 801C36A8
  c->r[31]=c->r[3]+c->r[4]; // 801C36AC
  if (crb(c,0)) { goto L_801C36C8; } // 801C36B0
  c->r[3]=0u+0x001E0000u; // 801C36B4
  c->r[4]=0u+0x80330000u; // 801C36B8
  c->r[3]=c->r[3]+0x00000003u; // 801C36BC
  c->r[4]=c->r[4]+0x00003F44u; // 801C36C0
  c->lr=0x801C36C8u; f_801ACB20(c); // 801C36C4
L_801C36C8:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 801C36C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C36CC
  if (!crb(c,2)) { goto L_801C36E0; } // 801C36D0
  c->r[0]=R16(c->r[31]+0x00000016u); // 801C36D4
  cmps(c,0,(int32_t)c->r[0],0); // 801C36D8
  if (crb(c,2)) { goto L_801C370C; } // 801C36DC
L_801C36E0:;
  c->r[0]=0u+0x00000005u; // 801C36E0
  W8(c->r[31]+0x00000010u,c->r[0]); // 801C36E4
  c->r[3]=R16(c->r[31]+0x00000016u); // 801C36E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C36EC
  if (crb(c,2)) { goto L_801C36F8; } // 801C36F0
  c->lr=0x801C36F8u; f_801C5BB8(c); // 801C36F4
L_801C36F8:;
  c->r[3]=R16(c->r[31]+0x00000014u); // 801C36F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C36FC
  if (crb(c,2)) { goto L_801C3714; } // 801C3700
  c->lr=0x801C3708u; f_801C5BB8(c); // 801C3704
  goto L_801C3714; // 801C3708
L_801C370C:;
  c->r[0]=0u+0x00000000u; // 801C370C
  W8(c->r[31]+0x00000010u,c->r[0]); // 801C3710
L_801C3714:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3718
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C371C
  c->lr=c->r[0]; // 801C3720
  c->r[1]=c->r[1]+0x00000010u; // 801C3724
  return; // 801C3728
}

// hidh_l2cif_connect_ind
void f_801C372C(Ctx* __restrict c) {
  trace_call(0x801C372Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C372C
  c->r[0]=c->lr; // 801C3730
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C3734
  c->r[11]=c->r[1]+0x00000030u; // 801C3738
  c->lr=0x801C3740u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C373C
  c->r[7]=0u+0x803D0000u; // 801C3740
  c->r[31]=0u+0x80330000u; // 801C3744
  c->r[7]=c->r[7]+0xFFFFADD8u; // 801C3748
  c->r[26]=c->r[3]|c->r[3]; // 801C374C
  c->r[0]=R8(c->r[7]+0x00000401u); // 801C3750
  c->r[27]=c->r[4]|c->r[4]; // 801C3754
  c->r[28]=c->r[5]|c->r[5]; // 801C3758
  c->r[29]=c->r[6]|c->r[6]; // 801C375C
  cmpu(c,0,c->r[0],0x00000004u); // 801C3760
  c->r[31]=c->r[31]+0x00003F00u; // 801C3764
  c->r[25]=0u+0x00000001u; // 801C3768
  if (crb(c,0)) { goto L_801C3784; } // 801C376C
  c->r[3]=0u+0x001E0000u; // 801C3770
  c->r[6]=c->r[27]|c->r[27]; // 801C3774
  c->r[4]=c->r[31]+0x00000058u; // 801C3778
  c->r[3]=c->r[3]+0x00000003u; // 801C377C
  c->lr=0x801C3784u; f_801ACB50(c); // 801C3780
L_801C3784:;
  c->r[30]=0u+0x803D0000u; // 801C3784
  c->r[24]=0u+0x00000000u; // 801C3788
  c->r[30]=c->r[30]+0xFFFFADD8u; // 801C378C
L_801C3790:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C3790
  cmps(c,0,(int32_t)c->r[0],0); // 801C3794
  if (crb(c,2)) { goto L_801C37B4; } // 801C3798
  c->r[3]=c->r[26]|c->r[26]; // 801C379C
  c->r[4]=c->r[30]+0x00000001u; // 801C37A0
  c->r[5]=0u+0x00000006u; // 801C37A4
  c->lr=0x801C37ACu; f_8018C170(c); // 801C37A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C37AC
  if (crb(c,2)) { goto L_801C37C4; } // 801C37B0
L_801C37B4:;
  c->r[24]=c->r[24]+0x00000001u; // 801C37B4
  c->r[30]=c->r[30]+0x00000034u; // 801C37B8
  cmps(c,0,(int32_t)c->r[24],16); // 801C37BC
  if (crb(c,0)) { IRQCHK(c); goto L_801C3790; } // 801C37C0
L_801C37C4:;
  cmps(c,0,(int32_t)c->r[24],16); // 801C37C4
  if (!crb(c,2)) { goto L_801C37E8; } // 801C37C8
  c->r[3]=c->r[26]|c->r[26]; // 801C37CC
  c->r[4]=c->r[29]|c->r[29]; // 801C37D0
  c->r[5]=c->r[27]|c->r[27]; // 801C37D4
  c->r[6]=0u+0x00000003u; // 801C37D8
  c->r[7]=0u+0x00000000u; // 801C37DC
  c->lr=0x801C37E4u; f_801C58A0(c); // 801C37E0
  goto L_801C396C; // 801C37E4
L_801C37E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)52); // 801C37E8
  c->r[3]=0u+0x803D0000u; // 801C37EC
  cmpu(c,0,c->r[28],0x00000013u); // 801C37F0
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C37F4
  c->r[30]=c->r[3]+c->r[0]; // 801C37F8
  if (!crb(c,2)) { goto L_801C3864; } // 801C37FC
  c->r[0]=R16(c->r[30]+0x00000014u); // 801C3800
  cmps(c,0,(int32_t)c->r[0],0); // 801C3804
  if (!crb(c,2)) { goto L_801C382C; } // 801C3808
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C380C
  cmpu(c,0,c->r[0],0x00000002u); // 801C3810
  if (crb(c,0)) { goto L_801C3828; } // 801C3814
  c->r[3]=0u+0x001E0000u; // 801C3818
  c->r[4]=c->r[31]+0x0000008Cu; // 801C381C
  c->r[3]=c->r[3]+0x00000001u; // 801C3820
  c->lr=0x801C3828u; f_801ACB20(c); // 801C3824
L_801C3828:;
  c->r[25]=0u+0x00000000u; // 801C3828
L_801C382C:;
  c->r[5]=R8(c->r[30]+0x00000010u); // 801C382C
  cmpu(c,0,c->r[5],0x00000002u); // 801C3830
  if (crb(c,2)) { goto L_801C3890; } // 801C3834
  c->r[3]=0u+0x803D0000u; // 801C3838
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C383C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3840
  cmpu(c,0,c->r[0],0x00000002u); // 801C3844
  if (crb(c,0)) { goto L_801C385C; } // 801C3848
  c->r[3]=0u+0x001E0000u; // 801C384C
  c->r[4]=c->r[31]+0x000000C0u; // 801C3850
  c->r[3]=c->r[3]+0x00000001u; // 801C3854
  c->lr=0x801C385Cu; f_801ACB38(c); // 801C3858
L_801C385C:;
  c->r[25]=0u+0x00000000u; // 801C385C
  goto L_801C3890; // 801C3860
L_801C3864:;
  c->r[5]=R8(c->r[30]+0x00000010u); // 801C3864
  cmps(c,0,(int32_t)c->r[5],0); // 801C3868
  if (crb(c,2)) { goto L_801C3890; } // 801C386C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3870
  cmpu(c,0,c->r[0],0x00000002u); // 801C3874
  if (crb(c,0)) { goto L_801C388C; } // 801C3878
  c->r[3]=0u+0x001E0000u; // 801C387C
  c->r[4]=c->r[31]+0x000000F0u; // 801C3880
  c->r[3]=c->r[3]+0x00000001u; // 801C3884
  c->lr=0x801C388Cu; f_801ACB38(c); // 801C3888
L_801C388C:;
  c->r[25]=0u+0x00000000u; // 801C388C
L_801C3890:;
  cmps(c,0,(int32_t)c->r[25],0); // 801C3890
  if (!crb(c,2)) { goto L_801C38B4; } // 801C3894
  c->r[3]=c->r[26]|c->r[26]; // 801C3898
  c->r[4]=c->r[29]|c->r[29]; // 801C389C
  c->r[5]=c->r[27]|c->r[27]; // 801C38A0
  c->r[6]=0u+0x00000004u; // 801C38A4
  c->r[7]=0u+0x00000000u; // 801C38A8
  c->lr=0x801C38B0u; f_801C58A0(c); // 801C38AC
  goto L_801C396C; // 801C38B0
L_801C38B4:;
  cmpu(c,0,c->r[28],0x00000011u); // 801C38B4
  if (!crb(c,2)) { goto L_801C3910; } // 801C38B8
  c->r[0]=0u+0x00000000u; // 801C38BC
  c->r[8]=0u+0x801C0000u; // 801C38C0
  W8(c->r[30]+0x00000011u,c->r[0]); // 801C38C4
  c->r[7]=0u+0x00000100u; // 801C38C8
  c->r[0]=0u+0x00000006u; // 801C38CC
  c->r[9]=c->r[30]|c->r[30]; // 801C38D0
  W16(c->r[30]+0x00000014u,c->r[27]); // 801C38D4
  c->r[3]=c->r[30]+0x00000001u; // 801C38D8
  c->r[8]=c->r[8]+0x000035FCu; // 801C38DC
  c->r[4]=0u+0x00000011u; // 801C38E0
  W8(c->r[30]+0x00000012u,c->r[29]); // 801C38E4
  c->r[5]=0u+0x00000000u; // 801C38E8
  c->r[6]=0u+0x00000006u; // 801C38EC
  W16(c->r[30]+0x0000001Au,c->r[7]); // 801C38F0
  W8(c->r[30]+0x00000010u,c->r[0]); // 801C38F4
  c->r[0]=R16(c->r[30]+0x00000008u); // 801C38F8
  c->r[0]=rotl(c->r[0],17)&0x00000001u; // 801C38FC
  c->r[7]=0u-c->r[0]; // 801C3900
  c->r[7]=c->r[7]+0x00000002u; // 801C3904
  c->lr=0x801C390Cu; f_801BB38C(c); // 801C3908
  goto L_801C396C; // 801C390C
L_801C3910:;
  c->r[0]=0u+0x00000003u; // 801C3910
  c->r[3]=c->r[26]|c->r[26]; // 801C3914
  W8(c->r[30]+0x00000010u,c->r[0]); // 801C3918
  c->r[4]=c->r[29]|c->r[29]; // 801C391C
  c->r[5]=c->r[27]|c->r[27]; // 801C3920
  c->r[6]=0u+0x00000000u; // 801C3924
  W16(c->r[30]+0x00000016u,c->r[27]); // 801C3928
  c->r[7]=0u+0x00000000u; // 801C392C
  c->lr=0x801C3934u; f_801C58A0(c); // 801C3930
  c->r[26]=0u+0x803D0000u; // 801C3934
  c->r[3]=c->r[27]|c->r[27]; // 801C3938
  c->r[26]=c->r[26]+0xFFFFADD8u; // 801C393C
  c->r[4]=c->r[26]+0x00000344u; // 801C3940
  c->lr=0x801C3948u; f_801C5A30(c); // 801C3944
  c->r[0]=R8(c->r[26]+0x00000401u); // 801C3948
  cmpu(c,0,c->r[0],0x00000004u); // 801C394C
  if (crb(c,0)) { goto L_801C396C; } // 801C3950
  c->r[3]=0u+0x001E0000u; // 801C3954
  c->r[5]=c->r[28]|c->r[28]; // 801C3958
  c->r[6]=c->r[27]|c->r[27]; // 801C395C
  c->r[4]=c->r[31]+0x00000120u; // 801C3960
  c->r[3]=c->r[3]+0x00000003u; // 801C3964
  c->lr=0x801C396Cu; f_801ACB50(c); // 801C3968
L_801C396C:;
  c->r[11]=c->r[1]+0x00000030u; // 801C396C
  c->lr=0x801C3974u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3970
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C3974
  c->lr=c->r[0]; // 801C3978
  c->r[1]=c->r[1]+0x00000030u; // 801C397C
  return; // 801C3980
}

// hidh_proc_repage_timeout
void f_801C3984(Ctx* __restrict c) {
  trace_call(0x801C3984u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3984
  c->r[0]=c->lr; // 801C3988
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C398C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3990
  c->r[31]=c->r[3]|c->r[3]; // 801C3994
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3998
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C399C
  c->r[29]=0u+0x803D0000u; // 801C39A0
  c->r[29]=c->r[29]+0xFFFFADD8u; // 801C39A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C39A8
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C39AC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801C39B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C39B4
  c->r[28]=c->r[29]+c->r[0]; // 801C39B8
  c->r[0]=R8(c->r[28]+0x00000010u); // 801C39BC
  cmps(c,0,(int32_t)c->r[0],0); // 801C39C0
  if (!crb(c,2)) { goto L_801C3A68; } // 801C39C4
  c->r[5]=0u+0x00000000u; // 801C39C8
  c->r[0]=0u+0x00000100u; // 801C39CC
  W16(c->r[28]+0x00000014u,c->r[5]); // 801C39D0
  c->r[30]=0u+0x00000001u; // 801C39D4
  c->r[4]=c->r[28]+0x00000001u; // 801C39D8
  c->r[3]=0u+0x00000011u; // 801C39DC
  W16(c->r[28]+0x00000016u,c->r[5]); // 801C39E0
  W16(c->r[28]+0x0000001Au,c->r[0]); // 801C39E4
  W8(c->r[28]+0x00000011u,c->r[30]); // 801C39E8
  c->lr=0x801C39F0u; f_801C566C(c); // 801C39EC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801C39F0
  W16(c->r[28]+0x00000014u,c->r[3]); // 801C39F4
  if (!crb(c,2)) { goto L_801C3A64; } // 801C39F8
  c->r[0]=R8(c->r[29]+0x00000401u); // 801C39FC
  cmpu(c,0,c->r[0],0x00000002u); // 801C3A00
  if (crb(c,0)) { goto L_801C3A1C; } // 801C3A04
  c->r[3]=0u+0x001E0000u; // 801C3A08
  c->r[4]=0u+0x80330000u; // 801C3A0C
  c->r[3]=c->r[3]+0x00000001u; // 801C3A10
  c->r[4]=c->r[4]+0x00004064u; // 801C3A14
  c->lr=0x801C3A1Cu; f_801ACB20(c); // 801C3A18
L_801C3A1C:;
  c->r[5]=0u+0x803D0000u; // 801C3A1C
  c->r[3]=0u+0x4EC50000u; // 801C3A20
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C3A24
  c->r[4]=0u+0x00000001u; // 801C3A28
  c->r[0]=c->r[28]-c->r[5]; // 801C3A2C
  c->r[7]=c->r[3]+0xFFFFEC4Fu; // 801C3A30
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[0])>>32); // 801C3A34
  c->r[12]=R32(c->r[5]+0x00000340u); // 801C3A38
  c->r[5]=0u+0x0000000Eu; // 801C3A3C
  c->r[6]=0u+0x00000000u; // 801C3A40
  c->r[0]=sraw(c,c->r[0],4); // 801C3A44
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C3A48
  c->r[0]=c->r[0]+c->r[3]; // 801C3A4C
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[0])>>32); // 801C3A50
  c->r[3]=rotl(c->r[0],28)&0x000000FFu; // 801C3A54
  c->ctr=c->r[12]; // 801C3A58
  if (true) { c->lr=0x801C3A60u; dispatch(c,c->ctr); } // 801C3A5C
  goto L_801C3A68; // 801C3A60
L_801C3A64:;
  W8(c->r[28]+0x00000010u,c->r[30]); // 801C3A64
L_801C3A68:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C3A68
  c->r[7]=0u+0x803D0000u; // 801C3A6C
  c->r[7]=c->r[7]+0xFFFFADD8u; // 801C3A70
  c->r[4]=0u+0x00000002u; // 801C3A74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C3A78
  c->r[6]=0u+0x00000000u; // 801C3A7C
  c->r[5]=c->r[7]+c->r[0]; // 801C3A80
  c->r[3]=R8(c->r[5]+0x0000000Cu); // 801C3A84
  c->r[0]=c->r[3]+0x00000001u; // 801C3A88
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801C3A8C
  c->r[3]=R32(c->r[31]+0x00000010u); // 801C3A90
  c->r[12]=R32(c->r[7]+0x00000340u); // 801C3A94
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C3A98
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801C3A9C
  c->r[5]=c->r[7]+c->r[0]; // 801C3AA0
  c->r[5]=R8(c->r[5]+0x0000000Cu); // 801C3AA4
  c->ctr=c->r[12]; // 801C3AA8
  if (true) { c->lr=0x801C3AB0u; dispatch(c,c->ctr); } // 801C3AAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3AB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3AB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C3AB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C3ABC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C3AC0
  c->lr=c->r[0]; // 801C3AC4
  c->r[1]=c->r[1]+0x00000020u; // 801C3AC8
  return; // 801C3ACC
}

// hidh_sec_check_complete_orig
void f_801C3AD0(Ctx* __restrict c) {
  trace_call(0x801C3AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3AD0
  c->r[0]=c->lr; // 801C3AD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3AD8
  c->r[11]=c->r[1]+0x00000020u; // 801C3ADC
  c->lr=0x801C3AE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3AE0
  c->r[6]=0u+0x803D0000u; // 801C3AE4
  c->r[3]=0u+0x4EC50000u; // 801C3AE8
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C3AEC
  c->r[31]=0u+0x80330000u; // 801C3AF0
  c->r[0]=c->r[4]-c->r[6]; // 801C3AF4
  c->r[3]=c->r[3]+0xFFFFEC4Fu; // 801C3AF8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801C3AFC
  cmps(c,0,(int32_t)c->r[5],0); // 801C3B00
  c->r[28]=c->r[4]|c->r[4]; // 801C3B04
  c->r[29]=c->r[5]|c->r[5]; // 801C3B08
  c->r[31]=c->r[31]+0x00003F00u; // 801C3B0C
  c->r[0]=sraw(c,c->r[0],4); // 801C3B10
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C3B14
  c->r[0]=c->r[0]+c->r[3]; // 801C3B18
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801C3B1C
  if (!crb(c,2)) { goto L_801C3C38; } // 801C3B20
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C3B24
  cmpu(c,0,c->r[0],0x00000006u); // 801C3B28
  if (!crb(c,2)) { goto L_801C3C38; } // 801C3B2C
  c->r[0]=R8(c->r[6]+0x00000401u); // 801C3B30
  cmpu(c,0,c->r[0],0x00000004u); // 801C3B34
  if (crb(c,0)) { goto L_801C3B4C; } // 801C3B38
  c->r[3]=0u+0x001E0000u; // 801C3B3C
  c->r[4]=c->r[31]+0x00000180u; // 801C3B40
  c->r[3]=c->r[3]+0x00000003u; // 801C3B44
  c->lr=0x801C3B4Cu; f_801ACB20(c); // 801C3B48
L_801C3B4C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)52); // 801C3B4C
  c->r[27]=0u+0x803D0000u; // 801C3B50
  c->r[3]=0u+0x00000000u; // 801C3B54
  c->r[27]=c->r[27]+0xFFFFADD8u; // 801C3B58
  W16(c->r[28]+0x0000001Au,c->r[3]); // 801C3B5C
  c->r[26]=c->r[27]+c->r[0]; // 801C3B60
  c->r[4]=c->r[26]+0x00000001u; // 801C3B64
  c->r[3]=0u+0x00000013u; // 801C3B68
  c->lr=0x801C3B70u; f_801C566C(c); // 801C3B6C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801C3B70
  W16(c->r[28]+0x00000016u,c->r[3]); // 801C3B74
  if (!crb(c,2)) { goto L_801C3C30; } // 801C3B78
  c->r[0]=R8(c->r[27]+0x00000401u); // 801C3B7C
  cmpu(c,0,c->r[0],0x00000002u); // 801C3B80
  if (crb(c,0)) { goto L_801C3B98; } // 801C3B84
  c->r[3]=0u+0x001E0000u; // 801C3B88
  c->r[4]=c->r[31]+0x000001A0u; // 801C3B8C
  c->r[3]=c->r[3]+0x00000001u; // 801C3B90
  c->lr=0x801C3B98u; f_801ACB20(c); // 801C3B94
L_801C3B98:;
  c->r[3]=0u+0x803D0000u; // 801C3B98
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C3B9C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3BA0
  cmpu(c,0,c->r[0],0x00000004u); // 801C3BA4
  if (crb(c,0)) { goto L_801C3BBC; } // 801C3BA8
  c->r[3]=0u+0x001E0000u; // 801C3BAC
  c->r[4]=c->r[31]+0x00000044u; // 801C3BB0
  c->r[3]=c->r[3]+0x00000003u; // 801C3BB4
  c->lr=0x801C3BBCu; f_801ACB20(c); // 801C3BB8
L_801C3BBC:;
  c->r[0]=R16(c->r[26]+0x00000014u); // 801C3BBC
  cmps(c,0,(int32_t)c->r[0],0); // 801C3BC0
  if (!crb(c,2)) { goto L_801C3BD4; } // 801C3BC4
  c->r[0]=R16(c->r[26]+0x00000016u); // 801C3BC8
  cmps(c,0,(int32_t)c->r[0],0); // 801C3BCC
  if (crb(c,2)) { goto L_801C3C00; } // 801C3BD0
L_801C3BD4:;
  c->r[0]=0u+0x00000005u; // 801C3BD4
  W8(c->r[26]+0x00000010u,c->r[0]); // 801C3BD8
  c->r[3]=R16(c->r[26]+0x00000016u); // 801C3BDC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3BE0
  if (crb(c,2)) { goto L_801C3BEC; } // 801C3BE4
  c->lr=0x801C3BECu; f_801C5BB8(c); // 801C3BE8
L_801C3BEC:;
  c->r[3]=R16(c->r[26]+0x00000014u); // 801C3BEC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3BF0
  if (crb(c,2)) { goto L_801C3C08; } // 801C3BF4
  c->lr=0x801C3BFCu; f_801C5BB8(c); // 801C3BF8
  goto L_801C3C08; // 801C3BFC
L_801C3C00:;
  c->r[0]=0u+0x00000000u; // 801C3C00
  W8(c->r[26]+0x00000010u,c->r[0]); // 801C3C04
L_801C3C08:;
  c->r[5]=0u+0x803D0000u; // 801C3C08
  c->r[3]=c->r[30]|c->r[30]; // 801C3C0C
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C3C10
  c->r[4]=0u+0x00000001u; // 801C3C14
  c->r[12]=R32(c->r[5]+0x00000340u); // 801C3C18
  c->r[5]=0u+0x00000200u; // 801C3C1C
  c->r[6]=0u+0x00000000u; // 801C3C20
  c->ctr=c->r[12]; // 801C3C24
  if (true) { c->lr=0x801C3C2Cu; dispatch(c,c->ctr); } // 801C3C28
  goto L_801C3CCC; // 801C3C2C
L_801C3C30:;
  c->r[0]=0u+0x00000002u; // 801C3C30
  W8(c->r[28]+0x00000010u,c->r[0]); // 801C3C34
L_801C3C38:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C3C38
  if (crb(c,2)) { goto L_801C3CCC; } // 801C3C3C
  c->r[0]=R8(c->r[28]+0x00000010u); // 801C3C40
  cmpu(c,0,c->r[0],0x00000006u); // 801C3C44
  if (!crb(c,2)) { goto L_801C3CCC; } // 801C3C48
  c->r[0]=0u+0x0000000Fu; // 801C3C4C
  c->r[3]=0u+0x803D0000u; // 801C3C50
  W16(c->r[28]+0x0000001Au,c->r[0]); // 801C3C54
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C3C58
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)52); // 801C3C5C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3C60
  cmpu(c,0,c->r[0],0x00000004u); // 801C3C64
  c->r[27]=c->r[3]+c->r[4]; // 801C3C68
  if (crb(c,0)) { goto L_801C3C80; } // 801C3C6C
  c->r[3]=0u+0x001E0000u; // 801C3C70
  c->r[4]=c->r[31]+0x00000044u; // 801C3C74
  c->r[3]=c->r[3]+0x00000003u; // 801C3C78
  c->lr=0x801C3C80u; f_801ACB20(c); // 801C3C7C
L_801C3C80:;
  c->r[0]=R16(c->r[27]+0x00000014u); // 801C3C80
  cmps(c,0,(int32_t)c->r[0],0); // 801C3C84
  if (!crb(c,2)) { goto L_801C3C98; } // 801C3C88
  c->r[0]=R16(c->r[27]+0x00000016u); // 801C3C8C
  cmps(c,0,(int32_t)c->r[0],0); // 801C3C90
  if (crb(c,2)) { goto L_801C3CC4; } // 801C3C94
L_801C3C98:;
  c->r[0]=0u+0x00000005u; // 801C3C98
  W8(c->r[27]+0x00000010u,c->r[0]); // 801C3C9C
  c->r[3]=R16(c->r[27]+0x00000016u); // 801C3CA0
  cmps(c,0,(int32_t)c->r[3],0); // 801C3CA4
  if (crb(c,2)) { goto L_801C3CB0; } // 801C3CA8
  c->lr=0x801C3CB0u; f_801C5BB8(c); // 801C3CAC
L_801C3CB0:;
  c->r[3]=R16(c->r[27]+0x00000014u); // 801C3CB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C3CB4
  if (crb(c,2)) { goto L_801C3CCC; } // 801C3CB8
  c->lr=0x801C3CC0u; f_801C5BB8(c); // 801C3CBC
  goto L_801C3CCC; // 801C3CC0
L_801C3CC4:;
  c->r[0]=0u+0x00000000u; // 801C3CC4
  W8(c->r[27]+0x00000010u,c->r[0]); // 801C3CC8
L_801C3CCC:;
  c->r[11]=c->r[1]+0x00000020u; // 801C3CCC
  c->lr=0x801C3CD4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3CD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3CD4
  c->lr=c->r[0]; // 801C3CD8
  c->r[1]=c->r[1]+0x00000020u; // 801C3CDC
  return; // 801C3CE0
}

// hidh_l2cif_connect_cfm
void f_801C3CE4(Ctx* __restrict c) {
  trace_call(0x801C3CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3CE4
  c->r[0]=c->lr; // 801C3CE8
  c->r[6]=0u+0x803D0000u; // 801C3CEC
  c->r[5]=0u+0x00000000u; // 801C3CF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3CF4
  c->r[0]=0u+0x00000004u; // 801C3CF8
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C3CFC
  c->r[9]=0u+0x00000000u; // 801C3D00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3D04
  c->r[31]=0u+0x80330000u; // 801C3D08
  c->r[31]=c->r[31]+0x00003F00u; // 801C3D0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3D10
  c->r[30]=0u+0x00000000u; // 801C3D14
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C3D18
  c->r[29]=c->r[4]|c->r[4]; // 801C3D1C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C3D20
  c->r[28]=c->r[3]|c->r[3]; // 801C3D24
  c->ctr=c->r[0]; // 801C3D28
L_801C3D2C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C3D2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C3D30
  c->r[7]=c->r[6]+c->r[0]; // 801C3D34
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C3D38
  cmps(c,0,(int32_t)c->r[0],0); // 801C3D3C
  if (crb(c,2)) { goto L_801C3D68; } // 801C3D40
  c->r[0]=R8(c->r[7]+0x00000010u); // 801C3D44
  cmps(c,0,(int32_t)c->r[0],0); // 801C3D48
  if (crb(c,2)) { goto L_801C3D68; } // 801C3D4C
  c->r[0]=R16(c->r[7]+0x00000014u); // 801C3D50
  cmpu(c,0,c->r[3],c->r[0]); // 801C3D54
  if (crb(c,2)) { goto L_801C3E30; } // 801C3D58
  c->r[0]=R16(c->r[7]+0x00000016u); // 801C3D5C
  cmpu(c,0,c->r[3],c->r[0]); // 801C3D60
  if (crb(c,2)) { goto L_801C3E30; } // 801C3D64
L_801C3D68:;
  c->r[30]=c->r[30]+0x00000001u; // 801C3D68
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C3D6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C3D70
  c->r[7]=c->r[6]+c->r[0]; // 801C3D74
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C3D78
  cmps(c,0,(int32_t)c->r[0],0); // 801C3D7C
  if (crb(c,2)) { goto L_801C3DA8; } // 801C3D80
  c->r[0]=R8(c->r[7]+0x00000010u); // 801C3D84
  cmps(c,0,(int32_t)c->r[0],0); // 801C3D88
  if (crb(c,2)) { goto L_801C3DA8; } // 801C3D8C
  c->r[0]=R16(c->r[7]+0x00000014u); // 801C3D90
  cmpu(c,0,c->r[3],c->r[0]); // 801C3D94
  if (crb(c,2)) { goto L_801C3E30; } // 801C3D98
  c->r[0]=R16(c->r[7]+0x00000016u); // 801C3D9C
  cmpu(c,0,c->r[3],c->r[0]); // 801C3DA0
  if (crb(c,2)) { goto L_801C3E30; } // 801C3DA4
L_801C3DA8:;
  c->r[30]=c->r[30]+0x00000001u; // 801C3DA8
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C3DAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C3DB0
  c->r[7]=c->r[6]+c->r[0]; // 801C3DB4
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C3DB8
  cmps(c,0,(int32_t)c->r[0],0); // 801C3DBC
  if (crb(c,2)) { goto L_801C3DE8; } // 801C3DC0
  c->r[0]=R8(c->r[7]+0x00000010u); // 801C3DC4
  cmps(c,0,(int32_t)c->r[0],0); // 801C3DC8
  if (crb(c,2)) { goto L_801C3DE8; } // 801C3DCC
  c->r[0]=R16(c->r[7]+0x00000014u); // 801C3DD0
  cmpu(c,0,c->r[3],c->r[0]); // 801C3DD4
  if (crb(c,2)) { goto L_801C3E30; } // 801C3DD8
  c->r[0]=R16(c->r[7]+0x00000016u); // 801C3DDC
  cmpu(c,0,c->r[3],c->r[0]); // 801C3DE0
  if (crb(c,2)) { goto L_801C3E30; } // 801C3DE4
L_801C3DE8:;
  c->r[30]=c->r[30]+0x00000001u; // 801C3DE8
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C3DEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C3DF0
  c->r[7]=c->r[6]+c->r[0]; // 801C3DF4
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C3DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801C3DFC
  if (crb(c,2)) { goto L_801C3E28; } // 801C3E00
  c->r[0]=R8(c->r[7]+0x00000010u); // 801C3E04
  cmps(c,0,(int32_t)c->r[0],0); // 801C3E08
  if (crb(c,2)) { goto L_801C3E28; } // 801C3E0C
  c->r[0]=R16(c->r[7]+0x00000014u); // 801C3E10
  cmpu(c,0,c->r[3],c->r[0]); // 801C3E14
  if (crb(c,2)) { goto L_801C3E30; } // 801C3E18
  c->r[0]=R16(c->r[7]+0x00000016u); // 801C3E1C
  cmpu(c,0,c->r[3],c->r[0]); // 801C3E20
  if (crb(c,2)) { goto L_801C3E30; } // 801C3E24
L_801C3E28:;
  c->r[30]=c->r[30]+0x00000001u; // 801C3E28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C3D2C; } // 801C3E2C
L_801C3E30:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C3E30
  cmpu(c,0,c->r[0],0x00000010u); // 801C3E34
  if (crb(c,2)) { goto L_801C3E50; } // 801C3E38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C3E3C
  c->r[5]=0u+0x803D0000u; // 801C3E40
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C3E44
  c->r[9]=c->r[5]+c->r[0]; // 801C3E48
  c->r[5]=c->r[9]+0x00000010u; // 801C3E4C
L_801C3E50:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C3E50
  if (crb(c,2)) { goto L_801C3E94; } // 801C3E54
  c->r[0]=R8(c->r[5]+0x00000001u); // 801C3E58
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C3E5C
  if (crb(c,2)) { goto L_801C3E94; } // 801C3E60
  c->r[6]=R16(c->r[5]+0x00000004u); // 801C3E64
  cmpu(c,0,c->r[3],c->r[6]); // 801C3E68
  if (!crb(c,2)) { goto L_801C3E7C; } // 801C3E6C
  c->r[0]=R8(c->r[5]+0x00000000u); // 801C3E70
  cmpu(c,0,c->r[0],0x00000001u); // 801C3E74
  if (!crb(c,2)) { goto L_801C3E94; } // 801C3E78
L_801C3E7C:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 801C3E7C
  cmpu(c,0,c->r[3],c->r[0]); // 801C3E80
  if (!crb(c,2)) { goto L_801C3EC0; } // 801C3E84
  c->r[0]=R8(c->r[5]+0x00000000u); // 801C3E88
  cmpu(c,0,c->r[0],0x00000002u); // 801C3E8C
  if (crb(c,2)) { goto L_801C3EC0; } // 801C3E90
L_801C3E94:;
  c->r[3]=0u+0x803D0000u; // 801C3E94
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C3E98
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3E9C
  cmpu(c,0,c->r[0],0x00000002u); // 801C3EA0
  if (crb(c,0)) { goto L_801C400C; } // 801C3EA4
  c->r[3]=0u+0x001E0000u; // 801C3EA8
  c->r[5]=c->r[28]|c->r[28]; // 801C3EAC
  c->r[3]=c->r[3]+0x00000001u; // 801C3EB0
  c->r[4]=c->r[31]+0x000001BCu; // 801C3EB4
  c->lr=0x801C3EBCu; f_801ACB38(c); // 801C3EB8
  goto L_801C400C; // 801C3EBC
L_801C3EC0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C3EC0
  if (crb(c,2)) { goto L_801C3F88; } // 801C3EC4
  cmpu(c,0,c->r[3],c->r[6]); // 801C3EC8
  if (!crb(c,2)) { goto L_801C3EDC; } // 801C3ECC
  c->r[0]=0u+0x00000000u; // 801C3ED0
  W16(c->r[5]+0x00000004u,c->r[0]); // 801C3ED4
  goto L_801C3EE4; // 801C3ED8
L_801C3EDC:;
  c->r[0]=0u+0x00000000u; // 801C3EDC
  W16(c->r[5]+0x00000006u,c->r[0]); // 801C3EE0
L_801C3EE4:;
  c->r[3]=0u+0x803D0000u; // 801C3EE4
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801C3EE8
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C3EEC
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C3EF0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 801C3EF4
  cmpu(c,0,c->r[0],0x00000004u); // 801C3EF8
  c->r[28]=c->r[3]+c->r[4]; // 801C3EFC
  if (crb(c,0)) { goto L_801C3F14; } // 801C3F00
  c->r[3]=0u+0x001E0000u; // 801C3F04
  c->r[4]=c->r[31]+0x00000044u; // 801C3F08
  c->r[3]=c->r[3]+0x00000003u; // 801C3F0C
  c->lr=0x801C3F14u; f_801ACB20(c); // 801C3F10
L_801C3F14:;
  c->r[0]=R16(c->r[28]+0x00000014u); // 801C3F14
  cmps(c,0,(int32_t)c->r[0],0); // 801C3F18
  if (!crb(c,2)) { goto L_801C3F2C; } // 801C3F1C
  c->r[0]=R16(c->r[28]+0x00000016u); // 801C3F20
  cmps(c,0,(int32_t)c->r[0],0); // 801C3F24
  if (crb(c,2)) { goto L_801C3F58; } // 801C3F28
L_801C3F2C:;
  c->r[0]=0u+0x00000005u; // 801C3F2C
  W8(c->r[28]+0x00000010u,c->r[0]); // 801C3F30
  c->r[3]=R16(c->r[28]+0x00000016u); // 801C3F34
  cmps(c,0,(int32_t)c->r[3],0); // 801C3F38
  if (crb(c,2)) { goto L_801C3F44; } // 801C3F3C
  c->lr=0x801C3F44u; f_801C5BB8(c); // 801C3F40
L_801C3F44:;
  c->r[3]=R16(c->r[28]+0x00000014u); // 801C3F44
  cmps(c,0,(int32_t)c->r[3],0); // 801C3F48
  if (crb(c,2)) { goto L_801C3F60; } // 801C3F4C
  c->lr=0x801C3F54u; f_801C5BB8(c); // 801C3F50
  goto L_801C3F60; // 801C3F54
L_801C3F58:;
  c->r[0]=0u+0x00000000u; // 801C3F58
  W8(c->r[28]+0x00000010u,c->r[0]); // 801C3F5C
L_801C3F60:;
  c->r[4]=0u+0x803D0000u; // 801C3F60
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801C3F64
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C3F68
  c->r[5]=c->r[29]|0x00000100u; // 801C3F6C
  c->r[12]=R32(c->r[4]+0x00000340u); // 801C3F70
  c->r[4]=0u+0x00000001u; // 801C3F74
  c->r[6]=0u+0x00000000u; // 801C3F78
  c->ctr=c->r[12]; // 801C3F7C
  if (true) { c->lr=0x801C3F84u; dispatch(c,c->ctr); } // 801C3F80
  goto L_801C400C; // 801C3F84
L_801C3F88:;
  cmpu(c,0,c->r[3],c->r[6]); // 801C3F88
  if (!crb(c,2)) { goto L_801C3FD0; } // 801C3F8C
  c->r[0]=0u+0x00000006u; // 801C3F90
  c->r[8]=0u+0x801C0000u; // 801C3F94
  W8(c->r[5]+0x00000000u,c->r[0]); // 801C3F98
  c->r[0]=0u+0x00000100u; // 801C3F9C
  c->r[3]=c->r[9]+0x00000001u; // 801C3FA0
  c->r[8]=c->r[8]+0x00003AD0u; // 801C3FA4
  W16(c->r[5]+0x0000000Au,c->r[0]); // 801C3FA8
  c->r[4]=0u+0x00000011u; // 801C3FAC
  c->r[5]=0u+0x00000001u; // 801C3FB0
  c->r[6]=0u+0x00000006u; // 801C3FB4
  c->r[0]=R16(c->r[9]+0x00000008u); // 801C3FB8
  c->r[0]=rotl(c->r[0],17)&0x00000001u; // 801C3FBC
  c->r[7]=0u-c->r[0]; // 801C3FC0
  c->r[7]=c->r[7]+0x00000002u; // 801C3FC4
  c->lr=0x801C3FCCu; f_801BB38C(c); // 801C3FC8
  goto L_801C3FD8; // 801C3FCC
L_801C3FD0:;
  c->r[0]=0u+0x00000003u; // 801C3FD0
  W8(c->r[5]+0x00000000u,c->r[0]); // 801C3FD4
L_801C3FD8:;
  c->r[29]=0u+0x803D0000u; // 801C3FD8
  c->r[3]=c->r[28]|c->r[28]; // 801C3FDC
  c->r[29]=c->r[29]+0xFFFFADD8u; // 801C3FE0
  c->r[4]=c->r[29]+0x00000344u; // 801C3FE4
  c->lr=0x801C3FECu; f_801C5A30(c); // 801C3FE8
  c->r[0]=R8(c->r[29]+0x00000401u); // 801C3FEC
  cmpu(c,0,c->r[0],0x00000004u); // 801C3FF0
  if (crb(c,0)) { goto L_801C400C; } // 801C3FF4
  c->r[3]=0u+0x001E0000u; // 801C3FF8
  c->r[5]=c->r[28]|c->r[28]; // 801C3FFC
  c->r[3]=c->r[3]+0x00000003u; // 801C4000
  c->r[4]=c->r[31]+0x000001E8u; // 801C4004
  c->lr=0x801C400Cu; f_801ACB38(c); // 801C4008
L_801C400C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C400C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4010
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4014
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C4018
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C401C
  c->lr=c->r[0]; // 801C4020
  c->r[1]=c->r[1]+0x00000020u; // 801C4024
  return; // 801C4028
}

// hidh_l2cif_config_ind
void f_801C402C(Ctx* __restrict c) {
  trace_call(0x801C402Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C402C
  c->r[0]=c->lr; // 801C4030
  c->r[5]=0u+0x803D0000u; // 801C4034
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4038
  c->r[0]=0u+0x00000004u; // 801C403C
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C4040
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4044
  c->r[31]=0u+0x00000000u; // 801C4048
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C404C
  c->r[30]=0u+0x00000000u; // 801C4050
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C4054
  c->r[29]=c->r[4]|c->r[4]; // 801C4058
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C405C
  c->r[28]=c->r[3]|c->r[3]; // 801C4060
  c->ctr=c->r[0]; // 801C4064
L_801C4068:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4068
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C406C
  c->r[4]=c->r[5]+c->r[0]; // 801C4070
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4074
  cmps(c,0,(int32_t)c->r[0],0); // 801C4078
  if (crb(c,2)) { goto L_801C40A4; } // 801C407C
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C4080
  cmps(c,0,(int32_t)c->r[0],0); // 801C4084
  if (crb(c,2)) { goto L_801C40A4; } // 801C4088
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C408C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4090
  if (crb(c,2)) { goto L_801C416C; } // 801C4094
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C4098
  cmpu(c,0,c->r[3],c->r[0]); // 801C409C
  if (crb(c,2)) { goto L_801C416C; } // 801C40A0
L_801C40A4:;
  c->r[31]=c->r[31]+0x00000001u; // 801C40A4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C40A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C40AC
  c->r[4]=c->r[5]+c->r[0]; // 801C40B0
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C40B4
  cmps(c,0,(int32_t)c->r[0],0); // 801C40B8
  if (crb(c,2)) { goto L_801C40E4; } // 801C40BC
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C40C0
  cmps(c,0,(int32_t)c->r[0],0); // 801C40C4
  if (crb(c,2)) { goto L_801C40E4; } // 801C40C8
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C40CC
  cmpu(c,0,c->r[3],c->r[0]); // 801C40D0
  if (crb(c,2)) { goto L_801C416C; } // 801C40D4
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C40D8
  cmpu(c,0,c->r[3],c->r[0]); // 801C40DC
  if (crb(c,2)) { goto L_801C416C; } // 801C40E0
L_801C40E4:;
  c->r[31]=c->r[31]+0x00000001u; // 801C40E4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C40E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C40EC
  c->r[4]=c->r[5]+c->r[0]; // 801C40F0
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C40F4
  cmps(c,0,(int32_t)c->r[0],0); // 801C40F8
  if (crb(c,2)) { goto L_801C4124; } // 801C40FC
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C4100
  cmps(c,0,(int32_t)c->r[0],0); // 801C4104
  if (crb(c,2)) { goto L_801C4124; } // 801C4108
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C410C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4110
  if (crb(c,2)) { goto L_801C416C; } // 801C4114
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C4118
  cmpu(c,0,c->r[3],c->r[0]); // 801C411C
  if (crb(c,2)) { goto L_801C416C; } // 801C4120
L_801C4124:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4124
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4128
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C412C
  c->r[4]=c->r[5]+c->r[0]; // 801C4130
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4134
  cmps(c,0,(int32_t)c->r[0],0); // 801C4138
  if (crb(c,2)) { goto L_801C4164; } // 801C413C
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C4140
  cmps(c,0,(int32_t)c->r[0],0); // 801C4144
  if (crb(c,2)) { goto L_801C4164; } // 801C4148
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C414C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4150
  if (crb(c,2)) { goto L_801C416C; } // 801C4154
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C4158
  cmpu(c,0,c->r[3],c->r[0]); // 801C415C
  if (crb(c,2)) { goto L_801C416C; } // 801C4160
L_801C4164:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4164
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4068; } // 801C4168
L_801C416C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C416C
  cmpu(c,0,c->r[0],0x00000010u); // 801C4170
  if (crb(c,2)) { goto L_801C418C; } // 801C4174
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4178
  c->r[3]=0u+0x803D0000u; // 801C417C
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4180
  c->r[30]=c->r[3]+c->r[0]; // 801C4184
  c->r[30]=c->r[30]+0x00000010u; // 801C4188
L_801C418C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C418C
  if (!crb(c,2)) { goto L_801C41C4; } // 801C4190
  c->r[3]=0u+0x803D0000u; // 801C4194
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4198
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C419C
  cmpu(c,0,c->r[0],0x00000002u); // 801C41A0
  if (crb(c,0)) { goto L_801C42B4; } // 801C41A4
  c->r[3]=0u+0x001E0000u; // 801C41A8
  c->r[4]=0u+0x80330000u; // 801C41AC
  c->r[5]=c->r[28]|c->r[28]; // 801C41B0
  c->r[3]=c->r[3]+0x00000001u; // 801C41B4
  c->r[4]=c->r[4]+0x0000411Cu; // 801C41B8
  c->lr=0x801C41C0u; f_801ACB38(c); // 801C41BC
  goto L_801C42B4; // 801C41C0
L_801C41C4:;
  c->r[3]=0u+0x803D0000u; // 801C41C4
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C41C8
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C41CC
  cmpu(c,0,c->r[0],0x00000004u); // 801C41D0
  if (crb(c,0)) { goto L_801C41F0; } // 801C41D4
  c->r[3]=0u+0x001E0000u; // 801C41D8
  c->r[4]=0u+0x80330000u; // 801C41DC
  c->r[5]=c->r[28]|c->r[28]; // 801C41E0
  c->r[3]=c->r[3]+0x00000003u; // 801C41E4
  c->r[4]=c->r[4]+0x00004148u; // 801C41E8
  c->lr=0x801C41F0u; f_801ACB38(c); // 801C41EC
L_801C41F0:;
  c->r[0]=R8(c->r[29]+0x00000002u); // 801C41F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C41F4
  if (crb(c,2)) { goto L_801C4208; } // 801C41F8
  c->r[0]=R16(c->r[29]+0x00000004u); // 801C41FC
  cmpu(c,0,c->r[0],0x00000280u); // 801C4200
  if (!crb(c,1)) { goto L_801C4214; } // 801C4204
L_801C4208:;
  c->r[0]=0u+0x00000280u; // 801C4208
  W16(c->r[30]+0x00000008u,c->r[0]); // 801C420C
  goto L_801C4218; // 801C4210
L_801C4214:;
  W16(c->r[30]+0x00000008u,c->r[0]); // 801C4214
L_801C4218:;
  c->r[0]=0u+0x00000000u; // 801C4218
  c->r[3]=c->r[28]|c->r[28]; // 801C421C
  W8(c->r[29]+0x00000020u,c->r[0]); // 801C4220
  c->r[4]=c->r[29]|c->r[29]; // 801C4224
  W8(c->r[29]+0x00000002u,c->r[0]); // 801C4228
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C422C
  c->lr=0x801C4234u; f_801C5AE8(c); // 801C4230
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C4234
  cmpu(c,0,c->r[28],c->r[0]); // 801C4238
  if (!crb(c,2)) { goto L_801C4250; } // 801C423C
  c->r[0]=R8(c->r[30]+0x00000001u); // 801C4240
  c->r[0]=c->r[0]|0x00000002u; // 801C4244
  W8(c->r[30]+0x00000001u,c->r[0]); // 801C4248
  goto L_801C425C; // 801C424C
L_801C4250:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801C4250
  c->r[0]=c->r[0]|0x00000008u; // 801C4254
  W8(c->r[30]+0x00000001u,c->r[0]); // 801C4258
L_801C425C:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801C425C
  c->r[0]=rotl(c->r[0],0)&0x0000001Eu; // 801C4260
  cmps(c,0,(int32_t)c->r[0],30); // 801C4264
  if (!crb(c,2)) { goto L_801C42B4; } // 801C4268
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C426C
  cmpu(c,0,c->r[0],0x00000003u); // 801C4270
  if (!crb(c,2)) { goto L_801C42B4; } // 801C4274
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801C4278
  c->r[4]=0u+0x00000004u; // 801C427C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C4280
  c->r[6]=0u+0x803D0000u; // 801C4284
  W8(c->r[30]+0x00000000u,c->r[4]); // 801C4288
  c->r[5]=0u+0x00000001u; // 801C428C
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C4290
  c->r[4]=c->r[6]+c->r[0]; // 801C4294
  W8(c->r[4]+0x0000000Au,c->r[5]); // 801C4298
  c->r[4]=0u+0x00000000u; // 801C429C
  c->r[5]=0u+0x00000000u; // 801C42A0
  c->r[12]=R32(c->r[6]+0x00000340u); // 801C42A4
  c->r[6]=0u+0x00000000u; // 801C42A8
  c->ctr=c->r[12]; // 801C42AC
  if (true) { c->lr=0x801C42B4u; dispatch(c,c->ctr); } // 801C42B0
L_801C42B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C42B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C42B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C42BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C42C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C42C4
  c->lr=c->r[0]; // 801C42C8
  c->r[1]=c->r[1]+0x00000020u; // 801C42CC
  return; // 801C42D0
}

// hidh_l2cif_config_cfm
void f_801C42D4(Ctx* __restrict c) {
  trace_call(0x801C42D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C42D4
  c->r[0]=c->lr; // 801C42D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C42DC
  c->r[11]=c->r[1]+0x00000020u; // 801C42E0
  c->lr=0x801C42E8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C42E4
  c->r[5]=0u+0x803D0000u; // 801C42E8
  c->r[31]=0u+0x80330000u; // 801C42EC
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C42F0
  c->r[27]=c->r[3]|c->r[3]; // 801C42F4
  c->r[0]=R8(c->r[5]+0x00000401u); // 801C42F8
  c->r[28]=c->r[4]|c->r[4]; // 801C42FC
  c->r[31]=c->r[31]+0x00003F00u; // 801C4300
  c->r[29]=0u+0x00000000u; // 801C4304
  cmpu(c,0,c->r[0],0x00000004u); // 801C4308
  if (crb(c,0)) { goto L_801C4328; } // 801C430C
  c->r[3]=0u+0x001E0000u; // 801C4310
  c->r[6]=R16(c->r[28]+0x00000000u); // 801C4314
  c->r[5]=c->r[27]|c->r[27]; // 801C4318
  c->r[4]=c->r[31]+0x00000274u; // 801C431C
  c->r[3]=c->r[3]+0x00000003u; // 801C4320
  c->lr=0x801C4328u; f_801ACB50(c); // 801C4324
L_801C4328:;
  c->r[3]=0u+0x803D0000u; // 801C4328
  c->r[0]=0u+0x00000004u; // 801C432C
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4330
  c->r[30]=0u+0x00000000u; // 801C4334
  c->ctr=c->r[0]; // 801C4338
L_801C433C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C433C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4340
  c->r[4]=c->r[3]+c->r[0]; // 801C4344
  c->r[0]=R8(c->r[3]+c->r[0]); // 801C4348
  cmps(c,0,(int32_t)c->r[0],0); // 801C434C
  if (crb(c,2)) { goto L_801C4378; } // 801C4350
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C4354
  cmps(c,0,(int32_t)c->r[0],0); // 801C4358
  if (crb(c,2)) { goto L_801C4378; } // 801C435C
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C4360
  cmpu(c,0,c->r[27],c->r[0]); // 801C4364
  if (crb(c,2)) { goto L_801C4440; } // 801C4368
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C436C
  cmpu(c,0,c->r[27],c->r[0]); // 801C4370
  if (crb(c,2)) { goto L_801C4440; } // 801C4374
L_801C4378:;
  c->r[30]=c->r[30]+0x00000001u; // 801C4378
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C437C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4380
  c->r[4]=c->r[3]+c->r[0]; // 801C4384
  c->r[0]=R8(c->r[3]+c->r[0]); // 801C4388
  cmps(c,0,(int32_t)c->r[0],0); // 801C438C
  if (crb(c,2)) { goto L_801C43B8; } // 801C4390
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C4394
  cmps(c,0,(int32_t)c->r[0],0); // 801C4398
  if (crb(c,2)) { goto L_801C43B8; } // 801C439C
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C43A0
  cmpu(c,0,c->r[27],c->r[0]); // 801C43A4
  if (crb(c,2)) { goto L_801C4440; } // 801C43A8
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C43AC
  cmpu(c,0,c->r[27],c->r[0]); // 801C43B0
  if (crb(c,2)) { goto L_801C4440; } // 801C43B4
L_801C43B8:;
  c->r[30]=c->r[30]+0x00000001u; // 801C43B8
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C43BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C43C0
  c->r[4]=c->r[3]+c->r[0]; // 801C43C4
  c->r[0]=R8(c->r[3]+c->r[0]); // 801C43C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C43CC
  if (crb(c,2)) { goto L_801C43F8; } // 801C43D0
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C43D4
  cmps(c,0,(int32_t)c->r[0],0); // 801C43D8
  if (crb(c,2)) { goto L_801C43F8; } // 801C43DC
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C43E0
  cmpu(c,0,c->r[27],c->r[0]); // 801C43E4
  if (crb(c,2)) { goto L_801C4440; } // 801C43E8
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C43EC
  cmpu(c,0,c->r[27],c->r[0]); // 801C43F0
  if (crb(c,2)) { goto L_801C4440; } // 801C43F4
L_801C43F8:;
  c->r[30]=c->r[30]+0x00000001u; // 801C43F8
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C43FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4400
  c->r[4]=c->r[3]+c->r[0]; // 801C4404
  c->r[0]=R8(c->r[3]+c->r[0]); // 801C4408
  cmps(c,0,(int32_t)c->r[0],0); // 801C440C
  if (crb(c,2)) { goto L_801C4438; } // 801C4410
  c->r[0]=R8(c->r[4]+0x00000010u); // 801C4414
  cmps(c,0,(int32_t)c->r[0],0); // 801C4418
  if (crb(c,2)) { goto L_801C4438; } // 801C441C
  c->r[0]=R16(c->r[4]+0x00000014u); // 801C4420
  cmpu(c,0,c->r[27],c->r[0]); // 801C4424
  if (crb(c,2)) { goto L_801C4440; } // 801C4428
  c->r[0]=R16(c->r[4]+0x00000016u); // 801C442C
  cmpu(c,0,c->r[27],c->r[0]); // 801C4430
  if (crb(c,2)) { goto L_801C4440; } // 801C4434
L_801C4438:;
  c->r[30]=c->r[30]+0x00000001u; // 801C4438
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C433C; } // 801C443C
L_801C4440:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C4440
  cmpu(c,0,c->r[0],0x00000010u); // 801C4444
  if (crb(c,2)) { goto L_801C4460; } // 801C4448
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C444C
  c->r[3]=0u+0x803D0000u; // 801C4450
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4454
  c->r[29]=c->r[3]+c->r[0]; // 801C4458
  c->r[29]=c->r[29]+0x00000010u; // 801C445C
L_801C4460:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C4460
  if (!crb(c,2)) { goto L_801C4494; } // 801C4464
  c->r[3]=0u+0x803D0000u; // 801C4468
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C446C
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C4470
  cmpu(c,0,c->r[0],0x00000002u); // 801C4474
  if (crb(c,0)) { goto L_801C45C8; } // 801C4478
  c->r[3]=0u+0x001E0000u; // 801C447C
  c->r[5]=c->r[27]|c->r[27]; // 801C4480
  c->r[3]=c->r[3]+0x00000001u; // 801C4484
  c->r[4]=c->r[31]+0x0000021Cu; // 801C4488
  c->lr=0x801C4490u; f_801ACB38(c); // 801C448C
  goto L_801C45C8; // 801C4490
L_801C4494:;
  c->r[0]=R16(c->r[28]+0x00000000u); // 801C4494
  cmps(c,0,(int32_t)c->r[0],0); // 801C4498
  if (crb(c,2)) { goto L_801C4548; } // 801C449C
  c->r[3]=0u+0x803D0000u; // 801C44A0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801C44A4
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C44A8
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C44AC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 801C44B0
  cmpu(c,0,c->r[0],0x00000004u); // 801C44B4
  c->r[27]=c->r[3]+c->r[4]; // 801C44B8
  if (crb(c,0)) { goto L_801C44D0; } // 801C44BC
  c->r[3]=0u+0x001E0000u; // 801C44C0
  c->r[4]=c->r[31]+0x00000044u; // 801C44C4
  c->r[3]=c->r[3]+0x00000003u; // 801C44C8
  c->lr=0x801C44D0u; f_801ACB20(c); // 801C44CC
L_801C44D0:;
  c->r[0]=R16(c->r[27]+0x00000014u); // 801C44D0
  cmps(c,0,(int32_t)c->r[0],0); // 801C44D4
  if (!crb(c,2)) { goto L_801C44E8; } // 801C44D8
  c->r[0]=R16(c->r[27]+0x00000016u); // 801C44DC
  cmps(c,0,(int32_t)c->r[0],0); // 801C44E0
  if (crb(c,2)) { goto L_801C4514; } // 801C44E4
L_801C44E8:;
  c->r[0]=0u+0x00000005u; // 801C44E8
  W8(c->r[27]+0x00000010u,c->r[0]); // 801C44EC
  c->r[3]=R16(c->r[27]+0x00000016u); // 801C44F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C44F4
  if (crb(c,2)) { goto L_801C4500; } // 801C44F8
  c->lr=0x801C4500u; f_801C5BB8(c); // 801C44FC
L_801C4500:;
  c->r[3]=R16(c->r[27]+0x00000014u); // 801C4500
  cmps(c,0,(int32_t)c->r[3],0); // 801C4504
  if (crb(c,2)) { goto L_801C451C; } // 801C4508
  c->lr=0x801C4510u; f_801C5BB8(c); // 801C450C
  goto L_801C451C; // 801C4510
L_801C4514:;
  c->r[0]=0u+0x00000000u; // 801C4514
  W8(c->r[27]+0x00000010u,c->r[0]); // 801C4518
L_801C451C:;
  c->r[4]=0u+0x803D0000u; // 801C451C
  c->r[0]=R16(c->r[28]+0x00000000u); // 801C4520
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C4524
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801C4528
  c->r[12]=R32(c->r[4]+0x00000340u); // 801C452C
  c->r[5]=c->r[0]|0x00000400u; // 801C4530
  c->r[4]=0u+0x00000001u; // 801C4534
  c->r[6]=0u+0x00000000u; // 801C4538
  c->ctr=c->r[12]; // 801C453C
  if (true) { c->lr=0x801C4544u; dispatch(c,c->ctr); } // 801C4540
  goto L_801C45C8; // 801C4544
L_801C4548:;
  c->r[0]=R16(c->r[29]+0x00000004u); // 801C4548
  cmpu(c,0,c->r[27],c->r[0]); // 801C454C
  if (!crb(c,2)) { goto L_801C4564; } // 801C4550
  c->r[0]=R8(c->r[29]+0x00000001u); // 801C4554
  c->r[0]=c->r[0]|0x00000004u; // 801C4558
  W8(c->r[29]+0x00000001u,c->r[0]); // 801C455C
  goto L_801C4570; // 801C4560
L_801C4564:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801C4564
  c->r[0]=c->r[0]|0x00000010u; // 801C4568
  W8(c->r[29]+0x00000001u,c->r[0]); // 801C456C
L_801C4570:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801C4570
  c->r[0]=rotl(c->r[0],0)&0x0000001Eu; // 801C4574
  cmps(c,0,(int32_t)c->r[0],30); // 801C4578
  if (!crb(c,2)) { goto L_801C45C8; } // 801C457C
  c->r[0]=R8(c->r[29]+0x00000000u); // 801C4580
  cmpu(c,0,c->r[0],0x00000003u); // 801C4584
  if (!crb(c,2)) { goto L_801C45C8; } // 801C4588
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801C458C
  c->r[4]=0u+0x00000004u; // 801C4590
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C4594
  c->r[6]=0u+0x803D0000u; // 801C4598
  W8(c->r[29]+0x00000000u,c->r[4]); // 801C459C
  c->r[5]=0u+0x00000001u; // 801C45A0
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C45A4
  c->r[4]=c->r[6]+c->r[0]; // 801C45A8
  W8(c->r[4]+0x0000000Au,c->r[5]); // 801C45AC
  c->r[4]=0u+0x00000000u; // 801C45B0
  c->r[5]=0u+0x00000000u; // 801C45B4
  c->r[12]=R32(c->r[6]+0x00000340u); // 801C45B8
  c->r[6]=0u+0x00000000u; // 801C45BC
  c->ctr=c->r[12]; // 801C45C0
  if (true) { c->lr=0x801C45C8u; dispatch(c,c->ctr); } // 801C45C4
L_801C45C8:;
  c->r[11]=c->r[1]+0x00000020u; // 801C45C8
  c->lr=0x801C45D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C45CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C45D0
  c->lr=c->r[0]; // 801C45D4
  c->r[1]=c->r[1]+0x00000020u; // 801C45D8
  return; // 801C45DC
}

// hidh_l2cif_disconnect_ind
void f_801C45E0(Ctx* __restrict c) {
  trace_call(0x801C45E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C45E0
  c->r[0]=c->lr; // 801C45E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C45E8
  c->r[11]=c->r[1]+0x00000020u; // 801C45EC
  c->lr=0x801C45F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C45F0
  c->r[5]=0u+0x803D0000u; // 801C45F4
  c->r[0]=0u+0x00000004u; // 801C45F8
  c->r[27]=c->r[3]|c->r[3]; // 801C45FC
  c->r[28]=c->r[4]|c->r[4]; // 801C4600
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C4604
  c->r[30]=0u+0x00000000u; // 801C4608
  c->r[29]=0u+0x00000000u; // 801C460C
  c->r[31]=0u+0x00000000u; // 801C4610
  c->ctr=c->r[0]; // 801C4614
L_801C4618:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4618
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C461C
  c->r[6]=c->r[5]+c->r[0]; // 801C4620
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4624
  cmps(c,0,(int32_t)c->r[0],0); // 801C4628
  if (crb(c,2)) { goto L_801C4654; } // 801C462C
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C4630
  cmps(c,0,(int32_t)c->r[0],0); // 801C4634
  if (crb(c,2)) { goto L_801C4654; } // 801C4638
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C463C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4640
  if (crb(c,2)) { goto L_801C471C; } // 801C4644
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4648
  cmpu(c,0,c->r[3],c->r[0]); // 801C464C
  if (crb(c,2)) { goto L_801C471C; } // 801C4650
L_801C4654:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4654
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4658
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C465C
  c->r[6]=c->r[5]+c->r[0]; // 801C4660
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4664
  cmps(c,0,(int32_t)c->r[0],0); // 801C4668
  if (crb(c,2)) { goto L_801C4694; } // 801C466C
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C4670
  cmps(c,0,(int32_t)c->r[0],0); // 801C4674
  if (crb(c,2)) { goto L_801C4694; } // 801C4678
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C467C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4680
  if (crb(c,2)) { goto L_801C471C; } // 801C4684
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4688
  cmpu(c,0,c->r[3],c->r[0]); // 801C468C
  if (crb(c,2)) { goto L_801C471C; } // 801C4690
L_801C4694:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4694
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4698
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C469C
  c->r[6]=c->r[5]+c->r[0]; // 801C46A0
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C46A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C46A8
  if (crb(c,2)) { goto L_801C46D4; } // 801C46AC
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C46B0
  cmps(c,0,(int32_t)c->r[0],0); // 801C46B4
  if (crb(c,2)) { goto L_801C46D4; } // 801C46B8
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C46BC
  cmpu(c,0,c->r[3],c->r[0]); // 801C46C0
  if (crb(c,2)) { goto L_801C471C; } // 801C46C4
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C46C8
  cmpu(c,0,c->r[3],c->r[0]); // 801C46CC
  if (crb(c,2)) { goto L_801C471C; } // 801C46D0
L_801C46D4:;
  c->r[31]=c->r[31]+0x00000001u; // 801C46D4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C46D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C46DC
  c->r[6]=c->r[5]+c->r[0]; // 801C46E0
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C46E4
  cmps(c,0,(int32_t)c->r[0],0); // 801C46E8
  if (crb(c,2)) { goto L_801C4714; } // 801C46EC
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C46F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C46F4
  if (crb(c,2)) { goto L_801C4714; } // 801C46F8
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C46FC
  cmpu(c,0,c->r[3],c->r[0]); // 801C4700
  if (crb(c,2)) { goto L_801C471C; } // 801C4704
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4708
  cmpu(c,0,c->r[3],c->r[0]); // 801C470C
  if (crb(c,2)) { goto L_801C471C; } // 801C4710
L_801C4714:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4714
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4618; } // 801C4718
L_801C471C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C471C
  cmpu(c,0,c->r[0],0x00000010u); // 801C4720
  if (crb(c,2)) { goto L_801C473C; } // 801C4724
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4728
  c->r[3]=0u+0x803D0000u; // 801C472C
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4730
  c->r[30]=c->r[3]+c->r[0]; // 801C4734
  c->r[30]=c->r[30]+0x00000010u; // 801C4738
L_801C473C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C473C
  if (!crb(c,2)) { goto L_801C4774; } // 801C4740
  c->r[3]=0u+0x803D0000u; // 801C4744
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4748
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C474C
  cmpu(c,0,c->r[0],0x00000002u); // 801C4750
  if (crb(c,0)) { goto L_801C488C; } // 801C4754
  c->r[3]=0u+0x001E0000u; // 801C4758
  c->r[4]=0u+0x80330000u; // 801C475C
  c->r[5]=c->r[27]|c->r[27]; // 801C4760
  c->r[3]=c->r[3]+0x00000001u; // 801C4764
  c->r[4]=c->r[4]+0x000041A0u; // 801C4768
  c->lr=0x801C4770u; f_801ACB38(c); // 801C476C
  goto L_801C488C; // 801C4770
L_801C4774:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C4774
  if (crb(c,2)) { goto L_801C4784; } // 801C4778
  c->r[3]=c->r[27]|c->r[27]; // 801C477C
  c->lr=0x801C4784u; f_801C5C5C(c); // 801C4780
L_801C4784:;
  c->r[3]=0u+0x803D0000u; // 801C4784
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4788
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C478C
  cmpu(c,0,c->r[0],0x00000004u); // 801C4790
  if (crb(c,0)) { goto L_801C47B0; } // 801C4794
  c->r[3]=0u+0x001E0000u; // 801C4798
  c->r[4]=0u+0x80330000u; // 801C479C
  c->r[5]=c->r[27]|c->r[27]; // 801C47A0
  c->r[3]=c->r[3]+0x00000003u; // 801C47A4
  c->r[4]=c->r[4]+0x000041CCu; // 801C47A8
  c->lr=0x801C47B0u; f_801ACB38(c); // 801C47AC
L_801C47B0:;
  c->r[0]=0u+0x00000005u; // 801C47B0
  W8(c->r[30]+0x00000000u,c->r[0]); // 801C47B4
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C47B8
  cmpu(c,0,c->r[27],c->r[0]); // 801C47BC
  if (!crb(c,2)) { goto L_801C47D0; } // 801C47C0
  c->r[0]=0u+0x00000000u; // 801C47C4
  W16(c->r[30]+0x00000004u,c->r[0]); // 801C47C8
  goto L_801C47D8; // 801C47CC
L_801C47D0:;
  c->r[0]=0u+0x00000000u; // 801C47D0
  W16(c->r[30]+0x00000006u,c->r[0]); // 801C47D4
L_801C47D8:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C47D8
  cmps(c,0,(int32_t)c->r[0],0); // 801C47DC
  if (!crb(c,2)) { goto L_801C488C; } // 801C47E0
  c->r[0]=R16(c->r[30]+0x00000006u); // 801C47E4
  cmps(c,0,(int32_t)c->r[0],0); // 801C47E8
  if (!crb(c,2)) { goto L_801C488C; } // 801C47EC
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C47F0
  c->r[3]=0u+0x803D0000u; // 801C47F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C47F8
  c->r[4]=0u+0x00000000u; // 801C47FC
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4800
  cmps(c,0,(int32_t)c->r[28],0); // 801C4804
  c->r[3]=c->r[3]+c->r[0]; // 801C4808
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801C480C
  W8(c->r[30]+0x00000000u,c->r[4]); // 801C4810
  if (!crb(c,2)) { goto L_801C4820; } // 801C4814
  c->lr=0x801C481Cu; f_801B3FA4(c); // 801C4818
  c->r[29]=c->r[3]|c->r[3]; // 801C481C
L_801C4820:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 801C4820
  c->r[5]=R16(c->r[30]+0x0000000Au); // 801C4824
  cmpu(c,0,c->r[0],0x00000005u); // 801C4828
  if (crb(c,2)) { goto L_801C4868; } // 801C482C
  cmpu(c,0,c->r[0],0x00000006u); // 801C4830
  if (crb(c,2)) { goto L_801C4868; } // 801C4834
  cmpu(c,0,c->r[0],0x0000000Eu); // 801C4838
  if (crb(c,2)) { goto L_801C4868; } // 801C483C
  cmpu(c,0,c->r[0],0x00000018u); // 801C4840
  if (crb(c,2)) { goto L_801C4868; } // 801C4844
  cmpu(c,0,c->r[0],0x00000026u); // 801C4848
  if (crb(c,2)) { goto L_801C4868; } // 801C484C
  cmpu(c,0,c->r[0],0x00000029u); // 801C4850
  if (crb(c,2)) { goto L_801C4868; } // 801C4854
  cmpu(c,0,c->r[0],0x00000025u); // 801C4858
  if (crb(c,2)) { goto L_801C4868; } // 801C485C
  cmpu(c,0,c->r[0],0x00000017u); // 801C4860
  if (!crb(c,2)) { goto L_801C486C; } // 801C4864
L_801C4868:;
  c->r[5]=0u+0x0000000Fu; // 801C4868
L_801C486C:;
  c->r[4]=0u+0x803D0000u; // 801C486C
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801C4870
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C4874
  c->r[6]=0u+0x00000000u; // 801C4878
  c->r[12]=R32(c->r[4]+0x00000340u); // 801C487C
  c->r[4]=0u+0x00000001u; // 801C4880
  c->ctr=c->r[12]; // 801C4884
  if (true) { c->lr=0x801C488Cu; dispatch(c,c->ctr); } // 801C4888
L_801C488C:;
  c->r[11]=c->r[1]+0x00000020u; // 801C488C
  c->lr=0x801C4894u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4890
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4894
  c->lr=c->r[0]; // 801C4898
  c->r[1]=c->r[1]+0x00000020u; // 801C489C
  return; // 801C48A0
}

// hidh_l2cif_disconnect_cfm
void f_801C48A4(Ctx* __restrict c) {
  trace_call(0x801C48A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C48A4
  c->r[0]=c->lr; // 801C48A8
  c->r[4]=0u+0x803D0000u; // 801C48AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C48B0
  c->r[0]=0u+0x00000004u; // 801C48B4
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C48B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C48BC
  c->r[31]=0u+0x00000000u; // 801C48C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C48C4
  c->r[30]=0u+0x00000000u; // 801C48C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C48CC
  c->r[29]=c->r[3]|c->r[3]; // 801C48D0
  c->ctr=c->r[0]; // 801C48D4
L_801C48D8:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C48D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C48DC
  c->r[5]=c->r[4]+c->r[0]; // 801C48E0
  c->r[0]=R8(c->r[4]+c->r[0]); // 801C48E4
  cmps(c,0,(int32_t)c->r[0],0); // 801C48E8
  if (crb(c,2)) { goto L_801C4914; } // 801C48EC
  c->r[0]=R8(c->r[5]+0x00000010u); // 801C48F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C48F4
  if (crb(c,2)) { goto L_801C4914; } // 801C48F8
  c->r[0]=R16(c->r[5]+0x00000014u); // 801C48FC
  cmpu(c,0,c->r[3],c->r[0]); // 801C4900
  if (crb(c,2)) { goto L_801C49DC; } // 801C4904
  c->r[0]=R16(c->r[5]+0x00000016u); // 801C4908
  cmpu(c,0,c->r[3],c->r[0]); // 801C490C
  if (crb(c,2)) { goto L_801C49DC; } // 801C4910
L_801C4914:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4914
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4918
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C491C
  c->r[5]=c->r[4]+c->r[0]; // 801C4920
  c->r[0]=R8(c->r[4]+c->r[0]); // 801C4924
  cmps(c,0,(int32_t)c->r[0],0); // 801C4928
  if (crb(c,2)) { goto L_801C4954; } // 801C492C
  c->r[0]=R8(c->r[5]+0x00000010u); // 801C4930
  cmps(c,0,(int32_t)c->r[0],0); // 801C4934
  if (crb(c,2)) { goto L_801C4954; } // 801C4938
  c->r[0]=R16(c->r[5]+0x00000014u); // 801C493C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4940
  if (crb(c,2)) { goto L_801C49DC; } // 801C4944
  c->r[0]=R16(c->r[5]+0x00000016u); // 801C4948
  cmpu(c,0,c->r[3],c->r[0]); // 801C494C
  if (crb(c,2)) { goto L_801C49DC; } // 801C4950
L_801C4954:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4954
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4958
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C495C
  c->r[5]=c->r[4]+c->r[0]; // 801C4960
  c->r[0]=R8(c->r[4]+c->r[0]); // 801C4964
  cmps(c,0,(int32_t)c->r[0],0); // 801C4968
  if (crb(c,2)) { goto L_801C4994; } // 801C496C
  c->r[0]=R8(c->r[5]+0x00000010u); // 801C4970
  cmps(c,0,(int32_t)c->r[0],0); // 801C4974
  if (crb(c,2)) { goto L_801C4994; } // 801C4978
  c->r[0]=R16(c->r[5]+0x00000014u); // 801C497C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4980
  if (crb(c,2)) { goto L_801C49DC; } // 801C4984
  c->r[0]=R16(c->r[5]+0x00000016u); // 801C4988
  cmpu(c,0,c->r[3],c->r[0]); // 801C498C
  if (crb(c,2)) { goto L_801C49DC; } // 801C4990
L_801C4994:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4994
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4998
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C499C
  c->r[5]=c->r[4]+c->r[0]; // 801C49A0
  c->r[0]=R8(c->r[4]+c->r[0]); // 801C49A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C49A8
  if (crb(c,2)) { goto L_801C49D4; } // 801C49AC
  c->r[0]=R8(c->r[5]+0x00000010u); // 801C49B0
  cmps(c,0,(int32_t)c->r[0],0); // 801C49B4
  if (crb(c,2)) { goto L_801C49D4; } // 801C49B8
  c->r[0]=R16(c->r[5]+0x00000014u); // 801C49BC
  cmpu(c,0,c->r[3],c->r[0]); // 801C49C0
  if (crb(c,2)) { goto L_801C49DC; } // 801C49C4
  c->r[0]=R16(c->r[5]+0x00000016u); // 801C49C8
  cmpu(c,0,c->r[3],c->r[0]); // 801C49CC
  if (crb(c,2)) { goto L_801C49DC; } // 801C49D0
L_801C49D4:;
  c->r[31]=c->r[31]+0x00000001u; // 801C49D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C48D8; } // 801C49D8
L_801C49DC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C49DC
  cmpu(c,0,c->r[0],0x00000010u); // 801C49E0
  if (crb(c,2)) { goto L_801C49FC; } // 801C49E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C49E8
  c->r[3]=0u+0x803D0000u; // 801C49EC
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C49F0
  c->r[30]=c->r[3]+c->r[0]; // 801C49F4
  c->r[30]=c->r[30]+0x00000010u; // 801C49F8
L_801C49FC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C49FC
  if (!crb(c,2)) { goto L_801C4A34; } // 801C4A00
  c->r[3]=0u+0x803D0000u; // 801C4A04
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4A08
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C4A0C
  cmpu(c,0,c->r[0],0x00000002u); // 801C4A10
  if (crb(c,0)) { goto L_801C4AD0; } // 801C4A14
  c->r[3]=0u+0x001E0000u; // 801C4A18
  c->r[4]=0u+0x80330000u; // 801C4A1C
  c->r[5]=c->r[29]|c->r[29]; // 801C4A20
  c->r[3]=c->r[3]+0x00000001u; // 801C4A24
  c->r[4]=c->r[4]+0x000041F0u; // 801C4A28
  c->lr=0x801C4A30u; f_801ACB38(c); // 801C4A2C
  goto L_801C4AD0; // 801C4A30
L_801C4A34:;
  c->r[3]=0u+0x803D0000u; // 801C4A34
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4A38
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C4A3C
  cmpu(c,0,c->r[0],0x00000004u); // 801C4A40
  if (crb(c,0)) { goto L_801C4A60; } // 801C4A44
  c->r[3]=0u+0x001E0000u; // 801C4A48
  c->r[4]=0u+0x80330000u; // 801C4A4C
  c->r[5]=c->r[29]|c->r[29]; // 801C4A50
  c->r[3]=c->r[3]+0x00000003u; // 801C4A54
  c->r[4]=c->r[4]+0x00004220u; // 801C4A58
  c->lr=0x801C4A60u; f_801ACB38(c); // 801C4A5C
L_801C4A60:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C4A60
  cmpu(c,0,c->r[29],c->r[0]); // 801C4A64
  if (!crb(c,2)) { goto L_801C4A78; } // 801C4A68
  c->r[0]=0u+0x00000000u; // 801C4A6C
  W16(c->r[30]+0x00000004u,c->r[0]); // 801C4A70
  goto L_801C4A80; // 801C4A74
L_801C4A78:;
  c->r[0]=0u+0x00000000u; // 801C4A78
  W16(c->r[30]+0x00000006u,c->r[0]); // 801C4A7C
L_801C4A80:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C4A80
  cmps(c,0,(int32_t)c->r[0],0); // 801C4A84
  if (!crb(c,2)) { goto L_801C4AD0; } // 801C4A88
  c->r[0]=R16(c->r[30]+0x00000006u); // 801C4A8C
  cmps(c,0,(int32_t)c->r[0],0); // 801C4A90
  if (!crb(c,2)) { goto L_801C4AD0; } // 801C4A94
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801C4A98
  c->r[7]=0u+0x803D0000u; // 801C4A9C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C4AA0
  c->r[8]=0u+0x00000000u; // 801C4AA4
  c->r[7]=c->r[7]+0xFFFFADD8u; // 801C4AA8
  c->r[4]=0u+0x00000001u; // 801C4AAC
  c->r[5]=c->r[7]+c->r[0]; // 801C4AB0
  c->r[6]=0u+0x00000000u; // 801C4AB4
  W8(c->r[5]+0x0000000Au,c->r[8]); // 801C4AB8
  W8(c->r[30]+0x00000000u,c->r[8]); // 801C4ABC
  c->r[12]=R32(c->r[7]+0x00000340u); // 801C4AC0
  c->r[5]=R16(c->r[30]+0x0000000Au); // 801C4AC4
  c->ctr=c->r[12]; // 801C4AC8
  if (true) { c->lr=0x801C4AD0u; dispatch(c,c->ctr); } // 801C4ACC
L_801C4AD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4AD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4AD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4AD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C4ADC
  c->lr=c->r[0]; // 801C4AE0
  c->r[1]=c->r[1]+0x00000020u; // 801C4AE4
  return; // 801C4AE8
}

// hidh_l2cif_cong_ind
void f_801C4AEC(Ctx* __restrict c) {
  trace_call(0x801C4AECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4AEC
  c->r[0]=c->lr; // 801C4AF0
  c->r[5]=0u+0x803D0000u; // 801C4AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4AF8
  c->r[0]=0u+0x00000004u; // 801C4AFC
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C4B00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4B04
  c->r[31]=0u+0x00000000u; // 801C4B08
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4B0C
  c->r[30]=c->r[4]|c->r[4]; // 801C4B10
  c->r[4]=0u+0x00000000u; // 801C4B14
  c->ctr=c->r[0]; // 801C4B18
L_801C4B1C:;
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801C4B1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4B20
  c->r[6]=c->r[5]+c->r[0]; // 801C4B24
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4B28
  cmps(c,0,(int32_t)c->r[0],0); // 801C4B2C
  if (crb(c,2)) { goto L_801C4B58; } // 801C4B30
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C4B34
  cmps(c,0,(int32_t)c->r[0],0); // 801C4B38
  if (crb(c,2)) { goto L_801C4B58; } // 801C4B3C
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C4B40
  cmpu(c,0,c->r[3],c->r[0]); // 801C4B44
  if (crb(c,2)) { goto L_801C4C20; } // 801C4B48
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4B4C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4B50
  if (crb(c,2)) { goto L_801C4C20; } // 801C4B54
L_801C4B58:;
  c->r[4]=c->r[4]+0x00000001u; // 801C4B58
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801C4B5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4B60
  c->r[6]=c->r[5]+c->r[0]; // 801C4B64
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4B68
  cmps(c,0,(int32_t)c->r[0],0); // 801C4B6C
  if (crb(c,2)) { goto L_801C4B98; } // 801C4B70
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C4B74
  cmps(c,0,(int32_t)c->r[0],0); // 801C4B78
  if (crb(c,2)) { goto L_801C4B98; } // 801C4B7C
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C4B80
  cmpu(c,0,c->r[3],c->r[0]); // 801C4B84
  if (crb(c,2)) { goto L_801C4C20; } // 801C4B88
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4B8C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4B90
  if (crb(c,2)) { goto L_801C4C20; } // 801C4B94
L_801C4B98:;
  c->r[4]=c->r[4]+0x00000001u; // 801C4B98
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801C4B9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4BA0
  c->r[6]=c->r[5]+c->r[0]; // 801C4BA4
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4BA8
  cmps(c,0,(int32_t)c->r[0],0); // 801C4BAC
  if (crb(c,2)) { goto L_801C4BD8; } // 801C4BB0
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C4BB4
  cmps(c,0,(int32_t)c->r[0],0); // 801C4BB8
  if (crb(c,2)) { goto L_801C4BD8; } // 801C4BBC
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C4BC0
  cmpu(c,0,c->r[3],c->r[0]); // 801C4BC4
  if (crb(c,2)) { goto L_801C4C20; } // 801C4BC8
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4BCC
  cmpu(c,0,c->r[3],c->r[0]); // 801C4BD0
  if (crb(c,2)) { goto L_801C4C20; } // 801C4BD4
L_801C4BD8:;
  c->r[4]=c->r[4]+0x00000001u; // 801C4BD8
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801C4BDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4BE0
  c->r[6]=c->r[5]+c->r[0]; // 801C4BE4
  c->r[0]=R8(c->r[5]+c->r[0]); // 801C4BE8
  cmps(c,0,(int32_t)c->r[0],0); // 801C4BEC
  if (crb(c,2)) { goto L_801C4C18; } // 801C4BF0
  c->r[0]=R8(c->r[6]+0x00000010u); // 801C4BF4
  cmps(c,0,(int32_t)c->r[0],0); // 801C4BF8
  if (crb(c,2)) { goto L_801C4C18; } // 801C4BFC
  c->r[0]=R16(c->r[6]+0x00000014u); // 801C4C00
  cmpu(c,0,c->r[3],c->r[0]); // 801C4C04
  if (crb(c,2)) { goto L_801C4C20; } // 801C4C08
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4C0C
  cmpu(c,0,c->r[3],c->r[0]); // 801C4C10
  if (crb(c,2)) { goto L_801C4C20; } // 801C4C14
L_801C4C18:;
  c->r[4]=c->r[4]+0x00000001u; // 801C4C18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4B1C; } // 801C4C1C
L_801C4C20:;
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801C4C20
  cmpu(c,0,c->r[0],0x00000010u); // 801C4C24
  if (crb(c,2)) { goto L_801C4C40; } // 801C4C28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4C2C
  c->r[4]=0u+0x803D0000u; // 801C4C30
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C4C34
  c->r[31]=c->r[4]+c->r[0]; // 801C4C38
  c->r[31]=c->r[31]+0x00000010u; // 801C4C3C
L_801C4C40:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C4C40
  if (!crb(c,2)) { goto L_801C4C78; } // 801C4C44
  c->r[4]=0u+0x803D0000u; // 801C4C48
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C4C4C
  c->r[0]=R8(c->r[4]+0x00000401u); // 801C4C50
  cmpu(c,0,c->r[0],0x00000002u); // 801C4C54
  if (crb(c,0)) { goto L_801C4CCC; } // 801C4C58
  c->r[4]=0u+0x80330000u; // 801C4C5C
  c->r[6]=0u+0x001E0000u; // 801C4C60
  c->r[5]=c->r[3]|c->r[3]; // 801C4C64
  c->r[3]=c->r[6]+0x00000001u; // 801C4C68
  c->r[4]=c->r[4]+0x00004248u; // 801C4C6C
  c->lr=0x801C4C74u; f_801ACB38(c); // 801C4C70
  goto L_801C4CCC; // 801C4C74
L_801C4C78:;
  c->r[4]=0u+0x803D0000u; // 801C4C78
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C4C7C
  c->r[0]=R8(c->r[4]+0x00000401u); // 801C4C80
  cmpu(c,0,c->r[0],0x00000004u); // 801C4C84
  if (crb(c,0)) { goto L_801C4CA8; } // 801C4C88
  c->r[4]=0u+0x80330000u; // 801C4C8C
  c->r[7]=0u+0x001E0000u; // 801C4C90
  c->r[5]=c->r[3]|c->r[3]; // 801C4C94
  c->r[6]=c->r[30]|c->r[30]; // 801C4C98
  c->r[3]=c->r[7]+0x00000003u; // 801C4C9C
  c->r[4]=c->r[4]+0x00004280u; // 801C4CA0
  c->lr=0x801C4CA8u; f_801ACB50(c); // 801C4CA4
L_801C4CA8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C4CA8
  if (crb(c,2)) { goto L_801C4CC0; } // 801C4CAC
  c->r[0]=R8(c->r[31]+0x00000001u); // 801C4CB0
  c->r[0]=c->r[0]|0x00000020u; // 801C4CB4
  W8(c->r[31]+0x00000001u,c->r[0]); // 801C4CB8
  goto L_801C4CCC; // 801C4CBC
L_801C4CC0:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 801C4CC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801C4CC4
  W8(c->r[31]+0x00000001u,c->r[0]); // 801C4CC8
L_801C4CCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4CCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4CD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C4CD4
  c->lr=c->r[0]; // 801C4CD8
  c->r[1]=c->r[1]+0x00000010u; // 801C4CDC
  return; // 801C4CE0
}

// hidh_l2cif_data_ind
void f_801C4CE4(Ctx* __restrict c) {
  trace_call(0x801C4CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4CE4
  c->r[0]=c->lr; // 801C4CE8
  c->r[6]=0u+0x803D0000u; // 801C4CEC
  c->r[5]=c->r[3]|c->r[3]; // 801C4CF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4CF4
  c->r[0]=0u+0x00000004u; // 801C4CF8
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C4CFC
  c->r[9]=0u+0x00000000u; // 801C4D00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4D04
  c->r[31]=0u+0x00000000u; // 801C4D08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4D0C
  c->r[30]=c->r[4]|c->r[4]; // 801C4D10
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C4D14
  c->r[7]=R16(c->r[4]+0x00000004u); // 801C4D18
  c->r[7]=c->r[4]+c->r[7]; // 801C4D1C
  c->ctr=c->r[0]; // 801C4D20
L_801C4D24:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4D24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4D28
  c->r[8]=c->r[6]+c->r[0]; // 801C4D2C
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C4D30
  cmps(c,0,(int32_t)c->r[0],0); // 801C4D34
  if (crb(c,2)) { goto L_801C4D60; } // 801C4D38
  c->r[0]=R8(c->r[8]+0x00000010u); // 801C4D3C
  cmps(c,0,(int32_t)c->r[0],0); // 801C4D40
  if (crb(c,2)) { goto L_801C4D60; } // 801C4D44
  c->r[0]=R16(c->r[8]+0x00000014u); // 801C4D48
  cmpu(c,0,c->r[3],c->r[0]); // 801C4D4C
  if (crb(c,2)) { goto L_801C4E28; } // 801C4D50
  c->r[0]=R16(c->r[8]+0x00000016u); // 801C4D54
  cmpu(c,0,c->r[3],c->r[0]); // 801C4D58
  if (crb(c,2)) { goto L_801C4E28; } // 801C4D5C
L_801C4D60:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4D60
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4D64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4D68
  c->r[8]=c->r[6]+c->r[0]; // 801C4D6C
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C4D70
  cmps(c,0,(int32_t)c->r[0],0); // 801C4D74
  if (crb(c,2)) { goto L_801C4DA0; } // 801C4D78
  c->r[0]=R8(c->r[8]+0x00000010u); // 801C4D7C
  cmps(c,0,(int32_t)c->r[0],0); // 801C4D80
  if (crb(c,2)) { goto L_801C4DA0; } // 801C4D84
  c->r[0]=R16(c->r[8]+0x00000014u); // 801C4D88
  cmpu(c,0,c->r[3],c->r[0]); // 801C4D8C
  if (crb(c,2)) { goto L_801C4E28; } // 801C4D90
  c->r[0]=R16(c->r[8]+0x00000016u); // 801C4D94
  cmpu(c,0,c->r[3],c->r[0]); // 801C4D98
  if (crb(c,2)) { goto L_801C4E28; } // 801C4D9C
L_801C4DA0:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4DA0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4DA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4DA8
  c->r[8]=c->r[6]+c->r[0]; // 801C4DAC
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C4DB0
  cmps(c,0,(int32_t)c->r[0],0); // 801C4DB4
  if (crb(c,2)) { goto L_801C4DE0; } // 801C4DB8
  c->r[0]=R8(c->r[8]+0x00000010u); // 801C4DBC
  cmps(c,0,(int32_t)c->r[0],0); // 801C4DC0
  if (crb(c,2)) { goto L_801C4DE0; } // 801C4DC4
  c->r[0]=R16(c->r[8]+0x00000014u); // 801C4DC8
  cmpu(c,0,c->r[3],c->r[0]); // 801C4DCC
  if (crb(c,2)) { goto L_801C4E28; } // 801C4DD0
  c->r[0]=R16(c->r[8]+0x00000016u); // 801C4DD4
  cmpu(c,0,c->r[3],c->r[0]); // 801C4DD8
  if (crb(c,2)) { goto L_801C4E28; } // 801C4DDC
L_801C4DE0:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4DE0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4DE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4DE8
  c->r[8]=c->r[6]+c->r[0]; // 801C4DEC
  c->r[0]=R8(c->r[6]+c->r[0]); // 801C4DF0
  cmps(c,0,(int32_t)c->r[0],0); // 801C4DF4
  if (crb(c,2)) { goto L_801C4E20; } // 801C4DF8
  c->r[0]=R8(c->r[8]+0x00000010u); // 801C4DFC
  cmps(c,0,(int32_t)c->r[0],0); // 801C4E00
  if (crb(c,2)) { goto L_801C4E20; } // 801C4E04
  c->r[0]=R16(c->r[8]+0x00000014u); // 801C4E08
  cmpu(c,0,c->r[3],c->r[0]); // 801C4E0C
  if (crb(c,2)) { goto L_801C4E28; } // 801C4E10
  c->r[0]=R16(c->r[8]+0x00000016u); // 801C4E14
  cmpu(c,0,c->r[3],c->r[0]); // 801C4E18
  if (crb(c,2)) { goto L_801C4E28; } // 801C4E1C
L_801C4E20:;
  c->r[31]=c->r[31]+0x00000001u; // 801C4E20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4D24; } // 801C4E24
L_801C4E28:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C4E28
  cmpu(c,0,c->r[0],0x00000010u); // 801C4E2C
  if (crb(c,2)) { goto L_801C4E48; } // 801C4E30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801C4E34
  c->r[3]=0u+0x803D0000u; // 801C4E38
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4E3C
  c->r[9]=c->r[3]+c->r[0]; // 801C4E40
  c->r[9]=c->r[9]+0x00000010u; // 801C4E44
L_801C4E48:;
  cmps(c,0,(int32_t)c->r[9],0); // 801C4E48
  if (!crb(c,2)) { goto L_801C4E84; } // 801C4E4C
  c->r[3]=0u+0x803D0000u; // 801C4E50
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4E54
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C4E58
  cmpu(c,0,c->r[0],0x00000002u); // 801C4E5C
  if (crb(c,0)) { goto L_801C4E78; } // 801C4E60
  c->r[3]=0u+0x001E0000u; // 801C4E64
  c->r[4]=0u+0x80330000u; // 801C4E68
  c->r[3]=c->r[3]+0x00000001u; // 801C4E6C
  c->r[4]=c->r[4]+0x000042B8u; // 801C4E70
  c->lr=0x801C4E78u; f_801ACB38(c); // 801C4E74
L_801C4E78:;
  c->r[3]=c->r[30]|c->r[30]; // 801C4E78
  c->lr=0x801C4E80u; f_801AA228(c); // 801C4E7C
  goto L_801C5060; // 801C4E80
L_801C4E84:;
  c->r[7]=R8(c->r[7]+0x00000008u); // 801C4E84
  c->r[6]=R16(c->r[4]+0x00000002u); // 801C4E88
  c->r[3]=R16(c->r[4]+0x00000004u); // 801C4E8C
  c->r[0]=rotl(c->r[7],28)&0x0000000Fu; // 801C4E90
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801C4E94
  c->r[8]=rotl(c->r[7],0)&0x0000000Fu; // 801C4E98
  c->r[3]=c->r[3]+0x00000001u; // 801C4E9C
  cmps(c,0,(int32_t)c->r[0],10); // 801C4EA0
  W16(c->r[4]+0x00000002u,c->r[6]); // 801C4EA4
  c->r[7]=rotl(c->r[7],0)&0x00000003u; // 801C4EA8
  W16(c->r[4]+0x00000004u,c->r[3]); // 801C4EAC
  if (crb(c,2)) { goto L_801C4FC8; } // 801C4EB0
  if (!crb(c,0)) { goto L_801C4ED0; } // 801C4EB4
  cmps(c,0,(int32_t)c->r[0],1); // 801C4EB8
  if (crb(c,2)) { goto L_801C4F0C; } // 801C4EBC
  if (!crb(c,0)) { goto L_801C5058; } // 801C4EC0
  cmps(c,0,(int32_t)c->r[0],0); // 801C4EC4
  if (!crb(c,0)) { goto L_801C4EDC; } // 801C4EC8
  goto L_801C5058; // 801C4ECC
L_801C4ED0:;
  cmps(c,0,(int32_t)c->r[0],12); // 801C4ED0
  if (!crb(c,0)) { goto L_801C5058; } // 801C4ED4
  goto L_801C5010; // 801C4ED8
L_801C4EDC:;
  c->r[4]=0u+0x803D0000u; // 801C4EDC
  c->r[5]=c->r[8]|c->r[8]; // 801C4EE0
  c->r[4]=c->r[4]+0xFFFFADD8u; // 801C4EE4
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801C4EE8
  c->r[12]=R32(c->r[4]+0x00000340u); // 801C4EEC
  c->r[4]=0u+0x00000007u; // 801C4EF0
  c->r[6]=0u+0x00000000u; // 801C4EF4
  c->ctr=c->r[12]; // 801C4EF8
  if (true) { c->lr=0x801C4F00u; dispatch(c,c->ctr); } // 801C4EFC
  c->r[3]=c->r[30]|c->r[30]; // 801C4F00
  c->lr=0x801C4F08u; f_801AA228(c); // 801C4F04
  goto L_801C5060; // 801C4F08
L_801C4F0C:;
  cmps(c,0,(int32_t)c->r[8],5); // 801C4F0C
  if (crb(c,2)) { goto L_801C4F18; } // 801C4F10
  goto L_801C4FBC; // 801C4F14
L_801C4F18:;
  c->r[3]=0u+0x803D0000u; // 801C4F18
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801C4F1C
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C4F20
  c->r[0]=R8(c->r[3]+0x00000401u); // 801C4F24
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 801C4F28
  cmpu(c,0,c->r[0],0x00000004u); // 801C4F2C
  c->r[29]=c->r[3]+c->r[4]; // 801C4F30
  if (crb(c,0)) { goto L_801C4F4C; } // 801C4F34
  c->r[3]=0u+0x001E0000u; // 801C4F38
  c->r[4]=0u+0x80330000u; // 801C4F3C
  c->r[3]=c->r[3]+0x00000003u; // 801C4F40
  c->r[4]=c->r[4]+0x00003F44u; // 801C4F44
  c->lr=0x801C4F4Cu; f_801ACB20(c); // 801C4F48
L_801C4F4C:;
  c->r[0]=R16(c->r[29]+0x00000014u); // 801C4F4C
  cmps(c,0,(int32_t)c->r[0],0); // 801C4F50
  if (!crb(c,2)) { goto L_801C4F64; } // 801C4F54
  c->r[0]=R16(c->r[29]+0x00000016u); // 801C4F58
  cmps(c,0,(int32_t)c->r[0],0); // 801C4F5C
  if (crb(c,2)) { goto L_801C4F90; } // 801C4F60
L_801C4F64:;
  c->r[0]=0u+0x00000005u; // 801C4F64
  W8(c->r[29]+0x00000010u,c->r[0]); // 801C4F68
  c->r[3]=R16(c->r[29]+0x00000016u); // 801C4F6C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4F70
  if (crb(c,2)) { goto L_801C4F7C; } // 801C4F74
  c->lr=0x801C4F7Cu; f_801C5BB8(c); // 801C4F78
L_801C4F7C:;
  c->r[3]=R16(c->r[29]+0x00000014u); // 801C4F7C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4F80
  if (crb(c,2)) { goto L_801C4F98; } // 801C4F84
  c->lr=0x801C4F8Cu; f_801C5BB8(c); // 801C4F88
  goto L_801C4F98; // 801C4F8C
L_801C4F90:;
  c->r[0]=0u+0x00000000u; // 801C4F90
  W8(c->r[29]+0x00000010u,c->r[0]); // 801C4F94
L_801C4F98:;
  c->r[5]=0u+0x803D0000u; // 801C4F98
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801C4F9C
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C4FA0
  c->r[4]=0u+0x00000008u; // 801C4FA4
  c->r[12]=R32(c->r[5]+0x00000340u); // 801C4FA8
  c->r[5]=0u+0x00000000u; // 801C4FAC
  c->r[6]=0u+0x00000000u; // 801C4FB0
  c->ctr=c->r[12]; // 801C4FB4
  if (true) { c->lr=0x801C4FBCu; dispatch(c,c->ctr); } // 801C4FB8
L_801C4FBC:;
  c->r[3]=c->r[30]|c->r[30]; // 801C4FBC
  c->lr=0x801C4FC4u; f_801AA228(c); // 801C4FC0
  goto L_801C5060; // 801C4FC4
L_801C4FC8:;
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801C4FC8
  c->r[6]=0u+0x803D0000u; // 801C4FCC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C4FD0
  c->r[4]=0u+0x00000005u; // 801C4FD4
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C4FD8
  c->r[6]=c->r[6]+c->r[0]; // 801C4FDC
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C4FE0
  cmpu(c,0,c->r[5],c->r[0]); // 801C4FE4
  if (!crb(c,2)) { goto L_801C4FF0; } // 801C4FE8
  c->r[4]=0u+0x00000003u; // 801C4FEC
L_801C4FF0:;
  c->r[6]=0u+0x803D0000u; // 801C4FF0
  c->r[5]=c->r[7]|c->r[7]; // 801C4FF4
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C4FF8
  c->r[12]=R32(c->r[6]+0x00000340u); // 801C4FFC
  c->r[6]=c->r[30]|c->r[30]; // 801C5000
  c->ctr=c->r[12]; // 801C5004
  if (true) { c->lr=0x801C500Cu; dispatch(c,c->ctr); } // 801C5008
  goto L_801C5060; // 801C500C
L_801C5010:;
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801C5010
  c->r[6]=0u+0x803D0000u; // 801C5014
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C5018
  c->r[4]=0u+0x00000006u; // 801C501C
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C5020
  c->r[6]=c->r[6]+c->r[0]; // 801C5024
  c->r[0]=R16(c->r[6]+0x00000016u); // 801C5028
  cmpu(c,0,c->r[5],c->r[0]); // 801C502C
  if (!crb(c,2)) { goto L_801C5038; } // 801C5030
  c->r[4]=0u+0x00000004u; // 801C5034
L_801C5038:;
  c->r[6]=0u+0x803D0000u; // 801C5038
  c->r[5]=c->r[7]|c->r[7]; // 801C503C
  c->r[6]=c->r[6]+0xFFFFADD8u; // 801C5040
  c->r[12]=R32(c->r[6]+0x00000340u); // 801C5044
  c->r[6]=c->r[30]|c->r[30]; // 801C5048
  c->ctr=c->r[12]; // 801C504C
  if (true) { c->lr=0x801C5054u; dispatch(c,c->ctr); } // 801C5050
  goto L_801C5060; // 801C5054
L_801C5058:;
  c->r[3]=c->r[30]|c->r[30]; // 801C5058
  c->lr=0x801C5060u; f_801AA228(c); // 801C505C
L_801C5060:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5060
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5064
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5068
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C506C
  c->lr=c->r[0]; // 801C5070
  c->r[1]=c->r[1]+0x00000020u; // 801C5074
  return; // 801C5078
}

// hidh_conn_snd_data
void f_801C507C(Ctx* __restrict c) {
  trace_call(0x801C507Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C507C
  c->r[0]=c->lr; // 801C5080
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C5084
  c->r[11]=c->r[1]+0x00000050u; // 801C5088
  c->lr=0x801C5090u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C508C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C5090
  c->r[3]=0u+0x803D0000u; // 801C5094
  c->r[17]=c->r[4]|c->r[4]; // 801C5098
  c->r[3]=c->r[3]+0xFFFFADD8u; // 801C509C
  c->r[27]=c->r[3]+c->r[0]; // 801C50A0
  c->r[18]=c->r[7]|c->r[7]; // 801C50A4
  c->r[0]=R8(c->r[27]+0x00000011u); // 801C50A8
  c->r[19]=c->r[8]|c->r[8]; // 801C50AC
  c->r[21]=0u+0x00000000u; // 801C50B0
  c->r[20]=0u+0x00000000u; // 801C50B4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801C50B8
  if (crb(c,2)) { goto L_801C50D8; } // 801C50BC
  cmps(c,0,(int32_t)c->r[8],0); // 801C50C0
  if (crb(c,2)) { goto L_801C50D0; } // 801C50C4
  c->r[3]=c->r[19]|c->r[19]; // 801C50C8
  c->lr=0x801C50D0u; f_801AA228(c); // 801C50CC
L_801C50D0:;
  c->r[3]=0u+0x00000008u; // 801C50D0
  goto L_801C5300; // 801C50D4
L_801C50D8:;
  cmps(c,0,(int32_t)c->r[4],4); // 801C50D8
  if (!crb(c,0)) { goto L_801C50EC; } // 801C50DC
  cmps(c,0,(int32_t)c->r[4],1); // 801C50E0
  if (crb(c,2)) { goto L_801C50F8; } // 801C50E4
  goto L_801C5110; // 801C50E8
L_801C50EC:;
  cmps(c,0,(int32_t)c->r[4],10); // 801C50EC
  if (crb(c,2)) { goto L_801C5104; } // 801C50F0
  if (!crb(c,0)) { goto L_801C5110; } // 801C50F4
L_801C50F8:;
  c->r[23]=R16(c->r[27]+0x00000014u); // 801C50F8
  c->r[22]=0u+0x00000002u; // 801C50FC
  goto L_801C5118; // 801C5100
L_801C5104:;
  c->r[23]=R16(c->r[27]+0x00000016u); // 801C5104
  c->r[22]=0u+0x00000002u; // 801C5108
  goto L_801C5118; // 801C510C
L_801C5110:;
  c->r[3]=0u+0x00000005u; // 801C5110
  goto L_801C5300; // 801C5114
L_801C5118:;
  cmpu(c,0,c->r[4],0x00000009u); // 801C5118
  if (!crb(c,2)) { goto L_801C5128; } // 801C511C
  c->r[21]=0u+0x00000001u; // 801C5120
  goto L_801C513C; // 801C5124
L_801C5128:;
  cmpu(c,0,c->r[4],0x00000004u); // 801C5128
  if (!crb(c,2)) { goto L_801C513C; } // 801C512C
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 801C5130
  if (crb(c,2)) { goto L_801C513C; } // 801C5134
  c->r[21]=0u+0x00000002u; // 801C5138
L_801C513C:;
  c->r[30]=rotl(c->r[5],0)&0x0000000Fu; // 801C513C
  c->r[29]=rotl(c->r[6],0)&0x000000FFu; // 801C5140
  c->r[28]=rotl(c->r[6],24)&0x000000FFu; // 801C5144
  c->r[31]=0u+0x00000009u; // 801C5148
L_801C514C:;
  cmps(c,0,(int32_t)c->r[19],0); // 801C514C
  if (crb(c,2)) { goto L_801C515C; } // 801C5150
  cmps(c,0,(int32_t)c->r[20],0); // 801C5154
  if (crb(c,2)) { goto L_801C5190; } // 801C5158
L_801C515C:;
  c->r[3]=c->r[22]|c->r[22]; // 801C515C
  c->lr=0x801C5164u; f_801AA140(c); // 801C5160
  cmps(c,0,(int32_t)c->r[3],0); // 801C5164
  c->r[26]=c->r[3]|c->r[3]; // 801C5168
  if (!crb(c,2)) { goto L_801C5178; } // 801C516C
  c->r[3]=0u+0x00000003u; // 801C5170
  goto L_801C5300; // 801C5174
L_801C5178:;
  W16(c->r[3]+0x00000004u,c->r[31]); // 801C5178
  c->r[4]=0u+0x00000000u; // 801C517C
  c->r[24]=0u+0x00000000u; // 801C5180
  c->r[25]=0u+0x00000000u; // 801C5184
  c->r[20]=0u+0x00000000u; // 801C5188
  goto L_801C51F4; // 801C518C
L_801C5190:;
  c->r[3]=R16(c->r[27]+0x00000018u); // 801C5190
  c->r[24]=R16(c->r[19]+0x00000002u); // 801C5194
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C5198
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801C519C
  if (!crb(c,1)) { goto L_801C51DC; } // 801C51A0
  c->r[3]=c->r[22]|c->r[22]; // 801C51A4
  c->lr=0x801C51ACu; f_801AA140(c); // 801C51A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C51AC
  c->r[26]=c->r[3]|c->r[3]; // 801C51B0
  if (!crb(c,2)) { goto L_801C51C0; } // 801C51B4
  c->r[3]=0u+0x00000003u; // 801C51B8
  goto L_801C5300; // 801C51BC
L_801C51C0:;
  W16(c->r[3]+0x00000004u,c->r[31]); // 801C51C0
  c->r[4]=0u+0x00000001u; // 801C51C4
  c->r[3]=R16(c->r[27]+0x00000018u); // 801C51C8
  c->r[24]=R16(c->r[19]+0x00000002u); // 801C51CC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C51D0
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 801C51D4
  goto L_801C51F4; // 801C51D8
L_801C51DC:;
  c->r[3]=R16(c->r[19]+0x00000004u); // 801C51DC
  c->r[26]=c->r[19]|c->r[19]; // 801C51E0
  c->r[25]=c->r[24]|c->r[24]; // 801C51E4
  c->r[4]=0u+0x00000000u; // 801C51E8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C51EC
  W16(c->r[19]+0x00000004u,c->r[0]); // 801C51F0
L_801C51F4:;
  c->r[3]=R16(c->r[26]+0x00000004u); // 801C51F4
  c->r[0]=rotl(c->r[17],4)&0x00000FF0u; // 801C51F8
  cmpu(c,0,c->r[17],0x00000004u); // 801C51FC
  c->r[3]=c->r[26]+c->r[3]; // 801C5200
  c->r[0]=c->r[0]|c->r[30]; // 801C5204
  W8(c->r[3]+0x00000008u,c->r[0]); // 801C5208
  c->r[3]=c->r[3]+0x00000009u; // 801C520C
  if (!crb(c,2)) { goto L_801C5228; } // 801C5210
  cmps(c,0,(int32_t)c->r[18],0); // 801C5214
  if (crb(c,2)) { goto L_801C5228; } // 801C5218
  W8(c->r[3]+0x00000000u,c->r[18]); // 801C521C
  c->r[25]=0u+0x00000001u; // 801C5220
  c->r[24]=0u+0x00000001u; // 801C5224
L_801C5228:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C5228
  if (crb(c,2)) { goto L_801C5260; } // 801C522C
  c->r[0]=R16(c->r[19]+0x00000004u); // 801C5230
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 801C5234
  c->r[4]=c->r[19]+c->r[0]; // 801C5238
  c->r[4]=c->r[4]+0x00000008u; // 801C523C
  c->lr=0x801C5244u; f_80004338(c); // 801C5240
  c->r[3]=R16(c->r[19]+0x00000004u); // 801C5244
  c->r[0]=R16(c->r[19]+0x00000002u); // 801C5248
  c->r[3]=c->r[3]+c->r[25]; // 801C524C
  c->r[0]=c->r[0]-c->r[25]; // 801C5250
  W16(c->r[19]+0x00000004u,c->r[3]); // 801C5254
  W16(c->r[19]+0x00000002u,c->r[0]); // 801C5258
  goto L_801C5288; // 801C525C
L_801C5260:;
  cmpu(c,0,c->r[21],0x00000001u); // 801C5260
  if (!crb(c,2)) { goto L_801C5274; } // 801C5264
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 801C5268
  W8(c->r[3]+c->r[0],c->r[29]); // 801C526C
  goto L_801C5288; // 801C5270
L_801C5274:;
  cmpu(c,0,c->r[21],0x00000002u); // 801C5274
  if (!crb(c,2)) { goto L_801C5288; } // 801C5278
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 801C527C
  {uint32_t ea=c->r[3]+c->r[0]; W8(ea,c->r[29]); c->r[3]=ea;} // 801C5280
  W8(c->r[3]+0x00000001u,c->r[28]); // 801C5284
L_801C5288:;
  c->r[3]=c->r[25]+c->r[21]; // 801C5288
  c->r[24]=c->r[24]-c->r[25]; // 801C528C
  c->r[0]=c->r[3]+0x00000001u; // 801C5290
  W16(c->r[26]+0x00000002u,c->r[0]); // 801C5294
  c->r[0]=R8(c->r[27]+0x00000011u); // 801C5298
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801C529C
  if (!crb(c,2)) { goto L_801C52B8; } // 801C52A0
  c->r[3]=c->r[23]|c->r[23]; // 801C52A4
  c->r[4]=c->r[26]|c->r[26]; // 801C52A8
  c->lr=0x801C52B0u; f_801C5D00(c); // 801C52AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C52B0
  if (!crb(c,2)) { goto L_801C52C0; } // 801C52B4
L_801C52B8:;
  c->r[3]=0u+0x00000008u; // 801C52B8
  goto L_801C5300; // 801C52BC
L_801C52C0:;
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801C52C0
  if (crb(c,2)) { goto L_801C52D0; } // 801C52C4
  c->r[17]=0u+0x0000000Bu; // 801C52C8
  goto L_801C52EC; // 801C52CC
L_801C52D0:;
  c->r[3]=R16(c->r[27]+0x00000018u); // 801C52D0
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 801C52D4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C52D8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C52DC
  if (!crb(c,2)) { goto L_801C52EC; } // 801C52E0
  c->r[17]=0u+0x0000000Bu; // 801C52E4
  c->r[20]=0u+0x00000001u; // 801C52E8
L_801C52EC:;
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801C52EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C514C; } // 801C52F0
  cmps(c,0,(int32_t)c->r[20],0); // 801C52F4
  if (!crb(c,2)) { IRQCHK(c); goto L_801C514C; } // 801C52F8
  c->r[3]=0u+0x00000000u; // 801C52FC
L_801C5300:;
  c->r[11]=c->r[1]+0x00000050u; // 801C5300
  c->lr=0x801C5308u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5304
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C5308
  c->lr=c->r[0]; // 801C530C
  c->r[1]=c->r[1]+0x00000050u; // 801C5310
  return; // 801C5314
}

// hidh_conn_initiate
void f_801C5318(Ctx* __restrict c) {
  trace_call(0x801C5318u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5318
  c->r[0]=c->lr; // 801C531C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5320
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801C5324
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5328
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C532C
  c->r[30]=0u+0x803D0000u; // 801C5330
  c->r[30]=c->r[30]+0xFFFFADD8u; // 801C5334
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5338
  c->r[29]=c->r[30]+c->r[0]; // 801C533C
  c->r[0]=R8(c->r[29]+0x00000010u); // 801C5340
  cmps(c,0,(int32_t)c->r[0],0); // 801C5344
  if (crb(c,2)) { goto L_801C5354; } // 801C5348
  c->r[3]=0u+0x00000009u; // 801C534C
  goto L_801C53F8; // 801C5350
L_801C5354:;
  c->r[5]=0u+0x00000000u; // 801C5354
  c->r[0]=0u+0x00000100u; // 801C5358
  W16(c->r[29]+0x00000014u,c->r[5]); // 801C535C
  c->r[31]=0u+0x00000001u; // 801C5360
  c->r[4]=c->r[29]+0x00000001u; // 801C5364
  c->r[3]=0u+0x00000011u; // 801C5368
  W16(c->r[29]+0x00000016u,c->r[5]); // 801C536C
  W16(c->r[29]+0x0000001Au,c->r[0]); // 801C5370
  W8(c->r[29]+0x00000011u,c->r[31]); // 801C5374
  c->lr=0x801C537Cu; f_801C566C(c); // 801C5378
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801C537C
  W16(c->r[29]+0x00000014u,c->r[3]); // 801C5380
  if (!crb(c,2)) { goto L_801C53F0; } // 801C5384
  c->r[0]=R8(c->r[30]+0x00000401u); // 801C5388
  cmpu(c,0,c->r[0],0x00000002u); // 801C538C
  if (crb(c,0)) { goto L_801C53A8; } // 801C5390
  c->r[3]=0u+0x001E0000u; // 801C5394
  c->r[4]=0u+0x80330000u; // 801C5398
  c->r[3]=c->r[3]+0x00000001u; // 801C539C
  c->r[4]=c->r[4]+0x00004064u; // 801C53A0
  c->lr=0x801C53A8u; f_801ACB20(c); // 801C53A4
L_801C53A8:;
  c->r[5]=0u+0x803D0000u; // 801C53A8
  c->r[3]=0u+0x4EC50000u; // 801C53AC
  c->r[5]=c->r[5]+0xFFFFADD8u; // 801C53B0
  c->r[4]=0u+0x00000001u; // 801C53B4
  c->r[0]=c->r[29]-c->r[5]; // 801C53B8
  c->r[7]=c->r[3]+0xFFFFEC4Fu; // 801C53BC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[0])>>32); // 801C53C0
  c->r[12]=R32(c->r[5]+0x00000340u); // 801C53C4
  c->r[5]=0u+0x0000000Eu; // 801C53C8
  c->r[6]=0u+0x00000000u; // 801C53CC
  c->r[0]=sraw(c,c->r[0],4); // 801C53D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C53D4
  c->r[0]=c->r[0]+c->r[3]; // 801C53D8
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[0])>>32); // 801C53DC
  c->r[3]=rotl(c->r[0],28)&0x000000FFu; // 801C53E0
  c->ctr=c->r[12]; // 801C53E4
  if (true) { c->lr=0x801C53ECu; dispatch(c,c->ctr); } // 801C53E8
  goto L_801C53F4; // 801C53EC
L_801C53F0:;
  W8(c->r[29]+0x00000010u,c->r[31]); // 801C53F0
L_801C53F4:;
  c->r[3]=0u+0x00000000u; // 801C53F4
L_801C53F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C53F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C53FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5400
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5404
  c->lr=c->r[0]; // 801C5408
  c->r[1]=c->r[1]+0x00000020u; // 801C540C
  return; // 801C5410
}

// hidh_conn_dereg
void f_801C5414(Ctx* __restrict c) {
  trace_call(0x801C5414u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5414
  c->r[0]=c->lr; // 801C5418
  c->r[3]=0u+0x00000011u; // 801C541C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5420
  c->lr=0x801C5428u; f_801C55DC(c); // 801C5424
  c->r[3]=0u+0x00000013u; // 801C5428
  c->lr=0x801C5430u; f_801C55DC(c); // 801C542C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5430
  c->lr=c->r[0]; // 801C5434
  c->r[1]=c->r[1]+0x00000010u; // 801C5438
  return; // 801C543C
}

// L2CA_Register
void f_801C5440(Ctx* __restrict c) {
  trace_call(0x801C5440u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5440
  c->r[0]=c->lr; // 801C5444
  c->r[5]=0u+0x803D0000u; // 801C5448
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C544C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5450
  c->r[31]=0u+0x80330000u; // 801C5454
  c->r[31]=c->r[31]+0x000042E8u; // 801C5458
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C545C
  c->r[30]=c->r[4]|c->r[4]; // 801C5460
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5464
  c->r[29]=c->r[3]|c->r[3]; // 801C5468
  c->r[0]=R8(c->r[5]+0xFFFFB1E0u); // 801C546C
  cmpu(c,0,c->r[0],0x00000003u); // 801C5470
  if (crb(c,0)) { goto L_801C548C; } // 801C5474
  c->r[3]=0u+0x00080000u; // 801C5478
  c->r[5]=c->r[29]|c->r[29]; // 801C547C
  c->r[3]=c->r[3]+0x00000002u; // 801C5480
  c->r[4]=c->r[31]+0x00000000u; // 801C5484
  c->lr=0x801C548Cu; f_801ACB38(c); // 801C5488
L_801C548C:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801C548C
  cmps(c,0,(int32_t)c->r[0],0); // 801C5490
  if (crb(c,2)) { goto L_801C54BC; } // 801C5494
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801C5498
  cmps(c,0,(int32_t)c->r[0],0); // 801C549C
  if (crb(c,2)) { goto L_801C54BC; } // 801C54A0
  c->r[0]=R32(c->r[30]+0x00000020u); // 801C54A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C54A8
  if (crb(c,2)) { goto L_801C54BC; } // 801C54AC
  c->r[0]=R32(c->r[30]+0x00000014u); // 801C54B0
  cmps(c,0,(int32_t)c->r[0],0); // 801C54B4
  if (!crb(c,2)) { goto L_801C54E4; } // 801C54B8
L_801C54BC:;
  c->r[3]=0u+0x803D0000u; // 801C54BC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C54C0
  cmpu(c,0,c->r[0],0x00000001u); // 801C54C4
  if (crb(c,0)) { goto L_801C54DC; } // 801C54C8
  c->r[5]=c->r[29]|c->r[29]; // 801C54CC
  c->r[4]=c->r[31]+0x00000030u; // 801C54D0
  c->r[3]=0u+0x00080000u; // 801C54D4
  c->lr=0x801C54DCu; f_801ACB38(c); // 801C54D8
L_801C54DC:;
  c->r[3]=0u+0x00000000u; // 801C54DC
  goto L_801C55C0; // 801C54E0
L_801C54E4:;
  c->r[0]=c->r[29]&0x00000101u; cr0(c,c->r[0]); // 801C54E4
  cmps(c,0,(int32_t)c->r[0],1); // 801C54E8
  if (crb(c,2)) { goto L_801C5518; } // 801C54EC
  c->r[3]=0u+0x803D0000u; // 801C54F0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C54F4
  cmpu(c,0,c->r[0],0x00000001u); // 801C54F8
  if (crb(c,0)) { goto L_801C5510; } // 801C54FC
  c->r[5]=c->r[29]|c->r[29]; // 801C5500
  c->r[4]=c->r[31]+0x00000058u; // 801C5504
  c->r[3]=0u+0x00080000u; // 801C5508
  c->lr=0x801C5510u; f_801ACB38(c); // 801C550C
L_801C5510:;
  c->r[3]=0u+0x00000000u; // 801C5510
  goto L_801C55C0; // 801C5514
L_801C5518:;
  c->r[3]=c->r[29]|c->r[29]; // 801C5518
  c->lr=0x801C5520u; f_801CAE0C(c); // 801C551C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5520
  c->r[5]=c->r[3]|c->r[3]; // 801C5524
  if (!crb(c,2)) { goto L_801C556C; } // 801C5528
  c->r[3]=c->r[29]|c->r[29]; // 801C552C
  c->lr=0x801C5534u; f_801CADB0(c); // 801C5530
  cmps(c,0,(int32_t)c->r[3],0); // 801C5534
  c->r[5]=c->r[3]|c->r[3]; // 801C5538
  if (!crb(c,2)) { goto L_801C556C; } // 801C553C
  c->r[3]=0u+0x803D0000u; // 801C5540
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5544
  cmpu(c,0,c->r[0],0x00000002u); // 801C5548
  if (crb(c,0)) { goto L_801C5564; } // 801C554C
  c->r[3]=0u+0x00080000u; // 801C5550
  c->r[5]=c->r[29]|c->r[29]; // 801C5554
  c->r[3]=c->r[3]+0x00000001u; // 801C5558
  c->r[4]=c->r[31]+0x00000080u; // 801C555C
  c->lr=0x801C5564u; f_801ACB38(c); // 801C5560
L_801C5564:;
  c->r[3]=0u+0x00000000u; // 801C5564
  goto L_801C55C0; // 801C5568
L_801C556C:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C556C
  c->r[3]=0u+0x00000001u; // 801C5570
  c->r[0]=R32(c->r[30]+0x00000004u); // 801C5574
  W32(c->r[5]+0x00000004u,c->r[4]); // 801C5578
  W32(c->r[5]+0x00000008u,c->r[0]); // 801C557C
  c->r[4]=R32(c->r[30]+0x00000008u); // 801C5580
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801C5584
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801C5588
  W32(c->r[5]+0x00000010u,c->r[0]); // 801C558C
  c->r[4]=R32(c->r[30]+0x00000010u); // 801C5590
  c->r[0]=R32(c->r[30]+0x00000014u); // 801C5594
  W32(c->r[5]+0x00000014u,c->r[4]); // 801C5598
  W32(c->r[5]+0x00000018u,c->r[0]); // 801C559C
  c->r[4]=R32(c->r[30]+0x00000018u); // 801C55A0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C55A4
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801C55A8
  W32(c->r[5]+0x00000020u,c->r[0]); // 801C55AC
  c->r[4]=R32(c->r[30]+0x00000020u); // 801C55B0
  c->r[0]=R32(c->r[30]+0x00000024u); // 801C55B4
  W32(c->r[5]+0x00000024u,c->r[4]); // 801C55B8
  W32(c->r[5]+0x00000028u,c->r[0]); // 801C55BC
L_801C55C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C55C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C55C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C55C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C55CC
  c->lr=c->r[0]; // 801C55D0
  c->r[1]=c->r[1]+0x00000020u; // 801C55D4
  return; // 801C55D8
}

// L2CA_Deregister
void f_801C55DC(Ctx* __restrict c) {
  trace_call(0x801C55DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C55DC
  c->r[0]=c->lr; // 801C55E0
  c->r[4]=0u+0x803D0000u; // 801C55E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C55E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C55EC
  c->r[31]=c->r[3]|c->r[3]; // 801C55F0
  c->r[0]=R8(c->r[4]+0xFFFFB1E0u); // 801C55F4
  cmpu(c,0,c->r[0],0x00000003u); // 801C55F8
  if (crb(c,0)) { goto L_801C5618; } // 801C55FC
  c->r[3]=0u+0x00080000u; // 801C5600
  c->r[4]=0u+0x80330000u; // 801C5604
  c->r[5]=c->r[31]|c->r[31]; // 801C5608
  c->r[3]=c->r[3]+0x00000002u; // 801C560C
  c->r[4]=c->r[4]+0x00004390u; // 801C5610
  c->lr=0x801C5618u; f_801ACB38(c); // 801C5614
L_801C5618:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5618
  c->lr=0x801C5620u; f_801CAE0C(c); // 801C561C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5620
  if (crb(c,2)) { goto L_801C5630; } // 801C5624
  c->lr=0x801C562Cu; f_801CADFC(c); // 801C5628
  goto L_801C5658; // 801C562C
L_801C5630:;
  c->r[3]=0u+0x803D0000u; // 801C5630
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5634
  cmpu(c,0,c->r[0],0x00000002u); // 801C5638
  if (crb(c,0)) { goto L_801C5658; } // 801C563C
  c->r[3]=0u+0x00080000u; // 801C5640
  c->r[4]=0u+0x80330000u; // 801C5644
  c->r[5]=c->r[31]|c->r[31]; // 801C5648
  c->r[3]=c->r[3]+0x00000001u; // 801C564C
  c->r[4]=c->r[4]+0x000043C4u; // 801C5650
  c->lr=0x801C5658u; f_801ACB38(c); // 801C5654
L_801C5658:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C565C
  c->lr=c->r[0]; // 801C5660
  c->r[1]=c->r[1]+0x00000010u; // 801C5664
  return; // 801C5668
}

// L2CA_ConnectReq
void f_801C566C(Ctx* __restrict c) {
  trace_call(0x801C566Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C566C
  c->r[0]=c->lr; // 801C5670
  c->r[5]=0u+0x803D0000u; // 801C5674
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C567C
  c->r[31]=0u+0x80330000u; // 801C5680
  c->r[31]=c->r[31]+0x000042E8u; // 801C5684
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5688
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C568C
  c->r[29]=c->r[3]|c->r[3]; // 801C5690
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C5694
  c->r[28]=c->r[4]|c->r[4]; // 801C5698
  c->r[0]=R8(c->r[5]+0xFFFFB1E0u); // 801C569C
  cmpu(c,0,c->r[0],0x00000003u); // 801C56A0
  if (crb(c,0)) { goto L_801C56BC; } // 801C56A4
  c->r[3]=0u+0x00080000u; // 801C56A8
  c->r[5]=c->r[29]|c->r[29]; // 801C56AC
  c->r[3]=c->r[3]+0x00000002u; // 801C56B0
  c->r[4]=c->r[31]+0x00000110u; // 801C56B4
  c->lr=0x801C56BCu; f_801ACB38(c); // 801C56B8
L_801C56BC:;
  c->r[3]=0u+0x803D0000u; // 801C56BC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C56C0
  cmpu(c,0,c->r[0],0x00000003u); // 801C56C4
  if (crb(c,0)) { goto L_801C56F4; } // 801C56C8
  c->r[3]=0u+0x00080000u; // 801C56CC
  c->r[5]=R8(c->r[28]+0x00000000u); // 801C56D0
  c->r[6]=R8(c->r[28]+0x00000001u); // 801C56D4
  c->r[3]=c->r[3]+0x00000002u; // 801C56D8
  c->r[7]=R8(c->r[28]+0x00000002u); // 801C56DC
  c->r[4]=c->r[31]+0x00000130u; // 801C56E0
  c->r[8]=R8(c->r[28]+0x00000003u); // 801C56E4
  c->r[9]=R8(c->r[28]+0x00000004u); // 801C56E8
  c->r[10]=R8(c->r[28]+0x00000005u); // 801C56EC
  c->lr=0x801C56F4u; f_801ACBB0(c); // 801C56F0
L_801C56F4:;
  c->lr=0x801C56F8u; f_801B56E0(c); // 801C56F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C56F8
  if (!crb(c,2)) { goto L_801C5728; } // 801C56FC
  c->r[3]=0u+0x803D0000u; // 801C5700
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5704
  cmpu(c,0,c->r[0],0x00000002u); // 801C5708
  if (crb(c,0)) { goto L_801C5720; } // 801C570C
  c->r[3]=0u+0x00080000u; // 801C5710
  c->r[4]=c->r[31]+0x00000168u; // 801C5714
  c->r[3]=c->r[3]+0x00000001u; // 801C5718
  c->lr=0x801C5720u; f_801ACB20(c); // 801C571C
L_801C5720:;
  c->r[3]=0u+0x00000000u; // 801C5720
  goto L_801C5880; // 801C5724
L_801C5728:;
  c->r[3]=c->r[29]|c->r[29]; // 801C5728
  c->lr=0x801C5730u; f_801CAE0C(c); // 801C572C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5730
  c->r[30]=c->r[3]|c->r[3]; // 801C5734
  if (!crb(c,2)) { goto L_801C5768; } // 801C5738
  c->r[3]=0u+0x803D0000u; // 801C573C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5740
  cmpu(c,0,c->r[0],0x00000002u); // 801C5744
  if (crb(c,0)) { goto L_801C5760; } // 801C5748
  c->r[3]=0u+0x00080000u; // 801C574C
  c->r[5]=c->r[29]|c->r[29]; // 801C5750
  c->r[3]=c->r[3]+0x00000001u; // 801C5754
  c->r[4]=c->r[31]+0x0000018Cu; // 801C5758
  c->lr=0x801C5760u; f_801ACB38(c); // 801C575C
L_801C5760:;
  c->r[3]=0u+0x00000000u; // 801C5760
  goto L_801C5880; // 801C5764
L_801C5768:;
  c->r[3]=c->r[28]|c->r[28]; // 801C5768
  c->lr=0x801C5770u; f_801C9878(c); // 801C576C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5770
  c->r[29]=c->r[3]|c->r[3]; // 801C5774
  if (!crb(c,2)) { goto L_801C57CC; } // 801C5778
  c->r[3]=c->r[28]|c->r[28]; // 801C577C
  c->lr=0x801C5784u; f_801C96A4(c); // 801C5780
  cmps(c,0,(int32_t)c->r[3],0); // 801C5784
  c->r[29]=c->r[3]|c->r[3]; // 801C5788
  if (!crb(c,2)) { goto L_801C57B8; } // 801C578C
  c->r[3]=0u+0x803D0000u; // 801C5790
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5794
  cmpu(c,0,c->r[0],0x00000002u); // 801C5798
  if (crb(c,0)) { goto L_801C57B0; } // 801C579C
  c->r[3]=0u+0x00080000u; // 801C57A0
  c->r[4]=c->r[31]+0x000001BCu; // 801C57A4
  c->r[3]=c->r[3]+0x00000001u; // 801C57A8
  c->lr=0x801C57B0u; f_801ACB20(c); // 801C57AC
L_801C57B0:;
  c->r[3]=0u+0x00000000u; // 801C57B0
  goto L_801C5880; // 801C57B4
L_801C57B8:;
  c->lr=0x801C57BCu; f_801CB208(c); // 801C57B8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C57BC
  if (!crb(c,2)) { goto L_801C57CC; } // 801C57C0
  c->r[3]=0u+0x00000000u; // 801C57C4
  goto L_801C5880; // 801C57C8
L_801C57CC:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C57CC
  cmps(c,0,(int32_t)c->r[0],5); // 801C57D0
  if (!crb(c,2)) { goto L_801C5800; } // 801C57D4
  c->r[3]=0u+0x803D0000u; // 801C57D8
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C57DC
  cmpu(c,0,c->r[0],0x00000003u); // 801C57E0
  if (crb(c,0)) { goto L_801C57F8; } // 801C57E4
  c->r[3]=0u+0x00080000u; // 801C57E8
  c->r[4]=c->r[31]+0x000001E0u; // 801C57EC
  c->r[3]=c->r[3]+0x00000002u; // 801C57F0
  c->lr=0x801C57F8u; f_801ACB20(c); // 801C57F4
L_801C57F8:;
  c->r[3]=0u+0x00000000u; // 801C57F8
  goto L_801C5880; // 801C57FC
L_801C5800:;
  c->r[3]=c->r[29]|c->r[29]; // 801C5800
  c->lr=0x801C5808u; f_801CAAA4(c); // 801C5804
  cmps(c,0,(int32_t)c->r[3],0); // 801C5808
  c->r[28]=c->r[3]|c->r[3]; // 801C580C
  if (!crb(c,2)) { goto L_801C583C; } // 801C5810
  c->r[3]=0u+0x803D0000u; // 801C5814
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5818
  cmpu(c,0,c->r[0],0x00000002u); // 801C581C
  if (crb(c,0)) { goto L_801C5834; } // 801C5820
  c->r[3]=0u+0x00080000u; // 801C5824
  c->r[4]=c->r[31]+0x00000218u; // 801C5828
  c->r[3]=c->r[3]+0x00000001u; // 801C582C
  c->lr=0x801C5834u; f_801ACB20(c); // 801C5830
L_801C5834:;
  c->r[3]=0u+0x00000000u; // 801C5834
  goto L_801C5880; // 801C5838
L_801C583C:;
  W32(c->r[3]+0x00000030u,c->r[30]); // 801C583C
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C5840
  cmps(c,0,(int32_t)c->r[0],4); // 801C5844
  if (!crb(c,2)) { goto L_801C5858; } // 801C5848
  c->r[4]=0u+0x00000014u; // 801C584C
  c->r[5]=0u+0x00000000u; // 801C5850
  c->lr=0x801C5858u; f_801C600C(c); // 801C5854
L_801C5858:;
  c->r[3]=0u+0x803D0000u; // 801C5858
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C585C
  cmpu(c,0,c->r[0],0x00000003u); // 801C5860
  if (crb(c,0)) { goto L_801C587C; } // 801C5864
  c->r[3]=0u+0x00080000u; // 801C5868
  c->r[5]=R16(c->r[28]+0x00000014u); // 801C586C
  c->r[3]=c->r[3]+0x00000002u; // 801C5870
  c->r[4]=c->r[31]+0x0000023Cu; // 801C5874
  c->lr=0x801C587Cu; f_801ACB38(c); // 801C5878
L_801C587C:;
  c->r[3]=R16(c->r[28]+0x00000014u); // 801C587C
L_801C5880:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5880
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5884
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5888
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C588C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C5890
  c->lr=c->r[0]; // 801C5894
  c->r[1]=c->r[1]+0x00000020u; // 801C5898
  return; // 801C589C
}

// L2CA_ConnectRsp
void f_801C58A0(Ctx* __restrict c) {
  trace_call(0x801C58A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C58A0
  c->r[0]=c->lr; // 801C58A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C58A8
  c->r[11]=c->r[1]+0x00000030u; // 801C58AC
  c->lr=0x801C58B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C58B0
  c->r[8]=0u+0x803D0000u; // 801C58B4
  c->r[31]=0u+0x80330000u; // 801C58B8
  c->r[0]=R8(c->r[8]+0xFFFFB1E0u); // 801C58BC
  c->r[26]=c->r[3]|c->r[3]; // 801C58C0
  c->r[27]=c->r[4]|c->r[4]; // 801C58C4
  c->r[28]=c->r[5]|c->r[5]; // 801C58C8
  cmpu(c,0,c->r[0],0x00000003u); // 801C58CC
  c->r[29]=c->r[6]|c->r[6]; // 801C58D0
  c->r[30]=c->r[7]|c->r[7]; // 801C58D4
  c->r[31]=c->r[31]+0x000042E8u; // 801C58D8
  if (crb(c,0)) { goto L_801C58F0; } // 801C58DC
  c->r[3]=0u+0x00080000u; // 801C58E0
  c->r[4]=c->r[31]+0x0000026Cu; // 801C58E4
  c->r[3]=c->r[3]+0x00000002u; // 801C58E8
  c->lr=0x801C58F0u; f_801ACB68(c); // 801C58EC
L_801C58F0:;
  c->r[3]=0u+0x803D0000u; // 801C58F0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C58F4
  cmpu(c,0,c->r[0],0x00000003u); // 801C58F8
  if (crb(c,0)) { goto L_801C5928; } // 801C58FC
  c->r[3]=0u+0x00080000u; // 801C5900
  c->r[5]=R8(c->r[26]+0x00000000u); // 801C5904
  c->r[6]=R8(c->r[26]+0x00000001u); // 801C5908
  c->r[3]=c->r[3]+0x00000002u; // 801C590C
  c->r[7]=R8(c->r[26]+0x00000002u); // 801C5910
  c->r[4]=c->r[31]+0x000002A4u; // 801C5914
  c->r[8]=R8(c->r[26]+0x00000003u); // 801C5918
  c->r[9]=R8(c->r[26]+0x00000004u); // 801C591C
  c->r[10]=R8(c->r[26]+0x00000005u); // 801C5920
  c->lr=0x801C5928u; f_801ACBB0(c); // 801C5924
L_801C5928:;
  c->r[3]=c->r[26]|c->r[26]; // 801C5928
  c->lr=0x801C5930u; f_801C9878(c); // 801C592C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5930
  if (!crb(c,2)) { goto L_801C5960; } // 801C5934
  c->r[3]=0u+0x803D0000u; // 801C5938
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C593C
  cmpu(c,0,c->r[0],0x00000002u); // 801C5940
  if (crb(c,0)) { goto L_801C5958; } // 801C5944
  c->r[3]=0u+0x00080000u; // 801C5948
  c->r[4]=c->r[31]+0x000002DCu; // 801C594C
  c->r[3]=c->r[3]+0x00000001u; // 801C5950
  c->lr=0x801C5958u; f_801ACB20(c); // 801C5954
L_801C5958:;
  c->r[3]=0u+0x00000000u; // 801C5958
  goto L_801C5A18; // 801C595C
L_801C5960:;
  c->r[4]=c->r[28]|c->r[28]; // 801C5960
  c->lr=0x801C5968u; f_801CAD54(c); // 801C5964
  cmps(c,0,(int32_t)c->r[3],0); // 801C5968
  if (!crb(c,2)) { goto L_801C5998; } // 801C596C
  c->r[3]=0u+0x803D0000u; // 801C5970
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5974
  cmpu(c,0,c->r[0],0x00000002u); // 801C5978
  if (crb(c,0)) { goto L_801C5990; } // 801C597C
  c->r[3]=0u+0x00080000u; // 801C5980
  c->r[4]=c->r[31]+0x00000300u; // 801C5984
  c->r[3]=c->r[3]+0x00000001u; // 801C5988
  c->lr=0x801C5990u; f_801ACB20(c); // 801C598C
L_801C5990:;
  c->r[3]=0u+0x00000000u; // 801C5990
  goto L_801C5A18; // 801C5994
L_801C5998:;
  c->r[5]=R8(c->r[3]+0x00000036u); // 801C5998
  cmpu(c,0,c->r[5],c->r[27]); // 801C599C
  if (crb(c,2)) { goto L_801C59D0; } // 801C59A0
  c->r[3]=0u+0x803D0000u; // 801C59A4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C59A8
  cmpu(c,0,c->r[0],0x00000002u); // 801C59AC
  if (crb(c,0)) { goto L_801C59C8; } // 801C59B0
  c->r[3]=0u+0x00080000u; // 801C59B4
  c->r[6]=c->r[27]|c->r[27]; // 801C59B8
  c->r[4]=c->r[31]+0x00000324u; // 801C59BC
  c->r[3]=c->r[3]+0x00000001u; // 801C59C0
  c->lr=0x801C59C8u; f_801ACB50(c); // 801C59C4
L_801C59C8:;
  c->r[3]=0u+0x00000000u; // 801C59C8
  goto L_801C5A18; // 801C59CC
L_801C59D0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C59D0
  if (!crb(c,2)) { goto L_801C59E8; } // 801C59D4
  c->r[4]=0u+0x00000015u; // 801C59D8
  c->r[5]=0u+0x00000000u; // 801C59DC
  c->lr=0x801C59E4u; f_801C600C(c); // 801C59E0
  goto L_801C5A14; // 801C59E4
L_801C59E8:;
  cmpu(c,0,c->r[29],0x00000001u); // 801C59E8
  W16(c->r[1]+0x00000012u,c->r[29]); // 801C59EC
  W16(c->r[1]+0x00000014u,c->r[30]); // 801C59F0
  if (!crb(c,2)) { goto L_801C5A08; } // 801C59F4
  c->r[5]=c->r[1]+0x00000008u; // 801C59F8
  c->r[4]=0u+0x00000015u; // 801C59FC
  c->lr=0x801C5A04u; f_801C600C(c); // 801C5A00
  goto L_801C5A14; // 801C5A04
L_801C5A08:;
  c->r[5]=c->r[1]+0x00000008u; // 801C5A08
  c->r[4]=0u+0x00000016u; // 801C5A0C
  c->lr=0x801C5A14u; f_801C600C(c); // 801C5A10
L_801C5A14:;
  c->r[3]=0u+0x00000001u; // 801C5A14
L_801C5A18:;
  c->r[11]=c->r[1]+0x00000030u; // 801C5A18
  c->lr=0x801C5A20u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5A1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C5A20
  c->lr=c->r[0]; // 801C5A24
  c->r[1]=c->r[1]+0x00000030u; // 801C5A28
  return; // 801C5A2C
}

// L2CA_ConfigReq
void f_801C5A30(Ctx* __restrict c) {
  trace_call(0x801C5A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5A30
  c->r[0]=c->lr; // 801C5A34
  c->r[5]=0u+0x803D0000u; // 801C5A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5A40
  c->r[31]=c->r[4]|c->r[4]; // 801C5A44
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C5A48
  c->r[30]=c->r[3]|c->r[3]; // 801C5A4C
  c->r[0]=R8(c->r[5]+0xFFFFB1E0u); // 801C5A50
  cmpu(c,0,c->r[0],0x00000003u); // 801C5A54
  if (crb(c,0)) { goto L_801C5A74; } // 801C5A58
  c->r[3]=0u+0x00080000u; // 801C5A5C
  c->r[4]=0u+0x80330000u; // 801C5A60
  c->r[5]=c->r[30]|c->r[30]; // 801C5A64
  c->r[3]=c->r[3]+0x00000002u; // 801C5A68
  c->r[4]=c->r[4]+0x00004640u; // 801C5A6C
  c->lr=0x801C5A74u; f_801ACB38(c); // 801C5A70
L_801C5A74:;
  c->r[4]=c->r[30]|c->r[30]; // 801C5A74
  c->r[3]=0u+0x00000000u; // 801C5A78
  c->lr=0x801C5A80u; f_801CAD54(c); // 801C5A7C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5A80
  if (!crb(c,2)) { goto L_801C5AB8; } // 801C5A84
  c->r[3]=0u+0x803D0000u; // 801C5A88
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5A8C
  cmpu(c,0,c->r[0],0x00000002u); // 801C5A90
  if (crb(c,0)) { goto L_801C5AB0; } // 801C5A94
  c->r[3]=0u+0x00080000u; // 801C5A98
  c->r[4]=0u+0x80330000u; // 801C5A9C
  c->r[5]=c->r[30]|c->r[30]; // 801C5AA0
  c->r[3]=c->r[3]+0x00000001u; // 801C5AA4
  c->r[4]=c->r[4]+0x00004660u; // 801C5AA8
  c->lr=0x801C5AB0u; f_801ACB38(c); // 801C5AAC
L_801C5AB0:;
  c->r[3]=0u+0x00000000u; // 801C5AB0
  goto L_801C5AD0; // 801C5AB4
L_801C5AB8:;
  c->r[0]=0u+0x00000000u; // 801C5AB8
  c->r[5]=c->r[31]|c->r[31]; // 801C5ABC
  W8(c->r[31]+0x00000024u,c->r[0]); // 801C5AC0
  c->r[4]=0u+0x00000017u; // 801C5AC4
  c->lr=0x801C5ACCu; f_801C600C(c); // 801C5AC8
  c->r[3]=0u+0x00000001u; // 801C5ACC
L_801C5AD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5AD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5AD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C5AD8
  c->lr=c->r[0]; // 801C5ADC
  c->r[1]=c->r[1]+0x00000010u; // 801C5AE0
  return; // 801C5AE4
}

// L2CA_ConfigRsp
void f_801C5AE8(Ctx* __restrict c) {
  trace_call(0x801C5AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5AE8
  c->r[0]=c->lr; // 801C5AEC
  c->r[5]=0u+0x803D0000u; // 801C5AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5AF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5AF8
  c->r[31]=c->r[4]|c->r[4]; // 801C5AFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C5B00
  c->r[30]=c->r[3]|c->r[3]; // 801C5B04
  c->r[0]=R8(c->r[5]+0xFFFFB1E0u); // 801C5B08
  cmpu(c,0,c->r[0],0x00000003u); // 801C5B0C
  if (crb(c,0)) { goto L_801C5B30; } // 801C5B10
  c->r[3]=0u+0x00080000u; // 801C5B14
  c->r[4]=0u+0x80330000u; // 801C5B18
  c->r[6]=R16(c->r[31]+0x00000000u); // 801C5B1C
  c->r[5]=c->r[30]|c->r[30]; // 801C5B20
  c->r[3]=c->r[3]+0x00000002u; // 801C5B24
  c->r[4]=c->r[4]+0x0000468Cu; // 801C5B28
  c->lr=0x801C5B30u; f_801ACB50(c); // 801C5B2C
L_801C5B30:;
  c->r[4]=c->r[30]|c->r[30]; // 801C5B30
  c->r[3]=0u+0x00000000u; // 801C5B34
  c->lr=0x801C5B3Cu; f_801CAD54(c); // 801C5B38
  cmps(c,0,(int32_t)c->r[3],0); // 801C5B3C
  if (!crb(c,2)) { goto L_801C5B74; } // 801C5B40
  c->r[3]=0u+0x803D0000u; // 801C5B44
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5B48
  cmpu(c,0,c->r[0],0x00000002u); // 801C5B4C
  if (crb(c,0)) { goto L_801C5B6C; } // 801C5B50
  c->r[3]=0u+0x00080000u; // 801C5B54
  c->r[4]=0u+0x80330000u; // 801C5B58
  c->r[5]=c->r[30]|c->r[30]; // 801C5B5C
  c->r[3]=c->r[3]+0x00000001u; // 801C5B60
  c->r[4]=c->r[4]+0x000046B8u; // 801C5B64
  c->lr=0x801C5B6Cu; f_801ACB38(c); // 801C5B68
L_801C5B6C:;
  c->r[3]=0u+0x00000000u; // 801C5B6C
  goto L_801C5BA0; // 801C5B70
L_801C5B74:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 801C5B74
  cmps(c,0,(int32_t)c->r[0],0); // 801C5B78
  if (!crb(c,2)) { goto L_801C5B90; } // 801C5B7C
  c->r[5]=c->r[31]|c->r[31]; // 801C5B80
  c->r[4]=0u+0x00000018u; // 801C5B84
  c->lr=0x801C5B8Cu; f_801C600C(c); // 801C5B88
  goto L_801C5B9C; // 801C5B8C
L_801C5B90:;
  c->r[5]=c->r[31]|c->r[31]; // 801C5B90
  c->r[4]=0u+0x00000019u; // 801C5B94
  c->lr=0x801C5B9Cu; f_801C600C(c); // 801C5B98
L_801C5B9C:;
  c->r[3]=0u+0x00000001u; // 801C5B9C
L_801C5BA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5BA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C5BA8
  c->lr=c->r[0]; // 801C5BAC
  c->r[1]=c->r[1]+0x00000010u; // 801C5BB0
  return; // 801C5BB4
}

// L2CA_DisconnectReq
void f_801C5BB8(Ctx* __restrict c) {
  trace_call(0x801C5BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5BB8
  c->r[0]=c->lr; // 801C5BBC
  c->r[4]=0u+0x803D0000u; // 801C5BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5BC8
  c->r[31]=c->r[3]|c->r[3]; // 801C5BCC
  c->r[0]=R8(c->r[4]+0xFFFFB1E0u); // 801C5BD0
  cmpu(c,0,c->r[0],0x00000003u); // 801C5BD4
  if (crb(c,0)) { goto L_801C5BF4; } // 801C5BD8
  c->r[3]=0u+0x00080000u; // 801C5BDC
  c->r[4]=0u+0x80330000u; // 801C5BE0
  c->r[5]=c->r[31]|c->r[31]; // 801C5BE4
  c->r[3]=c->r[3]+0x00000002u; // 801C5BE8
  c->r[4]=c->r[4]+0x000046E4u; // 801C5BEC
  c->lr=0x801C5BF4u; f_801ACB38(c); // 801C5BF0
L_801C5BF4:;
  c->r[4]=c->r[31]|c->r[31]; // 801C5BF4
  c->r[3]=0u+0x00000000u; // 801C5BF8
  c->lr=0x801C5C00u; f_801CAD54(c); // 801C5BFC
  cmps(c,0,(int32_t)c->r[3],0); // 801C5C00
  if (!crb(c,2)) { goto L_801C5C38; } // 801C5C04
  c->r[3]=0u+0x803D0000u; // 801C5C08
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5C0C
  cmpu(c,0,c->r[0],0x00000002u); // 801C5C10
  if (crb(c,0)) { goto L_801C5C30; } // 801C5C14
  c->r[3]=0u+0x00080000u; // 801C5C18
  c->r[4]=0u+0x80330000u; // 801C5C1C
  c->r[5]=c->r[31]|c->r[31]; // 801C5C20
  c->r[3]=c->r[3]+0x00000001u; // 801C5C24
  c->r[4]=c->r[4]+0x00004708u; // 801C5C28
  c->lr=0x801C5C30u; f_801ACB38(c); // 801C5C2C
L_801C5C30:;
  c->r[3]=0u+0x00000000u; // 801C5C30
  goto L_801C5C48; // 801C5C34
L_801C5C38:;
  c->r[4]=0u+0x0000001Au; // 801C5C38
  c->r[5]=0u+0x00000000u; // 801C5C3C
  c->lr=0x801C5C44u; f_801C600C(c); // 801C5C40
  c->r[3]=0u+0x00000001u; // 801C5C44
L_801C5C48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5C4C
  c->lr=c->r[0]; // 801C5C50
  c->r[1]=c->r[1]+0x00000010u; // 801C5C54
  return; // 801C5C58
}

// L2CA_DisconnectRsp
void f_801C5C5C(Ctx* __restrict c) {
  trace_call(0x801C5C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5C5C
  c->r[0]=c->lr; // 801C5C60
  c->r[4]=0u+0x803D0000u; // 801C5C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5C6C
  c->r[31]=c->r[3]|c->r[3]; // 801C5C70
  c->r[0]=R8(c->r[4]+0xFFFFB1E0u); // 801C5C74
  cmpu(c,0,c->r[0],0x00000003u); // 801C5C78
  if (crb(c,0)) { goto L_801C5C98; } // 801C5C7C
  c->r[3]=0u+0x00080000u; // 801C5C80
  c->r[4]=0u+0x80330000u; // 801C5C84
  c->r[5]=c->r[31]|c->r[31]; // 801C5C88
  c->r[3]=c->r[3]+0x00000002u; // 801C5C8C
  c->r[4]=c->r[4]+0x00004734u; // 801C5C90
  c->lr=0x801C5C98u; f_801ACB38(c); // 801C5C94
L_801C5C98:;
  c->r[4]=c->r[31]|c->r[31]; // 801C5C98
  c->r[3]=0u+0x00000000u; // 801C5C9C
  c->lr=0x801C5CA4u; f_801CAD54(c); // 801C5CA0
  cmps(c,0,(int32_t)c->r[3],0); // 801C5CA4
  if (!crb(c,2)) { goto L_801C5CDC; } // 801C5CA8
  c->r[3]=0u+0x803D0000u; // 801C5CAC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5CB0
  cmpu(c,0,c->r[0],0x00000002u); // 801C5CB4
  if (crb(c,0)) { goto L_801C5CD4; } // 801C5CB8
  c->r[3]=0u+0x00080000u; // 801C5CBC
  c->r[4]=0u+0x80330000u; // 801C5CC0
  c->r[5]=c->r[31]|c->r[31]; // 801C5CC4
  c->r[3]=c->r[3]+0x00000001u; // 801C5CC8
  c->r[4]=c->r[4]+0x00004758u; // 801C5CCC
  c->lr=0x801C5CD4u; f_801ACB38(c); // 801C5CD0
L_801C5CD4:;
  c->r[3]=0u+0x00000000u; // 801C5CD4
  goto L_801C5CEC; // 801C5CD8
L_801C5CDC:;
  c->r[4]=0u+0x0000001Bu; // 801C5CDC
  c->r[5]=0u+0x00000000u; // 801C5CE0
  c->lr=0x801C5CE8u; f_801C600C(c); // 801C5CE4
  c->r[3]=0u+0x00000001u; // 801C5CE8
L_801C5CEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5CEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5CF0
  c->lr=c->r[0]; // 801C5CF4
  c->r[1]=c->r[1]+0x00000010u; // 801C5CF8
  return; // 801C5CFC
}

// L2CA_DataWrite
void f_801C5D00(Ctx* __restrict c) {
  trace_call(0x801C5D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5D00
  c->r[0]=c->lr; // 801C5D04
  c->r[5]=0u+0x803D0000u; // 801C5D08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5D0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5D10
  c->r[31]=0u+0x80330000u; // 801C5D14
  c->r[31]=c->r[31]+0x000042E8u; // 801C5D18
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5D1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5D20
  c->r[29]=c->r[4]|c->r[4]; // 801C5D24
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C5D28
  c->r[28]=c->r[3]|c->r[3]; // 801C5D2C
  c->r[0]=R8(c->r[5]+0xFFFFB1E0u); // 801C5D30
  cmpu(c,0,c->r[0],0x00000003u); // 801C5D34
  if (crb(c,0)) { goto L_801C5D54; } // 801C5D38
  c->r[3]=0u+0x00080000u; // 801C5D3C
  c->r[6]=R16(c->r[29]+0x00000002u); // 801C5D40
  c->r[5]=c->r[28]|c->r[28]; // 801C5D44
  c->r[4]=c->r[31]+0x0000049Cu; // 801C5D48
  c->r[3]=c->r[3]+0x00000002u; // 801C5D4C
  c->lr=0x801C5D54u; f_801ACB50(c); // 801C5D50
L_801C5D54:;
  c->r[4]=c->r[28]|c->r[28]; // 801C5D54
  c->r[3]=0u+0x00000000u; // 801C5D58
  c->lr=0x801C5D60u; f_801CAD54(c); // 801C5D5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5D60
  c->r[30]=c->r[3]|c->r[3]; // 801C5D64
  if (!crb(c,2)) { goto L_801C5DA0; } // 801C5D68
  c->r[3]=0u+0x803D0000u; // 801C5D6C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5D70
  cmpu(c,0,c->r[0],0x00000002u); // 801C5D74
  if (crb(c,0)) { goto L_801C5D90; } // 801C5D78
  c->r[3]=0u+0x00080000u; // 801C5D7C
  c->r[5]=c->r[28]|c->r[28]; // 801C5D80
  c->r[3]=c->r[3]+0x00000001u; // 801C5D84
  c->r[4]=c->r[31]+0x000004C4u; // 801C5D88
  c->lr=0x801C5D90u; f_801ACB38(c); // 801C5D8C
L_801C5D90:;
  c->r[3]=c->r[29]|c->r[29]; // 801C5D90
  c->lr=0x801C5D98u; f_801AA228(c); // 801C5D94
  c->r[3]=0u+0x00000000u; // 801C5D98
  goto L_801C5E04; // 801C5D9C
L_801C5DA0:;
  c->r[4]=R16(c->r[29]+0x00000002u); // 801C5DA0
  c->r[0]=R16(c->r[3]+0x0000003Au); // 801C5DA4
  cmpu(c,0,c->r[4],c->r[0]); // 801C5DA8
  if (crb(c,1)) { goto L_801C5DD8; } // 801C5DAC
  c->r[5]=c->r[29]|c->r[29]; // 801C5DB0
  c->r[4]=0u+0x0000001Du; // 801C5DB4
  c->lr=0x801C5DBCu; f_801C600C(c); // 801C5DB8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801C5DBC
  c->r[3]=R8(c->r[3]+0x00000041u); // 801C5DC0
  c->r[0]=0u-c->r[3]; // 801C5DC4
  c->r[0]=c->r[0]|c->r[3]; // 801C5DC8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C5DCC
  c->r[3]=c->r[3]+0x00000001u; // 801C5DD0
  goto L_801C5E04; // 801C5DD4
L_801C5DD8:;
  c->r[3]=0u+0x803D0000u; // 801C5DD8
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5DDC
  cmpu(c,0,c->r[0],0x00000002u); // 801C5DE0
  if (crb(c,0)) { goto L_801C5DF8; } // 801C5DE4
  c->r[3]=0u+0x00080000u; // 801C5DE8
  c->r[4]=c->r[31]+0x000004F0u; // 801C5DEC
  c->r[3]=c->r[3]+0x00000001u; // 801C5DF0
  c->lr=0x801C5DF8u; f_801ACB20(c); // 801C5DF4
L_801C5DF8:;
  c->r[3]=c->r[29]|c->r[29]; // 801C5DF8
  c->lr=0x801C5E00u; f_801AA228(c); // 801C5DFC
  c->r[3]=0u+0x00000000u; // 801C5E00
L_801C5E04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5E04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5E08
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5E0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5E10
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C5E14
  c->lr=c->r[0]; // 801C5E18
  c->r[1]=c->r[1]+0x00000020u; // 801C5E1C
  return; // 801C5E20
}

// L2CA_SetIdleTimeout
void f_801C5E24(Ctx* __restrict c) {
  trace_call(0x801C5E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5E24
  c->r[0]=c->lr; // 801C5E28
  cmps(c,0,(int32_t)c->r[5],0); // 801C5E2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5E30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5E34
  c->r[31]=c->r[4]|c->r[4]; // 801C5E38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C5E3C
  c->r[30]=c->r[3]|c->r[3]; // 801C5E40
  if (crb(c,2)) { goto L_801C5E58; } // 801C5E44
  c->r[3]=0u+0x803D0000u; // 801C5E48
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C5E4C
  W16(c->r[3]+0x000007BAu,c->r[4]); // 801C5E50
  goto L_801C5ED0; // 801C5E54
L_801C5E58:;
  c->r[4]=c->r[30]|c->r[30]; // 801C5E58
  c->r[3]=0u+0x00000000u; // 801C5E5C
  c->lr=0x801C5E64u; f_801CAD54(c); // 801C5E60
  cmps(c,0,(int32_t)c->r[3],0); // 801C5E64
  if (!crb(c,2)) { goto L_801C5E9C; } // 801C5E68
  c->r[3]=0u+0x803D0000u; // 801C5E6C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C5E70
  cmpu(c,0,c->r[0],0x00000002u); // 801C5E74
  if (crb(c,0)) { goto L_801C5E94; } // 801C5E78
  c->r[3]=0u+0x00080000u; // 801C5E7C
  c->r[4]=0u+0x80330000u; // 801C5E80
  c->r[5]=c->r[30]|c->r[30]; // 801C5E84
  c->r[3]=c->r[3]+0x00000001u; // 801C5E88
  c->r[4]=c->r[4]+0x000048B8u; // 801C5E8C
  c->lr=0x801C5E94u; f_801ACB38(c); // 801C5E90
L_801C5E94:;
  c->r[3]=0u+0x00000000u; // 801C5E94
  goto L_801C5ED4; // 801C5E98
L_801C5E9C:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C5E9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5EA0
  if (crb(c,2)) { goto L_801C5EC8; } // 801C5EA4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801C5EA8
  cmps(c,0,(int32_t)c->r[0],0); // 801C5EAC
  if (crb(c,2)) { goto L_801C5EC8; } // 801C5EB0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C5EB4
  cmps(c,0,(int32_t)c->r[0],4); // 801C5EB8
  if (!crb(c,2)) { goto L_801C5EC8; } // 801C5EBC
  W16(c->r[3]+0x00000058u,c->r[31]); // 801C5EC0
  goto L_801C5ED0; // 801C5EC4
L_801C5EC8:;
  c->r[3]=0u+0x00000000u; // 801C5EC8
  goto L_801C5ED4; // 801C5ECC
L_801C5ED0:;
  c->r[3]=0u+0x00000001u; // 801C5ED0
L_801C5ED4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5ED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5ED8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C5EDC
  c->lr=c->r[0]; // 801C5EE0
  c->r[1]=c->r[1]+0x00000010u; // 801C5EE4
  return; // 801C5EE8
}

// L2CA_SetIdleTimeoutByBdAddr
void f_801C5EEC(Ctx* __restrict c) {
  trace_call(0x801C5EECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5EEC
  c->r[0]=c->lr; // 801C5EF0
  c->r[5]=0u+0x00000006u; // 801C5EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5EF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5EFC
  c->r[31]=c->r[4]|c->r[4]; // 801C5F00
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C5F04
  c->r[30]=c->r[3]|c->r[3]; // 801C5F08
  c->r[4]=c->r[30]|c->r[30]; // 801C5F0C
  c->r[3]=c->r[2]+0xFFFF9520u; // 801C5F10
  c->lr=0x801C5F18u; f_8018C170(c); // 801C5F14
  cmps(c,0,(int32_t)c->r[3],0); // 801C5F18
  if (crb(c,2)) { goto L_801C5F58; } // 801C5F1C
  c->r[3]=c->r[30]|c->r[30]; // 801C5F20
  c->lr=0x801C5F28u; f_801C9878(c); // 801C5F24
  cmps(c,0,(int32_t)c->r[3],0); // 801C5F28
  if (crb(c,2)) { goto L_801C5F50; } // 801C5F2C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801C5F30
  cmps(c,0,(int32_t)c->r[0],0); // 801C5F34
  if (crb(c,2)) { goto L_801C5F50; } // 801C5F38
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C5F3C
  cmps(c,0,(int32_t)c->r[0],4); // 801C5F40
  if (!crb(c,2)) { goto L_801C5F50; } // 801C5F44
  W16(c->r[3]+0x00000058u,c->r[31]); // 801C5F48
  goto L_801C5FD0; // 801C5F4C
L_801C5F50:;
  c->r[3]=0u+0x00000000u; // 801C5F50
  goto L_801C5FD4; // 801C5F54
L_801C5F58:;
  c->r[3]=0u+0x803D0000u; // 801C5F58
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C5F5C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C5F60
  cmps(c,0,(int32_t)c->r[0],0); // 801C5F64
  if (crb(c,2)) { goto L_801C5F7C; } // 801C5F68
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C5F6C
  cmps(c,0,(int32_t)c->r[0],4); // 801C5F70
  if (!crb(c,2)) { goto L_801C5F7C; } // 801C5F74
  W16(c->r[3]+0x00000060u,c->r[31]); // 801C5F78
L_801C5F7C:;
  {uint32_t ea=c->r[3]+0x00000064u; c->r[0]=R8(ea); c->r[3]=ea;} // 801C5F7C
  cmps(c,0,(int32_t)c->r[0],0); // 801C5F80
  if (crb(c,2)) { goto L_801C5F98; } // 801C5F84
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C5F88
  cmps(c,0,(int32_t)c->r[0],4); // 801C5F8C
  if (!crb(c,2)) { goto L_801C5F98; } // 801C5F90
  W16(c->r[3]+0x00000058u,c->r[31]); // 801C5F94
L_801C5F98:;
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 801C5F98
  cmps(c,0,(int32_t)c->r[0],0); // 801C5F9C
  if (crb(c,2)) { goto L_801C5FB4; } // 801C5FA0
  c->r[0]=R32(c->r[3]+0x00000060u); // 801C5FA4
  cmps(c,0,(int32_t)c->r[0],4); // 801C5FA8
  if (!crb(c,2)) { goto L_801C5FB4; } // 801C5FAC
  W16(c->r[3]+0x000000B4u,c->r[31]); // 801C5FB0
L_801C5FB4:;
  c->r[0]=R8(c->r[3]+0x000000B8u); // 801C5FB4
  cmps(c,0,(int32_t)c->r[0],0); // 801C5FB8
  if (crb(c,2)) { goto L_801C5FD0; } // 801C5FBC
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801C5FC0
  cmps(c,0,(int32_t)c->r[0],4); // 801C5FC4
  if (!crb(c,2)) { goto L_801C5FD0; } // 801C5FC8
  W16(c->r[3]+0x00000110u,c->r[31]); // 801C5FCC
L_801C5FD0:;
  c->r[3]=0u+0x00000001u; // 801C5FD0
L_801C5FD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5FD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5FD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C5FDC
  c->lr=c->r[0]; // 801C5FE0
  c->r[1]=c->r[1]+0x00000010u; // 801C5FE4
  return; // 801C5FE8
}

// L2CA_SetTraceLevel
void f_801C5FEC(Ctx* __restrict c) {
  trace_call(0x801C5FECu);
  cmpu(c,0,c->r[3],0x000000FFu); // 801C5FEC
  if (crb(c,2)) { goto L_801C5FFC; } // 801C5FF0
  c->r[4]=0u+0x803D0000u; // 801C5FF4
  W8(c->r[4]+0xFFFFB1E0u,c->r[3]); // 801C5FF8
L_801C5FFC:;
  c->r[3]=0u+0x803D0000u; // 801C5FFC
  c->r[3]=R8(c->r[3]+0xFFFFB1E0u); // 801C6000
  return; // 801C6004
}

// fn_801C6008
void f_801C6008(Ctx* __restrict c) {
  return; // 801C6008
}

// l2c_csm_execute
void f_801C600C(Ctx* __restrict c) {
  trace_call(0x801C600Cu);
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C600C
  cmpu(c,0,c->r[0],0x00000008u); // 801C6010
  if (crb(c,1)) return; // 801C6014
  c->r[6]=0u+0x80330000u; // 801C6018
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C601C
  c->r[6]=c->r[6]+0x00004A78u; // 801C6020
  c->r[6]=R32(c->r[6]+c->r[0]); // 801C6024
  c->ctr=c->r[6]; // 801C6028
  if (true) { switch (c->ctr) { case 0x801C6030u: goto L_801C6030; case 0x801C6034u: goto L_801C6034; case 0x801C6038u: goto L_801C6038; case 0x801C603Cu: goto L_801C603C; case 0x801C6040u: goto L_801C6040; case 0x801C6044u: goto L_801C6044; case 0x801C6048u: goto L_801C6048; case 0x801C604Cu: goto L_801C604C; case 0x801C6050u: goto L_801C6050; default: break; } dispatch(c,c->ctr); return; } // 801C602C
L_801C6030:;
  f_801C6058(c); return; // 801C6030
L_801C6034:;
  f_801C62EC(c); return; // 801C6034
L_801C6038:;
  f_801C645C(c); return; // 801C6038
L_801C603C:;
  f_801C65C4(c); return; // 801C603C
L_801C6040:;
  f_801C6808(c); return; // 801C6040
L_801C6044:;
  f_801C69E0(c); return; // 801C6044
L_801C6048:;
  f_801C6DA8(c); return; // 801C6048
L_801C604C:;
  f_801C7004(c); return; // 801C604C
L_801C6050:;
  f_801C71E8(c); return; // 801C6050
  return; // 801C6054
}

// l2c_csm_closed
void f_801C6058(Ctx* __restrict c) {
  trace_call(0x801C6058u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6058
  c->r[0]=c->lr; // 801C605C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6060
  c->r[11]=c->r[1]+0x00000030u; // 801C6064
  c->lr=0x801C606Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6068
  c->r[6]=0u+0x803D0000u; // 801C606C
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C6070
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C6074
  c->r[31]=0u+0x80330000u; // 801C6078
  c->r[27]=R32(c->r[7]+0x00000018u); // 801C607C
  c->r[28]=c->r[3]|c->r[3]; // 801C6080
  cmpu(c,0,c->r[0],0x00000004u); // 801C6084
  c->r[30]=R32(c->r[7]+0x00000008u); // 801C6088
  c->r[29]=R16(c->r[3]+0x00000014u); // 801C608C
  c->r[25]=c->r[4]|c->r[4]; // 801C6090
  c->r[26]=c->r[5]|c->r[5]; // 801C6094
  c->r[31]=c->r[31]+0x00004A78u; // 801C6098
  if (crb(c,0)) { goto L_801C60B4; } // 801C609C
  c->r[3]=0u+0x00080000u; // 801C60A0
  c->r[5]=c->r[25]|c->r[25]; // 801C60A4
  c->r[3]=c->r[3]+0x00000003u; // 801C60A8
  c->r[4]=c->r[31]+0x00000024u; // 801C60AC
  c->lr=0x801C60B4u; f_801ACB38(c); // 801C60B0
L_801C60B4:;
  cmpu(c,0,c->r[25],0x0000001Eu); // 801C60B4
  if (crb(c,1)) { goto L_801C62D4; } // 801C60B8
  c->r[3]=0u+0x80330000u; // 801C60BC
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801C60C0
  c->r[3]=c->r[3]+0x00004B38u; // 801C60C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C60C8
  c->ctr=c->r[3]; // 801C60CC
  if (true) { switch (c->ctr) { case 0x801C60D4u: goto L_801C60D4; case 0x801C6118u: goto L_801C6118; case 0x801C6148u: goto L_801C6148; case 0x801C6190u: goto L_801C6190; case 0x801C61CCu: goto L_801C61CC; case 0x801C61F0u: goto L_801C61F0; case 0x801C623Cu: goto L_801C623C; case 0x801C626Cu: goto L_801C626C; case 0x801C62C0u: goto L_801C62C0; case 0x801C62CCu: goto L_801C62CC; case 0x801C62D4u: goto L_801C62D4; default: break; } dispatch(c,c->ctr); return; } // 801C60D0
L_801C60D4:;
  c->r[3]=0u+0x803D0000u; // 801C60D4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C60D8
  cmpu(c,0,c->r[0],0x00000003u); // 801C60DC
  if (crb(c,0)) { goto L_801C60F8; } // 801C60E0
  c->r[3]=0u+0x00080000u; // 801C60E4
  c->r[5]=R16(c->r[28]+0x00000014u); // 801C60E8
  c->r[3]=c->r[3]+0x00000002u; // 801C60EC
  c->r[4]=c->r[31]+0x00000040u; // 801C60F0
  c->lr=0x801C60F8u; f_801ACB38(c); // 801C60F4
L_801C60F8:;
  c->r[3]=c->r[28]|c->r[28]; // 801C60F8
  c->lr=0x801C6100u; f_801CABB0(c); // 801C60FC
  c->r[12]=c->r[27]|c->r[27]; // 801C6100
  c->r[3]=c->r[29]|c->r[29]; // 801C6104
  c->r[4]=0u+0x00000000u; // 801C6108
  c->ctr=c->r[12]; // 801C610C
  if (true) { c->lr=0x801C6114u; dispatch(c,c->ctr); } // 801C6110
  goto L_801C62D4; // 801C6114
L_801C6118:;
  c->r[0]=0u+0x00000001u; // 801C6118
  c->r[5]=R32(c->r[28]+0x00000010u); // 801C611C
  W32(c->r[28]+0x00000004u,c->r[0]); // 801C6120
  c->r[7]=0u+0x801C0000u; // 801C6124
  c->r[4]=R32(c->r[28]+0x00000030u); // 801C6128
  c->r[3]=c->r[5]+0x0000002Au; // 801C612C
  c->r[5]=R16(c->r[5]+0x00000028u); // 801C6130
  c->r[7]=c->r[7]+0x00007874u; // 801C6134
  c->r[4]=R16(c->r[4]+0x00000002u); // 801C6138
  c->r[6]=0u+0x00000001u; // 801C613C
  c->lr=0x801C6144u; f_801BAF28(c); // 801C6140
  goto L_801C62D4; // 801C6144
L_801C6148:;
  c->r[3]=0u+0x803D0000u; // 801C6148
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C614C
  cmpu(c,0,c->r[0],0x00000003u); // 801C6150
  if (crb(c,0)) { goto L_801C6170; } // 801C6154
  c->r[3]=0u+0x00080000u; // 801C6158
  c->r[5]=R16(c->r[28]+0x00000014u); // 801C615C
  c->r[6]=R8(c->r[26]+0x00000006u); // 801C6160
  c->r[3]=c->r[3]+0x00000002u; // 801C6164
  c->r[4]=c->r[31]+0x00000084u; // 801C6168
  c->lr=0x801C6170u; f_801ACB50(c); // 801C616C
L_801C6170:;
  c->r[3]=c->r[28]|c->r[28]; // 801C6170
  c->lr=0x801C6178u; f_801CABB0(c); // 801C6174
  c->r[12]=c->r[30]|c->r[30]; // 801C6178
  c->r[3]=c->r[29]|c->r[29]; // 801C617C
  c->r[4]=R8(c->r[26]+0x00000006u); // 801C6180
  c->ctr=c->r[12]; // 801C6184
  if (true) { c->lr=0x801C618Cu; dispatch(c,c->ctr); } // 801C6188
  goto L_801C62D4; // 801C618C
L_801C6190:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 801C6190
  c->r[7]=0u+0x801C0000u; // 801C6194
  c->r[4]=R32(c->r[28]+0x00000030u); // 801C6198
  c->r[7]=c->r[7]+0x00007874u; // 801C619C
  c->r[5]=R16(c->r[3]+0x00000028u); // 801C61A0
  c->r[3]=c->r[3]+0x0000002Au; // 801C61A4
  c->r[4]=R16(c->r[4]+0x00000002u); // 801C61A8
  c->r[6]=0u+0x00000001u; // 801C61AC
  c->lr=0x801C61B4u; f_801BAF28(c); // 801C61B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801C61B4
  cmpu(c,0,c->r[0],0x00000001u); // 801C61B8
  if (!crb(c,2)) { goto L_801C62D4; } // 801C61BC
  c->r[0]=0u+0x00000001u; // 801C61C0
  W32(c->r[28]+0x00000004u,c->r[0]); // 801C61C4
  goto L_801C62D4; // 801C61C8
L_801C61CC:;
  c->r[3]=c->r[28]|c->r[28]; // 801C61CC
  c->lr=0x801C61D4u; f_801C9B60(c); // 801C61D0
  c->r[0]=0u+0x00000003u; // 801C61D4
  c->r[3]=c->r[28]+0x00000018u; // 801C61D8
  W32(c->r[28]+0x00000004u,c->r[0]); // 801C61DC
  c->r[4]=0u+0x00000003u; // 801C61E0
  c->r[5]=0u+0x0000003Cu; // 801C61E4
  c->lr=0x801C61ECu; f_801AD0EC(c); // 801C61E8
  goto L_801C62D4; // 801C61EC
L_801C61F0:;
  c->r[3]=0u+0x803D0000u; // 801C61F0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C61F4
  cmpu(c,0,c->r[0],0x00000003u); // 801C61F8
  if (crb(c,0)) { goto L_801C621C; } // 801C61FC
  c->r[3]=0u+0x00080000u; // 801C6200
  c->r[6]=0u+0x00010000u; // 801C6204
  c->r[5]=R16(c->r[28]+0x00000014u); // 801C6208
  c->r[3]=c->r[3]+0x00000002u; // 801C620C
  c->r[4]=c->r[31]+0x00000084u; // 801C6210
  c->r[6]=c->r[6]+0xFFFFEEEEu; // 801C6214
  c->lr=0x801C621Cu; f_801ACB50(c); // 801C6218
L_801C621C:;
  c->r[3]=c->r[28]|c->r[28]; // 801C621C
  c->lr=0x801C6224u; f_801CABB0(c); // 801C6220
  c->r[12]=c->r[30]|c->r[30]; // 801C6224
  c->r[3]=c->r[29]|c->r[29]; // 801C6228
  c->r[4]=0u+0x00000003u; // 801C622C
  c->ctr=c->r[12]; // 801C6230
  if (true) { c->lr=0x801C6238u; dispatch(c,c->ctr); } // 801C6234
  goto L_801C62D4; // 801C6238
L_801C623C:;
  c->r[0]=0u+0x00000002u; // 801C623C
  c->r[5]=R32(c->r[28]+0x00000010u); // 801C6240
  W32(c->r[28]+0x00000004u,c->r[0]); // 801C6244
  c->r[7]=0u+0x801C0000u; // 801C6248
  c->r[4]=R32(c->r[28]+0x00000030u); // 801C624C
  c->r[3]=c->r[5]+0x0000002Au; // 801C6250
  c->r[5]=R16(c->r[5]+0x00000028u); // 801C6254
  c->r[7]=c->r[7]+0x00007874u; // 801C6258
  c->r[4]=R16(c->r[4]+0x00000002u); // 801C625C
  c->r[6]=0u+0x00000000u; // 801C6260
  c->lr=0x801C6268u; f_801BAF28(c); // 801C6264
  goto L_801C62D4; // 801C6268
L_801C626C:;
  c->r[3]=0u+0x803D0000u; // 801C626C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6270
  cmpu(c,0,c->r[0],0x00000003u); // 801C6274
  if (crb(c,0)) { goto L_801C6298; } // 801C6278
  c->r[3]=0u+0x00080000u; // 801C627C
  c->r[6]=0u+0x00010000u; // 801C6280
  c->r[5]=R16(c->r[28]+0x00000014u); // 801C6284
  c->r[3]=c->r[3]+0x00000002u; // 801C6288
  c->r[4]=c->r[31]+0x00000084u; // 801C628C
  c->r[6]=c->r[6]+0xFFFFEEEEu; // 801C6290
  c->lr=0x801C6298u; f_801ACB50(c); // 801C6294
L_801C6298:;
  c->r[3]=c->r[28]|c->r[28]; // 801C6298
  c->lr=0x801C62A0u; f_801CABB0(c); // 801C629C
  c->r[3]=0u+0x00010000u; // 801C62A0
  c->r[12]=c->r[30]|c->r[30]; // 801C62A4
  c->r[0]=c->r[3]+0xFFFFEEEEu; // 801C62A8
  c->r[3]=c->r[29]|c->r[29]; // 801C62AC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801C62B0
  c->ctr=c->r[12]; // 801C62B4
  if (true) { c->lr=0x801C62BCu; dispatch(c,c->ctr); } // 801C62B8
  goto L_801C62D4; // 801C62BC
L_801C62C0:;
  c->r[3]=c->r[26]|c->r[26]; // 801C62C0
  c->lr=0x801C62C8u; f_801AA228(c); // 801C62C4
  goto L_801C62D4; // 801C62C8
L_801C62CC:;
  c->r[3]=c->r[28]|c->r[28]; // 801C62CC
  c->lr=0x801C62D4u; f_801CABB0(c); // 801C62D0
L_801C62D4:;
  c->r[11]=c->r[1]+0x00000030u; // 801C62D4
  c->lr=0x801C62DCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C62D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C62DC
  c->lr=c->r[0]; // 801C62E0
  c->r[1]=c->r[1]+0x00000030u; // 801C62E4
  return; // 801C62E8
}

// l2c_csm_orig_w4_sec_comp
void f_801C62EC(Ctx* __restrict c) {
  trace_call(0x801C62ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C62EC
  c->r[0]=c->lr; // 801C62F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C62F4
  c->r[11]=c->r[1]+0x00000030u; // 801C62F8
  c->lr=0x801C6300u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C62FC
  c->r[6]=0u+0x803D0000u; // 801C6300
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C6304
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C6308
  c->r[30]=0u+0x80330000u; // 801C630C
  c->r[29]=R32(c->r[7]+0x00000018u); // 801C6310
  c->r[31]=c->r[3]|c->r[3]; // 801C6314
  cmpu(c,0,c->r[0],0x00000004u); // 801C6318
  c->r[28]=R32(c->r[7]+0x00000008u); // 801C631C
  c->r[27]=R16(c->r[3]+0x00000014u); // 801C6320
  c->r[25]=c->r[4]|c->r[4]; // 801C6324
  c->r[26]=c->r[5]|c->r[5]; // 801C6328
  c->r[30]=c->r[30]+0x00004A78u; // 801C632C
  if (crb(c,0)) { goto L_801C6348; } // 801C6330
  c->r[3]=0u+0x00080000u; // 801C6334
  c->r[5]=c->r[25]|c->r[25]; // 801C6338
  c->r[3]=c->r[3]+0x00000003u; // 801C633C
  c->r[4]=c->r[30]+0x0000013Cu; // 801C6340
  c->lr=0x801C6348u; f_801ACB38(c); // 801C6344
L_801C6348:;
  c->r[0]=c->r[25]+0xFFFFFFFDu; // 801C6348
  cmpu(c,0,c->r[0],0x0000001Au); // 801C634C
  if (crb(c,1)) { goto L_801C6444; } // 801C6350
  c->r[3]=0u+0x80330000u; // 801C6354
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C6358
  c->r[3]=c->r[3]+0x00004BDCu; // 801C635C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C6360
  c->ctr=c->r[3]; // 801C6364
  if (true) { switch (c->ctr) { case 0x801C636Cu: goto L_801C636C; case 0x801C63B0u: goto L_801C63B0; case 0x801C63DCu: goto L_801C63DC; case 0x801C6424u: goto L_801C6424; case 0x801C6430u: goto L_801C6430; case 0x801C6444u: goto L_801C6444; default: break; } dispatch(c,c->ctr); return; } // 801C6368
L_801C636C:;
  c->r[3]=0u+0x803D0000u; // 801C636C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6370
  cmpu(c,0,c->r[0],0x00000003u); // 801C6374
  if (crb(c,0)) { goto L_801C6390; } // 801C6378
  c->r[3]=0u+0x00080000u; // 801C637C
  c->r[5]=R16(c->r[31]+0x00000014u); // 801C6380
  c->r[3]=c->r[3]+0x00000002u; // 801C6384
  c->r[4]=c->r[30]+0x00000040u; // 801C6388
  c->lr=0x801C6390u; f_801ACB38(c); // 801C638C
L_801C6390:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6390
  c->lr=0x801C6398u; f_801CABB0(c); // 801C6394
  c->r[12]=c->r[29]|c->r[29]; // 801C6398
  c->r[3]=c->r[27]|c->r[27]; // 801C639C
  c->r[4]=0u+0x00000000u; // 801C63A0
  c->ctr=c->r[12]; // 801C63A4
  if (true) { c->lr=0x801C63ACu; dispatch(c,c->ctr); } // 801C63A8
  goto L_801C6444; // 801C63AC
L_801C63B0:;
  c->r[0]=0u+0x00000003u; // 801C63B0
  c->r[3]=c->r[31]+0x00000018u; // 801C63B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C63B8
  c->r[4]=0u+0x00000003u; // 801C63BC
  c->r[5]=0u+0x0000003Cu; // 801C63C0
  c->lr=0x801C63C8u; f_801AD0EC(c); // 801C63C4
  c->r[3]=c->r[31]|c->r[31]; // 801C63C8
  c->lr=0x801C63D0u; f_801C9B60(c); // 801C63CC
  c->r[0]=0u+0x00000000u; // 801C63D0
  W8(c->r[31]+0x00000037u,c->r[0]); // 801C63D4
  goto L_801C6444; // 801C63D8
L_801C63DC:;
  c->r[3]=0u+0x803D0000u; // 801C63DC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C63E0
  cmpu(c,0,c->r[0],0x00000003u); // 801C63E4
  if (crb(c,0)) { goto L_801C6404; } // 801C63E8
  c->r[3]=0u+0x00080000u; // 801C63EC
  c->r[5]=R16(c->r[31]+0x00000014u); // 801C63F0
  c->r[3]=c->r[3]+0x00000002u; // 801C63F4
  c->r[4]=c->r[30]+0x00000084u; // 801C63F8
  c->r[6]=0u+0x00000005u; // 801C63FC
  c->lr=0x801C6404u; f_801ACB50(c); // 801C6400
L_801C6404:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6404
  c->lr=0x801C640Cu; f_801CABB0(c); // 801C6408
  c->r[12]=c->r[28]|c->r[28]; // 801C640C
  c->r[3]=c->r[27]|c->r[27]; // 801C6410
  c->r[4]=0u+0x00000005u; // 801C6414
  c->ctr=c->r[12]; // 801C6418
  if (true) { c->lr=0x801C6420u; dispatch(c,c->ctr); } // 801C641C
  goto L_801C6444; // 801C6420
L_801C6424:;
  c->r[3]=c->r[26]|c->r[26]; // 801C6424
  c->lr=0x801C642Cu; f_801AA228(c); // 801C6428
  goto L_801C6444; // 801C642C
L_801C6430:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801C6430
  c->r[3]=c->r[3]+0x0000002Au; // 801C6434
  c->lr=0x801C643Cu; f_801BB7B0(c); // 801C6438
  c->r[3]=c->r[31]|c->r[31]; // 801C643C
  c->lr=0x801C6444u; f_801CABB0(c); // 801C6440
L_801C6444:;
  c->r[11]=c->r[1]+0x00000030u; // 801C6444
  c->lr=0x801C644Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6448
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C644C
  c->lr=c->r[0]; // 801C6450
  c->r[1]=c->r[1]+0x00000030u; // 801C6454
  return; // 801C6458
}

// l2c_csm_term_w4_sec_comp
void f_801C645C(Ctx* __restrict c) {
  trace_call(0x801C645Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C645C
  c->r[0]=c->lr; // 801C6460
  c->r[6]=0u+0x803D0000u; // 801C6464
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6468
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C646C
  c->r[31]=c->r[5]|c->r[5]; // 801C6470
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6474
  c->r[30]=c->r[4]|c->r[4]; // 801C6478
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C647C
  c->r[29]=c->r[3]|c->r[3]; // 801C6480
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C6484
  cmpu(c,0,c->r[0],0x00000004u); // 801C6488
  if (crb(c,0)) { goto L_801C64A8; } // 801C648C
  c->r[3]=0u+0x00080000u; // 801C6490
  c->r[4]=0u+0x80330000u; // 801C6494
  c->r[5]=c->r[30]|c->r[30]; // 801C6498
  c->r[3]=c->r[3]+0x00000003u; // 801C649C
  c->r[4]=c->r[4]+0x00004C48u; // 801C64A0
  c->lr=0x801C64A8u; f_801ACB38(c); // 801C64A4
L_801C64A8:;
  c->r[0]=c->r[30]+0xFFFFFFFDu; // 801C64A8
  cmpu(c,0,c->r[0],0x0000001Au); // 801C64AC
  if (crb(c,1)) { goto L_801C65A8; } // 801C64B0
  c->r[3]=0u+0x80330000u; // 801C64B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C64B8
  c->r[3]=c->r[3]+0x00004CA0u; // 801C64BC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C64C0
  c->ctr=c->r[3]; // 801C64C4
  if (true) { switch (c->ctr) { case 0x801C64CCu: goto L_801C64CC; case 0x801C64E4u: goto L_801C64E4; case 0x801C654Cu: goto L_801C654C; case 0x801C6568u: goto L_801C6568; case 0x801C6574u: goto L_801C6574; case 0x801C6580u: goto L_801C6580; case 0x801C65A8u: goto L_801C65A8; default: break; } dispatch(c,c->ctr); return; } // 801C64C8
L_801C64CC:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C64CC
  c->r[3]=c->r[3]+0x0000002Au; // 801C64D0
  c->lr=0x801C64D8u; f_801BB7B0(c); // 801C64D4
  c->r[3]=c->r[29]|c->r[29]; // 801C64D8
  c->lr=0x801C64E0u; f_801CABB0(c); // 801C64DC
  goto L_801C65A8; // 801C64E0
L_801C64E4:;
  c->r[0]=0u+0x00000004u; // 801C64E4
  c->r[3]=c->r[29]+0x00000018u; // 801C64E8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C64EC
  c->r[4]=0u+0x00000003u; // 801C64F0
  c->r[5]=0u+0x0000003Cu; // 801C64F4
  c->lr=0x801C64FCu; f_801AD0EC(c); // 801C64F8
  c->r[3]=0u+0x803D0000u; // 801C64FC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6500
  cmpu(c,0,c->r[0],0x00000003u); // 801C6504
  if (crb(c,0)) { goto L_801C6524; } // 801C6508
  c->r[3]=0u+0x00080000u; // 801C650C
  c->r[4]=0u+0x80330000u; // 801C6510
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6514
  c->r[3]=c->r[3]+0x00000002u; // 801C6518
  c->r[4]=c->r[4]+0x00004C70u; // 801C651C
  c->lr=0x801C6524u; f_801ACB38(c); // 801C6520
L_801C6524:;
  c->r[5]=R32(c->r[29]+0x00000030u); // 801C6524
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C6528
  c->r[12]=R32(c->r[5]+0x00000004u); // 801C652C
  c->r[3]=c->r[3]+0x0000002Au; // 801C6530
  c->r[4]=R16(c->r[29]+0x00000014u); // 801C6534
  c->r[5]=R16(c->r[5]+0x00000002u); // 801C6538
  c->r[6]=R8(c->r[29]+0x00000036u); // 801C653C
  c->ctr=c->r[12]; // 801C6540
  if (true) { c->lr=0x801C6548u; dispatch(c,c->ctr); } // 801C6544
  goto L_801C65A8; // 801C6548
L_801C654C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C654C
  c->r[4]=0u+0x00000003u; // 801C6550
  c->r[5]=0u+0x00000000u; // 801C6554
  c->lr=0x801C655Cu; f_801C9C24(c); // 801C6558
  c->r[3]=c->r[29]|c->r[29]; // 801C655C
  c->lr=0x801C6564u; f_801CABB0(c); // 801C6560
  goto L_801C65A8; // 801C6564
L_801C6568:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6568
  c->lr=0x801C6570u; f_801AA228(c); // 801C656C
  goto L_801C65A8; // 801C6570
L_801C6574:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6574
  c->lr=0x801C657Cu; f_801CABB0(c); // 801C6578
  goto L_801C65A8; // 801C657C
L_801C6580:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C6580
  c->r[4]=R8(c->r[29]+0x00000036u); // 801C6584
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6588
  c->r[6]=R16(c->r[29]+0x00000016u); // 801C658C
  c->lr=0x801C6594u; f_801CA634(c); // 801C6590
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C6594
  c->r[3]=c->r[3]+0x0000002Au; // 801C6598
  c->lr=0x801C65A0u; f_801BB7B0(c); // 801C659C
  c->r[3]=c->r[29]|c->r[29]; // 801C65A0
  c->lr=0x801C65A8u; f_801CABB0(c); // 801C65A4
L_801C65A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C65A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C65AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C65B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C65B4
  c->lr=c->r[0]; // 801C65B8
  c->r[1]=c->r[1]+0x00000020u; // 801C65BC
  return; // 801C65C0
}

// l2c_csm_w4_l2cap_connect_rsp
void f_801C65C4(Ctx* __restrict c) {
  trace_call(0x801C65C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C65C4
  c->r[0]=c->lr; // 801C65C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C65CC
  c->r[11]=c->r[1]+0x00000030u; // 801C65D0
  c->lr=0x801C65D8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C65D4
  c->r[6]=0u+0x803D0000u; // 801C65D8
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C65DC
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C65E0
  c->r[31]=0u+0x80330000u; // 801C65E4
  c->r[28]=R32(c->r[7]+0x00000018u); // 801C65E8
  c->r[29]=c->r[3]|c->r[3]; // 801C65EC
  cmpu(c,0,c->r[0],0x00000004u); // 801C65F0
  c->r[27]=R32(c->r[7]+0x00000008u); // 801C65F4
  c->r[30]=R16(c->r[3]+0x00000014u); // 801C65F8
  c->r[25]=c->r[4]|c->r[4]; // 801C65FC
  c->r[26]=c->r[5]|c->r[5]; // 801C6600
  c->r[31]=c->r[31]+0x00004A78u; // 801C6604
  if (crb(c,0)) { goto L_801C6620; } // 801C6608
  c->r[3]=0u+0x00080000u; // 801C660C
  c->r[5]=c->r[25]|c->r[25]; // 801C6610
  c->r[3]=c->r[3]+0x00000003u; // 801C6614
  c->r[4]=c->r[31]+0x00000294u; // 801C6618
  c->lr=0x801C6620u; f_801ACB38(c); // 801C661C
L_801C6620:;
  c->r[0]=c->r[25]+0xFFFFFFFDu; // 801C6620
  cmpu(c,0,c->r[0],0x0000001Bu); // 801C6624
  if (crb(c,1)) { goto L_801C67F0; } // 801C6628
  c->r[3]=0u+0x80330000u; // 801C662C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C6630
  c->r[3]=c->r[3]+0x00004E08u; // 801C6634
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C6638
  c->ctr=c->r[3]; // 801C663C
  if (true) { switch (c->ctr) { case 0x801C6644u: goto L_801C6644; case 0x801C6690u: goto L_801C6690; case 0x801C66F0u: goto L_801C66F0; case 0x801C6748u: goto L_801C6748; case 0x801C6790u: goto L_801C6790; case 0x801C67DCu: goto L_801C67DC; case 0x801C67E8u: goto L_801C67E8; case 0x801C67F0u: goto L_801C67F0; default: break; } dispatch(c,c->ctr); return; } // 801C6640
L_801C6644:;
  c->r[0]=0u+0x00000000u; // 801C6644
  c->r[3]=0u+0x803D0000u; // 801C6648
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C664C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6650
  cmpu(c,0,c->r[0],0x00000003u); // 801C6654
  if (crb(c,0)) { goto L_801C6670; } // 801C6658
  c->r[3]=0u+0x00080000u; // 801C665C
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6660
  c->r[3]=c->r[3]+0x00000002u; // 801C6664
  c->r[4]=c->r[31]+0x00000040u; // 801C6668
  c->lr=0x801C6670u; f_801ACB38(c); // 801C666C
L_801C6670:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6670
  c->lr=0x801C6678u; f_801CABB0(c); // 801C6674
  c->r[12]=c->r[28]|c->r[28]; // 801C6678
  c->r[3]=c->r[30]|c->r[30]; // 801C667C
  c->r[4]=0u+0x00000000u; // 801C6680
  c->ctr=c->r[12]; // 801C6684
  if (true) { c->lr=0x801C668Cu; dispatch(c,c->ctr); } // 801C6688
  goto L_801C67F0; // 801C668C
L_801C6690:;
  c->r[5]=R16(c->r[26]+0x0000000Eu); // 801C6690
  c->r[0]=0u+0x00000005u; // 801C6694
  c->r[3]=c->r[29]+0x00000018u; // 801C6698
  c->r[4]=0u+0x00000003u; // 801C669C
  W16(c->r[29]+0x00000016u,c->r[5]); // 801C66A0
  c->r[5]=0u+0x0000001Eu; // 801C66A4
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C66A8
  c->lr=0x801C66B0u; f_801AD0EC(c); // 801C66AC
  c->r[3]=0u+0x803D0000u; // 801C66B0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C66B4
  cmpu(c,0,c->r[0],0x00000003u); // 801C66B8
  if (crb(c,0)) { goto L_801C66D4; } // 801C66BC
  c->r[3]=0u+0x00080000u; // 801C66C0
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C66C4
  c->r[3]=c->r[3]+0x00000002u; // 801C66C8
  c->r[4]=c->r[31]+0x000002BCu; // 801C66CC
  c->lr=0x801C66D4u; f_801ACB38(c); // 801C66D0
L_801C66D4:;
  c->r[5]=R32(c->r[29]+0x00000030u); // 801C66D4
  c->r[4]=0u+0x00000000u; // 801C66D8
  c->r[3]=R16(c->r[29]+0x00000014u); // 801C66DC
  c->r[12]=R32(c->r[5]+0x00000008u); // 801C66E0
  c->ctr=c->r[12]; // 801C66E4
  if (true) { c->lr=0x801C66ECu; dispatch(c,c->ctr); } // 801C66E8
  goto L_801C67F0; // 801C66EC
L_801C66F0:;
  c->r[3]=c->r[29]+0x00000018u; // 801C66F0
  c->r[4]=0u+0x00000003u; // 801C66F4
  c->r[5]=0u+0x00000078u; // 801C66F8
  c->lr=0x801C6700u; f_801AD0EC(c); // 801C66FC
  c->r[3]=R32(c->r[29]+0x00000030u); // 801C6700
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C6704
  cmps(c,0,(int32_t)c->r[0],0); // 801C6708
  if (crb(c,2)) { goto L_801C67F0; } // 801C670C
  c->r[3]=0u+0x803D0000u; // 801C6710
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6714
  cmpu(c,0,c->r[0],0x00000003u); // 801C6718
  if (crb(c,0)) { goto L_801C6730; } // 801C671C
  c->r[3]=0u+0x00080000u; // 801C6720
  c->r[4]=c->r[31]+0x000002F4u; // 801C6724
  c->r[3]=c->r[3]+0x00000002u; // 801C6728
  c->lr=0x801C6730u; f_801ACB20(c); // 801C672C
L_801C6730:;
  c->r[4]=R32(c->r[29]+0x00000030u); // 801C6730
  c->r[3]=0u+0x00000000u; // 801C6734
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 801C6738
  c->ctr=c->r[12]; // 801C673C
  if (true) { c->lr=0x801C6744u; dispatch(c,c->ctr); } // 801C6740
  goto L_801C67F0; // 801C6744
L_801C6748:;
  c->r[3]=0u+0x803D0000u; // 801C6748
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C674C
  cmpu(c,0,c->r[0],0x00000003u); // 801C6750
  if (crb(c,0)) { goto L_801C6770; } // 801C6754
  c->r[3]=0u+0x00080000u; // 801C6758
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C675C
  c->r[6]=R16(c->r[26]+0x0000000Au); // 801C6760
  c->r[3]=c->r[3]+0x00000002u; // 801C6764
  c->r[4]=c->r[31]+0x00000318u; // 801C6768
  c->lr=0x801C6770u; f_801ACB50(c); // 801C676C
L_801C6770:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6770
  c->lr=0x801C6778u; f_801CABB0(c); // 801C6774
  c->r[12]=c->r[27]|c->r[27]; // 801C6778
  c->r[3]=c->r[30]|c->r[30]; // 801C677C
  c->r[4]=R16(c->r[26]+0x0000000Au); // 801C6780
  c->ctr=c->r[12]; // 801C6784
  if (true) { c->lr=0x801C678Cu; dispatch(c,c->ctr); } // 801C6788
  goto L_801C67F0; // 801C678C
L_801C6790:;
  c->r[3]=0u+0x803D0000u; // 801C6790
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6794
  cmpu(c,0,c->r[0],0x00000003u); // 801C6798
  if (crb(c,0)) { goto L_801C67B4; } // 801C679C
  c->r[3]=0u+0x00080000u; // 801C67A0
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C67A4
  c->r[3]=c->r[3]+0x00000002u; // 801C67A8
  c->r[4]=c->r[31]+0x00000358u; // 801C67AC
  c->lr=0x801C67B4u; f_801ACB38(c); // 801C67B0
L_801C67B4:;
  c->r[3]=c->r[29]|c->r[29]; // 801C67B4
  c->lr=0x801C67BCu; f_801CABB0(c); // 801C67B8
  c->r[3]=0u+0x00010000u; // 801C67BC
  c->r[12]=c->r[27]|c->r[27]; // 801C67C0
  c->r[0]=c->r[3]+0xFFFFEEEEu; // 801C67C4
  c->r[3]=c->r[30]|c->r[30]; // 801C67C8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801C67CC
  c->ctr=c->r[12]; // 801C67D0
  if (true) { c->lr=0x801C67D8u; dispatch(c,c->ctr); } // 801C67D4
  goto L_801C67F0; // 801C67D8
L_801C67DC:;
  c->r[3]=c->r[29]|c->r[29]; // 801C67DC
  c->lr=0x801C67E4u; f_801CABB0(c); // 801C67E0
  goto L_801C67F0; // 801C67E4
L_801C67E8:;
  c->r[3]=c->r[26]|c->r[26]; // 801C67E8
  c->lr=0x801C67F0u; f_801AA228(c); // 801C67EC
L_801C67F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801C67F0
  c->lr=0x801C67F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C67F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C67F8
  c->lr=c->r[0]; // 801C67FC
  c->r[1]=c->r[1]+0x00000030u; // 801C6800
  return; // 801C6804
}

// l2c_csm_w4_l2ca_connect_rsp
void f_801C6808(Ctx* __restrict c) {
  trace_call(0x801C6808u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6808
  c->r[0]=c->lr; // 801C680C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6810
  c->r[11]=c->r[1]+0x00000020u; // 801C6814
  c->lr=0x801C681Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6818
  c->r[6]=0u+0x803D0000u; // 801C681C
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C6820
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C6824
  c->r[31]=c->r[3]|c->r[3]; // 801C6828
  c->r[30]=R32(c->r[7]+0x00000018u); // 801C682C
  c->r[27]=c->r[4]|c->r[4]; // 801C6830
  cmpu(c,0,c->r[0],0x00000004u); // 801C6834
  c->r[29]=R16(c->r[3]+0x00000014u); // 801C6838
  c->r[28]=c->r[5]|c->r[5]; // 801C683C
  if (crb(c,0)) { goto L_801C685C; } // 801C6840
  c->r[3]=0u+0x00080000u; // 801C6844
  c->r[4]=0u+0x80330000u; // 801C6848
  c->r[5]=c->r[27]|c->r[27]; // 801C684C
  c->r[3]=c->r[3]+0x00000003u; // 801C6850
  c->r[4]=c->r[4]+0x00004E78u; // 801C6854
  c->lr=0x801C685Cu; f_801ACB38(c); // 801C6858
L_801C685C:;
  c->r[0]=c->r[27]+0xFFFFFFFDu; // 801C685C
  cmpu(c,0,c->r[0],0x0000001Bu); // 801C6860
  if (crb(c,1)) { goto L_801C69C8; } // 801C6864
  c->r[3]=0u+0x80330000u; // 801C6868
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C686C
  c->r[3]=c->r[3]+0x00004E9Cu; // 801C6870
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C6874
  c->ctr=c->r[3]; // 801C6878
  if (true) { switch (c->ctr) { case 0x801C6880u: goto L_801C6880; case 0x801C68C8u: goto L_801C68C8; case 0x801C6928u: goto L_801C6928; case 0x801C6944u: goto L_801C6944; case 0x801C699Cu: goto L_801C699C; case 0x801C69A8u: goto L_801C69A8; case 0x801C69C8u: goto L_801C69C8; default: break; } dispatch(c,c->ctr); return; } // 801C687C
L_801C6880:;
  c->r[3]=0u+0x803D0000u; // 801C6880
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6884
  cmpu(c,0,c->r[0],0x00000003u); // 801C6888
  if (crb(c,0)) { goto L_801C68A8; } // 801C688C
  c->r[3]=0u+0x00080000u; // 801C6890
  c->r[4]=0u+0x80330000u; // 801C6894
  c->r[5]=R16(c->r[31]+0x00000014u); // 801C6898
  c->r[3]=c->r[3]+0x00000002u; // 801C689C
  c->r[4]=c->r[4]+0x00004AB8u; // 801C68A0
  c->lr=0x801C68A8u; f_801ACB38(c); // 801C68A4
L_801C68A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C68A8
  c->lr=0x801C68B0u; f_801CABB0(c); // 801C68AC
  c->r[12]=c->r[30]|c->r[30]; // 801C68B0
  c->r[3]=c->r[29]|c->r[29]; // 801C68B4
  c->r[4]=0u+0x00000000u; // 801C68B8
  c->ctr=c->r[12]; // 801C68BC
  if (true) { c->lr=0x801C68C4u; dispatch(c,c->ctr); } // 801C68C0
  goto L_801C69C8; // 801C68C4
L_801C68C8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C68C8
  if (crb(c,2)) { goto L_801C68DC; } // 801C68CC
  c->r[4]=R16(c->r[28]+0x0000000Au); // 801C68D0
  cmps(c,0,(int32_t)c->r[4],0); // 801C68D4
  if (!crb(c,2)) { goto L_801C6908; } // 801C68D8
L_801C68DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C68DC
  c->r[4]=0u+0x00000000u; // 801C68E0
  c->r[5]=0u+0x00000000u; // 801C68E4
  c->lr=0x801C68ECu; f_801C9C24(c); // 801C68E8
  c->r[0]=0u+0x00000005u; // 801C68EC
  c->r[3]=c->r[31]+0x00000018u; // 801C68F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C68F4
  c->r[4]=0u+0x00000003u; // 801C68F8
  c->r[5]=0u+0x0000001Eu; // 801C68FC
  c->lr=0x801C6904u; f_801AD0EC(c); // 801C6900
  goto L_801C69C8; // 801C6904
L_801C6908:;
  c->r[5]=R16(c->r[28]+0x0000000Cu); // 801C6908
  c->r[3]=c->r[31]|c->r[31]; // 801C690C
  c->lr=0x801C6914u; f_801C9C24(c); // 801C6910
  c->r[3]=c->r[31]+0x00000018u; // 801C6914
  c->r[4]=0u+0x00000003u; // 801C6918
  c->r[5]=0u+0x00000078u; // 801C691C
  c->lr=0x801C6924u; f_801AD0EC(c); // 801C6920
  goto L_801C69C8; // 801C6924
L_801C6928:;
  c->r[4]=R16(c->r[28]+0x0000000Au); // 801C6928
  c->r[3]=c->r[31]|c->r[31]; // 801C692C
  c->r[5]=R16(c->r[28]+0x0000000Cu); // 801C6930
  c->lr=0x801C6938u; f_801C9C24(c); // 801C6934
  c->r[3]=c->r[31]|c->r[31]; // 801C6938
  c->lr=0x801C6940u; f_801CABB0(c); // 801C693C
  goto L_801C69C8; // 801C6940
L_801C6944:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6944
  c->r[4]=0u+0x00000002u; // 801C6948
  c->r[5]=0u+0x00000000u; // 801C694C
  c->lr=0x801C6954u; f_801C9C24(c); // 801C6950
  c->r[3]=0u+0x803D0000u; // 801C6954
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6958
  cmpu(c,0,c->r[0],0x00000003u); // 801C695C
  if (crb(c,0)) { goto L_801C697C; } // 801C6960
  c->r[3]=0u+0x00080000u; // 801C6964
  c->r[4]=0u+0x80330000u; // 801C6968
  c->r[5]=R16(c->r[31]+0x00000014u); // 801C696C
  c->r[3]=c->r[3]+0x00000002u; // 801C6970
  c->r[4]=c->r[4]+0x00004AB8u; // 801C6974
  c->lr=0x801C697Cu; f_801ACB38(c); // 801C6978
L_801C697C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C697C
  c->lr=0x801C6984u; f_801CABB0(c); // 801C6980
  c->r[12]=c->r[30]|c->r[30]; // 801C6984
  c->r[3]=c->r[29]|c->r[29]; // 801C6988
  c->r[4]=0u+0x00000000u; // 801C698C
  c->ctr=c->r[12]; // 801C6990
  if (true) { c->lr=0x801C6998u; dispatch(c,c->ctr); } // 801C6994
  goto L_801C69C8; // 801C6998
L_801C699C:;
  c->r[3]=c->r[28]|c->r[28]; // 801C699C
  c->lr=0x801C69A4u; f_801AA228(c); // 801C69A0
  goto L_801C69C8; // 801C69A4
L_801C69A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C69A8
  c->lr=0x801C69B0u; f_801CA560(c); // 801C69AC
  c->r[0]=0u+0x00000007u; // 801C69B0
  c->r[3]=c->r[31]+0x00000018u; // 801C69B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C69B8
  c->r[4]=0u+0x00000003u; // 801C69BC
  c->r[5]=0u+0x0000001Eu; // 801C69C0
  c->lr=0x801C69C8u; f_801AD0EC(c); // 801C69C4
L_801C69C8:;
  c->r[11]=c->r[1]+0x00000020u; // 801C69C8
  c->lr=0x801C69D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C69CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C69D0
  c->lr=c->r[0]; // 801C69D4
  c->r[1]=c->r[1]+0x00000020u; // 801C69D8
  return; // 801C69DC
}

// l2c_csm_config
void f_801C69E0(Ctx* __restrict c) {
  trace_call(0x801C69E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C69E0
  c->r[0]=c->lr; // 801C69E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C69E8
  c->r[11]=c->r[1]+0x00000020u; // 801C69EC
  c->lr=0x801C69F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C69F0
  c->r[6]=0u+0x803D0000u; // 801C69F4
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C69F8
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C69FC
  c->r[31]=0u+0x80330000u; // 801C6A00
  c->r[28]=R32(c->r[7]+0x00000018u); // 801C6A04
  c->r[30]=c->r[5]|c->r[5]; // 801C6A08
  cmpu(c,0,c->r[0],0x00000004u); // 801C6A0C
  c->r[27]=R16(c->r[3]+0x00000014u); // 801C6A10
  c->r[29]=c->r[3]|c->r[3]; // 801C6A14
  c->r[26]=c->r[4]|c->r[4]; // 801C6A18
  c->r[31]=c->r[31]+0x00004A78u; // 801C6A1C
  if (crb(c,0)) { goto L_801C6A38; } // 801C6A20
  c->r[3]=0u+0x00080000u; // 801C6A24
  c->r[5]=c->r[26]|c->r[26]; // 801C6A28
  c->r[3]=c->r[3]+0x00000003u; // 801C6A2C
  c->r[4]=c->r[31]+0x00000494u; // 801C6A30
  c->lr=0x801C6A38u; f_801ACB38(c); // 801C6A34
L_801C6A38:;
  c->r[0]=c->r[26]+0xFFFFFFFDu; // 801C6A38
  cmpu(c,0,c->r[0],0x0000001Bu); // 801C6A3C
  if (crb(c,1)) { goto L_801C6D90; } // 801C6A40
  c->r[3]=0u+0x80330000u; // 801C6A44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C6A48
  c->r[3]=c->r[3]+0x00005030u; // 801C6A4C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C6A50
  c->ctr=c->r[3]; // 801C6A54
  if (true) { switch (c->ctr) { case 0x801C6A5Cu: goto L_801C6A5C; case 0x801C6AA0u: goto L_801C6AA0; case 0x801C6B04u: goto L_801C6B04; case 0x801C6B80u: goto L_801C6B80; case 0x801C6BCCu: goto L_801C6BCC; case 0x801C6C24u: goto L_801C6C24; case 0x801C6C50u: goto L_801C6C50; case 0x801C6C9Cu: goto L_801C6C9C; case 0x801C6CBCu: goto L_801C6CBC; case 0x801C6CE0u: goto L_801C6CE0; case 0x801C6D20u: goto L_801C6D20; case 0x801C6D48u: goto L_801C6D48; case 0x801C6D90u: goto L_801C6D90; default: break; } dispatch(c,c->ctr); return; } // 801C6A58
L_801C6A5C:;
  c->r[3]=0u+0x803D0000u; // 801C6A5C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6A60
  cmpu(c,0,c->r[0],0x00000003u); // 801C6A64
  if (crb(c,0)) { goto L_801C6A80; } // 801C6A68
  c->r[3]=0u+0x00080000u; // 801C6A6C
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6A70
  c->r[3]=c->r[3]+0x00000002u; // 801C6A74
  c->r[4]=c->r[31]+0x00000040u; // 801C6A78
  c->lr=0x801C6A80u; f_801ACB38(c); // 801C6A7C
L_801C6A80:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6A80
  c->lr=0x801C6A88u; f_801CABB0(c); // 801C6A84
  c->r[12]=c->r[28]|c->r[28]; // 801C6A88
  c->r[3]=c->r[27]|c->r[27]; // 801C6A8C
  c->r[4]=0u+0x00000000u; // 801C6A90
  c->ctr=c->r[12]; // 801C6A94
  if (true) { c->lr=0x801C6A9Cu; dispatch(c,c->ctr); } // 801C6A98
  goto L_801C6D90; // 801C6A9C
L_801C6AA0:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6AA0
  c->r[4]=c->r[30]|c->r[30]; // 801C6AA4
  c->lr=0x801C6AACu; f_801CAEC4(c); // 801C6AA8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C6AAC
  if (crb(c,2)) { goto L_801C6AF4; } // 801C6AB0
  c->r[3]=0u+0x803D0000u; // 801C6AB4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6AB8
  cmpu(c,0,c->r[0],0x00000003u); // 801C6ABC
  if (crb(c,0)) { goto L_801C6AD8; } // 801C6AC0
  c->r[3]=0u+0x00080000u; // 801C6AC4
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6AC8
  c->r[3]=c->r[3]+0x00000002u; // 801C6ACC
  c->r[4]=c->r[31]+0x000004B0u; // 801C6AD0
  c->lr=0x801C6AD8u; f_801ACB38(c); // 801C6AD4
L_801C6AD8:;
  c->r[5]=R32(c->r[29]+0x00000030u); // 801C6AD8
  c->r[4]=c->r[30]|c->r[30]; // 801C6ADC
  c->r[3]=R16(c->r[29]+0x00000014u); // 801C6AE0
  c->r[12]=R32(c->r[5]+0x00000010u); // 801C6AE4
  c->ctr=c->r[12]; // 801C6AE8
  if (true) { c->lr=0x801C6AF0u; dispatch(c,c->ctr); } // 801C6AEC
  goto L_801C6D90; // 801C6AF0
L_801C6AF4:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6AF4
  c->r[4]=c->r[30]|c->r[30]; // 801C6AF8
  c->lr=0x801C6B00u; f_801CA0B4(c); // 801C6AFC
  goto L_801C6D90; // 801C6B00
L_801C6B04:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6B04
  c->r[4]=c->r[30]|c->r[30]; // 801C6B08
  c->lr=0x801C6B10u; f_801CB00C(c); // 801C6B0C
  c->r[0]=R8(c->r[29]+0x00000034u); // 801C6B10
  c->r[3]=c->r[0]|0x00000002u; // 801C6B14
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C6B18
  W8(c->r[29]+0x00000034u,c->r[3]); // 801C6B1C
  if (crb(c,2)) { goto L_801C6B40; } // 801C6B20
  c->r[0]=0u+0x00000006u; // 801C6B24
  c->r[3]=c->r[29]+0x00000018u; // 801C6B28
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C6B2C
  c->lr=0x801C6B34u; f_801AD15C(c); // 801C6B30
  c->r[3]=c->r[29]|c->r[29]; // 801C6B34
  c->r[4]=0u+0x00000000u; // 801C6B38
  c->lr=0x801C6B40u; f_801C7344(c); // 801C6B3C
L_801C6B40:;
  c->r[3]=0u+0x803D0000u; // 801C6B40
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6B44
  cmpu(c,0,c->r[0],0x00000003u); // 801C6B48
  if (crb(c,0)) { goto L_801C6B64; } // 801C6B4C
  c->r[3]=0u+0x00080000u; // 801C6B50
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6B54
  c->r[3]=c->r[3]+0x00000002u; // 801C6B58
  c->r[4]=c->r[31]+0x000004E0u; // 801C6B5C
  c->lr=0x801C6B64u; f_801ACB38(c); // 801C6B60
L_801C6B64:;
  c->r[5]=R32(c->r[29]+0x00000030u); // 801C6B64
  c->r[4]=c->r[30]|c->r[30]; // 801C6B68
  c->r[3]=R16(c->r[29]+0x00000014u); // 801C6B6C
  c->r[12]=R32(c->r[5]+0x00000014u); // 801C6B70
  c->ctr=c->r[12]; // 801C6B74
  if (true) { c->lr=0x801C6B7Cu; dispatch(c,c->ctr); } // 801C6B78
  goto L_801C6D90; // 801C6B7C
L_801C6B80:;
  c->r[3]=c->r[29]+0x00000018u; // 801C6B80
  c->lr=0x801C6B88u; f_801AD15C(c); // 801C6B84
  c->r[3]=0u+0x803D0000u; // 801C6B88
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6B8C
  cmpu(c,0,c->r[0],0x00000003u); // 801C6B90
  if (crb(c,0)) { goto L_801C6BB0; } // 801C6B94
  c->r[3]=0u+0x00080000u; // 801C6B98
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6B9C
  c->r[6]=R16(c->r[30]+0x00000000u); // 801C6BA0
  c->r[3]=c->r[3]+0x00000002u; // 801C6BA4
  c->r[4]=c->r[31]+0x00000510u; // 801C6BA8
  c->lr=0x801C6BB0u; f_801ACB50(c); // 801C6BAC
L_801C6BB0:;
  c->r[5]=R32(c->r[29]+0x00000030u); // 801C6BB0
  c->r[4]=c->r[30]|c->r[30]; // 801C6BB4
  c->r[3]=R16(c->r[29]+0x00000014u); // 801C6BB8
  c->r[12]=R32(c->r[5]+0x00000014u); // 801C6BBC
  c->ctr=c->r[12]; // 801C6BC0
  if (true) { c->lr=0x801C6BC8u; dispatch(c,c->ctr); } // 801C6BC4
  goto L_801C6D90; // 801C6BC8
L_801C6BCC:;
  c->r[3]=c->r[29]+0x00000018u; // 801C6BCC
  c->r[4]=0u+0x00000003u; // 801C6BD0
  c->r[5]=0u+0x0000001Eu; // 801C6BD4
  c->lr=0x801C6BDCu; f_801AD0EC(c); // 801C6BD8
  c->r[0]=0u+0x00000008u; // 801C6BDC
  c->r[3]=0u+0x803D0000u; // 801C6BE0
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C6BE4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6BE8
  cmpu(c,0,c->r[0],0x00000003u); // 801C6BEC
  if (crb(c,0)) { goto L_801C6C08; } // 801C6BF0
  c->r[3]=0u+0x00080000u; // 801C6BF4
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6BF8
  c->r[3]=c->r[3]+0x00000002u; // 801C6BFC
  c->r[4]=c->r[31]+0x0000054Cu; // 801C6C00
  c->lr=0x801C6C08u; f_801ACB38(c); // 801C6C04
L_801C6C08:;
  c->r[5]=R32(c->r[29]+0x00000030u); // 801C6C08
  c->r[4]=0u+0x00000001u; // 801C6C0C
  c->r[3]=R16(c->r[29]+0x00000014u); // 801C6C10
  c->r[12]=R32(c->r[5]+0x00000018u); // 801C6C14
  c->ctr=c->r[12]; // 801C6C18
  if (true) { c->lr=0x801C6C20u; dispatch(c,c->ctr); } // 801C6C1C
  goto L_801C6D90; // 801C6C20
L_801C6C24:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6C24
  c->r[4]=c->r[30]|c->r[30]; // 801C6C28
  c->lr=0x801C6C30u; f_801CB04C(c); // 801C6C2C
  c->r[3]=c->r[29]|c->r[29]; // 801C6C30
  c->r[4]=c->r[30]|c->r[30]; // 801C6C34
  c->lr=0x801C6C3Cu; f_801C9DBC(c); // 801C6C38
  c->r[3]=c->r[29]+0x00000018u; // 801C6C3C
  c->r[4]=0u+0x00000003u; // 801C6C40
  c->r[5]=0u+0x0000001Eu; // 801C6C44
  c->lr=0x801C6C4Cu; f_801AD0EC(c); // 801C6C48
  goto L_801C6D90; // 801C6C4C
L_801C6C50:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6C50
  c->r[4]=c->r[30]|c->r[30]; // 801C6C54
  c->lr=0x801C6C5Cu; f_801CB15C(c); // 801C6C58
  c->r[0]=R8(c->r[29]+0x00000034u); // 801C6C5C
  c->r[3]=c->r[0]|0x00000001u; // 801C6C60
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801C6C64
  W8(c->r[29]+0x00000034u,c->r[3]); // 801C6C68
  if (crb(c,2)) { goto L_801C6C8C; } // 801C6C6C
  c->r[0]=0u+0x00000006u; // 801C6C70
  c->r[3]=c->r[29]+0x00000018u; // 801C6C74
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C6C78
  c->lr=0x801C6C80u; f_801AD15C(c); // 801C6C7C
  c->r[3]=c->r[29]|c->r[29]; // 801C6C80
  c->r[4]=0u+0x00000000u; // 801C6C84
  c->lr=0x801C6C8Cu; f_801C7344(c); // 801C6C88
L_801C6C8C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6C8C
  c->r[4]=c->r[30]|c->r[30]; // 801C6C90
  c->lr=0x801C6C98u; f_801CA0B4(c); // 801C6C94
  goto L_801C6D90; // 801C6C98
L_801C6C9C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6C9C
  c->r[4]=c->r[30]|c->r[30]; // 801C6CA0
  c->lr=0x801C6CA8u; f_801CA0B4(c); // 801C6CA4
  c->r[3]=c->r[29]+0x00000018u; // 801C6CA8
  c->r[4]=0u+0x00000003u; // 801C6CAC
  c->r[5]=0u+0x0000001Eu; // 801C6CB0
  c->lr=0x801C6CB8u; f_801AD0EC(c); // 801C6CB4
  goto L_801C6D90; // 801C6CB8
L_801C6CBC:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6CBC
  c->lr=0x801C6CC4u; f_801CA560(c); // 801C6CC0
  c->r[0]=0u+0x00000007u; // 801C6CC4
  c->r[3]=c->r[29]+0x00000018u; // 801C6CC8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C6CCC
  c->r[4]=0u+0x00000003u; // 801C6CD0
  c->r[5]=0u+0x0000001Eu; // 801C6CD4
  c->lr=0x801C6CDCu; f_801AD0EC(c); // 801C6CD8
  goto L_801C6D90; // 801C6CDC
L_801C6CE0:;
  c->r[3]=0u+0x803D0000u; // 801C6CE0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6CE4
  cmpu(c,0,c->r[0],0x00000003u); // 801C6CE8
  if (crb(c,0)) { goto L_801C6D04; } // 801C6CEC
  c->r[3]=0u+0x00080000u; // 801C6CF0
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6CF4
  c->r[3]=c->r[3]+0x00000002u; // 801C6CF8
  c->r[4]=c->r[31]+0x0000058Cu; // 801C6CFC
  c->lr=0x801C6D04u; f_801ACB38(c); // 801C6D00
L_801C6D04:;
  c->r[5]=R32(c->r[29]+0x00000030u); // 801C6D04
  c->r[4]=c->r[30]|c->r[30]; // 801C6D08
  c->r[3]=R16(c->r[29]+0x00000014u); // 801C6D0C
  c->r[12]=R32(c->r[5]+0x00000024u); // 801C6D10
  c->ctr=c->r[12]; // 801C6D14
  if (true) { c->lr=0x801C6D1Cu; dispatch(c,c->ctr); } // 801C6D18
  goto L_801C6D90; // 801C6D1C
L_801C6D20:;
  c->r[0]=R8(c->r[29]+0x00000034u); // 801C6D20
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C6D24
  if (crb(c,2)) { goto L_801C6D3C; } // 801C6D28
  c->r[4]=c->r[30]|c->r[30]; // 801C6D2C
  c->r[3]=c->r[29]+0x00000070u; // 801C6D30
  c->lr=0x801C6D38u; f_801AA648(c); // 801C6D34
  goto L_801C6D90; // 801C6D38
L_801C6D3C:;
  c->r[3]=c->r[30]|c->r[30]; // 801C6D3C
  c->lr=0x801C6D44u; f_801AA228(c); // 801C6D40
  goto L_801C6D90; // 801C6D44
L_801C6D48:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6D48
  c->lr=0x801C6D50u; f_801CA560(c); // 801C6D4C
  c->r[3]=0u+0x803D0000u; // 801C6D50
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6D54
  cmpu(c,0,c->r[0],0x00000003u); // 801C6D58
  if (crb(c,0)) { goto L_801C6D74; } // 801C6D5C
  c->r[3]=0u+0x00080000u; // 801C6D60
  c->r[5]=R16(c->r[29]+0x00000014u); // 801C6D64
  c->r[3]=c->r[3]+0x00000002u; // 801C6D68
  c->r[4]=c->r[31]+0x00000040u; // 801C6D6C
  c->lr=0x801C6D74u; f_801ACB38(c); // 801C6D70
L_801C6D74:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6D74
  c->lr=0x801C6D7Cu; f_801CABB0(c); // 801C6D78
  c->r[12]=c->r[28]|c->r[28]; // 801C6D7C
  c->r[3]=c->r[27]|c->r[27]; // 801C6D80
  c->r[4]=0u+0x00000000u; // 801C6D84
  c->ctr=c->r[12]; // 801C6D88
  if (true) { c->lr=0x801C6D90u; dispatch(c,c->ctr); } // 801C6D8C
L_801C6D90:;
  c->r[11]=c->r[1]+0x00000020u; // 801C6D90
  c->lr=0x801C6D98u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6D94
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6D98
  c->lr=c->r[0]; // 801C6D9C
  c->r[1]=c->r[1]+0x00000020u; // 801C6DA0
  return; // 801C6DA4
}

// l2c_csm_open
void f_801C6DA8(Ctx* __restrict c) {
  trace_call(0x801C6DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6DA8
  c->r[0]=c->lr; // 801C6DAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6DB0
  c->r[11]=c->r[1]+0x00000020u; // 801C6DB4
  c->lr=0x801C6DBCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6DB8
  c->r[6]=0u+0x803D0000u; // 801C6DBC
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C6DC0
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C6DC4
  c->r[30]=0u+0x80330000u; // 801C6DC8
  c->r[29]=R32(c->r[7]+0x00000018u); // 801C6DCC
  c->r[31]=c->r[3]|c->r[3]; // 801C6DD0
  cmpu(c,0,c->r[0],0x00000004u); // 801C6DD4
  c->r[28]=R16(c->r[3]+0x00000014u); // 801C6DD8
  c->r[26]=c->r[4]|c->r[4]; // 801C6DDC
  c->r[27]=c->r[5]|c->r[5]; // 801C6DE0
  c->r[30]=c->r[30]+0x00004A78u; // 801C6DE4
  if (crb(c,0)) { goto L_801C6E00; } // 801C6DE8
  c->r[3]=0u+0x00080000u; // 801C6DEC
  c->r[5]=c->r[26]|c->r[26]; // 801C6DF0
  c->r[3]=c->r[3]+0x00000003u; // 801C6DF4
  c->r[4]=c->r[30]+0x00000628u; // 801C6DF8
  c->lr=0x801C6E00u; f_801ACB38(c); // 801C6DFC
L_801C6E00:;
  c->r[0]=c->r[26]+0xFFFFFFFDu; // 801C6E00
  cmpu(c,0,c->r[0],0x0000001Au); // 801C6E04
  if (crb(c,1)) { goto L_801C6FEC; } // 801C6E08
  c->r[3]=0u+0x80330000u; // 801C6E0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C6E10
  c->r[3]=c->r[3]+0x000050BCu; // 801C6E14
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C6E18
  c->ctr=c->r[3]; // 801C6E1C
  if (true) { switch (c->ctr) { case 0x801C6E24u: goto L_801C6E24; case 0x801C6E68u: goto L_801C6E68; case 0x801C6E8Cu: goto L_801C6E8C; case 0x801C6F04u: goto L_801C6F04; case 0x801C6F5Cu: goto L_801C6F5C; case 0x801C6F78u: goto L_801C6F78; case 0x801C6F9Cu: goto L_801C6F9C; case 0x801C6FB4u: goto L_801C6FB4; case 0x801C6FECu: goto L_801C6FEC; default: break; } dispatch(c,c->ctr); return; } // 801C6E20
L_801C6E24:;
  c->r[3]=0u+0x803D0000u; // 801C6E24
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6E28
  cmpu(c,0,c->r[0],0x00000003u); // 801C6E2C
  if (crb(c,0)) { goto L_801C6E48; } // 801C6E30
  c->r[3]=0u+0x00080000u; // 801C6E34
  c->r[5]=R16(c->r[31]+0x00000014u); // 801C6E38
  c->r[3]=c->r[3]+0x00000002u; // 801C6E3C
  c->r[4]=c->r[30]+0x00000040u; // 801C6E40
  c->lr=0x801C6E48u; f_801ACB38(c); // 801C6E44
L_801C6E48:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6E48
  c->lr=0x801C6E50u; f_801CABB0(c); // 801C6E4C
  c->r[12]=c->r[29]|c->r[29]; // 801C6E50
  c->r[3]=c->r[28]|c->r[28]; // 801C6E54
  c->r[4]=0u+0x00000000u; // 801C6E58
  c->ctr=c->r[12]; // 801C6E5C
  if (true) { c->lr=0x801C6E64u; dispatch(c,c->ctr); } // 801C6E60
  goto L_801C6FEC; // 801C6E64
L_801C6E68:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801C6E68
  c->r[12]=R32(c->r[3]+0x00000020u); // 801C6E6C
  cmps(c,0,(int32_t)c->r[12],0); // 801C6E70
  if (crb(c,2)) { goto L_801C6FEC; } // 801C6E74
  c->r[3]=R32(c->r[31]+0x00000010u); // 801C6E78
  c->r[3]=c->r[3]+0x0000002Au; // 801C6E7C
  c->ctr=c->r[12]; // 801C6E80
  if (true) { c->lr=0x801C6E88u; dispatch(c,c->ctr); } // 801C6E84
  goto L_801C6FEC; // 801C6E88
L_801C6E8C:;
  c->r[28]=R32(c->r[31]+0x00000004u); // 801C6E8C
  c->r[3]=0u+0x00000005u; // 801C6E90
  c->r[29]=R8(c->r[31]+0x00000034u); // 801C6E94
  c->r[0]=0u+0x00000000u; // 801C6E98
  W32(c->r[31]+0x00000004u,c->r[3]); // 801C6E9C
  c->r[3]=c->r[31]+0x00000018u; // 801C6EA0
  c->r[4]=0u+0x00000003u; // 801C6EA4
  c->r[5]=0u+0x0000001Eu; // 801C6EA8
  W8(c->r[31]+0x00000034u,c->r[0]); // 801C6EAC
  c->lr=0x801C6EB4u; f_801AD0EC(c); // 801C6EB0
  c->r[3]=c->r[31]|c->r[31]; // 801C6EB4
  c->r[4]=c->r[27]|c->r[27]; // 801C6EB8
  c->lr=0x801C6EC0u; f_801CAEC4(c); // 801C6EBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C6EC0
  if (crb(c,2)) { goto L_801C6EE4; } // 801C6EC4
  c->r[5]=R32(c->r[31]+0x00000030u); // 801C6EC8
  c->r[4]=c->r[27]|c->r[27]; // 801C6ECC
  c->r[3]=R16(c->r[31]+0x00000014u); // 801C6ED0
  c->r[12]=R32(c->r[5]+0x00000010u); // 801C6ED4
  c->ctr=c->r[12]; // 801C6ED8
  if (true) { c->lr=0x801C6EE0u; dispatch(c,c->ctr); } // 801C6EDC
  goto L_801C6FEC; // 801C6EE0
L_801C6EE4:;
  c->r[3]=c->r[31]+0x00000018u; // 801C6EE4
  c->lr=0x801C6EECu; f_801AD15C(c); // 801C6EE8
  W32(c->r[31]+0x00000004u,c->r[28]); // 801C6EEC
  c->r[3]=c->r[31]|c->r[31]; // 801C6EF0
  c->r[4]=c->r[27]|c->r[27]; // 801C6EF4
  W8(c->r[31]+0x00000034u,c->r[29]); // 801C6EF8
  c->lr=0x801C6F00u; f_801CA0B4(c); // 801C6EFC
  goto L_801C6FEC; // 801C6F00
L_801C6F04:;
  c->r[0]=0u+0x00000008u; // 801C6F04
  c->r[3]=c->r[31]+0x00000018u; // 801C6F08
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C6F0C
  c->r[4]=0u+0x00000003u; // 801C6F10
  c->r[5]=0u+0x0000001Eu; // 801C6F14
  c->lr=0x801C6F1Cu; f_801AD0EC(c); // 801C6F18
  c->r[3]=0u+0x803D0000u; // 801C6F1C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C6F20
  cmpu(c,0,c->r[0],0x00000003u); // 801C6F24
  if (crb(c,0)) { goto L_801C6F40; } // 801C6F28
  c->r[3]=0u+0x00080000u; // 801C6F2C
  c->r[5]=R16(c->r[31]+0x00000014u); // 801C6F30
  c->r[3]=c->r[3]+0x00000002u; // 801C6F34
  c->r[4]=c->r[30]+0x0000054Cu; // 801C6F38
  c->lr=0x801C6F40u; f_801ACB38(c); // 801C6F3C
L_801C6F40:;
  c->r[5]=R32(c->r[31]+0x00000030u); // 801C6F40
  c->r[4]=0u+0x00000001u; // 801C6F44
  c->r[3]=R16(c->r[31]+0x00000014u); // 801C6F48
  c->r[12]=R32(c->r[5]+0x00000018u); // 801C6F4C
  c->ctr=c->r[12]; // 801C6F50
  if (true) { c->lr=0x801C6F58u; dispatch(c,c->ctr); } // 801C6F54
  goto L_801C6FEC; // 801C6F58
L_801C6F5C:;
  c->r[5]=R32(c->r[31]+0x00000030u); // 801C6F5C
  c->r[4]=c->r[27]|c->r[27]; // 801C6F60
  c->r[3]=R16(c->r[31]+0x00000014u); // 801C6F64
  c->r[12]=R32(c->r[5]+0x00000024u); // 801C6F68
  c->ctr=c->r[12]; // 801C6F6C
  if (true) { c->lr=0x801C6F74u; dispatch(c,c->ctr); } // 801C6F70
  goto L_801C6FEC; // 801C6F74
L_801C6F78:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6F78
  c->lr=0x801C6F80u; f_801CA560(c); // 801C6F7C
  c->r[0]=0u+0x00000007u; // 801C6F80
  c->r[3]=c->r[31]+0x00000018u; // 801C6F84
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C6F88
  c->r[4]=0u+0x00000003u; // 801C6F8C
  c->r[5]=0u+0x0000001Eu; // 801C6F90
  c->lr=0x801C6F98u; f_801AD0EC(c); // 801C6F94
  goto L_801C6FEC; // 801C6F98
L_801C6F9C:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 801C6F9C
  c->r[3]=c->r[31]|c->r[31]; // 801C6FA0
  c->r[4]=c->r[27]|c->r[27]; // 801C6FA4
  W16(c->r[27]+0x00000000u,c->r[0]); // 801C6FA8
  c->lr=0x801C6FB0u; f_801C7344(c); // 801C6FAC
  goto L_801C6FEC; // 801C6FB0
L_801C6FB4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6FB4
  c->r[4]=c->r[27]|c->r[27]; // 801C6FB8
  c->lr=0x801C6FC0u; f_801CB04C(c); // 801C6FBC
  c->r[3]=c->r[31]|c->r[31]; // 801C6FC0
  c->r[4]=c->r[27]|c->r[27]; // 801C6FC4
  c->lr=0x801C6FCCu; f_801C9DBC(c); // 801C6FC8
  c->r[3]=0u+0x00000005u; // 801C6FCC
  c->r[0]=0u+0x00000000u; // 801C6FD0
  W32(c->r[31]+0x00000004u,c->r[3]); // 801C6FD4
  c->r[3]=c->r[31]+0x00000018u; // 801C6FD8
  c->r[4]=0u+0x00000003u; // 801C6FDC
  c->r[5]=0u+0x0000001Eu; // 801C6FE0
  W8(c->r[31]+0x00000034u,c->r[0]); // 801C6FE4
  c->lr=0x801C6FECu; f_801AD0EC(c); // 801C6FE8
L_801C6FEC:;
  c->r[11]=c->r[1]+0x00000020u; // 801C6FEC
  c->lr=0x801C6FF4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6FF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6FF4
  c->lr=c->r[0]; // 801C6FF8
  c->r[1]=c->r[1]+0x00000020u; // 801C6FFC
  return; // 801C7000
}

// l2c_csm_w4_l2cap_disconnect_rsp
void f_801C7004(Ctx* __restrict c) {
  trace_call(0x801C7004u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7004
  c->r[0]=c->lr; // 801C7008
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C700C
  c->r[11]=c->r[1]+0x00000030u; // 801C7010
  c->lr=0x801C7018u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7014
  c->r[6]=0u+0x803D0000u; // 801C7018
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C701C
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C7020
  c->r[31]=0u+0x80330000u; // 801C7024
  c->r[30]=R32(c->r[7]+0x0000001Cu); // 801C7028
  c->r[25]=c->r[3]|c->r[3]; // 801C702C
  cmpu(c,0,c->r[0],0x00000004u); // 801C7030
  c->r[28]=R32(c->r[7]+0x00000018u); // 801C7034
  c->r[29]=R16(c->r[3]+0x00000014u); // 801C7038
  c->r[26]=c->r[4]|c->r[4]; // 801C703C
  c->r[27]=c->r[5]|c->r[5]; // 801C7040
  c->r[31]=c->r[31]+0x00004A78u; // 801C7044
  if (crb(c,0)) { goto L_801C7060; } // 801C7048
  c->r[3]=0u+0x00080000u; // 801C704C
  c->r[5]=c->r[26]|c->r[26]; // 801C7050
  c->r[3]=c->r[3]+0x00000003u; // 801C7054
  c->r[4]=c->r[31]+0x000006B0u; // 801C7058
  c->lr=0x801C7060u; f_801ACB38(c); // 801C705C
L_801C7060:;
  c->r[0]=c->r[26]+0xFFFFFFFDu; // 801C7060
  cmpu(c,0,c->r[0],0x0000001Bu); // 801C7064
  if (crb(c,1)) { goto L_801C71D0; } // 801C7068
  c->r[3]=0u+0x80330000u; // 801C706C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C7070
  c->r[3]=c->r[3]+0x00005180u; // 801C7074
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C7078
  c->ctr=c->r[3]; // 801C707C
  if (true) { switch (c->ctr) { case 0x801C7084u: goto L_801C7084; case 0x801C70C8u: goto L_801C70C8; case 0x801C7114u: goto L_801C7114; case 0x801C7174u: goto L_801C7174; case 0x801C71C8u: goto L_801C71C8; case 0x801C71D0u: goto L_801C71D0; default: break; } dispatch(c,c->ctr); return; } // 801C7080
L_801C7084:;
  c->r[3]=0u+0x803D0000u; // 801C7084
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C7088
  cmpu(c,0,c->r[0],0x00000003u); // 801C708C
  if (crb(c,0)) { goto L_801C70A8; } // 801C7090
  c->r[3]=0u+0x00080000u; // 801C7094
  c->r[5]=R16(c->r[25]+0x00000014u); // 801C7098
  c->r[3]=c->r[3]+0x00000002u; // 801C709C
  c->r[4]=c->r[31]+0x00000040u; // 801C70A0
  c->lr=0x801C70A8u; f_801ACB38(c); // 801C70A4
L_801C70A8:;
  c->r[3]=c->r[25]|c->r[25]; // 801C70A8
  c->lr=0x801C70B0u; f_801CABB0(c); // 801C70AC
  c->r[12]=c->r[28]|c->r[28]; // 801C70B0
  c->r[3]=c->r[29]|c->r[29]; // 801C70B4
  c->r[4]=0u+0x00000000u; // 801C70B8
  c->ctr=c->r[12]; // 801C70BC
  if (true) { c->lr=0x801C70C4u; dispatch(c,c->ctr); } // 801C70C0
  goto L_801C71D0; // 801C70C4
L_801C70C8:;
  c->r[3]=c->r[25]|c->r[25]; // 801C70C8
  c->lr=0x801C70D0u; f_801CABB0(c); // 801C70CC
  cmps(c,0,(int32_t)c->r[30],0); // 801C70D0
  if (crb(c,2)) { goto L_801C71D0; } // 801C70D4
  c->r[3]=0u+0x803D0000u; // 801C70D8
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C70DC
  cmpu(c,0,c->r[0],0x00000003u); // 801C70E0
  if (crb(c,0)) { goto L_801C70FC; } // 801C70E4
  c->r[3]=0u+0x00080000u; // 801C70E8
  c->r[5]=c->r[29]|c->r[29]; // 801C70EC
  c->r[3]=c->r[3]+0x00000002u; // 801C70F0
  c->r[4]=c->r[31]+0x000006D8u; // 801C70F4
  c->lr=0x801C70FCu; f_801ACB38(c); // 801C70F8
L_801C70FC:;
  c->r[12]=c->r[30]|c->r[30]; // 801C70FC
  c->r[3]=c->r[29]|c->r[29]; // 801C7100
  c->r[4]=0u+0x00000000u; // 801C7104
  c->ctr=c->r[12]; // 801C7108
  if (true) { c->lr=0x801C7110u; dispatch(c,c->ctr); } // 801C710C
  goto L_801C71D0; // 801C7110
L_801C7114:;
  c->r[3]=R32(c->r[25]+0x00000010u); // 801C7114
  c->r[4]=R8(c->r[25]+0x00000036u); // 801C7118
  c->r[5]=R16(c->r[25]+0x00000014u); // 801C711C
  c->r[6]=R16(c->r[25]+0x00000016u); // 801C7120
  c->lr=0x801C7128u; f_801CA634(c); // 801C7124
  c->r[3]=c->r[25]|c->r[25]; // 801C7128
  c->lr=0x801C7130u; f_801CABB0(c); // 801C712C
  cmps(c,0,(int32_t)c->r[30],0); // 801C7130
  if (crb(c,2)) { goto L_801C71D0; } // 801C7134
  c->r[3]=0u+0x803D0000u; // 801C7138
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C713C
  cmpu(c,0,c->r[0],0x00000003u); // 801C7140
  if (crb(c,0)) { goto L_801C715C; } // 801C7144
  c->r[3]=0u+0x00080000u; // 801C7148
  c->r[5]=c->r[29]|c->r[29]; // 801C714C
  c->r[3]=c->r[3]+0x00000002u; // 801C7150
  c->r[4]=c->r[31]+0x000006D8u; // 801C7154
  c->lr=0x801C715Cu; f_801ACB38(c); // 801C7158
L_801C715C:;
  c->r[12]=c->r[30]|c->r[30]; // 801C715C
  c->r[3]=c->r[29]|c->r[29]; // 801C7160
  c->r[4]=0u+0x00000000u; // 801C7164
  c->ctr=c->r[12]; // 801C7168
  if (true) { c->lr=0x801C7170u; dispatch(c,c->ctr); } // 801C716C
  goto L_801C71D0; // 801C7170
L_801C7174:;
  c->r[3]=c->r[25]|c->r[25]; // 801C7174
  c->lr=0x801C717Cu; f_801CABB0(c); // 801C7178
  cmps(c,0,(int32_t)c->r[30],0); // 801C717C
  if (crb(c,2)) { goto L_801C71D0; } // 801C7180
  c->r[3]=0u+0x803D0000u; // 801C7184
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C7188
  cmpu(c,0,c->r[0],0x00000003u); // 801C718C
  if (crb(c,0)) { goto L_801C71A8; } // 801C7190
  c->r[3]=0u+0x00080000u; // 801C7194
  c->r[5]=c->r[29]|c->r[29]; // 801C7198
  c->r[3]=c->r[3]+0x00000002u; // 801C719C
  c->r[4]=c->r[31]+0x000006D8u; // 801C71A0
  c->lr=0x801C71A8u; f_801ACB38(c); // 801C71A4
L_801C71A8:;
  c->r[3]=0u+0x00010000u; // 801C71A8
  c->r[12]=c->r[30]|c->r[30]; // 801C71AC
  c->r[0]=c->r[3]+0xFFFFEEEEu; // 801C71B0
  c->r[3]=c->r[29]|c->r[29]; // 801C71B4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801C71B8
  c->ctr=c->r[12]; // 801C71BC
  if (true) { c->lr=0x801C71C4u; dispatch(c,c->ctr); } // 801C71C0
  goto L_801C71D0; // 801C71C4
L_801C71C8:;
  c->r[3]=c->r[27]|c->r[27]; // 801C71C8
  c->lr=0x801C71D0u; f_801AA228(c); // 801C71CC
L_801C71D0:;
  c->r[11]=c->r[1]+0x00000030u; // 801C71D0
  c->lr=0x801C71D8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C71D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C71D8
  c->lr=c->r[0]; // 801C71DC
  c->r[1]=c->r[1]+0x00000030u; // 801C71E0
  return; // 801C71E4
}

// l2c_csm_w4_l2ca_disconnect_rsp
void f_801C71E8(Ctx* __restrict c) {
  trace_call(0x801C71E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C71E8
  c->r[0]=c->lr; // 801C71EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C71F0
  c->r[11]=c->r[1]+0x00000020u; // 801C71F4
  c->lr=0x801C71FCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C71F8
  c->r[6]=0u+0x803D0000u; // 801C71FC
  c->r[7]=R32(c->r[3]+0x00000030u); // 801C7200
  c->r[0]=R8(c->r[6]+0xFFFFB1E0u); // 801C7204
  c->r[27]=c->r[3]|c->r[3]; // 801C7208
  c->r[31]=R32(c->r[7]+0x00000018u); // 801C720C
  c->r[28]=c->r[4]|c->r[4]; // 801C7210
  cmpu(c,0,c->r[0],0x00000004u); // 801C7214
  c->r[30]=R16(c->r[3]+0x00000014u); // 801C7218
  c->r[29]=c->r[5]|c->r[5]; // 801C721C
  if (crb(c,0)) { goto L_801C723C; } // 801C7220
  c->r[3]=0u+0x00080000u; // 801C7224
  c->r[4]=0u+0x80330000u; // 801C7228
  c->r[5]=c->r[28]|c->r[28]; // 801C722C
  c->r[3]=c->r[3]+0x00000003u; // 801C7230
  c->r[4]=c->r[4]+0x000051F0u; // 801C7234
  c->lr=0x801C723Cu; f_801ACB38(c); // 801C7238
L_801C723C:;
  c->r[0]=c->r[28]+0xFFFFFFFDu; // 801C723C
  cmpu(c,0,c->r[0],0x0000001Bu); // 801C7240
  if (crb(c,1)) { goto L_801C732C; } // 801C7244
  c->r[3]=0u+0x80330000u; // 801C7248
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C724C
  c->r[3]=c->r[3]+0x00005218u; // 801C7250
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C7254
  c->ctr=c->r[3]; // 801C7258
  if (true) { switch (c->ctr) { case 0x801C7260u: goto L_801C7260; case 0x801C72A8u: goto L_801C72A8; case 0x801C7304u: goto L_801C7304; case 0x801C7324u: goto L_801C7324; case 0x801C732Cu: goto L_801C732C; default: break; } dispatch(c,c->ctr); return; } // 801C725C
L_801C7260:;
  c->r[3]=0u+0x803D0000u; // 801C7260
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C7264
  cmpu(c,0,c->r[0],0x00000003u); // 801C7268
  if (crb(c,0)) { goto L_801C7288; } // 801C726C
  c->r[3]=0u+0x00080000u; // 801C7270
  c->r[4]=0u+0x80330000u; // 801C7274
  c->r[5]=R16(c->r[27]+0x00000014u); // 801C7278
  c->r[3]=c->r[3]+0x00000002u; // 801C727C
  c->r[4]=c->r[4]+0x00004AB8u; // 801C7280
  c->lr=0x801C7288u; f_801ACB38(c); // 801C7284
L_801C7288:;
  c->r[3]=c->r[27]|c->r[27]; // 801C7288
  c->lr=0x801C7290u; f_801CABB0(c); // 801C728C
  c->r[12]=c->r[31]|c->r[31]; // 801C7290
  c->r[3]=c->r[30]|c->r[30]; // 801C7294
  c->r[4]=0u+0x00000000u; // 801C7298
  c->ctr=c->r[12]; // 801C729C
  if (true) { c->lr=0x801C72A4u; dispatch(c,c->ctr); } // 801C72A0
  goto L_801C732C; // 801C72A4
L_801C72A8:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801C72A8
  c->r[4]=R8(c->r[27]+0x00000036u); // 801C72AC
  c->r[5]=R16(c->r[27]+0x00000014u); // 801C72B0
  c->r[6]=R16(c->r[27]+0x00000016u); // 801C72B4
  c->lr=0x801C72BCu; f_801CA634(c); // 801C72B8
  c->r[3]=0u+0x803D0000u; // 801C72BC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C72C0
  cmpu(c,0,c->r[0],0x00000003u); // 801C72C4
  if (crb(c,0)) { goto L_801C72E4; } // 801C72C8
  c->r[3]=0u+0x00080000u; // 801C72CC
  c->r[4]=0u+0x80330000u; // 801C72D0
  c->r[5]=R16(c->r[27]+0x00000014u); // 801C72D4
  c->r[3]=c->r[3]+0x00000002u; // 801C72D8
  c->r[4]=c->r[4]+0x00004AB8u; // 801C72DC
  c->lr=0x801C72E4u; f_801ACB38(c); // 801C72E0
L_801C72E4:;
  c->r[3]=c->r[27]|c->r[27]; // 801C72E4
  c->lr=0x801C72ECu; f_801CABB0(c); // 801C72E8
  c->r[12]=c->r[31]|c->r[31]; // 801C72EC
  c->r[3]=c->r[30]|c->r[30]; // 801C72F0
  c->r[4]=0u+0x00000000u; // 801C72F4
  c->ctr=c->r[12]; // 801C72F8
  if (true) { c->lr=0x801C7300u; dispatch(c,c->ctr); } // 801C72FC
  goto L_801C732C; // 801C7300
L_801C7304:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801C7304
  c->r[4]=R8(c->r[27]+0x00000036u); // 801C7308
  c->r[5]=R16(c->r[27]+0x00000014u); // 801C730C
  c->r[6]=R16(c->r[27]+0x00000016u); // 801C7310
  c->lr=0x801C7318u; f_801CA634(c); // 801C7314
  c->r[3]=c->r[27]|c->r[27]; // 801C7318
  c->lr=0x801C7320u; f_801CABB0(c); // 801C731C
  goto L_801C732C; // 801C7320
L_801C7324:;
  c->r[3]=c->r[29]|c->r[29]; // 801C7324
  c->lr=0x801C732Cu; f_801AA228(c); // 801C7328
L_801C732C:;
  c->r[11]=c->r[1]+0x00000020u; // 801C732C
  c->lr=0x801C7334u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7330
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7334
  c->lr=c->r[0]; // 801C7338
  c->r[1]=c->r[1]+0x00000020u; // 801C733C
  return; // 801C7340
}

// forward_peer_data
void f_801C7344(Ctx* __restrict c) {
  trace_call(0x801C7344u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7344
  c->r[0]=c->lr; // 801C7348
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C734C
  c->r[11]=c->r[1]+0x00000020u; // 801C7350
  c->lr=0x801C7358u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7354
  cmps(c,0,(int32_t)c->r[4],0); // 801C7358
  c->r[27]=c->r[3]|c->r[3]; // 801C735C
  c->r[28]=c->r[4]|c->r[4]; // 801C7360
  if (crb(c,2)) { goto L_801C738C; } // 801C7364
  c->r[0]=R16(c->r[3]+0x00000078u); // 801C7368
  cmps(c,0,(int32_t)c->r[0],0); // 801C736C
  if (crb(c,2)) { goto L_801C738C; } // 801C7370
  c->r[3]=c->r[3]+0x00000070u; // 801C7374
  c->lr=0x801C737Cu; f_801AA648(c); // 801C7378
  c->r[3]=c->r[27]+0x00000070u; // 801C737C
  c->lr=0x801C7384u; f_801AA8C4(c); // 801C7380
  c->r[28]=c->r[3]|c->r[3]; // 801C7384
  goto L_801C73A0; // 801C7388
L_801C738C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C738C
  if (!crb(c,2)) { goto L_801C73A0; } // 801C7390
  c->r[3]=c->r[3]+0x00000070u; // 801C7394
  c->lr=0x801C739Cu; f_801AA8C4(c); // 801C7398
  c->r[28]=c->r[3]|c->r[3]; // 801C739C
L_801C73A0:;
  c->r[31]=0u+0x803C0000u; // 801C73A0
  c->r[30]=0u+0x80330000u; // 801C73A4
  c->r[31]=c->r[31]+0x00007BF0u; // 801C73A8
  c->r[29]=0u+0x803D0000u; // 801C73AC
  goto L_801C74C8; // 801C73B0
L_801C73B4:;
  c->r[5]=R16(c->r[28]+0x00000004u); // 801C73B4
  cmpu(c,0,c->r[5],0x00000009u); // 801C73B8
  if (!crb(c,0)) { goto L_801C73F0; } // 801C73BC
  c->r[0]=R8(c->r[29]+0xFFFFB1E0u); // 801C73C0
  cmpu(c,0,c->r[0],0x00000001u); // 801C73C4
  if (crb(c,0)) { goto L_801C73D8; } // 801C73C8
  c->r[4]=c->r[30]+0x00005288u; // 801C73CC
  c->r[3]=0u+0x00080000u; // 801C73D0
  c->lr=0x801C73D8u; f_801ACB38(c); // 801C73D4
L_801C73D8:;
  c->r[3]=c->r[28]|c->r[28]; // 801C73D8
  c->lr=0x801C73E0u; f_801AA228(c); // 801C73DC
  c->r[3]=c->r[27]+0x00000070u; // 801C73E0
  c->lr=0x801C73E8u; f_801AA8C4(c); // 801C73E4
  c->r[28]=c->r[3]|c->r[3]; // 801C73E8
  goto L_801C74C8; // 801C73EC
L_801C73F0:;
  c->r[0]=c->r[5]+0xFFFFFFF8u; // 801C73F0
  W16(c->r[28]+0x00000004u,c->r[0]); // 801C73F4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801C73F8
  c->r[5]=c->r[28]+c->r[0]; // 801C73FC
  c->r[4]=R16(c->r[28]+0x00000002u); // 801C7400
  c->r[3]=c->r[5]+0x0000000Au; // 801C7404
  c->r[0]=c->r[4]+0x00000004u; // 801C7408
  W16(c->r[28]+0x00000002u,c->r[0]); // 801C740C
  c->r[4]=R32(c->r[27]+0x00000010u); // 801C7410
  c->r[0]=R16(c->r[4]+0x00000028u); // 801C7414
  c->r[0]=c->r[0]|0x00002000u; // 801C7418
  W8(c->r[5]+0x00000008u,c->r[0]); // 801C741C
  c->r[4]=R32(c->r[27]+0x00000010u); // 801C7420
  c->r[0]=R16(c->r[4]+0x00000028u); // 801C7424
  c->r[0]=c->r[0]|0x00002000u; // 801C7428
  c->r[0]=sraw(c,c->r[0],8); // 801C742C
  W8(c->r[5]+0x00000009u,c->r[0]); // 801C7430
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801C7434
  c->r[4]=R16(c->r[28]+0x00000002u); // 801C7438
  cmpu(c,0,c->r[4],c->r[0]); // 801C743C
  if (!crb(c,1)) { goto L_801C745C; } // 801C7440
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C7444
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801C7448
  c->r[0]=sraw(c,c->r[0],8); // 801C744C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801C7450
  c->r[3]=c->r[3]+0x00000002u; // 801C7454
  goto L_801C7470; // 801C7458
L_801C745C:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 801C745C
  c->r[0]=R16(c->r[28]+0x00000002u); // 801C7460
  c->r[0]=sraw(c,c->r[0],8); // 801C7464
  W8(c->r[3]+0x00000001u,c->r[0]); // 801C7468
  c->r[3]=c->r[3]+0x00000002u; // 801C746C
L_801C7470:;
  c->r[6]=R16(c->r[28]+0x00000002u); // 801C7470
  c->r[5]=c->r[28]|c->r[28]; // 801C7474
  c->r[4]=0u+0x00000000u; // 801C7478
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 801C747C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C7480
  c->r[6]=R16(c->r[28]+0x00000002u); // 801C7484
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 801C7488
  c->r[0]=sraw(c,c->r[0],8); // 801C748C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801C7490
  c->r[0]=R16(c->r[27]+0x00000016u); // 801C7494
  W8(c->r[3]+0x00000002u,c->r[0]); // 801C7498
  c->r[0]=R16(c->r[27]+0x00000016u); // 801C749C
  c->r[0]=sraw(c,c->r[0],8); // 801C74A0
  W8(c->r[3]+0x00000003u,c->r[0]); // 801C74A4
  c->r[3]=R16(c->r[28]+0x00000002u); // 801C74A8
  c->r[0]=c->r[3]+0x00000004u; // 801C74AC
  W16(c->r[28]+0x00000002u,c->r[0]); // 801C74B0
  c->r[3]=R32(c->r[27]+0x00000010u); // 801C74B4
  c->lr=0x801C74BCu; f_801C7CD0(c); // 801C74B8
  c->r[3]=c->r[27]+0x00000070u; // 801C74BC
  c->lr=0x801C74C4u; f_801AA8C4(c); // 801C74C0
  c->r[28]=c->r[3]|c->r[3]; // 801C74C4
L_801C74C8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C74C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C73B4; } // 801C74CC
  c->r[11]=c->r[1]+0x00000020u; // 801C74D0
  c->lr=0x801C74D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C74D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C74D8
  c->lr=c->r[0]; // 801C74DC
  c->r[1]=c->r[1]+0x00000020u; // 801C74E0
  return; // 801C74E4
}

// l2c_link_hci_conn_req
void f_801C74E8(Ctx* __restrict c) {
  trace_call(0x801C74E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C74E8
  c->r[0]=c->lr; // 801C74EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C74F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C74F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C74F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C74FC
  c->r[29]=c->r[3]|c->r[3]; // 801C7500
  c->r[3]=0u+0x00000002u; // 801C7504
  c->lr=0x801C750Cu; f_801AA140(c); // 801C7508
  cmps(c,0,(int32_t)c->r[3],0); // 801C750C
  c->r[30]=c->r[3]|c->r[3]; // 801C7510
  if (crb(c,2)) { goto L_801C7620; } // 801C7514
  c->r[3]=c->r[29]|c->r[29]; // 801C7518
  c->lr=0x801C7520u; f_801C9878(c); // 801C751C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7520
  c->r[31]=c->r[3]|c->r[3]; // 801C7524
  if (!crb(c,2)) { goto L_801C75AC; } // 801C7528
  c->r[3]=c->r[29]|c->r[29]; // 801C752C
  c->lr=0x801C7534u; f_801C96A4(c); // 801C7530
  cmps(c,0,(int32_t)c->r[3],0); // 801C7534
  c->r[31]=c->r[3]|c->r[3]; // 801C7538
  if (!crb(c,2)) { goto L_801C7574; } // 801C753C
  c->r[3]=c->r[30]|c->r[30]; // 801C7540
  c->r[4]=c->r[29]|c->r[29]; // 801C7544
  c->r[5]=0u+0x00000014u; // 801C7548
  c->lr=0x801C7550u; f_801BFE14(c); // 801C754C
  c->r[3]=0u+0x803D0000u; // 801C7550
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C7554
  cmpu(c,0,c->r[0],0x00000001u); // 801C7558
  if (crb(c,0)) { goto L_801C7620; } // 801C755C
  c->r[4]=0u+0x80330000u; // 801C7560
  c->r[3]=0u+0x00080000u; // 801C7564
  c->r[4]=c->r[4]+0x000052B0u; // 801C7568
  c->lr=0x801C7570u; f_801ACB20(c); // 801C756C
  goto L_801C7620; // 801C7570
L_801C7574:;
  c->lr=0x801C7578u; f_801C9990(c); // 801C7574
  c->r[0]=c->r[3]|c->r[3]; // 801C7578
  W8(c->r[31]+0x00000030u,c->r[3]); // 801C757C
  c->r[3]=c->r[30]|c->r[30]; // 801C7580
  c->r[4]=c->r[29]|c->r[29]; // 801C7584
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801C7588
  c->lr=0x801C7590u; f_801BFDB4(c); // 801C758C
  c->r[0]=0u+0x00000003u; // 801C7590
  c->r[3]=c->r[31]+0x00000010u; // 801C7594
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C7598
  c->r[4]=0u+0x00000002u; // 801C759C
  c->r[5]=0u+0x0000003Cu; // 801C75A0
  c->lr=0x801C75A8u; f_801AD0EC(c); // 801C75A4
  goto L_801C7620; // 801C75A8
L_801C75AC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C75AC
  cmps(c,0,(int32_t)c->r[0],3); // 801C75B0
  if (crb(c,2)) { goto L_801C75C0; } // 801C75B4
  cmps(c,0,(int32_t)c->r[0],1); // 801C75B8
  if (!crb(c,2)) { goto L_801C75DC; } // 801C75BC
L_801C75C0:;
  c->r[5]=R8(c->r[31]+0x00000030u); // 801C75C0
  c->r[3]=c->r[30]|c->r[30]; // 801C75C4
  c->r[4]=c->r[29]|c->r[29]; // 801C75C8
  c->lr=0x801C75D0u; f_801BFDB4(c); // 801C75CC
  c->r[0]=0u+0x00000003u; // 801C75D0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C75D4
  goto L_801C7620; // 801C75D8
L_801C75DC:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C75DC
  if (!crb(c,2)) { goto L_801C75F8; } // 801C75E0
  c->r[3]=c->r[30]|c->r[30]; // 801C75E4
  c->r[4]=c->r[29]|c->r[29]; // 801C75E8
  c->r[5]=0u+0x00000015u; // 801C75EC
  c->lr=0x801C75F4u; f_801BFE14(c); // 801C75F0
  goto L_801C7620; // 801C75F4
L_801C75F8:;
  c->r[3]=0u+0x803D0000u; // 801C75F8
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C75FC
  cmpu(c,0,c->r[0],0x00000001u); // 801C7600
  if (crb(c,0)) { goto L_801C7618; } // 801C7604
  c->r[4]=0u+0x80330000u; // 801C7608
  c->r[3]=0u+0x00080000u; // 801C760C
  c->r[4]=c->r[4]+0x000052D0u; // 801C7610
  c->lr=0x801C7618u; f_801ACB20(c); // 801C7614
L_801C7618:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7618
  c->lr=0x801C7620u; f_801AA228(c); // 801C761C
L_801C7620:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7620
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7624
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7628
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C762C
  c->lr=c->r[0]; // 801C7630
  c->r[1]=c->r[1]+0x00000020u; // 801C7634
  return; // 801C7638
}

// l2c_link_hci_conn_comp
void f_801C763C(Ctx* __restrict c) {
  trace_call(0x801C763Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C763C
  c->r[0]=c->lr; // 801C7640
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7644
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C7648
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C764C
  c->r[30]=c->r[5]|c->r[5]; // 801C7650
  c->r[5]=0u+0x00000006u; // 801C7654
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C7658
  c->r[29]=c->r[4]|c->r[4]; // 801C765C
  c->r[4]=c->r[30]|c->r[30]; // 801C7660
  W32(c->r[1]+0x00000020u,c->r[28]); // 801C7664
  c->r[28]=c->r[3]|c->r[3]; // 801C7668
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801C766C
  c->r[3]=c->r[1]+0x00000008u; // 801C7670
  c->lr=0x801C7678u; f_80004338(c); // 801C7674
  c->r[3]=c->r[1]+0x00000008u; // 801C7678
  c->lr=0x801C7680u; f_801C9878(c); // 801C767C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7680
  c->r[31]=c->r[3]|c->r[3]; // 801C7684
  if (!crb(c,2)) { goto L_801C76C8; } // 801C7688
  c->r[3]=c->r[29]|c->r[29]; // 801C768C
  c->lr=0x801C7694u; f_801BC0C8(c); // 801C7690
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C7694
  if (!crb(c,2)) { goto L_801C76C0; } // 801C7698
  c->r[3]=0u+0x803D0000u; // 801C769C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C76A0
  cmpu(c,0,c->r[0],0x00000002u); // 801C76A4
  if (crb(c,0)) { goto L_801C76C0; } // 801C76A8
  c->r[3]=0u+0x00080000u; // 801C76AC
  c->r[4]=0u+0x80330000u; // 801C76B0
  c->r[3]=c->r[3]+0x00000001u; // 801C76B4
  c->r[4]=c->r[4]+0x000052F8u; // 801C76B8
  c->lr=0x801C76C0u; f_801ACB20(c); // 801C76BC
L_801C76C0:;
  c->r[3]=0u+0x00000000u; // 801C76C0
  goto L_801C7854; // 801C76C4
L_801C76C8:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 801C76C8
  cmps(c,0,(int32_t)c->r[5],3); // 801C76CC
  if (crb(c,2)) { goto L_801C7714; } // 801C76D0
  c->r[3]=0u+0x803D0000u; // 801C76D4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C76D8
  cmpu(c,0,c->r[0],0x00000001u); // 801C76DC
  if (crb(c,0)) { goto L_801C76F8; } // 801C76E0
  c->r[4]=0u+0x80330000u; // 801C76E4
  c->r[6]=c->r[28]|c->r[28]; // 801C76E8
  c->r[3]=0u+0x00080000u; // 801C76EC
  c->r[4]=c->r[4]+0x00005320u; // 801C76F0
  c->lr=0x801C76F8u; f_801ACB50(c); // 801C76F4
L_801C76F8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C76F8
  if (crb(c,2)) { goto L_801C770C; } // 801C76FC
  c->r[3]=R16(c->r[31]+0x00000028u); // 801C7700
  c->r[4]=c->r[28]|c->r[28]; // 801C7704
  c->lr=0x801C770Cu; f_801C7928(c); // 801C7708
L_801C770C:;
  c->r[3]=0u+0x00000000u; // 801C770C
  goto L_801C7854; // 801C7710
L_801C7714:;
  W16(c->r[3]+0x00000028u,c->r[29]); // 801C7714
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801C7718
  cmps(c,0,(int32_t)c->r[0],0); // 801C771C
  if (!crb(c,2)) { goto L_801C77F8; } // 801C7720
  c->r[0]=0u+0x00000004u; // 801C7724
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C7728
  c->r[3]=c->r[30]|c->r[30]; // 801C772C
  c->lr=0x801C7734u; f_801B522C(c); // 801C7730
  cmps(c,0,(int32_t)c->r[3],0); // 801C7734
  c->r[5]=c->r[3]|c->r[3]; // 801C7738
  if (crb(c,2)) { goto L_801C775C; } // 801C773C
  c->r[7]=R8(c->r[31]+0x00000030u); // 801C7740
  c->r[4]=c->r[5]+0x00000022u; // 801C7744
  c->r[6]=c->r[29]|c->r[29]; // 801C7748
  c->r[3]=c->r[1]+0x00000008u; // 801C774C
  c->r[5]=c->r[5]+0x00000035u; // 801C7750
  c->lr=0x801C7758u; f_801B30DC(c); // 801C7754
  goto L_801C7774; // 801C7758
L_801C775C:;
  c->r[7]=R8(c->r[31]+0x00000030u); // 801C775C
  c->r[6]=c->r[29]|c->r[29]; // 801C7760
  c->r[3]=c->r[1]+0x00000008u; // 801C7764
  c->r[4]=0u+0x00000000u; // 801C7768
  c->r[5]=0u+0x00000000u; // 801C776C
  c->lr=0x801C7774u; f_801B30DC(c); // 801C7770
L_801C7774:;
  c->r[3]=0u+0x00000000u; // 801C7774
  c->lr=0x801C777Cu; f_801C9578(c); // 801C7778
  c->r[3]=c->r[31]+0x00000010u; // 801C777C
  c->lr=0x801C7784u; f_801AD15C(c); // 801C7780
  c->r[30]=R32(c->r[31]+0x00000008u); // 801C7784
  goto L_801C77A0; // 801C7788
L_801C778C:;
  c->r[3]=c->r[30]|c->r[30]; // 801C778C
  c->r[5]=c->r[1]+0x00000008u; // 801C7790
  c->r[4]=0u+0x00000000u; // 801C7794
  c->lr=0x801C779Cu; f_801C600C(c); // 801C7798
  c->r[30]=R32(c->r[30]+0x00000008u); // 801C779C
L_801C77A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C77A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C778C; } // 801C77A4
  c->r[0]=R32(c->r[31]+0x00000054u); // 801C77A8
  cmps(c,0,(int32_t)c->r[0],0); // 801C77AC
  if (crb(c,2)) { goto L_801C77D8; } // 801C77B0
  c->r[3]=c->r[31]|c->r[31]; // 801C77B4
  c->r[4]=0u+0x00000000u; // 801C77B8
  c->r[5]=0u+0x00000000u; // 801C77BC
  c->lr=0x801C77C4u; f_801CA6F4(c); // 801C77C0
  c->r[3]=c->r[31]+0x00000010u; // 801C77C4
  c->r[4]=0u+0x00000002u; // 801C77C8
  c->r[5]=0u+0x0000001Eu; // 801C77CC
  c->lr=0x801C77D4u; f_801AD0EC(c); // 801C77D0
  goto L_801C7850; // 801C77D4
L_801C77D8:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C77D8
  cmps(c,0,(int32_t)c->r[0],0); // 801C77DC
  if (!crb(c,2)) { goto L_801C7850; } // 801C77E0
  c->r[3]=c->r[31]+0x00000010u; // 801C77E4
  c->r[4]=0u+0x00000002u; // 801C77E8
  c->r[5]=0u+0x0000003Cu; // 801C77EC
  c->lr=0x801C77F4u; f_801AD0EC(c); // 801C77F0
  goto L_801C7850; // 801C77F4
L_801C77F8:;
  cmpu(c,0,c->r[0],0x00000009u); // 801C77F8
  if (!crb(c,2)) { goto L_801C7824; } // 801C77FC
  c->lr=0x801C7804u; f_801CB480(c); // 801C7800
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C7804
  if (crb(c,2)) { goto L_801C7824; } // 801C7808
  c->r[0]=0u+0x00000001u; // 801C780C
  c->r[3]=0u+0x00010000u; // 801C7810
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C7814
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C7818
  W16(c->r[31]+0x00000028u,c->r[0]); // 801C781C
  goto L_801C7850; // 801C7820
L_801C7824:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C7824
  goto L_801C7840; // 801C7828
L_801C782C:;
  c->r[30]=R32(c->r[3]+0x00000008u); // 801C782C
  c->r[5]=c->r[1]+0x00000008u; // 801C7830
  c->r[4]=0u+0x00000001u; // 801C7834
  c->lr=0x801C783Cu; f_801C600C(c); // 801C7838
  c->r[3]=c->r[30]|c->r[30]; // 801C783C
L_801C7840:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C7840
  if (!crb(c,2)) { IRQCHK(c); goto L_801C782C; } // 801C7844
  c->r[3]=c->r[31]|c->r[31]; // 801C7848
  c->lr=0x801C7850u; f_801C9778(c); // 801C784C
L_801C7850:;
  c->r[3]=0u+0x00000001u; // 801C7850
L_801C7854:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C7854
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C7858
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C785C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C7860
  c->r[28]=R32(c->r[1]+0x00000020u); // 801C7864
  c->lr=c->r[0]; // 801C7868
  c->r[1]=c->r[1]+0x00000030u; // 801C786C
  return; // 801C7870
}

// l2c_link_sec_comp
void f_801C7874(Ctx* __restrict c) {
  trace_call(0x801C7874u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7874
  c->r[0]=c->lr; // 801C7878
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C787C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7880
  c->r[31]=c->r[3]|c->r[3]; // 801C7884
  c->r[3]=c->r[1]+0x00000008u; // 801C7888
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C788C
  c->r[30]=c->r[5]|c->r[5]; // 801C7890
  c->r[4]=c->r[31]|c->r[31]; // 801C7894
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 801C7898
  c->r[5]=0u+0x00000006u; // 801C789C
  c->lr=0x801C78A4u; f_80004338(c); // 801C78A0
  c->r[3]=c->r[31]|c->r[31]; // 801C78A4
  c->lr=0x801C78ACu; f_801C9878(c); // 801C78A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C78AC
  if (!crb(c,2)) { goto L_801C78DC; } // 801C78B0
  c->r[3]=0u+0x803D0000u; // 801C78B4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C78B8
  cmpu(c,0,c->r[0],0x00000002u); // 801C78BC
  if (crb(c,0)) { goto L_801C7910; } // 801C78C0
  c->r[3]=0u+0x00080000u; // 801C78C4
  c->r[4]=0u+0x80330000u; // 801C78C8
  c->r[3]=c->r[3]+0x00000001u; // 801C78CC
  c->r[4]=c->r[4]+0x00005354u; // 801C78D0
  c->lr=0x801C78D8u; f_801ACB20(c); // 801C78D4
  goto L_801C7910; // 801C78D8
L_801C78DC:;
  c->r[0]=cntlz(c->r[30]); // 801C78DC
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C78E0
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801C78E4
  c->r[31]=0u-c->r[0]; // 801C78E8
  goto L_801C7908; // 801C78EC
L_801C78F0:;
  c->r[0]=c->r[31]+0x00000008u; // 801C78F0
  c->r[30]=R32(c->r[3]+0x00000008u); // 801C78F4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801C78F8
  c->r[5]=c->r[1]+0x00000008u; // 801C78FC
  c->lr=0x801C7904u; f_801C600C(c); // 801C7900
  c->r[3]=c->r[30]|c->r[30]; // 801C7904
L_801C7908:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C7908
  if (!crb(c,2)) { IRQCHK(c); goto L_801C78F0; } // 801C790C
L_801C7910:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7910
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7914
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7918
  c->lr=c->r[0]; // 801C791C
  c->r[1]=c->r[1]+0x00000020u; // 801C7920
  return; // 801C7924
}

// l2c_link_hci_disc_comp
void f_801C7928(Ctx* __restrict c) {
  trace_call(0x801C7928u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7928
  c->r[0]=c->lr; // 801C792C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7930
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7934
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7938
  c->r[30]=0u+0x00000001u; // 801C793C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7940
  W8(c->r[1]+0x00000008u,c->r[4]); // 801C7944
  c->lr=0x801C794Cu; f_801C9900(c); // 801C7948
  cmps(c,0,(int32_t)c->r[3],0); // 801C794C
  c->r[31]=c->r[3]|c->r[3]; // 801C7950
  if (!crb(c,2)) { goto L_801C7960; } // 801C7954
  c->r[30]=0u+0x00000000u; // 801C7958
  goto L_801C79B0; // 801C795C
L_801C7960:;
  c->r[4]=0u+0x803D0000u; // 801C7960
  c->r[4]=c->r[4]+0xFFFF8118u; // 801C7964
  c->r[0]=R8(c->r[4]+0x000027BFu); // 801C7968
  cmpu(c,0,c->r[0],0x0000000Eu); // 801C796C
  if (crb(c,2)) { goto L_801C797C; } // 801C7970
  c->r[0]=R8(c->r[1]+0x00000008u); // 801C7974
  W8(c->r[4]+0x000027BFu,c->r[0]); // 801C7978
L_801C797C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C797C
  goto L_801C7998; // 801C7980
L_801C7984:;
  c->r[29]=R32(c->r[3]+0x00000008u); // 801C7984
  c->r[5]=c->r[1]+0x00000008u; // 801C7988
  c->r[4]=0u+0x00000003u; // 801C798C
  c->lr=0x801C7994u; f_801C600C(c); // 801C7990
  c->r[3]=c->r[29]|c->r[29]; // 801C7994
L_801C7998:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C7998
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7984; } // 801C799C
  c->r[3]=c->r[31]+0x0000002Au; // 801C79A0
  c->lr=0x801C79A8u; f_801BA00C(c); // 801C79A4
  c->r[3]=c->r[31]|c->r[31]; // 801C79A8
  c->lr=0x801C79B0u; f_801C9778(c); // 801C79AC
L_801C79B0:;
  c->r[3]=0u+0x00000001u; // 801C79B0
  c->lr=0x801C79B8u; f_801CB3F0(c); // 801C79B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C79B8
  if (crb(c,2)) { goto L_801C79C4; } // 801C79BC
  c->lr=0x801C79C4u; f_801CB208(c); // 801C79C0
L_801C79C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801C79C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C79C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C79CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C79D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C79D4
  c->lr=c->r[0]; // 801C79D8
  c->r[1]=c->r[1]+0x00000020u; // 801C79DC
  return; // 801C79E0
}

// l2c_link_hci_qos_violation
void f_801C79E4(Ctx* __restrict c) {
  trace_call(0x801C79E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C79E4
  c->r[0]=c->lr; // 801C79E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C79EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C79F0
  c->lr=0x801C79F8u; f_801C9900(c); // 801C79F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C79F8
  if (!crb(c,2)) { goto L_801C7A08; } // 801C79FC
  c->r[3]=0u+0x00000000u; // 801C7A00
  goto L_801C7A40; // 801C7A04
L_801C7A08:;
  c->r[31]=R32(c->r[3]+0x00000008u); // 801C7A08
  goto L_801C7A34; // 801C7A0C
L_801C7A10:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801C7A10
  c->r[0]=R32(c->r[3]+0x00000020u); // 801C7A14
  cmps(c,0,(int32_t)c->r[0],0); // 801C7A18
  if (crb(c,2)) { goto L_801C7A30; } // 801C7A1C
  c->r[3]=c->r[31]|c->r[31]; // 801C7A20
  c->r[4]=0u+0x00000006u; // 801C7A24
  c->r[5]=0u+0x00000000u; // 801C7A28
  c->lr=0x801C7A30u; f_801C600C(c); // 801C7A2C
L_801C7A30:;
  c->r[31]=R32(c->r[31]+0x00000008u); // 801C7A30
L_801C7A34:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C7A34
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7A10; } // 801C7A38
  c->r[3]=0u+0x00000001u; // 801C7A3C
L_801C7A40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7A40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7A44
  c->lr=c->r[0]; // 801C7A48
  c->r[1]=c->r[1]+0x00000010u; // 801C7A4C
  return; // 801C7A50
}

// l2c_link_timeout
void f_801C7A54(Ctx* __restrict c) {
  trace_call(0x801C7A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7A54
  c->r[0]=c->lr; // 801C7A58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7A5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7A60
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7A64
  c->r[30]=c->r[3]|c->r[3]; // 801C7A68
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C7A6C
  cmps(c,0,(int32_t)c->r[0],2); // 801C7A70
  if (crb(c,2)) { goto L_801C7A90; } // 801C7A74
  cmps(c,0,(int32_t)c->r[0],3); // 801C7A78
  if (crb(c,2)) { goto L_801C7A90; } // 801C7A7C
  cmps(c,0,(int32_t)c->r[0],1); // 801C7A80
  if (crb(c,2)) { goto L_801C7A90; } // 801C7A84
  cmps(c,0,(int32_t)c->r[0],5); // 801C7A88
  if (!crb(c,2)) { goto L_801C7ABC; } // 801C7A8C
L_801C7A90:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C7A90
  goto L_801C7AAC; // 801C7A94
L_801C7A98:;
  c->r[31]=R32(c->r[3]+0x00000008u); // 801C7A98
  c->r[4]=0u+0x00000003u; // 801C7A9C
  c->r[5]=0u+0x00000000u; // 801C7AA0
  c->lr=0x801C7AA8u; f_801C600C(c); // 801C7AA4
  c->r[3]=c->r[31]|c->r[31]; // 801C7AA8
L_801C7AAC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C7AAC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7A98; } // 801C7AB0
  c->r[3]=c->r[30]|c->r[30]; // 801C7AB4
  c->lr=0x801C7ABCu; f_801C9778(c); // 801C7AB8
L_801C7ABC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801C7ABC
  cmps(c,0,(int32_t)c->r[0],4); // 801C7AC0
  if (!crb(c,2)) { goto L_801C7BB0; } // 801C7AC4
  c->r[12]=R32(c->r[30]+0x00000054u); // 801C7AC8
  cmps(c,0,(int32_t)c->r[12],0); // 801C7ACC
  if (crb(c,2)) { goto L_801C7B30; } // 801C7AD0
  c->r[0]=0u+0x00000000u; // 801C7AD4
  c->r[3]=0u+0x00000002u; // 801C7AD8
  W32(c->r[30]+0x00000054u,c->r[0]); // 801C7ADC
  c->ctr=c->r[12]; // 801C7AE0
  if (true) { c->lr=0x801C7AE8u; dispatch(c,c->ctr); } // 801C7AE4
  c->r[3]=0u+0x803D0000u; // 801C7AE8
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C7AEC
  cmpu(c,0,c->r[0],0x00000002u); // 801C7AF0
  if (crb(c,0)) { goto L_801C7B0C; } // 801C7AF4
  c->r[3]=0u+0x00080000u; // 801C7AF8
  c->r[4]=0u+0x80330000u; // 801C7AFC
  c->r[3]=c->r[3]+0x00000001u; // 801C7B00
  c->r[4]=c->r[4]+0x0000537Cu; // 801C7B04
  c->lr=0x801C7B0Cu; f_801ACB20(c); // 801C7B08
L_801C7B0C:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 801C7B0C
  goto L_801C7B28; // 801C7B10
L_801C7B14:;
  c->r[31]=R32(c->r[3]+0x00000008u); // 801C7B14
  c->r[4]=0u+0x00000003u; // 801C7B18
  c->r[5]=0u+0x00000000u; // 801C7B1C
  c->lr=0x801C7B24u; f_801C600C(c); // 801C7B20
  c->r[3]=c->r[31]|c->r[31]; // 801C7B24
L_801C7B28:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C7B28
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7B14; } // 801C7B2C
L_801C7B30:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801C7B30
  cmps(c,0,(int32_t)c->r[0],0); // 801C7B34
  if (!crb(c,2)) { goto L_801C7BA0; } // 801C7B38
  c->r[3]=R16(c->r[30]+0x00000028u); // 801C7B3C
  c->r[4]=0u+0x00000013u; // 801C7B40
  c->lr=0x801C7B48u; f_801BC588(c); // 801C7B44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801C7B48
  cmpu(c,0,c->r[0],0x00000001u); // 801C7B4C
  if (!crb(c,2)) { goto L_801C7B64; } // 801C7B50
  c->r[0]=0u+0x00000005u; // 801C7B54
  c->r[3]=0u+0x0000001Eu; // 801C7B58
  W32(c->r[30]+0x00000004u,c->r[0]); // 801C7B5C
  goto L_801C7B84; // 801C7B60
L_801C7B64:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C7B64
  if (!crb(c,2)) { goto L_801C7B80; } // 801C7B68
  c->r[0]=0u+0x00000005u; // 801C7B6C
  c->r[3]=0u+0x00010000u; // 801C7B70
  W32(c->r[30]+0x00000004u,c->r[0]); // 801C7B74
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801C7B78
  goto L_801C7B84; // 801C7B7C
L_801C7B80:;
  c->r[3]=0u+0x00000001u; // 801C7B80
L_801C7B84:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801C7B84
  cmpu(c,0,c->r[5],0x0000FFFFu); // 801C7B88
  if (crb(c,2)) { goto L_801C7BB0; } // 801C7B8C
  c->r[3]=c->r[30]+0x00000010u; // 801C7B90
  c->r[4]=0u+0x00000002u; // 801C7B94
  c->lr=0x801C7B9Cu; f_801AD0EC(c); // 801C7B98
  goto L_801C7BB0; // 801C7B9C
L_801C7BA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7BA0
  c->r[4]=0u+0x00000000u; // 801C7BA4
  c->r[5]=0u+0x00000000u; // 801C7BA8
  c->lr=0x801C7BB0u; f_801C7CD0(c); // 801C7BAC
L_801C7BB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7BB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7BB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7BB8
  c->lr=c->r[0]; // 801C7BBC
  c->r[1]=c->r[1]+0x00000010u; // 801C7BC0
  return; // 801C7BC4
}

// l2c_link_send_to_lower
void f_801C7BC8(Ctx* __restrict c) {
  trace_call(0x801C7BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7BC8
  c->r[0]=c->lr; // 801C7BCC
  c->r[6]=0u+0x803C0000u; // 801C7BD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7BD4
  c->r[6]=c->r[6]+0x00007BF0u; // 801C7BD8
  c->r[0]=c->r[4]|c->r[4]; // 801C7BDC
  c->r[7]=R16(c->r[4]+0x00000002u); // 801C7BE0
  c->r[5]=R16(c->r[6]+0x0000007Eu); // 801C7BE4
  cmpu(c,0,c->r[7],c->r[5]); // 801C7BE8
  if (crb(c,1)) { goto L_801C7C2C; } // 801C7BEC
  c->r[4]=R16(c->r[3]+0x00000036u); // 801C7BF0
  c->r[6]=0u+0x803D0000u; // 801C7BF4
  c->r[5]=R16(c->r[3]+0x00000038u); // 801C7BF8
  c->r[6]=c->r[6]+0xFFFFB1E0u; // 801C7BFC
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801C7C00
  c->r[4]=0u+0x00002100u; // 801C7C04
  c->r[5]=c->r[5]+0x00000001u; // 801C7C08
  W16(c->r[3]+0x00000036u,c->r[7]); // 801C7C0C
  W16(c->r[3]+0x00000038u,c->r[5]); // 801C7C10
  c->r[3]=c->r[0]|c->r[0]; // 801C7C14
  c->r[5]=R16(c->r[6]+0x00000004u); // 801C7C18
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801C7C1C
  W16(c->r[6]+0x00000004u,c->r[0]); // 801C7C20
  c->lr=0x801C7C28u; f_801AC980(c); // 801C7C24
  goto L_801C7CBC; // 801C7C28
L_801C7C2C:;
  c->r[8]=R16(c->r[6]+0x0000007Cu); // 801C7C2C
  c->r[5]=0u+0x803D0000u; // 801C7C30
  c->r[5]=c->r[5]+0xFFFFB1E0u; // 801C7C34
  c->r[6]=c->r[7]+c->r[8]; // 801C7C38
  c->r[7]=R16(c->r[5]+0x00000004u); // 801C7C3C
  c->r[5]=c->r[6]+0xFFFFFFFBu; // 801C7C40
  c->r[5]=divw((int32_t)c->r[5],(int32_t)c->r[8]); // 801C7C44
  c->r[8]=rotl(c->r[5],0)&0x0000FFFFu; // 801C7C48
  cmpu(c,0,c->r[8],c->r[7]); // 801C7C4C
  if (!crb(c,1)) { goto L_801C7C64; } // 801C7C50
  W16(c->r[4]+0x00000006u,c->r[7]); // 801C7C54
  c->r[5]=0u+0x00000001u; // 801C7C58
  c->r[8]=c->r[7]|c->r[7]; // 801C7C5C
  W8(c->r[3]+0x00000040u,c->r[5]); // 801C7C60
L_801C7C64:;
  c->r[6]=R16(c->r[3]+0x00000036u); // 801C7C64
  c->r[5]=rotl(c->r[8],0)&0x0000FFFFu; // 801C7C68
  cmpu(c,0,c->r[5],c->r[6]); // 801C7C6C
  if (!crb(c,1)) { goto L_801C7C84; } // 801C7C70
  W16(c->r[4]+0x00000006u,c->r[6]); // 801C7C74
  c->r[4]=0u+0x00000001u; // 801C7C78
  c->r[8]=c->r[6]|c->r[6]; // 801C7C7C
  W8(c->r[3]+0x00000040u,c->r[4]); // 801C7C80
L_801C7C84:;
  c->r[6]=0u+0x803D0000u; // 801C7C84
  c->r[4]=0u+0x00002100u; // 801C7C88
  c->r[6]=c->r[6]+0xFFFFB1E0u; // 801C7C8C
  c->r[5]=R16(c->r[6]+0x00000004u); // 801C7C90
  c->r[5]=c->r[5]-c->r[8]; // 801C7C94
  W16(c->r[6]+0x00000004u,c->r[5]); // 801C7C98
  c->r[6]=R16(c->r[3]+0x00000036u); // 801C7C9C
  c->r[5]=R16(c->r[3]+0x00000038u); // 801C7CA0
  c->r[6]=c->r[6]-c->r[8]; // 801C7CA4
  c->r[5]=c->r[5]+c->r[8]; // 801C7CA8
  W16(c->r[3]+0x00000036u,c->r[6]); // 801C7CAC
  W16(c->r[3]+0x00000038u,c->r[5]); // 801C7CB0
  c->r[3]=c->r[0]|c->r[0]; // 801C7CB4
  c->lr=0x801C7CBCu; f_801AC980(c); // 801C7CB8
L_801C7CBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7CBC
  c->r[3]=0u+0x00000001u; // 801C7CC0
  c->lr=c->r[0]; // 801C7CC4
  c->r[1]=c->r[1]+0x00000010u; // 801C7CC8
  return; // 801C7CCC
}

// l2c_link_check_send_pkts
void f_801C7CD0(Ctx* __restrict c) {
  trace_call(0x801C7CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7CD0
  c->r[0]=c->lr; // 801C7CD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7CD8
  c->r[11]=c->r[1]+0x00000030u; // 801C7CDC
  c->lr=0x801C7CE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7CE0
  cmps(c,0,(int32_t)c->r[5],0); // 801C7CE4
  c->r[31]=0u+0x80330000u; // 801C7CE8
  c->r[29]=c->r[3]|c->r[3]; // 801C7CEC
  c->r[30]=c->r[5]|c->r[5]; // 801C7CF0
  c->r[31]=c->r[31]+0x000052B0u; // 801C7CF4
  if (crb(c,2)) { goto L_801C7DEC; } // 801C7CF8
  c->r[4]=R16(c->r[3]+0x0000004Cu); // 801C7CFC
  c->r[0]=R16(c->r[3]+0x0000003Au); // 801C7D00
  cmpu(c,0,c->r[4],c->r[0]); // 801C7D04
  if (crb(c,0)) { goto L_801C7D9C; } // 801C7D08
  c->r[0]=R8(c->r[3]+0x00000041u); // 801C7D0C
  cmps(c,0,(int32_t)c->r[0],0); // 801C7D10
  if (!crb(c,2)) { goto L_801C7D9C; } // 801C7D14
  c->r[26]=R32(c->r[3]+0x00000008u); // 801C7D18
  c->r[28]=0u+0x00080000u; // 801C7D1C
  c->r[27]=0u+0x803D0000u; // 801C7D20
  goto L_801C7D8C; // 801C7D24
L_801C7D28:;
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C7D28
  cmpu(c,0,c->r[0],0x00000002u); // 801C7D2C
  if (crb(c,0)) { goto L_801C7D44; } // 801C7D30
  c->r[5]=R16(c->r[26]+0x00000014u); // 801C7D34
  c->r[3]=c->r[28]+0x00000001u; // 801C7D38
  c->r[4]=c->r[31]+0x000000E4u; // 801C7D3C
  c->lr=0x801C7D44u; f_801ACB38(c); // 801C7D40
L_801C7D44:;
  c->r[3]=R32(c->r[26]+0x00000030u); // 801C7D44
  c->r[0]=R32(c->r[3]+0x00000028u); // 801C7D48
  cmps(c,0,(int32_t)c->r[0],0); // 801C7D4C
  if (crb(c,2)) { goto L_801C7D88; } // 801C7D50
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C7D54
  cmpu(c,0,c->r[0],0x00000003u); // 801C7D58
  if (crb(c,0)) { goto L_801C7D70; } // 801C7D5C
  c->r[5]=R16(c->r[26]+0x00000014u); // 801C7D60
  c->r[3]=c->r[28]+0x00000002u; // 801C7D64
  c->r[4]=c->r[31]+0x00000110u; // 801C7D68
  c->lr=0x801C7D70u; f_801ACB38(c); // 801C7D6C
L_801C7D70:;
  c->r[5]=R32(c->r[26]+0x00000030u); // 801C7D70
  c->r[4]=0u+0x00000001u; // 801C7D74
  c->r[3]=R16(c->r[26]+0x00000014u); // 801C7D78
  c->r[12]=R32(c->r[5]+0x00000028u); // 801C7D7C
  c->ctr=c->r[12]; // 801C7D80
  if (true) { c->lr=0x801C7D88u; dispatch(c,c->ctr); } // 801C7D84
L_801C7D88:;
  c->r[26]=R32(c->r[26]+0x00000008u); // 801C7D88
L_801C7D8C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C7D8C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7D28; } // 801C7D90
  c->r[0]=0u+0x00000001u; // 801C7D94
  W8(c->r[29]+0x00000041u,c->r[0]); // 801C7D98
L_801C7D9C:;
  c->r[3]=R16(c->r[29]+0x0000004Cu); // 801C7D9C
  c->r[0]=R16(c->r[29]+0x0000003Eu); // 801C7DA0
  cmpu(c,0,c->r[3],c->r[0]); // 801C7DA4
  if (crb(c,1)) { goto L_801C7DC4; } // 801C7DA8
  c->r[0]=0u+0x00000000u; // 801C7DAC
  c->r[4]=c->r[30]|c->r[30]; // 801C7DB0
  W16(c->r[30]+0x00000006u,c->r[0]); // 801C7DB4
  c->r[3]=c->r[29]+0x00000044u; // 801C7DB8
  c->lr=0x801C7DC0u; f_801AA648(c); // 801C7DBC
  goto L_801C7DEC; // 801C7DC0
L_801C7DC4:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7DC4
  c->lr=0x801C7DCCu; f_801AA228(c); // 801C7DC8
  c->r[3]=0u+0x803D0000u; // 801C7DCC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C7DD0
  cmpu(c,0,c->r[0],0x00000002u); // 801C7DD4
  if (crb(c,0)) { goto L_801C7DEC; } // 801C7DD8
  c->r[3]=0u+0x00080000u; // 801C7DDC
  c->r[4]=c->r[31]+0x00000150u; // 801C7DE0
  c->r[3]=c->r[3]+0x00000001u; // 801C7DE4
  c->lr=0x801C7DECu; f_801ACB20(c); // 801C7DE8
L_801C7DEC:;
  c->r[0]=R8(c->r[29]+0x00000040u); // 801C7DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801C7DF0
  if (!crb(c,2)) { goto L_801C7F84; } // 801C7DF4
  c->r[3]=c->r[29]+0x0000002Au; // 801C7DF8
  c->r[4]=c->r[1]+0x00000008u; // 801C7DFC
  c->lr=0x801C7E04u; f_801B8C88(c); // 801C7E00
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C7E04
  if (!crb(c,2)) { goto L_801C7E50; } // 801C7E08
  c->r[0]=R8(c->r[1]+0x00000008u); // 801C7E0C
  cmpu(c,0,c->r[0],0x00000003u); // 801C7E10
  if (!crb(c,2)) { goto L_801C7E50; } // 801C7E14
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 801C7E18
  cmps(c,0,(int32_t)c->r[0],0); // 801C7E1C
  if (crb(c,2)) { goto L_801C7E50; } // 801C7E20
  c->r[0]=0u+0x00000000u; // 801C7E24
  c->r[4]=c->r[29]+0x0000002Au; // 801C7E28
  W8(c->r[1]+0x00000014u,c->r[0]); // 801C7E2C
  c->r[5]=c->r[1]+0x0000000Cu; // 801C7E30
  c->r[3]=0u+0x00000080u; // 801C7E34
  c->lr=0x801C7E3Cu; f_801B8AB8(c); // 801C7E38
  c->r[3]=c->r[29]+0x00000010u; // 801C7E3C
  c->r[4]=0u+0x00000002u; // 801C7E40
  c->r[5]=0u+0x00000001u; // 801C7E44
  c->lr=0x801C7E4Cu; f_801AD0EC(c); // 801C7E48
  goto L_801C7F84; // 801C7E4C
L_801C7E50:;
  c->r[28]=0u+0x803D0000u; // 801C7E50
  c->r[28]=c->r[28]+0xFFFFB1E0u; // 801C7E54
  goto L_801C7EA8; // 801C7E58
L_801C7E5C:;
  c->r[3]=R32(c->r[29]+0x00000044u); // 801C7E5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7E60
  if (crb(c,2)) { goto L_801C7EC0; } // 801C7E64
  c->r[0]=R16(c->r[3]+0x00000006u); // 801C7E68
  cmps(c,0,(int32_t)c->r[0],0); // 801C7E6C
  if (!crb(c,2)) { goto L_801C7EC0; } // 801C7E70
  c->r[0]=R8(c->r[29]+0x00000040u); // 801C7E74
  cmps(c,0,(int32_t)c->r[0],0); // 801C7E78
  if (!crb(c,2)) { goto L_801C7F84; } // 801C7E7C
  c->r[3]=c->r[29]+0x00000044u; // 801C7E80
  c->lr=0x801C7E88u; f_801AA8C4(c); // 801C7E84
  cmps(c,0,(int32_t)c->r[3],0); // 801C7E88
  c->r[30]=c->r[3]|c->r[3]; // 801C7E8C
  if (crb(c,2)) { goto L_801C7EC0; } // 801C7E90
  c->r[3]=c->r[29]|c->r[29]; // 801C7E94
  c->r[4]=c->r[30]|c->r[30]; // 801C7E98
  c->lr=0x801C7EA0u; f_801C7BC8(c); // 801C7E9C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C7EA0
  if (crb(c,2)) { goto L_801C7EC0; } // 801C7EA4
L_801C7EA8:;
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C7EA8
  cmps(c,0,(int32_t)c->r[0],0); // 801C7EAC
  if (crb(c,2)) { goto L_801C7EC0; } // 801C7EB0
  c->r[0]=R16(c->r[29]+0x00000036u); // 801C7EB4
  cmps(c,0,(int32_t)c->r[0],0); // 801C7EB8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7E5C; } // 801C7EBC
L_801C7EC0:;
  c->r[0]=R8(c->r[29]+0x00000040u); // 801C7EC0
  cmps(c,0,(int32_t)c->r[0],0); // 801C7EC4
  if (!crb(c,2)) { goto L_801C7F84; } // 801C7EC8
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 801C7ECC
  cmps(c,0,(int32_t)c->r[0],0); // 801C7ED0
  if (crb(c,2)) { goto L_801C7EF4; } // 801C7ED4
  c->r[0]=R16(c->r[29]+0x00000036u); // 801C7ED8
  cmps(c,0,(int32_t)c->r[0],0); // 801C7EDC
  if (crb(c,2)) { goto L_801C7EF4; } // 801C7EE0
  c->r[3]=c->r[29]+0x00000010u; // 801C7EE4
  c->r[4]=0u+0x00000002u; // 801C7EE8
  c->r[5]=0u+0x00000002u; // 801C7EEC
  c->lr=0x801C7EF4u; f_801AD0EC(c); // 801C7EF0
L_801C7EF4:;
  c->r[0]=R8(c->r[29]+0x00000041u); // 801C7EF4
  cmps(c,0,(int32_t)c->r[0],0); // 801C7EF8
  if (crb(c,2)) { goto L_801C7F84; } // 801C7EFC
  c->r[3]=R16(c->r[29]+0x0000004Cu); // 801C7F00
  c->r[0]=R16(c->r[29]+0x0000003Cu); // 801C7F04
  cmpu(c,0,c->r[3],c->r[0]); // 801C7F08
  if (crb(c,1)) { goto L_801C7F84; } // 801C7F0C
  c->r[0]=0u+0x00000000u; // 801C7F10
  c->r[27]=R32(c->r[29]+0x00000008u); // 801C7F14
  W8(c->r[29]+0x00000041u,c->r[0]); // 801C7F18
  c->r[30]=0u+0x00080000u; // 801C7F1C
  c->r[28]=0u+0x803D0000u; // 801C7F20
  goto L_801C7F7C; // 801C7F24
L_801C7F28:;
  c->r[3]=R32(c->r[27]+0x00000030u); // 801C7F28
  c->r[0]=R32(c->r[3]+0x00000028u); // 801C7F2C
  cmps(c,0,(int32_t)c->r[0],0); // 801C7F30
  if (crb(c,2)) { goto L_801C7F78; } // 801C7F34
  c->r[0]=R8(c->r[28]+0xFFFFB1E0u); // 801C7F38
  cmpu(c,0,c->r[0],0x00000003u); // 801C7F3C
  if (crb(c,0)) { goto L_801C7F54; } // 801C7F40
  c->r[5]=R16(c->r[27]+0x00000014u); // 801C7F44
  c->r[3]=c->r[30]+0x00000002u; // 801C7F48
  c->r[4]=c->r[31]+0x00000170u; // 801C7F4C
  c->lr=0x801C7F54u; f_801ACB38(c); // 801C7F50
L_801C7F54:;
  c->r[5]=R32(c->r[27]+0x00000030u); // 801C7F54
  c->r[4]=0u+0x00000000u; // 801C7F58
  c->r[3]=R16(c->r[27]+0x00000014u); // 801C7F5C
  c->r[12]=R32(c->r[5]+0x00000028u); // 801C7F60
  c->ctr=c->r[12]; // 801C7F64
  if (true) { c->lr=0x801C7F6Cu; dispatch(c,c->ctr); } // 801C7F68
  c->r[0]=R8(c->r[29]+0x00000041u); // 801C7F6C
  cmps(c,0,(int32_t)c->r[0],0); // 801C7F70
  if (!crb(c,2)) { goto L_801C7F84; } // 801C7F74
L_801C7F78:;
  c->r[27]=R32(c->r[27]+0x00000008u); // 801C7F78
L_801C7F7C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801C7F7C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7F28; } // 801C7F80
L_801C7F84:;
  c->r[11]=c->r[1]+0x00000030u; // 801C7F84
  c->lr=0x801C7F8Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7F88
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C7F8C
  c->lr=c->r[0]; // 801C7F90
  c->r[1]=c->r[1]+0x00000030u; // 801C7F94
  return; // 801C7F98
}

// l2c_link_adjust_allocation
void f_801C7F9C(Ctx* __restrict c) {
  trace_call(0x801C7F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7F9C
  c->r[0]=c->lr; // 801C7FA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7FA4
  c->r[11]=c->r[1]+0x00000030u; // 801C7FA8
  c->lr=0x801C7FB0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7FAC
  c->r[3]=0u+0x803D0000u; // 801C7FB0
  c->r[26]=0u+0x00000000u; // 801C7FB4
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C7FB8
  c->r[4]=R16(c->r[3]+0x000007B8u); // 801C7FBC
  cmps(c,0,(int32_t)c->r[4],0); // 801C7FC0
  if (crb(c,2)) { goto L_801C811C; } // 801C7FC4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801C7FC8
  cmps(c,0,(int32_t)c->r[0],0); // 801C7FCC
  if (crb(c,2)) { goto L_801C7FE4; } // 801C7FD0
  c->r[0]=R8(c->r[3]+0x00000062u); // 801C7FD4
  cmpu(c,0,c->r[0],0x00000001u); // 801C7FD8
  if (!crb(c,2)) { goto L_801C7FE4; } // 801C7FDC
  c->r[26]=0u+0x00000001u; // 801C7FE0
L_801C7FE4:;
  c->r[0]=R8(c->r[3]+0x00000064u); // 801C7FE4
  cmps(c,0,(int32_t)c->r[0],0); // 801C7FE8
  if (crb(c,2)) { goto L_801C8000; } // 801C7FEC
  c->r[0]=R8(c->r[3]+0x000000BEu); // 801C7FF0
  cmpu(c,0,c->r[0],0x00000001u); // 801C7FF4
  if (!crb(c,2)) { goto L_801C8000; } // 801C7FF8
  c->r[26]=c->r[26]+0x00000001u; // 801C7FFC
L_801C8000:;
  c->r[0]=R8(c->r[3]+0x000000C0u); // 801C8000
  cmps(c,0,(int32_t)c->r[0],0); // 801C8004
  if (crb(c,2)) { goto L_801C801C; } // 801C8008
  c->r[0]=R8(c->r[3]+0x0000011Au); // 801C800C
  cmpu(c,0,c->r[0],0x00000001u); // 801C8010
  if (!crb(c,2)) { goto L_801C801C; } // 801C8014
  c->r[26]=c->r[26]+0x00000001u; // 801C8018
L_801C801C:;
  c->r[0]=R8(c->r[3]+0x0000011Cu); // 801C801C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8020
  if (crb(c,2)) { goto L_801C8038; } // 801C8024
  c->r[0]=R8(c->r[3]+0x00000176u); // 801C8028
  cmpu(c,0,c->r[0],0x00000001u); // 801C802C
  if (!crb(c,2)) { goto L_801C8038; } // 801C8030
  c->r[26]=c->r[26]+0x00000001u; // 801C8034
L_801C8038:;
  c->r[30]=0u+0x803D0000u; // 801C8038
  c->r[29]=0u+0x00000000u; // 801C803C
  c->r[3]=c->r[30]+0xFFFFB1E0u; // 801C8040
  c->r[31]=0u+0x00000003u; // 801C8044
  c->r[0]=R16(c->r[3]+0x00000002u); // 801C8048
  c->r[28]=c->r[3]+0x00000008u; // 801C804C
  c->r[24]=0u+0x00080000u; // 801C8050
  c->r[25]=0u+0x80330000u; // 801C8054
  c->r[3]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801C8058
  c->r[23]=0u+0x51EC0000u; // 801C805C
  c->r[0]=c->r[3]+0x00000001u; // 801C8060
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8064
L_801C8068:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801C8068
  cmps(c,0,(int32_t)c->r[0],0); // 801C806C
  if (crb(c,2)) { goto L_801C810C; } // 801C8070
  cmps(c,0,(int32_t)c->r[26],0); // 801C8074
  if (crb(c,2)) { goto L_801C8088; } // 801C8078
  c->r[0]=R8(c->r[28]+0x0000005Au); // 801C807C
  cmpu(c,0,c->r[0],0x00000001u); // 801C8080
  if (!crb(c,2)) { goto L_801C8094; } // 801C8084
L_801C8088:;
  W16(c->r[28]+0x00000034u,c->r[27]); // 801C8088
  W16(c->r[28]+0x00000036u,c->r[27]); // 801C808C
  goto L_801C809C; // 801C8090
L_801C8094:;
  W16(c->r[28]+0x00000034u,c->r[31]); // 801C8094
  W16(c->r[28]+0x00000036u,c->r[31]); // 801C8098
L_801C809C:;
  c->r[0]=R16(c->r[28]+0x00000034u); // 801C809C
  c->r[3]=c->r[23]+0xFFFF851Fu; // 801C80A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 801C80A4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801C80A8
  c->r[0]=sraw(c,c->r[0],5); // 801C80AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C80B0
  c->r[0]=c->r[0]+c->r[3]; // 801C80B4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801C80B8
  W16(c->r[28]+0x0000003Au,c->r[0]); // 801C80BC
  c->r[0]=addc(c,~c->r[4],c->r[31],1); // 801C80C0
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801C80C4
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 801C80C8
  c->r[3]=c->r[0]&c->r[3]; // 801C80CC
  W16(c->r[28]+0x0000003Cu,c->r[3]); // 801C80D0
  c->r[0]=c->r[4]+0x00000002u; // 801C80D4
  W16(c->r[28]+0x0000003Eu,c->r[0]); // 801C80D8
  c->r[0]=R8(c->r[30]+0xFFFFB1E0u); // 801C80DC
  cmpu(c,0,c->r[0],0x00000005u); // 801C80E0
  if (crb(c,0)) { goto L_801C810C; } // 801C80E4
  c->r[6]=R8(c->r[28]+0x0000005Au); // 801C80E8
  c->r[3]=c->r[24]+0x00000004u; // 801C80EC
  c->r[7]=R16(c->r[28]+0x00000036u); // 801C80F0
  c->r[4]=c->r[25]+0x00005460u; // 801C80F4
  c->r[8]=R16(c->r[28]+0x0000003Au); // 801C80F8
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801C80FC
  c->r[9]=R16(c->r[28]+0x0000003Cu); // 801C8100
  c->r[10]=R16(c->r[28]+0x0000003Eu); // 801C8104
  c->lr=0x801C810Cu; f_801ACBB0(c); // 801C8108
L_801C810C:;
  c->r[29]=c->r[29]+0x00000001u; // 801C810C
  c->r[28]=c->r[28]+0x0000005Cu; // 801C8110
  cmpu(c,0,c->r[29],0x00000004u); // 801C8114
  if (crb(c,0)) { IRQCHK(c); goto L_801C8068; } // 801C8118
L_801C811C:;
  c->r[11]=c->r[1]+0x00000030u; // 801C811C
  c->lr=0x801C8124u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8120
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C8124
  c->lr=c->r[0]; // 801C8128
  c->r[1]=c->r[1]+0x00000030u; // 801C812C
  return; // 801C8130
}

// l2c_link_process_num_completed_pkts
void f_801C8134(Ctx* __restrict c) {
  trace_call(0x801C8134u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8134
  c->r[0]=c->lr; // 801C8138
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C813C
  c->r[11]=c->r[1]+0x00000020u; // 801C8140
  c->lr=0x801C8148u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8144
  c->r[28]=0u+0x803D0000u; // 801C8148
  c->r[31]=R8(c->r[3]+0x00000000u); // 801C814C
  c->r[29]=c->r[3]+0x00000001u; // 801C8150
  c->r[30]=0u+0x00000000u; // 801C8154
  c->r[28]=c->r[28]+0xFFFFB1E0u; // 801C8158
  c->r[27]=0u+0x00000000u; // 801C815C
  goto L_801C81F4; // 801C8160
L_801C8164:;
  c->r[3]=R8(c->r[29]+0x00000001u); // 801C8164
  c->r[0]=R8(c->r[29]+0x00000003u); // 801C8168
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801C816C
  c->r[5]=R8(c->r[29]+0x00000000u); // 801C8170
  c->r[3]=R8(c->r[29]+0x00000002u); // 801C8174
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8178
  c->r[4]=c->r[5]+c->r[4]; // 801C817C
  c->r[29]=c->r[29]+0x00000004u; // 801C8180
  c->r[0]=c->r[3]+c->r[0]; // 801C8184
  c->r[3]=rotl(c->r[4],0)&0x0000FFFFu; // 801C8188
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801C818C
  c->lr=0x801C8194u; f_801C9900(c); // 801C8190
  cmps(c,0,(int32_t)c->r[3],0); // 801C8194
  if (crb(c,2)) { goto L_801C81F0; } // 801C8198
  c->r[0]=R16(c->r[3]+0x00000036u); // 801C819C
  c->r[0]=c->r[0]+c->r[26]; // 801C81A0
  W16(c->r[3]+0x00000036u,c->r[0]); // 801C81A4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801C81A8
  c->r[4]=R16(c->r[3]+0x00000034u); // 801C81AC
  cmpu(c,0,c->r[0],c->r[4]); // 801C81B0
  if (!crb(c,1)) { goto L_801C81BC; } // 801C81B4
  W16(c->r[3]+0x00000036u,c->r[4]); // 801C81B8
L_801C81BC:;
  c->r[0]=R16(c->r[3]+0x00000038u); // 801C81BC
  cmpu(c,0,c->r[0],c->r[26]); // 801C81C0
  if (!crb(c,1)) { goto L_801C81D4; } // 801C81C4
  c->r[0]=c->r[0]-c->r[26]; // 801C81C8
  W16(c->r[3]+0x00000038u,c->r[0]); // 801C81CC
  goto L_801C81D8; // 801C81D0
L_801C81D4:;
  W16(c->r[3]+0x00000038u,c->r[27]); // 801C81D4
L_801C81D8:;
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C81D8
  c->r[4]=0u+0x00000000u; // 801C81DC
  c->r[5]=0u+0x00000000u; // 801C81E0
  c->r[0]=c->r[0]+c->r[26]; // 801C81E4
  W16(c->r[28]+0x00000004u,c->r[0]); // 801C81E8
  c->lr=0x801C81F0u; f_801C7CD0(c); // 801C81EC
L_801C81F0:;
  c->r[30]=c->r[30]+0x00000001u; // 801C81F0
L_801C81F4:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801C81F4
  cmpu(c,0,c->r[0],c->r[31]); // 801C81F8
  if (crb(c,0)) { IRQCHK(c); goto L_801C8164; } // 801C81FC
  c->r[11]=c->r[1]+0x00000020u; // 801C8200
  c->lr=0x801C8208u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8204
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8208
  c->lr=c->r[0]; // 801C820C
  c->r[1]=c->r[1]+0x00000020u; // 801C8210
  return; // 801C8214
}

// l2c_link_processs_num_bufs
void f_801C8218(Ctx* __restrict c) {
  trace_call(0x801C8218u);
  c->r[4]=0u+0x803D0000u; // 801C8218
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801C821C
  W16(c->r[4]+0x00000002u,c->r[3]); // 801C8220
  W16(c->r[4]+0x00000004u,c->r[3]); // 801C8224
  return; // 801C8228
}

// l2cap_link_chk_pkt_start
void f_801C822C(Ctx* __restrict c) {
  trace_call(0x801C822Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C822C
  c->r[0]=c->lr; // 801C8230
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8234
  c->r[11]=c->r[1]+0x00000030u; // 801C8238
  c->lr=0x801C8240u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C823C
  c->r[0]=R16(c->r[3]+0x00000004u); // 801C8240
  c->r[6]=0u+0x00000000u; // 801C8244
  W16(c->r[3]+0x00000006u,c->r[6]); // 801C8248
  c->r[24]=0u+0x803D0000u; // 801C824C
  c->r[7]=c->r[3]+c->r[0]; // 801C8250
  c->r[28]=c->r[3]|c->r[3]; // 801C8254
  c->r[3]=R8(c->r[7]+0x00000009u); // 801C8258
  c->r[25]=c->r[24]+0xFFFFB1E0u; // 801C825C
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801C8260
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801C8264
  c->r[5]=R8(c->r[7]+0x00000008u); // 801C8268
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801C826C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8270
  c->r[4]=c->r[5]+c->r[4]; // 801C8274
  c->r[0]=c->r[3]+c->r[0]; // 801C8278
  W32(c->r[25]+0x000007BCu,c->r[6]); // 801C827C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8280
  c->r[27]=rotl(c->r[4],20)&0x00000003u; // 801C8284
  c->r[3]=rotl(c->r[4],0)&0x00000FFFu; // 801C8288
  c->lr=0x801C8290u; f_801C9900(c); // 801C828C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8290
  c->r[26]=c->r[3]|c->r[3]; // 801C8294
  if (!crb(c,2)) { goto L_801C82A4; } // 801C8298
  c->r[3]=c->r[28]|c->r[28]; // 801C829C
  goto L_801C83E4; // 801C82A0
L_801C82A4:;
  cmpu(c,0,c->r[27],0x00000002u); // 801C82A4
  if (!crb(c,2)) { goto L_801C82F8; } // 801C82A8
  c->r[0]=R32(c->r[3]+0x00000050u); // 801C82AC
  cmps(c,0,(int32_t)c->r[0],0); // 801C82B0
  if (crb(c,2)) { goto L_801C82E0; } // 801C82B4
  c->r[0]=R8(c->r[24]+0xFFFFB1E0u); // 801C82B8
  cmpu(c,0,c->r[0],0x00000002u); // 801C82BC
  if (crb(c,0)) { goto L_801C82D8; } // 801C82C0
  c->r[3]=0u+0x00080000u; // 801C82C4
  c->r[4]=0u+0x80330000u; // 801C82C8
  c->r[3]=c->r[3]+0x00000001u; // 801C82CC
  c->r[4]=c->r[4]+0x000054A8u; // 801C82D0
  c->lr=0x801C82D8u; f_801ACB20(c); // 801C82D4
L_801C82D8:;
  c->r[3]=R32(c->r[26]+0x00000050u); // 801C82D8
  c->lr=0x801C82E0u; f_801AA228(c); // 801C82DC
L_801C82E0:;
  c->r[3]=0u+0x803D0000u; // 801C82E0
  W32(c->r[26]+0x00000050u,c->r[28]); // 801C82E4
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C82E8
  c->r[30]=c->r[28]|c->r[28]; // 801C82EC
  W32(c->r[3]+0x000007BCu,c->r[26]); // 801C82F0
  goto L_801C83D0; // 801C82F4
L_801C82F8:;
  c->r[30]=R32(c->r[3]+0x00000050u); // 801C82F8
  cmps(c,0,(int32_t)c->r[30],0); // 801C82FC
  if (crb(c,2)) { goto L_801C83CC; } // 801C8300
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C8304
  c->r[27]=c->r[30]+c->r[0]; // 801C8308
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 801C830C
  c->r[4]=R8(c->r[27]+0x0000000Au); // 801C8310
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8314
  c->r[0]=c->r[4]+c->r[0]; // 801C8318
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801C831C
  c->r[0]=c->r[29]+c->r[31]; // 801C8320
  cmps(c,0,(int32_t)c->r[0],1695); // 801C8324
  if (crb(c,1)) { goto L_801C8394; } // 801C8328
  W32(c->r[25]+0x000007BCu,c->r[3]); // 801C832C
  c->r[3]=R16(c->r[28]+0x00000002u); // 801C8330
  cmpu(c,0,c->r[3],0x00000004u); // 801C8334
  if (!crb(c,1)) { goto L_801C8378; } // 801C8338
  c->r[4]=R16(c->r[30]+0x00000004u); // 801C833C
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 801C8340
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C8344
  c->r[6]=c->r[30]+c->r[4]; // 801C8348
  c->r[3]=R16(c->r[30]+0x00000002u); // 801C834C
  c->r[4]=c->r[28]+c->r[0]; // 801C8350
  c->r[3]=c->r[6]+c->r[3]; // 801C8354
  c->r[3]=c->r[3]+0x00000008u; // 801C8358
  c->r[4]=c->r[4]+0x0000000Cu; // 801C835C
  c->lr=0x801C8364u; f_80004338(c); // 801C8360
  c->r[3]=R16(c->r[30]+0x00000002u); // 801C8364
  c->r[0]=R16(c->r[28]+0x00000002u); // 801C8368
  c->r[3]=c->r[0]+c->r[3]; // 801C836C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801C8370
  W16(c->r[30]+0x00000002u,c->r[0]); // 801C8374
L_801C8378:;
  c->r[3]=c->r[28]|c->r[28]; // 801C8378
  c->lr=0x801C8380u; f_801AA228(c); // 801C837C
  c->r[29]=c->r[29]+c->r[31]; // 801C8380
  W8(c->r[27]+0x0000000Au,c->r[29]); // 801C8384
  c->r[0]=rotl(c->r[29],24)&0x000000FFu; // 801C8388
  W8(c->r[27]+0x0000000Bu,c->r[0]); // 801C838C
  goto L_801C83D0; // 801C8390
L_801C8394:;
  c->r[0]=R8(c->r[24]+0xFFFFB1E0u); // 801C8394
  cmpu(c,0,c->r[0],0x00000002u); // 801C8398
  if (crb(c,0)) { goto L_801C83B4; } // 801C839C
  c->r[3]=0u+0x00080000u; // 801C83A0
  c->r[4]=0u+0x80330000u; // 801C83A4
  c->r[3]=c->r[3]+0x00000001u; // 801C83A8
  c->r[4]=c->r[4]+0x000054C8u; // 801C83AC
  c->lr=0x801C83B4u; f_801ACB20(c); // 801C83B0
L_801C83B4:;
  c->r[3]=R32(c->r[26]+0x00000050u); // 801C83B4
  c->lr=0x801C83BCu; f_801AA228(c); // 801C83B8
  c->r[0]=0u+0x00000000u; // 801C83BC
  c->r[30]=0u+0x00000000u; // 801C83C0
  W32(c->r[26]+0x00000050u,c->r[0]); // 801C83C4
  goto L_801C83D0; // 801C83C8
L_801C83CC:;
  c->r[30]=0u+0x00000000u; // 801C83CC
L_801C83D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C83D0
  if (!crb(c,2)) { goto L_801C83E0; } // 801C83D4
  c->r[3]=c->r[28]|c->r[28]; // 801C83D8
  c->lr=0x801C83E0u; f_801AA228(c); // 801C83DC
L_801C83E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801C83E0
L_801C83E4:;
  c->r[11]=c->r[1]+0x00000030u; // 801C83E4
  c->lr=0x801C83ECu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C83E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C83EC
  c->lr=c->r[0]; // 801C83F0
  c->r[1]=c->r[1]+0x00000030u; // 801C83F4
  return; // 801C83F8
}

// l2cap_link_chk_pkt_end
void f_801C83FC(Ctx* __restrict c) {
  trace_call(0x801C83FCu);
  c->r[3]=0u+0x803D0000u; // 801C83FC
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C8400
  c->r[6]=R32(c->r[3]+0x000007BCu); // 801C8404
  cmps(c,0,(int32_t)c->r[6],0); // 801C8408
  if (crb(c,2)) { goto L_801C841C; } // 801C840C
  c->r[4]=R32(c->r[6]+0x00000050u); // 801C8410
  cmps(c,0,(int32_t)c->r[4],0); // 801C8414
  if (!crb(c,2)) { goto L_801C8424; } // 801C8418
L_801C841C:;
  c->r[3]=0u+0x00000001u; // 801C841C
  return; // 801C8420
L_801C8424:;
  c->r[0]=R16(c->r[4]+0x00000004u); // 801C8424
  c->r[3]=R16(c->r[4]+0x00000002u); // 801C8428
  c->r[5]=c->r[4]+c->r[0]; // 801C842C
  c->r[4]=R8(c->r[5]+0x0000000Du); // 801C8430
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801C8434
  c->r[5]=R8(c->r[5]+0x0000000Cu); // 801C8438
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 801C843C
  c->r[3]=c->r[5]+c->r[3]; // 801C8440
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801C8444
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C8448
  if (!crb(c,1)) { goto L_801C8458; } // 801C844C
  c->r[3]=0u+0x00000000u; // 801C8450
  return; // 801C8454
L_801C8458:;
  c->r[0]=0u+0x00000000u; // 801C8458
  c->r[3]=0u+0x00000001u; // 801C845C
  W32(c->r[6]+0x00000050u,c->r[0]); // 801C8460
  return; // 801C8464
}

// l2c_link_role_changed
void f_801C8468(Ctx* __restrict c) {
  trace_call(0x801C8468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8468
  c->r[0]=c->lr; // 801C846C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8474
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C8478
  c->r[30]=c->r[4]|c->r[4]; // 801C847C
  c->lr=0x801C8484u; f_801C9878(c); // 801C8480
  cmps(c,0,(int32_t)c->r[3],0); // 801C8484
  if (crb(c,2)) { goto L_801C8490; } // 801C8488
  W8(c->r[3]+0x00000030u,c->r[30]); // 801C848C
L_801C8490:;
  c->r[3]=0u+0x803D0000u; // 801C8490
  c->r[30]=0u+0x00000000u; // 801C8494
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C8498
  c->r[31]=c->r[3]+0x00000008u; // 801C849C
L_801C84A0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C84A0
  cmps(c,0,(int32_t)c->r[0],0); // 801C84A4
  if (crb(c,2)) { goto L_801C84C0; } // 801C84A8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801C84AC
  cmps(c,0,(int32_t)c->r[0],2); // 801C84B0
  if (!crb(c,2)) { goto L_801C84C0; } // 801C84B4
  c->r[3]=c->r[31]|c->r[31]; // 801C84B8
  c->lr=0x801C84C0u; f_801CB320(c); // 801C84BC
L_801C84C0:;
  c->r[30]=c->r[30]+0x00000001u; // 801C84C0
  c->r[31]=c->r[31]+0x0000005Cu; // 801C84C4
  cmps(c,0,(int32_t)c->r[30],4); // 801C84C8
  if (crb(c,0)) { IRQCHK(c); goto L_801C84A0; } // 801C84CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C84D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C84D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C84D8
  c->lr=c->r[0]; // 801C84DC
  c->r[1]=c->r[1]+0x00000010u; // 801C84E0
  return; // 801C84E4
}

// l2c_link_role_change_failed
void f_801C84E8(Ctx* __restrict c) {
  trace_call(0x801C84E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C84E8
  c->r[0]=c->lr; // 801C84EC
  c->r[3]=0u+0x803D0000u; // 801C84F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C84F4
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C84F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C84FC
  c->r[31]=c->r[3]+0x00000008u; // 801C8500
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C8504
  c->r[30]=0u+0x00000000u; // 801C8508
L_801C850C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C850C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8510
  if (crb(c,2)) { goto L_801C852C; } // 801C8514
  c->r[0]=R32(c->r[31]+0x00000004u); // 801C8518
  cmps(c,0,(int32_t)c->r[0],2); // 801C851C
  if (!crb(c,2)) { goto L_801C852C; } // 801C8520
  c->r[3]=c->r[31]|c->r[31]; // 801C8524
  c->lr=0x801C852Cu; f_801CB320(c); // 801C8528
L_801C852C:;
  c->r[30]=c->r[30]+0x00000001u; // 801C852C
  c->r[31]=c->r[31]+0x0000005Cu; // 801C8530
  cmps(c,0,(int32_t)c->r[30],4); // 801C8534
  if (crb(c,0)) { IRQCHK(c); goto L_801C850C; } // 801C8538
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C853C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8540
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C8544
  c->lr=c->r[0]; // 801C8548
  c->r[1]=c->r[1]+0x00000010u; // 801C854C
  return; // 801C8550
}

// l2c_link_segments_xmitted
void f_801C8554(Ctx* __restrict c) {
  trace_call(0x801C8554u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8554
  c->r[0]=c->lr; // 801C8558
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C855C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8560
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8564
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C8568
  c->r[29]=c->r[3]|c->r[3]; // 801C856C
  c->r[0]=R16(c->r[3]+0x00000004u); // 801C8570
  c->r[3]=c->r[3]+c->r[0]; // 801C8574
  c->r[0]=R8(c->r[3]+0x00000009u); // 801C8578
  c->r[3]=R8(c->r[3]+0x00000008u); // 801C857C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8580
  c->r[0]=c->r[3]+c->r[0]; // 801C8584
  c->r[31]=rotl(c->r[0],0)&0x00000FFFu; // 801C8588
  c->r[3]=c->r[31]|c->r[31]; // 801C858C
  c->lr=0x801C8594u; f_801C9900(c); // 801C8590
  cmps(c,0,(int32_t)c->r[3],0); // 801C8594
  c->r[30]=c->r[3]|c->r[3]; // 801C8598
  if (!crb(c,2)) { goto L_801C85D4; } // 801C859C
  c->r[3]=0u+0x803D0000u; // 801C85A0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C85A4
  cmpu(c,0,c->r[0],0x00000002u); // 801C85A8
  if (crb(c,0)) { goto L_801C85C8; } // 801C85AC
  c->r[3]=0u+0x00080000u; // 801C85B0
  c->r[4]=0u+0x80330000u; // 801C85B4
  c->r[5]=c->r[31]|c->r[31]; // 801C85B8
  c->r[3]=c->r[3]+0x00000001u; // 801C85BC
  c->r[4]=c->r[4]+0x000054E8u; // 801C85C0
  c->lr=0x801C85C8u; f_801ACB38(c); // 801C85C4
L_801C85C8:;
  c->r[3]=c->r[29]|c->r[29]; // 801C85C8
  c->lr=0x801C85D0u; f_801AA228(c); // 801C85CC
  goto L_801C8614; // 801C85D0
L_801C85D4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C85D4
  cmps(c,0,(int32_t)c->r[0],4); // 801C85D8
  if (!crb(c,2)) { goto L_801C860C; } // 801C85DC
  c->r[31]=0u+0x00000000u; // 801C85E0
  c->r[4]=c->r[29]|c->r[29]; // 801C85E4
  W16(c->r[29]+0x00000006u,c->r[31]); // 801C85E8
  c->r[3]=c->r[3]+0x00000044u; // 801C85EC
  c->lr=0x801C85F4u; f_801AA784(c); // 801C85F0
  W8(c->r[30]+0x00000040u,c->r[31]); // 801C85F4
  c->r[3]=c->r[30]|c->r[30]; // 801C85F8
  c->r[4]=0u+0x00000000u; // 801C85FC
  c->r[5]=0u+0x00000000u; // 801C8600
  c->lr=0x801C8608u; f_801C7CD0(c); // 801C8604
  goto L_801C8614; // 801C8608
L_801C860C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C860C
  c->lr=0x801C8614u; f_801AA228(c); // 801C8610
L_801C8614:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8614
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C8618
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C861C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8620
  c->lr=c->r[0]; // 801C8624
  c->r[1]=c->r[1]+0x00000020u; // 801C8628
  return; // 801C862C
}

// l2c_pin_code_request
void f_801C8630(Ctx* __restrict c) {
  trace_call(0x801C8630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8630
  c->r[0]=c->lr; // 801C8634
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8638
  c->lr=0x801C8640u; f_801C9878(c); // 801C863C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8640
  if (crb(c,2)) { goto L_801C8664; } // 801C8644
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C8648
  cmps(c,0,(int32_t)c->r[0],0); // 801C864C
  if (!crb(c,2)) { goto L_801C8664; } // 801C8650
  c->r[4]=0u+0x00000002u; // 801C8654
  c->r[5]=0u+0x00000078u; // 801C8658
  c->r[3]=c->r[3]+0x00000010u; // 801C865C
  c->lr=0x801C8664u; f_801AD0EC(c); // 801C8660
L_801C8664:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8664
  c->lr=c->r[0]; // 801C8668
  c->r[1]=c->r[1]+0x00000010u; // 801C866C
  return; // 801C8670
}

// l2c_init
void f_801C8674(Ctx* __restrict c) {
  trace_call(0x801C8674u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8674
  c->r[0]=c->lr; // 801C8678
  c->r[4]=0u+0x00000000u; // 801C867C
  c->r[5]=0u+0x000007E8u; // 801C8680
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8688
  c->r[31]=0u+0x803D0000u; // 801C868C
  c->r[3]=c->r[31]+0xFFFFB1E0u; // 801C8690
  c->lr=0x801C8698u; f_80004688(c); // 801C8694
  c->r[4]=0u+0x00000001u; // 801C8698
  c->r[0]=0u+0x00000002u; // 801C869C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)124); // 801C86A0
  c->r[11]=c->r[31]+0xFFFFB1E0u; // 801C86A4
  c->r[7]=0u+0x00000003u; // 801C86A8
  c->r[4]=0u+0x00000004u; // 801C86AC
  c->r[8]=c->r[11]+c->r[3]; // 801C86B0
  c->r[5]=c->r[11]+0x00000178u; // 801C86B4
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)124); // 801C86B8
  c->r[7]=0u+0x00000006u; // 801C86BC
  c->r[10]=c->r[8]+0x00000178u; // 801C86C0
  W32(c->r[11]+0x00000180u,c->r[10]); // 801C86C4
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)124); // 801C86C8
  c->r[0]=0u+0x00000005u; // 801C86CC
  c->r[6]=c->r[11]+c->r[6]; // 801C86D0
  c->r[8]=c->r[11]+c->r[9]; // 801C86D4
  c->r[6]=c->r[6]+0x00000178u; // 801C86D8
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)124); // 801C86DC
  c->r[4]=0u+0x00000007u; // 801C86E0
  c->r[8]=c->r[8]+0x00000178u; // 801C86E4
  W32(c->r[11]+0x000001FCu,c->r[8]); // 801C86E8
  c->r[8]=c->r[11]+c->r[3]; // 801C86EC
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)124); // 801C86F0
  W32(c->r[11]+0x00000278u,c->r[6]); // 801C86F4
  c->r[10]=c->r[8]+0x00000178u; // 801C86F8
  W32(c->r[11]+0x000002F4u,c->r[10]); // 801C86FC
  c->r[0]=0u+0x00000008u; // 801C8700
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)124); // 801C8704
  c->r[8]=c->r[11]+c->r[9]; // 801C8708
  c->r[7]=0u+0x00000009u; // 801C870C
  c->r[8]=c->r[8]+0x00000178u; // 801C8710
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)124); // 801C8714
  c->r[6]=c->r[11]+c->r[6]; // 801C8718
  W32(c->r[11]+0x00000370u,c->r[8]); // 801C871C
  c->r[4]=c->r[11]+0x000005D4u; // 801C8720
  c->r[6]=c->r[6]+0x00000178u; // 801C8724
  c->r[8]=c->r[11]+c->r[3]; // 801C8728
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)124); // 801C872C
  W32(c->r[11]+0x000003ECu,c->r[6]); // 801C8730
  c->r[10]=c->r[8]+0x00000178u; // 801C8734
  W32(c->r[11]+0x00000468u,c->r[10]); // 801C8738
  c->r[3]=0u+0x00000000u; // 801C873C
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)124); // 801C8740
  c->r[8]=c->r[11]+c->r[9]; // 801C8744
  c->r[0]=0u+0x00000002u; // 801C8748
  c->r[8]=c->r[8]+0x00000178u; // 801C874C
  c->r[6]=c->r[11]+c->r[6]; // 801C8750
  W32(c->r[11]+0x000004E4u,c->r[8]); // 801C8754
  c->r[6]=c->r[6]+0x00000178u; // 801C8758
  W32(c->r[11]+0x00000560u,c->r[6]); // 801C875C
  W32(c->r[11]+0x000007B0u,c->r[5]); // 801C8760
  W32(c->r[11]+0x000007B4u,c->r[4]); // 801C8764
  W8(c->r[11]+0x00000001u,c->r[3]); // 801C8768
  W16(c->r[11]+0x000007BAu,c->r[0]); // 801C876C
  W8(c->r[31]+0xFFFFB1E0u,c->r[3]); // 801C8770
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8774
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8778
  c->lr=c->r[0]; // 801C877C
  c->r[1]=c->r[1]+0x00000010u; // 801C8780
  return; // 801C8784
}

// l2c_rcv_acl_data
void f_801C8788(Ctx* __restrict c) {
  trace_call(0x801C8788u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8788
  c->r[0]=c->lr; // 801C878C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8790
  c->r[11]=c->r[1]+0x00000030u; // 801C8794
  c->lr=0x801C879Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8798
  c->r[0]=R16(c->r[3]+0x00000004u); // 801C879C
  c->r[30]=0u+0x80330000u; // 801C87A0
  c->r[27]=c->r[3]|c->r[3]; // 801C87A4
  c->r[28]=0u+0x00000000u; // 801C87A8
  c->r[31]=c->r[3]+c->r[0]; // 801C87AC
  c->r[30]=c->r[30]+0x00005520u; // 801C87B0
  c->r[0]=R8(c->r[31]+0x00000009u); // 801C87B4
  c->r[3]=R8(c->r[31]+0x00000008u); // 801C87B8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C87BC
  c->r[0]=c->r[3]+c->r[0]; // 801C87C0
  c->r[5]=rotl(c->r[0],20)&0x00000003u; // 801C87C4
  cmpu(c,0,c->r[5],0x00000002u); // 801C87C8
  c->r[26]=rotl(c->r[0],0)&0x00000FFFu; // 801C87CC
  if (crb(c,2)) { goto L_801C8800; } // 801C87D0
  c->r[3]=0u+0x803D0000u; // 801C87D4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C87D8
  cmpu(c,0,c->r[0],0x00000002u); // 801C87DC
  if (crb(c,0)) { goto L_801C87F4; } // 801C87E0
  c->r[3]=0u+0x00080000u; // 801C87E4
  c->r[4]=c->r[30]+0x00000000u; // 801C87E8
  c->r[3]=c->r[3]+0x00000001u; // 801C87EC
  c->lr=0x801C87F4u; f_801ACB38(c); // 801C87F0
L_801C87F4:;
  c->r[3]=c->r[27]|c->r[27]; // 801C87F4
  c->lr=0x801C87FCu; f_801AA228(c); // 801C87F8
  goto L_801C8AA0; // 801C87FC
L_801C8800:;
  c->r[3]=c->r[26]|c->r[26]; // 801C8800
  c->lr=0x801C8808u; f_801C9900(c); // 801C8804
  cmps(c,0,(int32_t)c->r[3],0); // 801C8808
  c->r[29]=c->r[3]|c->r[3]; // 801C880C
  if (!crb(c,2)) { goto L_801C88E0; } // 801C8810
  c->r[3]=R8(c->r[31]+0x0000000Fu); // 801C8814
  c->r[0]=R16(c->r[27]+0x00000006u); // 801C8818
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 801C881C
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801C8820
  cmps(c,0,(int32_t)c->r[0],0); // 801C8824
  c->r[28]=R8(c->r[31]+0x00000010u); // 801C8828
  c->r[0]=c->r[4]+c->r[3]; // 801C882C
  c->r[24]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8830
  if (!crb(c,2)) { goto L_801C88D4; } // 801C8834
  cmpu(c,0,c->r[24],0x00000001u); // 801C8838
  if (!crb(c,2)) { goto L_801C88D4; } // 801C883C
  cmpu(c,0,c->r[28],0x0000000Au); // 801C8840
  if (crb(c,2)) { goto L_801C8850; } // 801C8844
  cmpu(c,0,c->r[28],0x00000002u); // 801C8848
  if (!crb(c,2)) { goto L_801C88D4; } // 801C884C
L_801C8850:;
  c->r[3]=c->r[26]|c->r[26]; // 801C8850
  c->lr=0x801C8858u; f_801BC0C8(c); // 801C8854
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801C8858
  if (!crb(c,2)) { goto L_801C88D4; } // 801C885C
  c->r[3]=0u+0x803D0000u; // 801C8860
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C8864
  cmpu(c,0,c->r[0],0x00000002u); // 801C8868
  if (crb(c,0)) { goto L_801C8898; } // 801C886C
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C8870
  c->r[4]=0u+0x00080000u; // 801C8874
  c->r[9]=R16(c->r[3]+0x000007C8u); // 801C8878
  c->r[3]=c->r[4]+0x00000001u; // 801C887C
  c->r[6]=R16(c->r[27]+0x00000006u); // 801C8880
  c->r[5]=c->r[26]|c->r[26]; // 801C8884
  c->r[7]=c->r[24]|c->r[24]; // 801C8888
  c->r[8]=c->r[28]|c->r[28]; // 801C888C
  c->r[4]=c->r[30]+0x00000024u; // 801C8890
  c->lr=0x801C8898u; f_801ACB98(c); // 801C8894
L_801C8898:;
  c->r[0]=0u+0x00000002u; // 801C8898
  c->r[28]=0u+0x803D0000u; // 801C889C
  c->r[28]=c->r[28]+0xFFFFB1E0u; // 801C88A0
  W16(c->r[27]+0x00000006u,c->r[0]); // 801C88A4
  c->r[4]=c->r[27]|c->r[27]; // 801C88A8
  c->r[3]=c->r[28]+0x000007C0u; // 801C88AC
  c->lr=0x801C88B4u; f_801AA648(c); // 801C88B0
  c->r[0]=R16(c->r[28]+0x000007C8u); // 801C88B4
  cmpu(c,0,c->r[0],0x00000001u); // 801C88B8
  if (!crb(c,2)) { goto L_801C8AA0; } // 801C88BC
  c->r[3]=c->r[28]+0x000007CCu; // 801C88C0
  c->r[4]=0u+0x00000004u; // 801C88C4
  c->r[5]=0u+0x00000001u; // 801C88C8
  c->lr=0x801C88D0u; f_801AD0EC(c); // 801C88CC
  goto L_801C8AA0; // 801C88D0
L_801C88D4:;
  c->r[3]=c->r[27]|c->r[27]; // 801C88D4
  c->lr=0x801C88DCu; f_801AA228(c); // 801C88D8
  goto L_801C8AA0; // 801C88DC
L_801C88E0:;
  c->r[4]=R16(c->r[27]+0x00000004u); // 801C88E0
  c->r[5]=R8(c->r[31]+0x0000000Bu); // 801C88E4
  c->r[0]=c->r[4]+0x00000004u; // 801C88E8
  c->r[6]=R8(c->r[31]+0x0000000Au); // 801C88EC
  c->r[4]=rotl(c->r[5],8)&0xFFFFFF00u; // 801C88F0
  W16(c->r[27]+0x00000004u,c->r[0]); // 801C88F4
  c->r[0]=c->r[6]+c->r[4]; // 801C88F8
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 801C88FC
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801C8900
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 801C8904
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8908
  c->r[5]=R8(c->r[31]+0x0000000Du); // 801C890C
  c->r[0]=c->r[4]+c->r[0]; // 801C8910
  c->r[4]=R8(c->r[31]+0x0000000Cu); // 801C8914
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8918
  c->r[0]=rotl(c->r[5],8)&0xFFFFFF00u; // 801C891C
  c->r[0]=c->r[4]+c->r[0]; // 801C8920
  cmpu(c,0,c->r[26],0x00000002u); // 801C8924
  c->r[24]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8928
  if (!crb(c,1)) { goto L_801C8974; } // 801C892C
  c->r[4]=c->r[26]|c->r[26]; // 801C8930
  c->lr=0x801C8938u; f_801CAD54(c); // 801C8934
  cmps(c,0,(int32_t)c->r[3],0); // 801C8938
  c->r[28]=c->r[3]|c->r[3]; // 801C893C
  if (!crb(c,2)) { goto L_801C8974; } // 801C8940
  c->r[3]=0u+0x803D0000u; // 801C8944
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C8948
  cmpu(c,0,c->r[0],0x00000002u); // 801C894C
  if (crb(c,0)) { goto L_801C8968; } // 801C8950
  c->r[3]=0u+0x00080000u; // 801C8954
  c->r[5]=c->r[26]|c->r[26]; // 801C8958
  c->r[3]=c->r[3]+0x00000001u; // 801C895C
  c->r[4]=c->r[30]+0x00000078u; // 801C8960
  c->lr=0x801C8968u; f_801ACB38(c); // 801C8964
L_801C8968:;
  c->r[3]=c->r[27]|c->r[27]; // 801C8968
  c->lr=0x801C8970u; f_801AA228(c); // 801C896C
  goto L_801C8AA0; // 801C8970
L_801C8974:;
  cmpu(c,0,c->r[25],0x00000004u); // 801C8974
  if (crb(c,0)) { goto L_801C8994; } // 801C8978
  c->r[3]=R16(c->r[27]+0x00000004u); // 801C897C
  c->r[4]=c->r[25]+0xFFFFFFFCu; // 801C8980
  W16(c->r[27]+0x00000002u,c->r[4]); // 801C8984
  c->r[0]=c->r[3]+0x00000004u; // 801C8988
  W16(c->r[27]+0x00000004u,c->r[0]); // 801C898C
  goto L_801C89C0; // 801C8990
L_801C8994:;
  c->r[3]=0u+0x803D0000u; // 801C8994
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C8998
  cmpu(c,0,c->r[0],0x00000002u); // 801C899C
  if (crb(c,0)) { goto L_801C89B4; } // 801C89A0
  c->r[3]=0u+0x00080000u; // 801C89A4
  c->r[4]=c->r[30]+0x00000090u; // 801C89A8
  c->r[3]=c->r[3]+0x00000001u; // 801C89AC
  c->lr=0x801C89B4u; f_801ACB20(c); // 801C89B0
L_801C89B4:;
  c->r[3]=c->r[27]|c->r[27]; // 801C89B4
  c->lr=0x801C89BCu; f_801AA228(c); // 801C89B8
  goto L_801C8AA0; // 801C89BC
L_801C89C0:;
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 801C89C0
  cmpu(c,0,c->r[24],c->r[6]); // 801C89C4
  if (crb(c,2)) { goto L_801C89FC; } // 801C89C8
  c->r[3]=0u+0x803D0000u; // 801C89CC
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C89D0
  cmpu(c,0,c->r[0],0x00000002u); // 801C89D4
  if (crb(c,0)) { goto L_801C89F0; } // 801C89D8
  c->r[3]=0u+0x00080000u; // 801C89DC
  c->r[5]=c->r[24]|c->r[24]; // 801C89E0
  c->r[4]=c->r[30]+0x000000B4u; // 801C89E4
  c->r[3]=c->r[3]+0x00000001u; // 801C89E8
  c->lr=0x801C89F0u; f_801ACB50(c); // 801C89EC
L_801C89F0:;
  c->r[3]=c->r[27]|c->r[27]; // 801C89F0
  c->lr=0x801C89F8u; f_801AA228(c); // 801C89F4
  goto L_801C8AA0; // 801C89F8
L_801C89FC:;
  cmpu(c,0,c->r[26],0x00000001u); // 801C89FC
  if (!crb(c,2)) { goto L_801C8A20; } // 801C8A00
  c->r[3]=c->r[29]|c->r[29]; // 801C8A04
  c->r[5]=c->r[24]|c->r[24]; // 801C8A08
  c->r[4]=c->r[31]+0x00000010u; // 801C8A0C
  c->lr=0x801C8A14u; f_801C8AB8(c); // 801C8A10
  c->r[3]=c->r[27]|c->r[27]; // 801C8A14
  c->lr=0x801C8A1Cu; f_801AA228(c); // 801C8A18
  goto L_801C8AA0; // 801C8A1C
L_801C8A20:;
  cmpu(c,0,c->r[26],0x00000002u); // 801C8A20
  if (!crb(c,2)) { goto L_801C8A7C; } // 801C8A24
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8A28
  c->r[4]=R8(c->r[31]+0x00000011u); // 801C8A2C
  c->r[5]=R8(c->r[31]+0x00000010u); // 801C8A30
  c->r[3]=c->r[3]+0x00000002u; // 801C8A34
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 801C8A38
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801C8A3C
  W16(c->r[27]+0x00000004u,c->r[3]); // 801C8A40
  c->r[3]=0u+0x803D0000u; // 801C8A44
  c->r[4]=c->r[5]+c->r[4]; // 801C8A48
  W16(c->r[27]+0x00000002u,c->r[0]); // 801C8A4C
  c->r[5]=rotl(c->r[4],0)&0x0000FFFFu; // 801C8A50
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C8A54
  cmpu(c,0,c->r[0],0x00000005u); // 801C8A58
  if (crb(c,0)) { goto L_801C8A70; } // 801C8A5C
  c->r[3]=0u+0x00080000u; // 801C8A60
  c->r[4]=c->r[30]+0x000000E0u; // 801C8A64
  c->r[3]=c->r[3]+0x00000004u; // 801C8A68
  c->lr=0x801C8A70u; f_801ACB38(c); // 801C8A6C
L_801C8A70:;
  c->r[3]=c->r[27]|c->r[27]; // 801C8A70
  c->lr=0x801C8A78u; f_801AA228(c); // 801C8A74
  goto L_801C8AA0; // 801C8A78
L_801C8A7C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C8A7C
  if (!crb(c,2)) { goto L_801C8A90; } // 801C8A80
  c->r[3]=c->r[27]|c->r[27]; // 801C8A84
  c->lr=0x801C8A8Cu; f_801AA228(c); // 801C8A88
  goto L_801C8AA0; // 801C8A8C
L_801C8A90:;
  c->r[3]=c->r[28]|c->r[28]; // 801C8A90
  c->r[5]=c->r[27]|c->r[27]; // 801C8A94
  c->r[4]=0u+0x00000013u; // 801C8A98
  c->lr=0x801C8AA0u; f_801C600C(c); // 801C8A9C
L_801C8AA0:;
  c->r[11]=c->r[1]+0x00000030u; // 801C8AA0
  c->lr=0x801C8AA8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8AA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C8AA8
  c->lr=c->r[0]; // 801C8AAC
  c->r[1]=c->r[1]+0x00000030u; // 801C8AB0
  return; // 801C8AB4
}

// process_l2cap_cmd
void f_801C8AB8(Ctx* __restrict c) {
  trace_call(0x801C8AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8AB8
  c->r[0]=c->lr; // 801C8ABC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C8AC0
  c->r[11]=c->r[1]+0x000000A0u; // 801C8AC4
  c->lr=0x801C8ACCu; f_80185EA0(c); // 801C8AC8
  c->r[22]=c->r[4]+c->r[5]; // 801C8ACC
  c->r[23]=0u+0x80330000u; // 801C8AD0
  c->r[30]=0u+0x803C0000u; // 801C8AD4
  c->r[21]=c->r[4]|c->r[4]; // 801C8AD8
  c->r[31]=0u+0x00000000u; // 801C8ADC
  c->r[15]=c->r[3]|c->r[3]; // 801C8AE0
  c->r[14]=c->r[5]|c->r[5]; // 801C8AE4
  c->r[23]=c->r[23]+0x00005520u; // 801C8AE8
  c->r[30]=c->r[30]+0x00007BF0u; // 801C8AEC
  c->r[24]=c->r[22]+0xFFFFFFFCu; // 801C8AF0
  c->r[28]=0u+0x00000001u; // 801C8AF4
  c->r[29]=0u+0x00080000u; // 801C8AF8
  c->r[27]=0u+0x803D0000u; // 801C8AFC
  c->r[26]=0u+0x80330000u; // 801C8B00
L_801C8B04:;
  cmpu(c,0,c->r[21],c->r[24]); // 801C8B04
  c->r[16]=c->r[21]|c->r[21]; // 801C8B08
  if (crb(c,1)) { goto L_801C9510; } // 801C8B0C
  c->r[0]=R8(c->r[21]+0x00000003u); // 801C8B10
  c->r[3]=R8(c->r[21]+0x00000002u); // 801C8B14
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8B18
  c->r[7]=R8(c->r[21]+0x00000000u); // 801C8B1C
  c->r[0]=c->r[3]+c->r[0]; // 801C8B20
  c->r[25]=R8(c->r[21]+0x00000001u); // 801C8B24
  c->r[17]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8B28
  c->r[3]=c->r[21]+c->r[17]; // 801C8B2C
  c->r[21]=c->r[3]+0x00000004u; // 801C8B30
  cmpu(c,0,c->r[21],c->r[22]); // 801C8B34
  if (!crb(c,1)) { goto L_801C8B68; } // 801C8B38
  c->r[3]=0u+0x803D0000u; // 801C8B3C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C8B40
  cmpu(c,0,c->r[0],0x00000002u); // 801C8B44
  if (crb(c,0)) { goto L_801C9510; } // 801C8B48
  c->r[3]=0u+0x00080000u; // 801C8B4C
  c->r[5]=c->r[14]|c->r[14]; // 801C8B50
  c->r[6]=c->r[17]|c->r[17]; // 801C8B54
  c->r[4]=c->r[23]+0x00000100u; // 801C8B58
  c->r[3]=c->r[3]+0x00000001u; // 801C8B5C
  c->lr=0x801C8B64u; f_801ACB68(c); // 801C8B60
  goto L_801C9510; // 801C8B64
L_801C8B68:;
  cmpu(c,0,c->r[7],0x0000000Bu); // 801C8B68
  if (crb(c,1)) { goto L_801C94D4; } // 801C8B6C
  c->r[3]=c->r[26]+0x000057C4u; // 801C8B70
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801C8B74
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C8B78
  c->ctr=c->r[3]; // 801C8B7C
  if (true) { switch (c->ctr) { case 0x801C8B04u: goto L_801C8B04; case 0x801C8B84u: goto L_801C8B84; case 0x801C8C58u: goto L_801C8C58; case 0x801C8D24u: goto L_801C8D24; case 0x801C8E1Cu: goto L_801C8E1C; case 0x801C90CCu: goto L_801C90CC; case 0x801C937Cu: goto L_801C937C; case 0x801C93F0u: goto L_801C93F0; case 0x801C9450u: goto L_801C9450; case 0x801C9490u: goto L_801C9490; case 0x801C94B0u: goto L_801C94B0; case 0x801C94D4u: goto L_801C94D4; default: break; } dispatch(c,c->ctr); return; } // 801C8B80
L_801C8B84:;
  c->r[0]=R8(c->r[16]+0x00000005u); // 801C8B84
  c->r[3]=R8(c->r[16]+0x00000004u); // 801C8B88
  c->r[16]=c->r[16]+0x00000006u; // 801C8B8C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8B90
  c->r[0]=c->r[3]+c->r[0]; // 801C8B94
  c->r[17]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8B98
  cmpu(c,0,c->r[17],0x00000001u); // 801C8B9C
  if (!crb(c,2)) { goto L_801C8BD8; } // 801C8BA0
  c->r[3]=R8(c->r[16]+0x00000001u); // 801C8BA4
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C8BA8
  c->r[4]=R8(c->r[16]+0x00000000u); // 801C8BAC
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801C8BB0
  cmpu(c,0,c->r[0],0x00000002u); // 801C8BB4
  c->r[16]=c->r[16]+0x00000002u; // 801C8BB8
  c->r[0]=c->r[4]+c->r[3]; // 801C8BBC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8BC0
  if (crb(c,0)) { goto L_801C8BD8; } // 801C8BC4
  c->r[5]=R16(c->r[15]+0x00000028u); // 801C8BC8
  c->r[3]=c->r[29]+0x00000001u; // 801C8BCC
  c->r[4]=c->r[23]+0x00000134u; // 801C8BD0
  c->lr=0x801C8BD8u; f_801ACB50(c); // 801C8BD4
L_801C8BD8:;
  cmpu(c,0,c->r[17],0x00000002u); // 801C8BD8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C8BDC
  c->r[4]=R8(c->r[16]+0x00000001u); // 801C8BE0
  c->r[3]=R8(c->r[16]+0x00000003u); // 801C8BE4
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C8BE8
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801C8BEC
  c->r[6]=R8(c->r[16]+0x00000000u); // 801C8BF0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801C8BF4
  c->r[4]=R8(c->r[16]+0x00000002u); // 801C8BF8
  cmpu(c,0,c->r[0],0x00000002u); // 801C8BFC
  c->r[5]=c->r[6]+c->r[5]; // 801C8C00
  c->r[0]=c->r[4]+c->r[3]; // 801C8C04
  c->r[17]=rotl(c->r[5],0)&0x0000FFFFu; // 801C8C08
  c->r[16]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8C0C
  if (crb(c,0)) { goto L_801C8C28; } // 801C8C10
  c->r[5]=c->r[16]|c->r[16]; // 801C8C14
  c->r[6]=c->r[17]|c->r[17]; // 801C8C18
  c->r[3]=c->r[29]+0x00000001u; // 801C8C1C
  c->r[4]=c->r[23]+0x00000158u; // 801C8C20
  c->lr=0x801C8C28u; f_801ACB50(c); // 801C8C24
L_801C8C28:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8C28
  c->r[4]=c->r[16]|c->r[16]; // 801C8C2C
  c->lr=0x801C8C34u; f_801CAD54(c); // 801C8C30
  cmps(c,0,(int32_t)c->r[3],0); // 801C8C34
  if (crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C8C38
  c->r[0]=R16(c->r[3]+0x00000016u); // 801C8C3C
  cmpu(c,0,c->r[0],c->r[17]); // 801C8C40
  if (!crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C8C44
  c->r[4]=0u+0x00000003u; // 801C8C48
  c->r[5]=0u+0x00000000u; // 801C8C4C
  c->lr=0x801C8C54u; f_801C600C(c); // 801C8C50
  IRQCHK(c); goto L_801C8B04; // 801C8C54
L_801C8C58:;
  c->r[0]=R8(c->r[16]+0x00000005u); // 801C8C58
  c->r[3]=R8(c->r[16]+0x00000004u); // 801C8C5C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8C60
  c->r[0]=c->r[3]+c->r[0]; // 801C8C64
  W16(c->r[1]+0x00000010u,c->r[0]); // 801C8C68
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8C6C
  c->r[0]=R8(c->r[16]+0x00000007u); // 801C8C70
  c->r[4]=R8(c->r[16]+0x00000006u); // 801C8C74
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8C78
  c->r[0]=c->r[4]+c->r[0]; // 801C8C7C
  c->r[17]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8C80
  c->lr=0x801C8C88u; f_801CAE0C(c); // 801C8C84
  cmps(c,0,(int32_t)c->r[3],0); // 801C8C88
  c->r[16]=c->r[3]|c->r[3]; // 801C8C8C
  if (!crb(c,2)) { goto L_801C8CC8; } // 801C8C90
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C8C94
  cmpu(c,0,c->r[0],0x00000002u); // 801C8C98
  if (crb(c,0)) { goto L_801C8CB0; } // 801C8C9C
  c->r[5]=R16(c->r[1]+0x00000010u); // 801C8CA0
  c->r[3]=c->r[29]+0x00000001u; // 801C8CA4
  c->r[4]=c->r[23]+0x00000188u; // 801C8CA8
  c->lr=0x801C8CB0u; f_801ACB38(c); // 801C8CAC
L_801C8CB0:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8CB0
  c->r[4]=c->r[17]|c->r[17]; // 801C8CB4
  c->r[5]=c->r[25]|c->r[25]; // 801C8CB8
  c->r[6]=0u+0x00000002u; // 801C8CBC
  c->lr=0x801C8CC4u; f_801C9CFC(c); // 801C8CC0
  IRQCHK(c); goto L_801C8B04; // 801C8CC4
L_801C8CC8:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8CC8
  c->lr=0x801C8CD0u; f_801CAAA4(c); // 801C8CCC
  cmps(c,0,(int32_t)c->r[3],0); // 801C8CD0
  if (!crb(c,2)) { goto L_801C8D08; } // 801C8CD4
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C8CD8
  cmpu(c,0,c->r[0],0x00000001u); // 801C8CDC
  if (crb(c,0)) { goto L_801C8CF0; } // 801C8CE0
  c->r[4]=c->r[23]+0x000001B4u; // 801C8CE4
  c->r[3]=0u+0x00080000u; // 801C8CE8
  c->lr=0x801C8CF0u; f_801ACB20(c); // 801C8CEC
L_801C8CF0:;
  c->r[3]=c->r[15]|c->r[15]; // 801C8CF0
  c->r[4]=c->r[17]|c->r[17]; // 801C8CF4
  c->r[5]=c->r[25]|c->r[25]; // 801C8CF8
  c->r[6]=0u+0x00000004u; // 801C8CFC
  c->lr=0x801C8D04u; f_801C9CFC(c); // 801C8D00
  IRQCHK(c); goto L_801C8B04; // 801C8D04
L_801C8D08:;
  W8(c->r[3]+0x00000036u,c->r[25]); // 801C8D08
  c->r[5]=c->r[1]+0x00000008u; // 801C8D0C
  c->r[4]=0u+0x0000000Au; // 801C8D10
  W32(c->r[3]+0x00000030u,c->r[16]); // 801C8D14
  W16(c->r[3]+0x00000016u,c->r[17]); // 801C8D18
  c->lr=0x801C8D20u; f_801C600C(c); // 801C8D1C
  IRQCHK(c); goto L_801C8B04; // 801C8D20
L_801C8D24:;
  c->r[0]=R8(c->r[16]+0x00000005u); // 801C8D24
  c->r[3]=c->r[15]|c->r[15]; // 801C8D28
  c->r[4]=R8(c->r[16]+0x00000004u); // 801C8D2C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8D30
  c->r[0]=c->r[4]+c->r[0]; // 801C8D34
  W16(c->r[1]+0x00000016u,c->r[0]); // 801C8D38
  c->r[0]=R8(c->r[16]+0x00000009u); // 801C8D3C
  c->r[4]=R8(c->r[16]+0x00000008u); // 801C8D40
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8D44
  c->r[5]=R8(c->r[16]+0x00000007u); // 801C8D48
  c->r[0]=c->r[4]+c->r[0]; // 801C8D4C
  c->r[6]=R8(c->r[16]+0x00000006u); // 801C8D50
  c->r[4]=rotl(c->r[5],8)&0xFFFFFF00u; // 801C8D54
  W16(c->r[1]+0x00000012u,c->r[0]); // 801C8D58
  c->r[0]=c->r[6]+c->r[4]; // 801C8D5C
  c->r[17]=rotl(c->r[0],0)&0x0000FFFFu; // 801C8D60
  c->r[0]=R8(c->r[16]+0x0000000Bu); // 801C8D64
  c->r[4]=c->r[17]|c->r[17]; // 801C8D68
  c->r[5]=R8(c->r[16]+0x0000000Au); // 801C8D6C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8D70
  c->r[0]=c->r[5]+c->r[0]; // 801C8D74
  W16(c->r[1]+0x00000014u,c->r[0]); // 801C8D78
  c->lr=0x801C8D80u; f_801CAD54(c); // 801C8D7C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8D80
  if (!crb(c,2)) { goto L_801C8DAC; } // 801C8D84
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C8D88
  cmpu(c,0,c->r[0],0x00000002u); // 801C8D8C
  if (crb(c,0)) { IRQCHK(c); goto L_801C8B04; } // 801C8D90
  c->r[6]=R16(c->r[1]+0x00000016u); // 801C8D94
  c->r[5]=c->r[17]|c->r[17]; // 801C8D98
  c->r[3]=c->r[29]+0x00000001u; // 801C8D9C
  c->r[4]=c->r[23]+0x000001D4u; // 801C8DA0
  c->lr=0x801C8DA8u; f_801ACB50(c); // 801C8DA4
  IRQCHK(c); goto L_801C8B04; // 801C8DA8
L_801C8DAC:;
  c->r[5]=R8(c->r[3]+0x00000035u); // 801C8DAC
  cmpu(c,0,c->r[5],c->r[25]); // 801C8DB0
  if (crb(c,2)) { goto L_801C8DD8; } // 801C8DB4
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C8DB8
  cmpu(c,0,c->r[0],0x00000002u); // 801C8DBC
  if (crb(c,0)) { IRQCHK(c); goto L_801C8B04; } // 801C8DC0
  c->r[6]=c->r[25]|c->r[25]; // 801C8DC4
  c->r[3]=c->r[29]+0x00000001u; // 801C8DC8
  c->r[4]=c->r[23]+0x00000204u; // 801C8DCC
  c->lr=0x801C8DD4u; f_801ACB50(c); // 801C8DD0
  IRQCHK(c); goto L_801C8B04; // 801C8DD4
L_801C8DD8:;
  c->r[0]=R16(c->r[1]+0x00000012u); // 801C8DD8
  cmps(c,0,(int32_t)c->r[0],0); // 801C8DDC
  if (!crb(c,2)) { goto L_801C8DF4; } // 801C8DE0
  c->r[5]=c->r[1]+0x00000008u; // 801C8DE4
  c->r[4]=0u+0x0000000Bu; // 801C8DE8
  c->lr=0x801C8DF0u; f_801C600C(c); // 801C8DEC
  IRQCHK(c); goto L_801C8B04; // 801C8DF0
L_801C8DF4:;
  cmpu(c,0,c->r[0],0x00000001u); // 801C8DF4
  if (!crb(c,2)) { goto L_801C8E0C; } // 801C8DF8
  c->r[5]=c->r[1]+0x00000008u; // 801C8DFC
  c->r[4]=0u+0x0000000Cu; // 801C8E00
  c->lr=0x801C8E08u; f_801C600C(c); // 801C8E04
  IRQCHK(c); goto L_801C8B04; // 801C8E08
L_801C8E0C:;
  c->r[5]=c->r[1]+0x00000008u; // 801C8E0C
  c->r[4]=0u+0x0000000Du; // 801C8E10
  c->lr=0x801C8E18u; f_801C600C(c); // 801C8E14
  IRQCHK(c); goto L_801C8B04; // 801C8E18
L_801C8E1C:;
  c->r[0]=R8(c->r[16]+0x00000007u); // 801C8E1C
  c->r[19]=0u+0x00000000u; // 801C8E20
  c->r[4]=R8(c->r[16]+0x00000005u); // 801C8E24
  c->r[18]=0u+0x00000000u; // 801C8E28
  c->r[3]=R8(c->r[16]+0x00000006u); // 801C8E2C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8E30
  c->r[5]=R8(c->r[16]+0x00000004u); // 801C8E34
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801C8E38
  c->r[0]=c->r[3]+c->r[0]; // 801C8E3C
  c->r[16]=c->r[16]+0x00000008u; // 801C8E40
  c->r[3]=c->r[5]+c->r[4]; // 801C8E44
  W16(c->r[1]+0x00000050u,c->r[0]); // 801C8E48
  c->r[20]=c->r[16]|c->r[16]; // 801C8E4C
  W8(c->r[1]+0x0000003Cu,c->r[19]); // 801C8E50
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801C8E54
  W8(c->r[1]+0x0000001Eu,c->r[19]); // 801C8E58
  W8(c->r[1]+0x0000001Au,c->r[19]); // 801C8E5C
  W8(c->r[1]+0x00000038u,c->r[19]); // 801C8E60
  goto L_801C9064; // 801C8E64
L_801C8E68:;
  c->r[5]=R8(c->r[16]+0x00000000u); // 801C8E68
  c->r[3]=R8(c->r[16]+0x00000001u); // 801C8E6C
  c->r[16]=c->r[16]+0x00000002u; // 801C8E70
  c->r[0]=rotl(c->r[5],0)&0x0000007Fu; // 801C8E74
  cmps(c,0,(int32_t)c->r[0],3); // 801C8E78
  if (crb(c,2)) { goto L_801C8EE0; } // 801C8E7C
  if (!crb(c,0)) { goto L_801C8E94; } // 801C8E80
  cmps(c,0,(int32_t)c->r[0],1); // 801C8E84
  if (crb(c,2)) { goto L_801C8EA0; } // 801C8E88
  if (!crb(c,0)) { goto L_801C8EC0; } // 801C8E8C
  goto L_801C9038; // 801C8E90
L_801C8E94:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C8E94
  if (!crb(c,0)) { goto L_801C9038; } // 801C8E98
  goto L_801C8FD8; // 801C8E9C
L_801C8EA0:;
  W8(c->r[1]+0x0000001Au,c->r[28]); // 801C8EA0
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C8EA4
  c->r[3]=R8(c->r[16]+0x00000000u); // 801C8EA8
  c->r[16]=c->r[16]+0x00000002u; // 801C8EAC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8EB0
  c->r[0]=c->r[3]+c->r[0]; // 801C8EB4
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801C8EB8
  goto L_801C9064; // 801C8EBC
L_801C8EC0:;
  W8(c->r[1]+0x00000038u,c->r[28]); // 801C8EC0
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C8EC4
  c->r[3]=R8(c->r[16]+0x00000000u); // 801C8EC8
  c->r[16]=c->r[16]+0x00000002u; // 801C8ECC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8ED0
  c->r[0]=c->r[3]+c->r[0]; // 801C8ED4
  W16(c->r[1]+0x0000003Au,c->r[0]); // 801C8ED8
  goto L_801C9064; // 801C8EDC
L_801C8EE0:;
  W8(c->r[1]+0x0000001Eu,c->r[28]); // 801C8EE0
  c->r[0]=R8(c->r[16]+0x00000000u); // 801C8EE4
  W8(c->r[1]+0x00000020u,c->r[0]); // 801C8EE8
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C8EEC
  W8(c->r[1]+0x00000021u,c->r[0]); // 801C8EF0
  c->r[3]=R8(c->r[16]+0x00000005u); // 801C8EF4
  c->r[5]=R8(c->r[16]+0x00000004u); // 801C8EF8
  c->r[0]=R8(c->r[16]+0x00000003u); // 801C8EFC
  c->r[6]=rotl(c->r[3],24)&0xFF000000u; // 801C8F00
  c->r[3]=R8(c->r[16]+0x00000002u); // 801C8F04
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801C8F08
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8F0C
  c->r[3]=c->r[5]+c->r[3]; // 801C8F10
  c->r[0]=c->r[6]+c->r[0]; // 801C8F14
  c->r[0]=c->r[3]+c->r[0]; // 801C8F18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8F1C
  c->r[3]=R8(c->r[16]+0x00000009u); // 801C8F20
  c->r[5]=R8(c->r[16]+0x00000008u); // 801C8F24
  c->r[0]=R8(c->r[16]+0x00000007u); // 801C8F28
  c->r[6]=rotl(c->r[3],24)&0xFF000000u; // 801C8F2C
  c->r[3]=R8(c->r[16]+0x00000006u); // 801C8F30
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801C8F34
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8F38
  c->r[3]=c->r[5]+c->r[3]; // 801C8F3C
  c->r[0]=c->r[6]+c->r[0]; // 801C8F40
  c->r[0]=c->r[3]+c->r[0]; // 801C8F44
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C8F48
  c->r[3]=R8(c->r[16]+0x0000000Du); // 801C8F4C
  c->r[5]=R8(c->r[16]+0x0000000Cu); // 801C8F50
  c->r[0]=R8(c->r[16]+0x0000000Bu); // 801C8F54
  c->r[6]=rotl(c->r[3],24)&0xFF000000u; // 801C8F58
  c->r[3]=R8(c->r[16]+0x0000000Au); // 801C8F5C
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801C8F60
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8F64
  c->r[3]=c->r[5]+c->r[3]; // 801C8F68
  c->r[0]=c->r[6]+c->r[0]; // 801C8F6C
  c->r[0]=c->r[3]+c->r[0]; // 801C8F70
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C8F74
  c->r[3]=R8(c->r[16]+0x00000011u); // 801C8F78
  c->r[5]=R8(c->r[16]+0x00000010u); // 801C8F7C
  c->r[0]=R8(c->r[16]+0x0000000Fu); // 801C8F80
  c->r[6]=rotl(c->r[3],24)&0xFF000000u; // 801C8F84
  c->r[3]=R8(c->r[16]+0x0000000Eu); // 801C8F88
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801C8F8C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8F90
  c->r[3]=c->r[5]+c->r[3]; // 801C8F94
  c->r[0]=c->r[6]+c->r[0]; // 801C8F98
  c->r[0]=c->r[3]+c->r[0]; // 801C8F9C
  W32(c->r[1]+0x00000030u,c->r[0]); // 801C8FA0
  c->r[3]=R8(c->r[16]+0x00000015u); // 801C8FA4
  c->r[5]=R8(c->r[16]+0x00000014u); // 801C8FA8
  c->r[0]=R8(c->r[16]+0x00000013u); // 801C8FAC
  c->r[6]=rotl(c->r[3],24)&0xFF000000u; // 801C8FB0
  c->r[3]=R8(c->r[16]+0x00000012u); // 801C8FB4
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801C8FB8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8FBC
  c->r[16]=c->r[16]+0x00000016u; // 801C8FC0
  c->r[3]=c->r[5]+c->r[3]; // 801C8FC4
  c->r[0]=c->r[6]+c->r[0]; // 801C8FC8
  c->r[0]=c->r[3]+c->r[0]; // 801C8FCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8FD0
  goto L_801C9064; // 801C8FD4
L_801C8FD8:;
  W8(c->r[1]+0x0000003Cu,c->r[28]); // 801C8FD8
  c->r[0]=R8(c->r[16]+0x00000000u); // 801C8FDC
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 801C8FE0
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C8FE4
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 801C8FE8
  c->r[0]=R8(c->r[16]+0x00000002u); // 801C8FEC
  W8(c->r[1]+0x00000040u,c->r[0]); // 801C8FF0
  c->r[0]=R8(c->r[16]+0x00000004u); // 801C8FF4
  c->r[3]=R8(c->r[16]+0x00000003u); // 801C8FF8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C8FFC
  c->r[0]=c->r[3]+c->r[0]; // 801C9000
  W16(c->r[1]+0x00000042u,c->r[0]); // 801C9004
  c->r[0]=R8(c->r[16]+0x00000006u); // 801C9008
  c->r[3]=R8(c->r[16]+0x00000005u); // 801C900C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9010
  c->r[0]=c->r[3]+c->r[0]; // 801C9014
  W16(c->r[1]+0x00000044u,c->r[0]); // 801C9018
  c->r[0]=R8(c->r[16]+0x00000008u); // 801C901C
  c->r[3]=R8(c->r[16]+0x00000007u); // 801C9020
  c->r[16]=c->r[16]+0x00000009u; // 801C9024
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9028
  c->r[0]=c->r[3]+c->r[0]; // 801C902C
  W16(c->r[1]+0x00000046u,c->r[0]); // 801C9030
  goto L_801C9064; // 801C9034
L_801C9038:;
  c->r[6]=c->r[3]+0x00000002u; // 801C9038
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[17]); // 801C903C
  if (crb(c,1)) { goto L_801C9060; } // 801C9040
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801C9044
  c->r[16]=c->r[16]+c->r[3]; // 801C9048
  if (!crb(c,2)) { goto L_801C9064; } // 801C904C
  c->r[0]=c->r[18]+c->r[6]; // 801C9050
  c->r[19]=0u+0x00000001u; // 801C9054
  c->r[18]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9058
  goto L_801C9064; // 801C905C
L_801C9060:;
  c->r[16]=c->r[21]|c->r[21]; // 801C9060
L_801C9064:;
  cmpu(c,0,c->r[16],c->r[21]); // 801C9064
  if (crb(c,0)) { IRQCHK(c); goto L_801C8E68; } // 801C9068
  c->r[3]=c->r[15]|c->r[15]; // 801C906C
  c->lr=0x801C9074u; f_801CAD54(c); // 801C9070
  cmps(c,0,(int32_t)c->r[3],0); // 801C9074
  if (crb(c,2)) { goto L_801C90B0; } // 801C9078
  cmps(c,0,(int32_t)c->r[19],0); // 801C907C
  W8(c->r[3]+0x00000036u,c->r[25]); // 801C9080
  if (crb(c,2)) { goto L_801C90A0; } // 801C9084
  c->r[0]=c->r[17]+0xFFFFFFFCu; // 801C9088
  c->r[4]=c->r[20]|c->r[20]; // 801C908C
  c->r[6]=c->r[18]|c->r[18]; // 801C9090
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9094
  c->lr=0x801C909Cu; f_801CA3AC(c); // 801C9098
  IRQCHK(c); goto L_801C8B04; // 801C909C
L_801C90A0:;
  c->r[5]=c->r[1]+0x00000018u; // 801C90A0
  c->r[4]=0u+0x0000000Eu; // 801C90A4
  c->lr=0x801C90ACu; f_801C600C(c); // 801C90A8
  IRQCHK(c); goto L_801C8B04; // 801C90AC
L_801C90B0:;
  c->r[3]=c->r[15]|c->r[15]; // 801C90B0
  c->r[5]=c->r[25]|c->r[25]; // 801C90B4
  c->r[4]=0u+0x00000002u; // 801C90B8
  c->r[6]=0u+0x00000000u; // 801C90BC
  c->r[7]=0u+0x00000000u; // 801C90C0
  c->lr=0x801C90C8u; f_801C9A64(c); // 801C90C4
  IRQCHK(c); goto L_801C8B04; // 801C90C8
L_801C90CC:;
  c->r[0]=R8(c->r[16]+0x00000007u); // 801C90CC
  c->r[3]=R8(c->r[16]+0x00000006u); // 801C90D0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C90D4
  c->r[4]=R8(c->r[16]+0x00000005u); // 801C90D8
  c->r[0]=c->r[3]+c->r[0]; // 801C90DC
  c->r[5]=R8(c->r[16]+0x00000004u); // 801C90E0
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 801C90E4
  W16(c->r[1]+0x00000050u,c->r[0]); // 801C90E8
  c->r[0]=c->r[5]+c->r[3]; // 801C90EC
  c->r[17]=rotl(c->r[0],0)&0x0000FFFFu; // 801C90F0
  c->r[0]=R8(c->r[16]+0x00000009u); // 801C90F4
  c->r[3]=R8(c->r[16]+0x00000008u); // 801C90F8
  c->r[16]=c->r[16]+0x0000000Au; // 801C90FC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9100
  c->r[0]=c->r[3]+c->r[0]; // 801C9104
  W8(c->r[1]+0x0000001Eu,c->r[31]); // 801C9108
  W16(c->r[1]+0x00000018u,c->r[0]); // 801C910C
  W8(c->r[1]+0x0000001Au,c->r[31]); // 801C9110
  W8(c->r[1]+0x00000038u,c->r[31]); // 801C9114
  W8(c->r[1]+0x0000003Cu,c->r[31]); // 801C9118
  goto L_801C92E8; // 801C911C
L_801C9120:;
  c->r[0]=R8(c->r[16]+0x00000000u); // 801C9120
  c->r[16]=c->r[16]+0x00000002u; // 801C9124
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 801C9128
  cmps(c,0,(int32_t)c->r[0],3); // 801C912C
  if (crb(c,2)) { goto L_801C9194; } // 801C9130
  if (!crb(c,0)) { goto L_801C9148; } // 801C9134
  cmps(c,0,(int32_t)c->r[0],1); // 801C9138
  if (crb(c,2)) { goto L_801C9154; } // 801C913C
  if (!crb(c,0)) { goto L_801C9174; } // 801C9140
  goto L_801C92E8; // 801C9144
L_801C9148:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C9148
  if (!crb(c,0)) { goto L_801C92E8; } // 801C914C
  goto L_801C928C; // 801C9150
L_801C9154:;
  W8(c->r[1]+0x0000001Au,c->r[28]); // 801C9154
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C9158
  c->r[3]=R8(c->r[16]+0x00000000u); // 801C915C
  c->r[16]=c->r[16]+0x00000002u; // 801C9160
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9164
  c->r[0]=c->r[3]+c->r[0]; // 801C9168
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801C916C
  goto L_801C92E8; // 801C9170
L_801C9174:;
  W8(c->r[1]+0x00000038u,c->r[28]); // 801C9174
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C9178
  c->r[3]=R8(c->r[16]+0x00000000u); // 801C917C
  c->r[16]=c->r[16]+0x00000002u; // 801C9180
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9184
  c->r[0]=c->r[3]+c->r[0]; // 801C9188
  W16(c->r[1]+0x0000003Au,c->r[0]); // 801C918C
  goto L_801C92E8; // 801C9190
L_801C9194:;
  W8(c->r[1]+0x0000001Eu,c->r[28]); // 801C9194
  c->r[0]=R8(c->r[16]+0x00000000u); // 801C9198
  W8(c->r[1]+0x00000020u,c->r[0]); // 801C919C
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C91A0
  W8(c->r[1]+0x00000021u,c->r[0]); // 801C91A4
  c->r[3]=R8(c->r[16]+0x00000005u); // 801C91A8
  c->r[4]=R8(c->r[16]+0x00000004u); // 801C91AC
  c->r[0]=R8(c->r[16]+0x00000003u); // 801C91B0
  c->r[5]=rotl(c->r[3],24)&0xFF000000u; // 801C91B4
  c->r[3]=R8(c->r[16]+0x00000002u); // 801C91B8
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801C91BC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C91C0
  c->r[3]=c->r[4]+c->r[3]; // 801C91C4
  c->r[0]=c->r[5]+c->r[0]; // 801C91C8
  c->r[0]=c->r[3]+c->r[0]; // 801C91CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C91D0
  c->r[3]=R8(c->r[16]+0x00000009u); // 801C91D4
  c->r[4]=R8(c->r[16]+0x00000008u); // 801C91D8
  c->r[0]=R8(c->r[16]+0x00000007u); // 801C91DC
  c->r[5]=rotl(c->r[3],24)&0xFF000000u; // 801C91E0
  c->r[3]=R8(c->r[16]+0x00000006u); // 801C91E4
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801C91E8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C91EC
  c->r[3]=c->r[4]+c->r[3]; // 801C91F0
  c->r[0]=c->r[5]+c->r[0]; // 801C91F4
  c->r[0]=c->r[3]+c->r[0]; // 801C91F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C91FC
  c->r[3]=R8(c->r[16]+0x0000000Du); // 801C9200
  c->r[4]=R8(c->r[16]+0x0000000Cu); // 801C9204
  c->r[0]=R8(c->r[16]+0x0000000Bu); // 801C9208
  c->r[5]=rotl(c->r[3],24)&0xFF000000u; // 801C920C
  c->r[3]=R8(c->r[16]+0x0000000Au); // 801C9210
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801C9214
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9218
  c->r[3]=c->r[4]+c->r[3]; // 801C921C
  c->r[0]=c->r[5]+c->r[0]; // 801C9220
  c->r[0]=c->r[3]+c->r[0]; // 801C9224
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C9228
  c->r[3]=R8(c->r[16]+0x00000011u); // 801C922C
  c->r[4]=R8(c->r[16]+0x00000010u); // 801C9230
  c->r[0]=R8(c->r[16]+0x0000000Fu); // 801C9234
  c->r[5]=rotl(c->r[3],24)&0xFF000000u; // 801C9238
  c->r[3]=R8(c->r[16]+0x0000000Eu); // 801C923C
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801C9240
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9244
  c->r[3]=c->r[4]+c->r[3]; // 801C9248
  c->r[0]=c->r[5]+c->r[0]; // 801C924C
  c->r[0]=c->r[3]+c->r[0]; // 801C9250
  W32(c->r[1]+0x00000030u,c->r[0]); // 801C9254
  c->r[3]=R8(c->r[16]+0x00000015u); // 801C9258
  c->r[4]=R8(c->r[16]+0x00000014u); // 801C925C
  c->r[0]=R8(c->r[16]+0x00000013u); // 801C9260
  c->r[5]=rotl(c->r[3],24)&0xFF000000u; // 801C9264
  c->r[3]=R8(c->r[16]+0x00000012u); // 801C9268
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801C926C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9270
  c->r[16]=c->r[16]+0x00000016u; // 801C9274
  c->r[3]=c->r[4]+c->r[3]; // 801C9278
  c->r[0]=c->r[5]+c->r[0]; // 801C927C
  c->r[0]=c->r[3]+c->r[0]; // 801C9280
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C9284
  goto L_801C92E8; // 801C9288
L_801C928C:;
  W8(c->r[1]+0x0000003Cu,c->r[28]); // 801C928C
  c->r[0]=R8(c->r[16]+0x00000000u); // 801C9290
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 801C9294
  c->r[0]=R8(c->r[16]+0x00000001u); // 801C9298
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 801C929C
  c->r[0]=R8(c->r[16]+0x00000002u); // 801C92A0
  W8(c->r[1]+0x00000040u,c->r[0]); // 801C92A4
  c->r[0]=R8(c->r[16]+0x00000004u); // 801C92A8
  c->r[3]=R8(c->r[16]+0x00000003u); // 801C92AC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C92B0
  c->r[0]=c->r[3]+c->r[0]; // 801C92B4
  W16(c->r[1]+0x00000042u,c->r[0]); // 801C92B8
  c->r[0]=R8(c->r[16]+0x00000006u); // 801C92BC
  c->r[3]=R8(c->r[16]+0x00000005u); // 801C92C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C92C4
  c->r[0]=c->r[3]+c->r[0]; // 801C92C8
  W16(c->r[1]+0x00000044u,c->r[0]); // 801C92CC
  c->r[0]=R8(c->r[16]+0x00000008u); // 801C92D0
  c->r[3]=R8(c->r[16]+0x00000007u); // 801C92D4
  c->r[16]=c->r[16]+0x00000009u; // 801C92D8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C92DC
  c->r[0]=c->r[3]+c->r[0]; // 801C92E0
  W16(c->r[1]+0x00000046u,c->r[0]); // 801C92E4
L_801C92E8:;
  cmpu(c,0,c->r[16],c->r[21]); // 801C92E8
  if (crb(c,0)) { IRQCHK(c); goto L_801C9120; } // 801C92EC
  c->r[3]=c->r[15]|c->r[15]; // 801C92F0
  c->r[4]=c->r[17]|c->r[17]; // 801C92F4
  c->lr=0x801C92FCu; f_801CAD54(c); // 801C92F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C92FC
  if (crb(c,2)) { goto L_801C935C; } // 801C9300
  c->r[5]=R8(c->r[3]+0x00000035u); // 801C9304
  cmpu(c,0,c->r[5],c->r[25]); // 801C9308
  if (crb(c,2)) { goto L_801C9330; } // 801C930C
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C9310
  cmpu(c,0,c->r[0],0x00000002u); // 801C9314
  if (crb(c,0)) { IRQCHK(c); goto L_801C8B04; } // 801C9318
  c->r[6]=c->r[25]|c->r[25]; // 801C931C
  c->r[3]=c->r[29]+0x00000001u; // 801C9320
  c->r[4]=c->r[23]+0x00000230u; // 801C9324
  c->lr=0x801C932Cu; f_801ACB50(c); // 801C9328
  IRQCHK(c); goto L_801C8B04; // 801C932C
L_801C9330:;
  c->r[0]=R16(c->r[1]+0x00000018u); // 801C9330
  cmps(c,0,(int32_t)c->r[0],0); // 801C9334
  if (!crb(c,2)) { goto L_801C934C; } // 801C9338
  c->r[5]=c->r[1]+0x00000018u; // 801C933C
  c->r[4]=0u+0x0000000Fu; // 801C9340
  c->lr=0x801C9348u; f_801C600C(c); // 801C9344
  IRQCHK(c); goto L_801C8B04; // 801C9348
L_801C934C:;
  c->r[5]=c->r[1]+0x00000018u; // 801C934C
  c->r[4]=0u+0x00000010u; // 801C9350
  c->lr=0x801C9358u; f_801C600C(c); // 801C9354
  IRQCHK(c); goto L_801C8B04; // 801C9358
L_801C935C:;
  c->r[0]=R8(c->r[27]+0xFFFFB1E0u); // 801C935C
  cmpu(c,0,c->r[0],0x00000002u); // 801C9360
  if (crb(c,0)) { IRQCHK(c); goto L_801C8B04; } // 801C9364
  c->r[5]=c->r[17]|c->r[17]; // 801C9368
  c->r[3]=c->r[29]+0x00000001u; // 801C936C
  c->r[4]=c->r[23]+0x0000025Cu; // 801C9370
  c->lr=0x801C9378u; f_801ACB38(c); // 801C9374
  IRQCHK(c); goto L_801C8B04; // 801C9378
L_801C937C:;
  c->r[4]=R8(c->r[16]+0x00000005u); // 801C937C
  c->r[3]=c->r[15]|c->r[15]; // 801C9380
  c->r[0]=R8(c->r[16]+0x00000007u); // 801C9384
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801C9388
  c->r[6]=R8(c->r[16]+0x00000004u); // 801C938C
  c->r[4]=R8(c->r[16]+0x00000006u); // 801C9390
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9394
  c->r[5]=c->r[6]+c->r[5]; // 801C9398
  c->r[0]=c->r[4]+c->r[0]; // 801C939C
  c->r[16]=rotl(c->r[5],0)&0x0000FFFFu; // 801C93A0
  c->r[4]=c->r[16]|c->r[16]; // 801C93A4
  c->r[17]=rotl(c->r[0],0)&0x0000FFFFu; // 801C93A8
  c->lr=0x801C93B0u; f_801CAD54(c); // 801C93AC
  cmps(c,0,(int32_t)c->r[3],0); // 801C93B0
  if (crb(c,2)) { goto L_801C93D8; } // 801C93B4
  c->r[0]=R16(c->r[3]+0x00000016u); // 801C93B8
  cmpu(c,0,c->r[0],c->r[17]); // 801C93BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C93C0
  W8(c->r[3]+0x00000036u,c->r[25]); // 801C93C4
  c->r[5]=c->r[1]+0x00000008u; // 801C93C8
  c->r[4]=0u+0x00000011u; // 801C93CC
  c->lr=0x801C93D4u; f_801C600C(c); // 801C93D0
  IRQCHK(c); goto L_801C8B04; // 801C93D4
L_801C93D8:;
  c->r[3]=c->r[15]|c->r[15]; // 801C93D8
  c->r[4]=c->r[25]|c->r[25]; // 801C93DC
  c->r[5]=c->r[16]|c->r[16]; // 801C93E0
  c->r[6]=c->r[17]|c->r[17]; // 801C93E4
  c->lr=0x801C93ECu; f_801CA634(c); // 801C93E8
  IRQCHK(c); goto L_801C8B04; // 801C93EC
L_801C93F0:;
  c->r[4]=R8(c->r[16]+0x00000005u); // 801C93F0
  c->r[3]=c->r[15]|c->r[15]; // 801C93F4
  c->r[0]=R8(c->r[16]+0x00000007u); // 801C93F8
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801C93FC
  c->r[6]=R8(c->r[16]+0x00000004u); // 801C9400
  c->r[4]=R8(c->r[16]+0x00000006u); // 801C9404
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C9408
  c->r[5]=c->r[6]+c->r[5]; // 801C940C
  c->r[0]=c->r[4]+c->r[0]; // 801C9410
  c->r[16]=rotl(c->r[5],0)&0x0000FFFFu; // 801C9414
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9418
  c->lr=0x801C9420u; f_801CAD54(c); // 801C941C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9420
  if (crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C9424
  c->r[0]=R16(c->r[3]+0x00000016u); // 801C9428
  cmpu(c,0,c->r[0],c->r[16]); // 801C942C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C9430
  c->r[0]=R8(c->r[3]+0x00000035u); // 801C9434
  cmpu(c,0,c->r[0],c->r[25]); // 801C9438
  if (!crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C943C
  c->r[5]=c->r[1]+0x00000008u; // 801C9440
  c->r[4]=0u+0x00000012u; // 801C9444
  c->lr=0x801C944Cu; f_801C600C(c); // 801C9448
  IRQCHK(c); goto L_801C8B04; // 801C944C
L_801C9450:;
  c->r[3]=R16(c->r[30]+0x0000007Eu); // 801C9450
  c->r[0]=c->r[3]+0xFFFFFFF4u; // 801C9454
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 801C9458
  if (!crb(c,0)) { goto L_801C9478; } // 801C945C
  c->r[3]=c->r[15]|c->r[15]; // 801C9460
  c->r[4]=c->r[25]|c->r[25]; // 801C9464
  c->r[6]=c->r[17]|c->r[17]; // 801C9468
  c->r[5]=c->r[16]+0x00000004u; // 801C946C
  c->lr=0x801C9474u; f_801CA864(c); // 801C9470
  IRQCHK(c); goto L_801C8B04; // 801C9474
L_801C9478:;
  c->r[3]=c->r[15]|c->r[15]; // 801C9478
  c->r[4]=c->r[25]|c->r[25]; // 801C947C
  c->r[5]=0u+0x00000000u; // 801C9480
  c->r[6]=0u+0x00000000u; // 801C9484
  c->lr=0x801C948Cu; f_801CA864(c); // 801C9488
  IRQCHK(c); goto L_801C8B04; // 801C948C
L_801C9490:;
  c->r[12]=R32(c->r[15]+0x00000054u); // 801C9490
  cmps(c,0,(int32_t)c->r[12],0); // 801C9494
  if (crb(c,2)) { IRQCHK(c); goto L_801C8B04; } // 801C9498
  W32(c->r[15]+0x00000054u,c->r[31]); // 801C949C
  c->r[3]=0u+0x00000000u; // 801C94A0
  c->ctr=c->r[12]; // 801C94A4
  if (true) { c->lr=0x801C94ACu; dispatch(c,c->ctr); } // 801C94A8
  IRQCHK(c); goto L_801C8B04; // 801C94AC
L_801C94B0:;
  c->r[0]=R8(c->r[16]+0x00000005u); // 801C94B0
  c->r[3]=c->r[15]|c->r[15]; // 801C94B4
  c->r[5]=R8(c->r[16]+0x00000004u); // 801C94B8
  c->r[4]=c->r[25]|c->r[25]; // 801C94BC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801C94C0
  c->r[0]=c->r[5]+c->r[0]; // 801C94C4
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801C94C8
  c->lr=0x801C94D0u; f_801CAA00(c); // 801C94CC
  IRQCHK(c); goto L_801C8B04; // 801C94D0
L_801C94D4:;
  c->r[3]=0u+0x803D0000u; // 801C94D4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C94D8
  cmpu(c,0,c->r[0],0x00000002u); // 801C94DC
  if (crb(c,0)) { goto L_801C94F8; } // 801C94E0
  c->r[3]=0u+0x00080000u; // 801C94E4
  c->r[5]=c->r[7]|c->r[7]; // 801C94E8
  c->r[3]=c->r[3]+0x00000001u; // 801C94EC
  c->r[4]=c->r[23]+0x00000288u; // 801C94F0
  c->lr=0x801C94F8u; f_801ACB38(c); // 801C94F4
L_801C94F8:;
  c->r[3]=c->r[15]|c->r[15]; // 801C94F8
  c->r[5]=c->r[25]|c->r[25]; // 801C94FC
  c->r[4]=0u+0x00000000u; // 801C9500
  c->r[6]=0u+0x00000000u; // 801C9504
  c->r[7]=0u+0x00000000u; // 801C9508
  c->lr=0x801C9510u; f_801C9A64(c); // 801C950C
L_801C9510:;
  c->r[11]=c->r[1]+0x000000A0u; // 801C9510
  c->lr=0x801C9518u; f_80185EEC(c); // 801C9514
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C9518
  c->lr=c->r[0]; // 801C951C
  c->r[1]=c->r[1]+0x000000A0u; // 801C9520
  return; // 801C9524
}

// l2c_process_timeout
void f_801C9528(Ctx* __restrict c) {
  trace_call(0x801C9528u);
  c->r[0]=R16(c->r[3]+0x00000014u); // 801C9528
  cmps(c,0,(int32_t)c->r[0],4); // 801C952C
  if (crb(c,2)) { goto L_801C956C; } // 801C9530
  if (!crb(c,0)) { goto L_801C9548; } // 801C9534
  cmps(c,0,(int32_t)c->r[0],2); // 801C9538
  if (crb(c,2)) { goto L_801C9554; } // 801C953C
  if (!crb(c,0)) { goto L_801C955C; } // 801C9540
  return; // 801C9544
L_801C9548:;
  cmps(c,0,(int32_t)c->r[0],73); // 801C9548
  if (crb(c,2)) return; // 801C954C
  return; // 801C9550
L_801C9554:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C9554
  f_801C7A54(c); return; // 801C9558
L_801C955C:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C955C
  c->r[4]=0u+0x0000001Eu; // 801C9560
  c->r[5]=0u+0x00000000u; // 801C9564
  f_801C600C(c); return; // 801C9568
L_801C956C:;
  c->r[3]=0u+0x00000001u; // 801C956C
  f_801C9578(c); return; // 801C9570
  return; // 801C9574
}

// l2c_process_held_packets
void f_801C9578(Ctx* __restrict c) {
  trace_call(0x801C9578u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9578
  c->r[0]=c->lr; // 801C957C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9580
  c->r[11]=c->r[1]+0x00000020u; // 801C9584
  c->lr=0x801C958Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C9588
  c->r[31]=0u+0x803D0000u; // 801C958C
  c->r[27]=c->r[3]|c->r[3]; // 801C9590
  c->r[4]=c->r[31]+0xFFFFB1E0u; // 801C9594
  c->r[0]=R16(c->r[4]+0x000007C8u); // 801C9598
  c->r[28]=c->r[4]+0x000007C0u; // 801C959C
  cmps(c,0,(int32_t)c->r[0],0); // 801C95A0
  if (crb(c,2)) { goto L_801C968C; } // 801C95A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C95A8
  if (!crb(c,2)) { goto L_801C95DC; } // 801C95AC
  c->r[3]=c->r[4]+0x000007CCu; // 801C95B0
  c->lr=0x801C95B8u; f_801AD15C(c); // 801C95B4
  c->r[0]=R8(c->r[31]+0xFFFFB1E0u); // 801C95B8
  cmpu(c,0,c->r[0],0x00000002u); // 801C95BC
  if (crb(c,0)) { goto L_801C95FC; } // 801C95C0
  c->r[3]=0u+0x00080000u; // 801C95C4
  c->r[4]=0u+0x80330000u; // 801C95C8
  c->r[3]=c->r[3]+0x00000001u; // 801C95CC
  c->r[4]=c->r[4]+0x000057F4u; // 801C95D0
  c->lr=0x801C95D8u; f_801ACB20(c); // 801C95D4
  goto L_801C95FC; // 801C95D8
L_801C95DC:;
  c->r[0]=R8(c->r[31]+0xFFFFB1E0u); // 801C95DC
  cmpu(c,0,c->r[0],0x00000002u); // 801C95E0
  if (crb(c,0)) { goto L_801C95FC; } // 801C95E4
  c->r[3]=0u+0x00080000u; // 801C95E8
  c->r[4]=0u+0x80330000u; // 801C95EC
  c->r[3]=c->r[3]+0x00000001u; // 801C95F0
  c->r[4]=c->r[4]+0x00005808u; // 801C95F4
  c->lr=0x801C95FCu; f_801ACB20(c); // 801C95F8
L_801C95FC:;
  c->r[3]=c->r[28]|c->r[28]; // 801C95FC
  c->lr=0x801C9604u; f_801AAA28(c); // 801C9600
  c->r[4]=0u+0x00010000u; // 801C9604
  c->r[30]=c->r[3]|c->r[3]; // 801C9608
  c->r[31]=c->r[4]+0xFFFFFFFFu; // 801C960C
  goto L_801C9660; // 801C9610
L_801C9614:;
  c->r[3]=c->r[30]|c->r[30]; // 801C9614
  c->lr=0x801C961Cu; f_801AAA30(c); // 801C9618
  cmps(c,0,(int32_t)c->r[27],0); // 801C961C
  c->r[29]=c->r[3]|c->r[3]; // 801C9620
  if (crb(c,2)) { goto L_801C9644; } // 801C9624
  c->r[3]=R16(c->r[30]+0x00000006u); // 801C9628
  cmps(c,0,(int32_t)c->r[3],0); // 801C962C
  if (crb(c,2)) { goto L_801C9644; } // 801C9630
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801C9634
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801C9638
  W16(c->r[30]+0x00000006u,c->r[3]); // 801C963C
  if (!crb(c,2)) { goto L_801C965C; } // 801C9640
L_801C9644:;
  c->r[3]=c->r[28]|c->r[28]; // 801C9644
  c->r[4]=c->r[30]|c->r[30]; // 801C9648
  c->lr=0x801C9650u; f_801AA964(c); // 801C964C
  W16(c->r[30]+0x00000006u,c->r[31]); // 801C9650
  c->r[3]=c->r[30]|c->r[30]; // 801C9654
  c->lr=0x801C965Cu; f_801C8788(c); // 801C9658
L_801C965C:;
  c->r[30]=c->r[29]|c->r[29]; // 801C965C
L_801C9660:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C9660
  if (!crb(c,2)) { IRQCHK(c); goto L_801C9614; } // 801C9664
  c->r[0]=R16(c->r[28]+0x00000008u); // 801C9668
  cmps(c,0,(int32_t)c->r[0],0); // 801C966C
  if (crb(c,2)) { goto L_801C968C; } // 801C9670
  c->r[3]=0u+0x803D0000u; // 801C9674
  c->r[4]=0u+0x00000004u; // 801C9678
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C967C
  c->r[5]=0u+0x00000001u; // 801C9680
  c->r[3]=c->r[3]+0x000007CCu; // 801C9684
  c->lr=0x801C968Cu; f_801AD0EC(c); // 801C9688
L_801C968C:;
  c->r[11]=c->r[1]+0x00000020u; // 801C968C
  c->lr=0x801C9694u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9690
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9694
  c->lr=c->r[0]; // 801C9698
  c->r[1]=c->r[1]+0x00000020u; // 801C969C
  return; // 801C96A0
}

// l2cu_allocate_lcb
void f_801C96A4(Ctx* __restrict c) {
  trace_call(0x801C96A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C96A4
  c->r[0]=c->lr; // 801C96A8
  c->r[4]=0u+0x803D0000u; // 801C96AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C96B0
  c->r[0]=0u+0x00000004u; // 801C96B4
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801C96B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C96BC
  c->r[31]=c->r[4]+0x00000008u; // 801C96C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C96C4
  c->r[30]=c->r[3]|c->r[3]; // 801C96C8
  c->ctr=c->r[0]; // 801C96CC
L_801C96D0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C96D0
  cmps(c,0,(int32_t)c->r[0],0); // 801C96D4
  if (!crb(c,2)) { goto L_801C9754; } // 801C96D8
  c->r[3]=c->r[31]|c->r[31]; // 801C96DC
  c->r[4]=0u+0x00000000u; // 801C96E0
  c->r[5]=0u+0x0000005Cu; // 801C96E4
  c->lr=0x801C96ECu; f_80004688(c); // 801C96E8
  c->r[0]=0u+0x00000001u; // 801C96EC
  c->r[4]=c->r[30]|c->r[30]; // 801C96F0
  W8(c->r[31]+0x00000000u,c->r[0]); // 801C96F4
  c->r[3]=c->r[31]+0x0000002Au; // 801C96F8
  c->r[5]=0u+0x00000006u; // 801C96FC
  c->lr=0x801C9704u; f_80004338(c); // 801C9700
  c->r[5]=0u+0x00000000u; // 801C9704
  c->r[3]=0u+0x00010000u; // 801C9708
  W32(c->r[31]+0x00000004u,c->r[5]); // 801C970C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C9710
  c->r[4]=0u+0x803D0000u; // 801C9714
  W16(c->r[31]+0x00000028u,c->r[0]); // 801C9718
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801C971C
  W32(c->r[31]+0x00000050u,c->r[5]); // 801C9720
  W16(c->r[31]+0x00000032u,c->r[0]); // 801C9724
  W32(c->r[31]+0x00000020u,c->r[31]); // 801C9728
  W16(c->r[31]+0x00000038u,c->r[5]); // 801C972C
  c->r[0]=R16(c->r[4]+0x000007BAu); // 801C9730
  W16(c->r[31]+0x00000058u,c->r[0]); // 801C9734
  W8(c->r[31]+0x00000031u,c->r[5]); // 801C9738
  c->r[3]=R16(c->r[4]+0x000007B8u); // 801C973C
  c->r[0]=c->r[3]+0x00000001u; // 801C9740
  W16(c->r[4]+0x000007B8u,c->r[0]); // 801C9744
  c->lr=0x801C974Cu; f_801C7F9C(c); // 801C9748
  c->r[3]=c->r[31]|c->r[31]; // 801C974C
  goto L_801C9760; // 801C9750
L_801C9754:;
  c->r[31]=c->r[31]+0x0000005Cu; // 801C9754
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C96D0; } // 801C9758
  c->r[3]=0u+0x00000000u; // 801C975C
L_801C9760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9764
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9768
  c->lr=c->r[0]; // 801C976C
  c->r[1]=c->r[1]+0x00000010u; // 801C9770
  return; // 801C9774
}

// l2cu_release_lcb
void f_801C9778(Ctx* __restrict c) {
  trace_call(0x801C9778u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9778
  c->r[0]=c->lr; // 801C977C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9784
  c->r[31]=0u+0x00000000u; // 801C9788
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C978C
  c->r[30]=c->r[3]|c->r[3]; // 801C9790
  W8(c->r[3]+0x00000000u,c->r[31]); // 801C9794
  c->r[3]=c->r[3]+0x00000010u; // 801C9798
  c->lr=0x801C97A0u; f_801AD15C(c); // 801C979C
  c->r[3]=R32(c->r[30]+0x00000050u); // 801C97A0
  cmps(c,0,(int32_t)c->r[3],0); // 801C97A4
  if (crb(c,2)) { goto L_801C97B4; } // 801C97A8
  c->lr=0x801C97B0u; f_801AA228(c); // 801C97AC
  W32(c->r[30]+0x00000050u,c->r[31]); // 801C97B0
L_801C97B4:;
  c->r[3]=c->r[30]+0x0000002Au; // 801C97B4
  c->lr=0x801C97BCu; f_801B9E74(c); // 801C97B8
  c->r[3]=R32(c->r[30]+0x00000008u); // 801C97BC
  goto L_801C97CC; // 801C97C0
L_801C97C4:;
  c->lr=0x801C97C8u; f_801CABB0(c); // 801C97C4
  c->r[3]=R32(c->r[30]+0x00000008u); // 801C97C8
L_801C97CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C97CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C97C4; } // 801C97D0
  c->r[3]=R32(c->r[30]+0x00000004u); // 801C97D4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801C97D8
  cmpu(c,0,c->r[0],0x00000001u); // 801C97DC
  if (crb(c,1)) { goto L_801C97FC; } // 801C97E0
  c->r[3]=c->r[30]+0x0000002Au; // 801C97E4
  c->lr=0x801C97ECu; f_801B33F0(c); // 801C97E8
  goto L_801C97FC; // 801C97EC
L_801C97F0:;
  c->r[3]=c->r[30]+0x00000044u; // 801C97F0
  c->lr=0x801C97F8u; f_801AA8C4(c); // 801C97F4
  c->lr=0x801C97FCu; f_801AA228(c); // 801C97F8
L_801C97FC:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 801C97FC
  cmps(c,0,(int32_t)c->r[0],0); // 801C9800
  if (!crb(c,2)) { IRQCHK(c); goto L_801C97F0; } // 801C9804
  c->r[4]=0u+0x803D0000u; // 801C9808
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801C980C
  c->r[3]=R16(c->r[4]+0x000007B8u); // 801C9810
  cmpu(c,0,c->r[3],0x00000001u); // 801C9814
  if (crb(c,0)) { goto L_801C9824; } // 801C9818
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C981C
  W16(c->r[4]+0x000007B8u,c->r[0]); // 801C9820
L_801C9824:;
  c->r[4]=0u+0x803D0000u; // 801C9824
  c->r[0]=R16(c->r[30]+0x00000038u); // 801C9828
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801C982C
  c->r[3]=R16(c->r[4]+0x00000004u); // 801C9830
  c->r[0]=c->r[3]+c->r[0]; // 801C9834
  W16(c->r[4]+0x00000004u,c->r[0]); // 801C9838
  c->lr=0x801C9840u; f_801C7F9C(c); // 801C983C
  c->r[12]=R32(c->r[30]+0x00000054u); // 801C9840
  cmps(c,0,(int32_t)c->r[12],0); // 801C9844
  if (crb(c,2)) { goto L_801C9860; } // 801C9848
  c->r[0]=0u+0x00000000u; // 801C984C
  c->r[3]=0u+0x00000001u; // 801C9850
  W32(c->r[30]+0x00000054u,c->r[0]); // 801C9854
  c->ctr=c->r[12]; // 801C9858
  if (true) { c->lr=0x801C9860u; dispatch(c,c->ctr); } // 801C985C
L_801C9860:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9864
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9868
  c->lr=c->r[0]; // 801C986C
  c->r[1]=c->r[1]+0x00000010u; // 801C9870
  return; // 801C9874
}

// l2cu_find_lcb_by_bd_addr
void f_801C9878(Ctx* __restrict c) {
  trace_call(0x801C9878u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9878
  c->r[0]=c->lr; // 801C987C
  c->r[4]=0u+0x803D0000u; // 801C9880
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9884
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801C9888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C988C
  c->r[31]=0u+0x00000000u; // 801C9890
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9894
  c->r[30]=c->r[4]+0x00000008u; // 801C9898
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C989C
  c->r[29]=c->r[3]|c->r[3]; // 801C98A0
L_801C98A4:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C98A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C98A8
  if (crb(c,2)) { goto L_801C98D0; } // 801C98AC
  c->r[4]=c->r[29]|c->r[29]; // 801C98B0
  c->r[3]=c->r[30]+0x0000002Au; // 801C98B4
  c->r[5]=0u+0x00000006u; // 801C98B8
  c->lr=0x801C98C0u; f_8018C170(c); // 801C98BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C98C0
  if (!crb(c,2)) { goto L_801C98D0; } // 801C98C4
  c->r[3]=c->r[30]|c->r[30]; // 801C98C8
  goto L_801C98E4; // 801C98CC
L_801C98D0:;
  c->r[31]=c->r[31]+0x00000001u; // 801C98D0
  c->r[30]=c->r[30]+0x0000005Cu; // 801C98D4
  cmps(c,0,(int32_t)c->r[31],4); // 801C98D8
  if (crb(c,0)) { IRQCHK(c); goto L_801C98A4; } // 801C98DC
  c->r[3]=0u+0x00000000u; // 801C98E0
L_801C98E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C98E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C98E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C98EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C98F0
  c->lr=c->r[0]; // 801C98F4
  c->r[1]=c->r[1]+0x00000020u; // 801C98F8
  return; // 801C98FC
}

// l2cu_find_lcb_by_handle
void f_801C9900(Ctx* __restrict c) {
  trace_call(0x801C9900u);
  c->r[4]=0u+0x803D0000u; // 801C9900
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801C9904
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R8(ea); c->r[4]=ea;} // 801C9908
  cmps(c,0,(int32_t)c->r[0],0); // 801C990C
  if (crb(c,2)) { goto L_801C9928; } // 801C9910
  c->r[0]=R16(c->r[4]+0x00000028u); // 801C9914
  cmpu(c,0,c->r[0],c->r[3]); // 801C9918
  if (!crb(c,2)) { goto L_801C9928; } // 801C991C
  c->r[3]=c->r[4]|c->r[4]; // 801C9920
  return; // 801C9924
L_801C9928:;
  {uint32_t ea=c->r[4]+0x0000005Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801C9928
  cmps(c,0,(int32_t)c->r[0],0); // 801C992C
  if (crb(c,2)) { goto L_801C9948; } // 801C9930
  c->r[0]=R16(c->r[4]+0x00000028u); // 801C9934
  cmpu(c,0,c->r[0],c->r[3]); // 801C9938
  if (!crb(c,2)) { goto L_801C9948; } // 801C993C
  c->r[3]=c->r[4]|c->r[4]; // 801C9940
  return; // 801C9944
L_801C9948:;
  {uint32_t ea=c->r[4]+0x0000005Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801C9948
  cmps(c,0,(int32_t)c->r[0],0); // 801C994C
  if (crb(c,2)) { goto L_801C9968; } // 801C9950
  c->r[0]=R16(c->r[4]+0x00000028u); // 801C9954
  cmpu(c,0,c->r[0],c->r[3]); // 801C9958
  if (!crb(c,2)) { goto L_801C9968; } // 801C995C
  c->r[3]=c->r[4]|c->r[4]; // 801C9960
  return; // 801C9964
L_801C9968:;
  {uint32_t ea=c->r[4]+0x0000005Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801C9968
  cmps(c,0,(int32_t)c->r[0],0); // 801C996C
  if (crb(c,2)) { goto L_801C9988; } // 801C9970
  c->r[0]=R16(c->r[4]+0x00000028u); // 801C9974
  cmpu(c,0,c->r[0],c->r[3]); // 801C9978
  if (!crb(c,2)) { goto L_801C9988; } // 801C997C
  c->r[3]=c->r[4]|c->r[4]; // 801C9980
  return; // 801C9984
L_801C9988:;
  c->r[3]=0u+0x00000000u; // 801C9988
  return; // 801C998C
}

// l2cu_get_conn_role
void f_801C9990(Ctx* __restrict c) {
  trace_call(0x801C9990u);
  c->r[3]=0u+0x803D0000u; // 801C9990
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801C9994
  c->r[3]=R8(c->r[3]+0x00000001u); // 801C9998
  return; // 801C999C
}

// l2cu_build_header
void f_801C99A0(Ctx* __restrict c) {
  trace_call(0x801C99A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C99A0
  c->r[0]=c->lr; // 801C99A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C99A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C99AC
  c->r[31]=c->r[6]|c->r[6]; // 801C99B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C99B4
  c->r[30]=c->r[5]|c->r[5]; // 801C99B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C99BC
  c->r[29]=c->r[4]|c->r[4]; // 801C99C0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C99C4
  c->r[28]=c->r[3]|c->r[3]; // 801C99C8
  c->r[3]=0u+0x00000002u; // 801C99CC
  c->lr=0x801C99D4u; f_801AA140(c); // 801C99D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C99D4
  if (!crb(c,2)) { goto L_801C99E4; } // 801C99D8
  c->r[3]=0u+0x00000000u; // 801C99DC
  goto L_801C9A44; // 801C99E0
L_801C99E4:;
  c->r[8]=0u+0x00000000u; // 801C99E4
  c->r[5]=c->r[28]|0x00002000u; // 801C99E8
  W16(c->r[3]+0x00000004u,c->r[8]); // 801C99EC
  c->r[0]=c->r[29]+0x0000000Cu; // 801C99F0
  c->r[7]=sraw(c,c->r[5],8); // 801C99F4
  c->r[9]=c->r[29]+0x00000008u; // 801C99F8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C99FC
  c->r[6]=sraw(c,c->r[9],8); // 801C9A00
  c->r[10]=c->r[29]+0x00000004u; // 801C9A04
  c->r[4]=0u+0x00000001u; // 801C9A08
  W8(c->r[3]+0x00000008u,c->r[5]); // 801C9A0C
  c->r[5]=sraw(c,c->r[10],8); // 801C9A10
  c->r[0]=rotl(c->r[29],24)&0x000000FFu; // 801C9A14
  W8(c->r[3]+0x00000009u,c->r[7]); // 801C9A18
  W8(c->r[3]+0x0000000Au,c->r[9]); // 801C9A1C
  W8(c->r[3]+0x0000000Bu,c->r[6]); // 801C9A20
  W8(c->r[3]+0x0000000Cu,c->r[10]); // 801C9A24
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801C9A28
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801C9A2C
  W8(c->r[3]+0x0000000Fu,c->r[8]); // 801C9A30
  W8(c->r[3]+0x00000010u,c->r[30]); // 801C9A34
  W8(c->r[3]+0x00000011u,c->r[31]); // 801C9A38
  W8(c->r[3]+0x00000012u,c->r[29]); // 801C9A3C
  W8(c->r[3]+0x00000013u,c->r[0]); // 801C9A40
L_801C9A44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9A44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9A48
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9A4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9A50
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C9A54
  c->lr=c->r[0]; // 801C9A58
  c->r[1]=c->r[1]+0x00000020u; // 801C9A5C
  return; // 801C9A60
}

// l2cu_send_peer_cmd_reject
void f_801C9A64(Ctx* __restrict c) {
  trace_call(0x801C9A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9A64
  c->r[0]=c->lr; // 801C9A68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9A6C
  c->r[11]=c->r[1]+0x00000020u; // 801C9A70
  c->lr=0x801C9A78u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C9A74
  cmpu(c,0,c->r[4],0x00000001u); // 801C9A78
  c->r[27]=c->r[3]|c->r[3]; // 801C9A7C
  c->r[28]=c->r[4]|c->r[4]; // 801C9A80
  c->r[29]=c->r[6]|c->r[6]; // 801C9A84
  c->r[30]=c->r[7]|c->r[7]; // 801C9A88
  if (!crb(c,2)) { goto L_801C9A98; } // 801C9A8C
  c->r[31]=0u+0x00000002u; // 801C9A90
  goto L_801C9AAC; // 801C9A94
L_801C9A98:;
  c->r[6]=c->r[4]+0xFFFFFFFEu; // 801C9A98
  c->r[0]=addc(c,~c->r[4],0x00000002u,1); // 801C9A9C
  c->r[0]=~(c->r[6]|c->r[0]); // 801C9AA0
  c->r[0]=sraw(c,c->r[0],31); // 801C9AA4
  c->r[31]=rotl(c->r[0],0)&0x00000004u; // 801C9AA8
L_801C9AAC:;
  c->r[0]=c->r[31]+0x00000002u; // 801C9AAC
  c->r[3]=R16(c->r[3]+0x00000028u); // 801C9AB0
  c->r[6]=c->r[5]|c->r[5]; // 801C9AB4
  c->r[5]=0u+0x00000001u; // 801C9AB8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9ABC
  c->lr=0x801C9AC4u; f_801C99A0(c); // 801C9AC0
  cmps(c,0,(int32_t)c->r[3],0); // 801C9AC4
  c->r[5]=c->r[3]|c->r[3]; // 801C9AC8
  if (!crb(c,2)) { goto L_801C9AF8; } // 801C9ACC
  c->r[3]=0u+0x803D0000u; // 801C9AD0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C9AD4
  cmpu(c,0,c->r[0],0x00000002u); // 801C9AD8
  if (crb(c,0)) { goto L_801C9B48; } // 801C9ADC
  c->r[3]=0u+0x00080000u; // 801C9AE0
  c->r[4]=0u+0x80330000u; // 801C9AE4
  c->r[3]=c->r[3]+0x00000001u; // 801C9AE8
  c->r[4]=c->r[4]+0x00005820u; // 801C9AEC
  c->lr=0x801C9AF4u; f_801ACB20(c); // 801C9AF0
  goto L_801C9B48; // 801C9AF4
L_801C9AF8:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 801C9AF8
  W8(c->r[3]+0x00000014u,c->r[28]); // 801C9AFC
  c->r[4]=rotl(c->r[28],24)&0x000000FFu; // 801C9B00
  c->r[6]=c->r[3]+0x00000016u; // 801C9B04
  cmpu(c,0,c->r[0],0x00000002u); // 801C9B08
  W8(c->r[3]+0x00000015u,c->r[4]); // 801C9B0C
  if (crb(c,0)) { goto L_801C9B24; } // 801C9B10
  W8(c->r[6]+0x00000000u,c->r[29]); // 801C9B14
  c->r[0]=rotl(c->r[29],24)&0x000000FFu; // 801C9B18
  W8(c->r[6]+0x00000001u,c->r[0]); // 801C9B1C
  c->r[6]=c->r[6]+0x00000002u; // 801C9B20
L_801C9B24:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 801C9B24
  cmpu(c,0,c->r[0],0x00000004u); // 801C9B28
  if (crb(c,0)) { goto L_801C9B3C; } // 801C9B2C
  W8(c->r[6]+0x00000000u,c->r[30]); // 801C9B30
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801C9B34
  W8(c->r[6]+0x00000001u,c->r[0]); // 801C9B38
L_801C9B3C:;
  c->r[3]=c->r[27]|c->r[27]; // 801C9B3C
  c->r[4]=0u+0x00000000u; // 801C9B40
  c->lr=0x801C9B48u; f_801C7CD0(c); // 801C9B44
L_801C9B48:;
  c->r[11]=c->r[1]+0x00000020u; // 801C9B48
  c->lr=0x801C9B50u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9B4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9B50
  c->lr=c->r[0]; // 801C9B54
  c->r[1]=c->r[1]+0x00000020u; // 801C9B58
  return; // 801C9B5C
}

// l2cu_send_peer_connect_req
void f_801C9B60(Ctx* __restrict c) {
  trace_call(0x801C9B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9B60
  c->r[0]=c->lr; // 801C9B64
  c->r[4]=0u+0x00000004u; // 801C9B68
  c->r[5]=0u+0x00000002u; // 801C9B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9B74
  c->r[31]=c->r[3]|c->r[3]; // 801C9B78
  c->r[7]=R32(c->r[3]+0x00000010u); // 801C9B7C
  c->r[6]=R8(c->r[7]+0x00000031u); // 801C9B80
  c->r[0]=c->r[6]+0x00000001u; // 801C9B84
  W8(c->r[7]+0x00000031u,c->r[0]); // 801C9B88
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801C9B8C
  W8(c->r[3]+0x00000035u,c->r[0]); // 801C9B90
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C9B94
  c->r[3]=R16(c->r[3]+0x00000028u); // 801C9B98
  c->lr=0x801C9BA0u; f_801C99A0(c); // 801C9B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9BA0
  if (!crb(c,2)) { goto L_801C9BD0; } // 801C9BA4
  c->r[3]=0u+0x803D0000u; // 801C9BA8
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C9BAC
  cmpu(c,0,c->r[0],0x00000002u); // 801C9BB0
  if (crb(c,0)) { goto L_801C9C10; } // 801C9BB4
  c->r[3]=0u+0x00080000u; // 801C9BB8
  c->r[4]=0u+0x80330000u; // 801C9BBC
  c->r[3]=c->r[3]+0x00000001u; // 801C9BC0
  c->r[4]=c->r[4]+0x0000583Cu; // 801C9BC4
  c->lr=0x801C9BCCu; f_801ACB20(c); // 801C9BC8
  goto L_801C9C10; // 801C9BCC
L_801C9BD0:;
  c->r[6]=R32(c->r[31]+0x00000030u); // 801C9BD0
  c->r[5]=c->r[3]|c->r[3]; // 801C9BD4
  c->r[4]=0u+0x00000000u; // 801C9BD8
  c->r[0]=R16(c->r[6]+0x00000002u); // 801C9BDC
  W8(c->r[3]+0x00000014u,c->r[0]); // 801C9BE0
  c->r[6]=R32(c->r[31]+0x00000030u); // 801C9BE4
  c->r[0]=R16(c->r[6]+0x00000002u); // 801C9BE8
  c->r[0]=sraw(c,c->r[0],8); // 801C9BEC
  W8(c->r[3]+0x00000015u,c->r[0]); // 801C9BF0
  c->r[0]=R16(c->r[31]+0x00000014u); // 801C9BF4
  W8(c->r[3]+0x00000016u,c->r[0]); // 801C9BF8
  c->r[0]=R16(c->r[31]+0x00000014u); // 801C9BFC
  c->r[0]=sraw(c,c->r[0],8); // 801C9C00
  W8(c->r[3]+0x00000017u,c->r[0]); // 801C9C04
  c->r[3]=R32(c->r[31]+0x00000010u); // 801C9C08
  c->lr=0x801C9C10u; f_801C7CD0(c); // 801C9C0C
L_801C9C10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9C14
  c->lr=c->r[0]; // 801C9C18
  c->r[1]=c->r[1]+0x00000010u; // 801C9C1C
  return; // 801C9C20
}

// l2cu_send_peer_connect_rsp
void f_801C9C24(Ctx* __restrict c) {
  trace_call(0x801C9C24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9C24
  c->r[0]=c->lr; // 801C9C28
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9C2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9C30
  c->r[31]=c->r[5]|c->r[5]; // 801C9C34
  c->r[5]=0u+0x00000003u; // 801C9C38
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9C3C
  c->r[30]=c->r[4]|c->r[4]; // 801C9C40
  c->r[4]=0u+0x00000008u; // 801C9C44
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9C48
  c->r[29]=c->r[3]|c->r[3]; // 801C9C4C
  c->r[6]=R32(c->r[3]+0x00000010u); // 801C9C50
  c->r[3]=R16(c->r[6]+0x00000028u); // 801C9C54
  c->r[6]=R8(c->r[29]+0x00000036u); // 801C9C58
  c->lr=0x801C9C60u; f_801C99A0(c); // 801C9C5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9C60
  if (!crb(c,2)) { goto L_801C9C90; } // 801C9C64
  c->r[3]=0u+0x803D0000u; // 801C9C68
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C9C6C
  cmpu(c,0,c->r[0],0x00000002u); // 801C9C70
  if (crb(c,0)) { goto L_801C9CE0; } // 801C9C74
  c->r[3]=0u+0x00080000u; // 801C9C78
  c->r[4]=0u+0x80330000u; // 801C9C7C
  c->r[3]=c->r[3]+0x00000001u; // 801C9C80
  c->r[4]=c->r[4]+0x0000583Cu; // 801C9C84
  c->lr=0x801C9C8Cu; f_801ACB20(c); // 801C9C88
  goto L_801C9CE0; // 801C9C8C
L_801C9C90:;
  c->r[6]=R16(c->r[29]+0x00000014u); // 801C9C90
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C9C94
  c->r[5]=c->r[3]|c->r[3]; // 801C9C98
  c->r[4]=0u+0x00000000u; // 801C9C9C
  W8(c->r[3]+0x00000014u,c->r[6]); // 801C9CA0
  c->r[6]=R16(c->r[29]+0x00000014u); // 801C9CA4
  c->r[6]=sraw(c,c->r[6],8); // 801C9CA8
  W8(c->r[3]+0x00000015u,c->r[6]); // 801C9CAC
  c->r[6]=R16(c->r[29]+0x00000016u); // 801C9CB0
  W8(c->r[3]+0x00000016u,c->r[6]); // 801C9CB4
  c->r[6]=R16(c->r[29]+0x00000016u); // 801C9CB8
  c->r[6]=sraw(c,c->r[6],8); // 801C9CBC
  W8(c->r[3]+0x00000017u,c->r[6]); // 801C9CC0
  c->r[6]=sraw(c,c->r[30],8); // 801C9CC4
  W8(c->r[3]+0x00000018u,c->r[30]); // 801C9CC8
  W8(c->r[3]+0x00000019u,c->r[6]); // 801C9CCC
  W8(c->r[3]+0x0000001Au,c->r[31]); // 801C9CD0
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801C9CD4
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C9CD8
  c->lr=0x801C9CE0u; f_801C7CD0(c); // 801C9CDC
L_801C9CE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9CE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9CE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9CE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9CEC
  c->lr=c->r[0]; // 801C9CF0
  c->r[1]=c->r[1]+0x00000020u; // 801C9CF4
  return; // 801C9CF8
}

// l2cu_reject_connection
void f_801C9CFC(Ctx* __restrict c) {
  trace_call(0x801C9CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9CFC
  c->r[0]=c->lr; // 801C9D00
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9D04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9D08
  c->r[31]=c->r[6]|c->r[6]; // 801C9D0C
  c->r[6]=c->r[5]|c->r[5]; // 801C9D10
  c->r[5]=0u+0x00000003u; // 801C9D14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9D18
  c->r[30]=c->r[4]|c->r[4]; // 801C9D1C
  c->r[4]=0u+0x00000008u; // 801C9D20
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9D24
  c->r[29]=c->r[3]|c->r[3]; // 801C9D28
  c->r[3]=R16(c->r[3]+0x00000028u); // 801C9D2C
  c->lr=0x801C9D34u; f_801C99A0(c); // 801C9D30
  cmps(c,0,(int32_t)c->r[3],0); // 801C9D34
  if (!crb(c,2)) { goto L_801C9D64; } // 801C9D38
  c->r[3]=0u+0x803D0000u; // 801C9D3C
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C9D40
  cmpu(c,0,c->r[0],0x00000002u); // 801C9D44
  if (crb(c,0)) { goto L_801C9DA0; } // 801C9D48
  c->r[3]=0u+0x00080000u; // 801C9D4C
  c->r[4]=0u+0x80330000u; // 801C9D50
  c->r[3]=c->r[3]+0x00000001u; // 801C9D54
  c->r[4]=c->r[4]+0x0000583Cu; // 801C9D58
  c->lr=0x801C9D60u; f_801ACB20(c); // 801C9D5C
  goto L_801C9DA0; // 801C9D60
L_801C9D64:;
  c->r[7]=0u+0x00000000u; // 801C9D64
  c->r[6]=sraw(c,c->r[30],8); // 801C9D68
  W8(c->r[3]+0x00000014u,c->r[7]); // 801C9D6C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801C9D70
  c->r[5]=c->r[3]|c->r[3]; // 801C9D74
  c->r[4]=0u+0x00000000u; // 801C9D78
  W8(c->r[3]+0x00000015u,c->r[7]); // 801C9D7C
  W8(c->r[3]+0x00000016u,c->r[30]); // 801C9D80
  W8(c->r[3]+0x00000017u,c->r[6]); // 801C9D84
  W8(c->r[3]+0x00000018u,c->r[31]); // 801C9D88
  W8(c->r[3]+0x00000019u,c->r[0]); // 801C9D8C
  W8(c->r[3]+0x0000001Au,c->r[7]); // 801C9D90
  W8(c->r[3]+0x0000001Bu,c->r[7]); // 801C9D94
  c->r[3]=c->r[29]|c->r[29]; // 801C9D98
  c->lr=0x801C9DA0u; f_801C7CD0(c); // 801C9D9C
L_801C9DA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9DA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9DA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9DA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9DAC
  c->lr=c->r[0]; // 801C9DB0
  c->r[1]=c->r[1]+0x00000020u; // 801C9DB4
  return; // 801C9DB8
}

// l2cu_send_peer_config_req
void f_801C9DBC(Ctx* __restrict c) {
  trace_call(0x801C9DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9DBC
  c->r[0]=c->lr; // 801C9DC0
  c->r[7]=0u+0x00000000u; // 801C9DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9DC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9DCC
  c->r[31]=c->r[4]|c->r[4]; // 801C9DD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9DD4
  c->r[30]=c->r[3]|c->r[3]; // 801C9DD8
  c->r[6]=R32(c->r[3]+0x00000010u); // 801C9DDC
  c->r[5]=R8(c->r[6]+0x00000031u); // 801C9DE0
  c->r[0]=c->r[5]+0x00000001u; // 801C9DE4
  W8(c->r[6]+0x00000031u,c->r[0]); // 801C9DE8
  W8(c->r[3]+0x00000035u,c->r[0]); // 801C9DEC
  c->r[0]=R8(c->r[4]+0x00000002u); // 801C9DF0
  cmps(c,0,(int32_t)c->r[0],0); // 801C9DF4
  if (crb(c,2)) { goto L_801C9E00; } // 801C9DF8
  c->r[7]=0u+0x00000004u; // 801C9DFC
L_801C9E00:;
  c->r[0]=R8(c->r[4]+0x00000020u); // 801C9E00
  cmps(c,0,(int32_t)c->r[0],0); // 801C9E04
  if (crb(c,2)) { goto L_801C9E14; } // 801C9E08
  c->r[0]=c->r[7]+0x00000004u; // 801C9E0C
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9E10
L_801C9E14:;
  c->r[0]=R8(c->r[4]+0x00000006u); // 801C9E14
  cmps(c,0,(int32_t)c->r[0],0); // 801C9E18
  if (crb(c,2)) { goto L_801C9E28; } // 801C9E1C
  c->r[0]=c->r[7]+0x00000018u; // 801C9E20
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9E24
L_801C9E28:;
  c->r[0]=R8(c->r[4]+0x00000024u); // 801C9E28
  cmps(c,0,(int32_t)c->r[0],0); // 801C9E2C
  if (crb(c,2)) { goto L_801C9E3C; } // 801C9E30
  c->r[0]=c->r[7]+0x0000000Bu; // 801C9E34
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9E38
L_801C9E3C:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C9E3C
  c->r[0]=c->r[7]+0x00000004u; // 801C9E40
  c->r[6]=R8(c->r[30]+0x00000035u); // 801C9E44
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801C9E48
  c->r[3]=R16(c->r[3]+0x00000028u); // 801C9E4C
  c->r[5]=0u+0x00000004u; // 801C9E50
  c->lr=0x801C9E58u; f_801C99A0(c); // 801C9E54
  cmps(c,0,(int32_t)c->r[3],0); // 801C9E58
  c->r[5]=c->r[3]|c->r[3]; // 801C9E5C
  if (!crb(c,2)) { goto L_801C9E8C; } // 801C9E60
  c->r[3]=0u+0x803D0000u; // 801C9E64
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801C9E68
  cmpu(c,0,c->r[0],0x00000002u); // 801C9E6C
  if (crb(c,0)) { goto L_801CA09C; } // 801C9E70
  c->r[3]=0u+0x00080000u; // 801C9E74
  c->r[4]=0u+0x80330000u; // 801C9E78
  c->r[3]=c->r[3]+0x00000001u; // 801C9E7C
  c->r[4]=c->r[4]+0x0000583Cu; // 801C9E80
  c->lr=0x801C9E88u; f_801ACB20(c); // 801C9E84
  goto L_801CA09C; // 801C9E88
L_801C9E8C:;
  c->r[6]=R16(c->r[30]+0x00000016u); // 801C9E8C
  c->r[0]=0u+0x00000000u; // 801C9E90
  c->r[4]=c->r[3]+0x00000018u; // 801C9E94
  W8(c->r[3]+0x00000014u,c->r[6]); // 801C9E98
  c->r[6]=R16(c->r[30]+0x00000016u); // 801C9E9C
  c->r[6]=sraw(c,c->r[6],8); // 801C9EA0
  W8(c->r[3]+0x00000015u,c->r[6]); // 801C9EA4
  W8(c->r[3]+0x00000016u,c->r[0]); // 801C9EA8
  W8(c->r[3]+0x00000017u,c->r[0]); // 801C9EAC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801C9EB0
  cmps(c,0,(int32_t)c->r[0],0); // 801C9EB4
  if (crb(c,2)) { goto L_801C9EE4; } // 801C9EB8
  c->r[3]=0u+0x00000001u; // 801C9EBC
  c->r[0]=0u+0x00000002u; // 801C9EC0
  W8(c->r[4]+0x00000000u,c->r[3]); // 801C9EC4
  W8(c->r[4]+0x00000001u,c->r[0]); // 801C9EC8
  c->r[0]=R16(c->r[31]+0x00000004u); // 801C9ECC
  W8(c->r[4]+0x00000002u,c->r[0]); // 801C9ED0
  c->r[0]=R16(c->r[31]+0x00000004u); // 801C9ED4
  c->r[0]=sraw(c,c->r[0],8); // 801C9ED8
  W8(c->r[4]+0x00000003u,c->r[0]); // 801C9EDC
  c->r[4]=c->r[4]+0x00000004u; // 801C9EE0
L_801C9EE4:;
  c->r[0]=R8(c->r[31]+0x00000020u); // 801C9EE4
  cmps(c,0,(int32_t)c->r[0],0); // 801C9EE8
  if (crb(c,2)) { goto L_801C9F14; } // 801C9EEC
  c->r[0]=0u+0x00000002u; // 801C9EF0
  W8(c->r[4]+0x00000000u,c->r[0]); // 801C9EF4
  W8(c->r[4]+0x00000001u,c->r[0]); // 801C9EF8
  c->r[0]=R16(c->r[31]+0x00000022u); // 801C9EFC
  W8(c->r[4]+0x00000002u,c->r[0]); // 801C9F00
  c->r[0]=R16(c->r[31]+0x00000022u); // 801C9F04
  c->r[0]=sraw(c,c->r[0],8); // 801C9F08
  W8(c->r[4]+0x00000003u,c->r[0]); // 801C9F0C
  c->r[4]=c->r[4]+0x00000004u; // 801C9F10
L_801C9F14:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801C9F14
  cmps(c,0,(int32_t)c->r[0],0); // 801C9F18
  if (crb(c,2)) { goto L_801CA020; } // 801C9F1C
  c->r[3]=0u+0x00000003u; // 801C9F20
  c->r[0]=0u+0x00000016u; // 801C9F24
  W8(c->r[4]+0x00000000u,c->r[3]); // 801C9F28
  W8(c->r[4]+0x00000001u,c->r[0]); // 801C9F2C
  c->r[0]=R8(c->r[31]+0x00000008u); // 801C9F30
  W8(c->r[4]+0x00000002u,c->r[0]); // 801C9F34
  c->r[0]=R8(c->r[31]+0x00000009u); // 801C9F38
  W8(c->r[4]+0x00000003u,c->r[0]); // 801C9F3C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C9F40
  W8(c->r[4]+0x00000004u,c->r[0]); // 801C9F44
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C9F48
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801C9F4C
  W8(c->r[4]+0x00000005u,c->r[0]); // 801C9F50
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C9F54
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801C9F58
  W8(c->r[4]+0x00000006u,c->r[0]); // 801C9F5C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C9F60
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801C9F64
  W8(c->r[4]+0x00000007u,c->r[0]); // 801C9F68
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C9F6C
  W8(c->r[4]+0x00000008u,c->r[0]); // 801C9F70
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C9F74
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801C9F78
  W8(c->r[4]+0x00000009u,c->r[0]); // 801C9F7C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C9F80
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801C9F84
  W8(c->r[4]+0x0000000Au,c->r[0]); // 801C9F88
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C9F8C
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801C9F90
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 801C9F94
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C9F98
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 801C9F9C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C9FA0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801C9FA4
  W8(c->r[4]+0x0000000Du,c->r[0]); // 801C9FA8
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C9FAC
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801C9FB0
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 801C9FB4
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C9FB8
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801C9FBC
  W8(c->r[4]+0x0000000Fu,c->r[0]); // 801C9FC0
  c->r[0]=R32(c->r[31]+0x00000018u); // 801C9FC4
  W8(c->r[4]+0x00000010u,c->r[0]); // 801C9FC8
  c->r[0]=R32(c->r[31]+0x00000018u); // 801C9FCC
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801C9FD0
  W8(c->r[4]+0x00000011u,c->r[0]); // 801C9FD4
  c->r[0]=R32(c->r[31]+0x00000018u); // 801C9FD8
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801C9FDC
  W8(c->r[4]+0x00000012u,c->r[0]); // 801C9FE0
  c->r[0]=R32(c->r[31]+0x00000018u); // 801C9FE4
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801C9FE8
  W8(c->r[4]+0x00000013u,c->r[0]); // 801C9FEC
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801C9FF0
  W8(c->r[4]+0x00000014u,c->r[0]); // 801C9FF4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801C9FF8
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801C9FFC
  W8(c->r[4]+0x00000015u,c->r[0]); // 801CA000
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801CA004
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801CA008
  W8(c->r[4]+0x00000016u,c->r[0]); // 801CA00C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801CA010
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801CA014
  W8(c->r[4]+0x00000017u,c->r[0]); // 801CA018
  c->r[4]=c->r[4]+0x00000018u; // 801CA01C
L_801CA020:;
  c->r[0]=R8(c->r[31]+0x00000024u); // 801CA020
  cmps(c,0,(int32_t)c->r[0],0); // 801CA024
  if (crb(c,2)) { goto L_801CA090; } // 801CA028
  c->r[3]=0u+0x00000004u; // 801CA02C
  c->r[0]=0u+0x00000009u; // 801CA030
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CA034
  W8(c->r[4]+0x00000001u,c->r[0]); // 801CA038
  c->r[0]=R8(c->r[31]+0x00000026u); // 801CA03C
  W8(c->r[4]+0x00000002u,c->r[0]); // 801CA040
  c->r[0]=R8(c->r[31]+0x00000027u); // 801CA044
  W8(c->r[4]+0x00000003u,c->r[0]); // 801CA048
  c->r[0]=R8(c->r[31]+0x00000028u); // 801CA04C
  W8(c->r[4]+0x00000004u,c->r[0]); // 801CA050
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801CA054
  W8(c->r[4]+0x00000005u,c->r[0]); // 801CA058
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801CA05C
  c->r[0]=sraw(c,c->r[0],8); // 801CA060
  W8(c->r[4]+0x00000006u,c->r[0]); // 801CA064
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 801CA068
  W8(c->r[4]+0x00000007u,c->r[0]); // 801CA06C
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 801CA070
  c->r[0]=sraw(c,c->r[0],8); // 801CA074
  W8(c->r[4]+0x00000008u,c->r[0]); // 801CA078
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801CA07C
  W8(c->r[4]+0x00000009u,c->r[0]); // 801CA080
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801CA084
  c->r[0]=sraw(c,c->r[0],8); // 801CA088
  W8(c->r[4]+0x0000000Au,c->r[0]); // 801CA08C
L_801CA090:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801CA090
  c->r[4]=0u+0x00000000u; // 801CA094
  c->lr=0x801CA09Cu; f_801C7CD0(c); // 801CA098
L_801CA09C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA09C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA0A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CA0A4
  c->lr=c->r[0]; // 801CA0A8
  c->r[1]=c->r[1]+0x00000010u; // 801CA0AC
  return; // 801CA0B0
}

// l2cu_send_peer_config_rsp
void f_801CA0B4(Ctx* __restrict c) {
  trace_call(0x801CA0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA0B4
  c->r[0]=c->lr; // 801CA0B8
  c->r[5]=0u+0x00000000u; // 801CA0BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA0C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA0C4
  c->r[31]=c->r[4]|c->r[4]; // 801CA0C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CA0CC
  c->r[30]=c->r[3]|c->r[3]; // 801CA0D0
  c->r[0]=R8(c->r[4]+0x00000002u); // 801CA0D4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA0D8
  if (crb(c,2)) { goto L_801CA0E4; } // 801CA0DC
  c->r[5]=0u+0x00000004u; // 801CA0E0
L_801CA0E4:;
  c->r[0]=R8(c->r[4]+0x00000020u); // 801CA0E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA0E8
  if (crb(c,2)) { goto L_801CA0F8; } // 801CA0EC
  c->r[0]=c->r[5]+0x00000004u; // 801CA0F0
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801CA0F4
L_801CA0F8:;
  c->r[0]=R8(c->r[4]+0x00000006u); // 801CA0F8
  cmps(c,0,(int32_t)c->r[0],0); // 801CA0FC
  if (crb(c,2)) { goto L_801CA10C; } // 801CA100
  c->r[0]=c->r[5]+0x00000018u; // 801CA104
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801CA108
L_801CA10C:;
  c->r[0]=R8(c->r[4]+0x00000024u); // 801CA10C
  cmps(c,0,(int32_t)c->r[0],0); // 801CA110
  if (crb(c,2)) { goto L_801CA120; } // 801CA114
  c->r[0]=c->r[5]+0x0000000Bu; // 801CA118
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801CA11C
L_801CA120:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801CA120
  c->r[0]=c->r[5]+0x00000006u; // 801CA124
  c->r[6]=R8(c->r[30]+0x00000036u); // 801CA128
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CA12C
  c->r[3]=R16(c->r[3]+0x00000028u); // 801CA130
  c->r[5]=0u+0x00000005u; // 801CA134
  c->lr=0x801CA13Cu; f_801C99A0(c); // 801CA138
  cmps(c,0,(int32_t)c->r[3],0); // 801CA13C
  c->r[5]=c->r[3]|c->r[3]; // 801CA140
  if (!crb(c,2)) { goto L_801CA170; } // 801CA144
  c->r[3]=0u+0x803D0000u; // 801CA148
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CA14C
  cmpu(c,0,c->r[0],0x00000002u); // 801CA150
  if (crb(c,0)) { goto L_801CA394; } // 801CA154
  c->r[3]=0u+0x00080000u; // 801CA158
  c->r[4]=0u+0x80330000u; // 801CA15C
  c->r[3]=c->r[3]+0x00000001u; // 801CA160
  c->r[4]=c->r[4]+0x0000583Cu; // 801CA164
  c->lr=0x801CA16Cu; f_801ACB20(c); // 801CA168
  goto L_801CA394; // 801CA16C
L_801CA170:;
  c->r[6]=R16(c->r[30]+0x00000016u); // 801CA170
  c->r[0]=0u+0x00000000u; // 801CA174
  c->r[4]=c->r[3]+0x0000001Au; // 801CA178
  W8(c->r[3]+0x00000014u,c->r[6]); // 801CA17C
  c->r[6]=R16(c->r[30]+0x00000016u); // 801CA180
  c->r[6]=sraw(c,c->r[6],8); // 801CA184
  W8(c->r[3]+0x00000015u,c->r[6]); // 801CA188
  W8(c->r[3]+0x00000016u,c->r[0]); // 801CA18C
  W8(c->r[3]+0x00000017u,c->r[0]); // 801CA190
  c->r[0]=R16(c->r[31]+0x00000000u); // 801CA194
  W8(c->r[3]+0x00000018u,c->r[0]); // 801CA198
  c->r[0]=R16(c->r[31]+0x00000000u); // 801CA19C
  c->r[0]=sraw(c,c->r[0],8); // 801CA1A0
  W8(c->r[3]+0x00000019u,c->r[0]); // 801CA1A4
  c->r[0]=R8(c->r[31]+0x00000002u); // 801CA1A8
  cmps(c,0,(int32_t)c->r[0],0); // 801CA1AC
  if (crb(c,2)) { goto L_801CA1DC; } // 801CA1B0
  c->r[3]=0u+0x00000001u; // 801CA1B4
  c->r[0]=0u+0x00000002u; // 801CA1B8
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CA1BC
  W8(c->r[4]+0x00000001u,c->r[0]); // 801CA1C0
  c->r[0]=R16(c->r[31]+0x00000004u); // 801CA1C4
  W8(c->r[4]+0x00000002u,c->r[0]); // 801CA1C8
  c->r[0]=R16(c->r[31]+0x00000004u); // 801CA1CC
  c->r[0]=sraw(c,c->r[0],8); // 801CA1D0
  W8(c->r[4]+0x00000003u,c->r[0]); // 801CA1D4
  c->r[4]=c->r[4]+0x00000004u; // 801CA1D8
L_801CA1DC:;
  c->r[0]=R8(c->r[31]+0x00000020u); // 801CA1DC
  cmps(c,0,(int32_t)c->r[0],0); // 801CA1E0
  if (crb(c,2)) { goto L_801CA20C; } // 801CA1E4
  c->r[0]=0u+0x00000002u; // 801CA1E8
  W8(c->r[4]+0x00000000u,c->r[0]); // 801CA1EC
  W8(c->r[4]+0x00000001u,c->r[0]); // 801CA1F0
  c->r[0]=R16(c->r[31]+0x00000022u); // 801CA1F4
  W8(c->r[4]+0x00000002u,c->r[0]); // 801CA1F8
  c->r[0]=R16(c->r[31]+0x00000022u); // 801CA1FC
  c->r[0]=sraw(c,c->r[0],8); // 801CA200
  W8(c->r[4]+0x00000003u,c->r[0]); // 801CA204
  c->r[4]=c->r[4]+0x00000004u; // 801CA208
L_801CA20C:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801CA20C
  cmps(c,0,(int32_t)c->r[0],0); // 801CA210
  if (crb(c,2)) { goto L_801CA318; } // 801CA214
  c->r[3]=0u+0x00000003u; // 801CA218
  c->r[0]=0u+0x00000016u; // 801CA21C
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CA220
  W8(c->r[4]+0x00000001u,c->r[0]); // 801CA224
  c->r[0]=R8(c->r[31]+0x00000008u); // 801CA228
  W8(c->r[4]+0x00000002u,c->r[0]); // 801CA22C
  c->r[0]=R8(c->r[31]+0x00000009u); // 801CA230
  W8(c->r[4]+0x00000003u,c->r[0]); // 801CA234
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801CA238
  W8(c->r[4]+0x00000004u,c->r[0]); // 801CA23C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801CA240
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801CA244
  W8(c->r[4]+0x00000005u,c->r[0]); // 801CA248
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801CA24C
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801CA250
  W8(c->r[4]+0x00000006u,c->r[0]); // 801CA254
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801CA258
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801CA25C
  W8(c->r[4]+0x00000007u,c->r[0]); // 801CA260
  c->r[0]=R32(c->r[31]+0x00000010u); // 801CA264
  W8(c->r[4]+0x00000008u,c->r[0]); // 801CA268
  c->r[0]=R32(c->r[31]+0x00000010u); // 801CA26C
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801CA270
  W8(c->r[4]+0x00000009u,c->r[0]); // 801CA274
  c->r[0]=R32(c->r[31]+0x00000010u); // 801CA278
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801CA27C
  W8(c->r[4]+0x0000000Au,c->r[0]); // 801CA280
  c->r[0]=R32(c->r[31]+0x00000010u); // 801CA284
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801CA288
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 801CA28C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CA290
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 801CA294
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CA298
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801CA29C
  W8(c->r[4]+0x0000000Du,c->r[0]); // 801CA2A0
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CA2A4
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801CA2A8
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 801CA2AC
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CA2B0
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801CA2B4
  W8(c->r[4]+0x0000000Fu,c->r[0]); // 801CA2B8
  c->r[0]=R32(c->r[31]+0x00000018u); // 801CA2BC
  W8(c->r[4]+0x00000010u,c->r[0]); // 801CA2C0
  c->r[0]=R32(c->r[31]+0x00000018u); // 801CA2C4
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801CA2C8
  W8(c->r[4]+0x00000011u,c->r[0]); // 801CA2CC
  c->r[0]=R32(c->r[31]+0x00000018u); // 801CA2D0
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801CA2D4
  W8(c->r[4]+0x00000012u,c->r[0]); // 801CA2D8
  c->r[0]=R32(c->r[31]+0x00000018u); // 801CA2DC
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801CA2E0
  W8(c->r[4]+0x00000013u,c->r[0]); // 801CA2E4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801CA2E8
  W8(c->r[4]+0x00000014u,c->r[0]); // 801CA2EC
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801CA2F0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801CA2F4
  W8(c->r[4]+0x00000015u,c->r[0]); // 801CA2F8
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801CA2FC
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801CA300
  W8(c->r[4]+0x00000016u,c->r[0]); // 801CA304
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801CA308
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801CA30C
  W8(c->r[4]+0x00000017u,c->r[0]); // 801CA310
  c->r[4]=c->r[4]+0x00000018u; // 801CA314
L_801CA318:;
  c->r[0]=R8(c->r[31]+0x00000024u); // 801CA318
  cmps(c,0,(int32_t)c->r[0],0); // 801CA31C
  if (crb(c,2)) { goto L_801CA388; } // 801CA320
  c->r[3]=0u+0x00000004u; // 801CA324
  c->r[0]=0u+0x00000009u; // 801CA328
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CA32C
  W8(c->r[4]+0x00000001u,c->r[0]); // 801CA330
  c->r[0]=R8(c->r[31]+0x00000026u); // 801CA334
  W8(c->r[4]+0x00000002u,c->r[0]); // 801CA338
  c->r[0]=R8(c->r[31]+0x00000027u); // 801CA33C
  W8(c->r[4]+0x00000003u,c->r[0]); // 801CA340
  c->r[0]=R8(c->r[31]+0x00000028u); // 801CA344
  W8(c->r[4]+0x00000004u,c->r[0]); // 801CA348
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801CA34C
  W8(c->r[4]+0x00000005u,c->r[0]); // 801CA350
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801CA354
  c->r[0]=sraw(c,c->r[0],8); // 801CA358
  W8(c->r[4]+0x00000006u,c->r[0]); // 801CA35C
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 801CA360
  W8(c->r[4]+0x00000007u,c->r[0]); // 801CA364
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 801CA368
  c->r[0]=sraw(c,c->r[0],8); // 801CA36C
  W8(c->r[4]+0x00000008u,c->r[0]); // 801CA370
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801CA374
  W8(c->r[4]+0x00000009u,c->r[0]); // 801CA378
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801CA37C
  c->r[0]=sraw(c,c->r[0],8); // 801CA380
  W8(c->r[4]+0x0000000Au,c->r[0]); // 801CA384
L_801CA388:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801CA388
  c->r[4]=0u+0x00000000u; // 801CA38C
  c->lr=0x801CA394u; f_801C7CD0(c); // 801CA390
L_801CA394:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA398
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CA39C
  c->lr=c->r[0]; // 801CA3A0
  c->r[1]=c->r[1]+0x00000010u; // 801CA3A4
  return; // 801CA3A8
}

// l2cu_send_peer_config_rej
void f_801CA3AC(Ctx* __restrict c) {
  trace_call(0x801CA3ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA3AC
  c->r[0]=c->lr; // 801CA3B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CA3B4
  c->r[11]=c->r[1]+0x00000030u; // 801CA3B8
  c->lr=0x801CA3C0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CA3BC
  c->r[25]=c->r[3]|c->r[3]; // 801CA3C0
  c->r[26]=c->r[4]|c->r[4]; // 801CA3C4
  c->r[27]=c->r[5]|c->r[5]; // 801CA3C8
  c->r[24]=c->r[6]|c->r[6]; // 801CA3CC
  c->r[3]=0u+0x00000002u; // 801CA3D0
  c->lr=0x801CA3D8u; f_801AA140(c); // 801CA3D4
  cmps(c,0,(int32_t)c->r[3],0); // 801CA3D8
  c->r[31]=c->r[3]|c->r[3]; // 801CA3DC
  if (!crb(c,2)) { goto L_801CA40C; } // 801CA3E0
  c->r[3]=0u+0x803D0000u; // 801CA3E4
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CA3E8
  cmpu(c,0,c->r[0],0x00000002u); // 801CA3EC
  if (crb(c,0)) { goto L_801CA548; } // 801CA3F0
  c->r[3]=0u+0x00080000u; // 801CA3F4
  c->r[4]=0u+0x80330000u; // 801CA3F8
  c->r[3]=c->r[3]+0x00000001u; // 801CA3FC
  c->r[4]=c->r[4]+0x0000585Cu; // 801CA400
  c->lr=0x801CA408u; f_801ACB20(c); // 801CA404
  goto L_801CA548; // 801CA408
L_801CA40C:;
  c->r[7]=0u+0x00000000u; // 801CA40C
  c->r[30]=c->r[3]+0x0000000Au; // 801CA410
  W16(c->r[3]+0x00000004u,c->r[7]); // 801CA414
  c->r[8]=c->r[24]+0x0000000Au; // 801CA418
  c->r[5]=0u+0x00000001u; // 801CA41C
  c->r[4]=0u+0x00000005u; // 801CA420
  c->r[6]=R32(c->r[25]+0x00000010u); // 801CA424
  c->r[9]=c->r[24]+0x00000006u; // 801CA428
  c->r[0]=0u+0x00000003u; // 801CA42C
  c->r[29]=c->r[30]|c->r[30]; // 801CA430
  c->r[6]=R16(c->r[6]+0x00000028u); // 801CA434
  c->r[28]=c->r[26]+c->r[27]; // 801CA438
  c->r[6]=c->r[6]|0x00002000u; // 801CA43C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801CA440
  c->r[6]=R32(c->r[25]+0x00000010u); // 801CA444
  c->r[6]=R16(c->r[6]+0x00000028u); // 801CA448
  c->r[6]=c->r[6]|0x00002000u; // 801CA44C
  c->r[6]=sraw(c,c->r[6],8); // 801CA450
  W8(c->r[3]+0x00000009u,c->r[6]); // 801CA454
  c->r[6]=sraw(c,c->r[8],8); // 801CA458
  c->r[3]=sraw(c,c->r[9],8); // 801CA45C
  W8(c->r[30]+0x00000002u,c->r[8]); // 801CA460
  W8(c->r[30]+0x00000003u,c->r[6]); // 801CA464
  W8(c->r[30]+0x00000004u,c->r[5]); // 801CA468
  W8(c->r[30]+0x00000005u,c->r[7]); // 801CA46C
  W8(c->r[30]+0x00000006u,c->r[4]); // 801CA470
  c->r[4]=R8(c->r[25]+0x00000036u); // 801CA474
  W8(c->r[30]+0x00000007u,c->r[4]); // 801CA478
  W8(c->r[30]+0x00000008u,c->r[9]); // 801CA47C
  W8(c->r[30]+0x00000009u,c->r[3]); // 801CA480
  c->r[3]=R16(c->r[25]+0x00000016u); // 801CA484
  W8(c->r[30]+0x0000000Au,c->r[3]); // 801CA488
  c->r[3]=R16(c->r[25]+0x00000016u); // 801CA48C
  c->r[3]=sraw(c,c->r[3],8); // 801CA490
  W8(c->r[30]+0x0000000Bu,c->r[3]); // 801CA494
  W8(c->r[30]+0x0000000Cu,c->r[7]); // 801CA498
  W8(c->r[30]+0x0000000Du,c->r[7]); // 801CA49C
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801CA4A0
  W8(c->r[30]+0x0000000Fu,c->r[7]); // 801CA4A4
  c->r[30]=c->r[30]+0x00000010u; // 801CA4A8
  goto L_801CA510; // 801CA4AC
L_801CA4B0:;
  c->r[4]=R8(c->r[26]+0x00000000u); // 801CA4B0
  c->r[3]=R8(c->r[26]+0x00000001u); // 801CA4B4
  c->r[0]=rotl(c->r[4],0)&0x0000007Fu; // 801CA4B8
  cmps(c,0,(int32_t)c->r[0],4); // 801CA4BC
  if (!crb(c,0)) { goto L_801CA4DC; } // 801CA4C0
  cmps(c,0,(int32_t)c->r[0],1); // 801CA4C4
  if (!crb(c,0)) { goto L_801CA4D0; } // 801CA4C8
  goto L_801CA4DC; // 801CA4CC
L_801CA4D0:;
  c->r[3]=c->r[3]+c->r[26]; // 801CA4D0
  c->r[26]=c->r[3]+0x00000002u; // 801CA4D4
  goto L_801CA510; // 801CA4D8
L_801CA4DC:;
  c->r[24]=c->r[3]+0x00000002u; // 801CA4DC
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[27]); // 801CA4E0
  if (crb(c,1)) { goto L_801CA50C; } // 801CA4E4
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801CA4E8
  if (!crb(c,2)) { goto L_801CA504; } // 801CA4EC
  c->r[3]=c->r[30]|c->r[30]; // 801CA4F0
  c->r[4]=c->r[26]|c->r[26]; // 801CA4F4
  c->r[5]=c->r[24]|c->r[24]; // 801CA4F8
  c->lr=0x801CA500u; f_80004338(c); // 801CA4FC
  c->r[30]=c->r[30]+c->r[24]; // 801CA500
L_801CA504:;
  c->r[26]=c->r[26]+c->r[24]; // 801CA504
  goto L_801CA510; // 801CA508
L_801CA50C:;
  c->r[26]=c->r[28]|c->r[28]; // 801CA50C
L_801CA510:;
  cmpu(c,0,c->r[26],c->r[28]); // 801CA510
  if (crb(c,0)) { IRQCHK(c); goto L_801CA4B0; } // 801CA514
  c->r[3]=c->r[30]-c->r[29]; // 801CA518
  c->r[4]=c->r[25]|c->r[25]; // 801CA51C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801CA520
  c->r[5]=c->r[31]|c->r[31]; // 801CA524
  W8(c->r[29]+0x00000000u,c->r[3]); // 801CA528
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 801CA52C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CA530
  W8(c->r[29]+0x00000001u,c->r[0]); // 801CA534
  c->r[0]=c->r[3]+0x00000004u; // 801CA538
  W16(c->r[31]+0x00000002u,c->r[0]); // 801CA53C
  c->r[3]=R32(c->r[25]+0x00000010u); // 801CA540
  c->lr=0x801CA548u; f_801C7CD0(c); // 801CA544
L_801CA548:;
  c->r[11]=c->r[1]+0x00000030u; // 801CA548
  c->lr=0x801CA550u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA54C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA550
  c->lr=c->r[0]; // 801CA554
  c->r[1]=c->r[1]+0x00000030u; // 801CA558
  return; // 801CA55C
}

// l2cu_send_peer_disc_req
void f_801CA560(Ctx* __restrict c) {
  trace_call(0x801CA560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA560
  c->r[0]=c->lr; // 801CA564
  c->r[4]=0u+0x00000004u; // 801CA568
  c->r[5]=0u+0x00000006u; // 801CA56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA574
  c->r[31]=c->r[3]|c->r[3]; // 801CA578
  c->r[7]=R32(c->r[3]+0x00000010u); // 801CA57C
  c->r[6]=R8(c->r[7]+0x00000031u); // 801CA580
  c->r[0]=c->r[6]+0x00000001u; // 801CA584
  W8(c->r[7]+0x00000031u,c->r[0]); // 801CA588
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801CA58C
  W8(c->r[3]+0x00000035u,c->r[0]); // 801CA590
  c->r[3]=R32(c->r[3]+0x00000010u); // 801CA594
  c->r[3]=R16(c->r[3]+0x00000028u); // 801CA598
  c->lr=0x801CA5A0u; f_801C99A0(c); // 801CA59C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA5A0
  if (!crb(c,2)) { goto L_801CA5D0; } // 801CA5A4
  c->r[3]=0u+0x803D0000u; // 801CA5A8
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CA5AC
  cmpu(c,0,c->r[0],0x00000002u); // 801CA5B0
  if (crb(c,0)) { goto L_801CA620; } // 801CA5B4
  c->r[3]=0u+0x00080000u; // 801CA5B8
  c->r[4]=0u+0x80330000u; // 801CA5BC
  c->r[3]=c->r[3]+0x00000001u; // 801CA5C0
  c->r[4]=c->r[4]+0x0000583Cu; // 801CA5C4
  c->lr=0x801CA5CCu; f_801ACB20(c); // 801CA5C8
  goto L_801CA620; // 801CA5CC
L_801CA5D0:;
  c->r[5]=R16(c->r[31]+0x00000016u); // 801CA5D0
  c->r[0]=0u+0x00000000u; // 801CA5D4
  c->r[4]=c->r[3]|c->r[3]; // 801CA5D8
  W8(c->r[3]+0x00000014u,c->r[5]); // 801CA5DC
  c->r[5]=R16(c->r[31]+0x00000016u); // 801CA5E0
  c->r[5]=sraw(c,c->r[5],8); // 801CA5E4
  W8(c->r[3]+0x00000015u,c->r[5]); // 801CA5E8
  c->r[5]=R16(c->r[31]+0x00000014u); // 801CA5EC
  W8(c->r[3]+0x00000016u,c->r[5]); // 801CA5F0
  c->r[5]=R16(c->r[31]+0x00000014u); // 801CA5F4
  c->r[5]=sraw(c,c->r[5],8); // 801CA5F8
  W8(c->r[3]+0x00000017u,c->r[5]); // 801CA5FC
  W16(c->r[3]+0x00000006u,c->r[0]); // 801CA600
  c->r[3]=R32(c->r[31]+0x00000010u); // 801CA604
  c->r[3]=c->r[3]+0x00000044u; // 801CA608
  c->lr=0x801CA610u; f_801AA648(c); // 801CA60C
  c->r[3]=R32(c->r[31]+0x00000010u); // 801CA610
  c->r[4]=0u+0x00000000u; // 801CA614
  c->r[5]=0u+0x00000000u; // 801CA618
  c->lr=0x801CA620u; f_801C7CD0(c); // 801CA61C
L_801CA620:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA624
  c->lr=c->r[0]; // 801CA628
  c->r[1]=c->r[1]+0x00000010u; // 801CA62C
  return; // 801CA630
}

// l2cu_send_peer_disc_rsp
void f_801CA634(Ctx* __restrict c) {
  trace_call(0x801CA634u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA634
  c->r[0]=c->lr; // 801CA638
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA63C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CA640
  c->r[31]=c->r[6]|c->r[6]; // 801CA644
  c->r[6]=c->r[4]|c->r[4]; // 801CA648
  c->r[4]=0u+0x00000004u; // 801CA64C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CA650
  c->r[30]=c->r[5]|c->r[5]; // 801CA654
  c->r[5]=0u+0x00000007u; // 801CA658
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CA65C
  c->r[29]=c->r[3]|c->r[3]; // 801CA660
  c->r[3]=R16(c->r[3]+0x00000028u); // 801CA664
  c->lr=0x801CA66Cu; f_801C99A0(c); // 801CA668
  cmps(c,0,(int32_t)c->r[3],0); // 801CA66C
  if (!crb(c,2)) { goto L_801CA69C; } // 801CA670
  c->r[3]=0u+0x803D0000u; // 801CA674
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CA678
  cmpu(c,0,c->r[0],0x00000002u); // 801CA67C
  if (crb(c,0)) { goto L_801CA6D8; } // 801CA680
  c->r[3]=0u+0x00080000u; // 801CA684
  c->r[4]=0u+0x80330000u; // 801CA688
  c->r[3]=c->r[3]+0x00000001u; // 801CA68C
  c->r[4]=c->r[4]+0x0000583Cu; // 801CA690
  c->lr=0x801CA698u; f_801ACB20(c); // 801CA694
  goto L_801CA6D8; // 801CA698
L_801CA69C:;
  W8(c->r[3]+0x00000014u,c->r[30]); // 801CA69C
  c->r[4]=sraw(c,c->r[30],8); // 801CA6A0
  c->r[5]=rotl(c->r[31],24)&0x000000FFu; // 801CA6A4
  c->r[0]=0u+0x00000000u; // 801CA6A8
  W8(c->r[3]+0x00000015u,c->r[4]); // 801CA6AC
  c->r[4]=c->r[3]|c->r[3]; // 801CA6B0
  W8(c->r[3]+0x00000016u,c->r[31]); // 801CA6B4
  W8(c->r[3]+0x00000017u,c->r[5]); // 801CA6B8
  W16(c->r[3]+0x00000006u,c->r[0]); // 801CA6BC
  c->r[3]=c->r[29]+0x00000044u; // 801CA6C0
  c->lr=0x801CA6C8u; f_801AA648(c); // 801CA6C4
  c->r[3]=c->r[29]|c->r[29]; // 801CA6C8
  c->r[4]=0u+0x00000000u; // 801CA6CC
  c->r[5]=0u+0x00000000u; // 801CA6D0
  c->lr=0x801CA6D8u; f_801C7CD0(c); // 801CA6D4
L_801CA6D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA6D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CA6DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CA6E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CA6E4
  c->lr=c->r[0]; // 801CA6E8
  c->r[1]=c->r[1]+0x00000020u; // 801CA6EC
  return; // 801CA6F0
}

// l2cu_send_peer_echo_req
void f_801CA6F4(Ctx* __restrict c) {
  trace_call(0x801CA6F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA6F4
  c->r[0]=c->lr; // 801CA6F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA6FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CA700
  c->r[31]=c->r[5]|c->r[5]; // 801CA704
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CA708
  c->r[30]=c->r[4]|c->r[4]; // 801CA70C
  c->r[4]=c->r[31]|c->r[31]; // 801CA710
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CA714
  c->r[29]=c->r[3]|c->r[3]; // 801CA718
  c->r[5]=R8(c->r[3]+0x00000031u); // 801CA71C
  c->r[3]=R16(c->r[3]+0x00000028u); // 801CA720
  c->r[0]=c->r[5]+0x00000001u; // 801CA724
  c->r[5]=0u+0x00000008u; // 801CA728
  W8(c->r[29]+0x00000031u,c->r[0]); // 801CA72C
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801CA730
  c->lr=0x801CA738u; f_801C99A0(c); // 801CA734
  cmps(c,0,(int32_t)c->r[3],0); // 801CA738
  c->r[5]=c->r[3]|c->r[3]; // 801CA73C
  if (!crb(c,2)) { goto L_801CA76C; } // 801CA740
  c->r[3]=0u+0x803D0000u; // 801CA744
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CA748
  cmpu(c,0,c->r[0],0x00000002u); // 801CA74C
  if (crb(c,0)) { goto L_801CA848; } // 801CA750
  c->r[3]=0u+0x00080000u; // 801CA754
  c->r[4]=0u+0x80330000u; // 801CA758
  c->r[3]=c->r[3]+0x00000001u; // 801CA75C
  c->r[4]=c->r[4]+0x0000587Cu; // 801CA760
  c->lr=0x801CA768u; f_801ACB20(c); // 801CA764
  goto L_801CA848; // 801CA768
L_801CA76C:;
  cmps(c,1,(int32_t)c->r[31],0); // 801CA76C
  c->r[7]=c->r[3]+0x00000014u; // 801CA770
  if (crb(c,6)) { goto L_801CA83C; } // 801CA774
  c->r[8]=0u+0x00000000u; // 801CA778
  if (!crb(c,5)) { goto L_801CA83C; } // 801CA77C
  cmps(c,0,(int32_t)c->r[31],8); // 801CA780
  c->r[4]=c->r[31]+0xFFFFFFF8u; // 801CA784
  if (!crb(c,1)) { goto L_801CA814; } // 801CA788
  c->r[6]=0u+0x00000000u; // 801CA78C
  if (crb(c,4)) { goto L_801CA7A8; } // 801CA790
  c->r[3]=0u+0x80000000u; // 801CA794
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801CA798
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801CA79C
  if (crb(c,1)) { goto L_801CA7A8; } // 801CA7A0
  c->r[6]=0u+0x00000001u; // 801CA7A4
L_801CA7A8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CA7A8
  if (crb(c,2)) { goto L_801CA814; } // 801CA7AC
  c->r[0]=c->r[4]+0x00000007u; // 801CA7B0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801CA7B4
  c->ctr=c->r[0]; // 801CA7B8
  cmps(c,0,(int32_t)c->r[4],0); // 801CA7BC
  if (!crb(c,1)) { goto L_801CA814; } // 801CA7C0
L_801CA7C4:;
  c->r[0]=R8(c->r[30]+c->r[8]); // 801CA7C4
  c->r[3]=c->r[30]+c->r[8]; // 801CA7C8
  c->r[8]=c->r[8]+0x00000008u; // 801CA7CC
  W8(c->r[7]+0x00000000u,c->r[0]); // 801CA7D0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801CA7D4
  W8(c->r[7]+0x00000001u,c->r[0]); // 801CA7D8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CA7DC
  W8(c->r[7]+0x00000002u,c->r[0]); // 801CA7E0
  c->r[0]=R8(c->r[3]+0x00000003u); // 801CA7E4
  W8(c->r[7]+0x00000003u,c->r[0]); // 801CA7E8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801CA7EC
  W8(c->r[7]+0x00000004u,c->r[0]); // 801CA7F0
  c->r[0]=R8(c->r[3]+0x00000005u); // 801CA7F4
  W8(c->r[7]+0x00000005u,c->r[0]); // 801CA7F8
  c->r[0]=R8(c->r[3]+0x00000006u); // 801CA7FC
  W8(c->r[7]+0x00000006u,c->r[0]); // 801CA800
  c->r[0]=R8(c->r[3]+0x00000007u); // 801CA804
  W8(c->r[7]+0x00000007u,c->r[0]); // 801CA808
  c->r[7]=c->r[7]+0x00000008u; // 801CA80C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA7C4; } // 801CA810
L_801CA814:;
  c->r[0]=c->r[31]-c->r[8]; // 801CA814
  c->r[3]=c->r[30]+c->r[8]; // 801CA818
  c->ctr=c->r[0]; // 801CA81C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[31]); // 801CA820
  if (!crb(c,0)) { goto L_801CA83C; } // 801CA824
L_801CA828:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CA828
  c->r[3]=c->r[3]+0x00000001u; // 801CA82C
  W8(c->r[7]+0x00000000u,c->r[0]); // 801CA830
  c->r[7]=c->r[7]+0x00000001u; // 801CA834
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA828; } // 801CA838
L_801CA83C:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA83C
  c->r[4]=0u+0x00000000u; // 801CA840
  c->lr=0x801CA848u; f_801C7CD0(c); // 801CA844
L_801CA848:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA848
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CA84C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CA850
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CA854
  c->lr=c->r[0]; // 801CA858
  c->r[1]=c->r[1]+0x00000020u; // 801CA85C
  return; // 801CA860
}

// l2cu_send_peer_echo_rsp
void f_801CA864(Ctx* __restrict c) {
  trace_call(0x801CA864u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA864
  c->r[0]=c->lr; // 801CA868
  c->r[7]=0u+0x803C0000u; // 801CA86C
  c->r[8]=c->r[4]|c->r[4]; // 801CA870
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA874
  c->r[7]=c->r[7]+0x00007BF0u; // 801CA878
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CA87C
  c->r[31]=c->r[6]|c->r[6]; // 801CA880
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CA884
  c->r[30]=c->r[5]|c->r[5]; // 801CA888
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CA88C
  c->r[29]=c->r[3]|c->r[3]; // 801CA890
  c->r[0]=R16(c->r[7]+0x0000007Eu); // 801CA894
  cmpu(c,0,c->r[0],0x00000294u); // 801CA898
  if (!crb(c,0)) { goto L_801CA8A8; } // 801CA89C
  c->r[4]=R16(c->r[7]+0x0000007Cu); // 801CA8A0
  goto L_801CA8AC; // 801CA8A4
L_801CA8A8:;
  c->r[4]=0u+0x00000294u; // 801CA8A8
L_801CA8AC:;
  c->r[0]=c->r[4]+0xFFFFFFF4u; // 801CA8AC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CA8B0
  cmpu(c,0,c->r[6],c->r[0]); // 801CA8B4
  if (!crb(c,1)) { goto L_801CA8C0; } // 801CA8B8
  c->r[31]=0u+0x00000000u; // 801CA8BC
L_801CA8C0:;
  c->r[3]=R16(c->r[3]+0x00000028u); // 801CA8C0
  c->r[4]=c->r[31]|c->r[31]; // 801CA8C4
  c->r[6]=c->r[8]|c->r[8]; // 801CA8C8
  c->r[5]=0u+0x00000009u; // 801CA8CC
  c->lr=0x801CA8D4u; f_801C99A0(c); // 801CA8D0
  cmps(c,0,(int32_t)c->r[3],0); // 801CA8D4
  c->r[5]=c->r[3]|c->r[3]; // 801CA8D8
  if (!crb(c,2)) { goto L_801CA908; } // 801CA8DC
  c->r[3]=0u+0x803D0000u; // 801CA8E0
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CA8E4
  cmpu(c,0,c->r[0],0x00000002u); // 801CA8E8
  if (crb(c,0)) { goto L_801CA9E4; } // 801CA8EC
  c->r[3]=0u+0x00080000u; // 801CA8F0
  c->r[4]=0u+0x80330000u; // 801CA8F4
  c->r[3]=c->r[3]+0x00000001u; // 801CA8F8
  c->r[4]=c->r[4]+0x0000583Cu; // 801CA8FC
  c->lr=0x801CA904u; f_801ACB20(c); // 801CA900
  goto L_801CA9E4; // 801CA904
L_801CA908:;
  cmps(c,1,(int32_t)c->r[31],0); // 801CA908
  c->r[7]=c->r[3]+0x00000014u; // 801CA90C
  if (crb(c,6)) { goto L_801CA9D8; } // 801CA910
  c->r[8]=0u+0x00000000u; // 801CA914
  if (!crb(c,5)) { goto L_801CA9D8; } // 801CA918
  cmps(c,0,(int32_t)c->r[31],8); // 801CA91C
  c->r[4]=c->r[31]+0xFFFFFFF8u; // 801CA920
  if (!crb(c,1)) { goto L_801CA9B0; } // 801CA924
  c->r[6]=0u+0x00000000u; // 801CA928
  if (crb(c,4)) { goto L_801CA944; } // 801CA92C
  c->r[3]=0u+0x80000000u; // 801CA930
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801CA934
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801CA938
  if (crb(c,1)) { goto L_801CA944; } // 801CA93C
  c->r[6]=0u+0x00000001u; // 801CA940
L_801CA944:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CA944
  if (crb(c,2)) { goto L_801CA9B0; } // 801CA948
  c->r[0]=c->r[4]+0x00000007u; // 801CA94C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801CA950
  c->ctr=c->r[0]; // 801CA954
  cmps(c,0,(int32_t)c->r[4],0); // 801CA958
  if (!crb(c,1)) { goto L_801CA9B0; } // 801CA95C
L_801CA960:;
  c->r[0]=R8(c->r[30]+c->r[8]); // 801CA960
  c->r[3]=c->r[30]+c->r[8]; // 801CA964
  c->r[8]=c->r[8]+0x00000008u; // 801CA968
  W8(c->r[7]+0x00000000u,c->r[0]); // 801CA96C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801CA970
  W8(c->r[7]+0x00000001u,c->r[0]); // 801CA974
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CA978
  W8(c->r[7]+0x00000002u,c->r[0]); // 801CA97C
  c->r[0]=R8(c->r[3]+0x00000003u); // 801CA980
  W8(c->r[7]+0x00000003u,c->r[0]); // 801CA984
  c->r[0]=R8(c->r[3]+0x00000004u); // 801CA988
  W8(c->r[7]+0x00000004u,c->r[0]); // 801CA98C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801CA990
  W8(c->r[7]+0x00000005u,c->r[0]); // 801CA994
  c->r[0]=R8(c->r[3]+0x00000006u); // 801CA998
  W8(c->r[7]+0x00000006u,c->r[0]); // 801CA99C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801CA9A0
  W8(c->r[7]+0x00000007u,c->r[0]); // 801CA9A4
  c->r[7]=c->r[7]+0x00000008u; // 801CA9A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA960; } // 801CA9AC
L_801CA9B0:;
  c->r[0]=c->r[31]-c->r[8]; // 801CA9B0
  c->r[3]=c->r[30]+c->r[8]; // 801CA9B4
  c->ctr=c->r[0]; // 801CA9B8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[31]); // 801CA9BC
  if (!crb(c,0)) { goto L_801CA9D8; } // 801CA9C0
L_801CA9C4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CA9C4
  c->r[3]=c->r[3]+0x00000001u; // 801CA9C8
  W8(c->r[7]+0x00000000u,c->r[0]); // 801CA9CC
  c->r[7]=c->r[7]+0x00000001u; // 801CA9D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA9C4; } // 801CA9D4
L_801CA9D8:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA9D8
  c->r[4]=0u+0x00000000u; // 801CA9DC
  c->lr=0x801CA9E4u; f_801C7CD0(c); // 801CA9E0
L_801CA9E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA9E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CA9E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CA9EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CA9F0
  c->lr=c->r[0]; // 801CA9F4
  c->r[1]=c->r[1]+0x00000020u; // 801CA9F8
  return; // 801CA9FC
}

// l2cu_send_peer_info_rsp
void f_801CAA00(Ctx* __restrict c) {
  trace_call(0x801CAA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAA00
  c->r[0]=c->lr; // 801CAA04
  c->r[6]=c->r[4]|c->r[4]; // 801CAA08
  c->r[4]=0u+0x00000004u; // 801CAA0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAA10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAA14
  c->r[31]=c->r[5]|c->r[5]; // 801CAA18
  c->r[5]=0u+0x0000000Bu; // 801CAA1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAA20
  c->r[30]=c->r[3]|c->r[3]; // 801CAA24
  c->r[3]=R16(c->r[3]+0x00000028u); // 801CAA28
  c->lr=0x801CAA30u; f_801C99A0(c); // 801CAA2C
  cmps(c,0,(int32_t)c->r[3],0); // 801CAA30
  if (!crb(c,2)) { goto L_801CAA60; } // 801CAA34
  c->r[3]=0u+0x803D0000u; // 801CAA38
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CAA3C
  cmpu(c,0,c->r[0],0x00000002u); // 801CAA40
  if (crb(c,0)) { goto L_801CAA8C; } // 801CAA44
  c->r[3]=0u+0x00080000u; // 801CAA48
  c->r[4]=0u+0x80330000u; // 801CAA4C
  c->r[3]=c->r[3]+0x00000001u; // 801CAA50
  c->r[4]=c->r[4]+0x0000583Cu; // 801CAA54
  c->lr=0x801CAA5Cu; f_801ACB20(c); // 801CAA58
  goto L_801CAA8C; // 801CAA5C
L_801CAA60:;
  W8(c->r[3]+0x00000014u,c->r[31]); // 801CAA60
  c->r[4]=rotl(c->r[31],24)&0x000000FFu; // 801CAA64
  c->r[6]=0u+0x00000001u; // 801CAA68
  c->r[0]=0u+0x00000000u; // 801CAA6C
  W8(c->r[3]+0x00000015u,c->r[4]); // 801CAA70
  c->r[5]=c->r[3]|c->r[3]; // 801CAA74
  c->r[4]=0u+0x00000000u; // 801CAA78
  W8(c->r[3]+0x00000016u,c->r[6]); // 801CAA7C
  W8(c->r[3]+0x00000017u,c->r[0]); // 801CAA80
  c->r[3]=c->r[30]|c->r[30]; // 801CAA84
  c->lr=0x801CAA8Cu; f_801C7CD0(c); // 801CAA88
L_801CAA8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAA8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAA90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAA94
  c->lr=c->r[0]; // 801CAA98
  c->r[1]=c->r[1]+0x00000010u; // 801CAA9C
  return; // 801CAAA0
}

// l2cu_allocate_ccb
void f_801CAAA4(Ctx* __restrict c) {
  trace_call(0x801CAAA4u);
  c->r[7]=0u+0x803D0000u; // 801CAAA4
  c->r[7]=c->r[7]+0xFFFFB1E0u; // 801CAAA8
  c->r[8]=R32(c->r[7]+0x000007B0u); // 801CAAAC
  cmps(c,0,(int32_t)c->r[8],0); // 801CAAB0
  if (!crb(c,2)) { goto L_801CAAC0; } // 801CAAB4
  c->r[3]=0u+0x00000000u; // 801CAAB8
  return; // 801CAABC
L_801CAAC0:;
  c->r[0]=c->r[7]+0x00000178u; // 801CAAC0
  c->r[4]=0u+0x84210000u; // 801CAAC4
  c->r[0]=c->r[8]-c->r[0]; // 801CAAC8
  c->r[6]=R32(c->r[8]+0x00000008u); // 801CAACC
  c->r[4]=c->r[4]+0x00000843u; // 801CAAD0
  c->r[5]=0u+0x00000001u; // 801CAAD4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801CAAD8
  W32(c->r[7]+0x000007B0u,c->r[6]); // 801CAADC
  W8(c->r[8]+0x00000000u,c->r[5]); // 801CAAE0
  c->r[0]=c->r[4]+c->r[0]; // 801CAAE4
  c->r[0]=sraw(c,c->r[0],6); // 801CAAE8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801CAAEC
  c->r[0]=c->r[0]+c->r[4]; // 801CAAF0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CAAF4
  c->r[0]=c->r[4]+0x00000040u; // 801CAAF8
  W16(c->r[8]+0x00000014u,c->r[0]); // 801CAAFC
  W32(c->r[8]+0x00000010u,c->r[3]); // 801CAB00
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CAB04
  cmps(c,0,(int32_t)c->r[0],0); // 801CAB08
  if (!crb(c,2)) { goto L_801CAB28; } // 801CAB0C
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 801CAB10
  c->r[0]=0u+0x00000000u; // 801CAB14
  W32(c->r[3]+0x00000008u,c->r[8]); // 801CAB18
  W32(c->r[8]+0x00000008u,c->r[0]); // 801CAB1C
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 801CAB20
  goto L_801CAB44; // 801CAB24
L_801CAB28:;
  c->r[0]=0u+0x00000000u; // 801CAB28
  W32(c->r[8]+0x00000008u,c->r[0]); // 801CAB2C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801CAB30
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 801CAB34
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801CAB38
  W32(c->r[4]+0x00000008u,c->r[8]); // 801CAB3C
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 801CAB40
L_801CAB44:;
  c->r[3]=0u+0x00010000u; // 801CAB44
  c->r[6]=0u+0x000002A0u; // 801CAB48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CAB4C
  c->r[5]=0u+0x00000001u; // 801CAB50
  W16(c->r[8]+0x0000003Cu,c->r[0]); // 801CAB54
  c->r[4]=0u+0x00000000u; // 801CAB58
  c->r[0]=0u+0xFFFFFFFFu; // 801CAB5C
  c->r[3]=c->r[8]|c->r[8]; // 801CAB60
  W16(c->r[8]+0x0000003Au,c->r[6]); // 801CAB64
  W16(c->r[8]+0x00000038u,c->r[6]); // 801CAB68
  W8(c->r[8]+0x00000059u,c->r[5]); // 801CAB6C
  W8(c->r[8]+0x00000041u,c->r[5]); // 801CAB70
  W32(c->r[8]+0x0000005Cu,c->r[4]); // 801CAB74
  W32(c->r[8]+0x00000044u,c->r[4]); // 801CAB78
  W32(c->r[8]+0x00000060u,c->r[4]); // 801CAB7C
  W32(c->r[8]+0x00000048u,c->r[4]); // 801CAB80
  W32(c->r[8]+0x00000064u,c->r[4]); // 801CAB84
  W32(c->r[8]+0x0000004Cu,c->r[4]); // 801CAB88
  W32(c->r[8]+0x00000068u,c->r[0]); // 801CAB8C
  W32(c->r[8]+0x00000050u,c->r[0]); // 801CAB90
  W32(c->r[8]+0x0000006Cu,c->r[0]); // 801CAB94
  W32(c->r[8]+0x00000054u,c->r[0]); // 801CAB98
  W8(c->r[8]+0x00000034u,c->r[4]); // 801CAB9C
  W32(c->r[8]+0x00000004u,c->r[4]); // 801CABA0
  W8(c->r[8]+0x00000037u,c->r[5]); // 801CABA4
  W32(c->r[8]+0x00000028u,c->r[8]); // 801CABA8
  return; // 801CABAC
}

// l2cu_release_ccb
void f_801CABB0(Ctx* __restrict c) {
  trace_call(0x801CABB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CABB0
  c->r[0]=c->lr; // 801CABB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CABB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CABBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CABC0
  c->r[30]=c->r[3]|c->r[3]; // 801CABC4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CABC8
  c->r[31]=R32(c->r[3]+0x00000010u); // 801CABCC
  cmps(c,0,(int32_t)c->r[0],0); // 801CABD0
  if (crb(c,2)) { goto L_801CAD3C; } // 801CABD4
  c->r[0]=0u+0x00000000u; // 801CABD8
  W8(c->r[3]+0x00000000u,c->r[0]); // 801CABDC
  c->r[3]=c->r[3]+0x00000018u; // 801CABE0
  c->lr=0x801CABE8u; f_801AD15C(c); // 801CABE4
  goto L_801CABF8; // 801CABE8
L_801CABEC:;
  c->r[3]=c->r[30]+0x00000070u; // 801CABEC
  c->lr=0x801CABF4u; f_801AA8C4(c); // 801CABF0
  c->lr=0x801CABF8u; f_801AA228(c); // 801CABF4
L_801CABF8:;
  c->r[0]=R32(c->r[30]+0x00000070u); // 801CABF8
  cmps(c,0,(int32_t)c->r[0],0); // 801CABFC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CABEC; } // 801CAC00
  c->r[4]=0u+0x00000000u; // 801CAC04
  W32(c->r[30]+0x00000010u,c->r[4]); // 801CAC08
  c->r[0]=R32(c->r[31]+0x00000008u); // 801CAC0C
  cmpu(c,0,c->r[0],c->r[30]); // 801CAC10
  if (!crb(c,2)) { goto L_801CAC30; } // 801CAC14
  c->r[3]=R32(c->r[30]+0x00000008u); // 801CAC18
  cmps(c,0,(int32_t)c->r[3],0); // 801CAC1C
  W32(c->r[31]+0x00000008u,c->r[3]); // 801CAC20
  if (crb(c,2)) { goto L_801CAC64; } // 801CAC24
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801CAC28
  goto L_801CAC64; // 801CAC2C
L_801CAC30:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801CAC30
  cmpu(c,0,c->r[0],c->r[30]); // 801CAC34
  if (!crb(c,2)) { goto L_801CAC4C; } // 801CAC38
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801CAC3C
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801CAC40
  W32(c->r[3]+0x00000008u,c->r[4]); // 801CAC44
  goto L_801CAC64; // 801CAC48
L_801CAC4C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801CAC4C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801CAC50
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CAC54
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801CAC58
  c->r[3]=R32(c->r[30]+0x00000008u); // 801CAC5C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801CAC60
L_801CAC64:;
  c->r[4]=0u+0x803D0000u; // 801CAC64
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801CAC68
  c->r[0]=R32(c->r[4]+0x000007B0u); // 801CAC6C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAC70
  if (!crb(c,2)) { goto L_801CAC90; } // 801CAC74
  W32(c->r[4]+0x000007B0u,c->r[30]); // 801CAC78
  c->r[0]=0u+0x00000000u; // 801CAC7C
  W32(c->r[4]+0x000007B4u,c->r[30]); // 801CAC80
  W32(c->r[30]+0x00000008u,c->r[0]); // 801CAC84
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801CAC88
  goto L_801CACAC; // 801CAC8C
L_801CAC90:;
  c->r[0]=0u+0x00000000u; // 801CAC90
  W32(c->r[30]+0x00000008u,c->r[0]); // 801CAC94
  c->r[0]=R32(c->r[4]+0x000007B4u); // 801CAC98
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801CAC9C
  c->r[3]=R32(c->r[4]+0x000007B4u); // 801CACA0
  W32(c->r[3]+0x00000008u,c->r[30]); // 801CACA4
  W32(c->r[4]+0x000007B4u,c->r[30]); // 801CACA8
L_801CACAC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801CACAC
  cmps(c,0,(int32_t)c->r[0],0); // 801CACB0
  if (crb(c,2)) { goto L_801CAD3C; } // 801CACB4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801CACB8
  cmps(c,0,(int32_t)c->r[0],4); // 801CACBC
  if (!crb(c,2)) { goto L_801CAD3C; } // 801CACC0
  c->r[0]=R32(c->r[31]+0x00000008u); // 801CACC4
  cmps(c,0,(int32_t)c->r[0],0); // 801CACC8
  if (!crb(c,2)) { goto L_801CAD3C; } // 801CACCC
  c->r[3]=R16(c->r[31]+0x00000058u); // 801CACD0
  cmps(c,0,(int32_t)c->r[3],0); // 801CACD4
  if (!crb(c,2)) { goto L_801CAD24; } // 801CACD8
  c->r[3]=R16(c->r[31]+0x00000028u); // 801CACDC
  c->r[4]=0u+0x00000013u; // 801CACE0
  c->lr=0x801CACE8u; f_801BC588(c); // 801CACE4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CACE8
  cmpu(c,0,c->r[0],0x00000001u); // 801CACEC
  if (!crb(c,2)) { goto L_801CAD04; } // 801CACF0
  c->r[0]=0u+0x00000005u; // 801CACF4
  c->r[3]=0u+0x0000001Eu; // 801CACF8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CACFC
  goto L_801CAD24; // 801CAD00
L_801CAD04:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CAD04
  if (!crb(c,2)) { goto L_801CAD20; } // 801CAD08
  c->r[0]=0u+0x00000005u; // 801CAD0C
  c->r[3]=0u+0x00010000u; // 801CAD10
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CAD14
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801CAD18
  goto L_801CAD24; // 801CAD1C
L_801CAD20:;
  c->r[3]=0u+0x00000001u; // 801CAD20
L_801CAD24:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801CAD24
  cmpu(c,0,c->r[5],0x0000FFFFu); // 801CAD28
  if (crb(c,2)) { goto L_801CAD3C; } // 801CAD2C
  c->r[3]=c->r[31]+0x00000010u; // 801CAD30
  c->r[4]=0u+0x00000002u; // 801CAD34
  c->lr=0x801CAD3Cu; f_801AD0EC(c); // 801CAD38
L_801CAD3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAD3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAD40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAD44
  c->lr=c->r[0]; // 801CAD48
  c->r[1]=c->r[1]+0x00000010u; // 801CAD4C
  return; // 801CAD50
}

// l2cu_find_ccb_by_cid
void f_801CAD54(Ctx* __restrict c) {
  trace_call(0x801CAD54u);
  cmpu(c,0,c->r[4],0x00000040u); // 801CAD54
  c->r[5]=0u+0x00000000u; // 801CAD58
  if (crb(c,0)) { goto L_801CADA8; } // 801CAD5C
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801CAD60
  c->r[4]=0u+0x803D0000u; // 801CAD64
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CAD68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)124); // 801CAD6C
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801CAD70
  c->r[4]=c->r[4]+c->r[0]; // 801CAD74
  c->r[0]=R8(c->r[4]+0x00000178u); // 801CAD78
  c->r[5]=c->r[4]+0x00000178u; // 801CAD7C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAD80
  if (!crb(c,2)) { goto L_801CAD90; } // 801CAD84
  c->r[5]=0u+0x00000000u; // 801CAD88
  goto L_801CADA8; // 801CAD8C
L_801CAD90:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CAD90
  if (crb(c,2)) { goto L_801CADA8; } // 801CAD94
  c->r[0]=R32(c->r[5]+0x00000010u); // 801CAD98
  cmpu(c,0,c->r[3],c->r[0]); // 801CAD9C
  if (crb(c,2)) { goto L_801CADA8; } // 801CADA0
  c->r[5]=0u+0x00000000u; // 801CADA4
L_801CADA8:;
  c->r[3]=c->r[5]|c->r[5]; // 801CADA8
  return; // 801CADAC
}

// l2cu_allocate_rcb
void f_801CADB0(Ctx* __restrict c) {
  trace_call(0x801CADB0u);
  c->r[4]=0u+0x803D0000u; // 801CADB0
  c->r[0]=0u+0x00000008u; // 801CADB4
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801CADB8
  c->r[5]=0u+0x00000000u; // 801CADBC
  c->r[4]=c->r[4]+0x00000650u; // 801CADC0
  c->ctr=c->r[0]; // 801CADC4
L_801CADC8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801CADC8
  cmps(c,0,(int32_t)c->r[0],0); // 801CADCC
  if (!crb(c,2)) { goto L_801CADE8; } // 801CADD0
  c->r[0]=0u+0x00000001u; // 801CADD4
  W8(c->r[4]+0x00000000u,c->r[0]); // 801CADD8
  W16(c->r[4]+0x00000002u,c->r[3]); // 801CADDC
  c->r[3]=c->r[4]|c->r[4]; // 801CADE0
  return; // 801CADE4
L_801CADE8:;
  c->r[5]=c->r[5]+0x00000001u; // 801CADE8
  c->r[4]=c->r[4]+0x0000002Cu; // 801CADEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CADC8; } // 801CADF0
  c->r[3]=0u+0x00000000u; // 801CADF4
  return; // 801CADF8
}

// l2cu_release_rcb
void f_801CADFC(Ctx* __restrict c) {
  trace_call(0x801CADFCu);
  c->r[0]=0u+0x00000000u; // 801CADFC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801CAE00
  W16(c->r[3]+0x00000002u,c->r[0]); // 801CAE04
  return; // 801CAE08
}

// l2cu_find_rcb_by_psm
void f_801CAE0C(Ctx* __restrict c) {
  trace_call(0x801CAE0Cu);
  c->r[4]=0u+0x803D0000u; // 801CAE0C
  c->r[0]=0u+0x00000002u; // 801CAE10
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801CAE14
  c->r[5]=0u+0x00000000u; // 801CAE18
  c->r[4]=c->r[4]+0x00000650u; // 801CAE1C
  c->ctr=c->r[0]; // 801CAE20
L_801CAE24:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801CAE24
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE28
  if (crb(c,2)) { goto L_801CAE44; } // 801CAE2C
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CAE30
  cmpu(c,0,c->r[0],c->r[3]); // 801CAE34
  if (!crb(c,2)) { goto L_801CAE44; } // 801CAE38
  c->r[3]=c->r[4]|c->r[4]; // 801CAE3C
  return; // 801CAE40
L_801CAE44:;
  {uint32_t ea=c->r[4]+0x0000002Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801CAE44
  c->r[5]=c->r[5]+0x00000001u; // 801CAE48
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE4C
  if (crb(c,2)) { goto L_801CAE68; } // 801CAE50
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CAE54
  cmpu(c,0,c->r[0],c->r[3]); // 801CAE58
  if (!crb(c,2)) { goto L_801CAE68; } // 801CAE5C
  c->r[3]=c->r[4]|c->r[4]; // 801CAE60
  return; // 801CAE64
L_801CAE68:;
  {uint32_t ea=c->r[4]+0x0000002Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801CAE68
  c->r[5]=c->r[5]+0x00000001u; // 801CAE6C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE70
  if (crb(c,2)) { goto L_801CAE8C; } // 801CAE74
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CAE78
  cmpu(c,0,c->r[0],c->r[3]); // 801CAE7C
  if (!crb(c,2)) { goto L_801CAE8C; } // 801CAE80
  c->r[3]=c->r[4]|c->r[4]; // 801CAE84
  return; // 801CAE88
L_801CAE8C:;
  {uint32_t ea=c->r[4]+0x0000002Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801CAE8C
  c->r[5]=c->r[5]+0x00000001u; // 801CAE90
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE94
  if (crb(c,2)) { goto L_801CAEB0; } // 801CAE98
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CAE9C
  cmpu(c,0,c->r[0],c->r[3]); // 801CAEA0
  if (!crb(c,2)) { goto L_801CAEB0; } // 801CAEA4
  c->r[3]=c->r[4]|c->r[4]; // 801CAEA8
  return; // 801CAEAC
L_801CAEB0:;
  c->r[5]=c->r[5]+0x00000001u; // 801CAEB0
  c->r[4]=c->r[4]+0x0000002Cu; // 801CAEB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CAE24; } // 801CAEB8
  c->r[3]=0u+0x00000000u; // 801CAEBC
  return; // 801CAEC0
}

// l2cu_process_peer_cfg_req
void f_801CAEC4(Ctx* __restrict c) {
  trace_call(0x801CAEC4u);
  c->r[0]=R8(c->r[4]+0x00000002u); // 801CAEC4
  c->r[6]=0u+0x00000001u; // 801CAEC8
  c->r[7]=0u+0x00000001u; // 801CAECC
  c->r[8]=0u+0x00000001u; // 801CAED0
  cmps(c,0,(int32_t)c->r[0],0); // 801CAED4
  if (crb(c,2)) { goto L_801CAF10; } // 801CAED8
  c->r[0]=R16(c->r[4]+0x00000004u); // 801CAEDC
  cmpu(c,0,c->r[0],0x00000030u); // 801CAEE0
  if (crb(c,0)) { goto L_801CAF04; } // 801CAEE4
  cmpu(c,0,c->r[0],0x0000069Bu); // 801CAEE8
  W16(c->r[3]+0x0000003Au,c->r[0]); // 801CAEEC
  if (!crb(c,1)) { goto L_801CAF10; } // 801CAEF0
  c->r[0]=0u+0x0000069Bu; // 801CAEF4
  W16(c->r[4]+0x00000004u,c->r[0]); // 801CAEF8
  W16(c->r[3]+0x0000003Au,c->r[0]); // 801CAEFC
  goto L_801CAF10; // 801CAF00
L_801CAF04:;
  c->r[0]=0u+0x00000030u; // 801CAF04
  c->r[6]=0u+0x00000000u; // 801CAF08
  W16(c->r[4]+0x00000004u,c->r[0]); // 801CAF0C
L_801CAF10:;
  c->r[0]=R8(c->r[4]+0x00000020u); // 801CAF10
  cmps(c,0,(int32_t)c->r[0],0); // 801CAF14
  if (crb(c,2)) { goto L_801CAF38; } // 801CAF18
  c->r[0]=R16(c->r[4]+0x00000022u); // 801CAF1C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAF20
  if (!crb(c,2)) { goto L_801CAF38; } // 801CAF24
  c->r[5]=0u+0x00010000u; // 801CAF28
  c->r[8]=0u+0x00000000u; // 801CAF2C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801CAF30
  W16(c->r[4]+0x00000022u,c->r[0]); // 801CAF34
L_801CAF38:;
  c->r[0]=R8(c->r[4]+0x00000006u); // 801CAF38
  cmps(c,0,(int32_t)c->r[0],0); // 801CAF3C
  if (crb(c,2)) { goto L_801CAF90; } // 801CAF40
  c->r[0]=R8(c->r[4]+0x00000009u); // 801CAF44
  cmpu(c,0,c->r[0],0x00000002u); // 801CAF48
  if (crb(c,1)) { goto L_801CAF84; } // 801CAF4C
  c->r[5]=R32(c->r[4]+0x00000008u); // 801CAF50
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801CAF54
  W32(c->r[3]+0x00000040u,c->r[5]); // 801CAF58
  W32(c->r[3]+0x00000044u,c->r[0]); // 801CAF5C
  c->r[5]=R32(c->r[4]+0x00000010u); // 801CAF60
  c->r[0]=R32(c->r[4]+0x00000014u); // 801CAF64
  W32(c->r[3]+0x00000048u,c->r[5]); // 801CAF68
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801CAF6C
  c->r[5]=R32(c->r[4]+0x00000018u); // 801CAF70
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801CAF74
  W32(c->r[3]+0x00000050u,c->r[5]); // 801CAF78
  W32(c->r[3]+0x00000054u,c->r[0]); // 801CAF7C
  goto L_801CAF90; // 801CAF80
L_801CAF84:;
  c->r[0]=0u+0x00000001u; // 801CAF84
  c->r[7]=0u+0x00000000u; // 801CAF88
  W8(c->r[4]+0x00000009u,c->r[0]); // 801CAF8C
L_801CAF90:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CAF90
  c->r[3]=0u+0x00000000u; // 801CAF94
  c->r[0]=0u+0x00000000u; // 801CAF98
  if (crb(c,2)) { goto L_801CAFB4; } // 801CAF9C
  cmps(c,0,(int32_t)c->r[8],0); // 801CAFA0
  if (crb(c,2)) { goto L_801CAFB4; } // 801CAFA4
  cmps(c,0,(int32_t)c->r[7],0); // 801CAFA8
  if (crb(c,2)) { goto L_801CAFB4; } // 801CAFAC
  c->r[0]=0u+0x00000001u; // 801CAFB0
L_801CAFB4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CAFB4
  if (crb(c,2)) { goto L_801CAFC0; } // 801CAFB8
  c->r[3]=0u+0x00000001u; // 801CAFBC
L_801CAFC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CAFC0
  if (!crb(c,2)) return; // 801CAFC4
  c->r[0]=0u+0x00000001u; // 801CAFC8
  cmps(c,0,(int32_t)c->r[6],0); // 801CAFCC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801CAFD0
  if (crb(c,2)) { goto L_801CAFE0; } // 801CAFD4
  c->r[0]=0u+0x00000000u; // 801CAFD8
  W8(c->r[4]+0x00000002u,c->r[0]); // 801CAFDC
L_801CAFE0:;
  cmps(c,0,(int32_t)c->r[8],0); // 801CAFE0
  if (crb(c,2)) { goto L_801CAFF0; } // 801CAFE4
  c->r[0]=0u+0x00000000u; // 801CAFE8
  W8(c->r[4]+0x00000020u,c->r[0]); // 801CAFEC
L_801CAFF0:;
  cmps(c,0,(int32_t)c->r[7],0); // 801CAFF0
  if (crb(c,2)) { goto L_801CB000; } // 801CAFF4
  c->r[0]=0u+0x00000000u; // 801CAFF8
  W8(c->r[4]+0x00000006u,c->r[0]); // 801CAFFC
L_801CB000:;
  c->r[0]=0u+0x00000000u; // 801CB000
  W8(c->r[4]+0x00000024u,c->r[0]); // 801CB004
  return; // 801CB008
}

// l2cu_process_peer_cfg_rsp
void f_801CB00C(Ctx* __restrict c) {
  trace_call(0x801CB00Cu);
  c->r[0]=R8(c->r[4]+0x00000006u); // 801CB00C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB010
  if (crb(c,2)) return; // 801CB014
  c->r[5]=R32(c->r[4]+0x00000008u); // 801CB018
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801CB01C
  W32(c->r[3]+0x00000058u,c->r[5]); // 801CB020
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801CB024
  c->r[5]=R32(c->r[4]+0x00000010u); // 801CB028
  c->r[0]=R32(c->r[4]+0x00000014u); // 801CB02C
  W32(c->r[3]+0x00000060u,c->r[5]); // 801CB030
  W32(c->r[3]+0x00000064u,c->r[0]); // 801CB034
  c->r[5]=R32(c->r[4]+0x00000018u); // 801CB038
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801CB03C
  W32(c->r[3]+0x00000068u,c->r[5]); // 801CB040
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801CB044
  return; // 801CB048
}

// l2cu_process_our_cfg_req
void f_801CB04C(Ctx* __restrict c) {
  trace_call(0x801CB04Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB04C
  c->r[0]=c->lr; // 801CB050
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB054
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB058
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB05C
  c->r[0]=R8(c->r[4]+0x00000002u); // 801CB060
  cmps(c,0,(int32_t)c->r[0],0); // 801CB064
  if (crb(c,2)) { goto L_801CB088; } // 801CB068
  c->r[0]=R16(c->r[4]+0x00000004u); // 801CB06C
  cmpu(c,0,c->r[0],0x0000069Bu); // 801CB070
  W16(c->r[3]+0x00000038u,c->r[0]); // 801CB074
  if (!crb(c,1)) { goto L_801CB088; } // 801CB078
  c->r[0]=0u+0x0000069Bu; // 801CB07C
  W16(c->r[4]+0x00000004u,c->r[0]); // 801CB080
  W16(c->r[3]+0x00000038u,c->r[0]); // 801CB084
L_801CB088:;
  c->r[0]=R8(c->r[4]+0x00000006u); // 801CB088
  cmps(c,0,(int32_t)c->r[0],0); // 801CB08C
  if (crb(c,2)) { goto L_801CB0C4; } // 801CB090
  c->r[5]=R32(c->r[4]+0x00000008u); // 801CB094
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801CB098
  W32(c->r[3]+0x00000058u,c->r[5]); // 801CB09C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801CB0A0
  c->r[5]=R32(c->r[4]+0x00000010u); // 801CB0A4
  c->r[0]=R32(c->r[4]+0x00000014u); // 801CB0A8
  W32(c->r[3]+0x00000060u,c->r[5]); // 801CB0AC
  W32(c->r[3]+0x00000064u,c->r[0]); // 801CB0B0
  c->r[5]=R32(c->r[4]+0x00000018u); // 801CB0B4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801CB0B8
  W32(c->r[3]+0x00000068u,c->r[5]); // 801CB0BC
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801CB0C0
L_801CB0C4:;
  c->r[0]=R8(c->r[4]+0x00000020u); // 801CB0C4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB0C8
  if (crb(c,2)) { goto L_801CB144; } // 801CB0CC
  c->r[0]=R16(c->r[4]+0x00000022u); // 801CB0D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CB0D4
  if (crb(c,2)) { goto L_801CB144; } // 801CB0D8
  W16(c->r[3]+0x0000003Cu,c->r[0]); // 801CB0DC
  c->r[31]=R32(c->r[3]+0x00000010u); // 801CB0E0
  c->r[3]=R16(c->r[4]+0x00000022u); // 801CB0E4
  c->r[0]=R16(c->r[31]+0x00000032u); // 801CB0E8
  cmpu(c,0,c->r[3],c->r[0]); // 801CB0EC
  if (!crb(c,0)) { goto L_801CB144; } // 801CB0F0
  W16(c->r[31]+0x00000032u,c->r[3]); // 801CB0F4
  c->r[0]=R16(c->r[4]+0x00000022u); // 801CB0F8
  cmpu(c,0,c->r[0],0x000004FFu); // 801CB0FC
  if (crb(c,1)) { goto L_801CB144; } // 801CB100
  c->r[3]=rotl(c->r[0],3)&0x0007FFF8u; // 801CB104
  c->r[4]=0u+0x66660000u; // 801CB108
  c->r[0]=c->r[3]+0x00000003u; // 801CB10C
  c->r[4]=c->r[4]+0x00006667u; // 801CB110
  c->r[3]=0u+0x00000002u; // 801CB114
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801CB118
  c->r[0]=sraw(c,c->r[0],1); // 801CB11C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801CB120
  c->r[0]=c->r[0]+c->r[4]; // 801CB124
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB128
  c->lr=0x801CB130u; f_801AA140(c); // 801CB12C
  cmps(c,0,(int32_t)c->r[3],0); // 801CB130
  if (crb(c,2)) { goto L_801CB144; } // 801CB134
  c->r[4]=R16(c->r[31]+0x00000028u); // 801CB138
  c->r[5]=c->r[30]|c->r[30]; // 801CB13C
  c->lr=0x801CB144u; f_801C1734(c); // 801CB140
L_801CB144:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB148
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB14C
  c->lr=c->r[0]; // 801CB150
  c->r[1]=c->r[1]+0x00000010u; // 801CB154
  return; // 801CB158
}

// l2cu_process_our_cfg_rsp
void f_801CB15C(Ctx* __restrict c) {
  trace_call(0x801CB15Cu);
  c->r[0]=R8(c->r[4]+0x00000006u); // 801CB15C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB160
  if (crb(c,2)) return; // 801CB164
  c->r[5]=R32(c->r[4]+0x00000008u); // 801CB168
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801CB16C
  W32(c->r[3]+0x00000040u,c->r[5]); // 801CB170
  W32(c->r[3]+0x00000044u,c->r[0]); // 801CB174
  c->r[5]=R32(c->r[4]+0x00000010u); // 801CB178
  c->r[0]=R32(c->r[4]+0x00000014u); // 801CB17C
  W32(c->r[3]+0x00000048u,c->r[5]); // 801CB180
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801CB184
  c->r[5]=R32(c->r[4]+0x00000018u); // 801CB188
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801CB18C
  W32(c->r[3]+0x00000050u,c->r[5]); // 801CB190
  W32(c->r[3]+0x00000054u,c->r[0]); // 801CB194
  return; // 801CB198
}

// l2cu_device_reset
void f_801CB19C(Ctx* __restrict c) {
  trace_call(0x801CB19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB19C
  c->r[0]=c->lr; // 801CB1A0
  c->r[3]=0u+0x803D0000u; // 801CB1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB1A8
  c->r[3]=c->r[3]+0xFFFFB1E0u; // 801CB1AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB1B0
  c->r[31]=0u+0x00000000u; // 801CB1B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB1B8
  c->r[30]=c->r[3]+0x00000008u; // 801CB1BC
L_801CB1C0:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801CB1C0
  cmps(c,0,(int32_t)c->r[0],0); // 801CB1C4
  if (crb(c,2)) { goto L_801CB1E0; } // 801CB1C8
  c->r[3]=R16(c->r[30]+0x00000028u); // 801CB1CC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 801CB1D0
  if (crb(c,2)) { goto L_801CB1E0; } // 801CB1D4
  c->r[4]=0u+0x000000FFu; // 801CB1D8
  c->lr=0x801CB1E0u; f_801C7928(c); // 801CB1DC
L_801CB1E0:;
  c->r[31]=c->r[31]+0x00000001u; // 801CB1E0
  c->r[30]=c->r[30]+0x0000005Cu; // 801CB1E4
  cmps(c,0,(int32_t)c->r[31],4); // 801CB1E8
  if (crb(c,0)) { IRQCHK(c); goto L_801CB1C0; } // 801CB1EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB1F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB1F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB1F8
  c->lr=c->r[0]; // 801CB1FC
  c->r[1]=c->r[1]+0x00000010u; // 801CB200
  return; // 801CB204
}

// l2cu_create_conn
void f_801CB208(Ctx* __restrict c) {
  trace_call(0x801CB208u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB208
  c->r[0]=c->lr; // 801CB20C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CB210
  c->r[11]=c->r[1]+0x00000030u; // 801CB214
  c->lr=0x801CB21Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB218
  c->r[0]=0u+0x00000003u; // 801CB21C
  c->r[26]=0u+0x803D0000u; // 801CB220
  c->r[4]=c->r[26]+0xFFFFB1E0u; // 801CB224
  c->r[30]=0u+0x803D0000u; // 801CB228
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CB22C
  c->r[31]=c->r[3]|c->r[3]; // 801CB230
  c->r[24]=c->r[4]+0x00000008u; // 801CB234
  c->r[30]=c->r[30]+0xFFFF8118u; // 801CB238
  c->r[25]=0u+0x00000000u; // 801CB23C
  c->r[28]=0u+0x00080000u; // 801CB240
  c->r[29]=0u+0x80330000u; // 801CB244
L_801CB248:;
  cmpu(c,0,c->r[24],c->r[31]); // 801CB248
  if (crb(c,2)) { goto L_801CB2F0; } // 801CB24C
  c->r[0]=R8(c->r[24]+0x00000000u); // 801CB250
  cmps(c,0,(int32_t)c->r[0],0); // 801CB254
  if (crb(c,2)) { goto L_801CB2F0; } // 801CB258
  c->r[0]=R8(c->r[24]+0x00000030u); // 801CB25C
  cmpu(c,0,c->r[0],0x00000001u); // 801CB260
  if (!crb(c,2)) { goto L_801CB2F0; } // 801CB264
  c->r[3]=c->r[24]+0x0000002Au; // 801CB268
  c->lr=0x801CB270u; f_801BA440(c); // 801CB26C
  c->r[0]=R8(c->r[26]+0xFFFFB1E0u); // 801CB270
  c->r[27]=c->r[3]|c->r[3]; // 801CB274
  cmpu(c,0,c->r[0],0x00000003u); // 801CB278
  if (crb(c,0)) { goto L_801CB2A0; } // 801CB27C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801CB280
  c->r[3]=c->r[28]+0x00000002u; // 801CB284
  cmpu(c,0,c->r[0],0x00000001u); // 801CB288
  c->r[4]=c->r[29]+0x0000589Cu; // 801CB28C
  c->r[5]=c->r[13]+0xFFFF94B0u; // 801CB290
  if (!crb(c,2)) { goto L_801CB29C; } // 801CB294
  c->r[5]=c->r[13]+0xFFFF94A8u; // 801CB298
L_801CB29C:;
  c->lr=0x801CB2A0u; f_801ACB38(c); // 801CB29C
L_801CB2A0:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801CB2A0
  cmpu(c,0,c->r[0],0x00000001u); // 801CB2A4
  if (crb(c,2)) { goto L_801CB2F0; } // 801CB2A8
  c->r[0]=R8(c->r[30]+0x00000640u); // 801CB2AC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801CB2B0
  if (crb(c,2)) { goto L_801CB2F0; } // 801CB2B4
  c->r[3]=0u+0x00000002u; // 801CB2B8
  c->r[0]=0u+0x00000000u; // 801CB2BC
  W32(c->r[31]+0x00000004u,c->r[3]); // 801CB2C0
  c->r[3]=c->r[24]+0x0000002Au; // 801CB2C4
  c->r[4]=0u+0x00000000u; // 801CB2C8
  c->r[5]=0u+0x00000000u; // 801CB2CC
  W8(c->r[31]+0x00000030u,c->r[0]); // 801CB2D0
  c->lr=0x801CB2D8u; f_801B3518(c); // 801CB2D4
  c->r[3]=c->r[31]+0x00000010u; // 801CB2D8
  c->r[4]=0u+0x00000002u; // 801CB2DC
  c->r[5]=0u+0x0000000Au; // 801CB2E0
  c->lr=0x801CB2E8u; f_801AD0EC(c); // 801CB2E4
  c->r[3]=0u+0x00000001u; // 801CB2E8
  goto L_801CB308; // 801CB2EC
L_801CB2F0:;
  c->r[25]=c->r[25]+0x00000001u; // 801CB2F0
  c->r[24]=c->r[24]+0x0000005Cu; // 801CB2F4
  cmps(c,0,(int32_t)c->r[25],4); // 801CB2F8
  if (crb(c,0)) { IRQCHK(c); goto L_801CB248; } // 801CB2FC
  c->r[3]=c->r[31]|c->r[31]; // 801CB300
  c->lr=0x801CB308u; f_801CB320(c); // 801CB304
L_801CB308:;
  c->r[11]=c->r[1]+0x00000030u; // 801CB308
  c->lr=0x801CB310u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB30C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CB310
  c->lr=c->r[0]; // 801CB314
  c->r[1]=c->r[1]+0x00000030u; // 801CB318
  return; // 801CB31C
}

// l2cu_create_conn_after_switch
void f_801CB320(Ctx* __restrict c) {
  trace_call(0x801CB320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB320
  c->r[0]=c->lr; // 801CB324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB32C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB330
  c->r[30]=c->r[3]|c->r[3]; // 801CB334
  c->lr=0x801CB33Cu; f_801B6570(c); // 801CB338
  c->r[4]=R8(c->r[3]+0x00000000u); // 801CB33C
  c->r[0]=0u+0x00000003u; // 801CB340
  c->r[3]=c->r[30]+0x0000002Au; // 801CB344
  W32(c->r[30]+0x00000004u,c->r[0]); // 801CB348
  c->r[31]=rotl(c->r[4],27)&0x00000001u; // 801CB34C
  c->lr=0x801CB354u; f_801B7938(c); // 801CB350
  cmps(c,0,(int32_t)c->r[3],0); // 801CB354
  if (crb(c,2)) { goto L_801CB370; } // 801CB358
  c->r[0]=R16(c->r[3]+0x00000000u); // 801CB35C
  c->r[5]=R8(c->r[3]+0x0000000Bu); // 801CB360
  c->r[6]=R8(c->r[3]+0x0000000Du); // 801CB364
  c->r[7]=c->r[0]|0x00008000u; // 801CB368
  goto L_801CB37C; // 801CB36C
L_801CB370:;
  c->r[5]=0u+0x00000001u; // 801CB370
  c->r[6]=0u+0x00000000u; // 801CB374
  c->r[7]=0u+0x00000000u; // 801CB378
L_801CB37C:;
  c->r[8]=c->r[31]|c->r[31]; // 801CB37C
  c->r[3]=c->r[30]+0x0000002Au; // 801CB380
  c->r[4]=0u+0x00000018u; // 801CB384
  c->lr=0x801CB38Cu; f_801BFBC0(c); // 801CB388
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CB38C
  if (!crb(c,2)) { goto L_801CB3C4; } // 801CB390
  c->r[3]=0u+0x803D0000u; // 801CB394
  c->r[0]=R8(c->r[3]+0xFFFFB1E0u); // 801CB398
  cmpu(c,0,c->r[0],0x00000001u); // 801CB39C
  if (crb(c,0)) { goto L_801CB3B4; } // 801CB3A0
  c->r[4]=0u+0x80330000u; // 801CB3A4
  c->r[3]=0u+0x00080000u; // 801CB3A8
  c->r[4]=c->r[4]+0x000058E0u; // 801CB3AC
  c->lr=0x801CB3B4u; f_801ACB20(c); // 801CB3B0
L_801CB3B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801CB3B4
  c->lr=0x801CB3BCu; f_801C9778(c); // 801CB3B8
  c->r[3]=0u+0x00000000u; // 801CB3BC
  goto L_801CB3D8; // 801CB3C0
L_801CB3C4:;
  c->r[3]=c->r[30]+0x00000010u; // 801CB3C4
  c->r[4]=0u+0x00000002u; // 801CB3C8
  c->r[5]=0u+0x0000003Cu; // 801CB3CC
  c->lr=0x801CB3D4u; f_801AD0EC(c); // 801CB3D0
  c->r[3]=0u+0x00000001u; // 801CB3D4
L_801CB3D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB3D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB3DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB3E0
  c->lr=c->r[0]; // 801CB3E4
  c->r[1]=c->r[1]+0x00000010u; // 801CB3E8
  return; // 801CB3EC
}

// l2cu_find_lcb_by_state
void f_801CB3F0(Ctx* __restrict c) {
  trace_call(0x801CB3F0u);
  c->r[4]=0u+0x803D0000u; // 801CB3F0
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801CB3F4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R8(ea); c->r[4]=ea;} // 801CB3F8
  cmps(c,0,(int32_t)c->r[0],0); // 801CB3FC
  if (crb(c,2)) { goto L_801CB418; } // 801CB400
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CB404
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801CB408
  if (!crb(c,2)) { goto L_801CB418; } // 801CB40C
  c->r[3]=c->r[4]|c->r[4]; // 801CB410
  return; // 801CB414
L_801CB418:;
  {uint32_t ea=c->r[4]+0x0000005Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801CB418
  cmps(c,0,(int32_t)c->r[0],0); // 801CB41C
  if (crb(c,2)) { goto L_801CB438; } // 801CB420
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CB424
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801CB428
  if (!crb(c,2)) { goto L_801CB438; } // 801CB42C
  c->r[3]=c->r[4]|c->r[4]; // 801CB430
  return; // 801CB434
L_801CB438:;
  {uint32_t ea=c->r[4]+0x0000005Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801CB438
  cmps(c,0,(int32_t)c->r[0],0); // 801CB43C
  if (crb(c,2)) { goto L_801CB458; } // 801CB440
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CB444
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801CB448
  if (!crb(c,2)) { goto L_801CB458; } // 801CB44C
  c->r[3]=c->r[4]|c->r[4]; // 801CB450
  return; // 801CB454
L_801CB458:;
  {uint32_t ea=c->r[4]+0x0000005Cu; c->r[0]=R8(ea); c->r[4]=ea;} // 801CB458
  cmps(c,0,(int32_t)c->r[0],0); // 801CB45C
  if (crb(c,2)) { goto L_801CB478; } // 801CB460
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CB464
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801CB468
  if (!crb(c,2)) { goto L_801CB478; } // 801CB46C
  c->r[3]=c->r[4]|c->r[4]; // 801CB470
  return; // 801CB474
L_801CB478:;
  c->r[3]=0u+0x00000000u; // 801CB478
  return; // 801CB47C
}

// l2cu_lcb_disconnecting
void f_801CB480(Ctx* __restrict c) {
  trace_call(0x801CB480u);
  c->r[4]=0u+0x803D0000u; // 801CB480
  c->r[0]=0u+0x00000002u; // 801CB484
  c->r[4]=c->r[4]+0xFFFFB1E0u; // 801CB488
  c->r[3]=0u+0x00000000u; // 801CB48C
  c->r[5]=c->r[4]+0x00000008u; // 801CB490
  c->r[6]=0u+0x00000000u; // 801CB494
  c->ctr=c->r[0]; // 801CB498
L_801CB49C:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801CB49C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB4A0
  if (crb(c,2)) { goto L_801CB4F8; } // 801CB4A4
  c->r[4]=R32(c->r[5]+0x00000008u); // 801CB4A8
  cmps(c,0,(int32_t)c->r[4],0); // 801CB4AC
  if (crb(c,2)) { goto L_801CB4C0; } // 801CB4B0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801CB4B4
  cmps(c,0,(int32_t)c->r[0],5); // 801CB4B8
  if (!crb(c,2)) { goto L_801CB4C8; } // 801CB4BC
L_801CB4C0:;
  c->r[3]=0u+0x00000001u; // 801CB4C0
  return; // 801CB4C4
L_801CB4C8:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801CB4C8
  cmpu(c,0,c->r[4],c->r[0]); // 801CB4CC
  if (!crb(c,2)) { goto L_801CB4F8; } // 801CB4D0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801CB4D4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB4D8
  if (crb(c,2)) { goto L_801CB4F8; } // 801CB4DC
  c->r[4]=R32(c->r[4]+0x00000004u); // 801CB4E0
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 801CB4E4
  cmpu(c,0,c->r[0],0x00000001u); // 801CB4E8
  if (crb(c,1)) { goto L_801CB4F8; } // 801CB4EC
  c->r[3]=0u+0x00000001u; // 801CB4F0
  return; // 801CB4F4
L_801CB4F8:;
  c->r[0]=R8(c->r[5]+0x0000005Cu); // 801CB4F8
  c->r[6]=c->r[6]+0x00000001u; // 801CB4FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CB500
  if (crb(c,2)) { goto L_801CB558; } // 801CB504
  c->r[4]=R32(c->r[5]+0x00000064u); // 801CB508
  cmps(c,0,(int32_t)c->r[4],0); // 801CB50C
  if (crb(c,2)) { goto L_801CB520; } // 801CB510
  c->r[0]=R32(c->r[5]+0x00000060u); // 801CB514
  cmps(c,0,(int32_t)c->r[0],5); // 801CB518
  if (!crb(c,2)) { goto L_801CB528; } // 801CB51C
L_801CB520:;
  c->r[3]=0u+0x00000001u; // 801CB520
  return; // 801CB524
L_801CB528:;
  c->r[0]=R32(c->r[5]+0x00000068u); // 801CB528
  cmpu(c,0,c->r[4],c->r[0]); // 801CB52C
  if (!crb(c,2)) { goto L_801CB558; } // 801CB530
  c->r[0]=R8(c->r[4]+0x00000000u); // 801CB534
  cmps(c,0,(int32_t)c->r[0],0); // 801CB538
  if (crb(c,2)) { goto L_801CB558; } // 801CB53C
  c->r[4]=R32(c->r[4]+0x00000004u); // 801CB540
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 801CB544
  cmpu(c,0,c->r[0],0x00000001u); // 801CB548
  if (crb(c,1)) { goto L_801CB558; } // 801CB54C
  c->r[3]=0u+0x00000001u; // 801CB550
  return; // 801CB554
L_801CB558:;
  c->r[6]=c->r[6]+0x00000001u; // 801CB558
  c->r[5]=c->r[5]+0x000000B8u; // 801CB55C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB49C; } // 801CB560
  return; // 801CB564
}

// RFCOMM_Init
void f_801CB568(Ctx* __restrict c) {
  trace_call(0x801CB568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB568
  c->r[0]=c->lr; // 801CB56C
  c->r[4]=0u+0x00000000u; // 801CB570
  c->r[5]=0u+0x00000418u; // 801CB574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB57C
  c->r[31]=0u+0x803D0000u; // 801CB580
  c->r[3]=c->r[31]+0xFFFFB9C8u; // 801CB584
  c->lr=0x801CB58Cu; f_80004688(c); // 801CB588
  c->r[3]=c->r[31]+0xFFFFB9C8u; // 801CB58C
  c->r[4]=0u+0x00000001u; // 801CB590
  c->r[0]=0u+0x00000005u; // 801CB594
  W8(c->r[3]+0x00000065u,c->r[4]); // 801CB598
  W8(c->r[3]+0x00000414u,c->r[0]); // 801CB59C
  c->lr=0x801CB5A4u; f_801CCF8C(c); // 801CB5A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB5A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB5A8
  c->lr=c->r[0]; // 801CB5AC
  c->r[1]=c->r[1]+0x00000010u; // 801CB5B0
  return; // 801CB5B4
}

// PORT_StartCnf
void f_801CB5B8(Ctx* __restrict c) {
  trace_call(0x801CB5B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB5B8
  c->r[0]=c->lr; // 801CB5BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CB5C0
  c->r[11]=c->r[1]+0x00000040u; // 801CB5C4
  c->lr=0x801CB5CCu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB5C8
  c->r[5]=0u+0x803D0000u; // 801CB5CC
  c->r[29]=c->r[3]|c->r[3]; // 801CB5D0
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CB5D4
  c->r[30]=c->r[4]|c->r[4]; // 801CB5D8
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CB5DC
  c->r[31]=0u+0x00000001u; // 801CB5E0
  cmpu(c,0,c->r[0],0x00000004u); // 801CB5E4
  if (crb(c,0)) { goto L_801CB604; } // 801CB5E8
  c->r[3]=0u+0x00090000u; // 801CB5EC
  c->r[4]=0u+0x80330000u; // 801CB5F0
  c->r[5]=c->r[30]|c->r[30]; // 801CB5F4
  c->r[3]=c->r[3]+0x00000003u; // 801CB5F8
  c->r[4]=c->r[4]+0x00005940u; // 801CB5FC
  c->lr=0x801CB604u; f_801ACB38(c); // 801CB600
L_801CB604:;
  c->r[22]=0u+0x803D0000u; // 801CB604
  c->r[20]=0u+0x00000000u; // 801CB608
  c->r[22]=c->r[22]+0xFFFFB9C8u; // 801CB60C
  c->r[23]=0u+0x00090000u; // 801CB610
  c->r[24]=0u+0x80330000u; // 801CB614
  c->r[26]=0u+0x0000000Cu; // 801CB618
  c->r[21]=c->r[22]+0x00000068u; // 801CB61C
  c->r[25]=0u+0x00000018u; // 801CB620
  c->r[28]=0u+0x00010000u; // 801CB624
  c->r[27]=0u+0x00000000u; // 801CB628
L_801CB62C:;
  c->r[0]=R32(c->r[21]+0x0000006Cu); // 801CB62C
  cmpu(c,0,c->r[0],c->r[29]); // 801CB630
  if (!crb(c,2)) { goto L_801CB6E0; } // 801CB634
  cmps(c,0,(int32_t)c->r[30],0); // 801CB638
  c->r[31]=0u+0x00000000u; // 801CB63C
  if (!crb(c,2)) { goto L_801CB658; } // 801CB640
  c->r[4]=R8(c->r[21]+0x0000000Du); // 801CB644
  c->r[3]=c->r[29]|c->r[29]; // 801CB648
  c->r[5]=R16(c->r[21]+0x00000012u); // 801CB64C
  c->lr=0x801CB654u; f_801CF7A8(c); // 801CB650
  goto L_801CB6E0; // 801CB654
L_801CB658:;
  c->r[0]=R8(c->r[22]+0x00000414u); // 801CB658
  cmpu(c,0,c->r[0],0x00000002u); // 801CB65C
  if (crb(c,0)) { goto L_801CB674; } // 801CB660
  c->r[5]=c->r[30]|c->r[30]; // 801CB664
  c->r[3]=c->r[23]+0x00000001u; // 801CB668
  c->r[4]=c->r[24]+0x00005958u; // 801CB66C
  c->lr=0x801CB674u; f_801ACB38(c); // 801CB670
L_801CB674:;
  cmpu(c,0,c->r[30],0x00000004u); // 801CB674
  if (!crb(c,2)) { goto L_801CB684; } // 801CB678
  W8(c->r[21]+0x0000000Eu,c->r[25]); // 801CB67C
  goto L_801CB688; // 801CB680
L_801CB684:;
  W8(c->r[21]+0x0000000Eu,c->r[26]); // 801CB684
L_801CB688:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB688
  c->lr=0x801CB690u; f_801D13F4(c); // 801CB68C
  W32(c->r[21]+0x0000006Cu,c->r[27]); // 801CB690
  c->r[12]=R32(c->r[21]+0x0000008Cu); // 801CB694
  cmps(c,0,(int32_t)c->r[12],0); // 801CB698
  if (crb(c,2)) { goto L_801CB6BC; } // 801CB69C
  c->r[0]=R32(c->r[21]+0x00000088u); // 801CB6A0
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 801CB6A4
  if (crb(c,2)) { goto L_801CB6BC; } // 801CB6A8
  c->r[3]=c->r[28]+0xFFFF8000u; // 801CB6AC
  c->r[4]=R8(c->r[21]+0x00000000u); // 801CB6B0
  c->ctr=c->r[12]; // 801CB6B4
  if (true) { c->lr=0x801CB6BCu; dispatch(c,c->ctr); } // 801CB6B8
L_801CB6BC:;
  c->r[12]=R32(c->r[21]+0x00000090u); // 801CB6BC
  cmps(c,0,(int32_t)c->r[12],0); // 801CB6C0
  if (crb(c,2)) { goto L_801CB6D8; } // 801CB6C4
  c->r[4]=R8(c->r[21]+0x00000000u); // 801CB6C8
  c->r[3]=0u+0x0000000Cu; // 801CB6CC
  c->ctr=c->r[12]; // 801CB6D0
  if (true) { c->lr=0x801CB6D8u; dispatch(c,c->ctr); } // 801CB6D4
L_801CB6D8:;
  c->r[3]=c->r[21]|c->r[21]; // 801CB6D8
  c->lr=0x801CB6E0u; f_801CCB30(c); // 801CB6DC
L_801CB6E0:;
  c->r[20]=c->r[20]+0x00000001u; // 801CB6E0
  c->r[21]=c->r[21]+0x000000A4u; // 801CB6E4
  cmps(c,0,(int32_t)c->r[20],5); // 801CB6E8
  if (crb(c,0)) { IRQCHK(c); goto L_801CB62C; } // 801CB6EC
  cmps(c,0,(int32_t)c->r[31],0); // 801CB6F0
  if (crb(c,2)) { goto L_801CB700; } // 801CB6F4
  c->r[3]=c->r[29]|c->r[29]; // 801CB6F8
  c->lr=0x801CB700u; f_801D1620(c); // 801CB6FC
L_801CB700:;
  c->r[11]=c->r[1]+0x00000040u; // 801CB700
  c->lr=0x801CB708u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB704
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CB708
  c->lr=c->r[0]; // 801CB70C
  c->r[1]=c->r[1]+0x00000040u; // 801CB710
  return; // 801CB714
}

// PORT_StartInd
void f_801CB718(Ctx* __restrict c) {
  trace_call(0x801CB718u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB718
  c->r[0]=c->lr; // 801CB71C
  c->r[4]=0u+0x803D0000u; // 801CB720
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB724
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CB728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB72C
  c->r[31]=c->r[3]|c->r[3]; // 801CB730
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CB734
  cmpu(c,0,c->r[0],0x00000004u); // 801CB738
  if (crb(c,0)) { goto L_801CB754; } // 801CB73C
  c->r[3]=0u+0x00090000u; // 801CB740
  c->r[4]=0u+0x80330000u; // 801CB744
  c->r[3]=c->r[3]+0x00000003u; // 801CB748
  c->r[4]=c->r[4]+0x00005978u; // 801CB74C
  c->lr=0x801CB754u; f_801ACB20(c); // 801CB750
L_801CB754:;
  c->r[3]=0u+0x803D0000u; // 801CB754
  c->r[0]=0u+0x00000005u; // 801CB758
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CB75C
  c->r[3]=c->r[3]+0x00000068u; // 801CB760
  c->ctr=c->r[0]; // 801CB764
L_801CB768:;
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 801CB768
  cmps(c,0,(int32_t)c->r[0],0); // 801CB76C
  if (crb(c,2)) { goto L_801CB77C; } // 801CB770
  cmpu(c,0,c->r[0],c->r[31]); // 801CB774
  if (!crb(c,2)) { goto L_801CB78C; } // 801CB778
L_801CB77C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CB77C
  c->r[4]=0u+0x00000000u; // 801CB780
  c->lr=0x801CB788u; f_801CF6A4(c); // 801CB784
  goto L_801CB7A0; // 801CB788
L_801CB78C:;
  c->r[3]=c->r[3]+0x000000A4u; // 801CB78C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB768; } // 801CB790
  c->r[3]=c->r[31]|c->r[31]; // 801CB794
  c->r[4]=0u+0x00000001u; // 801CB798
  c->lr=0x801CB7A0u; f_801CF6A4(c); // 801CB79C
L_801CB7A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB7A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB7A4
  c->lr=c->r[0]; // 801CB7A8
  c->r[1]=c->r[1]+0x00000010u; // 801CB7AC
  return; // 801CB7B0
}

// PORT_ParNegInd
void f_801CB7B4(Ctx* __restrict c) {
  trace_call(0x801CB7B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB7B4
  c->r[0]=c->lr; // 801CB7B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB7BC
  c->r[11]=c->r[1]+0x00000020u; // 801CB7C0
  c->lr=0x801CB7C8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB7C4
  c->r[31]=c->r[4]|c->r[4]; // 801CB7C8
  c->r[30]=c->r[3]|c->r[3]; // 801CB7CC
  c->r[26]=c->r[5]|c->r[5]; // 801CB7D0
  c->r[27]=c->r[6]|c->r[6]; // 801CB7D4
  c->r[28]=c->r[7]|c->r[7]; // 801CB7D8
  c->lr=0x801CB7E0u; f_801CCC0C(c); // 801CB7DC
  c->r[4]=0u+0x803D0000u; // 801CB7E0
  c->r[29]=c->r[3]|c->r[3]; // 801CB7E4
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CB7E8
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CB7EC
  cmpu(c,0,c->r[0],0x00000004u); // 801CB7F0
  if (crb(c,0)) { goto L_801CB814; } // 801CB7F4
  c->r[3]=0u+0x00090000u; // 801CB7F8
  c->r[4]=0u+0x80330000u; // 801CB7FC
  c->r[5]=c->r[31]|c->r[31]; // 801CB800
  c->r[6]=c->r[26]|c->r[26]; // 801CB804
  c->r[3]=c->r[3]+0x00000003u; // 801CB808
  c->r[4]=c->r[4]+0x00005988u; // 801CB80C
  c->lr=0x801CB814u; f_801ACB50(c); // 801CB810
L_801CB814:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CB814
  if (!crb(c,2)) { goto L_801CB880; } // 801CB818
  c->r[3]=c->r[31]|c->r[31]; // 801CB81C
  c->lr=0x801CB824u; f_801CCC60(c); // 801CB820
  cmps(c,0,(int32_t)c->r[3],0); // 801CB824
  c->r[29]=c->r[3]|c->r[3]; // 801CB828
  if (!crb(c,2)) { goto L_801CB874; } // 801CB82C
  c->r[3]=c->r[30]|c->r[30]; // 801CB830
  c->r[4]=c->r[31]|c->r[31]; // 801CB834
  c->r[5]=0u+0x00000000u; // 801CB838
  c->lr=0x801CB840u; f_801CFD30(c); // 801CB83C
  c->r[3]=c->r[30]|c->r[30]; // 801CB840
  c->lr=0x801CB848u; f_801D1620(c); // 801CB844
  c->r[3]=0u+0x803D0000u; // 801CB848
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CB84C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CB850
  cmpu(c,0,c->r[0],0x00000004u); // 801CB854
  if (crb(c,0)) { goto L_801CB94C; } // 801CB858
  c->r[3]=0u+0x00090000u; // 801CB85C
  c->r[4]=0u+0x80330000u; // 801CB860
  c->r[3]=c->r[3]+0x00000003u; // 801CB864
  c->r[4]=c->r[4]+0x000059A8u; // 801CB868
  c->lr=0x801CB870u; f_801ACB20(c); // 801CB86C
  goto L_801CB94C; // 801CB870
L_801CB874:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CB874
  c->r[3]=c->r[30]+c->r[31]; // 801CB878
  W8(c->r[3]+0x00000024u,c->r[0]); // 801CB87C
L_801CB880:;
  c->r[3]=c->r[29]+0x00000006u; // 801CB880
  c->r[4]=c->r[30]+0x00000062u; // 801CB884
  c->r[5]=0u+0x00000006u; // 801CB888
  c->lr=0x801CB890u; f_80004338(c); // 801CB88C
  c->r[3]=c->r[29]|c->r[29]; // 801CB890
  c->lr=0x801CB898u; f_801CC9B4(c); // 801CB894
  W32(c->r[29]+0x0000006Cu,c->r[30]); // 801CB898
  c->r[0]=R16(c->r[29]+0x00000012u); // 801CB89C
  cmpu(c,0,c->r[0],c->r[26]); // 801CB8A0
  if (!crb(c,0)) { goto L_801CB8AC; } // 801CB8A4
  c->r[26]=c->r[0]|c->r[0]; // 801CB8A8
L_801CB8AC:;
  W16(c->r[29]+0x00000012u,c->r[26]); // 801CB8AC
  W16(c->r[29]+0x00000014u,c->r[26]); // 801CB8B0
  c->r[0]=R8(c->r[30]+0x00000072u); // 801CB8B4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB8B8
  if (!crb(c,2)) { goto L_801CB8DC; } // 801CB8BC
  cmps(c,0,(int32_t)c->r[27],0); // 801CB8C0
  if (!crb(c,2)) { goto L_801CB8D4; } // 801CB8C4
  c->r[0]=0u+0x00000001u; // 801CB8C8
  W8(c->r[30]+0x00000072u,c->r[0]); // 801CB8CC
  goto L_801CB8DC; // 801CB8D0
L_801CB8D4:;
  c->r[0]=0u+0x00000002u; // 801CB8D4
  W8(c->r[30]+0x00000072u,c->r[0]); // 801CB8D8
L_801CB8DC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CB8DC
  if (!crb(c,2)) { goto L_801CB8F0; } // 801CB8E0
  c->r[6]=0u+0x00000000u; // 801CB8E4
  c->r[7]=0u+0x00000000u; // 801CB8E8
  goto L_801CB93C; // 801CB8EC
L_801CB8F0:;
  c->r[0]=R8(c->r[30]+0x00000072u); // 801CB8F0
  cmpu(c,0,c->r[0],0x00000002u); // 801CB8F4
  if (!crb(c,2)) { goto L_801CB934; } // 801CB8F8
  cmps(c,0,(int32_t)c->r[28],0); // 801CB8FC
  W16(c->r[29]+0x00000098u,c->r[28]); // 801CB900
  if (!crb(c,2)) { goto L_801CB910; } // 801CB904
  c->r[0]=0u+0x00000001u; // 801CB908
  W8(c->r[29]+0x00000024u,c->r[0]); // 801CB90C
L_801CB910:;
  c->r[3]=R16(c->r[29]+0x0000009Cu); // 801CB910
  c->r[6]=0u+0x000000E0u; // 801CB914
  c->r[0]=0u+0x00000007u; // 801CB918
  cmpu(c,0,c->r[3],0x00000007u); // 801CB91C
  if (!crb(c,0)) { goto L_801CB928; } // 801CB920
  c->r[0]=c->r[3]|c->r[3]; // 801CB924
L_801CB928:;
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801CB928
  W16(c->r[29]+0x0000009Au,c->r[7]); // 801CB92C
  goto L_801CB93C; // 801CB930
L_801CB934:;
  c->r[6]=0u+0x00000000u; // 801CB934
  c->r[7]=0u+0x00000000u; // 801CB938
L_801CB93C:;
  c->r[5]=R16(c->r[29]+0x00000012u); // 801CB93C
  c->r[3]=c->r[30]|c->r[30]; // 801CB940
  c->r[4]=c->r[31]|c->r[31]; // 801CB944
  c->lr=0x801CB94Cu; f_801CF888(c); // 801CB948
L_801CB94C:;
  c->r[11]=c->r[1]+0x00000020u; // 801CB94C
  c->lr=0x801CB954u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB950
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB954
  c->lr=c->r[0]; // 801CB958
  c->r[1]=c->r[1]+0x00000020u; // 801CB95C
  return; // 801CB960
}

// PORT_ParNegCnf
void f_801CB964(Ctx* __restrict c) {
  trace_call(0x801CB964u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB964
  c->r[0]=c->lr; // 801CB968
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB96C
  c->r[11]=c->r[1]+0x00000020u; // 801CB970
  c->lr=0x801CB978u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB974
  c->r[27]=c->r[4]|c->r[4]; // 801CB978
  c->r[26]=c->r[3]|c->r[3]; // 801CB97C
  c->r[28]=c->r[5]|c->r[5]; // 801CB980
  c->r[29]=c->r[6]|c->r[6]; // 801CB984
  c->r[30]=c->r[7]|c->r[7]; // 801CB988
  c->lr=0x801CB990u; f_801CCC0C(c); // 801CB98C
  c->r[4]=0u+0x803D0000u; // 801CB990
  c->r[31]=c->r[3]|c->r[3]; // 801CB994
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CB998
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CB99C
  cmpu(c,0,c->r[0],0x00000004u); // 801CB9A0
  if (crb(c,0)) { goto L_801CB9CC; } // 801CB9A4
  c->r[3]=0u+0x00090000u; // 801CB9A8
  c->r[4]=0u+0x80330000u; // 801CB9AC
  c->r[5]=c->r[27]|c->r[27]; // 801CB9B0
  c->r[6]=c->r[28]|c->r[28]; // 801CB9B4
  c->r[7]=c->r[29]|c->r[29]; // 801CB9B8
  c->r[8]=c->r[30]|c->r[30]; // 801CB9BC
  c->r[3]=c->r[3]+0x00000003u; // 801CB9C0
  c->r[4]=c->r[4]+0x000059C8u; // 801CB9C4
  c->lr=0x801CB9CCu; f_801ACB80(c); // 801CB9C8
L_801CB9CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CB9CC
  if (crb(c,2)) { goto L_801CBA50; } // 801CB9D0
  c->r[0]=R8(c->r[26]+0x00000072u); // 801CB9D4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB9D8
  if (!crb(c,2)) { goto L_801CB9FC; } // 801CB9DC
  cmpu(c,0,c->r[29],0x000000E0u); // 801CB9E0
  if (!crb(c,2)) { goto L_801CB9F4; } // 801CB9E4
  c->r[0]=0u+0x00000002u; // 801CB9E8
  W8(c->r[26]+0x00000072u,c->r[0]); // 801CB9EC
  goto L_801CB9FC; // 801CB9F0
L_801CB9F4:;
  c->r[0]=0u+0x00000001u; // 801CB9F4
  W8(c->r[26]+0x00000072u,c->r[0]); // 801CB9F8
L_801CB9FC:;
  c->r[0]=R16(c->r[31]+0x00000012u); // 801CB9FC
  cmpu(c,0,c->r[0],c->r[28]); // 801CBA00
  if (!crb(c,0)) { goto L_801CBA0C; } // 801CBA04
  c->r[28]=c->r[0]|c->r[0]; // 801CBA08
L_801CBA0C:;
  W16(c->r[31]+0x00000012u,c->r[28]); // 801CBA0C
  W16(c->r[31]+0x00000014u,c->r[28]); // 801CBA10
  c->r[0]=R8(c->r[26]+0x00000072u); // 801CBA14
  cmpu(c,0,c->r[0],0x00000002u); // 801CBA18
  if (!crb(c,2)) { goto L_801CBA34; } // 801CBA1C
  cmps(c,0,(int32_t)c->r[30],0); // 801CBA20
  W16(c->r[31]+0x00000098u,c->r[30]); // 801CBA24
  if (!crb(c,2)) { goto L_801CBA34; } // 801CBA28
  c->r[0]=0u+0x00000001u; // 801CBA2C
  W8(c->r[31]+0x00000024u,c->r[0]); // 801CBA30
L_801CBA34:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 801CBA34
  cmpu(c,0,c->r[0],0x00000001u); // 801CBA38
  if (!crb(c,2)) { goto L_801CBA50; } // 801CBA3C
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CBA40
  c->r[3]=c->r[26]|c->r[26]; // 801CBA44
  c->r[5]=R16(c->r[31]+0x00000012u); // 801CBA48
  c->lr=0x801CBA50u; f_801CF6D0(c); // 801CBA4C
L_801CBA50:;
  c->r[11]=c->r[1]+0x00000020u; // 801CBA50
  c->lr=0x801CBA58u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CBA54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBA58
  c->lr=c->r[0]; // 801CBA5C
  c->r[1]=c->r[1]+0x00000020u; // 801CBA60
  return; // 801CBA64
}

// PORT_DlcEstablishInd
void f_801CBA68(Ctx* __restrict c) {
  trace_call(0x801CBA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBA68
  c->r[0]=c->lr; // 801CBA6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBA70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBA74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBA78
  c->r[30]=c->r[5]|c->r[5]; // 801CBA7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBA80
  c->r[29]=c->r[4]|c->r[4]; // 801CBA84
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CBA88
  c->r[28]=c->r[3]|c->r[3]; // 801CBA8C
  c->lr=0x801CBA94u; f_801CCC0C(c); // 801CBA90
  c->r[4]=0u+0x803D0000u; // 801CBA94
  c->r[31]=c->r[3]|c->r[3]; // 801CBA98
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CBA9C
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CBAA0
  cmpu(c,0,c->r[0],0x00000004u); // 801CBAA4
  if (crb(c,0)) { goto L_801CBAC8; } // 801CBAA8
  c->r[3]=0u+0x00090000u; // 801CBAAC
  c->r[4]=0u+0x80330000u; // 801CBAB0
  c->r[5]=c->r[29]|c->r[29]; // 801CBAB4
  c->r[6]=c->r[30]|c->r[30]; // 801CBAB8
  c->r[3]=c->r[3]+0x00000003u; // 801CBABC
  c->r[4]=c->r[4]+0x000059F4u; // 801CBAC0
  c->lr=0x801CBAC8u; f_801ACB50(c); // 801CBAC4
L_801CBAC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CBAC8
  if (!crb(c,2)) { goto L_801CBB08; } // 801CBACC
  c->r[3]=c->r[29]|c->r[29]; // 801CBAD0
  c->lr=0x801CBAD8u; f_801CCC60(c); // 801CBAD4
  cmps(c,0,(int32_t)c->r[3],0); // 801CBAD8
  c->r[31]=c->r[3]|c->r[3]; // 801CBADC
  if (!crb(c,2)) { goto L_801CBAFC; } // 801CBAE0
  c->r[3]=c->r[28]|c->r[28]; // 801CBAE4
  c->r[4]=c->r[29]|c->r[29]; // 801CBAE8
  c->r[5]=0u+0x00000000u; // 801CBAEC
  c->r[6]=0u+0x00000001u; // 801CBAF0
  c->lr=0x801CBAF8u; f_801CF738(c); // 801CBAF4
  goto L_801CBB88; // 801CBAF8
L_801CBAFC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CBAFC
  c->r[3]=c->r[28]+c->r[29]; // 801CBB00
  W8(c->r[3]+0x00000024u,c->r[0]); // 801CBB04
L_801CBB08:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CBB08
  if (crb(c,2)) { goto L_801CBB20; } // 801CBB0C
  c->r[0]=R16(c->r[31]+0x00000014u); // 801CBB10
  cmpu(c,0,c->r[30],c->r[0]); // 801CBB14
  if (!crb(c,0)) { goto L_801CBB20; } // 801CBB18
  W16(c->r[31]+0x00000014u,c->r[30]); // 801CBB1C
L_801CBB20:;
  c->r[3]=c->r[28]|c->r[28]; // 801CBB20
  c->lr=0x801CBB28u; f_801D14F0(c); // 801CBB24
  c->r[5]=R16(c->r[31]+0x00000012u); // 801CBB28
  c->r[3]=c->r[28]|c->r[28]; // 801CBB2C
  c->r[4]=c->r[29]|c->r[29]; // 801CBB30
  c->r[6]=0u+0x00000000u; // 801CBB34
  c->lr=0x801CBB3Cu; f_801CF738(c); // 801CBB38
  c->r[12]=R32(c->r[31]+0x0000008Cu); // 801CBB3C
  cmps(c,0,(int32_t)c->r[12],0); // 801CBB40
  if (crb(c,2)) { goto L_801CBB64; } // 801CBB44
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CBB48
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 801CBB4C
  if (crb(c,2)) { goto L_801CBB64; } // 801CBB50
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CBB54
  c->r[3]=0u+0x00000200u; // 801CBB58
  c->ctr=c->r[12]; // 801CBB5C
  if (true) { c->lr=0x801CBB64u; dispatch(c,c->ctr); } // 801CBB60
L_801CBB64:;
  c->r[12]=R32(c->r[31]+0x00000090u); // 801CBB64
  cmps(c,0,(int32_t)c->r[12],0); // 801CBB68
  if (crb(c,2)) { goto L_801CBB80; } // 801CBB6C
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CBB70
  c->r[3]=0u+0x00000000u; // 801CBB74
  c->ctr=c->r[12]; // 801CBB78
  if (true) { c->lr=0x801CBB80u; dispatch(c,c->ctr); } // 801CBB7C
L_801CBB80:;
  c->r[0]=0u+0x00000002u; // 801CBB80
  W8(c->r[31]+0x00000002u,c->r[0]); // 801CBB84
L_801CBB88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBB88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBB8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CBB90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CBB94
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CBB98
  c->lr=c->r[0]; // 801CBB9C
  c->r[1]=c->r[1]+0x00000020u; // 801CBBA0
  return; // 801CBBA4
}

// PORT_DlcEstablishCnf
void f_801CBBA8(Ctx* __restrict c) {
  trace_call(0x801CBBA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBBA8
  c->r[0]=c->lr; // 801CBBAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBBB0
  c->r[11]=c->r[1]+0x00000020u; // 801CBBB4
  c->lr=0x801CBBBCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CBBB8
  c->r[28]=c->r[4]|c->r[4]; // 801CBBBC
  c->r[27]=c->r[3]|c->r[3]; // 801CBBC0
  c->r[29]=c->r[5]|c->r[5]; // 801CBBC4
  c->r[30]=c->r[6]|c->r[6]; // 801CBBC8
  c->lr=0x801CBBD0u; f_801CCC0C(c); // 801CBBCC
  c->r[4]=0u+0x803D0000u; // 801CBBD0
  c->r[31]=c->r[3]|c->r[3]; // 801CBBD4
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CBBD8
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CBBDC
  cmpu(c,0,c->r[0],0x00000004u); // 801CBBE0
  if (crb(c,0)) { goto L_801CBC08; } // 801CBBE4
  c->r[3]=0u+0x00090000u; // 801CBBE8
  c->r[4]=0u+0x80330000u; // 801CBBEC
  c->r[5]=c->r[28]|c->r[28]; // 801CBBF0
  c->r[6]=c->r[29]|c->r[29]; // 801CBBF4
  c->r[7]=c->r[30]|c->r[30]; // 801CBBF8
  c->r[3]=c->r[3]+0x00000003u; // 801CBBFC
  c->r[4]=c->r[4]+0x00005A18u; // 801CBC00
  c->lr=0x801CBC08u; f_801ACB68(c); // 801CBC04
L_801CBC08:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CBC08
  if (crb(c,2)) { goto L_801CBCD4; } // 801CBC0C
  cmps(c,0,(int32_t)c->r[30],0); // 801CBC10
  if (crb(c,2)) { goto L_801CBC30; } // 801CBC14
  c->r[0]=0u+0x0000000Cu; // 801CBC18
  c->r[3]=c->r[31]|c->r[31]; // 801CBC1C
  W8(c->r[31]+0x0000000Eu,c->r[0]); // 801CBC20
  c->r[4]=0u+0x0000000Cu; // 801CBC24
  c->lr=0x801CBC2Cu; f_801CC820(c); // 801CBC28
  goto L_801CBCD4; // 801CBC2C
L_801CBC30:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CBC30
  if (crb(c,2)) { goto L_801CBC48; } // 801CBC34
  c->r[0]=R16(c->r[31]+0x00000014u); // 801CBC38
  cmpu(c,0,c->r[29],c->r[0]); // 801CBC3C
  if (!crb(c,0)) { goto L_801CBC48; } // 801CBC40
  W16(c->r[31]+0x00000014u,c->r[29]); // 801CBC44
L_801CBC48:;
  c->r[3]=c->r[27]|c->r[27]; // 801CBC48
  c->lr=0x801CBC50u; f_801D14F0(c); // 801CBC4C
  c->r[12]=R32(c->r[31]+0x0000008Cu); // 801CBC50
  cmps(c,0,(int32_t)c->r[12],0); // 801CBC54
  if (crb(c,2)) { goto L_801CBC78; } // 801CBC58
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CBC5C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 801CBC60
  if (crb(c,2)) { goto L_801CBC78; } // 801CBC64
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CBC68
  c->r[3]=0u+0x00000200u; // 801CBC6C
  c->ctr=c->r[12]; // 801CBC70
  if (true) { c->lr=0x801CBC78u; dispatch(c,c->ctr); } // 801CBC74
L_801CBC78:;
  c->r[12]=R32(c->r[31]+0x00000090u); // 801CBC78
  cmps(c,0,(int32_t)c->r[12],0); // 801CBC7C
  if (crb(c,2)) { goto L_801CBC94; } // 801CBC80
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CBC84
  c->r[3]=0u+0x00000000u; // 801CBC88
  c->ctr=c->r[12]; // 801CBC8C
  if (true) { c->lr=0x801CBC94u; dispatch(c,c->ctr); } // 801CBC90
L_801CBC94:;
  c->r[0]=0u+0x00000002u; // 801CBC94
  W8(c->r[31]+0x00000002u,c->r[0]); // 801CBC98
  c->r[0]=R16(c->r[31]+0x00000004u); // 801CBC9C
  cmpu(c,0,c->r[0],0x00001103u); // 801CBCA0
  if (crb(c,2)) { goto L_801CBCB0; } // 801CBCA4
  cmpu(c,0,c->r[0],0x00001111u); // 801CBCA8
  if (!crb(c,2)) { goto L_801CBCC4; } // 801CBCAC
L_801CBCB0:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CBCB0
  c->r[5]=0u+0x00000000u; // 801CBCB4
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CBCB8
  c->lr=0x801CBCC0u; f_801CF8B0(c); // 801CBCBC
  goto L_801CBCD4; // 801CBCC0
L_801CBCC4:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CBCC4
  c->r[5]=c->r[31]+0x0000005Au; // 801CBCC8
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CBCCC
  c->lr=0x801CBCD4u; f_801CF98C(c); // 801CBCD0
L_801CBCD4:;
  c->r[11]=c->r[1]+0x00000020u; // 801CBCD4
  c->lr=0x801CBCDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CBCD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBCDC
  c->lr=c->r[0]; // 801CBCE0
  c->r[1]=c->r[1]+0x00000020u; // 801CBCE4
  return; // 801CBCE8
}

// PORT_PortNegInd
void f_801CBCEC(Ctx* __restrict c) {
  trace_call(0x801CBCECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBCEC
  c->r[0]=c->lr; // 801CBCF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBCF4
  c->r[11]=c->r[1]+0x00000020u; // 801CBCF8
  c->lr=0x801CBD00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CBCFC
  c->r[27]=c->r[4]|c->r[4]; // 801CBD00
  c->r[30]=c->r[3]|c->r[3]; // 801CBD04
  c->r[31]=c->r[5]|c->r[5]; // 801CBD08
  c->r[28]=c->r[6]|c->r[6]; // 801CBD0C
  c->lr=0x801CBD14u; f_801CCC0C(c); // 801CBD10
  c->r[4]=0u+0x803D0000u; // 801CBD14
  c->r[29]=c->r[3]|c->r[3]; // 801CBD18
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CBD1C
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CBD20
  cmpu(c,0,c->r[0],0x00000004u); // 801CBD24
  if (crb(c,0)) { goto L_801CBD40; } // 801CBD28
  c->r[3]=0u+0x00090000u; // 801CBD2C
  c->r[4]=0u+0x80330000u; // 801CBD30
  c->r[3]=c->r[3]+0x00000003u; // 801CBD34
  c->r[4]=c->r[4]+0x00005A48u; // 801CBD38
  c->lr=0x801CBD40u; f_801ACB20(c); // 801CBD3C
L_801CBD40:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CBD40
  if (!crb(c,2)) { goto L_801CBDC8; } // 801CBD44
  c->r[3]=c->r[27]|c->r[27]; // 801CBD48
  c->lr=0x801CBD50u; f_801CCC60(c); // 801CBD4C
  cmps(c,0,(int32_t)c->r[3],0); // 801CBD50
  c->r[29]=c->r[3]|c->r[3]; // 801CBD54
  if (!crb(c,2)) { goto L_801CBDBC; } // 801CBD58
  c->r[7]=R8(c->r[31]+0x00000000u); // 801CBD5C
  c->r[4]=c->r[27]|c->r[27]; // 801CBD60
  c->r[0]=R8(c->r[31]+0x00000001u); // 801CBD64
  c->r[5]=c->r[31]|c->r[31]; // 801CBD68
  c->r[6]=0u+0x00000000u; // 801CBD6C
  W8(c->r[3]+0x00000051u,c->r[7]); // 801CBD70
  W8(c->r[3]+0x00000052u,c->r[0]); // 801CBD74
  c->r[7]=R8(c->r[31]+0x00000002u); // 801CBD78
  c->r[0]=R8(c->r[31]+0x00000003u); // 801CBD7C
  W8(c->r[3]+0x00000053u,c->r[7]); // 801CBD80
  W8(c->r[3]+0x00000054u,c->r[0]); // 801CBD84
  c->r[7]=R8(c->r[31]+0x00000004u); // 801CBD88
  c->r[0]=R8(c->r[31]+0x00000005u); // 801CBD8C
  W8(c->r[3]+0x00000055u,c->r[7]); // 801CBD90
  W8(c->r[3]+0x00000056u,c->r[0]); // 801CBD94
  c->r[7]=R8(c->r[31]+0x00000006u); // 801CBD98
  c->r[0]=R8(c->r[31]+0x00000007u); // 801CBD9C
  W8(c->r[3]+0x00000057u,c->r[7]); // 801CBDA0
  W8(c->r[3]+0x00000058u,c->r[0]); // 801CBDA4
  c->r[0]=R8(c->r[31]+0x00000008u); // 801CBDA8
  W8(c->r[3]+0x00000059u,c->r[0]); // 801CBDAC
  c->r[3]=c->r[30]|c->r[30]; // 801CBDB0
  c->lr=0x801CBDB8u; f_801CF96C(c); // 801CBDB4
  goto L_801CBE24; // 801CBDB8
L_801CBDBC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CBDBC
  c->r[3]=c->r[30]+c->r[27]; // 801CBDC0
  W8(c->r[3]+0x00000024u,c->r[0]); // 801CBDC4
L_801CBDC8:;
  c->r[7]=R8(c->r[31]+0x00000000u); // 801CBDC8
  c->r[3]=c->r[30]|c->r[30]; // 801CBDCC
  c->r[0]=R8(c->r[31]+0x00000001u); // 801CBDD0
  c->r[4]=c->r[27]|c->r[27]; // 801CBDD4
  c->r[5]=c->r[31]|c->r[31]; // 801CBDD8
  c->r[6]=c->r[28]|c->r[28]; // 801CBDDC
  W8(c->r[29]+0x00000051u,c->r[7]); // 801CBDE0
  W8(c->r[29]+0x00000052u,c->r[0]); // 801CBDE4
  c->r[7]=R8(c->r[31]+0x00000002u); // 801CBDE8
  c->r[0]=R8(c->r[31]+0x00000003u); // 801CBDEC
  W8(c->r[29]+0x00000053u,c->r[7]); // 801CBDF0
  W8(c->r[29]+0x00000054u,c->r[0]); // 801CBDF4
  c->r[7]=R8(c->r[31]+0x00000004u); // 801CBDF8
  c->r[0]=R8(c->r[31]+0x00000005u); // 801CBDFC
  W8(c->r[29]+0x00000055u,c->r[7]); // 801CBE00
  W8(c->r[29]+0x00000056u,c->r[0]); // 801CBE04
  c->r[7]=R8(c->r[31]+0x00000006u); // 801CBE08
  c->r[0]=R8(c->r[31]+0x00000007u); // 801CBE0C
  W8(c->r[29]+0x00000057u,c->r[7]); // 801CBE10
  W8(c->r[29]+0x00000058u,c->r[0]); // 801CBE14
  c->r[0]=R8(c->r[31]+0x00000008u); // 801CBE18
  W8(c->r[29]+0x00000059u,c->r[0]); // 801CBE1C
  c->lr=0x801CBE24u; f_801CF96C(c); // 801CBE20
L_801CBE24:;
  c->r[11]=c->r[1]+0x00000020u; // 801CBE24
  c->lr=0x801CBE2Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CBE28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBE2C
  c->lr=c->r[0]; // 801CBE30
  c->r[1]=c->r[1]+0x00000020u; // 801CBE34
  return; // 801CBE38
}

// PORT_PortNegCnf
void f_801CBE3C(Ctx* __restrict c) {
  trace_call(0x801CBE3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBE3C
  c->r[0]=c->lr; // 801CBE40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBE44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBE48
  c->r[31]=0u+0x80330000u; // 801CBE4C
  c->r[31]=c->r[31]+0x00005908u; // 801CBE50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBE54
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBE58
  c->r[29]=c->r[6]|c->r[6]; // 801CBE5C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CBE60
  c->r[28]=c->r[3]|c->r[3]; // 801CBE64
  c->lr=0x801CBE6Cu; f_801CCC0C(c); // 801CBE68
  c->r[4]=0u+0x803D0000u; // 801CBE6C
  c->r[30]=c->r[3]|c->r[3]; // 801CBE70
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CBE74
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CBE78
  cmpu(c,0,c->r[0],0x00000004u); // 801CBE7C
  if (crb(c,0)) { goto L_801CBE94; } // 801CBE80
  c->r[3]=0u+0x00090000u; // 801CBE84
  c->r[4]=c->r[31]+0x00000150u; // 801CBE88
  c->r[3]=c->r[3]+0x00000003u; // 801CBE8C
  c->lr=0x801CBE94u; f_801ACB20(c); // 801CBE90
L_801CBE94:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CBE94
  if (!crb(c,2)) { goto L_801CBEC4; } // 801CBE98
  c->r[3]=0u+0x803D0000u; // 801CBE9C
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CBEA0
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CBEA4
  cmpu(c,0,c->r[0],0x00000002u); // 801CBEA8
  if (crb(c,0)) { goto L_801CBF34; } // 801CBEAC
  c->r[3]=0u+0x00090000u; // 801CBEB0
  c->r[4]=c->r[31]+0x00000160u; // 801CBEB4
  c->r[3]=c->r[3]+0x00000001u; // 801CBEB8
  c->lr=0x801CBEC0u; f_801ACB20(c); // 801CBEBC
  goto L_801CBF34; // 801CBEC0
L_801CBEC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CBEC4
  if (crb(c,2)) { goto L_801CBEF0; } // 801CBEC8
  c->r[0]=0u+0x0000000Eu; // 801CBECC
  c->r[3]=c->r[28]|c->r[28]; // 801CBED0
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801CBED4
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CBED8
  c->lr=0x801CBEE0u; f_801CFB6C(c); // 801CBEDC
  c->r[3]=c->r[30]|c->r[30]; // 801CBEE0
  c->r[4]=0u+0x0000000Eu; // 801CBEE4
  c->lr=0x801CBEECu; f_801CC820(c); // 801CBEE8
  goto L_801CBF34; // 801CBEEC
L_801CBEF0:;
  c->r[0]=R8(c->r[30]+0x00000064u); // 801CBEF0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CBEF4
  if (!crb(c,2)) { goto L_801CBF10; } // 801CBEF8
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 801CBEFC
  c->r[5]=c->r[30]+0x0000005Au; // 801CBF00
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CBF04
  c->lr=0x801CBF0Cu; f_801CF98C(c); // 801CBF08
  goto L_801CBF34; // 801CBF0C
L_801CBF10:;
  c->r[3]=0u+0x803D0000u; // 801CBF10
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CBF14
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CBF18
  cmpu(c,0,c->r[0],0x00000002u); // 801CBF1C
  if (crb(c,0)) { goto L_801CBF34; } // 801CBF20
  c->r[3]=0u+0x00090000u; // 801CBF24
  c->r[4]=c->r[31]+0x00000178u; // 801CBF28
  c->r[3]=c->r[3]+0x00000001u; // 801CBF2C
  c->lr=0x801CBF34u; f_801ACB20(c); // 801CBF30
L_801CBF34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBF34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBF38
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CBF3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CBF40
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CBF44
  c->lr=c->r[0]; // 801CBF48
  c->r[1]=c->r[1]+0x00000020u; // 801CBF4C
  return; // 801CBF50
}

// PORT_ControlInd
void f_801CBF54(Ctx* __restrict c) {
  trace_call(0x801CBF54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBF54
  c->r[0]=c->lr; // 801CBF58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBF5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBF60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBF64
  c->r[30]=c->r[5]|c->r[5]; // 801CBF68
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBF6C
  c->lr=0x801CBF74u; f_801CCC0C(c); // 801CBF70
  c->r[4]=0u+0x803D0000u; // 801CBF74
  c->r[31]=c->r[3]|c->r[3]; // 801CBF78
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CBF7C
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CBF80
  cmpu(c,0,c->r[0],0x00000004u); // 801CBF84
  if (crb(c,0)) { goto L_801CBFA0; } // 801CBF88
  c->r[3]=0u+0x00090000u; // 801CBF8C
  c->r[4]=0u+0x80330000u; // 801CBF90
  c->r[3]=c->r[3]+0x00000003u; // 801CBF94
  c->r[4]=c->r[4]+0x00005AA8u; // 801CBF98
  c->lr=0x801CBFA0u; f_801ACB20(c); // 801CBF9C
L_801CBFA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CBFA0
  if (crb(c,2)) { goto L_801CC0B0; } // 801CBFA4
  c->r[4]=R8(c->r[31]+0x0000005Fu); // 801CBFA8
  c->r[3]=c->r[31]|c->r[31]; // 801CBFAC
  c->r[5]=R8(c->r[30]+0x00000000u); // 801CBFB0
  c->lr=0x801CBFB8u; f_801CCD58(c); // 801CBFB4
  c->r[0]=R8(c->r[30]+0x00000000u); // 801CBFB8
  c->r[29]=c->r[3]|c->r[3]; // 801CBFBC
  W8(c->r[31]+0x0000005Fu,c->r[0]); // 801CBFC0
  c->r[0]=R8(c->r[30]+0x00000001u); // 801CBFC4
  W8(c->r[31]+0x00000060u,c->r[0]); // 801CBFC8
  c->r[0]=R8(c->r[30]+0x00000002u); // 801CBFCC
  W8(c->r[31]+0x00000061u,c->r[0]); // 801CBFD0
  c->r[0]=R8(c->r[30]+0x00000003u); // 801CBFD4
  W8(c->r[31]+0x00000062u,c->r[0]); // 801CBFD8
  c->r[0]=R8(c->r[30]+0x00000004u); // 801CBFDC
  W8(c->r[31]+0x00000063u,c->r[0]); // 801CBFE0
  c->r[4]=R8(c->r[31]+0x00000064u); // 801CBFE4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CBFE8
  if (!crb(c,2)) { goto L_801CC004; } // 801CBFEC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CBFF0
  c->r[5]=c->r[31]+0x0000005Au; // 801CBFF4
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CBFF8
  c->lr=0x801CC000u; f_801CF98C(c); // 801CBFFC
  goto L_801CC02C; // 801CC000
L_801CC004:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801CC004
  if (!crb(c,2)) { goto L_801CC018; } // 801CC008
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CC00C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801CC010
  c->r[29]=c->r[3]|c->r[0]; // 801CC014
L_801CC018:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801CC018
  if (crb(c,2)) { goto L_801CC02C; } // 801CC01C
  c->r[3]=c->r[31]|c->r[31]; // 801CC020
  c->lr=0x801CC028u; f_801CC728(c); // 801CC024
  c->r[29]=c->r[29]|c->r[3]; // 801CC028
L_801CC02C:;
  c->r[0]=R8(c->r[31]+0x00000064u); // 801CC02C
  c->r[0]=c->r[0]|0x0000000Cu; // 801CC030
  W8(c->r[31]+0x00000064u,c->r[0]); // 801CC034
  c->r[0]=R8(c->r[30]+0x00000001u); // 801CC038
  cmps(c,0,(int32_t)c->r[0],0); // 801CC03C
  if (crb(c,2)) { goto L_801CC050; } // 801CC040
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CC044
  c->r[0]=rotl(c->r[0],0)&0x00000040u; // 801CC048
  c->r[29]=c->r[29]|c->r[0]; // 801CC04C
L_801CC050:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CC050
  if (crb(c,2)) { goto L_801CC074; } // 801CC054
  c->r[12]=R32(c->r[31]+0x0000008Cu); // 801CC058
  cmps(c,0,(int32_t)c->r[12],0); // 801CC05C
  if (crb(c,2)) { goto L_801CC074; } // 801CC060
  c->r[3]=c->r[29]|c->r[29]; // 801CC064
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CC068
  c->ctr=c->r[12]; // 801CC06C
  if (true) { c->lr=0x801CC074u; dispatch(c,c->ctr); } // 801CC070
L_801CC074:;
  c->r[3]=0u+0x803D0000u; // 801CC074
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC078
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CC07C
  cmpu(c,0,c->r[0],0x00000004u); // 801CC080
  if (crb(c,0)) { goto L_801CC0B0; } // 801CC084
  c->r[0]=R8(c->r[31]+0x0000005Fu); // 801CC088
  c->r[3]=0u+0x00090000u; // 801CC08C
  c->r[4]=0u+0x80330000u; // 801CC090
  c->r[8]=rotl(c->r[0],29)&0x00000001u; // 801CC094
  c->r[7]=rotl(c->r[0],30)&0x00000001u; // 801CC098
  c->r[6]=rotl(c->r[0],31)&0x00000001u; // 801CC09C
  c->r[3]=c->r[3]+0x00000003u; // 801CC0A0
  c->r[4]=c->r[4]+0x00005AB8u; // 801CC0A4
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 801CC0A8
  c->lr=0x801CC0B0u; f_801ACB80(c); // 801CC0AC
L_801CC0B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC0B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC0B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC0B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC0BC
  c->lr=c->r[0]; // 801CC0C0
  c->r[1]=c->r[1]+0x00000020u; // 801CC0C4
  return; // 801CC0C8
}

// PORT_ControlCnf
void f_801CC0CC(Ctx* __restrict c) {
  trace_call(0x801CC0CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC0CC
  c->r[0]=c->lr; // 801CC0D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC0D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC0D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC0DC
  c->lr=0x801CC0E4u; f_801CCC0C(c); // 801CC0E0
  c->r[4]=0u+0x803D0000u; // 801CC0E4
  c->r[31]=c->r[3]|c->r[3]; // 801CC0E8
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CC0EC
  c->r[30]=0u+0x00000000u; // 801CC0F0
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CC0F4
  cmpu(c,0,c->r[0],0x00000004u); // 801CC0F8
  if (crb(c,0)) { goto L_801CC114; } // 801CC0FC
  c->r[3]=0u+0x00090000u; // 801CC100
  c->r[4]=0u+0x80330000u; // 801CC104
  c->r[3]=c->r[3]+0x00000003u; // 801CC108
  c->r[4]=c->r[4]+0x00005AF8u; // 801CC10C
  c->lr=0x801CC114u; f_801ACB20(c); // 801CC110
L_801CC114:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC114
  if (crb(c,2)) { goto L_801CC178; } // 801CC118
  c->r[3]=R8(c->r[31]+0x00000064u); // 801CC11C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801CC120
  if (!crb(c,2)) { goto L_801CC140; } // 801CC124
  c->r[3]=c->r[3]|0x00000002u; // 801CC128
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801CC12C
  W8(c->r[31]+0x00000064u,c->r[3]); // 801CC130
  if (crb(c,2)) { goto L_801CC140; } // 801CC134
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CC138
  c->r[30]=rotl(c->r[0],0)&0x00000200u; // 801CC13C
L_801CC140:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801CC140
  if (crb(c,2)) { goto L_801CC154; } // 801CC144
  c->r[3]=c->r[31]|c->r[31]; // 801CC148
  c->lr=0x801CC150u; f_801CC728(c); // 801CC14C
  c->r[30]=c->r[30]|c->r[3]; // 801CC150
L_801CC154:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CC154
  if (crb(c,2)) { goto L_801CC178; } // 801CC158
  c->r[12]=R32(c->r[31]+0x0000008Cu); // 801CC15C
  cmps(c,0,(int32_t)c->r[12],0); // 801CC160
  if (crb(c,2)) { goto L_801CC178; } // 801CC164
  c->r[3]=c->r[30]|c->r[30]; // 801CC168
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CC16C
  c->ctr=c->r[12]; // 801CC170
  if (true) { c->lr=0x801CC178u; dispatch(c,c->ctr); } // 801CC174
L_801CC178:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC178
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC17C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC180
  c->lr=c->r[0]; // 801CC184
  c->r[1]=c->r[1]+0x00000010u; // 801CC188
  return; // 801CC18C
}

// PORT_LineStatusInd
void f_801CC190(Ctx* __restrict c) {
  trace_call(0x801CC190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC190
  c->r[0]=c->lr; // 801CC194
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC19C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC1A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC1A4
  c->r[29]=c->r[5]|c->r[5]; // 801CC1A8
  c->lr=0x801CC1B0u; f_801CCC0C(c); // 801CC1AC
  c->r[4]=0u+0x803D0000u; // 801CC1B0
  c->r[31]=c->r[3]|c->r[3]; // 801CC1B4
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CC1B8
  c->r[30]=0u+0x00000000u; // 801CC1BC
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CC1C0
  cmpu(c,0,c->r[0],0x00000004u); // 801CC1C4
  if (crb(c,0)) { goto L_801CC1E0; } // 801CC1C8
  c->r[3]=0u+0x00090000u; // 801CC1CC
  c->r[4]=0u+0x80330000u; // 801CC1D0
  c->r[3]=c->r[3]+0x00000003u; // 801CC1D4
  c->r[4]=c->r[4]+0x00005B08u; // 801CC1D8
  c->lr=0x801CC1E0u; f_801ACB20(c); // 801CC1DC
L_801CC1E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC1E0
  if (crb(c,2)) { goto L_801CC23C; } // 801CC1E4
  c->r[3]=R8(c->r[31]+0x0000000Fu); // 801CC1E8
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 801CC1EC
  c->r[0]=c->r[3]|c->r[29]; // 801CC1F0
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 801CC1F4
  if (crb(c,2)) { goto L_801CC200; } // 801CC1F8
  c->r[30]=c->r[30]|0x00002000u; // 801CC1FC
L_801CC200:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801CC200
  if (crb(c,2)) { goto L_801CC20C; } // 801CC204
  c->r[30]=c->r[30]|0x00000040u; // 801CC208
L_801CC20C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FCu; cr0(c,c->r[0]); // 801CC20C
  if (crb(c,2)) { goto L_801CC218; } // 801CC210
  c->r[30]=c->r[30]|0x00000080u; // 801CC214
L_801CC218:;
  c->r[12]=R32(c->r[31]+0x0000008Cu); // 801CC218
  cmps(c,0,(int32_t)c->r[12],0); // 801CC21C
  if (crb(c,2)) { goto L_801CC23C; } // 801CC220
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CC224
  c->r[3]=c->r[0]&c->r[30]; cr0(c,c->r[3]); // 801CC228
  if (crb(c,2)) { goto L_801CC23C; } // 801CC22C
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CC230
  c->ctr=c->r[12]; // 801CC234
  if (true) { c->lr=0x801CC23Cu; dispatch(c,c->ctr); } // 801CC238
L_801CC23C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC23C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC240
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC244
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC248
  c->lr=c->r[0]; // 801CC24C
  c->r[1]=c->r[1]+0x00000020u; // 801CC250
  return; // 801CC254
}

// PORT_DlcReleaseInd
void f_801CC258(Ctx* __restrict c) {
  trace_call(0x801CC258u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC258
  c->r[0]=c->lr; // 801CC25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC264
  c->lr=0x801CC26Cu; f_801CCC0C(c); // 801CC268
  c->r[4]=0u+0x803D0000u; // 801CC26C
  c->r[31]=c->r[3]|c->r[3]; // 801CC270
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CC274
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CC278
  cmpu(c,0,c->r[0],0x00000004u); // 801CC27C
  if (crb(c,0)) { goto L_801CC298; } // 801CC280
  c->r[3]=0u+0x00090000u; // 801CC284
  c->r[4]=0u+0x80330000u; // 801CC288
  c->r[3]=c->r[3]+0x00000003u; // 801CC28C
  c->r[4]=c->r[4]+0x00005B1Cu; // 801CC290
  c->lr=0x801CC298u; f_801ACB20(c); // 801CC294
L_801CC298:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC298
  if (crb(c,2)) { goto L_801CC2AC; } // 801CC29C
  c->r[3]=c->r[31]|c->r[31]; // 801CC2A0
  c->r[4]=0u+0x00000013u; // 801CC2A4
  c->lr=0x801CC2ACu; f_801CC820(c); // 801CC2A8
L_801CC2AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC2AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC2B0
  c->lr=c->r[0]; // 801CC2B4
  c->r[1]=c->r[1]+0x00000010u; // 801CC2B8
  return; // 801CC2BC
}

// PORT_CloseInd
void f_801CC2C0(Ctx* __restrict c) {
  trace_call(0x801CC2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC2C0
  c->r[0]=c->lr; // 801CC2C4
  c->r[4]=0u+0x803D0000u; // 801CC2C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC2CC
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CC2D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC2D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC2D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC2DC
  c->r[29]=c->r[3]|c->r[3]; // 801CC2E0
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CC2E4
  cmpu(c,0,c->r[0],0x00000004u); // 801CC2E8
  if (crb(c,0)) { goto L_801CC304; } // 801CC2EC
  c->r[3]=0u+0x00090000u; // 801CC2F0
  c->r[4]=0u+0x80330000u; // 801CC2F4
  c->r[3]=c->r[3]+0x00000003u; // 801CC2F8
  c->r[4]=c->r[4]+0x00005B30u; // 801CC2FC
  c->lr=0x801CC304u; f_801ACB20(c); // 801CC300
L_801CC304:;
  c->r[3]=0u+0x803D0000u; // 801CC304
  c->r[30]=0u+0x00000000u; // 801CC308
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC30C
  c->r[31]=c->r[3]+0x00000068u; // 801CC310
L_801CC314:;
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 801CC314
  cmpu(c,0,c->r[0],c->r[29]); // 801CC318
  if (!crb(c,2)) { goto L_801CC32C; } // 801CC31C
  c->r[3]=c->r[31]|c->r[31]; // 801CC320
  c->r[4]=0u+0x00000010u; // 801CC324
  c->lr=0x801CC32Cu; f_801CC820(c); // 801CC328
L_801CC32C:;
  c->r[30]=c->r[30]+0x00000001u; // 801CC32C
  c->r[31]=c->r[31]+0x000000A4u; // 801CC330
  cmps(c,0,(int32_t)c->r[30],5); // 801CC334
  if (crb(c,0)) { IRQCHK(c); goto L_801CC314; } // 801CC338
  c->r[3]=c->r[29]|c->r[29]; // 801CC33C
  c->lr=0x801CC344u; f_801D13F4(c); // 801CC340
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC344
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC348
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC34C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC350
  c->lr=c->r[0]; // 801CC354
  c->r[1]=c->r[1]+0x00000020u; // 801CC358
  return; // 801CC35C
}

// Port_TimeOutCloseMux
void f_801CC360(Ctx* __restrict c) {
  trace_call(0x801CC360u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC360
  c->r[0]=c->lr; // 801CC364
  c->r[4]=0u+0x803D0000u; // 801CC368
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC36C
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CC370
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC374
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC378
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC37C
  c->r[29]=c->r[3]|c->r[3]; // 801CC380
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CC384
  cmpu(c,0,c->r[0],0x00000004u); // 801CC388
  if (crb(c,0)) { goto L_801CC3A4; } // 801CC38C
  c->r[3]=0u+0x00090000u; // 801CC390
  c->r[4]=0u+0x80330000u; // 801CC394
  c->r[3]=c->r[3]+0x00000003u; // 801CC398
  c->r[4]=c->r[4]+0x00005B40u; // 801CC39C
  c->lr=0x801CC3A4u; f_801ACB20(c); // 801CC3A0
L_801CC3A4:;
  c->r[3]=0u+0x803D0000u; // 801CC3A4
  c->r[30]=0u+0x00000000u; // 801CC3A8
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC3AC
  c->r[31]=c->r[3]+0x00000068u; // 801CC3B0
L_801CC3B4:;
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 801CC3B4
  cmpu(c,0,c->r[0],c->r[29]); // 801CC3B8
  if (!crb(c,2)) { goto L_801CC3CC; } // 801CC3BC
  c->r[3]=c->r[31]|c->r[31]; // 801CC3C0
  c->r[4]=0u+0x00000012u; // 801CC3C4
  c->lr=0x801CC3CCu; f_801CC820(c); // 801CC3C8
L_801CC3CC:;
  c->r[30]=c->r[30]+0x00000001u; // 801CC3CC
  c->r[31]=c->r[31]+0x000000A4u; // 801CC3D0
  cmps(c,0,(int32_t)c->r[30],5); // 801CC3D4
  if (crb(c,0)) { IRQCHK(c); goto L_801CC3B4; } // 801CC3D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC3DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC3E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC3E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC3E8
  c->lr=c->r[0]; // 801CC3EC
  c->r[1]=c->r[1]+0x00000020u; // 801CC3F0
  return; // 801CC3F4
}

// PORT_DataInd
void f_801CC3F8(Ctx* __restrict c) {
  trace_call(0x801CC3F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC3F8
  c->r[0]=c->lr; // 801CC3FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC400
  c->r[11]=c->r[1]+0x00000020u; // 801CC404
  c->lr=0x801CC40Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CC408
  c->r[28]=c->r[4]|c->r[4]; // 801CC40C
  c->r[27]=c->r[3]|c->r[3]; // 801CC410
  c->r[29]=c->r[5]|c->r[5]; // 801CC414
  c->lr=0x801CC41Cu; f_801CCC0C(c); // 801CC418
  c->r[4]=0u+0x803D0000u; // 801CC41C
  c->r[31]=c->r[3]|c->r[3]; // 801CC420
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CC424
  c->r[30]=0u+0x00000000u; // 801CC428
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CC42C
  cmpu(c,0,c->r[0],0x00000004u); // 801CC430
  if (crb(c,0)) { goto L_801CC450; } // 801CC434
  c->r[3]=0u+0x00090000u; // 801CC438
  c->r[4]=0u+0x80330000u; // 801CC43C
  c->r[5]=R16(c->r[29]+0x00000002u); // 801CC440
  c->r[3]=c->r[3]+0x00000003u; // 801CC444
  c->r[4]=c->r[4]+0x00005B58u; // 801CC448
  c->lr=0x801CC450u; f_801ACB38(c); // 801CC44C
L_801CC450:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC450
  if (!crb(c,2)) { goto L_801CC464; } // 801CC454
  c->r[3]=c->r[29]|c->r[29]; // 801CC458
  c->lr=0x801CC460u; f_801AA228(c); // 801CC45C
  goto L_801CC5E0; // 801CC460
L_801CC464:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 801CC464
  cmps(c,0,(int32_t)c->r[0],0); // 801CC468
  if (crb(c,2)) { goto L_801CC4AC; } // 801CC46C
  c->r[3]=c->r[31]|c->r[31]; // 801CC470
  c->r[4]=0u+0x00000001u; // 801CC474
  c->r[5]=0u+0x00000001u; // 801CC478
  c->lr=0x801CC480u; f_801CCDC0(c); // 801CC47C
  c->r[0]=R16(c->r[29]+0x00000004u); // 801CC480
  c->r[12]=R32(c->r[31]+0x00000094u); // 801CC484
  c->r[4]=c->r[29]+c->r[0]; // 801CC488
  c->r[3]=R8(c->r[31]+0x00000000u); // 801CC48C
  c->r[4]=c->r[4]+0x00000008u; // 801CC490
  c->r[5]=R16(c->r[29]+0x00000002u); // 801CC494
  c->ctr=c->r[12]; // 801CC498
  if (true) { c->lr=0x801CC4A0u; dispatch(c,c->ctr); } // 801CC49C
  c->r[3]=c->r[29]|c->r[29]; // 801CC4A0
  c->lr=0x801CC4A8u; f_801AA228(c); // 801CC4A4
  goto L_801CC5E0; // 801CC4A8
L_801CC4AC:;
  c->r[4]=R16(c->r[29]+0x00000002u); // 801CC4AC
  c->r[0]=R32(c->r[31]+0x00000040u); // 801CC4B0
  c->r[0]=c->r[0]+c->r[4]; // 801CC4B4
  cmpu(c,0,c->r[0],0x00002EE0u); // 801CC4B8
  if (crb(c,1)) { goto L_801CC4D4; } // 801CC4BC
  c->r[3]=R16(c->r[31]+0x00000038u); // 801CC4C0
  c->r[0]=R16(c->r[31]+0x000000A0u); // 801CC4C4
  c->r[3]=c->r[3]+0x00000001u; // 801CC4C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CC4CC
  if (!crb(c,1)) { goto L_801CC518; } // 801CC4D0
L_801CC4D4:;
  c->r[3]=0u+0x803D0000u; // 801CC4D4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC4D8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CC4DC
  cmpu(c,0,c->r[0],0x00000004u); // 801CC4E0
  if (crb(c,0)) { goto L_801CC4FC; } // 801CC4E4
  c->r[3]=0u+0x00090000u; // 801CC4E8
  c->r[4]=0u+0x80330000u; // 801CC4EC
  c->r[3]=c->r[3]+0x00000003u; // 801CC4F0
  c->r[4]=c->r[4]+0x00005B7Cu; // 801CC4F4
  c->lr=0x801CC4FCu; f_801ACB20(c); // 801CC4F8
L_801CC4FC:;
  c->r[3]=c->r[29]|c->r[29]; // 801CC4FC
  c->lr=0x801CC504u; f_801AA228(c); // 801CC500
  c->r[3]=c->r[27]|c->r[27]; // 801CC504
  c->r[4]=c->r[28]|c->r[28]; // 801CC508
  c->r[5]=0u+0x00000002u; // 801CC50C
  c->lr=0x801CC514u; f_801CFAD4(c); // 801CC510
  goto L_801CC5E0; // 801CC514
L_801CC518:;
  c->r[5]=R8(c->r[31]+0x0000004Eu); // 801CC518
  cmps(c,0,(int32_t)c->r[5],0); // 801CC51C
  if (crb(c,2)) { goto L_801CC564; } // 801CC520
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CC524
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CC528
  if (crb(c,2)) { goto L_801CC564; } // 801CC52C
  c->r[0]=R16(c->r[29]+0x00000004u); // 801CC530
  c->r[3]=c->r[29]+c->r[0]; // 801CC534
  c->r[3]=c->r[3]+0x00000008u; // 801CC538
  c->ctr=c->r[4]; // 801CC53C
  cmps(c,0,(int32_t)c->r[4],0); // 801CC540
  if (!crb(c,1)) { goto L_801CC564; } // 801CC544
L_801CC548:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CC548
  c->r[3]=c->r[3]+0x00000001u; // 801CC54C
  cmpu(c,0,c->r[0],c->r[5]); // 801CC550
  if (!crb(c,2)) { goto L_801CC560; } // 801CC554
  c->r[30]=c->r[30]|0x00000002u; // 801CC558
  goto L_801CC564; // 801CC55C
L_801CC560:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CC548; } // 801CC560
L_801CC564:;
  c->r[4]=c->r[29]|c->r[29]; // 801CC564
  c->r[3]=c->r[31]+0x00000030u; // 801CC568
  c->lr=0x801CC570u; f_801AA648(c); // 801CC56C
  c->r[6]=R32(c->r[31]+0x00000040u); // 801CC570
  c->r[3]=c->r[31]|c->r[31]; // 801CC574
  c->r[0]=R16(c->r[29]+0x00000002u); // 801CC578
  c->r[4]=0u+0x00000000u; // 801CC57C
  c->r[5]=0u+0x00000000u; // 801CC580
  c->r[0]=c->r[6]+c->r[0]; // 801CC584
  W32(c->r[31]+0x00000040u,c->r[0]); // 801CC588
  c->lr=0x801CC590u; f_801CCDC0(c); // 801CC58C
  c->r[0]=R8(c->r[31]+0x0000003Du); // 801CC590
  cmps(c,0,(int32_t)c->r[0],0); // 801CC594
  if (crb(c,2)) { goto L_801CC5B0; } // 801CC598
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 801CC59C
  if (crb(c,2)) { goto L_801CC5E0; } // 801CC5A0
  c->r[0]=0u+0x00000001u; // 801CC5A4
  W8(c->r[31]+0x00000065u,c->r[0]); // 801CC5A8
  goto L_801CC5E0; // 801CC5AC
L_801CC5B0:;
  c->r[12]=R32(c->r[31]+0x0000008Cu); // 801CC5B0
  c->r[30]=c->r[30]|0x00000001u; // 801CC5B4
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CC5B8
  cmps(c,0,(int32_t)c->r[12],0); // 801CC5BC
  c->r[30]=c->r[30]&c->r[0]; // 801CC5C0
  if (crb(c,2)) { goto L_801CC5E0; } // 801CC5C4
  cmps(c,0,(int32_t)c->r[30],0); // 801CC5C8
  if (crb(c,2)) { goto L_801CC5E0; } // 801CC5CC
  c->r[3]=c->r[30]|c->r[30]; // 801CC5D0
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CC5D4
  c->ctr=c->r[12]; // 801CC5D8
  if (true) { c->lr=0x801CC5E0u; dispatch(c,c->ctr); } // 801CC5DC
L_801CC5E0:;
  c->r[11]=c->r[1]+0x00000020u; // 801CC5E0
  c->lr=0x801CC5E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CC5E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC5E8
  c->lr=c->r[0]; // 801CC5EC
  c->r[1]=c->r[1]+0x00000020u; // 801CC5F0
  return; // 801CC5F4
}

// PORT_FlowInd
void f_801CC5F8(Ctx* __restrict c) {
  trace_call(0x801CC5F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC5F8
  c->r[0]=c->lr; // 801CC5FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC600
  c->r[11]=c->r[1]+0x00000020u; // 801CC604
  c->lr=0x801CC60Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CC608
  c->r[6]=0u+0x803D0000u; // 801CC60C
  c->r[26]=c->r[3]|c->r[3]; // 801CC610
  c->r[6]=c->r[6]+0xFFFFB9C8u; // 801CC614
  c->r[27]=c->r[4]|c->r[4]; // 801CC618
  c->r[0]=R8(c->r[6]+0x00000414u); // 801CC61C
  c->r[28]=c->r[5]|c->r[5]; // 801CC620
  c->r[29]=0u+0x00000000u; // 801CC624
  cmpu(c,0,c->r[0],0x00000004u); // 801CC628
  if (crb(c,0)) { goto L_801CC644; } // 801CC62C
  c->r[3]=0u+0x00090000u; // 801CC630
  c->r[4]=0u+0x80330000u; // 801CC634
  c->r[3]=c->r[3]+0x00000003u; // 801CC638
  c->r[4]=c->r[4]+0x00005BB0u; // 801CC63C
  c->lr=0x801CC644u; f_801ACB38(c); // 801CC640
L_801CC644:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CC644
  if (!crb(c,2)) { goto L_801CC654; } // 801CC648
  W8(c->r[26]+0x00000071u,c->r[28]); // 801CC64C
  goto L_801CC678; // 801CC650
L_801CC654:;
  c->r[3]=c->r[26]|c->r[26]; // 801CC654
  c->r[4]=c->r[27]|c->r[27]; // 801CC658
  c->lr=0x801CC660u; f_801CCC0C(c); // 801CC65C
  cmps(c,0,(int32_t)c->r[3],0); // 801CC660
  c->r[29]=c->r[3]|c->r[3]; // 801CC664
  if (crb(c,2)) { goto L_801CC710; } // 801CC668
  c->r[0]=cntlz(c->r[28]); // 801CC66C
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 801CC670
  W8(c->r[3]+0x00000024u,c->r[0]); // 801CC674
L_801CC678:;
  c->r[3]=0u+0x803D0000u; // 801CC678
  c->r[28]=0u+0x00000000u; // 801CC67C
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC680
  c->r[30]=c->r[3]+0x00000068u; // 801CC684
L_801CC688:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CC688
  if (!crb(c,2)) { goto L_801CC6B8; } // 801CC68C
  c->r[0]=R8(c->r[30]+0x00000001u); // 801CC690
  c->r[29]=c->r[30]|c->r[30]; // 801CC694
  cmps(c,0,(int32_t)c->r[0],0); // 801CC698
  if (crb(c,2)) { goto L_801CC700; } // 801CC69C
  c->r[0]=R32(c->r[30]+0x0000006Cu); // 801CC6A0
  cmpu(c,0,c->r[0],c->r[26]); // 801CC6A4
  if (!crb(c,2)) { goto L_801CC700; } // 801CC6A8
  c->r[0]=R8(c->r[30]+0x00000068u); // 801CC6AC
  cmpu(c,0,c->r[0],0x00000004u); // 801CC6B0
  if (!crb(c,2)) { goto L_801CC700; } // 801CC6B4
L_801CC6B8:;
  c->r[3]=c->r[29]|c->r[29]; // 801CC6B8
  c->lr=0x801CC6C0u; f_801CCCE8(c); // 801CC6BC
  c->r[31]=c->r[3]|c->r[3]; // 801CC6C0
  c->r[3]=c->r[29]|c->r[29]; // 801CC6C4
  c->lr=0x801CC6CCu; f_801CC728(c); // 801CC6C8
  c->r[12]=R32(c->r[29]+0x0000008Cu); // 801CC6CC
  c->r[3]=c->r[31]|c->r[3]; // 801CC6D0
  c->r[0]=R32(c->r[29]+0x00000088u); // 801CC6D4
  cmps(c,0,(int32_t)c->r[12],0); // 801CC6D8
  c->r[3]=c->r[3]&c->r[0]; // 801CC6DC
  if (crb(c,2)) { goto L_801CC6F8; } // 801CC6E0
  cmps(c,0,(int32_t)c->r[3],0); // 801CC6E4
  if (crb(c,2)) { goto L_801CC6F8; } // 801CC6E8
  c->r[4]=R8(c->r[29]+0x00000000u); // 801CC6EC
  c->ctr=c->r[12]; // 801CC6F0
  if (true) { c->lr=0x801CC6F8u; dispatch(c,c->ctr); } // 801CC6F4
L_801CC6F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CC6F8
  if (!crb(c,2)) { goto L_801CC710; } // 801CC6FC
L_801CC700:;
  c->r[28]=c->r[28]+0x00000001u; // 801CC700
  c->r[30]=c->r[30]+0x000000A4u; // 801CC704
  cmps(c,0,(int32_t)c->r[28],5); // 801CC708
  if (crb(c,0)) { IRQCHK(c); goto L_801CC688; } // 801CC70C
L_801CC710:;
  c->r[11]=c->r[1]+0x00000020u; // 801CC710
  c->lr=0x801CC718u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CC714
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC718
  c->lr=c->r[0]; // 801CC71C
  c->r[1]=c->r[1]+0x00000020u; // 801CC720
  return; // 801CC724
}

// port_rfc_send_tx_data
void f_801CC728(Ctx* __restrict c) {
  trace_call(0x801CC728u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC728
  c->r[0]=c->lr; // 801CC72C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC730
  c->r[11]=c->r[1]+0x00000020u; // 801CC734
  c->lr=0x801CC73Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CC738
  c->r[0]=R32(c->r[3]+0x00000028u); // 801CC73C
  c->r[26]=c->r[3]|c->r[3]; // 801CC740
  c->r[28]=0u+0x00000000u; // 801CC744
  cmps(c,0,(int32_t)c->r[0],0); // 801CC748
  if (crb(c,2)) { goto L_801CC800; } // 801CC74C
  c->r[29]=0u+0x803D0000u; // 801CC750
  c->r[30]=0u+0x00090000u; // 801CC754
  c->r[29]=c->r[29]+0xFFFFB9C8u; // 801CC758
  c->r[31]=0u+0x80330000u; // 801CC75C
  goto L_801CC7D0; // 801CC760
L_801CC764:;
  c->r[3]=c->r[26]+0x00000018u; // 801CC764
  c->lr=0x801CC76Cu; f_801AA8C4(c); // 801CC768
  cmps(c,0,(int32_t)c->r[3],0); // 801CC76C
  c->r[27]=c->r[3]|c->r[3]; // 801CC770
  if (crb(c,2)) { goto L_801CC7C8; } // 801CC774
  c->r[0]=R8(c->r[29]+0x00000414u); // 801CC778
  cmpu(c,0,c->r[0],0x00000004u); // 801CC77C
  if (crb(c,0)) { goto L_801CC790; } // 801CC780
  c->r[3]=c->r[30]+0x00000003u; // 801CC784
  c->r[4]=c->r[31]+0x00005BC4u; // 801CC788
  c->lr=0x801CC790u; f_801ACB20(c); // 801CC78C
L_801CC790:;
  c->r[4]=R16(c->r[27]+0x00000002u); // 801CC790
  c->r[5]=c->r[27]|c->r[27]; // 801CC794
  c->r[0]=R32(c->r[26]+0x00000028u); // 801CC798
  c->r[3]=R32(c->r[26]+0x0000006Cu); // 801CC79C
  c->r[0]=c->r[0]-c->r[4]; // 801CC7A0
  c->r[4]=R8(c->r[26]+0x0000000Du); // 801CC7A4
  W32(c->r[26]+0x00000028u,c->r[0]); // 801CC7A8
  c->lr=0x801CC7B0u; f_801CFB98(c); // 801CC7AC
  c->r[0]=R32(c->r[26]+0x00000028u); // 801CC7B0
  c->r[28]=c->r[28]|0x00004000u; // 801CC7B4
  cmps(c,0,(int32_t)c->r[0],0); // 801CC7B8
  if (!crb(c,2)) { goto L_801CC7D0; } // 801CC7BC
  c->r[28]=c->r[28]|0x00000004u; // 801CC7C0
  goto L_801CC7F4; // 801CC7C4
L_801CC7C8:;
  c->r[28]=c->r[28]|0x00000004u; // 801CC7C8
  goto L_801CC7F4; // 801CC7CC
L_801CC7D0:;
  c->r[0]=R8(c->r[26]+0x00000024u); // 801CC7D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CC7D4
  if (!crb(c,2)) { goto L_801CC7F4; } // 801CC7D8
  c->r[3]=R32(c->r[26]+0x0000006Cu); // 801CC7DC
  cmps(c,0,(int32_t)c->r[3],0); // 801CC7E0
  if (crb(c,2)) { goto L_801CC7F4; } // 801CC7E4
  c->r[0]=R8(c->r[3]+0x00000071u); // 801CC7E8
  cmps(c,0,(int32_t)c->r[0],0); // 801CC7EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC764; } // 801CC7F0
L_801CC7F4:;
  c->r[3]=c->r[26]|c->r[26]; // 801CC7F4
  c->lr=0x801CC7FCu; f_801CCCE8(c); // 801CC7F8
  c->r[28]=c->r[28]|c->r[3]; // 801CC7FC
L_801CC800:;
  c->r[0]=R32(c->r[26]+0x00000088u); // 801CC800
  c->r[11]=c->r[1]+0x00000020u; // 801CC804
  c->r[3]=c->r[28]&c->r[0]; // 801CC808
  c->lr=0x801CC810u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CC80C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC810
  c->lr=c->r[0]; // 801CC814
  c->r[1]=c->r[1]+0x00000020u; // 801CC818
  return; // 801CC81C
}

// port_rfc_closed
void f_801CC820(Ctx* __restrict c) {
  trace_call(0x801CC820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC820
  c->r[0]=c->lr; // 801CC824
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC82C
  c->r[31]=c->r[3]|c->r[3]; // 801CC830
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC834
  c->r[30]=0u+0x00000000u; // 801CC838
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC83C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CC840
  c->r[28]=c->r[4]|c->r[4]; // 801CC844
  c->r[5]=R8(c->r[3]+0x00000002u); // 801CC848
  c->r[29]=R32(c->r[3]+0x0000006Cu); // 801CC84C
  cmpu(c,0,c->r[5],0x00000001u); // 801CC850
  if (!crb(c,2)) { goto L_801CC8CC; } // 801CC854
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801CC858
  cmps(c,0,(int32_t)c->r[0],0); // 801CC85C
  if (crb(c,2)) { goto L_801CC8CC; } // 801CC860
  c->r[3]=0u+0x803D0000u; // 801CC864
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC868
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CC86C
  cmpu(c,0,c->r[0],0x00000004u); // 801CC870
  if (crb(c,0)) { goto L_801CC88C; } // 801CC874
  c->r[3]=0u+0x00090000u; // 801CC878
  c->r[4]=0u+0x80330000u; // 801CC87C
  c->r[3]=c->r[3]+0x00000003u; // 801CC880
  c->r[4]=c->r[4]+0x00005BDCu; // 801CC884
  c->lr=0x801CC88Cu; f_801ACB20(c); // 801CC888
L_801CC88C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC88C
  c->lr=0x801CC894u; f_801D15C8(c); // 801CC890
  c->r[30]=0u+0x00000000u; // 801CC894
  cmps(c,0,(int32_t)c->r[29],0); // 801CC898
  W8(c->r[31]+0x00000068u,c->r[30]); // 801CC89C
  if (crb(c,2)) { goto L_801CC8BC; } // 801CC8A0
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801CC8A4
  c->r[3]=c->r[29]|c->r[29]; // 801CC8A8
  c->r[4]=c->r[29]+c->r[0]; // 801CC8AC
  W8(c->r[4]+0x00000024u,c->r[30]); // 801CC8B0
  c->lr=0x801CC8B8u; f_801D1620(c); // 801CC8B4
  W32(c->r[31]+0x0000006Cu,c->r[30]); // 801CC8B8
L_801CC8BC:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801CC8BC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801CC8C0
  W8(c->r[31]+0x0000000Du,c->r[0]); // 801CC8C4
  goto L_801CC994; // 801CC8C8
L_801CC8CC:;
  cmpu(c,0,c->r[5],0x00000003u); // 801CC8CC
  if (crb(c,2)) { goto L_801CC914; } // 801CC8D0
  cmps(c,0,(int32_t)c->r[5],0); // 801CC8D4
  if (crb(c,2)) { goto L_801CC914; } // 801CC8D8
  c->r[5]=R8(c->r[3]+0x0000000Fu); // 801CC8DC
  c->r[0]=0u+0xFFFFFFF4u; // 801CC8E0
  c->r[4]=R8(c->r[3]+0x0000005Fu); // 801CC8E4
  c->r[6]=c->r[5]|0x00000010u; // 801CC8E8
  c->r[5]=c->r[4]&c->r[0]; // 801CC8EC
  W8(c->r[3]+0x0000000Fu,c->r[6]); // 801CC8F0
  W8(c->r[3]+0x0000005Fu,c->r[5]); // 801CC8F4
  c->r[3]=c->r[31]|c->r[31]; // 801CC8F8
  c->lr=0x801CC900u; f_801CCD58(c); // 801CC8FC
  c->r[0]=R32(c->r[31]+0x00000088u); // 801CC900
  c->r[30]=c->r[3]|c->r[3]; // 801CC904
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 801CC908
  if (crb(c,2)) { goto L_801CC914; } // 801CC90C
  c->r[30]=c->r[3]|0x00008000u; // 801CC910
L_801CC914:;
  c->r[3]=0u+0x803D0000u; // 801CC914
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC918
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CC91C
  cmpu(c,0,c->r[0],0x00000004u); // 801CC920
  if (crb(c,0)) { goto L_801CC944; } // 801CC924
  c->r[3]=0u+0x00090000u; // 801CC928
  c->r[4]=0u+0x80330000u; // 801CC92C
  c->r[5]=R8(c->r[31]+0x00000002u); // 801CC930
  c->r[6]=c->r[30]|c->r[30]; // 801CC934
  c->r[3]=c->r[3]+0x00000003u; // 801CC938
  c->r[4]=c->r[4]+0x00005C08u; // 801CC93C
  c->lr=0x801CC944u; f_801ACB50(c); // 801CC940
L_801CC944:;
  c->r[12]=R32(c->r[31]+0x0000008Cu); // 801CC944
  cmps(c,0,(int32_t)c->r[12],0); // 801CC948
  if (crb(c,2)) { goto L_801CC968; } // 801CC94C
  cmps(c,0,(int32_t)c->r[30],0); // 801CC950
  if (crb(c,2)) { goto L_801CC968; } // 801CC954
  c->r[3]=c->r[30]|c->r[30]; // 801CC958
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CC95C
  c->ctr=c->r[12]; // 801CC960
  if (true) { c->lr=0x801CC968u; dispatch(c,c->ctr); } // 801CC964
L_801CC968:;
  c->r[12]=R32(c->r[31]+0x00000090u); // 801CC968
  cmps(c,0,(int32_t)c->r[12],0); // 801CC96C
  if (crb(c,2)) { goto L_801CC984; } // 801CC970
  c->r[3]=c->r[28]|c->r[28]; // 801CC974
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CC978
  c->ctr=c->r[12]; // 801CC97C
  if (true) { c->lr=0x801CC984u; dispatch(c,c->ctr); } // 801CC980
L_801CC984:;
  c->r[0]=0u+0x00000000u; // 801CC984
  c->r[3]=c->r[31]|c->r[31]; // 801CC988
  W8(c->r[31]+0x00000068u,c->r[0]); // 801CC98C
  c->lr=0x801CC994u; f_801CCB30(c); // 801CC990
L_801CC994:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC994
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC998
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC99C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC9A0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CC9A4
  c->lr=c->r[0]; // 801CC9A8
  c->r[1]=c->r[1]+0x00000020u; // 801CC9AC
  return; // 801CC9B0
}

// port_select_mtu
void f_801CC9B4(Ctx* __restrict c) {
  trace_call(0x801CC9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC9B4
  c->r[0]=c->lr; // 801CC9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC9BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC9C0
  c->r[31]=0u+0x80330000u; // 801CC9C4
  c->r[31]=c->r[31]+0x00005C38u; // 801CC9C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC9CC
  c->r[30]=c->r[3]|c->r[3]; // 801CC9D0
  c->r[5]=R16(c->r[3]+0x00000012u); // 801CC9D4
  cmps(c,0,(int32_t)c->r[5],0); // 801CC9D8
  if (!crb(c,2)) { goto L_801CCA9C; } // 801CC9DC
  c->r[3]=c->r[3]+0x00000006u; // 801CC9E0
  c->lr=0x801CC9E8u; f_801B433C(c); // 801CC9E4
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 801CC9E8
  if (!crb(c,2)) { goto L_801CCA20; } // 801CC9EC
  c->r[3]=0u+0x803D0000u; // 801CC9F0
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CC9F4
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CC9F8
  cmpu(c,0,c->r[0],0x00000002u); // 801CC9FC
  if (crb(c,0)) { goto L_801CCA14; } // 801CCA00
  c->r[3]=0u+0x00090000u; // 801CCA04
  c->r[4]=c->r[31]+0x00000000u; // 801CCA08
  c->r[3]=c->r[3]+0x00000001u; // 801CCA0C
  c->lr=0x801CCA14u; f_801ACB20(c); // 801CCA10
L_801CCA14:;
  c->r[0]=0u+0x0000007Fu; // 801CCA14
  W16(c->r[30]+0x00000012u,c->r[0]); // 801CCA18
  goto L_801CCAC0; // 801CCA1C
L_801CCA20:;
  cmpu(c,0,c->r[5],0x0000069Fu); // 801CCA20
  if (crb(c,1)) { goto L_801CCA68; } // 801CCA24
  c->r[0]=0u+0x0000069Fu; // 801CCA28
  c->r[4]=0u+0x803D0000u; // 801CCA2C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801CCA30
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CCA34
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801CCA38
  c->r[5]=c->r[3]+0xFFFFFFF6u; // 801CCA3C
  W16(c->r[30]+0x00000012u,c->r[5]); // 801CCA40
  c->r[0]=R8(c->r[4]+0x00000414u); // 801CCA44
  cmpu(c,0,c->r[0],0x00000005u); // 801CCA48
  if (crb(c,0)) { goto L_801CCAC0; } // 801CCA4C
  c->r[3]=0u+0x00090000u; // 801CCA50
  c->r[4]=c->r[31]+0x00000020u; // 801CCA54
  c->r[3]=c->r[3]+0x00000004u; // 801CCA58
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801CCA5C
  c->lr=0x801CCA64u; f_801ACB38(c); // 801CCA60
  goto L_801CCAC0; // 801CCA64
L_801CCA68:;
  c->r[0]=0u+0x00000695u; // 801CCA68
  c->r[3]=0u+0x803D0000u; // 801CCA6C
  W16(c->r[30]+0x00000012u,c->r[0]); // 801CCA70
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CCA74
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CCA78
  cmpu(c,0,c->r[0],0x00000005u); // 801CCA7C
  if (crb(c,0)) { goto L_801CCAC0; } // 801CCA80
  c->r[3]=0u+0x00090000u; // 801CCA84
  c->r[4]=c->r[31]+0x00000058u; // 801CCA88
  c->r[3]=c->r[3]+0x00000004u; // 801CCA8C
  c->r[5]=0u+0x00000695u; // 801CCA90
  c->lr=0x801CCA98u; f_801ACB38(c); // 801CCA94
  goto L_801CCAC0; // 801CCA98
L_801CCA9C:;
  c->r[3]=0u+0x803D0000u; // 801CCA9C
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CCAA0
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CCAA4
  cmpu(c,0,c->r[0],0x00000005u); // 801CCAA8
  if (crb(c,0)) { goto L_801CCAC0; } // 801CCAAC
  c->r[3]=0u+0x00090000u; // 801CCAB0
  c->r[4]=c->r[31]+0x00000090u; // 801CCAB4
  c->r[3]=c->r[3]+0x00000004u; // 801CCAB8
  c->lr=0x801CCAC0u; f_801ACB38(c); // 801CCABC
L_801CCAC0:;
  c->r[7]=R16(c->r[30]+0x00000012u); // 801CCAC0
  c->r[3]=0u+0x00001F40u; // 801CCAC4
  c->r[4]=0u+0x00001388u; // 801CCAC8
  c->r[0]=0u+0x00002EE0u; // 801CCACC
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[7]); // 801CCAD0
  c->r[3]=0u+0x803D0000u; // 801CCAD4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CCAD8
  c->r[6]=divw((int32_t)c->r[4],(int32_t)c->r[7]); // 801CCADC
  W16(c->r[30]+0x0000009Cu,c->r[5]); // 801CCAE0
  c->r[7]=divw((int32_t)c->r[0],(int32_t)c->r[7]); // 801CCAE4
  W16(c->r[30]+0x0000009Eu,c->r[6]); // 801CCAE8
  W16(c->r[30]+0x000000A0u,c->r[7]); // 801CCAEC
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CCAF0
  cmpu(c,0,c->r[0],0x00000005u); // 801CCAF4
  if (crb(c,0)) { goto L_801CCB18; } // 801CCAF8
  c->r[3]=0u+0x00090000u; // 801CCAFC
  c->r[4]=c->r[31]+0x000000B8u; // 801CCB00
  c->r[3]=c->r[3]+0x00000004u; // 801CCB04
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801CCB08
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 801CCB0C
  c->r[7]=rotl(c->r[7],0)&0x0000FFFFu; // 801CCB10
  c->lr=0x801CCB18u; f_801ACB68(c); // 801CCB14
L_801CCB18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCB18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCB1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CCB20
  c->lr=c->r[0]; // 801CCB24
  c->r[1]=c->r[1]+0x00000010u; // 801CCB28
  return; // 801CCB2C
}

// port_release_port
void f_801CCB30(Ctx* __restrict c) {
  trace_call(0x801CCB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCB30
  c->r[0]=c->lr; // 801CCB34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCB38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCB3C
  c->r[31]=c->r[3]|c->r[3]; // 801CCB40
  goto L_801CCB4C; // 801CCB44
L_801CCB48:;
  c->lr=0x801CCB4Cu; f_801AA228(c); // 801CCB48
L_801CCB4C:;
  c->r[3]=c->r[31]+0x00000030u; // 801CCB4C
  c->lr=0x801CCB54u; f_801AA8C4(c); // 801CCB50
  cmps(c,0,(int32_t)c->r[3],0); // 801CCB54
  if (!crb(c,2)) { IRQCHK(c); goto L_801CCB48; } // 801CCB58
  c->r[0]=0u+0x00000000u; // 801CCB5C
  W32(c->r[31]+0x00000040u,c->r[0]); // 801CCB60
  goto L_801CCB6C; // 801CCB64
L_801CCB68:;
  c->lr=0x801CCB6Cu; f_801AA228(c); // 801CCB68
L_801CCB6C:;
  c->r[3]=c->r[31]+0x00000018u; // 801CCB6C
  c->lr=0x801CCB74u; f_801AA8C4(c); // 801CCB70
  cmps(c,0,(int32_t)c->r[3],0); // 801CCB74
  if (!crb(c,2)) { IRQCHK(c); goto L_801CCB68; } // 801CCB78
  c->r[0]=R8(c->r[31]+0x00000068u); // 801CCB7C
  c->r[3]=0u+0x00000000u; // 801CCB80
  W32(c->r[31]+0x00000028u,c->r[3]); // 801CCB84
  cmps(c,0,(int32_t)c->r[0],0); // 801CCB88
  W8(c->r[31]+0x00000002u,c->r[3]); // 801CCB8C
  if (!crb(c,2)) { goto L_801CCBF8; } // 801CCB90
  c->r[3]=0u+0x803D0000u; // 801CCB94
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CCB98
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CCB9C
  cmpu(c,0,c->r[0],0x00000005u); // 801CCBA0
  if (crb(c,0)) { goto L_801CCBBC; } // 801CCBA4
  c->r[3]=0u+0x00090000u; // 801CCBA8
  c->r[4]=0u+0x80330000u; // 801CCBAC
  c->r[3]=c->r[3]+0x00000004u; // 801CCBB0
  c->r[4]=c->r[4]+0x00005D38u; // 801CCBB4
  c->lr=0x801CCBBCu; f_801ACB20(c); // 801CCBB8
L_801CCBBC:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CCBBC
  cmps(c,0,(int32_t)c->r[3],0); // 801CCBC0
  if (crb(c,2)) { goto L_801CCBE0; } // 801CCBC4
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801CCBC8
  c->r[4]=0u+0x00000000u; // 801CCBCC
  c->r[3]=c->r[3]+c->r[0]; // 801CCBD0
  W8(c->r[3]+0x00000024u,c->r[4]); // 801CCBD4
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CCBD8
  c->lr=0x801CCBE0u; f_801D1620(c); // 801CCBDC
L_801CCBE0:;
  c->r[3]=c->r[31]|c->r[31]; // 801CCBE0
  c->lr=0x801CCBE8u; f_801D15C8(c); // 801CCBE4
  c->r[3]=c->r[31]|c->r[31]; // 801CCBE8
  c->r[4]=0u+0x00000000u; // 801CCBEC
  c->r[5]=0u+0x000000A4u; // 801CCBF0
  c->lr=0x801CCBF8u; f_80004688(c); // 801CCBF4
L_801CCBF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCBF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCBFC
  c->lr=c->r[0]; // 801CCC00
  c->r[1]=c->r[1]+0x00000010u; // 801CCC04
  return; // 801CCC08
}

// port_find_mcb_dlci_port
void f_801CCC0C(Ctx* __restrict c) {
  trace_call(0x801CCC0Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 801CCC0C
  if (!crb(c,2)) { goto L_801CCC1C; } // 801CCC10
  c->r[3]=0u+0x00000000u; // 801CCC14
  return; // 801CCC18
L_801CCC1C:;
  cmpu(c,0,c->r[4],0x0000003Du); // 801CCC1C
  if (!crb(c,1)) { goto L_801CCC2C; } // 801CCC20
  c->r[3]=0u+0x00000000u; // 801CCC24
  return; // 801CCC28
L_801CCC2C:;
  c->r[3]=c->r[3]+c->r[4]; // 801CCC2C
  c->r[3]=R8(c->r[3]+0x00000024u); // 801CCC30
  cmps(c,0,(int32_t)c->r[3],0); // 801CCC34
  if (!crb(c,2)) { goto L_801CCC44; } // 801CCC38
  c->r[3]=0u+0x00000000u; // 801CCC3C
  return; // 801CCC40
L_801CCC44:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CCC44
  c->r[3]=0u+0x803D0000u; // 801CCC48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)164); // 801CCC4C
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CCC50
  c->r[3]=c->r[3]+c->r[0]; // 801CCC54
  c->r[3]=c->r[3]+0x00000068u; // 801CCC58
  return; // 801CCC5C
}

// port_find_dlci_port
void f_801CCC60(Ctx* __restrict c) {
  trace_call(0x801CCC60u);
  c->r[5]=0u+0x803D0000u; // 801CCC60
  c->r[0]=0u+0x00000005u; // 801CCC64
  c->r[6]=rotl(c->r[3],0)&0x00000001u; // 801CCC68
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 801CCC6C
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CCC70
  c->r[8]=0u+0x00000000u; // 801CCC74
  c->ctr=c->r[0]; // 801CCC78
L_801CCC7C:;
  c->r[0]=rotl(c->r[8],0)&0x0000FFFFu; // 801CCC7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)164); // 801CCC80
  c->r[4]=c->r[5]+c->r[0]; // 801CCC84
  c->r[0]=R8(c->r[4]+0x00000069u); // 801CCC88
  c->r[9]=c->r[4]+0x00000068u; // 801CCC8C
  cmps(c,0,(int32_t)c->r[0],0); // 801CCC90
  if (crb(c,2)) { goto L_801CCCD8; } // 801CCC94
  c->r[0]=R32(c->r[9]+0x0000006Cu); // 801CCC98
  cmps(c,0,(int32_t)c->r[0],0); // 801CCC9C
  if (!crb(c,2)) { goto L_801CCCD8; } // 801CCCA0
  c->r[4]=R8(c->r[9]+0x0000000Du); // 801CCCA4
  cmpu(c,0,c->r[4],c->r[3]); // 801CCCA8
  if (!crb(c,2)) { goto L_801CCCB8; } // 801CCCAC
  c->r[3]=c->r[9]|c->r[9]; // 801CCCB0
  return; // 801CCCB4
L_801CCCB8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CCCB8
  if (crb(c,2)) { goto L_801CCCD8; } // 801CCCBC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 801CCCC0
  if (!crb(c,2)) { goto L_801CCCD8; } // 801CCCC4
  c->r[0]=c->r[4]+0x00000001u; // 801CCCC8
  c->r[3]=c->r[9]|c->r[9]; // 801CCCCC
  W8(c->r[9]+0x0000000Du,c->r[0]); // 801CCCD0
  return; // 801CCCD4
L_801CCCD8:;
  c->r[8]=c->r[8]+0x00000001u; // 801CCCD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CCC7C; } // 801CCCDC
  c->r[3]=0u+0x00000000u; // 801CCCE0
  return; // 801CCCE4
}

// port_flow_control_user
void f_801CCCE8(Ctx* __restrict c) {
  trace_call(0x801CCCE8u);
  c->r[0]=R8(c->r[3]+0x00000024u); // 801CCCE8
  c->r[5]=0u+0x00000000u; // 801CCCEC
  cmps(c,0,(int32_t)c->r[0],0); // 801CCCF0
  if (!crb(c,2)) { goto L_801CCD28; } // 801CCCF4
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801CCCF8
  cmps(c,0,(int32_t)c->r[4],0); // 801CCCFC
  if (crb(c,2)) { goto L_801CCD28; } // 801CCD00
  c->r[0]=R8(c->r[4]+0x00000071u); // 801CCD04
  cmps(c,0,(int32_t)c->r[0],0); // 801CCD08
  if (crb(c,2)) { goto L_801CCD28; } // 801CCD0C
  c->r[0]=R32(c->r[3]+0x00000028u); // 801CCD10
  cmpu(c,0,c->r[0],0x00001F40u); // 801CCD14
  if (crb(c,1)) { goto L_801CCD28; } // 801CCD18
  c->r[0]=R16(c->r[3]+0x00000020u); // 801CCD1C
  cmpu(c,0,c->r[0],0x00000010u); // 801CCD20
  if (!crb(c,1)) { goto L_801CCD2C; } // 801CCD24
L_801CCD28:;
  c->r[5]=0u+0x00000001u; // 801CCD28
L_801CCD2C:;
  c->r[0]=R8(c->r[3]+0x00000025u); // 801CCD2C
  cmpu(c,0,c->r[0],c->r[5]); // 801CCD30
  if (!crb(c,2)) { goto L_801CCD40; } // 801CCD34
  c->r[3]=0u+0x00000000u; // 801CCD38
  return; // 801CCD3C
L_801CCD40:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CCD40
  W8(c->r[3]+0x00000025u,c->r[5]); // 801CCD44
  c->r[3]=0u+0x00030000u; // 801CCD48
  if (crb(c,2)) return; // 801CCD4C
  c->r[3]=0u+0x00010000u; // 801CCD50
  return; // 801CCD54
}

// port_get_signal_changes
void f_801CCD58(Ctx* __restrict c) {
  trace_call(0x801CCD58u);
  c->r[4]=c->r[5]^c->r[4]; // 801CCD58
  c->r[6]=0u+0x00000000u; // 801CCD5C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CCD60
  if (crb(c,2)) { goto L_801CCD78; } // 801CCD64
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801CCD68
  c->r[6]=c->r[6]|0x00000010u; // 801CCD6C
  if (crb(c,2)) { goto L_801CCD78; } // 801CCD70
  c->r[6]=c->r[6]|0x00000800u; // 801CCD74
L_801CCD78:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801CCD78
  if (crb(c,2)) { goto L_801CCD90; } // 801CCD7C
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801CCD80
  c->r[6]=c->r[6]|0x00000008u; // 801CCD84
  if (crb(c,2)) { goto L_801CCD90; } // 801CCD88
  c->r[6]=c->r[6]|0x00000400u; // 801CCD8C
L_801CCD90:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801CCD90
  if (crb(c,2)) { goto L_801CCD9C; } // 801CCD94
  c->r[6]=c->r[6]|0x00000100u; // 801CCD98
L_801CCD9C:;
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801CCD9C
  if (crb(c,2)) { goto L_801CCDB4; } // 801CCDA0
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 801CCDA4
  c->r[6]=c->r[6]|0x00000020u; // 801CCDA8
  if (crb(c,2)) { goto L_801CCDB4; } // 801CCDAC
  c->r[6]=c->r[6]|0x00001000u; // 801CCDB0
L_801CCDB4:;
  c->r[0]=R32(c->r[3]+0x00000088u); // 801CCDB4
  c->r[3]=c->r[0]&c->r[6]; // 801CCDB8
  return; // 801CCDBC
}

// port_flow_control_peer
void f_801CCDC0(Ctx* __restrict c) {
  trace_call(0x801CCDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCDC0
  c->r[0]=c->lr; // 801CCDC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCDC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCDCC
  c->r[31]=c->r[3]|c->r[3]; // 801CCDD0
  c->r[6]=R32(c->r[3]+0x0000006Cu); // 801CCDD4
  cmps(c,0,(int32_t)c->r[6],0); // 801CCDD8
  if (crb(c,2)) { goto L_801CCF78; } // 801CCDDC
  c->r[0]=R8(c->r[6]+0x00000072u); // 801CCDE0
  cmpu(c,0,c->r[0],0x00000002u); // 801CCDE4
  if (!crb(c,2)) { goto L_801CCE98; } // 801CCDE8
  cmps(c,0,(int32_t)c->r[4],0); // 801CCDEC
  if (crb(c,2)) { goto L_801CCE64; } // 801CCDF0
  c->r[0]=R16(c->r[3]+0x0000009Au); // 801CCDF4
  cmpu(c,0,c->r[5],c->r[0]); // 801CCDF8
  if (!crb(c,1)) { goto L_801CCE0C; } // 801CCDFC
  c->r[0]=0u+0x00000000u; // 801CCE00
  W16(c->r[3]+0x0000009Au,c->r[0]); // 801CCE04
  goto L_801CCE14; // 801CCE08
L_801CCE0C:;
  c->r[0]=c->r[0]-c->r[5]; // 801CCE0C
  W16(c->r[3]+0x0000009Au,c->r[0]); // 801CCE10
L_801CCE14:;
  c->r[4]=R16(c->r[3]+0x0000009Au); // 801CCE14
  c->r[0]=R16(c->r[3]+0x0000009Eu); // 801CCE18
  cmpu(c,0,c->r[4],c->r[0]); // 801CCE1C
  if (crb(c,1)) { goto L_801CCF78; } // 801CCE20
  c->r[0]=R8(c->r[3]+0x0000003Du); // 801CCE24
  cmps(c,0,(int32_t)c->r[0],0); // 801CCE28
  if (!crb(c,2)) { goto L_801CCF78; } // 801CCE2C
  c->r[0]=R16(c->r[3]+0x0000009Cu); // 801CCE30
  cmpu(c,0,c->r[0],c->r[4]); // 801CCE34
  if (!crb(c,1)) { goto L_801CCF78; } // 801CCE38
  c->r[0]=c->r[0]-c->r[4]; // 801CCE3C
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CCE40
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CCE44
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801CCE48
  c->lr=0x801CCE50u; f_801D05C0(c); // 801CCE4C
  c->r[3]=R16(c->r[31]+0x0000009Cu); // 801CCE50
  c->r[0]=0u+0x00000000u; // 801CCE54
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 801CCE58
  W16(c->r[31]+0x0000009Au,c->r[3]); // 801CCE5C
  goto L_801CCF78; // 801CCE60
L_801CCE64:;
  c->r[0]=R32(c->r[3]+0x00000094u); // 801CCE64
  cmps(c,0,(int32_t)c->r[0],0); // 801CCE68
  if (crb(c,2)) { goto L_801CCE7C; } // 801CCE6C
  c->r[0]=0u+0x00000001u; // 801CCE70
  W8(c->r[3]+0x0000003Cu,c->r[0]); // 801CCE74
  goto L_801CCF78; // 801CCE78
L_801CCE7C:;
  c->r[4]=R16(c->r[3]+0x00000038u); // 801CCE7C
  c->r[0]=R16(c->r[3]+0x0000009Cu); // 801CCE80
  cmpu(c,0,c->r[4],c->r[0]); // 801CCE84
  if (crb(c,0)) { goto L_801CCF78; } // 801CCE88
  c->r[0]=0u+0x00000001u; // 801CCE8C
  W8(c->r[3]+0x0000003Cu,c->r[0]); // 801CCE90
  goto L_801CCF78; // 801CCE94
L_801CCE98:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CCE98
  if (crb(c,2)) { goto L_801CCEEC; } // 801CCE9C
  c->r[0]=R8(c->r[3]+0x0000003Cu); // 801CCEA0
  cmps(c,0,(int32_t)c->r[0],0); // 801CCEA4
  if (crb(c,2)) { goto L_801CCF78; } // 801CCEA8
  c->r[0]=R32(c->r[3]+0x00000040u); // 801CCEAC
  cmpu(c,0,c->r[0],0x00001388u); // 801CCEB0
  if (!crb(c,0)) { goto L_801CCF78; } // 801CCEB4
  c->r[0]=R16(c->r[3]+0x00000038u); // 801CCEB8
  cmpu(c,0,c->r[0],0x00000008u); // 801CCEBC
  if (!crb(c,0)) { goto L_801CCF78; } // 801CCEC0
  c->r[0]=R8(c->r[3]+0x0000003Du); // 801CCEC4
  c->r[4]=0u+0x00000000u; // 801CCEC8
  W8(c->r[3]+0x0000003Cu,c->r[4]); // 801CCECC
  cmps(c,0,(int32_t)c->r[0],0); // 801CCED0
  if (!crb(c,2)) { goto L_801CCF78; } // 801CCED4
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CCED8
  c->r[3]=c->r[6]|c->r[6]; // 801CCEDC
  c->r[5]=0u+0x00000001u; // 801CCEE0
  c->lr=0x801CCEE8u; f_801CFA30(c); // 801CCEE4
  goto L_801CCF78; // 801CCEE8
L_801CCEEC:;
  c->r[0]=R32(c->r[3]+0x00000094u); // 801CCEEC
  cmps(c,0,(int32_t)c->r[0],0); // 801CCEF0
  if (crb(c,2)) { goto L_801CCF14; } // 801CCEF4
  c->r[0]=0u+0x00000001u; // 801CCEF8
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CCEFC
  W8(c->r[3]+0x0000003Cu,c->r[0]); // 801CCF00
  c->r[3]=c->r[6]|c->r[6]; // 801CCF04
  c->r[5]=0u+0x00000000u; // 801CCF08
  c->lr=0x801CCF10u; f_801CFA30(c); // 801CCF0C
  goto L_801CCF78; // 801CCF10
L_801CCF14:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 801CCF14
  cmpu(c,0,c->r[0],0x00001F40u); // 801CCF18
  if (crb(c,1)) { goto L_801CCF2C; } // 801CCF1C
  c->r[0]=R16(c->r[3]+0x00000038u); // 801CCF20
  cmpu(c,0,c->r[0],0x00000010u); // 801CCF24
  if (!crb(c,1)) { goto L_801CCF78; } // 801CCF28
L_801CCF2C:;
  c->r[0]=R8(c->r[3]+0x0000003Cu); // 801CCF2C
  cmps(c,0,(int32_t)c->r[0],0); // 801CCF30
  if (!crb(c,2)) { goto L_801CCF78; } // 801CCF34
  c->r[3]=0u+0x803D0000u; // 801CCF38
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CCF3C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CCF40
  cmpu(c,0,c->r[0],0x00000004u); // 801CCF44
  if (crb(c,0)) { goto L_801CCF60; } // 801CCF48
  c->r[3]=0u+0x00090000u; // 801CCF4C
  c->r[4]=0u+0x80330000u; // 801CCF50
  c->r[3]=c->r[3]+0x00000003u; // 801CCF54
  c->r[4]=c->r[4]+0x00005D50u; // 801CCF58
  c->lr=0x801CCF60u; f_801ACB20(c); // 801CCF5C
L_801CCF60:;
  c->r[0]=0u+0x00000001u; // 801CCF60
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CCF64
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 801CCF68
  c->r[5]=0u+0x00000000u; // 801CCF6C
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CCF70
  c->lr=0x801CCF78u; f_801CFA30(c); // 801CCF74
L_801CCF78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCF78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCF7C
  c->lr=c->r[0]; // 801CCF80
  c->r[1]=c->r[1]+0x00000010u; // 801CCF84
  return; // 801CCF88
}

// rfcomm_l2cap_if_init
void f_801CCF8C(Ctx* __restrict c) {
  trace_call(0x801CCF8Cu);
  c->r[3]=0u+0x801D0000u; // 801CCF8C
  c->r[4]=0u+0x803D0000u; // 801CCF90
  c->r[3]=c->r[3]+0xFFFFD008u; // 801CCF94
  c->r[11]=0u+0x801D0000u; // 801CCF98
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CCF9C
  c->r[10]=0u+0x801D0000u; // 801CCFA0
  c->r[9]=0u+0x801D0000u; // 801CCFA4
  c->r[8]=0u+0x801D0000u; // 801CCFA8
  c->r[7]=0u+0x801D0000u; // 801CCFAC
  c->r[6]=0u+0x801D0000u; // 801CCFB0
  c->r[5]=0u+0x801D0000u; // 801CCFB4
  {uint32_t ea=c->r[4]+0x00000014u; W32(ea,c->r[3]); c->r[4]=ea;} // 801CCFB8
  c->r[0]=0u+0x00000000u; // 801CCFBC
  c->r[11]=c->r[11]+0xFFFFD094u; // 801CCFC0
  c->r[10]=c->r[10]+0xFFFFD198u; // 801CCFC4
  c->r[9]=c->r[9]+0xFFFFD2A0u; // 801CCFC8
  c->r[8]=c->r[8]+0xFFFFD3ACu; // 801CCFCC
  c->r[7]=c->r[7]+0xFFFFD3A8u; // 801CCFD0
  c->r[6]=c->r[6]+0xFFFFD4D0u; // 801CCFD4
  c->r[5]=c->r[5]+0xFFFFD770u; // 801CCFD8
  W32(c->r[4]+0x00000004u,c->r[11]); // 801CCFDC
  c->r[3]=0u+0x00000003u; // 801CCFE0
  W32(c->r[4]+0x00000008u,c->r[0]); // 801CCFE4
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 801CCFE8
  W32(c->r[4]+0x00000010u,c->r[9]); // 801CCFEC
  W32(c->r[4]+0x00000014u,c->r[8]); // 801CCFF0
  W32(c->r[4]+0x00000018u,c->r[0]); // 801CCFF4
  W32(c->r[4]+0x0000001Cu,c->r[7]); // 801CCFF8
  W32(c->r[4]+0x00000020u,c->r[6]); // 801CCFFC
  W32(c->r[4]+0x00000024u,c->r[5]); // 801CD000
  f_801C5440(c); return; // 801CD004
}

// RFCOMM_ConnectInd
void f_801CD008(Ctx* __restrict c) {
  trace_call(0x801CD008u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD008
  c->r[0]=c->lr; // 801CD00C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD010
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD014
  c->r[31]=c->r[4]|c->r[4]; // 801CD018
  c->r[4]=0u+0x00000000u; // 801CD01C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD020
  c->r[30]=c->r[3]|c->r[3]; // 801CD024
  W8(c->r[1]+0x00000008u,c->r[6]); // 801CD028
  c->lr=0x801CD030u; f_801D129C(c); // 801CD02C
  c->r[0]=c->r[31]+0xFFFFFFC0u; // 801CD030
  c->r[4]=0u+0x803D0000u; // 801CD034
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CD038
  cmps(c,0,(int32_t)c->r[3],0); // 801CD03C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD040
  c->r[4]=c->r[4]+c->r[0]; // 801CD044
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801CD048
  if (!crb(c,2)) { goto L_801CD06C; } // 801CD04C
  c->r[4]=R8(c->r[1]+0x00000008u); // 801CD050
  c->r[3]=c->r[30]|c->r[30]; // 801CD054
  c->r[5]=c->r[31]|c->r[31]; // 801CD058
  c->r[6]=0u+0x00000004u; // 801CD05C
  c->r[7]=0u+0x00000000u; // 801CD060
  c->lr=0x801CD068u; f_801C58A0(c); // 801CD064
  goto L_801CD07C; // 801CD068
L_801CD06C:;
  W16(c->r[3]+0x00000068u,c->r[31]); // 801CD06C
  c->r[5]=c->r[1]+0x00000008u; // 801CD070
  c->r[4]=0u+0x0000000Au; // 801CD074
  c->lr=0x801CD07Cu; f_801CD8C0(c); // 801CD078
L_801CD07C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD07C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD080
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD084
  c->lr=c->r[0]; // 801CD088
  c->r[1]=c->r[1]+0x00000020u; // 801CD08C
  return; // 801CD090
}

// RFCOMM_ConnectCnf
void f_801CD094(Ctx* __restrict c) {
  trace_call(0x801CD094u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD094
  c->r[0]=c->lr; // 801CD098
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD09C
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801CD0A0
  cmps(c,0,(int32_t)c->r[0],10); // 801CD0A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD0A8
  c->r[31]=0u+0x80330000u; // 801CD0AC
  c->r[31]=c->r[31]+0x00005D80u; // 801CD0B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD0B4
  c->r[30]=c->r[3]|c->r[3]; // 801CD0B8
  W16(c->r[1]+0x00000008u,c->r[4]); // 801CD0BC
  if (crb(c,0)) { goto L_801CD0F0; } // 801CD0C0
  c->r[3]=0u+0x803D0000u; // 801CD0C4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD0C8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD0CC
  cmpu(c,0,c->r[0],0x00000001u); // 801CD0D0
  if (crb(c,0)) { goto L_801CD0E8; } // 801CD0D4
  c->r[5]=c->r[30]|c->r[30]; // 801CD0D8
  c->r[4]=c->r[31]+0x00000000u; // 801CD0DC
  c->r[3]=0u+0x00090000u; // 801CD0E0
  c->lr=0x801CD0E8u; f_801ACB38(c); // 801CD0E4
L_801CD0E8:;
  c->r[4]=0u+0x00000000u; // 801CD0E8
  goto L_801CD13C; // 801CD0EC
L_801CD0F0:;
  c->r[5]=0u+0x803D0000u; // 801CD0F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD0F4
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CD0F8
  c->r[4]=c->r[5]+c->r[0]; // 801CD0FC
  c->r[4]=R32(c->r[4]+0x0000003Cu); // 801CD100
  cmps(c,0,(int32_t)c->r[4],0); // 801CD104
  if (crb(c,2)) { goto L_801CD13C; } // 801CD108
  c->r[6]=R16(c->r[4]+0x00000068u); // 801CD10C
  cmpu(c,0,c->r[6],c->r[3]); // 801CD110
  if (crb(c,2)) { goto L_801CD13C; } // 801CD114
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CD118
  cmpu(c,0,c->r[0],0x00000002u); // 801CD11C
  if (crb(c,0)) { goto L_801CD138; } // 801CD120
  c->r[3]=0u+0x00090000u; // 801CD124
  c->r[5]=c->r[30]|c->r[30]; // 801CD128
  c->r[4]=c->r[31]+0x0000001Cu; // 801CD12C
  c->r[3]=c->r[3]+0x00000001u; // 801CD130
  c->lr=0x801CD138u; f_801ACB50(c); // 801CD134
L_801CD138:;
  c->r[4]=0u+0x00000000u; // 801CD138
L_801CD13C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CD13C
  if (!crb(c,2)) { goto L_801CD16C; } // 801CD140
  c->r[3]=0u+0x803D0000u; // 801CD144
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD148
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD14C
  cmpu(c,0,c->r[0],0x00000001u); // 801CD150
  if (crb(c,0)) { goto L_801CD180; } // 801CD154
  c->r[5]=c->r[30]|c->r[30]; // 801CD158
  c->r[4]=c->r[31]+0x00000054u; // 801CD15C
  c->r[3]=0u+0x00090000u; // 801CD160
  c->lr=0x801CD168u; f_801ACB38(c); // 801CD164
  goto L_801CD180; // 801CD168
L_801CD16C:;
  W16(c->r[4]+0x00000068u,c->r[30]); // 801CD16C
  c->r[3]=c->r[4]|c->r[4]; // 801CD170
  c->r[5]=c->r[1]+0x00000008u; // 801CD174
  c->r[4]=0u+0x00000009u; // 801CD178
  c->lr=0x801CD180u; f_801CD8C0(c); // 801CD17C
L_801CD180:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD180
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD184
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD188
  c->lr=c->r[0]; // 801CD18C
  c->r[1]=c->r[1]+0x00000020u; // 801CD190
  return; // 801CD194
}

// fn_801CD198
void f_801CD198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD198
  c->r[0]=c->lr; // 801CD19C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD1A0
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801CD1A4
  cmps(c,0,(int32_t)c->r[0],10); // 801CD1A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD1AC
  c->r[31]=0u+0x80330000u; // 801CD1B0
  c->r[31]=c->r[31]+0x00005D80u; // 801CD1B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD1B8
  c->r[30]=c->r[4]|c->r[4]; // 801CD1BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD1C0
  c->r[29]=c->r[3]|c->r[3]; // 801CD1C4
  if (crb(c,0)) { goto L_801CD1F8; } // 801CD1C8
  c->r[3]=0u+0x803D0000u; // 801CD1CC
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD1D0
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD1D4
  cmpu(c,0,c->r[0],0x00000001u); // 801CD1D8
  if (crb(c,0)) { goto L_801CD1F0; } // 801CD1DC
  c->r[5]=c->r[29]|c->r[29]; // 801CD1E0
  c->r[4]=c->r[31]+0x00000000u; // 801CD1E4
  c->r[3]=0u+0x00090000u; // 801CD1E8
  c->lr=0x801CD1F0u; f_801ACB38(c); // 801CD1EC
L_801CD1F0:;
  c->r[4]=0u+0x00000000u; // 801CD1F0
  goto L_801CD244; // 801CD1F4
L_801CD1F8:;
  c->r[5]=0u+0x803D0000u; // 801CD1F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD1FC
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CD200
  c->r[4]=c->r[5]+c->r[0]; // 801CD204
  c->r[4]=R32(c->r[4]+0x0000003Cu); // 801CD208
  cmps(c,0,(int32_t)c->r[4],0); // 801CD20C
  if (crb(c,2)) { goto L_801CD244; } // 801CD210
  c->r[6]=R16(c->r[4]+0x00000068u); // 801CD214
  cmpu(c,0,c->r[6],c->r[3]); // 801CD218
  if (crb(c,2)) { goto L_801CD244; } // 801CD21C
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CD220
  cmpu(c,0,c->r[0],0x00000002u); // 801CD224
  if (crb(c,0)) { goto L_801CD240; } // 801CD228
  c->r[3]=0u+0x00090000u; // 801CD22C
  c->r[5]=c->r[29]|c->r[29]; // 801CD230
  c->r[4]=c->r[31]+0x0000001Cu; // 801CD234
  c->r[3]=c->r[3]+0x00000001u; // 801CD238
  c->lr=0x801CD240u; f_801ACB50(c); // 801CD23C
L_801CD240:;
  c->r[4]=0u+0x00000000u; // 801CD240
L_801CD244:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CD244
  if (!crb(c,2)) { goto L_801CD274; } // 801CD248
  c->r[3]=0u+0x803D0000u; // 801CD24C
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD250
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD254
  cmpu(c,0,c->r[0],0x00000001u); // 801CD258
  if (crb(c,0)) { goto L_801CD284; } // 801CD25C
  c->r[5]=c->r[29]|c->r[29]; // 801CD260
  c->r[4]=c->r[31]+0x00000070u; // 801CD264
  c->r[3]=0u+0x00090000u; // 801CD268
  c->lr=0x801CD270u; f_801ACB38(c); // 801CD26C
  goto L_801CD284; // 801CD270
L_801CD274:;
  c->r[3]=c->r[4]|c->r[4]; // 801CD274
  c->r[5]=c->r[30]|c->r[30]; // 801CD278
  c->r[4]=0u+0x0000000Cu; // 801CD27C
  c->lr=0x801CD284u; f_801CD8C0(c); // 801CD280
L_801CD284:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD284
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD288
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD28C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD290
  c->lr=c->r[0]; // 801CD294
  c->r[1]=c->r[1]+0x00000020u; // 801CD298
  return; // 801CD29C
}

// fn_801CD2A0
void f_801CD2A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD2A0
  c->r[0]=c->lr; // 801CD2A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD2A8
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801CD2AC
  cmps(c,0,(int32_t)c->r[0],10); // 801CD2B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD2B4
  c->r[31]=0u+0x80330000u; // 801CD2B8
  c->r[31]=c->r[31]+0x00005D80u; // 801CD2BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD2C0
  c->r[30]=c->r[4]|c->r[4]; // 801CD2C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD2C8
  c->r[29]=c->r[3]|c->r[3]; // 801CD2CC
  if (crb(c,0)) { goto L_801CD300; } // 801CD2D0
  c->r[3]=0u+0x803D0000u; // 801CD2D4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD2D8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD2DC
  cmpu(c,0,c->r[0],0x00000001u); // 801CD2E0
  if (crb(c,0)) { goto L_801CD2F8; } // 801CD2E4
  c->r[5]=c->r[29]|c->r[29]; // 801CD2E8
  c->r[4]=c->r[31]+0x00000000u; // 801CD2EC
  c->r[3]=0u+0x00090000u; // 801CD2F0
  c->lr=0x801CD2F8u; f_801ACB38(c); // 801CD2F4
L_801CD2F8:;
  c->r[4]=0u+0x00000000u; // 801CD2F8
  goto L_801CD34C; // 801CD2FC
L_801CD300:;
  c->r[5]=0u+0x803D0000u; // 801CD300
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD304
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CD308
  c->r[4]=c->r[5]+c->r[0]; // 801CD30C
  c->r[4]=R32(c->r[4]+0x0000003Cu); // 801CD310
  cmps(c,0,(int32_t)c->r[4],0); // 801CD314
  if (crb(c,2)) { goto L_801CD34C; } // 801CD318
  c->r[6]=R16(c->r[4]+0x00000068u); // 801CD31C
  cmpu(c,0,c->r[6],c->r[3]); // 801CD320
  if (crb(c,2)) { goto L_801CD34C; } // 801CD324
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CD328
  cmpu(c,0,c->r[0],0x00000002u); // 801CD32C
  if (crb(c,0)) { goto L_801CD348; } // 801CD330
  c->r[3]=0u+0x00090000u; // 801CD334
  c->r[5]=c->r[29]|c->r[29]; // 801CD338
  c->r[4]=c->r[31]+0x0000001Cu; // 801CD33C
  c->r[3]=c->r[3]+0x00000001u; // 801CD340
  c->lr=0x801CD348u; f_801ACB50(c); // 801CD344
L_801CD348:;
  c->r[4]=0u+0x00000000u; // 801CD348
L_801CD34C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CD34C
  if (!crb(c,2)) { goto L_801CD37C; } // 801CD350
  c->r[3]=0u+0x803D0000u; // 801CD354
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD358
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD35C
  cmpu(c,0,c->r[0],0x00000001u); // 801CD360
  if (crb(c,0)) { goto L_801CD38C; } // 801CD364
  c->r[5]=c->r[29]|c->r[29]; // 801CD368
  c->r[4]=c->r[31]+0x0000008Cu; // 801CD36C
  c->r[3]=0u+0x00090000u; // 801CD370
  c->lr=0x801CD378u; f_801ACB38(c); // 801CD374
  goto L_801CD38C; // 801CD378
L_801CD37C:;
  c->r[3]=c->r[4]|c->r[4]; // 801CD37C
  c->r[5]=c->r[30]|c->r[30]; // 801CD380
  c->r[4]=0u+0x0000000Bu; // 801CD384
  c->lr=0x801CD38Cu; f_801CD8C0(c); // 801CD388
L_801CD38C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD38C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD390
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD394
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD398
  c->lr=c->r[0]; // 801CD39C
  c->r[1]=c->r[1]+0x00000020u; // 801CD3A0
  return; // 801CD3A4
}

// fn_801CD3A8
void f_801CD3A8(Ctx* __restrict c) {
  return; // 801CD3A8
}

// RFCOMM_DisconnectInd
void f_801CD3AC(Ctx* __restrict c) {
  trace_call(0x801CD3ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD3AC
  c->r[0]=c->lr; // 801CD3B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD3B4
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801CD3B8
  cmps(c,0,(int32_t)c->r[0],10); // 801CD3BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD3C0
  c->r[31]=0u+0x80330000u; // 801CD3C4
  c->r[31]=c->r[31]+0x00005D80u; // 801CD3C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD3CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD3D0
  c->r[29]=c->r[4]|c->r[4]; // 801CD3D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CD3D8
  c->r[28]=c->r[3]|c->r[3]; // 801CD3DC
  if (crb(c,0)) { goto L_801CD410; } // 801CD3E0
  c->r[3]=0u+0x803D0000u; // 801CD3E4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD3E8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD3EC
  cmpu(c,0,c->r[0],0x00000001u); // 801CD3F0
  if (crb(c,0)) { goto L_801CD408; } // 801CD3F4
  c->r[5]=c->r[28]|c->r[28]; // 801CD3F8
  c->r[4]=c->r[31]+0x00000000u; // 801CD3FC
  c->r[3]=0u+0x00090000u; // 801CD400
  c->lr=0x801CD408u; f_801ACB38(c); // 801CD404
L_801CD408:;
  c->r[30]=0u+0x00000000u; // 801CD408
  goto L_801CD45C; // 801CD40C
L_801CD410:;
  c->r[5]=0u+0x803D0000u; // 801CD410
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD414
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CD418
  c->r[4]=c->r[5]+c->r[0]; // 801CD41C
  c->r[30]=R32(c->r[4]+0x0000003Cu); // 801CD420
  cmps(c,0,(int32_t)c->r[30],0); // 801CD424
  if (crb(c,2)) { goto L_801CD45C; } // 801CD428
  c->r[6]=R16(c->r[30]+0x00000068u); // 801CD42C
  cmpu(c,0,c->r[6],c->r[3]); // 801CD430
  if (crb(c,2)) { goto L_801CD45C; } // 801CD434
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CD438
  cmpu(c,0,c->r[0],0x00000002u); // 801CD43C
  if (crb(c,0)) { goto L_801CD458; } // 801CD440
  c->r[3]=0u+0x00090000u; // 801CD444
  c->r[5]=c->r[28]|c->r[28]; // 801CD448
  c->r[4]=c->r[31]+0x0000001Cu; // 801CD44C
  c->r[3]=c->r[3]+0x00000001u; // 801CD450
  c->lr=0x801CD458u; f_801ACB50(c); // 801CD454
L_801CD458:;
  c->r[30]=0u+0x00000000u; // 801CD458
L_801CD45C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CD45C
  if (crb(c,2)) { goto L_801CD46C; } // 801CD460
  c->r[3]=c->r[28]|c->r[28]; // 801CD464
  c->lr=0x801CD46Cu; f_801C5C5C(c); // 801CD468
L_801CD46C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CD46C
  if (!crb(c,2)) { goto L_801CD4A0; } // 801CD470
  c->r[3]=0u+0x803D0000u; // 801CD474
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD478
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD47C
  cmpu(c,0,c->r[0],0x00000002u); // 801CD480
  if (crb(c,0)) { goto L_801CD4B0; } // 801CD484
  c->r[3]=0u+0x00090000u; // 801CD488
  c->r[5]=c->r[28]|c->r[28]; // 801CD48C
  c->r[3]=c->r[3]+0x00000001u; // 801CD490
  c->r[4]=c->r[31]+0x000000A8u; // 801CD494
  c->lr=0x801CD49Cu; f_801ACB38(c); // 801CD498
  goto L_801CD4B0; // 801CD49C
L_801CD4A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801CD4A0
  c->r[4]=0u+0x0000000Eu; // 801CD4A4
  c->r[5]=0u+0x00000000u; // 801CD4A8
  c->lr=0x801CD4B0u; f_801CD8C0(c); // 801CD4AC
L_801CD4B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD4B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD4B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD4B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD4BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD4C0
  c->lr=c->r[0]; // 801CD4C4
  c->r[1]=c->r[1]+0x00000020u; // 801CD4C8
  return; // 801CD4CC
}

// RFCOMM_BufDataInd
void f_801CD4D0(Ctx* __restrict c) {
  trace_call(0x801CD4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD4D0
  c->r[0]=c->lr; // 801CD4D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD4D8
  c->r[11]=c->r[1]+0x00000020u; // 801CD4DC
  c->lr=0x801CD4E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD4E0
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801CD4E4
  c->r[29]=0u+0x80330000u; // 801CD4E8
  cmps(c,0,(int32_t)c->r[0],10); // 801CD4EC
  c->r[27]=c->r[3]|c->r[3]; // 801CD4F0
  c->r[31]=c->r[4]|c->r[4]; // 801CD4F4
  c->r[29]=c->r[29]+0x00005D80u; // 801CD4F8
  if (crb(c,0)) { goto L_801CD52C; } // 801CD4FC
  c->r[3]=0u+0x803D0000u; // 801CD500
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD504
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD508
  cmpu(c,0,c->r[0],0x00000001u); // 801CD50C
  if (crb(c,0)) { goto L_801CD524; } // 801CD510
  c->r[5]=c->r[27]|c->r[27]; // 801CD514
  c->r[4]=c->r[29]+0x00000000u; // 801CD518
  c->r[3]=0u+0x00090000u; // 801CD51C
  c->lr=0x801CD524u; f_801ACB38(c); // 801CD520
L_801CD524:;
  c->r[28]=0u+0x00000000u; // 801CD524
  goto L_801CD578; // 801CD528
L_801CD52C:;
  c->r[5]=0u+0x803D0000u; // 801CD52C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD530
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CD534
  c->r[4]=c->r[5]+c->r[0]; // 801CD538
  c->r[28]=R32(c->r[4]+0x0000003Cu); // 801CD53C
  cmps(c,0,(int32_t)c->r[28],0); // 801CD540
  if (crb(c,2)) { goto L_801CD578; } // 801CD544
  c->r[6]=R16(c->r[28]+0x00000068u); // 801CD548
  cmpu(c,0,c->r[6],c->r[3]); // 801CD54C
  if (crb(c,2)) { goto L_801CD578; } // 801CD550
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CD554
  cmpu(c,0,c->r[0],0x00000002u); // 801CD558
  if (crb(c,0)) { goto L_801CD574; } // 801CD55C
  c->r[3]=0u+0x00090000u; // 801CD560
  c->r[5]=c->r[27]|c->r[27]; // 801CD564
  c->r[4]=c->r[29]+0x0000001Cu; // 801CD568
  c->r[3]=c->r[3]+0x00000001u; // 801CD56C
  c->lr=0x801CD574u; f_801ACB50(c); // 801CD570
L_801CD574:;
  c->r[28]=0u+0x00000000u; // 801CD574
L_801CD578:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CD578
  if (!crb(c,2)) { goto L_801CD5B4; } // 801CD57C
  c->r[3]=0u+0x803D0000u; // 801CD580
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD584
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD588
  cmpu(c,0,c->r[0],0x00000002u); // 801CD58C
  if (crb(c,0)) { goto L_801CD5A8; } // 801CD590
  c->r[3]=0u+0x00090000u; // 801CD594
  c->r[5]=c->r[27]|c->r[27]; // 801CD598
  c->r[3]=c->r[3]+0x00000001u; // 801CD59C
  c->r[4]=c->r[29]+0x000000C8u; // 801CD5A0
  c->lr=0x801CD5A8u; f_801ACB38(c); // 801CD5A4
L_801CD5A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD5A8
  c->lr=0x801CD5B0u; f_801AA228(c); // 801CD5AC
  goto L_801CD758; // 801CD5B0
L_801CD5B4:;
  c->r[30]=0u+0x803D0000u; // 801CD5B4
  c->r[3]=c->r[28]|c->r[28]; // 801CD5B8
  c->r[5]=c->r[31]|c->r[31]; // 801CD5BC
  c->r[4]=c->r[30]+0xFFFFB9C8u; // 801CD5C0
  c->lr=0x801CD5C8u; f_801D0680(c); // 801CD5C4
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801CD5C8
  c->r[29]=c->r[3]|c->r[3]; // 801CD5CC
  cmpu(c,0,c->r[4],0x00000032u); // 801CD5D0
  if (!crb(c,2)) { goto L_801CD5E4; } // 801CD5D4
  c->r[3]=c->r[31]|c->r[31]; // 801CD5D8
  c->lr=0x801CD5E0u; f_801AA228(c); // 801CD5DC
  goto L_801CD758; // 801CD5E0
L_801CD5E4:;
  c->r[0]=R8(c->r[30]+0xFFFFB9C8u); // 801CD5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CD5E8
  if (!crb(c,2)) { goto L_801CD620; } // 801CD5EC
  cmpu(c,0,c->r[4],0x00000004u); // 801CD5F0
  if (!crb(c,2)) { goto L_801CD608; } // 801CD5F4
  c->r[3]=c->r[28]|c->r[28]; // 801CD5F8
  c->r[4]=c->r[31]|c->r[31]; // 801CD5FC
  c->lr=0x801CD604u; f_801D0BF4(c); // 801CD600
  goto L_801CD758; // 801CD604
L_801CD608:;
  c->r[3]=c->r[28]|c->r[28]; // 801CD608
  c->r[5]=0u+0x00000000u; // 801CD60C
  c->lr=0x801CD614u; f_801CD8C0(c); // 801CD610
  c->r[3]=c->r[31]|c->r[31]; // 801CD614
  c->lr=0x801CD61Cu; f_801AA228(c); // 801CD618
  goto L_801CD758; // 801CD61C
L_801CD620:;
  c->r[3]=c->r[28]|c->r[28]; // 801CD620
  c->r[4]=c->r[0]|c->r[0]; // 801CD624
  c->lr=0x801CD62Cu; f_801CCC0C(c); // 801CD628
  cmps(c,0,(int32_t)c->r[3],0); // 801CD62C
  c->r[27]=c->r[3]|c->r[3]; // 801CD630
  if (crb(c,2)) { goto L_801CD644; } // 801CD634
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 801CD638
  cmps(c,0,(int32_t)c->r[0],0); // 801CD63C
  if (!crb(c,2)) { goto L_801CD6F4; } // 801CD640
L_801CD644:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 801CD644
  if (crb(c,2)) { goto L_801CD6AC; } // 801CD648
  c->r[4]=R8(c->r[28]+0x0000006Du); // 801CD64C
  cmps(c,0,(int32_t)c->r[4],0); // 801CD650
  if (crb(c,2)) { goto L_801CD66C; } // 801CD654
  c->r[3]=0u+0x803D0000u; // 801CD658
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD65C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CD660
  cmps(c,0,(int32_t)c->r[0],0); // 801CD664
  if (crb(c,2)) { goto L_801CD688; } // 801CD668
L_801CD66C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CD66C
  if (!crb(c,2)) { goto L_801CD6A0; } // 801CD670
  c->r[3]=0u+0x803D0000u; // 801CD674
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD678
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CD67C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD680
  if (crb(c,2)) { goto L_801CD6A0; } // 801CD684
L_801CD688:;
  c->r[4]=0u+0x803D0000u; // 801CD688
  c->r[3]=c->r[28]|c->r[28]; // 801CD68C
  c->r[5]=c->r[4]+0xFFFFB9C8u; // 801CD690
  c->r[4]=R8(c->r[4]+0xFFFFB9C8u); // 801CD694
  c->r[5]=R8(c->r[5]+0x00000004u); // 801CD698
  c->lr=0x801CD6A0u; f_801CFD30(c); // 801CD69C
L_801CD6A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD6A0
  c->lr=0x801CD6A8u; f_801AA228(c); // 801CD6A4
  goto L_801CD758; // 801CD6A8
L_801CD6AC:;
  c->r[30]=0u+0x803D0000u; // 801CD6AC
  c->r[3]=R8(c->r[30]+0xFFFFB9C8u); // 801CD6B0
  c->lr=0x801CD6B8u; f_801CCC60(c); // 801CD6B4
  cmps(c,0,(int32_t)c->r[3],0); // 801CD6B8
  c->r[27]=c->r[3]|c->r[3]; // 801CD6BC
  if (!crb(c,2)) { goto L_801CD6E0; } // 801CD6C0
  c->r[4]=R8(c->r[30]+0xFFFFB9C8u); // 801CD6C4
  c->r[3]=c->r[28]|c->r[28]; // 801CD6C8
  c->r[5]=0u+0x00000001u; // 801CD6CC
  c->lr=0x801CD6D4u; f_801CFD30(c); // 801CD6D0
  c->r[3]=c->r[31]|c->r[31]; // 801CD6D4
  c->lr=0x801CD6DCu; f_801AA228(c); // 801CD6D8
  goto L_801CD758; // 801CD6DC
L_801CD6E0:;
  c->r[0]=R8(c->r[30]+0xFFFFB9C8u); // 801CD6E0
  c->r[5]=R8(c->r[3]+0x00000000u); // 801CD6E4
  c->r[4]=c->r[28]+c->r[0]; // 801CD6E8
  W8(c->r[4]+0x00000024u,c->r[5]); // 801CD6EC
  W32(c->r[3]+0x0000006Cu,c->r[28]); // 801CD6F0
L_801CD6F4:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801CD6F4
  cmpu(c,0,c->r[4],0x00000004u); // 801CD6F8
  if (!crb(c,2)) { goto L_801CD744; } // 801CD6FC
  c->r[0]=R16(c->r[31]+0x00000002u); // 801CD700
  cmps(c,0,(int32_t)c->r[0],0); // 801CD704
  if (crb(c,2)) { goto L_801CD71C; } // 801CD708
  c->r[3]=c->r[27]|c->r[27]; // 801CD70C
  c->r[5]=c->r[31]|c->r[31]; // 801CD710
  c->lr=0x801CD718u; f_801CE504(c); // 801CD714
  goto L_801CD724; // 801CD718
L_801CD71C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD71C
  c->lr=0x801CD724u; f_801AA228(c); // 801CD720
L_801CD724:;
  c->r[3]=0u+0x803D0000u; // 801CD724
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD728
  c->r[4]=R8(c->r[3]+0x00000005u); // 801CD72C
  cmps(c,0,(int32_t)c->r[4],0); // 801CD730
  if (crb(c,2)) { goto L_801CD758; } // 801CD734
  c->r[3]=c->r[27]|c->r[27]; // 801CD738
  c->lr=0x801CD740u; f_801D18CC(c); // 801CD73C
  goto L_801CD758; // 801CD740
L_801CD744:;
  c->r[3]=c->r[27]|c->r[27]; // 801CD744
  c->r[5]=0u+0x00000000u; // 801CD748
  c->lr=0x801CD750u; f_801CE504(c); // 801CD74C
  c->r[3]=c->r[31]|c->r[31]; // 801CD750
  c->lr=0x801CD758u; f_801AA228(c); // 801CD754
L_801CD758:;
  c->r[11]=c->r[1]+0x00000020u; // 801CD758
  c->lr=0x801CD760u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CD75C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD760
  c->lr=c->r[0]; // 801CD764
  c->r[1]=c->r[1]+0x00000020u; // 801CD768
  return; // 801CD76C
}

// RFCOMM_CongestionStatusInd
void f_801CD770(Ctx* __restrict c) {
  trace_call(0x801CD770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD770
  c->r[0]=c->lr; // 801CD774
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD778
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801CD77C
  cmps(c,0,(int32_t)c->r[0],10); // 801CD780
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD784
  c->r[31]=0u+0x80330000u; // 801CD788
  c->r[31]=c->r[31]+0x00005D80u; // 801CD78C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD790
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD794
  c->r[29]=c->r[4]|c->r[4]; // 801CD798
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CD79C
  c->r[28]=c->r[3]|c->r[3]; // 801CD7A0
  if (crb(c,0)) { goto L_801CD7D4; } // 801CD7A4
  c->r[3]=0u+0x803D0000u; // 801CD7A8
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD7AC
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD7B0
  cmpu(c,0,c->r[0],0x00000001u); // 801CD7B4
  if (crb(c,0)) { goto L_801CD7CC; } // 801CD7B8
  c->r[5]=c->r[28]|c->r[28]; // 801CD7BC
  c->r[4]=c->r[31]+0x00000000u; // 801CD7C0
  c->r[3]=0u+0x00090000u; // 801CD7C4
  c->lr=0x801CD7CCu; f_801ACB38(c); // 801CD7C8
L_801CD7CC:;
  c->r[30]=0u+0x00000000u; // 801CD7CC
  goto L_801CD820; // 801CD7D0
L_801CD7D4:;
  c->r[5]=0u+0x803D0000u; // 801CD7D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD7D8
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CD7DC
  c->r[4]=c->r[5]+c->r[0]; // 801CD7E0
  c->r[30]=R32(c->r[4]+0x0000003Cu); // 801CD7E4
  cmps(c,0,(int32_t)c->r[30],0); // 801CD7E8
  if (crb(c,2)) { goto L_801CD820; } // 801CD7EC
  c->r[6]=R16(c->r[30]+0x00000068u); // 801CD7F0
  cmpu(c,0,c->r[6],c->r[3]); // 801CD7F4
  if (crb(c,2)) { goto L_801CD820; } // 801CD7F8
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CD7FC
  cmpu(c,0,c->r[0],0x00000002u); // 801CD800
  if (crb(c,0)) { goto L_801CD81C; } // 801CD804
  c->r[3]=0u+0x00090000u; // 801CD808
  c->r[5]=c->r[28]|c->r[28]; // 801CD80C
  c->r[4]=c->r[31]+0x0000001Cu; // 801CD810
  c->r[3]=c->r[3]+0x00000001u; // 801CD814
  c->lr=0x801CD81Cu; f_801ACB50(c); // 801CD818
L_801CD81C:;
  c->r[30]=0u+0x00000000u; // 801CD81C
L_801CD820:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CD820
  if (!crb(c,2)) { goto L_801CD850; } // 801CD824
  c->r[3]=0u+0x803D0000u; // 801CD828
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD82C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD830
  cmpu(c,0,c->r[0],0x00000001u); // 801CD834
  if (crb(c,0)) { goto L_801CD884; } // 801CD838
  c->r[5]=c->r[28]|c->r[28]; // 801CD83C
  c->r[4]=c->r[31]+0x000000E4u; // 801CD840
  c->r[3]=0u+0x00090000u; // 801CD844
  c->lr=0x801CD84Cu; f_801ACB38(c); // 801CD848
  goto L_801CD884; // 801CD84C
L_801CD850:;
  c->r[3]=0u+0x803D0000u; // 801CD850
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD854
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD858
  cmpu(c,0,c->r[0],0x00000004u); // 801CD85C
  if (crb(c,0)) { goto L_801CD878; } // 801CD860
  c->r[3]=0u+0x00090000u; // 801CD864
  c->r[5]=c->r[28]|c->r[28]; // 801CD868
  c->r[3]=c->r[3]+0x00000003u; // 801CD86C
  c->r[4]=c->r[31]+0x00000114u; // 801CD870
  c->lr=0x801CD878u; f_801ACB38(c); // 801CD874
L_801CD878:;
  c->r[3]=c->r[30]|c->r[30]; // 801CD878
  c->r[4]=c->r[29]|c->r[29]; // 801CD87C
  c->lr=0x801CD884u; f_801CF578(c); // 801CD880
L_801CD884:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD884
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD888
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD88C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD890
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD894
  c->lr=c->r[0]; // 801CD898
  c->r[1]=c->r[1]+0x00000020u; // 801CD89C
  return; // 801CD8A0
}

// rfc_save_lcid_mcb
void f_801CD8A4(Ctx* __restrict c) {
  trace_call(0x801CD8A4u);
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801CD8A4
  c->r[4]=0u+0x803D0000u; // 801CD8A8
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CD8AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD8B0
  c->r[4]=c->r[4]+c->r[0]; // 801CD8B4
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801CD8B8
  return; // 801CD8BC
}

// rfc_mx_sm_execute
void f_801CD8C0(Ctx* __restrict c) {
  trace_call(0x801CD8C0u);
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801CD8C0
  cmpu(c,0,c->r[0],0x00000006u); // 801CD8C4
  if (crb(c,1)) return; // 801CD8C8
  c->r[6]=0u+0x80330000u; // 801CD8CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CD8D0
  c->r[6]=c->r[6]+0x00005EC0u; // 801CD8D4
  c->r[6]=R32(c->r[6]+c->r[0]); // 801CD8D8
  c->ctr=c->r[6]; // 801CD8DC
  if (true) { switch (c->ctr) { case 0x801CD8E4u: goto L_801CD8E4; case 0x801CD8E8u: goto L_801CD8E8; case 0x801CD8ECu: goto L_801CD8EC; case 0x801CD8F0u: goto L_801CD8F0; case 0x801CD8F4u: goto L_801CD8F4; case 0x801CD8F8u: goto L_801CD8F8; case 0x801CD8FCu: goto L_801CD8FC; default: break; } dispatch(c,c->ctr); return; } // 801CD8E0
L_801CD8E4:;
  f_801CD904(c); return; // 801CD8E4
L_801CD8E8:;
  f_801CDB18(c); return; // 801CD8E8
L_801CD8EC:;
  f_801CDCD4(c); return; // 801CD8EC
L_801CD8F0:;
  f_801CDDFC(c); return; // 801CD8F0
L_801CD8F4:;
  f_801CDF70(c); return; // 801CD8F4
L_801CD8F8:;
  f_801CE090(c); return; // 801CD8F8
L_801CD8FC:;
  f_801CE1A8(c); return; // 801CD8FC
  return; // 801CD900
}

// rfc_mx_sm_state_idle
void f_801CD904(Ctx* __restrict c) {
  trace_call(0x801CD904u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD904
  c->r[0]=c->lr; // 801CD908
  c->r[6]=0u+0x803D0000u; // 801CD90C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CD910
  c->r[6]=c->r[6]+0xFFFFB9C8u; // 801CD914
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801CD918
  c->r[31]=c->r[3]|c->r[3]; // 801CD91C
  W32(c->r[1]+0x00000058u,c->r[30]); // 801CD920
  c->r[30]=0u+0x80330000u; // 801CD924
  c->r[30]=c->r[30]+0x00005EC0u; // 801CD928
  W32(c->r[1]+0x00000054u,c->r[29]); // 801CD92C
  c->r[29]=c->r[5]|c->r[5]; // 801CD930
  W32(c->r[1]+0x00000050u,c->r[28]); // 801CD934
  c->r[28]=c->r[4]|c->r[4]; // 801CD938
  c->r[0]=R8(c->r[6]+0x00000414u); // 801CD93C
  cmpu(c,0,c->r[0],0x00000004u); // 801CD940
  if (crb(c,0)) { goto L_801CD95C; } // 801CD944
  c->r[3]=0u+0x00090000u; // 801CD948
  c->r[5]=c->r[28]|c->r[28]; // 801CD94C
  c->r[3]=c->r[3]+0x00000003u; // 801CD950
  c->r[4]=c->r[30]+0x0000001Cu; // 801CD954
  c->lr=0x801CD95Cu; f_801ACB38(c); // 801CD958
L_801CD95C:;
  cmpu(c,0,c->r[28],0x0000000Cu); // 801CD95C
  if (crb(c,1)) { goto L_801CDACC; } // 801CD960
  c->r[3]=0u+0x80330000u; // 801CD964
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801CD968
  c->r[3]=c->r[3]+0x00005F58u; // 801CD96C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CD970
  c->ctr=c->r[3]; // 801CD974
  if (true) { switch (c->ctr) { case 0x801CD97Cu: goto L_801CD97C; case 0x801CD9C0u: goto L_801CD9C0; case 0x801CD9ECu: goto L_801CD9EC; case 0x801CDAA0u: goto L_801CDAA0; case 0x801CDAA4u: goto L_801CDAA4; case 0x801CDAB8u: goto L_801CDAB8; case 0x801CDACCu: goto L_801CDACC; default: break; } dispatch(c,c->ctr); return; } // 801CD978
L_801CD97C:;
  c->r[0]=0u+0x0000029Au; // 801CD97C
  c->r[4]=c->r[31]+0x00000062u; // 801CD980
  W16(c->r[31]+0x0000006Au,c->r[0]); // 801CD984
  c->r[3]=0u+0x00000003u; // 801CD988
  c->lr=0x801CD990u; f_801C566C(c); // 801CD98C
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801CD990
  W16(c->r[31]+0x00000068u,c->r[3]); // 801CD994
  if (!crb(c,2)) { goto L_801CD9AC; } // 801CD998
  c->r[3]=c->r[31]|c->r[31]; // 801CD99C
  c->r[4]=0u+0x00000001u; // 801CD9A0
  c->lr=0x801CD9A8u; f_801CB5B8(c); // 801CD9A4
  goto L_801CDAF8; // 801CD9A8
L_801CD9AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD9AC
  c->lr=0x801CD9B4u; f_801CD8A4(c); // 801CD9B0
  c->r[0]=0u+0x00000001u; // 801CD9B4
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CD9B8
  goto L_801CDAF8; // 801CD9BC
L_801CD9C0:;
  c->r[3]=0u+0x803D0000u; // 801CD9C0
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CD9C4
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CD9C8
  cmpu(c,0,c->r[0],0x00000001u); // 801CD9CC
  if (crb(c,0)) { goto L_801CDAF8; } // 801CD9D0
  c->r[5]=R8(c->r[31]+0x0000006Cu); // 801CD9D4
  c->r[6]=c->r[28]|c->r[28]; // 801CD9D8
  c->r[4]=c->r[30]+0x0000003Cu; // 801CD9DC
  c->r[3]=0u+0x00090000u; // 801CD9E0
  c->lr=0x801CD9E8u; f_801ACB50(c); // 801CD9E4
  goto L_801CDAF8; // 801CD9E8
L_801CD9EC:;
  c->r[0]=R8(c->r[31]+0x0000006Du); // 801CD9EC
  cmps(c,0,(int32_t)c->r[0],0); // 801CD9F0
  if (crb(c,2)) { goto L_801CDA14; } // 801CD9F4
  c->r[4]=R8(c->r[29]+0x00000000u); // 801CD9F8
  c->r[3]=c->r[31]+0x00000062u; // 801CD9FC
  c->r[5]=R16(c->r[31]+0x00000068u); // 801CDA00
  c->r[6]=0u+0x00000001u; // 801CDA04
  c->r[7]=0u+0x00000000u; // 801CDA08
  c->lr=0x801CDA10u; f_801C58A0(c); // 801CDA0C
  goto L_801CDAF8; // 801CDA10
L_801CDA14:;
  c->r[3]=c->r[31]|c->r[31]; // 801CDA14
  c->r[4]=0u+0x00000078u; // 801CDA18
  c->lr=0x801CDA20u; f_801D147C(c); // 801CDA1C
  c->r[4]=R8(c->r[29]+0x00000000u); // 801CDA20
  c->r[3]=c->r[31]+0x00000062u; // 801CDA24
  c->r[5]=R16(c->r[31]+0x00000068u); // 801CDA28
  c->r[6]=0u+0x00000000u; // 801CDA2C
  c->r[7]=0u+0x00000000u; // 801CDA30
  c->lr=0x801CDA38u; f_801C58A0(c); // 801CDA34
  c->r[3]=0u+0x803D0000u; // 801CDA38
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDA3C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDA40
  cmpu(c,0,c->r[0],0x00000004u); // 801CDA44
  if (crb(c,0)) { goto L_801CDA5C; } // 801CDA48
  c->r[3]=0u+0x00090000u; // 801CDA4C
  c->r[4]=c->r[30]+0x00000058u; // 801CDA50
  c->r[3]=c->r[3]+0x00000003u; // 801CDA54
  c->lr=0x801CDA5Cu; f_801ACB20(c); // 801CDA58
L_801CDA5C:;
  c->r[3]=c->r[1]+0x00000008u; // 801CDA5C
  c->r[4]=0u+0x00000000u; // 801CDA60
  c->r[5]=0u+0x0000003Cu; // 801CDA64
  c->lr=0x801CDA6Cu; f_80004688(c); // 801CDA68
  c->r[0]=0u+0x00000000u; // 801CDA6C
  c->r[4]=0u+0x00000001u; // 801CDA70
  c->r[3]=0u+0x0000069Bu; // 801CDA74
  W8(c->r[1]+0x0000000Au,c->r[4]); // 801CDA78
  c->r[4]=c->r[1]+0x00000008u; // 801CDA7C
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 801CDA80
  W8(c->r[1]+0x00000028u,c->r[0]); // 801CDA84
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801CDA88
  c->r[3]=R16(c->r[31]+0x00000068u); // 801CDA8C
  c->lr=0x801CDA94u; f_801C5A30(c); // 801CDA90
  c->r[0]=0u+0x00000002u; // 801CDA94
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CDA98
  goto L_801CDAF8; // 801CDA9C
L_801CDAA0:;
  goto L_801CDAF8; // 801CDAA0
L_801CDAA4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CDAA4
  c->r[4]=0u+0x00000000u; // 801CDAA8
  c->r[5]=0u+0x00000001u; // 801CDAAC
  c->lr=0x801CDAB4u; f_801CFD30(c); // 801CDAB0
  goto L_801CDAF8; // 801CDAB4
L_801CDAB8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CDAB8
  c->r[4]=0u+0x00000000u; // 801CDABC
  c->r[5]=0u+0x00000000u; // 801CDAC0
  c->lr=0x801CDAC8u; f_801CFD30(c); // 801CDAC4
  goto L_801CDAF8; // 801CDAC8
L_801CDACC:;
  c->r[3]=0u+0x803D0000u; // 801CDACC
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDAD0
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDAD4
  cmpu(c,0,c->r[0],0x00000004u); // 801CDAD8
  if (crb(c,0)) { goto L_801CDAF8; } // 801CDADC
  c->r[3]=0u+0x00090000u; // 801CDAE0
  c->r[6]=R8(c->r[31]+0x0000006Cu); // 801CDAE4
  c->r[5]=c->r[28]|c->r[28]; // 801CDAE8
  c->r[4]=c->r[30]+0x00000070u; // 801CDAEC
  c->r[3]=c->r[3]+0x00000003u; // 801CDAF0
  c->lr=0x801CDAF8u; f_801ACB50(c); // 801CDAF4
L_801CDAF8:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CDAF8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801CDAFC
  c->r[30]=R32(c->r[1]+0x00000058u); // 801CDB00
  c->r[29]=R32(c->r[1]+0x00000054u); // 801CDB04
  c->r[28]=R32(c->r[1]+0x00000050u); // 801CDB08
  c->lr=c->r[0]; // 801CDB0C
  c->r[1]=c->r[1]+0x00000060u; // 801CDB10
  return; // 801CDB14
}

// rfc_mx_sm_state_wait_conn_cnf
void f_801CDB18(Ctx* __restrict c) {
  trace_call(0x801CDB18u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDB18
  c->r[0]=c->lr; // 801CDB1C
  c->r[6]=0u+0x803D0000u; // 801CDB20
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CDB24
  c->r[6]=c->r[6]+0xFFFFB9C8u; // 801CDB28
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801CDB2C
  c->r[31]=c->r[3]|c->r[3]; // 801CDB30
  W32(c->r[1]+0x00000058u,c->r[30]); // 801CDB34
  c->r[30]=0u+0x80330000u; // 801CDB38
  c->r[30]=c->r[30]+0x00005EC0u; // 801CDB3C
  W32(c->r[1]+0x00000054u,c->r[29]); // 801CDB40
  c->r[29]=c->r[5]|c->r[5]; // 801CDB44
  W32(c->r[1]+0x00000050u,c->r[28]); // 801CDB48
  c->r[28]=c->r[4]|c->r[4]; // 801CDB4C
  c->r[0]=R8(c->r[6]+0x00000414u); // 801CDB50
  cmpu(c,0,c->r[0],0x00000004u); // 801CDB54
  if (crb(c,0)) { goto L_801CDB70; } // 801CDB58
  c->r[3]=0u+0x00090000u; // 801CDB5C
  c->r[5]=c->r[28]|c->r[28]; // 801CDB60
  c->r[3]=c->r[3]+0x00000003u; // 801CDB64
  c->r[4]=c->r[30]+0x000000CCu; // 801CDB68
  c->lr=0x801CDB70u; f_801ACB38(c); // 801CDB6C
L_801CDB70:;
  cmps(c,0,(int32_t)c->r[28],9); // 801CDB70
  if (crb(c,2)) { goto L_801CDBCC; } // 801CDB74
  if (!crb(c,0)) { goto L_801CDB94; } // 801CDB78
  cmps(c,0,(int32_t)c->r[28],6); // 801CDB7C
  if (crb(c,2)) { goto L_801CDBA0; } // 801CDB80
  if (!crb(c,0)) { goto L_801CDC88; } // 801CDB84
  cmps(c,0,(int32_t)c->r[28],5); // 801CDB88
  if (!crb(c,0)) { goto L_801CDC6C; } // 801CDB8C
  goto L_801CDC88; // 801CDB90
L_801CDB94:;
  cmps(c,0,(int32_t)c->r[28],14); // 801CDB94
  if (crb(c,2)) { goto L_801CDC58; } // 801CDB98
  goto L_801CDC88; // 801CDB9C
L_801CDBA0:;
  c->r[3]=0u+0x803D0000u; // 801CDBA0
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDBA4
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDBA8
  cmpu(c,0,c->r[0],0x00000001u); // 801CDBAC
  if (crb(c,0)) { goto L_801CDCB4; } // 801CDBB0
  c->r[5]=R8(c->r[31]+0x0000006Cu); // 801CDBB4
  c->r[6]=c->r[28]|c->r[28]; // 801CDBB8
  c->r[4]=c->r[30]+0x0000003Cu; // 801CDBBC
  c->r[3]=0u+0x00090000u; // 801CDBC0
  c->lr=0x801CDBC8u; f_801ACB50(c); // 801CDBC4
  goto L_801CDCB4; // 801CDBC8
L_801CDBCC:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 801CDBCC
  cmps(c,0,(int32_t)c->r[0],0); // 801CDBD0
  if (crb(c,2)) { goto L_801CDBF0; } // 801CDBD4
  c->r[0]=0u+0x00000000u; // 801CDBD8
  c->r[3]=c->r[31]|c->r[31]; // 801CDBDC
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CDBE0
  c->r[4]=R16(c->r[29]+0x00000000u); // 801CDBE4
  c->lr=0x801CDBECu; f_801CB5B8(c); // 801CDBE8
  goto L_801CDCB4; // 801CDBEC
L_801CDBF0:;
  c->r[0]=0u+0x00000002u; // 801CDBF0
  c->r[3]=0u+0x803D0000u; // 801CDBF4
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CDBF8
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDBFC
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDC00
  cmpu(c,0,c->r[0],0x00000004u); // 801CDC04
  if (crb(c,0)) { goto L_801CDC1C; } // 801CDC08
  c->r[3]=0u+0x00090000u; // 801CDC0C
  c->r[4]=c->r[30]+0x00000058u; // 801CDC10
  c->r[3]=c->r[3]+0x00000003u; // 801CDC14
  c->lr=0x801CDC1Cu; f_801ACB20(c); // 801CDC18
L_801CDC1C:;
  c->r[3]=c->r[1]+0x00000008u; // 801CDC1C
  c->r[4]=0u+0x00000000u; // 801CDC20
  c->r[5]=0u+0x0000003Cu; // 801CDC24
  c->lr=0x801CDC2Cu; f_80004688(c); // 801CDC28
  c->r[0]=0u+0x00000000u; // 801CDC2C
  c->r[4]=0u+0x00000001u; // 801CDC30
  c->r[3]=0u+0x0000069Bu; // 801CDC34
  W8(c->r[1]+0x0000000Au,c->r[4]); // 801CDC38
  c->r[4]=c->r[1]+0x00000008u; // 801CDC3C
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 801CDC40
  W8(c->r[1]+0x00000028u,c->r[0]); // 801CDC44
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801CDC48
  c->r[3]=R16(c->r[31]+0x00000068u); // 801CDC4C
  c->lr=0x801CDC54u; f_801C5A30(c); // 801CDC50
  goto L_801CDCB4; // 801CDC54
L_801CDC58:;
  c->r[0]=0u+0x00000000u; // 801CDC58
  c->r[3]=c->r[31]|c->r[31]; // 801CDC5C
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CDC60
  c->lr=0x801CDC68u; f_801CC2C0(c); // 801CDC64
  goto L_801CDCB4; // 801CDC68
L_801CDC6C:;
  c->r[0]=0u+0x00000000u; // 801CDC6C
  c->r[3]=R16(c->r[31]+0x00000068u); // 801CDC70
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CDC74
  c->lr=0x801CDC7Cu; f_801C5BB8(c); // 801CDC78
  c->r[3]=c->r[31]|c->r[31]; // 801CDC7C
  c->lr=0x801CDC84u; f_801CC2C0(c); // 801CDC80
  goto L_801CDCB4; // 801CDC84
L_801CDC88:;
  c->r[3]=0u+0x803D0000u; // 801CDC88
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDC8C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDC90
  cmpu(c,0,c->r[0],0x00000004u); // 801CDC94
  if (crb(c,0)) { goto L_801CDCB4; } // 801CDC98
  c->r[3]=0u+0x00090000u; // 801CDC9C
  c->r[6]=R8(c->r[31]+0x0000006Cu); // 801CDCA0
  c->r[5]=c->r[28]|c->r[28]; // 801CDCA4
  c->r[4]=c->r[30]+0x00000070u; // 801CDCA8
  c->r[3]=c->r[3]+0x00000003u; // 801CDCAC
  c->lr=0x801CDCB4u; f_801ACB50(c); // 801CDCB0
L_801CDCB4:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CDCB4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801CDCB8
  c->r[30]=R32(c->r[1]+0x00000058u); // 801CDCBC
  c->r[29]=R32(c->r[1]+0x00000054u); // 801CDCC0
  c->r[28]=R32(c->r[1]+0x00000050u); // 801CDCC4
  c->lr=c->r[0]; // 801CDCC8
  c->r[1]=c->r[1]+0x00000060u; // 801CDCCC
  return; // 801CDCD0
}

// rfc_mx_sm_state_configure
void f_801CDCD4(Ctx* __restrict c) {
  trace_call(0x801CDCD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDCD4
  c->r[0]=c->lr; // 801CDCD8
  c->r[6]=0u+0x803D0000u; // 801CDCDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDCE0
  c->r[6]=c->r[6]+0xFFFFB9C8u; // 801CDCE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CDCE8
  c->r[31]=0u+0x80330000u; // 801CDCEC
  c->r[31]=c->r[31]+0x00005EC0u; // 801CDCF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CDCF4
  c->r[30]=c->r[5]|c->r[5]; // 801CDCF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CDCFC
  c->r[29]=c->r[4]|c->r[4]; // 801CDD00
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CDD04
  c->r[28]=c->r[3]|c->r[3]; // 801CDD08
  c->r[0]=R8(c->r[6]+0x00000414u); // 801CDD0C
  cmpu(c,0,c->r[0],0x00000004u); // 801CDD10
  if (crb(c,0)) { goto L_801CDD2C; } // 801CDD14
  c->r[3]=0u+0x00090000u; // 801CDD18
  c->r[5]=c->r[29]|c->r[29]; // 801CDD1C
  c->r[3]=c->r[3]+0x00000003u; // 801CDD20
  c->r[4]=c->r[31]+0x000000F4u; // 801CDD24
  c->lr=0x801CDD2Cu; f_801ACB38(c); // 801CDD28
L_801CDD2C:;
  c->r[0]=c->r[29]+0xFFFFFFFAu; // 801CDD2C
  cmpu(c,0,c->r[0],0x00000008u); // 801CDD30
  if (crb(c,1)) { goto L_801CDDB0; } // 801CDD34
  c->r[3]=0u+0x80330000u; // 801CDD38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CDD3C
  c->r[3]=c->r[3]+0x00005FD8u; // 801CDD40
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CDD44
  c->ctr=c->r[3]; // 801CDD48
  if (true) { switch (c->ctr) { case 0x801CDD50u: goto L_801CDD50; case 0x801CDD7Cu: goto L_801CDD7C; case 0x801CDD8Cu: goto L_801CDD8C; case 0x801CDD9Cu: goto L_801CDD9C; case 0x801CDDB0u: goto L_801CDDB0; default: break; } dispatch(c,c->ctr); return; } // 801CDD4C
L_801CDD50:;
  c->r[3]=0u+0x803D0000u; // 801CDD50
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDD54
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDD58
  cmpu(c,0,c->r[0],0x00000001u); // 801CDD5C
  if (crb(c,0)) { goto L_801CDDDC; } // 801CDD60
  c->r[5]=R8(c->r[28]+0x0000006Cu); // 801CDD64
  c->r[6]=c->r[29]|c->r[29]; // 801CDD68
  c->r[4]=c->r[31]+0x0000003Cu; // 801CDD6C
  c->r[3]=0u+0x00090000u; // 801CDD70
  c->lr=0x801CDD78u; f_801ACB50(c); // 801CDD74
  goto L_801CDDDC; // 801CDD78
L_801CDD7C:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDD7C
  c->r[4]=c->r[30]|c->r[30]; // 801CDD80
  c->lr=0x801CDD88u; f_801CE414(c); // 801CDD84
  goto L_801CDDDC; // 801CDD88
L_801CDD8C:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDD8C
  c->r[4]=c->r[30]|c->r[30]; // 801CDD90
  c->lr=0x801CDD98u; f_801CE320(c); // 801CDD94
  goto L_801CDDDC; // 801CDD98
L_801CDD9C:;
  c->r[0]=0u+0x00000000u; // 801CDD9C
  c->r[3]=c->r[28]|c->r[28]; // 801CDDA0
  W8(c->r[28]+0x0000006Cu,c->r[0]); // 801CDDA4
  c->lr=0x801CDDACu; f_801CC2C0(c); // 801CDDA8
  goto L_801CDDDC; // 801CDDAC
L_801CDDB0:;
  c->r[3]=0u+0x803D0000u; // 801CDDB0
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDDB4
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDDB8
  cmpu(c,0,c->r[0],0x00000004u); // 801CDDBC
  if (crb(c,0)) { goto L_801CDDDC; } // 801CDDC0
  c->r[3]=0u+0x00090000u; // 801CDDC4
  c->r[6]=R8(c->r[28]+0x0000006Cu); // 801CDDC8
  c->r[5]=c->r[29]|c->r[29]; // 801CDDCC
  c->r[4]=c->r[31]+0x00000070u; // 801CDDD0
  c->r[3]=c->r[3]+0x00000003u; // 801CDDD4
  c->lr=0x801CDDDCu; f_801ACB50(c); // 801CDDD8
L_801CDDDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CDDDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CDDE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CDDE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CDDE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CDDEC
  c->lr=c->r[0]; // 801CDDF0
  c->r[1]=c->r[1]+0x00000020u; // 801CDDF4
  return; // 801CDDF8
}

// rfc_mx_sm_sabme_wait_ua
void f_801CDDFC(Ctx* __restrict c) {
  trace_call(0x801CDDFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDDFC
  c->r[0]=c->lr; // 801CDE00
  c->r[6]=0u+0x803D0000u; // 801CDE04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDE08
  c->r[6]=c->r[6]+0xFFFFB9C8u; // 801CDE0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CDE10
  c->r[31]=c->r[3]|c->r[3]; // 801CDE14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CDE18
  c->r[30]=0u+0x80330000u; // 801CDE1C
  c->r[30]=c->r[30]+0x00005EC0u; // 801CDE20
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CDE24
  c->r[29]=c->r[5]|c->r[5]; // 801CDE28
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CDE2C
  c->r[28]=c->r[4]|c->r[4]; // 801CDE30
  c->r[0]=R8(c->r[6]+0x00000414u); // 801CDE34
  cmpu(c,0,c->r[0],0x00000004u); // 801CDE38
  if (crb(c,0)) { goto L_801CDE54; } // 801CDE3C
  c->r[3]=0u+0x00090000u; // 801CDE40
  c->r[5]=c->r[28]|c->r[28]; // 801CDE44
  c->r[3]=c->r[3]+0x00000003u; // 801CDE48
  c->r[4]=c->r[30]+0x0000013Cu; // 801CDE4C
  c->lr=0x801CDE54u; f_801ACB38(c); // 801CDE50
L_801CDE54:;
  cmpu(c,0,c->r[28],0x0000000Eu); // 801CDE54
  if (crb(c,1)) { goto L_801CDF24; } // 801CDE58
  c->r[3]=0u+0x80330000u; // 801CDE5C
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801CDE60
  c->r[3]=c->r[3]+0x00006020u; // 801CDE64
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CDE68
  c->ctr=c->r[3]; // 801CDE6C
  if (true) { switch (c->ctr) { case 0x801CDE74u: goto L_801CDE74; case 0x801CDEA0u: goto L_801CDEA0; case 0x801CDEB0u: goto L_801CDEB0; case 0x801CDEC0u: goto L_801CDEC0; case 0x801CDED4u: goto L_801CDED4; case 0x801CDEFCu: goto L_801CDEFC; case 0x801CDF04u: goto L_801CDF04; case 0x801CDF24u: goto L_801CDF24; default: break; } dispatch(c,c->ctr); return; } // 801CDE70
L_801CDE74:;
  c->r[3]=0u+0x803D0000u; // 801CDE74
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDE78
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDE7C
  cmpu(c,0,c->r[0],0x00000001u); // 801CDE80
  if (crb(c,0)) { goto L_801CDF50; } // 801CDE84
  c->r[5]=R8(c->r[31]+0x0000006Cu); // 801CDE88
  c->r[6]=c->r[28]|c->r[28]; // 801CDE8C
  c->r[4]=c->r[30]+0x0000003Cu; // 801CDE90
  c->r[3]=0u+0x00090000u; // 801CDE94
  c->lr=0x801CDE9Cu; f_801ACB50(c); // 801CDE98
  goto L_801CDF50; // 801CDE9C
L_801CDEA0:;
  c->r[3]=c->r[31]|c->r[31]; // 801CDEA0
  c->r[4]=c->r[29]|c->r[29]; // 801CDEA4
  c->lr=0x801CDEACu; f_801CE414(c); // 801CDEA8
  goto L_801CDF50; // 801CDEAC
L_801CDEB0:;
  c->r[3]=c->r[31]|c->r[31]; // 801CDEB0
  c->r[4]=c->r[29]|c->r[29]; // 801CDEB4
  c->lr=0x801CDEBCu; f_801CE320(c); // 801CDEB8
  goto L_801CDF50; // 801CDEBC
L_801CDEC0:;
  c->r[0]=0u+0x00000000u; // 801CDEC0
  c->r[3]=c->r[31]|c->r[31]; // 801CDEC4
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CDEC8
  c->lr=0x801CDED0u; f_801CC2C0(c); // 801CDECC
  goto L_801CDF50; // 801CDED0
L_801CDED4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CDED4
  c->lr=0x801CDEDCu; f_801D14F0(c); // 801CDED8
  c->r[3]=0u+0x00000005u; // 801CDEDC
  c->r[0]=0u+0x00000001u; // 801CDEE0
  W8(c->r[31]+0x0000006Cu,c->r[3]); // 801CDEE4
  c->r[3]=c->r[31]|c->r[31]; // 801CDEE8
  c->r[4]=0u+0x00000000u; // 801CDEEC
  W8(c->r[31]+0x00000071u,c->r[0]); // 801CDEF0
  c->lr=0x801CDEF8u; f_801CB5B8(c); // 801CDEF4
  goto L_801CDF50; // 801CDEF8
L_801CDEFC:;
  c->r[3]=c->r[31]|c->r[31]; // 801CDEFC
  c->lr=0x801CDF04u; f_801D14F0(c); // 801CDF00
L_801CDF04:;
  c->r[0]=0u+0x00000000u; // 801CDF04
  c->r[3]=R16(c->r[31]+0x00000068u); // 801CDF08
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801CDF0C
  c->lr=0x801CDF14u; f_801C5BB8(c); // 801CDF10
  c->r[3]=c->r[31]|c->r[31]; // 801CDF14
  c->r[4]=0u+0x00000001u; // 801CDF18
  c->lr=0x801CDF20u; f_801CB5B8(c); // 801CDF1C
  goto L_801CDF50; // 801CDF20
L_801CDF24:;
  c->r[3]=0u+0x803D0000u; // 801CDF24
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CDF28
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CDF2C
  cmpu(c,0,c->r[0],0x00000004u); // 801CDF30
  if (crb(c,0)) { goto L_801CDF50; } // 801CDF34
  c->r[3]=0u+0x00090000u; // 801CDF38
  c->r[6]=R8(c->r[31]+0x0000006Cu); // 801CDF3C
  c->r[5]=c->r[28]|c->r[28]; // 801CDF40
  c->r[4]=c->r[30]+0x00000070u; // 801CDF44
  c->r[3]=c->r[3]+0x00000003u; // 801CDF48
  c->lr=0x801CDF50u; f_801ACB50(c); // 801CDF4C
L_801CDF50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CDF50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CDF54
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CDF58
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CDF5C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CDF60
  c->lr=c->r[0]; // 801CDF64
  c->r[1]=c->r[1]+0x00000020u; // 801CDF68
  return; // 801CDF6C
}

// rfc_mx_sm_state_wait_sabme
void f_801CDF70(Ctx* __restrict c) {
  trace_call(0x801CDF70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDF70
  c->r[0]=c->lr; // 801CDF74
  c->r[6]=0u+0x803D0000u; // 801CDF78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDF7C
  c->r[6]=c->r[6]+0xFFFFB9C8u; // 801CDF80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CDF84
  c->r[31]=c->r[5]|c->r[5]; // 801CDF88
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CDF8C
  c->r[30]=c->r[4]|c->r[4]; // 801CDF90
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CDF94
  c->r[29]=c->r[3]|c->r[3]; // 801CDF98
  c->r[0]=R8(c->r[6]+0x00000414u); // 801CDF9C
  cmpu(c,0,c->r[0],0x00000004u); // 801CDFA0
  if (crb(c,0)) { goto L_801CDFC0; } // 801CDFA4
  c->r[3]=0u+0x00090000u; // 801CDFA8
  c->r[4]=0u+0x80330000u; // 801CDFAC
  c->r[5]=c->r[30]|c->r[30]; // 801CDFB0
  c->r[3]=c->r[3]+0x00000003u; // 801CDFB4
  c->r[4]=c->r[4]+0x0000605Cu; // 801CDFB8
  c->lr=0x801CDFC0u; f_801ACB38(c); // 801CDFBC
L_801CDFC0:;
  cmps(c,0,(int32_t)c->r[30],7); // 801CDFC0
  if (crb(c,2)) { goto L_801CE004; } // 801CDFC4
  if (!crb(c,0)) { goto L_801CDFD8; } // 801CDFC8
  cmps(c,0,(int32_t)c->r[30],0); // 801CDFCC
  if (crb(c,2)) { goto L_801CDFF8; } // 801CDFD0
  goto L_801CE044; // 801CDFD4
L_801CDFD8:;
  cmps(c,0,(int32_t)c->r[30],14); // 801CDFD8
  if (crb(c,2)) { goto L_801CDFE4; } // 801CDFDC
  goto L_801CE044; // 801CDFE0
L_801CDFE4:;
  c->r[0]=0u+0x00000000u; // 801CDFE4
  c->r[3]=c->r[29]|c->r[29]; // 801CDFE8
  W8(c->r[29]+0x0000006Cu,c->r[0]); // 801CDFEC
  c->lr=0x801CDFF4u; f_801CC2C0(c); // 801CDFF0
  goto L_801CE074; // 801CDFF4
L_801CDFF8:;
  c->r[3]=c->r[29]|c->r[29]; // 801CDFF8
  c->lr=0x801CE000u; f_801CB718(c); // 801CDFFC
  goto L_801CE074; // 801CE000
L_801CE004:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 801CE004
  cmps(c,0,(int32_t)c->r[0],0); // 801CE008
  if (crb(c,2)) { goto L_801CE024; } // 801CE00C
  c->r[3]=c->r[29]|c->r[29]; // 801CE010
  c->r[4]=0u+0x00000000u; // 801CE014
  c->r[5]=0u+0x00000001u; // 801CE018
  c->lr=0x801CE020u; f_801CFD30(c); // 801CE01C
  goto L_801CE074; // 801CE020
L_801CE024:;
  c->r[3]=c->r[29]|c->r[29]; // 801CE024
  c->r[4]=0u+0x00000000u; // 801CE028
  c->lr=0x801CE030u; f_801CFC80(c); // 801CE02C
  c->r[3]=0u+0x00000005u; // 801CE030
  c->r[0]=0u+0x00000001u; // 801CE034
  W8(c->r[29]+0x0000006Cu,c->r[3]); // 801CE038
  W8(c->r[29]+0x00000071u,c->r[0]); // 801CE03C
  goto L_801CE074; // 801CE040
L_801CE044:;
  c->r[3]=0u+0x803D0000u; // 801CE044
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE048
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE04C
  cmpu(c,0,c->r[0],0x00000004u); // 801CE050
  if (crb(c,0)) { goto L_801CE074; } // 801CE054
  c->r[3]=0u+0x00090000u; // 801CE058
  c->r[4]=0u+0x80330000u; // 801CE05C
  c->r[6]=R8(c->r[29]+0x0000006Cu); // 801CE060
  c->r[5]=c->r[30]|c->r[30]; // 801CE064
  c->r[3]=c->r[3]+0x00000003u; // 801CE068
  c->r[4]=c->r[4]+0x00005F30u; // 801CE06C
  c->lr=0x801CE074u; f_801ACB50(c); // 801CE070
L_801CE074:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE074
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE078
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE07C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE080
  c->lr=c->r[0]; // 801CE084
  c->r[1]=c->r[1]+0x00000020u; // 801CE088
  return; // 801CE08C
}

// rfc_mx_sm_state_connected
void f_801CE090(Ctx* __restrict c) {
  trace_call(0x801CE090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE090
  c->r[0]=c->lr; // 801CE094
  c->r[5]=0u+0x803D0000u; // 801CE098
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE09C
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CE0A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE0A4
  c->r[31]=c->r[4]|c->r[4]; // 801CE0A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE0AC
  c->r[30]=c->r[3]|c->r[3]; // 801CE0B0
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CE0B4
  cmpu(c,0,c->r[0],0x00000004u); // 801CE0B8
  if (crb(c,0)) { goto L_801CE0D8; } // 801CE0BC
  c->r[3]=0u+0x00090000u; // 801CE0C0
  c->r[4]=0u+0x80330000u; // 801CE0C4
  c->r[5]=c->r[31]|c->r[31]; // 801CE0C8
  c->r[3]=c->r[3]+0x00000003u; // 801CE0CC
  c->r[4]=c->r[4]+0x00006080u; // 801CE0D0
  c->lr=0x801CE0D8u; f_801ACB38(c); // 801CE0D4
L_801CE0D8:;
  c->r[0]=c->r[31]+0xFFFFFFFDu; // 801CE0D8
  cmpu(c,0,c->r[0],0x0000000Bu); // 801CE0DC
  if (crb(c,1)) { goto L_801CE160; } // 801CE0E0
  c->r[3]=0u+0x80330000u; // 801CE0E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CE0E8
  c->r[3]=c->r[3]+0x000060A4u; // 801CE0EC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CE0F0
  c->ctr=c->r[3]; // 801CE0F4
  if (true) { switch (c->ctr) { case 0x801CE0FCu: goto L_801CE0FC; case 0x801CE120u: goto L_801CE120; case 0x801CE134u: goto L_801CE134; case 0x801CE160u: goto L_801CE160; default: break; } dispatch(c,c->ctr); return; } // 801CE0F8
L_801CE0FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801CE0FC
  c->r[4]=0u+0x00000003u; // 801CE100
  c->lr=0x801CE108u; f_801D147C(c); // 801CE104
  c->r[0]=0u+0x00000006u; // 801CE108
  c->r[3]=c->r[30]|c->r[30]; // 801CE10C
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 801CE110
  c->r[4]=0u+0x00000000u; // 801CE114
  c->lr=0x801CE11Cu; f_801CFDF4(c); // 801CE118
  goto L_801CE190; // 801CE11C
L_801CE120:;
  c->r[0]=0u+0x00000000u; // 801CE120
  c->r[3]=c->r[30]|c->r[30]; // 801CE124
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 801CE128
  c->lr=0x801CE130u; f_801CC2C0(c); // 801CE12C
  goto L_801CE190; // 801CE130
L_801CE134:;
  c->r[3]=c->r[30]|c->r[30]; // 801CE134
  c->r[4]=0u+0x00000000u; // 801CE138
  c->lr=0x801CE140u; f_801CFC80(c); // 801CE13C
  c->r[0]=R8(c->r[30]+0x0000006Du); // 801CE140
  cmps(c,0,(int32_t)c->r[0],0); // 801CE144
  if (crb(c,2)) { goto L_801CE154; } // 801CE148
  c->r[3]=R16(c->r[30]+0x00000068u); // 801CE14C
  c->lr=0x801CE154u; f_801C5BB8(c); // 801CE150
L_801CE154:;
  c->r[3]=c->r[30]|c->r[30]; // 801CE154
  c->lr=0x801CE15Cu; f_801CC2C0(c); // 801CE158
  goto L_801CE190; // 801CE15C
L_801CE160:;
  c->r[3]=0u+0x803D0000u; // 801CE160
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE164
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE168
  cmpu(c,0,c->r[0],0x00000004u); // 801CE16C
  if (crb(c,0)) { goto L_801CE190; } // 801CE170
  c->r[3]=0u+0x00090000u; // 801CE174
  c->r[4]=0u+0x80330000u; // 801CE178
  c->r[6]=R8(c->r[30]+0x0000006Cu); // 801CE17C
  c->r[5]=c->r[31]|c->r[31]; // 801CE180
  c->r[3]=c->r[3]+0x00000003u; // 801CE184
  c->r[4]=c->r[4]+0x00005F30u; // 801CE188
  c->lr=0x801CE190u; f_801ACB50(c); // 801CE18C
L_801CE190:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE194
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE198
  c->lr=c->r[0]; // 801CE19C
  c->r[1]=c->r[1]+0x00000010u; // 801CE1A0
  return; // 801CE1A4
}

// rfc_mx_sm_state_disc_wait_ua
void f_801CE1A8(Ctx* __restrict c) {
  trace_call(0x801CE1A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE1A8
  c->r[0]=c->lr; // 801CE1AC
  c->r[6]=0u+0x803D0000u; // 801CE1B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE1B4
  c->r[6]=c->r[6]+0xFFFFB9C8u; // 801CE1B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE1BC
  c->r[31]=c->r[5]|c->r[5]; // 801CE1C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE1C4
  c->r[30]=c->r[4]|c->r[4]; // 801CE1C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE1CC
  c->r[29]=c->r[3]|c->r[3]; // 801CE1D0
  c->r[0]=R8(c->r[6]+0x00000414u); // 801CE1D4
  cmpu(c,0,c->r[0],0x00000004u); // 801CE1D8
  if (crb(c,0)) { goto L_801CE1F8; } // 801CE1DC
  c->r[3]=0u+0x00090000u; // 801CE1E0
  c->r[4]=0u+0x80330000u; // 801CE1E4
  c->r[5]=c->r[30]|c->r[30]; // 801CE1E8
  c->r[3]=c->r[3]+0x00000003u; // 801CE1EC
  c->r[4]=c->r[4]+0x000060D4u; // 801CE1F0
  c->lr=0x801CE1F8u; f_801ACB38(c); // 801CE1F4
L_801CE1F8:;
  cmpu(c,0,c->r[30],0x0000000Eu); // 801CE1F8
  if (crb(c,1)) { goto L_801CE2D4; } // 801CE1FC
  c->r[3]=0u+0x80330000u; // 801CE200
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801CE204
  c->r[3]=c->r[3]+0x000060FCu; // 801CE208
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CE20C
  c->ctr=c->r[3]; // 801CE210
  if (true) { switch (c->ctr) { case 0x801CE218u: goto L_801CE218; case 0x801CE284u: goto L_801CE284; case 0x801CE294u: goto L_801CE294; case 0x801CE2B0u: goto L_801CE2B0; case 0x801CE2BCu: goto L_801CE2BC; case 0x801CE2D0u: goto L_801CE2D0; case 0x801CE2D4u: goto L_801CE2D4; default: break; } dispatch(c,c->ctr); return; } // 801CE214
L_801CE218:;
  c->r[3]=R16(c->r[29]+0x00000068u); // 801CE218
  c->lr=0x801CE220u; f_801C5BB8(c); // 801CE21C
  c->r[0]=R8(c->r[29]+0x00000070u); // 801CE220
  cmps(c,0,(int32_t)c->r[0],0); // 801CE224
  if (crb(c,2)) { goto L_801CE278; } // 801CE228
  c->r[4]=c->r[29]+0x00000062u; // 801CE22C
  c->r[3]=0u+0x00000003u; // 801CE230
  c->lr=0x801CE238u; f_801C566C(c); // 801CE234
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801CE238
  W16(c->r[29]+0x00000068u,c->r[3]); // 801CE23C
  if (!crb(c,2)) { goto L_801CE254; } // 801CE240
  c->r[3]=c->r[29]|c->r[29]; // 801CE244
  c->r[4]=0u+0x00000001u; // 801CE248
  c->lr=0x801CE250u; f_801CB5B8(c); // 801CE24C
  goto L_801CE304; // 801CE250
L_801CE254:;
  c->r[3]=c->r[29]|c->r[29]; // 801CE254
  c->lr=0x801CE25Cu; f_801CD8A4(c); // 801CE258
  c->r[3]=0u+0x00000000u; // 801CE25C
  c->r[0]=0u+0x00000001u; // 801CE260
  W8(c->r[29]+0x00000070u,c->r[3]); // 801CE264
  W8(c->r[29]+0x0000006Eu,c->r[3]); // 801CE268
  W8(c->r[29]+0x0000006Fu,c->r[3]); // 801CE26C
  W8(c->r[29]+0x0000006Cu,c->r[0]); // 801CE270
  goto L_801CE304; // 801CE274
L_801CE278:;
  c->r[3]=c->r[29]|c->r[29]; // 801CE278
  c->lr=0x801CE280u; f_801D13F4(c); // 801CE27C
  goto L_801CE304; // 801CE280
L_801CE284:;
  c->r[3]=c->r[29]|c->r[29]; // 801CE284
  c->r[4]=0u+0x00000000u; // 801CE288
  c->lr=0x801CE290u; f_801CFC80(c); // 801CE28C
  goto L_801CE304; // 801CE290
L_801CE294:;
  c->r[3]=c->r[31]|c->r[31]; // 801CE294
  c->lr=0x801CE29Cu; f_801AA228(c); // 801CE298
  c->r[3]=c->r[29]|c->r[29]; // 801CE29C
  c->r[4]=0u+0x00000000u; // 801CE2A0
  c->r[5]=0u+0x00000000u; // 801CE2A4
  c->lr=0x801CE2ACu; f_801CFD30(c); // 801CE2A8
  goto L_801CE304; // 801CE2AC
L_801CE2B0:;
  c->r[0]=0u+0x00000001u; // 801CE2B0
  W8(c->r[29]+0x00000070u,c->r[0]); // 801CE2B4
  goto L_801CE304; // 801CE2B8
L_801CE2BC:;
  c->r[0]=0u+0x00000000u; // 801CE2BC
  c->r[3]=c->r[29]|c->r[29]; // 801CE2C0
  W8(c->r[29]+0x0000006Cu,c->r[0]); // 801CE2C4
  c->lr=0x801CE2CCu; f_801CC2C0(c); // 801CE2C8
  goto L_801CE304; // 801CE2CC
L_801CE2D0:;
  goto L_801CE304; // 801CE2D0
L_801CE2D4:;
  c->r[3]=0u+0x803D0000u; // 801CE2D4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE2D8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE2DC
  cmpu(c,0,c->r[0],0x00000004u); // 801CE2E0
  if (crb(c,0)) { goto L_801CE304; } // 801CE2E4
  c->r[3]=0u+0x00090000u; // 801CE2E8
  c->r[4]=0u+0x80330000u; // 801CE2EC
  c->r[6]=R8(c->r[29]+0x0000006Cu); // 801CE2F0
  c->r[5]=c->r[30]|c->r[30]; // 801CE2F4
  c->r[3]=c->r[3]+0x00000003u; // 801CE2F8
  c->r[4]=c->r[4]+0x00005F30u; // 801CE2FC
  c->lr=0x801CE304u; f_801ACB50(c); // 801CE300
L_801CE304:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE304
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE308
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE30C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE310
  c->lr=c->r[0]; // 801CE314
  c->r[1]=c->r[1]+0x00000020u; // 801CE318
  return; // 801CE31C
}

// rfc_mx_conf_cnf
void f_801CE320(Ctx* __restrict c) {
  trace_call(0x801CE320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE320
  c->r[0]=c->lr; // 801CE324
  c->r[5]=0u+0x803D0000u; // 801CE328
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE32C
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CE330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE334
  c->r[31]=c->r[4]|c->r[4]; // 801CE338
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE33C
  c->r[30]=c->r[3]|c->r[3]; // 801CE340
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CE344
  cmpu(c,0,c->r[0],0x00000004u); // 801CE348
  if (crb(c,0)) { goto L_801CE37C; } // 801CE34C
  cmps(c,0,(int32_t)c->r[31],0); // 801CE350
  c->r[3]=0u+0x00090000u; // 801CE354
  c->r[4]=0u+0x80330000u; // 801CE358
  c->r[5]=c->r[31]|c->r[31]; // 801CE35C
  c->r[3]=c->r[3]+0x00000003u; // 801CE360
  c->r[4]=c->r[4]+0x00006138u; // 801CE364
  if (crb(c,2)) { goto L_801CE374; } // 801CE368
  c->r[6]=R16(c->r[31]+0x00000000u); // 801CE36C
  goto L_801CE378; // 801CE370
L_801CE374:;
  c->r[6]=0u+0x00000000u; // 801CE374
L_801CE378:;
  c->lr=0x801CE37Cu; f_801ACB50(c); // 801CE378
L_801CE37C:;
  c->r[4]=R16(c->r[31]+0x00000000u); // 801CE37C
  cmps(c,0,(int32_t)c->r[4],0); // 801CE380
  if (crb(c,2)) { goto L_801CE3B0; } // 801CE384
  c->r[0]=R8(c->r[30]+0x0000006Du); // 801CE388
  cmps(c,0,(int32_t)c->r[0],0); // 801CE38C
  if (crb(c,2)) { goto L_801CE3A4; } // 801CE390
  c->r[3]=c->r[30]|c->r[30]; // 801CE394
  c->lr=0x801CE39Cu; f_801CB5B8(c); // 801CE398
  c->r[3]=R16(c->r[30]+0x00000068u); // 801CE39C
  c->lr=0x801CE3A4u; f_801C5BB8(c); // 801CE3A0
L_801CE3A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801CE3A4
  c->lr=0x801CE3ACu; f_801D13F4(c); // 801CE3A8
  goto L_801CE3FC; // 801CE3AC
L_801CE3B0:;
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801CE3B0
  c->r[3]=0u+0x00000001u; // 801CE3B4
  W8(c->r[30]+0x0000006Eu,c->r[3]); // 801CE3B8
  cmpu(c,0,c->r[0],0x00000002u); // 801CE3BC
  if (!crb(c,2)) { goto L_801CE3FC; } // 801CE3C0
  c->r[0]=R8(c->r[30]+0x0000006Fu); // 801CE3C4
  cmps(c,0,(int32_t)c->r[0],0); // 801CE3C8
  if (crb(c,2)) { goto L_801CE3FC; } // 801CE3CC
  c->r[0]=R8(c->r[30]+0x0000006Du); // 801CE3D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CE3D4
  if (crb(c,2)) { goto L_801CE3F4; } // 801CE3D8
  c->r[0]=0u+0x00000003u; // 801CE3DC
  c->r[3]=c->r[30]|c->r[30]; // 801CE3E0
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 801CE3E4
  c->r[4]=0u+0x00000000u; // 801CE3E8
  c->lr=0x801CE3F0u; f_801CFBD0(c); // 801CE3EC
  goto L_801CE3FC; // 801CE3F0
L_801CE3F4:;
  c->r[0]=0u+0x00000004u; // 801CE3F4
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 801CE3F8
L_801CE3FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE3FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE400
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE404
  c->lr=c->r[0]; // 801CE408
  c->r[1]=c->r[1]+0x00000010u; // 801CE40C
  return; // 801CE410
}

// rfc_mx_conf_ind
void f_801CE414(Ctx* __restrict c) {
  trace_call(0x801CE414u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE414
  c->r[0]=c->lr; // 801CE418
  c->r[5]=0u+0x803D0000u; // 801CE41C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE420
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CE424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE428
  c->r[31]=c->r[4]|c->r[4]; // 801CE42C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE430
  c->r[30]=c->r[3]|c->r[3]; // 801CE434
  c->r[0]=R8(c->r[5]+0x00000414u); // 801CE438
  cmpu(c,0,c->r[0],0x00000004u); // 801CE43C
  if (crb(c,0)) { goto L_801CE45C; } // 801CE440
  c->r[3]=0u+0x00090000u; // 801CE444
  c->r[4]=0u+0x80330000u; // 801CE448
  c->r[5]=c->r[31]|c->r[31]; // 801CE44C
  c->r[3]=c->r[3]+0x00000003u; // 801CE450
  c->r[4]=c->r[4]+0x0000615Cu; // 801CE454
  c->lr=0x801CE45Cu; f_801ACB38(c); // 801CE458
L_801CE45C:;
  c->r[0]=R8(c->r[31]+0x00000002u); // 801CE45C
  cmps(c,0,(int32_t)c->r[0],0); // 801CE460
  if (crb(c,2)) { goto L_801CE478; } // 801CE464
  c->r[3]=R16(c->r[31]+0x00000004u); // 801CE468
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 801CE46C
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801CE470
  goto L_801CE480; // 801CE474
L_801CE478:;
  c->r[0]=0u+0x0000029Au; // 801CE478
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801CE47C
L_801CE480:;
  c->r[0]=0u+0x00000000u; // 801CE480
  c->r[4]=c->r[31]|c->r[31]; // 801CE484
  W8(c->r[31]+0x00000002u,c->r[0]); // 801CE488
  W8(c->r[31]+0x00000020u,c->r[0]); // 801CE48C
  W8(c->r[31]+0x00000006u,c->r[0]); // 801CE490
  W16(c->r[31]+0x00000000u,c->r[0]); // 801CE494
  c->r[3]=R16(c->r[30]+0x00000068u); // 801CE498
  c->lr=0x801CE4A0u; f_801C5AE8(c); // 801CE49C
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801CE4A0
  c->r[3]=0u+0x00000001u; // 801CE4A4
  W8(c->r[30]+0x0000006Fu,c->r[3]); // 801CE4A8
  cmpu(c,0,c->r[0],0x00000002u); // 801CE4AC
  if (!crb(c,2)) { goto L_801CE4EC; } // 801CE4B0
  c->r[0]=R8(c->r[30]+0x0000006Eu); // 801CE4B4
  cmps(c,0,(int32_t)c->r[0],0); // 801CE4B8
  if (crb(c,2)) { goto L_801CE4EC; } // 801CE4BC
  c->r[0]=R8(c->r[30]+0x0000006Du); // 801CE4C0
  cmps(c,0,(int32_t)c->r[0],0); // 801CE4C4
  if (crb(c,2)) { goto L_801CE4E4; } // 801CE4C8
  c->r[0]=0u+0x00000003u; // 801CE4CC
  c->r[3]=c->r[30]|c->r[30]; // 801CE4D0
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 801CE4D4
  c->r[4]=0u+0x00000000u; // 801CE4D8
  c->lr=0x801CE4E0u; f_801CFBD0(c); // 801CE4DC
  goto L_801CE4EC; // 801CE4E0
L_801CE4E4:;
  c->r[0]=0u+0x00000004u; // 801CE4E4
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 801CE4E8
L_801CE4EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE4EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE4F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE4F4
  c->lr=c->r[0]; // 801CE4F8
  c->r[1]=c->r[1]+0x00000010u; // 801CE4FC
  return; // 801CE500
}

// rfc_port_sm_execute
void f_801CE504(Ctx* __restrict c) {
  trace_call(0x801CE504u);
  cmps(c,0,(int32_t)c->r[3],0); // 801CE504
  c->r[6]=c->r[4]|c->r[4]; // 801CE508
  if (!crb(c,2)) { goto L_801CE540; } // 801CE50C
  c->r[3]=0u+0x803D0000u; // 801CE510
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE514
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE518
  cmpu(c,0,c->r[0],0x00000002u); // 801CE51C
  if (crb(c,0)) return; // 801CE520
  c->r[3]=0u+0x00090000u; // 801CE524
  c->r[4]=0u+0x80330000u; // 801CE528
  c->r[5]=c->r[6]|c->r[6]; // 801CE52C
  c->r[3]=c->r[3]+0x00000001u; // 801CE530
  c->r[4]=c->r[4]+0x00006178u; // 801CE534
  f_801ACB38(c); return; // 801CE538
  return; // 801CE53C
L_801CE540:;
  c->r[0]=R8(c->r[3]+0x00000068u); // 801CE540
  cmps(c,0,(int32_t)c->r[0],3); // 801CE544
  if (crb(c,2)) { goto L_801CE584; } // 801CE548
  if (!crb(c,0)) { goto L_801CE568; } // 801CE54C
  cmps(c,0,(int32_t)c->r[0],1); // 801CE550
  if (crb(c,2)) { goto L_801CE57C; } // 801CE554
  if (!crb(c,0)) { goto L_801CE580; } // 801CE558
  cmps(c,0,(int32_t)c->r[0],0); // 801CE55C
  if (!crb(c,0)) { goto L_801CE578; } // 801CE560
  return; // 801CE564
L_801CE568:;
  cmps(c,0,(int32_t)c->r[0],5); // 801CE568
  if (crb(c,2)) { goto L_801CE58C; } // 801CE56C
  if (!crb(c,0)) return; // 801CE570
  goto L_801CE588; // 801CE574
L_801CE578:;
  f_801CE594(c); return; // 801CE578
L_801CE57C:;
  f_801CE708(c); return; // 801CE57C
L_801CE580:;
  f_801CEA60(c); return; // 801CE580
L_801CE584:;
  f_801CE8A4(c); return; // 801CE584
L_801CE588:;
  f_801CEBB0(c); return; // 801CE588
L_801CE58C:;
  f_801CED9C(c); return; // 801CE58C
  return; // 801CE590
}

// rfc_port_sm_state_closed
void f_801CE594(Ctx* __restrict c) {
  trace_call(0x801CE594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE594
  c->r[0]=c->lr; // 801CE598
  cmpu(c,0,c->r[4],0x0000000Eu); // 801CE59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE5A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE5A4
  c->r[31]=c->r[4]|c->r[4]; // 801CE5A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE5AC
  c->r[30]=c->r[3]|c->r[3]; // 801CE5B0
  if (crb(c,1)) { goto L_801CE6C4; } // 801CE5B4
  c->r[6]=0u+0x80330000u; // 801CE5B8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CE5BC
  c->r[6]=c->r[6]+0x000061D0u; // 801CE5C0
  c->r[6]=R32(c->r[6]+c->r[0]); // 801CE5C4
  c->ctr=c->r[6]; // 801CE5C8
  if (true) { switch (c->ctr) { case 0x801CE5D0u: goto L_801CE5D0; case 0x801CE608u: goto L_801CE608; case 0x801CE60Cu: goto L_801CE60C; case 0x801CE618u: goto L_801CE618; case 0x801CE650u: goto L_801CE650; case 0x801CE654u: goto L_801CE654; case 0x801CE65Cu: goto L_801CE65C; case 0x801CE678u: goto L_801CE678; case 0x801CE68Cu: goto L_801CE68C; case 0x801CE6C4u: goto L_801CE6C4; default: break; } dispatch(c,c->ctr); return; } // 801CE5CC
L_801CE5D0:;
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801CE5D0
  c->r[5]=0u+0x00000002u; // 801CE5D4
  c->r[8]=0u+0x801D0000u; // 801CE5D8
  W8(c->r[3]+0x00000068u,c->r[5]); // 801CE5DC
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801CE5E0
  c->r[9]=c->r[30]|c->r[30]; // 801CE5E4
  c->r[7]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CE5E8
  c->r[8]=c->r[8]+0x00001720u; // 801CE5EC
  c->r[3]=c->r[4]+0x00000062u; // 801CE5F0
  c->r[4]=0u+0x00000003u; // 801CE5F4
  c->r[5]=0u+0x00000001u; // 801CE5F8
  c->r[6]=0u+0x00000003u; // 801CE5FC
  c->lr=0x801CE604u; f_801BB38C(c); // 801CE600
  goto L_801CE6F0; // 801CE604
L_801CE608:;
  goto L_801CE6F0; // 801CE608
L_801CE60C:;
  c->r[3]=c->r[5]|c->r[5]; // 801CE60C
  c->lr=0x801CE614u; f_801AA228(c); // 801CE610
  goto L_801CE6C4; // 801CE614
L_801CE618:;
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801CE618
  c->r[5]=0u+0x00000003u; // 801CE61C
  c->r[8]=0u+0x801D0000u; // 801CE620
  W8(c->r[3]+0x00000068u,c->r[5]); // 801CE624
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801CE628
  c->r[9]=c->r[30]|c->r[30]; // 801CE62C
  c->r[7]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CE630
  c->r[8]=c->r[8]+0x00001720u; // 801CE634
  c->r[3]=c->r[4]+0x00000062u; // 801CE638
  c->r[4]=0u+0x00000003u; // 801CE63C
  c->r[5]=0u+0x00000000u; // 801CE640
  c->r[6]=0u+0x00000003u; // 801CE644
  c->lr=0x801CE64Cu; f_801BB38C(c); // 801CE648
  goto L_801CE6F0; // 801CE64C
L_801CE650:;
  goto L_801CE6F0; // 801CE650
L_801CE654:;
  c->lr=0x801CE658u; f_801D1774(c); // 801CE654
  goto L_801CE6F0; // 801CE658
L_801CE65C:;
  c->r[3]=c->r[5]|c->r[5]; // 801CE65C
  c->lr=0x801CE664u; f_801AA228(c); // 801CE660
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 801CE664
  c->r[5]=0u+0x00000000u; // 801CE668
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE66C
  c->lr=0x801CE674u; f_801CFD30(c); // 801CE670
  goto L_801CE6F0; // 801CE674
L_801CE678:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE678
  c->r[5]=0u+0x00000000u; // 801CE67C
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE680
  c->lr=0x801CE688u; f_801CFD30(c); // 801CE684
  goto L_801CE6F0; // 801CE688
L_801CE68C:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE68C
  c->lr=0x801CE694u; f_801CC360(c); // 801CE690
  c->r[3]=0u+0x803D0000u; // 801CE694
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE698
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE69C
  cmpu(c,0,c->r[0],0x00000001u); // 801CE6A0
  if (crb(c,0)) { goto L_801CE6F0; } // 801CE6A4
  c->r[4]=0u+0x80330000u; // 801CE6A8
  c->r[5]=R8(c->r[30]+0x00000068u); // 801CE6AC
  c->r[6]=c->r[31]|c->r[31]; // 801CE6B0
  c->r[3]=0u+0x00090000u; // 801CE6B4
  c->r[4]=c->r[4]+0x0000618Cu; // 801CE6B8
  c->lr=0x801CE6C0u; f_801ACB50(c); // 801CE6BC
  goto L_801CE6F0; // 801CE6C0
L_801CE6C4:;
  c->r[3]=0u+0x803D0000u; // 801CE6C4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE6C8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE6CC
  cmpu(c,0,c->r[0],0x00000002u); // 801CE6D0
  if (crb(c,0)) { goto L_801CE6F0; } // 801CE6D4
  c->r[3]=0u+0x00090000u; // 801CE6D8
  c->r[4]=0u+0x80330000u; // 801CE6DC
  c->r[5]=c->r[31]|c->r[31]; // 801CE6E0
  c->r[3]=c->r[3]+0x00000001u; // 801CE6E4
  c->r[4]=c->r[4]+0x000061ACu; // 801CE6E8
  c->lr=0x801CE6F0u; f_801ACB38(c); // 801CE6EC
L_801CE6F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE6F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE6F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE6F8
  c->lr=c->r[0]; // 801CE6FC
  c->r[1]=c->r[1]+0x00000010u; // 801CE700
  return; // 801CE704
}

// rfc_port_sm_sabme_wait_ua
void f_801CE708(Ctx* __restrict c) {
  trace_call(0x801CE708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE708
  c->r[0]=c->lr; // 801CE70C
  cmpu(c,0,c->r[4],0x0000000Eu); // 801CE710
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE718
  c->r[31]=c->r[4]|c->r[4]; // 801CE71C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE720
  c->r[30]=c->r[3]|c->r[3]; // 801CE724
  if (crb(c,1)) { goto L_801CE860; } // 801CE728
  c->r[6]=0u+0x80330000u; // 801CE72C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CE730
  c->r[6]=c->r[6]+0x00006238u; // 801CE734
  c->r[6]=R32(c->r[6]+c->r[0]); // 801CE738
  c->ctr=c->r[6]; // 801CE73C
  if (true) { switch (c->ctr) { case 0x801CE744u: goto L_801CE744; case 0x801CE774u: goto L_801CE774; case 0x801CE79Cu: goto L_801CE79C; case 0x801CE7A4u: goto L_801CE7A4; case 0x801CE7B0u: goto L_801CE7B0; case 0x801CE7D4u: goto L_801CE7D4; case 0x801CE7F4u: goto L_801CE7F4; case 0x801CE820u: goto L_801CE820; case 0x801CE830u: goto L_801CE830; case 0x801CE83Cu: goto L_801CE83C; case 0x801CE860u: goto L_801CE860; default: break; } dispatch(c,c->ctr); return; } // 801CE740
L_801CE744:;
  c->r[3]=0u+0x803D0000u; // 801CE744
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE748
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE74C
  cmpu(c,0,c->r[0],0x00000001u); // 801CE750
  if (crb(c,0)) { goto L_801CE88C; } // 801CE754
  c->r[4]=0u+0x80330000u; // 801CE758
  c->r[5]=R8(c->r[30]+0x00000068u); // 801CE75C
  c->r[6]=c->r[31]|c->r[31]; // 801CE760
  c->r[3]=0u+0x00090000u; // 801CE764
  c->r[4]=c->r[4]+0x0000618Cu; // 801CE768
  c->lr=0x801CE770u; f_801ACB50(c); // 801CE76C
  goto L_801CE88C; // 801CE770
L_801CE774:;
  c->r[4]=0u+0x00000003u; // 801CE774
  c->lr=0x801CE77Cu; f_801D1548(c); // 801CE778
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 801CE77C
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE780
  c->lr=0x801CE788u; f_801CFDF4(c); // 801CE784
  c->r[3]=0u+0x00000000u; // 801CE788
  c->r[0]=0u+0x00000005u; // 801CE78C
  W8(c->r[30]+0x00000069u,c->r[3]); // 801CE790
  W8(c->r[30]+0x00000068u,c->r[0]); // 801CE794
  goto L_801CE88C; // 801CE798
L_801CE79C:;
  c->lr=0x801CE7A0u; f_801D1774(c); // 801CE79C
  goto L_801CE88C; // 801CE7A0
L_801CE7A4:;
  c->r[3]=c->r[5]|c->r[5]; // 801CE7A4
  c->lr=0x801CE7ACu; f_801AA228(c); // 801CE7A8
  goto L_801CE860; // 801CE7AC
L_801CE7B0:;
  c->lr=0x801CE7B4u; f_801D15C8(c); // 801CE7B0
  c->r[0]=0u+0x00000004u; // 801CE7B4
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 801CE7B8
  W8(c->r[30]+0x00000068u,c->r[0]); // 801CE7BC
  c->r[6]=0u+0x00000000u; // 801CE7C0
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE7C4
  c->r[5]=R16(c->r[3]+0x0000006Au); // 801CE7C8
  c->lr=0x801CE7D0u; f_801CBBA8(c); // 801CE7CC
  goto L_801CE88C; // 801CE7D0
L_801CE7D4:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE7D4
  c->r[6]=0u+0x00000001u; // 801CE7D8
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE7DC
  c->r[5]=R16(c->r[3]+0x0000006Au); // 801CE7E0
  c->lr=0x801CE7E8u; f_801CBBA8(c); // 801CE7E4
  c->r[3]=c->r[30]|c->r[30]; // 801CE7E8
  c->lr=0x801CE7F0u; f_801D1774(c); // 801CE7EC
  goto L_801CE88C; // 801CE7F0
L_801CE7F4:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE7F4
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE7F8
  c->lr=0x801CE800u; f_801CFC80(c); // 801CE7FC
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 801CE800
  c->r[6]=0u+0x00000001u; // 801CE804
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE808
  c->r[5]=R16(c->r[3]+0x0000006Au); // 801CE80C
  c->lr=0x801CE814u; f_801CBBA8(c); // 801CE810
  c->r[3]=c->r[30]|c->r[30]; // 801CE814
  c->lr=0x801CE81Cu; f_801D1774(c); // 801CE818
  goto L_801CE88C; // 801CE81C
L_801CE820:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE820
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE824
  c->lr=0x801CE82Cu; f_801CFC80(c); // 801CE828
  goto L_801CE88C; // 801CE82C
L_801CE830:;
  c->r[3]=c->r[5]|c->r[5]; // 801CE830
  c->lr=0x801CE838u; f_801AA228(c); // 801CE834
  goto L_801CE88C; // 801CE838
L_801CE83C:;
  c->r[0]=0u+0x00000000u; // 801CE83C
  c->r[5]=R32(c->r[3]+0x0000006Cu); // 801CE840
  W8(c->r[3]+0x00000068u,c->r[0]); // 801CE844
  c->r[6]=0u+0x00000001u; // 801CE848
  c->r[3]=c->r[5]|c->r[5]; // 801CE84C
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE850
  c->r[5]=R16(c->r[5]+0x0000006Au); // 801CE854
  c->lr=0x801CE85Cu; f_801CBBA8(c); // 801CE858
  goto L_801CE88C; // 801CE85C
L_801CE860:;
  c->r[3]=0u+0x803D0000u; // 801CE860
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE864
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE868
  cmpu(c,0,c->r[0],0x00000002u); // 801CE86C
  if (crb(c,0)) { goto L_801CE88C; } // 801CE870
  c->r[3]=0u+0x00090000u; // 801CE874
  c->r[4]=0u+0x80330000u; // 801CE878
  c->r[5]=c->r[31]|c->r[31]; // 801CE87C
  c->r[3]=c->r[3]+0x00000001u; // 801CE880
  c->r[4]=c->r[4]+0x0000620Cu; // 801CE884
  c->lr=0x801CE88Cu; f_801ACB38(c); // 801CE888
L_801CE88C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE88C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE890
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE894
  c->lr=c->r[0]; // 801CE898
  c->r[1]=c->r[1]+0x00000010u; // 801CE89C
  return; // 801CE8A0
}

// rfc_port_sm_term_wait_sec_check
void f_801CE8A4(Ctx* __restrict c) {
  trace_call(0x801CE8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE8A4
  c->r[0]=c->lr; // 801CE8A8
  c->r[7]=0u+0x80330000u; // 801CE8AC
  cmpu(c,0,c->r[4],0x0000000Fu); // 801CE8B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE8B4
  c->r[7]=c->r[7]+0x00006178u; // 801CE8B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE8BC
  c->r[31]=c->r[5]|c->r[5]; // 801CE8C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE8C4
  c->r[30]=c->r[3]|c->r[3]; // 801CE8C8
  if (crb(c,1)) { goto L_801CEA20; } // 801CE8CC
  c->r[6]=0u+0x80330000u; // 801CE8D0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CE8D4
  c->r[6]=c->r[6]+0x000062D0u; // 801CE8D8
  c->r[6]=R32(c->r[6]+c->r[0]); // 801CE8DC
  c->ctr=c->r[6]; // 801CE8E0
  if (true) { switch (c->ctr) { case 0x801CE8E8u: goto L_801CE8E8; case 0x801CE930u: goto L_801CE930; case 0x801CE95Cu: goto L_801CE95C; case 0x801CE974u: goto L_801CE974; case 0x801CE9A0u: goto L_801CE9A0; case 0x801CE9A4u: goto L_801CE9A4; case 0x801CE9D4u: goto L_801CE9D4; case 0x801CE9E0u: goto L_801CE9E0; case 0x801CEA20u: goto L_801CEA20; default: break; } dispatch(c,c->ctr); return; } // 801CE8E4
L_801CE8E8:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801CE8E8
  cmps(c,0,(int32_t)c->r[0],0); // 801CE8EC
  if (crb(c,2)) { goto L_801CE91C; } // 801CE8F0
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE8F4
  cmps(c,0,(int32_t)c->r[3],0); // 801CE8F8
  if (crb(c,2)) { goto L_801CEA48; } // 801CE8FC
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE900
  c->r[5]=0u+0x00000001u; // 801CE904
  c->lr=0x801CE90Cu; f_801CFD30(c); // 801CE908
  c->r[3]=c->r[30]|c->r[30]; // 801CE90C
  c->r[4]=0u+0x0000000Fu; // 801CE910
  c->lr=0x801CE918u; f_801CC820(c); // 801CE914
  goto L_801CEA48; // 801CE918
L_801CE91C:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE91C
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE920
  c->r[5]=R16(c->r[3]+0x0000006Au); // 801CE924
  c->lr=0x801CE92Cu; f_801CBA68(c); // 801CE928
  goto L_801CEA48; // 801CE92C
L_801CE930:;
  c->r[3]=0u+0x803D0000u; // 801CE930
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE934
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE938
  cmpu(c,0,c->r[0],0x00000001u); // 801CE93C
  if (crb(c,0)) { goto L_801CEA48; } // 801CE940
  c->r[5]=R8(c->r[30]+0x00000068u); // 801CE944
  c->r[6]=c->r[4]|c->r[4]; // 801CE948
  c->r[4]=c->r[7]+0x00000014u; // 801CE94C
  c->r[3]=0u+0x00090000u; // 801CE950
  c->lr=0x801CE958u; f_801ACB50(c); // 801CE954
  goto L_801CEA48; // 801CE958
L_801CE95C:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE95C
  c->r[3]=c->r[3]+0x00000062u; // 801CE960
  c->lr=0x801CE968u; f_801BB7B0(c); // 801CE964
  c->r[3]=c->r[30]|c->r[30]; // 801CE968
  c->lr=0x801CE970u; f_801D1774(c); // 801CE96C
  goto L_801CEA48; // 801CE970
L_801CE974:;
  c->r[3]=0u+0x803D0000u; // 801CE974
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CE978
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CE97C
  cmpu(c,0,c->r[0],0x00000001u); // 801CE980
  if (crb(c,0)) { goto L_801CE994; } // 801CE984
  c->r[4]=c->r[7]+0x000000FCu; // 801CE988
  c->r[3]=0u+0x00090000u; // 801CE98C
  c->lr=0x801CE994u; f_801ACB20(c); // 801CE990
L_801CE994:;
  c->r[3]=c->r[31]|c->r[31]; // 801CE994
  c->lr=0x801CE99Cu; f_801AA228(c); // 801CE998
  goto L_801CEA48; // 801CE99C
L_801CE9A0:;
  goto L_801CEA48; // 801CE9A0
L_801CE9A4:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE9A4
  c->r[3]=c->r[3]+0x00000062u; // 801CE9A8
  c->lr=0x801CE9B0u; f_801BB7B0(c); // 801CE9AC
  c->r[0]=0u+0x00000000u; // 801CE9B0
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 801CE9B4
  W8(c->r[30]+0x00000068u,c->r[0]); // 801CE9B8
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE9BC
  c->lr=0x801CE9C4u; f_801CFC80(c); // 801CE9C0
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 801CE9C4
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE9C8
  c->lr=0x801CE9D0u; f_801CC258(c); // 801CE9CC
  goto L_801CEA48; // 801CE9D0
L_801CE9D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CE9D4
  c->lr=0x801CE9DCu; f_801AA228(c); // 801CE9D8
  goto L_801CEA48; // 801CE9DC
L_801CE9E0:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801CE9E0
  cmps(c,0,(int32_t)c->r[0],0); // 801CE9E4
  if (crb(c,2)) { goto L_801CEA08; } // 801CE9E8
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CE9EC
  cmps(c,0,(int32_t)c->r[3],0); // 801CE9F0
  if (crb(c,2)) { goto L_801CEA48; } // 801CE9F4
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CE9F8
  c->r[5]=0u+0x00000001u; // 801CE9FC
  c->lr=0x801CEA04u; f_801CFD30(c); // 801CEA00
  goto L_801CEA48; // 801CEA04
L_801CEA08:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CEA08
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CEA0C
  c->lr=0x801CEA14u; f_801CFC80(c); // 801CEA10
  c->r[0]=0u+0x00000004u; // 801CEA14
  W8(c->r[30]+0x00000068u,c->r[0]); // 801CEA18
  goto L_801CEA48; // 801CEA1C
L_801CEA20:;
  c->r[3]=0u+0x803D0000u; // 801CEA20
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEA24
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEA28
  cmpu(c,0,c->r[0],0x00000002u); // 801CEA2C
  if (crb(c,0)) { goto L_801CEA48; } // 801CEA30
  c->r[3]=0u+0x00090000u; // 801CEA34
  c->r[5]=c->r[4]|c->r[4]; // 801CEA38
  c->r[3]=c->r[3]+0x00000001u; // 801CEA3C
  c->r[4]=c->r[7]+0x00000128u; // 801CEA40
  c->lr=0x801CEA48u; f_801ACB38(c); // 801CEA44
L_801CEA48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEA48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEA4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CEA50
  c->lr=c->r[0]; // 801CEA54
  c->r[1]=c->r[1]+0x00000010u; // 801CEA58
  return; // 801CEA5C
}

// rfc_port_sm_orig_wait_sec_check
void f_801CEA60(Ctx* __restrict c) {
  trace_call(0x801CEA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEA60
  c->r[0]=c->lr; // 801CEA64
  c->r[7]=0u+0x80330000u; // 801CEA68
  cmpu(c,0,c->r[4],0x0000000Fu); // 801CEA6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEA70
  c->r[7]=c->r[7]+0x00006178u; // 801CEA74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEA78
  c->r[31]=c->r[5]|c->r[5]; // 801CEA7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CEA80
  c->r[30]=c->r[3]|c->r[3]; // 801CEA84
  if (crb(c,1)) { goto L_801CEB70; } // 801CEA88
  c->r[6]=0u+0x80330000u; // 801CEA8C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CEA90
  c->r[6]=c->r[6]+0x00006370u; // 801CEA94
  c->r[6]=R32(c->r[6]+c->r[0]); // 801CEA98
  c->ctr=c->r[6]; // 801CEA9C
  if (true) { switch (c->ctr) { case 0x801CEAA4u: goto L_801CEAA4; case 0x801CEAF4u: goto L_801CEAF4; case 0x801CEB20u: goto L_801CEB20; case 0x801CEB38u: goto L_801CEB38; case 0x801CEB64u: goto L_801CEB64; case 0x801CEB70u: goto L_801CEB70; default: break; } dispatch(c,c->ctr); return; } // 801CEAA0
L_801CEAA4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801CEAA4
  cmps(c,0,(int32_t)c->r[0],0); // 801CEAA8
  if (crb(c,2)) { goto L_801CEAD0; } // 801CEAAC
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CEAB0
  c->r[5]=0u+0x00000000u; // 801CEAB4
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CEAB8
  c->r[6]=0u+0x00000070u; // 801CEABC
  c->lr=0x801CEAC4u; f_801CBBA8(c); // 801CEAC0
  c->r[3]=c->r[30]|c->r[30]; // 801CEAC4
  c->lr=0x801CEACCu; f_801D1774(c); // 801CEAC8
  goto L_801CEB98; // 801CEACC
L_801CEAD0:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CEAD0
  c->r[4]=R8(c->r[30]+0x0000000Du); // 801CEAD4
  c->lr=0x801CEADCu; f_801CFBD0(c); // 801CEAD8
  c->r[3]=c->r[30]|c->r[30]; // 801CEADC
  c->r[4]=0u+0x0000003Cu; // 801CEAE0
  c->lr=0x801CEAE8u; f_801D1548(c); // 801CEAE4
  c->r[0]=0u+0x00000001u; // 801CEAE8
  W8(c->r[30]+0x00000068u,c->r[0]); // 801CEAEC
  goto L_801CEB98; // 801CEAF0
L_801CEAF4:;
  c->r[3]=0u+0x803D0000u; // 801CEAF4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEAF8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEAFC
  cmpu(c,0,c->r[0],0x00000001u); // 801CEB00
  if (crb(c,0)) { goto L_801CEB98; } // 801CEB04
  c->r[5]=R8(c->r[30]+0x00000068u); // 801CEB08
  c->r[6]=c->r[4]|c->r[4]; // 801CEB0C
  c->r[4]=c->r[7]+0x00000014u; // 801CEB10
  c->r[3]=0u+0x00090000u; // 801CEB14
  c->lr=0x801CEB1Cu; f_801ACB50(c); // 801CEB18
  goto L_801CEB98; // 801CEB1C
L_801CEB20:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CEB20
  c->r[3]=c->r[3]+0x00000062u; // 801CEB24
  c->lr=0x801CEB2Cu; f_801BB7B0(c); // 801CEB28
  c->r[3]=c->r[30]|c->r[30]; // 801CEB2C
  c->lr=0x801CEB34u; f_801D1774(c); // 801CEB30
  goto L_801CEB98; // 801CEB34
L_801CEB38:;
  c->r[3]=0u+0x803D0000u; // 801CEB38
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEB3C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEB40
  cmpu(c,0,c->r[0],0x00000001u); // 801CEB44
  if (crb(c,0)) { goto L_801CEB58; } // 801CEB48
  c->r[4]=c->r[7]+0x00000198u; // 801CEB4C
  c->r[3]=0u+0x00090000u; // 801CEB50
  c->lr=0x801CEB58u; f_801ACB20(c); // 801CEB54
L_801CEB58:;
  c->r[3]=c->r[31]|c->r[31]; // 801CEB58
  c->lr=0x801CEB60u; f_801AA228(c); // 801CEB5C
  goto L_801CEB98; // 801CEB60
L_801CEB64:;
  c->r[3]=c->r[31]|c->r[31]; // 801CEB64
  c->lr=0x801CEB6Cu; f_801AA228(c); // 801CEB68
  goto L_801CEB98; // 801CEB6C
L_801CEB70:;
  c->r[3]=0u+0x803D0000u; // 801CEB70
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEB74
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEB78
  cmpu(c,0,c->r[0],0x00000002u); // 801CEB7C
  if (crb(c,0)) { goto L_801CEB98; } // 801CEB80
  c->r[3]=0u+0x00090000u; // 801CEB84
  c->r[5]=c->r[4]|c->r[4]; // 801CEB88
  c->r[3]=c->r[3]+0x00000001u; // 801CEB8C
  c->r[4]=c->r[7]+0x000001C8u; // 801CEB90
  c->lr=0x801CEB98u; f_801ACB38(c); // 801CEB94
L_801CEB98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEB98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEB9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CEBA0
  c->lr=c->r[0]; // 801CEBA4
  c->r[1]=c->r[1]+0x00000010u; // 801CEBA8
  return; // 801CEBAC
}

// rfc_port_sm_opened
void f_801CEBB0(Ctx* __restrict c) {
  trace_call(0x801CEBB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEBB0
  c->r[0]=c->lr; // 801CEBB4
  cmpu(c,0,c->r[4],0x0000000Eu); // 801CEBB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEBBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEBC0
  c->r[31]=c->r[3]|c->r[3]; // 801CEBC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CEBC8
  c->r[30]=c->r[4]|c->r[4]; // 801CEBCC
  if (crb(c,1)) { goto L_801CED58; } // 801CEBD0
  c->r[6]=0u+0x80330000u; // 801CEBD4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CEBD8
  c->r[6]=c->r[6]+0x000063D4u; // 801CEBDC
  c->r[6]=R32(c->r[6]+c->r[0]); // 801CEBE0
  c->ctr=c->r[6]; // 801CEBE4
  if (true) { switch (c->ctr) { case 0x801CEBECu: goto L_801CEBEC; case 0x801CEC1Cu: goto L_801CEC1C; case 0x801CEC44u: goto L_801CEC44; case 0x801CEC4Cu: goto L_801CEC4C; case 0x801CECC0u: goto L_801CECC0; case 0x801CECC4u: goto L_801CECC4; case 0x801CECD4u: goto L_801CECD4; case 0x801CECECu: goto L_801CECEC; case 0x801CED10u: goto L_801CED10; case 0x801CED20u: goto L_801CED20; case 0x801CED58u: goto L_801CED58; default: break; } dispatch(c,c->ctr); return; } // 801CEBE8
L_801CEBEC:;
  c->r[3]=0u+0x803D0000u; // 801CEBEC
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEBF0
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEBF4
  cmpu(c,0,c->r[0],0x00000001u); // 801CEBF8
  if (crb(c,0)) { goto L_801CED84; } // 801CEBFC
  c->r[4]=0u+0x80330000u; // 801CEC00
  c->r[5]=R8(c->r[31]+0x00000068u); // 801CEC04
  c->r[6]=c->r[30]|c->r[30]; // 801CEC08
  c->r[3]=0u+0x00090000u; // 801CEC0C
  c->r[4]=c->r[4]+0x0000618Cu; // 801CEC10
  c->lr=0x801CEC18u; f_801ACB50(c); // 801CEC14
  goto L_801CED84; // 801CEC18
L_801CEC1C:;
  c->r[4]=0u+0x00000003u; // 801CEC1C
  c->lr=0x801CEC24u; f_801D1548(c); // 801CEC20
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CEC24
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CEC28
  c->lr=0x801CEC30u; f_801CFDF4(c); // 801CEC2C
  c->r[3]=0u+0x00000000u; // 801CEC30
  c->r[0]=0u+0x00000005u; // 801CEC34
  W8(c->r[31]+0x00000069u,c->r[3]); // 801CEC38
  W8(c->r[31]+0x00000068u,c->r[0]); // 801CEC3C
  goto L_801CED84; // 801CEC40
L_801CEC44:;
  c->lr=0x801CEC48u; f_801D1774(c); // 801CEC44
  goto L_801CED84; // 801CEC48
L_801CEC4C:;
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801CEC4C
  c->r[0]=R8(c->r[4]+0x00000072u); // 801CEC50
  cmpu(c,0,c->r[0],0x00000002u); // 801CEC54
  if (!crb(c,2)) { goto L_801CECA0; } // 801CEC58
  c->r[4]=R16(c->r[5]+0x00000002u); // 801CEC5C
  c->r[0]=R16(c->r[3]+0x00000014u); // 801CEC60
  cmpu(c,0,c->r[4],c->r[0]); // 801CEC64
  if (!crb(c,0)) { goto L_801CECA0; } // 801CEC68
  c->r[0]=R8(c->r[3]+0x0000003Du); // 801CEC6C
  cmps(c,0,(int32_t)c->r[0],0); // 801CEC70
  if (!crb(c,2)) { goto L_801CECA0; } // 801CEC74
  c->r[0]=R16(c->r[3]+0x0000009Au); // 801CEC78
  c->r[4]=R16(c->r[3]+0x0000009Cu); // 801CEC7C
  cmpu(c,0,c->r[4],c->r[0]); // 801CEC80
  if (!crb(c,1)) { goto L_801CECA0; } // 801CEC84
  c->r[0]=c->r[4]-c->r[0]; // 801CEC88
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801CEC8C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801CEC90
  c->r[0]=R16(c->r[3]+0x0000009Cu); // 801CEC94
  W16(c->r[3]+0x0000009Au,c->r[0]); // 801CEC98
  goto L_801CECA8; // 801CEC9C
L_801CECA0:;
  c->r[0]=0u+0x00000000u; // 801CECA0
  W16(c->r[5]+0x00000006u,c->r[0]); // 801CECA4
L_801CECA8:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CECA8
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CECAC
  c->lr=0x801CECB4u; f_801CFEA4(c); // 801CECB0
  c->r[3]=c->r[31]|c->r[31]; // 801CECB4
  c->lr=0x801CECBCu; f_801D1958(c); // 801CECB8
  goto L_801CED84; // 801CECBC
L_801CECC0:;
  goto L_801CED84; // 801CECC0
L_801CECC4:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CECC4
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CECC8
  c->lr=0x801CECD0u; f_801CFC80(c); // 801CECCC
  goto L_801CED84; // 801CECD0
L_801CECD4:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CECD4
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CECD8
  c->lr=0x801CECE0u; f_801CC258(c); // 801CECDC
  c->r[3]=c->r[31]|c->r[31]; // 801CECE0
  c->lr=0x801CECE8u; f_801D1774(c); // 801CECE4
  goto L_801CED84; // 801CECE8
L_801CECEC:;
  c->r[0]=0u+0x00000000u; // 801CECEC
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CECF0
  W8(c->r[3]+0x00000068u,c->r[0]); // 801CECF4
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CECF8
  c->lr=0x801CED00u; f_801CFC80(c); // 801CECFC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CED00
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CED04
  c->lr=0x801CED0Cu; f_801CC258(c); // 801CED08
  goto L_801CED84; // 801CED0C
L_801CED10:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CED10
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CED14
  c->lr=0x801CED1Cu; f_801CC3F8(c); // 801CED18
  goto L_801CED84; // 801CED1C
L_801CED20:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CED20
  c->lr=0x801CED28u; f_801CC360(c); // 801CED24
  c->r[3]=0u+0x803D0000u; // 801CED28
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CED2C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CED30
  cmpu(c,0,c->r[0],0x00000001u); // 801CED34
  if (crb(c,0)) { goto L_801CED84; } // 801CED38
  c->r[4]=0u+0x80330000u; // 801CED3C
  c->r[5]=R8(c->r[31]+0x00000068u); // 801CED40
  c->r[6]=c->r[30]|c->r[30]; // 801CED44
  c->r[3]=0u+0x00090000u; // 801CED48
  c->r[4]=c->r[4]+0x0000618Cu; // 801CED4C
  c->lr=0x801CED54u; f_801ACB50(c); // 801CED50
  goto L_801CED84; // 801CED54
L_801CED58:;
  c->r[3]=0u+0x803D0000u; // 801CED58
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CED5C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CED60
  cmpu(c,0,c->r[0],0x00000002u); // 801CED64
  if (crb(c,0)) { goto L_801CED84; } // 801CED68
  c->r[3]=0u+0x00090000u; // 801CED6C
  c->r[4]=0u+0x80330000u; // 801CED70
  c->r[5]=c->r[30]|c->r[30]; // 801CED74
  c->r[3]=c->r[3]+0x00000001u; // 801CED78
  c->r[4]=c->r[4]+0x000063B0u; // 801CED7C
  c->lr=0x801CED84u; f_801ACB38(c); // 801CED80
L_801CED84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CED84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CED88
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CED8C
  c->lr=c->r[0]; // 801CED90
  c->r[1]=c->r[1]+0x00000010u; // 801CED94
  return; // 801CED98
}

// rfc_port_sm_disc_wait_ua
void f_801CED9C(Ctx* __restrict c) {
  trace_call(0x801CED9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CED9C
  c->r[0]=c->lr; // 801CEDA0
  cmpu(c,0,c->r[4],0x0000000Eu); // 801CEDA4
  c->r[6]=c->r[4]|c->r[4]; // 801CEDA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEDAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEDB0
  c->r[31]=c->r[3]|c->r[3]; // 801CEDB4
  if (crb(c,1)) { goto L_801CEE78; } // 801CEDB8
  c->r[7]=0u+0x80330000u; // 801CEDBC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CEDC0
  c->r[7]=c->r[7]+0x0000643Cu; // 801CEDC4
  c->r[7]=R32(c->r[7]+c->r[0]); // 801CEDC8
  c->ctr=c->r[7]; // 801CEDCC
  if (true) { switch (c->ctr) { case 0x801CEDD4u: goto L_801CEDD4; case 0x801CEE00u: goto L_801CEE00; case 0x801CEE08u: goto L_801CEE08; case 0x801CEE14u: goto L_801CEE14; case 0x801CEE20u: goto L_801CEE20; case 0x801CEE2Cu: goto L_801CEE2C; case 0x801CEE40u: goto L_801CEE40; case 0x801CEE54u: goto L_801CEE54; case 0x801CEE70u: goto L_801CEE70; case 0x801CEE78u: goto L_801CEE78; default: break; } dispatch(c,c->ctr); return; } // 801CEDD0
L_801CEDD4:;
  c->r[3]=0u+0x803D0000u; // 801CEDD4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEDD8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEDDC
  cmpu(c,0,c->r[0],0x00000001u); // 801CEDE0
  if (crb(c,0)) { goto L_801CEEA4; } // 801CEDE4
  c->r[4]=0u+0x80330000u; // 801CEDE8
  c->r[5]=R8(c->r[31]+0x00000068u); // 801CEDEC
  c->r[3]=0u+0x00090000u; // 801CEDF0
  c->r[4]=c->r[4]+0x0000618Cu; // 801CEDF4
  c->lr=0x801CEDFCu; f_801ACB50(c); // 801CEDF8
  goto L_801CEEA4; // 801CEDFC
L_801CEE00:;
  c->lr=0x801CEE04u; f_801D1774(c); // 801CEE00
  goto L_801CEEA4; // 801CEE04
L_801CEE08:;
  c->r[3]=c->r[5]|c->r[5]; // 801CEE08
  c->lr=0x801CEE10u; f_801AA228(c); // 801CEE0C
  goto L_801CEEA4; // 801CEE10
L_801CEE14:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CEE14
  c->r[0]=0u+0x00000001u; // 801CEE18
  W8(c->r[3]+0x00000074u,c->r[0]); // 801CEE1C
L_801CEE20:;
  c->r[3]=c->r[31]|c->r[31]; // 801CEE20
  c->lr=0x801CEE28u; f_801D1774(c); // 801CEE24
  goto L_801CEEA4; // 801CEE28
L_801CEE2C:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CEE2C
  c->r[5]=0u+0x00000001u; // 801CEE30
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CEE34
  c->lr=0x801CEE3Cu; f_801CFD30(c); // 801CEE38
  goto L_801CEEA4; // 801CEE3C
L_801CEE40:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 801CEE40
  c->r[5]=0u+0x00000001u; // 801CEE44
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CEE48
  c->lr=0x801CEE50u; f_801CFD30(c); // 801CEE4C
  goto L_801CEEA4; // 801CEE50
L_801CEE54:;
  c->r[3]=c->r[5]|c->r[5]; // 801CEE54
  c->lr=0x801CEE5Cu; f_801AA228(c); // 801CEE58
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CEE5C
  c->r[5]=0u+0x00000000u; // 801CEE60
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CEE64
  c->lr=0x801CEE6Cu; f_801CFD30(c); // 801CEE68
  goto L_801CEEA4; // 801CEE6C
L_801CEE70:;
  c->lr=0x801CEE74u; f_801D1774(c); // 801CEE70
  goto L_801CEEA4; // 801CEE74
L_801CEE78:;
  c->r[3]=0u+0x803D0000u; // 801CEE78
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEE7C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEE80
  cmpu(c,0,c->r[0],0x00000002u); // 801CEE84
  if (crb(c,0)) { goto L_801CEEA4; } // 801CEE88
  c->r[3]=0u+0x00090000u; // 801CEE8C
  c->r[4]=0u+0x80330000u; // 801CEE90
  c->r[5]=c->r[6]|c->r[6]; // 801CEE94
  c->r[3]=c->r[3]+0x00000001u; // 801CEE98
  c->r[4]=c->r[4]+0x00006410u; // 801CEE9C
  c->lr=0x801CEEA4u; f_801ACB38(c); // 801CEEA0
L_801CEEA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEEA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEEA8
  c->lr=c->r[0]; // 801CEEAC
  c->r[1]=c->r[1]+0x00000010u; // 801CEEB0
  return; // 801CEEB4
}

// rfc_process_pn
void f_801CEEB8(Ctx* __restrict c) {
  trace_call(0x801CEEB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEEB8
  c->r[0]=c->lr; // 801CEEBC
  cmps(c,0,(int32_t)c->r[4],0); // 801CEEC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CEEC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CEEC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CEECC
  c->r[30]=c->r[5]|c->r[5]; // 801CEED0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CEED4
  c->r[29]=c->r[3]|c->r[3]; // 801CEED8
  c->r[31]=R8(c->r[5]+0x00000000u); // 801CEEDC
  if (crb(c,2)) { goto L_801CEF40; } // 801CEEE0
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801CEEE4
  cmpu(c,0,c->r[0],0x00000006u); // 801CEEE8
  if (crb(c,2)) { goto L_801CEF08; } // 801CEEEC
  c->r[5]=R16(c->r[5]+0x0000000Eu); // 801CEEF0
  c->r[4]=c->r[31]|c->r[31]; // 801CEEF4
  c->r[6]=R8(c->r[30]+0x0000000Au); // 801CEEF8
  c->r[7]=R8(c->r[30]+0x00000011u); // 801CEEFC
  c->lr=0x801CEF04u; f_801CB7B4(c); // 801CEF00
  goto L_801CEF84; // 801CEF04
L_801CEF08:;
  c->r[4]=c->r[31]|c->r[31]; // 801CEF08
  c->r[5]=0u+0x00000000u; // 801CEF0C
  c->lr=0x801CEF14u; f_801CFD30(c); // 801CEF10
  c->r[3]=0u+0x803D0000u; // 801CEF14
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CEF18
  c->r[0]=R8(c->r[3]+0x00000414u); // 801CEF1C
  cmpu(c,0,c->r[0],0x00000002u); // 801CEF20
  if (crb(c,0)) { goto L_801CEF84; } // 801CEF24
  c->r[3]=0u+0x00090000u; // 801CEF28
  c->r[4]=0u+0x80330000u; // 801CEF2C
  c->r[3]=c->r[3]+0x00000001u; // 801CEF30
  c->r[4]=c->r[4]+0x00006478u; // 801CEF34
  c->lr=0x801CEF3Cu; f_801ACB20(c); // 801CEF38
  goto L_801CEF84; // 801CEF3C
L_801CEF40:;
  c->r[4]=c->r[31]|c->r[31]; // 801CEF40
  c->lr=0x801CEF48u; f_801CCC0C(c); // 801CEF44
  cmps(c,0,(int32_t)c->r[3],0); // 801CEF48
  if (crb(c,2)) { goto L_801CEF84; } // 801CEF4C
  c->r[4]=R8(c->r[3]+0x00000069u); // 801CEF50
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CEF54
  if (!crb(c,2)) { goto L_801CEF60; } // 801CEF58
  goto L_801CEF84; // 801CEF5C
L_801CEF60:;
  c->r[0]=rotl(c->r[4],0)&0x000000FEu; // 801CEF60
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CEF64
  c->lr=0x801CEF6Cu; f_801D15C8(c); // 801CEF68
  c->r[5]=R16(c->r[30]+0x0000000Eu); // 801CEF6C
  c->r[3]=c->r[29]|c->r[29]; // 801CEF70
  c->r[6]=R8(c->r[30]+0x0000000Au); // 801CEF74
  c->r[4]=c->r[31]|c->r[31]; // 801CEF78
  c->r[7]=R8(c->r[30]+0x00000011u); // 801CEF7C
  c->lr=0x801CEF84u; f_801CB964(c); // 801CEF80
L_801CEF84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEF84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEF88
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CEF8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CEF90
  c->lr=c->r[0]; // 801CEF94
  c->r[1]=c->r[1]+0x00000020u; // 801CEF98
  return; // 801CEF9C
}

// rfc_process_rpn
void f_801CEFA0(Ctx* __restrict c) {
  trace_call(0x801CEFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEFA0
  c->r[0]=c->lr; // 801CEFA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CEFA8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CEFAC
  c->r[31]=c->r[5]|c->r[5]; // 801CEFB0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CEFB4
  c->r[30]=c->r[6]|c->r[6]; // 801CEFB8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CEFBC
  c->r[29]=c->r[3]|c->r[3]; // 801CEFC0
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CEFC4
  c->r[28]=c->r[4]|c->r[4]; // 801CEFC8
  c->r[4]=R8(c->r[6]+0x00000000u); // 801CEFCC
  c->lr=0x801CEFD4u; f_801CCC0C(c); // 801CEFD0
  cmps(c,0,(int32_t)c->r[3],0); // 801CEFD4
  if (!crb(c,2)) { goto L_801CF018; } // 801CEFD8
  cmps(c,0,(int32_t)c->r[28],0); // 801CEFDC
  if (crb(c,2)) { goto L_801CF28C; } // 801CEFE0
  c->r[3]=c->r[1]+0x00000008u; // 801CEFE4
  c->r[4]=0u+0x00000000u; // 801CEFE8
  c->r[5]=0u+0x00000009u; // 801CEFEC
  c->lr=0x801CEFF4u; f_80004688(c); // 801CEFF0
  c->r[4]=c->r[30]|c->r[30]; // 801CEFF4
  c->r[3]=c->r[1]+0x00000008u; // 801CEFF8
  c->lr=0x801CF000u; f_801CF600(c); // 801CEFFC
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF000
  c->r[3]=c->r[29]|c->r[29]; // 801CF004
  c->r[6]=R16(c->r[30]+0x00000012u); // 801CF008
  c->r[5]=c->r[1]+0x00000008u; // 801CF00C
  c->lr=0x801CF014u; f_801CBCEC(c); // 801CF010
  goto L_801CF28C; // 801CF014
L_801CF018:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CF018
  if (crb(c,2)) { goto L_801CF08C; } // 801CF01C
  cmps(c,0,(int32_t)c->r[31],0); // 801CF020
  if (crb(c,2)) { goto L_801CF08C; } // 801CF024
  c->r[4]=R8(c->r[3]+0x00000051u); // 801CF028
  c->r[6]=c->r[3]+0x00000051u; // 801CF02C
  c->r[0]=R8(c->r[3]+0x00000052u); // 801CF030
  c->r[5]=0u+0x00000000u; // 801CF034
  c->r[7]=0u+0x00000000u; // 801CF038
  W8(c->r[1]+0x00000008u,c->r[4]); // 801CF03C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801CF040
  c->r[4]=R8(c->r[3]+0x00000053u); // 801CF044
  c->r[0]=R8(c->r[3]+0x00000054u); // 801CF048
  W8(c->r[1]+0x0000000Au,c->r[4]); // 801CF04C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801CF050
  c->r[4]=R8(c->r[3]+0x00000055u); // 801CF054
  c->r[0]=R8(c->r[3]+0x00000056u); // 801CF058
  W8(c->r[1]+0x0000000Cu,c->r[4]); // 801CF05C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801CF060
  c->r[4]=R8(c->r[3]+0x00000057u); // 801CF064
  c->r[0]=R8(c->r[3]+0x00000058u); // 801CF068
  W8(c->r[1]+0x0000000Eu,c->r[4]); // 801CF06C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801CF070
  c->r[0]=R8(c->r[3]+0x00000059u); // 801CF074
  c->r[3]=c->r[29]|c->r[29]; // 801CF078
  W8(c->r[1]+0x00000010u,c->r[0]); // 801CF07C
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF080
  c->lr=0x801CF088u; f_801D03FC(c); // 801CF084
  goto L_801CF28C; // 801CF088
L_801CF08C:;
  c->r[5]=R8(c->r[3]+0x00000051u); // 801CF08C
  c->r[4]=c->r[30]|c->r[30]; // 801CF090
  c->r[0]=R8(c->r[3]+0x00000052u); // 801CF094
  W8(c->r[1]+0x00000008u,c->r[5]); // 801CF098
  W8(c->r[1]+0x00000009u,c->r[0]); // 801CF09C
  c->r[5]=R8(c->r[3]+0x00000053u); // 801CF0A0
  c->r[0]=R8(c->r[3]+0x00000054u); // 801CF0A4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801CF0A8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801CF0AC
  c->r[5]=R8(c->r[3]+0x00000055u); // 801CF0B0
  c->r[0]=R8(c->r[3]+0x00000056u); // 801CF0B4
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 801CF0B8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801CF0BC
  c->r[5]=R8(c->r[3]+0x00000057u); // 801CF0C0
  c->r[0]=R8(c->r[3]+0x00000058u); // 801CF0C4
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 801CF0C8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801CF0CC
  c->r[0]=R8(c->r[3]+0x00000059u); // 801CF0D0
  c->r[3]=c->r[1]+0x00000008u; // 801CF0D4
  W8(c->r[1]+0x00000010u,c->r[0]); // 801CF0D8
  c->lr=0x801CF0E0u; f_801CF600(c); // 801CF0DC
  cmps(c,0,(int32_t)c->r[28],0); // 801CF0E0
  if (crb(c,2)) { goto L_801CF100; } // 801CF0E4
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF0E8
  c->r[3]=c->r[29]|c->r[29]; // 801CF0EC
  c->r[6]=R16(c->r[30]+0x00000012u); // 801CF0F0
  c->r[5]=c->r[1]+0x00000008u; // 801CF0F4
  c->lr=0x801CF0FCu; f_801CBCEC(c); // 801CF0F8
  goto L_801CF28C; // 801CF0FC
L_801CF100:;
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF100
  c->r[3]=c->r[29]|c->r[29]; // 801CF104
  c->lr=0x801CF10Cu; f_801CCC0C(c); // 801CF108
  cmps(c,0,(int32_t)c->r[3],0); // 801CF10C
  c->r[31]=c->r[3]|c->r[3]; // 801CF110
  if (crb(c,2)) { goto L_801CF28C; } // 801CF114
  c->r[0]=R8(c->r[3]+0x00000069u); // 801CF118
  c->r[0]=rotl(c->r[0],0)&0x00000006u; cr0(c,c->r[0]); // 801CF11C
  if (!crb(c,2)) { goto L_801CF128; } // 801CF120
  goto L_801CF28C; // 801CF124
L_801CF128:;
  c->lr=0x801CF12Cu; f_801D15C8(c); // 801CF128
  c->r[3]=R8(c->r[31]+0x00000069u); // 801CF12C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801CF130
  if (crb(c,2)) { goto L_801CF1E4; } // 801CF134
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801CF138
  W8(c->r[31]+0x00000069u,c->r[0]); // 801CF13C
  c->r[3]=R8(c->r[1]+0x00000008u); // 801CF140
  c->r[0]=R8(c->r[1]+0x00000009u); // 801CF144
  W8(c->r[31]+0x00000051u,c->r[3]); // 801CF148
  W8(c->r[31]+0x00000052u,c->r[0]); // 801CF14C
  c->r[3]=R8(c->r[1]+0x0000000Au); // 801CF150
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801CF154
  W8(c->r[31]+0x00000053u,c->r[3]); // 801CF158
  W8(c->r[31]+0x00000054u,c->r[0]); // 801CF15C
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801CF160
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801CF164
  W8(c->r[31]+0x00000055u,c->r[3]); // 801CF168
  W8(c->r[31]+0x00000056u,c->r[0]); // 801CF16C
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 801CF170
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801CF174
  W8(c->r[31]+0x00000057u,c->r[3]); // 801CF178
  W8(c->r[31]+0x00000058u,c->r[0]); // 801CF17C
  c->r[0]=R8(c->r[1]+0x00000010u); // 801CF180
  W8(c->r[31]+0x00000059u,c->r[0]); // 801CF184
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801CF188
  cmpu(c,0,c->r[0],0x0000000Cu); // 801CF18C
  if (crb(c,2)) { goto L_801CF19C; } // 801CF190
  cmpu(c,0,c->r[0],0x00000030u); // 801CF194
  if (!crb(c,2)) { goto L_801CF1A8; } // 801CF198
L_801CF19C:;
  c->r[0]=0u+0x00003F7Fu; // 801CF19C
  W16(c->r[30]+0x00000012u,c->r[0]); // 801CF1A0
  goto L_801CF1EC; // 801CF1A4
L_801CF1A8:;
  c->r[0]=0u+0x0000000Cu; // 801CF1A8
  c->r[3]=c->r[29]|c->r[29]; // 801CF1AC
  W8(c->r[31]+0x00000056u,c->r[0]); // 801CF1B0
  c->r[6]=c->r[31]+0x00000051u; // 801CF1B4
  c->r[5]=0u+0x00000001u; // 801CF1B8
  c->r[7]=0u+0x00000C00u; // 801CF1BC
  c->r[0]=R8(c->r[31]+0x00000069u); // 801CF1C0
  c->r[0]=c->r[0]|0x00000004u; // 801CF1C4
  W8(c->r[31]+0x00000069u,c->r[0]); // 801CF1C8
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF1CC
  c->lr=0x801CF1D4u; f_801D03FC(c); // 801CF1D0
  c->r[3]=c->r[31]|c->r[31]; // 801CF1D4
  c->r[4]=0u+0x0000003Cu; // 801CF1D8
  c->lr=0x801CF1E0u; f_801D1548(c); // 801CF1DC
  goto L_801CF28C; // 801CF1E0
L_801CF1E4:;
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFBu; // 801CF1E4
  W8(c->r[31]+0x00000069u,c->r[0]); // 801CF1E8
L_801CF1EC:;
  c->r[3]=R16(c->r[30]+0x00000012u); // 801CF1EC
  c->r[0]=rotl(c->r[3],0)&0x00000C00u; // 801CF1F0
  cmps(c,0,(int32_t)c->r[0],3072); // 801CF1F4
  if (crb(c,2)) { goto L_801CF208; } // 801CF1F8
  c->r[0]=rotl(c->r[3],0)&0x00003000u; // 801CF1FC
  cmps(c,0,(int32_t)c->r[0],12288); // 801CF200
  if (!crb(c,2)) { goto L_801CF220; } // 801CF204
L_801CF208:;
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CF208
  c->r[3]=c->r[29]|c->r[29]; // 801CF20C
  c->r[5]=c->r[1]+0x00000008u; // 801CF210
  c->r[6]=0u+0x00000000u; // 801CF214
  c->lr=0x801CF21Cu; f_801CBE3C(c); // 801CF218
  goto L_801CF28C; // 801CF21C
L_801CF220:;
  c->r[0]=R8(c->r[31]+0x00000056u); // 801CF220
  cmpu(c,0,c->r[0],0x0000000Cu); // 801CF224
  if (!crb(c,2)) { goto L_801CF268; } // 801CF228
  c->r[0]=0u+0x00000030u; // 801CF22C
  c->r[3]=c->r[29]|c->r[29]; // 801CF230
  W8(c->r[31]+0x00000056u,c->r[0]); // 801CF234
  c->r[6]=c->r[31]+0x00000051u; // 801CF238
  c->r[5]=0u+0x00000001u; // 801CF23C
  c->r[7]=0u+0x00003000u; // 801CF240
  c->r[0]=R8(c->r[31]+0x00000069u); // 801CF244
  c->r[0]=c->r[0]|0x00000004u; // 801CF248
  W8(c->r[31]+0x00000069u,c->r[0]); // 801CF24C
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF250
  c->lr=0x801CF258u; f_801D03FC(c); // 801CF254
  c->r[3]=c->r[31]|c->r[31]; // 801CF258
  c->r[4]=0u+0x0000003Cu; // 801CF25C
  c->lr=0x801CF264u; f_801D1548(c); // 801CF260
  goto L_801CF28C; // 801CF264
L_801CF268:;
  cmpu(c,0,c->r[0],0x00000030u); // 801CF268
  if (!crb(c,2)) { goto L_801CF28C; } // 801CF26C
  c->r[0]=0u+0x00000000u; // 801CF270
  c->r[3]=c->r[29]|c->r[29]; // 801CF274
  W8(c->r[31]+0x00000056u,c->r[0]); // 801CF278
  c->r[5]=c->r[1]+0x00000008u; // 801CF27C
  c->r[6]=0u+0x00000000u; // 801CF280
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CF284
  c->lr=0x801CF28Cu; f_801CBE3C(c); // 801CF288
L_801CF28C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF28C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CF290
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CF294
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CF298
  c->r[28]=R32(c->r[1]+0x00000020u); // 801CF29C
  c->lr=c->r[0]; // 801CF2A0
  c->r[1]=c->r[1]+0x00000030u; // 801CF2A4
  return; // 801CF2A8
}

// rfc_process_msc
void f_801CF2AC(Ctx* __restrict c) {
  trace_call(0x801CF2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF2AC
  c->r[0]=c->lr; // 801CF2B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CF2B4
  c->r[11]=c->r[1]+0x00000030u; // 801CF2B8
  c->lr=0x801CF2C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF2BC
  c->r[29]=c->r[4]|c->r[4]; // 801CF2C0
  c->r[27]=R8(c->r[5]+0x00000009u); // 801CF2C4
  c->r[4]=R8(c->r[5]+0x00000000u); // 801CF2C8
  c->r[28]=c->r[3]|c->r[3]; // 801CF2CC
  c->r[30]=c->r[5]|c->r[5]; // 801CF2D0
  c->lr=0x801CF2D8u; f_801CCC0C(c); // 801CF2D4
  cmps(c,0,(int32_t)c->r[3],0); // 801CF2D8
  c->r[31]=c->r[3]|c->r[3]; // 801CF2DC
  if (crb(c,2)) { goto L_801CF400; } // 801CF2E0
  c->r[0]=rotl(c->r[27],0)&0x00000004u; cr0(c,c->r[0]); // 801CF2E4
  c->r[0]=0u+0x00000000u; // 801CF2E8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801CF2EC
  if (crb(c,2)) { goto L_801CF2FC; } // 801CF2F0
  c->r[0]=c->r[0]|0x00000001u; // 801CF2F4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801CF2F8
L_801CF2FC:;
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 801CF2FC
  if (crb(c,2)) { goto L_801CF310; } // 801CF300
  c->r[0]=R8(c->r[1]+0x00000008u); // 801CF304
  c->r[0]=c->r[0]|0x00000002u; // 801CF308
  W8(c->r[1]+0x00000008u,c->r[0]); // 801CF30C
L_801CF310:;
  c->r[0]=rotl(c->r[27],0)&0x00000040u; cr0(c,c->r[0]); // 801CF310
  if (crb(c,2)) { goto L_801CF324; } // 801CF314
  c->r[0]=R8(c->r[1]+0x00000008u); // 801CF318
  c->r[0]=c->r[0]|0x00000004u; // 801CF31C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801CF320
L_801CF324:;
  c->r[0]=rotl(c->r[27],0)&0x00000080u; cr0(c,c->r[0]); // 801CF324
  if (crb(c,2)) { goto L_801CF338; } // 801CF328
  c->r[0]=R8(c->r[1]+0x00000008u); // 801CF32C
  c->r[0]=c->r[0]|0x00000008u; // 801CF330
  W8(c->r[1]+0x00000008u,c->r[0]); // 801CF334
L_801CF338:;
  c->r[0]=rotl(c->r[27],31)&0x00000001u; // 801CF338
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801CF33C
  c->r[0]=R8(c->r[30]+0x0000000Au); // 801CF340
  cmps(c,0,(int32_t)c->r[0],0); // 801CF344
  if (crb(c,2)) { goto L_801CF354; } // 801CF348
  c->r[5]=R8(c->r[30]+0x0000000Bu); // 801CF34C
  goto L_801CF358; // 801CF350
L_801CF354:;
  c->r[5]=0u+0x00000000u; // 801CF354
L_801CF358:;
  c->r[4]=0u+0x00000000u; // 801CF358
  c->r[0]=0u+0x00000001u; // 801CF35C
  cmps(c,0,(int32_t)c->r[29],0); // 801CF360
  W8(c->r[1]+0x00000009u,c->r[5]); // 801CF364
  W8(c->r[1]+0x0000000Au,c->r[4]); // 801CF368
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801CF36C
  if (crb(c,2)) { goto L_801CF3D4; } // 801CF370
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF374
  c->r[3]=c->r[28]|c->r[28]; // 801CF378
  c->r[6]=c->r[1]+0x00000008u; // 801CF37C
  c->r[5]=0u+0x00000000u; // 801CF380
  c->lr=0x801CF388u; f_801D022C(c); // 801CF384
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CF388
  c->r[0]=R8(c->r[3]+0x00000072u); // 801CF38C
  cmpu(c,0,c->r[0],0x00000002u); // 801CF390
  if (crb(c,2)) { goto L_801CF3C0; } // 801CF394
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801CF398
  W8(c->r[31]+0x00000063u,c->r[3]); // 801CF39C
  c->r[0]=R8(c->r[31]+0x00000024u); // 801CF3A0
  cmpu(c,0,c->r[3],c->r[0]); // 801CF3A4
  if (crb(c,2)) { goto L_801CF3C0; } // 801CF3A8
  c->r[0]=cntlz(c->r[3]); // 801CF3AC
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF3B0
  c->r[3]=c->r[28]|c->r[28]; // 801CF3B4
  c->r[5]=rotl(c->r[0],27)&0x000000FFu; // 801CF3B8
  c->lr=0x801CF3C0u; f_801CC5F8(c); // 801CF3BC
L_801CF3C0:;
  c->r[4]=R8(c->r[30]+0x00000000u); // 801CF3C0
  c->r[3]=c->r[28]|c->r[28]; // 801CF3C4
  c->r[5]=c->r[1]+0x00000008u; // 801CF3C8
  c->lr=0x801CF3D0u; f_801CBF54(c); // 801CF3CC
  goto L_801CF400; // 801CF3D0
L_801CF3D4:;
  c->r[4]=R8(c->r[3]+0x00000069u); // 801CF3D4
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801CF3D8
  if (crb(c,2)) { goto L_801CF400; } // 801CF3DC
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFF7u; // 801CF3E0
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CF3E4
  c->r[3]=c->r[31]|c->r[31]; // 801CF3E8
  c->lr=0x801CF3F0u; f_801D15C8(c); // 801CF3EC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801CF3F0
  c->r[5]=c->r[1]+0x00000008u; // 801CF3F4
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801CF3F8
  c->lr=0x801CF400u; f_801CC0CC(c); // 801CF3FC
L_801CF400:;
  c->r[11]=c->r[1]+0x00000030u; // 801CF400
  c->lr=0x801CF408u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF404
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF408
  c->lr=c->r[0]; // 801CF40C
  c->r[1]=c->r[1]+0x00000030u; // 801CF410
  return; // 801CF414
}

// rfc_process_rls
void f_801CF418(Ctx* __restrict c) {
  trace_call(0x801CF418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF418
  c->r[0]=c->lr; // 801CF41C
  cmps(c,0,(int32_t)c->r[4],0); // 801CF420
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF428
  c->r[31]=c->r[5]|c->r[5]; // 801CF42C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF430
  c->r[30]=c->r[3]|c->r[3]; // 801CF434
  if (crb(c,2)) { goto L_801CF460; } // 801CF438
  c->r[4]=R8(c->r[5]+0x00000000u); // 801CF43C
  c->r[5]=R8(c->r[5]+0x00000009u); // 801CF440
  c->lr=0x801CF448u; f_801CC190(c); // 801CF444
  c->r[4]=R8(c->r[31]+0x00000000u); // 801CF448
  c->r[3]=c->r[30]|c->r[30]; // 801CF44C
  c->r[6]=R8(c->r[31]+0x00000009u); // 801CF450
  c->r[5]=0u+0x00000000u; // 801CF454
  c->lr=0x801CF45Cu; f_801D034C(c); // 801CF458
  goto L_801CF48C; // 801CF45C
L_801CF460:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801CF460
  c->lr=0x801CF468u; f_801CCC0C(c); // 801CF464
  cmps(c,0,(int32_t)c->r[3],0); // 801CF468
  if (crb(c,2)) { goto L_801CF48C; } // 801CF46C
  c->r[4]=R8(c->r[3]+0x00000069u); // 801CF470
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801CF474
  if (!crb(c,2)) { goto L_801CF480; } // 801CF478
  goto L_801CF48C; // 801CF47C
L_801CF480:;
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFEFu; // 801CF480
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CF484
  c->lr=0x801CF48Cu; f_801D15C8(c); // 801CF488
L_801CF48C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF48C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF490
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF494
  c->lr=c->r[0]; // 801CF498
  c->r[1]=c->r[1]+0x00000010u; // 801CF49C
  return; // 801CF4A0
}

// fn_801CF4A4
void f_801CF4A4(Ctx* __restrict c) {
  return; // 801CF4A4
}

// rfc_process_test_rsp
void f_801CF4A8(Ctx* __restrict c) {
  trace_call(0x801CF4A8u);
  c->r[3]=c->r[4]|c->r[4]; // 801CF4A8
  f_801AA228(c); return; // 801CF4AC
}

// rfc_process_fcon
void f_801CF4B0(Ctx* __restrict c) {
  trace_call(0x801CF4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF4B0
  c->r[0]=c->lr; // 801CF4B4
  cmps(c,0,(int32_t)c->r[4],0); // 801CF4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF4BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF4C0
  c->r[31]=c->r[3]|c->r[3]; // 801CF4C4
  if (crb(c,2)) { goto L_801CF500; } // 801CF4C8
  c->r[5]=0u+0x803D0000u; // 801CF4CC
  c->r[0]=0u+0x00000000u; // 801CF4D0
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801CF4D4
  c->r[4]=0u+0x00000000u; // 801CF4D8
  W8(c->r[5]+0x00000064u,c->r[0]); // 801CF4DC
  c->lr=0x801CF4E4u; f_801D0124(c); // 801CF4E0
  c->r[0]=R8(c->r[31]+0x00000073u); // 801CF4E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CF4E8
  if (!crb(c,2)) { goto L_801CF500; } // 801CF4EC
  c->r[3]=c->r[31]|c->r[31]; // 801CF4F0
  c->r[4]=0u+0x00000000u; // 801CF4F4
  c->r[5]=0u+0x00000001u; // 801CF4F8
  c->lr=0x801CF500u; f_801CC5F8(c); // 801CF4FC
L_801CF500:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF504
  c->lr=c->r[0]; // 801CF508
  c->r[1]=c->r[1]+0x00000010u; // 801CF50C
  return; // 801CF510
}

// rfc_process_fcoff
void f_801CF514(Ctx* __restrict c) {
  trace_call(0x801CF514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF514
  c->r[0]=c->lr; // 801CF518
  cmps(c,0,(int32_t)c->r[4],0); // 801CF51C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF520
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF524
  c->r[31]=c->r[3]|c->r[3]; // 801CF528
  if (crb(c,2)) { goto L_801CF564; } // 801CF52C
  c->r[4]=0u+0x803D0000u; // 801CF530
  c->r[0]=0u+0x00000001u; // 801CF534
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801CF538
  W8(c->r[4]+0x00000064u,c->r[0]); // 801CF53C
  c->r[0]=R8(c->r[3]+0x00000073u); // 801CF540
  cmps(c,0,(int32_t)c->r[0],0); // 801CF544
  if (!crb(c,2)) { goto L_801CF558; } // 801CF548
  c->r[4]=0u+0x00000000u; // 801CF54C
  c->r[5]=0u+0x00000000u; // 801CF550
  c->lr=0x801CF558u; f_801CC5F8(c); // 801CF554
L_801CF558:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF558
  c->r[4]=0u+0x00000000u; // 801CF55C
  c->lr=0x801CF564u; f_801D01A8(c); // 801CF560
L_801CF564:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF568
  c->lr=c->r[0]; // 801CF56C
  c->r[1]=c->r[1]+0x00000010u; // 801CF570
  return; // 801CF574
}

// rfc_process_l2cap_congestion
void f_801CF578(Ctx* __restrict c) {
  trace_call(0x801CF578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF578
  c->r[0]=c->lr; // 801CF57C
  cmps(c,0,(int32_t)c->r[4],0); // 801CF580
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF584
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF588
  c->r[31]=c->r[4]|c->r[4]; // 801CF58C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF590
  c->r[30]=c->r[3]|c->r[3]; // 801CF594
  W8(c->r[3]+0x00000073u,c->r[4]); // 801CF598
  if (!crb(c,2)) { goto L_801CF5A8; } // 801CF59C
  c->r[4]=0u+0x00000000u; // 801CF5A0
  c->lr=0x801CF5A8u; f_801D1994(c); // 801CF5A4
L_801CF5A8:;
  c->r[3]=0u+0x803D0000u; // 801CF5A8
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801CF5AC
  c->r[0]=R8(c->r[3]+0x00000064u); // 801CF5B0
  cmps(c,0,(int32_t)c->r[0],0); // 801CF5B4
  if (!crb(c,2)) { goto L_801CF5E8; } // 801CF5B8
  cmps(c,0,(int32_t)c->r[31],0); // 801CF5BC
  if (!crb(c,2)) { goto L_801CF5D8; } // 801CF5C0
  c->r[3]=c->r[30]|c->r[30]; // 801CF5C4
  c->r[4]=0u+0x00000000u; // 801CF5C8
  c->r[5]=0u+0x00000001u; // 801CF5CC
  c->lr=0x801CF5D4u; f_801CC5F8(c); // 801CF5D0
  goto L_801CF5E8; // 801CF5D4
L_801CF5D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801CF5D8
  c->r[4]=0u+0x00000000u; // 801CF5DC
  c->r[5]=0u+0x00000000u; // 801CF5E0
  c->lr=0x801CF5E8u; f_801CC5F8(c); // 801CF5E4
L_801CF5E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF5E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF5EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF5F0
  c->lr=c->r[0]; // 801CF5F4
  c->r[1]=c->r[1]+0x00000010u; // 801CF5F8
  return; // 801CF5FC
}

// rfc_set_port_state
void f_801CF600(Ctx* __restrict c) {
  trace_call(0x801CF600u);
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF600
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CF604
  if (crb(c,2)) { goto L_801CF614; } // 801CF608
  c->r[0]=R8(c->r[4]+0x0000000Au); // 801CF60C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801CF610
L_801CF614:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF614
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CF618
  if (crb(c,2)) { goto L_801CF628; } // 801CF61C
  c->r[0]=R8(c->r[4]+0x0000000Bu); // 801CF620
  W8(c->r[3]+0x00000001u,c->r[0]); // 801CF624
L_801CF628:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF628
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CF62C
  if (crb(c,2)) { goto L_801CF63C; } // 801CF630
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 801CF634
  W8(c->r[3]+0x00000002u,c->r[0]); // 801CF638
L_801CF63C:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF63C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CF640
  if (crb(c,2)) { goto L_801CF650; } // 801CF644
  c->r[0]=R8(c->r[4]+0x0000000Du); // 801CF648
  W8(c->r[3]+0x00000003u,c->r[0]); // 801CF64C
L_801CF650:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF650
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801CF654
  if (crb(c,2)) { goto L_801CF664; } // 801CF658
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 801CF65C
  W8(c->r[3]+0x00000004u,c->r[0]); // 801CF660
L_801CF664:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF664
  c->r[0]=rotl(c->r[0],0)&0x00003F00u; cr0(c,c->r[0]); // 801CF668
  if (crb(c,2)) { goto L_801CF678; } // 801CF66C
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801CF670
  W8(c->r[3]+0x00000005u,c->r[0]); // 801CF674
L_801CF678:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF678
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801CF67C
  if (crb(c,2)) { goto L_801CF68C; } // 801CF680
  c->r[0]=R8(c->r[4]+0x00000010u); // 801CF684
  W8(c->r[3]+0x00000007u,c->r[0]); // 801CF688
L_801CF68C:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801CF68C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801CF690
  if (crb(c,2)) return; // 801CF694
  c->r[0]=R8(c->r[4]+0x00000011u); // 801CF698
  W8(c->r[3]+0x00000008u,c->r[0]); // 801CF69C
  return; // 801CF6A0
}

// RFCOMM_StartRsp
void f_801CF6A4(Ctx* __restrict c) {
  trace_call(0x801CF6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF6A4
  c->r[0]=c->lr; // 801CF6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF6AC
  c->r[5]=c->r[1]+0x00000008u; // 801CF6B0
  W16(c->r[1]+0x00000008u,c->r[4]); // 801CF6B4
  c->r[4]=0u+0x00000007u; // 801CF6B8
  c->lr=0x801CF6C0u; f_801CD8C0(c); // 801CF6BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF6C0
  c->lr=c->r[0]; // 801CF6C4
  c->r[1]=c->r[1]+0x00000010u; // 801CF6C8
  return; // 801CF6CC
}

// RFCOMM_DlcEstablishReq
void f_801CF6D0(Ctx* __restrict c) {
  trace_call(0x801CF6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF6D0
  c->r[0]=c->lr; // 801CF6D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF6D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF6DC
  c->r[31]=c->r[4]|c->r[4]; // 801CF6E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF6E4
  c->r[30]=c->r[3]|c->r[3]; // 801CF6E8
  c->lr=0x801CF6F0u; f_801CCC0C(c); // 801CF6EC
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801CF6F0
  cmpu(c,0,c->r[0],0x00000005u); // 801CF6F4
  if (crb(c,2)) { goto L_801CF714; } // 801CF6F8
  c->r[3]=c->r[30]|c->r[30]; // 801CF6FC
  c->r[4]=c->r[31]|c->r[31]; // 801CF700
  c->r[5]=0u+0x00000000u; // 801CF704
  c->r[6]=0u+0x00000001u; // 801CF708
  c->lr=0x801CF710u; f_801CBBA8(c); // 801CF70C
  goto L_801CF720; // 801CF710
L_801CF714:;
  c->r[4]=0u+0x00000009u; // 801CF714
  c->r[5]=0u+0x00000000u; // 801CF718
  c->lr=0x801CF720u; f_801CE504(c); // 801CF71C
L_801CF720:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF720
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF724
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF728
  c->lr=c->r[0]; // 801CF72C
  c->r[1]=c->r[1]+0x00000010u; // 801CF730
  return; // 801CF734
}

// RFCOMM_DlcEstablishRsp
void f_801CF738(Ctx* __restrict c) {
  trace_call(0x801CF738u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF738
  c->r[0]=c->lr; // 801CF73C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF740
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF744
  c->r[31]=c->r[4]|c->r[4]; // 801CF748
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF74C
  c->r[30]=c->r[3]|c->r[3]; // 801CF750
  W16(c->r[1]+0x00000008u,c->r[6]); // 801CF754
  c->lr=0x801CF75Cu; f_801CCC0C(c); // 801CF758
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801CF75C
  cmpu(c,0,c->r[0],0x00000005u); // 801CF760
  if (crb(c,2)) { goto L_801CF784; } // 801CF764
  c->r[0]=R16(c->r[1]+0x00000008u); // 801CF768
  cmps(c,0,(int32_t)c->r[0],0); // 801CF76C
  if (!crb(c,2)) { goto L_801CF784; } // 801CF770
  c->r[3]=c->r[30]|c->r[30]; // 801CF774
  c->r[4]=c->r[31]|c->r[31]; // 801CF778
  c->lr=0x801CF780u; f_801CC258(c); // 801CF77C
  goto L_801CF790; // 801CF780
L_801CF784:;
  c->r[5]=c->r[1]+0x00000008u; // 801CF784
  c->r[4]=0u+0x0000000Bu; // 801CF788
  c->lr=0x801CF790u; f_801CE504(c); // 801CF78C
L_801CF790:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF790
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF794
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF798
  c->lr=c->r[0]; // 801CF79C
  c->r[1]=c->r[1]+0x00000020u; // 801CF7A0
  return; // 801CF7A4
}

// RFCOMM_ParNegReq
void f_801CF7A8(Ctx* __restrict c) {
  trace_call(0x801CF7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF7A8
  c->r[0]=c->lr; // 801CF7AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF7B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF7B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF7B8
  c->r[30]=c->r[5]|c->r[5]; // 801CF7BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF7C0
  c->r[29]=c->r[4]|c->r[4]; // 801CF7C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CF7C8
  c->r[28]=c->r[3]|c->r[3]; // 801CF7CC
  c->lr=0x801CF7D4u; f_801CCC0C(c); // 801CF7D0
  c->r[0]=R8(c->r[28]+0x0000006Cu); // 801CF7D4
  c->r[31]=c->r[3]|c->r[3]; // 801CF7D8
  cmpu(c,0,c->r[0],0x00000005u); // 801CF7DC
  if (crb(c,2)) { goto L_801CF7F0; } // 801CF7E0
  c->r[0]=0u+0x0000000Du; // 801CF7E4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801CF7E8
  goto L_801CF868; // 801CF7EC
L_801CF7F0:;
  c->r[4]=R8(c->r[28]+0x00000072u); // 801CF7F0
  c->r[0]=0u+0x00000002u; // 801CF7F4
  cmps(c,0,(int32_t)c->r[4],0); // 801CF7F8
  if (crb(c,2)) { goto L_801CF804; } // 801CF7FC
  c->r[0]=c->r[4]|c->r[4]; // 801CF800
L_801CF804:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801CF804
  cmpu(c,0,c->r[0],0x00000002u); // 801CF808
  if (!crb(c,2)) { goto L_801CF834; } // 801CF80C
  c->r[4]=R16(c->r[3]+0x0000009Cu); // 801CF810
  c->r[7]=0u+0x000000F0u; // 801CF814
  c->r[0]=0u+0x00000007u; // 801CF818
  cmpu(c,0,c->r[4],0x00000007u); // 801CF81C
  if (!crb(c,0)) { goto L_801CF828; } // 801CF820
  c->r[0]=c->r[4]|c->r[4]; // 801CF824
L_801CF828:;
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 801CF828
  W16(c->r[3]+0x0000009Au,c->r[8]); // 801CF82C
  goto L_801CF83C; // 801CF830
L_801CF834:;
  c->r[7]=0u+0x00000000u; // 801CF834
  c->r[8]=0u+0x00000000u; // 801CF838
L_801CF83C:;
  c->r[0]=R8(c->r[3]+0x00000069u); // 801CF83C
  c->r[4]=c->r[29]|c->r[29]; // 801CF840
  c->r[6]=c->r[30]|c->r[30]; // 801CF844
  c->r[5]=0u+0x00000001u; // 801CF848
  c->r[0]=c->r[0]|0x00000001u; // 801CF84C
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CF850
  c->r[3]=c->r[28]|c->r[28]; // 801CF854
  c->lr=0x801CF85Cu; f_801D003C(c); // 801CF858
  c->r[3]=c->r[31]|c->r[31]; // 801CF85C
  c->r[4]=0u+0x0000003Cu; // 801CF860
  c->lr=0x801CF868u; f_801D1548(c); // 801CF864
L_801CF868:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF868
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF86C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF870
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF874
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CF878
  c->lr=c->r[0]; // 801CF87C
  c->r[1]=c->r[1]+0x00000020u; // 801CF880
  return; // 801CF884
}

// RFCOMM_ParNegRsp
void f_801CF888(Ctx* __restrict c) {
  trace_call(0x801CF888u);
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801CF888
  c->r[9]=c->r[6]|c->r[6]; // 801CF88C
  c->r[8]=c->r[7]|c->r[7]; // 801CF890
  cmpu(c,0,c->r[0],0x00000005u); // 801CF894
  if (!crb(c,2)) return; // 801CF898
  c->r[6]=c->r[5]|c->r[5]; // 801CF89C
  c->r[7]=c->r[9]|c->r[9]; // 801CF8A0
  c->r[5]=0u+0x00000000u; // 801CF8A4
  f_801D003C(c); return; // 801CF8A8
  return; // 801CF8AC
}

// RFCOMM_PortNegReq
void f_801CF8B0(Ctx* __restrict c) {
  trace_call(0x801CF8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF8B0
  c->r[0]=c->lr; // 801CF8B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF8B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF8BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF8C0
  c->r[30]=c->r[5]|c->r[5]; // 801CF8C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF8C8
  c->r[29]=c->r[4]|c->r[4]; // 801CF8CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CF8D0
  c->r[28]=c->r[3]|c->r[3]; // 801CF8D4
  c->lr=0x801CF8DCu; f_801CCC0C(c); // 801CF8D8
  c->r[0]=R8(c->r[28]+0x0000006Cu); // 801CF8DC
  c->r[31]=c->r[3]|c->r[3]; // 801CF8E0
  cmpu(c,0,c->r[0],0x00000005u); // 801CF8E4
  if (crb(c,2)) { goto L_801CF904; } // 801CF8E8
  c->r[3]=c->r[28]|c->r[28]; // 801CF8EC
  c->r[4]=c->r[29]|c->r[29]; // 801CF8F0
  c->r[5]=0u+0x00000000u; // 801CF8F4
  c->r[6]=0u+0x00000001u; // 801CF8F8
  c->lr=0x801CF900u; f_801CBE3C(c); // 801CF8FC
  goto L_801CF94C; // 801CF900
L_801CF904:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CF904
  if (!crb(c,2)) { goto L_801CF91C; } // 801CF908
  c->r[0]=R8(c->r[3]+0x00000069u); // 801CF90C
  c->r[0]=c->r[0]|0x00000002u; // 801CF910
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CF914
  goto L_801CF928; // 801CF918
L_801CF91C:;
  c->r[0]=R8(c->r[3]+0x00000069u); // 801CF91C
  c->r[0]=c->r[0]|0x00000004u; // 801CF920
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CF924
L_801CF928:;
  c->r[3]=c->r[28]|c->r[28]; // 801CF928
  c->r[4]=c->r[29]|c->r[29]; // 801CF92C
  c->r[6]=c->r[30]|c->r[30]; // 801CF930
  c->r[5]=0u+0x00000001u; // 801CF934
  c->r[7]=0u+0x00003F7Fu; // 801CF938
  c->lr=0x801CF940u; f_801D03FC(c); // 801CF93C
  c->r[3]=c->r[31]|c->r[31]; // 801CF940
  c->r[4]=0u+0x0000003Cu; // 801CF944
  c->lr=0x801CF94Cu; f_801D1548(c); // 801CF948
L_801CF94C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF94C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF950
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF954
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF958
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CF95C
  c->lr=c->r[0]; // 801CF960
  c->r[1]=c->r[1]+0x00000020u; // 801CF964
  return; // 801CF968
}

// RFCOMM_PortNegRsp
void f_801CF96C(Ctx* __restrict c) {
  trace_call(0x801CF96Cu);
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801CF96C
  c->r[7]=c->r[6]|c->r[6]; // 801CF970
  cmpu(c,0,c->r[0],0x00000005u); // 801CF974
  if (!crb(c,2)) return; // 801CF978
  c->r[6]=c->r[5]|c->r[5]; // 801CF97C
  c->r[5]=0u+0x00000000u; // 801CF980
  f_801D03FC(c); return; // 801CF984
  return; // 801CF988
}

// RFCOMM_ControlReq
void f_801CF98C(Ctx* __restrict c) {
  trace_call(0x801CF98Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF98C
  c->r[0]=c->lr; // 801CF990
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF994
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF998
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF99C
  c->r[30]=c->r[5]|c->r[5]; // 801CF9A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF9A4
  c->r[29]=c->r[4]|c->r[4]; // 801CF9A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CF9AC
  c->r[28]=c->r[3]|c->r[3]; // 801CF9B0
  c->lr=0x801CF9B8u; f_801CCC0C(c); // 801CF9B4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CF9B8
  c->r[31]=c->r[3]|c->r[3]; // 801CF9BC
  cmpu(c,0,c->r[0],0x00000002u); // 801CF9C0
  if (!crb(c,2)) { goto L_801CFA10; } // 801CF9C4
  c->r[0]=R8(c->r[3]+0x00000068u); // 801CF9C8
  cmpu(c,0,c->r[0],0x00000004u); // 801CF9CC
  if (crb(c,2)) { goto L_801CF9D8; } // 801CF9D0
  goto L_801CFA10; // 801CF9D4
L_801CF9D8:;
  c->r[0]=R8(c->r[3]+0x00000064u); // 801CF9D8
  c->r[4]=c->r[29]|c->r[29]; // 801CF9DC
  c->r[6]=c->r[30]|c->r[30]; // 801CF9E0
  c->r[5]=0u+0x00000001u; // 801CF9E4
  c->r[0]=c->r[0]|0x00000001u; // 801CF9E8
  W8(c->r[3]+0x00000064u,c->r[0]); // 801CF9EC
  c->r[0]=R8(c->r[3]+0x00000069u); // 801CF9F0
  c->r[0]=c->r[0]|0x00000008u; // 801CF9F4
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CF9F8
  c->r[3]=c->r[28]|c->r[28]; // 801CF9FC
  c->lr=0x801CFA04u; f_801D022C(c); // 801CFA00
  c->r[3]=c->r[31]|c->r[31]; // 801CFA04
  c->r[4]=0u+0x0000003Cu; // 801CFA08
  c->lr=0x801CFA10u; f_801D1548(c); // 801CFA0C
L_801CFA10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFA10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFA14
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFA18
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFA1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CFA20
  c->lr=c->r[0]; // 801CFA24
  c->r[1]=c->r[1]+0x00000020u; // 801CFA28
  return; // 801CFA2C
}

// RFCOMM_FlowReq
void f_801CFA30(Ctx* __restrict c) {
  trace_call(0x801CFA30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFA30
  c->r[0]=c->lr; // 801CFA34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFA38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFA3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFA40
  c->r[30]=c->r[5]|c->r[5]; // 801CFA44
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFA48
  c->r[29]=c->r[4]|c->r[4]; // 801CFA4C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CFA50
  c->r[28]=c->r[3]|c->r[3]; // 801CFA54
  c->lr=0x801CFA5Cu; f_801CCC0C(c); // 801CFA58
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CFA5C
  c->r[31]=c->r[3]|c->r[3]; // 801CFA60
  cmpu(c,0,c->r[0],0x00000002u); // 801CFA64
  if (!crb(c,2)) { goto L_801CFAB4; } // 801CFA68
  c->r[0]=R8(c->r[3]+0x00000068u); // 801CFA6C
  cmpu(c,0,c->r[0],0x00000004u); // 801CFA70
  if (crb(c,2)) { goto L_801CFA7C; } // 801CFA74
  goto L_801CFAB4; // 801CFA78
L_801CFA7C:;
  c->r[0]=cntlz(c->r[30]); // 801CFA7C
  c->r[4]=c->r[29]|c->r[29]; // 801CFA80
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 801CFA84
  c->r[6]=c->r[31]+0x0000005Au; // 801CFA88
  W8(c->r[3]+0x0000005Eu,c->r[0]); // 801CFA8C
  c->r[5]=0u+0x00000001u; // 801CFA90
  c->r[0]=R8(c->r[3]+0x00000069u); // 801CFA94
  c->r[0]=c->r[0]|0x00000008u; // 801CFA98
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CFA9C
  c->r[3]=c->r[28]|c->r[28]; // 801CFAA0
  c->lr=0x801CFAA8u; f_801D022C(c); // 801CFAA4
  c->r[3]=c->r[31]|c->r[31]; // 801CFAA8
  c->r[4]=0u+0x0000003Cu; // 801CFAAC
  c->lr=0x801CFAB4u; f_801D1548(c); // 801CFAB0
L_801CFAB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFAB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFAB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFABC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFAC0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CFAC4
  c->lr=c->r[0]; // 801CFAC8
  c->r[1]=c->r[1]+0x00000020u; // 801CFACC
  return; // 801CFAD0
}

// RFCOMM_LineStatusReq
void f_801CFAD4(Ctx* __restrict c) {
  trace_call(0x801CFAD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFAD4
  c->r[0]=c->lr; // 801CFAD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFADC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFAE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFAE4
  c->r[30]=c->r[5]|c->r[5]; // 801CFAE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFAEC
  c->r[29]=c->r[4]|c->r[4]; // 801CFAF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CFAF4
  c->r[28]=c->r[3]|c->r[3]; // 801CFAF8
  c->lr=0x801CFB00u; f_801CCC0C(c); // 801CFAFC
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CFB00
  c->r[31]=c->r[3]|c->r[3]; // 801CFB04
  cmpu(c,0,c->r[0],0x00000002u); // 801CFB08
  if (!crb(c,2)) { goto L_801CFB4C; } // 801CFB0C
  c->r[0]=R8(c->r[3]+0x00000068u); // 801CFB10
  cmpu(c,0,c->r[0],0x00000004u); // 801CFB14
  if (crb(c,2)) { goto L_801CFB20; } // 801CFB18
  goto L_801CFB4C; // 801CFB1C
L_801CFB20:;
  c->r[0]=R8(c->r[3]+0x00000069u); // 801CFB20
  c->r[4]=c->r[29]|c->r[29]; // 801CFB24
  c->r[6]=c->r[30]|c->r[30]; // 801CFB28
  c->r[5]=0u+0x00000001u; // 801CFB2C
  c->r[0]=c->r[0]|0x00000010u; // 801CFB30
  W8(c->r[3]+0x00000069u,c->r[0]); // 801CFB34
  c->r[3]=c->r[28]|c->r[28]; // 801CFB38
  c->lr=0x801CFB40u; f_801D034C(c); // 801CFB3C
  c->r[3]=c->r[31]|c->r[31]; // 801CFB40
  c->r[4]=0u+0x0000003Cu; // 801CFB44
  c->lr=0x801CFB4Cu; f_801D1548(c); // 801CFB48
L_801CFB4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFB4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFB50
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFB54
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFB58
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CFB5C
  c->lr=c->r[0]; // 801CFB60
  c->r[1]=c->r[1]+0x00000020u; // 801CFB64
  return; // 801CFB68
}

// RFCOMM_DlcReleaseReq
void f_801CFB6C(Ctx* __restrict c) {
  trace_call(0x801CFB6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB6C
  c->r[0]=c->lr; // 801CFB70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFB74
  c->lr=0x801CFB7Cu; f_801CCC0C(c); // 801CFB78
  c->r[4]=0u+0x0000000Cu; // 801CFB7C
  c->r[5]=0u+0x00000000u; // 801CFB80
  c->lr=0x801CFB88u; f_801CE504(c); // 801CFB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFB88
  c->lr=c->r[0]; // 801CFB8C
  c->r[1]=c->r[1]+0x00000010u; // 801CFB90
  return; // 801CFB94
}

// RFCOMM_DataReq
void f_801CFB98(Ctx* __restrict c) {
  trace_call(0x801CFB98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB98
  c->r[0]=c->lr; // 801CFB9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFBA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFBA4
  c->r[31]=c->r[5]|c->r[5]; // 801CFBA8
  c->lr=0x801CFBB0u; f_801CCC0C(c); // 801CFBAC
  c->r[5]=c->r[31]|c->r[31]; // 801CFBB0
  c->r[4]=0u+0x0000000Eu; // 801CFBB4
  c->lr=0x801CFBBCu; f_801CE504(c); // 801CFBB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFBBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFBC0
  c->lr=c->r[0]; // 801CFBC4
  c->r[1]=c->r[1]+0x00000010u; // 801CFBC8
  return; // 801CFBCC
}

// rfc_send_sabme
void f_801CFBD0(Ctx* __restrict c) {
  trace_call(0x801CFBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFBD0
  c->r[0]=c->lr; // 801CFBD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFBD8
  c->r[11]=c->r[1]+0x00000020u; // 801CFBDC
  c->lr=0x801CFBE4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFBE0
  c->r[0]=R8(c->r[3]+0x0000006Du); // 801CFBE4
  c->r[27]=c->r[3]|c->r[3]; // 801CFBE8
  c->r[28]=c->r[4]|c->r[4]; // 801CFBEC
  c->r[3]=0u+0x00000001u; // 801CFBF0
  cmps(c,0,(int32_t)c->r[0],0); // 801CFBF4
  if (!crb(c,2)) { goto L_801CFC00; } // 801CFBF8
  c->r[3]=0u+0x00000000u; // 801CFBFC
L_801CFC00:;
  c->r[29]=rotl(c->r[3],1)&0x000000FEu; // 801CFC00
  c->r[3]=0u+0x00000002u; // 801CFC04
  c->lr=0x801CFC0Cu; f_801AA140(c); // 801CFC08
  cmps(c,0,(int32_t)c->r[3],0); // 801CFC0C
  c->r[30]=c->r[3]|c->r[3]; // 801CFC10
  if (crb(c,2)) { goto L_801CFC68; } // 801CFC14
  c->r[0]=0u+0x00000009u; // 801CFC18
  c->r[31]=c->r[3]+0x00000011u; // 801CFC1C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CFC20
  c->r[3]=c->r[29]|0x00000001u; // 801CFC24
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 801CFC28
  c->r[5]=0u+0x0000003Fu; // 801CFC2C
  c->r[3]=c->r[3]|c->r[0]; // 801CFC30
  c->r[4]=c->r[31]|c->r[31]; // 801CFC34
  W8(c->r[31]+0x00000000u,c->r[3]); // 801CFC38
  c->r[0]=0u+0x00000001u; // 801CFC3C
  c->r[3]=0u+0x00000003u; // 801CFC40
  W8(c->r[31]+0x00000001u,c->r[5]); // 801CFC44
  W8(c->r[31]+0x00000002u,c->r[0]); // 801CFC48
  c->lr=0x801CFC50u; f_801D1218(c); // 801CFC4C
  W8(c->r[31]+0x00000003u,c->r[3]); // 801CFC50
  c->r[0]=0u+0x00000004u; // 801CFC54
  c->r[3]=c->r[27]|c->r[27]; // 801CFC58
  c->r[4]=c->r[30]|c->r[30]; // 801CFC5C
  W16(c->r[30]+0x00000002u,c->r[0]); // 801CFC60
  c->lr=0x801CFC68u; f_801D1994(c); // 801CFC64
L_801CFC68:;
  c->r[11]=c->r[1]+0x00000020u; // 801CFC68
  c->lr=0x801CFC70u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFC6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFC70
  c->lr=c->r[0]; // 801CFC74
  c->r[1]=c->r[1]+0x00000020u; // 801CFC78
  return; // 801CFC7C
}

// rfc_send_ua
void f_801CFC80(Ctx* __restrict c) {
  trace_call(0x801CFC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC80
  c->r[0]=c->lr; // 801CFC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFC88
  c->r[11]=c->r[1]+0x00000020u; // 801CFC8C
  c->lr=0x801CFC94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFC90
  c->r[0]=R8(c->r[3]+0x0000006Du); // 801CFC94
  c->r[27]=c->r[3]|c->r[3]; // 801CFC98
  c->r[28]=c->r[4]|c->r[4]; // 801CFC9C
  c->r[3]=0u+0x00000001u; // 801CFCA0
  cmps(c,0,(int32_t)c->r[0],0); // 801CFCA4
  if (crb(c,2)) { goto L_801CFCB0; } // 801CFCA8
  c->r[3]=0u+0x00000000u; // 801CFCAC
L_801CFCB0:;
  c->r[29]=rotl(c->r[3],1)&0x000000FEu; // 801CFCB0
  c->r[3]=0u+0x00000002u; // 801CFCB4
  c->lr=0x801CFCBCu; f_801AA140(c); // 801CFCB8
  cmps(c,0,(int32_t)c->r[3],0); // 801CFCBC
  c->r[30]=c->r[3]|c->r[3]; // 801CFCC0
  if (crb(c,2)) { goto L_801CFD18; } // 801CFCC4
  c->r[0]=0u+0x00000009u; // 801CFCC8
  c->r[31]=c->r[3]+0x00000011u; // 801CFCCC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CFCD0
  c->r[3]=c->r[29]|0x00000001u; // 801CFCD4
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 801CFCD8
  c->r[5]=0u+0x00000073u; // 801CFCDC
  c->r[3]=c->r[3]|c->r[0]; // 801CFCE0
  c->r[4]=c->r[31]|c->r[31]; // 801CFCE4
  W8(c->r[31]+0x00000000u,c->r[3]); // 801CFCE8
  c->r[0]=0u+0x00000001u; // 801CFCEC
  c->r[3]=0u+0x00000003u; // 801CFCF0
  W8(c->r[31]+0x00000001u,c->r[5]); // 801CFCF4
  W8(c->r[31]+0x00000002u,c->r[0]); // 801CFCF8
  c->lr=0x801CFD00u; f_801D1218(c); // 801CFCFC
  W8(c->r[31]+0x00000003u,c->r[3]); // 801CFD00
  c->r[0]=0u+0x00000004u; // 801CFD04
  c->r[3]=c->r[27]|c->r[27]; // 801CFD08
  c->r[4]=c->r[30]|c->r[30]; // 801CFD0C
  W16(c->r[30]+0x00000002u,c->r[0]); // 801CFD10
  c->lr=0x801CFD18u; f_801D1994(c); // 801CFD14
L_801CFD18:;
  c->r[11]=c->r[1]+0x00000020u; // 801CFD18
  c->lr=0x801CFD20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFD1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFD20
  c->lr=c->r[0]; // 801CFD24
  c->r[1]=c->r[1]+0x00000020u; // 801CFD28
  return; // 801CFD2C
}

// rfc_send_dm
void f_801CFD30(Ctx* __restrict c) {
  trace_call(0x801CFD30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFD30
  c->r[0]=c->lr; // 801CFD34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFD38
  c->r[11]=c->r[1]+0x00000020u; // 801CFD3C
  c->lr=0x801CFD44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFD40
  c->r[0]=R8(c->r[3]+0x0000006Du); // 801CFD44
  c->r[31]=c->r[3]|c->r[3]; // 801CFD48
  c->r[27]=c->r[4]|c->r[4]; // 801CFD4C
  c->r[30]=c->r[5]|c->r[5]; // 801CFD50
  cmps(c,0,(int32_t)c->r[0],0); // 801CFD54
  c->r[0]=0u+0x00000001u; // 801CFD58
  if (crb(c,2)) { goto L_801CFD64; } // 801CFD5C
  c->r[0]=0u+0x00000000u; // 801CFD60
L_801CFD64:;
  c->r[28]=rotl(c->r[0],1)&0x000000FEu; // 801CFD64
  c->r[3]=0u+0x00000002u; // 801CFD68
  c->lr=0x801CFD70u; f_801AA140(c); // 801CFD6C
  cmps(c,0,(int32_t)c->r[3],0); // 801CFD70
  c->r[29]=c->r[3]|c->r[3]; // 801CFD74
  if (crb(c,2)) { goto L_801CFDDC; } // 801CFD78
  c->r[0]=0u-c->r[30]; // 801CFD7C
  c->r[4]=0u+0x00000009u; // 801CFD80
  c->r[0]=c->r[0]|c->r[30]; // 801CFD84
  W16(c->r[3]+0x00000004u,c->r[4]); // 801CFD88
  c->r[30]=c->r[3]+0x00000011u; // 801CFD8C
  c->r[5]=c->r[28]|0x00000001u; // 801CFD90
  c->r[3]=sraw(c,c->r[0],31); // 801CFD94
  c->r[4]=rotl(c->r[27],2)&0x000003FCu; // 801CFD98
  c->r[4]=c->r[5]|c->r[4]; // 801CFD9C
  c->r[0]=0u+0x00000001u; // 801CFDA0
  c->r[3]=rotl(c->r[3],0)&0x00000010u; // 801CFDA4
  W8(c->r[30]+0x00000000u,c->r[4]); // 801CFDA8
  c->r[3]=c->r[3]|0x0000000Fu; // 801CFDAC
  c->r[4]=c->r[30]|c->r[30]; // 801CFDB0
  W8(c->r[30]+0x00000001u,c->r[3]); // 801CFDB4
  c->r[3]=0u+0x00000003u; // 801CFDB8
  W8(c->r[30]+0x00000002u,c->r[0]); // 801CFDBC
  c->lr=0x801CFDC4u; f_801D1218(c); // 801CFDC0
  W8(c->r[30]+0x00000003u,c->r[3]); // 801CFDC4
  c->r[0]=0u+0x00000004u; // 801CFDC8
  c->r[3]=c->r[31]|c->r[31]; // 801CFDCC
  c->r[4]=c->r[29]|c->r[29]; // 801CFDD0
  W16(c->r[29]+0x00000002u,c->r[0]); // 801CFDD4
  c->lr=0x801CFDDCu; f_801D1994(c); // 801CFDD8
L_801CFDDC:;
  c->r[11]=c->r[1]+0x00000020u; // 801CFDDC
  c->lr=0x801CFDE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFDE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFDE4
  c->lr=c->r[0]; // 801CFDE8
  c->r[1]=c->r[1]+0x00000020u; // 801CFDEC
  return; // 801CFDF0
}

// rfc_send_disc
void f_801CFDF4(Ctx* __restrict c) {
  trace_call(0x801CFDF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFDF4
  c->r[0]=c->lr; // 801CFDF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFDFC
  c->r[11]=c->r[1]+0x00000020u; // 801CFE00
  c->lr=0x801CFE08u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFE04
  c->r[0]=R8(c->r[3]+0x0000006Du); // 801CFE08
  c->r[27]=c->r[3]|c->r[3]; // 801CFE0C
  c->r[28]=c->r[4]|c->r[4]; // 801CFE10
  c->r[3]=0u+0x00000001u; // 801CFE14
  cmps(c,0,(int32_t)c->r[0],0); // 801CFE18
  if (!crb(c,2)) { goto L_801CFE24; } // 801CFE1C
  c->r[3]=0u+0x00000000u; // 801CFE20
L_801CFE24:;
  c->r[29]=rotl(c->r[3],1)&0x000000FEu; // 801CFE24
  c->r[3]=0u+0x00000002u; // 801CFE28
  c->lr=0x801CFE30u; f_801AA140(c); // 801CFE2C
  cmps(c,0,(int32_t)c->r[3],0); // 801CFE30
  c->r[30]=c->r[3]|c->r[3]; // 801CFE34
  if (crb(c,2)) { goto L_801CFE8C; } // 801CFE38
  c->r[0]=0u+0x00000009u; // 801CFE3C
  c->r[31]=c->r[3]+0x00000011u; // 801CFE40
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CFE44
  c->r[3]=c->r[29]|0x00000001u; // 801CFE48
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 801CFE4C
  c->r[5]=0u+0x00000053u; // 801CFE50
  c->r[3]=c->r[3]|c->r[0]; // 801CFE54
  c->r[4]=c->r[31]|c->r[31]; // 801CFE58
  W8(c->r[31]+0x00000000u,c->r[3]); // 801CFE5C
  c->r[0]=0u+0x00000001u; // 801CFE60
  c->r[3]=0u+0x00000003u; // 801CFE64
  W8(c->r[31]+0x00000001u,c->r[5]); // 801CFE68
  W8(c->r[31]+0x00000002u,c->r[0]); // 801CFE6C
  c->lr=0x801CFE74u; f_801D1218(c); // 801CFE70
  W8(c->r[31]+0x00000003u,c->r[3]); // 801CFE74
  c->r[0]=0u+0x00000004u; // 801CFE78
  c->r[3]=c->r[27]|c->r[27]; // 801CFE7C
  c->r[4]=c->r[30]|c->r[30]; // 801CFE80
  W16(c->r[30]+0x00000002u,c->r[0]); // 801CFE84
  c->lr=0x801CFE8Cu; f_801D1994(c); // 801CFE88
L_801CFE8C:;
  c->r[11]=c->r[1]+0x00000020u; // 801CFE8C
  c->lr=0x801CFE94u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFE90
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFE94
  c->lr=c->r[0]; // 801CFE98
  c->r[1]=c->r[1]+0x00000020u; // 801CFE9C
  return; // 801CFEA0
}

// rfc_send_buf_uih
void f_801CFEA4(Ctx* __restrict c) {
  trace_call(0x801CFEA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFEA4
  c->r[0]=c->lr; // 801CFEA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFEAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFEB0
  c->r[31]=c->r[5]|c->r[5]; // 801CFEB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFEB8
  c->r[30]=c->r[4]|c->r[4]; // 801CFEBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFEC0
  c->r[29]=c->r[3]|c->r[3]; // 801CFEC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CFEC8
  c->r[0]=R8(c->r[3]+0x0000006Du); // 801CFECC
  cmps(c,0,(int32_t)c->r[0],0); // 801CFED0
  c->r[0]=0u+0x00000001u; // 801CFED4
  if (!crb(c,2)) { goto L_801CFEE0; } // 801CFED8
  c->r[0]=0u+0x00000000u; // 801CFEDC
L_801CFEE0:;
  c->r[3]=R16(c->r[5]+0x00000004u); // 801CFEE0
  c->r[6]=rotl(c->r[0],1)&0x000000FEu; // 801CFEE4
  c->r[0]=R16(c->r[5]+0x00000002u); // 801CFEE8
  c->r[3]=c->r[3]+0xFFFFFFFDu; // 801CFEEC
  cmpu(c,0,c->r[0],0x0000007Fu); // 801CFEF0
  W16(c->r[5]+0x00000004u,c->r[3]); // 801CFEF4
  if (!crb(c,1)) { goto L_801CFF08; } // 801CFEF8
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CFEFC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CFF00
  W16(c->r[5]+0x00000004u,c->r[0]); // 801CFF04
L_801CFF08:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CFF08
  if (crb(c,2)) { goto L_801CFF1C; } // 801CFF0C
  c->r[0]=R16(c->r[5]+0x00000006u); // 801CFF10
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801CFF14
  goto L_801CFF20; // 801CFF18
L_801CFF1C:;
  c->r[0]=0u+0x00000000u; // 801CFF1C
L_801CFF20:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CFF20
  if (crb(c,2)) { goto L_801CFF34; } // 801CFF24
  c->r[3]=R16(c->r[5]+0x00000004u); // 801CFF28
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801CFF2C
  W16(c->r[5]+0x00000004u,c->r[3]); // 801CFF30
L_801CFF34:;
  c->r[3]=0u-c->r[0]; // 801CFF34
  c->r[7]=R16(c->r[5]+0x00000004u); // 801CFF38
  c->r[3]=c->r[3]|c->r[0]; // 801CFF3C
  c->r[6]=c->r[6]|0x00000001u; // 801CFF40
  c->r[4]=rotl(c->r[4],2)&0x000003FCu; // 801CFF44
  c->r[7]=c->r[5]+c->r[7]; // 801CFF48
  c->r[4]=c->r[6]|c->r[4]; // 801CFF4C
  c->r[3]=sraw(c,c->r[3],31); // 801CFF50
  c->r[3]=rotl(c->r[3],0)&0x00000010u; // 801CFF54
  W8(c->r[7]+0x00000008u,c->r[4]); // 801CFF58
  c->r[3]=c->r[3]|0x000000EFu; // 801CFF5C
  c->r[4]=c->r[7]+0x0000000Au; // 801CFF60
  W8(c->r[7]+0x00000009u,c->r[3]); // 801CFF64
  c->r[3]=R16(c->r[5]+0x00000002u); // 801CFF68
  cmpu(c,0,c->r[3],0x0000007Fu); // 801CFF6C
  if (crb(c,1)) { goto L_801CFF94; } // 801CFF70
  c->r[3]=rotl(c->r[3],1)&0x0001FFFEu; // 801CFF74
  c->r[3]=c->r[3]|0x00000001u; // 801CFF78
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CFF7C
  c->r[4]=c->r[4]+0x00000001u; // 801CFF80
  c->r[3]=R16(c->r[5]+0x00000002u); // 801CFF84
  c->r[3]=c->r[3]+0x00000003u; // 801CFF88
  W16(c->r[5]+0x00000002u,c->r[3]); // 801CFF8C
  goto L_801CFFB8; // 801CFF90
L_801CFF94:;
  c->r[3]=rotl(c->r[3],1)&0x000000FEu; // 801CFF94
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CFF98
  c->r[3]=R16(c->r[5]+0x00000002u); // 801CFF9C
  c->r[3]=sraw(c,c->r[3],7); // 801CFFA0
  W8(c->r[4]+0x00000001u,c->r[3]); // 801CFFA4
  c->r[4]=c->r[4]+0x00000002u; // 801CFFA8
  c->r[3]=R16(c->r[5]+0x00000002u); // 801CFFAC
  c->r[3]=c->r[3]+0x00000004u; // 801CFFB0
  W16(c->r[5]+0x00000002u,c->r[3]); // 801CFFB4
L_801CFFB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CFFB8
  if (crb(c,2)) { goto L_801CFFD0; } // 801CFFBC
  W8(c->r[4]+0x00000000u,c->r[0]); // 801CFFC0
  c->r[3]=R16(c->r[5]+0x00000002u); // 801CFFC4
  c->r[0]=c->r[3]+0x00000001u; // 801CFFC8
  W16(c->r[5]+0x00000002u,c->r[0]); // 801CFFCC
L_801CFFD0:;
  c->r[4]=R16(c->r[5]+0x00000002u); // 801CFFD0
  c->r[3]=0u+0x00000002u; // 801CFFD4
  c->r[6]=R16(c->r[5]+0x00000004u); // 801CFFD8
  c->r[0]=c->r[4]+0x00000001u; // 801CFFDC
  c->r[6]=c->r[5]+c->r[6]; // 801CFFE0
  W16(c->r[5]+0x00000002u,c->r[0]); // 801CFFE4
  c->r[28]=c->r[6]+c->r[4]; // 801CFFE8
  c->r[4]=c->r[6]+0x00000008u; // 801CFFEC
  c->lr=0x801CFFF4u; f_801D1218(c); // 801CFFF0
  cmps(c,0,(int32_t)c->r[30],0); // 801CFFF4
  W8(c->r[28]+0x00000008u,c->r[3]); // 801CFFF8
  if (!crb(c,2)) { goto L_801D0010; } // 801CFFFC
  c->r[3]=c->r[29]|c->r[29]; // 801D0000
  c->r[4]=c->r[31]|c->r[31]; // 801D0004
  c->lr=0x801D000Cu; f_801D1994(c); // 801D0008
  goto L_801D001C; // 801D000C
L_801D0010:;
  c->r[3]=R16(c->r[29]+0x00000068u); // 801D0010
  c->r[4]=c->r[31]|c->r[31]; // 801D0014
  c->lr=0x801D001Cu; f_801C5D00(c); // 801D0018
L_801D001C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D001C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0020
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0024
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0028
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D002C
  c->lr=c->r[0]; // 801D0030
  c->r[1]=c->r[1]+0x00000020u; // 801D0034
  return; // 801D0038
}

// rfc_send_pn
void f_801D003C(Ctx* __restrict c) {
  trace_call(0x801D003Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D003C
  c->r[0]=c->lr; // 801D0040
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0044
  c->r[11]=c->r[1]+0x00000020u; // 801D0048
  c->lr=0x801D0050u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D004C
  c->r[30]=c->r[3]|c->r[3]; // 801D0050
  c->r[26]=c->r[4]|c->r[4]; // 801D0054
  c->r[27]=c->r[5]|c->r[5]; // 801D0058
  c->r[31]=c->r[6]|c->r[6]; // 801D005C
  c->r[28]=c->r[7]|c->r[7]; // 801D0060
  c->r[29]=c->r[8]|c->r[8]; // 801D0064
  c->r[3]=0u+0x00000002u; // 801D0068
  c->lr=0x801D0070u; f_801AA140(c); // 801D006C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0070
  if (crb(c,2)) { goto L_801D010C; } // 801D0074
  c->r[0]=0u-c->r[27]; // 801D0078
  c->r[4]=0u+0x0000000Cu; // 801D007C
  c->r[0]=c->r[0]|c->r[27]; // 801D0080
  W16(c->r[3]+0x00000004u,c->r[4]); // 801D0084
  c->r[4]=sraw(c,c->r[0],31); // 801D0088
  cmps(c,0,(int32_t)c->r[27],0); // 801D008C
  c->r[4]=rotl(c->r[4],0)&0x00000002u; // 801D0090
  c->r[0]=0u+0x00000011u; // 801D0094
  c->r[4]=c->r[4]|0x00000081u; // 801D0098
  c->r[8]=c->r[3]+0x00000018u; // 801D009C
  W8(c->r[3]+0x00000014u,c->r[4]); // 801D00A0
  W8(c->r[3]+0x00000015u,c->r[0]); // 801D00A4
  W8(c->r[3]+0x00000016u,c->r[26]); // 801D00A8
  W8(c->r[3]+0x00000017u,c->r[28]); // 801D00AC
  if (crb(c,2)) { goto L_801D00C4; } // 801D00B0
  c->r[0]=0u+0x00000000u; // 801D00B4
  W8(c->r[8]+0x00000000u,c->r[0]); // 801D00B8
  c->r[8]=c->r[8]+0x00000001u; // 801D00BC
  goto L_801D00D8; // 801D00C0
L_801D00C4:;
  c->r[4]=0u+0x803D0000u; // 801D00C4
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801D00C8
  c->r[0]=R8(c->r[4]+0x0000000Bu); // 801D00CC
  W8(c->r[8]+0x00000000u,c->r[0]); // 801D00D0
  c->r[8]=c->r[8]+0x00000001u; // 801D00D4
L_801D00D8:;
  c->r[7]=0u+0x00000000u; // 801D00D8
  c->r[6]=rotl(c->r[31],24)&0x000000FFu; // 801D00DC
  W8(c->r[8]+0x00000000u,c->r[7]); // 801D00E0
  c->r[0]=0u+0x0000000Au; // 801D00E4
  c->r[5]=c->r[3]|c->r[3]; // 801D00E8
  c->r[4]=0u+0x00000000u; // 801D00EC
  W8(c->r[8]+0x00000001u,c->r[31]); // 801D00F0
  W8(c->r[8]+0x00000002u,c->r[6]); // 801D00F4
  W8(c->r[8]+0x00000003u,c->r[7]); // 801D00F8
  W8(c->r[8]+0x00000004u,c->r[29]); // 801D00FC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801D0100
  c->r[3]=c->r[30]|c->r[30]; // 801D0104
  c->lr=0x801D010Cu; f_801CFEA4(c); // 801D0108
L_801D010C:;
  c->r[11]=c->r[1]+0x00000020u; // 801D010C
  c->lr=0x801D0114u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0110
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0114
  c->lr=c->r[0]; // 801D0118
  c->r[1]=c->r[1]+0x00000020u; // 801D011C
  return; // 801D0120
}

// rfc_send_fcon
void f_801D0124(Ctx* __restrict c) {
  trace_call(0x801D0124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0124
  c->r[0]=c->lr; // 801D0128
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D012C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0130
  c->r[31]=c->r[4]|c->r[4]; // 801D0134
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0138
  c->r[30]=c->r[3]|c->r[3]; // 801D013C
  c->r[3]=0u+0x00000002u; // 801D0140
  c->lr=0x801D0148u; f_801AA140(c); // 801D0144
  cmps(c,0,(int32_t)c->r[3],0); // 801D0148
  if (crb(c,2)) { goto L_801D0190; } // 801D014C
  c->r[0]=0u-c->r[31]; // 801D0150
  c->r[4]=0u+0x0000000Cu; // 801D0154
  c->r[0]=c->r[0]|c->r[31]; // 801D0158
  W16(c->r[3]+0x00000004u,c->r[4]); // 801D015C
  c->r[4]=sraw(c,c->r[0],31); // 801D0160
  c->r[6]=0u+0x00000002u; // 801D0164
  c->r[4]=rotl(c->r[4],0)&0x00000002u; // 801D0168
  c->r[0]=0u+0x00000001u; // 801D016C
  c->r[4]=c->r[4]|0x000000A1u; // 801D0170
  c->r[5]=c->r[3]|c->r[3]; // 801D0174
  W8(c->r[3]+0x00000014u,c->r[4]); // 801D0178
  c->r[4]=0u+0x00000000u; // 801D017C
  W8(c->r[3]+0x00000015u,c->r[0]); // 801D0180
  W16(c->r[3]+0x00000002u,c->r[6]); // 801D0184
  c->r[3]=c->r[30]|c->r[30]; // 801D0188
  c->lr=0x801D0190u; f_801CFEA4(c); // 801D018C
L_801D0190:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0194
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0198
  c->lr=c->r[0]; // 801D019C
  c->r[1]=c->r[1]+0x00000010u; // 801D01A0
  return; // 801D01A4
}

// rfc_send_fcoff
void f_801D01A8(Ctx* __restrict c) {
  trace_call(0x801D01A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D01A8
  c->r[0]=c->lr; // 801D01AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D01B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D01B4
  c->r[31]=c->r[4]|c->r[4]; // 801D01B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D01BC
  c->r[30]=c->r[3]|c->r[3]; // 801D01C0
  c->r[3]=0u+0x00000002u; // 801D01C4
  c->lr=0x801D01CCu; f_801AA140(c); // 801D01C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D01CC
  if (crb(c,2)) { goto L_801D0214; } // 801D01D0
  c->r[0]=0u-c->r[31]; // 801D01D4
  c->r[4]=0u+0x0000000Cu; // 801D01D8
  c->r[0]=c->r[0]|c->r[31]; // 801D01DC
  W16(c->r[3]+0x00000004u,c->r[4]); // 801D01E0
  c->r[4]=sraw(c,c->r[0],31); // 801D01E4
  c->r[6]=0u+0x00000002u; // 801D01E8
  c->r[4]=rotl(c->r[4],0)&0x00000002u; // 801D01EC
  c->r[0]=0u+0x00000001u; // 801D01F0
  c->r[4]=c->r[4]|0x00000061u; // 801D01F4
  c->r[5]=c->r[3]|c->r[3]; // 801D01F8
  W8(c->r[3]+0x00000014u,c->r[4]); // 801D01FC
  c->r[4]=0u+0x00000000u; // 801D0200
  W8(c->r[3]+0x00000015u,c->r[0]); // 801D0204
  W16(c->r[3]+0x00000002u,c->r[6]); // 801D0208
  c->r[3]=c->r[30]|c->r[30]; // 801D020C
  c->lr=0x801D0214u; f_801CFEA4(c); // 801D0210
L_801D0214:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0214
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0218
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D021C
  c->lr=c->r[0]; // 801D0220
  c->r[1]=c->r[1]+0x00000010u; // 801D0224
  return; // 801D0228
}

// rfc_send_msc
void f_801D022C(Ctx* __restrict c) {
  trace_call(0x801D022Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D022C
  c->r[0]=c->lr; // 801D0230
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0234
  c->r[11]=c->r[1]+0x00000020u; // 801D0238
  c->lr=0x801D0240u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D023C
  c->r[31]=R8(c->r[6]+0x00000000u); // 801D0240
  c->r[28]=c->r[3]|c->r[3]; // 801D0244
  c->r[30]=R8(c->r[6]+0x00000001u); // 801D0248
  c->r[26]=c->r[4]|c->r[4]; // 801D024C
  c->r[27]=c->r[5]|c->r[5]; // 801D0250
  c->r[29]=c->r[6]|c->r[6]; // 801D0254
  c->r[3]=0u+0x00000002u; // 801D0258
  c->lr=0x801D0260u; f_801AA140(c); // 801D025C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0260
  if (crb(c,2)) { goto L_801D0334; } // 801D0264
  c->r[0]=0u-c->r[27]; // 801D0268
  c->r[4]=0u-c->r[30]; // 801D026C
  c->r[0]=c->r[0]|c->r[27]; // 801D0270
  c->r[6]=0u+0x0000000Cu; // 801D0274
  c->r[5]=c->r[4]|c->r[30]; // 801D0278
  W16(c->r[3]+0x00000004u,c->r[6]); // 801D027C
  c->r[0]=sraw(c,c->r[0],31); // 801D0280
  c->r[4]=rotl(c->r[26],2)&0x000003FCu; // 801D0284
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801D0288
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 801D028C
  c->r[0]=c->r[0]|0x000000E1u; // 801D0290
  cmps(c,0,(int32_t)c->r[30],0); // 801D0294
  c->r[9]=c->r[5]+0x00000002u; // 801D0298
  W8(c->r[3]+0x00000014u,c->r[0]); // 801D029C
  c->r[5]=rotl(c->r[9],1)&0x000001FEu; // 801D02A0
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 801D02A4
  c->r[6]=c->r[5]|0x00000001u; // 801D02A8
  c->r[5]=c->r[4]|0x00000003u; // 801D02AC
  W8(c->r[3]+0x00000015u,c->r[6]); // 801D02B0
  c->r[4]=rotl(c->r[31],31)&0x00000001u; // 801D02B4
  c->r[8]=0u-c->r[0]; // 801D02B8
  W8(c->r[3]+0x00000016u,c->r[5]); // 801D02BC
  c->r[4]=0u-c->r[4]; // 801D02C0
  c->r[0]=rotl(c->r[31],30)&0x00000001u; // 801D02C4
  c->r[7]=R8(c->r[29]+0x00000004u); // 801D02C8
  c->r[10]=rotl(c->r[4],0)&0x00000008u; // 801D02CC
  c->r[6]=0u-c->r[0]; // 801D02D0
  c->r[0]=rotl(c->r[31],29)&0x00000001u; // 801D02D4
  c->r[4]=0u-c->r[7]; // 801D02D8
  c->r[4]=c->r[4]|c->r[7]; // 801D02DC
  c->r[5]=0u-c->r[0]; // 801D02E0
  c->r[4]=sraw(c,c->r[4],31); // 801D02E4
  c->r[0]=c->r[10]|0x00000001u; // 801D02E8
  c->r[4]=rotl(c->r[4],0)&0x00000002u; // 801D02EC
  c->r[7]=c->r[3]+0x00000018u; // 801D02F0
  c->r[4]=(rotl(c->r[8],0)&0x00000004u)|(c->r[4]&~0x00000004u); // 801D02F4
  c->r[4]=(rotl(c->r[6],0)&0x00000040u)|(c->r[4]&~0x00000040u); // 801D02F8
  c->r[4]=(rotl(c->r[5],0)&0x00000080u)|(c->r[4]&~0x00000080u); // 801D02FC
  c->r[0]=c->r[4]|c->r[0]; // 801D0300
  W8(c->r[3]+0x00000017u,c->r[0]); // 801D0304
  if (crb(c,2)) { goto L_801D0318; } // 801D0308
  c->r[0]=rotl(c->r[30],4)&0x00000FF0u; // 801D030C
  c->r[0]=c->r[0]|0x00000003u; // 801D0310
  W8(c->r[7]+0x00000000u,c->r[0]); // 801D0314
L_801D0318:;
  c->r[4]=rotl(c->r[9],0)&0x000000FFu; // 801D0318
  c->r[5]=c->r[3]|c->r[3]; // 801D031C
  c->r[0]=c->r[4]+0x00000002u; // 801D0320
  W16(c->r[3]+0x00000002u,c->r[0]); // 801D0324
  c->r[4]=0u+0x00000000u; // 801D0328
  c->r[3]=c->r[28]|c->r[28]; // 801D032C
  c->lr=0x801D0334u; f_801CFEA4(c); // 801D0330
L_801D0334:;
  c->r[11]=c->r[1]+0x00000020u; // 801D0334
  c->lr=0x801D033Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0338
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D033C
  c->lr=c->r[0]; // 801D0340
  c->r[1]=c->r[1]+0x00000020u; // 801D0344
  return; // 801D0348
}

// rfc_send_rls
void f_801D034C(Ctx* __restrict c) {
  trace_call(0x801D034Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D034C
  c->r[0]=c->lr; // 801D0350
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0354
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0358
  c->r[31]=c->r[6]|c->r[6]; // 801D035C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0360
  c->r[30]=c->r[5]|c->r[5]; // 801D0364
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0368
  c->r[29]=c->r[4]|c->r[4]; // 801D036C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D0370
  c->r[28]=c->r[3]|c->r[3]; // 801D0374
  c->r[3]=0u+0x00000002u; // 801D0378
  c->lr=0x801D0380u; f_801AA140(c); // 801D037C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0380
  if (crb(c,2)) { goto L_801D03DC; } // 801D0384
  c->r[0]=0u-c->r[30]; // 801D0388
  c->r[5]=0u+0x0000000Cu; // 801D038C
  c->r[4]=c->r[0]|c->r[30]; // 801D0390
  W16(c->r[3]+0x00000004u,c->r[5]); // 801D0394
  c->r[4]=sraw(c,c->r[4],31); // 801D0398
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 801D039C
  c->r[5]=rotl(c->r[4],0)&0x00000002u; // 801D03A0
  c->r[6]=c->r[31]|0x00000001u; // 801D03A4
  c->r[5]=c->r[5]|0x00000051u; // 801D03A8
  c->r[7]=c->r[0]|0x00000003u; // 801D03AC
  W8(c->r[3]+0x00000014u,c->r[5]); // 801D03B0
  c->r[4]=0u+0x00000005u; // 801D03B4
  c->r[0]=0u+0x00000004u; // 801D03B8
  c->r[5]=c->r[3]|c->r[3]; // 801D03BC
  W8(c->r[3]+0x00000015u,c->r[4]); // 801D03C0
  c->r[4]=0u+0x00000000u; // 801D03C4
  W8(c->r[3]+0x00000016u,c->r[7]); // 801D03C8
  W8(c->r[3]+0x00000017u,c->r[6]); // 801D03CC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801D03D0
  c->r[3]=c->r[28]|c->r[28]; // 801D03D4
  c->lr=0x801D03DCu; f_801CFEA4(c); // 801D03D8
L_801D03DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D03DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D03E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D03E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D03E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D03EC
  c->lr=c->r[0]; // 801D03F0
  c->r[1]=c->r[1]+0x00000020u; // 801D03F4
  return; // 801D03F8
}

// rfc_send_rpn
void f_801D03FC(Ctx* __restrict c) {
  trace_call(0x801D03FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D03FC
  c->r[0]=c->lr; // 801D0400
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0404
  c->r[11]=c->r[1]+0x00000020u; // 801D0408
  c->lr=0x801D0410u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D040C
  c->r[29]=c->r[3]|c->r[3]; // 801D0410
  c->r[27]=c->r[4]|c->r[4]; // 801D0414
  c->r[28]=c->r[5]|c->r[5]; // 801D0418
  c->r[30]=c->r[6]|c->r[6]; // 801D041C
  c->r[31]=c->r[7]|c->r[7]; // 801D0420
  c->r[3]=0u+0x00000002u; // 801D0424
  c->lr=0x801D042Cu; f_801AA140(c); // 801D0428
  cmps(c,0,(int32_t)c->r[3],0); // 801D042C
  c->r[5]=c->r[3]|c->r[3]; // 801D0430
  if (crb(c,2)) { goto L_801D0500; } // 801D0434
  c->r[0]=0u-c->r[28]; // 801D0438
  c->r[4]=0u+0x0000000Cu; // 801D043C
  c->r[0]=c->r[0]|c->r[28]; // 801D0440
  W16(c->r[3]+0x00000004u,c->r[4]); // 801D0444
  c->r[0]=sraw(c,c->r[0],31); // 801D0448
  cmps(c,0,(int32_t)c->r[30],0); // 801D044C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801D0450
  c->r[4]=c->r[3]+0x00000015u; // 801D0454
  c->r[0]=c->r[0]|0x00000091u; // 801D0458
  W8(c->r[3]+0x00000014u,c->r[0]); // 801D045C
  if (!crb(c,2)) { goto L_801D0480; } // 801D0460
  c->r[6]=0u+0x00000003u; // 801D0464
  c->r[0]=rotl(c->r[27],2)&0x000003FCu; // 801D0468
  W8(c->r[4]+0x00000000u,c->r[6]); // 801D046C
  c->r[0]=c->r[0]|0x00000003u; // 801D0470
  W8(c->r[4]+0x00000001u,c->r[0]); // 801D0474
  W16(c->r[3]+0x00000002u,c->r[6]); // 801D0478
  goto L_801D04F4; // 801D047C
L_801D0480:;
  c->r[6]=0u+0x00000011u; // 801D0480
  c->r[0]=rotl(c->r[27],2)&0x000003FCu; // 801D0484
  W8(c->r[4]+0x00000000u,c->r[6]); // 801D0488
  c->r[7]=c->r[0]|0x00000003u; // 801D048C
  c->r[6]=rotl(c->r[31],24)&0x000000FFu; // 801D0490
  c->r[0]=0u+0x0000000Au; // 801D0494
  W8(c->r[4]+0x00000001u,c->r[7]); // 801D0498
  c->r[7]=R8(c->r[30]+0x00000000u); // 801D049C
  W8(c->r[4]+0x00000002u,c->r[7]); // 801D04A0
  c->r[7]=R8(c->r[30]+0x00000002u); // 801D04A4
  c->r[9]=R8(c->r[30]+0x00000003u); // 801D04A8
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D04AC
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801D04B0
  c->r[8]=R8(c->r[30]+0x00000001u); // 801D04B4
  c->r[9]=rotl(c->r[9],3)&0xFFFFFFF8u; // 801D04B8
  c->r[10]=rotl(c->r[10],4)&0xFFFFFFF0u; // 801D04BC
  c->r[7]=c->r[8]|c->r[7]; // 801D04C0
  c->r[7]=c->r[9]|c->r[7]; // 801D04C4
  c->r[7]=c->r[10]|c->r[7]; // 801D04C8
  W8(c->r[4]+0x00000003u,c->r[7]); // 801D04CC
  c->r[7]=R8(c->r[30]+0x00000005u); // 801D04D0
  W8(c->r[4]+0x00000004u,c->r[7]); // 801D04D4
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D04D8
  W8(c->r[4]+0x00000005u,c->r[7]); // 801D04DC
  c->r[7]=R8(c->r[30]+0x00000008u); // 801D04E0
  W8(c->r[4]+0x00000006u,c->r[7]); // 801D04E4
  W8(c->r[4]+0x00000007u,c->r[31]); // 801D04E8
  W8(c->r[4]+0x00000008u,c->r[6]); // 801D04EC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801D04F0
L_801D04F4:;
  c->r[3]=c->r[29]|c->r[29]; // 801D04F4
  c->r[4]=0u+0x00000000u; // 801D04F8
  c->lr=0x801D0500u; f_801CFEA4(c); // 801D04FC
L_801D0500:;
  c->r[11]=c->r[1]+0x00000020u; // 801D0500
  c->lr=0x801D0508u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0504
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0508
  c->lr=c->r[0]; // 801D050C
  c->r[1]=c->r[1]+0x00000020u; // 801D0510
  return; // 801D0514
}

// rfc_send_test
void f_801D0518(Ctx* __restrict c) {
  trace_call(0x801D0518u);
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D0518
  cmpu(c,0,c->r[0],0x00000010u); // 801D051C
  if (!crb(c,0)) { goto L_801D0570; } // 801D0520
  c->r[6]=R16(c->r[5]+0x00000002u); // 801D0524
  c->r[0]=c->r[5]+c->r[0]; // 801D0528
  c->r[8]=0u+0x00000000u; // 801D052C
  c->r[7]=c->r[0]+c->r[6]; // 801D0530
  c->r[6]=c->r[5]+c->r[6]; // 801D0534
  c->r[7]=c->r[7]+0x00000007u; // 801D0538
  c->r[9]=c->r[6]+0x00000017u; // 801D053C
  goto L_801D0558; // 801D0540
L_801D0544:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D0544
  c->r[8]=c->r[8]+0x00000001u; // 801D0548
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801D054C
  W8(c->r[9]+0x00000000u,c->r[0]); // 801D0550
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 801D0554
L_801D0558:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 801D0558
  c->r[6]=rotl(c->r[8],0)&0x0000FFFFu; // 801D055C
  cmpu(c,0,c->r[6],c->r[0]); // 801D0560
  if (crb(c,0)) { IRQCHK(c); goto L_801D0544; } // 801D0564
  c->r[0]=0u+0x00000010u; // 801D0568
  W16(c->r[5]+0x00000004u,c->r[0]); // 801D056C
L_801D0570:;
  c->r[0]=0u-c->r[4]; // 801D0570
  c->r[6]=R16(c->r[5]+0x00000004u); // 801D0574
  c->r[0]=c->r[0]|c->r[4]; // 801D0578
  c->r[4]=c->r[6]+0xFFFFFFFEu; // 801D057C
  c->r[0]=sraw(c,c->r[0],31); // 801D0580
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D0584
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 801D0588
  c->r[4]=0u+0x00000000u; // 801D058C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801D0590
  c->r[6]=c->r[5]+c->r[6]; // 801D0594
  c->r[0]=c->r[0]|0x00000021u; // 801D0598
  W8(c->r[6]+0x00000008u,c->r[0]); // 801D059C
  c->r[0]=R16(c->r[5]+0x00000002u); // 801D05A0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D05A4
  c->r[0]=c->r[0]|0x00000001u; // 801D05A8
  W8(c->r[6]+0x00000009u,c->r[0]); // 801D05AC
  c->r[6]=R16(c->r[5]+0x00000002u); // 801D05B0
  c->r[0]=c->r[6]+0x00000002u; // 801D05B4
  W16(c->r[5]+0x00000002u,c->r[0]); // 801D05B8
  f_801CFEA4(c); return; // 801D05BC
}

// rfc_send_credit
void f_801D05C0(Ctx* __restrict c) {
  trace_call(0x801D05C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D05C0
  c->r[0]=c->lr; // 801D05C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D05C8
  c->r[11]=c->r[1]+0x00000020u; // 801D05CC
  c->lr=0x801D05D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D05D0
  c->r[0]=R8(c->r[3]+0x0000006Du); // 801D05D4
  c->r[27]=c->r[3]|c->r[3]; // 801D05D8
  c->r[28]=c->r[4]|c->r[4]; // 801D05DC
  c->r[29]=c->r[5]|c->r[5]; // 801D05E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D05E4
  c->r[0]=0u+0x00000001u; // 801D05E8
  if (!crb(c,2)) { goto L_801D05F4; } // 801D05EC
  c->r[0]=0u+0x00000000u; // 801D05F0
L_801D05F4:;
  c->r[30]=rotl(c->r[0],1)&0x000000FEu; // 801D05F4
  c->r[3]=0u+0x00000002u; // 801D05F8
  c->lr=0x801D0600u; f_801AA140(c); // 801D05FC
  cmps(c,0,(int32_t)c->r[3],0); // 801D0600
  c->r[31]=c->r[3]|c->r[3]; // 801D0604
  if (crb(c,2)) { goto L_801D0668; } // 801D0608
  c->r[5]=0u+0x00000009u; // 801D060C
  c->r[4]=c->r[30]|0x00000001u; // 801D0610
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 801D0614
  W16(c->r[3]+0x00000004u,c->r[5]); // 801D0618
  c->r[0]=c->r[4]|c->r[0]; // 801D061C
  c->r[4]=0u+0x000000FFu; // 801D0620
  W8(c->r[3]+0x00000011u,c->r[0]); // 801D0624
  c->r[0]=0u+0x00000001u; // 801D0628
  c->r[30]=c->r[31]+0x00000015u; // 801D062C
  W8(c->r[3]+0x00000012u,c->r[4]); // 801D0630
  W8(c->r[3]+0x00000013u,c->r[0]); // 801D0634
  W8(c->r[3]+0x00000014u,c->r[29]); // 801D0638
  c->r[3]=0u+0x00000002u; // 801D063C
  c->r[0]=R16(c->r[31]+0x00000004u); // 801D0640
  c->r[4]=c->r[31]+c->r[0]; // 801D0644
  c->r[4]=c->r[4]+0x00000008u; // 801D0648
  c->lr=0x801D0650u; f_801D1218(c); // 801D064C
  W8(c->r[30]+0x00000000u,c->r[3]); // 801D0650
  c->r[0]=0u+0x00000005u; // 801D0654
  c->r[3]=c->r[27]|c->r[27]; // 801D0658
  c->r[4]=c->r[31]|c->r[31]; // 801D065C
  W16(c->r[31]+0x00000002u,c->r[0]); // 801D0660
  c->lr=0x801D0668u; f_801D1994(c); // 801D0664
L_801D0668:;
  c->r[11]=c->r[1]+0x00000020u; // 801D0668
  c->lr=0x801D0670u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D066C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0670
  c->lr=c->r[0]; // 801D0674
  c->r[1]=c->r[1]+0x00000020u; // 801D0678
  return; // 801D067C
}

// rfc_parse_data
void f_801D0680(Ctx* __restrict c) {
  trace_call(0x801D0680u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0680
  c->r[0]=c->lr; // 801D0684
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0688
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D068C
  c->r[31]=0u+0x80330000u; // 801D0690
  c->r[31]=c->r[31]+0x000064A0u; // 801D0694
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0698
  c->r[30]=c->r[4]|c->r[4]; // 801D069C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D06A0
  c->r[29]=c->r[3]|c->r[3]; // 801D06A4
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D06A8
  c->r[8]=R16(c->r[5]+0x00000002u); // 801D06AC
  c->r[6]=c->r[5]+c->r[0]; // 801D06B0
  c->r[7]=c->r[6]+0x00000008u; // 801D06B4
  cmpu(c,0,c->r[8],0x00000003u); // 801D06B8
  c->r[0]=c->r[7]|c->r[7]; // 801D06BC
  if (!crb(c,0)) { goto L_801D06F0; } // 801D06C0
  c->r[3]=0u+0x803D0000u; // 801D06C4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D06C8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D06CC
  cmpu(c,0,c->r[0],0x00000001u); // 801D06D0
  if (crb(c,0)) { goto L_801D06E8; } // 801D06D4
  c->r[5]=c->r[8]|c->r[8]; // 801D06D8
  c->r[4]=c->r[31]+0x00000000u; // 801D06DC
  c->r[3]=0u+0x00090000u; // 801D06E0
  c->lr=0x801D06E8u; f_801ACB38(c); // 801D06E4
L_801D06E8:;
  c->r[3]=0u+0x00000032u; // 801D06E8
  goto L_801D0BD8; // 801D06EC
L_801D06F0:;
  c->r[8]=R8(c->r[7]+0x00000000u); // 801D06F0
  c->r[6]=rotl(c->r[8],0)&0x00000002u; // 801D06F4
  c->r[9]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[9]); // 801D06F8
  c->r[6]=sraw(c,c->r[6],1); // 801D06FC
  W8(c->r[4]+0x00000002u,c->r[6]); // 801D0700
  c->r[6]=R8(c->r[7]+0x00000000u); // 801D0704
  c->r[7]=c->r[7]+0x00000001u; // 801D0708
  c->r[8]=sraw(c,c->r[6],2); // 801D070C
  W8(c->r[4]+0x00000000u,c->r[8]); // 801D0710
  if (!crb(c,2)) { goto L_801D0730; } // 801D0714
  c->r[6]=R8(c->r[7]+0x00000000u); // 801D0718
  c->r[8]=rotl(c->r[8],0)&0x000000FFu; // 801D071C
  c->r[7]=c->r[7]+0x00000001u; // 801D0720
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 801D0724
  c->r[6]=c->r[8]+c->r[6]; // 801D0728
  W8(c->r[4]+0x00000000u,c->r[6]); // 801D072C
L_801D0730:;
  c->r[6]=R8(c->r[7]+0x00000000u); // 801D0730
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFEFu; // 801D0734
  W8(c->r[4]+0x00000001u,c->r[6]); // 801D0738
  c->r[6]=R8(c->r[7]+0x00000000u); // 801D073C
  c->r[6]=rotl(c->r[6],0)&0x00000010u; // 801D0740
  c->r[6]=sraw(c,c->r[6],4); // 801D0744
  W8(c->r[4]+0x00000004u,c->r[6]); // 801D0748
  c->r[6]=R8(c->r[7]+0x00000001u); // 801D074C
  c->r[7]=c->r[7]+0x00000002u; // 801D0750
  c->r[10]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[10]); // 801D0754
  c->r[8]=sraw(c,c->r[6],1); // 801D0758
  if (!crb(c,2)) { goto L_801D0774; } // 801D075C
  c->r[6]=R8(c->r[7]+0x00000000u); // 801D0760
  c->r[7]=c->r[7]+0x00000001u; // 801D0764
  c->r[6]=rotl(c->r[6],7)&0xFFFFFF80u; // 801D0768
  c->r[6]=c->r[8]+c->r[6]; // 801D076C
  c->r[8]=rotl(c->r[6],0)&0x0000FFFFu; // 801D0770
L_801D0774:;
  c->r[6]=cntlz(c->r[10]); // 801D0774
  c->r[9]=cntlz(c->r[9]); // 801D0778
  c->r[11]=rotl(c->r[6],27)&0x07FFFFFFu; // 801D077C
  c->r[6]=R16(c->r[5]+0x00000004u); // 801D0780
  c->r[10]=rotl(c->r[9],27)&0x07FFFFFFu; // 801D0784
  c->r[9]=R16(c->r[5]+0x00000002u); // 801D0788
  c->r[11]=c->r[10]+c->r[11]; // 801D078C
  c->r[10]=c->r[11]+0x00000004u; // 801D0790
  c->r[6]=c->r[11]+c->r[6]; // 801D0794
  c->r[9]=c->r[9]-c->r[10]; // 801D0798
  c->r[6]=c->r[6]+0x00000003u; // 801D079C
  W16(c->r[5]+0x00000002u,c->r[9]); // 801D07A0
  W16(c->r[5]+0x00000004u,c->r[6]); // 801D07A4
  c->r[6]=R8(c->r[3]+0x00000072u); // 801D07A8
  cmpu(c,0,c->r[6],0x00000002u); // 801D07AC
  if (!crb(c,2)) { goto L_801D0800; } // 801D07B0
  c->r[6]=R8(c->r[4]+0x00000001u); // 801D07B4
  cmpu(c,0,c->r[6],0x000000EFu); // 801D07B8
  if (!crb(c,2)) { goto L_801D0800; } // 801D07BC
  c->r[6]=R8(c->r[4]+0x00000000u); // 801D07C0
  cmps(c,0,(int32_t)c->r[6],0); // 801D07C4
  if (crb(c,2)) { goto L_801D0800; } // 801D07C8
  c->r[6]=R8(c->r[4]+0x00000004u); // 801D07CC
  cmpu(c,0,c->r[6],0x00000001u); // 801D07D0
  if (!crb(c,2)) { goto L_801D0800; } // 801D07D4
  c->r[6]=R8(c->r[7]+0x00000000u); // 801D07D8
  c->r[7]=c->r[7]+0x00000001u; // 801D07DC
  W8(c->r[4]+0x00000005u,c->r[6]); // 801D07E0
  c->r[9]=R16(c->r[5]+0x00000002u); // 801D07E4
  c->r[6]=R16(c->r[5]+0x00000004u); // 801D07E8
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 801D07EC
  c->r[6]=c->r[6]+0x00000001u; // 801D07F0
  W16(c->r[5]+0x00000002u,c->r[9]); // 801D07F4
  W16(c->r[5]+0x00000004u,c->r[6]); // 801D07F8
  goto L_801D0808; // 801D07FC
L_801D0800:;
  c->r[6]=0u+0x00000000u; // 801D0800
  W8(c->r[4]+0x00000005u,c->r[6]); // 801D0804
L_801D0808:;
  c->r[5]=R16(c->r[5]+0x00000002u); // 801D0808
  c->r[6]=rotl(c->r[8],0)&0x0000FFFFu; // 801D080C
  cmpu(c,0,c->r[5],c->r[6]); // 801D0810
  if (crb(c,2)) { goto L_801D0840; } // 801D0814
  c->r[3]=0u+0x803D0000u; // 801D0818
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D081C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0820
  cmpu(c,0,c->r[0],0x00000001u); // 801D0824
  if (crb(c,0)) { goto L_801D0838; } // 801D0828
  c->r[4]=c->r[31]+0x00000010u; // 801D082C
  c->r[3]=0u+0x00090000u; // 801D0830
  c->lr=0x801D0838u; f_801ACB50(c); // 801D0834
L_801D0838:;
  c->r[3]=0u+0x00000032u; // 801D0838
  goto L_801D0BD8; // 801D083C
L_801D0840:;
  c->r[9]=R8(c->r[4]+0x00000001u); // 801D0840
  c->r[5]=R8(c->r[7]+c->r[6]); // 801D0844
  cmps(c,0,(int32_t)c->r[9],67); // 801D0848
  if (crb(c,2)) { goto L_801D0A58; } // 801D084C
  if (!crb(c,0)) { goto L_801D086C; } // 801D0850
  cmps(c,0,(int32_t)c->r[9],47); // 801D0854
  if (crb(c,2)) { goto L_801D0884; } // 801D0858
  if (!crb(c,0)) { goto L_801D0BD4; } // 801D085C
  cmps(c,0,(int32_t)c->r[9],15); // 801D0860
  if (crb(c,2)) { goto L_801D09C4; } // 801D0864
  goto L_801D0BD4; // 801D0868
L_801D086C:;
  cmps(c,0,(int32_t)c->r[9],239); // 801D086C
  if (crb(c,2)) { goto L_801D0AF8; } // 801D0870
  if (!crb(c,0)) { goto L_801D0BD4; } // 801D0874
  cmps(c,0,(int32_t)c->r[9],99); // 801D0878
  if (crb(c,2)) { goto L_801D0924; } // 801D087C
  goto L_801D0BD4; // 801D0880
L_801D0884:;
  c->r[6]=R8(c->r[3]+0x0000006Du); // 801D0884
  cmps(c,0,(int32_t)c->r[6],0); // 801D0888
  if (crb(c,2)) { goto L_801D089C; } // 801D088C
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D0890
  cmps(c,0,(int32_t)c->r[3],0); // 801D0894
  if (!crb(c,2)) { goto L_801D08F4; } // 801D0898
L_801D089C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D089C
  if (!crb(c,2)) { goto L_801D08B0; } // 801D08A0
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D08A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D08A8
  if (crb(c,2)) { goto L_801D08F4; } // 801D08AC
L_801D08B0:;
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D08B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D08B4
  if (crb(c,2)) { goto L_801D08F4; } // 801D08B8
  c->r[3]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801D08BC
  if (!crb(c,2)) { goto L_801D08F4; } // 801D08C0
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D08C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D08C8
  if (crb(c,2)) { goto L_801D08E0; } // 801D08CC
  cmpu(c,0,c->r[3],0x00000002u); // 801D08D0
  if (crb(c,0)) { goto L_801D08F4; } // 801D08D4
  cmpu(c,0,c->r[3],0x0000003Du); // 801D08D8
  if (crb(c,1)) { goto L_801D08F4; } // 801D08DC
L_801D08E0:;
  c->r[4]=c->r[0]|c->r[0]; // 801D08E0
  c->r[3]=0u+0x00000003u; // 801D08E4
  c->lr=0x801D08ECu; f_801D1250(c); // 801D08E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D08EC
  if (!crb(c,2)) { goto L_801D091C; } // 801D08F0
L_801D08F4:;
  c->r[3]=0u+0x803D0000u; // 801D08F4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D08F8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D08FC
  cmpu(c,0,c->r[0],0x00000001u); // 801D0900
  if (crb(c,0)) { goto L_801D0914; } // 801D0904
  c->r[4]=c->r[31]+0x00000024u; // 801D0908
  c->r[3]=0u+0x00090000u; // 801D090C
  c->lr=0x801D0914u; f_801ACB20(c); // 801D0910
L_801D0914:;
  c->r[3]=0u+0x00000032u; // 801D0914
  goto L_801D0BD8; // 801D0918
L_801D091C:;
  c->r[3]=0u+0x00000000u; // 801D091C
  goto L_801D0BD8; // 801D0920
L_801D0924:;
  c->r[6]=R8(c->r[3]+0x0000006Du); // 801D0924
  cmps(c,0,(int32_t)c->r[6],0); // 801D0928
  if (crb(c,2)) { goto L_801D093C; } // 801D092C
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D0930
  cmps(c,0,(int32_t)c->r[3],0); // 801D0934
  if (crb(c,2)) { goto L_801D0994; } // 801D0938
L_801D093C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D093C
  if (!crb(c,2)) { goto L_801D0950; } // 801D0940
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D0944
  cmps(c,0,(int32_t)c->r[3],0); // 801D0948
  if (!crb(c,2)) { goto L_801D0994; } // 801D094C
L_801D0950:;
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D0950
  cmps(c,0,(int32_t)c->r[3],0); // 801D0954
  if (crb(c,2)) { goto L_801D0994; } // 801D0958
  c->r[3]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801D095C
  if (!crb(c,2)) { goto L_801D0994; } // 801D0960
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D0964
  cmps(c,0,(int32_t)c->r[3],0); // 801D0968
  if (crb(c,2)) { goto L_801D0980; } // 801D096C
  cmpu(c,0,c->r[3],0x00000002u); // 801D0970
  if (crb(c,0)) { goto L_801D0994; } // 801D0974
  cmpu(c,0,c->r[3],0x0000003Du); // 801D0978
  if (crb(c,1)) { goto L_801D0994; } // 801D097C
L_801D0980:;
  c->r[4]=c->r[0]|c->r[0]; // 801D0980
  c->r[3]=0u+0x00000003u; // 801D0984
  c->lr=0x801D098Cu; f_801D1250(c); // 801D0988
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D098C
  if (!crb(c,2)) { goto L_801D09BC; } // 801D0990
L_801D0994:;
  c->r[3]=0u+0x803D0000u; // 801D0994
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0998
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D099C
  cmpu(c,0,c->r[0],0x00000001u); // 801D09A0
  if (crb(c,0)) { goto L_801D09B4; } // 801D09A4
  c->r[3]=0u+0x00090000u; // 801D09A8
  c->r[4]=c->r[13]+0xFFFF94B8u; // 801D09AC
  c->lr=0x801D09B4u; f_801ACB20(c); // 801D09B0
L_801D09B4:;
  c->r[3]=0u+0x00000032u; // 801D09B4
  goto L_801D0BD8; // 801D09B8
L_801D09BC:;
  c->r[3]=0u+0x00000001u; // 801D09BC
  goto L_801D0BD8; // 801D09C0
L_801D09C4:;
  c->r[6]=R8(c->r[3]+0x0000006Du); // 801D09C4
  cmps(c,0,(int32_t)c->r[6],0); // 801D09C8
  if (crb(c,2)) { goto L_801D09DC; } // 801D09CC
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D09D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D09D4
  if (crb(c,2)) { goto L_801D0A28; } // 801D09D8
L_801D09DC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D09DC
  if (!crb(c,2)) { goto L_801D09F0; } // 801D09E0
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D09E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D09E8
  if (!crb(c,2)) { goto L_801D0A28; } // 801D09EC
L_801D09F0:;
  c->r[3]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801D09F0
  if (!crb(c,2)) { goto L_801D0A28; } // 801D09F4
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D09F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D09FC
  if (crb(c,2)) { goto L_801D0A14; } // 801D0A00
  cmpu(c,0,c->r[3],0x00000002u); // 801D0A04
  if (crb(c,0)) { goto L_801D0A28; } // 801D0A08
  cmpu(c,0,c->r[3],0x0000003Du); // 801D0A0C
  if (crb(c,1)) { goto L_801D0A28; } // 801D0A10
L_801D0A14:;
  c->r[4]=c->r[0]|c->r[0]; // 801D0A14
  c->r[3]=0u+0x00000003u; // 801D0A18
  c->lr=0x801D0A20u; f_801D1250(c); // 801D0A1C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D0A20
  if (!crb(c,2)) { goto L_801D0A50; } // 801D0A24
L_801D0A28:;
  c->r[3]=0u+0x803D0000u; // 801D0A28
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0A2C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0A30
  cmpu(c,0,c->r[0],0x00000001u); // 801D0A34
  if (crb(c,0)) { goto L_801D0A48; } // 801D0A38
  c->r[3]=0u+0x00090000u; // 801D0A3C
  c->r[4]=c->r[13]+0xFFFF94C0u; // 801D0A40
  c->lr=0x801D0A48u; f_801ACB20(c); // 801D0A44
L_801D0A48:;
  c->r[3]=0u+0x00000032u; // 801D0A48
  goto L_801D0BD8; // 801D0A4C
L_801D0A50:;
  c->r[3]=0u+0x00000002u; // 801D0A50
  goto L_801D0BD8; // 801D0A54
L_801D0A58:;
  c->r[6]=R8(c->r[3]+0x0000006Du); // 801D0A58
  cmps(c,0,(int32_t)c->r[6],0); // 801D0A5C
  if (crb(c,2)) { goto L_801D0A70; } // 801D0A60
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D0A64
  cmps(c,0,(int32_t)c->r[3],0); // 801D0A68
  if (!crb(c,2)) { goto L_801D0AC8; } // 801D0A6C
L_801D0A70:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D0A70
  if (!crb(c,2)) { goto L_801D0A84; } // 801D0A74
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D0A78
  cmps(c,0,(int32_t)c->r[3],0); // 801D0A7C
  if (crb(c,2)) { goto L_801D0AC8; } // 801D0A80
L_801D0A84:;
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D0A84
  cmps(c,0,(int32_t)c->r[3],0); // 801D0A88
  if (crb(c,2)) { goto L_801D0AC8; } // 801D0A8C
  c->r[3]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801D0A90
  if (!crb(c,2)) { goto L_801D0AC8; } // 801D0A94
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D0A98
  cmps(c,0,(int32_t)c->r[3],0); // 801D0A9C
  if (crb(c,2)) { goto L_801D0AB4; } // 801D0AA0
  cmpu(c,0,c->r[3],0x00000002u); // 801D0AA4
  if (crb(c,0)) { goto L_801D0AC8; } // 801D0AA8
  cmpu(c,0,c->r[3],0x0000003Du); // 801D0AAC
  if (crb(c,1)) { goto L_801D0AC8; } // 801D0AB0
L_801D0AB4:;
  c->r[4]=c->r[0]|c->r[0]; // 801D0AB4
  c->r[3]=0u+0x00000003u; // 801D0AB8
  c->lr=0x801D0AC0u; f_801D1250(c); // 801D0ABC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D0AC0
  if (!crb(c,2)) { goto L_801D0AF0; } // 801D0AC4
L_801D0AC8:;
  c->r[3]=0u+0x803D0000u; // 801D0AC8
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0ACC
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0AD0
  cmpu(c,0,c->r[0],0x00000001u); // 801D0AD4
  if (crb(c,0)) { goto L_801D0AE8; } // 801D0AD8
  c->r[4]=c->r[31]+0x00000030u; // 801D0ADC
  c->r[3]=0u+0x00090000u; // 801D0AE0
  c->lr=0x801D0AE8u; f_801ACB20(c); // 801D0AE4
L_801D0AE8:;
  c->r[3]=0u+0x00000032u; // 801D0AE8
  goto L_801D0BD8; // 801D0AEC
L_801D0AF0:;
  c->r[3]=0u+0x00000003u; // 801D0AF0
  goto L_801D0BD8; // 801D0AF4
L_801D0AF8:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D0AF8
  cmps(c,0,(int32_t)c->r[3],0); // 801D0AFC
  if (crb(c,2)) { goto L_801D0B3C; } // 801D0B00
  cmpu(c,0,c->r[3],0x00000002u); // 801D0B04
  if (crb(c,0)) { goto L_801D0B14; } // 801D0B08
  cmpu(c,0,c->r[3],0x0000003Du); // 801D0B0C
  if (!crb(c,1)) { goto L_801D0B3C; } // 801D0B10
L_801D0B14:;
  c->r[3]=0u+0x803D0000u; // 801D0B14
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0B18
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0B1C
  cmpu(c,0,c->r[0],0x00000001u); // 801D0B20
  if (crb(c,0)) { goto L_801D0B34; } // 801D0B24
  c->r[4]=c->r[31]+0x0000003Cu; // 801D0B28
  c->r[3]=0u+0x00090000u; // 801D0B2C
  c->lr=0x801D0B34u; f_801ACB20(c); // 801D0B30
L_801D0B34:;
  c->r[3]=0u+0x00000032u; // 801D0B34
  goto L_801D0BD8; // 801D0B38
L_801D0B3C:;
  c->r[4]=c->r[0]|c->r[0]; // 801D0B3C
  c->r[3]=0u+0x00000002u; // 801D0B40
  c->lr=0x801D0B48u; f_801D1250(c); // 801D0B44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D0B48
  if (!crb(c,2)) { goto L_801D0B78; } // 801D0B4C
  c->r[3]=0u+0x803D0000u; // 801D0B50
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0B54
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0B58
  cmpu(c,0,c->r[0],0x00000001u); // 801D0B5C
  if (crb(c,0)) { goto L_801D0B70; } // 801D0B60
  c->r[4]=c->r[31]+0x00000054u; // 801D0B64
  c->r[3]=0u+0x00090000u; // 801D0B68
  c->lr=0x801D0B70u; f_801ACB20(c); // 801D0B6C
L_801D0B70:;
  c->r[3]=0u+0x00000032u; // 801D0B70
  goto L_801D0BD8; // 801D0B74
L_801D0B78:;
  c->r[3]=R8(c->r[29]+0x0000006Du); // 801D0B78
  cmps(c,0,(int32_t)c->r[3],0); // 801D0B7C
  if (crb(c,2)) { goto L_801D0B90; } // 801D0B80
  c->r[0]=R8(c->r[30]+0x00000002u); // 801D0B84
  cmps(c,0,(int32_t)c->r[0],0); // 801D0B88
  if (!crb(c,2)) { goto L_801D0BA4; } // 801D0B8C
L_801D0B90:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0B90
  if (!crb(c,2)) { goto L_801D0BCC; } // 801D0B94
  c->r[0]=R8(c->r[30]+0x00000002u); // 801D0B98
  cmps(c,0,(int32_t)c->r[0],0); // 801D0B9C
  if (!crb(c,2)) { goto L_801D0BCC; } // 801D0BA0
L_801D0BA4:;
  c->r[3]=0u+0x803D0000u; // 801D0BA4
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0BA8
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0BAC
  cmpu(c,0,c->r[0],0x00000001u); // 801D0BB0
  if (crb(c,0)) { goto L_801D0BC4; } // 801D0BB4
  c->r[4]=c->r[31]+0x00000064u; // 801D0BB8
  c->r[3]=0u+0x00090000u; // 801D0BBC
  c->lr=0x801D0BC4u; f_801ACB20(c); // 801D0BC0
L_801D0BC4:;
  c->r[3]=0u+0x00000004u; // 801D0BC4
  goto L_801D0BD8; // 801D0BC8
L_801D0BCC:;
  c->r[3]=0u+0x00000004u; // 801D0BCC
  goto L_801D0BD8; // 801D0BD0
L_801D0BD4:;
  c->r[3]=0u+0x00000032u; // 801D0BD4
L_801D0BD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0BD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0BDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0BE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0BE4
  c->lr=c->r[0]; // 801D0BE8
  c->r[1]=c->r[1]+0x00000020u; // 801D0BEC
  return; // 801D0BF0
}

// rfc_process_mx_message
void f_801D0BF4(Ctx* __restrict c) {
  trace_call(0x801D0BF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0BF4
  c->r[0]=c->lr; // 801D0BF8
  c->r[7]=0u+0x80330000u; // 801D0BFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0C00
  c->r[7]=c->r[7]+0x000064A0u; // 801D0C04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0C08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0C0C
  c->r[30]=0u+0x803D0000u; // 801D0C10
  c->r[30]=c->r[30]+0xFFFFB9C8u; // 801D0C14
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0C18
  c->r[29]=c->r[4]|c->r[4]; // 801D0C1C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D0C20
  c->r[28]=c->r[3]|c->r[3]; // 801D0C24
  c->r[0]=R16(c->r[4]+0x00000004u); // 801D0C28
  c->r[6]=R16(c->r[4]+0x00000002u); // 801D0C2C
  c->r[5]=c->r[4]+c->r[0]; // 801D0C30
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D0C34
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D0C38
  W8(c->r[30]+0x00000003u,c->r[0]); // 801D0C3C
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D0C40
  c->r[31]=rotl(c->r[0],31)&0x00000001u; // 801D0C44
  W8(c->r[30]+0x00000002u,c->r[31]); // 801D0C48
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D0C4C
  c->r[0]=rotl(c->r[0],0)&0x000000FCu; // 801D0C50
  W8(c->r[30]+0x00000001u,c->r[0]); // 801D0C54
  if (crb(c,2)) { goto L_801D0C64; } // 801D0C58
  cmps(c,0,(int32_t)c->r[6],0); // 801D0C5C
  if (!crb(c,2)) { goto L_801D0C94; } // 801D0C60
L_801D0C64:;
  c->r[3]=0u+0x803D0000u; // 801D0C64
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0C68
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0C6C
  cmpu(c,0,c->r[0],0x00000001u); // 801D0C70
  if (crb(c,0)) { goto L_801D0C88; } // 801D0C74
  c->r[5]=R8(c->r[30]+0x00000003u); // 801D0C78
  c->r[4]=c->r[7]+0x00000078u; // 801D0C7C
  c->r[3]=0u+0x00090000u; // 801D0C80
  c->lr=0x801D0C88u; f_801ACB50(c); // 801D0C84
L_801D0C88:;
  c->r[3]=c->r[29]|c->r[29]; // 801D0C88
  c->lr=0x801D0C90u; f_801AA228(c); // 801D0C8C
  goto L_801D11F8; // 801D0C90
L_801D0C94:;
  c->r[3]=R8(c->r[5]+0x00000009u); // 801D0C94
  c->r[6]=c->r[6]+0x00010000u; // 801D0C98
  c->r[5]=c->r[5]+0x0000000Au; // 801D0C9C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801D0CA0
  c->r[8]=sraw(c,c->r[3],1); // 801D0CA4
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 801D0CA8
  if (!crb(c,2)) { goto L_801D0CC8; } // 801D0CAC
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D0CB0
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801D0CB4
  c->r[5]=c->r[5]+0x00000001u; // 801D0CB8
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 801D0CBC
  c->r[0]=c->r[8]+c->r[0]; // 801D0CC0
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 801D0CC4
L_801D0CC8:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801D0CC8
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 801D0CCC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D0CD0
  if (crb(c,2)) { goto L_801D0D04; } // 801D0CD4
  c->r[3]=0u+0x803D0000u; // 801D0CD8
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0CDC
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0CE0
  cmpu(c,0,c->r[0],0x00000001u); // 801D0CE4
  if (crb(c,0)) { goto L_801D0CF8; } // 801D0CE8
  c->r[4]=c->r[7]+0x00000098u; // 801D0CEC
  c->r[3]=0u+0x00090000u; // 801D0CF0
  c->lr=0x801D0CF8u; f_801ACB20(c); // 801D0CF4
L_801D0CF8:;
  c->r[3]=c->r[29]|c->r[29]; // 801D0CF8
  c->lr=0x801D0D00u; f_801AA228(c); // 801D0CFC
  goto L_801D11F8; // 801D0D00
L_801D0D04:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D0D04
  cmps(c,0,(int32_t)c->r[0],128); // 801D0D08
  if (crb(c,2)) { goto L_801D0D68; } // 801D0D0C
  if (!crb(c,0)) { goto L_801D0D44; } // 801D0D10
  cmps(c,0,(int32_t)c->r[0],80); // 801D0D14
  if (crb(c,2)) { goto L_801D10F4; } // 801D0D18
  if (!crb(c,0)) { goto L_801D0D38; } // 801D0D1C
  cmps(c,0,(int32_t)c->r[0],32); // 801D0D20
  if (crb(c,2)) { goto L_801D0E3C; } // 801D0D24
  if (!crb(c,0)) { goto L_801D1188; } // 801D0D28
  cmps(c,0,(int32_t)c->r[0],16); // 801D0D2C
  if (crb(c,2)) { goto L_801D0F8C; } // 801D0D30
  goto L_801D1188; // 801D0D34
L_801D0D38:;
  cmps(c,0,(int32_t)c->r[0],96); // 801D0D38
  if (crb(c,2)) { goto L_801D0EB0; } // 801D0D3C
  goto L_801D1188; // 801D0D40
L_801D0D44:;
  cmps(c,0,(int32_t)c->r[0],160); // 801D0D44
  if (crb(c,2)) { goto L_801D0E90; } // 801D0D48
  if (!crb(c,0)) { goto L_801D0D5C; } // 801D0D4C
  cmps(c,0,(int32_t)c->r[0],144); // 801D0D50
  if (crb(c,2)) { goto L_801D0FDC; } // 801D0D54
  goto L_801D1188; // 801D0D58
L_801D0D5C:;
  cmps(c,0,(int32_t)c->r[0],224); // 801D0D5C
  if (crb(c,2)) { goto L_801D0ED0; } // 801D0D60
  goto L_801D1188; // 801D0D64
L_801D0D68:;
  cmpu(c,0,c->r[3],0x00000008u); // 801D0D68
  if (!crb(c,2)) { goto L_801D1188; } // 801D0D6C
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D0D70
  c->r[4]=rotl(c->r[0],0)&0x0000003Fu; cr0(c,c->r[4]); // 801D0D74
  W8(c->r[30]+0x00000000u,c->r[4]); // 801D0D78
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D0D7C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801D0D80
  W8(c->r[30]+0x00000009u,c->r[0]); // 801D0D84
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D0D88
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 801D0D8C
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D0D90
  c->r[0]=R8(c->r[5]+0x00000002u); // 801D0D94
  c->r[0]=rotl(c->r[0],0)&0x0000003Fu; // 801D0D98
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801D0D9C
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D0DA0
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801D0DA4
  c->r[0]=R8(c->r[5]+0x00000005u); // 801D0DA8
  c->r[3]=R8(c->r[5]+0x00000004u); // 801D0DAC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D0DB0
  c->r[0]=c->r[3]+c->r[0]; // 801D0DB4
  W16(c->r[30]+0x0000000Eu,c->r[0]); // 801D0DB8
  c->r[0]=R8(c->r[5]+0x00000006u); // 801D0DBC
  W8(c->r[30]+0x00000010u,c->r[0]); // 801D0DC0
  c->r[0]=R8(c->r[5]+0x00000007u); // 801D0DC4
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801D0DC8
  W8(c->r[30]+0x00000011u,c->r[0]); // 801D0DCC
  if (crb(c,2)) { goto L_801D0DFC; } // 801D0DD0
  if (crb(c,2)) { goto L_801D0DE8; } // 801D0DD4
  cmpu(c,0,c->r[4],0x00000002u); // 801D0DD8
  if (crb(c,0)) { goto L_801D0DFC; } // 801D0DDC
  cmpu(c,0,c->r[4],0x0000003Du); // 801D0DE0
  if (crb(c,1)) { goto L_801D0DFC; } // 801D0DE4
L_801D0DE8:;
  c->r[0]=R16(c->r[30]+0x0000000Eu); // 801D0DE8
  cmpu(c,0,c->r[0],0x00000017u); // 801D0DEC
  if (crb(c,0)) { goto L_801D0DFC; } // 801D0DF0
  cmpu(c,0,c->r[0],0x00007FFFu); // 801D0DF4
  if (!crb(c,1)) { goto L_801D0E20; } // 801D0DF8
L_801D0DFC:;
  c->r[3]=0u+0x803D0000u; // 801D0DFC
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0E00
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0E04
  cmpu(c,0,c->r[0],0x00000001u); // 801D0E08
  if (crb(c,0)) { goto L_801D1188; } // 801D0E0C
  c->r[4]=c->r[7]+0x000000A8u; // 801D0E10
  c->r[3]=0u+0x00090000u; // 801D0E14
  c->lr=0x801D0E1Cu; f_801ACB20(c); // 801D0E18
  goto L_801D1188; // 801D0E1C
L_801D0E20:;
  c->r[3]=c->r[29]|c->r[29]; // 801D0E20
  c->lr=0x801D0E28u; f_801AA228(c); // 801D0E24
  c->r[3]=c->r[28]|c->r[28]; // 801D0E28
  c->r[4]=c->r[31]|c->r[31]; // 801D0E2C
  c->r[5]=c->r[30]|c->r[30]; // 801D0E30
  c->lr=0x801D0E38u; f_801CEEB8(c); // 801D0E34
  goto L_801D11F8; // 801D0E38
L_801D0E3C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0E3C
  if (crb(c,2)) { goto L_801D1188; } // 801D0E40
  W32(c->r[30]+0x00000008u,c->r[5]); // 801D0E44
  cmps(c,0,(int32_t)c->r[31],0); // 801D0E48
  W16(c->r[30]+0x0000000Cu,c->r[6]); // 801D0E4C
  c->r[5]=R16(c->r[4]+0x00000004u); // 801D0E50
  c->r[3]=R16(c->r[4]+0x00000002u); // 801D0E54
  c->r[5]=c->r[5]+0x00000002u; // 801D0E58
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D0E5C
  W16(c->r[4]+0x00000004u,c->r[5]); // 801D0E60
  W16(c->r[4]+0x00000002u,c->r[0]); // 801D0E64
  if (crb(c,2)) { goto L_801D0E80; } // 801D0E68
  c->r[3]=c->r[28]|c->r[28]; // 801D0E6C
  c->r[5]=c->r[29]|c->r[29]; // 801D0E70
  c->r[4]=0u+0x00000000u; // 801D0E74
  c->lr=0x801D0E7Cu; f_801D0518(c); // 801D0E78
  goto L_801D11F8; // 801D0E7C
L_801D0E80:;
  c->r[3]=c->r[28]|c->r[28]; // 801D0E80
  c->r[4]=c->r[29]|c->r[29]; // 801D0E84
  c->lr=0x801D0E8Cu; f_801CF4A8(c); // 801D0E88
  goto L_801D11F8; // 801D0E8C
L_801D0E90:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0E90
  if (!crb(c,2)) { goto L_801D1188; } // 801D0E94
  c->r[3]=c->r[29]|c->r[29]; // 801D0E98
  c->lr=0x801D0EA0u; f_801AA228(c); // 801D0E9C
  c->r[3]=c->r[28]|c->r[28]; // 801D0EA0
  c->r[4]=c->r[31]|c->r[31]; // 801D0EA4
  c->lr=0x801D0EACu; f_801CF4B0(c); // 801D0EA8
  goto L_801D11F8; // 801D0EAC
L_801D0EB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0EB0
  if (!crb(c,2)) { goto L_801D1188; } // 801D0EB4
  c->r[3]=c->r[29]|c->r[29]; // 801D0EB8
  c->lr=0x801D0EC0u; f_801AA228(c); // 801D0EBC
  c->r[3]=c->r[28]|c->r[28]; // 801D0EC0
  c->r[4]=c->r[31]|c->r[31]; // 801D0EC4
  c->lr=0x801D0ECCu; f_801CF514(c); // 801D0EC8
  goto L_801D11F8; // 801D0ECC
L_801D0ED0:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801D0ED0
  c->r[3]=rotl(c->r[4],0)&0x00000002u; // 801D0ED4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801D0ED8
  c->r[0]=sraw(c,c->r[3],1); // 801D0EDC
  c->r[3]=sraw(c,c->r[4],2); // 801D0EE0
  W8(c->r[30]+0x00000000u,c->r[3]); // 801D0EE4
  if (crb(c,2)) { goto L_801D0F10; } // 801D0EE8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801D0EEC
  if (crb(c,2)) { goto L_801D0F10; } // 801D0EF0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D0EF4
  if (crb(c,2)) { goto L_801D0F10; } // 801D0EF8
  if (crb(c,2)) { goto L_801D0F34; } // 801D0EFC
  cmpu(c,0,c->r[0],0x00000002u); // 801D0F00
  if (crb(c,0)) { goto L_801D0F10; } // 801D0F04
  cmpu(c,0,c->r[0],0x0000003Du); // 801D0F08
  if (!crb(c,1)) { goto L_801D0F34; } // 801D0F0C
L_801D0F10:;
  c->r[3]=0u+0x803D0000u; // 801D0F10
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D0F14
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D0F18
  cmpu(c,0,c->r[0],0x00000001u); // 801D0F1C
  if (crb(c,0)) { goto L_801D1188; } // 801D0F20
  c->r[4]=c->r[7]+0x000000B8u; // 801D0F24
  c->r[3]=0u+0x00090000u; // 801D0F28
  c->lr=0x801D0F30u; f_801ACB20(c); // 801D0F2C
  goto L_801D1188; // 801D0F30
L_801D0F34:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801D0F34
  c->r[3]=R8(c->r[5]+0x00000001u); // 801D0F38
  cmpu(c,0,c->r[0],0x00000003u); // 801D0F3C
  W8(c->r[30]+0x00000009u,c->r[3]); // 801D0F40
  if (!crb(c,2)) { goto L_801D0F64; } // 801D0F44
  c->r[0]=R8(c->r[5]+0x00000002u); // 801D0F48
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801D0F4C
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D0F50
  c->r[0]=R8(c->r[5]+0x00000002u); // 801D0F54
  c->r[0]=rotl(c->r[0],28)&0x0000000Fu; // 801D0F58
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801D0F5C
  goto L_801D0F70; // 801D0F60
L_801D0F64:;
  c->r[0]=0u+0x00000000u; // 801D0F64
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D0F68
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801D0F6C
L_801D0F70:;
  c->r[3]=c->r[29]|c->r[29]; // 801D0F70
  c->lr=0x801D0F78u; f_801AA228(c); // 801D0F74
  c->r[3]=c->r[28]|c->r[28]; // 801D0F78
  c->r[4]=c->r[31]|c->r[31]; // 801D0F7C
  c->r[5]=c->r[30]|c->r[30]; // 801D0F80
  c->lr=0x801D0F88u; f_801CF2AC(c); // 801D0F84
  goto L_801D11F8; // 801D0F88
L_801D0F8C:;
  cmpu(c,0,c->r[3],0x00000001u); // 801D0F8C
  if (!crb(c,2)) { goto L_801D1188; } // 801D0F90
  cmps(c,0,(int32_t)c->r[31],0); // 801D0F94
  if (crb(c,2)) { goto L_801D1188; } // 801D0F98
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D0F9C
  c->r[3]=c->r[29]|c->r[29]; // 801D0FA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D0FA4
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D0FA8
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D0FAC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801D0FB0
  c->r[0]=sraw(c,c->r[0],1); // 801D0FB4
  W8(c->r[30]+0x00000009u,c->r[0]); // 801D0FB8
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D0FBC
  c->r[0]=sraw(c,c->r[0],2); // 801D0FC0
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D0FC4
  c->lr=0x801D0FCCu; f_801AA228(c); // 801D0FC8
  c->r[3]=c->r[28]|c->r[28]; // 801D0FCC
  c->r[4]=c->r[30]|c->r[30]; // 801D0FD0
  c->lr=0x801D0FD8u; f_801CF4A4(c); // 801D0FD4
  goto L_801D11F8; // 801D0FD8
L_801D0FDC:;
  cmpu(c,0,c->r[3],0x00000001u); // 801D0FDC
  if (crb(c,2)) { goto L_801D0FEC; } // 801D0FE0
  cmpu(c,0,c->r[3],0x00000008u); // 801D0FE4
  if (!crb(c,2)) { goto L_801D1188; } // 801D0FE8
L_801D0FEC:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801D0FEC
  c->r[3]=rotl(c->r[4],0)&0x00000002u; // 801D0FF0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801D0FF4
  c->r[0]=sraw(c,c->r[3],1); // 801D0FF8
  c->r[3]=sraw(c,c->r[4],2); // 801D0FFC
  W8(c->r[30]+0x00000000u,c->r[3]); // 801D1000
  if (crb(c,2)) { goto L_801D102C; } // 801D1004
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1008
  if (crb(c,2)) { goto L_801D102C; } // 801D100C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1010
  if (crb(c,2)) { goto L_801D102C; } // 801D1014
  if (crb(c,2)) { goto L_801D1050; } // 801D1018
  cmpu(c,0,c->r[0],0x00000002u); // 801D101C
  if (crb(c,0)) { goto L_801D102C; } // 801D1020
  cmpu(c,0,c->r[0],0x0000003Du); // 801D1024
  if (!crb(c,1)) { goto L_801D1050; } // 801D1028
L_801D102C:;
  c->r[3]=0u+0x803D0000u; // 801D102C
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D1030
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D1034
  cmpu(c,0,c->r[0],0x00000001u); // 801D1038
  if (crb(c,0)) { goto L_801D1188; } // 801D103C
  c->r[4]=c->r[7]+0x000000C8u; // 801D1040
  c->r[3]=0u+0x00090000u; // 801D1044
  c->lr=0x801D104Cu; f_801ACB20(c); // 801D1048
  goto L_801D1188; // 801D104C
L_801D1050:;
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 801D1050
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D1054
  c->r[0]=cntlz(c->r[0]); // 801D1058
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; cr0(c,c->r[0]); // 801D105C
  W8(c->r[30]+0x00000009u,c->r[0]); // 801D1060
  if (!crb(c,2)) { goto L_801D10D4; } // 801D1064
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D1068
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D106C
  c->r[0]=R8(c->r[5]+0x00000002u); // 801D1070
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 801D1074
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801D1078
  c->r[0]=R8(c->r[5]+0x00000002u); // 801D107C
  c->r[0]=rotl(c->r[0],30)&0x00000001u; // 801D1080
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801D1084
  c->r[0]=R8(c->r[5]+0x00000002u); // 801D1088
  c->r[0]=rotl(c->r[0],29)&0x00000001u; // 801D108C
  W8(c->r[30]+0x0000000Du,c->r[0]); // 801D1090
  c->r[0]=R8(c->r[5]+0x00000002u); // 801D1094
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 801D1098
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801D109C
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D10A0
  c->r[0]=rotl(c->r[0],0)&0x0000003Fu; // 801D10A4
  W8(c->r[30]+0x0000000Fu,c->r[0]); // 801D10A8
  c->r[0]=R8(c->r[5]+0x00000004u); // 801D10AC
  W8(c->r[30]+0x00000010u,c->r[0]); // 801D10B0
  c->r[0]=R8(c->r[5]+0x00000005u); // 801D10B4
  W8(c->r[30]+0x00000011u,c->r[0]); // 801D10B8
  c->r[0]=R8(c->r[5]+0x00000007u); // 801D10BC
  c->r[3]=R8(c->r[5]+0x00000006u); // 801D10C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D10C4
  c->r[0]=c->r[3]+c->r[0]; // 801D10C8
  c->r[0]=c->r[0]&0x00003F7Fu; cr0(c,c->r[0]); // 801D10CC
  W16(c->r[30]+0x00000012u,c->r[0]); // 801D10D0
L_801D10D4:;
  c->r[3]=c->r[29]|c->r[29]; // 801D10D4
  c->lr=0x801D10DCu; f_801AA228(c); // 801D10D8
  c->r[5]=R8(c->r[30]+0x00000009u); // 801D10DC
  c->r[3]=c->r[28]|c->r[28]; // 801D10E0
  c->r[4]=c->r[31]|c->r[31]; // 801D10E4
  c->r[6]=c->r[30]|c->r[30]; // 801D10E8
  c->lr=0x801D10F0u; f_801CEFA0(c); // 801D10EC
  goto L_801D11F8; // 801D10F0
L_801D10F4:;
  cmpu(c,0,c->r[3],0x00000002u); // 801D10F4
  if (!crb(c,2)) { goto L_801D1188; } // 801D10F8
  c->r[6]=R8(c->r[5]+0x00000000u); // 801D10FC
  c->r[3]=rotl(c->r[6],0)&0x00000002u; // 801D1100
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801D1104
  c->r[4]=sraw(c,c->r[3],1); // 801D1108
  c->r[3]=sraw(c,c->r[6],2); // 801D110C
  W8(c->r[30]+0x00000000u,c->r[3]); // 801D1110
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D1114
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801D1118
  W8(c->r[30]+0x00000009u,c->r[0]); // 801D111C
  if (crb(c,2)) { goto L_801D1148; } // 801D1120
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1124
  if (crb(c,2)) { goto L_801D1148; } // 801D1128
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D112C
  if (crb(c,2)) { goto L_801D1148; } // 801D1130
  if (crb(c,2)) { goto L_801D116C; } // 801D1134
  cmpu(c,0,c->r[0],0x00000002u); // 801D1138
  if (crb(c,0)) { goto L_801D1148; } // 801D113C
  cmpu(c,0,c->r[0],0x0000003Du); // 801D1140
  if (!crb(c,1)) { goto L_801D116C; } // 801D1144
L_801D1148:;
  c->r[3]=0u+0x803D0000u; // 801D1148
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D114C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D1150
  cmpu(c,0,c->r[0],0x00000001u); // 801D1154
  if (crb(c,0)) { goto L_801D1188; } // 801D1158
  c->r[4]=c->r[7]+0x000000C8u; // 801D115C
  c->r[3]=0u+0x00090000u; // 801D1160
  c->lr=0x801D1168u; f_801ACB20(c); // 801D1164
  goto L_801D1188; // 801D1168
L_801D116C:;
  c->r[3]=c->r[29]|c->r[29]; // 801D116C
  c->lr=0x801D1174u; f_801AA228(c); // 801D1170
  c->r[3]=c->r[28]|c->r[28]; // 801D1174
  c->r[4]=c->r[31]|c->r[31]; // 801D1178
  c->r[5]=c->r[30]|c->r[30]; // 801D117C
  c->lr=0x801D1184u; f_801CF418(c); // 801D1180
  goto L_801D11F8; // 801D1184
L_801D1188:;
  c->r[3]=c->r[29]|c->r[29]; // 801D1188
  c->lr=0x801D1190u; f_801AA228(c); // 801D118C
  cmps(c,0,(int32_t)c->r[31],0); // 801D1190
  if (crb(c,2)) { goto L_801D11F8; } // 801D1194
  c->r[3]=0u+0x00000002u; // 801D1198
  c->lr=0x801D11A0u; f_801AA140(c); // 801D119C
  cmps(c,0,(int32_t)c->r[3],0); // 801D11A0
  if (crb(c,2)) { goto L_801D11F8; } // 801D11A4
  c->r[0]=0u+0x0000000Cu; // 801D11A8
  c->r[7]=0u+0x803D0000u; // 801D11AC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801D11B0
  c->r[0]=0u+0x00000011u; // 801D11B4
  c->r[8]=0u+0x00000003u; // 801D11B8
  c->r[7]=c->r[7]+0xFFFFB9C8u; // 801D11BC
  W8(c->r[3]+0x00000014u,c->r[0]); // 801D11C0
  c->r[5]=c->r[3]|c->r[3]; // 801D11C4
  c->r[4]=0u+0x00000000u; // 801D11C8
  W8(c->r[3]+0x00000015u,c->r[8]); // 801D11CC
  c->r[0]=R8(c->r[7]+0x00000002u); // 801D11D0
  c->r[6]=R8(c->r[7]+0x00000003u); // 801D11D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D11D8
  c->r[7]=R8(c->r[7]+0x00000001u); // 801D11DC
  c->r[0]=c->r[6]|c->r[0]; // 801D11E0
  c->r[0]=c->r[7]|c->r[0]; // 801D11E4
  W8(c->r[3]+0x00000016u,c->r[0]); // 801D11E8
  W16(c->r[3]+0x00000002u,c->r[8]); // 801D11EC
  c->r[3]=c->r[28]|c->r[28]; // 801D11F0
  c->lr=0x801D11F8u; f_801CFEA4(c); // 801D11F4
L_801D11F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D11F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D11FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1200
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D1204
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D1208
  c->lr=c->r[0]; // 801D120C
  c->r[1]=c->r[1]+0x00000020u; // 801D1210
  return; // 801D1214
}

// rfc_calc_fcs
void f_801D1218(Ctx* __restrict c) {
  trace_call(0x801D1218u);
  c->r[5]=0u+0x802E0000u; // 801D1218
  c->r[6]=0u+0x000000FFu; // 801D121C
  c->r[5]=c->r[5]+0x00001360u; // 801D1220
  goto L_801D1238; // 801D1224
L_801D1228:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D1228
  c->r[4]=c->r[4]+0x00000001u; // 801D122C
  c->r[0]=c->r[6]^c->r[0]; // 801D1230
  c->r[6]=R8(c->r[5]+c->r[0]); // 801D1234
L_801D1238:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D1238
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D123C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1228; } // 801D1240
  c->r[0]=addc(c,~c->r[6],0x000000FFu,1); // 801D1244
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801D1248
  return; // 801D124C
}

// rfc_check_fcs
void f_801D1250(Ctx* __restrict c) {
  trace_call(0x801D1250u);
  c->r[6]=0u+0x802E0000u; // 801D1250
  c->r[7]=0u+0x000000FFu; // 801D1254
  c->r[6]=c->r[6]+0x00001360u; // 801D1258
  goto L_801D1270; // 801D125C
L_801D1260:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D1260
  c->r[4]=c->r[4]+0x00000001u; // 801D1264
  c->r[0]=c->r[7]^c->r[0]; // 801D1268
  c->r[7]=R8(c->r[6]+c->r[0]); // 801D126C
L_801D1270:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D1270
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D1274
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1260; } // 801D1278
  c->r[3]=0u+0x802E0000u; // 801D127C
  c->r[0]=c->r[7]^c->r[5]; // 801D1280
  c->r[3]=c->r[3]+0x00001360u; // 801D1284
  c->r[3]=R8(c->r[3]+c->r[0]); // 801D1288
  c->r[0]=c->r[3]+0xFFFFFF31u; // 801D128C
  c->r[0]=cntlz(c->r[0]); // 801D1290
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801D1294
  return; // 801D1298
}

// rfc_alloc_multiplexer_channel
void f_801D129C(Ctx* __restrict c) {
  trace_call(0x801D129Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D129C
  c->r[0]=c->lr; // 801D12A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D12A4
  c->r[11]=c->r[1]+0x00000020u; // 801D12A8
  c->lr=0x801D12B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D12AC
  c->r[5]=0u+0x803D0000u; // 801D12B0
  c->r[27]=c->r[3]|c->r[3]; // 801D12B4
  c->r[31]=c->r[5]+0xFFFFB9C8u; // 801D12B8
  c->r[28]=c->r[4]|c->r[4]; // 801D12BC
  c->r[0]=R8(c->r[31]+0x00000408u); // 801D12C0
  c->r[3]=c->r[31]+0x000003FEu; // 801D12C4
  c->r[30]=0u+0x00000000u; // 801D12C8
  cmps(c,0,(int32_t)c->r[0],0); // 801D12CC
  if (crb(c,2)) { goto L_801D132C; } // 801D12D0
  c->r[4]=c->r[27]|c->r[27]; // 801D12D4
  c->r[5]=0u+0x00000006u; // 801D12D8
  c->lr=0x801D12E0u; f_8018C170(c); // 801D12DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D12E0
  if (!crb(c,2)) { goto L_801D132C; } // 801D12E4
  c->r[0]=R8(c->r[31]+0x00000414u); // 801D12E8
  cmpu(c,0,c->r[0],0x00000004u); // 801D12EC
  if (crb(c,0)) { goto L_801D1308; } // 801D12F0
  c->r[3]=0u+0x00090000u; // 801D12F4
  c->r[4]=0u+0x80330000u; // 801D12F8
  c->r[3]=c->r[3]+0x00000003u; // 801D12FC
  c->r[4]=c->r[4]+0x00006578u; // 801D1300
  c->lr=0x801D1308u; f_801ACB20(c); // 801D1304
L_801D1308:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)120); // 801D1308
  c->r[3]=0u+0x803D0000u; // 801D130C
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D1310
  c->r[3]=c->r[3]+c->r[0]; // 801D1314
  c->r[31]=c->r[3]+0x0000039Cu; // 801D1318
  c->r[3]=c->r[31]|c->r[31]; // 801D131C
  c->lr=0x801D1324u; f_801AD15C(c); // 801D1320
  c->r[3]=c->r[31]|c->r[31]; // 801D1324
  goto L_801D13DC; // 801D1328
L_801D132C:;
  c->r[31]=0u+0x803D0000u; // 801D132C
  c->r[31]=c->r[31]+0xFFFFB9C8u; // 801D1330
  c->r[3]=R8(c->r[31]+0x00000065u); // 801D1334
  c->r[30]=c->r[3]+0x00000001u; // 801D1338
  cmps(c,0,(int32_t)c->r[30],1); // 801D133C
  if (crb(c,0)) { goto L_801D1348; } // 801D1340
  c->r[30]=0u+0x00000000u; // 801D1344
L_801D1348:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)120); // 801D1348
  c->r[3]=c->r[31]+c->r[0]; // 801D134C
  c->r[0]=R8(c->r[3]+0x00000408u); // 801D1350
  c->r[29]=c->r[3]+0x0000039Cu; // 801D1354
  cmps(c,0,(int32_t)c->r[0],0); // 801D1358
  if (!crb(c,2)) { goto L_801D13D8; } // 801D135C
  c->r[3]=c->r[29]|c->r[29]; // 801D1360
  c->r[4]=0u+0x00000000u; // 801D1364
  c->r[5]=0u+0x00000078u; // 801D1368
  c->lr=0x801D1370u; f_80004688(c); // 801D136C
  c->r[4]=c->r[27]|c->r[27]; // 801D1370
  c->r[3]=c->r[29]+0x00000062u; // 801D1374
  c->r[5]=0u+0x00000006u; // 801D1378
  c->lr=0x801D1380u; f_80004338(c); // 801D137C
  c->r[3]=c->r[29]+0x00000018u; // 801D1380
  c->lr=0x801D1388u; f_801A9F8C(c); // 801D1384
  W8(c->r[29]+0x0000006Du,c->r[28]); // 801D1388
  c->r[0]=R8(c->r[31]+0x00000414u); // 801D138C
  cmpu(c,0,c->r[0],0x00000004u); // 801D1390
  if (crb(c,0)) { goto L_801D13B0; } // 801D1394
  c->r[3]=0u+0x00090000u; // 801D1398
  c->r[4]=0u+0x80330000u; // 801D139C
  c->r[3]=c->r[3]+0x00000003u; // 801D13A0
  c->r[5]=0u+0x0000003Cu; // 801D13A4
  c->r[4]=c->r[4]+0x00006588u; // 801D13A8
  c->lr=0x801D13B0u; f_801ACB38(c); // 801D13AC
L_801D13B0:;
  W32(c->r[29]+0x00000010u,c->r[29]); // 801D13B0
  c->r[3]=c->r[29]|c->r[29]; // 801D13B4
  c->r[4]=0u+0x0000000Bu; // 801D13B8
  c->r[5]=0u+0x0000003Cu; // 801D13BC
  c->lr=0x801D13C4u; f_801AD0EC(c); // 801D13C0
  c->r[4]=0u+0x803D0000u; // 801D13C4
  c->r[3]=c->r[29]|c->r[29]; // 801D13C8
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801D13CC
  W8(c->r[4]+0x00000065u,c->r[30]); // 801D13D0
  goto L_801D13DC; // 801D13D4
L_801D13D8:;
  c->r[3]=0u+0x00000000u; // 801D13D8
L_801D13DC:;
  c->r[11]=c->r[1]+0x00000020u; // 801D13DC
  c->lr=0x801D13E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D13E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D13E4
  c->lr=c->r[0]; // 801D13E8
  c->r[1]=c->r[1]+0x00000020u; // 801D13EC
  return; // 801D13F0
}

// rfc_release_multiplexer_channel
void f_801D13F4(Ctx* __restrict c) {
  trace_call(0x801D13F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D13F4
  c->r[0]=c->lr; // 801D13F8
  c->r[4]=0u+0x803D0000u; // 801D13FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1400
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801D1404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1408
  c->r[31]=c->r[3]|c->r[3]; // 801D140C
  c->r[0]=R8(c->r[4]+0x00000414u); // 801D1410
  cmpu(c,0,c->r[0],0x00000004u); // 801D1414
  if (crb(c,0)) { goto L_801D1430; } // 801D1418
  c->r[3]=0u+0x00090000u; // 801D141C
  c->r[4]=0u+0x80330000u; // 801D1420
  c->r[3]=c->r[3]+0x00000003u; // 801D1424
  c->r[4]=c->r[4]+0x00006578u; // 801D1428
  c->lr=0x801D1430u; f_801ACB20(c); // 801D142C
L_801D1430:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1430
  c->lr=0x801D1438u; f_801AD15C(c); // 801D1434
  goto L_801D1440; // 801D1438
L_801D143C:;
  c->lr=0x801D1440u; f_801AA228(c); // 801D143C
L_801D1440:;
  c->r[3]=c->r[31]+0x00000018u; // 801D1440
  c->lr=0x801D1448u; f_801AA8C4(c); // 801D1444
  cmps(c,0,(int32_t)c->r[3],0); // 801D1448
  if (!crb(c,2)) { IRQCHK(c); goto L_801D143C; } // 801D144C
  c->r[3]=c->r[31]|c->r[31]; // 801D1450
  c->r[4]=0u+0x00000000u; // 801D1454
  c->r[5]=0u+0x00000078u; // 801D1458
  c->lr=0x801D1460u; f_80004688(c); // 801D145C
  c->r[0]=0u+0x00000000u; // 801D1460
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 801D1464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1468
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D146C
  c->lr=c->r[0]; // 801D1470
  c->r[1]=c->r[1]+0x00000010u; // 801D1474
  return; // 801D1478
}

// rfc_timer_start
void f_801D147C(Ctx* __restrict c) {
  trace_call(0x801D147Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D147C
  c->r[0]=c->lr; // 801D1480
  c->r[5]=0u+0x803D0000u; // 801D1484
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1488
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801D148C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1490
  c->r[31]=c->r[4]|c->r[4]; // 801D1494
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D1498
  c->r[30]=c->r[3]|c->r[3]; // 801D149C
  c->r[0]=R8(c->r[5]+0x00000414u); // 801D14A0
  cmpu(c,0,c->r[0],0x00000004u); // 801D14A4
  if (crb(c,0)) { goto L_801D14C4; } // 801D14A8
  c->r[3]=0u+0x00090000u; // 801D14AC
  c->r[4]=0u+0x80330000u; // 801D14B0
  c->r[5]=c->r[31]|c->r[31]; // 801D14B4
  c->r[3]=c->r[3]+0x00000003u; // 801D14B8
  c->r[4]=c->r[4]+0x00006588u; // 801D14BC
  c->lr=0x801D14C4u; f_801ACB38(c); // 801D14C0
L_801D14C4:;
  W32(c->r[30]+0x00000010u,c->r[30]); // 801D14C4
  c->r[3]=c->r[30]|c->r[30]; // 801D14C8
  c->r[5]=c->r[31]|c->r[31]; // 801D14CC
  c->r[4]=0u+0x0000000Bu; // 801D14D0
  c->lr=0x801D14D8u; f_801AD0EC(c); // 801D14D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D14D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D14DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D14E0
  c->lr=c->r[0]; // 801D14E4
  c->r[1]=c->r[1]+0x00000010u; // 801D14E8
  return; // 801D14EC
}

// rfc_timer_stop
void f_801D14F0(Ctx* __restrict c) {
  trace_call(0x801D14F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D14F0
  c->r[0]=c->lr; // 801D14F4
  c->r[4]=0u+0x803D0000u; // 801D14F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D14FC
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801D1500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1504
  c->r[31]=c->r[3]|c->r[3]; // 801D1508
  c->r[0]=R8(c->r[4]+0x00000414u); // 801D150C
  cmpu(c,0,c->r[0],0x00000004u); // 801D1510
  if (crb(c,0)) { goto L_801D152C; } // 801D1514
  c->r[3]=0u+0x00090000u; // 801D1518
  c->r[4]=0u+0x80330000u; // 801D151C
  c->r[3]=c->r[3]+0x00000003u; // 801D1520
  c->r[4]=c->r[4]+0x00006578u; // 801D1524
  c->lr=0x801D152Cu; f_801ACB20(c); // 801D1528
L_801D152C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D152C
  c->lr=0x801D1534u; f_801AD15C(c); // 801D1530
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1534
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1538
  c->lr=c->r[0]; // 801D153C
  c->r[1]=c->r[1]+0x00000010u; // 801D1540
  return; // 801D1544
}

// rfc_port_timer_start
void f_801D1548(Ctx* __restrict c) {
  trace_call(0x801D1548u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1548
  c->r[0]=c->lr; // 801D154C
  c->r[5]=0u+0x803D0000u; // 801D1550
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1554
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801D1558
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D155C
  c->r[31]=c->r[3]+0x00000070u; // 801D1560
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1564
  c->r[30]=c->r[4]|c->r[4]; // 801D1568
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D156C
  c->r[29]=c->r[3]|c->r[3]; // 801D1570
  c->r[0]=R8(c->r[5]+0x00000414u); // 801D1574
  cmpu(c,0,c->r[0],0x00000004u); // 801D1578
  if (crb(c,0)) { goto L_801D1598; } // 801D157C
  c->r[3]=0u+0x00090000u; // 801D1580
  c->r[4]=0u+0x80330000u; // 801D1584
  c->r[5]=c->r[30]|c->r[30]; // 801D1588
  c->r[3]=c->r[3]+0x00000003u; // 801D158C
  c->r[4]=c->r[4]+0x000065A8u; // 801D1590
  c->lr=0x801D1598u; f_801ACB38(c); // 801D1594
L_801D1598:;
  W32(c->r[31]+0x00000010u,c->r[29]); // 801D1598
  c->r[3]=c->r[31]|c->r[31]; // 801D159C
  c->r[5]=c->r[30]|c->r[30]; // 801D15A0
  c->r[4]=0u+0x0000000Cu; // 801D15A4
  c->lr=0x801D15ACu; f_801AD0EC(c); // 801D15A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D15AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D15B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D15B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D15B8
  c->lr=c->r[0]; // 801D15BC
  c->r[1]=c->r[1]+0x00000020u; // 801D15C0
  return; // 801D15C4
}

// rfc_port_timer_stop
void f_801D15C8(Ctx* __restrict c) {
  trace_call(0x801D15C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D15C8
  c->r[0]=c->lr; // 801D15CC
  c->r[4]=0u+0x803D0000u; // 801D15D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D15D4
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801D15D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D15DC
  c->r[31]=c->r[3]|c->r[3]; // 801D15E0
  c->r[0]=R8(c->r[4]+0x00000414u); // 801D15E4
  cmpu(c,0,c->r[0],0x00000004u); // 801D15E8
  if (crb(c,0)) { goto L_801D1604; } // 801D15EC
  c->r[3]=0u+0x00090000u; // 801D15F0
  c->r[4]=0u+0x80330000u; // 801D15F4
  c->r[3]=c->r[3]+0x00000003u; // 801D15F8
  c->r[4]=c->r[4]+0x000065CCu; // 801D15FC
  c->lr=0x801D1604u; f_801ACB20(c); // 801D1600
L_801D1604:;
  c->r[3]=c->r[31]+0x00000070u; // 801D1604
  c->lr=0x801D160Cu; f_801AD15C(c); // 801D1608
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D160C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1610
  c->lr=c->r[0]; // 801D1614
  c->r[1]=c->r[1]+0x00000010u; // 801D1618
  return; // 801D161C
}

// rfc_check_mcb_active
void f_801D1620(Ctx* __restrict c) {
  trace_call(0x801D1620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1620
  c->r[0]=c->lr; // 801D1624
  c->r[5]=0u+0x00000000u; // 801D1628
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D162C
  c->r[0]=0u+0x0000003Du; // 801D1630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1634
  c->r[31]=c->r[3]|c->r[3]; // 801D1638
  c->ctr=c->r[0]; // 801D163C
L_801D1640:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 801D1640
  c->r[4]=c->r[3]+c->r[0]; // 801D1644
  c->r[0]=R8(c->r[4]+0x00000024u); // 801D1648
  cmps(c,0,(int32_t)c->r[0],0); // 801D164C
  if (crb(c,2)) { goto L_801D1660; } // 801D1650
  c->r[0]=0u+0x00000000u; // 801D1654
  W8(c->r[3]+0x00000074u,c->r[0]); // 801D1658
  goto L_801D16D0; // 801D165C
L_801D1660:;
  c->r[5]=c->r[5]+0x00000001u; // 801D1660
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1640; } // 801D1664
  c->r[0]=R8(c->r[3]+0x00000074u); // 801D1668
  cmps(c,0,(int32_t)c->r[0],0); // 801D166C
  if (crb(c,2)) { goto L_801D1690; } // 801D1670
  c->r[0]=0u+0x00000000u; // 801D1674
  c->r[4]=0u+0x00000008u; // 801D1678
  W8(c->r[3]+0x00000074u,c->r[0]); // 801D167C
  c->r[3]=c->r[31]|c->r[31]; // 801D1680
  c->r[5]=0u+0x00000000u; // 801D1684
  c->lr=0x801D168Cu; f_801CD8C0(c); // 801D1688
  goto L_801D16D0; // 801D168C
L_801D1690:;
  c->r[3]=0u+0x803D0000u; // 801D1690
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D1694
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D1698
  cmpu(c,0,c->r[0],0x00000004u); // 801D169C
  if (crb(c,0)) { goto L_801D16BC; } // 801D16A0
  c->r[3]=0u+0x00090000u; // 801D16A4
  c->r[4]=0u+0x80330000u; // 801D16A8
  c->r[3]=c->r[3]+0x00000003u; // 801D16AC
  c->r[5]=0u+0x00000002u; // 801D16B0
  c->r[4]=c->r[4]+0x00006588u; // 801D16B4
  c->lr=0x801D16BCu; f_801ACB38(c); // 801D16B8
L_801D16BC:;
  W32(c->r[31]+0x00000010u,c->r[31]); // 801D16BC
  c->r[3]=c->r[31]|c->r[31]; // 801D16C0
  c->r[4]=0u+0x0000000Bu; // 801D16C4
  c->r[5]=0u+0x00000002u; // 801D16C8
  c->lr=0x801D16D0u; f_801AD0EC(c); // 801D16CC
L_801D16D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D16D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D16D4
  c->lr=c->r[0]; // 801D16D8
  c->r[1]=c->r[1]+0x00000010u; // 801D16DC
  return; // 801D16E0
}

// rfcomm_process_timeout
void f_801D16E4(Ctx* __restrict c) {
  trace_call(0x801D16E4u);
  c->r[0]=R16(c->r[3]+0x00000014u); // 801D16E4
  cmps(c,0,(int32_t)c->r[0],12); // 801D16E8
  if (crb(c,2)) { goto L_801D170C; } // 801D16EC
  if (!crb(c,0)) return; // 801D16F0
  cmps(c,0,(int32_t)c->r[0],11); // 801D16F4
  if (crb(c,0)) return; // 801D16F8
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D16FC
  c->r[4]=0u+0x00000005u; // 801D1700
  c->r[5]=0u+0x00000000u; // 801D1704
  f_801CD8C0(c); return; // 801D1708
L_801D170C:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D170C
  c->r[4]=0u+0x00000005u; // 801D1710
  c->r[5]=0u+0x00000000u; // 801D1714
  f_801CE504(c); return; // 801D1718
  return; // 801D171C
}

// rfc_sec_check_complete
void f_801D1720(Ctx* __restrict c) {
  trace_call(0x801D1720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1720
  c->r[0]=c->lr; // 801D1724
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1728
  W8(c->r[1]+0x00000008u,c->r[5]); // 801D172C
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D1730
  cmps(c,0,(int32_t)c->r[0],0); // 801D1734
  if (crb(c,2)) { goto L_801D1764; } // 801D1738
  c->r[0]=R8(c->r[4]+0x00000068u); // 801D173C
  cmpu(c,0,c->r[0],0x00000002u); // 801D1740
  if (crb(c,2)) { goto L_801D1754; } // 801D1744
  cmpu(c,0,c->r[0],0x00000003u); // 801D1748
  if (crb(c,2)) { goto L_801D1754; } // 801D174C
  goto L_801D1764; // 801D1750
L_801D1754:;
  c->r[3]=c->r[4]|c->r[4]; // 801D1754
  c->r[5]=c->r[1]+0x00000008u; // 801D1758
  c->r[4]=0u+0x0000000Fu; // 801D175C
  c->lr=0x801D1764u; f_801CE504(c); // 801D1760
L_801D1764:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1764
  c->lr=c->r[0]; // 801D1768
  c->r[1]=c->r[1]+0x00000010u; // 801D176C
  return; // 801D1770
}

// rfc_port_closed
void f_801D1774(Ctx* __restrict c) {
  trace_call(0x801D1774u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1774
  c->r[0]=c->lr; // 801D1778
  c->r[4]=0u+0x803D0000u; // 801D177C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1780
  c->r[4]=c->r[4]+0xFFFFB9C8u; // 801D1784
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1788
  c->r[31]=0u+0x80330000u; // 801D178C
  c->r[31]=c->r[31]+0x00006578u; // 801D1790
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1794
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1798
  c->r[29]=c->r[3]|c->r[3]; // 801D179C
  c->r[0]=R8(c->r[4]+0x00000414u); // 801D17A0
  c->r[30]=R32(c->r[3]+0x0000006Cu); // 801D17A4
  cmpu(c,0,c->r[0],0x00000005u); // 801D17A8
  if (crb(c,0)) { goto L_801D17C0; } // 801D17AC
  c->r[3]=0u+0x00090000u; // 801D17B0
  c->r[4]=c->r[31]+0x00000068u; // 801D17B4
  c->r[3]=c->r[3]+0x00000004u; // 801D17B8
  c->lr=0x801D17C0u; f_801ACB20(c); // 801D17BC
L_801D17C0:;
  c->r[3]=0u+0x803D0000u; // 801D17C0
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D17C4
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D17C8
  cmpu(c,0,c->r[0],0x00000004u); // 801D17CC
  if (crb(c,0)) { goto L_801D17E4; } // 801D17D0
  c->r[3]=0u+0x00090000u; // 801D17D4
  c->r[4]=c->r[31]+0x00000054u; // 801D17D8
  c->r[3]=c->r[3]+0x00000003u; // 801D17DC
  c->lr=0x801D17E4u; f_801ACB20(c); // 801D17E0
L_801D17E4:;
  c->r[3]=c->r[29]+0x00000070u; // 801D17E4
  c->lr=0x801D17ECu; f_801AD15C(c); // 801D17E8
  c->r[4]=0u+0x00000000u; // 801D17EC
  cmps(c,0,(int32_t)c->r[30],0); // 801D17F0
  W8(c->r[29]+0x00000068u,c->r[4]); // 801D17F4
  if (crb(c,2)) { goto L_801D18A4; } // 801D17F8
  c->r[3]=R8(c->r[29]+0x0000000Du); // 801D17FC
  c->r[0]=0u+0x0000003Du; // 801D1800
  c->r[5]=0u+0x00000000u; // 801D1804
  c->r[3]=c->r[30]+c->r[3]; // 801D1808
  W8(c->r[3]+0x00000024u,c->r[4]); // 801D180C
  W8(c->r[29]+0x0000000Du,c->r[4]); // 801D1810
  c->ctr=c->r[0]; // 801D1814
L_801D1818:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 801D1818
  c->r[3]=c->r[30]+c->r[0]; // 801D181C
  c->r[0]=R8(c->r[3]+0x00000024u); // 801D1820
  cmps(c,0,(int32_t)c->r[0],0); // 801D1824
  if (crb(c,2)) { goto L_801D1838; } // 801D1828
  c->r[0]=0u+0x00000000u; // 801D182C
  W8(c->r[30]+0x00000074u,c->r[0]); // 801D1830
  goto L_801D18A4; // 801D1834
L_801D1838:;
  c->r[5]=c->r[5]+0x00000001u; // 801D1838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1818; } // 801D183C
  c->r[0]=R8(c->r[30]+0x00000074u); // 801D1840
  cmps(c,0,(int32_t)c->r[0],0); // 801D1844
  if (crb(c,2)) { goto L_801D1868; } // 801D1848
  c->r[0]=0u+0x00000000u; // 801D184C
  c->r[3]=c->r[30]|c->r[30]; // 801D1850
  W8(c->r[30]+0x00000074u,c->r[0]); // 801D1854
  c->r[4]=0u+0x00000008u; // 801D1858
  c->r[5]=0u+0x00000000u; // 801D185C
  c->lr=0x801D1864u; f_801CD8C0(c); // 801D1860
  goto L_801D18A4; // 801D1864
L_801D1868:;
  c->r[3]=0u+0x803D0000u; // 801D1868
  c->r[3]=c->r[3]+0xFFFFB9C8u; // 801D186C
  c->r[0]=R8(c->r[3]+0x00000414u); // 801D1870
  cmpu(c,0,c->r[0],0x00000004u); // 801D1874
  if (crb(c,0)) { goto L_801D1890; } // 801D1878
  c->r[3]=0u+0x00090000u; // 801D187C
  c->r[4]=c->r[31]+0x00000010u; // 801D1880
  c->r[3]=c->r[3]+0x00000003u; // 801D1884
  c->r[5]=0u+0x00000002u; // 801D1888
  c->lr=0x801D1890u; f_801ACB38(c); // 801D188C
L_801D1890:;
  W32(c->r[30]+0x00000010u,c->r[30]); // 801D1890
  c->r[3]=c->r[30]|c->r[30]; // 801D1894
  c->r[4]=0u+0x0000000Bu; // 801D1898
  c->r[5]=0u+0x00000002u; // 801D189C
  c->lr=0x801D18A4u; f_801AD0EC(c); // 801D18A0
L_801D18A4:;
  c->r[3]=c->r[29]|c->r[29]; // 801D18A4
  c->r[4]=0u+0x00000013u; // 801D18A8
  c->lr=0x801D18B0u; f_801CC820(c); // 801D18AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D18B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D18B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D18B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D18BC
  c->lr=c->r[0]; // 801D18C0
  c->r[1]=c->r[1]+0x00000020u; // 801D18C4
  return; // 801D18C8
}

// rfc_inc_credit
void f_801D18CC(Ctx* __restrict c) {
  trace_call(0x801D18CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D18CC
  c->r[0]=c->lr; // 801D18D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D18D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D18D8
  c->r[31]=c->r[3]|c->r[3]; // 801D18DC
  c->r[5]=R32(c->r[3]+0x0000006Cu); // 801D18E0
  c->r[0]=R8(c->r[5]+0x00000072u); // 801D18E4
  cmpu(c,0,c->r[0],0x00000002u); // 801D18E8
  if (!crb(c,2)) { goto L_801D1944; } // 801D18EC
  c->r[0]=R16(c->r[3]+0x00000098u); // 801D18F0
  c->r[5]=0u+0x803D0000u; // 801D18F4
  c->r[5]=c->r[5]+0xFFFFB9C8u; // 801D18F8
  c->r[6]=c->r[0]+c->r[4]; // 801D18FC
  W16(c->r[3]+0x00000098u,c->r[6]); // 801D1900
  c->r[0]=R8(c->r[5]+0x00000414u); // 801D1904
  cmpu(c,0,c->r[0],0x00000004u); // 801D1908
  if (crb(c,0)) { goto L_801D1928; } // 801D190C
  c->r[3]=0u+0x00090000u; // 801D1910
  c->r[4]=0u+0x80330000u; // 801D1914
  c->r[3]=c->r[3]+0x00000003u; // 801D1918
  c->r[5]=rotl(c->r[6],0)&0x0000FFFFu; // 801D191C
  c->r[4]=c->r[4]+0x000065F0u; // 801D1920
  c->lr=0x801D1928u; f_801ACB38(c); // 801D1924
L_801D1928:;
  c->r[0]=R8(c->r[31]+0x00000024u); // 801D1928
  cmpu(c,0,c->r[0],0x00000001u); // 801D192C
  if (!crb(c,2)) { goto L_801D1944; } // 801D1930
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801D1934
  c->r[5]=0u+0x00000001u; // 801D1938
  c->r[4]=R8(c->r[31]+0x0000000Du); // 801D193C
  c->lr=0x801D1944u; f_801CC5F8(c); // 801D1940
L_801D1944:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1948
  c->lr=c->r[0]; // 801D194C
  c->r[1]=c->r[1]+0x00000010u; // 801D1950
  return; // 801D1954
}

// rfc_dec_credit
void f_801D1958(Ctx* __restrict c) {
  trace_call(0x801D1958u);
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801D1958
  c->r[0]=R8(c->r[4]+0x00000072u); // 801D195C
  cmpu(c,0,c->r[0],0x00000002u); // 801D1960
  if (!crb(c,2)) return; // 801D1964
  c->r[4]=R16(c->r[3]+0x00000098u); // 801D1968
  cmps(c,0,(int32_t)c->r[4],0); // 801D196C
  if (crb(c,2)) { goto L_801D197C; } // 801D1970
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D1974
  W16(c->r[3]+0x00000098u,c->r[0]); // 801D1978
L_801D197C:;
  c->r[0]=R16(c->r[3]+0x00000098u); // 801D197C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1980
  if (!crb(c,2)) return; // 801D1984
  c->r[0]=0u+0x00000001u; // 801D1988
  W8(c->r[3]+0x00000024u,c->r[0]); // 801D198C
  return; // 801D1990
}

// rfc_check_send_cmd
void f_801D1994(Ctx* __restrict c) {
  trace_call(0x801D1994u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1994
  c->r[0]=c->lr; // 801D1998
  cmps(c,0,(int32_t)c->r[4],0); // 801D199C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D19A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D19A4
  c->r[31]=c->r[3]|c->r[3]; // 801D19A8
  if (crb(c,2)) { goto L_801D19D8; } // 801D19AC
  c->r[3]=c->r[3]+0x00000018u; // 801D19B0
  c->lr=0x801D19B8u; f_801AA648(c); // 801D19B4
  goto L_801D19D8; // 801D19B8
L_801D19BC:;
  c->r[3]=c->r[31]+0x00000018u; // 801D19BC
  c->lr=0x801D19C4u; f_801AA8C4(c); // 801D19C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D19C4
  c->r[4]=c->r[3]|c->r[3]; // 801D19C8
  if (crb(c,2)) { goto L_801D19E4; } // 801D19CC
  c->r[3]=R16(c->r[31]+0x00000068u); // 801D19D0
  c->lr=0x801D19D8u; f_801C5D00(c); // 801D19D4
L_801D19D8:;
  c->r[0]=R8(c->r[31]+0x00000073u); // 801D19D8
  cmps(c,0,(int32_t)c->r[0],0); // 801D19DC
  if (crb(c,2)) { IRQCHK(c); goto L_801D19BC; } // 801D19E0
L_801D19E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D19E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D19E8
  c->lr=c->r[0]; // 801D19EC
  c->r[1]=c->r[1]+0x00000010u; // 801D19F0
  return; // 801D19F4
}

// SDP_InitDiscoveryDb
void f_801D19F8(Ctx* __restrict c) {
  trace_call(0x801D19F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D19F8
  c->r[0]=c->lr; // 801D19FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1A00
  c->r[11]=c->r[1]+0x00000020u; // 801D1A04
  c->lr=0x801D1A0Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1A08
  cmps(c,0,(int32_t)c->r[3],0); // 801D1A0C
  c->r[27]=c->r[3]|c->r[3]; // 801D1A10
  c->r[26]=c->r[4]|c->r[4]; // 801D1A14
  c->r[28]=c->r[5]|c->r[5]; // 801D1A18
  c->r[29]=c->r[6]|c->r[6]; // 801D1A1C
  c->r[30]=c->r[7]|c->r[7]; // 801D1A20
  c->r[31]=c->r[8]|c->r[8]; // 801D1A24
  if (crb(c,2)) { goto L_801D1A44; } // 801D1A28
  cmpu(c,0,c->r[4],0x0000006Cu); // 801D1A2C
  if (crb(c,0)) { goto L_801D1A44; } // 801D1A30
  cmpu(c,0,c->r[7],0x0000000Cu); // 801D1A34
  if (crb(c,1)) { goto L_801D1A44; } // 801D1A38
  cmpu(c,0,c->r[5],0x00000003u); // 801D1A3C
  if (!crb(c,1)) { goto L_801D1A80; } // 801D1A40
L_801D1A44:;
  c->r[3]=0u+0x803D0000u; // 801D1A44
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D1A48
  c->r[0]=R8(c->r[3]+0x00004630u); // 801D1A4C
  cmpu(c,0,c->r[0],0x00000001u); // 801D1A50
  if (crb(c,0)) { goto L_801D1A78; } // 801D1A54
  c->r[4]=0u+0x80330000u; // 801D1A58
  c->r[5]=c->r[27]|c->r[27]; // 801D1A5C
  c->r[6]=c->r[26]|c->r[26]; // 801D1A60
  c->r[7]=c->r[28]|c->r[28]; // 801D1A64
  c->r[8]=c->r[30]|c->r[30]; // 801D1A68
  c->r[4]=c->r[4]+0x00006608u; // 801D1A6C
  c->r[3]=0u+0x000A0000u; // 801D1A70
  c->lr=0x801D1A78u; f_801ACB80(c); // 801D1A74
L_801D1A78:;
  c->r[3]=0u+0x00000000u; // 801D1A78
  goto L_801D1D58; // 801D1A7C
L_801D1A80:;
  c->r[5]=c->r[26]|c->r[26]; // 801D1A80
  c->r[4]=0u+0x00000000u; // 801D1A84
  c->lr=0x801D1A8Cu; f_80004688(c); // 801D1A88
  c->r[5]=c->r[26]+0xFFFFFF94u; // 801D1A8C
  c->r[0]=c->r[27]+0x0000006Cu; // 801D1A90
  c->r[3]=0u+0x00000000u; // 801D1A94
  cmps(c,0,(int32_t)c->r[28],0); // 801D1A98
  W32(c->r[27]+0x00000000u,c->r[5]); // 801D1A9C
  c->r[4]=0u+0x00000000u; // 801D1AA0
  W32(c->r[27]+0x00000004u,c->r[5]); // 801D1AA4
  W32(c->r[27]+0x00000008u,c->r[3]); // 801D1AA8
  W32(c->r[27]+0x00000068u,c->r[0]); // 801D1AAC
  if (crb(c,2)) { goto L_801D1C88; } // 801D1AB0
  cmpu(c,0,c->r[28],0x00000008u); // 801D1AB4
  c->r[3]=c->r[28]+0x00010000u; // 801D1AB8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801D1ABC
  if (!crb(c,1)) { goto L_801D1C34; } // 801D1AC0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D1AC4
  c->r[0]=c->r[3]+0x00000007u; // 801D1AC8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D1ACC
  c->ctr=c->r[0]; // 801D1AD0
  cmpu(c,0,c->r[3],0x00000000u); // 801D1AD4
  if (!crb(c,1)) { goto L_801D1C34; } // 801D1AD8
L_801D1ADC:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 801D1ADC
  c->r[5]=R32(c->r[29]+0x00000000u); // 801D1AE0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D1AE4
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D1AE8
  c->r[4]=c->r[4]+0x00000008u; // 801D1AEC
  c->r[3]=c->r[27]+c->r[3]; // 801D1AF0
  W32(c->r[3]+0x00000010u,c->r[5]); // 801D1AF4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D1AF8
  c->r[5]=R32(c->r[29]+0x00000008u); // 801D1AFC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801D1B00
  W32(c->r[3]+0x00000018u,c->r[5]); // 801D1B04
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801D1B08
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D1B0C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801D1B10
  c->r[5]=R32(c->r[29]+0x00000014u); // 801D1B14
  c->r[0]=R32(c->r[29]+0x00000018u); // 801D1B18
  W32(c->r[3]+0x00000024u,c->r[5]); // 801D1B1C
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D1B20
  c->r[5]=R32(c->r[29]+0x0000001Cu); // 801D1B24
  c->r[0]=R32(c->r[29]+0x00000020u); // 801D1B28
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801D1B2C
  W32(c->r[3]+0x00000030u,c->r[0]); // 801D1B30
  c->r[0]=R32(c->r[29]+0x00000024u); // 801D1B34
  W32(c->r[3]+0x00000034u,c->r[0]); // 801D1B38
  c->r[5]=R32(c->r[29]+0x00000028u); // 801D1B3C
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 801D1B40
  W32(c->r[3]+0x00000038u,c->r[5]); // 801D1B44
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D1B48
  c->r[5]=R32(c->r[29]+0x00000030u); // 801D1B4C
  c->r[0]=R32(c->r[29]+0x00000034u); // 801D1B50
  W32(c->r[3]+0x00000040u,c->r[5]); // 801D1B54
  W32(c->r[3]+0x00000044u,c->r[0]); // 801D1B58
  c->r[0]=R32(c->r[29]+0x00000038u); // 801D1B5C
  W32(c->r[3]+0x00000048u,c->r[0]); // 801D1B60
  c->r[5]=R32(c->r[29]+0x0000003Cu); // 801D1B64
  c->r[0]=R32(c->r[29]+0x00000040u); // 801D1B68
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 801D1B6C
  W32(c->r[3]+0x00000050u,c->r[0]); // 801D1B70
  c->r[5]=R32(c->r[29]+0x00000044u); // 801D1B74
  c->r[0]=R32(c->r[29]+0x00000048u); // 801D1B78
  W32(c->r[3]+0x00000054u,c->r[5]); // 801D1B7C
  W32(c->r[3]+0x00000058u,c->r[0]); // 801D1B80
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 801D1B84
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801D1B88
  c->r[5]=R32(c->r[29]+0x00000050u); // 801D1B8C
  c->r[0]=R32(c->r[29]+0x00000054u); // 801D1B90
  W32(c->r[3]+0x00000060u,c->r[5]); // 801D1B94
  W32(c->r[3]+0x00000064u,c->r[0]); // 801D1B98
  c->r[5]=R32(c->r[29]+0x00000058u); // 801D1B9C
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 801D1BA0
  W32(c->r[3]+0x00000068u,c->r[5]); // 801D1BA4
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801D1BA8
  c->r[0]=R32(c->r[29]+0x00000060u); // 801D1BAC
  W32(c->r[3]+0x00000070u,c->r[0]); // 801D1BB0
  c->r[5]=R32(c->r[29]+0x00000064u); // 801D1BB4
  c->r[0]=R32(c->r[29]+0x00000068u); // 801D1BB8
  W32(c->r[3]+0x00000074u,c->r[5]); // 801D1BBC
  W32(c->r[3]+0x00000078u,c->r[0]); // 801D1BC0
  c->r[5]=R32(c->r[29]+0x0000006Cu); // 801D1BC4
  c->r[0]=R32(c->r[29]+0x00000070u); // 801D1BC8
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 801D1BCC
  W32(c->r[3]+0x00000080u,c->r[0]); // 801D1BD0
  c->r[0]=R32(c->r[29]+0x00000074u); // 801D1BD4
  W32(c->r[3]+0x00000084u,c->r[0]); // 801D1BD8
  c->r[5]=R32(c->r[29]+0x00000078u); // 801D1BDC
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801D1BE0
  W32(c->r[3]+0x00000088u,c->r[5]); // 801D1BE4
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 801D1BE8
  c->r[5]=R32(c->r[29]+0x00000080u); // 801D1BEC
  c->r[0]=R32(c->r[29]+0x00000084u); // 801D1BF0
  W32(c->r[3]+0x00000090u,c->r[5]); // 801D1BF4
  W32(c->r[3]+0x00000094u,c->r[0]); // 801D1BF8
  c->r[0]=R32(c->r[29]+0x00000088u); // 801D1BFC
  W32(c->r[3]+0x00000098u,c->r[0]); // 801D1C00
  c->r[5]=R32(c->r[29]+0x0000008Cu); // 801D1C04
  c->r[0]=R32(c->r[29]+0x00000090u); // 801D1C08
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 801D1C0C
  W32(c->r[3]+0x000000A0u,c->r[0]); // 801D1C10
  c->r[5]=R32(c->r[29]+0x00000094u); // 801D1C14
  c->r[0]=R32(c->r[29]+0x00000098u); // 801D1C18
  W32(c->r[3]+0x000000A4u,c->r[5]); // 801D1C1C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801D1C20
  c->r[0]=R32(c->r[29]+0x0000009Cu); // 801D1C24
  c->r[29]=c->r[29]+0x000000A0u; // 801D1C28
  W32(c->r[3]+0x000000ACu,c->r[0]); // 801D1C2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1ADC; } // 801D1C30
L_801D1C34:;
  c->r[3]=rotl(c->r[4],0)&0x0000FFFFu; // 801D1C34
  c->r[0]=c->r[28]-c->r[3]; // 801D1C38
  c->ctr=c->r[0]; // 801D1C3C
  cmpu(c,0,c->r[3],c->r[28]); // 801D1C40
  if (!crb(c,0)) { goto L_801D1C88; } // 801D1C44
L_801D1C48:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 801D1C48
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D1C4C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D1C50
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D1C54
  c->r[4]=c->r[4]+0x00000001u; // 801D1C58
  c->r[5]=c->r[27]+c->r[5]; // 801D1C5C
  W32(c->r[5]+0x00000010u,c->r[3]); // 801D1C60
  W32(c->r[5]+0x00000014u,c->r[0]); // 801D1C64
  c->r[3]=R32(c->r[29]+0x00000008u); // 801D1C68
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801D1C6C
  W32(c->r[5]+0x00000018u,c->r[3]); // 801D1C70
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801D1C74
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D1C78
  c->r[29]=c->r[29]+0x00000014u; // 801D1C7C
  W32(c->r[5]+0x00000020u,c->r[0]); // 801D1C80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1C48; } // 801D1C84
L_801D1C88:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D1C88
  W16(c->r[27]+0x0000000Cu,c->r[28]); // 801D1C8C
  c->r[5]=0u+0x00000000u; // 801D1C90
  if (crb(c,2)) { goto L_801D1D44; } // 801D1C94
  cmpu(c,0,c->r[30],0x00000008u); // 801D1C98
  c->r[3]=c->r[30]+0x00010000u; // 801D1C9C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801D1CA0
  if (!crb(c,1)) { goto L_801D1D14; } // 801D1CA4
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D1CA8
  c->r[0]=c->r[3]+0x00000007u; // 801D1CAC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D1CB0
  c->ctr=c->r[0]; // 801D1CB4
  cmpu(c,0,c->r[3],0x00000000u); // 801D1CB8
  if (!crb(c,1)) { goto L_801D1D14; } // 801D1CBC
L_801D1CC0:;
  c->r[3]=rotl(c->r[5],1)&0x0001FFFEu; // 801D1CC0
  c->r[0]=R16(c->r[31]+0x00000000u); // 801D1CC4
  c->r[3]=c->r[27]+c->r[3]; // 801D1CC8
  c->r[5]=c->r[5]+0x00000008u; // 801D1CCC
  W16(c->r[3]+0x0000004Eu,c->r[0]); // 801D1CD0
  c->r[0]=R16(c->r[31]+0x00000002u); // 801D1CD4
  W16(c->r[3]+0x00000050u,c->r[0]); // 801D1CD8
  c->r[0]=R16(c->r[31]+0x00000004u); // 801D1CDC
  W16(c->r[3]+0x00000052u,c->r[0]); // 801D1CE0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801D1CE4
  W16(c->r[3]+0x00000054u,c->r[0]); // 801D1CE8
  c->r[0]=R16(c->r[31]+0x00000008u); // 801D1CEC
  W16(c->r[3]+0x00000056u,c->r[0]); // 801D1CF0
  c->r[0]=R16(c->r[31]+0x0000000Au); // 801D1CF4
  W16(c->r[3]+0x00000058u,c->r[0]); // 801D1CF8
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 801D1CFC
  W16(c->r[3]+0x0000005Au,c->r[0]); // 801D1D00
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 801D1D04
  c->r[31]=c->r[31]+0x00000010u; // 801D1D08
  W16(c->r[3]+0x0000005Cu,c->r[0]); // 801D1D0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1CC0; } // 801D1D10
L_801D1D14:;
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801D1D14
  c->r[0]=c->r[30]-c->r[3]; // 801D1D18
  c->ctr=c->r[0]; // 801D1D1C
  cmpu(c,0,c->r[3],c->r[30]); // 801D1D20
  if (!crb(c,0)) { goto L_801D1D44; } // 801D1D24
L_801D1D28:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 801D1D28
  c->r[4]=R16(c->r[31]+0x00000000u); // 801D1D2C
  c->r[3]=c->r[27]+c->r[0]; // 801D1D30
  c->r[5]=c->r[5]+0x00000001u; // 801D1D34
  W16(c->r[3]+0x0000004Eu,c->r[4]); // 801D1D38
  c->r[31]=c->r[31]+0x00000002u; // 801D1D3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1D28; } // 801D1D40
L_801D1D44:;
  c->r[3]=c->r[30]|c->r[30]; // 801D1D44
  c->r[4]=c->r[27]|c->r[27]; // 801D1D48
  c->lr=0x801D1D50u; f_801D7010(c); // 801D1D4C
  W16(c->r[27]+0x0000004Cu,c->r[30]); // 801D1D50
  c->r[3]=0u+0x00000001u; // 801D1D54
L_801D1D58:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1D58
  c->lr=0x801D1D60u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1D5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1D60
  c->lr=c->r[0]; // 801D1D64
  c->r[1]=c->r[1]+0x00000020u; // 801D1D68
  return; // 801D1D6C
}

// SDP_ServiceSearchRequest
void f_801D1D70(Ctx* __restrict c) {
  trace_call(0x801D1D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1D70
  c->r[0]=c->lr; // 801D1D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1D7C
  c->r[31]=c->r[5]|c->r[5]; // 801D1D80
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D1D84
  c->r[30]=c->r[4]|c->r[4]; // 801D1D88
  c->lr=0x801D1D90u; f_801D501C(c); // 801D1D8C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1D90
  if (!crb(c,2)) { goto L_801D1DA0; } // 801D1D94
  c->r[3]=0u+0x00000000u; // 801D1D98
  goto L_801D1DB4; // 801D1D9C
L_801D1DA0:;
  c->r[0]=0u+0x00000000u; // 801D1DA0
  W8(c->r[3]+0x00000474u,c->r[0]); // 801D1DA4
  W32(c->r[3]+0x00000410u,c->r[30]); // 801D1DA8
  W32(c->r[3]+0x00000414u,c->r[31]); // 801D1DAC
  c->r[3]=0u+0x00000001u; // 801D1DB0
L_801D1DB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1DB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1DB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D1DBC
  c->lr=c->r[0]; // 801D1DC0
  c->r[1]=c->r[1]+0x00000010u; // 801D1DC4
  return; // 801D1DC8
}

// SDP_ServiceSearchAttributeRequest
void f_801D1DCC(Ctx* __restrict c) {
  trace_call(0x801D1DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1DCC
  c->r[0]=c->lr; // 801D1DD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1DD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1DD8
  c->r[31]=c->r[5]|c->r[5]; // 801D1DDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D1DE0
  c->r[30]=c->r[4]|c->r[4]; // 801D1DE4
  c->lr=0x801D1DECu; f_801D501C(c); // 801D1DE8
  cmps(c,0,(int32_t)c->r[3],0); // 801D1DEC
  if (!crb(c,2)) { goto L_801D1DFC; } // 801D1DF0
  c->r[3]=0u+0x00000000u; // 801D1DF4
  goto L_801D1E18; // 801D1DF8
L_801D1DFC:;
  c->r[4]=0u+0x00000000u; // 801D1DFC
  c->r[0]=0u+0x00000001u; // 801D1E00
  W8(c->r[3]+0x00000474u,c->r[4]); // 801D1E04
  W32(c->r[3]+0x00000410u,c->r[30]); // 801D1E08
  W32(c->r[3]+0x00000414u,c->r[31]); // 801D1E0C
  W8(c->r[3]+0x00000475u,c->r[0]); // 801D1E10
  c->r[3]=0u+0x00000001u; // 801D1E14
L_801D1E18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1E18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1E1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D1E20
  c->lr=c->r[0]; // 801D1E24
  c->r[1]=c->r[1]+0x00000010u; // 801D1E28
  return; // 801D1E2C
}

// SDP_FindAttributeInRec
void f_801D1E30(Ctx* __restrict c) {
  trace_call(0x801D1E30u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1E30
  goto L_801D1E48; // 801D1E34
L_801D1E38:;
  c->r[0]=R16(c->r[3]+0x00000004u); // 801D1E38
  cmpu(c,0,c->r[0],c->r[4]); // 801D1E3C
  if (crb(c,2)) return; // 801D1E40
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1E44
L_801D1E48:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D1E48
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1E38; } // 801D1E4C
  c->r[3]=0u+0x00000000u; // 801D1E50
  return; // 801D1E54
}

// SDP_FindServiceInDb
void f_801D1E58(Ctx* __restrict c) {
  trace_call(0x801D1E58u);
  cmps(c,0,(int32_t)c->r[5],0); // 801D1E58
  if (!crb(c,2)) { goto L_801D1E68; } // 801D1E5C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D1E60
  goto L_801D1F14; // 801D1E64
L_801D1E68:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D1E68
  goto L_801D1F14; // 801D1E6C
L_801D1E70:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 801D1E70
  goto L_801D1F08; // 801D1E74
L_801D1E78:;
  c->r[5]=R16(c->r[6]+0x00000004u); // 801D1E78
  cmpu(c,0,c->r[5],0x00000001u); // 801D1E7C
  if (!crb(c,2)) { goto L_801D1ED4; } // 801D1E80
  c->r[0]=R16(c->r[6]+0x00000006u); // 801D1E84
  c->r[0]=sraw(c,c->r[0],12); // 801D1E88
  cmps(c,0,(int32_t)c->r[0],6); // 801D1E8C
  if (!crb(c,2)) { goto L_801D1ED4; } // 801D1E90
  c->r[6]=R32(c->r[6]+0x00000008u); // 801D1E94
  goto L_801D1EC8; // 801D1E98
L_801D1E9C:;
  c->r[5]=R16(c->r[6]+0x00000006u); // 801D1E9C
  c->r[0]=sraw(c,c->r[5],12); // 801D1EA0
  cmps(c,0,(int32_t)c->r[0],3); // 801D1EA4
  if (!crb(c,2)) { goto L_801D1EC4; } // 801D1EA8
  c->r[0]=rotl(c->r[5],0)&0x00000FFFu; // 801D1EAC
  cmps(c,0,(int32_t)c->r[0],2); // 801D1EB0
  if (!crb(c,2)) { goto L_801D1EC4; } // 801D1EB4
  c->r[0]=R16(c->r[6]+0x00000008u); // 801D1EB8
  cmpu(c,0,c->r[0],c->r[4]); // 801D1EBC
  if (crb(c,2)) return; // 801D1EC0
L_801D1EC4:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 801D1EC4
L_801D1EC8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D1EC8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1E9C; } // 801D1ECC
  goto L_801D1F10; // 801D1ED0
L_801D1ED4:;
  cmpu(c,0,c->r[5],0x00000003u); // 801D1ED4
  if (!crb(c,2)) { goto L_801D1F04; } // 801D1ED8
  c->r[5]=R16(c->r[6]+0x00000006u); // 801D1EDC
  c->r[0]=sraw(c,c->r[5],12); // 801D1EE0
  cmps(c,0,(int32_t)c->r[0],3); // 801D1EE4
  if (!crb(c,2)) { goto L_801D1F04; } // 801D1EE8
  c->r[0]=rotl(c->r[5],0)&0x00000FFFu; // 801D1EEC
  cmps(c,0,(int32_t)c->r[0],2); // 801D1EF0
  if (!crb(c,2)) { goto L_801D1F04; } // 801D1EF4
  c->r[0]=R16(c->r[6]+0x00000008u); // 801D1EF8
  cmpu(c,0,c->r[0],c->r[4]); // 801D1EFC
  if (crb(c,2)) return; // 801D1F00
L_801D1F04:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 801D1F04
L_801D1F08:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D1F08
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1E78; } // 801D1F0C
L_801D1F10:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D1F10
L_801D1F14:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D1F14
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1E70; } // 801D1F18
  c->r[3]=0u+0x00000000u; // 801D1F1C
  return; // 801D1F20
}

// SDP_FindServiceUUIDInDb
void f_801D1F24(Ctx* __restrict c) {
  trace_call(0x801D1F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1F24
  c->r[0]=c->lr; // 801D1F28
  cmps(c,0,(int32_t)c->r[5],0); // 801D1F2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1F30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1F34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1F38
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1F3C
  c->r[29]=c->r[4]|c->r[4]; // 801D1F40
  if (!crb(c,2)) { goto L_801D1F50; } // 801D1F44
  c->r[31]=R32(c->r[3]+0x00000008u); // 801D1F48
  goto L_801D2004; // 801D1F4C
L_801D1F50:;
  c->r[31]=R32(c->r[5]+0x00000004u); // 801D1F50
  goto L_801D2004; // 801D1F54
L_801D1F58:;
  c->r[30]=R32(c->r[31]+0x00000000u); // 801D1F58
  goto L_801D1FF8; // 801D1F5C
L_801D1F60:;
  c->r[3]=R16(c->r[30]+0x00000004u); // 801D1F60
  cmpu(c,0,c->r[3],0x00000001u); // 801D1F64
  if (!crb(c,2)) { goto L_801D1FC0; } // 801D1F68
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D1F6C
  c->r[0]=sraw(c,c->r[0],12); // 801D1F70
  cmps(c,0,(int32_t)c->r[0],6); // 801D1F74
  if (!crb(c,2)) { goto L_801D1FC0; } // 801D1F78
  c->r[30]=R32(c->r[30]+0x00000008u); // 801D1F7C
  goto L_801D1FB4; // 801D1F80
L_801D1F84:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D1F84
  c->r[0]=sraw(c,c->r[0],12); // 801D1F88
  cmps(c,0,(int32_t)c->r[0],3); // 801D1F8C
  if (!crb(c,2)) { goto L_801D1FB0; } // 801D1F90
  c->r[3]=c->r[29]|c->r[29]; // 801D1F94
  c->r[4]=c->r[30]|c->r[30]; // 801D1F98
  c->lr=0x801D1FA0u; f_801D6F80(c); // 801D1F9C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1FA0
  if (crb(c,2)) { goto L_801D1FB0; } // 801D1FA4
  c->r[3]=c->r[31]|c->r[31]; // 801D1FA8
  goto L_801D2010; // 801D1FAC
L_801D1FB0:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801D1FB0
L_801D1FB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D1FB4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1F84; } // 801D1FB8
  goto L_801D2000; // 801D1FBC
L_801D1FC0:;
  cmpu(c,0,c->r[3],0x00000003u); // 801D1FC0
  if (!crb(c,2)) { goto L_801D1FF4; } // 801D1FC4
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D1FC8
  c->r[0]=sraw(c,c->r[0],12); // 801D1FCC
  cmps(c,0,(int32_t)c->r[0],3); // 801D1FD0
  if (!crb(c,2)) { goto L_801D1FF4; } // 801D1FD4
  c->r[3]=c->r[29]|c->r[29]; // 801D1FD8
  c->r[4]=c->r[30]|c->r[30]; // 801D1FDC
  c->lr=0x801D1FE4u; f_801D6F80(c); // 801D1FE0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1FE4
  if (crb(c,2)) { goto L_801D1FF4; } // 801D1FE8
  c->r[3]=c->r[31]|c->r[31]; // 801D1FEC
  goto L_801D2010; // 801D1FF0
L_801D1FF4:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801D1FF4
L_801D1FF8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D1FF8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1F60; } // 801D1FFC
L_801D2000:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 801D2000
L_801D2004:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D2004
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1F58; } // 801D2008
  c->r[3]=0u+0x00000000u; // 801D200C
L_801D2010:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2010
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2014
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2018
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D201C
  c->lr=c->r[0]; // 801D2020
  c->r[1]=c->r[1]+0x00000020u; // 801D2024
  return; // 801D2028
}

// SDP_SetLocalDiRecord
void f_801D202C(Ctx* __restrict c) {
  trace_call(0x801D202Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D202C
  c->r[0]=c->lr; // 801D2030
  cmps(c,0,(int32_t)c->r[3],0); // 801D2034
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2038
  c->r[0]=0u+0x00001200u; // 801D203C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2040
  c->r[31]=0u+0x00000000u; // 801D2044
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2048
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D204C
  c->r[29]=c->r[3]|c->r[3]; // 801D2050
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D2054
  c->r[28]=c->r[4]|c->r[4]; // 801D2058
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801D205C
  W32(c->r[4]+0x00000000u,c->r[31]); // 801D2060
  if (!crb(c,2)) { goto L_801D2070; } // 801D2064
  c->r[3]=0u+0x0000000Bu; // 801D2068
  goto L_801D236C; // 801D206C
L_801D2070:;
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D2070
  cmpu(c,0,c->r[0],0x00000001u); // 801D2074
  if (!crb(c,2)) { goto L_801D2094; } // 801D2078
  c->r[3]=0u+0x803D0000u; // 801D207C
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D2080
  c->r[30]=R32(c->r[3]+0x0000121Cu); // 801D2084
  cmps(c,0,(int32_t)c->r[30],0); // 801D2088
  if (crb(c,2)) { goto L_801D2094; } // 801D208C
  goto L_801D20AC; // 801D2090
L_801D2094:;
  c->lr=0x801D2098u; f_801D2B10(c); // 801D2094
  cmps(c,0,(int32_t)c->r[3],0); // 801D2098
  c->r[30]=c->r[3]|c->r[3]; // 801D209C
  if (!crb(c,2)) { goto L_801D20AC; } // 801D20A0
  c->r[3]=0u+0x00000006u; // 801D20A4
  goto L_801D236C; // 801D20A8
L_801D20AC:;
  W32(c->r[28]+0x00000000u,c->r[30]); // 801D20AC
  c->r[3]=c->r[30]|c->r[30]; // 801D20B0
  c->r[5]=c->r[1]+0x0000000Cu; // 801D20B4
  c->r[4]=0u+0x00000001u; // 801D20B8
  c->lr=0x801D20C0u; f_801D3174(c); // 801D20BC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D20C0
  if (!crb(c,2)) { goto L_801D20CC; } // 801D20C4
  c->r[31]=0u+0x00000007u; // 801D20C8
L_801D20CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D20CC
  if (!crb(c,2)) { goto L_801D2108; } // 801D20D0
  c->r[3]=0u+0x00000000u; // 801D20D4
  c->r[0]=0u+0x00000009u; // 801D20D8
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D20DC
  c->r[7]=c->r[1]+0x00000008u; // 801D20E0
  c->r[3]=c->r[30]|c->r[30]; // 801D20E4
  c->r[4]=0u+0x00000200u; // 801D20E8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D20EC
  c->r[5]=0u+0x00000001u; // 801D20F0
  c->r[6]=0u+0x00000002u; // 801D20F4
  c->lr=0x801D20FCu; f_801D2D04(c); // 801D20F8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D20FC
  if (!crb(c,2)) { goto L_801D2108; } // 801D2100
  c->r[31]=0u+0x00000007u; // 801D2104
L_801D2108:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D2108
  if (!crb(c,2)) { goto L_801D2160; } // 801D210C
  c->r[0]=R8(c->r[29]+0x00000009u); // 801D2110
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D2114
  if (crb(c,2)) { goto L_801D2160; } // 801D2118
  c->r[3]=c->r[29]+0x00000009u; // 801D211C
  c->lr=0x801D2124u; f_80185588(c); // 801D2120
  c->r[0]=c->r[3]+0x00000001u; // 801D2124
  cmpu(c,0,c->r[0],0x00000050u); // 801D2128
  if (crb(c,1)) { goto L_801D215C; } // 801D212C
  c->r[3]=c->r[29]+0x00000009u; // 801D2130
  c->lr=0x801D2138u; f_80185588(c); // 801D2134
  c->r[4]=c->r[3]|c->r[3]; // 801D2138
  c->r[3]=c->r[30]|c->r[30]; // 801D213C
  c->r[6]=c->r[4]+0x00000001u; // 801D2140
  c->r[7]=c->r[29]+0x00000009u; // 801D2144
  c->r[4]=0u+0x0000000Bu; // 801D2148
  c->r[5]=0u+0x00000008u; // 801D214C
  c->lr=0x801D2154u; f_801D2D04(c); // 801D2150
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2154
  if (!crb(c,2)) { goto L_801D2160; } // 801D2158
L_801D215C:;
  c->r[31]=0u+0x00000007u; // 801D215C
L_801D2160:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D2160
  if (!crb(c,2)) { goto L_801D21B8; } // 801D2164
  c->r[0]=R8(c->r[29]+0x00000059u); // 801D2168
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D216C
  if (crb(c,2)) { goto L_801D21B8; } // 801D2170
  c->r[3]=c->r[29]+0x00000059u; // 801D2174
  c->lr=0x801D217Cu; f_80185588(c); // 801D2178
  c->r[0]=c->r[3]+0x00000001u; // 801D217C
  cmpu(c,0,c->r[0],0x00000050u); // 801D2180
  if (crb(c,1)) { goto L_801D21B4; } // 801D2184
  c->r[3]=c->r[29]+0x00000059u; // 801D2188
  c->lr=0x801D2190u; f_80185588(c); // 801D218C
  c->r[4]=c->r[3]|c->r[3]; // 801D2190
  c->r[3]=c->r[30]|c->r[30]; // 801D2194
  c->r[6]=c->r[4]+0x00000001u; // 801D2198
  c->r[7]=c->r[29]+0x00000059u; // 801D219C
  c->r[4]=0u+0x00000101u; // 801D21A0
  c->r[5]=0u+0x00000004u; // 801D21A4
  c->lr=0x801D21ACu; f_801D2D04(c); // 801D21A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D21AC
  if (!crb(c,2)) { goto L_801D21B8; } // 801D21B0
L_801D21B4:;
  c->r[31]=0u+0x00000007u; // 801D21B4
L_801D21B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D21B8
  if (!crb(c,2)) { goto L_801D2210; } // 801D21BC
  c->r[0]=R8(c->r[29]+0x000000A9u); // 801D21C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D21C4
  if (crb(c,2)) { goto L_801D2210; } // 801D21C8
  c->r[3]=c->r[29]+0x000000A9u; // 801D21CC
  c->lr=0x801D21D4u; f_80185588(c); // 801D21D0
  c->r[0]=c->r[3]+0x00000001u; // 801D21D4
  cmpu(c,0,c->r[0],0x00000050u); // 801D21D8
  if (crb(c,1)) { goto L_801D220C; } // 801D21DC
  c->r[3]=c->r[29]+0x000000A9u; // 801D21E0
  c->lr=0x801D21E8u; f_80185588(c); // 801D21E4
  c->r[4]=c->r[3]|c->r[3]; // 801D21E8
  c->r[3]=c->r[30]|c->r[30]; // 801D21EC
  c->r[6]=c->r[4]+0x00000001u; // 801D21F0
  c->r[7]=c->r[29]+0x000000A9u; // 801D21F4
  c->r[4]=0u+0x0000000Au; // 801D21F8
  c->r[5]=0u+0x00000008u; // 801D21FC
  c->lr=0x801D2204u; f_801D2D04(c); // 801D2200
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2204
  if (!crb(c,2)) { goto L_801D2210; } // 801D2208
L_801D220C:;
  c->r[31]=0u+0x00000007u; // 801D220C
L_801D2210:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D2210
  if (!crb(c,2)) { goto L_801D2250; } // 801D2214
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D2218
  c->r[7]=c->r[1]+0x00000008u; // 801D221C
  c->r[3]=c->r[30]|c->r[30]; // 801D2220
  c->r[4]=0u+0x00000201u; // 801D2224
  c->r[0]=sraw(c,c->r[0],8); // 801D2228
  c->r[5]=0u+0x00000001u; // 801D222C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D2230
  c->r[6]=0u+0x00000002u; // 801D2234
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D2238
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D223C
  c->lr=0x801D2244u; f_801D2D04(c); // 801D2240
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2244
  if (!crb(c,2)) { goto L_801D2250; } // 801D2248
  c->r[31]=0u+0x00000007u; // 801D224C
L_801D2250:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D2250
  if (!crb(c,2)) { goto L_801D2290; } // 801D2254
  c->r[0]=R16(c->r[29]+0x00000004u); // 801D2258
  c->r[7]=c->r[1]+0x00000008u; // 801D225C
  c->r[3]=c->r[30]|c->r[30]; // 801D2260
  c->r[4]=0u+0x00000202u; // 801D2264
  c->r[0]=sraw(c,c->r[0],8); // 801D2268
  c->r[5]=0u+0x00000001u; // 801D226C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D2270
  c->r[6]=0u+0x00000002u; // 801D2274
  c->r[0]=R16(c->r[29]+0x00000004u); // 801D2278
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D227C
  c->lr=0x801D2284u; f_801D2D04(c); // 801D2280
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2284
  if (!crb(c,2)) { goto L_801D2290; } // 801D2288
  c->r[31]=0u+0x00000007u; // 801D228C
L_801D2290:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D2290
  if (!crb(c,2)) { goto L_801D22D0; } // 801D2294
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D2298
  c->r[7]=c->r[1]+0x00000008u; // 801D229C
  c->r[3]=c->r[30]|c->r[30]; // 801D22A0
  c->r[4]=0u+0x00000203u; // 801D22A4
  c->r[0]=sraw(c,c->r[0],8); // 801D22A8
  c->r[5]=0u+0x00000001u; // 801D22AC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D22B0
  c->r[6]=0u+0x00000002u; // 801D22B4
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D22B8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D22BC
  c->lr=0x801D22C4u; f_801D2D04(c); // 801D22C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D22C4
  if (!crb(c,2)) { goto L_801D22D0; } // 801D22C8
  c->r[31]=0u+0x00000007u; // 801D22CC
L_801D22D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D22D0
  if (!crb(c,2)) { goto L_801D22FC; } // 801D22D4
  c->r[3]=c->r[30]|c->r[30]; // 801D22D8
  c->r[7]=c->r[29]+0x00000008u; // 801D22DC
  c->r[4]=0u+0x00000204u; // 801D22E0
  c->r[5]=0u+0x00000005u; // 801D22E4
  c->r[6]=0u+0x00000001u; // 801D22E8
  c->lr=0x801D22F0u; f_801D2D04(c); // 801D22EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D22F0
  if (!crb(c,2)) { goto L_801D22FC; } // 801D22F4
  c->r[31]=0u+0x00000007u; // 801D22F8
L_801D22FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D22FC
  if (!crb(c,2)) { goto L_801D233C; } // 801D2300
  c->r[0]=R16(c->r[29]+0x00000002u); // 801D2304
  c->r[7]=c->r[1]+0x00000008u; // 801D2308
  c->r[3]=c->r[30]|c->r[30]; // 801D230C
  c->r[4]=0u+0x00000205u; // 801D2310
  c->r[0]=sraw(c,c->r[0],8); // 801D2314
  c->r[5]=0u+0x00000001u; // 801D2318
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D231C
  c->r[6]=0u+0x00000002u; // 801D2320
  c->r[0]=R16(c->r[29]+0x00000002u); // 801D2324
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D2328
  c->lr=0x801D2330u; f_801D2D04(c); // 801D232C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2330
  if (!crb(c,2)) { goto L_801D233C; } // 801D2334
  c->r[31]=0u+0x00000007u; // 801D2338
L_801D233C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D233C
  if (crb(c,2)) { goto L_801D2350; } // 801D2340
  c->r[3]=c->r[30]|c->r[30]; // 801D2344
  c->lr=0x801D234Cu; f_801D2BF0(c); // 801D2348
  goto L_801D2368; // 801D234C
L_801D2350:;
  c->r[0]=R8(c->r[29]+0x00000008u); // 801D2350
  cmpu(c,0,c->r[0],0x00000001u); // 801D2354
  if (!crb(c,2)) { goto L_801D2368; } // 801D2358
  c->r[3]=0u+0x803D0000u; // 801D235C
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D2360
  W32(c->r[3]+0x0000121Cu,c->r[30]); // 801D2364
L_801D2368:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2368
L_801D236C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D236C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2370
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2374
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2378
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D237C
  c->lr=c->r[0]; // 801D2380
  c->r[1]=c->r[1]+0x00000020u; // 801D2384
  return; // 801D2388
}

// SDP_GetLocalDiRecord
void f_801D238C(Ctx* __restrict c) {
  trace_call(0x801D238Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D238C
  c->r[0]=c->lr; // 801D2390
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2394
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2398
  c->r[31]=0u+0x00000009u; // 801D239C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D23A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D23A4
  c->r[29]=c->r[3]|c->r[3]; // 801D23A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D23AC
  c->r[28]=c->r[4]|c->r[4]; // 801D23B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801D23B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D23B8
  if (!crb(c,2)) { goto L_801D23D0; } // 801D23BC
  c->r[3]=0u+0x803D0000u; // 801D23C0
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D23C4
  c->r[0]=R32(c->r[3]+0x0000121Cu); // 801D23C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D23CC
L_801D23D0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801D23D0
  c->lr=0x801D23D8u; f_801D2A74(c); // 801D23D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D23D8
  c->r[30]=c->r[3]|c->r[3]; // 801D23DC
  if (crb(c,2)) { goto L_801D2810; } // 801D23E0
  c->r[3]=c->r[29]|c->r[29]; // 801D23E4
  c->r[4]=0u+0x00000000u; // 801D23E8
  c->r[5]=0u+0x000000FAu; // 801D23EC
  c->lr=0x801D23F4u; f_80004688(c); // 801D23F0
  c->r[3]=c->r[30]|c->r[30]; // 801D23F4
  c->r[31]=0u+0x00000000u; // 801D23F8
  c->r[4]=0u+0x00000200u; // 801D23FC
  c->r[5]=0u+0x00000200u; // 801D2400
  c->lr=0x801D2408u; f_801D2AD0(c); // 801D2404
  cmps(c,0,(int32_t)c->r[3],0); // 801D2408
  if (crb(c,2)) { goto L_801D2428; } // 801D240C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D2410
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D2414
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D2418
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D241C
  c->r[0]=c->r[3]+c->r[0]; // 801D2420
  W16(c->r[29]+0x00000000u,c->r[0]); // 801D2424
L_801D2428:;
  c->r[3]=c->r[30]|c->r[30]; // 801D2428
  c->r[4]=0u+0x00000201u; // 801D242C
  c->r[5]=0u+0x00000201u; // 801D2430
  c->lr=0x801D2438u; f_801D2AD0(c); // 801D2434
  cmps(c,0,(int32_t)c->r[3],0); // 801D2438
  if (crb(c,2)) { goto L_801D2458; } // 801D243C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D2440
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D2444
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D2448
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D244C
  c->r[0]=c->r[3]+c->r[0]; // 801D2450
  W16(c->r[29]+0x00000002u,c->r[0]); // 801D2454
L_801D2458:;
  c->r[3]=c->r[30]|c->r[30]; // 801D2458
  c->r[4]=0u+0x00000202u; // 801D245C
  c->r[5]=0u+0x00000202u; // 801D2460
  c->lr=0x801D2468u; f_801D2AD0(c); // 801D2464
  cmps(c,0,(int32_t)c->r[3],0); // 801D2468
  if (crb(c,2)) { goto L_801D2488; } // 801D246C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D2470
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D2474
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D2478
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D247C
  c->r[0]=c->r[3]+c->r[0]; // 801D2480
  W16(c->r[29]+0x00000006u,c->r[0]); // 801D2484
L_801D2488:;
  c->r[3]=c->r[30]|c->r[30]; // 801D2488
  c->r[4]=0u+0x00000203u; // 801D248C
  c->r[5]=0u+0x00000203u; // 801D2490
  c->lr=0x801D2498u; f_801D2AD0(c); // 801D2494
  cmps(c,0,(int32_t)c->r[3],0); // 801D2498
  if (crb(c,2)) { goto L_801D24B8; } // 801D249C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D24A0
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D24A4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D24A8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D24AC
  c->r[0]=c->r[3]+c->r[0]; // 801D24B0
  W16(c->r[29]+0x00000008u,c->r[0]); // 801D24B4
L_801D24B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D24B8
  c->r[4]=0u+0x00000205u; // 801D24BC
  c->r[5]=0u+0x00000205u; // 801D24C0
  c->lr=0x801D24C8u; f_801D2AD0(c); // 801D24C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D24C8
  if (crb(c,2)) { goto L_801D24E8; } // 801D24CC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D24D0
  c->r[3]=R8(c->r[4]+0x00000000u); // 801D24D4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D24D8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D24DC
  c->r[0]=c->r[3]+c->r[0]; // 801D24E0
  W16(c->r[29]+0x00000004u,c->r[0]); // 801D24E4
L_801D24E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D24E8
  c->r[4]=0u+0x00000204u; // 801D24EC
  c->r[5]=0u+0x00000204u; // 801D24F0
  c->lr=0x801D24F8u; f_801D2AD0(c); // 801D24F4
  cmps(c,0,(int32_t)c->r[3],0); // 801D24F8
  if (crb(c,2)) { goto L_801D250C; } // 801D24FC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D2500
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D2504
  W8(c->r[29]+0x0000000Au,c->r[0]); // 801D2508
L_801D250C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D250C
  c->r[4]=0u+0x0000000Bu; // 801D2510
  c->r[5]=0u+0x0000000Bu; // 801D2514
  c->lr=0x801D251Cu; f_801D2AD0(c); // 801D2518
  cmps(c,0,(int32_t)c->r[3],0); // 801D251C
  if (crb(c,2)) { goto L_801D260C; } // 801D2520
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D2524
  c->r[4]=0u+0x00000050u; // 801D2528
  cmpu(c,0,c->r[0],0x00000050u); // 801D252C
  if (!crb(c,0)) { goto L_801D2538; } // 801D2530
  c->r[4]=c->r[0]|c->r[0]; // 801D2534
L_801D2538:;
  cmps(c,1,(int32_t)c->r[4],0); // 801D2538
  c->r[7]=R32(c->r[3]+0x00000004u); // 801D253C
  c->r[8]=0u+0x00000000u; // 801D2540
  if (!crb(c,5)) { goto L_801D260C; } // 801D2544
  cmps(c,0,(int32_t)c->r[4],8); // 801D2548
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 801D254C
  if (!crb(c,1)) { goto L_801D25E0; } // 801D2550
  c->r[6]=0u+0x00000000u; // 801D2554
  if (crb(c,4)) { goto L_801D2570; } // 801D2558
  c->r[3]=0u+0x80000000u; // 801D255C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D2560
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D2564
  if (crb(c,1)) { goto L_801D2570; } // 801D2568
  c->r[6]=0u+0x00000001u; // 801D256C
L_801D2570:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D2570
  if (crb(c,2)) { goto L_801D25E0; } // 801D2574
  c->r[0]=c->r[5]+0x00000007u; // 801D2578
  c->r[3]=c->r[29]+0x0000000Bu; // 801D257C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D2580
  c->ctr=c->r[0]; // 801D2584
  cmps(c,0,(int32_t)c->r[5],0); // 801D2588
  if (!crb(c,1)) { goto L_801D25E0; } // 801D258C
L_801D2590:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D2590
  c->r[8]=c->r[8]+0x00000008u; // 801D2594
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D2598
  c->r[0]=R8(c->r[7]+0x00000001u); // 801D259C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801D25A0
  c->r[0]=R8(c->r[7]+0x00000002u); // 801D25A4
  W8(c->r[3]+0x00000002u,c->r[0]); // 801D25A8
  c->r[0]=R8(c->r[7]+0x00000003u); // 801D25AC
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D25B0
  c->r[0]=R8(c->r[7]+0x00000004u); // 801D25B4
  W8(c->r[3]+0x00000004u,c->r[0]); // 801D25B8
  c->r[0]=R8(c->r[7]+0x00000005u); // 801D25BC
  W8(c->r[3]+0x00000005u,c->r[0]); // 801D25C0
  c->r[0]=R8(c->r[7]+0x00000006u); // 801D25C4
  W8(c->r[3]+0x00000006u,c->r[0]); // 801D25C8
  c->r[0]=R8(c->r[7]+0x00000007u); // 801D25CC
  c->r[7]=c->r[7]+0x00000008u; // 801D25D0
  W8(c->r[3]+0x00000007u,c->r[0]); // 801D25D4
  c->r[3]=c->r[3]+0x00000008u; // 801D25D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2590; } // 801D25DC
L_801D25E0:;
  c->r[3]=c->r[29]+c->r[8]; // 801D25E0
  c->r[0]=c->r[4]-c->r[8]; // 801D25E4
  c->r[3]=c->r[3]+0x0000000Bu; // 801D25E8
  c->ctr=c->r[0]; // 801D25EC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 801D25F0
  if (!crb(c,0)) { goto L_801D260C; } // 801D25F4
L_801D25F8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D25F8
  c->r[7]=c->r[7]+0x00000001u; // 801D25FC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D2600
  c->r[3]=c->r[3]+0x00000001u; // 801D2604
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D25F8; } // 801D2608
L_801D260C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D260C
  c->r[4]=0u+0x00000101u; // 801D2610
  c->r[5]=0u+0x00000101u; // 801D2614
  c->lr=0x801D261Cu; f_801D2AD0(c); // 801D2618
  cmps(c,0,(int32_t)c->r[3],0); // 801D261C
  if (crb(c,2)) { goto L_801D270C; } // 801D2620
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D2624
  c->r[4]=0u+0x00000050u; // 801D2628
  cmpu(c,0,c->r[0],0x00000050u); // 801D262C
  if (!crb(c,0)) { goto L_801D2638; } // 801D2630
  c->r[4]=c->r[0]|c->r[0]; // 801D2634
L_801D2638:;
  cmps(c,1,(int32_t)c->r[4],0); // 801D2638
  c->r[7]=R32(c->r[3]+0x00000004u); // 801D263C
  c->r[8]=0u+0x00000000u; // 801D2640
  if (!crb(c,5)) { goto L_801D270C; } // 801D2644
  cmps(c,0,(int32_t)c->r[4],8); // 801D2648
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 801D264C
  if (!crb(c,1)) { goto L_801D26E0; } // 801D2650
  c->r[6]=0u+0x00000000u; // 801D2654
  if (crb(c,4)) { goto L_801D2670; } // 801D2658
  c->r[3]=0u+0x80000000u; // 801D265C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D2660
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D2664
  if (crb(c,1)) { goto L_801D2670; } // 801D2668
  c->r[6]=0u+0x00000001u; // 801D266C
L_801D2670:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D2670
  if (crb(c,2)) { goto L_801D26E0; } // 801D2674
  c->r[0]=c->r[5]+0x00000007u; // 801D2678
  c->r[3]=c->r[29]+0x0000005Bu; // 801D267C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D2680
  c->ctr=c->r[0]; // 801D2684
  cmps(c,0,(int32_t)c->r[5],0); // 801D2688
  if (!crb(c,1)) { goto L_801D26E0; } // 801D268C
L_801D2690:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D2690
  c->r[8]=c->r[8]+0x00000008u; // 801D2694
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D2698
  c->r[0]=R8(c->r[7]+0x00000001u); // 801D269C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801D26A0
  c->r[0]=R8(c->r[7]+0x00000002u); // 801D26A4
  W8(c->r[3]+0x00000002u,c->r[0]); // 801D26A8
  c->r[0]=R8(c->r[7]+0x00000003u); // 801D26AC
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D26B0
  c->r[0]=R8(c->r[7]+0x00000004u); // 801D26B4
  W8(c->r[3]+0x00000004u,c->r[0]); // 801D26B8
  c->r[0]=R8(c->r[7]+0x00000005u); // 801D26BC
  W8(c->r[3]+0x00000005u,c->r[0]); // 801D26C0
  c->r[0]=R8(c->r[7]+0x00000006u); // 801D26C4
  W8(c->r[3]+0x00000006u,c->r[0]); // 801D26C8
  c->r[0]=R8(c->r[7]+0x00000007u); // 801D26CC
  c->r[7]=c->r[7]+0x00000008u; // 801D26D0
  W8(c->r[3]+0x00000007u,c->r[0]); // 801D26D4
  c->r[3]=c->r[3]+0x00000008u; // 801D26D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2690; } // 801D26DC
L_801D26E0:;
  c->r[3]=c->r[29]+c->r[8]; // 801D26E0
  c->r[0]=c->r[4]-c->r[8]; // 801D26E4
  c->r[3]=c->r[3]+0x0000005Bu; // 801D26E8
  c->ctr=c->r[0]; // 801D26EC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 801D26F0
  if (!crb(c,0)) { goto L_801D270C; } // 801D26F4
L_801D26F8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D26F8
  c->r[7]=c->r[7]+0x00000001u; // 801D26FC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D2700
  c->r[3]=c->r[3]+0x00000001u; // 801D2704
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D26F8; } // 801D2708
L_801D270C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D270C
  c->r[4]=0u+0x0000000Au; // 801D2710
  c->r[5]=0u+0x0000000Au; // 801D2714
  c->lr=0x801D271Cu; f_801D2AD0(c); // 801D2718
  cmps(c,0,(int32_t)c->r[3],0); // 801D271C
  if (crb(c,2)) { goto L_801D2818; } // 801D2720
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D2724
  c->r[4]=0u+0x00000050u; // 801D2728
  cmpu(c,0,c->r[0],0x00000050u); // 801D272C
  if (!crb(c,0)) { goto L_801D2738; } // 801D2730
  c->r[4]=c->r[0]|c->r[0]; // 801D2734
L_801D2738:;
  cmps(c,1,(int32_t)c->r[4],0); // 801D2738
  c->r[7]=R32(c->r[3]+0x00000004u); // 801D273C
  c->r[8]=0u+0x00000000u; // 801D2740
  if (!crb(c,5)) { goto L_801D2818; } // 801D2744
  cmps(c,0,(int32_t)c->r[4],8); // 801D2748
  c->r[5]=c->r[4]+0xFFFFFFF8u; // 801D274C
  if (!crb(c,1)) { goto L_801D27E0; } // 801D2750
  c->r[6]=0u+0x00000000u; // 801D2754
  if (crb(c,4)) { goto L_801D2770; } // 801D2758
  c->r[3]=0u+0x80000000u; // 801D275C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D2760
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D2764
  if (crb(c,1)) { goto L_801D2770; } // 801D2768
  c->r[6]=0u+0x00000001u; // 801D276C
L_801D2770:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D2770
  if (crb(c,2)) { goto L_801D27E0; } // 801D2774
  c->r[0]=c->r[5]+0x00000007u; // 801D2778
  c->r[3]=c->r[29]+0x000000ABu; // 801D277C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D2780
  c->ctr=c->r[0]; // 801D2784
  cmps(c,0,(int32_t)c->r[5],0); // 801D2788
  if (!crb(c,1)) { goto L_801D27E0; } // 801D278C
L_801D2790:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D2790
  c->r[8]=c->r[8]+0x00000008u; // 801D2794
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D2798
  c->r[0]=R8(c->r[7]+0x00000001u); // 801D279C
  W8(c->r[3]+0x00000001u,c->r[0]); // 801D27A0
  c->r[0]=R8(c->r[7]+0x00000002u); // 801D27A4
  W8(c->r[3]+0x00000002u,c->r[0]); // 801D27A8
  c->r[0]=R8(c->r[7]+0x00000003u); // 801D27AC
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D27B0
  c->r[0]=R8(c->r[7]+0x00000004u); // 801D27B4
  W8(c->r[3]+0x00000004u,c->r[0]); // 801D27B8
  c->r[0]=R8(c->r[7]+0x00000005u); // 801D27BC
  W8(c->r[3]+0x00000005u,c->r[0]); // 801D27C0
  c->r[0]=R8(c->r[7]+0x00000006u); // 801D27C4
  W8(c->r[3]+0x00000006u,c->r[0]); // 801D27C8
  c->r[0]=R8(c->r[7]+0x00000007u); // 801D27CC
  c->r[7]=c->r[7]+0x00000008u; // 801D27D0
  W8(c->r[3]+0x00000007u,c->r[0]); // 801D27D4
  c->r[3]=c->r[3]+0x00000008u; // 801D27D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2790; } // 801D27DC
L_801D27E0:;
  c->r[3]=c->r[29]+c->r[8]; // 801D27E0
  c->r[0]=c->r[4]-c->r[8]; // 801D27E4
  c->r[3]=c->r[3]+0x000000ABu; // 801D27E8
  c->ctr=c->r[0]; // 801D27EC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 801D27F0
  if (!crb(c,0)) { goto L_801D2818; } // 801D27F4
L_801D27F8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D27F8
  c->r[7]=c->r[7]+0x00000001u; // 801D27FC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D2800
  c->r[3]=c->r[3]+0x00000001u; // 801D2804
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D27F8; } // 801D2808
  goto L_801D2818; // 801D280C
L_801D2810:;
  c->r[0]=0u+0x00000000u; // 801D2810
  W32(c->r[28]+0x00000000u,c->r[0]); // 801D2814
L_801D2818:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2818
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D281C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2820
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2824
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D2828
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D282C
  c->lr=c->r[0]; // 801D2830
  c->r[1]=c->r[1]+0x00000020u; // 801D2834
  return; // 801D2838
}

// SDP_SetTraceLevel
void f_801D283C(Ctx* __restrict c) {
  trace_call(0x801D283Cu);
  cmpu(c,0,c->r[3],0x000000FFu); // 801D283C
  if (crb(c,2)) { goto L_801D2850; } // 801D2840
  c->r[4]=0u+0x803D0000u; // 801D2844
  c->r[4]=c->r[4]+0xFFFFBDE0u; // 801D2848
  W8(c->r[4]+0x00004630u,c->r[3]); // 801D284C
L_801D2850:;
  c->r[3]=0u+0x803D0000u; // 801D2850
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D2854
  c->r[3]=R8(c->r[3]+0x00004630u); // 801D2858
  return; // 801D285C
}

// sdp_db_service_search
void f_801D2860(Ctx* __restrict c) {
  trace_call(0x801D2860u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2860
  c->r[0]=c->lr; // 801D2864
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2868
  c->r[11]=c->r[1]+0x00000030u; // 801D286C
  c->lr=0x801D2874u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2870
  c->r[5]=0u+0x803D0000u; // 801D2874
  cmps(c,0,(int32_t)c->r[3],0); // 801D2878
  c->r[5]=c->r[5]+0xFFFFBDE0u; // 801D287C
  c->r[29]=c->r[4]|c->r[4]; // 801D2880
  c->r[0]=R16(c->r[5]+0x00001222u); // 801D2884
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)664); // 801D2888
  c->r[4]=c->r[5]+c->r[0]; // 801D288C
  c->r[30]=c->r[4]+0x00001224u; // 801D2890
  if (!crb(c,2)) { goto L_801D28A0; } // 801D2894
  c->r[28]=c->r[5]+0x00001224u; // 801D2898
  goto L_801D2978; // 801D289C
L_801D28A0:;
  c->r[28]=c->r[3]+0x00000298u; // 801D28A0
  goto L_801D2978; // 801D28A4
L_801D28A8:;
  c->r[31]=0u+0x00000000u; // 801D28A8
  goto L_801D294C; // 801D28AC
L_801D28B0:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 801D28B0
  c->r[24]=c->r[28]+0x0000000Cu; // 801D28B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 801D28B8
  c->r[25]=0u+0x00000000u; // 801D28BC
  c->r[27]=c->r[29]+c->r[0]; // 801D28C0
  c->r[26]=c->r[27]+0x00000004u; // 801D28C4
  goto L_801D2928; // 801D28C8
L_801D28CC:;
  c->r[0]=R8(c->r[24]+0x0000000Au); // 801D28CC
  cmpu(c,0,c->r[0],0x00000003u); // 801D28D0
  if (!crb(c,2)) { goto L_801D28F8; } // 801D28D4
  c->r[3]=R32(c->r[24]+0x00000004u); // 801D28D8
  c->r[5]=c->r[26]|c->r[26]; // 801D28DC
  c->r[4]=R32(c->r[24]+0x00000000u); // 801D28E0
  c->r[6]=R16(c->r[27]+0x00000002u); // 801D28E4
  c->lr=0x801D28ECu; f_801D6D0C(c); // 801D28E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D28EC
  if (!crb(c,2)) { goto L_801D2938; } // 801D28F0
  goto L_801D2920; // 801D28F4
L_801D28F8:;
  cmpu(c,0,c->r[0],0x00000006u); // 801D28F8
  if (!crb(c,2)) { goto L_801D2920; } // 801D28FC
  c->r[3]=R32(c->r[24]+0x00000004u); // 801D2900
  c->r[5]=c->r[26]|c->r[26]; // 801D2904
  c->r[4]=R32(c->r[24]+0x00000000u); // 801D2908
  c->r[7]=0u+0x00000000u; // 801D290C
  c->r[6]=R16(c->r[27]+0x00000002u); // 801D2910
  c->lr=0x801D2918u; f_801D299C(c); // 801D2914
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2918
  if (!crb(c,2)) { goto L_801D2938; } // 801D291C
L_801D2920:;
  c->r[25]=c->r[25]+0x00000001u; // 801D2920
  c->r[24]=c->r[24]+0x0000000Cu; // 801D2924
L_801D2928:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 801D2928
  c->r[3]=rotl(c->r[25],0)&0x0000FFFFu; // 801D292C
  cmpu(c,0,c->r[3],c->r[0]); // 801D2930
  if (crb(c,0)) { IRQCHK(c); goto L_801D28CC; } // 801D2934
L_801D2938:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 801D2938
  c->r[3]=rotl(c->r[25],0)&0x0000FFFFu; // 801D293C
  cmpu(c,0,c->r[3],c->r[0]); // 801D2940
  if (crb(c,2)) { goto L_801D295C; } // 801D2944
  c->r[31]=c->r[31]+0x00000001u; // 801D2948
L_801D294C:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D294C
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 801D2950
  cmpu(c,0,c->r[3],c->r[0]); // 801D2954
  if (crb(c,0)) { IRQCHK(c); goto L_801D28B0; } // 801D2958
L_801D295C:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D295C
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 801D2960
  cmpu(c,0,c->r[3],c->r[0]); // 801D2964
  if (!crb(c,2)) { goto L_801D2974; } // 801D2968
  c->r[3]=c->r[28]|c->r[28]; // 801D296C
  goto L_801D2984; // 801D2970
L_801D2974:;
  c->r[28]=c->r[28]+0x00000298u; // 801D2974
L_801D2978:;
  cmpu(c,0,c->r[28],c->r[30]); // 801D2978
  if (crb(c,0)) { IRQCHK(c); goto L_801D28A8; } // 801D297C
  c->r[3]=0u+0x00000000u; // 801D2980
L_801D2984:;
  c->r[11]=c->r[1]+0x00000030u; // 801D2984
  c->lr=0x801D298Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2988
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D298C
  c->lr=c->r[0]; // 801D2990
  c->r[1]=c->r[1]+0x00000030u; // 801D2994
  return; // 801D2998
}

// find_uuid_in_seq
void f_801D299C(Ctx* __restrict c) {
  trace_call(0x801D299Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D299C
  c->r[0]=c->lr; // 801D29A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D29A4
  c->r[11]=c->r[1]+0x00000030u; // 801D29A8
  c->lr=0x801D29B0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D29AC
  cmps(c,0,(int32_t)c->r[7],3); // 801D29B0
  c->r[26]=c->r[3]|c->r[3]; // 801D29B4
  c->r[27]=c->r[5]|c->r[5]; // 801D29B8
  c->r[28]=c->r[6]|c->r[6]; // 801D29BC
  c->r[29]=c->r[7]|c->r[7]; // 801D29C0
  c->r[31]=c->r[3]+c->r[4]; // 801D29C4
  if (!crb(c,1)) { goto L_801D2A50; } // 801D29C8
  c->r[3]=0u+0x00000000u; // 801D29CC
  goto L_801D2A5C; // 801D29D0
  goto L_801D2A50; // 801D29D4
L_801D29D8:;
  c->r[30]=R8(c->r[26]+0x00000000u); // 801D29D8
  c->r[3]=c->r[26]+0x00000001u; // 801D29DC
  c->r[5]=c->r[1]+0x00000008u; // 801D29E0
  c->r[4]=c->r[30]|c->r[30]; // 801D29E4
  c->lr=0x801D29ECu; f_801D6B5C(c); // 801D29E8
  c->r[0]=rotl(c->r[30],29)&0x0000001Fu; // 801D29EC
  c->r[26]=c->r[3]|c->r[3]; // 801D29F0
  cmpu(c,0,c->r[0],0x00000003u); // 801D29F4
  if (!crb(c,2)) { goto L_801D2A1C; } // 801D29F8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D29FC
  c->r[5]=c->r[27]|c->r[27]; // 801D2A00
  c->r[6]=c->r[28]|c->r[28]; // 801D2A04
  c->lr=0x801D2A0Cu; f_801D6D0C(c); // 801D2A08
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2A0C
  if (crb(c,2)) { goto L_801D2A48; } // 801D2A10
  c->r[3]=0u+0x00000001u; // 801D2A14
  goto L_801D2A5C; // 801D2A18
L_801D2A1C:;
  cmpu(c,0,c->r[0],0x00000006u); // 801D2A1C
  if (!crb(c,2)) { goto L_801D2A48; } // 801D2A20
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D2A24
  c->r[5]=c->r[27]|c->r[27]; // 801D2A28
  c->r[6]=c->r[28]|c->r[28]; // 801D2A2C
  c->r[7]=c->r[29]+0x00000001u; // 801D2A30
  c->lr=0x801D2A38u; f_801D299C(c); // 801D2A34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2A38
  if (crb(c,2)) { goto L_801D2A48; } // 801D2A3C
  c->r[3]=0u+0x00000001u; // 801D2A40
  goto L_801D2A5C; // 801D2A44
L_801D2A48:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D2A48
  c->r[26]=c->r[26]+c->r[0]; // 801D2A4C
L_801D2A50:;
  cmpu(c,0,c->r[26],c->r[31]); // 801D2A50
  if (crb(c,0)) { IRQCHK(c); goto L_801D29D8; } // 801D2A54
  c->r[3]=0u+0x00000000u; // 801D2A58
L_801D2A5C:;
  c->r[11]=c->r[1]+0x00000030u; // 801D2A5C
  c->lr=0x801D2A64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2A60
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D2A64
  c->lr=c->r[0]; // 801D2A68
  c->r[1]=c->r[1]+0x00000030u; // 801D2A6C
  return; // 801D2A70
}

// sdp_db_find_record
void f_801D2A74(Ctx* __restrict c) {
  trace_call(0x801D2A74u);
  c->r[5]=0u+0x803D0000u; // 801D2A74
  c->r[0]=0u+0x00000298u; // 801D2A78
  c->r[5]=c->r[5]+0xFFFFBDE0u; // 801D2A7C
  c->r[4]=R16(c->r[5]+0x00001222u); // 801D2A80
  c->r[6]=c->r[5]+0x00001224u; // 801D2A84
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)664); // 801D2A88
  c->r[4]=c->r[5]+c->r[4]; // 801D2A8C
  c->r[5]=c->r[4]+0x00001224u; // 801D2A90
  c->r[4]=c->r[5]+0x00000297u; // 801D2A94
  c->r[4]=c->r[4]-c->r[6]; // 801D2A98
  c->r[4]=divwu(c->r[4],c->r[0]); // 801D2A9C
  c->ctr=c->r[4]; // 801D2AA0
  cmpu(c,0,c->r[6],c->r[5]); // 801D2AA4
  if (!crb(c,0)) { goto L_801D2AC8; } // 801D2AA8
L_801D2AAC:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801D2AAC
  cmpu(c,0,c->r[0],c->r[3]); // 801D2AB0
  if (!crb(c,2)) { goto L_801D2AC0; } // 801D2AB4
  c->r[3]=c->r[6]|c->r[6]; // 801D2AB8
  return; // 801D2ABC
L_801D2AC0:;
  c->r[6]=c->r[6]+0x00000298u; // 801D2AC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2AAC; } // 801D2AC4
L_801D2AC8:;
  c->r[3]=0u+0x00000000u; // 801D2AC8
  return; // 801D2ACC
}

// sdp_db_find_attr_in_rec
void f_801D2AD0(Ctx* __restrict c) {
  trace_call(0x801D2AD0u);
  c->r[6]=R16(c->r[3]+0x00000008u); // 801D2AD0
  c->r[3]=c->r[3]+0x0000000Cu; // 801D2AD4
  c->r[7]=0u+0x00000000u; // 801D2AD8
  goto L_801D2AFC; // 801D2ADC
L_801D2AE0:;
  c->r[0]=R16(c->r[3]+0x00000008u); // 801D2AE0
  cmpu(c,0,c->r[0],c->r[4]); // 801D2AE4
  if (crb(c,0)) { goto L_801D2AF4; } // 801D2AE8
  cmpu(c,0,c->r[0],c->r[5]); // 801D2AEC
  if (!crb(c,1)) return; // 801D2AF0
L_801D2AF4:;
  c->r[7]=c->r[7]+0x00000001u; // 801D2AF4
  c->r[3]=c->r[3]+0x0000000Cu; // 801D2AF8
L_801D2AFC:;
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; // 801D2AFC
  cmpu(c,0,c->r[0],c->r[6]); // 801D2B00
  if (crb(c,0)) { IRQCHK(c); goto L_801D2AE0; } // 801D2B04
  c->r[3]=0u+0x00000000u; // 801D2B08
  return; // 801D2B0C
}

// SDP_CreateRecord
void f_801D2B10(Ctx* __restrict c) {
  trace_call(0x801D2B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B10
  c->r[0]=c->lr; // 801D2B14
  c->r[3]=0u+0x803D0000u; // 801D2B18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2B1C
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D2B20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2B24
  c->r[31]=c->r[3]+0x0000121Cu; // 801D2B28
  c->r[0]=R16(c->r[3]+0x00001222u); // 801D2B2C
  cmpu(c,0,c->r[0],0x00000014u); // 801D2B30
  if (!crb(c,0)) { goto L_801D2BD8; } // 801D2B34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)664); // 801D2B38
  c->r[4]=0u+0x00000000u; // 801D2B3C
  c->r[5]=0u+0x00000298u; // 801D2B40
  c->r[3]=c->r[31]+c->r[0]; // 801D2B44
  c->r[3]=c->r[3]+0x00000008u; // 801D2B48
  c->lr=0x801D2B50u; f_80004688(c); // 801D2B4C
  c->r[4]=R16(c->r[31]+0x00000006u); // 801D2B50
  cmps(c,0,(int32_t)c->r[4],0); // 801D2B54
  if (crb(c,2)) { goto L_801D2B74; } // 801D2B58
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D2B5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)664); // 801D2B60
  c->r[3]=c->r[31]+c->r[0]; // 801D2B64
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D2B68
  c->r[3]=c->r[3]+0x00000001u; // 801D2B6C
  goto L_801D2B78; // 801D2B70
L_801D2B74:;
  c->r[3]=0u+0x00010000u; // 801D2B74
L_801D2B78:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)664); // 801D2B78
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 801D2B7C
  c->r[6]=rotl(c->r[3],16)&0x000000FFu; // 801D2B80
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D2B84
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 801D2B88
  c->r[4]=c->r[31]+c->r[4]; // 801D2B8C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D2B90
  c->r[7]=c->r[1]+0x00000008u; // 801D2B94
  c->r[4]=0u+0x00000000u; // 801D2B98
  c->r[5]=0u+0x00000001u; // 801D2B9C
  c->r[8]=R16(c->r[31]+0x00000006u); // 801D2BA0
  W8(c->r[1]+0x00000009u,c->r[6]); // 801D2BA4
  c->r[6]=0u+0x00000004u; // 801D2BA8
  c->r[8]=c->r[8]+0x00000001u; // 801D2BAC
  W16(c->r[31]+0x00000006u,c->r[8]); // 801D2BB0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D2BB4
  W8(c->r[1]+0x0000000Bu,c->r[3]); // 801D2BB8
  c->lr=0x801D2BC0u; f_801D2D04(c); // 801D2BBC
  c->r[3]=R16(c->r[31]+0x00000006u); // 801D2BC0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D2BC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)664); // 801D2BC8
  c->r[3]=c->r[31]+c->r[0]; // 801D2BCC
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D2BD0
  goto L_801D2BDC; // 801D2BD4
L_801D2BD8:;
  c->r[3]=0u+0x00000000u; // 801D2BD8
L_801D2BDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2BDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2BE0
  c->lr=c->r[0]; // 801D2BE4
  c->r[1]=c->r[1]+0x00000020u; // 801D2BE8
  return; // 801D2BEC
}

// SDP_DeleteRecord
void f_801D2BF0(Ctx* __restrict c) {
  trace_call(0x801D2BF0u);
  c->r[4]=0u+0x803D0000u; // 801D2BF0
  cmps(c,0,(int32_t)c->r[3],0); // 801D2BF4
  c->r[4]=c->r[4]+0xFFFFBDE0u; // 801D2BF8
  c->r[10]=c->r[4]+0x00001224u; // 801D2BFC
  if (crb(c,2)) { goto L_801D2C10; } // 801D2C00
  c->r[4]=R16(c->r[4]+0x00001222u); // 801D2C04
  cmps(c,0,(int32_t)c->r[4],0); // 801D2C08
  if (!crb(c,2)) { goto L_801D2C30; } // 801D2C0C
L_801D2C10:;
  c->r[4]=0u+0x803D0000u; // 801D2C10
  c->r[0]=0u+0x00000000u; // 801D2C14
  c->r[4]=c->r[4]+0xFFFFBDE0u; // 801D2C18
  c->r[3]=0u+0x00000001u; // 801D2C1C
  W16(c->r[4]+0x00001222u,c->r[0]); // 801D2C20
  W32(c->r[4]+0x0000121Cu,c->r[0]); // 801D2C24
  W8(c->r[4]+0x00001220u,c->r[0]); // 801D2C28
  return; // 801D2C2C
L_801D2C30:;
  c->r[9]=0u+0x00000000u; // 801D2C30
  goto L_801D2CF0; // 801D2C34
L_801D2C38:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 801D2C38
  cmpu(c,0,c->r[0],c->r[3]); // 801D2C3C
  if (!crb(c,2)) { goto L_801D2CE8; } // 801D2C40
  c->r[5]=0u+0x803D0000u; // 801D2C44
  c->r[7]=0u+0x00000053u; // 801D2C48
  c->r[5]=c->r[5]+0xFFFFBDE0u; // 801D2C4C
  goto L_801D2CB0; // 801D2C50
L_801D2C54:;
  c->r[8]=c->r[10]+0xFFFFFFFCu; // 801D2C54
  c->r[6]=c->r[10]+0x00000294u; // 801D2C58
  c->ctr=c->r[7]; // 801D2C5C
L_801D2C60:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801D2C60
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 801D2C64
  W32(c->r[8]+0x00000004u,c->r[4]); // 801D2C68
  {uint32_t ea=c->r[8]+0x00000008u; W32(ea,c->r[0]); c->r[8]=ea;} // 801D2C6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2C60; } // 801D2C70
  c->r[8]=0u+0x00000000u; // 801D2C74
  goto L_801D2C98; // 801D2C78
L_801D2C7C:;
  c->r[0]=rotl(c->r[8],0)&0x0000FFFFu; // 801D2C7C
  c->r[8]=c->r[8]+0x00000001u; // 801D2C80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D2C84
  c->r[6]=c->r[10]+c->r[0]; // 801D2C88
  c->r[4]=R32(c->r[6]+0x00000010u); // 801D2C8C
  c->r[0]=c->r[4]+0xFFFFFD68u; // 801D2C90
  W32(c->r[6]+0x00000010u,c->r[0]); // 801D2C94
L_801D2C98:;
  c->r[0]=R16(c->r[10]+0x00000008u); // 801D2C98
  c->r[4]=rotl(c->r[8],0)&0x0000FFFFu; // 801D2C9C
  cmpu(c,0,c->r[4],c->r[0]); // 801D2CA0
  if (crb(c,0)) { IRQCHK(c); goto L_801D2C7C; } // 801D2CA4
  c->r[9]=c->r[9]+0x00000001u; // 801D2CA8
  c->r[10]=c->r[10]+0x00000298u; // 801D2CAC
L_801D2CB0:;
  c->r[4]=R16(c->r[5]+0x00001222u); // 801D2CB0
  c->r[0]=rotl(c->r[9],0)&0x0000FFFFu; // 801D2CB4
  cmpu(c,0,c->r[0],c->r[4]); // 801D2CB8
  if (crb(c,0)) { IRQCHK(c); goto L_801D2C54; } // 801D2CBC
  c->r[0]=R32(c->r[5]+0x0000121Cu); // 801D2CC0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801D2CC4
  W16(c->r[5]+0x00001222u,c->r[4]); // 801D2CC8
  cmpu(c,0,c->r[0],c->r[3]); // 801D2CCC
  if (!crb(c,2)) { goto L_801D2CE0; } // 801D2CD0
  c->r[0]=0u+0x00000000u; // 801D2CD4
  W32(c->r[5]+0x0000121Cu,c->r[0]); // 801D2CD8
  W8(c->r[5]+0x00001220u,c->r[0]); // 801D2CDC
L_801D2CE0:;
  c->r[3]=0u+0x00000001u; // 801D2CE0
  return; // 801D2CE4
L_801D2CE8:;
  c->r[9]=c->r[9]+0x00000001u; // 801D2CE8
  c->r[10]=c->r[10]+0x00000298u; // 801D2CEC
L_801D2CF0:;
  c->r[0]=rotl(c->r[9],0)&0x0000FFFFu; // 801D2CF0
  cmpu(c,0,c->r[0],c->r[4]); // 801D2CF4
  if (crb(c,0)) { IRQCHK(c); goto L_801D2C38; } // 801D2CF8
  c->r[3]=0u+0x00000000u; // 801D2CFC
  return; // 801D2D00
}

// SDP_AddAttribute
void f_801D2D04(Ctx* __restrict c) {
  trace_call(0x801D2D04u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2D04
  c->r[0]=c->lr; // 801D2D08
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2D0C
  c->r[11]=c->r[1]+0x00000030u; // 801D2D10
  c->lr=0x801D2D18u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2D14
  c->r[8]=0u+0x803D0000u; // 801D2D18
  c->r[26]=c->r[5]|c->r[5]; // 801D2D1C
  c->r[8]=c->r[8]+0xFFFFBDE0u; // 801D2D20
  c->r[24]=c->r[3]|c->r[3]; // 801D2D24
  c->r[9]=R16(c->r[8]+0x00001222u); // 801D2D28
  c->r[25]=c->r[4]|c->r[4]; // 801D2D2C
  c->r[27]=c->r[6]|c->r[6]; // 801D2D30
  c->r[28]=c->r[7]|c->r[7]; // 801D2D34
  c->r[30]=c->r[8]+0x00001224u; // 801D2D38
  c->r[5]=0u+0x00000000u; // 801D2D3C
  goto L_801D3074; // 801D2D40
L_801D2D44:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D2D44
  cmpu(c,0,c->r[0],c->r[3]); // 801D2D48
  if (!crb(c,2)) { goto L_801D306C; } // 801D2D4C
  c->r[3]=R16(c->r[30]+0x00000008u); // 801D2D50
  c->r[29]=c->r[30]+0x0000000Cu; // 801D2D54
  c->r[31]=0u+0x00000000u; // 801D2D58
  goto L_801D2D88; // 801D2D5C
L_801D2D60:;
  c->r[0]=R16(c->r[29]+0x00000008u); // 801D2D60
  cmpu(c,0,c->r[0],c->r[4]); // 801D2D64
  if (!crb(c,2)) { goto L_801D2D7C; } // 801D2D68
  c->r[3]=c->r[24]|c->r[24]; // 801D2D6C
  c->r[4]=c->r[25]|c->r[25]; // 801D2D70
  c->lr=0x801D2D78u; f_801D32F0(c); // 801D2D74
  goto L_801D2D94; // 801D2D78
L_801D2D7C:;
  if (crb(c,1)) { goto L_801D2D94; } // 801D2D7C
  c->r[31]=c->r[31]+0x00000001u; // 801D2D80
  c->r[29]=c->r[29]+0x0000000Cu; // 801D2D84
L_801D2D88:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 801D2D88
  cmpu(c,0,c->r[0],c->r[3]); // 801D2D8C
  if (crb(c,0)) { IRQCHK(c); goto L_801D2D60; } // 801D2D90
L_801D2D94:;
  c->r[5]=R16(c->r[30]+0x00000008u); // 801D2D94
  cmpu(c,0,c->r[5],0x00000019u); // 801D2D98
  if (!crb(c,2)) { goto L_801D2DA8; } // 801D2D9C
  c->r[3]=0u+0x00000000u; // 801D2DA0
  goto L_801D3084; // 801D2DA4
L_801D2DA8:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 801D2DA8
  cmpu(c,0,c->r[0],c->r[5]); // 801D2DAC
  if (!crb(c,2)) { goto L_801D2DC4; } // 801D2DB0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 801D2DB4
  c->r[3]=c->r[30]+c->r[0]; // 801D2DB8
  c->r[29]=c->r[3]+0x0000000Cu; // 801D2DBC
  goto L_801D2F88; // 801D2DC0
L_801D2DC4:;
  cmpu(c,1,c->r[5],c->r[0]); // 801D2DC4
  if (!crb(c,5)) { goto L_801D2F88; } // 801D2DC8
  c->r[0]=c->r[5]-c->r[31]; // 801D2DCC
  c->r[3]=c->r[31]+0x00000008u; // 801D2DD0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2DD4
  cmpu(c,0,c->r[0],0x00000008u); // 801D2DD8
  if (!crb(c,1)) { goto L_801D2F44; } // 801D2DDC
  if (crb(c,4)) { goto L_801D2F44; } // 801D2DE0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D2DE4
  c->r[0]=c->r[5]+0x00000007u; // 801D2DE8
  c->r[0]=c->r[0]-c->r[3]; // 801D2DEC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D2DF0
  c->ctr=c->r[0]; // 801D2DF4
  cmpu(c,0,c->r[5],c->r[3]); // 801D2DF8
  if (!crb(c,1)) { goto L_801D2F44; } // 801D2DFC
L_801D2E00:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 801D2E00
  c->r[3]=c->r[5]+0x00010000u; // 801D2E04
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D2E08
  {uint32_t ea=c->r[4]+c->r[30]; c->r[9]=R32(ea); c->r[4]=ea;} // 801D2E0C
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 801D2E10
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D2E14
  c->r[7]=R32(c->r[4]+0x00000004u); // 801D2E18
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 801D2E1C
  c->r[8]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D2E20
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801D2E24
  W32(c->r[4]+0x0000000Cu,c->r[9]); // 801D2E28
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2E2C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801D2E30
  W32(c->r[4]+0x00000010u,c->r[7]); // 801D2E34
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2E38
  c->r[23]=c->r[30]+c->r[8]; // 801D2E3C
  c->r[11]=R32(c->r[4]+0x00000008u); // 801D2E40
  c->r[10]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D2E44
  c->r[6]=c->r[3]+0xFFFFFFFCu; // 801D2E48
  W32(c->r[4]+0x00000014u,c->r[11]); // 801D2E4C
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D2E50
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 801D2E54
  c->r[12]=R32(c->r[30]+c->r[8]); // 801D2E58
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 801D2E5C
  c->r[11]=R32(c->r[23]+0x00000004u); // 801D2E60
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2E64
  W32(c->r[4]+0x00000000u,c->r[12]); // 801D2E68
  c->r[12]=c->r[30]+c->r[10]; // 801D2E6C
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 801D2E70
  c->r[10]=c->r[30]+c->r[9]; // 801D2E74
  c->r[8]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D2E78
  W32(c->r[4]+0x00000004u,c->r[11]); // 801D2E7C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2E80
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 801D2E84
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D2E88
  c->r[6]=R32(c->r[23]+0x00000008u); // 801D2E8C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2E90
  W32(c->r[4]+0x00000008u,c->r[6]); // 801D2E94
  c->r[9]=c->r[30]+c->r[8]; // 801D2E98
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 801D2E9C
  c->r[11]=R32(c->r[12]+0x00000000u); // 801D2EA0
  c->r[8]=c->r[30]+c->r[7]; // 801D2EA4
  c->r[7]=c->r[30]+c->r[3]; // 801D2EA8
  c->r[3]=R32(c->r[12]+0x00000004u); // 801D2EAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D2EB0
  W32(c->r[4]+0xFFFFFFF4u,c->r[11]); // 801D2EB4
  W32(c->r[4]+0xFFFFFFF8u,c->r[3]); // 801D2EB8
  c->r[6]=c->r[30]+c->r[0]; // 801D2EBC
  c->r[0]=R32(c->r[12]+0x00000008u); // 801D2EC0
  W32(c->r[4]+0xFFFFFFFCu,c->r[0]); // 801D2EC4
  c->r[3]=R32(c->r[10]+0x00000000u); // 801D2EC8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D2ECC
  W32(c->r[4]+0xFFFFFFE8u,c->r[3]); // 801D2ED0
  W32(c->r[4]+0xFFFFFFECu,c->r[0]); // 801D2ED4
  c->r[0]=R32(c->r[10]+0x00000008u); // 801D2ED8
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 801D2EDC
  c->r[3]=R32(c->r[9]+0x00000000u); // 801D2EE0
  c->r[0]=R32(c->r[9]+0x00000004u); // 801D2EE4
  W32(c->r[4]+0xFFFFFFDCu,c->r[3]); // 801D2EE8
  W32(c->r[4]+0xFFFFFFE0u,c->r[0]); // 801D2EEC
  c->r[0]=R32(c->r[9]+0x00000008u); // 801D2EF0
  W32(c->r[4]+0xFFFFFFE4u,c->r[0]); // 801D2EF4
  c->r[3]=R32(c->r[8]+0x00000000u); // 801D2EF8
  c->r[0]=R32(c->r[8]+0x00000004u); // 801D2EFC
  W32(c->r[4]+0xFFFFFFD0u,c->r[3]); // 801D2F00
  W32(c->r[4]+0xFFFFFFD4u,c->r[0]); // 801D2F04
  c->r[0]=R32(c->r[8]+0x00000008u); // 801D2F08
  W32(c->r[4]+0xFFFFFFD8u,c->r[0]); // 801D2F0C
  c->r[3]=R32(c->r[7]+0x00000000u); // 801D2F10
  c->r[0]=R32(c->r[7]+0x00000004u); // 801D2F14
  W32(c->r[4]+0xFFFFFFC4u,c->r[3]); // 801D2F18
  W32(c->r[4]+0xFFFFFFC8u,c->r[0]); // 801D2F1C
  c->r[0]=R32(c->r[7]+0x00000008u); // 801D2F20
  W32(c->r[4]+0xFFFFFFCCu,c->r[0]); // 801D2F24
  c->r[3]=R32(c->r[6]+0x00000000u); // 801D2F28
  c->r[0]=R32(c->r[6]+0x00000004u); // 801D2F2C
  W32(c->r[4]+0xFFFFFFB8u,c->r[3]); // 801D2F30
  W32(c->r[4]+0xFFFFFFBCu,c->r[0]); // 801D2F34
  c->r[0]=R32(c->r[6]+0x00000008u); // 801D2F38
  W32(c->r[4]+0xFFFFFFC0u,c->r[0]); // 801D2F3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2E00; } // 801D2F40
L_801D2F44:;
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 801D2F44
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; // 801D2F48
  c->r[0]=c->r[4]-c->r[3]; // 801D2F4C
  c->ctr=c->r[0]; // 801D2F50
  cmpu(c,0,c->r[4],c->r[3]); // 801D2F54
  if (!crb(c,1)) { goto L_801D2F88; } // 801D2F58
L_801D2F5C:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 801D2F5C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D2F60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D2F64
  c->r[4]=c->r[30]+c->r[0]; // 801D2F68
  c->r[3]=R32(c->r[30]+c->r[0]); // 801D2F6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801D2F70
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801D2F74
  W32(c->r[4]+0x00000010u,c->r[0]); // 801D2F78
  c->r[0]=R32(c->r[4]+0x00000008u); // 801D2F7C
  W32(c->r[4]+0x00000014u,c->r[0]); // 801D2F80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2F5C; } // 801D2F84
L_801D2F88:;
  c->r[3]=R16(c->r[30]+0x00000008u); // 801D2F88
  c->r[0]=c->r[3]+0x00000001u; // 801D2F8C
  W16(c->r[30]+0x00000008u,c->r[0]); // 801D2F90
  W16(c->r[29]+0x00000008u,c->r[25]); // 801D2F94
  W32(c->r[29]+0x00000000u,c->r[27]); // 801D2F98
  W8(c->r[29]+0x0000000Au,c->r[26]); // 801D2F9C
  c->r[6]=R32(c->r[30]+0x00000004u); // 801D2FA0
  c->r[0]=c->r[6]+c->r[27]; // 801D2FA4
  cmpu(c,0,c->r[0],0x0000015Eu); // 801D2FA8
  if (crb(c,0)) { goto L_801D2FFC; } // 801D2FAC
  c->r[3]=0u+0x803D0000u; // 801D2FB0
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D2FB4
  c->r[0]=R8(c->r[3]+0x00004630u); // 801D2FB8
  cmpu(c,0,c->r[0],0x00000002u); // 801D2FBC
  if (crb(c,0)) { goto L_801D2FE0; } // 801D2FC0
  c->r[3]=0u+0x000A0000u; // 801D2FC4
  c->r[4]=0u+0x80330000u; // 801D2FC8
  c->r[5]=c->r[27]|c->r[27]; // 801D2FCC
  c->r[6]=addc(c,~c->r[6],0x0000015Eu,1); // 801D2FD0
  c->r[3]=c->r[3]+0x00000001u; // 801D2FD4
  c->r[4]=c->r[4]+0x00006658u; // 801D2FD8
  c->lr=0x801D2FE0u; f_801ACB50(c); // 801D2FDC
L_801D2FE0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D2FE0
  c->r[3]=0u+0x00000000u; // 801D2FE4
  c->r[27]=addc(c,~c->r[0],0x0000015Eu,1); // 801D2FE8
  W8(c->r[28]+c->r[27],c->r[3]); // 801D2FEC
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D2FF0
  c->r[0]=addc(c,~c->r[0],0x0000015Fu,1); // 801D2FF4
  W8(c->r[28]+c->r[0],c->r[3]); // 801D2FF8
L_801D2FFC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D2FFC
  if (crb(c,2)) { goto L_801D3040; } // 801D3000
  cmps(c,0,(int32_t)c->r[28],0); // 801D3004
  if (crb(c,2)) { goto L_801D3040; } // 801D3008
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D300C
  c->r[4]=c->r[28]|c->r[28]; // 801D3010
  c->r[5]=c->r[27]|c->r[27]; // 801D3014
  c->r[3]=c->r[30]+c->r[0]; // 801D3018
  c->r[3]=c->r[3]+0x00000138u; // 801D301C
  c->lr=0x801D3024u; f_80004338(c); // 801D3020
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D3024
  c->r[3]=c->r[30]+c->r[0]; // 801D3028
  c->r[0]=c->r[3]+0x00000138u; // 801D302C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D3030
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D3034
  c->r[0]=c->r[0]+c->r[27]; // 801D3038
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D303C
L_801D3040:;
  c->r[3]=0u+0x803D0000u; // 801D3040
  c->r[3]=c->r[3]+0xFFFFBDE0u; // 801D3044
  c->r[0]=R32(c->r[3]+0x0000121Cu); // 801D3048
  cmpu(c,0,c->r[24],c->r[0]); // 801D304C
  if (!crb(c,2)) { goto L_801D3064; } // 801D3050
  cmpu(c,0,c->r[25],0x00008001u); // 801D3054
  if (!crb(c,2)) { goto L_801D3064; } // 801D3058
  c->r[0]=0u+0x00000001u; // 801D305C
  W8(c->r[3]+0x00001220u,c->r[0]); // 801D3060
L_801D3064:;
  c->r[3]=0u+0x00000001u; // 801D3064
  goto L_801D3084; // 801D3068
L_801D306C:;
  c->r[5]=c->r[5]+0x00000001u; // 801D306C
  c->r[30]=c->r[30]+0x00000298u; // 801D3070
L_801D3074:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 801D3074
  cmpu(c,0,c->r[0],c->r[9]); // 801D3078
  if (crb(c,0)) { IRQCHK(c); goto L_801D2D44; } // 801D307C
  c->r[3]=0u+0x00000000u; // 801D3080
L_801D3084:;
  c->r[11]=c->r[1]+0x00000030u; // 801D3084
  c->lr=0x801D308Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3088
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D308C
  c->lr=c->r[0]; // 801D3090
  c->r[1]=c->r[1]+0x00000030u; // 801D3094
  return; // 801D3098
}

