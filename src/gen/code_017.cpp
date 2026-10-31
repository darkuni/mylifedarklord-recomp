#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8018C320
void f_8018C320(Ctx* __restrict c) {
  c->r[0]=0u-c->r[3]; // 8018C320
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 8018C324
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 8018C328
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018C32C
  if (crb(c,2)) { goto L_8018C348; } // 8018C330
  c->r[5]=c->r[5]-c->r[6]; // 8018C334
L_8018C338:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 8018C338
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 8018C33C
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 8018C340
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C338; } // 8018C344
L_8018C348:;
  c->r[0]=c->r[7]+0x00000001u; // 8018C348
  c->r[4]=c->r[3]+0xFFFFFFFDu; // 8018C34C
  c->r[10]=rotl(c->r[0],0)&0x00000003u; // 8018C350
  c->r[6]=rotl(c->r[5],29)&0x1FFFFFFFu; // 8018C354
  c->r[7]=c->r[7]-c->r[10]; // 8018C358
  c->r[11]=rotl(c->r[0],3)&0x00000018u; // 8018C35C
  {uint32_t ea=c->r[7]+0x00000001u; c->r[8]=R32(ea); c->r[7]=ea;} // 8018C360
  c->r[12]=addc(c,~c->r[11],0x00000020u,1); // 8018C364
L_8018C368:;
  c->r[9]=R32(c->r[7]+0x00000004u); // 8018C368
  c->r[3]=((c->r[11])&0x20)?0u:(c->r[8]<<((c->r[11])&31)); // 8018C36C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 8018C370
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[9]>>((c->r[12])&31)); // 8018C374
  c->r[0]=c->r[3]|c->r[0]; // 8018C378
  W32(c->r[4]+0x00000004u,c->r[0]); // 8018C37C
  c->r[3]=((c->r[11])&0x20)?0u:(c->r[9]<<((c->r[11])&31)); // 8018C380
  {uint32_t ea=c->r[7]+0x00000008u; c->r[8]=R32(ea); c->r[7]=ea;} // 8018C384
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[8]>>((c->r[12])&31)); // 8018C388
  c->r[0]=c->r[3]|c->r[0]; // 8018C38C
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[0]); c->r[4]=ea;} // 8018C390
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C368; } // 8018C394
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 8018C398
  if (crb(c,2)) { goto L_8018C3B4; } // 8018C39C
  {uint32_t ea=c->r[7]+0x00000004u; c->r[0]=R32(ea); c->r[7]=ea;} // 8018C3A0
  c->r[3]=((c->r[11])&0x20)?0u:(c->r[8]<<((c->r[11])&31)); // 8018C3A4
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[0]>>((c->r[12])&31)); // 8018C3A8
  c->r[0]=c->r[3]|c->r[0]; // 8018C3AC
  {uint32_t ea=c->r[4]+0x00000004u; W32(ea,c->r[0]); c->r[4]=ea;} // 8018C3B0
L_8018C3B4:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 8018C3B4
  c->r[6]=c->r[7]+0x00000003u; // 8018C3B8
  c->r[3]=c->r[4]+0x00000003u; // 8018C3BC
  if (crb(c,2)) return; // 8018C3C0
  c->r[0]=addc(c,~c->r[10],0x00000004u,1); // 8018C3C4
  c->r[6]=c->r[6]-c->r[0]; // 8018C3C8
L_8018C3CC:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[0]=R8(ea); c->r[6]=ea;} // 8018C3CC
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C3D0
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 8018C3D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C3CC; } // 8018C3D8
  return; // 8018C3DC
}

// fn_8018C3E0
void f_8018C3E0(Ctx* __restrict c) {
  c->r[12]=c->r[3]+c->r[5]; // 8018C3E0
  c->r[4]=c->r[4]+c->r[5]; // 8018C3E4
  c->r[3]=rotl(c->r[12],0)&0x00000003u; cr0(c,c->r[3]); // 8018C3E8
  if (crb(c,2)) { goto L_8018C404; } // 8018C3EC
  c->r[5]=c->r[5]-c->r[3]; // 8018C3F0
L_8018C3F4:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 8018C3F4
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8018C3F8
  {uint32_t ea=c->r[12]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[12]=ea;} // 8018C3FC
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C3F4; } // 8018C400
L_8018C404:;
  c->r[10]=rotl(c->r[4],3)&0x00000018u; // 8018C404
  c->r[9]=rotl(c->r[4],0)&0x00000003u; // 8018C408
  c->r[11]=addc(c,~c->r[10],0x00000020u,1); // 8018C40C
  c->r[6]=rotl(c->r[5],29)&0x1FFFFFFFu; // 8018C410
  c->r[0]=addc(c,~c->r[9],0x00000004u,1); // 8018C414
  c->r[4]=c->r[4]+c->r[0]; // 8018C418
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; c->r[7]=R32(ea); c->r[4]=ea;} // 8018C41C
L_8018C420:;
  c->r[8]=R32(c->r[4]+0xFFFFFFFCu); // 8018C420
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[7]>>((c->r[11])&31)); // 8018C424
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 8018C428
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[8]<<((c->r[10])&31)); // 8018C42C
  c->r[0]=c->r[3]|c->r[0]; // 8018C430
  W32(c->r[12]+0xFFFFFFFCu,c->r[0]); // 8018C434
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[8]>>((c->r[11])&31)); // 8018C438
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->r[7]=R32(ea); c->r[4]=ea;} // 8018C43C
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[7]<<((c->r[10])&31)); // 8018C440
  c->r[0]=c->r[3]|c->r[0]; // 8018C444
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; W32(ea,c->r[0]); c->r[12]=ea;} // 8018C448
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C420; } // 8018C44C
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 8018C450
  if (crb(c,2)) { goto L_8018C46C; } // 8018C454
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[4]=ea;} // 8018C458
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[7]>>((c->r[11])&31)); // 8018C45C
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[3]<<((c->r[10])&31)); // 8018C460
  c->r[0]=c->r[3]|c->r[0]; // 8018C464
  {uint32_t ea=c->r[12]+0xFFFFFFFCu; W32(ea,c->r[0]); c->r[12]=ea;} // 8018C468
L_8018C46C:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 8018C46C
  if (crb(c,2)) return; // 8018C470
  c->r[3]=c->r[4]+c->r[9]; // 8018C474
L_8018C478:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[3]=ea;} // 8018C478
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8018C47C
  {uint32_t ea=c->r[12]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[12]=ea;} // 8018C480
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C478; } // 8018C484
  return; // 8018C488
}

// fn_8018C48C
void f_8018C48C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8018C48C
  W8(c->r[3]+0x00000009u,c->r[0]); // 8018C490
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8018C494
  return; // 8018C498
}

// __stdio_atexit
void f_8018C49C(Ctx* __restrict c) {
  trace_call(0x8018C49Cu);
  c->r[3]=0u+0x80190000u; // 8018C49C
  c->r[3]=c->r[3]+0xFFFF9138u; // 8018C4A0
  W32(c->r[13]+0xFFFFA08Cu,c->r[3]); // 8018C4A4
  return; // 8018C4A8
}

// parse_format
void f_8018C4AC(Ctx* __restrict c) {
  trace_call(0x8018C4ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018C4AC
  c->r[0]=c->lr; // 8018C4B0
  c->r[7]=0u+0x00000000u; // 8018C4B4
  c->r[6]=R8(c->r[3]+0x00000001u); // 8018C4B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018C4BC
  c->r[8]=0u+0x00000001u; // 8018C4C0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C4C4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8018C4C8
  cmps(c,0,(int32_t)c->r[6],37); // 8018C4CC
  c->r[31]=c->r[3]+0x00000001u; // 8018C4D0
  W32(c->r[1]+0x00000028u,c->r[30]); // 8018C4D4
  c->r[30]=c->r[5]|c->r[5]; // 8018C4D8
  W32(c->r[1]+0x00000024u,c->r[29]); // 8018C4DC
  c->r[29]=c->r[4]|c->r[4]; // 8018C4E0
  W8(c->r[1]+0x00000008u,c->r[8]); // 8018C4E4
  W8(c->r[1]+0x00000009u,c->r[7]); // 8018C4E8
  W8(c->r[1]+0x0000000Au,c->r[7]); // 8018C4EC
  W8(c->r[1]+0x0000000Bu,c->r[7]); // 8018C4F0
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 8018C4F4
  W32(c->r[1]+0x00000010u,c->r[7]); // 8018C4F8
  W32(c->r[1]+0x00000014u,c->r[7]); // 8018C4FC
  if (!crb(c,2)) { goto L_8018C528; } // 8018C500
  W8(c->r[1]+0x0000000Du,c->r[6]); // 8018C504
  c->r[3]=c->r[31]+0x00000001u; // 8018C508
  c->r[4]=R32(c->r[1]+0x00000008u); // 8018C50C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018C510
  W32(c->r[5]+0x00000000u,c->r[4]); // 8018C514
  W32(c->r[5]+0x00000004u,c->r[0]); // 8018C518
  W32(c->r[5]+0x00000008u,c->r[7]); // 8018C51C
  W32(c->r[5]+0x0000000Cu,c->r[7]); // 8018C520
  goto L_8018CA4C; // 8018C524
L_8018C528:;
  c->r[0]=0u+0x00000002u; // 8018C528
L_8018C52C:;
  cmps(c,0,(int32_t)c->r[6],45); // 8018C52C
  c->r[4]=0u+0x00000001u; // 8018C530
  if (crb(c,2)) { goto L_8018C55C; } // 8018C534
  cmps(c,0,(int32_t)c->r[6],43); // 8018C538
  if (crb(c,2)) { goto L_8018C564; } // 8018C53C
  cmps(c,0,(int32_t)c->r[6],32); // 8018C540
  if (crb(c,2)) { goto L_8018C56C; } // 8018C544
  cmps(c,0,(int32_t)c->r[6],35); // 8018C548
  if (crb(c,2)) { goto L_8018C580; } // 8018C54C
  cmps(c,0,(int32_t)c->r[6],48); // 8018C550
  if (crb(c,2)) { goto L_8018C588; } // 8018C554
  goto L_8018C59C; // 8018C558
L_8018C55C:;
  W8(c->r[1]+0x00000008u,c->r[7]); // 8018C55C
  goto L_8018C5A0; // 8018C560
L_8018C564:;
  W8(c->r[1]+0x00000009u,c->r[8]); // 8018C564
  goto L_8018C5A0; // 8018C568
L_8018C56C:;
  c->r[3]=R8(c->r[1]+0x00000009u); // 8018C56C
  cmpu(c,0,c->r[3],0x00000001u); // 8018C570
  if (crb(c,2)) { goto L_8018C5A0; } // 8018C574
  W8(c->r[1]+0x00000009u,c->r[0]); // 8018C578
  goto L_8018C5A0; // 8018C57C
L_8018C580:;
  W8(c->r[1]+0x0000000Bu,c->r[8]); // 8018C580
  goto L_8018C5A0; // 8018C584
L_8018C588:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 8018C588
  cmps(c,0,(int32_t)c->r[3],0); // 8018C58C
  if (crb(c,2)) { goto L_8018C5A0; } // 8018C590
  W8(c->r[1]+0x00000008u,c->r[0]); // 8018C594
  goto L_8018C5A0; // 8018C598
L_8018C59C:;
  c->r[4]=0u+0x00000000u; // 8018C59C
L_8018C5A0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018C5A0
  if (crb(c,2)) { goto L_8018C5B4; } // 8018C5A4
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 8018C5A8
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C5AC
  IRQCHK(c); goto L_8018C52C; // 8018C5B0
L_8018C5B4:;
  cmps(c,0,(int32_t)c->r[6],42); // 8018C5B4
  if (!crb(c,2)) { goto L_8018C5F4; } // 8018C5B8
  c->r[3]=c->r[29]|c->r[29]; // 8018C5BC
  c->r[4]=0u+0x00000001u; // 8018C5C0
  c->lr=0x8018C5C8u; f_801855A4(c); // 8018C5C4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8018C5C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8018C5CC
  cmps(c,0,(int32_t)c->r[0],0); // 8018C5D0
  if (!crb(c,0)) { goto L_8018C5E8; } // 8018C5D4
  c->r[0]=0u-c->r[0]; // 8018C5D8
  c->r[3]=0u+0x00000000u; // 8018C5DC
  W8(c->r[1]+0x00000008u,c->r[3]); // 8018C5E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8018C5E4
L_8018C5E8:;
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 8018C5E8
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C5EC
  goto L_8018C658; // 8018C5F0
L_8018C5F4:;
  c->r[3]=0u+0x80330000u; // 8018C5F4
  c->r[3]=c->r[3]+0x000006B0u; // 8018C5F8
  c->r[4]=R32(c->r[3]+0x00000038u); // 8018C5FC
  goto L_8018C620; // 8018C600
L_8018C604:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8018C604
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018C608
  c->r[3]=c->r[6]+c->r[0]; // 8018C60C
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 8018C610
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018C614
  W32(c->r[1]+0x00000010u,c->r[0]); // 8018C618
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C61C
L_8018C620:;
  cmpu(c,0,c->r[6],0x000000FFu); // 8018C620
  c->r[0]=0u+0x00000001u; // 8018C624
  if (crb(c,1)) { goto L_8018C630; } // 8018C628
  c->r[0]=0u+0x00000000u; // 8018C62C
L_8018C630:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018C630
  if (crb(c,2)) { goto L_8018C640; } // 8018C634
  c->r[0]=0u+0x00000000u; // 8018C638
  goto L_8018C650; // 8018C63C
L_8018C640:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 8018C640
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8018C644
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018C648
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 8018C64C
L_8018C650:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018C650
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C604; } // 8018C654
L_8018C658:;
  c->r[7]=R32(c->r[1]+0x00000010u); // 8018C658
  cmps(c,0,(int32_t)c->r[7],509); // 8018C65C
  if (!crb(c,1)) { goto L_8018C690; } // 8018C660
  c->r[0]=0u+0x000000FFu; // 8018C664
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018C668
  c->r[5]=R32(c->r[1]+0x00000008u); // 8018C66C
  c->r[3]=c->r[31]+0x00000001u; // 8018C670
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8018C674
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018C678
  W32(c->r[30]+0x00000000u,c->r[5]); // 8018C67C
  W32(c->r[30]+0x00000004u,c->r[4]); // 8018C680
  W32(c->r[30]+0x00000008u,c->r[7]); // 8018C684
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8018C688
  goto L_8018CA4C; // 8018C68C
L_8018C690:;
  cmps(c,0,(int32_t)c->r[6],46); // 8018C690
  if (!crb(c,2)) { goto L_8018C744; } // 8018C694
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 8018C698
  c->r[0]=0u+0x00000001u; // 8018C69C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018C6A0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C6A4
  cmps(c,0,(int32_t)c->r[6],42); // 8018C6A8
  if (!crb(c,2)) { goto L_8018C6E0; } // 8018C6AC
  c->r[3]=c->r[29]|c->r[29]; // 8018C6B0
  c->r[4]=0u+0x00000001u; // 8018C6B4
  c->lr=0x8018C6BCu; f_801855A4(c); // 8018C6B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8018C6BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C6C0
  cmps(c,0,(int32_t)c->r[0],0); // 8018C6C4
  if (!crb(c,0)) { goto L_8018C6D4; } // 8018C6C8
  c->r[0]=0u+0x00000000u; // 8018C6CC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018C6D0
L_8018C6D4:;
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 8018C6D4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C6D8
  goto L_8018C744; // 8018C6DC
L_8018C6E0:;
  c->r[3]=0u+0x80330000u; // 8018C6E0
  c->r[3]=c->r[3]+0x000006B0u; // 8018C6E4
  c->r[4]=R32(c->r[3]+0x00000038u); // 8018C6E8
  goto L_8018C70C; // 8018C6EC
L_8018C6F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018C6F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018C6F4
  c->r[3]=c->r[6]+c->r[0]; // 8018C6F8
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 8018C6FC
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8018C700
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C704
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C708
L_8018C70C:;
  cmpu(c,0,c->r[6],0x000000FFu); // 8018C70C
  c->r[0]=0u+0x00000001u; // 8018C710
  if (crb(c,1)) { goto L_8018C71C; } // 8018C714
  c->r[0]=0u+0x00000000u; // 8018C718
L_8018C71C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018C71C
  if (crb(c,2)) { goto L_8018C72C; } // 8018C720
  c->r[0]=0u+0x00000000u; // 8018C724
  goto L_8018C73C; // 8018C728
L_8018C72C:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 8018C72C
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8018C730
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018C734
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 8018C738
L_8018C73C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018C73C
  if (!crb(c,2)) { IRQCHK(c); goto L_8018C6F0; } // 8018C740
L_8018C744:;
  cmps(c,0,(int32_t)c->r[6],104); // 8018C744
  c->r[4]=0u+0x00000001u; // 8018C748
  if (crb(c,2)) { goto L_8018C77C; } // 8018C74C
  cmps(c,0,(int32_t)c->r[6],108); // 8018C750
  if (crb(c,2)) { goto L_8018C7A8; } // 8018C754
  cmps(c,0,(int32_t)c->r[6],76); // 8018C758
  if (crb(c,2)) { goto L_8018C7D4; } // 8018C75C
  cmps(c,0,(int32_t)c->r[6],106); // 8018C760
  if (crb(c,2)) { goto L_8018C7E0; } // 8018C764
  cmps(c,0,(int32_t)c->r[6],116); // 8018C768
  if (crb(c,2)) { goto L_8018C7EC; } // 8018C76C
  cmps(c,0,(int32_t)c->r[6],122); // 8018C770
  if (crb(c,2)) { goto L_8018C7F8; } // 8018C774
  goto L_8018C804; // 8018C778
L_8018C77C:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 8018C77C
  c->r[3]=0u+0x00000002u; // 8018C780
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018C784
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C788
  cmps(c,0,(int32_t)c->r[3],104); // 8018C78C
  if (!crb(c,2)) { goto L_8018C808; } // 8018C790
  c->r[0]=0u+0x00000001u; // 8018C794
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C798
  c->r[6]=c->r[3]|c->r[3]; // 8018C79C
  c->r[31]=c->r[31]+0x00000001u; // 8018C7A0
  goto L_8018C808; // 8018C7A4
L_8018C7A8:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 8018C7A8
  c->r[3]=0u+0x00000003u; // 8018C7AC
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018C7B0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018C7B4
  cmps(c,0,(int32_t)c->r[3],108); // 8018C7B8
  if (!crb(c,2)) { goto L_8018C808; } // 8018C7BC
  c->r[0]=0u+0x00000004u; // 8018C7C0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C7C4
  c->r[6]=c->r[3]|c->r[3]; // 8018C7C8
  c->r[31]=c->r[31]+0x00000001u; // 8018C7CC
  goto L_8018C808; // 8018C7D0
L_8018C7D4:;
  c->r[0]=0u+0x00000009u; // 8018C7D4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C7D8
  goto L_8018C808; // 8018C7DC
L_8018C7E0:;
  c->r[0]=0u+0x00000006u; // 8018C7E0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C7E4
  goto L_8018C808; // 8018C7E8
L_8018C7EC:;
  c->r[0]=0u+0x00000008u; // 8018C7EC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C7F0
  goto L_8018C808; // 8018C7F4
L_8018C7F8:;
  c->r[0]=0u+0x00000007u; // 8018C7F8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C7FC
  goto L_8018C808; // 8018C800
L_8018C804:;
  c->r[4]=0u+0x00000000u; // 8018C804
L_8018C808:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018C808
  if (crb(c,2)) { goto L_8018C818; } // 8018C80C
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 8018C810
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8018C814
L_8018C818:;
  c->r[0]=c->r[6]+0xFFFFFFBFu; // 8018C818
  W8(c->r[1]+0x0000000Du,c->r[6]); // 8018C81C
  cmpu(c,0,c->r[0],0x00000037u); // 8018C820
  if (crb(c,1)) { goto L_8018CA20; } // 8018C824
  c->r[3]=0u+0x80330000u; // 8018C828
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018C82C
  c->r[3]=c->r[3]+0x000006F8u; // 8018C830
  c->r[3]=R32(c->r[3]+c->r[0]); // 8018C834
  c->ctr=c->r[3]; // 8018C838
  if (true) { switch (c->ctr) { case 0x8018C840u: goto L_8018C840; case 0x8018C888u: goto L_8018C888; case 0x8018C8D0u: goto L_8018C8D0; case 0x8018C91Cu: goto L_8018C91C; case 0x8018C930u: goto L_8018C930; case 0x8018C980u: goto L_8018C980; case 0x8018C9A4u: goto L_8018C9A4; case 0x8018C9DCu: goto L_8018C9DC; case 0x8018CA08u: goto L_8018CA08; case 0x8018CA20u: goto L_8018CA20; default: break; } dispatch(c,c->ctr); return; } // 8018C83C
L_8018C840:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8018C840
  cmpu(c,0,c->r[0],0x00000009u); // 8018C844
  if (!crb(c,2)) { goto L_8018C858; } // 8018C848
  c->r[0]=0u+0x000000FFu; // 8018C84C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018C850
  goto L_8018CA28; // 8018C854
L_8018C858:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018C858
  cmps(c,0,(int32_t)c->r[0],0); // 8018C85C
  if (!crb(c,2)) { goto L_8018C870; } // 8018C860
  c->r[0]=0u+0x00000001u; // 8018C864
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C868
  goto L_8018CA28; // 8018C86C
L_8018C870:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8018C870
  cmpu(c,0,c->r[0],0x00000002u); // 8018C874
  if (!crb(c,2)) { goto L_8018CA28; } // 8018C878
  c->r[0]=0u+0x00000001u; // 8018C87C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8018C880
  goto L_8018CA28; // 8018C884
L_8018C888:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8018C888
  c->r[0]=c->r[3]+0x000000FAu; // 8018C88C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018C890
  cmpu(c,0,c->r[0],0x00000002u); // 8018C894
  if (!crb(c,1)) { goto L_8018C8AC; } // 8018C898
  cmpu(c,0,c->r[3],0x00000002u); // 8018C89C
  if (crb(c,2)) { goto L_8018C8AC; } // 8018C8A0
  cmpu(c,0,c->r[3],0x00000004u); // 8018C8A4
  if (!crb(c,2)) { goto L_8018C8B8; } // 8018C8A8
L_8018C8AC:;
  c->r[0]=0u+0x000000FFu; // 8018C8AC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018C8B0
  goto L_8018CA28; // 8018C8B4
L_8018C8B8:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018C8B8
  cmps(c,0,(int32_t)c->r[0],0); // 8018C8BC
  if (!crb(c,2)) { goto L_8018CA28; } // 8018C8C0
  c->r[0]=0u+0x00000006u; // 8018C8C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C8C8
  goto L_8018CA28; // 8018C8CC
L_8018C8D0:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018C8D0
  cmps(c,0,(int32_t)c->r[0],0); // 8018C8D4
  if (!crb(c,2)) { goto L_8018C8E4; } // 8018C8D8
  c->r[0]=0u+0x0000000Du; // 8018C8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C8E0
L_8018C8E4:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8018C8E4
  c->r[0]=c->r[3]+0x000000FAu; // 8018C8E8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018C8EC
  cmpu(c,0,c->r[0],0x00000002u); // 8018C8F0
  if (!crb(c,1)) { goto L_8018C910; } // 8018C8F4
  c->r[0]=c->r[3]+0x000000FFu; // 8018C8F8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018C8FC
  cmpu(c,0,c->r[0],0x00000001u); // 8018C900
  if (!crb(c,1)) { goto L_8018C910; } // 8018C904
  cmpu(c,0,c->r[3],0x00000004u); // 8018C908
  if (!crb(c,2)) { goto L_8018CA28; } // 8018C90C
L_8018C910:;
  c->r[0]=0u+0x000000FFu; // 8018C910
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018C914
  goto L_8018CA28; // 8018C918
L_8018C91C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018C91C
  cmps(c,0,(int32_t)c->r[0],0); // 8018C920
  if (!crb(c,2)) { goto L_8018C930; } // 8018C924
  c->r[0]=0u+0x00000001u; // 8018C928
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C92C
L_8018C930:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8018C930
  c->r[0]=c->r[3]+0x000000FAu; // 8018C934
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018C938
  cmpu(c,0,c->r[0],0x00000002u); // 8018C93C
  if (!crb(c,1)) { goto L_8018C95C; } // 8018C940
  c->r[0]=c->r[3]+0x000000FFu; // 8018C944
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018C948
  cmpu(c,0,c->r[0],0x00000001u); // 8018C94C
  if (!crb(c,1)) { goto L_8018C95C; } // 8018C950
  cmpu(c,0,c->r[3],0x00000004u); // 8018C954
  if (!crb(c,2)) { goto L_8018C968; } // 8018C958
L_8018C95C:;
  c->r[0]=0u+0x000000FFu; // 8018C95C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018C960
  goto L_8018CA28; // 8018C964
L_8018C968:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018C968
  cmps(c,0,(int32_t)c->r[0],0); // 8018C96C
  if (!crb(c,2)) { goto L_8018CA28; } // 8018C970
  c->r[0]=0u+0x00000006u; // 8018C974
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C978
  goto L_8018CA28; // 8018C97C
L_8018C980:;
  c->r[5]=0u+0x00000078u; // 8018C980
  c->r[4]=0u+0x00000001u; // 8018C984
  c->r[3]=0u+0x00000003u; // 8018C988
  c->r[0]=0u+0x00000008u; // 8018C98C
  W8(c->r[1]+0x0000000Du,c->r[5]); // 8018C990
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 8018C994
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018C998
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018C99C
  goto L_8018CA28; // 8018C9A0
L_8018C9A4:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 8018C9A4
  cmpu(c,0,c->r[3],0x00000003u); // 8018C9A8
  if (!crb(c,2)) { goto L_8018C9BC; } // 8018C9AC
  c->r[0]=0u+0x00000005u; // 8018C9B0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C9B4
  goto L_8018CA28; // 8018C9B8
L_8018C9BC:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018C9BC
  cmps(c,0,(int32_t)c->r[0],0); // 8018C9C0
  if (!crb(c,2)) { goto L_8018C9D0; } // 8018C9C4
  cmps(c,0,(int32_t)c->r[3],0); // 8018C9C8
  if (crb(c,2)) { goto L_8018CA28; } // 8018C9CC
L_8018C9D0:;
  c->r[0]=0u+0x000000FFu; // 8018C9D0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018C9D4
  goto L_8018CA28; // 8018C9D8
L_8018C9DC:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8018C9DC
  cmpu(c,0,c->r[0],0x00000003u); // 8018C9E0
  if (!crb(c,2)) { goto L_8018C9F4; } // 8018C9E4
  c->r[0]=0u+0x00000005u; // 8018C9E8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8018C9EC
  goto L_8018CA28; // 8018C9F0
L_8018C9F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018C9F4
  if (crb(c,2)) { goto L_8018CA28; } // 8018C9F8
  c->r[0]=0u+0x000000FFu; // 8018C9FC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018CA00
  goto L_8018CA28; // 8018CA04
L_8018CA08:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8018CA08
  cmpu(c,0,c->r[0],0x00000009u); // 8018CA0C
  if (!crb(c,2)) { goto L_8018CA28; } // 8018CA10
  c->r[0]=0u+0x000000FFu; // 8018CA14
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018CA18
  goto L_8018CA28; // 8018CA1C
L_8018CA20:;
  c->r[0]=0u+0x000000FFu; // 8018CA20
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8018CA24
L_8018CA28:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 8018CA28
  c->r[3]=c->r[31]+0x00000001u; // 8018CA2C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8018CA30
  c->r[4]=R32(c->r[1]+0x00000010u); // 8018CA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018CA38
  W32(c->r[30]+0x00000000u,c->r[6]); // 8018CA3C
  W32(c->r[30]+0x00000004u,c->r[5]); // 8018CA40
  W32(c->r[30]+0x00000008u,c->r[4]); // 8018CA44
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8018CA48
L_8018CA4C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018CA4C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8018CA50
  c->r[30]=R32(c->r[1]+0x00000028u); // 8018CA54
  c->r[29]=R32(c->r[1]+0x00000024u); // 8018CA58
  c->lr=c->r[0]; // 8018CA5C
  c->r[1]=c->r[1]+0x00000030u; // 8018CA60
  return; // 8018CA64
}

// long2str
void f_8018CA68(Ctx* __restrict c) {
  trace_call(0x8018CA68u);
  cmps(c,0,(int32_t)c->r[3],0); // 8018CA68
  c->r[8]=0u+0x00000000u; // 8018CA6C
  W8(c->r[4]+0xFFFFFFFFu,c->r[8]); // 8018CA70
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 8018CA74
  c->r[7]=0u+0x00000000u; // 8018CA78
  if (!crb(c,2)) { goto L_8018CAAC; } // 8018CA7C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8018CA80
  cmps(c,0,(int32_t)c->r[0],0); // 8018CA84
  if (!crb(c,2)) { goto L_8018CAAC; } // 8018CA88
  c->r[0]=R8(c->r[5]+0x00000003u); // 8018CA8C
  cmps(c,0,(int32_t)c->r[0],0); // 8018CA90
  if (crb(c,2)) { goto L_8018CAA4; } // 8018CA94
  c->r[0]=R8(c->r[5]+0x00000005u); // 8018CA98
  cmpu(c,0,c->r[0],0x0000006Fu); // 8018CA9C
  if (crb(c,2)) { goto L_8018CAAC; } // 8018CAA0
L_8018CAA4:;
  c->r[3]=c->r[6]|c->r[6]; // 8018CAA4
  return; // 8018CAA8
L_8018CAAC:;
  c->r[9]=R8(c->r[5]+0x00000005u); // 8018CAAC
  cmps(c,0,(int32_t)c->r[9],100); // 8018CAB0
  if (crb(c,2)) { goto L_8018CAE4; } // 8018CAB4
  cmps(c,0,(int32_t)c->r[9],105); // 8018CAB8
  if (crb(c,2)) { goto L_8018CAE4; } // 8018CABC
  cmps(c,0,(int32_t)c->r[9],111); // 8018CAC0
  if (crb(c,2)) { goto L_8018CB10; } // 8018CAC4
  cmps(c,0,(int32_t)c->r[9],117); // 8018CAC8
  if (crb(c,2)) { goto L_8018CB20; } // 8018CACC
  cmps(c,0,(int32_t)c->r[9],120); // 8018CAD0
  if (crb(c,2)) { goto L_8018CB30; } // 8018CAD4
  cmps(c,0,(int32_t)c->r[9],88); // 8018CAD8
  if (crb(c,2)) { goto L_8018CB30; } // 8018CADC
  goto L_8018CB3C; // 8018CAE0
L_8018CAE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018CAE4
  c->r[0]=0u+0x0000000Au; // 8018CAE8
  if (!crb(c,0)) { goto L_8018CB3C; } // 8018CAEC
  c->r[9]=sraw(c,c->r[3],31); // 8018CAF0
  c->r[8]=0u+0x80000000u; // 8018CAF4
  c->r[8]=c->r[9]^c->r[8]; // 8018CAF8
  c->r[8]=c->r[3]|c->r[8]; cr0(c,c->r[8]); // 8018CAFC
  if (crb(c,2)) { goto L_8018CB08; } // 8018CB00
  c->r[3]=0u-c->r[3]; // 8018CB04
L_8018CB08:;
  c->r[8]=0u+0x00000001u; // 8018CB08
  goto L_8018CB3C; // 8018CB0C
L_8018CB10:;
  c->r[0]=0u+0x00000000u; // 8018CB10
  W8(c->r[5]+0x00000001u,c->r[0]); // 8018CB14
  c->r[0]=0u+0x00000008u; // 8018CB18
  goto L_8018CB3C; // 8018CB1C
L_8018CB20:;
  c->r[0]=0u+0x00000000u; // 8018CB20
  W8(c->r[5]+0x00000001u,c->r[0]); // 8018CB24
  c->r[0]=0u+0x0000000Au; // 8018CB28
  goto L_8018CB3C; // 8018CB2C
L_8018CB30:;
  c->r[0]=0u+0x00000000u; // 8018CB30
  W8(c->r[5]+0x00000001u,c->r[0]); // 8018CB34
  c->r[0]=0u+0x00000010u; // 8018CB38
L_8018CB3C:;
  c->r[9]=divwu(c->r[3],c->r[0]); // 8018CB3C
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 8018CB40
  c->r[11]=c->r[3]-c->r[9]; // 8018CB44
  c->r[3]=divwu(c->r[3],c->r[0]); // 8018CB48
  cmps(c,0,(int32_t)c->r[11],10); // 8018CB4C
  if (!crb(c,0)) { goto L_8018CB5C; } // 8018CB50
  c->r[11]=c->r[11]+0x00000030u; // 8018CB54
  goto L_8018CB74; // 8018CB58
L_8018CB5C:;
  c->r[9]=R8(c->r[5]+0x00000005u); // 8018CB5C
  c->r[10]=c->r[11]+0x00000037u; // 8018CB60
  cmpu(c,0,c->r[9],0x00000078u); // 8018CB64
  if (!crb(c,2)) { goto L_8018CB70; } // 8018CB68
  c->r[10]=c->r[11]+0x00000057u; // 8018CB6C
L_8018CB70:;
  c->r[11]=c->r[10]|c->r[10]; // 8018CB70
L_8018CB74:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018CB74
  W8(c->r[6]+0xFFFFFFFFu,c->r[11]); // 8018CB78
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8018CB7C
  c->r[7]=c->r[7]+0x00000001u; // 8018CB80
  if (!crb(c,2)) { IRQCHK(c); goto L_8018CB3C; } // 8018CB84
  cmpu(c,0,c->r[0],0x00000008u); // 8018CB88
  if (!crb(c,2)) { goto L_8018CBB4; } // 8018CB8C
  c->r[3]=R8(c->r[5]+0x00000003u); // 8018CB90
  cmps(c,0,(int32_t)c->r[3],0); // 8018CB94
  if (crb(c,2)) { goto L_8018CBB4; } // 8018CB98
  c->r[3]=R8(c->r[6]+0x00000000u); // 8018CB9C
  cmps(c,0,(int32_t)c->r[3],48); // 8018CBA0
  if (crb(c,2)) { goto L_8018CBB4; } // 8018CBA4
  c->r[3]=0u+0x00000030u; // 8018CBA8
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[6]=ea;} // 8018CBAC
  c->r[7]=c->r[7]+0x00000001u; // 8018CBB0
L_8018CBB4:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 8018CBB4
  cmpu(c,0,c->r[3],0x00000002u); // 8018CBB8
  if (!crb(c,2)) { goto L_8018CC08; } // 8018CBBC
  c->r[3]=R32(c->r[5]+0x00000008u); // 8018CBC0
  cmps(c,0,(int32_t)c->r[8],0); // 8018CBC4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8018CBC8
  if (!crb(c,2)) { goto L_8018CBDC; } // 8018CBCC
  c->r[3]=R8(c->r[5]+0x00000001u); // 8018CBD0
  cmps(c,0,(int32_t)c->r[3],0); // 8018CBD4
  if (crb(c,2)) { goto L_8018CBE8; } // 8018CBD8
L_8018CBDC:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8018CBDC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018CBE0
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8018CBE4
L_8018CBE8:;
  cmpu(c,0,c->r[0],0x00000010u); // 8018CBE8
  if (!crb(c,2)) { goto L_8018CC08; } // 8018CBEC
  c->r[3]=R8(c->r[5]+0x00000003u); // 8018CBF0
  cmps(c,0,(int32_t)c->r[3],0); // 8018CBF4
  if (crb(c,2)) { goto L_8018CC08; } // 8018CBF8
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8018CBFC
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 8018CC00
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8018CC04
L_8018CC08:;
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 8018CC08
  c->r[3]=c->r[4]-c->r[6]; // 8018CC0C
  c->r[3]=c->r[9]+c->r[3]; // 8018CC10
  cmps(c,0,(int32_t)c->r[3],509); // 8018CC14
  if (!crb(c,1)) { goto L_8018CC24; } // 8018CC18
  c->r[3]=0u+0x00000000u; // 8018CC1C
  return; // 8018CC20
L_8018CC24:;
  c->r[4]=0u+0x00000030u; // 8018CC24
  goto L_8018CC34; // 8018CC28
L_8018CC2C:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[6]=ea;} // 8018CC2C
  c->r[7]=c->r[7]+0x00000001u; // 8018CC30
L_8018CC34:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8018CC34
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 8018CC38
  if (crb(c,0)) { IRQCHK(c); goto L_8018CC2C; } // 8018CC3C
  cmpu(c,0,c->r[0],0x00000010u); // 8018CC40
  if (!crb(c,2)) { goto L_8018CC64; } // 8018CC44
  c->r[0]=R8(c->r[5]+0x00000003u); // 8018CC48
  cmps(c,0,(int32_t)c->r[0],0); // 8018CC4C
  if (crb(c,2)) { goto L_8018CC64; } // 8018CC50
  c->r[3]=R8(c->r[5]+0x00000005u); // 8018CC54
  c->r[0]=0u+0x00000030u; // 8018CC58
  W8(c->r[6]+0xFFFFFFFFu,c->r[3]); // 8018CC5C
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[6]=ea;} // 8018CC60
L_8018CC64:;
  cmps(c,0,(int32_t)c->r[8],0); // 8018CC64
  if (crb(c,2)) { goto L_8018CC78; } // 8018CC68
  c->r[0]=0u+0x0000002Du; // 8018CC6C
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 8018CC70
  goto L_8018CCA0; // 8018CC74
L_8018CC78:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 8018CC78
  cmpu(c,0,c->r[0],0x00000001u); // 8018CC7C
  if (!crb(c,2)) { goto L_8018CC90; } // 8018CC80
  c->r[0]=0u+0x0000002Bu; // 8018CC84
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 8018CC88
  goto L_8018CCA0; // 8018CC8C
L_8018CC90:;
  cmpu(c,0,c->r[0],0x00000002u); // 8018CC90
  if (!crb(c,2)) { goto L_8018CCA0; } // 8018CC94
  c->r[0]=0u+0x00000020u; // 8018CC98
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 8018CC9C
L_8018CCA0:;
  c->r[3]=c->r[6]|c->r[6]; // 8018CCA0
  return; // 8018CCA4
}

// longlong2str
void f_8018CCA8(Ctx* __restrict c) {
  trace_call(0x8018CCA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018CCA8
  c->r[0]=c->lr; // 8018CCAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018CCB0
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 8018CCB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018CCB8
  c->r[25]=0u+0x00000000u; // 8018CCBC
  c->r[31]=c->r[3]|c->r[3]; // 8018CCC0
  c->r[30]=c->r[4]|c->r[4]; // 8018CCC4
  c->r[23]=c->r[5]|c->r[5]; // 8018CCC8
  c->r[24]=c->r[6]|c->r[6]; // 8018CCCC
  c->r[27]=c->r[5]+0xFFFFFFFFu; // 8018CCD0
  c->r[26]=0u+0x00000000u; // 8018CCD4
  W8(c->r[5]+0xFFFFFFFFu,c->r[25]); // 8018CCD8
  if (!crb(c,2)) { goto L_8018CD0C; } // 8018CCDC
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8018CCE0
  cmps(c,0,(int32_t)c->r[0],0); // 8018CCE4
  if (!crb(c,2)) { goto L_8018CD0C; } // 8018CCE8
  c->r[0]=R8(c->r[6]+0x00000003u); // 8018CCEC
  cmps(c,0,(int32_t)c->r[0],0); // 8018CCF0
  if (crb(c,2)) { goto L_8018CD04; } // 8018CCF4
  c->r[0]=R8(c->r[6]+0x00000005u); // 8018CCF8
  cmpu(c,0,c->r[0],0x0000006Fu); // 8018CCFC
  if (crb(c,2)) { goto L_8018CD0C; } // 8018CD00
L_8018CD04:;
  c->r[3]=c->r[27]|c->r[27]; // 8018CD04
  goto L_8018CF44; // 8018CD08
L_8018CD0C:;
  c->r[0]=R8(c->r[6]+0x00000005u); // 8018CD0C
  cmps(c,0,(int32_t)c->r[0],100); // 8018CD10
  if (crb(c,2)) { goto L_8018CD44; } // 8018CD14
  cmps(c,0,(int32_t)c->r[0],105); // 8018CD18
  if (crb(c,2)) { goto L_8018CD44; } // 8018CD1C
  cmps(c,0,(int32_t)c->r[0],111); // 8018CD20
  if (crb(c,2)) { goto L_8018CD88; } // 8018CD24
  cmps(c,0,(int32_t)c->r[0],117); // 8018CD28
  if (crb(c,2)) { goto L_8018CD98; } // 8018CD2C
  cmps(c,0,(int32_t)c->r[0],120); // 8018CD30
  if (crb(c,2)) { goto L_8018CDA8; } // 8018CD34
  cmps(c,0,(int32_t)c->r[0],88); // 8018CD38
  if (crb(c,2)) { goto L_8018CDA8; } // 8018CD3C
  goto L_8018CDB4; // 8018CD40
L_8018CD44:;
  c->r[29]=0u+0x00000000u; // 8018CD44
  c->r[0]=c->r[3]^0x80000000u; // 8018CD48
  c->r[6]=c->r[29]^0x80000000u; // 8018CD4C
  c->r[28]=0u+0x0000000Au; // 8018CD50
  c->r[5]=addc(c,~c->r[29],c->r[4],1); // 8018CD54
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 8018CD58
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8018CD5C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8018CD60
  if (crb(c,2)) { goto L_8018CDB4; } // 8018CD64
  c->r[0]=0u+0x80000000u; // 8018CD68
  c->r[0]=c->r[3]^c->r[0]; // 8018CD6C
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 8018CD70
  if (crb(c,2)) { goto L_8018CD80; } // 8018CD74
  c->r[30]=addc(c,~c->r[4],0x00000000u,1); // 8018CD78
  c->r[31]=addc(c,~c->r[3],0,c->xer_ca); // 8018CD7C
L_8018CD80:;
  c->r[25]=0u+0x00000001u; // 8018CD80
  goto L_8018CDB4; // 8018CD84
L_8018CD88:;
  c->r[29]=0u+0x00000000u; // 8018CD88
  W8(c->r[6]+0x00000001u,c->r[29]); // 8018CD8C
  c->r[28]=0u+0x00000008u; // 8018CD90
  goto L_8018CDB4; // 8018CD94
L_8018CD98:;
  c->r[29]=0u+0x00000000u; // 8018CD98
  W8(c->r[6]+0x00000001u,c->r[29]); // 8018CD9C
  c->r[28]=0u+0x0000000Au; // 8018CDA0
  goto L_8018CDB4; // 8018CDA4
L_8018CDA8:;
  c->r[29]=0u+0x00000000u; // 8018CDA8
  W8(c->r[6]+0x00000001u,c->r[29]); // 8018CDAC
  c->r[28]=0u+0x00000010u; // 8018CDB0
L_8018CDB4:;
  c->r[3]=c->r[31]|c->r[31]; // 8018CDB4
  c->r[4]=c->r[30]|c->r[30]; // 8018CDB8
  c->r[5]=c->r[29]|c->r[29]; // 8018CDBC
  c->r[6]=c->r[28]|c->r[28]; // 8018CDC0
  c->lr=0x8018CDC8u; f_8018615C(c); // 8018CDC4
  c->r[22]=c->r[4]|c->r[4]; // 8018CDC8
  c->r[3]=c->r[31]|c->r[31]; // 8018CDCC
  c->r[4]=c->r[30]|c->r[30]; // 8018CDD0
  c->r[5]=c->r[29]|c->r[29]; // 8018CDD4
  c->r[6]=c->r[28]|c->r[28]; // 8018CDD8
  c->lr=0x8018CDE0u; f_80185F38(c); // 8018CDDC
  cmps(c,0,(int32_t)c->r[22],10); // 8018CDE0
  c->r[30]=c->r[4]|c->r[4]; // 8018CDE4
  c->r[31]=c->r[3]|c->r[3]; // 8018CDE8
  if (!crb(c,0)) { goto L_8018CDF8; } // 8018CDEC
  c->r[5]=c->r[22]+0x00000030u; // 8018CDF0
  goto L_8018CE0C; // 8018CDF4
L_8018CDF8:;
  c->r[0]=R8(c->r[24]+0x00000005u); // 8018CDF8
  c->r[5]=c->r[22]+0x00000037u; // 8018CDFC
  cmpu(c,0,c->r[0],0x00000078u); // 8018CE00
  if (!crb(c,2)) { goto L_8018CE0C; } // 8018CE04
  c->r[5]=c->r[22]+0x00000057u; // 8018CE08
L_8018CE0C:;
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 8018CE0C
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[5]); c->r[27]=ea;} // 8018CE10
  c->r[26]=c->r[26]+0x00000001u; // 8018CE14
  if (!crb(c,2)) { IRQCHK(c); goto L_8018CDB4; } // 8018CE18
  c->r[0]=c->r[28]^0x00000008u; // 8018CE1C
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 8018CE20
  if (!crb(c,2)) { goto L_8018CE4C; } // 8018CE24
  c->r[0]=R8(c->r[24]+0x00000003u); // 8018CE28
  cmps(c,0,(int32_t)c->r[0],0); // 8018CE2C
  if (crb(c,2)) { goto L_8018CE4C; } // 8018CE30
  c->r[0]=R8(c->r[27]+0x00000000u); // 8018CE34
  cmps(c,0,(int32_t)c->r[0],48); // 8018CE38
  if (crb(c,2)) { goto L_8018CE4C; } // 8018CE3C
  c->r[0]=0u+0x00000030u; // 8018CE40
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 8018CE44
  c->r[26]=c->r[26]+0x00000001u; // 8018CE48
L_8018CE4C:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 8018CE4C
  cmpu(c,0,c->r[0],0x00000002u); // 8018CE50
  if (!crb(c,2)) { goto L_8018CEA4; } // 8018CE54
  c->r[0]=R32(c->r[24]+0x00000008u); // 8018CE58
  cmps(c,0,(int32_t)c->r[25],0); // 8018CE5C
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 8018CE60
  if (!crb(c,2)) { goto L_8018CE74; } // 8018CE64
  c->r[0]=R8(c->r[24]+0x00000001u); // 8018CE68
  cmps(c,0,(int32_t)c->r[0],0); // 8018CE6C
  if (crb(c,2)) { goto L_8018CE80; } // 8018CE70
L_8018CE74:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 8018CE74
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018CE78
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 8018CE7C
L_8018CE80:;
  c->r[0]=c->r[28]^0x00000010u; // 8018CE80
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 8018CE84
  if (!crb(c,2)) { goto L_8018CEA4; } // 8018CE88
  c->r[0]=R8(c->r[24]+0x00000003u); // 8018CE8C
  cmps(c,0,(int32_t)c->r[0],0); // 8018CE90
  if (crb(c,2)) { goto L_8018CEA4; } // 8018CE94
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 8018CE98
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8018CE9C
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 8018CEA0
L_8018CEA4:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 8018CEA4
  c->r[0]=c->r[23]-c->r[27]; // 8018CEA8
  c->r[0]=c->r[3]+c->r[0]; // 8018CEAC
  cmps(c,0,(int32_t)c->r[0],509); // 8018CEB0
  if (!crb(c,1)) { goto L_8018CEC0; } // 8018CEB4
  c->r[3]=0u+0x00000000u; // 8018CEB8
  goto L_8018CF44; // 8018CEBC
L_8018CEC0:;
  c->r[3]=0u+0x00000030u; // 8018CEC0
  goto L_8018CED0; // 8018CEC4
L_8018CEC8:;
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[27]=ea;} // 8018CEC8
  c->r[26]=c->r[26]+0x00000001u; // 8018CECC
L_8018CED0:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 8018CED0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8018CED4
  if (crb(c,0)) { IRQCHK(c); goto L_8018CEC8; } // 8018CED8
  c->r[0]=c->r[28]^0x00000010u; // 8018CEDC
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 8018CEE0
  if (!crb(c,2)) { goto L_8018CF04; } // 8018CEE4
  c->r[0]=R8(c->r[24]+0x00000003u); // 8018CEE8
  cmps(c,0,(int32_t)c->r[0],0); // 8018CEEC
  if (crb(c,2)) { goto L_8018CF04; } // 8018CEF0
  c->r[3]=R8(c->r[24]+0x00000005u); // 8018CEF4
  c->r[0]=0u+0x00000030u; // 8018CEF8
  W8(c->r[27]+0xFFFFFFFFu,c->r[3]); // 8018CEFC
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[27]=ea;} // 8018CF00
L_8018CF04:;
  cmps(c,0,(int32_t)c->r[25],0); // 8018CF04
  if (crb(c,2)) { goto L_8018CF18; } // 8018CF08
  c->r[0]=0u+0x0000002Du; // 8018CF0C
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 8018CF10
  goto L_8018CF40; // 8018CF14
L_8018CF18:;
  c->r[0]=R8(c->r[24]+0x00000001u); // 8018CF18
  cmpu(c,0,c->r[0],0x00000001u); // 8018CF1C
  if (!crb(c,2)) { goto L_8018CF30; } // 8018CF20
  c->r[0]=0u+0x0000002Bu; // 8018CF24
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 8018CF28
  goto L_8018CF40; // 8018CF2C
L_8018CF30:;
  cmpu(c,0,c->r[0],0x00000002u); // 8018CF30
  if (!crb(c,2)) { goto L_8018CF40; } // 8018CF34
  c->r[0]=0u+0x00000020u; // 8018CF38
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 8018CF3C
L_8018CF40:;
  c->r[3]=c->r[27]|c->r[27]; // 8018CF40
L_8018CF44:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018CF44
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018CF48
  c->lr=c->r[0]; // 8018CF4C
  c->r[1]=c->r[1]+0x00000030u; // 8018CF50
  return; // 8018CF54
}

// double2hex
void f_8018CF58(Ctx* __restrict c) {
  trace_call(0x8018CF58u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018CF58
  c->r[0]=c->lr; // 8018CF5C
  c->r[5]=0u+0x80330000u; // 8018CF60
  W32(c->r[1]+0x00000094u,c->r[0]); // 8018CF64
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8018CF68
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8018CF6C
  c->f[31]=c->f[1]; // 8018CF70
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8018CF74
  W32(c->r[1]+0x00000078u,c->r[30]); // 8018CF78
  c->r[30]=c->r[4]|c->r[4]; // 8018CF7C
  W32(c->r[1]+0x00000074u,c->r[29]); // 8018CF80
  c->r[29]=c->r[3]|c->r[3]; // 8018CF84
  W32(c->r[1]+0x00000070u,c->r[28]); // 8018CF88
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8018CF8C
  c->r[5]=R32(c->r[5]+0x00000500u); // 8018CF90
  cmps(c,0,(int32_t)c->r[0],509); // 8018CF94
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8018CF98
  c->r[31]=R8(c->r[5]+0x00000000u); // 8018CF9C
  if (!crb(c,1)) { goto L_8018CFAC; } // 8018CFA0
  c->r[3]=0u+0x00000000u; // 8018CFA4
  goto L_8018D300; // 8018CFA8
L_8018CFAC:;
  c->r[28]=0u+0x00000000u; // 8018CFAC
  c->r[0]=0u+0x00000020u; // 8018CFB0
  W8(c->r[1]+0x00000010u,c->r[28]); // 8018CFB4
  c->r[3]=c->r[1]+0x00000010u; // 8018CFB8
  c->r[4]=c->r[1]+0x00000038u; // 8018CFBC
  W16(c->r[1]+0x00000012u,c->r[0]); // 8018CFC0
  c->lr=0x8018CFC8u; f_8018A25C(c); // 8018CFC4
  c->r[0]=R8(c->r[1]+0x0000003Du); // 8018CFC8
  cmps(c,0,(int32_t)c->r[0],48); // 8018CFCC
  if (crb(c,2)) { goto L_8018CFE8; } // 8018CFD0
  cmps(c,0,(int32_t)c->r[0],73); // 8018CFD4
  if (crb(c,2)) { goto L_8018CFF0; } // 8018CFD8
  cmps(c,0,(int32_t)c->r[0],78); // 8018CFDC
  if (crb(c,2)) { goto L_8018D07C; } // 8018CFE0
  goto L_8018D10C; // 8018CFE4
L_8018CFE8:;
  W16(c->r[1]+0x0000003Au,c->r[28]); // 8018CFE8
  goto L_8018D10C; // 8018CFEC
L_8018CFF0:;
  c->r[0]=R8(c->r[1]+0x00000038u); // 8018CFF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018CFF4
  if (crb(c,2)) { goto L_8018D038; } // 8018CFF8
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018CFFC
  c->r[28]=c->r[29]+0xFFFFFFFBu; // 8018D000
  cmpu(c,0,c->r[0],0x00000041u); // 8018D004
  if (!crb(c,2)) { goto L_8018D020; } // 8018D008
  c->r[4]=0u+0x802E0000u; // 8018D00C
  c->r[3]=c->r[28]|c->r[28]; // 8018D010
  c->r[4]=c->r[4]+0x00000348u; // 8018D014
  c->lr=0x8018D01Cu; f_8018FFE4(c); // 8018D018
  goto L_8018D074; // 8018D01C
L_8018D020:;
  c->r[4]=0u+0x802E0000u; // 8018D020
  c->r[3]=c->r[28]|c->r[28]; // 8018D024
  c->r[4]=c->r[4]+0x00000348u; // 8018D028
  c->r[4]=c->r[4]+0x00000005u; // 8018D02C
  c->lr=0x8018D034u; f_8018FFE4(c); // 8018D030
  goto L_8018D074; // 8018D034
L_8018D038:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018D038
  c->r[28]=c->r[29]+0xFFFFFFFCu; // 8018D03C
  cmpu(c,0,c->r[0],0x00000041u); // 8018D040
  if (!crb(c,2)) { goto L_8018D060; } // 8018D044
  c->r[4]=0u+0x802E0000u; // 8018D048
  c->r[3]=c->r[28]|c->r[28]; // 8018D04C
  c->r[4]=c->r[4]+0x00000348u; // 8018D050
  c->r[4]=c->r[4]+0x0000000Au; // 8018D054
  c->lr=0x8018D05Cu; f_8018FFE4(c); // 8018D058
  goto L_8018D074; // 8018D05C
L_8018D060:;
  c->r[4]=0u+0x802E0000u; // 8018D060
  c->r[3]=c->r[28]|c->r[28]; // 8018D064
  c->r[4]=c->r[4]+0x00000348u; // 8018D068
  c->r[4]=c->r[4]+0x0000000Eu; // 8018D06C
  c->lr=0x8018D074u; f_8018FFE4(c); // 8018D070
L_8018D074:;
  c->r[3]=c->r[28]|c->r[28]; // 8018D074
  goto L_8018D300; // 8018D078
L_8018D07C:;
  c->r[0]=R8(c->r[1]+0x00000038u); // 8018D07C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018D080
  if (crb(c,2)) { goto L_8018D0C8; } // 8018D084
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018D088
  c->r[28]=c->r[29]+0xFFFFFFFBu; // 8018D08C
  cmpu(c,0,c->r[0],0x00000041u); // 8018D090
  if (!crb(c,2)) { goto L_8018D0B0; } // 8018D094
  c->r[4]=0u+0x802E0000u; // 8018D098
  c->r[3]=c->r[28]|c->r[28]; // 8018D09C
  c->r[4]=c->r[4]+0x00000348u; // 8018D0A0
  c->r[4]=c->r[4]+0x00000012u; // 8018D0A4
  c->lr=0x8018D0ACu; f_8018FFE4(c); // 8018D0A8
  goto L_8018D104; // 8018D0AC
L_8018D0B0:;
  c->r[4]=0u+0x802E0000u; // 8018D0B0
  c->r[3]=c->r[28]|c->r[28]; // 8018D0B4
  c->r[4]=c->r[4]+0x00000348u; // 8018D0B8
  c->r[4]=c->r[4]+0x00000017u; // 8018D0BC
  c->lr=0x8018D0C4u; f_8018FFE4(c); // 8018D0C0
  goto L_8018D104; // 8018D0C4
L_8018D0C8:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018D0C8
  c->r[28]=c->r[29]+0xFFFFFFFCu; // 8018D0CC
  cmpu(c,0,c->r[0],0x00000041u); // 8018D0D0
  if (!crb(c,2)) { goto L_8018D0F0; } // 8018D0D4
  c->r[4]=0u+0x802E0000u; // 8018D0D8
  c->r[3]=c->r[28]|c->r[28]; // 8018D0DC
  c->r[4]=c->r[4]+0x00000348u; // 8018D0E0
  c->r[4]=c->r[4]+0x0000001Cu; // 8018D0E4
  c->lr=0x8018D0ECu; f_8018FFE4(c); // 8018D0E8
  goto L_8018D104; // 8018D0EC
L_8018D0F0:;
  c->r[4]=0u+0x802E0000u; // 8018D0F0
  c->r[3]=c->r[28]|c->r[28]; // 8018D0F4
  c->r[4]=c->r[4]+0x00000348u; // 8018D0F8
  c->r[4]=c->r[4]+0x00000020u; // 8018D0FC
  c->lr=0x8018D104u; f_8018FFE4(c); // 8018D100
L_8018D104:;
  c->r[3]=c->r[28]|c->r[28]; // 8018D104
  goto L_8018D300; // 8018D108
L_8018D10C:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 8018D10C
  c->r[8]=0u+0x00000000u; // 8018D110
  c->r[3]=R8(c->r[1]+0x00000008u); // 8018D114
  c->r[9]=0u+0x00000001u; // 8018D118
  c->r[0]=rotl(c->r[0],17)&0xFFFE0000u; // 8018D11C
  c->r[7]=0u+0x00000064u; // 8018D120
  c->r[0]=(rotl(c->r[3],25)&0xFE000000u)|(c->r[0]&~0xFE000000u); // 8018D124
  W8(c->r[1]+0x00000028u,c->r[9]); // 8018D128
  c->r[5]=rotl(c->r[0],11)&0x000007FFu; // 8018D12C
  c->r[4]=c->r[29]|c->r[29]; // 8018D130
  c->r[0]=0u-c->r[5]; // 8018D134
  W8(c->r[1]+0x00000029u,c->r[9]); // 8018D138
  c->r[3]=c->r[0]|c->r[5]; // 8018D13C
  c->r[0]=c->r[5]+0xFFFFFC01u; // 8018D140
  W8(c->r[1]+0x0000002Au,c->r[8]); // 8018D144
  c->r[3]=sraw(c,c->r[3],31); // 8018D148
  c->r[5]=c->r[1]+0x00000018u; // 8018D14C
  W8(c->r[1]+0x0000002Bu,c->r[8]); // 8018D150
  c->r[3]=c->r[0]&c->r[3]; // 8018D154
  c->r[6]=R32(c->r[1]+0x00000028u); // 8018D158
  W8(c->r[1]+0x0000002Cu,c->r[8]); // 8018D15C
  W8(c->r[1]+0x0000002Du,c->r[7]); // 8018D160
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8018D164
  W32(c->r[1]+0x00000030u,c->r[8]); // 8018D168
  W32(c->r[1]+0x00000034u,c->r[9]); // 8018D16C
  W32(c->r[1]+0x00000018u,c->r[6]); // 8018D170
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8018D174
  W32(c->r[1]+0x00000020u,c->r[8]); // 8018D178
  W32(c->r[1]+0x00000024u,c->r[9]); // 8018D17C
  c->lr=0x8018D184u; f_8018CA68(c); // 8018D180
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018D184
  cmpu(c,0,c->r[0],0x00000061u); // 8018D188
  if (!crb(c,2)) { goto L_8018D19C; } // 8018D18C
  c->r[0]=0u+0x00000070u; // 8018D190
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D194
  goto L_8018D1A4; // 8018D198
L_8018D19C:;
  c->r[0]=0u+0x00000050u; // 8018D19C
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D1A0
L_8018D1A4:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8018D1A4
  c->r[8]=c->r[1]+0x00000008u; // 8018D1A8
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018D1AC
  c->r[9]=c->r[4]+0x0000000Bu; // 8018D1B0
  c->ctr=c->r[0]; // 8018D1B4
  cmps(c,0,(int32_t)c->r[0],1); // 8018D1B8
  if (crb(c,0)) { goto L_8018D258; } // 8018D1BC
L_8018D1C0:;
  cmps(c,0,(int32_t)c->r[9],64); // 8018D1C0
  if (!crb(c,0)) { goto L_8018D248; } // 8018D1C4
  c->r[4]=sraw(c,c->r[9],3); // 8018D1C8
  c->r[0]=c->r[9]+0xFFFFFFFCu; // 8018D1CC
  c->r[7]=c->r[8]+c->r[4]; // 8018D1D0
  c->r[6]=rotl(c->r[9],0)&0x00000007u; // 8018D1D4
  c->r[4]=rotl(c->r[9],0)&0xFFFFFFF8u; // 8018D1D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 8018D1DC
  c->r[5]=R8(c->r[7]+0x00000000u); // 8018D1E0
  c->r[6]=addc(c,~c->r[6],0x00000007u,1); // 8018D1E4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8018D1E8
  c->r[0]=sraw(c,c->r[5],(c->r[6])&63); // 8018D1EC
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8018D1F0
  if (crb(c,2)) { goto L_8018D20C; } // 8018D1F4
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8018D1F8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8018D1FC
  c->r[0]=sraw(c,c->r[0],(c->r[6])&63); // 8018D200
  c->r[0]=c->r[4]|c->r[0]; // 8018D204
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8018D208
L_8018D20C:;
  c->r[4]=rotl(c->r[4],0)&0x0000000Fu; // 8018D20C
  cmpu(c,0,c->r[4],0x0000000Au); // 8018D210
  if (!crb(c,0)) { goto L_8018D224; } // 8018D214
  c->r[0]=c->r[4]+0x00000030u; // 8018D218
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8018D21C
  goto L_8018D24C; // 8018D220
L_8018D224:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018D224
  cmpu(c,0,c->r[0],0x00000061u); // 8018D228
  if (!crb(c,2)) { goto L_8018D23C; } // 8018D22C
  c->r[0]=c->r[4]+0x00000057u; // 8018D230
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8018D234
  goto L_8018D24C; // 8018D238
L_8018D23C:;
  c->r[0]=c->r[4]+0x00000037u; // 8018D23C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8018D240
  goto L_8018D24C; // 8018D244
L_8018D248:;
  c->r[4]=0u+0x00000030u; // 8018D248
L_8018D24C:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[3]=ea;} // 8018D24C
  c->r[9]=c->r[9]+0xFFFFFFFCu; // 8018D250
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018D1C0; } // 8018D254
L_8018D258:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8018D258
  cmps(c,0,(int32_t)c->r[0],0); // 8018D25C
  if (!crb(c,2)) { goto L_8018D270; } // 8018D260
  c->r[0]=R8(c->r[30]+0x00000003u); // 8018D264
  cmps(c,0,(int32_t)c->r[0],0); // 8018D268
  if (crb(c,2)) { goto L_8018D274; } // 8018D26C
L_8018D270:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[31]); c->r[3]=ea;} // 8018D270
L_8018D274:;
  c->f[1]=std::fabs(c->f[31]); // 8018D274
  {uint32_t ea=c->r[2]+0xFFFF8F00u; c->f[0]=RF64(ea);} // 8018D278
  fcmp(c,0,c->f[0],c->f[1]); // 8018D27C
  if (crb(c,2)) { goto L_8018D290; } // 8018D280
  c->r[0]=0u+0x00000031u; // 8018D284
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D288
  goto L_8018D298; // 8018D28C
L_8018D290:;
  c->r[0]=0u+0x00000030u; // 8018D290
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D294
L_8018D298:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 8018D298
  cmpu(c,0,c->r[0],0x00000061u); // 8018D29C
  if (!crb(c,2)) { goto L_8018D2B0; } // 8018D2A0
  c->r[0]=0u+0x00000078u; // 8018D2A4
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D2A8
  goto L_8018D2B8; // 8018D2AC
L_8018D2B0:;
  c->r[0]=0u+0x00000058u; // 8018D2B0
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D2B4
L_8018D2B8:;
  c->r[0]=0u+0x00000030u; // 8018D2B8
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D2BC
  c->r[0]=R8(c->r[1]+0x00000038u); // 8018D2C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018D2C4
  if (crb(c,2)) { goto L_8018D2D8; } // 8018D2C8
  c->r[0]=0u+0x0000002Du; // 8018D2CC
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D2D0
  goto L_8018D300; // 8018D2D4
L_8018D2D8:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 8018D2D8
  cmpu(c,0,c->r[0],0x00000001u); // 8018D2DC
  if (!crb(c,2)) { goto L_8018D2F0; } // 8018D2E0
  c->r[0]=0u+0x0000002Bu; // 8018D2E4
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D2E8
  goto L_8018D300; // 8018D2EC
L_8018D2F0:;
  cmpu(c,0,c->r[0],0x00000002u); // 8018D2F0
  if (!crb(c,2)) { goto L_8018D300; } // 8018D2F4
  c->r[0]=0u+0x00000020u; // 8018D2F8
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 8018D2FC
L_8018D300:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8018D300
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8018D304
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8018D308
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8018D30C
  c->r[30]=R32(c->r[1]+0x00000078u); // 8018D310
  c->r[29]=R32(c->r[1]+0x00000074u); // 8018D314
  c->r[28]=R32(c->r[1]+0x00000070u); // 8018D318
  c->lr=c->r[0]; // 8018D31C
  c->r[1]=c->r[1]+0x00000090u; // 8018D320
  return; // 8018D324
}

// round_decimal
void f_8018D328(Ctx* __restrict c) {
  trace_call(0x8018D328u);
  cmps(c,0,(int32_t)c->r[4],0); // 8018D328
  if (!crb(c,0)) { goto L_8018D34C; } // 8018D32C
L_8018D330:;
  c->r[5]=0u+0x00000000u; // 8018D330
  c->r[4]=0u+0x00000001u; // 8018D334
  c->r[0]=0u+0x00000030u; // 8018D338
  W16(c->r[3]+0x00000002u,c->r[5]); // 8018D33C
  W8(c->r[3]+0x00000004u,c->r[4]); // 8018D340
  W8(c->r[3]+0x00000005u,c->r[0]); // 8018D344
  return; // 8018D348
L_8018D34C:;
  c->r[7]=R8(c->r[3]+0x00000004u); // 8018D34C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 8018D350
  if (!crb(c,0)) return; // 8018D354
  c->r[6]=c->r[3]+c->r[4]; // 8018D358
  c->r[5]=R8(c->r[6]+0x00000005u); // 8018D35C
  c->r[8]=c->r[6]+0x00000005u; // 8018D360
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 8018D364
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D368
  cmps(c,0,(int32_t)c->r[6],5); // 8018D36C
  if (!crb(c,2)) { goto L_8018D3B0; } // 8018D370
  c->r[5]=c->r[3]+c->r[7]; // 8018D374
  c->r[5]=c->r[5]+0x00000005u; // 8018D378
L_8018D37C:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8018D37C
  cmpu(c,0,c->r[5],c->r[8]); // 8018D380
  if (!crb(c,1)) { goto L_8018D394; } // 8018D384
  c->r[0]=R8(c->r[5]+0x00000000u); // 8018D388
  cmps(c,0,(int32_t)c->r[0],48); // 8018D38C
  if (crb(c,2)) { IRQCHK(c); goto L_8018D37C; } // 8018D390
L_8018D394:;
  cmpu(c,0,c->r[5],c->r[8]); // 8018D394
  if (!crb(c,2)) { goto L_8018D3A8; } // 8018D398
  c->r[0]=R8(c->r[8]+0xFFFFFFFFu); // 8018D39C
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 8018D3A0
  goto L_8018D3C4; // 8018D3A4
L_8018D3A8:;
  c->r[5]=0u+0x00000001u; // 8018D3A8
  goto L_8018D3C4; // 8018D3AC
L_8018D3B0:;
  c->r[0]=c->r[6]^0x00000005u; // 8018D3B0
  c->r[5]=sraw(c,c->r[0],1); // 8018D3B4
  c->r[0]=c->r[0]&c->r[6]; // 8018D3B8
  c->r[0]=c->r[5]-c->r[0]; // 8018D3BC
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8018D3C0
L_8018D3C4:;
  c->ctr=c->r[4]; // 8018D3C4
  cmps(c,0,(int32_t)c->r[4],0); // 8018D3C8
  if (crb(c,2)) { goto L_8018D418; } // 8018D3CC
L_8018D3D0:;
  {uint32_t ea=c->r[8]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[8]=ea;} // 8018D3D0
  c->r[5]=c->r[0]+c->r[5]; // 8018D3D4
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 8018D3D8
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018D3DC
  c->r[0]=c->r[6]^0x00000009u; // 8018D3E0
  c->r[5]=sraw(c,c->r[0],1); // 8018D3E4
  c->r[0]=c->r[0]&c->r[6]; // 8018D3E8
  c->r[0]=c->r[5]-c->r[0]; // 8018D3EC
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 8018D3F0
  if (!crb(c,2)) { goto L_8018D400; } // 8018D3F4
  cmps(c,0,(int32_t)c->r[6],0); // 8018D3F8
  if (!crb(c,2)) { goto L_8018D408; } // 8018D3FC
L_8018D400:;
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8018D400
  goto L_8018D414; // 8018D404
L_8018D408:;
  c->r[0]=c->r[6]+0x00000030u; // 8018D408
  W8(c->r[8]+0x00000000u,c->r[0]); // 8018D40C
  goto L_8018D418; // 8018D410
L_8018D414:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018D3D0; } // 8018D414
L_8018D418:;
  cmps(c,0,(int32_t)c->r[5],0); // 8018D418
  if (crb(c,2)) { goto L_8018D440; } // 8018D41C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 8018D420
  c->r[4]=0u+0x00000001u; // 8018D424
  c->r[0]=0u+0x00000031u; // 8018D428
  W8(c->r[3]+0x00000004u,c->r[4]); // 8018D42C
  c->r[4]=c->r[5]+0x00000001u; // 8018D430
  W16(c->r[3]+0x00000002u,c->r[4]); // 8018D434
  W8(c->r[3]+0x00000005u,c->r[0]); // 8018D438
  return; // 8018D43C
L_8018D440:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018D440
  if (crb(c,2)) { IRQCHK(c); goto L_8018D330; } // 8018D444
  W8(c->r[3]+0x00000004u,c->r[4]); // 8018D448
  return; // 8018D44C
}

// float2str
void f_8018D450(Ctx* __restrict c) {
  trace_call(0x8018D450u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018D450
  c->r[0]=c->lr; // 8018D454
  c->r[5]=0u+0x80330000u; // 8018D458
  W32(c->r[1]+0x00000054u,c->r[0]); // 8018D45C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 8018D460
  c->f[31]=c->f[1]; // 8018D464
  W32(c->r[1]+0x00000044u,c->r[31]); // 8018D468
  W32(c->r[1]+0x00000040u,c->r[30]); // 8018D46C
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 8018D470
  c->r[29]=c->r[4]|c->r[4]; // 8018D474
  W32(c->r[1]+0x00000038u,c->r[28]); // 8018D478
  c->r[28]=c->r[3]|c->r[3]; // 8018D47C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8018D480
  c->r[5]=R32(c->r[5]+0x00000500u); // 8018D484
  cmps(c,0,(int32_t)c->r[0],509); // 8018D488
  c->r[30]=R8(c->r[5]+0x00000000u); // 8018D48C
  if (!crb(c,1)) { goto L_8018D49C; } // 8018D490
  c->r[3]=0u+0x00000000u; // 8018D494
  goto L_8018DBC4; // 8018D498
L_8018D49C:;
  c->r[3]=0u+0x00000000u; // 8018D49C
  c->r[0]=0u+0x00000020u; // 8018D4A0
  W8(c->r[1]+0x00000008u,c->r[3]); // 8018D4A4
  c->r[3]=c->r[1]+0x00000008u; // 8018D4A8
  c->r[4]=c->r[1]+0x0000000Cu; // 8018D4AC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 8018D4B0
  c->lr=0x8018D4B8u; f_8018A25C(c); // 8018D4B4
  c->r[0]=R8(c->r[1]+0x00000010u); // 8018D4B8
  c->r[5]=c->r[1]+0x00000011u; // 8018D4BC
  c->r[5]=c->r[5]+c->r[0]; // 8018D4C0
  goto L_8018D4E0; // 8018D4C4
L_8018D4C8:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 8018D4C8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 8018D4CC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8018D4D0
  W8(c->r[1]+0x00000010u,c->r[0]); // 8018D4D4
  c->r[0]=c->r[3]+0x00000001u; // 8018D4D8
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 8018D4DC
L_8018D4E0:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 8018D4E0
  cmpu(c,0,c->r[0],0x00000001u); // 8018D4E4
  if (!crb(c,1)) { goto L_8018D4F8; } // 8018D4E8
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 8018D4EC
  cmps(c,0,(int32_t)c->r[0],48); // 8018D4F0
  if (crb(c,2)) { IRQCHK(c); goto L_8018D4C8; } // 8018D4F4
L_8018D4F8:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 8018D4F8
  cmps(c,0,(int32_t)c->r[0],48); // 8018D4FC
  if (crb(c,2)) { goto L_8018D518; } // 8018D500
  cmps(c,0,(int32_t)c->r[0],73); // 8018D504
  if (crb(c,2)) { goto L_8018D524; } // 8018D508
  cmps(c,0,(int32_t)c->r[0],78); // 8018D50C
  if (crb(c,2)) { goto L_8018D628; } // 8018D510
  goto L_8018D730; // 8018D514
L_8018D518:;
  c->r[0]=0u+0x00000000u; // 8018D518
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 8018D51C
  goto L_8018D730; // 8018D520
L_8018D524:;
  {uint32_t ea=c->r[2]+0xFFFF8F00u; c->f[0]=RF64(ea);} // 8018D524
  fcmp(c,0,c->f[31],c->f[0]); // 8018D528
  if (!crb(c,0)) { goto L_8018D5A8; } // 8018D52C
  c->r[0]=R8(c->r[29]+0x00000005u); // 8018D530
  c->r[31]=c->r[28]+0xFFFFFFFBu; // 8018D534
  c->r[3]=0u+0x00000001u; // 8018D538
  cmpu(c,0,c->r[0],0x000000FFu); // 8018D53C
  if (crb(c,1)) { goto L_8018D548; } // 8018D540
  c->r[3]=0u+0x00000000u; // 8018D544
L_8018D548:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018D548
  if (crb(c,2)) { goto L_8018D558; } // 8018D54C
  c->r[0]=0u+0x00000000u; // 8018D550
  goto L_8018D574; // 8018D554
L_8018D558:;
  c->r[3]=0u+0x80330000u; // 8018D558
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018D55C
  c->r[3]=c->r[3]+0x000006B0u; // 8018D560
  c->r[3]=R32(c->r[3]+0x00000038u); // 8018D564
  c->r[3]=R32(c->r[3]+0x00000008u); // 8018D568
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018D56C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 8018D570
L_8018D574:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018D574
  if (crb(c,2)) { goto L_8018D590; } // 8018D578
  c->r[4]=0u+0x802E0000u; // 8018D57C
  c->r[3]=c->r[31]|c->r[31]; // 8018D580
  c->r[4]=c->r[4]+0x00000348u; // 8018D584
  c->lr=0x8018D58Cu; f_8018FFE4(c); // 8018D588
  goto L_8018D620; // 8018D58C
L_8018D590:;
  c->r[4]=0u+0x802E0000u; // 8018D590
  c->r[3]=c->r[31]|c->r[31]; // 8018D594
  c->r[4]=c->r[4]+0x00000348u; // 8018D598
  c->r[4]=c->r[4]+0x00000005u; // 8018D59C
  c->lr=0x8018D5A4u; f_8018FFE4(c); // 8018D5A0
  goto L_8018D620; // 8018D5A4
L_8018D5A8:;
  c->r[0]=R8(c->r[29]+0x00000005u); // 8018D5A8
  c->r[31]=c->r[28]+0xFFFFFFFCu; // 8018D5AC
  c->r[3]=0u+0x00000001u; // 8018D5B0
  cmpu(c,0,c->r[0],0x000000FFu); // 8018D5B4
  if (crb(c,1)) { goto L_8018D5C0; } // 8018D5B8
  c->r[3]=0u+0x00000000u; // 8018D5BC
L_8018D5C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018D5C0
  if (crb(c,2)) { goto L_8018D5D0; } // 8018D5C4
  c->r[0]=0u+0x00000000u; // 8018D5C8
  goto L_8018D5EC; // 8018D5CC
L_8018D5D0:;
  c->r[3]=0u+0x80330000u; // 8018D5D0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018D5D4
  c->r[3]=c->r[3]+0x000006B0u; // 8018D5D8
  c->r[3]=R32(c->r[3]+0x00000038u); // 8018D5DC
  c->r[3]=R32(c->r[3]+0x00000008u); // 8018D5E0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018D5E4
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 8018D5E8
L_8018D5EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018D5EC
  if (crb(c,2)) { goto L_8018D60C; } // 8018D5F0
  c->r[4]=0u+0x802E0000u; // 8018D5F4
  c->r[3]=c->r[31]|c->r[31]; // 8018D5F8
  c->r[4]=c->r[4]+0x00000348u; // 8018D5FC
  c->r[4]=c->r[4]+0x0000000Au; // 8018D600
  c->lr=0x8018D608u; f_8018FFE4(c); // 8018D604
  goto L_8018D620; // 8018D608
L_8018D60C:;
  c->r[4]=0u+0x802E0000u; // 8018D60C
  c->r[3]=c->r[31]|c->r[31]; // 8018D610
  c->r[4]=c->r[4]+0x00000348u; // 8018D614
  c->r[4]=c->r[4]+0x0000000Eu; // 8018D618
  c->lr=0x8018D620u; f_8018FFE4(c); // 8018D61C
L_8018D620:;
  c->r[3]=c->r[31]|c->r[31]; // 8018D620
  goto L_8018DBC4; // 8018D624
L_8018D628:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8018D628
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018D62C
  if (crb(c,2)) { goto L_8018D6B0; } // 8018D630
  c->r[0]=R8(c->r[29]+0x00000005u); // 8018D634
  c->r[31]=c->r[28]+0xFFFFFFFBu; // 8018D638
  c->r[3]=0u+0x00000001u; // 8018D63C
  cmpu(c,0,c->r[0],0x000000FFu); // 8018D640
  if (crb(c,1)) { goto L_8018D64C; } // 8018D644
  c->r[3]=0u+0x00000000u; // 8018D648
L_8018D64C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018D64C
  if (crb(c,2)) { goto L_8018D65C; } // 8018D650
  c->r[0]=0u+0x00000000u; // 8018D654
  goto L_8018D678; // 8018D658
L_8018D65C:;
  c->r[3]=0u+0x80330000u; // 8018D65C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018D660
  c->r[3]=c->r[3]+0x000006B0u; // 8018D664
  c->r[3]=R32(c->r[3]+0x00000038u); // 8018D668
  c->r[3]=R32(c->r[3]+0x00000008u); // 8018D66C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018D670
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 8018D674
L_8018D678:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018D678
  if (crb(c,2)) { goto L_8018D698; } // 8018D67C
  c->r[4]=0u+0x802E0000u; // 8018D680
  c->r[3]=c->r[31]|c->r[31]; // 8018D684
  c->r[4]=c->r[4]+0x00000348u; // 8018D688
  c->r[4]=c->r[4]+0x00000012u; // 8018D68C
  c->lr=0x8018D694u; f_8018FFE4(c); // 8018D690
  goto L_8018D728; // 8018D694
L_8018D698:;
  c->r[4]=0u+0x802E0000u; // 8018D698
  c->r[3]=c->r[31]|c->r[31]; // 8018D69C
  c->r[4]=c->r[4]+0x00000348u; // 8018D6A0
  c->r[4]=c->r[4]+0x00000017u; // 8018D6A4
  c->lr=0x8018D6ACu; f_8018FFE4(c); // 8018D6A8
  goto L_8018D728; // 8018D6AC
L_8018D6B0:;
  c->r[0]=R8(c->r[29]+0x00000005u); // 8018D6B0
  c->r[31]=c->r[28]+0xFFFFFFFCu; // 8018D6B4
  c->r[3]=0u+0x00000001u; // 8018D6B8
  cmpu(c,0,c->r[0],0x000000FFu); // 8018D6BC
  if (crb(c,1)) { goto L_8018D6C8; } // 8018D6C0
  c->r[3]=0u+0x00000000u; // 8018D6C4
L_8018D6C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018D6C8
  if (crb(c,2)) { goto L_8018D6D8; } // 8018D6CC
  c->r[0]=0u+0x00000000u; // 8018D6D0
  goto L_8018D6F4; // 8018D6D4
L_8018D6D8:;
  c->r[3]=0u+0x80330000u; // 8018D6D8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018D6DC
  c->r[3]=c->r[3]+0x000006B0u; // 8018D6E0
  c->r[3]=R32(c->r[3]+0x00000038u); // 8018D6E4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8018D6E8
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018D6EC
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 8018D6F0
L_8018D6F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018D6F4
  if (crb(c,2)) { goto L_8018D714; } // 8018D6F8
  c->r[4]=0u+0x802E0000u; // 8018D6FC
  c->r[3]=c->r[31]|c->r[31]; // 8018D700
  c->r[4]=c->r[4]+0x00000348u; // 8018D704
  c->r[4]=c->r[4]+0x0000001Cu; // 8018D708
  c->lr=0x8018D710u; f_8018FFE4(c); // 8018D70C
  goto L_8018D728; // 8018D710
L_8018D714:;
  c->r[4]=0u+0x802E0000u; // 8018D714
  c->r[3]=c->r[31]|c->r[31]; // 8018D718
  c->r[4]=c->r[4]+0x00000348u; // 8018D71C
  c->r[4]=c->r[4]+0x00000020u; // 8018D720
  c->lr=0x8018D728u; f_8018FFE4(c); // 8018D724
L_8018D728:;
  c->r[3]=c->r[31]|c->r[31]; // 8018D728
  goto L_8018DBC4; // 8018D72C
L_8018D730:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 8018D730
  c->r[0]=0u+0x00000000u; // 8018D734
  c->r[3]=R8(c->r[1]+0x00000010u); // 8018D738
  c->r[31]=c->r[28]+0xFFFFFFFFu; // 8018D73C
  c->r[3]=c->r[3]+c->r[4]; // 8018D740
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018D744
  W16(c->r[1]+0x0000000Eu,c->r[3]); // 8018D748
  W8(c->r[28]+0xFFFFFFFFu,c->r[0]); // 8018D74C
  c->r[0]=R8(c->r[29]+0x00000005u); // 8018D750
  cmps(c,0,(int32_t)c->r[0],103); // 8018D754
  if (crb(c,2)) { goto L_8018D788; } // 8018D758
  cmps(c,0,(int32_t)c->r[0],71); // 8018D75C
  if (crb(c,2)) { goto L_8018D788; } // 8018D760
  cmps(c,0,(int32_t)c->r[0],101); // 8018D764
  if (crb(c,2)) { goto L_8018D840; } // 8018D768
  cmps(c,0,(int32_t)c->r[0],69); // 8018D76C
  if (crb(c,2)) { goto L_8018D840; } // 8018D770
  cmps(c,0,(int32_t)c->r[0],102); // 8018D774
  if (crb(c,2)) { goto L_8018D9A4; } // 8018D778
  cmps(c,0,(int32_t)c->r[0],70); // 8018D77C
  if (crb(c,2)) { goto L_8018D9A4; } // 8018D780
  goto L_8018DBC0; // 8018D784
L_8018D788:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8018D788
  c->r[0]=R8(c->r[1]+0x00000010u); // 8018D78C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8018D790
  if (!crb(c,1)) { goto L_8018D7A0; } // 8018D794
  c->r[3]=c->r[1]+0x0000000Cu; // 8018D798
  c->lr=0x8018D7A0u; f_8018D328(c); // 8018D79C
L_8018D7A0:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 8018D7A0
  cmps(c,0,(int32_t)c->r[4],-4); // 8018D7A4
  if (crb(c,0)) { goto L_8018D7B8; } // 8018D7A8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8018D7AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 8018D7B0
  if (crb(c,0)) { goto L_8018D804; } // 8018D7B4
L_8018D7B8:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 8018D7B8
  cmps(c,0,(int32_t)c->r[0],0); // 8018D7BC
  if (crb(c,2)) { goto L_8018D7D4; } // 8018D7C0
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8018D7C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D7C8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8018D7CC
  goto L_8018D7E0; // 8018D7D0
L_8018D7D4:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 8018D7D4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018D7D8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8018D7DC
L_8018D7E0:;
  c->r[0]=R8(c->r[29]+0x00000005u); // 8018D7E0
  cmpu(c,0,c->r[0],0x00000067u); // 8018D7E4
  if (!crb(c,2)) { goto L_8018D7F8; } // 8018D7E8
  c->r[0]=0u+0x00000065u; // 8018D7EC
  W8(c->r[29]+0x00000005u,c->r[0]); // 8018D7F0
  goto L_8018D840; // 8018D7F4
L_8018D7F8:;
  c->r[0]=0u+0x00000045u; // 8018D7F8
  W8(c->r[29]+0x00000005u,c->r[0]); // 8018D7FC
  goto L_8018D840; // 8018D800
L_8018D804:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 8018D804
  cmps(c,0,(int32_t)c->r[0],0); // 8018D808
  if (crb(c,2)) { goto L_8018D820; } // 8018D80C
  c->r[0]=c->r[4]+0x00000001u; // 8018D810
  c->r[0]=c->r[3]-c->r[0]; // 8018D814
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8018D818
  goto L_8018D9A4; // 8018D81C
L_8018D820:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 8018D820
  c->r[3]=c->r[4]+0x00000001u; // 8018D824
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 8018D828
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8018D82C
  if (!crb(c,0)) { goto L_8018D9A4; } // 8018D830
  c->r[0]=0u+0x00000000u; // 8018D834
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8018D838
  goto L_8018D9A4; // 8018D83C
L_8018D840:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8018D840
  c->r[0]=R8(c->r[1]+0x00000010u); // 8018D844
  c->r[4]=c->r[3]+0x00000001u; // 8018D848
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8018D84C
  if (!crb(c,1)) { goto L_8018D85C; } // 8018D850
  c->r[3]=c->r[1]+0x0000000Cu; // 8018D854
  c->lr=0x8018D85Cu; f_8018D328(c); // 8018D858
L_8018D85C:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 8018D85C
  c->r[8]=0u+0x0000002Bu; // 8018D860
  cmps(c,0,(int32_t)c->r[6],0); // 8018D864
  if (!crb(c,0)) { goto L_8018D874; } // 8018D868
  c->r[6]=0u-c->r[6]; // 8018D86C
  c->r[8]=0u+0x0000002Du; // 8018D870
L_8018D874:;
  c->r[3]=0u+0x66660000u; // 8018D874
  c->r[7]=0u+0x00000000u; // 8018D878
  c->r[5]=c->r[3]+0x00006667u; // 8018D87C
  goto L_8018D8B8; // 8018D880
L_8018D884:;
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 8018D884
  c->r[7]=c->r[7]+0x00000001u; // 8018D888
  c->r[3]=sraw(c,c->r[0],2); // 8018D88C
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8018D890
  c->r[0]=sraw(c,c->r[0],2); // 8018D894
  c->r[3]=c->r[3]+c->r[4]; // 8018D898
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 8018D89C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8018D8A0
  c->r[4]=c->r[6]-c->r[4]; // 8018D8A4
  c->r[6]=c->r[0]+c->r[3]; // 8018D8A8
  c->r[0]=c->r[4]+0x00000030u; // 8018D8AC
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 8018D8B0
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 8018D8B4
L_8018D8B8:;
  cmps(c,0,(int32_t)c->r[6],0); // 8018D8B8
  if (!crb(c,2)) { IRQCHK(c); goto L_8018D884; } // 8018D8BC
  cmps(c,0,(int32_t)c->r[7],2); // 8018D8C0
  if (crb(c,0)) { IRQCHK(c); goto L_8018D884; } // 8018D8C4
  W8(c->r[31]+0xFFFFFFFFu,c->r[8]); // 8018D8C8
  c->r[0]=R8(c->r[29]+0x00000005u); // 8018D8CC
  {uint32_t ea=c->r[31]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018D8D0
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8018D8D4
  c->r[0]=c->r[28]-c->r[31]; // 8018D8D8
  c->r[0]=c->r[3]+c->r[0]; // 8018D8DC
  cmps(c,0,(int32_t)c->r[0],509); // 8018D8E0
  if (!crb(c,1)) { goto L_8018D8F0; } // 8018D8E4
  c->r[3]=0u+0x00000000u; // 8018D8E8
  goto L_8018DBC4; // 8018D8EC
L_8018D8F0:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 8018D8F0
  c->r[0]=c->r[3]+0x00000001u; // 8018D8F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8018D8F8
  if (!crb(c,0)) { goto L_8018D91C; } // 8018D8FC
  c->r[3]=c->r[3]+0x00000002u; // 8018D900
  c->r[0]=0u+0x00000030u; // 8018D904
  c->r[3]=c->r[3]-c->r[4]; // 8018D908
  goto L_8018D914; // 8018D90C
L_8018D910:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018D910
L_8018D914:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8018D914
  if (!crb(c,2)) { IRQCHK(c); goto L_8018D910; } // 8018D918
L_8018D91C:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 8018D91C
  c->r[4]=c->r[1]+0x00000011u; // 8018D920
  c->r[4]=c->r[4]+c->r[3]; // 8018D924
  goto L_8018D934; // 8018D928
L_8018D92C:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 8018D92C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018D930
L_8018D934:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8018D934
  if (!crb(c,2)) { IRQCHK(c); goto L_8018D92C; } // 8018D938
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8018D93C
  cmps(c,0,(int32_t)c->r[0],0); // 8018D940
  if (!crb(c,2)) { goto L_8018D954; } // 8018D944
  c->r[0]=R8(c->r[29]+0x00000003u); // 8018D948
  cmps(c,0,(int32_t)c->r[0],0); // 8018D94C
  if (crb(c,2)) { goto L_8018D958; } // 8018D950
L_8018D954:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 8018D954
L_8018D958:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 8018D958
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018D95C
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8018D960
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018D964
  if (crb(c,2)) { goto L_8018D978; } // 8018D968
  c->r[0]=0u+0x0000002Du; // 8018D96C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018D970
  goto L_8018DBC0; // 8018D974
L_8018D978:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 8018D978
  cmpu(c,0,c->r[0],0x00000001u); // 8018D97C
  if (!crb(c,2)) { goto L_8018D990; } // 8018D980
  c->r[0]=0u+0x0000002Bu; // 8018D984
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018D988
  goto L_8018DBC0; // 8018D98C
L_8018D990:;
  cmpu(c,0,c->r[0],0x00000002u); // 8018D990
  if (!crb(c,2)) { goto L_8018DBC0; } // 8018D994
  c->r[0]=0u+0x00000020u; // 8018D998
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018D99C
  goto L_8018DBC0; // 8018D9A0
L_8018D9A4:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 8018D9A4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 8018D9A8
  c->r[3]=c->r[4]-c->r[5]; // 8018D9AC
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 8018D9B0
  if (!crb(c,0)) { goto L_8018D9BC; } // 8018D9B4
  c->r[8]=0u+0x00000000u; // 8018D9B8
L_8018D9BC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8018D9BC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8018D9C0
  if (!crb(c,1)) { goto L_8018D9F0; } // 8018D9C4
  c->r[0]=c->r[8]-c->r[0]; // 8018D9C8
  c->r[3]=c->r[1]+0x0000000Cu; // 8018D9CC
  c->r[4]=c->r[4]-c->r[0]; // 8018D9D0
  c->lr=0x8018D9D8u; f_8018D328(c); // 8018D9D4
  c->r[4]=R8(c->r[1]+0x00000010u); // 8018D9D8
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 8018D9DC
  c->r[3]=c->r[4]-c->r[5]; // 8018D9E0
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 8018D9E4
  if (!crb(c,0)) { goto L_8018D9F0; } // 8018D9E8
  c->r[8]=0u+0x00000000u; // 8018D9EC
L_8018D9F0:;
  c->r[7]=addc(c,c->r[5],0x00000001u,0); cr0(c,c->r[7]); // 8018D9F0
  if (!crb(c,0)) { goto L_8018D9FC; } // 8018D9F4
  c->r[7]=0u+0x00000000u; // 8018D9F8
L_8018D9FC:;
  c->r[0]=c->r[7]+c->r[8]; // 8018D9FC
  cmps(c,0,(int32_t)c->r[0],509); // 8018DA00
  if (!crb(c,1)) { goto L_8018DA10; } // 8018DA04
  c->r[3]=0u+0x00000000u; // 8018DA08
  goto L_8018DBC4; // 8018DA0C
L_8018DA10:;
  c->r[6]=c->r[1]+0x00000011u; // 8018DA10
  c->r[5]=0u+0x00000000u; // 8018DA14
  c->r[6]=c->r[6]+c->r[4]; // 8018DA18
  c->r[3]=0u+0x00000030u; // 8018DA1C
  goto L_8018DA2C; // 8018DA20
L_8018DA24:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 8018DA24
  c->r[5]=c->r[5]+0x00000001u; // 8018DA28
L_8018DA2C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8018DA2C
  c->r[0]=c->r[0]-c->r[8]; // 8018DA30
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8018DA34
  if (crb(c,0)) { IRQCHK(c); goto L_8018DA24; } // 8018DA38
  c->r[3]=0u+0x00000000u; // 8018DA3C
  goto L_8018DA50; // 8018DA40
L_8018DA44:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 8018DA44
  c->r[3]=c->r[3]+0x00000001u; // 8018DA48
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018DA4C
L_8018DA50:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 8018DA50
  if (!crb(c,0)) { goto L_8018DA64; } // 8018DA54
  c->r[0]=R8(c->r[1]+0x00000010u); // 8018DA58
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8018DA5C
  if (crb(c,0)) { IRQCHK(c); goto L_8018DA44; } // 8018DA60
L_8018DA64:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 8018DA64
  c->r[3]=c->r[8]-c->r[3]; // 8018DA68
  c->r[4]=0u+0x00000030u; // 8018DA6C
  if (!crb(c,0)) { goto L_8018DAB8; } // 8018DA70
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8018DA74
  c->ctr=c->r[0]; // 8018DA78
  if (crb(c,2)) { goto L_8018DAAC; } // 8018DA7C
L_8018DA80:;
  W8(c->r[31]+0xFFFFFFFFu,c->r[4]); // 8018DA80
  W8(c->r[31]+0xFFFFFFFEu,c->r[4]); // 8018DA84
  W8(c->r[31]+0xFFFFFFFDu,c->r[4]); // 8018DA88
  W8(c->r[31]+0xFFFFFFFCu,c->r[4]); // 8018DA8C
  W8(c->r[31]+0xFFFFFFFBu,c->r[4]); // 8018DA90
  W8(c->r[31]+0xFFFFFFFAu,c->r[4]); // 8018DA94
  W8(c->r[31]+0xFFFFFFF9u,c->r[4]); // 8018DA98
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[4]); c->r[31]=ea;} // 8018DA9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018DA80; } // 8018DAA0
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 8018DAA4
  if (crb(c,2)) { goto L_8018DAB8; } // 8018DAA8
L_8018DAAC:;
  c->ctr=c->r[3]; // 8018DAAC
L_8018DAB0:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[31]=ea;} // 8018DAB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018DAB0; } // 8018DAB4
L_8018DAB8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8018DAB8
  cmps(c,0,(int32_t)c->r[0],0); // 8018DABC
  if (!crb(c,2)) { goto L_8018DAD0; } // 8018DAC0
  c->r[0]=R8(c->r[29]+0x00000003u); // 8018DAC4
  cmps(c,0,(int32_t)c->r[0],0); // 8018DAC8
  if (crb(c,2)) { goto L_8018DAD4; } // 8018DACC
L_8018DAD0:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 8018DAD0
L_8018DAD4:;
  cmps(c,0,(int32_t)c->r[7],0); // 8018DAD4
  if (crb(c,2)) { goto L_8018DB78; } // 8018DAD8
  c->r[4]=0u+0x00000000u; // 8018DADC
  c->r[3]=0u+0x00000030u; // 8018DAE0
  goto L_8018DAF0; // 8018DAE4
L_8018DAE8:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 8018DAE8
  c->r[4]=c->r[4]+0x00000001u; // 8018DAEC
L_8018DAF0:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 8018DAF0
  c->r[0]=c->r[7]-c->r[0]; // 8018DAF4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8018DAF8
  if (crb(c,0)) { IRQCHK(c); goto L_8018DAE8; } // 8018DAFC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 8018DB00
  c->r[3]=c->r[7]-c->r[4]; // 8018DB04
  if (!crb(c,0)) { goto L_8018DB80; } // 8018DB08
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8018DB0C
  c->ctr=c->r[0]; // 8018DB10
  if (crb(c,2)) { goto L_8018DB64; } // 8018DB14
L_8018DB18:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 8018DB18
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 8018DB1C
  c->r[0]=R8(c->r[6]+0xFFFFFFFEu); // 8018DB20
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 8018DB24
  c->r[0]=R8(c->r[6]+0xFFFFFFFDu); // 8018DB28
  W8(c->r[31]+0xFFFFFFFDu,c->r[0]); // 8018DB2C
  c->r[0]=R8(c->r[6]+0xFFFFFFFCu); // 8018DB30
  W8(c->r[31]+0xFFFFFFFCu,c->r[0]); // 8018DB34
  c->r[0]=R8(c->r[6]+0xFFFFFFFBu); // 8018DB38
  W8(c->r[31]+0xFFFFFFFBu,c->r[0]); // 8018DB3C
  c->r[0]=R8(c->r[6]+0xFFFFFFFAu); // 8018DB40
  W8(c->r[31]+0xFFFFFFFAu,c->r[0]); // 8018DB44
  c->r[0]=R8(c->r[6]+0xFFFFFFF9u); // 8018DB48
  W8(c->r[31]+0xFFFFFFF9u,c->r[0]); // 8018DB4C
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->r[0]=R8(ea); c->r[6]=ea;} // 8018DB50
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[0]); c->r[31]=ea;} // 8018DB54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018DB18; } // 8018DB58
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 8018DB5C
  if (crb(c,2)) { goto L_8018DB80; } // 8018DB60
L_8018DB64:;
  c->ctr=c->r[3]; // 8018DB64
L_8018DB68:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 8018DB68
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018DB6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018DB68; } // 8018DB70
  goto L_8018DB80; // 8018DB74
L_8018DB78:;
  c->r[0]=0u+0x00000030u; // 8018DB78
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018DB7C
L_8018DB80:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8018DB80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018DB84
  if (crb(c,2)) { goto L_8018DB98; } // 8018DB88
  c->r[0]=0u+0x0000002Du; // 8018DB8C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018DB90
  goto L_8018DBC0; // 8018DB94
L_8018DB98:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 8018DB98
  cmpu(c,0,c->r[0],0x00000001u); // 8018DB9C
  if (!crb(c,2)) { goto L_8018DBB0; } // 8018DBA0
  c->r[0]=0u+0x0000002Bu; // 8018DBA4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018DBA8
  goto L_8018DBC0; // 8018DBAC
L_8018DBB0:;
  cmpu(c,0,c->r[0],0x00000002u); // 8018DBB0
  if (!crb(c,2)) { goto L_8018DBC0; } // 8018DBB4
  c->r[0]=0u+0x00000020u; // 8018DBB8
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 8018DBBC
L_8018DBC0:;
  c->r[3]=c->r[31]|c->r[31]; // 8018DBC0
L_8018DBC4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018DBC4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[31]=RF64(ea);} // 8018DBC8
  c->r[31]=R32(c->r[1]+0x00000044u); // 8018DBCC
  c->r[30]=R32(c->r[1]+0x00000040u); // 8018DBD0
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 8018DBD4
  c->r[28]=R32(c->r[1]+0x00000038u); // 8018DBD8
  c->lr=c->r[0]; // 8018DBDC
  c->r[1]=c->r[1]+0x00000050u; // 8018DBE0
  return; // 8018DBE4
}

// __pformatter
void f_8018DBE8(Ctx* __restrict c) {
  trace_call(0x8018DBE8u);
  {uint32_t ea=c->r[1]+0xFFFFFD30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018DBE8
  c->r[0]=c->lr; // 8018DBEC
  W32(c->r[1]+0x000002D4u,c->r[0]); // 8018DBF0
  {uint32_t ea=c->r[1]+0x0000028Cu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018DBF4
  c->r[24]=0u+0x00000020u; // 8018DBF8
  c->r[22]=0u+0x802E0000u; // 8018DBFC
  c->r[25]=c->r[3]|c->r[3]; // 8018DC00
  c->r[26]=c->r[4]|c->r[4]; // 8018DC04
  c->r[15]=c->r[5]|c->r[5]; // 8018DC08
  c->r[27]=c->r[6]|c->r[6]; // 8018DC0C
  c->r[28]=c->r[7]|c->r[7]; // 8018DC10
  c->r[22]=c->r[22]+0x00000348u; // 8018DC14
  c->r[21]=c->r[1]+0x0000027Fu; // 8018DC18
  c->r[17]=0u+0x00000000u; // 8018DC1C
  c->r[20]=0u+0x80330000u; // 8018DC20
  c->r[23]=0u+0x00000025u; // 8018DC24
  W8(c->r[1]+0x00000009u,c->r[24]); // 8018DC28
  goto L_8018E470; // 8018DC2C
L_8018DC30:;
  c->r[3]=c->r[15]|c->r[15]; // 8018DC30
  c->r[4]=0u+0x00000025u; // 8018DC34
  c->lr=0x8018DC3Cu; f_801902BC(c); // 8018DC38
  cmps(c,0,(int32_t)c->r[3],0); // 8018DC3C
  c->r[16]=c->r[3]|c->r[3]; // 8018DC40
  if (!crb(c,2)) { goto L_8018DC84; } // 8018DC44
  c->r[3]=c->r[15]|c->r[15]; // 8018DC48
  c->lr=0x8018DC50u; f_80185588(c); // 8018DC4C
  cmps(c,0,(int32_t)c->r[3],0); // 8018DC50
  c->r[5]=c->r[3]|c->r[3]; // 8018DC54
  c->r[17]=c->r[17]+c->r[3]; // 8018DC58
  if (crb(c,2)) { goto L_8018E47C; } // 8018DC5C
  c->r[12]=c->r[25]|c->r[25]; // 8018DC60
  c->r[3]=c->r[26]|c->r[26]; // 8018DC64
  c->r[4]=c->r[15]|c->r[15]; // 8018DC68
  c->ctr=c->r[12]; // 8018DC6C
  if (true) { c->lr=0x8018DC74u; dispatch(c,c->ctr); } // 8018DC70
  cmps(c,0,(int32_t)c->r[3],0); // 8018DC74
  if (!crb(c,2)) { goto L_8018E47C; } // 8018DC78
  c->r[3]=0u+0xFFFFFFFFu; // 8018DC7C
  goto L_8018E480; // 8018DC80
L_8018DC84:;
  c->r[5]=c->r[3]-c->r[15]; cr0(c,c->r[5]); // 8018DC84
  c->r[17]=c->r[17]+c->r[5]; // 8018DC88
  if (crb(c,2)) { goto L_8018DCB4; } // 8018DC8C
  c->r[12]=c->r[25]|c->r[25]; // 8018DC90
  c->r[3]=c->r[26]|c->r[26]; // 8018DC94
  c->r[4]=c->r[15]|c->r[15]; // 8018DC98
  c->ctr=c->r[12]; // 8018DC9C
  if (true) { c->lr=0x8018DCA4u; dispatch(c,c->ctr); } // 8018DCA0
  cmps(c,0,(int32_t)c->r[3],0); // 8018DCA4
  if (!crb(c,2)) { goto L_8018DCB4; } // 8018DCA8
  c->r[3]=0u+0xFFFFFFFFu; // 8018DCAC
  goto L_8018E480; // 8018DCB0
L_8018DCB4:;
  c->r[3]=c->r[16]|c->r[16]; // 8018DCB4
  c->r[4]=c->r[27]|c->r[27]; // 8018DCB8
  c->r[5]=c->r[1]+0x00000070u; // 8018DCBC
  c->lr=0x8018DCC4u; f_8018C4AC(c); // 8018DCC0
  c->r[4]=R8(c->r[1]+0x00000075u); // 8018DCC4
  c->r[15]=c->r[3]|c->r[3]; // 8018DCC8
  c->r[0]=c->r[4]+0xFFFFFFDBu; // 8018DCCC
  cmpu(c,0,c->r[0],0x00000053u); // 8018DCD0
  if (crb(c,1)) { goto L_8018E290; } // 8018DCD4
  c->r[3]=c->r[20]+0x000007D8u; // 8018DCD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018DCDC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8018DCE0
  c->ctr=c->r[3]; // 8018DCE4
  if (true) { switch (c->ctr) { case 0x8018DCECu: goto L_8018DCEC; case 0x8018DE48u: goto L_8018DE48; case 0x8018DFA4u: goto L_8018DFA4; case 0x8018E014u: goto L_8018E014; case 0x8018E084u: goto L_8018E084; case 0x8018E1A8u: goto L_8018E1A8; case 0x8018E260u: goto L_8018E260; case 0x8018E280u: goto L_8018E280; case 0x8018E290u: goto L_8018E290; default: break; } dispatch(c,c->ctr); return; } // 8018DCE8
L_8018DCEC:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018DCEC
  cmpu(c,0,c->r[0],0x00000003u); // 8018DCF0
  if (!crb(c,2)) { goto L_8018DD0C; } // 8018DCF4
  c->r[3]=c->r[27]|c->r[27]; // 8018DCF8
  c->r[4]=0u+0x00000001u; // 8018DCFC
  c->lr=0x8018DD04u; f_801855A4(c); // 8018DD00
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DD04
  goto L_8018DD94; // 8018DD08
L_8018DD0C:;
  cmpu(c,0,c->r[0],0x00000004u); // 8018DD0C
  if (!crb(c,2)) { goto L_8018DD2C; } // 8018DD10
  c->r[3]=c->r[27]|c->r[27]; // 8018DD14
  c->r[4]=0u+0x00000002u; // 8018DD18
  c->lr=0x8018DD20u; f_801855A4(c); // 8018DD1C
  c->r[30]=R32(c->r[3]+0x00000000u); // 8018DD20
  c->r[29]=R32(c->r[3]+0x00000004u); // 8018DD24
  goto L_8018DD94; // 8018DD28
L_8018DD2C:;
  cmpu(c,0,c->r[0],0x00000006u); // 8018DD2C
  if (!crb(c,2)) { goto L_8018DD4C; } // 8018DD30
  c->r[3]=c->r[27]|c->r[27]; // 8018DD34
  c->r[4]=0u+0x00000002u; // 8018DD38
  c->lr=0x8018DD40u; f_801855A4(c); // 8018DD3C
  c->r[30]=R32(c->r[3]+0x00000000u); // 8018DD40
  c->r[29]=R32(c->r[3]+0x00000004u); // 8018DD44
  goto L_8018DD94; // 8018DD48
L_8018DD4C:;
  cmpu(c,0,c->r[0],0x00000007u); // 8018DD4C
  if (!crb(c,2)) { goto L_8018DD68; } // 8018DD50
  c->r[3]=c->r[27]|c->r[27]; // 8018DD54
  c->r[4]=0u+0x00000001u; // 8018DD58
  c->lr=0x8018DD60u; f_801855A4(c); // 8018DD5C
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DD60
  goto L_8018DD94; // 8018DD64
L_8018DD68:;
  cmpu(c,0,c->r[0],0x00000008u); // 8018DD68
  if (!crb(c,2)) { goto L_8018DD84; } // 8018DD6C
  c->r[3]=c->r[27]|c->r[27]; // 8018DD70
  c->r[4]=0u+0x00000001u; // 8018DD74
  c->lr=0x8018DD7Cu; f_801855A4(c); // 8018DD78
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DD7C
  goto L_8018DD94; // 8018DD80
L_8018DD84:;
  c->r[3]=c->r[27]|c->r[27]; // 8018DD84
  c->r[4]=0u+0x00000001u; // 8018DD88
  c->lr=0x8018DD90u; f_801855A4(c); // 8018DD8C
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DD90
L_8018DD94:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018DD94
  cmpu(c,0,c->r[0],0x00000002u); // 8018DD98
  if (!crb(c,2)) { goto L_8018DDA4; } // 8018DD9C
  c->r[31]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8018DDA0
L_8018DDA4:;
  cmpu(c,0,c->r[0],0x00000001u); // 8018DDA4
  if (!crb(c,2)) { goto L_8018DDB0; } // 8018DDA8
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8018DDAC
L_8018DDB0:;
  cmpu(c,0,c->r[0],0x00000004u); // 8018DDB0
  if (crb(c,2)) { goto L_8018DDC0; } // 8018DDB4
  cmpu(c,0,c->r[0],0x00000006u); // 8018DDB8
  if (!crb(c,2)) { goto L_8018DE04; } // 8018DDBC
L_8018DDC0:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 8018DDC0
  c->r[4]=c->r[29]|c->r[29]; // 8018DDC4
  c->r[8]=R32(c->r[1]+0x00000074u); // 8018DDC8
  c->r[3]=c->r[30]|c->r[30]; // 8018DDCC
  c->r[7]=R32(c->r[1]+0x00000078u); // 8018DDD0
  c->r[5]=c->r[1]+0x00000280u; // 8018DDD4
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8018DDD8
  c->r[6]=c->r[1]+0x00000060u; // 8018DDDC
  W32(c->r[1]+0x00000060u,c->r[9]); // 8018DDE0
  W32(c->r[1]+0x00000064u,c->r[8]); // 8018DDE4
  W32(c->r[1]+0x00000068u,c->r[7]); // 8018DDE8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8018DDEC
  c->lr=0x8018DDF4u; f_8018CCA8(c); // 8018DDF0
  cmps(c,0,(int32_t)c->r[3],0); // 8018DDF4
  c->r[18]=c->r[3]|c->r[3]; // 8018DDF8
  if (crb(c,2)) { goto L_8018E290; } // 8018DDFC
  goto L_8018DE40; // 8018DE00
L_8018DE04:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 8018DE04
  c->r[3]=c->r[31]|c->r[31]; // 8018DE08
  c->r[7]=R32(c->r[1]+0x00000074u); // 8018DE0C
  c->r[4]=c->r[1]+0x00000280u; // 8018DE10
  c->r[6]=R32(c->r[1]+0x00000078u); // 8018DE14
  c->r[5]=c->r[1]+0x00000050u; // 8018DE18
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8018DE1C
  W32(c->r[1]+0x00000050u,c->r[8]); // 8018DE20
  W32(c->r[1]+0x00000054u,c->r[7]); // 8018DE24
  W32(c->r[1]+0x00000058u,c->r[6]); // 8018DE28
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8018DE2C
  c->lr=0x8018DE34u; f_8018CA68(c); // 8018DE30
  cmps(c,0,(int32_t)c->r[3],0); // 8018DE34
  c->r[18]=c->r[3]|c->r[3]; // 8018DE38
  if (crb(c,2)) { goto L_8018E290; } // 8018DE3C
L_8018DE40:;
  c->r[19]=c->r[21]-c->r[18]; // 8018DE40
  goto L_8018E2D4; // 8018DE44
L_8018DE48:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018DE48
  cmpu(c,0,c->r[0],0x00000003u); // 8018DE4C
  if (!crb(c,2)) { goto L_8018DE68; } // 8018DE50
  c->r[3]=c->r[27]|c->r[27]; // 8018DE54
  c->r[4]=0u+0x00000001u; // 8018DE58
  c->lr=0x8018DE60u; f_801855A4(c); // 8018DE5C
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DE60
  goto L_8018DEF0; // 8018DE64
L_8018DE68:;
  cmpu(c,0,c->r[0],0x00000004u); // 8018DE68
  if (!crb(c,2)) { goto L_8018DE88; } // 8018DE6C
  c->r[3]=c->r[27]|c->r[27]; // 8018DE70
  c->r[4]=0u+0x00000002u; // 8018DE74
  c->lr=0x8018DE7Cu; f_801855A4(c); // 8018DE78
  c->r[30]=R32(c->r[3]+0x00000000u); // 8018DE7C
  c->r[29]=R32(c->r[3]+0x00000004u); // 8018DE80
  goto L_8018DEF0; // 8018DE84
L_8018DE88:;
  cmpu(c,0,c->r[0],0x00000006u); // 8018DE88
  if (!crb(c,2)) { goto L_8018DEA8; } // 8018DE8C
  c->r[3]=c->r[27]|c->r[27]; // 8018DE90
  c->r[4]=0u+0x00000002u; // 8018DE94
  c->lr=0x8018DE9Cu; f_801855A4(c); // 8018DE98
  c->r[30]=R32(c->r[3]+0x00000000u); // 8018DE9C
  c->r[29]=R32(c->r[3]+0x00000004u); // 8018DEA0
  goto L_8018DEF0; // 8018DEA4
L_8018DEA8:;
  cmpu(c,0,c->r[0],0x00000007u); // 8018DEA8
  if (!crb(c,2)) { goto L_8018DEC4; } // 8018DEAC
  c->r[3]=c->r[27]|c->r[27]; // 8018DEB0
  c->r[4]=0u+0x00000001u; // 8018DEB4
  c->lr=0x8018DEBCu; f_801855A4(c); // 8018DEB8
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DEBC
  goto L_8018DEF0; // 8018DEC0
L_8018DEC4:;
  cmpu(c,0,c->r[0],0x00000008u); // 8018DEC4
  if (!crb(c,2)) { goto L_8018DEE0; } // 8018DEC8
  c->r[3]=c->r[27]|c->r[27]; // 8018DECC
  c->r[4]=0u+0x00000001u; // 8018DED0
  c->lr=0x8018DED8u; f_801855A4(c); // 8018DED4
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DED8
  goto L_8018DEF0; // 8018DEDC
L_8018DEE0:;
  c->r[3]=c->r[27]|c->r[27]; // 8018DEE0
  c->r[4]=0u+0x00000001u; // 8018DEE4
  c->lr=0x8018DEECu; f_801855A4(c); // 8018DEE8
  c->r[31]=R32(c->r[3]+0x00000000u); // 8018DEEC
L_8018DEF0:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018DEF0
  cmpu(c,0,c->r[0],0x00000002u); // 8018DEF4
  if (!crb(c,2)) { goto L_8018DF00; } // 8018DEF8
  c->r[31]=rotl(c->r[31],0)&0x0000FFFFu; // 8018DEFC
L_8018DF00:;
  cmpu(c,0,c->r[0],0x00000001u); // 8018DF00
  if (!crb(c,2)) { goto L_8018DF0C; } // 8018DF04
  c->r[31]=rotl(c->r[31],0)&0x000000FFu; // 8018DF08
L_8018DF0C:;
  cmpu(c,0,c->r[0],0x00000004u); // 8018DF0C
  if (crb(c,2)) { goto L_8018DF1C; } // 8018DF10
  cmpu(c,0,c->r[0],0x00000006u); // 8018DF14
  if (!crb(c,2)) { goto L_8018DF60; } // 8018DF18
L_8018DF1C:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 8018DF1C
  c->r[4]=c->r[29]|c->r[29]; // 8018DF20
  c->r[8]=R32(c->r[1]+0x00000074u); // 8018DF24
  c->r[3]=c->r[30]|c->r[30]; // 8018DF28
  c->r[7]=R32(c->r[1]+0x00000078u); // 8018DF2C
  c->r[5]=c->r[1]+0x00000280u; // 8018DF30
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8018DF34
  c->r[6]=c->r[1]+0x00000040u; // 8018DF38
  W32(c->r[1]+0x00000040u,c->r[9]); // 8018DF3C
  W32(c->r[1]+0x00000044u,c->r[8]); // 8018DF40
  W32(c->r[1]+0x00000048u,c->r[7]); // 8018DF44
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8018DF48
  c->lr=0x8018DF50u; f_8018CCA8(c); // 8018DF4C
  cmps(c,0,(int32_t)c->r[3],0); // 8018DF50
  c->r[18]=c->r[3]|c->r[3]; // 8018DF54
  if (crb(c,2)) { goto L_8018E290; } // 8018DF58
  goto L_8018DF9C; // 8018DF5C
L_8018DF60:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 8018DF60
  c->r[3]=c->r[31]|c->r[31]; // 8018DF64
  c->r[7]=R32(c->r[1]+0x00000074u); // 8018DF68
  c->r[4]=c->r[1]+0x00000280u; // 8018DF6C
  c->r[6]=R32(c->r[1]+0x00000078u); // 8018DF70
  c->r[5]=c->r[1]+0x00000030u; // 8018DF74
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8018DF78
  W32(c->r[1]+0x00000030u,c->r[8]); // 8018DF7C
  W32(c->r[1]+0x00000034u,c->r[7]); // 8018DF80
  W32(c->r[1]+0x00000038u,c->r[6]); // 8018DF84
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8018DF88
  c->lr=0x8018DF90u; f_8018CA68(c); // 8018DF8C
  cmps(c,0,(int32_t)c->r[3],0); // 8018DF90
  c->r[18]=c->r[3]|c->r[3]; // 8018DF94
  if (crb(c,2)) { goto L_8018E290; } // 8018DF98
L_8018DF9C:;
  c->r[19]=c->r[21]-c->r[18]; // 8018DF9C
  goto L_8018E2D4; // 8018DFA0
L_8018DFA4:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018DFA4
  cmpu(c,0,c->r[0],0x00000009u); // 8018DFA8
  if (!crb(c,2)) { goto L_8018DFC4; } // 8018DFAC
  c->r[3]=c->r[27]|c->r[27]; // 8018DFB0
  c->r[4]=0u+0x00000003u; // 8018DFB4
  c->lr=0x8018DFBCu; f_801855A4(c); // 8018DFB8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 8018DFBC
  goto L_8018DFD4; // 8018DFC0
L_8018DFC4:;
  c->r[3]=c->r[27]|c->r[27]; // 8018DFC4
  c->r[4]=0u+0x00000003u; // 8018DFC8
  c->lr=0x8018DFD0u; f_801855A4(c); // 8018DFCC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 8018DFD0
L_8018DFD4:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 8018DFD4
  c->r[3]=c->r[1]+0x00000280u; // 8018DFD8
  c->r[6]=R32(c->r[1]+0x00000074u); // 8018DFDC
  c->r[4]=c->r[1]+0x00000020u; // 8018DFE0
  c->r[5]=R32(c->r[1]+0x00000078u); // 8018DFE4
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8018DFE8
  W32(c->r[1]+0x00000020u,c->r[7]); // 8018DFEC
  W32(c->r[1]+0x00000024u,c->r[6]); // 8018DFF0
  W32(c->r[1]+0x00000028u,c->r[5]); // 8018DFF4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8018DFF8
  c->lr=0x8018E000u; f_8018D450(c); // 8018DFFC
  cmps(c,0,(int32_t)c->r[3],0); // 8018E000
  c->r[18]=c->r[3]|c->r[3]; // 8018E004
  if (crb(c,2)) { goto L_8018E290; } // 8018E008
  c->r[19]=c->r[21]-c->r[3]; // 8018E00C
  goto L_8018E2D4; // 8018E010
L_8018E014:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018E014
  cmpu(c,0,c->r[0],0x00000009u); // 8018E018
  if (!crb(c,2)) { goto L_8018E034; } // 8018E01C
  c->r[3]=c->r[27]|c->r[27]; // 8018E020
  c->r[4]=0u+0x00000003u; // 8018E024
  c->lr=0x8018E02Cu; f_801855A4(c); // 8018E028
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 8018E02C
  goto L_8018E044; // 8018E030
L_8018E034:;
  c->r[3]=c->r[27]|c->r[27]; // 8018E034
  c->r[4]=0u+0x00000003u; // 8018E038
  c->lr=0x8018E040u; f_801855A4(c); // 8018E03C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 8018E040
L_8018E044:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 8018E044
  c->r[3]=c->r[1]+0x00000280u; // 8018E048
  c->r[6]=R32(c->r[1]+0x00000074u); // 8018E04C
  c->r[4]=c->r[1]+0x00000010u; // 8018E050
  c->r[5]=R32(c->r[1]+0x00000078u); // 8018E054
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8018E058
  W32(c->r[1]+0x00000010u,c->r[7]); // 8018E05C
  W32(c->r[1]+0x00000014u,c->r[6]); // 8018E060
  W32(c->r[1]+0x00000018u,c->r[5]); // 8018E064
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8018E068
  c->lr=0x8018E070u; f_8018CF58(c); // 8018E06C
  cmps(c,0,(int32_t)c->r[3],0); // 8018E070
  c->r[18]=c->r[3]|c->r[3]; // 8018E074
  if (crb(c,2)) { goto L_8018E290; } // 8018E078
  c->r[19]=c->r[21]-c->r[3]; // 8018E07C
  goto L_8018E2D4; // 8018E080
L_8018E084:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018E084
  cmpu(c,0,c->r[0],0x00000005u); // 8018E088
  if (!crb(c,2)) { goto L_8018E0F0; } // 8018E08C
  c->r[3]=c->r[27]|c->r[27]; // 8018E090
  c->r[4]=0u+0x00000001u; // 8018E094
  c->lr=0x8018E09Cu; f_801855A4(c); // 8018E098
  cmps(c,0,(int32_t)c->r[28],0); // 8018E09C
  c->r[4]=R32(c->r[3]+0x00000000u); // 8018E0A0
  if (crb(c,2)) { goto L_8018E0C8; } // 8018E0A4
  cmps(c,0,(int32_t)c->r[4],0); // 8018E0A8
  if (!crb(c,2)) { goto L_8018E0C8; } // 8018E0AC
  c->r[3]=0u+0x00000000u; // 8018E0B0
  c->r[4]=0u+0x00000000u; // 8018E0B4
  c->r[5]=0u+0xFFFFFFFFu; // 8018E0B8
  c->lr=0x8018E0C0u; f_801880C8(c); // 8018E0BC
  c->r[3]=0u+0xFFFFFFFFu; // 8018E0C0
  goto L_8018E480; // 8018E0C4
L_8018E0C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018E0C8
  if (!crb(c,2)) { goto L_8018E0D4; } // 8018E0CC
  c->r[4]=c->r[13]+0xFFFF9230u; // 8018E0D0
L_8018E0D4:;
  c->r[3]=c->r[1]+0x00000080u; // 8018E0D4
  c->r[5]=0u+0x00000200u; // 8018E0D8
  c->lr=0x8018E0E0u; f_8018BF94(c); // 8018E0DC
  cmps(c,0,(int32_t)c->r[3],0); // 8018E0E0
  if (crb(c,0)) { goto L_8018E290; } // 8018E0E4
  c->r[18]=c->r[1]+0x00000080u; // 8018E0E8
  goto L_8018E100; // 8018E0EC
L_8018E0F0:;
  c->r[3]=c->r[27]|c->r[27]; // 8018E0F0
  c->r[4]=0u+0x00000001u; // 8018E0F4
  c->lr=0x8018E0FCu; f_801855A4(c); // 8018E0F8
  c->r[18]=R32(c->r[3]+0x00000000u); // 8018E0FC
L_8018E100:;
  cmps(c,0,(int32_t)c->r[28],0); // 8018E100
  if (crb(c,2)) { goto L_8018E128; } // 8018E104
  cmps(c,0,(int32_t)c->r[18],0); // 8018E108
  if (!crb(c,2)) { goto L_8018E128; } // 8018E10C
  c->r[3]=0u+0x00000000u; // 8018E110
  c->r[4]=0u+0x00000000u; // 8018E114
  c->r[5]=0u+0xFFFFFFFFu; // 8018E118
  c->lr=0x8018E120u; f_801880C8(c); // 8018E11C
  c->r[3]=0u+0xFFFFFFFFu; // 8018E120
  goto L_8018E480; // 8018E124
L_8018E128:;
  cmps(c,0,(int32_t)c->r[18],0); // 8018E128
  if (!crb(c,2)) { goto L_8018E134; } // 8018E12C
  c->r[18]=c->r[22]+0x00000024u; // 8018E130
L_8018E134:;
  c->r[0]=R8(c->r[1]+0x00000073u); // 8018E134
  cmps(c,0,(int32_t)c->r[0],0); // 8018E138
  if (crb(c,2)) { goto L_8018E168; } // 8018E13C
  c->r[0]=R8(c->r[1]+0x00000072u); // 8018E140
  c->r[19]=R8(c->r[18]+0x00000000u); // 8018E144
  c->r[18]=c->r[18]+0x00000001u; // 8018E148
  cmps(c,0,(int32_t)c->r[0],0); // 8018E14C
  if (crb(c,2)) { goto L_8018E2D4; } // 8018E150
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8018E154
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 8018E158
  if (!crb(c,1)) { goto L_8018E2D4; } // 8018E15C
  c->r[19]=c->r[0]|c->r[0]; // 8018E160
  goto L_8018E2D4; // 8018E164
L_8018E168:;
  c->r[0]=R8(c->r[1]+0x00000072u); // 8018E168
  cmps(c,0,(int32_t)c->r[0],0); // 8018E16C
  if (crb(c,2)) { goto L_8018E198; } // 8018E170
  c->r[19]=R32(c->r[1]+0x0000007Cu); // 8018E174
  c->r[3]=c->r[18]|c->r[18]; // 8018E178
  c->r[4]=0u+0x00000000u; // 8018E17C
  c->r[5]=c->r[19]|c->r[19]; // 8018E180
  c->lr=0x8018E188u; f_8018C118(c); // 8018E184
  cmps(c,0,(int32_t)c->r[3],0); // 8018E188
  if (crb(c,2)) { goto L_8018E2D4; } // 8018E18C
  c->r[19]=c->r[3]-c->r[18]; // 8018E190
  goto L_8018E2D4; // 8018E194
L_8018E198:;
  c->r[3]=c->r[18]|c->r[18]; // 8018E198
  c->lr=0x8018E1A0u; f_80185588(c); // 8018E19C
  c->r[19]=c->r[3]|c->r[3]; // 8018E1A0
  goto L_8018E2D4; // 8018E1A4
L_8018E1A8:;
  c->r[3]=c->r[27]|c->r[27]; // 8018E1A8
  c->r[4]=0u+0x00000001u; // 8018E1AC
  c->lr=0x8018E1B4u; f_801855A4(c); // 8018E1B0
  cmps(c,0,(int32_t)c->r[28],0); // 8018E1B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8018E1B8
  if (crb(c,2)) { goto L_8018E1D8; } // 8018E1BC
  c->r[3]=0u+0x00000000u; // 8018E1C0
  c->r[4]=0u+0x00000000u; // 8018E1C4
  c->r[5]=0u+0xFFFFFFFFu; // 8018E1C8
  c->lr=0x8018E1D0u; f_801880C8(c); // 8018E1CC
  c->r[3]=0u+0xFFFFFFFFu; // 8018E1D0
  goto L_8018E480; // 8018E1D4
L_8018E1D8:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 8018E1D8
  cmps(c,0,(int32_t)c->r[0],0); // 8018E1DC
  if (crb(c,2)) { goto L_8018E218; } // 8018E1E0
  cmps(c,0,(int32_t)c->r[0],2); // 8018E1E4
  if (crb(c,2)) { goto L_8018E220; } // 8018E1E8
  cmps(c,0,(int32_t)c->r[0],3); // 8018E1EC
  if (crb(c,2)) { goto L_8018E228; } // 8018E1F0
  cmps(c,0,(int32_t)c->r[0],6); // 8018E1F4
  if (crb(c,2)) { goto L_8018E230; } // 8018E1F8
  cmps(c,0,(int32_t)c->r[0],7); // 8018E1FC
  if (crb(c,2)) { goto L_8018E240; } // 8018E200
  cmps(c,0,(int32_t)c->r[0],8); // 8018E204
  if (crb(c,2)) { goto L_8018E248; } // 8018E208
  cmps(c,0,(int32_t)c->r[0],4); // 8018E20C
  if (crb(c,2)) { goto L_8018E250; } // 8018E210
  goto L_8018E470; // 8018E214
L_8018E218:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 8018E218
  goto L_8018E470; // 8018E21C
L_8018E220:;
  W16(c->r[3]+0x00000000u,c->r[17]); // 8018E220
  goto L_8018E470; // 8018E224
L_8018E228:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 8018E228
  goto L_8018E470; // 8018E22C
L_8018E230:;
  W32(c->r[3]+0x00000004u,c->r[17]); // 8018E230
  c->r[0]=sraw(c,c->r[17],31); // 8018E234
  W32(c->r[3]+0x00000000u,c->r[0]); // 8018E238
  goto L_8018E470; // 8018E23C
L_8018E240:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 8018E240
  goto L_8018E470; // 8018E244
L_8018E248:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 8018E248
  goto L_8018E470; // 8018E24C
L_8018E250:;
  W32(c->r[3]+0x00000004u,c->r[17]); // 8018E250
  c->r[0]=sraw(c,c->r[17],31); // 8018E254
  W32(c->r[3]+0x00000000u,c->r[0]); // 8018E258
  goto L_8018E470; // 8018E25C
L_8018E260:;
  c->r[3]=c->r[27]|c->r[27]; // 8018E260
  c->r[18]=c->r[1]+0x00000080u; // 8018E264
  c->r[4]=0u+0x00000001u; // 8018E268
  c->lr=0x8018E270u; f_801855A4(c); // 8018E26C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8018E270
  c->r[19]=0u+0x00000001u; // 8018E274
  W8(c->r[1]+0x00000080u,c->r[0]); // 8018E278
  goto L_8018E2D4; // 8018E27C
L_8018E280:;
  W8(c->r[1]+0x00000080u,c->r[23]); // 8018E280
  c->r[18]=c->r[1]+0x00000080u; // 8018E284
  c->r[19]=0u+0x00000001u; // 8018E288
  goto L_8018E2D4; // 8018E28C
L_8018E290:;
  c->r[3]=c->r[16]|c->r[16]; // 8018E290
  c->lr=0x8018E298u; f_80185588(c); // 8018E294
  cmps(c,0,(int32_t)c->r[3],0); // 8018E298
  c->r[5]=c->r[3]|c->r[3]; // 8018E29C
  c->r[17]=c->r[17]+c->r[3]; // 8018E2A0
  if (crb(c,2)) { goto L_8018E2CC; } // 8018E2A4
  c->r[12]=c->r[25]|c->r[25]; // 8018E2A8
  c->r[3]=c->r[26]|c->r[26]; // 8018E2AC
  c->r[4]=c->r[16]|c->r[16]; // 8018E2B0
  c->ctr=c->r[12]; // 8018E2B4
  if (true) { c->lr=0x8018E2BCu; dispatch(c,c->ctr); } // 8018E2B8
  cmps(c,0,(int32_t)c->r[3],0); // 8018E2BC
  if (!crb(c,2)) { goto L_8018E2CC; } // 8018E2C0
  c->r[3]=0u+0xFFFFFFFFu; // 8018E2C4
  goto L_8018E480; // 8018E2C8
L_8018E2CC:;
  c->r[3]=c->r[17]|c->r[17]; // 8018E2CC
  goto L_8018E480; // 8018E2D0
L_8018E2D4:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 8018E2D4
  c->r[16]=c->r[19]|c->r[19]; // 8018E2D8
  cmps(c,0,(int32_t)c->r[0],0); // 8018E2DC
  if (crb(c,2)) { goto L_8018E3F0; } // 8018E2E0
  cmpu(c,0,c->r[0],0x00000002u); // 8018E2E4
  c->r[3]=0u+0x00000020u; // 8018E2E8
  if (!crb(c,2)) { goto L_8018E2F4; } // 8018E2EC
  c->r[3]=0u+0x00000030u; // 8018E2F0
L_8018E2F4:;
  W8(c->r[1]+0x00000009u,c->r[3]); // 8018E2F4
  c->r[0]=R8(c->r[18]+0x00000000u); // 8018E2F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018E2FC
  cmps(c,0,(int32_t)c->r[0],43); // 8018E300
  if (crb(c,2)) { goto L_8018E318; } // 8018E304
  cmps(c,0,(int32_t)c->r[0],45); // 8018E308
  if (crb(c,2)) { goto L_8018E318; } // 8018E30C
  cmps(c,0,(int32_t)c->r[0],32); // 8018E310
  if (!crb(c,2)) { goto L_8018E354; } // 8018E314
L_8018E318:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018E318
  cmps(c,0,(int32_t)c->r[0],48); // 8018E31C
  if (!crb(c,2)) { goto L_8018E354; } // 8018E320
  c->r[12]=c->r[25]|c->r[25]; // 8018E324
  c->r[3]=c->r[26]|c->r[26]; // 8018E328
  c->r[4]=c->r[18]|c->r[18]; // 8018E32C
  c->r[5]=0u+0x00000001u; // 8018E330
  c->ctr=c->r[12]; // 8018E334
  if (true) { c->lr=0x8018E33Cu; dispatch(c,c->ctr); } // 8018E338
  cmps(c,0,(int32_t)c->r[3],0); // 8018E33C
  if (!crb(c,2)) { goto L_8018E34C; } // 8018E340
  c->r[3]=0u+0xFFFFFFFFu; // 8018E344
  goto L_8018E480; // 8018E348
L_8018E34C:;
  c->r[18]=c->r[18]+0x00000001u; // 8018E34C
  c->r[19]=c->r[19]+0xFFFFFFFFu; // 8018E350
L_8018E354:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 8018E354
  cmpu(c,0,c->r[0],0x00000002u); // 8018E358
  if (!crb(c,2)) { goto L_8018E3E4; } // 8018E35C
  c->r[0]=R8(c->r[1]+0x00000075u); // 8018E360
  cmpu(c,0,c->r[0],0x00000061u); // 8018E364
  if (crb(c,2)) { goto L_8018E374; } // 8018E368
  cmpu(c,0,c->r[0],0x00000041u); // 8018E36C
  if (!crb(c,2)) { goto L_8018E3E4; } // 8018E370
L_8018E374:;
  cmps(c,0,(int32_t)c->r[19],2); // 8018E374
  if (!crb(c,0)) { goto L_8018E384; } // 8018E378
  c->r[3]=0u+0xFFFFFFFFu; // 8018E37C
  goto L_8018E480; // 8018E380
L_8018E384:;
  c->r[12]=c->r[25]|c->r[25]; // 8018E384
  c->r[3]=c->r[26]|c->r[26]; // 8018E388
  c->r[4]=c->r[18]|c->r[18]; // 8018E38C
  c->r[5]=0u+0x00000002u; // 8018E390
  c->ctr=c->r[12]; // 8018E394
  if (true) { c->lr=0x8018E39Cu; dispatch(c,c->ctr); } // 8018E398
  cmps(c,0,(int32_t)c->r[3],0); // 8018E39C
  if (!crb(c,2)) { goto L_8018E3AC; } // 8018E3A0
  c->r[3]=0u+0xFFFFFFFFu; // 8018E3A4
  goto L_8018E480; // 8018E3A8
L_8018E3AC:;
  c->r[19]=c->r[19]+0xFFFFFFFEu; // 8018E3AC
  c->r[18]=c->r[18]+0x00000002u; // 8018E3B0
  goto L_8018E3E4; // 8018E3B4
L_8018E3B8:;
  c->r[12]=c->r[25]|c->r[25]; // 8018E3B8
  c->r[3]=c->r[26]|c->r[26]; // 8018E3BC
  c->r[4]=c->r[1]+0x00000009u; // 8018E3C0
  c->r[5]=0u+0x00000001u; // 8018E3C4
  c->ctr=c->r[12]; // 8018E3C8
  if (true) { c->lr=0x8018E3D0u; dispatch(c,c->ctr); } // 8018E3CC
  cmps(c,0,(int32_t)c->r[3],0); // 8018E3D0
  if (!crb(c,2)) { goto L_8018E3E0; } // 8018E3D4
  c->r[3]=0u+0xFFFFFFFFu; // 8018E3D8
  goto L_8018E480; // 8018E3DC
L_8018E3E0:;
  c->r[16]=c->r[16]+0x00000001u; // 8018E3E0
L_8018E3E4:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 8018E3E4
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 8018E3E8
  if (crb(c,0)) { IRQCHK(c); goto L_8018E3B8; } // 8018E3EC
L_8018E3F0:;
  cmps(c,0,(int32_t)c->r[19],0); // 8018E3F0
  if (crb(c,2)) { goto L_8018E420; } // 8018E3F4
  c->r[12]=c->r[25]|c->r[25]; // 8018E3F8
  c->r[3]=c->r[26]|c->r[26]; // 8018E3FC
  c->r[4]=c->r[18]|c->r[18]; // 8018E400
  c->r[5]=c->r[19]|c->r[19]; // 8018E404
  c->ctr=c->r[12]; // 8018E408
  if (true) { c->lr=0x8018E410u; dispatch(c,c->ctr); } // 8018E40C
  cmps(c,0,(int32_t)c->r[3],0); // 8018E410
  if (!crb(c,2)) { goto L_8018E420; } // 8018E414
  c->r[3]=0u+0xFFFFFFFFu; // 8018E418
  goto L_8018E480; // 8018E41C
L_8018E420:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 8018E420
  cmps(c,0,(int32_t)c->r[0],0); // 8018E424
  if (!crb(c,2)) { goto L_8018E46C; } // 8018E428
  goto L_8018E460; // 8018E42C
L_8018E430:;
  c->r[12]=c->r[25]|c->r[25]; // 8018E430
  c->r[3]=c->r[26]|c->r[26]; // 8018E434
  W8(c->r[1]+0x00000008u,c->r[24]); // 8018E438
  c->r[4]=c->r[1]+0x00000008u; // 8018E43C
  c->r[5]=0u+0x00000001u; // 8018E440
  c->ctr=c->r[12]; // 8018E444
  if (true) { c->lr=0x8018E44Cu; dispatch(c,c->ctr); } // 8018E448
  cmps(c,0,(int32_t)c->r[3],0); // 8018E44C
  if (!crb(c,2)) { goto L_8018E45C; } // 8018E450
  c->r[3]=0u+0xFFFFFFFFu; // 8018E454
  goto L_8018E480; // 8018E458
L_8018E45C:;
  c->r[16]=c->r[16]+0x00000001u; // 8018E45C
L_8018E460:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 8018E460
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 8018E464
  if (crb(c,0)) { IRQCHK(c); goto L_8018E430; } // 8018E468
L_8018E46C:;
  c->r[17]=c->r[17]+c->r[16]; // 8018E46C
L_8018E470:;
  c->r[0]=R8(c->r[15]+0x00000000u); // 8018E470
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018E474
  if (!crb(c,2)) { IRQCHK(c); goto L_8018DC30; } // 8018E478
L_8018E47C:;
  c->r[3]=c->r[17]|c->r[17]; // 8018E47C
L_8018E480:;
  {uint32_t ea=c->r[1]+0x0000028Cu; for(int i=15;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018E480
  c->r[0]=R32(c->r[1]+0x000002D4u); // 8018E484
  c->lr=c->r[0]; // 8018E488
  c->r[1]=c->r[1]+0x000002D0u; // 8018E48C
  return; // 8018E490
}

// __FileWrite
void f_8018E494(Ctx* __restrict c) {
  trace_call(0x8018E494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E494
  c->r[0]=c->lr; // 8018E498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018E49C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018E4A0
  c->r[31]=c->r[5]|c->r[5]; // 8018E4A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018E4A8
  c->r[30]=c->r[3]|c->r[3]; // 8018E4AC
  c->r[3]=c->r[4]|c->r[4]; // 8018E4B0
  c->r[4]=0u+0x00000001u; // 8018E4B4
  c->r[6]=c->r[30]|c->r[30]; // 8018E4B8
  c->lr=0x8018E4C0u; f_8018B4DC(c); // 8018E4BC
  cmpu(c,0,c->r[31],c->r[3]); // 8018E4C0
  if (!crb(c,2)) { goto L_8018E4CC; } // 8018E4C4
  goto L_8018E4D0; // 8018E4C8
L_8018E4CC:;
  c->r[30]=0u+0x00000000u; // 8018E4CC
L_8018E4D0:;
  c->r[3]=c->r[30]|c->r[30]; // 8018E4D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018E4D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018E4D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018E4DC
  c->lr=c->r[0]; // 8018E4E0
  c->r[1]=c->r[1]+0x00000010u; // 8018E4E4
  return; // 8018E4E8
}

// __StringWrite
void f_8018E4EC(Ctx* __restrict c) {
  trace_call(0x8018E4ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E4EC
  c->r[0]=c->lr; // 8018E4F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018E4F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018E4F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018E4FC
  c->r[30]=c->r[3]|c->r[3]; // 8018E500
  c->r[6]=R32(c->r[3]+0x00000008u); // 8018E504
  c->r[7]=R32(c->r[3]+0x00000004u); // 8018E508
  c->r[0]=c->r[6]+c->r[5]; // 8018E50C
  cmpu(c,0,c->r[0],c->r[7]); // 8018E510
  c->r[31]=c->r[7]-c->r[6]; // 8018E514
  if (crb(c,1)) { goto L_8018E520; } // 8018E518
  c->r[31]=c->r[5]|c->r[5]; // 8018E51C
L_8018E520:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8018E520
  c->r[5]=c->r[31]|c->r[31]; // 8018E524
  c->r[3]=c->r[0]+c->r[6]; // 8018E528
  c->lr=0x8018E530u; f_80004338(c); // 8018E52C
  c->r[0]=R32(c->r[30]+0x00000008u); // 8018E530
  c->r[3]=0u+0x00000001u; // 8018E534
  c->r[0]=c->r[0]+c->r[31]; // 8018E538
  W32(c->r[30]+0x00000008u,c->r[0]); // 8018E53C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018E540
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018E544
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018E548
  c->lr=c->r[0]; // 8018E54C
  c->r[1]=c->r[1]+0x00000010u; // 8018E550
  return; // 8018E554
}

// fn_8018E558
void f_8018E558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E558
  c->r[0]=c->lr; // 8018E55C
  W32(c->r[1]+0x00000084u,c->r[0]); // 8018E560
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8018E564
  W32(c->r[1]+0x00000078u,c->r[30]); // 8018E568
  c->r[30]=c->r[3]|c->r[3]; // 8018E56C
  if (!crb(c,6)) { goto L_8018E594; } // 8018E570
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8018E574
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8018E578
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8018E57C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8018E580
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8018E584
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8018E588
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8018E58C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8018E590
L_8018E594:;
  c->r[31]=0u+0x80330000u; // 8018E594
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8018E598
  c->r[31]=c->r[31]+0x00000258u; // 8018E59C
  c->r[4]=0u+0xFFFFFFFFu; // 8018E5A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018E5A4
  c->r[3]=c->r[31]+0x00000050u; // 8018E5A8
  W32(c->r[1]+0x00000010u,c->r[5]); // 8018E5AC
  W32(c->r[1]+0x00000014u,c->r[6]); // 8018E5B0
  W32(c->r[1]+0x00000018u,c->r[7]); // 8018E5B4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8018E5B8
  W32(c->r[1]+0x00000020u,c->r[9]); // 8018E5BC
  W32(c->r[1]+0x00000024u,c->r[10]); // 8018E5C0
  c->lr=0x8018E5C8u; f_801925E0(c); // 8018E5C4
  cmps(c,0,(int32_t)c->r[3],0); // 8018E5C8
  if (crb(c,0)) { goto L_8018E5D8; } // 8018E5CC
  c->r[3]=0u+0xFFFFFFFFu; // 8018E5D0
  goto L_8018E60C; // 8018E5D4
L_8018E5D8:;
  c->r[4]=c->r[1]+0x00000088u; // 8018E5D8
  c->r[0]=c->r[1]+0x00000008u; // 8018E5DC
  c->r[5]=0u+0x01000000u; // 8018E5E0
  c->r[3]=0u+0x80190000u; // 8018E5E4
  W32(c->r[1]+0x00000068u,c->r[5]); // 8018E5E8
  c->r[6]=c->r[1]+0x00000068u; // 8018E5EC
  c->r[5]=c->r[30]|c->r[30]; // 8018E5F0
  c->r[3]=c->r[3]+0xFFFFE494u; // 8018E5F4
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8018E5F8
  c->r[4]=c->r[31]+0x00000050u; // 8018E5FC
  c->r[7]=0u+0x00000000u; // 8018E600
  W32(c->r[1]+0x00000070u,c->r[0]); // 8018E604
  c->lr=0x8018E60Cu; f_8018DBE8(c); // 8018E608
L_8018E60C:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 8018E60C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8018E610
  c->r[30]=R32(c->r[1]+0x00000078u); // 8018E614
  c->lr=c->r[0]; // 8018E618
  c->r[1]=c->r[1]+0x00000080u; // 8018E61C
  return; // 8018E620
}

// fn_8018E624
void f_8018E624(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E624
  c->r[0]=c->lr; // 8018E628
  W32(c->r[1]+0x00000084u,c->r[0]); // 8018E62C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8018E630
  c->r[31]=c->r[4]|c->r[4]; // 8018E634
  W32(c->r[1]+0x00000078u,c->r[30]); // 8018E638
  c->r[30]=c->r[3]|c->r[3]; // 8018E63C
  if (!crb(c,6)) { goto L_8018E664; } // 8018E640
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8018E644
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8018E648
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8018E64C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8018E650
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8018E654
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8018E658
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8018E65C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8018E660
L_8018E664:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018E664
  c->r[3]=c->r[30]|c->r[30]; // 8018E668
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8018E66C
  c->r[4]=0u+0xFFFFFFFFu; // 8018E670
  W32(c->r[1]+0x00000010u,c->r[5]); // 8018E674
  W32(c->r[1]+0x00000014u,c->r[6]); // 8018E678
  W32(c->r[1]+0x00000018u,c->r[7]); // 8018E67C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8018E680
  W32(c->r[1]+0x00000020u,c->r[9]); // 8018E684
  W32(c->r[1]+0x00000024u,c->r[10]); // 8018E688
  c->lr=0x8018E690u; f_801925E0(c); // 8018E68C
  cmps(c,0,(int32_t)c->r[3],0); // 8018E690
  if (crb(c,0)) { goto L_8018E6A0; } // 8018E694
  c->r[3]=0u+0xFFFFFFFFu; // 8018E698
  goto L_8018E6D4; // 8018E69C
L_8018E6A0:;
  c->r[7]=c->r[1]+0x00000088u; // 8018E6A0
  c->r[0]=c->r[1]+0x00000008u; // 8018E6A4
  c->r[4]=0u+0x02000000u; // 8018E6A8
  c->r[3]=0u+0x80190000u; // 8018E6AC
  W32(c->r[1]+0x00000068u,c->r[4]); // 8018E6B0
  c->r[6]=c->r[1]+0x00000068u; // 8018E6B4
  c->r[4]=c->r[30]|c->r[30]; // 8018E6B8
  c->r[5]=c->r[31]|c->r[31]; // 8018E6BC
  W32(c->r[1]+0x0000006Cu,c->r[7]); // 8018E6C0
  c->r[3]=c->r[3]+0xFFFFE494u; // 8018E6C4
  c->r[7]=0u+0x00000000u; // 8018E6C8
  W32(c->r[1]+0x00000070u,c->r[0]); // 8018E6CC
  c->lr=0x8018E6D4u; f_8018DBE8(c); // 8018E6D0
L_8018E6D4:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 8018E6D4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8018E6D8
  c->r[30]=R32(c->r[1]+0x00000078u); // 8018E6DC
  c->lr=c->r[0]; // 8018E6E0
  c->r[1]=c->r[1]+0x00000080u; // 8018E6E4
  return; // 8018E6E8
}

// vprintf
void f_8018E6EC(Ctx* __restrict c) {
  trace_call(0x8018E6ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E6EC
  c->r[0]=c->lr; // 8018E6F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018E6F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8018E6F8
  c->r[31]=0u+0x80330000u; // 8018E6FC
  c->r[31]=c->r[31]+0x00000258u; // 8018E700
  W32(c->r[1]+0x00000018u,c->r[30]); // 8018E704
  c->r[30]=c->r[4]|c->r[4]; // 8018E708
  c->r[4]=0u+0xFFFFFFFFu; // 8018E70C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8018E710
  c->r[29]=c->r[3]|c->r[3]; // 8018E714
  c->r[3]=c->r[31]+0x00000050u; // 8018E718
  c->lr=0x8018E720u; f_801925E0(c); // 8018E71C
  cmps(c,0,(int32_t)c->r[3],0); // 8018E720
  if (crb(c,0)) { goto L_8018E730; } // 8018E724
  c->r[3]=0u+0xFFFFFFFFu; // 8018E728
  goto L_8018E74C; // 8018E72C
L_8018E730:;
  c->r[3]=0u+0x80190000u; // 8018E730
  c->r[5]=c->r[29]|c->r[29]; // 8018E734
  c->r[6]=c->r[30]|c->r[30]; // 8018E738
  c->r[4]=c->r[31]+0x00000050u; // 8018E73C
  c->r[3]=c->r[3]+0xFFFFE494u; // 8018E740
  c->r[7]=0u+0x00000000u; // 8018E744
  c->lr=0x8018E74Cu; f_8018DBE8(c); // 8018E748
L_8018E74C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018E74C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8018E750
  c->r[30]=R32(c->r[1]+0x00000018u); // 8018E754
  c->r[29]=R32(c->r[1]+0x00000014u); // 8018E758
  c->lr=c->r[0]; // 8018E75C
  c->r[1]=c->r[1]+0x00000020u; // 8018E760
  return; // 8018E764
}

// vsnprintf
void f_8018E768(Ctx* __restrict c) {
  trace_call(0x8018E768u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E768
  c->r[0]=c->lr; // 8018E76C
  c->r[7]=0u+0x80190000u; // 8018E770
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018E774
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8018E778
  c->r[31]=0u+0x00000000u; // 8018E77C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8018E780
  c->r[30]=c->r[4]|c->r[4]; // 8018E784
  W32(c->r[1]+0x00000024u,c->r[29]); // 8018E788
  c->r[29]=c->r[3]|c->r[3]; // 8018E78C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018E790
  c->r[3]=c->r[7]+0xFFFFE4ECu; // 8018E794
  c->r[7]=0u+0x00000000u; // 8018E798
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8018E79C
  c->r[4]=c->r[1]+0x00000008u; // 8018E7A0
  W32(c->r[1]+0x00000010u,c->r[31]); // 8018E7A4
  c->lr=0x8018E7ACu; f_8018DBE8(c); // 8018E7A8
  cmps(c,0,(int32_t)c->r[29],0); // 8018E7AC
  if (crb(c,2)) { goto L_8018E7D4; } // 8018E7B0
  cmpu(c,0,c->r[3],c->r[30]); // 8018E7B4
  if (!crb(c,0)) { goto L_8018E7C4; } // 8018E7B8
  W8(c->r[29]+c->r[3],c->r[31]); // 8018E7BC
  goto L_8018E7D4; // 8018E7C0
L_8018E7C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8018E7C4
  if (crb(c,2)) { goto L_8018E7D4; } // 8018E7C8
  c->r[4]=c->r[29]+c->r[30]; // 8018E7CC
  W8(c->r[4]+0xFFFFFFFFu,c->r[31]); // 8018E7D0
L_8018E7D4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018E7D4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8018E7D8
  c->r[30]=R32(c->r[1]+0x00000028u); // 8018E7DC
  c->r[29]=R32(c->r[1]+0x00000024u); // 8018E7E0
  c->lr=c->r[0]; // 8018E7E4
  c->r[1]=c->r[1]+0x00000030u; // 8018E7E8
  return; // 8018E7EC
}

// fn_8018E7F0
void f_8018E7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E7F0
  c->r[0]=c->lr; // 8018E7F4
  c->r[6]=c->r[5]|c->r[5]; // 8018E7F8
  c->r[5]=c->r[4]|c->r[4]; // 8018E7FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8018E800
  c->r[7]=0u+0x80190000u; // 8018E804
  c->r[4]=c->r[1]+0x00000008u; // 8018E808
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8018E80C
  c->r[31]=0u+0x00000000u; // 8018E810
  W32(c->r[1]+0x00000028u,c->r[30]); // 8018E814
  c->r[30]=0u+0xFFFFFFFFu; // 8018E818
  W32(c->r[1]+0x00000024u,c->r[29]); // 8018E81C
  c->r[29]=c->r[3]|c->r[3]; // 8018E820
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018E824
  c->r[3]=c->r[7]+0xFFFFE4ECu; // 8018E828
  c->r[7]=0u+0x00000000u; // 8018E82C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8018E830
  W32(c->r[1]+0x00000010u,c->r[31]); // 8018E834
  c->lr=0x8018E83Cu; f_8018DBE8(c); // 8018E838
  cmps(c,0,(int32_t)c->r[29],0); // 8018E83C
  if (crb(c,2)) { goto L_8018E858; } // 8018E840
  cmpu(c,0,c->r[3],c->r[30]); // 8018E844
  if (!crb(c,0)) { goto L_8018E854; } // 8018E848
  W8(c->r[29]+c->r[3],c->r[31]); // 8018E84C
  goto L_8018E858; // 8018E850
L_8018E854:;
  W8(c->r[29]+0xFFFFFFFEu,c->r[31]); // 8018E854
L_8018E858:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8018E858
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8018E85C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8018E860
  c->r[29]=R32(c->r[1]+0x00000024u); // 8018E864
  c->lr=c->r[0]; // 8018E868
  c->r[1]=c->r[1]+0x00000030u; // 8018E86C
  return; // 8018E870
}

// fn_8018E874
void f_8018E874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E874
  c->r[0]=c->lr; // 8018E878
  W32(c->r[1]+0x00000094u,c->r[0]); // 8018E87C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8018E880
  W32(c->r[1]+0x00000088u,c->r[30]); // 8018E884
  W32(c->r[1]+0x00000084u,c->r[29]); // 8018E888
  c->r[29]=c->r[4]|c->r[4]; // 8018E88C
  W32(c->r[1]+0x00000080u,c->r[28]); // 8018E890
  c->r[28]=c->r[3]|c->r[3]; // 8018E894
  if (!crb(c,6)) { goto L_8018E8BC; } // 8018E898
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8018E89C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8018E8A0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8018E8A4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8018E8A8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8018E8AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8018E8B0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8018E8B4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8018E8B8
L_8018E8BC:;
  c->r[12]=c->r[1]+0x00000098u; // 8018E8BC
  c->r[0]=c->r[1]+0x00000008u; // 8018E8C0
  c->r[30]=0u+0x03000000u; // 8018E8C4
  W32(c->r[1]+0x00000018u,c->r[7]); // 8018E8C8
  c->r[31]=0u+0x00000000u; // 8018E8CC
  c->r[7]=c->r[1]+0x00000074u; // 8018E8D0
  W32(c->r[1]+0x00000014u,c->r[6]); // 8018E8D4
  c->r[6]=c->r[7]|c->r[7]; // 8018E8D8
  c->r[11]=0u+0x80190000u; // 8018E8DC
  c->r[7]=0u+0x00000000u; // 8018E8E0
  W32(c->r[1]+0x00000010u,c->r[5]); // 8018E8E4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018E8E8
  W32(c->r[1]+0x00000068u,c->r[3]); // 8018E8EC
  c->r[3]=c->r[11]+0xFFFFE4ECu; // 8018E8F0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8018E8F4
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8018E8F8
  c->r[4]=c->r[1]+0x00000068u; // 8018E8FC
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8018E900
  W32(c->r[1]+0x00000020u,c->r[9]); // 8018E904
  W32(c->r[1]+0x00000024u,c->r[10]); // 8018E908
  W32(c->r[1]+0x00000074u,c->r[30]); // 8018E90C
  W32(c->r[1]+0x00000078u,c->r[12]); // 8018E910
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8018E914
  W32(c->r[1]+0x00000070u,c->r[31]); // 8018E918
  c->lr=0x8018E920u; f_8018DBE8(c); // 8018E91C
  cmps(c,0,(int32_t)c->r[28],0); // 8018E920
  if (crb(c,2)) { goto L_8018E948; } // 8018E924
  cmpu(c,0,c->r[3],c->r[29]); // 8018E928
  if (!crb(c,0)) { goto L_8018E938; } // 8018E92C
  W8(c->r[28]+c->r[3],c->r[31]); // 8018E930
  goto L_8018E948; // 8018E934
L_8018E938:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018E938
  if (crb(c,2)) { goto L_8018E948; } // 8018E93C
  c->r[4]=c->r[28]+c->r[29]; // 8018E940
  W8(c->r[4]+0xFFFFFFFFu,c->r[31]); // 8018E944
L_8018E948:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8018E948
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8018E94C
  c->r[30]=R32(c->r[1]+0x00000088u); // 8018E950
  c->r[29]=R32(c->r[1]+0x00000084u); // 8018E954
  c->r[28]=R32(c->r[1]+0x00000080u); // 8018E958
  c->lr=c->r[0]; // 8018E95C
  c->r[1]=c->r[1]+0x00000090u; // 8018E960
  return; // 8018E964
}

// sprintf
void f_8018E968(Ctx* __restrict c) {
  trace_call(0x8018E968u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018E968
  c->r[0]=c->lr; // 8018E96C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8018E970
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8018E974
  c->r[27]=c->r[3]|c->r[3]; // 8018E978
  if (!crb(c,6)) { goto L_8018E9A0; } // 8018E97C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8018E980
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8018E984
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8018E988
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8018E98C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8018E990
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8018E994
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8018E998
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8018E99C
L_8018E9A0:;
  c->r[12]=c->r[1]+0x000000A8u; // 8018E9A0
  c->r[0]=c->r[1]+0x00000008u; // 8018E9A4
  c->r[29]=0u+0x02000000u; // 8018E9A8
  W32(c->r[1]+0x00000010u,c->r[5]); // 8018E9AC
  c->r[30]=0u+0xFFFFFFFFu; // 8018E9B0
  c->r[31]=0u+0x00000000u; // 8018E9B4
  W32(c->r[1]+0x00000018u,c->r[7]); // 8018E9B8
  c->r[28]=c->r[1]+0x00000074u; // 8018E9BC
  c->r[11]=0u+0x80190000u; // 8018E9C0
  c->r[5]=c->r[4]|c->r[4]; // 8018E9C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8018E9C8
  c->r[4]=c->r[1]+0x00000068u; // 8018E9CC
  c->r[7]=0u+0x00000000u; // 8018E9D0
  W32(c->r[1]+0x00000014u,c->r[6]); // 8018E9D4
  c->r[6]=c->r[28]|c->r[28]; // 8018E9D8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018E9DC
  W32(c->r[1]+0x00000068u,c->r[3]); // 8018E9E0
  c->r[3]=c->r[11]+0xFFFFE4ECu; // 8018E9E4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8018E9E8
  W32(c->r[1]+0x00000020u,c->r[9]); // 8018E9EC
  W32(c->r[1]+0x00000024u,c->r[10]); // 8018E9F0
  W32(c->r[1]+0x00000074u,c->r[29]); // 8018E9F4
  W32(c->r[1]+0x00000078u,c->r[12]); // 8018E9F8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8018E9FC
  W32(c->r[1]+0x0000006Cu,c->r[30]); // 8018EA00
  W32(c->r[1]+0x00000070u,c->r[31]); // 8018EA04
  c->lr=0x8018EA0Cu; f_8018DBE8(c); // 8018EA08
  cmps(c,0,(int32_t)c->r[27],0); // 8018EA0C
  if (crb(c,2)) { goto L_8018EA28; } // 8018EA10
  cmpu(c,0,c->r[3],c->r[30]); // 8018EA14
  if (!crb(c,0)) { goto L_8018EA24; } // 8018EA18
  W8(c->r[27]+c->r[3],c->r[31]); // 8018EA1C
  goto L_8018EA28; // 8018EA20
L_8018EA24:;
  W8(c->r[27]+0xFFFFFFFEu,c->r[31]); // 8018EA24
L_8018EA28:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8018EA28
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8018EA2C
  c->lr=c->r[0]; // 8018EA30
  c->r[1]=c->r[1]+0x000000A0u; // 8018EA34
  return; // 8018EA38
}

// rand
void f_8018EA3C(Ctx* __restrict c) {
  trace_call(0x8018EA3Cu);
  c->r[3]=0u+0x41C60000u; // 8018EA3C
  c->r[4]=R32(c->r[13]+0xFFFF9238u); // 8018EA40
  c->r[0]=c->r[3]+0x00004E6Du; // 8018EA44
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8018EA48
  c->r[0]=c->r[3]+0x00003039u; // 8018EA4C
  W32(c->r[13]+0xFFFF9238u,c->r[0]); // 8018EA50
  c->r[3]=rotl(c->r[0],16)&0x00007FFFu; // 8018EA54
  return; // 8018EA58
}

// fn_8018EA5C
void f_8018EA5C(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF9238u,c->r[3]); // 8018EA5C
  return; // 8018EA60
}

// fn_8018EA64
void f_8018EA64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018EA64
  c->r[6]=0u+0x802E0000u; // 8018EA68
  {uint32_t ea=c->r[6]+0x00000370u; c->r[0]=R32(ea); c->r[6]=ea;} // 8018EA6C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8018EA70
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 8018EA74
  W32(c->r[1]+0x00000038u,c->r[30]); // 8018EA78
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8018EA7C
  c->r[30]=R32(c->r[6]+0x00000004u); // 8018EA80
  c->r[31]=R32(c->r[6]+0x00000008u); // 8018EA84
  cmps(c,0,(int32_t)c->r[5],37); // 8018EA88
  c->r[12]=R32(c->r[6]+0x0000000Cu); // 8018EA8C
  c->r[11]=R32(c->r[6]+0x00000010u); // 8018EA90
  c->r[10]=R32(c->r[6]+0x00000014u); // 8018EA94
  c->r[9]=R32(c->r[6]+0x00000018u); // 8018EA98
  c->r[8]=R32(c->r[6]+0x0000001Cu); // 8018EA9C
  c->r[7]=R32(c->r[6]+0x00000020u); // 8018EAA0
  c->r[6]=R32(c->r[6]+0x00000024u); // 8018EAA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8018EAA8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8018EAAC
  W32(c->r[1]+0x00000010u,c->r[31]); // 8018EAB0
  W32(c->r[1]+0x00000014u,c->r[12]); // 8018EAB4
  W32(c->r[1]+0x00000018u,c->r[11]); // 8018EAB8
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 8018EABC
  W32(c->r[1]+0x00000020u,c->r[9]); // 8018EAC0
  W32(c->r[1]+0x00000024u,c->r[8]); // 8018EAC4
  W32(c->r[1]+0x00000028u,c->r[7]); // 8018EAC8
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8018EACC
  if (!crb(c,2)) { goto L_8018EB0C; } // 8018EAD0
  W8(c->r[1]+0x0000000Bu,c->r[5]); // 8018EAD4
  c->r[3]=c->r[3]+0x00000001u; // 8018EAD8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018EADC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018EAE0
  W32(c->r[4]+0x00000004u,c->r[30]); // 8018EAE4
  W32(c->r[4]+0x00000008u,c->r[31]); // 8018EAE8
  W32(c->r[4]+0x0000000Cu,c->r[12]); // 8018EAEC
  W32(c->r[4]+0x00000010u,c->r[11]); // 8018EAF0
  W32(c->r[4]+0x00000014u,c->r[10]); // 8018EAF4
  W32(c->r[4]+0x00000018u,c->r[9]); // 8018EAF8
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 8018EAFC
  W32(c->r[4]+0x00000020u,c->r[7]); // 8018EB00
  W32(c->r[4]+0x00000024u,c->r[6]); // 8018EB04
  goto L_8018F0DC; // 8018EB08
L_8018EB0C:;
  cmps(c,0,(int32_t)c->r[5],42); // 8018EB0C
  if (!crb(c,2)) { goto L_8018EB24; } // 8018EB10
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 8018EB14
  c->r[0]=0u+0x00000001u; // 8018EB18
  W8(c->r[1]+0x00000008u,c->r[0]); // 8018EB1C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8018EB20
L_8018EB24:;
  cmpu(c,0,c->r[5],0x000000FFu); // 8018EB24
  c->r[0]=0u+0x00000001u; // 8018EB28
  if (crb(c,1)) { goto L_8018EB34; } // 8018EB2C
  c->r[0]=0u+0x00000000u; // 8018EB30
L_8018EB34:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018EB34
  if (crb(c,2)) { goto L_8018EB44; } // 8018EB38
  c->r[0]=0u+0x00000000u; // 8018EB3C
  goto L_8018EB60; // 8018EB40
L_8018EB44:;
  c->r[6]=0u+0x80330000u; // 8018EB44
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8018EB48
  c->r[6]=c->r[6]+0x000006B0u; // 8018EB4C
  c->r[6]=R32(c->r[6]+0x00000038u); // 8018EB50
  c->r[6]=R32(c->r[6]+0x00000008u); // 8018EB54
  c->r[0]=R16(c->r[6]+c->r[0]); // 8018EB58
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 8018EB5C
L_8018EB60:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018EB60
  if (crb(c,2)) { goto L_8018EC40; } // 8018EB64
  c->r[6]=0u+0x80330000u; // 8018EB68
  c->r[0]=0u+0x00000000u; // 8018EB6C
  c->r[6]=c->r[6]+0x000006B0u; // 8018EB70
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8018EB74
  c->r[7]=R32(c->r[6]+0x00000038u); // 8018EB78
L_8018EB7C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018EB7C
  c->r[8]=0u+0x00000001u; // 8018EB80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8018EB84
  c->r[6]=c->r[5]+c->r[0]; // 8018EB88
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 8018EB8C
  c->r[0]=c->r[6]+0xFFFFFFD0u; // 8018EB90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8018EB94
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8018EB98
  cmpu(c,0,c->r[5],0x000000FFu); // 8018EB9C
  if (crb(c,1)) { goto L_8018EBA8; } // 8018EBA0
  c->r[8]=0u+0x00000000u; // 8018EBA4
L_8018EBA8:;
  cmps(c,0,(int32_t)c->r[8],0); // 8018EBA8
  if (crb(c,2)) { goto L_8018EBB8; } // 8018EBAC
  c->r[0]=0u+0x00000000u; // 8018EBB0
  goto L_8018EBC8; // 8018EBB4
L_8018EBB8:;
  c->r[6]=R32(c->r[7]+0x00000008u); // 8018EBB8
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8018EBBC
  c->r[0]=R16(c->r[6]+c->r[0]); // 8018EBC0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 8018EBC4
L_8018EBC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018EBC8
  if (!crb(c,2)) { IRQCHK(c); goto L_8018EB7C; } // 8018EBCC
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8018EBD0
  cmps(c,0,(int32_t)c->r[6],0); // 8018EBD4
  if (!crb(c,2)) { goto L_8018EC38; } // 8018EBD8
  c->r[0]=0u+0x000000FFu; // 8018EBDC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018EBE0
  c->r[3]=c->r[3]+0x00000001u; // 8018EBE4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8018EBE8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8018EBEC
  W32(c->r[4]+0x00000004u,c->r[6]); // 8018EBF0
  c->r[5]=R32(c->r[1]+0x00000010u); // 8018EBF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018EBF8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8018EBFC
  W32(c->r[4]+0x00000008u,c->r[5]); // 8018EC00
  c->r[5]=R32(c->r[1]+0x00000018u); // 8018EC04
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8018EC08
  W32(c->r[4]+0x00000014u,c->r[0]); // 8018EC0C
  W32(c->r[4]+0x00000010u,c->r[5]); // 8018EC10
  c->r[5]=R32(c->r[1]+0x00000020u); // 8018EC14
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018EC18
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8018EC1C
  W32(c->r[4]+0x00000018u,c->r[5]); // 8018EC20
  c->r[5]=R32(c->r[1]+0x00000028u); // 8018EC24
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8018EC28
  W32(c->r[4]+0x00000024u,c->r[0]); // 8018EC2C
  W32(c->r[4]+0x00000020u,c->r[5]); // 8018EC30
  goto L_8018F0DC; // 8018EC34
L_8018EC38:;
  c->r[0]=0u+0x00000001u; // 8018EC38
  W8(c->r[1]+0x00000009u,c->r[0]); // 8018EC3C
L_8018EC40:;
  cmps(c,0,(int32_t)c->r[5],104); // 8018EC40
  c->r[7]=0u+0x00000001u; // 8018EC44
  if (crb(c,2)) { goto L_8018EC78; } // 8018EC48
  cmps(c,0,(int32_t)c->r[5],108); // 8018EC4C
  if (crb(c,2)) { goto L_8018ECA4; } // 8018EC50
  cmps(c,0,(int32_t)c->r[5],76); // 8018EC54
  if (crb(c,2)) { goto L_8018ECD0; } // 8018EC58
  cmps(c,0,(int32_t)c->r[5],106); // 8018EC5C
  if (crb(c,2)) { goto L_8018ECDC; } // 8018EC60
  cmps(c,0,(int32_t)c->r[5],122); // 8018EC64
  if (crb(c,2)) { goto L_8018ECE8; } // 8018EC68
  cmps(c,0,(int32_t)c->r[5],116); // 8018EC6C
  if (crb(c,2)) { goto L_8018ECF4; } // 8018EC70
  goto L_8018ED00; // 8018EC74
L_8018EC78:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 8018EC78
  c->r[6]=0u+0x00000002u; // 8018EC7C
  W8(c->r[1]+0x0000000Au,c->r[6]); // 8018EC80
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018EC84
  cmps(c,0,(int32_t)c->r[6],104); // 8018EC88
  if (!crb(c,2)) { goto L_8018ED04; } // 8018EC8C
  c->r[0]=0u+0x00000001u; // 8018EC90
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018EC94
  c->r[5]=c->r[6]|c->r[6]; // 8018EC98
  c->r[3]=c->r[3]+0x00000001u; // 8018EC9C
  goto L_8018ED04; // 8018ECA0
L_8018ECA4:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 8018ECA4
  c->r[6]=0u+0x00000003u; // 8018ECA8
  W8(c->r[1]+0x0000000Au,c->r[6]); // 8018ECAC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018ECB0
  cmps(c,0,(int32_t)c->r[6],108); // 8018ECB4
  if (!crb(c,2)) { goto L_8018ED04; } // 8018ECB8
  c->r[0]=0u+0x00000007u; // 8018ECBC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018ECC0
  c->r[5]=c->r[6]|c->r[6]; // 8018ECC4
  c->r[3]=c->r[3]+0x00000001u; // 8018ECC8
  goto L_8018ED04; // 8018ECCC
L_8018ECD0:;
  c->r[0]=0u+0x00000009u; // 8018ECD0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018ECD4
  goto L_8018ED04; // 8018ECD8
L_8018ECDC:;
  c->r[0]=0u+0x00000004u; // 8018ECDC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018ECE0
  goto L_8018ED04; // 8018ECE4
L_8018ECE8:;
  c->r[0]=0u+0x00000005u; // 8018ECE8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018ECEC
  goto L_8018ED04; // 8018ECF0
L_8018ECF4:;
  c->r[0]=0u+0x00000006u; // 8018ECF4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018ECF8
  goto L_8018ED04; // 8018ECFC
L_8018ED00:;
  c->r[7]=0u+0x00000000u; // 8018ED00
L_8018ED04:;
  cmps(c,0,(int32_t)c->r[7],0); // 8018ED04
  if (crb(c,2)) { goto L_8018ED14; } // 8018ED08
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 8018ED0C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8018ED10
L_8018ED14:;
  c->r[0]=c->r[5]+0xFFFFFFBFu; // 8018ED14
  W8(c->r[1]+0x0000000Bu,c->r[5]); // 8018ED18
  cmpu(c,0,c->r[0],0x00000037u); // 8018ED1C
  if (crb(c,1)) { goto L_8018F080; } // 8018ED20
  c->r[5]=0u+0x80330000u; // 8018ED24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018ED28
  c->r[5]=c->r[5]+0x00000928u; // 8018ED2C
  c->r[5]=R32(c->r[5]+c->r[0]); // 8018ED30
  c->ctr=c->r[5]; // 8018ED34
  if (true) { switch (c->ctr) { case 0x8018ED3Cu: goto L_8018ED3C; case 0x8018ED54u: goto L_8018ED54; case 0x8018ED9Cu: goto L_8018ED9C; case 0x8018EDB0u: goto L_8018EDB0; case 0x8018EDDCu: goto L_8018EDDC; case 0x8018EE94u: goto L_8018EE94; case 0x8018F080u: goto L_8018F080; case 0x8018F088u: goto L_8018F088; default: break; } dispatch(c,c->ctr); return; } // 8018ED38
L_8018ED3C:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018ED3C
  cmpu(c,0,c->r[0],0x00000009u); // 8018ED40
  if (!crb(c,2)) { goto L_8018F088; } // 8018ED44
  c->r[0]=0u+0x000000FFu; // 8018ED48
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018ED4C
  goto L_8018F088; // 8018ED50
L_8018ED54:;
  c->r[5]=R8(c->r[1]+0x0000000Au); // 8018ED54
  c->r[0]=c->r[5]+0x000000FCu; // 8018ED58
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018ED5C
  cmpu(c,0,c->r[0],0x00000003u); // 8018ED60
  if (!crb(c,1)) { goto L_8018ED84; } // 8018ED64
  c->r[0]=c->r[5]+0x000000FFu; // 8018ED68
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8018ED6C
  cmpu(c,0,c->r[0],0x00000001u); // 8018ED70
  if (!crb(c,1)) { goto L_8018ED84; } // 8018ED74
  cmpu(c,0,c->r[5],0x00000003u); // 8018ED78
  if (crb(c,2)) { goto L_8018ED90; } // 8018ED7C
  goto L_8018F088; // 8018ED80
L_8018ED84:;
  c->r[0]=0u+0x000000FFu; // 8018ED84
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018ED88
  goto L_8018F088; // 8018ED8C
L_8018ED90:;
  c->r[0]=0u+0x00000008u; // 8018ED90
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018ED94
  goto L_8018F088; // 8018ED98
L_8018ED9C:;
  c->r[5]=0u+0x00000003u; // 8018ED9C
  c->r[0]=0u+0x00000078u; // 8018EDA0
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8018EDA4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018EDA8
  goto L_8018F088; // 8018EDAC
L_8018EDB0:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018EDB0
  cmpu(c,0,c->r[0],0x00000003u); // 8018EDB4
  if (!crb(c,2)) { goto L_8018EDC8; } // 8018EDB8
  c->r[0]=0u+0x0000000Au; // 8018EDBC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018EDC0
  goto L_8018F088; // 8018EDC4
L_8018EDC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018EDC8
  if (crb(c,2)) { goto L_8018F088; } // 8018EDCC
  c->r[0]=0u+0x000000FFu; // 8018EDD0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018EDD4
  goto L_8018F088; // 8018EDD8
L_8018EDDC:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018EDDC
  cmpu(c,0,c->r[0],0x00000003u); // 8018EDE0
  if (!crb(c,2)) { goto L_8018EDF4; } // 8018EDE4
  c->r[0]=0u+0x0000000Au; // 8018EDE8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018EDEC
  goto L_8018EE04; // 8018EDF0
L_8018EDF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018EDF4
  if (crb(c,2)) { goto L_8018EE04; } // 8018EDF8
  c->r[0]=0u+0x000000FFu; // 8018EDFC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018EE00
L_8018EE04:;
  c->r[6]=0u+0x000000FFu; // 8018EE04
  c->r[5]=0u+0x000000C1u; // 8018EE08
  c->r[0]=0u+0x000000FEu; // 8018EE0C
  W8(c->r[1]+0x00000010u,c->r[6]); // 8018EE10
  W8(c->r[1]+0x00000012u,c->r[6]); // 8018EE14
  W8(c->r[1]+0x00000013u,c->r[6]); // 8018EE18
  W8(c->r[1]+0x00000015u,c->r[6]); // 8018EE1C
  W8(c->r[1]+0x00000016u,c->r[6]); // 8018EE20
  W8(c->r[1]+0x00000017u,c->r[6]); // 8018EE24
  W8(c->r[1]+0x00000018u,c->r[6]); // 8018EE28
  W8(c->r[1]+0x00000019u,c->r[6]); // 8018EE2C
  W8(c->r[1]+0x0000001Au,c->r[6]); // 8018EE30
  W8(c->r[1]+0x0000001Bu,c->r[6]); // 8018EE34
  W8(c->r[1]+0x0000001Cu,c->r[6]); // 8018EE38
  W8(c->r[1]+0x0000001Du,c->r[6]); // 8018EE3C
  W8(c->r[1]+0x0000001Eu,c->r[6]); // 8018EE40
  W8(c->r[1]+0x0000001Fu,c->r[6]); // 8018EE44
  W8(c->r[1]+0x00000020u,c->r[6]); // 8018EE48
  W8(c->r[1]+0x00000021u,c->r[6]); // 8018EE4C
  W8(c->r[1]+0x00000022u,c->r[6]); // 8018EE50
  W8(c->r[1]+0x00000023u,c->r[6]); // 8018EE54
  W8(c->r[1]+0x00000024u,c->r[6]); // 8018EE58
  W8(c->r[1]+0x00000025u,c->r[6]); // 8018EE5C
  W8(c->r[1]+0x00000026u,c->r[6]); // 8018EE60
  W8(c->r[1]+0x00000027u,c->r[6]); // 8018EE64
  W8(c->r[1]+0x00000028u,c->r[6]); // 8018EE68
  W8(c->r[1]+0x00000029u,c->r[6]); // 8018EE6C
  W8(c->r[1]+0x0000002Au,c->r[6]); // 8018EE70
  W8(c->r[1]+0x0000002Bu,c->r[6]); // 8018EE74
  W8(c->r[1]+0x0000002Cu,c->r[6]); // 8018EE78
  W8(c->r[1]+0x0000002Du,c->r[6]); // 8018EE7C
  W8(c->r[1]+0x0000002Eu,c->r[6]); // 8018EE80
  W8(c->r[1]+0x0000002Fu,c->r[6]); // 8018EE84
  W8(c->r[1]+0x00000011u,c->r[5]); // 8018EE88
  W8(c->r[1]+0x00000014u,c->r[0]); // 8018EE8C
  goto L_8018F088; // 8018EE90
L_8018EE94:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8018EE94
  cmpu(c,0,c->r[0],0x00000003u); // 8018EE98
  if (!crb(c,2)) { goto L_8018EEAC; } // 8018EE9C
  c->r[0]=0u+0x0000000Au; // 8018EEA0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8018EEA4
  goto L_8018EEBC; // 8018EEA8
L_8018EEAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018EEAC
  if (crb(c,2)) { goto L_8018EEBC; } // 8018EEB0
  c->r[0]=0u+0x000000FFu; // 8018EEB4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018EEB8
L_8018EEBC:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 8018EEBC
  c->r[11]=0u+0x00000000u; // 8018EEC0
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 8018EEC4
  cmps(c,0,(int32_t)c->r[10],94); // 8018EEC8
  if (!crb(c,2)) { goto L_8018EEDC; } // 8018EECC
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 8018EED0
  c->r[11]=0u+0x00000001u; // 8018EED4
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 8018EED8
L_8018EEDC:;
  cmps(c,0,(int32_t)c->r[10],93); // 8018EEDC
  if (!crb(c,2)) { goto L_8018EEF8; } // 8018EEE0
  c->r[0]=R8(c->r[1]+0x0000001Bu); // 8018EEE4
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 8018EEE8
  c->r[0]=c->r[0]|0x00000020u; // 8018EEEC
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8018EEF0
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 8018EEF4
L_8018EEF8:;
  c->r[8]=c->r[1]+0x00000008u; // 8018EEF8
  c->r[5]=0u+0x00000001u; // 8018EEFC
  goto L_8018EF80; // 8018EF00
L_8018EF04:;
  c->r[6]=rotl(c->r[10],29)&0x0000001Fu; // 8018EF04
  c->r[0]=R8(c->r[3]+0x00000001u); // 8018EF08
  c->r[9]=c->r[8]+c->r[6]; // 8018EF0C
  c->r[6]=rotl(c->r[10],0)&0x00000007u; // 8018EF10
  c->r[7]=R8(c->r[9]+0x00000008u); // 8018EF14
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 8018EF18
  cmps(c,0,(int32_t)c->r[0],45); // 8018EF1C
  c->r[6]=c->r[7]|c->r[6]; // 8018EF20
  W8(c->r[9]+0x00000008u,c->r[6]); // 8018EF24
  if (!crb(c,2)) { goto L_8018EF78; } // 8018EF28
  c->r[9]=R8(c->r[3]+0x00000002u); // 8018EF2C
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[9]); // 8018EF30
  if (crb(c,2)) { goto L_8018EF78; } // 8018EF34
  cmps(c,0,(int32_t)c->r[9],93); // 8018EF38
  if (crb(c,2)) { goto L_8018EF78; } // 8018EF3C
  goto L_8018EF60; // 8018EF40
L_8018EF44:;
  c->r[6]=rotl(c->r[10],29)&0x0000001Fu; // 8018EF44
  c->r[0]=rotl(c->r[10],0)&0x00000007u; // 8018EF48
  c->r[7]=c->r[8]+c->r[6]; // 8018EF4C
  c->r[6]=R8(c->r[7]+0x00000008u); // 8018EF50
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 8018EF54
  c->r[0]=c->r[6]|c->r[0]; // 8018EF58
  W8(c->r[7]+0x00000008u,c->r[0]); // 8018EF5C
L_8018EF60:;
  c->r[10]=c->r[10]+0x00000001u; // 8018EF60
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[9]); // 8018EF64
  if (!crb(c,1)) { IRQCHK(c); goto L_8018EF44; } // 8018EF68
  {uint32_t ea=c->r[3]+0x00000003u; c->r[10]=R8(ea); c->r[3]=ea;} // 8018EF6C
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 8018EF70
  goto L_8018EF80; // 8018EF74
L_8018EF78:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 8018EF78
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 8018EF7C
L_8018EF80:;
  cmps(c,0,(int32_t)c->r[10],0); // 8018EF80
  if (crb(c,2)) { goto L_8018EF94; } // 8018EF84
  cmps(c,0,(int32_t)c->r[10],93); // 8018EF88
  if (crb(c,2)) { goto L_8018EFA0; } // 8018EF8C
  IRQCHK(c); goto L_8018EF04; // 8018EF90
L_8018EF94:;
  c->r[0]=0u+0x000000FFu; // 8018EF94
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018EF98
  goto L_8018F088; // 8018EF9C
L_8018EFA0:;
  cmps(c,0,(int32_t)c->r[11],0); // 8018EFA0
  if (crb(c,2)) { goto L_8018F088; } // 8018EFA4
  c->r[0]=0u+0x00000002u; // 8018EFA8
  c->r[5]=c->r[1]+0x00000010u; // 8018EFAC
  c->ctr=c->r[0]; // 8018EFB0
L_8018EFB4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8018EFB4
  c->r[0]=~(c->r[0]|c->r[0]); // 8018EFB8
  W8(c->r[5]+0x00000000u,c->r[0]); // 8018EFBC
  c->r[0]=R8(c->r[5]+0x00000001u); // 8018EFC0
  c->r[0]=~(c->r[0]|c->r[0]); // 8018EFC4
  W8(c->r[5]+0x00000001u,c->r[0]); // 8018EFC8
  c->r[0]=R8(c->r[5]+0x00000002u); // 8018EFCC
  c->r[0]=~(c->r[0]|c->r[0]); // 8018EFD0
  W8(c->r[5]+0x00000002u,c->r[0]); // 8018EFD4
  c->r[0]=R8(c->r[5]+0x00000003u); // 8018EFD8
  c->r[0]=~(c->r[0]|c->r[0]); // 8018EFDC
  W8(c->r[5]+0x00000003u,c->r[0]); // 8018EFE0
  c->r[0]=R8(c->r[5]+0x00000004u); // 8018EFE4
  c->r[0]=~(c->r[0]|c->r[0]); // 8018EFE8
  W8(c->r[5]+0x00000004u,c->r[0]); // 8018EFEC
  c->r[0]=R8(c->r[5]+0x00000005u); // 8018EFF0
  c->r[0]=~(c->r[0]|c->r[0]); // 8018EFF4
  W8(c->r[5]+0x00000005u,c->r[0]); // 8018EFF8
  c->r[0]=R8(c->r[5]+0x00000006u); // 8018EFFC
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F000
  W8(c->r[5]+0x00000006u,c->r[0]); // 8018F004
  c->r[0]=R8(c->r[5]+0x00000007u); // 8018F008
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F00C
  W8(c->r[5]+0x00000007u,c->r[0]); // 8018F010
  c->r[0]=R8(c->r[5]+0x00000008u); // 8018F014
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F018
  W8(c->r[5]+0x00000008u,c->r[0]); // 8018F01C
  c->r[0]=R8(c->r[5]+0x00000009u); // 8018F020
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F024
  W8(c->r[5]+0x00000009u,c->r[0]); // 8018F028
  c->r[0]=R8(c->r[5]+0x0000000Au); // 8018F02C
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F030
  W8(c->r[5]+0x0000000Au,c->r[0]); // 8018F034
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 8018F038
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F03C
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 8018F040
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 8018F044
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F048
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 8018F04C
  c->r[0]=R8(c->r[5]+0x0000000Du); // 8018F050
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F054
  W8(c->r[5]+0x0000000Du,c->r[0]); // 8018F058
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 8018F05C
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F060
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 8018F064
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 8018F068
  c->r[0]=~(c->r[0]|c->r[0]); // 8018F06C
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 8018F070
  c->r[5]=c->r[5]+0x00000010u; // 8018F074
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8018EFB4; } // 8018F078
  goto L_8018F088; // 8018F07C
L_8018F080:;
  c->r[0]=0u+0x000000FFu; // 8018F080
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8018F084
L_8018F088:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 8018F088
  c->r[3]=c->r[3]+0x00000001u; // 8018F08C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8018F090
  W32(c->r[4]+0x00000004u,c->r[0]); // 8018F094
  W32(c->r[4]+0x00000000u,c->r[5]); // 8018F098
  c->r[5]=R32(c->r[1]+0x00000010u); // 8018F09C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018F0A0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8018F0A4
  W32(c->r[4]+0x00000008u,c->r[5]); // 8018F0A8
  c->r[5]=R32(c->r[1]+0x00000018u); // 8018F0AC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8018F0B0
  W32(c->r[4]+0x00000014u,c->r[0]); // 8018F0B4
  W32(c->r[4]+0x00000010u,c->r[5]); // 8018F0B8
  c->r[5]=R32(c->r[1]+0x00000020u); // 8018F0BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018F0C0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8018F0C4
  W32(c->r[4]+0x00000018u,c->r[5]); // 8018F0C8
  c->r[5]=R32(c->r[1]+0x00000028u); // 8018F0CC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8018F0D0
  W32(c->r[4]+0x00000024u,c->r[0]); // 8018F0D4
  W32(c->r[4]+0x00000020u,c->r[5]); // 8018F0D8
L_8018F0DC:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8018F0DC
  c->r[30]=R32(c->r[1]+0x00000038u); // 8018F0E0
  c->r[1]=c->r[1]+0x00000040u; // 8018F0E4
  return; // 8018F0E8
}

// fn_8018F0EC
void f_8018F0EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018F0EC
  c->r[0]=c->lr; // 8018F0F0
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8018F0F4
  c->r[11]=c->r[1]+0x000000B0u; // 8018F0F8
  c->lr=0x8018F100u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8018F0FC
  c->r[8]=0u+0x80330000u; // 8018F100
  c->r[0]=0u+0x00000000u; // 8018F104
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8018F108
  c->r[0]=0u+0x00000000u; // 8018F10C
  c->r[26]=c->r[3]|c->r[3]; // 8018F110
  c->r[27]=c->r[4]|c->r[4]; // 8018F114
  W32(c->r[1]+0x00000008u,c->r[6]); // 8018F118
  c->r[17]=c->r[5]|c->r[5]; // 8018F11C
  c->r[28]=c->r[7]|c->r[7]; // 8018F120
  c->r[25]=c->r[1]+0x00000020u; // 8018F124
  W32(c->r[1]+0x00000058u,c->r[0]); // 8018F128
  c->r[23]=c->r[8]+0x000006B0u; // 8018F12C
  c->r[29]=0u+0x00000000u; // 8018F130
  c->r[21]=0u+0x00000000u; // 8018F134
  c->r[20]=0u+0x00000000u; // 8018F138
  c->r[19]=0u+0x00000000u; // 8018F13C
  c->r[24]=0u+0x00000001u; // 8018F140
  goto L_8018FD2C; // 8018F144
L_8018F148:;
  cmpu(c,0,c->r[22],0x000000FFu); // 8018F148
  c->r[0]=0u+0x00000001u; // 8018F14C
  if (crb(c,1)) { goto L_8018F158; } // 8018F150
  c->r[0]=0u+0x00000000u; // 8018F154
L_8018F158:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018F158
  if (crb(c,2)) { goto L_8018F168; } // 8018F15C
  c->r[0]=0u+0x00000000u; // 8018F160
  goto L_8018F17C; // 8018F164
L_8018F168:;
  c->r[3]=R32(c->r[23]+0x00000038u); // 8018F168
  c->r[0]=rotl(c->r[22],1)&0xFFFFFFFEu; // 8018F16C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8018F170
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018F174
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8018F178
L_8018F17C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018F17C
  if (crb(c,2)) { goto L_8018F254; } // 8018F180
  c->r[4]=R32(c->r[23]+0x00000038u); // 8018F184
L_8018F188:;
  {uint32_t ea=c->r[17]+0x00000001u; c->r[0]=R8(ea); c->r[17]=ea;} // 8018F188
  c->r[3]=0u+0x00000001u; // 8018F18C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018F190
  cmpu(c,0,c->r[0],0x000000FFu); // 8018F194
  if (crb(c,1)) { goto L_8018F1A0; } // 8018F198
  c->r[3]=0u+0x00000000u; // 8018F19C
L_8018F1A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018F1A0
  if (crb(c,2)) { goto L_8018F1B0; } // 8018F1A4
  c->r[0]=0u+0x00000000u; // 8018F1A8
  goto L_8018F1C0; // 8018F1AC
L_8018F1B0:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 8018F1B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018F1B4
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018F1B8
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8018F1BC
L_8018F1C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018F1C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8018F188; } // 8018F1C4
  cmps(c,0,(int32_t)c->r[29],0); // 8018F1C8
  if (!crb(c,2)) { goto L_8018FD2C; } // 8018F1CC
  goto L_8018F1D8; // 8018F1D0
L_8018F1D4:;
  c->r[21]=c->r[21]+0x00000001u; // 8018F1D4
L_8018F1D8:;
  c->r[12]=c->r[26]|c->r[26]; // 8018F1D8
  c->r[3]=c->r[27]|c->r[27]; // 8018F1DC
  c->r[4]=0u+0x00000000u; // 8018F1E0
  c->r[5]=0u+0x00000000u; // 8018F1E4
  c->ctr=c->r[12]; // 8018F1E8
  if (true) { c->lr=0x8018F1F0u; dispatch(c,c->ctr); } // 8018F1EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018F1F0
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018F1F4
  cmpu(c,0,c->r[0],0x000000FFu); // 8018F1F8
  c->r[4]=0u+0x00000001u; // 8018F1FC
  if (crb(c,1)) { goto L_8018F208; } // 8018F200
  c->r[4]=0u+0x00000000u; // 8018F204
L_8018F208:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018F208
  if (crb(c,2)) { goto L_8018F218; } // 8018F20C
  c->r[0]=0u+0x00000000u; // 8018F210
  goto L_8018F22C; // 8018F214
L_8018F218:;
  c->r[4]=R32(c->r[23]+0x00000038u); // 8018F218
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018F21C
  c->r[4]=R32(c->r[4]+0x00000008u); // 8018F220
  c->r[0]=R16(c->r[4]+c->r[0]); // 8018F224
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8018F228
L_8018F22C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018F22C
  if (!crb(c,2)) { IRQCHK(c); goto L_8018F1D4; } // 8018F230
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8018F234
  c->r[12]=c->r[26]|c->r[26]; // 8018F238
  c->r[3]=c->r[27]|c->r[27]; // 8018F23C
  c->r[5]=0u+0x00000001u; // 8018F240
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018F244
  c->ctr=c->r[12]; // 8018F248
  if (true) { c->lr=0x8018F250u; dispatch(c,c->ctr); } // 8018F24C
  goto L_8018FD2C; // 8018F250
L_8018F254:;
  cmps(c,0,(int32_t)c->r[22],37); // 8018F254
  if (crb(c,2)) { goto L_8018F2CC; } // 8018F258
  cmps(c,0,(int32_t)c->r[29],0); // 8018F25C
  if (!crb(c,2)) { goto L_8018F2CC; } // 8018F260
  c->r[12]=c->r[26]|c->r[26]; // 8018F264
  c->r[3]=c->r[27]|c->r[27]; // 8018F268
  c->r[4]=0u+0x00000000u; // 8018F26C
  c->r[5]=0u+0x00000000u; // 8018F270
  c->ctr=c->r[12]; // 8018F274
  if (true) { c->lr=0x8018F27Cu; dispatch(c,c->ctr); } // 8018F278
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018F27C
  c->r[0]=rotl(c->r[22],0)&0x000000FFu; // 8018F280
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8018F284
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018F288
  if (crb(c,2)) { goto L_8018F2C0; } // 8018F28C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8018F290
  c->r[12]=c->r[26]|c->r[26]; // 8018F294
  c->r[3]=c->r[27]|c->r[27]; // 8018F298
  c->r[5]=0u+0x00000001u; // 8018F29C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018F2A0
  c->ctr=c->r[12]; // 8018F2A4
  if (true) { c->lr=0x8018F2ACu; dispatch(c,c->ctr); } // 8018F2A8
  cmps(c,0,(int32_t)c->r[28],0); // 8018F2AC
  if (crb(c,2)) { goto L_8018FD38; } // 8018F2B0
  c->r[29]=0u+0x00000001u; // 8018F2B4
  c->r[17]=c->r[17]+0x00000001u; // 8018F2B8
  goto L_8018FD2C; // 8018F2BC
L_8018F2C0:;
  c->r[21]=c->r[21]+0x00000001u; // 8018F2C0
  c->r[17]=c->r[17]+0x00000001u; // 8018F2C4
  goto L_8018FD2C; // 8018F2C8
L_8018F2CC:;
  c->r[3]=c->r[17]|c->r[17]; // 8018F2CC
  c->r[4]=c->r[1]+0x00000020u; // 8018F2D0
  c->lr=0x8018F2D8u; f_8018EA64(c); // 8018F2D4
  c->r[0]=R8(c->r[1]+0x00000020u); // 8018F2D8
  c->r[17]=c->r[3]|c->r[3]; // 8018F2DC
  cmps(c,0,(int32_t)c->r[0],0); // 8018F2E0
  if (!crb(c,2)) { goto L_8018F308; } // 8018F2E4
  c->r[0]=R8(c->r[1]+0x00000023u); // 8018F2E8
  cmpu(c,0,c->r[0],0x00000025u); // 8018F2EC
  if (crb(c,2)) { goto L_8018F308; } // 8018F2F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018F2F4
  c->r[4]=0u+0x00000001u; // 8018F2F8
  c->lr=0x8018F300u; f_801855A4(c); // 8018F2FC
  c->r[22]=R32(c->r[3]+0x00000000u); // 8018F300
  goto L_8018F30C; // 8018F304
L_8018F308:;
  c->r[22]=0u+0x00000000u; // 8018F308
L_8018F30C:;
  c->r[0]=R8(c->r[1]+0x00000023u); // 8018F30C
  cmpu(c,0,c->r[0],0x0000006Eu); // 8018F310
  if (crb(c,2)) { goto L_8018F34C; } // 8018F314
  cmps(c,0,(int32_t)c->r[29],0); // 8018F318
  if (!crb(c,2)) { goto L_8018F34C; } // 8018F31C
  c->r[12]=c->r[26]|c->r[26]; // 8018F320
  c->r[3]=c->r[27]|c->r[27]; // 8018F324
  c->r[4]=0u+0x00000000u; // 8018F328
  c->r[5]=0u+0x00000002u; // 8018F32C
  c->ctr=c->r[12]; // 8018F330
  if (true) { c->lr=0x8018F338u; dispatch(c,c->ctr); } // 8018F334
  cmps(c,0,(int32_t)c->r[3],0); // 8018F338
  if (crb(c,2)) { goto L_8018F34C; } // 8018F33C
  cmps(c,0,(int32_t)c->r[28],0); // 8018F340
  if (crb(c,2)) { goto L_8018FD38; } // 8018F344
  c->r[29]=0u+0x00000001u; // 8018F348
L_8018F34C:;
  c->r[3]=R8(c->r[1]+0x00000023u); // 8018F34C
  c->r[0]=c->r[3]+0xFFFFFFDBu; // 8018F350
  cmpu(c,0,c->r[0],0x00000053u); // 8018F354
  if (crb(c,1)) { goto L_8018FD38; } // 8018F358
  c->r[3]=0u+0x80330000u; // 8018F35C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018F360
  c->r[3]=c->r[3]+0x00000A48u; // 8018F364
  c->r[3]=R32(c->r[3]+c->r[0]); // 8018F368
  c->ctr=c->r[3]; // 8018F36C
  if (true) { switch (c->ctr) { case 0x8018F374u: goto L_8018F374; case 0x8018F37Cu: goto L_8018F37C; case 0x8018F4C0u: goto L_8018F4C0; case 0x8018F4C8u: goto L_8018F4C8; case 0x8018F4D0u: goto L_8018F4D0; case 0x8018F4D8u: goto L_8018F4D8; case 0x8018F4E0u: goto L_8018F4E0; case 0x8018F4F4u: goto L_8018F4F4; case 0x8018F4FCu: goto L_8018F4FC; case 0x8018F504u: goto L_8018F504; case 0x8018F528u: goto L_8018F528; case 0x8018F530u: goto L_8018F530; case 0x8018F538u: goto L_8018F538; case 0x8018F658u: goto L_8018F658; case 0x8018F660u: goto L_8018F660; case 0x8018F668u: goto L_8018F668; case 0x8018F670u: goto L_8018F670; case 0x8018F678u: goto L_8018F678; case 0x8018F68Cu: goto L_8018F68C; case 0x8018F694u: goto L_8018F694; case 0x8018F69Cu: goto L_8018F69C; case 0x8018F6C0u: goto L_8018F6C0; case 0x8018F768u: goto L_8018F768; case 0x8018F914u: goto L_8018F914; case 0x8018F9BCu: goto L_8018F9BC; case 0x8018FA60u: goto L_8018FA60; case 0x8018FCC8u: goto L_8018FCC8; case 0x8018FD38u: goto L_8018FD38; default: break; } dispatch(c,c->ctr); return; } // 8018F370
L_8018F374:;
  c->r[3]=0u+0x0000000Au; // 8018F374
  goto L_8018F380; // 8018F378
L_8018F37C:;
  c->r[3]=0u+0x00000000u; // 8018F37C
L_8018F380:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F380
  if (crb(c,2)) { goto L_8018F3A0; } // 8018F384
  c->r[0]=0u+0x00000000u; // 8018F388
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8018F38C
  c->r[0]=0u+0x00000000u; // 8018F390
  c->r[16]=0u+0x00000000u; // 8018F394
  W32(c->r[1]+0x00000058u,c->r[0]); // 8018F398
  goto L_8018F494; // 8018F39C
L_8018F3A0:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F3A0
  cmpu(c,0,c->r[0],0x00000007u); // 8018F3A4
  if (crb(c,2)) { goto L_8018F3B4; } // 8018F3A8
  cmpu(c,0,c->r[0],0x00000004u); // 8018F3AC
  if (!crb(c,2)) { goto L_8018F3DC; } // 8018F3B0
L_8018F3B4:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 8018F3B4
  c->r[5]=c->r[26]|c->r[26]; // 8018F3B8
  c->r[6]=c->r[27]|c->r[27]; // 8018F3BC
  c->r[7]=c->r[1]+0x00000018u; // 8018F3C0
  c->r[8]=c->r[1]+0x00000014u; // 8018F3C4
  c->r[9]=c->r[1]+0x00000010u; // 8018F3C8
  c->lr=0x8018F3D0u; f_80191C80(c); // 8018F3CC
  W32(c->r[1]+0x00000054u,c->r[4]); // 8018F3D0
  W32(c->r[1]+0x00000050u,c->r[3]); // 8018F3D4
  goto L_8018F3FC; // 8018F3D8
L_8018F3DC:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 8018F3DC
  c->r[5]=c->r[26]|c->r[26]; // 8018F3E0
  c->r[6]=c->r[27]|c->r[27]; // 8018F3E4
  c->r[7]=c->r[1]+0x00000018u; // 8018F3E8
  c->r[8]=c->r[1]+0x00000014u; // 8018F3EC
  c->r[9]=c->r[1]+0x00000010u; // 8018F3F0
  c->lr=0x8018F3F8u; f_8019186C(c); // 8018F3F4
  c->r[15]=c->r[3]|c->r[3]; // 8018F3F8
L_8018F3FC:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8018F3FC
  cmps(c,0,(int32_t)c->r[3],0); // 8018F400
  if (!crb(c,2)) { goto L_8018F42C; } // 8018F404
  cmps(c,0,(int32_t)c->r[28],0); // 8018F408
  if (crb(c,2)) { goto L_8018FD38; } // 8018F40C
  c->r[0]=0u+0x00000000u; // 8018F410
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8018F414
  c->r[0]=0u+0x00000000u; // 8018F418
  c->r[29]=0u+0x00000001u; // 8018F41C
  W32(c->r[1]+0x00000058u,c->r[0]); // 8018F420
  c->r[16]=0u+0x00000000u; // 8018F424
  goto L_8018F494; // 8018F428
L_8018F42C:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F42C
  c->r[21]=c->r[21]+c->r[3]; // 8018F430
  cmpu(c,0,c->r[0],0x00000007u); // 8018F434
  if (crb(c,2)) { goto L_8018F444; } // 8018F438
  cmpu(c,0,c->r[0],0x00000004u); // 8018F43C
  if (!crb(c,2)) { goto L_8018F480; } // 8018F440
L_8018F444:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018F444
  cmps(c,0,(int32_t)c->r[0],0); // 8018F448
  if (crb(c,2)) { goto L_8018F46C; } // 8018F44C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018F450
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 8018F454
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8018F458
  c->r[0]=R32(c->r[1]+0x00000050u); // 8018F45C
  c->r[0]=addc(c,~c->r[0],0,c->xer_ca); // 8018F460
  W32(c->r[1]+0x00000058u,c->r[0]); // 8018F464
  goto L_8018F494; // 8018F468
L_8018F46C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018F46C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8018F470
  c->r[0]=R32(c->r[1]+0x00000050u); // 8018F474
  W32(c->r[1]+0x00000058u,c->r[0]); // 8018F478
  goto L_8018F494; // 8018F47C
L_8018F480:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018F480
  c->r[16]=c->r[15]|c->r[15]; // 8018F484
  cmps(c,0,(int32_t)c->r[0],0); // 8018F488
  if (crb(c,2)) { goto L_8018F494; } // 8018F48C
  c->r[16]=0u-c->r[15]; // 8018F490
L_8018F494:;
  cmps(c,0,(int32_t)c->r[22],0); // 8018F494
  if (crb(c,2)) { goto L_8018F520; } // 8018F498
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F49C
  cmpu(c,0,c->r[0],0x00000007u); // 8018F4A0
  if (crb(c,1)) { goto L_8018F514; } // 8018F4A4
  c->r[3]=0u+0x80330000u; // 8018F4A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018F4AC
  c->r[3]=c->r[3]+0x00000A28u; // 8018F4B0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8018F4B4
  c->ctr=c->r[3]; // 8018F4B8
  if (true) { switch (c->ctr) { case 0x8018F374u: goto L_8018F374; case 0x8018F37Cu: goto L_8018F37C; case 0x8018F4C0u: goto L_8018F4C0; case 0x8018F4C8u: goto L_8018F4C8; case 0x8018F4D0u: goto L_8018F4D0; case 0x8018F4D8u: goto L_8018F4D8; case 0x8018F4E0u: goto L_8018F4E0; case 0x8018F4F4u: goto L_8018F4F4; case 0x8018F4FCu: goto L_8018F4FC; case 0x8018F504u: goto L_8018F504; case 0x8018F528u: goto L_8018F528; case 0x8018F530u: goto L_8018F530; case 0x8018F538u: goto L_8018F538; case 0x8018F658u: goto L_8018F658; case 0x8018F660u: goto L_8018F660; case 0x8018F668u: goto L_8018F668; case 0x8018F670u: goto L_8018F670; case 0x8018F678u: goto L_8018F678; case 0x8018F68Cu: goto L_8018F68C; case 0x8018F694u: goto L_8018F694; case 0x8018F69Cu: goto L_8018F69C; case 0x8018F6C0u: goto L_8018F6C0; case 0x8018F768u: goto L_8018F768; case 0x8018F914u: goto L_8018F914; case 0x8018F9BCu: goto L_8018F9BC; case 0x8018FA60u: goto L_8018FA60; case 0x8018FCC8u: goto L_8018FCC8; case 0x8018FD38u: goto L_8018FD38; default: break; } dispatch(c,c->ctr); return; } // 8018F4BC
L_8018F4C0:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 8018F4C0
  goto L_8018F514; // 8018F4C4
L_8018F4C8:;
  W8(c->r[22]+0x00000000u,c->r[16]); // 8018F4C8
  goto L_8018F514; // 8018F4CC
L_8018F4D0:;
  W16(c->r[22]+0x00000000u,c->r[16]); // 8018F4D0
  goto L_8018F514; // 8018F4D4
L_8018F4D8:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 8018F4D8
  goto L_8018F514; // 8018F4DC
L_8018F4E0:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8018F4E0
  W32(c->r[22]+0x00000004u,c->r[0]); // 8018F4E4
  c->r[0]=R32(c->r[1]+0x00000058u); // 8018F4E8
  W32(c->r[22]+0x00000000u,c->r[0]); // 8018F4EC
  goto L_8018F514; // 8018F4F0
L_8018F4F4:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 8018F4F4
  goto L_8018F514; // 8018F4F8
L_8018F4FC:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 8018F4FC
  goto L_8018F514; // 8018F500
L_8018F504:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8018F504
  W32(c->r[22]+0x00000004u,c->r[0]); // 8018F508
  c->r[0]=R32(c->r[1]+0x00000058u); // 8018F50C
  W32(c->r[22]+0x00000000u,c->r[0]); // 8018F510
L_8018F514:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F514
  if (!crb(c,2)) { goto L_8018F520; } // 8018F518
  c->r[20]=c->r[20]+0x00000001u; // 8018F51C
L_8018F520:;
  c->r[19]=c->r[19]+0x00000001u; // 8018F520
  goto L_8018FD2C; // 8018F524
L_8018F528:;
  c->r[3]=0u+0x00000008u; // 8018F528
  goto L_8018F53C; // 8018F52C
L_8018F530:;
  c->r[3]=0u+0x0000000Au; // 8018F530
  goto L_8018F53C; // 8018F534
L_8018F538:;
  c->r[3]=0u+0x00000010u; // 8018F538
L_8018F53C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F53C
  if (crb(c,2)) { goto L_8018F55C; } // 8018F540
  c->r[0]=0u+0x00000000u; // 8018F544
  W32(c->r[1]+0x00000054u,c->r[0]); // 8018F548
  c->r[0]=0u+0x00000000u; // 8018F54C
  c->r[15]=0u+0x00000000u; // 8018F550
  W32(c->r[1]+0x00000050u,c->r[0]); // 8018F554
  goto L_8018F62C; // 8018F558
L_8018F55C:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F55C
  cmpu(c,0,c->r[0],0x00000007u); // 8018F560
  if (crb(c,2)) { goto L_8018F570; } // 8018F564
  cmpu(c,0,c->r[0],0x00000004u); // 8018F568
  if (!crb(c,2)) { goto L_8018F598; } // 8018F56C
L_8018F570:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 8018F570
  c->r[5]=c->r[26]|c->r[26]; // 8018F574
  c->r[6]=c->r[27]|c->r[27]; // 8018F578
  c->r[7]=c->r[1]+0x00000018u; // 8018F57C
  c->r[8]=c->r[1]+0x00000014u; // 8018F580
  c->r[9]=c->r[1]+0x00000010u; // 8018F584
  c->lr=0x8018F58Cu; f_80191C80(c); // 8018F588
  W32(c->r[1]+0x00000054u,c->r[4]); // 8018F58C
  W32(c->r[1]+0x00000050u,c->r[3]); // 8018F590
  goto L_8018F5B8; // 8018F594
L_8018F598:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 8018F598
  c->r[5]=c->r[26]|c->r[26]; // 8018F59C
  c->r[6]=c->r[27]|c->r[27]; // 8018F5A0
  c->r[7]=c->r[1]+0x00000018u; // 8018F5A4
  c->r[8]=c->r[1]+0x00000014u; // 8018F5A8
  c->r[9]=c->r[1]+0x00000010u; // 8018F5AC
  c->lr=0x8018F5B4u; f_8019186C(c); // 8018F5B0
  c->r[15]=c->r[3]|c->r[3]; // 8018F5B4
L_8018F5B8:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8018F5B8
  cmps(c,0,(int32_t)c->r[3],0); // 8018F5BC
  if (!crb(c,2)) { goto L_8018F5E8; } // 8018F5C0
  cmps(c,0,(int32_t)c->r[28],0); // 8018F5C4
  if (crb(c,2)) { goto L_8018FD38; } // 8018F5C8
  c->r[0]=0u+0x00000000u; // 8018F5CC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8018F5D0
  c->r[0]=0u+0x00000000u; // 8018F5D4
  c->r[29]=0u+0x00000001u; // 8018F5D8
  W32(c->r[1]+0x00000050u,c->r[0]); // 8018F5DC
  c->r[15]=0u+0x00000000u; // 8018F5E0
  goto L_8018F62C; // 8018F5E4
L_8018F5E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018F5E8
  c->r[21]=c->r[21]+c->r[3]; // 8018F5EC
  cmps(c,0,(int32_t)c->r[0],0); // 8018F5F0
  if (crb(c,2)) { goto L_8018F62C; } // 8018F5F4
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F5F8
  cmpu(c,0,c->r[0],0x00000007u); // 8018F5FC
  if (!crb(c,2)) { goto L_8018F61C; } // 8018F600
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018F604
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 8018F608
  W32(c->r[1]+0x00000054u,c->r[0]); // 8018F60C
  c->r[0]=R32(c->r[1]+0x00000050u); // 8018F610
  c->r[0]=addc(c,~c->r[0],0,c->xer_ca); // 8018F614
  W32(c->r[1]+0x00000050u,c->r[0]); // 8018F618
L_8018F61C:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F61C
  cmpu(c,0,c->r[0],0x00000007u); // 8018F620
  if (crb(c,2)) { goto L_8018F62C; } // 8018F624
  c->r[15]=0u-c->r[15]; // 8018F628
L_8018F62C:;
  cmps(c,0,(int32_t)c->r[22],0); // 8018F62C
  if (crb(c,2)) { goto L_8018F6B8; } // 8018F630
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F634
  cmpu(c,0,c->r[0],0x00000007u); // 8018F638
  if (crb(c,1)) { goto L_8018F6AC; } // 8018F63C
  c->r[3]=0u+0x80330000u; // 8018F640
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018F644
  c->r[3]=c->r[3]+0x00000A08u; // 8018F648
  c->r[3]=R32(c->r[3]+c->r[0]); // 8018F64C
  c->ctr=c->r[3]; // 8018F650
  if (true) { switch (c->ctr) { case 0x8018F374u: goto L_8018F374; case 0x8018F37Cu: goto L_8018F37C; case 0x8018F4C0u: goto L_8018F4C0; case 0x8018F4C8u: goto L_8018F4C8; case 0x8018F4D0u: goto L_8018F4D0; case 0x8018F4D8u: goto L_8018F4D8; case 0x8018F4E0u: goto L_8018F4E0; case 0x8018F4F4u: goto L_8018F4F4; case 0x8018F4FCu: goto L_8018F4FC; case 0x8018F504u: goto L_8018F504; case 0x8018F528u: goto L_8018F528; case 0x8018F530u: goto L_8018F530; case 0x8018F538u: goto L_8018F538; case 0x8018F658u: goto L_8018F658; case 0x8018F660u: goto L_8018F660; case 0x8018F668u: goto L_8018F668; case 0x8018F670u: goto L_8018F670; case 0x8018F678u: goto L_8018F678; case 0x8018F68Cu: goto L_8018F68C; case 0x8018F694u: goto L_8018F694; case 0x8018F69Cu: goto L_8018F69C; case 0x8018F6C0u: goto L_8018F6C0; case 0x8018F768u: goto L_8018F768; case 0x8018F914u: goto L_8018F914; case 0x8018F9BCu: goto L_8018F9BC; case 0x8018FA60u: goto L_8018FA60; case 0x8018FCC8u: goto L_8018FCC8; case 0x8018FD38u: goto L_8018FD38; default: break; } dispatch(c,c->ctr); return; } // 8018F654
L_8018F658:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 8018F658
  goto L_8018F6AC; // 8018F65C
L_8018F660:;
  W8(c->r[22]+0x00000000u,c->r[15]); // 8018F660
  goto L_8018F6AC; // 8018F664
L_8018F668:;
  W16(c->r[22]+0x00000000u,c->r[15]); // 8018F668
  goto L_8018F6AC; // 8018F66C
L_8018F670:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 8018F670
  goto L_8018F6AC; // 8018F674
L_8018F678:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018F678
  W32(c->r[22]+0x00000004u,c->r[0]); // 8018F67C
  c->r[0]=R32(c->r[1]+0x00000050u); // 8018F680
  W32(c->r[22]+0x00000000u,c->r[0]); // 8018F684
  goto L_8018F6AC; // 8018F688
L_8018F68C:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 8018F68C
  goto L_8018F6AC; // 8018F690
L_8018F694:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 8018F694
  goto L_8018F6AC; // 8018F698
L_8018F69C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8018F69C
  W32(c->r[22]+0x00000004u,c->r[0]); // 8018F6A0
  c->r[0]=R32(c->r[1]+0x00000050u); // 8018F6A4
  W32(c->r[22]+0x00000000u,c->r[0]); // 8018F6A8
L_8018F6AC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F6AC
  if (!crb(c,2)) { goto L_8018F6B8; } // 8018F6B0
  c->r[20]=c->r[20]+0x00000001u; // 8018F6B4
L_8018F6B8:;
  c->r[19]=c->r[19]+0x00000001u; // 8018F6B8
  goto L_8018FD2C; // 8018F6BC
L_8018F6C0:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F6C0
  if (crb(c,2)) { goto L_8018F6D4; } // 8018F6C4
  c->r[3]=0u+0x80440000u; // 8018F6C8
  {uint32_t ea=c->r[3]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018F6CC
  goto L_8018F714; // 8018F6D0
L_8018F6D4:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8018F6D4
  c->r[4]=c->r[26]|c->r[26]; // 8018F6D8
  c->r[5]=c->r[27]|c->r[27]; // 8018F6DC
  c->r[6]=c->r[1]+0x00000018u; // 8018F6E0
  c->r[7]=c->r[1]+0x00000010u; // 8018F6E4
  c->lr=0x8018F6ECu; f_801904C4(c); // 8018F6E8
  c->r[0]=R32(c->r[1]+0x00000018u); // 8018F6EC
  cmps(c,0,(int32_t)c->r[0],0); // 8018F6F0
  if (!crb(c,2)) { goto L_8018F710; } // 8018F6F4
  cmps(c,0,(int32_t)c->r[28],0); // 8018F6F8
  if (crb(c,2)) { goto L_8018FD38; } // 8018F6FC
  c->r[3]=0u+0x80440000u; // 8018F700
  c->r[29]=0u+0x00000001u; // 8018F704
  {uint32_t ea=c->r[3]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8018F708
  goto L_8018F714; // 8018F70C
L_8018F710:;
  c->r[21]=c->r[21]+c->r[0]; // 8018F710
L_8018F714:;
  cmps(c,0,(int32_t)c->r[22],0); // 8018F714
  if (crb(c,2)) { goto L_8018F760; } // 8018F718
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F71C
  cmps(c,0,(int32_t)c->r[0],0); // 8018F720
  if (crb(c,2)) { goto L_8018F73C; } // 8018F724
  cmps(c,0,(int32_t)c->r[0],8); // 8018F728
  if (crb(c,2)) { goto L_8018F748; } // 8018F72C
  cmps(c,0,(int32_t)c->r[0],9); // 8018F730
  if (crb(c,2)) { goto L_8018F750; } // 8018F734
  goto L_8018F754; // 8018F738
L_8018F73C:;
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8018F73C
  {uint32_t ea=c->r[22]+0x00000000u; WF32(ea,c->f[0]);} // 8018F740
  goto L_8018F754; // 8018F744
L_8018F748:;
  {uint32_t ea=c->r[22]+0x00000000u; WF64(ea,c->f[1]);} // 8018F748
  goto L_8018F754; // 8018F74C
L_8018F750:;
  {uint32_t ea=c->r[22]+0x00000000u; WF64(ea,c->f[1]);} // 8018F750
L_8018F754:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F754
  if (!crb(c,2)) { goto L_8018F760; } // 8018F758
  c->r[20]=c->r[20]+0x00000001u; // 8018F75C
L_8018F760:;
  c->r[19]=c->r[19]+0x00000001u; // 8018F760
  goto L_8018FD2C; // 8018F764
L_8018F768:;
  c->r[0]=R8(c->r[1]+0x00000021u); // 8018F768
  cmps(c,0,(int32_t)c->r[0],0); // 8018F76C
  if (!crb(c,2)) { goto L_8018F778; } // 8018F770
  W32(c->r[1]+0x00000024u,c->r[24]); // 8018F774
L_8018F778:;
  cmps(c,0,(int32_t)c->r[22],0); // 8018F778
  if (crb(c,2)) { goto L_8018F8A8; } // 8018F77C
  cmps(c,0,(int32_t)c->r[28],0); // 8018F780
  if (crb(c,2)) { goto L_8018F79C; } // 8018F784
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018F788
  c->r[31]=0u+0x00000001u; // 8018F78C
  c->r[4]=0u+0x00000001u; // 8018F790
  c->lr=0x8018F798u; f_801855A4(c); // 8018F794
  c->r[30]=R32(c->r[3]+0x00000000u); // 8018F798
L_8018F79C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F79C
  c->r[0]=0u+0x00000000u; // 8018F7A0
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018F7A4
  if (crb(c,2)) { goto L_8018F7C0; } // 8018F7A8
  cmps(c,0,(int32_t)c->r[30],0); // 8018F7AC
  if (crb(c,2)) { goto L_8018FD2C; } // 8018F7B0
  c->r[0]=0u+0x00000000u; // 8018F7B4
  W8(c->r[22]+0x00000000u,c->r[0]); // 8018F7B8
  goto L_8018FD2C; // 8018F7BC
L_8018F7C0:;
  W32(c->r[1]+0x0000004Cu,c->r[22]); // 8018F7C0
  goto L_8018F804; // 8018F7C4
L_8018F7C8:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018F7C8
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018F7CC
  cmpu(c,0,c->r[0],0x0000000Au); // 8018F7D0
  if (!crb(c,2)) { goto L_8018F7F0; } // 8018F7D4
  c->r[3]=c->r[22]|c->r[22]; // 8018F7D8
  c->r[4]=c->r[1]+0x0000000Cu; // 8018F7DC
  c->r[5]=0u+0x00000001u; // 8018F7E0
  c->lr=0x8018F7E8u; f_8018BF14(c); // 8018F7E4
  c->r[22]=c->r[22]+0x00000002u; // 8018F7E8
  goto L_8018F7F8; // 8018F7EC
L_8018F7F0:;
  W8(c->r[22]+0x00000000u,c->r[3]); // 8018F7F0
  c->r[22]=c->r[22]+0x00000001u; // 8018F7F4
L_8018F7F8:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8018F7F8
  c->r[0]=c->r[3]+0x00000001u; // 8018F7FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018F800
L_8018F804:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8018F804
  cmps(c,0,(int32_t)c->r[3],0); // 8018F808
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018F80C
  W32(c->r[1]+0x00000024u,c->r[3]); // 8018F810
  if (crb(c,2)) { goto L_8018F858; } // 8018F814
  cmps(c,0,(int32_t)c->r[28],0); // 8018F818
  if (crb(c,2)) { goto L_8018F834; } // 8018F81C
  c->r[0]=c->r[30]^c->r[0]; // 8018F820
  c->r[0]=cntlz(c->r[0]); // 8018F824
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[30]<<((c->r[0])&31)); // 8018F828
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 8018F82C
  if (crb(c,2)) { goto L_8018F858; } // 8018F830
L_8018F834:;
  c->r[12]=c->r[26]|c->r[26]; // 8018F834
  c->r[3]=c->r[27]|c->r[27]; // 8018F838
  c->r[4]=0u+0x00000000u; // 8018F83C
  c->r[5]=0u+0x00000000u; // 8018F840
  c->ctr=c->r[12]; // 8018F844
  if (true) { c->lr=0x8018F84Cu; dispatch(c,c->ctr); } // 8018F848
  cmps(c,0,(int32_t)c->r[3],-1); // 8018F84C
  c->r[18]=c->r[3]|c->r[3]; // 8018F850
  if (!crb(c,2)) { IRQCHK(c); goto L_8018F7C8; } // 8018F854
L_8018F858:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 8018F858
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 8018F85C
  cmps(c,0,(int32_t)c->r[0],0); // 8018F860
  if (crb(c,2)) { goto L_8018F878; } // 8018F864
  cmps(c,0,(int32_t)c->r[28],0); // 8018F868
  if (crb(c,2)) { goto L_8018F89C; } // 8018F86C
  cmps(c,0,(int32_t)c->r[31],0); // 8018F870
  if (!crb(c,2)) { goto L_8018F89C; } // 8018F874
L_8018F878:;
  cmps(c,0,(int32_t)c->r[28],0); // 8018F878
  if (crb(c,2)) { goto L_8018FD38; } // 8018F87C
  cmps(c,0,(int32_t)c->r[30],0); // 8018F880
  c->r[29]=0u+0x00000001u; // 8018F884
  if (crb(c,2)) { goto L_8018FD2C; } // 8018F888
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 8018F88C
  c->r[0]=0u+0x00000000u; // 8018F890
  W8(c->r[3]+0x00000000u,c->r[0]); // 8018F894
  goto L_8018FD2C; // 8018F898
L_8018F89C:;
  c->r[21]=c->r[21]+c->r[0]; // 8018F89C
  c->r[20]=c->r[20]+0x00000001u; // 8018F8A0
  goto L_8018F90C; // 8018F8A4
L_8018F8A8:;
  c->r[0]=0u+0x00000000u; // 8018F8A8
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018F8AC
  goto L_8018F8C4; // 8018F8B0
L_8018F8B4:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 8018F8B4
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018F8B8
  c->r[0]=c->r[4]+0x00000001u; // 8018F8BC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018F8C0
L_8018F8C4:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8018F8C4
  cmps(c,0,(int32_t)c->r[3],0); // 8018F8C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018F8CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018F8D0
  if (crb(c,2)) { goto L_8018F8FC; } // 8018F8D4
  c->r[12]=c->r[26]|c->r[26]; // 8018F8D8
  c->r[3]=c->r[27]|c->r[27]; // 8018F8DC
  c->r[4]=0u+0x00000000u; // 8018F8E0
  c->r[5]=0u+0x00000000u; // 8018F8E4
  c->ctr=c->r[12]; // 8018F8E8
  if (true) { c->lr=0x8018F8F0u; dispatch(c,c->ctr); } // 8018F8EC
  cmps(c,0,(int32_t)c->r[3],-1); // 8018F8F0
  c->r[18]=c->r[3]|c->r[3]; // 8018F8F4
  if (!crb(c,2)) { IRQCHK(c); goto L_8018F8B4; } // 8018F8F8
L_8018F8FC:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 8018F8FC
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 8018F900
  cmps(c,0,(int32_t)c->r[0],0); // 8018F904
  if (crb(c,2)) { goto L_8018FD38; } // 8018F908
L_8018F90C:;
  c->r[19]=c->r[19]+0x00000001u; // 8018F90C
  goto L_8018FD2C; // 8018F910
L_8018F914:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F914
  if (!crb(c,2)) { goto L_8018FD2C; } // 8018F918
  goto L_8018F924; // 8018F91C
L_8018F920:;
  c->r[21]=c->r[21]+0x00000001u; // 8018F920
L_8018F924:;
  c->r[12]=c->r[26]|c->r[26]; // 8018F924
  c->r[3]=c->r[27]|c->r[27]; // 8018F928
  c->r[4]=0u+0x00000000u; // 8018F92C
  c->r[5]=0u+0x00000000u; // 8018F930
  c->ctr=c->r[12]; // 8018F934
  if (true) { c->lr=0x8018F93Cu; dispatch(c,c->ctr); } // 8018F938
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8018F93C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018F940
  cmpu(c,0,c->r[0],0x000000FFu); // 8018F944
  c->r[4]=0u+0x00000001u; // 8018F948
  if (crb(c,1)) { goto L_8018F954; } // 8018F94C
  c->r[4]=0u+0x00000000u; // 8018F950
L_8018F954:;
  cmps(c,0,(int32_t)c->r[4],0); // 8018F954
  if (crb(c,2)) { goto L_8018F964; } // 8018F958
  c->r[0]=0u+0x00000000u; // 8018F95C
  goto L_8018F978; // 8018F960
L_8018F964:;
  c->r[4]=R32(c->r[23]+0x00000038u); // 8018F964
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018F968
  c->r[4]=R32(c->r[4]+0x00000008u); // 8018F96C
  c->r[0]=R16(c->r[4]+c->r[0]); // 8018F970
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8018F974
L_8018F978:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018F978
  if (!crb(c,2)) { IRQCHK(c); goto L_8018F920; } // 8018F97C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8018F980
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018F984
  cmps(c,0,(int32_t)c->r[4],37); // 8018F988
  if (crb(c,2)) { goto L_8018F9B4; } // 8018F98C
  c->r[12]=c->r[26]|c->r[26]; // 8018F990
  c->r[3]=c->r[27]|c->r[27]; // 8018F994
  c->r[5]=0u+0x00000001u; // 8018F998
  c->ctr=c->r[12]; // 8018F99C
  if (true) { c->lr=0x8018F9A4u; dispatch(c,c->ctr); } // 8018F9A0
  cmps(c,0,(int32_t)c->r[28],0); // 8018F9A4
  if (crb(c,2)) { goto L_8018FD38; } // 8018F9A8
  c->r[29]=0u+0x00000001u; // 8018F9AC
  goto L_8018FD2C; // 8018F9B0
L_8018F9B4:;
  c->r[21]=c->r[21]+0x00000001u; // 8018F9B4
  goto L_8018FD2C; // 8018F9B8
L_8018F9BC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018F9BC
  if (!crb(c,2)) { goto L_8018FA60; } // 8018F9C0
  c->r[12]=c->r[26]|c->r[26]; // 8018F9C4
  c->r[3]=c->r[27]|c->r[27]; // 8018F9C8
  c->r[4]=0u+0x00000000u; // 8018F9CC
  c->r[5]=0u+0x00000000u; // 8018F9D0
  c->ctr=c->r[12]; // 8018F9D4
  if (true) { c->lr=0x8018F9DCu; dispatch(c,c->ctr); } // 8018F9D8
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018F9DC
  goto L_8018FA04; // 8018F9E0
L_8018F9E4:;
  c->r[12]=c->r[26]|c->r[26]; // 8018F9E4
  c->r[3]=c->r[27]|c->r[27]; // 8018F9E8
  c->r[4]=0u+0x00000000u; // 8018F9EC
  c->r[5]=0u+0x00000000u; // 8018F9F0
  c->ctr=c->r[12]; // 8018F9F4
  c->r[21]=c->r[21]+0x00000001u; // 8018F9F8
  if (true) { c->lr=0x8018FA00u; dispatch(c,c->ctr); } // 8018F9FC
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018FA00
L_8018FA04:;
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8018FA04
  c->r[3]=0u+0x00000001u; // 8018FA08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018FA0C
  cmpu(c,0,c->r[0],0x000000FFu); // 8018FA10
  if (crb(c,1)) { goto L_8018FA1C; } // 8018FA14
  c->r[3]=0u+0x00000000u; // 8018FA18
L_8018FA1C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018FA1C
  if (crb(c,2)) { goto L_8018FA2C; } // 8018FA20
  c->r[0]=0u+0x00000000u; // 8018FA24
  goto L_8018FA40; // 8018FA28
L_8018FA2C:;
  c->r[3]=R32(c->r[23]+0x00000038u); // 8018FA2C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018FA30
  c->r[3]=R32(c->r[3]+0x00000008u); // 8018FA34
  c->r[0]=R16(c->r[3]+c->r[0]); // 8018FA38
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8018FA3C
L_8018FA40:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018FA40
  if (!crb(c,2)) { IRQCHK(c); goto L_8018F9E4; } // 8018FA44
  c->r[12]=c->r[26]|c->r[26]; // 8018FA48
  c->r[3]=c->r[27]|c->r[27]; // 8018FA4C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018FA50
  c->r[5]=0u+0x00000001u; // 8018FA54
  c->ctr=c->r[12]; // 8018FA58
  if (true) { c->lr=0x8018FA60u; dispatch(c,c->ctr); } // 8018FA5C
L_8018FA60:;
  cmps(c,0,(int32_t)c->r[22],0); // 8018FA60
  if (crb(c,2)) { goto L_8018FBF4; } // 8018FA64
  cmps(c,0,(int32_t)c->r[28],0); // 8018FA68
  if (crb(c,2)) { goto L_8018FA88; } // 8018FA6C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8018FA70
  c->r[31]=0u+0x00000001u; // 8018FA74
  c->r[4]=0u+0x00000001u; // 8018FA78
  c->lr=0x8018FA80u; f_801855A4(c); // 8018FA7C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8018FA80
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 8018FA84
L_8018FA88:;
  cmps(c,0,(int32_t)c->r[29],0); // 8018FA88
  c->r[0]=0u+0x00000000u; // 8018FA8C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018FA90
  if (crb(c,2)) { goto L_8018FAAC; } // 8018FA94
  cmps(c,0,(int32_t)c->r[30],0); // 8018FA98
  if (crb(c,2)) { goto L_8018FD2C; } // 8018FA9C
  c->r[0]=0u+0x00000000u; // 8018FAA0
  W8(c->r[22]+0x00000000u,c->r[0]); // 8018FAA4
  goto L_8018FD2C; // 8018FAA8
L_8018FAAC:;
  W32(c->r[1]+0x00000048u,c->r[22]); // 8018FAAC
  goto L_8018FB10; // 8018FAB0
L_8018FAB4:;
  c->r[0]=rotl(c->r[3],29)&0x0000001Fu; // 8018FAB4
  c->r[5]=rotl(c->r[3],0)&0x00000007u; // 8018FAB8
  c->r[4]=c->r[25]+c->r[0]; // 8018FABC
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018FAC0
  c->r[0]=R8(c->r[4]+0x00000008u); // 8018FAC4
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[24]<<((c->r[5])&31)); // 8018FAC8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8018FACC
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 8018FAD0
  if (crb(c,2)) { goto L_8018FB68; } // 8018FAD4
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018FAD8
  cmpu(c,0,c->r[0],0x0000000Au); // 8018FADC
  if (!crb(c,2)) { goto L_8018FAFC; } // 8018FAE0
  c->r[3]=c->r[22]|c->r[22]; // 8018FAE4
  c->r[4]=c->r[1]+0x0000000Cu; // 8018FAE8
  c->r[5]=0u+0x00000001u; // 8018FAEC
  c->lr=0x8018FAF4u; f_8018BF14(c); // 8018FAF0
  c->r[22]=c->r[22]+0x00000002u; // 8018FAF4
  goto L_8018FB04; // 8018FAF8
L_8018FAFC:;
  W8(c->r[22]+0x00000000u,c->r[3]); // 8018FAFC
  c->r[22]=c->r[22]+0x00000001u; // 8018FB00
L_8018FB04:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8018FB04
  c->r[0]=c->r[3]+0x00000001u; // 8018FB08
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018FB0C
L_8018FB10:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8018FB10
  cmps(c,0,(int32_t)c->r[3],0); // 8018FB14
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8018FB18
  W32(c->r[1]+0x00000024u,c->r[3]); // 8018FB1C
  if (crb(c,2)) { goto L_8018FB68; } // 8018FB20
  cmps(c,0,(int32_t)c->r[28],0); // 8018FB24
  if (crb(c,2)) { goto L_8018FB44; } // 8018FB28
  c->r[4]=c->r[30]-c->r[0]; // 8018FB2C
  c->r[3]=c->r[30]|~c->r[0]; // 8018FB30
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 8018FB34
  c->r[0]=c->r[3]-c->r[0]; // 8018FB38
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 8018FB3C
  if (crb(c,2)) { goto L_8018FB68; } // 8018FB40
L_8018FB44:;
  c->r[12]=c->r[26]|c->r[26]; // 8018FB44
  c->r[3]=c->r[27]|c->r[27]; // 8018FB48
  c->r[4]=0u+0x00000000u; // 8018FB4C
  c->r[5]=0u+0x00000000u; // 8018FB50
  c->ctr=c->r[12]; // 8018FB54
  if (true) { c->lr=0x8018FB5Cu; dispatch(c,c->ctr); } // 8018FB58
  cmps(c,0,(int32_t)c->r[3],-1); // 8018FB5C
  c->r[18]=c->r[3]|c->r[3]; // 8018FB60
  if (!crb(c,2)) { IRQCHK(c); goto L_8018FAB4; } // 8018FB64
L_8018FB68:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8018FB68
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 8018FB6C
  cmps(c,0,(int32_t)c->r[3],0); // 8018FB70
  if (crb(c,2)) { goto L_8018FB88; } // 8018FB74
  cmps(c,0,(int32_t)c->r[28],0); // 8018FB78
  if (crb(c,2)) { goto L_8018FBC8; } // 8018FB7C
  cmps(c,0,(int32_t)c->r[31],0); // 8018FB80
  if (!crb(c,2)) { goto L_8018FBC8; } // 8018FB84
L_8018FB88:;
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 8018FB88
  c->r[12]=c->r[26]|c->r[26]; // 8018FB8C
  c->r[3]=c->r[27]|c->r[27]; // 8018FB90
  c->r[5]=0u+0x00000001u; // 8018FB94
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018FB98
  c->ctr=c->r[12]; // 8018FB9C
  if (true) { c->lr=0x8018FBA4u; dispatch(c,c->ctr); } // 8018FBA0
  cmps(c,0,(int32_t)c->r[28],0); // 8018FBA4
  if (crb(c,2)) { goto L_8018FD38; } // 8018FBA8
  cmps(c,0,(int32_t)c->r[30],0); // 8018FBAC
  c->r[29]=0u+0x00000001u; // 8018FBB0
  if (crb(c,2)) { goto L_8018FD2C; } // 8018FBB4
  c->r[3]=R32(c->r[1]+0x00000048u); // 8018FBB8
  c->r[0]=0u+0x00000000u; // 8018FBBC
  W8(c->r[3]+0x00000000u,c->r[0]); // 8018FBC0
  goto L_8018FD2C; // 8018FBC4
L_8018FBC8:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018FBC8
  c->r[21]=c->r[21]+c->r[3]; // 8018FBCC
  cmpu(c,0,c->r[0],0x0000000Au); // 8018FBD0
  if (!crb(c,2)) { goto L_8018FBE4; } // 8018FBD4
  c->r[0]=0u+0x00000000u; // 8018FBD8
  W16(c->r[22]+0x00000000u,c->r[0]); // 8018FBDC
  goto L_8018FBEC; // 8018FBE0
L_8018FBE4:;
  c->r[0]=0u+0x00000000u; // 8018FBE4
  W8(c->r[22]+0x00000000u,c->r[0]); // 8018FBE8
L_8018FBEC:;
  c->r[20]=c->r[20]+0x00000001u; // 8018FBEC
  goto L_8018FC98; // 8018FBF0
L_8018FBF4:;
  c->r[0]=0u+0x00000000u; // 8018FBF4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018FBF8
  goto L_8018FC2C; // 8018FBFC
L_8018FC00:;
  c->r[0]=rotl(c->r[3],29)&0x0000001Fu; // 8018FC00
  c->r[5]=rotl(c->r[3],0)&0x00000007u; // 8018FC04
  c->r[4]=c->r[25]+c->r[0]; // 8018FC08
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8018FC0C
  c->r[0]=R8(c->r[4]+0x00000008u); // 8018FC10
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[24]<<((c->r[5])&31)); // 8018FC14
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8018FC18
  if (crb(c,2)) { goto L_8018FC64; } // 8018FC1C
  c->r[3]=R32(c->r[1]+0x00000018u); // 8018FC20
  c->r[0]=c->r[3]+0x00000001u; // 8018FC24
  W32(c->r[1]+0x00000018u,c->r[0]); // 8018FC28
L_8018FC2C:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 8018FC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8018FC30
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018FC34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8018FC38
  if (crb(c,2)) { goto L_8018FC64; } // 8018FC3C
  c->r[12]=c->r[26]|c->r[26]; // 8018FC40
  c->r[3]=c->r[27]|c->r[27]; // 8018FC44
  c->r[4]=0u+0x00000000u; // 8018FC48
  c->r[5]=0u+0x00000000u; // 8018FC4C
  c->ctr=c->r[12]; // 8018FC50
  if (true) { c->lr=0x8018FC58u; dispatch(c,c->ctr); } // 8018FC54
  cmps(c,0,(int32_t)c->r[3],-1); // 8018FC58
  c->r[18]=c->r[3]|c->r[3]; // 8018FC5C
  if (!crb(c,2)) { IRQCHK(c); goto L_8018FC00; } // 8018FC60
L_8018FC64:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 8018FC64
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 8018FC68
  cmps(c,0,(int32_t)c->r[0],0); // 8018FC6C
  if (!crb(c,2)) { goto L_8018FC94; } // 8018FC70
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 8018FC74
  c->r[12]=c->r[26]|c->r[26]; // 8018FC78
  c->r[3]=c->r[27]|c->r[27]; // 8018FC7C
  c->r[5]=0u+0x00000001u; // 8018FC80
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018FC84
  c->ctr=c->r[12]; // 8018FC88
  if (true) { c->lr=0x8018FC90u; dispatch(c,c->ctr); } // 8018FC8C
  goto L_8018FD2C; // 8018FC90
L_8018FC94:;
  c->r[21]=c->r[21]+c->r[0]; // 8018FC94
L_8018FC98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8018FC98
  cmps(c,0,(int32_t)c->r[0],0); // 8018FC9C
  if (crb(c,0)) { goto L_8018FCC0; } // 8018FCA0
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 8018FCA4
  c->r[12]=c->r[26]|c->r[26]; // 8018FCA8
  c->r[3]=c->r[27]|c->r[27]; // 8018FCAC
  c->r[5]=0u+0x00000001u; // 8018FCB0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8018FCB4
  c->ctr=c->r[12]; // 8018FCB8
  if (true) { c->lr=0x8018FCC0u; dispatch(c,c->ctr); } // 8018FCBC
L_8018FCC0:;
  c->r[19]=c->r[19]+0x00000001u; // 8018FCC0
  goto L_8018FD2C; // 8018FCC4
L_8018FCC8:;
  cmps(c,0,(int32_t)c->r[22],0); // 8018FCC8
  if (crb(c,2)) { goto L_8018FD2C; } // 8018FCCC
  c->r[0]=R8(c->r[1]+0x00000022u); // 8018FCD0
  cmps(c,0,(int32_t)c->r[0],0); // 8018FCD4
  if (crb(c,2)) { goto L_8018FD00; } // 8018FCD8
  cmps(c,0,(int32_t)c->r[0],2); // 8018FCDC
  if (crb(c,2)) { goto L_8018FD08; } // 8018FCE0
  cmps(c,0,(int32_t)c->r[0],3); // 8018FCE4
  if (crb(c,2)) { goto L_8018FD10; } // 8018FCE8
  cmps(c,0,(int32_t)c->r[0],1); // 8018FCEC
  if (crb(c,2)) { goto L_8018FD18; } // 8018FCF0
  cmps(c,0,(int32_t)c->r[0],7); // 8018FCF4
  if (crb(c,2)) { goto L_8018FD20; } // 8018FCF8
  goto L_8018FD2C; // 8018FCFC
L_8018FD00:;
  W32(c->r[22]+0x00000000u,c->r[21]); // 8018FD00
  goto L_8018FD2C; // 8018FD04
L_8018FD08:;
  W16(c->r[22]+0x00000000u,c->r[21]); // 8018FD08
  goto L_8018FD2C; // 8018FD0C
L_8018FD10:;
  W32(c->r[22]+0x00000000u,c->r[21]); // 8018FD10
  goto L_8018FD2C; // 8018FD14
L_8018FD18:;
  W8(c->r[22]+0x00000000u,c->r[21]); // 8018FD18
  goto L_8018FD2C; // 8018FD1C
L_8018FD20:;
  W32(c->r[22]+0x00000004u,c->r[21]); // 8018FD20
  c->r[0]=sraw(c,c->r[21],31); // 8018FD24
  W32(c->r[22]+0x00000000u,c->r[0]); // 8018FD28
L_8018FD2C:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 8018FD2C
  c->r[22]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[22]); // 8018FD30
  if (!crb(c,2)) { IRQCHK(c); goto L_8018F148; } // 8018FD34
L_8018FD38:;
  c->r[12]=c->r[26]|c->r[26]; // 8018FD38
  c->r[3]=c->r[27]|c->r[27]; // 8018FD3C
  c->r[4]=0u+0x00000000u; // 8018FD40
  c->r[5]=0u+0x00000002u; // 8018FD44
  c->ctr=c->r[12]; // 8018FD48
  if (true) { c->lr=0x8018FD50u; dispatch(c,c->ctr); } // 8018FD4C
  cmps(c,0,(int32_t)c->r[3],0); // 8018FD50
  if (crb(c,2)) { goto L_8018FD68; } // 8018FD54
  cmps(c,0,(int32_t)c->r[19],0); // 8018FD58
  if (!crb(c,2)) { goto L_8018FD68; } // 8018FD5C
  c->r[3]=0u+0xFFFFFFFFu; // 8018FD60
  goto L_8018FD6C; // 8018FD64
L_8018FD68:;
  c->r[3]=c->r[20]|c->r[20]; // 8018FD68
L_8018FD6C:;
  c->r[11]=c->r[1]+0x000000B0u; // 8018FD6C
  c->lr=0x8018FD74u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8018FD70
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8018FD74
  c->lr=c->r[0]; // 8018FD78
  c->r[1]=c->r[1]+0x000000B0u; // 8018FD7C
  return; // 8018FD80
}

// fn_8018FD84
void f_8018FD84(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 8018FD84
  if (crb(c,2)) { goto L_8018FDA0; } // 8018FD88
  cmps(c,0,(int32_t)c->r[5],1); // 8018FD8C
  if (crb(c,2)) { goto L_8018FDD0; } // 8018FD90
  cmps(c,0,(int32_t)c->r[5],2); // 8018FD94
  if (crb(c,2)) { goto L_8018FDFC; } // 8018FD98
  goto L_8018FE04; // 8018FD9C
L_8018FDA0:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8018FDA0
  c->r[5]=R8(c->r[4]+0x00000000u); // 8018FDA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 8018FDA8
  if (!crb(c,2)) { goto L_8018FDC0; } // 8018FDAC
  c->r[0]=0u+0x00000001u; // 8018FDB0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8018FDB4
  c->r[3]=0u+0xFFFFFFFFu; // 8018FDB8
  return; // 8018FDBC
L_8018FDC0:;
  c->r[0]=c->r[4]+0x00000001u; // 8018FDC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8018FDC4
  c->r[3]=c->r[5]|c->r[5]; // 8018FDC8
  return; // 8018FDCC
L_8018FDD0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8018FDD0
  cmps(c,0,(int32_t)c->r[0],0); // 8018FDD4
  if (!crb(c,2)) { goto L_8018FDEC; } // 8018FDD8
  c->r[5]=R32(c->r[3]+0x00000000u); // 8018FDDC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8018FDE0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8018FDE4
  goto L_8018FDF4; // 8018FDE8
L_8018FDEC:;
  c->r[0]=0u+0x00000000u; // 8018FDEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8018FDF0
L_8018FDF4:;
  c->r[3]=c->r[4]|c->r[4]; // 8018FDF4
  return; // 8018FDF8
L_8018FDFC:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8018FDFC
  return; // 8018FE00
L_8018FE04:;
  c->r[3]=0u+0x00000000u; // 8018FE04
  return; // 8018FE08
}

// fn_8018FE0C
void f_8018FE0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018FE0C
  c->r[0]=c->lr; // 8018FE10
  W32(c->r[1]+0x00000084u,c->r[0]); // 8018FE14
  if (!crb(c,6)) { goto L_8018FE3C; } // 8018FE18
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8018FE1C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8018FE20
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8018FE24
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8018FE28
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8018FE2C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8018FE30
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8018FE34
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8018FE38
L_8018FE3C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8018FE3C
  c->r[11]=c->r[1]+0x00000088u; // 8018FE40
  c->r[0]=c->r[1]+0x00000008u; // 8018FE44
  c->r[12]=0u+0x02000000u; // 8018FE48
  W32(c->r[1]+0x00000008u,c->r[3]); // 8018FE4C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8018FE50
  W32(c->r[1]+0x00000010u,c->r[5]); // 8018FE54
  W32(c->r[1]+0x00000014u,c->r[6]); // 8018FE58
  W32(c->r[1]+0x00000018u,c->r[7]); // 8018FE5C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8018FE60
  W32(c->r[1]+0x00000020u,c->r[9]); // 8018FE64
  W32(c->r[1]+0x00000024u,c->r[10]); // 8018FE68
  W32(c->r[1]+0x00000070u,c->r[12]); // 8018FE6C
  W32(c->r[1]+0x00000074u,c->r[11]); // 8018FE70
  W32(c->r[1]+0x00000078u,c->r[0]); // 8018FE74
  W32(c->r[1]+0x00000068u,c->r[3]); // 8018FE78
  if (crb(c,2)) { goto L_8018FF00; } // 8018FE7C
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018FE80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018FE84
  if (crb(c,2)) { goto L_8018FF00; } // 8018FE88
  c->r[5]=0u+0x80330000u; // 8018FE8C
  c->r[5]=c->r[5]+0x000006B0u; // 8018FE90
  c->r[6]=R32(c->r[5]+0x00000038u); // 8018FE94
  goto L_8018FEE8; // 8018FE98
L_8018FE9C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018FE9C
  c->r[5]=0u+0x00000001u; // 8018FEA0
  c->r[3]=c->r[3]+0x00000001u; // 8018FEA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8018FEA8
  cmpu(c,0,c->r[0],0x000000FFu); // 8018FEAC
  if (crb(c,1)) { goto L_8018FEB8; } // 8018FEB0
  c->r[5]=0u+0x00000000u; // 8018FEB4
L_8018FEB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8018FEB8
  if (crb(c,2)) { goto L_8018FEC8; } // 8018FEBC
  c->r[0]=0u+0x00000000u; // 8018FEC0
  goto L_8018FED8; // 8018FEC4
L_8018FEC8:;
  c->r[5]=R32(c->r[6]+0x00000008u); // 8018FEC8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8018FECC
  c->r[0]=R16(c->r[5]+c->r[0]); // 8018FED0
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8018FED4
L_8018FED8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018FED8
  if (!crb(c,2)) { goto L_8018FEE8; } // 8018FEDC
  c->r[0]=0u+0x00000000u; // 8018FEE0
  goto L_8018FEF8; // 8018FEE4
L_8018FEE8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8018FEE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8018FEEC
  if (!crb(c,2)) { IRQCHK(c); goto L_8018FE9C; } // 8018FEF0
  c->r[0]=0u+0x00000001u; // 8018FEF4
L_8018FEF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8018FEF8
  if (crb(c,2)) { goto L_8018FF08; } // 8018FEFC
L_8018FF00:;
  c->r[3]=0u+0xFFFFFFFFu; // 8018FF00
  goto L_8018FF2C; // 8018FF04
L_8018FF08:;
  c->r[0]=0u+0x00000000u; // 8018FF08
  c->r[3]=0u+0x80190000u; // 8018FF0C
  c->r[5]=c->r[4]|c->r[4]; // 8018FF10
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8018FF14
  c->r[3]=c->r[3]+0xFFFFFD84u; // 8018FF18
  c->r[4]=c->r[1]+0x00000068u; // 8018FF1C
  c->r[6]=c->r[1]+0x00000070u; // 8018FF20
  c->r[7]=0u+0x00000000u; // 8018FF24
  c->lr=0x8018FF2Cu; f_8018F0EC(c); // 8018FF28
L_8018FF2C:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 8018FF2C
  c->lr=c->r[0]; // 8018FF30
  c->r[1]=c->r[1]+0x00000080u; // 8018FF34
  return; // 8018FF38
}

// fn_8018FF3C
void f_8018FF3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8018FF3C
  c->r[0]=c->lr; // 8018FF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8018FF44
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8018FF48
  cmpu(c,0,c->r[0],0x00000006u); // 8018FF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8018FF50
  W32(c->r[1]+0x00000008u,c->r[30]); // 8018FF54
  c->r[30]=c->r[3]|c->r[3]; // 8018FF58
  if (!crb(c,1)) { goto L_8018FF68; } // 8018FF5C
  c->r[3]=0u+0xFFFFFFFFu; // 8018FF60
  goto L_8018FFCC; // 8018FF64
L_8018FF68:;
  c->r[4]=0u+0x80390000u; // 8018FF68
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8018FF6C
  c->r[4]=c->r[4]+0xFFFFF970u; // 8018FF70
  c->r[31]=R32(c->r[4]+c->r[5]); // 8018FF74
  cmpu(c,0,c->r[31],0x00000001u); // 8018FF78
  if (crb(c,2)) { goto L_8018FF88; } // 8018FF7C
  c->r[0]=0u+0x00000000u; // 8018FF80
  W32(c->r[4]+c->r[5],c->r[0]); // 8018FF84
L_8018FF88:;
  cmpu(c,0,c->r[31],0x00000001u); // 8018FF88
  if (crb(c,2)) { goto L_8018FFA0; } // 8018FF8C
  cmps(c,0,(int32_t)c->r[31],0); // 8018FF90
  if (!crb(c,2)) { goto L_8018FFA8; } // 8018FF94
  cmps(c,0,(int32_t)c->r[3],1); // 8018FF98
  if (!crb(c,2)) { goto L_8018FFA8; } // 8018FF9C
L_8018FFA0:;
  c->r[3]=0u+0x00000000u; // 8018FFA0
  goto L_8018FFCC; // 8018FFA4
L_8018FFA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8018FFA8
  if (!crb(c,2)) { goto L_8018FFB8; } // 8018FFAC
  c->r[3]=0u+0x00000000u; // 8018FFB0
  c->lr=0x8018FFB8u; f_80167F4C(c); // 8018FFB4
L_8018FFB8:;
  c->r[12]=c->r[31]|c->r[31]; // 8018FFB8
  c->r[3]=c->r[30]|c->r[30]; // 8018FFBC
  c->ctr=c->r[12]; // 8018FFC0
  if (true) { c->lr=0x8018FFC8u; dispatch(c,c->ctr); } // 8018FFC4
  c->r[3]=0u+0x00000000u; // 8018FFC8
L_8018FFCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8018FFCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8018FFD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8018FFD4
  c->lr=c->r[0]; // 8018FFD8
  c->r[1]=c->r[1]+0x00000010u; // 8018FFDC
  return; // 8018FFE0
}

// strcpy
void f_8018FFE4(Ctx* __restrict c) {
  trace_call(0x8018FFE4u);
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 8018FFE4
  c->r[5]=rotl(c->r[4],0)&0x00000003u; // 8018FFE8
  cmpu(c,0,c->r[0],c->r[5]); // 8018FFEC
  c->r[7]=c->r[3]|c->r[3]; // 8018FFF0
  if (!crb(c,2)) { goto L_80190080; } // 8018FFF4
  cmps(c,0,(int32_t)c->r[5],0); // 8018FFF8
  if (crb(c,2)) { goto L_8019003C; } // 8018FFFC
  c->r[0]=R8(c->r[4]+0x00000000u); // 80190000
  W8(c->r[3]+0x00000000u,c->r[0]); // 80190004
  cmps(c,0,(int32_t)c->r[0],0); // 80190008
  if (crb(c,2)) return; // 8019000C
  c->r[0]=addc(c,~c->r[5],0x00000003u,1); // 80190010
  c->ctr=c->r[0]; // 80190014
  cmps(c,0,(int32_t)c->r[0],0); // 80190018
  if (crb(c,2)) { goto L_80190034; } // 8019001C
L_80190020:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 80190020
  {uint32_t ea=c->r[7]+0x00000001u; W8(ea,c->r[0]); c->r[7]=ea;} // 80190024
  cmps(c,0,(int32_t)c->r[0],0); // 80190028
  if (crb(c,2)) return; // 8019002C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80190020; } // 80190030
L_80190034:;
  c->r[7]=c->r[7]+0x00000001u; // 80190034
  c->r[4]=c->r[4]+0x00000001u; // 80190038
L_8019003C:;
  c->r[8]=R32(c->r[4]+0x00000000u); // 8019003C
  c->r[5]=0u+0x80810000u; // 80190040
  c->r[5]=c->r[5]+0xFFFF8080u; // 80190044
  c->r[6]=c->r[8]+0xFEFF0000u; // 80190048
  c->r[6]=c->r[6]+0xFFFFFEFFu; // 8019004C
  c->r[6]=c->r[6]&~c->r[8]; // 80190050
  c->r[0]=c->r[6]&c->r[5]; cr0(c,c->r[0]); // 80190054
  if (!crb(c,2)) { goto L_80190080; } // 80190058
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 8019005C
L_80190060:;
  {uint32_t ea=c->r[7]+0x00000004u; W32(ea,c->r[8]); c->r[7]=ea;} // 80190060
  {uint32_t ea=c->r[4]+0x00000004u; c->r[8]=R32(ea); c->r[4]=ea;} // 80190064
  c->r[6]=c->r[8]+0xFEFF0000u; // 80190068
  c->r[6]=c->r[6]+0xFFFFFEFFu; // 8019006C
  c->r[6]=c->r[6]&~c->r[8]; // 80190070
  c->r[0]=c->r[6]&c->r[5]; cr0(c,c->r[0]); // 80190074
  if (crb(c,2)) { IRQCHK(c); goto L_80190060; } // 80190078
  c->r[7]=c->r[7]+0x00000004u; // 8019007C
L_80190080:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80190080
  W8(c->r[7]+0x00000000u,c->r[0]); // 80190084
  cmps(c,0,(int32_t)c->r[0],0); // 80190088
  if (crb(c,2)) return; // 8019008C
L_80190090:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 80190090
  {uint32_t ea=c->r[7]+0x00000001u; W8(ea,c->r[0]); c->r[7]=ea;} // 80190094
  cmps(c,0,(int32_t)c->r[0],0); // 80190098
  if (!crb(c,2)) { IRQCHK(c); goto L_80190090; } // 8019009C
  return; // 801900A0
}

// fn_801900A4
void f_801900A4(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801900A4
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 801900A8
  c->r[5]=c->r[5]+0x00000001u; // 801900AC
  goto L_801900DC; // 801900B0
L_801900B4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801900B4
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 801900B8
  cmps(c,0,(int32_t)c->r[0],0); // 801900BC
  if (!crb(c,2)) { goto L_801900DC; } // 801900C0
  c->r[0]=0u+0x00000000u; // 801900C4
  goto L_801900D0; // 801900C8
L_801900CC:;
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 801900CC
L_801900D0:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801900D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801900CC; } // 801900D4
  return; // 801900D8
L_801900DC:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801900DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801900B4; } // 801900E0
  return; // 801900E4
}

// fn_801900E8
void f_801900E8(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801900E8
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801900EC
L_801900F0:;
  {uint32_t ea=c->r[5]+0x00000001u; c->r[0]=R8(ea); c->r[5]=ea;} // 801900F0
  cmps(c,0,(int32_t)c->r[0],0); // 801900F4
  if (!crb(c,2)) { IRQCHK(c); goto L_801900F0; } // 801900F8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801900FC
L_80190100:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 80190100
  {uint32_t ea=c->r[5]+0x00000001u; W8(ea,c->r[0]); c->r[5]=ea;} // 80190104
  cmps(c,0,(int32_t)c->r[0],0); // 80190108
  if (!crb(c,2)) { IRQCHK(c); goto L_80190100; } // 8019010C
  return; // 80190110
}

// fn_80190114
void f_80190114(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80190114
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 80190118
L_8019011C:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[0]=R8(ea); c->r[6]=ea;} // 8019011C
  cmps(c,0,(int32_t)c->r[0],0); // 80190120
  if (!crb(c,2)) { IRQCHK(c); goto L_8019011C; } // 80190124
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80190128
  c->r[5]=c->r[5]+0x00000001u; // 8019012C
  goto L_8019014C; // 80190130
L_80190134:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 80190134
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 80190138
  cmps(c,0,(int32_t)c->r[0],0); // 8019013C
  if (!crb(c,2)) { goto L_8019014C; } // 80190140
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80190144
  goto L_80190154; // 80190148
L_8019014C:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8019014C
  if (!crb(c,2)) { IRQCHK(c); goto L_80190134; } // 80190150
L_80190154:;
  c->r[0]=0u+0x00000000u; // 80190154
  W8(c->r[6]+0x00000001u,c->r[0]); // 80190158
  return; // 8019015C
}

// strcmp
void f_80190160(Ctx* __restrict c) {
  trace_call(0x80190160u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 80190160
  c->r[0]=R8(c->r[4]+0x00000000u); // 80190164
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 80190168
  if (crb(c,2)) { goto L_80190178; } // 8019016C
  c->r[3]=c->r[0]|c->r[0]; // 80190170
  return; // 80190174
L_80190178:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80190178
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 8019017C
  cmpu(c,0,c->r[0],c->r[6]); // 80190180
  if (!crb(c,2)) { goto L_80190244; } // 80190184
  cmps(c,0,(int32_t)c->r[6],0); // 80190188
  if (crb(c,2)) { goto L_801901E4; } // 8019018C
  cmps(c,0,(int32_t)c->r[5],0); // 80190190
  if (!crb(c,2)) { goto L_801901A0; } // 80190194
  c->r[3]=0u+0x00000000u; // 80190198
  return; // 8019019C
L_801901A0:;
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 801901A0
  c->ctr=c->r[0]; // 801901A4
  cmps(c,0,(int32_t)c->r[0],0); // 801901A8
  if (crb(c,2)) { goto L_801901DC; } // 801901AC
L_801901B0:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 801901B0
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801901B4
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 801901B8
  if (crb(c,2)) { goto L_801901C8; } // 801901BC
  c->r[3]=c->r[0]|c->r[0]; // 801901C0
  return; // 801901C4
L_801901C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801901C8
  if (!crb(c,2)) { goto L_801901D8; } // 801901CC
  c->r[3]=0u+0x00000000u; // 801901D0
  return; // 801901D4
L_801901D8:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801901B0; } // 801901D8
L_801901DC:;
  c->r[3]=c->r[3]+0x00000001u; // 801901DC
  c->r[4]=c->r[4]+0x00000001u; // 801901E0
L_801901E4:;
  c->r[7]=R32(c->r[3]+0x00000000u); // 801901E4
  c->r[5]=0u+0x80810000u; // 801901E8
  c->r[6]=c->r[5]+0xFFFF8080u; // 801901EC
  c->r[8]=R32(c->r[4]+0x00000000u); // 801901F0
  c->r[5]=c->r[7]+0xFEFF0000u; // 801901F4
  c->r[5]=c->r[5]+0xFFFFFEFFu; // 801901F8
  c->r[5]=c->r[5]&~c->r[7]; // 801901FC
  c->r[0]=c->r[5]&c->r[6]; cr0(c,c->r[0]); // 80190200
  if (!crb(c,2)) { goto L_8019022C; } // 80190204
  goto L_80190224; // 80190208
L_8019020C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->r[7]=R32(ea); c->r[3]=ea;} // 8019020C
  {uint32_t ea=c->r[4]+0x00000004u; c->r[8]=R32(ea); c->r[4]=ea;} // 80190210
  c->r[5]=c->r[7]+0xFEFF0000u; // 80190214
  c->r[0]=c->r[5]+0xFFFFFEFFu; // 80190218
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 8019021C
  if (!crb(c,2)) { goto L_8019022C; } // 80190220
L_80190224:;
  cmpu(c,0,c->r[7],c->r[8]); // 80190224
  if (crb(c,2)) { IRQCHK(c); goto L_8019020C; } // 80190228
L_8019022C:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 8019022C
  c->r[0]=R8(c->r[4]+0x00000000u); // 80190230
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 80190234
  if (crb(c,2)) { goto L_80190244; } // 80190238
  c->r[3]=c->r[0]|c->r[0]; // 8019023C
  return; // 80190240
L_80190244:;
  cmps(c,0,(int32_t)c->r[5],0); // 80190244
  if (!crb(c,2)) { goto L_80190254; } // 80190248
  c->r[3]=0u+0x00000000u; // 8019024C
  return; // 80190250
L_80190254:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 80190254
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 80190258
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 8019025C
  if (crb(c,2)) { goto L_8019026C; } // 80190260
  c->r[3]=c->r[0]|c->r[0]; // 80190264
  return; // 80190268
L_8019026C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8019026C
  if (!crb(c,2)) { IRQCHK(c); goto L_80190254; } // 80190270
  c->r[3]=0u+0x00000000u; // 80190274
  return; // 80190278
}

// strncmp
void f_8019027C(Ctx* __restrict c) {
  trace_call(0x8019027Cu);
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8019027C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80190280
  c->r[6]=c->r[5]+0x00000001u; // 80190284
  goto L_801902AC; // 80190288
L_8019028C:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[0]=R8(ea); c->r[3]=ea;} // 8019028C
  {uint32_t ea=c->r[4]+0x00000001u; c->r[5]=R8(ea); c->r[4]=ea;} // 80190290
  cmpu(c,0,c->r[0],c->r[5]); // 80190294
  if (crb(c,2)) { goto L_801902A4; } // 80190298
  c->r[3]=c->r[0]-c->r[5]; // 8019029C
  return; // 801902A0
L_801902A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801902A4
  if (crb(c,2)) { goto L_801902B4; } // 801902A8
L_801902AC:;
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 801902AC
  if (!crb(c,2)) { IRQCHK(c); goto L_8019028C; } // 801902B0
L_801902B4:;
  c->r[3]=0u+0x00000000u; // 801902B4
  return; // 801902B8
}

// strchr
void f_801902BC(Ctx* __restrict c) {
  trace_call(0x801902BCu);
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801902BC
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801902C0
  goto L_801902D0; // 801902C4
L_801902C8:;
  cmpu(c,0,c->r[4],c->r[0]); // 801902C8
  if (crb(c,2)) return; // 801902CC
L_801902D0:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[4]=R8(ea); c->r[3]=ea;} // 801902D0
  cmps(c,0,(int32_t)c->r[4],0); // 801902D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801902C8; } // 801902D8
  cmps(c,0,(int32_t)c->r[0],0); // 801902DC
  if (crb(c,2)) return; // 801902E0
  c->r[3]=0u+0x00000000u; // 801902E4
  return; // 801902E8
}

// strrchr
void f_801902EC(Ctx* __restrict c) {
  trace_call(0x801902ECu);
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801902EC
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801902F0
  c->r[3]=0u+0x00000000u; // 801902F4
  goto L_80190308; // 801902F8
L_801902FC:;
  cmpu(c,0,c->r[4],c->r[0]); // 801902FC
  if (!crb(c,2)) { goto L_80190308; } // 80190300
  c->r[3]=c->r[5]|c->r[5]; // 80190304
L_80190308:;
  {uint32_t ea=c->r[5]+0x00000001u; c->r[4]=R8(ea); c->r[5]=ea;} // 80190308
  cmps(c,0,(int32_t)c->r[4],0); // 8019030C
  if (!crb(c,2)) { IRQCHK(c); goto L_801902FC; } // 80190310
  cmps(c,0,(int32_t)c->r[3],0); // 80190314
  if (!crb(c,2)) return; // 80190318
  cmps(c,0,(int32_t)c->r[0],0); // 8019031C
  if (crb(c,2)) { goto L_8019032C; } // 80190320
  c->r[3]=0u+0x00000000u; // 80190324
  return; // 80190328
L_8019032C:;
  c->r[3]=c->r[5]|c->r[5]; // 8019032C
  return; // 80190330
}

// strtok
void f_80190334(Ctx* __restrict c) {
  trace_call(0x80190334u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80190334
  c->r[0]=0u+0x00000000u; // 80190338
  cmps(c,0,(int32_t)c->r[3],0); // 8019033C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80190340
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80190344
  W32(c->r[1]+0x00000010u,c->r[0]); // 80190348
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019034C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80190350
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80190354
  W32(c->r[1]+0x00000020u,c->r[0]); // 80190358
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019035C
  if (crb(c,2)) { goto L_80190368; } // 80190360
  W32(c->r[13]+0xFFFF9244u,c->r[3]); // 80190364
L_80190368:;
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 80190368
  c->r[5]=c->r[1]+0x00000008u; // 8019036C
  c->r[3]=0u+0x00000001u; // 80190370
  goto L_80190394; // 80190374
L_80190378:;
  c->r[6]=rotl(c->r[0],29)&0x0000001Fu; // 80190378
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 8019037C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80190380
  c->r[4]=R8(c->r[5]+c->r[6]); // 80190384
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80190388
  c->r[0]=c->r[4]|c->r[0]; // 8019038C
  W8(c->r[5]+c->r[6],c->r[0]); // 80190390
L_80190394:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 80190394
  cmps(c,0,(int32_t)c->r[0],0); // 80190398
  if (!crb(c,2)) { IRQCHK(c); goto L_80190378; } // 8019039C
  c->r[4]=R32(c->r[13]+0xFFFF9244u); // 801903A0
  c->r[5]=c->r[1]+0x00000008u; // 801903A4
  c->r[3]=0u+0x00000001u; // 801903A8
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801903AC
  goto L_801903D0; // 801903B0
L_801903B4:;
  c->r[4]=rotl(c->r[6],29)&0x0000001Fu; // 801903B4
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 801903B8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801903BC
  c->r[4]=R8(c->r[5]+c->r[4]); // 801903C0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801903C4
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801903C8
  if (crb(c,2)) { goto L_801903DC; } // 801903CC
L_801903D0:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[6]=R8(ea); c->r[7]=ea;} // 801903D0
  cmps(c,0,(int32_t)c->r[6],0); // 801903D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801903B4; } // 801903D8
L_801903DC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801903DC
  if (!crb(c,2)) { goto L_801903F4; } // 801903E0
  c->r[0]=R32(c->r[13]+0xFFFF9240u); // 801903E4
  c->r[3]=0u+0x00000000u; // 801903E8
  W32(c->r[13]+0xFFFF9244u,c->r[0]); // 801903EC
  goto L_80190450; // 801903F0
L_801903F4:;
  c->r[3]=c->r[7]|c->r[7]; // 801903F4
  c->r[6]=c->r[1]+0x00000008u; // 801903F8
  c->r[4]=0u+0x00000001u; // 801903FC
  goto L_80190420; // 80190400
L_80190404:;
  c->r[5]=rotl(c->r[8],29)&0x0000001Fu; // 80190404
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 80190408
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8019040C
  c->r[5]=R8(c->r[6]+c->r[5]); // 80190410
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80190414
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80190418
  if (!crb(c,2)) { goto L_8019042C; } // 8019041C
L_80190420:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[8]=R8(ea); c->r[7]=ea;} // 80190420
  cmps(c,0,(int32_t)c->r[8],0); // 80190424
  if (!crb(c,2)) { IRQCHK(c); goto L_80190404; } // 80190428
L_8019042C:;
  cmps(c,0,(int32_t)c->r[8],0); // 8019042C
  if (!crb(c,2)) { goto L_80190440; } // 80190430
  c->r[0]=R32(c->r[13]+0xFFFF9240u); // 80190434
  W32(c->r[13]+0xFFFF9244u,c->r[0]); // 80190438
  goto L_80190450; // 8019043C
L_80190440:;
  c->r[4]=c->r[7]+0x00000001u; // 80190440
  c->r[0]=0u+0x00000000u; // 80190444
  W32(c->r[13]+0xFFFF9244u,c->r[4]); // 80190448
  W8(c->r[7]+0x00000000u,c->r[0]); // 8019044C
L_80190450:;
  c->r[1]=c->r[1]+0x00000030u; // 80190450
  return; // 80190454
}

// strstr
void f_80190458(Ctx* __restrict c) {
  trace_call(0x80190458u);
  cmps(c,0,(int32_t)c->r[4],0); // 80190458
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8019045C
  if (crb(c,2)) return; // 80190460
  c->r[6]=R8(c->r[4]+0x00000000u); // 80190464
  cmps(c,0,(int32_t)c->r[6],0); // 80190468
  if (!crb(c,2)) { goto L_801904B0; } // 8019046C
  return; // 80190470
  goto L_801904B0; // 80190474
L_80190478:;
  cmpu(c,0,c->r[0],c->r[6]); // 80190478
  if (!crb(c,2)) { goto L_801904B0; } // 8019047C
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 80190480
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 80190484
L_80190488:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 80190488
  {uint32_t ea=c->r[8]+0x00000001u; c->r[3]=R8(ea); c->r[8]=ea;} // 8019048C
  cmpu(c,0,c->r[0],c->r[3]); // 80190490
  if (!crb(c,2)) { goto L_801904A0; } // 80190494
  cmps(c,0,(int32_t)c->r[0],0); // 80190498
  if (!crb(c,2)) { IRQCHK(c); goto L_80190488; } // 8019049C
L_801904A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801904A0
  if (!crb(c,2)) { goto L_801904B0; } // 801904A4
  c->r[3]=c->r[5]|c->r[5]; // 801904A8
  return; // 801904AC
L_801904B0:;
  {uint32_t ea=c->r[5]+0x00000001u; c->r[0]=R8(ea); c->r[5]=ea;} // 801904B0
  cmps(c,0,(int32_t)c->r[0],0); // 801904B4
  if (!crb(c,2)) { IRQCHK(c); goto L_80190478; } // 801904B8
  c->r[3]=0u+0x00000000u; // 801904BC
  return; // 801904C0
}

// fn_801904C4
void f_801904C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801904C4
  c->r[0]=c->lr; // 801904C8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801904CC
  c->r[11]=c->r[1]+0x000000F0u; // 801904D0
  c->lr=0x801904D8u; f_80185EA0(c); // 801904D4
  c->r[8]=0u+0x80330000u; // 801904D8
  c->r[31]=0u+0x00000000u; // 801904DC
  W32(c->r[1]+0x00000068u,c->r[31]); // 801904E0
  c->r[17]=c->r[4]|c->r[4]; // 801904E4
  c->r[8]=R32(c->r[8]+0x00000500u); // 801904E8
  c->r[18]=c->r[5]|c->r[5]; // 801904EC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801904F0
  c->r[0]=0u+0x00000000u; // 801904F4
  c->r[12]=c->r[17]|c->r[17]; // 801904F8
  c->r[19]=c->r[7]|c->r[7]; // 801904FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80190500
  c->r[3]=c->r[18]|c->r[18]; // 80190504
  c->r[16]=0u+0x00000001u; // 80190508
  c->r[29]=0u+0x00000000u; // 8019050C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80190510
  c->r[0]=0u+0x00000000u; // 80190514
  c->r[14]=0u+0x00000000u; // 80190518
  c->r[28]=0u+0x00000000u; // 8019051C
  W32(c->r[1]+0x00000098u,c->r[0]); // 80190520
  c->r[0]=0u+0x00000000u; // 80190524
  c->r[27]=0u+0x00000000u; // 80190528
  c->r[24]=0u+0x00000000u; // 8019052C
  W32(c->r[1]+0x00000070u,c->r[31]); // 80190530
  c->r[22]=0u+0x00000000u; // 80190534
  c->r[30]=0u+0x00000001u; // 80190538
  c->r[4]=0u+0x00000000u; // 8019053C
  W32(c->r[1]+0x00000074u,c->r[31]); // 80190540
  c->r[5]=0u+0x00000000u; // 80190544
  W32(c->r[1]+0x00000078u,c->r[31]); // 80190548
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8019054C
  W32(c->r[1]+0x00000080u,c->r[31]); // 80190550
  W32(c->r[1]+0x00000084u,c->r[31]); // 80190554
  W32(c->r[1]+0x00000088u,c->r[31]); // 80190558
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8019055C
  W16(c->r[1]+0x00000090u,c->r[31]); // 80190560
  c->r[26]=R8(c->r[8]+0x00000000u); // 80190564
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80190568
  W32(c->r[1]+0x00000094u,c->r[0]); // 8019056C
  W32(c->r[7]+0x00000000u,c->r[31]); // 80190570
  c->ctr=c->r[12]; // 80190574
  if (true) { c->lr=0x8019057Cu; dispatch(c,c->ctr); } // 80190578
  c->r[8]=0u+0x802E0000u; // 8019057C
  {uint32_t ea=c->r[8]+0x00000398u; c->r[7]=R32(ea); c->r[8]=ea;} // 80190580
  c->r[5]=R32(c->r[2]+0xFFFF8F10u); // 80190584
  c->r[4]=c->r[3]|c->r[3]; // 80190588
  c->r[6]=R32(c->r[8]+0x00000004u); // 8019058C
  c->r[15]=0u+0x80330000u; // 80190590
  c->r[3]=R8(c->r[8]+0x00000008u); // 80190594
  c->r[15]=c->r[15]+0x000006B0u; // 80190598
  c->r[0]=R8(c->r[2]+0xFFFF8F14u); // 8019059C
  W32(c->r[1]+0x00000030u,c->r[7]); // 801905A0
  W32(c->r[1]+0x00000034u,c->r[6]); // 801905A4
  W8(c->r[1]+0x00000038u,c->r[3]); // 801905A8
  W32(c->r[1]+0x00000010u,c->r[5]); // 801905AC
  W8(c->r[1]+0x00000014u,c->r[0]); // 801905B0
  goto L_8019146C; // 801905B4
L_801905B8:;
  cmps(c,0,(int32_t)c->r[16],128); // 801905B8
  if (crb(c,2)) { goto L_80190D8C; } // 801905BC
  if (!crb(c,0)) { goto L_8019061C; } // 801905C0
  cmps(c,0,(int32_t)c->r[16],8); // 801905C4
  if (crb(c,2)) { goto L_80190B7C; } // 801905C8
  if (!crb(c,0)) { goto L_801905F8; } // 801905CC
  cmps(c,0,(int32_t)c->r[16],3); // 801905D0
  if (crb(c,2)) { goto L_8019146C; } // 801905D4
  if (!crb(c,0)) { goto L_801905EC; } // 801905D8
  cmps(c,0,(int32_t)c->r[16],1); // 801905DC
  if (crb(c,2)) { goto L_8019066C; } // 801905E0
  if (!crb(c,0)) { goto L_80190A5C; } // 801905E4
  goto L_8019146C; // 801905E8
L_801905EC:;
  cmps(c,0,(int32_t)c->r[16],5); // 801905EC
  if (!crb(c,0)) { goto L_8019146C; } // 801905F0
  goto L_80190B48; // 801905F4
L_801905F8:;
  cmps(c,0,(int32_t)c->r[16],32); // 801905F8
  if (crb(c,2)) { goto L_80190C88; } // 801905FC
  if (!crb(c,0)) { goto L_80190610; } // 80190600
  cmps(c,0,(int32_t)c->r[16],16); // 80190604
  if (crb(c,2)) { goto L_80190C3C; } // 80190608
  goto L_8019146C; // 8019060C
L_80190610:;
  cmps(c,0,(int32_t)c->r[16],64); // 80190610
  if (crb(c,2)) { goto L_80190D28; } // 80190614
  goto L_8019146C; // 80190618
L_8019061C:;
  cmps(c,0,(int32_t)c->r[16],8192); // 8019061C
  if (crb(c,2)) { goto L_80190884; } // 80190620
  if (!crb(c,0)) { goto L_8019064C; } // 80190624
  cmps(c,0,(int32_t)c->r[16],512); // 80190628
  if (crb(c,2)) { goto L_80190E6C; } // 8019062C
  if (!crb(c,0)) { goto L_80190640; } // 80190630
  cmps(c,0,(int32_t)c->r[16],256); // 80190634
  if (crb(c,2)) { goto L_80190DF0; } // 80190638
  goto L_8019146C; // 8019063C
L_80190640:;
  cmps(c,0,(int32_t)c->r[16],1024); // 80190640
  if (crb(c,2)) { goto L_80190EA0; } // 80190644
  goto L_8019146C; // 80190648
L_8019064C:;
  c->r[3]=0u+0x00010000u; // 8019064C
  c->r[0]=c->r[3]+0xFFFF8000u; // 80190650
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 80190654
  if (crb(c,2)) { goto L_80190F24; } // 80190658
  if (!crb(c,0)) { goto L_8019146C; } // 8019065C
  cmps(c,0,(int32_t)c->r[16],16384); // 80190660
  if (crb(c,2)) { goto L_801907A4; } // 80190664
  goto L_8019146C; // 80190668
L_8019066C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 8019066C
  c->r[0]=0u+0x00000001u; // 80190670
  if (crb(c,1)) { goto L_8019067C; } // 80190674
  c->r[0]=0u+0x00000000u; // 80190678
L_8019067C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019067C
  if (crb(c,2)) { goto L_8019068C; } // 80190680
  c->r[0]=0u+0x00000000u; // 80190684
  goto L_801906A0; // 80190688
L_8019068C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 8019068C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80190690
  c->r[3]=R32(c->r[3]+0x00000008u); // 80190694
  c->r[0]=R16(c->r[3]+c->r[0]); // 80190698
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8019069C
L_801906A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801906A0
  if (crb(c,2)) { goto L_801906CC; } // 801906A4
  c->r[12]=c->r[17]|c->r[17]; // 801906A8
  c->r[3]=c->r[18]|c->r[18]; // 801906AC
  c->r[4]=0u+0x00000000u; // 801906B0
  c->r[5]=0u+0x00000000u; // 801906B4
  c->ctr=c->r[12]; // 801906B8
  if (true) { c->lr=0x801906C0u; dispatch(c,c->ctr); } // 801906BC
  c->r[4]=c->r[3]|c->r[3]; // 801906C0
  c->r[29]=c->r[29]+0x00000001u; // 801906C4
  goto L_8019146C; // 801906C8
L_801906CC:;
  cmpu(c,0,c->r[4],0x000000FFu); // 801906CC
  c->r[0]=0u+0x00000001u; // 801906D0
  if (crb(c,1)) { goto L_801906DC; } // 801906D4
  c->r[0]=0u+0x00000000u; // 801906D8
L_801906DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801906DC
  if (crb(c,2)) { goto L_801906EC; } // 801906E0
  c->r[0]=c->r[4]|c->r[4]; // 801906E4
  goto L_801906F8; // 801906E8
L_801906EC:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 801906EC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801906F0
  c->r[0]=R8(c->r[3]+c->r[4]); // 801906F4
L_801906F8:;
  cmps(c,0,(int32_t)c->r[0],45); // 801906F8
  if (crb(c,2)) { goto L_8019071C; } // 801906FC
  cmps(c,0,(int32_t)c->r[0],43); // 80190700
  if (crb(c,2)) { goto L_80190720; } // 80190704
  cmps(c,0,(int32_t)c->r[0],73); // 80190708
  if (crb(c,2)) { goto L_8019074C; } // 8019070C
  cmps(c,0,(int32_t)c->r[0],78); // 80190710
  if (crb(c,2)) { goto L_80190774; } // 80190714
  goto L_8019079C; // 80190718
L_8019071C:;
  c->r[14]=0u+0x00000001u; // 8019071C
L_80190720:;
  c->r[12]=c->r[17]|c->r[17]; // 80190720
  c->r[3]=c->r[18]|c->r[18]; // 80190724
  c->r[4]=0u+0x00000000u; // 80190728
  c->r[5]=0u+0x00000000u; // 8019072C
  c->ctr=c->r[12]; // 80190730
  c->r[30]=c->r[30]+0x00000001u; // 80190734
  if (true) { c->lr=0x8019073Cu; dispatch(c,c->ctr); } // 80190738
  c->r[0]=0u+0x00000001u; // 8019073C
  W32(c->r[1]+0x00000098u,c->r[0]); // 80190740
  c->r[4]=c->r[3]|c->r[3]; // 80190744
  goto L_8019146C; // 80190748
L_8019074C:;
  c->r[12]=c->r[17]|c->r[17]; // 8019074C
  c->r[3]=c->r[18]|c->r[18]; // 80190750
  c->r[4]=0u+0x00000000u; // 80190754
  c->r[5]=0u+0x00000000u; // 80190758
  c->ctr=c->r[12]; // 8019075C
  c->r[30]=c->r[30]+0x00000001u; // 80190760
  if (true) { c->lr=0x80190768u; dispatch(c,c->ctr); } // 80190764
  c->r[4]=c->r[3]|c->r[3]; // 80190768
  c->r[16]=0u+0x00004000u; // 8019076C
  goto L_8019146C; // 80190770
L_80190774:;
  c->r[12]=c->r[17]|c->r[17]; // 80190774
  c->r[3]=c->r[18]|c->r[18]; // 80190778
  c->r[4]=0u+0x00000000u; // 8019077C
  c->r[5]=0u+0x00000000u; // 80190780
  c->ctr=c->r[12]; // 80190784
  c->r[30]=c->r[30]+0x00000001u; // 80190788
  if (true) { c->lr=0x80190790u; dispatch(c,c->ctr); } // 8019078C
  c->r[4]=c->r[3]|c->r[3]; // 80190790
  c->r[16]=0u+0x00002000u; // 80190794
  goto L_8019146C; // 80190798
L_8019079C:;
  c->r[16]=0u+0x00000002u; // 8019079C
  goto L_8019146C; // 801907A0
L_801907A4:;
  c->r[5]=R32(c->r[1]+0x00000030u); // 801907A4
  c->r[16]=c->r[1]+0x0000003Du; // 801907A8
  c->r[3]=R32(c->r[1]+0x00000034u); // 801907AC
  c->r[20]=0u+0x00000001u; // 801907B0
  c->r[0]=R8(c->r[1]+0x00000038u); // 801907B4
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 801907B8
  W32(c->r[1]+0x00000040u,c->r[3]); // 801907BC
  W8(c->r[1]+0x00000044u,c->r[0]); // 801907C0
  goto L_801907F0; // 801907C4
L_801907C8:;
  c->r[12]=c->r[17]|c->r[17]; // 801907C8
  c->r[3]=c->r[18]|c->r[18]; // 801907CC
  c->r[4]=0u+0x00000000u; // 801907D0
  c->r[5]=0u+0x00000000u; // 801907D4
  c->ctr=c->r[12]; // 801907D8
  c->r[16]=c->r[16]+0x00000001u; // 801907DC
  c->r[20]=c->r[20]+0x00000001u; // 801907E0
  c->r[30]=c->r[30]+0x00000001u; // 801907E4
  if (true) { c->lr=0x801907ECu; dispatch(c,c->ctr); } // 801907E8
  c->r[4]=c->r[3]|c->r[3]; // 801907EC
L_801907F0:;
  cmps(c,0,(int32_t)c->r[20],8); // 801907F0
  if (!crb(c,0)) { goto L_80190834; } // 801907F4
  cmpu(c,0,c->r[4],0x000000FFu); // 801907F8
  c->r[3]=0u+0x00000001u; // 801907FC
  if (crb(c,1)) { goto L_80190808; } // 80190800
  c->r[3]=0u+0x00000000u; // 80190804
L_80190808:;
  c->r[0]=R8(c->r[16]+0x00000000u); // 80190808
  cmps(c,0,(int32_t)c->r[3],0); // 8019080C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80190810
  if (crb(c,2)) { goto L_80190820; } // 80190814
  c->r[0]=c->r[4]|c->r[4]; // 80190818
  goto L_8019082C; // 8019081C
L_80190820:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190820
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80190824
  c->r[0]=R8(c->r[3]+c->r[4]); // 80190828
L_8019082C:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8019082C
  if (crb(c,2)) { IRQCHK(c); goto L_801907C8; } // 80190830
L_80190834:;
  cmps(c,0,(int32_t)c->r[20],3); // 80190834
  if (crb(c,2)) { goto L_80190844; } // 80190838
  cmps(c,0,(int32_t)c->r[20],8); // 8019083C
  if (!crb(c,2)) { goto L_8019087C; } // 80190840
L_80190844:;
  cmps(c,0,(int32_t)c->r[14],0); // 80190844
  if (crb(c,2)) { goto L_8019085C; } // 80190848
  c->r[3]=0u+0x80440000u; // 8019084C
  {uint32_t ea=c->r[3]+0xFFFF8A6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80190850
  c->f[1]=-c->f[0]; // 80190854
  goto L_80190864; // 80190858
L_8019085C:;
  c->r[3]=0u+0x80440000u; // 8019085C
  {uint32_t ea=c->r[3]+0xFFFF8A6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80190860
L_80190864:;
  c->r[0]=R32(c->r[1]+0x00000098u); // 80190864
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80190868
  c->r[0]=c->r[0]+c->r[29]; // 8019086C
  c->r[0]=c->r[20]+c->r[0]; // 80190870
  W32(c->r[3]+0x00000000u,c->r[0]); // 80190874
  goto L_801917CC; // 80190878
L_8019087C:;
  c->r[16]=0u+0x00001000u; // 8019087C
  goto L_8019146C; // 80190880
L_80190884:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 80190884
  c->r[20]=0u+0x00000000u; // 80190888
  c->r[0]=R8(c->r[1]+0x00000014u); // 8019088C
  c->r[16]=c->r[1]+0x00000021u; // 80190890
  W32(c->r[1]+0x00000020u,c->r[3]); // 80190894
  c->r[21]=0u+0x00000001u; // 80190898
  W8(c->r[1]+0x00000024u,c->r[0]); // 8019089C
  W32(c->r[1]+0x00000048u,c->r[20]); // 801908A0
  W32(c->r[1]+0x0000004Cu,c->r[20]); // 801908A4
  W32(c->r[1]+0x00000050u,c->r[20]); // 801908A8
  W32(c->r[1]+0x00000054u,c->r[20]); // 801908AC
  W32(c->r[1]+0x00000058u,c->r[20]); // 801908B0
  W32(c->r[1]+0x0000005Cu,c->r[20]); // 801908B4
  W32(c->r[1]+0x00000060u,c->r[20]); // 801908B8
  W32(c->r[1]+0x00000064u,c->r[20]); // 801908BC
  goto L_801908EC; // 801908C0
L_801908C4:;
  c->r[12]=c->r[17]|c->r[17]; // 801908C4
  c->r[3]=c->r[18]|c->r[18]; // 801908C8
  c->r[4]=0u+0x00000000u; // 801908CC
  c->r[5]=0u+0x00000000u; // 801908D0
  c->ctr=c->r[12]; // 801908D4
  c->r[16]=c->r[16]+0x00000001u; // 801908D8
  c->r[21]=c->r[21]+0x00000001u; // 801908DC
  c->r[30]=c->r[30]+0x00000001u; // 801908E0
  if (true) { c->lr=0x801908E8u; dispatch(c,c->ctr); } // 801908E4
  c->r[4]=c->r[3]|c->r[3]; // 801908E8
L_801908EC:;
  cmps(c,0,(int32_t)c->r[21],4); // 801908EC
  if (!crb(c,0)) { goto L_80190930; } // 801908F0
  cmpu(c,0,c->r[4],0x000000FFu); // 801908F4
  c->r[3]=0u+0x00000001u; // 801908F8
  if (crb(c,1)) { goto L_80190904; } // 801908FC
  c->r[3]=0u+0x00000000u; // 80190900
L_80190904:;
  c->r[0]=R8(c->r[16]+0x00000000u); // 80190904
  cmps(c,0,(int32_t)c->r[3],0); // 80190908
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8019090C
  if (crb(c,2)) { goto L_8019091C; } // 80190910
  c->r[0]=c->r[4]|c->r[4]; // 80190914
  goto L_80190928; // 80190918
L_8019091C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 8019091C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80190920
  c->r[0]=R8(c->r[3]+c->r[4]); // 80190924
L_80190928:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80190928
  if (crb(c,2)) { IRQCHK(c); goto L_801908C4; } // 8019092C
L_80190930:;
  c->r[0]=c->r[21]+0xFFFFFFFDu; // 80190930
  cmpu(c,0,c->r[0],0x00000001u); // 80190934
  if (crb(c,1)) { goto L_80190A54; } // 80190938
  cmps(c,0,(int32_t)c->r[21],4); // 8019093C
  if (!crb(c,2)) { goto L_80190A14; } // 80190940
  c->r[16]=c->r[1]+0x00000048u; // 80190944
  goto L_80190978; // 80190948
L_8019094C:;
  c->r[12]=c->r[17]|c->r[17]; // 8019094C
  W8(c->r[16]+0x00000000u,c->r[4]); // 80190950
  c->r[3]=c->r[18]|c->r[18]; // 80190954
  c->r[4]=0u+0x00000000u; // 80190958
  c->r[5]=0u+0x00000000u; // 8019095C
  c->ctr=c->r[12]; // 80190960
  c->r[20]=c->r[20]+0x00000001u; // 80190964
  c->r[16]=c->r[16]+0x00000001u; // 80190968
  c->r[30]=c->r[30]+0x00000001u; // 8019096C
  if (true) { c->lr=0x80190974u; dispatch(c,c->ctr); } // 80190970
  c->r[4]=c->r[3]|c->r[3]; // 80190974
L_80190978:;
  cmps(c,0,(int32_t)c->r[20],32); // 80190978
  if (!crb(c,0)) { goto L_80190A00; } // 8019097C
  cmpu(c,0,c->r[4],0x000000FFu); // 80190980
  c->r[0]=0u+0x00000001u; // 80190984
  if (crb(c,1)) { goto L_80190990; } // 80190988
  c->r[0]=0u+0x00000000u; // 8019098C
L_80190990:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190990
  if (crb(c,2)) { goto L_801909A0; } // 80190994
  c->r[0]=0u+0x00000000u; // 80190998
  goto L_801909B4; // 8019099C
L_801909A0:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 801909A0
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801909A4
  c->r[3]=R32(c->r[3]+0x00000008u); // 801909A8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801909AC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801909B0
L_801909B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801909B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8019094C; } // 801909B8
  cmpu(c,0,c->r[4],0x000000FFu); // 801909BC
  c->r[0]=0u+0x00000001u; // 801909C0
  if (crb(c,1)) { goto L_801909CC; } // 801909C4
  c->r[0]=0u+0x00000000u; // 801909C8
L_801909CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801909CC
  if (crb(c,2)) { goto L_801909DC; } // 801909D0
  c->r[0]=0u+0x00000000u; // 801909D4
  goto L_801909F0; // 801909D8
L_801909DC:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 801909DC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801909E0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801909E4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801909E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801909EC
L_801909F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801909F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8019094C; } // 801909F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[26]); // 801909F8
  if (crb(c,2)) { IRQCHK(c); goto L_8019094C; } // 801909FC
L_80190A00:;
  cmps(c,0,(int32_t)c->r[4],41); // 80190A00
  if (crb(c,2)) { goto L_80190A10; } // 80190A04
  c->r[16]=0u+0x00001000u; // 80190A08
  goto L_8019146C; // 80190A0C
L_80190A10:;
  c->r[20]=c->r[20]+0x00000001u; // 80190A10
L_80190A14:;
  cmps(c,0,(int32_t)c->r[14],0); // 80190A14
  c->r[3]=c->r[1]+0x00000048u; // 80190A18
  c->r[0]=0u+0x00000000u; // 80190A1C
  W8(c->r[3]+c->r[20],c->r[0]); // 80190A20
  if (crb(c,2)) { goto L_80190A34; } // 80190A24
  c->lr=0x80190A2Cu; f_80196B30(c); // 80190A28
  c->f[1]=-c->f[1]; // 80190A2C
  goto L_80190A38; // 80190A30
L_80190A34:;
  c->lr=0x80190A38u; f_80196B30(c); // 80190A34
L_80190A38:;
  c->r[0]=R32(c->r[1]+0x00000098u); // 80190A38
  c->r[3]=c->r[0]+c->r[21]; // 80190A3C
  c->r[0]=c->r[20]+c->r[29]; // 80190A40
  c->r[0]=c->r[3]+c->r[0]; // 80190A44
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80190A48
  W32(c->r[3]+0x00000000u,c->r[0]); // 80190A4C
  goto L_801917CC; // 80190A50
L_80190A54:;
  c->r[16]=0u+0x00001000u; // 80190A54
  goto L_8019146C; // 80190A58
L_80190A5C:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[26]); // 80190A5C
  if (!crb(c,2)) { goto L_80190A8C; } // 80190A60
  c->r[12]=c->r[17]|c->r[17]; // 80190A64
  c->r[3]=c->r[18]|c->r[18]; // 80190A68
  c->r[16]=0u+0x00000010u; // 80190A6C
  c->r[4]=0u+0x00000000u; // 80190A70
  c->r[5]=0u+0x00000000u; // 80190A74
  c->ctr=c->r[12]; // 80190A78
  c->r[30]=c->r[30]+0x00000001u; // 80190A7C
  if (true) { c->lr=0x80190A84u; dispatch(c,c->ctr); } // 80190A80
  c->r[4]=c->r[3]|c->r[3]; // 80190A84
  goto L_8019146C; // 80190A88
L_80190A8C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80190A8C
  c->r[0]=0u+0x00000001u; // 80190A90
  if (crb(c,1)) { goto L_80190A9C; } // 80190A94
  c->r[0]=0u+0x00000000u; // 80190A98
L_80190A9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190A9C
  if (crb(c,2)) { goto L_80190AAC; } // 80190AA0
  c->r[0]=0u+0x00000000u; // 80190AA4
  goto L_80190AC0; // 80190AA8
L_80190AAC:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190AAC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80190AB0
  c->r[3]=R32(c->r[3]+0x00000008u); // 80190AB4
  c->r[0]=R16(c->r[3]+c->r[0]); // 80190AB8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80190ABC
L_80190AC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190AC0
  if (!crb(c,2)) { goto L_80190AD0; } // 80190AC4
  c->r[16]=0u+0x00001000u; // 80190AC8
  goto L_8019146C; // 80190ACC
L_80190AD0:;
  cmps(c,0,(int32_t)c->r[4],48); // 80190AD0
  if (!crb(c,2)) { goto L_80190B40; } // 80190AD4
  c->r[12]=c->r[17]|c->r[17]; // 80190AD8
  c->r[3]=c->r[18]|c->r[18]; // 80190ADC
  c->r[4]=0u+0x00000000u; // 80190AE0
  c->r[5]=0u+0x00000000u; // 80190AE4
  c->ctr=c->r[12]; // 80190AE8
  c->r[30]=c->r[30]+0x00000001u; // 80190AEC
  if (true) { c->lr=0x80190AF4u; dispatch(c,c->ctr); } // 80190AF0
  cmpu(c,0,c->r[3],0x000000FFu); // 80190AF4
  c->r[4]=c->r[3]|c->r[3]; // 80190AF8
  c->r[0]=0u+0x00000001u; // 80190AFC
  if (crb(c,1)) { goto L_80190B08; } // 80190B00
  c->r[0]=0u+0x00000000u; // 80190B04
L_80190B08:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190B08
  if (crb(c,2)) { goto L_80190B14; } // 80190B0C
  goto L_80190B20; // 80190B10
L_80190B14:;
  c->r[5]=R32(c->r[15]+0x00000038u); // 80190B14
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80190B18
  c->r[3]=R8(c->r[5]+c->r[3]); // 80190B1C
L_80190B20:;
  cmps(c,0,(int32_t)c->r[3],88); // 80190B20
  if (!crb(c,2)) { goto L_80190B38; } // 80190B24
  c->r[3]=0u+0x00010000u; // 80190B28
  c->r[31]=0u+0x00000001u; // 80190B2C
  c->r[16]=c->r[3]+0xFFFF8000u; // 80190B30
  goto L_8019146C; // 80190B34
L_80190B38:;
  c->r[16]=0u+0x00000004u; // 80190B38
  goto L_8019146C; // 80190B3C
L_80190B40:;
  c->r[16]=0u+0x00000008u; // 80190B40
  goto L_8019146C; // 80190B44
L_80190B48:;
  cmps(c,0,(int32_t)c->r[4],48); // 80190B48
  if (!crb(c,2)) { goto L_80190B74; } // 80190B4C
  c->r[12]=c->r[17]|c->r[17]; // 80190B50
  c->r[3]=c->r[18]|c->r[18]; // 80190B54
  c->r[4]=0u+0x00000000u; // 80190B58
  c->r[5]=0u+0x00000000u; // 80190B5C
  c->ctr=c->r[12]; // 80190B60
  c->r[30]=c->r[30]+0x00000001u; // 80190B64
  if (true) { c->lr=0x80190B6Cu; dispatch(c,c->ctr); } // 80190B68
  c->r[4]=c->r[3]|c->r[3]; // 80190B6C
  goto L_8019146C; // 80190B70
L_80190B74:;
  c->r[16]=0u+0x00000008u; // 80190B74
  goto L_8019146C; // 80190B78
L_80190B7C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80190B7C
  c->r[0]=0u+0x00000001u; // 80190B80
  if (crb(c,1)) { goto L_80190B8C; } // 80190B84
  c->r[0]=0u+0x00000000u; // 80190B88
L_80190B8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190B8C
  if (crb(c,2)) { goto L_80190B9C; } // 80190B90
  c->r[0]=0u+0x00000000u; // 80190B94
  goto L_80190BB0; // 80190B98
L_80190B9C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190B9C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80190BA0
  c->r[3]=R32(c->r[3]+0x00000008u); // 80190BA4
  c->r[0]=R16(c->r[3]+c->r[0]); // 80190BA8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80190BAC
L_80190BB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190BB0
  if (!crb(c,2)) { goto L_80190BF0; } // 80190BB4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[26]); // 80190BB8
  if (!crb(c,2)) { goto L_80190BE8; } // 80190BBC
  c->r[12]=c->r[17]|c->r[17]; // 80190BC0
  c->r[3]=c->r[18]|c->r[18]; // 80190BC4
  c->r[16]=0u+0x00000020u; // 80190BC8
  c->r[4]=0u+0x00000000u; // 80190BCC
  c->r[5]=0u+0x00000000u; // 80190BD0
  c->ctr=c->r[12]; // 80190BD4
  c->r[30]=c->r[30]+0x00000001u; // 80190BD8
  if (true) { c->lr=0x80190BE0u; dispatch(c,c->ctr); } // 80190BDC
  c->r[4]=c->r[3]|c->r[3]; // 80190BE0
  goto L_8019146C; // 80190BE4
L_80190BE8:;
  c->r[16]=0u+0x00000040u; // 80190BE8
  goto L_8019146C; // 80190BEC
L_80190BF0:;
  c->r[5]=R8(c->r[1]+0x0000006Cu); // 80190BF0
  cmpu(c,0,c->r[5],0x00000014u); // 80190BF4
  if (!crb(c,0)) { goto L_80190C14; } // 80190BF8
  c->r[0]=c->r[1]+0x00000068u; // 80190BFC
  c->r[3]=c->r[0]+c->r[5]; // 80190C00
  W8(c->r[3]+0x00000005u,c->r[4]); // 80190C04
  c->r[0]=c->r[5]+0x00000001u; // 80190C08
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 80190C0C
  goto L_80190C18; // 80190C10
L_80190C14:;
  c->r[27]=c->r[27]+0x00000001u; // 80190C14
L_80190C18:;
  c->r[12]=c->r[17]|c->r[17]; // 80190C18
  c->r[3]=c->r[18]|c->r[18]; // 80190C1C
  c->r[4]=0u+0x00000000u; // 80190C20
  c->r[5]=0u+0x00000000u; // 80190C24
  c->ctr=c->r[12]; // 80190C28
  c->r[30]=c->r[30]+0x00000001u; // 80190C2C
  if (true) { c->lr=0x80190C34u; dispatch(c,c->ctr); } // 80190C30
  c->r[4]=c->r[3]|c->r[3]; // 80190C34
  goto L_8019146C; // 80190C38
L_80190C3C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80190C3C
  c->r[0]=0u+0x00000001u; // 80190C40
  if (crb(c,1)) { goto L_80190C4C; } // 80190C44
  c->r[0]=0u+0x00000000u; // 80190C48
L_80190C4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190C4C
  if (crb(c,2)) { goto L_80190C5C; } // 80190C50
  c->r[0]=0u+0x00000000u; // 80190C54
  goto L_80190C70; // 80190C58
L_80190C5C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190C5C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80190C60
  c->r[3]=R32(c->r[3]+0x00000008u); // 80190C64
  c->r[0]=R16(c->r[3]+c->r[0]); // 80190C68
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80190C6C
L_80190C70:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190C70
  if (!crb(c,2)) { goto L_80190C80; } // 80190C74
  c->r[16]=0u+0x00001000u; // 80190C78
  goto L_8019146C; // 80190C7C
L_80190C80:;
  c->r[16]=0u+0x00000020u; // 80190C80
  goto L_8019146C; // 80190C84
L_80190C88:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80190C88
  c->r[0]=0u+0x00000001u; // 80190C8C
  if (crb(c,1)) { goto L_80190C98; } // 80190C90
  c->r[0]=0u+0x00000000u; // 80190C94
L_80190C98:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190C98
  if (crb(c,2)) { goto L_80190CA8; } // 80190C9C
  c->r[0]=0u+0x00000000u; // 80190CA0
  goto L_80190CBC; // 80190CA4
L_80190CA8:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190CA8
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80190CAC
  c->r[3]=R32(c->r[3]+0x00000008u); // 80190CB0
  c->r[0]=R16(c->r[3]+c->r[0]); // 80190CB4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80190CB8
L_80190CBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190CBC
  if (!crb(c,2)) { goto L_80190CCC; } // 80190CC0
  c->r[16]=0u+0x00000040u; // 80190CC4
  goto L_8019146C; // 80190CC8
L_80190CCC:;
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 80190CCC
  cmpu(c,0,c->r[0],0x00000014u); // 80190CD0
  if (!crb(c,0)) { goto L_80190D04; } // 80190CD4
  cmps(c,0,(int32_t)c->r[4],48); // 80190CD8
  if (!crb(c,2)) { goto L_80190CE8; } // 80190CDC
  cmps(c,0,(int32_t)c->r[0],0); // 80190CE0
  if (crb(c,2)) { goto L_80190D00; } // 80190CE4
L_80190CE8:;
  c->r[5]=R8(c->r[1]+0x0000006Cu); // 80190CE8
  c->r[0]=c->r[1]+0x00000068u; // 80190CEC
  c->r[3]=c->r[0]+c->r[5]; // 80190CF0
  c->r[0]=c->r[5]+0x00000001u; // 80190CF4
  W8(c->r[3]+0x00000005u,c->r[4]); // 80190CF8
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 80190CFC
L_80190D00:;
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 80190D00
L_80190D04:;
  c->r[12]=c->r[17]|c->r[17]; // 80190D04
  c->r[3]=c->r[18]|c->r[18]; // 80190D08
  c->r[4]=0u+0x00000000u; // 80190D0C
  c->r[5]=0u+0x00000000u; // 80190D10
  c->ctr=c->r[12]; // 80190D14
  c->r[30]=c->r[30]+0x00000001u; // 80190D18
  if (true) { c->lr=0x80190D20u; dispatch(c,c->ctr); } // 80190D1C
  c->r[4]=c->r[3]|c->r[3]; // 80190D20
  goto L_8019146C; // 80190D24
L_80190D28:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80190D28
  c->r[0]=0u+0x00000001u; // 80190D2C
  if (crb(c,1)) { goto L_80190D38; } // 80190D30
  c->r[0]=0u+0x00000000u; // 80190D34
L_80190D38:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190D38
  if (crb(c,2)) { goto L_80190D48; } // 80190D3C
  c->r[0]=c->r[4]|c->r[4]; // 80190D40
  goto L_80190D54; // 80190D44
L_80190D48:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190D48
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80190D4C
  c->r[0]=R8(c->r[3]+c->r[4]); // 80190D50
L_80190D54:;
  cmps(c,0,(int32_t)c->r[0],69); // 80190D54
  if (!crb(c,2)) { goto L_80190D84; } // 80190D58
  c->r[12]=c->r[17]|c->r[17]; // 80190D5C
  c->r[3]=c->r[18]|c->r[18]; // 80190D60
  c->r[16]=0u+0x00000080u; // 80190D64
  c->r[4]=0u+0x00000000u; // 80190D68
  c->r[5]=0u+0x00000000u; // 80190D6C
  c->ctr=c->r[12]; // 80190D70
  c->r[30]=c->r[30]+0x00000001u; // 80190D74
  if (true) { c->lr=0x80190D7Cu; dispatch(c,c->ctr); } // 80190D78
  c->r[4]=c->r[3]|c->r[3]; // 80190D7C
  goto L_8019146C; // 80190D80
L_80190D84:;
  c->r[16]=0u+0x00000800u; // 80190D84
  goto L_8019146C; // 80190D88
L_80190D8C:;
  cmps(c,0,(int32_t)c->r[4],43); // 80190D8C
  if (!crb(c,2)) { goto L_80190DB8; } // 80190D90
  c->r[12]=c->r[17]|c->r[17]; // 80190D94
  c->r[3]=c->r[18]|c->r[18]; // 80190D98
  c->r[4]=0u+0x00000000u; // 80190D9C
  c->r[5]=0u+0x00000000u; // 80190DA0
  c->ctr=c->r[12]; // 80190DA4
  c->r[30]=c->r[30]+0x00000001u; // 80190DA8
  if (true) { c->lr=0x80190DB0u; dispatch(c,c->ctr); } // 80190DAC
  c->r[4]=c->r[3]|c->r[3]; // 80190DB0
  goto L_80190DE8; // 80190DB4
L_80190DB8:;
  cmps(c,0,(int32_t)c->r[4],45); // 80190DB8
  if (!crb(c,2)) { goto L_80190DE8; } // 80190DBC
  c->r[12]=c->r[17]|c->r[17]; // 80190DC0
  c->r[3]=c->r[18]|c->r[18]; // 80190DC4
  c->r[4]=0u+0x00000000u; // 80190DC8
  c->r[5]=0u+0x00000000u; // 80190DCC
  c->ctr=c->r[12]; // 80190DD0
  c->r[30]=c->r[30]+0x00000001u; // 80190DD4
  if (true) { c->lr=0x80190DDCu; dispatch(c,c->ctr); } // 80190DD8
  c->r[0]=0u+0x00000001u; // 80190DDC
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80190DE0
  c->r[4]=c->r[3]|c->r[3]; // 80190DE4
L_80190DE8:;
  c->r[16]=0u+0x00000100u; // 80190DE8
  goto L_8019146C; // 80190DEC
L_80190DF0:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80190DF0
  c->r[0]=0u+0x00000001u; // 80190DF4
  if (crb(c,1)) { goto L_80190E00; } // 80190DF8
  c->r[0]=0u+0x00000000u; // 80190DFC
L_80190E00:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190E00
  if (crb(c,2)) { goto L_80190E10; } // 80190E04
  c->r[0]=0u+0x00000000u; // 80190E08
  goto L_80190E24; // 80190E0C
L_80190E10:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190E10
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80190E14
  c->r[3]=R32(c->r[3]+0x00000008u); // 80190E18
  c->r[0]=R16(c->r[3]+c->r[0]); // 80190E1C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80190E20
L_80190E24:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190E24
  if (!crb(c,2)) { goto L_80190E34; } // 80190E28
  c->r[16]=0u+0x00001000u; // 80190E2C
  goto L_8019146C; // 80190E30
L_80190E34:;
  cmps(c,0,(int32_t)c->r[4],48); // 80190E34
  if (!crb(c,2)) { goto L_80190E64; } // 80190E38
  c->r[12]=c->r[17]|c->r[17]; // 80190E3C
  c->r[3]=c->r[18]|c->r[18]; // 80190E40
  c->r[16]=0u+0x00000200u; // 80190E44
  c->r[4]=0u+0x00000000u; // 80190E48
  c->r[5]=0u+0x00000000u; // 80190E4C
  c->ctr=c->r[12]; // 80190E50
  c->r[30]=c->r[30]+0x00000001u; // 80190E54
  if (true) { c->lr=0x80190E5Cu; dispatch(c,c->ctr); } // 80190E58
  c->r[4]=c->r[3]|c->r[3]; // 80190E5C
  goto L_8019146C; // 80190E60
L_80190E64:;
  c->r[16]=0u+0x00000400u; // 80190E64
  goto L_8019146C; // 80190E68
L_80190E6C:;
  cmps(c,0,(int32_t)c->r[4],48); // 80190E6C
  if (!crb(c,2)) { goto L_80190E98; } // 80190E70
  c->r[12]=c->r[17]|c->r[17]; // 80190E74
  c->r[3]=c->r[18]|c->r[18]; // 80190E78
  c->r[4]=0u+0x00000000u; // 80190E7C
  c->r[5]=0u+0x00000000u; // 80190E80
  c->ctr=c->r[12]; // 80190E84
  c->r[30]=c->r[30]+0x00000001u; // 80190E88
  if (true) { c->lr=0x80190E90u; dispatch(c,c->ctr); } // 80190E8C
  c->r[4]=c->r[3]|c->r[3]; // 80190E90
  goto L_8019146C; // 80190E94
L_80190E98:;
  c->r[16]=0u+0x00000400u; // 80190E98
  goto L_8019146C; // 80190E9C
L_80190EA0:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80190EA0
  c->r[0]=0u+0x00000001u; // 80190EA4
  if (crb(c,1)) { goto L_80190EB0; } // 80190EA8
  c->r[0]=0u+0x00000000u; // 80190EAC
L_80190EB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190EB0
  if (crb(c,2)) { goto L_80190EC0; } // 80190EB4
  c->r[0]=0u+0x00000000u; // 80190EB8
  goto L_80190ED4; // 80190EBC
L_80190EC0:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80190EC0
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80190EC4
  c->r[3]=R32(c->r[3]+0x00000008u); // 80190EC8
  c->r[0]=R16(c->r[3]+c->r[0]); // 80190ECC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80190ED0
L_80190ED4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80190ED4
  if (!crb(c,2)) { goto L_80190EE4; } // 80190ED8
  c->r[16]=0u+0x00000800u; // 80190EDC
  goto L_8019146C; // 80190EE0
L_80190EE4:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)10); // 80190EE4
  c->r[3]=c->r[4]+c->r[0]; // 80190EE8
  c->r[28]=c->r[3]+0xFFFFFFD0u; // 80190EEC
  cmps(c,0,(int32_t)c->r[28],308); // 80190EF0
  if (!crb(c,1)) { goto L_80190F00; } // 80190EF4
  c->r[0]=0u+0x00000001u; // 80190EF8
  W32(c->r[19]+0x00000000u,c->r[0]); // 80190EFC
L_80190F00:;
  c->r[12]=c->r[17]|c->r[17]; // 80190F00
  c->r[3]=c->r[18]|c->r[18]; // 80190F04
  c->r[4]=0u+0x00000000u; // 80190F08
  c->r[5]=0u+0x00000000u; // 80190F0C
  c->ctr=c->r[12]; // 80190F10
  c->r[30]=c->r[30]+0x00000001u; // 80190F14
  if (true) { c->lr=0x80190F1Cu; dispatch(c,c->ctr); } // 80190F18
  c->r[4]=c->r[3]|c->r[3]; // 80190F1C
  goto L_8019146C; // 80190F20
L_80190F24:;
  cmps(c,0,(int32_t)c->r[31],16); // 80190F24
  if (crb(c,2)) { goto L_8019127C; } // 80190F28
  if (!crb(c,0)) { goto L_80190F60; } // 80190F2C
  cmps(c,0,(int32_t)c->r[31],4); // 80190F30
  if (crb(c,2)) { goto L_80191008; } // 80190F34
  if (!crb(c,0)) { goto L_80190F54; } // 80190F38
  cmps(c,0,(int32_t)c->r[31],2); // 80190F3C
  if (crb(c,2)) { goto L_80190FD4; } // 80190F40
  if (!crb(c,0)) { goto L_8019146C; } // 80190F44
  cmps(c,0,(int32_t)c->r[31],1); // 80190F48
  if (!crb(c,0)) { goto L_80190F90; } // 80190F4C
  goto L_8019146C; // 80190F50
L_80190F54:;
  cmps(c,0,(int32_t)c->r[31],8); // 80190F54
  if (crb(c,2)) { goto L_8019115C; } // 80190F58
  goto L_8019146C; // 80190F5C
L_80190F60:;
  cmps(c,0,(int32_t)c->r[31],128); // 80190F60
  if (crb(c,2)) { goto L_801913B8; } // 80190F64
  if (!crb(c,0)) { goto L_80190F84; } // 80190F68
  cmps(c,0,(int32_t)c->r[31],64); // 80190F6C
  if (crb(c,2)) { goto L_8019133C; } // 80190F70
  if (!crb(c,0)) { goto L_8019146C; } // 80190F74
  cmps(c,0,(int32_t)c->r[31],32); // 80190F78
  if (crb(c,2)) { goto L_801912E0; } // 80190F7C
  goto L_8019146C; // 80190F80
L_80190F84:;
  cmps(c,0,(int32_t)c->r[31],256); // 80190F84
  if (crb(c,2)) { goto L_801913EC; } // 80190F88
  goto L_8019146C; // 80190F8C
L_80190F90:;
  c->r[3]=c->r[1]+0x00000028u; // 80190F90
  c->r[4]=0u+0x00000000u; // 80190F94
  c->r[5]=0u+0x00000008u; // 80190F98
  c->lr=0x80190FA0u; f_80004688(c); // 80190F9C
  c->r[12]=c->r[17]|c->r[17]; // 80190FA0
  c->r[3]=c->r[18]|c->r[18]; // 80190FA4
  c->r[25]=c->r[1]+0x00000028u; // 80190FA8
  c->r[22]=0u+0x00000000u; // 80190FAC
  c->r[23]=0u+0x00000000u; // 80190FB0
  c->r[31]=0u+0x00000002u; // 80190FB4
  c->r[4]=0u+0x00000000u; // 80190FB8
  c->r[5]=0u+0x00000000u; // 80190FBC
  c->ctr=c->r[12]; // 80190FC0
  c->r[30]=c->r[30]+0x00000001u; // 80190FC4
  if (true) { c->lr=0x80190FCCu; dispatch(c,c->ctr); } // 80190FC8
  c->r[4]=c->r[3]|c->r[3]; // 80190FCC
  goto L_8019146C; // 80190FD0
L_80190FD4:;
  cmps(c,0,(int32_t)c->r[4],48); // 80190FD4
  if (!crb(c,2)) { goto L_80191000; } // 80190FD8
  c->r[12]=c->r[17]|c->r[17]; // 80190FDC
  c->r[3]=c->r[18]|c->r[18]; // 80190FE0
  c->r[4]=0u+0x00000000u; // 80190FE4
  c->r[5]=0u+0x00000000u; // 80190FE8
  c->ctr=c->r[12]; // 80190FEC
  c->r[30]=c->r[30]+0x00000001u; // 80190FF0
  if (true) { c->lr=0x80190FF8u; dispatch(c,c->ctr); } // 80190FF4
  c->r[4]=c->r[3]|c->r[3]; // 80190FF8
  goto L_8019146C; // 80190FFC
L_80191000:;
  c->r[31]=0u+0x00000004u; // 80191000
  goto L_8019146C; // 80191004
L_80191008:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80191008
  c->r[0]=0u+0x00000001u; // 8019100C
  if (crb(c,1)) { goto L_80191018; } // 80191010
  c->r[0]=0u+0x00000000u; // 80191014
L_80191018:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191018
  if (crb(c,2)) { goto L_80191028; } // 8019101C
  c->r[0]=0u+0x00000000u; // 80191020
  goto L_8019103C; // 80191024
L_80191028:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 80191028
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8019102C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191030
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191034
  c->r[0]=rotl(c->r[0],0)&0x00000400u; // 80191038
L_8019103C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019103C
  if (!crb(c,2)) { goto L_8019107C; } // 80191040
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[26]); // 80191044
  if (!crb(c,2)) { goto L_80191074; } // 80191048
  c->r[12]=c->r[17]|c->r[17]; // 8019104C
  c->r[3]=c->r[18]|c->r[18]; // 80191050
  c->r[31]=0u+0x00000008u; // 80191054
  c->r[4]=0u+0x00000000u; // 80191058
  c->r[5]=0u+0x00000000u; // 8019105C
  c->ctr=c->r[12]; // 80191060
  c->r[30]=c->r[30]+0x00000001u; // 80191064
  if (true) { c->lr=0x8019106Cu; dispatch(c,c->ctr); } // 80191068
  c->r[4]=c->r[3]|c->r[3]; // 8019106C
  goto L_8019146C; // 80191070
L_80191074:;
  c->r[31]=0u+0x00000010u; // 80191074
  goto L_8019146C; // 80191078
L_8019107C:;
  c->r[0]=0u+0x0000000Eu; // 8019107C
  cmpu(c,0,c->r[22],c->r[0]); // 80191080
  if (!crb(c,0)) { goto L_80191138; } // 80191084
  c->r[0]=rotl(c->r[23],1)&0x00000001u; // 80191088
  cmpu(c,0,c->r[4],0x000000FFu); // 8019108C
  c->r[0]=c->r[0]+c->r[23]; // 80191090
  c->r[3]=0u+0x00000001u; // 80191094
  c->r[0]=sraw(c,c->r[0],1); // 80191098
  c->r[22]=c->r[22]+0x00000001u; // 8019109C
  c->r[0]=R8(c->r[25]+c->r[0]); // 801910A0
  if (crb(c,1)) { goto L_801910AC; } // 801910A4
  c->r[3]=0u+0x00000000u; // 801910A8
L_801910AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801910AC
  if (crb(c,2)) { goto L_801910B8; } // 801910B0
  goto L_801910C4; // 801910B4
L_801910B8:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 801910B8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801910BC
  c->r[4]=R8(c->r[3]+c->r[4]); // 801910C0
L_801910C4:;
  cmps(c,0,(int32_t)c->r[4],65); // 801910C4
  c->r[6]=c->r[4]+0xFFFFFFD0u; // 801910C8
  if (crb(c,0)) { goto L_801910D4; } // 801910CC
  c->r[6]=c->r[4]+0xFFFFFFC9u; // 801910D0
L_801910D4:;
  c->r[5]=rotl(c->r[23],1)&0x00000001u; // 801910D4
  c->r[3]=rotl(c->r[23],0)&0x00000001u; // 801910D8
  c->r[4]=c->r[3]^c->r[5]; // 801910DC
  c->r[3]=rotl(c->r[6],4)&0x000000F0u; // 801910E0
  c->r[4]=c->r[4]-c->r[5]; cr0(c,c->r[4]); // 801910E4
  c->r[3]=c->r[0]|c->r[3]; // 801910E8
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 801910EC
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801910F0
  if (crb(c,2)) { goto L_80191100; } // 801910F4
  c->r[0]=c->r[0]|c->r[4]; // 801910F8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801910FC
L_80191100:;
  c->r[0]=rotl(c->r[23],1)&0x00000001u; // 80191100
  c->r[12]=c->r[17]|c->r[17]; // 80191104
  c->r[0]=c->r[0]+c->r[23]; // 80191108
  c->r[3]=c->r[18]|c->r[18]; // 8019110C
  c->r[0]=sraw(c,c->r[0],1); // 80191110
  c->r[4]=0u+0x00000000u; // 80191114
  W8(c->r[25]+c->r[0],c->r[5]); // 80191118
  c->r[5]=0u+0x00000000u; // 8019111C
  c->ctr=c->r[12]; // 80191120
  c->r[23]=c->r[23]+0x00000001u; // 80191124
  c->r[30]=c->r[30]+0x00000001u; // 80191128
  if (true) { c->lr=0x80191130u; dispatch(c,c->ctr); } // 8019112C
  c->r[4]=c->r[3]|c->r[3]; // 80191130
  goto L_8019146C; // 80191134
L_80191138:;
  c->r[12]=c->r[17]|c->r[17]; // 80191138
  c->r[3]=c->r[18]|c->r[18]; // 8019113C
  c->r[4]=0u+0x00000000u; // 80191140
  c->r[5]=0u+0x00000000u; // 80191144
  c->ctr=c->r[12]; // 80191148
  c->r[30]=c->r[30]+0x00000001u; // 8019114C
  if (true) { c->lr=0x80191154u; dispatch(c,c->ctr); } // 80191150
  c->r[4]=c->r[3]|c->r[3]; // 80191154
  goto L_8019146C; // 80191158
L_8019115C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 8019115C
  c->r[0]=0u+0x00000001u; // 80191160
  if (crb(c,1)) { goto L_8019116C; } // 80191164
  c->r[0]=0u+0x00000000u; // 80191168
L_8019116C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019116C
  if (crb(c,2)) { goto L_8019117C; } // 80191170
  c->r[0]=0u+0x00000000u; // 80191174
  goto L_80191190; // 80191178
L_8019117C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 8019117C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80191180
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191184
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191188
  c->r[0]=rotl(c->r[0],0)&0x00000400u; // 8019118C
L_80191190:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191190
  if (!crb(c,2)) { goto L_801911A0; } // 80191194
  c->r[31]=0u+0x00000010u; // 80191198
  goto L_8019146C; // 8019119C
L_801911A0:;
  c->r[0]=0u+0x0000000Eu; // 801911A0
  cmpu(c,0,c->r[22],c->r[0]); // 801911A4
  if (!crb(c,0)) { goto L_80191258; } // 801911A8
  c->r[0]=rotl(c->r[23],1)&0x00000001u; // 801911AC
  cmpu(c,0,c->r[4],0x000000FFu); // 801911B0
  c->r[0]=c->r[0]+c->r[23]; // 801911B4
  c->r[3]=0u+0x00000001u; // 801911B8
  c->r[0]=sraw(c,c->r[0],1); // 801911BC
  c->r[0]=R8(c->r[25]+c->r[0]); // 801911C0
  if (crb(c,1)) { goto L_801911CC; } // 801911C4
  c->r[3]=0u+0x00000000u; // 801911C8
L_801911CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801911CC
  if (crb(c,2)) { goto L_801911D8; } // 801911D0
  goto L_801911E4; // 801911D4
L_801911D8:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 801911D8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801911DC
  c->r[4]=R8(c->r[3]+c->r[4]); // 801911E0
L_801911E4:;
  cmps(c,0,(int32_t)c->r[4],65); // 801911E4
  c->r[6]=c->r[4]+0xFFFFFFD0u; // 801911E8
  if (crb(c,0)) { goto L_801911F4; } // 801911EC
  c->r[6]=c->r[4]+0xFFFFFFC9u; // 801911F0
L_801911F4:;
  c->r[5]=rotl(c->r[23],1)&0x00000001u; // 801911F4
  c->r[3]=rotl(c->r[23],0)&0x00000001u; // 801911F8
  c->r[4]=c->r[3]^c->r[5]; // 801911FC
  c->r[3]=rotl(c->r[6],4)&0x000000F0u; // 80191200
  c->r[4]=c->r[4]-c->r[5]; cr0(c,c->r[4]); // 80191204
  c->r[3]=c->r[0]|c->r[3]; // 80191208
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 8019120C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 80191210
  if (crb(c,2)) { goto L_80191220; } // 80191214
  c->r[0]=c->r[0]|c->r[4]; // 80191218
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8019121C
L_80191220:;
  c->r[0]=rotl(c->r[23],1)&0x00000001u; // 80191220
  c->r[12]=c->r[17]|c->r[17]; // 80191224
  c->r[0]=c->r[0]+c->r[23]; // 80191228
  c->r[3]=c->r[18]|c->r[18]; // 8019122C
  c->r[0]=sraw(c,c->r[0],1); // 80191230
  c->r[4]=0u+0x00000000u; // 80191234
  W8(c->r[25]+c->r[0],c->r[5]); // 80191238
  c->r[5]=0u+0x00000000u; // 8019123C
  c->ctr=c->r[12]; // 80191240
  c->r[23]=c->r[23]+0x00000001u; // 80191244
  c->r[30]=c->r[30]+0x00000001u; // 80191248
  if (true) { c->lr=0x80191250u; dispatch(c,c->ctr); } // 8019124C
  c->r[4]=c->r[3]|c->r[3]; // 80191250
  goto L_8019146C; // 80191254
L_80191258:;
  c->r[12]=c->r[17]|c->r[17]; // 80191258
  c->r[3]=c->r[18]|c->r[18]; // 8019125C
  c->r[4]=0u+0x00000000u; // 80191260
  c->r[5]=0u+0x00000000u; // 80191264
  c->ctr=c->r[12]; // 80191268
  c->r[30]=c->r[30]+0x00000001u; // 8019126C
  if (true) { c->lr=0x80191274u; dispatch(c,c->ctr); } // 80191270
  c->r[4]=c->r[3]|c->r[3]; // 80191274
  goto L_8019146C; // 80191278
L_8019127C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 8019127C
  c->r[0]=0u+0x00000001u; // 80191280
  if (crb(c,1)) { goto L_8019128C; } // 80191284
  c->r[0]=0u+0x00000000u; // 80191288
L_8019128C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019128C
  if (crb(c,2)) { goto L_8019129C; } // 80191290
  c->r[0]=c->r[4]|c->r[4]; // 80191294
  goto L_801912A8; // 80191298
L_8019129C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 8019129C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801912A0
  c->r[0]=R8(c->r[3]+c->r[4]); // 801912A4
L_801912A8:;
  cmps(c,0,(int32_t)c->r[0],80); // 801912A8
  if (!crb(c,2)) { goto L_801912D8; } // 801912AC
  c->r[12]=c->r[17]|c->r[17]; // 801912B0
  c->r[3]=c->r[18]|c->r[18]; // 801912B4
  c->r[31]=0u+0x00000020u; // 801912B8
  c->r[4]=0u+0x00000000u; // 801912BC
  c->r[5]=0u+0x00000000u; // 801912C0
  c->ctr=c->r[12]; // 801912C4
  c->r[30]=c->r[30]+0x00000001u; // 801912C8
  if (true) { c->lr=0x801912D0u; dispatch(c,c->ctr); } // 801912CC
  c->r[4]=c->r[3]|c->r[3]; // 801912D0
  goto L_8019146C; // 801912D4
L_801912D8:;
  c->r[16]=0u+0x00000800u; // 801912D8
  goto L_8019146C; // 801912DC
L_801912E0:;
  cmps(c,0,(int32_t)c->r[4],45); // 801912E0
  if (!crb(c,2)) { goto L_801912F4; } // 801912E4
  c->r[0]=0u+0x00000001u; // 801912E8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801912EC
  goto L_80191314; // 801912F0
L_801912F4:;
  cmps(c,0,(int32_t)c->r[4],43); // 801912F4
  if (crb(c,2)) { goto L_80191314; } // 801912F8
  c->r[12]=c->r[17]|c->r[17]; // 801912FC
  c->r[3]=c->r[18]|c->r[18]; // 80191300
  c->r[5]=0u+0x00000001u; // 80191304
  c->ctr=c->r[12]; // 80191308
  if (true) { c->lr=0x80191310u; dispatch(c,c->ctr); } // 8019130C
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80191310
L_80191314:;
  c->r[12]=c->r[17]|c->r[17]; // 80191314
  c->r[3]=c->r[18]|c->r[18]; // 80191318
  c->r[31]=0u+0x00000040u; // 8019131C
  c->r[4]=0u+0x00000000u; // 80191320
  c->r[5]=0u+0x00000000u; // 80191324
  c->ctr=c->r[12]; // 80191328
  c->r[30]=c->r[30]+0x00000001u; // 8019132C
  if (true) { c->lr=0x80191334u; dispatch(c,c->ctr); } // 80191330
  c->r[4]=c->r[3]|c->r[3]; // 80191334
  goto L_8019146C; // 80191338
L_8019133C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 8019133C
  c->r[0]=0u+0x00000001u; // 80191340
  if (crb(c,1)) { goto L_8019134C; } // 80191344
  c->r[0]=0u+0x00000000u; // 80191348
L_8019134C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019134C
  if (crb(c,2)) { goto L_8019135C; } // 80191350
  c->r[0]=0u+0x00000000u; // 80191354
  goto L_80191370; // 80191358
L_8019135C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 8019135C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80191360
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191364
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191368
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 8019136C
L_80191370:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191370
  if (!crb(c,2)) { goto L_80191380; } // 80191374
  c->r[16]=0u+0x00001000u; // 80191378
  goto L_8019146C; // 8019137C
L_80191380:;
  cmps(c,0,(int32_t)c->r[4],48); // 80191380
  if (!crb(c,2)) { goto L_801913B0; } // 80191384
  c->r[12]=c->r[17]|c->r[17]; // 80191388
  c->r[3]=c->r[18]|c->r[18]; // 8019138C
  c->r[31]=0u+0x00000080u; // 80191390
  c->r[4]=0u+0x00000000u; // 80191394
  c->r[5]=0u+0x00000000u; // 80191398
  c->ctr=c->r[12]; // 8019139C
  c->r[30]=c->r[30]+0x00000001u; // 801913A0
  if (true) { c->lr=0x801913A8u; dispatch(c,c->ctr); } // 801913A4
  c->r[4]=c->r[3]|c->r[3]; // 801913A8
  goto L_8019146C; // 801913AC
L_801913B0:;
  c->r[31]=0u+0x00000100u; // 801913B0
  goto L_8019146C; // 801913B4
L_801913B8:;
  cmps(c,0,(int32_t)c->r[4],48); // 801913B8
  if (!crb(c,2)) { goto L_801913E4; } // 801913BC
  c->r[12]=c->r[17]|c->r[17]; // 801913C0
  c->r[3]=c->r[18]|c->r[18]; // 801913C4
  c->r[4]=0u+0x00000000u; // 801913C8
  c->r[5]=0u+0x00000000u; // 801913CC
  c->ctr=c->r[12]; // 801913D0
  c->r[30]=c->r[30]+0x00000001u; // 801913D4
  if (true) { c->lr=0x801913DCu; dispatch(c,c->ctr); } // 801913D8
  c->r[4]=c->r[3]|c->r[3]; // 801913DC
  goto L_8019146C; // 801913E0
L_801913E4:;
  c->r[31]=0u+0x00000100u; // 801913E4
  goto L_8019146C; // 801913E8
L_801913EC:;
  cmpu(c,0,c->r[4],0x000000FFu); // 801913EC
  c->r[0]=0u+0x00000001u; // 801913F0
  if (crb(c,1)) { goto L_801913FC; } // 801913F4
  c->r[0]=0u+0x00000000u; // 801913F8
L_801913FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801913FC
  if (crb(c,2)) { goto L_8019140C; } // 80191400
  c->r[0]=0u+0x00000000u; // 80191404
  goto L_80191420; // 80191408
L_8019140C:;
  c->r[3]=R32(c->r[15]+0x00000038u); // 8019140C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80191410
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191414
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191418
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 8019141C
L_80191420:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191420
  if (!crb(c,2)) { goto L_80191430; } // 80191424
  c->r[16]=0u+0x00000800u; // 80191428
  goto L_8019146C; // 8019142C
L_80191430:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)10); // 80191430
  cmps(c,0,(int32_t)c->r[28],32767); // 80191434
  c->r[3]=c->r[4]+c->r[0]; // 80191438
  c->r[24]=c->r[3]+0xFFFFFFD0u; // 8019143C
  if (!crb(c,1)) { goto L_8019144C; } // 80191440
  c->r[0]=0u+0x00000001u; // 80191444
  W32(c->r[19]+0x00000000u,c->r[0]); // 80191448
L_8019144C:;
  c->r[12]=c->r[17]|c->r[17]; // 8019144C
  c->r[3]=c->r[18]|c->r[18]; // 80191450
  c->r[4]=0u+0x00000000u; // 80191454
  c->r[5]=0u+0x00000000u; // 80191458
  c->ctr=c->r[12]; // 8019145C
  c->r[30]=c->r[30]+0x00000001u; // 80191460
  if (true) { c->lr=0x80191468u; dispatch(c,c->ctr); } // 80191464
  c->r[4]=c->r[3]|c->r[3]; // 80191468
L_8019146C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8019146C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80191470
  if (crb(c,1)) { goto L_80191488; } // 80191474
  cmps(c,0,(int32_t)c->r[4],-1); // 80191478
  if (crb(c,2)) { goto L_80191488; } // 8019147C
  c->r[0]=rotl(c->r[16],0)&0x00001800u; cr0(c,c->r[0]); // 80191480
  if (crb(c,2)) { IRQCHK(c); goto L_801905B8; } // 80191484
L_80191488:;
  c->r[0]=c->r[16]+0x00000000u; // 80191488
  cmpu(c,0,c->r[0],0x00008000u); // 8019148C
  if (crb(c,2)) { goto L_801914A4; } // 80191490
  c->r[0]=c->r[16]&0x00000E2Cu; cr0(c,c->r[0]); // 80191494
  c->r[0]=cntlz(c->r[0]); // 80191498
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019149C
  goto L_801914C0; // 801914A0
L_801914A4:;
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 801914A4
  c->r[3]=0u+0x00000000u; // 801914A8
  cmps(c,0,(int32_t)c->r[0],2); // 801914AC
  if (!crb(c,1)) { goto L_801914BC; } // 801914B0
  c->r[0]=c->r[31]&0x0000018Eu; cr0(c,c->r[0]); // 801914B4
  if (!crb(c,2)) { goto L_801914C0; } // 801914B8
L_801914BC:;
  c->r[3]=0u+0x00000001u; // 801914BC
L_801914C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801914C0
  if (crb(c,2)) { goto L_801914D8; } // 801914C4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801914C8
  c->r[0]=0u+0x00000000u; // 801914CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801914D0
  goto L_801914E8; // 801914D4
L_801914D8:;
  c->r[3]=c->r[30]+c->r[29]; // 801914D8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801914DC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801914E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801914E4
L_801914E8:;
  c->r[12]=c->r[17]|c->r[17]; // 801914E8
  c->r[3]=c->r[18]|c->r[18]; // 801914EC
  c->r[5]=0u+0x00000001u; // 801914F0
  c->ctr=c->r[12]; // 801914F4
  if (true) { c->lr=0x801914FCu; dispatch(c,c->ctr); } // 801914F8
  cmps(c,0,(int32_t)c->r[31],0); // 801914FC
  if (!crb(c,2)) { goto L_80191650; } // 80191500
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 80191504
  cmps(c,0,(int32_t)c->r[0],0); // 80191508
  if (crb(c,2)) { goto L_80191514; } // 8019150C
  c->r[28]=0u-c->r[28]; // 80191510
L_80191514:;
  c->r[3]=R8(c->r[1]+0x0000006Cu); // 80191514
  c->r[4]=c->r[1]+0x0000006Du; // 80191518
  c->r[4]=c->r[4]+c->r[3]; // 8019151C
  goto L_80191528; // 80191520
L_80191524:;
  c->r[27]=c->r[27]+0x00000001u; // 80191524
L_80191528:;
  cmps(c,0,(int32_t)c->r[3],0); // 80191528
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8019152C
  if (crb(c,2)) { goto L_80191540; } // 80191530
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 80191534
  cmpu(c,0,c->r[0],0x00000030u); // 80191538
  if (crb(c,2)) { IRQCHK(c); goto L_80191524; } // 8019153C
L_80191540:;
  c->r[0]=c->r[3]+0x00000001u; // 80191540
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 80191544
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[4]); // 80191548
  if (!crb(c,2)) { goto L_80191564; } // 8019154C
  c->r[3]=c->r[1]+0x0000006Du; // 80191550
  c->r[0]=0u+0x00000030u; // 80191554
  W8(c->r[3]+c->r[4],c->r[0]); // 80191558
  c->r[0]=c->r[4]+0x00000001u; // 8019155C
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 80191560
L_80191564:;
  c->r[0]=c->r[28]+0x00000134u; // 80191564
  cmpu(c,0,c->r[0],0x00000268u); // 80191568
  if (!crb(c,1)) { goto L_801915A4; } // 8019156C
  c->r[0]=R32(c->r[19]+0x00000000u); // 80191570
  cmps(c,0,(int32_t)c->r[0],0); // 80191574
  if (!crb(c,2)) { goto L_8019159C; } // 80191578
  c->r[0]=R8(c->r[1]+0x0000006Du); // 8019157C
  cmpu(c,0,c->r[0],0x00000030u); // 80191580
  if (!crb(c,2)) { goto L_8019159C; } // 80191584
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 80191588
  cmps(c,0,(int32_t)c->r[0],0); // 8019158C
  if (!crb(c,2)) { goto L_8019159C; } // 80191590
  {uint32_t ea=c->r[2]+0xFFFF8F18u; c->f[1]=RF64(ea);} // 80191594
  goto L_801917CC; // 80191598
L_8019159C:;
  c->r[0]=0u+0x00000001u; // 8019159C
  W32(c->r[19]+0x00000000u,c->r[0]); // 801915A0
L_801915A4:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 801915A4
  c->r[28]=c->r[28]+c->r[27]; // 801915A8
  cmps(c,0,(int32_t)c->r[0],0); // 801915AC
  if (crb(c,2)) { goto L_801915EC; } // 801915B0
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 801915B4
  cmps(c,0,(int32_t)c->r[0],0); // 801915B8
  if (crb(c,2)) { goto L_801915C8; } // 801915BC
  {uint32_t ea=c->r[2]+0xFFFF8F18u; c->f[1]=RF64(ea);} // 801915C0
  goto L_801917CC; // 801915C4
L_801915C8:;
  cmps(c,0,(int32_t)c->r[14],0); // 801915C8
  if (crb(c,2)) { goto L_801915E0; } // 801915CC
  c->r[3]=0u+0x80440000u; // 801915D0
  {uint32_t ea=c->r[3]+0xFFFF8A70u; c->f[0]=RF64(ea);} // 801915D4
  c->f[1]=-c->f[0]; // 801915D8
  goto L_801917CC; // 801915DC
L_801915E0:;
  c->r[3]=0u+0x80440000u; // 801915E0
  {uint32_t ea=c->r[3]+0xFFFF8A70u; c->f[1]=RF64(ea);} // 801915E4
  goto L_801917CC; // 801915E8
L_801915EC:;
  W16(c->r[1]+0x0000006Au,c->r[28]); // 801915EC
  c->r[3]=c->r[1]+0x00000068u; // 801915F0
  c->lr=0x801915F8u; f_8018A3FC(c); // 801915F4
  {uint32_t ea=c->r[2]+0xFFFF8F18u; c->f[0]=RF64(ea);} // 801915F8
  fcmp(c,0,c->f[0],c->f[1]); // 801915FC
  if (crb(c,2)) { goto L_8019161C; } // 80191600
  {uint32_t ea=c->r[2]+0xFFFF8F20u; c->f[0]=RF64(ea);} // 80191604
  fcmp(c,0,c->f[1],c->f[0]); // 80191608
  if (!crb(c,0)) { goto L_8019161C; } // 8019160C
  c->r[0]=0u+0x00000001u; // 80191610
  W32(c->r[19]+0x00000000u,c->r[0]); // 80191614
  goto L_80191638; // 80191618
L_8019161C:;
  {uint32_t ea=c->r[2]+0xFFFF8F28u; c->f[0]=RF64(ea);} // 8019161C
  fcmp(c,0,c->f[1],c->f[0]); // 80191620
  if (!crb(c,1)) { goto L_80191638; } // 80191624
  c->r[0]=0u+0x00000001u; // 80191628
  W32(c->r[19]+0x00000000u,c->r[0]); // 8019162C
  c->r[3]=0u+0x80440000u; // 80191630
  {uint32_t ea=c->r[3]+0xFFFF8A70u; c->f[1]=RF64(ea);} // 80191634
L_80191638:;
  cmps(c,0,(int32_t)c->r[14],0); // 80191638
  if (crb(c,2)) { goto L_801917CC; } // 8019163C
  c->r[0]=c->r[16]&0x00000E2Cu; cr0(c,c->r[0]); // 80191640
  if (crb(c,2)) { goto L_801917CC; } // 80191644
  c->f[1]=-c->f[1]; // 80191648
  goto L_801917CC; // 8019164C
L_80191650:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80191650
  c->r[3]=c->r[1]+0x00000018u; // 80191654
  cmps(c,0,(int32_t)c->r[0],0); // 80191658
  if (crb(c,2)) { goto L_80191664; } // 8019165C
  c->r[24]=0u-c->r[24]; // 80191660
L_80191664:;
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 80191664
  c->r[5]=R8(c->r[1]+0x00000028u); // 80191668
  c->r[24]=c->r[24]+c->r[0]; // 8019166C
  c->r[6]=0u+0x00000000u; // 80191670
  c->r[4]=0u+0x00000080u; // 80191674
  goto L_80191684; // 80191678
L_8019167C:;
  c->r[6]=c->r[6]+0x00000001u; // 8019167C
  c->r[24]=c->r[24]+0xFFFFFFFFu; // 80191680
L_80191684:;
  cmpu(c,0,c->r[6],0x00000004u); // 80191684
  if (!crb(c,0)) { goto L_80191698; } // 80191688
  c->r[0]=sraw(c,c->r[4],(c->r[6])&63); // 8019168C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80191690
  if (crb(c,2)) { IRQCHK(c); goto L_8019167C; } // 80191694
L_80191698:;
  c->r[5]=addc(c,c->r[6],0x00000001u,0); cr0(c,c->r[5]); // 80191698
  c->r[24]=c->r[24]+0xFFFFFFFFu; // 8019169C
  if (crb(c,2)) { goto L_801916EC; } // 801916A0
  c->r[25]=c->r[1]+0x0000002Fu; // 801916A4
  c->r[4]=c->r[1]+0x00000028u; // 801916A8
  cmpu(c,0,c->r[25],c->r[4]); // 801916AC
  c->r[7]=0u+0x00000000u; // 801916B0
  if (crb(c,0)) { goto L_801916EC; } // 801916B4
  c->r[0]=c->r[25]+0x00000001u; // 801916B8
  c->r[6]=addc(c,~c->r[5],0x00000008u,1); // 801916BC
  c->r[0]=c->r[0]-c->r[4]; // 801916C0
  c->ctr=c->r[0]; // 801916C4
  if (crb(c,0)) { goto L_801916EC; } // 801916C8
L_801916CC:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 801916CC
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801916D0
  c->r[0]=sraw(c,c->r[0],(c->r[6])&63); // 801916D4
  c->r[4]=c->r[7]|c->r[4]; // 801916D8
  W8(c->r[25]+0x00000000u,c->r[4]); // 801916DC
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801916E0
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 801916E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801916CC; } // 801916E8
L_801916EC:;
  c->r[4]=0u+0x00000000u; // 801916EC
  c->r[5]=0u+0x00000008u; // 801916F0
  c->lr=0x801916F8u; f_80004688(c); // 801916F4
  c->r[0]=0u+0x00000007u; // 801916F8
  c->r[4]=c->r[1]+0x00000028u; // 801916FC
  c->r[3]=c->r[1]+0x00000019u; // 80191700
  c->r[8]=0u+0x00000000u; // 80191704
  c->r[7]=0u+0x000000FFu; // 80191708
  c->ctr=c->r[0]; // 8019170C
L_80191710:;
  c->r[0]=c->r[8]+0x00000008u; // 80191710
  c->r[9]=R8(c->r[4]+0x00000000u); // 80191714
  cmpu(c,0,c->r[0],0x00000034u); // 80191718
  c->r[5]=c->r[8]+0x0000000Cu; // 8019171C
  if (!crb(c,1)) { goto L_80191734; } // 80191720
  c->r[0]=addc(c,~c->r[8],0x00000034u,1); // 80191724
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]<<((c->r[0])&31)); // 80191728
  c->r[0]=c->r[9]&c->r[0]; // 8019172C
  c->r[9]=rotl(c->r[0],0)&0x000000FFu; // 80191730
L_80191734:;
  c->r[10]=rotl(c->r[5],0)&0x00000007u; // 80191734
  c->r[6]=R8(c->r[3]+0x00000000u); // 80191738
  c->r[0]=sraw(c,c->r[9],(c->r[10])&63); // 8019173C
  c->r[4]=c->r[4]+0x00000001u; // 80191740
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 80191744
  c->r[8]=c->r[8]+0x00000008u; // 80191748
  c->r[5]=c->r[6]|c->r[5]; // 8019174C
  W8(c->r[3]+0x00000000u,c->r[5]); // 80191750
  c->r[0]=addc(c,~c->r[10],0x00000008u,1); // 80191754
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[9]<<((c->r[0])&31)); // 80191758
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 8019175C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80191760
  c->r[0]=c->r[5]|c->r[0]; // 80191764
  W8(c->r[3]+0x00000000u,c->r[0]); // 80191768
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80191710; } // 8019176C
  c->r[3]=c->r[28]+c->r[24]; // 80191770
  c->r[24]=c->r[3]+0x000003FFu; // 80191774
  c->r[0]=rotl(c->r[24],0)&0xFFFFF800u; cr0(c,c->r[0]); // 80191778
  if (crb(c,2)) { goto L_80191790; } // 8019177C
  c->r[0]=0u+0x00000001u; // 80191780
  W32(c->r[19]+0x00000000u,c->r[0]); // 80191784
  {uint32_t ea=c->r[2]+0xFFFF8F18u; c->f[1]=RF64(ea);} // 80191788
  goto L_801917CC; // 8019178C
L_80191790:;
  c->r[24]=rotl(c->r[24],21)&0xFFE00000u; // 80191790
  c->r[5]=R8(c->r[1]+0x00000018u); // 80191794
  c->r[4]=rotl(c->r[24],7)&0x0000007Fu; // 80191798
  c->r[3]=R8(c->r[1]+0x00000019u); // 8019179C
  c->r[0]=rotl(c->r[24],15)&0x00007FFFu; // 801917A0
  cmps(c,0,(int32_t)c->r[14],0); // 801917A4
  c->r[4]=c->r[5]|c->r[4]; // 801917A8
  W8(c->r[1]+0x00000018u,c->r[4]); // 801917AC
  c->r[0]=c->r[3]|c->r[0]; // 801917B0
  W8(c->r[1]+0x00000019u,c->r[0]); // 801917B4
  if (crb(c,2)) { goto L_801917C8; } // 801917B8
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801917BC
  c->r[0]=c->r[0]|0x00000080u; // 801917C0
  W8(c->r[1]+0x00000018u,c->r[0]); // 801917C4
L_801917C8:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801917C8
L_801917CC:;
  c->r[11]=c->r[1]+0x000000F0u; // 801917CC
  c->lr=0x801917D4u; f_80185EEC(c); // 801917D0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801917D4
  c->lr=c->r[0]; // 801917D8
  c->r[1]=c->r[1]+0x000000F0u; // 801917DC
  return; // 801917E0
}

// fn_801917E4
void f_801917E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801917E4
  c->r[0]=c->lr; // 801917E8
  c->r[6]=0u+0x80000000u; // 801917EC
  c->r[5]=0u+0x80190000u; // 801917F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801917F4
  c->r[0]=0u+0x00000000u; // 801917F8
  c->r[7]=c->r[1]+0x00000008u; // 801917FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80191800
  c->r[31]=c->r[4]|c->r[4]; // 80191804
  c->r[4]=c->r[5]+0xFFFFFD84u; // 80191808
  c->r[5]=c->r[1]+0x00000010u; // 8019180C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80191810
  c->r[30]=c->r[3]|c->r[3]; // 80191814
  W32(c->r[1]+0x00000010u,c->r[3]); // 80191818
  c->r[3]=c->r[6]+0xFFFFFFFFu; // 8019181C
  c->r[6]=c->r[1]+0x0000000Cu; // 80191820
  W32(c->r[1]+0x00000014u,c->r[0]); // 80191824
  c->lr=0x8019182Cu; f_801904C4(c); // 80191828
  cmps(c,0,(int32_t)c->r[31],0); // 8019182C
  if (crb(c,2)) { goto L_80191840; } // 80191830
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80191834
  c->r[0]=c->r[30]+c->r[0]; // 80191838
  W32(c->r[31]+0x00000000u,c->r[0]); // 8019183C
L_80191840:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80191840
  cmps(c,0,(int32_t)c->r[0],0); // 80191844
  if (crb(c,2)) { goto L_80191854; } // 80191848
  c->r[0]=0u+0x00000022u; // 8019184C
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80191850
L_80191854:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80191854
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80191858
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019185C
  c->lr=c->r[0]; // 80191860
  c->r[1]=c->r[1]+0x00000020u; // 80191864
  return; // 80191868
}

// fn_8019186C
void f_8019186C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019186C
  c->r[0]=c->lr; // 80191870
  cmps(c,0,(int32_t)c->r[3],0); // 80191874
  W32(c->r[1]+0x00000054u,c->r[0]); // 80191878
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019187C
  c->r[27]=0u+0x00000000u; // 80191880
  c->r[17]=c->r[3]|c->r[3]; // 80191884
  c->r[18]=c->r[4]|c->r[4]; // 80191888
  c->r[19]=c->r[5]|c->r[5]; // 8019188C
  c->r[20]=c->r[6]|c->r[6]; // 80191890
  c->r[21]=c->r[7]|c->r[7]; // 80191894
  c->r[22]=c->r[8]|c->r[8]; // 80191898
  c->r[23]=c->r[9]|c->r[9]; // 8019189C
  c->r[28]=0u+0x00000001u; // 801918A0
  c->r[26]=0u+0x00000000u; // 801918A4
  c->r[25]=0u+0x00000000u; // 801918A8
  c->r[24]=0u+0x00000000u; // 801918AC
  W32(c->r[9]+0x00000000u,c->r[27]); // 801918B0
  W32(c->r[8]+0x00000000u,c->r[27]); // 801918B4
  if (crb(c,0)) { goto L_801918D4; } // 801918B8
  cmps(c,0,(int32_t)c->r[3],1); // 801918BC
  if (crb(c,2)) { goto L_801918D4; } // 801918C0
  cmps(c,0,(int32_t)c->r[3],36); // 801918C4
  if (crb(c,1)) { goto L_801918D4; } // 801918C8
  cmps(c,0,(int32_t)c->r[4],1); // 801918CC
  if (!crb(c,0)) { goto L_801918DC; } // 801918D0
L_801918D4:;
  c->r[28]=0u+0x00000040u; // 801918D4
  goto L_801918FC; // 801918D8
L_801918DC:;
  c->r[12]=c->r[19]|c->r[19]; // 801918DC
  c->r[3]=c->r[20]|c->r[20]; // 801918E0
  c->r[4]=0u+0x00000000u; // 801918E4
  c->r[5]=0u+0x00000000u; // 801918E8
  c->ctr=c->r[12]; // 801918EC
  c->r[27]=0u+0x00000001u; // 801918F0
  if (true) { c->lr=0x801918F8u; dispatch(c,c->ctr); } // 801918F4
  c->r[4]=c->r[3]|c->r[3]; // 801918F8
L_801918FC:;
  cmps(c,0,(int32_t)c->r[17],0); // 801918FC
  if (crb(c,2)) { goto L_8019190C; } // 80191900
  c->r[0]=0u+0xFFFFFFFFu; // 80191904
  c->r[24]=divwu(c->r[0],c->r[17]); // 80191908
L_8019190C:;
  c->r[3]=0u+0x80330000u; // 8019190C
  c->r[30]=0u+0x00000001u; // 80191910
  c->r[31]=0u+0xFFFFFFFFu; // 80191914
  c->r[29]=c->r[3]+0x000006B0u; // 80191918
  goto L_80191C1C; // 8019191C
L_80191920:;
  cmps(c,0,(int32_t)c->r[28],1); // 80191920
  if (crb(c,2)) { goto L_8019194C; } // 80191924
  cmps(c,0,(int32_t)c->r[28],2); // 80191928
  if (crb(c,2)) { goto L_80191A0C; } // 8019192C
  cmps(c,0,(int32_t)c->r[28],4); // 80191930
  if (crb(c,2)) { goto L_80191A54; } // 80191934
  cmps(c,0,(int32_t)c->r[28],8); // 80191938
  if (crb(c,2)) { goto L_80191AA4; } // 8019193C
  cmps(c,0,(int32_t)c->r[28],16); // 80191940
  if (crb(c,2)) { goto L_80191AA4; } // 80191944
  goto L_80191C1C; // 80191948
L_8019194C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 8019194C
  c->r[0]=0u+0x00000001u; // 80191950
  if (crb(c,1)) { goto L_8019195C; } // 80191954
  c->r[0]=0u+0x00000000u; // 80191958
L_8019195C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019195C
  if (crb(c,2)) { goto L_8019196C; } // 80191960
  c->r[0]=0u+0x00000000u; // 80191964
  goto L_80191980; // 80191968
L_8019196C:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 8019196C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80191970
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191974
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191978
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 8019197C
L_80191980:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191980
  if (crb(c,2)) { goto L_801919AC; } // 80191984
  c->r[12]=c->r[19]|c->r[19]; // 80191988
  c->r[3]=c->r[20]|c->r[20]; // 8019198C
  c->r[4]=0u+0x00000000u; // 80191990
  c->r[5]=0u+0x00000000u; // 80191994
  c->ctr=c->r[12]; // 80191998
  if (true) { c->lr=0x801919A0u; dispatch(c,c->ctr); } // 8019199C
  c->r[4]=c->r[3]|c->r[3]; // 801919A0
  c->r[26]=c->r[26]+0x00000001u; // 801919A4
  goto L_80191C1C; // 801919A8
L_801919AC:;
  cmps(c,0,(int32_t)c->r[4],43); // 801919AC
  if (!crb(c,2)) { goto L_801919D8; } // 801919B0
  c->r[12]=c->r[19]|c->r[19]; // 801919B4
  c->r[3]=c->r[20]|c->r[20]; // 801919B8
  c->r[4]=0u+0x00000000u; // 801919BC
  c->r[5]=0u+0x00000000u; // 801919C0
  c->ctr=c->r[12]; // 801919C4
  c->r[27]=c->r[27]+0x00000001u; // 801919C8
  if (true) { c->lr=0x801919D0u; dispatch(c,c->ctr); } // 801919CC
  c->r[4]=c->r[3]|c->r[3]; // 801919D0
  goto L_80191A04; // 801919D4
L_801919D8:;
  cmps(c,0,(int32_t)c->r[4],45); // 801919D8
  if (!crb(c,2)) { goto L_80191A04; } // 801919DC
  c->r[12]=c->r[19]|c->r[19]; // 801919E0
  c->r[3]=c->r[20]|c->r[20]; // 801919E4
  c->r[4]=0u+0x00000000u; // 801919E8
  c->r[5]=0u+0x00000000u; // 801919EC
  c->ctr=c->r[12]; // 801919F0
  c->r[27]=c->r[27]+0x00000001u; // 801919F4
  if (true) { c->lr=0x801919FCu; dispatch(c,c->ctr); } // 801919F8
  c->r[4]=c->r[3]|c->r[3]; // 801919FC
  W32(c->r[22]+0x00000000u,c->r[30]); // 80191A00
L_80191A04:;
  c->r[28]=0u+0x00000002u; // 80191A04
  goto L_80191C1C; // 80191A08
L_80191A0C:;
  cmps(c,0,(int32_t)c->r[17],0); // 80191A0C
  if (crb(c,2)) { goto L_80191A1C; } // 80191A10
  cmps(c,0,(int32_t)c->r[17],16); // 80191A14
  if (!crb(c,2)) { goto L_80191A4C; } // 80191A18
L_80191A1C:;
  cmps(c,0,(int32_t)c->r[4],48); // 80191A1C
  if (!crb(c,2)) { goto L_80191A4C; } // 80191A20
  c->r[12]=c->r[19]|c->r[19]; // 80191A24
  c->r[3]=c->r[20]|c->r[20]; // 80191A28
  c->r[28]=0u+0x00000004u; // 80191A2C
  c->r[4]=0u+0x00000000u; // 80191A30
  c->r[5]=0u+0x00000000u; // 80191A34
  c->ctr=c->r[12]; // 80191A38
  c->r[27]=c->r[27]+0x00000001u; // 80191A3C
  if (true) { c->lr=0x80191A44u; dispatch(c,c->ctr); } // 80191A40
  c->r[4]=c->r[3]|c->r[3]; // 80191A44
  goto L_80191C1C; // 80191A48
L_80191A4C:;
  c->r[28]=0u+0x00000008u; // 80191A4C
  goto L_80191C1C; // 80191A50
L_80191A54:;
  cmps(c,0,(int32_t)c->r[4],88); // 80191A54
  if (crb(c,2)) { goto L_80191A64; } // 80191A58
  cmps(c,0,(int32_t)c->r[4],120); // 80191A5C
  if (!crb(c,2)) { goto L_80191A90; } // 80191A60
L_80191A64:;
  c->r[12]=c->r[19]|c->r[19]; // 80191A64
  c->r[3]=c->r[20]|c->r[20]; // 80191A68
  c->r[17]=0u+0x00000010u; // 80191A6C
  c->r[28]=0u+0x00000008u; // 80191A70
  c->r[4]=0u+0x00000000u; // 80191A74
  c->r[5]=0u+0x00000000u; // 80191A78
  c->ctr=c->r[12]; // 80191A7C
  c->r[27]=c->r[27]+0x00000001u; // 80191A80
  if (true) { c->lr=0x80191A88u; dispatch(c,c->ctr); } // 80191A84
  c->r[4]=c->r[3]|c->r[3]; // 80191A88
  goto L_80191C1C; // 80191A8C
L_80191A90:;
  cmps(c,0,(int32_t)c->r[17],0); // 80191A90
  if (!crb(c,2)) { goto L_80191A9C; } // 80191A94
  c->r[17]=0u+0x00000008u; // 80191A98
L_80191A9C:;
  c->r[28]=0u+0x00000010u; // 80191A9C
  goto L_80191C1C; // 80191AA0
L_80191AA4:;
  cmps(c,0,(int32_t)c->r[17],0); // 80191AA4
  if (!crb(c,2)) { goto L_80191AB0; } // 80191AA8
  c->r[17]=0u+0x0000000Au; // 80191AAC
L_80191AB0:;
  cmps(c,0,(int32_t)c->r[24],0); // 80191AB0
  if (!crb(c,2)) { goto L_80191ABC; } // 80191AB4
  c->r[24]=divwu(c->r[31],c->r[17]); // 80191AB8
L_80191ABC:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80191ABC
  c->r[0]=0u+0x00000001u; // 80191AC0
  if (crb(c,1)) { goto L_80191ACC; } // 80191AC4
  c->r[0]=0u+0x00000000u; // 80191AC8
L_80191ACC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191ACC
  if (crb(c,2)) { goto L_80191ADC; } // 80191AD0
  c->r[0]=0u+0x00000000u; // 80191AD4
  goto L_80191AF0; // 80191AD8
L_80191ADC:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191ADC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80191AE0
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191AE4
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191AE8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80191AEC
L_80191AF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191AF0
  if (crb(c,2)) { goto L_80191B1C; } // 80191AF4
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 80191AF8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[17]); // 80191AFC
  if (crb(c,0)) { goto L_80191BD4; } // 80191B00
  cmps(c,0,(int32_t)c->r[28],16); // 80191B04
  c->r[28]=0u+0x00000040u; // 80191B08
  if (!crb(c,2)) { goto L_80191B14; } // 80191B0C
  c->r[28]=0u+0x00000020u; // 80191B10
L_80191B14:;
  c->r[4]=c->r[4]+0x00000030u; // 80191B14
  goto L_80191C1C; // 80191B18
L_80191B1C:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80191B1C
  c->r[0]=0u+0x00000001u; // 80191B20
  if (crb(c,1)) { goto L_80191B2C; } // 80191B24
  c->r[0]=0u+0x00000000u; // 80191B28
L_80191B2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191B2C
  if (crb(c,2)) { goto L_80191B3C; } // 80191B30
  c->r[0]=0u+0x00000000u; // 80191B34
  goto L_80191B50; // 80191B38
L_80191B3C:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191B3C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80191B40
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191B44
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191B48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80191B4C
L_80191B50:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191B50
  if (crb(c,2)) { goto L_80191B90; } // 80191B54
  cmpu(c,0,c->r[4],0x000000FFu); // 80191B58
  c->r[0]=0u+0x00000001u; // 80191B5C
  if (crb(c,1)) { goto L_80191B68; } // 80191B60
  c->r[0]=0u+0x00000000u; // 80191B64
L_80191B68:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191B68
  if (crb(c,2)) { goto L_80191B78; } // 80191B6C
  c->r[3]=c->r[4]|c->r[4]; // 80191B70
  goto L_80191B84; // 80191B74
L_80191B78:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191B78
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80191B7C
  c->r[3]=R8(c->r[3]+c->r[4]); // 80191B80
L_80191B84:;
  c->r[0]=c->r[3]+0xFFFFFFC9u; // 80191B84
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[17]); // 80191B88
  if (crb(c,0)) { goto L_80191BA8; } // 80191B8C
L_80191B90:;
  cmps(c,0,(int32_t)c->r[28],16); // 80191B90
  if (!crb(c,2)) { goto L_80191BA0; } // 80191B94
  c->r[28]=0u+0x00000020u; // 80191B98
  goto L_80191C1C; // 80191B9C
L_80191BA0:;
  c->r[28]=0u+0x00000040u; // 80191BA0
  goto L_80191C1C; // 80191BA4
L_80191BA8:;
  cmpu(c,0,c->r[4],0x000000FFu); // 80191BA8
  c->r[0]=0u+0x00000001u; // 80191BAC
  if (crb(c,1)) { goto L_80191BB8; } // 80191BB0
  c->r[0]=0u+0x00000000u; // 80191BB4
L_80191BB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191BB8
  if (crb(c,2)) { goto L_80191BC4; } // 80191BBC
  goto L_80191BD0; // 80191BC0
L_80191BC4:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191BC4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80191BC8
  c->r[4]=R8(c->r[3]+c->r[4]); // 80191BCC
L_80191BD0:;
  c->r[4]=c->r[4]+0xFFFFFFC9u; // 80191BD0
L_80191BD4:;
  cmpu(c,0,c->r[25],c->r[24]); // 80191BD4
  if (!crb(c,1)) { goto L_80191BE0; } // 80191BD8
  W32(c->r[23]+0x00000000u,c->r[30]); // 80191BDC
L_80191BE0:;
  c->r[25]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[17]); // 80191BE0
  c->r[0]=addc(c,~c->r[25],0xFFFFFFFFu,1); // 80191BE4
  cmpu(c,0,c->r[4],c->r[0]); // 80191BE8
  if (!crb(c,1)) { goto L_80191BF4; } // 80191BEC
  W32(c->r[23]+0x00000000u,c->r[30]); // 80191BF0
L_80191BF4:;
  c->r[12]=c->r[19]|c->r[19]; // 80191BF4
  c->r[25]=c->r[25]+c->r[4]; // 80191BF8
  c->r[3]=c->r[20]|c->r[20]; // 80191BFC
  c->r[28]=0u+0x00000010u; // 80191C00
  c->r[4]=0u+0x00000000u; // 80191C04
  c->r[5]=0u+0x00000000u; // 80191C08
  c->ctr=c->r[12]; // 80191C0C
  c->r[27]=c->r[27]+0x00000001u; // 80191C10
  if (true) { c->lr=0x80191C18u; dispatch(c,c->ctr); } // 80191C14
  c->r[4]=c->r[3]|c->r[3]; // 80191C18
L_80191C1C:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[18]); // 80191C1C
  if (crb(c,1)) { goto L_80191C34; } // 80191C20
  cmps(c,0,(int32_t)c->r[4],-1); // 80191C24
  if (crb(c,2)) { goto L_80191C34; } // 80191C28
  c->r[0]=rotl(c->r[28],0)&0x00000060u; cr0(c,c->r[0]); // 80191C2C
  if (crb(c,2)) { IRQCHK(c); goto L_80191920; } // 80191C30
L_80191C34:;
  c->r[0]=c->r[28]&0x00000034u; cr0(c,c->r[0]); // 80191C34
  if (!crb(c,2)) { goto L_80191C48; } // 80191C38
  c->r[25]=0u+0x00000000u; // 80191C3C
  W32(c->r[21]+0x00000000u,c->r[25]); // 80191C40
  goto L_80191C54; // 80191C44
L_80191C48:;
  c->r[3]=c->r[27]+c->r[26]; // 80191C48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80191C4C
  W32(c->r[21]+0x00000000u,c->r[0]); // 80191C50
L_80191C54:;
  c->r[12]=c->r[19]|c->r[19]; // 80191C54
  c->r[3]=c->r[20]|c->r[20]; // 80191C58
  c->r[5]=0u+0x00000001u; // 80191C5C
  c->ctr=c->r[12]; // 80191C60
  if (true) { c->lr=0x80191C68u; dispatch(c,c->ctr); } // 80191C64
  c->r[3]=c->r[25]|c->r[25]; // 80191C68
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80191C6C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80191C70
  c->lr=c->r[0]; // 80191C74
  c->r[1]=c->r[1]+0x00000050u; // 80191C78
  return; // 80191C7C
}

// fn_80191C80
void f_80191C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80191C80
  c->r[0]=c->lr; // 80191C84
  cmps(c,0,(int32_t)c->r[3],0); // 80191C88
  W32(c->r[1]+0x00000064u,c->r[0]); // 80191C8C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80191C90
  c->r[27]=0u+0x00000000u; // 80191C94
  c->r[15]=c->r[3]|c->r[3]; // 80191C98
  c->r[16]=c->r[4]|c->r[4]; // 80191C9C
  W32(c->r[1]+0x00000008u,c->r[7]); // 80191CA0
  c->r[17]=c->r[5]|c->r[5]; // 80191CA4
  c->r[18]=c->r[6]|c->r[6]; // 80191CA8
  c->r[19]=c->r[8]|c->r[8]; // 80191CAC
  c->r[20]=c->r[9]|c->r[9]; // 80191CB0
  c->r[28]=0u+0x00000001u; // 80191CB4
  c->r[26]=0u+0x00000000u; // 80191CB8
  c->r[24]=0u+0x00000000u; // 80191CBC
  c->r[25]=0u+0x00000000u; // 80191CC0
  c->r[22]=0u+0x00000000u; // 80191CC4
  c->r[23]=0u+0x00000000u; // 80191CC8
  W32(c->r[9]+0x00000000u,c->r[27]); // 80191CCC
  W32(c->r[8]+0x00000000u,c->r[27]); // 80191CD0
  if (crb(c,0)) { goto L_80191CF0; } // 80191CD4
  cmps(c,0,(int32_t)c->r[3],1); // 80191CD8
  if (crb(c,2)) { goto L_80191CF0; } // 80191CDC
  cmps(c,0,(int32_t)c->r[3],36); // 80191CE0
  if (crb(c,1)) { goto L_80191CF0; } // 80191CE4
  cmps(c,0,(int32_t)c->r[4],1); // 80191CE8
  if (!crb(c,0)) { goto L_80191CF8; } // 80191CEC
L_80191CF0:;
  c->r[28]=0u+0x00000040u; // 80191CF0
  goto L_80191D18; // 80191CF4
L_80191CF8:;
  c->r[12]=c->r[17]|c->r[17]; // 80191CF8
  c->r[3]=c->r[18]|c->r[18]; // 80191CFC
  c->r[4]=0u+0x00000000u; // 80191D00
  c->r[5]=0u+0x00000000u; // 80191D04
  c->ctr=c->r[12]; // 80191D08
  c->r[27]=0u+0x00000001u; // 80191D0C
  if (true) { c->lr=0x80191D14u; dispatch(c,c->ctr); } // 80191D10
  c->r[21]=c->r[3]|c->r[3]; // 80191D14
L_80191D18:;
  cmps(c,0,(int32_t)c->r[15],0); // 80191D18
  if (crb(c,2)) { goto L_80191D3C; } // 80191D1C
  c->r[6]=c->r[15]|c->r[15]; // 80191D20
  c->r[5]=sraw(c,c->r[15],31); // 80191D24
  c->r[3]=0u+0xFFFFFFFFu; // 80191D28
  c->r[4]=0u+0xFFFFFFFFu; // 80191D2C
  c->lr=0x80191D34u; f_80185F38(c); // 80191D30
  c->r[22]=c->r[4]|c->r[4]; // 80191D34
  c->r[23]=c->r[3]|c->r[3]; // 80191D38
L_80191D3C:;
  c->r[3]=0u+0x80330000u; // 80191D3C
  c->r[30]=0u+0x00000001u; // 80191D40
  c->r[14]=0u+0x00000000u; // 80191D44
  c->r[31]=0u+0xFFFFFFFFu; // 80191D48
  c->r[29]=c->r[3]+0x000006B0u; // 80191D4C
  goto L_801920B0; // 80191D50
L_80191D54:;
  cmps(c,0,(int32_t)c->r[28],1); // 80191D54
  if (crb(c,2)) { goto L_80191D80; } // 80191D58
  cmps(c,0,(int32_t)c->r[28],2); // 80191D5C
  if (crb(c,2)) { goto L_80191E40; } // 80191D60
  cmps(c,0,(int32_t)c->r[28],4); // 80191D64
  if (crb(c,2)) { goto L_80191E88; } // 80191D68
  cmps(c,0,(int32_t)c->r[28],8); // 80191D6C
  if (crb(c,2)) { goto L_80191ED8; } // 80191D70
  cmps(c,0,(int32_t)c->r[28],16); // 80191D74
  if (crb(c,2)) { goto L_80191ED8; } // 80191D78
  goto L_801920B0; // 80191D7C
L_80191D80:;
  cmpu(c,0,c->r[21],0x000000FFu); // 80191D80
  c->r[0]=0u+0x00000001u; // 80191D84
  if (crb(c,1)) { goto L_80191D90; } // 80191D88
  c->r[0]=0u+0x00000000u; // 80191D8C
L_80191D90:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191D90
  if (crb(c,2)) { goto L_80191DA0; } // 80191D94
  c->r[0]=0u+0x00000000u; // 80191D98
  goto L_80191DB4; // 80191D9C
L_80191DA0:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191DA0
  c->r[0]=rotl(c->r[21],1)&0xFFFFFFFEu; // 80191DA4
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191DA8
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191DAC
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 80191DB0
L_80191DB4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191DB4
  if (crb(c,2)) { goto L_80191DE0; } // 80191DB8
  c->r[12]=c->r[17]|c->r[17]; // 80191DBC
  c->r[3]=c->r[18]|c->r[18]; // 80191DC0
  c->r[4]=0u+0x00000000u; // 80191DC4
  c->r[5]=0u+0x00000000u; // 80191DC8
  c->ctr=c->r[12]; // 80191DCC
  if (true) { c->lr=0x80191DD4u; dispatch(c,c->ctr); } // 80191DD0
  c->r[21]=c->r[3]|c->r[3]; // 80191DD4
  c->r[26]=c->r[26]+0x00000001u; // 80191DD8
  goto L_801920B0; // 80191DDC
L_80191DE0:;
  cmps(c,0,(int32_t)c->r[21],43); // 80191DE0
  if (!crb(c,2)) { goto L_80191E0C; } // 80191DE4
  c->r[12]=c->r[17]|c->r[17]; // 80191DE8
  c->r[3]=c->r[18]|c->r[18]; // 80191DEC
  c->r[4]=0u+0x00000000u; // 80191DF0
  c->r[5]=0u+0x00000000u; // 80191DF4
  c->ctr=c->r[12]; // 80191DF8
  c->r[27]=c->r[27]+0x00000001u; // 80191DFC
  if (true) { c->lr=0x80191E04u; dispatch(c,c->ctr); } // 80191E00
  c->r[21]=c->r[3]|c->r[3]; // 80191E04
  goto L_80191E38; // 80191E08
L_80191E0C:;
  cmps(c,0,(int32_t)c->r[21],45); // 80191E0C
  if (!crb(c,2)) { goto L_80191E38; } // 80191E10
  c->r[12]=c->r[17]|c->r[17]; // 80191E14
  c->r[3]=c->r[18]|c->r[18]; // 80191E18
  c->r[4]=0u+0x00000000u; // 80191E1C
  c->r[5]=0u+0x00000000u; // 80191E20
  c->ctr=c->r[12]; // 80191E24
  c->r[27]=c->r[27]+0x00000001u; // 80191E28
  if (true) { c->lr=0x80191E30u; dispatch(c,c->ctr); } // 80191E2C
  c->r[21]=c->r[3]|c->r[3]; // 80191E30
  W32(c->r[19]+0x00000000u,c->r[30]); // 80191E34
L_80191E38:;
  c->r[28]=0u+0x00000002u; // 80191E38
  goto L_801920B0; // 80191E3C
L_80191E40:;
  cmps(c,0,(int32_t)c->r[15],0); // 80191E40
  if (crb(c,2)) { goto L_80191E50; } // 80191E44
  cmps(c,0,(int32_t)c->r[15],16); // 80191E48
  if (!crb(c,2)) { goto L_80191E80; } // 80191E4C
L_80191E50:;
  cmps(c,0,(int32_t)c->r[21],48); // 80191E50
  if (!crb(c,2)) { goto L_80191E80; } // 80191E54
  c->r[12]=c->r[17]|c->r[17]; // 80191E58
  c->r[3]=c->r[18]|c->r[18]; // 80191E5C
  c->r[28]=0u+0x00000004u; // 80191E60
  c->r[4]=0u+0x00000000u; // 80191E64
  c->r[5]=0u+0x00000000u; // 80191E68
  c->ctr=c->r[12]; // 80191E6C
  c->r[27]=c->r[27]+0x00000001u; // 80191E70
  if (true) { c->lr=0x80191E78u; dispatch(c,c->ctr); } // 80191E74
  c->r[21]=c->r[3]|c->r[3]; // 80191E78
  goto L_801920B0; // 80191E7C
L_80191E80:;
  c->r[28]=0u+0x00000008u; // 80191E80
  goto L_801920B0; // 80191E84
L_80191E88:;
  cmps(c,0,(int32_t)c->r[21],88); // 80191E88
  if (crb(c,2)) { goto L_80191E98; } // 80191E8C
  cmps(c,0,(int32_t)c->r[21],120); // 80191E90
  if (!crb(c,2)) { goto L_80191EC4; } // 80191E94
L_80191E98:;
  c->r[12]=c->r[17]|c->r[17]; // 80191E98
  c->r[3]=c->r[18]|c->r[18]; // 80191E9C
  c->r[15]=0u+0x00000010u; // 80191EA0
  c->r[28]=0u+0x00000008u; // 80191EA4
  c->r[4]=0u+0x00000000u; // 80191EA8
  c->r[5]=0u+0x00000000u; // 80191EAC
  c->ctr=c->r[12]; // 80191EB0
  c->r[27]=c->r[27]+0x00000001u; // 80191EB4
  if (true) { c->lr=0x80191EBCu; dispatch(c,c->ctr); } // 80191EB8
  c->r[21]=c->r[3]|c->r[3]; // 80191EBC
  goto L_801920B0; // 80191EC0
L_80191EC4:;
  cmps(c,0,(int32_t)c->r[15],0); // 80191EC4
  if (!crb(c,2)) { goto L_80191ED0; } // 80191EC8
  c->r[15]=0u+0x00000008u; // 80191ECC
L_80191ED0:;
  c->r[28]=0u+0x00000010u; // 80191ED0
  goto L_801920B0; // 80191ED4
L_80191ED8:;
  cmps(c,0,(int32_t)c->r[15],0); // 80191ED8
  if (!crb(c,2)) { goto L_80191EE4; } // 80191EDC
  c->r[15]=0u+0x0000000Au; // 80191EE0
L_80191EE4:;
  c->r[0]=sraw(c,c->r[14],31); // 80191EE4
  c->r[0]=c->r[23]^c->r[0]; // 80191EE8
  c->r[0]=c->r[22]|c->r[0]; cr0(c,c->r[0]); // 80191EEC
  if (!crb(c,2)) { goto L_80191F10; } // 80191EF0
  c->r[6]=c->r[15]|c->r[15]; // 80191EF4
  c->r[5]=sraw(c,c->r[15],31); // 80191EF8
  c->r[3]=0u+0xFFFFFFFFu; // 80191EFC
  c->r[4]=0u+0xFFFFFFFFu; // 80191F00
  c->lr=0x80191F08u; f_80185F38(c); // 80191F04
  c->r[22]=c->r[4]|c->r[4]; // 80191F08
  c->r[23]=c->r[3]|c->r[3]; // 80191F0C
L_80191F10:;
  cmpu(c,0,c->r[21],0x000000FFu); // 80191F10
  c->r[0]=0u+0x00000001u; // 80191F14
  if (crb(c,1)) { goto L_80191F20; } // 80191F18
  c->r[0]=0u+0x00000000u; // 80191F1C
L_80191F20:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191F20
  if (crb(c,2)) { goto L_80191F30; } // 80191F24
  c->r[0]=0u+0x00000000u; // 80191F28
  goto L_80191F44; // 80191F2C
L_80191F30:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191F30
  c->r[0]=rotl(c->r[21],1)&0xFFFFFFFEu; // 80191F34
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191F38
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191F3C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80191F40
L_80191F44:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191F44
  if (crb(c,2)) { goto L_80191F70; } // 80191F48
  c->r[21]=c->r[21]+0xFFFFFFD0u; // 80191F4C
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[15]); // 80191F50
  if (crb(c,0)) { goto L_80192028; } // 80191F54
  cmps(c,0,(int32_t)c->r[28],16); // 80191F58
  c->r[28]=0u+0x00000040u; // 80191F5C
  if (!crb(c,2)) { goto L_80191F68; } // 80191F60
  c->r[28]=0u+0x00000020u; // 80191F64
L_80191F68:;
  c->r[21]=c->r[21]+0x00000030u; // 80191F68
  goto L_801920B0; // 80191F6C
L_80191F70:;
  cmpu(c,0,c->r[21],0x000000FFu); // 80191F70
  c->r[0]=0u+0x00000001u; // 80191F74
  if (crb(c,1)) { goto L_80191F80; } // 80191F78
  c->r[0]=0u+0x00000000u; // 80191F7C
L_80191F80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191F80
  if (crb(c,2)) { goto L_80191F90; } // 80191F84
  c->r[0]=0u+0x00000000u; // 80191F88
  goto L_80191FA4; // 80191F8C
L_80191F90:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191F90
  c->r[0]=rotl(c->r[21],1)&0xFFFFFFFEu; // 80191F94
  c->r[3]=R32(c->r[3]+0x00000008u); // 80191F98
  c->r[0]=R16(c->r[3]+c->r[0]); // 80191F9C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80191FA0
L_80191FA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191FA4
  if (crb(c,2)) { goto L_80191FE4; } // 80191FA8
  cmpu(c,0,c->r[21],0x000000FFu); // 80191FAC
  c->r[0]=0u+0x00000001u; // 80191FB0
  if (crb(c,1)) { goto L_80191FBC; } // 80191FB4
  c->r[0]=0u+0x00000000u; // 80191FB8
L_80191FBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80191FBC
  if (crb(c,2)) { goto L_80191FCC; } // 80191FC0
  c->r[3]=c->r[21]|c->r[21]; // 80191FC4
  goto L_80191FD8; // 80191FC8
L_80191FCC:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80191FCC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80191FD0
  c->r[3]=R8(c->r[3]+c->r[21]); // 80191FD4
L_80191FD8:;
  c->r[0]=c->r[3]+0xFFFFFFC9u; // 80191FD8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[15]); // 80191FDC
  if (crb(c,0)) { goto L_80191FFC; } // 80191FE0
L_80191FE4:;
  cmps(c,0,(int32_t)c->r[28],16); // 80191FE4
  if (!crb(c,2)) { goto L_80191FF4; } // 80191FE8
  c->r[28]=0u+0x00000020u; // 80191FEC
  goto L_801920B0; // 80191FF0
L_80191FF4:;
  c->r[28]=0u+0x00000040u; // 80191FF4
  goto L_801920B0; // 80191FF8
L_80191FFC:;
  cmpu(c,0,c->r[21],0x000000FFu); // 80191FFC
  c->r[0]=0u+0x00000001u; // 80192000
  if (crb(c,1)) { goto L_8019200C; } // 80192004
  c->r[0]=0u+0x00000000u; // 80192008
L_8019200C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019200C
  if (crb(c,2)) { goto L_80192018; } // 80192010
  goto L_80192024; // 80192014
L_80192018:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 80192018
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8019201C
  c->r[21]=R8(c->r[3]+c->r[21]); // 80192020
L_80192024:;
  c->r[21]=c->r[21]+0xFFFFFFC9u; // 80192024
L_80192028:;
  c->r[0]=addc(c,~c->r[24],c->r[22],1); // 80192028
  c->r[0]=addc(c,~c->r[25],c->r[23],c->xer_ca); // 8019202C
  c->r[0]=addc(c,~c->r[22],c->r[22],c->xer_ca); // 80192030
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 80192034
  if (crb(c,2)) { goto L_80192040; } // 80192038
  W32(c->r[20]+0x00000000u,c->r[30]); // 8019203C
L_80192040:;
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[15])>>32); // 80192040
  c->r[5]=sraw(c,c->r[15],31); // 80192044
  c->r[6]=sraw(c,c->r[21],31); // 80192048
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[15]); // 8019204C
  c->r[4]=c->r[3]+c->r[4]; // 80192050
  c->r[3]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[5]); // 80192054
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[15]); // 80192058
  c->r[7]=c->r[4]+c->r[3]; // 8019205C
  c->r[5]=addc(c,~c->r[0],c->r[31],1); // 80192060
  c->r[4]=addc(c,~c->r[7],c->r[31],c->xer_ca); // 80192064
  c->r[3]=addc(c,~c->r[21],c->r[5],1); // 80192068
  c->r[3]=addc(c,~c->r[6],c->r[4],c->xer_ca); // 8019206C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 80192070
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80192074
  if (crb(c,2)) { goto L_80192080; } // 80192078
  W32(c->r[20]+0x00000000u,c->r[30]); // 8019207C
L_80192080:;
  c->r[4]=sraw(c,c->r[21],31); // 80192080
  c->r[12]=c->r[17]|c->r[17]; // 80192084
  c->r[24]=addc(c,c->r[0],c->r[21],0); // 80192088
  c->r[3]=c->r[18]|c->r[18]; // 8019208C
  c->r[25]=addc(c,c->r[7],c->r[4],c->xer_ca); // 80192090
  c->r[28]=0u+0x00000010u; // 80192094
  c->r[4]=0u+0x00000000u; // 80192098
  c->r[5]=0u+0x00000000u; // 8019209C
  c->ctr=c->r[12]; // 801920A0
  c->r[27]=c->r[27]+0x00000001u; // 801920A4
  if (true) { c->lr=0x801920ACu; dispatch(c,c->ctr); } // 801920A8
  c->r[21]=c->r[3]|c->r[3]; // 801920AC
L_801920B0:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[16]); // 801920B0
  if (crb(c,1)) { goto L_801920C8; } // 801920B4
  cmps(c,0,(int32_t)c->r[21],-1); // 801920B8
  if (crb(c,2)) { goto L_801920C8; } // 801920BC
  c->r[0]=rotl(c->r[28],0)&0x00000060u; cr0(c,c->r[0]); // 801920C0
  if (crb(c,2)) { IRQCHK(c); goto L_80191D54; } // 801920C4
L_801920C8:;
  c->r[0]=c->r[28]&0x00000034u; cr0(c,c->r[0]); // 801920C8
  if (!crb(c,2)) { goto L_801920E4; } // 801920CC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801920D0
  c->r[24]=0u+0x00000000u; // 801920D4
  c->r[25]=0u+0x00000000u; // 801920D8
  W32(c->r[3]+0x00000000u,c->r[24]); // 801920DC
  goto L_801920F4; // 801920E0
L_801920E4:;
  c->r[3]=c->r[27]+c->r[26]; // 801920E4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801920E8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801920EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801920F0
L_801920F4:;
  c->r[12]=c->r[17]|c->r[17]; // 801920F4
  c->r[3]=c->r[18]|c->r[18]; // 801920F8
  c->r[4]=c->r[21]|c->r[21]; // 801920FC
  c->r[5]=0u+0x00000001u; // 80192100
  c->ctr=c->r[12]; // 80192104
  if (true) { c->lr=0x8019210Cu; dispatch(c,c->ctr); } // 80192108
  c->r[4]=c->r[24]|c->r[24]; // 8019210C
  c->r[3]=c->r[25]|c->r[25]; // 80192110
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80192114
  c->r[0]=R32(c->r[1]+0x00000064u); // 80192118
  c->lr=c->r[0]; // 8019211C
  c->r[1]=c->r[1]+0x00000060u; // 80192120
  return; // 80192124
}

// fn_80192128
void f_80192128(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80192128
  c->r[0]=c->lr; // 8019212C
  c->r[7]=0u+0x80000000u; // 80192130
  c->r[6]=0u+0x80190000u; // 80192134
  W32(c->r[1]+0x00000034u,c->r[0]); // 80192138
  c->r[0]=0u+0x00000000u; // 8019213C
  c->r[8]=c->r[1]+0x0000000Cu; // 80192140
  c->r[9]=c->r[1]+0x00000008u; // 80192144
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80192148
  c->r[31]=c->r[4]|c->r[4]; // 8019214C
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 80192150
  c->r[7]=c->r[1]+0x00000010u; // 80192154
  W32(c->r[1]+0x00000028u,c->r[30]); // 80192158
  c->r[30]=c->r[3]|c->r[3]; // 8019215C
  c->r[3]=c->r[5]|c->r[5]; // 80192160
  c->r[5]=c->r[6]+0xFFFFFD84u; // 80192164
  W32(c->r[1]+0x00000018u,c->r[30]); // 80192168
  c->r[6]=c->r[1]+0x00000018u; // 8019216C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80192170
  c->lr=0x80192178u; f_8019186C(c); // 80192174
  cmps(c,0,(int32_t)c->r[31],0); // 80192178
  if (crb(c,2)) { goto L_8019218C; } // 8019217C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80192180
  c->r[0]=c->r[30]+c->r[0]; // 80192184
  W32(c->r[31]+0x00000000u,c->r[0]); // 80192188
L_8019218C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8019218C
  cmps(c,0,(int32_t)c->r[0],0); // 80192190
  if (crb(c,2)) { goto L_801921A8; } // 80192194
  c->r[0]=0u+0x00000022u; // 80192198
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 8019219C
  c->r[3]=0u+0xFFFFFFFFu; // 801921A0
  goto L_801921B8; // 801921A4
L_801921A8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801921A8
  cmps(c,0,(int32_t)c->r[0],0); // 801921AC
  if (crb(c,2)) { goto L_801921B8; } // 801921B0
  c->r[3]=0u-c->r[3]; // 801921B4
L_801921B8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801921B8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801921BC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801921C0
  c->lr=c->r[0]; // 801921C4
  c->r[1]=c->r[1]+0x00000030u; // 801921C8
  return; // 801921CC
}

// fn_801921D0
void f_801921D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801921D0
  c->r[0]=c->lr; // 801921D4
  c->r[7]=0u+0x80000000u; // 801921D8
  c->r[6]=0u+0x80190000u; // 801921DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801921E0
  c->r[0]=0u+0x00000000u; // 801921E4
  c->r[8]=c->r[1]+0x0000000Cu; // 801921E8
  c->r[9]=c->r[1]+0x00000008u; // 801921EC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801921F0
  c->r[31]=c->r[4]|c->r[4]; // 801921F4
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 801921F8
  c->r[7]=c->r[1]+0x00000010u; // 801921FC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80192200
  c->r[30]=c->r[3]|c->r[3]; // 80192204
  c->r[3]=c->r[5]|c->r[5]; // 80192208
  c->r[5]=c->r[6]+0xFFFFFD84u; // 8019220C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80192210
  c->r[6]=c->r[1]+0x00000018u; // 80192214
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80192218
  c->lr=0x80192220u; f_80191C80(c); // 8019221C
  cmps(c,0,(int32_t)c->r[31],0); // 80192220
  if (crb(c,2)) { goto L_80192234; } // 80192224
  c->r[0]=R32(c->r[1]+0x00000010u); // 80192228
  c->r[0]=c->r[30]+c->r[0]; // 8019222C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80192230
L_80192234:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80192234
  cmps(c,0,(int32_t)c->r[0],0); // 80192238
  if (crb(c,2)) { goto L_80192254; } // 8019223C
  c->r[0]=0u+0x00000022u; // 80192240
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80192244
  c->r[4]=0u+0xFFFFFFFFu; // 80192248
  c->r[3]=0u+0xFFFFFFFFu; // 8019224C
  goto L_80192268; // 80192250
L_80192254:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80192254
  cmps(c,0,(int32_t)c->r[0],0); // 80192258
  if (crb(c,2)) { goto L_80192268; } // 8019225C
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 80192260
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 80192264
L_80192268:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80192268
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8019226C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80192270
  c->lr=c->r[0]; // 80192274
  c->r[1]=c->r[1]+0x00000030u; // 80192278
  return; // 8019227C
}

// fn_80192280
void f_80192280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80192280
  c->r[0]=c->lr; // 80192284
  c->r[7]=0u+0x80000000u; // 80192288
  c->r[6]=0u+0x80190000u; // 8019228C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80192290
  c->r[0]=0u+0x00000000u; // 80192294
  c->r[8]=c->r[1]+0x0000000Cu; // 80192298
  c->r[9]=c->r[1]+0x00000008u; // 8019229C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801922A0
  c->r[31]=c->r[4]|c->r[4]; // 801922A4
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 801922A8
  c->r[7]=c->r[1]+0x00000010u; // 801922AC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801922B0
  c->r[30]=c->r[3]|c->r[3]; // 801922B4
  c->r[3]=c->r[5]|c->r[5]; // 801922B8
  c->r[5]=c->r[6]+0xFFFFFD84u; // 801922BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801922C0
  c->r[6]=c->r[1]+0x00000018u; // 801922C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801922C8
  c->lr=0x801922D0u; f_8019186C(c); // 801922CC
  cmps(c,0,(int32_t)c->r[31],0); // 801922D0
  if (crb(c,2)) { goto L_801922E4; } // 801922D4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801922D8
  c->r[0]=c->r[30]+c->r[0]; // 801922DC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801922E0
L_801922E4:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801922E4
  cmps(c,0,(int32_t)c->r[0],0); // 801922E8
  if (!crb(c,2)) { goto L_80192320; } // 801922EC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801922F0
  cmps(c,0,(int32_t)c->r[5],0); // 801922F4
  if (!crb(c,2)) { goto L_8019230C; } // 801922F8
  c->r[4]=0u+0x80000000u; // 801922FC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80192300
  cmpu(c,0,c->r[3],c->r[0]); // 80192304
  if (crb(c,1)) { goto L_80192320; } // 80192308
L_8019230C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8019230C
  if (crb(c,2)) { goto L_80192348; } // 80192310
  c->r[0]=0u+0x80000000u; // 80192314
  cmpu(c,0,c->r[3],c->r[0]); // 80192318
  if (!crb(c,1)) { goto L_80192348; } // 8019231C
L_80192320:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80192320
  c->r[0]=0u+0x00000022u; // 80192324
  c->r[3]=0u+0x80000000u; // 80192328
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 8019232C
  c->r[4]=0u-c->r[5]; // 80192330
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80192334
  c->r[3]=c->r[4]|c->r[5]; // 80192338
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8019233C
  c->r[3]=c->r[3]+c->r[0]; // 80192340
  goto L_80192354; // 80192344
L_80192348:;
  cmps(c,0,(int32_t)c->r[5],0); // 80192348
  if (crb(c,2)) { goto L_80192354; } // 8019234C
  c->r[3]=0u-c->r[3]; // 80192350
L_80192354:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80192354
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80192358
  c->r[30]=R32(c->r[1]+0x00000028u); // 8019235C
  c->lr=c->r[0]; // 80192360
  c->r[1]=c->r[1]+0x00000030u; // 80192364
  return; // 80192368
}

// fn_8019236C
void f_8019236C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019236C
  c->r[0]=c->lr; // 80192370
  c->r[7]=0u+0x80000000u; // 80192374
  c->r[6]=0u+0x80190000u; // 80192378
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019237C
  c->r[0]=0u+0x00000000u; // 80192380
  c->r[8]=c->r[1]+0x0000000Cu; // 80192384
  c->r[9]=c->r[1]+0x00000008u; // 80192388
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8019238C
  c->r[31]=c->r[4]|c->r[4]; // 80192390
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 80192394
  c->r[7]=c->r[1]+0x00000010u; // 80192398
  W32(c->r[1]+0x00000028u,c->r[30]); // 8019239C
  c->r[30]=c->r[3]|c->r[3]; // 801923A0
  c->r[3]=c->r[5]|c->r[5]; // 801923A4
  c->r[5]=c->r[6]+0xFFFFFD84u; // 801923A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801923AC
  c->r[6]=c->r[1]+0x00000018u; // 801923B0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801923B4
  c->lr=0x801923BCu; f_80191C80(c); // 801923B8
  cmps(c,0,(int32_t)c->r[31],0); // 801923BC
  if (crb(c,2)) { goto L_801923D0; } // 801923C0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801923C4
  c->r[0]=c->r[30]+c->r[0]; // 801923C8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801923CC
L_801923D0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801923D0
  cmps(c,0,(int32_t)c->r[0],0); // 801923D4
  if (!crb(c,2)) { goto L_8019242C; } // 801923D8
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801923DC
  cmps(c,0,(int32_t)c->r[7],0); // 801923E0
  if (!crb(c,2)) { goto L_80192408; } // 801923E4
  c->r[6]=0u+0xFFFFFFFFu; // 801923E8
  c->r[5]=0u+0x80000000u; // 801923EC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801923F0
  c->r[0]=addc(c,~c->r[4],c->r[6],1); // 801923F4
  c->r[0]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 801923F8
  c->r[0]=addc(c,~c->r[6],c->r[6],c->xer_ca); // 801923FC
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 80192400
  if (!crb(c,2)) { goto L_8019242C; } // 80192404
L_80192408:;
  cmps(c,0,(int32_t)c->r[7],0); // 80192408
  if (crb(c,2)) { goto L_8019245C; } // 8019240C
  c->r[6]=0u+0x00000000u; // 80192410
  c->r[5]=0u+0x80000000u; // 80192414
  c->r[0]=addc(c,~c->r[4],c->r[6],1); // 80192418
  c->r[0]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8019241C
  c->r[0]=addc(c,~c->r[6],c->r[6],c->xer_ca); // 80192420
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 80192424
  if (crb(c,2)) { goto L_8019245C; } // 80192428
L_8019242C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019242C
  cmps(c,0,(int32_t)c->r[0],0); // 80192430
  if (crb(c,2)) { goto L_80192444; } // 80192434
  c->r[4]=0u+0x00000000u; // 80192438
  c->r[3]=0u+0x80000000u; // 8019243C
  goto L_80192450; // 80192440
L_80192444:;
  c->r[3]=0u+0x80000000u; // 80192444
  c->r[4]=0u+0xFFFFFFFFu; // 80192448
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8019244C
L_80192450:;
  c->r[0]=0u+0x00000022u; // 80192450
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80192454
  goto L_8019246C; // 80192458
L_8019245C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8019245C
  if (crb(c,2)) { goto L_8019246C; } // 80192460
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 80192464
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 80192468
L_8019246C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019246C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80192470
  c->r[30]=R32(c->r[1]+0x00000028u); // 80192474
  c->lr=c->r[0]; // 80192478
  c->r[1]=c->r[1]+0x00000030u; // 8019247C
  return; // 80192480
}

// fn_80192484
void f_80192484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80192484
  c->r[0]=c->lr; // 80192488
  c->r[5]=0u+0x80190000u; // 8019248C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80192490
  c->r[0]=0u+0x00000000u; // 80192494
  c->r[5]=c->r[5]+0xFFFFFD84u; // 80192498
  c->r[6]=c->r[1]+0x00000018u; // 8019249C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801924A0
  c->r[31]=0u+0x80000000u; // 801924A4
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 801924A8
  c->r[7]=c->r[1]+0x00000008u; // 801924AC
  W32(c->r[1]+0x00000018u,c->r[3]); // 801924B0
  c->r[8]=c->r[1]+0x0000000Cu; // 801924B4
  c->r[9]=c->r[1]+0x00000010u; // 801924B8
  c->r[3]=0u+0x0000000Au; // 801924BC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801924C0
  c->lr=0x801924C8u; f_8019186C(c); // 801924C4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801924C8
  cmps(c,0,(int32_t)c->r[0],0); // 801924CC
  if (!crb(c,2)) { goto L_80192500; } // 801924D0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801924D4
  cmps(c,0,(int32_t)c->r[4],0); // 801924D8
  if (!crb(c,2)) { goto L_801924EC; } // 801924DC
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801924E0
  cmpu(c,0,c->r[3],c->r[0]); // 801924E4
  if (crb(c,1)) { goto L_80192500; } // 801924E8
L_801924EC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801924EC
  if (crb(c,2)) { goto L_80192528; } // 801924F0
  c->r[0]=0u+0x80000000u; // 801924F4
  cmpu(c,0,c->r[3],c->r[0]); // 801924F8
  if (!crb(c,1)) { goto L_80192528; } // 801924FC
L_80192500:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80192500
  c->r[0]=0u+0x00000022u; // 80192504
  c->r[3]=0u+0x80000000u; // 80192508
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 8019250C
  c->r[4]=0u-c->r[5]; // 80192510
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80192514
  c->r[3]=c->r[4]|c->r[5]; // 80192518
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8019251C
  c->r[3]=c->r[3]+c->r[0]; // 80192520
  goto L_80192534; // 80192524
L_80192528:;
  cmps(c,0,(int32_t)c->r[4],0); // 80192528
  if (crb(c,2)) { goto L_80192534; } // 8019252C
  c->r[3]=0u-c->r[3]; // 80192530
L_80192534:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80192534
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80192538
  c->lr=c->r[0]; // 8019253C
  c->r[1]=c->r[1]+0x00000030u; // 80192540
  return; // 80192544
}

// fn_80192548
void f_80192548(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0xFFFFFFFEu; // 80192548
  c->r[3]=0u+0xFFFFFFFFu; // 8019254C
L_80192550:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 80192550
  c->r[3]=c->r[3]+0x00000001u; // 80192554
  cmps(c,0,(int32_t)c->r[0],0); // 80192558
  if (!crb(c,2)) { IRQCHK(c); goto L_80192550; } // 8019255C
  return; // 80192560
}

// fn_80192564
void f_80192564(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 80192564
  c->r[6]=c->r[3]+0xFFFFFFFEu; // 80192568
  c->r[5]=c->r[5]+0x00000001u; // 8019256C
  goto L_8019259C; // 80192570
L_80192574:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 80192574
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 80192578
  cmps(c,0,(int32_t)c->r[0],0); // 8019257C
  if (!crb(c,2)) { goto L_8019259C; } // 80192580
  c->r[0]=0u+0x00000000u; // 80192584
  goto L_80192590; // 80192588
L_8019258C:;
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 8019258C
L_80192590:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 80192590
  if (!crb(c,2)) { IRQCHK(c); goto L_8019258C; } // 80192594
  return; // 80192598
L_8019259C:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8019259C
  if (!crb(c,2)) { IRQCHK(c); goto L_80192574; } // 801925A0
  return; // 801925A4
}

// fn_801925A8
void f_801925A8(Ctx* __restrict c) {
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 801925A8
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 801925AC
  goto L_801925C4; // 801925B0
L_801925B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801925B4
  if (!crb(c,2)) { goto L_801925C4; } // 801925B8
  c->r[3]=0u+0x00000000u; // 801925BC
  return; // 801925C0
L_801925C4:;
  {uint32_t ea=c->r[5]+0x00000002u; c->r[3]=R16(ea); c->r[5]=ea;} // 801925C4
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 801925C8
  cmpu(c,0,c->r[3],c->r[0]); // 801925CC
  if (crb(c,2)) { IRQCHK(c); goto L_801925B4; } // 801925D0
  c->r[3]=c->r[3]-c->r[0]; // 801925D4
  return; // 801925D8
}

// fn_801925DC
void f_801925DC(Ctx* __restrict c) {
  f_801925E0(c); return; // 801925DC
}

// fwide
void f_801925E0(Ctx* __restrict c) {
  trace_call(0x801925E0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801925E0
  if (crb(c,2)) { goto L_801925F4; } // 801925E4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801925E8
  c->r[0]=rotl(c->r[5],10)&0x00000007u; cr0(c,c->r[0]); // 801925EC
  if (!crb(c,2)) { goto L_801925FC; } // 801925F0
L_801925F4:;
  c->r[3]=0u+0x00000000u; // 801925F4
  return; // 801925F8
L_801925FC:;
  c->r[0]=rotl(c->r[5],12)&0x00000003u; cr0(c,c->r[0]); // 801925FC
  if (crb(c,2)) { goto L_80192618; } // 80192600
  cmps(c,0,(int32_t)c->r[0],2); // 80192604
  if (crb(c,2)) { goto L_80192644; } // 80192608
  cmps(c,0,(int32_t)c->r[0],1); // 8019260C
  if (crb(c,2)) { goto L_8019264C; } // 80192610
  goto L_80192650; // 80192614
L_80192618:;
  cmps(c,0,(int32_t)c->r[4],0); // 80192618
  if (!crb(c,1)) { goto L_80192630; } // 8019261C
  c->r[0]=0u+0x00000002u; // 80192620
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 80192624
  W32(c->r[3]+0x00000004u,c->r[5]); // 80192628
  goto L_80192650; // 8019262C
L_80192630:;
  if (!crb(c,0)) { goto L_80192650; } // 80192630
  c->r[0]=0u+0x00000001u; // 80192634
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 80192638
  W32(c->r[3]+0x00000004u,c->r[5]); // 8019263C
  goto L_80192650; // 80192640
L_80192644:;
  c->r[4]=0u+0x00000001u; // 80192644
  goto L_80192650; // 80192648
L_8019264C:;
  c->r[4]=0u+0xFFFFFFFFu; // 8019264C
L_80192650:;
  c->r[3]=c->r[4]|c->r[4]; // 80192650
  return; // 80192654
}

// fn_80192658
void f_80192658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80192658
  c->r[0]=c->lr; // 8019265C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80192660
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80192664
  c->r[31]=c->r[6]|c->r[6]; // 80192668
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019266C
  c->r[30]=c->r[5]|c->r[5]; // 80192670
  W32(c->r[1]+0x00000014u,c->r[29]); // 80192674
  c->r[29]=c->r[4]|c->r[4]; // 80192678
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019267C
  c->r[28]=c->r[3]|c->r[3]; // 80192680
  c->lr=0x80192688u; f_80159BB4(c); // 80192684
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 80192688
  if (!crb(c,2)) { goto L_801926F0; } // 8019268C
  c->r[0]=R32(c->r[13]+0xFFFFA0A8u); // 80192690
  c->r[3]=0u+0x00000000u; // 80192694
  cmps(c,0,(int32_t)c->r[0],0); // 80192698
  if (!crb(c,2)) { goto L_801926BC; } // 8019269C
  c->r[3]=0u+0x00010000u; // 801926A0
  c->r[3]=c->r[3]+0xFFFFE100u; // 801926A4
  c->lr=0x801926ACu; f_801A1144(c); // 801926A8
  cmps(c,0,(int32_t)c->r[3],0); // 801926AC
  if (!crb(c,2)) { goto L_801926BC; } // 801926B0
  c->r[0]=0u+0x00000001u; // 801926B4
  W32(c->r[13]+0xFFFFA0A8u,c->r[0]); // 801926B8
L_801926BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801926BC
  if (crb(c,2)) { goto L_801926CC; } // 801926C0
  c->r[3]=0u+0x00000001u; // 801926C4
  goto L_80192708; // 801926C8
L_801926CC:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801926CC
  c->r[3]=c->r[29]|c->r[29]; // 801926D0
  c->lr=0x801926D8u; f_801A118C(c); // 801926D4
  cmps(c,0,(int32_t)c->r[3],0); // 801926D8
  if (crb(c,2)) { goto L_801926F0; } // 801926DC
  c->r[0]=0u+0x00000000u; // 801926E0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801926E4
  c->r[3]=0u+0x00000001u; // 801926E8
  goto L_80192708; // 801926EC
L_801926F0:;
  c->r[3]=c->r[28]|c->r[28]; // 801926F0
  c->r[4]=c->r[29]|c->r[29]; // 801926F4
  c->r[5]=c->r[30]|c->r[30]; // 801926F8
  c->r[6]=c->r[31]|c->r[31]; // 801926FC
  c->lr=0x80192704u; f_8019D9D0(c); // 80192700
  c->r[3]=0u+0x00000000u; // 80192704
L_80192708:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80192708
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019270C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80192710
  c->r[29]=R32(c->r[1]+0x00000014u); // 80192714
  c->r[28]=R32(c->r[1]+0x00000010u); // 80192718
  c->lr=c->r[0]; // 8019271C
  c->r[1]=c->r[1]+0x00000020u; // 80192720
  return; // 80192724
}

// fn_80192728
void f_80192728(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80192728
  return; // 8019272C
}

// fn_80192730
void f_80192730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80192730
  c->r[0]=c->lr; // 80192734
  W32(c->r[1]+0x00000044u,c->r[0]); // 80192738
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8019273C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80192740
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80192744
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 80192748
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8019274C
  c->r[0]=0u+0x3FF00000u; // 80192750
  c->r[4]=R32(c->r[1]+0x00000008u); // 80192754
  c->r[3]=rotl(c->r[4],0)&0x7FFFFFFFu; // 80192758
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8019275C
  if (crb(c,0)) { goto L_801927A0; } // 80192760
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80192764
  c->r[3]=c->r[3]+0xC0100000u; // 80192768
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 8019276C
  if (!crb(c,2)) { goto L_8019278C; } // 80192770
  cmps(c,0,(int32_t)c->r[4],0); // 80192774
  if (!crb(c,1)) { goto L_80192784; } // 80192778
  {uint32_t ea=c->r[2]+0xFFFF8F30u; c->f[1]=RF64(ea);} // 8019277C
  goto L_801929DC; // 80192780
L_80192784:;
  {uint32_t ea=c->r[2]+0xFFFF8F38u; c->f[1]=RF64(ea);} // 80192784
  goto L_801929DC; // 80192788
L_8019278C:;
  c->r[3]=0u+0x80440000u; // 8019278C
  c->r[0]=0u+0x00000021u; // 80192790
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80192794
  {uint32_t ea=c->r[3]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80192798
  goto L_801929DC; // 8019279C
L_801927A0:;
  c->r[0]=0u+0x3FE00000u; // 801927A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801927A4
  if (!crb(c,0)) { goto L_8019285C; } // 801927A8
  c->r[0]=0u+0x3C600000u; // 801927AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801927B0
  if (crb(c,1)) { goto L_801927C0; } // 801927B4
  {uint32_t ea=c->r[2]+0xFFFF8F40u; c->f[1]=RF64(ea);} // 801927B8
  goto L_801929DC; // 801927BC
L_801927C0:;
  c->f[12]=c->f[1]*c->f[1]; // 801927C0
  {uint32_t ea=c->r[2]+0xFFFF8F70u; c->f[0]=RF64(ea);} // 801927C4
  {uint32_t ea=c->r[2]+0xFFFF8F98u; c->f[2]=RF64(ea);} // 801927C8
  {uint32_t ea=c->r[2]+0xFFFF8F68u; c->f[3]=RF64(ea);} // 801927CC
  {uint32_t ea=c->r[2]+0xFFFF8F60u; c->f[10]=RF64(ea);} // 801927D0
  c->f[4]=c->f[0]*c->f[12]; // 801927D4
  {uint32_t ea=c->r[2]+0xFFFF8F90u; c->f[0]=RF64(ea);} // 801927D8
  c->f[2]=c->f[2]*c->f[12]; // 801927DC
  {uint32_t ea=c->r[2]+0xFFFF8F88u; c->f[5]=RF64(ea);} // 801927E0
  {uint32_t ea=c->r[2]+0xFFFF8F58u; c->f[9]=RF64(ea);} // 801927E4
  c->f[3]=c->f[3]+c->f[4]; // 801927E8
  {uint32_t ea=c->r[2]+0xFFFF8F80u; c->f[4]=RF64(ea);} // 801927EC
  c->f[0]=c->f[0]+c->f[2]; // 801927F0
  c->f[11]=c->f[12]*c->f[3]; // 801927F4
  {uint32_t ea=c->r[2]+0xFFFF8F50u; c->f[8]=RF64(ea);} // 801927F8
  {uint32_t ea=c->r[2]+0xFFFF8F78u; c->f[3]=RF64(ea);} // 801927FC
  c->f[6]=c->f[12]*c->f[0]; // 80192800
  {uint32_t ea=c->r[2]+0xFFFF8F48u; c->f[7]=RF64(ea);} // 80192804
  {uint32_t ea=c->r[2]+0xFFFF8FA0u; c->f[2]=RF64(ea);} // 80192808
  c->f[10]=c->f[10]+c->f[11]; // 8019280C
  {uint32_t ea=c->r[2]+0xFFFF8F40u; c->f[0]=RF64(ea);} // 80192810
  c->f[5]=c->f[5]+c->f[6]; // 80192814
  c->f[6]=c->f[12]*c->f[10]; // 80192818
  c->f[5]=c->f[12]*c->f[5]; // 8019281C
  c->f[6]=c->f[9]+c->f[6]; // 80192820
  c->f[4]=c->f[4]+c->f[5]; // 80192824
  c->f[5]=c->f[12]*c->f[6]; // 80192828
  c->f[4]=c->f[12]*c->f[4]; // 8019282C
  c->f[5]=c->f[8]+c->f[5]; // 80192830
  c->f[4]=c->f[3]+c->f[4]; // 80192834
  c->f[3]=c->f[12]*c->f[5]; // 80192838
  c->f[3]=c->f[7]+c->f[3]; // 8019283C
  c->f[3]=c->f[12]*c->f[3]; // 80192840
  c->f[3]=c->f[3]/c->f[4]; // 80192844
  c->f[3]=c->f[1]*c->f[3]; // 80192848
  c->f[2]=c->f[2]-c->f[3]; // 8019284C
  c->f[1]=c->f[1]-c->f[2]; // 80192850
  c->f[1]=c->f[0]-c->f[1]; // 80192854
  goto L_801929DC; // 80192858
L_8019285C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8019285C
  if (!crb(c,0)) { goto L_80192914; } // 80192860
  {uint32_t ea=c->r[2]+0xFFFF8F78u; c->f[11]=RF64(ea);} // 80192864
  {uint32_t ea=c->r[2]+0xFFFF8FA8u; c->f[0]=RF64(ea);} // 80192868
  c->f[1]=c->f[11]+c->f[1]; // 8019286C
  {uint32_t ea=c->r[2]+0xFFFF8F70u; c->f[4]=RF64(ea);} // 80192870
  {uint32_t ea=c->r[2]+0xFFFF8F68u; c->f[9]=RF64(ea);} // 80192874
  {uint32_t ea=c->r[2]+0xFFFF8F90u; c->f[3]=RF64(ea);} // 80192878
  c->f[1]=c->f[0]*c->f[1]; // 8019287C
  {uint32_t ea=c->r[2]+0xFFFF8F98u; c->f[0]=RF64(ea);} // 80192880
  {uint32_t ea=c->r[2]+0xFFFF8F60u; c->f[8]=RF64(ea);} // 80192884
  {uint32_t ea=c->r[2]+0xFFFF8F88u; c->f[2]=RF64(ea);} // 80192888
  {uint32_t ea=c->r[2]+0xFFFF8F58u; c->f[7]=RF64(ea);} // 8019288C
  c->f[10]=c->f[4]*c->f[1]; // 80192890
  {uint32_t ea=c->r[2]+0xFFFF8F50u; c->f[6]=RF64(ea);} // 80192894
  c->f[4]=c->f[0]*c->f[1]; // 80192898
  {uint32_t ea=c->r[2]+0xFFFF8F80u; c->f[0]=RF64(ea);} // 8019289C
  {uint32_t ea=c->r[2]+0xFFFF8F48u; c->f[5]=RF64(ea);} // 801928A0
  c->f[9]=c->f[9]+c->f[10]; // 801928A4
  c->f[3]=c->f[3]+c->f[4]; // 801928A8
  c->f[4]=c->f[1]*c->f[9]; // 801928AC
  c->f[3]=c->f[1]*c->f[3]; // 801928B0
  c->f[4]=c->f[8]+c->f[4]; // 801928B4
  c->f[2]=c->f[2]+c->f[3]; // 801928B8
  c->f[3]=c->f[1]*c->f[4]; // 801928BC
  c->f[2]=c->f[1]*c->f[2]; // 801928C0
  c->f[3]=c->f[7]+c->f[3]; // 801928C4
  c->f[0]=c->f[0]+c->f[2]; // 801928C8
  c->f[2]=c->f[1]*c->f[3]; // 801928CC
  c->f[0]=c->f[1]*c->f[0]; // 801928D0
  c->f[2]=c->f[6]+c->f[2]; // 801928D4
  c->f[30]=c->f[11]+c->f[0]; // 801928D8
  c->f[0]=c->f[1]*c->f[2]; // 801928DC
  c->f[0]=c->f[5]+c->f[0]; // 801928E0
  c->f[31]=c->f[1]*c->f[0]; // 801928E4
  c->lr=0x801928ECu; f_80196B38(c); // 801928E8
  c->f[4]=c->f[31]/c->f[30]; // 801928EC
  {uint32_t ea=c->r[2]+0xFFFF8FA0u; c->f[3]=RF64(ea);} // 801928F0
  {uint32_t ea=c->r[2]+0xFFFF8FB0u; c->f[2]=RF64(ea);} // 801928F4
  {uint32_t ea=c->r[2]+0xFFFF8F38u; c->f[0]=RF64(ea);} // 801928F8
  c->f[4]=c->f[4]*c->f[1]; // 801928FC
  c->f[3]=c->f[4]-c->f[3]; // 80192900
  c->f[1]=c->f[1]+c->f[3]; // 80192904
  c->f[1]=c->f[2]*c->f[1]; // 80192908
  c->f[1]=c->f[0]-c->f[1]; // 8019290C
  goto L_801929DC; // 80192910
L_80192914:;
  {uint32_t ea=c->r[2]+0xFFFF8F78u; c->f[2]=RF64(ea);} // 80192914
  {uint32_t ea=c->r[2]+0xFFFF8FA8u; c->f[0]=RF64(ea);} // 80192918
  c->f[1]=c->f[2]-c->f[1]; // 8019291C
  c->f[31]=c->f[0]*c->f[1]; // 80192920
  c->f[1]=c->f[31]; // 80192924
  c->lr=0x8019292Cu; f_80196B38(c); // 80192928
  {uint32_t ea=c->r[2]+0xFFFF8F70u; c->f[2]=RF64(ea);} // 8019292C
  c->r[0]=0u+0x00000000u; // 80192930
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 80192934
  c->f[4]=c->f[2]*c->f[31]; // 80192938
  {uint32_t ea=c->r[2]+0xFFFF8F98u; c->f[0]=RF64(ea);} // 8019293C
  {uint32_t ea=c->r[2]+0xFFFF8F68u; c->f[3]=RF64(ea);} // 80192940
  c->f[2]=c->f[0]*c->f[31]; // 80192944
  {uint32_t ea=c->r[2]+0xFFFF8F90u; c->f[0]=RF64(ea);} // 80192948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019294C
  c->f[3]=c->f[3]+c->f[4]; // 80192950
  {uint32_t ea=c->r[1]+0x00000010u; c->f[11]=RF64(ea);} // 80192954
  c->f[0]=c->f[0]+c->f[2]; // 80192958
  c->f[10]=c->f[11]*c->f[11]; // 8019295C
  {uint32_t ea=c->r[2]+0xFFFF8F60u; c->f[6]=RF64(ea);} // 80192960
  {uint32_t ea=c->r[2]+0xFFFF8F58u; c->f[8]=RF64(ea);} // 80192964
  c->f[2]=c->f[31]*c->f[3]; // 80192968
  {uint32_t ea=c->r[2]+0xFFFF8F88u; c->f[4]=RF64(ea);} // 8019296C
  {uint32_t ea=c->r[2]+0xFFFF8F50u; c->f[7]=RF64(ea);} // 80192970
  c->f[5]=c->f[31]*c->f[0]; // 80192974
  {uint32_t ea=c->r[2]+0xFFFF8F80u; c->f[3]=RF64(ea);} // 80192978
  c->f[0]=c->f[6]+c->f[2]; // 8019297C
  {uint32_t ea=c->r[2]+0xFFFF8F48u; c->f[6]=RF64(ea);} // 80192980
  {uint32_t ea=c->r[2]+0xFFFF8F78u; c->f[2]=RF64(ea);} // 80192984
  c->f[10]=c->f[31]-c->f[10]; // 80192988
  c->f[9]=c->f[31]*c->f[0]; // 8019298C
  {uint32_t ea=c->r[2]+0xFFFF8FB0u; c->f[0]=RF64(ea);} // 80192990
  c->f[4]=c->f[4]+c->f[5]; // 80192994
  c->f[5]=c->f[8]+c->f[9]; // 80192998
  c->f[4]=c->f[31]*c->f[4]; // 8019299C
  c->f[5]=c->f[31]*c->f[5]; // 801929A0
  c->f[3]=c->f[3]+c->f[4]; // 801929A4
  c->f[8]=c->f[1]+c->f[11]; // 801929A8
  c->f[4]=c->f[7]+c->f[5]; // 801929AC
  c->f[3]=c->f[31]*c->f[3]; // 801929B0
  c->f[4]=c->f[31]*c->f[4]; // 801929B4
  c->f[3]=c->f[2]+c->f[3]; // 801929B8
  c->f[5]=c->f[10]/c->f[8]; // 801929BC
  c->f[2]=c->f[6]+c->f[4]; // 801929C0
  c->f[2]=c->f[31]*c->f[2]; // 801929C4
  c->f[2]=c->f[2]/c->f[3]; // 801929C8
  c->f[1]=c->f[2]*c->f[1]; // 801929CC
  c->f[1]=c->f[5]+c->f[1]; // 801929D0
  c->f[1]=c->f[11]+c->f[1]; // 801929D4
  c->f[1]=c->f[0]*c->f[1]; // 801929D8
L_801929DC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801929DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801929E0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801929E4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801929E8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801929EC
  c->lr=c->r[0]; // 801929F0
  c->r[1]=c->r[1]+0x00000040u; // 801929F4
  return; // 801929F8
}

// fn_801929FC
void f_801929FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801929FC
  c->r[0]=c->lr; // 80192A00
  W32(c->r[1]+0x00000054u,c->r[0]); // 80192A04
  c->r[0]=0u+0x3FF00000u; // 80192A08
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80192A0C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80192A10
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80192A14
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80192A18
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 80192A1C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 80192A20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80192A24
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80192A28
  c->r[31]=R32(c->r[1]+0x00000008u); // 80192A2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80192A30
  c->r[30]=rotl(c->r[31],0)&0x7FFFFFFFu; // 80192A34
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80192A38
  if (crb(c,0)) { goto L_80192A7C; } // 80192A3C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80192A40
  c->r[3]=c->r[30]+0xC0100000u; // 80192A44
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80192A48
  if (!crb(c,2)) { goto L_80192A68; } // 80192A4C
  {uint32_t ea=c->r[2]+0xFFFF8FB8u; c->f[2]=RF64(ea);} // 80192A50
  {uint32_t ea=c->r[2]+0xFFFF8FC0u; c->f[0]=RF64(ea);} // 80192A54
  c->f[2]=c->f[2]*c->f[1]; // 80192A58
  c->f[0]=c->f[0]*c->f[1]; // 80192A5C
  c->f[1]=c->f[2]+c->f[0]; // 80192A60
  goto L_80192C64; // 80192A64
L_80192A68:;
  c->r[3]=0u+0x80440000u; // 80192A68
  c->r[0]=0u+0x00000021u; // 80192A6C
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80192A70
  {uint32_t ea=c->r[3]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80192A74
  goto L_80192C64; // 80192A78
L_80192A7C:;
  c->r[0]=0u+0x3FE00000u; // 80192A7C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80192A80
  if (!crb(c,0)) { goto L_80192B38; } // 80192A84
  c->r[0]=0u+0x3E400000u; // 80192A88
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80192A8C
  if (!crb(c,0)) { goto L_80192AAC; } // 80192A90
  {uint32_t ea=c->r[2]+0xFFFF8FC8u; c->f[2]=RF64(ea);} // 80192A94
  {uint32_t ea=c->r[2]+0xFFFF8FD0u; c->f[0]=RF64(ea);} // 80192A98
  c->f[2]=c->f[2]+c->f[1]; // 80192A9C
  fcmp(c,0,c->f[2],c->f[0]); // 80192AA0
  if (!crb(c,1)) { goto L_80192AB0; } // 80192AA4
  goto L_80192C64; // 80192AA8
L_80192AAC:;
  c->f[31]=c->f[1]*c->f[1]; // 80192AAC
L_80192AB0:;
  {uint32_t ea=c->r[2]+0xFFFF9000u; c->f[2]=RF64(ea);} // 80192AB0
  {uint32_t ea=c->r[2]+0xFFFF9020u; c->f[0]=RF64(ea);} // 80192AB4
  c->f[4]=c->f[2]*c->f[31]; // 80192AB8
  {uint32_t ea=c->r[2]+0xFFFF8FF8u; c->f[3]=RF64(ea);} // 80192ABC
  {uint32_t ea=c->r[2]+0xFFFF8FF0u; c->f[8]=RF64(ea);} // 80192AC0
  c->f[2]=c->f[0]*c->f[31]; // 80192AC4
  {uint32_t ea=c->r[2]+0xFFFF9018u; c->f[0]=RF64(ea);} // 80192AC8
  {uint32_t ea=c->r[2]+0xFFFF8FE8u; c->f[7]=RF64(ea);} // 80192ACC
  c->f[4]=c->f[3]+c->f[4]; // 80192AD0
  {uint32_t ea=c->r[2]+0xFFFF9010u; c->f[3]=RF64(ea);} // 80192AD4
  c->f[0]=c->f[0]+c->f[2]; // 80192AD8
  {uint32_t ea=c->r[2]+0xFFFF9008u; c->f[2]=RF64(ea);} // 80192ADC
  c->f[9]=c->f[31]*c->f[4]; // 80192AE0
  {uint32_t ea=c->r[2]+0xFFFF8FE0u; c->f[6]=RF64(ea);} // 80192AE4
  {uint32_t ea=c->r[2]+0xFFFF8FD8u; c->f[5]=RF64(ea);} // 80192AE8
  c->f[4]=c->f[31]*c->f[0]; // 80192AEC
  {uint32_t ea=c->r[2]+0xFFFF8FD0u; c->f[0]=RF64(ea);} // 80192AF0
  c->f[8]=c->f[8]+c->f[9]; // 80192AF4
  c->f[3]=c->f[3]+c->f[4]; // 80192AF8
  c->f[4]=c->f[31]*c->f[8]; // 80192AFC
  c->f[3]=c->f[31]*c->f[3]; // 80192B00
  c->f[4]=c->f[7]+c->f[4]; // 80192B04
  c->f[2]=c->f[2]+c->f[3]; // 80192B08
  c->f[3]=c->f[31]*c->f[4]; // 80192B0C
  c->f[2]=c->f[31]*c->f[2]; // 80192B10
  c->f[3]=c->f[6]+c->f[3]; // 80192B14
  c->f[2]=c->f[0]+c->f[2]; // 80192B18
  c->f[0]=c->f[31]*c->f[3]; // 80192B1C
  c->f[0]=c->f[5]+c->f[0]; // 80192B20
  c->f[0]=c->f[31]*c->f[0]; // 80192B24
  c->f[0]=c->f[0]/c->f[2]; // 80192B28
  c->f[0]=c->f[1]*c->f[0]; // 80192B2C
  c->f[1]=c->f[1]+c->f[0]; // 80192B30
  goto L_80192C64; // 80192B34
L_80192B38:;
  c->f[1]=std::fabs(c->f[1]); // 80192B38
  {uint32_t ea=c->r[2]+0xFFFF8FD0u; c->f[11]=RF64(ea);} // 80192B3C
  {uint32_t ea=c->r[2]+0xFFFF9028u; c->f[2]=RF64(ea);} // 80192B40
  {uint32_t ea=c->r[2]+0xFFFF9000u; c->f[0]=RF64(ea);} // 80192B44
  c->f[3]=c->f[11]-c->f[1]; // 80192B48
  {uint32_t ea=c->r[2]+0xFFFF9020u; c->f[1]=RF64(ea);} // 80192B4C
  {uint32_t ea=c->r[2]+0xFFFF8FF8u; c->f[9]=RF64(ea);} // 80192B50
  {uint32_t ea=c->r[2]+0xFFFF8FF0u; c->f[8]=RF64(ea);} // 80192B54
  c->f[31]=c->f[2]*c->f[3]; // 80192B58
  {uint32_t ea=c->r[2]+0xFFFF9018u; c->f[3]=RF64(ea);} // 80192B5C
  {uint32_t ea=c->r[2]+0xFFFF9010u; c->f[2]=RF64(ea);} // 80192B60
  {uint32_t ea=c->r[2]+0xFFFF8FE8u; c->f[7]=RF64(ea);} // 80192B64
  {uint32_t ea=c->r[2]+0xFFFF8FE0u; c->f[6]=RF64(ea);} // 80192B68
  c->f[10]=c->f[0]*c->f[31]; // 80192B6C
  {uint32_t ea=c->r[2]+0xFFFF9008u; c->f[0]=RF64(ea);} // 80192B70
  c->f[4]=c->f[1]*c->f[31]; // 80192B74
  {uint32_t ea=c->r[2]+0xFFFF8FD8u; c->f[5]=RF64(ea);} // 80192B78
  c->f[9]=c->f[9]+c->f[10]; // 80192B7C
  c->f[1]=c->f[31]; // 80192B80
  c->f[3]=c->f[3]+c->f[4]; // 80192B84
  c->f[4]=c->f[31]*c->f[9]; // 80192B88
  c->f[3]=c->f[31]*c->f[3]; // 80192B8C
  c->f[4]=c->f[8]+c->f[4]; // 80192B90
  c->f[2]=c->f[2]+c->f[3]; // 80192B94
  c->f[3]=c->f[31]*c->f[4]; // 80192B98
  c->f[2]=c->f[31]*c->f[2]; // 80192B9C
  c->f[3]=c->f[7]+c->f[3]; // 80192BA0
  c->f[0]=c->f[0]+c->f[2]; // 80192BA4
  c->f[2]=c->f[31]*c->f[3]; // 80192BA8
  c->f[0]=c->f[31]*c->f[0]; // 80192BAC
  c->f[2]=c->f[6]+c->f[2]; // 80192BB0
  c->f[29]=c->f[11]+c->f[0]; // 80192BB4
  c->f[0]=c->f[31]*c->f[2]; // 80192BB8
  c->f[0]=c->f[5]+c->f[0]; // 80192BBC
  c->f[30]=c->f[31]*c->f[0]; // 80192BC0
  c->lr=0x80192BC8u; f_80196B38(c); // 80192BC4
  c->r[3]=0u+0x3FEF0000u; // 80192BC8
  c->r[0]=c->r[3]+0x00003333u; // 80192BCC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80192BD0
  if (crb(c,0)) { goto L_80192C00; } // 80192BD4
  c->f[4]=c->f[30]/c->f[29]; // 80192BD8
  {uint32_t ea=c->r[2]+0xFFFF9030u; c->f[3]=RF64(ea);} // 80192BDC
  {uint32_t ea=c->r[2]+0xFFFF8FC0u; c->f[2]=RF64(ea);} // 80192BE0
  {uint32_t ea=c->r[2]+0xFFFF8FB8u; c->f[0]=RF64(ea);} // 80192BE4
  c->f[4]=c->f[1]*c->f[4]; // 80192BE8
  c->f[1]=c->f[1]+c->f[4]; // 80192BEC
  c->f[1]=c->f[3]*c->f[1]; // 80192BF0
  c->f[1]=c->f[1]-c->f[2]; // 80192BF4
  c->f[1]=c->f[0]-c->f[1]; // 80192BF8
  goto L_80192C54; // 80192BFC
L_80192C00:;
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 80192C00
  c->r[0]=0u+0x00000000u; // 80192C04
  {uint32_t ea=c->r[2]+0xFFFF9030u; c->f[5]=RF64(ea);} // 80192C08
  c->f[8]=c->f[30]/c->f[29]; // 80192C0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80192C10
  {uint32_t ea=c->r[2]+0xFFFF8FC0u; c->f[3]=RF64(ea);} // 80192C14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[7]=RF64(ea);} // 80192C18
  {uint32_t ea=c->r[2]+0xFFFF9038u; c->f[2]=RF64(ea);} // 80192C1C
  c->f[4]=c->f[5]*c->f[1]; // 80192C20
  c->f[0]=c->f[7]*c->f[7]; // 80192C24
  c->f[6]=c->f[1]+c->f[7]; // 80192C28
  c->f[4]=c->f[4]*c->f[8]; // 80192C2C
  c->f[1]=c->f[31]-c->f[0]; // 80192C30
  c->f[0]=c->f[5]*c->f[7]; // 80192C34
  c->f[1]=c->f[1]/c->f[6]; // 80192C38
  c->f[1]=c->f[5]*c->f[1]; // 80192C3C
  c->f[1]=c->f[3]-c->f[1]; // 80192C40
  c->f[3]=c->f[2]-c->f[0]; // 80192C44
  c->f[0]=c->f[4]-c->f[1]; // 80192C48
  c->f[0]=c->f[0]-c->f[3]; // 80192C4C
  c->f[1]=c->f[2]-c->f[0]; // 80192C50
L_80192C54:;
  cmps(c,0,(int32_t)c->r[31],0); // 80192C54
  if (!crb(c,1)) { goto L_80192C60; } // 80192C58
  goto L_80192C64; // 80192C5C
L_80192C60:;
  c->f[1]=-c->f[1]; // 80192C60
L_80192C64:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80192C64
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80192C68
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80192C6C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80192C70
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80192C74
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 80192C78
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 80192C7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80192C80
  c->r[30]=R32(c->r[1]+0x00000018u); // 80192C84
  c->lr=c->r[0]; // 80192C88
  c->r[1]=c->r[1]+0x00000050u; // 80192C8C
  return; // 80192C90
}

// fn_80192C94
void f_80192C94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80192C94
  c->r[0]=c->lr; // 80192C98
  c->r[3]=0u+0x7FF00000u; // 80192C9C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 80192CA0
  c->r[8]=R32(c->r[1]+0x00000014u); // 80192CA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80192CA8
  c->r[0]=0u-c->r[8]; // 80192CAC
  c->r[4]=R32(c->r[1]+0x00000010u); // 80192CB0
  c->r[0]=c->r[8]|c->r[0]; // 80192CB4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80192CB8
  c->r[6]=rotl(c->r[4],0)&0x7FFFFFFFu; // 80192CBC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80192CC0
  c->r[5]=R32(c->r[1]+0x00000008u); // 80192CC4
  c->r[0]=c->r[6]|c->r[0]; // 80192CC8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80192CCC
  cmpu(c,0,c->r[0],c->r[3]); // 80192CD0
  c->r[9]=R32(c->r[1]+0x0000000Cu); // 80192CD4
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 80192CD8
  if (crb(c,1)) { goto L_80192CF8; } // 80192CDC
  c->r[0]=0u-c->r[9]; // 80192CE0
  c->r[0]=c->r[9]|c->r[0]; // 80192CE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80192CE8
  c->r[0]=c->r[7]|c->r[0]; // 80192CEC
  cmpu(c,0,c->r[0],c->r[3]); // 80192CF0
  if (!crb(c,1)) { goto L_80192D00; } // 80192CF4
L_80192CF8:;
  c->f[1]=c->f[2]+c->f[1]; // 80192CF8
  goto L_80192ED8; // 80192CFC
L_80192D00:;
  c->r[0]=c->r[4]+0xC0100000u; // 80192D00
  c->r[0]=c->r[0]|c->r[8]; cr0(c,c->r[0]); // 80192D04
  if (!crb(c,2)) { goto L_80192D14; } // 80192D08
  c->lr=0x80192D10u; f_80195ED4(c); // 80192D0C
  goto L_80192ED8; // 80192D10
L_80192D14:;
  c->r[0]=c->r[7]|c->r[9]; cr0(c,c->r[0]); // 80192D14
  c->r[31]=rotl(c->r[4],2)&0x00000002u; // 80192D18
  c->r[31]=(rotl(c->r[5],1)&0x00000001u)|(c->r[31]&~0x00000001u); // 80192D1C
  if (!crb(c,2)) { goto L_80192D54; } // 80192D20
  cmpu(c,0,c->r[31],0x00000001u); // 80192D24
  if (!crb(c,1)) { goto L_80192ED8; } // 80192D28
  cmps(c,0,(int32_t)c->r[31],2); // 80192D2C
  if (crb(c,2)) { goto L_80192D44; } // 80192D30
  cmps(c,0,(int32_t)c->r[31],3); // 80192D34
  if (crb(c,2)) { goto L_80192D4C; } // 80192D38
  goto L_80192D54; // 80192D3C
  goto L_80192ED8; // 80192D40
L_80192D44:;
  {uint32_t ea=c->r[2]+0xFFFF9040u; c->f[1]=RF64(ea);} // 80192D44
  goto L_80192ED8; // 80192D48
L_80192D4C:;
  {uint32_t ea=c->r[2]+0xFFFF9048u; c->f[1]=RF64(ea);} // 80192D4C
  goto L_80192ED8; // 80192D50
L_80192D54:;
  c->r[0]=c->r[6]|c->r[8]; cr0(c,c->r[0]); // 80192D54
  if (!crb(c,2)) { goto L_80192D74; } // 80192D58
  cmps(c,0,(int32_t)c->r[5],0); // 80192D5C
  if (!crb(c,0)) { goto L_80192D6C; } // 80192D60
  {uint32_t ea=c->r[2]+0xFFFF9050u; c->f[1]=RF64(ea);} // 80192D64
  goto L_80192ED8; // 80192D68
L_80192D6C:;
  {uint32_t ea=c->r[2]+0xFFFF9058u; c->f[1]=RF64(ea);} // 80192D6C
  goto L_80192ED8; // 80192D70
L_80192D74:;
  c->r[0]=c->r[6]+0x80100000u; // 80192D74
  cmpu(c,0,c->r[0],0x00000000u); // 80192D78
  if (!crb(c,2)) { goto L_80192E14; } // 80192D7C
  c->r[0]=c->r[7]+0x80100000u; // 80192D80
  cmpu(c,0,c->r[0],0x00000000u); // 80192D84
  if (!crb(c,2)) { goto L_80192DD0; } // 80192D88
  cmps(c,0,(int32_t)c->r[31],0); // 80192D8C
  if (crb(c,2)) { goto L_80192DB0; } // 80192D90
  cmps(c,0,(int32_t)c->r[31],1); // 80192D94
  if (crb(c,2)) { goto L_80192DB8; } // 80192D98
  cmps(c,0,(int32_t)c->r[31],2); // 80192D9C
  if (crb(c,2)) { goto L_80192DC0; } // 80192DA0
  cmps(c,0,(int32_t)c->r[31],3); // 80192DA4
  if (crb(c,2)) { goto L_80192DC8; } // 80192DA8
  goto L_80192E14; // 80192DAC
L_80192DB0:;
  {uint32_t ea=c->r[2]+0xFFFF9060u; c->f[1]=RF64(ea);} // 80192DB0
  goto L_80192ED8; // 80192DB4
L_80192DB8:;
  {uint32_t ea=c->r[2]+0xFFFF9068u; c->f[1]=RF64(ea);} // 80192DB8
  goto L_80192ED8; // 80192DBC
L_80192DC0:;
  {uint32_t ea=c->r[2]+0xFFFF9070u; c->f[1]=RF64(ea);} // 80192DC0
  goto L_80192ED8; // 80192DC4
L_80192DC8:;
  {uint32_t ea=c->r[2]+0xFFFF9078u; c->f[1]=RF64(ea);} // 80192DC8
  goto L_80192ED8; // 80192DCC
L_80192DD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80192DD0
  if (crb(c,2)) { goto L_80192DF4; } // 80192DD4
  cmps(c,0,(int32_t)c->r[31],1); // 80192DD8
  if (crb(c,2)) { goto L_80192DFC; } // 80192DDC
  cmps(c,0,(int32_t)c->r[31],2); // 80192DE0
  if (crb(c,2)) { goto L_80192E04; } // 80192DE4
  cmps(c,0,(int32_t)c->r[31],3); // 80192DE8
  if (crb(c,2)) { goto L_80192E0C; } // 80192DEC
  goto L_80192E14; // 80192DF0
L_80192DF4:;
  {uint32_t ea=c->r[2]+0xFFFF9080u; c->f[1]=RF64(ea);} // 80192DF4
  goto L_80192ED8; // 80192DF8
L_80192DFC:;
  {uint32_t ea=c->r[2]+0xFFFF9088u; c->f[1]=RF64(ea);} // 80192DFC
  goto L_80192ED8; // 80192E00
L_80192E04:;
  {uint32_t ea=c->r[2]+0xFFFF9040u; c->f[1]=RF64(ea);} // 80192E04
  goto L_80192ED8; // 80192E08
L_80192E0C:;
  {uint32_t ea=c->r[2]+0xFFFF9048u; c->f[1]=RF64(ea);} // 80192E0C
  goto L_80192ED8; // 80192E10
L_80192E14:;
  c->r[0]=c->r[7]+0x80100000u; // 80192E14
  cmpu(c,0,c->r[0],0x00000000u); // 80192E18
  if (!crb(c,2)) { goto L_80192E38; } // 80192E1C
  cmps(c,0,(int32_t)c->r[5],0); // 80192E20
  if (!crb(c,0)) { goto L_80192E30; } // 80192E24
  {uint32_t ea=c->r[2]+0xFFFF9050u; c->f[1]=RF64(ea);} // 80192E28
  goto L_80192ED8; // 80192E2C
L_80192E30:;
  {uint32_t ea=c->r[2]+0xFFFF9058u; c->f[1]=RF64(ea);} // 80192E30
  goto L_80192ED8; // 80192E34
L_80192E38:;
  c->r[0]=c->r[7]-c->r[6]; // 80192E38
  c->r[0]=sraw(c,c->r[0],20); // 80192E3C
  cmps(c,0,(int32_t)c->r[0],60); // 80192E40
  if (!crb(c,1)) { goto L_80192E54; } // 80192E44
  {uint32_t ea=c->r[2]+0xFFFF9058u; c->f[1]=RF64(ea);} // 80192E48
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 80192E4C
  goto L_80192E80; // 80192E50
L_80192E54:;
  cmps(c,0,(int32_t)c->r[4],0); // 80192E54
  if (!crb(c,0)) { goto L_80192E70; } // 80192E58
  cmps(c,0,(int32_t)c->r[0],-60); // 80192E5C
  if (!crb(c,0)) { goto L_80192E70; } // 80192E60
  {uint32_t ea=c->r[2]+0xFFFF9080u; c->f[1]=RF64(ea);} // 80192E64
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 80192E68
  goto L_80192E80; // 80192E6C
L_80192E70:;
  c->f[0]=c->f[1]/c->f[2]; // 80192E70
  c->f[1]=std::fabs(c->f[0]); // 80192E74
  c->lr=0x80192E7Cu; f_80195ED4(c); // 80192E78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 80192E7C
L_80192E80:;
  cmps(c,0,(int32_t)c->r[31],0); // 80192E80
  if (crb(c,2)) { goto L_80192ED8; } // 80192E84
  cmps(c,0,(int32_t)c->r[31],1); // 80192E88
  if (crb(c,2)) { goto L_80192EA0; } // 80192E8C
  cmps(c,0,(int32_t)c->r[31],2); // 80192E90
  if (crb(c,2)) { goto L_80192EB4; } // 80192E94
  goto L_80192EC8; // 80192E98
  goto L_80192ED8; // 80192E9C
L_80192EA0:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 80192EA0
  c->r[0]=c->r[0]^0x80000000u; // 80192EA4
  W32(c->r[1]+0x00000018u,c->r[0]); // 80192EA8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80192EAC
  goto L_80192ED8; // 80192EB0
L_80192EB4:;
  {uint32_t ea=c->r[2]+0xFFFF9090u; c->f[2]=RF64(ea);} // 80192EB4
  {uint32_t ea=c->r[2]+0xFFFF9040u; c->f[0]=RF64(ea);} // 80192EB8
  c->f[1]=c->f[1]-c->f[2]; // 80192EBC
  c->f[1]=c->f[0]-c->f[1]; // 80192EC0
  goto L_80192ED8; // 80192EC4
L_80192EC8:;
  {uint32_t ea=c->r[2]+0xFFFF9090u; c->f[2]=RF64(ea);} // 80192EC8
  {uint32_t ea=c->r[2]+0xFFFF9040u; c->f[0]=RF64(ea);} // 80192ECC
  c->f[1]=c->f[1]-c->f[2]; // 80192ED0
  c->f[1]=c->f[1]-c->f[0]; // 80192ED4
L_80192ED8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80192ED8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80192EDC
  c->lr=c->r[0]; // 80192EE0
  c->r[1]=c->r[1]+0x00000030u; // 80192EE4
  return; // 80192EE8
}

// fn_80192EEC
void f_80192EEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80192EEC
  c->r[3]=0u+0x40860000u; // 80192EF0
  c->r[5]=0u+0x802E0000u; // 80192EF4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80192EF8
  c->r[0]=c->r[3]+0x00002E42u; // 80192EFC
  c->r[5]=c->r[5]+0x000009A8u; // 80192F00
  c->r[4]=R32(c->r[1]+0x00000008u); // 80192F04
  c->r[6]=rotl(c->r[4],1)&0x00000001u; // 80192F08
  c->r[4]=rotl(c->r[4],0)&0x7FFFFFFFu; // 80192F0C
  cmpu(c,0,c->r[4],c->r[0]); // 80192F10
  if (crb(c,0)) { goto L_80192F78; } // 80192F14
  c->r[0]=0u+0x7FF00000u; // 80192F18
  cmpu(c,0,c->r[4],c->r[0]); // 80192F1C
  if (crb(c,0)) { goto L_80192F50; } // 80192F20
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80192F24
  c->r[3]=rotl(c->r[4],0)&0x000FFFFFu; // 80192F28
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80192F2C
  if (crb(c,2)) { goto L_80192F3C; } // 80192F30
  c->f[1]=c->f[1]+c->f[1]; // 80192F34
  goto L_80193114; // 80192F38
L_80192F3C:;
  cmps(c,0,(int32_t)c->r[6],0); // 80192F3C
  if (!crb(c,2)) { goto L_80192F48; } // 80192F40
  goto L_80193114; // 80192F44
L_80192F48:;
  {uint32_t ea=c->r[2]+0xFFFF9098u; c->f[1]=RF64(ea);} // 80192F48
  goto L_80193114; // 80192F4C
L_80192F50:;
  {uint32_t ea=c->r[2]+0xFFFF90A0u; c->f[0]=RF64(ea);} // 80192F50
  fcmp(c,0,c->f[1],c->f[0]); // 80192F54
  if (!crb(c,1)) { goto L_80192F64; } // 80192F58
  {uint32_t ea=c->r[2]+0xFFFF90A8u; c->f[1]=RF64(ea);} // 80192F5C
  goto L_80193114; // 80192F60
L_80192F64:;
  {uint32_t ea=c->r[2]+0xFFFF90B0u; c->f[0]=RF64(ea);} // 80192F64
  fcmp(c,0,c->f[1],c->f[0]); // 80192F68
  if (!crb(c,0)) { goto L_80192F78; } // 80192F6C
  {uint32_t ea=c->r[2]+0xFFFF9098u; c->f[1]=RF64(ea);} // 80192F70
  goto L_80193114; // 80192F74
L_80192F78:;
  c->r[3]=0u+0x3FD60000u; // 80192F78
  c->r[0]=c->r[3]+0x00002E42u; // 80192F7C
  cmpu(c,0,c->r[4],c->r[0]); // 80192F80
  if (!crb(c,1)) { goto L_8019301C; } // 80192F84
  c->r[3]=0u+0x3FF10000u; // 80192F88
  c->r[0]=c->r[3]+0xFFFFA2B2u; // 80192F8C
  cmpu(c,0,c->r[4],c->r[0]); // 80192F90
  if (!crb(c,0)) { goto L_80192FC0; } // 80192F94
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80192F98
  c->r[3]=c->r[5]+0x00000010u; // 80192F9C
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=RF64(ea);} // 80192FA0
  c->r[3]=c->r[5]+0x00000020u; // 80192FA4
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80192FA8
  {uint32_t ea=c->r[3]+c->r[4]; c->f[8]=RF64(ea);} // 80192FAC
  c->f[7]=c->f[1]-c->f[0]; // 80192FB0
  c->r[3]=0u-c->r[0]; // 80192FB4
  c->r[4]=c->r[3]+0x00000001u; // 80192FB8
  goto L_80193014; // 80192FBC
L_80192FC0:;
  {uint32_t ea=c->r[2]+0xFFFF90B8u; c->f[0]=RF64(ea);} // 80192FC0
  c->r[0]=0u+0x43300000u; // 80192FC4
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80192FC8
  c->r[3]=c->r[5]+0x00000000u; // 80192FCC
  c->f[3]=c->f[0]*c->f[1]; // 80192FD0
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=RF64(ea);} // 80192FD4
  W32(c->r[1]+0x00000020u,c->r[0]); // 80192FD8
  {uint32_t ea=c->r[2]+0xFFFF9108u; c->f[4]=RF64(ea);} // 80192FDC
  {uint32_t ea=c->r[5]+0x00000010u; c->f[2]=RF64(ea);} // 80192FE0
  c->f[3]=c->f[3]+c->f[0]; // 80192FE4
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=RF64(ea);} // 80192FE8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80192FEC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 80192FF0
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80192FF4
  c->r[0]=c->r[4]^0x80000000u; // 80192FF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80192FFC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=RF64(ea);} // 80193000
  c->f[3]=c->f[3]-c->f[4]; // 80193004
  c->f[2]=c->f[3]*c->f[2]; // 80193008
  c->f[8]=c->f[3]*c->f[0]; // 8019300C
  c->f[7]=c->f[1]-c->f[2]; // 80193010
L_80193014:;
  c->f[1]=c->f[7]-c->f[8]; // 80193014
  goto L_80193048; // 80193018
L_8019301C:;
  c->r[0]=0u+0x3E300000u; // 8019301C
  cmpu(c,0,c->r[4],c->r[0]); // 80193020
  if (!crb(c,0)) { goto L_80193044; } // 80193024
  {uint32_t ea=c->r[2]+0xFFFF90C0u; c->f[2]=RF64(ea);} // 80193028
  {uint32_t ea=c->r[2]+0xFFFF90C8u; c->f[0]=RF64(ea);} // 8019302C
  c->f[2]=c->f[2]+c->f[1]; // 80193030
  fcmp(c,0,c->f[2],c->f[0]); // 80193034
  if (!crb(c,1)) { goto L_80193048; } // 80193038
  c->f[1]=c->f[0]+c->f[1]; // 8019303C
  goto L_80193114; // 80193040
L_80193044:;
  c->r[4]=0u+0x00000000u; // 80193044
L_80193048:;
  c->f[6]=c->f[1]*c->f[1]; // 80193048
  {uint32_t ea=c->r[2]+0xFFFF90F0u; c->f[0]=RF64(ea);} // 8019304C
  {uint32_t ea=c->r[2]+0xFFFF90E8u; c->f[4]=RF64(ea);} // 80193050
  cmps(c,0,(int32_t)c->r[4],0); // 80193054
  {uint32_t ea=c->r[2]+0xFFFF90E0u; c->f[3]=RF64(ea);} // 80193058
  {uint32_t ea=c->r[2]+0xFFFF90D8u; c->f[2]=RF64(ea);} // 8019305C
  c->f[5]=c->f[0]*c->f[6]; // 80193060
  {uint32_t ea=c->r[2]+0xFFFF90D0u; c->f[0]=RF64(ea);} // 80193064
  c->f[4]=c->f[4]+c->f[5]; // 80193068
  c->f[4]=c->f[6]*c->f[4]; // 8019306C
  c->f[3]=c->f[3]+c->f[4]; // 80193070
  c->f[3]=c->f[6]*c->f[3]; // 80193074
  c->f[2]=c->f[2]+c->f[3]; // 80193078
  c->f[2]=c->f[6]*c->f[2]; // 8019307C
  c->f[0]=c->f[0]+c->f[2]; // 80193080
  c->f[0]=c->f[6]*c->f[0]; // 80193084
  c->f[4]=c->f[1]-c->f[0]; // 80193088
  if (!crb(c,2)) { goto L_801930B0; } // 8019308C
  {uint32_t ea=c->r[2]+0xFFFF90F8u; c->f[2]=RF64(ea);} // 80193090
  c->f[3]=c->f[1]*c->f[4]; // 80193094
  {uint32_t ea=c->r[2]+0xFFFF90C8u; c->f[0]=RF64(ea);} // 80193098
  c->f[2]=c->f[4]-c->f[2]; // 8019309C
  c->f[2]=c->f[3]/c->f[2]; // 801930A0
  c->f[1]=c->f[2]-c->f[1]; // 801930A4
  c->f[1]=c->f[0]-c->f[1]; // 801930A8
  goto L_80193114; // 801930AC
L_801930B0:;
  {uint32_t ea=c->r[2]+0xFFFF90F8u; c->f[2]=RF64(ea);} // 801930B0
  c->f[3]=c->f[1]*c->f[4]; // 801930B4
  {uint32_t ea=c->r[2]+0xFFFF90C8u; c->f[0]=RF64(ea);} // 801930B8
  cmps(c,0,(int32_t)c->r[4],-1021); // 801930BC
  c->f[1]=c->f[2]-c->f[4]; // 801930C0
  c->f[1]=c->f[3]/c->f[1]; // 801930C4
  c->f[1]=c->f[8]-c->f[1]; // 801930C8
  c->f[1]=c->f[1]-c->f[7]; // 801930CC
  c->f[0]=c->f[0]-c->f[1]; // 801930D0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801930D4
  if (crb(c,0)) { goto L_801930F4; } // 801930D8
  c->r[3]=R32(c->r[1]+0x00000010u); // 801930DC
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 801930E0
  c->r[0]=c->r[3]+c->r[0]; // 801930E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801930E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801930EC
  goto L_80193114; // 801930F0
L_801930F4:;
  c->r[0]=c->r[4]+0x000003E8u; // 801930F4
  c->r[3]=R32(c->r[1]+0x00000010u); // 801930F8
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 801930FC
  {uint32_t ea=c->r[2]+0xFFFF9100u; c->f[1]=RF64(ea);} // 80193100
  c->r[0]=c->r[3]+c->r[0]; // 80193104
  W32(c->r[1]+0x00000010u,c->r[0]); // 80193108
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8019310C
  c->f[1]=c->f[1]*c->f[0]; // 80193110
L_80193114:;
  c->r[1]=c->r[1]+0x00000030u; // 80193114
  return; // 80193118
}

// fn_8019311C
void f_8019311C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019311C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 80193120
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80193124
  c->r[0]=R32(c->r[1]+0x00000010u); // 80193128
  c->r[7]=R32(c->r[1]+0x00000008u); // 8019312C
  c->r[6]=R32(c->r[1]+0x00000014u); // 80193130
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80193134
  c->r[4]=rotl(c->r[7],0)&0x80000000u; // 80193138
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8019313C
  c->r[3]=c->r[0]|c->r[6]; cr0(c,c->r[3]); // 80193140
  c->r[8]=c->r[7]^c->r[4]; // 80193144
  if (crb(c,2)) { goto L_80193170; } // 80193148
  c->r[7]=0u+0x7FF00000u; // 8019314C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 80193150
  if (!crb(c,0)) { goto L_80193170; } // 80193154
  c->r[3]=0u-c->r[6]; // 80193158
  c->r[3]=c->r[6]|c->r[3]; // 8019315C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80193160
  c->r[3]=c->r[0]|c->r[3]; // 80193164
  cmpu(c,0,c->r[3],c->r[7]); // 80193168
  if (!crb(c,1)) { goto L_8019317C; } // 8019316C
L_80193170:;
  c->f[0]=c->f[1]*c->f[2]; // 80193170
  c->f[1]=c->f[0]/c->f[0]; // 80193174
  goto L_80193494; // 80193178
L_8019317C:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8019317C
  if (crb(c,1)) { goto L_801931AC; } // 80193180
  if (crb(c,0)) { goto L_80193494; } // 80193184
  cmpu(c,0,c->r[5],c->r[6]); // 80193188
  if (!crb(c,0)) { goto L_80193194; } // 8019318C
  goto L_80193494; // 80193190
L_80193194:;
  if (!crb(c,2)) { goto L_801931AC; } // 80193194
  c->r[3]=0u+0x802E0000u; // 80193198
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 8019319C
  c->r[3]=c->r[3]+0x000009D8u; // 801931A0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801931A4
  goto L_80193494; // 801931A8
L_801931AC:;
  c->r[3]=0u+0x00100000u; // 801931AC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 801931B0
  if (!crb(c,0)) { goto L_80193200; } // 801931B4
  cmps(c,0,(int32_t)c->r[8],0); // 801931B8
  if (!crb(c,2)) { goto L_801931E0; } // 801931BC
  c->r[3]=c->r[5]|c->r[5]; // 801931C0
  c->r[11]=0u+0xFFFFFBEDu; // 801931C4
  goto L_801931D4; // 801931C8
L_801931CC:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801931CC
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 801931D0
L_801931D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801931D4
  if (crb(c,1)) { IRQCHK(c); goto L_801931CC; } // 801931D8
  goto L_80193208; // 801931DC
L_801931E0:;
  c->r[3]=rotl(c->r[8],11)&0xFFFFF800u; // 801931E0
  c->r[11]=0u+0xFFFFFC02u; // 801931E4
  goto L_801931F4; // 801931E8
L_801931EC:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801931EC
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 801931F0
L_801931F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801931F4
  if (crb(c,1)) { IRQCHK(c); goto L_801931EC; } // 801931F8
  goto L_80193208; // 801931FC
L_80193200:;
  c->r[3]=sraw(c,c->r[8],20); // 80193200
  c->r[11]=c->r[3]+0xFFFFFC01u; // 80193204
L_80193208:;
  c->r[3]=0u+0x00100000u; // 80193208
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8019320C
  if (!crb(c,0)) { goto L_8019325C; } // 80193210
  cmps(c,0,(int32_t)c->r[0],0); // 80193214
  if (!crb(c,2)) { goto L_8019323C; } // 80193218
  c->r[7]=c->r[6]|c->r[6]; // 8019321C
  c->r[3]=0u+0xFFFFFBEDu; // 80193220
  goto L_80193230; // 80193224
L_80193228:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80193228
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8019322C
L_80193230:;
  cmps(c,0,(int32_t)c->r[7],0); // 80193230
  if (crb(c,1)) { IRQCHK(c); goto L_80193228; } // 80193234
  goto L_80193264; // 80193238
L_8019323C:;
  c->r[7]=rotl(c->r[0],11)&0xFFFFF800u; // 8019323C
  c->r[3]=0u+0xFFFFFC02u; // 80193240
  goto L_80193250; // 80193244
L_80193248:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80193248
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8019324C
L_80193250:;
  cmps(c,0,(int32_t)c->r[7],0); // 80193250
  if (crb(c,1)) { IRQCHK(c); goto L_80193248; } // 80193254
  goto L_80193264; // 80193258
L_8019325C:;
  c->r[3]=sraw(c,c->r[0],20); // 8019325C
  c->r[3]=c->r[3]+0xFFFFFC01u; // 80193260
L_80193264:;
  cmps(c,0,(int32_t)c->r[11],-1022); // 80193264
  if (crb(c,0)) { goto L_80193278; } // 80193268
  c->r[7]=rotl(c->r[8],0)&0x000FFFFFu; // 8019326C
  c->r[9]=c->r[7]|0x00100000u; // 80193270
  goto L_801932A8; // 80193274
L_80193278:;
  c->r[9]=addc(c,~c->r[11],0xFFFFFC02u,1); // 80193278
  cmps(c,0,(int32_t)c->r[9],31); // 8019327C
  if (crb(c,1)) { goto L_8019329C; } // 80193280
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 80193284
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[8]<<((c->r[9])&31)); // 80193288
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[5]>>((c->r[7])&31)); // 8019328C
  c->r[5]=((c->r[9])&0x20)?0u:(c->r[5]<<((c->r[9])&31)); // 80193290
  c->r[9]=c->r[8]|c->r[7]; // 80193294
  goto L_801932A8; // 80193298
L_8019329C:;
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 8019329C
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801932A0
  c->r[5]=0u+0x00000000u; // 801932A4
L_801932A8:;
  cmps(c,0,(int32_t)c->r[3],-1022); // 801932A8
  if (crb(c,0)) { goto L_801932BC; } // 801932AC
  c->r[0]=rotl(c->r[0],0)&0x000FFFFFu; // 801932B0
  c->r[10]=c->r[0]|0x00100000u; // 801932B4
  goto L_801932EC; // 801932B8
L_801932BC:;
  c->r[10]=addc(c,~c->r[3],0xFFFFFC02u,1); // 801932BC
  cmps(c,0,(int32_t)c->r[10],31); // 801932C0
  if (crb(c,1)) { goto L_801932E0; } // 801932C4
  c->r[7]=addc(c,~c->r[10],0x00000020u,1); // 801932C8
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801932CC
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[6]>>((c->r[7])&31)); // 801932D0
  c->r[6]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 801932D4
  c->r[10]=c->r[8]|c->r[0]; // 801932D8
  goto L_801932EC; // 801932DC
L_801932E0:;
  c->r[0]=c->r[10]+0xFFFFFFE0u; // 801932E0
  c->r[10]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801932E4
  c->r[6]=0u+0x00000000u; // 801932E8
L_801932EC:;
  c->r[7]=c->r[11]-c->r[3]; cr0(c,c->r[7]); // 801932EC
  c->r[11]=c->r[7]+0x00000002u; // 801932F0
  c->r[8]=((c->r[11])&0x20)?0u:(c->r[6]>>((c->r[11])&31)); // 801932F4
  c->ctr=c->r[7]; // 801932F8
  if (crb(c,2)) { goto L_80193384; } // 801932FC
L_80193300:;
  c->r[7]=c->r[9]-c->r[10]; cr0(c,c->r[7]); // 80193300
  c->r[12]=c->r[5]-c->r[6]; // 80193304
  if (!crb(c,2)) { goto L_8019332C; } // 80193308
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 8019330C
  cmpu(c,0,c->r[0],c->r[8]); // 80193310
  if (!crb(c,2)) { goto L_8019332C; } // 80193314
  c->r[3]=0u+0x802E0000u; // 80193318
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 8019331C
  c->r[3]=c->r[3]+0x000009D8u; // 80193320
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 80193324
  goto L_80193494; // 80193328
L_8019332C:;
  cmpu(c,0,c->r[5],c->r[6]); // 8019332C
  if (!crb(c,0)) { goto L_80193338; } // 80193330
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 80193334
L_80193338:;
  cmps(c,0,(int32_t)c->r[7],0); // 80193338
  if (!crb(c,0)) { goto L_80193354; } // 8019333C
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 80193340
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80193344
  c->r[9]=c->r[7]+c->r[0]; // 80193348
  c->r[5]=c->r[5]+c->r[5]; // 8019334C
  goto L_80193380; // 80193350
L_80193354:;
  c->r[0]=c->r[7]|c->r[12]; cr0(c,c->r[0]); // 80193354
  if (!crb(c,2)) { goto L_80193370; } // 80193358
  c->r[3]=0u+0x802E0000u; // 8019335C
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 80193360
  c->r[3]=c->r[3]+0x000009D8u; // 80193364
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 80193368
  goto L_80193494; // 8019336C
L_80193370:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 80193370
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80193374
  c->r[9]=c->r[5]+c->r[0]; // 80193378
  c->r[5]=rotl(c->r[12],1)&0xFFFFFFFEu; // 8019337C
L_80193380:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80193300; } // 80193380
L_80193384:;
  c->r[7]=c->r[9]-c->r[10]; cr0(c,c->r[7]); // 80193384
  c->r[10]=c->r[5]-c->r[6]; // 80193388
  if (!crb(c,2)) { goto L_801933B0; } // 8019338C
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 80193390
  cmpu(c,0,c->r[0],c->r[8]); // 80193394
  if (!crb(c,2)) { goto L_801933B0; } // 80193398
  c->r[3]=0u+0x802E0000u; // 8019339C
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 801933A0
  c->r[3]=c->r[3]+0x000009D8u; // 801933A4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801933A8
  goto L_80193494; // 801933AC
L_801933B0:;
  cmpu(c,0,c->r[5],c->r[6]); // 801933B0
  if (!crb(c,0)) { goto L_801933BC; } // 801933B4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801933B8
L_801933BC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801933BC
  if (crb(c,0)) { goto L_801933CC; } // 801933C0
  c->r[9]=c->r[7]|c->r[7]; // 801933C4
  c->r[5]=c->r[10]|c->r[10]; // 801933C8
L_801933CC:;
  c->r[0]=c->r[9]|c->r[5]; cr0(c,c->r[0]); // 801933CC
  if (!crb(c,2)) { goto L_801933E8; } // 801933D0
  c->r[3]=0u+0x802E0000u; // 801933D4
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 801933D8
  c->r[3]=c->r[3]+0x000009D8u; // 801933DC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801933E0
  goto L_80193494; // 801933E4
L_801933E8:;
  c->r[0]=0u+0x00100000u; // 801933E8
  goto L_80193404; // 801933EC
L_801933F0:;
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 801933F0
  c->r[6]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801933F4
  c->r[9]=c->r[7]+c->r[6]; // 801933F8
  c->r[5]=c->r[5]+c->r[5]; // 801933FC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80193400
L_80193404:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 80193404
  if (crb(c,0)) { IRQCHK(c); goto L_801933F0; } // 80193408
  cmps(c,0,(int32_t)c->r[3],-1022); // 8019340C
  if (crb(c,0)) { goto L_80193434; } // 80193410
  c->r[0]=c->r[3]+0x000003FFu; // 80193414
  c->r[3]=c->r[9]+0xFFF00000u; // 80193418
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 8019341C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80193420
  c->r[0]=c->r[3]|c->r[0]; // 80193424
  c->r[0]=c->r[0]|c->r[4]; // 80193428
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019342C
  goto L_80193490; // 80193430
L_80193434:;
  c->r[6]=addc(c,~c->r[3],0xFFFFFC02u,1); // 80193434
  cmps(c,0,(int32_t)c->r[6],20); // 80193438
  if (crb(c,1)) { goto L_80193458; } // 8019343C
  c->r[0]=addc(c,~c->r[6],0x00000020u,1); // 80193440
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 80193444
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[9]<<((c->r[0])&31)); // 80193448
  c->r[9]=sraw(c,c->r[9],(c->r[6])&63); // 8019344C
  c->r[3]=c->r[3]|c->r[0]; // 80193450
  goto L_80193484; // 80193454
L_80193458:;
  cmps(c,0,(int32_t)c->r[6],31); // 80193458
  if (crb(c,1)) { goto L_80193478; } // 8019345C
  c->r[3]=addc(c,~c->r[6],0x00000020u,1); // 80193460
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 80193464
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[9]<<((c->r[3])&31)); // 80193468
  c->r[9]=c->r[4]|c->r[4]; // 8019346C
  c->r[3]=c->r[3]|c->r[0]; // 80193470
  goto L_80193484; // 80193474
L_80193478:;
  c->r[0]=c->r[6]+0xFFFFFFE0u; // 80193478
  c->r[3]=sraw(c,c->r[9],(c->r[0])&63); // 8019347C
  c->r[9]=c->r[4]|c->r[4]; // 80193480
L_80193484:;
  c->r[0]=c->r[9]|c->r[4]; // 80193484
  W32(c->r[1]+0x00000008u,c->r[0]); // 80193488
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8019348C
L_80193490:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80193490
L_80193494:;
  c->r[1]=c->r[1]+0x00000020u; // 80193494
  return; // 80193498
}

// fn_8019349C
void f_8019349C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019349C
  c->r[0]=0u+0x00100000u; // 801934A0
  c->r[7]=0u+0x00000000u; // 801934A4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801934A8
  c->r[8]=R32(c->r[1]+0x00000008u); // 801934AC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801934B0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801934B4
  if (!crb(c,0)) { goto L_8019350C; } // 801934B8
  c->r[0]=rotl(c->r[8],0)&0x7FFFFFFFu; // 801934BC
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 801934C0
  if (!crb(c,2)) { goto L_801934D8; } // 801934C4
  {uint32_t ea=c->r[2]+0xFFFF9110u; c->f[1]=RF64(ea);} // 801934C8
  {uint32_t ea=c->r[13]+0xFFFFA0B0u; c->f[0]=RF64(ea);} // 801934CC
  c->f[1]=c->f[1]/c->f[0]; // 801934D0
  goto L_80193748; // 801934D4
L_801934D8:;
  cmps(c,0,(int32_t)c->r[8],0); // 801934D8
  if (!crb(c,0)) { goto L_801934F8; } // 801934DC
  c->f[1]=c->f[1]-c->f[1]; // 801934E0
  {uint32_t ea=c->r[13]+0xFFFFA0B0u; c->f[0]=RF64(ea);} // 801934E4
  c->r[0]=0u+0x00000021u; // 801934E8
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 801934EC
  c->f[1]=c->f[1]/c->f[0]; // 801934F0
  goto L_80193748; // 801934F4
L_801934F8:;
  {uint32_t ea=c->r[2]+0xFFFF9118u; c->f[0]=RF64(ea);} // 801934F8
  c->r[7]=0u+0xFFFFFFCAu; // 801934FC
  c->f[1]=c->f[1]*c->f[0]; // 80193500
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80193504
  c->r[8]=R32(c->r[1]+0x00000008u); // 80193508
L_8019350C:;
  c->r[0]=0u+0x7FF00000u; // 8019350C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80193510
  if (crb(c,0)) { goto L_80193520; } // 80193514
  c->f[1]=c->f[1]+c->f[1]; // 80193518
  goto L_80193748; // 8019351C
L_80193520:;
  c->r[5]=sraw(c,c->r[8],20); // 80193520
  c->r[8]=rotl(c->r[8],0)&0x000FFFFFu; // 80193524
  c->r[3]=c->r[8]+0x00090000u; // 80193528
  {uint32_t ea=c->r[2]+0xFFFF9120u; c->f[0]=RF64(ea);} // 8019352C
  c->r[4]=c->r[3]+0x00005F64u; // 80193530
  c->r[0]=c->r[8]+0x00000002u; // 80193534
  c->r[3]=rotl(c->r[4],0)&0x00100000u; // 80193538
  c->r[5]=c->r[7]+c->r[5]; // 8019353C
  c->r[3]=c->r[3]^0x3FF00000u; // 80193540
  c->r[0]=rotl(c->r[0],0)&0x000FFFFFu; // 80193544
  c->r[3]=c->r[8]|c->r[3]; // 80193548
  W32(c->r[1]+0x00000008u,c->r[3]); // 8019354C
  cmps(c,0,(int32_t)c->r[0],3); // 80193550
  c->r[7]=c->r[5]+0xFFFFFC01u; // 80193554
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80193558
  c->r[0]=rotl(c->r[4],12)&0x00000001u; // 8019355C
  c->r[7]=c->r[7]+c->r[0]; // 80193560
  c->f[0]=c->f[1]-c->f[0]; // 80193564
  if (!crb(c,0)) { goto L_8019361C; } // 80193568
  {uint32_t ea=c->r[13]+0xFFFFA0B0u; c->f[1]=RF64(ea);} // 8019356C
  fcmp(c,0,c->f[0],c->f[1]); // 80193570
  if (!crb(c,2)) { goto L_801935B8; } // 80193574
  cmps(c,0,(int32_t)c->r[7],0); // 80193578
  if (!crb(c,2)) { goto L_80193584; } // 8019357C
  goto L_80193748; // 80193580
L_80193584:;
  c->r[3]=c->r[7]^0x80000000u; // 80193584
  c->r[0]=0u+0x43300000u; // 80193588
  W32(c->r[1]+0x00000014u,c->r[3]); // 8019358C
  {uint32_t ea=c->r[2]+0xFFFF9188u; c->f[3]=RF64(ea);} // 80193590
  W32(c->r[1]+0x00000010u,c->r[0]); // 80193594
  {uint32_t ea=c->r[2]+0xFFFF9128u; c->f[1]=RF64(ea);} // 80193598
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8019359C
  {uint32_t ea=c->r[2]+0xFFFF9130u; c->f[0]=RF64(ea);} // 801935A0
  c->f[2]=c->f[2]-c->f[3]; // 801935A4
  c->f[1]=c->f[1]*c->f[2]; // 801935A8
  c->f[0]=c->f[0]*c->f[2]; // 801935AC
  c->f[1]=c->f[1]+c->f[0]; // 801935B0
  goto L_80193748; // 801935B4
L_801935B8:;
  {uint32_t ea=c->r[2]+0xFFFF9140u; c->f[3]=RF64(ea);} // 801935B8
  c->f[1]=c->f[0]*c->f[0]; // 801935BC
  {uint32_t ea=c->r[2]+0xFFFF9138u; c->f[2]=RF64(ea);} // 801935C0
  cmps(c,0,(int32_t)c->r[7],0); // 801935C4
  c->f[3]=c->f[3]*c->f[0]; // 801935C8
  c->f[2]=c->f[2]-c->f[3]; // 801935CC
  c->f[5]=c->f[2]*c->f[1]; // 801935D0
  if (!crb(c,2)) { goto L_801935E0; } // 801935D4
  c->f[1]=c->f[0]-c->f[5]; // 801935D8
  goto L_80193748; // 801935DC
L_801935E0:;
  c->r[3]=c->r[7]^0x80000000u; // 801935E0
  c->r[0]=0u+0x43300000u; // 801935E4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801935E8
  {uint32_t ea=c->r[2]+0xFFFF9188u; c->f[4]=RF64(ea);} // 801935EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801935F0
  {uint32_t ea=c->r[2]+0xFFFF9130u; c->f[1]=RF64(ea);} // 801935F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 801935F8
  {uint32_t ea=c->r[2]+0xFFFF9128u; c->f[2]=RF64(ea);} // 801935FC
  c->f[3]=c->f[3]-c->f[4]; // 80193600
  c->f[1]=c->f[1]*c->f[3]; // 80193604
  c->f[2]=c->f[2]*c->f[3]; // 80193608
  c->f[1]=c->f[5]-c->f[1]; // 8019360C
  c->f[0]=c->f[1]-c->f[0]; // 80193610
  c->f[1]=c->f[2]-c->f[0]; // 80193614
  goto L_80193748; // 80193618
L_8019361C:;
  {uint32_t ea=c->r[2]+0xFFFF9148u; c->f[1]=RF64(ea);} // 8019361C
  c->r[5]=c->r[7]^0x80000000u; // 80193620
  c->r[4]=0u+0x43300000u; // 80193624
  c->r[3]=0u+0x00070000u; // 80193628
  c->f[1]=c->f[1]+c->f[0]; // 8019362C
  c->r[6]=c->r[8]+0xFFFA0000u; // 80193630
  c->r[0]=c->r[3]+0xFFFFB851u; // 80193634
  {uint32_t ea=c->r[2]+0xFFFF9180u; c->f[5]=RF64(ea);} // 80193638
  {uint32_t ea=c->r[2]+0xFFFF9178u; c->f[4]=RF64(ea);} // 8019363C
  c->r[0]=c->r[0]-c->r[8]; // 80193640
  c->f[1]=c->f[0]/c->f[1]; // 80193644
  c->r[6]=c->r[6]+0xFFFFEB86u; // 80193648
  {uint32_t ea=c->r[2]+0xFFFF9160u; c->f[8]=RF64(ea);} // 8019364C
  c->r[6]=c->r[6]|c->r[0]; cr0(c,c->r[6]); // 80193650
  {uint32_t ea=c->r[2]+0xFFFF9158u; c->f[7]=RF64(ea);} // 80193654
  {uint32_t ea=c->r[2]+0xFFFF9170u; c->f[3]=RF64(ea);} // 80193658
  c->f[11]=c->f[1]*c->f[1]; // 8019365C
  {uint32_t ea=c->r[2]+0xFFFF9150u; c->f[6]=RF64(ea);} // 80193660
  {uint32_t ea=c->r[2]+0xFFFF9168u; c->f[2]=RF64(ea);} // 80193664
  W32(c->r[1]+0x00000014u,c->r[5]); // 80193668
  {uint32_t ea=c->r[2]+0xFFFF9188u; c->f[10]=RF64(ea);} // 8019366C
  c->f[12]=c->f[11]*c->f[11]; // 80193670
  W32(c->r[1]+0x00000010u,c->r[4]); // 80193674
  {uint32_t ea=c->r[1]+0x00000010u; c->f[9]=RF64(ea);} // 80193678
  c->f[5]=c->f[5]*c->f[12]; // 8019367C
  c->f[8]=c->f[8]*c->f[12]; // 80193680
  c->f[4]=c->f[4]+c->f[5]; // 80193684
  c->f[9]=c->f[9]-c->f[10]; // 80193688
  c->f[5]=c->f[7]+c->f[8]; // 8019368C
  c->f[4]=c->f[12]*c->f[4]; // 80193690
  c->f[5]=c->f[12]*c->f[5]; // 80193694
  c->f[3]=c->f[3]+c->f[4]; // 80193698
  c->f[4]=c->f[6]+c->f[5]; // 8019369C
  c->f[3]=c->f[12]*c->f[3]; // 801936A0
  c->f[4]=c->f[12]*c->f[4]; // 801936A4
  c->f[2]=c->f[2]+c->f[3]; // 801936A8
  c->f[2]=c->f[11]*c->f[2]; // 801936AC
  c->f[3]=c->f[2]+c->f[4]; // 801936B0
  if (!crb(c,1)) { goto L_8019370C; } // 801936B4
  {uint32_t ea=c->r[2]+0xFFFF9138u; c->f[2]=RF64(ea);} // 801936B8
  cmps(c,0,(int32_t)c->r[7],0); // 801936BC
  c->f[2]=c->f[2]*c->f[0]; // 801936C0
  c->f[5]=c->f[2]*c->f[0]; // 801936C4
  if (!crb(c,2)) { goto L_801936E0; } // 801936C8
  c->f[2]=c->f[5]+c->f[3]; // 801936CC
  c->f[1]=c->f[1]*c->f[2]; // 801936D0
  c->f[1]=c->f[5]-c->f[1]; // 801936D4
  c->f[1]=c->f[0]-c->f[1]; // 801936D8
  goto L_80193748; // 801936DC
L_801936E0:;
  c->f[3]=c->f[5]+c->f[3]; // 801936E0
  {uint32_t ea=c->r[2]+0xFFFF9130u; c->f[2]=RF64(ea);} // 801936E4
  {uint32_t ea=c->r[2]+0xFFFF9128u; c->f[4]=RF64(ea);} // 801936E8
  c->f[2]=c->f[2]*c->f[9]; // 801936EC
  c->f[1]=c->f[1]*c->f[3]; // 801936F0
  c->f[3]=c->f[4]*c->f[9]; // 801936F4
  c->f[1]=c->f[1]+c->f[2]; // 801936F8
  c->f[1]=c->f[5]-c->f[1]; // 801936FC
  c->f[0]=c->f[1]-c->f[0]; // 80193700
  c->f[1]=c->f[3]-c->f[0]; // 80193704
  goto L_80193748; // 80193708
L_8019370C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8019370C
  if (!crb(c,2)) { goto L_80193724; } // 80193710
  c->f[2]=c->f[0]-c->f[3]; // 80193714
  c->f[1]=c->f[1]*c->f[2]; // 80193718
  c->f[1]=c->f[0]-c->f[1]; // 8019371C
  goto L_80193748; // 80193720
L_80193724:;
  c->f[3]=c->f[0]-c->f[3]; // 80193724
  {uint32_t ea=c->r[2]+0xFFFF9130u; c->f[2]=RF64(ea);} // 80193728
  {uint32_t ea=c->r[2]+0xFFFF9128u; c->f[4]=RF64(ea);} // 8019372C
  c->f[2]=c->f[2]*c->f[9]; // 80193730
  c->f[1]=c->f[1]*c->f[3]; // 80193734
  c->f[3]=c->f[4]*c->f[9]; // 80193738
  c->f[1]=c->f[1]-c->f[2]; // 8019373C
  c->f[0]=c->f[1]-c->f[0]; // 80193740
  c->f[1]=c->f[3]-c->f[0]; // 80193744
L_80193748:;
  c->r[1]=c->r[1]+0x00000020u; // 80193748
  return; // 8019374C
}

// fn_80193750
void f_80193750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80193750
  c->r[0]=c->lr; // 80193754
  W32(c->r[1]+0x00000024u,c->r[0]); // 80193758
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8019375C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80193760
  c->r[0]=0u+0x00100000u; // 80193764
  c->r[4]=0u+0x00000000u; // 80193768
  c->r[5]=R32(c->r[1]+0x00000008u); // 8019376C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80193770
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80193774
  if (!crb(c,0)) { goto L_801937D4; } // 80193778
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 8019377C
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 80193780
  if (!crb(c,2)) { goto L_801937A0; } // 80193784
  {uint32_t ea=c->r[2]+0xFFFF9190u; c->f[1]=RF64(ea);} // 80193788
  c->r[0]=0u+0x00000021u; // 8019378C
  {uint32_t ea=c->r[13]+0xFFFFA0B8u; c->f[0]=RF64(ea);} // 80193790
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80193794
  c->f[1]=c->f[1]/c->f[0]; // 80193798
  goto L_80193850; // 8019379C
L_801937A0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801937A0
  if (!crb(c,0)) { goto L_801937C0; } // 801937A4
  c->f[1]=c->f[1]-c->f[1]; // 801937A8
  {uint32_t ea=c->r[13]+0xFFFFA0B8u; c->f[0]=RF64(ea);} // 801937AC
  c->r[0]=0u+0x00000021u; // 801937B0
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 801937B4
  c->f[1]=c->f[1]/c->f[0]; // 801937B8
  goto L_80193850; // 801937BC
L_801937C0:;
  {uint32_t ea=c->r[2]+0xFFFF9198u; c->f[0]=RF64(ea);} // 801937C0
  c->r[4]=0u+0xFFFFFFCAu; // 801937C4
  c->f[1]=c->f[1]*c->f[0]; // 801937C8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801937CC
  c->r[5]=R32(c->r[1]+0x00000008u); // 801937D0
L_801937D4:;
  c->r[0]=0u+0x7FF00000u; // 801937D4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801937D8
  if (crb(c,0)) { goto L_801937E8; } // 801937DC
  c->f[1]=c->f[1]+c->f[1]; // 801937E0
  goto L_80193850; // 801937E4
L_801937E8:;
  c->r[3]=sraw(c,c->r[5],20); // 801937E8
  c->r[0]=0u+0x43300000u; // 801937EC
  c->r[3]=c->r[4]+c->r[3]; // 801937F0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801937F4
  c->r[4]=c->r[3]+0xFFFFFC01u; // 801937F8
  {uint32_t ea=c->r[2]+0xFFFF91B8u; c->f[1]=RF64(ea);} // 801937FC
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 80193800
  c->r[0]=c->r[4]+c->r[3]; // 80193804
  c->r[0]=c->r[0]^0x80000000u; // 80193808
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019380C
  c->r[0]=addc(c,~c->r[3],0x000003FFu,1); // 80193810
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80193814
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 80193818
  c->r[0]=(rotl(c->r[5],0)&0x000FFFFFu)|(c->r[0]&~0x000FFFFFu); // 8019381C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80193820
  c->f[31]=c->f[0]-c->f[1]; // 80193824
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80193828
  c->lr=0x80193830u; f_8019349C(c); // 8019382C
  {uint32_t ea=c->r[2]+0xFFFF91A8u; c->f[0]=RF64(ea);} // 80193830
  {uint32_t ea=c->r[2]+0xFFFF91A0u; c->f[2]=RF64(ea);} // 80193834
  c->f[3]=c->f[0]*c->f[1]; // 80193838
  {uint32_t ea=c->r[2]+0xFFFF91B0u; c->f[0]=RF64(ea);} // 8019383C
  c->f[1]=c->f[2]*c->f[31]; // 80193840
  c->f[0]=c->f[0]*c->f[31]; // 80193844
  c->f[1]=c->f[1]+c->f[3]; // 80193848
  c->f[1]=c->f[1]+c->f[0]; // 8019384C
L_80193850:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80193850
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80193854
  c->lr=c->r[0]; // 80193858
  c->r[1]=c->r[1]+0x00000020u; // 8019385C
  return; // 80193860
}

// fn_80193864
void f_80193864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80193864
  c->r[0]=c->lr; // 80193868
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8019386C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80193870
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80193874
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 80193878
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 8019387C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 80193880
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 80193884
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 80193888
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 8019388C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 80193890
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 80193894
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 80193898
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 8019389C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 801938A0
  c->r[3]=0u+0x802E0000u; // 801938A4
  c->r[3]=c->r[3]+0x000009E8u; // 801938A8
  c->r[5]=R32(c->r[1]+0x00000010u); // 801938AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801938B0
  c->r[11]=R32(c->r[1]+0x00000014u); // 801938B4
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801938B8
  c->r[9]=R32(c->r[1]+0x00000008u); // 801938BC
  c->r[0]=c->r[7]|c->r[11]; cr0(c,c->r[0]); // 801938C0
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 801938C4
  c->r[6]=rotl(c->r[9],0)&0x7FFFFFFFu; // 801938C8
  if (!crb(c,2)) { goto L_801938D8; } // 801938CC
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[1]=RF64(ea);} // 801938D0
  goto L_80194038; // 801938D4
L_801938D8:;
  c->r[0]=0u+0x7FF00000u; // 801938D8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801938DC
  if (crb(c,1)) { goto L_80193918; } // 801938E0
  c->r[0]=c->r[6]+0x80100000u; // 801938E4
  cmpu(c,0,c->r[0],0x00000000u); // 801938E8
  if (!crb(c,2)) { goto L_801938F8; } // 801938EC
  cmps(c,0,(int32_t)c->r[10],0); // 801938F0
  if (!crb(c,2)) { goto L_80193918; } // 801938F4
L_801938F8:;
  c->r[0]=0u+0x7FF00000u; // 801938F8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801938FC
  if (crb(c,1)) { goto L_80193918; } // 80193900
  c->r[0]=c->r[7]+0x80100000u; // 80193904
  cmpu(c,0,c->r[0],0x00000000u); // 80193908
  if (!crb(c,2)) { goto L_80193920; } // 8019390C
  cmps(c,0,(int32_t)c->r[11],0); // 80193910
  if (crb(c,2)) { goto L_80193920; } // 80193914
L_80193918:;
  c->f[1]=c->f[1]+c->f[2]; // 80193918
  goto L_80194038; // 8019391C
L_80193920:;
  cmps(c,0,(int32_t)c->r[9],0); // 80193920
  c->r[4]=0u+0x00000000u; // 80193924
  if (!crb(c,0)) { goto L_801939A0; } // 80193928
  c->r[0]=0u+0x43400000u; // 8019392C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80193930
  if (crb(c,0)) { goto L_80193940; } // 80193934
  c->r[4]=0u+0x00000002u; // 80193938
  goto L_801939A0; // 8019393C
L_80193940:;
  c->r[0]=0u+0x3FF00000u; // 80193940
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80193944
  if (crb(c,0)) { goto L_801939A0; } // 80193948
  c->r[8]=sraw(c,c->r[7],20); // 8019394C
  c->r[0]=c->r[8]+0xFFFFFC01u; // 80193950
  cmps(c,0,(int32_t)c->r[0],20); // 80193954
  if (!crb(c,1)) { goto L_8019397C; } // 80193958
  c->r[0]=addc(c,~c->r[0],0x00000034u,1); // 8019395C
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[11]>>((c->r[0])&31)); // 80193960
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 80193964
  cmpu(c,0,c->r[11],c->r[0]); // 80193968
  if (!crb(c,2)) { goto L_801939A0; } // 8019396C
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 80193970
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 80193974
  goto L_801939A0; // 80193978
L_8019397C:;
  cmps(c,0,(int32_t)c->r[11],0); // 8019397C
  if (!crb(c,2)) { goto L_801939A0; } // 80193980
  c->r[0]=addc(c,~c->r[0],0x00000014u,1); // 80193984
  c->r[8]=sraw(c,c->r[7],(c->r[0])&63); // 80193988
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8019398C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80193990
  if (!crb(c,2)) { goto L_801939A0; } // 80193994
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 80193998
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 8019399C
L_801939A0:;
  cmps(c,0,(int32_t)c->r[11],0); // 801939A0
  if (!crb(c,2)) { goto L_80193A54; } // 801939A4
  c->r[0]=c->r[7]+0x80100000u; // 801939A8
  cmpu(c,0,c->r[0],0x00000000u); // 801939AC
  if (!crb(c,2)) { goto L_80193A04; } // 801939B0
  c->r[0]=c->r[6]+0xC0100000u; // 801939B4
  c->r[0]=c->r[0]|c->r[10]; cr0(c,c->r[0]); // 801939B8
  if (!crb(c,2)) { goto L_801939C8; } // 801939BC
  c->f[1]=c->f[2]-c->f[2]; // 801939C0
  goto L_80194038; // 801939C4
L_801939C8:;
  c->r[0]=0u+0x3FF00000u; // 801939C8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801939CC
  if (crb(c,0)) { goto L_801939EC; } // 801939D0
  cmps(c,0,(int32_t)c->r[5],0); // 801939D4
  if (crb(c,0)) { goto L_801939E4; } // 801939D8
  c->f[1]=c->f[2]; // 801939DC
  goto L_80194038; // 801939E0
L_801939E4:;
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[1]=RF64(ea);} // 801939E4
  goto L_80194038; // 801939E8
L_801939EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801939EC
  if (!crb(c,0)) { goto L_801939FC; } // 801939F0
  c->f[1]=-c->f[2]; // 801939F4
  goto L_80194038; // 801939F8
L_801939FC:;
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[1]=RF64(ea);} // 801939FC
  goto L_80194038; // 80193A00
L_80193A04:;
  c->r[0]=c->r[7]+0xC0100000u; // 80193A04
  cmpu(c,0,c->r[0],0x00000000u); // 80193A08
  if (!crb(c,2)) { goto L_80193A24; } // 80193A0C
  cmps(c,0,(int32_t)c->r[5],0); // 80193A10
  if (!crb(c,0)) { goto L_80194038; } // 80193A14
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[0]=RF64(ea);} // 80193A18
  c->f[1]=c->f[0]/c->f[1]; // 80193A1C
  goto L_80194038; // 80193A20
L_80193A24:;
  c->r[0]=c->r[5]+0xC0000000u; // 80193A24
  cmpu(c,0,c->r[0],0x00000000u); // 80193A28
  if (!crb(c,2)) { goto L_80193A38; } // 80193A2C
  c->f[1]=c->f[1]*c->f[1]; // 80193A30
  goto L_80194038; // 80193A34
L_80193A38:;
  c->r[0]=c->r[5]+0xC0200000u; // 80193A38
  cmpu(c,0,c->r[0],0x00000000u); // 80193A3C
  if (!crb(c,2)) { goto L_80193A54; } // 80193A40
  cmps(c,0,(int32_t)c->r[9],0); // 80193A44
  if (crb(c,0)) { goto L_80193A54; } // 80193A48
  c->lr=0x80193A50u; f_80196B38(c); // 80193A4C
  goto L_80194038; // 80193A50
L_80193A54:;
  c->f[0]=std::fabs(c->f[1]); // 80193A54
  cmps(c,0,(int32_t)c->r[10],0); // 80193A58
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 80193A5C
  if (!crb(c,2)) { goto L_80193AC8; } // 80193A60
  c->r[0]=c->r[6]+0x80100000u; // 80193A64
  cmpu(c,0,c->r[0],0x00000000u); // 80193A68
  if (crb(c,2)) { goto L_80193A84; } // 80193A6C
  cmps(c,0,(int32_t)c->r[6],0); // 80193A70
  if (crb(c,2)) { goto L_80193A84; } // 80193A74
  c->r[0]=c->r[6]+0xC0100000u; // 80193A78
  cmpu(c,0,c->r[0],0x00000000u); // 80193A7C
  if (!crb(c,2)) { goto L_80193AC8; } // 80193A80
L_80193A84:;
  cmps(c,0,(int32_t)c->r[5],0); // 80193A84
  if (!crb(c,0)) { goto L_80193A94; } // 80193A88
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[1]=RF64(ea);} // 80193A8C
  c->f[0]=c->f[1]/c->f[0]; // 80193A90
L_80193A94:;
  cmps(c,0,(int32_t)c->r[9],0); // 80193A94
  if (!crb(c,0)) { goto L_80193AC0; } // 80193A98
  c->r[0]=c->r[6]+0xC0100000u; // 80193A9C
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 80193AA0
  if (!crb(c,2)) { goto L_80193AB4; } // 80193AA4
  c->f[0]=c->f[0]-c->f[0]; // 80193AA8
  c->f[0]=c->f[0]/c->f[0]; // 80193AAC
  goto L_80193AC0; // 80193AB0
L_80193AB4:;
  cmps(c,0,(int32_t)c->r[4],1); // 80193AB4
  if (!crb(c,2)) { goto L_80193AC0; } // 80193AB8
  c->f[0]=-c->f[0]; // 80193ABC
L_80193AC0:;
  c->f[1]=c->f[0]; // 80193AC0
  goto L_80194038; // 80193AC4
L_80193AC8:;
  c->r[8]=sraw(c,c->r[9],31); // 80193AC8
  c->r[0]=c->r[8]+0x00000001u; // 80193ACC
  c->r[8]=c->r[0]|c->r[4]; cr0(c,c->r[8]); // 80193AD0
  if (!crb(c,2)) { goto L_80193AEC; } // 80193AD4
  c->r[3]=0u+0x80440000u; // 80193AD8
  c->r[0]=0u+0x00000021u; // 80193ADC
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80193AE0
  {uint32_t ea=c->r[3]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80193AE4
  goto L_80194038; // 80193AE8
L_80193AEC:;
  c->r[8]=0u+0x41E00000u; // 80193AEC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 80193AF0
  if (!crb(c,1)) { goto L_80193BF0; } // 80193AF4
  c->r[3]=0u+0x43F00000u; // 80193AF8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 80193AFC
  if (!crb(c,1)) { goto L_80193B40; } // 80193B00
  c->r[0]=0u+0x3FF00000u; // 80193B04
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80193B08
  if (!crb(c,0)) { goto L_80193B28; } // 80193B0C
  cmps(c,0,(int32_t)c->r[5],0); // 80193B10
  if (!crb(c,0)) { goto L_80193B20; } // 80193B14
  {uint32_t ea=c->r[2]+0xFFFF91D0u; c->f[1]=RF64(ea);} // 80193B18
  goto L_80194038; // 80193B1C
L_80193B20:;
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[1]=RF64(ea);} // 80193B20
  goto L_80194038; // 80193B24
L_80193B28:;
  cmps(c,0,(int32_t)c->r[5],0); // 80193B28
  if (!crb(c,1)) { goto L_80193B38; } // 80193B2C
  {uint32_t ea=c->r[2]+0xFFFF91D0u; c->f[1]=RF64(ea);} // 80193B30
  goto L_80194038; // 80193B34
L_80193B38:;
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[1]=RF64(ea);} // 80193B38
  goto L_80194038; // 80193B3C
L_80193B40:;
  c->r[3]=0u+0x3FF00000u; // 80193B40
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 80193B44
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 80193B48
  if (!crb(c,0)) { goto L_80193B68; } // 80193B4C
  cmps(c,0,(int32_t)c->r[5],0); // 80193B50
  if (!crb(c,0)) { goto L_80193B60; } // 80193B54
  {uint32_t ea=c->r[2]+0xFFFF91D0u; c->f[1]=RF64(ea);} // 80193B58
  goto L_80194038; // 80193B5C
L_80193B60:;
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[1]=RF64(ea);} // 80193B60
  goto L_80194038; // 80193B64
L_80193B68:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[3]); // 80193B68
  if (!crb(c,1)) { goto L_80193B88; } // 80193B6C
  cmps(c,0,(int32_t)c->r[5],0); // 80193B70
  if (!crb(c,1)) { goto L_80193B80; } // 80193B74
  {uint32_t ea=c->r[2]+0xFFFF91D0u; c->f[1]=RF64(ea);} // 80193B78
  goto L_80194038; // 80193B7C
L_80193B80:;
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[1]=RF64(ea);} // 80193B80
  goto L_80194038; // 80193B84
L_80193B88:;
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[3]=RF64(ea);} // 80193B88
  c->r[3]=0u+0x00000000u; // 80193B8C
  {uint32_t ea=c->r[2]+0xFFFF91E8u; c->f[0]=RF64(ea);} // 80193B90
  c->f[8]=c->f[1]-c->f[3]; // 80193B94
  {uint32_t ea=c->r[2]+0xFFFF91F8u; c->f[1]=RF64(ea);} // 80193B98
  {uint32_t ea=c->r[2]+0xFFFF91E0u; c->f[5]=RF64(ea);} // 80193B9C
  {uint32_t ea=c->r[2]+0xFFFF91F0u; c->f[3]=RF64(ea);} // 80193BA0
  c->f[6]=c->f[0]*c->f[8]; // 80193BA4
  {uint32_t ea=c->r[2]+0xFFFF91D8u; c->f[4]=RF64(ea);} // 80193BA8
  {uint32_t ea=c->r[2]+0xFFFF9200u; c->f[0]=RF64(ea);} // 80193BAC
  c->f[7]=c->f[8]*c->f[8]; // 80193BB0
  c->f[5]=c->f[5]-c->f[6]; // 80193BB4
  c->f[6]=c->f[3]*c->f[8]; // 80193BB8
  c->f[5]=c->f[8]*c->f[5]; // 80193BBC
  c->f[1]=c->f[1]*c->f[8]; // 80193BC0
  c->f[3]=c->f[4]-c->f[5]; // 80193BC4
  c->f[3]=c->f[7]*c->f[3]; // 80193BC8
  c->f[0]=c->f[0]*c->f[3]; // 80193BCC
  c->f[1]=c->f[1]-c->f[0]; // 80193BD0
  c->f[0]=c->f[6]+c->f[1]; // 80193BD4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80193BD8
  W32(c->r[1]+0x00000034u,c->r[3]); // 80193BDC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80193BE0
  c->f[0]=c->f[0]-c->f[6]; // 80193BE4
  c->f[0]=c->f[1]-c->f[0]; // 80193BE8
  goto L_80193DF8; // 80193BEC
L_80193BF0:;
  c->r[5]=0u+0x00100000u; // 80193BF0
  c->r[11]=0u+0x00000000u; // 80193BF4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 80193BF8
  if (!crb(c,0)) { goto L_80193C14; } // 80193BFC
  {uint32_t ea=c->r[2]+0xFFFF9208u; c->f[1]=RF64(ea);} // 80193C00
  c->r[11]=0u+0xFFFFFFCBu; // 80193C04
  c->f[0]=c->f[0]*c->f[1]; // 80193C08
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 80193C0C
  c->r[6]=R32(c->r[1]+0x00000048u); // 80193C10
L_80193C14:;
  c->r[5]=0u+0x00040000u; // 80193C14
  c->r[8]=rotl(c->r[6],0)&0x000FFFFFu; // 80193C18
  c->r[5]=c->r[5]+0xFFFF988Eu; // 80193C1C
  c->r[6]=sraw(c,c->r[6],20); // 80193C20
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 80193C24
  c->r[7]=c->r[8]|0x3FF00000u; // 80193C28
  c->r[5]=c->r[11]+c->r[6]; // 80193C2C
  c->r[11]=c->r[5]+0xFFFFFC01u; // 80193C30
  if (crb(c,1)) { goto L_80193C40; } // 80193C34
  c->r[6]=0u+0x00000000u; // 80193C38
  goto L_80193C64; // 80193C3C
L_80193C40:;
  c->r[5]=0u+0x000C0000u; // 80193C40
  c->r[5]=c->r[5]+0xFFFFB67Au; // 80193C44
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 80193C48
  if (!crb(c,0)) { goto L_80193C58; } // 80193C4C
  c->r[6]=0u+0x00000001u; // 80193C50
  goto L_80193C64; // 80193C54
L_80193C58:;
  c->r[7]=c->r[7]+0xFFF00000u; // 80193C58
  c->r[6]=0u+0x00000000u; // 80193C5C
  c->r[11]=c->r[11]+0x00000001u; // 80193C60
L_80193C64:;
  W32(c->r[1]+0x00000048u,c->r[7]); // 80193C64
  c->r[9]=sraw(c,c->r[7],1); // 80193C68
  c->r[10]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80193C6C
  c->r[5]=c->r[3]+0x00000000u; // 80193C70
  {uint32_t ea=c->r[5]+c->r[10]; c->f[8]=RF64(ea);} // 80193C74
  c->r[8]=rotl(c->r[6],18)&0xFFFC0000u; // 80193C78
  {uint32_t ea=c->r[1]+0x00000048u; c->f[10]=RF64(ea);} // 80193C7C
  c->r[6]=c->r[11]^0x80000000u; // 80193C80
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[0]=RF64(ea);} // 80193C84
  c->r[5]=0u+0x43300000u; // 80193C88
  c->f[3]=c->f[10]+c->f[8]; // 80193C8C
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[1]=RF64(ea);} // 80193C90
  c->f[26]=c->f[10]-c->f[8]; // 80193C94
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[7]=RF64(ea);} // 80193C98
  {uint32_t ea=c->r[2]+0xFFFF9228u; c->f[6]=RF64(ea);} // 80193C9C
  c->r[9]=c->r[9]|0x20000000u; // 80193CA0
  c->f[1]=c->f[1]/c->f[3]; // 80193CA4
  c->r[8]=c->r[8]+0x00080000u; // 80193CA8
  c->r[8]=c->r[9]+c->r[8]; // 80193CAC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80193CB0
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[3]=RF64(ea);} // 80193CB4
  c->r[9]=0u+0x00000000u; // 80193CB8
  c->f[4]=c->f[26]*c->f[1]; // 80193CBC
  W32(c->r[1]+0x00000018u,c->r[8]); // 80193CC0
  {uint32_t ea=c->r[2]+0xFFFF9220u; c->f[13]=RF64(ea);} // 80193CC4
  c->r[7]=c->r[3]+0x00000020u; // 80193CC8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[9]=RF64(ea);} // 80193CCC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[4]);} // 80193CD0
  c->f[5]=c->f[4]*c->f[4]; // 80193CD4
  W32(c->r[1]+0x00000024u,c->r[9]); // 80193CD8
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[30]=RF64(ea);} // 80193CDC
  c->f[8]=c->f[9]-c->f[8]; // 80193CE0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80193CE4
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 80193CE8
  c->f[7]=c->f[7]*c->f[5]; // 80193CEC
  W32(c->r[1]+0x00000058u,c->r[5]); // 80193CF0
  {uint32_t ea=c->r[2]+0xFFFF9210u; c->f[31]=RF64(ea);} // 80193CF4
  c->f[8]=c->f[10]-c->f[8]; // 80193CF8
  {uint32_t ea=c->r[2]+0xFFFF9240u; c->f[12]=RF64(ea);} // 80193CFC
  c->f[28]=c->f[0]*c->f[9]; // 80193D00
  c->f[7]=c->f[3]+c->f[7]; // 80193D04
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[10]=RF64(ea);} // 80193D08
  c->f[27]=c->f[0]*c->f[8]; // 80193D0C
  {uint32_t ea=c->r[2]+0xFFFF9258u; c->f[9]=RF64(ea);} // 80193D10
  {uint32_t ea=c->r[2]+0xFFFF9248u; c->f[11]=RF64(ea);} // 80193D14
  c->f[7]=c->f[5]*c->f[7]; // 80193D18
  {uint32_t ea=c->r[7]+c->r[10]; c->f[8]=RF64(ea);} // 80193D1C
  c->f[28]=c->f[26]-c->f[28]; // 80193D20
  c->f[3]=c->f[0]*c->f[0]; // 80193D24
  c->f[29]=c->f[6]+c->f[7]; // 80193D28
  {uint32_t ea=c->r[2]+0xFFFF92C8u; c->f[7]=RF64(ea);} // 80193D2C
  c->f[27]=c->f[28]-c->f[27]; // 80193D30
  {uint32_t ea=c->r[1]+0x00000058u; c->f[6]=RF64(ea);} // 80193D34
  c->f[28]=c->f[5]*c->f[5]; // 80193D38
  c->f[29]=c->f[5]*c->f[29]; // 80193D3C
  c->f[27]=c->f[1]*c->f[27]; // 80193D40
  c->f[13]=c->f[13]+c->f[29]; // 80193D44
  c->f[1]=c->f[12]+c->f[3]; // 80193D48
  c->f[29]=c->f[5]*c->f[13]; // 80193D4C
  c->f[13]=c->f[0]+c->f[4]; // 80193D50
  c->f[30]=c->f[30]+c->f[29]; // 80193D54
  c->f[13]=c->f[27]*c->f[13]; // 80193D58
  c->f[30]=c->f[5]*c->f[30]; // 80193D5C
  c->f[5]=c->f[6]-c->f[7]; // 80193D60
  c->f[6]=c->f[31]+c->f[30]; // 80193D64
  c->f[26]=c->f[28]*c->f[6]; // 80193D68
  c->f[26]=c->f[26]+c->f[13]; // 80193D6C
  c->f[1]=c->f[1]+c->f[26]; // 80193D70
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 80193D74
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 80193D78
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=RF64(ea);} // 80193D7C
  c->f[6]=c->f[7]-c->f[12]; // 80193D80
  c->f[1]=c->f[27]*c->f[7]; // 80193D84
  c->f[3]=c->f[6]-c->f[3]; // 80193D88
  c->f[6]=c->f[0]*c->f[7]; // 80193D8C
  c->f[0]=c->f[26]-c->f[3]; // 80193D90
  c->f[0]=c->f[0]*c->f[4]; // 80193D94
  c->f[4]=c->f[1]+c->f[0]; // 80193D98
  c->f[3]=c->f[6]+c->f[4]; // 80193D9C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 80193DA0
  W32(c->r[1]+0x00000044u,c->r[9]); // 80193DA4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 80193DA8
  c->f[0]=c->f[3]-c->f[6]; // 80193DAC
  c->f[1]=c->f[10]*c->f[3]; // 80193DB0
  c->f[0]=c->f[4]-c->f[0]; // 80193DB4
  c->f[3]=c->f[11]*c->f[3]; // 80193DB8
  c->f[0]=c->f[9]*c->f[0]; // 80193DBC
  c->f[0]=c->f[1]+c->f[0]; // 80193DC0
  c->f[4]=c->f[8]+c->f[0]; // 80193DC4
  c->r[3]=c->r[3]+0x00000010u; // 80193DC8
  c->f[0]=c->f[3]+c->f[4]; // 80193DCC
  {uint32_t ea=c->r[3]+c->r[10]; c->f[1]=RF64(ea);} // 80193DD0
  c->f[0]=c->f[0]+c->f[1]; // 80193DD4
  c->f[0]=c->f[5]+c->f[0]; // 80193DD8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80193DDC
  W32(c->r[1]+0x00000034u,c->r[9]); // 80193DE0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80193DE4
  c->f[0]=c->f[0]-c->f[5]; // 80193DE8
  c->f[0]=c->f[0]-c->f[1]; // 80193DEC
  c->f[0]=c->f[0]-c->f[3]; // 80193DF0
  c->f[0]=c->f[4]-c->f[0]; // 80193DF4
L_80193DF8:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 80193DF8
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[31]=RF64(ea);} // 80193DFC
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 80193E00
  if (!crb(c,2)) { goto L_80193E0C; } // 80193E04
  {uint32_t ea=c->r[2]+0xFFFF9260u; c->f[31]=RF64(ea);} // 80193E08
L_80193E0C:;
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 80193E0C
  c->r[0]=0u+0x00000000u; // 80193E10
  c->f[0]=c->f[2]*c->f[0]; // 80193E14
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 80193E18
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80193E1C
  c->r[0]=0u+0x40900000u; // 80193E20
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 80193E24
  c->f[2]=c->f[2]-c->f[3]; // 80193E28
  c->f[3]=c->f[3]*c->f[1]; // 80193E2C
  c->f[1]=c->f[1]*c->f[2]; // 80193E30
  c->f[10]=c->f[1]+c->f[0]; // 80193E34
  c->f[0]=c->f[10]+c->f[3]; // 80193E38
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 80193E3C
  c->r[6]=R32(c->r[1]+0x00000050u); // 80193E40
  c->r[5]=R32(c->r[1]+0x00000054u); // 80193E44
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80193E48
  if (crb(c,0)) { goto L_80193E90; } // 80193E4C
  c->r[0]=c->r[6]+0xBF700000u; // 80193E50
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 80193E54
  if (crb(c,2)) { goto L_80193E6C; } // 80193E58
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[1]=RF64(ea);} // 80193E5C
  c->f[0]=c->f[1]*c->f[31]; // 80193E60
  c->f[1]=c->f[1]*c->f[0]; // 80193E64
  goto L_80194038; // 80193E68
L_80193E6C:;
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[1]=RF64(ea);} // 80193E6C
  c->f[0]=c->f[0]-c->f[3]; // 80193E70
  c->f[1]=c->f[1]+c->f[10]; // 80193E74
  fcmp(c,0,c->f[1],c->f[0]); // 80193E78
  if (!crb(c,1)) { goto L_80193EE4; } // 80193E7C
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[1]=RF64(ea);} // 80193E80
  c->f[0]=c->f[1]*c->f[31]; // 80193E84
  c->f[1]=c->f[1]*c->f[0]; // 80193E88
  goto L_80194038; // 80193E8C
L_80193E90:;
  c->r[3]=0u+0x40910000u; // 80193E90
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 80193E94
  c->r[0]=c->r[3]+0xFFFFCC00u; // 80193E98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80193E9C
  if (crb(c,0)) { goto L_80193EE4; } // 80193EA0
  c->r[3]=c->r[6]+0x3F6F0000u; // 80193EA4
  c->r[0]=c->r[3]+0x00003400u; // 80193EA8
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 80193EAC
  if (crb(c,2)) { goto L_80193EC4; } // 80193EB0
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[1]=RF64(ea);} // 80193EB4
  c->f[0]=c->f[1]*c->f[31]; // 80193EB8
  c->f[1]=c->f[1]*c->f[0]; // 80193EBC
  goto L_80194038; // 80193EC0
L_80193EC4:;
  c->f[0]=c->f[0]-c->f[3]; // 80193EC4
  fcmp(c,0,c->f[10],c->f[0]); // 80193EC8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80193ECC
  if (!crb(c,2)) { goto L_80193EE4; } // 80193ED0
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[1]=RF64(ea);} // 80193ED4
  c->f[0]=c->f[1]*c->f[31]; // 80193ED8
  c->f[1]=c->f[1]*c->f[0]; // 80193EDC
  goto L_80194038; // 80193EE0
L_80193EE4:;
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 80193EE4
  c->r[0]=0u+0x3FE00000u; // 80193EE8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80193EEC
  c->r[4]=rotl(c->r[6],12)&0x000007FFu; // 80193EF0
  c->r[3]=0u+0x00000000u; // 80193EF4
  if (!crb(c,1)) { goto L_80193F54; } // 80193EF8
  c->r[3]=0u+0x00100000u; // 80193EFC
  c->r[0]=c->r[4]+0xFFFFFC02u; // 80193F00
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 80193F04
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[0]=RF64(ea);} // 80193F08
  c->r[7]=c->r[6]+c->r[0]; // 80193F0C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 80193F10
  c->r[0]=rotl(c->r[7],0)&0x7FFFFFFFu; // 80193F14
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80193F18
  c->r[4]=sraw(c,c->r[0],20); // 80193F1C
  cmps(c,0,(int32_t)c->r[6],0); // 80193F20
  c->r[5]=c->r[4]+0xFFFFFC01u; // 80193F24
  c->r[0]=rotl(c->r[7],0)&0x000FFFFFu; // 80193F28
  c->r[4]=sraw(c,c->r[3],(c->r[5])&63); // 80193F2C
  c->r[3]=c->r[0]|0x00100000u; // 80193F30
  c->r[0]=addc(c,~c->r[5],0x00000014u,1); // 80193F34
  c->r[4]=c->r[7]&~c->r[4]; // 80193F38
  W32(c->r[1]+0x00000028u,c->r[4]); // 80193F3C
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 80193F40
  if (!crb(c,0)) { goto L_80193F4C; } // 80193F44
  c->r[3]=0u-c->r[3]; // 80193F48
L_80193F4C:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 80193F4C
  c->f[3]=c->f[3]-c->f[0]; // 80193F50
L_80193F54:;
  c->f[0]=c->f[10]+c->f[3]; // 80193F54
  c->r[0]=0u+0x00000000u; // 80193F58
  {uint32_t ea=c->r[2]+0xFFFF9288u; c->f[2]=RF64(ea);} // 80193F5C
  c->r[4]=rotl(c->r[3],20)&0xFFF00000u; // 80193F60
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 80193F64
  {uint32_t ea=c->r[2]+0xFFFF9290u; c->f[0]=RF64(ea);} // 80193F68
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80193F6C
  {uint32_t ea=c->r[2]+0xFFFF9280u; c->f[9]=RF64(ea);} // 80193F70
  {uint32_t ea=c->r[1]+0x00000028u; c->f[8]=RF64(ea);} // 80193F74
  {uint32_t ea=c->r[2]+0xFFFF92B8u; c->f[6]=RF64(ea);} // 80193F78
  c->f[3]=c->f[8]-c->f[3]; // 80193F7C
  {uint32_t ea=c->r[2]+0xFFFF92B0u; c->f[1]=RF64(ea);} // 80193F80
  c->f[7]=c->f[0]*c->f[8]; // 80193F84
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[5]=RF64(ea);} // 80193F88
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[4]=RF64(ea);} // 80193F8C
  c->f[0]=c->f[10]-c->f[3]; // 80193F90
  c->f[10]=c->f[9]*c->f[8]; // 80193F94
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[3]=RF64(ea);} // 80193F98
  c->f[8]=c->f[2]*c->f[0]; // 80193F9C
  {uint32_t ea=c->r[2]+0xFFFF92C0u; c->f[2]=RF64(ea);} // 80193FA0
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[0]=RF64(ea);} // 80193FA4
  c->f[11]=c->f[8]+c->f[7]; // 80193FA8
  c->f[9]=c->f[10]+c->f[11]; // 80193FAC
  c->f[7]=c->f[9]*c->f[9]; // 80193FB0
  c->f[8]=c->f[9]-c->f[10]; // 80193FB4
  c->f[6]=c->f[6]*c->f[7]; // 80193FB8
  c->f[8]=c->f[11]-c->f[8]; // 80193FBC
  c->f[6]=c->f[1]+c->f[6]; // 80193FC0
  c->f[1]=c->f[9]*c->f[8]; // 80193FC4
  c->f[6]=c->f[7]*c->f[6]; // 80193FC8
  c->f[1]=c->f[8]+c->f[1]; // 80193FCC
  c->f[5]=c->f[5]+c->f[6]; // 80193FD0
  c->f[5]=c->f[7]*c->f[5]; // 80193FD4
  c->f[4]=c->f[4]+c->f[5]; // 80193FD8
  c->f[4]=c->f[7]*c->f[4]; // 80193FDC
  c->f[3]=c->f[3]+c->f[4]; // 80193FE0
  c->f[3]=c->f[7]*c->f[3]; // 80193FE4
  c->f[4]=c->f[9]-c->f[3]; // 80193FE8
  c->f[3]=c->f[9]*c->f[4]; // 80193FEC
  c->f[2]=c->f[4]-c->f[2]; // 80193FF0
  c->f[2]=c->f[3]/c->f[2]; // 80193FF4
  c->f[1]=c->f[2]-c->f[1]; // 80193FF8
  c->f[1]=c->f[1]-c->f[9]; // 80193FFC
  c->f[1]=c->f[0]-c->f[1]; // 80194000
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 80194004
  c->r[0]=R32(c->r[1]+0x00000050u); // 80194008
  c->r[0]=c->r[0]+c->r[4]; // 8019400C
  c->r[0]=sraw(c,c->r[0],20); cr0(c,c->r[0]); // 80194010
  if (crb(c,1)) { goto L_80194024; } // 80194014
  c->lr=0x8019401Cu; f_80196B34(c); // 80194018
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 8019401C
  goto L_80194030; // 80194020
L_80194024:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 80194024
  c->r[0]=c->r[0]+c->r[4]; // 80194028
  W32(c->r[1]+0x00000050u,c->r[0]); // 8019402C
L_80194030:;
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 80194030
  c->f[1]=c->f[31]*c->f[0]; // 80194034
L_80194038:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80194038
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 8019403C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 80194040
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 80194044
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 80194048
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 8019404C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 80194050
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 80194054
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 80194058
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 8019405C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 80194060
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 80194064
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 80194068
  c->lr=c->r[0]; // 8019406C
  c->r[1]=c->r[1]+0x000000C0u; // 80194070
  return; // 80194074
}

// fn_80194078
void f_80194078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80194078
  c->r[0]=c->lr; // 8019407C
  c->r[4]=0u+0x3FE90000u; // 80194080
  W32(c->r[1]+0x00000064u,c->r[0]); // 80194084
  c->r[0]=c->r[4]+0x000021FBu; // 80194088
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8019408C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80194090
  c->r[31]=R32(c->r[1]+0x00000008u); // 80194094
  W32(c->r[1]+0x00000058u,c->r[30]); // 80194098
  c->r[30]=c->r[3]|c->r[3]; // 8019409C
  c->r[6]=rotl(c->r[31],0)&0x7FFFFFFFu; // 801940A0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801940A4
  if (crb(c,1)) { goto L_801940C0; } // 801940A8
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[0]=RF64(ea);} // 801940AC
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 801940B0
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801940B4
  c->r[3]=0u+0x00000000u; // 801940B8
  goto L_801943E4; // 801940BC
L_801940C0:;
  c->r[4]=0u+0x40030000u; // 801940C0
  c->r[0]=c->r[4]+0xFFFFD97Cu; // 801940C4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801940C8
  if (!crb(c,0)) { goto L_80194188; } // 801940CC
  cmps(c,0,(int32_t)c->r[31],0); // 801940D0
  if (!crb(c,1)) { goto L_80194130; } // 801940D4
  {uint32_t ea=c->r[2]+0xFFFF92D8u; c->f[0]=RF64(ea);} // 801940D8
  c->r[0]=c->r[6]+0xC0070000u; // 801940DC
  cmpu(c,0,c->r[0],0x000021FBu); // 801940E0
  c->f[2]=c->f[1]-c->f[0]; // 801940E4
  if (crb(c,2)) { goto L_80194108; } // 801940E8
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[1]=RF64(ea);} // 801940EC
  c->f[0]=c->f[2]-c->f[1]; // 801940F0
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801940F4
  c->f[0]=c->f[2]-c->f[0]; // 801940F8
  c->f[0]=c->f[0]-c->f[1]; // 801940FC
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 80194100
  goto L_80194128; // 80194104
L_80194108:;
  {uint32_t ea=c->r[2]+0xFFFF92E8u; c->f[0]=RF64(ea);} // 80194108
  {uint32_t ea=c->r[2]+0xFFFF92F0u; c->f[1]=RF64(ea);} // 8019410C
  c->f[2]=c->f[2]-c->f[0]; // 80194110
  c->f[0]=c->f[2]-c->f[1]; // 80194114
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 80194118
  c->f[0]=c->f[2]-c->f[0]; // 8019411C
  c->f[0]=c->f[0]-c->f[1]; // 80194120
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 80194124
L_80194128:;
  c->r[3]=0u+0x00000001u; // 80194128
  goto L_801943E4; // 8019412C
L_80194130:;
  {uint32_t ea=c->r[2]+0xFFFF92D8u; c->f[0]=RF64(ea);} // 80194130
  c->r[0]=c->r[6]+0xC0070000u; // 80194134
  cmpu(c,0,c->r[0],0x000021FBu); // 80194138
  c->f[2]=c->f[0]+c->f[1]; // 8019413C
  if (crb(c,2)) { goto L_80194160; } // 80194140
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[1]=RF64(ea);} // 80194144
  c->f[0]=c->f[1]+c->f[2]; // 80194148
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 8019414C
  c->f[0]=c->f[2]-c->f[0]; // 80194150
  c->f[0]=c->f[1]+c->f[0]; // 80194154
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 80194158
  goto L_80194180; // 8019415C
L_80194160:;
  {uint32_t ea=c->r[2]+0xFFFF92E8u; c->f[0]=RF64(ea);} // 80194160
  {uint32_t ea=c->r[2]+0xFFFF92F0u; c->f[1]=RF64(ea);} // 80194164
  c->f[2]=c->f[2]+c->f[0]; // 80194168
  c->f[0]=c->f[1]+c->f[2]; // 8019416C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 80194170
  c->f[0]=c->f[2]-c->f[0]; // 80194174
  c->f[0]=c->f[1]+c->f[0]; // 80194178
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 8019417C
L_80194180:;
  c->r[3]=0u+0xFFFFFFFFu; // 80194180
  goto L_801943E4; // 80194184
L_80194188:;
  c->r[4]=0u+0x41390000u; // 80194188
  c->r[0]=c->r[4]+0x000021FBu; // 8019418C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80194190
  if (crb(c,1)) { goto L_801942DC; } // 80194194
  c->f[5]=std::fabs(c->f[1]); // 80194198
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=RF64(ea);} // 8019419C
  c->r[0]=0u+0x43300000u; // 801941A0
  {uint32_t ea=c->r[2]+0xFFFF92F8u; c->f[2]=RF64(ea);} // 801941A4
  W32(c->r[1]+0x00000038u,c->r[0]); // 801941A8
  c->f[4]=c->f[0]*c->f[5]; // 801941AC
  {uint32_t ea=c->r[2]+0xFFFF9320u; c->f[3]=RF64(ea);} // 801941B0
  {uint32_t ea=c->r[2]+0xFFFF92D8u; c->f[1]=RF64(ea);} // 801941B4
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[0]=RF64(ea);} // 801941B8
  c->f[2]=c->f[2]+c->f[4]; // 801941BC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801941C0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801941C4
  c->r[5]=R32(c->r[1]+0x00000034u); // 801941C8
  c->r[0]=c->r[5]^0x80000000u; // 801941CC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801941D0
  cmps(c,0,(int32_t)c->r[5],32); // 801941D4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801941D8
  c->f[6]=c->f[2]-c->f[3]; // 801941DC
  c->f[1]=c->f[1]*c->f[6]; // 801941E0
  c->f[2]=c->f[0]*c->f[6]; // 801941E4
  c->f[4]=c->f[5]-c->f[1]; // 801941E8
  if (!crb(c,0)) { goto L_80194218; } // 801941EC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801941F0
  c->r[4]=0u+0x802E0000u; // 801941F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801941F8
  c->r[4]=c->r[4]+0x00000B20u; // 801941FC
  c->r[0]=R32(c->r[4]+c->r[0]); // 80194200
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80194204
  if (crb(c,2)) { goto L_80194218; } // 80194208
  c->f[0]=c->f[4]-c->f[2]; // 8019420C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 80194210
  goto L_801942A4; // 80194214
L_80194218:;
  c->f[0]=c->f[4]-c->f[2]; // 80194218
  c->r[4]=sraw(c,c->r[6],20); // 8019421C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 80194220
  c->r[0]=R32(c->r[3]+0x00000000u); // 80194224
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 80194228
  c->r[0]=c->r[4]-c->r[0]; // 8019422C
  cmps(c,0,(int32_t)c->r[0],16); // 80194230
  if (!crb(c,1)) { goto L_801942A4; } // 80194234
  {uint32_t ea=c->r[2]+0xFFFF92E8u; c->f[1]=RF64(ea);} // 80194238
  c->f[2]=c->f[4]; // 8019423C
  {uint32_t ea=c->r[2]+0xFFFF92F0u; c->f[0]=RF64(ea);} // 80194240
  c->f[3]=c->f[1]*c->f[6]; // 80194244
  c->f[1]=c->f[0]*c->f[6]; // 80194248
  c->f[4]=c->f[4]-c->f[3]; // 8019424C
  c->f[0]=c->f[2]-c->f[4]; // 80194250
  c->f[0]=c->f[0]-c->f[3]; // 80194254
  c->f[2]=c->f[1]-c->f[0]; // 80194258
  c->f[0]=c->f[4]-c->f[2]; // 8019425C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 80194260
  c->r[0]=R32(c->r[3]+0x00000000u); // 80194264
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 80194268
  c->r[0]=c->r[4]-c->r[0]; // 8019426C
  cmps(c,0,(int32_t)c->r[0],49); // 80194270
  if (!crb(c,1)) { goto L_801942A4; } // 80194274
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[1]=RF64(ea);} // 80194278
  c->f[2]=c->f[4]; // 8019427C
  {uint32_t ea=c->r[2]+0xFFFF9310u; c->f[0]=RF64(ea);} // 80194280
  c->f[3]=c->f[1]*c->f[6]; // 80194284
  c->f[1]=c->f[0]*c->f[6]; // 80194288
  c->f[4]=c->f[4]-c->f[3]; // 8019428C
  c->f[0]=c->f[2]-c->f[4]; // 80194290
  c->f[0]=c->f[0]-c->f[3]; // 80194294
  c->f[2]=c->f[1]-c->f[0]; // 80194298
  c->f[0]=c->f[4]-c->f[2]; // 8019429C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801942A0
L_801942A4:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801942A4
  cmps(c,0,(int32_t)c->r[31],0); // 801942A8
  c->f[0]=c->f[4]-c->f[1]; // 801942AC
  c->f[0]=c->f[0]-c->f[2]; // 801942B0
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801942B4
  if (!crb(c,0)) { goto L_801942D4; } // 801942B8
  c->f[1]=-c->f[1]; // 801942BC
  c->f[0]=-c->f[0]; // 801942C0
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 801942C4
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801942C8
  c->r[3]=0u-c->r[5]; // 801942CC
  goto L_801943E4; // 801942D0
L_801942D4:;
  c->r[3]=c->r[5]|c->r[5]; // 801942D4
  goto L_801943E4; // 801942D8
L_801942DC:;
  c->r[0]=0u+0x7FF00000u; // 801942DC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801942E0
  if (crb(c,0)) { goto L_801942FC; } // 801942E4
  c->f[0]=c->f[1]-c->f[1]; // 801942E8
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801942EC
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801942F0
  c->r[3]=0u+0x00000000u; // 801942F4
  goto L_801943E4; // 801942F8
L_801942FC:;
  c->r[3]=sraw(c,c->r[6],20); // 801942FC
  c->r[0]=0u+0x43300000u; // 80194300
  c->r[5]=c->r[3]+0xFFFFFBEAu; // 80194304
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80194308
  c->r[3]=rotl(c->r[5],20)&0xFFF00000u; // 8019430C
  W32(c->r[1]+0x00000014u,c->r[4]); // 80194310
  c->r[3]=c->r[6]-c->r[3]; // 80194314
  {uint32_t ea=c->r[2]+0xFFFF9320u; c->f[4]=RF64(ea);} // 80194318
  W32(c->r[1]+0x00000010u,c->r[3]); // 8019431C
  c->r[3]=c->r[1]+0x00000030u; // 80194320
  {uint32_t ea=c->r[2]+0xFFFF9318u; c->f[3]=RF64(ea);} // 80194324
  c->r[6]=0u+0x00000003u; // 80194328
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8019432C
  W32(c->r[1]+0x00000030u,c->r[0]); // 80194330
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80194334
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[1]=RF64(ea);} // 80194338
  W32(c->r[1]+0x00000048u,c->r[0]); // 8019433C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 80194340
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80194344
  c->r[0]=c->r[0]^0x80000000u; // 80194348
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019434C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80194350
  c->f[0]=c->f[0]-c->f[4]; // 80194354
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80194358
  c->f[0]=c->f[2]-c->f[0]; // 8019435C
  c->f[2]=c->f[3]*c->f[0]; // 80194360
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80194364
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 80194368
  c->r[0]=R32(c->r[1]+0x00000044u); // 8019436C
  c->r[0]=c->r[0]^0x80000000u; // 80194370
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80194374
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 80194378
  c->f[0]=c->f[0]-c->f[4]; // 8019437C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80194380
  c->f[0]=c->f[2]-c->f[0]; // 80194384
  c->f[0]=c->f[3]*c->f[0]; // 80194388
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 8019438C
  goto L_8019439C; // 80194390
L_80194394:;
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80194394
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80194398
L_8019439C:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 8019439C
  fcmp(c,0,c->f[1],c->f[0]); // 801943A0
  if (crb(c,2)) { IRQCHK(c); goto L_80194394; } // 801943A4
  c->r[8]=0u+0x802E0000u; // 801943A8
  c->r[4]=c->r[30]|c->r[30]; // 801943AC
  c->r[3]=c->r[1]+0x00000018u; // 801943B0
  c->r[7]=0u+0x00000002u; // 801943B4
  c->r[8]=c->r[8]+0x00000A18u; // 801943B8
  c->lr=0x801943C0u; f_8019450C(c); // 801943BC
  cmps(c,0,(int32_t)c->r[31],0); // 801943C0
  if (!crb(c,0)) { goto L_801943E4; } // 801943C4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=RF64(ea);} // 801943C8
  c->r[3]=0u-c->r[3]; // 801943CC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=RF64(ea);} // 801943D0
  c->f[1]=-c->f[1]; // 801943D4
  c->f[0]=-c->f[0]; // 801943D8
  {uint32_t ea=c->r[30]+0x00000000u; WF64(ea,c->f[1]);} // 801943DC
  {uint32_t ea=c->r[30]+0x00000008u; WF64(ea,c->f[0]);} // 801943E0
L_801943E4:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801943E4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801943E8
  c->r[30]=R32(c->r[1]+0x00000058u); // 801943EC
  c->lr=c->r[0]; // 801943F0
  c->r[1]=c->r[1]+0x00000060u; // 801943F4
  return; // 801943F8
}

// __kernel_cos
void f_801943FC(Ctx* __restrict c) {
  trace_call(0x801943FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801943FC
  c->r[0]=0u+0x3E400000u; // 80194400
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80194404
  c->r[3]=R32(c->r[1]+0x00000008u); // 80194408
  c->r[4]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8019440C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80194410
  if (!crb(c,0)) { goto L_80194434; } // 80194414
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80194418
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8019441C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80194420
  cmps(c,0,(int32_t)c->r[0],0); // 80194424
  if (!crb(c,2)) { goto L_80194434; } // 80194428
  {uint32_t ea=c->r[2]+0xFFFF9328u; c->f[1]=RF64(ea);} // 8019442C
  goto L_80194504; // 80194430
L_80194434:;
  c->f[8]=c->f[1]*c->f[1]; // 80194434
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[0]=RF64(ea);} // 80194438
  c->r[3]=0u+0x3FD30000u; // 8019443C
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[6]=RF64(ea);} // 80194440
  c->r[0]=c->r[3]+0x00003333u; // 80194444
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[5]=RF64(ea);} // 80194448
  c->f[7]=c->f[0]*c->f[8]; // 8019444C
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[4]=RF64(ea);} // 80194450
  {uint32_t ea=c->r[2]+0xFFFF9338u; c->f[3]=RF64(ea);} // 80194454
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80194458
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[0]=RF64(ea);} // 8019445C
  c->f[6]=c->f[6]+c->f[7]; // 80194460
  c->f[6]=c->f[8]*c->f[6]; // 80194464
  c->f[5]=c->f[5]+c->f[6]; // 80194468
  c->f[5]=c->f[8]*c->f[5]; // 8019446C
  c->f[4]=c->f[4]+c->f[5]; // 80194470
  c->f[4]=c->f[8]*c->f[4]; // 80194474
  c->f[3]=c->f[3]+c->f[4]; // 80194478
  c->f[3]=c->f[8]*c->f[3]; // 8019447C
  c->f[0]=c->f[0]+c->f[3]; // 80194480
  c->f[3]=c->f[8]*c->f[0]; // 80194484
  if (!crb(c,0)) { goto L_801944B0; } // 80194488
  c->f[3]=c->f[8]*c->f[3]; // 8019448C
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[4]=RF64(ea);} // 80194490
  {uint32_t ea=c->r[2]+0xFFFF9328u; c->f[0]=RF64(ea);} // 80194494
  c->f[1]=c->f[1]*c->f[2]; // 80194498
  c->f[2]=c->f[4]*c->f[8]; // 8019449C
  c->f[1]=c->f[3]-c->f[1]; // 801944A0
  c->f[1]=c->f[2]-c->f[1]; // 801944A4
  c->f[1]=c->f[0]-c->f[1]; // 801944A8
  goto L_80194504; // 801944AC
L_801944B0:;
  c->r[0]=0u+0x3FE90000u; // 801944B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801944B4
  if (!crb(c,1)) { goto L_801944C8; } // 801944B8
  {uint32_t ea=c->r[2]+0xFFFF9368u; c->f[0]=RF64(ea);} // 801944BC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801944C0
  goto L_801944D8; // 801944C4
L_801944C8:;
  c->r[3]=c->r[4]+0xFFE00000u; // 801944C8
  c->r[0]=0u+0x00000000u; // 801944CC
  W32(c->r[1]+0x00000010u,c->r[3]); // 801944D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801944D4
L_801944D8:;
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[0]=RF64(ea);} // 801944D8
  c->f[3]=c->f[8]*c->f[3]; // 801944DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[5]=RF64(ea);} // 801944E0
  c->f[6]=c->f[0]*c->f[8]; // 801944E4
  {uint32_t ea=c->r[2]+0xFFFF9328u; c->f[4]=RF64(ea);} // 801944E8
  c->f[0]=c->f[1]*c->f[2]; // 801944EC
  c->f[2]=c->f[6]-c->f[5]; // 801944F0
  c->f[1]=c->f[4]-c->f[5]; // 801944F4
  c->f[0]=c->f[3]-c->f[0]; // 801944F8
  c->f[0]=c->f[2]-c->f[0]; // 801944FC
  c->f[1]=c->f[1]-c->f[0]; // 80194500
L_80194504:;
  c->r[1]=c->r[1]+0x00000020u; // 80194504
  return; // 80194508
}

// fn_8019450C
void f_8019450C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFC90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019450C
  c->r[0]=c->lr; // 80194510
  W32(c->r[1]+0x00000374u,c->r[0]); // 80194514
  c->r[11]=c->r[1]+0x00000370u; // 80194518
  c->lr=0x80194520u; { {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 8019451C
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80194520
  c->r[9]=0u+0x2AAB0000u; // 80194524
  c->r[12]=0u+0x43300000u; // 80194528
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 8019452C
  c->r[10]=0u+0x802E0000u; // 80194530
  c->r[9]=c->r[9]+0xFFFFAAABu; // 80194534
  c->r[11]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80194538
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[9]*(int64_t)(int32_t)c->r[0])>>32); // 8019453C
  c->r[10]=c->r[10]+0x00000BA0u; // 80194540
  c->r[17]=c->r[4]|c->r[4]; // 80194544
  c->r[21]=R32(c->r[10]+c->r[11]); // 80194548
  W32(c->r[1]+0x00000240u,c->r[12]); // 8019454C
  c->r[16]=c->r[3]|c->r[3]; // 80194550
  c->r[0]=sraw(c,c->r[0],2); // 80194554
  W32(c->r[1]+0x00000248u,c->r[12]); // 80194558
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8019455C
  c->r[22]=c->r[6]+0xFFFFFFFFu; // 80194560
  c->r[10]=c->r[0]+c->r[4]; cr0(c,c->r[10]); // 80194564
  W32(c->r[1]+0x00000008u,c->r[7]); // 80194568
  if (!crb(c,0)) { goto L_80194574; } // 8019456C
  c->r[10]=0u+0x00000000u; // 80194570
L_80194574:;
  c->r[0]=c->r[10]+0x00000001u; // 80194574
  c->r[9]=c->r[22]+c->r[21]; cr0(c,c->r[9]); // 80194578
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8019457C
  c->r[7]=c->r[10]-c->r[22]; // 80194580
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[1]=RF64(ea);} // 80194584
  c->r[4]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80194588
  c->r[19]=c->r[5]-c->r[6]; // 8019458C
  c->r[0]=c->r[9]+0x00000001u; // 80194590
  c->r[4]=c->r[8]+c->r[4]; // 80194594
  c->r[5]=c->r[1]+0x000001A0u; // 80194598
  c->ctr=c->r[0]; // 8019459C
  if (crb(c,0)) { goto L_801945DC; } // 801945A0
L_801945A4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801945A4
  if (!crb(c,0)) { goto L_801945B4; } // 801945A8
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[0]=RF64(ea);} // 801945AC
  goto L_801945C8; // 801945B0
L_801945B4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801945B4
  c->r[0]=c->r[0]^0x80000000u; // 801945B8
  W32(c->r[1]+0x00000244u,c->r[0]); // 801945BC
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 801945C0
  c->f[0]=c->f[0]-c->f[1]; // 801945C4
L_801945C8:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[0]);} // 801945C8
  c->r[5]=c->r[5]+0x00000008u; // 801945CC
  c->r[4]=c->r[4]+0x00000004u; // 801945D0
  c->r[7]=c->r[7]+0x00000001u; // 801945D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801945A4; } // 801945D8
L_801945DC:;
  c->r[0]=c->r[22]+0x00000001u; // 801945DC
  c->r[5]=c->r[1]+0x00000060u; // 801945E0
  c->r[25]=rotl(c->r[22],0)&0x80000000u; // 801945E4
  c->r[12]=c->r[1]+0x000001A0u; // 801945E8
  c->r[24]=rotl(c->r[0],0)&0x80000000u; // 801945EC
  c->r[9]=0u+0x00000000u; // 801945F0
  c->r[4]=0u+0x80000000u; // 801945F4
  goto L_801947C0; // 801945F8
L_801945FC:;
  cmps(c,1,(int32_t)c->r[22],0); // 801945FC
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[6]=RF64(ea);} // 80194600
  c->r[7]=0u+0x00000000u; // 80194604
  if (crb(c,4)) { goto L_801947B4; } // 80194608
  c->r[0]=c->r[22]+0x00000001u; // 8019460C
  c->r[14]=c->r[22]+0xFFFFFFF8u; // 80194610
  cmps(c,0,(int32_t)c->r[0],8); // 80194614
  if (!crb(c,1)) { goto L_80194770; } // 80194618
  c->r[6]=0u+0x00000000u; // 8019461C
  c->r[11]=0u+0x00000000u; // 80194620
  if (crb(c,4)) { goto L_80194638; } // 80194624
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80194628
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 8019462C
  if (crb(c,1)) { goto L_80194638; } // 80194630
  c->r[11]=0u+0x00000001u; // 80194634
L_80194638:;
  cmps(c,0,(int32_t)c->r[11],0); // 80194638
  if (crb(c,2)) { goto L_80194664; } // 8019463C
  cmps(c,0,(int32_t)c->r[25],0); // 80194640
  c->r[0]=0u+0x00000001u; // 80194644
  if (!crb(c,2)) { goto L_80194658; } // 80194648
  cmps(c,0,(int32_t)c->r[24],0); // 8019464C
  if (crb(c,2)) { goto L_80194658; } // 80194650
  c->r[0]=0u+0x00000000u; // 80194654
L_80194658:;
  cmps(c,0,(int32_t)c->r[0],0); // 80194658
  if (crb(c,2)) { goto L_80194664; } // 8019465C
  c->r[6]=0u+0x00000001u; // 80194660
L_80194664:;
  cmps(c,0,(int32_t)c->r[6],0); // 80194664
  if (crb(c,2)) { goto L_80194770; } // 80194668
  c->r[11]=c->r[14]+0x00000008u; // 8019466C
  c->r[6]=c->r[16]|c->r[16]; // 80194670
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 80194674
  c->r[0]=c->r[22]+c->r[9]; // 80194678
  c->ctr=c->r[11]; // 8019467C
  cmps(c,0,(int32_t)c->r[14],0); // 80194680
  if (crb(c,0)) { goto L_80194770; } // 80194684
L_80194688:;
  c->r[11]=c->r[0]-c->r[7]; // 80194688
  c->r[14]=c->r[7]+0x00000001u; // 8019468C
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80194690
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 80194694
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 80194698
  c->r[14]=c->r[0]-c->r[14]; // 8019469C
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801946A0
  c->r[11]=c->r[7]+0x00000002u; // 801946A4
  c->f[2]=c->f[1]*c->f[0]; // 801946A8
  c->r[14]=c->r[0]-c->r[11]; // 801946AC
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 801946B0
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801946B4
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=RF64(ea);} // 801946B8
  c->r[11]=c->r[7]+0x00000003u; // 801946BC
  c->f[3]=c->f[1]*c->f[0]; // 801946C0
  c->r[14]=c->r[0]-c->r[11]; // 801946C4
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=RF64(ea);} // 801946C8
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801946CC
  c->f[6]=c->f[6]+c->f[2]; // 801946D0
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 801946D4
  c->f[2]=c->f[1]*c->f[0]; // 801946D8
  c->r[11]=c->r[7]+0x00000004u; // 801946DC
  {uint32_t ea=c->r[12]+c->r[14]; c->f[0]=RF64(ea);} // 801946E0
  c->r[11]=c->r[0]-c->r[11]; // 801946E4
  c->f[6]=c->f[6]+c->f[3]; // 801946E8
  {uint32_t ea=c->r[6]+0x00000018u; c->f[1]=RF64(ea);} // 801946EC
  c->r[18]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801946F0
  c->f[1]=c->f[1]*c->f[0]; // 801946F4
  c->r[11]=c->r[7]+0x00000005u; // 801946F8
  c->r[14]=c->r[7]+0x00000006u; // 801946FC
  c->f[6]=c->f[6]+c->f[2]; // 80194700
  c->r[11]=c->r[0]-c->r[11]; // 80194704
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80194708
  c->r[11]=c->r[7]+0x00000007u; // 8019470C
  c->f[6]=c->f[6]+c->f[1]; // 80194710
  c->r[14]=c->r[0]-c->r[14]; // 80194714
  {uint32_t ea=c->r[6]+0x00000020u; c->f[2]=RF64(ea);} // 80194718
  {uint32_t ea=c->r[12]+c->r[18]; c->f[0]=RF64(ea);} // 8019471C
  c->r[11]=c->r[0]-c->r[11]; // 80194720
  {uint32_t ea=c->r[6]+0x00000028u; c->f[1]=RF64(ea);} // 80194724
  c->f[5]=c->f[2]*c->f[0]; // 80194728
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 8019472C
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 80194730
  {uint32_t ea=c->r[6]+0x00000030u; c->f[3]=RF64(ea);} // 80194734
  c->f[4]=c->f[1]*c->f[0]; // 80194738
  {uint32_t ea=c->r[12]+c->r[14]; c->f[2]=RF64(ea);} // 8019473C
  c->f[6]=c->f[6]+c->f[5]; // 80194740
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80194744
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=RF64(ea);} // 80194748
  c->f[2]=c->f[3]*c->f[2]; // 8019474C
  {uint32_t ea=c->r[12]+c->r[11]; c->f[0]=RF64(ea);} // 80194750
  c->r[7]=c->r[7]+0x00000008u; // 80194754
  c->f[6]=c->f[6]+c->f[4]; // 80194758
  c->r[6]=c->r[6]+0x00000040u; // 8019475C
  c->f[0]=c->f[1]*c->f[0]; // 80194760
  c->f[6]=c->f[6]+c->f[2]; // 80194764
  c->f[6]=c->f[6]+c->f[0]; // 80194768
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194688; } // 8019476C
L_80194770:;
  c->r[0]=c->r[22]+0x00000001u; // 80194770
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80194774
  c->r[0]=c->r[0]-c->r[7]; // 80194778
  c->r[11]=c->r[22]+c->r[9]; // 8019477C
  c->r[6]=c->r[3]+c->r[6]; // 80194780
  c->ctr=c->r[0]; // 80194784
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[22]); // 80194788
  if (crb(c,1)) { goto L_801947B4; } // 8019478C
L_80194790:;
  c->r[0]=c->r[11]-c->r[7]; // 80194790
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 80194794
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80194798
  c->r[6]=c->r[6]+0x00000008u; // 8019479C
  {uint32_t ea=c->r[12]+c->r[0]; c->f[0]=RF64(ea);} // 801947A0
  c->r[7]=c->r[7]+0x00000001u; // 801947A4
  c->f[0]=c->f[1]*c->f[0]; // 801947A8
  c->f[6]=c->f[6]+c->f[0]; // 801947AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194790; } // 801947B0
L_801947B4:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[6]);} // 801947B4
  c->r[5]=c->r[5]+0x00000008u; // 801947B8
  c->r[9]=c->r[9]+0x00000001u; // 801947BC
L_801947C0:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 801947C0
  if (!crb(c,1)) { IRQCHK(c); goto L_801945FC; } // 801947C4
  c->r[28]=addc(c,~c->r[19],0x00000018u,1); // 801947C8
  c->r[5]=0u-c->r[21]; // 801947CC
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801947D0
  c->r[0]=addc(c,~c->r[19],0x00000017u,1); // 801947D4
  c->r[3]=rotl(c->r[22],3)&0xFFFFFFF8u; // 801947D8
  c->r[26]=c->r[1]+0x000001A0u; // 801947DC
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[24]=RF64(ea);} // 801947E0
  c->r[23]=c->r[21]|c->r[21]; // 801947E4
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[25]=RF64(ea);} // 801947E8
  c->r[14]=rotl(c->r[5],0)&0x80000000u; // 801947EC
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[26]=RF64(ea);} // 801947F0
  c->r[27]=c->r[8]+c->r[4]; // 801947F4
  W32(c->r[1]+0x000002D0u,c->r[0]); // 801947F8
  c->r[26]=c->r[26]+c->r[3]; // 801947FC
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[27]=RF64(ea);} // 80194800
  c->r[29]=c->r[1]+0x00000010u; // 80194804
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[28]=RF64(ea);} // 80194808
  c->r[15]=c->r[1]+0x000001A0u; // 8019480C
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[29]=RF64(ea);} // 80194810
  c->r[30]=0u+0x01000000u; // 80194814
  {uint32_t ea=c->r[2]+0xFFFF93A0u; c->f[30]=RF64(ea);} // 80194818
  c->r[31]=0u+0x80000000u; // 8019481C
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[31]=RF64(ea);} // 80194820
L_80194824:;
  c->r[0]=rotl(c->r[23],3)&0xFFFFFFF8u; // 80194824
  c->r[3]=c->r[1]+0x00000060u; // 80194828
  cmps(c,0,(int32_t)c->r[23],0); // 8019482C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 80194830
  c->r[4]=c->r[23]|c->r[23]; // 80194834
  c->r[5]=0u+0x00000000u; // 80194838
  c->r[6]=0u+0x00000000u; // 8019483C
  if (!crb(c,1)) { goto L_80194B3C; } // 80194840
  cmps(c,0,(int32_t)c->r[23],8); // 80194844
  if (!crb(c,1)) { goto L_80194ACC; } // 80194848
  cmps(c,0,(int32_t)c->r[23],-1); // 8019484C
  c->r[0]=0u+0x00000000u; // 80194850
  if (!crb(c,1)) { goto L_8019485C; } // 80194854
  c->r[0]=0u+0x00000001u; // 80194858
L_8019485C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8019485C
  if (crb(c,2)) { goto L_80194ACC; } // 80194860
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80194864
  c->r[7]=rotl(c->r[23],3)&0xFFFFFFF8u; // 80194868
  c->r[3]=c->r[1]+0x00000060u; // 8019486C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80194870
  c->r[3]=c->r[3]+c->r[7]; // 80194874
  c->ctr=c->r[0]; // 80194878
  cmps(c,0,(int32_t)c->r[23],8); // 8019487C
  if (!crb(c,1)) { goto L_80194ACC; } // 80194880
L_80194884:;
  c->f[0]=c->f[24]*c->f[1]; // 80194884
  c->r[0]=c->r[5]+0x00000001u; // 80194888
  c->r[9]=c->r[5]+0x00000002u; // 8019488C
  c->r[8]=c->r[5]+0x00000003u; // 80194890
  c->r[7]=c->r[5]+0x00000004u; // 80194894
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[4]=RF64(ea);} // 80194898
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8019489C
  {uint32_t ea=c->r[3]+0xFFFFFFF0u; c->f[3]=RF64(ea);} // 801948A0
  {uint32_t ea=c->r[3]+0xFFFFFFE8u; c->f[2]=RF64(ea);} // 801948A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801948A8
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[0]);} // 801948AC
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801948B0
  c->r[10]=R32(c->r[1]+0x00000254u); // 801948B4
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801948B8
  {uint32_t ea=c->r[3]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 801948BC
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801948C0
  c->r[10]=c->r[10]^0x80000000u; // 801948C4
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 801948C8
  {uint32_t ea=c->r[1]+0x00000248u; c->f[5]=RF64(ea);} // 801948CC
  c->f[5]=c->f[5]-c->f[25]; // 801948D0
  c->f[6]=c->f[5]+c->f[4]; // 801948D4
  c->f[5]=c->f[26]*c->f[5]; // 801948D8
  c->f[4]=c->f[24]*c->f[6]; // 801948DC
  c->f[5]=c->f[1]-c->f[5]; // 801948E0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 801948E4
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 801948E8
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[1]);} // 801948EC
  c->r[10]=R32(c->r[1]+0x00000264u); // 801948F0
  {uint32_t ea=c->r[1]+0x00000258u; WF64(ea,c->f[4]);} // 801948F4
  c->r[10]=c->r[10]^0x80000000u; // 801948F8
  W32(c->r[1]+0x00000244u,c->r[10]); // 801948FC
  c->r[10]=R32(c->r[1]+0x0000025Cu); // 80194900
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 80194904
  W32(c->r[29]+c->r[6],c->r[10]); // 80194908
  c->f[1]=c->f[1]-c->f[25]; // 8019490C
  c->f[4]=c->f[1]+c->f[3]; // 80194910
  c->f[3]=c->f[26]*c->f[1]; // 80194914
  c->f[1]=c->f[24]*c->f[4]; // 80194918
  c->f[3]=c->f[6]-c->f[3]; // 8019491C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80194920
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80194924
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[1]);} // 80194928
  c->r[10]=R32(c->r[1]+0x00000274u); // 8019492C
  {uint32_t ea=c->r[1]+0x00000268u; WF64(ea,c->f[3]);} // 80194930
  c->r[10]=c->r[10]^0x80000000u; // 80194934
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 80194938
  c->r[10]=R32(c->r[1]+0x0000026Cu); // 8019493C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 80194940
  W32(c->r[29]+c->r[0],c->r[10]); // 80194944
  c->f[1]=c->f[1]-c->f[25]; // 80194948
  c->f[3]=c->f[1]+c->f[2]; // 8019494C
  c->f[2]=c->f[26]*c->f[1]; // 80194950
  c->f[1]=c->f[24]*c->f[3]; // 80194954
  c->f[2]=c->f[4]-c->f[2]; // 80194958
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8019495C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80194960
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[1]);} // 80194964
  c->r[0]=R32(c->r[1]+0x00000284u); // 80194968
  {uint32_t ea=c->r[1]+0x00000278u; WF64(ea,c->f[2]);} // 8019496C
  c->r[0]=c->r[0]^0x80000000u; // 80194970
  W32(c->r[1]+0x00000244u,c->r[0]); // 80194974
  c->r[0]=R32(c->r[1]+0x0000027Cu); // 80194978
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 8019497C
  W32(c->r[29]+c->r[9],c->r[0]); // 80194980
  c->f[1]=c->f[1]-c->f[25]; // 80194984
  c->f[2]=c->f[1]+c->f[0]; // 80194988
  c->f[1]=c->f[26]*c->f[1]; // 8019498C
  c->f[0]=c->f[24]*c->f[2]; // 80194990
  c->f[1]=c->f[3]-c->f[1]; // 80194994
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80194998
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8019499C
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[0]);} // 801949A0
  c->r[0]=R32(c->r[1]+0x00000294u); // 801949A4
  {uint32_t ea=c->r[1]+0x00000288u; WF64(ea,c->f[1]);} // 801949A8
  c->r[0]=c->r[0]^0x80000000u; // 801949AC
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 801949B0
  c->r[0]=R32(c->r[1]+0x0000028Cu); // 801949B4
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 801949B8
  W32(c->r[29]+c->r[8],c->r[0]); // 801949BC
  c->f[1]=c->f[0]-c->f[25]; // 801949C0
  c->f[0]=c->f[26]*c->f[1]; // 801949C4
  c->f[0]=c->f[2]-c->f[0]; // 801949C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801949CC
  {uint32_t ea=c->r[1]+0x00000298u; WF64(ea,c->f[0]);} // 801949D0
  c->r[0]=R32(c->r[1]+0x0000029Cu); // 801949D4
  W32(c->r[29]+c->r[7],c->r[0]); // 801949D8
  {uint32_t ea=c->r[3]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 801949DC
  c->r[8]=c->r[5]+0x00000005u; // 801949E0
  c->r[0]=c->r[5]+0x00000007u; // 801949E4
  c->r[7]=c->r[5]+0x00000006u; // 801949E8
  c->f[5]=c->f[1]+c->f[0]; // 801949EC
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801949F0
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801949F4
  {uint32_t ea=c->r[3]+0xFFFFFFD0u; c->f[2]=RF64(ea);} // 801949F8
  {uint32_t ea=c->r[3]+0xFFFFFFC8u; c->f[1]=RF64(ea);} // 801949FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80194A00
  c->f[3]=c->f[24]*c->f[5]; // 80194A04
  {uint32_t ea=c->r[3]+0xFFFFFFC0u; c->f[0]=RF64(ea); c->r[3]=ea;} // 80194A08
  c->r[5]=c->r[5]+0x00000008u; // 80194A0C
  c->r[6]=c->r[6]+0x00000020u; // 80194A10
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 80194A14
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80194A18
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[3]);} // 80194A1C
  c->r[7]=R32(c->r[1]+0x000002A4u); // 80194A20
  c->r[7]=c->r[7]^0x80000000u; // 80194A24
  W32(c->r[1]+0x00000244u,c->r[7]); // 80194A28
  {uint32_t ea=c->r[1]+0x00000240u; c->f[3]=RF64(ea);} // 80194A2C
  c->f[3]=c->f[3]-c->f[25]; // 80194A30
  c->f[4]=c->f[3]+c->f[2]; // 80194A34
  c->f[3]=c->f[26]*c->f[3]; // 80194A38
  c->f[2]=c->f[24]*c->f[4]; // 80194A3C
  c->f[3]=c->f[5]-c->f[3]; // 80194A40
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80194A44
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80194A48
  {uint32_t ea=c->r[1]+0x000002B0u; WF64(ea,c->f[2]);} // 80194A4C
  c->r[7]=R32(c->r[1]+0x000002B4u); // 80194A50
  {uint32_t ea=c->r[1]+0x000002A8u; WF64(ea,c->f[3]);} // 80194A54
  c->r[7]=c->r[7]^0x80000000u; // 80194A58
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 80194A5C
  c->r[7]=R32(c->r[1]+0x000002ACu); // 80194A60
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 80194A64
  W32(c->r[29]+c->r[9],c->r[7]); // 80194A68
  c->f[2]=c->f[2]-c->f[25]; // 80194A6C
  c->f[3]=c->f[2]+c->f[1]; // 80194A70
  c->f[2]=c->f[26]*c->f[2]; // 80194A74
  c->f[1]=c->f[24]*c->f[3]; // 80194A78
  c->f[2]=c->f[4]-c->f[2]; // 80194A7C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80194A80
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80194A84
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[1]);} // 80194A88
  c->r[7]=R32(c->r[1]+0x000002C4u); // 80194A8C
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[2]);} // 80194A90
  c->r[7]=c->r[7]^0x80000000u; // 80194A94
  W32(c->r[1]+0x00000244u,c->r[7]); // 80194A98
  c->r[7]=R32(c->r[1]+0x000002BCu); // 80194A9C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 80194AA0
  W32(c->r[29]+c->r[8],c->r[7]); // 80194AA4
  c->f[1]=c->f[1]-c->f[25]; // 80194AA8
  c->f[2]=c->f[26]*c->f[1]; // 80194AAC
  c->f[1]=c->f[1]+c->f[0]; // 80194AB0
  c->f[0]=c->f[3]-c->f[2]; // 80194AB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80194AB8
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 80194ABC
  c->r[7]=R32(c->r[1]+0x000002CCu); // 80194AC0
  W32(c->r[29]+c->r[0],c->r[7]); // 80194AC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194884; } // 80194AC8
L_80194ACC:;
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80194ACC
  c->r[5]=c->r[1]+0x00000010u; // 80194AD0
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80194AD4
  c->r[6]=c->r[1]+0x00000060u; // 80194AD8
  c->r[5]=c->r[5]+c->r[3]; // 80194ADC
  c->r[6]=c->r[6]+c->r[0]; // 80194AE0
  c->ctr=c->r[4]; // 80194AE4
  cmps(c,0,(int32_t)c->r[4],0); // 80194AE8
  if (!crb(c,1)) { goto L_80194B3C; } // 80194AEC
L_80194AF0:;
  c->f[2]=c->f[24]*c->f[1]; // 80194AF0
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->f[0]=RF64(ea); c->r[6]=ea;} // 80194AF4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80194AF8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80194AFC
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[2]);} // 80194B00
  c->r[0]=R32(c->r[1]+0x000002CCu); // 80194B04
  c->r[0]=c->r[0]^0x80000000u; // 80194B08
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 80194B0C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 80194B10
  c->f[3]=c->f[2]-c->f[25]; // 80194B14
  c->f[2]=c->f[26]*c->f[3]; // 80194B18
  c->f[2]=c->f[1]-c->f[2]; // 80194B1C
  c->f[1]=c->f[3]+c->f[0]; // 80194B20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80194B24
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 80194B28
  c->r[0]=R32(c->r[1]+0x000002C4u); // 80194B2C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80194B30
  c->r[5]=c->r[5]+0x00000004u; // 80194B34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194AF0; } // 80194B38
L_80194B3C:;
  c->r[3]=c->r[19]|c->r[19]; // 80194B3C
  c->lr=0x80194B44u; f_80196B34(c); // 80194B40
  c->f[23]=c->f[1]; // 80194B44
  c->f[1]=c->f[27]*c->f[1]; // 80194B48
  c->lr=0x80194B50u; f_80196344(c); // 80194B4C
  c->f[0]=c->f[28]*c->f[1]; // 80194B50
  cmps(c,0,(int32_t)c->r[19],0); // 80194B54
  c->r[18]=0u+0x00000000u; // 80194B58
  c->f[23]=c->f[23]-c->f[0]; // 80194B5C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[23],true)); // 80194B60
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 80194B64
  c->r[20]=R32(c->r[1]+0x000002CCu); // 80194B68
  c->r[0]=c->r[20]^0x80000000u; // 80194B6C
  W32(c->r[1]+0x00000244u,c->r[0]); // 80194B70
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 80194B74
  c->f[0]=c->f[0]-c->f[25]; // 80194B78
  c->f[23]=c->f[23]-c->f[0]; // 80194B7C
  if (!crb(c,1)) { goto L_80194BB0; } // 80194B80
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80194B84
  c->r[4]=c->r[29]+c->r[0]; // 80194B88
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 80194B8C
  c->r[5]=sraw(c,c->r[3],(c->r[28])&63); // 80194B90
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[5]<<((c->r[28])&31)); // 80194B94
  c->r[3]=c->r[3]-c->r[0]; // 80194B98
  c->r[0]=R32(c->r[1]+0x000002D0u); // 80194B9C
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 80194BA0
  c->r[20]=c->r[20]+c->r[5]; // 80194BA4
  c->r[18]=sraw(c,c->r[3],(c->r[0])&63); // 80194BA8
  goto L_80194BD8; // 80194BAC
L_80194BB0:;
  if (!crb(c,2)) { goto L_80194BC8; } // 80194BB0
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80194BB4
  c->r[3]=c->r[29]+c->r[0]; // 80194BB8
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 80194BBC
  c->r[18]=sraw(c,c->r[0],23); // 80194BC0
  goto L_80194BD8; // 80194BC4
L_80194BC8:;
  fcmp(c,0,c->f[23],c->f[29]); // 80194BC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80194BCC
  if (!crb(c,2)) { goto L_80194BD8; } // 80194BD0
  c->r[18]=0u+0x00000002u; // 80194BD4
L_80194BD8:;
  cmps(c,0,(int32_t)c->r[18],0); // 80194BD8
  if (!crb(c,1)) { goto L_80194C94; } // 80194BDC
  c->r[5]=c->r[1]+0x00000010u; // 80194BE0
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 80194BE4
  c->r[0]=0u+0x00000000u; // 80194BE8
  c->ctr=c->r[23]; // 80194BEC
  cmps(c,0,(int32_t)c->r[23],0); // 80194BF0
  c->r[20]=c->r[20]+0x00000001u; // 80194BF4
  if (!crb(c,1)) { goto L_80194C30; } // 80194BF8
L_80194BFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80194BFC
  c->r[3]=R32(c->r[5]+0x00000000u); // 80194C00
  if (!crb(c,2)) { goto L_80194C20; } // 80194C04
  cmps(c,0,(int32_t)c->r[3],0); // 80194C08
  if (crb(c,2)) { goto L_80194C28; } // 80194C0C
  c->r[0]=c->r[30]-c->r[3]; // 80194C10
  W32(c->r[5]+0x00000000u,c->r[0]); // 80194C14
  c->r[0]=0u+0x00000001u; // 80194C18
  goto L_80194C28; // 80194C1C
L_80194C20:;
  c->r[3]=c->r[4]-c->r[3]; // 80194C20
  W32(c->r[5]+0x00000000u,c->r[3]); // 80194C24
L_80194C28:;
  c->r[5]=c->r[5]+0x00000004u; // 80194C28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194BFC; } // 80194C2C
L_80194C30:;
  cmps(c,0,(int32_t)c->r[19],1); // 80194C30
  if (crb(c,2)) { goto L_80194C44; } // 80194C34
  cmps(c,0,(int32_t)c->r[19],2); // 80194C38
  if (crb(c,2)) { goto L_80194C5C; } // 80194C3C
  goto L_80194C70; // 80194C40
L_80194C44:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80194C44
  c->r[4]=c->r[29]+c->r[3]; // 80194C48
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 80194C4C
  c->r[3]=rotl(c->r[3],0)&0x007FFFFFu; // 80194C50
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 80194C54
  goto L_80194C70; // 80194C58
L_80194C5C:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80194C5C
  c->r[4]=c->r[29]+c->r[3]; // 80194C60
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 80194C64
  c->r[3]=rotl(c->r[3],0)&0x003FFFFFu; // 80194C68
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 80194C6C
L_80194C70:;
  cmps(c,0,(int32_t)c->r[18],2); // 80194C70
  if (!crb(c,2)) { goto L_80194C94; } // 80194C74
  cmps(c,0,(int32_t)c->r[0],0); // 80194C78
  c->f[23]=c->f[30]-c->f[23]; // 80194C7C
  if (crb(c,2)) { goto L_80194C94; } // 80194C80
  c->f[1]=c->f[30]; // 80194C84
  c->r[3]=c->r[19]|c->r[19]; // 80194C88
  c->lr=0x80194C90u; f_80196B34(c); // 80194C8C
  c->f[23]=c->f[23]-c->f[1]; // 80194C90
L_80194C94:;
  fcmp(c,0,c->f[31],c->f[23]); // 80194C94
  if (!crb(c,2)) { goto L_8019506C; } // 80194C98
  c->r[10]=c->r[23]+0xFFFFFFFFu; // 80194C9C
  c->r[9]=0u+0x00000000u; // 80194CA0
  cmps(c,1,(int32_t)c->r[10],(int32_t)c->r[21]); // 80194CA4
  if (crb(c,4)) { goto L_80194E2C; } // 80194CA8
  c->r[7]=c->r[10]-c->r[21]; // 80194CAC
  c->r[0]=c->r[21]+0x00000008u; // 80194CB0
  c->r[8]=c->r[7]+0x00000001u; // 80194CB4
  cmps(c,0,(int32_t)c->r[8],8); // 80194CB8
  if (!crb(c,1)) { goto L_80194DF8; } // 80194CBC
  c->r[3]=0u+0x00000000u; // 80194CC0
  c->r[4]=0u+0x00000000u; // 80194CC4
  c->r[5]=0u+0x00000000u; // 80194CC8
  c->r[6]=0u+0x00000000u; // 80194CCC
  c->r[12]=0u+0x00000000u; // 80194CD0
  if (crb(c,4)) { goto L_80194CE8; } // 80194CD4
  c->r[11]=c->r[31]+0x00000001u; // 80194CD8
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[11]); // 80194CDC
  if (crb(c,0)) { goto L_80194CE8; } // 80194CE0
  c->r[12]=0u+0x00000001u; // 80194CE4
L_80194CE8:;
  cmps(c,0,(int32_t)c->r[12],0); // 80194CE8
  if (crb(c,2)) { goto L_80194D04; } // 80194CEC
  c->r[12]=c->r[23]+0xFFFFFFFFu; // 80194CF0
  c->r[11]=c->r[31]+0x00000001u; // 80194CF4
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 80194CF8
  if (crb(c,0)) { goto L_80194D04; } // 80194CFC
  c->r[6]=0u+0x00000001u; // 80194D00
L_80194D04:;
  cmps(c,0,(int32_t)c->r[6],0); // 80194D04
  if (crb(c,2)) { goto L_80194D1C; } // 80194D08
  c->r[6]=c->r[21]+0x80000000u; // 80194D0C
  cmpu(c,0,c->r[6],0x00000000u); // 80194D10
  if (crb(c,2)) { goto L_80194D1C; } // 80194D14
  c->r[5]=0u+0x00000001u; // 80194D18
L_80194D1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80194D1C
  if (crb(c,2)) { goto L_80194D54; } // 80194D20
  c->r[5]=c->r[23]+0xFFFFFFFFu; // 80194D24
  c->r[6]=0u+0x00000001u; // 80194D28
  c->r[11]=rotl(c->r[5],0)&0x80000000u; // 80194D2C
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[14]); // 80194D30
  if (!crb(c,2)) { goto L_80194D48; } // 80194D34
  c->r[5]=rotl(c->r[7],0)&0x80000000u; // 80194D38
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[5]); // 80194D3C
  if (crb(c,2)) { goto L_80194D48; } // 80194D40
  c->r[6]=0u+0x00000000u; // 80194D44
L_80194D48:;
  cmps(c,0,(int32_t)c->r[6],0); // 80194D48
  if (crb(c,2)) { goto L_80194D54; } // 80194D4C
  c->r[4]=0u+0x00000001u; // 80194D50
L_80194D54:;
  cmps(c,0,(int32_t)c->r[4],0); // 80194D54
  if (crb(c,2)) { goto L_80194D80; } // 80194D58
  c->r[4]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[4]); // 80194D5C
  c->r[5]=0u+0x00000001u; // 80194D60
  if (!crb(c,2)) { goto L_80194D74; } // 80194D64
  c->r[4]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[4]); // 80194D68
  if (crb(c,2)) { goto L_80194D74; } // 80194D6C
  c->r[5]=0u+0x00000000u; // 80194D70
L_80194D74:;
  cmps(c,0,(int32_t)c->r[5],0); // 80194D74
  if (crb(c,2)) { goto L_80194D80; } // 80194D78
  c->r[3]=0u+0x00000001u; // 80194D7C
L_80194D80:;
  cmps(c,0,(int32_t)c->r[3],0); // 80194D80
  if (crb(c,2)) { goto L_80194DF8; } // 80194D84
  c->r[4]=c->r[10]+0x00000008u; // 80194D88
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80194D8C
  c->r[4]=c->r[4]-c->r[0]; // 80194D90
  c->r[3]=c->r[1]+0x00000010u; // 80194D94
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 80194D98
  c->r[3]=c->r[3]+c->r[5]; // 80194D9C
  c->ctr=c->r[4]; // 80194DA0
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 80194DA4
  if (crb(c,0)) { goto L_80194DF8; } // 80194DA8
L_80194DAC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80194DAC
  c->r[10]=c->r[10]+0xFFFFFFF8u; // 80194DB0
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 80194DB4
  c->r[9]=c->r[9]|c->r[4]; // 80194DB8
  c->r[4]=R32(c->r[3]+0xFFFFFFF8u); // 80194DBC
  c->r[9]=c->r[9]|c->r[0]; // 80194DC0
  c->r[0]=R32(c->r[3]+0xFFFFFFF4u); // 80194DC4
  c->r[9]=c->r[9]|c->r[4]; // 80194DC8
  c->r[4]=R32(c->r[3]+0xFFFFFFF0u); // 80194DCC
  c->r[9]=c->r[9]|c->r[0]; // 80194DD0
  c->r[0]=R32(c->r[3]+0xFFFFFFECu); // 80194DD4
  c->r[9]=c->r[9]|c->r[4]; // 80194DD8
  c->r[4]=R32(c->r[3]+0xFFFFFFE8u); // 80194DDC
  c->r[9]=c->r[9]|c->r[0]; // 80194DE0
  c->r[0]=R32(c->r[3]+0xFFFFFFE4u); // 80194DE4
  c->r[9]=c->r[9]|c->r[4]; // 80194DE8
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 80194DEC
  c->r[9]=c->r[9]|c->r[0]; // 80194DF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194DAC; } // 80194DF4
L_80194DF8:;
  c->r[0]=c->r[10]+0x00000001u; // 80194DF8
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80194DFC
  c->r[4]=c->r[1]+0x00000010u; // 80194E00
  c->r[0]=c->r[0]-c->r[21]; // 80194E04
  c->r[4]=c->r[4]+c->r[3]; // 80194E08
  c->ctr=c->r[0]; // 80194E0C
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[21]); // 80194E10
  if (crb(c,0)) { goto L_80194E2C; } // 80194E14
L_80194E18:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80194E18
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 80194E1C
  c->r[10]=c->r[10]+0xFFFFFFFFu; // 80194E20
  c->r[9]=c->r[9]|c->r[0]; // 80194E24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194E18; } // 80194E28
L_80194E2C:;
  cmps(c,0,(int32_t)c->r[9],0); // 80194E2C
  if (!crb(c,2)) { goto L_8019506C; } // 80194E30
  c->r[18]=0u+0x00000001u; // 80194E34
  goto L_80194E40; // 80194E38
L_80194E3C:;
  c->r[18]=c->r[18]+0x00000001u; // 80194E3C
L_80194E40:;
  c->r[0]=c->r[21]-c->r[18]; // 80194E40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80194E44
  c->r[0]=R32(c->r[29]+c->r[0]); // 80194E48
  cmps(c,0,(int32_t)c->r[0],0); // 80194E4C
  if (crb(c,2)) { IRQCHK(c); goto L_80194E3C; } // 80194E50
  c->r[12]=c->r[23]+0x00000001u; // 80194E54
  c->r[7]=c->r[1]+0x00000060u; // 80194E58
  c->r[3]=rotl(c->r[12],3)&0xFFFFFFF8u; // 80194E5C
  c->r[8]=c->r[23]+c->r[18]; // 80194E60
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 80194E64
  c->r[5]=c->r[27]+c->r[0]; // 80194E68
  c->r[6]=c->r[26]+c->r[3]; // 80194E6C
  c->r[7]=c->r[7]+c->r[3]; // 80194E70
  goto L_8019505C; // 80194E74
L_80194E78:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80194E78
  cmps(c,1,(int32_t)c->r[22],0); // 80194E7C
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[0]=RF64(ea);} // 80194E80
  c->r[11]=0u+0x00000000u; // 80194E84
  c->r[0]=c->r[0]^0x80000000u; // 80194E88
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 80194E8C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 80194E90
  c->f[1]=c->f[1]-c->f[25]; // 80194E94
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[1]);} // 80194E98
  if (crb(c,4)) { goto L_80195048; } // 80194E9C
  c->r[0]=c->r[22]+0x00000001u; // 80194EA0
  c->r[3]=c->r[22]+0xFFFFFFF8u; // 80194EA4
  cmps(c,0,(int32_t)c->r[0],8); // 80194EA8
  if (!crb(c,1)) { goto L_80195004; } // 80194EAC
  c->r[4]=0u+0x00000000u; // 80194EB0
  c->r[9]=0u+0x00000000u; // 80194EB4
  if (crb(c,4)) { goto L_80194ECC; } // 80194EB8
  c->r[0]=c->r[31]+0xFFFFFFFEu; // 80194EBC
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 80194EC0
  if (crb(c,1)) { goto L_80194ECC; } // 80194EC4
  c->r[9]=0u+0x00000001u; // 80194EC8
L_80194ECC:;
  cmps(c,0,(int32_t)c->r[9],0); // 80194ECC
  if (crb(c,2)) { goto L_80194EF8; } // 80194ED0
  cmps(c,0,(int32_t)c->r[25],0); // 80194ED4
  c->r[0]=0u+0x00000001u; // 80194ED8
  if (!crb(c,2)) { goto L_80194EEC; } // 80194EDC
  cmps(c,0,(int32_t)c->r[24],0); // 80194EE0
  if (crb(c,2)) { goto L_80194EEC; } // 80194EE4
  c->r[0]=0u+0x00000000u; // 80194EE8
L_80194EEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80194EEC
  if (crb(c,2)) { goto L_80194EF8; } // 80194EF0
  c->r[4]=0u+0x00000001u; // 80194EF4
L_80194EF8:;
  cmps(c,0,(int32_t)c->r[4],0); // 80194EF8
  if (crb(c,2)) { goto L_80195004; } // 80194EFC
  c->r[0]=c->r[3]+0x00000008u; // 80194F00
  c->r[9]=c->r[16]|c->r[16]; // 80194F04
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80194F08
  c->r[10]=c->r[22]+c->r[12]; // 80194F0C
  c->ctr=c->r[0]; // 80194F10
  cmps(c,0,(int32_t)c->r[3],0); // 80194F14
  if (crb(c,0)) { goto L_80195004; } // 80194F18
L_80194F1C:;
  c->r[0]=c->r[10]-c->r[11]; // 80194F1C
  c->r[4]=c->r[11]+0x00000001u; // 80194F20
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80194F24
  c->r[3]=c->r[11]+0x00000002u; // 80194F28
  {uint32_t ea=c->r[9]+0x00000000u; c->f[2]=RF64(ea);} // 80194F2C
  c->r[3]=c->r[10]-c->r[3]; // 80194F30
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 80194F34
  c->r[4]=c->r[10]-c->r[4]; // 80194F38
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80194F3C
  c->r[20]=c->r[11]+0x00000007u; // 80194F40
  c->f[3]=c->f[2]*c->f[1]; // 80194F44
  {uint32_t ea=c->r[9]+0x00000008u; c->f[2]=RF64(ea);} // 80194F48
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 80194F4C
  c->r[4]=c->r[11]+0x00000003u; // 80194F50
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80194F54
  c->r[20]=c->r[10]-c->r[20]; // 80194F58
  c->f[4]=c->f[2]*c->f[1]; // 80194F5C
  c->r[0]=c->r[10]-c->r[4]; // 80194F60
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 80194F64
  c->r[4]=c->r[11]+0x00000004u; // 80194F68
  c->f[0]=c->f[0]+c->f[3]; // 80194F6C
  {uint32_t ea=c->r[9]+0x00000010u; c->f[2]=RF64(ea);} // 80194F70
  c->f[3]=c->f[2]*c->f[1]; // 80194F74
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80194F78
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 80194F7C
  c->r[4]=c->r[10]-c->r[4]; // 80194F80
  c->f[0]=c->f[0]+c->f[4]; // 80194F84
  {uint32_t ea=c->r[9]+0x00000018u; c->f[2]=RF64(ea);} // 80194F88
  c->r[3]=c->r[11]+0x00000005u; // 80194F8C
  c->r[0]=c->r[11]+0x00000006u; // 80194F90
  c->f[0]=c->f[0]+c->f[3]; // 80194F94
  c->r[3]=c->r[10]-c->r[3]; // 80194F98
  c->f[2]=c->f[2]*c->f[1]; // 80194F9C
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80194FA0
  c->r[0]=c->r[10]-c->r[0]; // 80194FA4
  {uint32_t ea=c->r[9]+0x00000020u; c->f[3]=RF64(ea);} // 80194FA8
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 80194FAC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80194FB0
  c->f[6]=c->f[3]*c->f[1]; // 80194FB4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80194FB8
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 80194FBC
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFF8u; // 80194FC0
  c->f[0]=c->f[0]+c->f[2]; // 80194FC4
  {uint32_t ea=c->r[9]+0x00000028u; c->f[2]=RF64(ea);} // 80194FC8
  c->f[5]=c->f[2]*c->f[1]; // 80194FCC
  {uint32_t ea=c->r[9]+0x00000030u; c->f[4]=RF64(ea);} // 80194FD0
  {uint32_t ea=c->r[15]+c->r[0]; c->f[3]=RF64(ea);} // 80194FD4
  c->r[11]=c->r[11]+0x00000008u; // 80194FD8
  c->f[0]=c->f[0]+c->f[6]; // 80194FDC
  {uint32_t ea=c->r[9]+0x00000038u; c->f[2]=RF64(ea);} // 80194FE0
  {uint32_t ea=c->r[15]+c->r[20]; c->f[1]=RF64(ea);} // 80194FE4
  c->f[3]=c->f[4]*c->f[3]; // 80194FE8
  c->r[9]=c->r[9]+0x00000040u; // 80194FEC
  c->f[0]=c->f[0]+c->f[5]; // 80194FF0
  c->f[1]=c->f[2]*c->f[1]; // 80194FF4
  c->f[0]=c->f[0]+c->f[3]; // 80194FF8
  c->f[0]=c->f[0]+c->f[1]; // 80194FFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80194F1C; } // 80195000
L_80195004:;
  c->r[4]=c->r[22]+0x00000001u; // 80195004
  c->r[3]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80195008
  c->r[4]=c->r[4]-c->r[11]; // 8019500C
  c->r[0]=c->r[22]+c->r[12]; // 80195010
  c->r[3]=c->r[16]+c->r[3]; // 80195014
  c->ctr=c->r[4]; // 80195018
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[22]); // 8019501C
  if (crb(c,1)) { goto L_80195048; } // 80195020
L_80195024:;
  c->r[4]=c->r[0]-c->r[11]; // 80195024
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=RF64(ea);} // 80195028
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8019502C
  c->r[3]=c->r[3]+0x00000008u; // 80195030
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 80195034
  c->r[11]=c->r[11]+0x00000001u; // 80195038
  c->f[1]=c->f[2]*c->f[1]; // 8019503C
  c->f[0]=c->f[0]+c->f[1]; // 80195040
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195024; } // 80195044
L_80195048:;
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[0]);} // 80195048
  c->r[5]=c->r[5]+0x00000004u; // 8019504C
  c->r[6]=c->r[6]+0x00000008u; // 80195050
  c->r[7]=c->r[7]+0x00000008u; // 80195054
  c->r[12]=c->r[12]+0x00000001u; // 80195058
L_8019505C:;
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[8]); // 8019505C
  if (!crb(c,1)) { IRQCHK(c); goto L_80194E78; } // 80195060
  c->r[23]=c->r[23]+c->r[18]; // 80195064
  IRQCHK(c); goto L_80194824; // 80195068
L_8019506C:;
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[0]=RF64(ea);} // 8019506C
  fcmp(c,0,c->f[0],c->f[23]); // 80195070
  if (!crb(c,2)) { goto L_801950AC; } // 80195074
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 80195078
  c->r[3]=c->r[1]+0x00000010u; // 8019507C
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80195080
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 80195084
  c->r[3]=c->r[3]+c->r[0]; // 80195088
  goto L_8019509C; // 8019508C
L_80195090:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 80195090
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 80195094
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 80195098
L_8019509C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8019509C
  cmps(c,0,(int32_t)c->r[0],0); // 801950A0
  if (crb(c,2)) { IRQCHK(c); goto L_80195090; } // 801950A4
  goto L_80195148; // 801950A8
L_801950AC:;
  c->f[1]=c->f[23]; // 801950AC
  c->r[3]=0u-c->r[19]; // 801950B0
  c->lr=0x801950B8u; f_80196B34(c); // 801950B4
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[3]=RF64(ea);} // 801950B8
  fcmp(c,0,c->f[1],c->f[3]); // 801950BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801950C0
  if (!crb(c,2)) { goto L_80195130; } // 801950C4
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[0]=RF64(ea);} // 801950C8
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801950CC
  c->r[23]=c->r[23]+0x00000001u; // 801950D0
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[2]=RF64(ea);} // 801950D4
  c->f[0]=c->f[0]*c->f[1]; // 801950D8
  c->r[4]=c->r[1]+0x00000010u; // 801950DC
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801950E0
  c->r[19]=c->r[19]+0x00000018u; // 801950E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801950E8
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 801950EC
  c->r[3]=R32(c->r[1]+0x000002CCu); // 801950F0
  c->r[3]=c->r[3]^0x80000000u; // 801950F4
  W32(c->r[1]+0x00000244u,c->r[3]); // 801950F8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 801950FC
  c->f[0]=c->f[0]-c->f[2]; // 80195100
  c->f[2]=c->f[3]*c->f[0]; // 80195104
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80195108
  c->f[1]=c->f[1]-c->f[2]; // 8019510C
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[0]);} // 80195110
  c->r[3]=R32(c->r[1]+0x000002BCu); // 80195114
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80195118
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 8019511C
  c->r[6]=R32(c->r[1]+0x000002C4u); // 80195120
  W32(c->r[4]+c->r[5],c->r[6]); // 80195124
  W32(c->r[4]+c->r[0],c->r[3]); // 80195128
  goto L_80195148; // 8019512C
L_80195130:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80195130
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80195134
  c->r[3]=c->r[1]+0x00000010u; // 80195138
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 8019513C
  c->r[4]=R32(c->r[1]+0x000002CCu); // 80195140
  W32(c->r[3]+c->r[0],c->r[4]); // 80195144
L_80195148:;
  {uint32_t ea=c->r[2]+0xFFFF93A0u; c->f[1]=RF64(ea);} // 80195148
  c->r[3]=c->r[19]|c->r[19]; // 8019514C
  c->lr=0x80195154u; f_80196B34(c); // 80195150
  cmps(c,0,(int32_t)c->r[23],0); // 80195154
  c->r[3]=c->r[23]|c->r[23]; // 80195158
  if (crb(c,0)) { goto L_80195354; } // 8019515C
  c->r[0]=c->r[23]+0x00000001u; // 80195160
  cmps(c,0,(int32_t)c->r[0],8); // 80195164
  if (!crb(c,1)) { goto L_801952F8; } // 80195168
  cmps(c,0,(int32_t)c->r[23],-1); // 8019516C
  c->r[4]=0u+0x00000000u; // 80195170
  c->r[0]=0u+0x00000000u; // 80195174
  if (!crb(c,1)) { goto L_80195180; } // 80195178
  c->r[0]=0u+0x00000001u; // 8019517C
L_80195180:;
  cmps(c,0,(int32_t)c->r[0],0); // 80195180
  if (crb(c,2)) { goto L_801951B0; } // 80195184
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 80195188
  c->r[5]=0u+0x00000001u; // 8019518C
  if (!crb(c,2)) { goto L_801951A4; } // 80195190
  c->r[0]=c->r[23]+0x00000001u; // 80195194
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80195198
  if (crb(c,2)) { goto L_801951A4; } // 8019519C
  c->r[5]=0u+0x00000000u; // 801951A0
L_801951A4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801951A4
  if (crb(c,2)) { goto L_801951B0; } // 801951A8
  c->r[4]=0u+0x00000001u; // 801951AC
L_801951B0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801951B0
  if (crb(c,2)) { goto L_801952F8; } // 801951B4
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801951B8
  c->r[6]=c->r[1]+0x00000010u; // 801951BC
  c->r[4]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801951C0
  c->r[7]=c->r[1]+0x00000060u; // 801951C4
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 801951C8
  c->r[6]=c->r[6]+c->r[5]; // 801951CC
  c->r[7]=c->r[7]+c->r[4]; // 801951D0
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[9]=RF64(ea);} // 801951D4
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[8]=RF64(ea);} // 801951D8
  c->ctr=c->r[0]; // 801951DC
  cmps(c,0,(int32_t)c->r[23],8); // 801951E0
  if (crb(c,0)) { goto L_801952F8; } // 801951E4
L_801951E8:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 801951E8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801951EC
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 801951F0
  c->r[4]=c->r[4]^0x80000000u; // 801951F4
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 801951F8
  c->r[4]=c->r[0]^0x80000000u; // 801951FC
  c->r[0]=R32(c->r[6]+0xFFFFFFF8u); // 80195200
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 80195204
  W32(c->r[1]+0x00000244u,c->r[4]); // 80195208
  c->r[4]=c->r[0]^0x80000000u; // 8019520C
  c->f[0]=c->f[0]-c->f[9]; // 80195210
  c->r[0]=R32(c->r[6]+0xFFFFFFF4u); // 80195214
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 80195218
  c->r[0]=c->r[0]^0x80000000u; // 8019521C
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 80195220
  c->f[5]=c->f[1]*c->f[0]; // 80195224
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 80195228
  c->f[1]=c->f[1]*c->f[8]; // 8019522C
  W32(c->r[1]+0x00000244u,c->r[0]); // 80195230
  c->r[0]=R32(c->r[6]+0xFFFFFFF0u); // 80195234
  c->f[3]=c->f[2]-c->f[9]; // 80195238
  c->f[4]=c->f[0]-c->f[9]; // 8019523C
  c->r[0]=c->r[0]^0x80000000u; // 80195240
  c->f[7]=c->f[1]*c->f[3]; // 80195244
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 80195248
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 8019524C
  c->f[1]=c->f[1]*c->f[8]; // 80195250
  c->r[0]=R32(c->r[6]+0xFFFFFFECu); // 80195254
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[5]);} // 80195258
  c->f[3]=c->f[2]-c->f[9]; // 8019525C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 80195260
  c->f[6]=c->f[1]*c->f[4]; // 80195264
  c->r[0]=c->r[0]^0x80000000u; // 80195268
  W32(c->r[1]+0x00000244u,c->r[0]); // 8019526C
  c->f[1]=c->f[1]*c->f[8]; // 80195270
  c->r[0]=R32(c->r[6]+0xFFFFFFE8u); // 80195274
  c->f[4]=c->f[0]-c->f[9]; // 80195278
  c->r[4]=c->r[0]^0x80000000u; // 8019527C
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 80195280
  c->r[0]=R32(c->r[6]+0xFFFFFFE4u); // 80195284
  c->f[5]=c->f[1]*c->f[3]; // 80195288
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 8019528C
  {uint32_t ea=c->r[7]+0xFFFFFFF8u; WF64(ea,c->f[7]);} // 80195290
  c->r[0]=c->r[0]^0x80000000u; // 80195294
  c->f[1]=c->f[1]*c->f[8]; // 80195298
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 8019529C
  c->f[3]=c->f[2]-c->f[9]; // 801952A0
  {uint32_t ea=c->r[7]+0xFFFFFFF0u; WF64(ea,c->f[6]);} // 801952A4
  c->f[4]=c->f[1]*c->f[4]; // 801952A8
  c->r[6]=c->r[6]+0xFFFFFFE0u; // 801952AC
  {uint32_t ea=c->r[7]+0xFFFFFFE8u; WF64(ea,c->f[5]);} // 801952B0
  c->f[1]=c->f[1]*c->f[8]; // 801952B4
  W32(c->r[1]+0x00000244u,c->r[0]); // 801952B8
  c->f[2]=c->f[0]-c->f[9]; // 801952BC
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 801952C0
  c->f[3]=c->f[1]*c->f[3]; // 801952C4
  {uint32_t ea=c->r[7]+0xFFFFFFE0u; WF64(ea,c->f[4]);} // 801952C8
  c->f[1]=c->f[1]*c->f[8]; // 801952CC
  {uint32_t ea=c->r[7]+0xFFFFFFD8u; WF64(ea,c->f[3]);} // 801952D0
  c->f[0]=c->f[0]-c->f[9]; // 801952D4
  c->f[2]=c->f[1]*c->f[2]; // 801952D8
  c->f[1]=c->f[1]*c->f[8]; // 801952DC
  {uint32_t ea=c->r[7]+0xFFFFFFD0u; WF64(ea,c->f[2]);} // 801952E0
  c->f[0]=c->f[1]*c->f[0]; // 801952E4
  c->f[1]=c->f[1]*c->f[8]; // 801952E8
  {uint32_t ea=c->r[7]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 801952EC
  c->r[7]=c->r[7]+0xFFFFFFC0u; // 801952F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801951E8; } // 801952F4
L_801952F8:;
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801952F8
  c->r[6]=c->r[1]+0x00000010u; // 801952FC
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80195300
  c->r[7]=c->r[1]+0x00000060u; // 80195304
  c->r[0]=c->r[3]+0x00000001u; // 80195308
  c->r[6]=c->r[6]+c->r[5]; // 8019530C
  c->r[7]=c->r[7]+c->r[4]; // 80195310
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[3]=RF64(ea);} // 80195314
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[0]=RF64(ea);} // 80195318
  c->ctr=c->r[0]; // 8019531C
  cmps(c,0,(int32_t)c->r[3],0); // 80195320
  if (crb(c,0)) { goto L_80195354; } // 80195324
L_80195328:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80195328
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 8019532C
  c->r[0]=c->r[0]^0x80000000u; // 80195330
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 80195334
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 80195338
  c->f[2]=c->f[2]-c->f[3]; // 8019533C
  c->f[2]=c->f[1]*c->f[2]; // 80195340
  c->f[1]=c->f[1]*c->f[0]; // 80195344
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[2]);} // 80195348
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 8019534C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195328; } // 80195350
L_80195354:;
  c->r[0]=c->r[23]+0x00000001u; // 80195354
  c->r[8]=c->r[23]|c->r[23]; // 80195358
  c->r[4]=c->r[1]+0x00000100u; // 8019535C
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 80195360
  c->r[5]=0u+0x802E0000u; // 80195364
  c->ctr=c->r[0]; // 80195368
  cmps(c,0,(int32_t)c->r[23],0); // 8019536C
  if (crb(c,0)) { goto L_801953D0; } // 80195370
L_80195374:;
  c->r[6]=c->r[1]+0x00000060u; // 80195374
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[2]=RF64(ea);} // 80195378
  c->r[6]=c->r[6]+c->r[3]; // 8019537C
  c->r[7]=c->r[5]+0x00000BB0u; // 80195380
  c->r[0]=c->r[23]-c->r[8]; // 80195384
  c->r[9]=0u+0x00000000u; // 80195388
  goto L_801953AC; // 8019538C
L_80195390:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=RF64(ea);} // 80195390
  c->r[7]=c->r[7]+0x00000008u; // 80195394
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=RF64(ea);} // 80195398
  c->r[6]=c->r[6]+0x00000008u; // 8019539C
  c->r[9]=c->r[9]+0x00000001u; // 801953A0
  c->f[0]=c->f[1]*c->f[0]; // 801953A4
  c->f[2]=c->f[2]+c->f[0]; // 801953A8
L_801953AC:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 801953AC
  if (crb(c,1)) { goto L_801953BC; } // 801953B0
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801953B4
  if (!crb(c,1)) { IRQCHK(c); goto L_80195390; } // 801953B8
L_801953BC:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801953BC
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801953C0
  {uint32_t ea=c->r[4]+c->r[0]; WF64(ea,c->f[2]);} // 801953C4
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 801953C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195374; } // 801953CC
L_801953D0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801953D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801953D4
  cmpu(c,0,c->r[0],0x00000001u); // 801953D8
  if (!crb(c,1)) { goto L_80195504; } // 801953DC
  c->r[0]=c->r[3]|c->r[3]; cr0(c,c->r[0]); // 801953E0
  if (crb(c,2)) { goto L_801953F4; } // 801953E4
  cmps(c,0,(int32_t)c->r[0],3); // 801953E8
  if (crb(c,2)) { goto L_8019577C; } // 801953EC
  goto L_80195BA4; // 801953F0
L_801953F4:;
  cmps(c,0,(int32_t)c->r[23],0); // 801953F4
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[6]=RF64(ea);} // 801953F8
  if (crb(c,0)) { goto L_801954EC; } // 801953FC
  c->r[0]=c->r[23]+0x00000001u; // 80195400
  cmps(c,0,(int32_t)c->r[0],8); // 80195404
  if (!crb(c,1)) { goto L_801954C0; } // 80195408
  cmps(c,0,(int32_t)c->r[23],-1); // 8019540C
  c->r[3]=0u+0x00000000u; // 80195410
  c->r[0]=0u+0x00000000u; // 80195414
  if (!crb(c,1)) { goto L_80195420; } // 80195418
  c->r[0]=0u+0x00000001u; // 8019541C
L_80195420:;
  cmps(c,0,(int32_t)c->r[0],0); // 80195420
  if (crb(c,2)) { goto L_80195450; } // 80195424
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 80195428
  c->r[4]=0u+0x00000001u; // 8019542C
  if (!crb(c,2)) { goto L_80195444; } // 80195430
  c->r[0]=c->r[23]+0x00000001u; // 80195434
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80195438
  if (crb(c,2)) { goto L_80195444; } // 8019543C
  c->r[4]=0u+0x00000000u; // 80195440
L_80195444:;
  cmps(c,0,(int32_t)c->r[4],0); // 80195444
  if (crb(c,2)) { goto L_80195450; } // 80195448
  c->r[3]=0u+0x00000001u; // 8019544C
L_80195450:;
  cmps(c,0,(int32_t)c->r[3],0); // 80195450
  if (crb(c,2)) { goto L_801954C0; } // 80195454
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 80195458
  c->r[4]=c->r[1]+0x00000100u; // 8019545C
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 80195460
  c->r[4]=c->r[4]+c->r[3]; // 80195464
  c->ctr=c->r[0]; // 80195468
  cmps(c,0,(int32_t)c->r[23],8); // 8019546C
  if (crb(c,0)) { goto L_801954C0; } // 80195470
L_80195474:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 80195474
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 80195478
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 8019547C
  c->f[6]=c->f[6]+c->f[1]; // 80195480
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 80195484
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 80195488
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 8019548C
  c->f[6]=c->f[6]+c->f[0]; // 80195490
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 80195494
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 80195498
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 8019549C
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801954A0
  c->f[6]=c->f[6]+c->f[5]; // 801954A4
  c->f[6]=c->f[6]+c->f[4]; // 801954A8
  c->f[6]=c->f[6]+c->f[3]; // 801954AC
  c->f[6]=c->f[6]+c->f[2]; // 801954B0
  c->f[6]=c->f[6]+c->f[1]; // 801954B4
  c->f[6]=c->f[6]+c->f[0]; // 801954B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195474; } // 801954BC
L_801954C0:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801954C0
  c->r[4]=c->r[1]+0x00000100u; // 801954C4
  c->r[0]=c->r[23]+0x00000001u; // 801954C8
  c->r[4]=c->r[4]+c->r[3]; // 801954CC
  c->ctr=c->r[0]; // 801954D0
  cmps(c,0,(int32_t)c->r[23],0); // 801954D4
  if (crb(c,0)) { goto L_801954EC; } // 801954D8
L_801954DC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801954DC
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 801954E0
  c->f[6]=c->f[6]+c->f[0]; // 801954E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801954DC; } // 801954E8
L_801954EC:;
  cmps(c,0,(int32_t)c->r[18],0); // 801954EC
  if (!crb(c,2)) { goto L_801954F8; } // 801954F0
  goto L_801954FC; // 801954F4
L_801954F8:;
  c->f[6]=-c->f[6]; // 801954F8
L_801954FC:;
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[6]);} // 801954FC
  goto L_80195BA4; // 80195500
L_80195504:;
  cmps(c,0,(int32_t)c->r[23],0); // 80195504
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[6]=RF64(ea);} // 80195508
  c->r[5]=c->r[23]|c->r[23]; // 8019550C
  if (crb(c,0)) { goto L_80195600; } // 80195510
  c->r[0]=c->r[23]+0x00000001u; // 80195514
  cmps(c,0,(int32_t)c->r[0],8); // 80195518
  if (!crb(c,1)) { goto L_801955D4; } // 8019551C
  cmps(c,0,(int32_t)c->r[23],-1); // 80195520
  c->r[3]=0u+0x00000000u; // 80195524
  c->r[0]=0u+0x00000000u; // 80195528
  if (!crb(c,1)) { goto L_80195534; } // 8019552C
  c->r[0]=0u+0x00000001u; // 80195530
L_80195534:;
  cmps(c,0,(int32_t)c->r[0],0); // 80195534
  if (crb(c,2)) { goto L_80195564; } // 80195538
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 8019553C
  c->r[4]=0u+0x00000001u; // 80195540
  if (!crb(c,2)) { goto L_80195558; } // 80195544
  c->r[0]=c->r[23]+0x00000001u; // 80195548
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8019554C
  if (crb(c,2)) { goto L_80195558; } // 80195550
  c->r[4]=0u+0x00000000u; // 80195554
L_80195558:;
  cmps(c,0,(int32_t)c->r[4],0); // 80195558
  if (crb(c,2)) { goto L_80195564; } // 8019555C
  c->r[3]=0u+0x00000001u; // 80195560
L_80195564:;
  cmps(c,0,(int32_t)c->r[3],0); // 80195564
  if (crb(c,2)) { goto L_801955D4; } // 80195568
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 8019556C
  c->r[4]=c->r[1]+0x00000100u; // 80195570
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 80195574
  c->r[4]=c->r[4]+c->r[3]; // 80195578
  c->ctr=c->r[0]; // 8019557C
  cmps(c,0,(int32_t)c->r[23],8); // 80195580
  if (crb(c,0)) { goto L_801955D4; } // 80195584
L_80195588:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 80195588
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 8019558C
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 80195590
  c->f[6]=c->f[6]+c->f[1]; // 80195594
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 80195598
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 8019559C
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 801955A0
  c->f[6]=c->f[6]+c->f[0]; // 801955A4
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 801955A8
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 801955AC
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 801955B0
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801955B4
  c->f[6]=c->f[6]+c->f[5]; // 801955B8
  c->f[6]=c->f[6]+c->f[4]; // 801955BC
  c->f[6]=c->f[6]+c->f[3]; // 801955C0
  c->f[6]=c->f[6]+c->f[2]; // 801955C4
  c->f[6]=c->f[6]+c->f[1]; // 801955C8
  c->f[6]=c->f[6]+c->f[0]; // 801955CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195588; } // 801955D0
L_801955D4:;
  c->r[3]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801955D4
  c->r[4]=c->r[1]+0x00000100u; // 801955D8
  c->r[0]=c->r[5]+0x00000001u; // 801955DC
  c->r[4]=c->r[4]+c->r[3]; // 801955E0
  c->ctr=c->r[0]; // 801955E4
  cmps(c,0,(int32_t)c->r[5],0); // 801955E8
  if (crb(c,0)) { goto L_80195600; } // 801955EC
L_801955F0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801955F0
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 801955F4
  c->f[6]=c->f[6]+c->f[0]; // 801955F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801955F0; } // 801955FC
L_80195600:;
  cmps(c,0,(int32_t)c->r[18],0); // 80195600
  if (!crb(c,2)) { goto L_80195610; } // 80195604
  c->f[1]=c->f[6]; // 80195608
  goto L_80195614; // 8019560C
L_80195610:;
  c->f[1]=-c->f[6]; // 80195610
L_80195614:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 80195614
  cmps(c,1,(int32_t)c->r[23],1); // 80195618
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 8019561C
  c->r[8]=0u+0x00000001u; // 80195620
  c->f[6]=c->f[0]-c->f[6]; // 80195624
  if (crb(c,4)) { goto L_80195764; } // 80195628
  cmps(c,0,(int32_t)c->r[23],8); // 8019562C
  c->r[4]=c->r[23]+0xFFFFFFF8u; // 80195630
  if (!crb(c,1)) { goto L_80195734; } // 80195634
  c->r[5]=0u+0x00000000u; // 80195638
  c->r[6]=0u+0x00000000u; // 8019563C
  c->r[7]=0u+0x00000000u; // 80195640
  if (crb(c,4)) { goto L_8019565C; } // 80195644
  c->r[3]=0u+0x80000000u; // 80195648
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8019564C
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80195650
  if (crb(c,1)) { goto L_8019565C; } // 80195654
  c->r[7]=0u+0x00000001u; // 80195658
L_8019565C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8019565C
  if (crb(c,2)) { goto L_80195698; } // 80195660
  c->r[7]=rotl(c->r[23],0)&0x80000000u; // 80195664
  c->r[3]=0u+0x00000001u; // 80195668
  c->r[0]=c->r[7]+0x80000000u; // 8019566C
  cmpu(c,0,c->r[0],0x00000000u); // 80195670
  if (!crb(c,2)) { goto L_8019568C; } // 80195674
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80195678
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 8019567C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80195680
  if (crb(c,2)) { goto L_8019568C; } // 80195684
  c->r[3]=0u+0x00000000u; // 80195688
L_8019568C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8019568C
  if (crb(c,2)) { goto L_80195698; } // 80195690
  c->r[6]=0u+0x00000001u; // 80195694
L_80195698:;
  cmps(c,0,(int32_t)c->r[6],0); // 80195698
  if (crb(c,2)) { goto L_801956C8; } // 8019569C
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801956A0
  c->r[3]=0u+0x00000001u; // 801956A4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801956A8
  if (!crb(c,2)) { goto L_801956BC; } // 801956AC
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 801956B0
  if (crb(c,2)) { goto L_801956BC; } // 801956B4
  c->r[3]=0u+0x00000000u; // 801956B8
L_801956BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801956BC
  if (crb(c,2)) { goto L_801956C8; } // 801956C0
  c->r[5]=0u+0x00000001u; // 801956C4
L_801956C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801956C8
  if (crb(c,2)) { goto L_80195734; } // 801956CC
  c->r[0]=c->r[4]+0x00000007u; // 801956D0
  c->r[3]=c->r[1]+0x00000108u; // 801956D4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801956D8
  c->ctr=c->r[0]; // 801956DC
  cmps(c,0,(int32_t)c->r[4],1); // 801956E0
  if (crb(c,0)) { goto L_80195734; } // 801956E4
L_801956E8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801956E8
  c->r[8]=c->r[8]+0x00000008u; // 801956EC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=RF64(ea);} // 801956F0
  c->f[6]=c->f[6]+c->f[1]; // 801956F4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[5]=RF64(ea);} // 801956F8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=RF64(ea);} // 801956FC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=RF64(ea);} // 80195700
  c->f[6]=c->f[6]+c->f[0]; // 80195704
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=RF64(ea);} // 80195708
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=RF64(ea);} // 8019570C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=RF64(ea);} // 80195710
  c->r[3]=c->r[3]+0x00000040u; // 80195714
  c->f[6]=c->f[6]+c->f[5]; // 80195718
  c->f[6]=c->f[6]+c->f[4]; // 8019571C
  c->f[6]=c->f[6]+c->f[3]; // 80195720
  c->f[6]=c->f[6]+c->f[2]; // 80195724
  c->f[6]=c->f[6]+c->f[1]; // 80195728
  c->f[6]=c->f[6]+c->f[0]; // 8019572C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801956E8; } // 80195730
L_80195734:;
  c->r[0]=c->r[23]+0x00000001u; // 80195734
  c->r[3]=rotl(c->r[8],3)&0xFFFFFFF8u; // 80195738
  c->r[4]=c->r[1]+0x00000100u; // 8019573C
  c->r[0]=c->r[0]-c->r[8]; // 80195740
  c->r[4]=c->r[4]+c->r[3]; // 80195744
  c->ctr=c->r[0]; // 80195748
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[23]); // 8019574C
  if (crb(c,1)) { goto L_80195764; } // 80195750
L_80195754:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 80195754
  c->r[4]=c->r[4]+0x00000008u; // 80195758
  c->f[6]=c->f[6]+c->f[0]; // 8019575C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195754; } // 80195760
L_80195764:;
  cmps(c,0,(int32_t)c->r[18],0); // 80195764
  if (!crb(c,2)) { goto L_80195770; } // 80195768
  goto L_80195774; // 8019576C
L_80195770:;
  c->f[6]=-c->f[6]; // 80195770
L_80195774:;
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[6]);} // 80195774
  goto L_80195BA4; // 80195778
L_8019577C:;
  cmps(c,0,(int32_t)c->r[23],0); // 8019577C
  c->r[5]=c->r[23]|c->r[23]; // 80195780
  if (!crb(c,1)) { goto L_801958B0; } // 80195784
  cmps(c,0,(int32_t)c->r[23],8); // 80195788
  if (!crb(c,1)) { goto L_80195878; } // 8019578C
  cmps(c,0,(int32_t)c->r[23],-1); // 80195790
  c->r[0]=0u+0x00000000u; // 80195794
  if (!crb(c,1)) { goto L_801957A0; } // 80195798
  c->r[0]=0u+0x00000001u; // 8019579C
L_801957A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801957A0
  if (crb(c,2)) { goto L_80195878; } // 801957A4
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801957A8
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801957AC
  c->r[4]=c->r[1]+0x00000100u; // 801957B0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801957B4
  c->r[4]=c->r[4]+c->r[3]; // 801957B8
  c->ctr=c->r[0]; // 801957BC
  cmps(c,0,(int32_t)c->r[23],8); // 801957C0
  if (!crb(c,1)) { goto L_80195878; } // 801957C4
L_801957C8:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801957C8
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801957CC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 801957D0
  c->f[2]=c->f[0]+c->f[1]; // 801957D4
  c->f[0]=c->f[0]-c->f[2]; // 801957D8
  c->f[0]=c->f[1]+c->f[0]; // 801957DC
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 801957E0
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 801957E4
  c->f[1]=c->f[0]+c->f[2]; // 801957E8
  c->f[0]=c->f[0]-c->f[1]; // 801957EC
  c->f[0]=c->f[2]+c->f[0]; // 801957F0
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 801957F4
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 801957F8
  c->f[2]=c->f[0]+c->f[1]; // 801957FC
  c->f[0]=c->f[0]-c->f[2]; // 80195800
  c->f[0]=c->f[1]+c->f[0]; // 80195804
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 80195808
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 8019580C
  c->f[1]=c->f[0]+c->f[2]; // 80195810
  c->f[0]=c->f[0]-c->f[1]; // 80195814
  c->f[0]=c->f[2]+c->f[0]; // 80195818
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 8019581C
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 80195820
  c->f[2]=c->f[0]+c->f[1]; // 80195824
  c->f[0]=c->f[0]-c->f[2]; // 80195828
  c->f[0]=c->f[1]+c->f[0]; // 8019582C
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 80195830
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 80195834
  c->f[1]=c->f[0]+c->f[2]; // 80195838
  c->f[0]=c->f[0]-c->f[1]; // 8019583C
  c->f[0]=c->f[2]+c->f[0]; // 80195840
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 80195844
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 80195848
  c->f[2]=c->f[0]+c->f[1]; // 8019584C
  c->f[0]=c->f[0]-c->f[2]; // 80195850
  c->f[0]=c->f[1]+c->f[0]; // 80195854
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 80195858
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 8019585C
  c->f[1]=c->f[0]+c->f[2]; // 80195860
  c->f[0]=c->f[0]-c->f[1]; // 80195864
  c->f[0]=c->f[2]+c->f[0]; // 80195868
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 8019586C
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 80195870
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801957C8; } // 80195874
L_80195878:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80195878
  c->r[3]=c->r[1]+0x00000100u; // 8019587C
  c->r[3]=c->r[3]+c->r[0]; // 80195880
  c->ctr=c->r[5]; // 80195884
  cmps(c,0,(int32_t)c->r[5],0); // 80195888
  if (!crb(c,1)) { goto L_801958B0; } // 8019588C
L_80195890:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 80195890
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 80195894
  c->f[2]=c->f[0]+c->f[1]; // 80195898
  c->f[0]=c->f[0]-c->f[2]; // 8019589C
  c->f[0]=c->f[1]+c->f[0]; // 801958A0
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801958A4
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[3]=ea;} // 801958A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195890; } // 801958AC
L_801958B0:;
  cmps(c,1,(int32_t)c->r[23],1); // 801958B0
  c->r[6]=c->r[23]|c->r[23]; // 801958B4
  if (!crb(c,5)) { goto L_80195A28; } // 801958B8
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801958BC
  cmps(c,0,(int32_t)c->r[0],8); // 801958C0
  if (!crb(c,1)) { goto L_801959EC; } // 801958C4
  c->r[3]=0u+0x00000000u; // 801958C8
  c->r[0]=0u+0x00000000u; // 801958CC
  if (crb(c,4)) { goto L_801958D8; } // 801958D0
  c->r[0]=0u+0x00000001u; // 801958D4
L_801958D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801958D8
  if (crb(c,2)) { goto L_80195914; } // 801958DC
  c->r[5]=rotl(c->r[23],0)&0x80000000u; // 801958E0
  c->r[4]=0u+0x00000001u; // 801958E4
  c->r[0]=c->r[5]+0x80000000u; // 801958E8
  cmpu(c,0,c->r[0],0x00000000u); // 801958EC
  if (!crb(c,2)) { goto L_80195908; } // 801958F0
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801958F4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801958F8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801958FC
  if (crb(c,2)) { goto L_80195908; } // 80195900
  c->r[4]=0u+0x00000000u; // 80195904
L_80195908:;
  cmps(c,0,(int32_t)c->r[4],0); // 80195908
  if (crb(c,2)) { goto L_80195914; } // 8019590C
  c->r[3]=0u+0x00000001u; // 80195910
L_80195914:;
  cmps(c,0,(int32_t)c->r[3],0); // 80195914
  if (crb(c,2)) { goto L_801959EC; } // 80195918
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 8019591C
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 80195920
  c->r[4]=c->r[1]+0x00000100u; // 80195924
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80195928
  c->r[4]=c->r[4]+c->r[3]; // 8019592C
  c->ctr=c->r[0]; // 80195930
  cmps(c,0,(int32_t)c->r[23],9); // 80195934
  if (!crb(c,1)) { goto L_801959EC; } // 80195938
L_8019593C:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 8019593C
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 80195940
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 80195944
  c->f[2]=c->f[0]+c->f[1]; // 80195948
  c->f[0]=c->f[0]-c->f[2]; // 8019594C
  c->f[0]=c->f[1]+c->f[0]; // 80195950
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 80195954
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 80195958
  c->f[1]=c->f[0]+c->f[2]; // 8019595C
  c->f[0]=c->f[0]-c->f[1]; // 80195960
  c->f[0]=c->f[2]+c->f[0]; // 80195964
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 80195968
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 8019596C
  c->f[2]=c->f[0]+c->f[1]; // 80195970
  c->f[0]=c->f[0]-c->f[2]; // 80195974
  c->f[0]=c->f[1]+c->f[0]; // 80195978
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 8019597C
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 80195980
  c->f[1]=c->f[0]+c->f[2]; // 80195984
  c->f[0]=c->f[0]-c->f[1]; // 80195988
  c->f[0]=c->f[2]+c->f[0]; // 8019598C
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 80195990
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 80195994
  c->f[2]=c->f[0]+c->f[1]; // 80195998
  c->f[0]=c->f[0]-c->f[2]; // 8019599C
  c->f[0]=c->f[1]+c->f[0]; // 801959A0
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 801959A4
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 801959A8
  c->f[1]=c->f[0]+c->f[2]; // 801959AC
  c->f[0]=c->f[0]-c->f[1]; // 801959B0
  c->f[0]=c->f[2]+c->f[0]; // 801959B4
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 801959B8
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 801959BC
  c->f[2]=c->f[0]+c->f[1]; // 801959C0
  c->f[0]=c->f[0]-c->f[2]; // 801959C4
  c->f[0]=c->f[1]+c->f[0]; // 801959C8
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 801959CC
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 801959D0
  c->f[1]=c->f[0]+c->f[2]; // 801959D4
  c->f[0]=c->f[0]-c->f[1]; // 801959D8
  c->f[0]=c->f[2]+c->f[0]; // 801959DC
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 801959E0
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 801959E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019593C; } // 801959E8
L_801959EC:;
  c->r[3]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801959EC
  c->r[4]=c->r[1]+0x00000100u; // 801959F0
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801959F4
  c->r[4]=c->r[4]+c->r[3]; // 801959F8
  c->ctr=c->r[0]; // 801959FC
  cmps(c,0,(int32_t)c->r[6],1); // 80195A00
  if (!crb(c,1)) { goto L_80195A28; } // 80195A04
L_80195A08:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 80195A08
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 80195A0C
  c->f[2]=c->f[0]+c->f[1]; // 80195A10
  c->f[0]=c->f[0]-c->f[2]; // 80195A14
  c->f[0]=c->f[1]+c->f[0]; // 80195A18
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 80195A1C
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[4]=ea;} // 80195A20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195A08; } // 80195A24
L_80195A28:;
  cmps(c,1,(int32_t)c->r[23],2); // 80195A28
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[6]=RF64(ea);} // 80195A2C
  if (crb(c,4)) { goto L_80195B64; } // 80195A30
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80195A34
  cmps(c,0,(int32_t)c->r[0],8); // 80195A38
  if (!crb(c,1)) { goto L_80195B38; } // 80195A3C
  c->r[3]=0u+0x00000000u; // 80195A40
  c->r[4]=0u+0x00000000u; // 80195A44
  c->r[0]=0u+0x00000000u; // 80195A48
  if (crb(c,4)) { goto L_80195A54; } // 80195A4C
  c->r[0]=0u+0x00000001u; // 80195A50
L_80195A54:;
  cmps(c,0,(int32_t)c->r[0],0); // 80195A54
  if (crb(c,2)) { goto L_80195A90; } // 80195A58
  c->r[6]=rotl(c->r[23],0)&0x80000000u; // 80195A5C
  c->r[5]=0u+0x00000001u; // 80195A60
  c->r[0]=c->r[6]+0x80000000u; // 80195A64
  cmpu(c,0,c->r[0],0x00000000u); // 80195A68
  if (!crb(c,2)) { goto L_80195A84; } // 80195A6C
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 80195A70
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 80195A74
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80195A78
  if (crb(c,2)) { goto L_80195A84; } // 80195A7C
  c->r[5]=0u+0x00000000u; // 80195A80
L_80195A84:;
  cmps(c,0,(int32_t)c->r[5],0); // 80195A84
  if (crb(c,2)) { goto L_80195A90; } // 80195A88
  c->r[4]=0u+0x00000001u; // 80195A8C
L_80195A90:;
  cmps(c,0,(int32_t)c->r[4],0); // 80195A90
  if (crb(c,2)) { goto L_80195AC4; } // 80195A94
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 80195A98
  c->r[4]=0u+0x00000001u; // 80195A9C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80195AA0
  if (!crb(c,2)) { goto L_80195AB8; } // 80195AA4
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80195AA8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80195AAC
  if (crb(c,2)) { goto L_80195AB8; } // 80195AB0
  c->r[4]=0u+0x00000000u; // 80195AB4
L_80195AB8:;
  cmps(c,0,(int32_t)c->r[4],0); // 80195AB8
  if (crb(c,2)) { goto L_80195AC4; } // 80195ABC
  c->r[3]=0u+0x00000001u; // 80195AC0
L_80195AC4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80195AC4
  if (crb(c,2)) { goto L_80195B38; } // 80195AC8
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 80195ACC
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 80195AD0
  c->r[4]=c->r[1]+0x00000100u; // 80195AD4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80195AD8
  c->r[4]=c->r[4]+c->r[3]; // 80195ADC
  c->ctr=c->r[0]; // 80195AE0
  cmps(c,0,(int32_t)c->r[23],10); // 80195AE4
  if (crb(c,0)) { goto L_80195B38; } // 80195AE8
L_80195AEC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 80195AEC
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 80195AF0
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 80195AF4
  c->f[6]=c->f[6]+c->f[1]; // 80195AF8
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 80195AFC
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 80195B00
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 80195B04
  c->f[6]=c->f[6]+c->f[0]; // 80195B08
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 80195B0C
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 80195B10
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 80195B14
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 80195B18
  c->f[6]=c->f[6]+c->f[5]; // 80195B1C
  c->f[6]=c->f[6]+c->f[4]; // 80195B20
  c->f[6]=c->f[6]+c->f[3]; // 80195B24
  c->f[6]=c->f[6]+c->f[2]; // 80195B28
  c->f[6]=c->f[6]+c->f[1]; // 80195B2C
  c->f[6]=c->f[6]+c->f[0]; // 80195B30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195AEC; } // 80195B34
L_80195B38:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 80195B38
  c->r[4]=c->r[1]+0x00000100u; // 80195B3C
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 80195B40
  c->r[4]=c->r[4]+c->r[3]; // 80195B44
  c->ctr=c->r[0]; // 80195B48
  cmps(c,0,(int32_t)c->r[23],2); // 80195B4C
  if (crb(c,0)) { goto L_80195B64; } // 80195B50
L_80195B54:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 80195B54
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 80195B58
  c->f[6]=c->f[6]+c->f[0]; // 80195B5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80195B54; } // 80195B60
L_80195B64:;
  cmps(c,0,(int32_t)c->r[18],0); // 80195B64
  if (!crb(c,2)) { goto L_80195B84; } // 80195B68
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=RF64(ea);} // 80195B6C
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=RF64(ea);} // 80195B70
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 80195B74
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[0]);} // 80195B78
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[6]);} // 80195B7C
  goto L_80195BA4; // 80195B80
L_80195B84:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[2]=RF64(ea);} // 80195B84
  c->f[0]=-c->f[6]; // 80195B88
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=RF64(ea);} // 80195B8C
  c->f[2]=-c->f[2]; // 80195B90
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[0]);} // 80195B94
  c->f[0]=-c->f[1]; // 80195B98
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[2]);} // 80195B9C
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[0]);} // 80195BA0
L_80195BA4:;
  c->r[11]=c->r[1]+0x00000370u; // 80195BA4
  c->r[3]=rotl(c->r[20],0)&0x00000007u; // 80195BA8
  c->lr=0x80195BB0u; { {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 80195BAC
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80195BB0
  c->r[0]=R32(c->r[1]+0x00000374u); // 80195BB4
  c->lr=c->r[0]; // 80195BB8
  c->r[1]=c->r[1]+0x00000370u; // 80195BBC
  return; // 80195BC0
}

// __kernel_sin
void f_80195BC4(Ctx* __restrict c) {
  trace_call(0x80195BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80195BC4
  c->r[0]=0u+0x3E400000u; // 80195BC8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80195BCC
  c->r[4]=R32(c->r[1]+0x00000008u); // 80195BD0
  c->r[4]=rotl(c->r[4],0)&0x7FFFFFFFu; // 80195BD4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195BD8
  if (!crb(c,0)) { goto L_80195BF8; } // 80195BDC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80195BE0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80195BE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80195BE8
  cmps(c,0,(int32_t)c->r[0],0); // 80195BEC
  if (!crb(c,2)) { goto L_80195BF8; } // 80195BF0
  goto L_80195C7C; // 80195BF4
L_80195BF8:;
  c->f[7]=c->f[1]*c->f[1]; // 80195BF8
  {uint32_t ea=c->r[2]+0xFFFF93D0u; c->f[0]=RF64(ea);} // 80195BFC
  {uint32_t ea=c->r[2]+0xFFFF93C8u; c->f[5]=RF64(ea);} // 80195C00
  cmps(c,0,(int32_t)c->r[3],0); // 80195C04
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[4]=RF64(ea);} // 80195C08
  {uint32_t ea=c->r[2]+0xFFFF93B8u; c->f[3]=RF64(ea);} // 80195C0C
  c->f[6]=c->f[0]*c->f[7]; // 80195C10
  {uint32_t ea=c->r[2]+0xFFFF93B0u; c->f[0]=RF64(ea);} // 80195C14
  c->f[8]=c->f[7]*c->f[1]; // 80195C18
  c->f[5]=c->f[5]+c->f[6]; // 80195C1C
  c->f[5]=c->f[7]*c->f[5]; // 80195C20
  c->f[4]=c->f[4]+c->f[5]; // 80195C24
  c->f[4]=c->f[7]*c->f[4]; // 80195C28
  c->f[3]=c->f[3]+c->f[4]; // 80195C2C
  c->f[3]=c->f[7]*c->f[3]; // 80195C30
  c->f[0]=c->f[0]+c->f[3]; // 80195C34
  if (!crb(c,2)) { goto L_80195C54; } // 80195C38
  c->f[2]=c->f[7]*c->f[0]; // 80195C3C
  {uint32_t ea=c->r[2]+0xFFFF93D8u; c->f[0]=RF64(ea);} // 80195C40
  c->f[0]=c->f[0]+c->f[2]; // 80195C44
  c->f[0]=c->f[8]*c->f[0]; // 80195C48
  c->f[1]=c->f[1]+c->f[0]; // 80195C4C
  goto L_80195C7C; // 80195C50
L_80195C54:;
  {uint32_t ea=c->r[2]+0xFFFF93E0u; c->f[4]=RF64(ea);} // 80195C54
  c->f[3]=c->f[8]*c->f[0]; // 80195C58
  {uint32_t ea=c->r[2]+0xFFFF93D8u; c->f[0]=RF64(ea);} // 80195C5C
  c->f[4]=c->f[4]*c->f[2]; // 80195C60
  c->f[0]=c->f[0]*c->f[8]; // 80195C64
  c->f[3]=c->f[4]-c->f[3]; // 80195C68
  c->f[3]=c->f[7]*c->f[3]; // 80195C6C
  c->f[2]=c->f[3]-c->f[2]; // 80195C70
  c->f[0]=c->f[2]-c->f[0]; // 80195C74
  c->f[1]=c->f[1]-c->f[0]; // 80195C78
L_80195C7C:;
  c->r[1]=c->r[1]+0x00000020u; // 80195C7C
  return; // 80195C80
}

// fn_80195C84
void f_80195C84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80195C84
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80195C88
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80195C8C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80195C90
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80195C94
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80195C98
  c->r[0]=0u+0x3E300000u; // 80195C9C
  c->r[8]=R32(c->r[1]+0x00000008u); // 80195CA0
  c->r[7]=rotl(c->r[8],0)&0x7FFFFFFFu; // 80195CA4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80195CA8
  if (!crb(c,0)) { goto L_80195D00; } // 80195CAC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80195CB0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80195CB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80195CB8
  cmps(c,0,(int32_t)c->r[0],0); // 80195CBC
  if (!crb(c,2)) { goto L_80195D00; } // 80195CC0
  c->r[4]=c->r[3]+0x00000001u; // 80195CC4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80195CC8
  c->r[4]=c->r[4]|c->r[7]; // 80195CCC
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 80195CD0
  if (!crb(c,2)) { goto L_80195CE8; } // 80195CD4
  c->f[1]=std::fabs(c->f[1]); // 80195CD8
  {uint32_t ea=c->r[2]+0xFFFF93E8u; c->f[0]=RF64(ea);} // 80195CDC
  c->f[1]=c->f[0]/c->f[1]; // 80195CE0
  goto L_80195EBC; // 80195CE4
L_80195CE8:;
  cmps(c,0,(int32_t)c->r[3],1); // 80195CE8
  if (!crb(c,2)) { goto L_80195CF4; } // 80195CEC
  goto L_80195EBC; // 80195CF0
L_80195CF4:;
  {uint32_t ea=c->r[2]+0xFFFF93F0u; c->f[0]=RF64(ea);} // 80195CF4
  c->f[1]=c->f[0]/c->f[1]; // 80195CF8
  goto L_80195EBC; // 80195CFC
L_80195D00:;
  c->r[4]=0u+0x3FE60000u; // 80195D00
  c->r[0]=c->r[4]+0xFFFF9428u; // 80195D04
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80195D08
  if (crb(c,0)) { goto L_80195D38; } // 80195D0C
  cmps(c,0,(int32_t)c->r[8],0); // 80195D10
  if (!crb(c,0)) { goto L_80195D20; } // 80195D14
  c->f[1]=-c->f[1]; // 80195D18
  c->f[2]=-c->f[2]; // 80195D1C
L_80195D20:;
  {uint32_t ea=c->r[2]+0xFFFF93F8u; c->f[3]=RF64(ea);} // 80195D20
  {uint32_t ea=c->r[2]+0xFFFF9400u; c->f[0]=RF64(ea);} // 80195D24
  c->f[1]=c->f[3]-c->f[1]; // 80195D28
  c->f[0]=c->f[0]-c->f[2]; // 80195D2C
  {uint32_t ea=c->r[2]+0xFFFF9408u; c->f[2]=RF64(ea);} // 80195D30
  c->f[1]=c->f[1]+c->f[0]; // 80195D34
L_80195D38:;
  c->f[0]=c->f[1]*c->f[1]; // 80195D38
  c->r[6]=0u+0x802E0000u; // 80195D3C
  c->r[5]=c->r[6]+0x00000BF0u; // 80195D40
  c->r[4]=0u+0x3FE60000u; // 80195D44
  c->r[0]=c->r[4]+0xFFFF9428u; // 80195D48
  {uint32_t ea=c->r[5]+0x00000060u; c->f[5]=RF64(ea);} // 80195D4C
  c->f[3]=c->f[0]*c->f[0]; // 80195D50
  {uint32_t ea=c->r[5]+0x00000058u; c->f[8]=RF64(ea);} // 80195D54
  {uint32_t ea=c->r[5]+0x00000050u; c->f[6]=RF64(ea);} // 80195D58
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80195D5C
  {uint32_t ea=c->r[5]+0x00000048u; c->f[10]=RF64(ea);} // 80195D60
  c->f[4]=c->f[0]*c->f[1]; // 80195D64
  c->f[7]=c->f[3]*c->f[5]; // 80195D68
  {uint32_t ea=c->r[6]+0x00000BF0u; c->f[5]=RF64(ea);} // 80195D6C
  {uint32_t ea=c->r[5]+0x00000040u; c->f[9]=RF64(ea);} // 80195D70
  c->f[11]=c->f[3]*c->f[8]; // 80195D74
  {uint32_t ea=c->r[5]+0x00000038u; c->f[31]=RF64(ea);} // 80195D78
  {uint32_t ea=c->r[5]+0x00000030u; c->f[8]=RF64(ea);} // 80195D7C
  c->f[6]=c->f[6]+c->f[7]; // 80195D80
  {uint32_t ea=c->r[5]+0x00000028u; c->f[13]=RF64(ea);} // 80195D84
  c->f[30]=c->f[10]+c->f[11]; // 80195D88
  {uint32_t ea=c->r[5]+0x00000020u; c->f[7]=RF64(ea);} // 80195D8C
  c->f[5]=c->f[5]*c->f[4]; // 80195D90
  {uint32_t ea=c->r[5]+0x00000018u; c->f[12]=RF64(ea);} // 80195D94
  c->f[10]=c->f[3]*c->f[6]; // 80195D98
  {uint32_t ea=c->r[5]+0x00000010u; c->f[6]=RF64(ea);} // 80195D9C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[11]=RF64(ea);} // 80195DA0
  c->f[30]=c->f[3]*c->f[30]; // 80195DA4
  c->f[9]=c->f[9]+c->f[10]; // 80195DA8
  c->f[10]=c->f[31]+c->f[30]; // 80195DAC
  c->f[9]=c->f[3]*c->f[9]; // 80195DB0
  c->f[10]=c->f[3]*c->f[10]; // 80195DB4
  c->f[8]=c->f[8]+c->f[9]; // 80195DB8
  c->f[9]=c->f[13]+c->f[10]; // 80195DBC
  c->f[8]=c->f[3]*c->f[8]; // 80195DC0
  c->f[9]=c->f[3]*c->f[9]; // 80195DC4
  c->f[7]=c->f[7]+c->f[8]; // 80195DC8
  c->f[8]=c->f[12]+c->f[9]; // 80195DCC
  c->f[7]=c->f[3]*c->f[7]; // 80195DD0
  c->f[8]=c->f[3]*c->f[8]; // 80195DD4
  c->f[3]=c->f[6]+c->f[7]; // 80195DD8
  c->f[6]=c->f[11]+c->f[8]; // 80195DDC
  c->f[3]=c->f[0]*c->f[3]; // 80195DE0
  c->f[3]=c->f[6]+c->f[3]; // 80195DE4
  c->f[3]=c->f[4]*c->f[3]; // 80195DE8
  c->f[3]=c->f[2]+c->f[3]; // 80195DEC
  c->f[0]=c->f[0]*c->f[3]; // 80195DF0
  c->f[6]=c->f[2]+c->f[0]; // 80195DF4
  c->f[6]=c->f[6]+c->f[5]; // 80195DF8
  c->f[4]=c->f[1]+c->f[6]; // 80195DFC
  if (crb(c,0)) { goto L_80195E64; } // 80195E00
  c->r[4]=0u+0x43300000u; // 80195E04
  c->r[0]=c->r[3]^0x80000000u; // 80195E08
  W32(c->r[1]+0x00000024u,c->r[0]); // 80195E0C
  c->r[0]=rotl(c->r[8],2)&0x00000002u; // 80195E10
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[5]=RF64(ea);} // 80195E14
  c->r[0]=addc(c,~c->r[0],0x00000001u,1); // 80195E18
  W32(c->r[1]+0x00000020u,c->r[4]); // 80195E1C
  c->r[0]=c->r[0]^0x80000000u; // 80195E20
  c->f[3]=c->f[4]*c->f[4]; // 80195E24
  {uint32_t ea=c->r[2]+0xFFFF9410u; c->f[0]=RF64(ea);} // 80195E28
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 80195E2C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80195E30
  c->f[7]=c->f[2]-c->f[5]; // 80195E34
  W32(c->r[1]+0x00000028u,c->r[4]); // 80195E38
  c->f[2]=c->f[4]+c->f[7]; // 80195E3C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 80195E40
  c->f[4]=c->f[4]-c->f[5]; // 80195E44
  c->f[2]=c->f[3]/c->f[2]; // 80195E48
  c->f[2]=c->f[2]-c->f[6]; // 80195E4C
  c->f[1]=c->f[1]-c->f[2]; // 80195E50
  c->f[0]=c->f[0]*c->f[1]; // 80195E54
  c->f[0]=c->f[7]-c->f[0]; // 80195E58
  c->f[1]=c->f[4]*c->f[0]; // 80195E5C
  goto L_80195EBC; // 80195E60
L_80195E64:;
  cmps(c,0,(int32_t)c->r[3],1); // 80195E64
  if (!crb(c,2)) { goto L_80195E74; } // 80195E68
  c->f[1]=c->f[4]; // 80195E6C
  goto L_80195EBC; // 80195E70
L_80195E74:;
  {uint32_t ea=c->r[2]+0xFFFF93F0u; c->f[0]=RF64(ea);} // 80195E74
  c->r[0]=0u+0x00000000u; // 80195E78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[4]);} // 80195E7C
  c->f[5]=c->f[0]/c->f[4]; // 80195E80
  {uint32_t ea=c->r[2]+0xFFFF93E8u; c->f[2]=RF64(ea);} // 80195E84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80195E88
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=RF64(ea);} // 80195E8C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[5]);} // 80195E90
  c->f[0]=c->f[4]-c->f[1]; // 80195E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80195E98
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80195E9C
  c->f[0]=c->f[6]-c->f[0]; // 80195EA0
  c->f[1]=c->f[3]*c->f[4]; // 80195EA4
  c->f[0]=c->f[3]*c->f[0]; // 80195EA8
  c->f[1]=c->f[2]+c->f[1]; // 80195EAC
  c->f[0]=c->f[1]+c->f[0]; // 80195EB0
  c->f[0]=c->f[5]*c->f[0]; // 80195EB4
  c->f[1]=c->f[3]+c->f[0]; // 80195EB8
L_80195EBC:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80195EBC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80195EC0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80195EC4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80195EC8
  c->r[1]=c->r[1]+0x00000050u; // 80195ECC
  return; // 80195ED0
}

// fn_80195ED4
void f_80195ED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80195ED4
  c->r[5]=0u+0x802E0000u; // 80195ED8
  c->r[0]=0u+0x44100000u; // 80195EDC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80195EE0
  c->r[5]=c->r[5]+0x00000C58u; // 80195EE4
  c->r[6]=R32(c->r[1]+0x00000008u); // 80195EE8
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 80195EEC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195EF0
  if (!crb(c,0)) { goto L_80195F14; } // 80195EF4
  c->r[0]=0u+0x3FDC0000u; // 80195EF8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195EFC
  if (!crb(c,0)) { goto L_80195F98; } // 80195F00
  c->r[0]=0u+0x3E200000u; // 80195F04
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195F08
  if (!crb(c,0)) { goto L_80195F90; } // 80195F0C
  goto L_80195F78; // 80195F10
L_80195F14:;
  c->r[0]=0u+0x7FF00000u; // 80195F14
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195F18
  if (crb(c,2)) { goto L_80195F28; } // 80195F1C
  if (!crb(c,0)) { goto L_80195F34; } // 80195F20
  goto L_80195F3C; // 80195F24
L_80195F28:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80195F28
  cmps(c,0,(int32_t)c->r[0],0); // 80195F2C
  if (crb(c,2)) { goto L_80195F3C; } // 80195F30
L_80195F34:;
  c->f[1]=c->f[1]+c->f[1]; // 80195F34
  goto L_801960FC; // 80195F38
L_80195F3C:;
  cmps(c,0,(int32_t)c->r[6],0); // 80195F3C
  if (!crb(c,1)) { goto L_80195F5C; } // 80195F40
  c->r[4]=c->r[5]+0x00000000u; // 80195F44
  c->r[3]=c->r[5]+0x00000020u; // 80195F48
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 80195F4C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 80195F50
  c->f[1]=c->f[1]+c->f[0]; // 80195F54
  goto L_801960FC; // 80195F58
L_80195F5C:;
  c->r[4]=c->r[5]+0x00000000u; // 80195F5C
  c->r[3]=c->r[5]+0x00000020u; // 80195F60
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 80195F64
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 80195F68
  c->f[1]=-c->f[1]; // 80195F6C
  c->f[1]=c->f[1]-c->f[0]; // 80195F70
  goto L_801960FC; // 80195F74
L_80195F78:;
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[2]=RF64(ea);} // 80195F78
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[0]=RF64(ea);} // 80195F7C
  c->f[2]=c->f[2]+c->f[1]; // 80195F80
  fcmp(c,0,c->f[2],c->f[0]); // 80195F84
  if (!crb(c,1)) { goto L_80195F90; } // 80195F88
  goto L_801960FC; // 80195F8C
L_80195F90:;
  c->r[0]=0u+0xFFFFFFFFu; // 80195F90
  goto L_80196028; // 80195F94
L_80195F98:;
  c->r[0]=0u+0x3FF30000u; // 80195F98
  c->f[3]=std::fabs(c->f[1]); // 80195F9C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195FA0
  if (!crb(c,0)) { goto L_80195FEC; } // 80195FA4
  c->r[0]=0u+0x3FE60000u; // 80195FA8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195FAC
  if (!crb(c,0)) { goto L_80195FD4; } // 80195FB0
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[0]=RF64(ea);} // 80195FB4
  c->r[0]=0u+0x00000000u; // 80195FB8
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[1]=RF64(ea);} // 80195FBC
  c->f[2]=c->f[0]*c->f[3]; // 80195FC0
  c->f[0]=c->f[0]+c->f[3]; // 80195FC4
  c->f[1]=c->f[2]-c->f[1]; // 80195FC8
  c->f[1]=c->f[1]/c->f[0]; // 80195FCC
  goto L_80196028; // 80195FD0
L_80195FD4:;
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[0]=RF64(ea);} // 80195FD4
  c->r[0]=0u+0x00000001u; // 80195FD8
  c->f[1]=c->f[3]-c->f[0]; // 80195FDC
  c->f[0]=c->f[0]+c->f[3]; // 80195FE0
  c->f[1]=c->f[1]/c->f[0]; // 80195FE4
  goto L_80196028; // 80195FE8
L_80195FEC:;
  c->r[3]=0u+0x40040000u; // 80195FEC
  c->r[0]=c->r[3]+0xFFFF8000u; // 80195FF0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80195FF4
  if (!crb(c,0)) { goto L_8019601C; } // 80195FF8
  {uint32_t ea=c->r[2]+0xFFFF9438u; c->f[2]=RF64(ea);} // 80195FFC
  c->r[0]=0u+0x00000002u; // 80196000
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[0]=RF64(ea);} // 80196004
  c->f[1]=c->f[2]*c->f[3]; // 80196008
  c->f[2]=c->f[3]-c->f[2]; // 8019600C
  c->f[0]=c->f[0]+c->f[1]; // 80196010
  c->f[1]=c->f[2]/c->f[0]; // 80196014
  goto L_80196028; // 80196018
L_8019601C:;
  {uint32_t ea=c->r[2]+0xFFFF9440u; c->f[0]=RF64(ea);} // 8019601C
  c->r[0]=0u+0x00000003u; // 80196020
  c->f[1]=c->f[0]/c->f[3]; // 80196024
L_80196028:;
  c->f[0]=c->f[1]*c->f[1]; // 80196028
  c->r[3]=c->r[5]+0x00000040u; // 8019602C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[3]=RF64(ea);} // 80196030
  cmps(c,0,(int32_t)c->r[0],0); // 80196034
  {uint32_t ea=c->r[3]+0x00000048u; c->f[2]=RF64(ea);} // 80196038
  {uint32_t ea=c->r[3]+0x00000040u; c->f[11]=RF64(ea);} // 8019603C
  c->f[13]=c->f[0]*c->f[0]; // 80196040
  {uint32_t ea=c->r[3]+0x00000038u; c->f[5]=RF64(ea);} // 80196044
  {uint32_t ea=c->r[3]+0x00000030u; c->f[10]=RF64(ea);} // 80196048
  {uint32_t ea=c->r[3]+0x00000028u; c->f[4]=RF64(ea);} // 8019604C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[9]=RF64(ea);} // 80196050
  c->f[12]=c->f[13]*c->f[3]; // 80196054
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=RF64(ea);} // 80196058
  c->f[6]=c->f[13]*c->f[2]; // 8019605C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[8]=RF64(ea);} // 80196060
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=RF64(ea);} // 80196064
  c->f[11]=c->f[11]+c->f[12]; // 80196068
  {uint32_t ea=c->r[5]+0x00000040u; c->f[7]=RF64(ea);} // 8019606C
  c->f[5]=c->f[5]+c->f[6]; // 80196070
  c->f[6]=c->f[13]*c->f[11]; // 80196074
  c->f[5]=c->f[13]*c->f[5]; // 80196078
  c->f[6]=c->f[10]+c->f[6]; // 8019607C
  c->f[4]=c->f[4]+c->f[5]; // 80196080
  c->f[5]=c->f[13]*c->f[6]; // 80196084
  c->f[4]=c->f[13]*c->f[4]; // 80196088
  c->f[5]=c->f[9]+c->f[5]; // 8019608C
  c->f[3]=c->f[3]+c->f[4]; // 80196090
  c->f[4]=c->f[13]*c->f[5]; // 80196094
  c->f[3]=c->f[13]*c->f[3]; // 80196098
  c->f[4]=c->f[8]+c->f[4]; // 8019609C
  c->f[2]=c->f[2]+c->f[3]; // 801960A0
  c->f[3]=c->f[13]*c->f[4]; // 801960A4
  c->f[4]=c->f[13]*c->f[2]; // 801960A8
  c->f[2]=c->f[7]+c->f[3]; // 801960AC
  c->f[0]=c->f[0]*c->f[2]; // 801960B0
  if (!crb(c,0)) { goto L_801960C8; } // 801960B4
  c->f[0]=c->f[0]+c->f[4]; // 801960B8
  c->f[0]=c->f[1]*c->f[0]; // 801960BC
  c->f[1]=c->f[1]-c->f[0]; // 801960C0
  goto L_801960FC; // 801960C4
L_801960C8:;
  c->f[0]=c->f[0]+c->f[4]; // 801960C8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801960CC
  c->r[3]=c->r[5]+0x00000020u; // 801960D0
  c->r[4]=c->r[5]+0x00000000u; // 801960D4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=RF64(ea);} // 801960D8
  cmps(c,0,(int32_t)c->r[6],0); // 801960DC
  c->f[3]=c->f[1]*c->f[0]; // 801960E0
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=RF64(ea);} // 801960E4
  c->f[2]=c->f[3]-c->f[2]; // 801960E8
  c->f[1]=c->f[2]-c->f[1]; // 801960EC
  c->f[1]=c->f[0]-c->f[1]; // 801960F0
  if (!crb(c,0)) { goto L_801960FC; } // 801960F4
  c->f[1]=-c->f[1]; // 801960F8
L_801960FC:;
  c->r[1]=c->r[1]+0x00000010u; // 801960FC
  return; // 80196100
}

// fn_80196104
void f_80196104(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196104
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80196108
  c->r[5]=R32(c->r[1]+0x00000008u); // 8019610C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80196110
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 80196114
  c->r[7]=c->r[3]+0xFFFFFC01u; // 80196118
  cmps(c,0,(int32_t)c->r[7],52); // 8019611C
  if (!crb(c,0)) { goto L_80196138; } // 80196120
  cmps(c,1,(int32_t)c->r[7],20); // 80196124
  if (!crb(c,4)) { goto L_801961D8; } // 80196128
  cmps(c,0,(int32_t)c->r[7],0); // 8019612C
  if (!crb(c,0)) { goto L_80196180; } // 80196130
  goto L_80196144; // 80196134
L_80196138:;
  cmps(c,0,(int32_t)c->r[7],1024); // 80196138
  if (crb(c,2)) { goto L_801961CC; } // 8019613C
  goto L_80196248; // 80196140
L_80196144:;
  {uint32_t ea=c->r[2]+0xFFFF9448u; c->f[2]=RF64(ea);} // 80196144
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[0]=RF64(ea);} // 80196148
  c->f[1]=c->f[2]+c->f[1]; // 8019614C
  fcmp(c,0,c->f[1],c->f[0]); // 80196150
  if (!crb(c,1)) { goto L_8019623C; } // 80196154
  cmps(c,0,(int32_t)c->r[5],0); // 80196158
  if (!crb(c,0)) { goto L_8019616C; } // 8019615C
  c->r[5]=0u+0x80000000u; // 80196160
  c->r[6]=0u+0x00000000u; // 80196164
  goto L_8019623C; // 80196168
L_8019616C:;
  c->r[0]=c->r[5]|c->r[6]; cr0(c,c->r[0]); // 8019616C
  if (crb(c,2)) { goto L_8019623C; } // 80196170
  c->r[5]=0u+0x3FF00000u; // 80196174
  c->r[6]=0u+0x00000000u; // 80196178
  goto L_8019623C; // 8019617C
L_80196180:;
  c->r[3]=0u+0x00100000u; // 80196180
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80196184
  c->r[4]=sraw(c,c->r[0],(c->r[7])&63); // 80196188
  c->r[0]=c->r[5]&c->r[4]; // 8019618C
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 80196190
  if (!crb(c,2)) { goto L_8019619C; } // 80196194
  goto L_80196248; // 80196198
L_8019619C:;
  {uint32_t ea=c->r[2]+0xFFFF9448u; c->f[2]=RF64(ea);} // 8019619C
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[0]=RF64(ea);} // 801961A0
  c->f[1]=c->f[2]+c->f[1]; // 801961A4
  fcmp(c,0,c->f[1],c->f[0]); // 801961A8
  if (!crb(c,1)) { goto L_8019623C; } // 801961AC
  cmps(c,0,(int32_t)c->r[5],0); // 801961B0
  if (!crb(c,1)) { goto L_801961C0; } // 801961B4
  c->r[0]=sraw(c,c->r[3],(c->r[7])&63); // 801961B8
  c->r[5]=c->r[5]+c->r[0]; // 801961BC
L_801961C0:;
  c->r[5]=c->r[5]&~c->r[4]; // 801961C0
  c->r[6]=0u+0x00000000u; // 801961C4
  goto L_8019623C; // 801961C8
L_801961CC:;
  c->f[1]=c->f[1]+c->f[1]; // 801961CC
  goto L_80196248; // 801961D0
  goto L_80196248; // 801961D4
L_801961D8:;
  c->r[0]=c->r[7]+0xFFFFFFECu; // 801961D8
  c->r[3]=0u+0xFFFFFFFFu; // 801961DC
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801961E0
  c->r[0]=c->r[6]&c->r[4]; cr0(c,c->r[0]); // 801961E4
  if (!crb(c,2)) { goto L_801961F0; } // 801961E8
  goto L_80196248; // 801961EC
L_801961F0:;
  {uint32_t ea=c->r[2]+0xFFFF9448u; c->f[2]=RF64(ea);} // 801961F0
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[0]=RF64(ea);} // 801961F4
  c->f[1]=c->f[2]+c->f[1]; // 801961F8
  fcmp(c,0,c->f[1],c->f[0]); // 801961FC
  if (!crb(c,1)) { goto L_8019623C; } // 80196200
  cmps(c,0,(int32_t)c->r[5],0); // 80196204
  if (!crb(c,1)) { goto L_80196238; } // 80196208
  if (!crb(c,6)) { goto L_80196218; } // 8019620C
  c->r[5]=c->r[5]+0x00000001u; // 80196210
  goto L_80196238; // 80196214
L_80196218:;
  c->r[0]=addc(c,~c->r[7],0x00000034u,1); // 80196218
  c->r[3]=0u+0x00000001u; // 8019621C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80196220
  c->r[0]=c->r[6]+c->r[0]; // 80196224
  cmpu(c,0,c->r[0],c->r[6]); // 80196228
  if (!crb(c,0)) { goto L_80196234; } // 8019622C
  c->r[5]=c->r[5]+0x00000001u; // 80196230
L_80196234:;
  c->r[6]=c->r[0]|c->r[0]; // 80196234
L_80196238:;
  c->r[6]=c->r[6]&~c->r[4]; // 80196238
L_8019623C:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 8019623C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80196240
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80196244
L_80196248:;
  c->r[1]=c->r[1]+0x00000010u; // 80196248
  return; // 8019624C
}

// copysign
void f_80196250(Ctx* __restrict c) {
  trace_call(0x80196250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196250
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80196254
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 80196258
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019625C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80196260
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 80196264
  c->r[0]=(rotl(c->r[3],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 80196268
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019626C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80196270
  c->r[1]=c->r[1]+0x00000020u; // 80196274
  return; // 80196278
}

// fn_8019627C
void f_8019627C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019627C
  c->r[0]=c->lr; // 80196280
  c->r[3]=0u+0x3FE90000u; // 80196284
  {uint32_t ea=c->r[2]+0xFFFF9458u; c->f[2]=RF64(ea);} // 80196288
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8019628C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80196290
  c->r[0]=c->r[3]+0x000021FBu; // 80196294
  c->r[3]=R32(c->r[1]+0x00000008u); // 80196298
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8019629C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801962A0
  if (crb(c,1)) { goto L_801962B0; } // 801962A4
  c->lr=0x801962ACu; f_801943FC(c); // 801962A8
  goto L_80196334; // 801962AC
L_801962B0:;
  c->r[0]=0u+0x7FF00000u; // 801962B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801962B4
  if (crb(c,0)) { goto L_801962C4; } // 801962B8
  c->f[1]=c->f[1]-c->f[1]; // 801962BC
  goto L_80196334; // 801962C0
L_801962C4:;
  c->r[3]=c->r[1]+0x00000010u; // 801962C4
  c->lr=0x801962CCu; f_80194078(c); // 801962C8
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 801962CC
  if (crb(c,2)) { goto L_801962E8; } // 801962D0
  cmps(c,0,(int32_t)c->r[0],1); // 801962D4
  if (crb(c,2)) { goto L_801962F8; } // 801962D8
  cmps(c,0,(int32_t)c->r[0],2); // 801962DC
  if (crb(c,2)) { goto L_80196310; } // 801962E0
  goto L_80196324; // 801962E4
L_801962E8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801962E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801962EC
  c->lr=0x801962F4u; f_801943FC(c); // 801962F0
  goto L_80196334; // 801962F4
L_801962F8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801962F8
  c->r[3]=0u+0x00000001u; // 801962FC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 80196300
  c->lr=0x80196308u; f_80195BC4(c); // 80196304
  c->f[1]=-c->f[1]; // 80196308
  goto L_80196334; // 8019630C
L_80196310:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80196310
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 80196314
  c->lr=0x8019631Cu; f_801943FC(c); // 80196318
  c->f[1]=-c->f[1]; // 8019631C
  goto L_80196334; // 80196320
L_80196324:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80196324
  c->r[3]=0u+0x00000001u; // 80196328
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 8019632C
  c->lr=0x80196334u; f_80195BC4(c); // 80196330
L_80196334:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80196334
  c->lr=c->r[0]; // 80196338
  c->r[1]=c->r[1]+0x00000020u; // 8019633C
  return; // 80196340
}

// fn_80196344
void f_80196344(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196344
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80196348
  c->r[5]=R32(c->r[1]+0x00000008u); // 8019634C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80196350
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 80196354
  c->r[7]=c->r[3]+0xFFFFFC01u; // 80196358
  cmps(c,0,(int32_t)c->r[7],52); // 8019635C
  if (!crb(c,0)) { goto L_80196378; } // 80196360
  cmps(c,1,(int32_t)c->r[7],20); // 80196364
  if (!crb(c,4)) { goto L_8019641C; } // 80196368
  cmps(c,0,(int32_t)c->r[7],0); // 8019636C
  if (!crb(c,0)) { goto L_801963C4; } // 80196370
  goto L_80196384; // 80196374
L_80196378:;
  cmps(c,0,(int32_t)c->r[7],1024); // 80196378
  if (crb(c,2)) { goto L_80196410; } // 8019637C
  goto L_8019648C; // 80196380
L_80196384:;
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[2]=RF64(ea);} // 80196384
  {uint32_t ea=c->r[2]+0xFFFF9468u; c->f[0]=RF64(ea);} // 80196388
  c->f[1]=c->f[2]+c->f[1]; // 8019638C
  fcmp(c,0,c->f[1],c->f[0]); // 80196390
  if (!crb(c,1)) { goto L_80196480; } // 80196394
  cmps(c,0,(int32_t)c->r[5],0); // 80196398
  if (crb(c,0)) { goto L_801963AC; } // 8019639C
  c->r[6]=0u+0x00000000u; // 801963A0
  c->r[5]=0u+0x00000000u; // 801963A4
  goto L_80196480; // 801963A8
L_801963AC:;
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801963AC
  c->r[0]=c->r[0]|c->r[6]; cr0(c,c->r[0]); // 801963B0
  if (crb(c,2)) { goto L_80196480; } // 801963B4
  c->r[5]=0u+0xBFF00000u; // 801963B8
  c->r[6]=0u+0x00000000u; // 801963BC
  goto L_80196480; // 801963C0
L_801963C4:;
  c->r[3]=0u+0x00100000u; // 801963C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801963C8
  c->r[4]=sraw(c,c->r[0],(c->r[7])&63); // 801963CC
  c->r[0]=c->r[5]&c->r[4]; // 801963D0
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 801963D4
  if (!crb(c,2)) { goto L_801963E0; } // 801963D8
  goto L_8019648C; // 801963DC
L_801963E0:;
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[2]=RF64(ea);} // 801963E0
  {uint32_t ea=c->r[2]+0xFFFF9468u; c->f[0]=RF64(ea);} // 801963E4
  c->f[1]=c->f[2]+c->f[1]; // 801963E8
  fcmp(c,0,c->f[1],c->f[0]); // 801963EC
  if (!crb(c,1)) { goto L_80196480; } // 801963F0
  cmps(c,0,(int32_t)c->r[5],0); // 801963F4
  if (!crb(c,0)) { goto L_80196404; } // 801963F8
  c->r[0]=sraw(c,c->r[3],(c->r[7])&63); // 801963FC
  c->r[5]=c->r[5]+c->r[0]; // 80196400
L_80196404:;
  c->r[5]=c->r[5]&~c->r[4]; // 80196404
  c->r[6]=0u+0x00000000u; // 80196408
  goto L_80196480; // 8019640C
L_80196410:;
  c->f[1]=c->f[1]+c->f[1]; // 80196410
  goto L_8019648C; // 80196414
  goto L_8019648C; // 80196418
L_8019641C:;
  c->r[0]=c->r[7]+0xFFFFFFECu; // 8019641C
  c->r[3]=0u+0xFFFFFFFFu; // 80196420
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80196424
  c->r[0]=c->r[6]&c->r[4]; cr0(c,c->r[0]); // 80196428
  if (!crb(c,2)) { goto L_80196434; } // 8019642C
  goto L_8019648C; // 80196430
L_80196434:;
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[2]=RF64(ea);} // 80196434
  {uint32_t ea=c->r[2]+0xFFFF9468u; c->f[0]=RF64(ea);} // 80196438
  c->f[1]=c->f[2]+c->f[1]; // 8019643C
  fcmp(c,0,c->f[1],c->f[0]); // 80196440
  if (!crb(c,1)) { goto L_80196480; } // 80196444
  cmps(c,0,(int32_t)c->r[5],0); // 80196448
  if (!crb(c,0)) { goto L_8019647C; } // 8019644C
  if (!crb(c,6)) { goto L_8019645C; } // 80196450
  c->r[5]=c->r[5]+0x00000001u; // 80196454
  goto L_8019647C; // 80196458
L_8019645C:;
  c->r[0]=addc(c,~c->r[7],0x00000034u,1); // 8019645C
  c->r[3]=0u+0x00000001u; // 80196460
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80196464
  c->r[0]=c->r[6]+c->r[0]; // 80196468
  cmpu(c,0,c->r[0],c->r[6]); // 8019646C
  if (!crb(c,0)) { goto L_80196478; } // 80196470
  c->r[5]=c->r[5]+0x00000001u; // 80196474
L_80196478:;
  c->r[6]=c->r[0]|c->r[0]; // 80196478
L_8019647C:;
  c->r[6]=c->r[6]&~c->r[4]; // 8019647C
L_80196480:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 80196480
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80196484
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80196488
L_8019648C:;
  c->r[1]=c->r[1]+0x00000010u; // 8019648C
  return; // 80196490
}

// frexp
void f_80196494(Ctx* __restrict c) {
  trace_call(0x80196494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196494
  c->r[4]=0u+0x00000000u; // 80196498
  c->r[0]=0u+0x7FF00000u; // 8019649C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801964A0
  c->r[5]=R32(c->r[1]+0x00000008u); // 801964A4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801964A8
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801964AC
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801964B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801964B4
  if (!crb(c,0)) { goto L_80196514; } // 801964B8
  c->r[0]=c->r[4]|c->r[6]; cr0(c,c->r[0]); // 801964BC
  if (!crb(c,2)) { goto L_801964C8; } // 801964C0
  goto L_80196514; // 801964C4
L_801964C8:;
  c->r[0]=0u+0x00100000u; // 801964C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801964CC
  if (!crb(c,0)) { goto L_801964F0; } // 801964D0
  {uint32_t ea=c->r[2]+0xFFFF9470u; c->f[0]=RF64(ea);} // 801964D4
  c->r[0]=0u+0xFFFFFFCAu; // 801964D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801964DC
  c->f[1]=c->f[1]*c->f[0]; // 801964E0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801964E4
  c->r[5]=R32(c->r[1]+0x00000008u); // 801964E8
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801964EC
L_801964F0:;
  c->r[0]=rotl(c->r[5],0)&0x800FFFFFu; // 801964F0
  c->r[5]=R32(c->r[3]+0x00000000u); // 801964F4
  c->r[4]=sraw(c,c->r[4],20); // 801964F8
  c->r[0]=c->r[0]|0x3FE00000u; // 801964FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80196500
  c->r[4]=c->r[4]+c->r[5]; // 80196504
  c->r[0]=c->r[4]+0xFFFFFC02u; // 80196508
  W32(c->r[3]+0x00000000u,c->r[0]); // 8019650C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80196510
L_80196514:;
  c->r[1]=c->r[1]+0x00000010u; // 80196514
  return; // 80196518
}

// ldexp
void f_8019651C(Ctx* __restrict c) {
  trace_call(0x8019651Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019651C
  c->r[0]=c->lr; // 80196520
  W32(c->r[1]+0x00000024u,c->r[0]); // 80196524
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80196528
  c->f[31]=c->f[1]; // 8019652C
  W32(c->r[1]+0x00000014u,c->r[31]); // 80196530
  c->r[31]=c->r[3]|c->r[3]; // 80196534
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80196538
  c->lr=0x80196540u; f_80188158(c); // 8019653C
  cmps(c,0,(int32_t)c->r[3],2); // 80196540
  if (!crb(c,1)) { goto L_80196554; } // 80196544
  {uint32_t ea=c->r[2]+0xFFFF9478u; c->f[0]=RF64(ea);} // 80196548
  fcmp(c,0,c->f[0],c->f[31]); // 8019654C
  if (!crb(c,2)) { goto L_8019655C; } // 80196550
L_80196554:;
  c->f[1]=c->f[31]; // 80196554
  goto L_80196670; // 80196558
L_8019655C:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 8019655C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80196560
  c->r[4]=rotl(c->r[5],12)&0x000007FFu; cr0(c,c->r[4]); // 80196564
  if (!crb(c,2)) { goto L_801965B4; } // 80196568
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 8019656C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80196570
  if (!crb(c,2)) { goto L_80196580; } // 80196574
  c->f[1]=c->f[31]; // 80196578
  goto L_80196670; // 8019657C
L_80196580:;
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[0]=RF64(ea);} // 80196580
  c->r[3]=0u+0xFFFF0000u; // 80196584
  c->r[0]=c->r[3]+0x00003CB0u; // 80196588
  c->f[31]=c->f[31]*c->f[0]; // 8019658C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80196590
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 80196594
  c->r[5]=R32(c->r[1]+0x00000008u); // 80196598
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 8019659C
  c->r[4]=c->r[3]+0xFFFFFFCAu; // 801965A0
  if (!crb(c,0)) { goto L_801965B4; } // 801965A4
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[0]=RF64(ea);} // 801965A8
  c->f[1]=c->f[0]*c->f[31]; // 801965AC
  goto L_80196670; // 801965B0
L_801965B4:;
  cmps(c,0,(int32_t)c->r[4],2047); // 801965B4
  if (!crb(c,2)) { goto L_801965C4; } // 801965B8
  c->f[1]=c->f[31]+c->f[31]; // 801965BC
  goto L_80196670; // 801965C0
L_801965C4:;
  c->r[4]=c->r[4]+c->r[31]; // 801965C4
  cmps(c,0,(int32_t)c->r[4],2046); // 801965C8
  if (!crb(c,1)) { goto L_801965E8; } // 801965CC
  c->f[2]=c->f[31]; // 801965D0
  {uint32_t ea=c->r[2]+0xFFFF9490u; c->f[1]=RF64(ea);} // 801965D4
  c->lr=0x801965DCu; f_80196250(c); // 801965D8
  {uint32_t ea=c->r[2]+0xFFFF9490u; c->f[0]=RF64(ea);} // 801965DC
  c->f[1]=c->f[0]*c->f[1]; // 801965E0
  goto L_80196670; // 801965E4
L_801965E8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801965E8
  if (!crb(c,1)) { goto L_80196608; } // 801965EC
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 801965F0
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 801965F4
  c->r[0]=c->r[3]|c->r[0]; // 801965F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801965FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80196600
  goto L_80196670; // 80196604
L_80196608:;
  cmps(c,0,(int32_t)c->r[4],-54); // 80196608
  if (crb(c,1)) { goto L_80196650; } // 8019660C
  c->r[3]=0u+0x00010000u; // 80196610
  c->r[0]=c->r[3]+0xFFFFC350u; // 80196614
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80196618
  if (!crb(c,1)) { goto L_80196638; } // 8019661C
  c->f[2]=c->f[31]; // 80196620
  {uint32_t ea=c->r[2]+0xFFFF9490u; c->f[1]=RF64(ea);} // 80196624
  c->lr=0x8019662Cu; f_80196250(c); // 80196628
  {uint32_t ea=c->r[2]+0xFFFF9490u; c->f[0]=RF64(ea);} // 8019662C
  c->f[1]=c->f[0]*c->f[1]; // 80196630
  goto L_80196670; // 80196634
L_80196638:;
  c->f[2]=c->f[31]; // 80196638
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[1]=RF64(ea);} // 8019663C
  c->lr=0x80196644u; f_80196250(c); // 80196640
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[0]=RF64(ea);} // 80196644
  c->f[1]=c->f[0]*c->f[1]; // 80196648
  goto L_80196670; // 8019664C
L_80196650:;
  c->r[0]=c->r[4]+0x00000036u; // 80196650
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 80196654
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 80196658
  {uint32_t ea=c->r[2]+0xFFFF9498u; c->f[1]=RF64(ea);} // 8019665C
  c->r[0]=c->r[3]|c->r[0]; // 80196660
  W32(c->r[1]+0x00000008u,c->r[0]); // 80196664
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80196668
  c->f[1]=c->f[1]*c->f[0]; // 8019666C
L_80196670:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80196670
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80196674
  c->r[31]=R32(c->r[1]+0x00000014u); // 80196678
  c->lr=c->r[0]; // 8019667C
  c->r[1]=c->r[1]+0x00000020u; // 80196680
  return; // 80196684
}

// modf
void f_80196688(Ctx* __restrict c) {
  trace_call(0x80196688u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196688
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8019668C
  c->r[5]=R32(c->r[1]+0x00000008u); // 80196690
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80196694
  c->r[4]=rotl(c->r[5],12)&0x000007FFu; // 80196698
  c->r[7]=c->r[4]+0xFFFFFC01u; // 8019669C
  cmps(c,0,(int32_t)c->r[7],20); // 801966A0
  if (!crb(c,0)) { goto L_80196714; } // 801966A4
  cmps(c,0,(int32_t)c->r[7],0); // 801966A8
  if (!crb(c,0)) { goto L_801966C4; } // 801966AC
  c->r[4]=rotl(c->r[5],0)&0x80000000u; // 801966B0
  c->r[0]=0u+0x00000000u; // 801966B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801966B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801966BC
  goto L_8019677C; // 801966C0
L_801966C4:;
  c->r[4]=0u+0x00100000u; // 801966C4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801966C8
  c->r[4]=sraw(c,c->r[0],(c->r[7])&63); // 801966CC
  c->r[0]=c->r[5]&c->r[4]; // 801966D0
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 801966D4
  if (!crb(c,2)) { goto L_801966F8; } // 801966D8
  c->r[4]=rotl(c->r[5],0)&0x80000000u; // 801966DC
  c->r[0]=0u+0x00000000u; // 801966E0
  W32(c->r[1]+0x00000008u,c->r[4]); // 801966E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801966E8
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 801966EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801966F0
  goto L_8019677C; // 801966F4
L_801966F8:;
  c->r[4]=c->r[5]&~c->r[4]; // 801966F8
  c->r[0]=0u+0x00000000u; // 801966FC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80196700
  W32(c->r[3]+0x00000004u,c->r[0]); // 80196704
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=RF64(ea);} // 80196708
  c->f[1]=c->f[1]-c->f[0]; // 8019670C
  goto L_8019677C; // 80196710
L_80196714:;
  cmps(c,0,(int32_t)c->r[7],51); // 80196714
  if (!crb(c,1)) { goto L_80196738; } // 80196718
  c->r[4]=rotl(c->r[5],0)&0x80000000u; // 8019671C
  c->r[0]=0u+0x00000000u; // 80196720
  W32(c->r[1]+0x00000008u,c->r[4]); // 80196724
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80196728
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 8019672C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80196730
  goto L_8019677C; // 80196734
L_80196738:;
  c->r[0]=c->r[7]+0xFFFFFFECu; // 80196738
  c->r[4]=0u+0xFFFFFFFFu; // 8019673C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]>>((c->r[0])&31)); // 80196740
  c->r[0]=c->r[6]&c->r[4]; cr0(c,c->r[0]); // 80196744
  if (!crb(c,2)) { goto L_80196768; } // 80196748
  c->r[4]=rotl(c->r[5],0)&0x80000000u; // 8019674C
  c->r[0]=0u+0x00000000u; // 80196750
  W32(c->r[1]+0x00000008u,c->r[4]); // 80196754
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80196758
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 8019675C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80196760
  goto L_8019677C; // 80196764
L_80196768:;
  c->r[0]=c->r[6]&~c->r[4]; // 80196768
  W32(c->r[3]+0x00000000u,c->r[5]); // 8019676C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80196770
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=RF64(ea);} // 80196774
  c->f[1]=c->f[1]-c->f[0]; // 80196778
L_8019677C:;
  c->r[1]=c->r[1]+0x00000010u; // 8019677C
  return; // 80196780
}

// fn_80196784
void f_80196784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196784
  c->r[0]=c->lr; // 80196788
  c->r[3]=0u+0x3FE90000u; // 8019678C
  {uint32_t ea=c->r[2]+0xFFFF94A0u; c->f[2]=RF64(ea);} // 80196790
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80196794
  W32(c->r[1]+0x00000024u,c->r[0]); // 80196798
  c->r[0]=c->r[3]+0x000021FBu; // 8019679C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801967A0
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801967A4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801967A8
  if (crb(c,1)) { goto L_801967BC; } // 801967AC
  c->r[3]=0u+0x00000000u; // 801967B0
  c->lr=0x801967B8u; f_80195BC4(c); // 801967B4
  goto L_80196840; // 801967B8
L_801967BC:;
  c->r[0]=0u+0x7FF00000u; // 801967BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801967C0
  if (crb(c,0)) { goto L_801967D0; } // 801967C4
  c->f[1]=c->f[1]-c->f[1]; // 801967C8
  goto L_80196840; // 801967CC
L_801967D0:;
  c->r[3]=c->r[1]+0x00000010u; // 801967D0
  c->lr=0x801967D8u; f_80194078(c); // 801967D4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 801967D8
  if (crb(c,2)) { goto L_801967F4; } // 801967DC
  cmps(c,0,(int32_t)c->r[0],1); // 801967E0
  if (crb(c,2)) { goto L_80196808; } // 801967E4
  cmps(c,0,(int32_t)c->r[0],2); // 801967E8
  if (crb(c,2)) { goto L_80196818; } // 801967EC
  goto L_80196830; // 801967F0
L_801967F4:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801967F4
  c->r[3]=0u+0x00000001u; // 801967F8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801967FC
  c->lr=0x80196804u; f_80195BC4(c); // 80196800
  goto L_80196840; // 80196804
L_80196808:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80196808
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 8019680C
  c->lr=0x80196814u; f_801943FC(c); // 80196810
  goto L_80196840; // 80196814
L_80196818:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80196818
  c->r[3]=0u+0x00000001u; // 8019681C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 80196820
  c->lr=0x80196828u; f_80195BC4(c); // 80196824
  c->f[1]=-c->f[1]; // 80196828
  goto L_80196840; // 8019682C
L_80196830:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80196830
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 80196834
  c->lr=0x8019683Cu; f_801943FC(c); // 80196838
  c->f[1]=-c->f[1]; // 8019683C
L_80196840:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80196840
  c->lr=c->r[0]; // 80196844
  c->r[1]=c->r[1]+0x00000020u; // 80196848
  return; // 8019684C
}

// tan
void f_80196850(Ctx* __restrict c) {
  trace_call(0x80196850u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196850
  c->r[0]=c->lr; // 80196854
  c->r[3]=0u+0x3FE90000u; // 80196858
  {uint32_t ea=c->r[2]+0xFFFF94A8u; c->f[2]=RF64(ea);} // 8019685C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80196860
  W32(c->r[1]+0x00000024u,c->r[0]); // 80196864
  c->r[0]=c->r[3]+0x000021FBu; // 80196868
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019686C
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 80196870
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80196874
  if (crb(c,1)) { goto L_80196888; } // 80196878
  c->r[3]=0u+0x00000001u; // 8019687C
  c->lr=0x80196884u; f_80195C84(c); // 80196880
  goto L_801968B8; // 80196884
L_80196888:;
  c->r[0]=0u+0x7FF00000u; // 80196888
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8019688C
  if (crb(c,0)) { goto L_8019689C; } // 80196890
  c->f[1]=c->f[1]-c->f[1]; // 80196894
  goto L_801968B8; // 80196898
L_8019689C:;
  c->r[3]=c->r[1]+0x00000010u; // 8019689C
  c->lr=0x801968A4u; f_80194078(c); // 801968A0
  c->r[0]=rotl(c->r[3],1)&0x00000002u; // 801968A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801968A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801968AC
  c->r[3]=addc(c,~c->r[0],0x00000001u,1); // 801968B0
  c->lr=0x801968B8u; f_80195C84(c); // 801968B4
L_801968B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801968B8
  c->lr=c->r[0]; // 801968BC
  c->r[1]=c->r[1]+0x00000020u; // 801968C0
  return; // 801968C4
}

// fn_801968C8
void f_801968C8(Ctx* __restrict c) {
  f_80192730(c); return; // 801968C8
}

// fn_801968CC
void f_801968CC(Ctx* __restrict c) {
  f_801929FC(c); return; // 801968CC
}

// fn_801968D0
void f_801968D0(Ctx* __restrict c) {
  f_80192C94(c); return; // 801968D0
}

// fn_801968D4
void f_801968D4(Ctx* __restrict c) {
  f_80192EEC(c); return; // 801968D4
}

// fn_801968D8
void f_801968D8(Ctx* __restrict c) {
  f_8019311C(c); return; // 801968D8
}

// fn_801968DC
void f_801968DC(Ctx* __restrict c) {
  f_8019349C(c); return; // 801968DC
}

// fn_801968E0
void f_801968E0(Ctx* __restrict c) {
  f_80193750(c); return; // 801968E0
}

// fn_801968E4
void f_801968E4(Ctx* __restrict c) {
  f_80193864(c); return; // 801968E4
}

// fn_801968E8
void f_801968E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801968E8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801968EC
  c->r[6]=R32(c->r[1]+0x00000008u); // 801968F0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801968F4
  c->r[3]=rotl(c->r[6],0)&0x7FF00000u; // 801968F8
  c->r[3]=c->r[3]+0x80100000u; // 801968FC
  cmpu(c,0,c->r[3],0x00000000u); // 80196900
  if (!crb(c,2)) { goto L_8019691C; } // 80196904
  c->f[0]=c->f[1]*c->f[1]; // 80196908
  c->r[0]=0u+0x00000021u; // 8019690C
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80196910
  c->f[1]=c->f[1]+c->f[0]; // 80196914
  goto L_80196B28; // 80196918
L_8019691C:;
  cmps(c,1,(int32_t)c->r[6],0); // 8019691C
  if (crb(c,5)) { goto L_8019694C; } // 80196920
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 80196924
  c->r[3]=c->r[0]|c->r[3]; cr0(c,c->r[3]); // 80196928
  if (!crb(c,2)) { goto L_80196934; } // 8019692C
  goto L_80196B28; // 80196930
L_80196934:;
  if (!crb(c,4)) { goto L_8019694C; } // 80196934
  c->r[3]=0u+0x80440000u; // 80196938
  c->r[0]=0u+0x00000021u; // 8019693C
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 80196940
  {uint32_t ea=c->r[3]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80196944
  goto L_80196B28; // 80196948
L_8019694C:;
  c->r[3]=sraw(c,c->r[6],20); cr0(c,c->r[3]); // 8019694C
  if (!crb(c,2)) { goto L_801969A0; } // 80196950
  goto L_80196968; // 80196954
L_80196958:;
  c->r[4]=rotl(c->r[0],21)&0x001FFFFFu; // 80196958
  c->r[0]=rotl(c->r[0],21)&0xFFE00000u; // 8019695C
  c->r[6]=c->r[6]|c->r[4]; // 80196960
  c->r[3]=c->r[3]+0xFFFFFFEBu; // 80196964
L_80196968:;
  cmps(c,0,(int32_t)c->r[6],0); // 80196968
  if (crb(c,2)) { IRQCHK(c); goto L_80196958; } // 8019696C
  c->r[7]=0u+0x00000000u; // 80196970
  goto L_80196980; // 80196974
L_80196978:;
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80196978
  c->r[7]=c->r[7]+0x00000001u; // 8019697C
L_80196980:;
  c->r[4]=rotl(c->r[6],0)&0x00100000u; cr0(c,c->r[4]); // 80196980
  if (crb(c,2)) { IRQCHK(c); goto L_80196978; } // 80196984
  c->r[4]=addc(c,~c->r[7],0x00000020u,1); // 80196988
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 8019698C
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 80196990
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 80196994
  c->r[3]=c->r[3]-c->r[5]; // 80196998
  c->r[6]=c->r[6]|c->r[4]; // 8019699C
L_801969A0:;
  c->r[4]=c->r[3]+0xFFFFFC01u; // 801969A0
  c->r[5]=rotl(c->r[6],0)&0x000FFFFFu; // 801969A4
  c->r[4]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[4]); // 801969A8
  c->r[6]=c->r[5]|0x00100000u; // 801969AC
  if (crb(c,2)) { goto L_801969C4; } // 801969B0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801969B4
  c->r[4]=c->r[6]+c->r[6]; // 801969B8
  c->r[6]=c->r[5]+c->r[4]; // 801969BC
  c->r[0]=c->r[0]+c->r[0]; // 801969C0
L_801969C4:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801969C4
  c->r[4]=c->r[6]+c->r[6]; // 801969C8
  c->r[6]=c->r[5]+c->r[4]; // 801969CC
  c->r[0]=c->r[0]+c->r[0]; // 801969D0
  c->r[9]=0u+0x00000000u; // 801969D4
  c->r[11]=0u+0x00000000u; // 801969D8
  c->r[10]=0u+0x00000000u; // 801969DC
  c->r[12]=0u+0x00000000u; // 801969E0
  c->r[7]=0u+0x00200000u; // 801969E4
  goto L_80196A18; // 801969E8
L_801969EC:;
  c->r[4]=c->r[11]+c->r[7]; // 801969EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801969F0
  if (crb(c,1)) { goto L_80196A04; } // 801969F4
  c->r[11]=c->r[4]+c->r[7]; // 801969F8
  c->r[6]=c->r[6]-c->r[4]; // 801969FC
  c->r[12]=c->r[12]+c->r[7]; // 80196A00
L_80196A04:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80196A04
  c->r[4]=c->r[6]+c->r[6]; // 80196A08
  c->r[6]=c->r[5]+c->r[4]; // 80196A0C
  c->r[0]=c->r[0]+c->r[0]; // 80196A10
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 80196A14
L_80196A18:;
  cmps(c,0,(int32_t)c->r[7],0); // 80196A18
  if (!crb(c,2)) { IRQCHK(c); goto L_801969EC; } // 80196A1C
  c->r[7]=0u+0x80000000u; // 80196A20
  goto L_80196A90; // 80196A24
L_80196A28:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[6]); // 80196A28
  c->r[5]=c->r[11]|c->r[11]; // 80196A2C
  c->r[8]=c->r[9]+c->r[7]; // 80196A30
  if (crb(c,0)) { goto L_80196A44; } // 80196A34
  if (!crb(c,2)) { goto L_80196A7C; } // 80196A38
  cmpu(c,0,c->r[8],c->r[0]); // 80196A3C
  if (crb(c,1)) { goto L_80196A7C; } // 80196A40
L_80196A44:;
  c->r[4]=rotl(c->r[8],0)&0x80000000u; // 80196A44
  c->r[9]=c->r[8]+c->r[7]; // 80196A48
  c->r[4]=c->r[4]+0x80000000u; // 80196A4C
  cmpu(c,0,c->r[4],0x00000000u); // 80196A50
  if (!crb(c,2)) { goto L_80196A64; } // 80196A54
  c->r[4]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[4]); // 80196A58
  if (!crb(c,2)) { goto L_80196A64; } // 80196A5C
  c->r[11]=c->r[11]+0x00000001u; // 80196A60
L_80196A64:;
  cmpu(c,0,c->r[0],c->r[8]); // 80196A64
  c->r[6]=c->r[6]-c->r[5]; // 80196A68
  if (!crb(c,0)) { goto L_80196A74; } // 80196A6C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80196A70
L_80196A74:;
  c->r[0]=c->r[0]-c->r[8]; // 80196A74
  c->r[10]=c->r[10]+c->r[7]; // 80196A78
L_80196A7C:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80196A7C
  c->r[4]=c->r[6]+c->r[6]; // 80196A80
  c->r[6]=c->r[5]+c->r[4]; // 80196A84
  c->r[0]=c->r[0]+c->r[0]; // 80196A88
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 80196A8C
L_80196A90:;
  cmps(c,0,(int32_t)c->r[7],0); // 80196A90
  if (!crb(c,2)) { IRQCHK(c); goto L_80196A28; } // 80196A94
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 80196A98
  if (crb(c,2)) { goto L_80196AF4; } // 80196A9C
  {uint32_t ea=c->r[2]+0xFFFF94B0u; c->f[0]=RF64(ea);} // 80196AA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80196AA4
  fcmp(c,0,c->f[0],c->f[0]); // 80196AA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80196AAC
  if (!crb(c,2)) { goto L_80196AF4; } // 80196AB0
  c->r[0]=c->r[10]+0x00010000u; // 80196AB4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80196AB8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80196ABC
  if (!crb(c,2)) { goto L_80196AD0; } // 80196AC0
  c->r[10]=0u+0x00000000u; // 80196AC4
  c->r[12]=c->r[12]+0x00000001u; // 80196AC8
  goto L_80196AF4; // 80196ACC
L_80196AD0:;
  fcmp(c,0,c->f[0],c->f[0]); // 80196AD0
  if (!crb(c,1)) { goto L_80196AEC; } // 80196AD4
  cmpu(c,0,c->r[0],0x0000FFFEu); // 80196AD8
  if (!crb(c,2)) { goto L_80196AE4; } // 80196ADC
  c->r[12]=c->r[12]+0x00000001u; // 80196AE0
L_80196AE4:;
  c->r[10]=c->r[10]+0x00000002u; // 80196AE4
  goto L_80196AF4; // 80196AE8
L_80196AEC:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; // 80196AEC
  c->r[10]=c->r[10]+c->r[0]; // 80196AF0
L_80196AF4:;
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 80196AF4
  c->r[4]=sraw(c,c->r[12],1); // 80196AF8
  cmps(c,0,(int32_t)c->r[0],1); // 80196AFC
  c->r[5]=rotl(c->r[10],31)&0x7FFFFFFFu; // 80196B00
  c->r[4]=c->r[4]+0x3FE00000u; // 80196B04
  if (!crb(c,2)) { goto L_80196B10; } // 80196B08
  c->r[5]=c->r[5]|0x80000000u; // 80196B0C
L_80196B10:;
  c->r[0]=c->r[3]+0xFFFFFC01u; // 80196B10
  W32(c->r[1]+0x00000014u,c->r[5]); // 80196B14
  c->r[0]=rotl(c->r[0],19)&0xFFF00000u; // 80196B18
  c->r[4]=c->r[4]+c->r[0]; // 80196B1C
  W32(c->r[1]+0x00000010u,c->r[4]); // 80196B20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80196B24
L_80196B28:;
  c->r[1]=c->r[1]+0x00000020u; // 80196B28
  return; // 80196B2C
}

// fn_80196B30
void f_80196B30(Ctx* __restrict c) {
  return; // 80196B30
}

// fn_80196B34
void f_80196B34(Ctx* __restrict c) {
  f_8019651C(c); return; // 80196B34
}

// fn_80196B38
void f_80196B38(Ctx* __restrict c) {
  f_801968E8(c); return; // 80196B38
}

// fn_80196B3C
void f_80196B3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196B3C
  c->r[0]=c->lr; // 80196B40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80196B44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80196B48
  c->r[31]=c->r[3]|c->r[3]; // 80196B4C
  c->r[3]=R32(c->r[4]+0x00000000u); // 80196B50
  c->r[4]=R32(c->r[13]+0xFFFF9268u); // 80196B54
  c->lr=0x80196B5Cu; f_80190160(c); // 80196B58
  c->r[0]=cntlz(c->r[3]); // 80196B5C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80196B60
  if (crb(c,2)) { goto L_80196B70; } // 80196B64
  c->r[3]=c->r[31]+0x0000000Cu; // 80196B68
  goto L_80196B74; // 80196B6C
L_80196B70:;
  c->r[3]=0u+0x00000000u; // 80196B70
L_80196B74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80196B74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80196B78
  c->lr=c->r[0]; // 80196B7C
  c->r[1]=c->r[1]+0x00000010u; // 80196B80
  return; // 80196B84
}

// fn_80196B88
void f_80196B88(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80196B88
  f_800D6AE0(c); return; // 80196B8C
}

// dtor_80196B90
void f_80196B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196B90
  c->r[0]=c->lr; // 80196B94
  cmps(c,0,(int32_t)c->r[3],0); // 80196B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80196B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80196BA0
  c->r[31]=c->r[4]|c->r[4]; // 80196BA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80196BA8
  c->r[30]=c->r[3]|c->r[3]; // 80196BAC
  if (crb(c,2)) { goto L_80196BD4; } // 80196BB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80196BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80196BB8
  if (crb(c,2)) { goto L_80196BC4; } // 80196BBC
  c->lr=0x80196BC4u; f_800D6AE0(c); // 80196BC0
L_80196BC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80196BC4
  if (!crb(c,1)) { goto L_80196BD4; } // 80196BC8
  c->r[3]=c->r[30]|c->r[30]; // 80196BCC
  c->lr=0x80196BD4u; f_800D6AD0(c); // 80196BD0
L_80196BD4:;
  c->r[3]=c->r[30]|c->r[30]; // 80196BD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80196BD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80196BDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80196BE0
  c->lr=c->r[0]; // 80196BE4
  c->r[1]=c->r[1]+0x00000010u; // 80196BE8
  return; // 80196BEC
}

// fn_80196BF0
void f_80196BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196BF0
  c->r[0]=c->lr; // 80196BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80196BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80196BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80196C00
  c->r[31]=c->r[3]|c->r[3]; // 80196C04
  if (crb(c,2)) { goto L_80196C18; } // 80196C08
  cmps(c,0,(int32_t)c->r[4],0); // 80196C0C
  if (!crb(c,1)) { goto L_80196C18; } // 80196C10
  c->lr=0x80196C18u; f_800D6AD0(c); // 80196C14
L_80196C18:;
  c->r[3]=c->r[31]|c->r[31]; // 80196C18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80196C1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80196C20
  c->lr=c->r[0]; // 80196C24
  c->r[1]=c->r[1]+0x00000010u; // 80196C28
  return; // 80196C2C
}

// fn_80196C30
void f_80196C30(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 80196C30
  return; // 80196C34
}

// fn_80196C38
void f_80196C38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196C38
  c->r[0]=c->lr; // 80196C3C
  cmps(c,0,(int32_t)c->r[3],0); // 80196C40
  W32(c->r[1]+0x00000034u,c->r[0]); // 80196C44
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80196C48
  c->r[31]=c->r[1]|c->r[1]; // 80196C4C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80196C50
  c->r[30]=c->r[4]|c->r[4]; // 80196C54
  W32(c->r[1]+0x00000024u,c->r[29]); // 80196C58
  c->r[29]=c->r[3]|c->r[3]; // 80196C5C
  if (crb(c,2)) { goto L_80196CA0; } // 80196C60
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 80196C64
  if (crb(c,2)) { goto L_80196C90; } // 80196C68
  if (crb(c,2)) { goto L_80196C90; } // 80196C6C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80196C70
  cmps(c,0,(int32_t)c->r[3],0); // 80196C74
  if (crb(c,2)) { goto L_80196C90; } // 80196C78
  c->lr=0x80196C80u; f_80196E44(c); // 80196C7C
  goto L_80196C90; // 80196C80
  c->r[3]=c->r[31]+0x00000008u; // 80196C84
  c->lr=0x80196C8Cu; f_801876A4(c); // 80196C88
L_80196C8C:;
  IRQCHK(c); goto L_80196C8C; // 80196C8C
L_80196C90:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 80196C90
  if (!crb(c,1)) { goto L_80196CA0; } // 80196C94
  c->r[3]=c->r[29]|c->r[29]; // 80196C98
  c->lr=0x80196CA0u; f_800D6AD0(c); // 80196C9C
L_80196CA0:;
  c->r[10]=c->r[31]|c->r[31]; // 80196CA0
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80196CA4
  c->r[3]=c->r[29]|c->r[29]; // 80196CA8
  c->r[30]=R32(c->r[10]+0x00000028u); // 80196CAC
  c->r[29]=R32(c->r[10]+0x00000024u); // 80196CB0
  c->r[10]=R32(c->r[1]+0x00000000u); // 80196CB4
  c->r[0]=R32(c->r[10]+0x00000004u); // 80196CB8
  c->r[1]=c->r[10]|c->r[10]; // 80196CBC
  c->lr=c->r[0]; // 80196CC0
  return; // 80196CC4
}

// fn_80196CC8
void f_80196CC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196CC8
  c->r[0]=c->lr; // 80196CCC
  cmps(c,0,(int32_t)c->r[3],0); // 80196CD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80196CD4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80196CD8
  c->r[31]=c->r[1]|c->r[1]; // 80196CDC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80196CE0
  c->r[30]=c->r[4]|c->r[4]; // 80196CE4
  W32(c->r[1]+0x00000024u,c->r[29]); // 80196CE8
  c->r[29]=c->r[3]|c->r[3]; // 80196CEC
  if (crb(c,2)) { goto L_80196D34; } // 80196CF0
  if (crb(c,2)) { goto L_80196D24; } // 80196CF4
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 80196CF8
  if (crb(c,2)) { goto L_80196D24; } // 80196CFC
  if (crb(c,2)) { goto L_80196D24; } // 80196D00
  c->r[3]=R32(c->r[3]+0x00000004u); // 80196D04
  cmps(c,0,(int32_t)c->r[3],0); // 80196D08
  if (crb(c,2)) { goto L_80196D24; } // 80196D0C
  c->lr=0x80196D14u; f_80196E44(c); // 80196D10
  goto L_80196D24; // 80196D14
  c->r[3]=c->r[31]+0x00000008u; // 80196D18
  c->lr=0x80196D20u; f_801876A4(c); // 80196D1C
L_80196D20:;
  IRQCHK(c); goto L_80196D20; // 80196D20
L_80196D24:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 80196D24
  if (!crb(c,1)) { goto L_80196D34; } // 80196D28
  c->r[3]=c->r[29]|c->r[29]; // 80196D2C
  c->lr=0x80196D34u; f_800D6AD0(c); // 80196D30
L_80196D34:;
  c->r[10]=c->r[31]|c->r[31]; // 80196D34
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80196D38
  c->r[3]=c->r[29]|c->r[29]; // 80196D3C
  c->r[30]=R32(c->r[10]+0x00000028u); // 80196D40
  c->r[29]=R32(c->r[10]+0x00000024u); // 80196D44
  c->r[10]=R32(c->r[1]+0x00000000u); // 80196D48
  c->r[0]=R32(c->r[10]+0x00000004u); // 80196D4C
  c->r[1]=c->r[10]|c->r[10]; // 80196D50
  c->lr=c->r[0]; // 80196D54
  return; // 80196D58
}

// fn_80196D5C
void f_80196D5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196D5C
  c->r[0]=c->lr; // 80196D60
  cmps(c,0,(int32_t)c->r[3],0); // 80196D64
  W32(c->r[1]+0x00000034u,c->r[0]); // 80196D68
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80196D6C
  c->r[31]=c->r[1]|c->r[1]; // 80196D70
  W32(c->r[1]+0x00000028u,c->r[30]); // 80196D74
  c->r[30]=c->r[4]|c->r[4]; // 80196D78
  W32(c->r[1]+0x00000024u,c->r[29]); // 80196D7C
  c->r[29]=c->r[3]|c->r[3]; // 80196D80
  if (crb(c,2)) { goto L_80196DC8; } // 80196D84
  if (crb(c,2)) { goto L_80196DB8; } // 80196D88
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 80196D8C
  if (crb(c,2)) { goto L_80196DB8; } // 80196D90
  if (crb(c,2)) { goto L_80196DB8; } // 80196D94
  c->r[3]=R32(c->r[3]+0x00000004u); // 80196D98
  cmps(c,0,(int32_t)c->r[3],0); // 80196D9C
  if (crb(c,2)) { goto L_80196DB8; } // 80196DA0
  c->lr=0x80196DA8u; f_80196E44(c); // 80196DA4
  goto L_80196DB8; // 80196DA8
  c->r[3]=c->r[31]+0x00000008u; // 80196DAC
  c->lr=0x80196DB4u; f_801876A4(c); // 80196DB0
L_80196DB4:;
  IRQCHK(c); goto L_80196DB4; // 80196DB4
L_80196DB8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 80196DB8
  if (!crb(c,1)) { goto L_80196DC8; } // 80196DBC
  c->r[3]=c->r[29]|c->r[29]; // 80196DC0
  c->lr=0x80196DC8u; f_800D6AD0(c); // 80196DC4
L_80196DC8:;
  c->r[10]=c->r[31]|c->r[31]; // 80196DC8
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80196DCC
  c->r[3]=c->r[29]|c->r[29]; // 80196DD0
  c->r[30]=R32(c->r[10]+0x00000028u); // 80196DD4
  c->r[29]=R32(c->r[10]+0x00000024u); // 80196DD8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80196DDC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80196DE0
  c->r[1]=c->r[10]|c->r[10]; // 80196DE4
  c->lr=c->r[0]; // 80196DE8
  return; // 80196DEC
}

// fn_80196DF0
void f_80196DF0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[13]+0xFFFFA0C0u); // 80196DF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80196DF4
  if (!crb(c,2)) { goto L_80196E04; } // 80196DF8
  c->r[0]=0u+0x00000001u; // 80196DFC
  W8(c->r[13]+0xFFFFA0C0u,c->r[0]); // 80196E00
L_80196E04:;
  c->r[0]=R8(c->r[13]+0xFFFFA0C1u); // 80196E04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80196E08
  if (!crb(c,2)) { goto L_80196E18; } // 80196E0C
  c->r[0]=0u+0x00000001u; // 80196E10
  W8(c->r[13]+0xFFFFA0C1u,c->r[0]); // 80196E14
L_80196E18:;
  c->r[0]=R8(c->r[13]+0xFFFFA0C2u); // 80196E18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80196E1C
  if (!crb(c,2)) { goto L_80196E2C; } // 80196E20
  c->r[0]=0u+0x00000001u; // 80196E24
  W8(c->r[13]+0xFFFFA0C2u,c->r[0]); // 80196E28
L_80196E2C:;
  c->r[0]=R8(c->r[13]+0xFFFFA0C3u); // 80196E2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80196E30
  if (!crb(c,2)) return; // 80196E34
  c->r[0]=0u+0x00000001u; // 80196E38
  W8(c->r[13]+0xFFFFA0C3u,c->r[0]); // 80196E3C
  return; // 80196E40
}

// fn_80196E44
void f_80196E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196E44
  c->r[0]=c->lr; // 80196E48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80196E4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80196E50
  c->r[31]=c->r[3]|c->r[3]; // 80196E54
  c->r[0]=R32(c->r[3]+0x00000004u); // 80196E58
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80196E5C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80196E60
  if (!crb(c,2)) { goto L_80196EA8; } // 80196E64
  c->r[12]=R32(c->r[3]+0x00000000u); // 80196E68
  c->r[12]=R32(c->r[12]+0x00000010u); // 80196E6C
  c->ctr=c->r[12]; // 80196E70
  if (true) { c->lr=0x80196E78u; dispatch(c,c->ctr); } // 80196E74
  c->r[0]=R32(c->r[31]+0x00000008u); // 80196E78
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80196E7C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80196E80
  if (!crb(c,2)) { goto L_80196EA8; } // 80196E84
  cmps(c,0,(int32_t)c->r[31],0); // 80196E88
  if (crb(c,2)) { goto L_80196EA8; } // 80196E8C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80196E90
  c->r[3]=c->r[31]|c->r[31]; // 80196E94
  c->r[4]=0u+0x00000001u; // 80196E98
  c->r[12]=R32(c->r[12]+0x00000008u); // 80196E9C
  c->ctr=c->r[12]; // 80196EA0
  if (true) { c->lr=0x80196EA8u; dispatch(c,c->ctr); } // 80196EA4
L_80196EA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80196EA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80196EAC
  c->lr=c->r[0]; // 80196EB0
  c->r[1]=c->r[1]+0x00000010u; // 80196EB4
  return; // 80196EB8
}

// SetExiInterruptMask
void f_80196EBC(Ctx* __restrict c) {
  trace_call(0x80196EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196EBC
  c->r[0]=c->lr; // 80196EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80196EC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80196EC8
  c->r[31]=c->r[4]|c->r[4]; // 80196ECC
  c->r[5]=0u+0x80390000u; // 80196ED0
  c->r[5]=c->r[5]+0xFFFFF990u; // 80196ED4
  cmps(c,0,(int32_t)c->r[3],1); // 80196ED8
  if (crb(c,2)) { goto L_80196F38; } // 80196EDC
  if (!crb(c,0)) { goto L_80196EF0; } // 80196EE0
  cmps(c,0,(int32_t)c->r[3],0); // 80196EE4
  if (!crb(c,0)) { goto L_80196EFC; } // 80196EE8
  goto L_80196F98; // 80196EEC
L_80196EF0:;
  cmps(c,0,(int32_t)c->r[3],3); // 80196EF0
  if (!crb(c,0)) { goto L_80196F98; } // 80196EF4
  goto L_80196F68; // 80196EF8
L_80196EFC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80196EFC
  cmps(c,0,(int32_t)c->r[0],0); // 80196F00
  if (!crb(c,2)) { goto L_80196F14; } // 80196F04
  c->r[0]=R32(c->r[5]+0x00000080u); // 80196F08
  cmps(c,0,(int32_t)c->r[0],0); // 80196F0C
  if (crb(c,2)) { goto L_80196F20; } // 80196F10
L_80196F14:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80196F14
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80196F18
  if (crb(c,2)) { goto L_80196F2C; } // 80196F1C
L_80196F20:;
  c->r[3]=0u+0x00410000u; // 80196F20
  c->lr=0x80196F28u; f_80160FF8(c); // 80196F24
  goto L_80196F98; // 80196F28
L_80196F2C:;
  c->r[3]=0u+0x00410000u; // 80196F2C
  c->lr=0x80196F34u; f_80161078(c); // 80196F30
  goto L_80196F98; // 80196F34
L_80196F38:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80196F38
  cmps(c,0,(int32_t)c->r[0],0); // 80196F3C
  if (crb(c,2)) { goto L_80196F50; } // 80196F40
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80196F44
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80196F48
  if (crb(c,2)) { goto L_80196F5C; } // 80196F4C
L_80196F50:;
  c->r[3]=0u+0x00080000u; // 80196F50
  c->lr=0x80196F58u; f_80160FF8(c); // 80196F54
  goto L_80196F98; // 80196F58
L_80196F5C:;
  c->r[3]=0u+0x00080000u; // 80196F5C
  c->lr=0x80196F64u; f_80161078(c); // 80196F60
  goto L_80196F98; // 80196F64
L_80196F68:;
  c->r[3]=0u+0x00000019u; // 80196F68
  c->lr=0x80196F70u; f_80160CC8(c); // 80196F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80196F70
  if (crb(c,2)) { goto L_80196F84; } // 80196F74
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80196F78
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80196F7C
  if (crb(c,2)) { goto L_80196F90; } // 80196F80
L_80196F84:;
  c->r[3]=0u+0x00000040u; // 80196F84
  c->lr=0x80196F8Cu; f_80160FF8(c); // 80196F88
  goto L_80196F98; // 80196F8C
L_80196F90:;
  c->r[3]=0u+0x00000040u; // 80196F90
  c->lr=0x80196F98u; f_80161078(c); // 80196F94
L_80196F98:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80196F98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80196F9C
  c->lr=c->r[0]; // 80196FA0
  c->r[1]=c->r[1]+0x00000010u; // 80196FA4
  return; // 80196FA8
}

// EXIImm
void f_80196FAC(Ctx* __restrict c) {
  trace_call(0x80196FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80196FAC
  c->r[0]=c->lr; // 80196FB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80196FB4
  c->r[11]=c->r[1]+0x00000030u; // 80196FB8
  c->lr=0x80196FC0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80196FBC
  c->r[26]=c->r[3]|c->r[3]; // 80196FC0
  c->r[27]=c->r[4]|c->r[4]; // 80196FC4
  c->r[28]=c->r[5]|c->r[5]; // 80196FC8
  c->r[29]=c->r[6]|c->r[6]; // 80196FCC
  c->r[25]=c->r[7]|c->r[7]; // 80196FD0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 80196FD4
  c->r[3]=0u+0x80390000u; // 80196FD8
  c->r[3]=c->r[3]+0xFFFFF990u; // 80196FDC
  c->r[31]=c->r[3]+c->r[0]; // 80196FE0
  c->lr=0x80196FE8u; f_80160C68(c); // 80196FE4
  c->r[30]=c->r[3]|c->r[3]; // 80196FE8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80196FEC
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 80196FF0
  if (!crb(c,2)) { goto L_80197004; } // 80196FF4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80196FF8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80196FFC
  if (!crb(c,2)) { goto L_80197014; } // 80197000
L_80197004:;
  c->r[3]=c->r[30]|c->r[30]; // 80197004
  c->lr=0x8019700Cu; f_80160C90(c); // 80197008
  c->r[3]=0u+0x00000000u; // 8019700C
  goto L_80197210; // 80197010
L_80197014:;
  W32(c->r[31]+0x00000004u,c->r[25]); // 80197014
  cmps(c,0,(int32_t)c->r[25],0); // 80197018
  if (crb(c,2)) { goto L_80197050; } // 8019701C
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 80197020
  c->r[0]=0u+0xCD000000u; // 80197024
  c->r[3]=c->r[0]+c->r[3]; // 80197028
  c->r[0]=R32(c->r[3]+0x00006800u); // 8019702C
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 80197030
  c->r[0]=c->r[0]|0x00000008u; // 80197034
  W32(c->r[3]+0x00006800u,c->r[0]); // 80197038
  c->r[3]=0u+0x00200000u; // 8019703C
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80197040
  c->r[0]=c->r[0]-c->r[26]; // 80197044
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80197048
  c->lr=0x80197050u; f_80161078(c); // 8019704C
L_80197050:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197050
  c->r[0]=c->r[0]|0x00000002u; // 80197054
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80197058
  cmps(c,0,(int32_t)c->r[29],0); // 8019705C
  if (crb(c,2)) { goto L_801971C4; } // 80197060
  c->r[0]=0u+0x00000000u; // 80197064
  c->r[4]=0u+0x00000000u; // 80197068
  cmps(c,1,(int32_t)c->r[28],0); // 8019706C
  if (!crb(c,5)) { goto L_801971B4; } // 80197070
  c->r[6]=c->r[28]+0xFFFFFFF8u; // 80197074
  cmps(c,0,(int32_t)c->r[28],8); // 80197078
  if (!crb(c,1)) { goto L_80197180; } // 8019707C
  c->r[5]=0u+0x00000000u; // 80197080
  if (crb(c,4)) { goto L_8019709C; } // 80197084
  c->r[3]=0u+0x80000000u; // 80197088
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 8019708C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 80197090
  if (crb(c,1)) { goto L_8019709C; } // 80197094
  c->r[5]=0u+0x00000001u; // 80197098
L_8019709C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8019709C
  if (crb(c,2)) { goto L_80197180; } // 801970A0
  c->r[3]=c->r[27]|c->r[27]; // 801970A4
  c->r[5]=c->r[6]+0x00000007u; // 801970A8
  c->r[5]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801970AC
  c->ctr=c->r[5]; // 801970B0
  cmps(c,0,(int32_t)c->r[6],0); // 801970B4
  if (!crb(c,1)) { goto L_80197180; } // 801970B8
L_801970BC:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 801970BC
  c->r[5]=addc(c,~c->r[4],0x00000003u,1); // 801970C0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801970C4
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 801970C8
  c->r[0]=c->r[0]|c->r[5]; // 801970CC
  c->r[6]=R8(c->r[3]+0x00000001u); // 801970D0
  c->r[5]=c->r[4]+0x00000001u; // 801970D4
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 801970D8
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801970DC
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 801970E0
  c->r[0]=c->r[0]|c->r[5]; // 801970E4
  c->r[6]=R8(c->r[3]+0x00000002u); // 801970E8
  c->r[5]=c->r[4]+0x00000002u; // 801970EC
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 801970F0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801970F4
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 801970F8
  c->r[0]=c->r[0]|c->r[5]; // 801970FC
  c->r[6]=R8(c->r[3]+0x00000003u); // 80197100
  c->r[5]=0u-c->r[4]; // 80197104
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80197108
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 8019710C
  c->r[0]=c->r[0]|c->r[5]; // 80197110
  c->r[6]=R8(c->r[3]+0x00000004u); // 80197114
  c->r[5]=c->r[4]+0x00000004u; // 80197118
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 8019711C
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80197120
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 80197124
  c->r[0]=c->r[0]|c->r[5]; // 80197128
  c->r[6]=R8(c->r[3]+0x00000005u); // 8019712C
  c->r[5]=c->r[4]+0x00000005u; // 80197130
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 80197134
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80197138
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 8019713C
  c->r[0]=c->r[0]|c->r[5]; // 80197140
  c->r[6]=R8(c->r[3]+0x00000006u); // 80197144
  c->r[5]=c->r[4]+0x00000006u; // 80197148
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 8019714C
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80197150
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 80197154
  c->r[0]=c->r[0]|c->r[5]; // 80197158
  c->r[6]=R8(c->r[3]+0x00000007u); // 8019715C
  c->r[5]=c->r[4]+0x00000007u; // 80197160
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 80197164
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80197168
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 8019716C
  c->r[0]=c->r[0]|c->r[5]; // 80197170
  c->r[3]=c->r[3]+0x00000008u; // 80197174
  c->r[4]=c->r[4]+0x00000008u; // 80197178
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801970BC; } // 8019717C
L_80197180:;
  c->r[6]=c->r[27]+c->r[4]; // 80197180
  c->r[3]=c->r[28]-c->r[4]; // 80197184
  c->ctr=c->r[3]; // 80197188
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 8019718C
  if (!crb(c,0)) { goto L_801971B4; } // 80197190
L_80197194:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 80197194
  c->r[3]=addc(c,~c->r[4],0x00000003u,1); // 80197198
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8019719C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 801971A0
  c->r[0]=c->r[0]|c->r[3]; // 801971A4
  c->r[6]=c->r[6]+0x00000001u; // 801971A8
  c->r[4]=c->r[4]+0x00000001u; // 801971AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80197194; } // 801971B0
L_801971B4:;
  c->r[4]=0u+0xCD000000u; // 801971B4
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 801971B8
  c->r[3]=c->r[4]+c->r[3]; // 801971BC
  W32(c->r[3]+0x00006810u,c->r[0]); // 801971C0
L_801971C4:;
  W32(c->r[31]+0x00000014u,c->r[27]); // 801971C4
  c->r[3]=c->r[29]+0xFFFFFFFFu; // 801971C8
  c->r[0]=addc(c,~c->r[29],0x00000001u,1); // 801971CC
  c->r[0]=c->r[3]|c->r[0]; // 801971D0
  c->r[0]=sraw(c,c->r[0],31); // 801971D4
  c->r[0]=c->r[28]&c->r[0]; // 801971D8
  W32(c->r[31]+0x00000010u,c->r[0]); // 801971DC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801971E0
  c->r[3]=c->r[0]|0x00000001u; // 801971E4
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 801971E8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801971EC
  c->r[4]=c->r[3]|c->r[0]; // 801971F0
  c->r[3]=0u+0xCD000000u; // 801971F4
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 801971F8
  c->r[3]=c->r[3]+c->r[0]; // 801971FC
  W32(c->r[3]+0x0000680Cu,c->r[4]); // 80197200
  c->r[3]=c->r[30]|c->r[30]; // 80197204
  c->lr=0x8019720Cu; f_80160C90(c); // 80197208
  c->r[3]=0u+0x00000001u; // 8019720C
L_80197210:;
  c->r[11]=c->r[1]+0x00000030u; // 80197210
  c->lr=0x80197218u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80197214
  c->r[0]=R32(c->r[1]+0x00000034u); // 80197218
  c->lr=c->r[0]; // 8019721C
  c->r[1]=c->r[1]+0x00000030u; // 80197220
  return; // 80197224
}

// EXIImmEx
void f_80197228(Ctx* __restrict c) {
  trace_call(0x80197228u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197228
  c->r[0]=c->lr; // 8019722C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80197230
  c->r[11]=c->r[1]+0x00000020u; // 80197234
  c->lr=0x8019723Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80197238
  c->r[27]=c->r[3]|c->r[3]; // 8019723C
  c->r[28]=c->r[4]|c->r[4]; // 80197240
  c->r[29]=c->r[5]|c->r[5]; // 80197244
  c->r[30]=c->r[6]|c->r[6]; // 80197248
  goto L_801972A8; // 8019724C
L_80197250:;
  cmps(c,0,(int32_t)c->r[29],4); // 80197250
  c->r[31]=0u+0x00000004u; // 80197254
  if (!crb(c,0)) { goto L_80197260; } // 80197258
  c->r[31]=c->r[29]|c->r[29]; // 8019725C
L_80197260:;
  c->r[3]=c->r[27]|c->r[27]; // 80197260
  c->r[4]=c->r[28]|c->r[28]; // 80197264
  c->r[5]=c->r[31]|c->r[31]; // 80197268
  c->r[6]=c->r[30]|c->r[30]; // 8019726C
  c->r[7]=0u+0x00000000u; // 80197270
  c->lr=0x80197278u; f_80196FAC(c); // 80197274
  cmps(c,0,(int32_t)c->r[3],0); // 80197278
  if (!crb(c,2)) { goto L_80197288; } // 8019727C
  c->r[3]=0u+0x00000000u; // 80197280
  goto L_801972B4; // 80197284
L_80197288:;
  c->r[3]=c->r[27]|c->r[27]; // 80197288
  c->lr=0x80197290u; f_801973C4(c); // 8019728C
  cmps(c,0,(int32_t)c->r[3],0); // 80197290
  if (!crb(c,2)) { goto L_801972A0; } // 80197294
  c->r[3]=0u+0x00000000u; // 80197298
  goto L_801972B4; // 8019729C
L_801972A0:;
  c->r[28]=c->r[28]+c->r[31]; // 801972A0
  c->r[29]=c->r[29]-c->r[31]; // 801972A4
L_801972A8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801972A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80197250; } // 801972AC
  c->r[3]=0u+0x00000001u; // 801972B0
L_801972B4:;
  c->r[11]=c->r[1]+0x00000020u; // 801972B4
  c->lr=0x801972BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801972B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801972BC
  c->lr=c->r[0]; // 801972C0
  c->r[1]=c->r[1]+0x00000020u; // 801972C4
  return; // 801972C8
}

// EXIDma
void f_801972CC(Ctx* __restrict c) {
  trace_call(0x801972CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801972CC
  c->r[0]=c->lr; // 801972D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801972D4
  c->r[11]=c->r[1]+0x00000030u; // 801972D8
  c->lr=0x801972E0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801972DC
  c->r[26]=c->r[3]|c->r[3]; // 801972E0
  c->r[27]=c->r[4]|c->r[4]; // 801972E4
  c->r[28]=c->r[5]|c->r[5]; // 801972E8
  c->r[29]=c->r[6]|c->r[6]; // 801972EC
  c->r[25]=c->r[7]|c->r[7]; // 801972F0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801972F4
  c->r[3]=0u+0x80390000u; // 801972F8
  c->r[3]=c->r[3]+0xFFFFF990u; // 801972FC
  c->r[31]=c->r[3]+c->r[0]; // 80197300
  c->lr=0x80197308u; f_80160C68(c); // 80197304
  c->r[30]=c->r[3]|c->r[3]; // 80197308
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8019730C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 80197310
  if (!crb(c,2)) { goto L_80197324; } // 80197314
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197318
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8019731C
  if (!crb(c,2)) { goto L_80197334; } // 80197320
L_80197324:;
  c->r[3]=c->r[30]|c->r[30]; // 80197324
  c->lr=0x8019732Cu; f_80160C90(c); // 80197328
  c->r[3]=0u+0x00000000u; // 8019732C
  goto L_801973AC; // 80197330
L_80197334:;
  W32(c->r[31]+0x00000004u,c->r[25]); // 80197334
  cmps(c,0,(int32_t)c->r[25],0); // 80197338
  if (crb(c,2)) { goto L_80197370; } // 8019733C
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 80197340
  c->r[0]=0u+0xCD000000u; // 80197344
  c->r[3]=c->r[0]+c->r[3]; // 80197348
  c->r[0]=R32(c->r[3]+0x00006800u); // 8019734C
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 80197350
  c->r[0]=c->r[0]|0x00000008u; // 80197354
  W32(c->r[3]+0x00006800u,c->r[0]); // 80197358
  c->r[3]=0u+0x00200000u; // 8019735C
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80197360
  c->r[0]=c->r[0]-c->r[26]; // 80197364
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80197368
  c->lr=0x80197370u; f_80161078(c); // 8019736C
L_80197370:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197370
  c->r[0]=c->r[0]|0x00000001u; // 80197374
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80197378
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 8019737C
  c->r[4]=rotl(c->r[27],0)&0xFFFFFFE0u; // 80197380
  c->r[0]=0u+0xCD000000u; // 80197384
  c->r[3]=c->r[0]+c->r[3]; // 80197388
  W32(c->r[3]+0x00006804u,c->r[4]); // 8019738C
  W32(c->r[3]+0x00006808u,c->r[28]); // 80197390
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80197394
  c->r[0]=c->r[0]|0x00000003u; // 80197398
  W32(c->r[3]+0x0000680Cu,c->r[0]); // 8019739C
  c->r[3]=c->r[30]|c->r[30]; // 801973A0
  c->lr=0x801973A8u; f_80160C90(c); // 801973A4
  c->r[3]=0u+0x00000001u; // 801973A8
L_801973AC:;
  c->r[11]=c->r[1]+0x00000030u; // 801973AC
  c->lr=0x801973B4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801973B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801973B4
  c->lr=c->r[0]; // 801973B8
  c->r[1]=c->r[1]+0x00000030u; // 801973BC
  return; // 801973C0
}

// EXISync
void f_801973C4(Ctx* __restrict c) {
  trace_call(0x801973C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801973C4
  c->r[0]=c->lr; // 801973C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801973CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801973D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801973D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801973D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801973DC
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801973E0
  c->r[4]=0u+0x80390000u; // 801973E4
  c->r[4]=c->r[4]+0xFFFFF990u; // 801973E8
  c->r[31]=c->r[4]+c->r[0]; // 801973EC
  c->r[29]=0u+0x00000000u; // 801973F0
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801973F4
  c->r[0]=0u+0xCD000000u; // 801973F8
  c->r[3]=c->r[0]+c->r[30]; // 801973FC
  goto L_80197610; // 80197400
L_80197404:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 80197404
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80197408
  if (!crb(c,2)) { goto L_80197610; } // 8019740C
  c->lr=0x80197414u; f_80160C68(c); // 80197410
  c->r[28]=c->r[3]|c->r[3]; // 80197414
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197418
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8019741C
  if (crb(c,2)) { goto L_80197604; } // 80197420
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197424
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 80197428
  if (crb(c,2)) { goto L_80197580; } // 8019742C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197430
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80197434
  if (crb(c,2)) { goto L_80197574; } // 80197438
  c->r[5]=R32(c->r[31]+0x00000010u); // 8019743C
  cmps(c,1,(int32_t)c->r[5],0); // 80197440
  if (crb(c,6)) { goto L_80197574; } // 80197444
  c->r[4]=R32(c->r[31]+0x00000014u); // 80197448
  c->r[0]=0u+0xCD000000u; // 8019744C
  c->r[3]=c->r[0]+c->r[30]; // 80197450
  c->r[0]=R32(c->r[3]+0x00006810u); // 80197454
  c->r[3]=0u+0x00000000u; // 80197458
  if (!crb(c,5)) { goto L_80197574; } // 8019745C
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 80197460
  cmps(c,0,(int32_t)c->r[5],8); // 80197464
  if (!crb(c,1)) { goto L_80197548; } // 80197468
  c->r[8]=0u+0x00000000u; // 8019746C
  if (crb(c,4)) { goto L_80197488; } // 80197470
  c->r[6]=0u+0x80000000u; // 80197474
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 80197478
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 8019747C
  if (crb(c,1)) { goto L_80197488; } // 80197480
  c->r[8]=0u+0x00000001u; // 80197484
L_80197488:;
  cmps(c,0,(int32_t)c->r[8],0); // 80197488
  if (crb(c,2)) { goto L_80197548; } // 8019748C
  c->r[6]=c->r[7]+0x00000007u; // 80197490
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80197494
  c->ctr=c->r[6]; // 80197498
  cmps(c,0,(int32_t)c->r[7],0); // 8019749C
  if (!crb(c,1)) { goto L_80197548; } // 801974A0
L_801974A4:;
  c->r[6]=addc(c,~c->r[3],0x00000003u,1); // 801974A4
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801974A8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801974AC
  W8(c->r[4]+0x00000000u,c->r[6]); // 801974B0
  c->r[6]=c->r[3]+0x00000001u; // 801974B4
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 801974B8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801974BC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801974C0
  W8(c->r[4]+0x00000001u,c->r[6]); // 801974C4
  c->r[6]=c->r[3]+0x00000002u; // 801974C8
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 801974CC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801974D0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801974D4
  W8(c->r[4]+0x00000002u,c->r[6]); // 801974D8
  c->r[6]=0u-c->r[3]; // 801974DC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801974E0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801974E4
  W8(c->r[4]+0x00000003u,c->r[6]); // 801974E8
  c->r[6]=c->r[3]+0x00000004u; // 801974EC
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 801974F0
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801974F4
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801974F8
  W8(c->r[4]+0x00000004u,c->r[6]); // 801974FC
  c->r[6]=c->r[3]+0x00000005u; // 80197500
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197504
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197508
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 8019750C
  W8(c->r[4]+0x00000005u,c->r[6]); // 80197510
  c->r[6]=c->r[3]+0x00000006u; // 80197514
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197518
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8019751C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197520
  W8(c->r[4]+0x00000006u,c->r[6]); // 80197524
  c->r[6]=c->r[3]+0x00000007u; // 80197528
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 8019752C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197530
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197534
  W8(c->r[4]+0x00000007u,c->r[6]); // 80197538
  c->r[4]=c->r[4]+0x00000008u; // 8019753C
  c->r[3]=c->r[3]+0x00000008u; // 80197540
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801974A4; } // 80197544
L_80197548:;
  c->r[6]=c->r[5]-c->r[3]; // 80197548
  c->ctr=c->r[6]; // 8019754C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 80197550
  if (!crb(c,0)) { goto L_80197574; } // 80197554
L_80197558:;
  c->r[5]=addc(c,~c->r[3],0x00000003u,1); // 80197558
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8019755C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80197560
  W8(c->r[4]+0x00000000u,c->r[5]); // 80197564
  c->r[4]=c->r[4]+0x00000001u; // 80197568
  c->r[3]=c->r[3]+0x00000001u; // 8019756C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80197558; } // 80197570
L_80197574:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197574
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80197578
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8019757C
L_80197580:;
  c->lr=0x80197584u; f_8015AE78(c); // 80197580
  cmpu(c,0,c->r[3],0x000000FFu); // 80197584
  if (!crb(c,2)) { goto L_80197600; } // 80197588
  c->lr=0x80197590u; f_80159BB4(c); // 8019758C
  c->r[3]=rotl(c->r[3],0)&0xF0000000u; // 80197590
  c->r[0]=c->r[3]+0xE0000000u; // 80197594
  cmpu(c,0,c->r[0],0x00000000u); // 80197598
  if (crb(c,2)) { goto L_80197600; } // 8019759C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801975A0
  cmps(c,0,(int32_t)c->r[0],4); // 801975A4
  if (!crb(c,2)) { goto L_80197600; } // 801975A8
  c->r[0]=0u+0xCD000000u; // 801975AC
  c->r[4]=c->r[0]+c->r[30]; // 801975B0
  c->r[0]=R32(c->r[4]+0x00006800u); // 801975B4
  c->r[0]=rotl(c->r[0],0)&0x00000070u; cr0(c,c->r[0]); // 801975B8
  if (!crb(c,2)) { goto L_80197600; } // 801975BC
  c->r[3]=R32(c->r[4]+0x00006810u); // 801975C0
  c->r[0]=c->r[3]+0xFEFF0000u; // 801975C4
  cmpu(c,0,c->r[0],0x00000000u); // 801975C8
  if (crb(c,2)) { goto L_801975F0; } // 801975CC
  c->r[3]=R32(c->r[4]+0x00006810u); // 801975D0
  c->r[0]=c->r[3]+0xFAF90000u; // 801975D4
  cmpu(c,0,c->r[0],0x00000000u); // 801975D8
  if (crb(c,2)) { goto L_801975F0; } // 801975DC
  c->r[3]=R32(c->r[4]+0x00006810u); // 801975E0
  c->r[0]=c->r[3]+0xFBDE0000u; // 801975E4
  cmpu(c,0,c->r[0],0x00000001u); // 801975E8
  if (!crb(c,2)) { goto L_80197600; } // 801975EC
L_801975F0:;
  c->r[3]=0u+0x80000000u; // 801975F0
  c->r[0]=R16(c->r[3]+0x000030E6u); // 801975F4
  cmpu(c,0,c->r[0],0x00008200u); // 801975F8
  if (!crb(c,2)) { goto L_80197604; } // 801975FC
L_80197600:;
  c->r[29]=0u+0x00000001u; // 80197600
L_80197604:;
  c->r[3]=c->r[28]|c->r[28]; // 80197604
  c->lr=0x8019760Cu; f_80160C90(c); // 80197608
  goto L_8019761C; // 8019760C
L_80197610:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197610
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80197614
  if (!crb(c,2)) { IRQCHK(c); goto L_80197404; } // 80197618
L_8019761C:;
  c->r[3]=c->r[29]|c->r[29]; // 8019761C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80197620
  c->r[30]=R32(c->r[1]+0x00000018u); // 80197624
  c->r[29]=R32(c->r[1]+0x00000014u); // 80197628
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019762C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80197630
  c->lr=c->r[0]; // 80197634
  c->r[1]=c->r[1]+0x00000020u; // 80197638
  return; // 8019763C
}

// EXISetExiCallback
void f_80197640(Ctx* __restrict c) {
  trace_call(0x80197640u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197640
  c->r[0]=c->lr; // 80197644
  W32(c->r[1]+0x00000024u,c->r[0]); // 80197648
  c->r[11]=c->r[1]+0x00000020u; // 8019764C
  c->lr=0x80197654u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80197650
  c->r[26]=c->r[3]|c->r[3]; // 80197654
  c->r[27]=c->r[4]|c->r[4]; // 80197658
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 8019765C
  c->r[31]=0u+0x80390000u; // 80197660
  c->r[31]=c->r[31]+0xFFFFF990u; // 80197664
  c->r[30]=c->r[31]+c->r[0]; // 80197668
  c->lr=0x80197670u; f_80160C68(c); // 8019766C
  c->r[28]=c->r[3]|c->r[3]; // 80197670
  c->r[29]=R32(c->r[30]+0x00000000u); // 80197674
  W32(c->r[30]+0x00000000u,c->r[27]); // 80197678
  cmps(c,0,(int32_t)c->r[26],2); // 8019767C
  if (crb(c,2)) { goto L_80197694; } // 80197680
  c->r[3]=c->r[26]|c->r[26]; // 80197684
  c->r[4]=c->r[30]|c->r[30]; // 80197688
  c->lr=0x80197690u; f_80196EBC(c); // 8019768C
  goto L_801976A0; // 80197690
L_80197694:;
  c->r[3]=0u+0x00000000u; // 80197694
  c->r[4]=c->r[31]|c->r[31]; // 80197698
  c->lr=0x801976A0u; f_80196EBC(c); // 8019769C
L_801976A0:;
  c->r[3]=c->r[28]|c->r[28]; // 801976A0
  c->lr=0x801976A8u; f_80160C90(c); // 801976A4
  c->r[3]=c->r[29]|c->r[29]; // 801976A8
  c->r[11]=c->r[1]+0x00000020u; // 801976AC
  c->lr=0x801976B4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801976B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801976B4
  c->lr=c->r[0]; // 801976B8
  c->r[1]=c->r[1]+0x00000020u; // 801976BC
  return; // 801976C0
}

// __EXIProbe
void f_801976C4(Ctx* __restrict c) {
  trace_call(0x801976C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801976C4
  c->r[0]=c->lr; // 801976C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801976CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801976D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801976D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801976D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801976DC
  c->r[28]=c->r[3]|c->r[3]; // 801976E0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801976E4
  c->r[4]=0u+0x80390000u; // 801976E8
  c->r[4]=c->r[4]+0xFFFFF990u; // 801976EC
  c->r[31]=c->r[4]+c->r[0]; // 801976F0
  cmps(c,0,(int32_t)c->r[3],2); // 801976F4
  if (!crb(c,2)) { goto L_80197704; } // 801976F8
  c->r[3]=0u+0x00000001u; // 801976FC
  goto L_80197824; // 80197700
L_80197704:;
  c->r[29]=0u+0x00000001u; // 80197704
  c->lr=0x8019770Cu; f_80160C68(c); // 80197708
  c->r[30]=c->r[3]|c->r[3]; // 8019770C
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 80197710
  c->r[0]=0u+0xCD000000u; // 80197714
  c->r[3]=c->r[0]+c->r[3]; // 80197718
  c->r[5]=R32(c->r[3]+0x00006800u); // 8019771C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197720
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80197724
  if (!crb(c,2)) { goto L_801977EC; } // 80197728
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 8019772C
  if (crb(c,2)) { goto L_8019775C; } // 80197730
  c->r[0]=R32(c->r[3]+0x00006800u); // 80197734
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 80197738
  c->r[0]=c->r[0]|0x00000800u; // 8019773C
  W32(c->r[3]+0x00006800u,c->r[0]); // 80197740
  c->r[4]=0u+0x00000000u; // 80197744
  W32(c->r[31]+0x00000020u,c->r[4]); // 80197748
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8019774C
  c->r[0]=0u+0x80000000u; // 80197750
  c->r[3]=c->r[0]+c->r[3]; // 80197754
  W32(c->r[3]+0x000030C0u,c->r[4]); // 80197758
L_8019775C:;
  c->r[0]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[0]); // 8019775C
  if (crb(c,2)) { goto L_801977CC; } // 80197760
  c->lr=0x80197768u; f_80164DF4(c); // 80197764
  c->r[31]=0u+0x80000000u; // 80197768
  c->r[0]=R32(c->r[31]+0x000000F8u); // 8019776C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80197770
  c->r[5]=0u+0x10620000u; // 80197774
  c->r[5]=c->r[5]+0x00004DD3u; // 80197778
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 8019777C
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 80197780
  c->r[5]=0u+0x00000000u; // 80197784
  c->lr=0x8019778Cu; f_80186024(c); // 80197788
  c->r[6]=0u+0x00000064u; // 8019778C
  c->r[5]=0u+0x00000000u; // 80197790
  c->lr=0x80197798u; f_80186024(c); // 80197794
  c->r[4]=c->r[4]+0x00000001u; // 80197798
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8019779C
  c->r[3]=c->r[31]+c->r[0]; // 801977A0
  c->r[0]=R32(c->r[3]+0x000030C0u); // 801977A4
  cmps(c,0,(int32_t)c->r[0],0); // 801977A8
  if (!crb(c,2)) { goto L_801977B4; } // 801977AC
  W32(c->r[3]+0x000030C0u,c->r[4]); // 801977B0
L_801977B4:;
  c->r[0]=R32(c->r[3]+0x000030C0u); // 801977B4
  c->r[0]=c->r[4]-c->r[0]; // 801977B8
  cmps(c,0,(int32_t)c->r[0],3); // 801977BC
  if (!crb(c,0)) { goto L_80197818; } // 801977C0
  c->r[29]=0u+0x00000000u; // 801977C4
  goto L_80197818; // 801977C8
L_801977CC:;
  c->r[4]=0u+0x00000000u; // 801977CC
  W32(c->r[31]+0x00000020u,c->r[4]); // 801977D0
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801977D4
  c->r[0]=0u+0x80000000u; // 801977D8
  c->r[3]=c->r[0]+c->r[3]; // 801977DC
  W32(c->r[3]+0x000030C0u,c->r[4]); // 801977E0
  c->r[29]=0u+0x00000000u; // 801977E4
  goto L_80197818; // 801977E8
L_801977EC:;
  c->r[0]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[0]); // 801977EC
  if (crb(c,2)) { goto L_801977FC; } // 801977F0
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 801977F4
  if (crb(c,2)) { goto L_80197818; } // 801977F8
L_801977FC:;
  c->r[4]=0u+0x00000000u; // 801977FC
  W32(c->r[31]+0x00000020u,c->r[4]); // 80197800
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80197804
  c->r[0]=0u+0x80000000u; // 80197808
  c->r[3]=c->r[0]+c->r[3]; // 8019780C
  W32(c->r[3]+0x000030C0u,c->r[4]); // 80197810
  c->r[29]=0u+0x00000000u; // 80197814
L_80197818:;
  c->r[3]=c->r[30]|c->r[30]; // 80197818
  c->lr=0x80197820u; f_80160C90(c); // 8019781C
  c->r[3]=c->r[29]|c->r[29]; // 80197820
L_80197824:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80197824
  c->r[30]=R32(c->r[1]+0x00000018u); // 80197828
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019782C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80197830
  c->r[0]=R32(c->r[1]+0x00000024u); // 80197834
  c->lr=c->r[0]; // 80197838
  c->r[1]=c->r[1]+0x00000020u; // 8019783C
  return; // 80197840
}

// EXIAttach
void f_80197844(Ctx* __restrict c) {
  trace_call(0x80197844u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197844
  c->r[0]=c->lr; // 80197848
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019784C
  c->r[11]=c->r[1]+0x00000030u; // 80197850
  c->lr=0x80197858u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80197854
  c->r[29]=c->r[3]|c->r[3]; // 80197858
  c->r[27]=c->r[4]|c->r[4]; // 8019785C
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 80197860
  c->r[4]=0u+0x80390000u; // 80197864
  c->r[4]=c->r[4]+0xFFFFF990u; // 80197868
  c->r[31]=c->r[4]+c->r[0]; // 8019786C
  c->lr=0x80197874u; f_801976C4(c); // 80197870
  cmps(c,0,(int32_t)c->r[3],0); // 80197874
  if (crb(c,2)) { goto L_80197898; } // 80197878
  c->r[0]=R32(c->r[31]+0x00000020u); // 8019787C
  cmps(c,0,(int32_t)c->r[0],0); // 80197880
  if (!crb(c,2)) { goto L_80197898; } // 80197884
  c->r[3]=c->r[29]|c->r[29]; // 80197888
  c->r[4]=0u+0x00000000u; // 8019788C
  c->r[5]=c->r[1]+0x00000008u; // 80197890
  c->lr=0x80197898u; f_801983A4(c); // 80197894
L_80197898:;
  c->lr=0x8019789Cu; f_80160C68(c); // 80197898
  c->r[30]=c->r[3]|c->r[3]; // 8019789C
  c->r[0]=R32(c->r[31]+0x00000020u); // 801978A0
  cmps(c,0,(int32_t)c->r[0],0); // 801978A4
  if (!crb(c,2)) { goto L_801978B8; } // 801978A8
  c->lr=0x801978B0u; f_80160C90(c); // 801978AC
  c->r[3]=0u+0x00000000u; // 801978B0
  goto L_80197944; // 801978B4
L_801978B8:;
  c->lr=0x801978BCu; f_80160C68(c); // 801978B8
  c->r[28]=c->r[3]|c->r[3]; // 801978BC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801978C0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801978C4
  if (!crb(c,2)) { goto L_801978DC; } // 801978C8
  c->r[3]=c->r[29]|c->r[29]; // 801978CC
  c->lr=0x801978D4u; f_801976C4(c); // 801978D0
  cmps(c,0,(int32_t)c->r[3],0); // 801978D4
  if (!crb(c,2)) { goto L_801978EC; } // 801978D8
L_801978DC:;
  c->r[3]=c->r[28]|c->r[28]; // 801978DC
  c->lr=0x801978E4u; f_80160C90(c); // 801978E0
  c->r[29]=0u+0x00000000u; // 801978E4
  goto L_80197938; // 801978E8
L_801978EC:;
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 801978EC
  c->r[0]=0u+0xCD000000u; // 801978F0
  c->r[3]=c->r[0]+c->r[3]; // 801978F4
  c->r[0]=R32(c->r[3]+0x00006800u); // 801978F8
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 801978FC
  c->r[0]=c->r[0]|0x00000002u; // 80197900
  W32(c->r[3]+0x00006800u,c->r[0]); // 80197904
  W32(c->r[31]+0x00000008u,c->r[27]); // 80197908
  c->r[3]=0u+0x00100000u; // 8019790C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80197910
  c->r[0]=c->r[0]-c->r[29]; // 80197914
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80197918
  c->lr=0x80197920u; f_80161078(c); // 8019791C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197920
  c->r[0]=c->r[0]|0x00000008u; // 80197924
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80197928
  c->r[3]=c->r[28]|c->r[28]; // 8019792C
  c->lr=0x80197934u; f_80160C90(c); // 80197930
  c->r[29]=0u+0x00000001u; // 80197934
L_80197938:;
  c->r[3]=c->r[30]|c->r[30]; // 80197938
  c->lr=0x80197940u; f_80160C90(c); // 8019793C
  c->r[3]=c->r[29]|c->r[29]; // 80197940
L_80197944:;
  c->r[11]=c->r[1]+0x00000030u; // 80197944
  c->lr=0x8019794Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80197948
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019794C
  c->lr=c->r[0]; // 80197950
  c->r[1]=c->r[1]+0x00000030u; // 80197954
  return; // 80197958
}

// EXIDetach
void f_8019795C(Ctx* __restrict c) {
  trace_call(0x8019795Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019795C
  c->r[0]=c->lr; // 80197960
  W32(c->r[1]+0x00000024u,c->r[0]); // 80197964
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80197968
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019796C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80197970
  c->r[29]=c->r[3]|c->r[3]; // 80197974
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 80197978
  c->r[3]=0u+0x80390000u; // 8019797C
  c->r[3]=c->r[3]+0xFFFFF990u; // 80197980
  c->r[31]=c->r[3]+c->r[0]; // 80197984
  c->lr=0x8019798Cu; f_80160C68(c); // 80197988
  c->r[30]=c->r[3]|c->r[3]; // 8019798C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197990
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80197994
  if (!crb(c,2)) { goto L_801979A8; } // 80197998
  c->lr=0x801979A0u; f_80160C90(c); // 8019799C
  c->r[3]=0u+0x00000001u; // 801979A0
  goto L_801979F8; // 801979A4
L_801979A8:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801979A8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801979AC
  if (crb(c,2)) { goto L_801979CC; } // 801979B0
  c->r[0]=R32(c->r[31]+0x00000018u); // 801979B4
  cmps(c,0,(int32_t)c->r[0],0); // 801979B8
  if (!crb(c,2)) { goto L_801979CC; } // 801979BC
  c->lr=0x801979C4u; f_80160C90(c); // 801979C0
  c->r[3]=0u+0x00000000u; // 801979C4
  goto L_801979F8; // 801979C8
L_801979CC:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801979CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801979D0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801979D4
  c->r[3]=0u+0x00500000u; // 801979D8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801979DC
  c->r[0]=c->r[0]-c->r[29]; // 801979E0
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801979E4
  c->lr=0x801979ECu; f_80160FF8(c); // 801979E8
  c->r[3]=c->r[30]|c->r[30]; // 801979EC
  c->lr=0x801979F4u; f_80160C90(c); // 801979F0
  c->r[3]=0u+0x00000001u; // 801979F4
L_801979F8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801979F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801979FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80197A00
  c->r[0]=R32(c->r[1]+0x00000024u); // 80197A04
  c->lr=c->r[0]; // 80197A08
  c->r[1]=c->r[1]+0x00000020u; // 80197A0C
  return; // 80197A10
}

// EXISelect
void f_80197A14(Ctx* __restrict c) {
  trace_call(0x80197A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197A14
  c->r[0]=c->lr; // 80197A18
  W32(c->r[1]+0x00000024u,c->r[0]); // 80197A1C
  c->r[11]=c->r[1]+0x00000020u; // 80197A20
  c->lr=0x80197A28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80197A24
  c->r[27]=c->r[3]|c->r[3]; // 80197A28
  c->r[28]=c->r[4]|c->r[4]; // 80197A2C
  c->r[29]=c->r[5]|c->r[5]; // 80197A30
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 80197A34
  c->r[3]=0u+0x80390000u; // 80197A38
  c->r[3]=c->r[3]+0xFFFFF990u; // 80197A3C
  c->r[31]=c->r[3]+c->r[0]; // 80197A40
  c->lr=0x80197A48u; f_80160C68(c); // 80197A44
  c->r[30]=c->r[3]|c->r[3]; // 80197A48
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197A4C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80197A50
  if (!crb(c,2)) { goto L_80197A9C; } // 80197A54
  cmps(c,0,(int32_t)c->r[27],2); // 80197A58
  if (crb(c,2)) { goto L_80197AAC; } // 80197A5C
  cmps(c,0,(int32_t)c->r[28],0); // 80197A60
  if (!crb(c,2)) { goto L_80197A84; } // 80197A64
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197A68
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80197A6C
  if (!crb(c,2)) { goto L_80197A84; } // 80197A70
  c->r[3]=c->r[27]|c->r[27]; // 80197A74
  c->lr=0x80197A7Cu; f_801976C4(c); // 80197A78
  cmps(c,0,(int32_t)c->r[3],0); // 80197A7C
  if (crb(c,2)) { goto L_80197A9C; } // 80197A80
L_80197A84:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197A84
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80197A88
  if (crb(c,2)) { goto L_80197A9C; } // 80197A8C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80197A90
  cmpu(c,0,c->r[0],c->r[28]); // 80197A94
  if (crb(c,2)) { goto L_80197AAC; } // 80197A98
L_80197A9C:;
  c->r[3]=c->r[30]|c->r[30]; // 80197A9C
  c->lr=0x80197AA4u; f_80160C90(c); // 80197AA0
  c->r[3]=0u+0x00000000u; // 80197AA4
  goto L_80197B2C; // 80197AA8
L_80197AAC:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197AAC
  c->r[0]=c->r[0]|0x00000004u; // 80197AB0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80197AB4
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)20); // 80197AB8
  c->r[0]=0u+0xCD000000u; // 80197ABC
  c->r[4]=c->r[0]+c->r[3]; // 80197AC0
  c->r[3]=R32(c->r[4]+0x00006800u); // 80197AC4
  c->r[3]=c->r[3]&0x00000405u; cr0(c,c->r[3]); // 80197AC8
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 80197ACC
  c->r[3]=c->r[3]|c->r[0]; // 80197AD0
  c->r[0]=0u+0x00000001u; // 80197AD4
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 80197AD8
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80197ADC
  c->r[3]=c->r[3]|c->r[0]; // 80197AE0
  W32(c->r[4]+0x00006800u,c->r[3]); // 80197AE4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197AE8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80197AEC
  if (crb(c,2)) { goto L_80197B20; } // 80197AF0
  cmps(c,0,(int32_t)c->r[27],1); // 80197AF4
  if (crb(c,2)) { goto L_80197B18; } // 80197AF8
  if (!crb(c,0)) { goto L_80197B20; } // 80197AFC
  cmps(c,0,(int32_t)c->r[27],0); // 80197B00
  if (!crb(c,0)) { goto L_80197B0C; } // 80197B04
  goto L_80197B20; // 80197B08
L_80197B0C:;
  c->r[3]=0u+0x00100000u; // 80197B0C
  c->lr=0x80197B14u; f_80160FF8(c); // 80197B10
  goto L_80197B20; // 80197B14
L_80197B18:;
  c->r[3]=0u+0x00020000u; // 80197B18
  c->lr=0x80197B20u; f_80160FF8(c); // 80197B1C
L_80197B20:;
  c->r[3]=c->r[30]|c->r[30]; // 80197B20
  c->lr=0x80197B28u; f_80160C90(c); // 80197B24
  c->r[3]=0u+0x00000001u; // 80197B28
L_80197B2C:;
  c->r[11]=c->r[1]+0x00000020u; // 80197B2C
  c->lr=0x80197B34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80197B30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80197B34
  c->lr=c->r[0]; // 80197B38
  c->r[1]=c->r[1]+0x00000020u; // 80197B3C
  return; // 80197B40
}

// EXIDeselect
void f_80197B44(Ctx* __restrict c) {
  trace_call(0x80197B44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197B44
  c->r[0]=c->lr; // 80197B48
  W32(c->r[1]+0x00000024u,c->r[0]); // 80197B4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80197B50
  W32(c->r[1]+0x00000018u,c->r[30]); // 80197B54
  W32(c->r[1]+0x00000014u,c->r[29]); // 80197B58
  W32(c->r[1]+0x00000010u,c->r[28]); // 80197B5C
  c->r[28]=c->r[3]|c->r[3]; // 80197B60
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 80197B64
  c->r[3]=0u+0x80390000u; // 80197B68
  c->r[3]=c->r[3]+0xFFFFF990u; // 80197B6C
  c->r[31]=c->r[3]+c->r[0]; // 80197B70
  c->lr=0x80197B78u; f_80160C68(c); // 80197B74
  c->r[29]=c->r[3]|c->r[3]; // 80197B78
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197B7C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80197B80
  if (!crb(c,2)) { goto L_80197B94; } // 80197B84
  c->lr=0x80197B8Cu; f_80160C90(c); // 80197B88
  c->r[3]=0u+0x00000000u; // 80197B8C
  goto L_80197C24; // 80197B90
L_80197B94:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197B94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80197B98
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80197B9C
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 80197BA0
  c->r[0]=0u+0xCD000000u; // 80197BA4
  c->r[3]=c->r[0]+c->r[3]; // 80197BA8
  c->r[30]=R32(c->r[3]+0x00006800u); // 80197BAC
  c->r[0]=c->r[30]&0x00000405u; cr0(c,c->r[0]); // 80197BB0
  W32(c->r[3]+0x00006800u,c->r[0]); // 80197BB4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80197BB8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80197BBC
  if (crb(c,2)) { goto L_80197BF0; } // 80197BC0
  cmps(c,0,(int32_t)c->r[28],1); // 80197BC4
  if (crb(c,2)) { goto L_80197BE8; } // 80197BC8
  if (!crb(c,0)) { goto L_80197BF0; } // 80197BCC
  cmps(c,0,(int32_t)c->r[28],0); // 80197BD0
  if (!crb(c,0)) { goto L_80197BDC; } // 80197BD4
  goto L_80197BF0; // 80197BD8
L_80197BDC:;
  c->r[3]=0u+0x00100000u; // 80197BDC
  c->lr=0x80197BE4u; f_80161078(c); // 80197BE0
  goto L_80197BF0; // 80197BE4
L_80197BE8:;
  c->r[3]=0u+0x00020000u; // 80197BE8
  c->lr=0x80197BF0u; f_80161078(c); // 80197BEC
L_80197BF0:;
  c->r[3]=c->r[29]|c->r[29]; // 80197BF0
  c->lr=0x80197BF8u; f_80160C90(c); // 80197BF4
  cmps(c,0,(int32_t)c->r[28],2); // 80197BF8
  if (crb(c,2)) { goto L_80197C20; } // 80197BFC
  c->r[0]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[0]); // 80197C00
  if (crb(c,2)) { goto L_80197C20; } // 80197C04
  c->r[3]=c->r[28]|c->r[28]; // 80197C08
  c->lr=0x80197C10u; f_801976C4(c); // 80197C0C
  c->r[0]=0u-c->r[3]; // 80197C10
  c->r[0]=c->r[0]|c->r[3]; // 80197C14
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80197C18
  goto L_80197C24; // 80197C1C
L_80197C20:;
  c->r[3]=0u+0x00000001u; // 80197C20
L_80197C24:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80197C24
  c->r[30]=R32(c->r[1]+0x00000018u); // 80197C28
  c->r[29]=R32(c->r[1]+0x00000014u); // 80197C2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80197C30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80197C34
  c->lr=c->r[0]; // 80197C38
  c->r[1]=c->r[1]+0x00000020u; // 80197C3C
  return; // 80197C40
}

// EXIIntrruptHandler
void f_80197C44(Ctx* __restrict c) {
  trace_call(0x80197C44u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197C44
  c->r[0]=c->lr; // 80197C48
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80197C4C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80197C50
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80197C54
  W32(c->r[1]+0x000002D4u,c->r[29]); // 80197C58
  c->r[29]=c->r[4]|c->r[4]; // 80197C5C
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 80197C60
  c->r[3]=0u+0x55550000u; // 80197C64
  c->r[3]=c->r[3]+0x00005556u; // 80197C68
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80197C6C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80197C70
  c->r[31]=c->r[3]+c->r[0]; // 80197C74
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 80197C78
  c->r[0]=0u+0xCD000000u; // 80197C7C
  c->r[3]=c->r[0]+c->r[3]; // 80197C80
  c->r[0]=R32(c->r[3]+0x00006800u); // 80197C84
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 80197C88
  c->r[0]=c->r[0]|0x00000002u; // 80197C8C
  W32(c->r[3]+0x00006800u,c->r[0]); // 80197C90
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 80197C94
  c->r[3]=0u+0x80390000u; // 80197C98
  c->r[3]=c->r[3]+0xFFFFF990u; // 80197C9C
  c->r[30]=R32(c->r[3]+c->r[0]); // 80197CA0
  cmps(c,0,(int32_t)c->r[30],0); // 80197CA4
  if (crb(c,2)) { goto L_80197CE0; } // 80197CA8
  c->r[3]=c->r[1]+0x00000008u; // 80197CAC
  c->lr=0x80197CB4u; f_8015CACC(c); // 80197CB0
  c->r[3]=c->r[1]+0x00000008u; // 80197CB4
  c->lr=0x80197CBCu; f_8015C8A4(c); // 80197CB8
  c->r[3]=c->r[31]|c->r[31]; // 80197CBC
  c->r[4]=c->r[29]|c->r[29]; // 80197CC0
  c->r[12]=c->r[30]|c->r[30]; // 80197CC4
  c->ctr=c->r[12]; // 80197CC8
  if (true) { c->lr=0x80197CD0u; dispatch(c,c->ctr); } // 80197CCC
  c->r[3]=c->r[1]+0x00000008u; // 80197CD0
  c->lr=0x80197CD8u; f_8015CACC(c); // 80197CD4
  c->r[3]=c->r[29]|c->r[29]; // 80197CD8
  c->lr=0x80197CE0u; f_8015C8A4(c); // 80197CDC
L_80197CE0:;
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80197CE0
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80197CE4
  c->r[29]=R32(c->r[1]+0x000002D4u); // 80197CE8
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80197CEC
  c->lr=c->r[0]; // 80197CF0
  c->r[1]=c->r[1]+0x000002E0u; // 80197CF4
  return; // 80197CF8
}

// TCIntrruptHandler
void f_80197CFC(Ctx* __restrict c) {
  trace_call(0x80197CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197CFC
  c->r[0]=c->lr; // 80197D00
  W32(c->r[1]+0x000002F4u,c->r[0]); // 80197D04
  c->r[11]=c->r[1]+0x000002F0u; // 80197D08
  c->lr=0x80197D10u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80197D0C
  c->r[27]=c->r[4]|c->r[4]; // 80197D10
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 80197D14
  c->r[4]=0u+0x55550000u; // 80197D18
  c->r[4]=c->r[4]+0x00005556u; // 80197D1C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 80197D20
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80197D24
  c->r[29]=c->r[4]+c->r[0]; // 80197D28
  c->r[0]=rotl(c->r[29],6)&0xFFFFFFC0u; // 80197D2C
  c->r[4]=0u+0x80390000u; // 80197D30
  c->r[4]=c->r[4]+0xFFFFF990u; // 80197D34
  c->r[30]=c->r[4]+c->r[0]; // 80197D38
  c->r[31]=0u+0x80000000u; // 80197D3C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[31]>>((c->r[3])&31)); // 80197D40
  c->lr=0x80197D48u; f_80160FF8(c); // 80197D44
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 80197D48
  c->r[0]=0u+0xCD000000u; // 80197D4C
  c->r[3]=c->r[0]+c->r[3]; // 80197D50
  c->r[0]=R32(c->r[3]+0x00006800u); // 80197D54
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 80197D58
  c->r[0]=c->r[0]|0x00000008u; // 80197D5C
  W32(c->r[3]+0x00006800u,c->r[0]); // 80197D60
  c->r[28]=R32(c->r[30]+0x00000004u); // 80197D64
  cmps(c,0,(int32_t)c->r[28],0); // 80197D68
  if (crb(c,2)) { goto L_80197EFC; } // 80197D6C
  c->r[0]=0u+0x00000000u; // 80197D70
  W32(c->r[30]+0x00000004u,c->r[0]); // 80197D74
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80197D78
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 80197D7C
  if (crb(c,2)) { goto L_80197EC8; } // 80197D80
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80197D84
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80197D88
  if (crb(c,2)) { goto L_80197EBC; } // 80197D8C
  c->r[5]=R32(c->r[30]+0x00000010u); // 80197D90
  cmps(c,1,(int32_t)c->r[5],0); // 80197D94
  if (crb(c,6)) { goto L_80197EBC; } // 80197D98
  c->r[4]=R32(c->r[30]+0x00000014u); // 80197D9C
  c->r[0]=R32(c->r[3]+0x00006810u); // 80197DA0
  c->r[3]=0u+0x00000000u; // 80197DA4
  if (!crb(c,5)) { goto L_80197EBC; } // 80197DA8
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 80197DAC
  cmps(c,0,(int32_t)c->r[5],8); // 80197DB0
  if (!crb(c,1)) { goto L_80197E90; } // 80197DB4
  c->r[8]=0u+0x00000000u; // 80197DB8
  if (crb(c,4)) { goto L_80197DD0; } // 80197DBC
  c->r[6]=c->r[31]+0xFFFFFFFEu; // 80197DC0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 80197DC4
  if (crb(c,1)) { goto L_80197DD0; } // 80197DC8
  c->r[8]=0u+0x00000001u; // 80197DCC
L_80197DD0:;
  cmps(c,0,(int32_t)c->r[8],0); // 80197DD0
  if (crb(c,2)) { goto L_80197E90; } // 80197DD4
  c->r[6]=c->r[7]+0x00000007u; // 80197DD8
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80197DDC
  c->ctr=c->r[6]; // 80197DE0
  cmps(c,0,(int32_t)c->r[7],0); // 80197DE4
  if (!crb(c,1)) { goto L_80197E90; } // 80197DE8
L_80197DEC:;
  c->r[6]=addc(c,~c->r[3],0x00000003u,1); // 80197DEC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197DF0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197DF4
  W8(c->r[4]+0x00000000u,c->r[6]); // 80197DF8
  c->r[6]=c->r[3]+0x00000001u; // 80197DFC
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197E00
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197E04
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197E08
  W8(c->r[4]+0x00000001u,c->r[6]); // 80197E0C
  c->r[6]=c->r[3]+0x00000002u; // 80197E10
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197E14
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197E18
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197E1C
  W8(c->r[4]+0x00000002u,c->r[6]); // 80197E20
  c->r[6]=0u-c->r[3]; // 80197E24
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197E28
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197E2C
  W8(c->r[4]+0x00000003u,c->r[6]); // 80197E30
  c->r[6]=c->r[3]+0x00000004u; // 80197E34
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197E38
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197E3C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197E40
  W8(c->r[4]+0x00000004u,c->r[6]); // 80197E44
  c->r[6]=c->r[3]+0x00000005u; // 80197E48
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197E4C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197E50
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197E54
  W8(c->r[4]+0x00000005u,c->r[6]); // 80197E58
  c->r[6]=c->r[3]+0x00000006u; // 80197E5C
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197E60
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197E64
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197E68
  W8(c->r[4]+0x00000006u,c->r[6]); // 80197E6C
  c->r[6]=c->r[3]+0x00000007u; // 80197E70
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80197E74
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80197E78
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80197E7C
  W8(c->r[4]+0x00000007u,c->r[6]); // 80197E80
  c->r[4]=c->r[4]+0x00000008u; // 80197E84
  c->r[3]=c->r[3]+0x00000008u; // 80197E88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80197DEC; } // 80197E8C
L_80197E90:;
  c->r[6]=c->r[5]-c->r[3]; // 80197E90
  c->ctr=c->r[6]; // 80197E94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 80197E98
  if (!crb(c,0)) { goto L_80197EBC; } // 80197E9C
L_80197EA0:;
  c->r[5]=addc(c,~c->r[3],0x00000003u,1); // 80197EA0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80197EA4
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80197EA8
  W8(c->r[4]+0x00000000u,c->r[5]); // 80197EAC
  c->r[4]=c->r[4]+0x00000001u; // 80197EB0
  c->r[3]=c->r[3]+0x00000001u; // 80197EB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80197EA0; } // 80197EB8
L_80197EBC:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80197EBC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80197EC0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80197EC4
L_80197EC8:;
  c->r[3]=c->r[1]+0x00000008u; // 80197EC8
  c->lr=0x80197ED0u; f_8015CACC(c); // 80197ECC
  c->r[3]=c->r[1]+0x00000008u; // 80197ED0
  c->lr=0x80197ED8u; f_8015C8A4(c); // 80197ED4
  c->r[3]=c->r[29]|c->r[29]; // 80197ED8
  c->r[4]=c->r[27]|c->r[27]; // 80197EDC
  c->r[12]=c->r[28]|c->r[28]; // 80197EE0
  c->ctr=c->r[12]; // 80197EE4
  if (true) { c->lr=0x80197EECu; dispatch(c,c->ctr); } // 80197EE8
  c->r[3]=c->r[1]+0x00000008u; // 80197EEC
  c->lr=0x80197EF4u; f_8015CACC(c); // 80197EF0
  c->r[3]=c->r[27]|c->r[27]; // 80197EF4
  c->lr=0x80197EFCu; f_8015C8A4(c); // 80197EF8
L_80197EFC:;
  c->r[11]=c->r[1]+0x000002F0u; // 80197EFC
  c->lr=0x80197F04u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80197F00
  c->r[0]=R32(c->r[1]+0x000002F4u); // 80197F04
  c->lr=c->r[0]; // 80197F08
  c->r[1]=c->r[1]+0x000002F0u; // 80197F0C
  return; // 80197F10
}

// EXTIntrruptHandler
void f_80197F14(Ctx* __restrict c) {
  trace_call(0x80197F14u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197F14
  c->r[0]=c->lr; // 80197F18
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80197F1C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80197F20
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80197F24
  W32(c->r[1]+0x000002D4u,c->r[29]); // 80197F28
  W32(c->r[1]+0x000002D0u,c->r[28]); // 80197F2C
  c->r[28]=c->r[4]|c->r[4]; // 80197F30
  c->r[0]=c->r[3]+0xFFFFFFF5u; // 80197F34
  c->r[3]=0u+0x55550000u; // 80197F38
  c->r[3]=c->r[3]+0x00005556u; // 80197F3C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80197F40
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80197F44
  c->r[31]=c->r[3]+c->r[0]; // 80197F48
  c->r[3]=0u+0x00500000u; // 80197F4C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80197F50
  c->r[0]=c->r[0]-c->r[31]; // 80197F54
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80197F58
  c->lr=0x80197F60u; f_80160FF8(c); // 80197F5C
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 80197F60
  c->r[3]=0u+0x80390000u; // 80197F64
  c->r[3]=c->r[3]+0xFFFFF990u; // 80197F68
  c->r[30]=c->r[3]+c->r[0]; // 80197F6C
  c->r[29]=R32(c->r[30]+0x00000008u); // 80197F70
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80197F74
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80197F78
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80197F7C
  cmps(c,0,(int32_t)c->r[29],0); // 80197F80
  if (crb(c,2)) { goto L_80197FC4; } // 80197F84
  c->r[3]=c->r[1]+0x00000008u; // 80197F88
  c->lr=0x80197F90u; f_8015CACC(c); // 80197F8C
  c->r[3]=c->r[1]+0x00000008u; // 80197F90
  c->lr=0x80197F98u; f_8015C8A4(c); // 80197F94
  c->r[0]=0u+0x00000000u; // 80197F98
  W32(c->r[30]+0x00000008u,c->r[0]); // 80197F9C
  c->r[3]=c->r[31]|c->r[31]; // 80197FA0
  c->r[4]=c->r[28]|c->r[28]; // 80197FA4
  c->r[12]=c->r[29]|c->r[29]; // 80197FA8
  c->ctr=c->r[12]; // 80197FAC
  if (true) { c->lr=0x80197FB4u; dispatch(c,c->ctr); } // 80197FB0
  c->r[3]=c->r[1]+0x00000008u; // 80197FB4
  c->lr=0x80197FBCu; f_8015CACC(c); // 80197FB8
  c->r[3]=c->r[28]|c->r[28]; // 80197FBC
  c->lr=0x80197FC4u; f_8015C8A4(c); // 80197FC0
L_80197FC4:;
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80197FC4
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80197FC8
  c->r[29]=R32(c->r[1]+0x000002D4u); // 80197FCC
  c->r[28]=R32(c->r[1]+0x000002D0u); // 80197FD0
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80197FD4
  c->lr=c->r[0]; // 80197FD8
  c->r[1]=c->r[1]+0x000002E0u; // 80197FDC
  return; // 80197FE0
}

// EXIInit
void f_80197FE4(Ctx* __restrict c) {
  trace_call(0x80197FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80197FE4
  c->r[0]=c->lr; // 80197FE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80197FEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80197FF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80197FF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80197FF8
  W32(c->r[1]+0x00000010u,c->r[28]); // 80197FFC
  c->r[3]=0u+0xCD000000u; // 80198000
L_80198004:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 80198004
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80198008
  cmpu(c,0,c->r[0],0x00000001u); // 8019800C
  if (crb(c,2)) { IRQCHK(c); goto L_80198004; } // 80198010
  c->r[0]=R32(c->r[3]+0x00006820u); // 80198014
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80198018
  cmpu(c,0,c->r[0],0x00000001u); // 8019801C
  if (crb(c,2)) { IRQCHK(c); goto L_80198004; } // 80198020
  c->r[0]=R32(c->r[3]+0x00006834u); // 80198024
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80198028
  cmpu(c,0,c->r[0],0x00000001u); // 8019802C
  if (crb(c,2)) { IRQCHK(c); goto L_80198004; } // 80198030
  c->r[3]=0u+0x00800000u; // 80198034
  c->r[3]=c->r[3]+0xFFFF8000u; // 80198038
  c->lr=0x80198040u; f_80160FF8(c); // 8019803C
  c->r[28]=0u+0x00000000u; // 80198040
  c->r[3]=0u+0xCD000000u; // 80198044
  W32(c->r[3]+0x00006800u,c->r[28]); // 80198048
  W32(c->r[3]+0x00006814u,c->r[28]); // 8019804C
  W32(c->r[3]+0x00006828u,c->r[28]); // 80198050
  c->r[0]=0u+0x00002000u; // 80198054
  W32(c->r[3]+0x00006800u,c->r[0]); // 80198058
  c->r[3]=0u+0x00000009u; // 8019805C
  c->r[29]=0u+0x80190000u; // 80198060
  c->r[4]=c->r[29]+0x00007C44u; // 80198064
  c->lr=0x8019806Cu; f_80160CB4(c); // 80198068
  c->r[3]=0u+0x0000000Au; // 8019806C
  c->r[30]=0u+0x80190000u; // 80198070
  c->r[4]=c->r[30]+0x00007CFCu; // 80198074
  c->lr=0x8019807Cu; f_80160CB4(c); // 80198078
  c->r[3]=0u+0x0000000Bu; // 8019807C
  c->r[31]=0u+0x80190000u; // 80198080
  c->r[4]=c->r[31]+0x00007F14u; // 80198084
  c->lr=0x8019808Cu; f_80160CB4(c); // 80198088
  c->r[3]=0u+0x0000000Cu; // 8019808C
  c->r[4]=c->r[29]+0x00007C44u; // 80198090
  c->lr=0x80198098u; f_80160CB4(c); // 80198094
  c->r[3]=0u+0x0000000Du; // 80198098
  c->r[4]=c->r[30]+0x00007CFCu; // 8019809C
  c->lr=0x801980A4u; f_80160CB4(c); // 801980A0
  c->r[3]=0u+0x0000000Eu; // 801980A4
  c->r[4]=c->r[31]+0x00007F14u; // 801980A8
  c->lr=0x801980B0u; f_80160CB4(c); // 801980AC
  c->r[3]=0u+0x0000000Fu; // 801980B0
  c->r[4]=c->r[29]+0x00007C44u; // 801980B4
  c->lr=0x801980BCu; f_80160CB4(c); // 801980B8
  c->r[3]=0u+0x00000010u; // 801980BC
  c->r[4]=c->r[30]+0x00007CFCu; // 801980C0
  c->lr=0x801980C8u; f_80160CB4(c); // 801980C4
  c->r[3]=0u+0x00000000u; // 801980C8
  c->r[4]=0u+0x00000002u; // 801980CC
  c->r[5]=c->r[13]+0xFFFFA0C8u; // 801980D0
  c->lr=0x801980D8u; f_801983A4(c); // 801980D4
  c->r[0]=R32(c->r[13]+0xFFFF9B20u); // 801980D8
  cmps(c,0,(int32_t)c->r[0],0); // 801980DC
  if (crb(c,2)) { goto L_80198114; } // 801980E0
  c->r[3]=0u+0x80000000u; // 801980E4
  W32(c->r[3]+0x000030C4u,c->r[28]); // 801980E8
  W32(c->r[3]+0x000030C0u,c->r[28]); // 801980EC
  c->r[3]=0u+0x80390000u; // 801980F0
  c->r[3]=c->r[3]+0xFFFFF990u; // 801980F4
  W32(c->r[3]+0x00000060u,c->r[28]); // 801980F8
  W32(c->r[3]+0x00000020u,c->r[28]); // 801980FC
  c->r[3]=0u+0x00000000u; // 80198100
  c->lr=0x80198108u; f_801976C4(c); // 80198104
  c->r[3]=0u+0x00000001u; // 80198108
  c->lr=0x80198110u; f_801976C4(c); // 8019810C
  goto L_80198180; // 80198110
L_80198114:;
  c->r[3]=0u+0x00000000u; // 80198114
  c->r[4]=0u+0x00000000u; // 80198118
  c->r[5]=c->r[1]+0x00000008u; // 8019811C
  c->lr=0x80198124u; f_801983A4(c); // 80198120
  cmps(c,0,(int32_t)c->r[3],0); // 80198124
  if (crb(c,2)) { goto L_8019814C; } // 80198128
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019812C
  c->r[0]=c->r[3]+0xF8FF0000u; // 80198130
  cmpu(c,0,c->r[0],0x00000000u); // 80198134
  if (!crb(c,2)) { goto L_8019814C; } // 80198138
  c->r[3]=0u+0x00000001u; // 8019813C
  c->r[4]=0u+0x00000000u; // 80198140
  c->lr=0x80198148u; f_801988C8(c); // 80198144
  goto L_80198180; // 80198148
L_8019814C:;
  c->r[3]=0u+0x00000001u; // 8019814C
  c->r[4]=0u+0x00000000u; // 80198150
  c->r[5]=c->r[1]+0x00000008u; // 80198154
  c->lr=0x8019815Cu; f_801983A4(c); // 80198158
  cmps(c,0,(int32_t)c->r[3],0); // 8019815C
  if (crb(c,2)) { goto L_80198180; } // 80198160
  c->r[3]=R32(c->r[1]+0x00000008u); // 80198164
  c->r[0]=c->r[3]+0xF8FF0000u; // 80198168
  cmpu(c,0,c->r[0],0x00000000u); // 8019816C
  if (!crb(c,2)) { goto L_80198180; } // 80198170
  c->r[3]=0u+0x00000000u; // 80198174
  c->r[4]=0u+0x00000002u; // 80198178
  c->lr=0x80198180u; f_801988C8(c); // 8019817C
L_80198180:;
  c->r[3]=R32(c->r[13]+0xFFFF9288u); // 80198180
  c->lr=0x80198188u; f_8015AE88(c); // 80198184
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80198188
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019818C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80198190
  c->r[28]=R32(c->r[1]+0x00000010u); // 80198194
  c->r[0]=R32(c->r[1]+0x00000024u); // 80198198
  c->lr=c->r[0]; // 8019819C
  c->r[1]=c->r[1]+0x00000020u; // 801981A0
  return; // 801981A4
}

// EXILock
void f_801981A8(Ctx* __restrict c) {
  trace_call(0x801981A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801981A8
  c->r[0]=c->lr; // 801981AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801981B0
  c->r[11]=c->r[1]+0x00000020u; // 801981B4
  c->lr=0x801981BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801981B8
  c->r[27]=c->r[3]|c->r[3]; // 801981BC
  c->r[31]=c->r[4]|c->r[4]; // 801981C0
  c->r[28]=c->r[5]|c->r[5]; // 801981C4
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801981C8
  c->r[3]=0u+0x80390000u; // 801981CC
  c->r[3]=c->r[3]+0xFFFFF990u; // 801981D0
  c->r[30]=c->r[3]+c->r[0]; // 801981D4
  c->lr=0x801981DCu; f_80160C68(c); // 801981D8
  c->r[29]=c->r[3]|c->r[3]; // 801981DC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801981E0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801981E4
  if (crb(c,2)) { goto L_80198264; } // 801981E8
  cmps(c,0,(int32_t)c->r[28],0); // 801981EC
  if (crb(c,2)) { goto L_80198254; } // 801981F0
  c->r[3]=c->r[30]|c->r[30]; // 801981F4
  c->r[4]=R32(c->r[30]+0x00000024u); // 801981F8
  c->ctr=c->r[4]; // 801981FC
  cmps(c,0,(int32_t)c->r[4],0); // 80198200
  if (!crb(c,1)) { goto L_8019822C; } // 80198204
L_80198208:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 80198208
  cmpu(c,0,c->r[31],c->r[0]); // 8019820C
  if (!crb(c,2)) { goto L_80198224; } // 80198210
  c->r[3]=c->r[29]|c->r[29]; // 80198214
  c->lr=0x8019821Cu; f_80160C90(c); // 80198218
  c->r[3]=0u+0x00000000u; // 8019821C
  goto L_8019828C; // 80198220
L_80198224:;
  c->r[3]=c->r[3]+0x00000008u; // 80198224
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80198208; } // 80198228
L_8019822C:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8019822C
  c->r[3]=c->r[30]+c->r[0]; // 80198230
  W32(c->r[3]+0x0000002Cu,c->r[28]); // 80198234
  c->r[0]=R32(c->r[30]+0x00000024u); // 80198238
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019823C
  c->r[3]=c->r[30]+c->r[0]; // 80198240
  W32(c->r[3]+0x00000028u,c->r[31]); // 80198244
  c->r[3]=R32(c->r[30]+0x00000024u); // 80198248
  c->r[0]=c->r[3]+0x00000001u; // 8019824C
  W32(c->r[30]+0x00000024u,c->r[0]); // 80198250
L_80198254:;
  c->r[3]=c->r[29]|c->r[29]; // 80198254
  c->lr=0x8019825Cu; f_80160C90(c); // 80198258
  c->r[3]=0u+0x00000000u; // 8019825C
  goto L_8019828C; // 80198260
L_80198264:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80198264
  c->r[0]=c->r[0]|0x00000010u; // 80198268
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8019826C
  W32(c->r[30]+0x00000018u,c->r[31]); // 80198270
  c->r[3]=c->r[27]|c->r[27]; // 80198274
  c->r[4]=c->r[30]|c->r[30]; // 80198278
  c->lr=0x80198280u; f_80196EBC(c); // 8019827C
  c->r[3]=c->r[29]|c->r[29]; // 80198280
  c->lr=0x80198288u; f_80160C90(c); // 80198284
  c->r[3]=0u+0x00000001u; // 80198288
L_8019828C:;
  c->r[11]=c->r[1]+0x00000020u; // 8019828C
  c->lr=0x80198294u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80198290
  c->r[0]=R32(c->r[1]+0x00000024u); // 80198294
  c->lr=c->r[0]; // 80198298
  c->r[1]=c->r[1]+0x00000020u; // 8019829C
  return; // 801982A0
}

// EXIUnlock
void f_801982A4(Ctx* __restrict c) {
  trace_call(0x801982A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801982A4
  c->r[0]=c->lr; // 801982A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801982AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801982B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801982B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801982B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801982BC
  c->r[28]=c->r[3]|c->r[3]; // 801982C0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801982C4
  c->r[3]=0u+0x80390000u; // 801982C8
  c->r[3]=c->r[3]+0xFFFFF990u; // 801982CC
  c->r[31]=c->r[3]+c->r[0]; // 801982D0
  c->lr=0x801982D8u; f_80160C68(c); // 801982D4
  c->r[30]=c->r[3]|c->r[3]; // 801982D8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801982DC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801982E0
  if (!crb(c,2)) { goto L_801982F4; } // 801982E4
  c->lr=0x801982ECu; f_80160C90(c); // 801982E8
  c->r[3]=0u+0x00000000u; // 801982EC
  goto L_8019835C; // 801982F0
L_801982F4:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801982F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801982F8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801982FC
  c->r[3]=c->r[28]|c->r[28]; // 80198300
  c->r[4]=c->r[31]|c->r[31]; // 80198304
  c->lr=0x8019830Cu; f_80196EBC(c); // 80198308
  c->r[3]=R32(c->r[31]+0x00000024u); // 8019830C
  cmps(c,0,(int32_t)c->r[3],0); // 80198310
  if (!crb(c,1)) { goto L_80198350; } // 80198314
  c->r[29]=R32(c->r[31]+0x0000002Cu); // 80198318
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8019831C
  W32(c->r[31]+0x00000024u,c->r[0]); // 80198320
  if (!crb(c,1)) { goto L_8019833C; } // 80198324
  c->r[3]=c->r[31]+0x00000028u; // 80198328
  c->r[4]=c->r[31]+0x00000030u; // 8019832C
  c->r[0]=R32(c->r[31]+0x00000024u); // 80198330
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80198334
  c->lr=0x8019833Cu; f_8018C04C(c); // 80198338
L_8019833C:;
  c->r[3]=c->r[28]|c->r[28]; // 8019833C
  c->r[4]=0u+0x00000000u; // 80198340
  c->r[12]=c->r[29]|c->r[29]; // 80198344
  c->ctr=c->r[12]; // 80198348
  if (true) { c->lr=0x80198350u; dispatch(c,c->ctr); } // 8019834C
L_80198350:;
  c->r[3]=c->r[30]|c->r[30]; // 80198350
  c->lr=0x80198358u; f_80160C90(c); // 80198354
  c->r[3]=0u+0x00000001u; // 80198358
L_8019835C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019835C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80198360
  c->r[29]=R32(c->r[1]+0x00000014u); // 80198364
  c->r[28]=R32(c->r[1]+0x00000010u); // 80198368
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019836C
  c->lr=c->r[0]; // 80198370
  c->r[1]=c->r[1]+0x00000020u; // 80198374
  return; // 80198378
}

// UnlockedHandler
void f_8019837C(Ctx* __restrict c) {
  trace_call(0x8019837Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019837C
  c->r[0]=c->lr; // 80198380
  W32(c->r[1]+0x00000014u,c->r[0]); // 80198384
  c->r[4]=0u+0x00000000u; // 80198388
  c->r[5]=c->r[1]+0x00000008u; // 8019838C
  c->lr=0x80198394u; f_801983A4(c); // 80198390
  c->r[0]=R32(c->r[1]+0x00000014u); // 80198394
  c->lr=c->r[0]; // 80198398
  c->r[1]=c->r[1]+0x00000010u; // 8019839C
  return; // 801983A0
}

// EXIGetID
void f_801983A4(Ctx* __restrict c) {
  trace_call(0x801983A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801983A4
  c->r[0]=c->lr; // 801983A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801983AC
  c->r[11]=c->r[1]+0x00000040u; // 801983B0
  c->lr=0x801983B8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801983B4
  c->r[25]=c->r[3]|c->r[3]; // 801983B8
  c->r[26]=c->r[4]|c->r[4]; // 801983BC
  c->r[27]=c->r[5]|c->r[5]; // 801983C0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801983C4
  c->r[6]=0u+0x80390000u; // 801983C8
  c->r[6]=c->r[6]+0xFFFFF990u; // 801983CC
  c->r[29]=c->r[6]+c->r[0]; // 801983D0
  cmps(c,0,(int32_t)c->r[3],0); // 801983D4
  if (!crb(c,2)) { goto L_801983FC; } // 801983D8
  cmpu(c,0,c->r[4],0x00000002u); // 801983DC
  if (!crb(c,2)) { goto L_801983FC; } // 801983E0
  c->r[0]=R32(c->r[13]+0xFFFFA0C8u); // 801983E4
  cmps(c,0,(int32_t)c->r[0],0); // 801983E8
  if (crb(c,2)) { goto L_801983FC; } // 801983EC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801983F0
  c->r[3]=0u+0x00000001u; // 801983F4
  goto L_80198738; // 801983F8
L_801983FC:;
  cmps(c,0,(int32_t)c->r[3],2); // 801983FC
  if (!crb(c,0)) { goto L_801984E8; } // 80198400
  cmps(c,0,(int32_t)c->r[4],0); // 80198404
  if (!crb(c,2)) { goto L_801984E8; } // 80198408
  c->r[3]=c->r[25]|c->r[25]; // 8019840C
  c->lr=0x80198414u; f_801976C4(c); // 80198410
  cmps(c,0,(int32_t)c->r[3],0); // 80198414
  if (!crb(c,2)) { goto L_80198424; } // 80198418
  c->r[3]=0u+0x00000000u; // 8019841C
  goto L_80198738; // 80198420
L_80198424:;
  c->r[3]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80198424
  c->r[0]=0u+0x80000000u; // 80198428
  c->r[31]=c->r[0]+c->r[3]; // 8019842C
  c->r[3]=R32(c->r[29]+0x00000020u); // 80198430
  c->r[0]=R32(c->r[31]+0x000030C0u); // 80198434
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80198438
  if (!crb(c,2)) { goto L_80198450; } // 8019843C
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 80198440
  W32(c->r[27]+0x00000000u,c->r[0]); // 80198444
  c->r[3]=R32(c->r[29]+0x00000020u); // 80198448
  goto L_80198738; // 8019844C
L_80198450:;
  c->lr=0x80198454u; f_80160C68(c); // 80198450
  c->r[30]=c->r[3]|c->r[3]; // 80198454
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80198458
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8019845C
  if (!crb(c,2)) { goto L_80198474; } // 80198460
  c->r[3]=c->r[25]|c->r[25]; // 80198464
  c->lr=0x8019846Cu; f_801976C4(c); // 80198468
  cmps(c,0,(int32_t)c->r[3],0); // 8019846C
  if (!crb(c,2)) { goto L_80198484; } // 80198470
L_80198474:;
  c->r[3]=c->r[30]|c->r[30]; // 80198474
  c->lr=0x8019847Cu; f_80160C90(c); // 80198478
  c->r[0]=0u+0x00000000u; // 8019847C
  goto L_801984D4; // 80198480
L_80198484:;
  c->r[3]=(uint32_t)((int32_t)c->r[25]*(int32_t)20); // 80198484
  c->r[0]=0u+0xCD000000u; // 80198488
  c->r[3]=c->r[0]+c->r[3]; // 8019848C
  c->r[0]=R32(c->r[3]+0x00006800u); // 80198490
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 80198494
  c->r[0]=c->r[0]|0x00000002u; // 80198498
  W32(c->r[3]+0x00006800u,c->r[0]); // 8019849C
  c->r[0]=0u+0x00000000u; // 801984A0
  W32(c->r[29]+0x00000008u,c->r[0]); // 801984A4
  c->r[3]=0u+0x00100000u; // 801984A8
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801984AC
  c->r[0]=c->r[0]-c->r[25]; // 801984B0
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801984B4
  c->lr=0x801984BCu; f_80161078(c); // 801984B8
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801984BC
  c->r[0]=c->r[0]|0x00000008u; // 801984C0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801984C4
  c->r[3]=c->r[30]|c->r[30]; // 801984C8
  c->lr=0x801984D0u; f_80160C90(c); // 801984CC
  c->r[0]=0u+0x00000001u; // 801984D0
L_801984D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801984D4
  if (!crb(c,2)) { goto L_801984E4; } // 801984D8
  c->r[3]=0u+0x00000000u; // 801984DC
  goto L_80198738; // 801984E0
L_801984E4:;
  c->r[31]=R32(c->r[31]+0x000030C0u); // 801984E4
L_801984E8:;
  c->lr=0x801984ECu; f_80160C68(c); // 801984E8
  c->r[28]=c->r[3]|c->r[3]; // 801984EC
  c->r[3]=c->r[25]|c->r[25]; // 801984F0
  c->r[4]=c->r[26]|c->r[26]; // 801984F4
  c->r[5]=0u+0x00000000u; // 801984F8
  cmps(c,0,(int32_t)c->r[25],2); // 801984FC
  if (!crb(c,0)) { goto L_80198510; } // 80198500
  cmps(c,0,(int32_t)c->r[26],0); // 80198504
  if (!crb(c,2)) { goto L_80198510; } // 80198508
  c->r[5]=0u+0x00000001u; // 8019850C
L_80198510:;
  c->r[0]=0u-c->r[5]; // 80198510
  c->r[0]=c->r[0]|c->r[5]; // 80198514
  c->r[0]=sraw(c,c->r[0],31); // 80198518
  c->r[5]=0u+0x801A0000u; // 8019851C
  c->r[5]=c->r[5]+0xFFFF837Cu; // 80198520
  c->r[5]=c->r[5]&c->r[0]; // 80198524
  c->lr=0x8019852Cu; f_801981A8(c); // 80198528
  c->r[0]=cntlz(c->r[3]); // 8019852C
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 80198530
  if (!crb(c,2)) { goto L_80198660; } // 80198534
  c->r[3]=c->r[25]|c->r[25]; // 80198538
  c->r[4]=c->r[26]|c->r[26]; // 8019853C
  c->r[5]=0u+0x00000000u; // 80198540
  c->lr=0x80198548u; f_80197A14(c); // 80198544
  c->r[0]=cntlz(c->r[3]); // 80198548
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 8019854C
  if (!crb(c,2)) { goto L_801985E0; } // 80198550
  c->r[0]=0u+0x00000000u; // 80198554
  W32(c->r[1]+0x00000008u,c->r[0]); // 80198558
  c->r[3]=c->r[25]|c->r[25]; // 8019855C
  c->r[4]=c->r[1]+0x00000008u; // 80198560
  c->r[5]=0u+0x00000002u; // 80198564
  c->r[6]=0u+0x00000001u; // 80198568
  c->r[7]=0u+0x00000000u; // 8019856C
  c->lr=0x80198574u; f_80196FAC(c); // 80198570
  c->r[0]=cntlz(c->r[3]); // 80198574
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198578
  c->r[30]=c->r[30]|c->r[0]; // 8019857C
  c->r[3]=c->r[25]|c->r[25]; // 80198580
  c->lr=0x80198588u; f_801973C4(c); // 80198584
  c->r[0]=cntlz(c->r[3]); // 80198588
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019858C
  c->r[30]=c->r[30]|c->r[0]; // 80198590
  c->r[3]=c->r[25]|c->r[25]; // 80198594
  c->r[4]=c->r[27]|c->r[27]; // 80198598
  c->r[5]=0u+0x00000004u; // 8019859C
  c->r[6]=0u+0x00000000u; // 801985A0
  c->r[7]=0u+0x00000000u; // 801985A4
  c->lr=0x801985ACu; f_80196FAC(c); // 801985A8
  c->r[0]=cntlz(c->r[3]); // 801985AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801985B0
  c->r[30]=c->r[30]|c->r[0]; // 801985B4
  c->r[3]=c->r[25]|c->r[25]; // 801985B8
  c->lr=0x801985C0u; f_801973C4(c); // 801985BC
  c->r[0]=cntlz(c->r[3]); // 801985C0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801985C4
  c->r[30]=c->r[30]|c->r[0]; // 801985C8
  c->r[3]=c->r[25]|c->r[25]; // 801985CC
  c->lr=0x801985D4u; f_80197B44(c); // 801985D0
  c->r[0]=cntlz(c->r[3]); // 801985D4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801985D8
  c->r[30]=c->r[30]|c->r[0]; // 801985DC
L_801985E0:;
  c->lr=0x801985E4u; f_80160C68(c); // 801985E0
  c->r[23]=c->r[3]|c->r[3]; // 801985E4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801985E8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801985EC
  if (!crb(c,2)) { goto L_801985FC; } // 801985F0
  c->lr=0x801985F8u; f_80160C90(c); // 801985F4
  goto L_80198660; // 801985F8
L_801985FC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801985FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80198600
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80198604
  c->r[3]=c->r[25]|c->r[25]; // 80198608
  c->r[4]=c->r[29]|c->r[29]; // 8019860C
  c->lr=0x80198614u; f_80196EBC(c); // 80198610
  c->r[3]=R32(c->r[29]+0x00000024u); // 80198614
  cmps(c,0,(int32_t)c->r[3],0); // 80198618
  if (!crb(c,1)) { goto L_80198658; } // 8019861C
  c->r[24]=R32(c->r[29]+0x0000002Cu); // 80198620
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80198624
  W32(c->r[29]+0x00000024u,c->r[0]); // 80198628
  if (!crb(c,1)) { goto L_80198644; } // 8019862C
  c->r[3]=c->r[29]+0x00000028u; // 80198630
  c->r[4]=c->r[29]+0x00000030u; // 80198634
  c->r[0]=R32(c->r[29]+0x00000024u); // 80198638
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019863C
  c->lr=0x80198644u; f_8018C04C(c); // 80198640
L_80198644:;
  c->r[3]=c->r[25]|c->r[25]; // 80198644
  c->r[4]=0u+0x00000000u; // 80198648
  c->r[12]=c->r[24]|c->r[24]; // 8019864C
  c->ctr=c->r[12]; // 80198650
  if (true) { c->lr=0x80198658u; dispatch(c,c->ctr); } // 80198654
L_80198658:;
  c->r[3]=c->r[23]|c->r[23]; // 80198658
  c->lr=0x80198660u; f_80160C90(c); // 8019865C
L_80198660:;
  c->r[3]=c->r[28]|c->r[28]; // 80198660
  c->lr=0x80198668u; f_80160C90(c); // 80198664
  cmps(c,0,(int32_t)c->r[25],2); // 80198668
  if (!crb(c,0)) { goto L_80198730; } // 8019866C
  cmps(c,0,(int32_t)c->r[26],0); // 80198670
  if (!crb(c,2)) { goto L_80198730; } // 80198674
  c->lr=0x8019867Cu; f_80160C68(c); // 80198678
  c->r[23]=c->r[3]|c->r[3]; // 8019867C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80198680
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80198684
  if (!crb(c,2)) { goto L_80198694; } // 80198688
  c->lr=0x80198690u; f_80160C90(c); // 8019868C
  goto L_801986DC; // 80198690
L_80198694:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80198694
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80198698
  if (crb(c,2)) { goto L_801986B4; } // 8019869C
  c->r[0]=R32(c->r[29]+0x00000018u); // 801986A0
  cmps(c,0,(int32_t)c->r[0],0); // 801986A4
  if (!crb(c,2)) { goto L_801986B4; } // 801986A8
  c->lr=0x801986B0u; f_80160C90(c); // 801986AC
  goto L_801986DC; // 801986B0
L_801986B4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801986B4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801986B8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801986BC
  c->r[3]=0u+0x00500000u; // 801986C0
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801986C4
  c->r[0]=c->r[0]-c->r[25]; // 801986C8
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801986CC
  c->lr=0x801986D4u; f_80160FF8(c); // 801986D0
  c->r[3]=c->r[23]|c->r[23]; // 801986D4
  c->lr=0x801986DCu; f_80160C90(c); // 801986D8
L_801986DC:;
  c->lr=0x801986E0u; f_80160C68(c); // 801986DC
  c->r[4]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801986E0
  c->r[0]=0u+0x80000000u; // 801986E4
  c->r[4]=c->r[0]+c->r[4]; // 801986E8
  c->r[0]=R32(c->r[4]+0x000030C0u); // 801986EC
  c->r[4]=c->r[0]-c->r[31]; // 801986F0
  c->r[0]=c->r[31]-c->r[0]; // 801986F4
  c->r[0]=c->r[4]|c->r[0]; // 801986F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801986FC
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 80198700
  if (!crb(c,2)) { goto L_80198714; } // 80198704
  c->r[0]=R32(c->r[27]+0x00000000u); // 80198708
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8019870C
  W32(c->r[29]+0x00000020u,c->r[31]); // 80198710
L_80198714:;
  c->lr=0x80198718u; f_80160C90(c); // 80198714
  cmps(c,0,(int32_t)c->r[30],0); // 80198718
  if (crb(c,2)) { goto L_80198728; } // 8019871C
  c->r[3]=0u+0x00000000u; // 80198720
  goto L_80198738; // 80198724
L_80198728:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 80198728
  goto L_80198738; // 8019872C
L_80198730:;
  c->r[0]=cntlz(c->r[30]); // 80198730
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198734
L_80198738:;
  c->r[11]=c->r[1]+0x00000040u; // 80198738
  c->lr=0x80198740u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8019873C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80198740
  c->lr=c->r[0]; // 80198744
  c->r[1]=c->r[1]+0x00000040u; // 80198748
  return; // 8019874C
}

// ProbeBarnacle
void f_80198750(Ctx* __restrict c) {
  trace_call(0x80198750u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80198750
  c->r[0]=c->lr; // 80198754
  cmps(c,0,(int32_t)c->r[3],2); // 80198758
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019875C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80198760
  c->r[31]=c->r[5]|c->r[5]; // 80198764
  W32(c->r[1]+0x00000018u,c->r[30]); // 80198768
  c->r[30]=c->r[4]|c->r[4]; // 8019876C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80198770
  c->r[29]=c->r[3]|c->r[3]; // 80198774
  W32(c->r[1]+0x00000010u,c->r[28]); // 80198778
  if (crb(c,2)) { goto L_801987A0; } // 8019877C
  cmps(c,0,(int32_t)c->r[4],0); // 80198780
  if (!crb(c,2)) { goto L_801987A0; } // 80198784
  c->r[4]=0u+0x00000000u; // 80198788
  c->lr=0x80198790u; f_80197844(c); // 8019878C
  cmps(c,0,(int32_t)c->r[3],0); // 80198790
  if (!crb(c,2)) { goto L_801987A0; } // 80198794
  c->r[3]=0u+0x00000000u; // 80198798
  goto L_801988A8; // 8019879C
L_801987A0:;
  c->r[3]=c->r[29]|c->r[29]; // 801987A0
  c->r[4]=c->r[30]|c->r[30]; // 801987A4
  c->r[5]=0u+0x00000000u; // 801987A8
  c->lr=0x801987B0u; f_801981A8(c); // 801987AC
  c->r[0]=cntlz(c->r[3]); // 801987B0
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[28]); // 801987B4
  if (!crb(c,2)) { goto L_8019886C; } // 801987B8
  c->r[3]=c->r[29]|c->r[29]; // 801987BC
  c->r[4]=c->r[30]|c->r[30]; // 801987C0
  c->r[5]=0u+0x00000000u; // 801987C4
  c->lr=0x801987CCu; f_80197A14(c); // 801987C8
  c->r[0]=cntlz(c->r[3]); // 801987CC
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[28]); // 801987D0
  if (!crb(c,2)) { goto L_80198864; } // 801987D4
  c->r[4]=0u+0x20010000u; // 801987D8
  c->r[3]=c->r[29]|c->r[29]; // 801987DC
  c->r[0]=c->r[4]+0x00001300u; // 801987E0
  c->r[5]=0u+0x00000004u; // 801987E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801987E8
  c->r[4]=c->r[1]+0x00000008u; // 801987EC
  c->r[6]=0u+0x00000001u; // 801987F0
  c->r[7]=0u+0x00000000u; // 801987F4
  c->lr=0x801987FCu; f_80196FAC(c); // 801987F8
  c->r[0]=cntlz(c->r[3]); // 801987FC
  c->r[3]=c->r[29]|c->r[29]; // 80198800
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198804
  c->lr=0x8019880Cu; f_801973C4(c); // 80198808
  c->r[0]=cntlz(c->r[3]); // 8019880C
  c->r[3]=c->r[29]|c->r[29]; // 80198810
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198814
  c->r[4]=c->r[31]|c->r[31]; // 80198818
  c->r[28]=c->r[28]|c->r[0]; // 8019881C
  c->r[5]=0u+0x00000004u; // 80198820
  c->r[6]=0u+0x00000000u; // 80198824
  c->r[7]=0u+0x00000000u; // 80198828
  c->lr=0x80198830u; f_80196FAC(c); // 8019882C
  c->r[0]=cntlz(c->r[3]); // 80198830
  c->r[3]=c->r[29]|c->r[29]; // 80198834
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198838
  c->r[28]=c->r[28]|c->r[0]; // 8019883C
  c->lr=0x80198844u; f_801973C4(c); // 80198840
  c->r[0]=cntlz(c->r[3]); // 80198844
  c->r[3]=c->r[29]|c->r[29]; // 80198848
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019884C
  c->r[28]=c->r[28]|c->r[0]; // 80198850
  c->lr=0x80198858u; f_80197B44(c); // 80198854
  c->r[0]=cntlz(c->r[3]); // 80198858
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019885C
  c->r[28]=c->r[28]|c->r[0]; // 80198860
L_80198864:;
  c->r[3]=c->r[29]|c->r[29]; // 80198864
  c->lr=0x8019886Cu; f_801982A4(c); // 80198868
L_8019886C:;
  cmps(c,0,(int32_t)c->r[29],2); // 8019886C
  if (crb(c,2)) { goto L_80198884; } // 80198870
  cmps(c,0,(int32_t)c->r[30],0); // 80198874
  if (!crb(c,2)) { goto L_80198884; } // 80198878
  c->r[3]=c->r[29]|c->r[29]; // 8019887C
  c->lr=0x80198884u; f_8019795C(c); // 80198880
L_80198884:;
  cmps(c,0,(int32_t)c->r[28],0); // 80198884
  if (crb(c,2)) { goto L_80198894; } // 80198888
  c->r[3]=0u+0x00000000u; // 8019888C
  goto L_801988A8; // 80198890
L_80198894:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80198894
  c->r[3]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 80198898
  c->r[0]=c->r[4]+0x00000001u; // 8019889C
  c->r[0]=c->r[3]|c->r[0]; // 801988A0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801988A4
L_801988A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801988A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801988AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801988B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801988B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801988B8
  c->lr=c->r[0]; // 801988BC
  c->r[1]=c->r[1]+0x00000020u; // 801988C0
  return; // 801988C4
}

// __OSEnableBarnacle
void f_801988C8(Ctx* __restrict c) {
  trace_call(0x801988C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801988C8
  c->r[0]=c->lr; // 801988CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801988D0
  c->r[5]=c->r[1]+0x00000008u; // 801988D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801988D8
  c->r[31]=c->r[4]|c->r[4]; // 801988DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801988E0
  c->r[30]=c->r[3]|c->r[3]; // 801988E4
  c->lr=0x801988ECu; f_801983A4(c); // 801988E8
  cmps(c,0,(int32_t)c->r[3],0); // 801988EC
  if (crb(c,2)) { goto L_80198A6C; } // 801988F0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801988F4
  c->r[0]=0u+0x01020000u; // 801988F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801988FC
  if (crb(c,2)) { goto L_80198A6C; } // 80198900
  if (!crb(c,0)) { goto L_80198998; } // 80198904
  cmps(c,0,(int32_t)c->r[4],4); // 80198908
  if (crb(c,2)) { goto L_80198A6C; } // 8019890C
  if (!crb(c,0)) { goto L_80198964; } // 80198910
  c->r[3]=0u+0x80000000u; // 80198914
  c->r[0]=c->r[3]+0x00000010u; // 80198918
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8019891C
  if (crb(c,2)) { goto L_80198A6C; } // 80198920
  if (!crb(c,0)) { goto L_80198948; } // 80198924
  c->r[0]=c->r[3]+0x00000008u; // 80198928
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8019892C
  if (crb(c,2)) { goto L_80198A6C; } // 80198930
  if (!crb(c,0)) { goto L_80198A3C; } // 80198934
  c->r[0]=c->r[3]+0x00000004u; // 80198938
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8019893C
  if (crb(c,2)) { goto L_80198A6C; } // 80198940
  goto L_80198A3C; // 80198944
L_80198948:;
  cmps(c,0,(int32_t)c->r[4],-1); // 80198948
  if (crb(c,2)) { goto L_80198A6C; } // 8019894C
  if (!crb(c,0)) { goto L_80198A3C; } // 80198950
  c->r[0]=c->r[3]+0x00000020u; // 80198954
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80198958
  if (crb(c,2)) { goto L_80198A6C; } // 8019895C
  goto L_80198A3C; // 80198960
L_80198964:;
  cmps(c,0,(int32_t)c->r[4],32); // 80198964
  if (crb(c,2)) { goto L_80198A6C; } // 80198968
  if (!crb(c,0)) { goto L_80198988; } // 8019896C
  cmps(c,0,(int32_t)c->r[4],16); // 80198970
  if (crb(c,2)) { goto L_80198A6C; } // 80198974
  if (!crb(c,0)) { goto L_80198A3C; } // 80198978
  cmps(c,0,(int32_t)c->r[4],8); // 8019897C
  if (crb(c,2)) { goto L_80198A6C; } // 80198980
  goto L_80198A3C; // 80198984
L_80198988:;
  c->r[0]=0u+0x01010000u; // 80198988
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8019898C
  if (crb(c,2)) { goto L_80198A6C; } // 80198990
  goto L_80198A3C; // 80198994
L_80198998:;
  c->r[3]=0u+0x04040000u; // 80198998
  c->r[0]=c->r[3]+0x00000404u; // 8019899C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801989A0
  if (crb(c,2)) { goto L_80198A6C; } // 801989A4
  if (!crb(c,0)) { goto L_80198A00; } // 801989A8
  c->r[3]=0u+0x04020000u; // 801989AC
  c->r[0]=c->r[3]+0x00000100u; // 801989B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801989B4
  if (crb(c,2)) { goto L_80198A6C; } // 801989B8
  if (!crb(c,0)) { goto L_801989E0; } // 801989BC
  c->r[0]=0u+0x03010000u; // 801989C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801989C4
  if (crb(c,2)) { goto L_80198A6C; } // 801989C8
  if (!crb(c,0)) { goto L_80198A3C; } // 801989CC
  c->r[0]=0u+0x02020000u; // 801989D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801989D4
  if (crb(c,2)) { goto L_80198A6C; } // 801989D8
  goto L_80198A3C; // 801989DC
L_801989E0:;
  c->r[0]=c->r[3]+0x00000300u; // 801989E0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801989E4
  if (crb(c,2)) { goto L_80198A6C; } // 801989E8
  if (!crb(c,0)) { goto L_80198A3C; } // 801989EC
  c->r[0]=c->r[3]+0x00000200u; // 801989F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801989F4
  if (crb(c,2)) { goto L_80198A6C; } // 801989F8
  goto L_80198A3C; // 801989FC
L_80198A00:;
  c->r[0]=0u+0x04130000u; // 80198A00
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80198A04
  if (crb(c,2)) { goto L_80198A6C; } // 80198A08
  if (!crb(c,0)) { goto L_80198A30; } // 80198A0C
  c->r[0]=0u+0x04120000u; // 80198A10
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80198A14
  if (crb(c,2)) { goto L_80198A6C; } // 80198A18
  if (!crb(c,0)) { goto L_80198A3C; } // 80198A1C
  c->r[0]=0u+0x04060000u; // 80198A20
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80198A24
  if (crb(c,2)) { goto L_80198A6C; } // 80198A28
  goto L_80198A3C; // 80198A2C
L_80198A30:;
  c->r[0]=0u+0x04220000u; // 80198A30
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80198A34
  if (crb(c,2)) { goto L_80198A6C; } // 80198A38
L_80198A3C:;
  c->r[3]=c->r[30]|c->r[30]; // 80198A3C
  c->r[4]=c->r[31]|c->r[31]; // 80198A40
  c->r[5]=c->r[1]+0x00000008u; // 80198A44
  c->lr=0x80198A4Cu; f_80198750(c); // 80198A48
  cmps(c,0,(int32_t)c->r[3],0); // 80198A4C
  if (crb(c,2)) { goto L_80198A6C; } // 80198A50
  c->r[3]=0u+0xA5FF0000u; // 80198A54
  W32(c->r[13]+0xFFFFA0DCu,c->r[30]); // 80198A58
  c->r[0]=c->r[3]+0x0000005Au; // 80198A5C
  W32(c->r[13]+0xFFFFA0D8u,c->r[31]); // 80198A60
  W32(c->r[13]+0xFFFFA0D4u,c->r[0]); // 80198A64
  W32(c->r[13]+0xFFFFA0D0u,c->r[0]); // 80198A68
L_80198A6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80198A6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80198A70
  c->r[30]=R32(c->r[1]+0x00000018u); // 80198A74
  c->lr=c->r[0]; // 80198A78
  c->r[1]=c->r[1]+0x00000020u; // 80198A7C
  return; // 80198A80
}

// EXIWriteReg
void f_80198A84(Ctx* __restrict c) {
  trace_call(0x80198A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80198A84
  c->r[0]=c->lr; // 80198A88
  cmps(c,0,(int32_t)c->r[7],2); // 80198A8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80198A90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80198A94
  c->r[31]=c->r[3]|c->r[3]; // 80198A98
  W32(c->r[1]+0x00000018u,c->r[30]); // 80198A9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80198AA0
  c->r[29]=c->r[4]|c->r[4]; // 80198AA4
  W32(c->r[1]+0x00000008u,c->r[5]); // 80198AA8
  if (crb(c,2)) { goto L_80198AD0; } // 80198AAC
  if (!crb(c,0)) { goto L_80198AE4; } // 80198AB0
  cmps(c,0,(int32_t)c->r[7],1); // 80198AB4
  if (!crb(c,0)) { goto L_80198AC0; } // 80198AB8
  goto L_80198AE4; // 80198ABC
L_80198AC0:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 80198AC0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80198AC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80198AC8
  goto L_80198B00; // 80198ACC
L_80198AD0:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 80198AD0
  c->r[0]=rotl(c->r[3],8)&0x00FF0000u; // 80198AD4
  c->r[0]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80198AD8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80198ADC
  goto L_80198B00; // 80198AE0
L_80198AE4:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80198AE4
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 80198AE8
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 80198AEC
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80198AF0
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80198AF4
  c->r[0]=c->r[3]|c->r[0]; // 80198AF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80198AFC
L_80198B00:;
  c->r[3]=c->r[31]|c->r[31]; // 80198B00
  c->r[4]=c->r[29]|c->r[29]; // 80198B04
  c->r[5]=0u+0x00000000u; // 80198B08
  c->lr=0x80198B10u; f_801981A8(c); // 80198B0C
  c->r[0]=cntlz(c->r[3]); // 80198B10
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 80198B14
  if (crb(c,2)) { goto L_80198B24; } // 80198B18
  c->r[3]=0u+0x00000000u; // 80198B1C
  goto L_80198BF4; // 80198B20
L_80198B24:;
  c->r[3]=c->r[31]|c->r[31]; // 80198B24
  c->r[4]=c->r[29]|c->r[29]; // 80198B28
  c->r[5]=0u+0x00000004u; // 80198B2C
  c->lr=0x80198B34u; f_80197A14(c); // 80198B30
  c->r[0]=cntlz(c->r[3]); // 80198B34
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198B38
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 80198B3C
  if (crb(c,2)) { goto L_80198B54; } // 80198B40
  c->r[3]=c->r[31]|c->r[31]; // 80198B44
  c->lr=0x80198B4Cu; f_801982A4(c); // 80198B48
  c->r[3]=0u+0x00000000u; // 80198B4C
  goto L_80198BF4; // 80198B50
L_80198B54:;
  c->r[3]=c->r[31]|c->r[31]; // 80198B54
  c->r[4]=c->r[1]+0x00000008u; // 80198B58
  c->r[5]=0u+0x00000004u; // 80198B5C
  c->r[6]=0u+0x00000001u; // 80198B60
  c->r[7]=0u+0x00000000u; // 80198B64
  c->lr=0x80198B6Cu; f_80196FAC(c); // 80198B68
  c->r[0]=cntlz(c->r[3]); // 80198B6C
  c->r[3]=c->r[31]|c->r[31]; // 80198B70
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198B74
  c->r[30]=c->r[30]|c->r[0]; // 80198B78
  c->lr=0x80198B80u; f_801973C4(c); // 80198B7C
  c->r[0]=cntlz(c->r[3]); // 80198B80
  c->r[3]=c->r[31]|c->r[31]; // 80198B84
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198B88
  c->r[4]=c->r[1]+0x0000000Cu; // 80198B8C
  c->r[30]=c->r[30]|c->r[0]; // 80198B90
  c->r[5]=0u+0x00000004u; // 80198B94
  c->r[6]=0u+0x00000001u; // 80198B98
  c->r[7]=0u+0x00000000u; // 80198B9C
  c->lr=0x80198BA4u; f_80196FAC(c); // 80198BA0
  c->r[0]=cntlz(c->r[3]); // 80198BA4
  c->r[3]=c->r[31]|c->r[31]; // 80198BA8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198BAC
  c->r[30]=c->r[30]|c->r[0]; // 80198BB0
  c->lr=0x80198BB8u; f_801973C4(c); // 80198BB4
  c->r[0]=cntlz(c->r[3]); // 80198BB8
  c->r[3]=c->r[31]|c->r[31]; // 80198BBC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198BC0
  c->r[30]=c->r[30]|c->r[0]; // 80198BC4
  c->lr=0x80198BCCu; f_80197B44(c); // 80198BC8
  c->r[0]=cntlz(c->r[3]); // 80198BCC
  c->r[3]=c->r[31]|c->r[31]; // 80198BD0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198BD4
  c->r[30]=c->r[30]|c->r[0]; // 80198BD8
  c->lr=0x80198BE0u; f_801982A4(c); // 80198BDC
  c->r[0]=cntlz(c->r[3]); // 80198BE0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198BE4
  c->r[30]=c->r[30]|c->r[0]; // 80198BE8
  c->r[0]=cntlz(c->r[30]); // 80198BEC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80198BF0
L_80198BF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80198BF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80198BF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80198BFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80198C00
  c->lr=c->r[0]; // 80198C04
  c->r[1]=c->r[1]+0x00000020u; // 80198C08
  return; // 80198C0C
}

// fn_80198C10
void f_80198C10(Ctx* __restrict c) {
  c->r[3]=0u+0x80330000u; // 80198C10
  c->r[4]=R32(c->r[3]+0x00000CB8u); // 80198C14
  c->r[3]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 80198C18
  c->r[0]=c->r[4]+0x00000001u; // 80198C1C
  c->r[0]=c->r[3]|c->r[0]; // 80198C20
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80198C24
  return; // 80198C28
}

// fn_80198C2C
void f_80198C2C(Ctx* __restrict c) {
  c->r[4]=0u+0x80390000u; // 80198C2C
  c->r[0]=rotl(c->r[3],5)&0xFFFFFFE0u; // 80198C30
  c->r[4]=c->r[4]+0xFFFFFA50u; // 80198C34
  c->r[5]=0u+0x00000000u; // 80198C38
  c->r[0]=R32(c->r[4]+c->r[0]); // 80198C3C
  cmps(c,0,(int32_t)c->r[0],-1); // 80198C40
  if (!crb(c,2)) { goto L_80198C58; } // 80198C44
  c->r[4]=0u+0x80330000u; // 80198C48
  c->r[0]=R32(c->r[4]+0x00000CB8u); // 80198C4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80198C50
  if (!crb(c,2)) { goto L_80198C5C; } // 80198C54
L_80198C58:;
  c->r[5]=0u+0x00000001u; // 80198C58
L_80198C5C:;
  c->r[3]=c->r[5]|c->r[5]; // 80198C5C
  return; // 80198C60
}

// CompleteTransfer
void f_80198C64(Ctx* __restrict c) {
  trace_call(0x80198C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80198C64
  c->r[0]=c->lr; // 80198C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 80198C6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80198C70
  W32(c->r[1]+0x00000018u,c->r[30]); // 80198C74
  c->r[30]=0u+0x80330000u; // 80198C78
  W32(c->r[1]+0x00000014u,c->r[29]); // 80198C7C
  c->r[29]=0u+0xCD000000u; // 80198C80
  c->r[31]=R32(c->r[29]+0x00006438u); // 80198C84
  c->r[0]=R32(c->r[29]+0x00006434u); // 80198C88
  c->r[0]=c->r[0]|0x80000000u; // 80198C8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80198C90
  W32(c->r[29]+0x00006434u,c->r[0]); // 80198C94
  c->r[0]=R32(c->r[30]+0x00000CB8u); // 80198C98
  cmps(c,0,(int32_t)c->r[0],-1); // 80198C9C
  if (crb(c,2)) { goto L_80198F38; } // 80198CA0
  c->lr=0x80198CA8u; f_80164E14(c); // 80198CA4
  c->r[7]=R32(c->r[30]+0x00000CB8u); // 80198CA8
  c->r[6]=0u+0x80390000u; // 80198CAC
  c->r[5]=c->r[30]+0x00000CB8u; // 80198CB0
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80198CB4
  c->r[6]=c->r[6]+0xFFFFFAD0u; // 80198CB8
  c->r[0]=R32(c->r[5]+0x00000008u); // 80198CBC
  c->r[6]=c->r[6]+c->r[7]; // 80198CC0
  W32(c->r[6]+0x00000004u,c->r[4]); // 80198CC4
  c->r[7]=0u+0x00000000u; // 80198CC8
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[8]); // 80198CCC
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80198CD0
  W32(c->r[6]+0x00000000u,c->r[3]); // 80198CD4
  if (crb(c,2)) { goto L_80198D88; } // 80198CD8
  cmpu(c,0,c->r[8],0x00000008u); // 80198CDC
  c->r[3]=c->r[8]+0xFFFFFFF8u; // 80198CE0
  if (!crb(c,1)) { goto L_80198D50; } // 80198CE4
  c->r[0]=c->r[3]+0x00000007u; // 80198CE8
  c->r[4]=c->r[29]+0x00006400u; // 80198CEC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80198CF0
  c->ctr=c->r[0]; // 80198CF4
  cmpu(c,0,c->r[3],0x00000000u); // 80198CF8
  if (!crb(c,1)) { goto L_80198D50; } // 80198CFC
L_80198D00:;
  c->r[0]=R32(c->r[4]+0x00000080u); // 80198D00
  c->r[7]=c->r[7]+0x00000008u; // 80198D04
  W32(c->r[5]+0x00000000u,c->r[0]); // 80198D08
  c->r[0]=R32(c->r[4]+0x00000084u); // 80198D0C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80198D10
  c->r[0]=R32(c->r[4]+0x00000088u); // 80198D14
  W32(c->r[5]+0x00000008u,c->r[0]); // 80198D18
  c->r[0]=R32(c->r[4]+0x0000008Cu); // 80198D1C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80198D20
  c->r[0]=R32(c->r[4]+0x00000090u); // 80198D24
  W32(c->r[5]+0x00000010u,c->r[0]); // 80198D28
  c->r[0]=R32(c->r[4]+0x00000094u); // 80198D2C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80198D30
  c->r[0]=R32(c->r[4]+0x00000098u); // 80198D34
  W32(c->r[5]+0x00000018u,c->r[0]); // 80198D38
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 80198D3C
  c->r[4]=c->r[4]+0x00000020u; // 80198D40
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80198D44
  c->r[5]=c->r[5]+0x00000020u; // 80198D48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80198D00; } // 80198D4C
L_80198D50:;
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80198D50
  c->r[0]=0u+0xCD000000u; // 80198D54
  c->r[3]=c->r[0]+c->r[3]; // 80198D58
  c->r[0]=c->r[8]-c->r[7]; // 80198D5C
  c->r[3]=c->r[3]+0x00006400u; // 80198D60
  c->ctr=c->r[0]; // 80198D64
  cmpu(c,0,c->r[7],c->r[8]); // 80198D68
  if (!crb(c,0)) { goto L_80198D88; } // 80198D6C
L_80198D70:;
  c->r[0]=R32(c->r[3]+0x00000080u); // 80198D70
  c->r[3]=c->r[3]+0x00000004u; // 80198D74
  c->r[7]=c->r[7]+0x00000001u; // 80198D78
  W32(c->r[5]+0x00000000u,c->r[0]); // 80198D7C
  c->r[5]=c->r[5]+0x00000004u; // 80198D80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80198D70; } // 80198D84
L_80198D88:;
  c->r[3]=0u+0x80330000u; // 80198D88
  c->r[3]=c->r[3]+0x00000CB8u; // 80198D8C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80198D90
  c->r[3]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[3]); // 80198D94
  if (crb(c,2)) { goto L_80198EA4; } // 80198D98
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80198D9C
  c->r[4]=0u+0xCD000000u; // 80198DA0
  c->r[6]=c->r[4]+c->r[0]; // 80198DA4
  c->r[0]=R32(c->r[6]+0x00006480u); // 80198DA8
  c->r[4]=0u+0x00000000u; // 80198DAC
  if (crb(c,2)) { goto L_80198EA4; } // 80198DB0
  cmpu(c,0,c->r[3],0x00000008u); // 80198DB4
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 80198DB8
  if (!crb(c,1)) { goto L_80198E78; } // 80198DBC
  c->r[6]=c->r[7]+0x00000007u; // 80198DC0
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 80198DC4
  c->ctr=c->r[6]; // 80198DC8
  cmpu(c,0,c->r[7],0x00000000u); // 80198DCC
  if (!crb(c,1)) { goto L_80198E78; } // 80198DD0
L_80198DD4:;
  c->r[6]=addc(c,~c->r[4],0x00000003u,1); // 80198DD4
  c->r[7]=c->r[4]+0x00000001u; // 80198DD8
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80198DDC
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80198DE0
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 80198DE4
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80198DE8
  W8(c->r[5]+0x00000000u,c->r[9]); // 80198DEC
  c->r[7]=c->r[4]+0x00000002u; // 80198DF0
  c->r[6]=0u-c->r[4]; // 80198DF4
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80198DF8
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80198DFC
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 80198E00
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80198E04
  W8(c->r[5]+0x00000001u,c->r[9]); // 80198E08
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80198E0C
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80198E10
  c->r[6]=c->r[4]+0x00000004u; // 80198E14
  W8(c->r[5]+0x00000002u,c->r[9]); // 80198E18
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 80198E1C
  c->r[6]=c->r[4]+0x00000005u; // 80198E20
  W8(c->r[5]+0x00000003u,c->r[8]); // 80198E24
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80198E28
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80198E2C
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80198E30
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80198E34
  W8(c->r[5]+0x00000004u,c->r[9]); // 80198E38
  c->r[6]=c->r[4]+0x00000006u; // 80198E3C
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 80198E40
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80198E44
  c->r[6]=c->r[4]+0x00000007u; // 80198E48
  W8(c->r[5]+0x00000005u,c->r[8]); // 80198E4C
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80198E50
  c->r[4]=c->r[4]+0x00000008u; // 80198E54
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80198E58
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80198E5C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80198E60
  W8(c->r[5]+0x00000006u,c->r[7]); // 80198E64
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80198E68
  W8(c->r[5]+0x00000007u,c->r[6]); // 80198E6C
  c->r[5]=c->r[5]+0x00000008u; // 80198E70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80198DD4; } // 80198E74
L_80198E78:;
  c->r[6]=c->r[3]-c->r[4]; // 80198E78
  c->ctr=c->r[6]; // 80198E7C
  cmpu(c,0,c->r[4],c->r[3]); // 80198E80
  if (!crb(c,0)) { goto L_80198EA4; } // 80198E84
L_80198E88:;
  c->r[3]=addc(c,~c->r[4],0x00000003u,1); // 80198E88
  c->r[4]=c->r[4]+0x00000001u; // 80198E8C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80198E90
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 80198E94
  W8(c->r[5]+0x00000000u,c->r[3]); // 80198E98
  c->r[5]=c->r[5]+0x00000001u; // 80198E9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80198E88; } // 80198EA0
L_80198EA4:;
  c->r[3]=0u+0xCD000000u; // 80198EA4
  c->r[0]=R32(c->r[3]+0x00006434u); // 80198EA8
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 80198EAC
  if (crb(c,2)) { goto L_80198F04; } // 80198EB0
  c->r[3]=0u+0x80330000u; // 80198EB4
  c->r[4]=R32(c->r[3]+0x00000CB8u); // 80198EB8
  c->r[0]=addc(c,~c->r[4],0x00000003u,1); // 80198EBC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80198EC0
  c->r[31]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 80198EC4
  c->r[31]=rotl(c->r[31],0)&0x0000000Fu; // 80198EC8
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 80198ECC
  if (crb(c,2)) { goto L_80198EF4; } // 80198ED0
  c->r[3]=0u+0x80330000u; // 80198ED4
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80198ED8
  c->r[3]=c->r[3]+0x00000CD0u; // 80198EDC
  c->r[0]=R32(c->r[3]+c->r[4]); // 80198EE0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80198EE4
  if (!crb(c,2)) { goto L_80198EF4; } // 80198EE8
  c->r[0]=0u+0x00000008u; // 80198EEC
  W32(c->r[3]+c->r[4],c->r[0]); // 80198EF0
L_80198EF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80198EF4
  if (!crb(c,2)) { goto L_80198F2C; } // 80198EF8
  c->r[31]=0u+0x00000004u; // 80198EFC
  goto L_80198F2C; // 80198F00
L_80198F04:;
  c->lr=0x80198F08u; f_80164E14(c); // 80198F04
  c->r[6]=0u+0x80330000u; // 80198F08
  c->r[5]=0u+0x80390000u; // 80198F0C
  c->r[0]=R32(c->r[6]+0x00000CB8u); // 80198F10
  c->r[5]=c->r[5]+0xFFFFFAF0u; // 80198F14
  c->r[31]=0u+0x00000000u; // 80198F18
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80198F1C
  c->r[5]=c->r[5]+c->r[0]; // 80198F20
  W32(c->r[5]+0x00000004u,c->r[4]); // 80198F24
  W32(c->r[5]+0x00000000u,c->r[3]); // 80198F28
L_80198F2C:;
  c->r[0]=0u+0xFFFFFFFFu; // 80198F2C
  c->r[3]=0u+0x80330000u; // 80198F30
  W32(c->r[3]+0x00000CB8u,c->r[0]); // 80198F34
L_80198F38:;
  c->r[3]=c->r[31]|c->r[31]; // 80198F38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80198F3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80198F40
  c->r[29]=R32(c->r[1]+0x00000014u); // 80198F44
  c->r[0]=R32(c->r[1]+0x00000024u); // 80198F48
  c->lr=c->r[0]; // 80198F4C
  c->r[1]=c->r[1]+0x00000020u; // 80198F50
  return; // 80198F54
}

// SIInterruptHandler
void f_80198F58(Ctx* __restrict c) {
  trace_call(0x80198F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80198F58
  c->r[0]=c->lr; // 80198F5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80198F60
  c->r[11]=c->r[1]+0x00000050u; // 80198F64
  c->lr=0x80198F6Cu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80198F68
  c->r[5]=0u+0xCD000000u; // 80198F6C
  c->r[27]=0u+0x80390000u; // 80198F70
  c->r[21]=R32(c->r[5]+0x00006434u); // 80198F74
  c->r[30]=c->r[3]|c->r[3]; // 80198F78
  c->r[31]=c->r[4]|c->r[4]; // 80198F7C
  c->r[27]=c->r[27]+0xFFFFFA50u; // 80198F80
  c->r[3]=rotl(c->r[21],0)&0xC0000000u; // 80198F84
  c->r[0]=c->r[3]+0x40000000u; // 80198F88
  cmpu(c,0,c->r[0],0x00000000u); // 80198F8C
  if (!crb(c,2)) { goto L_80199134; } // 80198F90
  c->r[17]=0u+0x80330000u; // 80198F94
  c->r[22]=R32(c->r[17]+0x00000CB8u); // 80198F98
  c->lr=0x80198FA0u; f_80198C64(c); // 80198F9C
  c->r[4]=c->r[17]+0x00000CB8u; // 80198FA0
  c->r[0]=0u+0x00000000u; // 80198FA4
  c->r[24]=R32(c->r[4]+0x00000010u); // 80198FA8
  c->r[23]=c->r[3]|c->r[3]; // 80198FAC
  c->r[28]=c->r[22]|c->r[22]; // 80198FB0
  c->r[17]=c->r[27]+0x00000000u; // 80198FB4
  W32(c->r[4]+0x00000010u,c->r[0]); // 80198FB8
  c->r[26]=0u+0x00000000u; // 80198FBC
L_80198FC0:;
  c->r[28]=c->r[28]+0x00000001u; // 80198FC0
  c->r[0]=rotl(c->r[28],30)&0xC0000000u; // 80198FC4
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 80198FC8
  c->r[0]=c->r[0]-c->r[3]; // 80198FCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 80198FD0
  c->r[28]=c->r[0]+c->r[3]; // 80198FD4
  c->r[0]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80198FD8
  c->r[29]=c->r[17]+c->r[0]; // 80198FDC
  c->r[0]=R32(c->r[17]+c->r[0]); // 80198FE0
  cmps(c,0,(int32_t)c->r[0],-1); // 80198FE4
  if (crb(c,2)) { goto L_80199054; } // 80198FE8
  c->lr=0x80198FF0u; f_80164E14(c); // 80198FEC
  c->r[5]=R32(c->r[29]+0x00000018u); // 80198FF0
  c->r[0]=c->r[3]^0x80000000u; // 80198FF4
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80198FF8
  c->r[5]=c->r[5]^0x80000000u; // 80198FFC
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 80199000
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80199004
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80199008
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 8019900C
  if (!crb(c,2)) { goto L_80199054; } // 80199010
  c->r[3]=R32(c->r[29]+0x00000000u); // 80199014
  c->r[4]=R32(c->r[29]+0x00000004u); // 80199018
  c->r[5]=R32(c->r[29]+0x00000008u); // 8019901C
  c->r[6]=R32(c->r[29]+0x0000000Cu); // 80199020
  c->r[7]=R32(c->r[29]+0x00000010u); // 80199024
  c->r[8]=R32(c->r[29]+0x00000014u); // 80199028
  c->lr=0x80199030u; f_80199564(c); // 8019902C
  cmps(c,0,(int32_t)c->r[3],0); // 80199030
  if (crb(c,2)) { goto L_80199060; } // 80199034
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 80199038
  c->r[0]=c->r[27]+0x000000C0u; // 8019903C
  c->r[3]=c->r[0]+c->r[3]; // 80199040
  c->lr=0x80199048u; f_8015B2E8(c); // 80199044
  c->r[0]=0u+0xFFFFFFFFu; // 80199048
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019904C
  goto L_80199060; // 80199050
L_80199054:;
  c->r[26]=c->r[26]+0x00000001u; // 80199054
  cmps(c,0,(int32_t)c->r[26],4); // 80199058
  if (crb(c,0)) { IRQCHK(c); goto L_80198FC0; } // 8019905C
L_80199060:;
  cmps(c,0,(int32_t)c->r[24],0); // 80199060
  if (crb(c,2)) { goto L_80199080; } // 80199064
  c->r[12]=c->r[24]|c->r[24]; // 80199068
  c->r[3]=c->r[22]|c->r[22]; // 8019906C
  c->r[4]=c->r[23]|c->r[23]; // 80199070
  c->r[5]=c->r[31]|c->r[31]; // 80199074
  c->ctr=c->r[12]; // 80199078
  if (true) { c->lr=0x80199080u; dispatch(c,c->ctr); } // 8019907C
L_80199080:;
  c->r[5]=0u+0xCD000000u; // 80199080
  c->r[3]=0u+0x80330000u; // 80199084
  c->r[0]=rotl(c->r[22],3)&0xFFFFFFF8u; // 80199088
  c->r[4]=0u+0x0F000000u; // 8019908C
  c->r[4]=sraw(c,c->r[4],(c->r[0])&63); // 80199090
  c->r[6]=R32(c->r[5]+0x00006438u); // 80199094
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 80199098
  c->r[3]=c->r[3]+0x00000CD0u; // 8019909C
  c->r[6]=c->r[6]&c->r[4]; // 801990A0
  W32(c->r[5]+0x00006438u,c->r[6]); // 801990A4
  c->r[6]=c->r[3]+c->r[0]; // 801990A8
  c->r[0]=R32(c->r[3]+c->r[0]); // 801990AC
  cmpu(c,0,c->r[0],0x00000080u); // 801990B0
  if (!crb(c,2)) { goto L_80199134; } // 801990B4
  c->r[0]=rotl(c->r[22],5)&0xFFFFFFE0u; // 801990B8
  c->r[3]=c->r[27]+0x00000000u; // 801990BC
  c->r[0]=R32(c->r[3]+c->r[0]); // 801990C0
  c->r[4]=0u+0x00000000u; // 801990C4
  cmps(c,0,(int32_t)c->r[0],-1); // 801990C8
  if (!crb(c,2)) { goto L_801990E0; } // 801990CC
  c->r[3]=0u+0x80330000u; // 801990D0
  c->r[0]=R32(c->r[3]+0x00000CB8u); // 801990D4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[22]); // 801990D8
  if (!crb(c,2)) { goto L_801990E4; } // 801990DC
L_801990E0:;
  c->r[4]=0u+0x00000001u; // 801990E0
L_801990E4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801990E4
  if (!crb(c,2)) { goto L_80199134; } // 801990E8
  c->r[4]=0u+0x80000000u; // 801990EC
  c->r[8]=0u+0x801A0000u; // 801990F0
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801990F4
  c->r[3]=0u+0x431C0000u; // 801990F8
  c->r[4]=c->r[3]+0xFFFFDE83u; // 801990FC
  c->r[8]=c->r[8]+0xFFFF9C0Cu; // 80199100
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80199104
  c->r[3]=c->r[22]|c->r[22]; // 80199108
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8019910C
  c->r[4]=c->r[13]+0xFFFFA0E0u; // 80199110
  c->r[5]=0u+0x00000001u; // 80199114
  c->r[7]=0u+0x00000003u; // 80199118
  c->r[9]=0u+0x00000000u; // 8019911C
  c->r[10]=rotl(c->r[0],17)&0x0001FFFFu; // 80199120
  c->r[0]=rotl(c->r[0],23)&0x007FFFC0u; // 80199124
  c->r[0]=c->r[0]+c->r[10]; // 80199128
  c->r[10]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8019912C
  c->lr=0x80199134u; f_80199AA0(c); // 80199130
L_80199134:;
  c->r[3]=rotl(c->r[21],0)&0x18000000u; // 80199134
  c->r[0]=c->r[3]+0xE8000000u; // 80199138
  cmpu(c,0,c->r[0],0x00000000u); // 8019913C
  if (!crb(c,2)) { goto L_8019932C; } // 80199140
  c->lr=0x80199148u; f_8017438C(c); // 80199144
  c->r[4]=0u+0x80330000u; // 80199148
  c->r[25]=0u+0x80330000u; // 8019914C
  c->r[4]=c->r[4]+0x00000CB8u; // 80199150
  c->r[28]=0u+0xCD000000u; // 80199154
  c->r[0]=R32(c->r[4]+0x00000004u); // 80199158
  c->r[19]=c->r[3]+0x00000001u; // 8019915C
  c->r[25]=c->r[25]+0x00000CD0u; // 80199160
  c->r[24]=c->r[28]+0x00006400u; // 80199164
  c->r[18]=rotl(c->r[0],16)&0x000003FFu; // 80199168
  c->r[23]=c->r[27]+0x00000180u; // 8019916C
  c->r[22]=c->r[27]+0x000001A0u; // 80199170
  c->r[21]=c->r[27]+0x000001B0u; // 80199174
  c->r[20]=0u+0x00000000u; // 80199178
  c->r[29]=0u+0x00000008u; // 8019917C
  c->r[17]=0u+0x00000001u; // 80199180
L_80199184:;
  c->lr=0x80199188u; f_80160C68(c); // 80199184
  c->r[0]=addc(c,~c->r[20],0x00000003u,1); // 80199188
  c->r[26]=R32(c->r[28]+0x00006438u); // 8019918C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80199190
  c->r[26]=((c->r[0])&0x20)?0u:(c->r[26]>>((c->r[0])&31)); // 80199194
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 80199198
  if (crb(c,2)) { goto L_801991B0; } // 8019919C
  c->r[0]=R32(c->r[25]+0x00000000u); // 801991A0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801991A4
  if (!crb(c,2)) { goto L_801991B0; } // 801991A8
  W32(c->r[25]+0x00000000u,c->r[29]); // 801991AC
L_801991B0:;
  c->lr=0x801991B4u; f_80160C90(c); // 801991B0
  c->r[0]=rotl(c->r[26],0)&0x00000020u; cr0(c,c->r[0]); // 801991B4
  if (crb(c,2)) { goto L_801991D8; } // 801991B8
  c->r[0]=R32(c->r[24]+0x00000004u); // 801991BC
  c->r[3]=0u+0x00000001u; // 801991C0
  W32(c->r[23]+0x00000000u,c->r[0]); // 801991C4
  c->r[0]=R32(c->r[24]+0x00000008u); // 801991C8
  W32(c->r[23]+0x00000004u,c->r[0]); // 801991CC
  W32(c->r[22]+0x00000000u,c->r[17]); // 801991D0
  goto L_801991DC; // 801991D4
L_801991D8:;
  c->r[3]=0u+0x00000000u; // 801991D8
L_801991DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801991DC
  if (crb(c,2)) { goto L_801991E8; } // 801991E0
  W32(c->r[21]+0x00000000u,c->r[19]); // 801991E4
L_801991E8:;
  c->r[20]=c->r[20]+0x00000001u; // 801991E8
  c->r[24]=c->r[24]+0x0000000Cu; // 801991EC
  cmps(c,0,(int32_t)c->r[20],4); // 801991F0
  c->r[23]=c->r[23]+0x00000008u; // 801991F4
  c->r[22]=c->r[22]+0x00000004u; // 801991F8
  c->r[21]=c->r[21]+0x00000004u; // 801991FC
  c->r[25]=c->r[25]+0x00000004u; // 80199200
  if (crb(c,0)) { IRQCHK(c); goto L_80199184; } // 80199204
  c->r[4]=0u+0x80330000u; // 80199208
  c->r[3]=0u+0x80000000u; // 8019920C
  c->r[4]=c->r[4]+0x00000CB8u; // 80199210
  c->r[0]=0u+0x00000018u; // 80199214
  c->r[5]=R32(c->r[4]+0x00000004u); // 80199218
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 8019921C
  c->r[4]=c->r[27]+0x000001B0u; // 80199220
  c->r[6]=rotl(c->r[18],31)&0x7FFFFFFFu; // 80199224
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80199228
  if (crb(c,2)) { goto L_80199250; } // 8019922C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80199230
  cmps(c,0,(int32_t)c->r[0],0); // 80199234
  if (crb(c,2)) { goto L_8019932C; } // 80199238
  c->r[0]=R32(c->r[4]+0x00000000u); // 8019923C
  c->r[0]=c->r[6]+c->r[0]; // 80199240
  cmpu(c,0,c->r[0],c->r[19]); // 80199244
  if (!crb(c,0)) { goto L_80199250; } // 80199248
  goto L_8019932C; // 8019924C
L_80199250:;
  c->r[0]=0u+0x00000019u; // 80199250
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80199254
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80199258
  if (crb(c,2)) { goto L_80199280; } // 8019925C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80199260
  cmps(c,0,(int32_t)c->r[0],0); // 80199264
  if (crb(c,2)) { goto L_8019932C; } // 80199268
  c->r[0]=R32(c->r[4]+0x00000004u); // 8019926C
  c->r[0]=c->r[6]+c->r[0]; // 80199270
  cmpu(c,0,c->r[0],c->r[19]); // 80199274
  if (!crb(c,0)) { goto L_80199280; } // 80199278
  goto L_8019932C; // 8019927C
L_80199280:;
  c->r[0]=0u+0x0000001Au; // 80199280
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80199284
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80199288
  if (crb(c,2)) { goto L_801992B0; } // 8019928C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80199290
  cmps(c,0,(int32_t)c->r[0],0); // 80199294
  if (crb(c,2)) { goto L_8019932C; } // 80199298
  c->r[0]=R32(c->r[4]+0x00000008u); // 8019929C
  c->r[0]=c->r[6]+c->r[0]; // 801992A0
  cmpu(c,0,c->r[0],c->r[19]); // 801992A4
  if (!crb(c,0)) { goto L_801992B0; } // 801992A8
  goto L_8019932C; // 801992AC
L_801992B0:;
  c->r[0]=0u+0x0000001Bu; // 801992B0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801992B4
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 801992B8
  if (crb(c,2)) { goto L_801992E0; } // 801992BC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801992C0
  cmps(c,0,(int32_t)c->r[0],0); // 801992C4
  if (crb(c,2)) { goto L_8019932C; } // 801992C8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801992CC
  c->r[0]=c->r[6]+c->r[0]; // 801992D0
  cmpu(c,0,c->r[0],c->r[19]); // 801992D4
  if (!crb(c,0)) { goto L_801992E0; } // 801992D8
  goto L_8019932C; // 801992DC
L_801992E0:;
  c->r[0]=0u+0x00000000u; // 801992E0
  c->r[3]=c->r[27]+0x000001B0u; // 801992E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801992E8
  c->r[17]=c->r[27]+0x000001C0u; // 801992EC
  c->r[18]=0u+0x00000000u; // 801992F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801992F4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801992F8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801992FC
L_80199300:;
  c->r[12]=R32(c->r[17]+0x00000000u); // 80199300
  cmps(c,0,(int32_t)c->r[12],0); // 80199304
  if (crb(c,2)) { goto L_8019931C; } // 80199308
  c->r[3]=c->r[30]|c->r[30]; // 8019930C
  c->r[4]=c->r[31]|c->r[31]; // 80199310
  c->ctr=c->r[12]; // 80199314
  if (true) { c->lr=0x8019931Cu; dispatch(c,c->ctr); } // 80199318
L_8019931C:;
  c->r[18]=c->r[18]+0x00000001u; // 8019931C
  c->r[17]=c->r[17]+0x00000004u; // 80199320
  cmps(c,0,(int32_t)c->r[18],4); // 80199324
  if (crb(c,0)) { IRQCHK(c); goto L_80199300; } // 80199328
L_8019932C:;
  c->r[11]=c->r[1]+0x00000050u; // 8019932C
  c->lr=0x80199334u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80199330
  c->r[0]=R32(c->r[1]+0x00000054u); // 80199334
  c->lr=c->r[0]; // 80199338
  c->r[1]=c->r[1]+0x00000050u; // 8019933C
  return; // 80199340
}

// fn_80199344
void f_80199344(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199344
  c->r[0]=c->lr; // 80199348
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019934C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80199350
  c->r[31]=c->r[3]|c->r[3]; // 80199354
  c->lr=0x8019935Cu; f_80160C68(c); // 80199358
  c->r[4]=0u+0xCD000000u; // 8019935C
  cmps(c,0,(int32_t)c->r[31],0); // 80199360
  c->r[5]=R32(c->r[4]+0x00006434u); // 80199364
  c->r[31]=rotl(c->r[5],5)&0x00000001u; // 80199368
  if (crb(c,2)) { goto L_80199390; } // 8019936C
  c->r[0]=0u+0x00000000u; // 80199370
  c->r[4]=0u+0x80390000u; // 80199374
  {uint32_t ea=c->r[4]+0xFFFFFC00u; W32(ea,c->r[0]); c->r[4]=ea;} // 80199378
  c->r[5]=c->r[5]|0x08000000u; // 8019937C
  W32(c->r[4]+0x00000004u,c->r[0]); // 80199380
  W32(c->r[4]+0x00000008u,c->r[0]); // 80199384
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80199388
  goto L_80199394; // 8019938C
L_80199390:;
  c->r[5]=rotl(c->r[5],0)&0xF7FFFFFFu; // 80199390
L_80199394:;
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFEu; // 80199394
  c->r[4]=0u+0xCD000000u; // 80199398
  W32(c->r[4]+0x00006434u,c->r[0]); // 8019939C
  c->lr=0x801993A4u; f_80160C90(c); // 801993A0
  c->r[3]=c->r[31]|c->r[31]; // 801993A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801993A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801993AC
  c->lr=c->r[0]; // 801993B0
  c->r[1]=c->r[1]+0x00000010u; // 801993B4
  return; // 801993B8
}

// fn_801993BC
void f_801993BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801993BC
  c->r[0]=c->lr; // 801993C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801993C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801993C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801993CC
  c->r[30]=c->r[3]|c->r[3]; // 801993D0
  c->lr=0x801993D8u; f_80160C68(c); // 801993D4
  c->r[4]=0u+0x80390000u; // 801993D8
  c->r[0]=0u+0x00000004u; // 801993DC
  c->r[31]=c->r[3]|c->r[3]; // 801993E0
  c->r[5]=0u+0x00000000u; // 801993E4
  c->r[4]=c->r[4]+0xFFFFFC10u; // 801993E8
  c->ctr=c->r[0]; // 801993EC
L_801993F0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801993F0
  cmpu(c,0,c->r[0],c->r[30]); // 801993F4
  if (!crb(c,2)) { goto L_80199474; } // 801993F8
  c->r[3]=0u+0x80390000u; // 801993FC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80199400
  c->r[3]=c->r[3]+0xFFFFFC10u; // 80199404
  c->r[4]=0u+0x00000000u; // 80199408
  W32(c->r[3]+c->r[0],c->r[4]); // 8019940C
  c->r[4]=0u+0x00000000u; // 80199410
  c->r[0]=R32(c->r[3]+0x00000000u); // 80199414
  cmps(c,0,(int32_t)c->r[0],0); // 80199418
  if (!crb(c,2)) { goto L_80199454; } // 8019941C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80199420
  c->r[4]=0u+0x00000001u; // 80199424
  cmps(c,0,(int32_t)c->r[0],0); // 80199428
  if (!crb(c,2)) { goto L_80199454; } // 8019942C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80199430
  c->r[4]=0u+0x00000002u; // 80199434
  cmps(c,0,(int32_t)c->r[0],0); // 80199438
  if (!crb(c,2)) { goto L_80199454; } // 8019943C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80199440
  c->r[4]=0u+0x00000003u; // 80199444
  cmps(c,0,(int32_t)c->r[0],0); // 80199448
  if (!crb(c,2)) { goto L_80199454; } // 8019944C
  c->r[4]=0u+0x00000004u; // 80199450
L_80199454:;
  cmps(c,0,(int32_t)c->r[4],4); // 80199454
  if (!crb(c,2)) { goto L_80199464; } // 80199458
  c->r[3]=0u+0x00000000u; // 8019945C
  c->lr=0x80199464u; f_80199344(c); // 80199460
L_80199464:;
  c->r[3]=c->r[31]|c->r[31]; // 80199464
  c->lr=0x8019946Cu; f_80160C90(c); // 80199468
  c->r[3]=0u+0x00000001u; // 8019946C
  goto L_8019948C; // 80199470
L_80199474:;
  c->r[4]=c->r[4]+0x00000004u; // 80199474
  c->r[5]=c->r[5]+0x00000001u; // 80199478
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801993F0; } // 8019947C
  c->r[3]=c->r[31]|c->r[31]; // 80199480
  c->lr=0x80199488u; f_80160C90(c); // 80199484
  c->r[3]=0u+0x00000000u; // 80199488
L_8019948C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019948C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80199490
  c->r[30]=R32(c->r[1]+0x00000008u); // 80199494
  c->lr=c->r[0]; // 80199498
  c->r[1]=c->r[1]+0x00000010u; // 8019949C
  return; // 801994A0
}

// SIInit
void f_801994A4(Ctx* __restrict c) {
  trace_call(0x801994A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801994A4
  c->r[0]=c->lr; // 801994A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801994AC
  c->r[0]=R32(c->r[13]+0xFFFFA0E4u); // 801994B0
  cmps(c,0,(int32_t)c->r[0],0); // 801994B4
  if (!crb(c,2)) { goto L_80199554; } // 801994B8
  c->r[3]=R32(c->r[13]+0xFFFF9290u); // 801994BC
  c->lr=0x801994C4u; f_8015AE88(c); // 801994C0
  c->r[6]=0u+0x80390000u; // 801994C4
  c->r[4]=0u+0x80330000u; // 801994C8
  c->r[7]=0u+0xFFFFFFFFu; // 801994CC
  c->r[0]=0u+0x00000000u; // 801994D0
  c->r[5]=c->r[6]+0xFFFFFA50u; // 801994D4
  c->r[4]=c->r[4]+0x00000CB8u; // 801994D8
  W32(c->r[5]+0x00000060u,c->r[7]); // 801994DC
  c->r[3]=0u+0x00000000u; // 801994E0
  W32(c->r[5]+0x00000040u,c->r[7]); // 801994E4
  W32(c->r[5]+0x00000020u,c->r[7]); // 801994E8
  W32(c->r[6]+0xFFFFFA50u,c->r[7]); // 801994EC
  W32(c->r[4]+0x00000004u,c->r[0]); // 801994F0
  c->lr=0x801994F8u; f_8019A180(c); // 801994F4
  c->r[3]=0u+0xCD000000u; // 801994F8
L_801994FC:;
  c->r[0]=R32(c->r[3]+0x00006434u); // 801994FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80199500
  if (!crb(c,2)) { IRQCHK(c); goto L_801994FC; } // 80199504
  c->r[0]=0u+0x80000000u; // 80199508
  c->r[3]=0u+0xCD000000u; // 8019950C
  c->r[4]=0u+0x801A0000u; // 80199510
  W32(c->r[3]+0x00006434u,c->r[0]); // 80199514
  c->r[4]=c->r[4]+0xFFFF8F58u; // 80199518
  c->r[3]=0u+0x00000014u; // 8019951C
  c->lr=0x80199524u; f_80160CB4(c); // 80199520
  c->r[3]=0u+0x00000800u; // 80199524
  c->lr=0x8019952Cu; f_80161078(c); // 80199528
  c->r[3]=0u+0x00000000u; // 8019952C
  c->lr=0x80199534u; f_80199EBC(c); // 80199530
  c->r[3]=0u+0x00000001u; // 80199534
  c->lr=0x8019953Cu; f_80199EBC(c); // 80199538
  c->r[3]=0u+0x00000002u; // 8019953C
  c->lr=0x80199544u; f_80199EBC(c); // 80199540
  c->r[3]=0u+0x00000003u; // 80199544
  c->lr=0x8019954Cu; f_80199EBC(c); // 80199548
  c->r[0]=0u+0x00000001u; // 8019954C
  W32(c->r[13]+0xFFFFA0E4u,c->r[0]); // 80199550
L_80199554:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80199554
  c->lr=c->r[0]; // 80199558
  c->r[1]=c->r[1]+0x00000010u; // 8019955C
  return; // 80199560
}

// __SITransfer
void f_80199564(Ctx* __restrict c) {
  trace_call(0x80199564u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199564
  c->r[0]=c->lr; // 80199568
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019956C
  c->r[11]=c->r[1]+0x00000020u; // 80199570
  c->lr=0x80199578u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80199574
  c->r[27]=c->r[3]|c->r[3]; // 80199578
  c->r[28]=c->r[4]|c->r[4]; // 8019957C
  c->r[29]=c->r[5]|c->r[5]; // 80199580
  c->r[26]=c->r[6]|c->r[6]; // 80199584
  c->r[30]=c->r[7]|c->r[7]; // 80199588
  c->r[31]=c->r[8]|c->r[8]; // 8019958C
  c->lr=0x80199594u; f_80160C68(c); // 80199590
  c->r[8]=0u+0x80330000u; // 80199594
  c->r[0]=R32(c->r[8]+0x00000CB8u); // 80199598
  cmps(c,0,(int32_t)c->r[0],-1); // 8019959C
  if (crb(c,2)) { goto L_801995B0; } // 801995A0
  c->lr=0x801995A8u; f_80160C90(c); // 801995A4
  c->r[3]=0u+0x00000000u; // 801995A8
  goto L_801996FC; // 801995AC
L_801995B0:;
  c->r[7]=0u+0xCD000000u; // 801995B0
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801995B4
  c->r[5]=0u+0x0F000000u; // 801995B8
  c->r[9]=R32(c->r[7]+0x00006438u); // 801995BC
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801995C0
  c->r[0]=c->r[29]+0x00000003u; // 801995C4
  c->r[9]=c->r[9]&c->r[5]; // 801995C8
  c->r[6]=c->r[8]+0x00000CB8u; // 801995CC
  W32(c->r[7]+0x00006438u,c->r[9]); // 801995D0
  c->r[4]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[4]); // 801995D4
  c->r[5]=0u+0x00000000u; // 801995D8
  W32(c->r[8]+0x00000CB8u,c->r[27]); // 801995DC
  W32(c->r[6]+0x00000010u,c->r[31]); // 801995E0
  W32(c->r[6]+0x00000008u,c->r[30]); // 801995E4
  W32(c->r[6]+0x0000000Cu,c->r[26]); // 801995E8
  if (crb(c,2)) { goto L_801996A0; } // 801995EC
  cmpu(c,0,c->r[4],0x00000008u); // 801995F0
  c->r[6]=c->r[4]+0xFFFFFFF8u; // 801995F4
  if (!crb(c,1)) { goto L_80199668; } // 801995F8
  c->r[0]=c->r[6]+0x00000007u; // 801995FC
  c->r[8]=c->r[28]|c->r[28]; // 80199600
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80199604
  c->r[7]=c->r[7]+0x00006400u; // 80199608
  c->ctr=c->r[0]; // 8019960C
  cmpu(c,0,c->r[6],0x00000000u); // 80199610
  if (!crb(c,1)) { goto L_80199668; } // 80199614
L_80199618:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 80199618
  c->r[5]=c->r[5]+0x00000008u; // 8019961C
  W32(c->r[7]+0x00000080u,c->r[0]); // 80199620
  c->r[0]=R32(c->r[8]+0x00000004u); // 80199624
  W32(c->r[7]+0x00000084u,c->r[0]); // 80199628
  c->r[0]=R32(c->r[8]+0x00000008u); // 8019962C
  W32(c->r[7]+0x00000088u,c->r[0]); // 80199630
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80199634
  W32(c->r[7]+0x0000008Cu,c->r[0]); // 80199638
  c->r[0]=R32(c->r[8]+0x00000010u); // 8019963C
  W32(c->r[7]+0x00000090u,c->r[0]); // 80199640
  c->r[0]=R32(c->r[8]+0x00000014u); // 80199644
  W32(c->r[7]+0x00000094u,c->r[0]); // 80199648
  c->r[0]=R32(c->r[8]+0x00000018u); // 8019964C
  W32(c->r[7]+0x00000098u,c->r[0]); // 80199650
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80199654
  c->r[8]=c->r[8]+0x00000020u; // 80199658
  W32(c->r[7]+0x0000009Cu,c->r[0]); // 8019965C
  c->r[7]=c->r[7]+0x00000020u; // 80199660
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80199618; } // 80199664
L_80199668:;
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80199668
  c->r[0]=0u+0xCD000000u; // 8019966C
  c->r[6]=c->r[0]+c->r[7]; // 80199670
  c->r[0]=c->r[4]-c->r[5]; // 80199674
  c->r[7]=c->r[28]+c->r[7]; // 80199678
  c->r[6]=c->r[6]+0x00006400u; // 8019967C
  c->ctr=c->r[0]; // 80199680
  cmpu(c,0,c->r[5],c->r[4]); // 80199684
  if (!crb(c,0)) { goto L_801996A0; } // 80199688
L_8019968C:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 8019968C
  c->r[7]=c->r[7]+0x00000004u; // 80199690
  W32(c->r[6]+0x00000080u,c->r[0]); // 80199694
  c->r[6]=c->r[6]+0x00000004u; // 80199698
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019968C; } // 8019969C
L_801996A0:;
  c->r[4]=c->r[29]+0xFFFFFF80u; // 801996A0
  c->r[0]=addc(c,~c->r[29],0x00000080u,1); // 801996A4
  c->r[0]=~(c->r[4]|c->r[0]); // 801996A8
  c->r[9]=0u+0xCD000000u; // 801996AC
  c->r[5]=sraw(c,c->r[0],31); // 801996B0
  c->r[6]=0u-c->r[31]; // 801996B4
  c->r[4]=c->r[30]+0xFFFFFF80u; // 801996B8
  c->r[0]=addc(c,~c->r[30],0x00000080u,1); // 801996BC
  c->r[0]=~(c->r[4]|c->r[0]); // 801996C0
  c->r[8]=R32(c->r[9]+0x00006434u); // 801996C4
  c->r[0]=sraw(c,c->r[0],31); // 801996C8
  c->r[7]=c->r[6]|c->r[31]; // 801996CC
  c->r[4]=c->r[29]&~c->r[5]; // 801996D0
  c->r[6]=c->r[8]|0x80000000u; // 801996D4
  c->r[6]=(rotl(c->r[7],31)&0x40000000u)|(c->r[6]&~0x40000000u); // 801996D8
  c->r[0]=c->r[30]&~c->r[0]; // 801996DC
  c->r[6]=(rotl(c->r[4],16)&0x007F0000u)|(c->r[6]&~0x007F0000u); // 801996E0
  c->r[6]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[6]&~0x00007F00u); // 801996E4
  c->r[6]=(rotl(c->r[27],1)&0x00000006u)|(c->r[6]&~0x00000006u); // 801996E8
  c->r[0]=c->r[6]|0x00000001u; // 801996EC
  W32(c->r[9]+0x00006434u,c->r[0]); // 801996F0
  c->lr=0x801996F8u; f_80160C90(c); // 801996F4
  c->r[3]=0u+0x00000001u; // 801996F8
L_801996FC:;
  c->r[11]=c->r[1]+0x00000020u; // 801996FC
  c->lr=0x80199704u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80199700
  c->r[0]=R32(c->r[1]+0x00000024u); // 80199704
  c->lr=c->r[0]; // 80199708
  c->r[1]=c->r[1]+0x00000020u; // 8019970C
  return; // 80199710
}

// SIGetStatus
void f_80199714(Ctx* __restrict c) {
  trace_call(0x80199714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199714
  c->r[0]=c->lr; // 80199718
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019971C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80199720
  W32(c->r[1]+0x00000008u,c->r[30]); // 80199724
  c->r[30]=c->r[3]|c->r[3]; // 80199728
  c->lr=0x80199730u; f_80160C68(c); // 8019972C
  c->r[4]=0u+0xCD000000u; // 80199730
  c->r[0]=addc(c,~c->r[30],0x00000003u,1); // 80199734
  c->r[31]=R32(c->r[4]+0x00006438u); // 80199738
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019973C
  c->r[31]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 80199740
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 80199744
  if (crb(c,2)) { goto L_8019976C; } // 80199748
  c->r[4]=0u+0x80330000u; // 8019974C
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80199750
  c->r[4]=c->r[4]+0x00000CD0u; // 80199754
  c->r[0]=R32(c->r[4]+c->r[5]); // 80199758
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8019975C
  if (!crb(c,2)) { goto L_8019976C; } // 80199760
  c->r[0]=0u+0x00000008u; // 80199764
  W32(c->r[4]+c->r[5],c->r[0]); // 80199768
L_8019976C:;
  c->lr=0x80199770u; f_80160C90(c); // 8019976C
  c->r[3]=c->r[31]|c->r[31]; // 80199770
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80199774
  c->r[30]=R32(c->r[1]+0x00000008u); // 80199778
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019977C
  c->lr=c->r[0]; // 80199780
  c->r[1]=c->r[1]+0x00000010u; // 80199784
  return; // 80199788
}

// SISetCommand
void f_8019978C(Ctx* __restrict c) {
  trace_call(0x8019978Cu);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8019978C
  c->r[0]=0u+0xCD000000u; // 80199790
  c->r[3]=c->r[0]+c->r[3]; // 80199794
  W32(c->r[3]+0x00006400u,c->r[4]); // 80199798
  return; // 8019979C
}

// SISetXY
void f_801997A0(Ctx* __restrict c) {
  trace_call(0x801997A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801997A0
  c->r[0]=c->lr; // 801997A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801997A8
  c->r[0]=rotl(c->r[4],8)&0xFFFFFF00u; // 801997AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801997B0
  c->r[31]=rotl(c->r[3],16)&0xFFFF0000u; // 801997B4
  c->r[31]=c->r[31]|c->r[0]; // 801997B8
  c->lr=0x801997C0u; f_80160C68(c); // 801997BC
  c->r[5]=0u+0x80330000u; // 801997C0
  c->r[4]=0u+0xCD000000u; // 801997C4
  c->r[5]=c->r[5]+0x00000CB8u; // 801997C8
  c->r[0]=R32(c->r[5]+0x00000004u); // 801997CC
  c->r[0]=rotl(c->r[0],0)&0xFC0000FFu; // 801997D0
  c->r[31]=c->r[0]|c->r[31]; // 801997D4
  W32(c->r[5]+0x00000004u,c->r[31]); // 801997D8
  W32(c->r[4]+0x00006430u,c->r[31]); // 801997DC
  c->lr=0x801997E4u; f_80160C90(c); // 801997E0
  c->r[3]=c->r[31]|c->r[31]; // 801997E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801997E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801997EC
  c->lr=c->r[0]; // 801997F0
  c->r[1]=c->r[1]+0x00000010u; // 801997F4
  return; // 801997F8
}

// SIEnablePolling
void f_801997FC(Ctx* __restrict c) {
  trace_call(0x801997FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801997FC
  c->r[0]=c->lr; // 80199800
  cmps(c,0,(int32_t)c->r[3],0); // 80199804
  W32(c->r[1]+0x00000014u,c->r[0]); // 80199808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019980C
  c->r[31]=c->r[3]|c->r[3]; // 80199810
  if (!crb(c,2)) { goto L_80199828; } // 80199814
  c->r[3]=0u+0x80330000u; // 80199818
  c->r[3]=c->r[3]+0x00000CB8u; // 8019981C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80199820
  goto L_80199870; // 80199824
L_80199828:;
  c->lr=0x8019982Cu; f_80160C68(c); // 80199828
  c->r[31]=rotl(c->r[31],8)&0x000000FFu; // 8019982C
  c->r[6]=0u+0x80330000u; // 80199830
  c->r[8]=rotl(c->r[31],28)&0x0000000Fu; // 80199834
  c->r[4]=0u+0xCD000000u; // 80199838
  c->r[6]=c->r[6]+0x00000CB8u; // 8019983C
  c->r[0]=0u+0x80000000u; // 80199840
  c->r[7]=c->r[8]|0x03FF0000u; // 80199844
  c->r[5]=R32(c->r[6]+0x00000004u); // 80199848
  c->r[7]=c->r[7]|0x0000FFF0u; // 8019984C
  c->r[31]=c->r[31]&c->r[7]; // 80199850
  c->r[5]=c->r[5]&~c->r[8]; // 80199854
  c->r[31]=c->r[5]|c->r[31]; // 80199858
  W32(c->r[6]+0x00000004u,c->r[31]); // 8019985C
  W32(c->r[4]+0x00006438u,c->r[0]); // 80199860
  W32(c->r[4]+0x00006430u,c->r[31]); // 80199864
  c->lr=0x8019986Cu; f_80160C90(c); // 80199868
  c->r[3]=c->r[31]|c->r[31]; // 8019986C
L_80199870:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80199870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80199874
  c->lr=c->r[0]; // 80199878
  c->r[1]=c->r[1]+0x00000010u; // 8019987C
  return; // 80199880
}

// SIDisablePolling
void f_80199884(Ctx* __restrict c) {
  trace_call(0x80199884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199884
  c->r[0]=c->lr; // 80199888
  cmps(c,0,(int32_t)c->r[3],0); // 8019988C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80199890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80199894
  c->r[31]=c->r[3]|c->r[3]; // 80199898
  if (!crb(c,2)) { goto L_801998B0; } // 8019989C
  c->r[3]=0u+0x80330000u; // 801998A0
  c->r[3]=c->r[3]+0x00000CB8u; // 801998A4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801998A8
  goto L_801998DC; // 801998AC
L_801998B0:;
  c->lr=0x801998B4u; f_80160C68(c); // 801998B0
  c->r[6]=0u+0x80330000u; // 801998B4
  c->r[0]=rotl(c->r[31],8)&0x000000F0u; // 801998B8
  c->r[6]=c->r[6]+0x00000CB8u; // 801998BC
  c->r[4]=0u+0xCD000000u; // 801998C0
  c->r[5]=R32(c->r[6]+0x00000004u); // 801998C4
  c->r[31]=c->r[5]&~c->r[0]; // 801998C8
  W32(c->r[4]+0x00006430u,c->r[31]); // 801998CC
  W32(c->r[6]+0x00000004u,c->r[31]); // 801998D0
  c->lr=0x801998D8u; f_80160C90(c); // 801998D4
  c->r[3]=c->r[31]|c->r[31]; // 801998D8
L_801998DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801998DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801998E0
  c->lr=c->r[0]; // 801998E4
  c->r[1]=c->r[1]+0x00000010u; // 801998E8
  return; // 801998EC
}

// SIGetResponse
void f_801998F0(Ctx* __restrict c) {
  trace_call(0x801998F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801998F0
  c->r[0]=c->lr; // 801998F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801998F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801998FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80199900
  c->r[30]=c->r[4]|c->r[4]; // 80199904
  W32(c->r[1]+0x00000014u,c->r[29]); // 80199908
  c->r[29]=c->r[3]|c->r[3]; // 8019990C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80199910
  c->lr=0x80199918u; f_80160C68(c); // 80199914
  c->r[31]=c->r[3]|c->r[3]; // 80199918
  c->lr=0x80199920u; f_80160C68(c); // 8019991C
  c->r[4]=0u+0xCD000000u; // 80199920
  c->r[0]=addc(c,~c->r[29],0x00000003u,1); // 80199924
  c->r[28]=R32(c->r[4]+0x00006438u); // 80199928
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019992C
  c->r[28]=((c->r[0])&0x20)?0u:(c->r[28]>>((c->r[0])&31)); // 80199930
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 80199934
  if (crb(c,2)) { goto L_8019995C; } // 80199938
  c->r[4]=0u+0x80330000u; // 8019993C
  c->r[5]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80199940
  c->r[4]=c->r[4]+0x00000CD0u; // 80199944
  c->r[0]=R32(c->r[4]+c->r[5]); // 80199948
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8019994C
  if (!crb(c,2)) { goto L_8019995C; } // 80199950
  c->r[0]=0u+0x00000008u; // 80199954
  W32(c->r[4]+c->r[5],c->r[0]); // 80199958
L_8019995C:;
  c->lr=0x80199960u; f_80160C90(c); // 8019995C
  c->r[0]=rotl(c->r[28],0)&0x00000020u; cr0(c,c->r[0]); // 80199960
  if (crb(c,2)) { goto L_801999A8; } // 80199964
  c->r[5]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80199968
  c->r[0]=0u+0xCD000000u; // 8019996C
  c->r[4]=0u+0x80390000u; // 80199970
  c->r[3]=0u+0x80390000u; // 80199974
  c->r[7]=c->r[0]+c->r[5]; // 80199978
  c->r[8]=rotl(c->r[29],3)&0xFFFFFFF8u; // 8019997C
  c->r[6]=R32(c->r[7]+0x00006404u); // 80199980
  c->r[4]=c->r[4]+0xFFFFFBD0u; // 80199984
  c->r[5]=c->r[4]+c->r[8]; // 80199988
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8019998C
  W32(c->r[4]+c->r[8],c->r[6]); // 80199990
  c->r[3]=c->r[3]+0xFFFFFBF0u; // 80199994
  c->r[4]=0u+0x00000001u; // 80199998
  c->r[6]=R32(c->r[7]+0x00006408u); // 8019999C
  W32(c->r[5]+0x00000004u,c->r[6]); // 801999A0
  W32(c->r[3]+c->r[0],c->r[4]); // 801999A4
L_801999A8:;
  c->r[3]=0u+0x80390000u; // 801999A8
  c->r[4]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801999AC
  c->r[3]=c->r[3]+0xFFFFFBF0u; // 801999B0
  c->r[0]=0u+0x00000000u; // 801999B4
  c->r[28]=R32(c->r[3]+c->r[4]); // 801999B8
  cmps(c,0,(int32_t)c->r[28],0); // 801999BC
  W32(c->r[3]+c->r[4],c->r[0]); // 801999C0
  if (crb(c,2)) { goto L_801999E8; } // 801999C4
  c->r[3]=0u+0x80390000u; // 801999C8
  c->r[4]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801999CC
  c->r[3]=c->r[3]+0xFFFFFBD0u; // 801999D0
  c->r[0]=R32(c->r[3]+c->r[4]); // 801999D4
  c->r[3]=c->r[3]+c->r[4]; // 801999D8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801999DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801999E0
  W32(c->r[30]+0x00000004u,c->r[0]); // 801999E4
L_801999E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801999E8
  c->lr=0x801999F0u; f_80160C90(c); // 801999EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801999F0
  c->r[3]=c->r[28]|c->r[28]; // 801999F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801999F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801999FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80199A00
  c->r[0]=R32(c->r[1]+0x00000024u); // 80199A04
  c->lr=c->r[0]; // 80199A08
  c->r[1]=c->r[1]+0x00000020u; // 80199A0C
  return; // 80199A10
}

// AlarmHandler
void f_80199A14(Ctx* __restrict c) {
  trace_call(0x80199A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199A14
  c->r[0]=c->lr; // 80199A18
  c->r[6]=0u+0x80390000u; // 80199A1C
  c->r[5]=0u+0x2AAB0000u; // 80199A20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80199A24
  c->r[6]=c->r[6]+0xFFFFFB10u; // 80199A28
  c->r[0]=c->r[3]-c->r[6]; // 80199A2C
  c->r[3]=c->r[5]+0xFFFFAAABu; // 80199A30
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80199A34
  c->r[4]=0u+0x80390000u; // 80199A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80199A3C
  c->r[4]=c->r[4]+0xFFFFFA50u; // 80199A40
  c->r[0]=sraw(c,c->r[0],3); // 80199A44
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80199A48
  c->r[0]=c->r[0]+c->r[3]; // 80199A4C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80199A50
  c->r[3]=R32(c->r[4]+c->r[0]); // 80199A54
  c->r[31]=c->r[4]+c->r[0]; // 80199A58
  cmps(c,0,(int32_t)c->r[3],-1); // 80199A5C
  if (crb(c,2)) { goto L_80199A8C; } // 80199A60
  c->r[4]=R32(c->r[31]+0x00000004u); // 80199A64
  c->r[5]=R32(c->r[31]+0x00000008u); // 80199A68
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 80199A6C
  c->r[7]=R32(c->r[31]+0x00000010u); // 80199A70
  c->r[8]=R32(c->r[31]+0x00000014u); // 80199A74
  c->lr=0x80199A7Cu; f_80199564(c); // 80199A78
  cmps(c,0,(int32_t)c->r[3],0); // 80199A7C
  if (crb(c,2)) { goto L_80199A8C; } // 80199A80
  c->r[0]=0u+0xFFFFFFFFu; // 80199A84
  W32(c->r[31]+0x00000000u,c->r[0]); // 80199A88
L_80199A8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80199A8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80199A90
  c->lr=c->r[0]; // 80199A94
  c->r[1]=c->r[1]+0x00000010u; // 80199A98
  return; // 80199A9C
}

// SITransfer
void f_80199AA0(Ctx* __restrict c) {
  trace_call(0x80199AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199AA0
  c->r[0]=c->lr; // 80199AA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80199AA8
  c->r[11]=c->r[1]+0x00000040u; // 80199AAC
  c->lr=0x80199AB4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80199AB0
  c->r[31]=0u+0x80390000u; // 80199AB4
  c->r[11]=rotl(c->r[3],5)&0xFFFFFFE0u; // 80199AB8
  c->r[31]=c->r[31]+0xFFFFFA50u; // 80199ABC
  c->r[21]=c->r[3]|c->r[3]; // 80199AC0
  c->r[0]=c->r[31]+0x00000000u; // 80199AC4
  c->r[22]=c->r[4]|c->r[4]; // 80199AC8
  c->r[23]=c->r[5]|c->r[5]; // 80199ACC
  c->r[24]=c->r[6]|c->r[6]; // 80199AD0
  c->r[25]=c->r[7]|c->r[7]; // 80199AD4
  c->r[26]=c->r[8]|c->r[8]; // 80199AD8
  c->r[27]=c->r[9]|c->r[9]; // 80199ADC
  c->r[28]=c->r[10]|c->r[10]; // 80199AE0
  c->r[29]=c->r[0]+c->r[11]; // 80199AE4
  c->lr=0x80199AECu; f_80160C68(c); // 80199AE8
  c->r[0]=R32(c->r[29]+0x00000000u); // 80199AEC
  c->r[30]=c->r[3]|c->r[3]; // 80199AF0
  cmps(c,0,(int32_t)c->r[0],-1); // 80199AF4
  if (!crb(c,2)) { goto L_80199B0C; } // 80199AF8
  c->r[3]=0u+0x80330000u; // 80199AFC
  c->r[0]=R32(c->r[3]+0x00000CB8u); // 80199B00
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 80199B04
  if (!crb(c,2)) { goto L_80199B1C; } // 80199B08
L_80199B0C:;
  c->r[3]=c->r[30]|c->r[30]; // 80199B0C
  c->lr=0x80199B14u; f_80160C90(c); // 80199B10
  c->r[3]=0u+0x00000000u; // 80199B14
  goto L_80199BF4; // 80199B18
L_80199B1C:;
  c->lr=0x80199B20u; f_80164E14(c); // 80199B1C
  c->r[0]=c->r[28]|c->r[27]; cr0(c,c->r[0]); // 80199B20
  c->r[8]=c->r[3]|c->r[3]; // 80199B24
  if (!crb(c,2)) { goto L_80199B38; } // 80199B28
  c->r[28]=c->r[4]|c->r[4]; // 80199B2C
  c->r[27]=c->r[8]|c->r[8]; // 80199B30
  goto L_80199B54; // 80199B34
L_80199B38:;
  c->r[5]=rotl(c->r[21],3)&0xFFFFFFF8u; // 80199B38
  c->r[0]=c->r[31]+0x00000080u; // 80199B3C
  c->r[6]=c->r[0]+c->r[5]; // 80199B40
  c->r[5]=R32(c->r[6]+0x00000004u); // 80199B44
  c->r[0]=R32(c->r[6]+0x00000000u); // 80199B48
  c->r[28]=addc(c,c->r[28],c->r[5],0); // 80199B4C
  c->r[27]=addc(c,c->r[27],c->r[0],c->xer_ca); // 80199B50
L_80199B54:;
  c->r[0]=c->r[3]^0x80000000u; // 80199B54
  c->r[5]=c->r[27]^0x80000000u; // 80199B58
  c->r[3]=addc(c,~c->r[28],c->r[4],1); // 80199B5C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80199B60
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80199B64
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80199B68
  if (crb(c,2)) { goto L_80199B94; } // 80199B6C
  c->r[3]=(uint32_t)((int32_t)c->r[21]*(int32_t)48); // 80199B70
  c->r[0]=c->r[31]+0x000000C0u; // 80199B74
  c->r[6]=addc(c,~c->r[4],c->r[28],1); // 80199B78
  c->r[7]=0u+0x801A0000u; // 80199B7C
  c->r[3]=c->r[0]+c->r[3]; // 80199B80
  c->r[5]=addc(c,~c->r[8],c->r[27],c->xer_ca); // 80199B84
  c->r[7]=c->r[7]+0xFFFF9A14u; // 80199B88
  c->lr=0x80199B90u; f_8015B1F4(c); // 80199B8C
  goto L_80199BC8; // 80199B90
L_80199B94:;
  c->r[3]=c->r[21]|c->r[21]; // 80199B94
  c->r[4]=c->r[22]|c->r[22]; // 80199B98
  c->r[5]=c->r[23]|c->r[23]; // 80199B9C
  c->r[6]=c->r[24]|c->r[24]; // 80199BA0
  c->r[7]=c->r[25]|c->r[25]; // 80199BA4
  c->r[8]=c->r[26]|c->r[26]; // 80199BA8
  c->lr=0x80199BB0u; f_80199564(c); // 80199BAC
  cmps(c,0,(int32_t)c->r[3],0); // 80199BB0
  if (crb(c,2)) { goto L_80199BC8; } // 80199BB4
  c->r[3]=c->r[30]|c->r[30]; // 80199BB8
  c->lr=0x80199BC0u; f_80160C90(c); // 80199BBC
  c->r[3]=0u+0x00000001u; // 80199BC0
  goto L_80199BF4; // 80199BC4
L_80199BC8:;
  W32(c->r[29]+0x00000000u,c->r[21]); // 80199BC8
  c->r[3]=c->r[30]|c->r[30]; // 80199BCC
  W32(c->r[29]+0x00000004u,c->r[22]); // 80199BD0
  W32(c->r[29]+0x00000008u,c->r[23]); // 80199BD4
  W32(c->r[29]+0x0000000Cu,c->r[24]); // 80199BD8
  W32(c->r[29]+0x00000010u,c->r[25]); // 80199BDC
  W32(c->r[29]+0x00000014u,c->r[26]); // 80199BE0
  W32(c->r[29]+0x0000001Cu,c->r[28]); // 80199BE4
  W32(c->r[29]+0x00000018u,c->r[27]); // 80199BE8
  c->lr=0x80199BF0u; f_80160C90(c); // 80199BEC
  c->r[3]=0u+0x00000001u; // 80199BF0
L_80199BF4:;
  c->r[11]=c->r[1]+0x00000040u; // 80199BF4
  c->lr=0x80199BFCu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80199BF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 80199BFC
  c->lr=c->r[0]; // 80199C00
  c->r[1]=c->r[1]+0x00000040u; // 80199C04
  return; // 80199C08
}

// GetTypeCallback
void f_80199C0C(Ctx* __restrict c) {
  trace_call(0x80199C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199C0C
  c->r[0]=c->lr; // 80199C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 80199C14
  c->r[11]=c->r[1]+0x00000020u; // 80199C18
  c->lr=0x80199C20u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80199C1C
  c->r[31]=0u+0x80330000u; // 80199C20
  c->r[30]=0u+0x80390000u; // 80199C24
  c->r[29]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80199C28
  c->r[26]=c->r[3]|c->r[3]; // 80199C2C
  c->r[31]=c->r[31]+0x00000CD0u; // 80199C30
  c->r[27]=c->r[4]|c->r[4]; // 80199C34
  c->r[0]=R32(c->r[31]+c->r[29]); // 80199C38
  c->r[30]=c->r[30]+0xFFFFFA50u; // 80199C3C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80199C40
  c->r[0]=c->r[0]|c->r[4]; // 80199C44
  W32(c->r[31]+c->r[29],c->r[0]); // 80199C48
  c->lr=0x80199C50u; f_80164E14(c); // 80199C4C
  c->r[5]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80199C50
  c->r[0]=c->r[30]+0x000000A0u; // 80199C54
  c->r[6]=c->r[0]+c->r[5]; // 80199C58
  c->r[28]=R32(c->r[31]+c->r[29]); // 80199C5C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80199C60
  c->r[5]=0u+0x80000000u; // 80199C64
  c->r[0]=rotl(c->r[27],0)&0x0000000Fu; cr0(c,c->r[0]); // 80199C68
  c->r[4]=R32(c->r[13]+0xFFFFA0ECu); // 80199C6C
  c->r[5]=((c->r[26])&0x20)?0u:(c->r[5]>>((c->r[26])&31)); // 80199C70
  W32(c->r[6]+0x00000000u,c->r[3]); // 80199C74
  c->r[0]=c->r[4]&~c->r[5]; // 80199C78
  W32(c->r[13]+0xFFFFA0ECu,c->r[0]); // 80199C7C
  c->r[27]=c->r[4]&c->r[5]; // 80199C80
  if (!crb(c,2)) { goto L_80199CA8; } // 80199C84
  c->r[3]=rotl(c->r[28],0)&0x18000000u; // 80199C88
  c->r[0]=c->r[3]+0xF8000000u; // 80199C8C
  cmpu(c,0,c->r[0],0x00000000u); // 80199C90
  if (!crb(c,2)) { goto L_80199CA8; } // 80199C94
  c->r[0]=rotl(c->r[28],0)&0x80000000u; cr0(c,c->r[0]); // 80199C98
  if (crb(c,2)) { goto L_80199CA8; } // 80199C9C
  c->r[0]=rotl(c->r[28],0)&0x04000000u; cr0(c,c->r[0]); // 80199CA0
  if (crb(c,2)) { goto L_80199D00; } // 80199CA4
L_80199CA8:;
  c->r[3]=c->r[26]|c->r[26]; // 80199CA8
  c->r[4]=0u+0x00000000u; // 80199CAC
  c->lr=0x80199CB4u; f_801633B0(c); // 80199CB0
  c->r[28]=R32(c->r[31]+c->r[29]); // 80199CB4
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 80199CB8
  c->r[0]=c->r[30]+0x000001E0u; // 80199CBC
  c->r[29]=0u+0x00000000u; // 80199CC0
  c->r[30]=c->r[0]+c->r[3]; // 80199CC4
  c->r[27]=0u+0x00000000u; // 80199CC8
L_80199CCC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80199CCC
  cmps(c,0,(int32_t)c->r[12],0); // 80199CD0
  if (crb(c,2)) { goto L_80199CEC; } // 80199CD4
  c->r[3]=c->r[26]|c->r[26]; // 80199CD8
  c->r[4]=c->r[28]|c->r[28]; // 80199CDC
  W32(c->r[30]+0x00000000u,c->r[27]); // 80199CE0
  c->ctr=c->r[12]; // 80199CE4
  if (true) { c->lr=0x80199CECu; dispatch(c,c->ctr); } // 80199CE8
L_80199CEC:;
  c->r[29]=c->r[29]+0x00000001u; // 80199CEC
  c->r[30]=c->r[30]+0x00000004u; // 80199CF0
  cmps(c,0,(int32_t)c->r[29],4); // 80199CF4
  if (crb(c,0)) { IRQCHK(c); goto L_80199CCC; } // 80199CF8
  goto L_80199EA4; // 80199CFC
L_80199D00:;
  c->r[3]=c->r[26]|c->r[26]; // 80199D00
  c->lr=0x80199D08u; f_80163338(c); // 80199D04
  cmps(c,0,(int32_t)c->r[27],0); // 80199D08
  c->r[27]=rotl(c->r[3],8)&0x00FFFF00u; // 80199D0C
  if (crb(c,2)) { goto L_80199D64; } // 80199D10
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 80199D14
  if (crb(c,2)) { goto L_80199D64; } // 80199D18
  c->r[3]=0u+0x00D00000u; // 80199D1C
  c->r[8]=0u+0x801A0000u; // 80199D20
  c->r[0]=c->r[3]+0xFFFFFF00u; // 80199D24
  c->r[4]=c->r[30]+0x000001D0u; // 80199D28
  c->r[0]=c->r[27]&c->r[0]; // 80199D2C
  c->r[6]=c->r[31]+c->r[29]; // 80199D30
  c->r[3]=c->r[0]|0x4E100000u; // 80199D34
  c->r[8]=c->r[8]+0xFFFF9C0Cu; // 80199D38
  c->r[0]=0u+0x00000080u; // 80199D3C
  {uint32_t ea=c->r[4]+c->r[29]; W32(ea,c->r[3]); c->r[4]=ea;} // 80199D40
  c->r[3]=c->r[26]|c->r[26]; // 80199D44
  c->r[5]=0u+0x00000003u; // 80199D48
  W32(c->r[31]+c->r[29],c->r[0]); // 80199D4C
  c->r[7]=0u+0x00000003u; // 80199D50
  c->r[10]=0u+0x00000000u; // 80199D54
  c->r[9]=0u+0x00000000u; // 80199D58
  c->lr=0x80199D60u; f_80199AA0(c); // 80199D5C
  goto L_80199EA4; // 80199D60
L_80199D64:;
  c->r[0]=rotl(c->r[28],0)&0x00100000u; cr0(c,c->r[0]); // 80199D64
  if (crb(c,2)) { goto L_80199DE4; } // 80199D68
  c->r[3]=0u+0x00D00000u; // 80199D6C
  c->r[0]=c->r[3]+0xFFFFFF00u; // 80199D70
  c->r[3]=c->r[28]&c->r[0]; // 80199D74
  c->r[0]=c->r[27]&c->r[0]; // 80199D78
  cmpu(c,0,c->r[0],c->r[3]); // 80199D7C
  if (crb(c,2)) { goto L_80199E5C; } // 80199D80
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 80199D84
  if (!crb(c,2)) { goto L_80199D9C; } // 80199D88
  c->r[27]=c->r[3]|0x00100000u; // 80199D8C
  c->r[3]=c->r[26]|c->r[26]; // 80199D90
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 80199D94
  c->lr=0x80199D9Cu; f_801633B0(c); // 80199D98
L_80199D9C:;
  c->r[3]=0u+0x80330000u; // 80199D9C
  c->r[0]=c->r[30]+0x000001D0u; // 80199DA0
  c->r[3]=c->r[3]+0x00000CD0u; // 80199DA4
  c->r[8]=0u+0x801A0000u; // 80199DA8
  c->r[4]=c->r[0]+c->r[29]; // 80199DAC
  c->r[5]=c->r[27]|0x4E000000u; // 80199DB0
  c->r[6]=c->r[3]+c->r[29]; // 80199DB4
  c->r[0]=0u+0x00000080u; // 80199DB8
  W32(c->r[4]+0x00000000u,c->r[5]); // 80199DBC
  c->r[3]=c->r[26]|c->r[26]; // 80199DC0
  c->r[8]=c->r[8]+0xFFFF9C0Cu; // 80199DC4
  c->r[5]=0u+0x00000003u; // 80199DC8
  W32(c->r[6]+0x00000000u,c->r[0]); // 80199DCC
  c->r[7]=0u+0x00000003u; // 80199DD0
  c->r[10]=0u+0x00000000u; // 80199DD4
  c->r[9]=0u+0x00000000u; // 80199DD8
  c->lr=0x80199DE0u; f_80199AA0(c); // 80199DDC
  goto L_80199EA4; // 80199DE0
L_80199DE4:;
  c->r[0]=rotl(c->r[28],0)&0x40000000u; cr0(c,c->r[0]); // 80199DE4
  if (crb(c,2)) { goto L_80199E50; } // 80199DE8
  c->r[4]=0u+0x00D00000u; // 80199DEC
  c->r[3]=c->r[26]|c->r[26]; // 80199DF0
  c->r[0]=c->r[4]+0xFFFFFF00u; // 80199DF4
  c->r[27]=c->r[28]&c->r[0]; // 80199DF8
  c->r[27]=c->r[27]|0x00100000u; // 80199DFC
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 80199E00
  c->lr=0x80199E08u; f_801633B0(c); // 80199E04
  c->r[3]=0u+0x80330000u; // 80199E08
  c->r[0]=c->r[30]+0x000001D0u; // 80199E0C
  c->r[3]=c->r[3]+0x00000CD0u; // 80199E10
  c->r[8]=0u+0x801A0000u; // 80199E14
  c->r[4]=c->r[0]+c->r[29]; // 80199E18
  c->r[5]=c->r[27]|0x4E000000u; // 80199E1C
  c->r[6]=c->r[3]+c->r[29]; // 80199E20
  c->r[0]=0u+0x00000080u; // 80199E24
  W32(c->r[4]+0x00000000u,c->r[5]); // 80199E28
  c->r[3]=c->r[26]|c->r[26]; // 80199E2C
  c->r[8]=c->r[8]+0xFFFF9C0Cu; // 80199E30
  c->r[5]=0u+0x00000003u; // 80199E34
  W32(c->r[6]+0x00000000u,c->r[0]); // 80199E38
  c->r[7]=0u+0x00000003u; // 80199E3C
  c->r[10]=0u+0x00000000u; // 80199E40
  c->r[9]=0u+0x00000000u; // 80199E44
  c->lr=0x80199E4Cu; f_80199AA0(c); // 80199E48
  goto L_80199EA4; // 80199E4C
L_80199E50:;
  c->r[3]=c->r[26]|c->r[26]; // 80199E50
  c->r[4]=0u+0x00000000u; // 80199E54
  c->lr=0x80199E5Cu; f_801633B0(c); // 80199E58
L_80199E5C:;
  c->r[28]=R32(c->r[31]+c->r[29]); // 80199E5C
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 80199E60
  c->r[0]=c->r[30]+0x000001E0u; // 80199E64
  c->r[29]=0u+0x00000000u; // 80199E68
  c->r[30]=c->r[0]+c->r[3]; // 80199E6C
  c->r[27]=0u+0x00000000u; // 80199E70
L_80199E74:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80199E74
  cmps(c,0,(int32_t)c->r[12],0); // 80199E78
  if (crb(c,2)) { goto L_80199E94; } // 80199E7C
  c->r[3]=c->r[26]|c->r[26]; // 80199E80
  c->r[4]=c->r[28]|c->r[28]; // 80199E84
  W32(c->r[30]+0x00000000u,c->r[27]); // 80199E88
  c->ctr=c->r[12]; // 80199E8C
  if (true) { c->lr=0x80199E94u; dispatch(c,c->ctr); } // 80199E90
L_80199E94:;
  c->r[29]=c->r[29]+0x00000001u; // 80199E94
  c->r[30]=c->r[30]+0x00000004u; // 80199E98
  cmps(c,0,(int32_t)c->r[29],4); // 80199E9C
  if (crb(c,0)) { IRQCHK(c); goto L_80199E74; } // 80199EA0
L_80199EA4:;
  c->r[11]=c->r[1]+0x00000020u; // 80199EA4
  c->lr=0x80199EACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80199EA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80199EAC
  c->lr=c->r[0]; // 80199EB0
  c->r[1]=c->r[1]+0x00000020u; // 80199EB4
  return; // 80199EB8
}

// SIGetType
void f_80199EBC(Ctx* __restrict c) {
  trace_call(0x80199EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80199EBC
  c->r[0]=c->lr; // 80199EC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80199EC4
  c->r[11]=c->r[1]+0x00000020u; // 80199EC8
  c->lr=0x80199ED0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80199ECC
  c->r[27]=c->r[3]|c->r[3]; // 80199ED0
  c->lr=0x80199ED8u; f_80160C68(c); // 80199ED4
  c->r[5]=0u+0x80330000u; // 80199ED8
  c->r[4]=0u+0x80390000u; // 80199EDC
  c->r[6]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80199EE0
  c->r[0]=rotl(c->r[27],3)&0xFFFFFFF8u; // 80199EE4
  c->r[5]=c->r[5]+0x00000CD0u; // 80199EE8
  c->r[4]=c->r[4]+0xFFFFFAF0u; // 80199EEC
  c->r[28]=R32(c->r[5]+c->r[6]); // 80199EF0
  c->r[30]=c->r[5]+c->r[6]; // 80199EF4
  c->r[29]=c->r[3]|c->r[3]; // 80199EF8
  c->r[31]=c->r[4]+c->r[0]; // 80199EFC
  c->lr=0x80199F04u; f_80164E14(c); // 80199F00
  c->r[6]=R32(c->r[31]+0x00000004u); // 80199F04
  c->r[5]=0u+0x80330000u; // 80199F08
  c->r[0]=R32(c->r[31]+0x00000000u); // 80199F0C
  c->r[5]=c->r[5]+0x00000CB8u; // 80199F10
  c->r[8]=addc(c,~c->r[6],c->r[4],1); // 80199F14
  c->r[4]=R32(c->r[5]+0x00000004u); // 80199F18
  c->r[7]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80199F1C
  c->r[3]=0u+0x00000080u; // 80199F20
  c->r[0]=sraw(c,c->r[3],(c->r[27])&63); // 80199F24
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 80199F28
  if (crb(c,2)) { goto L_80199F60; } // 80199F2C
  cmpu(c,0,c->r[28],0x00000008u); // 80199F30
  if (crb(c,2)) { goto L_80199F54; } // 80199F34
  c->lr=0x80199F3Cu; f_80164E14(c); // 80199F38
  W32(c->r[31]+0x00000004u,c->r[4]); // 80199F3C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80199F40
  c->r[3]=c->r[29]|c->r[29]; // 80199F44
  c->lr=0x80199F4Cu; f_80160C90(c); // 80199F48
  c->r[3]=c->r[28]|c->r[28]; // 80199F4C
  goto L_8019A058; // 80199F50
L_80199F54:;
  W32(c->r[30]+0x00000000u,c->r[3]); // 80199F54
  c->r[28]=0u+0x00000080u; // 80199F58
  goto L_80199FF4; // 80199F5C
L_80199F60:;
  c->r[4]=0u+0x80000000u; // 80199F60
  c->r[3]=0u+0x10620000u; // 80199F64
  c->r[5]=R32(c->r[4]+0x000000F8u); // 80199F68
  c->r[6]=c->r[3]+0x00004DD3u; // 80199F6C
  c->r[0]=0u+0x00000000u; // 80199F70
  c->r[4]=c->r[7]^0x80000000u; // 80199F74
  c->r[3]=rotl(c->r[5],30)&0x3FFFFFFFu; // 80199F78
  c->r[3]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[3])>>32); // 80199F7C
  c->r[0]=c->r[0]^0x80000000u; // 80199F80
  c->r[5]=rotl(c->r[3],26)&0x03FFFFFFu; // 80199F84
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)50); // 80199F88
  c->r[3]=addc(c,~c->r[8],c->r[3],1); // 80199F8C
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80199F90
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80199F94
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80199F98
  if (!crb(c,2)) { goto L_80199FB8; } // 80199F9C
  cmpu(c,0,c->r[28],0x00000008u); // 80199FA0
  if (crb(c,2)) { goto L_80199FB8; } // 80199FA4
  c->r[3]=c->r[29]|c->r[29]; // 80199FA8
  c->lr=0x80199FB0u; f_80160C90(c); // 80199FAC
  c->r[3]=c->r[28]|c->r[28]; // 80199FB0
  goto L_8019A058; // 80199FB4
L_80199FB8:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)75); // 80199FB8
  c->r[0]=0u+0x00000000u; // 80199FBC
  c->r[4]=c->r[7]^0x80000000u; // 80199FC0
  c->r[0]=c->r[0]^0x80000000u; // 80199FC4
  c->r[3]=addc(c,~c->r[8],c->r[3],1); // 80199FC8
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80199FCC
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80199FD0
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80199FD4
  if (!crb(c,2)) { goto L_80199FE8; } // 80199FD8
  c->r[0]=0u+0x00000080u; // 80199FDC
  W32(c->r[30]+0x00000000u,c->r[0]); // 80199FE0
  goto L_80199FF4; // 80199FE4
L_80199FE8:;
  c->r[0]=0u+0x00000080u; // 80199FE8
  c->r[28]=0u+0x00000080u; // 80199FEC
  W32(c->r[30]+0x00000000u,c->r[0]); // 80199FF0
L_80199FF4:;
  c->lr=0x80199FF8u; f_80164E14(c); // 80199FF4
  W32(c->r[31]+0x00000004u,c->r[4]); // 80199FF8
  c->r[4]=0u+0x431C0000u; // 80199FFC
  c->r[9]=c->r[4]+0xFFFFDE83u; // 8019A000
  c->r[8]=0u+0x801A0000u; // 8019A004
  W32(c->r[31]+0x00000000u,c->r[3]); // 8019A008
  c->r[5]=0u+0x80000000u; // 8019A00C
  c->r[3]=c->r[27]|c->r[27]; // 8019A010
  c->r[6]=c->r[30]|c->r[30]; // 8019A014
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8019A018
  c->r[8]=c->r[8]+0xFFFF9C0Cu; // 8019A01C
  c->r[4]=c->r[13]+0xFFFFA0E8u; // 8019A020
  c->r[5]=0u+0x00000001u; // 8019A024
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8019A028
  c->r[7]=0u+0x00000003u; // 8019A02C
  c->r[0]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[0])>>32); // 8019A030
  c->r[9]=0u+0x00000000u; // 8019A034
  c->r[10]=rotl(c->r[0],17)&0x0001FFFFu; // 8019A038
  c->r[0]=rotl(c->r[0],23)&0x007FFFC0u; // 8019A03C
  c->r[0]=c->r[0]+c->r[10]; // 8019A040
  c->r[10]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8019A044
  c->lr=0x8019A04Cu; f_80199AA0(c); // 8019A048
  c->r[3]=c->r[29]|c->r[29]; // 8019A04C
  c->lr=0x8019A054u; f_80160C90(c); // 8019A050
  c->r[3]=c->r[28]|c->r[28]; // 8019A054
L_8019A058:;
  c->r[11]=c->r[1]+0x00000020u; // 8019A058
  c->lr=0x8019A060u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8019A05C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019A060
  c->lr=c->r[0]; // 8019A064
  c->r[1]=c->r[1]+0x00000020u; // 8019A068
  return; // 8019A06C
}

// SIGetTypeAsync
void f_8019A070(Ctx* __restrict c) {
  trace_call(0x8019A070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A070
  c->r[0]=c->lr; // 8019A074
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019A078
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019A07C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019A080
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019A084
  c->r[29]=c->r[4]|c->r[4]; // 8019A088
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019A08C
  c->r[28]=c->r[3]|c->r[3]; // 8019A090
  c->lr=0x8019A098u; f_80160C68(c); // 8019A094
  c->r[31]=c->r[3]|c->r[3]; // 8019A098
  c->r[3]=c->r[28]|c->r[28]; // 8019A09C
  c->lr=0x8019A0A4u; f_80199EBC(c); // 8019A0A0
  c->r[4]=0u+0x80330000u; // 8019A0A4
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8019A0A8
  c->r[4]=c->r[4]+0x00000CD0u; // 8019A0AC
  c->r[30]=c->r[3]|c->r[3]; // 8019A0B0
  c->r[0]=R32(c->r[4]+c->r[0]); // 8019A0B4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8019A0B8
  if (crb(c,2)) { goto L_8019A140; } // 8019A0BC
  c->r[3]=0u+0x80390000u; // 8019A0C0
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 8019A0C4
  c->r[3]=c->r[3]+0xFFFFFC30u; // 8019A0C8
  {uint32_t ea=c->r[3]+c->r[0]; c->r[0]=R32(ea); c->r[3]=ea;} // 8019A0CC
  cmpu(c,0,c->r[0],c->r[29]); // 8019A0D0
  if (crb(c,2)) { goto L_8019A154; } // 8019A0D4
  cmps(c,0,(int32_t)c->r[0],0); // 8019A0D8
  if (!crb(c,2)) { goto L_8019A0E8; } // 8019A0DC
  W32(c->r[3]+0x00000000u,c->r[29]); // 8019A0E0
  goto L_8019A154; // 8019A0E4
L_8019A0E8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8019A0E8
  cmpu(c,0,c->r[0],c->r[29]); // 8019A0EC
  if (crb(c,2)) { goto L_8019A154; } // 8019A0F0
  cmps(c,0,(int32_t)c->r[0],0); // 8019A0F4
  if (!crb(c,2)) { goto L_8019A104; } // 8019A0F8
  W32(c->r[3]+0x00000004u,c->r[29]); // 8019A0FC
  goto L_8019A154; // 8019A100
L_8019A104:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8019A104
  cmpu(c,0,c->r[0],c->r[29]); // 8019A108
  if (crb(c,2)) { goto L_8019A154; } // 8019A10C
  cmps(c,0,(int32_t)c->r[0],0); // 8019A110
  if (!crb(c,2)) { goto L_8019A120; } // 8019A114
  W32(c->r[3]+0x00000008u,c->r[29]); // 8019A118
  goto L_8019A154; // 8019A11C
L_8019A120:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8019A120
  cmpu(c,0,c->r[0],c->r[29]); // 8019A124
  if (crb(c,2)) { goto L_8019A154; } // 8019A128
  cmps(c,0,(int32_t)c->r[0],0); // 8019A12C
  if (!crb(c,2)) { goto L_8019A154; } // 8019A130
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 8019A134
  goto L_8019A154; // 8019A138
  goto L_8019A154; // 8019A13C
L_8019A140:;
  c->r[12]=c->r[29]|c->r[29]; // 8019A140
  c->r[3]=c->r[28]|c->r[28]; // 8019A144
  c->r[4]=c->r[30]|c->r[30]; // 8019A148
  c->ctr=c->r[12]; // 8019A14C
  if (true) { c->lr=0x8019A154u; dispatch(c,c->ctr); } // 8019A150
L_8019A154:;
  c->r[3]=c->r[31]|c->r[31]; // 8019A154
  c->lr=0x8019A15Cu; f_80160C90(c); // 8019A158
  c->r[3]=c->r[30]|c->r[30]; // 8019A15C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019A160
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019A164
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019A168
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019A16C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019A170
  c->lr=c->r[0]; // 8019A174
  c->r[1]=c->r[1]+0x00000020u; // 8019A178
  return; // 8019A17C
}

// SISetSamplingRate
void f_8019A180(Ctx* __restrict c) {
  trace_call(0x8019A180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A180
  c->r[0]=c->lr; // 8019A184
  cmpu(c,0,c->r[3],0x0000000Bu); // 8019A188
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019A18C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019A190
  c->r[31]=0u+0x80330000u; // 8019A194
  c->r[31]=c->r[31]+0x00000CE0u; // 8019A198
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019A19C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019A1A0
  c->r[29]=c->r[3]|c->r[3]; // 8019A1A4
  if (!crb(c,1)) { goto L_8019A1B0; } // 8019A1A8
  c->r[29]=0u+0x0000000Bu; // 8019A1AC
L_8019A1B0:;
  c->lr=0x8019A1B4u; f_80160C68(c); // 8019A1B0
  W32(c->r[13]+0xFFFFA0F0u,c->r[29]); // 8019A1B4
  c->r[30]=c->r[3]|c->r[3]; // 8019A1B8
  c->lr=0x8019A1C0u; f_8017441C(c); // 8019A1BC
  cmps(c,0,(int32_t)c->r[3],2); // 8019A1C0
  if (crb(c,2)) { goto L_8019A1E8; } // 8019A1C4
  if (!crb(c,0)) { goto L_8019A1DC; } // 8019A1C8
  cmps(c,0,(int32_t)c->r[3],0); // 8019A1CC
  if (crb(c,2)) { goto L_8019A1E8; } // 8019A1D0
  if (!crb(c,0)) { goto L_8019A1F0; } // 8019A1D4
  goto L_8019A1F8; // 8019A1D8
L_8019A1DC:;
  cmps(c,0,(int32_t)c->r[3],5); // 8019A1DC
  if (crb(c,2)) { goto L_8019A1E8; } // 8019A1E0
  goto L_8019A1F8; // 8019A1E4
L_8019A1E8:;
  c->r[5]=c->r[31]+0x00000000u; // 8019A1E8
  goto L_8019A20C; // 8019A1EC
L_8019A1F0:;
  c->r[5]=c->r[31]+0x00000030u; // 8019A1F0
  goto L_8019A20C; // 8019A1F4
L_8019A1F8:;
  c->r[3]=c->r[31]+0x00000060u; // 8019A1F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019A1FC
  c->lr=0x8019A204u; f_8015CED8(c); // 8019A200
  c->r[29]=0u+0x00000000u; // 8019A204
  c->r[5]=c->r[31]+0x00000000u; // 8019A208
L_8019A20C:;
  c->r[3]=0u+0xCC000000u; // 8019A20C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8019A210
  c->r[4]=R16(c->r[3]+0x0000206Cu); // 8019A214
  c->r[3]=c->r[5]+c->r[0]; // 8019A218
  c->r[0]=R16(c->r[5]+c->r[0]); // 8019A21C
  c->r[5]=rotl(c->r[4],0)&0x00000001u; // 8019A220
  c->r[4]=R8(c->r[3]+0x00000002u); // 8019A224
  c->r[3]=c->r[5]+0x00000001u; // 8019A228
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8019A22C
  c->lr=0x8019A234u; f_801997A0(c); // 8019A230
  c->r[3]=c->r[30]|c->r[30]; // 8019A234
  c->lr=0x8019A23Cu; f_80160C90(c); // 8019A238
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019A23C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019A240
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019A244
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019A248
  c->lr=c->r[0]; // 8019A24C
  c->r[1]=c->r[1]+0x00000020u; // 8019A250
  return; // 8019A254
}

// SIRefreshSamplingRate
void f_8019A258(Ctx* __restrict c) {
  trace_call(0x8019A258u);
  c->r[3]=R32(c->r[13]+0xFFFFA0F0u); // 8019A258
  f_8019A180(c); return; // 8019A25C
}

// fn_8019A260
void f_8019A260(Ctx* __restrict c) {
  /* twi */ // 8019A260
  return; // 8019A264
}

// fn_8019A268
void f_8019A268(Ctx* __restrict c) {
  /* twi */ // 8019A268
  return; // 8019A26C
}

// fn_8019A270
void f_8019A270(Ctx* __restrict c) {
  /* twi */ // 8019A270
  return; // 8019A274
}

// fn_8019A278
void f_8019A278(Ctx* __restrict c) {
  /* twi */ // 8019A278
  return; // 8019A27C
}

// gdev_cc_initialize
void f_8019A280(Ctx* __restrict c) {
  trace_call(0x8019A280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A280
  c->r[0]=c->lr; // 8019A284
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019A288
  c->lr=0x8019A290u; f_8019F5FC(c); // 8019A28C
  c->r[3]=0u+0x80390000u; // 8019A290
  c->r[4]=0u+0x80390000u; // 8019A294
  c->r[3]=c->r[3]+0x00000170u; // 8019A298
  c->r[5]=0u+0x00000500u; // 8019A29C
  c->r[4]=c->r[4]+0xFFFFFC70u; // 8019A2A0
  c->lr=0x8019A2A8u; f_8019A53C(c); // 8019A2A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019A2A8
  c->r[3]=0u+0x00000000u; // 8019A2AC
  c->lr=c->r[0]; // 8019A2B0
  c->r[1]=c->r[1]+0x00000010u; // 8019A2B4
  return; // 8019A2B8
}

// gdev_cc_shutdown
void f_8019A2BC(Ctx* __restrict c) {
  trace_call(0x8019A2BCu);
  c->r[3]=0u+0x00000000u; // 8019A2BC
  return; // 8019A2C0
}

// gdev_cc_open
void f_8019A2C4(Ctx* __restrict c) {
  trace_call(0x8019A2C4u);
  c->r[0]=R32(c->r[13]+0xFFFFA0F8u); // 8019A2C4
  cmps(c,0,(int32_t)c->r[0],0); // 8019A2C8
  if (crb(c,2)) { goto L_8019A2D8; } // 8019A2CC
  c->r[3]=0u+0xFFFFD8EBu; // 8019A2D0
  return; // 8019A2D4
L_8019A2D8:;
  c->r[0]=0u+0x00000001u; // 8019A2D8
  W32(c->r[13]+0xFFFFA0F8u,c->r[0]); // 8019A2DC
  c->r[3]=0u+0x00000000u; // 8019A2E0
  return; // 8019A2E4
}

// gdev_cc_close
void f_8019A2E8(Ctx* __restrict c) {
  trace_call(0x8019A2E8u);
  c->r[3]=0u+0x00000000u; // 8019A2E8
  return; // 8019A2EC
}

// gdev_cc_read
void f_8019A2F0(Ctx* __restrict c) {
  trace_call(0x8019A2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFAE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A2F0
  c->r[0]=c->lr; // 8019A2F4
  W32(c->r[1]+0x00000524u,c->r[0]); // 8019A2F8
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019A2FC
  c->r[27]=c->r[3]|c->r[3]; // 8019A300
  c->r[28]=c->r[4]|c->r[4]; // 8019A304
  c->r[30]=0u+0x00000000u; // 8019A308
  c->r[0]=R32(c->r[13]+0xFFFFA0F8u); // 8019A30C
  cmps(c,0,(int32_t)c->r[0],0); // 8019A310
  if (!crb(c,2)) { goto L_8019A320; } // 8019A314
  c->r[3]=0u+0xFFFFD8EFu; // 8019A318
  goto L_8019A390; // 8019A31C
L_8019A320:;
  c->r[31]=0u+0x80390000u; // 8019A320
  goto L_8019A364; // 8019A324
L_8019A328:;
  c->r[30]=0u+0x00000000u; // 8019A328
  c->lr=0x8019A330u; f_8019F6AC(c); // 8019A32C
  cmps(c,0,(int32_t)c->r[3],0); // 8019A330
  c->r[29]=c->r[3]|c->r[3]; // 8019A334
  if (crb(c,2)) { goto L_8019A364; } // 8019A338
  c->r[4]=c->r[28]|c->r[28]; // 8019A33C
  c->r[3]=c->r[1]+0x00000008u; // 8019A340
  c->lr=0x8019A348u; f_8019F750(c); // 8019A344
  cmps(c,0,(int32_t)c->r[3],0); // 8019A348
  c->r[30]=c->r[3]|c->r[3]; // 8019A34C
  if (!crb(c,2)) { goto L_8019A364; } // 8019A350
  c->r[5]=c->r[29]|c->r[29]; // 8019A354
  c->r[3]=c->r[31]+0x00000170u; // 8019A358
  c->r[4]=c->r[1]+0x00000008u; // 8019A35C
  c->lr=0x8019A364u; f_8019A560(c); // 8019A360
L_8019A364:;
  c->r[3]=c->r[31]+0x00000170u; // 8019A364
  c->lr=0x8019A36Cu; f_8019A534(c); // 8019A368
  cmpu(c,0,c->r[3],c->r[28]); // 8019A36C
  if (crb(c,0)) { IRQCHK(c); goto L_8019A328; } // 8019A370
  cmps(c,0,(int32_t)c->r[30],0); // 8019A374
  if (!crb(c,2)) { goto L_8019A38C; } // 8019A378
  c->r[4]=c->r[27]|c->r[27]; // 8019A37C
  c->r[5]=c->r[28]|c->r[28]; // 8019A380
  c->r[3]=c->r[31]+0x00000170u; // 8019A384
  c->lr=0x8019A38Cu; f_8019A668(c); // 8019A388
L_8019A38C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019A38C
L_8019A390:;
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019A390
  c->r[0]=R32(c->r[1]+0x00000524u); // 8019A394
  c->lr=c->r[0]; // 8019A398
  c->r[1]=c->r[1]+0x00000520u; // 8019A39C
  return; // 8019A3A0
}

// gdev_cc_write
void f_8019A3A4(Ctx* __restrict c) {
  trace_call(0x8019A3A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A3A4
  c->r[0]=c->lr; // 8019A3A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019A3AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019A3B0
  c->r[31]=c->r[4]|c->r[4]; // 8019A3B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019A3B8
  c->r[30]=c->r[3]|c->r[3]; // 8019A3BC
  c->r[0]=R32(c->r[13]+0xFFFFA0F8u); // 8019A3C0
  cmps(c,0,(int32_t)c->r[0],0); // 8019A3C4
  if (!crb(c,2)) { goto L_8019A3F4; } // 8019A3C8
  c->r[3]=0u+0xFFFFD8EFu; // 8019A3CC
  goto L_8019A400; // 8019A3D0
  goto L_8019A3F4; // 8019A3D4
L_8019A3D8:;
  c->r[3]=c->r[30]|c->r[30]; // 8019A3D8
  c->r[4]=c->r[31]|c->r[31]; // 8019A3DC
  c->lr=0x8019A3E4u; f_8019F7D0(c); // 8019A3E0
  cmps(c,0,(int32_t)c->r[3],0); // 8019A3E4
  if (crb(c,2)) { goto L_8019A3FC; } // 8019A3E8
  c->r[30]=c->r[30]+c->r[3]; // 8019A3EC
  c->r[31]=c->r[31]-c->r[3]; // 8019A3F0
L_8019A3F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019A3F4
  if (crb(c,1)) { IRQCHK(c); goto L_8019A3D8; } // 8019A3F8
L_8019A3FC:;
  c->r[3]=0u+0x00000000u; // 8019A3FC
L_8019A400:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019A400
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019A404
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019A408
  c->lr=c->r[0]; // 8019A40C
  c->r[1]=c->r[1]+0x00000010u; // 8019A410
  return; // 8019A414
}

// gdev_cc_pre_continue
void f_8019A418(Ctx* __restrict c) {
  trace_call(0x8019A418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A418
  c->r[0]=c->lr; // 8019A41C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019A420
  c->lr=0x8019A428u; f_8019F8E4(c); // 8019A424
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019A428
  c->r[3]=0u+0x00000000u; // 8019A42C
  c->lr=c->r[0]; // 8019A430
  c->r[1]=c->r[1]+0x00000010u; // 8019A434
  return; // 8019A438
}

// gdev_cc_post_stop
void f_8019A43C(Ctx* __restrict c) {
  trace_call(0x8019A43Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A43C
  c->r[0]=c->lr; // 8019A440
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019A444
  c->lr=0x8019A44Cu; f_8019F8E0(c); // 8019A448
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019A44C
  c->r[3]=0u+0x00000000u; // 8019A450
  c->lr=c->r[0]; // 8019A454
  c->r[1]=c->r[1]+0x00000010u; // 8019A458
  return; // 8019A45C
}

// gdev_cc_peek
void f_8019A460(Ctx* __restrict c) {
  trace_call(0x8019A460u);
  {uint32_t ea=c->r[1]+0xFFFFFAF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A460
  c->r[0]=c->lr; // 8019A464
  W32(c->r[1]+0x00000514u,c->r[0]); // 8019A468
  W32(c->r[1]+0x0000050Cu,c->r[31]); // 8019A46C
  c->lr=0x8019A474u; f_8019F6AC(c); // 8019A470
  cmps(c,0,(int32_t)c->r[3],0); // 8019A474
  c->r[31]=c->r[3]|c->r[3]; // 8019A478
  if (crb(c,1)) { goto L_8019A488; } // 8019A47C
  c->r[3]=0u+0x00000000u; // 8019A480
  goto L_8019A4C0; // 8019A484
L_8019A488:;
  c->r[4]=c->r[31]|c->r[31]; // 8019A488
  c->r[3]=c->r[1]+0x00000008u; // 8019A48C
  c->lr=0x8019A494u; f_8019F750(c); // 8019A490
  cmps(c,0,(int32_t)c->r[3],0); // 8019A494
  if (!crb(c,2)) { goto L_8019A4B4; } // 8019A498
  c->r[3]=0u+0x80390000u; // 8019A49C
  c->r[5]=c->r[31]|c->r[31]; // 8019A4A0
  c->r[3]=c->r[3]+0x00000170u; // 8019A4A4
  c->r[4]=c->r[1]+0x00000008u; // 8019A4A8
  c->lr=0x8019A4B0u; f_8019A560(c); // 8019A4AC
  goto L_8019A4BC; // 8019A4B0
L_8019A4B4:;
  c->r[3]=0u+0xFFFFD8E7u; // 8019A4B4
  goto L_8019A4C0; // 8019A4B8
L_8019A4BC:;
  c->r[3]=c->r[31]|c->r[31]; // 8019A4BC
L_8019A4C0:;
  c->r[0]=R32(c->r[1]+0x00000514u); // 8019A4C0
  c->r[31]=R32(c->r[1]+0x0000050Cu); // 8019A4C4
  c->lr=c->r[0]; // 8019A4C8
  c->r[1]=c->r[1]+0x00000510u; // 8019A4CC
  return; // 8019A4D0
}

// gdev_cc_initinterrupts
void f_8019A4D4(Ctx* __restrict c) {
  trace_call(0x8019A4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A4D4
  c->r[0]=c->lr; // 8019A4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019A4DC
  c->lr=0x8019A4E4u; f_8019F658(c); // 8019A4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019A4E4
  c->r[3]=0u+0x00000000u; // 8019A4E8
  c->lr=c->r[0]; // 8019A4EC
  c->r[1]=c->r[1]+0x00000010u; // 8019A4F0
  return; // 8019A4F4
}

// fn_8019A4F8
void f_8019A4F8(Ctx* __restrict c) {
  return; // 8019A4F8
}

// fn_8019A4FC
void f_8019A4FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A4FC
  c->r[0]=c->lr; // 8019A500
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019A504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019A508
  c->r[31]=c->r[3]|c->r[3]; // 8019A50C
  c->lr=0x8019A514u; f_80160C68(c); // 8019A510
  W32(c->r[31]+0x00000000u,c->r[3]); // 8019A514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019A518
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019A51C
  c->lr=c->r[0]; // 8019A520
  c->r[1]=c->r[1]+0x00000010u; // 8019A524
  return; // 8019A528
}

// fn_8019A52C
void f_8019A52C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 8019A52C
  f_80160C90(c); return; // 8019A530
}

// fn_8019A534
void f_8019A534(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 8019A534
  return; // 8019A538
}

// fn_8019A53C
void f_8019A53C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8019A53C
  W32(c->r[3]+0x00000008u,c->r[4]); // 8019A540
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8019A544
  W32(c->r[3]+0x00000000u,c->r[4]); // 8019A548
  W32(c->r[3]+0x00000004u,c->r[4]); // 8019A54C
  W32(c->r[3]+0x00000010u,c->r[0]); // 8019A550
  W32(c->r[3]+0x00000014u,c->r[5]); // 8019A554
  c->r[3]=c->r[3]+0x00000018u; // 8019A558
  f_8019A4F8(c); return; // 8019A55C
}

// fn_8019A560
void f_8019A560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A560
  c->r[0]=c->lr; // 8019A564
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019A568
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019A56C
  c->r[31]=c->r[5]|c->r[5]; // 8019A570
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019A574
  c->r[30]=c->r[3]|c->r[3]; // 8019A578
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019A57C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019A580
  c->r[28]=c->r[4]|c->r[4]; // 8019A584
  c->r[0]=R32(c->r[3]+0x00000014u); // 8019A588
  cmpu(c,0,c->r[5],c->r[0]); // 8019A58C
  if (!crb(c,1)) { goto L_8019A59C; } // 8019A590
  c->r[3]=0u+0xFFFFFFFFu; // 8019A594
  goto L_8019A648; // 8019A598
L_8019A59C:;
  c->r[3]=c->r[3]+0x00000018u; // 8019A59C
  c->lr=0x8019A5A4u; f_8019A4FC(c); // 8019A5A0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8019A5A4
  c->r[4]=R32(c->r[30]+0x00000008u); // 8019A5A8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8019A5AC
  c->r[4]=c->r[3]-c->r[4]; // 8019A5B0
  c->r[29]=c->r[0]-c->r[4]; // 8019A5B4
  cmpu(c,0,c->r[29],c->r[31]); // 8019A5B8
  if (crb(c,0)) { goto L_8019A5DC; } // 8019A5BC
  c->r[4]=c->r[28]|c->r[28]; // 8019A5C0
  c->r[5]=c->r[31]|c->r[31]; // 8019A5C4
  c->lr=0x8019A5CCu; f_80004338(c); // 8019A5C8
  c->r[0]=R32(c->r[30]+0x00000004u); // 8019A5CC
  c->r[0]=c->r[0]+c->r[31]; // 8019A5D0
  W32(c->r[30]+0x00000004u,c->r[0]); // 8019A5D4
  goto L_8019A608; // 8019A5D8
L_8019A5DC:;
  c->r[4]=c->r[28]|c->r[28]; // 8019A5DC
  c->r[5]=c->r[29]|c->r[29]; // 8019A5E0
  c->lr=0x8019A5E8u; f_80004338(c); // 8019A5E4
  c->r[3]=R32(c->r[30]+0x00000008u); // 8019A5E8
  c->r[4]=c->r[28]+c->r[29]; // 8019A5EC
  c->r[5]=c->r[31]-c->r[29]; // 8019A5F0
  c->lr=0x8019A5F8u; f_80004338(c); // 8019A5F4
  c->r[0]=R32(c->r[30]+0x00000008u); // 8019A5F8
  c->r[0]=c->r[0]+c->r[31]; // 8019A5FC
  c->r[0]=c->r[0]-c->r[29]; // 8019A600
  W32(c->r[30]+0x00000004u,c->r[0]); // 8019A604
L_8019A608:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 8019A608
  c->r[0]=R32(c->r[30]+0x00000004u); // 8019A60C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8019A610
  c->r[0]=c->r[0]-c->r[4]; // 8019A614
  cmpu(c,0,c->r[3],c->r[0]); // 8019A618
  if (!crb(c,2)) { goto L_8019A624; } // 8019A61C
  W32(c->r[30]+0x00000004u,c->r[4]); // 8019A620
L_8019A624:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8019A624
  c->r[3]=c->r[30]+0x00000018u; // 8019A628
  c->r[0]=R32(c->r[30]+0x00000010u); // 8019A62C
  c->r[4]=c->r[4]-c->r[31]; // 8019A630
  W32(c->r[30]+0x00000014u,c->r[4]); // 8019A634
  c->r[0]=c->r[0]+c->r[31]; // 8019A638
  W32(c->r[30]+0x00000010u,c->r[0]); // 8019A63C
  c->lr=0x8019A644u; f_8019A52C(c); // 8019A640
  c->r[3]=0u+0x00000000u; // 8019A644
L_8019A648:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019A648
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019A64C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019A650
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019A654
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019A658
  c->lr=c->r[0]; // 8019A65C
  c->r[1]=c->r[1]+0x00000020u; // 8019A660
  return; // 8019A664
}

// fn_8019A668
void f_8019A668(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A668
  c->r[0]=c->lr; // 8019A66C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019A670
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019A674
  c->r[31]=c->r[5]|c->r[5]; // 8019A678
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019A67C
  c->r[30]=c->r[3]|c->r[3]; // 8019A680
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019A684
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019A688
  c->r[28]=c->r[4]|c->r[4]; // 8019A68C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8019A690
  cmpu(c,0,c->r[5],c->r[0]); // 8019A694
  if (!crb(c,1)) { goto L_8019A6A4; } // 8019A698
  c->r[3]=0u+0xFFFFFFFFu; // 8019A69C
  goto L_8019A750; // 8019A6A0
L_8019A6A4:;
  c->r[3]=c->r[3]+0x00000018u; // 8019A6A4
  c->lr=0x8019A6ACu; f_8019A4FC(c); // 8019A6A8
  c->r[4]=R32(c->r[30]+0x00000000u); // 8019A6AC
  c->r[3]=R32(c->r[30]+0x00000008u); // 8019A6B0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8019A6B4
  c->r[3]=c->r[4]-c->r[3]; // 8019A6B8
  c->r[29]=c->r[0]-c->r[3]; // 8019A6BC
  cmpu(c,0,c->r[31],c->r[29]); // 8019A6C0
  if (!crb(c,0)) { goto L_8019A6E4; } // 8019A6C4
  c->r[3]=c->r[28]|c->r[28]; // 8019A6C8
  c->r[5]=c->r[31]|c->r[31]; // 8019A6CC
  c->lr=0x8019A6D4u; f_80004338(c); // 8019A6D0
  c->r[0]=R32(c->r[30]+0x00000000u); // 8019A6D4
  c->r[0]=c->r[0]+c->r[31]; // 8019A6D8
  W32(c->r[30]+0x00000000u,c->r[0]); // 8019A6DC
  goto L_8019A710; // 8019A6E0
L_8019A6E4:;
  c->r[3]=c->r[28]|c->r[28]; // 8019A6E4
  c->r[5]=c->r[29]|c->r[29]; // 8019A6E8
  c->lr=0x8019A6F0u; f_80004338(c); // 8019A6EC
  c->r[4]=R32(c->r[30]+0x00000008u); // 8019A6F0
  c->r[3]=c->r[28]+c->r[29]; // 8019A6F4
  c->r[5]=c->r[31]-c->r[29]; // 8019A6F8
  c->lr=0x8019A700u; f_80004338(c); // 8019A6FC
  c->r[0]=R32(c->r[30]+0x00000008u); // 8019A700
  c->r[0]=c->r[0]+c->r[31]; // 8019A704
  c->r[0]=c->r[0]-c->r[29]; // 8019A708
  W32(c->r[30]+0x00000000u,c->r[0]); // 8019A70C
L_8019A710:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 8019A710
  c->r[0]=R32(c->r[30]+0x00000000u); // 8019A714
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8019A718
  c->r[0]=c->r[0]-c->r[4]; // 8019A71C
  cmpu(c,0,c->r[3],c->r[0]); // 8019A720
  if (!crb(c,2)) { goto L_8019A72C; } // 8019A724
  W32(c->r[30]+0x00000000u,c->r[4]); // 8019A728
L_8019A72C:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8019A72C
  c->r[3]=c->r[30]+0x00000018u; // 8019A730
  c->r[0]=R32(c->r[30]+0x00000010u); // 8019A734
  c->r[4]=c->r[4]+c->r[31]; // 8019A738
  W32(c->r[30]+0x00000014u,c->r[4]); // 8019A73C
  c->r[0]=c->r[0]-c->r[31]; // 8019A740
  W32(c->r[30]+0x00000010u,c->r[0]); // 8019A744
  c->lr=0x8019A74Cu; f_8019A52C(c); // 8019A748
  c->r[3]=0u+0x00000000u; // 8019A74C
L_8019A750:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019A750
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019A754
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019A758
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019A75C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019A760
  c->lr=c->r[0]; // 8019A764
  c->r[1]=c->r[1]+0x00000020u; // 8019A768
  return; // 8019A76C
}

// TRK_flush_cache
void f_8019A770(Ctx* __restrict c) {
  trace_call(0x8019A770u);
  c->r[5]=0u+0xFFFF0000u; // 8019A770
  c->r[5]=c->r[5]|0x0000FFF1u; // 8019A774
  c->r[5]=c->r[5]&c->r[3]; // 8019A778
  c->r[3]=c->r[3]-c->r[5]; // 8019A77C
  c->r[4]=c->r[4]+c->r[3]; // 8019A780
L_8019A784:;
  /* dcbst */ // 8019A784
  /* dcbf */ // 8019A788
  /* sync */ // 8019A78C
  /* icbi */ // 8019A790
  c->r[5]=addc(c,c->r[5],0x00000008u,0); // 8019A794
  c->r[4]=addc(c,c->r[4],0xFFFFFFF8u,0); cr0(c,c->r[4]); // 8019A798
  if (!crb(c,0)) { IRQCHK(c); goto L_8019A784; } // 8019A79C
  /* isync */ // 8019A7A0
  return; // 8019A7A4
}

// TRK_main
void f_8019A7A8(Ctx* __restrict c) {
  trace_call(0x8019A7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A7A8
  c->r[0]=c->lr; // 8019A7AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019A7B0
  c->lr=0x8019A7B8u; f_8019B540(c); // 8019A7B4
  cmps(c,0,(int32_t)c->r[3],0); // 8019A7B8
  W32(c->r[13]+0xFFFFA100u,c->r[3]); // 8019A7BC
  if (!crb(c,2)) { goto L_8019A7CC; } // 8019A7C0
  c->lr=0x8019A7C8u; f_8019B610(c); // 8019A7C4
  c->lr=0x8019A7CCu; f_8019A7E4(c); // 8019A7C8
L_8019A7CC:;
  c->lr=0x8019A7D0u; f_8019B5EC(c); // 8019A7CC
  W32(c->r[13]+0xFFFFA100u,c->r[3]); // 8019A7D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019A7D4
  c->lr=c->r[0]; // 8019A7D8
  c->r[1]=c->r[1]+0x00000010u; // 8019A7DC
  return; // 8019A7E0
}

// TRKNubMainLoop
void f_8019A7E4(Ctx* __restrict c) {
  trace_call(0x8019A7E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A7E4
  c->r[0]=c->lr; // 8019A7E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019A7EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019A7F0
  c->r[31]=0u+0x00000000u; // 8019A7F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019A7F8
  c->r[30]=0u+0x00000000u; // 8019A7FC
  goto L_8019A8B0; // 8019A800
L_8019A804:;
  c->r[3]=c->r[1]+0x00000008u; // 8019A804
  c->lr=0x8019A80Cu; f_8019B3C8(c); // 8019A808
  cmps(c,0,(int32_t)c->r[3],0); // 8019A80C
  if (crb(c,2)) { goto L_8019A878; } // 8019A810
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019A814
  c->r[30]=0u+0x00000000u; // 8019A818
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8019A81C
  cmpu(c,0,c->r[0],0x00000001u); // 8019A820
  if (!crb(c,1)) { goto L_8019A85C; } // 8019A824
  cmps(c,0,(int32_t)c->r[3],2); // 8019A828
  if (crb(c,2)) { goto L_8019A844; } // 8019A82C
  cmps(c,0,(int32_t)c->r[3],1); // 8019A830
  if (crb(c,2)) { goto L_8019A854; } // 8019A834
  cmps(c,0,(int32_t)c->r[3],5); // 8019A838
  if (crb(c,2)) { goto L_8019A868; } // 8019A83C
  goto L_8019A86C; // 8019A840
L_8019A844:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019A844
  c->lr=0x8019A84Cu; f_8019C294(c); // 8019A848
  c->lr=0x8019A850u; f_8019AB34(c); // 8019A84C
  goto L_8019A86C; // 8019A850
L_8019A854:;
  c->r[31]=0u+0x00000001u; // 8019A854
  goto L_8019A86C; // 8019A858
L_8019A85C:;
  c->r[3]=c->r[1]+0x00000008u; // 8019A85C
  c->lr=0x8019A864u; f_8019E9AC(c); // 8019A860
  goto L_8019A86C; // 8019A864
L_8019A868:;
  c->lr=0x8019A86Cu; f_8019EED4(c); // 8019A868
L_8019A86C:;
  c->r[3]=c->r[1]+0x00000008u; // 8019A86C
  c->lr=0x8019A874u; f_8019B538(c); // 8019A870
  goto L_8019A8B0; // 8019A874
L_8019A878:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019A878
  if (crb(c,2)) { goto L_8019A890; } // 8019A87C
  c->r[3]=R32(c->r[13]+0xFFFFA120u); // 8019A880
  c->r[0]=R8(c->r[3]+0x00000000u); // 8019A884
  cmps(c,0,(int32_t)c->r[0],0); // 8019A888
  if (crb(c,2)) { goto L_8019A89C; } // 8019A88C
L_8019A890:;
  c->r[30]=0u+0x00000001u; // 8019A890
  c->lr=0x8019A898u; f_8019B75C(c); // 8019A894
  goto L_8019A8B0; // 8019A898
L_8019A89C:;
  c->lr=0x8019A8A0u; f_8019F0C8(c); // 8019A89C
  cmps(c,0,(int32_t)c->r[3],0); // 8019A8A0
  if (!crb(c,2)) { goto L_8019A8AC; } // 8019A8A4
  c->lr=0x8019A8ACu; f_8019BE18(c); // 8019A8A8
L_8019A8AC:;
  c->r[30]=0u+0x00000000u; // 8019A8AC
L_8019A8B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019A8B0
  if (crb(c,2)) { IRQCHK(c); goto L_8019A804; } // 8019A8B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019A8B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019A8BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019A8C0
  c->lr=c->r[0]; // 8019A8C4
  c->r[1]=c->r[1]+0x00000020u; // 8019A8C8
  return; // 8019A8CC
}

// fn_8019A8D0
void f_8019A8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019A8D0
  cmps(c,0,(int32_t)c->r[5],0); // 8019A8D4
  c->r[9]=0u+0x000000FFu; // 8019A8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019A8DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019A8E0
  c->r[30]=c->r[3]|c->r[3]; // 8019A8E4
  if (crb(c,2)) { goto L_8019A9FC; } // 8019A8E8
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 8019A8EC
  c->ctr=c->r[0]; // 8019A8F0
  if (crb(c,2)) { goto L_8019A9A4; } // 8019A8F4
L_8019A8F8:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8019A8F8
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8019A8FC
  c->r[0]=c->r[30]-c->r[12]; // 8019A900
  c->r[7]=R32(c->r[11]+0x00000000u); // 8019A904
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 8019A908
  c->r[6]=c->r[4]-c->r[11]; // 8019A90C
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 8019A910
  c->r[4]=c->r[4]+0x00000001u; // 8019A914
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019A918
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 8019A91C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 8019A920
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8019A924
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8019A928
  c->r[8]=R32(c->r[12]+0x00000000u); // 8019A92C
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 8019A930
  c->r[6]=c->r[4]-c->r[11]; // 8019A934
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 8019A938
  c->r[30]=c->r[30]+0x00000001u; // 8019A93C
  c->r[7]=c->r[8]&~c->r[10]; // 8019A940
  c->r[4]=c->r[4]+0x00000001u; // 8019A944
  c->r[0]=c->r[10]&c->r[0]; // 8019A948
  c->r[0]=c->r[7]|c->r[0]; // 8019A94C
  W32(c->r[12]+0x00000000u,c->r[0]); // 8019A950
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8019A954
  c->r[0]=c->r[30]-c->r[12]; // 8019A958
  c->r[7]=R32(c->r[11]+0x00000000u); // 8019A95C
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 8019A960
  c->r[8]=R32(c->r[12]+0x00000000u); // 8019A964
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 8019A968
  c->r[30]=c->r[30]+0x00000001u; // 8019A96C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019A970
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 8019A974
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 8019A978
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8019A97C
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 8019A980
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 8019A984
  c->r[7]=c->r[8]&~c->r[10]; // 8019A988
  c->r[0]=c->r[10]&c->r[0]; // 8019A98C
  c->r[0]=c->r[7]|c->r[0]; // 8019A990
  W32(c->r[12]+0x00000000u,c->r[0]); // 8019A994
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019A8F8; } // 8019A998
  c->r[5]=c->r[5]&0x00000001u; cr0(c,c->r[5]); // 8019A99C
  if (crb(c,2)) { goto L_8019A9FC; } // 8019A9A0
L_8019A9A4:;
  c->ctr=c->r[5]; // 8019A9A4
L_8019A9A8:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8019A9A8
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8019A9AC
  c->r[0]=c->r[30]-c->r[12]; // 8019A9B0
  c->r[7]=R32(c->r[11]+0x00000000u); // 8019A9B4
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 8019A9B8
  c->r[6]=c->r[4]-c->r[11]; // 8019A9BC
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 8019A9C0
  c->r[8]=R32(c->r[12]+0x00000000u); // 8019A9C4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019A9C8
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 8019A9CC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 8019A9D0
  c->r[4]=c->r[4]+0x00000001u; // 8019A9D4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8019A9D8
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 8019A9DC
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 8019A9E0
  c->r[30]=c->r[30]+0x00000001u; // 8019A9E4
  c->r[7]=c->r[8]&~c->r[10]; // 8019A9E8
  c->r[0]=c->r[10]&c->r[0]; // 8019A9EC
  c->r[0]=c->r[7]|c->r[0]; // 8019A9F0
  W32(c->r[12]+0x00000000u,c->r[0]); // 8019A9F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019A9A8; } // 8019A9F8
L_8019A9FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019A9FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019AA00
  c->r[1]=c->r[1]+0x00000010u; // 8019AA04
  return; // 8019AA08
}

// fn_8019AA0C
void f_8019AA0C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 8019AA0C
  c->r[8]=rotl(c->r[4],0)&0x000000FFu; // 8019AA10
  c->r[7]=c->r[3]|c->r[3]; // 8019AA14
  c->r[6]=0u+0x000000FFu; // 8019AA18
  if (crb(c,2)) return; // 8019AA1C
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8019AA20
  c->ctr=c->r[0]; // 8019AA24
  if (crb(c,2)) { goto L_8019AAF8; } // 8019AA28
L_8019AA2C:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8019AA2C
  c->r[0]=c->r[7]-c->r[10]; // 8019AA30
  c->r[4]=R32(c->r[10]+0x00000000u); // 8019AA34
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8019AA38
  c->r[7]=c->r[7]+0x00000001u; // 8019AA3C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019AA40
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8019AA44
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8019AA48
  c->r[4]=c->r[4]&~c->r[9]; // 8019AA4C
  c->r[0]=c->r[9]&c->r[0]; // 8019AA50
  c->r[0]=c->r[4]|c->r[0]; // 8019AA54
  W32(c->r[10]+0x00000000u,c->r[0]); // 8019AA58
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8019AA5C
  c->r[0]=c->r[7]-c->r[10]; // 8019AA60
  c->r[4]=R32(c->r[10]+0x00000000u); // 8019AA64
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8019AA68
  c->r[7]=c->r[7]+0x00000001u; // 8019AA6C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019AA70
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8019AA74
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8019AA78
  c->r[4]=c->r[4]&~c->r[9]; // 8019AA7C
  c->r[0]=c->r[9]&c->r[0]; // 8019AA80
  c->r[0]=c->r[4]|c->r[0]; // 8019AA84
  W32(c->r[10]+0x00000000u,c->r[0]); // 8019AA88
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8019AA8C
  c->r[0]=c->r[7]-c->r[10]; // 8019AA90
  c->r[4]=R32(c->r[10]+0x00000000u); // 8019AA94
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8019AA98
  c->r[7]=c->r[7]+0x00000001u; // 8019AA9C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019AAA0
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8019AAA4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8019AAA8
  c->r[4]=c->r[4]&~c->r[9]; // 8019AAAC
  c->r[0]=c->r[9]&c->r[0]; // 8019AAB0
  c->r[0]=c->r[4]|c->r[0]; // 8019AAB4
  W32(c->r[10]+0x00000000u,c->r[0]); // 8019AAB8
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8019AABC
  c->r[0]=c->r[7]-c->r[10]; // 8019AAC0
  c->r[4]=R32(c->r[10]+0x00000000u); // 8019AAC4
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8019AAC8
  c->r[7]=c->r[7]+0x00000001u; // 8019AACC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019AAD0
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8019AAD4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8019AAD8
  c->r[4]=c->r[4]&~c->r[9]; // 8019AADC
  c->r[0]=c->r[9]&c->r[0]; // 8019AAE0
  c->r[0]=c->r[4]|c->r[0]; // 8019AAE4
  W32(c->r[10]+0x00000000u,c->r[0]); // 8019AAE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019AA2C; } // 8019AAEC
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 8019AAF0
  if (crb(c,2)) return; // 8019AAF4
L_8019AAF8:;
  c->ctr=c->r[5]; // 8019AAF8
L_8019AAFC:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 8019AAFC
  c->r[0]=c->r[7]-c->r[10]; // 8019AB00
  c->r[4]=R32(c->r[10]+0x00000000u); // 8019AB04
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8019AB08
  c->r[7]=c->r[7]+0x00000001u; // 8019AB0C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019AB10
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 8019AB14
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 8019AB18
  c->r[4]=c->r[4]&~c->r[9]; // 8019AB1C
  c->r[0]=c->r[9]&c->r[0]; // 8019AB20
  c->r[0]=c->r[4]|c->r[0]; // 8019AB24
  W32(c->r[10]+0x00000000u,c->r[0]); // 8019AB28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019AAFC; } // 8019AB2C
  return; // 8019AB30
}

// TRKDispatchMessage
void f_8019AB34(Ctx* __restrict c) {
  trace_call(0x8019AB34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019AB34
  c->r[0]=c->lr; // 8019AB38
  c->r[4]=0u+0x00000000u; // 8019AB3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019AB40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019AB44
  c->r[31]=0u+0x00000500u; // 8019AB48
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019AB4C
  c->r[30]=c->r[3]|c->r[3]; // 8019AB50
  c->lr=0x8019AB58u; f_8019C308(c); // 8019AB54
  c->r[0]=R8(c->r[30]+0x00000010u); // 8019AB58
  cmpu(c,0,c->r[0],0x0000001Au); // 8019AB5C
  if (crb(c,1)) { goto L_8019AC38; } // 8019AB60
  c->r[3]=0u+0x80330000u; // 8019AB64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8019AB68
  c->r[3]=c->r[3]+0x00000D78u; // 8019AB6C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8019AB70
  c->ctr=c->r[3]; // 8019AB74
  if (true) { switch (c->ctr) { case 0x8019AB7Cu: goto L_8019AB7C; case 0x8019AB8Cu: goto L_8019AB8C; case 0x8019AB9Cu: goto L_8019AB9C; case 0x8019ABACu: goto L_8019ABAC; case 0x8019ABBCu: goto L_8019ABBC; case 0x8019ABCCu: goto L_8019ABCC; case 0x8019ABDCu: goto L_8019ABDC; case 0x8019ABECu: goto L_8019ABEC; case 0x8019ABFCu: goto L_8019ABFC; case 0x8019AC0Cu: goto L_8019AC0C; case 0x8019AC1Cu: goto L_8019AC1C; case 0x8019AC2Cu: goto L_8019AC2C; case 0x8019AC38u: goto L_8019AC38; default: break; } dispatch(c,c->ctr); return; } // 8019AB78
L_8019AB7C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019AB7C
  c->lr=0x8019AB84u; f_8019C9EC(c); // 8019AB80
  c->r[31]=c->r[3]|c->r[3]; // 8019AB84
  goto L_8019AC38; // 8019AB88
L_8019AB8C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019AB8C
  c->lr=0x8019AB94u; f_8019CA5C(c); // 8019AB90
  c->r[31]=c->r[3]|c->r[3]; // 8019AB94
  goto L_8019AC38; // 8019AB98
L_8019AB9C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019AB9C
  c->lr=0x8019ABA4u; f_8019CAE4(c); // 8019ABA0
  c->r[31]=c->r[3]|c->r[3]; // 8019ABA4
  goto L_8019AC38; // 8019ABA8
L_8019ABAC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019ABAC
  c->lr=0x8019ABB4u; f_8019CB50(c); // 8019ABB0
  c->r[31]=c->r[3]|c->r[3]; // 8019ABB4
  goto L_8019AC38; // 8019ABB8
L_8019ABBC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019ABBC
  c->lr=0x8019ABC4u; f_8019CBBC(c); // 8019ABC0
  c->r[31]=c->r[3]|c->r[3]; // 8019ABC4
  goto L_8019AC38; // 8019ABC8
L_8019ABCC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019ABCC
  c->lr=0x8019ABD4u; f_8019CDF0(c); // 8019ABD0
  c->r[31]=c->r[3]|c->r[3]; // 8019ABD4
  goto L_8019AC38; // 8019ABD8
L_8019ABDC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019ABDC
  c->lr=0x8019ABE4u; f_8019D000(c); // 8019ABE0
  c->r[31]=c->r[3]|c->r[3]; // 8019ABE4
  goto L_8019AC38; // 8019ABE8
L_8019ABEC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019ABEC
  c->lr=0x8019ABF4u; f_8019D1FC(c); // 8019ABF0
  c->r[31]=c->r[3]|c->r[3]; // 8019ABF4
  goto L_8019AC38; // 8019ABF8
L_8019ABFC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019ABFC
  c->lr=0x8019AC04u; f_8019D49C(c); // 8019AC00
  c->r[31]=c->r[3]|c->r[3]; // 8019AC04
  goto L_8019AC38; // 8019AC08
L_8019AC0C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019AC0C
  c->lr=0x8019AC14u; f_8019D560(c); // 8019AC10
  c->r[31]=c->r[3]|c->r[3]; // 8019AC14
  goto L_8019AC38; // 8019AC18
L_8019AC1C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019AC1C
  c->lr=0x8019AC24u; f_8019D7E4(c); // 8019AC20
  c->r[31]=c->r[3]|c->r[3]; // 8019AC24
  goto L_8019AC38; // 8019AC28
L_8019AC2C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019AC2C
  c->lr=0x8019AC34u; f_8019D89C(c); // 8019AC30
  c->r[31]=c->r[3]|c->r[3]; // 8019AC34
L_8019AC38:;
  c->r[3]=c->r[31]|c->r[31]; // 8019AC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019AC3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019AC40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019AC44
  c->lr=c->r[0]; // 8019AC48
  c->r[1]=c->r[1]+0x00000010u; // 8019AC4C
  return; // 8019AC50
}

// InitMetroTRK
void f_8019AC54(Ctx* __restrict c) {
  trace_call(0x8019AC54u);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 8019AC54
  W32(c->r[1]+0x00000000u,c->r[3]); // 8019AC58
  c->r[3]=0u+0x80390000u; // 8019AC5C
  c->r[3]=c->r[3]|0x00001D00u; // 8019AC60
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019AC64
  c->r[4]=R32(c->r[1]+0x00000000u); // 8019AC68
  c->r[1]=c->r[1]+0x00000004u; // 8019AC6C
  W32(c->r[3]+0x00000004u,c->r[1]); // 8019AC70
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8019AC74
  c->r[4]=c->lr; // 8019AC78
  W32(c->r[3]+0x00000084u,c->r[4]); // 8019AC7C
  W32(c->r[3]+0x00000080u,c->r[4]); // 8019AC80
  c->r[4]=c->cr; // 8019AC84
  W32(c->r[3]+0x00000088u,c->r[4]); // 8019AC88
  c->r[4]=c->msr; // 8019AC8C
  c->r[3]=c->r[4]|0x00008000u; // 8019AC90
  c->r[3]=c->r[3]^0x00008000u; // 8019AC94
  c->msr=c->r[3]; // 8019AC98
  mtspr(c,27,c->r[4]); // 8019AC9C
  c->lr=0x8019ACA4u; f_8019BE4C(c); // 8019ACA0
  c->r[3]=0u+0x80390000u; // 8019ACA4
  c->r[3]=c->r[3]|0x00001D00u; // 8019ACA8
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019ACAC
  c->r[0]=0u+0x00000000u; // 8019ACB0
  mtspr(c,1010,c->r[0]); // 8019ACB4
  mtspr(c,1013,c->r[0]); // 8019ACB8
  c->r[1]=0u+0x80440000u; // 8019ACBC
  c->r[1]=c->r[1]|0x0000E020u; // 8019ACC0
  c->r[3]=c->r[5]|c->r[5]; // 8019ACC4
  c->lr=0x8019ACCCu; f_8019B038(c); // 8019ACC8
  cmps(c,0,(int32_t)c->r[3],1); // 8019ACCC
  if (!crb(c,2)) { goto L_8019ACE4; } // 8019ACD0
  c->r[4]=R32(c->r[3]+0x00000084u); // 8019ACD4
  c->lr=c->r[4]; // 8019ACD8
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019ACDC
  return; // 8019ACE0
L_8019ACE4:;
  f_8019A7A8(c); return; // 8019ACE4
}

// InitMetroTRK_BBA
void f_8019ACEC(Ctx* __restrict c) {
  trace_call(0x8019ACECu);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 8019ACEC
  W32(c->r[1]+0x00000000u,c->r[3]); // 8019ACF0
  c->r[3]=0u+0x80390000u; // 8019ACF4
  c->r[3]=c->r[3]|0x00001D00u; // 8019ACF8
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019ACFC
  c->r[4]=R32(c->r[1]+0x00000000u); // 8019AD00
  c->r[1]=c->r[1]+0x00000004u; // 8019AD04
  W32(c->r[3]+0x00000004u,c->r[1]); // 8019AD08
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8019AD0C
  c->r[4]=c->lr; // 8019AD10
  W32(c->r[3]+0x00000084u,c->r[4]); // 8019AD14
  W32(c->r[3]+0x00000080u,c->r[4]); // 8019AD18
  c->r[4]=c->cr; // 8019AD1C
  W32(c->r[3]+0x00000088u,c->r[4]); // 8019AD20
  c->r[4]=c->msr; // 8019AD24
  c->r[3]=c->r[4]|0x00008000u; // 8019AD28
  c->msr=c->r[3]; // 8019AD2C
  mtspr(c,27,c->r[4]); // 8019AD30
  c->lr=0x8019AD38u; f_8019BE4C(c); // 8019AD34
  c->r[3]=0u+0x80390000u; // 8019AD38
  c->r[3]=c->r[3]|0x00001D00u; // 8019AD3C
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019AD40
  c->r[0]=0u+0x00000000u; // 8019AD44
  mtspr(c,1010,c->r[0]); // 8019AD48
  mtspr(c,1013,c->r[0]); // 8019AD4C
  c->r[1]=0u+0x80440000u; // 8019AD50
  c->r[1]=c->r[1]|0x0000E020u; // 8019AD54
  c->r[3]=0u+0x00000002u; // 8019AD58
  c->lr=0x8019AD60u; f_8019B038(c); // 8019AD5C
  cmps(c,0,(int32_t)c->r[3],1); // 8019AD60
  if (!crb(c,2)) { goto L_8019AD78; } // 8019AD64
  c->r[4]=R32(c->r[3]+0x00000084u); // 8019AD68
  c->lr=c->r[4]; // 8019AD6C
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019AD70
  return; // 8019AD74
L_8019AD78:;
  f_8019A7A8(c); return; // 8019AD78
  return; // 8019AD7C
}

// EnableMetroTRKInterrupts
void f_8019AD80(Ctx* __restrict c) {
  trace_call(0x8019AD80u);
  f_8019B1C8(c); return; // 8019AD80
}

// fn_8019AD84
void f_8019AD84(Ctx* __restrict c) {
  c->r[4]=R32(c->r[13]+0xFFFFA108u); // 8019AD84
  cmpu(c,0,c->r[3],c->r[4]); // 8019AD88
  if (crb(c,0)) { goto L_8019ADB0; } // 8019AD8C
  c->r[0]=c->r[4]+0x00004000u; // 8019AD90
  cmpu(c,0,c->r[3],c->r[0]); // 8019AD94
  if (!crb(c,0)) { goto L_8019ADB0; } // 8019AD98
  c->r[4]=0u+0x80390000u; // 8019AD9C
  c->r[4]=c->r[4]+0x00001D00u; // 8019ADA0
  c->r[0]=R32(c->r[4]+0x00000238u); // 8019ADA4
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 8019ADA8
  if (!crb(c,2)) return; // 8019ADAC
L_8019ADB0:;
  c->r[0]=0u+0x03000000u; // 8019ADB0
  cmpu(c,0,c->r[3],c->r[0]); // 8019ADB4
  if (!crb(c,0)) { goto L_8019ADC8; } // 8019ADB8
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8019ADBC
  c->r[3]=c->r[0]|0x80000000u; // 8019ADC0
  return; // 8019ADC4
L_8019ADC8:;
  c->r[0]=0u+0x10000000u; // 8019ADC8
  cmpu(c,0,c->r[3],c->r[0]); // 8019ADCC
  if (crb(c,0)) return; // 8019ADD0
  c->r[0]=0u+0x1C000000u; // 8019ADD4
  cmpu(c,0,c->r[3],c->r[0]); // 8019ADD8
  if (!crb(c,0)) return; // 8019ADDC
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8019ADE0
  c->r[3]=c->r[0]|0x90000000u; // 8019ADE4
  return; // 8019ADE8
}

// fn_8019ADEC
void f_8019ADEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019ADEC
  c->r[0]=c->lr; // 8019ADF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019ADF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019ADF8
  c->r[3]=R32(c->r[13]+0xFFFFA108u); // 8019ADFC
  cmpu(c,0,c->r[3],0x00000044u); // 8019AE00
  if (crb(c,1)) { goto L_8019AE30; } // 8019AE04
  c->r[0]=c->r[3]+0x00004000u; // 8019AE08
  cmpu(c,0,c->r[0],0x00000044u); // 8019AE0C
  if (!crb(c,1)) { goto L_8019AE30; } // 8019AE10
  c->r[3]=0u+0x80390000u; // 8019AE14
  c->r[3]=c->r[3]+0x00001D00u; // 8019AE18
  c->r[0]=R32(c->r[3]+0x00000238u); // 8019AE1C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 8019AE20
  if (crb(c,2)) { goto L_8019AE30; } // 8019AE24
  c->r[3]=0u+0x00000044u; // 8019AE28
  goto L_8019AE38; // 8019AE2C
L_8019AE30:;
  c->r[3]=0u+0x80000000u; // 8019AE30
  c->r[3]=c->r[3]+0x00000044u; // 8019AE34
L_8019AE38:;
  c->r[31]=0u+0x80330000u; // 8019AE38
  c->r[24]=0u+0x80390000u; // 8019AE3C
  c->r[28]=0u+0x80000000u; // 8019AE40
  c->r[29]=R32(c->r[3]+0x00000000u); // 8019AE44
  c->r[31]=c->r[31]+0x00000DE8u; // 8019AE48
  c->r[24]=c->r[24]+0x00001D00u; // 8019AE4C
  c->r[28]=c->r[28]+0x000046B8u; // 8019AE50
  c->r[30]=0u+0x00000000u; // 8019AE54
  c->r[25]=0u+0x03000000u; // 8019AE58
  c->r[27]=0u+0x1C000000u; // 8019AE5C
  c->r[26]=0u+0x10000000u; // 8019AE60
  c->r[23]=0u+0x00000001u; // 8019AE64
L_8019AE68:;
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[23]<<((c->r[30])&31)); // 8019AE68
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 8019AE6C
  if (crb(c,2)) { goto L_8019AEFC; } // 8019AE70
  cmps(c,0,(int32_t)c->r[30],4); // 8019AE74
  if (crb(c,2)) { goto L_8019AEFC; } // 8019AE78
  c->r[4]=R32(c->r[31]+0x00000000u); // 8019AE7C
  c->r[3]=R32(c->r[13]+0xFFFFA108u); // 8019AE80
  cmpu(c,0,c->r[4],c->r[3]); // 8019AE84
  if (crb(c,0)) { goto L_8019AEAC; } // 8019AE88
  c->r[0]=c->r[3]+0x00004000u; // 8019AE8C
  cmpu(c,0,c->r[4],c->r[0]); // 8019AE90
  if (!crb(c,0)) { goto L_8019AEAC; } // 8019AE94
  c->r[0]=R32(c->r[24]+0x00000238u); // 8019AE98
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 8019AE9C
  if (crb(c,2)) { goto L_8019AEAC; } // 8019AEA0
  c->r[22]=c->r[4]|c->r[4]; // 8019AEA4
  goto L_8019AEE0; // 8019AEA8
L_8019AEAC:;
  cmpu(c,0,c->r[4],c->r[25]); // 8019AEAC
  if (!crb(c,0)) { goto L_8019AEC0; } // 8019AEB0
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8019AEB4
  c->r[22]=c->r[0]|0x80000000u; // 8019AEB8
  goto L_8019AEE0; // 8019AEBC
L_8019AEC0:;
  cmpu(c,0,c->r[4],c->r[26]); // 8019AEC0
  if (crb(c,0)) { goto L_8019AEDC; } // 8019AEC4
  cmpu(c,0,c->r[4],c->r[27]); // 8019AEC8
  if (!crb(c,0)) { goto L_8019AEDC; } // 8019AECC
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 8019AED0
  c->r[22]=c->r[0]|0x90000000u; // 8019AED4
  goto L_8019AEE0; // 8019AED8
L_8019AEDC:;
  c->r[22]=c->r[4]|c->r[4]; // 8019AEDC
L_8019AEE0:;
  c->r[3]=c->r[22]|c->r[22]; // 8019AEE0
  c->r[4]=c->r[28]+c->r[4]; // 8019AEE4
  c->r[5]=0u+0x00000100u; // 8019AEE8
  c->lr=0x8019AEF0u; f_8019A8D0(c); // 8019AEEC
  c->r[3]=c->r[22]|c->r[22]; // 8019AEF0
  c->r[4]=0u+0x00000100u; // 8019AEF4
  c->lr=0x8019AEFCu; f_8019A770(c); // 8019AEF8
L_8019AEFC:;
  c->r[30]=c->r[30]+0x00000001u; // 8019AEFC
  c->r[31]=c->r[31]+0x00000004u; // 8019AF00
  cmps(c,0,(int32_t)c->r[30],14); // 8019AF04
  if (!crb(c,1)) { IRQCHK(c); goto L_8019AE68; } // 8019AF08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019AF0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019AF10
  c->lr=c->r[0]; // 8019AF14
  c->r[1]=c->r[1]+0x00000030u; // 8019AF18
  return; // 8019AF1C
}

// TRKInitializeTarget
void f_8019AF20(Ctx* __restrict c) {
  trace_call(0x8019AF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019AF20
  c->r[0]=c->lr; // 8019AF24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019AF28
  c->r[0]=0u+0x00000001u; // 8019AF2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019AF30
  c->r[31]=0u+0x80390000u; // 8019AF34
  c->r[31]=c->r[31]+0x00001C58u; // 8019AF38
  W32(c->r[31]+0x00000098u,c->r[0]); // 8019AF3C
  c->lr=0x8019AF44u; f_8019DD80(c); // 8019AF40
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 8019AF44
  c->r[0]=0u+0xE0000000u; // 8019AF48
  c->r[3]=0u+0x00000000u; // 8019AF4C
  W32(c->r[13]+0xFFFFA108u,c->r[0]); // 8019AF50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019AF54
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019AF58
  c->lr=c->r[0]; // 8019AF5C
  c->r[1]=c->r[1]+0x00000010u; // 8019AF60
  return; // 8019AF64
}

// fn_8019AF68
void f_8019AF68(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8019AF68
  c->r[4]=0u+0x00000000u; // 8019AF6C
  c->r[5]=0u+0x00000000u; // 8019AF70
  f_80162BD0(c); return; // 8019AF74
}

// TRKLoadContext
void f_8019AF78(Ctx* __restrict c) {
  trace_call(0x8019AF78u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8019AF78
  c->r[1]=R32(c->r[3]+0x00000004u); // 8019AF7C
  c->r[2]=R32(c->r[3]+0x00000008u); // 8019AF80
  c->r[5]=R16(c->r[3]+0x000001A2u); // 8019AF84
  c->r[6]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[6]); // 8019AF88
  if (crb(c,2)) { goto L_8019AFA0; } // 8019AF8C
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 8019AF90
  W16(c->r[3]+0x000001A2u,c->r[5]); // 8019AF94
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=5;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019AF98
  goto L_8019AFA4; // 8019AF9C
L_8019AFA0:;
  {uint32_t ea=c->r[3]+0x00000034u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019AFA0
L_8019AFA4:;
  c->r[31]=c->r[3]|c->r[3]; // 8019AFA4
  c->r[3]=c->r[4]|c->r[4]; // 8019AFA8
  c->r[4]=R32(c->r[31]+0x00000080u); // 8019AFAC
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[4]&0xFFFFFFFFu); // 8019AFB0
  c->r[4]=R32(c->r[31]+0x00000084u); // 8019AFB4
  c->lr=c->r[4]; // 8019AFB8
  c->r[4]=R32(c->r[31]+0x00000088u); // 8019AFBC
  c->ctr=c->r[4]; // 8019AFC0
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 8019AFC4
  mtspr(c,1,c->r[4]); // 8019AFC8
  c->r[4]=c->msr; // 8019AFCC
  c->r[4]=rotl(c->r[4],0)&0xFFFF7FFFu; // 8019AFD0
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 8019AFD4
  c->msr=c->r[4]; // 8019AFD8
  mtspr(c,273,c->r[2]); // 8019AFDC
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8019AFE0
  mtspr(c,274,c->r[4]); // 8019AFE4
  c->r[4]=R32(c->r[31]+0x00000010u); // 8019AFE8
  mtspr(c,275,c->r[4]); // 8019AFEC
  c->r[2]=R32(c->r[31]+0x00000198u); // 8019AFF0
  c->r[4]=R32(c->r[31]+0x0000019Cu); // 8019AFF4
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 8019AFF8
  f_8019E5AC(c); return; // 8019AFFC
}

// TRKEXICallBack
void f_8019B000(Ctx* __restrict c) {
  trace_call(0x8019B000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B000
  c->r[0]=c->lr; // 8019B004
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019B00C
  c->r[31]=c->r[4]|c->r[4]; // 8019B010
  c->lr=0x8019B018u; f_80163A04(c); // 8019B014
  c->r[3]=c->r[31]|c->r[31]; // 8019B018
  c->r[4]=0u+0x00000500u; // 8019B01C
  c->lr=0x8019B024u; f_8019AF78(c); // 8019B020
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B024
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019B028
  c->lr=c->r[0]; // 8019B02C
  c->r[1]=c->r[1]+0x00000010u; // 8019B030
  return; // 8019B034
}

// InitMetroTRKCommTable
void f_8019B038(Ctx* __restrict c) {
  trace_call(0x8019B038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B038
  c->r[0]=c->lr; // 8019B03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019B044
  c->r[31]=c->r[3]|c->r[3]; // 8019B048
  c->r[4]=c->r[31]|c->r[31]; // 8019B04C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019B050
  c->r[30]=0u+0x80330000u; // 8019B054
  c->r[3]=c->r[30]+0x00000E28u; // 8019B058
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019B05C
  c->lr=0x8019B064u; f_8015CED8(c); // 8019B060
  c->r[30]=c->r[30]+0x00000E28u; // 8019B064
  c->r[4]=0u+0x00000040u; // 8019B068
  c->r[3]=c->r[30]+0x00000015u; // 8019B06C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019B070
  c->lr=0x8019B078u; f_8015CED8(c); // 8019B074
  cmps(c,0,(int32_t)c->r[31],2); // 8019B078
  c->r[0]=0u+0x00000000u; // 8019B07C
  W8(c->r[13]+0xFFFFA110u,c->r[0]); // 8019B080
  if (!crb(c,2)) { goto L_8019B090; } // 8019B084
  c->r[3]=0u+0x00000000u; // 8019B088
  goto L_8019B158; // 8019B08C
L_8019B090:;
  cmps(c,0,(int32_t)c->r[31],1); // 8019B090
  if (!crb(c,2)) { goto L_8019B12C; } // 8019B094
  c->r[3]=c->r[30]+0x0000003Au; // 8019B098
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019B09C
  c->lr=0x8019B0A4u; f_8015CED8(c); // 8019B0A0
  c->r[3]=0u+0x80390000u; // 8019B0A4
  c->r[30]=0u+0x801A0000u; // 8019B0A8
  c->r[31]=0u+0x801A0000u; // 8019B0AC
  c->r[11]=0u+0x801A0000u; // 8019B0B0
  c->r[10]=0u+0x801A0000u; // 8019B0B4
  c->r[9]=0u+0x801A0000u; // 8019B0B8
  c->r[8]=0u+0x801A0000u; // 8019B0BC
  c->r[7]=0u+0x801A0000u; // 8019B0C0
  c->r[6]=0u+0x801A0000u; // 8019B0C4
  c->r[5]=0u+0x801A0000u; // 8019B0C8
  c->r[4]=0u+0x801A0000u; // 8019B0CC
  c->r[30]=c->r[30]+0xFFFFA280u; // 8019B0D0
  c->r[12]=c->r[3]+0x00000190u; // 8019B0D4
  c->r[31]=c->r[31]+0xFFFFA2C4u; // 8019B0D8
  c->r[11]=c->r[11]+0xFFFFA2E8u; // 8019B0DC
  c->r[10]=c->r[10]+0xFFFFA2F0u; // 8019B0E0
  c->r[9]=c->r[9]+0xFFFFA3A4u; // 8019B0E4
  c->r[8]=c->r[8]+0xFFFFA2BCu; // 8019B0E8
  c->r[7]=c->r[7]+0xFFFFA460u; // 8019B0EC
  c->r[6]=c->r[6]+0xFFFFA418u; // 8019B0F0
  c->r[5]=c->r[5]+0xFFFFA43Cu; // 8019B0F4
  c->r[4]=c->r[4]+0xFFFFA4D4u; // 8019B0F8
  W32(c->r[3]+0x00000190u,c->r[30]); // 8019B0FC
  c->r[3]=0u+0x00000000u; // 8019B100
  W32(c->r[12]+0x00000018u,c->r[31]); // 8019B104
  W32(c->r[12]+0x0000001Cu,c->r[11]); // 8019B108
  W32(c->r[12]+0x00000010u,c->r[10]); // 8019B10C
  W32(c->r[12]+0x00000014u,c->r[9]); // 8019B110
  W32(c->r[12]+0x00000008u,c->r[8]); // 8019B114
  W32(c->r[12]+0x0000000Cu,c->r[7]); // 8019B118
  W32(c->r[12]+0x00000020u,c->r[6]); // 8019B11C
  W32(c->r[12]+0x00000024u,c->r[5]); // 8019B120
  W32(c->r[12]+0x00000004u,c->r[4]); // 8019B124
  goto L_8019B158; // 8019B128
L_8019B12C:;
  c->r[4]=c->r[31]|c->r[31]; // 8019B12C
  c->r[3]=c->r[30]+0x0000005Bu; // 8019B130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019B134
  c->lr=0x8019B13Cu; f_8015CED8(c); // 8019B138
  c->r[3]=c->r[30]+0x00000086u; // 8019B13C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019B140
  c->lr=0x8019B148u; f_8015CED8(c); // 8019B144
  c->r[3]=c->r[30]+0x000000B5u; // 8019B148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019B14C
  c->lr=0x8019B154u; f_8015CED8(c); // 8019B150
  c->r[3]=0u+0x00000001u; // 8019B154
L_8019B158:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019B15C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019B160
  c->lr=c->r[0]; // 8019B164
  c->r[1]=c->r[1]+0x00000010u; // 8019B168
  return; // 8019B16C
}

// TRKUARTInterruptHandler
void f_8019B170(Ctx* __restrict c) {
  trace_call(0x8019B170u);
  return; // 8019B170
}

// TRKInitializeIntDrivenUART
void f_8019B174(Ctx* __restrict c) {
  trace_call(0x8019B174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B174
  c->r[0]=c->lr; // 8019B178
  c->r[4]=0u+0x801A0000u; // 8019B17C
  c->r[3]=c->r[5]|c->r[5]; // 8019B180
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B184
  c->r[4]=c->r[4]+0xFFFFB000u; // 8019B188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019B18C
  c->r[31]=0u+0x80390000u; // 8019B190
  c->r[12]=R32(c->r[31]+0x00000190u); // 8019B194
  c->ctr=c->r[12]; // 8019B198
  if (true) { c->lr=0x8019B1A0u; dispatch(c,c->ctr); } // 8019B19C
  c->r[3]=c->r[31]+0x00000190u; // 8019B1A0
  c->r[12]=R32(c->r[3]+0x00000018u); // 8019B1A4
  c->ctr=c->r[12]; // 8019B1A8
  if (true) { c->lr=0x8019B1B0u; dispatch(c,c->ctr); } // 8019B1AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019B1B0
  c->r[3]=0u+0x00000000u; // 8019B1B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B1B8
  c->lr=c->r[0]; // 8019B1BC
  c->r[1]=c->r[1]+0x00000010u; // 8019B1C0
  return; // 8019B1C4
}

// fn_8019B1C8
void f_8019B1C8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[13]+0xFFFFA110u); // 8019B1C8
  cmps(c,0,(int32_t)c->r[0],0); // 8019B1CC
  if (!crb(c,2)) return; // 8019B1D0
  c->r[3]=0u+0x80390000u; // 8019B1D4
  c->r[3]=c->r[3]+0x00000190u; // 8019B1D8
  c->r[12]=R32(c->r[3]+0x00000004u); // 8019B1DC
  cmps(c,0,(int32_t)c->r[12],0); // 8019B1E0
  if (crb(c,2)) return; // 8019B1E4
  c->ctr=c->r[12]; // 8019B1E8
  if (true) { dispatch(c,c->ctr); return; } // 8019B1EC
  return; // 8019B1F0
}

// fn_8019B1F4
void f_8019B1F4(Ctx* __restrict c) {
  c->r[3]=0u+0x80390000u; // 8019B1F4
  c->r[3]=c->r[3]+0x00000190u; // 8019B1F8
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8019B1FC
  c->ctr=c->r[12]; // 8019B200
  if (true) { dispatch(c,c->ctr); return; } // 8019B204
}

// fn_8019B208
void f_8019B208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B208
  c->r[0]=c->lr; // 8019B20C
  c->r[5]=0u+0x80390000u; // 8019B210
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B214
  c->r[5]=c->r[5]+0x00000190u; // 8019B218
  c->r[12]=R32(c->r[5]+0x00000010u); // 8019B21C
  c->ctr=c->r[12]; // 8019B220
  if (true) { c->lr=0x8019B228u; dispatch(c,c->ctr); } // 8019B224
  c->r[0]=0u-c->r[3]; // 8019B228
  c->r[0]=c->r[0]|c->r[3]; // 8019B22C
  c->r[3]=sraw(c,c->r[0],31); // 8019B230
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B234
  c->lr=c->r[0]; // 8019B238
  c->r[1]=c->r[1]+0x00000010u; // 8019B23C
  return; // 8019B240
}

// fn_8019B244
void f_8019B244(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B244
  c->r[0]=c->lr; // 8019B248
  c->r[5]=0u+0x80390000u; // 8019B24C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B250
  c->r[5]=c->r[5]+0x00000190u; // 8019B254
  c->r[12]=R32(c->r[5]+0x00000014u); // 8019B258
  c->ctr=c->r[12]; // 8019B25C
  if (true) { c->lr=0x8019B264u; dispatch(c,c->ctr); } // 8019B260
  c->r[0]=0u-c->r[3]; // 8019B264
  c->r[0]=c->r[0]|c->r[3]; // 8019B268
  c->r[3]=sraw(c,c->r[0],31); // 8019B26C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B270
  c->lr=c->r[0]; // 8019B274
  c->r[1]=c->r[1]+0x00000010u; // 8019B278
  return; // 8019B27C
}

// ReserveEXI2Port
void f_8019B280(Ctx* __restrict c) {
  trace_call(0x8019B280u);
  c->r[3]=0u+0x80390000u; // 8019B280
  c->r[3]=c->r[3]+0x00000190u; // 8019B284
  c->r[12]=R32(c->r[3]+0x00000024u); // 8019B288
  c->ctr=c->r[12]; // 8019B28C
  if (true) { dispatch(c,c->ctr); return; } // 8019B290
}

// UnreserveEXI2Port
void f_8019B294(Ctx* __restrict c) {
  trace_call(0x8019B294u);
  c->r[3]=0u+0x80390000u; // 8019B294
  c->r[3]=c->r[3]+0x00000190u; // 8019B298
  c->r[12]=R32(c->r[3]+0x00000020u); // 8019B29C
  c->ctr=c->r[12]; // 8019B2A0
  if (true) { dispatch(c,c->ctr); return; } // 8019B2A4
}

// TRK_board_display
void f_8019B2A8(Ctx* __restrict c) {
  trace_call(0x8019B2A8u);
  c->r[5]=0u+0x80330000u; // 8019B2A8
  c->r[4]=c->r[3]|c->r[3]; // 8019B2AC
  c->r[5]=c->r[5]+0x00000E28u; // 8019B2B0
  c->r[3]=c->r[5]+0x000000DDu; // 8019B2B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019B2B8
  f_8015CED8(c); return; // 8019B2BC
}

// InitializeProgramEndTrap
void f_8019B2C0(Ctx* __restrict c) {
  trace_call(0x8019B2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B2C0
  c->r[0]=c->lr; // 8019B2C4
  c->r[4]=c->r[2]+0xFFFF94C0u; // 8019B2C8
  c->r[5]=0u+0x00000004u; // 8019B2CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B2D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019B2D4
  c->r[31]=0u+0x80160000u; // 8019B2D8
  c->r[31]=c->r[31]+0xFFFF9814u; // 8019B2DC
  c->r[3]=c->r[31]+0x00000004u; // 8019B2E0
  c->lr=0x8019B2E8u; f_8019A8D0(c); // 8019B2E4
  c->r[3]=c->r[31]+0x00000004u; // 8019B2E8
  c->r[4]=0u+0x00000004u; // 8019B2EC
  c->lr=0x8019B2F4u; f_8015C144(c); // 8019B2F0
  c->r[3]=c->r[31]+0x00000004u; // 8019B2F4
  c->r[4]=0u+0x00000004u; // 8019B2F8
  c->lr=0x8019B300u; f_8015C060(c); // 8019B2FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019B304
  c->lr=c->r[0]; // 8019B308
  c->r[1]=c->r[1]+0x00000010u; // 8019B30C
  return; // 8019B310
}

// fn_8019B314
void f_8019B314(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B314
  c->r[0]=c->lr; // 8019B318
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019B31C
  c->r[4]=c->r[1]+0x00000008u; // 8019B320
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019B324
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019B328
  c->r[30]=c->r[3]|c->r[3]; // 8019B32C
  c->r[3]=c->r[1]+0x0000000Cu; // 8019B330
  c->lr=0x8019B338u; f_8019C1F8(c); // 8019B334
  cmps(c,0,(int32_t)c->r[3],0); // 8019B338
  c->r[31]=c->r[3]|c->r[3]; // 8019B33C
  if (!crb(c,2)) { goto L_8019B388; } // 8019B340
  cmps(c,0,(int32_t)c->r[30],144); // 8019B344
  if (!crb(c,2)) { goto L_8019B358; } // 8019B348
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B34C
  c->lr=0x8019B354u; f_8019EA08(c); // 8019B350
  goto L_8019B360; // 8019B354
L_8019B358:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B358
  c->lr=0x8019B360u; f_8019EC08(c); // 8019B35C
L_8019B360:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B360
  c->r[4]=c->r[1]+0x00000010u; // 8019B364
  c->lr=0x8019B36Cu; f_8019B9E8(c); // 8019B368
  cmps(c,0,(int32_t)c->r[3],0); // 8019B36C
  c->r[31]=c->r[3]|c->r[3]; // 8019B370
  if (!crb(c,2)) { goto L_8019B380; } // 8019B374
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019B378
  c->lr=0x8019B380u; f_8019C2B8(c); // 8019B37C
L_8019B380:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8019B380
  c->lr=0x8019B388u; f_8019C2B8(c); // 8019B384
L_8019B388:;
  c->r[3]=c->r[31]|c->r[31]; // 8019B388
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019B38C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019B390
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019B394
  c->lr=c->r[0]; // 8019B398
  c->r[1]=c->r[1]+0x00000020u; // 8019B39C
  return; // 8019B3A0
}

// TRKInitializeEventQueue
void f_8019B3A4(Ctx* __restrict c) {
  trace_call(0x8019B3A4u);
  c->r[3]=0u+0x80390000u; // 8019B3A4
  c->r[5]=0u+0x00000000u; // 8019B3A8
  c->r[4]=c->r[3]+0x000001B8u; // 8019B3AC
  c->r[0]=0u+0x00000100u; // 8019B3B0
  W32(c->r[3]+0x000001B8u,c->r[5]); // 8019B3B4
  c->r[3]=0u+0x00000000u; // 8019B3B8
  W32(c->r[4]+0x00000004u,c->r[5]); // 8019B3BC
  W32(c->r[4]+0x00000020u,c->r[0]); // 8019B3C0
  return; // 8019B3C4
}

// TRKGetNextEvent
void f_8019B3C8(Ctx* __restrict c) {
  trace_call(0x8019B3C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B3C8
  c->r[0]=c->lr; // 8019B3CC
  c->r[4]=0u+0x00000000u; // 8019B3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B3D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019B3D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019B3DC
  c->r[30]=0u+0x80390000u; // 8019B3E0
  c->r[0]=R32(c->r[30]+0x000001B8u); // 8019B3E4
  cmps(c,0,(int32_t)c->r[0],0); // 8019B3E8
  if (!crb(c,1)) { goto L_8019B438; } // 8019B3EC
  c->r[31]=c->r[30]+0x000001B8u; // 8019B3F0
  c->r[5]=0u+0x0000000Cu; // 8019B3F4
  c->r[0]=R32(c->r[31]+0x00000004u); // 8019B3F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8019B3FC
  c->r[4]=c->r[31]+c->r[0]; // 8019B400
  c->r[4]=c->r[4]+0x00000008u; // 8019B404
  c->lr=0x8019B40Cu; f_8019A8D0(c); // 8019B408
  c->r[3]=R32(c->r[31]+0x00000004u); // 8019B40C
  c->r[4]=R32(c->r[30]+0x000001B8u); // 8019B410
  c->r[0]=c->r[3]+0x00000001u; // 8019B414
  W32(c->r[31]+0x00000004u,c->r[0]); // 8019B418
  cmps(c,0,(int32_t)c->r[0],2); // 8019B41C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8019B420
  W32(c->r[30]+0x000001B8u,c->r[0]); // 8019B424
  if (!crb(c,2)) { goto L_8019B434; } // 8019B428
  c->r[0]=0u+0x00000000u; // 8019B42C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8019B430
L_8019B434:;
  c->r[4]=0u+0x00000001u; // 8019B434
L_8019B438:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019B438
  c->r[3]=c->r[4]|c->r[4]; // 8019B43C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019B440
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B444
  c->lr=c->r[0]; // 8019B448
  c->r[1]=c->r[1]+0x00000010u; // 8019B44C
  return; // 8019B450
}

// fn_8019B454
void f_8019B454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B454
  c->r[0]=c->lr; // 8019B458
  c->r[4]=0u+0x80390000u; // 8019B45C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019B460
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019B464
  c->r[31]=0u+0x00000000u; // 8019B468
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019B46C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019B470
  c->r[6]=R32(c->r[4]+0x000001B8u); // 8019B474
  cmps(c,0,(int32_t)c->r[6],2); // 8019B478
  if (!crb(c,2)) { goto L_8019B494; } // 8019B47C
  c->r[3]=0u+0x80330000u; // 8019B480
  c->r[31]=0u+0x00000100u; // 8019B484
  c->r[3]=c->r[3]+0x00000F10u; // 8019B488
  c->lr=0x8019B490u; f_8015CED8(c); // 8019B48C
  goto L_8019B500; // 8019B490
L_8019B494:;
  c->r[30]=c->r[4]+0x000001B8u; // 8019B494
  c->r[4]=c->r[3]|c->r[3]; // 8019B498
  c->r[0]=R32(c->r[30]+0x00000004u); // 8019B49C
  c->r[5]=0u+0x0000000Cu; // 8019B4A0
  c->r[0]=c->r[0]+c->r[6]; // 8019B4A4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8019B4A8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8019B4AC
  c->r[0]=c->r[0]^c->r[3]; // 8019B4B0
  c->r[0]=c->r[0]-c->r[3]; // 8019B4B4
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8019B4B8
  c->r[3]=c->r[30]+c->r[29]; // 8019B4BC
  c->r[3]=c->r[3]+0x00000008u; // 8019B4C0
  c->lr=0x8019B4C8u; f_8019A8D0(c); // 8019B4C4
  c->r[3]=c->r[30]+c->r[29]; // 8019B4C8
  c->r[0]=R32(c->r[30]+0x00000020u); // 8019B4CC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8019B4D0
  c->r[3]=R32(c->r[30]+0x00000020u); // 8019B4D4
  c->r[0]=c->r[3]+0x00000001u; // 8019B4D8
  W32(c->r[30]+0x00000020u,c->r[0]); // 8019B4DC
  cmpu(c,0,c->r[0],0x00000100u); // 8019B4E0
  if (!crb(c,0)) { goto L_8019B4F0; } // 8019B4E4
  c->r[0]=0u+0x00000100u; // 8019B4E8
  W32(c->r[30]+0x00000020u,c->r[0]); // 8019B4EC
L_8019B4F0:;
  c->r[4]=0u+0x80390000u; // 8019B4F0
  c->r[3]=R32(c->r[4]+0x000001B8u); // 8019B4F4
  c->r[0]=c->r[3]+0x00000001u; // 8019B4F8
  W32(c->r[4]+0x000001B8u,c->r[0]); // 8019B4FC
L_8019B500:;
  c->r[3]=c->r[31]|c->r[31]; // 8019B500
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019B504
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019B508
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019B50C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019B510
  c->lr=c->r[0]; // 8019B514
  c->r[1]=c->r[1]+0x00000020u; // 8019B518
  return; // 8019B51C
}

// fn_8019B520
void f_8019B520(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 8019B520
  c->r[0]=0u+0xFFFFFFFFu; // 8019B524
  W32(c->r[3]+0x00000000u,c->r[4]); // 8019B528
  W32(c->r[3]+0x00000004u,c->r[5]); // 8019B52C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8019B530
  return; // 8019B534
}

// TRKDestructEvent
void f_8019B538(Ctx* __restrict c) {
  trace_call(0x8019B538u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8019B538
  f_8019C2B8(c); return; // 8019B53C
}

// TRKInitializeNub
void f_8019B540(Ctx* __restrict c) {
  trace_call(0x8019B540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B540
  c->r[0]=c->lr; // 8019B544
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019B54C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019B550
  c->lr=0x8019B558u; f_8019B61C(c); // 8019B554
  cmps(c,0,(int32_t)c->r[3],0); // 8019B558
  c->r[31]=c->r[3]|c->r[3]; // 8019B55C
  if (!crb(c,2)) { goto L_8019B56C; } // 8019B560
  c->lr=0x8019B568u; f_8019B3A4(c); // 8019B564
  c->r[31]=c->r[3]|c->r[3]; // 8019B568
L_8019B56C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019B56C
  if (!crb(c,2)) { goto L_8019B57C; } // 8019B570
  c->lr=0x8019B578u; f_8019C1D8(c); // 8019B574
  c->r[31]=c->r[3]|c->r[3]; // 8019B578
L_8019B57C:;
  c->lr=0x8019B580u; f_8019B2C0(c); // 8019B57C
  cmps(c,0,(int32_t)c->r[31],0); // 8019B580
  if (!crb(c,2)) { goto L_8019B590; } // 8019B584
  c->lr=0x8019B58Cu; f_8019B7C8(c); // 8019B588
  c->r[31]=c->r[3]|c->r[3]; // 8019B58C
L_8019B590:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019B590
  if (!crb(c,2)) { goto L_8019B5A0; } // 8019B594
  c->lr=0x8019B59Cu; f_8019AF20(c); // 8019B598
  c->r[31]=c->r[3]|c->r[3]; // 8019B59C
L_8019B5A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019B5A0
  if (!crb(c,2)) { goto L_8019B5D0; } // 8019B5A4
  c->r[3]=0u+0x00000001u; // 8019B5A8
  c->r[4]=0u+0x00000000u; // 8019B5AC
  c->r[5]=c->r[13]+0xFFFFA120u; // 8019B5B0
  c->lr=0x8019B5B8u; f_8019B174(c); // 8019B5B4
  c->r[30]=c->r[3]|c->r[3]; // 8019B5B8
  c->r[3]=R32(c->r[13]+0xFFFFA120u); // 8019B5BC
  c->lr=0x8019B5C4u; f_8019F4FC(c); // 8019B5C0
  cmps(c,0,(int32_t)c->r[30],0); // 8019B5C4
  if (crb(c,2)) { goto L_8019B5D0; } // 8019B5C8
  c->r[31]=c->r[30]|c->r[30]; // 8019B5CC
L_8019B5D0:;
  c->r[3]=c->r[31]|c->r[31]; // 8019B5D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019B5D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019B5D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B5DC
  c->lr=c->r[0]; // 8019B5E0
  c->r[1]=c->r[1]+0x00000010u; // 8019B5E4
  return; // 8019B5E8
}

// TRKTerminateNub
void f_8019B5EC(Ctx* __restrict c) {
  trace_call(0x8019B5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B5EC
  c->r[0]=c->lr; // 8019B5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B5F4
  c->lr=0x8019B5FCu; f_8019B7D0(c); // 8019B5F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B5FC
  c->r[3]=0u+0x00000000u; // 8019B600
  c->lr=c->r[0]; // 8019B604
  c->r[1]=c->r[1]+0x00000010u; // 8019B608
  return; // 8019B60C
}

// TRKNubWelcome
void f_8019B610(Ctx* __restrict c) {
  trace_call(0x8019B610u);
  c->r[3]=0u+0x80330000u; // 8019B610
  c->r[3]=c->r[3]+0x00000F30u; // 8019B614
  f_8019B2A8(c); return; // 8019B618
}

// TRKInitializeEndian
void f_8019B61C(Ctx* __restrict c) {
  trace_call(0x8019B61Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B61C
  c->r[3]=0u+0x00000012u; // 8019B620
  c->r[5]=0u+0x00000034u; // 8019B624
  c->r[4]=0u+0x00000056u; // 8019B628
  c->r[0]=0u+0x00000078u; // 8019B62C
  W8(c->r[1]+0x00000008u,c->r[3]); // 8019B630
  c->r[6]=0u+0x00000001u; // 8019B634
  c->r[3]=0u+0x00000000u; // 8019B638
  W8(c->r[1]+0x00000009u,c->r[5]); // 8019B63C
  W8(c->r[1]+0x0000000Au,c->r[4]); // 8019B640
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8019B644
  c->r[4]=R32(c->r[1]+0x00000008u); // 8019B648
  W32(c->r[13]+0xFFFFA118u,c->r[6]); // 8019B64C
  c->r[0]=c->r[4]+0xEDCC0000u; // 8019B650
  cmpu(c,0,c->r[0],0x00005678u); // 8019B654
  if (!crb(c,2)) { goto L_8019B664; } // 8019B658
  W32(c->r[13]+0xFFFFA118u,c->r[6]); // 8019B65C
  goto L_8019B688; // 8019B660
L_8019B664:;
  c->r[0]=c->r[4]+0x87AA0000u; // 8019B664
  cmpu(c,0,c->r[0],0x00003412u); // 8019B668
  if (!crb(c,2)) { goto L_8019B678; } // 8019B66C
  c->r[0]=0u+0x00000000u; // 8019B670
  W32(c->r[13]+0xFFFFA118u,c->r[0]); // 8019B674
L_8019B678:;
  c->r[0]=c->r[4]+0x87AA0000u; // 8019B678
  cmpu(c,0,c->r[0],0x00003412u); // 8019B67C
  if (crb(c,2)) { goto L_8019B688; } // 8019B680
  c->r[3]=0u+0x00000001u; // 8019B684
L_8019B688:;
  c->r[1]=c->r[1]+0x00000010u; // 8019B688
  return; // 8019B68C
}

// fn_8019B690
void f_8019B690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFF720u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B690
  c->r[0]=c->lr; // 8019B694
  W32(c->r[1]+0x000008E4u,c->r[0]); // 8019B698
  W32(c->r[1]+0x000008DCu,c->r[31]); // 8019B69C
  c->lr=0x8019B6A4u; f_8019B1F4(c); // 8019B6A0
  cmps(c,0,(int32_t)c->r[3],0); // 8019B6A4
  if (crb(c,1)) { goto L_8019B6B4; } // 8019B6A8
  c->r[3]=0u+0xFFFFFFFFu; // 8019B6AC
  goto L_8019B748; // 8019B6B0
L_8019B6B4:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8019B6B4
  c->r[4]=c->r[1]+0x00000008u; // 8019B6B8
  c->lr=0x8019B6C0u; f_8019C1F8(c); // 8019B6BC
  c->r[31]=c->r[3]|c->r[3]; // 8019B6C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B6C4
  c->r[4]=0u+0x00000000u; // 8019B6C8
  c->lr=0x8019B6D0u; f_8019C308(c); // 8019B6CC
  c->r[3]=c->r[1]+0x00000010u; // 8019B6D0
  c->r[4]=0u+0x00000040u; // 8019B6D4
  c->lr=0x8019B6DCu; f_8019B208(c); // 8019B6D8
  cmps(c,0,(int32_t)c->r[3],0); // 8019B6DC
  if (!crb(c,2)) { goto L_8019B738; } // 8019B6E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B6E4
  c->r[4]=c->r[1]+0x00000010u; // 8019B6E8
  c->r[5]=0u+0x00000040u; // 8019B6EC
  c->lr=0x8019B6F4u; f_8019C630(c); // 8019B6F0
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019B6F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019B6F8
  c->r[4]=addc(c,c->r[3],0xFFFFFFC0u,0); cr0(c,c->r[4]); // 8019B6FC
  if (!crb(c,1)) { goto L_8019B744; } // 8019B700
  c->r[3]=c->r[1]+0x00000050u; // 8019B704
  c->lr=0x8019B70Cu; f_8019B208(c); // 8019B708
  cmps(c,0,(int32_t)c->r[3],0); // 8019B70C
  if (!crb(c,2)) { goto L_8019B728; } // 8019B710
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B714
  c->r[4]=c->r[1]+0x00000050u; // 8019B718
  c->r[5]=R32(c->r[1]+0x00000010u); // 8019B71C
  c->lr=0x8019B724u; f_8019C630(c); // 8019B720
  goto L_8019B744; // 8019B724
L_8019B728:;
  c->r[3]=c->r[31]|c->r[31]; // 8019B728
  c->lr=0x8019B730u; f_8019C2B8(c); // 8019B72C
  c->r[31]=0u+0xFFFFFFFFu; // 8019B730
  goto L_8019B744; // 8019B734
L_8019B738:;
  c->r[3]=c->r[31]|c->r[31]; // 8019B738
  c->lr=0x8019B740u; f_8019C2B8(c); // 8019B73C
  c->r[31]=0u+0xFFFFFFFFu; // 8019B740
L_8019B744:;
  c->r[3]=c->r[31]|c->r[31]; // 8019B744
L_8019B748:;
  c->r[0]=R32(c->r[1]+0x000008E4u); // 8019B748
  c->r[31]=R32(c->r[1]+0x000008DCu); // 8019B74C
  c->lr=c->r[0]; // 8019B750
  c->r[1]=c->r[1]+0x000008E0u; // 8019B754
  return; // 8019B758
}

// TRKGetInput
void f_8019B75C(Ctx* __restrict c) {
  trace_call(0x8019B75Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B75C
  c->r[0]=c->lr; // 8019B760
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019B764
  c->lr=0x8019B76Cu; f_8019B690(c); // 8019B768
  cmps(c,0,(int32_t)c->r[3],-1); // 8019B76C
  if (crb(c,2)) { goto L_8019B778; } // 8019B770
  c->lr=0x8019B778u; f_8019B788(c); // 8019B774
L_8019B778:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019B778
  c->lr=c->r[0]; // 8019B77C
  c->r[1]=c->r[1]+0x00000010u; // 8019B780
  return; // 8019B784
}

// fn_8019B788
void f_8019B788(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B788
  c->r[0]=c->lr; // 8019B78C
  c->r[4]=0u+0x00000002u; // 8019B790
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019B794
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019B798
  c->r[31]=c->r[3]|c->r[3]; // 8019B79C
  c->r[3]=c->r[1]+0x00000008u; // 8019B7A0
  c->lr=0x8019B7A8u; f_8019B520(c); // 8019B7A4
  W32(c->r[1]+0x00000010u,c->r[31]); // 8019B7A8
  c->r[3]=c->r[1]+0x00000008u; // 8019B7AC
  c->lr=0x8019B7B4u; f_8019B454(c); // 8019B7B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019B7B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019B7B8
  c->lr=c->r[0]; // 8019B7BC
  c->r[1]=c->r[1]+0x00000020u; // 8019B7C0
  return; // 8019B7C4
}

// TRKInitializeSerialHandler
void f_8019B7C8(Ctx* __restrict c) {
  trace_call(0x8019B7C8u);
  c->r[3]=0u+0x00000000u; // 8019B7C8
  return; // 8019B7CC
}

// fn_8019B7D0
void f_8019B7D0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8019B7D0
  return; // 8019B7D4
}

// fn_8019B7D8
void f_8019B7D8(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8019B7D8
  c->r[3]=0u+0xFFFFFFFFu; // 8019B7DC
L_8019B7E0:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 8019B7E0
  c->r[3]=c->r[3]+0x00000001u; // 8019B7E4
  cmps(c,0,(int32_t)c->r[0],0); // 8019B7E8
  if (!crb(c,2)) { IRQCHK(c); goto L_8019B7E0; } // 8019B7EC
  return; // 8019B7F0
}

// fn_8019B7F4
void f_8019B7F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B7F4
  c->r[0]=c->lr; // 8019B7F8
  cmps(c,0,(int32_t)c->r[4],0); // 8019B7FC
  W32(c->r[1]+0x00000094u,c->r[0]); // 8019B800
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019B804
  c->r[24]=c->r[3]|c->r[3]; // 8019B808
  c->r[25]=c->r[4]|c->r[4]; // 8019B80C
  c->r[26]=c->r[5]|c->r[5]; // 8019B810
  c->r[27]=c->r[6]|c->r[6]; // 8019B814
  c->r[28]=c->r[7]|c->r[7]; // 8019B818
  c->r[29]=c->r[8]|c->r[8]; // 8019B81C
  if (crb(c,2)) { goto L_8019B830; } // 8019B820
  c->r[0]=R32(c->r[5]+0x00000000u); // 8019B824
  cmps(c,0,(int32_t)c->r[0],0); // 8019B828
  if (!crb(c,2)) { goto L_8019B838; } // 8019B82C
L_8019B830:;
  c->r[3]=0u+0x00000002u; // 8019B830
  goto L_8019B9D4; // 8019B834
L_8019B838:;
  c->r[30]=0u+0x00000000u; // 8019B838
  W32(c->r[6]+0x00000000u,c->r[30]); // 8019B83C
  c->r[31]=0u+0x00000000u; // 8019B840
  c->r[23]=0u+0x00000000u; // 8019B844
  goto L_8019B9A4; // 8019B848
L_8019B84C:;
  c->r[3]=c->r[1]+0x00000018u; // 8019B84C
  c->r[4]=0u+0x00000000u; // 8019B850
  c->r[5]=0u+0x00000040u; // 8019B854
  c->lr=0x8019B85Cu; f_8019AA0C(c); // 8019B858
  c->r[0]=R32(c->r[26]+0x00000000u); // 8019B85C
  c->r[21]=0u+0x00000800u; // 8019B860
  c->r[0]=c->r[0]-c->r[31]; // 8019B864
  cmpu(c,0,c->r[0],0x00000800u); // 8019B868
  if (crb(c,1)) { goto L_8019B874; } // 8019B86C
  c->r[21]=c->r[0]|c->r[0]; // 8019B870
L_8019B874:;
  cmps(c,0,(int32_t)c->r[29],0); // 8019B874
  c->r[0]=0u+0x000000D0u; // 8019B878
  if (crb(c,2)) { goto L_8019B884; } // 8019B87C
  c->r[0]=0u+0x000000D1u; // 8019B880
L_8019B884:;
  cmps(c,0,(int32_t)c->r[29],0); // 8019B884
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8019B888
  c->r[0]=0u+0x00000040u; // 8019B88C
  if (!crb(c,2)) { goto L_8019B898; } // 8019B890
  c->r[0]=c->r[21]+0x00000040u; // 8019B894
L_8019B898:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 8019B898
  c->r[3]=c->r[1]+0x0000000Cu; // 8019B89C
  c->r[4]=c->r[1]+0x00000008u; // 8019B8A0
  W32(c->r[1]+0x00000020u,c->r[24]); // 8019B8A4
  W16(c->r[1]+0x00000024u,c->r[21]); // 8019B8A8
  c->lr=0x8019B8B0u; f_8019C1F8(c); // 8019B8AC
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B8B0
  c->r[4]=c->r[1]+0x00000018u; // 8019B8B4
  c->r[5]=0u+0x00000040u; // 8019B8B8
  c->lr=0x8019B8C0u; f_8019C630(c); // 8019B8BC
  cmps(c,0,(int32_t)c->r[29],0); // 8019B8C0
  c->r[23]=c->r[3]|c->r[3]; // 8019B8C4
  if (!crb(c,2)) { goto L_8019B8E8; } // 8019B8C8
  cmps(c,0,(int32_t)c->r[3],0); // 8019B8CC
  if (!crb(c,2)) { goto L_8019B8E8; } // 8019B8D0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B8D4
  c->r[5]=c->r[21]|c->r[21]; // 8019B8D8
  c->r[4]=c->r[25]+c->r[31]; // 8019B8DC
  c->lr=0x8019B8E4u; f_8019C630(c); // 8019B8E0
  c->r[23]=c->r[3]|c->r[3]; // 8019B8E4
L_8019B8E8:;
  cmps(c,0,(int32_t)c->r[23],0); // 8019B8E8
  if (!crb(c,2)) { goto L_8019B998; } // 8019B8EC
  cmps(c,0,(int32_t)c->r[28],0); // 8019B8F0
  if (crb(c,2)) { goto L_8019B98C; } // 8019B8F4
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B8F8
  c->r[4]=c->r[1]+0x00000010u; // 8019B8FC
  c->lr=0x8019B904u; f_8019B9E8(c); // 8019B900
  cmps(c,0,(int32_t)c->r[3],0); // 8019B904
  c->r[23]=c->r[3]|c->r[3]; // 8019B908
  if (!crb(c,2)) { goto L_8019B91C; } // 8019B90C
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019B910
  c->lr=0x8019B918u; f_8019C294(c); // 8019B914
  c->r[22]=c->r[3]|c->r[3]; // 8019B918
L_8019B91C:;
  c->r[0]=R32(c->r[22]+0x0000001Cu); // 8019B91C
  cmps(c,0,(int32_t)c->r[29],0); // 8019B920
  c->r[19]=R16(c->r[22]+0x00000020u); // 8019B924
  c->r[20]=rotl(c->r[0],0)&0x000000FFu; // 8019B928
  if (crb(c,2)) { goto L_8019B96C; } // 8019B92C
  cmps(c,0,(int32_t)c->r[23],0); // 8019B930
  if (!crb(c,2)) { goto L_8019B96C; } // 8019B934
  cmpu(c,0,c->r[19],c->r[21]); // 8019B938
  if (crb(c,1)) { goto L_8019B96C; } // 8019B93C
  c->r[3]=c->r[22]|c->r[22]; // 8019B940
  c->r[4]=0u+0x00000040u; // 8019B944
  c->lr=0x8019B94Cu; f_8019C308(c); // 8019B948
  c->r[3]=c->r[22]|c->r[22]; // 8019B94C
  c->r[5]=c->r[19]|c->r[19]; // 8019B950
  c->r[4]=c->r[25]+c->r[31]; // 8019B954
  c->lr=0x8019B95Cu; f_8019C864(c); // 8019B958
  cmps(c,0,(int32_t)c->r[3],770); // 8019B95C
  c->r[23]=c->r[3]|c->r[3]; // 8019B960
  if (!crb(c,2)) { goto L_8019B96C; } // 8019B964
  c->r[23]=0u+0x00000000u; // 8019B968
L_8019B96C:;
  cmpu(c,0,c->r[19],c->r[21]); // 8019B96C
  if (crb(c,2)) { goto L_8019B97C; } // 8019B970
  c->r[21]=c->r[19]|c->r[19]; // 8019B974
  c->r[30]=0u+0x00000001u; // 8019B978
L_8019B97C:;
  W32(c->r[27]+0x00000000u,c->r[20]); // 8019B97C
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019B980
  c->lr=0x8019B988u; f_8019C2B8(c); // 8019B984
  goto L_8019B998; // 8019B988
L_8019B98C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019B98C
  c->lr=0x8019B994u; f_8019C174(c); // 8019B990
  c->r[23]=c->r[3]|c->r[3]; // 8019B994
L_8019B998:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8019B998
  c->lr=0x8019B9A0u; f_8019C2B8(c); // 8019B99C
  c->r[31]=c->r[31]+c->r[21]; // 8019B9A0
L_8019B9A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019B9A4
  if (!crb(c,2)) { goto L_8019B9CC; } // 8019B9A8
  c->r[0]=R32(c->r[26]+0x00000000u); // 8019B9AC
  cmpu(c,0,c->r[31],c->r[0]); // 8019B9B0
  if (!crb(c,0)) { goto L_8019B9CC; } // 8019B9B4
  cmps(c,0,(int32_t)c->r[23],0); // 8019B9B8
  if (!crb(c,2)) { goto L_8019B9CC; } // 8019B9BC
  c->r[0]=R32(c->r[27]+0x00000000u); // 8019B9C0
  cmps(c,0,(int32_t)c->r[0],0); // 8019B9C4
  if (crb(c,2)) { IRQCHK(c); goto L_8019B84C; } // 8019B9C8
L_8019B9CC:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 8019B9CC
  c->r[3]=c->r[23]|c->r[23]; // 8019B9D0
L_8019B9D4:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019B9D4
  c->r[0]=R32(c->r[1]+0x00000094u); // 8019B9D8
  c->lr=c->r[0]; // 8019B9DC
  c->r[1]=c->r[1]+0x00000090u; // 8019B9E0
  return; // 8019B9E4
}

// fn_8019B9E8
void f_8019B9E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019B9E8
  c->r[0]=c->lr; // 8019B9EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019B9F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019B9F4
  c->r[26]=c->r[4]|c->r[4]; // 8019B9F8
  c->lr=0x8019BA00u; f_8019C174(c); // 8019B9FC
  cmps(c,0,(int32_t)c->r[3],0); // 8019BA00
  c->r[30]=c->r[3]|c->r[3]; // 8019BA04
  if (!crb(c,2)) { goto L_8019BAD4; } // 8019BA08
  c->r[27]=0u+0x00000000u; // 8019BA0C
  c->r[31]=0u+0xFFFFFFFFu; // 8019BA10
L_8019BA14:;
  c->lr=0x8019BA18u; f_8019B690(c); // 8019BA14
  cmps(c,0,(int32_t)c->r[3],-1); // 8019BA18
  W32(c->r[26]+0x00000000u,c->r[3]); // 8019BA1C
  if (crb(c,2)) { IRQCHK(c); goto L_8019BA14; } // 8019BA20
  c->lr=0x8019BA28u; f_8019C294(c); // 8019BA24
  c->r[29]=c->r[3]|c->r[3]; // 8019BA28
  c->r[4]=0u+0x00000000u; // 8019BA2C
  c->lr=0x8019BA34u; f_8019C308(c); // 8019BA30
  c->r[28]=R8(c->r[29]+0x00000010u); // 8019BA34
  cmpu(c,0,c->r[28],0x00000080u); // 8019BA38
  if (!crb(c,0)) { goto L_8019BA50; } // 8019BA3C
  c->r[3]=R32(c->r[26]+0x00000000u); // 8019BA40
  c->lr=0x8019BA48u; f_8019B788(c); // 8019BA44
  W32(c->r[26]+0x00000000u,c->r[31]); // 8019BA48
  IRQCHK(c); goto L_8019BA14; // 8019BA4C
L_8019BA50:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8019BA50
  cmps(c,0,(int32_t)c->r[0],-1); // 8019BA54
  if (crb(c,2)) { goto L_8019BAD4; } // 8019BA58
  c->r[4]=R32(c->r[29]+0x00000004u); // 8019BA5C
  cmpu(c,0,c->r[4],0x00000040u); // 8019BA60
  if (!crb(c,0)) { goto L_8019BA7C; } // 8019BA64
  c->r[3]=0u+0x80330000u; // 8019BA68
  c->r[3]=c->r[3]+0x00000F50u; // 8019BA6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019BA70
  c->lr=0x8019BA78u; f_8015CED8(c); // 8019BA74
  c->r[27]=0u+0x00000001u; // 8019BA78
L_8019BA7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019BA7C
  if (!crb(c,2)) { goto L_8019BA90; } // 8019BA80
  cmps(c,0,(int32_t)c->r[27],0); // 8019BA84
  if (!crb(c,2)) { goto L_8019BA90; } // 8019BA88
  c->r[31]=R8(c->r[29]+0x00000014u); // 8019BA8C
L_8019BA90:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019BA90
  if (!crb(c,2)) { goto L_8019BAB4; } // 8019BA94
  cmps(c,0,(int32_t)c->r[27],0); // 8019BA98
  if (!crb(c,2)) { goto L_8019BAB4; } // 8019BA9C
  cmps(c,0,(int32_t)c->r[28],128); // 8019BAA0
  if (!crb(c,2)) { goto L_8019BAB0; } // 8019BAA4
  cmps(c,0,(int32_t)c->r[31],0); // 8019BAA8
  if (crb(c,2)) { goto L_8019BAB4; } // 8019BAAC
L_8019BAB0:;
  c->r[27]=0u+0x00000001u; // 8019BAB0
L_8019BAB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019BAB4
  if (!crb(c,2)) { goto L_8019BAC4; } // 8019BAB8
  cmps(c,0,(int32_t)c->r[27],0); // 8019BABC
  if (crb(c,2)) { goto L_8019BAD4; } // 8019BAC0
L_8019BAC4:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 8019BAC4
  c->lr=0x8019BACCu; f_8019C2B8(c); // 8019BAC8
  c->r[0]=0u+0xFFFFFFFFu; // 8019BACC
  W32(c->r[26]+0x00000000u,c->r[0]); // 8019BAD0
L_8019BAD4:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8019BAD4
  cmps(c,0,(int32_t)c->r[0],-1); // 8019BAD8
  if (!crb(c,2)) { goto L_8019BAF8; } // 8019BADC
  c->r[3]=0u+0x80330000u; // 8019BAE0
  c->r[3]=c->r[3]+0x00000F50u; // 8019BAE4
  c->r[3]=c->r[3]+0x0000001Fu; // 8019BAE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019BAEC
  c->lr=0x8019BAF4u; f_8015CED8(c); // 8019BAF0
  c->r[30]=0u+0x00000800u; // 8019BAF4
L_8019BAF8:;
  c->r[3]=c->r[30]|c->r[30]; // 8019BAF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019BAFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019BB00
  c->lr=c->r[0]; // 8019BB04
  c->r[1]=c->r[1]+0x00000020u; // 8019BB08
  return; // 8019BB0C
}

// fn_8019BB10
void f_8019BB10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019BB10
  c->r[0]=c->lr; // 8019BB14
  W32(c->r[1]+0x00000074u,c->r[0]); // 8019BB18
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BB1C
  c->r[27]=c->r[3]|c->r[3]; // 8019BB20
  c->r[30]=c->r[4]|c->r[4]; // 8019BB24
  c->r[28]=c->r[5]|c->r[5]; // 8019BB28
  c->r[29]=c->r[6]|c->r[6]; // 8019BB2C
  c->r[3]=c->r[1]+0x00000018u; // 8019BB30
  c->r[4]=0u+0x00000000u; // 8019BB34
  c->r[5]=0u+0x00000040u; // 8019BB38
  c->lr=0x8019BB40u; f_8019AA0C(c); // 8019BB3C
  c->r[0]=0u+0x00000000u; // 8019BB40
  W32(c->r[28]+0x00000000u,c->r[0]); // 8019BB44
  c->r[0]=0u+0x000000D2u; // 8019BB48
  c->r[3]=c->r[27]|c->r[27]; // 8019BB4C
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8019BB50
  c->lr=0x8019BB58u; f_8019B7D8(c); // 8019BB54
  c->r[0]=c->r[3]+0x00000041u; // 8019BB58
  W32(c->r[1]+0x00000018u,c->r[0]); // 8019BB5C
  c->r[3]=c->r[27]|c->r[27]; // 8019BB60
  W8(c->r[1]+0x00000020u,c->r[30]); // 8019BB64
  c->lr=0x8019BB6Cu; f_8019B7D8(c); // 8019BB68
  c->r[0]=c->r[3]+0x00000001u; // 8019BB6C
  W16(c->r[1]+0x00000024u,c->r[0]); // 8019BB70
  c->r[3]=c->r[1]+0x0000000Cu; // 8019BB74
  c->r[4]=c->r[1]+0x00000008u; // 8019BB78
  c->lr=0x8019BB80u; f_8019C1F8(c); // 8019BB7C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019BB80
  c->r[4]=c->r[1]+0x00000018u; // 8019BB84
  c->r[5]=0u+0x00000040u; // 8019BB88
  c->lr=0x8019BB90u; f_8019C630(c); // 8019BB8C
  cmps(c,0,(int32_t)c->r[3],0); // 8019BB90
  c->r[31]=c->r[3]|c->r[3]; // 8019BB94
  if (!crb(c,2)) { goto L_8019BBBC; } // 8019BB98
  c->r[3]=c->r[27]|c->r[27]; // 8019BB9C
  c->lr=0x8019BBA4u; f_8019B7D8(c); // 8019BBA0
  c->r[5]=c->r[3]|c->r[3]; // 8019BBA4
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019BBA8
  c->r[4]=c->r[27]|c->r[27]; // 8019BBAC
  c->r[5]=c->r[5]+0x00000001u; // 8019BBB0
  c->lr=0x8019BBB8u; f_8019C630(c); // 8019BBB4
  c->r[31]=c->r[3]|c->r[3]; // 8019BBB8
L_8019BBBC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019BBBC
  if (!crb(c,2)) { goto L_8019BC08; } // 8019BBC0
  c->r[0]=0u+0x00000000u; // 8019BBC4
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019BBC8
  c->r[4]=c->r[1]+0x00000010u; // 8019BBCC
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019BBD0
  c->lr=0x8019BBD8u; f_8019B9E8(c); // 8019BBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8019BBD8
  c->r[31]=c->r[3]|c->r[3]; // 8019BBDC
  if (!crb(c,2)) { goto L_8019BBF0; } // 8019BBE0
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019BBE4
  c->lr=0x8019BBECu; f_8019C294(c); // 8019BBE8
  c->r[30]=c->r[3]|c->r[3]; // 8019BBEC
L_8019BBF0:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8019BBF0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019BBF4
  c->r[0]=R32(c->r[30]+0x00000014u); // 8019BBF8
  W32(c->r[28]+0x00000000u,c->r[0]); // 8019BBFC
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019BC00
  c->lr=0x8019BC08u; f_8019C2B8(c); // 8019BC04
L_8019BC08:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8019BC08
  c->lr=0x8019BC10u; f_8019C2B8(c); // 8019BC0C
  c->r[3]=c->r[31]|c->r[31]; // 8019BC10
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019BC14
  c->r[0]=R32(c->r[1]+0x00000074u); // 8019BC18
  c->lr=c->r[0]; // 8019BC1C
  c->r[1]=c->r[1]+0x00000070u; // 8019BC20
  return; // 8019BC24
}

// fn_8019BC28
void f_8019BC28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019BC28
  c->r[0]=c->lr; // 8019BC2C
  c->r[5]=0u+0x00000040u; // 8019BC30
  W32(c->r[1]+0x00000074u,c->r[0]); // 8019BC34
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8019BC38
  W32(c->r[1]+0x00000068u,c->r[30]); // 8019BC3C
  c->r[30]=c->r[3]|c->r[3]; // 8019BC40
  c->r[3]=c->r[1]+0x00000018u; // 8019BC44
  W32(c->r[1]+0x00000064u,c->r[29]); // 8019BC48
  c->r[29]=c->r[4]|c->r[4]; // 8019BC4C
  c->r[4]=0u+0x00000000u; // 8019BC50
  c->lr=0x8019BC58u; f_8019AA0C(c); // 8019BC54
  c->r[3]=0u+0x000000D3u; // 8019BC58
  c->r[0]=0u+0x00000040u; // 8019BC5C
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 8019BC60
  c->r[3]=c->r[1]+0x0000000Cu; // 8019BC64
  c->r[4]=c->r[1]+0x00000008u; // 8019BC68
  W32(c->r[1]+0x00000018u,c->r[0]); // 8019BC6C
  W32(c->r[1]+0x00000020u,c->r[30]); // 8019BC70
  c->lr=0x8019BC78u; f_8019C1F8(c); // 8019BC74
  cmps(c,0,(int32_t)c->r[3],0); // 8019BC78
  c->r[31]=c->r[3]|c->r[3]; // 8019BC7C
  if (!crb(c,2)) { goto L_8019BC98; } // 8019BC80
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019BC84
  c->r[4]=c->r[1]+0x00000018u; // 8019BC88
  c->r[5]=0u+0x00000040u; // 8019BC8C
  c->lr=0x8019BC94u; f_8019C630(c); // 8019BC90
  c->r[31]=c->r[3]|c->r[3]; // 8019BC94
L_8019BC98:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019BC98
  if (!crb(c,2)) { goto L_8019BCE4; } // 8019BC9C
  c->r[0]=0u+0x00000000u; // 8019BCA0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019BCA4
  c->r[4]=c->r[1]+0x00000010u; // 8019BCA8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019BCAC
  c->lr=0x8019BCB4u; f_8019B9E8(c); // 8019BCB0
  cmps(c,0,(int32_t)c->r[3],0); // 8019BCB4
  c->r[31]=c->r[3]|c->r[3]; // 8019BCB8
  if (!crb(c,2)) { goto L_8019BCCC; } // 8019BCBC
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019BCC0
  c->lr=0x8019BCC8u; f_8019C294(c); // 8019BCC4
  c->r[30]=c->r[3]|c->r[3]; // 8019BCC8
L_8019BCCC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019BCCC
  if (!crb(c,2)) { goto L_8019BCDC; } // 8019BCD0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8019BCD4
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019BCD8
L_8019BCDC:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019BCDC
  c->lr=0x8019BCE4u; f_8019C2B8(c); // 8019BCE0
L_8019BCE4:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8019BCE4
  c->lr=0x8019BCECu; f_8019C2B8(c); // 8019BCE8
  c->r[3]=c->r[31]|c->r[31]; // 8019BCEC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8019BCF0
  c->r[30]=R32(c->r[1]+0x00000068u); // 8019BCF4
  c->r[29]=R32(c->r[1]+0x00000064u); // 8019BCF8
  c->r[0]=R32(c->r[1]+0x00000074u); // 8019BCFC
  c->lr=c->r[0]; // 8019BD00
  c->r[1]=c->r[1]+0x00000070u; // 8019BD04
  return; // 8019BD08
}

// fn_8019BD0C
void f_8019BD0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019BD0C
  c->r[0]=c->lr; // 8019BD10
  W32(c->r[1]+0x00000074u,c->r[0]); // 8019BD14
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8019BD18
  c->r[31]=c->r[5]|c->r[5]; // 8019BD1C
  c->r[5]=0u+0x00000040u; // 8019BD20
  W32(c->r[1]+0x00000068u,c->r[30]); // 8019BD24
  c->r[30]=c->r[6]|c->r[6]; // 8019BD28
  W32(c->r[1]+0x00000064u,c->r[29]); // 8019BD2C
  c->r[29]=c->r[4]|c->r[4]; // 8019BD30
  c->r[4]=0u+0x00000000u; // 8019BD34
  W32(c->r[1]+0x00000060u,c->r[28]); // 8019BD38
  c->r[28]=c->r[3]|c->r[3]; // 8019BD3C
  c->r[3]=c->r[1]+0x00000018u; // 8019BD40
  c->lr=0x8019BD48u; f_8019AA0C(c); // 8019BD44
  c->r[3]=0u+0x000000D4u; // 8019BD48
  c->r[0]=0u+0x00000040u; // 8019BD4C
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 8019BD50
  c->r[3]=c->r[1]+0x0000000Cu; // 8019BD54
  c->r[4]=c->r[1]+0x00000008u; // 8019BD58
  W32(c->r[1]+0x00000018u,c->r[0]); // 8019BD5C
  W32(c->r[1]+0x00000020u,c->r[28]); // 8019BD60
  c->r[0]=R32(c->r[29]+0x00000000u); // 8019BD64
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019BD68
  W8(c->r[1]+0x00000028u,c->r[31]); // 8019BD6C
  c->lr=0x8019BD74u; f_8019C1F8(c); // 8019BD70
  cmps(c,0,(int32_t)c->r[3],0); // 8019BD74
  c->r[31]=c->r[3]|c->r[3]; // 8019BD78
  if (!crb(c,2)) { goto L_8019BD94; } // 8019BD7C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019BD80
  c->r[4]=c->r[1]+0x00000018u; // 8019BD84
  c->r[5]=0u+0x00000040u; // 8019BD88
  c->lr=0x8019BD90u; f_8019C630(c); // 8019BD8C
  c->r[31]=c->r[3]|c->r[3]; // 8019BD90
L_8019BD94:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019BD94
  if (!crb(c,2)) { goto L_8019BDEC; } // 8019BD98
  c->r[0]=0u+0x00000000u; // 8019BD9C
  W32(c->r[30]+0x00000000u,c->r[0]); // 8019BDA0
  c->r[0]=0u+0xFFFFFFFFu; // 8019BDA4
  c->r[4]=c->r[1]+0x00000010u; // 8019BDA8
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019BDAC
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019BDB0
  c->lr=0x8019BDB8u; f_8019B9E8(c); // 8019BDB4
  cmps(c,0,(int32_t)c->r[3],0); // 8019BDB8
  c->r[31]=c->r[3]|c->r[3]; // 8019BDBC
  if (!crb(c,2)) { goto L_8019BDE4; } // 8019BDC0
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019BDC4
  c->lr=0x8019BDCCu; f_8019C294(c); // 8019BDC8
  cmps(c,0,(int32_t)c->r[3],0); // 8019BDCC
  if (crb(c,2)) { goto L_8019BDE4; } // 8019BDD0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8019BDD4
  W32(c->r[30]+0x00000000u,c->r[0]); // 8019BDD8
  c->r[0]=R32(c->r[3]+0x00000024u); // 8019BDDC
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019BDE0
L_8019BDE4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8019BDE4
  c->lr=0x8019BDECu; f_8019C2B8(c); // 8019BDE8
L_8019BDEC:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8019BDEC
  c->lr=0x8019BDF4u; f_8019C2B8(c); // 8019BDF0
  c->r[3]=c->r[31]|c->r[31]; // 8019BDF4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8019BDF8
  c->r[30]=R32(c->r[1]+0x00000068u); // 8019BDFC
  c->r[29]=R32(c->r[1]+0x00000064u); // 8019BE00
  c->r[28]=R32(c->r[1]+0x00000060u); // 8019BE04
  c->r[0]=R32(c->r[1]+0x00000074u); // 8019BE08
  c->lr=c->r[0]; // 8019BE0C
  c->r[1]=c->r[1]+0x00000070u; // 8019BE10
  return; // 8019BE14
}

// TRKTargetContinue
void f_8019BE18(Ctx* __restrict c) {
  trace_call(0x8019BE18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019BE18
  c->r[0]=c->lr; // 8019BE1C
  c->r[3]=0u+0x00000000u; // 8019BE20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019BE24
  c->lr=0x8019BE2Cu; f_8019F0D8(c); // 8019BE28
  c->lr=0x8019BE30u; f_8019B294(c); // 8019BE2C
  c->lr=0x8019BE34u; f_8019E894(c); // 8019BE30
  c->lr=0x8019BE38u; f_8019B280(c); // 8019BE34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019BE38
  c->r[3]=0u+0x00000000u; // 8019BE3C
  c->lr=c->r[0]; // 8019BE40
  c->r[1]=c->r[1]+0x00000010u; // 8019BE44
  return; // 8019BE48
}

// TRKSaveExtended1Block
void f_8019BE4C(Ctx* __restrict c) {
  trace_call(0x8019BE4Cu);
  c->r[2]=0u+0x80390000u; // 8019BE4C
  c->r[2]=c->r[2]|0x00001D00u; // 8019BE50
  /* mfsr */ // 8019BE54
  /* mfsr */ // 8019BE58
  /* mfsr */ // 8019BE5C
  /* mfsr */ // 8019BE60
  /* mfsr */ // 8019BE64
  /* mfsr */ // 8019BE68
  /* mfsr */ // 8019BE6C
  /* mfsr */ // 8019BE70
  /* mfsr */ // 8019BE74
  /* mfsr */ // 8019BE78
  /* mfsr */ // 8019BE7C
  /* mfsr */ // 8019BE80
  /* mfsr */ // 8019BE84
  /* mfsr */ // 8019BE88
  /* mfsr */ // 8019BE8C
  /* mfsr */ // 8019BE90
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BE94
  c->r[27]=mftb(c,268); // 8019BE98
  c->r[28]=mftb(c,269); // 8019BE9C
  c->r[29]=mfspr(c,1008); // 8019BEA0
  c->r[30]=mfspr(c,1009); // 8019BEA4
  c->r[31]=mfspr(c,27); // 8019BEA8
  {uint32_t ea=c->r[2]+0x000001E8u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BEAC
  c->r[15]=mfspr(c,287); // 8019BEB0
  c->r[16]=mfspr(c,528); // 8019BEB4
  c->r[17]=mfspr(c,529); // 8019BEB8
  c->r[18]=mfspr(c,530); // 8019BEBC
  c->r[19]=mfspr(c,531); // 8019BEC0
  c->r[20]=mfspr(c,532); // 8019BEC4
  c->r[21]=mfspr(c,533); // 8019BEC8
  c->r[22]=mfspr(c,534); // 8019BECC
  c->r[23]=mfspr(c,535); // 8019BED0
  c->r[24]=mfspr(c,536); // 8019BED4
  c->r[25]=mfspr(c,537); // 8019BED8
  c->r[26]=mfspr(c,538); // 8019BEDC
  c->r[27]=mfspr(c,539); // 8019BEE0
  c->r[28]=mfspr(c,540); // 8019BEE4
  c->r[29]=mfspr(c,541); // 8019BEE8
  c->r[30]=mfspr(c,542); // 8019BEEC
  c->r[31]=mfspr(c,543); // 8019BEF0
  {uint32_t ea=c->r[2]+0x000001FCu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BEF4
  c->r[24]=mfspr(c,560); // 8019BEF8
  c->r[25]=mfspr(c,561); // 8019BEFC
  c->r[26]=mfspr(c,562); // 8019BF00
  c->r[27]=mfspr(c,563); // 8019BF04
  c->r[28]=mfspr(c,564); // 8019BF08
  c->r[29]=mfspr(c,565); // 8019BF0C
  c->r[30]=mfspr(c,566); // 8019BF10
  c->r[31]=mfspr(c,567); // 8019BF14
  {uint32_t ea=c->r[2]+0x00000240u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BF18
  c->r[22]=mfspr(c,25); // 8019BF1C
  c->r[23]=mfspr(c,19); // 8019BF20
  c->r[24]=mfspr(c,18); // 8019BF24
  c->r[25]=mfspr(c,272); // 8019BF28
  c->r[26]=mfspr(c,273); // 8019BF2C
  c->r[27]=mfspr(c,274); // 8019BF30
  c->r[28]=mfspr(c,275); // 8019BF34
  c->r[29]=mfspr(c,22); // 8019BF38
  c->r[30]=mfspr(c,1010); // 8019BF3C
  c->r[31]=mfspr(c,282); // 8019BF40
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BF44
  c->r[24]=mfspr(c,1013); // 8019BF48
  c->r[25]=mfspr(c,953); // 8019BF4C
  c->r[26]=mfspr(c,954); // 8019BF50
  c->r[27]=mfspr(c,957); // 8019BF54
  c->r[28]=mfspr(c,958); // 8019BF58
  c->r[29]=mfspr(c,955); // 8019BF5C
  c->r[30]=mfspr(c,952); // 8019BF60
  c->r[31]=mfspr(c,956); // 8019BF64
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BF68
  c->r[29]=mfspr(c,567); // 8019BF6C
  c->r[30]=mfspr(c,568); // 8019BF70
  c->r[31]=mfspr(c,569); // 8019BF74
  {uint32_t ea=c->r[2]+0x000002A4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BF78
  c->r[30]=mfspr(c,1019); // 8019BF7C
  c->r[31]=mfspr(c,1017); // 8019BF80
  {uint32_t ea=c->r[2]+0x000002B0u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BF84
  c->r[16]=mfspr(c,26); // 8019BF88
  W32(c->r[2]+0x000002B8u,c->r[16]); // 8019BF8C
  c->r[17]=mfspr(c,570); // 8019BF90
  W32(c->r[2]+0x000002BCu,c->r[17]); // 8019BF94
  c->r[25]=mfspr(c,936); // 8019BF98
  c->r[26]=mfspr(c,937); // 8019BF9C
  c->r[27]=mfspr(c,938); // 8019BFA0
  c->r[28]=mfspr(c,939); // 8019BFA4
  c->r[29]=mfspr(c,940); // 8019BFA8
  c->r[30]=mfspr(c,941); // 8019BFAC
  c->r[31]=mfspr(c,942); // 8019BFB0
  {uint32_t ea=c->r[2]+0x000002C0u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BFB4
  c->r[25]=mfspr(c,571); // 8019BFB8
  c->r[26]=mfspr(c,572); // 8019BFBC
  c->r[27]=mfspr(c,573); // 8019BFC0
  c->r[28]=mfspr(c,574); // 8019BFC4
  c->r[29]=mfspr(c,575); // 8019BFC8
  c->r[30]=mfspr(c,920); // 8019BFCC
  c->r[31]=mfspr(c,1011); // 8019BFD0
  {uint32_t ea=c->r[2]+0x000002DCu; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019BFD4
  c->r[20]=mfspr(c,912); // 8019BFD8
  c->r[21]=mfspr(c,913); // 8019BFDC
  c->r[22]=mfspr(c,914); // 8019BFE0
  c->r[23]=mfspr(c,915); // 8019BFE4
  c->r[24]=mfspr(c,916); // 8019BFE8
  c->r[25]=mfspr(c,917); // 8019BFEC
  c->r[26]=mfspr(c,918); // 8019BFF0
  c->r[27]=mfspr(c,919); // 8019BFF4
  c->r[28]=mfspr(c,920); // 8019BFF8
  c->r[29]=mfspr(c,921); // 8019BFFC
  c->r[30]=mfspr(c,922); // 8019C000
  c->r[31]=mfspr(c,923); // 8019C004
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019C008
  return; // 8019C00C
}

// TRKRestoreExtended1Block
void f_8019C010(Ctx* __restrict c) {
  trace_call(0x8019C010u);
  c->r[2]=0u+0x80390000u; // 8019C010
  c->r[2]=c->r[2]|0x00001D00u; // 8019C014
  c->r[5]=0u+0x80390000u; // 8019C018
  c->r[5]=c->r[5]|0x00001B88u; // 8019C01C
  c->r[3]=R8(c->r[5]+0x00000000u); // 8019C020
  c->r[6]=R8(c->r[5]+0x00000001u); // 8019C024
  c->r[0]=0u+0x00000000u; // 8019C028
  W8(c->r[5]+0x00000000u,c->r[0]); // 8019C02C
  W8(c->r[5]+0x00000001u,c->r[0]); // 8019C030
  cmps(c,0,(int32_t)c->r[3],0); // 8019C034
  if (crb(c,2)) { goto L_8019C04C; } // 8019C038
  c->r[24]=R32(c->r[2]+0x000001E8u); // 8019C03C
  c->r[25]=R32(c->r[2]+0x000001ECu); // 8019C040
  mtspr(c,284,c->r[24]); // 8019C044
  mtspr(c,285,c->r[25]); // 8019C048
L_8019C04C:;
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C04C
  mtspr(c,912,c->r[20]); // 8019C050
  mtspr(c,913,c->r[21]); // 8019C054
  mtspr(c,914,c->r[22]); // 8019C058
  mtspr(c,915,c->r[23]); // 8019C05C
  mtspr(c,916,c->r[24]); // 8019C060
  mtspr(c,917,c->r[25]); // 8019C064
  mtspr(c,918,c->r[26]); // 8019C068
  mtspr(c,919,c->r[27]); // 8019C06C
  mtspr(c,920,c->r[28]); // 8019C070
  mtspr(c,922,c->r[30]); // 8019C074
  mtspr(c,923,c->r[31]); // 8019C078
  goto L_8019C080; // 8019C07C
L_8019C080:;
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C080
  mtspr(c,1013,c->r[19]); // 8019C084
  mtspr(c,953,c->r[20]); // 8019C088
  mtspr(c,954,c->r[21]); // 8019C08C
  mtspr(c,957,c->r[22]); // 8019C090
  mtspr(c,958,c->r[23]); // 8019C094
  mtspr(c,955,c->r[24]); // 8019C098
  mtspr(c,952,c->r[25]); // 8019C09C
  mtspr(c,956,c->r[26]); // 8019C0A0
  mtspr(c,1019,c->r[30]); // 8019C0A4
  mtspr(c,1017,c->r[31]); // 8019C0A8
  goto L_8019C0B0; // 8019C0AC
L_8019C0B0:;
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C0B0
  /* mtsr */ // 8019C0B4
  /* mtsr */ // 8019C0B8
  /* mtsr */ // 8019C0BC
  /* mtsr */ // 8019C0C0
  /* mtsr */ // 8019C0C4
  /* mtsr */ // 8019C0C8
  /* mtsr */ // 8019C0CC
  /* mtsr */ // 8019C0D0
  /* mtsr */ // 8019C0D4
  /* mtsr */ // 8019C0D8
  /* mtsr */ // 8019C0DC
  /* mtsr */ // 8019C0E0
  /* mtsr */ // 8019C0E4
  /* mtsr */ // 8019C0E8
  /* mtsr */ // 8019C0EC
  /* mtsr */ // 8019C0F0
  {uint32_t ea=c->r[2]+0x000001F0u; for(int i=12;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C0F4
  mtspr(c,1008,c->r[12]); // 8019C0F8
  mtspr(c,1009,c->r[13]); // 8019C0FC
  mtspr(c,27,c->r[14]); // 8019C100
  mtspr(c,287,c->r[15]); // 8019C104
  mtspr(c,528,c->r[16]); // 8019C108
  mtspr(c,529,c->r[17]); // 8019C10C
  mtspr(c,530,c->r[18]); // 8019C110
  mtspr(c,531,c->r[19]); // 8019C114
  mtspr(c,532,c->r[20]); // 8019C118
  mtspr(c,533,c->r[21]); // 8019C11C
  mtspr(c,534,c->r[22]); // 8019C120
  mtspr(c,535,c->r[23]); // 8019C124
  mtspr(c,536,c->r[24]); // 8019C128
  mtspr(c,537,c->r[25]); // 8019C12C
  mtspr(c,538,c->r[26]); // 8019C130
  mtspr(c,539,c->r[27]); // 8019C134
  mtspr(c,540,c->r[28]); // 8019C138
  mtspr(c,541,c->r[29]); // 8019C13C
  mtspr(c,542,c->r[30]); // 8019C140
  mtspr(c,543,c->r[31]); // 8019C144
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C148
  mtspr(c,25,c->r[22]); // 8019C14C
  mtspr(c,19,c->r[23]); // 8019C150
  mtspr(c,18,c->r[24]); // 8019C154
  mtspr(c,272,c->r[25]); // 8019C158
  mtspr(c,273,c->r[26]); // 8019C15C
  mtspr(c,274,c->r[27]); // 8019C160
  mtspr(c,275,c->r[28]); // 8019C164
  mtspr(c,1010,c->r[30]); // 8019C168
  mtspr(c,282,c->r[31]); // 8019C16C
  return; // 8019C170
}

// fn_8019C174
void f_8019C174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C174
  c->r[0]=c->lr; // 8019C178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C17C
  c->r[0]=R16(c->r[13]+0xFFFFA128u); // 8019C180
  cmps(c,0,(int32_t)c->r[0],0); // 8019C184
  if (!crb(c,2)) { goto L_8019C190; } // 8019C188
  c->r[0]=0u+0x00000001u; // 8019C18C
L_8019C190:;
  W16(c->r[3]+0x00000012u,c->r[0]); // 8019C190
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8019C194
  c->r[0]=c->r[4]+0x00000001u; // 8019C198
  W16(c->r[13]+0xFFFFA128u,c->r[0]); // 8019C19C
  c->r[4]=R32(c->r[3]+0x00000004u); // 8019C1A0
  c->r[3]=c->r[3]+0x0000000Cu; // 8019C1A4
  c->lr=0x8019C1ACu; f_8019B244(c); // 8019C1A8
  cmps(c,0,(int32_t)c->r[3],0); // 8019C1AC
  c->r[4]=c->r[3]|c->r[3]; // 8019C1B0
  if (crb(c,2)) { goto L_8019C1C4; } // 8019C1B4
  c->r[3]=0u+0x80330000u; // 8019C1B8
  c->r[3]=c->r[3]+0x00000F98u; // 8019C1BC
  c->lr=0x8019C1C4u; f_8015CED8(c); // 8019C1C0
L_8019C1C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019C1C4
  c->r[3]=0u+0x00000000u; // 8019C1C8
  c->lr=c->r[0]; // 8019C1CC
  c->r[1]=c->r[1]+0x00000010u; // 8019C1D0
  return; // 8019C1D4
}

// TRKInitializeMessageBuffers
void f_8019C1D8(Ctx* __restrict c) {
  trace_call(0x8019C1D8u);
  c->r[3]=0u+0x80390000u; // 8019C1D8
  c->r[0]=0u+0x00000000u; // 8019C1DC
  c->r[4]=c->r[3]+0x000001E0u; // 8019C1E0
  W32(c->r[3]+0x000001E0u,c->r[0]); // 8019C1E4
  c->r[3]=0u+0x00000000u; // 8019C1E8
  W32(c->r[4]+0x0000088Cu,c->r[0]); // 8019C1EC
  W32(c->r[4]+0x00001118u,c->r[0]); // 8019C1F0
  return; // 8019C1F4
}

// fn_8019C1F8
void f_8019C1F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C1F8
  c->r[0]=c->lr; // 8019C1FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019C200
  c->r[0]=0u+0x00000000u; // 8019C204
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019C208
  c->r[26]=c->r[3]|c->r[3]; // 8019C20C
  c->r[27]=c->r[4]|c->r[4]; // 8019C210
  c->r[30]=0u+0x00000300u; // 8019C214
  c->r[29]=0u+0x00000000u; // 8019C218
  c->r[31]=0u+0x00000001u; // 8019C21C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8019C220
  goto L_8019C260; // 8019C224
L_8019C228:;
  c->r[3]=c->r[29]|c->r[29]; // 8019C228
  c->lr=0x8019C230u; f_8019C294(c); // 8019C22C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8019C230
  c->r[28]=c->r[3]|c->r[3]; // 8019C234
  cmps(c,0,(int32_t)c->r[0],0); // 8019C238
  if (!crb(c,2)) { goto L_8019C25C; } // 8019C23C
  c->r[4]=0u+0x00000001u; // 8019C240
  c->lr=0x8019C248u; f_8019C2E0(c); // 8019C244
  W32(c->r[28]+0x00000000u,c->r[31]); // 8019C248
  c->r[30]=0u+0x00000000u; // 8019C24C
  W32(c->r[27]+0x00000000u,c->r[28]); // 8019C250
  W32(c->r[26]+0x00000000u,c->r[29]); // 8019C254
  c->r[29]=0u+0x00000003u; // 8019C258
L_8019C25C:;
  c->r[29]=c->r[29]+0x00000001u; // 8019C25C
L_8019C260:;
  cmps(c,0,(int32_t)c->r[29],3); // 8019C260
  if (crb(c,0)) { IRQCHK(c); goto L_8019C228; } // 8019C264
  cmps(c,0,(int32_t)c->r[30],768); // 8019C268
  if (!crb(c,2)) { goto L_8019C27C; } // 8019C26C
  c->r[3]=0u+0x80330000u; // 8019C270
  c->r[3]=c->r[3]+0x00000FC0u; // 8019C274
  c->lr=0x8019C27Cu; f_8015CED8(c); // 8019C278
L_8019C27C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019C27C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C280
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019C284
  c->lr=c->r[0]; // 8019C288
  c->r[1]=c->r[1]+0x00000020u; // 8019C28C
  return; // 8019C290
}

// TRKGetBuffer
void f_8019C294(Ctx* __restrict c) {
  trace_call(0x8019C294u);
  cmpu(c,0,c->r[3],0x00000002u); // 8019C294
  c->r[0]=0u+0x00000000u; // 8019C298
  if (crb(c,1)) { goto L_8019C2B0; } // 8019C29C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 8019C2A0
  c->r[3]=0u+0x80390000u; // 8019C2A4
  c->r[3]=c->r[3]+0x000001E0u; // 8019C2A8
  c->r[0]=c->r[3]+c->r[0]; // 8019C2AC
L_8019C2B0:;
  c->r[3]=c->r[0]|c->r[0]; // 8019C2B0
  return; // 8019C2B4
}

// fn_8019C2B8
void f_8019C2B8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],-1); // 8019C2B8
  if (crb(c,2)) return; // 8019C2BC
  cmpu(c,0,c->r[3],0x00000002u); // 8019C2C0
  if (crb(c,1)) return; // 8019C2C4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 8019C2C8
  c->r[3]=0u+0x80390000u; // 8019C2CC
  c->r[4]=0u+0x00000000u; // 8019C2D0
  c->r[3]=c->r[3]+0x000001E0u; // 8019C2D4
  W32(c->r[3]+c->r[0],c->r[4]); // 8019C2D8
  return; // 8019C2DC
}

// fn_8019C2E0
void f_8019C2E0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8019C2E0
  c->r[0]=0u+0x00000000u; // 8019C2E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8019C2E8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8019C2EC
  if (!crb(c,2)) return; // 8019C2F0
  c->r[4]=0u+0x00000000u; // 8019C2F4
  c->r[5]=0u+0x00000880u; // 8019C2F8
  c->r[3]=c->r[3]+0x0000000Cu; // 8019C2FC
  f_8019AA0C(c); return; // 8019C300
  return; // 8019C304
}

// fn_8019C308
void f_8019C308(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000880u); // 8019C308
  c->r[5]=0u+0x00000000u; // 8019C30C
  if (!crb(c,1)) { goto L_8019C31C; } // 8019C310
  c->r[5]=0u+0x00000301u; // 8019C314
  goto L_8019C330; // 8019C318
L_8019C31C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8019C31C
  W32(c->r[3]+0x00000008u,c->r[4]); // 8019C320
  cmpu(c,0,c->r[4],c->r[0]); // 8019C324
  if (!crb(c,1)) { goto L_8019C330; } // 8019C328
  W32(c->r[3]+0x00000004u,c->r[4]); // 8019C32C
L_8019C330:;
  c->r[3]=c->r[5]|c->r[5]; // 8019C330
  return; // 8019C334
}

// fn_8019C338
void f_8019C338(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C338
  c->r[0]=c->lr; // 8019C33C
  cmps(c,0,(int32_t)c->r[5],0); // 8019C340
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019C344
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019C348
  c->r[31]=0u+0x00000000u; // 8019C34C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019C350
  c->r[30]=c->r[5]|c->r[5]; // 8019C354
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019C358
  c->r[29]=c->r[3]|c->r[3]; // 8019C35C
  if (!crb(c,2)) { goto L_8019C36C; } // 8019C360
  c->r[3]=0u+0x00000000u; // 8019C364
  goto L_8019C3C0; // 8019C368
L_8019C36C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8019C36C
  c->r[6]=addc(c,~c->r[0],0x00000880u,1); // 8019C370
  cmpu(c,0,c->r[6],c->r[5]); // 8019C374
  if (!crb(c,0)) { goto L_8019C384; } // 8019C378
  c->r[31]=0u+0x00000301u; // 8019C37C
  c->r[30]=c->r[6]|c->r[6]; // 8019C380
L_8019C384:;
  cmpu(c,0,c->r[30],0x00000001u); // 8019C384
  if (!crb(c,2)) { goto L_8019C39C; } // 8019C388
  c->r[3]=c->r[3]+c->r[0]; // 8019C38C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8019C390
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8019C394
  goto L_8019C3AC; // 8019C398
L_8019C39C:;
  c->r[3]=c->r[3]+c->r[0]; // 8019C39C
  c->r[5]=c->r[30]|c->r[30]; // 8019C3A0
  c->r[3]=c->r[3]+0x0000000Cu; // 8019C3A4
  c->lr=0x8019C3ACu; f_8019A8D0(c); // 8019C3A8
L_8019C3AC:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8019C3AC
  c->r[3]=c->r[31]|c->r[31]; // 8019C3B0
  c->r[0]=c->r[0]+c->r[30]; // 8019C3B4
  W32(c->r[29]+0x00000008u,c->r[0]); // 8019C3B8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8019C3BC
L_8019C3C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019C3C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019C3C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019C3C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019C3CC
  c->lr=c->r[0]; // 8019C3D0
  c->r[1]=c->r[1]+0x00000020u; // 8019C3D4
  return; // 8019C3D8
}

// fn_8019C3DC
void f_8019C3DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C3DC
  c->r[0]=c->lr; // 8019C3E0
  cmps(c,0,(int32_t)c->r[5],0); // 8019C3E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019C3E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019C3EC
  c->r[31]=0u+0x00000000u; // 8019C3F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019C3F4
  c->r[30]=c->r[5]|c->r[5]; // 8019C3F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019C3FC
  c->r[29]=c->r[3]|c->r[3]; // 8019C400
  if (!crb(c,2)) { goto L_8019C410; } // 8019C404
  c->r[3]=0u+0x00000000u; // 8019C408
  goto L_8019C450; // 8019C40C
L_8019C410:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 8019C410
  c->r[0]=R32(c->r[3]+0x00000004u); // 8019C414
  c->r[0]=c->r[0]-c->r[6]; // 8019C418
  cmpu(c,0,c->r[5],c->r[0]); // 8019C41C
  if (!crb(c,1)) { goto L_8019C42C; } // 8019C420
  c->r[31]=0u+0x00000302u; // 8019C424
  c->r[30]=c->r[0]|c->r[0]; // 8019C428
L_8019C42C:;
  c->r[6]=c->r[29]+c->r[6]; // 8019C42C
  c->r[3]=c->r[4]|c->r[4]; // 8019C430
  c->r[5]=c->r[30]|c->r[30]; // 8019C434
  c->r[4]=c->r[6]+0x0000000Cu; // 8019C438
  c->lr=0x8019C440u; f_8019A8D0(c); // 8019C43C
  c->r[0]=R32(c->r[29]+0x00000008u); // 8019C440
  c->r[3]=c->r[31]|c->r[31]; // 8019C444
  c->r[0]=c->r[0]+c->r[30]; // 8019C448
  W32(c->r[29]+0x00000008u,c->r[0]); // 8019C44C
L_8019C450:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019C450
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019C454
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019C458
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019C45C
  c->lr=c->r[0]; // 8019C460
  c->r[1]=c->r[1]+0x00000020u; // 8019C464
  return; // 8019C468
}

// fn_8019C46C
void f_8019C46C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C46C
  c->r[0]=c->lr; // 8019C470
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019C474
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019C478
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019C47C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019C480
  c->r[29]=c->r[3]|c->r[3]; // 8019C484
  c->r[0]=R32(c->r[13]+0xFFFFA118u); // 8019C488
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019C48C
  cmps(c,0,(int32_t)c->r[0],0); // 8019C490
  if (crb(c,2)) { goto L_8019C4A0; } // 8019C494
  c->r[4]=c->r[1]+0x00000008u; // 8019C498
  goto L_8019C4C4; // 8019C49C
L_8019C4A0:;
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 8019C4A0
  c->r[4]=c->r[1]+0x0000000Cu; // 8019C4A4
  c->r[6]=R8(c->r[1]+0x0000000Au); // 8019C4A8
  c->r[5]=R8(c->r[1]+0x00000009u); // 8019C4AC
  c->r[0]=R8(c->r[1]+0x00000008u); // 8019C4B0
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 8019C4B4
  W8(c->r[1]+0x0000000Du,c->r[6]); // 8019C4B8
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 8019C4BC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8019C4C0
L_8019C4C4:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 8019C4C4
  c->r[31]=0u+0x00000004u; // 8019C4C8
  c->r[30]=0u+0x00000000u; // 8019C4CC
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 8019C4D0
  cmpu(c,0,c->r[0],0x00000004u); // 8019C4D4
  if (!crb(c,0)) { goto L_8019C4E4; } // 8019C4D8
  c->r[30]=0u+0x00000301u; // 8019C4DC
  c->r[31]=c->r[0]|c->r[0]; // 8019C4E0
L_8019C4E4:;
  cmpu(c,0,c->r[31],0x00000001u); // 8019C4E4
  if (!crb(c,2)) { goto L_8019C4FC; } // 8019C4E8
  c->r[3]=c->r[3]+c->r[5]; // 8019C4EC
  c->r[0]=R8(c->r[4]+0x00000000u); // 8019C4F0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8019C4F4
  goto L_8019C50C; // 8019C4F8
L_8019C4FC:;
  c->r[3]=c->r[3]+c->r[5]; // 8019C4FC
  c->r[5]=c->r[31]|c->r[31]; // 8019C500
  c->r[3]=c->r[3]+0x0000000Cu; // 8019C504
  c->lr=0x8019C50Cu; f_8019A8D0(c); // 8019C508
L_8019C50C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8019C50C
  c->r[3]=c->r[30]|c->r[30]; // 8019C510
  c->r[0]=c->r[0]+c->r[31]; // 8019C514
  W32(c->r[29]+0x00000008u,c->r[0]); // 8019C518
  W32(c->r[29]+0x00000004u,c->r[0]); // 8019C51C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019C520
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019C524
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019C528
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019C52C
  c->lr=c->r[0]; // 8019C530
  c->r[1]=c->r[1]+0x00000020u; // 8019C534
  return; // 8019C538
}

// fn_8019C53C
void f_8019C53C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C53C
  c->r[0]=c->lr; // 8019C540
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019C544
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8019C548
  c->r[31]=c->r[3]|c->r[3]; // 8019C54C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8019C550
  W32(c->r[1]+0x00000024u,c->r[29]); // 8019C554
  c->r[0]=R32(c->r[13]+0xFFFFA118u); // 8019C558
  W32(c->r[1]+0x00000008u,c->r[5]); // 8019C55C
  cmps(c,0,(int32_t)c->r[0],0); // 8019C560
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8019C564
  if (crb(c,2)) { goto L_8019C574; } // 8019C568
  c->r[4]=c->r[1]+0x00000008u; // 8019C56C
  goto L_8019C5B8; // 8019C570
L_8019C574:;
  c->r[11]=R8(c->r[1]+0x0000000Fu); // 8019C574
  c->r[4]=c->r[1]+0x00000010u; // 8019C578
  c->r[10]=R8(c->r[1]+0x0000000Eu); // 8019C57C
  c->r[9]=R8(c->r[1]+0x0000000Du); // 8019C580
  c->r[8]=R8(c->r[1]+0x0000000Cu); // 8019C584
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 8019C588
  c->r[6]=R8(c->r[1]+0x0000000Au); // 8019C58C
  c->r[5]=R8(c->r[1]+0x00000009u); // 8019C590
  c->r[0]=R8(c->r[1]+0x00000008u); // 8019C594
  W8(c->r[1]+0x00000010u,c->r[11]); // 8019C598
  W8(c->r[1]+0x00000011u,c->r[10]); // 8019C59C
  W8(c->r[1]+0x00000012u,c->r[9]); // 8019C5A0
  W8(c->r[1]+0x00000013u,c->r[8]); // 8019C5A4
  W8(c->r[1]+0x00000014u,c->r[7]); // 8019C5A8
  W8(c->r[1]+0x00000015u,c->r[6]); // 8019C5AC
  W8(c->r[1]+0x00000016u,c->r[5]); // 8019C5B0
  W8(c->r[1]+0x00000017u,c->r[0]); // 8019C5B4
L_8019C5B8:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 8019C5B8
  c->r[30]=0u+0x00000008u; // 8019C5BC
  c->r[29]=0u+0x00000000u; // 8019C5C0
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 8019C5C4
  cmpu(c,0,c->r[0],0x00000008u); // 8019C5C8
  if (!crb(c,0)) { goto L_8019C5D8; } // 8019C5CC
  c->r[29]=0u+0x00000301u; // 8019C5D0
  c->r[30]=c->r[0]|c->r[0]; // 8019C5D4
L_8019C5D8:;
  cmpu(c,0,c->r[30],0x00000001u); // 8019C5D8
  if (!crb(c,2)) { goto L_8019C5F0; } // 8019C5DC
  c->r[3]=c->r[3]+c->r[5]; // 8019C5E0
  c->r[0]=R8(c->r[4]+0x00000000u); // 8019C5E4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8019C5E8
  goto L_8019C600; // 8019C5EC
L_8019C5F0:;
  c->r[3]=c->r[3]+c->r[5]; // 8019C5F0
  c->r[5]=c->r[30]|c->r[30]; // 8019C5F4
  c->r[3]=c->r[3]+0x0000000Cu; // 8019C5F8
  c->lr=0x8019C600u; f_8019A8D0(c); // 8019C5FC
L_8019C600:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8019C600
  c->r[3]=c->r[29]|c->r[29]; // 8019C604
  c->r[0]=c->r[0]+c->r[30]; // 8019C608
  W32(c->r[31]+0x00000008u,c->r[0]); // 8019C60C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8019C610
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8019C614
  c->r[30]=R32(c->r[1]+0x00000028u); // 8019C618
  c->r[29]=R32(c->r[1]+0x00000024u); // 8019C61C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019C620
  c->lr=c->r[0]; // 8019C624
  c->r[1]=c->r[1]+0x00000030u; // 8019C628
  return; // 8019C62C
}

// fn_8019C630
void f_8019C630(Ctx* __restrict c) {
  c->r[9]=0u+0x00000000u; // 8019C630
  c->r[7]=0u+0x00000000u; // 8019C634
  goto L_8019C67C; // 8019C638
L_8019C63C:;
  c->r[7]=R32(c->r[3]+0x00000008u); // 8019C63C
  c->r[8]=R8(c->r[4]+0x00000000u); // 8019C640
  cmpu(c,0,c->r[7],0x00000880u); // 8019C644
  if (crb(c,0)) { goto L_8019C654; } // 8019C648
  c->r[7]=0u+0x00000301u; // 8019C64C
  goto L_8019C674; // 8019C650
L_8019C654:;
  c->r[6]=c->r[3]+c->r[7]; // 8019C654
  c->r[0]=c->r[7]+0x00000001u; // 8019C658
  W8(c->r[6]+0x0000000Cu,c->r[8]); // 8019C65C
  c->r[7]=0u+0x00000000u; // 8019C660
  c->r[6]=R32(c->r[3]+0x00000004u); // 8019C664
  W32(c->r[3]+0x00000008u,c->r[0]); // 8019C668
  c->r[0]=c->r[6]+0x00000001u; // 8019C66C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8019C670
L_8019C674:;
  c->r[9]=c->r[9]+0x00000001u; // 8019C674
  c->r[4]=c->r[4]+0x00000001u; // 8019C678
L_8019C67C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8019C67C
  if (!crb(c,2)) { goto L_8019C68C; } // 8019C680
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[5]); // 8019C684
  if (crb(c,0)) { IRQCHK(c); goto L_8019C63C; } // 8019C688
L_8019C68C:;
  c->r[3]=c->r[7]|c->r[7]; // 8019C68C
  return; // 8019C690
}

// fn_8019C694
void f_8019C694(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C694
  c->r[0]=c->lr; // 8019C698
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019C69C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019C6A0
  c->r[29]=c->r[3]|c->r[3]; // 8019C6A4
  c->r[27]=c->r[4]|c->r[4]; // 8019C6A8
  c->r[30]=c->r[5]|c->r[5]; // 8019C6AC
  c->r[31]=0u+0x00000000u; // 8019C6B0
  c->r[26]=0u+0x00000000u; // 8019C6B4
  goto L_8019C75C; // 8019C6B8
L_8019C6BC:;
  c->r[0]=R32(c->r[13]+0xFFFFA118u); // 8019C6BC
  c->r[3]=R32(c->r[27]+0x00000000u); // 8019C6C0
  cmps(c,0,(int32_t)c->r[0],0); // 8019C6C4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8019C6C8
  if (crb(c,2)) { goto L_8019C6D8; } // 8019C6CC
  c->r[4]=c->r[1]+0x0000000Cu; // 8019C6D0
  goto L_8019C6FC; // 8019C6D4
L_8019C6D8:;
  c->r[6]=R8(c->r[1]+0x0000000Fu); // 8019C6D8
  c->r[4]=c->r[1]+0x00000008u; // 8019C6DC
  c->r[5]=R8(c->r[1]+0x0000000Eu); // 8019C6E0
  c->r[3]=R8(c->r[1]+0x0000000Du); // 8019C6E4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8019C6E8
  W8(c->r[1]+0x00000008u,c->r[6]); // 8019C6EC
  W8(c->r[1]+0x00000009u,c->r[5]); // 8019C6F0
  W8(c->r[1]+0x0000000Au,c->r[3]); // 8019C6F4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8019C6F8
L_8019C6FC:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 8019C6FC
  c->r[28]=0u+0x00000004u; // 8019C700
  c->r[26]=0u+0x00000000u; // 8019C704
  c->r[0]=addc(c,~c->r[3],0x00000880u,1); // 8019C708
  cmpu(c,0,c->r[0],0x00000004u); // 8019C70C
  if (!crb(c,0)) { goto L_8019C71C; } // 8019C710
  c->r[26]=0u+0x00000301u; // 8019C714
  c->r[28]=c->r[0]|c->r[0]; // 8019C718
L_8019C71C:;
  cmpu(c,0,c->r[28],0x00000001u); // 8019C71C
  if (!crb(c,2)) { goto L_8019C734; } // 8019C720
  c->r[3]=c->r[29]+c->r[3]; // 8019C724
  c->r[0]=R8(c->r[4]+0x00000000u); // 8019C728
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8019C72C
  goto L_8019C744; // 8019C730
L_8019C734:;
  c->r[3]=c->r[29]+c->r[3]; // 8019C734
  c->r[5]=c->r[28]|c->r[28]; // 8019C738
  c->r[3]=c->r[3]+0x0000000Cu; // 8019C73C
  c->lr=0x8019C744u; f_8019A8D0(c); // 8019C740
L_8019C744:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8019C744
  c->r[27]=c->r[27]+0x00000004u; // 8019C748
  c->r[31]=c->r[31]+0x00000001u; // 8019C74C
  c->r[0]=c->r[0]+c->r[28]; // 8019C750
  W32(c->r[29]+0x00000008u,c->r[0]); // 8019C754
  W32(c->r[29]+0x00000004u,c->r[0]); // 8019C758
L_8019C75C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8019C75C
  if (!crb(c,2)) { goto L_8019C76C; } // 8019C760
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8019C764
  if (crb(c,0)) { IRQCHK(c); goto L_8019C6BC; } // 8019C768
L_8019C76C:;
  c->r[3]=c->r[26]|c->r[26]; // 8019C76C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C770
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019C774
  c->lr=c->r[0]; // 8019C778
  c->r[1]=c->r[1]+0x00000030u; // 8019C77C
  return; // 8019C780
}

// fn_8019C784
void f_8019C784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C784
  c->r[0]=c->lr; // 8019C788
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019C78C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019C790
  c->r[27]=c->r[3]|c->r[3]; // 8019C794
  c->r[29]=c->r[4]|c->r[4]; // 8019C798
  c->r[0]=R32(c->r[13]+0xFFFFA118u); // 8019C79C
  cmps(c,0,(int32_t)c->r[0],0); // 8019C7A0
  if (crb(c,2)) { goto L_8019C7B0; } // 8019C7A4
  c->r[30]=c->r[29]|c->r[29]; // 8019C7A8
  goto L_8019C7B4; // 8019C7AC
L_8019C7B0:;
  c->r[30]=c->r[1]+0x00000008u; // 8019C7B0
L_8019C7B4:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8019C7B4
  c->r[28]=0u+0x00000008u; // 8019C7B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 8019C7BC
  c->r[31]=0u+0x00000000u; // 8019C7C0
  c->r[0]=c->r[0]-c->r[4]; // 8019C7C4
  cmpu(c,0,c->r[0],0x00000008u); // 8019C7C8
  if (!crb(c,0)) { goto L_8019C7D8; } // 8019C7CC
  c->r[31]=0u+0x00000302u; // 8019C7D0
  c->r[28]=c->r[0]|c->r[0]; // 8019C7D4
L_8019C7D8:;
  c->r[4]=c->r[27]+c->r[4]; // 8019C7D8
  c->r[3]=c->r[30]|c->r[30]; // 8019C7DC
  c->r[5]=c->r[28]|c->r[28]; // 8019C7E0
  c->r[4]=c->r[4]+0x0000000Cu; // 8019C7E4
  c->lr=0x8019C7ECu; f_8019A8D0(c); // 8019C7E8
  c->r[0]=R32(c->r[27]+0x00000008u); // 8019C7EC
  c->r[0]=c->r[0]+c->r[28]; // 8019C7F0
  W32(c->r[27]+0x00000008u,c->r[0]); // 8019C7F4
  c->r[0]=R32(c->r[13]+0xFFFFA118u); // 8019C7F8
  cmps(c,0,(int32_t)c->r[0],0); // 8019C7FC
  if (!crb(c,2)) { goto L_8019C84C; } // 8019C800
  cmps(c,0,(int32_t)c->r[31],0); // 8019C804
  if (!crb(c,2)) { goto L_8019C84C; } // 8019C808
  c->r[0]=R8(c->r[30]+0x00000007u); // 8019C80C
  W8(c->r[29]+0x00000000u,c->r[0]); // 8019C810
  c->r[0]=R8(c->r[30]+0x00000006u); // 8019C814
  W8(c->r[29]+0x00000001u,c->r[0]); // 8019C818
  c->r[0]=R8(c->r[30]+0x00000005u); // 8019C81C
  W8(c->r[29]+0x00000002u,c->r[0]); // 8019C820
  c->r[0]=R8(c->r[30]+0x00000004u); // 8019C824
  W8(c->r[29]+0x00000003u,c->r[0]); // 8019C828
  c->r[0]=R8(c->r[30]+0x00000003u); // 8019C82C
  W8(c->r[29]+0x00000004u,c->r[0]); // 8019C830
  c->r[0]=R8(c->r[30]+0x00000002u); // 8019C834
  W8(c->r[29]+0x00000005u,c->r[0]); // 8019C838
  c->r[0]=R8(c->r[30]+0x00000001u); // 8019C83C
  W8(c->r[29]+0x00000006u,c->r[0]); // 8019C840
  c->r[0]=R8(c->r[30]+0x00000000u); // 8019C844
  W8(c->r[29]+0x00000007u,c->r[0]); // 8019C848
L_8019C84C:;
  c->r[3]=c->r[31]|c->r[31]; // 8019C84C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C850
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019C854
  c->lr=c->r[0]; // 8019C858
  c->r[1]=c->r[1]+0x00000030u; // 8019C85C
  return; // 8019C860
}

// fn_8019C864
void f_8019C864(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C864
  c->r[0]=c->lr; // 8019C868
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019C86C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019C870
  c->r[26]=c->r[3]|c->r[3]; // 8019C874
  c->r[27]=c->r[4]|c->r[4]; // 8019C878
  c->r[28]=c->r[5]|c->r[5]; // 8019C87C
  c->r[29]=0u+0x00000000u; // 8019C880
  c->r[30]=0u+0x00000000u; // 8019C884
  goto L_8019C8D4; // 8019C888
L_8019C88C:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 8019C88C
  c->r[31]=0u+0x00000001u; // 8019C890
  c->r[0]=R32(c->r[26]+0x00000004u); // 8019C894
  c->r[30]=0u+0x00000000u; // 8019C898
  c->r[0]=c->r[0]-c->r[3]; // 8019C89C
  cmpu(c,0,c->r[0],0x00000001u); // 8019C8A0
  if (!crb(c,0)) { goto L_8019C8B0; } // 8019C8A4
  c->r[30]=0u+0x00000302u; // 8019C8A8
  c->r[31]=c->r[0]|c->r[0]; // 8019C8AC
L_8019C8B0:;
  c->r[4]=c->r[26]+c->r[3]; // 8019C8B0
  c->r[5]=c->r[31]|c->r[31]; // 8019C8B4
  c->r[3]=c->r[27]+c->r[29]; // 8019C8B8
  c->r[4]=c->r[4]+0x0000000Cu; // 8019C8BC
  c->lr=0x8019C8C4u; f_8019A8D0(c); // 8019C8C0
  c->r[0]=R32(c->r[26]+0x00000008u); // 8019C8C4
  c->r[29]=c->r[29]+0x00000001u; // 8019C8C8
  c->r[0]=c->r[0]+c->r[31]; // 8019C8CC
  W32(c->r[26]+0x00000008u,c->r[0]); // 8019C8D0
L_8019C8D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019C8D4
  if (!crb(c,2)) { goto L_8019C8E4; } // 8019C8D8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8019C8DC
  if (crb(c,0)) { IRQCHK(c); goto L_8019C88C; } // 8019C8E0
L_8019C8E4:;
  c->r[3]=c->r[30]|c->r[30]; // 8019C8E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C8E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019C8EC
  c->lr=c->r[0]; // 8019C8F0
  c->r[1]=c->r[1]+0x00000020u; // 8019C8F4
  return; // 8019C8F8
}

// fn_8019C8FC
void f_8019C8FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C8FC
  c->r[0]=c->lr; // 8019C900
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019C904
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019C908
  c->r[27]=c->r[3]|c->r[3]; // 8019C90C
  c->r[31]=c->r[4]|c->r[4]; // 8019C910
  c->r[28]=c->r[5]|c->r[5]; // 8019C914
  c->r[29]=0u+0x00000000u; // 8019C918
  c->r[30]=0u+0x00000000u; // 8019C91C
  goto L_8019C9BC; // 8019C920
L_8019C924:;
  c->r[0]=R32(c->r[13]+0xFFFFA118u); // 8019C924
  cmps(c,0,(int32_t)c->r[0],0); // 8019C928
  if (crb(c,2)) { goto L_8019C938; } // 8019C92C
  c->r[26]=c->r[31]|c->r[31]; // 8019C930
  goto L_8019C93C; // 8019C934
L_8019C938:;
  c->r[26]=c->r[1]+0x00000008u; // 8019C938
L_8019C93C:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 8019C93C
  c->r[25]=0u+0x00000004u; // 8019C940
  c->r[0]=R32(c->r[27]+0x00000004u); // 8019C944
  c->r[30]=0u+0x00000000u; // 8019C948
  c->r[0]=c->r[0]-c->r[3]; // 8019C94C
  cmpu(c,0,c->r[0],0x00000004u); // 8019C950
  if (!crb(c,0)) { goto L_8019C960; } // 8019C954
  c->r[30]=0u+0x00000302u; // 8019C958
  c->r[25]=c->r[0]|c->r[0]; // 8019C95C
L_8019C960:;
  c->r[4]=c->r[27]+c->r[3]; // 8019C960
  c->r[3]=c->r[26]|c->r[26]; // 8019C964
  c->r[5]=c->r[25]|c->r[25]; // 8019C968
  c->r[4]=c->r[4]+0x0000000Cu; // 8019C96C
  c->lr=0x8019C974u; f_8019A8D0(c); // 8019C970
  c->r[0]=R32(c->r[27]+0x00000008u); // 8019C974
  c->r[0]=c->r[0]+c->r[25]; // 8019C978
  W32(c->r[27]+0x00000008u,c->r[0]); // 8019C97C
  c->r[0]=R32(c->r[13]+0xFFFFA118u); // 8019C980
  cmps(c,0,(int32_t)c->r[0],0); // 8019C984
  if (!crb(c,2)) { goto L_8019C9B4; } // 8019C988
  cmps(c,0,(int32_t)c->r[30],0); // 8019C98C
  if (!crb(c,2)) { goto L_8019C9B4; } // 8019C990
  c->r[0]=R8(c->r[26]+0x00000003u); // 8019C994
  W8(c->r[31]+0x00000000u,c->r[0]); // 8019C998
  c->r[0]=R8(c->r[26]+0x00000002u); // 8019C99C
  W8(c->r[31]+0x00000001u,c->r[0]); // 8019C9A0
  c->r[0]=R8(c->r[26]+0x00000001u); // 8019C9A4
  W8(c->r[31]+0x00000002u,c->r[0]); // 8019C9A8
  c->r[0]=R8(c->r[26]+0x00000000u); // 8019C9AC
  W8(c->r[31]+0x00000003u,c->r[0]); // 8019C9B0
L_8019C9B4:;
  c->r[31]=c->r[31]+0x00000004u; // 8019C9B4
  c->r[29]=c->r[29]+0x00000001u; // 8019C9B8
L_8019C9BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019C9BC
  if (!crb(c,2)) { goto L_8019C9CC; } // 8019C9C0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8019C9C4
  if (crb(c,0)) { IRQCHK(c); goto L_8019C924; } // 8019C9C8
L_8019C9CC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019C9CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019C9D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019C9D4
  c->lr=c->r[0]; // 8019C9D8
  c->r[1]=c->r[1]+0x00000030u; // 8019C9DC
  return; // 8019C9E0
}

// fn_8019C9E4
void f_8019C9E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFA134u); // 8019C9E4
  return; // 8019C9E8
}

// fn_8019C9EC
void f_8019C9EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C9EC
  c->r[0]=c->lr; // 8019C9F0
  c->r[4]=0u+0x00000000u; // 8019C9F4
  c->r[5]=0u+0x00000040u; // 8019C9F8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8019C9FC
  c->r[0]=0u+0x00000001u; // 8019CA00
  c->r[3]=c->r[1]+0x00000008u; // 8019CA04
  W32(c->r[13]+0xFFFFA134u,c->r[0]); // 8019CA08
  c->lr=0x8019CA10u; f_8019AA0C(c); // 8019CA0C
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019CA10
  c->r[0]=0u+0x00000080u; // 8019CA14
  c->r[4]=0u+0x00000040u; // 8019CA18
  c->r[5]=0u+0x00000000u; // 8019CA1C
  c->r[6]=c->r[3]+0x00000001u; // 8019CA20
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8019CA24
  c->r[0]=c->r[6]+0x00000001u; // 8019CA28
  c->r[3]=c->r[1]+0x00000008u; // 8019CA2C
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019CA30
  c->r[4]=0u+0x00000040u; // 8019CA34
  W8(c->r[1]+0x00000010u,c->r[5]); // 8019CA38
  W32(c->r[1]+0x00000014u,c->r[6]); // 8019CA3C
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CA40
  c->lr=0x8019CA48u; f_8019B244(c); // 8019CA44
  c->r[0]=R32(c->r[1]+0x00000054u); // 8019CA48
  c->r[3]=0u+0x00000000u; // 8019CA4C
  c->lr=c->r[0]; // 8019CA50
  c->r[1]=c->r[1]+0x00000050u; // 8019CA54
  return; // 8019CA58
}

// fn_8019CA5C
void f_8019CA5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CA5C
  c->r[0]=c->lr; // 8019CA60
  c->r[4]=0u+0x00000000u; // 8019CA64
  c->r[5]=0u+0x00000040u; // 8019CA68
  W32(c->r[1]+0x00000064u,c->r[0]); // 8019CA6C
  c->r[3]=c->r[1]+0x00000018u; // 8019CA70
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8019CA74
  c->r[31]=0u+0x00000000u; // 8019CA78
  W32(c->r[13]+0xFFFFA134u,c->r[31]); // 8019CA7C
  c->lr=0x8019CA84u; f_8019AA0C(c); // 8019CA80
  c->r[4]=R32(c->r[13]+0xFFFFA130u); // 8019CA84
  c->r[0]=0u+0x00000080u; // 8019CA88
  c->r[3]=0u+0x00000040u; // 8019CA8C
  W32(c->r[1]+0x00000018u,c->r[3]); // 8019CA90
  c->r[5]=c->r[4]+0x00000001u; // 8019CA94
  c->r[4]=0u+0x00000040u; // 8019CA98
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8019CA9C
  c->r[0]=c->r[5]+0x00000001u; // 8019CAA0
  c->r[3]=c->r[1]+0x00000018u; // 8019CAA4
  W8(c->r[1]+0x00000020u,c->r[31]); // 8019CAA8
  W32(c->r[1]+0x00000024u,c->r[5]); // 8019CAAC
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CAB0
  c->lr=0x8019CAB8u; f_8019B244(c); // 8019CAB4
  c->r[3]=c->r[1]+0x00000008u; // 8019CAB8
  c->r[4]=0u+0x00000001u; // 8019CABC
  c->lr=0x8019CAC4u; f_8019B520(c); // 8019CAC0
  c->r[3]=c->r[1]+0x00000008u; // 8019CAC4
  c->lr=0x8019CACCu; f_8019B454(c); // 8019CAC8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8019CACC
  c->r[3]=0u+0x00000000u; // 8019CAD0
  c->r[0]=R32(c->r[1]+0x00000064u); // 8019CAD4
  c->lr=c->r[0]; // 8019CAD8
  c->r[1]=c->r[1]+0x00000060u; // 8019CADC
  return; // 8019CAE0
}

// fn_8019CAE4
void f_8019CAE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CAE4
  c->r[0]=c->lr; // 8019CAE8
  c->r[4]=0u+0x00000000u; // 8019CAEC
  c->r[5]=0u+0x00000040u; // 8019CAF0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8019CAF4
  c->r[3]=c->r[1]+0x00000008u; // 8019CAF8
  c->lr=0x8019CB00u; f_8019AA0C(c); // 8019CAFC
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019CB00
  c->r[0]=0u+0x00000080u; // 8019CB04
  c->r[4]=0u+0x00000040u; // 8019CB08
  c->r[5]=0u+0x00000000u; // 8019CB0C
  c->r[6]=c->r[3]+0x00000001u; // 8019CB10
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8019CB14
  c->r[0]=c->r[6]+0x00000001u; // 8019CB18
  c->r[3]=c->r[1]+0x00000008u; // 8019CB1C
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019CB20
  c->r[4]=0u+0x00000040u; // 8019CB24
  W8(c->r[1]+0x00000010u,c->r[5]); // 8019CB28
  W32(c->r[1]+0x00000014u,c->r[6]); // 8019CB2C
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CB30
  c->lr=0x8019CB38u; f_8019B244(c); // 8019CB34
  c->lr=0x8019CB3Cu; f_8019AF68(c); // 8019CB38
  c->r[0]=R32(c->r[1]+0x00000054u); // 8019CB3C
  c->r[3]=0u+0x00000000u; // 8019CB40
  c->lr=c->r[0]; // 8019CB44
  c->r[1]=c->r[1]+0x00000050u; // 8019CB48
  return; // 8019CB4C
}

// fn_8019CB50
void f_8019CB50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CB50
  c->r[0]=c->lr; // 8019CB54
  c->r[4]=0u+0x00000000u; // 8019CB58
  c->r[5]=0u+0x00000040u; // 8019CB5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8019CB60
  c->r[3]=c->r[1]+0x00000008u; // 8019CB64
  c->lr=0x8019CB6Cu; f_8019AA0C(c); // 8019CB68
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019CB6C
  c->r[0]=0u+0x00000080u; // 8019CB70
  c->r[4]=0u+0x00000040u; // 8019CB74
  c->r[5]=0u+0x00000000u; // 8019CB78
  c->r[6]=c->r[3]+0x00000001u; // 8019CB7C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8019CB80
  c->r[0]=c->r[6]+0x00000001u; // 8019CB84
  c->r[3]=c->r[1]+0x00000008u; // 8019CB88
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019CB8C
  c->r[4]=0u+0x00000040u; // 8019CB90
  W8(c->r[1]+0x00000010u,c->r[5]); // 8019CB94
  W32(c->r[1]+0x00000014u,c->r[6]); // 8019CB98
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CB9C
  c->lr=0x8019CBA4u; f_8019B244(c); // 8019CBA0
  c->lr=0x8019CBA8u; f_8019ADEC(c); // 8019CBA4
  c->r[0]=R32(c->r[1]+0x00000054u); // 8019CBA8
  c->r[3]=0u+0x00000000u; // 8019CBAC
  c->lr=c->r[0]; // 8019CBB0
  c->r[1]=c->r[1]+0x00000050u; // 8019CBB4
  return; // 8019CBB8
}

// fn_8019CBBC
void f_8019CBBC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8019CBBC
  c->r[12]=c->r[1]|c->r[1]; // 8019CBC0
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 8019CBC4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CBC8
  c->r[0]=c->lr; // 8019CBCC
  W32(c->r[12]+0x00000004u,c->r[0]); // 8019CBD0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8019CBD4
  c->r[31]=0u+0x00000000u; // 8019CBD8
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8019CBDC
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8019CBE0
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 8019CBE4
  c->r[28]=c->r[3]|c->r[3]; // 8019CBE8
  c->r[30]=R8(c->r[3]+0x00000014u); // 8019CBEC
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8019CBF0
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 8019CBF4
  c->r[3]=R16(c->r[3]+0x00000018u); // 8019CBF8
  if (crb(c,2)) { goto L_8019CC50; } // 8019CBFC
  c->r[3]=c->r[1]+0x00000068u; // 8019CC00
  c->r[4]=0u+0x00000000u; // 8019CC04
  c->r[5]=0u+0x00000040u; // 8019CC08
  c->lr=0x8019CC10u; f_8019AA0C(c); // 8019CC0C
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019CC10
  c->r[0]=0u+0x00000080u; // 8019CC14
  c->r[4]=0u+0x00000040u; // 8019CC18
  c->r[5]=0u+0x00000012u; // 8019CC1C
  c->r[6]=c->r[3]+0x00000001u; // 8019CC20
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 8019CC24
  c->r[0]=c->r[6]+0x00000001u; // 8019CC28
  c->r[3]=c->r[1]+0x00000068u; // 8019CC2C
  W32(c->r[1]+0x00000068u,c->r[4]); // 8019CC30
  c->r[4]=0u+0x00000040u; // 8019CC34
  W8(c->r[1]+0x00000070u,c->r[5]); // 8019CC38
  W32(c->r[1]+0x00000074u,c->r[6]); // 8019CC3C
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CC40
  c->lr=0x8019CC48u; f_8019B244(c); // 8019CC44
  c->r[3]=0u+0x00000000u; // 8019CC48
  goto L_8019CDCC; // 8019CC4C
L_8019CC50:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019CC50
  if (!crb(c,2)) { goto L_8019CD20; } // 8019CC54
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 8019CC58
  W32(c->r[1]+0x00000020u,c->r[3]); // 8019CC5C
  if (crb(c,2)) { goto L_8019CC6C; } // 8019CC60
  c->r[6]=0u+0x00000000u; // 8019CC64
  goto L_8019CC70; // 8019CC68
L_8019CC6C:;
  c->r[6]=0u+0x00000001u; // 8019CC6C
L_8019CC70:;
  c->r[4]=c->r[29]|c->r[29]; // 8019CC70
  c->r[3]=c->r[1]+0x00000100u; // 8019CC74
  c->r[5]=c->r[1]+0x00000020u; // 8019CC78
  c->r[7]=0u+0x00000001u; // 8019CC7C
  c->lr=0x8019CC84u; f_8019DF54(c); // 8019CC80
  c->r[31]=c->r[3]|c->r[3]; // 8019CC84
  c->r[3]=c->r[28]|c->r[28]; // 8019CC88
  c->r[4]=0u+0x00000000u; // 8019CC8C
  c->lr=0x8019CC94u; f_8019C2E0(c); // 8019CC90
  cmps(c,0,(int32_t)c->r[31],0); // 8019CC94
  if (!crb(c,2)) { goto L_8019CD20; } // 8019CC98
  c->r[3]=c->r[1]+0x000000A8u; // 8019CC9C
  c->r[4]=0u+0x00000000u; // 8019CCA0
  c->r[5]=0u+0x00000040u; // 8019CCA4
  c->lr=0x8019CCACu; f_8019AA0C(c); // 8019CCA8
  c->r[6]=R32(c->r[13]+0xFFFFA130u); // 8019CCAC
  c->r[7]=0u+0x00000080u; // 8019CCB0
  c->r[4]=R32(c->r[1]+0x00000020u); // 8019CCB4
  c->r[3]=c->r[28]|c->r[28]; // 8019CCB8
  c->r[0]=c->r[6]+0x00000001u; // 8019CCBC
  W8(c->r[1]+0x000000B0u,c->r[31]); // 8019CCC0
  c->r[5]=c->r[4]+0x00000040u; // 8019CCC4
  c->r[4]=c->r[1]+0x000000A8u; // 8019CCC8
  W32(c->r[1]+0x000000A8u,c->r[5]); // 8019CCCC
  c->r[5]=0u+0x00000040u; // 8019CCD0
  W8(c->r[1]+0x000000ACu,c->r[7]); // 8019CCD4
  W32(c->r[1]+0x000000B4u,c->r[6]); // 8019CCD8
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CCDC
  c->lr=0x8019CCE4u; f_8019C338(c); // 8019CCE0
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 8019CCE4
  if (crb(c,2)) { goto L_8019CD0C; } // 8019CCE8
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; // 8019CCEC
  c->r[4]=c->r[1]+0x00000100u; // 8019CCF0
  c->r[5]=R32(c->r[1]+0x00000020u); // 8019CCF4
  c->r[3]=c->r[28]|c->r[28]; // 8019CCF8
  c->r[4]=c->r[4]+c->r[0]; // 8019CCFC
  c->lr=0x8019CD04u; f_8019C338(c); // 8019CD00
  c->r[31]=c->r[3]|c->r[3]; // 8019CD04
  goto L_8019CD20; // 8019CD08
L_8019CD0C:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 8019CD0C
  c->r[3]=c->r[28]|c->r[28]; // 8019CD10
  c->r[4]=c->r[1]+0x00000100u; // 8019CD14
  c->lr=0x8019CD1Cu; f_8019C338(c); // 8019CD18
  c->r[31]=c->r[3]|c->r[3]; // 8019CD1C
L_8019CD20:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019CD20
  if (crb(c,2)) { goto L_8019CDC4; } // 8019CD24
  c->r[0]=c->r[31]+0xFFFFF900u; // 8019CD28
  cmpu(c,0,c->r[0],0x00000006u); // 8019CD2C
  if (crb(c,1)) { goto L_8019CD74; } // 8019CD30
  c->r[3]=0u+0x80330000u; // 8019CD34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8019CD38
  c->r[3]=c->r[3]+0x00000FE8u; // 8019CD3C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8019CD40
  c->ctr=c->r[3]; // 8019CD44
  if (true) { switch (c->ctr) { case 0x8019CD4Cu: goto L_8019CD4C; case 0x8019CD54u: goto L_8019CD54; case 0x8019CD5Cu: goto L_8019CD5C; case 0x8019CD64u: goto L_8019CD64; case 0x8019CD6Cu: goto L_8019CD6C; case 0x8019CD74u: goto L_8019CD74; default: break; } dispatch(c,c->ctr); return; } // 8019CD48
L_8019CD4C:;
  c->r[31]=0u+0x00000015u; // 8019CD4C
  goto L_8019CD78; // 8019CD50
L_8019CD54:;
  c->r[31]=0u+0x00000013u; // 8019CD54
  goto L_8019CD78; // 8019CD58
L_8019CD5C:;
  c->r[31]=0u+0x00000021u; // 8019CD5C
  goto L_8019CD78; // 8019CD60
L_8019CD64:;
  c->r[31]=0u+0x00000022u; // 8019CD64
  goto L_8019CD78; // 8019CD68
L_8019CD6C:;
  c->r[31]=0u+0x00000020u; // 8019CD6C
  goto L_8019CD78; // 8019CD70
L_8019CD74:;
  c->r[31]=0u+0x00000003u; // 8019CD74
L_8019CD78:;
  c->r[3]=c->r[1]+0x00000028u; // 8019CD78
  c->r[4]=0u+0x00000000u; // 8019CD7C
  c->r[5]=0u+0x00000040u; // 8019CD80
  c->lr=0x8019CD88u; f_8019AA0C(c); // 8019CD84
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019CD88
  c->r[0]=0u+0x00000080u; // 8019CD8C
  c->r[4]=0u+0x00000040u; // 8019CD90
  W32(c->r[1]+0x00000028u,c->r[4]); // 8019CD94
  c->r[5]=c->r[3]+0x00000001u; // 8019CD98
  c->r[3]=c->r[1]+0x00000028u; // 8019CD9C
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 8019CDA0
  c->r[0]=c->r[5]+0x00000001u; // 8019CDA4
  c->r[4]=0u+0x00000040u; // 8019CDA8
  W8(c->r[1]+0x00000030u,c->r[31]); // 8019CDAC
  W32(c->r[1]+0x00000034u,c->r[5]); // 8019CDB0
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CDB4
  c->lr=0x8019CDBCu; f_8019B244(c); // 8019CDB8
  c->r[3]=0u+0x00000000u; // 8019CDBC
  goto L_8019CDCC; // 8019CDC0
L_8019CDC4:;
  c->r[3]=c->r[28]|c->r[28]; // 8019CDC4
  c->lr=0x8019CDCCu; f_8019C174(c); // 8019CDC8
L_8019CDCC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8019CDCC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8019CDD0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8019CDD4
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8019CDD8
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8019CDDC
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 8019CDE0
  c->lr=c->r[0]; // 8019CDE4
  c->r[1]=c->r[10]|c->r[10]; // 8019CDE8
  return; // 8019CDEC
}

// fn_8019CDF0
void f_8019CDF0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8019CDF0
  c->r[12]=c->r[1]|c->r[1]; // 8019CDF4
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 8019CDF8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CDFC
  c->r[0]=c->lr; // 8019CE00
  W32(c->r[12]+0x00000004u,c->r[0]); // 8019CE04
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8019CE08
  c->r[31]=0u+0x00000000u; // 8019CE0C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8019CE10
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8019CE14
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 8019CE18
  c->r[28]=c->r[3]|c->r[3]; // 8019CE1C
  c->r[30]=R8(c->r[3]+0x00000014u); // 8019CE20
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8019CE24
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 8019CE28
  c->r[0]=R16(c->r[3]+0x00000018u); // 8019CE2C
  if (crb(c,2)) { goto L_8019CE84; } // 8019CE30
  c->r[3]=c->r[1]+0x00000068u; // 8019CE34
  c->r[4]=0u+0x00000000u; // 8019CE38
  c->r[5]=0u+0x00000040u; // 8019CE3C
  c->lr=0x8019CE44u; f_8019AA0C(c); // 8019CE40
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019CE44
  c->r[0]=0u+0x00000080u; // 8019CE48
  c->r[4]=0u+0x00000040u; // 8019CE4C
  c->r[5]=0u+0x00000012u; // 8019CE50
  c->r[6]=c->r[3]+0x00000001u; // 8019CE54
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 8019CE58
  c->r[0]=c->r[6]+0x00000001u; // 8019CE5C
  c->r[3]=c->r[1]+0x00000068u; // 8019CE60
  W32(c->r[1]+0x00000068u,c->r[4]); // 8019CE64
  c->r[4]=0u+0x00000040u; // 8019CE68
  W8(c->r[1]+0x00000070u,c->r[5]); // 8019CE6C
  W32(c->r[1]+0x00000074u,c->r[6]); // 8019CE70
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CE74
  c->lr=0x8019CE7Cu; f_8019B244(c); // 8019CE78
  c->r[3]=0u+0x00000000u; // 8019CE7C
  goto L_8019CFDC; // 8019CE80
L_8019CE84:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019CE84
  if (!crb(c,2)) { goto L_8019CF30; } // 8019CE88
  W32(c->r[1]+0x00000020u,c->r[0]); // 8019CE8C
  c->r[4]=0u+0x00000040u; // 8019CE90
  c->lr=0x8019CE98u; f_8019C308(c); // 8019CE94
  c->r[5]=R32(c->r[1]+0x00000020u); // 8019CE98
  c->r[3]=c->r[28]|c->r[28]; // 8019CE9C
  c->r[4]=c->r[1]+0x00000100u; // 8019CEA0
  c->lr=0x8019CEA8u; f_8019C3DC(c); // 8019CEA4
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 8019CEA8
  if (crb(c,2)) { goto L_8019CEB8; } // 8019CEAC
  c->r[6]=0u+0x00000000u; // 8019CEB0
  goto L_8019CEBC; // 8019CEB4
L_8019CEB8:;
  c->r[6]=0u+0x00000001u; // 8019CEB8
L_8019CEBC:;
  c->r[4]=c->r[29]|c->r[29]; // 8019CEBC
  c->r[3]=c->r[1]+0x00000100u; // 8019CEC0
  c->r[5]=c->r[1]+0x00000020u; // 8019CEC4
  c->r[7]=0u+0x00000000u; // 8019CEC8
  c->lr=0x8019CED0u; f_8019DF54(c); // 8019CECC
  c->r[31]=c->r[3]|c->r[3]; // 8019CED0
  c->r[3]=c->r[28]|c->r[28]; // 8019CED4
  c->r[4]=0u+0x00000000u; // 8019CED8
  c->lr=0x8019CEE0u; f_8019C2E0(c); // 8019CEDC
  cmps(c,0,(int32_t)c->r[31],0); // 8019CEE0
  if (!crb(c,2)) { goto L_8019CF30; } // 8019CEE4
  c->r[3]=c->r[1]+0x000000A8u; // 8019CEE8
  c->r[4]=0u+0x00000000u; // 8019CEEC
  c->r[5]=0u+0x00000040u; // 8019CEF0
  c->lr=0x8019CEF8u; f_8019AA0C(c); // 8019CEF4
  c->r[6]=R32(c->r[13]+0xFFFFA130u); // 8019CEF8
  c->r[0]=0u+0x00000040u; // 8019CEFC
  c->r[4]=0u+0x00000080u; // 8019CF00
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8019CF04
  c->r[0]=c->r[6]+0x00000001u; // 8019CF08
  c->r[3]=c->r[28]|c->r[28]; // 8019CF0C
  W8(c->r[1]+0x000000ACu,c->r[4]); // 8019CF10
  c->r[4]=c->r[1]+0x000000A8u; // 8019CF14
  c->r[5]=0u+0x00000040u; // 8019CF18
  W8(c->r[1]+0x000000B0u,c->r[31]); // 8019CF1C
  W32(c->r[1]+0x000000B4u,c->r[6]); // 8019CF20
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CF24
  c->lr=0x8019CF2Cu; f_8019C338(c); // 8019CF28
  c->r[31]=c->r[3]|c->r[3]; // 8019CF2C
L_8019CF30:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019CF30
  if (crb(c,2)) { goto L_8019CFD4; } // 8019CF34
  c->r[0]=c->r[31]+0xFFFFF900u; // 8019CF38
  cmpu(c,0,c->r[0],0x00000006u); // 8019CF3C
  if (crb(c,1)) { goto L_8019CF84; } // 8019CF40
  c->r[3]=0u+0x80330000u; // 8019CF44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8019CF48
  c->r[3]=c->r[3]+0x00001004u; // 8019CF4C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8019CF50
  c->ctr=c->r[3]; // 8019CF54
  if (true) { switch (c->ctr) { case 0x8019CF5Cu: goto L_8019CF5C; case 0x8019CF64u: goto L_8019CF64; case 0x8019CF6Cu: goto L_8019CF6C; case 0x8019CF74u: goto L_8019CF74; case 0x8019CF7Cu: goto L_8019CF7C; case 0x8019CF84u: goto L_8019CF84; default: break; } dispatch(c,c->ctr); return; } // 8019CF58
L_8019CF5C:;
  c->r[31]=0u+0x00000015u; // 8019CF5C
  goto L_8019CF88; // 8019CF60
L_8019CF64:;
  c->r[31]=0u+0x00000013u; // 8019CF64
  goto L_8019CF88; // 8019CF68
L_8019CF6C:;
  c->r[31]=0u+0x00000021u; // 8019CF6C
  goto L_8019CF88; // 8019CF70
L_8019CF74:;
  c->r[31]=0u+0x00000022u; // 8019CF74
  goto L_8019CF88; // 8019CF78
L_8019CF7C:;
  c->r[31]=0u+0x00000020u; // 8019CF7C
  goto L_8019CF88; // 8019CF80
L_8019CF84:;
  c->r[31]=0u+0x00000003u; // 8019CF84
L_8019CF88:;
  c->r[3]=c->r[1]+0x00000028u; // 8019CF88
  c->r[4]=0u+0x00000000u; // 8019CF8C
  c->r[5]=0u+0x00000040u; // 8019CF90
  c->lr=0x8019CF98u; f_8019AA0C(c); // 8019CF94
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019CF98
  c->r[0]=0u+0x00000080u; // 8019CF9C
  c->r[4]=0u+0x00000040u; // 8019CFA0
  W32(c->r[1]+0x00000028u,c->r[4]); // 8019CFA4
  c->r[5]=c->r[3]+0x00000001u; // 8019CFA8
  c->r[3]=c->r[1]+0x00000028u; // 8019CFAC
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 8019CFB0
  c->r[0]=c->r[5]+0x00000001u; // 8019CFB4
  c->r[4]=0u+0x00000040u; // 8019CFB8
  W8(c->r[1]+0x00000030u,c->r[31]); // 8019CFBC
  W32(c->r[1]+0x00000034u,c->r[5]); // 8019CFC0
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019CFC4
  c->lr=0x8019CFCCu; f_8019B244(c); // 8019CFC8
  c->r[3]=0u+0x00000000u; // 8019CFCC
  goto L_8019CFDC; // 8019CFD0
L_8019CFD4:;
  c->r[3]=c->r[28]|c->r[28]; // 8019CFD4
  c->lr=0x8019CFDCu; f_8019C174(c); // 8019CFD8
L_8019CFDC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8019CFDC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8019CFE0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8019CFE4
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8019CFE8
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8019CFEC
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 8019CFF0
  c->lr=c->r[0]; // 8019CFF4
  c->r[1]=c->r[10]|c->r[10]; // 8019CFF8
  return; // 8019CFFC
}

// fn_8019D000
void f_8019D000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D000
  c->r[0]=c->lr; // 8019D004
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8019D008
  W32(c->r[1]+0x000000DCu,c->r[31]); // 8019D00C
  c->r[31]=c->r[3]|c->r[3]; // 8019D010
  c->r[4]=R16(c->r[3]+0x00000018u); // 8019D014
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 8019D018
  cmpu(c,0,c->r[4],c->r[0]); // 8019D01C
  if (!crb(c,1)) { goto L_8019D074; } // 8019D020
  c->r[3]=c->r[1]+0x00000050u; // 8019D024
  c->r[4]=0u+0x00000000u; // 8019D028
  c->r[5]=0u+0x00000040u; // 8019D02C
  c->lr=0x8019D034u; f_8019AA0C(c); // 8019D030
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D034
  c->r[0]=0u+0x00000080u; // 8019D038
  c->r[4]=0u+0x00000040u; // 8019D03C
  c->r[5]=0u+0x00000014u; // 8019D040
  c->r[6]=c->r[3]+0x00000001u; // 8019D044
  W8(c->r[1]+0x00000054u,c->r[0]); // 8019D048
  c->r[0]=c->r[6]+0x00000001u; // 8019D04C
  c->r[3]=c->r[1]+0x00000050u; // 8019D050
  W32(c->r[1]+0x00000050u,c->r[4]); // 8019D054
  c->r[4]=0u+0x00000040u; // 8019D058
  W8(c->r[1]+0x00000058u,c->r[5]); // 8019D05C
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 8019D060
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D064
  c->lr=0x8019D06Cu; f_8019B244(c); // 8019D068
  c->r[3]=0u+0x00000000u; // 8019D06C
  goto L_8019D1E8; // 8019D070
L_8019D074:;
  c->r[5]=R32(c->r[13]+0xFFFFA130u); // 8019D074
  c->r[0]=0u+0x00000080u; // 8019D078
  c->r[6]=0u+0x00000468u; // 8019D07C
  W8(c->r[1]+0x00000094u,c->r[0]); // 8019D080
  c->r[0]=c->r[5]+0x00000001u; // 8019D084
  c->r[4]=0u+0x00000000u; // 8019D088
  W32(c->r[1]+0x00000090u,c->r[6]); // 8019D08C
  W32(c->r[1]+0x0000009Cu,c->r[5]); // 8019D090
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D094
  c->lr=0x8019D09Cu; f_8019C2E0(c); // 8019D098
  c->r[3]=c->r[31]|c->r[31]; // 8019D09C
  c->r[4]=c->r[1]+0x00000090u; // 8019D0A0
  c->r[5]=0u+0x00000040u; // 8019D0A4
  c->lr=0x8019D0ACu; f_8019C630(c); // 8019D0A8
  c->r[5]=c->r[31]|c->r[31]; // 8019D0AC
  c->r[6]=c->r[1]+0x00000008u; // 8019D0B0
  c->r[3]=0u+0x00000000u; // 8019D0B4
  c->r[4]=0u+0x00000024u; // 8019D0B8
  c->r[7]=0u+0x00000001u; // 8019D0BC
  c->lr=0x8019D0C4u; f_8019E0A4(c); // 8019D0C0
  cmps(c,0,(int32_t)c->r[3],0); // 8019D0C4
  if (!crb(c,2)) { goto L_8019D0E4; } // 8019D0C8
  c->r[5]=c->r[31]|c->r[31]; // 8019D0CC
  c->r[6]=c->r[1]+0x00000008u; // 8019D0D0
  c->r[3]=0u+0x00000000u; // 8019D0D4
  c->r[4]=0u+0x00000021u; // 8019D0D8
  c->r[7]=0u+0x00000001u; // 8019D0DC
  c->lr=0x8019D0E4u; f_8019E19C(c); // 8019D0E0
L_8019D0E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8019D0E4
  if (!crb(c,2)) { goto L_8019D104; } // 8019D0E8
  c->r[5]=c->r[31]|c->r[31]; // 8019D0EC
  c->r[6]=c->r[1]+0x00000008u; // 8019D0F0
  c->r[3]=0u+0x00000000u; // 8019D0F4
  c->r[4]=0u+0x00000060u; // 8019D0F8
  c->r[7]=0u+0x00000001u; // 8019D0FC
  c->lr=0x8019D104u; f_8019E2D8(c); // 8019D100
L_8019D104:;
  cmps(c,0,(int32_t)c->r[3],0); // 8019D104
  if (!crb(c,2)) { goto L_8019D124; } // 8019D108
  c->r[5]=c->r[31]|c->r[31]; // 8019D10C
  c->r[6]=c->r[1]+0x00000008u; // 8019D110
  c->r[3]=0u+0x00000000u; // 8019D114
  c->r[4]=0u+0x0000001Fu; // 8019D118
  c->r[7]=0u+0x00000001u; // 8019D11C
  c->lr=0x8019D124u; f_8019E43C(c); // 8019D120
L_8019D124:;
  cmps(c,0,(int32_t)c->r[3],0); // 8019D124
  if (crb(c,2)) { goto L_8019D1E0; } // 8019D128
  cmps(c,0,(int32_t)c->r[3],1795); // 8019D12C
  if (crb(c,2)) { goto L_8019D160; } // 8019D130
  cmps(c,0,(int32_t)c->r[3],1793); // 8019D134
  if (crb(c,2)) { goto L_8019D168; } // 8019D138
  cmps(c,0,(int32_t)c->r[3],1794); // 8019D13C
  if (crb(c,2)) { goto L_8019D170; } // 8019D140
  cmps(c,0,(int32_t)c->r[3],1796); // 8019D144
  if (crb(c,2)) { goto L_8019D178; } // 8019D148
  cmps(c,0,(int32_t)c->r[3],1797); // 8019D14C
  if (crb(c,2)) { goto L_8019D180; } // 8019D150
  cmps(c,0,(int32_t)c->r[3],1798); // 8019D154
  if (crb(c,2)) { goto L_8019D188; } // 8019D158
  goto L_8019D190; // 8019D15C
L_8019D160:;
  c->r[31]=0u+0x00000012u; // 8019D160
  goto L_8019D194; // 8019D164
L_8019D168:;
  c->r[31]=0u+0x00000014u; // 8019D168
  goto L_8019D194; // 8019D16C
L_8019D170:;
  c->r[31]=0u+0x00000015u; // 8019D170
  goto L_8019D194; // 8019D174
L_8019D178:;
  c->r[31]=0u+0x00000021u; // 8019D178
  goto L_8019D194; // 8019D17C
L_8019D180:;
  c->r[31]=0u+0x00000022u; // 8019D180
  goto L_8019D194; // 8019D184
L_8019D188:;
  c->r[31]=0u+0x00000020u; // 8019D188
  goto L_8019D194; // 8019D18C
L_8019D190:;
  c->r[31]=0u+0x00000003u; // 8019D190
L_8019D194:;
  c->r[3]=c->r[1]+0x00000010u; // 8019D194
  c->r[4]=0u+0x00000000u; // 8019D198
  c->r[5]=0u+0x00000040u; // 8019D19C
  c->lr=0x8019D1A4u; f_8019AA0C(c); // 8019D1A0
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D1A4
  c->r[0]=0u+0x00000080u; // 8019D1A8
  c->r[4]=0u+0x00000040u; // 8019D1AC
  W32(c->r[1]+0x00000010u,c->r[4]); // 8019D1B0
  c->r[5]=c->r[3]+0x00000001u; // 8019D1B4
  c->r[3]=c->r[1]+0x00000010u; // 8019D1B8
  W8(c->r[1]+0x00000014u,c->r[0]); // 8019D1BC
  c->r[0]=c->r[5]+0x00000001u; // 8019D1C0
  c->r[4]=0u+0x00000040u; // 8019D1C4
  W8(c->r[1]+0x00000018u,c->r[31]); // 8019D1C8
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8019D1CC
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D1D0
  c->lr=0x8019D1D8u; f_8019B244(c); // 8019D1D4
  c->r[3]=0u+0x00000000u; // 8019D1D8
  goto L_8019D1E8; // 8019D1DC
L_8019D1E0:;
  c->r[3]=c->r[31]|c->r[31]; // 8019D1E0
  c->lr=0x8019D1E8u; f_8019C174(c); // 8019D1E4
L_8019D1E8:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8019D1E8
  c->r[31]=R32(c->r[1]+0x000000DCu); // 8019D1EC
  c->lr=c->r[0]; // 8019D1F0
  c->r[1]=c->r[1]+0x000000E0u; // 8019D1F4
  return; // 8019D1F8
}

// fn_8019D1FC
void f_8019D1FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D1FC
  c->r[0]=c->lr; // 8019D200
  c->r[4]=0u+0x00000000u; // 8019D204
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8019D208
  W32(c->r[1]+0x000000DCu,c->r[31]); // 8019D20C
  W32(c->r[1]+0x000000D8u,c->r[30]); // 8019D210
  W32(c->r[1]+0x000000D4u,c->r[29]); // 8019D214
  W32(c->r[1]+0x000000D0u,c->r[28]); // 8019D218
  c->r[28]=c->r[3]|c->r[3]; // 8019D21C
  c->r[31]=R8(c->r[3]+0x00000014u); // 8019D220
  c->r[30]=R16(c->r[3]+0x00000018u); // 8019D224
  c->r[29]=R16(c->r[3]+0x0000001Cu); // 8019D228
  c->lr=0x8019D230u; f_8019C308(c); // 8019D22C
  cmpu(c,0,c->r[30],c->r[29]); // 8019D230
  if (!crb(c,1)) { goto L_8019D288; } // 8019D234
  c->r[3]=c->r[1]+0x00000050u; // 8019D238
  c->r[4]=0u+0x00000000u; // 8019D23C
  c->r[5]=0u+0x00000040u; // 8019D240
  c->lr=0x8019D248u; f_8019AA0C(c); // 8019D244
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D248
  c->r[0]=0u+0x00000080u; // 8019D24C
  c->r[4]=0u+0x00000040u; // 8019D250
  c->r[5]=0u+0x00000014u; // 8019D254
  c->r[6]=c->r[3]+0x00000001u; // 8019D258
  W8(c->r[1]+0x00000054u,c->r[0]); // 8019D25C
  c->r[0]=c->r[6]+0x00000001u; // 8019D260
  c->r[3]=c->r[1]+0x00000050u; // 8019D264
  W32(c->r[1]+0x00000050u,c->r[4]); // 8019D268
  c->r[4]=0u+0x00000040u; // 8019D26C
  W8(c->r[1]+0x00000058u,c->r[5]); // 8019D270
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 8019D274
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D278
  c->lr=0x8019D280u; f_8019B244(c); // 8019D27C
  c->r[3]=0u+0x00000000u; // 8019D280
  goto L_8019D47C; // 8019D284
L_8019D288:;
  c->r[3]=c->r[28]|c->r[28]; // 8019D288
  c->r[4]=0u+0x00000040u; // 8019D28C
  c->lr=0x8019D294u; f_8019C308(c); // 8019D290
  cmps(c,0,(int32_t)c->r[31],0); // 8019D294
  if (crb(c,2)) { goto L_8019D2B8; } // 8019D298
  cmps(c,0,(int32_t)c->r[31],1); // 8019D29C
  if (crb(c,2)) { goto L_8019D2D8; } // 8019D2A0
  cmps(c,0,(int32_t)c->r[31],2); // 8019D2A4
  if (crb(c,2)) { goto L_8019D2F8; } // 8019D2A8
  cmps(c,0,(int32_t)c->r[31],3); // 8019D2AC
  if (crb(c,2)) { goto L_8019D318; } // 8019D2B0
  goto L_8019D338; // 8019D2B4
L_8019D2B8:;
  c->r[3]=c->r[30]|c->r[30]; // 8019D2B8
  c->r[4]=c->r[29]|c->r[29]; // 8019D2BC
  c->r[5]=c->r[28]|c->r[28]; // 8019D2C0
  c->r[6]=c->r[1]+0x00000008u; // 8019D2C4
  c->r[7]=0u+0x00000000u; // 8019D2C8
  c->lr=0x8019D2D0u; f_8019E0A4(c); // 8019D2CC
  c->r[31]=c->r[3]|c->r[3]; // 8019D2D0
  goto L_8019D33C; // 8019D2D4
L_8019D2D8:;
  c->r[3]=c->r[30]|c->r[30]; // 8019D2D8
  c->r[4]=c->r[29]|c->r[29]; // 8019D2DC
  c->r[5]=c->r[28]|c->r[28]; // 8019D2E0
  c->r[6]=c->r[1]+0x00000008u; // 8019D2E4
  c->r[7]=0u+0x00000000u; // 8019D2E8
  c->lr=0x8019D2F0u; f_8019E19C(c); // 8019D2EC
  c->r[31]=c->r[3]|c->r[3]; // 8019D2F0
  goto L_8019D33C; // 8019D2F4
L_8019D2F8:;
  c->r[3]=c->r[30]|c->r[30]; // 8019D2F8
  c->r[4]=c->r[29]|c->r[29]; // 8019D2FC
  c->r[5]=c->r[28]|c->r[28]; // 8019D300
  c->r[6]=c->r[1]+0x00000008u; // 8019D304
  c->r[7]=0u+0x00000000u; // 8019D308
  c->lr=0x8019D310u; f_8019E2D8(c); // 8019D30C
  c->r[31]=c->r[3]|c->r[3]; // 8019D310
  goto L_8019D33C; // 8019D314
L_8019D318:;
  c->r[3]=c->r[30]|c->r[30]; // 8019D318
  c->r[4]=c->r[29]|c->r[29]; // 8019D31C
  c->r[5]=c->r[28]|c->r[28]; // 8019D320
  c->r[6]=c->r[1]+0x00000008u; // 8019D324
  c->r[7]=0u+0x00000000u; // 8019D328
  c->lr=0x8019D330u; f_8019E43C(c); // 8019D32C
  c->r[31]=c->r[3]|c->r[3]; // 8019D330
  goto L_8019D33C; // 8019D334
L_8019D338:;
  c->r[31]=0u+0x00000703u; // 8019D338
L_8019D33C:;
  c->r[3]=c->r[28]|c->r[28]; // 8019D33C
  c->r[4]=0u+0x00000000u; // 8019D340
  c->lr=0x8019D348u; f_8019C2E0(c); // 8019D344
  cmps(c,0,(int32_t)c->r[31],0); // 8019D348
  if (!crb(c,2)) { goto L_8019D398; } // 8019D34C
  c->r[3]=c->r[1]+0x00000090u; // 8019D350
  c->r[4]=0u+0x00000000u; // 8019D354
  c->r[5]=0u+0x00000040u; // 8019D358
  c->lr=0x8019D360u; f_8019AA0C(c); // 8019D35C
  c->r[6]=R32(c->r[13]+0xFFFFA130u); // 8019D360
  c->r[0]=0u+0x00000040u; // 8019D364
  c->r[4]=0u+0x00000080u; // 8019D368
  W32(c->r[1]+0x00000090u,c->r[0]); // 8019D36C
  c->r[0]=c->r[6]+0x00000001u; // 8019D370
  c->r[3]=c->r[28]|c->r[28]; // 8019D374
  W8(c->r[1]+0x00000094u,c->r[4]); // 8019D378
  c->r[4]=c->r[1]+0x00000090u; // 8019D37C
  c->r[5]=0u+0x00000040u; // 8019D380
  W8(c->r[1]+0x00000098u,c->r[31]); // 8019D384
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 8019D388
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D38C
  c->lr=0x8019D394u; f_8019C338(c); // 8019D390
  c->r[31]=c->r[3]|c->r[3]; // 8019D394
L_8019D398:;
  cmps(c,0,(int32_t)c->r[31],1794); // 8019D398
  if (crb(c,2)) { goto L_8019D404; } // 8019D39C
  if (!crb(c,0)) { goto L_8019D3C8; } // 8019D3A0
  cmps(c,0,(int32_t)c->r[31],770); // 8019D3A4
  if (crb(c,2)) { goto L_8019D3FC; } // 8019D3A8
  if (!crb(c,0)) { goto L_8019D3BC; } // 8019D3AC
  cmps(c,0,(int32_t)c->r[31],0); // 8019D3B0
  if (crb(c,2)) { goto L_8019D474; } // 8019D3B4
  goto L_8019D424; // 8019D3B8
L_8019D3BC:;
  cmps(c,0,(int32_t)c->r[31],1793); // 8019D3BC
  if (!crb(c,0)) { goto L_8019D3F4; } // 8019D3C0
  goto L_8019D424; // 8019D3C4
L_8019D3C8:;
  cmps(c,0,(int32_t)c->r[31],1797); // 8019D3C8
  if (crb(c,2)) { goto L_8019D414; } // 8019D3CC
  if (!crb(c,0)) { goto L_8019D3E0; } // 8019D3D0
  cmps(c,0,(int32_t)c->r[31],1796); // 8019D3D4
  if (!crb(c,0)) { goto L_8019D40C; } // 8019D3D8
  goto L_8019D3EC; // 8019D3DC
L_8019D3E0:;
  cmps(c,0,(int32_t)c->r[31],1799); // 8019D3E0
  if (!crb(c,0)) { goto L_8019D424; } // 8019D3E4
  goto L_8019D41C; // 8019D3E8
L_8019D3EC:;
  c->r[31]=0u+0x00000012u; // 8019D3EC
  goto L_8019D428; // 8019D3F0
L_8019D3F4:;
  c->r[31]=0u+0x00000014u; // 8019D3F4
  goto L_8019D428; // 8019D3F8
L_8019D3FC:;
  c->r[31]=0u+0x00000002u; // 8019D3FC
  goto L_8019D428; // 8019D400
L_8019D404:;
  c->r[31]=0u+0x00000015u; // 8019D404
  goto L_8019D428; // 8019D408
L_8019D40C:;
  c->r[31]=0u+0x00000021u; // 8019D40C
  goto L_8019D428; // 8019D410
L_8019D414:;
  c->r[31]=0u+0x00000022u; // 8019D414
  goto L_8019D428; // 8019D418
L_8019D41C:;
  c->r[31]=0u+0x00000020u; // 8019D41C
  goto L_8019D428; // 8019D420
L_8019D424:;
  c->r[31]=0u+0x00000003u; // 8019D424
L_8019D428:;
  c->r[3]=c->r[1]+0x00000010u; // 8019D428
  c->r[4]=0u+0x00000000u; // 8019D42C
  c->r[5]=0u+0x00000040u; // 8019D430
  c->lr=0x8019D438u; f_8019AA0C(c); // 8019D434
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D438
  c->r[0]=0u+0x00000080u; // 8019D43C
  c->r[4]=0u+0x00000040u; // 8019D440
  W32(c->r[1]+0x00000010u,c->r[4]); // 8019D444
  c->r[5]=c->r[3]+0x00000001u; // 8019D448
  c->r[3]=c->r[1]+0x00000010u; // 8019D44C
  W8(c->r[1]+0x00000014u,c->r[0]); // 8019D450
  c->r[0]=c->r[5]+0x00000001u; // 8019D454
  c->r[4]=0u+0x00000040u; // 8019D458
  W8(c->r[1]+0x00000018u,c->r[31]); // 8019D45C
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8019D460
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D464
  c->lr=0x8019D46Cu; f_8019B244(c); // 8019D468
  c->r[3]=0u+0x00000000u; // 8019D46C
  goto L_8019D47C; // 8019D470
L_8019D474:;
  c->r[3]=c->r[28]|c->r[28]; // 8019D474
  c->lr=0x8019D47Cu; f_8019C174(c); // 8019D478
L_8019D47C:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8019D47C
  c->r[31]=R32(c->r[1]+0x000000DCu); // 8019D480
  c->r[30]=R32(c->r[1]+0x000000D8u); // 8019D484
  c->r[29]=R32(c->r[1]+0x000000D4u); // 8019D488
  c->r[28]=R32(c->r[1]+0x000000D0u); // 8019D48C
  c->lr=c->r[0]; // 8019D490
  c->r[1]=c->r[1]+0x000000E0u; // 8019D494
  return; // 8019D498
}

// fn_8019D49C
void f_8019D49C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D49C
  c->r[0]=c->lr; // 8019D4A0
  W32(c->r[1]+0x00000094u,c->r[0]); // 8019D4A4
  c->lr=0x8019D4ACu; f_8019F0C8(c); // 8019D4A8
  cmps(c,0,(int32_t)c->r[3],0); // 8019D4AC
  if (!crb(c,2)) { goto L_8019D504; } // 8019D4B0
  c->r[3]=c->r[1]+0x00000048u; // 8019D4B4
  c->r[4]=0u+0x00000000u; // 8019D4B8
  c->r[5]=0u+0x00000040u; // 8019D4BC
  c->lr=0x8019D4C4u; f_8019AA0C(c); // 8019D4C0
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D4C4
  c->r[0]=0u+0x00000080u; // 8019D4C8
  c->r[4]=0u+0x00000040u; // 8019D4CC
  c->r[5]=0u+0x00000016u; // 8019D4D0
  c->r[6]=c->r[3]+0x00000001u; // 8019D4D4
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 8019D4D8
  c->r[0]=c->r[6]+0x00000001u; // 8019D4DC
  c->r[3]=c->r[1]+0x00000048u; // 8019D4E0
  W32(c->r[1]+0x00000048u,c->r[4]); // 8019D4E4
  c->r[4]=0u+0x00000040u; // 8019D4E8
  W8(c->r[1]+0x00000050u,c->r[5]); // 8019D4EC
  W32(c->r[1]+0x00000054u,c->r[6]); // 8019D4F0
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D4F4
  c->lr=0x8019D4FCu; f_8019B244(c); // 8019D4F8
  c->r[3]=0u+0x00000000u; // 8019D4FC
  goto L_8019D550; // 8019D500
L_8019D504:;
  c->r[3]=c->r[1]+0x00000008u; // 8019D504
  c->r[4]=0u+0x00000000u; // 8019D508
  c->r[5]=0u+0x00000040u; // 8019D50C
  c->lr=0x8019D514u; f_8019AA0C(c); // 8019D510
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D514
  c->r[0]=0u+0x00000080u; // 8019D518
  c->r[4]=0u+0x00000040u; // 8019D51C
  c->r[5]=0u+0x00000000u; // 8019D520
  c->r[6]=c->r[3]+0x00000001u; // 8019D524
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8019D528
  c->r[0]=c->r[6]+0x00000001u; // 8019D52C
  c->r[3]=c->r[1]+0x00000008u; // 8019D530
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019D534
  c->r[4]=0u+0x00000040u; // 8019D538
  W8(c->r[1]+0x00000010u,c->r[5]); // 8019D53C
  W32(c->r[1]+0x00000014u,c->r[6]); // 8019D540
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D544
  c->lr=0x8019D54Cu; f_8019B244(c); // 8019D548
  c->lr=0x8019D550u; f_8019BE18(c); // 8019D54C
L_8019D550:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8019D550
  c->lr=c->r[0]; // 8019D554
  c->r[1]=c->r[1]+0x00000090u; // 8019D558
  return; // 8019D55C
}

// fn_8019D560
void f_8019D560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D560
  c->r[0]=c->lr; // 8019D564
  c->r[4]=0u+0x00000000u; // 8019D568
  W32(c->r[1]+0x00000164u,c->r[0]); // 8019D56C
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 8019D570
  W32(c->r[1]+0x00000158u,c->r[30]); // 8019D574
  c->r[30]=c->r[3]|c->r[3]; // 8019D578
  W32(c->r[1]+0x00000154u,c->r[29]); // 8019D57C
  W32(c->r[1]+0x00000150u,c->r[28]); // 8019D580
  c->lr=0x8019D588u; f_8019C308(c); // 8019D584
  c->r[31]=R8(c->r[30]+0x00000014u); // 8019D588
  c->r[29]=R32(c->r[30]+0x0000001Cu); // 8019D58C
  cmps(c,0,(int32_t)c->r[31],0); // 8019D590
  c->r[28]=R32(c->r[30]+0x00000020u); // 8019D594
  if (crb(c,2)) { goto L_8019D5B8; } // 8019D598
  cmps(c,0,(int32_t)c->r[31],16); // 8019D59C
  if (crb(c,2)) { goto L_8019D5B8; } // 8019D5A0
  cmps(c,0,(int32_t)c->r[31],1); // 8019D5A4
  if (crb(c,2)) { goto L_8019D614; } // 8019D5A8
  cmps(c,0,(int32_t)c->r[31],17); // 8019D5AC
  if (crb(c,2)) { goto L_8019D614; } // 8019D5B0
  goto L_8019D678; // 8019D5B4
L_8019D5B8:;
  c->r[30]=R8(c->r[30]+0x00000018u); // 8019D5B8
  cmpu(c,0,c->r[30],0x00000001u); // 8019D5BC
  if (!crb(c,0)) { goto L_8019D6C8; } // 8019D5C0
  c->r[3]=c->r[1]+0x00000108u; // 8019D5C4
  c->r[4]=0u+0x00000000u; // 8019D5C8
  c->r[5]=0u+0x00000040u; // 8019D5CC
  c->lr=0x8019D5D4u; f_8019AA0C(c); // 8019D5D0
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D5D4
  c->r[0]=0u+0x00000080u; // 8019D5D8
  c->r[4]=0u+0x00000040u; // 8019D5DC
  c->r[5]=0u+0x00000011u; // 8019D5E0
  c->r[6]=c->r[3]+0x00000001u; // 8019D5E4
  W8(c->r[1]+0x0000010Cu,c->r[0]); // 8019D5E8
  c->r[0]=c->r[6]+0x00000001u; // 8019D5EC
  c->r[3]=c->r[1]+0x00000108u; // 8019D5F0
  W32(c->r[1]+0x00000108u,c->r[4]); // 8019D5F4
  c->r[4]=0u+0x00000040u; // 8019D5F8
  W8(c->r[1]+0x00000110u,c->r[5]); // 8019D5FC
  W32(c->r[1]+0x00000114u,c->r[6]); // 8019D600
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D604
  c->lr=0x8019D60Cu; f_8019B244(c); // 8019D608
  c->r[3]=0u+0x00000000u; // 8019D60C
  goto L_8019D7C4; // 8019D610
L_8019D614:;
  c->lr=0x8019D618u; f_8019EEC4(c); // 8019D614
  cmpu(c,0,c->r[3],c->r[29]); // 8019D618
  if (crb(c,0)) { goto L_8019D628; } // 8019D61C
  cmpu(c,0,c->r[3],c->r[28]); // 8019D620
  if (!crb(c,1)) { goto L_8019D6C8; } // 8019D624
L_8019D628:;
  c->r[3]=c->r[1]+0x000000C8u; // 8019D628
  c->r[4]=0u+0x00000000u; // 8019D62C
  c->r[5]=0u+0x00000040u; // 8019D630
  c->lr=0x8019D638u; f_8019AA0C(c); // 8019D634
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D638
  c->r[0]=0u+0x00000080u; // 8019D63C
  c->r[4]=0u+0x00000040u; // 8019D640
  c->r[5]=0u+0x00000011u; // 8019D644
  c->r[6]=c->r[3]+0x00000001u; // 8019D648
  W8(c->r[1]+0x000000CCu,c->r[0]); // 8019D64C
  c->r[0]=c->r[6]+0x00000001u; // 8019D650
  c->r[3]=c->r[1]+0x000000C8u; // 8019D654
  W32(c->r[1]+0x000000C8u,c->r[4]); // 8019D658
  c->r[4]=0u+0x00000040u; // 8019D65C
  W8(c->r[1]+0x000000D0u,c->r[5]); // 8019D660
  W32(c->r[1]+0x000000D4u,c->r[6]); // 8019D664
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D668
  c->lr=0x8019D670u; f_8019B244(c); // 8019D66C
  c->r[3]=0u+0x00000000u; // 8019D670
  goto L_8019D7C4; // 8019D674
L_8019D678:;
  c->r[3]=c->r[1]+0x00000088u; // 8019D678
  c->r[4]=0u+0x00000000u; // 8019D67C
  c->r[5]=0u+0x00000040u; // 8019D680
  c->lr=0x8019D688u; f_8019AA0C(c); // 8019D684
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D688
  c->r[0]=0u+0x00000080u; // 8019D68C
  c->r[4]=0u+0x00000040u; // 8019D690
  c->r[5]=0u+0x00000012u; // 8019D694
  c->r[6]=c->r[3]+0x00000001u; // 8019D698
  W8(c->r[1]+0x0000008Cu,c->r[0]); // 8019D69C
  c->r[0]=c->r[6]+0x00000001u; // 8019D6A0
  c->r[3]=c->r[1]+0x00000088u; // 8019D6A4
  W32(c->r[1]+0x00000088u,c->r[4]); // 8019D6A8
  c->r[4]=0u+0x00000040u; // 8019D6AC
  W8(c->r[1]+0x00000090u,c->r[5]); // 8019D6B0
  W32(c->r[1]+0x00000094u,c->r[6]); // 8019D6B4
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D6B8
  c->lr=0x8019D6C0u; f_8019B244(c); // 8019D6BC
  c->r[3]=0u+0x00000000u; // 8019D6C0
  goto L_8019D7C4; // 8019D6C4
L_8019D6C8:;
  c->lr=0x8019D6CCu; f_8019F0C8(c); // 8019D6C8
  cmps(c,0,(int32_t)c->r[3],0); // 8019D6CC
  if (!crb(c,2)) { goto L_8019D724; } // 8019D6D0
  c->r[3]=c->r[1]+0x00000048u; // 8019D6D4
  c->r[4]=0u+0x00000000u; // 8019D6D8
  c->r[5]=0u+0x00000040u; // 8019D6DC
  c->lr=0x8019D6E4u; f_8019AA0C(c); // 8019D6E0
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D6E4
  c->r[0]=0u+0x00000080u; // 8019D6E8
  c->r[4]=0u+0x00000040u; // 8019D6EC
  c->r[5]=0u+0x00000016u; // 8019D6F0
  c->r[6]=c->r[3]+0x00000001u; // 8019D6F4
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 8019D6F8
  c->r[0]=c->r[6]+0x00000001u; // 8019D6FC
  c->r[3]=c->r[1]+0x00000048u; // 8019D700
  W32(c->r[1]+0x00000048u,c->r[4]); // 8019D704
  c->r[4]=0u+0x00000040u; // 8019D708
  W8(c->r[1]+0x00000050u,c->r[5]); // 8019D70C
  W32(c->r[1]+0x00000054u,c->r[6]); // 8019D710
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D714
  c->lr=0x8019D71Cu; f_8019B244(c); // 8019D718
  c->r[3]=0u+0x00000000u; // 8019D71C
  goto L_8019D7C4; // 8019D720
L_8019D724:;
  c->r[3]=c->r[1]+0x00000008u; // 8019D724
  c->r[4]=0u+0x00000000u; // 8019D728
  c->r[5]=0u+0x00000040u; // 8019D72C
  c->lr=0x8019D734u; f_8019AA0C(c); // 8019D730
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D734
  c->r[0]=0u+0x00000080u; // 8019D738
  c->r[4]=0u+0x00000040u; // 8019D73C
  c->r[5]=0u+0x00000000u; // 8019D740
  c->r[6]=c->r[3]+0x00000001u; // 8019D744
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8019D748
  c->r[0]=c->r[6]+0x00000001u; // 8019D74C
  c->r[3]=c->r[1]+0x00000008u; // 8019D750
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019D754
  c->r[4]=0u+0x00000040u; // 8019D758
  W8(c->r[1]+0x00000010u,c->r[5]); // 8019D75C
  W32(c->r[1]+0x00000014u,c->r[6]); // 8019D760
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D764
  c->lr=0x8019D76Cu; f_8019B244(c); // 8019D768
  cmps(c,0,(int32_t)c->r[31],0); // 8019D76C
  c->r[3]=0u+0x00000000u; // 8019D770
  if (crb(c,2)) { goto L_8019D794; } // 8019D774
  cmps(c,0,(int32_t)c->r[31],16); // 8019D778
  if (crb(c,2)) { goto L_8019D794; } // 8019D77C
  cmps(c,0,(int32_t)c->r[31],1); // 8019D780
  if (crb(c,2)) { goto L_8019D7AC; } // 8019D784
  cmps(c,0,(int32_t)c->r[31],17); // 8019D788
  if (crb(c,2)) { goto L_8019D7AC; } // 8019D78C
  goto L_8019D7C4; // 8019D790
L_8019D794:;
  c->r[0]=c->r[31]+0xFFFFFFF0u; // 8019D794
  c->r[3]=c->r[30]|c->r[30]; // 8019D798
  c->r[0]=cntlz(c->r[0]); // 8019D79C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019D7A0
  c->lr=0x8019D7A8u; f_8019EDC8(c); // 8019D7A4
  goto L_8019D7C4; // 8019D7A8
L_8019D7AC:;
  c->r[0]=c->r[31]+0xFFFFFFEFu; // 8019D7AC
  c->r[3]=c->r[29]|c->r[29]; // 8019D7B0
  c->r[0]=cntlz(c->r[0]); // 8019D7B4
  c->r[4]=c->r[28]|c->r[28]; // 8019D7B8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019D7BC
  c->lr=0x8019D7C4u; f_8019EE50(c); // 8019D7C0
L_8019D7C4:;
  c->r[0]=R32(c->r[1]+0x00000164u); // 8019D7C4
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 8019D7C8
  c->r[30]=R32(c->r[1]+0x00000158u); // 8019D7CC
  c->r[29]=R32(c->r[1]+0x00000154u); // 8019D7D0
  c->r[28]=R32(c->r[1]+0x00000150u); // 8019D7D4
  c->lr=c->r[0]; // 8019D7D8
  c->r[1]=c->r[1]+0x00000160u; // 8019D7DC
  return; // 8019D7E0
}

// fn_8019D7E4
void f_8019D7E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D7E4
  c->r[0]=c->lr; // 8019D7E8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8019D7EC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8019D7F0
  c->lr=0x8019D7F8u; f_8019F0E8(c); // 8019D7F4
  cmps(c,0,(int32_t)c->r[3],0); // 8019D7F8
  if (crb(c,2)) { goto L_8019D81C; } // 8019D7FC
  cmps(c,0,(int32_t)c->r[3],1796); // 8019D800
  if (crb(c,2)) { goto L_8019D824; } // 8019D804
  cmps(c,0,(int32_t)c->r[3],1797); // 8019D808
  if (crb(c,2)) { goto L_8019D82C; } // 8019D80C
  cmps(c,0,(int32_t)c->r[3],1798); // 8019D810
  if (crb(c,2)) { goto L_8019D834; } // 8019D814
  goto L_8019D83C; // 8019D818
L_8019D81C:;
  c->r[31]=0u+0x00000000u; // 8019D81C
  goto L_8019D840; // 8019D820
L_8019D824:;
  c->r[31]=0u+0x00000021u; // 8019D824
  goto L_8019D840; // 8019D828
L_8019D82C:;
  c->r[31]=0u+0x00000022u; // 8019D82C
  goto L_8019D840; // 8019D830
L_8019D834:;
  c->r[31]=0u+0x00000020u; // 8019D834
  goto L_8019D840; // 8019D838
L_8019D83C:;
  c->r[31]=0u+0x00000001u; // 8019D83C
L_8019D840:;
  c->r[3]=c->r[1]+0x00000008u; // 8019D840
  c->r[4]=0u+0x00000000u; // 8019D844
  c->r[5]=0u+0x00000040u; // 8019D848
  c->lr=0x8019D850u; f_8019AA0C(c); // 8019D84C
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D850
  c->r[0]=0u+0x00000080u; // 8019D854
  c->r[4]=0u+0x00000040u; // 8019D858
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019D85C
  c->r[5]=c->r[3]+0x00000001u; // 8019D860
  c->r[3]=c->r[1]+0x00000008u; // 8019D864
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8019D868
  c->r[0]=c->r[5]+0x00000001u; // 8019D86C
  c->r[4]=0u+0x00000040u; // 8019D870
  W8(c->r[1]+0x00000010u,c->r[31]); // 8019D874
  W32(c->r[1]+0x00000014u,c->r[5]); // 8019D878
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D87C
  c->lr=0x8019D884u; f_8019B244(c); // 8019D880
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8019D884
  c->r[3]=0u+0x00000000u; // 8019D888
  c->r[0]=R32(c->r[1]+0x00000054u); // 8019D88C
  c->lr=c->r[0]; // 8019D890
  c->r[1]=c->r[1]+0x00000050u; // 8019D894
  return; // 8019D898
}

// fn_8019D89C
void f_8019D89C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D89C
  c->r[0]=c->lr; // 8019D8A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8019D8A4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8019D8A8
  W32(c->r[1]+0x00000048u,c->r[30]); // 8019D8AC
  c->r[0]=R8(c->r[3]+0x00000014u); // 8019D8B0
  c->r[30]=R8(c->r[3]+0x00000018u); // 8019D8B4
  cmpu(c,0,c->r[0],0x00000001u); // 8019D8B8
  if (!crb(c,2)) { goto L_8019D904; } // 8019D8BC
  c->r[31]=0u+0x80330000u; // 8019D8C0
  c->r[3]=c->r[31]+0x00001020u; // 8019D8C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019D8C8
  c->lr=0x8019D8D0u; f_8015CED8(c); // 8019D8CC
  cmps(c,0,(int32_t)c->r[30],0); // 8019D8D0
  if (crb(c,2)) { goto L_8019D8EC; } // 8019D8D4
  c->r[3]=c->r[31]+0x00001020u; // 8019D8D8
  c->r[3]=c->r[3]+0x0000001Fu; // 8019D8DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019D8E0
  c->lr=0x8019D8E8u; f_8015CED8(c); // 8019D8E4
  goto L_8019D8FC; // 8019D8E8
L_8019D8EC:;
  c->r[3]=c->r[31]+0x00001020u; // 8019D8EC
  c->r[3]=c->r[3]+0x00000027u; // 8019D8F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8019D8F4
  c->lr=0x8019D8FCu; f_8015CED8(c); // 8019D8F8
L_8019D8FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8019D8FC
  c->lr=0x8019D904u; f_8019F5A4(c); // 8019D900
L_8019D904:;
  c->r[3]=c->r[1]+0x00000008u; // 8019D904
  c->r[4]=0u+0x00000000u; // 8019D908
  c->r[5]=0u+0x00000040u; // 8019D90C
  c->lr=0x8019D914u; f_8019AA0C(c); // 8019D910
  c->r[3]=R32(c->r[13]+0xFFFFA130u); // 8019D914
  c->r[0]=0u+0x00000080u; // 8019D918
  c->r[4]=0u+0x00000040u; // 8019D91C
  c->r[5]=0u+0x00000000u; // 8019D920
  c->r[6]=c->r[3]+0x00000001u; // 8019D924
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8019D928
  c->r[0]=c->r[6]+0x00000001u; // 8019D92C
  c->r[3]=c->r[1]+0x00000008u; // 8019D930
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019D934
  c->r[4]=0u+0x00000040u; // 8019D938
  W8(c->r[1]+0x00000010u,c->r[5]); // 8019D93C
  W32(c->r[1]+0x00000014u,c->r[6]); // 8019D940
  W32(c->r[13]+0xFFFFA130u,c->r[0]); // 8019D944
  c->lr=0x8019D94Cu; f_8019B244(c); // 8019D948
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8019D94C
  c->r[3]=0u+0x00000000u; // 8019D950
  c->r[30]=R32(c->r[1]+0x00000048u); // 8019D954
  c->r[0]=R32(c->r[1]+0x00000054u); // 8019D958
  c->lr=c->r[0]; // 8019D95C
  c->r[1]=c->r[1]+0x00000050u; // 8019D960
  return; // 8019D964
}

// fn_8019D968
void f_8019D968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D968
  c->r[0]=c->lr; // 8019D96C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019D970
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019D974
  c->r[31]=c->r[6]|c->r[6]; // 8019D978
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019D97C
  c->r[30]=c->r[5]|c->r[5]; // 8019D980
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019D984
  c->r[29]=c->r[4]|c->r[4]; // 8019D988
  c->lr=0x8019D990u; f_8019F5AC(c); // 8019D98C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8019D990
  if (!crb(c,2)) { goto L_8019D9A0; } // 8019D994
  c->r[3]=0u+0x00000001u; // 8019D998
  goto L_8019D9B4; // 8019D99C
L_8019D9A0:;
  c->r[4]=c->r[29]|c->r[29]; // 8019D9A0
  c->r[5]=c->r[30]|c->r[30]; // 8019D9A4
  c->r[6]=c->r[31]|c->r[31]; // 8019D9A8
  c->r[3]=0u+0x00000000u; // 8019D9AC
  c->lr=0x8019D9B4u; f_8019DA38(c); // 8019D9B0
L_8019D9B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019D9B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019D9B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019D9BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019D9C0
  c->lr=c->r[0]; // 8019D9C4
  c->r[1]=c->r[1]+0x00000020u; // 8019D9C8
  return; // 8019D9CC
}

// fn_8019D9D0
void f_8019D9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D9D0
  c->r[0]=c->lr; // 8019D9D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019D9D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019D9DC
  c->r[31]=c->r[6]|c->r[6]; // 8019D9E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019D9E4
  c->r[30]=c->r[5]|c->r[5]; // 8019D9E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019D9EC
  c->r[29]=c->r[4]|c->r[4]; // 8019D9F0
  c->lr=0x8019D9F8u; f_8019F5AC(c); // 8019D9F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8019D9F8
  if (!crb(c,2)) { goto L_8019DA08; } // 8019D9FC
  c->r[3]=0u+0x00000001u; // 8019DA00
  goto L_8019DA1C; // 8019DA04
L_8019DA08:;
  c->r[4]=c->r[29]|c->r[29]; // 8019DA08
  c->r[5]=c->r[30]|c->r[30]; // 8019DA0C
  c->r[6]=c->r[31]|c->r[31]; // 8019DA10
  c->r[3]=0u+0x00000001u; // 8019DA14
  c->lr=0x8019DA1Cu; f_8019DA40(c); // 8019DA18
L_8019DA1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019DA1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019DA20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019DA24
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019DA28
  c->lr=c->r[0]; // 8019DA2C
  c->r[1]=c->r[1]+0x00000020u; // 8019DA30
  return; // 8019DA34
}

// fn_8019DA38
void f_8019DA38(Ctx* __restrict c) {
  c->r[7]=0u+0x000000D1u; // 8019DA38
  f_8019DCD4(c); return; // 8019DA3C
}

// fn_8019DA40
void f_8019DA40(Ctx* __restrict c) {
  c->r[7]=0u+0x000000D0u; // 8019DA40
  f_8019DCD4(c); return; // 8019DA44
}

// fn_8019DA48
void f_8019DA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DA48
  c->r[0]=c->lr; // 8019DA4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019DA50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019DA54
  c->r[31]=c->r[5]|c->r[5]; // 8019DA58
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019DA5C
  c->r[30]=c->r[4]|c->r[4]; // 8019DA60
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019DA64
  c->r[29]=c->r[3]|c->r[3]; // 8019DA68
  c->lr=0x8019DA70u; f_8019C9E4(c); // 8019DA6C
  cmps(c,0,(int32_t)c->r[3],0); // 8019DA70
  if (!crb(c,2)) { goto L_8019DA80; } // 8019DA74
  c->r[3]=0u+0x00000001u; // 8019DA78
  goto L_8019DAC8; // 8019DA7C
L_8019DA80:;
  c->r[3]=c->r[30]|c->r[30]; // 8019DA80
  c->lr=0x8019DA88u; f_8019DC1C(c); // 8019DA84
  c->r[0]=c->r[3]|c->r[3]; // 8019DA88
  c->r[4]=c->r[29]|c->r[29]; // 8019DA8C
  c->r[6]=c->r[31]|c->r[31]; // 8019DA90
  c->r[3]=0u+0x000000D2u; // 8019DA94
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8019DA98
  c->lr=0x8019DAA0u; f_8019A268(c); // 8019DA9C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8019DAA0
  if (crb(c,2)) { goto L_8019DAB4; } // 8019DAA4
  cmps(c,0,(int32_t)c->r[0],2); // 8019DAA8
  if (crb(c,2)) { goto L_8019DABC; } // 8019DAAC
  goto L_8019DAC4; // 8019DAB0
L_8019DAB4:;
  c->r[3]=0u+0x00000000u; // 8019DAB4
  goto L_8019DAC8; // 8019DAB8
L_8019DABC:;
  c->r[3]=0u+0x00000002u; // 8019DABC
  goto L_8019DAC8; // 8019DAC0
L_8019DAC4:;
  c->r[3]=0u+0x00000001u; // 8019DAC4
L_8019DAC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019DAC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019DACC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019DAD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019DAD4
  c->lr=c->r[0]; // 8019DAD8
  c->r[1]=c->r[1]+0x00000020u; // 8019DADC
  return; // 8019DAE0
}

// fn_8019DAE4
void f_8019DAE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DAE4
  c->r[0]=c->lr; // 8019DAE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DAEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DAF0
  c->r[31]=c->r[3]|c->r[3]; // 8019DAF4
  c->lr=0x8019DAFCu; f_8019C9E4(c); // 8019DAF8
  cmps(c,0,(int32_t)c->r[3],0); // 8019DAFC
  if (!crb(c,2)) { goto L_8019DB0C; } // 8019DB00
  c->r[3]=0u+0x00000001u; // 8019DB04
  goto L_8019DB40; // 8019DB08
L_8019DB0C:;
  c->r[4]=c->r[31]|c->r[31]; // 8019DB0C
  c->r[3]=0u+0x000000D3u; // 8019DB10
  c->lr=0x8019DB18u; f_8019A270(c); // 8019DB14
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8019DB18
  if (crb(c,2)) { goto L_8019DB2C; } // 8019DB1C
  cmps(c,0,(int32_t)c->r[0],2); // 8019DB20
  if (crb(c,2)) { goto L_8019DB34; } // 8019DB24
  goto L_8019DB3C; // 8019DB28
L_8019DB2C:;
  c->r[3]=0u+0x00000000u; // 8019DB2C
  goto L_8019DB40; // 8019DB30
L_8019DB34:;
  c->r[3]=0u+0x00000002u; // 8019DB34
  goto L_8019DB40; // 8019DB38
L_8019DB3C:;
  c->r[3]=0u+0x00000001u; // 8019DB3C
L_8019DB40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DB40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DB44
  c->lr=c->r[0]; // 8019DB48
  c->r[1]=c->r[1]+0x00000010u; // 8019DB4C
  return; // 8019DB50
}

// fn_8019DB54
void f_8019DB54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DB54
  c->r[0]=c->lr; // 8019DB58
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019DB5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019DB60
  c->r[31]=0u+0x00000000u; // 8019DB64
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019DB68
  c->r[30]=c->r[5]|c->r[5]; // 8019DB6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019DB70
  c->r[29]=c->r[4]|c->r[4]; // 8019DB74
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019DB78
  c->r[28]=c->r[3]|c->r[3]; // 8019DB7C
  c->lr=0x8019DB84u; f_8019C9E4(c); // 8019DB80
  cmps(c,0,(int32_t)c->r[3],0); // 8019DB84
  if (!crb(c,2)) { goto L_8019DB94; } // 8019DB88
  c->r[3]=0u+0x00000001u; // 8019DB8C
  goto L_8019DBFC; // 8019DB90
L_8019DB94:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019DB94
  if (!crb(c,2)) { goto L_8019DBA4; } // 8019DB98
  c->r[31]=0u+0x00000000u; // 8019DB9C
  goto L_8019DBC0; // 8019DBA0
L_8019DBA4:;
  cmps(c,0,(int32_t)c->r[30],1); // 8019DBA4
  if (!crb(c,2)) { goto L_8019DBB4; } // 8019DBA8
  c->r[31]=0u+0x00000001u; // 8019DBAC
  goto L_8019DBC0; // 8019DBB0
L_8019DBB4:;
  cmps(c,0,(int32_t)c->r[30],2); // 8019DBB4
  if (!crb(c,2)) { goto L_8019DBC0; } // 8019DBB8
  c->r[31]=0u+0x00000002u; // 8019DBBC
L_8019DBC0:;
  c->r[4]=c->r[28]|c->r[28]; // 8019DBC0
  c->r[5]=c->r[29]|c->r[29]; // 8019DBC4
  c->r[6]=c->r[31]|c->r[31]; // 8019DBC8
  c->r[3]=0u+0x000000D4u; // 8019DBCC
  c->lr=0x8019DBD4u; f_8019A278(c); // 8019DBD0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8019DBD4
  if (crb(c,2)) { goto L_8019DBE8; } // 8019DBD8
  cmps(c,0,(int32_t)c->r[0],2); // 8019DBDC
  if (crb(c,2)) { goto L_8019DBF0; } // 8019DBE0
  goto L_8019DBF8; // 8019DBE4
L_8019DBE8:;
  c->r[3]=0u+0x00000000u; // 8019DBE8
  goto L_8019DBFC; // 8019DBEC
L_8019DBF0:;
  c->r[3]=0u+0x00000002u; // 8019DBF0
  goto L_8019DBFC; // 8019DBF4
L_8019DBF8:;
  c->r[3]=0u+0x00000001u; // 8019DBF8
L_8019DBFC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019DBFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019DC00
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019DC04
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019DC08
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019DC0C
  c->lr=c->r[0]; // 8019DC10
  c->r[1]=c->r[1]+0x00000020u; // 8019DC14
  return; // 8019DC18
}

// fn_8019DC1C
void f_8019DC1C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8019DC1C
  c->r[3]=0u+0x00000000u; // 8019DC20
  c->r[4]=rotl(c->r[0],2)&0x00000003u; cr0(c,c->r[4]); // 8019DC24
  c->r[5]=rotl(c->r[0],5)&0x00000007u; // 8019DC28
  c->r[6]=rotl(c->r[0],13)&0x00000001u; // 8019DC2C
  if (crb(c,2)) { goto L_8019DC48; } // 8019DC30
  cmps(c,0,(int32_t)c->r[4],2); // 8019DC34
  if (crb(c,2)) { goto L_8019DC50; } // 8019DC38
  cmps(c,0,(int32_t)c->r[4],1); // 8019DC3C
  if (crb(c,2)) { goto L_8019DC58; } // 8019DC40
  goto L_8019DC5C; // 8019DC44
L_8019DC48:;
  c->r[3]=c->r[3]|0x00000001u; // 8019DC48
  goto L_8019DC5C; // 8019DC4C
L_8019DC50:;
  c->r[3]=c->r[3]|0x00000002u; // 8019DC50
  goto L_8019DC5C; // 8019DC54
L_8019DC58:;
  c->r[3]=c->r[3]|0x00000004u; // 8019DC58
L_8019DC5C:;
  cmps(c,0,(int32_t)c->r[5],1); // 8019DC5C
  if (crb(c,2)) { goto L_8019DC88; } // 8019DC60
  cmps(c,0,(int32_t)c->r[5],2); // 8019DC64
  if (crb(c,2)) { goto L_8019DC94; } // 8019DC68
  cmps(c,0,(int32_t)c->r[5],6); // 8019DC6C
  if (crb(c,2)) { goto L_8019DCA0; } // 8019DC70
  cmps(c,0,(int32_t)c->r[5],3); // 8019DC74
  if (crb(c,2)) { goto L_8019DCAC; } // 8019DC78
  cmps(c,0,(int32_t)c->r[5],7); // 8019DC7C
  if (crb(c,2)) { goto L_8019DCB8; } // 8019DC80
  goto L_8019DCC0; // 8019DC84
L_8019DC88:;
  c->r[0]=c->r[3]|0x00000001u; // 8019DC88
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8019DC8C
  goto L_8019DCC0; // 8019DC90
L_8019DC94:;
  c->r[0]=c->r[3]|0x00000002u; // 8019DC94
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8019DC98
  goto L_8019DCC0; // 8019DC9C
L_8019DCA0:;
  c->r[0]=c->r[3]|0x00000004u; // 8019DCA0
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8019DCA4
  goto L_8019DCC0; // 8019DCA8
L_8019DCAC:;
  c->r[0]=c->r[3]|0x00000012u; // 8019DCAC
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8019DCB0
  goto L_8019DCC0; // 8019DCB4
L_8019DCB8:;
  c->r[0]=c->r[3]|0x00000007u; // 8019DCB8
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8019DCBC
L_8019DCC0:;
  cmpu(c,0,c->r[6],0x00000001u); // 8019DCC0
  if (!crb(c,2)) return; // 8019DCC4
  c->r[0]=c->r[3]|0x00000008u; // 8019DCC8
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8019DCCC
  return; // 8019DCD0
}

// fn_8019DCD4
void f_8019DCD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DCD4
  c->r[0]=c->lr; // 8019DCD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019DCDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019DCE0
  c->r[31]=c->r[7]|c->r[7]; // 8019DCE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019DCE8
  c->r[30]=c->r[5]|c->r[5]; // 8019DCEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019DCF0
  c->r[29]=c->r[4]|c->r[4]; // 8019DCF4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019DCF8
  c->r[28]=c->r[3]|c->r[3]; // 8019DCFC
  c->lr=0x8019DD04u; f_8019C9E4(c); // 8019DD00
  cmps(c,0,(int32_t)c->r[3],0); // 8019DD04
  if (!crb(c,2)) { goto L_8019DD14; } // 8019DD08
  c->r[3]=0u+0x00000001u; // 8019DD0C
  goto L_8019DD60; // 8019DD10
L_8019DD14:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8019DD14
  c->r[3]=c->r[31]|c->r[31]; // 8019DD18
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019DD1C
  c->r[4]=c->r[28]|c->r[28]; // 8019DD20
  c->r[6]=c->r[29]|c->r[29]; // 8019DD24
  c->r[5]=c->r[1]+0x00000008u; // 8019DD28
  c->lr=0x8019DD30u; f_8019A260(c); // 8019DD2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8019DD30
  c->r[3]=R32(c->r[1]+0x00000008u); // 8019DD34
  W32(c->r[30]+0x00000000u,c->r[3]); // 8019DD38
  if (crb(c,2)) { goto L_8019DD4C; } // 8019DD3C
  cmps(c,0,(int32_t)c->r[0],2); // 8019DD40
  if (crb(c,2)) { goto L_8019DD54; } // 8019DD44
  goto L_8019DD5C; // 8019DD48
L_8019DD4C:;
  c->r[3]=0u+0x00000000u; // 8019DD4C
  goto L_8019DD60; // 8019DD50
L_8019DD54:;
  c->r[3]=0u+0x00000002u; // 8019DD54
  goto L_8019DD60; // 8019DD58
L_8019DD5C:;
  c->r[3]=0u+0x00000001u; // 8019DD5C
L_8019DD60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019DD60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019DD64
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019DD68
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019DD6C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019DD70
  c->lr=c->r[0]; // 8019DD74
  c->r[1]=c->r[1]+0x00000020u; // 8019DD78
  return; // 8019DD7C
}

// fn_8019DD80
void f_8019DD80(Ctx* __restrict c) {
  c->r[3]=c->msr; // 8019DD80
  return; // 8019DD84
}

// fn_8019DD88
void f_8019DD88(Ctx* __restrict c) {
  c->msr=c->r[3]; // 8019DD88
  return; // 8019DD8C
}

// fn_8019DD90
void f_8019DD90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DD90
  c->r[0]=c->lr; // 8019DD94
  c->r[4]=c->r[4]+c->r[3]; // 8019DD98
  c->r[6]=0u+0x00000700u; // 8019DD9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DDA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DDA4
  c->r[31]=c->r[4]+0xFFFFFFFFu; // 8019DDA8
  cmpu(c,0,c->r[31],c->r[3]); // 8019DDAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019DDB0
  c->r[30]=c->r[5]|c->r[5]; // 8019DDB4
  if (!crb(c,0)) { goto L_8019DDC4; } // 8019DDB8
  c->r[3]=0u+0x00000700u; // 8019DDBC
  goto L_8019DE70; // 8019DDC0
L_8019DDC4:;
  c->r[4]=0u+0x802E0000u; // 8019DDC4
  c->r[4]=c->r[4]+0x00000DD0u; // 8019DDC8
  c->r[0]=R32(c->r[4]+0x00000004u); // 8019DDCC
  cmpu(c,0,c->r[3],c->r[0]); // 8019DDD0
  if (crb(c,1)) { goto L_8019DE6C; } // 8019DDD4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8019DDD8
  cmpu(c,0,c->r[31],c->r[0]); // 8019DDDC
  if (crb(c,0)) { goto L_8019DE6C; } // 8019DDE0
  cmps(c,0,(int32_t)c->r[5],0); // 8019DDE4
  if (!crb(c,2)) { goto L_8019DDF8; } // 8019DDE8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8019DDEC
  cmps(c,0,(int32_t)c->r[0],0); // 8019DDF0
  if (crb(c,2)) { goto L_8019DE14; } // 8019DDF4
L_8019DDF8:;
  cmps(c,0,(int32_t)c->r[5],1); // 8019DDF8
  if (!crb(c,2)) { goto L_8019DE1C; } // 8019DDFC
  c->r[4]=0u+0x802E0000u; // 8019DE00
  c->r[4]=c->r[4]+0x00000DD0u; // 8019DE04
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8019DE08
  cmps(c,0,(int32_t)c->r[0],0); // 8019DE0C
  if (!crb(c,2)) { goto L_8019DE1C; } // 8019DE10
L_8019DE14:;
  c->r[6]=0u+0x00000700u; // 8019DE14
  goto L_8019DE6C; // 8019DE18
L_8019DE1C:;
  c->r[4]=0u+0x802E0000u; // 8019DE1C
  c->r[6]=0u+0x00000000u; // 8019DE20
  c->r[0]=R32(c->r[4]+0x00000DD0u); // 8019DE24
  cmpu(c,0,c->r[3],c->r[0]); // 8019DE28
  if (!crb(c,0)) { goto L_8019DE40; } // 8019DE2C
  c->r[5]=c->r[30]|c->r[30]; // 8019DE30
  c->r[4]=c->r[0]-c->r[3]; // 8019DE34
  c->lr=0x8019DE3Cu; f_8019DD90(c); // 8019DE38
  c->r[6]=c->r[3]|c->r[3]; // 8019DE3C
L_8019DE40:;
  cmps(c,0,(int32_t)c->r[6],0); // 8019DE40
  if (!crb(c,2)) { goto L_8019DE6C; } // 8019DE44
  c->r[3]=0u+0x802E0000u; // 8019DE48
  c->r[3]=c->r[3]+0x00000DD0u; // 8019DE4C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8019DE50
  cmpu(c,0,c->r[31],c->r[3]); // 8019DE54
  if (!crb(c,1)) { goto L_8019DE6C; } // 8019DE58
  c->r[5]=c->r[30]|c->r[30]; // 8019DE5C
  c->r[4]=c->r[31]-c->r[3]; // 8019DE60
  c->lr=0x8019DE68u; f_8019DD90(c); // 8019DE64
  c->r[6]=c->r[3]|c->r[3]; // 8019DE68
L_8019DE6C:;
  c->r[3]=c->r[6]|c->r[6]; // 8019DE6C
L_8019DE70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DE70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DE74
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019DE78
  c->lr=c->r[0]; // 8019DE7C
  c->r[1]=c->r[1]+0x00000010u; // 8019DE80
  return; // 8019DE84
}

// fn_8019DE88
void f_8019DE88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DE88
  c->r[0]=c->lr; // 8019DE8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019DE90
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019DE94
  c->r[29]=c->r[3]|c->r[3]; // 8019DE98
  c->r[30]=c->r[4]|c->r[4]; // 8019DE9C
  c->r[26]=c->r[5]|c->r[5]; // 8019DEA0
  c->r[27]=c->r[6]|c->r[6]; // 8019DEA4
  c->r[28]=c->r[7]|c->r[7]; // 8019DEA8
  c->lr=0x8019DEB0u; f_8019DD80(c); // 8019DEAC
  c->r[31]=c->r[3]|c->r[3]; // 8019DEB0
  c->r[25]=0u+0x000000FFu; // 8019DEB4
  goto L_8019DF30; // 8019DEB8
L_8019DEBC:;
  c->r[3]=c->r[28]|c->r[28]; // 8019DEBC
  c->lr=0x8019DEC4u; f_8019DD88(c); // 8019DEC0
  c->r[3]=rotl(c->r[30],0)&0xFFFFFFFCu; // 8019DEC4
  c->r[0]=c->r[30]-c->r[3]; // 8019DEC8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8019DECC
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8019DED0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019DED4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 8019DED8
  c->r[24]=rotl(c->r[0],0)&0x000000FFu; // 8019DEDC
  /* sync */ // 8019DEE0
  c->r[3]=c->r[27]|c->r[27]; // 8019DEE4
  c->lr=0x8019DEECu; f_8019DD88(c); // 8019DEE8
  c->r[6]=rotl(c->r[29],0)&0xFFFFFFFCu; // 8019DEEC
  c->r[0]=c->r[29]-c->r[6]; // 8019DEF0
  c->r[5]=R32(c->r[6]+0x00000000u); // 8019DEF4
  c->r[3]=addc(c,~c->r[0],0x00000003u,1); // 8019DEF8
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 8019DEFC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8019DF00
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8019DF04
  c->r[4]=((c->r[3])&0x20)?0u:(c->r[25]<<((c->r[3])&31)); // 8019DF08
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[24]<<((c->r[0])&31)); // 8019DF0C
  c->r[3]=c->r[5]&~c->r[4]; // 8019DF10
  c->r[0]=c->r[4]&c->r[0]; // 8019DF14
  c->r[0]=c->r[3]|c->r[0]; // 8019DF18
  W32(c->r[6]+0x00000000u,c->r[0]); // 8019DF1C
  /* sync */ // 8019DF20
  c->r[30]=c->r[30]+0x00000001u; // 8019DF24
  c->r[29]=c->r[29]+0x00000001u; // 8019DF28
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 8019DF2C
L_8019DF30:;
  cmps(c,0,(int32_t)c->r[26],0); // 8019DF30
  if (!crb(c,2)) { IRQCHK(c); goto L_8019DEBC; } // 8019DF34
  c->r[3]=c->r[31]|c->r[31]; // 8019DF38
  c->lr=0x8019DF40u; f_8019DD88(c); // 8019DF3C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019DF40
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019DF44
  c->lr=c->r[0]; // 8019DF48
  c->r[1]=c->r[1]+0x00000030u; // 8019DF4C
  return; // 8019DF50
}

// fn_8019DF54
void f_8019DF54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DF54
  c->r[0]=c->lr; // 8019DF58
  c->r[8]=0u+0x80330000u; // 8019DF5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8019DF60
  c->r[8]=c->r[8]+0x00001050u; // 8019DF64
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019DF68
  c->r[26]=c->r[4]|c->r[4]; // 8019DF6C
  c->r[31]=c->r[5]|c->r[5]; // 8019DF70
  c->r[25]=c->r[3]|c->r[3]; // 8019DF74
  c->r[30]=0u+0x00000000u; // 8019DF78
  c->r[27]=c->r[7]|c->r[7]; // 8019DF7C
  c->r[3]=c->r[26]|c->r[26]; // 8019DF80
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 8019DF84
  c->r[6]=R32(c->r[8]+0x00000000u); // 8019DF88
  c->r[5]=R32(c->r[8]+0x00000004u); // 8019DF8C
  c->r[4]=R32(c->r[8]+0x00000008u); // 8019DF90
  W32(c->r[1]+0x00000008u,c->r[6]); // 8019DF94
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8019DF98
  W32(c->r[1]+0x00000010u,c->r[4]); // 8019DF9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DFA0
  W8(c->r[8]+0x0000000Du,c->r[30]); // 8019DFA4
  c->lr=0x8019DFACu; f_8019AD84(c); // 8019DFA8
  c->r[0]=cntlz(c->r[27]); // 8019DFAC
  c->r[4]=R32(c->r[31]+0x00000000u); // 8019DFB0
  c->r[28]=c->r[3]|c->r[3]; // 8019DFB4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019DFB8
  c->lr=0x8019DFC0u; f_8019DD90(c); // 8019DFBC
  cmps(c,0,(int32_t)c->r[3],0); // 8019DFC0
  c->r[29]=c->r[3]|c->r[3]; // 8019DFC4
  if (crb(c,2)) { goto L_8019DFD4; } // 8019DFC8
  W32(c->r[31]+0x00000000u,c->r[30]); // 8019DFCC
  goto L_8019E048; // 8019DFD0
L_8019DFD4:;
  c->lr=0x8019DFD8u; f_8019DD80(c); // 8019DFD4
  c->r[4]=0u+0x80390000u; // 8019DFD8
  cmps(c,0,(int32_t)c->r[27],0); // 8019DFDC
  c->r[4]=c->r[4]+0x00001D00u; // 8019DFE0
  c->r[8]=c->r[3]|c->r[3]; // 8019DFE4
  c->r[0]=R32(c->r[4]+0x000001F8u); // 8019DFE8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 8019DFEC
  c->r[7]=c->r[3]|c->r[0]; // 8019DFF0
  if (crb(c,2)) { goto L_8019E010; } // 8019DFF4
  c->r[5]=R32(c->r[31]+0x00000000u); // 8019DFF8
  c->r[3]=c->r[25]|c->r[25]; // 8019DFFC
  c->r[4]=c->r[28]|c->r[28]; // 8019E000
  c->r[6]=c->r[8]|c->r[8]; // 8019E004
  c->lr=0x8019E00Cu; f_8019DE88(c); // 8019E008
  goto L_8019E048; // 8019E00C
L_8019E010:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 8019E010
  c->r[6]=c->r[7]|c->r[7]; // 8019E014
  c->r[3]=c->r[28]|c->r[28]; // 8019E018
  c->r[4]=c->r[25]|c->r[25]; // 8019E01C
  c->r[7]=c->r[8]|c->r[8]; // 8019E020
  c->lr=0x8019E028u; f_8019DE88(c); // 8019E024
  c->r[4]=R32(c->r[31]+0x00000000u); // 8019E028
  c->r[3]=c->r[28]|c->r[28]; // 8019E02C
  c->lr=0x8019E034u; f_8019A770(c); // 8019E030
  cmpu(c,0,c->r[26],c->r[28]); // 8019E034
  if (crb(c,2)) { goto L_8019E048; } // 8019E038
  c->r[4]=R32(c->r[31]+0x00000000u); // 8019E03C
  c->r[3]=c->r[26]|c->r[26]; // 8019E040
  c->lr=0x8019E048u; f_8019A770(c); // 8019E044
L_8019E048:;
  c->r[3]=0u+0x80330000u; // 8019E048
  c->r[3]=c->r[3]+0x00001050u; // 8019E04C
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8019E050
  cmps(c,0,(int32_t)c->r[0],0); // 8019E054
  if (crb(c,2)) { goto L_8019E068; } // 8019E058
  c->r[0]=0u+0x00000000u; // 8019E05C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8019E060
  c->r[29]=0u+0x00000702u; // 8019E064
L_8019E068:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 8019E068
  c->r[7]=0u+0x80330000u; // 8019E06C
  {uint32_t ea=c->r[7]+0x00001050u; W32(ea,c->r[6]); c->r[7]=ea;} // 8019E070
  c->r[3]=c->r[29]|c->r[29]; // 8019E074
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8019E078
  c->r[4]=R32(c->r[1]+0x00000010u); // 8019E07C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E080
  W32(c->r[7]+0x00000004u,c->r[5]); // 8019E084
  W32(c->r[7]+0x00000008u,c->r[4]); // 8019E088
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 8019E08C
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019E090
  c->r[0]=R32(c->r[1]+0x00000044u); // 8019E094
  c->lr=c->r[0]; // 8019E098
  c->r[1]=c->r[1]+0x00000040u; // 8019E09C
  return; // 8019E0A0
}

// fn_8019E0A4
void f_8019E0A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E0A4
  c->r[0]=c->lr; // 8019E0A8
  cmpu(c,0,c->r[4],0x00000024u); // 8019E0AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019E0B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019E0B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019E0B8
  c->r[30]=c->r[6]|c->r[6]; // 8019E0BC
  if (!crb(c,1)) { goto L_8019E0CC; } // 8019E0C0
  c->r[3]=0u+0x00000701u; // 8019E0C4
  goto L_8019E184; // 8019E0C8
L_8019E0CC:;
  c->r[12]=0u+0x80330000u; // 8019E0CC
  c->r[4]=c->r[4]-c->r[3]; // 8019E0D0
  c->r[12]=c->r[12]+0x00001050u; // 8019E0D4
  cmps(c,0,(int32_t)c->r[7],0); // 8019E0D8
  c->r[9]=R32(c->r[12]+0x0000000Cu); // 8019E0DC
  c->r[8]=0u+0x80390000u; // 8019E0E0
  c->r[11]=R32(c->r[12]+0x00000000u); // 8019E0E4
  c->r[0]=0u+0x00000000u; // 8019E0E8
  c->r[10]=R32(c->r[12]+0x00000004u); // 8019E0EC
  c->r[31]=c->r[4]+0x00000001u; // 8019E0F0
  c->r[7]=R32(c->r[12]+0x00000008u); // 8019E0F4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8019E0F8
  W8(c->r[12]+0x0000000Du,c->r[0]); // 8019E0FC
  c->r[8]=c->r[8]+0x00001D00u; // 8019E100
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8019E104
  W32(c->r[1]+0x00000008u,c->r[11]); // 8019E108
  c->r[4]=c->r[8]+c->r[3]; // 8019E10C
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8019E110
  W32(c->r[1]+0x00000010u,c->r[7]); // 8019E114
  W32(c->r[1]+0x00000014u,c->r[9]); // 8019E118
  W32(c->r[6]+0x00000000u,c->r[0]); // 8019E11C
  if (crb(c,2)) { goto L_8019E134; } // 8019E120
  c->r[3]=c->r[5]|c->r[5]; // 8019E124
  c->r[5]=c->r[31]|c->r[31]; // 8019E128
  c->lr=0x8019E130u; f_8019C694(c); // 8019E12C
  goto L_8019E140; // 8019E130
L_8019E134:;
  c->r[3]=c->r[5]|c->r[5]; // 8019E134
  c->r[5]=c->r[31]|c->r[31]; // 8019E138
  c->lr=0x8019E140u; f_8019C8FC(c); // 8019E13C
L_8019E140:;
  c->r[4]=0u+0x80330000u; // 8019E140
  c->r[4]=c->r[4]+0x00001050u; // 8019E144
  c->r[0]=R8(c->r[4]+0x0000000Du); // 8019E148
  cmps(c,0,(int32_t)c->r[0],0); // 8019E14C
  if (crb(c,2)) { goto L_8019E160; } // 8019E150
  c->r[0]=0u+0x00000000u; // 8019E154
  W32(c->r[30]+0x00000000u,c->r[0]); // 8019E158
  c->r[3]=0u+0x00000702u; // 8019E15C
L_8019E160:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 8019E160
  c->r[7]=0u+0x80330000u; // 8019E164
  {uint32_t ea=c->r[7]+0x00001050u; W32(ea,c->r[6]); c->r[7]=ea;} // 8019E168
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8019E16C
  c->r[4]=R32(c->r[1]+0x00000010u); // 8019E170
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E174
  W32(c->r[7]+0x00000004u,c->r[5]); // 8019E178
  W32(c->r[7]+0x00000008u,c->r[4]); // 8019E17C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 8019E180
L_8019E184:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019E184
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019E188
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019E18C
  c->lr=c->r[0]; // 8019E190
  c->r[1]=c->r[1]+0x00000020u; // 8019E194
  return; // 8019E198
}

// fn_8019E19C
void f_8019E19C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E19C
  c->r[0]=c->lr; // 8019E1A0
  cmpu(c,0,c->r[4],0x00000021u); // 8019E1A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8019E1A8
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019E1AC
  c->r[26]=c->r[3]|c->r[3]; // 8019E1B0
  c->r[27]=c->r[4]|c->r[4]; // 8019E1B4
  c->r[28]=c->r[5]|c->r[5]; // 8019E1B8
  c->r[29]=c->r[6]|c->r[6]; // 8019E1BC
  c->r[30]=c->r[7]|c->r[7]; // 8019E1C0
  if (!crb(c,1)) { goto L_8019E1D0; } // 8019E1C4
  c->r[3]=0u+0x00000701u; // 8019E1C8
  goto L_8019E2C4; // 8019E1CC
L_8019E1D0:;
  c->r[6]=0u+0x80330000u; // 8019E1D0
  c->r[31]=0u+0x00000000u; // 8019E1D4
  c->r[6]=c->r[6]+0x00001050u; // 8019E1D8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8019E1DC
  c->r[5]=R32(c->r[6]+0x00000000u); // 8019E1E0
  c->r[4]=R32(c->r[6]+0x00000004u); // 8019E1E4
  c->r[3]=R32(c->r[6]+0x00000008u); // 8019E1E8
  W32(c->r[1]+0x00000010u,c->r[5]); // 8019E1EC
  W32(c->r[1]+0x00000014u,c->r[4]); // 8019E1F0
  W32(c->r[1]+0x00000018u,c->r[3]); // 8019E1F4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8019E1F8
  W8(c->r[6]+0x0000000Du,c->r[31]); // 8019E1FC
  c->lr=0x8019E204u; f_8019DD80(c); // 8019E200
  c->r[3]=c->r[3]|0x00002000u; // 8019E204
  c->lr=0x8019E20Cu; f_8019DD88(c); // 8019E208
  W32(c->r[29]+0x00000000u,c->r[31]); // 8019E20C
  c->r[3]=0u+0x00000000u; // 8019E210
  goto L_8019E270; // 8019E214
L_8019E218:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019E218
  if (crb(c,2)) { goto L_8019E244; } // 8019E21C
  c->r[4]=c->r[26]|c->r[26]; // 8019E220
  c->r[5]=c->r[30]|c->r[30]; // 8019E224
  c->r[3]=c->r[1]+0x00000008u; // 8019E228
  c->lr=0x8019E230u; f_8019F2CC(c); // 8019E22C
  c->r[5]=R32(c->r[1]+0x00000008u); // 8019E230
  c->r[3]=c->r[28]|c->r[28]; // 8019E234
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8019E238
  c->lr=0x8019E240u; f_8019C53C(c); // 8019E23C
  goto L_8019E260; // 8019E240
L_8019E244:;
  c->r[3]=c->r[28]|c->r[28]; // 8019E244
  c->r[4]=c->r[1]+0x00000008u; // 8019E248
  c->lr=0x8019E250u; f_8019C784(c); // 8019E24C
  c->r[4]=c->r[26]|c->r[26]; // 8019E250
  c->r[5]=c->r[30]|c->r[30]; // 8019E254
  c->r[3]=c->r[1]+0x00000008u; // 8019E258
  c->lr=0x8019E260u; f_8019F2CC(c); // 8019E25C
L_8019E260:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 8019E260
  c->r[26]=c->r[26]+0x00000001u; // 8019E264
  c->r[0]=c->r[4]+0x00000008u; // 8019E268
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019E26C
L_8019E270:;
  cmpu(c,0,c->r[26],c->r[27]); // 8019E270
  if (crb(c,1)) { goto L_8019E280; } // 8019E274
  cmps(c,0,(int32_t)c->r[3],0); // 8019E278
  if (crb(c,2)) { IRQCHK(c); goto L_8019E218; } // 8019E27C
L_8019E280:;
  c->r[4]=0u+0x80330000u; // 8019E280
  c->r[4]=c->r[4]+0x00001050u; // 8019E284
  c->r[0]=R8(c->r[4]+0x0000000Du); // 8019E288
  cmps(c,0,(int32_t)c->r[0],0); // 8019E28C
  if (crb(c,2)) { goto L_8019E2A0; } // 8019E290
  c->r[0]=0u+0x00000000u; // 8019E294
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019E298
  c->r[3]=0u+0x00000702u; // 8019E29C
L_8019E2A0:;
  c->r[6]=R32(c->r[1]+0x00000010u); // 8019E2A0
  c->r[7]=0u+0x80330000u; // 8019E2A4
  {uint32_t ea=c->r[7]+0x00001050u; W32(ea,c->r[6]); c->r[7]=ea;} // 8019E2A8
  c->r[5]=R32(c->r[1]+0x00000014u); // 8019E2AC
  c->r[4]=R32(c->r[1]+0x00000018u); // 8019E2B0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8019E2B4
  W32(c->r[7]+0x00000004u,c->r[5]); // 8019E2B8
  W32(c->r[7]+0x00000008u,c->r[4]); // 8019E2BC
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 8019E2C0
L_8019E2C4:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019E2C4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8019E2C8
  c->lr=c->r[0]; // 8019E2CC
  c->r[1]=c->r[1]+0x00000040u; // 8019E2D0
  return; // 8019E2D4
}

// fn_8019E2D8
void f_8019E2D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E2D8
  c->r[0]=c->lr; // 8019E2DC
  cmpu(c,0,c->r[4],0x00000060u); // 8019E2E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019E2E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019E2E8
  c->r[31]=c->r[6]|c->r[6]; // 8019E2EC
  if (!crb(c,1)) { goto L_8019E2FC; } // 8019E2F0
  c->r[3]=0u+0x00000701u; // 8019E2F4
  goto L_8019E428; // 8019E2F8
L_8019E2FC:;
  c->r[12]=0u+0x80330000u; // 8019E2FC
  cmpu(c,0,c->r[3],c->r[4]); // 8019E300
  c->r[12]=c->r[12]+0x00001050u; // 8019E304
  c->r[0]=0u+0x00000000u; // 8019E308
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 8019E30C
  c->r[11]=R32(c->r[12]+0x00000000u); // 8019E310
  c->r[10]=R32(c->r[12]+0x00000004u); // 8019E314
  c->r[9]=R32(c->r[12]+0x00000008u); // 8019E318
  W8(c->r[12]+0x0000000Du,c->r[0]); // 8019E31C
  W32(c->r[1]+0x00000008u,c->r[11]); // 8019E320
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8019E324
  W32(c->r[1]+0x00000010u,c->r[9]); // 8019E328
  W32(c->r[1]+0x00000014u,c->r[8]); // 8019E32C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8019E330
  if (crb(c,1)) { goto L_8019E3E4; } // 8019E334
  c->r[4]=c->r[4]-c->r[3]; // 8019E338
  c->r[8]=0u+0x80390000u; // 8019E33C
  c->r[9]=c->r[4]+0x00000001u; // 8019E340
  cmps(c,0,(int32_t)c->r[7],0); // 8019E344
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8019E348
  c->r[8]=c->r[8]+0x00001D00u; // 8019E34C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8019E350
  W32(c->r[6]+0x00000000u,c->r[7]); // 8019E354
  c->r[3]=c->r[8]+c->r[0]; // 8019E358
  c->r[4]=c->r[3]+0x000001A8u; // 8019E35C
  if (crb(c,2)) { goto L_8019E374; } // 8019E360
  c->r[3]=c->r[5]|c->r[5]; // 8019E364
  c->r[5]=c->r[9]|c->r[9]; // 8019E368
  c->lr=0x8019E370u; f_8019C694(c); // 8019E36C
  goto L_8019E3E4; // 8019E370
L_8019E374:;
  c->r[0]=c->r[8]+0x000001ECu; // 8019E374
  cmpu(c,0,c->r[4],c->r[0]); // 8019E378
  if (crb(c,1)) { goto L_8019E3A0; } // 8019E37C
  c->r[3]=c->r[4]+c->r[7]; // 8019E380
  c->r[0]=c->r[8]+0x000001E8u; // 8019E384
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8019E388
  cmpu(c,0,c->r[3],c->r[0]); // 8019E38C
  if (crb(c,0)) { goto L_8019E3A0; } // 8019E390
  c->r[3]=0u+0x80390000u; // 8019E394
  c->r[0]=0u+0x00000001u; // 8019E398
  W8(c->r[3]+0x00001B88u,c->r[0]); // 8019E39C
L_8019E3A0:;
  c->r[3]=0u+0x80390000u; // 8019E3A0
  c->r[3]=c->r[3]+0x00001D00u; // 8019E3A4
  c->r[6]=c->r[3]+0x00000278u; // 8019E3A8
  cmpu(c,0,c->r[4],c->r[6]); // 8019E3AC
  if (crb(c,1)) { goto L_8019E3D8; } // 8019E3B0
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8019E3B4
  c->r[3]=c->r[4]+c->r[0]; // 8019E3B8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8019E3BC
  cmpu(c,0,c->r[0],c->r[6]); // 8019E3C0
  if (crb(c,0)) { goto L_8019E3D8; } // 8019E3C4
  c->r[3]=0u+0x80390000u; // 8019E3C8
  c->r[0]=0u+0x00000001u; // 8019E3CC
  c->r[3]=c->r[3]+0x00001B88u; // 8019E3D0
  W8(c->r[3]+0x00000001u,c->r[0]); // 8019E3D4
L_8019E3D8:;
  c->r[3]=c->r[5]|c->r[5]; // 8019E3D8
  c->r[5]=c->r[9]|c->r[9]; // 8019E3DC
  c->lr=0x8019E3E4u; f_8019C8FC(c); // 8019E3E0
L_8019E3E4:;
  c->r[4]=0u+0x80330000u; // 8019E3E4
  c->r[4]=c->r[4]+0x00001050u; // 8019E3E8
  c->r[0]=R8(c->r[4]+0x0000000Du); // 8019E3EC
  cmps(c,0,(int32_t)c->r[0],0); // 8019E3F0
  if (crb(c,2)) { goto L_8019E404; } // 8019E3F4
  c->r[0]=0u+0x00000000u; // 8019E3F8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8019E3FC
  c->r[3]=0u+0x00000702u; // 8019E400
L_8019E404:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 8019E404
  c->r[7]=0u+0x80330000u; // 8019E408
  {uint32_t ea=c->r[7]+0x00001050u; W32(ea,c->r[6]); c->r[7]=ea;} // 8019E40C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8019E410
  c->r[4]=R32(c->r[1]+0x00000010u); // 8019E414
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E418
  W32(c->r[7]+0x00000004u,c->r[5]); // 8019E41C
  W32(c->r[7]+0x00000008u,c->r[4]); // 8019E420
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 8019E424
L_8019E428:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019E428
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019E42C
  c->lr=c->r[0]; // 8019E430
  c->r[1]=c->r[1]+0x00000020u; // 8019E434
  return; // 8019E438
}

// fn_8019E43C
void f_8019E43C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E43C
  c->r[0]=c->lr; // 8019E440
  cmpu(c,0,c->r[4],0x0000001Fu); // 8019E444
  W32(c->r[1]+0x00000044u,c->r[0]); // 8019E448
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019E44C
  c->r[26]=c->r[3]|c->r[3]; // 8019E450
  c->r[27]=c->r[4]|c->r[4]; // 8019E454
  c->r[28]=c->r[5]|c->r[5]; // 8019E458
  c->r[29]=c->r[6]|c->r[6]; // 8019E45C
  c->r[30]=c->r[7]|c->r[7]; // 8019E460
  if (!crb(c,1)) { goto L_8019E470; } // 8019E464
  c->r[3]=0u+0x00000701u; // 8019E468
  goto L_8019E598; // 8019E46C
L_8019E470:;
  c->r[9]=0u+0x80330000u; // 8019E470
  c->r[31]=0u+0x00000000u; // 8019E474
  c->r[9]=c->r[9]+0x00001050u; // 8019E478
  c->r[3]=c->r[1]+0x00000008u; // 8019E47C
  c->r[0]=R32(c->r[9]+0x0000000Cu); // 8019E480
  c->r[4]=0u+0x00000398u; // 8019E484
  c->r[8]=R32(c->r[9]+0x00000000u); // 8019E488
  c->r[5]=0u+0x00000001u; // 8019E48C
  c->r[7]=R32(c->r[9]+0x00000004u); // 8019E490
  c->r[6]=R32(c->r[9]+0x00000008u); // 8019E494
  W32(c->r[1]+0x00000018u,c->r[8]); // 8019E498
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 8019E49C
  W32(c->r[1]+0x00000020u,c->r[6]); // 8019E4A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019E4A4
  W8(c->r[9]+0x0000000Du,c->r[31]); // 8019E4A8
  c->lr=0x8019E4B0u; f_8019F100(c); // 8019E4AC
  c->r[0]=R32(c->r[1]+0x00000008u); // 8019E4B0
  c->r[3]=c->r[1]+0x00000008u; // 8019E4B4
  c->r[4]=0u+0x00000398u; // 8019E4B8
  c->r[5]=0u+0x00000000u; // 8019E4BC
  c->r[0]=c->r[0]|0xA0000000u; // 8019E4C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019E4C4
  c->lr=0x8019E4CCu; f_8019F100(c); // 8019E4C8
  W32(c->r[1]+0x00000008u,c->r[31]); // 8019E4CC
  c->r[3]=c->r[1]+0x00000008u; // 8019E4D0
  c->r[4]=0u+0x00000390u; // 8019E4D4
  c->r[5]=0u+0x00000000u; // 8019E4D8
  c->lr=0x8019E4E0u; f_8019F100(c); // 8019E4DC
  W32(c->r[29]+0x00000000u,c->r[31]); // 8019E4E0
  c->r[3]=0u+0x00000000u; // 8019E4E4
  goto L_8019E544; // 8019E4E8
L_8019E4EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019E4EC
  if (crb(c,2)) { goto L_8019E518; } // 8019E4F0
  c->r[4]=c->r[26]|c->r[26]; // 8019E4F4
  c->r[5]=c->r[30]|c->r[30]; // 8019E4F8
  c->r[3]=c->r[1]+0x00000010u; // 8019E4FC
  c->lr=0x8019E504u; f_8019F1DC(c); // 8019E500
  c->r[5]=R32(c->r[1]+0x00000010u); // 8019E504
  c->r[3]=c->r[28]|c->r[28]; // 8019E508
  c->r[6]=R32(c->r[1]+0x00000014u); // 8019E50C
  c->lr=0x8019E514u; f_8019C53C(c); // 8019E510
  goto L_8019E534; // 8019E514
L_8019E518:;
  c->r[3]=c->r[28]|c->r[28]; // 8019E518
  c->r[4]=c->r[1]+0x00000010u; // 8019E51C
  c->lr=0x8019E524u; f_8019C784(c); // 8019E520
  c->r[4]=c->r[26]|c->r[26]; // 8019E524
  c->r[5]=c->r[30]|c->r[30]; // 8019E528
  c->r[3]=c->r[1]+0x00000010u; // 8019E52C
  c->lr=0x8019E534u; f_8019F1DC(c); // 8019E530
L_8019E534:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 8019E534
  c->r[26]=c->r[26]+0x00000001u; // 8019E538
  c->r[0]=c->r[4]+0x00000008u; // 8019E53C
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019E540
L_8019E544:;
  cmpu(c,0,c->r[26],c->r[27]); // 8019E544
  if (crb(c,1)) { goto L_8019E554; } // 8019E548
  cmps(c,0,(int32_t)c->r[3],0); // 8019E54C
  if (crb(c,2)) { IRQCHK(c); goto L_8019E4EC; } // 8019E550
L_8019E554:;
  c->r[4]=0u+0x80330000u; // 8019E554
  c->r[4]=c->r[4]+0x00001050u; // 8019E558
  c->r[0]=R8(c->r[4]+0x0000000Du); // 8019E55C
  cmps(c,0,(int32_t)c->r[0],0); // 8019E560
  if (crb(c,2)) { goto L_8019E574; } // 8019E564
  c->r[0]=0u+0x00000000u; // 8019E568
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019E56C
  c->r[3]=0u+0x00000702u; // 8019E570
L_8019E574:;
  c->r[6]=R32(c->r[1]+0x00000018u); // 8019E574
  c->r[7]=0u+0x80330000u; // 8019E578
  {uint32_t ea=c->r[7]+0x00001050u; W32(ea,c->r[6]); c->r[7]=ea;} // 8019E57C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8019E580
  c->r[4]=R32(c->r[1]+0x00000020u); // 8019E584
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019E588
  W32(c->r[7]+0x00000004u,c->r[5]); // 8019E58C
  W32(c->r[7]+0x00000008u,c->r[4]); // 8019E590
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 8019E594
L_8019E598:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019E598
  c->r[0]=R32(c->r[1]+0x00000044u); // 8019E59C
  c->lr=c->r[0]; // 8019E5A0
  c->r[1]=c->r[1]+0x00000040u; // 8019E5A4
  return; // 8019E5A8
}

// TRKInterruptHandler
void f_8019E5AC(Ctx* __restrict c) {
  trace_call(0x8019E5ACu);
  mtspr(c,26,c->r[2]); // 8019E5AC
  mtspr(c,27,c->r[4]); // 8019E5B0
  c->r[4]=mfspr(c,275); // 8019E5B4
  c->r[2]=c->cr; // 8019E5B8
  mtspr(c,275,c->r[2]); // 8019E5BC
  c->r[2]=0u+0x80390000u; // 8019E5C0
  c->r[2]=c->r[2]|0x00001C58u; // 8019E5C4
  c->r[2]=R32(c->r[2]+0x0000008Cu); // 8019E5C8
  c->r[2]=c->r[2]|0x00008002u; // 8019E5CC
  c->r[2]=c->r[2]^0x00008002u; // 8019E5D0
  /* sync */ // 8019E5D4
  c->msr=c->r[2]; // 8019E5D8
  /* sync */ // 8019E5DC
  c->r[2]=0u+0x80430000u; // 8019E5E0
  c->r[2]=c->r[2]|0x00009958u; // 8019E5E4
  W16(c->r[2]+0x00000000u,c->r[3]); // 8019E5E8
  cmps(c,0,(int32_t)c->r[3],1280); // 8019E5EC
  if (!crb(c,2)) { goto L_8019E674; } // 8019E5F0
  c->r[2]=0u+0x80390000u; // 8019E5F4
  c->r[2]=c->r[2]|0x00001D00u; // 8019E5F8
  c->r[3]=c->lr; // 8019E5FC
  W32(c->r[2]+0x0000042Cu,c->r[3]); // 8019E600
  c->lr=0x8019E608u; f_8019B170(c); // 8019E604
  c->r[2]=0u+0x80390000u; // 8019E608
  c->r[2]=c->r[2]|0x00001D00u; // 8019E60C
  c->r[3]=R32(c->r[2]+0x0000042Cu); // 8019E610
  c->lr=c->r[3]; // 8019E614
  c->r[2]=0u+0x80390000u; // 8019E618
  c->r[2]=c->r[2]|0x00001C58u; // 8019E61C
  c->r[2]=R32(c->r[2]+0x000000A0u); // 8019E620
  c->r[2]=R8(c->r[2]+0x00000000u); // 8019E624
  cmps(c,0,(int32_t)c->r[2],0); // 8019E628
  if (crb(c,2)) { goto L_8019E658; } // 8019E62C
  c->r[2]=0u+0x80330000u; // 8019E630
  c->r[2]=c->r[2]|0x00001050u; // 8019E634
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 8019E638
  cmps(c,0,(int32_t)c->r[2],1); // 8019E63C
  if (crb(c,2)) { goto L_8019E658; } // 8019E640
  c->r[2]=0u+0x80390000u; // 8019E644
  c->r[2]=c->r[2]|0x00001C58u; // 8019E648
  c->r[3]=0u+0x00000001u; // 8019E64C
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 8019E650
  goto L_8019E674; // 8019E654
L_8019E658:;
  c->r[2]=0u+0x80390000u; // 8019E658
  c->r[2]=c->r[2]|0x00001BB0u; // 8019E65C
  c->r[3]=R32(c->r[2]+0x00000088u); // 8019E660
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 8019E664
  c->r[3]=R32(c->r[2]+0x0000000Cu); // 8019E668
  c->r[2]=R32(c->r[2]+0x00000008u); // 8019E66C
  return; /* rfi */ // 8019E670
L_8019E674:;
  c->r[2]=0u+0x80430000u; // 8019E674
  c->r[2]=c->r[2]|0x00009958u; // 8019E678
  c->r[3]=R16(c->r[2]+0x00000000u); // 8019E67C
  c->r[2]=0u+0x80330000u; // 8019E680
  c->r[2]=c->r[2]|0x00001050u; // 8019E684
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 8019E688
  cmps(c,0,(int32_t)c->r[2],0); // 8019E68C
  if (!crb(c,2)) { f_8019E740(c); return; } // 8019E690
  c->r[2]=0u+0x80390000u; // 8019E694
  c->r[2]=c->r[2]|0x00001D00u; // 8019E698
  W32(c->r[2]+0x00000000u,c->r[0]); // 8019E69C
  W32(c->r[2]+0x00000004u,c->r[1]); // 8019E6A0
  c->r[0]=mfspr(c,273); // 8019E6A4
  W32(c->r[2]+0x00000008u,c->r[0]); // 8019E6A8
  W16(c->r[2]+0x000002F8u,c->r[3]); // 8019E6AC
  W16(c->r[2]+0x000002FAu,c->r[3]); // 8019E6B0
  c->r[0]=mfspr(c,274); // 8019E6B4
  W32(c->r[2]+0x0000000Cu,c->r[0]); // 8019E6B8
  {uint32_t ea=c->r[2]+0x00000010u; for(int i=4;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019E6BC
  c->r[27]=mfspr(c,26); // 8019E6C0
  c->r[28]=c->lr; // 8019E6C4
  c->r[29]=mfspr(c,275); // 8019E6C8
  c->r[30]=c->ctr; // 8019E6CC
  c->r[31]=mfspr(c,1); // 8019E6D0
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019E6D4
  c->lr=0x8019E6DCu; f_8019BE4C(c); // 8019E6D8
  c->r[2]=0u+0x80330000u; // 8019E6DC
  c->r[2]=c->r[2]|0x00001050u; // 8019E6E0
  c->r[3]=0u+0x00000001u; // 8019E6E4
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 8019E6E8
  c->r[2]=0u+0x80390000u; // 8019E6EC
  c->r[2]=c->r[2]|0x00001C58u; // 8019E6F0
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 8019E6F4
  /* sync */ // 8019E6F8
  c->msr=c->r[0]; // 8019E6FC
  /* sync */ // 8019E700
  c->r[0]=R32(c->r[2]+0x00000080u); // 8019E704
  c->lr=c->r[0]; // 8019E708
  c->r[0]=R32(c->r[2]+0x00000084u); // 8019E70C
  c->ctr=c->r[0]; // 8019E710
  c->r[0]=R32(c->r[2]+0x00000088u); // 8019E714
  mtspr(c,1,c->r[0]); // 8019E718
  c->r[0]=R32(c->r[2]+0x00000094u); // 8019E71C
  mtspr(c,18,c->r[0]); // 8019E720
  c->r[0]=R32(c->r[2]+0x00000090u); // 8019E724
  mtspr(c,19,c->r[0]); // 8019E728
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019E72C
  c->r[0]=R32(c->r[2]+0x00000000u); // 8019E730
  c->r[1]=R32(c->r[2]+0x00000004u); // 8019E734
  c->r[2]=R32(c->r[2]+0x00000008u); // 8019E738
  f_8019E7DC(c); return; // 8019E73C
}

// TRKExceptionHandler
void f_8019E740(Ctx* __restrict c) {
  trace_call(0x8019E740u);
  c->r[2]=0u+0x80330000u; // 8019E740
  c->r[2]=c->r[2]|0x00001050u; // 8019E744
  W16(c->r[2]+0x00000008u,c->r[3]); // 8019E748
  c->r[3]=mfspr(c,26); // 8019E74C
  W32(c->r[2]+0x00000000u,c->r[3]); // 8019E750
  c->r[3]=R16(c->r[2]+0x00000008u); // 8019E754
  cmps(c,0,(int32_t)c->r[3],512); // 8019E758
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E75C
  cmps(c,0,(int32_t)c->r[3],768); // 8019E760
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E764
  cmps(c,0,(int32_t)c->r[3],1024); // 8019E768
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E76C
  cmps(c,0,(int32_t)c->r[3],1536); // 8019E770
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E774
  cmps(c,0,(int32_t)c->r[3],1792); // 8019E778
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E77C
  cmps(c,0,(int32_t)c->r[3],2048); // 8019E780
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E784
  cmps(c,0,(int32_t)c->r[3],4096); // 8019E788
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E78C
  cmps(c,0,(int32_t)c->r[3],4352); // 8019E790
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E794
  cmps(c,0,(int32_t)c->r[3],4608); // 8019E798
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E79C
  cmps(c,0,(int32_t)c->r[3],4864); // 8019E7A0
  if (crb(c,2)) { goto L_8019E7AC; } // 8019E7A4
  goto L_8019E7B8; // 8019E7A8
L_8019E7AC:;
  c->r[3]=mfspr(c,26); // 8019E7AC
  c->r[3]=c->r[3]+0x00000004u; // 8019E7B0
  mtspr(c,26,c->r[3]); // 8019E7B4
L_8019E7B8:;
  c->r[2]=0u+0x80330000u; // 8019E7B8
  c->r[2]=c->r[2]|0x00001050u; // 8019E7BC
  c->r[3]=0u+0x00000001u; // 8019E7C0
  W8(c->r[2]+0x0000000Du,c->r[3]); // 8019E7C4
  c->r[3]=mfspr(c,275); // 8019E7C8
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 8019E7CC
  c->r[2]=mfspr(c,273); // 8019E7D0
  c->r[3]=mfspr(c,274); // 8019E7D4
  return; /* rfi */ // 8019E7D8
}

// TRKPostInterruptEvent
void f_8019E7DC(Ctx* __restrict c) {
  trace_call(0x8019E7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E7DC
  c->r[0]=c->lr; // 8019E7E0
  c->r[3]=0u+0x80390000u; // 8019E7E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019E7E8
  c->r[3]=c->r[3]+0x00001C58u; // 8019E7EC
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 8019E7F0
  cmps(c,0,(int32_t)c->r[0],0); // 8019E7F4
  if (crb(c,2)) { goto L_8019E808; } // 8019E7F8
  c->r[0]=0u+0x00000000u; // 8019E7FC
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 8019E800
  goto L_8019E884; // 8019E804
L_8019E808:;
  c->r[3]=0u+0x80390000u; // 8019E808
  c->r[3]=c->r[3]+0x00001D00u; // 8019E80C
  c->r[0]=R32(c->r[3]+0x000002F8u); // 8019E810
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8019E814
  cmps(c,0,(int32_t)c->r[0],1792); // 8019E818
  if (crb(c,2)) { goto L_8019E828; } // 8019E81C
  cmps(c,0,(int32_t)c->r[0],3328); // 8019E820
  if (!crb(c,2)) { goto L_8019E870; } // 8019E824
L_8019E828:;
  c->r[3]=0u+0x80390000u; // 8019E828
  c->r[0]=0u+0x00000004u; // 8019E82C
  c->r[3]=c->r[3]+0x00001D00u; // 8019E830
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019E834
  c->r[4]=R32(c->r[3]+0x00000080u); // 8019E838
  c->r[3]=c->r[1]+0x0000000Cu; // 8019E83C
  c->r[5]=c->r[1]+0x00000008u; // 8019E840
  c->r[6]=0u+0x00000000u; // 8019E844
  c->r[7]=0u+0x00000001u; // 8019E848
  c->lr=0x8019E850u; f_8019DF54(c); // 8019E84C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8019E850
  c->r[0]=c->r[3]+0xF0200000u; // 8019E854
  cmpu(c,0,c->r[0],0x00000000u); // 8019E858
  if (!crb(c,2)) { goto L_8019E868; } // 8019E85C
  c->r[4]=0u+0x00000005u; // 8019E860
  goto L_8019E874; // 8019E864
L_8019E868:;
  c->r[4]=0u+0x00000003u; // 8019E868
  goto L_8019E874; // 8019E86C
L_8019E870:;
  c->r[4]=0u+0x00000004u; // 8019E870
L_8019E874:;
  c->r[3]=c->r[1]+0x00000010u; // 8019E874
  c->lr=0x8019E87Cu; f_8019B520(c); // 8019E878
  c->r[3]=c->r[1]+0x00000010u; // 8019E87C
  c->lr=0x8019E884u; f_8019B454(c); // 8019E880
L_8019E884:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019E884
  c->lr=c->r[0]; // 8019E888
  c->r[1]=c->r[1]+0x00000020u; // 8019E88C
  return; // 8019E890
}

// TRKSwapAndGo
void f_8019E894(Ctx* __restrict c) {
  trace_call(0x8019E894u);
  c->r[3]=0u+0x80390000u; // 8019E894
  c->r[3]=c->r[3]|0x00001C58u; // 8019E898
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019E89C
  c->r[0]=c->msr; // 8019E8A0
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8019E8A4
  c->r[0]=c->lr; // 8019E8A8
  W32(c->r[3]+0x00000080u,c->r[0]); // 8019E8AC
  c->r[0]=c->ctr; // 8019E8B0
  W32(c->r[3]+0x00000084u,c->r[0]); // 8019E8B4
  c->r[0]=mfspr(c,1); // 8019E8B8
  W32(c->r[3]+0x00000088u,c->r[0]); // 8019E8BC
  c->r[0]=mfspr(c,18); // 8019E8C0
  W32(c->r[3]+0x00000094u,c->r[0]); // 8019E8C4
  c->r[0]=mfspr(c,19); // 8019E8C8
  W32(c->r[3]+0x00000090u,c->r[0]); // 8019E8CC
  c->r[1]=0u+0xFFFF8002u; // 8019E8D0
  c->r[1]=~(c->r[1]|c->r[1]); // 8019E8D4
  c->r[3]=c->msr; // 8019E8D8
  c->r[3]=c->r[3]&c->r[1]; // 8019E8DC
  c->msr=c->r[3]; // 8019E8E0
  c->r[2]=0u+0x80390000u; // 8019E8E4
  c->r[2]=c->r[2]|0x00001C58u; // 8019E8E8
  c->r[2]=R32(c->r[2]+0x000000A0u); // 8019E8EC
  c->r[2]=R8(c->r[2]+0x00000000u); // 8019E8F0
  cmps(c,0,(int32_t)c->r[2],0); // 8019E8F4
  if (crb(c,2)) { goto L_8019E910; } // 8019E8F8
  c->r[2]=0u+0x80390000u; // 8019E8FC
  c->r[2]=c->r[2]|0x00001C58u; // 8019E900
  c->r[3]=0u+0x00000001u; // 8019E904
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 8019E908
  f_8019E958(c); return; // 8019E90C
L_8019E910:;
  c->r[2]=0u+0x80330000u; // 8019E910
  c->r[2]=c->r[2]|0x00001050u; // 8019E914
  c->r[3]=0u+0x00000000u; // 8019E918
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 8019E91C
  c->lr=0x8019E924u; f_8019C010(c); // 8019E920
  c->r[2]=0u+0x80390000u; // 8019E924
  c->r[2]=c->r[2]|0x00001D00u; // 8019E928
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019E92C
  mtspr(c,26,c->r[27]); // 8019E930
  c->lr=c->r[28]; // 8019E934
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[29]&0xFFFFFFFFu); // 8019E938
  c->ctr=c->r[30]; // 8019E93C
  mtspr(c,1,c->r[31]); // 8019E940
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019E944
  c->r[0]=R32(c->r[2]+0x00000000u); // 8019E948
  c->r[1]=R32(c->r[2]+0x00000004u); // 8019E94C
  c->r[2]=R32(c->r[2]+0x00000008u); // 8019E950
  return; /* rfi */ // 8019E954
}

// TRKInterruptHandlerEnableInterrupts
void f_8019E958(Ctx* __restrict c) {
  trace_call(0x8019E958u);
  c->r[2]=0u+0x80390000u; // 8019E958
  c->r[2]=c->r[2]|0x00001C58u; // 8019E95C
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 8019E960
  /* sync */ // 8019E964
  c->msr=c->r[0]; // 8019E968
  /* sync */ // 8019E96C
  c->r[0]=R32(c->r[2]+0x00000080u); // 8019E970
  c->lr=c->r[0]; // 8019E974
  c->r[0]=R32(c->r[2]+0x00000084u); // 8019E978
  c->ctr=c->r[0]; // 8019E97C
  c->r[0]=R32(c->r[2]+0x00000088u); // 8019E980
  mtspr(c,1,c->r[0]); // 8019E984
  c->r[0]=R32(c->r[2]+0x00000094u); // 8019E988
  mtspr(c,18,c->r[0]); // 8019E98C
  c->r[0]=R32(c->r[2]+0x00000090u); // 8019E990
  mtspr(c,19,c->r[0]); // 8019E994
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019E998
  c->r[0]=R32(c->r[2]+0x00000000u); // 8019E99C
  c->r[1]=R32(c->r[2]+0x00000004u); // 8019E9A0
  c->r[2]=R32(c->r[2]+0x00000008u); // 8019E9A4
  f_8019E7DC(c); return; // 8019E9A8
}

// TRKTargetInterrupt
void f_8019E9AC(Ctx* __restrict c) {
  trace_call(0x8019E9ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E9AC
  c->r[0]=c->lr; // 8019E9B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E9B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E9B8
  c->r[31]=0u+0x00000000u; // 8019E9BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8019E9C0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8019E9C4
  cmpu(c,0,c->r[0],0x00000001u); // 8019E9C8
  if (crb(c,1)) { goto L_8019E9F0; } // 8019E9CC
  c->lr=0x8019E9D4u; f_8019ECA4(c); // 8019E9D0
  cmps(c,0,(int32_t)c->r[3],0); // 8019E9D4
  if (!crb(c,2)) { goto L_8019E9F0; } // 8019E9D8
  c->r[3]=0u+0x00000001u; // 8019E9DC
  c->lr=0x8019E9E4u; f_8019F0D8(c); // 8019E9E0
  c->r[3]=0u+0x00000090u; // 8019E9E4
  c->lr=0x8019E9ECu; f_8019B314(c); // 8019E9E8
  c->r[31]=c->r[3]|c->r[3]; // 8019E9EC
L_8019E9F0:;
  c->r[3]=c->r[31]|c->r[31]; // 8019E9F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E9F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E9F8
  c->lr=c->r[0]; // 8019E9FC
  c->r[1]=c->r[1]+0x00000010u; // 8019EA00
  return; // 8019EA04
}

// fn_8019EA08
void f_8019EA08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFB90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EA08
  c->r[0]=c->lr; // 8019EA0C
  c->r[4]=0u+0x00000000u; // 8019EA10
  c->r[5]=0u+0x00000040u; // 8019EA14
  W32(c->r[1]+0x00000474u,c->r[0]); // 8019EA18
  W32(c->r[1]+0x0000046Cu,c->r[31]); // 8019EA1C
  W32(c->r[1]+0x00000468u,c->r[30]); // 8019EA20
  W32(c->r[1]+0x00000464u,c->r[29]); // 8019EA24
  c->r[29]=c->r[3]|c->r[3]; // 8019EA28
  c->r[3]=c->r[1]+0x00000020u; // 8019EA2C
  c->lr=0x8019EA34u; f_8019AA0C(c); // 8019EA30
  c->r[31]=0u+0x80390000u; // 8019EA34
  c->r[4]=0u+0x000004E8u; // 8019EA38
  c->r[31]=c->r[31]+0x00001D00u; // 8019EA3C
  c->r[5]=0u+0x00000090u; // 8019EA40
  c->r[0]=R32(c->r[31]+0x00000080u); // 8019EA44
  c->r[3]=c->r[1]+0x00000014u; // 8019EA48
  W32(c->r[1]+0x00000020u,c->r[4]); // 8019EA4C
  c->r[4]=c->r[1]+0x00000010u; // 8019EA50
  W8(c->r[1]+0x00000024u,c->r[5]); // 8019EA54
  W32(c->r[1]+0x00000028u,c->r[0]); // 8019EA58
  c->lr=0x8019EA60u; f_8019F514(c); // 8019EA5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EA60
  c->r[3]=0u+0x000000E4u; // 8019EA64
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019EA68
  c->lr=0x8019EA70u; f_8019F50C(c); // 8019EA6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8019EA70
  c->r[0]=0u+0x00000004u; // 8019EA74
  W32(c->r[1]+0x00000038u,c->r[3]); // 8019EA78
  c->r[3]=c->r[1]+0x00000018u; // 8019EA7C
  c->r[4]=R32(c->r[31]+0x00000080u); // 8019EA80
  c->r[5]=c->r[1]+0x00000008u; // 8019EA84
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019EA88
  c->r[6]=0u+0x00000000u; // 8019EA8C
  c->r[7]=0u+0x00000001u; // 8019EA90
  c->lr=0x8019EA98u; f_8019DF54(c); // 8019EA94
  c->r[0]=R32(c->r[31]+0x000002F8u); // 8019EA98
  c->r[3]=c->r[29]|c->r[29]; // 8019EA9C
  c->r[5]=R32(c->r[1]+0x00000018u); // 8019EAA0
  c->r[4]=c->r[1]+0x00000020u; // 8019EAA4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8019EAA8
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8019EAAC
  c->r[5]=0u+0x00000040u; // 8019EAB0
  W32(c->r[1]+0x00000030u,c->r[0]); // 8019EAB4
  c->lr=0x8019EABCu; f_8019C630(c); // 8019EAB8
  cmps(c,0,(int32_t)c->r[3],0); // 8019EABC
  c->r[30]=c->r[3]|c->r[3]; // 8019EAC0
  if (!crb(c,2)) { goto L_8019EB30; } // 8019EAC4
  c->r[30]=0u+0x00000000u; // 8019EAC8
L_8019EACC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8019EACC
  c->r[3]=c->r[29]|c->r[29]; // 8019EAD0
  c->lr=0x8019EAD8u; f_8019C46C(c); // 8019EAD4
  c->r[30]=c->r[30]+0x00000001u; // 8019EAD8
  c->r[31]=c->r[31]+0x00000004u; // 8019EADC
  cmps(c,0,(int32_t)c->r[30],32); // 8019EAE0
  if (crb(c,0)) { IRQCHK(c); goto L_8019EACC; } // 8019EAE4
  c->r[31]=0u+0x80390000u; // 8019EAE8
  c->r[3]=c->r[29]|c->r[29]; // 8019EAEC
  c->r[31]=c->r[31]+0x00001D00u; // 8019EAF0
  c->r[4]=R32(c->r[31]+0x00000080u); // 8019EAF4
  c->lr=0x8019EAFCu; f_8019C46C(c); // 8019EAF8
  c->r[4]=R32(c->r[31]+0x00000084u); // 8019EAFC
  c->r[3]=c->r[29]|c->r[29]; // 8019EB00
  c->lr=0x8019EB08u; f_8019C46C(c); // 8019EB04
  c->r[4]=R32(c->r[31]+0x00000088u); // 8019EB08
  c->r[3]=c->r[29]|c->r[29]; // 8019EB0C
  c->lr=0x8019EB14u; f_8019C46C(c); // 8019EB10
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 8019EB14
  c->r[3]=c->r[29]|c->r[29]; // 8019EB18
  c->lr=0x8019EB20u; f_8019C46C(c); // 8019EB1C
  c->r[4]=R32(c->r[31]+0x00000090u); // 8019EB20
  c->r[3]=c->r[29]|c->r[29]; // 8019EB24
  c->lr=0x8019EB2Cu; f_8019C46C(c); // 8019EB28
  c->r[30]=c->r[3]|c->r[3]; // 8019EB2C
L_8019EB30:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019EB30
  if (!crb(c,2)) { goto L_8019EBA0; } // 8019EB34
  c->r[3]=0u+0x000000D4u; // 8019EB38
  c->lr=0x8019EB40u; f_8019F50C(c); // 8019EB3C
  c->r[4]=R32(c->r[3]+0x00000000u); // 8019EB40
  c->r[3]=c->r[29]|c->r[29]; // 8019EB44
  c->lr=0x8019EB4Cu; f_8019C46C(c); // 8019EB48
  c->r[3]=0u+0x000000D8u; // 8019EB4C
  c->lr=0x8019EB54u; f_8019F50C(c); // 8019EB50
  c->r[4]=R32(c->r[3]+0x00000000u); // 8019EB54
  c->r[3]=c->r[29]|c->r[29]; // 8019EB58
  c->lr=0x8019EB60u; f_8019C46C(c); // 8019EB5C
  c->r[3]=0u+0x000000DCu; // 8019EB60
  c->lr=0x8019EB68u; f_8019F50C(c); // 8019EB64
  c->r[4]=R32(c->r[3]+0x00000000u); // 8019EB68
  c->r[3]=c->r[29]|c->r[29]; // 8019EB6C
  c->lr=0x8019EB74u; f_8019C46C(c); // 8019EB70
  c->r[3]=0u+0x000000E0u; // 8019EB74
  c->lr=0x8019EB7Cu; f_8019F50C(c); // 8019EB78
  c->r[4]=R32(c->r[3]+0x00000000u); // 8019EB7C
  c->r[3]=c->r[29]|c->r[29]; // 8019EB80
  c->lr=0x8019EB88u; f_8019C46C(c); // 8019EB84
  c->r[3]=0u+0x000000E4u; // 8019EB88
  c->lr=0x8019EB90u; f_8019F50C(c); // 8019EB8C
  c->r[4]=R32(c->r[3]+0x00000000u); // 8019EB90
  c->r[3]=c->r[29]|c->r[29]; // 8019EB94
  c->lr=0x8019EB9Cu; f_8019C46C(c); // 8019EB98
  c->r[30]=c->r[3]|c->r[3]; // 8019EB9C
L_8019EBA0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019EBA0
  if (!crb(c,2)) { goto L_8019EBE8; } // 8019EBA4
  c->r[3]=0u+0x80390000u; // 8019EBA8
  c->r[0]=0u+0x00000400u; // 8019EBAC
  c->r[3]=c->r[3]+0x00001D00u; // 8019EBB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019EBB4
  c->r[0]=R32(c->r[3]+0x00000080u); // 8019EBB8
  c->r[3]=c->r[1]+0x00000060u; // 8019EBBC
  c->r[5]=c->r[1]+0x0000000Cu; // 8019EBC0
  c->r[6]=0u+0x00000000u; // 8019EBC4
  c->r[4]=rotl(c->r[0],0)&0xFFFFFC00u; // 8019EBC8
  c->r[7]=0u+0x00000001u; // 8019EBCC
  c->lr=0x8019EBD4u; f_8019DF54(c); // 8019EBD0
  c->r[30]=c->r[3]|c->r[3]; // 8019EBD4
  c->r[3]=c->r[29]|c->r[29]; // 8019EBD8
  c->r[4]=c->r[1]+0x00000060u; // 8019EBDC
  c->r[5]=0u+0x00000400u; // 8019EBE0
  c->lr=0x8019EBE8u; f_8019C338(c); // 8019EBE4
L_8019EBE8:;
  c->r[3]=c->r[30]|c->r[30]; // 8019EBE8
  c->r[31]=R32(c->r[1]+0x0000046Cu); // 8019EBEC
  c->r[30]=R32(c->r[1]+0x00000468u); // 8019EBF0
  c->r[29]=R32(c->r[1]+0x00000464u); // 8019EBF4
  c->r[0]=R32(c->r[1]+0x00000474u); // 8019EBF8
  c->lr=c->r[0]; // 8019EBFC
  c->r[1]=c->r[1]+0x00000470u; // 8019EC00
  return; // 8019EC04
}

// fn_8019EC08
void f_8019EC08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EC08
  c->r[0]=c->lr; // 8019EC0C
  c->r[4]=0u+0x00000000u; // 8019EC10
  c->r[5]=0u+0x00000040u; // 8019EC14
  W32(c->r[1]+0x00000064u,c->r[0]); // 8019EC18
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8019EC1C
  W32(c->r[1]+0x00000058u,c->r[30]); // 8019EC20
  c->r[30]=c->r[3]|c->r[3]; // 8019EC24
  c->r[3]=c->r[1]+0x00000010u; // 8019EC28
  c->lr=0x8019EC30u; f_8019AA0C(c); // 8019EC2C
  c->r[31]=0u+0x80330000u; // 8019EC30
  c->r[3]=0u+0x00000040u; // 8019EC34
  c->r[4]=R32(c->r[31]+0x00001050u); // 8019EC38
  c->r[5]=0u+0x00000091u; // 8019EC3C
  c->r[0]=0u+0x00000004u; // 8019EC40
  W32(c->r[1]+0x00000010u,c->r[3]); // 8019EC44
  c->r[3]=c->r[1]+0x0000000Cu; // 8019EC48
  c->r[6]=0u+0x00000000u; // 8019EC4C
  W8(c->r[1]+0x00000014u,c->r[5]); // 8019EC50
  c->r[5]=c->r[1]+0x00000008u; // 8019EC54
  c->r[7]=0u+0x00000001u; // 8019EC58
  W32(c->r[1]+0x00000018u,c->r[4]); // 8019EC5C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019EC60
  c->lr=0x8019EC68u; f_8019DF54(c); // 8019EC64
  c->r[3]=c->r[31]+0x00001050u; // 8019EC68
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8019EC6C
  c->r[0]=R16(c->r[3]+0x00000008u); // 8019EC70
  c->r[3]=c->r[30]|c->r[30]; // 8019EC74
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8019EC78
  c->r[4]=c->r[1]+0x00000010u; // 8019EC7C
  c->r[5]=0u+0x00000040u; // 8019EC80
  W32(c->r[1]+0x00000020u,c->r[0]); // 8019EC84
  c->lr=0x8019EC8Cu; f_8019C630(c); // 8019EC88
  c->r[0]=R32(c->r[1]+0x00000064u); // 8019EC8C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8019EC90
  c->r[30]=R32(c->r[1]+0x00000058u); // 8019EC94
  c->lr=c->r[0]; // 8019EC98
  c->r[1]=c->r[1]+0x00000060u; // 8019EC9C
  return; // 8019ECA0
}

// fn_8019ECA4
void f_8019ECA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019ECA4
  c->r[0]=c->lr; // 8019ECA8
  c->r[3]=0u+0x80390000u; // 8019ECAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019ECB0
  c->r[0]=R32(c->r[3]+0x00001B98u); // 8019ECB4
  cmps(c,0,(int32_t)c->r[0],0); // 8019ECB8
  if (crb(c,2)) { goto L_8019EDB0; } // 8019ECBC
  c->r[4]=0u+0x80390000u; // 8019ECC0
  c->r[5]=0u+0x00000001u; // 8019ECC4
  c->r[4]=c->r[4]+0x00001D00u; // 8019ECC8
  c->r[0]=R32(c->r[4]+0x000001F8u); // 8019ECCC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFBFFu; // 8019ECD0
  c->r[0]=c->r[0]|0x00008000u; // 8019ECD4
  W32(c->r[4]+0x000001F8u,c->r[0]); // 8019ECD8
  if (crb(c,2)) { goto L_8019ED40; } // 8019ECDC
  c->r[0]=R32(c->r[4]+0x000002F8u); // 8019ECE0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8019ECE4
  cmpu(c,0,c->r[0],0x00000D00u); // 8019ECE8
  if (!crb(c,2)) { goto L_8019ED40; } // 8019ECEC
  c->r[3]=c->r[3]+0x00001B98u; // 8019ECF0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8019ECF4
  cmps(c,0,(int32_t)c->r[0],0); // 8019ECF8
  if (crb(c,2)) { goto L_8019ED0C; } // 8019ECFC
  cmps(c,0,(int32_t)c->r[0],1); // 8019ED00
  if (crb(c,2)) { goto L_8019ED20; } // 8019ED04
  goto L_8019ED40; // 8019ED08
L_8019ED0C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8019ED0C
  cmps(c,0,(int32_t)c->r[0],0); // 8019ED10
  if (crb(c,2)) { goto L_8019ED40; } // 8019ED14
  c->r[5]=0u+0x00000000u; // 8019ED18
  goto L_8019ED40; // 8019ED1C
L_8019ED20:;
  c->r[4]=R32(c->r[4]+0x00000080u); // 8019ED20
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8019ED24
  cmpu(c,0,c->r[4],c->r[0]); // 8019ED28
  if (crb(c,0)) { goto L_8019ED40; } // 8019ED2C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8019ED30
  cmpu(c,0,c->r[4],c->r[0]); // 8019ED34
  if (crb(c,1)) { goto L_8019ED40; } // 8019ED38
  c->r[5]=0u+0x00000000u; // 8019ED3C
L_8019ED40:;
  cmps(c,0,(int32_t)c->r[5],0); // 8019ED40
  if (crb(c,2)) { goto L_8019ED58; } // 8019ED44
  c->r[3]=0u+0x80390000u; // 8019ED48
  c->r[0]=0u+0x00000000u; // 8019ED4C
  W32(c->r[3]+0x00001B98u,c->r[0]); // 8019ED50
  goto L_8019EDB0; // 8019ED54
L_8019ED58:;
  c->r[5]=0u+0x80390000u; // 8019ED58
  c->r[4]=0u+0x80390000u; // 8019ED5C
  c->r[4]=c->r[4]+0x00001D00u; // 8019ED60
  c->r[6]=0u+0x00000001u; // 8019ED64
  c->r[3]=c->r[5]+0x00001B98u; // 8019ED68
  c->r[0]=R32(c->r[4]+0x000001F8u); // 8019ED6C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8019ED70
  c->r[0]=c->r[0]|0x00000400u; // 8019ED74
  W32(c->r[5]+0x00001B98u,c->r[6]); // 8019ED78
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 8019ED7C
  cmps(c,0,(int32_t)c->r[3],0); // 8019ED80
  W32(c->r[4]+0x000001F8u,c->r[0]); // 8019ED84
  if (crb(c,2)) { goto L_8019ED94; } // 8019ED88
  cmps(c,0,(int32_t)c->r[3],16); // 8019ED8C
  if (!crb(c,2)) { goto L_8019EDA8; } // 8019ED90
L_8019ED94:;
  c->r[4]=0u+0x80390000u; // 8019ED94
  c->r[4]=c->r[4]+0x00001B98u; // 8019ED98
  c->r[3]=R32(c->r[4]+0x00000008u); // 8019ED9C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8019EDA0
  W32(c->r[4]+0x00000008u,c->r[0]); // 8019EDA4
L_8019EDA8:;
  c->r[3]=0u+0x00000000u; // 8019EDA8
  c->lr=0x8019EDB0u; f_8019F0D8(c); // 8019EDAC
L_8019EDB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EDB0
  c->r[3]=0u+0x80390000u; // 8019EDB4
  c->r[3]=R32(c->r[3]+0x00001B98u); // 8019EDB8
  c->lr=c->r[0]; // 8019EDBC
  c->r[1]=c->r[1]+0x00000010u; // 8019EDC0
  return; // 8019EDC4
}

// fn_8019EDC8
void f_8019EDC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EDC8
  c->r[0]=c->lr; // 8019EDCC
  cmps(c,0,(int32_t)c->r[4],0); // 8019EDD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EDD4
  if (crb(c,2)) { goto L_8019EDE4; } // 8019EDD8
  c->r[3]=0u+0x00000703u; // 8019EDDC
  goto L_8019EE40; // 8019EDE0
L_8019EDE4:;
  c->r[4]=0u+0x80390000u; // 8019EDE4
  c->r[7]=0u+0x80390000u; // 8019EDE8
  c->r[4]=c->r[4]+0x00001D00u; // 8019EDEC
  c->r[5]=0u+0x00000001u; // 8019EDF0
  c->r[0]=R32(c->r[4]+0x000001F8u); // 8019EDF4
  c->r[6]=c->r[7]+0x00001B98u; // 8019EDF8
  c->r[8]=0u+0x00000000u; // 8019EDFC
  W32(c->r[6]+0x00000004u,c->r[8]); // 8019EE00
  c->r[0]=c->r[0]|0x00000400u; // 8019EE04
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 8019EE08
  W32(c->r[6]+0x00000008u,c->r[3]); // 8019EE0C
  W32(c->r[7]+0x00001B98u,c->r[5]); // 8019EE10
  W32(c->r[4]+0x000001F8u,c->r[0]); // 8019EE14
  goto L_8019EE20; // 8019EE18
  if (!crb(c,2)) { goto L_8019EE34; } // 8019EE1C
L_8019EE20:;
  c->r[4]=0u+0x80390000u; // 8019EE20
  c->r[4]=c->r[4]+0x00001B98u; // 8019EE24
  c->r[3]=R32(c->r[4]+0x00000008u); // 8019EE28
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8019EE2C
  W32(c->r[4]+0x00000008u,c->r[0]); // 8019EE30
L_8019EE34:;
  c->r[3]=0u+0x00000000u; // 8019EE34
  c->lr=0x8019EE3Cu; f_8019F0D8(c); // 8019EE38
  c->r[3]=0u+0x00000000u; // 8019EE3C
L_8019EE40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EE40
  c->lr=c->r[0]; // 8019EE44
  c->r[1]=c->r[1]+0x00000010u; // 8019EE48
  return; // 8019EE4C
}

// fn_8019EE50
void f_8019EE50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EE50
  c->r[0]=c->lr; // 8019EE54
  cmps(c,0,(int32_t)c->r[5],0); // 8019EE58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EE5C
  if (crb(c,2)) { goto L_8019EE6C; } // 8019EE60
  c->r[3]=0u+0x00000703u; // 8019EE64
  goto L_8019EEB4; // 8019EE68
L_8019EE6C:;
  c->r[5]=0u+0x80390000u; // 8019EE6C
  c->r[7]=0u+0x80390000u; // 8019EE70
  c->r[5]=c->r[5]+0x00001D00u; // 8019EE74
  c->r[8]=0u+0x00000001u; // 8019EE78
  c->r[0]=R32(c->r[5]+0x000001F8u); // 8019EE7C
  c->r[6]=c->r[7]+0x00001B98u; // 8019EE80
  W32(c->r[6]+0x00000004u,c->r[8]); // 8019EE84
  c->r[0]=c->r[0]|0x00000400u; // 8019EE88
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 8019EE8C
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 8019EE90
  W32(c->r[6]+0x00000010u,c->r[4]); // 8019EE94
  W32(c->r[7]+0x00001B98u,c->r[8]); // 8019EE98
  W32(c->r[5]+0x000001F8u,c->r[0]); // 8019EE9C
  goto L_8019EEA8; // 8019EEA0
  W32(c->r[4]+0x00000008u,c->r[0]); // 8019EEA4
L_8019EEA8:;
  c->r[3]=0u+0x00000000u; // 8019EEA8
  c->lr=0x8019EEB0u; f_8019F0D8(c); // 8019EEAC
  c->r[3]=0u+0x00000000u; // 8019EEB0
L_8019EEB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EEB4
  c->lr=c->r[0]; // 8019EEB8
  c->r[1]=c->r[1]+0x00000010u; // 8019EEBC
  return; // 8019EEC0
}

// fn_8019EEC4
void f_8019EEC4(Ctx* __restrict c) {
  c->r[3]=0u+0x80390000u; // 8019EEC4
  c->r[3]=c->r[3]+0x00001D00u; // 8019EEC8
  c->r[3]=R32(c->r[3]+0x00000080u); // 8019EECC
  return; // 8019EED0
}

// TRKTargetSupportRequest
void f_8019EED4(Ctx* __restrict c) {
  trace_call(0x8019EED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EED4
  c->r[0]=c->lr; // 8019EED8
  c->r[7]=0u+0x80390000u; // 8019EEDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019EEE0
  c->r[7]=c->r[7]+0x00001D00u; // 8019EEE4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8019EEE8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8019EEEC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8019EEF0
  c->r[29]=R32(c->r[7]+0x0000000Cu); // 8019EEF4
  c->r[0]=c->r[29]+0xFFFFFF30u; // 8019EEF8
  cmpu(c,0,c->r[0],0x00000001u); // 8019EEFC
  if (!crb(c,1)) { goto L_8019F028; } // 8019EF00
  cmps(c,0,(int32_t)c->r[29],210); // 8019EF04
  if (crb(c,2)) { goto L_8019EF38; } // 8019EF08
  cmps(c,0,(int32_t)c->r[29],211); // 8019EF0C
  if (crb(c,2)) { goto L_8019EF84; } // 8019EF10
  cmps(c,0,(int32_t)c->r[29],212); // 8019EF14
  if (crb(c,2)) { goto L_8019EFC4; } // 8019EF18
  c->r[3]=c->r[1]+0x00000010u; // 8019EF1C
  c->r[4]=0u+0x00000004u; // 8019EF20
  c->lr=0x8019EF28u; f_8019B520(c); // 8019EF24
  c->r[3]=c->r[1]+0x00000010u; // 8019EF28
  c->lr=0x8019EF30u; f_8019B454(c); // 8019EF2C
  c->r[3]=0u+0x00000000u; // 8019EF30
  goto L_8019F0AC; // 8019EF34
L_8019EF38:;
  c->r[0]=R32(c->r[7]+0x00000014u); // 8019EF38
  c->r[6]=c->r[1]+0x0000000Cu; // 8019EF3C
  c->r[3]=R32(c->r[7]+0x00000010u); // 8019EF40
  c->r[5]=R32(c->r[7]+0x00000018u); // 8019EF44
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8019EF48
  c->lr=0x8019EF50u; f_8019BB10(c); // 8019EF4C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019EF50
  c->r[31]=c->r[3]|c->r[3]; // 8019EF54
  cmps(c,0,(int32_t)c->r[0],0); // 8019EF58
  if (!crb(c,2)) { goto L_8019EF70; } // 8019EF5C
  cmps(c,0,(int32_t)c->r[3],0); // 8019EF60
  if (crb(c,2)) { goto L_8019EF70; } // 8019EF64
  c->r[0]=0u+0x00000001u; // 8019EF68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019EF6C
L_8019EF70:;
  c->r[3]=0u+0x80390000u; // 8019EF70
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019EF74
  c->r[3]=c->r[3]+0x00001D00u; // 8019EF78
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8019EF7C
  goto L_8019F094; // 8019EF80
L_8019EF84:;
  c->r[3]=R32(c->r[7]+0x00000010u); // 8019EF84
  c->r[4]=c->r[1]+0x0000000Cu; // 8019EF88
  c->lr=0x8019EF90u; f_8019BC28(c); // 8019EF8C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019EF90
  c->r[31]=c->r[3]|c->r[3]; // 8019EF94
  cmps(c,0,(int32_t)c->r[0],0); // 8019EF98
  if (!crb(c,2)) { goto L_8019EFB0; } // 8019EF9C
  cmps(c,0,(int32_t)c->r[3],0); // 8019EFA0
  if (crb(c,2)) { goto L_8019EFB0; } // 8019EFA4
  c->r[0]=0u+0x00000001u; // 8019EFA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019EFAC
L_8019EFB0:;
  c->r[3]=0u+0x80390000u; // 8019EFB0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019EFB4
  c->r[3]=c->r[3]+0x00001D00u; // 8019EFB8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8019EFBC
  goto L_8019F094; // 8019EFC0
L_8019EFC4:;
  c->r[3]=R32(c->r[7]+0x00000014u); // 8019EFC4
  c->r[4]=c->r[1]+0x00000008u; // 8019EFC8
  c->r[0]=R32(c->r[7]+0x00000018u); // 8019EFCC
  c->r[6]=c->r[1]+0x0000000Cu; // 8019EFD0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8019EFD4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8019EFD8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 8019EFDC
  c->r[3]=R32(c->r[7]+0x00000010u); // 8019EFE0
  c->lr=0x8019EFE8u; f_8019BD0C(c); // 8019EFE4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019EFE8
  c->r[31]=c->r[3]|c->r[3]; // 8019EFEC
  cmps(c,0,(int32_t)c->r[0],0); // 8019EFF0
  if (!crb(c,2)) { goto L_8019F008; } // 8019EFF4
  cmps(c,0,(int32_t)c->r[3],0); // 8019EFF8
  if (crb(c,2)) { goto L_8019F008; } // 8019EFFC
  c->r[0]=0u+0x00000001u; // 8019F000
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019F004
L_8019F008:;
  c->r[3]=0u+0x80390000u; // 8019F008
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8019F00C
  c->r[3]=c->r[3]+0x00001D00u; // 8019F010
  c->r[0]=R32(c->r[1]+0x00000008u); // 8019F014
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8019F018
  c->r[3]=R32(c->r[3]+0x00000014u); // 8019F01C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8019F020
  goto L_8019F094; // 8019F024
L_8019F028:;
  c->r[0]=c->r[29]+0xFFFFFF2Fu; // 8019F028
  c->r[30]=R32(c->r[7]+0x00000014u); // 8019F02C
  c->r[0]=cntlz(c->r[0]); // 8019F030
  c->r[3]=R32(c->r[7]+0x00000010u); // 8019F034
  c->r[4]=R32(c->r[7]+0x00000018u); // 8019F038
  c->r[5]=c->r[30]|c->r[30]; // 8019F03C
  c->r[6]=c->r[1]+0x0000000Cu; // 8019F040
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019F044
  c->r[7]=0u+0x00000001u; // 8019F048
  c->lr=0x8019F050u; f_8019B7F4(c); // 8019F04C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019F050
  c->r[31]=c->r[3]|c->r[3]; // 8019F054
  cmps(c,0,(int32_t)c->r[0],0); // 8019F058
  if (!crb(c,2)) { goto L_8019F070; } // 8019F05C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F060
  if (crb(c,2)) { goto L_8019F070; } // 8019F064
  c->r[0]=0u+0x00000001u; // 8019F068
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019F06C
L_8019F070:;
  c->r[3]=0u+0x80390000u; // 8019F070
  cmps(c,0,(int32_t)c->r[29],209); // 8019F074
  c->r[3]=c->r[3]+0x00001D00u; // 8019F078
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019F07C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8019F080
  if (!crb(c,2)) { goto L_8019F094; } // 8019F084
  c->r[3]=R32(c->r[3]+0x00000018u); // 8019F088
  c->r[4]=R32(c->r[30]+0x00000000u); // 8019F08C
  c->lr=0x8019F094u; f_8019A770(c); // 8019F090
L_8019F094:;
  c->r[5]=0u+0x80390000u; // 8019F094
  c->r[3]=c->r[31]|c->r[31]; // 8019F098
  c->r[5]=c->r[5]+0x00001D00u; // 8019F09C
  c->r[4]=R32(c->r[5]+0x00000080u); // 8019F0A0
  c->r[0]=c->r[4]+0x00000004u; // 8019F0A4
  W32(c->r[5]+0x00000080u,c->r[0]); // 8019F0A8
L_8019F0AC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019F0AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8019F0B0
  c->r[30]=R32(c->r[1]+0x00000028u); // 8019F0B4
  c->r[29]=R32(c->r[1]+0x00000024u); // 8019F0B8
  c->lr=c->r[0]; // 8019F0BC
  c->r[1]=c->r[1]+0x00000030u; // 8019F0C0
  return; // 8019F0C4
}

// TRKTargetStopped
void f_8019F0C8(Ctx* __restrict c) {
  trace_call(0x8019F0C8u);
  c->r[3]=0u+0x80390000u; // 8019F0C8
  c->r[3]=c->r[3]+0x00001C58u; // 8019F0CC
  c->r[3]=R32(c->r[3]+0x00000098u); // 8019F0D0
  return; // 8019F0D4
}

// TRKTargetSetStopped
void f_8019F0D8(Ctx* __restrict c) {
  trace_call(0x8019F0D8u);
  c->r[4]=0u+0x80390000u; // 8019F0D8
  c->r[4]=c->r[4]+0x00001C58u; // 8019F0DC
  W32(c->r[4]+0x00000098u,c->r[3]); // 8019F0E0
  return; // 8019F0E4
}

// fn_8019F0E8
void f_8019F0E8(Ctx* __restrict c) {
  c->r[4]=0u+0x80390000u; // 8019F0E8
  c->r[0]=0u+0x00000001u; // 8019F0EC
  c->r[4]=c->r[4]+0x00001C58u; // 8019F0F0
  c->r[3]=0u+0x00000000u; // 8019F0F4
  W32(c->r[4]+0x00000098u,c->r[0]); // 8019F0F8
  return; // 8019F0FC
}

// fn_8019F100
void f_8019F100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F100
  c->r[0]=c->lr; // 8019F104
  cmps(c,0,(int32_t)c->r[5],0); // 8019F108
  W32(c->r[1]+0x00000044u,c->r[0]); // 8019F10C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8019F110
  W32(c->r[1]+0x00000038u,c->r[30]); // 8019F114
  W32(c->r[1]+0x00000034u,c->r[29]); // 8019F118
  c->r[29]=0u+0x802E0000u; // 8019F11C
  {uint32_t ea=c->r[29]+0x00000DE0u; c->r[30]=R32(ea); c->r[29]=ea;} // 8019F120
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019F124
  c->r[31]=R32(c->r[29]+0x00000004u); // 8019F128
  c->r[12]=R32(c->r[29]+0x00000008u); // 8019F12C
  c->r[11]=R32(c->r[29]+0x0000000Cu); // 8019F130
  c->r[10]=R32(c->r[29]+0x00000010u); // 8019F134
  c->r[9]=R32(c->r[29]+0x00000014u); // 8019F138
  c->r[8]=R32(c->r[29]+0x00000018u); // 8019F13C
  c->r[7]=R32(c->r[29]+0x0000001Cu); // 8019F140
  c->r[6]=R32(c->r[29]+0x00000020u); // 8019F144
  c->r[0]=R32(c->r[29]+0x00000024u); // 8019F148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F14C
  W32(c->r[1]+0x00000010u,c->r[12]); // 8019F150
  W32(c->r[1]+0x00000014u,c->r[11]); // 8019F154
  W32(c->r[1]+0x00000018u,c->r[10]); // 8019F158
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 8019F15C
  W32(c->r[1]+0x00000020u,c->r[8]); // 8019F160
  W32(c->r[1]+0x00000024u,c->r[7]); // 8019F164
  W32(c->r[1]+0x00000028u,c->r[6]); // 8019F168
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8019F16C
  if (crb(c,2)) { goto L_8019F198; } // 8019F170
  c->r[0]=rotl(c->r[4],6)&0x0003F800u; // 8019F174
  c->r[4]=rotl(c->r[4],16)&0x001F0000u; // 8019F178
  c->r[6]=c->r[0]|0x7C800000u; // 8019F17C
  c->r[0]=0u+0x90830000u; // 8019F180
  c->r[4]=c->r[4]|0x000002A6u; // 8019F184
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019F188
  c->r[0]=c->r[6]|c->r[4]; // 8019F18C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019F190
  goto L_8019F1B8; // 8019F194
L_8019F198:;
  c->r[0]=rotl(c->r[4],16)&0x001F0000u; // 8019F198
  c->r[6]=rotl(c->r[4],6)&0x0003F800u; // 8019F19C
  c->r[4]=c->r[6]|0x7C800000u; // 8019F1A0
  c->r[0]=c->r[0]|0x000003A6u; // 8019F1A4
  c->r[6]=0u+0x80830000u; // 8019F1A8
  c->r[0]=c->r[4]|c->r[0]; // 8019F1AC
  W32(c->r[1]+0x00000008u,c->r[6]); // 8019F1B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019F1B4
L_8019F1B8:;
  c->r[4]=c->r[1]+0x00000008u; // 8019F1B8
  c->lr=0x8019F1C0u; f_8019F494(c); // 8019F1BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8019F1C0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8019F1C4
  c->r[30]=R32(c->r[1]+0x00000038u); // 8019F1C8
  c->r[29]=R32(c->r[1]+0x00000034u); // 8019F1CC
  c->lr=c->r[0]; // 8019F1D0
  c->r[1]=c->r[1]+0x00000040u; // 8019F1D4
  return; // 8019F1D8
}

// fn_8019F1DC
void f_8019F1DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F1DC
  c->r[0]=c->lr; // 8019F1E0
  c->r[6]=0u+0x802E0000u; // 8019F1E4
  cmps(c,0,(int32_t)c->r[5],0); // 8019F1E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8019F1EC
  c->r[0]=rotl(c->r[4],21)&0xFFE00000u; // 8019F1F0
  c->r[4]=c->r[0]|0xE0030000u; // 8019F1F4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8019F1F8
  W32(c->r[1]+0x00000038u,c->r[30]); // 8019F1FC
  W32(c->r[1]+0x00000034u,c->r[29]); // 8019F200
  {uint32_t ea=c->r[6]+0x00000E08u; c->r[29]=R32(ea); c->r[6]=ea;} // 8019F204
  W32(c->r[1]+0x00000008u,c->r[29]); // 8019F208
  c->r[30]=R32(c->r[6]+0x00000004u); // 8019F20C
  c->r[31]=R32(c->r[6]+0x00000008u); // 8019F210
  c->r[12]=R32(c->r[6]+0x0000000Cu); // 8019F214
  c->r[11]=R32(c->r[6]+0x00000010u); // 8019F218
  c->r[10]=R32(c->r[6]+0x00000014u); // 8019F21C
  c->r[9]=R32(c->r[6]+0x00000018u); // 8019F220
  c->r[8]=R32(c->r[6]+0x0000001Cu); // 8019F224
  c->r[7]=R32(c->r[6]+0x00000020u); // 8019F228
  c->r[6]=R32(c->r[6]+0x00000024u); // 8019F22C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 8019F230
  W32(c->r[1]+0x00000010u,c->r[31]); // 8019F234
  W32(c->r[1]+0x00000014u,c->r[12]); // 8019F238
  W32(c->r[1]+0x00000018u,c->r[11]); // 8019F23C
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 8019F240
  W32(c->r[1]+0x00000020u,c->r[9]); // 8019F244
  W32(c->r[1]+0x00000024u,c->r[8]); // 8019F248
  W32(c->r[1]+0x00000028u,c->r[7]); // 8019F24C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8019F250
  if (crb(c,2)) { goto L_8019F25C; } // 8019F254
  c->r[4]=c->r[0]|0xF0030000u; // 8019F258
L_8019F25C:;
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019F25C
  c->r[4]=c->r[1]+0x00000008u; // 8019F260
  c->lr=0x8019F268u; f_8019F494(c); // 8019F264
  c->r[0]=R32(c->r[1]+0x00000044u); // 8019F268
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8019F26C
  c->r[30]=R32(c->r[1]+0x00000038u); // 8019F270
  c->r[29]=R32(c->r[1]+0x00000034u); // 8019F274
  c->lr=c->r[0]; // 8019F278
  c->r[1]=c->r[1]+0x00000040u; // 8019F27C
  return; // 8019F280
}

// ReadFPSCR
void f_8019F284(Ctx* __restrict c) {
  trace_call(0x8019F284u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F284
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8019F288
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 8019F28C
  c->f[31]=u2d((uint64_t)c->fpscr); // 8019F290
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[31]);} // 8019F294
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 8019F298
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8019F29C
  c->r[1]=c->r[1]+0x00000040u; // 8019F2A0
  return; // 8019F2A4
}

// WriteFPSCR
void f_8019F2A8(Ctx* __restrict c) {
  trace_call(0x8019F2A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F2A8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8019F2AC
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 8019F2B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=RF64(ea);} // 8019F2B4
  c->fpscr=(uint32_t)d2u(c->f[31]); // 8019F2B8
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 8019F2BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8019F2C0
  c->r[1]=c->r[1]+0x00000040u; // 8019F2C4
  return; // 8019F2C8
}

// fn_8019F2CC
void f_8019F2CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F2CC
  c->r[0]=c->lr; // 8019F2D0
  cmpu(c,0,c->r[4],0x00000020u); // 8019F2D4
  W32(c->r[1]+0x00000074u,c->r[0]); // 8019F2D8
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8019F2DC
  c->r[26]=0u+0x802E0000u; // 8019F2E0
  c->r[29]=c->r[3]|c->r[3]; // 8019F2E4
  c->r[30]=c->r[5]|c->r[5]; // 8019F2E8
  c->r[31]=0u+0x00000000u; // 8019F2EC
  {uint32_t ea=c->r[26]+0x00000E30u; c->r[27]=R32(ea); c->r[26]=ea;} // 8019F2F0
  W32(c->r[1]+0x00000030u,c->r[27]); // 8019F2F4
  c->r[28]=R32(c->r[26]+0x00000004u); // 8019F2F8
  c->r[12]=R32(c->r[26]+0x00000008u); // 8019F2FC
  c->r[11]=R32(c->r[26]+0x0000000Cu); // 8019F300
  c->r[10]=R32(c->r[26]+0x00000010u); // 8019F304
  c->r[9]=R32(c->r[26]+0x00000014u); // 8019F308
  c->r[8]=R32(c->r[26]+0x00000018u); // 8019F30C
  c->r[7]=R32(c->r[26]+0x0000001Cu); // 8019F310
  c->r[6]=R32(c->r[26]+0x00000020u); // 8019F314
  c->r[0]=R32(c->r[26]+0x00000024u); // 8019F318
  W32(c->r[1]+0x00000034u,c->r[28]); // 8019F31C
  W32(c->r[1]+0x00000038u,c->r[12]); // 8019F320
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 8019F324
  W32(c->r[1]+0x00000040u,c->r[10]); // 8019F328
  W32(c->r[1]+0x00000044u,c->r[9]); // 8019F32C
  W32(c->r[1]+0x00000048u,c->r[8]); // 8019F330
  W32(c->r[1]+0x0000004Cu,c->r[7]); // 8019F334
  W32(c->r[1]+0x00000050u,c->r[6]); // 8019F338
  W32(c->r[1]+0x00000054u,c->r[0]); // 8019F33C
  if (!crb(c,0)) { goto L_8019F374; } // 8019F340
  cmps(c,0,(int32_t)c->r[5],0); // 8019F344
  c->r[0]=rotl(c->r[4],21)&0xFFE00000u; // 8019F348
  c->r[3]=c->r[0]|0xC8030000u; // 8019F34C
  if (crb(c,2)) { goto L_8019F358; } // 8019F350
  c->r[3]=c->r[0]|0xD8030000u; // 8019F354
L_8019F358:;
  W32(c->r[1]+0x00000030u,c->r[3]); // 8019F358
  c->r[3]=c->r[29]|c->r[29]; // 8019F35C
  c->r[5]=c->r[30]|c->r[30]; // 8019F360
  c->r[4]=c->r[1]+0x00000030u; // 8019F364
  c->lr=0x8019F36Cu; f_8019F494(c); // 8019F368
  c->r[31]=c->r[3]|c->r[3]; // 8019F36C
  goto L_8019F47C; // 8019F370
L_8019F374:;
  if (!crb(c,2)) { goto L_8019F3A8; } // 8019F374
  cmps(c,0,(int32_t)c->r[5],0); // 8019F378
  if (crb(c,2)) { goto L_8019F388; } // 8019F37C
  c->lr=0x8019F384u; f_8019F284(c); // 8019F380
  goto L_8019F38C; // 8019F384
L_8019F388:;
  c->lr=0x8019F38Cu; f_8019F2A8(c); // 8019F388
L_8019F38C:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 8019F38C
  c->r[0]=0u+0x00000000u; // 8019F390
  c->r[3]=0u+0xFFFFFFFFu; // 8019F394
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019F398
  c->r[0]=c->r[4]&c->r[3]; // 8019F39C
  W32(c->r[29]+0x00000004u,c->r[0]); // 8019F3A0
  goto L_8019F47C; // 8019F3A4
L_8019F3A8:;
  cmpu(c,0,c->r[4],0x00000021u); // 8019F3A8
  if (!crb(c,2)) { goto L_8019F47C; } // 8019F3AC
  cmps(c,0,(int32_t)c->r[5],0); // 8019F3B0
  if (!crb(c,2)) { goto L_8019F3C0; } // 8019F3B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8019F3B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8019F3BC
L_8019F3C0:;
  c->r[12]=0u+0x802E0000u; // 8019F3C0
  {uint32_t ea=c->r[12]+0x00000DE0u; c->r[11]=R32(ea); c->r[12]=ea;} // 8019F3C4
  cmps(c,0,(int32_t)c->r[5],0); // 8019F3C8
  W32(c->r[1]+0x00000008u,c->r[11]); // 8019F3CC
  c->r[10]=R32(c->r[12]+0x00000004u); // 8019F3D0
  c->r[9]=R32(c->r[12]+0x00000008u); // 8019F3D4
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 8019F3D8
  c->r[7]=R32(c->r[12]+0x00000010u); // 8019F3DC
  c->r[6]=R32(c->r[12]+0x00000014u); // 8019F3E0
  c->r[5]=R32(c->r[12]+0x00000018u); // 8019F3E4
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 8019F3E8
  c->r[3]=R32(c->r[12]+0x00000020u); // 8019F3EC
  c->r[0]=R32(c->r[12]+0x00000024u); // 8019F3F0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8019F3F4
  W32(c->r[1]+0x00000010u,c->r[9]); // 8019F3F8
  W32(c->r[1]+0x00000014u,c->r[8]); // 8019F3FC
  W32(c->r[1]+0x00000018u,c->r[7]); // 8019F400
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 8019F404
  W32(c->r[1]+0x00000020u,c->r[5]); // 8019F408
  W32(c->r[1]+0x00000024u,c->r[4]); // 8019F40C
  W32(c->r[1]+0x00000028u,c->r[3]); // 8019F410
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8019F414
  if (crb(c,2)) { goto L_8019F434; } // 8019F418
  c->r[3]=0u+0x7C9F0000u; // 8019F41C
  c->r[0]=0u+0x90830000u; // 8019F420
  c->r[3]=c->r[3]+0xFFFFFAA6u; // 8019F424
  W32(c->r[1]+0x00000008u,c->r[3]); // 8019F428
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019F42C
  goto L_8019F448; // 8019F430
L_8019F434:;
  c->r[3]=0u+0x7C9F0000u; // 8019F434
  c->r[4]=0u+0x80830000u; // 8019F438
  c->r[0]=c->r[3]+0xFFFFFBA6u; // 8019F43C
  W32(c->r[1]+0x00000008u,c->r[4]); // 8019F440
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019F444
L_8019F448:;
  c->r[3]=c->r[29]|c->r[29]; // 8019F448
  c->r[5]=c->r[30]|c->r[30]; // 8019F44C
  c->r[4]=c->r[1]+0x00000008u; // 8019F450
  c->lr=0x8019F458u; f_8019F494(c); // 8019F454
  cmps(c,0,(int32_t)c->r[30],0); // 8019F458
  c->r[31]=c->r[3]|c->r[3]; // 8019F45C
  if (crb(c,2)) { goto L_8019F47C; } // 8019F460
  c->r[4]=R32(c->r[29]+0x00000000u); // 8019F464
  c->r[3]=0u+0xFFFFFFFFu; // 8019F468
  c->r[0]=0u+0x00000000u; // 8019F46C
  c->r[3]=c->r[4]&c->r[3]; // 8019F470
  W32(c->r[29]+0x00000004u,c->r[3]); // 8019F474
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019F478
L_8019F47C:;
  c->r[3]=c->r[31]|c->r[31]; // 8019F47C
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8019F480
  c->r[0]=R32(c->r[1]+0x00000074u); // 8019F484
  c->lr=c->r[0]; // 8019F488
  c->r[1]=c->r[1]+0x00000070u; // 8019F48C
  return; // 8019F490
}

// fn_8019F494
void f_8019F494(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F494
  c->r[0]=c->lr; // 8019F498
  c->r[5]=0u+0x4E800000u; // 8019F49C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F4A0
  c->r[0]=c->r[5]+0x00000020u; // 8019F4A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F4A8
  c->r[31]=c->r[4]|c->r[4]; // 8019F4AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019F4B0
  c->r[30]=c->r[3]|c->r[3]; // 8019F4B4
  c->r[3]=c->r[31]|c->r[31]; // 8019F4B8
  W32(c->r[4]+0x00000024u,c->r[0]); // 8019F4BC
  c->r[4]=0u+0x00000028u; // 8019F4C0
  c->lr=0x8019F4C8u; f_8019A770(c); // 8019F4C4
  c->r[4]=0u+0x80390000u; // 8019F4C8
  c->r[12]=c->r[31]|c->r[31]; // 8019F4CC
  c->r[3]=c->r[30]|c->r[30]; // 8019F4D0
  c->r[4]=c->r[4]+0x00001C48u; // 8019F4D4
  c->ctr=c->r[12]; // 8019F4D8
  if (true) { c->lr=0x8019F4E0u; dispatch(c,c->ctr); } // 8019F4DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F4E0
  c->r[3]=0u+0x00000000u; // 8019F4E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019F4E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F4EC
  c->lr=c->r[0]; // 8019F4F0
  c->r[1]=c->r[1]+0x00000010u; // 8019F4F4
  return; // 8019F4F8
}

// TRKTargetSetInputPendingPtr
void f_8019F4FC(Ctx* __restrict c) {
  trace_call(0x8019F4FCu);
  c->r[4]=0u+0x80390000u; // 8019F4FC
  c->r[4]=c->r[4]+0x00001C58u; // 8019F500
  W32(c->r[4]+0x000000A0u,c->r[3]); // 8019F504
  return; // 8019F508
}

// fn_8019F50C
void f_8019F50C(Ctx* __restrict c) {
  c->r[3]=c->r[3]|0x80000000u; // 8019F50C
  return; // 8019F510
}

// fn_8019F514
void f_8019F514(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 8019F514
  W32(c->r[3]+0x00000000u,c->r[0]); // 8019F518
  c->r[0]=0u+0x00000000u; // 8019F51C
  c->r[5]=0u+0x80000000u; // 8019F520
  W32(c->r[4]+0x00000000u,c->r[0]); // 8019F524
  c->r[7]=R32(c->r[5]+0x000000DCu); // 8019F528
  c->r[0]=c->r[7]+0x00010000u; // 8019F52C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8019F530
  if (crb(c,2)) return; // 8019F534
  cmps(c,0,(int32_t)c->r[7],0); // 8019F538
  if (crb(c,2)) return; // 8019F53C
  c->r[0]=c->r[7]+0x80000000u; // 8019F540
  cmpu(c,0,c->r[0],0x00000000u); // 8019F544
  if (!crb(c,2)) { goto L_8019F550; } // 8019F548
  return; // 8019F54C
L_8019F550:;
  c->r[6]=0u+0x00000000u; // 8019F550
  goto L_8019F594; // 8019F554
L_8019F558:;
  c->r[0]=R32(c->r[5]+0x000000E4u); // 8019F558
  cmpu(c,0,c->r[7],c->r[0]); // 8019F55C
  if (!crb(c,2)) { goto L_8019F568; } // 8019F560
  W32(c->r[4]+0x00000000u,c->r[6]); // 8019F564
L_8019F568:;
  c->r[0]=R32(c->r[7]+0x000002FCu); // 8019F568
  c->r[6]=c->r[6]+0x00000001u; // 8019F56C
  c->r[7]=c->r[0]|0x80000000u; // 8019F570
  c->r[0]=c->r[7]+0x00010000u; // 8019F574
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8019F578
  if (crb(c,2)) { goto L_8019F59C; } // 8019F57C
  cmps(c,0,(int32_t)c->r[7],0); // 8019F580
  if (crb(c,2)) { goto L_8019F59C; } // 8019F584
  c->r[0]=c->r[7]+0x80000000u; // 8019F588
  cmpu(c,0,c->r[0],0x00000000u); // 8019F58C
  if (crb(c,2)) { goto L_8019F59C; } // 8019F590
L_8019F594:;
  cmps(c,0,(int32_t)c->r[7],0); // 8019F594
  if (!crb(c,2)) { IRQCHK(c); goto L_8019F558; } // 8019F598
L_8019F59C:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 8019F59C
  return; // 8019F5A0
}

// fn_8019F5A4
void f_8019F5A4(Ctx* __restrict c) {
  W8(c->r[13]+0xFFFFA140u,c->r[3]); // 8019F5A4
  return; // 8019F5A8
}

// fn_8019F5AC
void f_8019F5AC(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFFA140u); // 8019F5AC
  return; // 8019F5B0
}

// __DBMtrHandler
void f_8019F5B4(Ctx* __restrict c) {
  trace_call(0x8019F5B4u);
  c->r[12]=R32(c->r[13]+0xFFFFA148u); // 8019F5B4
  c->r[0]=0u+0x00000001u; // 8019F5B8
  W8(c->r[13]+0xFFFFA150u,c->r[0]); // 8019F5BC
  cmps(c,0,(int32_t)c->r[12],0); // 8019F5C0
  if (crb(c,2)) return; // 8019F5C4
  c->r[3]=0u+0x00000000u; // 8019F5C8
  c->ctr=c->r[12]; // 8019F5CC
  if (true) { dispatch(c,c->ctr); return; } // 8019F5D0
  return; // 8019F5D4
}

// __DBIntrHandler
void f_8019F5D8(Ctx* __restrict c) {
  trace_call(0x8019F5D8u);
  c->r[0]=0u+0x00001000u; // 8019F5D8
  c->r[5]=0u+0xCC000000u; // 8019F5DC
  W32(c->r[5]+0x00003000u,c->r[0]); // 8019F5E0
  c->r[12]=R32(c->r[13]+0xFFFFA14Cu); // 8019F5E4
  cmps(c,0,(int32_t)c->r[12],0); // 8019F5E8
  if (crb(c,2)) return; // 8019F5EC
  c->ctr=c->r[12]; // 8019F5F0
  if (true) { dispatch(c,c->ctr); return; } // 8019F5F4
  return; // 8019F5F8
}

// DBInitComm
void f_8019F5FC(Ctx* __restrict c) {
  trace_call(0x8019F5FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F5FC
  c->r[0]=c->lr; // 8019F600
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019F604
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019F608
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019F60C
  c->r[30]=c->r[4]|c->r[4]; // 8019F610
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019F614
  c->r[29]=c->r[3]|c->r[3]; // 8019F618
  c->lr=0x8019F620u; f_80160C68(c); // 8019F61C
  c->r[0]=c->r[13]+0xFFFFA150u; // 8019F620
  c->r[31]=c->r[3]|c->r[3]; // 8019F624
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019F628
  W32(c->r[13]+0xFFFFA148u,c->r[30]); // 8019F62C
  c->lr=0x8019F634u; f_8019FBD0(c); // 8019F630
  c->r[3]=c->r[31]|c->r[31]; // 8019F634
  c->lr=0x8019F63Cu; f_80160C90(c); // 8019F638
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019F63C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019F640
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019F644
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019F648
  c->lr=c->r[0]; // 8019F64C
  c->r[1]=c->r[1]+0x00000020u; // 8019F650
  return; // 8019F654
}

// DBInitInterrupts
void f_8019F658(Ctx* __restrict c) {
  trace_call(0x8019F658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F658
  c->r[0]=c->lr; // 8019F65C
  c->r[3]=0u+0x00020000u; // 8019F660
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F664
  c->r[3]=c->r[3]+0xFFFF8000u; // 8019F668
  c->lr=0x8019F670u; f_80160FF8(c); // 8019F66C
  c->r[3]=0u+0x00000040u; // 8019F670
  c->lr=0x8019F678u; f_80160FF8(c); // 8019F674
  c->r[3]=0u+0x801A0000u; // 8019F678
  c->r[4]=0u+0x801A0000u; // 8019F67C
  c->r[3]=c->r[3]+0xFFFFF5B4u; // 8019F680
  W32(c->r[13]+0xFFFFA14Cu,c->r[3]); // 8019F684
  c->r[4]=c->r[4]+0xFFFFF5D8u; // 8019F688
  c->r[3]=0u+0x00000019u; // 8019F68C
  c->lr=0x8019F694u; f_80160CB4(c); // 8019F690
  c->r[3]=0u+0x00000040u; // 8019F694
  c->lr=0x8019F69Cu; f_80161078(c); // 8019F698
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F69C
  c->lr=c->r[0]; // 8019F6A0
  c->r[1]=c->r[1]+0x00000010u; // 8019F6A4
  return; // 8019F6A8
}

// DBQueryData
void f_8019F6AC(Ctx* __restrict c) {
  trace_call(0x8019F6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F6AC
  c->r[0]=c->lr; // 8019F6B0
  c->r[3]=0u+0x00000000u; // 8019F6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019F6B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019F6BC
  c->r[0]=R32(c->r[13]+0xFFFFA158u); // 8019F6C0
  W8(c->r[13]+0xFFFFA150u,c->r[3]); // 8019F6C4
  cmps(c,0,(int32_t)c->r[0],0); // 8019F6C8
  if (!crb(c,2)) { goto L_8019F738; } // 8019F6CC
  c->lr=0x8019F6D4u; f_80160C68(c); // 8019F6D0
  c->r[31]=c->r[3]|c->r[3]; // 8019F6D4
  c->r[4]=c->r[1]+0x00000008u; // 8019F6D8
  c->r[3]=0u+0x34000000u; // 8019F6DC
  c->r[5]=0u+0x00000001u; // 8019F6E0
  c->lr=0x8019F6E8u; f_8019FC8C(c); // 8019F6E4
  c->r[0]=R8(c->r[1]+0x00000008u); // 8019F6E8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8019F6EC
  if (!crb(c,2)) { goto L_8019F730; } // 8019F6F0
  c->r[3]=0u+0x34000000u; // 8019F6F4
  c->r[4]=c->r[1]+0x0000000Cu; // 8019F6F8
  c->r[3]=c->r[3]+0x00000200u; // 8019F6FC
  c->r[5]=0u+0x00000004u; // 8019F700
  c->lr=0x8019F708u; f_8019FC8C(c); // 8019F704
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8019F708
  c->r[3]=rotl(c->r[4],0)&0x1F000000u; // 8019F70C
  c->r[0]=c->r[3]+0xE1000000u; // 8019F710
  cmpu(c,0,c->r[0],0x00000000u); // 8019F714
  if (!crb(c,2)) { goto L_8019F730; } // 8019F718
  c->r[3]=rotl(c->r[4],0)&0x00001FFFu; // 8019F71C
  c->r[0]=0u+0x00000001u; // 8019F720
  W32(c->r[13]+0xFFFFA154u,c->r[4]); // 8019F724
  W32(c->r[13]+0xFFFFA158u,c->r[3]); // 8019F728
  W8(c->r[13]+0xFFFFA150u,c->r[0]); // 8019F72C
L_8019F730:;
  c->r[3]=c->r[31]|c->r[31]; // 8019F730
  c->lr=0x8019F738u; f_80160C90(c); // 8019F734
L_8019F738:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019F738
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019F73C
  c->r[3]=R32(c->r[13]+0xFFFFA158u); // 8019F740
  c->lr=c->r[0]; // 8019F744
  c->r[1]=c->r[1]+0x00000020u; // 8019F748
  return; // 8019F74C
}

// DBRead
void f_8019F750(Ctx* __restrict c) {
  trace_call(0x8019F750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F750
  c->r[0]=c->lr; // 8019F754
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F758
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F75C
  c->r[31]=c->r[4]|c->r[4]; // 8019F760
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019F764
  c->r[30]=c->r[3]|c->r[3]; // 8019F768
  c->lr=0x8019F770u; f_80160C68(c); // 8019F76C
  c->r[5]=R32(c->r[13]+0xFFFFA154u); // 8019F770
  c->r[0]=c->r[31]+0x00000003u; // 8019F774
  c->r[31]=c->r[3]|c->r[3]; // 8019F778
  c->r[4]=c->r[30]|c->r[30]; // 8019F77C
  c->r[3]=rotl(c->r[5],16)&0x00000001u; // 8019F780
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8019F784
  c->r[0]=0u-c->r[3]; // 8019F788
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 8019F78C
  c->r[3]=c->r[3]+0x00D10000u; // 8019F790
  c->r[0]=c->r[3]+0x00001000u; // 8019F794
  c->r[3]=rotl(c->r[0],6)&0x3FFFFF00u; // 8019F798
  c->lr=0x8019F7A0u; f_8019FEB4(c); // 8019F79C
  c->r[0]=0u+0x00000000u; // 8019F7A0
  c->r[3]=c->r[31]|c->r[31]; // 8019F7A4
  W32(c->r[13]+0xFFFFA158u,c->r[0]); // 8019F7A8
  W8(c->r[13]+0xFFFFA150u,c->r[0]); // 8019F7AC
  c->lr=0x8019F7B4u; f_80160C90(c); // 8019F7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F7B4
  c->r[3]=0u+0x00000000u; // 8019F7B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019F7BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F7C0
  c->lr=c->r[0]; // 8019F7C4
  c->r[1]=c->r[1]+0x00000010u; // 8019F7C8
  return; // 8019F7CC
}

// DBWrite
void f_8019F7D0(Ctx* __restrict c) {
  trace_call(0x8019F7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F7D0
  c->r[0]=c->lr; // 8019F7D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019F7D8
  c->r[11]=c->r[1]+0x00000030u; // 8019F7DC
  c->lr=0x8019F7E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8019F7E0
  c->r[27]=c->r[3]|c->r[3]; // 8019F7E4
  c->r[28]=c->r[4]|c->r[4]; // 8019F7E8
  c->lr=0x8019F7F0u; f_80160C68(c); // 8019F7EC
  c->r[31]=c->r[3]|c->r[3]; // 8019F7F0
L_8019F7F4:;
  c->r[4]=c->r[1]+0x0000000Au; // 8019F7F4
  c->r[3]=0u+0x34000000u; // 8019F7F8
  c->r[5]=0u+0x00000001u; // 8019F7FC
  c->lr=0x8019F804u; f_8019FC8C(c); // 8019F800
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8019F804
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8019F808
  if (!crb(c,2)) { IRQCHK(c); goto L_8019F7F4; } // 8019F80C
  c->r[3]=R8(c->r[13]+0xFFFF9298u); // 8019F810
  c->r[0]=c->r[28]+0x00000003u; // 8019F814
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8019F818
  c->r[3]=c->r[3]+0x00000001u; // 8019F81C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8019F820
  W8(c->r[13]+0xFFFF9298u,c->r[3]); // 8019F824
  c->r[0]=0u-c->r[0]; // 8019F828
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 8019F82C
  c->r[0]=c->r[3]+0x00D10000u; // 8019F830
  c->r[0]=rotl(c->r[0],6)&0x3FFFFF00u; // 8019F834
  c->r[30]=c->r[0]|0x80000000u; // 8019F838
L_8019F83C:;
  c->r[3]=c->r[30]|c->r[30]; // 8019F83C
  c->r[4]=c->r[27]|c->r[27]; // 8019F840
  c->r[5]=c->r[29]|c->r[29]; // 8019F844
  c->lr=0x8019F84Cu; f_8019FF94(c); // 8019F848
  cmps(c,0,(int32_t)c->r[3],0); // 8019F84C
  if (crb(c,2)) { IRQCHK(c); goto L_8019F83C; } // 8019F850
L_8019F854:;
  c->r[4]=c->r[1]+0x00000009u; // 8019F854
  c->r[3]=0u+0x34000000u; // 8019F858
  c->r[5]=0u+0x00000001u; // 8019F85C
  c->lr=0x8019F864u; f_8019FC8C(c); // 8019F860
  c->r[0]=R8(c->r[1]+0x00000009u); // 8019F864
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8019F868
  if (!crb(c,2)) { IRQCHK(c); goto L_8019F854; } // 8019F86C
  c->r[3]=R8(c->r[13]+0xFFFF9298u); // 8019F870
  c->r[0]=rotl(c->r[28],0)&0x00001FFFu; // 8019F874
  c->r[29]=c->r[0]|0x1F000000u; // 8019F878
  c->r[30]=0u+0xB4000000u; // 8019F87C
  c->r[29]=(rotl(c->r[3],16)&0x00FF0000u)|(c->r[29]&~0x00FF0000u); // 8019F880
L_8019F884:;
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8019F884
  c->r[3]=c->r[30]+0x00000100u; // 8019F888
  c->r[4]=c->r[1]+0x0000000Cu; // 8019F88C
  c->r[5]=0u+0x00000004u; // 8019F890
  c->lr=0x8019F898u; f_8019FDB0(c); // 8019F894
  cmps(c,0,(int32_t)c->r[3],0); // 8019F898
  if (crb(c,2)) { IRQCHK(c); goto L_8019F884; } // 8019F89C
L_8019F8A0:;
  c->r[4]=c->r[1]+0x00000008u; // 8019F8A0
  c->r[3]=0u+0x34000000u; // 8019F8A4
  c->r[5]=0u+0x00000001u; // 8019F8A8
  c->lr=0x8019F8B0u; f_8019FC8C(c); // 8019F8AC
  c->r[0]=R8(c->r[1]+0x00000008u); // 8019F8B0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8019F8B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8019F8A0; } // 8019F8B8
  c->r[3]=c->r[31]|c->r[31]; // 8019F8BC
  c->lr=0x8019F8C4u; f_80160C90(c); // 8019F8C0
  c->r[11]=c->r[1]+0x00000030u; // 8019F8C4
  c->r[3]=0u+0x00000000u; // 8019F8C8
  c->lr=0x8019F8D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8019F8CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019F8D0
  c->lr=c->r[0]; // 8019F8D4
  c->r[1]=c->r[1]+0x00000030u; // 8019F8D8
  return; // 8019F8DC
}

// fn_8019F8E0
void f_8019F8E0(Ctx* __restrict c) {
  return; // 8019F8E0
}

// fn_8019F8E4
void f_8019F8E4(Ctx* __restrict c) {
  return; // 8019F8E4
}

// __EXI2Imm
void f_8019F8E8(Ctx* __restrict c) {
  trace_call(0x8019F8E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F8E8
  c->r[0]=c->lr; // 8019F8EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019F8F0
  c->r[11]=c->r[1]+0x00000020u; // 8019F8F4
  c->lr=0x8019F8FCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8019F8F8
  cmps(c,0,(int32_t)c->r[5],0); // 8019F8FC
  if (crb(c,2)) { goto L_8019FA5C; } // 8019F900
  cmps(c,1,(int32_t)c->r[4],0); // 8019F904
  c->r[0]=0u+0x00000000u; // 8019F908
  c->r[7]=0u+0x00000000u; // 8019F90C
  if (!crb(c,5)) { goto L_8019FA54; } // 8019F910
  cmps(c,0,(int32_t)c->r[4],8); // 8019F914
  c->r[9]=c->r[4]+0xFFFFFFF8u; // 8019F918
  if (!crb(c,1)) { goto L_8019FA20; } // 8019F91C
  c->r[8]=0u+0x00000000u; // 8019F920
  if (crb(c,4)) { goto L_8019F93C; } // 8019F924
  c->r[6]=0u+0x80000000u; // 8019F928
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 8019F92C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 8019F930
  if (crb(c,1)) { goto L_8019F93C; } // 8019F934
  c->r[8]=0u+0x00000001u; // 8019F938
L_8019F93C:;
  cmps(c,0,(int32_t)c->r[8],0); // 8019F93C
  if (crb(c,2)) { goto L_8019FA20; } // 8019F940
  c->r[8]=c->r[9]+0x00000007u; // 8019F944
  c->r[6]=c->r[3]|c->r[3]; // 8019F948
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 8019F94C
  c->ctr=c->r[8]; // 8019F950
  cmps(c,0,(int32_t)c->r[9],0); // 8019F954
  if (!crb(c,1)) { goto L_8019FA20; } // 8019F958
L_8019F95C:;
  c->r[9]=addc(c,~c->r[7],0x00000003u,1); // 8019F95C
  c->r[8]=c->r[7]+0x00000001u; // 8019F960
  c->r[28]=addc(c,~c->r[8],0x00000003u,1); // 8019F964
  c->r[10]=R8(c->r[6]+0x00000000u); // 8019F968
  c->r[8]=c->r[7]+0x00000002u; // 8019F96C
  c->r[27]=R8(c->r[6]+0x00000001u); // 8019F970
  c->r[29]=addc(c,~c->r[8],0x00000003u,1); // 8019F974
  c->r[28]=rotl(c->r[28],3)&0xFFFFFFF8u; // 8019F978
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 8019F97C
  c->r[12]=0u-c->r[7]; // 8019F980
  c->r[26]=((c->r[8])&0x20)?0u:(c->r[10]<<((c->r[8])&31)); // 8019F984
  c->r[30]=rotl(c->r[29],3)&0xFFFFFFF8u; // 8019F988
  c->r[31]=R8(c->r[6]+0x00000002u); // 8019F98C
  c->r[8]=c->r[7]+0x00000004u; // 8019F990
  c->r[11]=addc(c,~c->r[8],0x00000003u,1); // 8019F994
  c->r[0]=c->r[0]|c->r[26]; // 8019F998
  c->r[28]=((c->r[28])&0x20)?0u:(c->r[27]<<((c->r[28])&31)); // 8019F99C
  c->r[8]=c->r[7]+0x00000005u; // 8019F9A0
  c->r[31]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 8019F9A4
  c->r[29]=R8(c->r[6]+0x00000003u); // 8019F9A8
  c->r[12]=rotl(c->r[12],3)&0xFFFFFFF8u; // 8019F9AC
  c->r[0]=c->r[0]|c->r[28]; // 8019F9B0
  c->r[10]=addc(c,~c->r[8],0x00000003u,1); // 8019F9B4
  c->r[8]=c->r[7]+0x00000006u; // 8019F9B8
  c->r[29]=((c->r[12])&0x20)?0u:(c->r[29]<<((c->r[12])&31)); // 8019F9BC
  c->r[0]=c->r[0]|c->r[31]; // 8019F9C0
  c->r[9]=addc(c,~c->r[8],0x00000003u,1); // 8019F9C4
  c->r[8]=c->r[7]+0x00000007u; // 8019F9C8
  c->r[12]=rotl(c->r[10],3)&0xFFFFFFF8u; // 8019F9CC
  c->r[31]=R8(c->r[6]+0x00000005u); // 8019F9D0
  c->r[8]=addc(c,~c->r[8],0x00000003u,1); // 8019F9D4
  c->r[10]=rotl(c->r[9],3)&0xFFFFFFF8u; // 8019F9D8
  c->r[30]=R8(c->r[6]+0x00000004u); // 8019F9DC
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 8019F9E0
  c->r[0]=c->r[0]|c->r[29]; // 8019F9E4
  c->r[9]=R8(c->r[6]+0x00000007u); // 8019F9E8
  c->r[30]=((c->r[11])&0x20)?0u:(c->r[30]<<((c->r[11])&31)); // 8019F9EC
  c->r[11]=R8(c->r[6]+0x00000006u); // 8019F9F0
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 8019F9F4
  c->r[12]=((c->r[12])&0x20)?0u:(c->r[31]<<((c->r[12])&31)); // 8019F9F8
  c->r[0]=c->r[0]|c->r[30]; // 8019F9FC
  c->r[10]=((c->r[10])&0x20)?0u:(c->r[11]<<((c->r[10])&31)); // 8019FA00
  c->r[0]=c->r[0]|c->r[12]; // 8019FA04
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[9]<<((c->r[8])&31)); // 8019FA08
  c->r[0]=c->r[0]|c->r[10]; // 8019FA0C
  c->r[7]=c->r[7]+0x00000008u; // 8019FA10
  c->r[0]=c->r[0]|c->r[8]; // 8019FA14
  c->r[6]=c->r[6]+0x00000008u; // 8019FA18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019F95C; } // 8019FA1C
L_8019FA20:;
  c->r[6]=c->r[4]-c->r[7]; // 8019FA20
  c->r[9]=c->r[3]+c->r[7]; // 8019FA24
  c->ctr=c->r[6]; // 8019FA28
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 8019FA2C
  if (!crb(c,0)) { goto L_8019FA54; } // 8019FA30
L_8019FA34:;
  c->r[6]=addc(c,~c->r[7],0x00000003u,1); // 8019FA34
  c->r[8]=R8(c->r[9]+0x00000000u); // 8019FA38
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8019FA3C
  c->r[9]=c->r[9]+0x00000001u; // 8019FA40
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[8]<<((c->r[6])&31)); // 8019FA44
  c->r[7]=c->r[7]+0x00000001u; // 8019FA48
  c->r[0]=c->r[0]|c->r[6]; // 8019FA4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019FA34; } // 8019FA50
L_8019FA54:;
  c->r[6]=0u+0xCD000000u; // 8019FA54
  W32(c->r[6]+0x00006838u,c->r[0]); // 8019FA58
L_8019FA5C:;
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8019FA5C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8019FA60
  c->r[7]=c->r[6]|0x00000001u; // 8019FA64
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8019FA68
  c->r[6]=0u+0xCD000000u; // 8019FA6C
  c->r[0]=c->r[7]|c->r[0]; // 8019FA70
  W32(c->r[6]+0x00006834u,c->r[0]); // 8019FA74
L_8019FA78:;
  c->r[0]=R32(c->r[6]+0x00006834u); // 8019FA78
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FA7C
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FA78; } // 8019FA80
  cmps(c,0,(int32_t)c->r[5],0); // 8019FA84
  if (!crb(c,2)) { goto L_8019FBB4; } // 8019FA88
  c->r[5]=0u+0xCD000000u; // 8019FA8C
  cmps(c,1,(int32_t)c->r[4],0); // 8019FA90
  c->r[0]=R32(c->r[5]+0x00006838u); // 8019FA94
  c->r[5]=0u+0x00000000u; // 8019FA98
  if (!crb(c,5)) { goto L_8019FBB4; } // 8019FA9C
  cmps(c,0,(int32_t)c->r[4],8); // 8019FAA0
  c->r[7]=c->r[4]+0xFFFFFFF8u; // 8019FAA4
  if (!crb(c,1)) { goto L_8019FB88; } // 8019FAA8
  c->r[8]=0u+0x00000000u; // 8019FAAC
  if (crb(c,4)) { goto L_8019FAC8; } // 8019FAB0
  c->r[6]=0u+0x80000000u; // 8019FAB4
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 8019FAB8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 8019FABC
  if (crb(c,1)) { goto L_8019FAC8; } // 8019FAC0
  c->r[8]=0u+0x00000001u; // 8019FAC4
L_8019FAC8:;
  cmps(c,0,(int32_t)c->r[8],0); // 8019FAC8
  if (crb(c,2)) { goto L_8019FB88; } // 8019FACC
  c->r[6]=c->r[7]+0x00000007u; // 8019FAD0
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 8019FAD4
  c->ctr=c->r[6]; // 8019FAD8
  cmps(c,0,(int32_t)c->r[7],0); // 8019FADC
  if (!crb(c,1)) { goto L_8019FB88; } // 8019FAE0
L_8019FAE4:;
  c->r[6]=addc(c,~c->r[5],0x00000003u,1); // 8019FAE4
  c->r[7]=c->r[5]+0x00000001u; // 8019FAE8
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8019FAEC
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 8019FAF0
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 8019FAF4
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8019FAF8
  W8(c->r[3]+0x00000000u,c->r[9]); // 8019FAFC
  c->r[7]=c->r[5]+0x00000002u; // 8019FB00
  c->r[6]=0u-c->r[5]; // 8019FB04
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 8019FB08
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8019FB0C
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 8019FB10
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8019FB14
  W8(c->r[3]+0x00000001u,c->r[9]); // 8019FB18
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 8019FB1C
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 8019FB20
  c->r[6]=c->r[5]+0x00000004u; // 8019FB24
  W8(c->r[3]+0x00000002u,c->r[9]); // 8019FB28
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 8019FB2C
  c->r[6]=c->r[5]+0x00000005u; // 8019FB30
  W8(c->r[3]+0x00000003u,c->r[8]); // 8019FB34
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8019FB38
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 8019FB3C
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 8019FB40
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8019FB44
  W8(c->r[3]+0x00000004u,c->r[9]); // 8019FB48
  c->r[6]=c->r[5]+0x00000006u; // 8019FB4C
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 8019FB50
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 8019FB54
  c->r[6]=c->r[5]+0x00000007u; // 8019FB58
  W8(c->r[3]+0x00000005u,c->r[8]); // 8019FB5C
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8019FB60
  c->r[5]=c->r[5]+0x00000008u; // 8019FB64
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 8019FB68
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 8019FB6C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 8019FB70
  W8(c->r[3]+0x00000006u,c->r[7]); // 8019FB74
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 8019FB78
  W8(c->r[3]+0x00000007u,c->r[6]); // 8019FB7C
  c->r[3]=c->r[3]+0x00000008u; // 8019FB80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019FAE4; } // 8019FB84
L_8019FB88:;
  c->r[6]=c->r[4]-c->r[5]; // 8019FB88
  c->ctr=c->r[6]; // 8019FB8C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 8019FB90
  if (!crb(c,0)) { goto L_8019FBB4; } // 8019FB94
L_8019FB98:;
  c->r[4]=addc(c,~c->r[5],0x00000003u,1); // 8019FB98
  c->r[5]=c->r[5]+0x00000001u; // 8019FB9C
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8019FBA0
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8019FBA4
  W8(c->r[3]+0x00000000u,c->r[4]); // 8019FBA8
  c->r[3]=c->r[3]+0x00000001u; // 8019FBAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8019FB98; } // 8019FBB0
L_8019FBB4:;
  c->r[11]=c->r[1]+0x00000020u; // 8019FBB4
  c->r[3]=0u+0x00000001u; // 8019FBB8
  c->lr=0x8019FBC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8019FBBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019FBC0
  c->lr=c->r[0]; // 8019FBC4
  c->r[1]=c->r[1]+0x00000020u; // 8019FBC8
  return; // 8019FBCC
}

// __DBEXIInit
void f_8019FBD0(Ctx* __restrict c) {
  trace_call(0x8019FBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FBD0
  c->r[0]=c->lr; // 8019FBD4
  c->r[3]=0u+0x00020000u; // 8019FBD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019FBDC
  c->r[3]=c->r[3]+0xFFFF8000u; // 8019FBE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019FBE4
  c->lr=0x8019FBECu; f_80160FF8(c); // 8019FBE8
  c->r[3]=0u+0xCD000000u; // 8019FBEC
L_8019FBF0:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 8019FBF0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8019FBF4
  cmpu(c,0,c->r[0],0x00000001u); // 8019FBF8
  if (crb(c,2)) { IRQCHK(c); goto L_8019FBF0; } // 8019FBFC
  c->r[31]=0u+0xCD000000u; // 8019FC00
  c->r[0]=0u+0x00000000u; // 8019FC04
  W32(c->r[31]+0x00006828u,c->r[0]); // 8019FC08
  c->r[3]=0u+0xB4000000u; // 8019FC0C
  c->r[0]=0u+0xD4000000u; // 8019FC10
  c->r[4]=0u+0x00000004u; // 8019FC14
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8019FC18
  c->r[3]=c->r[1]+0x0000000Cu; // 8019FC1C
  c->r[5]=0u+0x00000001u; // 8019FC20
  W32(c->r[1]+0x00000008u,c->r[0]); // 8019FC24
  c->r[0]=R32(c->r[31]+0x00006828u); // 8019FC28
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 8019FC2C
  c->r[0]=c->r[0]|0x000000C0u; // 8019FC30
  W32(c->r[31]+0x00006828u,c->r[0]); // 8019FC34
  c->lr=0x8019FC3Cu; f_8019F8E8(c); // 8019FC38
L_8019FC3C:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 8019FC3C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FC40
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FC3C; } // 8019FC44
  c->r[3]=c->r[1]+0x00000008u; // 8019FC48
  c->r[4]=0u+0x00000004u; // 8019FC4C
  c->r[5]=0u+0x00000001u; // 8019FC50
  c->lr=0x8019FC58u; f_8019F8E8(c); // 8019FC54
  c->r[3]=0u+0xCD000000u; // 8019FC58
L_8019FC5C:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 8019FC5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FC60
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FC5C; } // 8019FC64
  c->r[3]=0u+0xCD000000u; // 8019FC68
  c->r[0]=R32(c->r[3]+0x00006828u); // 8019FC6C
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 8019FC70
  W32(c->r[3]+0x00006828u,c->r[0]); // 8019FC74
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019FC78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019FC7C
  c->lr=c->r[0]; // 8019FC80
  c->r[1]=c->r[1]+0x00000020u; // 8019FC84
  return; // 8019FC88
}

// __DBEXIReadReg
void f_8019FC8C(Ctx* __restrict c) {
  trace_call(0x8019FC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FC8C
  c->r[0]=c->lr; // 8019FC90
  c->r[6]=0u+0x00000000u; // 8019FC94
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019FC98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019FC9C
  c->r[31]=c->r[5]|c->r[5]; // 8019FCA0
  c->r[5]=0u+0x00000001u; // 8019FCA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019FCA8
  c->r[30]=c->r[4]|c->r[4]; // 8019FCAC
  c->r[4]=0u+0x00000004u; // 8019FCB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019FCB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019FCB8
  c->r[28]=0u+0xCD000000u; // 8019FCBC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8019FCC0
  c->r[3]=c->r[1]+0x00000008u; // 8019FCC4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8019FCC8
  c->r[0]=R32(c->r[28]+0x00006828u); // 8019FCCC
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 8019FCD0
  c->r[0]=c->r[0]|0x000000C0u; // 8019FCD4
  W32(c->r[28]+0x00006828u,c->r[0]); // 8019FCD8
  c->lr=0x8019FCE0u; f_8019F8E8(c); // 8019FCDC
  c->r[0]=cntlz(c->r[3]); // 8019FCE0
  c->r[29]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FCE4
L_8019FCE8:;
  c->r[0]=R32(c->r[28]+0x00006834u); // 8019FCE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FCEC
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FCE8; } // 8019FCF0
  c->r[3]=c->r[1]+0x0000000Cu; // 8019FCF4
  c->r[4]=0u+0x00000004u; // 8019FCF8
  c->r[5]=0u+0x00000000u; // 8019FCFC
  c->lr=0x8019FD04u; f_8019F8E8(c); // 8019FD00
  c->r[0]=cntlz(c->r[3]); // 8019FD04
  c->r[3]=0u+0xCD000000u; // 8019FD08
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FD0C
  c->r[6]=c->r[29]|c->r[0]; // 8019FD10
L_8019FD14:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 8019FD14
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FD18
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FD14; } // 8019FD1C
  c->r[3]=0u+0xCD000000u; // 8019FD20
  cmps(c,1,(int32_t)c->r[31],2); // 8019FD24
  c->r[0]=R32(c->r[3]+0x00006828u); // 8019FD28
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 8019FD2C
  W32(c->r[3]+0x00006828u,c->r[0]); // 8019FD30
  if (crb(c,6)) { goto L_8019FD58; } // 8019FD34
  if (!crb(c,4)) { goto L_8019FD6C; } // 8019FD38
  cmps(c,0,(int32_t)c->r[31],1); // 8019FD3C
  if (!crb(c,0)) { goto L_8019FD48; } // 8019FD40
  goto L_8019FD6C; // 8019FD44
L_8019FD48:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019FD48
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 8019FD4C
  W8(c->r[30]+0x00000000u,c->r[0]); // 8019FD50
  goto L_8019FD88; // 8019FD54
L_8019FD58:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8019FD58
  c->r[0]=rotl(c->r[3],24)&0x0000FF00u; // 8019FD5C
  c->r[0]=(rotl(c->r[3],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8019FD60
  W16(c->r[30]+0x00000000u,c->r[0]); // 8019FD64
  goto L_8019FD88; // 8019FD68
L_8019FD6C:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8019FD6C
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 8019FD70
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 8019FD74
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8019FD78
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8019FD7C
  c->r[0]=c->r[3]|c->r[0]; // 8019FD80
  W32(c->r[30]+0x00000000u,c->r[0]); // 8019FD84
L_8019FD88:;
  c->r[0]=cntlz(c->r[6]); // 8019FD88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019FD8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019FD90
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FD94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019FD98
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019FD9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019FDA0
  c->lr=c->r[0]; // 8019FDA4
  c->r[1]=c->r[1]+0x00000020u; // 8019FDA8
  return; // 8019FDAC
}

// __DBEXIWriteReg
void f_8019FDB0(Ctx* __restrict c) {
  trace_call(0x8019FDB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FDB0
  c->r[0]=c->lr; // 8019FDB4
  cmps(c,0,(int32_t)c->r[5],2); // 8019FDB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019FDBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019FDC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019FDC4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8019FDC8
  if (crb(c,2)) { goto L_8019FDF0; } // 8019FDCC
  if (!crb(c,0)) { goto L_8019FE04; } // 8019FDD0
  cmps(c,0,(int32_t)c->r[5],1); // 8019FDD4
  if (!crb(c,0)) { goto L_8019FDE0; } // 8019FDD8
  goto L_8019FE04; // 8019FDDC
L_8019FDE0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8019FDE0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 8019FDE4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019FDE8
  goto L_8019FE20; // 8019FDEC
L_8019FDF0:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 8019FDF0
  c->r[0]=rotl(c->r[3],8)&0x00FF0000u; // 8019FDF4
  c->r[0]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8019FDF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019FDFC
  goto L_8019FE20; // 8019FE00
L_8019FE04:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 8019FE04
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 8019FE08
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 8019FE0C
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8019FE10
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8019FE14
  c->r[0]=c->r[3]|c->r[0]; // 8019FE18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8019FE1C
L_8019FE20:;
  c->r[30]=0u+0xCD000000u; // 8019FE20
  c->r[3]=c->r[1]+0x00000008u; // 8019FE24
  c->r[0]=R32(c->r[30]+0x00006828u); // 8019FE28
  c->r[4]=0u+0x00000004u; // 8019FE2C
  c->r[5]=0u+0x00000001u; // 8019FE30
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 8019FE34
  c->r[0]=c->r[0]|0x000000C0u; // 8019FE38
  W32(c->r[30]+0x00006828u,c->r[0]); // 8019FE3C
  c->lr=0x8019FE44u; f_8019F8E8(c); // 8019FE40
  c->r[0]=cntlz(c->r[3]); // 8019FE44
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FE48
L_8019FE4C:;
  c->r[0]=R32(c->r[30]+0x00006834u); // 8019FE4C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FE50
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FE4C; } // 8019FE54
  c->r[3]=c->r[1]+0x0000000Cu; // 8019FE58
  c->r[4]=0u+0x00000004u; // 8019FE5C
  c->r[5]=0u+0x00000001u; // 8019FE60
  c->lr=0x8019FE68u; f_8019F8E8(c); // 8019FE64
  c->r[0]=cntlz(c->r[3]); // 8019FE68
  c->r[3]=0u+0xCD000000u; // 8019FE6C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FE70
  c->r[5]=c->r[31]|c->r[0]; // 8019FE74
L_8019FE78:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 8019FE78
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FE7C
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FE78; } // 8019FE80
  c->r[4]=0u+0xCD000000u; // 8019FE84
  c->r[0]=cntlz(c->r[5]); // 8019FE88
  c->r[5]=R32(c->r[4]+0x00006828u); // 8019FE8C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FE90
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 8019FE94
  W32(c->r[4]+0x00006828u,c->r[0]); // 8019FE98
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019FE9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019FEA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019FEA4
  c->lr=c->r[0]; // 8019FEA8
  c->r[1]=c->r[1]+0x00000020u; // 8019FEAC
  return; // 8019FEB0
}

// __DBEXIReadRam
void f_8019FEB4(Ctx* __restrict c) {
  trace_call(0x8019FEB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FEB4
  c->r[0]=c->lr; // 8019FEB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019FEBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019FEC0
  c->r[31]=0u+0xCD000000u; // 8019FEC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019FEC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019FECC
  c->r[29]=c->r[4]|c->r[4]; // 8019FED0
  c->r[4]=0u+0x00000004u; // 8019FED4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019FED8
  c->r[28]=c->r[5]|c->r[5]; // 8019FEDC
  c->r[5]=0u+0x00000001u; // 8019FEE0
  W32(c->r[1]+0x00000008u,c->r[3]); // 8019FEE4
  c->r[3]=c->r[1]+0x00000008u; // 8019FEE8
  c->r[0]=R32(c->r[31]+0x00006828u); // 8019FEEC
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 8019FEF0
  c->r[0]=c->r[0]|0x000000C0u; // 8019FEF4
  W32(c->r[31]+0x00006828u,c->r[0]); // 8019FEF8
  c->lr=0x8019FF00u; f_8019F8E8(c); // 8019FEFC
  c->r[0]=cntlz(c->r[3]); // 8019FF00
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FF04
L_8019FF08:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 8019FF08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FF0C
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FF08; } // 8019FF10
  c->r[31]=0u+0xCD000000u; // 8019FF14
  goto L_8019FF54; // 8019FF18
L_8019FF1C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8019FF1C
  c->r[4]=0u+0x00000004u; // 8019FF20
  c->r[5]=0u+0x00000000u; // 8019FF24
  c->lr=0x8019FF2Cu; f_8019F8E8(c); // 8019FF28
  c->r[0]=cntlz(c->r[3]); // 8019FF2C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FF30
  c->r[30]=c->r[30]|c->r[0]; // 8019FF34
L_8019FF38:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 8019FF38
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8019FF3C
  if (!crb(c,2)) { IRQCHK(c); goto L_8019FF38; } // 8019FF40
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8019FF44
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8019FF48
  W32(c->r[29]+0x00000000u,c->r[0]); // 8019FF4C
  c->r[29]=c->r[29]+0x00000004u; // 8019FF50
L_8019FF54:;
  cmps(c,0,(int32_t)c->r[28],0); // 8019FF54
  if (crb(c,1)) { IRQCHK(c); goto L_8019FF1C; } // 8019FF58
  c->r[4]=0u+0xCD000000u; // 8019FF5C
  c->r[0]=cntlz(c->r[30]); // 8019FF60
  c->r[5]=R32(c->r[4]+0x00006828u); // 8019FF64
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8019FF68
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 8019FF6C
  W32(c->r[4]+0x00006828u,c->r[0]); // 8019FF70
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019FF74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019FF78
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019FF7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019FF80
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019FF84
  c->lr=c->r[0]; // 8019FF88
  c->r[1]=c->r[1]+0x00000020u; // 8019FF8C
  return; // 8019FF90
}

